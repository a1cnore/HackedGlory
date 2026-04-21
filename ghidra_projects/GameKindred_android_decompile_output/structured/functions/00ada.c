// functions/00ada — 18 functions
#include "libGameKindred.h"




void FUN_00ada058(long param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  
  if (*(int *)(param_1 + 0xd88) != 0) {
    uVar7 = 0;
    lVar6 = 8;
    do {
      uVar2 = FUN_00f08be8(*(long *)(*(long *)(param_1 + 0xd90) + lVar6) + 0x1c0);
      uVar3 = FUN_00e70b34(uVar2,param_3);
      if ((uVar3 & 1) != 0) {
        lVar4 = *(long *)(*(long *)(param_1 + 0xd90) + lVar6);
        uVar5 = *(uint *)(lVar4 + 0x84);
        *(uint *)(lVar4 + 0x84) = uVar5 & 0xffffffe0 | uVar5 & 0xf | (param_2 & 1) << 4;
        uVar5 = 0xff;
        if ((param_2 & 1) == 0) {
          uVar5 = 0x4c;
        }
        lVar6 = *(long *)(*(long *)(param_1 + 0xd90) + lVar6);
        uVar1 = *(uint *)(lVar6 + 0x84);
        if ((uVar1 >> 7 & 0xff) == uVar5) {
          return;
        }
        *(uint *)(lVar6 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar5 << 7;
        FUN_0091ada4();
        return;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar7 < *(uint *)(param_1 + 0xd88));
  }
  return;
}




void FUN_00ada12c(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  long *plVar2;
  
  if (*(uint *)(param_1 + 0xd88) != 0) {
    uVar1 = 0;
    plVar2 = (long *)(*(long *)(param_1 + 0xd90) + 8);
    do {
      if (*plVar2 == param_3) {
        FUN_00ada188(param_1,uVar1,1);
        break;
      }
      uVar1 = uVar1 + 1;
      plVar2 = plVar2 + 2;
    } while (uVar1 < *(uint *)(param_1 + 0xd88));
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00ada188(long param_1,uint param_2,uint param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  *(uint *)(param_1 + 0xda0) = param_2;
  FUN_00b045b0(*(undefined8 *)(param_1 + 0xc90),
               *(undefined4 *)(*(long *)(param_1 + 0xd90) + (ulong)param_2 * 0x10 + 4),param_3 & 1);
  if (*(int *)(param_1 + 0xd88) != 0) {
    uVar4 = 0;
    lVar5 = 8;
    do {
      FUN_00f0e628(*(undefined8 *)(*(long *)(param_1 + 0xd90) + lVar5));
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0xd90) + lVar5);
      if (param_2 == uVar4) {
        FUN_00f0e548(uVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"popup_tab_active");
        lVar3 = *(long *)(*(long *)(param_1 + 0xd90) + (ulong)param_2 * 0x10 + 8);
        puVar2 = &DAT_01bafffc;
      }
      else {
        FUN_00f0e548(uVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"popup_tab_inactive");
        lVar3 = *(long *)(*(long *)(param_1 + 0xd90) + lVar5);
        puVar2 = &DAT_01bb0000;
      }
      FUN_00f0d7fc(lVar3 + 0xf0,puVar2);
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x10;
    } while (uVar4 < *(uint *)(param_1 + 0xd88));
  }
  return;
}




void FUN_00ada28c(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *(float *)(param_1 + 0xd98) = (float)param_2;
  *(float *)(param_1 + 0xd9c) = (float)param_3;
  uVar1 = FUN_00f14058();
  lVar2 = FUN_00f16444(uVar1,0);
  if (lVar2 != 0) {
    lVar2 = FUN_00f16444(uVar1,0);
    *(ushort *)(lVar2 + 0xc) =
         (ushort)(((int)*(float *)(param_1 + 0xd98) & 0xfU) << 5) |
         *(ushort *)(lVar2 + 0xc) & 0xfe1f;
  }
  lVar2 = FUN_00f16444(uVar1,1);
  if (lVar2 != 0) {
    lVar2 = FUN_00f16444(uVar1,1);
    *(ushort *)(lVar2 + 0xc) =
         (ushort)(((int)*(float *)(param_1 + 0xd9c) & 0xfU) << 5) |
         *(ushort *)(lVar2 + 0xc) & 0xfe1f;
  }
  FUN_00ad9c40(param_1);
  return;
}




void FUN_00ada330(long param_1,int param_2)

{
  long lVar1;
  undefined1 local_30 [8];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(int *)(param_1 + 0xda4) = param_2;
  if (param_2 == 1) {
    local_30[0] = 5;
    FUN_00ed5ab0(param_1 + 0x260,local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ada390(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00ada398(param_1,param_3);
  return;
}




void FUN_00ada398(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(uint *)(param_1 + 0xda0) == param_2) {
    if (param_2 == 0) {
      if (*(uint *)(param_1 + 0xd88) < 2) goto LAB_00ada3e8;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    FUN_00ada188(param_1,uVar1,1);
  }
LAB_00ada3e8:
  FUN_00f13f08(0,0,*(undefined8 *)(*(long *)(param_1 + 0xd90) + (ulong)param_2 * 0x10 + 8));
  FUN_00f019d4(*(undefined8 *)(*(long *)(param_1 + 0xd90) + (ulong)param_2 * 0x10 + 8),1);
  return;
}




void FUN_00ada41c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x1e;
  *param_1 = (long)&PTR_FUN_027d8170;
  param_1[0x17] = (long)&PTR_FUN_027d82d0;
  FUN_00f0d160(plVar1);
  FUN_00b1a1c4(param_1 + 0x44);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x44,1);
  FUN_00f14070(param_1,&DAT_03211038);
  plVar2 = (long *)FUN_00f13624();
  FUN_00f13fd8(param_1,plVar2);
  (**(code **)(*plVar2 + 0x70))(plVar2,0x28);
  (**(code **)(*plVar2 + 0x68))(plVar2,plVar1,1,10);
  FUN_00f0d378(plVar1,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  return;
}




void FUN_00ada510(long param_1)

{
  FUN_00f07940(0x41500000,0x40400000,param_1 + 0x220,8,param_1 + 0xf0,1);
  return;
}




void FUN_00ada530(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8170;
  param_1[0x17] = &PTR_FUN_027d82d0;
  param_1[0x44] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x110);
  FUN_00f0d3a4(param_1 + 0xe9);
  FUN_00f0d3a4(param_1 + 0xc3);
  FUN_00f0d3a4(param_1 + 0x9d);
  param_1[0x7f] = &PTR_FUN_028266f0;
  param_1[0x96] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x99);
  FUN_00f13d08(param_1 + 0x7f);
  param_1[0x55] = &PTR_FUN_02826f38;
  param_1[0x6c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x6f);
  FUN_00f13d08(param_1 + 0x55);
  FUN_00f01868(param_1 + 0x44);
  FUN_00f0d3a4(param_1 + 0x1e);
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ada624(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d8170;
  param_1[0x17] = &PTR_FUN_027d82d0;
  param_1[0x44] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0x110);
  FUN_00f0d3a4(param_1 + 0xe9);
  FUN_00f0d3a4(param_1 + 0xc3);
  FUN_00f0d3a4(param_1 + 0x9d);
  param_1[0x7f] = &PTR_FUN_028266f0;
  param_1[0x96] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x99);
  FUN_00f13d08(param_1 + 0x7f);
  param_1[0x55] = &PTR_FUN_02826f38;
  param_1[0x6c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x6f);
  FUN_00f13d08(param_1 + 0x55);
  FUN_00f01868(param_1 + 0x44);
  FUN_00f0d3a4(param_1 + 0x1e);
  *param_1 = &PTR_FUN_028266f0;
  param_1[0x17] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ada720(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_027d8170;
  *param_1 = &PTR_FUN_027d82d0;
  param_1[0x2d] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0xf9);
  FUN_00f0d3a4(param_1 + 0xd2);
  FUN_00f0d3a4(param_1 + 0xac);
  FUN_00f0d3a4(param_1 + 0x86);
  param_1[0x68] = &PTR_FUN_028266f0;
  param_1[0x7f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x82);
  FUN_00f13d08(param_1 + 0x68);
  param_1[0x3e] = &PTR_FUN_02826f38;
  param_1[0x55] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x58);
  FUN_00f13d08(param_1 + 0x3e);
  FUN_00f01868(param_1 + 0x2d);
  FUN_00f0d3a4(param_1 + 7);
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  return;
}




void FUN_00ada818(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + -0x17;
  *puVar1 = &PTR_FUN_027d8170;
  *param_1 = &PTR_FUN_027d82d0;
  param_1[0x2d] = &PTR_FUN_027d15d8;
  FUN_0099ccc4(param_1 + 0xf9);
  FUN_00f0d3a4(param_1 + 0xd2);
  FUN_00f0d3a4(param_1 + 0xac);
  FUN_00f0d3a4(param_1 + 0x86);
  param_1[0x68] = &PTR_FUN_028266f0;
  param_1[0x7f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x82);
  FUN_00f13d08(param_1 + 0x68);
  param_1[0x3e] = &PTR_FUN_02826f38;
  param_1[0x55] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x58);
  FUN_00f13d08(param_1 + 0x3e);
  FUN_00f01868(param_1 + 0x2d);
  FUN_00f0d3a4(param_1 + 7);
  *puVar1 = &PTR_FUN_028266f0;
  *param_1 = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 3);
  FUN_00f13d08(puVar1);
  operator_delete(puVar1);
  return;
}




void FUN_00ada918(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




void FUN_00ada99c(int *param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  long lVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  
  lVar3 = tpidr_el0;
  lVar8 = *(long *)(lVar3 + 0x28);
LAB_00adaa60:
  piVar15 = param_2 + -4;
  piVar12 = param_1;
LAB_00adaa80:
  param_1 = piVar12;
  lVar13 = (long)param_2 - (long)param_1;
  uVar9 = lVar13 >> 4;
  switch(uVar9) {
  case 0:
  case 1:
    goto switchD_00adacb4_caseD_0;
  case 2:
    piVar15 = param_2 + -4;
    if (*param_1 < *piVar15) {
      uVar20 = *(undefined8 *)(param_1 + 2);
      uVar18 = *(undefined8 *)param_1;
      uVar19 = *(undefined8 *)piVar15;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + -2);
      *(undefined8 *)param_1 = uVar19;
      *(undefined8 *)(param_2 + -2) = uVar20;
      *(undefined8 *)piVar15 = uVar18;
    }
    goto switchD_00adacb4_caseD_0;
  case 3:
    FUN_00adad7c(param_1,param_1 + 4,piVar15,param_3);
    goto switchD_00adacb4_caseD_0;
  case 4:
    FUN_00adae8c(param_1,param_1 + 4,param_1 + 8,piVar15,param_3);
    goto switchD_00adacb4_caseD_0;
  case 5:
    FUN_00adaf80(param_1,param_1 + 4,param_1 + 8,param_1 + 0xc,piVar15,param_3);
    goto switchD_00adacb4_caseD_0;
  default:
    if (lVar13 < 0x1f0) {
      FUN_00adb0a8(param_1,param_2,param_3);
      goto switchD_00adacb4_caseD_0;
    }
    uVar6 = uVar9;
    if ((long)uVar9 < 0) {
      uVar6 = uVar9 + 1;
    }
    piVar12 = param_1 + (uVar6 & 0x1ffffffffffffffe) * 2;
    if (lVar13 < 0x3e71) {
      iVar5 = FUN_00adad7c(param_1,piVar12,piVar15,param_3);
    }
    else {
      uVar6 = uVar9 + 3;
      if (-1 < (long)uVar9) {
        uVar6 = uVar9;
      }
      iVar5 = FUN_00adaf80(param_1,param_1 + (uVar6 & 0x3ffffffffffffffc),piVar12,
                           piVar12 + (uVar6 & 0x3ffffffffffffffc),piVar15,param_3);
    }
    iVar2 = *param_1;
    piVar10 = piVar15;
    piVar17 = param_2 + -8;
    if (iVar2 <= *piVar12) {
      do {
        piVar10 = piVar17;
        if (param_1 == piVar10) {
          piVar12 = param_1 + 4;
          if (*piVar15 < iVar2) goto LAB_00adac98;
          if (piVar12 == piVar15) goto switchD_00adacb4_caseD_0;
          piVar12 = param_1 + 8;
          goto LAB_00adac64;
        }
        piVar17 = piVar10 + -4;
      } while (*piVar10 <= *piVar12);
      uVar20 = *(undefined8 *)(param_1 + 2);
      uVar18 = *(undefined8 *)param_1;
      iVar5 = iVar5 + 1;
      uVar19 = *(undefined8 *)piVar10;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(piVar10 + 2);
      *(undefined8 *)param_1 = uVar19;
      *(undefined8 *)(piVar10 + 2) = uVar20;
      *(undefined8 *)piVar10 = uVar18;
    }
    piVar17 = param_1 + 4;
    piVar16 = piVar17;
    if (piVar17 < piVar10) {
      while( true ) {
        piVar17 = piVar16 + -4;
        do {
          piVar14 = piVar17;
          piVar17 = piVar14 + 4;
        } while (*piVar12 < *piVar17);
        piVar16 = piVar14 + 8;
        do {
          piVar11 = piVar10;
          piVar10 = piVar11 + -4;
        } while (*piVar10 <= *piVar12);
        if (piVar10 < piVar17) break;
        uVar19 = *(undefined8 *)(piVar14 + 6);
        uVar18 = *(undefined8 *)piVar17;
        iVar5 = iVar5 + 1;
        piVar1 = piVar10;
        if (piVar12 != piVar17) {
          piVar1 = piVar12;
        }
        uVar20 = *(undefined8 *)piVar10;
        *(undefined8 *)(piVar14 + 6) = *(undefined8 *)(piVar11 + -2);
        *(undefined8 *)piVar17 = uVar20;
        *(undefined8 *)(piVar11 + -2) = uVar19;
        *(undefined8 *)piVar10 = uVar18;
        piVar12 = piVar1;
      }
    }
    if ((piVar17 != piVar12) && (*piVar17 < *piVar12)) {
      uVar20 = *(undefined8 *)(piVar17 + 2);
      uVar18 = *(undefined8 *)piVar17;
      iVar5 = iVar5 + 1;
      uVar19 = *(undefined8 *)piVar12;
      *(undefined8 *)(piVar17 + 2) = *(undefined8 *)(piVar12 + 2);
      *(undefined8 *)piVar17 = uVar19;
      *(undefined8 *)(piVar12 + 2) = uVar20;
      *(undefined8 *)piVar12 = uVar18;
    }
    if (iVar5 != 0) goto LAB_00adac1c;
    uVar9 = FUN_00adb19c(param_1,piVar17,param_3);
    uVar6 = FUN_00adb19c(piVar17 + 4,param_2,param_3);
    if ((uVar6 & 1) == 0) goto code_r0x00adac18;
    bVar4 = (uVar9 & 1) == 0;
    if (bVar4) {
      param_2 = piVar17;
    }
    uVar7 = 1;
    if (bVar4) {
      uVar7 = 2;
    }
  }
  goto LAB_00adaa24;
LAB_00adac64:
  if (piVar12[-4] < iVar2) goto LAB_00adac80;
  piVar12 = piVar12 + 4;
  if (param_2 == piVar12) goto switchD_00adacb4_caseD_0;
  goto LAB_00adac64;
LAB_00adac80:
  uVar20 = *(undefined8 *)(piVar12 + -2);
  uVar18 = *(undefined8 *)(piVar12 + -4);
  uVar19 = *(undefined8 *)piVar15;
  *(undefined8 *)(piVar12 + -2) = *(undefined8 *)(param_2 + -2);
  *(undefined8 *)(piVar12 + -4) = uVar19;
  *(undefined8 *)(param_2 + -2) = uVar20;
  *(undefined8 *)piVar15 = uVar18;
LAB_00adac98:
  if (piVar12 == piVar15) {
switchD_00adacb4_caseD_0:
    if (*(long *)(lVar3 + 0x28) != lVar8) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  while( true ) {
    piVar10 = piVar12 + -4;
    do {
      piVar17 = piVar10;
      piVar10 = piVar17 + 4;
    } while (*param_1 <= *piVar10);
    piVar12 = piVar17 + 8;
    do {
      piVar16 = piVar15;
      piVar15 = piVar16 + -4;
    } while (*piVar15 < *param_1);
    if (piVar15 <= piVar10) break;
    uVar20 = *(undefined8 *)(piVar17 + 6);
    uVar18 = *(undefined8 *)piVar10;
    uVar19 = *(undefined8 *)piVar15;
    *(undefined8 *)(piVar17 + 6) = *(undefined8 *)(piVar16 + -2);
    *(undefined8 *)piVar10 = uVar19;
    *(undefined8 *)(piVar16 + -2) = uVar20;
    *(undefined8 *)piVar15 = uVar18;
  }
  uVar7 = 4;
  param_1 = piVar10;
LAB_00adaa24:
  if ((4 < uVar7) || ((1 << (ulong)uVar7 & 0x15U) == 0)) goto switchD_00adacb4_caseD_0;
  goto LAB_00adaa60;
code_r0x00adac18:
  piVar12 = piVar17 + 4;
  if ((uVar9 & 1) == 0) {
LAB_00adac1c:
    if ((long)param_2 - (long)piVar17 <= (long)piVar17 - (long)param_1) {
      FUN_00ada99c(piVar17 + 4,param_2,param_3);
      param_2 = piVar17;
      goto LAB_00adaa60;
    }
    FUN_00ada99c(param_1,piVar17,param_3);
    piVar12 = piVar17 + 4;
  }
  goto LAB_00adaa80;
}




undefined8 FUN_00adad7c(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = tpidr_el0;
  lVar3 = *(long *)(lVar2 + 0x28);
  iVar1 = *param_2;
  if (*param_1 < iVar1) {
    if (iVar1 < *param_3) {
      uVar6 = *(undefined8 *)(param_1 + 2);
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)param_3;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_1 = uVar5;
      *(undefined8 *)(param_3 + 2) = uVar6;
      *(undefined8 *)param_3 = uVar4;
    }
    else {
      uVar6 = *(undefined8 *)(param_1 + 2);
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar5;
      *(undefined8 *)(param_2 + 2) = uVar6;
      *(undefined8 *)param_2 = uVar4;
      if (*param_2 < *param_3) {
        uVar6 = *(undefined8 *)(param_2 + 2);
        uVar4 = *(undefined8 *)param_2;
        uVar5 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar5;
        *(undefined8 *)(param_3 + 2) = uVar6;
        *(undefined8 *)param_3 = uVar4;
LAB_00adae5c:
        uVar4 = 2;
        goto LAB_00adae68;
      }
    }
  }
  else {
    uVar4 = 0;
    if (*param_3 <= iVar1) goto LAB_00adae68;
    uVar6 = *(undefined8 *)(param_2 + 2);
    uVar4 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)param_3;
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
    *(undefined8 *)param_2 = uVar5;
    *(undefined8 *)(param_3 + 2) = uVar6;
    *(undefined8 *)param_3 = uVar4;
    if (*param_1 < *param_2) {
      uVar6 = *(undefined8 *)(param_1 + 2);
      uVar4 = *(undefined8 *)param_1;
      uVar5 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar5;
      *(undefined8 *)(param_2 + 2) = uVar6;
      *(undefined8 *)param_2 = uVar4;
      goto LAB_00adae5c;
    }
  }
  uVar4 = 1;
LAB_00adae68:
  if (*(long *)(lVar2 + 0x28) == lVar3) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00adae8c(int *param_1,int *param_2,int *param_3,int *param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00adad7c();
  if (*param_3 < *param_4) {
    uVar7 = *(undefined8 *)(param_3 + 2);
    uVar5 = *(undefined8 *)param_3;
    uVar6 = *(undefined8 *)param_4;
    *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
    *(undefined8 *)param_3 = uVar6;
    *(undefined8 *)(param_4 + 2) = uVar7;
    *(undefined8 *)param_4 = uVar5;
    iVar2 = (int)uVar3;
    if (*param_2 < *param_3) {
      uVar7 = *(undefined8 *)(param_2 + 2);
      uVar5 = *(undefined8 *)param_2;
      uVar6 = *(undefined8 *)param_3;
      *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
      *(undefined8 *)param_2 = uVar6;
      *(undefined8 *)(param_3 + 2) = uVar7;
      *(undefined8 *)param_3 = uVar5;
      if (*param_1 < *param_2) {
        uVar7 = *(undefined8 *)(param_1 + 2);
        uVar5 = *(undefined8 *)param_1;
        uVar3 = (ulong)(iVar2 + 3);
        uVar6 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar6;
        *(undefined8 *)(param_2 + 2) = uVar7;
        *(undefined8 *)param_2 = uVar5;
      }
      else {
        uVar3 = (ulong)(iVar2 + 2);
      }
    }
    else {
      uVar3 = (ulong)(iVar2 + 1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




void FUN_00adaf80(int *param_1,int *param_2,int *param_3,int *param_4,int *param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00adae8c();
  if (*param_4 < *param_5) {
    uVar7 = *(undefined8 *)(param_4 + 2);
    uVar5 = *(undefined8 *)param_4;
    uVar6 = *(undefined8 *)param_5;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(param_5 + 2);
    *(undefined8 *)param_4 = uVar6;
    *(undefined8 *)(param_5 + 2) = uVar7;
    *(undefined8 *)param_5 = uVar5;
    iVar2 = (int)uVar3;
    if (*param_3 < *param_4) {
      uVar7 = *(undefined8 *)(param_3 + 2);
      uVar5 = *(undefined8 *)param_3;
      uVar6 = *(undefined8 *)param_4;
      *(undefined8 *)(param_3 + 2) = *(undefined8 *)(param_4 + 2);
      *(undefined8 *)param_3 = uVar6;
      *(undefined8 *)(param_4 + 2) = uVar7;
      *(undefined8 *)param_4 = uVar5;
      if (*param_2 < *param_3) {
        uVar7 = *(undefined8 *)(param_2 + 2);
        uVar5 = *(undefined8 *)param_2;
        uVar6 = *(undefined8 *)param_3;
        *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
        *(undefined8 *)param_2 = uVar6;
        *(undefined8 *)(param_3 + 2) = uVar7;
        *(undefined8 *)param_3 = uVar5;
        if (*param_1 < *param_2) {
          uVar7 = *(undefined8 *)(param_1 + 2);
          uVar5 = *(undefined8 *)param_1;
          uVar3 = (ulong)(iVar2 + 4);
          uVar6 = *(undefined8 *)param_2;
          *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
          *(undefined8 *)param_1 = uVar6;
          *(undefined8 *)(param_2 + 2) = uVar7;
          *(undefined8 *)param_2 = uVar5;
        }
        else {
          uVar3 = (ulong)(iVar2 + 3);
        }
      }
      else {
        uVar3 = (ulong)(iVar2 + 2);
      }
    }
    else {
      uVar3 = (ulong)(iVar2 + 1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

