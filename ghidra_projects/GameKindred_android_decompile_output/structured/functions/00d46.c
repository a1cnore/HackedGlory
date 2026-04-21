// functions/00d46 — 50 functions
#include "libGameKindred.h"




void thunk_FUN_00d468dc(void)

{
  return;
}




void thunk_FUN_00d468dc(void)

{
  return;
}




void thunk_FUN_00d468dc(void)

{
  return;
}




void FUN_00d46134(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2ccac(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d46160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,PTR_s_Ability__HeroPLU__EmpoweredAttac_02bef710);
  return;
}




void FUN_00d46164(undefined8 *param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float __x;
  float fVar6;
  float fVar7;
  undefined8 local_78;
  float local_70;
  undefined1 local_68 [8];
  float local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d66d28(*param_1);
  fVar3 = (float)FUN_00d59f54(uVar2,6,6,0x19,0);
  uVar4 = FUN_00d59f54(uVar2,6,5,0x19,0);
  *param_3 = uVar4;
  FUN_00d55794(uVar2,local_68,0);
  FUN_00d55794(param_2,&local_78,0);
  fVar6 = (float)local_78 - local_68._0_4_;
  fVar7 = (float)((ulong)local_78 >> 0x20) - local_68._4_4_;
  local_60 = local_70 - local_60;
  __x = fVar6 * fVar6 + fVar7 * fVar7 + local_60 * local_60;
  uVar2 = DAT_03218f68;
  fVar5 = DAT_03218f70;
  if (0.0001 <= __x) {
    fVar5 = SQRT(__x);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(__x);
    }
    uVar2 = CONCAT44(fVar7 / fVar5,fVar6 / fVar5);
    fVar5 = local_60 / fVar5;
  }
  *param_4 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar3 + (float)((ulong)local_78 >> 0x20),
                      (float)uVar2 * fVar3 + (float)local_78);
  *(float *)(param_4 + 1) = fVar3 * fVar5 + local_70;
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d462b8(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  lVar2 = lVar2 + 0x10;
  plVar3 = (long *)FUN_00d2945c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))();
  (**(code **)(*plVar3 + 0x48))(plVar3,"Effect_HeroPLU_Explosion");
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))
                             (plVar3,PTR_s_Buff_HeroPLU_EngineSelfExplosion_02bebbc8);
  local_58 = FUN_00d46468;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2b778(lVar2);
  local_58 = FUN_00d4647c;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d46878(lVar2);
  (**(code **)(*plVar3 + 0x30))(plVar3,FUN_00d46164);
  plVar3 = (long *)FUN_00d2b818(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x40))();
  local_58 = FUN_00d46490;
  local_50 = 3;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58,1,3);
  plVar3 = (long *)FUN_00d2cf7c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_58._0_4_ = 0x3f800000;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  plVar3 = (long *)FUN_00d2887c(lVar2);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Stunned_02beb430);
  local_58 = (code *)CONCAT44(local_58._4_4_,0x3f800000);
  local_50 = 1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d46468(undefined8 param_1)

{
  FUN_00d59f54(param_1,6,2,0x19,0);
  return;
}




void FUN_00d4647c(undefined8 param_1)

{
  FUN_00d59f54(param_1,6,3,0x19,0);
  return;
}




void FUN_00d46490(undefined8 param_1)

{
  FUN_00d59f54(param_1,6,4,0x19,0);
  return;
}




void FUN_00d464a4(void)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00d65010();
  uVar2 = FUN_00d45304(lVar1 + 0x10);
  FUN_00d9ba14(uVar2,"recovery lifetime");
  uVar2 = FUN_00d45f10(lVar1 + 0x10);
  FUN_00d9886c(uVar2,PTR_s_Ability__HeroPLU__C_02bef740,PTR_s_Ability__HeroPLU__C_Debris_02bef750);
  return;
}




void FUN_00d464f8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d5cf60();
  uVar3 = FUN_00d9e390();
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d4daf4(param_2,0,1,0,uVar3);
  FUN_00d4db48(0x40000000,param_2,auStack_48);
  FUN_00d4dabc(param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d4659c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d5cf60();
  uVar3 = FUN_00d9e390();
  FUN_00d55794(uVar2,auStack_48,0);
  FUN_00d4daf4(param_2,1,0,1,uVar3);
  FUN_00d4db48(0x40000000,param_2,auStack_48);
  FUN_00d4dabc(param_2,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d46640(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_58 [2];
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d67d04(0x41200000);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,1);
  uVar2 = FUN_00d31490(lVar3 + 0x10);
  FUN_00d9ca38(uVar2,FUN_00d4659c);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_HeroPLU_SmokeCloudSelfBuff_02bebbb8);
  local_58[0] = 0x3e4ccccd;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  uVar2 = FUN_00d64d7c(param_1);
  lVar3 = FUN_00d4891c(0x3dcccccd,uVar2,1);
  uVar2 = FUN_00d31490(lVar3 + 0x10);
  FUN_00d9ca38(uVar2,FUN_00d464f8);
  plVar4 = (long *)FUN_00d2cf7c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_HeroPLU_SmokeCloudEnemyDebu_02bebbc0);
  local_58[0] = 0x3e4ccccd;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_58);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_HeroPLU_SmokeCloud");
  plVar4 = (long *)(**(code **)(*plVar4 + 0xb0))(plVar4,1);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  lVar3 = FUN_00d64980(param_1);
  FUN_00d2ab44(lVar3 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d467d8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099f2b4();
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




void FUN_00d46828(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099d218();
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




void FUN_00d46878(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_0099da18();
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




void FUN_00d468c8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0281b810;
  param_1[1] = 0;
  return;
}




void FUN_00d468dc(void)

{
  return;
}




void FUN_00d468e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xd468e4);
  (*pcVar1)();
}




void FUN_00d468e4(long param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = FUN_00d3e534();
  FUN_00d4690c(uVar1,param_1);
  return;
}




void FUN_00d4690c(long param_1,undefined8 *param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  
  (**(code **)*param_2)(param_2);
  *(int *)(param_1 + 0x4c020) = *(int *)(param_1 + 0x4c020) + -1;
  iVar3 = (int)(param_1 + 0x10);
  if (*(short *)(param_1 + 0x4c010) == -1) {
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x35e5;
    *(short *)(param_1 + 0x4c012) = sVar2;
    *(short *)(param_1 + 0x4c010) = sVar2;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x4c012);
    sVar2 = (short)((uint)((int)param_2 - iVar3) >> 3) * -0x35e5;
    *(short *)(param_1 + 0x4c012) = sVar2;
    *(short *)(param_1 + 0x10 + (ulong)uVar1 * 0x98) = sVar2;
  }
  *(int *)(param_1 + 0x4c014) = *(int *)(param_1 + 0x4c014) + -1;
  return;
}




undefined8 FUN_00d469d8(void)

{
  return 1;
}




void FUN_00d469e0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




undefined8 FUN_00d469e8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




void FUN_00d469f0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 8);
  if (*plVar1 != 0) {
    lVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    plVar1 = param_2;
    while (lVar2 != 0) {
      plVar1 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
      lVar2 = (**(code **)(*plVar1 + 0x28))();
    }
    plVar1 = plVar1 + 1;
  }
  *plVar1 = (long)param_2;
  return;
}




void FUN_00d46a5c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  lVar2 = tpidr_el0;
  lVar5 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x30;
  plVar6 = (long *)register0x00000008;
  if (param_1 != 0) {
    while (param_2 != 0) {
      *(long *)(param_1 + 8) = param_2;
      lVar3 = (long)iVar1;
      if ((iVar1 < 0) && (iVar1 = iVar1 + 8, iVar1 < 1)) {
        plVar4 = (long *)(&stack0xffffffffffffffc8 + lVar3);
      }
      else {
        plVar4 = plVar6;
        plVar6 = plVar6 + 1;
      }
      param_1 = param_2;
      param_2 = *plVar4;
    }
  }
  if (*(long *)(lVar2 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d46b24(void)

{
  return;
}




void FUN_00d46b28(void)

{
  return;
}




void FUN_00d46b2c(void)

{
  return;
}




void FUN_00d46b30(void)

{
  return;
}




void FUN_00d46b38(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_0281b890;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = DAT_03214ce8;
  return;
}




void FUN_00d46b64(long param_1,undefined2 param_2)

{
  *(undefined2 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d46b6c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = FUN_00d66d28(*param_2);
  lVar5 = FUN_00d5c72c(uVar4,*(undefined2 *)(param_1 + 0x10));
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar5 + 0x28;
  }
  puVar2 = &DAT_03214ce8;
  if (lVar5 != 0) {
    puVar2 = (undefined4 *)(lVar1 + 8);
  }
  uVar3 = *puVar2;
  *(long *)(param_1 + 0x18) = lVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  return;
}




void FUN_00d46bc4(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 == 0) {
        return;
      }
      uVar3 = FUN_00d66d28(*param_2);
      plVar1 = *(long **)(param_1 + 0x18);
      if (plVar1 == (long *)0x0) {
        uVar4 = 0;
      }
      else if (*(int *)(param_1 + 0x20) == (int)plVar1[1]) {
        uVar4 = (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
      }
      FUN_00d5c9a8(uVar3,uVar4);
      uVar5 = DAT_03214ce8;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar5 = DAT_03214ce8;
    }
    *(undefined4 *)(param_1 + 0x20) = uVar5;
  }
  return;
}




void FUN_00d46c98(void)

{
  return;
}




void FUN_00d46ca0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281b8d0;
  param_1[1] = 0;
  uVar1 = DAT_03214ce8;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 3) = uVar1;
  *(undefined4 *)(param_1 + 6) = 7;
  return;
}




void FUN_00d46cdc(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2c) = param_2;
  return;
}




void FUN_00d46ce4(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == (byte *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = (uint)*param_2;
    uVar1 = 0x811c9dc5;
    if (*param_2 != 0) {
      do {
        param_2 = param_2 + 1;
        uVar1 = (uVar1 ^ uVar2) * 0x1000193;
        uVar2 = (uint)*param_2;
      } while (*param_2 != 0);
    }
  }
  *(uint *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_00d46d28(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00d46d30(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x30) = param_2;
  return;
}




void FUN_00d46d38(long param_1,undefined8 *param_2)

{
  long *plVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  
  uVar3 = FUN_00d66d28(*param_2);
  lVar4 = FUN_01985d44(uVar3,DAT_031a9308);
  iVar7 = DAT_03214ce8;
  plVar5 = (long *)(lVar4 + 0x28);
  plVar1 = (long *)0x0;
  iVar6 = DAT_03214ce8;
  if ((lVar4 == 0) || (iVar6 = *(int *)(lVar4 + 0x30), plVar1 = plVar5, iVar6 == DAT_03214ce8)) {
    cVar2 = *(char *)(param_1 + 0x2c);
    *(long **)(param_1 + 0x10) = plVar1;
    *(int *)(param_1 + 0x18) = iVar6;
    iVar7 = iVar6;
    if (lVar4 == 0) {
      uVar3 = 0;
      goto joined_r0x00d46e10;
    }
  }
  else {
    cVar2 = *(char *)(param_1 + 0x2c);
    *(long **)(param_1 + 0x10) = plVar5;
    *(int *)(param_1 + 0x18) = iVar6;
  }
  if (iVar6 == (int)plVar1[1]) {
    uVar3 = (**(code **)(*plVar1 + 0x10))();
  }
  else {
    uVar3 = 0;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(int *)(param_1 + 0x18) = iVar7;
  }
joined_r0x00d46e10:
  if (cVar2 == '\0') {
    FUN_00d6a5d4(uVar3,param_1 + 0x28);
  }
  else {
    FUN_00d6a5cc(uVar3,*(undefined1 *)(param_1 + 0x2c));
  }
  plVar5 = *(long **)(param_1 + 0x10);
  uVar3 = 0;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar5[1]) {
      uVar3 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar3 = 0;
      *(int *)(param_1 + 0x18) = DAT_03214ce8;
    }
  }
  FUN_00d6a5e0(uVar3,*(undefined8 *)(param_1 + 0x20));
  plVar5 = *(long **)(param_1 + 0x10);
  uVar3 = 0;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar5[1]) {
      uVar3 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar3 = 0;
      *(int *)(param_1 + 0x18) = DAT_03214ce8;
    }
  }
  FUN_00d6a5e8(uVar3,*(undefined4 *)(param_1 + 0x30));
  return;
}




void FUN_00d46ec4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x18) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x10);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x18) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x10) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
          }
        }
        FUN_01985ca8(uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00d46f68(void)

{
  return;
}




void FUN_00d46f70(undefined8 *param_1)

{
  FUN_00d468c8();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0281b910;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  return;
}




void FUN_00d46fc0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d46fc8(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d46fd0(long param_1)

{
  *(byte *)(param_1 + 0x20) = *(byte *)(param_1 + 0x20) | 1;
  return;
}




void FUN_00d46fe0(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = param_2;
  return;
}




void FUN_00d46fe8(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  char *__s1;
  uint uVar10;
  long lVar11;
  undefined1 auStack_90 [40];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar7 = FUN_00ceab48();
  if (((uVar7 & 1) != 0) && (iVar2 = FUN_00d67bf4(param_2), iVar2 != 0)) {
    uVar10 = 0;
    do {
      lVar8 = FUN_00d67bdc(param_2,uVar10);
      lVar11 = *(long *)(lVar8 + 0x18);
      while ((lVar11 != 0 && (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar11 = *(long *)(lVar11 + 0x20);
      }
      lVar9 = FUN_00d66d28(param_2);
      switch(*(undefined4 *)(param_1 + 0x18)) {
      case 0:
        iVar2 = FUN_00d6ad98(lVar11);
        if (iVar2 != 0) {
          uVar6 = 0;
          do {
            uVar3 = FUN_00d6b5f0(lVar11,uVar6);
            __s1 = (char *)FUN_00d6b898(lVar11,uVar6);
            if (((((*(byte *)(param_1 + 0x20) & 1) == 0) ||
                 (iVar2 = FUN_00d6b8f8(lVar11,uVar3), iVar2 == *(int *)(lVar9 + 0x260))) &&
                ((iVar2 = *(int *)(param_1 + 0x1c), iVar2 == -1 ||
                 (iVar4 = FUN_00d6b8f8(lVar11,uVar3), iVar2 == iVar4)))) &&
               (iVar2 = strcmp(__s1,*(char **)(param_1 + 0x10)), iVar2 == 0)) {
              FUN_00d009d0(auStack_90,*(undefined4 *)(lVar8 + 0x260),uVar3);
              FUN_00ce20fc(auStack_90);
            }
            uVar6 = uVar6 + 1;
            uVar5 = FUN_00d6ad98(lVar11);
          } while (uVar6 < uVar5);
        }
        break;
      case 1:
        FUN_00d6b3b4(lVar11,*(undefined4 *)(lVar8 + 0x260));
        break;
      case 2:
        FUN_00d6b448(lVar11,*(undefined4 *)(lVar8 + 0x260));
        break;
      case 3:
        FUN_00d6b320(lVar11,*(undefined4 *)(lVar8 + 0x260));
      }
      uVar10 = uVar10 + 1;
      uVar6 = FUN_00d67bf4(param_2);
    } while (uVar10 < uVar6);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00d468dc(void)

{
  return;
}

