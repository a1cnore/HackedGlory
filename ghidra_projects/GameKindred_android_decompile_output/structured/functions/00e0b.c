// functions/00e0b — 27 functions
#include "libGameKindred.h"




void FUN_00e0b0d8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfb05c(auStack_38);
  FUN_00cf7b3c(uVar3,1);
  plVar4 = (long *)FUN_00cfaa2c(auStack_38);
  (**(code **)(*plVar4 + 0x50))(plVar4,"Ability02");
  uVar3 = FUN_00cfb17c(auStack_38);
  FUN_00cfcad8(uVar3,0xed,"CenterBody");
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar3,0);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0b1b4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  FUN_00cfa2dc(auStack_38);
  FUN_00cf99dc(auStack_38);
  FUN_00cf98bc(auStack_38);
  plVar3 = (long *)FUN_00cf9b44(auStack_38);
  (**(code **)(*plVar3 + 0x70))(plVar3,PTR_s_Buff_Maaya_C_Attachment_Target_02bf1c60);
  FUN_00cf9eec(auStack_38);
  uVar4 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar4,0);
  plVar3 = (long *)FUN_00cf9afc(auStack_38);
  (**(code **)(*plVar3 + 0x50))(plVar3,PTR_s_Buff_Maaya_C_Selected_02bf1c68);
  uVar4 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3dcccccd);
  FUN_00cf7578(uVar4,0);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0b2d0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined1 auStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 1;
  uVar3 = FUN_00cfadd4(auStack_38);
  FUN_00cf5da8(uVar3,PTR_s_Buff_Maaya_C_Attachment_Target_02bf1c60,0,1);
  plVar4 = (long *)FUN_00cfb494(auStack_38);
  (**(code **)(*plVar4 + 0x58))();
  plVar4 = (long *)FUN_00cfb44c(auStack_38);
  (**(code **)(*plVar4 + 0x58))();
  uVar3 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Maaya_C_Attachment_Target_02bf1c60);
  plVar4 = (long *)FUN_00cf9dcc(auStack_38);
  (**(code **)(*plVar4 + 0x50))(plVar4,PTR_s_Buff_Maaya_C_Attachment_Target_02bf1c60);
  FUN_00cf9eec(auStack_38);
  FUN_00cf98bc(auStack_38);
  uVar3 = FUN_00cf9d84(auStack_38);
  FUN_00cf49b0(uVar3,PTR_s_Buff_Maaya_C_Selected_02bf1c68);
  FUN_00cf9eec(auStack_38);
  uVar3 = FUN_00cfa294(auStack_38);
  FUN_00cf7478(0x3e4ccccd);
  FUN_00cf7578(uVar3,0);
  FUN_00cfb56c(auStack_38);
  lVar2 = FUN_00cfa6cc(auStack_38);
  *(undefined1 *)(lVar2 + 0x10) = 0;
  FUN_00cfb0a4(auStack_38);
  FUN_00cfb5c4(auStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0b410(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined1 auStack_c8 [16];
  undefined4 local_b8 [2];
  undefined4 local_b0;
  undefined4 local_a8 [2];
  undefined4 local_a0;
  undefined4 local_98 [2];
  undefined4 local_90;
  undefined1 auStack_88 [96];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00cfb5b4(auStack_c8);
  plVar2 = (long *)FUN_00cfab04(auStack_c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x58))();
  (**(code **)(*plVar2 + 0x48))(plVar2,"Effect_Hero000_Explosion_5mr");
  FUN_00d4d9e8(auStack_88);
  FUN_00d4daf4(auStack_88,0,1,0,0);
  FUN_00d4dabc(auStack_88,0x40000);
  uVar3 = FUN_00cfaf84(auStack_c8);
  FUN_00cf5460(0x40a00000,uVar3,auStack_88,0,0,1,0);
  plVar2 = (long *)FUN_00cfa684(auStack_c8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_98[0] = 0x42000000;
  local_90 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2,local_98);
  local_a8[0] = 0xbf800000;
  local_a0 = 1;
  plVar2 = (long *)(**(code **)(*plVar2 + 0x28))(plVar2,local_a8);
  plVar2 = (long *)(**(code **)(*plVar2 + 0x70))();
  plVar2 = (long *)(**(code **)(*plVar2 + 0x50))();
  local_b8[0] = 0x40666666;
  local_b0 = 1;
  (**(code **)(*plVar2 + 0x30))(plVar2,local_b8);
  FUN_00cf9eec(auStack_c8);
  uVar3 = FUN_00cfa294(auStack_c8);
  FUN_00cf7478(0x3f000000);
  FUN_00cf7578(uVar3,0);
  FUN_00cfa5f4(auStack_c8);
  FUN_00cfb5c4(auStack_c8);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e0b590(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d6eb50();
  DAT_031b2e18 = FUN_00d6eb5c(uVar1,"*KindredBotTuningData*");
  return;
}




void FUN_00e0b5b8(void)

{
  DAT_031b2e18 = 0;
  return;
}




undefined8 FUN_00e0b5c4(void)

{
  return DAT_031b2e18;
}




void FUN_00e0b5d0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
  *(undefined4 *)(param_1 + 3) = DAT_03218f38;
  param_1[2] = DAT_03218f30;
  *(undefined8 *)((long)param_1 + 0x1c) = DAT_03218f30;
  uVar1 = DAT_03218f38;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = uVar1;
  *(byte *)((long)param_1 + 0x3c) = *(byte *)((long)param_1 + 0x3c) & 0xfe;
  return;
}




bool FUN_00e0b624(float param_1,long param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_00e0b660();
  return fVar1 <= *(float *)(param_2 + 0x34) + param_1;
}




float FUN_00e0b660(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  plVar1 = (long *)*param_1;
  if (plVar1 == (long *)0x0) {
    lVar2 = 0;
  }
  else if ((int)param_1[1] == (int)plVar1[1]) {
    lVar2 = (**(code **)(*plVar1 + 0x10))();
  }
  else {
    *param_1 = 0;
    lVar2 = 0;
    *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
  }
  plVar1 = (long *)*param_2;
  if (plVar1 == (long *)0x0) {
    lVar3 = 0;
  }
  else if ((int)param_2[1] == (int)plVar1[1]) {
    lVar3 = (**(code **)(*plVar1 + 0x10))();
  }
  else {
    *param_2 = 0;
    lVar3 = 0;
    *(undefined4 *)(param_2 + 1) = DAT_03214ce8;
  }
  fVar4 = *(float *)((long)param_1 + 0x14) - *(float *)((long)param_2 + 0x14);
  fVar5 = (*(float *)(param_1 + 2) - *(float *)(param_2 + 2)) *
          (*(float *)(param_1 + 2) - *(float *)(param_2 + 2)) + fVar4 * fVar4 +
          (*(float *)(param_1 + 3) - *(float *)(param_2 + 3)) *
          (*(float *)(param_1 + 3) - *(float *)(param_2 + 3));
  fVar4 = SQRT(fVar5);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar5);
  }
  fVar5 = *(float *)(*(long *)(lVar3 + 0x38) + 100);
  fVar4 = fVar4 - (*(float *)(*(long *)(lVar3 + 0x38) + 0x68) * (fVar5 + *(float *)(lVar3 + 0x2e8)))
                  / fVar5;
  if ((*(byte *)(lVar2 + 0x2f4) >> 4 & 1) != 0) {
    fVar5 = *(float *)(*(long *)(lVar2 + 0x38) + 100);
    fVar4 = fVar4 - (*(float *)(*(long *)(lVar2 + 0x38) + 0x68) *
                    (fVar5 + *(float *)(lVar2 + 0x2e8))) / fVar5;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  return fVar4;
}




uint FUN_00e0b7ac(float param_1,float param_2,undefined8 *param_3,long param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  
  uVar5 = 0;
  if (((~*(byte *)((long)param_3 + 0x3c) & 6) != 0) &&
     (uVar5 = 0, (*(byte *)(param_4 + 0x54) >> 3 & 1) == 0)) {
    FUN_00d25630(param_4);
    iVar1 = FUN_00d26a48();
    if (iVar1 == 0) {
      fVar7 = 0.0;
    }
    else {
      uVar5 = 0;
      fVar7 = 0.0;
      do {
        uVar3 = FUN_00d25630(param_4);
        lVar4 = FUN_00d26a38(uVar3,uVar5);
        fVar6 = (float)FUN_00e0b660(param_3,lVar4);
        if (fVar6 <= *(float *)((long)param_3 + 0x34) + 0.0) {
          fVar7 = fVar7 + *(float *)(lVar4 + 0x28);
        }
        uVar5 = uVar5 + 1;
        FUN_00d25630(param_4);
        uVar2 = FUN_00d26a48();
      } while (uVar5 < uVar2);
    }
    lVar4 = (**(code **)(*(long *)*param_3 + 0x10))();
    if ((fVar7 <= param_2) || ((param_5 & 1) == 0)) {
      uVar5 = (uint)(param_1 < fVar7) & (param_5 ^ 1) | (*(byte *)(lVar4 + 0x2f5) & 0x40) >> 6;
    }
    else {
      uVar5 = 1;
    }
  }
  return uVar5;
}




bool FUN_00e0b8cc(void)

{
  int iVar1;
  
  iVar1 = FUN_00d5e86c();
  return iVar1 == 0;
}




undefined8 FUN_00e0b8e8(long param_1,float *param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar1 = FUN_00d25570();
  if (((*(byte *)(lVar1 + 0x2f4) >> 3 & 1) == 0) && (uVar3 = *(uint *)(param_1 + 0xd18), uVar3 != 0)
     ) {
    fVar5 = *(float *)(param_1 + 0x58);
    uVar4 = 0;
    lVar1 = param_1 + 0xa18;
    do {
      fVar7 = *param_2 - *(float *)(lVar1 + 0x10);
      fVar8 = (float)*(undefined8 *)(param_2 + 1) - (float)*(undefined8 *)(lVar1 + 0x14);
      fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20) -
              (float)((ulong)*(undefined8 *)(lVar1 + 0x14) >> 0x20);
      fVar6 = (fVar5 - 1.0) / 8.0 + 0.0 + *(float *)(lVar1 + 0x34);
      if (fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9 < fVar6 * fVar6) {
        if ((*(byte *)(lVar1 + 0x3c) >> 1 & 1) != 0) {
          return 1;
        }
        if ((param_3 & 1) != 0) {
          return 1;
        }
        uVar2 = FUN_00e0b7ac(0x447a0000,0x43c80000,lVar1,param_1,0);
        if ((uVar2 & 1) == 0) {
          return 1;
        }
        uVar3 = *(uint *)(param_1 + 0xd18);
      }
      uVar4 = uVar4 + 1;
      lVar1 = lVar1 + 0x40;
    } while (uVar4 < uVar3);
  }
  return 0;
}




undefined8 FUN_00e0ba18(long *param_1,long param_2)

{
  char cVar1;
  long *plVar2;
  undefined8 uVar3;
  
  plVar2 = (long *)*param_1;
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if ((int)param_1[1] == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *param_1 = 0;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 1) = DAT_03214ce8;
    }
  }
  cVar1 = FUN_00d55870(uVar3);
  if (cVar1 == '\x02') {
    if (*(float *)(param_2 + 0x10) <= *(float *)(param_1 + 2)) {
      return 0;
    }
  }
  else {
    if (cVar1 != '\x01') {
      return 0;
    }
    if (*(float *)(param_1 + 2) <= *(float *)(param_2 + 0x10)) {
      return 0;
    }
  }
  return 1;
}




int FUN_00e0bac0(long param_1)

{
  long lVar1;
  float fVar2;
  
  lVar1 = FUN_00d25570();
  fVar2 = *(float *)(*(long *)(lVar1 + 0x40) + 800) - *(float *)(param_1 + 0x5c);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return (int)fVar2;
}




void FUN_00e0bafc(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d25570();
  uVar4 = FUN_00d25628(param_1);
  FUN_00d74024(uVar3,&local_3c);
  iVar2 = FUN_00da3904(uVar3,uVar4,local_3c,1,1);
  if (iVar2 == 0xffff) {
    iVar2 = -1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




float FUN_00e0bb94(void)

{
  bool bVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  lVar2 = FUN_00d70a78();
  fVar3 = (float)FUN_009bc24c();
  fVar5 = fVar3 / 60.0;
  if (*(float *)(lVar2 + 200) <= fVar3 / 60.0) {
    fVar5 = *(float *)(lVar2 + 200);
  }
  fVar3 = *(float *)(lVar2 + 0xc0);
  if (*(float *)(lVar2 + 0xc0) <= fVar5) {
    fVar3 = fVar5;
  }
  bVar1 = 3.0 <= fVar3;
  if (bVar1) {
    fVar3 = fVar3 + -3.0;
  }
  fVar5 = 30.0;
  if (bVar1) {
    fVar5 = 15.0;
  }
  fVar4 = 15.0;
  if (bVar1) {
    fVar4 = 45.0;
  }
  return (fVar3 / 3.0) * fVar5 + fVar4;
}




void FUN_00e0bc14(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  param_2[1] = param_1;
  return;
}




void FUN_00e0bc1c(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  *param_3 = param_1;
  param_3[1] = param_2;
  return;
}




void FUN_00e0bc24(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




float FUN_00e0bc30(float *param_1,long param_2)

{
  return *param_1 + (param_1[1] - *param_1) * ((*(float *)(param_2 + 0x58) - 1.0) / 8.0);
}




void FUN_00e0bc6c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00e0bc78(long param_1,undefined4 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((*(byte *)(param_1 + 0x2f4) & 0xc) == 0) &&
     (uVar1 = FUN_00d4d10c(&DAT_02bebbe8,param_3,param_2), (uVar1 & 1) == 0)) {
    uVar2 = FUN_00d4d178(&DAT_02bebbe8,param_3,param_2);
    return uVar2;
  }
  return 1;
}




bool FUN_00e0bcdc(void)

{
  long lVar1;
  
  lVar1 = FUN_00e0bcf8();
  return lVar1 != 0;
}




undefined8 FUN_00e0bcf8(char *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  uVar2 = 0;
  puVar3 = &DAT_031b2e28;
  do {
    iVar1 = strcmp((char *)puVar3[-1],param_1);
    if (iVar1 == 0) {
      return *puVar3;
    }
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 2;
  } while (uVar2 < 0x525);
  return 0;
}




void FUN_00e0bd58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = (code *)FUN_00e0bcf8(param_6);
  if (pcVar1 != (code *)0x0) {
    uVar2 = FUN_01988738(DAT_031a9338,0);
    FUN_00d66f18(param_1,uVar2,param_5,param_6,param_7,param_9,param_10);
    FUN_00d6a140(param_2,uVar2);
    FUN_00d6a19c(param_3,uVar2);
    FUN_00d69fc0(uVar2,param_11);
    FUN_00d6a01c(uVar2,param_12);
    FUN_01985d88(param_4,uVar2);
    (*pcVar1)(uVar2);
    *param_8 = uVar2;
  }
  return;
}




void FUN_00e0be60(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  long local_128;
  undefined8 local_120;
  undefined1 auStack_118 [48];
  undefined1 auStack_e8 [60];
  float local_ac;
  float local_98;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  FUN_00d69294(param_1,&local_120,&local_128);
  lVar13 = *(long *)(local_128 + 0x20);
  lVar7 = FUN_00d66d28(local_120);
  uVar8 = FUN_00daa578(local_128,lVar7);
  if ((((uVar8 & 1) != 0) && (*(int *)(local_128 + 8) == 0)) &&
     ((*(byte *)(local_128 + 0xc) >> 2 & 1) != 0)) {
    FUN_00d67b84(local_120);
    lVar9 = FUN_00d9e390();
    for (lVar13 = *(long *)(lVar13 + 0x18); lVar13 != 0; lVar13 = *(long *)(lVar13 + 0x20)) {
      if (*(int *)(*(long *)(lVar13 + 8) + 0xa4) == DAT_02c7bf48) {
        uVar8 = FUN_00d59f54(lVar9,1,4,0x19,0);
        uVar12 = FUN_00d6c0bc(lVar13,PTR_s_Buff_Adagio_ArcaneFire_02bf01b8);
        iVar6 = *(int *)(lVar9 + 0x260);
        iVar2 = *(int *)(lVar7 + 0x260);
        if ((uVar12 & 1) != 0) {
          fVar14 = (float)FUN_00d59f54(lVar9,1,5,0x19,0);
          uVar12 = FUN_00d44008(*(undefined4 *)(lVar9 + 0x260),
                                PTR_s_Buff_Adagio_Talent_AvengingWrath_02bf1c98);
          if ((uVar12 & 1) != 0) {
            fVar15 = (float)FUN_00d5a3d0(lVar9,DAT_0320e3d8,2,9);
            fVar14 = fVar14 * fVar15;
          }
          uVar8 = (ulong)(uint)((float)uVar8 + fVar14);
        }
        if (iVar6 == iVar2) goto LAB_00e0bf40;
        goto LAB_00e0bf5c;
      }
    }
    uVar8 = FUN_00d59f54(lVar9,1,4,0x19,0);
    if (*(int *)(lVar9 + 0x260) == *(int *)(lVar7 + 0x260)) {
LAB_00e0bf40:
      fVar14 = (float)FUN_00d59f54(lVar9,1,6,0x19,0);
      uVar8 = (ulong)(uint)((float)uVar8 + fVar14);
    }
LAB_00e0bf5c:
    uVar1 = *(undefined4 *)(local_128 + 0x10);
    uVar5 = *(undefined4 *)(local_128 + 0x18);
    uVar10 = FUN_00daa52c(local_128,1);
    puVar11 = (undefined8 *)FUN_00d67b14(local_120);
    FUN_00daa148(uVar8,auStack_e8,uVar1,uVar5,1,1,uVar10,*puVar11,0,1);
    uVar8 = FUN_00daa524(local_128);
    if ((uVar8 & 1) != 0) {
      uVar10 = FUN_00daa52c(local_128,0);
      FUN_00daa534(auStack_e8,uVar10);
    }
    if (*(int *)(local_128 + 0x10) != *(int *)(lVar9 + 0x260)) {
      lVar13 = *(long *)(lVar9 + 0x40);
      fVar14 = (*(float *)(lVar13 + 0x1cc) + 1.0) *
               (*(float *)(lVar13 + 100) +
               *(float *)(lVar13 + 0x118) * (*(float *)(lVar13 + 0x280) + 1.0));
      if (DAT_031b817c <= fVar14) {
        fVar14 = DAT_031b817c;
      }
      fVar15 = DAT_031b80bc;
      if (DAT_031b80bc <= fVar14) {
        fVar15 = fVar14;
      }
      local_ac = local_ac + fVar15;
      fVar14 = (*(float *)(lVar13 + 0x1d8) + 1.0) *
               (*(float *)(lVar13 + 0x70) +
               *(float *)(lVar13 + 0x124) * (*(float *)(lVar13 + 0x28c) + 1.0));
      if (DAT_031b8188 <= fVar14) {
        fVar14 = DAT_031b8188;
      }
      fVar15 = DAT_031b80c4._4_4_;
      if (DAT_031b80c4._4_4_ <= fVar14) {
        fVar15 = fVar14;
      }
      local_98 = local_98 + fVar15;
    }
    FUN_00910c08(auStack_e8);
    uVar4 = FUN_00d66cf4(local_120);
    if (uVar4 < 2) {
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar5 = FUN_00d66d34(local_120);
      FUN_00d009d0(auStack_118,uVar1,uVar5);
    }
    else {
      uVar1 = *(undefined4 *)(lVar7 + 0x260);
      uVar5 = FUN_00d66d34(local_120);
      iVar6 = FUN_00d66cf4(local_120);
      FUN_00d048bc(auStack_118,uVar1,uVar5,iVar6 + -1,1);
    }
    FUN_00ce20fc(auStack_118);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

