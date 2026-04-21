// functions/00c5b — 14 functions
#include "libGameKindred.h"




void FUN_00c5b09c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,uint param_8)

{
  undefined4 *puVar1;
  long lVar2;
  
  FUN_008fce60(param_1 + 0x4e0,param_3);
  FUN_00e70a24(param_2,param_1 + 0x4e3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
  FUN_00c5aa8c(param_1);
  *(uint *)((long)param_1 + 0x72c) = *(uint *)((long)param_1 + 0x72c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x81c) = *(uint *)((long)param_1 + 0x81c) & 0xfffffffb;
  FUN_00f0d75c(param_1 + 0x14f,param_2);
  puVar1 = &DAT_031339e0;
  if ((param_8 & 1) == 0) {
    puVar1 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(param_1 + 0x14f,puVar1);
  FUN_00ac5fdc(param_1 + 0x1aa,param_4);
  FUN_00b2a900(param_1 + 0x349,param_6);
  lVar2 = FUN_00c5e2e8(param_1 + 0x4c9,1);
  FUN_008fce60(lVar2 + 0x1858,param_3);
                    /* WARNING: Could not recover jumptable at 0x00c5b1a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c5b1a8(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,byte param_12,
                 undefined8 param_13,undefined4 param_14,byte param_15,undefined4 param_16,
                 undefined8 param_17,undefined4 *param_18,undefined8 param_19)

{
  uint uVar1;
  long *plVar2;
  undefined4 *puVar3;
  
  FUN_008fce60(param_1 + 0x4e0,param_3);
  FUN_00e70a24(param_2,param_1 + 0x4e3);
  FUN_00e70a24(param_5,param_1 + 0x4e6);
  FUN_00e70a24(param_7,param_1 + 0x4e9);
  FUN_00c5aa8c(param_1);
  *(uint *)((long)param_1 + 0x324) =
       *(uint *)((long)param_1 + 0x324) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x324) & 3 | (param_15 & 1) << 2;
  switch(param_8) {
  case 0:
    uVar1 = *(uint *)((long)param_1 + 0xafc);
    if ((uVar1 & 0x7f80) != 0x5900) {
      *(uint *)((long)param_1 + 0xafc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x5900;
      FUN_0091ada4(param_1 + 0x14f);
    }
    puVar3 = &DAT_031339e4;
    break;
  case 1:
    if ((~*(uint *)((long)param_1 + 0xafc) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0xafc) = *(uint *)((long)param_1 + 0xafc) | 0x7f80;
      FUN_0091ada4(param_1 + 0x14f);
    }
    puVar3 = &DAT_031339e8;
    break;
  case 2:
    if ((~*(uint *)((long)param_1 + 0xafc) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0xafc) = *(uint *)((long)param_1 + 0xafc) | 0x7f80;
      FUN_0091ada4(param_1 + 0x14f);
    }
    puVar3 = &DAT_031339ec;
    break;
  case 3:
  case 4:
    if ((~*(uint *)((long)param_1 + 0xafc) & 0x7f80) != 0) {
      *(uint *)((long)param_1 + 0xafc) = *(uint *)((long)param_1 + 0xafc) | 0x7f80;
      FUN_0091ada4(param_1 + 0x14f);
    }
    puVar3 = &DAT_031339f0;
    break;
  default:
    goto switchD_00c5b290_default;
  }
  FUN_00f0e670(param_1 + 0xd5,puVar3,2);
switchD_00c5b290_default:
  FUN_00b1eae8(param_1 + 0xf3,param_9);
  FUN_00f0d75c(param_1 + 0x14f,param_2);
  puVar3 = &DAT_031339e0;
  if ((param_12 & 1) == 0) {
    puVar3 = &DAT_01bee7fa;
  }
  FUN_00f0d7fc(param_1 + 0x14f,puVar3);
  FUN_00ac5fdc(param_1 + 0x1aa,param_4);
  FUN_00b2a900(param_1 + 0x349,param_6);
  plVar2 = (long *)FUN_00c5e350(param_1 + 0x4c9,1);
  (**(code **)(*plVar2 + 0x90))();
  *(undefined4 *)(plVar2 + 0x185) = param_10;
  FUN_00b1d77c(plVar2 + 0x54,param_10);
  (**(code **)(*plVar2 + 0xe8))(plVar2);
  *(undefined4 *)((long)plVar2 + 0xc2c) = param_11;
  FUN_00b1d77c(plVar2 + 0x10b,param_11);
  (**(code **)(*plVar2 + 0xe8))(plVar2);
  *(undefined4 *)(param_1 + 0x4ec) = param_8;
  *(undefined4 *)((long)param_1 + 0x2764) = param_14;
  *(undefined4 *)((long)param_1 + 0x276c) = param_16;
  FUN_0091630c(param_1 + 0x4ee,param_17);
  *(undefined4 *)(param_1 + 0x4f0) = *param_18;
  FUN_008fce60(param_1 + 0x4f1,param_19);
                    /* WARNING: Could not recover jumptable at 0x00c5b470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00c5b474(long *param_1)

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
  long *plVar11;
  undefined4 uVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  long lVar16;
  code *local_b0;
  long *plStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long local_80;
  
  lVar13 = tpidr_el0;
  local_80 = *(long *)(lVar13 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027fe8a0;
  param_1[0x18] = (long)&PTR_FUN_027fe9f8;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x31;
  FUN_00f0e4a8();
  plVar3 = param_1 + 0x4f;
  FUN_00f13ca4(plVar3);
  plVar4 = param_1 + 0x66;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0x7d;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x9b;
  FUN_00c93600(plVar6,0);
  plVar7 = param_1 + 0x1e4;
  FUN_00c93600(plVar7,0);
  plVar8 = param_1 + 0x32d;
  FUN_00c93600(plVar8,0);
  plVar9 = param_1 + 0x476;
  FUN_00b2e68c(plVar9);
  FUN_00ed66ec(param_1 + 0x5f3);
  FUN_00bf8fc8(param_1 + 0x738);
  plVar10 = param_1 + 0x74d;
  FUN_00f13ca4(plVar10);
  plVar11 = param_1 + 0x764;
  FUN_00f0e4a8(plVar11);
  FUN_00b27c04(param_1 + 0x782,0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar4,plVar8,1);
  FUN_00f023ec(plVar1,plVar9,1);
  FUN_00f023ec(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,param_1[0x739],1);
  FUN_00f023ec(plVar3,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x782,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar11,1);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar5,&DAT_01bbe004,2);
  local_98 = 0;
  uStack_90 = 0;
  uVar12 = DAT_03210c64;
  local_b0 = FUN_00c5bc3c;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar12;
  FUN_009693a0(param_1 + 0x9c,&local_b0);
  FUN_00c9228c(plVar6,1);
  FUN_00c93864(plVar6,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  FUN_00c92844(plVar6,1);
  FUN_00c9279c(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00c927dc(plVar6,&DAT_01bbe000);
  uVar15 = FUN_00e6ce7c("MENU_PEOPLE_GUILD_TAB_HEADER",0);
  FUN_00c938d4(plVar6,uVar15);
  FUN_00c928a0(0x42200000,0x41a00000,plVar6);
  FUN_00c928b4(plVar6,0xffa0837d);
  local_b0 = FUN_00c5bc54;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar12;
  FUN_009693a0(param_1 + 0x1e5,&local_b0);
  FUN_00c9228c(plVar7,1);
  FUN_00c93864(plVar7,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  FUN_00c92844(plVar7,1);
  FUN_00c9279c(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00c927dc(plVar7,&DAT_01bbe000);
  uVar15 = FUN_00e6ce7c("MENU_PEOPLE_USER_TEAM_TAB_HEADER",0);
  FUN_00c938d4(plVar7,uVar15);
  FUN_00c928a0(0x42200000,0x41a00000,plVar7);
  FUN_00c928b4(plVar7,0xffa0837d);
  local_b0 = FUN_00c5bc6c;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  local_88 = uVar12;
  FUN_009693a0(param_1 + 0x32e,&local_b0);
  FUN_00c9228c(plVar8,1);
  FUN_00c93864(plVar8,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40);
  FUN_00c92844(plVar8,1);
  FUN_00c9279c(plVar8,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00c927dc(plVar8,&DAT_01bbe000);
  uVar15 = FUN_00e6ce7c("MENU_FRIENDS_ADD_FRIEND",0);
  FUN_00c938d4(plVar8,uVar15);
  FUN_00c928a0(0x42200000,0x41a00000,plVar8);
  FUN_00c928b4(plVar8,0xffa0837d);
  FUN_00b2eaa8(plVar9,param_1 + 0x18);
  FUN_00b2ecb8(plVar9,0x56261d1d);
  FUN_00b2ed0c(plVar9,0xff261d1d);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  uVar14 = *(uint *)((long)param_1 + 0x20c);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 1;
  if ((uVar14 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x20c) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x3300;
    FUN_0091ada4(plVar2);
  }
  local_b0 = (code *)((ulong)local_b0 & 0xffffffffffff0000);
  FUN_00f14070(plVar10,&local_b0);
  FUN_00f13f68(plVar10,0);
  *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffffffef;
  FUN_00f0e548(plVar11,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  if ((*(uint *)((long)param_1 + 0x3ba4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x3ba4) = *(uint *)((long)param_1 + 0x3ba4) & 0xffff807f;
    FUN_0091ada4(plVar11);
  }
  local_88 = DAT_03210f84;
  local_b0 = thunk_FUN_00c5d8f0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(param_1 + 0x765,&local_b0);
  plVar2 = param_1 + 1;
  local_88 = DAT_03210fc0;
  local_b0 = FUN_00c5bc88;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar2,&local_b0);
  local_88 = DAT_03210fbc;
  local_b0 = thunk_FUN_00c5d8f0;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar2,&local_b0);
  local_88 = FUN_00f048a4("UI::MENU_SOCIAL_CLEAR_TARGET");
  local_b0 = FUN_00c5bc94;
  local_98 = 0;
  uStack_90 = 0;
  local_a0 = 0;
  plStack_a8 = param_1;
  FUN_009693a0(plVar2,&local_b0);
  uVar14 = *(uint *)((long)param_1 + 0x2fc);
  if ((uVar14 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x2fc) = uVar14 & 0xffff807f;
    FUN_0091ada4(plVar3);
    uVar14 = *(uint *)((long)param_1 + 0x2fc);
  }
  *(uint *)((long)param_1 + 0x2fc) = uVar14 & 0xfffffffb;
  lVar16 = FUN_00f13624();
  FUN_00f13fd8(plVar4,lVar16);
  FUN_00f1515c(lVar16,plVar6,0,10);
  FUN_00f15198(lVar16,0x14);
  FUN_00f1515c(lVar16,plVar7,0,10);
  FUN_00f1521c(lVar16,0x14,1);
  FUN_00f1515c(lVar16,plVar8,0,0x12);
  FUN_00f13ba0(lVar16,0x28,0x14,0x28,0x14);
  *(undefined1 *)(lVar16 + 8) = 0x51;
  lVar16 = FUN_00f136e0();
  FUN_00f13fd8(plVar1,lVar16);
  uVar14 = FUN_00f13f70(plVar4);
  FUN_00f13f08((float)uVar14,0,plVar1);
  FUN_00f1515c(lVar16,plVar4,0,0x12);
  FUN_00f1515c(lVar16,plVar9,1,2);
  *(undefined1 *)(lVar16 + 8) = 0x51;
  uVar15 = FUN_00f136e0();
  FUN_00f13fd8(plVar3,uVar15);
  FUN_00f1515c(uVar15,param_1[0x739],1,2);
  FUN_00f1515c(uVar15,plVar10,0,2);
  if (*(long *)(lVar13 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5bc3c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5bc4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    return;
  }
  return;
}




void FUN_00c5bc54(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5bc64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
    return;
  }
  return;
}




void FUN_00c5bc6c(long param_1)

{
  if (*(long **)(param_1 + 0xb8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00c5bc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
    return;
  }
  return;
}




void FUN_00c5bc88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c5d9cc(param_1,param_4);
  return;
}




void FUN_00c5bc94(long param_1)

{
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  FUN_00c5c138(param_1,0);
  return;
}




void FUN_00c5bcc8(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  FUN_00f13db0();
  plVar1 = param_3 + 0x1a;
  fVar3 = (float)FUN_00f13e54(plVar1);
  fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  if (fVar3 <= fVar4 * 0.3) {
    fVar3 = fVar4 * 0.3;
  }
  FUN_00f13f08(fVar3,param_2,plVar1);
  iVar2 = FUN_0092f28c();
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  if (iVar2 == 0) {
    fVar4 = (float)FUN_00f13e54(plVar1);
    fVar3 = fVar3 - fVar4;
  }
  else {
    fVar3 = fVar3 * 0.4;
  }
  FUN_00f13f08(fVar3,param_2,param_3 + 0x4f);
  FUN_00f13f08(0x42700000,param_2,param_3 + 0x31);
  return;
}




void FUN_00c5bd98(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00f13db4();
  plVar1 = param_3 + 0x1a;
  FUN_00f07b18(0,plVar1,3,param_3,3);
  if ((*(byte *)((long)param_3 + 0x2fc) >> 2 & 1) != 0) {
    FUN_00f07b18(0,param_3 + 0x4f,3,plVar1,1);
  }
  local_50 = FUN_00f13e54(param_3 + 0x66);
  uStack_4c = param_2;
  FUN_00f13f18(param_3 + 0x7d,&local_50);
  uVar3 = 0;
  FUN_00f07940(0,param_3 + 0x7d,8,param_3 + 0x66,8);
  FUN_00f07b18(0,param_3 + 0x31,1,plVar1,1);
  local_50 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_4c = uVar3;
  FUN_00f13f18(param_3 + 0x764,&local_50);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5bea8(long param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pvVar5 = operator_new(0x598);
  FUN_00b2d198();
  *(uint *)((long)pvVar5 + 0x84) = *(uint *)((long)pvVar5 + 0x84) | 0x20;
  FUN_00b2dcd0(pvVar5,param_2);
  FUN_00b2dcd8(pvVar5,0xffa0837d);
  FUN_00b2dd3c(pvVar5,0xa33f2b2a);
  local_60[0] = 0;
  local_60[1] = 0;
  local_50 = (void *)0x0;
  FUN_00e70a24(param_3,local_60);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  uVar3 = FUN_00e6a474(pvVar1);
  uVar4 = FUN_0091ed5c(pvVar1,uVar3,0x1234);
  *(uint *)((long)pvVar5 + 0x84) =
       *(uint *)((long)pvVar5 + 0x84) & 0x80000000 |
       *(uint *)((long)pvVar5 + 0x84) & 0x7fff | (uVar4 & 0xffff) << 0xf;
  FUN_00b2ead8(param_1 + 0x23b0,pvVar5);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c5bfbc(long param_1)

{
  FUN_00b2ebf0(param_1 + 0x23b0);
  return;
}




void FUN_00c5bfc8(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00b2ebf0(param_1 + 0x23b0);
  if (lVar1 != 0) {
    FUN_00b2dc3c();
    return;
  }
  return;
}




void FUN_00c5bff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_00b2ebf0(param_1 + 0x23b0);
  if (lVar1 != 0) {
    FUN_00b2dcd0(lVar1,param_3);
    return;
  }
  return;
}

