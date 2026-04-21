// functions/00e10 — 11 functions
#include "libGameKindred.h"




void FUN_00e10084(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a111c();
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




void FUN_00e100d4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long *local_88;
  undefined8 local_80;
  int local_78 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_80,&local_88);
  lVar3 = FUN_00d66d28(local_80);
  uVar4 = FUN_00daa58c(local_88,lVar3);
  if ((uVar4 & 1) == 0) {
    uVar4 = FUN_00daa578(local_88,lVar3);
    if ((((uVar4 & 1) != 0) && ((*(byte *)((long)local_88 + 0xc) >> 2 & 1) != 0)) &&
       (iVar2 = FUN_00d5c238(lVar3,1), iVar2 != 0)) {
      uVar6 = 6;
      if (*(char *)((long)local_88 + 0xe) != '\0') {
        uVar6 = 7;
      }
      fVar11 = (float)FUN_00d59f54(lVar3,1,uVar6,0x19,0);
      fVar14 = (float)FUN_00d59f54(lVar3,1,0,0x19,0);
      if ((*local_88 != 0) && (thunk_FUN_00d9ff34(local_78), local_78[0] != DAT_031afd40)) {
        uVar5 = 0x811c9dc5;
        uVar9 = (uint)(byte)*PTR_s_Ability__Ardan__B_02bee550;
        pbVar8 = PTR_s_Ability__Ardan__B_02bee550;
        if (*PTR_s_Ability__Ardan__B_02bee550 != 0) {
          do {
            uVar10 = (uint)pbVar8[1];
            uVar5 = (uVar5 ^ uVar9) * 0x1000193;
            uVar9 = uVar10;
            pbVar8 = pbVar8 + 1;
          } while (uVar10 != 0);
        }
        FUN_00d04e08(-(fVar11 * fVar14),local_78,*(undefined4 *)(lVar3 + 0x260),uVar5,0);
        FUN_00ce20fc(local_78);
      }
    }
  }
  else {
    lVar7 = *(long *)(lVar3 + 0x40);
    fVar11 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
             (*(float *)(lVar7 + 0x38) +
             *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0));
    fVar14 = *(float *)(lVar7 + 0x308);
    if (DAT_031b8680 <= fVar11) {
      fVar11 = DAT_031b8680;
    }
    fVar12 = DAT_031b85c0;
    if (DAT_031b85c0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar13 = (float)thunk_FUN_00d086f0(lVar3,0,1);
    fVar13 = fVar13 * (fVar12 - fVar14);
    fVar11 = (float)thunk_FUN_00d086f0(lVar3,1,1);
    fVar11 = fVar11 * *(float *)((long)local_88 + 0x54);
    if (fVar13 <= fVar11) {
      fVar11 = fVar13;
    }
    FUN_00daa4a4(fVar11,local_78,(int)local_88[2],*(undefined4 *)(lVar3 + 0x260),0xffffffff,
                 0xffffffff,0xee,0xffffffff);
    FUN_00910c0c(local_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e10308(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 local_98;
  undefined1 auStack_90 [56];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_98);
  lVar3 = FUN_00d66d28(local_98);
  lVar4 = *(long *)(lVar3 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  if (((DAT_031b8588 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_031b8588), iVar2 != 0)) {
    DAT_031b8580 = FUN_00d5401c(lVar4,PTR_s_Ability__Ardan__B_02bee550);
    __cxa_guard_release(&DAT_031b8588);
  }
  iVar2 = FUN_00d535a4(lVar4,DAT_031b8580);
  if (iVar2 == 0) {
    if (ABS(*(float *)(*(long *)(lVar3 + 0x40) + 0xe4) + -10.0) < 1.1920929e-07) goto LAB_00e104a8;
    FUN_00d041e4(0x41200000,auStack_90,*(undefined4 *)(lVar3 + 0x260),0x2b,0,1,0xffffffff);
  }
  else {
    uVar6 = FUN_00d539d0(lVar4,DAT_031b8580);
    fVar5 = (float)FUN_00d539e8(lVar4,DAT_031b8580);
    lVar4 = *(long *)(lVar3 + 0x40);
    fVar7 = (float)uVar6;
    fVar5 = fVar7 * (1.0 - fVar5 / fVar7);
    if (43.0 < fVar5) {
      fVar5 = 43.0;
    }
    if (1.1920929e-07 <= ABS(*(float *)(lVar4 + 0xe4) - fVar7)) {
      FUN_00d041e4(uVar6,auStack_90,*(undefined4 *)(lVar3 + 0x260),0x2b,0,1,0xffffffff);
      FUN_00ce20fc(auStack_90);
      lVar4 = *(long *)(lVar3 + 0x40);
    }
    if (ABS(*(float *)(lVar4 + 0x314) - fVar5) < 1.1920929e-07) goto LAB_00e104a8;
    FUN_00d043c0(fVar5,auStack_90,*(undefined4 *)(lVar3 + 0x260),3,1);
  }
  FUN_00ce20fc(auStack_90);
LAB_00e104a8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e10514(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = FUN_00d66d28(*param_1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = *(float *)(lVar2 + 0x40);
  fVar6 = (*(float *)(lVar2 + 0x1a8) + 1.0) *
          (fVar3 + *(float *)(lVar2 + 0xf4) * (*(float *)(lVar2 + 0x25c) + 1.0));
  if (DAT_031b8688 <= fVar6) {
    fVar6 = DAT_031b8688;
  }
  fVar7 = DAT_031b85c8;
  if (DAT_031b85c8 <= fVar6) {
    fVar7 = fVar6;
  }
  fVar4 = (float)thunk_FUN_00d086f0(lVar1,2,1);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar8 = *(float *)(lVar2 + 0x44);
  fVar6 = (*(float *)(lVar2 + 0x1ac) + 1.0) *
          (fVar8 + *(float *)(lVar2 + 0xf8) * (*(float *)(lVar2 + 0x260) + 1.0));
  if (DAT_031b868c <= fVar6) {
    fVar6 = DAT_031b868c;
  }
  fVar5 = DAT_031b85cc;
  if (DAT_031b85cc <= fVar6) {
    fVar5 = fVar6;
  }
  fVar6 = (float)thunk_FUN_00d086f0(lVar1,3,1);
  return fVar4 * (fVar7 - fVar3) + fVar6 * (fVar5 - fVar8);
}




void FUN_00e1060c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar9 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar9 * 8 + 0x40) = FUN_00e100d4;
    *(uint *)(lVar5 + 0xf8) = uVar9 + 1;
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar9 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar9 * 8 + 0x40) = FUN_00e10308;
    *(uint *)(lVar5 + 0xf8) = uVar9 + 1;
    FUN_00d67b04(0x3dcccccd,param_1);
  }
  uVar6 = FUN_00d65548(param_1);
  lVar5 = FUN_00d4891c(0x3f800000,uVar6,0);
  plVar7 = (long *)FUN_00d2a110(lVar5 + 0x10);
  local_48 = FUN_00e10514;
  local_40 = 4;
  (**(code **)(*plVar7 + 0x30))(plVar7,5,1,&local_48);
  uVar6 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar6,3);
  uVar6 = FUN_00d4bc10();
  lVar5 = FUN_00d4bc60(uVar6,"Ability__Ardan__B");
  lVar5 = FUN_00d29e8c(lVar5 + 0x10);
  lVar8 = FUN_00e11be0(lVar5 + 0x10);
  if (PTR_s_Ability__Ardan__B_02bee550 == (undefined *)0x0) {
    uVar9 = 0;
  }
  else {
    uVar11 = (uint)(byte)*PTR_s_Ability__Ardan__B_02bee550;
    uVar9 = 0x811c9dc5;
    pbVar10 = PTR_s_Ability__Ardan__B_02bee550;
    if (*PTR_s_Ability__Ardan__B_02bee550 != 0) {
      do {
        uVar12 = (uint)pbVar10[1];
        uVar9 = (uVar9 ^ uVar11) * 0x1000193;
        uVar11 = uVar12;
        pbVar10 = pbVar10 + 1;
      } while (uVar12 != 0);
    }
  }
  *(uint *)(lVar8 + 8) = uVar9;
  plVar7 = (long *)FUN_00d2b728(lVar5 + 0x88);
  local_48 = FUN_00e1081c;
  local_40 = 3;
  (**(code **)(*plVar7 + 0x38))(plVar7,&local_48);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e1081c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00e10830(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) == 0) {
    lVar2 = FUN_00d63f30(param_1);
    plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_BackPack");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ardan_Gift_Proc");
    (**(code **)(*plVar3 + 0x78))(plVar3,1);
    lVar2 = FUN_00d65e5c(param_1);
    plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_BackPack");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Ardan_Gift_Proc");
    (**(code **)(*plVar3 + 0x78))(plVar3,1);
  }
  return;
}




void FUN_00e108ec(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  uVar5 = FUN_00d59f54(uVar2,2,5,0x19,0);
  FUN_00d67d04(param_1);
  lVar3 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Ardan_Arena_Warning_E");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Ardan_Arena_Warning_A");
  local_40 = 1;
  local_48[0] = uVar5;
  (**(code **)(*plVar4 + 0x60))(plVar4,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e109c4(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_88 [4];
  float local_78 [4];
  undefined8 local_68;
  undefined1 auStack_60 [40];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_68);
  FUN_00d66d28(local_68);
  FUN_00d5cf60();
  uVar4 = FUN_00d9e390();
  lVar5 = FUN_00d66d28(local_68);
  if (0.0 < *(float *)(*(long *)(lVar5 + 0x40) + 0x308)) {
    FUN_00d55794(lVar5,local_78,0);
    FUN_00d55794(uVar4,local_88,0);
    fVar6 = (float)FUN_00d59f54(uVar4,2,4,0x19,0);
    fVar7 = (float)local_78._4_8_ - (float)local_88._4_8_;
    fVar8 = SUB84(local_78._4_8_,4) - SUB84(local_88._4_8_,4);
    if (fVar6 * fVar6 <
        (local_78[0] - local_88[0]) * (local_78[0] - local_88[0]) + fVar7 * fVar7 + fVar8 * fVar8) {
      uVar1 = *(undefined4 *)(lVar5 + 0x260);
      uVar3 = FUN_00d66d34(local_68);
      FUN_00d009d0(auStack_60,uVar1,uVar3);
      FUN_00ce20fc(auStack_60);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e10adc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d5cf60(uVar2);
  uVar2 = FUN_00d9e390();
  FUN_00d4dabc(param_2,1);
  FUN_00d4daf4(param_2,0,1,0,uVar2);
  fVar3 = (float)FUN_00d59f54(uVar2,2,4,0x19,0);
  FUN_00d4db48(fVar3 + 0.75,param_2,auStack_48);
  fVar3 = (float)FUN_00d59f54(uVar2,2,4,0x19,0);
  FUN_00d4db94(fVar3 + -0.75,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e10bc4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  float fVar10;
  undefined8 uVar11;
  code *local_80;
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  lVar5 = FUN_00d9e390();
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar7 + 0x38 + (ulong)*(uint *)(lVar7 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar7 + 0xf8);
    *(code **)(lVar7 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e109c4;
    *(uint *)(lVar7 + 0xf8) = uVar1 + 1;
    FUN_00d67b04(0x3e4ccccd,param_1);
  }
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_80,lVar7 + 0x30);
  FUN_00d3e534();
  uVar8 = FUN_00e11c3c();
  FUN_00d42654(&local_80,uVar8);
  FUN_00d59f54(lVar5,2,4,0x19,0);
  uVar8 = FUN_00d41c0c(uVar8);
  FUN_00d41c30(uVar8,1);
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarA");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarB");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarC");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarD");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarE");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarF");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarG");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarH");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarI");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47dec(uVar8,"Bone_PillarJ");
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Side_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Side");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47d9c(uVar8);
  uVar8 = FUN_00da2040(uVar8,"Effect_Ardan_Arena_Open_Enemy");
  FUN_00da2048(uVar8,"Effect_Ardan_Arena_Open");
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(&local_80,uVar8);
  uVar8 = FUN_00d47d9c(uVar8);
  FUN_00da2040(uVar8,"Effect_Ardan_Arena_AllSides");
  FUN_00d3e534();
  uVar8 = FUN_00e11d14();
  FUN_00d42654(&local_80,uVar8);
  lVar7 = FUN_00d09310();
  uVar11 = FUN_00d097dc(*(undefined4 *)(lVar7 + 0x17c));
  FUN_00d3ecf4(0x3f800000,uVar11,uVar8,"sound_ardanUltLoop",0,1);
  uVar8 = FUN_00d64d7c(param_1);
  lVar7 = FUN_00d4891c(0x3e4ccccd,uVar8,0);
  lVar7 = lVar7 + 0x10;
  uVar8 = FUN_00d39b7c(lVar7);
  uVar8 = FUN_00d9cef8(uVar8,FUN_00e10adc);
  FUN_00d9cb80(uVar8,PTR_s_Buff_Ardan_Arena_StunImmune_02bf02b8);
  plVar9 = (long *)FUN_00d2b818(lVar7);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x40))();
  (**(code **)(*plVar9 + 0x38))(plVar9,"Damage",2);
  plVar9 = (long *)FUN_00d2cf7c(lVar7);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_Stunned_02beb430);
  local_80 = FUN_00daefd8;
  local_78 = 3;
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,&local_80);
  (**(code **)(*plVar9 + 0x30))(plVar9,*(undefined4 *)(lVar5 + 0x260));
  plVar9 = (long *)FUN_00d2cf7c(lVar7);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_Ardan_Arena_Stunned_02bf02c0);
  local_80 = FUN_00daefd8;
  local_78 = 3;
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,&local_80);
  (**(code **)(*plVar9 + 0x30))(plVar9,*(undefined4 *)(lVar5 + 0x260));
  plVar9 = (long *)FUN_00d2cf7c(lVar7);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_Ardan_Arena_StunImmune_02bf02b8);
  fVar10 = (float)FUN_00d59f54(lVar5,2,2,0x19,0);
  local_80 = (code *)CONCAT44(local_80._4_4_,fVar10 + 1.0);
  local_78 = 1;
  plVar9 = (long *)(**(code **)(*plVar9 + 0x18))(plVar9,&local_80);
  (**(code **)(*plVar9 + 0x30))(plVar9,*(undefined4 *)(lVar5 + 0x260));
  uVar8 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_80,uVar8);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    FUN_00d3e534();
    uVar8 = FUN_00d2a504();
    FUN_00d42654(&local_80,uVar8);
    FUN_00d3e534();
    uVar8 = FUN_00d2cb84();
    FUN_00d42654(&local_80,uVar8);
    puVar3 = PTR_s_Buff_DelayedKill_02beb3e0;
    uVar11 = FUN_00d59f54(lVar5,2,3,0x19,0);
    FUN_00d3e888(uVar11,0,0,uVar8,puVar3,1,0xffffffff,0,0);
    FUN_00d3e534();
    uVar8 = FUN_00d2cb84();
    FUN_00d42654(&local_80,uVar8);
    puVar3 = PTR_s_Buff_GloballyVisible_02bebad8;
    uVar11 = FUN_00d59f54(lVar5,2,3,0x19,0);
    FUN_00d3e888(uVar11,0,0,uVar8,puVar3,1,0xffffffff,0,0);
    FUN_00d3e534();
    uVar8 = FUN_00d2a6c0();
    FUN_00d42654(&local_80,uVar8);
  }
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(&local_80,lVar5 + 0x18);
  FUN_00d3e534();
  uVar8 = FUN_00d29db0();
  FUN_00d42654(&local_80,uVar8);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

