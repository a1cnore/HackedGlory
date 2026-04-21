// functions/00b1f — 13 functions
#include "libGameKindred.h"




void FUN_00b1f060(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_50;
  float fStack_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x1c8;
  FUN_00f0dac8(lVar1,0);
  FUN_00f0dad0(0xbf800000,lVar1,1);
  lVar2 = param_3 + 0x2f8;
  FUN_00f0dac8(lVar2,0);
  FUN_00f0dad0(0xbf800000,lVar2,1);
  if (*(char *)(param_3 + 0x45c) == '\0') {
    FUN_00f0d4e0(lVar1);
    fVar5 = 25.0;
    fVar4 = param_2 * 0.5 + 25.0;
    if (*(float *)(param_3 + 0x33c) == fVar4) goto LAB_00b1f1ac;
  }
  else {
    fVar4 = (float)FUN_00f01c20(lVar1);
    fVar5 = (float)FUN_00f0d4e0(lVar2);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    FUN_00f0dad0(fVar4,lVar1,1);
    FUN_00f0dad0(fVar4,lVar2,1);
    FUN_00f0d4e0(lVar1);
    if ((*(float *)(param_3 + 0x208) != 0.0) ||
       (fVar5 = *(float *)(param_3 + 0x20c), fVar5 != -param_2)) {
      *(undefined4 *)(param_3 + 0x208) = 0;
      *(float *)(param_3 + 0x20c) = -param_2;
      FUN_0091ada4(lVar1);
      fVar5 = *(float *)(param_3 + 0x20c);
    }
    FUN_00f01c20(lVar1);
    fVar5 = fVar5 + param_2;
    fVar4 = fVar5 + 25.0;
    if ((*(float *)(param_3 + 0x338) == 0.0) &&
       (fVar5 = *(float *)(param_3 + 0x33c), fVar5 == fVar4)) goto LAB_00b1f1ac;
    *(undefined4 *)(param_3 + 0x338) = 0;
  }
  *(float *)(param_3 + 0x33c) = fVar4;
  FUN_0091ada4(lVar2);
LAB_00b1f1ac:
  local_50 = FUN_00f01c20(lVar1);
  fStack_4c = fVar5;
  FUN_00f13f18(param_3 + 0x88,&local_50);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00b1f1f4(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  char cVar7;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  long local_50 [2];
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  iVar1 = *(int *)(param_1 + 0x458);
  lVar5 = FUN_00940b98();
  if (iVar1 != *(int *)(lVar5 + 0x10)) {
    lVar5 = FUN_00940b98();
    uVar2 = *(undefined4 *)(lVar5 + 0x10);
    *(undefined4 *)(param_1 + 0x458) = uVar2;
    FUN_00cb47e8(local_50 + 1,uVar2,*(undefined1 *)(param_1 + 0x45c),0,0);
    FUN_00f0d75c(param_1 + 0x1c8,local_50 + 1);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_50[1] = 0;
      local_40 = (void *)0x0;
    }
  }
  FUN_009580b8();
  uVar4 = FUN_00961c7c();
  FUN_009580b8();
  local_50[0] = FUN_00961ccc();
  cVar7 = *(char *)(param_1 + 0x45d);
  if ((uVar4 < 0x20) || (cVar7 != '\0')) {
    if ((uVar4 < 0x20) && (cVar7 != '\0')) {
      if (local_50[0] < 1) {
        uVar6 = FUN_00e6ce7c("FRONTEND_SEASON_EXPIRED_LABEL",0);
        thunk_FUN_00e7051c(local_50 + 1,uVar6);
        FUN_00e705c8(&local_60,"[NEXT_SEASON_NAME]");
        FUN_00cb4920(&local_70,*(undefined1 *)(param_1 + 0x45c),0,0);
        FUN_00e71248(local_50 + 1,0,&local_60,&local_70);
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
        FUN_00e705c8(&local_60,"Get ready for Winter season 2016");
        FUN_00f0d75c(param_1 + 0x2f8,&local_60);
        if (local_58 != (void *)0x0) {
          operator_delete__(local_58);
          local_60 = 0;
          local_58 = (void *)0x0;
        }
        if (local_40 != (void *)0x0) {
          operator_delete__(local_40);
          local_50[1] = 0;
          local_40 = (void *)0x0;
        }
      }
      else {
        uVar6 = FUN_00e6ce7c("FRONTEND_COMPETITIVE_SEASON_DAYS_REMAINING",0);
        FUN_00b252ac(param_1 + 0x2f8,uVar6,1,0);
        FUN_00b25438(param_1 + 0x2f8,local_50);
      }
      cVar7 = '\0';
      *(undefined1 *)(param_1 + 0x45d) = 0;
    }
    if ((cVar7 == '\0') && (0 < local_50[0])) {
      FUN_00b252ec(param_1 + 0x2f8);
    }
  }
  else {
    lVar5 = FUN_00940b98();
    FUN_00cb496c(local_50 + 1,*(undefined4 *)(lVar5 + 0x10),*(undefined1 *)(param_1 + 0x45c));
    FUN_00b252ac(param_1 + 0x2f8,local_50 + 1,0,0);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_50[1] = 0;
      local_40 = (void *)0x0;
    }
    *(undefined1 *)(param_1 + 0x45d) = 1;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1f424(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dd960;
  param_1[0x5f] = &PTR_FUN_027d3cc8;
  param_1[0x76] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x88] != (void *)0x0) {
    operator_delete__((void *)param_1[0x88]);
    param_1[0x88] = 0;
    param_1[0x87] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x5f);
  FUN_00f0d3a4(param_1 + 0x39);
  FUN_00f01868(param_1 + 0x28);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b1f4a4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dd960;
  param_1[0x5f] = &PTR_FUN_027d3cc8;
  param_1[0x76] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x88] != (void *)0x0) {
    operator_delete__((void *)param_1[0x88]);
    param_1[0x88] = 0;
    param_1[0x87] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x5f);
  FUN_00f0d3a4(param_1 + 0x39);
  FUN_00f01868(param_1 + 0x28);
  FUN_00f13d08(param_1 + 0x11);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




void thunk_FUN_00b1f060(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uStack_50;
  float fStack_4c;
  long lStack_48;
  
  lVar3 = tpidr_el0;
  lStack_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x1c8;
  FUN_00f0dac8(lVar1,0);
  FUN_00f0dad0(0xbf800000,lVar1,1);
  lVar2 = param_3 + 0x2f8;
  FUN_00f0dac8(lVar2,0);
  FUN_00f0dad0(0xbf800000,lVar2,1);
  if (*(char *)(param_3 + 0x45c) == '\0') {
    FUN_00f0d4e0(lVar1);
    fVar5 = 25.0;
    fVar4 = param_2 * 0.5 + 25.0;
    if (*(float *)(param_3 + 0x33c) == fVar4) goto LAB_00b1f1ac;
  }
  else {
    fVar4 = (float)FUN_00f01c20(lVar1);
    fVar5 = (float)FUN_00f0d4e0(lVar2);
    if (fVar4 <= fVar5) {
      fVar4 = fVar5;
    }
    FUN_00f0dad0(fVar4,lVar1,1);
    FUN_00f0dad0(fVar4,lVar2,1);
    FUN_00f0d4e0(lVar1);
    if ((*(float *)(param_3 + 0x208) != 0.0) ||
       (fVar5 = *(float *)(param_3 + 0x20c), fVar5 != -param_2)) {
      *(undefined4 *)(param_3 + 0x208) = 0;
      *(float *)(param_3 + 0x20c) = -param_2;
      FUN_0091ada4(lVar1);
      fVar5 = *(float *)(param_3 + 0x20c);
    }
    FUN_00f01c20(lVar1);
    fVar5 = fVar5 + param_2;
    fVar4 = fVar5 + 25.0;
    if ((*(float *)(param_3 + 0x338) == 0.0) &&
       (fVar5 = *(float *)(param_3 + 0x33c), fVar5 == fVar4)) goto LAB_00b1f1ac;
    *(undefined4 *)(param_3 + 0x338) = 0;
  }
  *(float *)(param_3 + 0x33c) = fVar4;
  FUN_0091ada4(lVar2);
LAB_00b1f1ac:
  uStack_50 = FUN_00f01c20(lVar1);
  fStack_4c = fVar5;
  FUN_00f13f18(param_3 + 0x88,&uStack_50);
  if (*(long *)(lVar3 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1f530(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  
  FUN_00f017e8();
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *param_1 = (long)&PTR_FUN_027dda60;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x35;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x53;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x71;
  FUN_00f017e8(plVar3);
  param_1[0x71] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar4 = param_1 + 0xdc;
  FUN_00f017e8(plVar4);
  plVar5 = param_1 + 0xed;
  param_1[0xdc] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x10b;
  FUN_00f0e4a8(plVar6);
  plVar7 = param_1 + 0x129;
  FUN_00f0e4a8(plVar7);
  FUN_00f017e8(param_1 + 0x147);
  param_1[0x147] = (long)&PTR_FUN_027c1f80;
  param_1[0x158] = 0;
  *(undefined4 *)((long)param_1 + 0xacc) = 0;
  *(undefined4 *)(param_1 + 0x159) = 0xffffffff;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0xbe,1);
  FUN_00f023ec(plVar3,param_1 + 0x82,1);
  FUN_00f023ec(plVar3,param_1 + 0xa0,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x147,1);
  FUN_00f0e548(param_1 + 0x82,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_fill_left");
  *(uint *)((long)param_1 + 0x494) = *(uint *)((long)param_1 + 0x494) & 0xfffffffb;
  FUN_00f0e548(param_1 + 0xa0,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_fill_right")
  ;
  *(uint *)((long)param_1 + 0x584) = *(uint *)((long)param_1 + 0x584) & 0xfffffffb;
  FUN_00f0e548(param_1 + 0xbe,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  *(uint *)((long)param_1 + 0x674) = *(uint *)((long)param_1 + 0x674) & 0xfffffffb;
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_fill_left");
  FUN_00f0e670(plVar5,&DAT_01bee7f6,2);
  uVar8 = *(uint *)((long)param_1 + 0x7ec);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x7ec) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0e548(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_fill_right");
  FUN_00f0e670(plVar6,&DAT_01bee7f6,2);
  uVar8 = *(uint *)((long)param_1 + 0x8dc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x8dc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar6);
  }
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar7,&DAT_01bee7f6,2);
  uVar8 = *(uint *)((long)param_1 + 0x9cc);
  if ((uVar8 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x9cc) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0e548(param_1 + 0x17,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_left");
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_right");
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"square_button_middle");
  return;
}




void FUN_00b1f8e8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dda60;
  FUN_00b1fa78();
  FUN_00f01868(param_1 + 0x147);
  param_1[0x129] = &PTR_FUN_028266f0;
  param_1[0x140] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x143);
  FUN_00f13d08(param_1 + 0x129);
  param_1[0x10b] = &PTR_FUN_028266f0;
  param_1[0x122] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x125);
  FUN_00f13d08(param_1 + 0x10b);
  param_1[0xed] = &PTR_FUN_028266f0;
  param_1[0x104] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x107);
  FUN_00f13d08(param_1 + 0xed);
  FUN_00f01868(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_028266f0;
  param_1[0xd5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd8);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  FUN_00f01868(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_028266f0;
  param_1[0x6a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x6d);
  FUN_00f13d08(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_028266f0;
  param_1[0x4c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4f);
  FUN_00f13d08(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_028266f0;
  param_1[0x2e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x17);
  if ((void *)param_1[0x16] != (void *)0x0) {
    operator_delete__((void *)param_1[0x16]);
    param_1[0x15] = 0;
    param_1[0x16] = 0;
  }
  if ((void *)param_1[0x14] != (void *)0x0) {
    operator_delete__((void *)param_1[0x14]);
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  FUN_00f01868(param_1);
  return;
}




void FUN_00b1fa78(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0x88);
  if (*(uint *)(param_1 + 0x88) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x90) + lVar5) != 0) {
        uVar2 = FUN_00f02540();
        if ((uVar2 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0x90) + lVar5),1);
        }
        plVar1 = *(long **)(*(long *)(param_1 + 0x90) + lVar5);
        if (plVar1 == (long *)0x0) {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x90) + uVar6 * 8);
        }
        else {
          (**(code **)(*plVar1 + 8))();
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0x90) + lVar5);
        }
        *puVar3 = 0;
        uVar2 = (ulong)*(uint *)(param_1 + 0x88);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar6 < uVar2);
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  if (*(int *)(param_1 + 0x98) != 0) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0xa0);
      if (*(long *)(lVar5 + (ulong)uVar4 * 8) == 0) goto LAB_00b1fb7c;
      uVar6 = (ulong)uVar4;
      uVar2 = FUN_00f02540();
      if ((uVar2 & 1) != 0) {
        FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0xa0) + uVar6 * 8),1);
      }
      plVar1 = (long *)(*(long *)(param_1 + 0xa0) + uVar6 * 8);
      if ((long *)*plVar1 != (long *)0x0) {
        (**(code **)(*(long *)*plVar1 + 8))();
        plVar1 = (long *)(*(long *)(param_1 + 0xa0) + uVar6 * 8);
      }
      *plVar1 = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x98));
  }
  lVar5 = *(long *)(param_1 + 0xa0);
LAB_00b1fb7c:
  if (lVar5 != 0) {
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar2 = (ulong)*(uint *)(param_1 + 0xa8);
  if (*(uint *)(param_1 + 0xa8) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xb0) + lVar5) != 0) {
        uVar2 = FUN_00f02540();
        if ((uVar2 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0xb0) + lVar5),1);
        }
        plVar1 = *(long **)(*(long *)(param_1 + 0xb0) + lVar5);
        if (plVar1 == (long *)0x0) {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xb0) + uVar6 * 8);
        }
        else {
          (**(code **)(*plVar1 + 8))();
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xb0) + lVar5);
        }
        *puVar3 = 0;
        uVar2 = (ulong)*(uint *)(param_1 + 0xa8);
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar6 < uVar2);
  }
  if (*(long *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(param_1 + 0xa8) = 0;
  }
  *(undefined8 *)(param_1 + 0xac0) = 0;
  return;
}




void FUN_00b1fc18(void *param_1)

{
  FUN_00b1f8e8();
  operator_delete(param_1);
  return;
}




void FUN_00b1fc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                 uint *param_5)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  void *local_d0;
  code *local_c8;
  long *plStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  undefined4 local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  FUN_00b1fa78();
  if (*param_5 != 0) {
    uVar2 = DAT_03210c64;
    lVar6 = 0;
    uVar7 = 0;
    plVar1 = param_4 + 0x159;
    do {
      pvVar4 = operator_new(0x15c0);
      FUN_00ab6c24(pvVar4,0);
      local_d0 = pvVar4;
      FUN_00f0d92c((long)pvVar4 + 0x720,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,plVar1);
      local_c8 = (code *)CONCAT44(local_c8._4_4_,0xff404040);
      FUN_00ab7588(0x3f800000,local_d0,&local_c8);
      FUN_00b09144(0,local_d0);
      local_c8 = FUN_00b1fec8;
      local_b8 = 0;
      uStack_b0 = 0;
      plStack_c0 = param_4;
      local_a8 = uVar7;
      local_a0 = uVar2;
      FUN_009693a0((long)local_d0 + 8,&local_c8);
      FUN_00ab7520(local_d0,1);
      FUN_00ab7598(0,local_d0,&DAT_01bee7f6);
      FUN_00ab75b0(0x3f333333,local_d0,plVar1);
      FUN_00b094a4(local_d0,&DAT_0320ffa8);
      *(undefined1 *)((long)local_d0 + 0x15ba) = 0;
      FUN_00ab703c(param_3,param_1,param_2,local_d0,0,*(long *)(param_5 + 2) + lVar6,plVar1,
                   &DAT_03218ef8,0);
      FUN_00ac91e4(param_4 + 0x11,&local_d0);
      FUN_00f023ec(param_4 + 0x147,local_d0,1);
      if (uVar7 != 0) {
        pcVar5 = operator_new(0xf0);
        FUN_00f0e4a8();
        local_c8 = pcVar5;
        FUN_00f0e548(pcVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
        FUN_009d6990(param_4 + 0x13,&local_c8);
        (**(code **)(*param_4 + 0x78))(param_4,local_c8,1);
      }
      local_c8 = (code *)0x0;
      FUN_00b1fed4(param_4 + 0x15,&local_c8);
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (uVar7 < *param_5);
  }
  FUN_00b1ff5c(param_4);
  FUN_00b20790(param_4,0,1);
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b1fec8(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00b20790(param_1,in_x4,1);
  return;
}




void FUN_00b1fed4(uint *param_1,undefined8 *param_2)

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
    FUN_00b20c0c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b1ff5c(undefined1 param_1 [16],ulong param_2,long param_3)

{
  long lVar1;
  undefined4 *puVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  lVar6 = param_3 + 0x298;
  FUN_00f0e700(lVar6);
  uVar15 = (undefined4)param_2;
  if (*(int *)(param_3 + 0x88) == 0) {
    fVar17 = 0.0;
  }
  else {
    plVar9 = *(long **)(param_3 + 0x90);
    fVar17 = 0.0;
    uVar10 = 0xffffffff;
    do {
      fVar12 = (float)param_2;
      fVar11 = (float)(**(code **)(*(long *)*plVar9 + 0x48))();
      if (plVar9 == *(long **)(param_3 + 0x90)) {
        plVar8 = (long *)*plVar9;
        fVar13 = (float)(**(code **)(*plVar8 + 0x48))(plVar8);
        (**(code **)(*(long *)*plVar9 + 0x48))();
        fVar16 = fVar12 * 0.5;
        if ((*(float *)(plVar8 + 8) != fVar13 * 0.5) ||
           (fVar12 = *(float *)((long)plVar8 + 0x44), fVar12 != fVar16)) {
          *(float *)(plVar8 + 8) = fVar13 * 0.5;
          *(float *)((long)plVar8 + 0x44) = fVar16;
          FUN_0091ada4(plVar8);
        }
        local_a0 = 0x3f0000003f000000;
        (**(code **)(*plVar8 + 0x28))(plVar8,&local_a0);
        uVar14 = (**(code **)(*(long *)*plVar9 + 0x48))();
        (**(code **)(*(long *)*plVar9 + 0x48))();
        param_2 = (ulong)(uint)(fVar12 + -4.0);
        FUN_00f13f08(uVar14,param_3 + 0x5f0);
      }
      else {
        plVar8 = (long *)*plVar9;
        fVar16 = *(float *)((long *)plVar9[-1] + 8);
        fVar12 = (float)(**(code **)(*(long *)plVar9[-1] + 0x48))();
        fVar13 = (float)(**(code **)(*(long *)*plVar9 + 0x48))();
        fVar13 = fVar16 + fVar12 * 0.5 + fVar13 * 0.5;
        fVar12 = *(float *)(plVar9[-1] + 0x44);
        if ((*(float *)(plVar8 + 8) != fVar13) || (*(float *)((long)plVar8 + 0x44) != fVar12)) {
          *(float *)(plVar8 + 8) = fVar13;
          *(float *)((long)plVar8 + 0x44) = fVar12;
          FUN_0091ada4(plVar8);
        }
        local_a0 = 0x3f0000003f000000;
        (**(code **)(*plVar8 + 0x28))(plVar8,&local_a0);
        plVar8 = *(long **)(*(long *)(param_3 + 0xa0) + uVar10 * 8);
        (**(code **)(*(long *)*plVar9 + 0x48))();
        FUN_00f13f08(0x40000000,fVar13 + -8.0,plVar8);
        fVar13 = *(float *)((long *)*plVar9 + 8);
        fVar12 = (float)(**(code **)(*(long *)*plVar9 + 0x48))();
        fVar13 = fVar13 + fVar12 * -0.5;
        param_2 = (ulong)(uint)fVar13;
        fVar12 = *(float *)(*plVar9 + 0x44);
        if ((*(float *)(plVar8 + 8) != fVar13) || (*(float *)((long)plVar8 + 0x44) != fVar12)) {
          *(float *)(plVar8 + 8) = fVar13;
          *(float *)((long)plVar8 + 0x44) = fVar12;
          FUN_0091ada4(plVar8);
        }
        local_a0 = 0x3f0000003f000000;
        (**(code **)(*plVar8 + 0x28))(plVar8,&local_a0);
        if ((*(uint *)((long)plVar8 + 0x84) & 0x7f80) != 0x3f80) {
          *(uint *)((long)plVar8 + 0x84) = *(uint *)((long)plVar8 + 0x84) & 0xffff807f | 0x3f80;
          FUN_0091ada4(plVar8);
        }
      }
      plVar9 = plVar9 + 1;
      fVar17 = fVar17 + fVar11;
      uVar10 = (ulong)((int)uVar10 + 1);
    } while (plVar9 != (long *)(*(long *)(param_3 + 0x90) + (ulong)*(uint *)(param_3 + 0x88) * 8));
  }
  if ((*(float *)(param_3 + 0xf8) != 0.0) || (*(float *)(param_3 + 0xfc) != 0.0)) {
    *(undefined8 *)(param_3 + 0xf8) = 0;
    FUN_0091ada4(param_3 + 0xb8);
  }
  local_a0 = 0;
  (**(code **)(*(long *)(param_3 + 0xb8) + 0x28))(param_3 + 0xb8,&local_a0);
  if ((*(float *)(param_3 + 0x450) != *(float *)(param_3 + 0xf8)) ||
     (*(float *)(param_3 + 0x454) != *(float *)(param_3 + 0xfc))) {
    *(float *)(param_3 + 0x450) = *(float *)(param_3 + 0xf8);
    *(float *)(param_3 + 0x454) = *(float *)(param_3 + 0xfc);
    FUN_0091ada4(param_3 + 0x410);
  }
  local_a0 = 0;
  (**(code **)(*(long *)(param_3 + 0x410) + 0x28))(param_3 + 0x410,&local_a0);
  if ((*(float *)(param_3 + 0x7a8) != *(float *)(param_3 + 0x450)) ||
     (*(float *)(param_3 + 0x7ac) != *(float *)(param_3 + 0x454))) {
    *(float *)(param_3 + 0x7a8) = *(float *)(param_3 + 0x450);
    *(float *)(param_3 + 0x7ac) = *(float *)(param_3 + 0x454);
    FUN_0091ada4(param_3 + 0x768);
  }
  if ((*(float *)(param_3 + 0x7b8) != *(float *)(param_3 + 0x460)) ||
     (*(float *)(param_3 + 0x7bc) != *(float *)(param_3 + 0x464))) {
    *(float *)(param_3 + 0x7b8) = *(float *)(param_3 + 0x460);
    *(float *)(param_3 + 0x7bc) = *(float *)(param_3 + 0x464);
    FUN_0091ada4(param_3 + 0x768);
  }
  if ((*(float *)(param_3 + 0x2d8) != 10.0) || (*(float *)(param_3 + 0x2dc) != 0.0)) {
    *(undefined8 *)(param_3 + 0x2d8) = 0x41200000;
    FUN_0091ada4(lVar6);
  }
  local_a0 = 0;
  (**(code **)(*(long *)(param_3 + 0x298) + 0x28))(lVar6,&local_a0);
  FUN_00f13f08(fVar17 + -20.0,uVar15,lVar6);
  plVar9 = (long *)(param_3 + 0x5f0);
  if ((*(float *)(param_3 + 0x630) != *(float *)(param_3 + 0x2d8)) ||
     (*(float *)(param_3 + 0x634) != *(float *)(param_3 + 0x2dc))) {
    *(float *)(param_3 + 0x630) = *(float *)(param_3 + 0x2d8);
    *(float *)(param_3 + 0x634) = *(float *)(param_3 + 0x2dc);
    FUN_0091ada4(plVar9);
  }
  local_a0 = 0;
  (**(code **)(*(long *)(param_3 + 0x5f0) + 0x28))(plVar9,&local_a0);
  lVar1 = param_3 + 0x948;
  fVar11 = (float)*(undefined8 *)(param_3 + 0x630) + 2.0;
  fVar12 = (float)((ulong)*(undefined8 *)(param_3 + 0x630) >> 0x20) + 4.0;
  if ((*(float *)(param_3 + 0x988) != fVar11) || (*(float *)(param_3 + 0x98c) != fVar12)) {
    *(ulong *)(param_3 + 0x988) = CONCAT44(fVar12,fVar11);
    FUN_0091ada4(lVar1);
  }
  fVar11 = *(float *)(param_3 + 0x644);
  if ((*(float *)(param_3 + 0x998) != *(float *)(param_3 + 0x640)) ||
     (*(float *)(param_3 + 0x99c) != fVar11)) {
    *(float *)(param_3 + 0x998) = *(float *)(param_3 + 0x640);
    *(float *)(param_3 + 0x99c) = fVar11;
    FUN_0091ada4(lVar1);
  }
  fVar12 = (float)FUN_00f0e700(lVar6);
  local_a0 = CONCAT44(fVar11 + -8.0,fVar12 + -8.0);
  FUN_00f13f18(lVar1,&local_a0);
  fVar17 = fVar17 + -10.0 + -4.0;
  if ((*(float *)(param_3 + 0x1e8) != fVar17) || (*(float *)(param_3 + 0x1ec) != 0.0)) {
    *(float *)(param_3 + 0x1e8) = fVar17;
    *(undefined4 *)(param_3 + 0x1ec) = 0;
    FUN_0091ada4(param_3 + 0x1a8);
  }
  local_a0 = 0;
  (**(code **)(*(long *)(param_3 + 0x1a8) + 0x28))(param_3 + 0x1a8,&local_a0);
  fVar17 = *(float *)(param_3 + 0x1e8) + -2.0;
  if ((*(float *)(param_3 + 0x540) != fVar17) ||
     (*(float *)(param_3 + 0x544) != *(float *)(param_3 + 0x1ec))) {
    *(float *)(param_3 + 0x540) = fVar17;
    *(float *)(param_3 + 0x544) = *(float *)(param_3 + 0x1ec);
    FUN_0091ada4(param_3 + 0x500);
  }
  local_a0 = 0;
  (**(code **)(*(long *)(param_3 + 0x500) + 0x28))(param_3 + 0x500,&local_a0);
  if ((*(float *)(param_3 + 0x898) != *(float *)(param_3 + 0x540)) ||
     (*(float *)(param_3 + 0x89c) != *(float *)(param_3 + 0x544))) {
    *(float *)(param_3 + 0x898) = *(float *)(param_3 + 0x540);
    *(float *)(param_3 + 0x89c) = *(float *)(param_3 + 0x544);
    FUN_0091ada4(param_3 + 0x858);
  }
  if ((*(float *)(param_3 + 0x8a8) != *(float *)(param_3 + 0x550)) ||
     (*(float *)(param_3 + 0x8ac) != *(float *)(param_3 + 0x554))) {
    *(float *)(param_3 + 0x8a8) = *(float *)(param_3 + 0x550);
    *(float *)(param_3 + 0x8ac) = *(float *)(param_3 + 0x554);
    FUN_0091ada4(param_3 + 0x858);
  }
  if (*(int *)(param_3 + 0x88) == 0) {
    uVar7 = *(uint *)(param_3 + 0x674);
  }
  else {
    uVar10 = 0;
    do {
      lVar6 = *(long *)(*(long *)(param_3 + 0x90) + uVar10 * 8);
      puVar2 = &DAT_01bee7f6;
      if (*(long *)(param_3 + 0xac0) != lVar6) {
        puVar2 = (undefined4 *)(param_3 + 0xac8);
      }
      FUN_00ab7570(0x3f800000,lVar6,puVar2);
      FUN_00ab75b0(0x3f333333,*(undefined8 *)(*(long *)(param_3 + 0x90) + uVar10 * 8),
                   (undefined4 *)(param_3 + 0xac8));
      uVar10 = uVar10 + 1;
    } while (uVar10 < *(uint *)(param_3 + 0x88));
    uVar7 = *(uint *)(param_3 + 0x674);
    if ((*(uint *)(param_3 + 0x88) != 0) && (*(long **)(param_3 + 0xac0) != (long *)0x0)) {
      *(uint *)(param_3 + 0x674) = uVar7 | 4;
      uVar10 = (**(code **)(**(long **)(param_3 + 0xac0) + 0x48))();
      lVar6 = *(long *)(param_3 + 0xac0);
      if (lVar6 == **(long **)(param_3 + 0x90)) {
        fVar17 = *(float *)(lVar6 + 0x44);
        fVar11 = *(float *)(lVar6 + 0x40) + 8.0;
        if ((*(float *)(param_3 + 0x630) != fVar11) || (*(float *)(param_3 + 0x634) != fVar17)) {
          *(float *)(param_3 + 0x630) = fVar11;
          *(float *)(param_3 + 0x634) = fVar17;
          FUN_0091ada4(plVar9);
        }
        local_a0 = 0x3f0000003f000000;
        (**(code **)(*plVar9 + 0x28))(plVar9,&local_a0);
        uVar10 = (ulong)(uint)((float)uVar10 + -8.0);
      }
      else {
        fVar11 = *(float *)(lVar6 + 0x40);
        fVar17 = *(float *)(lVar6 + 0x44);
        if (lVar6 == (*(long **)(param_3 + 0x90))[*(int *)(param_3 + 0x88) - 1]) {
          if ((*(float *)(param_3 + 0x630) != fVar11 + -8.0) ||
             (*(float *)(param_3 + 0x634) != fVar17)) {
            *(float *)(param_3 + 0x630) = fVar11 + -8.0;
            *(float *)(param_3 + 0x634) = fVar17;
            FUN_0091ada4(plVar9);
          }
          local_a0 = 0x3f0000003f000000;
          (**(code **)(*plVar9 + 0x28))(plVar9,&local_a0);
          uVar10 = (ulong)(uint)((float)uVar10 + -16.0 + 1.0);
        }
        else {
          if ((*(float *)(param_3 + 0x630) != fVar11) || (*(float *)(param_3 + 0x634) != fVar17)) {
            *(float *)(param_3 + 0x630) = fVar11;
            *(float *)(param_3 + 0x634) = fVar17;
            FUN_0091ada4(plVar9);
          }
          local_a0 = 0x3f0000003f000000;
          (**(code **)(*plVar9 + 0x28))(plVar9,&local_a0);
        }
      }
      FUN_00f0e700(plVar9);
      FUN_00f13f08(uVar10,plVar9);
      lVar6 = *(long *)(param_3 + 0xac0);
      bVar4 = lVar6 == **(long **)(param_3 + 0x90);
      *(uint *)(param_3 + 0x494) =
           *(uint *)(param_3 + 0x494) & 0xfffffff8 |
           *(uint *)(param_3 + 0x494) & 3 | (uint)bVar4 << 2;
      bVar5 = lVar6 == (*(long **)(param_3 + 0x90))[*(int *)(param_3 + 0x88) - 1];
      *(uint *)(param_3 + 0x13c) =
           *(uint *)(param_3 + 0x13c) & 0xfffffff8 |
           *(uint *)(param_3 + 0x13c) & 3 | (uint)!bVar4 << 2;
      *(uint *)(param_3 + 0x584) =
           *(uint *)(param_3 + 0x584) & 0xfffffff8 |
           *(uint *)(param_3 + 0x584) & 3 | (uint)bVar5 << 2;
      *(uint *)(param_3 + 0x22c) =
           *(uint *)(param_3 + 0x22c) & 0xfffffff8 |
           *(uint *)(param_3 + 0x22c) & 3 | (uint)!bVar5 << 2;
      goto LAB_00b20750;
    }
  }
  *(uint *)(param_3 + 0x674) = uVar7 & 0xfffffffb;
LAB_00b20750:
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

