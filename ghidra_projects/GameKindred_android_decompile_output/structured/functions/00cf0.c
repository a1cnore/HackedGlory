// functions/00cf0 — 17 functions
#include "libGameKindred.h"




void FUN_00cf0098(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [96];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_108);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,1,0,0,0);
  FUN_00d4dac4(auStack_98,0x210);
  FUN_00d4d9e8(auStack_f8);
  FUN_00d4dad4(auStack_f8,0);
  FUN_00d4daf4(auStack_f8,1,0,0,0);
  FUN_00d4dabc(auStack_f8,0x200);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_MinionCandy__02beb0c8);
  uVar3 = FUN_00cfad44(auStack_108);
  FUN_00cf2ec0(uVar3,FUN_00cefee4);
  uVar3 = FUN_00cfaf84(auStack_108);
  FUN_00d08524(uVar2,2,1);
  FUN_00cf5460(uVar3,auStack_98,0,0,0,0);
  uVar3 = FUN_00cfaf84(auStack_108);
  FUN_00d08524(uVar2,2,1);
  FUN_00cf5460(uVar3,auStack_f8,0,0,0,0);
  uVar2 = FUN_00cf9ab4(auStack_108);
  FUN_00cf4540(uVar2,PTR_s_Buff_Item_MinionCandy_02beb6b8,FUN_00cefe9c,1,0);
  FUN_00cfb0a4(auStack_108);
  FUN_00cfb5c4(auStack_108);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0220(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfab94(auStack_38);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d093b8(*(undefined4 *)(lVar3 + 0x10));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Items/item_flare_start.mp3",0,0,0xffffffff,0,1
              );
  uVar4 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar4,0x25,"CenterBody");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf02d4(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  uVar2 = FUN_00cfab94(auStack_38);
  lVar3 = FUN_00d09310();
  uVar4 = FUN_00d093b8(*(undefined4 *)(lVar3 + 0x10));
  FUN_00cf4164(0x3f800000,uVar4,uVar2,"build://Sounds/Items/item_flare_start.mp3",0,0,0xffffffff,0,1
              );
  uVar4 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar4,0x26,"CenterBody");
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0388(void)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfa90c(auStack_48);
  puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x50))();
  local_38[0] = 1;
  local_30 = 1;
  (**(code **)*puVar3)(puVar3,local_38);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0408(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  plVar2 = (long *)FUN_00cfa954(auStack_48);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_38[0] = 0x447a0000;
  local_30 = 1;
  (**(code **)(*plVar2 + 0x10))(plVar2,6,local_38);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0490(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d50ef8();
  FUN_00d55794(uVar2,&local_38,0);
  fVar3 = (float)FUN_00d51820(param_4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail((local_38 - fVar3) * (local_38 - fVar3) +
                   (fStack_34 - param_2) * (fStack_34 - param_2) +
                   (local_30 - param_3) * (local_30 - param_3) < 12.0);
}




void FUN_00cf0520(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cf9f7c(auStack_38);
  lVar3 = FUN_00cf2970(lVar2 + 0x10);
  *(code **)(lVar3 + 8) = FUN_00cf0490;
  plVar4 = (long *)FUN_00cfb1c4(lVar2 + 0xb0);
  (**(code **)(*plVar4 + 0x50))(plVar4,"*ScoutTrap*",0);
  uVar5 = FUN_00cfb17c(lVar2 + 200);
  uVar5 = FUN_00cfcad8(uVar5,0x25,"CenterBody");
  FUN_00cfcba8(uVar5,0);
  plVar4 = (long *)FUN_00cfac24(lVar2 + 200);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x58))(plVar4,"build://Sounds/Items/item_flare_start.mp3")
  ;
  lVar2 = FUN_00d09310();
  FUN_00d093b8(*(undefined4 *)(lVar2 + 0x10));
  plVar4 = (long *)(**(code **)(*plVar4 + 0x28))(plVar4);
  (**(code **)(*plVar4 + 0x38))();
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0624(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  uVar3 = FUN_00cfab94(auStack_48);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d093b8(*(undefined4 *)(lVar4 + 0x20));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"build://Sounds/Items/item_reflex_block.mp3",0,0,0xffffffff,0,
               1);
  FUN_00cf98bc(auStack_48);
  uVar5 = FUN_00d6eb50();
  uVar5 = FUN_00d6eb5c(uVar5,PTR_s__Item_ReflexBlock__02beb0f8);
  uVar3 = FUN_00cf9ab4(auStack_48);
  puVar2 = PTR_s_Buff_Item_ReflexBlock_02beb7b0;
  FUN_00d08524(uVar5,2,1);
  FUN_00cf44e8(uVar3,puVar2,1,0);
  uVar3 = FUN_00cf9ab4(auStack_48);
  puVar2 = PTR_s_Buff_BlockDebuffs_02beb3c8;
  FUN_00d08524(uVar5,2,1);
  FUN_00cf44e8(uVar3,puVar2,1,0);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0760(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [16];
  code *local_98;
  undefined4 local_90;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,1,0,0,0);
  FUN_00d4dabc(auStack_88,1);
  plVar2 = (long *)FUN_00cf9afc(auStack_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,PTR_s_Buff_Item_FountainOfRenewal_02beb7c0);
  local_98 = FUN_00cf08cc;
  local_90 = 2;
  (**(code **)(*plVar2 + 0x18))(plVar2,&local_98);
  uVar3 = FUN_00cfab94(auStack_a8);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d093b8(*(undefined4 *)(lVar4 + 0x1c));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"build://Sounds/Items/item_fountain_of_renewal.mp3",0,0,
               0xffffffff,0,1);
  uVar5 = FUN_00cfaf84(auStack_a8);
  FUN_00d085c4(PTR_s__Item_FountainOfRenewal__02beb098,2,1);
  FUN_00cf5460(uVar5,auStack_88,0,0,1,0);
  uVar5 = FUN_00cfb17c(auStack_a8);
  FUN_00cfcad8(uVar5,0x24,"CenterBody");
  FUN_00cfcbb0();
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf08cc(void)

{
  FUN_00d085c4(PTR_s__Item_FountainOfRenewal__02beb098,1,1);
  return;
}




void FUN_00cf08e4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [96];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  FUN_00cf98bc(auStack_c8);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_ReflexBlock__02beb0f8);
  uVar4 = FUN_00cf9ab4(auStack_c8);
  puVar2 = PTR_s_Buff_Item_ReflexBlock_02beb7b0;
  FUN_00d08524(uVar3,2,1);
  FUN_00cf44e8(uVar4,puVar2,1,0);
  uVar4 = FUN_00cf9ab4(auStack_c8);
  puVar2 = PTR_s_Buff_BlockDebuffs_02beb3c8;
  FUN_00d08524(uVar3,2,1);
  FUN_00cf44e8(uVar4,puVar2,1,0);
  FUN_00cf9eec(auStack_c8);
  FUN_00d4d9e8(auStack_b8);
  FUN_00d4daf4(auStack_b8,1,0,0,0);
  FUN_00d4dabc(auStack_b8,1);
  uVar4 = FUN_00d6eb50();
  uVar4 = FUN_00d6eb5c(uVar4,PTR_s__Item_Crucible__02beb060);
  uVar5 = FUN_00cfaf84(auStack_c8);
  FUN_00d08524(uVar4,0,1);
  FUN_00cf5460(uVar5,auStack_b8,0,0,0,0);
  uVar4 = FUN_00cf9ab4(auStack_c8);
  puVar2 = PTR_s_Buff_Item_ReflexBlock_02beb7b0;
  FUN_00d08524(uVar3,2,1);
  FUN_00cf44e8(uVar4,puVar2,1,0);
  uVar4 = FUN_00cf9ab4(auStack_c8);
  puVar2 = PTR_s_Buff_BlockDebuffs_02beb3c8;
  FUN_00d08524(uVar3,2,1);
  FUN_00cf44e8(uVar4,puVar2,1,0);
  uVar3 = FUN_00cfab94(auStack_c8);
  lVar6 = FUN_00d09310();
  uVar4 = FUN_00d093b8(*(undefined4 *)(lVar6 + 0x20));
  FUN_00cf4164(0x3f800000,uVar4,uVar3,"build://Sounds/Items/item_reflex_block.mp3",0,0,0xffffffff,0,
               1);
  uVar3 = FUN_00cfab4c(auStack_c8);
  FUN_00cf3ac8(0x3f4ccccd,uVar3,"Effect_Crucible_Beam",1,"CenterBody");
  FUN_00cf3c28(uVar3);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3f800000);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb0a4(auStack_c8);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0b74(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_WeaponInfusion__02beb180);
  uVar4 = FUN_00cf9ab4(auStack_48);
  puVar2 = PTR_s_Buff_Item_WeaponInfusion_02beb748;
  FUN_00d08524(uVar3,9,1);
  FUN_00cf44e8(uVar4,puVar2,1,0);
  uVar3 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Item_CrystalInfusion_02beb750);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0c50(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_48);
  FUN_00cf98bc(auStack_48);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_CrystalInfusion__02beb068);
  uVar4 = FUN_00cf9ab4(auStack_48);
  puVar2 = PTR_s_Buff_Item_CrystalInfusion_02beb750;
  FUN_00d08524(uVar3,9,1);
  FUN_00cf44e8(uVar4,puVar2,1,0);
  uVar3 = FUN_00cf9d84(auStack_48);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Item_WeaponInfusion_02beb748);
  FUN_00cf9eec(auStack_48);
  FUN_00cfb0a4(auStack_48);
  FUN_00cfb5c4(auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0d2c(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfb1c4(auStack_38);
  (**(code **)(*plVar2 + 0x50))(plVar2,"*ScoutTrap*",0);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf0da4(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d6eb50();
  uVar1 = FUN_00d6eb5c(uVar1,PTR_s__Item_ScoutTrap__02beb108);
  uVar2 = FUN_00d08524(uVar1,0,1);
  *param_3 = uVar2;
  *param_4 = 1;
  *param_5 = 3;
  return;
}




void FUN_00cf0e04(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_ScoutTrap__02beb108);
  fVar9 = (float)FUN_00d08524(uVar3,1,1);
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x40);
  fVar10 = (*(float *)(lVar6 + 0x240) + 1.0) *
           (*(float *)(lVar6 + 0xd8) + *(float *)(lVar6 + 0x18c) * (*(float *)(lVar6 + 0x2f4) + 1.0)
           );
  if (DAT_0314f570 <= fVar10) {
    fVar10 = DAT_0314f570;
  }
  fVar11 = DAT_0314f4b0;
  if (DAT_0314f4b0 <= fVar10) {
    fVar11 = fVar10;
  }
  *(float *)(param_2 + 0x30) = *(float *)(param_2 + 0x30) + fVar9 * (fVar11 + -1.0);
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x18);
  while( true ) {
    if (lVar6 == 0) goto LAB_00cf0f18;
    if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02c7bf48) break;
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  for (iVar1 = FUN_00d6bb44(lVar6,DAT_0315cc24); iVar1 != 0; iVar1 = iVar1 + -1) {
    fVar10 = (float)FUN_00d08524(uVar3,2,1);
    *(float *)(param_2 + 0x30) = fVar10 * *(float *)(param_2 + 0x30);
  }
LAB_00cf0f18:
  lVar6 = *(long *)(param_2 + 0x20);
  uVar3 = FUN_00d6eb50();
  plVar4 = (long *)FUN_00d6eb5c(uVar3,"*KindredBuffs*");
  puVar7 = (undefined8 *)*plVar4;
  puVar5 = (undefined8 *)*puVar7;
  if (puVar5 != (undefined8 *)0x0) {
    lVar8 = 0;
    do {
      iVar1 = strcmp((char *)*puVar5,PTR_s_Buff_Item_HitByScoutTrap_02beb758);
      if (iVar1 == 0) {
        if (lVar6 == 0) {
          return;
        }
        if ((int)lVar8 != -1) {
          uVar3 = *(undefined8 *)(*plVar4 + (long)(int)lVar8 * 8);
          uVar2 = FUN_00ceb350();
          FUN_00d5c374(0x40800000,0,0,lVar6,lVar6,uVar3,uVar2,1,0,0);
          return;
        }
        return;
      }
      puVar5 = (undefined8 *)puVar7[lVar8 + 1];
      lVar8 = lVar8 + 1;
    } while (puVar5 != (undefined8 *)0x0);
  }
  return;
}




void FUN_00cf0fd4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_b8);
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  FUN_00d4dabc(auStack_a8,1);
  FUN_00cf98bc(auStack_b8);
  uVar3 = FUN_00cf9d84(auStack_b8);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Stealth_02bebaf0);
  FUN_00cf9eec(auStack_b8);
  uVar3 = FUN_00cfab94(auStack_b8);
  lVar4 = FUN_00d09310();
  uVar5 = FUN_00d09384(*(undefined4 *)(lVar4 + 0x24));
  FUN_00cf4164(0x3f800000,uVar5,uVar3,"build://Sounds/ScoutTrap.assetbundle/sfx_scouttrap_beep.mp3",
               0,0,0xffffffff,0,1);
  uVar3 = FUN_00d6eb50();
  uVar3 = FUN_00d6eb5c(uVar3,PTR_s__Item_ScoutTrap__02beb108);
  uVar5 = FUN_00cfaa74(auStack_b8);
  FUN_00d08524(uVar3,6,1);
  FUN_00cf32cc(uVar5,"Effect_ScoutTrap_Active_Enemy",1,0,1,1,"Effect_ScoutTrap_Active");
  uVar5 = FUN_00cfa294(auStack_b8);
  FUN_00d08524(uVar3,6,1);
  FUN_00cf7478(uVar5);
  FUN_00cf7578(uVar5,0);
  uVar5 = FUN_00cfaa74(auStack_b8);
  FUN_00cf3358(0x40000000,uVar5,"Effect_ScoutTrap_Explosion",0,"CenterBody",0,0,0,0);
  uVar5 = FUN_00cfab94(auStack_b8);
  lVar4 = FUN_00d09310();
  uVar6 = FUN_00d093b8(*(undefined4 *)(lVar4 + 0x28));
  FUN_00cf40b8(0x3f800000,uVar6,uVar5,"build://Sounds/Turret.assetbundle/turret_hits_player_01.mp3",
               0,0,0xffffffff,0,1);
  uVar5 = FUN_00cfaf84(auStack_b8);
  FUN_00d08524(uVar3,5,1);
  FUN_00cf5460(uVar5,auStack_a8,0,0,1,0);
  uVar5 = FUN_00cf9ab4(auStack_b8);
  puVar2 = PTR_s_Buff_GloballyVisibleTrueSight_02bebae0;
  FUN_00d08524(uVar3,7,1);
  FUN_00cf44e8(uVar5,puVar2,1,0);
  uVar5 = FUN_00cf9ab4(auStack_b8);
  puVar2 = PTR_s_Buff_ShowGloballyVisible_02bebb20;
  FUN_00d08524(uVar3,7,1);
  FUN_00cf44e8(uVar5,puVar2,1,0);
  FUN_00d4dabc(auStack_a8,0x40000);
  FUN_00cf9eec(auStack_b8);
  uVar5 = FUN_00cfaf84(auStack_b8);
  FUN_00d08524(uVar3,5,1);
  FUN_00cf5460(uVar5,auStack_a8,0,0,1,0);
  uVar3 = FUN_00cfa00c(auStack_b8);
  FUN_00cf6bb0(uVar3,FUN_00cf0da4);
  FUN_00cf6bb8(uVar3,FUN_00cf0e04);
  uVar3 = FUN_00cfa294(auStack_b8);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  FUN_00cfa36c(auStack_b8);
  FUN_00cfb0a4(auStack_b8);
  FUN_00cfb5c4(auStack_b8);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

