// functions/00c23 — 13 functions
#include "libGameKindred.h"




void FUN_00c23040(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x48;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x18);
      do {
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        lVar1 = lVar1 + -0x48;
        pbVar2 = pbVar2 + 0x48;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00c230cc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00c2314c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined1 auStack_a4 [4];
  undefined4 local_a0 [2];
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  FUN_00ed45a4();
  plVar14 = param_1 + 0x1c;
  param_1[0x1b] = 0;
  *param_1 = (long)&PTR_FUN_027f8788;
  FUN_00f0c714(plVar14);
  plVar1 = param_1 + 0x37;
  FUN_00f0e4a8(plVar1);
  plVar13 = param_1 + 0x55;
  FUN_00f13ca4();
  plVar2 = param_1 + 0x6c;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x8a;
  FUN_00aa8724();
  plVar4 = param_1 + 0xf5;
  FUN_00aacf60(plVar4);
  plVar5 = param_1 + 0x148;
  FUN_00aa8724();
  FUN_00aadf5c();
  FUN_00aac93c();
  FUN_00aaac98();
  plVar7 = param_1 + 0xcb7;
  param_1[0xcb6] = 0;
  param_1[0xcb5] = 0;
  param_1[0xcb4] = (long)(param_1 + 0xcb5);
  FUN_00aaa4e8(plVar7,0);
  plVar8 = param_1 + 0xd4a;
  FUN_00aaa4e8(plVar8,1);
  plVar9 = param_1 + 0xddd;
  FUN_00f13ca4(plVar9);
  plVar10 = param_1 + 0xdf4;
  FUN_00f13ca4(plVar10);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  FUN_00f023ec(plVar14,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar4,param_1 + 0xb96,1);
  FUN_00f023ec(plVar4,param_1 + 0x89b,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00aa8f18(plVar3,plVar7,1);
  FUN_00aa8f18(plVar3,plVar9,1);
  FUN_00f023ec(plVar1,plVar5,1);
  FUN_00aa8f18(plVar5,plVar8,1);
  FUN_00aa8f18(plVar5,plVar10,1);
  FUN_00c2384c(param_1);
  FUN_00c23950(param_1);
  plVar6 = param_1 + 1;
  local_70 = DAT_0313c6f0;
  local_98 = FUN_00c23acc;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar6,&local_98);
  local_70 = DAT_0313c6f4;
  local_98 = FUN_00c23b00;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar6,&local_98);
  local_70 = DAT_0313c6f8;
  local_98 = FUN_00c23b34;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar6,&local_98);
  local_70 = DAT_0313c6fc;
  local_98 = FUN_00c23b68;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar6,&local_98);
  local_70 = DAT_0313c6ec;
  local_98 = FUN_00c23b9c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar6,&local_98);
  FUN_00f023ec(plVar14,plVar13,1);
  FUN_00f00298(&local_98,auStack_a4);
  uVar12 = FUN_00f1357c();
  FUN_00f13fd8(plVar13,uVar12);
  FUN_00f14084(plVar13,1);
  *(uint *)((long)param_1 + 0x32c) = *(uint *)((long)param_1 + 0x32c) & 0xfffffffb;
  FUN_00f0e548(plVar2,PTR_s_build___DraftCenter_Background_p_02be3578,"full_splash_1k");
  FUN_00f0e9c0(plVar2,1);
  if ((*(uint *)((long)param_1 + 0x3e4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3e4) = *(uint *)((long)param_1 + 0x3e4) & 0xffff807f;
    FUN_0091ada4(plVar2);
  }
  local_a0[0] = 0xff753041;
  FUN_00f0c774(plVar14,local_a0);
  FUN_00f14070(plVar9,&DAT_02bf25a8);
  FUN_00f14070(plVar10,&DAT_02bf25a8);
  plVar13 = (long *)FUN_00f136e0();
  uVar17 = 2;
  (**(code **)(*plVar13 + 0x68))(plVar13,plVar1,1,2);
  (**(code **)(*plVar13 + 0x68))(plVar13,param_1 + 0x1b3,0,2);
  FUN_00f13fd8(plVar14,plVar13);
  plVar14 = (long *)FUN_00f13624();
  (**(code **)(*plVar14 + 0x68))(plVar14,plVar3,1,2);
  (**(code **)(*plVar14 + 0x68))(plVar14,plVar4,5,2);
  (**(code **)(*plVar14 + 0x68))(plVar14,plVar5,1,2);
  FUN_00f13fd8(plVar1,plVar14);
  FUN_00f13f68(plVar3,800);
  FUN_00f14070(plVar3,&DAT_02bf25a0);
  FUN_00aa8a48(plVar3,0);
  FUN_00f13f68(plVar5,800);
  FUN_00f14070(plVar5,&DAT_02bf25a0);
  FUN_00aa8a48(plVar5,1);
  FUN_00f14070(plVar4,&DAT_02bf25b0);
  local_a0[0]._0_2_ = 3;
  FUN_00f14070(plVar7,local_a0);
  local_a0[0] = CONCAT22(local_a0[0]._2_2_,3);
  FUN_00f14070(plVar8,local_a0);
  FUN_00f14084(plVar7,1);
  FUN_00f14084(plVar8,1);
  lVar15 = FUN_00ceace8();
  if (lVar15 != 0) {
    FUN_00ceace8();
    uVar16 = FUN_00ceaf9c();
    uVar17 = 1;
    if ((uVar16 & 1) != 0) {
      uVar17 = 2;
    }
  }
  FUN_00aaa6ec(plVar7,uVar17);
  FUN_00aaa6ec(plVar8,uVar17);
  plVar14 = (long *)FUN_00f136e0();
  (**(code **)(*plVar14 + 0x68))(plVar14,plVar7,0,9);
  (**(code **)(*plVar14 + 0x78))(plVar14,0,1);
  (**(code **)(*plVar14 + 0x68))(plVar14,plVar9,1,9);
  (**(code **)(*plVar14 + 0x78))(plVar14,0,1);
  FUN_00f13fd8(plVar3,plVar14);
  uVar12 = FUN_00f136e0();
  FUN_00f13ba0(uVar12,0,0xf,0x14,0xf);
  FUN_00f13fd8(plVar9,uVar12);
  plVar14 = (long *)FUN_00f136e0();
  (**(code **)(*plVar14 + 0x68))(plVar14,plVar8,0,0x11);
  (**(code **)(*plVar14 + 0x78))(plVar14,0,1);
  (**(code **)(*plVar14 + 0x68))(plVar14,plVar10,1,0x11);
  (**(code **)(*plVar14 + 0x78))(plVar14,0,1);
  FUN_00f13fd8(plVar5,plVar14);
  uVar12 = FUN_00f136e0();
  FUN_00f13ba0(uVar12,0x14,0xf,0,0xf);
  FUN_00f13fd8(plVar10,uVar12);
  FUN_00c23bd0(param_1,0);
  FUN_00f07a78(0,0,param_1,0);
  if (*(long *)(lVar11 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00c2384c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00f023ec(param_1 + 0xe0,param_1 + 0xd98,1);
  local_50 = 0;
  uStack_48 = 0;
  uVar1 = DAT_03210c64;
  local_68 = FUN_00c24154;
  local_58 = 0;
  lStack_60 = param_1;
  local_40 = uVar1;
  FUN_009693a0(param_1 + 0x1000,&local_68);
  local_68 = FUN_00c24164;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  local_40 = uVar1;
  FUN_009693a0(param_1 + 0x1ec8,&local_68);
  local_68 = FUN_00c24174;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  local_40 = uVar1;
  FUN_009693a0(param_1 + 0x25f8,&local_68);
  local_68 = FUN_00c24184;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  local_40 = uVar1;
  FUN_009693a0(param_1 + 0x3458,&local_68);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c23950(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined2 local_50 [4];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00f0e548(param_1 + 0x1b8,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_bg");
  FUN_00f14070(param_1 + 0x1b8,&DAT_02bf25a8);
  plVar4 = (long *)FUN_00f136e0();
  lVar1 = param_1 + 0x5cb0;
  (**(code **)(*plVar4 + 0x68))(plVar4,lVar1,0,2);
  lVar2 = param_1 + 0x44d8;
  (**(code **)(*plVar4 + 0x68))(plVar4,lVar2,1,2);
  FUN_00f13fd8(param_1 + 0x7a8,plVar4);
  FUN_00f13f08(0x448d2000,0x437e0000,lVar1);
  FUN_00f13f68(lVar1,0xfe00000469);
  FUN_00f13fc4(lVar1,0xfe0000ffff);
  FUN_00f13fa0(lVar1,0xfe00000000);
  local_50[0] = 0x15;
  FUN_00f14070(lVar1,local_50);
  FUN_00f14070(lVar2,&DAT_02bf25b0);
  FUN_00ed5b20(lVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,1);
  local_50[0] = CONCAT11(local_50[0]._1_1_,1);
  FUN_00ed5ab0(lVar2,local_50);
  FUN_00f14084(lVar2,1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c23acc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00c23afc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x18))(plVar2,uVar1);
  return;
}




void FUN_00c23b00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00c23b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x20))(plVar2,uVar1);
  return;
}




void FUN_00c23b34(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00c23b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x28))(plVar2,uVar1);
  return;
}




void FUN_00c23b68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00c23b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,uVar1);
  return;
}




void FUN_00c23b9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0xd8);
  uVar1 = FUN_00f04924(param_4);
                    /* WARNING: Could not recover jumptable at 0x00c23bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x30))(plVar2,uVar1);
  return;
}




void FUN_00c23bd0(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_00c24a30(param_1,param_1 + 0x65b8);
    uVar1 = FUN_00c24a30(uVar1,param_1 + 0x6a50);
    FUN_00c24a30(uVar1,param_1 + 0x44d8);
    FUN_00f01980(param_1 + 0x360);
    uVar2 = 0x3e4ccccd;
  }
  else {
    uVar1 = FUN_00c24b20();
    uVar1 = FUN_00c24b20(uVar1,param_1 + 0x6a50);
    FUN_00c24b20(uVar1,param_1 + 0x44d8);
    FUN_00f01980(param_1 + 0x360);
    uVar2 = 0;
  }
  uVar1 = FUN_00efee28(uVar2,0x3e4ccccd,0);
  FUN_00f022a0(param_1 + 0x360,uVar1);
  return;
}




void FUN_00c23c78(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_68;
  code *pcStack_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_027f8788;
  pcStack_60 = FUN_00c25018;
  local_68 = param_1;
  FUN_00f03390(&local_68);
  FUN_00f13d08(param_1 + 0xdf4);
  FUN_00f13d08(param_1 + 0xddd);
  param_1[0xd4a] = &PTR_FUN_027d2c28;
  FUN_00f13d08(param_1 + 0xdc5);
  FUN_00f0d3a4(param_1 + 0xd9f);
  param_1[0xd81] = &PTR_FUN_028266f0;
  param_1[0xd98] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd9b);
  FUN_00f13d08(param_1 + 0xd81);
  param_1[0xd63] = &PTR_FUN_028266f0;
  param_1[0xd7a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd7d);
  FUN_00f13d08(param_1 + 0xd63);
  if ((void *)param_1[0xd62] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd62]);
    param_1[0xd62] = 0;
    param_1[0xd61] = 0;
  }
  FUN_00f13d08(param_1 + 0xd4a);
  param_1[0xcb7] = &PTR_FUN_027d2c28;
  FUN_00f13d08(param_1 + 0xd32);
  FUN_00f0d3a4(param_1 + 0xd0c);
  param_1[0xcee] = &PTR_FUN_028266f0;
  param_1[0xd05] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd08);
  FUN_00f13d08(param_1 + 0xcee);
  param_1[0xcd0] = &PTR_FUN_028266f0;
  param_1[0xce7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcea);
  FUN_00f13d08(param_1 + 0xcd0);
  if ((void *)param_1[0xccf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xccf]);
    param_1[0xccf] = 0;
    param_1[0xcce] = 0;
  }
  FUN_00f13d08(param_1 + 0xcb7);
  FUN_00c24ea4(param_1 + 0xcb4,param_1[0xcb5]);
  FUN_00aafc3c(param_1 + 0xb96);
  FUN_00ab01fc(param_1 + 0x89b);
  FUN_00ab04dc(param_1 + 0x1b3);
  param_1[0x148] = &PTR_FUN_027d27e0;
  FUN_00f13d08(param_1 + 0x19b);
  param_1[0x17d] = &PTR_FUN_028266f0;
  param_1[0x194] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x197);
  FUN_00f13d08(param_1 + 0x17d);
  param_1[0x15f] = &PTR_FUN_028266f0;
  param_1[0x176] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x179);
  FUN_00f13d08(param_1 + 0x15f);
  FUN_00f13d08(param_1 + 0x148);
  param_1[0x12a] = &PTR_FUN_028266f0;
  param_1[0x141] = &PTR_FUN_02826850;
  param_1[0xf5] = &PTR_FUN_027d34f0;
  FUN_00f0a79c(param_1 + 0x144);
  FUN_00f13d08(param_1 + 0x12a);
  param_1[0x10c] = &PTR_FUN_028266f0;
  param_1[0x123] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x126);
  FUN_00f13d08(param_1 + 0x10c);
  FUN_00f13d08(param_1 + 0xf5);
  param_1[0x8a] = &PTR_FUN_027d27e0;
  FUN_00f13d08(param_1 + 0xdd);
  param_1[0xbf] = &PTR_FUN_028266f0;
  param_1[0xd6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xd9);
  FUN_00f13d08(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_028266f0;
  param_1[0xb8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbb);
  FUN_00f13d08(param_1 + 0xa1);
  FUN_00f13d08(param_1 + 0x8a);
  param_1[0x6c] = &PTR_FUN_028266f0;
  param_1[0x83] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x86);
  FUN_00f13d08(param_1 + 0x6c);
  FUN_00f13d08(param_1 + 0x55);
  param_1[0x37] = &PTR_FUN_028266f0;
  param_1[0x4e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x51);
  FUN_00f13d08(param_1 + 0x37);
  FUN_00f13d08(param_1 + 0x1c);
  thunk_FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c23fc4(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c25018;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

