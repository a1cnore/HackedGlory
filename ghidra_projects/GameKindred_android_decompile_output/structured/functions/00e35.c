// functions/00e35 — 20 functions
#include "libGameKindred.h"




void FUN_00e35108(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,2,1);
  return;
}




void FUN_00e35114(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,5,1);
  return;
}




void FUN_00e35120(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  local_38 = FUN_00e3519c;
  local_30 = 3;
  auVar3 = thunk_FUN_00d086f0(uVar2,3,1);
  FUN_00d42b30(auVar3,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e3519c(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,4,1);
  return;
}




float FUN_00e351a8(undefined8 *param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  fVar2 = (float)thunk_FUN_00d086f0(uVar1,1,0x13);
  fVar3 = (float)thunk_FUN_00d086f0(uVar1,2,1);
  return fVar2 / fVar3;
}




void FUN_00e351fc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3f000000,uVar2,0);
  FUN_00d39534(lVar3 + 0x10);
  plVar4 = (long *)FUN_00d2b818(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))();
  local_48 = FUN_00e351a8;
  local_40 = 4;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,1,3);
  lVar3 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar3 + 0x10);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Reim_Buff_Frosted");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e352f8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  FUN_00d59f54(uVar2,0,5,0x19,0);
  FUN_00d67d04(param_1);
  lVar3 = FUN_00d63f30(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2cc5c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Reim_Ability_A_Rise");
  lVar5 = FUN_00d09310();
  (**(code **)(*plVar4 + 0x28))(*(undefined4 *)(lVar5 + 0x27c),plVar4);
  plVar4 = (long *)FUN_00d2945c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Reim_A_Impact_EnemyFirst");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Reim_A_Impact_First");
  (**(code **)(*plVar4 + 0x80))(plVar4,0);
  plVar4 = (long *)FUN_00d2b778(lVar3);
  local_58 = FUN_00e354bc;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2b818(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage First Hit",0);
  lVar3 = FUN_00d64980(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2b778(lVar3);
  local_58 = FUN_00e354bc;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2b818(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  (**(code **)(*plVar4 + 0x38))(plVar4,"Damage Second Hit",0);
  FUN_00d2ab44(lVar3);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e354bc(undefined8 param_1)

{
  FUN_00d59f54(param_1,0,6,0x19,0);
  return;
}




void FUN_00e354d0(undefined8 param_1)

{
  FUN_00d42ce8(param_1,0x23,"Effect_Reim_Root",0);
  return;
}




float FUN_00e354e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float local_58 [4];
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,local_48,0);
  FUN_00d55794(param_3,local_58,0);
  fVar2 = (float)local_48._4_8_ - (float)local_58._4_8_;
  fVar3 = SUB84(local_48._4_8_,4) - SUB84(local_58._4_8_,4);
  fVar2 = (local_48[0] - local_58[0]) * (local_48[0] - local_58[0]) + fVar2 * fVar2 + fVar3 * fVar3;
  fVar3 = SQRT(fVar2);
  if (NAN(fVar3)) {
    fVar3 = sqrtf(fVar2);
  }
  fVar2 = (float)FUN_00d59f54(param_1,2,7,0x19,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1.0 - fVar3 / fVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e355c4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,7,0x19,0);
  return;
}




void FUN_00e355d8(undefined8 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_68 [4];
  float local_58 [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d66d28(*param_1);
  FUN_00d55794(uVar3,local_58,0);
  FUN_00d55794(param_2,local_68,0);
  fVar6 = (float)local_58._4_8_ - (float)local_68._4_8_;
  fVar7 = SUB84(local_58._4_8_,4) - SUB84(local_68._4_8_,4);
  fVar6 = (local_58[0] - local_68[0]) * (local_58[0] - local_68[0]) + fVar6 * fVar6 + fVar7 * fVar7;
  fVar7 = SQRT(fVar6);
  if (NAN(fVar7)) {
    fVar7 = sqrtf(fVar6);
  }
  fVar6 = (float)FUN_00d59f54(uVar2,2,9,0x19,0);
  if (fVar6 <= fVar7) {
    fVar4 = (float)FUN_00d59f54(uVar2,2,2,0x19,0);
    fVar5 = (float)FUN_00d59f54(uVar2,2,7,0x19,0);
    fVar6 = (fVar4 + -1.0) * ((fVar7 - fVar6) / (fVar5 - fVar6)) + 1.0;
  }
  else {
    fVar6 = 1.0;
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar6);
  }
  return;
}




void FUN_00e35734(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,9,0x19,0);
  return;
}




float FUN_00e35748(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  uVar1 = FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  fVar3 = (float)FUN_00e354e4(uVar2,uVar1,param_2);
  fVar4 = (float)FUN_00d59f54(uVar2,2,6,0x19,0);
  fVar5 = (float)FUN_00d59f54(uVar2,2,5,0x19,0);
  return (1.0 - fVar3) * fVar4 + fVar3 * fVar5;
}




void FUN_00e357e4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  FUN_00d59f54(uVar2,2,4,0x19,0);
  FUN_00d67d04(param_1);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2cc5c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Reim_Ability_A_Swing");
  lVar5 = FUN_00d09310();
  FUN_00d09ad0(*(undefined4 *)(lVar5 + 0x284));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Reim_C_Enemy");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Reim_C");
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f800000);
  local_50 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,&local_58);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,1);
  (**(code **)(*plVar4 + 0x88))(plVar4,1);
  lVar3 = FUN_00d64980(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2cc5c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Sound_Reim_Ability_C_Impact");
  lVar5 = FUN_00d09310();
  FUN_00d09ad0(*(undefined4 *)(lVar5 + 0x284));
  (**(code **)(*plVar4 + 0x28))(plVar4);
  plVar4 = (long *)FUN_00d2b778(lVar3);
  local_58 = FUN_00e355c4;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2b818(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x40))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"Damage at Center",2);
  local_58 = FUN_00e355d8;
  local_50 = 5;
  (**(code **)(*plVar4 + 0x88))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Reim_C_Slow_02bf0df8);
  local_58 = FUN_00e35748;
  local_50 = 5;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  FUN_00d2ab44(lVar3);
  lVar3 = FUN_00d64980(param_1);
  plVar4 = (long *)FUN_00d2b778(lVar3 + 0x10);
  local_58 = FUN_00e35734;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Stunned_02beb430);
  local_58 = FUN_00e35aa0;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e35aa0(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,10,0x19,0);
  return;
}




void FUN_00e35ab4(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e35b18;
  local_30 = 3;
  FUN_00d42b30(0,0x3f000000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e35b18(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,8,0x19,0);
  return;
}




void FUN_00e35b2c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  ulong uVar14;
  float fVar15;
  long *local_b8;
  undefined8 local_b0;
  int local_a8 [12];
  int local_78 [12];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_b0,&local_b8);
  lVar5 = FUN_00d66d28(local_b0);
  if (local_b8[5] == lVar5) {
    if (((*(byte *)((long)local_b8 + 0xc) >> 2 & 1) != 0) &&
       ((*local_b8 == 0 || (thunk_FUN_00d9ff34(local_78), local_78[0] != DAT_031b1b3c)))) {
      uVar14 = thunk_FUN_00d086f0(lVar5,3,1);
      if (*(char *)((long)local_b8 + 0xe) != '\0') {
        fVar12 = (float)thunk_FUN_00d086f0(lVar5,4,1);
        uVar14 = (ulong)(uint)((float)uVar14 * fVar12);
      }
      if ((*(byte *)(local_b8[4] + 0x2f9) >> 3 & 1) != 0) {
        fVar12 = (float)thunk_FUN_00d086f0(lVar5,5,1);
        uVar14 = (ulong)(uint)((float)uVar14 * fVar12);
      }
      FUN_00d043c0(uVar14,local_78,*(undefined4 *)(lVar5 + 0x260),3,0);
      FUN_00ce20fc(local_78);
      iVar3 = FUN_00d5c238(lVar5,1);
      if (((iVar3 != 0) && (*local_b8 != 0)) &&
         (thunk_FUN_00d9ff34(local_a8), local_a8[0] != DAT_031b1b30)) {
        uVar4 = *(undefined4 *)(lVar5 + 0x260);
        uVar11 = 0x811c9dc5;
        uVar8 = (uint)(byte)*PTR_s_Ability__Rona__B_02bef450;
        pbVar7 = PTR_s_Ability__Rona__B_02bef450;
        if (*PTR_s_Ability__Rona__B_02bef450 != 0) {
          do {
            uVar9 = (uint)pbVar7[1];
            uVar11 = (uVar11 ^ uVar8) * 0x1000193;
            uVar8 = uVar9;
            pbVar7 = pbVar7 + 1;
          } while (uVar9 != 0);
        }
        fVar12 = (float)FUN_00d59f54(lVar5,1,10,0x19,0);
        FUN_00d04e08(-fVar12,local_a8,uVar4,uVar11,0);
        FUN_00ce20fc(local_a8);
      }
    }
    puVar2 = PTR_s_time_out_of_combat_02bf0e00;
    uVar4 = FUN_00e6a474(PTR_s_time_out_of_combat_02bf0e00);
    uVar4 = FUN_0091ed5c(puVar2,uVar4,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
    *puVar6 = 0xbf800000;
  }
  if (local_b8[4] == lVar5) {
    lVar10 = *(long *)(lVar5 + 0x40);
    fVar13 = *(float *)(local_b8 + 6);
    uVar4 = *(undefined4 *)(lVar5 + 0x260);
    fVar12 = (*(float *)(lVar10 + 0x1a0) + 1.0) *
             (*(float *)(lVar10 + 0x38) +
             *(float *)(lVar10 + 0xec) * (*(float *)(lVar10 + 0x254) + 1.0));
    if (DAT_031bada0 <= fVar12) {
      fVar12 = DAT_031bada0;
    }
    fVar15 = DAT_031bace0;
    if (DAT_031bace0 <= fVar12) {
      fVar15 = fVar12;
    }
    fVar12 = (float)thunk_FUN_00d086f0(lVar5,6,1);
    FUN_00d043c0(fVar12 * (fVar13 / fVar15) * 100.0,local_78,uVar4,3,0);
    FUN_00ce20fc(local_78);
    puVar2 = PTR_s_time_out_of_combat_02bf0e00;
    uVar4 = FUN_00e6a474(PTR_s_time_out_of_combat_02bf0e00);
    uVar4 = FUN_0091ed5c(puVar2,uVar4,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
    *puVar6 = 0xbf800000;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e35e30(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 local_80;
  undefined1 auStack_78 [48];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_80);
  puVar2 = PTR_s_time_out_of_combat_02bf0e00;
  uVar3 = FUN_00e6a474(PTR_s_time_out_of_combat_02bf0e00);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  pfVar4 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  fVar7 = 0.0;
  if (0.0 <= *pfVar4) {
    fVar7 = (float)FUN_00d67b0c(local_80);
    fVar7 = fVar7 + *pfVar4;
  }
  *pfVar4 = fVar7;
  lVar5 = FUN_00d66d28(local_80);
  fVar9 = *pfVar4;
  fVar7 = (float)thunk_FUN_00d086f0(lVar5,1,1);
  lVar6 = *(long *)(lVar5 + 0x40);
  if (fVar7 <= fVar9) {
    if (*(float *)(lVar6 + 0x314) <= 0.0) goto LAB_00e3600c;
    fVar7 = (float)thunk_FUN_00d086f0(lVar5,2,1);
    fVar7 = -fVar7;
  }
  else {
    fVar7 = (*(float *)(lVar6 + 0x1a8) + 1.0) *
            (*(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0xf4) * (*(float *)(lVar6 + 0x25c) + 1.0)
            );
    if (DAT_031bada8 <= fVar7) {
      fVar7 = DAT_031bada8;
    }
    fVar9 = DAT_031bace8;
    if (DAT_031bace8 <= fVar7) {
      fVar9 = fVar7;
    }
    fVar8 = (float)thunk_FUN_00d086f0(lVar5,7,1);
    lVar6 = *(long *)(lVar5 + 0x40);
    fVar7 = (*(float *)(lVar6 + 0x1ac) + 1.0) *
            (*(float *)(lVar6 + 0x44) + *(float *)(lVar6 + 0xf8) * (*(float *)(lVar6 + 0x260) + 1.0)
            );
    if (DAT_031badac <= fVar7) {
      fVar7 = DAT_031badac;
    }
    fVar10 = DAT_031bacec;
    if (DAT_031bacec <= fVar7) {
      fVar10 = fVar7;
    }
    fVar7 = (float)thunk_FUN_00d086f0(lVar5,8,1);
    fVar7 = fVar8 * fVar9 + 0.0 + fVar7 * fVar10;
  }
  if ((fVar7 != 0.0) && (!NAN(fVar7))) {
    uVar3 = *(undefined4 *)(lVar5 + 0x260);
    fVar9 = (float)FUN_00d67b0c(local_80);
    FUN_00d043c0(fVar7 * fVar9,auStack_78,uVar3,3,0);
    FUN_00ce20fc(auStack_78);
  }
LAB_00e3600c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

