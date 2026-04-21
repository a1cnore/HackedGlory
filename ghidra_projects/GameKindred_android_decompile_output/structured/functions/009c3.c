// functions/009c3 — 14 functions
#include "libGameKindred.h"




void FUN_009c30d0(long param_1)

{
  FUN_00a2a528(param_1 + 0x63ba0);
  return;
}




void FUN_009c30e0(float param_1,long param_2,long param_3,undefined8 param_4,ulong param_5)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  float *pfVar8;
  byte local_80 [16];
  void *local_70;
  ulong local_68 [2];
  void *local_58;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_009f2588();
  FUN_009f2fe4(uVar4,0xcc7f156e,1);
  uVar4 = FUN_009f2588();
  FUN_009f2fe4(uVar4,0x5bb9d395,1);
  *(long *)(param_2 + 0x28) = param_3 + 0x28;
  uVar1 = *(undefined4 *)(param_3 + 0x30);
  *(undefined8 *)(param_2 + 0x38) = param_4;
  *(undefined4 *)(param_2 + 0x30) = uVar1;
  FUN_00a5a398(param_2 + 0x22fe0,param_3);
  FUN_00a552d4(param_2 + 0x77750,param_3);
  if ((*(ushort *)(param_2 + 0x7b028) >> 0xd & 1) != 0) {
    FUN_00a6b340(param_2 + 0x742a8,param_3);
  }
  FUN_00a2a340(param_2 + 0x63ba0,param_3);
  FUN_00a56da4(param_2 + 0x587e0,param_3);
  FUN_00a4e470(param_2 + 0x570c0,param_3);
  FUN_00a3b8a4(param_2 + 0x268,param_3);
  lVar5 = FUN_00f00438("plaques-all");
  if (lVar5 != 0) {
    uVar2 = *(uint *)(lVar5 + 0x84);
    *(uint *)(lVar5 + 0x84) = uVar2 | 4;
    if ((~uVar2 & 0x7f80) != 0) {
      *(uint *)(lVar5 + 0x84) = uVar2 | 0x7f84;
      FUN_0091ada4();
    }
  }
  if ((param_5 & 1) != 0) {
    *(uint *)(param_2 + 0x17c) = *(uint *)(param_2 + 0x17c) | 4;
    FUN_009c3560(0x3e4ccccd,param_2,1);
    FUN_009c3740(param_2);
  }
  FUN_00ceace8();
  uVar6 = FUN_00ceae88();
  if ((uVar6 & 1) != 0) {
    local_68[0] = 0;
    FUN_019889cc(local_68,1,DAT_02c091a0,0);
    if (local_68[0] != 0) {
      FUN_00a0aa4c(local_68[0],param_2);
    }
    pvVar7 = operator_new(0x570);
    FUN_00add4f8();
    *(void **)(param_2 + 0x7b010) = pvVar7;
    FUN_00addafc(pvVar7,1);
    FUN_00f023ec(param_2 + 0x7a758,*(undefined8 *)(param_2 + 0x7b010),1);
    uVar6 = FUN_009580c4();
    if (((uVar6 & 1) == 0) ||
       (((lVar5 = FUN_009580b8(), *(int *)(lVar5 + 0x55e4) == 0 &&
         (uVar6 = FUN_00969254(), (uVar6 & 1) != 0)) &&
        (lVar5 = FUN_00969248(), 0 < *(int *)(lVar5 + 0x38))))) {
      uVar4 = FUN_009f1f64();
      FUN_009f2198(uVar4,0x1a,0);
      uVar4 = FUN_009f1f64();
      FUN_009f2198(uVar4,0x1b,1);
    }
    pvVar7 = operator_new(0x2c38);
    FUN_00a4e704();
    *(void **)(param_2 + 0x7b018) = pvVar7;
    FUN_00f023ec(param_2 + 0xf8,pvVar7,1);
    *(uint *)(*(long *)(param_2 + 0x7b018) + 0x84) =
         *(uint *)(*(long *)(param_2 + 0x7b018) + 0x84) & 0xfffffffb;
  }
  pfVar8 = (float *)FUN_00d70a78();
  if (param_1 < *pfVar8) {
    FUN_00ceace8();
    uVar6 = FUN_00ceaf3c();
    if ((uVar6 & 1) != 0) {
      FUN_00ceace8();
      uVar6 = FUN_00ceb054();
      if ((uVar6 & 1) == 0) goto LAB_009c33a8;
    }
  }
  FUN_009c3560(0x3e4ccccd,param_2,1);
LAB_009c33a8:
  uVar6 = FUN_0092e780();
  if ((uVar6 & 1) == 0) {
    FUN_009852ac(local_68,0xfe);
    FUN_00ce20fc(local_68);
  }
  uVar6 = FUN_00e80f58();
  if ((uVar6 & 1) != 0) {
    lVar5 = FUN_00e829e0();
    FUN_008fcdb8(local_68,lVar5 + 0xa8);
    FUN_00d55870(param_3);
    FUN_0090d990(local_80);
    FUN_00c82b34(param_2 + 0x63a08,local_80,param_3);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_68[0] & 1) != 0) {
      operator_delete(local_58);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009c3454(long param_1,ulong param_2)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  if ((param_2 & 1) != 0) {
    *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) | 4;
    FUN_009c3560(0x3e4ccccd,param_1,1);
    FUN_009c3740(param_1);
    return;
  }
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efcad4(puVar3);
    *(undefined ***)puVar3 = &PTR_FUN_02825268;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3f000000,puVar3);
  FUN_00f022a0(param_1 + 0xf8,puVar3);
  return;
}




void FUN_009c3560(undefined8 param_1,long param_2,ushort param_3)

{
  long lVar1;
  ushort *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined4 uVar7;
  
  lVar1 = param_2 + 0x268;
  uVar3 = FUN_00a3ec88(lVar1);
  if ((param_3 & 1) == 0) {
    if ((uVar3 & 1) != 0) {
      FUN_00a3f244(lVar1);
    }
  }
  else if ((uVar3 & 1) == 0) {
    FUN_00a3f258(lVar1);
  }
  puVar2 = (ushort *)(param_2 + 0x7b028);
  FUN_00a3e6d4(param_1,lVar1,param_3 & 1,*(undefined4 *)(param_2 + 0x7b024),*puVar2 >> 0xf);
  uVar4 = FUN_00f00438("plaques-all");
  lVar1 = DAT_03210d00;
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
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar7 = 0x3f800000;
  if ((param_3 & 1) == 0) {
    uVar7 = 0;
  }
  FUN_00efddc4(uVar7,puVar6);
  FUN_00efcac4(0x3ecccccd,puVar6);
  FUN_00f01980(uVar4);
  FUN_00f022a0(uVar4,puVar6);
  if ((param_3 & 1) != 0) {
    FUN_009c3c1c(0x3e4ccccd,param_2,0);
    FUN_009c543c(param_2,0);
    FUN_009c60c4(param_2,0);
    FUN_009c3d14(param_2,0);
    FUN_009c3d80(param_2,0);
    FUN_009c3dec(param_2,0);
  }
  *puVar2 = *puVar2 & 0xf7ff | (param_3 & 1) << 0xb;
  return;
}




void FUN_009c3740(long param_1)

{
  long lVar1;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&uStack_2c,&local_30);
  FUN_00f13f08(uStack_2c,local_30,param_1 + 0x40);
  FUN_00f13f08(uStack_2c,local_30,param_1 + 0xf8);
  FUN_00f13f08(uStack_2c,local_30,param_1 + 0x1b0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_009c37b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar2 = FUN_00f02710(param_3 + 0x268,1);
  uVar3 = 0;
  if (lVar2 != 0) {
    lVar4 = *(long *)(param_3 + 0xf9d8);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + 0x28;
    }
    if (lVar2 == lVar1) {
      uVar3 = FUN_009cf2f8(param_1,param_2,lVar4);
      return uVar3;
    }
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_009c382c(long param_1)

{
  FUN_00bbfce8(param_1 + 0x5e128);
  return;
}




void FUN_009c383c(long param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  
  *(ushort *)(param_1 + 0x7b028) = *(ushort *)(param_1 + 0x7b028) | 0x8000;
  FUN_009c3560(0x3e4ccccd,param_1,0);
  FUN_00a3ee24(param_1 + 0x268);
  FUN_00b89d24(0x3e4ccccd,param_1 + 0x63ba0,0,4,1);
  FUN_009c3c1c(0x3e4ccccd,param_1,0);
  FUN_009c3ca4(0x3e4ccccd,param_1,0);
  FUN_009c3d14(param_1,0);
  FUN_009c3d80(param_1,0);
  FUN_009c3dec(param_1,0);
  uVar4 = FUN_0093d808();
  if ((uVar4 & 1) != 0) {
    FUN_009bbfb0();
    FUN_009bd6fc();
    return;
  }
  FUN_00ceace8();
  uVar4 = FUN_00ceae88();
  lVar7 = param_1 + 0x5e128;
  if ((uVar4 & 1) == 0) {
    uVar5 = 1;
LAB_009c3998:
    FUN_00bbfaa8(0x3e4ccccd,lVar7,1,uVar5);
    FUN_00bbfc50(lVar7,param_2 & 1,param_3);
    goto switchD_009c3970_caseD_2f;
  }
  FUN_00bbfaa8(0x3e4ccccd,lVar7,0,0);
  uVar5 = FUN_00ceacf4();
  switch((int)uVar5) {
  case 3:
    FUN_009c3e6c(uVar5,*(undefined8 *)(param_1 + 0x7b018),param_3);
    break;
  case 4:
    FUN_009c4200(uVar5,*(undefined8 *)(param_1 + 0x7b018),param_3);
    break;
  case 5:
switchD_009c3970_caseD_2e:
    FUN_009c43fc(uVar5,*(undefined8 *)(param_1 + 0x7b018),param_3);
    break;
  case 6:
    break;
  case 7:
    FUN_009c4b24(uVar5,*(undefined8 *)(param_1 + 0x7b018),param_3);
    break;
  default:
    switch((int)uVar5) {
    case 0x2d:
      FUN_009c4790(uVar5,*(undefined8 *)(param_1 + 0x7b018),param_3);
      break;
    case 0x2e:
      goto switchD_009c3970_caseD_2e;
    case 0x34:
      FUN_009c3dec(param_1,1);
      FUN_009c3560(0x3e4ccccd,param_1,0);
      break;
    case 0x35:
      uVar5 = 0;
      goto LAB_009c3998;
    }
  }
switchD_009c3970_caseD_2f:
  FUN_00a56ff0(0x3e4ccccd,param_1 + 0x587e0,0,4,1);
  *(uint *)(param_1 + 0x58864) = *(uint *)(param_1 + 0x58864) & 0xfffffff7;
  FUN_00b89d24(0x3e4ccccd,param_1 + 0x570c0,0,4,1);
  FUN_009b52b4();
  iVar1 = FUN_00bc0594(lVar7);
  if (iVar1 == 6) {
    FUN_00ceace8();
    uVar4 = FUN_00ceae90();
    if ((uVar4 & 1) == 0) {
      plVar6 = *(long **)(param_1 + 0x28);
      if (plVar6 == (long *)0x0) {
        lVar7 = 0;
      }
      else if (*(int *)(param_1 + 0x30) == (int)plVar6[1]) {
        lVar7 = (**(code **)(*plVar6 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x28) = 0;
        lVar7 = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
      }
      uVar5 = FUN_00d6eb50();
      uVar2 = FUN_00d5baac(lVar7);
      uVar5 = FUN_00d6eb3c(uVar5,uVar2);
      uVar8 = FUN_00ceace8();
      FUN_009bbfb0();
      FUN_009bc268();
      if ((param_2 & 1) == 0) {
        FUN_00905fdc(uVar5,uVar8);
      }
      else {
        FUN_00905df8();
      }
      for (lVar7 = *(long *)(lVar7 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
        if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_02c7bf38) {
          lVar7 = FUN_00d7b53c();
          if (lVar7 == 0) {
            uVar8 = FUN_00ceace8();
            pcVar10 = "talent_none";
            uVar2 = 0;
            uVar3 = 0;
          }
          else {
            pcVar10 = *(char **)(lVar7 + 0x38);
            lVar9 = FUN_00d7ade4(lVar7);
            uVar2 = *(undefined4 *)(lVar9 + 0x18);
            uVar3 = FUN_00d7ae38(lVar7);
            uVar8 = FUN_00ceace8();
          }
          FUN_00907294(uVar5,pcVar10,uVar2,uVar3,uVar8,param_2 & 1);
          return;
        }
      }
    }
  }
  return;
}




void FUN_009c3c1c(undefined8 param_1,long param_2,uint param_3)

{
  FUN_009c50cc(param_2,1,param_3 & 1);
  FUN_00b89d24(param_1,param_2 + 0x22fe0,param_3 & 1,4,1);
  if ((param_3 & 1) != 0) {
    FUN_00a57204();
    return;
  }
  FUN_00a57284(param_2 + 0x587e0);
  return;
}




void FUN_009c3ca4(undefined8 param_1,long param_2,uint param_3)

{
  FUN_009c50cc(param_2,4,param_3 & 1);
  if ((param_3 & 1) == 0) {
    FUN_00a57284(param_2 + 0x587e0);
  }
  else {
    FUN_00a57204();
  }
  FUN_00b89d24(param_1,param_2 + 0x742a8,param_3 & 1,4,1);
  return;
}




void FUN_009c3d14(long param_1,uint param_2)

{
  FUN_009c50cc(param_1,6,param_2 & 1);
  FUN_00c83c14(param_1 + 0x5f818,param_2 & 1);
  if ((param_2 & 1) != 0) {
    FUN_00a57204();
    return;
  }
  FUN_00a57284(param_1 + 0x587e0);
  return;
}




void FUN_009c3d80(long param_1,uint param_2)

{
  FUN_009c50cc(param_1,8,param_2 & 1);
  FUN_00c82b28(param_1 + 0x63a08,param_2 & 1);
  if ((param_2 & 1) != 0) {
    FUN_00a57204();
    return;
  }
  FUN_00a57284(param_1 + 0x587e0);
  return;
}




void FUN_009c3dec(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00c83db0(param_1 + 0x607a8);
  }
  FUN_009c50cc(param_1,7,param_2 & 1);
  FUN_00c83e90(param_1 + 0x607a8,param_2 & 1);
  if ((param_2 & 1) != 0) {
    FUN_00a57204();
    return;
  }
  FUN_00a57284(param_1 + 0x587e0);
  return;
}




void FUN_009c3e6c(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long lVar11;
  float fVar12;
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 **local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  undefined8 local_138;
  void *local_130;
  undefined8 local_128;
  void *local_120;
  undefined8 local_118;
  void *local_110;
  undefined8 local_108;
  void *local_100;
  ulong local_f8;
  undefined8 *local_f0;
  undefined8 **local_e8;
  void *local_e0;
  undefined8 local_d8;
  void *local_d0;
  undefined1 local_c8;
  undefined8 *local_c0;
  void *local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined1 local_a0;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined1 local_78;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  local_f8 = 0;
  local_f0 = (undefined8 *)0x0;
  uVar3 = FUN_00e6ce7c("TUTORIAL1_END_MATCH_DEFEATED_MINION",0);
  thunk_FUN_00e7051c(&local_108,uVar3);
  uVar3 = FUN_00e6ce7c("TUTORIAL1_END_MATCH_DEFEATED_JUNGLE_MONSTER",0);
  thunk_FUN_00e7051c(&local_118,uVar3);
  uVar3 = FUN_00e6ce7c("TUTORIAL1_END_MATCH_DEFEATED_PHINN",0);
  thunk_FUN_00e7051c(&local_128,uVar3);
  FUN_00e70510(&local_138);
  bVar2 = param_3 != 0;
  iVar5 = 100;
  if (bVar2) {
    iVar5 = 0;
  }
  uVar9 = 3;
  iVar6 = 500;
  if (bVar2) {
    iVar6 = 0;
  }
  iVar7 = 3000;
  if (bVar2) {
    iVar7 = 0;
    uVar9 = 0;
  }
  FUN_00e70e18(&local_138,&DAT_01bb6d43,iVar5);
  FUN_00e70510(&local_148);
  FUN_00e70e18(&local_148,&DAT_01bb6d43,iVar6);
  FUN_00e70510(&local_158);
  FUN_00e70e18(&local_158,&DAT_01bb6d43,iVar7);
  thunk_FUN_00e7051c(&local_98,&local_108);
  thunk_FUN_00e7051c(&local_88,&local_138);
  local_78 = 1;
  local_c0 = &local_98;
  FUN_009c7f18(&local_f8,&local_c0);
  thunk_FUN_00e7051c(&local_c0,&local_118);
  thunk_FUN_00e7051c(&local_b0,&local_148);
  local_a0 = 1;
  local_e8 = &local_c0;
  FUN_009c7f18(&local_f8,&local_e8);
  thunk_FUN_00e7051c(&local_e8,&local_128);
  thunk_FUN_00e7051c(&local_d8,&local_158);
  local_c8 = 1;
  local_168 = &local_e8;
  FUN_009c7f18(&local_f8,&local_168);
  fVar12 = (float)(iVar5 + iVar6 + iVar7 + 1000);
  if (fVar12 <= 0.0) {
    fVar12 = 0.0;
  }
  FUN_00e70510(&local_168);
  FUN_00e70e18(&local_168,&DAT_01bb6d43,(int)fVar12);
  uVar3 = FUN_00e6ce7c("REWARD_SCREEN_TUTORIAL1",0);
  local_178 = 0;
  local_170 = (undefined8 *)0x0;
  FUN_009c8760(&local_178,local_f8 & 0xffffffff);
  if ((int)local_f8 != 0) {
    lVar11 = (local_f8 & 0xffffffff) << 3;
    puVar8 = local_f0;
    puVar10 = local_170;
    do {
      lVar11 = lVar11 + -8;
      *puVar10 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (lVar11 != 0);
  }
  local_178 = CONCAT44(local_178._4_4_,(int)local_f8);
  uVar4 = FUN_00e6ce7c("REWARD_SCREEN_SCORE",0);
  FUN_00a4eed4(param_2,uVar9,uVar3,&local_178,uVar4,&local_168);
  if (local_170 != (undefined8 *)0x0) {
    operator_delete__(local_170);
    local_178 = 0;
    local_170 = (undefined8 *)0x0;
  }
  (**(code **)(*param_2 + 0x138))(0x3e4ccccd,param_2,1,4,1);
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
    local_168 = (undefined8 ***)0x0;
    local_160 = (void *)0x0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    local_d8 = 0;
    local_d0 = (void *)0x0;
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = (undefined8 **)0x0;
    local_e0 = (void *)0x0;
  }
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  if (local_b8 != (void *)0x0) {
    operator_delete__(local_b8);
    local_c0 = (undefined8 *)0x0;
    local_b8 = (void *)0x0;
  }
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  if (local_90 != (void *)0x0) {
    operator_delete__(local_90);
    local_98 = 0;
    local_90 = (void *)0x0;
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
    local_158 = 0;
    local_150 = (void *)0x0;
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
    local_148 = 0;
    local_140 = (void *)0x0;
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
    local_138 = 0;
    local_130 = (void *)0x0;
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
    local_128 = 0;
    local_120 = (void *)0x0;
  }
  if (local_110 != (void *)0x0) {
    operator_delete__(local_110);
    local_118 = 0;
    local_110 = (void *)0x0;
  }
  if (local_100 != (void *)0x0) {
    operator_delete__(local_100);
    local_108 = 0;
    local_100 = (void *)0x0;
  }
  if (local_f0 != (undefined8 *)0x0) {
    operator_delete__(local_f0);
    local_f8 = 0;
    local_f0 = (undefined8 *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

