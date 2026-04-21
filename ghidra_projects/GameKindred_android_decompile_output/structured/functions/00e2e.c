// functions/00e2e — 17 functions
#include "libGameKindred.h"




void FUN_00e2e060(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  uVar3 = FUN_00d29f44(lVar2 + 0x10);
  local_48[0] = 0x3fa66666;
  local_40 = 1;
  FUN_00d47690(uVar3,1,local_48);
  plVar4 = (long *)FUN_00d2ccfc(lVar2 + 0x10);
  (**(code **)(*plVar4 + 0x38))();
  lVar2 = FUN_00d63f30(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x68))(plVar4,"CenterBody");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Gwen_Cleanse");
  local_48[0] = 0x3f800000;
  local_40 = 1;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,local_48);
  (**(code **)(*plVar4 + 0x78))(plVar4,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2e154(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2ccfc(lVar2 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  uVar4 = FUN_00d29f44(lVar2 + 0x10);
  local_48[0] = 0x3fa66666;
  local_40 = 1;
  FUN_00d47690(uVar4,1,local_48);
  lVar2 = FUN_00d63f30(param_1);
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x68))(plVar3,"CenterBody");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Gwen_Cleanse");
  local_48[0] = 0x3f800000;
  local_40 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0x60))(plVar3,local_48);
  (**(code **)(*plVar3 + 0x78))(plVar3,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2e248(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  int local_74;
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69554(param_1,&local_70,&local_74);
  lVar5 = FUN_00d66d28(local_70);
  if ((local_74 == DAT_031b18b8) && (uVar6 = FUN_00ceab48(), (uVar6 & 1) != 0)) {
    uVar1 = *(undefined4 *)(lVar5 + 0x260);
    uVar3 = FUN_00d66d34(local_70);
    iVar4 = FUN_00d66cf4(local_70);
    FUN_00d048bc(auStack_68,uVar1,uVar3,iVar4 + 1,1);
    FUN_00ce20fc(auStack_68);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2e304(void)

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
  uVar2 = FUN_00d6639c();
  FUN_00d4b23c(uVar2,PTR_s_Ability__Lyra__C_02bef1a0);
  lVar3 = FUN_00d4b280();
  plVar4 = (long *)FUN_00d2a110(lVar3 + 0x10);
  local_38 = FUN_00e2e390;
  local_30 = 3;
  (**(code **)(*plVar4 + 0x30))(plVar4,0x10,1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2e390(undefined8 param_1)

{
  FUN_00d59f54(param_1,3,10,0x19,0);
  return;
}




float FUN_00e2e3a4(undefined8 *param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = FUN_00d426b0(*param_1);
  fVar2 = (float)thunk_FUN_00d086f0(lVar1,0,1);
  fVar3 = (float)thunk_FUN_00d086f0(lVar1,4,1);
  return fVar2 + fVar3 * *(float *)(*(long *)(lVar1 + 0x40) + 0xec);
}




void FUN_00e2e400(undefined8 param_1)

{
  long lVar1;
  code *local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = FUN_00e2e3a4;
  local_30 = 5;
  FUN_00d42b30(0,0x3f800000,param_1,&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2e464(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar3 = FUN_00d9e390();
  FUN_00d59f54(uVar3,3,3,0x19,0);
  FUN_00d67d04(param_1);
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar4 + 0x30);
  FUN_00d3e534();
  uVar5 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar5);
  uVar5 = FUN_00d47d9c(uVar5);
  uVar5 = FUN_00da2040(uVar5,"Effect_Lyra_Portal_Form_E");
  FUN_00da2048(uVar5,"Effect_Lyra_Portal_Form_A");
  lVar4 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar4 + 0x18);
  FUN_00d3e534();
  uVar5 = FUN_00d2a504();
  FUN_00d42654(auStack_50,uVar5);
  FUN_00d3e534();
  uVar5 = FUN_00d2cb84();
  FUN_00d42654(auStack_50,uVar5);
  puVar2 = PTR_s_Buff_Lyra_Portal_02bf0bc0;
  auVar6 = FUN_00d59f54(uVar3,3,4,0x19,0);
  FUN_00d3e888(auVar6,0,0,uVar5,puVar2,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar3 = FUN_00d2a6c0();
  FUN_00d42654(auStack_50,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00e2e5c8(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  FUN_00cedce4();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    for (lVar1 = *(long *)(lVar1 + 0x18); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_02c7bf48) {
        uVar2 = FUN_00d6bbac(lVar1,DAT_031ba71c,0);
        if ((uVar2 & 1) == 0) {
          uVar3 = FUN_00d6bbac(lVar1,DAT_031ba720,0);
          return uVar3;
        }
        return 1;
      }
    }
  }
  return 0;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e2e654(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  byte *pbVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined1 local_64;
  undefined1 local_63;
  undefined2 local_62;
  undefined1 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_d0);
  puVar3 = PTR_s_portal_cooldown_02bf0bc8;
  uVar5 = FUN_00e6a474(PTR_s_portal_cooldown_02bf0bc8);
  uVar5 = FUN_0091ed5c(puVar3,uVar5,0x12345678);
  pbVar7 = (byte *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  bVar4 = FUN_00e2e5c8();
  puVar3 = PTR_s_pfx_id_02bf0bd0;
  bVar4 = bVar4 & 1;
  uVar5 = FUN_00e6a474(PTR_s_pfx_id_02bf0bd0);
  uVar5 = FUN_0091ed5c(puVar3,uVar5,0x12345678);
  piVar8 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  if ((*piVar8 == -1) || (*pbVar7 != bVar4)) {
    uVar9 = FUN_00d66d28(local_d0);
    plVar10 = (long *)FUN_00d5bae0();
    if (*piVar8 == -1) {
      iVar6 = FUN_00ceb350();
      *piVar8 = iVar6;
    }
    else {
      (**(code **)(*plVar10 + 0xd0))(plVar10);
    }
    uVar16 = 0x811c9dc5;
    FUN_00d5cf60(uVar9);
    FUN_00d9e390();
    uVar11 = FUN_00d5babc();
    uVar12 = FUN_00d9e99c(uVar9);
    pbVar1 = (byte *)"Effect_Lyra_Portal_Blocked_E";
    pbVar14 = (byte *)"Effect_Lyra_Portal_Blocked_A";
    if (bVar4 == 0) {
      pbVar1 = (byte *)"Effect_Lyra_Portal_E";
      pbVar14 = (byte *)"Effect_Lyra_Portal_A";
    }
    if ((uVar12 & 1) == 0) {
      pbVar14 = pbVar1;
    }
    uVar15 = (uint)*pbVar14;
    local_b8 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    if (*pbVar14 != 0) {
      do {
        pbVar14 = pbVar14 + 1;
        uVar16 = (uVar16 ^ uVar15) * 0x1000193;
        uVar15 = (uint)*pbVar14;
      } while (*pbVar14 != 0);
    }
    local_94 = 0xff000000;
    local_84 = DAT_03218f40;
    local_7c = DAT_03218f48;
    local_8c = _DAT_03218ef8;
    local_9c = 0;
    local_78 = 0;
    local_70 = 0;
    local_6c = 2;
    local_62 = 0;
    local_64 = 1;
    local_60 = 1;
    local_63 = 1;
    local_a4 = 0xbf800000;
    local_a0 = *piVar8;
    uStack_b0 = uVar11;
    local_a8 = uVar16;
    (**(code **)(*plVar10 + 0xa0))(plVar10,&local_c8);
    if (bVar4 == 0) {
      lVar13 = FUN_00d09310();
      FUN_00d09c20(*(undefined4 *)(lVar13 + 0x300));
      (**(code **)(*plVar10 + 0x100))
                (plVar10,"Sound_Lyra_Ability_C_Available",0,1,0xffffffff,1,uVar11);
    }
    *pbVar7 = bVar4;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2e8f4(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = FUN_00d67c60();
  puVar1 = PTR_s_pfx_id_02bf0bd0;
  uVar2 = FUN_00e6a474(PTR_s_pfx_id_02bf0bd0);
  uVar2 = FUN_0091ed5c(puVar1,uVar2,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(lVar3 + 0x100) + 0x10))(lVar3 + 0x100,uVar2);
  *param_2 = *puVar4;
  return;
}




void FUN_00e2e964(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [40];
  long local_58;
  long lStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  FUN_00d4d634(auStack_80);
  FUN_00d4d66c(auStack_80,uVar2);
  FUN_00d4d678(auStack_80,"Lyra_Portal");
  FUN_00d9e840(auStack_80,&local_58,2,0);
  lVar3 = FUN_00d66d28(*param_1);
  if (local_58 != lVar3) {
    lStack_50 = local_58;
  }
  FUN_00d55794(lStack_50,auStack_90,0);
  uVar2 = FUN_00da2eb4(param_2);
  uVar4 = FUN_00ef00a0(uVar2,auStack_90,param_3,0);
  if ((uVar4 & 1) == 0) {
    FUN_00d55794(param_2,param_3,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2ea58(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [40];
  long local_48;
  long lStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d66d28(*param_1);
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  FUN_00d4d634(auStack_70);
  FUN_00d4d66c(auStack_70,uVar2);
  FUN_00d4d678(auStack_70,"Lyra_Portal");
  FUN_00d9e840(auStack_70,&local_48,2,0);
  lVar3 = FUN_00d66d28(*param_1);
  if (local_48 != lVar3) {
    lStack_40 = local_48;
  }
  FUN_00d55794(lStack_40,param_2,0);
  *(undefined4 *)(param_2 + 4) = 0x3fc00000;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2eb1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00d67b78();
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  FUN_00d4dabc(param_2,1);
  FUN_00d4daf4(param_2,0,1,0,uVar1);
  return;
}




void FUN_00e2eb68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00d67b78();
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  FUN_00d4dabc(param_2,1);
  FUN_00d4daf4(param_2,1,1,1,uVar1);
  return;
}




void FUN_00e2ebb4(undefined8 param_1,undefined8 param_2)

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
  FUN_00d4dabc(param_2,1);
  FUN_00d4daf4(param_2,1,1,1,uVar3);
  FUN_00d59f54(uVar3,3,5,0x19,0);
  FUN_00d4db48(param_2,auStack_48);
  FUN_00d4dcfc(param_2,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2ec78(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  byte bVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined4 local_80 [2];
  undefined4 local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  lVar6 = FUN_00d9e390();
  FUN_00d67b04(0x3dcccccd,param_1);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) == 0) {
    lVar8 = FUN_00d67c60(param_1);
    lVar12 = lVar8 + 0x100;
    bVar4 = FUN_00e2e5c8();
    uVar5 = (*(code *)**(undefined8 **)(lVar8 + 0x100))(lVar12,PTR_s_portal_cooldown_02bf0bc8);
    pbVar9 = (byte *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar12,uVar5);
    *pbVar9 = bVar4 & 1;
    lVar10 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_pfx_id_02bf0bd0;
    uVar5 = FUN_00e6a474(PTR_s_pfx_id_02bf0bd0);
    uVar5 = FUN_0091ed5c(puVar3,uVar5,0x12345678);
    uVar5 = (**(code **)(*(long *)(lVar10 + 0x100) + 8))(lVar10 + 0x100,uVar5);
    puVar11 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar12,uVar5);
    *puVar11 = 0xffffffff;
    lVar12 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar5 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar5 = FUN_0091ed5c(puVar3,uVar5,0x12345678);
    *(undefined4 *)(lVar12 + 0x38 + (ulong)*(uint *)(lVar12 + 0xf8) * 4) = uVar5;
    uVar1 = *(uint *)(lVar12 + 0xf8);
    *(code **)(lVar12 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2e654;
    *(uint *)(lVar12 + 0xf8) = uVar1 + 1;
    lVar12 = FUN_00d67c60(param_1);
    FUN_00d425ec(local_80,lVar12 + 0x18);
    FUN_00d3e534();
    uVar13 = FUN_00e30e68();
    FUN_00d42654(local_80,uVar13);
    FUN_00d3f9f0(uVar13,FUN_00e2e8f4);
  }
  lVar12 = FUN_00d63f30(param_1);
  lVar12 = lVar12 + 0x10;
  plVar14 = (long *)FUN_00d2cc5c(lVar12);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x38))(plVar14,"Sound_Lyra_Ability_C_Start");
  lVar8 = FUN_00d09310();
  FUN_00d09c20(*(undefined4 *)(lVar8 + 0x300));
  (**(code **)(*plVar14 + 0x28))(plVar14);
  uVar13 = FUN_00d31490(lVar12);
  FUN_00d9ca38(uVar13,FUN_00e2eb1c);
  plVar14 = (long *)FUN_00d2cf7c(lVar12);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x30))
                              (plVar14,PTR_s_Buff_Lyra_PortalRecentlyUsed_02bf0bd8);
  local_80[0] = FUN_00d59f54(lVar6,3,7,0x19,0);
  local_78 = 1;
  (**(code **)(*plVar14 + 0x18))(plVar14,local_80);
  lVar12 = FUN_00d63f30(param_1);
  uVar13 = FUN_00d31490(lVar12 + 0x10);
  FUN_00d9ca38(uVar13,FUN_00e2eb68);
  plVar14 = (long *)FUN_00d2cf7c(lVar12 + 0x10);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,PTR_s_Buff_Lyra_PortalAntiSnipe_02bf0be0)
  ;
  (**(code **)(*plVar14 + 0x30))(plVar14,*(undefined4 *)(lVar6 + 0x260));
  lVar12 = FUN_00d65010(param_1);
  plVar14 = (long *)FUN_00d2945c(lVar12 + 0x10);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x68))(plVar14,"CenterBody");
  plVar14 = (long *)(**(code **)(*plVar14 + 0x48))(plVar14,"Effect_Lyra_Portal_Link_E");
  plVar14 = (long *)(**(code **)(*plVar14 + 0x50))(plVar14,"Effect_Lyra_Portal_Link_A");
  plVar14 = (long *)(**(code **)(*plVar14 + 0xa8))(plVar14,FUN_00e2ea58);
  (**(code **)(*plVar14 + 0x90))();
  uVar13 = FUN_00d64d7c(param_1);
  lVar12 = FUN_00d4891c(0x3dcccccd,uVar13,0);
  lVar12 = lVar12 + 0x10;
  uVar13 = FUN_00d39b7c(lVar12);
  uVar13 = FUN_00d9cef8(uVar13,FUN_00e2ebb4);
  uVar13 = FUN_00d9cb80(uVar13,PTR_s_Buff_Lyra_PortalRecentlyUsed_02bf0bd8);
  FUN_00d9cb80(uVar13,PTR_s_Buff_Lyra_PortalAntiSnipe_02bf0be0);
  plVar14 = (long *)FUN_00d2cf7c(lVar12);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x30))
                              (plVar14,PTR_s_Buff_Lyra_PortalRecentlyUsed_02bf0bd8);
  local_80[0] = FUN_00d59f54(lVar6,3,6,0x19,0);
  local_78 = 1;
  (**(code **)(*plVar14 + 0x18))(plVar14,local_80);
  plVar14 = (long *)FUN_00d2cf7c(lVar12);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x30))
                              (plVar14,PTR_s_Buff_Lyra_PortalSpeedBoost_02bf0be8);
  local_80[0] = FUN_00d59f54(lVar6,3,9,0x19,0);
  local_78 = 1;
  plVar14 = (long *)(**(code **)(*plVar14 + 0x18))(plVar14,local_80);
  (**(code **)(*plVar14 + 0x30))(plVar14,*(undefined4 *)(lVar6 + 0x260));
  plVar14 = (long *)FUN_00d44f38(lVar12);
  (**(code **)(*plVar14 + 0x30))(plVar14,FUN_00e2e964);
  plVar14 = (long *)FUN_00d2cc5c(lVar12);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x30))();
  plVar14 = (long *)(**(code **)(*plVar14 + 0x38))(plVar14,"Sound_Lyra_Ability_C_Arriving");
  plVar14 = (long *)(**(code **)(*plVar14 + 0x18))(plVar14,"Sound_Lyra_Ability_C_Leaving");
  lVar6 = FUN_00d09310();
  FUN_00d09c20(*(undefined4 *)(lVar6 + 0x300));
  (**(code **)(*plVar14 + 0x28))(plVar14);
  uVar13 = FUN_00d2d01c(lVar12);
  FUN_00d9b294();
  FUN_00d9b644();
  FUN_00d9b5b0(uVar13);
  plVar14 = (long *)FUN_00d2945c();
  plVar14 = (long *)(**(code **)(*plVar14 + 0x60))();
  (**(code **)(*plVar14 + 0x48))(plVar14,"Effect_Lyra_Portal_Use");
  lVar6 = FUN_00d64980(param_1);
  lVar6 = lVar6 + 0x10;
  plVar14 = (long *)FUN_00d2cc5c(lVar6);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x38))(plVar14,"Sound_Lyra_Ability_C_End");
  lVar12 = FUN_00d09310();
  FUN_00d09c20(*(undefined4 *)(lVar12 + 0x300));
  (**(code **)(*plVar14 + 0x28))(plVar14);
  plVar14 = (long *)FUN_00d2945c(lVar6);
  plVar14 = (long *)(**(code **)(*plVar14 + 0x60))();
  plVar14 = (long *)(**(code **)(*plVar14 + 0x48))(plVar14,"Effect_Lyra_Portal_E_Collapse");
  plVar14 = (long *)(**(code **)(*plVar14 + 0x50))(plVar14,"Effect_Lyra_Portal_A_Collapse");
  (**(code **)(*plVar14 + 0x80))(plVar14,0);
  FUN_00d394e4(lVar6);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

