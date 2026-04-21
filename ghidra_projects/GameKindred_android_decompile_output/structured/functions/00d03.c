// functions/00d03 — 16 functions
#include "libGameKindred.h"




void FUN_00d030e4(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811590;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d03154(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 4) = param_4;
  *param_1 = &PTR_FUN_028115c8;
  *(undefined4 *)((long)param_1 + 0x24) = param_2;
  return;
}




void FUN_00d03178(long param_1)

{
  FUN_00ce7dc4(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c),
               *(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d03188(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  
  lVar3 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x24));
  if ((lVar3 != 0) && (uVar4 = FUN_00ceab48(), (uVar4 & 1) == 0)) {
    FUN_00d5c5c4(0,lVar3,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),1,1,1);
    uVar4 = FUN_00ceab64();
    if ((uVar4 & 1) == 0) {
      FUN_009c11d4(lVar3,*(undefined4 *)(param_1 + 0x1c));
      return;
    }
    FUN_009dc90c(lVar3);
    lVar5 = FUN_00d7e3d0();
    uVar1 = *(undefined4 *)(lVar3 + 0x260);
    uVar2 = *(undefined4 *)(param_1 + 0x1c);
    plVar6 = (long *)(lVar5 + 0x10);
    plVar7 = (long *)*plVar6;
    plVar8 = plVar6;
    if (plVar7 != (long *)0x0) {
      do {
        if (*(uint *)(plVar7 + 4) >= 0xe4cbad13) {
          plVar8 = plVar7;
        }
        plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < 0xe4cbad13];
      } while (plVar7 != (long *)0x0);
      if (((plVar8 != plVar6) && (*(uint *)(plVar8 + 4) < 0xe4cbad14)) && ((int)plVar8[5] != 0)) {
        lVar3 = 0;
        uVar4 = 0;
        do {
          (*(code *)((undefined8 *)(plVar8[6] + lVar3))[1])
                    (*(undefined8 *)(plVar8[6] + lVar3),uVar1,uVar2,1);
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x10;
        } while (uVar4 < *(uint *)(plVar8 + 5));
      }
    }
  }
  return;
}




void FUN_00d032a8(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  *puVar1 = &PTR_FUN_028115c8;
  *(undefined4 *)((long)puVar1 + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d03320(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,undefined1 param_7,undefined4 param_8,
                 undefined4 param_9,undefined8 *param_10,undefined8 *param_11,undefined8 param_12,
                 byte param_13,byte param_14,undefined4 param_15,long param_16,long param_17,
                 long param_18,long param_19,long param_20,uint param_21,long param_22,long param_23
                 ,long param_24,long param_25,undefined4 param_26,undefined4 param_27,
                 undefined4 param_28,undefined8 param_29,undefined1 param_30,undefined8 param_31,
                 undefined4 param_32,long param_33,long param_34,long param_35,undefined4 param_36,
                 undefined4 param_37,long param_38,long param_39,long param_40,undefined4 param_41,
                 undefined4 param_42,undefined8 param_43,undefined4 param_44)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  
  lVar4 = tpidr_el0;
  local_80 = *(long *)(lVar4 + 0x28);
  *param_2 = &PTR_FUN_02811600;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)(param_2 + 3) = 0;
  *(undefined4 *)((long)param_2 + 0x1c) = param_3;
  *(undefined4 *)(param_2 + 4) = param_4;
  *(undefined4 *)((long)param_2 + 0x24) = param_5;
  *(undefined1 *)(param_2 + 5) = param_6;
  *(undefined1 *)((long)param_2 + 0x29) = param_7;
  *(undefined4 *)((long)param_2 + 0x2c) = param_8;
  *(undefined4 *)(param_2 + 6) = param_9;
  *(undefined4 *)((long)param_2 + 0x3c) = *(undefined4 *)(param_10 + 1);
  *(undefined8 *)((long)param_2 + 0x34) = *param_10;
  param_2[8] = *param_11;
  *(undefined4 *)(param_2 + 9) = *(undefined4 *)(param_11 + 1);
  thunk_FUN_00d4d20c(param_2 + 10,param_12);
  param_2[0x6e] = 0;
  *(byte *)(param_2 + 0x6d) = param_13 & 1;
  *(undefined4 *)((long)param_2 + 0x37c) = param_1;
  *(uint *)((long)param_2 + 0x474) = param_21;
  *(byte *)((long)param_2 + 0x369) = param_14 & 1;
  lVar5 = 0;
  uVar6 = 0;
  *(undefined4 *)(param_2 + 0x6f) = param_15;
  *(undefined4 *)(param_2 + 0x8e) = param_26;
  *(undefined4 *)(param_2 + 0x8f) = param_27;
  *(undefined4 *)((long)param_2 + 0x47c) = param_28;
  *(undefined4 *)(param_2 + 0x93) = param_42;
  *(undefined4 *)((long)param_2 + 0x49c) = param_41;
  param_2[0x94] = param_43;
  *(undefined4 *)(param_2 + 0x95) = param_44;
  param_2[0x96] = param_29;
  *(undefined1 *)(param_2 + 0x97) = param_30;
  param_2[0x98] = param_31;
  *(undefined4 *)(param_2 + 0x99) = param_32;
  *(undefined4 *)((long)param_2 + 0x52c) = param_36;
  *(undefined4 *)(param_2 + 0xa6) = param_37;
  while( true ) {
    if (uVar6 < param_21) {
      *(undefined4 *)((long)param_2 + lVar5 + 0x380) = *(undefined4 *)(param_16 + lVar5);
      *(undefined4 *)((long)param_2 + lVar5 + 0x3a8) = *(undefined4 *)(param_17 + lVar5);
      *(undefined4 *)((long)param_2 + lVar5 + 0x3d0) = *(undefined4 *)(param_18 + lVar5);
      *(undefined4 *)((long)param_2 + lVar5 + 0x420) = *(undefined4 *)(param_19 + lVar5);
      uVar9 = *(undefined4 *)(param_20 + lVar5);
    }
    else {
      uVar9 = 0;
      *(undefined4 *)((long)param_2 + lVar5 + 0x380) = 0xffff;
      *(undefined4 *)((long)param_2 + lVar5 + 0x3a8) = 0xffffffff;
      *(undefined4 *)((long)param_2 + lVar5 + 0x3d0) = 0;
      *(undefined4 *)((long)param_2 + lVar5 + 0x420) = 0;
    }
    *(undefined4 *)((long)param_2 + lVar5 + 0x3f8) = uVar9;
    if (lVar5 == 0x24) break;
    param_21 = *(uint *)((long)param_2 + 0x474);
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 4;
  }
  uVar6 = 0;
  lVar5 = -0xc;
  do {
    if (uVar6 < *(uint *)(param_2 + 0x8e)) {
      *(undefined4 *)((long)param_2 + lVar5 + 0x454) = *(undefined4 *)(param_23 + uVar6 * 4);
      *(undefined4 *)((long)param_2 + lVar5 + 0x460) = *(undefined4 *)(param_22 + uVar6 * 4);
      *(undefined4 *)((long)param_2 + lVar5 + 0x46c) = *(undefined4 *)(param_24 + uVar6 * 4);
      uVar8 = *(undefined1 *)(param_25 + uVar6);
    }
    else {
      uVar8 = 0;
      *(undefined4 *)((long)param_2 + lVar5 + 0x454) = 0;
      *(undefined4 *)((long)param_2 + lVar5 + 0x460) = 0xffffffff;
      *(undefined4 *)((long)param_2 + lVar5 + 0x46c) = 0;
    }
    *(undefined1 *)((long)param_2 + uVar6 + 0x46c) = uVar8;
    uVar6 = uVar6 + 1;
    lVar5 = lVar5 + 4;
  } while (uVar6 != 3);
  uVar3 = *(uint *)(param_2 + 0x99);
  uVar6 = 0;
  puVar7 = (undefined4 *)((long)param_2 + 0x4cc);
  do {
    if (uVar6 < uVar3) {
      *puVar7 = *(undefined4 *)(param_33 + uVar6 * 4);
      puVar7[8] = *(undefined4 *)(param_34 + uVar6 * 4);
      uVar9 = *(undefined4 *)(param_35 + uVar6 * 4);
    }
    else {
      uVar9 = 0;
      *puVar7 = 0;
      puVar7[8] = 0;
    }
    uVar6 = uVar6 + 1;
    puVar7[0x10] = uVar9;
    puVar7 = puVar7 + 1;
  } while (uVar6 != 8);
  if (((param_38 == 0) && (param_39 == 0)) && (param_40 == 0)) {
    FUN_00d7d644(*(undefined1 *)((long)param_2 + 0x29),param_2 + 0x90,param_2 + 0x91,param_2 + 0x92)
    ;
  }
  else {
    lVar5 = 0;
    do {
      puVar2 = (undefined1 *)((long)param_2 + lVar5 + 0x490);
      puVar2[-0x10] = *(undefined1 *)(param_38 + lVar5);
      puVar2[-8] = *(undefined1 *)(param_39 + lVar5);
      puVar1 = (undefined1 *)(param_40 + lVar5);
      lVar5 = lVar5 + 1;
      *puVar2 = *puVar1;
    } while (lVar5 != 8);
  }
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    local_88 = 0;
    local_90 = 0x3e80000000000000;
    local_94 = *(undefined4 *)(param_2 + 7);
    uVar6 = FUN_00ef0108(*(undefined4 *)(param_2 + 0x93),(long)param_2 + 0x34,&local_94,0,&local_90)
    ;
    if ((uVar6 & 1) != 0) {
      *(undefined4 *)(param_2 + 7) = local_94;
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d03760(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x370) = param_2;
  return;
}




void FUN_00d03768(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_0092527c(*(undefined4 *)(param_1 + 0x37c),*(undefined4 *)(param_1 + 0x1c),
                 *(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),
                 *(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29),
                 *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),param_1 + 0x34,
                 param_1 + 0x40,param_1 + 0x50,*(undefined1 *)(param_1 + 0x368),
                 *(undefined4 *)(param_1 + 0x378),param_1 + 0x380,param_1 + 0x3a8,param_1 + 0x3d0,
                 param_1 + 0x420,param_1 + 0x3f8,*(undefined4 *)(param_1 + 0x474),param_1 + 0x454,
                 param_1 + 0x448,param_1 + 0x460,param_1 + 0x46c,*(undefined4 *)(param_1 + 0x470),
                 *(undefined4 *)(param_1 + 0x478),*(undefined4 *)(param_1 + 0x47c),
                 *(undefined4 *)(param_1 + 0x4c8),param_1 + 0x4cc,param_1 + 0x4ec,param_1 + 0x50c,
                 *(undefined4 *)(param_1 + 0x52c),*(undefined4 *)(param_1 + 0x530),param_1 + 0x480,
                 param_1 + 0x488,param_1 + 0x490,*(undefined4 *)(param_1 + 0x49c),
                 *(undefined4 *)(param_1 + 0x498),1);
  }
  return;
}




void FUN_00d038d0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 local_2b8 [2];
  undefined8 local_2b0;
  long local_2a8;
  long local_2a0 [70];
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00d9e43c(*(undefined4 *)(param_1 + 0x24));
  if ((uVar6 & 1) == 0) {
    local_2a8 = 0;
    uVar7 = FUN_00d6eb50();
    puVar13 = (undefined4 *)(param_1 + 0x1c);
    uVar7 = FUN_00d6eb3c(uVar7,*puVar13);
    FUN_019887c4(uVar7,&local_2a8,1,0);
    lVar3 = local_2a8;
    *(undefined4 *)(local_2a8 + 0x260) = *(undefined4 *)(param_1 + 0x24);
    FUN_00d5ba80(local_2a8,*(undefined1 *)(param_1 + 0x28));
    FUN_00d5ba90(lVar3,*(undefined1 *)(param_1 + 0x29));
    FUN_00d5ba98(lVar3,*puVar13);
    FUN_00d5cb88(lVar3,*(undefined4 *)(param_1 + 0x478));
    FUN_00d5daec(lVar3,*(undefined4 *)(param_1 + 0x49c));
    FUN_00cec2e4(*(undefined4 *)(param_1 + 0x24),*puVar13);
    if (*(long *)(param_1 + 0x4c0) != 0) {
      FUN_01985d88(lVar3);
      *(undefined8 *)(param_1 + 0x4c0) = 0;
    }
    local_2b0 = 0;
    FUN_019889cc(&local_2b0,1,DAT_02e3ef88,0);
    lVar8 = FUN_00ce9ba0(puVar13);
    if (lVar8 != 0) {
      uVar4 = FUN_00cea0fc();
      FUN_00d5e874(lVar3,uVar4);
    }
    if ((*(int *)(param_1 + 0x2c) != 0xff) &&
       (uVar6 = FUN_00ced200(*(undefined4 *)(param_1 + 0x24)), (uVar6 & 1) != 0)) {
      FUN_00cec6a8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x2c));
      FUN_00cec704(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x30));
    }
    FUN_00d55ac4(lVar3,*(undefined4 *)(param_1 + 0x378),param_1 + 0x20,
                 *(undefined4 *)(param_1 + 0x498),param_1 + 0x34,param_1 + 0x40);
    FUN_00d5d3f0(lVar3);
    if (*(int *)(param_1 + 0x378) == 0) {
      FUN_00d5ad88(lVar3);
    }
    if (*(char *)(param_1 + 0x368) == '\0') {
      FUN_00d5ba64(lVar3,param_1 + 0x50);
    }
    if ((*(long *)(param_1 + 0x4c0) == 0) &&
       (FUN_00d5a2e0(lVar3,*(undefined4 *)(param_1 + 0x4c8),param_1 + 0x4cc,param_1 + 0x4ec,
                     param_1 + 0x50c), *(int *)(param_1 + 0x52c) != 0)) {
      FUN_00d9ff84(local_2b8);
      FUN_00d5a1c0(lVar3,local_2b8[0],*(undefined4 *)(param_1 + 0x530));
    }
    if (1 < *(uint *)(param_1 + 0x47c)) {
      uVar5 = 1;
      do {
        FUN_00d56aa4(lVar3,1);
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(param_1 + 0x47c));
    }
    FUN_00d55878(lVar3,param_1 + 0x34,param_1 + 0x40);
    if (*(int *)(param_1 + 0x470) != 0) {
      FUN_00d5c228(lVar3,param_1 + 0x454,param_1 + 0x448,param_1 + 0x460,param_1 + 0x46c);
    }
    uVar6 = FUN_00ceab48();
    if ((uVar6 & 1) == 0) {
      FUN_008ff4d0(lVar3,*(undefined1 *)(param_1 + 0x28));
    }
    if (*(char *)(param_1 + 0x368) == '\0') {
      if (*(int *)(param_1 + 0x474) != 0) {
        uVar6 = 0;
        puVar13 = (undefined4 *)(param_1 + 0x380);
        do {
          FUN_00d5c5c4(puVar13[0x28],lVar3,*puVar13,puVar13[10],0,puVar13[0x14],puVar13[0x1e]);
          uVar6 = uVar6 + 1;
          puVar13 = puVar13 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x474));
      }
    }
    else {
      uVar6 = FUN_00ceab48();
      if (((uVar6 & 1) != 0) && (*(int *)(param_1 + 0x474) != 0)) {
        uVar6 = 0;
        do {
          lVar8 = *(long *)(lVar3 + 0x18);
          while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_03130aa8))) {
            lVar8 = *(long *)(lVar8 + 0x20);
          }
          lVar10 = param_1 + uVar6 * 4;
          uVar9 = FUN_00d72d24(lVar8,*(undefined4 *)(lVar10 + 0x380));
          if ((uVar9 & 1) != 0) {
            FUN_00d72730(lVar8,*(undefined4 *)(lVar10 + 0x380));
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(param_1 + 0x474));
      }
    }
    uVar6 = FUN_00ceab48();
    if ((uVar6 & 1) != 0) {
      if (*(char *)(param_1 + 0x369) != '\0') {
        FUN_008ff378(lVar3,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
      }
      lVar8 = *(long *)(param_1 + 0x370);
      if (lVar8 == 0) {
        if (*(char *)(param_1 + 0x369) == '\0') {
          lVar8 = FUN_00d5bb48(lVar3);
        }
        else {
          lVar8 = FUN_00d5bb54(lVar3);
        }
      }
      FUN_008ff374(lVar3,lVar8,*(undefined4 *)(param_1 + 0x478));
    }
    FUN_008ff37c(lVar3);
    FUN_008ff380(lVar3);
    lVar8 = *(long *)(lVar3 + 0x18);
    if (lVar8 != 0) {
LAB_00d03c34:
      if (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_0312ec00) goto code_r0x00d03c44;
      uVar6 = 0;
      do {
        lVar10 = param_1 + uVar6;
        FUN_00d7d378(lVar8,uVar6 & 0xffffffff,*(undefined1 *)(lVar10 + 0x480),
                     *(undefined1 *)(lVar10 + 0x488),*(undefined1 *)(lVar10 + 0x490));
        uVar6 = uVar6 + 1;
      } while (uVar6 != 8);
    }
LAB_00d03c7c:
    FUN_01985d44(lVar3,DAT_0314fa24);
    if (((*(byte *)(lVar3 + 0x2f4) & 1) != 0) && (*(int *)(param_1 + 0x378) - 1U < 2)) {
      uVar7 = FUN_01985d44(lVar3,DAT_02c7bf28);
      FUN_00d79b54(*(undefined4 *)(param_1 + 0x37c),uVar7,0);
    }
    uVar6 = FUN_00ceab48();
    if ((uVar6 & 1) != 0) {
      (**(code **)(param_1 + 0x4b0))(lVar3,*(undefined1 *)(param_1 + 0x4b8));
    }
    if (*(code **)(param_1 + 0x4a0) != (code *)0x0) {
      (**(code **)(param_1 + 0x4a0))(lVar3,*(undefined4 *)(param_1 + 0x4a8));
    }
    FUN_00d5a724(lVar3);
    uVar5 = FUN_019889cc(local_2a0,0x46,DAT_02c7eb30,0);
    if (uVar5 != 0) {
      uVar6 = 0;
      do {
        lVar8 = local_2a0[uVar6];
        if (lVar8 != 0) {
          uVar14 = 0xffff0000;
          lVar10 = lVar8;
LAB_00d03d64:
          do {
            do {
              lVar12 = lVar10;
              if ((lVar12 != lVar8) &&
                 (lVar10 = FUN_019865b4(*(undefined8 *)(lVar12 + 8),0x377a062d), lVar10 != 0)) {
                (**(code **)(lVar10 + 8))(lVar12,lVar3);
              }
              if (((uVar14 & 0xffff) < uVar14 >> 0x10) &&
                 (lVar10 = *(long *)(lVar12 + 0x18), lVar10 != 0)) {
                uVar14 = uVar14 & 0xffff0000 | uVar14 + 1 & 0xffff;
                goto LAB_00d03d64;
              }
              if ((uVar14 & 0xffff) == 0) goto LAB_00d03dcc;
              lVar10 = *(long *)(lVar12 + 0x20);
            } while (*(long *)(lVar12 + 0x20) != 0);
            lVar12 = *(long *)(lVar12 + 0x10);
            if ((lVar12 == 0) || (uVar1 = uVar14 - 1 & 0xffff, uVar1 == 0)) break;
            uVar14 = uVar1 | uVar14 & 0xffff0000;
            while (lVar10 = *(long *)(lVar12 + 0x20), lVar10 == 0) {
              if ((uVar14 - 1 & 0xffff) == 0) goto LAB_00d03dcc;
              lVar12 = *(long *)(lVar12 + 0x10);
              uVar14 = uVar14 & 0xffff0000 | uVar14 - 1 & 0xffff;
              if (lVar12 == 0) goto LAB_00d03dcc;
            }
          } while( true );
        }
LAB_00d03dcc:
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar5);
    }
    uVar6 = FUN_00ceab48();
    if ((uVar6 & 1) != 0) {
      plVar11 = (long *)FUN_01985d44(lVar3,DAT_0314fa30);
      (**(code **)(*plVar11 + 0x20))();
    }
    if (((lVar3 != 0) && (uVar6 = FUN_00ceab48(), (uVar6 & 1) == 0)) &&
       (uVar6 = FUN_00ceab64(), (uVar6 & 1) == 0)) {
      FUN_009c108c(*(undefined4 *)(lVar3 + 0x260));
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
code_r0x00d03c44:
  lVar8 = *(long *)(lVar8 + 0x20);
  if (lVar8 == 0) goto LAB_00d03c7c;
  goto LAB_00d03c34;
}




void FUN_00d03e50(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_00ce23f4(param_2,0x538,8);
  *puVar2 = &PTR_FUN_027be150;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2[2] = *(undefined8 *)(param_1 + 0x10);
  puVar2[1] = uVar3;
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *puVar2 = &PTR_FUN_02811600;
  *(undefined1 *)(puVar2 + 3) = uVar1;
  uVar3 = *(undefined8 *)(param_1 + 0x3c);
  *(undefined8 *)((long)puVar2 + 0x44) = *(undefined8 *)(param_1 + 0x44);
  *(undefined8 *)((long)puVar2 + 0x3c) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x1c);
  *(undefined8 *)((long)puVar2 + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x1c) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x2c);
  *(undefined8 *)((long)puVar2 + 0x34) = *(undefined8 *)(param_1 + 0x34);
  *(undefined8 *)((long)puVar2 + 0x2c) = uVar3;
  thunk_FUN_00d4d20c(puVar2 + 10,param_1 + 0x50);
  memcpy(puVar2 + 0x6d,(void *)(param_1 + 0x368),0x1cc);
  FUN_00ce2364(param_2,puVar2);
  return;
}




void FUN_00d03ef8(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_02811638;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  return;
}




void FUN_00d03f18(long param_1)

{
  FUN_00ce2fc8(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  return;
}




void FUN_00d03f24(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00d9e390(*(undefined4 *)(param_1 + 0x1c));
  if (lVar1 != 0) {
    FUN_00d56aa4(lVar1,*(undefined4 *)(param_1 + 0x20));
    return;
  }
  return;
}




void FUN_00d03f60(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_00ce23f4(param_2,0x28,8);
  *puVar1 = &PTR_FUN_027be150;
  *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  *puVar1 = &PTR_FUN_02811638;
  *(undefined8 *)((long)puVar1 + 0x1c) = *(undefined8 *)(param_1 + 0x1c);
  FUN_00ce2364(param_2,puVar1);
  return;
}




void FUN_00d03fd0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = param_2;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)((long)param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 5) = param_5;
  *param_1 = &PTR_FUN_02811670;
  *(undefined4 *)((long)param_1 + 0x2c) = param_6;
  *(undefined4 *)(param_1 + 6) = param_7;
  return;
}




void FUN_00d03ff8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    FUN_00ce3104(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                 *(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    return;
  }
  return;
}

