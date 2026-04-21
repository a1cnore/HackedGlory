// functions/00ddc — 19 functions
#include "libGameKindred.h"




void FUN_00ddc064(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d5048c();
  fVar2 = (float)FUN_00d092ac(uVar1,0,4,9,1);
  *param_3 = fVar2 * 0.5;
  *param_4 = 1;
  *param_5 = 1;
  return;
}




void FUN_00ddc0c0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cfb05c(auStack_48);
  uVar2 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdle");
  uVar2 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f0ccccd);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfaa74(auStack_48);
  FUN_00cf32cc(0,uVar2,"Effect_PetalMinion_HitImpact",0,0,1,0,0);
  FUN_00cf99dc(auStack_48);
  uVar2 = FUN_00cfa00c(auStack_48);
  FUN_00cf6bb0(uVar2,FUN_00ddc064);
  FUN_00cf6bb8(uVar2,FUN_00dda944);
  uVar2 = FUN_00cf9ab4(auStack_48);
  FUN_00cf44e8(0x3f400000,uVar2,PTR_s_Buff_PetalMinion_Explosion_Slow_02bf0d88,1,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddc1fc(undefined8 param_1,undefined8 param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  
  uVar1 = FUN_00d5048c();
  fVar4 = (float)FUN_00d092ac(uVar1,2,0,9,0);
  *param_3 = fVar4;
  *param_4 = 2;
  *param_5 = 1;
  uVar2 = FUN_00d5cf60(uVar1);
  uVar3 = FUN_00d44008(uVar2,PTR_s_Buff_Petal_Talent_ExplosionForce_02bf1ff0);
  if ((uVar3 & 1) != 0) {
    FUN_00d5cf60(uVar1);
    uVar1 = FUN_00d9e390();
    fVar4 = (float)FUN_00d5a3d0(uVar1,DAT_0320ea00,3,9);
    *param_3 = fVar4 * *param_3;
  }
  return;
}




void FUN_00ddc2ac(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_d8 [40];
  int local_b0 [22];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    FUN_00d5048c(param_1);
    FUN_00d5cf60();
    lVar8 = FUN_00d9e390();
    lVar10 = *(long *)(param_2 + 0x20);
    for (lVar9 = *(long *)(lVar10 + 0x18); lVar9 != 0; lVar9 = *(long *)(lVar9 + 0x20)) {
      if (*(int *)(*(long *)(lVar9 + 8) + 0xa4) == DAT_02c7bf48) {
        uVar3 = FUN_00d6c0bc(lVar9,PTR_s_Buff_Petal_Yummy_02bf0d30);
        if (*(long *)(param_2 + 0x28) != 0) {
          iVar4 = FUN_00d5bc54(*(long *)(param_2 + 0x28));
          thunk_FUN_00d9ff34(local_b0,"PetalMinion");
          puVar2 = PTR_s_Buff_Petal_YummyFrenzy_02bf0d48;
          if ((local_b0[0] == iVar4) && (((uVar3 ^ 1) & 1) == 0)) {
            uVar6 = *(undefined4 *)(lVar8 + 0x260);
            uVar11 = thunk_FUN_00d086f0(lVar8,8,1);
            uVar5 = FUN_00ceb350();
            FUN_00cfe864(uVar11,0,0,local_b0,uVar6,uVar6,puVar2,uVar5,1,0,0);
            FUN_00ce20fc(local_b0);
            uVar6 = FUN_00d6b630(lVar9,DAT_031ba948,0xffffffff);
            FUN_00d009d0(auStack_d8,*(undefined4 *)(lVar10 + 0x260),uVar6);
            FUN_00ce20fc(auStack_d8);
          }
        }
        break;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddc440(undefined8 param_1,undefined8 param_2,float *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float local_78 [2];
  float local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d5048c();
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d5048c(param_1);
  FUN_00d55794(uVar3,local_78,0);
  FUN_00d55794(param_2,&local_88,0);
  local_78[0] = local_88 - local_78[0];
  local_70 = local_80 - local_70;
  fVar7 = local_78[0] * local_78[0] + 0.0 + local_70 * local_70;
  uVar3 = DAT_03218f68;
  fVar5 = DAT_03218f70;
  if (1e-08 <= fVar7) {
    fVar5 = SQRT(fVar7);
    if (NAN(fVar5)) {
      fVar5 = sqrtf(fVar7);
    }
    uVar3 = CONCAT44(0.0 / fVar5,local_78[0] / fVar5);
    fVar5 = local_70 / fVar5;
  }
  fVar7 = (float)FUN_00d5a3d0(uVar2,DAT_0320ea00,0,9);
  fVar8 = (float)uVar3 * fVar7;
  fVar9 = (float)((ulong)uVar3 >> 0x20) * fVar7;
  *param_4 = CONCAT44(fStack_84 + fVar9,local_88 + fVar8);
  *(float *)(param_4 + 1) = fVar5 * fVar7 + local_80;
  fVar6 = (float)FUN_00d5a3d0(uVar2,DAT_0320ea00,2,9);
  *param_3 = fVar7 / fVar6;
  uVar4 = FUN_00ef01b8(0,&local_88,param_4,&local_8c,0,0);
  if ((uVar4 & 1) == 0) {
    *param_4 = CONCAT44(fStack_84 + fVar9 * local_8c,local_88 + fVar8 * local_8c);
    *(float *)(param_4 + 1) = fVar5 * fVar7 * local_8c + local_80;
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ddc60c(undefined8 param_1,undefined8 param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float __x;
  float local_58;
  float fStack_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d55794(param_2,&local_48,0);
  local_44 = 0.0;
  FUN_00ddc440(param_1,param_2,&local_3c,&local_58);
  __x = (local_48 - local_58) * (local_48 - local_58) +
        (local_44 - fStack_54) * (local_44 - fStack_54) +
        (local_40 - local_50) * (local_40 - local_50);
  fVar2 = SQRT(__x);
  if (NAN(fVar2)) {
    fVar2 = sqrtf(__x);
  }
  *param_3 = fVar2 / local_3c;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddc6d8(undefined8 param_1,undefined8 param_2,float *param_3,float *param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d5048c();
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  FUN_00ddc60c(param_1,param_2,&local_4c);
  fVar3 = (float)FUN_00d5a3d0(uVar2,DAT_0320ea00,1,9);
  *param_4 = fVar3;
  *param_3 = fVar3 / local_4c;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddc784(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_48);
  uVar3 = FUN_00cfa9e4(auStack_48);
  FUN_00cf3048(uVar3,"Move",0,1,0,"AttackToIdle");
  plVar4 = (long *)FUN_00cfa12c(auStack_48);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x90))();
  local_38[0] = 0x41600000;
  local_30 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0xa0))(plVar4,local_38);
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  uVar3 = FUN_00cfa294(auStack_48);
  FUN_00cf7478(0x3f99999a);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_48);
  lVar2 = FUN_00cfa6cc(auStack_48);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddc88c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_118 [16];
  code *local_108;
  undefined4 local_100;
  undefined1 auStack_f8 [96];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_118);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4d9e8(auStack_f8);
  FUN_00d4daf4(auStack_f8,1,0,1,0);
  FUN_00d4dabc(auStack_f8,1);
  uVar2 = FUN_00cfaa74(auStack_118);
  FUN_00cf32cc(0,uVar2,"Effect_PetalMinion_Explosion",0,0,0,0,0);
  uVar3 = FUN_00cfab94(auStack_118);
  lVar4 = FUN_00d09310();
  uVar2 = FUN_00d09590(*(undefined4 *)(lVar4 + 0xdc));
  FUN_00cf4164(0x3f800000,uVar2,uVar3,"Sound_Petal_ability_3_explode_1",0,0,0xffffffff,0,0);
  FUN_00cf41bc(uVar3,"Sound_Petal_ability_3_explode_2");
  plVar5 = (long *)FUN_00cfb134(auStack_118);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x68))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x10))(0x3e4ccccd);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x18))(0x3f000000);
  (**(code **)(*plVar5 + 0x20))(0x41400000);
  uVar2 = FUN_00cfaf84(auStack_118);
  FUN_00cf5504(uVar2,auStack_98,0,FUN_00ddcbd8,0,1,0);
  uVar2 = FUN_00cfa00c(auStack_118);
  uVar2 = FUN_00cf6bb0(uVar2,FUN_00ddc1fc);
  FUN_00cf6bb8(uVar2,FUN_00ddc2ac);
  uVar2 = FUN_00cf9ab4(auStack_118);
  FUN_00cf44e8(0x40600000,uVar2,PTR_s_Buff_PetalMinion_Explosion_Slow_02bf0d88,1,0);
  FUN_00cf9eec(auStack_118);
  lVar4 = FUN_00cf9f7c(auStack_118);
  lVar6 = FUN_00ddcc94(lVar4 + 0x10);
  lVar4 = lVar4 + 0xb0;
  *(undefined **)(lVar6 + 8) = PTR_s_Buff_Petal_Talent_ExplosionForce_02bf1ff0;
  uVar2 = FUN_00cfaf84(lVar4);
  FUN_00cf5504(uVar2,auStack_98,0,FUN_00ddcbd8,0,0,0);
  uVar2 = FUN_00cf9c1c(lVar4);
  FUN_00cf816c(uVar2,FUN_00ddc440,0,1);
  uVar2 = FUN_00cf9bd4(lVar4);
  FUN_00cf834c(uVar2,FUN_00ddc6d8,0,1);
  uVar2 = FUN_00cf9ab4(lVar4);
  FUN_00cf4540(uVar2,PTR_s_Buff_DisplacementLock_02beb3f0,FUN_00ddc60c,1,0);
  FUN_00cf9eec(lVar4);
  uVar2 = FUN_00cfaf84(auStack_118);
  FUN_00cf5504(uVar2,auStack_f8,0,FUN_00ddcbec,0,1,0);
  uVar2 = FUN_00cfa5ac(auStack_118);
  local_108 = FUN_00ddcc00;
  local_100 = 3;
  FUN_00cf6d54(uVar2,&local_108);
  FUN_00cf9eec(auStack_118);
  plVar5 = (long *)FUN_00cfb1c4(auStack_118);
  (**(code **)(*plVar5 + 0x50))(plVar5,"*PetalSeed*",1);
  uVar2 = FUN_00cfa294(auStack_118);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfb0a4(auStack_118);
  FUN_00cfa36c(auStack_118);
  FUN_00cfb5c4(auStack_118);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddcbd8(undefined8 param_1)

{
  FUN_00d092ac(param_1,2,6,9,0);
  return;
}




void FUN_00ddcbec(undefined8 param_1)

{
  FUN_00d092ac(param_1,2,7,9,0);
  return;
}




void FUN_00ddcc00(undefined8 param_1)

{
  FUN_00d092ac(param_1,2,5,9,0);
  return;
}




void FUN_00ddcc14(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfb1c4(auStack_38);
  (**(code **)(*plVar2 + 0x50))(plVar2,"*PetalMinion*",1);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfa36c(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00ddcc94(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *(undefined4 *)(puVar1 + 2) = 0;
      *puVar1 = &PTR_FUN_0281fc28;
      puVar1[1] = 0;
      puVar1[-1] = puVar1;
      return puVar1;
    }
    uVar2 = uVar2 + 1;
    puVar1 = puVar1 + 9;
  } while (uVar2 < 2);
  FUN_00e6a2fc(0);
  return (undefined8 *)0xbadbad11;
}




bool FUN_00ddccf4(long param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = FUN_00d9977c(param_2);
  bVar1 = false;
  if (lVar3 != 0) {
    bVar2 = FUN_00d99e94(lVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    bVar1 = (bVar2 & 1) != *(byte *)(param_1 + 0x14);
  }
  return bVar1;
}




undefined8 FUN_00ddcd38(void)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00d50ef8();
  lVar1 = FUN_00d9eb64();
  if ((lVar1 == 0) || (uVar2 = FUN_00d53990(lVar1,1), (int)uVar2 != 2)) {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_00ddcd68(undefined8 param_1,long param_2,undefined8 param_3,undefined8 *param_4,
                 uint param_5,undefined8 *param_6,uint param_7,undefined4 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_78 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_78);
  uVar2 = FUN_00cfad44(auStack_78);
  FUN_00cf2ec0(uVar2,FUN_00ddcd38);
  FUN_00cfb05c(auStack_78);
  if (param_2 != 0) {
    plVar3 = (long *)FUN_00cfab04(auStack_78);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"Bone_Staff");
    plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,param_2);
    plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
    (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  }
  plVar3 = (long *)FUN_00cfaa2c(auStack_78);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_1);
  if (param_5 != 0) {
    uVar4 = FUN_00cfab94(auStack_78);
    uVar6 = *param_4;
    lVar5 = FUN_00d09310();
    uVar2 = FUN_00d09ad0(*(undefined4 *)(lVar5 + 0x278));
    FUN_00cf4164(0x3f800000,uVar2,uVar4,uVar6,0,0,0xffffffff,0,1);
    if (param_5 != 1) {
      lVar5 = (ulong)param_5 - 1;
      do {
        param_4 = param_4 + 1;
        FUN_00cf41bc(uVar4,*param_4);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  uVar2 = FUN_00cfa294(auStack_78);
  FUN_00cf7570(uVar2,FUN_00cf76f0);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  plVar3 = (long *)FUN_00cfab04(auStack_78);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x58))();
  (**(code **)(*plVar3 + 0x48))(plVar3,param_3);
  if (param_7 != 0) {
    uVar4 = FUN_00cfab94(auStack_78);
    uVar6 = *param_6;
    lVar5 = FUN_00d09310();
    uVar2 = FUN_00d09ad0(*(undefined4 *)(lVar5 + 0x278));
    FUN_00cf4164(0x3f800000,uVar2,uVar4,uVar6,0,0,0xffffffff,0,1);
    if (param_7 != 1) {
      lVar5 = (ulong)param_7 - 1;
      do {
        param_6 = param_6 + 1;
        FUN_00cf41bc(uVar4,*param_6);
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
    }
  }
  plVar3 = (long *)FUN_00cfa0e4(auStack_78);
  (**(code **)(*plVar3 + 0x58))(plVar3,param_8);
  FUN_00cfb0a4(auStack_78);
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ddcfc8(void)

{
  FUN_00ddcd68("Attack",0,"Effect_Reim_AA",&PTR_s_Sound_Reim_Basic_Attack_1_02bef300,3,
               &PTR_s_Sound_Reim_Basic_Impact_1_02bef318,3,0);
  return;
}




void FUN_00ddcffc(void)

{
  FUN_00ddcd68("AltAttack",0,"Effect_Reim_AA_Alt",&PTR_s_Sound_Reim_Basic_Attack_1_02bef300,3,
               &PTR_s_Sound_Reim_Basic_Impact_1_02bef318,3,0);
  return;
}

