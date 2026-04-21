// functions/009d1 — 39 functions
#include "libGameKindred.h"




undefined8 FUN_009d1000(undefined8 param_1)

{
  FUN_009cca1c();
  return param_1;
}




void FUN_009d1024(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d1030(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = FUN_01985d44(param_1,DAT_0312f360);
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  FUN_009d12e8();
  return;
}




void FUN_009d105c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  FUN_009d12e8();
  return;
}




void FUN_009d1064(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027c2fc8;
  *(undefined1 *)(param_1 + 6) = 0xff;
  return;
}




void FUN_009d1084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c2fc8;
  if (*(char *)(param_1 + 6) != -1) {
    FUN_00920a44();
    *(undefined1 *)(param_1 + 6) = 0xff;
  }
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d10cc(long param_1)

{
  if (*(char *)(param_1 + 0x30) != -1) {
    FUN_00920a44();
    *(undefined1 *)(param_1 + 0x30) = 0xff;
  }
  return;
}




void FUN_009d1100(void *param_1)

{
  FUN_009d1084();
  operator_delete(param_1);
  return;
}




void FUN_009d1124(long param_1)

{
  long lVar1;
  
  DAT_0312f360 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f360 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f360 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d1388;
  *(code **)(lVar1 + 0xb8) = FUN_009d13a8;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 200;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f360;
  *(undefined4 *)(lVar1 + 0xa8) = 0x38;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_019867cc(param_1,0x199203e9,FUN_009d11cc,0);
  FUN_019867cc(param_1,0x163803be,FUN_009d12bc,0);
  return;
}




void FUN_009d12bc(void)

{
  FUN_009d12e8();
  return;
}




void FUN_009d12e8(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x28) + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) ||
     (1 < *(ushort *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    uVar2 = FUN_009209f4();
    *(undefined1 *)(param_1 + 0x30) = uVar2;
  }
  return;
}




void FUN_009d133c(long param_1,long param_2)

{
  if ((*(int *)(param_2 + 0x260) == *(int *)(*(long *)(param_1 + 0x28) + 0x260)) &&
     (*(char *)(param_1 + 0x30) != -1)) {
    FUN_00920a44();
    *(undefined1 *)(param_1 + 0x30) = 0xff;
  }
  return;
}




void thunk_FUN_009d12e8(long param_1)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 0x28) + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) ||
     (1 < *(ushort *)(*(long *)(param_1 + 0x28) + (ulong)uVar1 * 0x38 + 0x90) - 3)) {
    uVar2 = FUN_009209f4();
    *(undefined1 *)(param_1 + 0x30) = uVar2;
  }
  return;
}




void FUN_009d1388(undefined8 *param_1)

{
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027c2fc8;
  *(undefined1 *)(param_1 + 6) = 0xff;
  return;
}




void FUN_009d13a8(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d13b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d13b4(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_thunk_FUN_01985bd0_027c2ff8;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0x11] = 0x3f80000000000000;
  param_1[0x10] = 0;
  param_1[0xf] = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0x3f80000000000000;
  param_1[0xb] = 0;
  param_1[10] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x13) = DAT_03218f38;
  uVar3 = DAT_03218f30;
  *(undefined8 *)((long)param_1 + 0x9c) = 0x4000000000000000;
  *(undefined4 *)((long)param_1 + 0xa4) = 0x3f860a92;
  param_1[0x15] = 0x40000000;
  param_1[0x12] = uVar3;
  lVar2 = FUN_01985d44(param_1,DAT_0312ead4);
  param_1[6] = lVar2;
  *(undefined1 *)(lVar2 + 0x33) = 0xb;
  uVar3 = FUN_01985d44(param_1,DAT_0312f168);
  param_1[7] = uVar3;
  FUN_01995ebc(auStack_50);
  local_40 = 0x437f0000;
  local_48 = 0x4354000043200000;
  FUN_01996270(auStack_50,0,&local_48,3,1,"u_indicator_color");
  uVar3 = FUN_019962e8(auStack_50);
  param_1[8] = uVar3;
  FUN_01995ef4(auStack_50);
  FUN_01995ebc(auStack_50);
  local_40 = 0;
  local_48 = 0x43200000;
  FUN_01996270(auStack_50,0,&local_48,3,1,"u_indicator_color");
  uVar3 = FUN_019962e8(auStack_50);
  param_1[9] = uVar3;
  FUN_01995ef4(auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d1564(void *param_1)

{
  FUN_01985bd0();
  operator_delete(param_1);
  return;
}




void FUN_009d1588(long param_1)

{
  long lVar1;
  
  DAT_0312f370 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312f370 + 1;
  lVar1 = param_1 + (ulong)DAT_0312f370 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d1c04;
  *(code **)(lVar1 + 0xb8) = FUN_009d1c28;
  *(uint *)(lVar1 + 0xa4) = DAT_0312f370;
  *(undefined4 *)(lVar1 + 0xa8) = 0xb0;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 8;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  return;
}




void FUN_009d15e8(long param_1,int param_2)

{
  long *plVar1;
  char *pcVar2;
  
  *(int *)(param_1 + 0x9c) = param_2;
  if (param_2 - 1U < 2) {
    plVar1 = *(long **)(param_1 + 0x30);
    pcVar2 = "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.mesh";
  }
  else {
    if (param_2 != 0) goto LAB_009d1634;
    plVar1 = *(long **)(param_1 + 0x30);
    pcVar2 = "build://Characters/JoystickIndicator/ArtCircle/circleJoystickIndicator.mesh";
  }
  (**(code **)(*plVar1 + 0x20))(plVar1,pcVar2);
LAB_009d1634:
  FUN_00e7cdd0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_009d1650(undefined4 param_1,long param_2)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  fVar2 = (float)NEON_fminnm(param_1,0x41a00000);
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  *(float *)(param_2 + 0xa0) = fVar2;
  FUN_00e6a93c(auStack_138,0x100,
               "build://Characters/JoystickIndicator/ArtCircle/circleJoystickIndicator.R_%d_T_%d.anim"
               ,(int)(fVar2 + fVar2 + 0.5) * 5,5);
  FUN_00e7c54c(*(undefined8 *)(param_2 + 0x38),
               "build://Characters/JoystickIndicator/ArtCircle/circleJoystickIndicator.skeleton",
               auStack_138);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d16f0(undefined4 param_1,undefined4 param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar2 = tpidr_el0;
  fVar6 = (float)NEON_fminnm(param_1,0x41a00000);
  local_38 = *(long *)(lVar2 + 0x28);
  fVar7 = (float)NEON_fminnm(param_2,0x43340000);
  uVar4 = 0;
  *(float *)(param_3 + 0xa0) = fVar6;
  *(float *)(param_3 + 0xa4) = fVar7;
  uVar5 = 0;
  do {
    fVar8 = (float)(&DAT_01b99028)[uVar5];
    if (fVar7 == fVar8) {
      iVar3 = (int)fVar8;
      if (iVar3 != -1) goto LAB_009d17c8;
      goto LAB_009d1798;
    }
    if (fVar7 < fVar8) goto LAB_009d179c;
    uVar1 = uVar5 + 1;
    uVar4 = uVar5 & 0xffffffff;
    uVar5 = uVar1;
  } while (uVar1 < 10);
  uVar4 = (ulong)((int)uVar1 - 1);
LAB_009d1798:
  uVar5 = 1;
LAB_009d179c:
  if (ABS(fVar7 - (float)(&DAT_01b99028)[uVar4]) <=
      ABS(fVar7 - (float)(&DAT_01b99028)[uVar5 & 0xffffffff])) {
    iVar3 = (int)(float)(&DAT_01b99028)[uVar4];
  }
  else {
    iVar3 = (int)(float)(&DAT_01b99028)[uVar5 & 0xffffffff];
  }
LAB_009d17c8:
  FUN_00e6a93c(auStack_138,0x100,
               "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.W_%d_L_%d_S_%d.anim"
               ,0,(int)(fVar6 + fVar6 + 0.5) * 5,iVar3);
  FUN_00e7c54c(*(undefined8 *)(param_3 + 0x38),
               "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.skeleton"
               ,auStack_138);
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009d181c(undefined4 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  fVar2 = (float)NEON_fminnm(param_1,0x41a00000);
  local_38 = *(long *)(lVar1 + 0x28);
  fVar3 = (float)NEON_fminnm(param_2,0x40800000);
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  if (fVar3 <= 1.0) {
    fVar3 = 1.0;
  }
  *(float *)(param_3 + 0xa0) = fVar2;
  *(float *)(param_3 + 0xa8) = fVar3;
  FUN_00e6a93c(auStack_138,0x100,
               "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.W_%d_L_%d_S_%d.anim"
               ,(int)(fVar3 + fVar3 + 0.5) * 5,(int)(fVar2 + fVar2 + 0.5) * 5,0);
  FUN_00e7c54c(*(undefined8 *)(param_3 + 0x38),
               "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.skeleton"
               ,auStack_138);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d18dc(undefined4 param_1,long param_2)

{
  long lVar1;
  float fVar2;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  fVar2 = (float)NEON_fminnm(param_1,0x40800000);
  local_38 = *(long *)(lVar1 + 0x28);
  if (fVar2 <= 1.0) {
    fVar2 = 1.0;
  }
  *(float *)(param_2 + 0xa8) = fVar2;
  *(undefined4 *)(param_2 + 0xa0) = 0x43960000;
  FUN_00e6a93c(auStack_138,0x100,
               "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.W_%d_L_%d_S_%d.anim"
               ,(int)(fVar2 + fVar2 + 0.5) * 5,3000,0);
  FUN_00e7c54c(*(undefined8 *)(param_2 + 0x38),
               "build://Characters/JoystickIndicator/ArtAdaptable/adaptableJoystickIndicator.skeleton"
               ,auStack_138);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d1988(float param_1,float param_2,float param_3,long param_4)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(float *)(param_4 + 0x90) = param_1;
  *(float *)(param_4 + 0x94) = param_2;
  *(float *)(param_4 + 0x98) = param_3;
  *(float *)(param_4 + 0x80) = param_1 + 0.0;
  *(float *)(param_4 + 0x84) = param_2 + 0.0;
  *(undefined4 *)(param_4 + 0x8c) = 0x3f800000;
  *(float *)(param_4 + 0x88) = param_3 + 0.0;
  *(undefined8 *)(param_4 + 0x78) = 0x3c23d70a;
  *(undefined8 *)(param_4 + 0x70) = 0;
  uStack_48 = *(undefined8 *)(param_4 + 0x88);
  uStack_50 = *(undefined8 *)(param_4 + 0x80);
  uStack_58 = *(undefined8 *)(param_4 + 0x78);
  local_60 = *(undefined8 *)(param_4 + 0x70);
  *(undefined8 *)(param_4 + 0x58) = 0;
  *(undefined8 *)(param_4 + 0x50) = 0x3c23d70a;
  *(undefined8 *)(param_4 + 0x68) = 0;
  *(undefined8 *)(param_4 + 0x60) = 0x3c23d70a00000000;
  uStack_68 = *(undefined8 *)(param_4 + 0x68);
  local_70 = *(undefined8 *)(param_4 + 0x60);
  uStack_78 = *(undefined8 *)(param_4 + 0x58);
  local_80 = *(undefined8 *)(param_4 + 0x50);
  fVar9 = *(float *)(param_4 + 0xac);
  fVar2 = sinf(fVar9);
  fVar9 = cosf(fVar9);
  fVar3 = (float)local_80;
  fVar4 = (float)((ulong)local_80 >> 0x20);
  fVar6 = (float)((ulong)uStack_78 >> 0x20);
  fVar5 = (float)((ulong)local_60 >> 0x20);
  fVar7 = (float)uStack_58;
  fVar8 = (float)((ulong)uStack_58 >> 0x20);
  local_80 = CONCAT44(fVar4 * fVar9 - fVar5 * fVar2,fVar3 * fVar9 - (float)local_60 * fVar2);
  local_60 = CONCAT44(fVar4 * fVar2 + fVar5 * fVar9,fVar3 * fVar2 + (float)local_60 * fVar9);
  uStack_58 = CONCAT44(fVar6 * fVar2 + fVar8 * fVar9,(float)uStack_78 * fVar2 + fVar7 * fVar9);
  uStack_78 = CONCAT44(fVar6 * fVar9 - fVar8 * fVar2,(float)uStack_78 * fVar9 - fVar7 * fVar2);
  FUN_00e7ca50(*(undefined8 *)(param_4 + 0x30),&local_80);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d1aa0(float param_1,long param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  *(float *)(param_2 + 0xac) = param_1;
  fVar2 = sinf(param_1);
  fVar3 = cosf(param_1);
  puVar1 = (undefined8 *)(param_2 + 0x50);
  fVar4 = (float)*puVar1;
  fVar5 = (float)((ulong)*puVar1 >> 0x20);
  fVar6 = (float)*(undefined8 *)(param_2 + 0x58);
  fVar7 = (float)((ulong)*(undefined8 *)(param_2 + 0x58) >> 0x20);
  fVar8 = (float)*(undefined8 *)(param_2 + 0x70);
  fVar9 = (float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20);
  fVar10 = (float)*(undefined8 *)(param_2 + 0x78);
  fVar11 = (float)((ulong)*(undefined8 *)(param_2 + 0x78) >> 0x20);
  *puVar1 = CONCAT44(fVar5 * fVar3 - fVar9 * fVar2,fVar4 * fVar3 - fVar8 * fVar2);
  *(ulong *)(param_2 + 0x58) =
       CONCAT44(fVar7 * fVar3 - fVar11 * fVar2,fVar6 * fVar3 - fVar10 * fVar2);
  *(ulong *)(param_2 + 0x70) = CONCAT44(fVar5 * fVar2 + fVar9 * fVar3,fVar4 * fVar2 + fVar8 * fVar3)
  ;
  *(ulong *)(param_2 + 0x78) =
       CONCAT44(fVar7 * fVar2 + fVar11 * fVar3,fVar6 * fVar2 + fVar10 * fVar3);
  FUN_00e7ca50(*(undefined8 *)(param_2 + 0x30),puVar1);
  return;
}




void FUN_009d1b34(long param_1)

{
  FUN_00e7cdd8(*(undefined8 *)(param_1 + 0x30));
  FUN_00e7c58c(0x3f800000,0x3f800000,0,0,0,*(undefined8 *)(param_1 + 0x38),0);
  return;
}




void FUN_009d1b74(long param_1)

{
  FUN_00e7ce38(*(undefined8 *)(param_1 + 0x30));
  return;
}




void FUN_009d1b7c(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00e7ca48(*(undefined8 *)(param_1 + 0x30));
    FUN_0198aba0();
    FUN_00e7cdd0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}




void FUN_009d1bbc(long param_1)

{
  if (*(int *)(param_1 + 0x28) != 1) {
    FUN_00e7ca48(*(undefined8 *)(param_1 + 0x30));
    FUN_0198aba0();
    FUN_00e7cdd0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x28) = 1;
  }
  return;
}




undefined8 FUN_009d1c04(undefined8 param_1)

{
  FUN_009d13b4();
  return param_1;
}




void FUN_009d1c28(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d1c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009d1c34(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_02baef70;
  uVar2 = FUN_00f34280();
  param_1[7] = uVar2;
  *(undefined4 *)(param_1 + 6) = 0x7000000;
  param_1[5] = &PTR_FUN_027c30c8;
  FUN_019892f4(param_1 + 8);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = &PTR_FUN_027c3028;
  param_1[5] = &PTR_FUN_027c3068;
  param_1[8] = &PTR_FUN_027c3098;
  uVar1 = DAT_03214ce8;
  param_1[0x15] = 0x200000000;
  *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1b) = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x17] = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined2 *)(param_1 + 0x16) = 0xffff;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  *(undefined4 *)((long)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0xfc) = 0;
  uVar2 = _DAT_03218ef8;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  *(byte *)(param_1 + 0x22) = *(byte *)(param_1 + 0x22) & 0xe0 | 0x10;
  param_1[0x12] = 0x3f800000;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0xf] = 0x3f80000000000000;
  param_1[0x10] = 0;
  param_1[0x20] = uVar2;
  param_1[0x21] = 0xbfffffff00000000;
  param_1[0xe] = 0;
  param_1[0xd] = 0x3f800000;
  return;
}




void FUN_009d1d68(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c3028;
  param_1[5] = &PTR_FUN_027c3068;
  param_1[8] = &PTR_FUN_027c3098;
  if (param_1[10] != 0) {
    FUN_00f34268();
  }
  FUN_0198931c(param_1 + 8);
  FUN_01985bd0(param_1);
  return;
}




void FUN_009d1dc0(long param_1)

{
  FUN_009d1d68(param_1 + -0x28);
  return;
}




void FUN_009d1dc8(long param_1)

{
  FUN_009d1d68(param_1 + -0x40);
  return;
}




void FUN_009d1dd0(void *param_1)

{
  FUN_009d1d68();
  operator_delete(param_1);
  return;
}




void FUN_009d1df4(long param_1)

{
  FUN_009d1d68((void *)(param_1 + -0x28));
  operator_delete((void *)(param_1 + -0x28));
  return;
}




void FUN_009d1e1c(long param_1)

{
  FUN_009d1d68((void *)(param_1 + -0x40));
  operator_delete((void *)(param_1 + -0x40));
  return;
}




void FUN_009d1e44(long param_1)

{
  long lVar1;
  
  DAT_02e3ef98 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_02e3ef98 + 1;
  lVar1 = param_1 + (ulong)DAT_02e3ef98 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009d4304;
  *(code **)(lVar1 + 0xb8) = FUN_009d4328;
  *(uint *)(lVar1 + 0xa4) = DAT_02e3ef98;
  *(undefined4 *)(lVar1 + 0xa8) = 0x118;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0x100;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,0,FUN_009d200c,0);
  FUN_01986780(param_1,1,FUN_009d201c,0);
  FUN_01986780(param_1,4,FUN_009d2040,0);
  FUN_019867b4(param_1,4,FUN_009d209c);
  FUN_019867cc(param_1,0xdc302c4,FUN_009d20d0,0);
  FUN_019867cc(param_1,0x36de0632,FUN_009d20fc,0);
  FUN_019867cc(param_1,0x2af3056d,FUN_009d21b8,0);
  FUN_019867cc(param_1,0x29d80553,FUN_009d228c,0);
  FUN_019867cc(param_1,0x35830610,FUN_009d2360,0);
  FUN_019867cc(param_1,0x3eb506ac,FUN_009d2428,0);
  FUN_019867cc(param_1,0x3d56066a,FUN_009d24fc,0);
  FUN_019867cc(param_1,0x456706e0,FUN_009d2608,0);
  FUN_019867cc(param_1,0x363b0618,FUN_009d2740,0);
  return;
}

