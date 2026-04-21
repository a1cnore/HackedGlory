// functions/00d38 — 20 functions
#include "libGameKindred.h"




void FUN_00d380e0(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char *__s1;
  long lVar8;
  uint uVar9;
  int local_188 [2];
  int local_180 [2];
  undefined8 local_178;
  undefined1 auStack_170 [96];
  long local_110 [20];
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d69224(param_1,&local_178);
    FUN_00d66d28(local_178);
    FUN_00d5cf60();
    uVar6 = FUN_00d9e390();
    uVar7 = FUN_00d66d28(local_178);
    FUN_00d4d9e8(auStack_170);
    FUN_00d4db40(auStack_170,uVar6);
    FUN_00d4daf4(auStack_170,1,1,1,0);
    FUN_00d55794(uVar7,local_110,0);
    FUN_00d4db48(0x41200000,auStack_170,local_110);
    FUN_00d4dabc(auStack_170,0x40000);
    uVar2 = FUN_00d9e840(auStack_170,local_110,0x14,0);
    if (uVar2 != 0) {
      uVar5 = 0;
      do {
        uVar6 = FUN_00d5baf8(local_110[uVar5]);
        thunk_FUN_00d9ff34(local_180,uVar6);
        iVar3 = local_180[0];
        thunk_FUN_00d9ff34(local_188,"Idle");
        if (iVar3 == local_188[0]) {
          lVar8 = *(long *)(local_110[uVar5] + 0x18);
          while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02e3ef78))) {
            lVar8 = *(long *)(lVar8 + 0x20);
          }
          iVar3 = FUN_00d5359c(lVar8);
          if (iVar3 != 0) {
            uVar9 = 0;
            do {
              __s1 = (char *)FUN_00d53920(lVar8,uVar9);
              iVar3 = strcmp(__s1,"Emote_Taunt");
              if (iVar3 == 0) {
                FUN_008ff6e4(local_110[uVar5],uVar9);
                break;
              }
              uVar9 = uVar9 + 1;
              uVar4 = FUN_00d5359c(lVar8);
            } while (uVar9 < uVar4);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d382bc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d67d04(0x42700000);
  FUN_00d67b04(0x3dcccccd,param_1);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onBuffIntervalName_02bed520;
  uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d380e0;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x18);
  FUN_00d3e534();
  uVar6 = FUN_00d29db0();
  FUN_00d42654(auStack_50,uVar6);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d383a8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  FUN_00d634b4();
  lVar1 = FUN_00d4a9f0();
  lVar1 = FUN_00d29e8c(lVar1 + 0x10);
  lVar2 = FUN_00d2a370(lVar1 + 0x10);
  *(undefined **)(lVar2 + 8) = PTR_s_Buff_Item_RooksDecree_02beb6e0;
  lVar1 = FUN_00d29e8c(lVar1 + 0xa0);
  lVar2 = FUN_00d396a4(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 8) = 0x19191ccf;
  plVar3 = (long *)FUN_00d2887c(lVar1 + 0xa0);
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_ProtectorContract_Atta_02beb968);
  lVar1 = FUN_00d64980(param_1);
  plVar3 = (long *)FUN_00d2a160(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d38440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x30))(plVar3,PTR_s_Buff_Item_ProtectorContract_Atta_02beb968);
  return;
}




void FUN_00d38444(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  uVar3 = FUN_00d67b78(param_1);
  FUN_00d55794(uVar3,auStack_48,0);
  FUN_00d4db40(param_2,uVar2);
  FUN_00d4daf4(param_2,1,0,0,0);
  FUN_00d4dabc(param_2,1);
  FUN_00d4db48(0x41400000,param_2,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d384f4(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d67c60();
  uVar2 = FUN_00e6a474("Consumed");
  uVar2 = FUN_0091ed5c("Consumed",uVar2,0x12345678);
  (**(code **)(*(long *)(lVar3 + 0x100) + 8))(lVar3 + 0x100,uVar2);
  lVar3 = FUN_00d67c60(param_1);
  uVar2 = FUN_00e6a474("Consumed");
  uVar2 = FUN_0091ed5c("Consumed",uVar2,0x12345678);
  puVar4 = (undefined1 *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x10))(lVar3 + 0x100,uVar2);
  *puVar4 = 0;
  uVar5 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar5,5);
  FUN_00d4bc38();
  uVar5 = FUN_00d4bc10();
  lVar3 = FUN_00d4bce8(uVar5,1);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar6 = FUN_00d39744(lVar3 + 0x10);
  lVar3 = lVar3 + 0xa0;
  *(char **)(lVar6 + 0x20) = "Consumed";
  *(undefined4 *)(lVar6 + 0x18) = 0;
  *(undefined1 *)(lVar6 + 8) = 1;
  *(undefined4 *)(lVar6 + 0x10) = 1;
  uVar5 = FUN_00d31490(lVar3);
  FUN_00d9ca38(uVar5,FUN_00d38444);
  plVar7 = (long *)FUN_00d2b7c8(lVar3);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x70))();
  (**(code **)(*plVar7 + 0x30))(plVar7,0x28);
  plVar7 = (long *)FUN_00d2b6d8(lVar3);
  plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,"ProtectorContract");
  local_58 = FUN_00d386d0;
  local_50 = 2;
  (**(code **)(*plVar7 + 0x20))(plVar7,&local_58);
  uVar5 = FUN_00d314f8(lVar3);
  lVar6 = FUN_00d98a14(uVar5,"Consumed");
  *(undefined1 *)(lVar6 + 0x20) = 1;
  *(undefined4 *)(lVar6 + 0x18) = 4;
  *(undefined1 *)(lVar6 + 0x1c) = 1;
  plVar7 = (long *)FUN_00d2a160(lVar3);
  (**(code **)(*plVar7 + 0x30))(plVar7,PTR_s_Buff_Item_ProtectorContract_Atta_02beb968);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d386d0(void)

{
  FUN_00d085c4(PTR_s__Item_ProtectorContract__02beb1c0,2,1);
  return;
}




void FUN_00d386e8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d085c4(PTR_s__Item_ProtectorContract__02beb1c0,0,1);
  *param_2 = uVar1;
  *param_3 = 0xbf800000;
  return;
}




void FUN_00d3872c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  FUN_00d67b84(*param_1);
  uVar1 = FUN_00d9e390();
  *param_2 = uVar1;
  *param_3 = "CenterBody";
  return;
}




void FUN_00d38768(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2dfe4(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00d38794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,4,FUN_00d386e8);
  return;
}




void FUN_00d38798(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d646fc();
  FUN_00d4ad80(uVar2,"DragonbloodContract");
  lVar3 = FUN_00d4adc4();
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x78))(plVar4,"Bone_CenterMass");
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_ShiverSteel");
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,2);
  FUN_00d4bc10();
  uVar2 = FUN_00d4bc38();
  lVar3 = FUN_00d4bcf8(uVar2,0x100000);
  lVar3 = FUN_00d29e8c(lVar3 + 0x10);
  lVar5 = FUN_00d2a370(lVar3 + 0x10);
  *(undefined **)(lVar5 + 8) = PTR_s_Buff_Item_Shiversteel_02beb778;
  lVar3 = FUN_00d29e8c(lVar3 + 0xa0);
  lVar5 = FUN_00d396a4(lVar3 + 0x10);
  *(undefined4 *)(lVar5 + 8) = 0xd55ca6c;
  lVar5 = FUN_00d29e8c(lVar3 + 0xa0);
  lVar6 = FUN_00d29edc(lVar5 + 0x10);
  lVar3 = lVar5 + 0x88;
  *(code **)(lVar6 + 8) = FUN_00d33588;
  FUN_00d2cf2c(lVar3);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Item_DragonbloodContract_Me_02beb980);
  local_58 = FUN_00d389c0;
  local_50 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2b6d8(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"DragonbloodContract");
  local_58 = FUN_00d389d8;
  local_50 = 2;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0x58))();
  lVar5 = lVar5 + 0xa0;
  FUN_00d2cf2c(lVar5);
  plVar4 = (long *)FUN_00d2cf7c(lVar5);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))
                             (plVar4,PTR_s_Buff_Item_DragonbloodContract_Ra_02beb988);
  local_58 = FUN_00d389c0;
  local_50 = 2;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  plVar4 = (long *)FUN_00d2b6d8(lVar5);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,"DragonbloodContract");
  local_58 = FUN_00d389d8;
  local_50 = 2;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x20))(plVar4,&local_58);
  (**(code **)(*plVar4 + 0x58))();
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d389c0(void)

{
  FUN_00d085c4(PTR_s__Item_DragonbloodContract__02beb1c8,0,1);
  return;
}




void FUN_00d389d8(void)

{
  FUN_00d085c4(PTR_s__Item_DragonbloodContract__02beb1c8,3,1);
  return;
}




void FUN_00d389f0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_DragonbloodContract__02beb1c8);
  local_48[0] = FUN_00d08524(uVar2,1,1);
  local_40 = 1;
  FUN_00d42c70(param_1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d38a74(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d6eb50();
  uVar2 = FUN_00d6eb5c(uVar2,PTR_s__Item_DragonbloodContract__02beb1c8);
  local_48[0] = FUN_00d08524(uVar2,2,1);
  local_40 = 1;
  FUN_00d42c70(param_1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d38af8(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined *puVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_170 [64];
  float local_130 [4];
  float local_120 [4];
  long local_110;
  undefined8 local_108;
  undefined1 auStack_100 [88];
  undefined1 auStack_a8 [48];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  thunk_FUN_00d69d94(param_1,&local_108,&local_110);
  lVar11 = FUN_00d67b78(local_108);
  FUN_00d5bc6c(local_110);
  lVar12 = FUN_00d9e390();
  if ((((lVar12 != 0) && (local_110 != 0)) &&
      ((uVar1 = *(ushort *)(lVar11 + 0x88) & 0x1f, uVar1 == 0x1f ||
       (1 < *(ushort *)(lVar11 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) &&
     ((iVar2 = *(int *)(lVar12 + 0x260), iVar8 = FUN_00d5bc5c(), iVar2 == iVar8 &&
      (*(int *)(lVar12 + 0x260) != *(int *)(lVar11 + 0x260))))) {
    cVar6 = FUN_00d55870(lVar12);
    cVar7 = FUN_00d55870(lVar11);
    if ((cVar6 == cVar7) && ((*(ushort *)(local_110 + 0x2f4) & 0x360) != 0)) {
      cVar6 = FUN_00d55870(lVar12);
      cVar7 = FUN_00d55870(lVar11);
      if (cVar6 == cVar7) {
        FUN_00d55794(lVar11,local_120,0);
        FUN_00d55794(local_110,local_130,0);
        uVar13 = FUN_00d6eb50();
        uVar13 = FUN_00d6eb5c(uVar13,PTR_s__Item_IronguardContract__02beb1b8);
        fVar17 = (float)local_120._4_8_ - (float)local_130._4_8_;
        fVar18 = SUB84(local_120._4_8_,4) - SUB84(local_130._4_8_,4);
        fVar14 = (float)FUN_00d08524(uVar13,0,1);
        fVar15 = (float)FUN_00d08524(uVar13,0,1);
        if ((local_120[0] - local_130[0]) * (local_120[0] - local_130[0]) + fVar17 * fVar17 +
            fVar18 * fVar18 < fVar14 * fVar15) {
          uVar16 = FUN_00d08524(uVar13,1,1);
          uVar13 = FUN_00d08524(uVar13,2,1);
          FUN_00daa4a4(uVar16,auStack_170,*(undefined4 *)(lVar11 + 0x260),
                       *(undefined4 *)(lVar11 + 0x260),0xffffffff,0xffffffff,0xee,0xffffffff);
          FUN_00910c0c(auStack_170);
          FUN_00d043c0(uVar13,auStack_a8,*(undefined4 *)(lVar11 + 0x260),2,0);
          FUN_00ce20fc(auStack_a8);
          puVar5 = PTR_s_Buff_Item_IronguardContract_Heal_02beb990;
          uVar3 = *(undefined4 *)(lVar11 + 0x260);
          uVar9 = FUN_00ceb350();
          FUN_00cfe864(0x3e800000,0,0,auStack_100,uVar3,uVar3,puVar5,uVar9,1,0,0);
          FUN_00ce20fc(auStack_100);
          FUN_00daa4a4(uVar16,auStack_170,*(undefined4 *)(lVar11 + 0x260),
                       *(undefined4 *)(lVar12 + 0x260),0xffffffff,0xffffffff,0xee,0xffffffff);
          FUN_00910c0c(auStack_170);
          FUN_00d043c0(uVar13,auStack_a8,*(undefined4 *)(lVar12 + 0x260),2,0);
          FUN_00ce20fc(auStack_a8);
          puVar5 = PTR_s_Buff_Item_IronguardContract_Heal_02beb990;
          uVar3 = *(undefined4 *)(lVar11 + 0x260);
          uVar9 = *(undefined4 *)(lVar12 + 0x260);
          uVar10 = FUN_00ceb350();
          FUN_00cfe864(0x3e800000,0,0,auStack_100,uVar3,uVar9,puVar5,uVar10,1,0,0);
          FUN_00ce20fc(auStack_100);
        }
      }
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d38e34(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onActorDieName_02bed590;
    uVar3 = FUN_00e6a474(PTR_s_onActorDieName_02bed590);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00d38af8;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00d38eb4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a8bc();
  FUN_00d42654(auStack_40,uVar2);
  uVar2 = FUN_00d47c14(uVar2);
  uVar2 = FUN_00da2040(uVar2,"Effect_IGC_BurstHeal");
  FUN_00da2070(uVar2,1);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d38f60(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,4);
  FUN_00d4bc24();
  lVar3 = FUN_00d4bc38();
  plVar4 = (long *)FUN_00d2b728(lVar3 + 0x10);
  local_38 = FUN_00d38fe0;
  local_30 = 2;
  (**(code **)(*plVar4 + 0x40))(plVar4,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d38fe0(void)

{
  FUN_00d085c4(PTR_s__Item_MetalJacket__02beb1d8,0,1);
  return;
}




bool FUN_00d38ff8(undefined8 param_1,long param_2)

{
  return (*(byte *)(*(long *)(param_2 + 0x20) + 0x2f9) & 2) == 0;
}

