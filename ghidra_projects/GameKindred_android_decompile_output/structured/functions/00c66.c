// functions/00c66 — 41 functions
#include "libGameKindred.h"




void FUN_00c66064(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_00c66074(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c66084(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c66094(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c660a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c660a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c660b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}




void FUN_00c660b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c660c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
  return;
}




void FUN_00c660c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c660d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  return;
}




void FUN_00c660d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c660e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x38))();
  return;
}




void FUN_00c660e4(long *param_1)

{
  *(uint *)((long)param_1 + 0xb8c) = *(uint *)((long)param_1 + 0xb8c) & 0xfffffff3;
  *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) & 0xfffffff3;
  *(undefined1 *)((long)param_1 + 0x163d) = 0;
  (**(code **)(*param_1 + 0x90))();
  FUN_00c66190(param_1,0);
  *(undefined1 *)((long)param_1 + 0x163e) = 0;
  *(uint *)((long)param_1 + 0x1124) = *(uint *)((long)param_1 + 0x1124) & 0xfffffff3;
  FUN_00c66828(param_1);
  return;
}




void FUN_00c66150(long *param_1,uint param_2)

{
  uint uVar1;
  
  param_2 = param_2 & 1;
  uVar1 = param_2 << 2 | param_2 << 3;
  *(uint *)((long)param_1 + 0xb8c) = uVar1 | *(uint *)((long)param_1 + 0xb8c) & 0xfffffff3;
  *(uint *)((long)param_1 + 0x414) = uVar1 | *(uint *)((long)param_1 + 0x414) & 0xfffffff3;
  *(char *)((long)param_1 + 0x163d) = (char)param_2;
                    /* WARNING: Could not recover jumptable at 0x00c6618c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))();
  return;
}




void FUN_00c66190(long *param_1,uint param_2)

{
  param_2 = param_2 & 1;
  *(char *)((long)param_1 + 0x163c) = (char)param_2;
  *(uint *)((long)param_1 + 0x5f4) =
       param_2 << 2 | param_2 << 3 | *(uint *)((long)param_1 + 0x5f4) & 0xfffffff3;
  FUN_00c66828();
  if ((*(char *)((long)param_1 + 0x163d) != '\0') && (*(char *)((long)param_1 + 0x163c) == '\0')) {
    *(uint *)((long)param_1 + 0xb8c) = *(uint *)((long)param_1 + 0xb8c) & 0xfffffff3;
    *(uint *)((long)param_1 + 0x414) = *(uint *)((long)param_1 + 0x414) & 0xfffffff3;
    *(char *)((long)param_1 + 0x163d) = '\0';
  }
                    /* WARNING: Could not recover jumptable at 0x00c66214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00c66218(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = param_2 & 1;
  *(char *)(param_1 + 0x163e) = (char)uVar1;
  if (((param_2 & 1) != 0) && (*(char *)(param_1 + 0x163c) != '\0')) {
    FUN_00c66190(param_1,0);
  }
  *(uint *)(param_1 + 0x1124) = uVar1 << 2 | uVar1 << 3 | *(uint *)(param_1 + 0x1124) & 0xfffffff3;
  FUN_00c66828(param_1);
  return;
}




void FUN_00c66278(void)

{
  return;
}




void FUN_00c6627c(undefined8 param_1,undefined8 param_2,long *param_3)

{
  FUN_00f13f08(param_3 + 0x18);
  FUN_00f13f08(param_1,param_2,param_3 + 0x36);
                    /* WARNING: Could not recover jumptable at 0x00c662c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x90))(param_3);
  return;
}




void FUN_00c662cc(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  FUN_00f13db4();
  plVar1 = param_3 + 0xae;
  FUN_00ca7fd8(plVar1);
  plVar2 = param_3 + 0x161;
  FUN_00ca7fd8(plVar2);
  iVar3 = (int)param_3[0x2c7];
  if (iVar3 == 0) {
    fVar11 = (float)FUN_00f01c20(plVar1);
    fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar7 = fVar7 * 0.5 - fVar11 * 0.5;
    FUN_00f01c20(plVar1);
    plVar4 = param_3 + 0x54;
    fVar11 = param_2;
    FUN_00f0eaf4(plVar4);
    if ((*(float *)(param_3 + 0xb6) != fVar7) ||
       (*(float *)((long)param_3 + 0x5b4) != -(param_2 + fVar11))) {
      *(float *)(param_3 + 0xb6) = fVar7;
      *(float *)((long)param_3 + 0x5b4) = -(param_2 + fVar11);
      FUN_0091ada4(plVar1);
    }
    fVar11 = (float)FUN_00f0eac0(plVar4);
    fVar7 = 10.0;
    fVar11 = fVar11 * 0.5 + 10.0;
    FUN_00f0eac0(plVar4);
    fVar7 = -12.0 - fVar7;
    if (*(float *)(param_3 + 0x5c) == fVar11) {
LAB_00c664e4:
      if (*(float *)((long)param_3 + 0x2e4) == fVar7) goto LAB_00c66508;
    }
LAB_00c664f0:
    *(float *)(param_3 + 0x5c) = fVar11;
    *(float *)((long)param_3 + 0x2e4) = fVar7;
    FUN_0091ada4(param_3 + 0x54);
  }
  else {
    if (iVar3 == 1) {
      fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
      plVar4 = param_3 + 0x54;
      fVar8 = (float)FUN_00f0eaf4(plVar4);
      FUN_00f0eaf4(plVar4);
      fVar11 = *(float *)(param_3 + 0xb6);
      if ((fVar11 != fVar7 + fVar8) || (*(float *)((long)param_3 + 0x5b4) != -(param_2 + 100.0))) {
        *(float *)(param_3 + 0xb6) = fVar7 + fVar8;
        *(float *)((long)param_3 + 0x5b4) = -(param_2 + 100.0);
        FUN_0091ada4(plVar1);
        fVar11 = *(float *)(param_3 + 0xb6);
      }
      fVar7 = (float)FUN_00f0eaf4(plVar4);
      fVar11 = fVar11 - fVar7;
      fVar7 = 9.0;
LAB_00c664bc:
      fVar11 = fVar11 + fVar7;
      FUN_00f0eac0(param_3 + 0x18);
      fVar7 = fVar7 * 0.5 + -20.0;
      if (*(float *)(param_3 + 0x5c) == fVar11) goto LAB_00c664e4;
      goto LAB_00c664f0;
    }
    if (iVar3 == 2) {
      fVar7 = (float)FUN_00f13e54(plVar1);
      fVar8 = (float)FUN_00f0eaf4(param_3 + 0x54);
      FUN_00f0eaf4(param_3 + 0x54);
      fVar11 = *(float *)(param_3 + 0xb6);
      if ((fVar11 != -(fVar7 + fVar8)) || (*(float *)((long)param_3 + 0x5b4) != -(param_2 + 100.0)))
      {
        *(float *)(param_3 + 0xb6) = -(fVar7 + fVar8);
        *(float *)((long)param_3 + 0x5b4) = -(param_2 + 100.0);
        FUN_0091ada4(plVar1);
        fVar11 = *(float *)(param_3 + 0xb6);
      }
      fVar7 = (float)FUN_00f13e54(plVar1);
      fVar11 = fVar11 + fVar7;
      fVar7 = -12.0;
      goto LAB_00c664bc;
    }
  }
LAB_00c66508:
  fVar11 = 9.0;
  if ((int)param_3[0x2c7] != 0) {
    fVar11 = 0.0;
  }
  plVar4 = (long *)FUN_00ca843c(plVar1,2);
  fVar13 = *(float *)(plVar4 + 8);
  fVar12 = *(float *)((long)plVar4 + 0x44);
  fVar14 = *(float *)(param_3 + 0xb6);
  fVar10 = *(float *)((long)param_3 + 0x5b4);
  fVar7 = (float)FUN_00f01c20(plVar2);
  fVar8 = (float)FUN_00f0eac0(param_3 + 0x54);
  fVar9 = 0.6;
  fVar15 = fVar14 + fVar13 + fVar7 + fVar8 * 0.6;
  (**(code **)(*plVar4 + 0x50))(plVar4);
  fVar7 = fVar12 + fVar9;
  FUN_00f13e54(plVar2);
  fVar7 = fVar7 - fVar9;
  FUN_00f0eac0(param_3 + 0x54);
  fVar8 = fVar10 + fVar7 + fVar9 * 0.5 + -8.0;
  fVar7 = fVar8 + -8.0;
  if ((*(float *)(param_3 + 0x169) != fVar15) ||
     (fVar8 = *(float *)((long)param_3 + 0xb4c), fVar8 != fVar7)) {
    *(float *)(param_3 + 0x169) = fVar15;
    *(float *)((long)param_3 + 0xb4c) = fVar7;
    FUN_0091ada4(plVar2);
  }
  fVar7 = (float)(**(code **)(*plVar4 + 0x50))(plVar4);
  fVar14 = fVar14 + fVar11 + fVar13 + fVar7;
  (**(code **)(*plVar4 + 0x50))(plVar4);
  fVar11 = fVar8 * 0.5;
  FUN_00f0eac0(param_3 + 0x72);
  fVar11 = (fVar12 + fVar11) - fVar8 * 0.5;
  fVar10 = fVar10 + fVar11;
  if ((*(float *)(param_3 + 0x7a) != fVar14) ||
     (fVar11 = *(float *)((long)param_3 + 0x3d4), fVar11 != fVar10)) {
    *(float *)(param_3 + 0x7a) = fVar14;
    *(float *)((long)param_3 + 0x3d4) = fVar10;
    FUN_0091ada4(param_3 + 0x72);
  }
  uVar5 = FUN_00f08540(plVar1);
  fVar7 = fVar11;
  if ((uVar5 & 1) != 0) {
    FUN_00f0838c(plVar2);
    fVar7 = fVar11;
    lVar6 = FUN_00965ecc(plVar2);
    fVar8 = *(float *)(lVar6 + 0x14);
    FUN_00f13e54(plVar2);
    fVar8 = fVar8 * fVar7;
    if (fVar11 < fVar8) {
      lVar6 = FUN_00965ecc(param_3);
      fVar7 = 15.0;
      fVar11 = *(float *)((long)param_3 + 0xb4c) +
               (fVar8 - fVar11) / *(float *)(lVar6 + 0x14) + 15.0;
      if (*(float *)((long)param_3 + 0xb4c) != fVar11) {
        *(float *)((long)param_3 + 0xb4c) = fVar11;
        FUN_0091ada4(plVar2);
      }
    }
  }
  fVar9 = *(float *)(param_3 + 0xb6);
  fVar14 = *(float *)((long)param_3 + 0x5b4);
  plVar2 = param_3 + 0x214;
  fVar8 = (float)FUN_00f01c20(plVar1);
  fVar11 = fVar7;
  fVar10 = (float)FUN_00f01c20(plVar2);
  fVar9 = fVar9 + (fVar8 - fVar10);
  fVar14 = fVar14 + (fVar7 - fVar11);
  if ((*(float *)(param_3 + 0x21c) != fVar9) || (*(float *)((long)param_3 + 0x10e4) != fVar14)) {
    *(float *)(param_3 + 0x21c) = fVar9;
    *(float *)((long)param_3 + 0x10e4) = fVar14;
    FUN_0091ada4(plVar2);
  }
  iVar3 = (int)param_3[0x2c7];
  if (iVar3 == 2) {
    if (!NAN(*(float *)(param_3 + 0x21c))) goto LAB_00c6676c;
  }
  else {
    if (iVar3 == 1) {
      fVar14 = *(float *)(param_3 + 0x21c);
      fVar11 = 550.0;
    }
    else {
      if (iVar3 != 0) goto LAB_00c6676c;
      fVar14 = *(float *)(param_3 + 0x21c);
      fVar11 = 560.0;
    }
    if (fVar14 == fVar14 + fVar11) goto LAB_00c6676c;
    *(float *)(param_3 + 0x21c) = fVar14 + fVar11;
  }
  FUN_0091ada4(plVar2);
LAB_00c6676c:
  uVar5 = FUN_009c1050();
  if ((uVar5 & 1) != 0) {
    fVar11 = (float)FUN_00f0eac0(param_3 + 0x36);
    if ((*(float *)(param_3 + 0x3e) != fVar11 * 0.23) ||
       (*(float *)((long)param_3 + 500) != fVar14 * 0.18)) {
      *(float *)(param_3 + 0x3e) = fVar11 * 0.23;
      *(float *)((long)param_3 + 500) = fVar14 * 0.18;
      FUN_0091ada4(param_3 + 0x36);
      return;
    }
  }
  return;
}




undefined1 FUN_00c66804(long param_1)

{
  return *(undefined1 *)(param_1 + 0x163c);
}




undefined1 FUN_00c66810(long param_1)

{
  return *(undefined1 *)(param_1 + 0x163d);
}




undefined1 FUN_00c6681c(long param_1)

{
  return *(undefined1 *)(param_1 + 0x163e);
}




void FUN_00c66828(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 0x163c) == '\0') {
    uVar1 = *(uint *)(param_1 + 0x324) & 0xfffffffb | (uint)*(byte *)(param_1 + 0x163e) << 2;
    uVar2 = (uint)*(byte *)(param_1 + 0x163e) << 3;
  }
  else {
    uVar2 = 8;
    uVar1 = *(uint *)(param_1 + 0x324) | 4;
  }
  *(uint *)(param_1 + 0x324) = uVar1;
  *(uint *)(param_1 + 0x324) = uVar2 | uVar1 & 0xfffffff7;
  return;
}




void FUN_00c66878(long *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  
  plVar4 = param_1 + 0xae;
  lVar2 = FUN_00ca843c(plVar4,0);
  if (lVar2 != 0) {
    FUN_00ca7afc(lVar2,param_2 & 1);
  }
  plVar3 = (long *)FUN_00ca843c(plVar4,1);
  plVar4 = (long *)FUN_00ca843c(plVar4,2);
  (**(code **)(*plVar3 + 0x148))(plVar3,param_2 & 1);
  (**(code **)(*plVar4 + 0x148))(plVar4,param_2 & 1);
  uVar1 = *(uint *)((long)plVar3 + 0x84);
  uVar5 = 0xff;
  if ((param_2 & 1) == 0) {
    uVar5 = 0x66;
  }
  if ((uVar1 >> 7 & 0xff) != uVar5) {
    *(uint *)((long)plVar3 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar5 << 7;
    FUN_0091ada4(plVar3);
  }
  uVar1 = *(uint *)((long)plVar4 + 0x84);
  if ((uVar1 >> 7 & 0xff) != uVar5) {
    *(uint *)((long)plVar4 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar5 << 7;
    FUN_0091ada4(plVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00c66968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00c6696c(long *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_00ca843c(param_1 + 0xae,1);
  if (lVar1 != 0) {
    FUN_00ca7afc(lVar1,param_2 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c669ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00c669b0(long *param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = FUN_00ca843c(param_1 + 0x161,3);
  if (lVar1 != 0) {
    FUN_00ca7afc(lVar1,param_2 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c669f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00c669f4(long *param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_00ca843c(param_1 + 0x161);
  if (lVar1 != 0) {
    FUN_00ca7afc(lVar1,param_3 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c66a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}




void FUN_00c66a34(undefined1 param_1 [16],float param_2,long param_3,ulong param_4,
                 undefined8 param_5,uint param_6)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = param_3 + 0xb08;
  param_4 = param_4 & 0xffffffff;
  fVar4 = (float)FUN_00f13e54(lVar3);
  local_78 = (code *)CONCAT44(param_2 + 102.0,fVar4 + 0.0);
  FUN_00f13f18(lVar3,&local_78);
  FUN_00ca8350(0x43c80000,0x40000000,lVar3,param_4);
  lVar3 = FUN_00ca8144(lVar3,param_4,"speaker_icon",param_5,"speaker_icon_mute",param_5,param_6 & 1)
  ;
  uVar1 = DAT_03210c64;
  local_78 = FUN_00c66b80;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_3;
  local_58 = param_4;
  local_50 = uVar1;
  FUN_009693a0(lVar3 + 0x248,&local_78);
  local_78 = FUN_00c66b94;
  local_68 = 0;
  uStack_60 = 0;
  lStack_70 = param_3;
  local_58 = param_4;
  local_50 = uVar1;
  FUN_009693a0(lVar3 + 0x818,&local_78);
  FUN_00f13f18(lVar3,&DAT_01bbe250);
  FUN_00f13f68(lVar3,0x64000001f4);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c66b80(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00c66b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x40))(*(long **)(param_1 + 0xb8),in_x4);
  return;
}




void FUN_00c66b94(long param_1)

{
  undefined8 in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x00c66ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))(*(long **)(param_1 + 0xb8),in_x4);
  return;
}




void FUN_00c66ba8(undefined1 param_1 [16],float param_2,long param_3,undefined4 param_4)

{
  long lVar1;
  undefined4 local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  param_3 = param_3 + 0xb08;
  FUN_00ca8518(param_3);
  FUN_00ca85dc(param_3,param_4);
  local_40 = FUN_00f13e54(param_3);
  fStack_3c = param_2 + -102.0;
  FUN_00f13f18(param_3,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00c66c30(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00ca843c(param_1 + 0xb08);
  return lVar1 != 0;
}




void FUN_00c66c50(long param_1,long param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  int aiStack_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar6 = (long)aiStack_50 - ((ulong)param_3 * 4 + 0xf & 0x7fffffff0);
  uVar3 = FUN_00ca848c(param_1 + 0xb08,lVar6);
  uVar4 = 0;
  if ((uVar3 != 0) && (param_3 != 0)) {
    uVar5 = 0;
    uVar4 = 0;
    do {
      iVar1 = *(int *)(lVar6 + uVar5 * 4);
      if (iVar1 != 3) {
        *(int *)(param_2 + uVar4 * 4) = iVar1;
        uVar4 = (ulong)((int)uVar4 + 1);
      }
      uVar5 = uVar5 + 1;
    } while ((uVar5 < uVar3) && (uVar5 < param_3));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00c66d14(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  
  lVar1 = FUN_00ca843c(param_1 + 0xb08);
  if (lVar1 != 0) {
    FUN_00ca7afc(lVar1,param_3 & 1);
    return;
  }
  return;
}




void FUN_00c66d4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




void FUN_00c66d5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66d68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  return;
}




void FUN_00c66d6c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  return;
}




void FUN_00c66d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66d88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x18))();
  return;
}




void FUN_00c66d8c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x20))();
  return;
}




void FUN_00c66d9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x28))();
  return;
}




void FUN_00c66dac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x30))();
  return;
}




void FUN_00c66dbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c66dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x38))();
  return;
}




void FUN_00c66dcc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c66ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x40))(*(long **)(param_1 + 0xb8),param_3);
  return;
}




void FUN_00c66de0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00c66df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))(*(long **)(param_1 + 0xb8),param_3);
  return;
}




void FUN_00c66df4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined4 uVar9;
  uint uVar10;
  long lVar11;
  code *local_98;
  long *plStack_90;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  FUN_00f13ca4();
  param_1[0x17] = 0;
  *param_1 = (long)&PTR_FUN_02800160;
  FUN_00948cd8(param_1 + 0x18);
  plVar1 = param_1 + 0x1b;
  *param_1 = (long)&PTR_FUN_027ffae8;
  param_1[0x18] = (long)&PTR_FUN_027ffc48;
  FUN_00f0e4a8(plVar1);
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  FUN_00b043c8(param_1 + 0x3b);
  FUN_00ad9950(param_1 + 0x55,param_1 + 0x3b);
  plVar2 = param_1 + 0x20a;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x228;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x246;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0x25d;
  FUN_00c95460(plVar5);
  plVar6 = param_1 + 0x32b;
  FUN_00c95460(plVar6);
  plVar7 = param_1 + 0x3f9;
  FUN_00c95460(plVar7);
  plVar8 = param_1 + 0x4c7;
  FUN_00c95460(plVar8);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00f023ec(plVar4,plVar6,1);
  FUN_00f023ec(plVar4,plVar7,1);
  FUN_00f023ec(plVar4,plVar8,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuHomepagePartsCommon__02be35e8,"popup_bg");
  *(uint *)((long)param_1 + 0xfc4) = *(uint *)((long)param_1 + 0xfc4) | 4;
  FUN_008fa54c(&local_98,"ice_icon_small");
  FUN_00c9579c(plVar5,&local_98);
  if (((byte)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  uVar9 = DAT_03210c64;
  local_98 = FUN_00c671d4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  local_70 = uVar9;
  FUN_009693a0(param_1 + 0x25e,&local_98);
  FUN_008fa54c(&local_98,"glory_icon_small");
  FUN_00c9579c(plVar6,&local_98);
  if (((ulong)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  local_98 = FUN_00c671e4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = (void *)0x0;
  plStack_90 = param_1;
  local_70 = uVar9;
  FUN_009693a0(param_1 + 0x32c,&local_98);
  FUN_008fa54c(&local_98,"opal_icon_small");
  FUN_00c9579c(plVar7,&local_98);
  if (((ulong)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  *(uint *)((long)param_1 + 0x249c) = *(uint *)((long)param_1 + 0x249c) & 0xfffffffb;
  FUN_008fa54c(&local_98,"essence_icon_small");
  FUN_00c9579c(plVar8,&local_98);
  if (((ulong)local_98 & 1) != 0) {
    operator_delete(local_88);
  }
  *(uint *)((long)param_1 + 0x2b0c) = *(uint *)((long)param_1 + 0x2b0c) & 0xfffffffb;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar2,&DAT_01bee7f6,2);
  *(byte *)(param_1 + 0x225) = *(byte *)(param_1 + 0x225) | 2;
  uVar10 = *(uint *)((long)param_1 + 0x10d4);
  if ((uVar10 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x10d4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x5900;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0e548(plVar3,PTR_s_build___InventoryCommon_atlas_02be34e0,
               "inventory_hero_portrait_frame_standard");
  uVar10 = *(uint *)((long)param_1 + 0x11c4);
  if ((uVar10 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0x11c4) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x3300;
    FUN_0091ada4(plVar3);
  }
  FUN_00c671f4(param_1);
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

