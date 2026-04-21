// functions/00c0d — 9 functions
#include "libGameKindred.h"




int FUN_00c0d01c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                undefined8 *param_5,undefined8 *param_6)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_00c0cf4c();
  uVar2 = (*(code *)*param_6)(*param_5,*param_4);
  if ((uVar2 & 1) != 0) {
    uVar3 = *param_4;
    *param_4 = *param_5;
    *param_5 = uVar3;
    uVar2 = (*(code *)*param_6)(*param_4,*param_3);
    if ((uVar2 & 1) == 0) {
      iVar1 = iVar1 + 1;
    }
    else {
      uVar3 = *param_3;
      *param_3 = *param_4;
      *param_4 = uVar3;
      uVar2 = (*(code *)*param_6)(*param_3,*param_2);
      if ((uVar2 & 1) == 0) {
        iVar1 = iVar1 + 2;
      }
      else {
        uVar3 = *param_2;
        *param_2 = *param_3;
        *param_3 = uVar3;
        uVar2 = (*(code *)*param_6)(*param_2,*param_1);
        if ((uVar2 & 1) == 0) {
          iVar1 = iVar1 + 3;
        }
        else {
          uVar3 = *param_1;
          iVar1 = iVar1 + 4;
          *param_1 = *param_2;
          *param_2 = uVar3;
        }
      }
    }
  }
  return iVar1;
}




void FUN_00c0d124(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  FUN_00c0ce54(param_1,param_1 + 1,param_1 + 2,param_3);
  if (param_1 + 3 != param_2) {
    lVar7 = 0;
    puVar4 = param_1 + 3;
    puVar5 = param_1 + 2;
    do {
      puVar3 = puVar4;
      uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
      if ((uVar2 & 1) != 0) {
        uVar6 = *puVar3;
        lVar1 = lVar7;
        do {
          lVar8 = lVar1;
          *(undefined8 *)((long)param_1 + lVar8 + 0x18) =
               *(undefined8 *)((long)param_1 + lVar8 + 0x10);
          puVar4 = param_1;
          if (lVar8 == -0x10) goto LAB_00c0d1c8;
          uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar8 + 8));
          lVar1 = lVar8 + -8;
        } while ((uVar2 & 1) != 0);
        puVar4 = (undefined8 *)((long)param_1 + lVar8 + 0x10);
LAB_00c0d1c8:
        *puVar4 = uVar6;
      }
      lVar7 = lVar7 + 8;
      puVar4 = puVar3 + 1;
      puVar5 = puVar3;
    } while (puVar3 + 1 != param_2);
  }
  return;
}




bool FUN_00c0d1f4(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  switch((long)param_2 - (long)param_1 >> 3) {
  case 0:
  case 1:
    break;
  case 2:
    uVar2 = (*(code *)*param_3)(param_2[-1],*param_1);
    if ((uVar2 & 1) != 0) {
      uVar6 = *param_1;
      *param_1 = param_2[-1];
      param_2[-1] = uVar6;
    }
    break;
  case 3:
    FUN_00c0ce54(param_1,param_1 + 1,param_2 + -1,param_3);
    break;
  case 4:
    FUN_00c0cf4c(param_1,param_1 + 1,param_1 + 2,param_2 + -1,param_3);
    break;
  case 5:
    FUN_00c0d01c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1,param_3);
    break;
  default:
    FUN_00c0ce54(param_1,param_1 + 1,param_1 + 2,param_3);
    if (param_1 + 3 != param_2) {
      lVar7 = 0;
      iVar8 = 0;
      puVar4 = param_1 + 3;
      puVar5 = param_1 + 2;
      do {
        puVar3 = puVar4;
        uVar2 = (*(code *)*param_3)(*puVar3,*puVar5);
        if ((uVar2 & 1) != 0) {
          uVar6 = *puVar3;
          lVar1 = lVar7;
          do {
            lVar9 = lVar1;
            *(undefined8 *)((long)param_1 + lVar9 + 0x18) =
                 *(undefined8 *)((long)param_1 + lVar9 + 0x10);
            puVar4 = param_1;
            if (lVar9 == -0x10) goto LAB_00c0d2f0;
            uVar2 = (*(code *)*param_3)(uVar6,*(undefined8 *)((long)param_1 + lVar9 + 8));
            lVar1 = lVar9 + -8;
          } while ((uVar2 & 1) != 0);
          puVar4 = (undefined8 *)((long)param_1 + lVar9 + 0x10);
LAB_00c0d2f0:
          iVar8 = iVar8 + 1;
          *puVar4 = uVar6;
          if (iVar8 == 8) {
            return puVar3 + 1 == param_2;
          }
        }
        lVar7 = lVar7 + 8;
        puVar4 = puVar3 + 1;
        puVar5 = puVar3;
      } while (puVar3 + 1 != param_2);
    }
  }
  return true;
}




void FUN_00c0d390(long *param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00ab6c24(param_1,1);
  *param_1 = (long)&PTR_FUN_027f60b0;
  FUN_00f0e4a8(param_1 + 0x2b8);
  plVar1 = param_1 + 0x2d6;
  FUN_00f0e4a8(plVar1);
  FUN_00f0d160(param_1 + 0x2f4);
  *(undefined4 *)(param_1 + 0x31a) = param_3;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  fVar4 = 32.0;
  FUN_00ab703c(0,0x42000000,0x44480000,param_1,0,param_2,&DAT_01bee7fa,&DAT_03218ef8,0);
  FUN_00ab74c8(param_1,0);
  FUN_00ab7520(param_1,1);
  FUN_00ab7588(0x3f800000,param_1,&DAT_01bee7f6);
  FUN_00ab75b0(0x3f4ccccd,param_1,&DAT_01bee7fa);
  FUN_00b09144(0,param_1);
  local_58 = (ulong)*(uint *)(param_1 + 0x31a);
  local_50 = DAT_03210c64;
  local_78 = FUN_00c0d5c0;
  local_68 = 0;
  uStack_60 = 0;
  plStack_70 = param_1;
  FUN_009693a0(param_1 + 1,&local_78);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  local_78 = (code *)CONCAT44(local_78._4_4_,0xffa6a6a6);
  FUN_00f0e670(plVar1,&local_78,2);
  uVar2 = *(uint *)((long)param_1 + 0x1734);
  if ((uVar2 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x1734) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
    FUN_0091ada4(plVar1);
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  if ((*(float *)(param_1 + 0x2de) != 0.0) || (*(float *)((long)param_1 + 0x16f4) != fVar4 * -0.5))
  {
    *(undefined4 *)(param_1 + 0x2de) = 0;
    *(float *)((long)param_1 + 0x16f4) = fVar4 * -0.5;
    FUN_0091ada4(plVar1);
  }
  local_78 = (code *)0x3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_78);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0d5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c0d680(param_1,param_2,param_5);
  return;
}




void FUN_00c0d5c8(float param_1,undefined1 param_2 [16],long *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2._0_4_;
  fVar2 = (param_1 - fVar1) + -8.0;
  FUN_00ab75d0(0,fVar2,fVar2);
  fVar2 = (float)(**(code **)(*param_3 + 0x50))(param_3);
  fVar2 = (fVar2 * 0.5 - fVar1) + 2.0;
  if (*(float *)(param_3 + 8) != fVar2) {
    *(float *)(param_3 + 8) = fVar2;
    FUN_0091ada4(param_3);
  }
  FUN_00ab74fc(param_2._0_8_,0,param_3);
  FUN_00f13f08(param_1 - (fVar1 + fVar1),0x40000000,param_3 + 0x2d6);
  return;
}




void FUN_00c0d66c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1734) =
       *(uint *)(param_1 + 0x1734) & 0xfffffff8 |
       *(uint *)(param_1 + 0x1734) & 3 | (param_2 & 1) << 2;
  return;
}




void FUN_00c0d680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_SELECT_NEGATIVE_REPORT_ITEM");
  FUN_00f048e0(auStack_58,uVar2,param_3);
  FUN_00f04760(param_1,auStack_58,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0d6fc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  uint *puVar33;
  uint *puVar34;
  float *pfVar35;
  char *pcVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  long lVar39;
  ulong uVar40;
  undefined8 uVar41;
  uint uVar42;
  uint uVar43;
  long lVar44;
  code *local_c0;
  long *local_b8;
  long *local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  long local_90;
  
  lVar39 = tpidr_el0;
  local_90 = *(long *)(lVar39 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027f6248;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x56;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x81;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x9f;
  FUN_00f0e4a8();
  plVar4 = param_1 + 0xbd;
  FUN_00f0e4a8();
  plVar5 = param_1 + 0xdb;
  FUN_00f0d160(plVar5);
  FUN_00f0e4a8();
  FUN_00f13ca4();
  plVar6 = param_1 + 0x136;
  FUN_00f13ca4(plVar6);
  FUN_00f0e4a8();
  plVar7 = param_1 + 0x16b;
  FUN_00f0d160();
  plVar8 = param_1 + 0x191;
  FUN_00f0d160();
  plVar9 = param_1 + 0x1b7;
  FUN_00f0d160();
  plVar10 = param_1 + 0x1dd;
  FUN_00c88494();
  plVar11 = param_1 + 0x273;
  FUN_00c88494();
  plVar12 = param_1 + 0x309;
  FUN_00c88494();
  plVar13 = param_1 + 0x39f;
  FUN_00f13ca4();
  FUN_00f1306c();
  lVar44 = 0;
  do {
    FUN_00f0ac5c((long)param_1 + lVar44 + 0x1f08);
    lVar44 = lVar44 + 0x148;
  } while (lVar44 != 0xcd0);
  lVar44 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar44 + 0x2bd8);
    lVar44 = lVar44 + 0xf0;
  } while (lVar44 != 0x960);
  lVar44 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar44 + 0x3538);
    lVar44 = lVar44 + 0xf0;
  } while (lVar44 != 0x960);
  lVar44 = 0;
  do {
    FUN_00f0eda4((long)param_1 + lVar44 + 0x3e98);
    lVar44 = lVar44 + 0x100;
  } while (lVar44 != 0xa00);
  lVar44 = 0;
  do {
    FUN_00f0d160((long)param_1 + lVar44 + 0x4898);
    lVar44 = lVar44 + 0x130;
  } while (lVar44 != 0xbe0);
  lVar44 = 0;
  do {
    FUN_00f0e4a8((long)param_1 + lVar44 + 0x5478);
    lVar44 = lVar44 + 0xf0;
  } while (lVar44 != 0x960);
  plVar14 = param_1 + 0xbbb;
  FUN_00f0ac5c(plVar14);
  plVar15 = param_1 + 0xbe4;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar16 = param_1 + 0xc20;
  FUN_00f0e4a8();
  plVar17 = param_1 + 0xc3e;
  FUN_00f0eda4();
  FUN_00f0d160();
  FUN_00f0e4a8();
  plVar18 = param_1 + 0xca2;
  FUN_00f0ac5c();
  FUN_00c9e7a8(param_1 + 0xccb,1);
  plVar19 = param_1 + 0xd8d;
  FUN_00f0e4a8();
  FUN_00f0d160();
  plVar20 = param_1 + 0xdd1;
  FUN_00f017e8();
  plVar21 = param_1 + 0xde2;
  param_1[0xdd1] = (long)&PTR_FUN_027c1f80;
  FUN_00f1306c(plVar21);
  plVar22 = param_1 + 0xe0d;
  FUN_00abaee8(plVar22,1);
  plVar23 = param_1 + 0xecc;
  FUN_00abaee8(plVar23,1);
  plVar24 = param_1 + 0xf8b;
  FUN_00abaee8(plVar24,1);
  plVar25 = param_1 + 0x104a;
  FUN_00abaee8(plVar25,1);
  plVar26 = param_1 + 0x1109;
  FUN_00f0e4a8();
  plVar27 = param_1 + 0x1128;
  param_1[0x1127] = 0;
  FUN_00f0d160();
  plVar28 = param_1 + 0x114e;
  FUN_00f017e8(plVar28);
  plVar29 = param_1 + 0x115f;
  *plVar28 = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar29);
  plVar30 = param_1 + 0x117d;
  FUN_00f017e8(plVar30);
  plVar31 = param_1 + 0x118e;
  *plVar30 = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  plVar32 = param_1 + 0x11ac;
  FUN_00b12bd8(plVar32,1);
  param_1[0x1243] = 0;
  param_1[0x1242] = 0;
  FUN_00e70510(param_1 + 0x1244);
  *(undefined1 *)(param_1 + 0x1246) = 0;
  *(undefined1 *)((long)param_1 + 0x924e) = 0;
  *(undefined2 *)((long)param_1 + 0x924c) = 0;
  *(undefined8 *)((long)param_1 + 0x9244) = 0;
  *(undefined8 *)((long)param_1 + 0x923c) = 0;
  *(undefined8 *)((long)param_1 + 0x9234) = 0;
  *(undefined1 *)((long)param_1 + 0x9254) = 0;
  *(undefined4 *)(param_1 + 0x124a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1a,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x38,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  FUN_00f133a4(plVar1,plVar5,1);
  FUN_00f133a4(plVar1,plVar8,1);
  FUN_00f133a4(plVar1,param_1 + 0x101,1);
  FUN_00f133a4(plVar1,param_1 + 0x11f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,param_1 + 0x14d,1);
  FUN_00f023ec(plVar6,plVar9,1);
  FUN_00f023ec(plVar6,plVar10,1);
  FUN_00f023ec(plVar6,plVar12,1);
  FUN_00f023ec(plVar6,plVar11,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  FUN_00f023ec(plVar13,param_1 + 0x3b6,1);
  FUN_00f023ec(plVar13,plVar14,1);
  FUN_00f0ad88(plVar14,plVar15,1);
  FUN_00f0ad88(plVar14,param_1 + 0xc02,1);
  FUN_00f0ad88(plVar14,plVar16,1);
  FUN_00f0ad88(plVar14,plVar17,1);
  FUN_00f0ad88(plVar14,param_1 + 0xc5e,1);
  FUN_00f023ec(plVar13,param_1 + 0xc84,1);
  FUN_00f023ec(plVar13,plVar18,1);
  FUN_00f0ad88(plVar18,param_1 + 0xccb,1);
  FUN_00f0ad88(plVar18,plVar19,1);
  FUN_00f023ec(plVar19,param_1 + 0xdab,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar20,1);
  FUN_00f023ec(plVar20,plVar21,1);
  FUN_00f133a4(plVar21,plVar22,1);
  FUN_00f133a4(plVar21,plVar23,1);
  FUN_00f133a4(plVar21,plVar24,1);
  FUN_00f133a4(plVar21,plVar25,1);
  FUN_00f023ec(plVar25,plVar26,1);
  FUN_00f133a4(plVar21,plVar29,1);
  FUN_00f133a4(plVar21,plVar28,1);
  FUN_00f023ec(plVar28,plVar30,1);
  FUN_00f023ec(plVar30,plVar32,1);
  FUN_00f023ec(plVar30,plVar31,1);
  FUN_00f023ec(plVar20,plVar27,1);
  FUN_00f0e548(param_1 + 0x1a,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               "circle_button_fill_lefthalf");
  FUN_00f0e548(param_1 + 0x38,PTR_s_build___HUDPartsCommon_atlas_02be3440,
               "generic_gradient_horizontal");
  *(uint *)((long)param_1 + 0x244) = *(uint *)((long)param_1 + 0x244) & 0xffffffbf;
  FUN_00c0ebb8(param_1,0);
  FUN_00f0e540(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  if ((*(float *)(param_1 + 0xa9) != 0.5) || (*(float *)((long)param_1 + 0x54c) != 0.5)) {
    param_1[0xa9] = 0x3f0000003f000000;
    FUN_0091ada4(plVar3);
  }
  *(uint *)((long)param_1 + 0x57c) = *(uint *)((long)param_1 + 0x57c) & 0xfffffffb;
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  uVar42 = *(uint *)((long)param_1 + 0x48c);
  if ((uVar42 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x48c) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x2600;
    FUN_0091ada4(plVar2);
    uVar42 = *(uint *)((long)param_1 + 0x48c);
  }
  *(uint *)((long)param_1 + 0x48c) = uVar42 & 0xfffffffb;
  FUN_00f0e548(plVar4,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar42 = *(uint *)((long)param_1 + 0x66c);
  if ((uVar42 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x66c) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x5900;
    FUN_0091ada4(plVar4);
  }
  if ((*(float *)(param_1 + 199) != 0.5) || (*(float *)((long)param_1 + 0x63c) != 0.5)) {
    param_1[199] = 0x3f0000003f000000;
    FUN_0091ada4(plVar4);
  }
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) & 0xfffffffb;
  FUN_00f0d378(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00f0da30(plVar8,1);
  FUN_00e705c8(&local_c0,"1");
  FUN_00f0d75c(plVar8,&local_c0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (void *)0x0;
  }
  *(uint *)((long)param_1 + 0xd0c) = *(uint *)((long)param_1 + 0xd0c) & 0xffffffbf;
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  if ((*(float *)(param_1 + 0x175) != 0.0) || (*(float *)((long)param_1 + 0xbac) != 0.5)) {
    param_1[0x175] = 0x3f00000000000000;
    FUN_0091ada4(plVar7);
  }
  FUN_00e705c8(&local_c0,"ASuperLongNameForThePurposesOfLayout");
  FUN_00f0d75c(plVar7,&local_c0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (void *)0x0;
  }
  FUN_00f0e548(param_1 + 0x14d,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  *(uint *)((long)param_1 + 0xaec) = *(uint *)((long)param_1 + 0xaec) & 0xfffffffb;
  FUN_00f0d378(plVar9,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00e705c8(&local_c0,&DAT_01bbbbff);
  FUN_00f0d75c(plVar9,&local_c0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (void *)0x0;
  }
  uVar42 = *(uint *)((long)param_1 + 0x75c);
  if ((uVar42 & 0x7f80) != 0x6c00) {
    *(uint *)((long)param_1 + 0x75c) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x6c00;
    FUN_0091ada4(plVar5);
  }
  if ((*(float *)(param_1 + 0xe5) != 0.5) || (*(float *)((long)param_1 + 0x72c) != 0.5)) {
    param_1[0xe5] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_02be9c98);
  FUN_00f0d7fc(plVar5,&DAT_01bee7fa);
  FUN_00c88730(plVar10,&DAT_01bee7fa,&DAT_01bbbb80);
  FUN_00c88700(0x3f266666,plVar10);
  FUN_00c88698(plVar10,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00e705c8(&local_c0,"19");
  FUN_00c88770(plVar10,&local_c0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (void *)0x0;
  }
  uVar40 = FUN_009f1f70(0x1d);
  pcVar36 = "hud_stats_bounty";
  if ((uVar40 & 1) == 0) {
    pcVar36 = "hud_pingicon_action_minion";
  }
  FUN_00c886f8(plVar11,pcVar36);
  FUN_00c88700(0x3f000000,plVar11);
  FUN_00c88698(plVar11,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00e705c8(&local_c0,"000");
  FUN_00c88770(plVar11,&local_c0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (void *)0x0;
  }
  FUN_00c886f8(plVar12,"hud_store_gold_icon_large");
  FUN_00c88700(0x3f000000,plVar12);
  FUN_00c88698(plVar12,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88);
  FUN_00e705c8(&local_c0,&DAT_01bbbc19);
  FUN_00c88770(plVar12,&local_c0);
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (code *)0x0;
    local_b8 = (void *)0x0;
  }
  FUN_00f0e548(param_1 + 0x101,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448,
               "icon_item_weapon_infusion");
  *(uint *)((long)param_1 + 0x88c) = *(uint *)((long)param_1 + 0x88c) & 0xfffffffb;
  FUN_00f0e548(plVar15,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  uVar42 = *(uint *)((long)param_1 + 0x5fa4);
  if ((uVar42 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x5fa4) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x2600;
    FUN_0091ada4(plVar15);
  }
  FUN_00f0e548(plVar17,PTR_s_build___HUDItemsAndBuffs_atlas_02be3448,"icon_item_empty");
  FUN_00f0e670(plVar17,&DAT_01bee7f6,2);
  uVar42 = *(uint *)((long)param_1 + 0x6274);
  if ((uVar42 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6274) = uVar42 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar17);
  }
  FUN_00f0e548(plVar16,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar16,&DAT_01bee7f6,2);
  uVar42 = *(uint *)((long)param_1 + 0x6184);
  if ((uVar42 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6184) = uVar42 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar16);
  }
  FUN_00f0e540(param_1 + 0xc84,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  plVar1 = param_1 + 0xca3;
  uVar37 = DAT_03210f84;
  local_c0 = FUN_00c0ec2c;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  local_98 = uVar37;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = DAT_03210f94;
  local_c0 = FUN_00c0ec44;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  local_98 = DAT_03210f98;
  local_c0 = FUN_00c0ec5c;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  FUN_009693a0(plVar1,&local_c0);
  *(uint *)((long)param_1 + 0x6594) = *(uint *)((long)param_1 + 0x6594) & 0xfffffffb | 0x10;
  FUN_00f0d378(param_1 + 0xdab,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  *(uint *)((long)param_1 + 0x6ddc) = *(uint *)((long)param_1 + 0x6ddc) & 0xfffffffb;
  FUN_00f0e548(plVar19,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  *(uint *)((long)param_1 + 0x6cec) = *(uint *)((long)param_1 + 0x6cec) & 0xfffffffb;
  FUN_00f1340c(plVar21,0);
  plVar1 = param_1 + 0xea8;
  FUN_00f0e578(plVar1,"hud_pingicon_action_thumbsup");
  FUN_00f0e6bc(0,plVar1);
  uVar42 = *(uint *)((long)param_1 + 0x75c4);
  if ((uVar42 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x75c4) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x5900;
    FUN_0091ada4(plVar1);
  }
  uVar42 = *(uint *)((long)param_1 + 0x73e4);
  if ((uVar42 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x73e4) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x1980;
    FUN_0091ada4(param_1 + 0xe6c);
  }
  FUN_00b09144(0,plVar22);
  FUN_00abb1e0(0x3f666666,plVar22,&DAT_01bee7fa);
  lVar44 = NEON_fmov(0xc1200000,4);
  uVar38 = DAT_03210c64;
  param_1[0xe18] = lVar44;
  local_c0 = FUN_00c0ec74;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  local_98 = uVar38;
  FUN_009693a0(param_1 + 0xe0e,&local_c0);
  plVar1 = param_1 + 0xf67;
  FUN_00f0e578(plVar1,"hud_pingicon_action_thumbsup");
  FUN_00f0e6bc(0,plVar1);
  uVar42 = *(uint *)((long)param_1 + 0x7bbc);
  if ((uVar42 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x7bbc) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x5900;
    FUN_0091ada4(plVar1);
  }
  *(byte *)(param_1 + 0xf82) = *(byte *)(param_1 + 0xf82) | 2;
  uVar42 = *(uint *)((long)param_1 + 0x79dc);
  if ((uVar42 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x79dc) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x1980;
    FUN_0091ada4(param_1 + 0xf2b);
  }
  FUN_00b09144(0,plVar23);
  FUN_00abb1e0(0x3f666666,plVar23,&DAT_01bee7fa);
  param_1[0xed7] = lVar44;
  local_c0 = thunk_FUN_00c13298;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  local_98 = uVar38;
  FUN_009693a0(param_1 + 0xecd,&local_c0);
  FUN_00f0e578(param_1 + 0x1026,"hud_eom_add");
  uVar42 = *(uint *)((long)param_1 + 0x81b4);
  if ((uVar42 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x81b4) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x5900;
    FUN_0091ada4(param_1 + 0x1026);
  }
  uVar42 = *(uint *)((long)param_1 + 0x7fd4);
  if ((uVar42 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x7fd4) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x1980;
    FUN_0091ada4(param_1 + 0xfea);
  }
  FUN_00abb1e0(0x3f19999a,plVar24,&DAT_01bee7fa);
  FUN_00b09144(0,plVar24);
  FUN_00abb1e0(0x3f666666,plVar24,&DAT_01bee7fa);
  param_1[0xf96] = lVar44;
  local_c0 = FUN_00c0ecac;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  local_98 = uVar38;
  FUN_009693a0(param_1 + 0xf8c,&local_c0);
  FUN_00f0e578(param_1 + 0x10e5,"generic_chat_bubble_outline");
  uVar42 = *(uint *)((long)param_1 + 0x87ac);
  if ((uVar42 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x87ac) = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x5900;
    FUN_0091ada4(param_1 + 0x10e5);
  }
  puVar33 = (uint *)((long)param_1 + 0x85cc);
  uVar42 = *puVar33;
  if ((uVar42 & 0x7f80) != 0x1980) {
    *puVar33 = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x1980;
    FUN_0091ada4(param_1 + 0x10a9);
  }
  FUN_00b09144(0,plVar25);
  FUN_00abb1e0(0x3f666666,plVar25,&DAT_01bee7fa);
  param_1[0x1055] = lVar44;
  local_c0 = thunk_FUN_00c133a0;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  local_98 = uVar38;
  FUN_009693a0(param_1 + 0x104b,&local_c0);
  *(uint *)((long)param_1 + 0x82d4) = *(uint *)((long)param_1 + 0x82d4) & 0xfffffffb;
  FUN_00f0e548(plVar26,PTR_s_build___HUDPartsCommon_atlas_02be3440,"generic_slash_line");
  if ((*(float *)(param_1 + 0x1113) != 0.5) || (*(float *)((long)param_1 + 0x889c) != 0.5)) {
    param_1[0x1113] = 0x3f0000003f000000;
    FUN_0091ada4(plVar26);
  }
  puVar34 = (uint *)((long)param_1 + 0x88cc);
  *puVar34 = *puVar34 & 0xfffffffb;
  if ((*(float *)(param_1 + 0x1112) != 1.25) || (*(float *)((long)param_1 + 0x8894) != 1.25)) {
    lVar44 = NEON_fmov(0x3fa00000,4);
    param_1[0x1112] = lVar44;
    FUN_0091ada4(plVar26);
  }
  FUN_00f0e670(plVar26,&DAT_01bee802,2);
  uVar42 = *puVar34;
  uVar43 = (uint)(((float)(*puVar33 >> 7 & 0xff) / 255.0) * 255.0);
  if ((uVar42 >> 7 & 0xff) != uVar43) {
    *puVar34 = uVar42 & 0xffff8000 | uVar42 & 0x7f | (uVar43 & 0xff) << 7;
    FUN_0091ada4(plVar26);
  }
  *(uint *)((long)param_1 + 0x8af4) = *(uint *)((long)param_1 + 0x8af4) & 0xffffffbb;
  FUN_00b132e8(0x3f666666,plVar32,&DAT_01bee7f6);
  FUN_00b1326c(0x3f800000,plVar32,&DAT_01bee7fa);
  FUN_00f0e548(plVar31,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_bubble_side_arrow");
  pfVar35 = (float *)(param_1 + 0x1197);
  if ((*pfVar35 != 1.1) || (*(float *)((long)param_1 + 0x8cbc) != 1.1)) {
    pfVar35[0] = 1.1;
    pfVar35[1] = 1.1;
    FUN_0091ada4(plVar31);
  }
  FUN_00f0e548(plVar29,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar29,&DAT_01bee7f6,2);
  puVar33 = (uint *)((long)param_1 + 0x8b7c);
  uVar42 = *puVar33;
  if ((uVar42 & 0x7f80) != 0x3300) {
    *puVar33 = uVar42 & 0xffff8000 | uVar42 & 0x7f | 0x3300;
    FUN_0091ada4(plVar29);
  }
  uVar38 = DAT_03210f58;
  local_c0 = FUN_00c0ecc4;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  local_98 = uVar38;
  FUN_009693a0(param_1 + 0x1160,&local_c0);
  local_c0 = FUN_00c0ecc4;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  local_98 = uVar37;
  FUN_009693a0(param_1 + 0x1160,&local_c0);
  *puVar33 = *puVar33 & 0xffffffab | 0x10;
  uVar41 = FUN_00e6ce7c("GAME_OVER_BLOCKLIST_NOTICE",0);
  FUN_00f0d75c(plVar27,uVar41);
  FUN_00f0d378(plVar27,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  *(uint *)((long)param_1 + 0x89c4) = *(uint *)((long)param_1 + 0x89c4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6f0c) = *(uint *)((long)param_1 + 0x6f0c) & 0xfffffffb;
  local_98 = FUN_00f048a4("EVENT_SELECT_NEGATIVE_REPORT_ITEM");
  local_c0 = FUN_00c0eccc;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  FUN_009693a0(param_1 + 1,&local_c0);
  local_c0 = thunk_FUN_00c131dc;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  local_98 = uVar38;
  FUN_009693a0(param_1 + 0x1129,&local_c0);
  local_c0 = thunk_FUN_00c131dc;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  local_b0 = (long *)0x0;
  local_b8 = param_1;
  local_98 = uVar37;
  FUN_009693a0(param_1 + 0x1129,&local_c0);
  if ((*(uint *)((long)param_1 + 0x84) & 0x7f80) != 0x1f80) {
    *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffff807f | 0x1f80;
    FUN_0091ada4(param_1);
  }
  uVar41 = FUN_009f1f64();
  local_c0 = (code *)0x0;
  local_a8 = thunk_FUN_00c1299c;
  local_b8 = param_1;
  local_b0 = param_1;
  FUN_009104f8(uVar41,&local_c0);
  if (*(long *)(lVar39 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

