// functions/00d07 — 38 functions
#include "libGameKindred.h"




void FUN_00d072bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811c90;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d07334(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02811cc8;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00d07354(void)

{
  uint uVar1;
  
  uVar1 = FUN_00ceab48();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_00ceab64(), (uVar1 & 1) == 0)) {
    FUN_009c1178();
    return;
  }
  return;
}




void FUN_00d07380(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811cc8;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d073e8(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02811d00;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00d07408(void)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  long local_8e0 [70];
  undefined8 auStack_6b0 [200];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab64();
  if ((uVar4 & 1) == 0) {
    FUN_009c1158();
  }
  else {
    FUN_009dc960();
  }
  uVar3 = FUN_019889cc(auStack_6b0,200,DAT_02c7bf48,0);
  if (uVar3 != 0) {
    uVar4 = (ulong)uVar3;
    puVar7 = auStack_6b0;
    do {
      FUN_00d6c5b0(*puVar7);
      uVar4 = uVar4 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar4 != 0);
  }
  uVar3 = FUN_019889cc(local_8e0,0x46,DAT_02c7eb30,0);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      lVar8 = local_8e0[uVar4];
      if (lVar8 != 0) {
        uVar9 = 0xffff0000;
        lVar5 = lVar8;
LAB_00d074ec:
        do {
          do {
            lVar6 = lVar5;
            if ((lVar6 != lVar8) &&
               (lVar5 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x23ed04d9), lVar5 != 0)) {
              (**(code **)(lVar5 + 8))(lVar6);
            }
            if (((uVar9 & 0xffff) < uVar9 >> 0x10) && (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0))
            {
              uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
              goto LAB_00d074ec;
            }
            if ((uVar9 & 0xffff) == 0) goto LAB_00d07550;
            lVar5 = *(long *)(lVar6 + 0x20);
          } while (*(long *)(lVar6 + 0x20) != 0);
          lVar6 = *(long *)(lVar6 + 0x10);
          if ((lVar6 == 0) || (uVar1 = uVar9 - 1 & 0xffff, uVar1 == 0)) break;
          uVar9 = uVar1 | uVar9 & 0xffff0000;
          while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
            if ((uVar9 - 1 & 0xffff) == 0) goto LAB_00d07550;
            lVar6 = *(long *)(lVar6 + 0x10);
            uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
            if (lVar6 == 0) goto LAB_00d07550;
          }
        } while( true );
      }
LAB_00d07550:
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d07594(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811d00;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d075fc(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *param_2 = &PTR_FUN_02811d38;
  *(undefined4 *)(param_2 + 4) = param_1;
  return;
}




void FUN_00d07620(long param_1)

{
  FUN_00ce4608(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00d07630(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar1 != 0) && (uVar2 = FUN_00ceab48(), (uVar2 & 1) == 0)) {
    lVar3 = *(long *)(lVar1 + 0x18);
    while( true ) {
      if (lVar3 == 0) {
        uVar4 = FUN_01985d44(lVar1);
        FUN_00d79b54(*(undefined4 *)(param_1 + 0x20),uVar4,0);
        return;
      }
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02c7bf28) break;
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    FUN_00d79b60(*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d076bc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811d38;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d0772c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *param_1 = &PTR_FUN_02811d70;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(byte *)((long)param_1 + 0x2c) = param_4 & 1;
  param_1[4] = uVar1;
  return;
}




void FUN_00d07764(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar2 != 0) &&
     ((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00ce5a34(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,*(undefined1 *)(param_1 + 0x2c));
    return;
  }
  return;
}




void FUN_00d077d0(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar2 != 0) &&
     ((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d57870(lVar2,param_1 + 0x20,*(undefined1 *)(param_1 + 0x2c));
    return;
  }
  return;
}




void FUN_00d0783c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811d70;
  *(undefined1 *)((long)puVar1 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d078b4(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  *param_1 = &PTR_FUN_02811da8;
  *(byte *)(param_1 + 5) = param_5 & 1;
  return;
}




void FUN_00d078e0(long param_1)

{
  FUN_00ce94bc(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}




void FUN_00d078f4(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ceab48();
  if (((uVar1 & 1) == 0) && (lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x24)), lVar2 != 0)) {
    FUN_00d5a0d4(lVar2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}




void FUN_00d0793c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811da8;
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d079b4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02811de0;
  *(undefined1 *)(param_1 + 3) = 0;
  FUN_00d7f698((long)param_1 + 0x1c);
  return;
}




void FUN_00d079d8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x20) - 2;
  FUN_009278fc(*(undefined4 *)(param_1 + 0xb4),*(undefined1 *)(param_1 + 0x1c),
               *(int *)(param_1 + 0x20),param_1 + 0x24,param_1 + 100,param_1 + 0x74,
               *(undefined4 *)(param_1 + 0xb8),(uint)(uVar1 < 4) & 0xdU >> (ulong)(uVar1 & 0xf));
  return;
}




void FUN_00d07a14(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_0091ac14(param_1 + 0x1c);
  return;
}




void FUN_00d07a4c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0xc0,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_02811de0;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  memcpy((void *)((long)puVar1 + 0x1c),(void *)(param_1 + 0x1c),0xa0);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d07ad0(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *param_1 = &PTR_FUN_02811e18;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(byte *)((long)param_1 + 0x2c) = param_4 & 1;
  param_1[4] = uVar1;
  return;
}




void FUN_00d07b08(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    if (((*(char *)(param_1 + 0x2c) != '\0') ||
        (uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f)) ||
       (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
      FUN_00ce63fc(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,*(char *)(param_1 + 0x2c) != '\0')
      ;
      return;
    }
  }
  return;
}




void FUN_00d07b80(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  undefined1 auStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar3 != 0) &&
     (((*(char *)(param_1 + 0x2c) != '\0' ||
       (uVar6 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar6 == 0x1f)) ||
      (1 < *(ushort *)(lVar3 + (ulong)uVar6 * 0x38 + 0x90) - 3)))) {
    FUN_00d55794(lVar3,auStack_68,0);
    FUN_00d58004(lVar3,param_1 + 0x20);
    uVar6 = 0xffff0000;
    lVar4 = lVar3;
LAB_00d07c5c:
    do {
      do {
        lVar5 = lVar4;
        if ((lVar5 != lVar3) &&
           (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x1ab4042d), lVar4 != 0)) {
          (**(code **)(lVar4 + 8))(lVar5,auStack_68,param_1 + 0x20);
        }
        if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
          uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
          goto LAB_00d07c5c;
        }
        if ((uVar6 & 0xffff) == 0) goto LAB_00d07cbc;
        lVar4 = *(long *)(lVar5 + 0x20);
      } while (*(long *)(lVar5 + 0x20) != 0);
      lVar5 = *(long *)(lVar5 + 0x10);
      if ((lVar5 == 0) || (uVar1 = uVar6 - 1 & 0xffff, uVar1 == 0)) goto LAB_00d07cbc;
      uVar6 = uVar1 | uVar6 & 0xffff0000;
      while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
        if ((uVar6 - 1 & 0xffff) == 0) goto LAB_00d07cbc;
        lVar5 = *(long *)(lVar5 + 0x10);
        uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
        if (lVar5 == 0) goto LAB_00d07cbc;
      }
    } while( true );
  }
  goto LAB_00d07cf0;
LAB_00d07cbc:
  for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0314f724) {
      FUN_00d6074c(lVar3,0);
      break;
    }
  }
LAB_00d07cf0:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d07d24(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811e18;
  *(undefined1 *)((long)puVar1 + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d07d9c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811e50;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00d07dbc(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce4380(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d07df0(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d5c574(lVar1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d07e2c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811e50;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d07e9c(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811e88;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_00d07ebc(long param_1)

{
  FUN_00ce9750(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00d07ec4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d5a288();
    return;
  }
  return;
}




void FUN_00d07eec(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811e88;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




bool FUN_00d07f5c(long param_1)

{
  return *(float *)(param_1 + 0x10) == 0.0;
}




void FUN_00d07f6c(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  
  if (PTR_s_threat_neutral_02beafe0 != (undefined *)0x0) {
    uVar2 = 1;
    puVar1 = PTR_s_threat_neutral_02beafe0;
    do {
      FUN_00eee8e8(*(undefined4 *)(param_1 + 0x108),*(undefined4 *)(param_1 + 0x10c),
                   *(undefined4 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 0x114),0x3f333333,
                   0x3e800000,puVar1,*(undefined4 *)(param_1 + 0x118),
                   *(undefined4 *)(param_1 + 0x11c),0xf);
      puVar1 = (&PTR_s_threat_neutral_02beafe0)[uVar2];
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (puVar1 != (undefined *)0x0);
  }
  return;
}




void FUN_00d07ff4(void)

{
  undefined **ppuVar1;
  ulong uVar2;
  
  if (PTR_s_threat_neutral_02beafe0 != (undefined *)0x0) {
    uVar2 = 1;
    do {
      FUN_00eee9cc();
      ppuVar1 = &PTR_s_threat_neutral_02beafe0 + uVar2;
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (*ppuVar1 != (undefined *)0x0);
  }
  return;
}

