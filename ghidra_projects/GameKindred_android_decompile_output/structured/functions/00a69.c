// functions/00a69 — 11 functions
#include "libGameKindred.h"




void thunk_FUN_00a69688(long param_1)

{
  ulong uVar1;
  
  if (((*(int *)(param_1 + 0x3d58) != 0) &&
      (uVar1 = FUN_00f023dc(param_1 + 0x990), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_00f023dc(param_1 + 0x1f50), (uVar1 & 1) == 0)) {
    FUN_00a68228(param_1);
    return;
  }
  return;
}




void FUN_00a69374(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                 ulong param_5)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_027c1a60;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(param_2,puVar4);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar5);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  if ((param_5 & 1) != 0) {
    FUN_00efddc4(0x3f800000,puVar5);
    FUN_00efcac4(param_1,puVar5);
    FUN_00efcb24(puVar5,FUN_0091aa80);
    uVar2 = *(uint *)(param_4 + 0x84);
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_4 + 0x84) = uVar2 & 0xffff807f;
      FUN_0091ada4(param_4);
      uVar2 = *(uint *)(param_4 + 0x84);
    }
    *(uint *)(param_4 + 0x84) = uVar2 | 4;
    FUN_00f01980(param_4);
    FUN_00f02308(param_4,puVar4,puVar5,0);
    return;
  }
  FUN_00efddc4(0,puVar5);
  FUN_00efcac4(param_1,puVar5);
  FUN_00efcb24(puVar5,FUN_0091aa80);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00f01980(param_4);
  FUN_00f02308(param_4,puVar4,puVar5,puVar6,0);
  return;
}




void FUN_00a6963c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar1 = param_1 + 0x1f50;
    lVar2 = param_1 + 0x990;
  }
  else {
    lVar1 = param_1 + 0x990;
    lVar2 = param_1 + 0x1f50;
  }
  FUN_00a68480(param_1,param_3 != 0,lVar1,lVar2);
  FUN_00f04900(param_2);
  return;
}




void FUN_00a69688(long param_1)

{
  ulong uVar1;
  
  if (((*(int *)(param_1 + 0x3d58) != 0) &&
      (uVar1 = FUN_00f023dc(param_1 + 0x990), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_00f023dc(param_1 + 0x1f50), (uVar1 & 1) == 0)) {
    FUN_00a68228(param_1);
    return;
  }
  return;
}




void FUN_00a696d8(void *param_1)

{
  FUN_009dd410();
  operator_delete(param_1);
  return;
}




void FUN_00a696fc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1c;
  param_1[0x18] = 0;
  *(undefined1 *)((long)param_1 + 0xd4) = 0;
  param_1[0x1b] = 0;
  param_1[0x19] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 4;
  *param_1 = (long)&PTR_FUN_027cc940;
  FUN_00f017e8(plVar1);
  plVar2 = param_1 + 0x2d;
  param_1[0x1c] = (long)&PTR_FUN_027c1f80;
  FUN_00f017e8(plVar2);
  param_1[0x2d] = (long)&PTR_FUN_027c1f80;
  FUN_00b12bd8(param_1 + 0x3e,1);
  plVar3 = param_1 + 0xd4;
  FUN_00f017e8(plVar3);
  param_1[0xd4] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(param_1 + 0xe5);
  plVar4 = param_1 + 0x10b;
  FUN_00f0bdbc(plVar4,0);
  plVar5 = param_1 + 0x124;
  param_1[0x10b] = (long)&PTR_FUN_027c3260;
  FUN_00f0e4a8(plVar5);
  FUN_00f0d160(param_1 + 0x142);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar2,param_1 + 0x3e,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0xe5,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,param_1 + 0x142,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_00f10428(param_1 + 0x55,0,0,0,0,0,0,0,0,0,0,0,0,"white_background");
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"ability_lock");
  if ((*(float *)(param_1 + 0x12e) != 0.5) || (*(float *)((long)param_1 + 0x974) != 0.5)) {
    param_1[0x12e] = 0x3f0000003f000000;
    FUN_0091ada4(plVar5);
  }
  *(uint *)((long)param_1 + 0x9a4) = *(uint *)((long)param_1 + 0x9a4) & 0xfffffffb;
  return;
}




void FUN_00a6992c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cc940;
  if ((long *)param_1[0x1b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b] + 8))();
    param_1[0x1b] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x142);
  param_1[0x124] = &PTR_FUN_028266f0;
  param_1[0x13b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x13e);
  FUN_00f13d08(param_1 + 0x124);
  FUN_00f13d08(param_1 + 0x10b);
  FUN_00f0d3a4(param_1 + 0xe5);
  FUN_00f01868(param_1 + 0xd4);
  param_1[0x3e] = &PTR_FUN_027dc928;
  param_1[0xa9] = &PTR_FUN_02826f38;
  param_1[0xc0] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0xc3);
  FUN_00f13d08(param_1 + 0xa9);
  param_1[0x7f] = &PTR_FUN_02826f38;
  param_1[0x96] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x99);
  FUN_00f13d08(param_1 + 0x7f);
  param_1[0x55] = &PTR_FUN_02826f38;
  param_1[0x6c] = &PTR_FUN_02827098;
  FUN_00f0a79c(param_1 + 0x6f);
  FUN_00f13d08(param_1 + 0x55);
  FUN_00f13d08(param_1 + 0x3e);
  FUN_00f01868(param_1 + 0x2d);
  FUN_00f01868(param_1 + 0x1c);
  FUN_00f13d08(param_1);
  return;
}




bool FUN_00a69a60(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0xd8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return plVar1 != (long *)0x0;
}




void FUN_00a69a98(void *param_1)

{
  FUN_00a6992c();
  operator_delete(param_1);
  return;
}




void FUN_00a69abc(long param_1,long param_2,undefined4 param_3,undefined8 param_4,int param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(undefined4 *)(param_1 + 200) = param_3;
  *(int *)(param_1 + 0xcc) = param_5;
  *(undefined8 *)(param_1 + 0xb8) = param_4;
  *(long *)(param_1 + 0xc0) = param_2;
  if (param_2 != 0) {
    uVar1 = FUN_00d7ae40(param_2);
    if ((uVar1 & 1) == 0) {
      uVar2 = 1;
      goto LAB_00a69b08;
    }
    param_5 = *(int *)(param_1 + 0xcc);
  }
  if (param_5 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
LAB_00a69b08:
  FUN_00a69b14(param_1,uVar2);
  return;
}




void FUN_00a69b14(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined4 local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  local_4c = 0xffc8c8c8;
  switch(param_2) {
  case 0:
    puVar3 = (undefined8 *)FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
    uVar5 = FUN_00e6ce7c(*puVar3,0);
    FUN_00f0d75c(param_1 + 0x728,uVar5);
    lVar4 = FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
    if (*(int *)(lVar4 + 0x18) == 1) {
      local_4c = 0xffe19400;
    }
    else {
      lVar4 = FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
      if (*(int *)(lVar4 + 0x18) == 2) {
        local_4c = 0xffe550b2;
      }
      else {
        lVar4 = FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
        if (*(int *)(lVar4 + 0x18) == 3) {
          local_4c = 0xff005ae1;
        }
      }
    }
    FUN_00b1326c(0x3f666666,param_1 + 0x1f0,&local_4c);
    uVar5 = FUN_00e6ce7c("MENU_TALENTS_TALENT_LEVEL",0);
    thunk_FUN_00e7051c(&local_60,uVar5);
    FUN_00e70510(&local_70);
    uVar2 = FUN_00d7ae38(*(undefined8 *)(param_1 + 0xc0));
    FUN_00e70e18(&local_70,"%u",uVar2);
    FUN_00e705c8(&local_80,"[VALUE]");
    FUN_00e71248(&local_60,0,&local_80,&local_70);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0xa10,&local_60);
    FUN_00f0d7fc(param_1 + 0x728,&DAT_01bee7fa);
    FUN_00f0d7fc(param_1 + 0xa10,&DAT_01bee7fa);
    lVar4 = *(long *)(param_1 + 0xd8);
    *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a4) & 0xfffffffb;
    if (lVar4 != 0) {
      uVar5 = 1;
LAB_00a6a010:
      FUN_00c9edc4(lVar4,uVar5);
    }
    goto LAB_00a6a014;
  case 1:
    uVar5 = FUN_00e6ce7c("MENU_TALENTS_TALENT_USED",0);
    FUN_00f0d75c(param_1 + 0x728,uVar5);
    lVar4 = FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
    if (*(int *)(lVar4 + 0x18) == 1) {
      local_4c = 0xffe19400;
    }
    else {
      lVar4 = FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
      if (*(int *)(lVar4 + 0x18) == 2) {
        local_4c = 0xffe550b2;
      }
      else {
        lVar4 = FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
        if (*(int *)(lVar4 + 0x18) == 3) {
          local_4c = 0xff005ae1;
        }
      }
    }
    FUN_00b1326c(0x3f666666,param_1 + 0x1f0,&local_4c);
    uVar5 = FUN_00e6ce7c("MENU_TALENTS_TALENT_LEVEL",0);
    thunk_FUN_00e7051c(&local_60,uVar5);
    FUN_00e70510(&local_70);
    uVar2 = FUN_00d7ae38(*(undefined8 *)(param_1 + 0xc0));
    FUN_00e70e18(&local_70,"%u",uVar2);
    FUN_00e705c8(&local_80,"[VALUE]");
    FUN_00e71248(&local_60,0,&local_80,&local_70);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0xa10,&local_60);
    FUN_00f0d7fc(param_1 + 0x728,&DAT_01bee7fe);
    FUN_00f0d7fc(param_1 + 0xa10,&DAT_01bee7fe);
    *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a4) | 4;
    lVar4 = param_1 + 0x858;
    FUN_00f0bc10(0,0x3f000000,0x41200000,&local_80);
    FUN_00f0c168(lVar4,&local_80);
    (**(code **)(*(long *)(param_1 + 0x858) + 0x90))(lVar4);
    FUN_00f0c030(0x3f000000,lVar4,0);
    fVar6 = (float)*(undefined8 *)(param_1 + 0xb40) * 0.5;
    fVar7 = (float)((ulong)*(undefined8 *)(param_1 + 0xb40) >> 0x20) * 0.85;
    if ((*(float *)(param_1 + 0x898) != fVar6) || (*(float *)(param_1 + 0x89c) != fVar7)) {
      *(ulong *)(param_1 + 0x898) = CONCAT44(fVar7,fVar6);
      FUN_0091ada4(lVar4);
    }
    local_80 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x858) + 0x28))(lVar4,&local_80);
    lVar4 = *(long *)(param_1 + 0xd8);
    if (lVar4 != 0) {
      uVar5 = 0;
      goto LAB_00a6a010;
    }
LAB_00a6a014:
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_70 = 0;
      local_68 = (void *)0x0;
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
      local_60 = 0;
      local_58 = (void *)0x0;
    }
    break;
  case 2:
    puVar3 = (undefined8 *)FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
    uVar5 = FUN_00e6ce7c(*puVar3,0);
    FUN_00f0d75c(param_1 + 0x728,uVar5);
    lVar4 = FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
    if (*(int *)(lVar4 + 0x18) == 1) {
      local_4c = 0xffe19400;
    }
    else {
      lVar4 = FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
      if (*(int *)(lVar4 + 0x18) == 2) {
        local_4c = 0xffe550b2;
      }
      else {
        lVar4 = FUN_00d7ade4(*(undefined8 *)(param_1 + 0xc0));
        if (*(int *)(lVar4 + 0x18) == 3) {
          local_4c = 0xff005ae1;
        }
      }
    }
    FUN_00b1326c(0x3f666666,param_1 + 0x1f0,&local_4c);
    uVar5 = FUN_00e6ce7c("MENU_TALENTS_LABEL_UNDISCOVERED",0);
    FUN_00f0d75c(param_1 + 0xa10,uVar5);
    FUN_00f0d7fc(param_1 + 0x728,&DAT_01bee7fe);
    FUN_00f0d7fc(param_1 + 0xa10,&DAT_01bee7fe);
    *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a4) | 4;
    if (*(long *)(param_1 + 0xd8) != 0) {
      FUN_00c9edc4(*(long *)(param_1 + 0xd8),0);
    }
    break;
  case 3:
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0xff;
    uVar5 = FUN_00e6ce7c("TALENT_CHOOSER_NONE",0);
    FUN_00f0d75c(param_1 + 0x728,uVar5);
    FUN_00b1326c(0x3f666666,param_1 + 0x1f0,&local_4c);
    uVar5 = FUN_00e6ce7c("TALENT_CHOOSER_NONE_DESCRIPTION",0);
    FUN_00f0d75c(param_1 + 0xa10,uVar5);
  }
  FUN_00a6a384(param_1,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

