// functions/00e2b — 13 functions
#include "libGameKindred.h"




void FUN_00e2b074(undefined8 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00d426b0(*param_1);
  uVar2 = FUN_00d59f54(uVar1,1,5,0x19,0);
  *param_2 = uVar2;
  *param_3 = uVar2;
  return;
}




void FUN_00e2b0b8(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_48;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d69294(param_1,&local_48,&local_40);
  uVar4 = FUN_00d66d28(local_48);
  uVar5 = FUN_00daa58c(local_40,uVar4);
  if (((uVar5 & 1) != 0) && (lVar6 = *(long *)(local_40 + 0x28), lVar6 != 0)) {
    uVar1 = *(uint *)(lVar6 + 0x2f4);
    if ((uVar1 >> 10 & 1) != 0) {
      *(float *)(local_40 + 0x54) = *(float *)(local_40 + 0x54) * 0.3;
    }
    if ((((uVar1 & 1) != 0) && (*(int *)(local_40 + 8) != 2)) &&
       ((*(byte *)(local_40 + 0xc) & 1) != 0)) {
      lVar6 = *(long *)(lVar6 + 0x40);
      fVar8 = (*(float *)(lVar6 + 0x1e0) + 1.0) *
              (*(float *)(lVar6 + 0x78) +
              *(float *)(lVar6 + 300) * (*(float *)(lVar6 + 0x294) + 1.0));
      if (DAT_031ba310 <= fVar8) {
        fVar8 = DAT_031ba310;
      }
      fVar7 = DAT_031ba250;
      if (DAT_031ba250 <= fVar8) {
        fVar7 = fVar8;
      }
      if (3.0 <= fVar7) {
        fVar8 = 0.4;
      }
      else {
        cVar3 = FUN_00d55870(uVar4);
        fVar8 = *(float *)(&DAT_01be5b84 + (ulong)(cVar3 == '\0') * 4);
      }
      *(float *)(local_40 + 0x54) = (1.0 - fVar8) * *(float *)(local_40 + 0x54);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2b208(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [48];
  undefined1 auStack_170 [56];
  undefined1 auStack_138 [56];
  undefined1 auStack_100 [24];
  long alStack_e8 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  FUN_00d69224(param_1,&local_1a8);
  lVar4 = FUN_00d66d28(local_1a8);
  lVar5 = FUN_00d67c60(local_1a8);
  uVar2 = FUN_00e6a474("gold_poll_timer");
  uVar2 = FUN_0091ed5c("gold_poll_timer",uVar2,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar5 + 0x100) + 0x10))(lVar5 + 0x100,uVar2);
  if (*pfVar6 <= 0.0) {
    FUN_00d4d54c(auStack_100);
    FUN_00d4d364(auStack_100,1);
    uVar3 = FUN_00d9e840(auStack_100,alStack_e8,0x10,0);
    if (uVar3 == 0) {
      fVar9 = 0.0;
    }
    else {
      uVar7 = (ulong)uVar3;
      fVar9 = 0.0;
      plVar8 = alStack_e8;
      do {
        uVar7 = uVar7 - 1;
        fVar9 = fVar9 + *(float *)(*(long *)(*plVar8 + 0x40) + 0x324);
        plVar8 = plVar8 + 1;
      } while (uVar7 != 0);
      if (1 < uVar3) {
        fVar9 = fVar9 / (float)uVar3;
      }
    }
    lVar5 = *(long *)(lVar4 + 0x40);
    fVar9 = fVar9 * 0.3;
    fVar11 = *(float *)(lVar5 + 0x308);
    fVar10 = (*(float *)(lVar5 + 0x1a0) + 1.0) *
             (*(float *)(lVar5 + 0x38) +
             *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0));
    if (DAT_031ba2d0 <= fVar10) {
      fVar10 = DAT_031ba2d0;
    }
    fVar12 = DAT_031ba210;
    if (DAT_031ba210 <= fVar10) {
      fVar12 = fVar10;
    }
    FUN_00d041e4(fVar9,auStack_138,*(undefined4 *)(lVar4 + 0x260),0,1,1,0xffffffff);
    FUN_00ce20fc(auStack_138);
    FUN_00d041e4(fVar9 * 0.1,auStack_170,*(undefined4 *)(lVar4 + 0x260),1,1,1,0xffffffff);
    FUN_00ce20fc(auStack_170);
    if (fVar11 == fVar12) {
      FUN_00d043c0(fVar9,auStack_1a0,*(undefined4 *)(lVar4 + 0x260),0,0);
      FUN_00ce20fc(auStack_1a0);
    }
    *pfVar6 = 60.0;
  }
  else {
    *pfVar6 = *pfVar6 + -1.0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2b440(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2a504();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3e534();
  uVar2 = FUN_00d2cb84();
  FUN_00d42654(auStack_40,uVar2);
  FUN_00d3e888(0x41000000,0,0,uVar2,PTR_s_Buff_Untargetable_02beb408,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar2 = FUN_00d2a6c0();
  FUN_00d42654(auStack_40,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2b508(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  float fVar13;
  undefined1 auStack_188 [16];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [96];
  undefined1 auStack_100 [24];
  long alStack_e8 [16];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d67c60(param_1);
    puVar2 = PTR_s_onApplyDamageName_02bed600;
    uVar5 = FUN_00e6a474(PTR_s_onApplyDamageName_02bed600);
    uVar5 = FUN_0091ed5c(puVar2,uVar5,0x12345678);
    *(undefined4 *)(lVar8 + 0x38 + (ulong)*(uint *)(lVar8 + 0xf8) * 4) = uVar5;
    uVar6 = *(uint *)(lVar8 + 0xf8);
    *(code **)(lVar8 + 0x38 + (ulong)uVar6 * 8 + 0x40) = FUN_00e2b0b8;
    *(uint *)(lVar8 + 0xf8) = uVar6 + 1;
    FUN_00d66d28(param_1);
    cVar3 = FUN_00d55870();
    if (cVar3 == '\0') {
      lVar8 = FUN_00d67c60(param_1);
      puVar2 = PTR_s_onBuffIntervalName_02bed520;
      uVar5 = FUN_00e6a474(PTR_s_onBuffIntervalName_02bed520);
      uVar5 = FUN_0091ed5c(puVar2,uVar5,0x12345678);
      *(undefined4 *)(lVar8 + 0x38 + (ulong)*(uint *)(lVar8 + 0xf8) * 4) = uVar5;
      uVar6 = *(uint *)(lVar8 + 0xf8);
      *(code **)(lVar8 + 0x38 + (ulong)uVar6 * 8 + 0x40) = FUN_00e2b208;
      *(uint *)(lVar8 + 0xf8) = uVar6 + 1;
      lVar8 = FUN_00d67c60(param_1);
      uVar5 = FUN_00e6a474("gold_poll_timer");
      uVar5 = FUN_0091ed5c("gold_poll_timer",uVar5,0x12345678);
      (**(code **)(*(long *)(lVar8 + 0x100) + 8))(lVar8 + 0x100,uVar5);
      lVar8 = FUN_00d67c60(param_1);
      uVar5 = FUN_00e6a474("gold_poll_timer");
      uVar5 = FUN_0091ed5c("gold_poll_timer",uVar5,0x12345678);
      puVar9 = (undefined4 *)(**(code **)(*(long *)(lVar8 + 0x100) + 0x10))(lVar8 + 0x100,uVar5);
      *puVar9 = 0x42700000;
    }
  }
  uVar10 = FUN_00d66d28(param_1);
  uVar11 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_178,uVar11);
  FUN_00d4d54c(auStack_100);
  FUN_00d4d364(auStack_100,1);
  bVar4 = FUN_00d55870(uVar10);
  if (bVar4 != 0) {
    FUN_00d4d588(auStack_100,(bVar4 & 1) + 1);
  }
  uVar6 = FUN_00d9e840(auStack_100,alStack_e8,0x10,0);
  if (uVar6 == 0) {
    fVar13 = 0.0;
  }
  else {
    uVar7 = (ulong)uVar6;
    fVar13 = 0.0;
    plVar12 = alStack_e8;
    do {
      uVar7 = uVar7 - 1;
      fVar13 = fVar13 + *(float *)(*(long *)(*plVar12 + 0x40) + 0x324);
      plVar12 = plVar12 + 1;
    } while (uVar7 != 0);
    if (1 < uVar6) {
      fVar13 = fVar13 / (float)uVar6;
    }
  }
  fVar13 = *(float *)(&DAT_01be5b8c + (ulong)(bVar4 == 0) * 4) * fVar13;
  FUN_00d3e534();
  uVar11 = FUN_00d39980();
  FUN_00d42654(auStack_178,uVar11);
  FUN_00d40cd4(fVar13,uVar11,0,1,1,0);
  FUN_00d3e534();
  uVar11 = FUN_00d39980();
  FUN_00d42654(auStack_178,uVar11);
  FUN_00d40cd4(fVar13 * 0.1,uVar11,1,1,1,0);
  FUN_00d3e534();
  uVar11 = FUN_00e0fb7c();
  FUN_00d42654(auStack_178,uVar11);
  FUN_00d411dc(fVar13,uVar11,0,0);
  FUN_00d3e534();
  uVar11 = FUN_00d2a504();
  FUN_00d42654(auStack_178,uVar11);
  FUN_00d3e534();
  uVar11 = FUN_00d2cb84();
  FUN_00d42654(auStack_178,uVar11);
  FUN_00d3e888(0xbf800000,0,0,uVar11,PTR_s_Buff_Revealed_02bebaf8,1,0xffffffff,0,0);
  FUN_00d3e534();
  uVar11 = FUN_00d2a6c0();
  FUN_00d42654(auStack_178,uVar11);
  if (bVar4 == 0) {
    FUN_00d3e534();
    uVar10 = FUN_00d39980();
    FUN_00d42654(auStack_178,uVar10);
    FUN_00d40cd4(fVar13 * 0.12,uVar10,4,1,1,0);
  }
  else {
    uVar11 = FUN_00d66d28(param_1);
    FUN_00d55794(uVar11,auStack_188,0);
    FUN_00d4d9e8(auStack_160);
    FUN_00d4db40(auStack_160,uVar10);
    FUN_00d4daf4(auStack_160,1,0,0,0);
    FUN_00d4db48(0x43960000,auStack_160,auStack_188);
    FUN_00d4dabc(auStack_160,1);
    FUN_00d3e534();
    uVar10 = FUN_00d3940c();
    FUN_00d42654(auStack_178,uVar10);
    FUN_00d3fad8(uVar10,auStack_160,0,0);
    FUN_00d3e534();
    uVar10 = FUN_00d2cb84();
    FUN_00d42654(auStack_178,uVar10);
    FUN_00d3e888(0x41200000,0,0,uVar10,PTR_s_Buff_Ace_02beb3b8,1,0xffffffff,0,0);
    FUN_00d3e534();
    uVar10 = FUN_00d2a6c0();
    FUN_00d42654(auStack_178,uVar10);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00e2b9e0(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Shell");
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kraken_Shell_Glow");
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Shell");
                    /* WARNING: Could not recover jumptable at 0x00e2ba58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Kraken_Breath");
  return;
}




void FUN_00e2ba5c(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined1 local_88;
  undefined1 auStack_84 [76];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00d67b78();
  FUN_00d55794(uVar2,auStack_a8,0);
  FUN_00d4d9e8(auStack_98);
  uVar2 = FUN_00d67b78(param_1);
  FUN_00d4daf4(auStack_98,1,0,0,uVar2);
  FUN_00d4dabc(auStack_98,1);
  FUN_00d4dc24(auStack_98,0);
  FUN_00d4d364(auStack_98,0);
  FUN_00d4db48(0x41a00000,auStack_98,auStack_a8);
  *(undefined1 *)(param_2 + 0x10) = local_88;
  *(undefined8 *)(param_2 + 8) = local_90;
  memcpy((void *)(param_2 + 0x14),auStack_84,0x47);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2bb3c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_38 [2];
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d63f30();
  uVar3 = FUN_00d31490(lVar2 + 0x10);
  FUN_00d9ca38(uVar3,FUN_00e2ba5c);
  plVar4 = (long *)FUN_00d2cf7c(lVar2 + 0x10);
  plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,PTR_s_Buff_Ace_02beb3b8);
  local_38[0] = 0x41200000;
  local_30 = 1;
  (**(code **)(*plVar4 + 0x18))(plVar4,local_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2bbd8(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d65010();
  plVar2 = (long *)FUN_00d2945c(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x78))(plVar2,"Bone_Shell");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Goldshell");
                    /* WARNING: Could not recover jumptable at 0x00e2bc2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0xc0))(0x3f800000,0x3f000000,0);
  return;
}




void FUN_00e2bc30(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float *local_88;
  undefined4 local_80;
  int local_7c;
  undefined8 local_78;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceab48();
  if ((uVar2 & 1) != 0) {
    FUN_00d69a50(param_1,&local_78,&local_7c,&local_80,&local_88);
    if (local_7c == 2) {
      lVar3 = FUN_00d66d28(local_78);
      fVar5 = *local_88;
      fVar4 = (float)thunk_FUN_00d086f0(lVar3,1,1);
      FUN_00d041e4(fVar5 * fVar4,auStack_70,*(undefined4 *)(lVar3 + 0x260),0x2b,local_80,0,
                   0xffffffff);
      FUN_00ce20fc(auStack_70);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2bcf8(undefined8 param_1,float *param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = FUN_00ceab48();
  if ((uVar1 & 1) != 0) {
    lVar2 = FUN_00d66d28(param_1);
    lVar4 = *(long *)(lVar2 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_02c7bf48))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    *param_2 = 0.0;
    uVar1 = FUN_00d6bbac(lVar4,DAT_031ba390,0);
    if ((uVar1 & 1) == 0) {
      fVar5 = (float)thunk_FUN_00d086f0(lVar2,2,1);
      *param_2 = fVar5;
      lVar3 = *(long *)(lVar2 + 0x40);
      fVar5 = (*(float *)(lVar3 + 0x1ac) + 1.0) *
              (*(float *)(lVar3 + 0x44) +
              *(float *)(lVar3 + 0xf8) * (*(float *)(lVar3 + 0x260) + 1.0));
      if (DAT_031ba49c <= fVar5) {
        fVar5 = DAT_031ba49c;
      }
      fVar6 = DAT_031ba3dc;
      if (DAT_031ba3dc <= fVar5) {
        fVar6 = fVar5;
      }
      fVar5 = (float)thunk_FUN_00d086f0(lVar2,3,1);
      *param_2 = *param_2 + fVar5 * fVar6;
      uVar1 = FUN_00d6bbac(lVar4,DAT_031ba394,0);
      if ((uVar1 & 1) != 0) {
        fVar5 = (float)FUN_00d59f54(lVar2,1,0x12,0x19,0);
        *param_2 = fVar5 * *param_2;
      }
      fVar5 = (float)FUN_00d67b0c(param_1);
      *param_2 = fVar5 * *param_2;
    }
  }
  return;
}




void FUN_00e2be58(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d67b04(0x3dcccccd);
  lVar5 = FUN_00d67c60(param_1);
  puVar3 = PTR_s_onActorAttributesChangedName_02bed568;
  uVar4 = FUN_00e6a474(PTR_s_onActorAttributesChangedName_02bed568);
  uVar4 = FUN_0091ed5c(puVar3,uVar4,0x12345678);
  *(undefined4 *)(lVar5 + 0x38 + (ulong)*(uint *)(lVar5 + 0xf8) * 4) = uVar4;
  uVar1 = *(uint *)(lVar5 + 0xf8);
  *(code **)(lVar5 + 0x38 + (ulong)uVar1 * 8 + 0x40) = FUN_00e2bc30;
  *(uint *)(lVar5 + 0xf8) = uVar1 + 1;
  uVar6 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,uVar6);
  FUN_00d3e534();
  uVar6 = FUN_00d39980();
  FUN_00d42654(auStack_50,uVar6);
  uVar7 = FUN_00d66d28(param_1);
  thunk_FUN_00d086f0(uVar7,0,1);
  FUN_00d40cd4(uVar6,0x2b,0,1,0);
  FUN_00d3e534();
  uVar6 = FUN_00e0fb7c();
  FUN_00d42654(auStack_50,uVar6);
  uVar7 = FUN_00d66d28(param_1);
  thunk_FUN_00d086f0(uVar7,0,1);
  FUN_00d411dc(uVar6,3,1);
  lVar5 = FUN_00d67c60(param_1);
  FUN_00d425ec(auStack_50,lVar5 + 0x28);
  FUN_00d3e534();
  uVar6 = FUN_00e0fb7c();
  FUN_00d42654(auStack_50,uVar6);
  FUN_00d411f0(uVar6,3,FUN_00e2bcf8,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e2bfe4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [24];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d67c60();
  FUN_00d425ec(auStack_40,lVar2 + 8);
  FUN_00d3e534();
  uVar3 = FUN_00d29a68();
  FUN_00d42654(auStack_40,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

