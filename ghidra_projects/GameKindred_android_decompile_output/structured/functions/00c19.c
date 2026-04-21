// functions/00c19 — 23 functions
#include "libGameKindred.h"




void FUN_00c1922c(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313adec,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c19294(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313adf0,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c196c8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_00f08be8(param_1 + 0xec0 + ((ulong)*(byte *)(param_1 + 0x1230) & 1) * 0x130 + 0x1e0);
  (**(code **)*puVar2)(puVar2,uVar1);
  uVar1 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_00b02c3c(param_1 + 0xec0,uVar1,0);
  *(undefined1 *)(param_1 + 0x41e8) = 0;
  FUN_00c19750(param_1);
  return;
}




void thunk_FUN_00c1985c(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  thunk_FUN_00e7051c(&uStack_48,param_1 + 0x1280);
  uVar3 = FUN_00e70b88(&uStack_48,&DAT_03210450);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar4 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
    FUN_00b02c3c(param_1 + 0xec0,uVar4,0);
  }
  else {
    FUN_00b02c3c(param_1 + 0xec0,&uStack_48,0);
  }
  *(bool *)(param_1 + 0x41e8) = !bVar1;
  FUN_00c19750(param_1);
  if (pvStack_40 != (void *)0x0) {
    operator_delete__(pvStack_40);
    uStack_48 = 0;
    pvStack_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c19304(undefined8 param_1)

{
  long lVar1;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_03133ac0 != 0) {
    local_58 = FUN_00c199ac;
    local_30 = DAT_0313adf4;
    local_40 = 0;
    uStack_38 = 0;
    local_48 = 0;
    uStack_50 = param_1;
    FUN_009693a0(DAT_03133ac0 + 8,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c19384(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f6b60;
  if ((void *)param_1[0x837] != (void *)0x0) {
    operator_delete__((void *)param_1[0x837]);
    param_1[0x837] = 0;
    param_1[0x836] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x810);
  FUN_00f01868(param_1 + 0x7ff);
  FUN_00f0d3a4(param_1 + 0x7d9);
  FUN_00f01868(param_1 + 0x7c8);
  FUN_009c7fa8(param_1 + 0x510);
  param_1[0x1d8] = &PTR_FUN_027f6cb8;
  FUN_009c7fa8(param_1 + 600);
  FUN_00abd150(param_1 + 0x1d8);
  thunk_FUN_00ed5534(param_1 + 0x93);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_00f13d08(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c19454(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f6cb8;
  FUN_009c7fa8(param_1 + 0x80);
  FUN_00abd150(param_1);
  return;
}




void FUN_00c1948c(void *param_1)

{
  FUN_00c19384();
  operator_delete(param_1);
  return;
}




void FUN_00c194b0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c194b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c194bc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c194c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c194c8(undefined1 param_1 [16],float param_2,long *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FUN_00f13db4();
  fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  if ((0.0 < fVar1) && ((**(code **)(*param_3 + 0x48))(param_3), 0.0 < param_2)) {
    fVar1 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar3 = *(float *)(param_3 + 0x83b);
    fVar4 = *(float *)(param_3 + 0x83c);
    fVar2 = *(float *)(param_3 + 0x83a) + *(float *)(param_3 + 0x83a);
    fVar1 = fVar1 - fVar2;
    (**(code **)(*param_3 + 0x48))(param_3);
    *(float *)(param_3 + 0x839) = (fVar1 - fVar3) - fVar4;
    *(float *)((long)param_3 + 0x41cc) =
         ((fVar2 - (*(float *)((long)param_3 + 0x41d4) + *(float *)((long)param_3 + 0x41d4))) -
         *(float *)((long)param_3 + 0x41dc)) - *(float *)((long)param_3 + 0x41e4);
                    /* WARNING: Could not recover jumptable at 0x00c195a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_3 + 0x140))(param_3);
    return;
  }
  return;
}




void FUN_00c195bc(long *param_1,int param_2,int param_3,int param_4,int param_5)

{
  *(float *)(param_1 + 0x83b) = (float)param_2;
  *(float *)((long)param_1 + 0x41dc) = (float)param_3;
  *(float *)(param_1 + 0x83c) = (float)param_4;
  *(float *)((long)param_1 + 0x41e4) = (float)param_5;
                    /* WARNING: Could not recover jumptable at 0x00c195f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_00c195f8(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313adec,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c19660(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313adf0,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c196c8(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_00f08be8(param_1 + 0xec0 + ((ulong)*(byte *)(param_1 + 0x1230) & 1) * 0x130 + 0x1e0);
  (**(code **)*puVar2)(puVar2,uVar1);
  uVar1 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
  FUN_00b02c3c(param_1 + 0xec0,uVar1,0);
  *(undefined1 *)(param_1 + 0x41e8) = 0;
  FUN_00c19750(param_1);
  return;
}




void FUN_00c19750(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  lVar1 = param_3 + 0x2f8;
  param_3 = param_3 + 0x498;
  uVar4 = FUN_00f13e54(lVar1);
  plVar2 = (long *)FUN_00ed5aa8(param_3);
  (**(code **)(*plVar2 + 0x58))(plVar2,0,0,1,1);
  FUN_00ed5a58(uVar4,param_3);
  FUN_00f13e54(lVar1);
  fVar5 = param_2;
  plVar2 = (long *)FUN_00ed5aa8(param_3);
  (**(code **)(*plVar2 + 0x58))(plVar2,0,0,1,1);
  if (param_2 < fVar5) {
    lVar3 = FUN_00ed5aa8(param_3);
    FUN_00f13e54(lVar1);
    fVar6 = fVar5;
    plVar2 = (long *)FUN_00ed5aa8(param_3);
    (**(code **)(*plVar2 + 0x58))(plVar2,0,0,1,1);
    if (*(float *)(lVar3 + 0x44) != fVar5 - fVar6) {
      *(float *)(lVar3 + 0x44) = fVar5 - fVar6;
      FUN_0091ada4(lVar3);
      return;
    }
  }
  return;
}




void FUN_00c1985c(long param_1)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  thunk_FUN_00e7051c(&local_48,param_1 + 0x1280);
  uVar3 = FUN_00e70b88(&local_48,&DAT_03210450);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    uVar4 = FUN_00e6ce7c("MENU_CHAT_ENTER_YOUR_CHAT",0);
    FUN_00b02c3c(param_1 + 0xec0,uVar4,0);
  }
  else {
    FUN_00b02c3c(param_1 + 0xec0,&local_48,0);
  }
  *(bool *)(param_1 + 0x41e8) = !bVar1;
  FUN_00c19750(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c1992c(undefined8 param_1)

{
  long lVar1;
  code *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (DAT_03133ac0 != 0) {
    local_58 = FUN_00c199ac;
    local_30 = DAT_0313adf4;
    local_40 = 0;
    uStack_38 = 0;
    local_48 = 0;
    uStack_50 = param_1;
    FUN_009693a0(DAT_03133ac0 + 8,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c199ac(undefined8 param_1)

{
  if (DAT_03133ac0 != 0) {
    FUN_00c1a6f4(DAT_03133ac0,DAT_0313adf4,FUN_00c199ac,param_1);
    return;
  }
  return;
}




void FUN_00c199dc(undefined8 param_1)

{
  if (DAT_03133ac0 != 0) {
    FUN_00c1a6f4(DAT_03133ac0,DAT_0313adf4,FUN_00c199ac,param_1);
    return;
  }
  return;
}




void FUN_00c19a0c(undefined1 param_1 [16],float param_2,long param_3,uint *param_4)

{
  long *plVar1;
  undefined **ppuVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined8 local_70;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  if (*param_4 != 0) {
    uVar6 = FUN_00f02540(*(undefined8 *)(param_3 + 0x41c0));
    if ((uVar6 & 1) != 0) {
      FUN_00f01a4c(*(undefined8 *)(param_3 + 0x41c0),1);
    }
    plVar7 = *(long **)(*(long *)(param_4 + 2) + (ulong)(*param_4 - 1) * 8);
    FUN_00ed5664(param_3 + 0x498,plVar7,1);
    plVar1 = plVar7 + 0x17;
    FUN_00f0d4e0(plVar1);
    uVar4 = *(uint *)(param_3 + 0x2904);
    fVar11 = *(float *)(param_3 + 0x41c8);
    fVar9 = (float)FUN_00f0d4e0(plVar1);
    fVar11 = fVar11 - fVar9;
    if ((uVar4 >> 2 & 1) == 0) {
      uVar6 = FUN_0092ea9c();
      ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_40_02be9c48;
      if ((uVar6 & 1) == 0) {
        ppuVar2 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
      }
      FUN_00f0d378(plVar7 + 0x3d,*ppuVar2);
      uVar6 = FUN_0092ea9c();
      ppuVar2 = &PTR_s_build___Fonts_Brandon_Regular_40_02be9c48;
      if ((uVar6 & 1) == 0) {
        ppuVar2 = &PTR_s_build___Fonts_Brandon_Light_48_f_02be9c10;
      }
      FUN_00f0d378(plVar1,*ppuVar2);
    }
    else {
      fVar11 = fVar11 + -200.0;
    }
    FUN_00f0dad0(fVar11 + -20.0,plVar7 + 0x3d,1);
    FUN_00f0d9b0(plVar7 + 0x3d,1);
    FUN_00f07b18(0,plVar7 + 0x3d,3,plVar1,1);
    FUN_00f07b18(0,plVar7 + 0x3d,0,plVar1,0);
    uVar10 = (**(code **)(*plVar7 + 0x58))(plVar7,0,0,1,1);
    local_70 = CONCAT44(param_2,uVar10);
    FUN_00f13f18(plVar7,&local_70);
    local_70 = 0;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_70);
    if (*(float *)(plVar7 + 8) != 0.0) {
      *(undefined4 *)(plVar7 + 8) = 0;
      FUN_0091ada4(plVar7);
    }
    if (*(float *)(**(long **)(param_4 + 2) + 0x44) != 0.0) {
      *(undefined4 *)(**(long **)(param_4 + 2) + 0x44) = 0;
      FUN_0091ada4();
    }
    if (1 < *param_4) {
      lVar8 = 0;
      do {
        plVar1 = (long *)(*(long *)(param_4 + 2) + lVar8 * 8);
        plVar7 = (long *)*plVar1;
        lVar3 = plVar1[1];
        fVar9 = *(float *)((long)plVar7 + 0x44);
        (**(code **)(*plVar7 + 0x48))();
        fVar9 = fVar9 + param_2;
        if (*(float *)(lVar3 + 0x44) != fVar9) {
          *(float *)(lVar3 + 0x44) = fVar9;
          FUN_0091ada4(lVar3);
        }
        uVar6 = lVar8 + 2;
        lVar8 = lVar8 + 1;
      } while (uVar6 < *param_4);
    }
    FUN_00c19750(param_3);
  }
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c19c68(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = param_1 + 0xec0;
  uVar2 = FUN_00f02540(lVar3);
  if ((param_2 & 1) == 0) {
    if ((uVar2 & 1) == 0) {
      FUN_00f023ec(param_1 + 0x270,lVar3,1);
    }
    uVar2 = FUN_00f02540(*(undefined8 *)(param_1 + 0x41c0));
    if ((uVar2 & 1) == 0) goto LAB_00c19ccc;
    lVar3 = *(long *)(param_1 + 0x41c0);
  }
  else if ((uVar2 & 1) == 0) goto LAB_00c19ccc;
  FUN_00f01a4c(lVar3,1);
LAB_00c19ccc:
  uVar1 = ~param_2 & 1;
  *(uint *)(param_1 + 0xf44) =
       *(uint *)(param_1 + 0xf44) & 0xfffffff8 | *(uint *)(param_1 + 0xf44) & 3 | uVar1 << 2;
  *(uint *)(param_1 + 0x144) =
       *(uint *)(param_1 + 0x144) & 0xfffffff8 | *(uint *)(param_1 + 0x144) & 3 | uVar1 << 2;
  *(uint *)(param_1 + 0x21c) =
       *(uint *)(param_1 + 0x21c) & 0xfffffff8 | *(uint *)(param_1 + 0x21c) & 3 | uVar1 << 2;
  *(uint *)(param_1 + 0x2904) =
       *(uint *)(param_1 + 0x2904) & 0xfffffff8 | *(uint *)(param_1 + 0x2904) & 3 | uVar1 << 2;
  return;
}




void FUN_00c19d14(long *param_1)

{
  float *pfVar1;
  long *plVar2;
  long *plVar3;
  undefined **ppuVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_0092ea9c();
  FUN_00f0025c(&uStack_84,&local_88);
  FUN_00f13f08(uStack_84,local_88,param_1 + 0x18);
  FUN_00f07a78(0,0,param_1 + 0x18,0);
  uVar10 = (**(code **)(*param_1 + 0x48))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar10,param_1 + 0x33);
  fVar7 = (float)param_1[0x83a] + (float)param_1[0x83b];
  fVar11 = (float)((ulong)param_1[0x83a] >> 0x20) + (float)((ulong)param_1[0x83b] >> 0x20);
  *(uint *)((long)param_1 + 0x2f4) = *(uint *)((long)param_1 + 0x2f4) | 0x10;
  if ((*(float *)(param_1 + 0x56) != fVar7) || (*(float *)((long)param_1 + 0x2b4) != fVar11)) {
    param_1[0x56] = CONCAT44(fVar11,fVar7);
    FUN_0091ada4(param_1 + 0x4e);
  }
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar6 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_30_02be9c38;
  }
  FUN_00b0360c(param_1 + 0x1d8,*ppuVar4,&DAT_01bee7fa);
  pfVar1 = (float *)(param_1 + 0x839);
  plVar2 = param_1 + 600;
  FUN_00ab75d0(0x41200000,*pfVar1 + -20.0,*pfVar1 + -20.0,plVar2);
  fVar7 = *(float *)(param_1 + 0x260);
  if ((fVar7 != *pfVar1 * 0.5) || (fVar7 = *(float *)((long)param_1 + 0x1304), fVar7 != 0.0)) {
    *(float *)(param_1 + 0x260) = *pfVar1 * 0.5;
    *(undefined4 *)((long)param_1 + 0x1304) = 0;
    FUN_0091ada4(plVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_1[600] + 0x28))(plVar2,&local_80);
  fVar11 = *(float *)((long)param_1 + 0x41cc);
  if ((*(byte *)((long)param_1 + 0xf44) >> 2 & 1) == 0) {
    uVar13 = param_1[0x83b];
    fVar8 = (float)param_1[0x83a] + (float)uVar13;
    fVar12 = (float)((ulong)param_1[0x83a] >> 0x20) + (float)(uVar13 >> 0x20);
    if (*(float *)(param_1 + 0x67) == fVar8) {
      fVar7 = *(float *)((long)param_1 + 0x33c);
      uVar13 = (ulong)(uint)fVar7;
      if (fVar7 == fVar12) goto LAB_00c19ef8;
    }
    fVar7 = (float)uVar13;
    param_1[0x67] = CONCAT44(fVar12,fVar8);
    FUN_0091ada4(param_1 + 0x5f);
  }
  else {
    FUN_00f01c20(plVar2);
    fVar11 = (fVar11 - fVar7) + -20.0;
  }
LAB_00c19ef8:
  plVar2 = param_1 + 0x5f;
  if ((0.0 < fVar11) && (0.0 < *pfVar1)) {
    fVar7 = fVar11;
    FUN_00f13f08(plVar2);
  }
  uVar9 = FUN_00f13e54(plVar2);
  local_80 = CONCAT44(fVar7,uVar9);
  FUN_00f13f18(param_1 + 0x93,&local_80);
  FUN_00f07940(0,0x41a00000,param_1 + 0x1d8,0,plVar2,3);
  FUN_00f07940(0xc1a00000,0x41a00000,param_1 + 0x510,1,plVar2,1);
  fVar7 = *(float *)((long)param_1 + 0x33c) + 100.0;
  if ((*(float *)(param_1 + 2000) != 0.0) || (*(float *)((long)param_1 + 0x3e84) != fVar7)) {
    *(undefined4 *)(param_1 + 2000) = 0;
    *(float *)((long)param_1 + 0x3e84) = fVar7;
    FUN_0091ada4(param_1 + 0x7c8);
  }
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar6 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  plVar3 = param_1 + 0x7d9;
  fVar7 = *pfVar1 * 0.9;
  if (*pfVar1 * 0.9 <= 50.0) {
    fVar7 = 50.0;
  }
  FUN_00f0d92c(plVar3,*ppuVar4,&DAT_01bee7fa);
  fVar11 = (float)FUN_00f13e54(plVar2);
  if ((*(float *)(param_1 + 0x7e1) != fVar11 * 0.5) || (*(float *)((long)param_1 + 0x3f0c) != 0.0))
  {
    *(float *)(param_1 + 0x7e1) = fVar11 * 0.5;
    *(undefined4 *)((long)param_1 + 0x3f0c) = 0;
    FUN_0091ada4(plVar3);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(param_1[0x7d9] + 0x28))(plVar3,&local_80);
  FUN_00f0dad0(fVar7,plVar3,1);
  FUN_00f0dac8(plVar3,3);
  if ((*(float *)(param_1 + 0x807) != *(float *)(param_1 + 2000)) ||
     (*(float *)((long)param_1 + 0x403c) != *(float *)((long)param_1 + 0x3e84))) {
    *(float *)(param_1 + 0x807) = *(float *)(param_1 + 2000);
    *(float *)((long)param_1 + 0x403c) = *(float *)((long)param_1 + 0x3e84);
    FUN_0091ada4(param_1 + 0x7ff);
  }
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_48_02be9c50;
  if ((uVar6 & 1) == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  }
  plVar2 = param_1 + 0x810;
  FUN_00f0d92c(plVar2,*ppuVar4,&DAT_01bee7fa);
  if ((*(float *)(param_1 + 0x818) != *(float *)(param_1 + 0x7e1)) ||
     (*(float *)((long)param_1 + 0x40c4) != *(float *)((long)param_1 + 0x3f0c))) {
    *(float *)(param_1 + 0x818) = *(float *)(param_1 + 0x7e1);
    *(float *)((long)param_1 + 0x40c4) = *(float *)((long)param_1 + 0x3f0c);
    FUN_0091ada4(plVar2);
  }
  local_80 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_80);
  FUN_00f0dad0(fVar7,plVar2,1);
  FUN_00f0dac8(plVar2,3);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

