// functions/00e1d — 15 functions
#include "libGameKindred.h"




void FUN_00e1d224(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,5,9,1);
  return;
}




void FUN_00e1d238(undefined8 param_1)

{
  FUN_00d59f54(param_1,1,4,0x19,0);
  return;
}




void FUN_00e1d24c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined *puVar4;
  uint uVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined1 auStack_168 [16];
  undefined8 local_158;
  undefined1 auStack_150 [88];
  undefined1 auStack_f8 [96];
  long local_98 [5];
  
  lVar3 = tpidr_el0;
  local_98[3] = *(long *)(lVar3 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    FUN_00d69224(param_1,&local_158);
    FUN_00d67b84(local_158);
    lVar8 = FUN_00d9e390();
    uVar9 = FUN_00d66d28(local_158);
    FUN_00d55794(uVar9,auStack_168,0);
    FUN_00d4d9e8(auStack_f8);
    FUN_00d4dabc(auStack_f8,1);
    FUN_00d4daf4(auStack_f8,1,0,1,lVar8);
    FUN_00d59f54(lVar8,0,6,0x19,0);
    FUN_00d4db48(auStack_f8,auStack_168);
    uVar5 = FUN_00d9e840(auStack_f8,local_98,3,0);
    if (uVar5 != 0) {
      uVar7 = (ulong)uVar5;
      plVar12 = local_98;
      do {
        lVar11 = *plVar12;
        if (lVar11 != 0) {
          uVar9 = FUN_00d9ea08(lVar11);
          uVar10 = FUN_00d6bbac(uVar9,DAT_031b969c,0);
          puVar4 = PTR_s_Buff_Fortress_Rally_02bf0630;
          if ((uVar10 & 1) == 0) {
            uVar1 = *(undefined4 *)(lVar8 + 0x260);
            uVar2 = *(undefined4 *)(lVar11 + 0x260);
            uVar6 = FUN_00ceb350();
            lVar11 = FUN_00d66d28(local_158);
            FUN_00cfe864(0xbf800000,0,0,auStack_150,uVar1,uVar2,puVar4,uVar6,1,
                         *(undefined4 *)(lVar11 + 0x260),0);
            FUN_00ce20fc(auStack_150);
          }
        }
        uVar7 = uVar7 - 1;
        plVar12 = plVar12 + 1;
      } while (uVar7 != 0);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_98[3]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1d3f4(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_58 = 0x4000000040000000;
  local_50 = 0x40000000;
  uVar2 = FUN_00ef00a0(0,param_2,&local_48,&local_58);
  if ((uVar2 & 1) == 0) {
    FUN_00d55794(param_1,param_2,0);
  }
  else {
    *(undefined4 *)(param_2 + 1) = local_40;
    *param_2 = local_48;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1d48c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_38,&local_30);
  lVar2 = local_30;
  uVar3 = FUN_00d66d28(local_38);
  uVar4 = FUN_00daa58c(lVar2,uVar3);
  if ((((uVar4 & 1) != 0) && (*(long *)(local_30 + 0x28) != 0)) &&
     ((*(uint *)(*(long *)(local_30 + 0x28) + 0x2f4) & 0x20000001) != 0)) {
    FUN_00d67b84(local_38);
    uVar3 = FUN_00d9e390();
    fVar5 = (float)FUN_00d59f54(uVar3,0,5,0x19,0);
    *(float *)(local_30 + 0x38) = fVar5 + *(float *)(local_30 + 0x38);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1d540(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar5 = FUN_00ceab48();
  if ((uVar5 & 1) != 0) {
    FUN_00d67b04(0x3dcccccd,param_1);
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBuffIntervalName_02bed520;
    uVar4 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1d24c;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
    lVar6 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onBeforeApplyDamageName_02bed5f8;
    uVar4 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar6 + 0x38 + (ulong)*(uint *)(lVar6 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar6 + 0xf8);
    *(code **)(lVar6 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1d48c;
    *(uint *)(lVar6 + 0xf8) = uVar1 + 1;
  }
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar6 + 8);
  FUN_00d3e534();
  uVar7 = FUN_00d29a68();
  FUN_00d42654(auStack_50,uVar7);
  lVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar6 + 0x30);
  FUN_00d3e534();
  uVar7 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar7);
  uVar7 = FUN_00d47dc4(uVar7,"OverHead");
  uVar7 = FUN_00da2040(uVar7,"Effect_Fortress_Prey");
  FUN_00da20dc(uVar7,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1d6d4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float local_58 [4];
  float local_48 [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d6a078(param_1);
    lVar3 = FUN_00d9e390();
    if (lVar3 != 0) {
      uVar4 = FUN_00d9ea08(lVar3);
      uVar2 = FUN_00d6bbac(uVar4,DAT_031b96a0,0);
      if ((uVar2 & 1) != 0) {
        uVar4 = FUN_00d66d28(param_1);
        FUN_00d55794(uVar4,local_48,0);
        FUN_00d55794(lVar3,local_58,0);
        FUN_00d67b84(param_1);
        uVar4 = FUN_00d9e390();
        fVar5 = (float)local_48._4_8_ - (float)local_58._4_8_;
        fVar6 = SUB84(local_48._4_8_,4) - SUB84(local_58._4_8_,4);
        fVar5 = (local_48[0] - local_58[0]) * (local_48[0] - local_58[0]) + fVar5 * fVar5 +
                fVar6 * fVar6;
        fVar6 = SQRT(fVar5);
        if (NAN(fVar6)) {
          fVar6 = sqrtf(fVar5);
        }
        fVar5 = (float)FUN_00d59f54(uVar4,0,6,0x19,0);
        if (fVar6 <= fVar5) goto LAB_00e1d7d0;
      }
    }
    FUN_00d436dc(param_1);
  }
LAB_00e1d7d0:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e1d7fc(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00d67b84();
  uVar2 = FUN_00d9e390();
  lVar3 = FUN_00d65010(param_1);
  plVar4 = (long *)FUN_00d2ccfc(lVar3 + 0x10);
  (**(code **)(*plVar4 + 0x38))();
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x28);
  FUN_00d3e534();
  uVar5 = FUN_00d2a200();
  FUN_00d42654(auStack_50,uVar5);
  FUN_00d3e5d0(uVar5,FUN_00e1d6d4);
  lVar3 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar3 + 0x30);
  FUN_00d3e534();
  uVar5 = FUN_00d294ac();
  FUN_00d42654(auStack_50,uVar5);
  uVar5 = FUN_00d47d9c(uVar5);
  FUN_00da2040(uVar5,"Effect_Fortress_Rally");
  FUN_00d6a078(param_1);
  lVar3 = FUN_00d9e390();
  if (lVar3 != 0) {
    FUN_00d3e534();
    uVar5 = FUN_00d29584();
    FUN_00d42654(auStack_50,uVar5);
    FUN_00d59f54(uVar2,0,3,0x19,0);
    uVar2 = FUN_00d472ec(uVar5,1);
    FUN_00d472f8(uVar2,lVar3,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1d948(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_48 [2];
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d426b0();
  local_48[0] = FUN_00d59f54(uVar2,1,6,0x19,0);
  local_40 = 1;
  FUN_00d42c70(param_1,local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1d9c4(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00d69224(param_1,&local_60);
  lVar4 = FUN_00d66d28(local_60);
  iVar3 = FUN_00d6a078(local_60);
  if ((iVar3 != -1) && (lVar5 = FUN_00d9e390(), lVar5 != 0)) {
    uVar8 = 0x10000;
    lVar6 = lVar4;
LAB_00e1da78:
    do {
      do {
        lVar7 = lVar6;
        if ((lVar7 != lVar4) &&
           (lVar6 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x163403b4), lVar6 != 0)) {
          (**(code **)(lVar6 + 8))(lVar7,lVar5);
        }
        if (((uVar8 & 0xffff) < uVar8 >> 0x10) && (lVar6 = *(long *)(lVar7 + 0x18), lVar6 != 0)) {
          uVar8 = uVar8 & 0xffff0000 | uVar8 + 1 & 0xffff;
          goto LAB_00e1da78;
        }
        if ((uVar8 & 0xffff) == 0) goto LAB_00e1dad4;
        lVar6 = *(long *)(lVar7 + 0x20);
      } while (*(long *)(lVar7 + 0x20) != 0);
      lVar7 = *(long *)(lVar7 + 0x10);
      if ((lVar7 == 0) || (uVar1 = uVar8 - 1 & 0xffff, uVar1 == 0)) break;
      uVar8 = uVar1 | uVar8 & 0xffff0000;
      while (lVar6 = *(long *)(lVar7 + 0x20), lVar6 == 0) {
        if ((uVar8 - 1 & 0xffff) == 0) goto LAB_00e1dad4;
        lVar7 = *(long *)(lVar7 + 0x10);
        uVar8 = uVar8 & 0xffff0000 | uVar8 - 1 & 0xffff;
        if (lVar7 == 0) goto LAB_00e1dad4;
      }
    } while( true );
  }
LAB_00e1dad4:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e1db04(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d66d28();
  FUN_00d5cf60();
  uVar5 = FUN_00d9e390();
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d67c60(param_1);
    puVar3 = PTR_s_onApplyName_02bed4f8;
    uVar4 = FUN_00e6a474(PTR_s_onApplyName_02bed4f8);
    uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
    *(undefined4 *)(lVar7 + 0x38 + (ulong)*(uint *)(lVar7 + 0xf8) * 4) = uVar4;
    uVar1 = *(uint *)(lVar7 + 0xf8);
    *(code **)(lVar7 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1d9c4;
    *(uint *)(lVar7 + 0xf8) = uVar1 + 1;
  }
  FUN_00d59f54(uVar5,2,2,9,1);
  FUN_00d67d04(param_1);
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar7 + 0x30);
  FUN_00d3e534();
  uVar5 = FUN_00d294ac();
  FUN_00d42654(auStack_60,uVar5);
  uVar5 = FUN_00d47dec(uVar5,"Bone_Back");
  uVar5 = FUN_00da2040(uVar5,"Effect_Fortress_MiniWolf_Aura_E");
  FUN_00da2048(uVar5,"Effect_Fortress_MiniWolf_Aura_A");
  lVar7 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_60,lVar7 + 0x18);
  FUN_00d3e534();
  uVar5 = FUN_00d29cd4();
  FUN_00d42654(auStack_60,uVar5);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1dc68(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d69294(param_1,&local_30,&local_38);
  uVar2 = FUN_00d66d28(local_30);
  uVar3 = FUN_00daa578(local_38,uVar2);
  if ((uVar3 & 1) != 0) {
    *(undefined4 *)(local_38 + 0x5c) = 0;
    *(undefined4 *)(local_38 + 0x38) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1dcdc(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  long local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    FUN_00d69294(param_1,&local_40,&local_48);
    lVar4 = FUN_00d66d28(local_40);
    FUN_00d5cf60();
    uVar5 = FUN_00d9e390();
    uVar3 = FUN_00daa58c(local_48,lVar4);
    if (((uVar3 & 1) != 0) && (*(long *)(local_48 + 0x28) != 0)) {
      uVar1 = *(uint *)(*(long *)(local_48 + 0x28) + 0x2f4);
      if ((uVar1 >> 0xd & 1) == 0) {
        if (((uVar1 >> 0x16 & 1) == 0) || ((*(byte *)(local_48 + 0xc) >> 2 & 1) == 0))
        goto LAB_00e1de4c;
        fVar6 = (float)FUN_00d59f54(uVar5,2,6,9,1);
        lVar4 = *(long *)(lVar4 + 0x40);
        fVar8 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
                (*(float *)(lVar4 + 0x38) +
                *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
        if (DAT_031b9780 <= fVar8) {
          fVar8 = DAT_031b9780;
        }
        fVar7 = DAT_031b96c0;
        if (DAT_031b96c0 <= fVar8) {
          fVar7 = fVar8;
        }
        fVar8 = fVar7 / fVar6 + 1.0;
      }
      else {
        lVar4 = *(long *)(lVar4 + 0x40);
        fVar8 = (*(float *)(lVar4 + 0x1a0) + 1.0) *
                (*(float *)(lVar4 + 0x38) +
                *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0));
        if (DAT_031b9780 <= fVar8) {
          fVar8 = DAT_031b9780;
        }
        fVar6 = DAT_031b96c0;
        if (DAT_031b96c0 <= fVar8) {
          fVar6 = fVar8;
        }
        fVar8 = (float)FUN_00d59f54(uVar5,2,9,9,1);
        fVar8 = fVar8 * fVar6;
      }
      *(float *)(local_48 + 0x54) = fVar8;
    }
  }
LAB_00e1de4c:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e1de78(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  lVar4 = FUN_00d67c60();
  puVar2 = PTR_s_onBeforeApplyDamageName_02bed5f8;
  uVar3 = FUN_00e6a474(PTR_s_onBeforeApplyDamageName_02bed5f8);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1dcdc;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  lVar4 = FUN_00d67c60(param_1);
  puVar2 = PTR_s_onAfterApplyDamageName_02bed608;
  uVar3 = FUN_00e6a474(PTR_s_onAfterApplyDamageName_02bed608);
  uVar3 = FUN_0091ed5c(puVar2,uVar3,0x12345678);
  *(undefined4 *)(lVar4 + 0x38 + (ulong)*(uint *)(lVar4 + 0xf8) * 4) = uVar3;
  uVar1 = *(uint *)(lVar4 + 0xf8);
  *(code **)(lVar4 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e1dc68;
  *(uint *)(lVar4 + 0xf8) = uVar1 + 1;
  return;
}




void FUN_00e1df50(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_90 [24];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d66d28();
  FUN_00d5cf60();
  lVar4 = FUN_00d9e390();
  uVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_90,uVar5);
  lVar6 = *(long *)(lVar4 + 0x40);
  fVar7 = *(float *)(lVar6 + 0x38);
  fVar8 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
          (fVar7 + *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
  if (DAT_031b9780 <= fVar8) {
    fVar8 = DAT_031b9780;
  }
  fVar9 = DAT_031b96c0;
  if (DAT_031b96c0 <= fVar8) {
    fVar9 = fVar8;
  }
  fVar8 = (float)FUN_00d59f54(lVar4,2,7,9,1);
  lVar6 = *(long *)(lVar4 + 0x40);
  fVar8 = fVar8 * (fVar9 - fVar7);
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  fVar9 = *(float *)(lVar6 + 0x54);
  fVar7 = (*(float *)(lVar6 + 0x1bc) + 1.0) *
          (fVar9 + *(float *)(lVar6 + 0x108) * (*(float *)(lVar6 + 0x270) + 1.0));
  if (DAT_031b979c <= fVar7) {
    fVar7 = DAT_031b979c;
  }
  fVar10 = DAT_031b96dc;
  if (DAT_031b96dc <= fVar7) {
    fVar10 = fVar7;
  }
  fVar7 = (float)FUN_00d59f54(lVar4,2,7,9,1);
  lVar6 = *(long *)(lVar4 + 0x40);
  fVar7 = fVar7 * (fVar10 - fVar9);
  if (fVar7 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar10 = *(float *)(lVar6 + 0x58);
  fVar9 = (*(float *)(lVar6 + 0x1c0) + 1.0) *
          (fVar10 + *(float *)(lVar6 + 0x10c) * (*(float *)(lVar6 + 0x274) + 1.0));
  if (DAT_031b97a0 <= fVar9) {
    fVar9 = DAT_031b97a0;
  }
  fVar2 = DAT_031b96e0;
  if (DAT_031b96e0 <= fVar9) {
    fVar2 = fVar9;
  }
  fVar9 = (float)FUN_00d59f54(lVar4,2,7,9,1);
  FUN_00d3e534();
  uVar5 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar5);
  FUN_00d59f54(lVar4,2,8,9,1);
  FUN_00d40cd4(uVar5,0,0,1,0);
  FUN_00d3e534();
  uVar5 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar5);
  FUN_00d40cd4(fVar8,uVar5,0,1,0,0);
  FUN_00d3e534();
  uVar5 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar5);
  FUN_00d40cd4(fVar7,uVar5,7,1,0,0);
  FUN_00d3e534();
  uVar5 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar5);
  FUN_00d40cd4(fVar9 * (fVar2 - fVar10),uVar5,8,1,0,0);
  FUN_00d3e534();
  uVar5 = FUN_00d39980();
  FUN_00d42654(auStack_90,uVar5);
  FUN_00d40cd4(0xbf800000,uVar5,0x23,1,1,0);
  FUN_00d3e534();
  uVar5 = FUN_00e0fb7c();
  FUN_00d42654(auStack_90,uVar5);
  lVar3 = *(long *)(lVar3 + 0x40);
  fVar8 = (*(float *)(lVar3 + 0x1a0) + 1.0) *
          (*(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0));
  if (DAT_031b9780 <= fVar8) {
    fVar8 = DAT_031b9780;
  }
  fVar7 = DAT_031b96c0;
  if (DAT_031b96c0 <= fVar8) {
    fVar7 = fVar8;
  }
  FUN_00d411dc(fVar7,uVar5,0,0);
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

