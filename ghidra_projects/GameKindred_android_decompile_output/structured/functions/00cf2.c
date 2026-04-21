// functions/00cf2 — 33 functions
#include "libGameKindred.h"




void FUN_00cf2018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [112];
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00d50ef8(param_1);
    FUN_00d55794(uVar4,auStack_c0,0);
    FUN_00d4e934(auStack_b0,DAT_0315ccfc);
    lVar5 = FUN_00d50ef8(param_1);
    FUN_00d4e980(auStack_b0,*(undefined4 *)(lVar5 + 0x260));
    FUN_00d4db40(auStack_b0,uVar4);
    FUN_00d4daf4(auStack_b0,1,0,0,0);
    FUN_00d4db48(0x44960000,auStack_b0,auStack_c0);
    iVar2 = FUN_00d9e840(auStack_b0,&local_40,1,0);
    if (iVar2 != 0) {
      uVar4 = local_40;
    }
    FUN_00d55794(uVar4,param_3,0);
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf2118(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d50ef8();
  FUN_00d4db40(param_2,uVar1);
  FUN_00d4daf4(param_2,1,0,0,0);
  FUN_00d4ddc4(param_2);
  return;
}




void FUN_00cf2160(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined1 auStack_78 [16];
  float local_68 [2];
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar8 = FUN_00d085c4(PTR_s__Item_TeleportBoots__02beb150,1,1);
  FUN_00cfb5b4(auStack_78);
  lVar3 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar3 + 0x10) = 1;
  FUN_00cf9ea4(auStack_78);
  uVar4 = FUN_00cfa9e4(auStack_78);
  FUN_00cf3048(uVar4,"Idle",1,1,0,0);
  plVar5 = (long *)FUN_00cfb1c4(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))(plVar5,"*GenericLocator*",0);
  uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,FUN_00cf1e44);
  plVar5 = (long *)FUN_00cf9b8c(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x50))
                             (plVar5,PTR_s_Buff_Item_TeleportBoots_EndPoint_02beb8e0,uVar4);
  fVar9 = (float)uVar8;
  local_60 = 1;
  local_68[0] = fVar9;
  (**(code **)(*plVar5 + 0x18))(plVar5,local_68);
  plVar5 = (long *)FUN_00cf9b8c(auStack_78);
  (**(code **)(*plVar5 + 0x50))(plVar5,PTR_s_Buff_GloballyVisibleTrueSight_02bebae0,uVar4);
  plVar5 = (long *)FUN_00cfab04(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Teleport_Channel");
  (**(code **)(*plVar5 + 0xb0))(plVar5,1);
  uVar4 = FUN_00d6eb50();
  uVar4 = FUN_00d6eb5c(uVar4,PTR_s__Item_SprintBoots__02beb138);
  FUN_00cf98bc(auStack_78);
  uVar6 = FUN_00cf9ab4(auStack_78);
  FUN_00cf44e8(uVar8,uVar6,PTR_s_Buff_Item_TeleportBoots_Channeli_02beb8d8,1,0);
  uVar6 = FUN_00cf9ab4(auStack_78);
  puVar2 = PTR_s_Buff_Item_SprintBootsSprint_02beb728;
  fVar7 = (float)FUN_00d08524(uVar4,2,1);
  FUN_00cf44e8(fVar9 + fVar7,uVar6,puVar2,1,0);
  FUN_00cf9eec(auStack_78);
  FUN_00cf99dc(auStack_78);
  uVar4 = FUN_00cf9ab4(auStack_78);
  FUN_00cf44e8(uVar8,uVar4,PTR_s_Buff_Item_TeleportBoots_Structur_02beb8e8,1,0);
  uVar4 = FUN_00cf9ab4(auStack_78);
  FUN_00cf44e8(uVar8,uVar4,PTR_s_Buff_GloballyVisibleTrueSight_02bebae0,1,0);
  FUN_00cf9eec(auStack_78);
  FUN_00cfa294(auStack_78);
  FUN_00cf7478(fVar9 + -0.2);
  plVar5 = (long *)FUN_00cfab04(auStack_78);
  plVar5 = (long *)(**(code **)(*plVar5 + 0x58))();
  plVar5 = (long *)(**(code **)(*plVar5 + 0x48))(plVar5,"Effect_Teleport_Channel_End");
  (**(code **)(*plVar5 + 0x78))(plVar5,0);
  FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf98bc(auStack_78);
  FUN_00cfb014(auStack_78);
  plVar5 = (long *)FUN_00cfb494(auStack_78);
  (**(code **)(*plVar5 + 0x50))(plVar5,FUN_00cf2018);
  uVar4 = FUN_00cfaef4(auStack_78);
  uVar4 = FUN_00d9cff4(uVar4,FUN_00cf2118);
  FUN_00d9cb40(uVar4,PTR_s_Buff_Item_TeleportBoots_EndPoint_02beb8e0);
  uVar4 = FUN_00cfab4c(auStack_78);
  FUN_00cf3a9c(0x40000000,uVar4,"Effect_Teleport_Finish",0);
  FUN_00cfa294(auStack_78);
  FUN_00cf7478(0x3dcccccd);
  lVar3 = FUN_00cfa6cc(auStack_78);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_78);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf24b4(void)

{
  long lVar1;
  long *plVar2;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  plVar2 = (long *)FUN_00cfb1c4(auStack_38);
  (**(code **)(*plVar2 + 0x50))(plVar2,"*Boombox*",0);
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf252c(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  byte local_c8 [16];
  long alStack_b8 [7];
  byte local_80 [16];
  long local_70 [2];
  
  lVar3 = tpidr_el0;
  local_70[1] = *(long *)(lVar3 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d51778(param_1);
    iVar4 = rand();
    memset(local_c8,0,0x60);
    uVar1 = iVar4 % 4 + 1;
    uVar8 = FUN_00d70e90();
    FUN_00d70c7c(uVar8,local_c8,uVar1);
    if (-1 < iVar4 % 4) {
      uVar6 = 0;
      do {
        uVar8 = FUN_00d6eb50();
        if ((local_c8[uVar6 * 0x18] & 1) == 0) {
          pbVar10 = local_c8 + uVar6 * 0x18 + 1;
        }
        else {
          pbVar10 = (byte *)alStack_b8[uVar6 * 3];
        }
        uVar5 = FUN_00d6e9d4(uVar8,pbVar10);
        if (lVar7 != 0) {
          uVar12 = 0x10000;
          lVar9 = lVar7;
LAB_00cf2630:
          do {
            do {
              lVar11 = lVar9;
              if ((lVar11 != lVar7) &&
                 (lVar9 = FUN_019865b4(*(undefined8 *)(lVar11 + 8),0x11ce033b), lVar9 != 0)) {
                (**(code **)(lVar9 + 8))(lVar11,uVar5);
              }
              if (((uVar12 & 0xffff) < uVar12 >> 0x10) &&
                 (lVar9 = *(long *)(lVar11 + 0x18), lVar9 != 0)) {
                uVar12 = uVar12 & 0xffff0000 | uVar12 + 1 & 0xffff;
                goto LAB_00cf2630;
              }
              if ((uVar12 & 0xffff) == 0) goto LAB_00cf2698;
              lVar9 = *(long *)(lVar11 + 0x20);
            } while (*(long *)(lVar11 + 0x20) != 0);
            lVar11 = *(long *)(lVar11 + 0x10);
            if ((lVar11 == 0) || (uVar2 = uVar12 - 1 & 0xffff, uVar2 == 0)) break;
            uVar12 = uVar2 | uVar12 & 0xffff0000;
            while (lVar9 = *(long *)(lVar11 + 0x20), lVar9 == 0) {
              if ((uVar12 - 1 & 0xffff) == 0) goto LAB_00cf2698;
              lVar11 = *(long *)(lVar11 + 0x10);
              uVar12 = uVar12 & 0xffff0000 | uVar12 - 1 & 0xffff;
              if (lVar11 == 0) goto LAB_00cf2698;
            }
          } while( true );
        }
LAB_00cf2698:
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
    lVar7 = 0;
    do {
      if ((local_80[lVar7] & 1) != 0) {
        operator_delete(*(void **)((long)local_70 + lVar7));
      }
      lVar7 = lVar7 + -0x18;
    } while (lVar7 != -0x60);
  }
  if (*(long *)(lVar3 + 0x28) == local_70[1]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf2700(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00d4dabc(auStack_98,1);
  FUN_00cf98bc(auStack_a8);
  uVar2 = FUN_00cf9d84(auStack_a8);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Stealth_02bebaf0);
  uVar2 = FUN_00cfab94(auStack_a8);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,
               "build://Sounds/UI.assetbundle/ui_tutorial_frontend_chest_open.mp3",0,0,0xffffffff,0,
               0);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3fa66666);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3358(0x40000000,uVar2,"Effect_ScoutTrap_Explosion",0,"CenterBody",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_a8);
  FUN_00cf4164(0x3f800000,0x3f800000,uVar2,
               "build://Sounds/UI.assetbundle/ui_tutorial_frontend_cards_whoosh.mp3",0,0,0xffffffff,
               0,0);
  uVar2 = FUN_00cf9cf4(auStack_a8);
  FUN_00cf2e48(uVar2,FUN_00cf252c);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar2,0);
  FUN_00cfa36c(auStack_a8);
  FUN_00cfb0a4(auStack_a8);
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00cf28a4(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [96];
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d4d9e8(auStack_98);
  uVar3 = FUN_00d50ef8(param_1);
  FUN_00d4db40(auStack_98,uVar3);
  FUN_00d4daf4(auStack_98,1,0,0,0);
  FUN_00d4dabc(auStack_98,1);
  uVar3 = FUN_00d50ef8(param_1);
  FUN_00d55794(uVar3,auStack_38,0);
  FUN_00d50cc8(param_1);
  FUN_00d4db48(auStack_98,auStack_38);
  iVar2 = FUN_00d9e840(auStack_98,auStack_38,1,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return (ulong)(iVar2 == 0) << 10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00cf2970(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x10);
  do {
    if (puVar1[-1] == 0) {
      *puVar1 = &PTR_FUN_0280f2e0;
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




void FUN_00cf29cc(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cf29d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 8))(param_2);
  return;
}




void FUN_00cf29d8(undefined8 *param_1)

{
  *param_1 = 0;
  FUN_00cfb5b4(param_1 + 1);
  return;
}




undefined8 FUN_00cf29e0(ulong param_1,long *param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  
  if (param_2[1] == 0) {
LAB_00cf2ad0:
    uVar4 = 1;
  }
  else {
    plVar5 = (long *)*param_2;
    do {
      uVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,param_3);
      fVar6 = (float)(**(code **)(*(long *)*param_2 + 0x48))((long *)*param_2,param_3);
      (**(code **)(*(long *)*param_2 + 0x38))(param_1,(long *)*param_2,param_3);
      uVar3 = (**(code **)(*(long *)*param_2 + 0x28))((long *)*param_2,param_3);
      if ((uVar3 & 1) != 0) {
        iVar2 = FUN_00d507f8(param_3);
        if (iVar2 != 2) {
          return 0;
        }
        plVar5 = (long *)(**(code **)(*(long *)*param_2 + 0x40))();
        *param_2 = (long)plVar5;
        if (plVar5 == (long *)0x0) goto LAB_00cf2ad0;
        uVar1 = (**(code **)(*plVar5 + 0x28))(plVar5,param_3);
      }
      fVar6 = (float)param_1 - fVar6;
      param_1 = (ulong)(uint)fVar6;
      if (fVar6 <= 0.0 && (uVar1 & 1) == 0) {
        return 0;
      }
      plVar5 = (long *)*param_2;
      uVar4 = 0;
    } while (plVar5 != (long *)0x0);
  }
  return uVar4;
}




void FUN_00cf2af0(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 8); plVar1 != (long *)0x0;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1)) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
  }
  return;
}




float FUN_00cf2b40(long param_1,undefined8 param_2)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 0.0;
  for (plVar1 = *(long **)(param_1 + 8); plVar1 != (long *)0x0;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1)) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x48))(plVar1,param_2);
    fVar3 = fVar3 + fVar2;
  }
  return fVar3;
}




void FUN_00cf2ba4(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  
  plVar1 = (long *)param_1[1];
  uVar2 = 0;
  if (plVar1 != (long *)0x0) {
    do {
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
      plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1);
    } while (plVar1 != (long *)0x0);
    uVar2 = param_1[1];
  }
  *param_1 = uVar2;
  return;
}




uint FUN_00cf2c08(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  
  uVar2 = 0;
  for (plVar3 = *(long **)(param_1 + 8); plVar3 != (long *)0x0;
      plVar3 = (long *)(**(code **)(*plVar3 + 0x40))(plVar3)) {
    uVar1 = (**(code **)(*plVar3 + 0x30))(plVar3,param_2);
    uVar2 = uVar1 | uVar2;
  }
  return uVar2;
}




void FUN_00cf2c6c(long param_1,undefined8 param_2)

{
  long *plVar1;
  
  for (plVar1 = *(long **)(param_1 + 8); plVar1 != (long *)0x0;
      plVar1 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1)) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  return;
}




undefined8 FUN_00cf2cbc(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  
  param_1 = (long *)*param_1;
  while( true ) {
    if (param_1 == (long *)0x0) {
      return 1;
    }
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_2);
    if ((uVar1 & 1) == 0) break;
    param_1 = (long *)(**(code **)(*param_1 + 0x40))(param_1);
  }
  return 0;
}




void FUN_00cf2d1c(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = (long *)param_1[1];
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x40))(plVar1);
    FUN_00983160(plVar1);
    plVar1 = plVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00cf2d74(undefined8 *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  
  param_1[1] = param_2;
  param_1[2] = param_2;
  *param_1 = param_2;
  pcVar2 = *(code **)(*param_2 + 0x40);
  while (lVar1 = (*pcVar2)(param_2), lVar1 != 0) {
    param_2 = (long *)(**(code **)(*(long *)param_1[2] + 0x40))();
    param_1[2] = param_2;
    pcVar2 = *(code **)(*param_2 + 0x40);
  }
  return;
}




void FUN_00cf2dcc(long *param_1,long param_2)

{
  long *plVar1;
  
  plVar1 = param_1 + 1;
  if (*plVar1 == 0) {
    param_1[2] = param_2;
    *param_1 = param_2;
  }
  else {
    plVar1 = param_1 + 2;
    FUN_00cfc474(*plVar1,param_2);
  }
  *plVar1 = param_2;
  return;
}




void FUN_00cf2e10(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0280f308;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00cf2e48(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf2e50(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_00cf2e5c(long param_1,undefined8 param_2)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00cf2e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(param_2);
    return;
  }
  return;
}




void FUN_00cf2e70(long param_1,undefined8 param_2)

{
  if (*(char *)(param_1 + 0x18) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00cf2e84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x10))(0,param_2);
    return;
  }
  return;
}




void FUN_00cf2e8c(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f368;
  param_1[2] = 0;
  return;
}




void FUN_00cf2ec0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf2ec8(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00cf2ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))(param_2);
  return;
}




uint FUN_00cf2ed4(undefined8 param_1)

{
  ushort uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  lVar2 = FUN_00d50ef8();
  uVar1 = *(ushort *)(lVar2 + 0x2f8);
  if ((~uVar1 & 0x1e) == 0) {
    uVar3 = FUN_00d5095c(param_1);
    uVar1 = *(ushort *)(lVar2 + 0x2f8);
    uVar5 = 0;
    if ((uVar3 & 1) == 0) {
      uVar5 = 0x80;
    }
  }
  else {
    uVar5 = 0;
  }
  uVar4 = (uint)uVar1;
  if ((uVar1 >> 3 & 1) != 0) {
    uVar3 = FUN_00d50968(param_1);
    uVar4 = (uint)*(ushort *)(lVar2 + 0x2f8);
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar5 | 0x100;
    }
  }
  if ((uVar4 >> 5 & 1) != 0) {
    uVar3 = FUN_00d50974(param_1);
    if ((uVar3 & 1) == 0) {
      uVar5 = uVar5 | 0x200;
    }
  }
  return uVar5;
}




void FUN_00cf2f70(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f3c8;
  param_1[2] = 0;
  return;
}




void FUN_00cf2fa4(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  return;
}




undefined4 FUN_00cf2fb0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_00d50ef8(param_2);
  uVar3 = FUN_00d44be0(uVar2,*(undefined8 *)(param_1 + 0x10));
  uVar1 = 0;
  if ((uVar3 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}




void FUN_00cf2fec(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280f428;
  FUN_00d9ff2c(param_1 + 2);
  param_1[3] = 0;
  FUN_00d9ff2c(param_1 + 4);
  *(undefined1 *)((long)param_1 + 0x2a) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x3f800000;
  *(undefined2 *)(param_1 + 5) = 0x100;
  param_1[6] = 0;
  return;
}

