// functions/00c97 — 9 functions
#include "libGameKindred.h"




void FUN_00c9757c(undefined4 param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined4 local_84;
  undefined1 auStack_80 [8];
  code *local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00c980ec(param_3 + 0x1b8,1);
  local_50 = DAT_03210c64;
  local_78 = FUN_00c98154;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_3;
  local_58 = lVar2;
  FUN_009693a0(lVar2 + 8,&local_78);
  FUN_00aadcd8(lVar2,param_4);
  local_78 = (code *)&local_84;
  *(undefined1 *)(lVar2 + 0x1732) = *(undefined1 *)(param_3 + 0x2761);
  local_84 = param_4;
  lVar3 = FUN_00c983dc(param_3 + 0x2a8,&local_84,&DAT_01bbf966,&local_78,auStack_80);
  *(long *)(lVar3 + 0x28) = lVar2;
  *(undefined4 *)(lVar3 + 0x30) = param_1;
  *(undefined4 *)(lVar3 + 0x34) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c97674(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02806d00;
  FUN_00f0d3a4(param_1 + 0x4c6);
  FUN_00aad654(param_1 + 0x34c);
  FUN_00aad654(param_1 + 0x1d2);
  FUN_00aad654(param_1 + 0x58);
  FUN_00c98390(param_1 + 0x55,param_1[0x56]);
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_028266f0;
  param_1[0x30] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c97728(void *param_1)

{
  FUN_00c97674();
  operator_delete(param_1);
  return;
}




void FUN_00c9774c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13db0();
  FUN_00f13f08(param_1,param_2,param_3 + 200);
  FUN_00f0dac8(param_3 + 0x2630,3);
  FUN_00f0dad0((float)param_1 * 0.65,param_3 + 0x2630,1);
  FUN_00c977bc(param_3);
  return;
}




void FUN_00c977bc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 200;
  FUN_00f07940(0,0,lVar1,8,param_1,8);
  fVar12 = -65.0;
  FUN_00f07940(0,param_1 + 0x2630,8,param_1,6);
  if (*(int *)(param_1 + 0xc0) == 2) {
    FUN_00f13e54(param_1 + 0x1a60);
    FUN_00f07940(fVar12 * -1.3 + fVar12 * -1.3,0,param_1 + 0x1a60,8,param_1,8);
    fVar12 = 0.0;
    FUN_00f07940(0,0,param_1 + 0x2c0,8,param_1,8);
    FUN_00f13e54(param_1 + 0xe90);
    uVar4 = 8;
    fVar10 = fVar12 * 1.3 + fVar12 * 1.3;
    fVar12 = 0.0;
  }
  else {
    lVar2 = param_1 + 0x1b8;
    if (*(int *)(param_1 + 0xc0) == 0) {
      local_80 = (float)FUN_00f0e700(lVar1);
      local_80 = local_80 * 1.1;
      fStack_7c = fVar12 * 1.1;
      FUN_00f13f18(lVar2,&local_80);
      uVar11 = 0x42f00000;
      fVar12 = -100.0;
      uVar4 = 1;
      uVar5 = 1;
    }
    else {
      local_80 = (float)FUN_00f0e700(lVar1);
      fStack_7c = fVar12;
      FUN_00f13f18(lVar2,&local_80);
      uVar11 = 0x42700000;
      uVar4 = 8;
      uVar5 = 8;
      fVar12 = 0.0;
    }
    FUN_00f07940(uVar11,fVar12,lVar2,uVar4,param_1,uVar5);
    if (*(long **)(param_1 + 0x2a8) != (long *)(param_1 + 0x2b0)) {
      plVar9 = *(long **)(param_1 + 0x2a8);
      do {
        plVar8 = (long *)plVar9[5];
        lVar7 = plVar9[6];
        uVar11 = *(undefined4 *)((long)plVar9 + 0x34);
        fVar12 = (float)FUN_00f0e700(lVar1);
        fVar10 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
        fVar10 = (fVar12 * 0.1) / fVar10;
        if ((*(float *)(plVar8 + 9) != fVar10) || (*(float *)((long)plVar8 + 0x4c) != fVar10)) {
          *(float *)(plVar8 + 9) = fVar10;
          *(float *)((long)plVar8 + 0x4c) = fVar10;
          FUN_0091ada4(plVar8);
        }
        fVar12 = 0.5;
        FUN_00f07b78(0x3f000000,0x3f000000,(int)lVar7,uVar11,0,0,plVar8,lVar2);
        plVar8 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar8 = plVar9 + 2;
          plVar6 = (long *)*plVar8;
          if ((long *)*plVar6 != plVar9) {
            do {
              lVar7 = *plVar8;
              plVar8 = (long *)(lVar7 + 0x10);
              plVar6 = (long *)*plVar8;
            } while (*plVar6 != lVar7);
          }
        }
        else {
          do {
            plVar6 = plVar8;
            plVar8 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
        plVar9 = plVar6;
      } while (plVar6 != (long *)(param_1 + 0x2b0));
    }
    FUN_00f13e54(param_1 + 0x1a60);
    fVar10 = 100.0;
    FUN_00f07940(0x42c80000,fVar12 * -1.3,param_1 + 0x1a60,8,param_1,7);
    fVar12 = 0.0;
    FUN_00f07940(0x42c80000,0,param_1 + 0x2c0,8,param_1,7);
    FUN_00f13e54(param_1 + 0xe90);
    uVar4 = 7;
    fVar12 = fVar12 * 1.3;
  }
  FUN_00f07940(fVar10,fVar12,param_1 + 0xe90,8,param_1,uVar4);
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c97af0(long param_1,int param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  int local_5c;
  undefined1 auStack_58 [8];
  int *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)(param_1 + 0xb8) != param_2) {
    plVar6 = *(long **)(param_1 + 0x2a8);
    while (plVar6 != (long *)(param_1 + 0x2b0)) {
      FUN_00aad3b0(plVar6[5],0);
      plVar5 = (long *)plVar6[1];
      if ((long *)plVar6[1] == (long *)0x0) {
        plVar5 = plVar6 + 2;
        bVar2 = *(long **)*plVar5 != plVar6;
        plVar6 = (long *)*plVar5;
        if (bVar2) {
          do {
            lVar4 = *plVar5;
            plVar5 = (long *)(lVar4 + 0x10);
            plVar6 = (long *)*plVar5;
          } while (*plVar6 != lVar4);
        }
      }
      else {
        do {
          plVar6 = plVar5;
          plVar5 = (long *)*plVar6;
        } while ((long *)*plVar6 != (long *)0x0);
      }
    }
    if (*(int *)(param_1 + 0xc0) != 2) {
      if (param_2 == 0xff) {
        uVar3 = FUN_00e6ce7c("MENU_DRAFT_POSITION_INSTRUCTION",0);
        FUN_00f0d75c(param_1 + 0x2630,uVar3);
      }
      else {
        uVar3 = FUN_00e6ce7c("MENU_DRAFT_POSITION_INSTRUCTION_LOCKIN",0);
        FUN_00f0d75c(param_1 + 0x2630,uVar3);
        local_50 = &local_5c;
        local_5c = param_2;
        lVar4 = FUN_00c983dc(param_1 + 0x2a8,&local_5c,&DAT_01bbf966,&local_50,auStack_58);
        FUN_00aad3b0(*(undefined8 *)(lVar4 + 0x28),1);
      }
    }
    FUN_00f0dc4c(0x43200000,0,0x3f800000,param_1 + 0x2630);
    *(int *)(param_1 + 0xb8) = param_2;
    FUN_00c97c90(param_1,param_2,*(undefined4 *)(param_1 + 0xbc));
    FUN_00c977bc(param_1);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c97c90(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  int local_4c;
  undefined1 auStack_48 [8];
  int *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceac94(param_2);
  if ((uVar2 & 1) != 0) {
    for (plVar4 = *(long **)(param_1 + 0x2b0); plVar4 != (long *)0x0; plVar4 = (long *)*plVar4) {
      if (*(int *)(plVar4 + 4) <= param_2) {
        if (param_2 <= *(int *)(plVar4 + 4)) {
          local_40 = &local_4c;
          local_4c = param_2;
          lVar3 = FUN_00c983dc(param_1 + 0x2a8,&local_4c,&DAT_01bbf966,&local_40,auStack_48);
          FUN_00aadd94(*(undefined8 *)(lVar3 + 0x28),param_3);
          break;
        }
        plVar4 = plVar4 + 1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c97d4c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  
  fVar4 = 2.0;
  if (*(int *)(param_1 + 0xc0) != 2) {
    fVar4 = 1.0;
  }
  lVar3 = param_1 + 0x2c0;
  if ((*(float *)(param_1 + 0x308) != fVar4) || (*(float *)(param_1 + 0x30c) != fVar4)) {
    *(float *)(param_1 + 0x308) = fVar4;
    *(float *)(param_1 + 0x30c) = fVar4;
    FUN_0091ada4(lVar3);
  }
  FUN_00c9279c(lVar3,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"main_nav_background");
  lVar2 = param_1 + 0x1a60;
  if ((*(float *)(param_1 + 0x1aa8) != fVar4) || (*(float *)(param_1 + 0x1aac) != fVar4)) {
    *(float *)(param_1 + 0x1aa8) = fVar4;
    *(float *)(param_1 + 0x1aac) = fVar4;
    FUN_0091ada4(lVar2);
  }
  FUN_00c9279c(lVar2,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"main_nav_background");
  lVar1 = param_1 + 0xe90;
  if ((*(float *)(param_1 + 0xed8) != fVar4) || (*(float *)(param_1 + 0xedc) != fVar4)) {
    *(float *)(param_1 + 0xed8) = fVar4;
    *(float *)(param_1 + 0xedc) = fVar4;
    FUN_0091ada4(lVar1);
  }
  FUN_00c9279c(lVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"main_nav_background");
  if (param_2 == 0) {
    fVar4 = fVar4 * 1.3;
    lVar3 = lVar2;
    if ((*(float *)(param_1 + 0x1aa8) != fVar4) || (*(float *)(param_1 + 0x1aac) != fVar4)) {
      *(float *)(param_1 + 0x1aa8) = fVar4;
      *(float *)(param_1 + 0x1aac) = fVar4;
      FUN_0091ada4(lVar2);
    }
  }
  else if (param_2 == 2) {
    fVar4 = fVar4 * 1.3;
    lVar3 = lVar1;
    if ((*(float *)(param_1 + 0xed8) != fVar4) || (*(float *)(param_1 + 0xedc) != fVar4)) {
      *(float *)(param_1 + 0xed8) = fVar4;
      *(float *)(param_1 + 0xedc) = fVar4;
      FUN_0091ada4(lVar1);
    }
  }
  else {
    if (param_2 != 1) goto LAB_00c97f48;
    fVar4 = fVar4 * 1.3;
    if ((*(float *)(param_1 + 0x308) != fVar4) || (*(float *)(param_1 + 0x30c) != fVar4)) {
      *(float *)(param_1 + 0x308) = fVar4;
      *(float *)(param_1 + 0x30c) = fVar4;
      FUN_0091ada4(lVar3);
    }
  }
  FUN_00c9279c(lVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"button_lively_generic_fill_bg");
LAB_00c97f48:
  *(int *)(param_1 + 0xbc) = param_2;
  FUN_00c97c90(param_1,*(undefined4 *)(param_1 + 0xb8),param_2);
  FUN_00c977bc(param_1);
  return;
}




void FUN_00c97f78(long param_1,int param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int local_4c;
  undefined1 auStack_48 [8];
  int *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 0x2b0);
  do {
    if (plVar3 == (long *)0x0) {
LAB_00c97ffc:
      FUN_00c977bc(param_1);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(plVar3 + 4) <= param_2) {
      if (param_2 <= *(int *)(plVar3 + 4)) {
        local_40 = &local_4c;
        local_4c = param_2;
        lVar2 = FUN_00c983dc(param_1 + 0x2a8,&local_4c,&DAT_01bbf966,&local_40,auStack_48);
        FUN_00aad9ec(*(undefined8 *)(lVar2 + 0x28),param_3);
        goto LAB_00c97ffc;
      }
      plVar3 = plVar3 + 1;
    }
    plVar3 = (long *)*plVar3;
  } while( true );
}

