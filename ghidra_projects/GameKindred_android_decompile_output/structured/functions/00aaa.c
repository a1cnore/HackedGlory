// functions/00aaa — 18 functions
#include "libGameKindred.h"




void FUN_00aaa010(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  
  iVar2 = FUN_00ecf844();
  lVar1 = param_1 + 0x240;
  FUN_00f01980(lVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_00eff63c(*(undefined4 *)(param_1 + 0x13b8),*(undefined4 *)(param_1 + 0x13b8),
                         0x3dcccccd,0);
    FUN_00efcb24(uVar3,FUN_009a7608);
    FUN_00f022a0(lVar1,uVar3);
    return;
  }
  if (iVar2 == 1) {
    plVar4 = *(long **)(param_1 + 0x20);
    FUN_00f01a4c(param_1,1);
    (**(code **)(*plVar4 + 0x78))(plVar4,param_1,1);
    if ((*(float *)(param_1 + 0x288) != 0.8) || (*(float *)(param_1 + 0x28c) != 0.8)) {
      *(undefined8 *)(param_1 + 0x288) = 0x3f4ccccd3f4ccccd;
      FUN_0091ada4(lVar1);
      return;
    }
  }
  return;
}




void FUN_00aaa100(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  FUN_00f0c714();
  plVar1 = param_1 + 0x1b;
  *param_1 = (long)&PTR_FUN_027d2a80;
  param_1[0x17] = (long)&PTR_FUN_027d2be0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x39;
  FUN_00f0c714(plVar2);
  FUN_00f0e4a8(param_1 + 0x54);
  plVar3 = param_1 + 0x72;
  FUN_00f0ae34(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x54,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_ban_symbol");
  uVar4 = *(uint *)((long)param_1 + 0x15c);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x15c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0c774(plVar2,&DAT_01bee7f6);
  uVar4 = *(uint *)((long)param_1 + 0x24c);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x24c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0af50(plVar3,PTR_DAT_02be3510);
  FUN_00f0b2f0(0x3d072b02,plVar3);
  FUN_00f0b334(plVar3,1);
  FUN_00f0b300(plVar3,1);
  FUN_00f0b2cc(plVar3);
  FUN_00aaa298(param_1);
  return;
}




void FUN_00aaa298(long param_1)

{
  FUN_00f07940(0,0,param_1 + 0x2a0,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0x1c8,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0xd8,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0x390,8,param_1,8);
  return;
}




void FUN_00aaa320(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_01ba3e30;
  if ((param_2 & 1) == 0) {
    puVar1 = &DAT_01ba3e34;
  }
  FUN_00f0c774(param_1,puVar1);
  return;
}




void FUN_00aaa33c(long param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  
  uVar2 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  if (uVar2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x15c);
    *(uint *)(param_1 + 0x15c) = uVar1 | 4;
    if ((uVar1 & 0x7f80) != 0x1f80) {
      *(uint *)(param_1 + 0x15c) = uVar1 & 0xffff807f | 0x1f84;
      FUN_0091ada4(param_1 + 0xd8);
    }
    *(uint *)(param_1 + 0x324) = *(uint *)(param_1 + 0x324) & 0xfffffffb;
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x15c);
    uVar1 = uVar3 & 3 | (param_3 & 1) << 2;
    *(uint *)(param_1 + 0x15c) = uVar3 & 0xfffffff8 | uVar1;
    if ((uVar3 & 0x7f80) != 0x6600) {
      *(uint *)(param_1 + 0x15c) = uVar3 & 0xffff8000 | uVar3 & 0x78 | uVar1 | 0x6600;
      FUN_0091ada4(param_1 + 0xd8);
    }
    *(uint *)(param_1 + 0x324) = *(uint *)(param_1 + 0x324) | 4;
    pbVar4 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      pbVar4 = param_2 + 1;
    }
    FUN_00a9bbc4(param_1 + 0x2a0,pbVar4);
  }
  uVar5 = 0x3f800000;
  if ((param_3 & 1) == 0) {
    uVar5 = 0;
  }
  FUN_00f0e6bc(uVar5,param_1 + 0x2a0);
  FUN_00aaa298(param_1);
  return;
}




void FUN_00aaa438(long param_1)

{
  *(uint *)(param_1 + 0x414) = *(uint *)(param_1 + 0x414) | 4;
  return;
}




void FUN_00aaa448(long param_1)

{
  *(uint *)(param_1 + 0x414) = *(uint *)(param_1 + 0x414) & 0xfffffffb;
  return;
}




void FUN_00aaa458(float param_1,float param_2,long param_3)

{
  FUN_00f13f08(param_1 + -8.0,param_2 + -8.0,param_3 + 0x2a0);
  FUN_00f13f08(param_1 + -8.0,param_2 + -8.0,param_3 + 0x1c8);
  FUN_00f13f08(param_1 + -35.0,param_2 + -35.0,param_3 + 0xd8);
  FUN_00f13f08(param_1 + 4.0,param_2 + 4.0,param_3 + 0x390);
  FUN_00aaa298(param_3);
  return;
}




void FUN_00aaa4e8(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x19;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *param_1 = (long)&PTR_FUN_027d2c28;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x37;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x55;
  FUN_00f0d160(plVar3);
  FUN_00f13ca4(param_1 + 0x7b);
  *(byte *)(param_1 + 0x92) = param_2 & 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x7b,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_LABEL_BANS",0);
  FUN_00f0d75c(plVar3,uVar6);
  FUN_00f14070(plVar3,&DAT_03211038);
  puVar4 = &DAT_01ba3e48;
  if ((char)param_1[0x92] != '\0') {
    puVar4 = &DAT_01ba3e4c;
  }
  FUN_00f0d7fc(plVar3,puVar4);
  FUN_00f0e548(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_bans_bg");
  puVar4 = &DAT_01ba3e2c;
  if ((char)param_1[0x92] != '\0') {
    puVar4 = &DAT_01ba3e28;
  }
  FUN_00f0e670(plVar1,puVar4,2);
  FUN_00f0e698(plVar1,4);
  *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) & 0xfe | *(byte *)(param_1 + 0x92);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  uVar5 = *(uint *)((long)param_1 + 0x23c);
  if ((uVar5 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x23c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x3300;
    FUN_0091ada4(plVar2);
  }
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xfe | *(byte *)(param_1 + 0x92);
  return;
}




void FUN_00aaa6ec(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00f019d4(param_1 + 0x3d8,0);
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  if (0 < param_2) {
    do {
      uVar3 = FUN_00aaa7dc(param_1 + 0x3d8,1);
      FUN_00f13f08(0x43020000,0x43020000);
      puVar1 = &DAT_01ba3e34;
      if (*(char *)(param_1 + 0x490) != '\0') {
        puVar1 = &DAT_01ba3e30;
      }
      FUN_00f0c774(uVar3,puVar1);
      local_70 = uVar3;
      FUN_00aaa844((undefined4 *)(param_1 + 0xb8),&local_70);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00aaa7dc(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x4b8);
  FUN_00aaa100();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00aaa844(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00ab0f80(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00aaa8cc(long param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 0xb8);
  if (uVar1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      if ((uVar3 < *param_2) && (uVar3 < *param_3)) {
        FUN_00aaa33c(*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar3 * 8),
                     *(long *)(param_2 + 2) + lVar2,*(undefined1 *)(*(long *)(param_3 + 2) + uVar3))
        ;
        uVar1 = *(uint *)(param_1 + 0xb8);
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x18;
    } while (uVar3 < uVar1);
  }
  return;
}




void FUN_00aaa958(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  ulong uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0xb8) != 0) {
    uVar4 = 0;
    do {
      bVar3 = param_2 != uVar4;
      lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + uVar4 * 8);
      uVar4 = uVar4 + 1;
      uVar2 = *(uint *)(lVar5 + 0x414);
      uVar1 = uVar2 | 4;
      if (bVar3) {
        uVar1 = uVar2 & 0xfffffffb;
      }
      *(uint *)(lVar5 + 0x414) = uVar1;
    } while (uVar4 < *(uint *)(param_1 + 0xb8));
  }
  return;
}




undefined8 FUN_00aaa99c(void)

{
  return 0xe600000000;
}




void FUN_00aaa9a4(float param_1,float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  plVar1 = param_3 + 0x19;
  FUN_00f13f2c(plVar1,CONCAT44((int)(param_2 + -4.0),(int)param_1));
  plVar2 = param_3 + 0x37;
  FUN_00f13f2c(plVar2,(ulong)(uint)(int)(param_1 + -80.0) | 0x400000000);
  FUN_00f07b18(0,plVar2,0,plVar1,2);
  if ((char)param_3[0x92] == '\0') {
    uVar3 = 3;
    uVar4 = 3;
  }
  else {
    uVar3 = 1;
    uVar4 = 1;
  }
  FUN_00f07b18(0,plVar2,uVar3,plVar1,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00aaaa60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_00aaaa64(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  int local_60;
  int local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00967388(&local_5c,0,&local_60,0);
  lVar1 = param_1 + 0x2a8;
  if (*(char *)(param_1 + 0x490) == '\0') {
    FUN_00f07a18((float)local_5c + 15.0,lVar1,0);
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_00f07b18(0,**(undefined8 **)(param_1 + 0xc0),3,lVar1,3);
      if (1 < *(uint *)(param_1 + 0xb8)) {
        lVar7 = 0;
        do {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xc0) + lVar7 * 8);
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          FUN_00f07b18(0x41a00000,uVar6,3,uVar5,1);
          FUN_00f07b18(0,uVar6,5,uVar5,5);
          uVar2 = lVar7 + 2;
          lVar7 = lVar7 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0xb8));
      }
    }
    FUN_00f13db4(param_1 + 0x3d8);
    FUN_00f07b18(0x40a00000,param_1 + 0x3d8,0,lVar1,2);
    uVar5 = 3;
    uVar6 = 3;
  }
  else {
    FUN_00f07a18(-15.0 - (float)local_60,0x41700000,lVar1,1);
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_00f07b18(0,**(undefined8 **)(param_1 + 0xc0),1,lVar1,1);
      if (1 < *(uint *)(param_1 + 0xb8)) {
        lVar7 = 0;
        do {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xc0) + lVar7 * 8);
          uVar5 = *puVar3;
          uVar6 = puVar3[1];
          FUN_00f07b18(0xc1a00000,uVar6,1,uVar5,3);
          FUN_00f07b18(0,uVar6,5,uVar5,5);
          uVar2 = lVar7 + 2;
          lVar7 = lVar7 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0xb8));
      }
    }
    FUN_00f13db4(param_1 + 0x3d8);
    FUN_00f07b18(0x40a00000,param_1 + 0x3d8,0,lVar1,2);
    uVar5 = 1;
    uVar6 = 1;
  }
  FUN_00f07b18(0,param_1 + 0x3d8,uVar5,lVar1,uVar6);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aaac98(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00f0e4a8();
  plVar1 = param_1 + 0x1e;
  *param_1 = (long)&PTR_FUN_027d2d70;
  param_1[0x17] = (long)&PTR_FUN_027d2ed0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x3c;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x5a;
  FUN_00f0e4a8(plVar3);
  FUN_00e70314(param_1 + 0x79);
  plVar4 = param_1 + 0x7b;
  FUN_00b25254(plVar4);
  plVar5 = param_1 + 0xa7;
  FUN_00f1306c(plVar5);
  plVar6 = param_1 + 0xd2;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0xf8;
  FUN_00f0d160(plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f133a4(plVar5,plVar4,1);
  FUN_00f133a4(plVar5,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f0e548(param_1,PTR_s_build___MenuDraftPartsCommon_tga_02be3618,"draft_header");
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  uVar10 = *(uint *)((long)param_1 + 0x174);
  if ((uVar10 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x174) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x3300;
    FUN_0091ada4(plVar1);
    uVar10 = *(uint *)((long)param_1 + 0x174);
  }
  *(uint *)((long)param_1 + 0x174) = uVar10 & 0xffffffbf;
  *(byte *)(param_1 + 0x39) = *(byte *)(param_1 + 0x39) | 1;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"splash_glass_shadow");
  uVar10 = *(uint *)((long)param_1 + 0x264);
  if ((uVar10 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x264) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x3300;
    FUN_0091ada4(plVar2);
    uVar10 = *(uint *)((long)param_1 + 0x264);
  }
  *(uint *)((long)param_1 + 0x264) = uVar10 & 0xffffffbf;
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  uVar10 = *(uint *)((long)param_1 + 0x354);
  if ((uVar10 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x354) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x1980;
    FUN_0091ada4(plVar3);
    uVar10 = *(uint *)((long)param_1 + 0x354);
  }
  *(uint *)((long)param_1 + 0x354) = uVar10 & 0xffffffbf;
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_130_f_02be9cb0,&DAT_01bee7fa);
  FUN_00e705c8(&local_78,"[NUMBER_SECONDS]");
  FUN_00b252ac(plVar4,&local_78,0,1);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0,&DAT_01bee7fa);
  uVar9 = FUN_00e6ce7c("MENU_DRAFT_TOOLTIP_WAITING_FOR_PLAYERS",0);
  FUN_00f0d75c(plVar7,uVar9);
  local_78 = 0x3f2666663f000000;
  (**(code **)(param_1[0xf8] + 0x28))(plVar7,&local_78);
  if ((*(float *)(param_1 + 0x101) != 0.8) || (*(float *)((long)param_1 + 0x80c) != 0.8)) {
    param_1[0x101] = 0x3f4ccccd3f4ccccd;
    FUN_0091ada4(plVar7);
  }
  FUN_00f0d378(plVar6,PTR_s_build___Fonts_Brandon_Bold_24_fo_02be9c68);
  uVar9 = FUN_00e6ce7c("MENU_DRAFT_LOBBY_SECONDS_LABEL_SMALL",0);
  FUN_00f0d75c(plVar6,uVar9);
  if ((*(uint *)((long)param_1 + 0x714) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x714) = *(uint *)((long)param_1 + 0x714) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar6);
  }
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

