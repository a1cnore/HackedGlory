// functions/00a46 — 13 functions
#include "libGameKindred.h"




void FUN_00a46330(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(*param_5,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"icon_item_empty");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00a463e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c9eb0;
  if ((long *)param_1[0xf5] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xf5] + 8))();
    param_1[0xf5] = 0;
  }
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x48))();
  }
  FUN_00f0d3a4(param_1 + 0xcf);
  FUN_00f0d3a4(param_1 + 0xa9);
  param_1[0x8b] = &PTR_FUN_028266f0;
  param_1[0xa2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa5);
  FUN_00f13d08(param_1 + 0x8b);
  param_1[0x6b] = &PTR_FUN_028266f0;
  param_1[0x82] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x85);
  FUN_00f13d08(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a464dc(void *param_1)

{
  FUN_00a463e0();
  operator_delete(param_1);
  return;
}




void FUN_00a46500(long param_1,long param_2,undefined1 param_3,undefined4 *param_4,long param_5,
                 byte param_6,byte param_7)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  code *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d9eb0c(param_2);
  if (lVar3 == 0) goto LAB_00a466bc;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(undefined1 *)(param_1 + 0x7d8) = param_3;
  *(long *)(param_1 + 0x7c8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 2000) = uVar1;
  *(undefined4 *)(param_1 + 0x7dc) = *param_4;
  *(byte *)(param_1 + 0x7e0) = *(byte *)(param_1 + 0x7e0) & 0xfd | (param_6 & 1) << 1;
  lVar3 = FUN_00d73214(lVar3,*param_4);
  if ((*(byte *)(param_1 + 0x7e0) >> 1 & 1) == 0) {
    FUN_00f0d378(param_1 + 0x678,PTR_s_build___Fonts_Futura_Medium_40_S_02be9d10);
    if ((*(float *)(param_1 + 0x588) != -2.0) || (*(float *)(param_1 + 0x58c) != 4.0)) {
      uVar5 = 0x40800000c0000000;
LAB_00a4660c:
      *(undefined8 *)(param_1 + 0x588) = uVar5;
      FUN_0091ada4(param_1 + 0x548);
    }
  }
  else {
    FUN_00f0d378(param_1 + 0x678,PTR_s_build___Fonts_Futura_Medium_30_S_02be9d08);
    if ((*(float *)(param_1 + 0x588) != -1.0) || (*(float *)(param_1 + 0x58c) != 2.0)) {
      uVar5 = 0x40000000bf800000;
      goto LAB_00a4660c;
    }
  }
  if (param_5 == 0) {
    param_5 = *(long *)(lVar3 + 8);
  }
  FUN_00f0e578(param_1 + 0x178,param_5);
  if ((param_6 & 1) == 0) {
    local_60 = DAT_03210f58;
    local_88 = FUN_00a466ec;
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    lStack_80 = param_1;
    FUN_009693a0(param_1 + 8,&local_88);
    local_88 = FUN_00a466ec;
    local_60 = DAT_03210f84;
    local_70 = 0;
    uStack_68 = 0;
    local_78 = 0;
    lStack_80 = param_1;
    FUN_009693a0(param_1 + 8,&local_88);
    uVar4 = *(uint *)(param_1 + 0x84) | 0x10;
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x84) & 0xffffffef;
  }
  *(uint *)(param_1 + 0x84) = uVar4;
  *(byte *)(param_1 + 0x7e0) = *(byte *)(param_1 + 0x7e0) & 0xfe | param_7 & 1;
LAB_00a466bc:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a466ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a4709c(param_1,param_4);
  return;
}




void FUN_00a466f4(long param_1)

{
  FUN_00a467b0(param_1,DAT_03210f58,FUN_00a466ec,param_1);
  FUN_00a467b0(param_1,DAT_03210f84,FUN_00a466ec,param_1);
  *(undefined1 *)(param_1 + 0x7d8) = DAT_0314b294;
  *(undefined4 *)(param_1 + 0x7dc) = 0xffffffff;
  *(byte *)(param_1 + 0x7e0) = *(byte *)(param_1 + 0x7e0) & 0xfe;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffeb;
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_00f01a4c(param_1,1);
  }
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00bbe3b8();
    return;
  }
  return;
}




void FUN_00a467b0(long param_1,int param_2,long param_3,long param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x10);
    lVar3 = (ulong)uVar1 * 0x30;
    do {
      if ((((int)plVar2[5] == param_2) && (plVar2[1] == param_4)) && (*plVar2 == param_3)) {
        FUN_0099c2fc((uint *)(param_1 + 8),plVar2,plVar2 + 6);
        return;
      }
      lVar3 = lVar3 + -0x30;
      plVar2 = plVar2 + 6;
    } while (lVar3 != 0);
  }
  return;
}




void FUN_00a46804(long param_1)

{
  if (*(long *)(param_1 + 0xb8) != 0) {
    FUN_00bbe3b8();
    return;
  }
  return;
}




void FUN_00a46814(long param_1)

{
  char *pcVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  byte *pbVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint local_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar5 = FUN_00d9ea60((long *)(param_1 + 0x7c8));
  if ((lVar5 == 0) ||
     (uVar6 = FUN_00d73574(lVar5,*(undefined4 *)(param_1 + 0x7dc)), (uVar6 & 1) == 0))
  goto LAB_00a46bcc;
  uVar6 = FUN_00d73374(lVar5,*(undefined4 *)(param_1 + 0x7dc));
  iVar3 = 0;
  if ((((uVar6 & 1) == 0) ||
      (iVar3 = FUN_00d731ec(lVar5,*(undefined4 *)(param_1 + 0x7dc)), iVar3 < 2)) &&
     (uVar6 = FUN_00d73374(lVar5,*(undefined4 *)(param_1 + 0x7dc)), (uVar6 & 1) == 0)) {
    uVar4 = FUN_00d7312c(lVar5,*(undefined4 *)(param_1 + 0x7dc));
    if (1 < uVar4) {
      *(uint *)(param_1 + 0x6fc) = *(uint *)(param_1 + 0x6fc) | 4;
      iVar3 = FUN_00d7312c(lVar5,*(undefined4 *)(param_1 + 0x7dc));
      goto LAB_00a468ec;
    }
    *(uint *)(param_1 + 0x6fc) = *(uint *)(param_1 + 0x6fc) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x6fc) = *(uint *)(param_1 + 0x6fc) | 4;
LAB_00a468ec:
    FUN_00a46bfc(param_1,iVar3);
  }
  uVar6 = FUN_00d73360(lVar5,*(undefined4 *)(param_1 + 0x7dc));
  if ((uVar6 & 1) == 0) {
    lVar7 = FUN_00d73214(lVar5,*(undefined4 *)(param_1 + 0x7dc));
    uVar6 = FUN_00e6a488(*(undefined8 *)(lVar7 + 400));
    if ((uVar6 & 1) != 0) {
      uVar4 = *(uint *)(param_1 + 0x84);
      if ((uVar4 & 0x7f80) != 0x6600) {
        *(uint *)(param_1 + 0x84) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
        FUN_0091ada4(param_1);
      }
      FUN_00f0e578(param_1 + 0x268,"hud_store_inventory_tray");
      *(undefined4 *)(param_1 + 0x7c0) = 0x3f800000;
      *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) | 4;
      FUN_00f0e6bc(0x3f800000,param_1 + 0x178);
      FUN_00f0d75c(param_1 + 0x548,&DAT_03210450);
      *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
      goto LAB_00a46bcc;
    }
    plVar8 = *(long **)(param_1 + 0x7c8);
    if (plVar8 == (long *)0x0) {
      uVar12 = 0;
    }
    else if (*(int *)(param_1 + 2000) == (int)plVar8[1]) {
      uVar12 = (**(code **)(*plVar8 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x7c8) = 0;
      uVar12 = 0;
      *(undefined4 *)(param_1 + 2000) = DAT_03214ce8;
    }
    lVar5 = FUN_00d73214(lVar5,*(undefined4 *)(param_1 + 0x7dc));
    pbVar9 = *(byte **)(lVar5 + 400);
    if (pbVar9 == (byte *)0x0) {
      local_50[0] = 0;
    }
    else {
      uVar4 = (uint)*pbVar9;
      local_50[0] = 0x811c9dc5;
      if (*pbVar9 != 0) {
        do {
          pbVar9 = pbVar9 + 1;
          local_50[0] = (local_50[0] ^ uVar4) * 0x1000193;
          uVar4 = (uint)*pbVar9;
        } while (*pbVar9 != 0);
      }
    }
    uVar12 = FUN_00d9f258(uVar12,local_50);
    fVar10 = (float)FUN_00d6dad0();
    if (fVar10 <= 0.0) {
      *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
      *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) & 0xfffffffb;
      goto LAB_00a46bcc;
    }
    uVar11 = FUN_00d6d9f4(uVar12);
    uVar12 = FUN_00d6dad0(uVar12);
  }
  else {
    if ((~*(uint *)(param_1 + 0x84) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x7f80;
      FUN_0091ada4(param_1);
    }
    uVar6 = FUN_00ceab64();
    pcVar1 = "hud_store_inventory_tray";
    if ((uVar6 & 1) == 0) {
      pcVar1 = "hud_store_inventory_regular";
    }
    FUN_00f0e578(param_1 + 0x268,pcVar1);
    lVar7 = param_1 + 0x178;
    FUN_00f0e6bc(0x3f800000,lVar7);
    local_50[0] = 0xffffffff;
    FUN_00f0e670(lVar7,local_50,2);
    *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
    *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) & 0xfffffffb;
    *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) & 0xfffffffb;
    uVar4 = FUN_00d736f4(lVar5,*(undefined4 *)(param_1 + 0x7dc));
    if ((uVar4 & 0x180) != 0) {
      local_50[0] = 0xff404040;
      FUN_00f0e670(lVar7,local_50,2);
      pcVar1 = "ability_stunned_badge";
      if ((uVar4 & 0x80) == 0) {
        pcVar1 = "ability_silenced_badge";
      }
      *(uint *)(param_1 + 0x4dc) = *(uint *)(param_1 + 0x4dc) | 4;
      FUN_00f0e578(param_1 + 0x458,pcVar1);
      goto LAB_00a46bcc;
    }
    if ((uVar4 >> 2 & 1) == 0) {
      if (uVar4 != 0) {
        *(undefined4 *)(param_1 + 0x7c0) = 0;
        *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) | 4;
      }
      goto LAB_00a46bcc;
    }
    uVar11 = FUN_00d734b0(lVar5,*(undefined4 *)(param_1 + 0x7dc));
    uVar12 = FUN_00d7349c(lVar5,*(undefined4 *)(param_1 + 0x7dc));
  }
  FUN_00a46ca0(uVar11,uVar12,param_1);
LAB_00a46bcc:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a46bfc(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_2);
  FUN_00f0d75c(param_1 + 0x678,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a46c84(long param_1)

{
  *(uint *)(param_1 + 0x5cc) = *(uint *)(param_1 + 0x5cc) & 0xfffffffb;
  *(uint *)(param_1 + 0x3dc) = *(uint *)(param_1 + 0x3dc) & 0xfffffffb;
  return;
}




void FUN_00a46ca0(float param_1,float param_2,long param_3)

{
  long lVar1;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,(int)(param_1 + 0.99));
  FUN_00f0d75c(param_3 + 0x548,&local_48);
  *(float *)(param_3 + 0x7c0) = 1.0 - param_1 / param_2;
  *(uint *)(param_3 + 0x5cc) = *(uint *)(param_3 + 0x5cc) | 4;
  *(uint *)(param_3 + 0x3dc) = *(uint *)(param_3 + 0x3dc) | 4;
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a46d60(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if (param_3[4] == 0) goto LAB_00a47068;
  plVar1 = param_3 + 0x18;
  local_60 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  local_60 = local_60 * 0.95;
  param_2 = param_2 * 0.95;
  fStack_5c = param_2;
  FUN_00f13f18(plVar1,&local_60);
  plVar2 = param_3 + 0x2f;
  fVar5 = (float)FUN_00f13e54(plVar1);
  fVar7 = param_2;
  fVar6 = (float)FUN_00f0e700(plVar2);
  param_2 = param_2 / fVar7;
  if ((*(float *)(param_3 + 0x38) != fVar5 / fVar6) ||
     (*(float *)((long)param_3 + 0x1c4) != param_2)) {
    *(float *)(param_3 + 0x38) = fVar5 / fVar6;
    *(float *)((long)param_3 + 0x1c4) = param_2;
    FUN_0091ada4(plVar2);
  }
  fVar5 = (float)FUN_00f13e54(plVar1);
  fVar7 = param_2;
  fVar6 = (float)FUN_00f0e700(param_3 + 0x6b);
  param_2 = param_2 / fVar7;
  if ((*(float *)(param_3 + 0x74) != fVar5 / fVar6) ||
     (*(float *)((long)param_3 + 0x3a4) != param_2)) {
    *(float *)(param_3 + 0x74) = fVar5 / fVar6;
    *(float *)((long)param_3 + 0x3a4) = param_2;
    FUN_0091ada4(param_3 + 0x6b);
  }
  fVar7 = (float)FUN_00f13e54(plVar1);
  fVar6 = param_2 * 0.9;
  fVar5 = (float)FUN_00f0e700(param_3 + 0x8b);
  fVar5 = (fVar7 * 0.9) / fVar5;
  fVar6 = fVar6 / param_2;
  if ((*(float *)(param_3 + 0x94) != fVar5) || (*(float *)((long)param_3 + 0x4a4) != fVar6)) {
    *(float *)(param_3 + 0x94) = fVar5;
    *(float *)((long)param_3 + 0x4a4) = fVar6;
    FUN_0091ada4(param_3 + 0x8b);
  }
  uVar4 = FUN_00ceab64();
  if ((uVar4 & 1) == 0) {
    fVar5 = *(float *)(param_3 + 0xb2);
    fVar7 = *(float *)(&DAT_01ba02b0 + (ulong)((*(byte *)(param_3 + 0xfc) & 1) == 0) * 4);
    if ((fVar5 != fVar7) || (fVar5 = *(float *)((long)param_3 + 0x594), fVar5 != fVar7)) {
      *(float *)(param_3 + 0xb2) = fVar7;
      *(float *)((long)param_3 + 0x594) = fVar7;
      goto LAB_00a46f28;
    }
  }
  else {
    fVar5 = *(float *)(param_3 + 0xb2);
    if ((fVar5 != 0.5) || (fVar5 = *(float *)((long)param_3 + 0x594), fVar5 != 0.5)) {
      param_3[0xb2] = 0x3f0000003f000000;
LAB_00a46f28:
      FUN_0091ada4(param_3 + 0xa9);
    }
  }
  fVar6 = (float)FUN_00f0eac0(plVar2);
  fVar7 = fVar5;
  fVar8 = (float)FUN_00f0e700(param_3 + 0x4d);
  if ((*(float *)(param_3 + 0x56) != fVar6 / fVar8) ||
     (*(float *)((long)param_3 + 0x2b4) != fVar5 / fVar7)) {
    *(float *)(param_3 + 0x56) = fVar6 / fVar8;
    *(float *)((long)param_3 + 0x2b4) = fVar5 / fVar7;
    FUN_0091ada4(param_3 + 0x4d);
  }
  plVar2 = param_3 + 0xcf;
  fVar5 = (float)FUN_00f13e54(plVar1);
  fVar7 = 0.5;
  if ((*(byte *)(param_3 + 0xfc) & 2) != 0) {
    fVar7 = 0.65;
  }
  fVar5 = fVar5 * fVar7;
  fVar6 = (float)FUN_00f0d548(plVar2);
  fVar5 = fVar5 - fVar6 * 0.5;
  FUN_00f01c20(plVar1);
  fVar6 = 0.5;
  if ((*(byte *)(param_3 + 0xfc) & 2) != 0) {
    fVar6 = 0.65;
  }
  fVar6 = fVar7 * fVar6;
  FUN_00f0d548(plVar2);
  fVar6 = fVar6 + fVar7 * -0.25;
  if ((*(float *)(param_3 + 0xd7) != fVar5) || (*(float *)((long)param_3 + 0x6bc) != fVar6)) {
    *(float *)(param_3 + 0xd7) = fVar5;
    *(float *)((long)param_3 + 0x6bc) = fVar6;
    FUN_0091ada4(plVar2);
  }
  if (((*(byte *)(param_3 + 0xfc) >> 1 & 1) != 0) &&
     ((*(float *)(param_3 + 0xd8) != 0.7 || (*(float *)((long)param_3 + 0x6c4) != 0.7)))) {
    param_3[0xd8] = 0x3f3333333f333333;
    FUN_0091ada4(plVar2);
  }
  if ((param_3[0xf5] != 0) && (uVar4 = FUN_00f02540(), (uVar4 & 1) != 0)) {
    FUN_00f07a18(0,0,param_3[0xf5],6);
  }
LAB_00a47068:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

