// functions/00b8c — 17 functions
#include "libGameKindred.h"




void FUN_00b8c488(long param_1)

{
  long lVar1;
  
  *(uint *)(param_1 + 0x264) = *(uint *)(param_1 + 0x264) & 0xfffffffb;
  lVar1 = FUN_009b8d90();
  FUN_00af3474(lVar1 + 0xc6e8);
  FUN_00b8c4c4(param_1);
  return;
}




void FUN_00b8c4c4(long param_1)

{
  FUN_008fce60(param_1 + 0xe18,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0xe30,&DAT_0320ffa8);
  FUN_008fefd4(param_1 + 0xe08,0);
  return;
}




void FUN_00b8c508(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar1 = param_1 + 0x1e0;
  FUN_00f01980(lVar1);
  fVar3 = (float)FUN_00b028f0(lVar1);
  fVar4 = *(float *)(param_1 + 0x130);
  fVar5 = fVar3 * 0.5 - fVar4;
  FUN_00b028f0(lVar1);
  fVar3 = -fVar4 - *(float *)(param_1 + 0x134);
  if ((*(float *)(param_1 + 0x220) != fVar5) || (*(float *)(param_1 + 0x224) != fVar3)) {
    *(float *)(param_1 + 0x220) = fVar5;
    *(float *)(param_1 + 0x224) = fVar3;
    FUN_0091ada4(lVar1);
  }
  *(uint *)(param_1 + 0x264) = *(uint *)(param_1 + 0x264) | 4;
  if ((*(byte *)(param_1 + 0xe30) & 1) == 0) {
    if (*(byte *)(param_1 + 0xe30) >> 1 == 0) goto LAB_00b8c5f4;
  }
  else if (*(long *)(param_1 + 0xe38) == 0) goto LAB_00b8c5f4;
  FUN_00b01884(lVar1,param_1 + 0xe30);
  FUN_008fa54c(local_50,&DAT_01bb6eb8);
  FUN_00b013a0(0xbf800000,lVar1,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00b8c5f4:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00b8c620(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(auStack_50,(ulong)auStack_50 | 4);
  fVar2 = (float)FUN_00b028f0(param_1 + 0x1e0);
  fVar3 = *(float *)(param_1 + 0x130);
  FUN_00b028f0(param_1 + 0x1e0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return fVar2 * 0.5 - fVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8c6c8(long param_1)

{
  if (param_1 != 0) {
    FUN_00b8c6d4();
    return;
  }
  return;
}




void FUN_00b8c6d4(long param_1)

{
  long lVar1;
  long lVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)(param_1 + 0xe48) = 1;
  lVar1 = param_1 + 0x1e0;
  FUN_008fa54c(local_50,"CHEST_LAND");
  FUN_00b029dc(lVar1,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  FUN_008fa54c(local_50,"CHEST_LAND");
  FUN_00b029ac(lVar1,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(int *)(param_1 + 0xe08) == 0) {
    FUN_008fa54c(local_50,"RUMBLE");
    FUN_00b013a0(0xbf800000,lVar1,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  else {
    FUN_00b8b9b8(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8c7c8(long param_1)

{
  if (param_1 != 0) {
    FUN_00b8c7d4();
    return;
  }
  return;
}




void FUN_00b8c7d4(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  
  lVar1 = FUN_00965ecc(param_1 + 0x1e0);
  lVar2 = FUN_00965ecc(param_1 + 0x1e0);
  fVar3 = (float)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20) /
          (float)((ulong)*(undefined8 *)(lVar2 + 0x10) >> 0x20) + -100.0;
  FUN_00cab60c(CONCAT44(fVar3,(float)*(undefined8 *)(lVar1 + 8) /
                              (float)*(undefined8 *)(lVar2 + 0x10) + 100.0),fVar3,0x3e4ccccd,
               param_1 + 0xe08,param_1 + 0xe18,0);
  return;
}




void FUN_00b8c840(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_008fefd4(param_1,1);
    FUN_009369b0(param_1,*param_2);
    uVar2 = 0;
    if (*param_2 != 0) {
      lVar3 = *(long *)(param_2 + 2);
      lVar4 = *(long *)(param_1 + 2);
      lVar5 = lVar3 + (ulong)*param_2 * 0x68;
      do {
        FUN_008fcdb8(lVar4,lVar3);
        FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
        FUN_008fcdb8(lVar4 + 0x30,lVar3 + 0x30);
        FUN_008fcdb8(lVar4 + 0x48,lVar3 + 0x48);
        puVar1 = (undefined8 *)(lVar3 + 0x60);
        lVar3 = lVar3 + 0x68;
        *(undefined8 *)(lVar4 + 0x60) = *puVar1;
        lVar4 = lVar4 + 0x68;
      } while (lVar3 != lVar5);
      uVar2 = *param_2;
    }
    *param_1 = uVar2;
  }
  return;
}




void FUN_00b8c8f8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_78;
  long *plStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  FUN_00ed45a4();
  plVar1 = param_1 + 0x1b;
  *param_1 = (long)&PTR_FUN_027e82d8;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x39;
  FUN_00bd697c(plVar2,0,1);
  plVar3 = param_1 + 0x42;
  FUN_00f017e8(plVar3);
  plVar4 = param_1 + 0x53;
  param_1[0x42] = (long)&PTR_FUN_027c1f80;
  FUN_00f13ca4(plVar4);
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  *(undefined4 *)(param_1 + 0x6d) = DAT_03214ce8;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,plVar1,1);
  FUN_00f023ec(plVar3,param_1[0x3a],1);
  FUN_00f023ec(plVar3,plVar4,1);
  uVar6 = FUN_00f136e0();
  FUN_00f13be8(uVar6,5);
  FUN_00f13fd8(plVar4,uVar6);
  FUN_00f0e548(plVar1,PTR_s_build___RewardScreenBackground_p_02be3560,"full_splash_1k");
  if ((*(float *)(param_1 + 0x25) != 0.5) || (*(float *)((long)param_1 + 300) != 0.5)) {
    param_1[0x25] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  FUN_00bd6e6c(plVar2);
  *(uint *)(param_1[0x3a] + 0x84) = *(uint *)(param_1[0x3a] + 0x84) & 0xffffffef;
  FUN_00bd6eec(plVar2,0);
  plVar1 = param_1 + 1;
  local_50 = DAT_03210c7c;
  *(undefined1 *)(param_1[0x3a] + 0x4349) = 1;
  local_78 = FUN_00b8cb60;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  local_50 = DAT_03210c80;
  local_78 = thunk_FUN_00b8d34c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  local_50 = DAT_03210f60;
  local_78 = thunk_FUN_00b8d440;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  local_78 = thunk_FUN_00b8d440;
  local_50 = DAT_03210f8c;
  local_60 = 0;
  uStack_58 = 0;
  local_68 = 0;
  plStack_70 = param_1;
  FUN_009693a0(plVar1,&local_78);
  if (*(long *)(lVar5 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8cb60(long *param_1)

{
  FUN_00affa84();
  FUN_00aa1814(0);
  *(uint *)(param_1[0x3a] + 0x84) = *(uint *)(param_1[0x3a] + 0x84) | 4;
                    /* WARNING: Could not recover jumptable at 0x00b8cba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00b8cbac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e82d8;
  if ((void *)param_1[0x6b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x6b]);
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
  }
  FUN_00f13d08(param_1 + 0x53);
  FUN_00f01868(param_1 + 0x42);
  FUN_00bd6cac(param_1 + 0x39);
  param_1[0x1b] = &PTR_FUN_028266f0;
  param_1[0x32] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x35);
  FUN_00f13d08(param_1 + 0x1b);
  thunk_FUN_00f13d08(param_1);
  return;
}




void FUN_00b8cc34(void *param_1)

{
  FUN_00b8cbac();
  operator_delete(param_1);
  return;
}




void FUN_00b8cc58(void)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01980664(0x17);
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_009b8d90();
    FUN_009ba2b4(uVar2,PTR_s_screen_main_hub_02be3690,1);
    return;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8cc90(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float local_48;
  float fStack_44;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(&local_48,(ulong)&local_48 | 4);
  fVar6 = fStack_44 * 0.5;
  if ((*(float *)(param_1 + 0x250) != local_48 * 0.5) || (*(float *)(param_1 + 0x254) != fVar6)) {
    *(ulong *)(param_1 + 0x250) = CONCAT44(fVar6,local_48 * 0.5);
    FUN_0091ada4(param_1 + 0x210);
  }
  FUN_00f13f18(param_1 + 0xd8,&local_40);
  if ((*(float *)(param_1 + 0x118) != DAT_03218ef8) ||
     (*(float *)(param_1 + 0x11c) != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x118) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0xd8);
  }
  plVar4 = *(long **)(param_1 + 0x1d0);
  FUN_00f13f08(0x442f0000,fVar6,plVar4);
  fVar6 = (fVar6 * 0.5 - fStack_44 * 0.5) + 100.0;
  if ((*(float *)(plVar4 + 8) != 0.0) || (*(float *)((long)plVar4 + 0x44) != fVar6)) {
    *(undefined4 *)(plVar4 + 8) = 0;
    *(float *)((long)plVar4 + 0x44) = fVar6;
    FUN_0091ada4(plVar4);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_40);
  fVar6 = (float)(**(code **)(*plVar4 + 0x48))(plVar4);
  fVar5 = *(float *)((long)plVar4 + 0x2264) + 140.0;
  lVar1 = param_1 + 0x298;
  if ((*(float *)(param_1 + 0x2d8) != fVar6 * -0.5) || (*(float *)(param_1 + 0x2dc) != fVar5)) {
    *(float *)(param_1 + 0x2d8) = fVar6 * -0.5;
    *(float *)(param_1 + 0x2dc) = fVar5;
    FUN_0091ada4(lVar1);
  }
  fVar6 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x350));
  FUN_00f13f2c(lVar1,(ulong)(uint)(int)(fVar6 * 60.0) << 0x20 | 0x578);
  FUN_00f13db4(lVar1);
  uVar3 = FUN_00ed4748(param_1);
  if ((uVar3 & 1) != 0) {
    FUN_00b8ce90(param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8ce90(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  *(uint *)(*(long *)(param_1 + 0x1d0) + 0x5b4) =
       *(uint *)(*(long *)(param_1 + 0x1d0) + 0x5b4) & 0xfffffffb;
  plVar4 = *(long **)(param_1 + 0x1d0);
  uVar1 = *(uint *)((long)plVar4 + 0x5b4);
  if ((uVar1 & 0x7f80) != 0x4c80) {
    *(uint *)((long)plVar4 + 0x5b4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar4 + 0xa6);
    plVar4 = *(long **)(param_1 + 0x1d0);
  }
  (**(code **)(*plVar4 + 0x150))();
  FUN_00b8d508(0,0x3f800000,param_1);
  lVar5 = FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/sting_upgrade_talent.mp3",0,0);
  if (lVar5 != 0) {
    uVar2 = *(undefined4 *)(lVar5 + 0x30);
    *(long *)(param_1 + 0x360) = lVar5 + 0x28;
    *(undefined4 *)(param_1 + 0x368) = uVar2;
  }
  local_40 = FUN_00f048a4("EVENT_SCREEN_TALENT_UPGRADE_REVEAL");
  local_68 = thunk_FUN_00b8d740;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(param_1 + 8,&local_68);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8cf9c(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  void *local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  lVar5 = FUN_00cdbb24(param_2);
  if ((lVar5 == 0) || ((*(ushort *)(lVar5 + 0xb0) >> 8 & 1) == 0)) goto LAB_00b8d1ac;
  lVar6 = FUN_00cdda38(lVar5);
  iVar11 = *(int *)(lVar6 + 0x18);
  if (iVar11 == 3) {
    puVar10 = &DAT_01bb6f14;
LAB_00b8d044:
    FUN_00f0e670(param_1 + 0x1b,puVar10,2);
  }
  else {
    if (iVar11 == 2) {
      puVar10 = &DAT_01bb6f10;
      goto LAB_00b8d044;
    }
    if (iVar11 == 1) {
      puVar10 = &DAT_01bb6f0c;
      goto LAB_00b8d044;
    }
  }
  FUN_00bd6afc(param_1 + 0x39,param_2);
  FUN_00b8d1ec(param_1);
  plVar7 = (long *)FUN_00f14058(param_1 + 0x53);
  lVar6 = FUN_00cdda38(lVar5);
  lVar12 = **(long **)(lVar6 + 0x28);
  if (lVar12 != 0) {
    uVar13 = 0;
    plVar4 = *(long **)(lVar6 + 0x28);
    do {
      if ((*(char *)(lVar12 + 0x34) == '\0') && (*(float *)(lVar12 + 0xc) != 0.0)) {
        pvVar8 = operator_new(0x538);
        FUN_00ca4c64();
        lVar6 = *plVar4;
        fVar15 = *(float *)(lVar6 + 8);
        fVar14 = *(float *)(lVar6 + 0xc);
        iVar11 = (int)(char)*(undefined2 *)(lVar5 + 0xb0);
        uVar1 = *(undefined4 *)(lVar6 + 0x2c);
        uVar2 = *(undefined4 *)(lVar6 + 0x30);
        fVar16 = (float)(iVar11 + -1);
        if (fVar16 <= 0.0) {
          fVar16 = 0.0;
        }
        fVar17 = 0.0;
        if ((0 < iVar11) &&
           (fVar17 = 0.0,
           (short)((ulong)*(undefined8 *)(lVar5 + 0xa8) >> 0x10) <=
           (short)*(undefined8 *)(lVar5 + 0xa8))) {
          fVar17 = fVar14;
        }
        local_a0 = pvVar8;
        uVar9 = FUN_00cb3700();
        FUN_00ca4e00(fVar15 + fVar14 * fVar16,fVar17,pvVar8,uVar2,uVar1,uVar9);
        FUN_00f13f08(0x44af0000,0x42700000,local_a0);
        *(uint *)((long)local_a0 + 0x84) =
             *(uint *)((long)local_a0 + 0x84) & 0x80000000 |
             *(uint *)((long)local_a0 + 0x84) & 0x7fff | (uVar13 & 0xffff) << 0xf;
        uVar13 = uVar13 + 1;
        FUN_00b8d280(param_1 + 0x6a,&local_a0);
        FUN_00f023ec(param_1 + 0x53,local_a0,1);
        (**(code **)(*plVar7 + 0x68))(plVar7,local_a0,0,9);
      }
      lVar12 = plVar4[1];
      plVar4 = plVar4 + 1;
    } while (lVar12 != 0);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
LAB_00b8d1ac:
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

