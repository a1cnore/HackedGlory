// functions/00c70 — 18 functions
#include "libGameKindred.h"




void FUN_00c70058(long param_1)

{
  FUN_00c396c4(*(undefined8 *)(param_1 + 0x298));
  return;
}




void FUN_00c70060(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x2a9) = 0;
  FUN_00f048e0(auStack_48,DAT_0313c064,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c700cc(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x2a8) = 1;
  FUN_00f048e0(auStack_48,DAT_0313c060,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c7013c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0x2a8) = 0;
  FUN_00f048e0(auStack_48,DAT_0313c05c,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c701a8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_02801688;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x40;
  FUN_00f11234(plVar2);
  plVar3 = param_1 + 0x74;
  FUN_00f0c714(plVar3);
  FUN_00f0ac5c(param_1 + 0x8f);
  plVar4 = param_1 + 0xb8;
  FUN_00ed66ec(plVar4);
  param_1[0x1fd] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00ed5664(plVar4,param_1 + 0x8f,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar3,plVar1,1);
  local_88 = (code *)CONCAT71(local_88._1_7_,9);
  FUN_00ed5ab0(plVar4,&local_88);
  local_60 = DAT_03210c50;
  local_88 = FUN_00c70370;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0xb9,&local_88);
  FUN_00ed7144(plVar4,0);
  FUN_00f112f0(plVar2,1);
  FUN_00f0c774(plVar3,&DAT_01bee7f6);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  uVar6 = FUN_00e6ce7c("SOCIAL_PINGS_PACK_PREVIEW_ICONS_INSTRUCTION",0);
  FUN_00f0d75c(plVar1,uVar6);
  FUN_00c70378(param_1);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c70370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00c70e5c(param_1,param_4);
  return;
}




void FUN_00c70378(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00f13f18(param_1,param_1 + 0xfe8);
  FUN_00f13f18(param_1 + 0x5c0,param_1 + 0xfe8);
  uVar6 = 0x42a00000;
  lVar4 = param_1 + 0x200;
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xfe8),lVar4);
  local_60 = FUN_00f13e54(lVar4);
  uStack_5c = uVar6;
  FUN_00f13f18(param_1 + 0x3a0,&local_60);
  lVar1 = param_1 + 0x478;
  local_60 = FUN_00f13e54(lVar4);
  uStack_5c = uVar6;
  FUN_00f13f18(lVar1,&local_60);
  FUN_00f07940(0,0,param_1 + 0xd0,8,lVar4,8);
  if (*(int *)(param_1 + 0xc0) != 0) {
    uVar5 = 0;
    do {
      FUN_00f13f08(*(undefined4 *)(param_1 + 0xfe8),*(float *)(param_1 + 0xfec) * 0.4,
                   *(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8));
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8);
      if (uVar5 == 0) {
        FUN_00f07b18(0,uVar3,0,lVar1,2);
        lVar4 = lVar1;
      }
      else {
        lVar4 = *(long *)(*(long *)(param_1 + 200) + (ulong)((int)uVar5 - 1) * 8);
        FUN_00f07b18(0,uVar3,0,lVar4,2);
      }
      FUN_00f07b18(0,uVar3,3,lVar4,3);
      FUN_00c70668(*(undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8));
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0xc0));
  }
  if (*(float *)(param_1 + 0x604) != 0.0) {
    *(undefined4 *)(param_1 + 0x604) = 0;
    FUN_0091ada4(param_1 + 0x5c0);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c70538(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02801688;
  FUN_00c705c0();
  thunk_FUN_00ed5534(param_1 + 0xb8);
  param_1[0x8f] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xa6);
  FUN_00f13d08(param_1 + 0x8f);
  FUN_00f13d08(param_1 + 0x74);
  FUN_00f13d08(param_1 + 0x40);
  FUN_00f0d3a4(param_1 + 0x1a);
  if ((void *)param_1[0x19] != (void *)0x0) {
    operator_delete__((void *)param_1[0x19]);
    param_1[0x18] = 0;
    param_1[0x19] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c705c0(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 200) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0xc0);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 200) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 200) != 0) {
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  FUN_00ed5670(param_1 + 0x5c0);
  return;
}




void FUN_00c70644(void *param_1)

{
  FUN_00c70538();
  operator_delete(param_1);
  return;
}




void FUN_00c70668(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  ulong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_90;
  float fStack_8c;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  FUN_00f13f18(param_1,param_1 + 0xe80);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xe80),*(float *)(param_1 + 0xe84) * 0.8,param_1 + 0x188);
  uVar9 = (ulong)(uint)(*(float *)(param_1 + 0xe84) * 0.8);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xe80),uVar9,param_1 + 0x278);
  uVar10 = *(undefined4 *)(param_1 + 0xe80);
  lVar5 = param_1 + 0x638;
  FUN_00f10374(lVar5,1);
  uVar11 = *(undefined4 *)(param_1 + 0xe84);
  uVar7 = uVar9;
  FUN_00f10374(lVar5,7);
  FUN_00f10644(0,uVar10,0,uVar9,uVar11,uVar7,lVar5);
  FUN_00f13f08(*(float *)(param_1 + 0xe80) + 10.0,*(undefined4 *)(param_1 + 0xe84),lVar5);
  fVar8 = 80.0;
  lVar1 = param_1 + 0x368;
  FUN_00f13f08(0x42a00000,lVar1);
  local_90 = (float)FUN_00f0e700(lVar1);
  local_90 = local_90 * 0.8;
  fStack_8c = fVar8 * 0.8;
  FUN_00f13f18(param_1 + 0x458,&local_90);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0xe80),0x40800000,param_1 + 0x548);
  lVar2 = param_1 + 0x788;
  fVar8 = (float)FUN_00f0d548(param_1 + 0x890);
  FUN_00f13f08(fVar8 + 60.0,0x42a00000,lVar2);
  fVar8 = (float)FUN_00f0e700(lVar2);
  *(float *)(param_1 + 0x884) = 40.0 / fVar8;
  FUN_00f0dad0(*(float *)(param_1 + 0xe80) * 0.3 * 0.8,param_1 + 0xc20,1);
  FUN_00f07b18(0,lVar2,3,param_1,3);
  FUN_00f07b18(0x41a00000,param_1 + 0x890,3,lVar2,3);
  FUN_00f07940(0,0,lVar5,8,param_1,8);
  FUN_00f07940(0,0,param_1 + 0x188,3,param_1,3);
  FUN_00f07940(0,0x41200000,param_1 + 0x9c0,4,param_1,4);
  uVar10 = 0;
  FUN_00f07940(0,param_1 + 0x548,3,param_1,3);
  if (*(int *)(param_1 + 0xb8) != 0) {
    iVar3 = **(int **)(param_1 + 200);
    uVar7 = 0;
    do {
      fVar8 = (1.0 / (float)(iVar3 + 2)) * (*(float *)(param_1 + 0xe80) + -120.0);
      FUN_00f13f08(fVar8,fVar8,*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar7 * 8));
      if (uVar7 == 0) {
        uVar6 = 7;
        lVar5 = param_1;
        uVar11 = 0x42c80000;
      }
      else {
        uVar6 = 5;
        lVar5 = *(long *)(*(long *)(param_1 + 0xc0) + (ulong)((int)uVar7 - 1) * 8);
        uVar11 = 0;
      }
      uVar10 = 0;
      FUN_00f07940(uVar11,*(undefined8 *)(*(long *)(param_1 + 0xc0) + uVar7 * 8),7,lVar5,uVar6);
      if (*(long *)(param_1 + 200) != 0) {
        *(bool *)(*(long *)(*(long *)(param_1 + 0xc0) + uVar7 * 8) + 0xb34) =
             *(int *)(*(long *)(param_1 + 200) + 0x40) == 3;
      }
      FUN_00c71ad4();
      uVar7 = uVar7 + 1;
    } while (uVar7 < *(uint *)(param_1 + 0xb8));
  }
  if (*(long *)(param_1 + 200) != 0) {
    FUN_00c71800(param_1);
  }
  lVar5 = param_1 + 0xd0;
  local_90 = (float)FUN_00f01c54(lVar5,0,0,1,1);
  fStack_8c = (float)uVar10;
  FUN_00f13f18(lVar5,&local_90);
  FUN_00f07940(0xc1200000,0,lVar5,5,param_1,5);
  lVar2 = param_1 + 0xaf0;
  FUN_00f07940(0,0,lVar2,4,lVar5,4);
  FUN_00f07940(0,0x41200000,lVar1,4,lVar2,6);
  FUN_00f07940(0,0,param_1 + 0x458,8,lVar1,8);
  FUN_00f07940(0,0,param_1 + 0xd50,4,lVar2,6);
  FUN_00f07940(0,0,param_1 + 0xc20,4,param_1 + 0xd50,6);
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c70a7c(long param_1,uint *param_2)

{
  long lVar1;
  void *pvVar2;
  ulong uVar3;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*param_2 != 0) {
    uVar3 = 0;
    do {
      pvVar2 = operator_new(0xe88);
      FUN_00c70ec4();
      local_60 = pvVar2;
      FUN_00c70b48(pvVar2,*(undefined8 *)(*(long *)(param_2 + 2) + uVar3 * 8));
      FUN_00c70c98(param_1 + 0xc0,&local_60);
      FUN_00ed5664(param_1 + 0x5c0,local_60,1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *param_2);
  }
  FUN_00c70378(param_1);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c70b48(long *param_1,uint *param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  byte local_90 [16];
  void *local_80;
  void *local_78;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  param_1[0x19] = (long)param_2;
  FUN_008fcdb8(local_70,param_2 + 4);
  pvVar3 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar3 = local_60;
  }
  uVar2 = FUN_00e6ce7c(pvVar3,0);
  FUN_00f0d75c(param_1 + 0x138,uVar2);
  if (*param_2 != 0) {
    uVar4 = 0;
    do {
      uVar2 = *(undefined8 *)(*(long *)(param_2 + 2) + uVar4 * 8);
      pvVar3 = operator_new(0xb38);
      FUN_00c71d20();
      local_78 = pvVar3;
      FUN_008fcdb8(local_90,param_1[0x19] + 0x28);
      FUN_00c71670(pvVar3,uVar2,local_90,(char)param_2[0x11],*(undefined1 *)((long)param_2 + 0x45));
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
      FUN_00c71778(param_1 + 0x17,&local_78);
      (**(code **)(*param_1 + 0x78))(param_1,local_78,1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_2);
  }
  FUN_00c70668(param_1);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c70c98(uint *param_1,undefined8 *param_2)

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
    FUN_00c72130(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c70d20(undefined1 param_1 [16],float param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 local_50;
  float local_4c;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar1 = param_3 + 0x3a0;
  FUN_00f01980(lVar1);
  lVar4 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdc08(puVar6);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  uVar2 = *(undefined4 *)(param_3 + 0x3e0);
  if ((param_4 & 1) == 0) {
    FUN_00f13e54(lVar1);
    local_4c = -param_2;
  }
  else {
    local_4c = 0.0;
  }
  local_50 = uVar2;
  FUN_00efdc50(puVar6,&local_50);
  FUN_00efcac4(0x3e19999a,puVar6);
  FUN_00f022a0(lVar1,puVar6);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c70e5c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_00f04924(param_2);
  if (iVar1 < 1) {
    iVar1 = FUN_00f04924(param_2);
    if (-1 < iVar1) {
      return;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_00c70d20(param_1,uVar2);
  return;
}




void FUN_00c70eb8(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0xfe8) = param_1;
  *(undefined4 *)(param_3 + 0xfec) = param_2;
  FUN_00c70378();
  return;
}




void FUN_00c70ec4(long *param_1)

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
  long lVar12;
  undefined8 uVar13;
  uint uVar14;
  code *local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar12 = tpidr_el0;
  local_70 = *(long *)(lVar12 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x1a;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_028017d0;
  param_1[0x17] = 0;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x31;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4f;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x6d;
  FUN_00f0e4a8();
  FUN_00f0e4a8();
  plVar5 = param_1 + 0xa9;
  FUN_00f0e4a8();
  plVar6 = param_1 + 199;
  FUN_00f0fe84(plVar6);
  plVar7 = param_1 + 0xf1;
  FUN_00f0f5dc(plVar7);
  plVar8 = param_1 + 0x112;
  FUN_00f0d160(plVar8);
  plVar9 = param_1 + 0x138;
  FUN_00f0d160(plVar9);
  FUN_00f0d160();
  plVar10 = param_1 + 0x184;
  FUN_00f0d160(plVar10);
  plVar11 = param_1 + 0x1aa;
  FUN_00f0d160(plVar11);
  param_1[0x1d0] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_00f023ec(plVar7,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x15e,1);
  FUN_00f023ec(plVar1,plVar11,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar4,param_1 + 0x8b,1);
  FUN_00f023ec(plVar1,plVar10,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  local_a0._0_4_ = 0xffb6acaa;
  FUN_00f0d92c(plVar9,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&local_a0);
  FUN_00f0d92c(param_1 + 0x15e,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xffb6acaa);
  FUN_00f0d92c(plVar10,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&local_a0);
  FUN_00f0dac8(plVar10,3);
  uVar13 = FUN_00e6ce7c("ACTIVE_SOCIAL_PINGS_PACK_INSTRUCTION",0);
  FUN_00f0d75c(plVar10,uVar13);
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_frame");
  FUN_00f0e548(param_1 + 0x8b,PTR_s_build___MenuPartsCommon_tga_02be3530,"circle_button_fill");
  local_78 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) | 0x10;
  local_a0 = thunk_FUN_00c71ccc;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_009693a0(param_1 + 0x6e,&local_a0);
  local_a0 = thunk_FUN_00c71ccc;
  local_78 = DAT_03210f8c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_1;
  FUN_009693a0(param_1 + 0x6e,&local_a0);
  FUN_00f0d92c(plVar11,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90,&DAT_01bee7fa);
  FUN_00f0e548(plVar5,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  uVar14 = *(uint *)((long)param_1 + 0x5cc);
  if ((uVar14 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x5cc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x2600;
    FUN_0091ada4(plVar5);
  }
  FUN_00f0d92c(plVar8,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  uVar13 = FUN_00e6ce7c("MENU_HEROES_BANNER_NEW",0);
  FUN_00f0d75c(plVar8,uVar13);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  local_a0._0_4_ = 0xff828282;
  FUN_00f0e670(plVar2,&local_a0,2);
  *(byte *)(param_1 + 0x4c) = *(byte *)(param_1 + 0x4c) | 2;
  *(uint *)((long)param_1 + 0x20c) = *(uint *)((long)param_1 + 0x20c) & 0xfffffffb;
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  local_a0._0_4_ = 0xff6c5246;
  FUN_00f0e670(plVar3,&local_a0,2);
  *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) & 0xfffffffb;
  FUN_00f0e548(plVar7,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  local_a0 = (code *)CONCAT44(local_a0._4_4_,0xff1c1ca5);
  FUN_00f0e670(plVar7,&local_a0,2);
  uVar14 = *(uint *)((long)param_1 + 0x6bc);
  *(uint *)((long)param_1 + 0x80c) = *(uint *)((long)param_1 + 0x80c) & 0xfffffffb;
  if ((uVar14 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x6bc) = uVar14 & 0xffff8000 | uVar14 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar6);
    uVar14 = *(uint *)((long)param_1 + 0x6bc);
  }
  *(uint *)((long)param_1 + 0x6bc) = uVar14 & 0xffffffbf;
  FUN_00f0ff6c(plVar6,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0ff74(plVar6,0,0,0,0,"quest_item_highlight_top",0,0,0,0,0,0,0,0,0,0,0,
               "quest_item_highlight_mid",0,0,0,0,0,0,0,0,0,0,0,"quest_item_highlight_bot",0,0,0,0,0
               ,0,0);
  *(uint *)((long)param_1 + 0x6bc) = *(uint *)((long)param_1 + 0x6bc) & 0xfffffffb;
  if (*(long *)(lVar12 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

