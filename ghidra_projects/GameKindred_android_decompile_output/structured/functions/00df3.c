// functions/00df3 — 22 functions
#include "libGameKindred.h"




void FUN_00df30d8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_58);
  FUN_00cfb05c(auStack_58);
  uVar2 = FUN_00cfa9e4(auStack_58);
  FUN_00cf3048(uVar2,param_1,0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfa294(auStack_58);
  FUN_00cf7478(0x3e99999a);
  FUN_00cf7578(uVar2,FUN_00cfb9b0);
  uVar2 = FUN_00cfb17c(auStack_58);
  FUN_00cfcad8(uVar2,param_3,param_2);
  FUN_00cfb0a4(auStack_58);
  FUN_00cfb5c4(auStack_58);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df31b8(void)

{
  FUN_00df30d8("Attack","CenterBody",0x9c);
  return;
}




void FUN_00df31d0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [64];
  undefined4 local_58;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00cfb05c(auStack_a8);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4db48(0x4101999a,auStack_98,&DAT_03218f30);
  FUN_00d4dcdc(auStack_98,1);
  local_58 = 0x3f266666;
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Attack",0,1,FUN_00cfb9b0,"AttackToIdleCombat");
  uVar2 = FUN_00cfb17c(auStack_a8);
  FUN_00cfcad8(uVar2,0x9c,"CenterBody");
  uVar2 = FUN_00cfaf84(auStack_a8);
  FUN_00cf5460(0x4101999a,uVar2,auStack_98,0,1,1,0);
  uVar2 = FUN_00cfb17c(auStack_a8);
  FUN_00cfcad8(uVar2,0x9d,"CenterBody");
  FUN_00cfcbb0();
  FUN_00cf98bc(auStack_a8);
  uVar2 = FUN_00cfa204(auStack_a8);
  FUN_00cf4b90(uVar2,PTR_s_Buff_Hero051_GunA2_02bf1560,1,1);
  FUN_00cf9eec(auStack_a8);
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df3370(void)

{
  FUN_00df30d8("AltAttack","CenterBody",0x9c);
  return;
}




void FUN_00df3388(void)

{
  FUN_00df30d8("CritAttack","CenterBody",0x9e);
  return;
}




void FUN_00df33a0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_68);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_68);
  uVar3 = FUN_00cfcad8(uVar3,0xa1,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  plVar4 = (long *)FUN_00cfa09c(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_48 = FUN_00d92c6c;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48,0,2);
  FUN_00cf9eec(auStack_68);
  FUN_00cf98bc(auStack_68);
  plVar4 = (long *)FUN_00cf9afc(auStack_68);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Hero051_GunA2_02bf1560);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x41200000);
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  local_58[0] = 2;
  local_50 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,local_58);
  FUN_00cf9eec(auStack_68);
  uVar3 = FUN_00cfa294(auStack_68);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_68);
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df353c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [16];
  undefined4 local_58 [2];
  undefined4 local_50;
  code *local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_68);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_68);
  plVar3 = (long *)FUN_00cfa12c(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x88))();
  local_48 = FUN_00df368c;
  local_40 = 3;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xa8))(plVar3,&local_48);
  (**(code **)(*plVar3 + 0xb0))(plVar3,1);
  uVar4 = FUN_00cfa294(auStack_68);
  FUN_00cf7580(uVar4,FUN_00df36a0);
  FUN_00cf7578(uVar4,0);
  FUN_00cf98bc(auStack_68);
  FUN_00cf9eec(auStack_68);
  plVar3 = (long *)FUN_00cf9afc(auStack_68);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Hero051_GunA2_02bf1560);
  local_48 = (code *)CONCAT44(local_48._4_4_,0x41200000);
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x18))(plVar3,&local_48);
  local_58[0] = 2;
  local_50 = 1;
  (**(code **)(*plVar3 + 0x20))(plVar3,local_58);
  lVar2 = FUN_00cfa6cc(auStack_68);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb5c4(auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df368c(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,3,0x19,0);
  return;
}




void FUN_00df36a0(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,2,0x19,0);
  return;
}




void FUN_00df36b4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,3,0x19,0);
  return;
}




void FUN_00df36c8(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = fVar2 * -0.5;
  return;
}




void FUN_00df3708(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = -fVar2;
  return;
}




void FUN_00df3744(undefined8 param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d50ef8();
  uVar2 = FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = uVar2;
  return;
}




void FUN_00df377c(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = fVar2 * -1.5;
  return;
}




void FUN_00df37bc(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = fVar2 * 1.5;
  return;
}




void FUN_00df37fc(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = fVar2 * -2.0;
  return;
}




void FUN_00df383c(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = fVar2 + fVar2;
  return;
}




void FUN_00df3878(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = fVar2 * -2.5;
  return;
}




void FUN_00df38b8(undefined8 param_1,float *param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_00d50ef8();
  fVar2 = (float)FUN_00d59f54(uVar1,2,3,0x19,0);
  *param_2 = fVar2 * 2.5;
  return;
}




void FUN_00df38f8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_a8 [16];
  undefined4 local_98 [2];
  undefined4 local_90;
  code *local_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfb05c(auStack_a8);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df36c8);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df3708);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df3744);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df377c);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df37bc);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df37fc);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df383c);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df3878);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df38b8);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  FUN_00cfcba8(uVar3,1);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df36c8);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df3708);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df3744);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df377c);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df37bc);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df37fc);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df383c);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df3878);
  uVar3 = FUN_00cfb17c(auStack_a8);
  uVar3 = FUN_00cfcad8(uVar3,0xa0,"CenterBody");
  uVar3 = FUN_00cfcba8(uVar3,1);
  FUN_00cfcbcc(uVar3,FUN_00df38b8);
  plVar4 = (long *)FUN_00cfa09c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  local_88 = FUN_00df3ed4;
  local_80 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_88,0,2);
  FUN_00cf9eec(auStack_a8);
  FUN_00cf98bc(auStack_a8);
  plVar4 = (long *)FUN_00cf9afc(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Hero051_GunA2_02bf1560);
  local_88 = (code *)CONCAT44(local_88._4_4_,0x41200000);
  local_80 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_88);
  local_98[0] = 2;
  local_90 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,local_98);
  FUN_00cf9eec(auStack_a8);
  uVar3 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00df3ed4(undefined8 param_1)

{
  FUN_00d59f54(param_1,2,4,5,0);
  return;
}




void FUN_00df3ee8(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  float local_730 [4];
  float local_720 [4];
  undefined4 local_710 [2];
  undefined1 auStack_708 [112];
  undefined8 local_698 [200];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d5048c(param_1);
    thunk_FUN_00d9ff34(local_710,PTR_s_Buff_Hero052_BallLocator_02bf1598);
    FUN_00d4e934(auStack_708,local_710[0]);
    FUN_00d4e998(auStack_708,0);
    FUN_00d4db40(auStack_708,uVar4);
    FUN_00d4daf4(auStack_708,1,0,0,0);
    FUN_00d4ddc4(auStack_708);
    FUN_00d4dca4(auStack_708,"Hero052_Ball",0);
    uVar2 = FUN_00d9e840(auStack_708,local_698,200,0);
    if (uVar2 != 0) {
      uVar3 = (ulong)uVar2;
      puVar6 = local_698;
      do {
        uVar5 = *puVar6;
        uVar4 = FUN_00d51778(param_1);
        FUN_00d55794(uVar5,local_730,0);
        FUN_00d55794(uVar4,local_720,0);
        fVar7 = (float)local_730._4_8_ - (float)local_720._4_8_;
        fVar8 = SUB84(local_730._4_8_,4) - SUB84(local_720._4_8_,4);
        fVar8 = (local_730[0] - local_720[0]) * (local_730[0] - local_720[0]) + fVar7 * fVar7 +
                fVar8 * fVar8;
        fVar7 = SQRT(fVar8);
        if (NAN(fVar7)) {
          fVar7 = sqrtf(fVar8);
        }
        if (fVar7 <= 10.0) {
          FUN_008ff6ec(*puVar6,2,uVar4);
        }
        uVar3 = uVar3 - 1;
        puVar6 = puVar6 + 1;
      } while (uVar3 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

