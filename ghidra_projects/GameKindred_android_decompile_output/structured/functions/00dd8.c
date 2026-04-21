// functions/00dd8 — 11 functions
#include "libGameKindred.h"




void FUN_00dd80bc(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00d50cc8();
  *param_2 = uVar1;
  return;
}




void FUN_00dd80e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [96];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_a8);
  uVar2 = FUN_00cfa444(auStack_a8);
  FUN_00cf2fa4(uVar2,PTR_s_Buff_Ozo_Rolling_02bf0d10,0x400);
  FUN_00cfa6cc(auStack_a8);
  uVar2 = FUN_00cfb05c(auStack_a8);
  FUN_00cf7b3c(uVar2,1);
  uVar2 = FUN_00cfa9e4(auStack_a8);
  FUN_00cf3048(uVar2,"Ability01_Third",0,1,0,"AttackToIdle");
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf3428(0x3ecccccd,uVar2,"Effect_Ozo_A_3_Ring",1,"Bone_Ring",0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09b24(*(undefined4 *)(lVar3 + 0x290));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Ozo_Ability_A_Attack_3",0,0,0xffffffff,0,1);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  uVar2 = FUN_00cfaa74(auStack_a8);
  FUN_00cf32cc(0,uVar2,"Effect_Ozo_A_3",0,0,1,0,0);
  uVar2 = FUN_00cfab94(auStack_a8);
  lVar3 = FUN_00d09310();
  uVar5 = FUN_00d09b24(*(undefined4 *)(lVar3 + 0x290));
  FUN_00cf4164(0x3f800000,uVar5,uVar2,"Sound_Ozo_Ability_A_Impact_3",0,0,0xffffffff,0,1);
  FUN_00d4d9e8(auStack_98);
  FUN_00d4dabc(auStack_98,0x40000);
  FUN_00d4daf4(auStack_98,0,1,0,0);
  FUN_00cf99dc(auStack_a8);
  plVar4 = (long *)FUN_00cfa09c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"ThirdHitDamage_Primary",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00cf9eec(auStack_a8);
  uVar2 = FUN_00cfaf84(auStack_a8);
  uVar2 = FUN_00cf5460(0,uVar2,auStack_98,0,1,1,0);
  FUN_00cf55c8(uVar2,FUN_00dd80bc);
  plVar4 = (long *)FUN_00cfa09c(auStack_a8);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x50))();
  plVar4 = (long *)(**(code **)(*plVar4 + 0x38))(plVar4,"ThirdHitDamage",0);
  (**(code **)(*plVar4 + 0x70))(plVar4,1);
  FUN_00cf99dc(auStack_a8);
  uVar2 = FUN_00cf9cf4(auStack_a8);
  FUN_00cf2e48(uVar2,FUN_00dd76d0);
  FUN_00cf9eec(auStack_a8);
  FUN_00cf98bc(auStack_a8);
  uVar2 = FUN_00cf9d84(auStack_a8);
  FUN_00cf49b0(uVar2,PTR_s_Buff_Ozo_A3_Available_02bf0cb8);
  FUN_00cf9eec(auStack_a8);
  uVar2 = FUN_00cfa294(auStack_a8);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar2,0);
  FUN_00cfacb4(auStack_a8);
  FUN_00cf50b0(0x3f000000);
  lVar3 = FUN_00cfa6cc(auStack_a8);
  *(undefined1 *)(lVar3 + 0x10) = 0;
  FUN_00cfb5c4(auStack_a8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd8418(void)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  
  lVar2 = FUN_00d5048c();
  plVar3 = (long *)(lVar2 + 0x18);
  do {
    lVar2 = *plVar3;
    plVar3 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_0314f724);
  lVar2 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_031a96b0) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_00d6249c(lVar2);
  if (iVar1 != 0) {
    return;
  }
  fVar4 = (float)FUN_00d62490(lVar2);
  if (0.1 <= fVar4) {
    return;
  }
  FUN_019888f4(lVar2);
  return;
}




void FUN_00dd84b8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *__s1;
  undefined4 uVar12;
  uint uVar13;
  float fVar14;
  long local_138;
  undefined1 auStack_130 [88];
  undefined1 auStack_d8 [112];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    lVar9 = FUN_00d5048c(param_1);
    lVar10 = *(long *)(lVar9 + 0x18);
    while ((lVar10 != 0 && (*(int *)(*(long *)(lVar10 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar10 = *(long *)(lVar10 + 0x20);
    }
    uVar8 = FUN_00d6bbac(lVar10,DAT_031ba91c,0);
    if ((uVar8 & 1) != 0) {
      FUN_00d4e934(auStack_d8,DAT_031ba920);
      FUN_00d4e980(auStack_d8,*(undefined4 *)(lVar9 + 0x260));
      FUN_00d4daf4(auStack_d8,1,1,0,lVar9);
      iVar6 = FUN_00d9e840(auStack_d8,&local_138,1,0);
      lVar10 = local_138;
      if (((iVar6 == 1) && (local_138 != 0)) && (lVar11 = FUN_00d51778(param_1), lVar10 != lVar11))
      {
        cVar4 = FUN_00d55870(local_138);
        cVar5 = FUN_00d55870(lVar9);
        if (cVar4 == cVar5) {
          uVar8 = FUN_00ceab48();
          uVar13 = 0x10000;
          lVar10 = lVar9;
          if ((uVar8 & 1) == 0) {
LAB_00dd8710:
            do {
              do {
                lVar11 = lVar10;
                if ((lVar11 != lVar9) &&
                   (lVar10 = FUN_019865b4(*(undefined8 *)(lVar11 + 8),0x35850600), lVar10 != 0)) {
                  (**(code **)(lVar10 + 8))(lVar11,0xffffffff);
                }
                if (((uVar13 & 0xffff) < uVar13 >> 0x10) && (*(long *)(lVar11 + 0x18) != 0)) {
                  uVar13 = uVar13 & 0xffff0000 | uVar13 + 1 & 0xffff;
                  lVar10 = *(long *)(lVar11 + 0x18);
                  goto LAB_00dd8710;
                }
                if ((uVar13 & 0xffff) == 0) goto LAB_00dd876c;
                lVar10 = *(long *)(lVar11 + 0x20);
              } while (*(long *)(lVar11 + 0x20) != 0);
              lVar11 = *(long *)(lVar11 + 0x10);
              if ((lVar11 == 0) || (uVar1 = uVar13 - 1 & 0xffff, uVar1 == 0)) goto LAB_00dd876c;
              uVar13 = uVar1 | uVar13 & 0xffff0000;
              while (lVar10 = *(long *)(lVar11 + 0x20), *(long *)(lVar11 + 0x20) == 0) {
                if ((uVar13 - 1 & 0xffff) == 0) goto LAB_00dd876c;
                lVar11 = *(long *)(lVar11 + 0x10);
                uVar13 = uVar13 & 0xffff0000 | uVar13 - 1 & 0xffff;
                if (lVar11 == 0) goto LAB_00dd876c;
              }
            } while( true );
          }
LAB_00dd8670:
          do {
            do {
              lVar11 = lVar10;
              if ((lVar11 != lVar9) &&
                 (lVar10 = FUN_019865b4(*(undefined8 *)(lVar11 + 8),0x8a2209e7), lVar10 != 0)) {
                (**(code **)(lVar10 + 8))(lVar11,0xffffffff);
              }
              if (((uVar13 & 0xffff) < uVar13 >> 0x10) && (*(long *)(lVar11 + 0x18) != 0)) {
                uVar13 = uVar13 & 0xffff0000 | uVar13 + 1 & 0xffff;
                lVar10 = *(long *)(lVar11 + 0x18);
                goto LAB_00dd8670;
              }
              if ((uVar13 & 0xffff) == 0) goto LAB_00dd876c;
              lVar10 = *(long *)(lVar11 + 0x20);
            } while (*(long *)(lVar11 + 0x20) != 0);
            lVar11 = *(long *)(lVar11 + 0x10);
            if ((lVar11 == 0) || (uVar1 = uVar13 - 1 & 0xffff, uVar1 == 0)) break;
            uVar13 = uVar1 | uVar13 & 0xffff0000;
            while (lVar10 = *(long *)(lVar11 + 0x20), *(long *)(lVar11 + 0x20) == 0) {
              if ((uVar13 - 1 & 0xffff) == 0) goto LAB_00dd876c;
              lVar11 = *(long *)(lVar11 + 0x10);
              uVar13 = uVar13 & 0xffff0000 | uVar13 - 1 & 0xffff;
              if (lVar11 == 0) goto LAB_00dd876c;
            }
          } while( true );
        }
LAB_00dd876c:
        __s1 = (char *)FUN_00d50460(param_1);
        iVar6 = strcmp(__s1,PTR_s_Ability__Ozo__B_02bef248);
        uVar12 = 5;
        if (iVar6 != 0) {
          uVar12 = 6;
        }
        FUN_008ff6ec(lVar9,uVar12,local_138);
        fVar14 = (float)FUN_00d59f54(lVar9,3,2,0x19,0);
        puVar3 = PTR_s_Buff_Ozo_PriorBounces_02bf0cf0;
        uVar12 = *(undefined4 *)(lVar9 + 0x260);
        uVar7 = FUN_00ceb350();
        FUN_00cfe864(fVar14 + -0.01 + 1.0,0,0,auStack_130,uVar12,uVar12,puVar3,uVar7,1,0,0);
        FUN_00ce20fc(auStack_130);
        goto LAB_00dd85f4;
      }
    }
    FUN_008ff6e4(lVar9,7);
  }
LAB_00dd85f4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00dd8818(undefined8 param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_1,3,2,0x19,0);
  return fVar1 + -0.01;
}




void FUN_00dd8848(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    uVar2 = FUN_00d5048c(param_1);
    FUN_008ff6e4(uVar2,7);
    return;
  }
  return;
}




void FUN_00dd8884(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined4 local_e4;
  long local_e0;
  undefined4 local_d4;
  undefined1 auStack_d0 [40];
  undefined1 auStack_a8 [120];
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_00d5048c(param_1);
    lVar4 = *(long *)(lVar3 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    uVar2 = FUN_00d6bbac(lVar4,DAT_031ba91c,&local_d4);
    if ((uVar2 & 1) != 0) {
      FUN_00d009d0(auStack_a8,*(undefined4 *)(lVar3 + 0x260),local_d4);
      FUN_00ce20fc(auStack_a8);
    }
    FUN_00d4e934(auStack_a8,DAT_031ba920);
    FUN_00d4e980(auStack_a8,*(undefined4 *)(lVar3 + 0x260));
    local_e0 = 0;
    FUN_00d9e840(auStack_a8,&local_e0,1,0);
    if (local_e0 != 0) {
      lVar4 = *(long *)(local_e0 + 0x18);
      while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
        lVar4 = *(long *)(lVar4 + 0x20);
      }
      uVar2 = FUN_00d6bbac(lVar4,DAT_031ba920,&local_e4);
      if ((uVar2 & 1) != 0) {
        FUN_00d009d0(auStack_d0,*(undefined4 *)(local_e0 + 0x260),local_e4);
        FUN_00ce20fc(auStack_d0);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00dd89e0(undefined8 param_1,long param_2,float *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined1 *param_6)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  
  lVar1 = FUN_00d5048c();
  uVar2 = FUN_00d5048c(param_1);
  fVar4 = (float)FUN_00d59f54(uVar2,3,6,0x19,0);
  *param_3 = fVar4;
  uVar3 = FUN_00d44008(*(undefined4 *)(lVar1 + 0x260),PTR_s_Buff_Ozo_Talent_SecondWind_02bf1fd0);
  if ((uVar3 & 1) != 0) {
    fVar4 = (float)FUN_00d5a3d0(lVar1,DAT_0320e9f0,0,9);
    *param_3 = fVar4 * *param_3;
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    uVar2 = FUN_00d5048c(param_1);
    fVar4 = (float)FUN_00d59f54(uVar2,3,9,0x19,0);
    *param_3 = fVar4 * *param_3;
  }
  *param_4 = 2;
  *param_5 = 1;
  *param_6 = 0;
  return;
}




void FUN_00dd8ad4(undefined8 param_1,undefined8 param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_00d59f54(param_2,3,2,0x19,0);
  *param_3 = fVar1 + -0.01;
  return;
}




bool FUN_00dd8b18(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  char cVar2;
  
  FUN_00d5048c();
  cVar1 = FUN_00d55870();
  cVar2 = FUN_00d55870(param_2);
  return cVar1 != cVar2;
}




void FUN_00dd8b50(undefined8 param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined1 auStack_a8 [96];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00cfb05c();
  FUN_00cf7b3c(uVar5,1);
  uVar5 = FUN_00cfaa74(param_1);
  FUN_00cf3428(0,uVar5,"Effect_Ozo_B_3_Trail",1,"Bone_Ring",FUN_00dd8ad4,1,0,0);
  FUN_00cf98bc(param_1);
  uVar5 = FUN_00cf9ab4(param_1);
  FUN_00cf456c(uVar5,PTR_s_Buff_Ozo_AcrobounceFortifiedHeal_02bf0d08,FUN_00dd90a4,1,0);
  FUN_00cf9eec(param_1);
  if (param_2 == 0) {
    uVar5 = FUN_00cfaa74(param_1);
    FUN_00cf32cc(0,uVar5,"Effect_Ozo_B_1_Jump",0,0,1,0,0);
  }
  uVar5 = FUN_00cfab94(param_1);
  lVar6 = FUN_00d09310();
  if (param_2 == 0) {
    uVar3 = FUN_00d09b24(*(undefined4 *)(lVar6 + 0x294));
    FUN_00cf4164(0x3f800000,uVar3,uVar5,"Sound_Ozo_Ability_B_Leap",0,0,0xffffffff,0,1);
  }
  else {
    uVar3 = FUN_00d09b24(*(undefined4 *)(lVar6 + 0x29c));
    FUN_00cf4164(0x3f800000,uVar3,uVar5,"Sound_Ozo_Ability_B_Bounce_1",0,0,0xffffffff,0,1);
    FUN_00cf41bc(uVar5,"Sound_Ozo_Ability_B_Bounce_2");
    FUN_00cf41bc(uVar5,"Sound_Ozo_Ability_B_Bounce_3");
  }
  FUN_00d4d9e8(auStack_a8);
  FUN_00d4dabc(auStack_a8,0x40000);
  FUN_00d4daf4(auStack_a8,0,1,0,0);
  if (param_2 == 0) {
    FUN_00cfa6cc(param_1);
  }
  else {
    uVar5 = FUN_00cf9cf4();
    FUN_00cf2e48(uVar5,FUN_00dd8418);
    FUN_00cf98bc(param_1);
    uVar5 = FUN_00cf9d84(param_1);
    FUN_00cf49b0(uVar5,PTR_s_Buff_Ozo_BounceQueued_02bf0cd8);
    FUN_00cf9eec(param_1);
    FUN_00cf99dc(param_1);
    uVar5 = FUN_00cf9d84(param_1);
    FUN_00cf49b0(uVar5,PTR_s_Buff_Ozo_NextBounceTarget_02bf0ce0);
    FUN_00cf9eec(param_1);
    uVar5 = FUN_00cfaa74(param_1);
    FUN_00cf32cc(0,uVar5,"Effect_Ozo_B_Bounced",0,0,1,0,0);
    plVar7 = (long *)FUN_00cfa954(param_1);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x50))();
    local_b8[0] = 0x3f800000;
    local_b0 = 1;
    (**(code **)(*plVar7 + 0x10))(plVar7,6,local_b8);
    uVar5 = FUN_00cfab94(param_1);
    FUN_00cf4164(0x3f800000,0x3f000000,uVar5,
                 "build://Sounds/ActorFx.assetbundle/sfx__gold_coins.mp3",1,0,0xffffffff,0,1);
    uVar5 = FUN_00cfaf84(param_1);
    FUN_00cf5504(uVar5,auStack_a8,0,FUN_00dd90b8,0,0,0);
    uVar5 = FUN_00cfa00c(param_1);
    FUN_00cf6bb0(uVar5,FUN_00dd89e0);
    uVar5 = FUN_00cf9ab4(param_1);
    FUN_00cf456c(uVar5,PTR_s_Buff_Ozo_BounceSlow_02bf0cf8,FUN_00dd90cc,1,0);
    FUN_00cf9eec(param_1);
    FUN_00cfa6cc(param_1);
    if (param_2 == 2) {
      FUN_00cf99dc(param_1);
      uVar5 = FUN_00cf9ab4(param_1);
      bVar4 = true;
      FUN_00cf456c(uVar5,PTR_s_Buff_Ozo_FinalBounceTarget_02bf0ce8,FUN_00dd8818,1,0);
      FUN_00cf9eec(param_1);
      goto LAB_00dd8f58;
    }
  }
  FUN_00cf98bc(param_1);
  uVar5 = FUN_00cf9ab4(param_1);
  FUN_00cf456c(uVar5,PTR_s_Buff_Ozo_BounceAvailable_02bf0cd0,FUN_00dd8818,1,0);
  FUN_00cf9eec(param_1);
  FUN_00cf99dc(param_1);
  uVar5 = FUN_00cf9ab4(param_1);
  FUN_00cf456c(uVar5,PTR_s_Buff_Ozo_BounceTarget_02bf0cc8,FUN_00dd8818,1,0);
  FUN_00cf9eec(param_1);
  bVar4 = false;
  if (param_2 == 0) {
    FUN_00cf99dc(param_1);
    uVar5 = FUN_00cfab4c(param_1);
    FUN_00cf3a9c(0,uVar5,"Effect_Ozo_B_BounceTarget_1",1);
    FUN_00cf9eec(param_1);
    bVar4 = false;
  }
LAB_00dd8f58:
  uVar5 = FUN_00cfa9e4(param_1);
  FUN_00cf3048(uVar5,"Ability02",0,1,0,0);
  uVar5 = FUN_00cf9cac(param_1);
  FUN_0097c734(uVar5,FUN_00dd8818);
  uVar5 = FUN_00cfa294(param_1);
  FUN_00cf7580(uVar5,FUN_00dd8818);
  FUN_00cf7578(uVar5,0);
  FUN_00cfb56c(param_1);
  if (bVar4) {
    lVar6 = FUN_00cf9f7c(param_1);
    lVar8 = FUN_00cefb20(lVar6 + 0x10);
    lVar6 = lVar6 + 0xb0;
    *(undefined **)(lVar8 + 8) = PTR_s_Buff_Ozo_Talent_SecondWind_02bf1fd0;
    FUN_00cf98bc(lVar6);
    plVar7 = (long *)FUN_00cfa8c4(lVar6);
    plVar7 = (long *)(**(code **)(*plVar7 + 0x50))(plVar7,PTR_s_Ability__Ozo__B_02bef248);
    local_b8[0] = 0;
    local_b0 = 1;
    (**(code **)(*plVar7 + 0x20))(plVar7,local_b8);
    FUN_00cf9eec(lVar6);
  }
  uVar5 = FUN_00cf9cf4(param_1);
  pcVar1 = FUN_00dd8848;
  if (!bVar4) {
    pcVar1 = FUN_00dd84b8;
  }
  FUN_00cf2e48(uVar5,pcVar1);
  uVar5 = FUN_00cf9cf4(param_1);
  FUN_00cf2e48(uVar5,FUN_00dd8884);
  FUN_00cf2e50();
  lVar6 = FUN_00cfa6cc(param_1);
  *(undefined1 *)(lVar6 + 0x10) = 0;
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

