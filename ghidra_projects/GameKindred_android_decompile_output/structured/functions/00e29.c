// functions/00e29 — 21 functions
#include "libGameKindred.h"




void FUN_00e290ac(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d65010();
  plVar3 = (long *)FUN_00d2945c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,"Bone_LeftHand");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))(plVar3,"Effect_Blue_Buff");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x78))(plVar3,1);
  plVar3 = (long *)(**(code **)(*plVar3 + 0xb0))(plVar3,1);
  local_38[0] = 0x3f000000;
  local_30 = 1;
  plVar3 = (long *)(**(code **)(*plVar3 + 0xd0))(plVar3,local_38);
  (**(code **)(*plVar3 + 0xc0))(0,0x3f800000,0x3f19999a);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e2917c(long param_1,long param_2)

{
  return *(float *)(param_1 + 0x454) *
         *(float *)(&DAT_01be50c4 + (ulong)((*(byte *)(param_2 + 0x2f4) & 4) == 0) * 4);
}




void FUN_00e291a0(undefined8 param_1)

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
  lVar3 = FUN_00d4891c(0x3f800000,uVar2,1);
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  uVar2 = FUN_00d9b5c0(uVar2,FUN_00d9b754);
  FUN_00d9b5b0();
  FUN_00d2a320();
  FUN_00d9b5b8(uVar2);
  FUN_00d39534();
  FUN_00d9b5b8(uVar2);
  plVar4 = (long *)FUN_00d39584();
  local_48 = FUN_00e2917c;
  local_40 = 5;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
  (**(code **)(*plVar4 + 0x18))();
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  (**(code **)(*plVar4 + 0x48))(plVar4,"Effect_MulledWine_buff");
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00e29294(long param_1,long param_2)

{
  return *(float *)(param_1 + 0x454) *
         *(float *)(&DAT_01be50cc + (ulong)((*(byte *)(param_2 + 0x2f4) & 4) == 0) * 4);
}




void FUN_00e292b8(void)

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
  uVar2 = FUN_00d64d7c();
  lVar3 = FUN_00d4891c(0x3f800000,uVar2,1);
  uVar2 = FUN_00d2d01c(lVar3 + 0x10);
  uVar2 = FUN_00d9b5c0(uVar2,FUN_00d9b754);
  FUN_00d9b5b0();
  FUN_00d2a320();
  FUN_00d9b5b8(uVar2);
  FUN_00d39534();
  FUN_00d9b5b8(uVar2);
  plVar4 = (long *)FUN_00d39584();
  local_38 = FUN_00e29294;
  local_30 = 5;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,&local_38);
  (**(code **)(*plVar4 + 0x18))();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 * FUN_00e29370(long param_1)

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
    puVar4[6] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    puVar4[5] = 0;
    puVar4[4] = 0;
    puVar4[1] = 0;
    *puVar4 = 0;
    FUN_00d40370(puVar4);
    *puVar4 = &PTR_FUN_0281b448;
    uVar1 = *(int *)(param_1 + 0x4c020) + 1;
    *(uint *)(param_1 + 0x4c020) = uVar1;
    if (*(uint *)(param_1 + 0x4c024) < uVar1) {
      *(uint *)(param_1 + 0x4c024) = uVar1;
    }
  }
  return puVar4;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00e29458(long *param_1)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  byte *pbVar13;
  long lVar14;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined2 local_74;
  undefined1 local_72;
  undefined2 local_71;
  byte local_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_e0);
  lVar7 = FUN_00d66d28(local_e0);
  lVar14 = *(long *)(lVar7 + 0x18);
  while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar14 = *(long *)(lVar14 + 0x20);
  }
  iVar4 = FUN_00d535a4(lVar14,0);
  if (iVar4 != 0) {
    lVar8 = *(long *)(lVar7 + 0x18);
    while ((lVar8 != 0 && (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar8 = *(long *)(lVar8 + 0x20);
    }
    uVar9 = FUN_00d6bbac(lVar8,DAT_031ba1a4,0);
    uVar5 = 0;
    if ((uVar9 & 1) == 0) {
      uVar5 = FUN_00d53a30(lVar14,0);
    }
    puVar3 = PTR_s_num_charges_02bf09e0;
    uVar6 = FUN_00e6a474(PTR_s_num_charges_02bf09e0);
    uVar6 = FUN_0091ed5c(puVar3,uVar6,0x12345678);
    puVar10 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,uVar6);
    puVar3 = PTR_s_pfx_id_02bf09e8;
    if (uVar5 != *puVar10) {
      uVar6 = FUN_00e6a474(PTR_s_pfx_id_02bf09e8);
      uVar6 = FUN_0091ed5c(puVar3,uVar6,0x12345678);
      puVar11 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar6);
      uVar6 = *puVar11;
      uVar12 = uVar5;
      if (3 < uVar5) {
        uVar12 = 4;
      }
      FUN_00968914(local_68,"Effect_Kestrel_A_Charge%u",uVar12);
      FUN_00d5a6dc(lVar7,uVar6);
      if (uVar5 != 0) {
        local_b8 = 0x811c9dc5;
        uStack_c0 = 0;
        local_c8 = 0;
        uStack_d0 = 0;
        local_d8 = 0;
        if (local_68[0] != 0) {
          pbVar13 = (byte *)((ulong)local_68 | 1);
          uVar12 = (uint)local_68[0];
          do {
            bVar1 = *pbVar13;
            local_b8 = (local_b8 ^ uVar12) * 0x1000193;
            pbVar13 = pbVar13 + 1;
            uVar12 = (uint)bVar1;
          } while (bVar1 != 0);
        }
        local_a4 = 0xff000000;
        local_9c = _DAT_03218ef8;
        local_94 = DAT_03218f40;
        local_8c = DAT_03218f48;
        local_ac = 0;
        local_88 = 0;
        local_80 = 0;
        local_7c = 2;
        local_74 = 0x101;
        local_71 = 0;
        local_b4 = 0xbf800000;
        local_72 = 1;
        uStack_b0 = uVar6;
        uStack_c0 = FUN_00d5babc(lVar7);
        local_71 = CONCAT11(1,(undefined1)local_71);
        FUN_00d5a578(lVar7,&local_d8,"Bone_Bow");
      }
      *puVar10 = uVar5;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e296c8(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) == 0) {
    FUN_00d67b04(0x3e800000,param_1);
    lVar6 = FUN_00d67c60(param_1);
    lVar7 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_num_charges_02bf09e0;
    uVar3 = FUN_00e6a474(PTR_s_num_charges_02bf09e0);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    uVar3 = (**(code **)(*(long *)(lVar7 + 0x100) + 8))(lVar7 + 0x100,uVar3);
    puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar3);
    *puVar8 = 0;
    uVar3 = FUN_00ceb350();
    lVar6 = FUN_00d67c60(param_1);
    lVar7 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_pfx_id_02bf09e8;
    uVar4 = FUN_00e6a474(PTR_s_pfx_id_02bf09e8);
    uVar4 = FUN_0091ed5c(puVar2,uVar4,0x12345678);
    uVar4 = (**(code **)(*(long *)(lVar7 + 0x100) + 8))(lVar7 + 0x100,uVar4);
    puVar8 = (undefined4 *)(**(code **)(*(long *)(lVar6 + 0x100) + 0x10))(lVar6 + 0x100,uVar4);
    *puVar8 = uVar3;
    lVar6 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onBuffIntervalName_02bed520;
    uVar3 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e29458;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  lVar6 = FUN_00d65010(param_1);
  plVar9 = (long *)FUN_00d3bc68(lVar6 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00e29874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar9 + 0x50))(plVar9,PTR_s_Ability__Kestrel__A_02beef68);
  return;
}




void FUN_00e29878(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined4 local_68 [2];
  undefined4 local_60;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d64464();
  FUN_00d4bbf8(uVar2,6);
  FUN_00d4bc10();
  lVar3 = FUN_00d4bc38();
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kestrel_Adrenaline_02bf0a00);
  local_58 = FUN_00e29994;
  local_50 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  uVar2 = FUN_00d64464(param_1);
  FUN_00d4bbf8(uVar2,6);
  uVar2 = FUN_00d4bc10();
  lVar3 = FUN_00d4bc60(uVar2,PTR_s_Ability__Kestrel__C_02beefa8);
  plVar4 = (long *)FUN_00d2887c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kestrel_Adrenaline_02bf0a00);
  local_58 = FUN_00e29994;
  local_50 = 3;
  plVar4 = (long *)(**(code **)(*plVar4 + 0x18))(plVar4,&local_58);
  local_68[0] = 5;
  local_60 = 1;
  (**(code **)(*plVar4 + 0x20))(plVar4,local_68);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e29994(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,0,1);
  return;
}




void FUN_00e299a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d6592c();
  lVar2 = lVar2 + 0x10;
  uVar3 = FUN_00da4b70(lVar2);
  local_58 = FUN_00e29aa8;
  local_50 = 3;
  FUN_00d98490(uVar3,PTR_s_Ability__Kestrel__A_02beef68,&local_58);
  FUN_00d984c8();
  FUN_00d984b8();
  FUN_00d984a8();
  uVar3 = FUN_00da4b70(lVar2);
  local_58 = FUN_00e29aa8;
  local_50 = 3;
  FUN_00d98490(uVar3,PTR_s_Ability__Kestrel__B_02beef90,&local_58);
  FUN_00d984c8();
  FUN_00d984b8();
  FUN_00d984a8();
  uVar3 = FUN_00da4b70(lVar2);
  local_58 = FUN_00e29aa8;
  local_50 = 3;
  FUN_00d98490(uVar3,PTR_s_Ability__Kestrel__C_02beefa8,&local_58);
  FUN_00d984c8();
  FUN_00d984b8();
  FUN_00d984a8();
  lVar2 = FUN_00d65e5c(param_1);
  FUN_00d29f94(lVar2 + 0x10);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e29aa8(undefined8 param_1)

{
  thunk_FUN_00d086f0(param_1,1,1);
  return;
}




void FUN_00e29ab4(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_A_Explode_1");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Kestrel_Ability_A_Explode_2");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Kestrel_Ability_A_Explode_3");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x18))(plVar2,"Sound_Kestrel_Ability_A_Explode_4");
  lVar1 = FUN_00d09310();
  FUN_00d09a7c(*(undefined4 *)(lVar1 + 0x260));
                    /* WARNING: Could not recover jumptable at 0x00e29b40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2);
  return;
}




void FUN_00e29b44(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = FUN_00d646fc();
  lVar2 = FUN_00d4ad80(uVar1,PTR_s_Ability__Kestrel__A_02beef68);
  plVar3 = (long *)FUN_00d3bc68(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x48))();
  (**(code **)(*plVar3 + 0x58))(plVar3,1);
  lVar2 = FUN_00d6624c(param_1);
  plVar3 = (long *)FUN_00d2cc5c(lVar2 + 0x10);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x38))(plVar3,"Sound_Kestrel_Ability_A_Reload");
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))(0x3f800000);
  plVar3 = (long *)(**(code **)(*plVar3 + 0x30))();
  lVar4 = FUN_00d09310();
  FUN_00d09a7c(*(undefined4 *)(lVar4 + 0x264));
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uVar1 = FUN_00e213fc(lVar2 + 0x10);
  FUN_00d982d4(uVar1,PTR_s_Ability__Kestrel__A_02beef68);
  return;
}




void FUN_00e29c10(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  float fVar10;
  undefined8 uVar11;
  long local_78;
  undefined8 local_70;
  undefined1 auStack_68 [48];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d69294(param_1,&local_70,&local_78);
  lVar3 = FUN_00d67b78(local_70);
  iVar2 = FUN_00d5c238(lVar3,1);
  if ((((iVar2 != 0) && (uVar4 = FUN_00daa58c(local_78,lVar3), (uVar4 & 1) != 0)) &&
      (*(long *)(local_78 + 0x28) != 0)) && (iVar2 = FUN_00d5bad4(), iVar2 == 0)) {
    uVar11 = FUN_00d59f54(lVar3,1,2,5,0);
    fVar10 = (float)FUN_00d59f54(lVar3,1,3,1,0);
    if (fVar10 < (float)uVar11) {
      lVar5 = *(long *)(lVar3 + 0x18);
      while ((lVar5 != 0 && (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_02e3ef78))) {
        lVar5 = *(long *)(lVar5 + 0x20);
      }
      fVar10 = (float)FUN_00d539e8(lVar5,1);
      if (fVar10 < (float)uVar11) {
        uVar6 = 0x811c9dc5;
        uVar8 = (uint)(byte)*PTR_s_Ability__Kestrel__B_02beef90;
        pbVar7 = PTR_s_Ability__Kestrel__B_02beef90;
        if (*PTR_s_Ability__Kestrel__B_02beef90 != 0) {
          do {
            uVar9 = (uint)pbVar7[1];
            uVar6 = (uVar6 ^ uVar8) * 0x1000193;
            uVar8 = uVar9;
            pbVar7 = pbVar7 + 1;
          } while (uVar9 != 0);
        }
        FUN_00d04e08(uVar11,auStack_68,*(undefined4 *)(lVar3 + 0x260),uVar6,1);
        FUN_00ce20fc(auStack_68);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e29d6c(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
    uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
    uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
    *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar3;
    uVar1 = *(uint *)(lVar5 + 0xf8);
    *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e29c10;
    *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  }
  return;
}




void FUN_00e29dec(void)

{
  long lVar1;
  
  lVar1 = FUN_00d65010();
  FUN_00d2b638(lVar1 + 0x10);
  return;
}




void FUN_00e29e04(undefined8 param_1)

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
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar2 = FUN_00d9e390();
  FUN_00d59f54(uVar2,1,7,0x19,0);
  FUN_00d67d04(param_1);
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2945c(lVar3 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x60))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x48))(plVar4,"Effect_Kestrel_Trap_Timer_Enemy");
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))(plVar4,"Effect_Kestrel_Trap_Timer");
  (**(code **)(*plVar4 + 0xb0))(plVar4,1);
  lVar3 = FUN_00d64980(param_1);
  lVar3 = lVar3 + 0x10;
  plVar4 = (long *)FUN_00d2887c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kestrel_Trap_Ready_02bf0a30);
  local_48 = FUN_00e29f54;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  FUN_00e0c91c(lVar3);
  plVar4 = (long *)FUN_00d2cf7c(lVar3);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Kestrel_CanTriggerTrap_02bf0a38);
  local_48 = FUN_00e29f54;
  local_40 = 3;
  (**(code **)(*plVar4 + 0x18))(plVar4,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e29f54(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,8,0x19,0);
  return;
}




void FUN_00e29f68(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_Trap_Enemy");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))(plVar2,"Effect_Kestrel_Trap");
  (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  lVar1 = FUN_00d6624c(param_1);
  FUN_00d394e4(lVar1 + 0x10);
  return;
}




void FUN_00e29fe0(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d63f30();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kestrel_Trap_Ignite");
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  plVar2 = (long *)FUN_00d2cc5c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x38))(plVar2,"Sound_Kestrel_Ability_B_Explode");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))(0x3f800000);
  lVar1 = FUN_00d09310();
  FUN_00d09a7c(*(undefined4 *)(lVar1 + 0x26c));
  (**(code **)(*plVar2 + 0x28))(plVar2);
  lVar1 = FUN_00d64980(param_1);
  FUN_00d394e4(lVar1 + 0x10);
  return;
}

