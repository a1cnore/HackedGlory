// functions/00c92 — 22 functions
#include "libGameKindred.h"




void FUN_00c9228c(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_3 + 0x117) = param_4;
  switch(param_4) {
  case 0:
    *(uint *)((long)param_3 + 0x6b4) = *(uint *)((long)param_3 + 0x6b4) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x7a4) = *(uint *)((long)param_3 + 0x7a4) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x564) = *(uint *)((long)param_3 + 0x564) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x414) = *(uint *)((long)param_3 + 0x414) & 0xfffffffb;
    if ((long *)param_3[0x102] != (long *)0x0) {
      local_40 = (**(code **)(*(long *)param_3[0x102] + 0x48))();
      uStack_3c = param_2;
      FUN_00f13f18(param_3,&local_40);
    }
    goto switchD_00c922d0_default;
  case 1:
    FUN_00f10428(param_3 + 0x72,"white_background",0,0,0,"white_background",0,0,0,"white_background"
                 ,0,0,0,0);
    FUN_00f10644(0x40a00000,0,0x40a00000,0x40a00000,0,0x40a00000,param_3 + 0x72);
    goto LAB_00c92470;
  case 2:
    FUN_00f0ff74(param_3 + 0x72,"button_lively_generic_top_left",0,0,0,
                 "button_lively_generic_top_middle",0,0,0,"button_lively_generic_top_left",1,0,0,
                 "button_lively_generic_middle_left",0,0,0,0,0,0,0,
                 "button_lively_generic_middle_left",1,0,0,"button_lively_generic_bottom_left",0,0,0
                 ,"button_lively_generic_bottom_middle",0,0,0,"button_lively_generic_bottom_left",1,
                 0,0);
LAB_00c92470:
    *(uint *)((long)param_3 + 0x564) = *(uint *)((long)param_3 + 0x564) & 0xfffffffb;
    *(uint *)((long)param_3 + 0x414) = *(uint *)((long)param_3 + 0x414) | 4;
    goto switchD_00c922d0_default;
  case 3:
    pcVar3 = "button_decorative_fill_purchase";
    break;
  case 4:
    pcVar3 = "button_decorative_fill_upgrade";
    break;
  case 5:
    pcVar3 = "button_lively_generic_tint_bg";
    break;
  default:
    goto switchD_00c922d0_default;
  }
  FUN_00f0e578(param_3 + 0xc6,pcVar3);
  FUN_00f0ff74(param_3 + 0x72,"button_lively_top_left",0,0,0,"button_lively_top_middle",0,0,0,
               "button_lively_top_left",1,0,0,"button_lively_middle_left",0,0,0,0,0,0,0,
               "button_lively_middle_left",1,0,0,"button_lively_bottom_left",0,0,0,
               "button_lively_bottom_middle",0,0,0,"button_lively_bottom_left",1,0,0);
  *(uint *)((long)param_3 + 0x564) = *(uint *)((long)param_3 + 0x564) | 4;
switchD_00c922d0_default:
  uVar2 = FUN_00f0ea88(param_3 + 0xc6);
  FUN_00f13f68(param_3,uVar2);
  FUN_00f1051c(param_3 + 0x48,param_3 + 0x72);
  (**(code **)(*param_3 + 0x168))(param_3);
  (**(code **)(*param_3 + 0x160))(param_3);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c925cc(undefined8 *param_1)

{
  long *plVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  plVar1 = param_1 + 0x115;
  *param_1 = &PTR_FUN_02806118;
  plVar5 = (long *)param_1[0x114];
  while (plVar5 != plVar1) {
    if ((long *)plVar5[7] != (long *)0x0) {
      (**(code **)(*(long *)plVar5[7] + 8))();
    }
    plVar3 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar3 = plVar5 + 2;
      bVar2 = *(long **)*plVar3 != plVar5;
      plVar5 = (long *)*plVar3;
      if (bVar2) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar5 = (long *)*plVar3;
        } while (*plVar5 != lVar4);
      }
    }
    else {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  FUN_00c941b0(param_1 + 0x114,param_1[0x115]);
  param_1[0x114] = plVar1;
  param_1[0x116] = 0;
  *plVar1 = 0;
  if ((*(byte *)(param_1 + 0x11d) & 1) != 0) {
    operator_delete((void *)param_1[0x11f]);
  }
  if ((*(byte *)(param_1 + 0x11a) & 1) != 0) {
    operator_delete((void *)param_1[0x11c]);
  }
  FUN_00c941b0(param_1 + 0x114,param_1[0x115]);
  FUN_00f01868(param_1 + 0x103);
  param_1[0xe4] = &PTR_FUN_028266f0;
  param_1[0xfb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfe);
  FUN_00f13d08(param_1 + 0xe4);
  param_1[0xc6] = &PTR_FUN_028266f0;
  param_1[0xdd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xe0);
  FUN_00f13d08(param_1 + 0xc6);
  param_1[0x9c] = &PTR_FUN_02826f38;
  param_1[0xb3] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xb6);
  FUN_00f13d08(param_1 + 0x9c);
  param_1[0x72] = &PTR_FUN_02826f38;
  param_1[0x89] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x8c);
  FUN_00f13d08(param_1 + 0x72);
  param_1[0x48] = &PTR_FUN_02826f38;
  param_1[0x5f] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x62);
  FUN_00f13d08(param_1 + 0x48);
  FUN_00ecf74c(param_1);
  return;
}




void FUN_00c92778(void *param_1)

{
  FUN_00c925cc();
  operator_delete(param_1);
  return;
}




void FUN_00c9279c(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00f0e628(param_1 + 0x630);
  FUN_00f0e548(param_1 + 0x630,param_2,param_3);
  return;
}




void FUN_00c927dc(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x8bc) = *param_2;
  FUN_00f0e670(param_1 + 0x630,param_1 + 0x8bc,2);
  return;
}




void FUN_00c927f8(float param_1,long param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_2 + 0x6b4);
  if ((uVar1 >> 7 & 0xff) == (int)(param_1 * 255.0)) {
    return;
  }
  *(uint *)(param_2 + 0x6b4) =
       uVar1 & 0xffff8000 | uVar1 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
  FUN_0091ada4(param_2 + 0x630);
  return;
}




void FUN_00c92830(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x810) = param_2;
  FUN_00f023ec(param_1 + 0x818,param_2,1);
  return;
}




void FUN_00c92844(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x6b4) =
       *(uint *)(param_1 + 0x6b4) & 0xfffffff8 | *(uint *)(param_1 + 0x6b4) & 3 | (param_2 & 1) << 2
  ;
  *(uint *)(param_1 + 0x7a4) = *(uint *)(param_1 + 0x7a4) & 0xfffffffb;
  return;
}




void FUN_00c92864(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x564) =
       *(uint *)(param_1 + 0x564) & 0xfffffff8 | *(uint *)(param_1 + 0x564) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c92878(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x414) =
       *(uint *)(param_1 + 0x414) & 0xfffffff8 | *(uint *)(param_1 + 0x414) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00c9288c(undefined4 param_1,long *param_2)

{
  *(undefined4 *)((long)param_2 + 0x8c4) = param_1;
  *(undefined4 *)(param_2 + 0x119) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00c9289c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x160))();
  return;
}




void FUN_00c928a0(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)((long)param_3 + 0x8c4) = param_1;
  *(undefined4 *)(param_3 + 0x119) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c928b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x160))();
  return;
}




void FUN_00c928b4(long *param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x118) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00c928c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))();
  return;
}




void FUN_00c928c4(long param_1)

{
  FUN_008fce60(param_1 + 0x8d0);
  return;
}




void FUN_00c928cc(long param_1)

{
  FUN_008fce60(param_1 + 0x8e8);
  return;
}




void FUN_00c928d4(long *param_1)

{
  long lVar1;
  long *plVar2;
  void *pvVar3;
  long lVar4;
  byte local_70 [16];
  void *local_60;
  undefined1 auStack_58 [8];
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_70,"tapandhold");
  plVar2 = (long *)FUN_00c9420c(param_1 + 0x114,local_70);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (param_1 + 0x115 == plVar2) {
    pvVar3 = operator_new(0x8e0);
    FUN_00c945a4(pvVar3,param_1);
    (**(code **)(*param_1 + 0x78))(param_1,pvVar3,1);
    FUN_008fa54c(local_70,"tapandhold");
    local_50 = local_70;
    lVar4 = FUN_00c94374(param_1 + 0x114,local_70,&DAT_01bbf631,&local_50,auStack_58);
    *(void **)(lVar4 + 0x38) = pvVar3;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c929dc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_80;
  float fStack_7c;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  plVar6 = param_3 + 0x72;
  fVar7 = DAT_03218ef8;
  fVar11 = _DAT_03218efc;
  if ((*(byte *)((long)param_3 + 0x414) >> 2 & 1) != 0) {
    fVar7 = (float)FUN_00f10374(plVar6,0);
    fVar7 = fVar7 * 0.5;
    fVar11 = param_2 * 0.5;
  }
  plVar4 = param_3 + 0xc6;
  local_80 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_80 = local_80 - fVar7;
  param_2 = param_2 - fVar11;
  fStack_7c = param_2;
  FUN_00f13f18(plVar4,&local_80);
  local_80 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_80 = local_80 - fVar7;
  param_2 = param_2 - fVar11;
  fStack_7c = param_2;
  FUN_00f13f18(param_3 + 0xe4,&local_80);
  local_80 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  fStack_7c = param_2;
  FUN_00f13f18(plVar6,&local_80);
  plVar1 = param_3 + 0x9c;
  fVar10 = _DAT_03218efc;
  fVar8 = DAT_03218ef8;
  if ((*(byte *)((long)param_3 + 0x564) >> 2 & 1) != 0) {
    fVar8 = (float)FUN_00f10374(plVar1,0);
    fVar10 = param_2 * 3.0;
    fVar8 = fVar8 * 3.0;
  }
  fVar9 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f10644(fVar8,(fVar9 + fVar8 * -0.4) - fVar7,fVar8,fVar10,(param_2 + fVar10 * -0.5) - fVar11,
               fVar10,plVar1);
  FUN_00f07940(0,0,param_3 + 0x103,8,param_3,8);
  FUN_00f07940(0,0,plVar4,8,param_3 + 0x103,8);
  FUN_00f07940(0,0,param_3 + 0xe4,8,plVar4,8);
  FUN_00f07940(0,0,plVar6,8,plVar4,8);
  FUN_00f07940(0,0,plVar1,8,plVar4,8);
  plVar6 = (long *)param_3[0x114];
  while (plVar6 != param_3 + 0x115) {
    (**(code **)(*(long *)plVar6[7] + 0x138))();
    plVar4 = (long *)plVar6[1];
    if ((long *)plVar6[1] == (long *)0x0) {
      plVar4 = plVar6 + 2;
      bVar3 = *(long **)*plVar4 != plVar6;
      plVar6 = (long *)*plVar4;
      if (bVar3) {
        do {
          lVar5 = *plVar4;
          plVar4 = (long *)(lVar5 + 0x10);
          plVar6 = (long *)*plVar4;
        } while (*plVar6 != lVar5);
      }
    }
    else {
      do {
        plVar6 = plVar4;
        plVar4 = (long *)*plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c92c6c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x900) == '\0') {
    local_2c = *(undefined4 *)(param_1 + 0x8c0);
  }
  else {
    fVar2 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x8c0));
    fVar3 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x8c1));
    fVar4 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x8c2));
    local_2c = CONCAT13(0xff,CONCAT12((char)(int)(fVar4 * 0.5),
                                      CONCAT11((char)(int)(fVar3 * 0.5),(char)(int)(fVar2 * 0.5))));
  }
  FUN_00f105ec(param_1 + 0x390,&local_2c,2);
  if (*(char *)(param_1 + 0x900) == '\0') {
    local_2c = 0xffffffff;
  }
  else {
    local_2c = 0xff808080;
  }
  FUN_00f105ec(param_1 + 0x4e0,&local_2c,2);
  if (*(char *)(param_1 + 0x900) == '\0') {
    local_2c = *(undefined4 *)(param_1 + 0x8bc);
  }
  else {
    local_2c = 0xff404040;
  }
  FUN_00f0e670(param_1 + 0x630,&local_2c,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c92d7c(long *param_1)

{
  FUN_00f13db0();
                    /* WARNING: Could not recover jumptable at 0x00c92da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_00c92da8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00eff63c(0x3f800000,0x3f800000,0x3e4ccccd,FUN_0091aa80);
  FUN_00f022a0(param_1 + 0x818,uVar1);
  return;
}




void FUN_00c92dec(long *param_1)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  if ((*(char *)((long)param_1 + 0x901) != '\0') &&
     (((**(code **)(*param_1 + 0x148))(param_1), *(float *)(param_1 + 0x10c) != 0.95 ||
      (*(float *)((long)param_1 + 0x864) != 0.95)))) {
    param_1[0x10c] = 0x3f7333333f733333;
    FUN_0091ada4(param_1 + 0x103);
  }
  if ((*(byte *)(param_1 + 0x11a) & 1) == 0) {
    if (*(byte *)(param_1 + 0x11a) >> 1 == 0) {
      return;
    }
  }
  else if (param_1[0x11b] == 0) {
    return;
  }
  FUN_00f01980(param_1);
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar2 * 0x40);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar3);
    puVar3[8] = 0;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0;
    puVar3[0x14] = 0;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0;
    *(undefined ***)puVar3 = &PTR_FUN_027d0db0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00a99c48(puVar3,param_1 + 0x11a,*(undefined1 *)((long)param_1 + 0x902),0);
  FUN_00f022a0(param_1,puVar3);
  return;
}




void FUN_00c92f58(long *param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  iVar2 = FUN_00ecf844();
  if (iVar2 == 0) {
    pcVar4 = *(code **)(*param_1 + 0x178);
LAB_00c92f9c:
    (*pcVar4)(param_1);
    lVar5 = *param_1;
    uVar3 = 0;
  }
  else {
    if (iVar2 != 3) {
      if (iVar2 != 1) goto LAB_00c92fc8;
      pcVar4 = *(code **)(*param_1 + 0x180);
      goto LAB_00c92f9c;
    }
    lVar5 = *param_1;
    uVar3 = 1;
  }
  (**(code **)(lVar5 + 0x170))(param_1,uVar3);
LAB_00c92fc8:
  plVar7 = (long *)param_1[0x114];
  while (plVar7 != param_1 + 0x115) {
    (**(code **)(*(long *)plVar7[7] + 0x140))((long *)plVar7[7],iVar2);
    plVar6 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      plVar6 = plVar7 + 2;
      bVar1 = *(long **)*plVar6 != plVar7;
      plVar7 = (long *)*plVar6;
      if (bVar1) {
        do {
          lVar5 = *plVar6;
          plVar6 = (long *)(lVar5 + 0x10);
          plVar7 = (long *)*plVar6;
        } while (*plVar7 != lVar5);
      }
    }
    else {
      do {
        plVar7 = plVar6;
        plVar6 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  FUN_00f07940(0,0,param_1 + 0x103,8,param_1,8);
  return;
}

