// functions/00d02 — 24 functions
#include "libGameKindred.h"




void FUN_00d020c0(void)

{
  return;
}




void FUN_00d020c4(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00d01f58(param_1);
  return;
}




void FUN_00d020fc(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x20,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_028114b0;
  *(undefined4 *)((long)puVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d0216c(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined8 param_9,byte param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined8 param_14,undefined1 param_15,undefined1 param_16,
                 long param_17,long param_18,long param_19,undefined4 param_20,undefined8 param_21,
                 undefined4 param_22,undefined8 param_23)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *(undefined1 *)(param_1 + 5) = param_5;
  *(undefined1 *)((long)param_1 + 0x29) = param_6;
  *param_1 = &PTR_FUN_028114e8;
  *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(param_7 + 1);
  *(undefined8 *)((long)param_1 + 0x2c) = *param_7;
  param_1[7] = *param_8;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_8 + 1);
  thunk_FUN_00d4d20c(param_1 + 9,param_9);
  param_1[0x6c] = param_23;
  *(byte *)(param_1 + 0x6d) = param_10 & 1;
  *(undefined4 *)((long)param_1 + 0x36c) = param_11;
  param_1[0x73] = param_21;
  *(undefined4 *)(param_1 + 0x6e) = param_12;
  *(undefined4 *)((long)param_1 + 0x374) = param_13;
  *(undefined4 *)(param_1 + 0x72) = param_20;
  *(undefined4 *)(param_1 + 0x74) = param_22;
  param_1[0x75] = param_14;
  *(undefined1 *)(param_1 + 0x76) = param_15;
  *(undefined1 *)((long)param_1 + 0x3b1) = param_16;
  if (((param_17 == 0) && (param_18 == 0)) && (param_19 == 0)) {
    FUN_00d7d644(*(undefined1 *)((long)param_1 + 0x29),param_1 + 0x6f,param_1 + 0x70,param_1 + 0x71)
    ;
    return;
  }
  lVar3 = 0;
  do {
    puVar2 = (undefined1 *)((long)param_1 + lVar3 + 0x388);
    puVar2[-0x10] = *(undefined1 *)(param_17 + lVar3);
    puVar2[-8] = *(undefined1 *)(param_18 + lVar3);
    puVar1 = (undefined1 *)(param_19 + lVar3);
    lVar3 = lVar3 + 1;
    *puVar2 = *puVar1;
  } while (lVar3 != 8);
  return;
}




void FUN_00d02300(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_019889b8(DAT_02c09220);
    if (0xb9 < uVar1) {
      FUN_00d023cc();
    }
    FUN_00925284(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x24),*(undefined1 *)(param_1 + 0x28),
                 *(undefined1 *)(param_1 + 0x29),param_1 + 0x2c,param_1 + 0x38,param_1 + 0x48,
                 *(undefined1 *)(param_1 + 0x368),*(undefined4 *)(param_1 + 0x36c),
                 (char)*(undefined4 *)(param_1 + 0x370),(char)*(undefined4 *)(param_1 + 0x374),
                 param_1 + 0x378,param_1 + 0x380,param_1 + 0x388,*(undefined4 *)(param_1 + 0x390),1)
    ;
  }
  return;
}




bool FUN_00d023a8(void)

{
  uint uVar1;
  
  uVar1 = FUN_019889b8(DAT_02c09220);
  return 0xb9 < uVar1;
}




undefined8 FUN_00d023cc(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long alStack_678 [200];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_019889cc(alStack_678,200,DAT_02c09220,0);
  if (iVar2 - 1U != 0) {
    lVar3 = 0;
    uVar4 = (ulong)(iVar2 - 1U);
    do {
      lVar5 = alStack_678[uVar4];
      if ((*(char *)(*(long *)(lVar5 + 0x38) + 0x81) != '\0') &&
         ((lVar3 == 0 || (*(uint *)(lVar5 + 0x260) < *(uint *)(lVar3 + 0x260))))) {
        lVar3 = lVar5;
      }
      uVar4 = uVar4 - 1;
    } while ((int)uVar4 != 0);
    if (lVar3 != 0) {
      *(ushort *)(lVar3 + 0x301) = *(ushort *)(lVar3 + 0x301) | 0x8000;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d02488(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  uint uVar12;
  long local_340;
  undefined1 auStack_338 [24];
  undefined8 auStack_320 [16];
  long local_2a0 [70];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00d9e43c(*(undefined4 *)(param_1 + 0x24));
  if ((uVar5 & 1) == 0) {
    local_340 = 0;
    uVar6 = FUN_00d6eb50();
    uVar6 = FUN_00d6eb3c(uVar6,*(undefined4 *)(param_1 + 0x1c));
    FUN_019887c4(uVar6,&local_340,1,0);
    lVar3 = local_340;
    *(undefined4 *)(local_340 + 0x260) = *(undefined4 *)(param_1 + 0x24);
    FUN_00d5ba80(local_340,*(undefined1 *)(param_1 + 0x28));
    FUN_00d5ba90(lVar3,*(undefined1 *)(param_1 + 0x29));
    FUN_00d5ba98(lVar3,*(undefined4 *)(param_1 + 0x1c));
    FUN_00d5cb88(lVar3,*(undefined4 *)(param_1 + 0x370));
    FUN_00d5daec(lVar3,*(undefined4 *)(param_1 + 0x390));
    FUN_00d5e884(lVar3,*(undefined8 *)(param_1 + 0x360));
    FUN_00d55ac4(lVar3,*(undefined4 *)(param_1 + 0x36c),param_1 + 0x20,0,param_1 + 0x2c,
                 param_1 + 0x38);
    FUN_00d5d3f0(lVar3);
    FUN_00d5ad88(lVar3);
    if (*(char *)(param_1 + 0x368) == '\0') {
      FUN_00d5ba64(lVar3,param_1 + 0x48);
    }
    if (1 < *(uint *)(param_1 + 0x374)) {
      uVar4 = 1;
      do {
        FUN_00d56aa4(lVar3,1);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)(param_1 + 0x374));
    }
    FUN_00d55878(lVar3,param_1 + 0x2c,param_1 + 0x38);
    uVar5 = FUN_00ceab48();
    if ((uVar5 & 1) == 0) {
      FUN_008ff4d0(lVar3,*(undefined1 *)(param_1 + 0x28));
    }
    uVar5 = FUN_00ceab48();
    if ((uVar5 & 1) != 0) {
      lVar7 = FUN_00d5bb54(lVar3);
      lVar8 = FUN_00d5bb48(lVar3);
      if (lVar7 != 0) {
        lVar8 = lVar7;
      }
      FUN_008ff374(lVar3,lVar8,*(undefined4 *)(param_1 + 0x370));
    }
    uVar5 = FUN_00ceab48();
    if ((uVar5 & 1) != 0) {
      FUN_01985d44(lVar3,DAT_0314fa24);
    }
    lVar8 = *(long *)(lVar3 + 0x18);
    if (lVar8 != 0) {
LAB_00d02628:
      if (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_0312ec00) goto code_r0x00d02638;
      uVar5 = 0;
      do {
        lVar7 = param_1 + uVar5;
        FUN_00d7d378(lVar8,uVar5 & 0xffffffff,*(undefined1 *)(lVar7 + 0x378),
                     *(undefined1 *)(lVar7 + 0x380),*(undefined1 *)(lVar7 + 0x388));
        uVar5 = uVar5 + 1;
      } while (uVar5 != 8);
    }
LAB_00d02670:
    uVar5 = FUN_00ceab48();
    if ((uVar5 & 1) != 0) {
      (**(code **)(param_1 + 0x3a8))
                (lVar3,*(undefined1 *)(param_1 + 0x3b0),*(undefined1 *)(param_1 + 0x3b1));
    }
    if (*(code **)(param_1 + 0x398) != (code *)0x0) {
      (**(code **)(param_1 + 0x398))(lVar3,*(undefined4 *)(param_1 + 0x3a0));
    }
    FUN_00d5a724(lVar3);
    uVar4 = FUN_019889cc(local_2a0,0x46,DAT_02c7eb30,0);
    if (uVar4 != 0) {
      uVar5 = 0;
      do {
        lVar8 = local_2a0[uVar5];
        if (lVar8 != 0) {
          uVar12 = 0xffff0000;
          lVar7 = lVar8;
LAB_00d02718:
          do {
            do {
              lVar10 = lVar7;
              if ((lVar10 != lVar8) &&
                 (lVar7 = FUN_019865b4(*(undefined8 *)(lVar10 + 8),0x377a062d), lVar7 != 0)) {
                (**(code **)(lVar7 + 8))(lVar10,lVar3);
              }
              if (((uVar12 & 0xffff) < uVar12 >> 0x10) &&
                 (lVar7 = *(long *)(lVar10 + 0x18), lVar7 != 0)) {
                uVar12 = uVar12 & 0xffff0000 | uVar12 + 1 & 0xffff;
                goto LAB_00d02718;
              }
              if ((uVar12 & 0xffff) == 0) goto LAB_00d02780;
              lVar7 = *(long *)(lVar10 + 0x20);
            } while (*(long *)(lVar10 + 0x20) != 0);
            lVar10 = *(long *)(lVar10 + 0x10);
            if ((lVar10 == 0) || (uVar1 = uVar12 - 1 & 0xffff, uVar1 == 0)) break;
            uVar12 = uVar1 | uVar12 & 0xffff0000;
            while (lVar7 = *(long *)(lVar10 + 0x20), lVar7 == 0) {
              if ((uVar12 - 1 & 0xffff) == 0) goto LAB_00d02780;
              lVar10 = *(long *)(lVar10 + 0x10);
              uVar12 = uVar12 & 0xffff0000 | uVar12 - 1 & 0xffff;
              if (lVar10 == 0) goto LAB_00d02780;
            }
          } while( true );
        }
LAB_00d02780:
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar4);
    }
    FUN_00d4d54c(auStack_338);
    uVar4 = FUN_00d9e840(auStack_338,auStack_320,0x10,0);
    if (uVar4 != 0) {
      uVar5 = (ulong)uVar4;
      puVar11 = auStack_320;
      do {
        FUN_00d5deb8(*puVar11,lVar3);
        uVar5 = uVar5 - 1;
        puVar11 = puVar11 + 1;
      } while (uVar5 != 0);
    }
    FUN_00caa5fc(lVar3);
    uVar5 = FUN_00ceab48();
    if (((uVar5 & 1) != 0) && ((*(uint *)(lVar3 + 0x2f4) & 0x20002111) != 0)) {
      plVar9 = (long *)FUN_01985d44(lVar3,DAT_0314fa30);
      (**(code **)(*plVar9 + 0x20))();
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x00d02638:
  lVar8 = *(long *)(lVar8 + 0x20);
  if (lVar8 == 0) goto LAB_00d02670;
  goto LAB_00d02628;
}




void FUN_00d02840(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_00ce23f4(param_2,0x3b8,8);
  *puVar2 = &PTR_FUN_027be150;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_028114e8;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  *(undefined8 *)((long)puVar2 + 0x3c) = *(undefined8 *)(param_1 + 0x3c);
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar2 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar3;
  thunk_FUN_00d4d20c(puVar2 + 9,param_1 + 0x48);
  memcpy(puVar2 + 0x6c,(void *)(param_1 + 0x360),0x52);
  FUN_00ce2364(param_2,puVar2);
  return;
}




void FUN_00d028e8(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811520;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_3 + 1);
  param_1[4] = *param_3;
  return;
}




void FUN_00d02918(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00ce5d04(*(undefined4 *)(param_1 + 0x1c),param_1 + 0x20);
    return;
  }
  return;
}




void FUN_00d02954(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if ((lVar2 != 0) &&
     ((uVar1 = *(ushort *)(lVar2 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar2 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    lVar3 = *(long *)(lVar2 + 0x18);
    while( true ) {
      if (lVar3 == 0) {
        FUN_00d580b0(lVar2,param_1 + 0x20);
        return;
      }
      if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0314f724) break;
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    FUN_00d6074c(lVar3,0);
    FUN_00d60670(lVar3,param_1 + 0x20,0);
    return;
  }
  return;
}




void FUN_00d02a08(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x30,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811520;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d02a78(undefined4 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8)

{
  undefined4 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = 0;
  *(undefined1 *)(param_2 + 4) = param_3;
  *(undefined1 *)((long)param_2 + 0x21) = param_4;
  *(undefined1 *)((long)param_2 + 0x22) = param_5;
  *(undefined8 *)((long)param_2 + 0x2c) = 0;
  *(undefined8 *)((long)param_2 + 0x24) = 0;
  *(undefined4 *)((long)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = param_6;
  *param_2 = &PTR_FUN_02811558;
  uVar1 = *param_7;
  *(undefined4 *)((long)param_2 + 0x54) = param_8;
  *(undefined4 *)(param_2 + 0xb) = param_1;
  *(undefined4 *)((long)param_2 + 0x3c) = uVar1;
  return;
}




void FUN_00d02ac0(undefined4 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                 undefined8 *param_5,undefined4 param_6,undefined4 *param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = param_3;
  *(undefined1 *)((long)param_2 + 0x21) = param_4;
  *(undefined1 *)((long)param_2 + 0x22) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = 1;
  *param_2 = &PTR_FUN_02811558;
  *(undefined4 *)((long)param_2 + 0x2c) = *(undefined4 *)(param_5 + 1);
  uVar2 = *param_5;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = param_6;
  *(undefined8 *)((long)param_2 + 0x24) = uVar2;
  uVar1 = *param_7;
  *(undefined4 *)((long)param_2 + 0x54) = param_8;
  *(undefined4 *)(param_2 + 0xb) = param_1;
  *(undefined4 *)((long)param_2 + 0x3c) = uVar1;
  return;
}




void FUN_00d02b18(undefined4 param_1,undefined8 *param_2,undefined1 param_3,undefined1 param_4,
                 undefined8 *param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                 undefined4 *param_9,undefined4 param_10)

{
  undefined8 uVar1;
  
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined1 *)(param_2 + 4) = param_3;
  *(undefined1 *)((long)param_2 + 0x21) = param_4;
  *(undefined1 *)((long)param_2 + 0x22) = 0;
  *(undefined4 *)((long)param_2 + 0x24) = 0;
  param_2[5] = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = 2;
  *param_2 = &PTR_FUN_02811558;
  uVar1 = *param_5;
  *(undefined4 *)(param_2 + 7) = param_6;
  param_2[6] = uVar1;
  *(undefined4 *)((long)param_2 + 0x3c) = *param_9;
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_7 + 1);
  param_2[8] = *param_7;
  uVar1 = *param_8;
  *(undefined4 *)((long)param_2 + 0x54) = param_10;
  *(undefined4 *)(param_2 + 0xb) = param_1;
  *(undefined8 *)((long)param_2 + 0x4c) = uVar1;
  return;
}




void FUN_00d02b88(long param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == 2) {
    FUN_00ce8204(*(undefined4 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x20),
                 *(undefined1 *)(param_1 + 0x21),param_1 + 0x40,param_1 + 0x4c,param_1 + 0x30,
                 *(undefined4 *)(param_1 + 0x38),param_1 + 0x3c,*(undefined4 *)(param_1 + 0x54));
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      FUN_00ce7f10(*(undefined4 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x20),
                   *(undefined1 *)(param_1 + 0x21),*(undefined1 *)(param_1 + 0x22),
                   *(undefined4 *)(param_1 + 0x38),param_1 + 0x3c,*(undefined4 *)(param_1 + 0x54));
      return;
    }
    return;
  }
  FUN_00ce807c(*(undefined4 *)(param_1 + 0x58),*(undefined1 *)(param_1 + 0x20),
               *(undefined1 *)(param_1 + 0x21),param_1 + 0x24,*(undefined4 *)(param_1 + 0x38),
               param_1 + 0x3c,*(undefined4 *)(param_1 + 0x54));
  return;
}




void FUN_00d02c18(undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  lVar5 = FUN_008ff584(*(undefined1 *)(param_4 + 0x20));
  lVar6 = FUN_008ff584(*(undefined1 *)(param_4 + 0x21));
  if ((lVar5 != 0) && (lVar6 != 0)) {
    iVar1 = *(int *)(param_4 + 0x1c);
    if (iVar1 == 2) {
      lVar7 = FUN_00d02ddc();
      if (lVar7 != 0) {
        uVar9 = FUN_00ceab48();
        if (((uVar9 & 1) == 0) &&
           (uVar9 = FUN_00ced270(*(undefined4 *)(lVar6 + 0x260)), (uVar9 & 1) == 0)) {
          local_68 = *(undefined4 *)(param_4 + 0x4c);
          local_60 = *(undefined4 *)(param_4 + 0x50);
          uStack_64 = 0;
          FUN_00d55878(lVar6,param_4 + 0x40,&local_68);
        }
        uVar2 = *(undefined4 *)(param_4 + 0x38);
        uVar3 = *(undefined4 *)(param_4 + 0x54);
        local_68 = FUN_00d02e44(lVar6,param_4 + 0x3c);
        uStack_64 = param_2;
        local_60 = param_3;
        FUN_00d808c4(*(undefined4 *)(param_4 + 0x58),lVar7,uVar2,uVar3,lVar5,lVar6,&local_68,
                     param_4 + 0x30);
      }
    }
    else if (iVar1 == 1) {
      lVar7 = FUN_00d02ddc();
      if (lVar7 != 0) {
        uVar2 = *(undefined4 *)(param_4 + 0x38);
        uVar3 = *(undefined4 *)(param_4 + 0x54);
        local_68 = FUN_00d02e44(lVar6,param_4 + 0x3c);
        uStack_64 = param_2;
        local_60 = param_3;
        FUN_00d80638(*(undefined4 *)(param_4 + 0x58),lVar7,uVar2,uVar3,lVar5,lVar6,&local_68,
                     param_4 + 0x24);
      }
    }
    else if (((iVar1 == 0) && (lVar7 = FUN_008ff584(*(undefined1 *)(param_4 + 0x22)), lVar7 != 0))
            && (lVar8 = FUN_00d02ddc(), lVar8 != 0)) {
      uVar2 = *(undefined4 *)(param_4 + 0x38);
      uVar3 = *(undefined4 *)(param_4 + 0x54);
      local_68 = FUN_00d02e44(lVar6,param_4 + 0x3c);
      uStack_64 = param_2;
      local_60 = param_3;
      FUN_00d80a2c(*(undefined4 *)(param_4 + 0x58),lVar8,uVar2,uVar3,lVar5,lVar6,&local_68,lVar7);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d02ddc(void)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_019889cc(&local_30,1,DAT_02e3ef88,0);
  FUN_01985d44(local_30,DAT_0312f140);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d02e44(undefined8 param_1,int *param_2)

{
  long lVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined1 auStack_68 [48];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*param_2 == -0x7ee3623b) || (*param_2 == 0)) {
    FUN_00d55794(param_1,&local_78,0);
  }
  else {
    FUN_00d58298(param_1,param_2,auStack_68);
    local_78 = local_38;
    uStack_74 = uStack_34;
    local_70 = local_30;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_78,uStack_74,local_70);
}




void FUN_00d02ef0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x60,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811558;
  uVar2 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar1 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar1 + 0x2c) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x4c);
  *(undefined8 *)((long)puVar1 + 0x54) = *(undefined8 *)(param_1 + 0x54);
  *(undefined8 *)((long)puVar1 + 0x4c) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar1 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((long)puVar1 + 0x44) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)((long)puVar1 + 0x3c) = uVar2;
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d02f78(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811590;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00d02f98(long param_1)

{
  FUN_00ce79f8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d02fa4(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar2 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  lVar3 = *(long *)(lVar2 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  lVar4 = *(long *)(lVar2 + 0x40);
  fVar5 = (*(float *)(lVar4 + 0x214) + 1.0) *
          (*(float *)(lVar4 + 0xac) + *(float *)(lVar4 + 0x160) * (*(float *)(lVar4 + 0x2c8) + 1.0))
  ;
  if (DAT_0314fb74 <= fVar5) {
    fVar5 = DAT_0314fb74;
  }
  fVar6 = DAT_0314fab4;
  if (DAT_0314fab4 <= fVar5) {
    fVar6 = fVar5;
  }
  if (0.0 < fVar6) {
    fVar5 = (*(float *)(lVar4 + 0x240) + 1.0) *
            (*(float *)(lVar4 + 0xd8) +
            *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0));
    if (DAT_0314fba0 <= fVar5) {
      fVar5 = DAT_0314fba0;
    }
    fVar6 = DAT_0314fae0;
    if (DAT_0314fae0 <= fVar5) {
      fVar6 = fVar5;
    }
    uVar1 = FUN_00d54944(lVar3,*(undefined4 *)(param_1 + 0x20));
    if ((float)uVar1 <= fVar6) {
      FUN_00d5bf6c(lVar2,*(undefined4 *)(param_1 + 0x20));
      FUN_00d5b558(0xbf800000,lVar2,0x1d,0,0xffffffff);
      return;
    }
  }
  return;
}

