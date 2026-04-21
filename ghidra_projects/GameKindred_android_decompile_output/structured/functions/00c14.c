// functions/00c14 — 20 functions
#include "libGameKindred.h"




void FUN_00c14050(void *param_1)

{
  FUN_00c13e10();
  operator_delete(param_1);
  return;
}




void FUN_00c14074(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x1198);
  if (((*(char *)(param_1 + uVar3 * 0x808 + 0x988) != '\0') &&
      (lVar4 = param_1 + uVar3 * 0x808, *(char *)(lVar4 + 0x989) == '\0')) &&
     (*(long *)(param_1 + uVar3 * 0x808 + 0x250) != 0)) {
    lVar6 = param_1 + uVar3 * 0x808;
    plVar2 = *(long **)(lVar6 + 0x968);
    puVar5 = (undefined1 *)(lVar4 + 0x989);
    if (plVar2 != (long *)0x0) {
      lVar4 = param_1 + uVar3 * 0x808;
      if (*(int *)(lVar4 + 0x970) == (int)plVar2[1]) {
        lVar4 = (**(code **)(*plVar2 + 0x10))();
        if (lVar4 != 0) goto LAB_00c140c4;
        uVar3 = (ulong)*(uint *)(param_1 + 0x1198);
        puVar5 = (undefined1 *)(param_1 + uVar3 * 0x808 + 0x989);
      }
      else {
        *(undefined8 *)(lVar6 + 0x968) = 0;
        *(undefined4 *)(lVar4 + 0x970) = DAT_03214ce8;
      }
    }
    local_58 = param_1 + 0x188 + uVar3 * 0x808;
    *puVar5 = 1;
    pcStack_50 = FUN_00c15358;
    FUN_00f02e98(0x3e99999a,&local_58,0,1);
    if (*(char *)(param_1 + 0x188 + (ulong)*(uint *)(param_1 + 0x1198) * 0x808 + 0x802) == '\0') {
      param_1 = param_1 + (ulong)(~*(uint *)(param_1 + 0x1198) & 1) * 0x808;
      local_58 = param_1 + 0x188;
      pcStack_50 = FUN_00c153bc;
      FUN_00f02e98(*(float *)(*(long *)(param_1 + 0x240) + 0x28) + 0.3,&local_58,0,1);
    }
  }
LAB_00c140c4:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00c141f8(long param_1)

{
  return param_1 + (ulong)*(uint *)(param_1 + 0x1198) * 0x808 + 0x188;
}




long FUN_00c1420c(long param_1)

{
  return param_1 + (ulong)(~*(uint *)(param_1 + 0x1198) & 1) * 0x808 + 0x188;
}




void FUN_00c14228(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&uStack_3c,&local_40);
  FUN_00f13f08(uStack_3c,local_40,param_1);
  FUN_00f13f08(uStack_3c,local_40,param_1 + 0xd0);
  FUN_00f07a18(0,0,param_1,0);
  FUN_00f07a18(0,0,param_1 + 0xd0,0);
  param_1 = param_1 + 0x188;
  lVar2 = 2;
  do {
    FUN_00c138bc(param_1);
    lVar2 = lVar2 + -1;
    param_1 = param_1 + 0x808;
  } while (lVar2 != 0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c14228(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&uStack_3c,&uStack_40);
  FUN_00f13f08(uStack_3c,uStack_40,param_1);
  FUN_00f13f08(uStack_3c,uStack_40,param_1 + 0xd0);
  FUN_00f07a18(0,0,param_1,0);
  FUN_00f07a18(0,0,param_1 + 0xd0,0);
  param_1 = param_1 + 0x188;
  lVar2 = 2;
  do {
    FUN_00c138bc(param_1);
    lVar2 = lVar2 + -1;
    param_1 = param_1 + 0x808;
  } while (lVar2 != 0);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c142e4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x188;
  lVar2 = 2;
  *(undefined4 *)(param_1 + 0x1198) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  do {
    FUN_00c1506c(lVar1);
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0x808;
  } while (lVar2 != 0);
  *(long *)(param_1 + 0xc0) = param_2;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 8);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  FUN_00c14228(param_1);
  FUN_00c14394(param_1,1);
  return;
}




void FUN_00c14358(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x188;
  lVar2 = 2;
  *(undefined4 *)(param_1 + 0x1198) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  do {
    FUN_00c1506c(lVar1);
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0x808;
  } while (lVar2 != 0);
  return;
}




void FUN_00c14394(long param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  
  if ((param_2 & 1) == 0) {
    uVar3 = ~*(uint *)(param_1 + 0x1198) & 1;
    *(uint *)(param_1 + 0x1198) = uVar3;
  }
  else {
    FUN_00c144e0(param_1 + (ulong)*(uint *)(param_1 + 0x1198) * 0x808 + 0x188,
                 **(undefined8 **)(param_1 + 200));
    uVar3 = *(uint *)(param_1 + 0x1198);
  }
  plVar4 = (long *)(*(long *)(param_1 + 200) + 8);
  if (*plVar4 == 0) {
    uVar2 = (ulong)uVar3;
    *(undefined1 *)(param_1 + (ulong)uVar3 * 0x808 + 0x98a) = 1;
  }
  else {
    uVar1 = FUN_00c144e0(param_1 + 0x188 + (ulong)(~uVar3 & 1) * 0x808);
    uVar2 = (ulong)*(uint *)(param_1 + 0x1198);
    if (*(long *)(param_1 + 0x188 + uVar2 * 0x808 + 200) == 0) {
      FUN_00c151e8(uVar1,param_1 + (ulong)(~*(uint *)(param_1 + 0x1198) & 1) * 0x808 + 0x188,plVar4)
      ;
      uVar2 = (ulong)*(uint *)(param_1 + 0x1198);
    }
  }
  FUN_00c14684(param_1 + uVar2 * 0x808 + 0x188);
  FUN_00c14228(param_1);
  *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 8;
  return;
}




void FUN_00c14484(long param_1)

{
  long lVar1;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  *(undefined4 *)(param_1 + 0x1198) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  param_1 = param_1 + 0x188;
  lVar1 = 2;
  do {
    FUN_00c1506c(param_1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x808;
  } while (lVar1 != 0);
  return;
}




void FUN_00c144e0(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined8 **)(param_1 + 0xb8) = param_2;
  FUN_00e6a8a8(auStack_b8,PTR_s_build___HUDPartsCutscene__s__s_t_02be34b0,*param_2,param_2[1]);
  lVar1 = param_1 + 0xd0;
  FUN_00f0e628(lVar1);
  FUN_00f0e540(lVar1,auStack_b8);
  FUN_00f0e578(lVar1,"Cutscene_Avatar");
  if ((*(float *)(param_1 + 0x118) != 0.5) || (*(float *)(param_1 + 0x11c) != 0.5)) {
    *(undefined8 *)(param_1 + 0x118) = 0x3f0000003f000000;
    FUN_0091ada4(lVar1);
  }
  lVar1 = param_1 + 0x1c0;
  FUN_00f0d378(lVar1,PTR_s_build___Fonts_Brandon_Bold_30_fo_02be9c70);
  FUN_00f0d7fc(lVar1,&DAT_01bbbdd4);
  uVar5 = FUN_00e6ce7c(param_2[3],0);
  FUN_00f0d75c(lVar1,uVar5);
  FUN_00f0da30(lVar1,1);
  FUN_00f0da80(lVar1,&DAT_03131298);
  lVar1 = param_1 + 0x2f0;
  FUN_00f0d378(lVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78);
  FUN_00f0d7fc(lVar1,&DAT_01bbbdd0);
  uVar5 = FUN_00e6ce7c(param_2[2],0);
  FUN_00f0d75c(lVar1,uVar5);
  *(undefined4 *)(param_1 + 0x7f8) = *(undefined4 *)((long)param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x7f0) = *(undefined4 *)(param_2 + 6);
  uVar5 = param_2[4];
  uVar4 = FUN_00e6a474(uVar5);
  uVar3 = FUN_0091ed5c(uVar5,uVar4,0x1234);
  *(undefined2 *)(param_1 + 0x7f4) = uVar3;
  uVar5 = 0;
  if (*(long *)(*(long *)(param_1 + 0xb8) + 0x38) != 0) {
    uVar5 = FUN_00a57448();
  }
  *(undefined8 *)(param_1 + 200) = uVar5;
  *(undefined2 *)(param_1 + 0x800) = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c14684(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 200) == 0) {
    pcStack_30 = FUN_00c15358;
    local_38 = param_1;
    FUN_00f02e98(*(undefined4 *)(param_1 + 0x7f8),&local_38,0,1);
  }
  FUN_00c146fc(param_1,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c146fc(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float param_4,
                 long param_5,ulong param_6)

{
  ushort *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  ushort *puVar7;
  ushort *puVar8;
  ushort *puVar9;
  float local_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00f01980();
  FUN_00c138bc(param_5);
  lVar4 = DAT_03210d00;
  local_60 = *(float *)(param_5 + 0x40);
  fStack_5c = *(float *)(param_5 + 0x44);
  switch(*(undefined4 *)(param_5 + 0x7f0)) {
  case 0:
  case 3:
    local_68 = -220.0;
    param_4 = local_68;
    param_3 = fStack_5c;
    fStack_64 = fStack_5c;
    break;
  case 1:
    param_3 = -220.0;
    param_4 = local_60;
    local_68 = local_60;
    fStack_64 = param_3;
    break;
  case 2:
  case 5:
    param_4 = local_60 + 220.0;
    param_3 = fStack_5c;
    local_68 = param_4;
    fStack_64 = fStack_5c;
    break;
  case 4:
    param_3 = 220.0;
    param_4 = local_60;
    local_68 = local_60;
    fStack_64 = param_3;
    break;
  default:
  }
  if ((param_6 & 1) == 0) {
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efcad4(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_02825268;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e19999a,puVar6);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdc08(puVar9);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efdc50(puVar9,&local_68);
    FUN_00efcac4(0x3e99999a,puVar9);
    FUN_00efcb24(puVar9,FUN_0091aa80);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efcd98(puVar7);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcea4(puVar7,puVar6,puVar9,0);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc9c0(puVar6);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efca10(puVar6,0);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc8e8(puVar9);
      *(undefined ***)puVar9 = &PTR_FUN_027c27b8;
      puVar9[0xc] = 0;
      puVar9[0xd] = 0;
      puVar9[0xe] = 0;
      puVar9[0xf] = 0;
      puVar9[0x10] = 0;
      puVar9[0x11] = 0;
      puVar9[0x12] = 0;
      puVar9[0x13] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    *(code **)(puVar9 + 8) = FUN_00c14f14;
    *(long *)(puVar9 + 0x10) = param_5;
    FUN_00f02308(param_5,puVar7,puVar6,puVar9,0);
  }
  else {
    if ((local_60 != param_4) || (fStack_5c != param_3)) {
      *(ulong *)(param_5 + 0x40) = CONCAT44(fStack_64,local_68);
      FUN_0091ada4(param_5);
    }
    uVar2 = *(uint *)(param_5 + 0x84);
    *(uint *)(param_5 + 0x84) = uVar2 | 4;
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_5 + 0x84) = uVar2 & 0xffff807f | 4;
      FUN_0091ada4(param_5);
    }
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efcad4(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_02825220;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e4ccccd,puVar6);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar9 = (ushort *)0x0;
    }
    else {
      puVar9 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar9;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdc08(puVar9);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efdc50(puVar9,&local_60);
    FUN_00efcac4(0x3ecccccd,puVar9);
    FUN_00efcb24(puVar9,FUN_0091aa80);
    lVar4 = DAT_03210d00;
    uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar8 = (ushort *)0x0;
      puVar7 = (ushort *)0x0;
      _DAT_00000010 = FUN_00c14eb8;
      _DAT_00000020 = param_5;
    }
    else {
      puVar8 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar5 * 0x40);
      if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar8;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc8e8(puVar8);
      *(undefined ***)puVar8 = &PTR_FUN_027c27b8;
      puVar8[0xc] = 0;
      puVar8[0xd] = 0;
      puVar8[0xe] = 0;
      puVar8[0xf] = 0;
      puVar8[0x10] = 0;
      puVar8[0x11] = 0;
      puVar8[0x12] = 0;
      puVar8[0x13] = 0;
      puVar8[8] = 0;
      puVar8[9] = 0;
      puVar8[10] = 0;
      puVar8[0xb] = 0;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      lVar4 = DAT_03210d00;
      puVar1 = (ushort *)(DAT_03210d00 + 0x20010);
      uVar5 = *puVar1;
      *(code **)(puVar8 + 8) = FUN_00c14eb8;
      *(long *)(puVar8 + 0x10) = param_5;
      if ((ulong)uVar5 == 0xffff) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = (ushort *)(lVar4 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(lVar4 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar7;
        }
        *puVar1 = uVar5;
        *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
        FUN_00efcd98(puVar7);
        *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
      }
    }
    FUN_00efcea4(puVar7,puVar6,puVar9,puVar8,0);
    FUN_00f022a0(param_5,puVar7);
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c14e54(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c15358;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  FUN_00c146fc(param_1,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c14eb8(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (*(long *)(param_1 + 200) != 0) {
    lVar4 = FUN_00a57398(0x3f800000);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + 0x28;
    }
    puVar2 = &DAT_03214ce8;
    if (lVar4 != 0) {
      puVar2 = (undefined4 *)(lVar1 + 8);
    }
    uVar3 = *puVar2;
    *(long *)(param_1 + 0x7e0) = lVar1;
    *(undefined4 *)(param_1 + 0x7e8) = uVar3;
  }
  *(undefined1 *)(param_1 + 0x800) = 1;
  return;
}




void FUN_00c14f14(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x7e0);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7e8) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x7e0);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x7e8) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x7e0) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x7e8) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0,uVar3);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x7e0) = 0;
      *(undefined4 *)(param_1 + 0x7e8) = DAT_03214ce8;
    }
  }
  if (*(char *)(param_1 + 0x802) != '\0') {
    FUN_00c14484(*(undefined8 *)(param_1 + 0xc0));
    return;
  }
  return;
}




void FUN_00c14fdc(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x802) != '\0') {
    FUN_00c14484();
    return;
  }
  return;
}




void FUN_00c14fec(long param_1)

{
  *(undefined1 *)(param_1 + 0x802) = 1;
  return;
}




void FUN_00c14ff8(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c153bc;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  FUN_00c14394(*(undefined8 *)(param_1 + 0xc0),0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c14484(long param_1)

{
  long lVar1;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  *(undefined4 *)(param_1 + 0x1198) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  param_1 = param_1 + 0x188;
  lVar1 = 2;
  do {
    FUN_00c1506c(param_1);
    lVar1 = lVar1 + -1;
    param_1 = param_1 + 0x808;
  } while (lVar1 != 0);
  return;
}

