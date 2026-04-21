// functions/00e0c — 20 functions
#include "libGameKindred.h"




void FUN_00e0c1ec(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onPreCalculateDamageExchangeName_02bed5e8;
  uVar3 = FUN_00e6a474(PTR_s_onPreCalculateDamageExchangeName_02bed5e8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e0be60;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d65010(param_1);
  plVar5 = (long *)FUN_00d2945c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_AdagioGasolineSoaked_buff");
  plVar5 = (long *)(**(code **)(*plVar5 + 0x90))();
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  plVar5 = (long *)FUN_00d2df94(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Adagio_Ability_B_Loop");
  lVar4 = FUN_00d09310();
  FUN_00d0953c(*(undefined4 *)(lVar4 + 0xb8));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar4 + 0x10);
  return;
}




void FUN_00e0c300(undefined8 param_1)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d67b84();
  uVar3 = FUN_00d9e390();
  lVar4 = FUN_00d63f30(param_1);
  plVar5 = (long *)FUN_00d2945c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_AdagioArcaneFire_Impact");
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  lVar4 = FUN_00d65010(param_1);
  plVar5 = (long *)FUN_00d2945c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  lVar6 = FUN_00d66d28(param_1);
  pcVar1 = "Effect_Adagio_Fire_DOT_Minion";
  if ((*(uint *)(lVar6 + 0x2f4) & 1) != 0) {
    pcVar1 = "Effect_Adagio_Fire_DOT_Hero";
  }
  (**(code **)(*plVar5 + 0x48))(plVar5,pcVar1);
  plVar5 = (long *)FUN_00d2df94(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,"Sound_Adagio_Ability_A_Fire");
  lVar4 = FUN_00d09310();
  FUN_00d0953c(*(undefined4 *)(lVar4 + 0xb0));
  (**(code **)(*plVar5 + 0x28))(plVar5);
  lVar4 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar4 + 0x10);
  plVar5 = (long *)FUN_00d2945c(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x60))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_AdagioArcaneFire_Impact");
  (**(code **)(*plVar5 + 0x78))(plVar5,1);
  uVar7 = FUN_00d64d7c(param_1);
  fVar8 = (float)FUN_00d59f54(uVar3,0,3,0x19,0);
  lVar4 = FUN_00d4891c(1.0 / fVar8,uVar7,0);
  FUN_00d39534(lVar4 + 0x10);
  plVar5 = (long *)FUN_00d2b818(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  (**(code **)(*plVar5 + 0x38))(plVar5,"BurnDamagePerSecond",0);
  uVar3 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar3,6);
  uVar3 = FUN_00d4bc24();
  lVar4 = FUN_00d4bc58(uVar3,0x10);
  FUN_00e0c91c(lVar4 + 0x10);
  plVar5 = (long *)FUN_00d2a464(lVar4 + 0x10);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x30))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x40))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))();
  local_58 = FUN_00e0c56c;
  local_50 = 3;
  (**(code **)(*plVar5 + 0x10))(plVar5,2,&local_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0c56c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




float FUN_00e0c578(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)FUN_00d59f54(lVar1,0,7,0x19,0);
  fVar3 = (float)FUN_00d59f54(lVar1,0,8,0x19,0);
  return fVar2 + fVar3 * *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
}




void FUN_00e0c5e4(undefined8 *param_1,float *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  uVar1 = FUN_00d426b0(*param_1);
  uVar2 = FUN_00d44be0(uVar1,PTR_s_Buff_Adagio_Talent_GiftOfLife_02bf1ca8);
  fVar3 = 0.0;
  if ((uVar2 & 1) != 0) {
    fVar3 = (float)FUN_00e0c578(param_1);
    fVar4 = (float)FUN_00d5a3d0(uVar1,DAT_0320e3e0,0,9);
    fVar3 = fVar3 * fVar4;
  }
  *param_2 = fVar3;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00e0c674(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_AdagioFortunesSmile_buff");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_00d657dc(param_1);
  plVar4 = (long *)FUN_00d2dfe4(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x30))(plVar4,5,FUN_00e0c5e4);
  lVar3 = FUN_00d64080(param_1);
  FUN_00d39534(lVar3 + 0x10);
  plVar4 = (long *)FUN_00d39584(lVar3 + 0x10);
  local_48 = FUN_00e0c578;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  uVar5 = FUN_00d64d7c(param_1);
  fVar6 = (float)FUN_00d59f54(uVar2,0,3,0x19,0);
  lVar3 = FUN_00d4891c(1.0 / fVar6,uVar5,0);
  FUN_00d39534(lVar3 + 0x10);
  plVar4 = (long *)FUN_00d39584(lVar3 + 0x10);
  local_48 = FUN_00e0c800;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x38))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0c800(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,9,0x19,0);
  return;
}




void FUN_00e0c814(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  local_38[0] = FUN_00d59f54(uVar2,0,10,0x19,0);
  local_30 = 1;
  FUN_00d42c70(param_1,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0c88c(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e0c8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,5,FUN_00e0c96c);
  return;
}




void FUN_00e0c8bc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  FUN_00d4403c(param_1,1);
  lVar1 = FUN_00d65010(param_1);
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Adagio_WithdrawRunes");
                    /* WARNING: Could not recover jumptable at 0x00e0c918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  return;
}




void FUN_00e0c91c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a09fc();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_00e0c96c(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d426b0(*param_1);
  uVar2 = FUN_00d59f54(uVar1,2,4,0x19,0);
  *param_2 = uVar2;
  *param_3 = uVar2;
  return;
}




float FUN_00e0c9b0(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)thunk_FUN_00d086f0(param_1,0,1);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar3 = (*(float *)(lVar1 + 0x1ac) + 1.0) *
          (*(float *)(lVar1 + 0x44) + *(float *)(lVar1 + 0xf8) * (*(float *)(lVar1 + 0x260) + 1.0));
  if (DAT_031b831c <= fVar3) {
    fVar3 = DAT_031b831c;
  }
  fVar4 = DAT_031b825c;
  if (DAT_031b825c <= fVar3) {
    fVar4 = fVar3;
  }
  fVar3 = (float)thunk_FUN_00d086f0(param_1,4,1);
  fVar2 = fVar2 - fVar3 * fVar4;
  fVar3 = (float)thunk_FUN_00d086f0(param_1,5,1);
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  return fVar2;
}




void FUN_00e0ca68(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_98;
  undefined1 auStack_90 [88];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_98);
    lVar6 = FUN_00d66d28(local_98);
    puVar3 = PTR_s_Buff_Alpha_Rebooting_02bf01e8;
    uVar1 = *(undefined4 *)(lVar6 + 0x260);
    uVar7 = FUN_00e0c9b0();
    uVar4 = FUN_00ceb350();
    FUN_00cfe864(uVar7,0,0,auStack_90,uVar1,uVar1,puVar3,uVar4,1,0,0);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0cb28(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_78;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69224(param_1,&local_78);
    lVar3 = FUN_00d66d28(local_78);
    fVar5 = (float)thunk_FUN_00d086f0(lVar3,1,1);
    fVar6 = (float)thunk_FUN_00d086f0(lVar3,2,1);
    lVar4 = *(long *)(lVar3 + 0x40);
    fVar7 = (*(float *)(lVar4 + 0x240) + 1.0) *
            (*(float *)(lVar4 + 0xd8) +
            *(float *)(lVar4 + 0x18c) * (*(float *)(lVar4 + 0x2f4) + 1.0));
    if (DAT_031b83b0 <= fVar7) {
      fVar7 = DAT_031b83b0;
    }
    fVar8 = DAT_031b82f0;
    if (DAT_031b82f0 <= fVar7) {
      fVar8 = fVar7;
    }
    FUN_00d041e4(fVar5 + (fVar6 - fVar5) * ((fVar8 + -1.0) / 11.0),auStack_70,
                 *(undefined4 *)(lVar3 + 0x260),0x2c,0,1,0xffffffff);
    FUN_00ce20fc(auStack_70);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0cc50(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 local_f0;
  undefined1 auStack_e8 [48];
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69224(param_1,&local_f0);
    lVar4 = FUN_00d66d28(local_f0);
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    *(byte *)(lVar4 + 0x303) = *(byte *)(lVar4 + 0x303) | 2;
    thunk_FUN_00d086f0(lVar4,1,1);
    FUN_00d041e4(auStack_80,uVar1,0x2c,0,1,0xffffffff);
    FUN_00ce20fc(auStack_80);
    FUN_00d041e4(0x42c80000,auStack_b8,*(undefined4 *)(lVar4 + 0x260),0x2b,0,1,0xffffffff);
    FUN_00ce20fc(auStack_b8);
    FUN_00d043c0(0x42c80000,auStack_e8,*(undefined4 *)(lVar4 + 0x260),3,1);
    FUN_00ce20fc(auStack_e8);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0cd60(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c0 [88];
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00e606cc();
  FUN_00d04e08(auStack_68,*(undefined4 *)(param_1 + 0x260),0xcd8619d8,1);
  FUN_00ce20fc(auStack_68);
  puVar3 = PTR_s_Buff_Alpha_Reboot_Cooldown_02bf01f0;
  uVar1 = *(undefined4 *)(param_1 + 0x260);
  uVar4 = FUN_00ceb350();
  FUN_00cfe864(uVar5,0,0,auStack_c0,uVar1,uVar1,puVar3,uVar4,1,0,0);
  FUN_00ce20fc(auStack_c0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0ce24(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69224(param_1,&local_30);
    lVar3 = FUN_00d66d28(local_30);
    lVar4 = *(long *)(lVar3 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    uVar2 = FUN_00d6bbac(lVar4,DAT_031b8210,0);
    if ((uVar2 & 1) == 0) {
      FUN_00e0cd60(lVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0cecc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float *local_88;
  undefined1 auStack_80 [4];
  int local_7c;
  undefined8 local_78;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69a50(param_1,&local_78,&local_7c,auStack_80,&local_88);
    lVar3 = FUN_00d66d28(local_78);
    if (local_7c == 2) {
      fVar5 = *local_88;
      fVar4 = (float)thunk_FUN_00d086f0(lVar3,3,1);
      FUN_00d041e4(fVar5 * fVar4,auStack_70,*(undefined4 *)(lVar3 + 0x260),0x2c,1,0,0xffffffff);
      FUN_00ce20fc(auStack_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0cf98(undefined8 *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = FUN_00d66d28(*param_1);
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,1,1);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,2,1);
  lVar1 = *(long *)(lVar1 + 0x40);
  fVar4 = (*(float *)(lVar1 + 0x240) + 1.0) *
          (*(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0))
  ;
  if (DAT_031b83b0 <= fVar4) {
    fVar4 = DAT_031b83b0;
  }
  fVar5 = DAT_031b82f0;
  if (DAT_031b82f0 <= fVar4) {
    fVar5 = fVar4;
  }
  *param_2 = fVar2 + (fVar3 - fVar2) * ((fVar5 + -1.0) / 11.0);
  return;
}

