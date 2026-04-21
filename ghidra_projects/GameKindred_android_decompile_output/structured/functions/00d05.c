// functions/00d05 — 34 functions
#include "libGameKindred.h"




void FUN_00d05074(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  long local_2a0 [70];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  local_2a0[0] = 0;
  FUN_019889cc(local_2a0,1,DAT_0312edf0,0);
  piVar5 = (int *)(**(code **)(*(long *)(local_2a0[0] + 0x28) + 0x10))
                            ((long *)(local_2a0[0] + 0x28),*(undefined4 *)(param_1 + 0x1c));
  if (*(int *)(param_1 + 0x24) == 1) {
    iVar8 = *piVar5 + *(int *)(param_1 + 0x20);
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) goto LAB_00d05100;
    iVar8 = *(int *)(param_1 + 0x20);
  }
  *piVar5 = iVar8;
LAB_00d05100:
  uVar4 = FUN_019889cc(local_2a0,0x46,DAT_02c7eb30,0);
  if (uVar4 != 0) {
    uVar12 = 0;
    do {
      lVar13 = local_2a0[uVar12];
      if (lVar13 != 0) {
        uVar2 = *(undefined4 *)(param_1 + 0x1c);
        uVar14 = 0xffff0000;
        lVar6 = lVar13;
LAB_00d05174:
        do {
          do {
            lVar9 = lVar6;
            if ((lVar9 != lVar13) &&
               (lVar6 = FUN_019865b4(*(undefined8 *)(lVar9 + 8),0x583e07b0), lVar6 != 0)) {
              (**(code **)(lVar6 + 8))(lVar9,uVar2);
            }
            if (((uVar14 & 0xffff) < uVar14 >> 0x10) &&
               (lVar6 = *(long *)(lVar9 + 0x18), lVar6 != 0)) {
              uVar14 = uVar14 & 0xffff0000 | uVar14 + 1 & 0xffff;
              goto LAB_00d05174;
            }
            if ((uVar14 & 0xffff) == 0) goto LAB_00d051dc;
            lVar6 = *(long *)(lVar9 + 0x20);
          } while (*(long *)(lVar9 + 0x20) != 0);
          lVar9 = *(long *)(lVar9 + 0x10);
          if ((lVar9 == 0) || (uVar1 = uVar14 - 1 & 0xffff, uVar1 == 0)) break;
          uVar14 = uVar1 | uVar14 & 0xffff0000;
          while (lVar6 = *(long *)(lVar9 + 0x20), lVar6 == 0) {
            if ((uVar14 - 1 & 0xffff) == 0) goto LAB_00d051dc;
            lVar9 = *(long *)(lVar9 + 0x10);
            uVar14 = uVar14 & 0xffff0000 | uVar14 - 1 & 0xffff;
            if (lVar9 == 0) goto LAB_00d051dc;
          }
        } while( true );
      }
LAB_00d051dc:
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar4);
  }
  lVar13 = FUN_00d7e3d0();
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  plVar7 = (long *)(lVar13 + 0x10);
  plVar10 = (long *)*plVar7;
  plVar11 = plVar7;
  if (plVar10 != (long *)0x0) {
    do {
      if (*(uint *)(plVar10 + 4) >= 0xa1e29b0e) {
        plVar11 = plVar10;
      }
      plVar10 = (long *)plVar10[*(uint *)(plVar10 + 4) < 0xa1e29b0e];
    } while (plVar10 != (long *)0x0);
    if (((plVar11 != plVar7) && (*(uint *)(plVar11 + 4) < 0xa1e29b0f)) && ((int)plVar11[5] != 0)) {
      lVar13 = 0;
      uVar12 = 0;
      do {
        (*(code *)((undefined8 *)(plVar11[6] + lVar13))[1])
                  (*(undefined8 *)(plVar11[6] + lVar13),uVar2);
        uVar12 = uVar12 + 1;
        lVar13 = lVar13 + 0x10;
      } while (uVar12 < *(uint *)(plVar11 + 5));
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d052a4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811868;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d0531c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_028118a0;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  return;
}




void FUN_00d05340(long param_1)

{
  FUN_00ce3f94(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
               *(undefined4 *)(param_1 + 0x24));
  return;
}




void FUN_00d05350(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x18);
    while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_03130aa8))) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    FUN_00d73140(lVar1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return;
  }
  return;
}




void FUN_00d053b4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_028118a0;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d0542c(undefined8 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined1 *)(param_1 + 4) = param_3;
  *(undefined1 *)((long)param_1 + 0x21) = param_4;
  *(undefined1 *)((long)param_1 + 0x22) = param_5;
  *param_1 = &PTR_FUN_028118d8;
  *(undefined1 *)((long)param_1 + 0x23) = param_6;
  return;
}




void FUN_00d0545c(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce5630(*(undefined4 *)(param_1 + 0x1c),*(undefined1 *)(param_1 + 0x20),
                 *(undefined1 *)(param_1 + 0x21),*(undefined1 *)(param_1 + 0x22),
                 *(undefined1 *)(param_1 + 0x23));
    return;
  }
  return;
}




void FUN_00d054a0(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar4 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar4 == 0) {
    return;
  }
  lVar6 = *(long *)(lVar4 + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_0312ec00))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  FUN_00d7d378(lVar6,*(undefined1 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x21),
               *(undefined1 *)(param_1 + 0x22),*(undefined1 *)(param_1 + 0x23));
  uVar2 = *(undefined1 *)(param_1 + 0x20);
  uVar3 = FUN_00d7d0a0(lVar6,uVar2);
  uVar7 = 0x10000;
  lVar6 = lVar4;
LAB_00d0556c:
  do {
    do {
      lVar5 = lVar6;
      if ((lVar5 != lVar4) &&
         (lVar6 = FUN_019865b4(*(undefined8 *)(lVar5 + 8),0x554207b0), lVar6 != 0)) {
        (**(code **)(lVar6 + 8))(lVar5,lVar4,uVar2,uVar3 & 1);
      }
      if (((uVar7 & 0xffff) < uVar7 >> 0x10) && (lVar6 = *(long *)(lVar5 + 0x18), lVar6 != 0)) {
        uVar7 = uVar7 & 0xffff0000 | uVar7 + 1 & 0xffff;
        goto LAB_00d0556c;
      }
      if ((uVar7 & 0xffff) == 0) {
        return;
      }
      lVar6 = *(long *)(lVar5 + 0x20);
    } while (*(long *)(lVar5 + 0x20) != 0);
    lVar5 = *(long *)(lVar5 + 0x10);
    if (lVar5 == 0) {
      return;
    }
    uVar1 = uVar7 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar7 = uVar1 | uVar7 & 0xffff0000;
    while (lVar6 = *(long *)(lVar5 + 0x20), lVar6 == 0) {
      if ((uVar7 - 1 & 0xffff) == 0) {
        return;
      }
      lVar5 = *(long *)(lVar5 + 0x10);
      uVar7 = uVar7 & 0xffff0000 | uVar7 - 1 & 0xffff;
      if (lVar5 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_00d055ec(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_028118d8;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d0565c(undefined8 *param_1,undefined1 param_2,undefined8 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811910;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)((long)param_1 + 0x1c) = *param_3;
  return;
}




void FUN_00d0568c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if ((lVar2 != 0) &&
     ((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00ce5778(*(undefined1 *)(param_1 + 0x19),param_1 + 0x1c);
    return;
  }
  return;
}




void FUN_00d056f4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if ((lVar3 != 0) &&
     ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    local_40 = 0;
    local_48 = 0x4120000000000000;
    uVar4 = thunk_FUN_00da2eb4(lVar3);
    FUN_00ef0108(uVar4,param_1 + 0x1c,param_1 + 0x20,0,&local_48);
    FUN_00d5756c(lVar3,param_1 + 0x1c,0,0,0);
    if ((*(byte *)(lVar3 + 0x2f4) >> 1 & 1) != 0) {
      FUN_009bc274(*(undefined4 *)(lVar3 + 0x260));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d057d8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811910;
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)puVar1 + 0x19) = *(undefined8 *)(param_1 + 0x19);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d05850(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4,
                 byte param_5)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *param_1 = &PTR_FUN_02811948;
  *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)(param_4 + 1);
  uVar1 = *param_4;
  *(byte *)(param_1 + 6) = param_5 & 1;
  *(undefined8 *)((long)param_1 + 0x24) = uVar1;
  return;
}




void FUN_00d05888(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar2 != 0) &&
     ((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d5756c(lVar2,param_1 + 0x24,*(undefined1 *)(param_1 + 0x30),
                 *(undefined1 *)(param_1 + 0x30),1);
    lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x20));
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar2 + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_00d608ac(lVar2,lVar3,0,0);
    }
    FUN_00ce5b9c(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),param_1 + 0x24);
    return;
  }
  return;
}




void FUN_00d05960(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar2 != 0) &&
     ((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d57f64(lVar2,param_1 + 0x24);
    lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x20));
    if (lVar3 != 0) {
      lVar2 = *(long *)(lVar2 + 0x18);
      while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724))) {
        lVar2 = *(long *)(lVar2 + 0x20);
      }
      FUN_00d608ac(lVar2,lVar3,0,0);
      return;
    }
  }
  return;
}




void FUN_00d05a14(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x38,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_02811948;
  *(undefined8 *)((long)puVar1 + 0x29) = *(undefined8 *)(param_1 + 0x29);
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d05a8c(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811980;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = *param_3;
  return;
}




void FUN_00d05abc(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00ce6564(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20);
    return;
  }
  return;
}




void FUN_00d05af8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if (((uVar2 & 1) == 0) && (lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c)), lVar3 != 0)) {
    local_40 = 0;
    local_48 = 0x4120000000000000;
    uVar4 = thunk_FUN_00da2eb4(lVar3);
    uVar2 = FUN_00ef0108(uVar4,param_1 + 0x20,(undefined4 *)(param_1 + 0x24),0,&local_48);
    if ((uVar2 & 1) == 0) {
      FUN_00d55794(lVar3,auStack_58,0);
      *(undefined4 *)(param_1 + 0x24) = local_54;
    }
    lVar3 = *(long *)(lVar3 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_0314f724))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    uVar2 = FUN_00d61090(lVar3);
    if ((uVar2 & 1) == 0) {
      FUN_00d60dac(0x3f000000,lVar3,param_1 + 0x20);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d05bf4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811980;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d05c64(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,byte param_4)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x19) = param_2;
  *param_1 = &PTR_FUN_028119b8;
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  *(byte *)(param_1 + 5) = param_4 & 1;
  *(undefined8 *)((long)param_1 + 0x1c) = uVar1;
  return;
}




void FUN_00d05c9c(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if ((lVar2 != 0) &&
     ((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00ce58cc(*(undefined1 *)(param_1 + 0x19),param_1 + 0x1c,*(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}




void FUN_00d05d08(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_008ff584(*(undefined1 *)(param_1 + 0x19));
  if ((lVar2 != 0) &&
     ((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    FUN_00d5756c(lVar2,param_1 + 0x1c,*(undefined1 *)(param_1 + 0x28),1,1);
    return;
  }
  return;
}




void FUN_00d05d7c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_028119b8;
  uVar2 = *(undefined8 *)(param_1 + 0x19);
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x19) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d05dec(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *param_1 = &PTR_FUN_028119f0;
  *(byte *)(param_1 + 5) = param_5 & 1;
  return;
}




void FUN_00d05e18(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00ce7010(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}




void FUN_00d05e58(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d5a7dc(lVar1,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined1 *)(param_1 + 0x28));
    return;
  }
  return;
}




void FUN_00d05e98(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_028119f0;
  *(undefined8 *)((long)puVar1 + 0x21) = *(undefined8 *)(param_1 + 0x21);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d05f10(undefined8 *param_1,byte param_2)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811a28;
  *(byte *)((long)param_1 + 0x19) = param_2 & 1;
  return;
}




void FUN_00d05f34(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00927904(*(undefined1 *)(param_1 + 0x19));
  return;
}




void FUN_00d05f68(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_00ceace8();
  uVar1 = FUN_00ceaf44();
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x3ff0000000000000;
    if (*(char *)(param_1 + 0x19) != '\0') {
      uVar2 = 0;
    }
    FUN_00ce2834(uVar2);
    return;
  }
  return;
}




void FUN_00d05fb4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811a28;
  *(undefined1 *)((long)puVar1 + 0x19) = *(undefined1 *)(param_1 + 0x19);
  FUN_00ce2364(param_2,puVar1);
  return;
}

