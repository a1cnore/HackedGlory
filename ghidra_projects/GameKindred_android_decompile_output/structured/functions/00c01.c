// functions/00c01 — 14 functions
#include "libGameKindred.h"




void FUN_00c01040(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00f13f18(param_1 + 0x88,param_1 + 0x488);
  lVar1 = param_1 + 0x178;
  FUN_00f13f08(0x42c80000,0x42c80000,lVar1);
  FUN_00f13f08(0x42b00000,0x42b00000,param_1 + 0x268);
  FUN_00f07a18(0x41a00000,0,lVar1,7);
  FUN_00f07940(0,0,param_1 + 0x268,8,lVar1,8);
  lVar2 = param_1 + 0x358;
  FUN_00f07b18(0x41a00000,lVar2,3,lVar1,1);
  FUN_00f07b18(0,lVar2,5,lVar1,5);
  FUN_00f0db64(*(float *)(param_1 + 0x488) + -100.0 + -20.0 + -40.0,0,0x3f800000,lVar2);
  return;
}




undefined4 FUN_00c01140(long param_1)

{
  return *(undefined4 *)(param_1 + 0x488);
}




void FUN_00c0114c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f4d08;
  FUN_00f0d3a4(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00c011f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f4d08;
  FUN_00f0d3a4(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_028266f0;
  param_1[0x28] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2b);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c0129c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00c0131c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined4 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  code *local_b8;
  long *plStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined4 local_90;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_027f4e08;
  FUN_00f13ca4();
  lVar13 = 0;
  do {
    FUN_00c84dbc((long)param_1 + lVar13 + 0x178);
    lVar13 = lVar13 + 0x370;
  } while (lVar13 != 0x1ef0);
  plVar12 = param_1 + 0x40d;
  lVar13 = 0x5b68;
  do {
    FUN_00ed66ec(plVar12);
    lVar13 = lVar13 + -0xa28;
    plVar12 = plVar12 + 0x145;
  } while (lVar13 != 0);
  lVar13 = 0;
  do {
    FUN_00f13ca4((long)param_1 + lVar13 + 0x7bd0);
    lVar13 = lVar13 + 0xb8;
  } while (lVar13 != 0x678);
  FUN_00c84dbc();
  memset(param_1 + 0x10b7,0,0x90);
  plVar2 = param_1 + 0x10c9;
  FUN_00b043c8();
  FUN_00bfb928(param_1 + 0x10e3);
  param_1[0x10e5] = (long)&PTR_FUN_027f5308;
  pvVar8 = operator_new(0x13c0);
  FUN_00c7f4b8();
  param_1[0x10e6] = (long)pvVar8;
  *(long **)((long)pvVar8 + 0xb8) = param_1 + 0x10e5;
  FUN_00948cd8(param_1 + 0x10e7);
  param_1[0x10e5] = (long)&PTR_FUN_027f4f50;
  param_1[0x10e7] = (long)&PTR_FUN_027f4f70;
  uVar4 = DAT_03210c64;
  param_1[0x10ea] = 0;
  *(undefined1 *)(param_1 + 0x10eb) = 0;
  uVar15 = 0;
  puVar16 = (uint *)((long)param_1 + 0x1fc);
  plVar12 = param_1 + 0x40d;
  do {
    uVar3 = (uint)uVar15 & 0x7fffffff;
    if ((uVar3 == 1) || (uVar3 == 2)) {
      iVar7 = FUN_0092f28c();
      if (iVar7 == 1) goto LAB_00c014ec;
LAB_00c01570:
      *puVar16 = *puVar16 & 0xfffffffb;
    }
    else {
      if ((uVar3 == 8) && (lVar13 = FUN_00940c1c(), *(char *)(lVar13 + 0xc) == '\0'))
      goto LAB_00c01570;
LAB_00c014ec:
      local_b8 = FUN_00c01998;
      local_a8 = 0;
      local_a0 = 0;
      plStack_b0 = param_1;
      local_98 = uVar15;
      local_90 = uVar4;
      FUN_009693a0(puVar16 + -0x1f,&local_b8);
      *puVar16 = *puVar16 | 0x10;
      FUN_00f0d378(puVar16 + 0x6f,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
      lVar13 = FUN_009f1a50(uVar15 & 0xffffffff);
      FUN_00f0d75c(puVar16 + 0x6f,lVar13 + 8);
      FUN_00ed5b20(plVar12,PTR_s_build___HUDPartsCommon_atlas_02be3440,1);
      local_b8 = (code *)CONCAT71(local_b8._1_7_,1);
      FUN_00ed5ab0(plVar12,&local_b8);
    }
    uVar15 = uVar15 + 1;
    puVar16 = puVar16 + 0xdc;
    plVar12 = plVar12 + 0x145;
  } while (uVar15 != 9);
  local_b8 = thunk_FUN_00eca0c4;
  local_a0 = 0;
  local_98 = 0;
  local_a8 = 0;
  plStack_b0 = param_1;
  local_90 = uVar4;
  FUN_009693a0(param_1 + 0x104a,&local_b8);
  *(uint *)((long)param_1 + 0x82cc) = *(uint *)((long)param_1 + 0x82cc) | 0x10;
  FUN_00f0d378(param_1 + 0x1091,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  uVar9 = FUN_00e6ce7c("HUD_SETTINGS_TITLE",0);
  FUN_00f0d75c(param_1 + 0x1091,uVar9);
  FUN_00c84e64(param_1 + 0x1049,0);
  iVar7 = 0;
  do {
    puVar10 = (undefined4 *)FUN_009f1a68(iVar7);
    iVar5 = puVar10[5];
    if (iVar5 == 3) {
      pvVar8 = operator_new(0x540);
      FUN_00c84f24(pvVar8,*puVar10);
      FUN_00c85214(0x3e4ccccd,pvVar8,*(long *)(puVar10 + 0x12) + 8,
                   PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
      FUN_00f13f08(0x442f0000,0x43480000,pvVar8);
      uVar15 = (ulong)(uint)puVar10[4];
      local_b8 = (code *)((long)pvVar8 + 0xb8);
LAB_00c01748:
      FUN_00c019a4(param_1 + uVar15 * 2 + 0x10b7,&local_b8);
    }
    else {
      if (iVar5 == 2) {
        pvVar8 = operator_new(0x2b0);
        FUN_00c842d8(pvVar8,*puVar10);
        FUN_00c84654(pvVar8,puVar10 + 0xc);
        if (puVar10[0x10] != 0) {
          lVar13 = *(long *)(puVar10 + 0x12);
          do {
            FUN_00c84468(pvVar8,lVar13 + 8,lVar13 + 0x18);
            lVar13 = lVar13 + 0x28;
          } while (lVar13 != *(long *)(puVar10 + 0x12) + (ulong)(uint)puVar10[0x10] * 0x28);
        }
        uVar15 = (ulong)(uint)puVar10[4];
        local_b8 = (code *)((long)pvVar8 + 0x158);
        goto LAB_00c01748;
      }
      if (iVar5 == 1) {
        pvVar8 = operator_new(0x948);
        FUN_00c847f8(pvVar8,*puVar10);
        FUN_00c84a2c(pvVar8,*(long *)(puVar10 + 0x12) + 8);
        FUN_00c84c80(pvVar8,*(long *)(puVar10 + 0x12) + 0x18);
        uVar15 = (ulong)(uint)puVar10[4];
        local_b8 = (code *)((long)pvVar8 + 0x240);
        goto LAB_00c01748;
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x22);
  lVar13 = 0;
  uVar4 = DAT_0313c544;
  do {
    if (*(uint *)(param_1 + lVar13 * 2 + 0x10b7) != 0) {
      puVar14 = (undefined8 *)param_1[lVar13 * 2 + 0x10b8];
      do {
        lVar11 = (**(code **)(*(long *)*puVar14 + 0x20))();
        puVar17 = puVar14 + 1;
        local_98 = *puVar14;
        local_b8 = FUN_00c01a2c;
        local_a8 = 0;
        local_a0 = 0;
        plStack_b0 = param_1;
        local_90 = uVar4;
        FUN_009693a0(lVar11 + 8,&local_b8);
        puVar14 = puVar17;
      } while (puVar17 !=
               (undefined8 *)
               (param_1[lVar13 * 2 + 0x10b8] + (ulong)*(uint *)(param_1 + lVar13 * 2 + 0x10b7) * 8))
      ;
    }
    lVar13 = lVar13 + 1;
  } while (lVar13 != 9);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  lVar13 = 0;
  do {
    FUN_00f023ec(plVar1,param_1 + lVar13 * 0x6e + 0x2f,1);
    uVar3 = (uint)lVar13 & 0x7fffffff;
    if (uVar3 == 7) {
      uVar15 = FUN_00937f1c();
      plVar12 = param_1 + 0x10e6;
      if ((uVar15 & 1) == 0) goto LAB_00c018c0;
LAB_00c01884:
      FUN_00b04468(plVar2,param_1 + lVar13 * 0x145 + 0x40d);
      FUN_00ed5664(param_1 + lVar13 * 0x145 + 0x40d,param_1 + lVar13 * 0x17 + 0xf7a,1);
    }
    else {
      plVar12 = param_1 + 0x10e4;
      if (uVar3 != 1) goto LAB_00c01884;
LAB_00c018c0:
      FUN_00b04468(plVar2,*plVar12);
    }
    if (*(uint *)(param_1 + lVar13 * 2 + 0x10b7) != 0) {
      puVar14 = (undefined8 *)param_1[lVar13 * 2 + 0x10b8];
      do {
        puVar17 = puVar14 + 1;
        uVar9 = (**(code **)(*(long *)*puVar14 + 0x20))();
        (**(code **)(param_1[lVar13 * 0x17 + 0xf7a] + 0x78))
                  (param_1 + lVar13 * 0x17 + 0xf7a,uVar9,1);
        puVar14 = puVar17;
      } while (puVar17 !=
               (undefined8 *)
               (param_1[lVar13 * 2 + 0x10b8] + (ulong)*(uint *)(param_1 + lVar13 * 2 + 0x10b7) * 8))
      ;
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 9) {
      FUN_00f023ec(plVar1,param_1 + 0x1049,1);
      FUN_00c01a7c(param_1,0);
      if (*(long *)(lVar6 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_00c01998(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00c01a7c(param_1,in_x4);
  return;
}




void FUN_00c019a4(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00c0282c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c01a2c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00f04924(param_4);
  (*(code *)**(undefined8 **)param_1[0x17])
            ((undefined8 *)param_1[0x17],*(undefined4 *)(param_5 + 8),*puVar1);
                    /* WARNING: Could not recover jumptable at 0x00c01a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00c01a7c(long param_1,ulong param_2)

{
  long lVar1;
  
  FUN_00b045b0(param_1 + 0x8648,param_2,1);
  lVar1 = 0;
  param_1 = param_1 + 0x178;
  do {
    FUN_00c84e64(param_1,-(param_2 & 0xffffffff) == lVar1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x370;
  } while (lVar1 != -9);
  return;
}




void FUN_00c01ae4(undefined8 *param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = 0;
  *param_1 = &PTR_FUN_027f4e08;
  do {
    uVar2 = *(uint *)(param_1 + lVar4 * 2 + 0x10b7);
    if (uVar2 != 0) {
      plVar3 = (long *)param_1[lVar4 * 2 + 0x10b8];
      plVar1 = plVar3;
      do {
        if ((long *)*plVar1 != (long *)0x0) {
          (**(code **)(*(long *)*plVar1 + 8))();
          uVar2 = *(uint *)(param_1 + lVar4 * 2 + 0x10b7);
          plVar3 = (long *)param_1[lVar4 * 2 + 0x10b8];
        }
        plVar1 = plVar1 + 1;
      } while (plVar1 != plVar3 + uVar2);
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 != 9);
  if ((long *)param_1[0x10ea] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10ea] + 8))();
  }
  FUN_00948d58(param_1 + 0x10e7);
  param_1[0x10e5] = &PTR_FUN_027f5308;
  plVar1 = (long *)param_1[0x10e6];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x10e6] = 0;
  param_1[0x10e3] = &PTR___cxa_pure_virtual_027f4430;
  plVar1 = (long *)param_1[0x10e4];
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  param_1[0x10e4] = 0;
  FUN_00b04404(param_1 + 0x10c9);
  puVar5 = param_1 + 0x10c8;
  lVar4 = -0x90;
  do {
    if ((void *)*puVar5 != (void *)0x0) {
      operator_delete__((void *)*puVar5);
      puVar5[-1] = 0;
      *puVar5 = 0;
    }
    lVar4 = lVar4 + 0x10;
    puVar5 = puVar5 + -2;
  } while (lVar4 != 0);
  param_1[0x1049] = &PTR_FUN_02804af0;
  FUN_00f0d3a4(param_1 + 0x1091);
  FUN_00ecf74c(param_1 + 0x1049);
  lVar4 = 0;
  do {
    FUN_00f13d08((long)param_1 + lVar4 + 0x8190);
    lVar4 = lVar4 + -0xb8;
  } while (lVar4 != -0x678);
  puVar5 = param_1 + 0xe35;
  lVar4 = -0x5b68;
  do {
    thunk_FUN_00ed5534(puVar5);
    lVar4 = lVar4 + 0xa28;
    puVar5 = puVar5 + -0x145;
  } while (lVar4 != 0);
  lVar4 = -0x1ef0;
  puVar5 = param_1 + 0x39f;
  do {
    *puVar5 = &PTR_FUN_02804af0;
    FUN_00f0d3a4(puVar5 + 0x48);
    FUN_00ecf74c(puVar5);
    lVar4 = lVar4 + 0x370;
    puVar5 = puVar5 + -0x6e;
  } while (lVar4 != 0);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c01cf0(undefined8 *param_1)

{
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR_FUN_027f5308;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00c01d3c(void *param_1)

{
  FUN_00c01ae4();
  operator_delete(param_1);
  return;
}




void FUN_00c01d60(undefined1 param_1 [16],ulong param_2,long *param_3)

{
  long *plVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  float fVar16;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 uStack_8c;
  long local_88;
  
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  iVar5 = 0;
  do {
    piVar6 = (int *)FUN_009f1a68(iVar5);
    if ((piVar6[0xb] != 0) || (piVar6[9] != 0x23)) {
      uVar4 = FUN_00c02258(param_3,piVar6);
      uVar10 = 0;
      do {
        if (*(uint *)(param_3 + uVar10 * 2 + 0x10b7) != 0) {
          lVar11 = (ulong)*(uint *)(param_3 + uVar10 * 2 + 0x10b7) << 3;
          puVar15 = (undefined8 *)param_3[uVar10 * 2 + 0x10b8];
          do {
            plVar13 = (long *)*puVar15;
            if ((int)plVar13[1] == *piVar6) goto LAB_00c01e1c;
            lVar11 = lVar11 + -8;
            puVar15 = puVar15 + 1;
          } while (lVar11 != 0);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < 9);
      plVar13 = (long *)0x0;
LAB_00c01e1c:
      lVar11 = (**(code **)(*plVar13 + 0x20))(plVar13);
      *(uint *)(lVar11 + 0x84) =
           *(uint *)(lVar11 + 0x84) & 0xfffffff8 | *(uint *)(lVar11 + 0x84) & 3 | (uVar4 & 1) << 2;
      lVar11 = (**(code **)(*plVar13 + 0x20))(plVar13);
      *(uint *)(lVar11 + 0x84) =
           *(uint *)(lVar11 + 0x84) & 0xffffff80 |
           *(uint *)(lVar11 + 0x84) & 0x3f | (uVar4 & 1) << 6;
    }
    iVar5 = iVar5 + 1;
    if (iVar5 == 0x22) {
      plVar12 = param_3 + 0x18;
      fVar16 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      uStack_8c = (undefined4)param_2;
      local_90 = fVar16;
      FUN_00f13f08(0x44160000,plVar12);
      FUN_00f07940(0,0,plVar12,0,param_3,0);
      plVar13 = param_3 + 0x2f;
      lVar11 = 9;
      do {
        FUN_00f13f08(0x44160000,0x42b40000,plVar13);
        lVar11 = lVar11 + -1;
        plVar13 = plVar13 + 0x6e;
      } while (lVar11 != 0);
      plVar1 = param_3 + 0x1049;
      FUN_00f13f08(0x44160000,0x42b40000,plVar1);
      FUN_00f07940(0,*(undefined4 *)(&DAT_01bbb6f0 + (ulong)((char)param_3[0x10eb] == '\0') * 4),
                   param_3 + 0x2f,0,plVar12,0);
      iVar5 = 0;
      plVar13 = param_3 + 0x9d;
      lVar11 = -8;
      do {
        if ((*(byte *)((long)plVar13 + 0x84) >> 2 & 1) != 0) {
          FUN_00f07b18(0x42400000,plVar13,0,param_3 + (long)iVar5 * 0x6e + 0x2f,2);
          FUN_00f07b18(0,plVar13,3,param_3 + (long)iVar5 * 0x6e + 0x2f,3);
          iVar5 = (int)lVar11 + 9;
        }
        lVar11 = lVar11 + 1;
        plVar13 = plVar13 + 0x6e;
      } while (lVar11 != 0);
      FUN_00f07b18(0x42400000,plVar1,0,param_3 + (long)iVar5 * 0x6e + 0x2f,2);
      FUN_00f07b18(0,plVar1,3,param_3 + (long)iVar5 * 0x6e + 0x2f,3);
      puVar2 = (uint *)((long)param_3 + 0x82cc);
      *puVar2 = *puVar2 | 4;
      FUN_00a06b24();
      iVar5 = FUN_00a06c4c();
      if (iVar5 == 3) {
        *puVar2 = *puVar2 & 0xfffffffb;
      }
      if (param_3[0x10ea] != 0) {
        FUN_00f07940(0,0xc2700000,param_3[0x10ea],3,plVar12,3);
      }
      plVar13 = param_3 + 0x10c9;
      FUN_00f13f08(fVar16 + -600.0,plVar13);
      FUN_00f07b18(0x42400000,plVar13,3,plVar12,1);
      FUN_00f07b18(0,plVar13,0,plVar12,0);
      lVar11 = 0;
      do {
        fVar16 = (float)param_2;
        if (*(uint *)(param_3 + lVar11 * 2 + 0x10b7) != 0) {
          puVar15 = (undefined8 *)param_3[lVar11 * 2 + 0x10b8];
          puVar14 = (undefined8 *)0x0;
          do {
            lVar7 = (**(code **)(*(long *)*puVar15 + 0x20))();
            if ((*(byte *)(lVar7 + 0x84) >> 2 & 1) != 0) {
              (**(code **)(*(long *)*puVar15 + 0x18))(0x44bb8000);
              uVar8 = (**(code **)(*(long *)*puVar15 + 0x20))();
              if (puVar14 == (undefined8 *)0x0) {
                uVar9 = FUN_00ed5aa8(param_3 + lVar11 * 0x145 + 0x40d);
                param_2 = 0x42480000;
                FUN_00f07940(0x42480000,uVar8,0,uVar9,0);
                puVar14 = puVar15;
              }
              else {
                uVar9 = (**(code **)(*(long *)*puVar14 + 0x20))();
                FUN_00f07b18(0x42c80000,uVar8,0,uVar9,2);
                FUN_00f07b18(0,uVar8,3,uVar9,3);
                puVar14 = puVar15;
              }
            }
            fVar16 = (float)param_2;
            puVar15 = puVar15 + 1;
          } while (puVar15 !=
                   (undefined8 *)
                   (param_3[lVar11 * 2 + 0x10b8] +
                   (ulong)*(uint *)(param_3 + lVar11 * 2 + 0x10b7) * 8));
        }
        local_98 = (float)(**(code **)(param_3[lVar11 * 0x17 + 0xf7a] + 0x58))
                                    (param_3 + lVar11 * 0x17 + 0xf7a,0,0,0,1);
        local_98 = local_98 + 0.0;
        fStack_94 = fVar16 + 100.0;
        param_2 = (ulong)(uint)fStack_94;
        FUN_00f13f18(param_3 + lVar11 * 0x17 + 0xf7a,&local_98);
        lVar11 = lVar11 + 1;
      } while (lVar11 != 9);
      param_3 = param_3 + 0x40d;
      lVar11 = 9;
      do {
        FUN_00f13f18(param_3,&local_90);
        FUN_00ed567c(param_3);
        lVar11 = lVar11 + -1;
        param_3 = param_3 + 0x145;
      } while (lVar11 != 0);
      if (*(long *)(lVar3 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}

