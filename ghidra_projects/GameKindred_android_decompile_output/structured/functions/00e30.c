// functions/00e30 — 11 functions
#include "libGameKindred.h"




void FUN_00e303c4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  lVar2 = FUN_00d67b78();
  FUN_00d5cf60();
  lVar3 = FUN_00d9e390();
  iVar1 = FUN_00d67bf4(param_1);
  if (0 < iVar1) {
    iVar6 = 0;
    iVar5 = 0;
    do {
      lVar4 = FUN_00d67bdc(param_1,iVar5);
      fVar13 = *(float *)(*(long *)(lVar4 + 0x40) + 0x308);
      lVar4 = FUN_00d67bdc(param_1,iVar5);
      lVar4 = *(long *)(lVar4 + 0x40);
      iVar5 = iVar5 + 1;
      fVar7 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
              (*(float *)(lVar4 + 0x38) +
              *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
      if (DAT_031ba820 <= fVar7) {
        fVar7 = DAT_031ba820;
      }
      fVar8 = DAT_031ba760;
      if (DAT_031ba760 <= fVar7) {
        fVar8 = fVar7;
      }
      iVar6 = iVar6 + (uint)(fVar13 < fVar8);
    } while (iVar1 != iVar5);
    if (iVar6 != 0) {
      lVar2 = *(long *)(lVar2 + 0x40);
      fVar7 = (*(float *)(lVar2 + 0x1a0) + 1.0) *
              (*(float *)(lVar2 + 0x38) +
              *(float *)(lVar2 + 0xec) * (*(float *)(lVar2 + 0x254) + 1.0));
      fVar13 = *(float *)(lVar2 + 0x308);
      if (DAT_031ba820 <= fVar7) {
        fVar7 = DAT_031ba820;
      }
      fVar8 = DAT_031ba760;
      if (DAT_031ba760 <= fVar7) {
        fVar8 = fVar7;
      }
      fVar7 = (float)FUN_00d59f54(lVar3,0,5,0x19,0);
      fVar9 = (float)FUN_00d59f54(lVar3,0,7,0x19,0);
      fVar10 = (float)FUN_00d59f54(lVar3,0,9,0x19,0);
      fVar14 = *(float *)(*(long *)(lVar3 + 0x40) + 0xec);
      fVar11 = (float)FUN_00d59f54(lVar3,0,10,0x19,0);
      fVar12 = (float)FUN_00d59f54(lVar3,0,0x11,0x19,0);
      *param_3 = fVar12 * ((fVar7 * (fVar13 / fVar8)) / (fVar9 * (float)iVar6)) *
                          (fVar10 + fVar14 * fVar11);
    }
  }
  return;
}




void FUN_00e305bc(undefined8 param_1,long param_2,float *param_3)

{
  undefined8 uVar1;
  float fVar2;
  
  FUN_00d67b78();
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  fVar2 = (float)FUN_00d59f54(uVar1,0,0xb,0x19,0);
  *param_3 = fVar2;
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar2 = (float)FUN_00d59f54(uVar1,0,0xc,0x19,0);
    *param_3 = fVar2 * *param_3;
  }
  return;
}




void FUN_00e30638(undefined8 param_1)

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
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [96];
  undefined1 auStack_b8 [96];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  lVar5 = FUN_00d9e390();
  FUN_00d67b04(0x3dcccccd,param_1);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar7 + 0x38 + (ulong)*(uint *)(lVar7 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar7 + 0xf8);
    *(code **)(lVar7 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2fea0;
    *(uint *)(lVar7 + 0xf8) = uVar1 + 1;
  }
  uVar8 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_b8,uVar8);
  FUN_00d3e534();
  uVar8 = FUN_00e310a8();
  FUN_00d42654(auStack_b8,uVar8);
  FUN_00d3e534();
  uVar8 = FUN_00d2cb84();
  FUN_00d42654(auStack_b8,uVar8);
  FUN_00d3e888(0xbf800000,0,0,uVar8,PTR_s_Buff_Lyra_SpiritFlame_DetonateAv_02bf0c30,1,0xffffffff,0,0
              );
  FUN_00d3e534();
  uVar8 = FUN_00d2a6c0();
  FUN_00d42654(auStack_b8,uVar8);
  lVar7 = FUN_00d64980(param_1);
  lVar7 = lVar7 + 0x10;
  FUN_00e0c91c(lVar7);
  plVar9 = (long *)FUN_00d2cfcc(lVar7);
  (**(code **)(*plVar9 + 0x30))(plVar9,PTR_s_Buff_Lyra_SpiritFlame_DetonateAv_02bf0c30);
  plVar9 = (long *)FUN_00d2cc5c(lVar7);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x38))(plVar9,"Sound_Lyra_Ability_A_Detonation");
  lVar10 = FUN_00d09310();
  FUN_00d09c20(*(undefined4 *)(lVar10 + 0x2f8));
  plVar9 = (long *)(**(code **)(*plVar9 + 0x28))(plVar9);
  (**(code **)(*plVar9 + 0x38))();
  plVar9 = (long *)FUN_00d2945c(lVar7);
  plVar9 = (long *)(**(code **)(*plVar9 + 0x60))();
  plVar9 = (long *)(**(code **)(*plVar9 + 0x48))(plVar9,"Effect_Lyra_A_Explosion_E");
  plVar9 = (long *)(**(code **)(*plVar9 + 0x50))(plVar9,"Effect_Lyra_A_Explosion_A");
  (**(code **)(*plVar9 + 0x80))(plVar9,0);
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_130,lVar7 + 0x18);
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4dabc(auStack_b8,1);
  FUN_00d4daf4(auStack_b8,1,0,1,0);
  FUN_00d59f54(lVar5,0,4,0x19,0);
  FUN_00d4db48(auStack_b8,&DAT_03218f30);
  FUN_00d3e534();
  uVar8 = FUN_00d3940c();
  FUN_00d42654(auStack_130,uVar8);
  FUN_00d3fad8(uVar8,auStack_b8,0,1);
  FUN_00d3e534();
  uVar8 = FUN_00d2a5e0();
  FUN_00d42654(auStack_130,uVar8);
  FUN_00d402f8(uVar8,FUN_00e303c4);
  FUN_00d3e534();
  uVar8 = FUN_00d2cb84();
  FUN_00d42654(auStack_130,uVar8);
  puVar3 = PTR_s_Buff_Lyra_SpiritFlame_SpeedBoost_02bf0c38;
  uVar4 = FUN_00d59f54(lVar5,0,0x10,0x19,0);
  FUN_00d3e888(uVar4,0,0,uVar8,puVar3,1,*(undefined4 *)(lVar5 + 0x260),0,0);
  FUN_00d3e534();
  uVar8 = FUN_00d2a6c0();
  FUN_00d42654(auStack_130,uVar8);
  FUN_00d4d9e8(auStack_118);
  FUN_00d4dabc(auStack_118,0x40000);
  FUN_00d4daf4(auStack_118,0,1,0,0);
  FUN_00d59f54(lVar5,0,4,0x19,0);
  FUN_00d4db48(auStack_118,&DAT_03218f30);
  FUN_00d3e534();
  uVar8 = FUN_00d3940c();
  FUN_00d42654(auStack_130,uVar8);
  FUN_00d3fad8(uVar8,auStack_118,0,1);
  FUN_00d3e534();
  uVar8 = FUN_00e29370();
  FUN_00d42654(auStack_130,uVar8);
  FUN_00d403e0(uVar8,FUN_00e305bc,1,2,0);
  FUN_00d3e534();
  uVar8 = FUN_00d2a6c0();
  FUN_00d42654(auStack_130,uVar8);
  FUN_00d3e534();
  uVar8 = FUN_00d29db0();
  FUN_00d42654(auStack_130,uVar8);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_b8,lVar5 + 0x30);
  FUN_00d3e534();
  uVar8 = FUN_00d294ac();
  FUN_00d42654(auStack_b8,uVar8);
  uVar8 = FUN_00d47d9c(uVar8);
  uVar8 = FUN_00da2040(uVar8,"Effect_Lyra_A_E");
  FUN_00da2048(uVar8,"Effect_Lyra_A_A");
  FUN_00d3e534();
  uVar11 = FUN_00e11d14();
  FUN_00d42654(auStack_b8,uVar11);
  lVar5 = FUN_00d09310();
  uVar8 = FUN_00d09c20(*(undefined4 *)(lVar5 + 0x2f8));
  FUN_00d3ecf4(0x3f800000,uVar8,uVar11,"Sound_Lyra_Ability_A_Loop",0,1);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e30af8(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_00d6a078();
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  *param_3 = "CenterBody";
  return;
}




void FUN_00e30b30(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar4 = FUN_00d29584();
  FUN_00d42654(auStack_50,uVar4);
  FUN_00d59f54(uVar2,0,0xf,0x19,0);
  FUN_00d472ec(uVar4,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e30bd8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"CenterBody");
  uVar3 = FUN_00da2040(uVar3,"Effect_Lyra_A_Heal");
  FUN_00da20cc(uVar3,FUN_00e30af8);
  uVar3 = FUN_00da20b8(0);
  FUN_00da20dc(uVar3,1);
  FUN_00d3e534();
  uVar4 = FUN_00e11d14();
  FUN_00d42654(auStack_50,uVar4);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09c20(*(undefined4 *)(lVar2 + 0x2f8));
  FUN_00d3ecf4(0x3f800000,uVar3,uVar4,"Sound_Lyra_Ability_A_Healing",0,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e30cf0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_50,lVar2 + 0x30);
  FUN_00d3e534();
  uVar3 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar3);
  uVar3 = FUN_00d47dc4(uVar3,"CenterBody");
  uVar3 = FUN_00da2040(uVar3,"Effect_Lyra_A_Damage");
  FUN_00da20cc(uVar3,FUN_00e30af8);
  uVar3 = FUN_00da20b8(0);
  FUN_00da20dc(uVar3,1);
  FUN_00d3e534();
  uVar4 = FUN_00e11d14();
  FUN_00d42654(auStack_50,uVar4);
  lVar2 = FUN_00d09310();
  uVar3 = FUN_00d09c20(*(undefined4 *)(lVar2 + 0x2f8));
  FUN_00d3ecf4(0x3f800000,uVar3,uVar4,"Sound_Lyra_Ability_A_Hurting",0,1);
  lVar2 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e30e08(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__Lyra__A_02bef188,PTR_s_Ability__Lyra__A_Detonate_02bef190);
  lVar1 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00e213ac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e30e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Ability__Lyra__A_02bef188);
  return;
}




undefined8 * FUN_00e30e68(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    FUN_00d3f9a0(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




void FUN_00e30f38(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_009a273c();
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




undefined8 * FUN_00e30f88(long param_1)

{
  uint uVar1;
  ushort uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x4c010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    lVar3 = param_1 + (ulong)uVar2 * 0x98;
    if (uVar2 == *(ushort *)(param_1 + 0x4c012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *(ushort *)(lVar3 + 0x10);
    }
    *(ushort *)(param_1 + 0x4c010) = uVar2;
    puVar4 = (undefined8 *)(lVar3 + 0x17U & 0xfffffffffffffff8);
    *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + 1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    FUN_00e5d36c(puVar4);
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}

