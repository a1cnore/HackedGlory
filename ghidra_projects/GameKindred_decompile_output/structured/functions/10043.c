// functions/10043 — 418 functions
#include "GameKindred.h"




void thunk_FUN_1004362bc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_TalentStandard");
                    /* WARNING: Could not recover jumptable at 0x000100436308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void thunk_FUN_1004362bc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_TalentStandard");
                    /* WARNING: Could not recover jumptable at 0x000100436308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_100430000(long *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  
  puVar1 = PTR_s___PARENT___10185d770;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___PARENT___10185d770);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_2 = *puVar4;
  }
  puVar1 = PTR_s___RSRC___10185d7a0;
  if (param_3 != (undefined4 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___RSRC___10185d7a0);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_3 = *puVar5;
  }
  puVar1 = PTR_s___RSRC_VALUE___10185d7a8;
  if (param_4 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___RSRC_VALUE___10185d7a8);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_4 = *puVar4;
  }
  return;
}




void FUN_100430104(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  *param_2 = *(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  *param_4 = "Bone_Chest";
  return;
}




void FUN_100430124(undefined8 param_1)

{
  long local_20;
  undefined1 auStack_18 [8];
  
  if (DAT_101d23a38 != '\0') {
    FUN_10043015c(param_1,auStack_18,&local_20);
    *(undefined4 *)(local_20 + 0x2c) = 0;
  }
  return;
}




void FUN_10043015c(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_s___PARENT___10185d770;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___PARENT___10185d770);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_2 = *puVar4;
  }
  puVar1 = PTR_s___COMBAT_HEAL_PARAMS___10185d7e0;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___COMBAT_HEAL_PARAMS___10185d7e0);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *param_3 = *puVar4;
  }
  return;
}




void FUN_100430210(undefined8 param_1)

{
  long local_20;
  long lStack_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&lStack_18,&local_20);
    if (*(int *)(local_20 + 0x18) == *(int *)(*(long *)(*(long *)(lStack_18 + 0x10) + 0x10) + 0x260)
       ) {
      *(undefined1 *)(local_20 + 0x58) = 0;
    }
  }
  return;
}




void FUN_100430260(long *param_1,float *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48 [2];
  
  iVar2 = *(int *)(*param_1 + 0x308);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar4 + 0x260) != iVar2) {
      lVar4 = FUN_100345d90();
    }
  }
  lVar3 = *(long *)(lVar4 + 0x40);
  fVar5 = *(float *)(lVar3 + 0xd8) + *(float *)(lVar3 + 0x18c) * (*(float *)(lVar3 + 0x2f4) + 1.0);
  NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x240),DAT_101e943c0);
  fVar5 = DAT_101e94300;
  if (DAT_101e94300 <= 6.0) {
    fVar5 = 6.0;
  }
  fVar6 = (float)FUN_1003dfe60(DAT_101e94300,0x40c00000,DAT_101e943c0,0x3f800000,lVar4,2,4,0x19,0);
  fVar7 = (float)FUN_1003dfe60(lVar4,2,5,0x19,0);
  puVar1 = PTR_s_Buff_Alpha_Talent_Acceleration_10185cb38;
  fVar6 = fVar6 + (fVar5 + -6.0) * (fVar7 - fVar6) * 0.16666667;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_48[0] = DAT_101d909f4;
    fVar5 = (float)FUN_1003dfee8(lVar4,local_48,2,9);
    fVar6 = fVar5 * fVar6;
  }
  *param_2 = fVar6;
  *param_3 = 0xbf800000;
  return;
}




void FUN_1004303b0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c3a8;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100430498(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100431764();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 1;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x24) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x3f800000;
  lVar1 = FUN_10042e3b0(param_2);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10043050c(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_100431764();
  *(undefined4 *)(lVar2 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  lVar2 = FUN_10049be00(lVar2 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  uVar1 = *(undefined4 *)(param_4 + 1);
  *(undefined8 *)(lVar2 + 0x10) = *param_4;
  *(undefined4 *)(lVar2 + 0x18) = uVar1;
  *(undefined4 *)(lVar2 + 0x24) = param_1;
  *(undefined4 *)(lVar2 + 0x28) = param_2;
  lVar2 = FUN_10042e3b0(param_3);
  FUN_10049b814(lVar2 + 0x10);
  return;
}




void FUN_10043058c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,6,0x19,0);
  return;
}




void FUN_1004305a0(undefined4 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = FUN_100431764();
  *(undefined4 *)(lVar1 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar1 + 0x44) = *(byte *)(lVar1 + 0x44) & 0xfe;
  lVar1 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar1 + 0x58) = 2;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  *(undefined4 *)(lVar1 + 0x18) = 1;
  *(undefined4 *)(lVar1 + 0x24) = param_1;
  *(undefined4 *)(lVar1 + 0x28) = 0x3f800000;
  lVar1 = FUN_10042e3b0(param_2);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_100430618(undefined8 param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  uint uStack_50;
  float local_4c;
  undefined1 local_48;
  long *local_40;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_38,&local_40);
    lVar6 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    if (((((int)local_40[2] == *(int *)(lVar6 + 0x260)) &&
         (lVar4 = *(long *)(*(long *)(lVar6 + 0x58) + 0x58), lVar4 != 0)) &&
        ((*(byte *)(lVar4 + 0x239) & 0x1c) != 0)) &&
       (((int)local_40[1] == 0 && ((*(byte *)((long)local_40 + 0xc) >> 2 & 1) != 0)))) {
      local_4c = (float)FUN_1003dfe60(lVar6,1,3,0x19,0);
      lVar4 = *local_40;
      if (lVar4 != 0) {
        uVar2 = FUN_1004d2524(lVar4);
        iVar3 = FUN_100015208(lVar4,uVar2,0x12345678);
        if (iVar3 != DAT_101d2aaf0) {
          local_4c = -local_4c;
          uStack_50 = 0x811c9dc5;
          local_54 = *(undefined4 *)(lVar6 + 0x260);
          cVar1 = *PTR_s_Ability__Alpha__B_1018595b8;
          pcVar5 = PTR_s_Ability__Alpha__B_1018595b8;
          while (cVar1 != '\0') {
            pcVar5 = pcVar5 + 1;
            uStack_50 = (uStack_50 ^ (int)cVar1) * 0x1000193;
            cVar1 = *pcVar5;
          }
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_70 = &PTR_FUN_101497330;
          local_48 = 0;
          FUN_10049650c(&local_70,&DAT_101e47d30);
        }
      }
    }
  }
  return;
}




undefined8 FUN_100430760(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    do {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dab8) break;
      lVar2 = *(long *)(lVar2 + 0x20);
    } while (lVar2 != 0);
  }
  lVar3 = *(long *)(lVar2 + 0x50);
  if ((((lVar3 == 0) || (uVar4 = (ulong)*(ushort *)(lVar3 + 0x68) & 0x1f, (int)uVar4 == 0x1f)) ||
      (*(short *)(lVar3 + uVar4 * 0x38 + 0x70) != 2)) &&
     (((lVar2 = *(long *)(lVar2 + 0x68), lVar2 == 0 ||
       (uVar4 = (ulong)*(ushort *)(lVar2 + 0x68) & 0x1f, (int)uVar4 == 0x1f)) ||
      (*(short *)(lVar2 + uVar4 * 0x38 + 0x70) != 2)))) {
    while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8) {
      lVar1 = *(long *)(lVar1 + 0x20);
    }
    lVar2 = *(long *)(lVar1 + 0x28);
    while( true ) {
      if (lVar2 == 0) {
        return 1;
      }
      if ((*(int *)(lVar2 + 0x314) == DAT_101d3e51c) && (*(int *)(lVar2 + 0x310) == 0)) break;
      lVar2 = *(long *)(lVar2 + 0x350);
    }
  }
  return 0;
}




void FUN_100430850(undefined8 param_1)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  long local_48;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_48,&local_50);
    lVar3 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
    lVar2 = *(long *)(lVar3 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    if ((*(int *)(local_50 + 8) == 0) && ((*(byte *)(local_50 + 0xc) >> 2 & 1) != 0)) {
      for (lVar2 = *(long *)(lVar2 + 0x28); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x350)) {
        if ((*(int *)(lVar2 + 0x314) == DAT_101d2aaf8) && (*(int *)(lVar2 + 0x310) == 0)) {
          return;
        }
      }
      fVar4 = (float)FUN_1003dfe60(lVar3,1,4,0xd,0);
      fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(local_48 + 0x344));
      fVar4 = fVar4 * fVar5;
      if ((*(byte *)(*(long *)(local_50 + 0x20) + 0x2f4) >> 4 & 1) != 0) {
        fVar5 = (float)FUN_1003dfe60(lVar3,1,5,0x19,0);
        fVar4 = fVar5 * fVar4;
      }
      uVar1 = *(undefined4 *)(lVar3 + 0x260);
      local_90 = uVar1;
      uStack_8c = uVar1;
      local_88 = FUN_100345d90(uVar1);
      local_80 = FUN_100345d90(uVar1);
      local_6c = 0;
      local_74 = 0;
      local_64 = 0;
      uStack_58 = 0xffffffff000000ee;
      local_60 = 0xffffffffffffffff;
      local_78 = fVar4;
      FUN_10010cbe4(&local_90);
    }
  }
  return;
}




void FUN_10043099c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c888;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100430a84(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018214();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100430ad4(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a08;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_100430b08(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,6,0x19,0);
  return;
}




void FUN_100430b1c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,1,4,0);
  return;
}




void FUN_100430b30(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,1,0x19,0);
  return;
}




void FUN_100430b44(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149ca28;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100430c2c(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long *plVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  float local_4c;
  undefined2 local_48;
  undefined1 local_46;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = FUN_1004d2524("__PARENT__");
    uVar2 = FUN_100015208("__PARENT__",uVar1,0x12345678);
    plVar3 = (long *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    lVar7 = *plVar3;
    lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10);
    fVar8 = (float)FUN_100032228();
    uVar1 = FUN_1004d2524("timeOfLastDamageExchange");
    uVar2 = FUN_100015208("timeOfLastDamageExchange",uVar1,0x12345678);
    pfVar4 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    if (*pfVar4 + 5.0 < fVar8) {
      lVar5 = *(long *)(lVar6 + 0x40);
      fVar8 = *(float *)(lVar5 + 0x38) +
              *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0);
      NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar5 + 0x1a0),DAT_101e94320);
      local_4c = *(float *)(lVar7 + 0x328) * 0.04 * (DAT_101e94260 - *(float *)(lVar5 + 0x308));
      if (1.0 < local_4c) {
        local_54 = *(undefined4 *)(lVar6 + 0x260);
        local_68 = 0;
        uStack_60 = 0;
        local_58 = 0;
        local_70 = &PTR_FUN_101497218;
        uStack_50 = 0;
        local_48 = 0x100;
        local_46 = 0;
        FUN_100496328(&local_70,&DAT_101e47d30);
      }
    }
  }
  return;
}




void FUN_100430da0(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  
  uVar2 = FUN_1004d2524("__COMBAT_PARAMS__");
  uVar3 = FUN_100015208("__COMBAT_PARAMS__",uVar2,0x12345678);
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  lVar6 = *plVar4;
  uVar2 = FUN_1004d2524("__PARENT__");
  uVar3 = FUN_100015208("__PARENT__",uVar2,0x12345678);
  plVar4 = (long *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
  iVar1 = *(int *)(*(long *)(*(long *)(*plVar4 + 0x10) + 0x10) + 0x260);
  if ((((*(int *)(lVar6 + 0x10) == iVar1) && (*(long *)(lVar6 + 0x20) != 0)) &&
      ((*(byte *)(*(long *)(lVar6 + 0x20) + 0x2f4) & 1) != 0)) ||
     (((*(int *)(lVar6 + 0x18) == iVar1 && (*(long *)(lVar6 + 0x28) != 0)) &&
      ((*(byte *)(*(long *)(lVar6 + 0x28) + 0x2f4) & 1) != 0)))) {
    uVar7 = FUN_100032228();
    uVar2 = FUN_1004d2524("timeOfLastDamageExchange");
    uVar3 = FUN_100015208("timeOfLastDamageExchange",uVar2,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *puVar5 = uVar7;
  }
  return;
}




void FUN_100430ecc(long *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar2 = FUN_100015208(param_2,uVar1,0x12345678);
                    /* WARNING: Could not recover jumptable at 0x000100430f14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,uVar2);
  return;
}




ushort * FUN_100430f18(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498528;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0x40000002d;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined2 *)(&DAT_101e48174 + lVar1) = 1;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




ushort * FUN_10043101c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498628;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0x10;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    (&DAT_101e48170)[lVar1] = 1;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_100431114(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[0xb] = 0;
  puVar3[10] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_1014995d0;
  puVar3[1] = 0;
  puVar3[5] = 0xffffffff00000000;
  *(undefined4 *)(puVar3 + 6) = 0;
  puVar3[8] = 0;
  puVar3[7] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0xc) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10043121c(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined8 local_74;
  uint5 local_6c;
  undefined3 uStack_67;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_50;
  long local_48;
  
  FUN_10042e1f0(param_1,&local_48,&local_50);
  lVar6 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  iVar2 = (int)local_50[3];
  if (iVar2 == *(int *)(lVar6 + 0x260)) {
    lVar4 = *(long *)(lVar6 + 0x40);
    fVar7 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
    NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
    fVar7 = DAT_101e94260 - *(float *)(lVar4 + 0x308);
    fVar9 = *(float *)(**(long **)(*(long *)(lVar6 + 0x38) + 0x228) + 8);
    fVar8 = (float)FUN_1003df710(fVar7,fVar9,DAT_101e94320,*(float *)(lVar4 + 0x1a0),lVar6,1,1);
    uVar10 = NEON_fminnm(*(float *)((long)local_50 + 0x54) * fVar8,fVar9 * fVar7);
    local_90 = (undefined **)CONCAT44(iVar2,(int)local_50[2]);
    local_88 = FUN_100345d90();
    local_80 = FUN_100345d90(iVar2);
    _local_6c = 0;
    local_74 = 0;
    local_64 = 0;
    uStack_58 = 0xffffffff000000ee;
    local_60 = 0xffffffffffffffff;
    local_78 = uVar10;
    FUN_10010cbe4(&local_90);
  }
  else if (((((int)local_50[2] == *(int *)(lVar6 + 0x260)) &&
            ((*(byte *)((long)local_50 + 0xc) >> 2 & 1) != 0)) &&
           (lVar4 = *(long *)(*(long *)(lVar6 + 0x58) + 0x58), lVar4 != 0)) &&
          ((*(byte *)(lVar4 + 0x239) & 0x1c) != 0)) {
    uVar10 = 6;
    if (*(char *)((long)local_50 + 0xe) != '\0') {
      uVar10 = 7;
    }
    fVar7 = (float)FUN_1003dfe60(lVar6,1,uVar10,0x19,0);
    fVar8 = (float)FUN_1003dfe60(lVar6,1,0,0x19,0);
    lVar4 = *local_50;
    if (lVar4 != 0) {
      uVar10 = FUN_1004d2524(lVar4);
      iVar2 = FUN_100015208(lVar4,uVar10,0x12345678);
      if (iVar2 != DAT_101d2ab18) {
        uVar3 = 0x811c9dc5;
        cVar1 = *PTR_s_Ability__Ardan__B_101859250;
        pcVar5 = PTR_s_Ability__Ardan__B_101859250;
        while (cVar1 != '\0') {
          pcVar5 = pcVar5 + 1;
          uVar3 = (uVar3 ^ (int)cVar1) * 0x1000193;
          cVar1 = *pcVar5;
        }
        local_88 = 0;
        local_80 = 0;
        local_78 = local_78 & 0xffffff00;
        local_90 = &PTR_FUN_101497330;
        local_74 = CONCAT44(uVar3,*(undefined4 *)(lVar6 + 0x260));
        local_6c = (uint5)(uint)(fVar8 * -fVar7);
        FUN_10049650c(&local_90,&DAT_101e47d30);
      }
    }
  }
  return;
}




void FUN_100431444(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined8 local_60;
  long local_58;
  undefined1 local_50;
  long local_48;
  
  FUN_10042ecbc(param_1,&local_48);
  lVar3 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  lVar2 = *(long *)(lVar3 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  if (((DAT_101e480a0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e480a0), iVar1 != 0)) {
    FUN_1003a4e5c(&local_80,PTR_s_Ability__Ardan__B_101859250);
    DAT_101e4809c = FUN_1003e2b0c(lVar2,(ulong)local_80 & 0xffffffff);
    ___cxa_guard_release(&DAT_101e480a0);
  }
  lVar2 = *(long *)(lVar2 + (ulong)DAT_101e4809c * 8 + 0x50);
  if ((lVar2 == 0) || ((*(byte *)(lVar2 + 0x239) & 0x1c) == 0)) {
    if (1.1920929e-07 <= ABS(*(float *)(*(long *)(lVar3 + 0x40) + 0xe4) + -10.0)) {
      local_64 = *(undefined4 *)(lVar3 + 0x260);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_80 = &PTR_FUN_1014971e0;
      local_60 = 0x2bffffffff;
      local_58 = 0x4120000000000000;
      local_50 = 1;
      FUN_1004969f4(&local_80,&DAT_101e47d30);
    }
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x1f8);
    if (lVar2 == 0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = *(float *)(lVar2 + 0x60);
      if (fVar5 < 0.0) {
        fVar5 = (*(float *)(lVar2 + 0x58) + *(float *)(lVar2 + 0x54)) * *(float *)(lVar2 + 0x5c);
      }
    }
    fVar4 = (float)FUN_10045f0f0();
    fVar4 = (float)NEON_fminnm(fVar5 - fVar5 * (fVar4 / fVar5),0x422c0000);
    lVar2 = *(long *)(lVar3 + 0x40);
    if (1.1920929e-07 <= ABS(*(float *)(lVar2 + 0xe4) - fVar5)) {
      local_64 = *(undefined4 *)(lVar3 + 0x260);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_80 = &PTR_FUN_1014971e0;
      local_60 = 0x2bffffffff;
      local_58 = (ulong)(uint)fVar5 << 0x20;
      local_50 = 1;
      FUN_1004969f4(&local_80,&DAT_101e47d30);
      lVar2 = *(long *)(lVar3 + 0x40);
    }
    if (1.1920929e-07 <= ABS(*(float *)(lVar2 + 0x314) - fVar4)) {
      local_64 = *(undefined4 *)(lVar3 + 0x260);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_80 = &PTR_FUN_101497218;
      local_60 = CONCAT44(fVar4,3);
      local_58 = CONCAT53(local_58._3_5_,0x101);
      FUN_100496328(&local_80,&DAT_101e47d30);
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_1004316ac(long *param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar6;
  float fVar7;
  float fVar5;
  float fVar8;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  lVar2 = *(long *)(lVar1 + 0x40);
  fVar3 = (float)FUN_1003df710(lVar1,2,1);
  uVar6 = NEON_fmov(0x3f800000,4);
  fVar5 = (float)*(undefined8 *)(lVar2 + 0x40);
  fVar8 = (float)((ulong)*(undefined8 *)(lVar2 + 0x40) >> 0x20);
  fVar4 = fVar5 + (float)*(undefined8 *)(lVar2 + 0xf4) *
                  ((float)*(undefined8 *)(lVar2 + 0x25c) + (float)uVar6);
  fVar7 = fVar8 + (float)((ulong)*(undefined8 *)(lVar2 + 0xf4) >> 0x20) *
                  ((float)((ulong)*(undefined8 *)(lVar2 + 0x25c) >> 0x20) +
                  (float)((ulong)uVar6 >> 0x20));
  uVar6 = NEON_fminnm(CONCAT44(fVar7 + fVar7 * (float)((ulong)*(undefined8 *)(lVar2 + 0x1a8) >> 0x20
                                                      ),
                               fVar4 + fVar4 * (float)*(undefined8 *)(lVar2 + 0x1a8)),_DAT_101e94328
                      ,4);
  uVar6 = NEON_fmaxnm(_DAT_101e94268,uVar6,4);
  fVar4 = (float)FUN_1003df710(lVar1,3,1);
  return ((float)uVar6 - fVar5) * fVar3 + ((float)((ulong)uVar6 >> 0x20) - fVar8) * fVar4;
}




void FUN_100431764(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[8] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 7) = DAT_101dc0b88;
  *(undefined4 *)(puVar3 + 8) = 0;
  *puVar3 = &PTR_FUN_101499090;
  puVar3[1] = 0;
  puVar3[5] = &PTR_FUN_101499168;
  puVar3[6] = 0;
  *(undefined1 *)((long)puVar3 + 0x44) = 2;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10043187c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100018cac();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004318cc(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1004318e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  long local_68;
  
  FUN_10042ecbc(param_1,&local_68);
  FUN_1003461dc(*(undefined8 *)(*(long *)(local_68 + 0x10) + 0x10));
  lVar1 = FUN_100345d90();
  lVar2 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
  if ((0.0 < *(float *)(*(long *)(lVar2 + 0x40) + 0x308)) &&
     (fVar4 = *(float *)(lVar2 + 0x250), fVar5 = *(float *)(lVar2 + 0x254),
     fVar6 = *(float *)(lVar2 + 600), fVar7 = *(float *)(lVar2 + 0x2ec),
     fVar8 = *(float *)(lVar1 + 0x250), fVar9 = *(float *)(lVar1 + 0x254),
     fVar10 = *(float *)(lVar1 + 600), fVar11 = *(float *)(lVar1 + 0x2ec),
     fVar3 = (float)FUN_1003dfe60(lVar1,2,4,0x19,0), fVar4 = fVar4 - fVar8,
     fVar5 = (fVar7 + fVar5) - (fVar9 + fVar11), fVar6 = fVar6 - fVar10,
     fVar3 * fVar3 < fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5)) {
    local_74 = *(undefined4 *)(lVar2 + 0x260);
    uStack_70 = *(undefined4 *)(local_68 + 0x30c);
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_90 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_90,&DAT_101e47d30);
  }
  return;
}




void FUN_1004319e8(long param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  long lVar3;
  ushort *puVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar6 = *(undefined4 *)(lVar3 + 0x250);
  fVar8 = *(float *)(lVar3 + 0x254);
  uVar7 = *(undefined4 *)(lVar3 + 600);
  fVar9 = *(float *)(lVar3 + 0x2ec);
  FUN_1003461dc();
  lVar3 = FUN_100345d90();
  *(undefined4 *)(param_2 + 0x48) = 1;
  if (lVar3 != 0) {
    *(long *)(param_2 + 8) = lVar3;
  }
  puVar4 = (ushort *)(param_2 + 0x58);
  uVar2 = *puVar4;
  uVar1 = *(undefined1 *)(param_2 + 0x5a);
  *puVar4 = uVar2 & 0xff8f | 0x20;
  fVar5 = (float)FUN_1003dfe60(lVar3,2,4,0x19,0);
  *(undefined4 *)(param_2 + 0x14) = uVar6;
  *(float *)(param_2 + 0x18) = fVar9 + fVar8;
  *(undefined4 *)(param_2 + 0x1c) = uVar7;
  *(float *)(param_2 + 0x30) = (fVar5 + 0.75) * (fVar5 + 0.75);
  *(undefined1 *)(param_2 + 0x5a) = uVar1;
  *puVar4 = uVar2 & 0xff8f | 0x8020;
  fVar8 = (float)FUN_1003dfe60(lVar3,2,4,0x19,0);
  *(float *)(param_2 + 0x34) = (fVar8 + -0.75) * (fVar8 + -0.75);
  return;
}




ushort * FUN_100431ad4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48198 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481b0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481c8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481c0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481b8 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498b08;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48198 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a0 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e481b0 + lVar1) = 0xbf800000;
    *(undefined8 *)(&DAT_101e481b4 + lVar1) = DAT_101dc1cb8;
    *(int *)(&DAT_101e481bc + lVar1) = (int)(&DAT_101e48160 + lVar1);
    *(undefined4 *)(&DAT_101e481c0 + lVar1) = 0xff000000;
    (&DAT_101e481c8)[lVar1] = (&DAT_101e481c8)[lVar1] & 0xf0;
    *(undefined4 *)(&DAT_101e481a8 + lVar1) = 0xbf800000;
    *(ushort *)(&DAT_101e481c4 + lVar1) = *(ushort *)(&DAT_101e481c4 + lVar1) & 0xf800 | 0x38;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




ushort * FUN_100431c28(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498278;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0x3f800000ffffffff;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined2 *)(&DAT_101e48188 + lVar1) = 0x2000;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




ushort * FUN_100431d2c(undefined8 param_1)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)DAT_101e94150;
  if (uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar1 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar1 * 0x98) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_10149bb88;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar2);
  return puVar2;
}




ushort * FUN_100431e0c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48198 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498238;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48184 + lVar1) = 0xffffffff00000001;
    *(undefined8 *)(&DAT_101e481a0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e4818c + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48194 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e481a8 + lVar1) = 0xffffffff;
    (&DAT_101e481ac)[lVar1] = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




ushort * FUN_100431f2c(undefined8 param_1)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)DAT_101e94150;
  if (uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar1 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar1 * 0x98) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_10149bc08;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar2);
  return puVar2;
}




ushort * FUN_10043200c(undefined8 param_1)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)DAT_101e94150;
  if (uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar1 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar1 * 0x98) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_10149bee8;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar2);
  return puVar2;
}




void FUN_1004320ec(long *param_1,float *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_68 [2];
  
  lVar3 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if (lVar3 == 0) {
    fVar6 = 0.0;
  }
  else {
    lVar4 = *(long *)(lVar3 + 0x40);
    fVar6 = *(float *)(lVar4 + 0x38) + *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
    NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
    fVar7 = DAT_101e94260 - *(float *)(lVar4 + 0x38);
    fVar5 = (float)FUN_1003dfe60(lVar3,0,9,0x19,0);
    fVar6 = (float)FUN_1003dfe60(lVar3,0,3,0x19,0);
    puVar1 = PTR_s_Buff_Ardan_Talent_Vanguardian_10185c888;
    lVar4 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
    if (lVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_1003a47d0(lVar4,puVar1);
    }
    fVar6 = fVar6 + fVar5 * fVar7;
    if ((*(int *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x260) ==
         *(int *)(*param_1 + 0x308)) && ((uVar2 & 1) == 0)) {
      fVar5 = (float)FUN_1003dfe60(lVar3,0,4,0x19,0);
      fVar6 = fVar5 * fVar6;
    }
    if (uVar2 != 0) {
      local_68[0] = DAT_101d90a18;
      fVar5 = (float)FUN_1003dfee8(lVar3,local_68,0,9);
      fVar6 = fVar5 * fVar6;
    }
  }
  *param_2 = fVar6;
  *param_3 = 0xbf800000;
  return;
}




void FUN_100432268(undefined8 param_1)

{
  int iVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  float fVar7;
  float fVar8;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  int local_64;
  uint uStack_60;
  float local_5c;
  undefined1 local_58;
  long local_50;
  long local_48;
  
  FUN_10042e1f0(param_1,&local_48,&local_50);
  lVar4 = FUN_100345d90(*(undefined4 *)(local_48 + 0x308));
  lVar3 = local_48;
  if ((((lVar4 != 0) && (lVar5 = *(long *)(*(long *)(lVar4 + 0x58) + 0x58), lVar5 != 0)) &&
      ((*(byte *)(lVar5 + 0x239) & 0x1c) != 0)) &&
     ((iVar1 = *(int *)(local_50 + 0x18),
      iVar1 == *(int *)(*(long *)(*(long *)(local_48 + 0x10) + 0x10) + 0x260) &&
      ((*(byte *)(local_50 + 0xc) >> 4 & 1) == 0)))) {
    fVar7 = (float)FUN_1003dfe60(lVar4,1,0,0x19,0);
    fVar8 = (float)FUN_1003dfe60(lVar4,0,6,0x19,0);
    local_64 = *(int *)(lVar3 + 0x308);
    local_5c = 0.0;
    if (iVar1 != local_64) {
      local_5c = fVar8;
    }
    cVar2 = *PTR_s_Ability__Ardan__B_101859250;
    uStack_60 = 0x811c9dc5;
    pcVar6 = PTR_s_Ability__Ardan__B_101859250;
    while (cVar2 != '\0') {
      pcVar6 = pcVar6 + 1;
      uStack_60 = (uStack_60 ^ (int)cVar2) * 0x1000193;
      cVar2 = *pcVar6;
    }
    local_5c = local_5c * fVar7;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_80 = &PTR_FUN_101497330;
    local_58 = 0;
    FUN_10049650c(&local_80,&DAT_101e47d30);
    local_bc = *(undefined4 *)(local_48 + 0x308);
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    local_d8 = &PTR_FUN_101496b18;
    local_b4 = DAT_1018589d8;
    local_ac = 0x13f800000;
    local_90 = 0;
    local_9c = 0;
    local_a4 = 0;
    local_88 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    uStack_b8 = local_bc;
    local_b0 = FUN_1003d4e0c(PTR_s_Buff_Ardan_HeroicPerk_ShowEffect_10185c880);
    FUN_10049639c(&local_d8,&DAT_101e47d30);
  }
  return;
}




void FUN_100432420(undefined8 param_1)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  float fVar5;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  int local_5c;
  uint uStack_58;
  float local_54;
  undefined1 local_50;
  long local_48;
  
  FUN_10042ecbc(param_1,&local_48);
  lVar4 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  lVar2 = FUN_100345d90(*(undefined4 *)(local_48 + 0x308));
  local_5c = *(int *)(local_48 + 0x308);
  if (local_5c != *(int *)(lVar4 + 0x260) && lVar2 != 0) {
    lVar4 = *(long *)(*(long *)(lVar2 + 0x58) + 0x50);
    if ((((lVar4 != 0) && (0x1000 < (*(uint *)(lVar4 + 0x238) & 0x1c00))) &&
        (lVar4 = *(long *)(*(long *)(lVar2 + 0x58) + 0x58), lVar4 != 0)) &&
       ((*(byte *)(lVar4 + 0x239) & 0x1c) != 0)) {
      fVar5 = (float)FUN_1003dfe60(lVar2,1,0,0x19,0);
      local_54 = (float)FUN_1003dfe60(lVar2,0,10,0x19,0);
      cVar1 = *PTR_s_Ability__Ardan__B_101859250;
      uStack_58 = 0x811c9dc5;
      pcVar3 = PTR_s_Ability__Ardan__B_101859250;
      while (cVar1 != '\0') {
        pcVar3 = pcVar3 + 1;
        uStack_58 = (uStack_58 ^ (int)cVar1) * 0x1000193;
        cVar1 = *pcVar3;
      }
      local_70 = 0;
      uStack_68 = 0;
      local_54 = local_54 * -fVar5;
      local_60 = 0;
      local_78 = &PTR_FUN_101497330;
      local_50 = 0;
      FUN_10049650c(&local_78,&DAT_101e47d30);
    }
  }
  return;
}




ushort * FUN_10043255c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ushort *puVar4;
  
  uVar3 = (ulong)DAT_101e94150;
  if (uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = &DAT_101e48150 + uVar3 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar4;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar3 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined ***)puVar4 = &PTR_FUN_101498a38;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 3;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    uVar2 = DAT_101dc0b88;
    *(undefined4 *)(&DAT_101e48170 + lVar1) = DAT_101dc0b88;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = DAT_101dc1cb8;
    *(undefined4 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e48190 + lVar1) = uVar2;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar4);
  return puVar4;
}




ushort * FUN_100432680(undefined8 param_1)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)DAT_101e94150;
  if (uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar1 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar1 * 0x98) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_10149bb08;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar2);
  return puVar2;
}




undefined1  [16] FUN_100432760(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  ulong uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined4 local_58 [2];
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  auVar6 = FUN_1003df710(lVar3,2,1);
  uVar9 = auVar6._8_8_;
  lVar1 = *(long *)(lVar3 + 0x40);
  fVar4 = *(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0);
  fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar1 + 0x1b4),DAT_101e94334);
  fVar4 = DAT_101e94274;
  if (DAT_101e94274 <= fVar5) {
    fVar4 = fVar5;
  }
  fVar10 = *(float *)(**(long **)(*(long *)(lVar3 + 0x38) + 0x228) + 8);
  fVar5 = (float)FUN_1003df710(lVar3,1,1);
  fVar7 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  fVar4 = fVar10 + auVar6._0_4_ * fVar4 + (DAT_101e94300 + -1.0) * (fVar5 - fVar10) * 0.09090909;
  uVar8 = CONCAT44(auVar6._4_4_,fVar4);
  iVar2 = FUN_1003a47d0(lVar3,PTR_s_Buff_Baptiste_Talent_TheReaper_10185a388);
  if (iVar2 != 0) {
    local_58[0] = DAT_101d90dbc;
    fVar5 = (float)FUN_1003dfee8(lVar3,local_58,1,9);
    uVar8 = (ulong)(uint)(fVar5 * fVar4);
    uVar9 = 0;
  }
  auVar6._8_8_ = uVar9;
  auVar6._0_8_ = uVar8;
  return auVar6;
}




void FUN_1004328a0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101498cc0;
  puVar3[1] = 0;
  *(undefined1 *)(puVar3 + 5) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10043298c(undefined8 param_1)

{
  FUN_1003df710(param_1,4,1);
  return;
}




void FUN_100432998(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




void FUN_1004329ac(long *param_1,undefined4 *param_2)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  *param_2 = *(undefined4 *)(lVar1 + 0x250);
  fVar2 = *(float *)(lVar1 + 0x254);
  param_2[1] = fVar2;
  uVar3 = *(undefined4 *)(lVar1 + 600);
  param_2[1] = *(float *)(lVar1 + 0x2ec) + fVar2;
  param_2[2] = uVar3;
  return;
}




undefined1  [16] FUN_1004329dc(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x308) == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != *(int *)(lVar3 + 0x308)) {
      lVar2 = FUN_100345d90();
      lVar3 = *param_1;
    }
  }
  auVar5 = FUN_1003dfe60(lVar2,1,3,0x19,0);
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  iVar1 = FUN_100432d40(lVar3);
  if (iVar1 == 1) {
    fVar4 = (float)FUN_1003df710(lVar2,6,1);
    uVar6 = CONCAT44(auVar5._4_4_,auVar5._0_4_ + auVar5._0_4_ * fVar4);
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




void FUN_100432a84(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a140();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100432ad4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101499190;
  puVar3[1] = 0;
  puVar3[5] = &PTR_FUN_101499268;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = DAT_101dc0b88;
  puVar3[8] = 0;
  puVar3[9] = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined1  [16] FUN_100432bdc(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x308) == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != *(int *)(lVar3 + 0x308)) {
      lVar2 = FUN_100345d90();
      lVar3 = *param_1;
    }
  }
  auVar5 = FUN_1003dfe60(lVar2,1,6,0x19,0);
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  iVar1 = FUN_100432d40(lVar3);
  if (iVar1 == 1) {
    fVar4 = (float)FUN_1003df710(lVar2,6,1);
    uVar6 = CONCAT44(auVar5._4_4_,auVar5._0_4_ + auVar5._0_4_ * fVar4);
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




void FUN_100432c84(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,7,0x19,0);
  return;
}




undefined1  [16] FUN_100432c98(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *param_1;
  if (*(int *)(lVar3 + 0x308) == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(lVar3 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != *(int *)(lVar3 + 0x308)) {
      lVar2 = FUN_100345d90();
      lVar3 = *param_1;
    }
  }
  auVar5 = FUN_1003dfe60(lVar2,2,3,0x19,0);
  uVar7 = auVar5._8_8_;
  uVar6 = auVar5._0_8_;
  iVar1 = FUN_100432d40(lVar3);
  if (iVar1 == 1) {
    fVar4 = (float)FUN_1003df710(lVar2,6,1);
    uVar6 = CONCAT44(auVar5._4_4_,auVar5._0_4_ + auVar5._0_4_ * fVar4);
  }
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = uVar6;
  return auVar5;
}




undefined4 FUN_100432d40(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___VAR1_INT___10185d7f8;
  uVar2 = FUN_1004d2524(PTR_s___VAR1_INT___10185d7f8);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168,uVar3);
  return *puVar4;
}




undefined4 FUN_100432da4(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___VAR1_FLOAT___10185d7e8;
  uVar2 = FUN_1004d2524(PTR_s___VAR1_FLOAT___10185d7e8);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168,uVar3);
  return *puVar4;
}




undefined4 FUN_100432e08(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___VAR2_FLOAT___10185d7f0;
  uVar2 = FUN_1004d2524(PTR_s___VAR2_FLOAT___10185d7f0);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168,uVar3);
  return *puVar4;
}




void FUN_100432e6c(undefined8 *param_1,long param_2,undefined4 *param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  float fVar9;
  
  FUN_1003461dc(param_2);
  lVar1 = FUN_100345d90();
  uVar8 = *(undefined8 *)(param_2 + 0x250);
  fVar9 = *(float *)(param_2 + 600);
  fVar3 = *(float *)(param_2 + 0x2ec);
  fVar4 = (float)FUN_100432da4(*param_1);
  fVar5 = (float)FUN_100432e08(*param_1);
  lVar2 = *(long *)(*(long *)(lVar1 + 0x58) + 0x60);
  if (lVar2 == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = (float)FUN_10045f34c(lVar2 + 0x220);
  }
  *param_4 = CONCAT44(fVar3 + (float)((ulong)uVar8 >> 0x20),fVar6 * fVar4 + (float)uVar8);
  *(float *)(param_4 + 1) = fVar9 + fVar5 * fVar6;
  uVar7 = FUN_1003dfe60(lVar1,2,6,0x19,0);
  *param_3 = uVar7;
  return;
}




void FUN_100432f48(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149cbc8;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100433030(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101499500;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined2 *)((long)puVar3 + 0x2c) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100433120(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,9,0x19,0);
  return;
}




void FUN_100433134(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x420) + 0x10);
  return;
}




void FUN_100433144(undefined8 *param_1)

{
  FUN_100432da4(*param_1);
  return;
}




void FUN_10043314c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,6,0x19,0);
  return;
}




void FUN_100433160(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,0xc,5,0);
  return;
}




float FUN_100433174(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10));
  uVar1 = FUN_100345d90();
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  fVar3 = *(float *)(lVar2 + 0x250) - *(float *)(param_2 + 0x250);
  fVar5 = (*(float *)(lVar2 + 0x2ec) + *(float *)(lVar2 + 0x254)) -
          (*(float *)(param_2 + 0x254) + *(float *)(param_2 + 0x2ec));
  fVar6 = *(float *)(lVar2 + 600) - *(float *)(param_2 + 600);
  fVar6 = SQRT(fVar3 * fVar3 + fVar6 * fVar6 + fVar5 * fVar5);
  fVar3 = (float)FUN_1003dfe60(uVar1,3,6,0x19,0);
  fVar5 = 1.0;
  if (fVar3 <= fVar6) {
    fVar5 = (float)FUN_1003dfe60(0x3f800000,uVar1,3,4,0x19,0);
    fVar4 = (float)FUN_1003dfe60(uVar1,3,5,0x19,0);
    fVar6 = fVar6 - fVar3;
    fVar5 = (fVar5 * fVar6 - fVar6) / (fVar4 - fVar3) + 1.0;
  }
  return fVar5;
}




void FUN_100433284(long *param_1,long param_2)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  ushort *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar5 = *param_1;
  iVar1 = *(int *)(lVar5 + 0x308);
  if (iVar1 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
    if (*(int *)(lVar4 + 0x260) != iVar1) {
      lVar4 = FUN_100345d90(iVar1);
      lVar5 = *param_1;
    }
  }
  lVar5 = *(long *)(*(long *)(lVar5 + 0x10) + 0x10);
  uVar10 = *(undefined4 *)(lVar5 + 0x250);
  fVar7 = *(float *)(lVar5 + 0x254);
  uVar11 = *(undefined4 *)(lVar5 + 600);
  fVar9 = *(float *)(lVar5 + 0x2ec);
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  if (lVar4 != 0) {
    *(long *)(param_2 + 8) = lVar4;
  }
  puVar6 = (ushort *)(param_2 + 0x58);
  uVar3 = *puVar6;
  uVar2 = *(undefined1 *)(param_2 + 0x5a);
  *puVar6 = uVar3 & 0xff8f | 0x20;
  fVar8 = (float)FUN_1003dfe60(lVar4,3,5,0x19,0);
  *(undefined4 *)(param_2 + 0x14) = uVar10;
  *(float *)(param_2 + 0x18) = fVar9 + fVar7;
  *(undefined4 *)(param_2 + 0x1c) = uVar11;
  *(float *)(param_2 + 0x30) = fVar8 * fVar8;
  *(undefined1 *)(param_2 + 0x5a) = uVar2;
  *puVar6 = uVar3 & 0xff8f | 0x8020;
  return;
}




void FUN_100433370(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,7,0x19,0);
  return;
}




void FUN_100433384(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  int local_2c;
  undefined4 uStack_28;
  long local_20;
  long lStack_18;
  
  FUN_10042e1f0(param_1,&lStack_18,&local_20);
  local_2c = *(int *)(local_20 + 0x18);
  if (((local_2c == *(int *)(*(long *)(*(long *)(lStack_18 + 0x10) + 0x10) + 0x260)) &&
      (lVar1 = *(long *)(local_20 + 0x28), lVar1 != 0)) &&
     (((*(uint *)(lVar1 + 0x2f4) >> 0xc & 1) != 0 ||
      ((((*(uint *)(lVar1 + 0x2f4) & 1) != 0 && ((*(byte *)(local_20 + 0xc) >> 4 & 1) == 0)) &&
       ((uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
        (1 < *(ushort *)(lVar1 + uVar2 * 0x38 + 0x90) - 3)))))))) {
    uStack_28 = *(undefined4 *)(lStack_18 + 0x30c);
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_48 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_48,&DAT_101e47d30);
  }
  return;
}




float FUN_100433434(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  return DAT_101e94260 * 0.05;
}




float FUN_10043348c(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0x40) + *(float *)(lVar1 + 0xf4) * (*(float *)(lVar1 + 0x25c) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a8),DAT_101e94328);
  return DAT_101e94268 * 0.05;
}




void FUN_1004334e4(undefined8 param_1)

{
  long lVar1;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  int local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  long local_30;
  long local_28;
  
  FUN_10042e1f0(param_1,&local_28,&local_30);
  lVar1 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
  local_44 = *(int *)(local_30 + 0x10);
  if ((local_44 == *(int *)(lVar1 + 0x260)) && ((*(byte *)(local_30 + 0xc) >> 2 & 1) != 0)) {
    local_3c = FUN_1003df710(lVar1,2,1);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_60 = &PTR_FUN_101497218;
    uStack_40 = 3;
    local_38 = 0x100;
    local_36 = 0;
    FUN_100496328(&local_60,&DAT_101e47d30);
  }
  return;
}




void FUN_100433580(long param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_s_Effect_Blackfeather_HeartThrob_1_101498038;
  if ((*(uint *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x2f4) & 0x20000110) != 0) {
    ppuVar1 = &PTR_s_Effect_Blackfeather_Stack_Min1_101498028;
  }
  FUN_1004d2628(param_2,ppuVar1[*(ushort *)(param_1 + 0x344) - 1]);
  return;
}




void FUN_1004335c4(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_e0 [112];
  long local_70;
  long local_68;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_68,&local_70);
    lVar6 = *(long *)(*(long *)(local_68 + 0x10) + 0x10);
    lVar5 = FUN_100345d90(*(undefined4 *)(local_68 + 0x308));
    iVar1 = *(int *)(local_70 + 0x18);
    if (((iVar1 == *(int *)(lVar6 + 0x260)) &&
        (iVar2 = *(int *)(local_70 + 0x10), iVar2 == *(int *)(lVar5 + 0x260))) &&
       ((*(byte *)(local_70 + 0xc) & 0xc) != 0)) {
      fVar7 = (float)FUN_1003df710(lVar5,4,1);
      fVar8 = (float)FUN_1003df710(lVar5,5,1);
      lVar6 = *(long *)(lVar5 + 0x40);
      fVar3 = *(float *)(lVar6 + 0xd8) +
              *(float *)(lVar6 + 0x18c) * (*(float *)(lVar6 + 0x2f4) + 1.0);
      NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar6 + 0x240),DAT_101e943c0);
      fVar3 = DAT_101e94300 + -1.0;
      fVar9 = (float)FUN_1003df710(lVar5,6,1);
      fVar4 = *(float *)(lVar6 + 0x4c) +
              *(float *)(lVar6 + 0x100) * (*(float *)(lVar6 + 0x268) + 1.0);
      NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar6 + 0x1b4),DAT_101e94334);
      fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(local_68 + 0x344));
      FUN_1003462a0((fVar7 + fVar3 * (fVar8 - fVar7) * 0.09090909 + fVar9 * DAT_101e94274) * fVar4,
                    SUB42(fVar4,0),DAT_101e94274,DAT_101e94334,auStack_e0,iVar2,iVar1,1,3,
                    local_70 + 100,**(undefined8 **)(local_68 + 0x40),0,1);
      FUN_10010cbe0(auStack_e0);
    }
  }
  return;
}




void FUN_100433770(undefined8 param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  uVar2 = *(ulong *)(local_18 + 0x344);
  uVar1 = (uint)(uVar2 >> 0x10) & 0xffff;
  uVar3 = uVar1;
  if ((*(uint *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x2f4) & 0x20000110) != 0) {
    uVar3 = 2;
  }
  if (uVar3 <= ((uint)(uVar2 >> 0x20) & 0xffff) + ((uint)uVar2 & 0xffff)) {
    uVar3 = uVar3 - ((uint)uVar2 & 0xffff);
    if (uVar3 <= uVar1) {
      uVar1 = uVar3;
    }
    *(ulong *)(local_18 + 0x344) = uVar2 & 0xffff0000ffffffff | (ulong)uVar1 << 0x20;
  }
  return;
}




undefined2 FUN_1004337ec(long param_1)

{
  return *(undefined2 *)(param_1 + 0x346);
}




ushort * FUN_1004337f4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_1014984e8;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0x10;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e48170 + lVar1) = DAT_101dc0b88;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_1004338f4(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x428) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(*(long *)(param_1 + 0x428) + 0x18);
  }
  *param_2 = uVar1;
  return;
}




void FUN_100433910(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101499290;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  puVar3[6] = 0;
  *(byte *)(puVar3 + 7) = *(byte *)(puVar3 + 7) & 0xf8;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100433a0c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,7,0x19,0);
  return;
}




void FUN_100433a20(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




float FUN_100433a34(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  plVar3 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  do {
    lVar5 = *plVar3;
    plVar3 = (long *)(lVar5 + 0x20);
  } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8);
  lVar2 = *(long *)(lVar5 + 0x28);
  lVar5 = lVar2;
  if (lVar2 != 0) {
    do {
      if ((*(int *)(lVar5 + 0x314) == DAT_101d3e5fc) && (*(int *)(lVar5 + 0x310) == 0)) {
        return 1.0;
      }
      plVar3 = (long *)(lVar5 + 0x350);
      lVar4 = lVar2;
      lVar5 = *plVar3;
    } while (*plVar3 != 0);
    do {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d3e600) && (*(int *)(lVar4 + 0x310) == 0)) {
        iVar1 = *(int *)(lVar2 + 0x30c);
        lVar5 = lVar2;
        while (iVar1 != *(int *)(lVar4 + 0x30c)) {
          lVar5 = *(long *)(lVar5 + 0x350);
          iVar1 = *(int *)(lVar5 + 0x30c);
        }
        for (; *(int *)(lVar2 + 0x30c) != *(int *)(lVar4 + 0x30c); lVar2 = *(long *)(lVar2 + 0x350))
        {
        }
        return 1.0 - *(float *)(lVar5 + 0x318) / *(float *)(lVar2 + 0x31c);
      }
      plVar3 = (long *)(lVar4 + 0x350);
      lVar4 = *plVar3;
    } while (*plVar3 != 0);
  }
  return 0.0;
}




undefined4 FUN_100433b1c(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x28);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x350);
  } while (*(int *)(lVar2 + 0x30c) != param_2);
  return *(undefined4 *)(lVar2 + 0x31c);
}




void FUN_100433b3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  *(undefined4 *)(param_2 + 0x48) = 0x2000;
  if (lVar1 != 0) {
    *(long *)(param_2 + 8) = lVar1;
  }
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xfe8f | 0x10;
  return;
}




void FUN_100433b70(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[10] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101498e90;
  puVar3[1] = 0;
  puVar3[5] = &PTR_FUN_101498f68;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = DAT_101dc0b88;
  puVar3[8] = 0;
  puVar3[9] = 0;
  *(undefined1 *)(puVar3 + 10) = 1;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100433c84(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x43250000;
  return;
}




void FUN_100433c90(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  *(undefined4 *)(param_2 + 0x48) = 1;
  if (lVar1 != 0) {
    *(long *)(param_2 + 8) = lVar1;
  }
  *(byte *)(param_2 + 0x10) = *(byte *)(param_2 + 0x10) | 3;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xfe8f | 0x20;
  return;
}




bool FUN_100433cd0(long param_1)

{
  return (uint)*(ushort *)(param_1 + 0x344) <
         (uint)(int)*(float *)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
                                                    0x38) + 0x228) + 8);
}




void FUN_100433cfc(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = FUN_1003df710(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),1,1);
    *param_2 = uVar1;
  }
  return;
}




int FUN_100433d3c(long *param_1)

{
  return (int)*(float *)(**(long **)(*(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x38)
                                    + 0x228) + 8);
}




float FUN_100433d60(long *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(*param_1 + 0x344));
  fVar1 = (float)FUN_1003df710(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),2,1);
  return 1.0 / (fVar2 * fVar1 + 1.0);
}




float FUN_100433da4(long *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(*param_1 + 0x344));
  fVar1 = (float)FUN_1003df710(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),3,1);
  return fVar2 * fVar1 + 1.0;
}




void FUN_100433de4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001861c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100433e34(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100016b08();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100433e84(undefined8 param_1)

{
  FUN_1003df710(param_1,4,1);
  return;
}




ushort * FUN_100433e90(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_1014981f8;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0xbf800000;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_100433f80(undefined8 param_1)

{
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_18,&local_20);
  if ((*(int *)(local_20 + 0x10) == *(int *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260))
     && ((*(byte *)(*(long *)(local_20 + 0x20) + 0x2f5) >> 1 & 1) != 0)) {
    *(float *)(local_20 + 0x54) = *(float *)(local_20 + 0x54) * 0.9;
  }
  return;
}




void FUN_100433fe4(undefined8 param_1)

{
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_18,&local_20);
  if (((*(int *)(local_20 + 0x10) == *(int *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260))
      && ((*(byte *)(*(long *)(local_20 + 0x20) + 0x2f5) >> 1 & 1) != 0)) &&
     ((*(byte *)(local_20 + 0xc) >> 2 & 1) != 0)) {
    *(float *)(local_20 + 0x54) = *(float *)(local_20 + 0x54) * 0.8;
    *(float *)(local_20 + 0x38) = *(float *)(local_20 + 0x38) * 0.5;
  }
  return;
}




void FUN_100434060(undefined8 param_1)

{
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_18,&local_20);
  if ((*(int *)(local_20 + 0x10) == *(int *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260))
     && ((*(byte *)(*(long *)(local_20 + 0x20) + 0x2f5) >> 1 & 1) != 0)) {
    *(float *)(local_20 + 0x54) = *(float *)(local_20 + 0x54) * 0.9;
  }
  return;
}




undefined4 FUN_1004340c4(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100432d40(*param_1);
  uVar2 = 0x3f666666;
  if (6 < iVar1) {
    uVar2 = 0x3f800000;
  }
  uVar3 = 0x3f333333;
  if (4 < iVar1) {
    uVar3 = uVar2;
  }
  uVar2 = 0x3f000000;
  if (2 < iVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}




undefined4 FUN_10043410c(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_100432d40(*param_1);
  uVar2 = 0x3f8ccccd;
  if (6 < iVar1) {
    uVar2 = 0x3f800000;
  }
  uVar3 = 0x3fa66666;
  if (4 < iVar1) {
    uVar3 = uVar2;
  }
  uVar2 = 0x3fc00000;
  if (2 < iVar1) {
    uVar2 = uVar3;
  }
  return uVar2;
}




undefined4 FUN_100434154(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_100432d40(*param_1);
  uVar2 = 0x3dcccccd;
  if (6 < iVar1) {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_100434180(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[6] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *puVar3 = &PTR_FUN_10149cfd8;
  puVar3[1] = 0;
  *(undefined8 *)((long)puVar3 + 0x2c) = 0xffffffff00000000;
  *(undefined4 *)((long)puVar3 + 0x34) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




undefined4 FUN_10043427c(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_100434290(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined **local_1a0;
  long local_198;
  undefined8 local_190;
  float local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined1 uStack_17d;
  float fStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined1 local_15c;
  undefined4 local_158;
  undefined8 local_154;
  int local_14c;
  undefined4 local_148;
  undefined **local_140;
  long local_138;
  undefined1 local_130;
  undefined4 local_12c;
  float fStack_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined2 local_e8;
  byte local_e6;
  long alStack_e0 [8];
  
  alStack_e0[6] = *(long *)PTR____stack_chk_guard_101444218;
  lVar8 = param_1[0x85];
  lVar10 = *param_1;
  lVar6 = *(long *)(*(long *)(lVar10 + 0x10) + 0x10);
  fVar12 = *(float *)(*(long *)(lVar6 + 0x40) + 0x38);
  fVar11 = (float)FUN_1003dfe60(lVar6,2,4,0x19,0);
  lVar7 = *(long *)(lVar6 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  fVar13 = *(float *)(lVar8 + 0x54);
  FUN_1003a4e5c(&local_140,PTR_s_Ability__Catherine__B_ReflectDam_101858f30);
  uVar3 = FUN_1003e2b0c(lVar7,(ulong)local_140 & 0xffffffff);
  FUN_100101b14(lVar6,uVar3,lVar6);
  uVar14 = *(undefined4 *)(lVar6 + 0x250);
  uVar15 = *(undefined4 *)(lVar6 + 600);
  fVar16 = *(float *)(lVar6 + 0x2ec) + *(float *)(lVar6 + 0x254);
  local_140 = &PTR_FUN_101499960;
  local_120 = 0;
  uStack_118 = 0;
  uStack_104 = 0x3f800000bf800000;
  local_10c = 0xc0000000bf800000;
  local_fc = 0xff;
  local_f4 = 0xffffffff;
  local_ec = 0xffffffff;
  local_130 = 1;
  lVar7 = FUN_1003e10f0();
  local_110 = 0x42c80000;
  local_f8 = 1;
  local_e6 = *(byte *)(lVar7 + 0xe5) | 0x14;
  local_e8 = 0xc320;
  local_138 = lVar6;
  local_12c = uVar14;
  fStack_128 = fVar16;
  local_124 = uVar15;
  uVar1 = FUN_1003a6ce4(&local_140,alStack_e0 + 3,3,0);
  if (uVar1 < 3) {
    local_1a0 = &PTR_FUN_101499960;
    local_180 = 0;
    uStack_17f = 0;
    uStack_17e = 0;
    uStack_17d = 0;
    fStack_17c = 0.0;
    uStack_178 = 0;
    uStack_174 = 0;
    uStack_164 = 0xbf800000;
    uStack_160 = 0x3f800000;
    local_16c = 0xbf800000;
    uStack_168 = 0xc0000000;
    local_15c = 0xff;
    local_154 = 0xffffffff;
    local_14c = -1;
    local_190 = CONCAT71(local_190._1_7_,1);
    lVar7 = FUN_1003e10f0();
    local_190 = CONCAT44(uVar14,(undefined4)local_190);
    local_170 = 0x42c80000;
    local_158 = 0x40000;
    local_148 = (float)(CONCAT13(local_148._3_1_,CONCAT12(*(undefined1 *)(lVar7 + 0xe5),0xc320)) |
                       0x140000);
    uVar9 = (ulong)(3 - uVar1);
    local_198 = lVar6;
    local_188 = fVar16;
    local_184 = uVar15;
    iVar2 = FUN_1003a6ce4(&local_1a0,alStack_e0,uVar9,0);
    if (iVar2 != 0) {
      plVar4 = alStack_e0;
      uVar5 = uVar1;
      do {
        alStack_e0[(ulong)uVar5 + 3] = *plVar4;
        uVar5 = uVar5 + 1;
        uVar9 = uVar9 - 1;
        plVar4 = plVar4 + 1;
      } while (uVar9 != 0);
    }
    uVar1 = iVar2 + uVar1;
  }
  fVar11 = fVar11 * fVar12;
  if ((uVar1 != 0) && (fVar13 = fVar13 - fVar11, 0.0 < fVar13)) {
    fVar12 = fVar13 / (float)uVar1;
    if (fVar12 <= 1.0) {
      fVar12 = 1.0;
    }
    fVar16 = (float)FUN_1003dfe60(lVar6,2,6,0x19,0);
    uVar9 = 0;
    fVar12 = fVar12 + fVar12 * fVar16;
    do {
      local_180 = *(undefined1 *)(lVar6 + 0x300);
      uStack_17e = *(undefined1 *)(alStack_e0[uVar9 + 3] + 0x300);
      local_198 = 0;
      local_190 = 0;
      local_188 = (float)((uint)local_188 & 0xffffff00);
      local_1a0 = &PTR_FUN_101497058;
      local_184 = 0;
      fStack_17c = 0.0;
      uStack_178 = 0;
      uStack_174 = 0;
      local_170 = 0;
      local_16c = 0;
      uStack_168 = 0xf;
      uStack_164 = 0;
      local_14c = DAT_1018589d8;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_17f = local_180;
      local_148 = fVar12;
      FUN_1004966e0(&local_1a0,&DAT_101e47d30);
      fVar13 = fVar13 - fVar12;
      if (fVar13 < 0.0) break;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar1);
  }
  *(float *)(lVar8 + 0x54) = fVar11;
  fVar12 = *(float *)(lVar10 + 0x318);
  fVar11 = (float)FUN_1003dfe60(lVar6,2,7,0x19,0);
  fVar12 = fVar12 - fVar11;
  if (fVar12 <= 0.1) {
    local_184 = *(undefined4 *)(lVar6 + 0x260);
    uVar14 = *(undefined4 *)(lVar10 + 0x30c);
    local_198 = 0;
    local_190 = 0;
    local_188 = (float)((uint)local_188._1_3_ << 8);
    local_1a0 = &PTR_FUN_101496cd8;
    local_180 = (undefined1)uVar14;
    uStack_17f = (undefined1)((uint)uVar14 >> 8);
    uStack_17e = (undefined1)((uint)uVar14 >> 0x10);
    uStack_17d = (undefined1)((uint)uVar14 >> 0x18);
    FUN_100496580(&local_1a0,&DAT_101e47d30);
  }
  else {
    local_184 = *(undefined4 *)(lVar6 + 0x260);
    uVar14 = *(undefined4 *)(lVar10 + 0x30c);
    local_198 = 0;
    local_190 = 0;
    local_188 = (float)((uint)local_188._1_3_ << 8);
    local_1a0 = &PTR_FUN_101497250;
    local_180 = (undefined1)uVar14;
    uStack_17f = (undefined1)((uint)uVar14 >> 8);
    uStack_17e = (undefined1)((uint)uVar14 >> 0x10);
    uStack_17d = (undefined1)((uint)uVar14 >> 0x18);
    fStack_17c = fVar12;
    FUN_100496b60(&local_1a0,&DAT_101e47d30);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == alStack_e0[6]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100434674(long param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0x38);
  fVar2 = (float)FUN_1003dfe60(lVar1,2,4,0x19,0);
  *param_2 = fVar2 * fVar3;
  return;
}




void FUN_1004346c4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_1004346d8(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,2,0x19,0);
  return;
}




void FUN_1004346ec(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_100434700(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,0xb,0x19,0);
  return;
}




void FUN_100434714(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_48 [8];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar6 = *(undefined4 *)(lVar3 + 0x250);
  fVar4 = *(float *)(lVar3 + 0x254);
  uVar7 = *(undefined4 *)(lVar3 + 600);
  fVar5 = *(float *)(lVar3 + 0x2ec);
  FUN_1003a4e5c(auStack_48,PTR_s_Buff_CelesteStar_HeroicPerk_10185c898);
  lVar2 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar2 + 0xe5);
  *(long *)(param_2 + 8) = lVar3;
  *(undefined1 *)(param_2 + 0x10) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar6;
  *(float *)(param_2 + 0x18) = fVar5 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar7;
  *(char **)(param_2 + 0x20) = "CelesteStar";
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0xbf800000c0000000;
  *(undefined8 *)(param_2 + 0x30) = 0xbf80000040800000;
  *(undefined4 *)(param_2 + 0x40) = 0x3f800000;
  *(undefined1 *)(param_2 + 0x44) = 0xff;
  *(undefined8 *)(param_2 + 0x50) = 0xffffffff00000000;
  *(undefined8 *)(param_2 + 0x48) = 0xffffffff00000000;
  *(undefined2 *)(param_2 + 0x58) = 0xc110;
  *(byte *)(param_2 + 0x5a) = bVar1 | 0x14;
  return;
}




void FUN_1004347d8(long *param_1,long param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar6 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  FUN_1003461dc(lVar6);
  uVar4 = FUN_100345d90();
  uVar10 = *(undefined4 *)(lVar6 + 0x250);
  fVar7 = *(float *)(lVar6 + 0x254);
  uVar11 = *(undefined4 *)(lVar6 + 600);
  fVar9 = *(float *)(lVar6 + 0x2ec);
  puVar5 = (ushort *)(param_2 + 0x58);
  uVar2 = *puVar5;
  *(undefined8 *)(param_2 + 8) = uVar4;
  uVar1 = *(undefined1 *)(param_2 + 0x5a);
  *puVar5 = uVar2 & 0xff8f | 0x20;
  *(undefined4 *)(param_2 + 0x48) = 0x40000;
  fVar8 = (float)FUN_1003dfe60(uVar4,0,7,0x19,0);
  *(undefined4 *)(param_2 + 0x14) = uVar10;
  *(float *)(param_2 + 0x18) = fVar9 + fVar7;
  *(undefined4 *)(param_2 + 0x1c) = uVar11;
  *(float *)(param_2 + 0x30) = fVar8 * fVar8;
  uVar3 = CONCAT12(uVar1,uVar2) & 0xfb7f8f;
  *(char *)(param_2 + 0x5a) = (char)(uVar3 >> 0x10);
  *puVar5 = (ushort)uVar3 | 0x8020;
  return;
}




undefined1  [16] FUN_10043489c(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10));
  uVar2 = FUN_100345d90();
  auVar4 = FUN_1003dfe60(uVar2,0,0,0x19,0);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  iVar1 = FUN_1003a47d0(uVar2,PTR_s_Buff_Celeste_Talent_GalaxyCollap_10185c8f0);
  if (iVar1 != 0) {
    local_40[0] = DAT_101d90a74;
    fVar3 = (float)FUN_1003dfee8(uVar2,local_40,0,9);
    uVar5 = (ulong)(uint)(fVar3 * auVar4._0_4_);
    uVar6 = 0;
  }
  iVar1 = FUN_1003a47d0(uVar2,PTR_s_Buff_Celeste_Talent_YoungStar_10185c8e8);
  if (iVar1 != 0) {
    local_38[0] = DAT_101d90a88;
    fVar3 = (float)FUN_1003dfee8(uVar2,local_38,0,9);
    uVar5 = (ulong)(uint)(fVar3 * (float)uVar5);
    uVar6 = 0;
  }
  if (*(char *)(param_2 + 0x2f6) < '\0') {
    fVar3 = (float)FUN_1003dfe60(uVar2,0,5,0x19,0);
    uVar5 = (ulong)(uint)(fVar3 * (float)uVar5);
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




float FUN_100434990(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_50 [2];
  undefined4 local_48 [2];
  
  FUN_1003461dc(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10));
  uVar2 = FUN_100345d90();
  lVar5 = *param_1;
  uVar1 = FUN_1004d2524("startTime");
  uVar3 = FUN_100015208("startTime",uVar1,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x10))(lVar5 + 0x168,uVar3);
  fVar9 = *pfVar4;
  fVar6 = (float)FUN_100032228();
  fVar7 = (float)FUN_1003dfe60(uVar2,0,6,0x19,0);
  fVar8 = 0.0;
  if (fVar7 < fVar6 - fVar9) {
    fVar6 = (float)FUN_1003dfe60(0,uVar2,0,0,0x19,0);
    local_48[0] = DAT_101d90a88;
    fVar7 = (float)FUN_1003dfee8(uVar2,local_48,1,9);
    local_50[0] = DAT_101d90a88;
    fVar8 = (float)FUN_1003dfee8(uVar2,local_50,2,9);
    fVar8 = (fVar7 * fVar6) / fVar8;
  }
  return fVar8;
}




void FUN_100434ab4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




void FUN_100434ac8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001a988();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100434b18(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100016cb0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100434b68(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,8,0x19,0);
  return;
}




void FUN_100434b7c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90a88;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_100434bb0(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined **local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined1 local_7f0;
  undefined4 local_7ec;
  undefined4 uStack_7e8;
  int local_7e4;
  undefined8 local_7e0;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined **local_7b0;
  long local_7a8;
  undefined1 local_7a0;
  float local_79c;
  float fStack_798;
  float local_794;
  char *local_790;
  undefined8 local_788;
  float local_780;
  undefined8 local_77c;
  undefined8 uStack_774;
  undefined1 local_76c;
  undefined8 local_768;
  undefined8 uStack_760;
  undefined2 local_758;
  byte local_756;
  undefined8 local_740;
  undefined **local_738;
  long local_730;
  undefined8 local_728;
  float local_720;
  float local_71c;
  undefined8 local_718;
  undefined8 local_710;
  float local_708;
  undefined8 local_704;
  undefined8 uStack_6fc;
  undefined1 local_6f4;
  undefined4 local_6f0;
  undefined4 uStack_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined2 local_6e0;
  byte local_6de;
  long local_6d8;
  long local_6d0 [200];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_6d8);
  lVar10 = *(long *)(*(long *)(local_6d8 + 0x10) + 0x10);
  lVar6 = FUN_100345d90(*(undefined4 *)(local_6d8 + 0x308));
  fVar14 = *(float *)(lVar10 + 0x250);
  fVar15 = *(float *)(lVar10 + 600);
  fVar16 = *(float *)(lVar10 + 0x2ec) + *(float *)(lVar10 + 0x254);
  fVar12 = (float)FUN_1003dfe60(lVar6,0,9,0x19,0);
  uVar7 = FUN_1003a47d0(lVar6,PTR_s_Buff_Celeste_Talent_GalaxyCollap_10185c8f0);
  if ((uVar7 & 1) != 0) {
    local_7b0 = &PTR_FUN_101499960;
    local_788 = 0;
    uStack_774 = 0x3f800000bf800000;
    local_77c = 0xc0000000bf800000;
    local_76c = 0xff;
    uStack_760 = 0xffffffff00000000;
    local_768 = 0xffffffff00000000;
    local_7a0 = 1;
    lVar8 = FUN_1003e10f0();
    local_780 = fVar12 * fVar12;
    local_790 = "CelesteStar";
    local_758 = 0xd110;
    local_756 = *(byte *)(lVar8 + 0xe5) | 0x14;
    local_7a8 = lVar6;
    local_79c = fVar14;
    fStack_798 = fVar16;
    local_794 = fVar15;
    uVar3 = FUN_1003a6ce4(&local_7b0,local_6d0,200,0);
    if (uVar3 != 0) {
      uVar7 = (ulong)uVar3;
      plVar11 = local_6d0;
      do {
        lVar8 = *plVar11;
        uVar9 = FUN_1003a47d0(lVar8,PTR_s_Buff_CelesteStar_Supernova_10185c8b0);
        if (((uVar9 & 1) == 0) &&
           (uVar9 = FUN_1003a47d0(lVar8,PTR_s_Buff_DelayedKill_10185bd70),
           puVar2 = PTR_s_Buff_CelesteStar_Supernova_10185c8b0, (uVar9 & 1) == 0)) {
          uVar4 = *(undefined4 *)(lVar6 + 0x260);
          uVar1 = *(undefined4 *)(lVar8 + 0x260);
          local_710._4_4_ = FUN_1003dfe60(lVar6,0,8,0x19,0);
          local_730 = 0;
          local_728 = 0;
          local_720 = (float)((uint)local_720 & 0xffffff00);
          local_738 = &PTR_FUN_101496b18;
          local_718 = CONCAT44(DAT_1018589d8,uVar1);
          local_710._0_4_ = 0;
          local_708 = 1.4013e-45;
          local_6f0 = 0;
          uStack_6ec = 0;
          local_6e8 = DAT_101dc0b88;
          DAT_1018589d8 = DAT_1018589d8 + 1;
          local_71c = (float)uVar4;
          uVar4 = FUN_1003d4e0c(puVar2);
          local_710 = CONCAT44(local_710._4_4_,uVar4);
          (*(code *)local_738[4])(&local_738,&DAT_101e47d30);
        }
        plVar11 = plVar11 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  local_738 = &PTR_FUN_101499960;
  local_718 = 0;
  local_710 = 0;
  uStack_6fc = 0x3f800000bf800000;
  local_704 = 0xc0000000bf800000;
  local_6f4 = 0xff;
  uStack_6ec = 0xffffffff;
  local_6e8 = 0;
  local_6e4 = 0xffffffff;
  local_728 = CONCAT71(local_728._1_7_,1);
  lVar8 = FUN_1003e10f0();
  local_6f0 = 0x40000;
  local_728 = CONCAT44(fVar14,(undefined4)local_728);
  local_6de = *(byte *)(lVar8 + 0xe5) | 0x10;
  local_6e0 = 0xc120;
  local_730 = lVar6;
  local_720 = fVar16;
  local_71c = fVar15;
  local_708 = fVar12 * fVar12;
  uVar3 = FUN_1003a6ce4(&local_738,local_6d0,200,0);
  if (uVar3 != 0) {
    uVar7 = (ulong)uVar3;
    plVar11 = local_6d0;
    do {
      lVar8 = *plVar11;
      if (lVar8 == 0) break;
      uVar9 = FUN_1003dfe60(lVar6,0,1,0x19,0);
      iVar5 = FUN_1003a47d0(lVar6,PTR_s_Buff_Celeste_Talent_GalaxyCollap_10185c8f0);
      if (iVar5 != 0) {
        local_7b0 = (undefined **)CONCAT44(local_7b0._4_4_,DAT_101d90a74);
        fVar12 = (float)FUN_1003dfee8(lVar6,&local_7b0,1,9);
        uVar9 = (ulong)(uint)(fVar12 * (float)uVar9);
      }
      if (*(char *)(*plVar11 + 0x2f6) < '\0') {
        fVar12 = (float)FUN_1003dfe60(lVar6,0,5,0x19,0);
        uVar9 = (ulong)(uint)(fVar12 * (float)uVar9);
      }
      fVar16 = *(float *)(lVar8 + 0x250) - *(float *)(lVar10 + 0x250);
      fVar12 = *(float *)(lVar8 + 600) - *(float *)(lVar10 + 600);
      fVar13 = fVar16 * fVar16 + fVar12 * fVar12;
      if (1e-08 <= fVar13) {
        fVar13 = SQRT(fVar13);
        local_740 = CONCAT44(fVar12 / fVar13,fVar16 / fVar13);
      }
      else {
        local_740 = DAT_101873a50;
      }
      FUN_1003462a0(uVar9,&local_7b0,*(undefined4 *)(lVar6 + 0x260),*(undefined4 *)(lVar8 + 0x260),1
                    ,2,&local_740,**(undefined8 **)(local_6d8 + 0x40),0,1);
      FUN_10010cbe0(&local_7b0);
      local_7d4 = _atan2f(fVar15 - *(float *)(*plVar11 + 600),fVar14 - *(float *)(*plVar11 + 0x250))
      ;
      local_7ec = *(undefined4 *)(lVar6 + 0x260);
      uStack_7e8 = *(undefined4 *)(lVar8 + 0x260);
      local_800 = 0;
      uStack_7f8 = 0;
      local_7f0 = 0;
      local_808 = &PTR_FUN_101496b18;
      local_7e4 = DAT_1018589d8;
      local_7e0 = 0x3f80000000000000;
      local_7d8 = 1;
      local_7c8 = 0;
      local_7d0 = 0;
      local_7c0 = 0;
      local_7b8 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uVar4 = FUN_1003d4e0c(PTR_s_Buff_Celeste_HitByStar_10185c8b8);
      local_7e0 = CONCAT44(local_7e0._4_4_,uVar4);
      (*(code *)local_808[4])(&local_808,&DAT_101e47d30);
      uVar7 = uVar7 - 1;
      plVar11 = plVar11 + 1;
    } while (uVar7 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100435078(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  float fVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined **local_860;
  undefined8 local_858;
  undefined8 uStack_850;
  undefined1 local_848;
  undefined4 local_844;
  undefined4 uStack_840;
  int local_83c;
  undefined8 local_838;
  undefined4 local_830;
  undefined8 local_82c;
  undefined8 uStack_824;
  undefined8 local_818;
  undefined4 local_810;
  undefined **local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined1 local_7f0;
  undefined4 local_7ec;
  undefined4 uStack_7e8;
  int local_7e4;
  undefined4 local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined8 local_7d4;
  undefined8 uStack_7cc;
  undefined8 local_7c0;
  undefined4 local_7b8;
  undefined4 local_7b0 [28];
  undefined8 local_740;
  undefined **local_738;
  long local_730;
  byte local_728;
  undefined4 local_724;
  float local_720;
  undefined4 local_71c;
  undefined8 local_718;
  undefined8 uStack_710;
  float local_708;
  undefined8 local_704;
  undefined8 uStack_6fc;
  undefined1 local_6f4;
  undefined4 local_6f0;
  undefined8 local_6ec;
  undefined4 local_6e4;
  undefined2 local_6e0;
  byte local_6de;
  long local_6d8;
  long local_6d0 [200];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_6d8);
  lVar7 = *(long *)(*(long *)(local_6d8 + 0x10) + 0x10);
  FUN_1003461dc(lVar7);
  lVar5 = FUN_100345d90();
  local_738 = &PTR_FUN_101499960;
  local_718 = 0;
  uStack_710 = 0;
  uStack_6fc = 0x3f800000bf800000;
  local_704 = 0xc0000000bf800000;
  local_6f4 = 0xff;
  local_6ec = 0xffffffff;
  local_6e4 = 0xffffffff;
  local_728 = local_728 & 0xfc | 1;
  lVar6 = FUN_1003e10f0();
  bVar1 = *(byte *)(lVar6 + 0xe5);
  uVar14 = *(undefined4 *)(lVar7 + 0x250);
  fVar10 = *(float *)(lVar7 + 0x254);
  uVar15 = *(undefined4 *)(lVar7 + 600);
  fVar12 = *(float *)(lVar7 + 0x2ec);
  local_6f0 = 0x40000;
  local_730 = lVar5;
  local_708 = (float)FUN_1003dfe60(lVar5,1,5,0x19,0);
  local_708 = local_708 * local_708;
  local_6de = local_6de & 0xe0 | bVar1 | 0x10;
  local_6e0 = 0xc120;
  local_724 = uVar14;
  local_720 = fVar12 + fVar10;
  local_71c = uVar15;
  uVar3 = FUN_1003a6ce4(&local_738,local_6d0,200,0);
  if (uVar3 != 0) {
    uVar8 = (ulong)uVar3;
    plVar9 = local_6d0;
    do {
      lVar6 = *(long *)(*(long *)(local_6d8 + 0x10) + 0x10);
      fVar12 = *(float *)(*plVar9 + 0x250) - *(float *)(lVar6 + 0x250);
      fVar10 = *(float *)(*plVar9 + 600) - *(float *)(lVar6 + 600);
      fVar13 = fVar12 * fVar12 + fVar10 * fVar10;
      if (1e-08 <= fVar13) {
        fVar13 = SQRT(fVar13);
        local_740 = CONCAT44(fVar10 / fVar13,fVar12 / fVar13);
      }
      else {
        local_740 = DAT_101873a50;
      }
      uVar11 = FUN_1003dfe60(lVar5,1,0,0x19,0);
      puVar2 = PTR_s_Buff_Celeste_Talent_CoreLeafClov_10185a568;
      lVar6 = FUN_100345d90(*(undefined4 *)(lVar5 + 0x260));
      if ((lVar6 != 0) && (iVar4 = FUN_1003a47d0(lVar6,puVar2), iVar4 != 0)) {
        local_7b0[0] = DAT_101d90a7c;
        fVar10 = (float)FUN_1003dfee8(lVar5,local_7b0,0,9);
        uVar11 = (ulong)(uint)(fVar10 * (float)uVar11);
      }
      FUN_1003462a0(uVar11,local_7b0,*(undefined4 *)(lVar5 + 0x260),*(undefined4 *)(*plVar9 + 0x260)
                    ,1,2,&local_740,**(undefined8 **)(local_6d8 + 0x40),0,1);
      FUN_10010cbe0(local_7b0);
      puVar2 = PTR_s_Buff_Stunned_10185a208;
      uVar14 = *(undefined4 *)(lVar5 + 0x260);
      uVar15 = *(undefined4 *)(*plVar9 + 0x260);
      local_7dc = FUN_1003dfe60(lVar5,1,1,0x19,0);
      local_800 = 0;
      uStack_7f8 = 0;
      local_7f0 = 0;
      local_808 = &PTR_FUN_101496b18;
      local_7e4 = DAT_1018589d8;
      local_7e0 = 0;
      local_7d8 = 1;
      local_7c0 = 0;
      local_7d4 = 0;
      uStack_7cc = 0;
      local_7b8 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_7ec = uVar14;
      uStack_7e8 = uVar15;
      local_7e0 = FUN_1003d4e0c(puVar2);
      (*(code *)local_808[4])(&local_808,&DAT_101e47d30);
      local_844 = *(undefined4 *)(lVar5 + 0x260);
      uStack_840 = *(undefined4 *)(*plVar9 + 0x260);
      local_858 = 0;
      uStack_850 = 0;
      local_848 = 0;
      local_860 = &PTR_FUN_101496b18;
      local_83c = DAT_1018589d8;
      local_838 = 0x3f80000000000000;
      local_830 = 1;
      local_818 = 0;
      local_82c = 0;
      uStack_824 = 0;
      local_810 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uVar14 = FUN_1003d4e0c(PTR_s_Buff_Celeste_HitByCoreCollapse_10185c8c8);
      local_838 = CONCAT44(local_838._4_4_,uVar14);
      (*(code *)local_860[4])(&local_860,&DAT_101e47d30);
      uVar8 = uVar8 - 1;
      plVar9 = plVar9 + 1;
    } while (uVar8 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100435448(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  int local_2c;
  undefined4 uStack_28;
  long local_20;
  long lStack_18;
  
  FUN_10042e1f0(param_1,&lStack_18,&local_20);
  local_2c = *(int *)(local_20 + 0x18);
  if (((local_2c == *(int *)(*(long *)(*(long *)(lStack_18 + 0x10) + 0x10) + 0x260)) &&
      (lVar1 = *(long *)(local_20 + 0x28), lVar1 != 0)) &&
     (((*(uint *)(lVar1 + 0x2f4) >> 0xc & 1) != 0 ||
      ((((*(uint *)(lVar1 + 0x2f4) & 1) != 0 && ((*(byte *)(local_20 + 0xc) >> 4 & 1) == 0)) &&
       ((uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar2 == 0x1f ||
        (1 < *(ushort *)(lVar1 + uVar2 * 0x38 + 0x90) - 3)))))))) {
    uStack_28 = *(undefined4 *)(lStack_18 + 0x30c);
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_48 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_48,&DAT_101e47d30);
  }
  return;
}




ushort * FUN_1004354f8(undefined8 param_1)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)DAT_101e94150;
  if (uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar1 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar1 * 0x98) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_10149bac8;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar2);
  return puVar2;
}




ushort * FUN_1004355d8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_10149bc88;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




ushort * FUN_1004356bc(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_10149bd08;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_1004357a0(long *param_1,undefined8 param_2,float *param_3,undefined4 *param_4)

{
  *param_4 = 0x3f800000;
  *param_3 = 2.0 / *(float *)(*param_1 + 0x31c);
  return;
}




void FUN_1004357c0(undefined8 param_1)

{
  undefined **local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  long local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_18);
    local_1c = *(undefined4 *)(local_18 + 0x32c);
    local_24 = *(undefined4 *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260);
    uStack_20 = *(undefined4 *)(local_18 + 0x30c);
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_40 = &PTR_FUN_101497250;
    FUN_100496b60(&local_40,&DAT_101e47d30);
  }
  return;
}




ushort * FUN_100435830(undefined8 param_1)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)DAT_101e94150;
  if (uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar1 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar1 * 0x98) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_10149bea8;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar2);
  return puVar2;
}




bool FUN_100435910(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return false;
  }
  return *(short *)(lVar1 + uVar2 * 0x38 + 0x90) == 5;
}




void FUN_10043594c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001b500();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




ushort * FUN_10043599c(undefined8 param_1)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)DAT_101e94150;
  if (uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar1 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar1 * 0x98) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_10149bd88;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar2);
  return puVar2;
}




void FUN_100435a7c(undefined8 param_1,uint param_2,long param_3,long param_4)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  
  if ((int)param_2 < 0x20) {
    if (param_2 != 0x10) {
      if (param_2 == 0x18) {
        lVar1 = FUN_10042e498(param_1);
        bVar5 = false;
        uVar6 = 8;
      }
      else {
LAB_100435aec:
        lVar1 = FUN_10042e498(param_1);
        uVar6 = 0;
        uVar4 = 0;
        bVar5 = true;
        if ((param_2 >> 3 & 1) == 0) goto joined_r0x000100435c20;
      }
      plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
      (**(code **)(*plVar2 + 0x50))();
      uVar4 = uVar6;
      goto joined_r0x000100435c20;
    }
    uVar4 = 9;
  }
  else if (param_2 == 0x23) {
    uVar4 = 6;
  }
  else {
    if (param_2 != 0x20) goto LAB_100435aec;
    uVar4 = 0xb;
  }
  lVar1 = FUN_10042e498(param_1);
  bVar5 = false;
joined_r0x000100435c20:
  if ((param_2 >> 4 & 1) != 0) {
    plVar2 = (long *)FUN_10045309c(lVar1 + 0x10);
    (**(code **)(*plVar2 + 0x58))();
  }
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  lVar1 = FUN_10042e2c8(param_1);
  lVar1 = lVar1 + 0x10;
  lVar3 = FUN_10049b9b4(lVar1);
  *(short *)(lVar3 + 0x10) = (short)param_2;
  if (param_3 != 0) {
    plVar2 = (long *)FUN_100441e68(lVar1);
    if (param_4 == 0) {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x60))();
    }
    else {
      plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,param_4);
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,param_3);
    plVar2 = (long *)(**(code **)(*plVar2 + 0x90))();
    (**(code **)(*plVar2 + 0xb0))(plVar2,1);
  }
  if (!bVar5) {
    plVar2 = (long *)FUN_10049c148(lVar1);
                    /* WARNING: Could not recover jumptable at 0x000100435c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,uVar4);
    return;
  }
  return;
}




void FUN_100435c28(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  ulong uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar6 = (ulong)*(uint *)(param_1 + 0x308);
  iVar1 = FUN_100432d40();
  if ((iVar1 != 0) && (iVar1 = FUN_100432d40(param_1), iVar1 != -1)) {
    uVar6 = FUN_100432d40(param_1);
  }
  lVar3 = FUN_100345d90(uVar6);
  uVar7 = *(undefined4 *)(lVar3 + 0x250);
  uVar8 = *(undefined4 *)(lVar3 + 600);
  uVar2 = FUN_1004d2524("fearPositionX");
  uVar4 = FUN_100015208("fearPositionX",uVar2,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
  *puVar5 = uVar7;
  uVar2 = FUN_1004d2524("fearPositionZ");
  uVar4 = FUN_100015208("fearPositionZ",uVar2,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar4);
  *puVar5 = uVar8;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100435d08(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_80 [3];
  float fStack_74;
  float local_70;
  float fStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined2 local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  FUN_10042ecbc(param_1,&local_48);
  lVar1 = local_48;
  lVar6 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  lVar5 = local_48 + 0x168;
  uVar2 = FUN_1004d2524("fearPositionX");
  uVar3 = FUN_100015208("fearPositionX",uVar2,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar1 + 0x168) + 0x10))(lVar5,uVar3);
  lVar1 = local_48;
  fVar11 = *pfVar4;
  lVar5 = local_48 + 0x168;
  uVar2 = FUN_1004d2524("fearPositionZ");
  uVar3 = FUN_100015208("fearPositionZ",uVar2,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar1 + 0x168) + 0x10))(lVar5,uVar3);
  local_80[0] = *(float *)(lVar6 + 0x250);
  local_80[2] = *(float *)(lVar6 + 600);
  fVar7 = fVar11 - local_80[0];
  fVar8 = *pfVar4 - local_80[2];
  if (fVar7 * fVar7 + fVar8 * fVar8 <= 0.0) {
    fVar7 = *(float *)(lVar6 + 0x240);
    fVar8 = *(float *)(lVar6 + 0x244);
    fVar10 = *(float *)(lVar6 + 0x248);
    fVar11 = fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10;
    if (1e-08 <= fVar11) {
      fVar11 = 1.0 / SQRT(fVar11);
      fVar7 = fVar7 * fVar11;
      fVar8 = fVar8 * fVar11;
      fVar10 = fVar10 * fVar11;
    }
    else {
      fVar7 = 1.0;
      fVar8 = 0.0;
      fVar10 = 0.0;
    }
    fVar11 = fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10;
    if (1e-08 <= fVar11) {
      fVar9 = 1.0 / SQRT(fVar11);
      fVar11 = -fVar7 * fVar9;
      local_70 = -fVar8 * fVar9;
      fVar9 = -fVar10 * fVar9;
      goto LAB_100435ec4;
    }
  }
  else {
    fVar11 = local_80[0] - fVar11;
    fVar9 = local_80[2] - *pfVar4;
    fVar7 = fVar11 * fVar11 + fVar9 * fVar9;
    if (1e-08 <= fVar7) {
      fVar7 = SQRT(fVar7);
      fVar11 = fVar11 / fVar7;
      local_70 = 0.0;
      fVar9 = fVar9 / fVar7;
      goto LAB_100435ec4;
    }
  }
  fVar11 = 1.0;
  local_70 = 0.0;
  fVar9 = 0.0;
LAB_100435ec4:
  local_70 = local_70 + local_70;
  fStack_74 = local_80[0] + fVar11 * 2.0;
  fStack_6c = local_80[2] + fVar9 * 2.0;
  lVar5 = *(long *)(lVar6 + 0x18);
  uStack_64 = 0;
  if (lVar5 != 0) {
    do {
      if (*(int *)(*(long *)(lVar5 + 8) + 0xa4) == ram0x0001018672a0) {
        uStack_64 = *(byte *)(lVar5 + 0x818) >> 3 & 3;
        goto LAB_100435f08;
      }
      lVar5 = *(long *)(lVar5 + 0x20);
    } while (lVar5 != 0);
    uStack_64 = 0;
  }
LAB_100435f08:
  local_80[1] = 0.0;
  local_68 = 0;
  local_60 = 0;
  FUN_1003a7f34(local_80,auStack_58,0);
  FUN_1000f3e00(*(undefined8 *)(*(long *)(local_48 + 0x10) + 0x10),auStack_58,0);
  return;
}




void FUN_100435f60(long param_1)

{
  long lVar1;
  undefined4 local_20;
  float local_1c;
  undefined4 uStack_18;
  
  if (DAT_101d23a38 != '\0') {
    lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    local_20 = *(undefined4 *)(lVar1 + 0x250);
    uStack_18 = *(undefined4 *)(lVar1 + 600);
    local_1c = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
    FUN_1000f3e00(lVar1,&local_20,0);
  }
  return;
}




ushort * FUN_100435fb4(undefined8 param_1)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = (ulong)DAT_101e94150;
  if (uVar1 == 0xffff) {
    puVar2 = (ushort *)0x0;
  }
  else {
    puVar2 = &DAT_101e48150 + uVar1 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar2;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    *(undefined8 *)(&DAT_101e48158 + uVar1 * 0x98) = 0;
    *(undefined8 *)(&DAT_101e48160 + uVar1 * 0x98) = 0;
    *(undefined ***)puVar2 = &PTR_FUN_101498178;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar2);
  return puVar2;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100436094(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  undefined4 local_68;
  uint uStack_64;
  undefined2 local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_48);
    lVar1 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
    fVar4 = *(float *)(lVar1 + 0x250);
    fVar5 = *(float *)(lVar1 + 600);
    fVar6 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
    fVar2 = (float)FUN_100432da4();
    fVar3 = (float)FUN_100432e08(local_48);
    fStack_74 = fVar4 + fVar2 * 2.0;
    fStack_6c = fVar5 + fVar3 * 2.0;
    lVar1 = *(long *)(lVar1 + 0x18);
    uStack_64 = 0;
    if (lVar1 != 0) {
      do {
        if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) {
          uStack_64 = *(byte *)(lVar1 + 0x818) >> 3 & 3;
          goto LAB_100436130;
        }
        lVar1 = *(long *)(lVar1 + 0x20);
      } while (lVar1 != 0);
      uStack_64 = 0;
    }
LAB_100436130:
    local_68 = 0;
    local_60 = 0;
    local_80 = fVar4;
    fStack_7c = fVar6;
    local_78 = fVar5;
    local_70 = fVar6;
    FUN_1003a7f34(&local_80,auStack_58,0);
    FUN_1000f3e00(*(undefined8 *)(*(long *)(local_48 + 0x10) + 0x10),auStack_58,0);
  }
  return;
}




void FUN_100436184(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149caf8;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10043626c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001bbe0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004362bc(void)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_10042ea44();
  plVar2 = (long *)FUN_100441e68(lVar1 + 0x10);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x68))(plVar2,"CenterBody");
  plVar2 = (long *)(**(code **)(*plVar2 + 0x48))(plVar2,"Effect_TalentStandard");
                    /* WARNING: Could not recover jumptable at 0x000100436308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x78))(plVar2,1);
  return;
}




void FUN_10043630c(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  fVar3 = (float)NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  fVar2 = DAT_101e94260;
  if (DAT_101e94260 <= fVar3) {
    fVar2 = fVar3;
  }
  fVar3 = (float)FUN_100432da4();
  *param_3 = fVar2 * fVar3;
  return;
}




ushort * FUN_100436378(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_10149bcc8;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




ushort * FUN_10043645c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498828;
    (&DAT_101e48160)[lVar1] = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




ushort * FUN_100436540(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48198 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481b0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481c0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481b8 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498ac8;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48198 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a0 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e481b0 + lVar1) = 0xbf800000;
    *(undefined8 *)(&DAT_101e481b4 + lVar1) = DAT_101dc1cb8;
    *(int *)(&DAT_101e481bc + lVar1) = (int)(&DAT_101e48160 + lVar1);
    *(undefined4 *)(&DAT_101e481c0 + lVar1) = 0xff000000;
    *(ushort *)(&DAT_101e481c4 + lVar1) = *(ushort *)(&DAT_101e481c4 + lVar1) & 0xf800 | 0x30;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




ushort * FUN_100436680(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_1014989b8;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0xffffffff00000000;
    (&DAT_101e48170)[lVar1] = (&DAT_101e48170)[lVar1] & 0xfe;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




ushort * FUN_100436780(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = &DAT_101e48150 + uVar2 * 0x4c;
    uVar3 = 0xffff;
    if (DAT_101e94150 != DAT_101e94152) {
      uVar3 = *puVar4;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    DAT_101e94150 = uVar3;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined ***)puVar4 = &PTR_FUN_1014983e8;
    *(undefined4 *)(&DAT_101e48160 + lVar1) = 0xffff;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar4);
  return puVar4;
}




void FUN_100436864(undefined8 param_1)

{
  long local_20;
  long lStack_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&lStack_18,&local_20);
    if (*(int *)(local_20 + 0x18) == *(int *)(*(long *)(*(long *)(lStack_18 + 0x10) + 0x10) + 0x260)
       ) {
      *(undefined1 *)(local_20 + 0x58) = 0;
    }
  }
  return;
}




ushort * FUN_1004368b4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498708;
    (&DAT_101e48160)[lVar1] = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_100436998(undefined8 param_1)

{
  undefined1 auStack_18 [8];
  
  FUN_10042ecbc(param_1,auStack_18);
  return;
}




bool FUN_1004369b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x428);
  if (lVar1 != 0) {
    return *(float *)(*(long *)(*(long *)(lVar1 + 0x20) + 0x40) + 0x308) < *(float *)(lVar1 + 0x54);
  }
  return false;
}




ushort * FUN_1004369e4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498368;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    (&DAT_101e48168)[lVar1] = 0xff;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_100436ae4(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  *param_3 = DAT_101e94260 * 0.25;
  return;
}




void FUN_100436b30(undefined8 param_1,long param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(param_2 + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  *param_3 = DAT_101e94260 * 0.1;
  return;
}




void FUN_100436b80(undefined4 param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  undefined **local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  int local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  int local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 local_78;
  undefined4 local_70;
  int local_68 [2];
  
  FUN_1003a4e5c(local_68,*param_4);
  local_a4 = *(undefined4 *)(param_3 + 0x260);
  local_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  local_c0 = &PTR_FUN_101496b18;
  local_9c = DAT_1018589d8;
  local_90 = 1;
  local_78 = 0;
  local_84 = 0;
  local_8c = 0;
  local_70 = DAT_101dc0b88;
  DAT_1018589d8 = DAT_1018589d8 + 1;
  uStack_a0 = local_a4;
  local_94 = param_1;
  local_98 = FUN_1003d4e0c(PTR_s_Buff_Phinn_ResistCC_SlowedInstea_10185cc50);
  FUN_10049639c(&local_c0,&DAT_101e47d30);
  if (((((local_68[0] == DAT_101d3e6d4) || (local_68[0] == DAT_101d3e6e0)) ||
       (local_68[0] == DAT_101d3e788)) ||
      ((local_68[0] == DAT_101d3e704 || (local_68[0] == DAT_101d3e78c)))) ||
     ((local_68[0] == DAT_101d3e790 ||
      ((local_68[0] == DAT_101d3e794 || (local_68[0] == DAT_101d3e798)))))) {
    puVar1 = (undefined4 *)(param_3 + 0x260);
    if (param_2 != 0) {
      puVar1 = (undefined4 *)(param_2 + 0x260);
    }
    local_fc = *puVar1;
    uStack_f8 = *(undefined4 *)(param_3 + 0x260);
    local_110 = 0;
    uStack_108 = 0;
    local_100 = 0;
    local_118 = &PTR_FUN_101496b18;
    local_f4 = DAT_1018589d8;
    local_e8 = 1;
    local_d0 = 0;
    local_dc = 0;
    local_e4 = 0;
    local_c8 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_ec = param_1;
    local_f0 = FUN_1003d4e0c(PTR_s_Buff_Silence_10185a560);
    FUN_10049639c(&local_118,&DAT_101e47d30);
  }
  return;
}




void FUN_100436d4c(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100436d58(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x19,0);
  return;
}




void FUN_100436d6c(undefined8 param_1)

{
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_28;
  undefined4 local_20;
  long local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_18);
    local_54 = *(undefined4 *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260);
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    local_70 = &PTR_FUN_101496b18;
    local_4c = DAT_1018589d8;
    local_44 = 0x1bf800000;
    local_28 = 0;
    local_34 = 0;
    local_3c = 0;
    local_20 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    uStack_50 = local_54;
    local_48 = FUN_1003d4e0c(PTR_s_Buff_Phinn_Perk_DefenseBonus_Per_10185cc60);
    FUN_10049639c(&local_70,&DAT_101e47d30);
  }
  return;
}




ushort * FUN_100436e1c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498568;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0x40000002d;
    *(undefined4 *)(&DAT_101e48168 + lVar1) = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




float FUN_100436f10(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  plVar1 = (long *)(lVar3 + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8);
  fVar4 = 0.0;
  if ((*(long *)(lVar2 + 0x60) != 0) &&
     (fVar4 = 0.0, *(long *)(*(long *)(lVar2 + 0x60) + 0x1f8) != 0)) {
    fVar4 = (float)FUN_1003ad218();
  }
  fVar5 = (float)FUN_1003dfe60(lVar3,2,5,0x19,0);
  return fVar4 - fVar4 * fVar5;
}




void FUN_100436f98(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float *pfVar7;
  long lVar8;
  float fVar9;
  long local_50;
  long local_48;
  
  FUN_10042e1f0(param_1,&local_48,&local_50);
  lVar8 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  fVar9 = (float)FUN_100032228();
  puVar2 = PTR_s_grace_period_10185d5a0;
  uVar5 = FUN_1004d2524(PTR_s_grace_period_10185d5a0);
  uVar6 = FUN_100015208(puVar2,uVar5,0x12345678);
  pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar6);
  if (*pfVar7 <= fVar9) {
    iVar1 = *(int *)(lVar8 + 0x260);
    if (*(int *)(local_50 + 0x10) == iVar1) {
      bVar3 = *(int *)(local_50 + 8) != 3;
    }
    else {
      bVar3 = false;
    }
    bVar4 = false;
    if (*(long *)(local_50 + 0x28) != 0) {
      bVar4 = (*(byte *)(*(long *)(local_50 + 0x28) + 0x2f4) & 0x10) == 0;
    }
    if (*(int *)(local_50 + 0x18) == iVar1) {
      if (!(bool)((*(byte *)(local_50 + 0xc) & 0x10) == 0 & bVar4) && !bVar3) {
        return;
      }
    }
    else if (!bVar3) {
      return;
    }
    FUN_1004370a0(local_48);
  }
  return;
}




void FUN_1004370a0(long param_1)

{
  undefined **local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  if (DAT_101d23a38 != '\0') {
    local_1c = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
    uStack_18 = *(undefined4 *)(param_1 + 0x30c);
    local_30 = 0;
    uStack_28 = 0;
    local_20 = 0;
    local_38 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_38,&DAT_101e47d30);
  }
  return;
}




bool FUN_1004370fc(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if ((*(int *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260) == *(int *)(param_1 + 0x308))
     && (*(char *)(lVar1 + 0x8a) != '\0')) {
    return false;
  }
  if (*(char *)(lVar1 + 0x7e) != '\0') {
    return true;
  }
  return *(char *)(lVar1 + 0x8e) != '\0';
}




void FUN_100437148(undefined8 param_1)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  bool bVar10;
  long lVar11;
  uint uVar12;
  undefined **local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  int iStack_80;
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_58;
  undefined4 local_50;
  long local_48;
  
  FUN_10042ecbc(param_1,&local_48);
  lVar11 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  lVar7 = *(long *)(lVar11 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184dda8))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  uVar6 = FUN_1003e19fc();
  lVar7 = *(long *)(lVar11 + 0x18);
  while ((lVar7 != 0 && (*(int *)(*(long *)(lVar7 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar7 = *(long *)(lVar7 + 0x20);
  }
  lVar8 = *(long *)(lVar7 + 0x28);
  lVar9 = lVar8;
  if (lVar8 != 0) {
    do {
      if ((*(int *)(lVar9 + 0x314) == DAT_101d3e7b8) && (*(int *)(lVar9 + 0x310) == 0)) {
        iVar3 = *(int *)(lVar9 + 0x30c);
        lVar9 = lVar8;
        goto LAB_100437254;
      }
      plVar1 = (long *)(lVar9 + 0x350);
      lVar9 = *plVar1;
    } while (*plVar1 != 0);
    goto LAB_1004371fc;
  }
  uVar12 = 0;
  goto LAB_10043723c;
  while (lVar9 = *(long *)(lVar9 + 0x350), lVar9 != 0) {
LAB_100437254:
    if (*(int *)(lVar9 + 0x30c) == iVar3) {
      uVar2 = *(uint *)(lVar9 + 0x340) & 0x10;
      uVar12 = uVar2 >> 4;
      if ((uVar6 & 1) == 0 && uVar2 != 0) {
        uVar4 = *(undefined4 *)(lVar11 + 0x260);
        local_7c = FUN_1003df710(lVar11,2,1);
        local_98 = 0;
        uStack_90 = 0;
        local_88 = 0;
        local_a0 = &PTR_FUN_101497250;
        local_84 = uVar4;
        iStack_80 = iVar3;
        FUN_100496b60(&local_a0,&DAT_101e47d30);
        lVar8 = *(long *)(lVar7 + 0x28);
      }
      goto LAB_100437200;
    }
  }
LAB_1004371fc:
  uVar12 = 0;
LAB_100437200:
  lVar7 = lVar8;
  if (lVar8 != 0) {
    do {
      lVar9 = lVar8;
      if ((*(int *)(lVar7 + 0x314) == DAT_101d3e7bc) && (*(int *)(lVar7 + 0x310) == 0)) {
        iStack_80 = *(undefined4 *)(lVar7 + 0x30c);
        bVar5 = true;
        goto LAB_100437280;
      }
      plVar1 = (long *)(lVar7 + 0x350);
      lVar7 = *plVar1;
    } while (*plVar1 != 0);
    bVar5 = false;
    iStack_80 = 0xffffffff;
LAB_100437280:
    do {
      if ((*(int *)(lVar9 + 0x314) == DAT_101d3e7c0) && (*(int *)(lVar9 + 0x310) == 0)) {
        bVar10 = true;
        goto LAB_1004372b0;
      }
      plVar1 = (long *)(lVar9 + 0x350);
      lVar9 = *plVar1;
    } while (*plVar1 != 0);
    bVar10 = false;
LAB_1004372b0:
    do {
      if ((*(int *)(lVar8 + 0x314) == DAT_101d3e6e8) && (*(int *)(lVar8 + 0x310) == 0)) {
        if (!bVar5) {
          return;
        }
        goto LAB_100437378;
      }
      lVar8 = *(long *)(lVar8 + 0x350);
    } while (lVar8 != 0);
    goto LAB_1004372cc;
  }
LAB_10043723c:
  bVar10 = false;
  bVar5 = false;
  iStack_80 = 0xffffffff;
LAB_1004372cc:
  if ((((bVar10) || (bVar5)) || (((uVar6 ^ 1) & 1) != 0)) || (uVar12 != 0)) {
    if (bVar5 && (uVar6 & 1) == 0) {
LAB_100437378:
      local_84 = *(undefined4 *)(lVar11 + 0x260);
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      local_a0 = &PTR_FUN_101496cd8;
      FUN_100496580(&local_a0,&DAT_101e47d30);
    }
  }
  else {
    local_84 = *(undefined4 *)(lVar11 + 0x260);
    local_74 = *(undefined4 *)(**(long **)(*(long *)(lVar11 + 0x38) + 0x228) + 8);
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    local_a0 = &PTR_FUN_101496b18;
    local_7c = DAT_1018589d8;
    local_70 = 1;
    local_58 = 0;
    local_64 = 0;
    local_6c = 0;
    local_50 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    iStack_80 = local_84;
    local_78 = FUN_1003d4e0c(PTR_s_Buff_Flicker_BrushStealth_Chargi_10185cca0);
    FUN_10049639c(&local_a0,&DAT_101e47d30);
  }
  return;
}




float FUN_100437424(long param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if ((*(byte *)(param_1 + 0x340) >> 4 & 1) == 0) {
    fVar1 = 1.0 - *(float *)(param_1 + 0x318) / *(float *)(param_1 + 0x31c);
  }
  return fVar1;
}




uint FUN_100437448(long param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dda8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_1003e19fc();
  return uVar1 ^ 1;
}




void FUN_100437490(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf800000;
  return;
}




ushort * FUN_10043749c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e481b0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481c0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481b8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48198 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481d0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481c8 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e481b0 + lVar1) = 0xbf800000;
    *(undefined8 *)(&DAT_101e481b4 + lVar1) = DAT_101dc1cb8;
    *(int *)(&DAT_101e481bc + lVar1) = (int)lVar1 + 0x1e48160;
    *(undefined4 *)(&DAT_101e481c0 + lVar1) = 0xff000000;
    *(ushort *)(&DAT_101e481c4 + lVar1) = *(ushort *)(&DAT_101e481c4 + lVar1) & 0xf800 | 0x30;
    *(undefined ***)puVar3 = &PTR_FUN_1014983a8;
    *(undefined4 *)(&DAT_101e481c8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481d0 + lVar1) = 0;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_1004375e0(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_1004375ec(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,3,0x19,0);
  return;
}




ushort * FUN_100437600(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48170 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48180 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48178 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48190 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48188 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48198 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481b0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481a8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481c0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481b8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481d0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481c8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481e0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481d8 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498468;
    FUN_10045cc04(&DAT_101e48160 + lVar1);
    *(undefined8 *)(&DAT_101e481c8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481c0 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481d8 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e481d0 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e481e0 + lVar1) = 0xffffffff;
    (&DAT_101e481e4)[lVar1] = (&DAT_101e481e4)[lVar1] & 0xfc | 2;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_10043773c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90ad4;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_100437770(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  
  if (DAT_101d23a38 != '\0') {
    lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
    puVar3 = PTR_s_Buff_Flicker_C_Warning_10185ccd0;
    plVar7 = (long *)(lVar9 + 0x18);
    do {
      lVar8 = *plVar7;
      plVar7 = (long *)(lVar8 + 0x20);
    } while (*(int *)(*(long *)(lVar8 + 8) + 0xa4) != DAT_10184daa8);
    lVar5 = *(long *)(lVar8 + 0x28);
    lVar8 = lVar5;
    if (lVar5 != 0) {
      do {
        if ((*(int *)(lVar8 + 0x314) == DAT_101d3e7d8) && (*(int *)(lVar8 + 0x310) == 0)) {
          bVar6 = true;
          goto LAB_100437808;
        }
        plVar7 = (long *)(lVar8 + 0x350);
        lVar8 = *plVar7;
      } while (*plVar7 != 0);
      bVar6 = false;
LAB_100437808:
      do {
        if ((*(int *)(lVar5 + 0x314) == DAT_101d3e7dc) && (*(int *)(lVar5 + 0x310) == 0)) {
          return;
        }
        lVar5 = *(long *)(lVar5 + 0x350);
      } while (lVar5 != 0);
      if (bVar6) {
        return;
      }
    }
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    uVar2 = *(undefined4 *)(lVar9 + 0x260);
    local_5c = FUN_1003dfe60(lVar4,2,2,0x19,0);
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_88 = &PTR_FUN_101496b18;
    local_64 = DAT_1018589d8;
    local_58 = 1;
    local_40 = 0;
    local_4c = 0;
    local_54 = 0;
    local_38 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_6c = uVar1;
    uStack_68 = uVar2;
    local_60 = FUN_1003d4e0c(puVar3);
    FUN_10049639c(&local_88,&DAT_101e47d30);
  }
  return;
}




undefined8 FUN_1004378d0(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x20);
  } while (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8);
  lVar2 = *(long *)(lVar2 + 0x28);
  while( true ) {
    if (lVar2 == 0) {
      return 1;
    }
    if ((*(int *)(lVar2 + 0x314) == DAT_101d3e7e0) && (*(int *)(lVar2 + 0x310) == 0)) break;
    lVar2 = *(long *)(lVar2 + 0x350);
  }
  return 0;
}




void FUN_100437938(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,5,0x19,0);
  return;
}




void FUN_10043794c(long *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  
  puVar2 = PTR_s_ChargeTime_10185d5a8;
  lVar6 = *param_1;
  uVar3 = FUN_1004d2524(PTR_s_ChargeTime_10185d5a8);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar6 + 0x168) + 0x18))(lVar6 + 0x168,uVar4);
  fVar7 = *pfVar5;
  fVar8 = *(float *)((long)param_1 + 0x454);
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar6 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar6 + 0x260) != iVar1) {
    lVar6 = FUN_100345d90(iVar1);
  }
  uVar3 = FUN_1003df710(lVar6,1,1);
  uVar3 = NEON_fminnm(fVar8 + fVar7,uVar3);
  *param_2 = uVar3;
  return;
}




void FUN_100437a08(long *param_1,float *param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_s_ChargeTime_10185d5a8;
  lVar5 = *param_1;
  uVar2 = FUN_1004d2524(PTR_s_ChargeTime_10185d5a8);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(lVar5 + 0x168) + 0x18))(lVar5 + 0x168,uVar3);
  fVar6 = *pfVar4 - *(float *)((long)param_1 + 0x454);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *param_2 = fVar6;
  return;
}




void FUN_100437a90(long *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar2 + 0x260) != iVar1) {
    lVar2 = FUN_100345d90(iVar1);
  }
  uVar3 = FUN_1003df710(lVar2,1,1);
  *param_2 = uVar3;
  return;
}




float FUN_100437ae0(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x308) == -1) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    if (*(int *)(lVar5 + 0x260) != *(int *)(param_1 + 0x308)) {
      lVar5 = FUN_100345d90();
    }
  }
  puVar1 = PTR_s_ChargeTime_10185d5a8;
  uVar2 = FUN_1004d2524(PTR_s_ChargeTime_10185d5a8);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  pfVar4 = (float *)(**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168,uVar3);
  fVar7 = *pfVar4;
  if (*(short *)(param_1 + 0x344) == 0) {
    fVar6 = *(float *)(**(long **)(*(long *)(lVar5 + 0x38) + 0x228) + 8);
  }
  else {
    fVar6 = (float)FUN_1003df710(lVar5,1,1);
  }
  return fVar7 / fVar6;
}




undefined4 FUN_100437bac(long param_1)

{
  return *(undefined4 *)(**(long **)(*(long *)(param_1 + 0x38) + 0x228) + 8);
}




void FUN_100437bc0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149c2a8;
  puVar3[1] = 0;
  puVar3[5] = &PTR_FUN_10149c380;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = DAT_101dc0b88;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100437cc0(undefined8 param_1)

{
  FUN_1003df710(param_1,2,1);
  return;
}




void FUN_100437ccc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000186f0();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100437d1c(undefined8 param_1)

{
  FUN_1003df710(param_1,3,1);
  return;
}




void FUN_100437d28(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,5,9,1);
  return;
}




void FUN_100437d3c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,4,0x19,0);
  return;
}




void FUN_100437d50(undefined8 param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined **local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  int local_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined **local_110;
  long local_108;
  undefined1 local_100;
  undefined4 local_fc;
  float fStack_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  float local_e0;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined2 local_b8;
  byte local_b6;
  long local_b0;
  long local_a8 [5];
  
  local_a8[3] = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_b0);
    lVar2 = FUN_100345d90(*(undefined4 *)(local_b0 + 0x308));
    lVar3 = *(long *)(*(long *)(local_b0 + 0x10) + 0x10);
    uVar9 = *(undefined4 *)(lVar3 + 0x250);
    fVar7 = *(float *)(lVar3 + 0x254);
    uVar10 = *(undefined4 *)(lVar3 + 600);
    fVar8 = *(float *)(lVar3 + 0x2ec);
    local_110 = &PTR_FUN_101499960;
    local_108 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    uStack_d4 = 0x3f800000bf800000;
    local_dc = 0xc0000000bf800000;
    local_cc = 0xff;
    local_c4 = 0xffffffff;
    local_bc = 0xffffffff;
    local_100 = 1;
    lVar3 = FUN_1003e10f0();
    local_b6 = *(byte *)(lVar3 + 0xe5);
    local_c8 = 1;
    if (lVar2 != 0) {
      local_108 = lVar2;
    }
    local_e0 = (float)FUN_1003dfe60(lVar2,0,6,0x19,0);
    local_e0 = local_e0 * local_e0;
    local_b6 = local_b6 | 0x14;
    local_b8 = 0xc150;
    local_fc = uVar9;
    fStack_f8 = fVar8 + fVar7;
    local_f4 = uVar10;
    uVar1 = FUN_1003a6ce4(&local_110,local_a8,3,0);
    if (uVar1 != 0) {
      uVar6 = 0;
      do {
        lVar3 = local_a8[uVar6];
        if (lVar3 != 0) {
          plVar4 = (long *)(lVar3 + 0x18);
          do {
            lVar5 = *plVar4;
            plVar4 = (long *)(lVar5 + 0x20);
          } while (*(int *)(*(long *)(lVar5 + 8) + 0xa4) != DAT_10184daa8);
          for (lVar5 = *(long *)(lVar5 + 0x28); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x350)) {
            if ((*(int *)(lVar5 + 0x314) == DAT_101d3e7f0) && (*(int *)(lVar5 + 0x310) == 0))
            goto LAB_100437f84;
          }
          local_14c = *(undefined4 *)(lVar2 + 0x260);
          uStack_148 = *(undefined4 *)(lVar3 + 0x260);
          uStack_12c = *(undefined4 *)(*(long *)(*(long *)(local_b0 + 0x10) + 0x10) + 0x260);
          local_160 = 0;
          uStack_158 = 0;
          local_150 = 0;
          local_168 = &PTR_FUN_101496b18;
          local_144 = DAT_1018589d8;
          local_140 = 0xbf80000000000000;
          local_138 = 1;
          uStack_134 = 0;
          local_130 = 0;
          local_128 = 0;
          local_120 = 0;
          local_118 = DAT_101dc0b88;
          DAT_1018589d8 = DAT_1018589d8 + 1;
          uVar9 = FUN_1003d4e0c(PTR_s_Buff_Fortress_Rally_10185c940);
          local_140 = CONCAT44(local_140._4_4_,uVar9);
          (*(code *)local_168[4])(&local_168,&DAT_101e47d30);
        }
LAB_100437f84:
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_a8[3]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100437fd4(undefined8 param_1)

{
  undefined8 uVar1;
  float fVar2;
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_20,&local_18);
  if (((*(int *)(local_18 + 0x18) == *(int *)(*(long *)(*(long *)(local_20 + 0x10) + 0x10) + 0x260))
      && (*(long *)(local_18 + 0x28) != 0)) &&
     ((*(uint *)(*(long *)(local_18 + 0x28) + 0x2f4) & 0x20000001) != 0)) {
    uVar1 = FUN_100345d90(*(undefined4 *)(local_20 + 0x308));
    fVar2 = (float)FUN_1003dfe60(uVar1,0,5,0x19,0);
    *(float *)(local_18 + 0x38) = *(float *)(local_18 + 0x38) + fVar2;
  }
  return;
}




void FUN_10043805c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  FUN_100432d40();
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    plVar3 = (long *)(lVar1 + 0x18);
    do {
      lVar4 = *plVar3;
      plVar3 = (long *)(lVar4 + 0x20);
    } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8);
    for (lVar4 = *(long *)(lVar4 + 0x28); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x350)) {
      if ((*(int *)(lVar4 + 0x314) == DAT_101d3e7f4) && (*(int *)(lVar4 + 0x310) == 0)) {
        lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
        fVar5 = *(float *)(lVar4 + 0x250);
        fVar6 = *(float *)(lVar4 + 0x254);
        fVar7 = *(float *)(lVar4 + 600);
        fVar8 = *(float *)(lVar4 + 0x2ec);
        fVar9 = *(float *)(lVar1 + 0x250);
        fVar10 = *(float *)(lVar1 + 0x254);
        fVar11 = *(float *)(lVar1 + 600);
        fVar12 = *(float *)(lVar1 + 0x2ec);
        uVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
        fVar5 = fVar5 - fVar9;
        fVar8 = (fVar8 + fVar6) - (fVar10 + fVar12);
        fVar7 = fVar7 - fVar11;
        fVar6 = (float)FUN_1003dfe60(uVar2,0,6,0x19,0);
        if (SQRT(fVar5 * fVar5 + fVar7 * fVar7 + fVar8 * fVar8) <= fVar6) {
          return;
        }
        break;
      }
    }
  }
  FUN_1004370a0(param_1);
  return;
}




void FUN_100438194(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long local_48;
  
  FUN_10042ecbc(param_1,&local_48);
  lVar5 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  iVar2 = FUN_100432d40();
  if ((iVar2 == -1) || (lVar3 = FUN_100345d90(), lVar3 == 0 || lVar5 == 0)) {
    return;
  }
  uVar6 = 0x10000;
  lVar3 = lVar5;
LAB_100438200:
  do {
    do {
      lVar4 = lVar3;
      if ((lVar4 != lVar5) &&
         (lVar3 = FUN_1010a0918(*(undefined8 *)(lVar4 + 8),0x163403b4), lVar3 != 0)) {
        (**(code **)(lVar3 + 8))(lVar4);
      }
      if (((uVar6 & 0xffff) < uVar6 >> 0x10) && (lVar3 = *(long *)(lVar4 + 0x18), lVar3 != 0)) {
        uVar6 = uVar6 & 0xffff0000 | uVar6 + 1 & 0xffff;
        goto LAB_100438200;
      }
      if ((uVar6 & 0xffff) == 0) {
        return;
      }
      lVar3 = *(long *)(lVar4 + 0x20);
    } while (*(long *)(lVar4 + 0x20) != 0);
    lVar4 = *(long *)(lVar4 + 0x10);
    if (lVar4 == 0) {
      return;
    }
    uVar1 = uVar6 - 1 & 0xffff;
    if (uVar1 == 0) {
      return;
    }
    uVar6 = uVar1 | uVar6 & 0xffff0000;
    while (lVar3 = *(long *)(lVar4 + 0x20), lVar3 == 0) {
      if ((uVar6 - 1 & 0xffff) == 0) {
        return;
      }
      lVar4 = *(long *)(lVar4 + 0x10);
      uVar6 = uVar6 & 0xffff0000 | uVar6 - 1 & 0xffff;
      if (lVar4 == 0) {
        return;
      }
    }
  } while( true );
}




void FUN_1004382a0(undefined8 param_1)

{
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_18,&local_20);
  if (*(int *)(local_20 + 0x10) == *(int *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260)) {
    *(undefined4 *)(local_20 + 0x5c) = 0;
    *(undefined4 *)(local_20 + 0x38) = 0;
  }
  return;
}




void FUN_1004382ec(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  long local_40;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_38,&local_40);
    lVar3 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    FUN_1003461dc(lVar3);
    uVar2 = FUN_100345d90();
    if ((*(int *)(local_40 + 0x18) == *(int *)(lVar3 + 0x260)) && (*(long *)(local_40 + 0x28) != 0))
    {
      uVar1 = *(uint *)(*(long *)(local_40 + 0x28) + 0x2f4);
      if ((uVar1 >> 0xd & 1) == 0) {
        if ((uVar1 >> 0x16 & 1) == 0) {
          return;
        }
        if ((*(byte *)(local_40 + 0xc) >> 2 & 1) == 0) {
          return;
        }
        fVar4 = (float)FUN_1003dfe60(uVar2,2,6,9,1);
        lVar3 = *(long *)(lVar3 + 0x40);
        fVar5 = *(float *)(lVar3 + 0x38) +
                *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
        NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
        fVar4 = DAT_101e94260 / fVar4 + 1.0;
      }
      else {
        lVar3 = *(long *)(lVar3 + 0x40);
        fVar4 = *(float *)(lVar3 + 0x38) +
                *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
        fVar5 = (float)NEON_fminnm(fVar4 + fVar4 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
        fVar4 = DAT_101e94260;
        if (DAT_101e94260 <= fVar5) {
          fVar4 = fVar5;
        }
        fVar5 = (float)FUN_1003dfe60(uVar2,2,9,9,1);
        fVar4 = fVar4 * fVar5;
      }
      *(float *)(local_40 + 0x54) = fVar4;
    }
  }
  return;
}




undefined4 FUN_100438428(long *param_1)

{
  long lVar1;
  int local_28 [2];
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_1003a4e5c(local_28,PTR_s_Buff_RiverHero_10185be08);
  lVar1 = *(long *)(lVar1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return 0x3f000000;
    }
    if ((*(int *)(lVar1 + 0x314) == local_28[0]) && (*(int *)(lVar1 + 0x310) == 0)) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  return 0;
}




undefined4 FUN_1004384c0(long *param_1)

{
  long lVar1;
  int local_28 [2];
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_1003a4e5c(local_28,PTR_s_Buff_RiverHero_10185be08);
  lVar1 = *(long *)(lVar1 + 0x28);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if ((*(int *)(lVar1 + 0x314) == local_28[0]) && (*(int *)(lVar1 + 0x310) == 0)) break;
    lVar1 = *(long *)(lVar1 + 0x350);
  }
  return 0x3f000000;
}




undefined1  [16] FUN_100438558(void)

{
  return ZEXT816(0x3f800000);
}




void FUN_100438560(long param_1)

{
  if (*(long **)(param_1 + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100438570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x50) + 200))();
    return;
  }
  return;
}




void FUN_100438578(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100432da4(*param_1);
  *param_2 = uVar1;
  return;
}




void FUN_1004385a0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017344();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_1004385f0(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000174ec();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_100438640(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = (float)FUN_100432da4(*param_1);
  *param_3 = fVar1;
  *param_2 = fVar1 * 0.1;
  return;
}




bool FUN_10043867c(long *param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  uVar2 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f;
  if ((int)uVar2 == 0x1f) {
    return true;
  }
  return 1 < *(ushort *)(lVar1 + uVar2 * 0x38 + 0x90) - 3;
}




void FUN_1004386bc(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019530();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043870c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_100438720(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_100438734(undefined8 param_1)

{
  FUN_1003df710(param_1,1,1);
  return;
}




void FUN_100438740(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_3c;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042fb4c(param_1,&local_38,&local_3c);
    lVar4 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    lVar3 = *(long *)(lVar4 + 0x18);
    while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar3 = *(long *)(lVar3 + 0x20);
    }
    iVar1 = FUN_1003e2b0c(lVar3,local_3c);
    FUN_1003a4e5c(&local_98,PTR_s_Ability__Glaive__C_101859030);
    iVar2 = FUN_1003e2b0c(lVar3,(ulong)local_98 & 0xffffffff);
    if (iVar1 == iVar2) {
      local_7c = *(undefined4 *)(lVar4 + 0x260);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_98 = &PTR_FUN_101496b18;
      local_74 = DAT_1018589d8;
      local_6c = 0x1bf800000;
      local_50 = 0;
      local_5c = 0;
      local_64 = 0;
      local_48 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_78 = local_7c;
      local_70 = FUN_1003d4e0c(PTR_s_Buff_Glaive_AbilityPerk_GrantBlo_10185c6f8);
      FUN_10049639c(&local_98,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_100438860(undefined8 param_1)

{
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  int local_5c;
  int iStack_58;
  int local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  long local_18;
  
  FUN_10042e1f0(param_1,&local_18,&local_20);
  if ((((*(ushort *)(local_18 + 0x344) & 0xfffe) != 0) &&
      ((*(byte *)(local_20 + 0xc) >> 2 & 1) != 0)) &&
     ((local_5c = *(int *)(*(long *)(*(long *)(local_18 + 0x10) + 0x10) + 0x260),
      *(int *)(local_20 + 0x10) == local_5c ||
      (((*(int *)(local_20 + 0x18) == local_5c && (*(long *)(local_20 + 0x28) != 0)) &&
       ((*(byte *)(*(long *)(local_20 + 0x28) + 0x2f4) & 1) != 0)))))) {
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_101496b18;
    local_54 = DAT_1018589d8;
    local_4c = 0x1bf800000;
    local_30 = 0;
    local_3c = 0;
    local_44 = 0;
    local_28 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    iStack_58 = local_5c;
    local_50 = FUN_1003d4e0c(PTR_s_Buff_Glaive_AbilityPerk_Bloodson_10185c700);
    FUN_10049639c(&local_78,&DAT_101e47d30);
  }
  return;
}




void FUN_10043894c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,5,0x19,0);
  return;
}




void FUN_100438960(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,8,0x19,0);
  return;
}




void FUN_100438974(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,7,0x19,0);
  return;
}




void FUN_100438988(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[9] = 0;
  puVar3[8] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101498f90;
  puVar3[1] = 0;
  puVar3[5] = &PTR_FUN_101499068;
  puVar3[6] = 0;
  *(undefined4 *)(puVar3 + 7) = DAT_101dc0b88;
  puVar3[8] = 0;
  *(byte *)(puVar3 + 9) = *(byte *)(puVar3 + 9) & 0xfe;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100438a9c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101499360;
  puVar3[1] = 0;
  puVar3[5] = 0xffffffff00000000;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100438b8c(undefined8 param_1)

{
  FUN_1003df710(param_1,6,1);
  return;
}




void FUN_100438b98(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,4,0x89,0);
  return;
}




int FUN_100438bac(undefined4 param_1)

{
  float fVar1;
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b2c;
  fVar1 = (float)FUN_1003dfee8(param_1,local_18,4,9);
  return (int)fVar1;
}




undefined8 FUN_100438be4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  puVar4 = PTR_s_Buff_Grace_A_GuardHitImpact_10185ce78;
  iVar3 = DAT_1018589d8;
  if ((DAT_101d23a38 != '\0') && (*(char *)(param_2 + 0x60) != '\0')) {
    uVar1 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x260);
    uVar2 = *(undefined4 *)(param_1 + 0x308);
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_54 = _atan2f(*(undefined4 *)(param_2 + 0x68),*(undefined4 *)(param_2 + 100));
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_88 = &PTR_FUN_101496b18;
    local_64 = iVar3;
    local_5c = 0x13e4ccccd;
    local_48 = 0;
    local_50 = 0;
    local_40 = 0;
    local_38 = DAT_101dc0b88;
    local_6c = uVar2;
    uStack_68 = uVar1;
    local_60 = FUN_1003d4e0c(puVar4);
    FUN_10049639c(&local_88,&DAT_101e47d30);
  }
  return 1;
}




undefined1  [16] FUN_100438cbc(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 uVar9;
  undefined4 local_38 [2];
  
  iVar2 = *(int *)(*param_1 + 0x308);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar4 + 0x260) != iVar2) {
      lVar4 = FUN_100345d90();
    }
  }
  auVar6 = FUN_1003dfe60(lVar4,0,7,0x89,0);
  puVar1 = PTR_s_Buff_Grace_Talent_DoubleBenedict_10185ce80;
  uVar8 = auVar6._0_8_;
  if ((param_1[0x85] != 0) && (lVar3 = *(long *)(param_1[0x85] + 0x28), lVar3 != 0)) {
    fVar5 = auVar6._0_4_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar8 & 0xffffffff;
    if ((*(byte *)(lVar3 + 0x2f5) & 0x10) != 0) {
      auVar6 = ZEXT416((uint)(fVar5 * 0.5));
    }
  }
  uVar9 = auVar6._8_8_;
  uVar8 = auVar6._0_8_;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    local_38[0] = DAT_101d90b2c;
    fVar5 = (float)FUN_1003dfee8(lVar4,local_38,0,9);
    uVar8 = (ulong)(uint)(fVar5 * auVar6._0_4_);
    uVar9 = 0;
  }
  auVar7._8_8_ = uVar9;
  auVar7._0_8_ = uVar8;
  return auVar7;
}




void FUN_100438da4(long *param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  *param_4 = *(undefined4 *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x260);
  return;
}




void FUN_100438dbc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_100432d40(*param_1);
  uVar1 = FUN_100345d90();
  *param_2 = uVar1;
  return;
}




void FUN_100438de8(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  FUN_100432d40(*param_1);
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    for (lVar2 = *(long *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dda8) {
        uVar3 = *(uint *)(*param_1 + 0x340);
        if ((*(byte *)(lVar2 + ((ulong)~*(uint *)(lVar2 + 0x5c) & 1) * 0x19 +
                       (ulong)*(byte *)(lVar1 + 0x264) + 0x28) >> 2 & 1) == 0) {
          if ((uVar3 >> 5 & 1) == 0) {
            return;
          }
          uVar3 = uVar3 & 0xffffffdf;
        }
        else {
          if ((uVar3 >> 5 & 1) != 0) {
            return;
          }
          uVar3 = uVar3 | 0x20;
        }
        *(uint *)(*param_1 + 0x340) = uVar3;
        return;
      }
    }
  }
  return;
}




void FUN_100438e84(long *param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  float *pfVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  FUN_100432d40(*param_1);
  lVar1 = FUN_100345d90();
  if ((lVar1 == 0) ||
     ((uVar5 = (ulong)*(ushort *)(lVar1 + 0x88) & 0x1f, (int)uVar5 != 0x1f &&
      (*(ushort *)(lVar1 + uVar5 * 0x38 + 0x90) - 3 < 2)))) {
    fVar9 = (float)FUN_100432da4(*param_1);
    fVar10 = (float)FUN_100432e08(*param_1);
    lVar6 = *param_1;
    lVar1 = *(long *)(*(long *)(lVar6 + 0x10) + 0x10);
    fVar8 = *(float *)(lVar1 + 0x2ec) + *(float *)(lVar1 + 0x254);
    fVar9 = fVar9 - *(float *)(lVar1 + 0x250);
    fVar10 = fVar10 - *(float *)(lVar1 + 600);
    fVar8 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
    if (1e-08 <= fVar8) {
      fVar8 = SQRT(fVar8);
      fVar9 = fVar9 / fVar8;
      fVar10 = fVar10 / fVar8;
    }
    else {
      fVar9 = 1.0;
      fVar10 = 0.0;
    }
    uVar3 = (*(code *)**(undefined8 **)(lVar6 + 0x168))
                      (lVar6 + 0x168,PTR_s___VAR1_FLOAT___10185d7e8);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar6 + 0x168) + 0x10))(lVar6 + 0x168,uVar3);
    *pfVar4 = fVar9;
    lVar1 = *param_1;
    uVar3 = (*(code *)**(undefined8 **)(lVar1 + 0x168))
                      (lVar1 + 0x168,PTR_s___VAR1_FLOAT___10185d7e8);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar1 + 0x168) + 0x10))(lVar1 + 0x168,uVar3);
    *pfVar4 = fVar10;
    lVar1 = *param_1;
    uVar3 = (*(code *)**(undefined8 **)(lVar1 + 0x168))(lVar1 + 0x168,PTR_s___VAR1_INT___10185d7f8);
    puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0x168) + 0x10))(lVar1 + 0x168,uVar3);
    *puVar2 = 0xffffffff;
  }
  else {
    lVar7 = *param_1;
    lVar6 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10);
    fVar8 = *(float *)(lVar1 + 0x250) - *(float *)(lVar6 + 0x250);
    fVar11 = *(float *)(lVar1 + 600) - *(float *)(lVar6 + 600);
    fVar12 = fVar8 * fVar8 + fVar11 * fVar11;
    fVar9 = DAT_101873a50._4_4_;
    fVar10 = (float)DAT_101873a50;
    if (1e-08 <= fVar12) {
      fVar12 = SQRT(fVar12);
      fVar9 = fVar11 / fVar12;
      fVar10 = fVar8 / fVar12;
    }
    uVar3 = (*(code *)**(undefined8 **)(lVar7 + 0x168))
                      (lVar7 + 0x168,PTR_s___VAR1_FLOAT___10185d7e8);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar7 + 0x168) + 0x10))(lVar7 + 0x168,uVar3);
    *pfVar4 = fVar10;
    lVar1 = *param_1;
    uVar3 = (*(code *)**(undefined8 **)(lVar1 + 0x168))
                      (lVar1 + 0x168,PTR_s___VAR2_FLOAT___10185d7f0);
    pfVar4 = (float *)(**(code **)(*(long *)(lVar1 + 0x168) + 0x10))(lVar1 + 0x168,uVar3);
    *pfVar4 = fVar9;
  }
  return;
}




void FUN_1004390d4(long *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = FUN_100432d40(*param_1);
  if (iVar1 != -1) {
    FUN_100432d40(*param_1);
    lVar2 = FUN_100345d90();
    if ((lVar2 == 0) ||
       ((uVar6 = (ulong)*(ushort *)(lVar2 + 0x88) & 0x1f, (int)uVar6 != 0x1f &&
        (*(ushort *)(lVar2 + uVar6 * 0x38 + 0x90) - 3 < 2)))) {
      lVar2 = *param_1;
      uVar4 = (*(code *)**(undefined8 **)(lVar2 + 0x168))
                        (lVar2 + 0x168,PTR_s___VAR1_INT___10185d7f8);
      puVar3 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar2 + 0x168,uVar4);
      *puVar3 = 0xffffffff;
    }
    else {
      lVar8 = *param_1;
      lVar7 = *(long *)(*(long *)(lVar8 + 0x10) + 0x10);
      fVar9 = *(float *)(lVar2 + 0x250) - *(float *)(lVar7 + 0x250);
      fVar10 = *(float *)(lVar2 + 600) - *(float *)(lVar7 + 600);
      fVar11 = fVar9 * fVar9 + fVar10 * fVar10;
      fVar12 = DAT_101873a50._4_4_;
      fVar13 = (float)DAT_101873a50;
      if (1e-08 <= fVar11) {
        fVar11 = SQRT(fVar11);
        fVar12 = fVar10 / fVar11;
        fVar13 = fVar9 / fVar11;
      }
      uVar4 = (*(code *)**(undefined8 **)(lVar8 + 0x168))
                        (lVar8 + 0x168,PTR_s___VAR1_FLOAT___10185d7e8);
      pfVar5 = (float *)(**(code **)(*(long *)(lVar8 + 0x168) + 0x10))(lVar8 + 0x168,uVar4);
      *pfVar5 = fVar13;
      lVar2 = *param_1;
      uVar4 = (*(code *)**(undefined8 **)(lVar2 + 0x168))
                        (lVar2 + 0x168,PTR_s___VAR2_FLOAT___10185d7f0);
      pfVar5 = (float *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar2 + 0x168,uVar4);
      *pfVar5 = fVar12;
    }
  }
  return;
}




void FUN_100439250(long *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100432da4(*param_1);
  *param_2 = uVar1;
  uVar1 = FUN_100432e08(*param_1);
  *param_3 = uVar1;
  uVar1 = FUN_100432d40(*param_1);
  *param_4 = uVar1;
  *param_5 = *(undefined4 *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x260);
  return;
}




void FUN_1004392c4(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100432da4();
  *param_2 = uVar1;
  uVar1 = FUN_100432e08(param_1);
  param_2[1] = uVar1;
  return;
}




void FUN_1004392f8(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x428);
  if (lVar1 != 0) {
    uVar2 = _atan2f(*(undefined4 *)(lVar1 + 0x68),*(undefined4 *)(lVar1 + 100));
    *param_2 = uVar2;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100439328(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == ram0x0001018672a0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_100432da4();
  local_38 = FUN_100432e08(*param_1);
  local_3c = 0;
  local_40 = uVar2;
  FUN_1003b7098(lVar1,&local_40,1);
  return;
}




void FUN_1004393b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  FUN_1004393e4(*param_1);
  uVar1 = FUN_100345d90();
  *param_2 = uVar1;
  return;
}




undefined4 FUN_1004393e4(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  puVar1 = PTR_s___VAR2_INT___10185d800;
  uVar2 = FUN_1004d2524(PTR_s___VAR2_INT___10185d800);
  uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x18))(param_1 + 0x168,uVar3);
  return *puVar4;
}




void FUN_100439448(long *param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  
  FUN_1004393e4(*param_1);
  lVar1 = FUN_100345d90();
  if (lVar1 != 0) {
    for (lVar2 = *(long *)(lVar1 + 0x18); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dda8) {
        uVar3 = *(uint *)(*param_1 + 0x340);
        if ((*(byte *)(lVar2 + ((ulong)~*(uint *)(lVar2 + 0x5c) & 1) * 0x19 +
                       (ulong)*(byte *)(lVar1 + 0x264) + 0x28) >> 2 & 1) == 0) {
          if ((uVar3 >> 5 & 1) == 0) {
            return;
          }
          uVar3 = uVar3 & 0xffffffdf;
        }
        else {
          if ((uVar3 >> 5 & 1) != 0) {
            return;
          }
          uVar3 = uVar3 | 0x20;
        }
        *(uint *)(*param_1 + 0x340) = uVar3;
        return;
      }
    }
  }
  return;
}




bool FUN_1004394e4(long param_1)

{
  return (uint)*(ushort *)(param_1 + 0x344) <
         (uint)(int)*(float *)(**(long **)(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) +
                                                    0x38) + 0x228) + 8);
}




void FUN_100439510(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (DAT_101d23a38 != '\0') {
    uVar1 = FUN_1003df710(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10),1,1);
    *param_2 = uVar1;
  }
  return;
}




int FUN_100439550(long *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(ushort *)(*param_1 + 0x344) != 0) {
    iVar1 = *(ushort *)(*param_1 + 0x344) - 1;
  }
  return iVar1;
}




float FUN_100439568(long *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(*param_1 + 0x344));
  fVar1 = (float)FUN_1003df710(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),2,1);
  return -(fVar1 * fVar2) - -1.0;
}




void FUN_1004395a8(undefined8 param_1)

{
  FUN_1003df710(param_1,3,1);
  return;
}




undefined1  [16] FUN_1004395b4(long *param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  ulong uVar8;
  undefined8 uVar9;
  
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar3 + 0x260) != *(int *)(*param_1 + 0x308)) {
    lVar3 = FUN_100345d90();
  }
  lVar4 = *(long *)(lVar3 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  lVar5 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  auVar7 = FUN_1003dfe60(lVar3,1,3,0x19,0);
  uVar9 = auVar7._8_8_;
  uVar8 = auVar7._0_8_;
  iVar1 = FUN_1003a47d0(lVar3,PTR_s_Buff_Grumpjaw_Perk_Armor_10185ce00);
  if (iVar1 != 0) {
    fVar6 = (float)FUN_1003dfe60(lVar3,1,4,0x19,0);
    uVar2 = FUN_1003a34a4(lVar4,DAT_101d3e88c);
    uVar8 = CONCAT44(auVar7._4_4_,auVar7._0_4_ + (float)uVar2 * fVar6);
  }
  if (*(char *)(lVar5 + 0x2f6) < '\0') {
    fVar6 = (float)FUN_1003dfe60(lVar3,1,5,0x19,0);
    uVar8 = (ulong)(uint)(fVar6 * (float)uVar8);
    uVar9 = 0;
  }
  auVar7._8_8_ = uVar9;
  auVar7._0_8_ = uVar8;
  return auVar7;
}




void FUN_1004396c4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,4,0x19,0);
  return;
}




void FUN_1004396d8(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  
  uVar1 = *(uint *)(param_1 + 0x408);
  if (uVar1 != 0) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1 + uVar4 * 8 + 8);
      for (lVar3 = *(long *)(lVar2 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
        if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184daa8) {
          lVar3 = *(long *)(lVar3 + 0x28);
          goto joined_r0x00010043975c;
        }
      }
LAB_1004397b0:
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return;
joined_r0x00010043975c:
  if (lVar3 == 0) goto LAB_1004397b0;
  if ((*(int *)(lVar3 + 0x314) == DAT_101d3e89c) && (*(int *)(lVar3 + 0x310) == 0)) {
    uStack_58 = *(undefined4 *)(lVar3 + 0x30c);
    local_5c = *(undefined4 *)(lVar2 + 0x260);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_101497250;
    local_54 = 0x3f000000;
    FUN_100496b60(&local_78,&DAT_101e47d30);
    uVar1 = *(uint *)(param_1 + 0x408);
    goto LAB_1004397b0;
  }
  lVar3 = *(long *)(lVar3 + 0x350);
  goto joined_r0x00010043975c;
}




undefined4 FUN_1004397d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x400);
}




undefined8 FUN_1004397e0(long param_1,uint param_2)

{
  return *(undefined8 *)(param_1 + (ulong)param_2 * 8);
}




void FUN_1004397e8(long *param_1,float *param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  fVar3 = *(float *)(lVar1 + 0x254);
  fVar2 = *(float *)(lVar1 + 600);
  fVar4 = *(float *)(lVar1 + 0x2ec);
  fVar5 = *(float *)(lVar1 + 0x240);
  fVar6 = *(float *)(lVar1 + 0x244);
  fVar7 = *(float *)(lVar1 + 0x248);
  fVar8 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
  if (1e-08 <= fVar8) {
    fVar8 = 1.0 / SQRT(fVar8);
    fVar5 = fVar5 * fVar8;
    fVar6 = fVar6 * fVar8;
    fVar7 = fVar7 * fVar8;
  }
  else {
    fVar5 = 1.0;
    fVar6 = 0.0;
    fVar7 = 0.0;
  }
  *param_2 = fVar5 + *(float *)(lVar1 + 0x250);
  param_2[1] = fVar4 + fVar3 + fVar6;
  param_2[2] = fVar7 + fVar2;
  return;
}




void FUN_100439878(undefined8 param_1)

{
  FUN_1003dfe60(param_1,3,4,0x19,0);
  return;
}




void FUN_10043988c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *puVar3 = &PTR_FUN_10149d0a8;
  puVar3[1] = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_100439978(undefined8 param_1)

{
  long local_20;
  undefined1 auStack_18 [8];
  
  if (DAT_101d23a38 != '\0') {
    FUN_10043015c(param_1,auStack_18,&local_20);
    *(undefined4 *)(local_20 + 0x2c) = 0;
  }
  return;
}




void FUN_1004399b0(undefined8 param_1)

{
  long *plVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long local_18;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  FUN_10042ecbc(param_1,&local_18);
  lVar3 = FUN_100345d90(*(undefined4 *)(local_18 + 0x308));
  lVar4 = *(long *)(lVar3 + 0x18);
  lVar3 = lVar4;
  if (lVar4 == 0) {
    bVar5 = false;
    bVar2 = false;
    goto LAB_100439aa4;
  }
  do {
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_10184daa8) {
      lVar3 = *(long *)(lVar3 + 0x28);
      bVar5 = false;
      if (lVar3 == 0) goto LAB_100439a54;
      goto LAB_100439a28;
    }
    plVar1 = (long *)(lVar3 + 0x20);
    lVar3 = *plVar1;
  } while (*plVar1 != 0);
  bVar5 = false;
  goto LAB_100439a54;
  while (lVar3 = *(long *)(lVar3 + 0x350), lVar3 != 0) {
LAB_100439a28:
    if ((*(int *)(lVar3 + 0x314) == DAT_101d3e8a0) && (*(int *)(lVar3 + 0x310) == 0)) {
      bVar5 = true;
      goto LAB_100439a54;
    }
  }
  bVar5 = false;
LAB_100439a54:
  do {
    if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184dab8) {
      lVar3 = *(long *)(lVar4 + 0x78);
      bVar2 = false;
      if (lVar3 != 0) {
        uVar6 = (ulong)*(ushort *)(lVar3 + 0x68) & 0x1f;
        if ((int)uVar6 == 0x1f) {
          bVar2 = false;
        }
        else {
          bVar2 = *(short *)(lVar3 + uVar6 * 0x38 + 0x70) == 2;
        }
      }
      goto LAB_100439aa4;
    }
    lVar4 = *(long *)(lVar4 + 0x20);
  } while (lVar4 != 0);
  bVar2 = false;
LAB_100439aa4:
  if ((!bVar5) && (!bVar2)) {
    FUN_1004370a0(local_18);
  }
  return;
}




void FUN_100439ac0(undefined8 param_1)

{
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [8];
  
  FUN_100439ae4(param_1,auStack_18,auStack_20);
  return;
}




void FUN_100439ae4(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  puVar1 = PTR_s___PARENT___10185d770;
  if (param_2 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___PARENT___10185d770);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,uVar3);
    *param_2 = *puVar4;
  }
  puVar1 = PTR_s___ACTOR___10185d780;
  if (param_3 != (undefined8 *)0x0) {
    uVar2 = FUN_1004d2524(PTR_s___ACTOR___10185d780);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x18))(param_1,uVar3);
    *param_3 = *puVar4;
  }
  return;
}




void FUN_100439b98(undefined8 param_1)

{
  int local_1c;
  undefined8 local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042fb4c(param_1,&local_18,&local_1c);
    if (local_1c == DAT_101d2c6a0) {
      FUN_1004370a0(local_18);
    }
  }
  return;
}




ushort * FUN_100439be4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_101498788;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0xffffffff000000ee;
    *(char **)(&DAT_101e48168 + lVar1) = "CenterBody";
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_100439ce0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x84,0);
  return;
}




void FUN_100439cf4(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,3,0x19,0);
  return;
}




void FUN_100439d08(float param_1,long param_2)

{
  float fVar1;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38;
  
  fVar1 = (float)FUN_1003dfe60(param_2,2,5,0x19,0);
  local_3c = (float)FUN_1003dfe60(param_2,2,6,0x19,0);
  local_4c = *(undefined4 *)(param_2 + 0x260);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_1014971e0;
  local_48 = 0x12ffffffff;
  local_40 = 1;
  local_3c = (fVar1 * -param_1) / local_3c;
  local_38 = 0;
  FUN_1004969f4(&local_68,&DAT_101e47d30);
  return;
}




void FUN_100439dbc(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  long lVar8;
  float fVar9;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  float local_64;
  undefined1 local_60;
  long local_58;
  
  FUN_10042ecbc(param_1,&local_58);
  lVar2 = local_58;
  lVar8 = *(long *)(*(long *)(local_58 + 0x10) + 0x10);
  lVar1 = local_58 + 0x168;
  uVar3 = FUN_1004d2524("rampTimer");
  uVar4 = FUN_100015208("rampTimer",uVar3,0x12345678);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar1,uVar4);
  lVar2 = local_58;
  lVar1 = local_58 + 0x168;
  uVar3 = FUN_1004d2524("disableTimer");
  uVar4 = FUN_100015208("disableTimer",uVar3,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar1,uVar4);
  lVar2 = local_58;
  lVar1 = local_58 + 0x168;
  uVar3 = FUN_1004d2524("__VAR1_FLOAT__");
  uVar4 = FUN_100015208("__VAR1_FLOAT__",uVar3,0x12345678);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar1,uVar4);
  fVar9 = (float)FUN_1003dfe60(lVar8,2,6,0x19,0);
  if (*pfVar6 <= 0.01) {
    if (*pfVar5 < fVar9 + -0.01) {
      *puVar7 = 0x3f800000;
      fVar9 = (float)FUN_1003dfe60(lVar8,2,5,0x19,0);
      local_64 = (float)FUN_1003dfe60(lVar8,2,6,0x19,0);
      local_70 = 0x12ffffffff;
      local_74 = *(undefined4 *)(lVar8 + 0x260);
      local_88 = 0;
      uStack_80 = 0;
      local_78 = 0;
      local_90 = &PTR_FUN_1014971e0;
      local_68 = 1;
      local_64 = fVar9 / local_64;
      local_60 = 0;
      FUN_1004969f4(&local_90,&DAT_101e47d30);
      *pfVar5 = *pfVar5 + *(float *)(local_58 + 0x328);
    }
  }
  else {
    *pfVar6 = *pfVar6 - *(float *)(local_58 + 0x328);
    *puVar7 = 0;
  }
  return;
}




void FUN_100439fc8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  long local_38;
  
  FUN_10042ecbc(param_1,&local_38);
  uVar4 = *(undefined8 *)(*(long *)(local_38 + 0x10) + 0x10);
  uVar1 = FUN_1004d2524("rampTimer");
  uVar2 = FUN_100015208("rampTimer",uVar1,0x12345678);
  puVar3 = (undefined4 *)(**(code **)(*(long *)(local_38 + 0x168) + 0x10))(local_38 + 0x168,uVar2);
  FUN_100439d08(*puVar3,uVar4);
  return;
}




void FUN_10043a04c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined4 uVar7;
  long local_50;
  long local_48;
  
  FUN_10042e1f0(param_1,&local_48,&local_50);
  lVar2 = local_48;
  lVar6 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  if ((((*(int *)(local_50 + 0x18) == *(int *)(lVar6 + 0x260)) &&
       ((*(byte *)(local_50 + 0xc) >> 4 & 1) == 0)) && (*(long *)(local_50 + 0x28) != 0)) &&
     ((*(byte *)(*(long *)(local_50 + 0x28) + 0x2f4) & 1) != 0)) {
    lVar1 = local_48 + 0x168;
    uVar3 = FUN_1004d2524("rampTimer");
    uVar4 = FUN_100015208("rampTimer",uVar3,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar1,uVar4);
    FUN_100439d08(*puVar5,lVar6);
    lVar1 = local_48;
    lVar2 = local_48 + 0x168;
    uVar3 = FUN_1004d2524("rampTimer");
    uVar4 = FUN_100015208("rampTimer",uVar3,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0x168) + 0x10))(lVar2,uVar4);
    *puVar5 = 0;
    uVar7 = FUN_1003dfe60(lVar6,2,7,0x19,0);
    uVar3 = FUN_1004d2524("disableTimer");
    uVar4 = FUN_100015208("disableTimer",uVar3,0x12345678);
    puVar5 = (undefined4 *)(**(code **)(*(long *)(local_48 + 0x168) + 0x10))(local_48 + 0x168,uVar4)
    ;
    *puVar5 = uVar7;
  }
  return;
}




void FUN_10043a1a4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  int local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_40;
  undefined4 local_38;
  int local_2c;
  long local_28;
  
  if ((DAT_101d23a38 != '\0') &&
     (FUN_10042fb4c(param_1,&local_28,&local_2c), local_2c == DAT_101d2c6c0)) {
    lVar2 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    lVar1 = *(long *)(*(long *)(lVar2 + 0x58) + 0x60);
    if ((lVar1 != 0) && ((*(uint *)(lVar1 + 0x238) & 0x1c00) == 0x400)) {
      FUN_1004370a0();
      local_6c = *(undefined4 *)(lVar2 + 0x260);
      local_80 = 0;
      uStack_78 = 0;
      local_70 = 0;
      local_88 = &PTR_FUN_101496b18;
      local_64 = DAT_1018589d8;
      local_5c = 0x1bf800000;
      local_40 = 0;
      local_4c = 0;
      local_54 = 0;
      local_38 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_68 = local_6c;
      local_60 = FUN_1003d4e0c(PTR_s_Buff_Gwen_Travel_10185cd00);
      FUN_10049639c(&local_88,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_10043a294(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  *param_2 = uVar2;
  uVar3 = FUN_100432d40(*param_1);
  pcVar1 = "Bone_RChainBase";
  if ((uVar3 & 1) != 0) {
    pcVar1 = "Bone_LChainBase";
  }
  *param_4 = pcVar1;
  return;
}




bool FUN_10043a2f4(long *param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 local_68 [2];
  
  lVar3 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  lVar4 = *param_1;
  lVar5 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
  fVar7 = *(float *)(lVar3 + 0x250);
  fVar14 = *(float *)(lVar3 + 0x254);
  fVar12 = *(float *)(lVar3 + 600);
  fVar15 = *(float *)(lVar3 + 0x2ec);
  fVar11 = *(float *)(lVar5 + 0x250);
  fVar17 = *(float *)(lVar5 + 0x254);
  fVar16 = *(float *)(lVar5 + 600);
  fVar13 = *(float *)(lVar5 + 0x2ec);
  fVar8 = *(float *)(lVar4 + 0x31c);
  fVar10 = *(float *)(lVar4 + 0x318);
  fVar9 = (float)FUN_1003dfe60(lVar3,0,7,0x19,0);
  bVar1 = false;
  if (fVar9 <= fVar8 - fVar10) {
    lVar4 = *(long *)(lVar3 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    lVar5 = *(long *)(lVar4 + 0x58);
    if ((((lVar5 == 0) || (uVar6 = (ulong)*(ushort *)(lVar5 + 0x68) & 0x1f, (int)uVar6 == 0x1f)) ||
        (*(short *)(lVar5 + uVar6 * 0x38 + 0x70) != 2)) &&
       (((lVar4 = *(long *)(lVar4 + 0x60), lVar4 == 0 ||
         (uVar6 = (ulong)*(ushort *)(lVar4 + 0x68) & 0x1f, (int)uVar6 == 0x1f)) ||
        (*(short *)(lVar4 + uVar6 * 0x38 + 0x70) != 2)))) {
      fVar8 = (float)FUN_1003dfe60(lVar3,0,2,0x19,0);
      fVar9 = (float)FUN_1003dfe60(lVar3,0,5,0x19,0);
      fVar9 = fVar9 + fVar8;
      iVar2 = FUN_1003a47d0(lVar3,PTR_s_Buff_Churnwalker_Talent_TalentC_10185cda0);
      if (iVar2 != 0) {
        local_68[0] = DAT_101d90e14;
        fVar8 = (float)FUN_1003dfee8(lVar3,local_68,1,9);
        fVar9 = fVar8 + fVar9;
      }
      fVar7 = fVar7 - fVar11;
      fVar8 = (fVar15 + fVar14) - (fVar17 + fVar13);
      fVar12 = fVar12 - fVar16;
      bVar1 = fVar9 * fVar9 < fVar7 * fVar7 + fVar12 * fVar12 + fVar8 * fVar8;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}




float FUN_10043a4e8(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined4 local_38 [2];
  
  lVar2 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar4 = *(float *)(**(long **)(*(long *)(lVar2 + 0x38) + 0x228) + 8) *
          *(float *)(param_1[0x85] + 0x54);
  iVar1 = FUN_1003a47d0(lVar2,PTR_s_Buff_Churnwalker_Talent_TalentA_10185cd98);
  if (iVar1 != 0) {
    local_38[0] = DAT_101d90e04;
    fVar3 = (float)FUN_1003dfee8(lVar2,local_38,0,9);
    fVar4 = fVar3 * fVar4;
  }
  return fVar4;
}




bool FUN_10043a578(long param_1)

{
  bool bVar1;
  int local_28 [2];
  
  if ((**(long **)(param_1 + 0x428) == 0) || (FUN_1003a4e5c(local_28), local_28[0] != DAT_101d2c6f0)
     ) {
    bVar1 = true;
  }
  else {
    bVar1 = *(int *)(*(long *)(param_1 + 0x428) + 8) != 2;
  }
  return bVar1;
}




void FUN_10043a5dc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff8f | 0x20;
  return;
}




void FUN_10043a61c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x81);
  uVar3 = (ulong)uVar4;
  if (uVar4 != 0) {
    uVar4 = uVar4 * 8;
    plVar2 = param_1;
    do {
      uVar4 = uVar4 - 8;
      plVar1 = plVar2 + 1;
      if (*plVar1 == *(long *)(*(long *)(*param_1 + 0x10) + 0x10)) {
        _memmove(plVar1,plVar2 + 2,(ulong)uVar4);
        *(int *)(param_1 + 0x81) = (int)param_1[0x81] + -1;
        return;
      }
      uVar3 = uVar3 - 1;
      plVar2 = plVar1;
    } while (uVar3 != 0);
  }
  return;
}




void FUN_10043a68c(long *param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48 [2];
  
  uVar2 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar7 = *(float *)(param_1[0x85] + 0x54);
  fVar5 = (float)FUN_1003df710(uVar2,1,1);
  iVar1 = FUN_1003a47d0(uVar2,PTR_s_Buff_Churnwalker_Talent_TalentA_10185cd98);
  if (iVar1 != 0) {
    local_48[0] = DAT_101d90e04;
    fVar6 = (float)FUN_1003dfee8(uVar2,local_48,1,9);
    fVar5 = fVar6 * fVar5;
  }
  lVar3 = param_1[0x85];
  lVar4 = *(long *)(lVar3 + 0x28);
  if (lVar4 != 0) {
    *(long *)(param_2 + 0x28) = lVar4;
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
  }
  *(float *)(param_2 + 0x30) = fVar5 * fVar7;
  *(undefined4 *)(param_2 + 8) = 2;
  return;
}




bool FUN_10043a74c(long *param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    iVar1 = FUN_1004393e4(*param_1);
    for (lVar2 = *(long *)(lVar2 + 0x28); lVar2 != 0; lVar2 = *(long *)(lVar2 + 0x350)) {
      if (*(int *)(lVar2 + 0x30c) == iVar1) {
        return *(int *)(lVar2 + 0x310) != 0;
      }
    }
  }
  return true;
}




void FUN_10043a7d8(long *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_24;
  
  uVar2 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  FUN_1003adb94(uVar2,&local_24);
  uVar1 = FUN_100432d40(*param_1);
  *param_2 = local_24 ^ 1 << (ulong)(uVar1 & 0x1f);
  return;
}




void FUN_10043a830(long *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_24;
  
  uVar2 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  FUN_1003adb94(uVar2,&local_24);
  uVar1 = FUN_100432d40(*param_1);
  *param_2 = local_24 | 1 << (ulong)(uVar1 & 0x1f);
  return;
}




void FUN_10043a888(long param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(*(long *)(param_1 + 0x428) + 0x10);
  return;
}




undefined8 FUN_10043a898(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(long *)(param_1[0x85] + 0x28) == 0) ||
     (lVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308)),
     *(char *)(lVar1 + 0x264) == *(char *)(*(long *)(param_1[0x85] + 0x28) + 0x264))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




uint FUN_10043a8f0(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  if (lVar2 == 0) {
    uVar1 = 1;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184daa8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    uVar1 = FUN_1003c421c(lVar2,PTR_s_Buff_Churnwalker_ChainTetherSelf_10185a8b8,
                          *(undefined4 *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x260));
    uVar1 = uVar1 ^ 1;
  }
  return uVar1;
}




void FUN_10043a96c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_1004d2524(param_2);
  uVar3 = FUN_100015208(param_2,uVar1,0x12345678);
  (**(code **)(*(long *)(param_1 + 0x168) + 8))(param_1 + 0x168,uVar3);
  uVar1 = *param_3;
  uVar2 = FUN_1004d2524(param_2);
  uVar3 = FUN_100015208(param_2,uVar2,0x12345678);
  puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar3);
  *puVar4 = uVar1;
  return;
}




void FUN_10043aa04(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000196c8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043aa54(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017d44();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043aaa4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000199f8();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043aaf4(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000171a4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043ab44(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001767c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043ab94(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017880();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




bool FUN_10043abe4(long *param_1)

{
  uint local_14;
  
  FUN_1003adb94(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),&local_14);
  return (local_14 & 1) == 0;
}




bool FUN_10043ac1c(long *param_1)

{
  uint local_14;
  
  FUN_1003adb94(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),&local_14);
  return (local_14 & 4) == 0;
}




bool FUN_10043ac54(long *param_1)

{
  uint local_14;
  
  FUN_1003adb94(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),&local_14);
  return (local_14 & 2) == 0;
}




bool FUN_10043ac8c(long *param_1)

{
  uint local_14;
  
  FUN_1003adb94(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),&local_14);
  return (local_14 & 8) == 0;
}




void FUN_10043acc4(undefined8 param_1,int param_2)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar6 = (&DAT_101e480a8)[param_2];
  lVar2 = FUN_10042e580();
  *(undefined4 *)(lVar2 + 0x40) = 0x3dcccccd;
  *(byte *)(lVar2 + 0x44) = *(byte *)(lVar2 + 0x44) & 0xfe;
  lVar2 = FUN_10043ab44(lVar2 + 0x10);
  puVar5 = (&PTR_FUN_1014980b8)[param_2];
  *(undefined1 *)(lVar2 + 0x58) = 1;
  *(undefined **)(lVar2 + 0x40) = puVar5;
  lVar3 = FUN_10043ab44(lVar2 + 0x10);
  *(undefined1 *)(lVar3 + 0x58) = 2;
  *(undefined8 *)(lVar3 + 0x50) = 0;
  *(undefined1 *)(lVar3 + 0x50) = 2;
  *(undefined8 *)(lVar3 + 0x40) = uVar6;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  plVar4 = (long *)FUN_100433e34(lVar3 + 0x28);
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar6);
  lVar2 = FUN_10043ab44(lVar2 + 0x28);
  bVar1 = *(byte *)(lVar3 + 0x58);
  *(ushort *)(lVar2 + 0x58) = CONCAT11(*(byte *)(lVar2 + 0x59),bVar1);
  *(ushort *)(lVar2 + 0x58) =
       (ushort)bVar1 | (*(byte *)(lVar2 + 0x59) & 0xfb) << 8 | *(ushort *)(lVar3 + 0x58) & 0x400;
  uVar8 = *(undefined8 *)(lVar3 + 0x48);
  uVar7 = *(undefined8 *)(lVar3 + 0x40);
  *(undefined8 *)(lVar2 + 0x50) = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(lVar2 + 0x48) = uVar8;
  *(undefined8 *)(lVar2 + 0x40) = uVar7;
  plVar4 = (long *)FUN_1004385a0(lVar2 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010043adb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x30))(plVar4,uVar6);
  return;
}




void FUN_10043adbc(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e0c;
  FUN_1003dfee8(param_1,local_18,3,9);
  return;
}




void FUN_10043adf0(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90e0c;
  FUN_1003dfee8(param_1,local_18,2,9);
  return;
}




void FUN_10043ae24(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int local_40 [2];
  int local_38 [2];
  
  lVar2 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar6 = *(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x10) + 0x18);
  while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar6 = *(long *)(lVar6 + 0x20);
  }
  FUN_1003a4e5c(local_38,PTR_s_Buff_Churnwalker_ChainTether_10185a8d0);
  plVar7 = (long *)(lVar6 + 0x28);
  lVar6 = *plVar7;
  if (lVar6 == 0) {
LAB_10043aec8:
    uVar1 = 0xffffffff;
LAB_10043aecc:
    uVar3 = (*(code *)**(undefined8 **)(param_1 + 0x168))
                      (param_1 + 0x168,PTR_s___VAR1_INT___10185d7f8);
    puVar4 = (undefined4 *)(**(code **)(*(long *)(param_1 + 0x168) + 0x10))(param_1 + 0x168,uVar3);
    *puVar4 = uVar1;
    return;
  }
  while (((*(int *)(lVar6 + 0x314) != local_38[0] || (*(int *)(lVar6 + 0x310) != 0)) ||
         ((*(int *)(lVar2 + 0x260) != -1 && (*(int *)(lVar6 + 0x308) != *(int *)(lVar2 + 0x260))))))
  {
    lVar6 = *(long *)(lVar6 + 0x350);
    if (lVar6 == 0) goto LAB_10043aec8;
  }
  FUN_1003a4e5c(local_40,PTR_s_Buff_Churnwalker_ChainTether_10185a8d0);
  plVar5 = plVar7;
  while (((lVar6 = *plVar5, *(int *)(lVar6 + 0x314) != local_40[0] || (*(int *)(lVar6 + 0x310) != 0)
          ) || ((*(int *)(lVar2 + 0x260) != -1 &&
                (*(int *)(lVar6 + 0x308) != *(int *)(lVar2 + 0x260)))))) {
    plVar5 = (long *)(lVar6 + 0x350);
  }
  lVar2 = *plVar7;
  if (lVar2 != 0) {
    do {
      if (*(int *)(lVar2 + 0x30c) == *(int *)(lVar6 + 0x30c)) break;
      lVar2 = *(long *)(lVar2 + 0x350);
    } while (lVar2 != 0);
  }
  uVar1 = FUN_100432d40();
  goto LAB_10043aecc;
}




void FUN_10043b03c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,6,0x19,0);
  return;
}




undefined8 FUN_10043b050(undefined8 param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)(param_2 + 0x18);
  do {
    lVar3 = *plVar2;
    plVar2 = (long *)(lVar3 + 0x20);
  } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184daa8);
  lVar1 = *(long *)(lVar3 + 0x28);
  lVar3 = lVar1;
  if (lVar1 != 0) {
    do {
      if ((*(int *)(lVar3 + 0x314) == DAT_101d3e910) && (*(int *)(lVar3 + 0x310) == 0)) {
        return 0;
      }
      plVar2 = (long *)(lVar3 + 0x350);
      lVar3 = *plVar2;
    } while (*plVar2 != 0);
    do {
      if ((*(int *)(lVar1 + 0x314) == DAT_101d3e914) && (*(int *)(lVar1 + 0x310) == 0)) {
        return 0;
      }
      lVar1 = *(long *)(lVar1 + 0x350);
    } while (lVar1 != 0);
  }
  return 1;
}




ushort * FUN_10043b0d8(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ushort *puVar3;
  
  uVar2 = (ulong)DAT_101e94150;
  if (uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = &DAT_101e48150 + uVar2 * 0x4c;
    if (DAT_101e94150 == DAT_101e94152) {
      DAT_101e94150 = 0xffff;
    }
    else {
      DAT_101e94150 = *puVar3;
    }
    DAT_101e94154 = DAT_101e94154 + 1;
    lVar1 = uVar2 * 0x98;
    *(undefined8 *)(&DAT_101e48158 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined ***)puVar3 = &PTR_FUN_1014984a8;
    *(undefined8 *)(&DAT_101e48160 + lVar1) = 0;
    *(undefined8 *)(&DAT_101e48168 + lVar1) = 0;
    *(undefined4 *)(&DAT_101e48168 + lVar1) = 0xffffffff;
    DAT_101e94160 = DAT_101e94160 + 1;
    if (DAT_101e94164 < DAT_101e94160) {
      DAT_101e94164 = DAT_101e94160;
    }
  }
  FUN_100450f94(param_1,puVar3);
  return puVar3;
}




void FUN_10043b1c4(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_10149d178;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10043b2b0(long *param_1,float *param_2,float *param_3)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48 [2];
  
  iVar2 = *(int *)(*param_1 + 0x308);
  if (iVar2 == -1) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar4 + 0x260) != iVar2) {
      lVar4 = FUN_100345d90();
    }
  }
  fVar5 = (float)FUN_1003df74c(lVar4,**(undefined8 **)(*(long *)(lVar4 + 0x38) + 0x228),3);
  fVar7 = *(float *)(*(long *)(lVar4 + 0x40) + 0xec);
  fVar6 = (float)FUN_1003df710(lVar4,1,1);
  *param_2 = fVar5 + fVar7 * fVar6;
  puVar1 = PTR_s_Buff_Tony_Talent_TalentA_10185ce50;
  lVar3 = FUN_100345d90(*(undefined4 *)(lVar4 + 0x260));
  if ((lVar3 != 0) && (iVar2 = FUN_1003a47d0(lVar3,puVar1), iVar2 != 0)) {
    fVar6 = *param_2;
    local_48[0] = DAT_101d90e54;
    fVar5 = (float)FUN_1003dfee8(lVar4,local_48,1,9);
    *param_2 = *param_2 + fVar6 * fVar5;
  }
  *param_3 = *param_2;
  return;
}




void FUN_10043b3b0(undefined8 param_1)

{
  FUN_1003df710(param_1,2,1);
  return;
}




void FUN_10043b3bc(undefined8 param_1)

{
  FUN_1003df710(param_1,3,3);
  return;
}




void FUN_10043b3c8(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003dfe60(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),0,8,5,0);
  *(float *)(param_1[0x85] + 0x4c) = *(float *)(param_1[0x85] + 0x4c) + fVar1;
  return;
}




void FUN_10043b414(undefined8 param_1)

{
  FUN_1003dfe60(param_1,0,9,0x19,0);
  return;
}




void FUN_10043b428(undefined8 param_1)

{
  FUN_1003dfe60(param_1,4,5,0x19,0);
  return;
}




undefined1  [16] FUN_10043b43c(long *param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  ulong uVar5;
  undefined8 uVar6;
  undefined4 local_38 [2];
  
  iVar1 = *(int *)(*param_1 + 0x308);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    if (*(int *)(lVar2 + 0x260) != iVar1) {
      lVar2 = FUN_100345d90();
    }
  }
  auVar4 = FUN_1003df710(lVar2,1,0x13);
  uVar6 = auVar4._8_8_;
  uVar5 = auVar4._0_8_;
  iVar1 = FUN_1003a47d0(lVar2,PTR_s_Buff_Reza_Talent_Firemaker_10185ce20);
  if (iVar1 != 0) {
    local_38[0] = DAT_101d90dd8;
    fVar3 = (float)FUN_1003dfee8(lVar2,local_38,0,9);
    uVar5 = (ulong)(uint)(fVar3 * auVar4._0_4_);
    uVar6 = 0;
  }
  auVar4._8_8_ = uVar6;
  auVar4._0_8_ = uVar5;
  return auVar4;
}




void FUN_10043b4e8(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019860();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043b538(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017418();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043b588(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,2,0x19,0);
  return;
}




void FUN_10043b59c(undefined8 param_1)

{
  FUN_1003dfe60(param_1,1,3,0x19,0);
  return;
}




void FUN_10043b5b0(undefined8 param_1)

{
  FUN_1003dfe60(param_1,2,10,0x19,0);
  return;
}




void FUN_10043b5c4(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  undefined4 local_70;
  float local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  lVar3 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  lVar2 = *(long *)(*(long *)(lVar3 + 0x58) + 0x50);
  if ((((lVar2 != 0) && ((*(byte *)(lVar2 + 0x239) & 0x1c) != 0)) &&
      (iVar1 = *(int *)(local_40 + 0x18), iVar1 == *(int *)(lVar3 + 0x260))) &&
     ((*(byte *)(local_40 + 0xc) >> 4 & 1) == 0)) {
    fVar4 = (float)FUN_1003dfe60(lVar3,0,7,0x19,0);
    fVar6 = *(float *)(*(long *)(lVar3 + 0x40) + 0xfc);
    fVar5 = (float)FUN_1003dfe60(lVar3,0,8,0x19,0);
    local_6c = fVar4 - fVar6 * fVar5;
    if (0.0 < local_6c) {
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_98 = &PTR_FUN_101496b18;
      local_74 = DAT_1018589d8;
      local_68 = 1;
      local_50 = 0;
      local_5c = 0;
      local_64 = 0;
      local_48 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      local_7c = iVar1;
      iStack_78 = iVar1;
      local_70 = FUN_1003d4e0c(PTR_s_Buff_Idris_A_BarrierLockout_10185cd40);
      FUN_10049639c(&local_98,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_10043b6f4(undefined8 param_1)

{
  long lVar1;
  float fVar2;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  float local_54;
  undefined1 local_50;
  float *local_48;
  undefined4 local_40;
  int local_3c;
  long local_38;
  
  if ((DAT_101d23a38 != '\0') &&
     (FUN_10042f044(param_1,&local_38,&local_3c,&local_40,&local_48), local_3c == 2)) {
    lVar1 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    fVar2 = *local_48;
    local_54 = (float)FUN_1003df710(lVar1,1,1);
    local_54 = local_54 * fVar2;
    local_64 = *(undefined4 *)(lVar1 + 0x260);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_80 = &PTR_FUN_1014971e0;
    local_60 = 0x2bffffffff;
    local_58 = local_40;
    local_50 = 0;
    FUN_1004969f4(&local_80,&DAT_101e47d30);
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10043b7b8(long param_1,float *param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (DAT_101d23a38 != '\0') {
    lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
    plVar2 = (long *)(lVar3 + 0x18);
    do {
      lVar1 = *plVar2;
      plVar2 = (long *)(lVar1 + 0x20);
    } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184daa8);
    *param_2 = 0.0;
    for (lVar1 = *(long *)(lVar1 + 0x28); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x350)) {
      if ((*(int *)(lVar1 + 0x314) == DAT_101d3e994) && (*(int *)(lVar1 + 0x310) == 0)) {
        return;
      }
    }
    fVar4 = (float)FUN_1003df710(lVar3,2,1);
    *param_2 = fVar4;
    lVar1 = *(long *)(lVar3 + 0x40);
    fVar5 = *(float *)(lVar1 + 0x44) + *(float *)(lVar1 + 0xf8) * (*(float *)(lVar1 + 0x260) + 1.0);
    fVar6 = (float)NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar1 + 0x1ac),_DAT_101e9432c);
    fVar5 = _DAT_101e9426c;
    if (_DAT_101e9426c <= fVar6) {
      fVar5 = fVar6;
    }
    fVar6 = (float)FUN_1003df710(lVar3,3,1);
    fVar4 = fVar4 + fVar6 * fVar5;
    *param_2 = fVar4;
    *param_2 = fVar4 * *(float *)(param_1 + 0x328);
  }
  return;
}




void FUN_10043b8c8(undefined4 param_1,undefined8 param_2)

{
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  int local_44;
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_20;
  undefined4 local_18;
  
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_101496b18;
  local_44 = DAT_1018589d8;
  local_3c = 0x1bf800000;
  local_20 = 0;
  local_2c = 0;
  local_34 = 0;
  local_18 = DAT_101dc0b88;
  DAT_1018589d8 = DAT_1018589d8 + 1;
  local_4c = param_1;
  uStack_48 = param_1;
  local_40 = FUN_1003d4e0c(param_2);
  FUN_10049639c(&local_68,&DAT_101e47d30);
  return;
}




void FUN_10043b950(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  lVar16 = *(long *)(lVar14 + 0x18);
  while ((lVar16 != 0 && (*(int *)(*(long *)(lVar16 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar16 = *(long *)(lVar16 + 0x20);
  }
  uVar2 = *(undefined4 *)(lVar14 + 0x260);
  fVar18 = (float)FUN_1003df710(lVar14,5,1);
  uVar9 = DAT_101e94334;
  fVar21 = DAT_101e94274;
  lVar12 = *(long *)(lVar14 + 0x40);
  fVar20 = *(float *)(lVar12 + 0x4c);
  fVar19 = *(float *)(lVar12 + 0xfc);
  fVar22 = *(float *)(lVar12 + 0x100);
  fVar24 = *(float *)(lVar12 + 0x268);
  fVar23 = *(float *)(lVar12 + 0x1b4);
  uVar10 = FUN_1003a47d0(lVar14,PTR_s_Buff_Idris_Talent_PathOfTheSeeke_10185cd58);
  puVar8 = PTR_s_Buff_Idris_Perk_HybridPath_10185cd38;
  puVar15 = PTR_s_Buff_Idris_Perk_CrystalPath_10185cd30;
  puVar7 = PTR_s_Buff_Idris_Perk_WeaponPath_10185cd28;
  lVar14 = *(long *)(lVar16 + 0x28);
  lVar16 = lVar14;
  if (lVar14 == 0) {
    bVar5 = false;
    bVar4 = false;
    uVar13 = 0xffffffff;
    uVar11 = 0xffffffff;
  }
  else {
    do {
      lVar12 = lVar14;
      if ((*(int *)(lVar16 + 0x314) == DAT_101d2c764) && (*(int *)(lVar16 + 0x310) == 0)) {
        uVar11 = *(undefined4 *)(lVar16 + 0x30c);
        bVar4 = true;
        goto LAB_10043ba7c;
      }
      plVar1 = (long *)(lVar16 + 0x350);
      lVar16 = *plVar1;
    } while (*plVar1 != 0);
    bVar4 = false;
    uVar11 = 0xffffffff;
LAB_10043ba7c:
    do {
      if ((*(int *)(lVar12 + 0x314) == DAT_101d2c768) && (*(int *)(lVar12 + 0x310) == 0)) {
        uVar13 = *(undefined4 *)(lVar12 + 0x30c);
        bVar6 = 1;
        goto LAB_10043baac;
      }
      plVar1 = (long *)(lVar12 + 0x350);
      lVar12 = *plVar1;
    } while (*plVar1 != 0);
    bVar6 = 0;
    uVar13 = 0xffffffff;
LAB_10043baac:
    bVar5 = (bool)(bVar4 | bVar6);
    do {
      if ((*(int *)(lVar14 + 0x314) == DAT_101d2c76c) && (*(int *)(lVar14 + 0x310) == 0)) {
        uVar17 = *(undefined4 *)(lVar14 + 0x30c);
        bVar3 = true;
        goto LAB_10043bae4;
      }
      lVar14 = *(long *)(lVar14 + 0x350);
    } while (lVar14 != 0);
  }
  bVar3 = false;
  uVar17 = 0xffffffff;
LAB_10043bae4:
  if ((uVar10 & 1) == 0) {
    fVar20 = fVar20 + fVar22 * (fVar24 + 1.0);
    fVar20 = (float)NEON_fminnm(fVar20 + fVar20 * fVar23,uVar9);
    fVar18 = fVar18 + -1.0;
    if (fVar21 <= fVar20) {
      fVar21 = fVar20;
    }
    if ((fVar19 <= fVar18) || (fVar21 <= fVar18)) {
      if (bVar4) {
        local_c0 = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        local_c8 = &PTR_FUN_101496cd8;
        local_ac = uVar2;
        uStack_a8 = uVar11;
        FUN_100496580(&local_c8,&DAT_101e47d30);
        if (fVar18 < fVar19) {
          FUN_10043b8c8(uVar2,puVar7);
        }
        if (fVar21 <= fVar18) {
          return;
        }
      }
      else {
        if ((fVar19 <= fVar18) && (bVar5)) {
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = 0;
          local_c8 = &PTR_FUN_101496cd8;
          local_ac = uVar2;
          uStack_a8 = uVar13;
          FUN_100496580(&local_c8,&DAT_101e47d30);
        }
        if ((fVar21 <= fVar18) && (!(bool)((bVar4 | bVar3) ^ 1))) {
          local_c0 = 0;
          uStack_b8 = 0;
          local_b0 = 0;
          local_c8 = &PTR_FUN_101496cd8;
          local_ac = uVar2;
          uStack_a8 = uVar17;
          FUN_100496580(&local_c8,&DAT_101e47d30);
        }
        if (!bVar5 && fVar18 < fVar19) {
          FUN_10043b8c8(uVar2,puVar7);
        }
        if (bVar3 || fVar21 <= fVar18) {
          return;
        }
      }
      goto LAB_10043bb90;
    }
  }
  if (bVar5) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_c8 = &PTR_FUN_101496cd8;
    local_ac = uVar2;
    uStack_a8 = uVar13;
    FUN_100496580(&local_c8,&DAT_101e47d30);
  }
  if ((bool)(bVar4 | bVar3)) {
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    local_c8 = &PTR_FUN_101496cd8;
    local_ac = uVar2;
    uStack_a8 = uVar17;
    FUN_100496580(&local_c8,&DAT_101e47d30);
  }
  puVar15 = puVar8;
  if (bVar4) {
    return;
  }
LAB_10043bb90:
  FUN_10043b8c8(uVar2,puVar15);
  return;
}




void FUN_10043bca8(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  uint local_1c;
  undefined8 local_18;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042f044(param_1,&local_18,&local_1c,auStack_20,auStack_28);
    if ((local_1c & 0xfffffffe) == 4) {
      FUN_10043b950(local_18);
    }
  }
  return;
}




void FUN_10043bcf8(undefined8 param_1)

{
  FUN_1003df710(param_1,10,1);
  return;
}




void FUN_10043bd04(undefined8 param_1)

{
  FUN_1003df710(param_1,0xb,1);
  return;
}




void FUN_10043bd10(undefined8 param_1)

{
  FUN_1003df710(param_1,0xd,1);
  return;
}




void FUN_10043bd1c(long *param_1,undefined8 *param_2,undefined4 *param_3,float *param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  *param_2 = "u_Crystal_Path";
  *param_3 = 1;
  iVar1 = *(int *)(*param_1 + 0x308);
  lVar3 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
  if (*(int *)(lVar3 + 0x260) != iVar1) {
    lVar3 = FUN_100345d90(iVar1);
  }
  uVar2 = FUN_1003af01c(lVar3,0);
  *param_4 = (float)uVar2;
  return;
}




undefined8 FUN_10043bd80(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 local_158;
  undefined **local_150;
  long lStack_148;
  undefined1 local_140;
  undefined8 local_13c;
  undefined8 local_134;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined1 local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined2 local_f8;
  byte local_f6;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined8 local_ec;
  undefined1 local_e4;
  undefined **local_e0;
  long lStack_d8;
  undefined1 local_d0;
  undefined8 local_cc;
  undefined8 local_c4;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 local_7c;
  undefined1 local_74;
  
  lVar4 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  uVar1 = DAT_101d3e9ac;
  local_cc = 0;
  local_bc = 0;
  local_c4 = 0;
  uStack_a8 = 0xbf800000c0000000;
  local_b0 = 0xbf800000bf800000;
  local_b4 = 0;
  local_a0 = 0x3f800000;
  local_9c = 0xff;
  local_94 = 0xffffffff;
  local_8c = 0xffffffff;
  lVar5 = FUN_1003e10f0();
  uVar2 = DAT_101d3e9b0;
  local_7c = 0;
  local_74 = 0;
  uStack_80 = *(undefined4 *)(lVar4 + 0x260);
  local_84 = uVar1;
  local_e0 = &PTR_FUN_1014999d0;
  iVar3 = ((uint)*(byte *)(lVar5 + 0xe5) << 0x10 | 0x144010) + 0x10;
  local_98 = 1;
  local_88 = (undefined2)iVar3;
  local_86 = (undefined1)((uint)iVar3 >> 0x10);
  local_d0 = 3;
  local_13c = 0;
  local_12c = 0;
  local_134 = 0;
  local_124 = 0;
  uStack_118 = 0xbf800000c0000000;
  local_120 = 0xbf800000bf800000;
  local_110 = 0x3f800000;
  local_10c = 0xff;
  local_104 = 0xffffffff;
  local_fc = 0xffffffff;
  lStack_d8 = lVar4;
  lVar5 = FUN_1003e10f0();
  local_ec = 0;
  local_e4 = 0;
  uStack_f0 = *(undefined4 *)(lVar4 + 0x260);
  local_f4 = uVar2;
  local_150 = &PTR_FUN_1014999d0;
  local_f6 = *(byte *)(lVar5 + 0xe5) | 0x14;
  local_108 = 1;
  local_f8 = 0x4010;
  local_140 = 3;
  local_158 = 0;
  lStack_148 = lVar4;
  iVar3 = FUN_1003a6ce4(&local_e0,&local_158,1,0);
  if (iVar3 == 0) {
    FUN_1003a6ce4(&local_150,&local_158,1,0);
  }
  return local_158;
}




void FUN_10043bf08(long *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (DAT_101d23a38 != '\0') {
    lVar4 = *param_1;
    lVar3 = *(long *)(*(long *)(lVar4 + 0x10) + 0x10);
    uVar5 = *(undefined4 *)(lVar3 + 0x250);
    uVar6 = *(undefined4 *)(lVar3 + 600);
    lVar3 = lVar4 + 0x168;
    uVar1 = (*(code *)**(undefined8 **)(lVar4 + 0x168))(lVar3,PTR_s___VAR1_FLOAT___10185d7e8);
    puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x10))(lVar3,uVar1);
    *puVar2 = uVar5;
    uVar1 = (*(code *)**(undefined8 **)(lVar4 + 0x168))(lVar3,PTR_s___VAR2_FLOAT___10185d7f0);
    puVar2 = (undefined4 *)(**(code **)(*(long *)(lVar4 + 0x168) + 0x10))(lVar3,uVar1);
    *puVar2 = uVar6;
  }
  return;
}




void FUN_10043bfac(undefined8 param_1,undefined4 *param_2)

{
  long lVar1;
  
  lVar1 = FUN_10043bd80();
  if (lVar1 != 0) {
    *param_2 = *(undefined4 *)(lVar1 + 0x260);
  }
  return;
}




void FUN_10043bfd8(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100432da4(*param_1);
  *param_2 = uVar1;
  param_2[1] = 0;
  uVar1 = FUN_100432e08(*param_1);
  param_2[2] = uVar1;
  return;
}




float FUN_10043c014(long *param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(*param_1 + 0x308));
  fVar2 = (float)FUN_1003dfe60(uVar1,4,0xc,0x19,0);
  return fVar2 * 0.25;
}




void FUN_10043c04c(undefined8 param_1)

{
  undefined4 local_18 [2];
  
  local_18[0] = DAT_101d90b7c;
  FUN_1003dfee8(param_1,local_18,0,9);
  return;
}




void FUN_10043c080(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = FUN_10043bd80(*param_1);
  if (lVar1 != 0) {
    return;
  }
  FUN_1004370a0(*param_1);
  return;
}




void FUN_10043c0b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_10043bd80(*param_1);
  *param_2 = uVar1;
  return;
}




void FUN_10043c0e0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined4 local_58;
  float local_54;
  undefined1 local_50;
  long local_48;
  
  FUN_10042ecbc(param_1,&local_48);
  lVar2 = local_48;
  lVar8 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
  lVar1 = local_48 + 0x168;
  uVar3 = FUN_1004d2524("rampTimer");
  uVar4 = FUN_100015208("rampTimer",uVar3,0x12345678);
  pfVar5 = (float *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar1,uVar4);
  lVar2 = local_48;
  lVar1 = local_48 + 0x168;
  uVar3 = FUN_1004d2524("disableTimer");
  uVar4 = FUN_100015208("disableTimer",uVar3,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar1,uVar4);
  lVar2 = local_48;
  lVar1 = local_48 + 0x168;
  uVar3 = FUN_1004d2524("__VAR1_FLOAT__");
  uVar4 = FUN_100015208("__VAR1_FLOAT__",uVar3,0x12345678);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar1,uVar4);
  if (*pfVar6 <= 0.01) {
    if (*pfVar5 < 3.0) {
      *puVar7 = 0x3f800000;
      local_54 = *(float *)(local_48 + 0x328) * 0.16666667;
      local_64 = *(undefined4 *)(lVar8 + 0x260);
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      local_80 = &PTR_FUN_1014971e0;
      local_60 = 0x12ffffffff;
      local_58 = 1;
      local_50 = 0;
      FUN_1004969f4(&local_80,&DAT_101e47d30);
      *pfVar5 = *pfVar5 + *(float *)(local_48 + 0x328);
    }
  }
  else {
    *pfVar6 = *pfVar6 - *(float *)(local_48 + 0x328);
    *puVar7 = 0;
  }
  return;
}




void FUN_10043c29c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  long lVar4;
  long local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38;
  
  FUN_10042ecbc(param_1,&local_70);
  lVar4 = *(long *)(*(long *)(local_70 + 0x10) + 0x10);
  uVar1 = FUN_1004d2524("rampTimer");
  uVar2 = FUN_100015208("rampTimer",uVar1,0x12345678);
  pfVar3 = (float *)(**(code **)(*(long *)(local_70 + 0x168) + 0x10))(local_70 + 0x168,uVar2);
  local_3c = *pfVar3 * -0.16666667;
  local_4c = *(undefined4 *)(lVar4 + 0x260);
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = &PTR_FUN_1014971e0;
  local_48 = 0x12ffffffff;
  local_40 = 1;
  local_38 = 0;
  FUN_1004969f4(&local_68,&DAT_101e47d30);
  return;
}




void FUN_10043c36c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  long lVar7;
  long local_78;
  long local_70;
  undefined **local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  float local_3c;
  undefined1 local_38;
  
  FUN_10042e1f0(param_1,&local_70,&local_78);
  lVar2 = local_70;
  lVar7 = *(long *)(*(long *)(local_70 + 0x10) + 0x10);
  if (((*(int *)(local_78 + 0x10) != *(int *)(lVar7 + 0x260)) &&
      ((*(long *)(local_78 + 0x28) == 0 ||
       ((*(byte *)(*(long *)(local_78 + 0x28) + 0x2f4) >> 4 & 1) == 0)))) &&
     ((*(long *)(local_78 + 0x20) == 0 ||
      ((*(byte *)(*(long *)(local_78 + 0x20) + 0x2f4) >> 4 & 1) == 0)))) {
    lVar1 = local_70 + 0x168;
    uVar3 = FUN_1004d2524("rampTimer");
    uVar4 = FUN_100015208("rampTimer",uVar3,0x12345678);
    pfVar5 = (float *)(**(code **)(*(long *)(lVar2 + 0x168) + 0x10))(lVar1,uVar4);
    local_3c = *pfVar5 * -0.16666667;
    local_4c = *(undefined4 *)(lVar7 + 0x260);
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    local_68 = &PTR_FUN_1014971e0;
    local_48 = 0x12ffffffff;
    local_40 = 1;
    local_38 = 0;
    FUN_1004969f4(&local_68,&DAT_101e47d30);
    lVar1 = local_70;
    lVar2 = local_70 + 0x168;
    uVar3 = FUN_1004d2524("rampTimer");
    uVar4 = FUN_100015208("rampTimer",uVar3,0x12345678);
    puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar1 + 0x168) + 0x10))(lVar2,uVar4);
    *puVar6 = 0;
    if (*(int *)(local_78 + 0x18) == *(int *)(lVar7 + 0x260)) {
      uVar3 = FUN_1004d2524("disableTimer");
      uVar4 = FUN_100015208("disableTimer",uVar3,0x12345678);
      puVar6 = (undefined4 *)
               (**(code **)(*(long *)(local_70 + 0x168) + 0x10))(local_70 + 0x168,uVar4);
      *puVar6 = 0x40a00000;
    }
  }
  return;
}




void FUN_10043c50c(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  float local_54;
  undefined2 local_50;
  undefined1 local_4e;
  long local_48;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_48);
    lVar5 = *(long *)(*(long *)(local_48 + 0x10) + 0x10);
    fVar6 = (float)FUN_100032228();
    uVar1 = FUN_1004d2524("timeOfLastDamageExchange");
    uVar2 = FUN_100015208("timeOfLastDamageExchange",uVar1,0x12345678);
    pfVar3 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    fVar8 = *pfVar3;
    fVar7 = (float)FUN_1003df6c8(PTR_s__Item_Lifespring__10185ba68,1,1);
    if (fVar7 + fVar8 < fVar6) {
      lVar4 = *(long *)(lVar5 + 0x40);
      fVar6 = *(float *)(lVar4 + 0x38) +
              *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
      NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
      fVar7 = DAT_101e94260 - *(float *)(lVar4 + 0x308);
      fVar6 = (float)FUN_1003df6c8(DAT_101e94260,*(float *)(lVar4 + 0x308),DAT_101e94320,
                                   PTR_s__Item_Lifespring__10185ba68,0,1);
      local_54 = fVar7 * fVar6 * *(float *)(local_48 + 0x328);
      if (1.0 < local_54) {
        local_5c = *(undefined4 *)(lVar5 + 0x260);
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        local_78 = &PTR_FUN_101497218;
        uStack_58 = 0;
        local_50 = 0x100;
        local_4e = 0;
        FUN_100496328(&local_78,&DAT_101e47d30);
      }
    }
  }
  return;
}




void FUN_10043c66c(long *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  iVar1 = *(int *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260);
  if ((((*(int *)(local_40 + 0x10) == iVar1) && (*(long *)(local_40 + 0x20) != 0)) &&
      ((*(byte *)(*(long *)(local_40 + 0x20) + 0x2f4) & 1) != 0)) ||
     (((*(int *)(local_40 + 0x18) == iVar1 && (*(long *)(local_40 + 0x28) != 0)) &&
      ((*(byte *)(*(long *)(local_40 + 0x28) + 0x2f4) & 1) != 0)))) {
    uVar5 = FUN_100032228();
    uVar2 = FUN_1004d2524("timeOfLastDamageExchange");
    uVar3 = FUN_100015208("timeOfLastDamageExchange",uVar2,0x12345678);
    puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    *puVar4 = uVar5;
  }
  return;
}




void FUN_10043c734(undefined8 param_1)

{
  undefined **local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  int local_2c;
  undefined4 uStack_28;
  long local_20;
  long lStack_18;
  
  FUN_10042e1f0(param_1,&lStack_18,&local_20);
  local_2c = *(int *)(local_20 + 0x10);
  if ((local_2c == *(int *)(*(long *)(*(long *)(lStack_18 + 0x10) + 0x10) + 0x260)) &&
     ((*(byte *)(*(long *)(local_20 + 0x20) + 0x2f4) & 1) != 0)) {
    uStack_28 = *(undefined4 *)(lStack_18 + 0x30c);
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    local_48 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_48,&DAT_101e47d30);
  }
  return;
}




void FUN_10043c7ac(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  float fVar13;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined1 local_30;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_28);
    puVar2 = PTR_s__Item_SerpentMask__10185baa0;
    uVar3 = FUN_1010a1520();
    lVar4 = FUN_1010a0e0c(uVar3,0,puVar2,0);
    plVar5 = *(long **)(lVar4 + 0x1a8);
    fVar9 = 0.0;
    fVar10 = 0.0;
    uVar11 = 0;
    uVar12 = 0;
    if (*plVar5 != 0) {
      fVar10 = 0.0;
      uVar11 = 0;
      uVar12 = 0;
      if (plVar5[1] != 0) {
        fVar10 = *(float *)(plVar5[1] + 8);
        if (plVar5[2] == 0) {
          uVar11 = 0;
          uVar12 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(plVar5[2] + 8);
          uVar11 = (undefined2)uVar1;
          uVar12 = (undefined2)((uint)uVar1 >> 0x10);
        }
      }
    }
    lVar4 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    lVar7 = *(long *)(lVar4 + 0x40);
    fVar13 = *(float *)(lVar7 + 0xd8) +
             *(float *)(lVar7 + 0x18c) * (*(float *)(lVar7 + 0x2f4) + 1.0);
    NEON_fminnm(fVar13 + fVar13 * *(float *)(lVar7 + 0x240),DAT_101e943c0);
    fVar13 = (float)(int)(fVar10 + ((float)CONCAT22(uVar12,uVar11) - fVar10) *
                                   (DAT_101e94300 * 0.09090909 + -0.09090909));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(local_28 + 0x344));
    if (*plVar5 != 0) {
      lVar7 = 0;
      do {
        lVar8 = *(long *)((long)plVar5 + lVar7 + 8);
        iVar6 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar8 != 0 && iVar6 != 0x10);
      if (lVar8 != 0) {
        fVar9 = *(float *)(lVar8 + 8);
      }
    }
    fVar9 = (float)NEON_fminnm(fVar13,fVar13 / fVar9 + fVar10);
    local_34 = (int)fVar9;
    local_3c = *(undefined4 *)(lVar4 + 0x260);
    uStack_38 = *(undefined4 *)(local_28 + 0x30c);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = &PTR_FUN_1014972c0;
    local_30 = 1;
    FUN_1004968dc(&local_58,&DAT_101e47d30);
  }
  return;
}




void FUN_10043c920(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  undefined **local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int local_3c;
  undefined1 local_38;
  long local_30;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_28,&local_30);
    puVar1 = PTR_s__Item_SerpentMask__10185baa0;
    lVar4 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    if (((*(int *)(local_30 + 0x10) == *(int *)(lVar4 + 0x260)) &&
        ((*(byte *)(*(long *)(local_30 + 0x20) + 0x2f4) & 1) != 0)) && (*(int *)(local_30 + 8) == 0)
       ) {
      uVar2 = FUN_1010a1520();
      lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
      fVar5 = 0.0;
      if (**(long **)(lVar3 + 0x1a8) != 0) {
        fVar5 = *(float *)(**(long **)(lVar3 + 0x1a8) + 8);
      }
      fVar8 = *(float *)(local_30 + 0x54) * fVar5;
      if (*(float *)(local_30 + 0x54) <= 0.0) {
        fVar8 = 0.0;
      }
      lVar4 = *(long *)(lVar4 + 0x40);
      fVar7 = *(float *)(lVar4 + 0x38) +
              *(float *)(lVar4 + 0xec) * (*(float *)(lVar4 + 0x254) + 1.0);
      NEON_fminnm(fVar7 + fVar7 * *(float *)(lVar4 + 0x1a0),DAT_101e94320);
      uVar6 = NEON_fminnm(fVar8,DAT_101e94260 - *(float *)(lVar4 + 0x308));
      fVar8 = (float)NEON_fminnm(uVar6,fVar5 * (float)*(ushort *)(local_28 + 0x344));
      *(float *)(local_30 + 0x5c) = fVar8 + *(float *)(local_30 + 0x5c);
      local_44 = *(undefined4 *)(*(long *)(*(long *)(local_28 + 0x10) + 0x10) + 0x260);
      uStack_40 = *(undefined4 *)(local_28 + 0x30c);
      local_3c = (uint)*(ushort *)(local_28 + 0x344) - (int)(fVar8 / fVar5);
      local_58 = 0;
      uStack_50 = 0;
      local_48 = 0;
      local_60 = &PTR_FUN_1014972c0;
      local_38 = 1;
      FUN_1004968dc(&local_60,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_10043ca94(undefined8 param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  float fVar13;
  undefined **local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  int local_34;
  undefined1 local_30;
  long local_28;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_28);
    puVar2 = PTR_s__Item_EveOfHarvest__10185ba40;
    uVar3 = FUN_1010a1520();
    lVar4 = FUN_1010a0e0c(uVar3,0,puVar2,0);
    plVar5 = *(long **)(lVar4 + 0x1a8);
    fVar9 = 0.0;
    fVar10 = 0.0;
    uVar11 = 0;
    uVar12 = 0;
    if (*plVar5 != 0) {
      fVar10 = 0.0;
      uVar11 = 0;
      uVar12 = 0;
      if (plVar5[1] != 0) {
        fVar10 = *(float *)(plVar5[1] + 8);
        if (plVar5[2] == 0) {
          uVar11 = 0;
          uVar12 = 0;
        }
        else {
          uVar1 = *(undefined4 *)(plVar5[2] + 8);
          uVar11 = (undefined2)uVar1;
          uVar12 = (undefined2)((uint)uVar1 >> 0x10);
        }
      }
    }
    lVar4 = *(long *)(*(long *)(local_28 + 0x10) + 0x10);
    lVar7 = *(long *)(lVar4 + 0x40);
    fVar13 = *(float *)(lVar7 + 0xd8) +
             *(float *)(lVar7 + 0x18c) * (*(float *)(lVar7 + 0x2f4) + 1.0);
    NEON_fminnm(fVar13 + fVar13 * *(float *)(lVar7 + 0x240),DAT_101e943c0);
    fVar13 = (float)(int)(fVar10 + ((float)CONCAT22(uVar12,uVar11) - fVar10) *
                                   (DAT_101e94300 * 0.09090909 + -0.09090909));
    fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(local_28 + 0x344));
    if (*plVar5 != 0) {
      lVar7 = 0;
      do {
        lVar8 = *(long *)((long)plVar5 + lVar7 + 8);
        iVar6 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar8 != 0 && iVar6 != 0x10);
      if (lVar8 != 0) {
        fVar9 = *(float *)(lVar8 + 8);
      }
    }
    fVar9 = (float)NEON_fminnm(fVar13,fVar13 / fVar9 + fVar10);
    local_34 = (int)fVar9;
    local_3c = *(undefined4 *)(lVar4 + 0x260);
    uStack_38 = *(undefined4 *)(local_28 + 0x30c);
    local_50 = 0;
    uStack_48 = 0;
    local_40 = 0;
    local_58 = &PTR_FUN_1014972c0;
    local_30 = 1;
    FUN_1004968dc(&local_58,&DAT_101e47d30);
  }
  return;
}




void FUN_10043cc08(undefined8 param_1)

{
  ushort uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  int local_4c;
  undefined1 local_48;
  long local_40;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042e1f0(param_1,&local_38,&local_40);
    puVar2 = PTR_s__Item_EveOfHarvest__10185ba40;
    lVar5 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    if (((*(int *)(local_40 + 0x10) == *(int *)(lVar5 + 0x260)) &&
        ((*(byte *)(*(long *)(local_40 + 0x20) + 0x2f4) & 1) != 0)) && (*(int *)(local_40 + 8) == 1)
       ) {
      uVar1 = *(ushort *)(local_38 + 0x344);
      uVar3 = FUN_1010a1520();
      lVar4 = FUN_1010a0e0c(uVar3,0,puVar2,0);
      fVar6 = 0.0;
      if (**(long **)(lVar4 + 0x1a8) != 0) {
        fVar6 = *(float *)(**(long **)(lVar4 + 0x1a8) + 8);
      }
      fVar9 = *(float *)(local_40 + 0x54) * fVar6;
      if (*(float *)(local_40 + 0x54) <= 0.0) {
        fVar9 = 0.0;
      }
      lVar5 = *(long *)(lVar5 + 0x40);
      fVar8 = *(float *)(lVar5 + 0x38) +
              *(float *)(lVar5 + 0xec) * (*(float *)(lVar5 + 0x254) + 1.0);
      NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar5 + 0x1a0),DAT_101e94320);
      uVar7 = NEON_fminnm(fVar9,DAT_101e94260 - *(float *)(lVar5 + 0x308));
      fVar9 = (float)NEON_fminnm(uVar7,fVar6 * (float)uVar1);
      *(float *)(local_40 + 0x5c) = fVar9 + *(float *)(local_40 + 0x5c);
      local_54 = *(undefined4 *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260);
      uStack_50 = *(undefined4 *)(local_38 + 0x30c);
      local_4c = (uint)*(ushort *)(local_38 + 0x344) - (int)(fVar9 / fVar6);
      local_68 = 0;
      uStack_60 = 0;
      local_58 = 0;
      local_70 = &PTR_FUN_1014972c0;
      local_48 = 1;
      FUN_1004968dc(&local_70,&DAT_101e47d30);
    }
  }
  return;
}




void FUN_10043cd84(long *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  lVar5 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  if ((*(int *)(local_40 + 0x10) == *(int *)(lVar5 + 0x260)) &&
     ((*(byte *)(local_40 + 0xc) >> 2 & 1) != 0)) {
    uVar1 = FUN_1004d2524("attackCounter");
    uVar2 = FUN_100015208("attackCounter",uVar1,0x12345678);
    piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
    if (*piVar3 == 0) {
      local_7c = *(undefined4 *)(lVar5 + 0x260);
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_98 = &PTR_FUN_101496b18;
      local_74 = DAT_1018589d8;
      local_6c = 0x1bf800000;
      local_50 = 0;
      local_5c = 0;
      local_64 = 0;
      local_48 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      uStack_78 = local_7c;
      local_70 = FUN_1003d4e0c(PTR_s_Buff_Item_AlternatingCurrent_10185c2d0);
      FUN_10049639c(&local_98,&DAT_101e47d30);
      uVar1 = FUN_1004d2524("attackCounter");
      uVar2 = FUN_100015208("attackCounter",uVar1,0x12345678);
      piVar3 = (int *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
      *piVar3 = *piVar3 + 1;
    }
    else {
      uVar1 = FUN_1004d2524("attackCounter");
      uVar2 = FUN_100015208("attackCounter",uVar1,0x12345678);
      puVar4 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,uVar2);
      *puVar4 = 0;
    }
  }
  return;
}




void FUN_10043cf20(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined **local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  int local_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 auStack_b0 [112];
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  puVar1 = PTR_s__Item_AlternatingCurrent__10185b9f8;
  lVar5 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  if ((*(int *)(local_40 + 0x10) == *(int *)(lVar5 + 0x260)) &&
     ((*(byte *)(local_40 + 0xc) >> 2 & 1) != 0)) {
    uVar2 = FUN_1010a1520();
    lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
    lVar4 = **(long **)(lVar3 + 0x1a8);
    fVar6 = 0.0;
    if (lVar4 == 0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = *(float *)(lVar4 + 8);
      lVar3 = (*(long **)(lVar3 + 0x1a8))[1];
      if (lVar3 != 0) {
        fVar6 = *(float *)(lVar3 + 8);
      }
    }
    lVar3 = *(long *)(*(long *)(local_40 + 0x28) + 0x40);
    fVar8 = *(float *)(lVar3 + 0x4c) + *(float *)(lVar3 + 0x100) * (*(float *)(lVar3 + 0x268) + 1.0)
    ;
    NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar3 + 0x1b4),DAT_101e94334);
    FUN_1003462a0(fVar7 + fVar6 * DAT_101e94274,auStack_b0,*(undefined4 *)(local_40 + 0x10),
                  *(undefined4 *)(local_40 + 0x18),1,1,local_40 + 100,
                  **(undefined8 **)(local_38 + 0x40),0,1);
    FUN_10010cbe0(auStack_b0);
    local_ec = *(undefined4 *)(lVar5 + 0x260);
    uStack_e8 = *(undefined4 *)(local_40 + 0x18);
    local_100 = 0;
    uStack_f8 = 0;
    local_f0 = 0;
    local_108 = &PTR_FUN_101496b18;
    local_e4 = DAT_1018589d8;
    local_dc = 0x13f000000;
    local_c0 = 0;
    local_cc = 0;
    local_d4 = 0;
    local_b8 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_e0 = FUN_1003d4e0c(PTR_s_Buff_Item_ShowAltCurrentHitEffec_10185c2d8);
    FUN_10049639c(&local_108,&DAT_101e47d30);
    local_114 = *(undefined4 *)(lVar5 + 0x260);
    uStack_110 = *(undefined4 *)(local_38 + 0x30c);
    local_128 = 0;
    uStack_120 = 0;
    local_118 = 0;
    local_130 = &PTR_FUN_101496cd8;
    FUN_100496580(&local_130,&DAT_101e47d30);
  }
  return;
}




float FUN_10043d0f8(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  puVar1 = PTR_s__Item_HealingFlask__10185aaf0;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  fVar4 = (float)FUN_1003e001c(param_2,lVar3,2,3);
  if (**(long **)(lVar3 + 0x1a8) == 0) {
    fVar5 = 0.0;
  }
  else {
    fVar5 = *(float *)(**(long **)(lVar3 + 0x1a8) + 8);
  }
  return (*(float *)(*param_1 + 0x328) * fVar4) / fVar5;
}




void FUN_10043d17c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  float *pfVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined **local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  int local_6c;
  undefined1 local_68;
  long local_60;
  long local_58;
  
  FUN_10042e1f0(param_1,&local_58,&local_60);
  lVar11 = *(long *)(*(long *)(local_58 + 0x10) + 0x10);
  if (*(int *)(local_60 + 0x10) != *(int *)(lVar11 + 0x260)) {
    return;
  }
  if (*(int *)(local_60 + 8) != 0) {
    return;
  }
  if (*(long *)(local_60 + 0x20) == 0) {
    return;
  }
  if ((*(byte *)(*(long *)(local_60 + 0x20) + 0x2f4) & 1) == 0) {
    return;
  }
  uVar12 = FUN_100032228();
  lVar7 = local_58;
  puVar2 = PTR_s_breakingPointTimeOfLastAttack_10185d5d8;
  lVar1 = local_58 + 0x168;
  uVar3 = FUN_1004d2524(PTR_s_breakingPointTimeOfLastAttack_10185d5d8);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  puVar5 = (undefined4 *)(**(code **)(*(long *)(lVar7 + 0x168) + 0x10))(lVar1,uVar4);
  lVar7 = local_58;
  *puVar5 = uVar12;
  *(undefined4 *)(local_58 + 0x324) = 0;
  puVar2 = PTR_s_breakingPointRemainingDamage_10185d5d0;
  fVar15 = *(float *)(local_60 + 0x54);
  lVar1 = local_58 + 0x168;
  uVar3 = FUN_1004d2524(PTR_s_breakingPointRemainingDamage_10185d5d0);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar7 + 0x168) + 0x10))(lVar1,uVar4);
  puVar2 = PTR_s__Item_BreakingPoint__10185ba18;
  fVar15 = *pfVar6 + fVar15;
  uVar4 = FUN_1010a1520();
  lVar7 = FUN_1010a0e0c(uVar4,0,puVar2,0);
  lVar1 = local_58;
  puVar2 = PTR_s_breakingPointRemainingDamage_10185d5d0;
  plVar8 = *(long **)(lVar7 + 0x1a8);
  if (*plVar8 == 0) {
    fVar13 = 0.0;
  }
  else {
    lVar7 = 0;
    do {
      lVar10 = *(long *)((long)plVar8 + lVar7 + 8);
      iVar9 = (int)lVar7;
      lVar7 = lVar7 + 8;
    } while (lVar10 != 0 && iVar9 != 8);
    if (lVar10 == 0) {
      fVar13 = 0.0;
    }
    else {
      fVar13 = *(float *)(lVar10 + 8);
    }
    if (*(char *)(*(long *)(lVar11 + 0x38) + 0x60) == '\0') {
      lVar7 = 8;
      do {
        lVar10 = *(long *)((long)plVar8 + lVar7);
        if (lVar10 == 0) break;
        iVar9 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (iVar9 != 0x30);
    }
    else {
      lVar7 = 0;
      do {
        lVar10 = *(long *)((long)plVar8 + lVar7 + 8);
        iVar9 = (int)lVar7;
        lVar7 = lVar7 + 8;
      } while (lVar10 != 0 && iVar9 != 0x10);
    }
    if (lVar10 != 0) {
      fVar14 = *(float *)(lVar10 + 8);
      goto LAB_10043d348;
    }
  }
  fVar14 = 0.0;
LAB_10043d348:
  iVar9 = 0;
  for (fVar13 = fVar13 + (float)*(ushort *)(local_58 + 0x344) * fVar14; fVar13 = (float)(int)fVar13,
      fVar13 < fVar15; fVar13 = fVar13 + fVar14) {
    fVar15 = fVar15 - fVar13;
    iVar9 = iVar9 + 1;
  }
  lVar7 = local_58 + 0x168;
  uVar3 = FUN_1004d2524(PTR_s_breakingPointRemainingDamage_10185d5d0);
  uVar4 = FUN_100015208(puVar2,uVar3,0x12345678);
  pfVar6 = (float *)(**(code **)(*(long *)(lVar1 + 0x168) + 0x10))(lVar7,uVar4);
  *pfVar6 = fVar15;
  if (iVar9 != 0) {
    local_74 = *(undefined4 *)(lVar11 + 0x260);
    uStack_70 = *(undefined4 *)(local_58 + 0x30c);
    local_6c = (uint)*(ushort *)(local_58 + 0x344) + iVar9;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    local_90 = &PTR_FUN_1014972c0;
    local_68 = 1;
    FUN_1004968dc(&local_90,&DAT_101e47d30);
  }
  return;
}




void FUN_10043d408(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  long lVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined **local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  uint local_64;
  undefined1 local_60;
  long local_58;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_58);
    lVar11 = *(long *)(*(long *)(local_58 + 0x10) + 0x10);
    fVar12 = (float)FUN_100032228();
    puVar1 = PTR_s_breakingPointTimeOfLastAttack_10185d5d8;
    uVar2 = FUN_1004d2524(PTR_s_breakingPointTimeOfLastAttack_10185d5d8);
    uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
    pfVar4 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar3);
    puVar1 = PTR_s__Item_BreakingPoint__10185ba18;
    fVar14 = *pfVar4;
    uVar3 = FUN_1010a1520();
    lVar5 = FUN_1010a0e0c(uVar3,0,puVar1,0);
    lVar9 = local_58;
    puVar1 = PTR_s_breakingPointRemainingDamage_10185d5d0;
    fVar13 = 0.0;
    if (**(long **)(lVar5 + 0x1a8) != 0) {
      lVar10 = 8;
      do {
        lVar7 = *(long *)((long)*(long **)(lVar5 + 0x1a8) + lVar10);
        if (lVar7 == 0) break;
        iVar8 = (int)lVar10;
        lVar10 = lVar10 + 8;
      } while (iVar8 != 0x20);
      if (lVar7 != 0) {
        fVar13 = *(float *)(lVar7 + 8);
      }
    }
    if (fVar13 + fVar14 < fVar12) {
      lVar10 = local_58 + 0x168;
      uVar2 = FUN_1004d2524(PTR_s_breakingPointRemainingDamage_10185d5d0);
      uVar3 = FUN_100015208(puVar1,uVar2,0x12345678);
      puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x168) + 0x10))(lVar10,uVar3);
      *puVar6 = 0;
      if (*(ushort *)(local_58 + 0x344) != 0) {
        fVar12 = 0.0;
        if (**(long **)(lVar5 + 0x1a8) != 0) {
          lVar9 = 0;
          do {
            lVar10 = *(long *)((long)*(long **)(lVar5 + 0x1a8) + lVar9 + 8);
            if (lVar10 == 0) break;
            iVar8 = (int)lVar9;
            lVar9 = lVar9 + 8;
          } while (iVar8 != 0x20);
          if (lVar10 != 0) {
            fVar12 = *(float *)(lVar10 + 8);
          }
        }
        local_64 = (uint)((float)*(ushort *)(local_58 + 0x344) - fVar12);
        local_64 = local_64 & ((int)local_64 >> 0x1f ^ 0xffffffffU);
        local_6c = *(undefined4 *)(lVar11 + 0x260);
        uStack_68 = *(undefined4 *)(local_58 + 0x30c);
        local_80 = 0;
        uStack_78 = 0;
        local_70 = 0;
        local_88 = &PTR_FUN_1014972c0;
        local_60 = 1;
        FUN_1004968dc(&local_88,&DAT_101e47d30);
      }
    }
  }
  return;
}




void FUN_10043d5dc(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  
  uVar1 = FUN_100345d90(*(undefined4 *)(param_1 + 0x308));
  lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x10);
  uVar3 = *(undefined4 *)(lVar2 + 0x250);
  fVar4 = *(float *)(lVar2 + 0x254);
  uVar5 = *(undefined4 *)(lVar2 + 600);
  fVar6 = *(float *)(lVar2 + 0x2ec);
  *(undefined8 *)(param_2 + 8) = uVar1;
  *(undefined4 *)(param_2 + 0x48) = 1;
  *(undefined4 *)(param_2 + 0x14) = uVar3;
  *(float *)(param_2 + 0x18) = fVar6 + fVar4;
  *(undefined4 *)(param_2 + 0x1c) = uVar5;
  *(undefined4 *)(param_2 + 0x30) = 0x43100000;
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff9f | 0x8010;
  return;
}




void FUN_10043d65c(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001992c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043d6ac(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_1000187c4();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043d6fc(void)

{
  FUN_1003df6c8(PTR_s__Item_RooksDecree__10185ba98,2,1);
  return;
}




void FUN_10043d710(long *param_1,float *param_2,undefined4 *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*param_1 + 0x308));
  fVar1 = (float)FUN_1003df6c8(PTR_s__Item_RooksDecree__10185ba98,1,1);
  fVar2 = (float)FUN_1003df6c8(PTR_s__Item_RooksDecree__10185ba98,0,1);
  *param_2 = fVar1 + fVar3 * fVar2;
  *param_3 = 0xbf800000;
  return;
}




void FUN_10043d784(void)

{
  FUN_1003df6c8(PTR_s__Item_Aftershock__10185b9f0,0,1);
  return;
}




void FUN_10043d798(undefined8 param_1)

{
  char cVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  char *pcVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined **local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  uint uStack_50;
  float local_4c;
  undefined1 local_48;
  long local_40;
  long local_38;
  
  FUN_10042e1f0(param_1,&local_38,&local_40);
  if ((((*(int *)(local_40 + 0x10) == *(int *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260)
        ) && (*(long *)(local_40 + 0x20) != 0)) &&
      (iVar4 = FUN_10043d9a0(), puVar2 = PTR_s__Item_JourneyBoots__10185ab20, iVar4 != 0)) &&
     ((*(byte *)(local_40 + 0xc) >> 4 & 1) == 0)) {
    uVar5 = FUN_1010a1520();
    lVar6 = FUN_1010a0e0c(uVar5,0,puVar2,0);
    fVar14 = 0.0;
    if (**(long **)(lVar6 + 0x1a8) != 0) {
      lVar12 = 8;
      do {
        lVar9 = *(long *)((long)*(long **)(lVar6 + 0x1a8) + lVar12);
        if (lVar9 == 0) break;
        iVar4 = (int)lVar12;
        lVar12 = lVar12 + 8;
      } while (iVar4 != 0x20);
      fVar14 = 0.0;
      if (lVar9 != 0) {
        fVar14 = *(float *)(lVar9 + 8);
      }
    }
    lVar6 = *(long *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184e000))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    iVar4 = FUN_1003b1948(DAT_101d90978,PTR_s__Item_JourneyBoots__10185ab20);
    uVar8 = (ulong)*(byte *)(lVar6 + 0xdd) & 0x7f;
    if ((int)uVar8 != 0) {
      uVar10 = 0;
      bVar3 = true;
      do {
        lVar12 = *(long *)(lVar6 + uVar10 * 8 + 0x38);
        if ((lVar12 != 0) && (*(int *)(lVar12 + 0x48) == iVar4)) break;
        uVar10 = uVar10 + 1;
        bVar3 = uVar10 < uVar8;
      } while (uVar8 != uVar10);
      if (bVar3) {
        uVar10 = 0;
        do {
          lVar12 = *(long *)(lVar6 + uVar10 * 8 + 0x38);
          if ((lVar12 != 0) && (*(int *)(lVar12 + 0x48) == iVar4)) {
            uVar7 = *(undefined4 *)(lVar12 + 0x4c);
            goto LAB_10043d900;
          }
          uVar10 = uVar10 + 1;
        } while (uVar8 != uVar10);
        uVar7 = 0xffffffff;
LAB_10043d900:
        fVar13 = (float)FUN_10043da00(lVar6,uVar7);
        if (fVar14 < fVar13) {
          uStack_50 = 0x811c9dc5;
          local_54 = *(undefined4 *)(*(long *)(*(long *)(local_38 + 0x10) + 0x10) + 0x260);
          cVar1 = *PTR_s_Ability__Item__JourneyBoots_101858e18;
          pcVar11 = PTR_s_Ability__Item__JourneyBoots_101858e18;
          while (cVar1 != '\0') {
            pcVar11 = pcVar11 + 1;
            uStack_50 = (uStack_50 ^ (int)cVar1) * 0x1000193;
            cVar1 = *pcVar11;
          }
          local_68 = 0;
          uStack_60 = 0;
          local_58 = 0;
          local_70 = &PTR_FUN_101497330;
          local_48 = 1;
          local_4c = fVar14;
          FUN_10049650c(&local_70,&DAT_101e47d30);
        }
      }
    }
  }
  return;
}




undefined8 FUN_10043d9a0(long param_1)

{
  int iVar1;
  
  while( true ) {
    if ((*(byte *)(param_1 + 0x2f4) & 1) != 0) {
      return 1;
    }
    iVar1 = FUN_1003461dc(param_1);
    if ((iVar1 == -1) || ((*(byte *)(param_1 + 0x2f6) >> 3 & 1) != 0)) break;
    FUN_1003461dc(param_1);
    param_1 = FUN_100345d90();
    if (param_1 == 0) {
      return 0;
    }
  }
  return 0;
}




undefined1  [16] FUN_10043da00(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar3 [16];
  
  for (plVar1 = (long *)(param_1 + 0x38);
      (lVar2 = *plVar1, lVar2 == 0 || (*(int *)(lVar2 + 0x4c) != param_2)); plVar1 = plVar1 + 1) {
  }
  if (*(long *)(lVar2 + 0x30) != 0) {
    FUN_10045f0f0();
    auVar3._4_4_ = extraout_var;
    auVar3._0_4_ = extraout_s0;
    auVar3._8_8_ = extraout_var_00;
    return auVar3;
  }
  return ZEXT816(0);
}




void FUN_10043da34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  lVar1 = FUN_10042e2c8();
  lVar2 = FUN_10049be00(lVar1 + 0x10);
  *(undefined4 *)(lVar2 + 0x58) = 1;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined4 *)(lVar2 + 0x18) = 2;
  plVar3 = (long *)FUN_10049bfec(lVar1 + 0x10);
  (**(code **)(*plVar3 + 0x38))();
  lVar1 = FUN_10042e3b0(param_1);
  FUN_10049b814(lVar1 + 0x10);
  return;
}




void FUN_10043daa0(void)

{
  FUN_1003df6c8(PTR_s__Item_SprintBoots__10185ab00,1,1);
  return;
}




void FUN_10043dab4(void)

{
  FUN_1003df6c8(PTR_s__Item_TravelBoots__10185ab10,2,1);
  return;
}




void FUN_10043dac8(void)

{
  FUN_1003df6c8(PTR_s__Item_JourneyBoots__10185ab20,2,1);
  return;
}




void FUN_10043dadc(void)

{
  FUN_1003df6c8(PTR_s__Item_HalcyonChargers__10185ab30,2,1);
  return;
}




int FUN_10043daf0(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  return (int)DAT_101e94300;
}




void FUN_10043db40(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int local_178 [2];
  undefined **local_170;
  undefined8 local_168;
  byte local_160;
  undefined4 local_15c;
  float fStack_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined8 uStack_134;
  undefined1 local_12c;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined2 local_118;
  byte local_116;
  long local_110;
  long local_108 [20];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_110);
    FUN_1003461dc(*(undefined8 *)(*(long *)(local_110 + 0x10) + 0x10));
    uVar5 = FUN_100345d90();
    lVar7 = *(long *)(*(long *)(local_110 + 0x10) + 0x10);
    local_170 = &PTR_FUN_101499960;
    local_150 = 0;
    uStack_148 = 0;
    uStack_134 = 0x3f800000bf800000;
    local_13c = 0xc0000000bf800000;
    local_12c = 0xff;
    local_124 = 0xffffffff;
    local_11c = 0xffffffff;
    local_160 = local_160 & 0xfc | 1;
    lVar6 = FUN_1003e10f0();
    local_15c = *(undefined4 *)(lVar7 + 0x250);
    local_154 = *(undefined4 *)(lVar7 + 600);
    fStack_158 = *(float *)(lVar7 + 0x2ec) + *(float *)(lVar7 + 0x254);
    local_116 = local_116 & 0xe0 | *(byte *)(lVar6 + 0xe5) | 0x14;
    local_118 = 0xc170;
    local_140 = 0x42c80000;
    local_128 = 0x40000;
    local_168 = uVar5;
    uVar1 = FUN_1003a6ce4(&local_170,local_108,0x14,0);
    if (uVar1 != 0) {
      uVar9 = 0;
      do {
        uVar5 = FUN_10043dd78(local_108[uVar9]);
        FUN_1003a4e5c(local_178,uVar5);
        iVar4 = local_178[0];
        uVar2 = FUN_1004d2524("Idle");
        iVar3 = FUN_100015208("Idle",uVar2,0x12345678);
        if (iVar4 == iVar3) {
          lVar6 = *(long *)(local_108[uVar9] + 0x18);
          while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_10184dab8))) {
            lVar6 = *(long *)(lVar6 + 0x20);
          }
          if (*(char *)(lVar6 + 0x198) != '\0') {
            uVar8 = 0;
            do {
              iVar4 = _strcmp((char *)**(undefined8 **)(*(long *)(lVar6 + 0x50 + uVar8 * 8) + 0x38),
                              "Emote_Dance");
              if (iVar4 == 0) {
                FUN_100101b0c(local_108[uVar9],uVar8);
                break;
              }
              uVar8 = uVar8 + 1;
            } while (uVar8 < *(byte *)(lVar6 + 0x198));
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar1);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




char * FUN_10043dd78(long param_1)

{
  ulong uVar1;
  
  if (*(char **)(param_1 + 0x2e0) != (char *)0x0) {
    return *(char **)(param_1 + 0x2e0);
  }
  uVar1 = (ulong)*(ushort *)(param_1 + 0x88) & 0x1f;
  if (((int)uVar1 != 0x1f) && (uVar1 = (ulong)*(short *)(param_1 + uVar1 * 0x38 + 0x90), uVar1 < 7))
  {
    return (&PTR_s_None_10149dd28)[uVar1];
  }
  return "Unknown";
}




void FUN_10043ddc8(long *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  float *pfVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 local_1a8;
  float local_1a4;
  undefined4 uStack_1a0;
  undefined **local_198;
  long local_190;
  undefined8 local_188;
  float local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  float fStack_168;
  undefined8 local_164;
  undefined8 uStack_15c;
  undefined1 local_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined2 local_140;
  byte local_13e;
  long local_138;
  undefined **local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined1 local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined **local_108;
  long local_100;
  undefined1 local_f8;
  undefined4 local_f4;
  float fStack_f0;
  undefined4 local_ec;
  char *local_e8;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined1 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  byte local_ae;
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_138);
  lVar13 = *(long *)(*(long *)(local_138 + 0x10) + 0x10);
  uVar3 = FUN_1004d2524("bArmed");
  uVar5 = FUN_100015208("bArmed",uVar3,0x12345678);
  pcVar6 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  uVar3 = FUN_1004d2524("spawnTime");
  uVar5 = FUN_100015208("spawnTime",uVar3,0x12345678);
  pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
  fVar14 = (float)FUN_100032228();
  puVar2 = PTR_s__Item_ScoutTrap__10185ab90;
  fVar16 = *pfVar7;
  uVar5 = FUN_1010a1520();
  lVar8 = FUN_1010a0e0c(uVar5,0,puVar2,0);
  fVar15 = 0.0;
  if (**(long **)(lVar8 + 0x1a8) != 0) {
    lVar10 = 0;
    do {
      lVar11 = *(long *)((long)*(long **)(lVar8 + 0x1a8) + lVar10 + 8);
      iVar4 = (int)lVar10;
      lVar10 = lVar10 + 8;
    } while (lVar11 != 0 && iVar4 != 0x10);
    if (lVar11 != 0) {
      fVar15 = *(float *)(lVar11 + 8);
    }
  }
  if ((fVar14 - fVar16 < fVar15) || (*pcVar6 == '\0')) {
    uVar3 = FUN_1004d2524("bDecloaked");
    uVar5 = FUN_100015208("bDecloaked",uVar3,0x12345678);
    pcVar9 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
    local_108 = &PTR_FUN_101499960;
    local_e0 = 0;
    uStack_cc = 0x3f800000bf800000;
    local_d4 = 0xc0000000bf800000;
    local_c4 = 0xff;
    uStack_b8 = 0xffffffff00000000;
    local_c0 = 0xffffffff00000000;
    local_f8 = 1;
    lVar10 = FUN_1003e10f0();
    bVar1 = *(byte *)(lVar10 + 0xe5);
    local_e8 = "FlareGun";
    uVar18 = *(undefined4 *)(lVar13 + 0x250);
    fVar15 = *(float *)(lVar13 + 0x254);
    uVar19 = *(undefined4 *)(lVar13 + 600);
    fVar17 = *(float *)(lVar13 + 0x2ec);
    local_100 = lVar13;
    uVar3 = FUN_1004d2524("flareVisionRange");
    uVar5 = FUN_100015208("flareVisionRange",uVar3,0x12345678);
    pfVar7 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar5);
    local_d8 = *pfVar7 * *pfVar7;
    local_ae = bVar1 | 0x14;
    local_b0 = 0xc120;
    local_f4 = uVar18;
    fStack_f0 = fVar17 + fVar15;
    local_ec = uVar19;
    iVar4 = FUN_1003a6ce4(&local_108,&local_130,1,0);
    if (iVar4 != 0) {
      *pcVar9 = '\x01';
    }
    fVar15 = 0.0;
    if (**(long **)(lVar8 + 0x1a8) != 0) {
      lVar10 = 0;
      do {
        lVar11 = *(long *)((long)*(long **)(lVar8 + 0x1a8) + lVar10 + 8);
        iVar4 = (int)lVar10;
        lVar10 = lVar10 + 8;
      } while (lVar11 != 0 && iVar4 != 0x10);
      if (lVar11 != 0) {
        fVar15 = *(float *)(lVar11 + 8);
      }
    }
    if (fVar15 <= fVar14 - fVar16) {
      *pcVar6 = '\x01';
      if (*pcVar9 != '\x01') {
        local_17c = *(undefined4 *)(lVar13 + 0x260);
        local_190 = 0;
        local_188 = 0;
        local_180 = (float)((uint)local_180 & 0xffffff00);
        local_198 = &PTR_FUN_101496b18;
        local_178 = CONCAT44(DAT_1018589d8,local_17c);
        local_16c = 0xbf800000;
        fStack_168 = 1.4013e-45;
        local_150 = 0;
        uStack_14c = 0;
        uStack_15c = 0;
        local_164 = 0;
        uStack_148 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_170 = FUN_1003d4e0c(PTR_s_Buff_Stealth_10185aba0);
        FUN_10049639c(&local_198,&DAT_101e47d30);
      }
      *(undefined4 *)(local_138 + 0x328) = 0x3e4ccccd;
    }
  }
  else {
    local_198 = &PTR_FUN_101499960;
    local_178 = 0;
    local_170 = 0;
    local_16c = 0;
    uStack_15c = 0x3f800000bf800000;
    local_164 = 0xc0000000bf800000;
    local_154 = 0xff;
    uStack_14c = 0xffffffff;
    uStack_148 = 0;
    local_144 = 0xffffffff;
    local_188 = CONCAT71(local_188._1_7_,1);
    lVar10 = FUN_1003e10f0();
    local_17c = *(undefined4 *)(lVar13 + 600);
    local_180 = *(float *)(lVar13 + 0x2ec) + *(float *)(lVar13 + 0x254);
    local_150 = 1;
    fStack_168 = 0.0;
    if (**(long **)(lVar8 + 0x1a8) != 0) {
      lVar11 = 8;
      do {
        lVar12 = *(long *)((long)*(long **)(lVar8 + 0x1a8) + lVar11);
        if (lVar12 == 0) break;
        iVar4 = (int)lVar11;
        lVar11 = lVar11 + 8;
      } while (iVar4 != 0x20);
      if (lVar12 != 0) {
        fStack_168 = *(float *)(lVar12 + 8);
      }
    }
    fStack_168 = fStack_168 * fStack_168;
    local_188 = CONCAT44(*(undefined4 *)(lVar13 + 0x250),(undefined4)local_188);
    local_13e = *(byte *)(lVar10 + 0xe5) | 0x14;
    local_140 = 0xc120;
    if (*(char *)(DAT_101d23a68 + 0x3d) != '\0') {
      local_150 = 0x40000;
    }
    local_190 = lVar13;
    iVar4 = FUN_1003a6ce4(&local_198,&local_108,0x10,0);
    if (iVar4 != 0) {
      uStack_1a0 = *(undefined4 *)(lVar13 + 600);
      local_1a4 = *(float *)(lVar13 + 0x2ec) + *(float *)(lVar13 + 0x254);
      local_1a8 = *(undefined4 *)(lVar13 + 0x250);
      local_114 = *(undefined4 *)(lVar13 + 0x260);
      uStack_110 = *(undefined4 *)(local_138 + 0x30c);
      local_128 = 0;
      uStack_120 = 0;
      local_118 = 0;
      local_130 = &PTR_FUN_101496cd8;
      FUN_100496580(&local_130,&DAT_101e47d30);
      FUN_100101b1c(lVar13,0,&local_1a8);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10043e288(undefined8 param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_s__Item_ScoutTrap__10185ab90;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  uVar7 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar5 = 0;
    do {
      lVar6 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar5 + 8);
      iVar4 = (int)lVar5;
      lVar5 = lVar5 + 8;
    } while (lVar6 != 0 && iVar4 != 0x10);
    if (lVar6 != 0) {
      uVar7 = *(undefined4 *)(lVar6 + 8);
    }
  }
  *param_2 = uVar7;
  return;
}




void FUN_10043e2f8(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar1 = PTR_s__Item_ScoutTrap__10185ab90;
  uVar2 = FUN_1010a1520();
  lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
  uVar7 = 0;
  if (**(long **)(lVar3 + 0x1a8) != 0) {
    lVar6 = 8;
    do {
      lVar4 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar6);
      if (lVar4 == 0) break;
      iVar5 = (int)lVar6;
      lVar6 = lVar6 + 8;
    } while (iVar5 != 0x40);
    if (lVar4 != 0) {
      uVar7 = *(undefined4 *)(lVar4 + 8);
    }
  }
  FUN_1003db860(uVar7,*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),0x11,0,0xffffffff);
  return;
}




void FUN_10043e380(void)

{
  FUN_1003df6c8(PTR_s__Item_WarTreads__10185aba8,0,1);
  return;
}




void FUN_10043e394(void)

{
  FUN_1003df6c8(PTR_s__Item_AtlasPauldron__10185abb8,0,1);
  return;
}




undefined1 FUN_10043e3a8(long *param_1)

{
  return *(undefined1 *)(*(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x38) + 0x60);
}




void FUN_10043e3c0(void)

{
  FUN_1003df6c8(PTR_s__Item_Shiversteel__10185abc8,0,1);
  return;
}




void FUN_10043e3d4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  long lStack_38;
  
  FUN_10042e1f0(param_1,&lStack_38,&local_40);
  puVar1 = PTR_s__Item_Bonesaw__10185ba08;
  lVar5 = *(long *)(*(long *)(lStack_38 + 0x10) + 0x10);
  if ((*(int *)(local_40 + 0x10) == *(int *)(lVar5 + 0x260)) &&
     ((*(byte *)(local_40 + 0xc) >> 2 & 1) != 0)) {
    lVar6 = *(long *)(local_40 + 0x20);
    uVar2 = FUN_1010a1520();
    lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
    local_7c = *(undefined4 *)(lVar5 + 0x260);
    uStack_78 = *(undefined4 *)(lVar6 + 0x260);
    local_6c = 0;
    if (**(long **)(lVar3 + 0x1a8) != 0) {
      lVar5 = 0;
      do {
        lVar6 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar5 + 8);
        iVar4 = (int)lVar5;
        lVar5 = lVar5 + 8;
      } while (lVar6 != 0 && iVar4 != 8);
      if (lVar6 != 0) {
        local_6c = *(undefined4 *)(lVar6 + 8);
      }
    }
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    local_98 = &PTR_FUN_101496b18;
    local_74 = DAT_1018589d8;
    local_68 = 1;
    local_50 = 0;
    local_5c = 0;
    local_64 = 0;
    local_48 = DAT_101dc0b88;
    DAT_1018589d8 = DAT_1018589d8 + 1;
    local_70 = FUN_1003d4e0c(PTR_s_Buff_Item_BonesawDebuff_10185c3b0);
    FUN_10049639c(&local_98,&DAT_101e47d30);
  }
  return;
}




void FUN_10043e500(undefined8 param_1)

{
  float fVar1;
  long local_18;
  
  FUN_10042ecbc(param_1,&local_18);
  if ((*(ulong *)(local_18 + 0x344) & 0xfffe) != 0) {
    *(undefined1 **)(local_18 + 0x318) = &DAT_3f0000003f000000;
    *(uint *)(local_18 + 0x340) = *(uint *)(local_18 + 0x340) & 0xffffffef;
    fVar1 = (float)(int)(((uint)*(ulong *)(local_18 + 0x344) & 0xffff) - 1);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    FUN_100469600(local_18,(int)fVar1,1);
  }
  return;
}




void FUN_10043e568(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101499430;
  puVar3[1] = 0;
  *(undefined4 *)(puVar3 + 5) = 0;
  *(undefined2 *)((long)puVar3 + 0x2c) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10043e658(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_10001696c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043e6a8(undefined8 param_1)

{
  FUN_1003e0054(param_1,PTR_s__Item_TensionBow__10185bad8,2,9);
  return;
}




void FUN_10043e6bc(void)

{
  FUN_1003df6c8(PTR_s__Item_TensionBow__10185bad8,1,1);
  return;
}




void FUN_10043e6d0(long *param_1,float *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  puVar1 = PTR_s__Item_ReflexBlock__10185ab50;
  if (DAT_101d23a38 == '\0') {
    fVar6 = 0.0;
  }
  else {
    lVar5 = *(long *)(*(long *)(*param_1 + 0x10) + 0x10);
    uVar2 = FUN_1010a1520();
    lVar3 = FUN_1010a0e0c(uVar2,0,puVar1,0);
    lVar4 = **(long **)(lVar3 + 0x1a8);
    fVar7 = 0.0;
    fVar6 = 0.0;
    if (lVar4 != 0) {
      fVar6 = *(float *)(lVar4 + 8);
    }
    lVar5 = *(long *)(lVar5 + 0x40);
    fVar8 = *(float *)(lVar5 + 0xd8) + *(float *)(lVar5 + 0x18c) * (*(float *)(lVar5 + 0x2f4) + 1.0)
    ;
    NEON_fminnm(fVar8 + fVar8 * *(float *)(lVar5 + 0x240),DAT_101e943c0);
    fVar8 = 0.0;
    if (lVar4 != 0) {
      lVar3 = (*(long **)(lVar3 + 0x1a8))[1];
      if (lVar3 == 0) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = *(float *)(lVar3 + 8);
      }
      fVar8 = *(float *)(lVar4 + 8);
    }
    fVar6 = fVar6 + (fVar7 - fVar8) * (DAT_101e94300 * 0.09090909 + -0.09090909);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
  }
  *param_2 = fVar6;
  *param_3 = 0xbf800000;
  return;
}




void FUN_10043e7d8(undefined8 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  if (DAT_101d23a38 != '\0') {
    FUN_10042ecbc(param_1,&local_38);
    lVar4 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
    lVar3 = *(long *)(lVar4 + 0x40);
    fVar6 = *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0xec) * (*(float *)(lVar3 + 0x254) + 1.0);
    NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar3 + 0x1a0),DAT_101e94320);
    fVar6 = (*(float *)(lVar3 + 0x308) * 100.0) / DAT_101e94260;
    fVar5 = (float)FUN_1003df6c8(PTR_s__Item_FountainOfRenewal__10185ba58,0,1);
    local_78 = *(undefined4 *)(local_38 + 0x308);
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    uVar2 = *(undefined4 *)(local_38 + 0x30c);
    uStack_74 = uVar1;
    local_70 = FUN_100345d90();
    local_68 = FUN_100345d90(uVar1);
    local_54 = 0;
    local_5c = 0;
    local_4c = 0;
    local_44 = 0xeeffffffff;
    local_3c = 0xffffffff;
    local_60 = (100.0 - fVar6) * fVar5;
    uStack_48 = uVar2;
    FUN_10010cbe4(&local_78);
  }
  return;
}




void FUN_10043e8e0(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  undefined **local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined4 local_a4;
  int iStack_a0;
  undefined **local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  long local_38;
  
  if (DAT_101d23a38 == '\0') {
    return;
  }
  FUN_10042e1f0(param_1,&local_38,&local_40);
  puVar2 = PTR_s__Item_PoisonedShiv__10185ba88;
  lVar8 = *(long *)(local_40 + 0x20);
  if (lVar8 == 0) {
    return;
  }
  lVar7 = *(long *)(*(long *)(local_38 + 0x10) + 0x10);
  lVar9 = *(long *)(lVar7 + 0x18);
  while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184daa8))) {
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  uVar3 = FUN_1010a1520();
  lVar4 = FUN_1010a0e0c(uVar3,0,puVar2,0);
  local_7c = *(int *)(local_40 + 0x10);
  if (local_7c != *(int *)(lVar7 + 0x260)) {
    return;
  }
  if ((*(byte *)(local_40 + 0xc) >> 2 & 1) == 0) {
    return;
  }
  lVar5 = *(long *)(lVar9 + 0x28);
  lVar9 = lVar5;
  do {
    if (lVar9 == 0) {
LAB_10043e9b4:
      local_90 = 0;
      uStack_88 = 0;
      local_80 = 0;
      local_98 = &PTR_FUN_101496b18;
      local_74 = DAT_1018589d8;
      local_6c = 0x1bf800000;
      local_50 = 0;
      local_5c = 0;
      local_64 = 0;
      local_48 = DAT_101dc0b88;
      DAT_1018589d8 = DAT_1018589d8 + 1;
      iStack_78 = local_7c;
      local_70 = FUN_1003d4e0c(PTR_s_Buff_Item_PoisonedShiv_Payload_10185c3e8);
      FUN_10049639c(&local_98,&DAT_101e47d30);
      return;
    }
    if ((*(int *)(lVar9 + 0x314) == DAT_101d3ea78) && (*(int *)(lVar9 + 0x310) == 0)) {
      iVar1 = *(int *)(lVar9 + 0x30c);
      lVar9 = **(long **)(lVar4 + 0x1a8);
      if (lVar9 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (int)(*(float *)(lVar9 + 8) + 0.5) - 1;
      }
      if (iVar1 != -1) {
        for (; *(int *)(lVar5 + 0x30c) != iVar1; lVar5 = *(long *)(lVar5 + 0x350)) {
        }
        if (*(ushort *)(lVar5 + 0x344) == uVar6) {
          iStack_78 = *(undefined4 *)(lVar8 + 0x260);
          uVar10 = 0;
          if ((lVar9 != 0) && (lVar8 = (*(long **)(lVar4 + 0x1a8))[1], lVar8 != 0)) {
            uVar10 = *(undefined4 *)(lVar8 + 8);
          }
          local_90 = 0;
          uStack_88 = 0;
          local_80 = 0;
          local_98 = &PTR_FUN_101496b18;
          local_74 = DAT_1018589d8;
          local_6c = CONCAT44(1,uVar10);
          local_50 = 0;
          local_5c = 0;
          local_64 = 0;
          local_48 = DAT_101dc0b88;
          DAT_1018589d8 = DAT_1018589d8 + 1;
          local_70 = FUN_1003d4e0c(DAT_10185a468);
          FUN_10049639c(&local_98,&DAT_101e47d30);
          local_a4 = *(undefined4 *)(lVar7 + 0x260);
          local_b8 = 0;
          uStack_b0 = 0;
          local_a8 = 0;
          local_c0 = &PTR_FUN_101496cd8;
          iStack_a0 = iVar1;
          FUN_100496580(&local_c0,&DAT_101e47d30);
          return;
        }
      }
      goto LAB_10043e9b4;
    }
    lVar9 = *(long *)(lVar9 + 0x350);
  } while( true );
}




void FUN_10043eb4c(void)

{
  FUN_1003df6c8(PTR_s__Item_NullwaveGauntlet__10185ba70,0,1);
  return;
}




void FUN_10043eb60(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  float *pfVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined **local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined **local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_90;
  undefined4 local_88;
  long local_80;
  long local_78;
  
  FUN_10042e1f0(param_1,&local_78,&local_80);
  lVar12 = *(long *)(*(long *)(local_78 + 0x10) + 0x10);
  if (((DAT_101e480d0 & 1) == 0) && (iVar5 = ___cxa_guard_acquire(&DAT_101e480d0), iVar5 != 0)) {
    DAT_101e480c8 = 0xdf582d96;
    ___cxa_guard_release(&DAT_101e480d0);
  }
  lVar6 = FUN_1003dc44c(lVar12,&DAT_101e480c8);
  if ((*(int *)(local_80 + 0x18) == *(int *)(lVar12 + 0x260)) &&
     (((lVar6 == 0 || (*(char *)(lVar6 + 0x6a) != '\0')) ||
      (fVar13 = (float)FUN_10045f284(), fVar13 <= 0.0)))) {
    puVar2 = PTR_s_var_SlumberingHusk_FortifiedHeal_10185d5e8;
    uVar4 = FUN_1004d2524(PTR_s_var_SlumberingHusk_FortifiedHeal_10185d5e8);
    uVar7 = FUN_100015208(puVar2,uVar4,0x12345678);
    pcVar8 = (char *)(**(code **)(*param_1 + 0x10))(param_1,uVar7);
    lVar6 = local_78;
    puVar2 = PTR_s_var_SlumberingHusk_DamageTaken_10185d5e0;
    if (*pcVar8 == '\0') {
      lVar1 = local_78 + 0x168;
      uVar4 = FUN_1004d2524(PTR_s_var_SlumberingHusk_DamageTaken_10185d5e0);
      uVar7 = FUN_100015208(puVar2,uVar4,0x12345678);
      pfVar9 = (float *)(**(code **)(*(long *)(lVar6 + 0x168) + 0x10))(lVar1,uVar7);
      *pfVar9 = *pfVar9 + *(float *)(local_80 + 0x54);
      lVar6 = *(long *)(lVar12 + 0x40);
      fVar13 = *(float *)(lVar6 + 0x38) +
               *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0);
      fVar14 = (float)NEON_fminnm(fVar13 + fVar13 * *(float *)(lVar6 + 0x1a0),DAT_101e94320);
      fVar13 = DAT_101e94260;
      if (DAT_101e94260 <= fVar14) {
        fVar13 = fVar14;
      }
      fVar14 = (float)FUN_1003df6c8(PTR_s__Item_SlumberingHusk__10185baa8,0,1);
      lVar6 = local_78;
      if (fVar13 * fVar14 <= *pfVar9) {
        *(float *)(local_80 + 0x54) =
             *(float *)(local_80 + 0x54) + (fVar13 * fVar14 - *pfVar9) * 0.5;
        puVar2 = PTR_s_var_SlumberingHusk_FortifiedHeal_10185d5e8;
        lVar1 = local_78 + 0x168;
        uVar4 = FUN_1004d2524(PTR_s_var_SlumberingHusk_FortifiedHeal_10185d5e8);
        uVar7 = FUN_100015208(puVar2,uVar4,0x12345678);
        puVar10 = (undefined1 *)(**(code **)(*(long *)(lVar6 + 0x168) + 0x10))(lVar1,uVar7);
        *puVar10 = 1;
        puVar2 = PTR_s_Buff_Item_SlumberingHuskFortifie_10185c408;
        uVar4 = *(undefined4 *)(lVar12 + 0x260);
        local_ac = FUN_1003df6c8(PTR_s__Item_SlumberingHusk__10185baa8,2,1);
        local_d0 = 0;
        uStack_c8 = 0;
        local_c0 = 0;
        local_d8 = &PTR_FUN_101496b18;
        local_b4 = DAT_1018589d8;
        local_a8 = 1;
        local_90 = 0;
        local_9c = 0;
        local_a4 = 0;
        local_88 = DAT_101dc0b88;
        DAT_1018589d8 = DAT_1018589d8 + 1;
        local_bc = uVar4;
        uStack_b8 = uVar4;
        local_b0 = FUN_1003d4e0c(puVar2);
        FUN_10049639c(&local_d8,&DAT_101e47d30);
        uVar3 = DAT_101e480c8;
        uVar4 = *(undefined4 *)(lVar12 + 0x260);
        local_e4 = FUN_1003df6c8(PTR_s__Item_SlumberingHusk__10185baa8,3,1);
        local_100 = 0;
        uStack_f8 = 0;
        local_f0 = 0;
        local_108 = &PTR_FUN_101497330;
        uStack_e8 = uVar3;
        local_e0 = 1;
        local_ec = uVar4;
        FUN_1003dc348(&local_108);
        puVar2 = PTR_s_var_SlumberingHusk_DamageTaken_10185d5e0;
        uVar4 = FUN_1004d2524(PTR_s_var_SlumberingHusk_DamageTaken_10185d5e0);
        uVar7 = FUN_100015208(puVar2,uVar4,0x12345678);
        puVar11 = (undefined4 *)
                  (**(code **)(*(long *)(local_78 + 0x168) + 0x10))(local_78 + 0x168,uVar7);
        *puVar11 = 0;
      }
    }
    else {
      *(float *)(local_80 + 0x54) = *(float *)(local_80 + 0x54) * 0.5;
    }
  }
  return;
}




undefined1  [16] FUN_10043eeb4(long param_1)

{
  undefined4 extraout_s0;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar1 [16];
  
  if (*(char *)(param_1 + 0x6a) != '\0') {
    return ZEXT816(0);
  }
  FUN_10045f284();
  auVar1._4_4_ = extraout_var;
  auVar1._0_4_ = extraout_s0;
  auVar1._8_8_ = extraout_var_00;
  return auVar1;
}




void FUN_10043eec8(long *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  int local_28 [2];
  
  puVar1 = PTR_s___BUFF_DATA___10185d7b0;
  uVar2 = FUN_1004d2524(PTR_s___BUFF_DATA___10185d7b0);
  uVar4 = FUN_100015208(puVar1,uVar2,0x12345678);
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
  puVar5 = (undefined8 *)*puVar5;
  if ((DAT_101e480e0 & 1) == 0) {
    iVar3 = ___cxa_guard_acquire(&DAT_101e480e0);
    if (iVar3 != 0) {
      DAT_101e480d8 = DAT_101d3ea88;
      ___cxa_guard_release(&DAT_101e480e0);
    }
  }
  FUN_1003a4e5c(local_28,*puVar5);
  puVar1 = PTR_s_var_SlumberingHusk_FortifiedHeal_10185d5e8;
  if (local_28[0] == DAT_101e480d8) {
    uVar2 = FUN_1004d2524(PTR_s_var_SlumberingHusk_FortifiedHeal_10185d5e8);
    uVar4 = FUN_100015208(puVar1,uVar2,0x12345678);
    puVar6 = (undefined1 *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
    *puVar6 = 0;
  }
  return;
}




void FUN_10043efcc(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  long local_78;
  
  FUN_10042ecbc(param_1,&local_78);
  uVar2 = DAT_101e94320;
  fVar10 = DAT_101e94260;
  lVar6 = *(long *)(*(long *)(*(long *)(local_78 + 0x10) + 0x10) + 0x40);
  fVar7 = *(float *)(lVar6 + 0x38);
  fVar12 = *(float *)(lVar6 + 0xec);
  fVar14 = *(float *)(lVar6 + 0x254);
  fVar13 = *(float *)(lVar6 + 0x1a0);
  fVar8 = (float)FUN_1003df6c8(PTR_s__Item_SlumberingHusk__10185baa8,0,1);
  fVar11 = *(float *)(local_78 + 0x328);
  fVar9 = (float)FUN_1003df6c8(PTR_s__Item_SlumberingHusk__10185baa8,1,1);
  puVar1 = PTR_s_var_SlumberingHusk_DamageTaken_10185d5e0;
  uVar3 = FUN_1004d2524(PTR_s_var_SlumberingHusk_DamageTaken_10185d5e0);
  uVar4 = FUN_100015208(puVar1,uVar3,0x12345678);
  pfVar5 = (float *)(**(code **)(*(long *)(local_78 + 0x168) + 0x10))(local_78 + 0x168,uVar4);
  if (0.0 < *pfVar5) {
    fVar7 = fVar7 + fVar12 * (fVar14 + 1.0);
    NEON_fminnm(fVar7 + fVar7 * fVar13,uVar2);
    fVar10 = *pfVar5 - (fVar10 * fVar8 * fVar11) / fVar9;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    *pfVar5 = fVar10;
  }
  return;
}




void FUN_10043f108(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined **local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  int local_5c;
  int iStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  long lStack_18;
  
  FUN_10042e1f0(param_1,&lStack_18,&local_20);
  local_5c = *(int *)(local_20 + 0x10);
  if ((local_5c == *(int *)(*(long *)(*(long *)(lStack_18 + 0x10) + 0x10) + 0x260)) &&
     ((*(byte *)(local_20 + 0xc) >> 2 & 1) != 0)) {
    ppuVar1 = &PTR_s_Buff_Item_Spellsword_RechargeOnN_10185c420;
    if ((*(uint *)(*(long *)(local_20 + 0x20) + 0x2f4) & 1) != 0) {
      ppuVar1 = &PTR_s_Buff_Item_Spellsword_Recharge_10185c418;
    }
    local_54 = *(undefined4 *)(lStack_18 + 0x30c);
    local_70 = 0;
    uStack_68 = 0;
    local_60 = 0;
    local_78 = &PTR_FUN_101496b18;
    local_4c = 0x1bf800000;
    local_30 = 0;
    local_3c = 0;
    local_44 = 0;
    local_28 = DAT_101dc0b88;
    iStack_58 = local_5c;
    local_50 = FUN_1003d4e0c(*ppuVar1);
    FUN_10049639c(&local_78,&DAT_101e47d30);
  }
  return;
}




void FUN_10043f1d4(void)

{
  FUN_1003df6c8(PTR_s__Item_PiercingShard__10185ba78,0,1);
  return;
}




float FUN_10043f1e8(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1003df6c8(PTR_s__Item_BrokenMyth__10185ba20,0,1);
  fVar2 = (float)FUN_1003df6c8(PTR_s__Item_PiercingShard__10185ba78,0,1);
  return fVar1 - fVar2;
}




void FUN_10043f230(void)

{
  FUN_1003df6c8(PTR_s__Item_Frostburn__10185ba60,1,1);
  return;
}




void FUN_10043f244(void)

{
  FUN_1003df6c8(PTR_s__Item_Frostburn__10185ba60,0,1);
  return;
}




void FUN_10043f258(void)

{
  FUN_1003df6c8(PTR_s__Item_Spellfire__10185bab0,1,1);
  return;
}




float FUN_10043f26c(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar2 = (float)FUN_1003df6c8(PTR_s__Item_Spellfire__10185bab0,0,1);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar3 = *(float *)(lVar1 + 0x4c) + *(float *)(lVar1 + 0x100) * (*(float *)(lVar1 + 0x268) + 1.0);
  fVar4 = (float)NEON_fminnm(fVar3 + fVar3 * *(float *)(lVar1 + 0x1b4),DAT_101e94334);
  fVar3 = DAT_101e94274;
  if (DAT_101e94274 <= fVar4) {
    fVar3 = fVar4;
  }
  fVar4 = (float)FUN_1003df6c8(PTR_s__Item_Spellfire__10185bab0,3,1);
  fVar5 = (float)FUN_1003df6c8(PTR_s__Item_Spellfire__10185bab0,4,1);
  lVar1 = *(long *)(param_1 + 0x40);
  fVar6 = *(float *)(lVar1 + 0xd8) + *(float *)(lVar1 + 0x18c) * (*(float *)(lVar1 + 0x2f4) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar1 + 0x240),DAT_101e943c0);
  fVar7 = DAT_101e94300 + -1.0;
  fVar6 = (float)FUN_1003df6c8(PTR_s__Item_Spellfire__10185bab0,1,1);
  return (fVar4 + fVar2 * fVar3 + fVar7 * (fVar5 - fVar4) * 0.09090909) / fVar6;
}




void FUN_10043f384(undefined8 param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  int *piVar6;
  long lVar7;
  undefined4 *puVar8;
  long *plVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  float fVar14;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  long local_58;
  
  FUN_10042e1f0(param_1,&local_58,&local_60);
  lVar12 = *(long *)(*(long *)(local_58 + 0x10) + 0x10);
  if (*(int *)(local_60 + 0x10) == *(int *)(lVar12 + 0x260)) {
    lVar13 = *(long *)(local_60 + 0x20);
    fVar14 = *(float *)(*(long *)(lVar13 + 0x40) + 0x308);
    if (((0.0 < fVar14) && (fVar14 <= *(float *)(local_60 + 0x54))) &&
       ((*(ushort *)(lVar13 + 0x2f4) & 0x110) != 0)) {
      iVar10 = *(int *)(lVar13 + 0x260);
      plVar1 = (long *)(local_58 + 0x168);
      uVar3 = FUN_1004d2524("Guid_lastMinionProced");
      uVar5 = FUN_100015208("Guid_lastMinionProced",uVar3,0x12345678);
      piVar6 = (int *)(**(code **)(*(long *)(local_58 + 0x168) + 0x10))(plVar1,uVar5);
      puVar2 = PTR_s__Item_BookOfEulogies__10185ba10;
      if (iVar10 != *piVar6) {
        uVar5 = FUN_1010a1520();
        lVar7 = FUN_1010a0e0c(uVar5,0,puVar2,0);
        plVar9 = *(long **)(lVar7 + 0x1a8);
        local_88 = 0;
        if ((*plVar9 != 0) && (local_88 = 0, plVar9[1] != 0)) {
          local_88 = *(undefined4 *)(plVar9[1] + 8);
        }
        if (*(char *)(*(long *)(lVar12 + 0x38) + 0x60) != '\0') {
          if ((*(ushort *)(local_60 + 0xc) & 1) != 0) {
            local_88 = 0;
          }
          if (((*(ushort *)(local_60 + 0xc) & 1) != 0) && (*plVar9 != 0)) {
            lVar7 = 0;
            do {
              lVar11 = *(long *)((long)plVar9 + lVar7 + 8);
              iVar10 = (int)lVar7;
              lVar7 = lVar7 + 8;
            } while (lVar11 != 0 && iVar10 != 8);
            if (lVar11 == 0) {
              local_88 = 0;
            }
            else {
              local_88 = *(undefined4 *)(lVar11 + 8);
            }
          }
        }
        uVar3 = *(undefined4 *)(lVar13 + 0x260);
        uVar4 = FUN_1004d2524("Guid_lastMinionProced");
        uVar5 = FUN_100015208("Guid_lastMinionProced",uVar4,0x12345678);
        puVar8 = (undefined4 *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar5);
        *puVar8 = uVar3;
        uVar3 = *(undefined4 *)(lVar12 + 0x260);
        local_a0 = uVar3;
        uStack_9c = uVar3;
        local_98 = FUN_100345d90(uVar3);
        local_90 = FUN_100345d90(uVar3);
        local_7c = 0;
        local_84 = 0;
        local_74 = 0;
        uStack_68 = 0xffffffff000000ee;
        local_70 = 0xffffffffffffffff;
        FUN_10010cbe4(&local_a0);
      }
    }
  }
  return;
}




void FUN_10043f574(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  
  uVar6 = *(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  iVar2 = FUN_1003a47d0(uVar6,PTR_s_Buff_Item_High_Vamp_10185c470);
  puVar1 = PTR_s__Item_SerpentMask__10185baa0;
  if (iVar2 == 0) {
    iVar2 = FUN_1003a47d0(uVar6,PTR_s_Buff_Item_Mid_Vamp_10185c468);
    puVar1 = PTR_s__Item_BarbedNeedle__10185ba00;
    if (iVar2 == 0) {
      iVar2 = FUN_1003a47d0(uVar6,PTR_s_Buff_Item_Low_Vamp_10185c460);
      puVar1 = PTR_s__Item_BookOfEulogies__10185ba10;
      fVar7 = 0.0;
      if (iVar2 == 0) goto LAB_10043f680;
      uVar6 = FUN_1010a1520();
      lVar4 = FUN_1010a0e0c(uVar6,0,puVar1,0);
      lVar4 = **(long **)(lVar4 + 0x1a8);
      goto joined_r0x00010043f678;
    }
    uVar6 = FUN_1010a1520();
    lVar4 = FUN_1010a0e0c(uVar6,0,puVar1,0);
    lVar4 = **(long **)(lVar4 + 0x1a8);
    if (lVar4 == 0) {
      fVar7 = 0.0;
      goto LAB_10043f680;
    }
  }
  else {
    uVar6 = FUN_1010a1520();
    lVar3 = FUN_1010a0e0c(uVar6,0,puVar1,0);
    fVar7 = 0.0;
    if (**(long **)(lVar3 + 0x1a8) == 0) goto LAB_10043f680;
    lVar5 = 8;
    do {
      lVar4 = *(long *)((long)*(long **)(lVar3 + 0x1a8) + lVar5);
      if (lVar4 == 0) break;
      iVar2 = (int)lVar5;
      lVar5 = lVar5 + 8;
    } while (iVar2 != 0x20);
joined_r0x00010043f678:
    fVar7 = 0.0;
    if (lVar4 == 0) goto LAB_10043f680;
  }
  fVar7 = *(float *)(lVar4 + 8);
LAB_10043f680:
  *(float *)(param_1[0x85] + 0x38) = *(float *)(param_1[0x85] + 0x38) + fVar7;
  return;
}




void FUN_10043f6a0(void)

{
  FUN_1003df6c8(PTR_s__Item_PiercingSpear__10185ba80,0,1);
  return;
}




float FUN_10043f6b4(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1003df6c8(PTR_s__Item_TensionBow__10185bad8,0,1);
  fVar2 = (float)FUN_1003df6c8(PTR_s__Item_Bonesaw__10185ba08,0,1);
  return fVar1 - fVar2;
}




float FUN_10043f6fc(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1003df6c8(PTR_s__Item_Bonesaw__10185ba08,0,1);
  fVar2 = (float)FUN_1003df6c8(PTR_s__Item_PiercingSpear__10185ba80,0,1);
  return fVar1 - fVar2;
}




void FUN_10043f744(undefined4 param_1,undefined4 param_2,long param_3,uint param_4,
                  undefined1 param_5,undefined4 param_6)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  float fVar9;
  
  puVar3 = PTR_s_onPreCalculateDamageExchangeName_10185d520;
  uVar4 = FUN_1004d2524(PTR_s_onPreCalculateDamageExchangeName_10185d520);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  *(undefined4 *)(param_3 + 0xa0 + (ulong)*(uint *)(param_3 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_3 + 0x160);
  *(code **)(param_3 + 0xe0 + (ulong)uVar2 * 8) = FUN_100451058;
  *(uint *)(param_3 + 0x160) = uVar2 + 1;
  puVar3 = PTR_s_onBuffIntervalName_10185d558;
  uVar4 = FUN_1004d2524(PTR_s_onBuffIntervalName_10185d558);
  uVar4 = FUN_100015208(puVar3,uVar4,0x12345678);
  *(undefined4 *)(param_3 + 0xa0 + (ulong)*(uint *)(param_3 + 0x160) * 4) = uVar4;
  uVar2 = *(uint *)(param_3 + 0x160);
  *(code **)(param_3 + 0xe0 + (ulong)uVar2 * 8) = FUN_10045119c;
  *(uint *)(param_3 + 0x160) = uVar2 + 1;
  lVar1 = param_3 + 0x168;
  fVar9 = (float)FUN_100032228();
  uVar5 = (*(code *)**(undefined8 **)(param_3 + 0x168))
                    (lVar1,PTR_s_timeOfLastDamageExchange_10185d6d0);
  pfVar6 = (float *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar5);
  *pfVar6 = fVar9 + -0.1;
  uVar4 = FUN_100032228();
  uVar5 = (*(code *)**(undefined8 **)(param_3 + 0x168))(lVar1,PTR_s_lastStackTime_10185d6d8);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar5);
  *puVar7 = uVar4;
  uVar5 = (*(code *)**(undefined8 **)(param_3 + 0x168))(lVar1,PTR_s_stackRate_10185d6e0);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar5);
  *puVar7 = param_1;
  uVar5 = (*(code *)**(undefined8 **)(param_3 + 0x168))(lVar1,PTR_s_decayTime_10185d6e8);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar5);
  *puVar7 = param_2;
  uVar5 = (*(code *)**(undefined8 **)(param_3 + 0x168))(lVar1,PTR_s_bStackOnDefend_10185d6f0);
  pfVar6 = (float *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar5);
  *pfVar6 = (float)param_4;
  uVar5 = (*(code *)**(undefined8 **)(param_3 + 0x168))(lVar1,PTR_s_bDecayAllStacks_10185d6f8);
  puVar8 = (undefined1 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar5);
  *puVar8 = param_5;
  uVar5 = (*(code *)**(undefined8 **)(param_3 + 0x168))(lVar1,PTR_s_stackFalloff_10185d700);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(param_3 + 0x168) + 0x10))(lVar1,uVar5);
  *puVar7 = param_6;
  return;
}




float FUN_10043f99c(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003df6c8(PTR_s__Item_Clockwork__10185ba30,1,1);
  return -fVar1;
}




void FUN_10043f9c4(void)

{
  FUN_1003df6c8(PTR_s__Item_Clockwork__10185ba30,2,1);
  return;
}




void FUN_10043f9d8(void)

{
  FUN_1003df6c8(PTR_s__Item_Clockwork__10185ba30,0,1);
  return;
}




float FUN_10043f9ec(long *param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*param_1 + 0x10) + 0x10) + 0x40);
  fVar2 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
  NEON_fminnm(fVar2 + fVar2 * *(float *)(lVar1 + 0x1a0),DAT_101e94320);
  return (DAT_101e94260 * -*(float *)((long)param_1 + 0x454)) / *(float *)(*param_1 + 0x31c);
}




void FUN_10043fa4c(undefined8 param_1)

{
  undefined4 uVar1;
  long local_20;
  undefined1 auStack_18 [8];
  
  FUN_10042e1f0(param_1,auStack_18,&local_20);
  uVar1 = 0;
  if ((*(ushort *)(local_20 + 0xc) & 4) != 0) {
    uVar1 = 0x3f800000;
  }
  *(undefined4 *)(local_20 + 0x54) = uVar1;
  *(undefined4 *)(local_20 + 8) = 2;
  *(undefined4 *)(local_20 + 0x5c) = 0;
  return;
}




float FUN_10043fa98(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1003df6c8(PTR_s__Item_SuperScout2000__10185bb00,3,1);
  fVar2 = (float)FUN_1003df6c8(PTR_s__Item_ScoutPak__10185baf0,1,1);
  return fVar2 - fVar1;
}




int FUN_10043fae0(void)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_1003df6c8(PTR_s__Item_SuperScout2000__10185bb00,2,1);
  fVar2 = (float)FUN_1003df6c8(PTR_s__Item_ScoutPak__10185baf0,0,1);
  return (int)(fVar1 - fVar2);
}




float FUN_10043fb2c(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003df6c8(PTR_s__Item_ScoutPak__10185baf0,1,1);
  return -fVar1;
}




int FUN_10043fb54(void)

{
  float fVar1;
  
  fVar1 = (float)FUN_1003df6c8(PTR_s__Item_ScoutPak__10185baf0,0,1);
  return (int)fVar1;
}




void FUN_10043fb7c(void)

{
  FUN_1003df6c8(PTR_s__Item_TeleportBoots__10185bad0,0,1);
  return;
}




void FUN_10043fb90(long param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
  *(ushort *)(param_2 + 0x58) = *(ushort *)(param_2 + 0x58) & 0xff9f | 0x1010;
  return;
}




void FUN_10043fbb8(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *param_3 = 0x44160000;
  uVar1 = FUN_1003df6c8(PTR_s__Item_TeleportBoots__10185bad0,2,1);
  *param_2 = uVar1;
  return;
}




void FUN_10043fbf4(void)

{
  FUN_1003df6c8(PTR_s__Item_Pulseweave__10185ba90,0,1);
  return;
}




void FUN_10043fc08(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100017750();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043fc58(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = FUN_100019c6c();
  puVar2 = (undefined8 *)(lVar1 + 8);
  *puVar2 = 0;
  if (*param_1 == 0) {
    *param_1 = (long)puVar2;
  }
  else {
    *(undefined8 **)param_1[1] = puVar2;
  }
  param_1[1] = (long)puVar2;
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}




void FUN_10043fca8(void)

{
  FUN_1003df6c8(PTR_s__Item_Pulseweave__10185ba90,8,1);
  return;
}




void FUN_10043fcbc(void)

{
  FUN_1003df6c8(PTR_s__Item_Pulseweave__10185ba90,1,1);
  return;
}




void FUN_10043fcd0(void)

{
  FUN_1003df6c8(PTR_s__Item_Pulseweave__10185ba90,2,1);
  return;
}




void FUN_10043fce4(void)

{
  FUN_1003df6c8(PTR_s__Item_Pulseweave__10185ba90,3,1);
  return;
}




void FUN_10043fcf8(void)

{
  FUN_1003df6c8(PTR_s__Item_Pulseweave__10185ba90,7,1);
  return;
}




undefined1  [16] FUN_10043fd0c(long *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  
  uVar3 = *(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10);
  iVar2 = FUN_1003a47d0(uVar3,PTR_s_Buff_Item_Stormcrown_10185c4a8);
  ppuVar1 = &PTR_s__Item_Stormcrown__10185bac0;
  if (iVar2 == 0) {
    ppuVar1 = &PTR_s__Item_StormguardBanner__10185bac8;
  }
  auVar5 = FUN_1003e0054(uVar3,*ppuVar1,0,3);
  if ((*(ushort *)(*(long *)(param_1[0x85] + 0x20) + 0x2f4) & 0x1011) != 0) {
    ppuVar1 = &PTR_s__Item_Stormcrown__10185bac0;
    if (iVar2 == 0) {
      ppuVar1 = &PTR_s__Item_StormguardBanner__10185bac8;
    }
    fVar4 = (float)FUN_1003df6c8(*ppuVar1,1,1);
    auVar5 = ZEXT416((uint)(fVar4 * auVar5._0_4_));
  }
  return auVar5;
}




void FUN_10043fdc8(long *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = FUN_1003a47d0(*(undefined8 *)(*(long *)(*param_1 + 0x10) + 0x10),
                        PTR_s_Buff_Item_Stormcrown_10185c4a8);
  ppuVar1 = &PTR_s__Item_Stormcrown__10185bac0;
  if (iVar2 == 0) {
    ppuVar1 = &PTR_s__Item_StormguardBanner__10185bac8;
  }
  FUN_1003df6c8(*ppuVar1,2,1);
  return;
}




void FUN_10043fe14(void)

{
  FUN_1003df6c8(PTR_s__Item_CapacitorPlate__10185ba28,0,1);
  return;
}




void FUN_10043fe28(void)

{
  FUN_1003df6c8(PTR_s__Item_CapacitorPlate__10185ba28,1,1);
  return;
}




void FUN_10043fe3c(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ushort uVar5;
  
  if (DAT_10184e198 == 0) {
    FUN_1004d22dc(0);
  }
  lVar2 = DAT_10184e198;
  uVar5 = *(ushort *)(DAT_10184e198 + 0x51410);
  lVar4 = DAT_10184e198 + (ulong)uVar5 * 0x68;
  if (uVar5 == *(ushort *)(DAT_10184e198 + 0x51412)) {
    uVar5 = 0xffff;
  }
  else {
    uVar5 = *(ushort *)(lVar4 + 0x10);
  }
  *(ushort *)(DAT_10184e198 + 0x51410) = uVar5;
  *(int *)(lVar2 + 0x51414) = *(int *)(lVar2 + 0x51414) + 1;
  puVar3 = (undefined8 *)(lVar4 + 0x17U & 0xfffffffffffffff8);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar3[3] = 0;
  puVar3[2] = 0;
  puVar3[5] = 0;
  puVar3[4] = 0;
  puVar3[7] = 0;
  puVar3[6] = 0;
  puVar3[8] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *(undefined4 *)(puVar3 + 4) = 0;
  *puVar3 = &PTR_FUN_101499770;
  puVar3[1] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0xffffffff;
  *(undefined2 *)(puVar3 + 8) = 0;
  *(undefined1 *)((long)puVar3 + 0x42) = 0;
  uVar1 = *(int *)(lVar2 + 0x51420) + 1;
  *(uint *)(lVar2 + 0x51420) = uVar1;
  if (*(uint *)(lVar2 + 0x51424) < uVar1) {
    *(uint *)(lVar2 + 0x51424) = uVar1;
  }
  puVar3 = puVar3 + 1;
  *puVar3 = 0;
  if (*(long *)(param_1 + 0x50) == 0) {
    *(undefined8 **)(param_1 + 0x50) = puVar3;
  }
  else {
    **(undefined8 **)(param_1 + 0x58) = puVar3;
  }
  *(undefined8 **)(param_1 + 0x58) = puVar3;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  return;
}




void FUN_10043ff44(void)

{
  FUN_1003df6c8(PTR_s__Item_CapacitorPlate__10185ba28,4,1);
  return;
}




void FUN_10043ff58(void)

{
  FUN_1003df6c8(PTR_s__Item_CapacitorPlate__10185ba28,2,1);
  return;
}




void FUN_10043ff6c(void)

{
  FUN_1003df6c8(PTR_s__Item_CapacitorPlate__10185ba28,3,1);
  return;
}




void FUN_10043ff80(void)

{
  FUN_1003df6c8(PTR_s__Item_TornadoTrigger__10185bae0,1,1);
  return;
}




void FUN_10043ff94(void)

{
  FUN_1003df6c8(PTR_s__Item_TornadoTrigger__10185bae0,0,1);
  return;
}




void FUN_10043ffa8(long *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  float *pfVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  float fVar11;
  undefined **local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined **local_150;
  undefined8 local_148;
  undefined1 local_140;
  undefined4 local_13c;
  float fStack_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 uStack_114;
  undefined1 local_10c;
  undefined4 local_108;
  undefined8 local_104;
  undefined4 local_fc;
  undefined2 local_f8;
  byte local_f6;
  long local_f0;
  long local_e8 [16];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10042ecbc(param_1,&local_f0);
  uVar8 = *(undefined8 *)(*(long *)(local_f0 + 0x10) + 0x10);
  uVar1 = FUN_1004d2524("chargeupTimer");
  uVar4 = FUN_100015208("chargeupTimer",uVar1,0x12345678);
  pfVar5 = (float *)(**(code **)(*param_1 + 0x10))(param_1,uVar4);
  fVar11 = *pfVar5;
  if (fVar11 <= 0.0) {
    local_150 = &PTR_FUN_101499960;
    local_130 = 0;
    uStack_128 = 0;
    uStack_114 = 0x3f800000bf800000;
    local_11c = 0xc0000000bf800000;
    local_10c = 0xff;
    local_104 = 0xffffffff;
    local_fc = 0xffffffff;
    local_140 = 1;
    lVar6 = FUN_1003e10f0();
    lVar7 = *(long *)(*(long *)(local_f0 + 0x10) + 0x10);
    local_13c = *(undefined4 *)(lVar7 + 0x250);
    local_134 = *(undefined4 *)(lVar7 + 600);
    fStack_138 = *(float *)(lVar7 + 0x2ec) + *(float *)(lVar7 + 0x254);
    local_f6 = *(byte *)(lVar6 + 0xe5) | 0x16;
    local_f8 = 0xc110;
    local_120 = 0x40670a3d;
    local_108 = 1;
    local_148 = uVar8;
    uVar2 = FUN_1003a6ce4(&local_150,local_e8,0x10,0);
    if (uVar2 != 0) {
      iVar3 = FUN_100432d40(local_f0);
      lVar6 = FUN_100345d90();
      if (lVar6 == 0) goto LAB_10044018c;
      uVar9 = (ulong)uVar2;
      plVar10 = local_e8;
      do {
        if (*(int *)(*plVar10 + 0x260) == iVar3) {
          local_15c = *(undefined4 *)(*(long *)(*(long *)(local_f0 + 0x10) + 0x10) + 0x260);
          uStack_158 = *(undefined4 *)(local_f0 + 0x30c);
          local_170 = 0;
          uStack_168 = 0;
          local_160 = 0;
          local_178 = &PTR_FUN_101496cd8;
          FUN_100496580(&local_178,&DAT_101e47d30);
          FUN_100101b14(uVar8,0,lVar6);
        }
        plVar10 = plVar10 + 1;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    fVar11 = *pfVar5;
  }
  *pfVar5 = fVar11 + -1.0;
LAB_10044018c:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

