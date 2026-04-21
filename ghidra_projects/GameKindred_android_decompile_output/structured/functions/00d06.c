// functions/00d06 — 45 functions
#include "libGameKindred.h"




void FUN_00d06024(undefined8 *param_1,undefined4 param_2,undefined4 param_3,byte param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811a60;
  *(byte *)((long)param_1 + 0x24) = param_4 & 1;
  return;
}




void FUN_00d0604c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00d0608c(param_1);
    FUN_00ce5238(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined1 *)(param_1 + 0x24));
    return;
  }
  return;
}




void FUN_00d0608c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar2 != 0) {
    local_30[0] = *(undefined4 *)(param_1 + 0x20);
    lVar2 = FUN_00d9f258(lVar2,local_30);
    if (lVar2 != 0) {
      FUN_00d6e0e4(lVar2,*(undefined1 *)(param_1 + 0x24));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d060f8(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00d0608c(param_1);
  return;
}




void FUN_00d06130(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811a60;
  *(undefined1 *)((long)puVar1 + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d061a8(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined4 param_5,undefined1 param_6)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811a98;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_4 + 1);
  uVar1 = *param_4;
  *(undefined4 *)(param_1 + 5) = param_2;
  *(undefined4 *)((long)param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 6) = param_5;
  *(undefined1 *)((long)param_1 + 0x34) = param_6;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  return;
}




void FUN_00d061e0(long param_1)

{
  FUN_00ce8d18(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),param_1 + 0x1c,
               *(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x34));
  return;
}




void FUN_00d061f8(long param_1)

{
  int iVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined1 auStack_f0 [24];
  long local_d8 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) == 0) {
    FUN_00cedce4();
    lVar7 = FUN_00d9e390();
    if (lVar7 != 0) {
      FUN_00d5e124(lVar7,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   param_1 + 0x1c,*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x34));
    }
  }
  else {
    lVar7 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x28));
    if (lVar7 != 0) {
      FUN_00d4d54c(auStack_f0);
      FUN_00d4d354(auStack_f0,1);
      FUN_00d4d364(auStack_f0,1);
      uVar5 = FUN_00d9e840(auStack_f0,local_d8,0x10,0);
      if (uVar5 != 0) {
        uVar6 = (ulong)uVar5;
        plVar10 = local_d8;
        do {
          iVar1 = *(int *)(*plVar10 + 0x260);
          if (iVar1 != *(int *)(param_1 + 0x28)) {
            cVar3 = FUN_00d55870();
            cVar4 = FUN_00d55870(lVar7);
            if ((cVar3 == cVar4) && (lVar8 = FUN_00d9e390(iVar1), lVar8 != 0)) {
              FUN_00d5e124(lVar8,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                           param_1 + 0x1c,*(undefined4 *)(param_1 + 0x30),
                           *(undefined1 *)(param_1 + 0x34));
            }
          }
          uVar6 = uVar6 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar6 != 0);
      }
      FUN_00d55870(lVar7);
      uVar6 = FUN_00d262e8();
      if ((uVar6 & 1) != 0) {
        FUN_00d55870(lVar7);
        uVar9 = FUN_00d25ff0();
        FUN_00d26864(uVar9,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                     param_1 + 0x1c,*(undefined4 *)(param_1 + 0x30),*(undefined1 *)(param_1 + 0x34))
        ;
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d06360(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811a98;
  uVar2 = *(undefined8 *)(param_1 + 0x25);
  *(undefined8 *)((long)puVar1 + 0x2d) = *(undefined8 *)(param_1 + 0x2d);
  *(undefined8 *)((long)puVar1 + 0x25) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d063d8(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_02811ad0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  thunk_FUN_00d9ff34(local_30,param_3);
  *(undefined4 *)(param_1 + 4) = local_30[0];
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d0644c(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811ad0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00d0646c(long param_1)

{
  FUN_00ce6ed4(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d06478(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar3 == 0) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  uVar6 = 0xffff0000;
  lVar4 = lVar3;
LAB_00d064f0:
  do {
    do {
      lVar5 = lVar4;
      if ((lVar5 != lVar3) &&
         (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x2a7d0549), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar5,uVar2,0);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d064f0;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar5 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d06568(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811ad0;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d065d8(undefined8 *param_1,undefined4 param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811b08;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  return;
}




void FUN_00d065f8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00ce72a0(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00d0662c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) == 0) || (lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar3 == 0)) {
    return;
  }
  uVar6 = 0x10000;
  lVar4 = lVar3;
LAB_00d066a8:
  do {
    do {
      lVar5 = lVar4;
      if ((lVar5 != lVar3) &&
         (lVar4 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x24c904dd), lVar4 != 0)) {
        (**(code **)(lVar4 + 8))(lVar5);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar4 = *(long *)(lVar5 + 0x18), lVar4 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_00d066a8;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar4 = *(long *)(lVar5 + 0x20), lVar4 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar5 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d06718(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811b08;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d06788(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *param_1 = &PTR_FUN_02811b40;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  return;
}




void FUN_00d067ac(long param_1)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x24));
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_03130aa8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    FUN_00d72db4(lVar2,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
    FUN_00ce73d4(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d0681c(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  
  uVar4 = FUN_00ceab48();
  if (((uVar4 & 1) == 0) || (lVar5 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x24)), lVar5 == 0)) {
    return;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  uVar8 = 0x10000;
  lVar6 = lVar5;
LAB_00d068a0:
  do {
    do {
      lVar7 = lVar6;
      if ((lVar7 != lVar5) &&
         (lVar6 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x1fe80483), lVar6 != 0)) {
        (**(code **)(lVar6 + 8))(lVar7,uVar2,uVar3);
      }
      if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar6 = *(long *)(lVar7 + 0x18), lVar6 != 0)) {
        uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
        goto LAB_00d068a0;
      }
      if ((uVar8 & 0xffff) == 0) {
        return;
      }
      lVar6 = *(long *)(lVar7 + 0x20);
    } while (*(long *)(lVar7 + 0x20) != 0);
    lVar7 = *(long *)(lVar7 + 0x10);
    if (lVar7 == 0) {
      return;
    }
    uVar1 = uVar8 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar8 = uVar1 | uVar8 & 0xffff0000;
    while (lVar6 = *(long *)(lVar7 + 0x20), lVar6 == 0) {
      if ((uVar8 - 1 & 0xffff) == 0) {
        return;
      }
      lVar7 = *(long *)(lVar7 + 0x10);
      uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
      if (lVar7 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d0691c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811b40;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d06994(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811b78;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_2;
  return;
}




void FUN_00d069b4(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00ce7654(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00d069e8(long param_1)

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
LAB_00d06a7c:
  do {
    do {
      lVar6 = lVar5;
      if ((lVar6 != lVar4) &&
         (lVar5 = FUN_019865b4(*(undefined8 *)(lVar6 + 8),0x11fe0340), lVar5 != 0)) {
        (**(code **)(lVar5 + 8))(lVar6,uVar2);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar5 = *(long *)(lVar6 + 0x18), lVar5 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d06a7c;
      }
      if ((uVar7 & 0xffff) == 0) goto LAB_00d06ad8;
      lVar5 = *(long *)(lVar6 + 0x20);
    } while (*(long *)(lVar6 + 0x20) != 0);
    lVar6 = *(long *)(lVar6 + 0x10);
    if ((lVar6 == 0) || (uVar1 = uVar7 - 1 & 0xffff, uVar1 == 0)) {
LAB_00d06ad8:
      FUN_009bc270(*(undefined4 *)(lVar4 + 0x260));
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar5 = *(long *)(lVar6 + 0x20), lVar5 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) goto LAB_00d06ad8;
      lVar6 = *(long *)(lVar6 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar6 == 0) goto LAB_00d06ad8;
    }
  } while( true );
}




void FUN_00d06af4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811b78;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d06b64(undefined8 *param_1,undefined4 param_2,undefined4 *param_3,byte param_4,
                 undefined1 param_5,byte *param_6,byte param_7)

{
  ulong uVar1;
  undefined8 *puVar2;
  uint *puVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(byte *)(param_1 + 0x14) = param_4;
  *(byte *)((long)param_1 + 0xa1) = param_7;
  *param_1 = &PTR_FUN_02811bb0;
  *(undefined1 *)((long)param_1 + 0xa2) = param_5;
  if (param_4 != 0) {
    uVar1 = (ulong)param_4;
    puVar2 = param_1 + 4;
    do {
      uVar1 = uVar1 - 1;
      *(undefined4 *)puVar2 = *param_3;
      param_3 = param_3 + 1;
      puVar2 = (undefined8 *)((long)puVar2 + 4);
    } while (uVar1 != 0);
  }
  if (param_7 != 0) {
    uVar1 = (ulong)param_7;
    puVar3 = (uint *)(param_1 + 0xe);
    do {
      uVar1 = uVar1 - 1;
      *puVar3 = (uint)*param_6;
      param_6 = param_6 + 1;
      puVar3 = puVar3 + 1;
    } while (uVar1 != 0);
  }
  return;
}




void FUN_00d06bd0(long param_1)

{
  FUN_009278ec(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20,*(undefined1 *)(param_1 + 0xa0),
               *(undefined1 *)(param_1 + 0xa2),param_1 + 0x70,*(undefined1 *)(param_1 + 0xa1));
  return;
}




void FUN_00d06bf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    uVar2 = FUN_00d9ebe8();
    FUN_00d7858c(uVar2,param_1 + 0x20,*(undefined1 *)(param_1 + 0xa0),
                 *(undefined1 *)(param_1 + 0xa2),param_1 + 0x70,*(undefined1 *)(param_1 + 0xa1));
    return;
  }
  return;
}




void FUN_00d06c40(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0xa8,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_02811bb0;
  puVar1[2] = uVar3;
  puVar1[1] = uVar2;
  memcpy((void *)((long)puVar1 + 0x1c),(void *)(param_1 + 0x1c),0x87);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d06cc4(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811be8;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00d06ce4(long param_1)

{
  ulong uVar1;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceb094();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_009278f4(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d06d1c(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceb094();
  if (((uVar1 & 1) == 0) && (lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar2 != 0)) {
    uVar3 = FUN_00d9ebe8();
    FUN_00d783e8(uVar3,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d06d68(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811be8;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d06dd8(undefined4 param_1,undefined8 *param_2)

{
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *param_2 = &PTR_FUN_02811c20;
  *(undefined4 *)((long)param_2 + 0x1c) = param_1;
  return;
}




void FUN_00d06df8(long param_1)

{
  FUN_00927a34(*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_00d06e00(long param_1)

{
  FUN_00ce2834((double)*(float *)(param_1 + 0x1c));
  return;
}




void FUN_00d06e10(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811c20;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d06e80(undefined8 *param_1,undefined4 param_2,byte param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *param_1 = &PTR_FUN_02811c58;
  *(byte *)(param_1 + 4) = param_3 & 1;
  return;
}




void FUN_00d06ea8(long param_1)

{
  FUN_00927a3c(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x20));
  return;
}




void FUN_00d06eb8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if (((uVar1 & 1) == 0) &&
     (uVar1 = FUN_00ced270(*(undefined4 *)(param_1 + 0x1c)), (uVar1 & 1) != 0)) {
    FUN_00ceab70(*(undefined1 *)(param_1 + 0x20),&DAT_03210450);
    return;
  }
  return;
}




void FUN_00d06f04(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811c58;
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_1 + 0x20);
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d06f7c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811c90;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_00d06fa0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce3a58(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}




void FUN_00d06fd8(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long *plVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((((uVar3 & 1) != 0) || (lVar4 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar4 == 0)) ||
     ((uVar3 = FUN_00ceab64(), (uVar3 & 1) != 0 && ((*(byte *)(lVar4 + 0x2f4) >> 4 & 1) != 0))))
  goto LAB_00d0722c;
  FUN_00e70510(&local_48);
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    pcVar5 = "INGAME_STATUS_TEXT_SLOWED";
    goto LAB_00d07118;
  case 1:
    pcVar5 = "INGAME_STATUS_TEXT_FEARED";
    break;
  case 2:
    pcVar5 = "INGAME_STATUS_TEXT_CHARMED";
    break;
  case 3:
    pcVar5 = "INGAME_STATUS_TEXT_PANICKED";
    goto LAB_00d07118;
  case 4:
    pcVar5 = "INGAME_STATUS_TEXT_BLINDED";
    goto LAB_00d07118;
  case 5:
    pcVar5 = "INGAME_STATUS_TEXT_MISSED";
    break;
  case 6:
    pcVar5 = "INGAME_STATUS_TEXT_DODGED";
    break;
  case 7:
    pcVar5 = "INGAME_STATUS_TEXT_BLOCKED";
    break;
  case 8:
    pcVar5 = "INGAME_STATUS_TEXT_INVULNERABLE";
    break;
  case 9:
    uVar6 = FUN_00e6ce7c("INGAME_STATUS_TEXT_RESISTED",0);
    FUN_00910394(&local_48,uVar6);
    uVar9 = 0x3e000000;
    goto LAB_00d071c8;
  case 10:
    pcVar5 = "INGAME_STATUS_TEXT_ROOTED";
    break;
  case 0xb:
    pcVar5 = "INGAME_STATUS_TEXT_STASIS";
    break;
  case 0xc:
    pcVar5 = "INGAME_STATUS_TEXT_TAUNTED";
    break;
  case 0xd:
    pcVar5 = "INGAME_STATUS_TEXT_CLEANSED";
LAB_00d07118:
    uVar6 = FUN_00e6ce7c(pcVar5,0);
    FUN_00910394(&local_48,uVar6);
    uVar9 = 0x3d4ccccd;
    goto LAB_00d071c8;
  case 0xe:
    pcVar5 = "INGAME_STATUS_TEXT_REKT";
    break;
  case 0xf:
    pcVar5 = "INGAME_STATUS_TEXT_FULFILLED";
    break;
  case 0x10:
    pcVar5 = "INGAME_STATUS_TEXT_RELOADING";
    break;
  case 0x11:
    pcVar5 = "INGAME_STATUS_TEXT_EATEN";
    break;
  case 0x12:
    pcVar5 = "INGAME_STATUS_TEXT_OM";
    break;
  case 0x13:
    pcVar5 = "INGAME_STATUS_TEXT_NOM";
    break;
  case 0x14:
    pcVar5 = "INGAME_STATUS_TEXT_GAMEOVER";
    goto LAB_00d07298;
  case 0x15:
    pcVar5 = "INGAME_STATUS_TEXT_BLITZ_SCORE_1";
    goto LAB_00d07188;
  case 0x16:
    uVar6 = FUN_00e6ce7c("INGAME_STATUS_TEXT_BLITZ_SCORE_2",0);
    FUN_00910394(&local_48,uVar6);
    uVar9 = 0x40200000;
    goto LAB_00d071c8;
  case 0x17:
    pcVar5 = "INGAME_STATUS_TEXT_BLITZ_SCORE_3";
LAB_00d07298:
    uVar6 = FUN_00e6ce7c(pcVar5,0);
    FUN_00910394(&local_48,uVar6);
    uVar9 = 0x40400000;
    goto LAB_00d071c8;
  case 0x18:
    pcVar5 = "INGAME_STATUS_TEXT_EXECUTED";
LAB_00d07188:
    uVar6 = FUN_00e6ce7c(pcVar5,0);
    FUN_00910394(&local_48,uVar6);
    uVar9 = 0x40000000;
    goto LAB_00d071c8;
  default:
    goto switchD_00d0704c_default;
  }
  uVar6 = FUN_00e6ce7c(pcVar5,0);
  FUN_00910394(&local_48,uVar6);
  uVar9 = 0x3e19999a;
LAB_00d071c8:
  plVar7 = (long *)FUN_00d5bae0(lVar4);
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) - 0x15U < 3) {
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      pcVar8 = *(code **)(*plVar7 + 0x138);
    }
    else {
      if (*(int *)(param_1 + 0x20) != 0x14) {
        (**(code **)(*plVar7 + 0x130))(uVar9,plVar7,&local_48);
        goto switchD_00d0704c_default;
      }
      uVar1 = *(undefined4 *)(param_1 + 0x24);
      pcVar8 = *(code **)(*plVar7 + 0x140);
    }
    (*pcVar8)(uVar9,plVar7,&local_48,&DAT_01bc9940,uVar1);
  }
switchD_00d0704c_default:
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
LAB_00d0722c:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

