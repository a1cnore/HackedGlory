// functions/00bfc — 26 functions
#include "libGameKindred.h"




void FUN_00bfc00c(long param_1)

{
  if (*(char *)(param_1 + 0xf84) != '\0') {
    FUN_00bfc8c4(param_1,0);
    return;
  }
  return;
}




void FUN_00bfc020(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x368);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
  *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) & 0xfffffffb;
  *(uint *)(param_1 + 0x2a4) = *(uint *)(param_1 + 0x2a4) & 0xfffffffb;
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x370) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x368);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x370) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x368) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x370) = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0,uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x368) = 0;
      *(undefined4 *)(param_1 + 0x370) = DAT_03214ce8;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00bfc0ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  float local_bc;
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  int local_b0;
  int local_ac;
  long local_a8;
  
  lVar7 = tpidr_el0;
  local_a8 = *(long *)(lVar7 + 0x28);
  uVar9 = FUN_00f00438("root-layer");
  FUN_00967268(&local_ac,&local_b0,auStack_b4,auStack_b8);
  FUN_00f0025c(&local_bc,&local_c0);
  FUN_00f00298(&uStack_c4,&local_c8);
  FUN_00f13f08(uStack_c4,local_c8,param_1);
  FUN_00f13f08(local_bc,local_c0);
  lVar10 = param_1 + 0x198;
  FUN_00f13f08(local_bc,local_c0,lVar10);
  lVar1 = param_1 + 0x288;
  FUN_00f13f08(local_bc,local_c0,lVar1);
  FUN_00f13f08(local_bc,local_c0);
  lVar2 = param_1 + 0x7c8;
  FUN_00f13f08(uStack_c4,local_c8,lVar2);
  lVar3 = param_1 + 0x350;
  fVar12 = 768.0;
  FUN_00f13f08(local_bc + 8.0,0x44400000,lVar3);
  fVar14 = 40.0;
  lVar4 = param_1 + 0x530;
  fVar18 = *(float *)(param_1 + 0x578) * 40.0;
  fVar11 = (float)FUN_00f0eac0(lVar4);
  lVar5 = param_1 + 0x890;
  FUN_00f0dad0((fVar11 - fVar18) + -80.0,lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x220,1
              );
  FUN_00f0dad0(0x43960000,lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xf0,1);
  uVar13 = FUN_00f0e700(lVar4);
  FUN_00f0d548(lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x220);
  fVar11 = fVar12;
  FUN_00f0d548(lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xf0);
  fVar12 = fVar12 + fVar11;
  lVar5 = param_1 + 0x440;
  FUN_00f0eac0(lVar5);
  lVar6 = param_1 + 0x620;
  fVar12 = (fVar12 + 70.0 + 70.0) - fVar11;
  FUN_00f0eac0(lVar6);
  FUN_00f13f08(uVar13,(fVar12 - fVar11) / *(float *)(param_1 + 0x57c),lVar4);
  fVar11 = *(float *)(param_1 + 0x2cc);
  fVar19 = *(float *)(param_1 + 0x110);
  fVar15 = *(float *)(param_1 + 0x114);
  fVar17 = *(float *)(param_1 + 0x2c8);
  fVar16 = *(float *)(param_1 + 0x808);
  fVar12 = *(float *)(param_1 + 0x80c);
  if ((fVar19 != DAT_03218ef8) || (fVar8 = fVar17, fVar15 != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x110) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0xd0);
    fVar8 = *(float *)(param_1 + 0x2c8);
  }
  if ((fVar8 != DAT_03218ef8) || (*(float *)(param_1 + 0x2cc) != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x2c8) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x808) != DAT_03218ef8) ||
     (*(float *)(param_1 + 0x80c) != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x808) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar2);
  }
  FUN_00f07940((float)local_ac,(float)local_b0,param_1,0,uVar9,0);
  if (*(int *)(param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xbe4) == 0) {
    *(byte *)(param_1 + 0x518) = *(byte *)(param_1 + 0x518) & 0xfe;
    *(byte *)(param_1 + 0x608) = *(byte *)(param_1 + 0x608) & 0xfe;
    *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) & 0xfe;
    *(byte *)(param_1 + 0x428) = *(byte *)(param_1 + 0x428) & 0xfe;
    FUN_00f07940((float)-local_ac,0,lVar10,0,param_1,0);
    FUN_00f07940(0,0,lVar1,0,lVar10,0);
    FUN_00f07940(0,0,lVar2,0,lVar10,0);
    lVar10 = param_1 + 0x890;
    FUN_00f07a18(0,0,lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,3);
    FUN_00f07a18((float)-local_ac,0,lVar3,3);
    FUN_00f07940(0xc2a00000,0xc41d0000,lVar5,0,lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,2)
    ;
    FUN_00f07940(0,0,lVar4,0,lVar5,3);
    FUN_00f07940(0,0,lVar6,0,lVar4,3);
    FUN_00f07a18((float)-local_ac,0,param_1 + 0x710,3);
    fVar14 = fVar18 + 40.0;
    lVar10 = lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378;
  }
  else {
    *(byte *)(param_1 + 0x518) = *(byte *)(param_1 + 0x518) | 1;
    *(byte *)(param_1 + 0x608) = *(byte *)(param_1 + 0x608) | 1;
    *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
    *(byte *)(param_1 + 0x428) = *(byte *)(param_1 + 0x428) | 1;
    FUN_00f07940((float)-local_ac,0,lVar10,0,param_1,0);
    FUN_00f07940(0,0,lVar1,0,lVar10,0);
    FUN_00f07940(0,0,lVar2,0,lVar10,0);
    lVar10 = param_1 + 0x890;
    FUN_00f07a18(0,0,lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,2);
    FUN_00f07a18((float)-local_ac,0,lVar3,3);
    FUN_00f07940(0x42a00000,0xc41d0000,lVar5,1,lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,3)
    ;
    FUN_00f07940(0,0,lVar4,0,lVar5,3);
    FUN_00f07940(0,0,lVar6,0,lVar4,3);
    FUN_00f07a18((float)-local_ac,0,param_1 + 0x710,3);
    lVar10 = lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378;
  }
  FUN_00f07940(fVar14,0x428c0000,lVar10 + 0xf0,0,lVar5,0);
  lVar10 = param_1 + 0x890 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378;
  FUN_00f07940(0,0,lVar10 + 0x220,0,lVar10 + 0xf0,3);
  if ((*(float *)(param_1 + 0x110) != fVar19) || (*(float *)(param_1 + 0x114) != fVar15)) {
    *(float *)(param_1 + 0x110) = fVar19;
    *(float *)(param_1 + 0x114) = fVar15;
    FUN_0091ada4(param_1 + 0xd0);
  }
  if ((*(float *)(param_1 + 0x2c8) != fVar17) || (*(float *)(param_1 + 0x2cc) != fVar11)) {
    *(float *)(param_1 + 0x2c8) = fVar17;
    *(float *)(param_1 + 0x2cc) = fVar11;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x808) != fVar16) || (*(float *)(param_1 + 0x80c) != fVar12)) {
    *(float *)(param_1 + 0x808) = fVar16;
    *(float *)(param_1 + 0x80c) = fVar12;
    FUN_0091ada4(lVar2);
  }
  if (*(long *)(lVar7 + 0x28) == local_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00bfc768(long param_1)

{
  return param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x890;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00bfc0ec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  float fStack_bc;
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  int iStack_b0;
  int iStack_ac;
  long lStack_a8;
  
  lVar7 = tpidr_el0;
  lStack_a8 = *(long *)(lVar7 + 0x28);
  uVar9 = FUN_00f00438("root-layer");
  FUN_00967268(&iStack_ac,&iStack_b0,auStack_b4,auStack_b8);
  FUN_00f0025c(&fStack_bc,&uStack_c0);
  FUN_00f00298(&uStack_c4,&uStack_c8);
  FUN_00f13f08(uStack_c4,uStack_c8,param_1);
  FUN_00f13f08(fStack_bc,uStack_c0);
  lVar10 = param_1 + 0x198;
  FUN_00f13f08(fStack_bc,uStack_c0,lVar10);
  lVar1 = param_1 + 0x288;
  FUN_00f13f08(fStack_bc,uStack_c0,lVar1);
  FUN_00f13f08(fStack_bc,uStack_c0);
  lVar2 = param_1 + 0x7c8;
  FUN_00f13f08(uStack_c4,uStack_c8,lVar2);
  lVar3 = param_1 + 0x350;
  fVar12 = 768.0;
  FUN_00f13f08(fStack_bc + 8.0,0x44400000,lVar3);
  fVar14 = 40.0;
  lVar4 = param_1 + 0x530;
  fVar18 = *(float *)(param_1 + 0x578) * 40.0;
  fVar11 = (float)FUN_00f0eac0(lVar4);
  lVar5 = param_1 + 0x890;
  FUN_00f0dad0((fVar11 - fVar18) + -80.0,lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x220,1
              );
  FUN_00f0dad0(0x43960000,lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xf0,1);
  uVar13 = FUN_00f0e700(lVar4);
  FUN_00f0d548(lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x220);
  fVar11 = fVar12;
  FUN_00f0d548(lVar5 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xf0);
  fVar12 = fVar12 + fVar11;
  lVar5 = param_1 + 0x440;
  FUN_00f0eac0(lVar5);
  lVar6 = param_1 + 0x620;
  fVar12 = (fVar12 + 70.0 + 70.0) - fVar11;
  FUN_00f0eac0(lVar6);
  FUN_00f13f08(uVar13,(fVar12 - fVar11) / *(float *)(param_1 + 0x57c),lVar4);
  fVar11 = *(float *)(param_1 + 0x2cc);
  fVar19 = *(float *)(param_1 + 0x110);
  fVar15 = *(float *)(param_1 + 0x114);
  fVar17 = *(float *)(param_1 + 0x2c8);
  fVar16 = *(float *)(param_1 + 0x808);
  fVar12 = *(float *)(param_1 + 0x80c);
  if ((fVar19 != DAT_03218ef8) || (fVar8 = fVar17, fVar15 != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x110) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(param_1 + 0xd0);
    fVar8 = *(float *)(param_1 + 0x2c8);
  }
  if ((fVar8 != DAT_03218ef8) || (*(float *)(param_1 + 0x2cc) != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x2c8) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x808) != DAT_03218ef8) ||
     (*(float *)(param_1 + 0x80c) != _DAT_03218efc)) {
    *(ulong *)(param_1 + 0x808) = CONCAT44(_DAT_03218efc,DAT_03218ef8);
    FUN_0091ada4(lVar2);
  }
  FUN_00f07940((float)iStack_ac,(float)iStack_b0,param_1,0,uVar9,0);
  if (*(int *)(param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xbe4) == 0) {
    *(byte *)(param_1 + 0x518) = *(byte *)(param_1 + 0x518) & 0xfe;
    *(byte *)(param_1 + 0x608) = *(byte *)(param_1 + 0x608) & 0xfe;
    *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) & 0xfe;
    *(byte *)(param_1 + 0x428) = *(byte *)(param_1 + 0x428) & 0xfe;
    FUN_00f07940((float)-iStack_ac,0,lVar10,0,param_1,0);
    FUN_00f07940(0,0,lVar1,0,lVar10,0);
    FUN_00f07940(0,0,lVar2,0,lVar10,0);
    lVar10 = param_1 + 0x890;
    FUN_00f07a18(0,0,lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,3);
    FUN_00f07a18((float)-iStack_ac,0,lVar3,3);
    FUN_00f07940(0xc2a00000,0xc41d0000,lVar5,0,lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,2)
    ;
    FUN_00f07940(0,0,lVar4,0,lVar5,3);
    FUN_00f07940(0,0,lVar6,0,lVar4,3);
    FUN_00f07a18((float)-iStack_ac,0,param_1 + 0x710,3);
    fVar14 = fVar18 + 40.0;
    lVar10 = lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378;
  }
  else {
    *(byte *)(param_1 + 0x518) = *(byte *)(param_1 + 0x518) | 1;
    *(byte *)(param_1 + 0x608) = *(byte *)(param_1 + 0x608) | 1;
    *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
    *(byte *)(param_1 + 0x428) = *(byte *)(param_1 + 0x428) | 1;
    FUN_00f07940((float)-iStack_ac,0,lVar10,0,param_1,0);
    FUN_00f07940(0,0,lVar1,0,lVar10,0);
    FUN_00f07940(0,0,lVar2,0,lVar10,0);
    lVar10 = param_1 + 0x890;
    FUN_00f07a18(0,0,lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,2);
    FUN_00f07a18((float)-iStack_ac,0,lVar3,3);
    FUN_00f07940(0x42a00000,0xc41d0000,lVar5,1,lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378,3)
    ;
    FUN_00f07940(0,0,lVar4,0,lVar5,3);
    FUN_00f07940(0,0,lVar6,0,lVar4,3);
    FUN_00f07a18((float)-iStack_ac,0,param_1 + 0x710,3);
    lVar10 = lVar10 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378;
  }
  FUN_00f07940(fVar14,0x428c0000,lVar10 + 0xf0,0,lVar5,0);
  lVar10 = param_1 + 0x890 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378;
  FUN_00f07940(0,0,lVar10 + 0x220,0,lVar10 + 0xf0,3);
  if ((*(float *)(param_1 + 0x110) != fVar19) || (*(float *)(param_1 + 0x114) != fVar15)) {
    *(float *)(param_1 + 0x110) = fVar19;
    *(float *)(param_1 + 0x114) = fVar15;
    FUN_0091ada4(param_1 + 0xd0);
  }
  if ((*(float *)(param_1 + 0x2c8) != fVar17) || (*(float *)(param_1 + 0x2cc) != fVar11)) {
    *(float *)(param_1 + 0x2c8) = fVar17;
    *(float *)(param_1 + 0x2cc) = fVar11;
    FUN_0091ada4(lVar1);
  }
  if ((*(float *)(param_1 + 0x808) != fVar16) || (*(float *)(param_1 + 0x80c) != fVar12)) {
    *(float *)(param_1 + 0x808) = fVar16;
    *(float *)(param_1 + 0x80c) = fVar12;
    FUN_0091ada4(lVar2);
  }
  if (*(long *)(lVar7 + 0x28) == lStack_a8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfc780(long param_1,long param_2)

{
  long lVar1;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00bfc87c();
  *(long *)(param_1 + 0xc0) = param_2;
  *(undefined8 *)(param_1 + 200) = *(undefined8 *)(param_2 + 8);
  FUN_00bfc8c4(param_1,1);
  FUN_00bfc0ec(param_1);
  pcStack_40 = FUN_00bfcf40;
  local_48 = param_1;
  FUN_00f02e98(0x3f99999a,&local_48,0,0);
  FUN_00b89d24(0x3f000000,param_1 + 0xd0,1,4,1);
  FUN_00b89d24(0x3e99999a,param_1 + 0x7c8,1,1,1);
  FUN_00b89d24(0x3e99999a,param_1 + 0x288,1,3,1);
  *(uint *)(param_1 + 0x794) = *(uint *)(param_1 + 0x794) | 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfc87c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  *(undefined1 *)(param_1 + 0xf84) = 0;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined1 *)(lVar1 + 0xbe0) = 0;
    *(undefined4 *)(lVar1 + 0xbe4) = 0;
    FUN_00f0e628(lVar1 + 0x890);
    lVar2 = lVar2 + 0x378;
  } while (lVar2 != 0x6f0);
  return;
}




void FUN_00bfc8c4(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0xf80);
  if ((param_2 & 1) == 0) {
    if (*(char *)(param_1 + (ulong)(~uVar1 & 1) * 0x378 + 0xbe0) == '\0') {
      FUN_00bfc020(param_1 + 0x890 + (ulong)uVar1 * 0x378);
      uVar1 = ~*(uint *)(param_1 + 0xf80) & 1;
      *(uint *)(param_1 + 0xf80) = uVar1;
      FUN_00bfcbe4(param_1 + 0x890 + (ulong)uVar1 * 0x378);
      FUN_00bfccbc(param_1);
      lVar2 = param_1 + (ulong)(~*(uint *)(param_1 + 0xf80) & 1) * 0x378;
      if (**(long **)(param_1 + 200) == 0) {
        *(undefined1 *)(lVar2 + 0xbe0) = 1;
      }
      else {
        FUN_00bfcad4(lVar2 + 0x890);
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 8;
      }
    }
    else {
      FUN_00bfca0c(param_1);
    }
  }
  else {
    FUN_00bfcad4(param_1 + (ulong)uVar1 * 0x378 + 0x890,**(undefined8 **)(param_1 + 200));
    lVar2 = *(long *)(param_1 + 200);
    *(long *)(param_1 + 200) = lVar2 + 8;
    uVar1 = *(uint *)(param_1 + 0xf80);
    if (*(long *)(lVar2 + 8) == 0) {
      *(undefined1 *)(param_1 + (ulong)(~uVar1 & 1) * 0x378 + 0xbe0) = 1;
    }
    else {
      FUN_00bfcad4(param_1 + (ulong)(~uVar1 & 1) * 0x378 + 0x890);
      uVar1 = *(uint *)(param_1 + 0xf80);
      *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + 8;
    }
    FUN_00bfcbe4(param_1 + (ulong)uVar1 * 0x378 + 0x890);
    FUN_00bfccbc(param_1);
  }
  FUN_00bfc0ec(param_1);
  return;
}




void FUN_00bfca0c(long param_1)

{
  FUN_00bfc020(param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x890);
  FUN_00b89d24(0x3f000000,param_1 + 0xd0,0,4,1);
  FUN_00b89d24(0x3e99999a,param_1 + 0x7c8,0,1,1);
  FUN_00b89d24(0x3e99999a,param_1 + 0x288,0,3,1);
  *(uint *)(param_1 + 0x794) = *(uint *)(param_1 + 0x794) & 0xffffffef;
                    /* WARNING: Could not recover jumptable at 0x00bfcaa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0xb8))();
  return;
}




undefined8 FUN_00bfcaac(long param_1)

{
  return *(undefined8 *)(param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xbe8);
}




long FUN_00bfcac0(long param_1)

{
  return param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0x890;
}




void FUN_00bfcad4(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [128];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00e6a8a8(auStack_b8,PTR_s_build___HUDPartsCutscene__s__s_t_02be34b0,*param_2,param_2[1]);
  FUN_00f0e628(param_1);
  FUN_00f0e540(param_1,auStack_b8);
  FUN_00f0e578(param_1,"Cutscene_Avatar");
  uVar3 = FUN_00e6ce7c(param_2[3],0);
  FUN_00f0d75c(param_1 + 0xf0,uVar3);
  uVar3 = FUN_00e6ce7c(param_2[2],0);
  FUN_00f0d75c(param_1 + 0x220,uVar3);
  uVar1 = *(undefined4 *)(param_2 + 6);
  *(undefined8 **)(param_1 + 0x358) = param_2;
  *(undefined4 *)(param_1 + 0x354) = uVar1;
  uVar3 = 0;
  if (param_2[7] != 0) {
    uVar3 = FUN_00a57448();
  }
  *(undefined8 *)(param_1 + 0x360) = uVar3;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfcbb4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(*(long *)(param_1 + 0x358) + 0x38) != 0) {
    uVar1 = FUN_00a57448();
  }
  *(undefined8 *)(param_1 + 0x360) = uVar1;
  return;
}




void FUN_00bfcbe4(long param_1)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  long lVar4;
  
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) | 4;
  *(uint *)(param_1 + 0x2a4) = *(uint *)(param_1 + 0x2a4) | 4;
  if (*(long *)(param_1 + 0x360) != 0) {
    lVar4 = FUN_00a57398(0x3f800000);
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = lVar4 + 0x28;
    }
    puVar2 = &DAT_03214ce8;
    if (lVar4 != 0) {
      puVar2 = (undefined4 *)(lVar1 + 8);
    }
    uVar3 = *puVar2;
    *(long *)(param_1 + 0x368) = lVar1;
    *(undefined4 *)(param_1 + 0x370) = uVar3;
  }
  return;
}




void FUN_00bfcc5c(long param_1)

{
  *(undefined1 *)(param_1 + 0x350) = 1;
  return;
}




void FUN_00bfcc68(long param_1)

{
  *(undefined1 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x354) = 0;
  FUN_00f0e628();
  return;
}




long FUN_00bfcc74(long param_1)

{
  return param_1 + (ulong)(~*(uint *)(param_1 + 0xf80) & 1) * 0x378 + 0x890;
}




uint FUN_00bfcc90(long param_1)

{
  return ~*(uint *)(param_1 + 0xf80) & 1;
}




long FUN_00bfcca0(long param_1)

{
  return param_1 + (ulong)(~*(uint *)(param_1 + 0xf80) & 1) * 0x378 + 0x890;
}




void FUN_00bfccbc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  
  (**(code **)(**(long **)(param_1 + 0xb8) + 8))();
  lVar3 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0xf80) * 0x378 + 0xbe8);
  if (lVar3 == 0) {
    return;
  }
  iVar1 = *(int *)(lVar3 + 0x34);
  if (iVar1 == 1) {
    uVar4 = 0;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    uVar4 = 0x3e4ccccd;
  }
  uVar2 = FUN_00efee28(uVar4,0x3ecccccd,FUN_0091aa80);
  FUN_00f01980(param_1 + 0x198);
  FUN_00f022a0(param_1 + 0x198,uVar2);
  return;
}




void FUN_00bfcd64(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00bfcf40;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  *(undefined1 *)(param_1 + 0xf84) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfcdc4(long param_1)

{
  if (*(char *)(param_1 + 0xf84) != '\0') {
    FUN_00bfc8c4(param_1,0);
    return;
  }
  return;
}




void FUN_00bfcdd8(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_FUN_027f4468;
  lVar1 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar1 + 0xe28);
    FUN_00f0d3a4((long)param_1 + lVar1 + 0xcf8);
    *(undefined ***)((long)param_1 + lVar1 + 0xc08) = &PTR_FUN_028266f0;
    *(undefined ***)((long)param_1 + lVar1 + 0xcc0) = &PTR_FUN_02826850;
    FUN_00f0a79c((long)param_1 + lVar1 + 0xcd8);
    FUN_00f13d08((long)param_1 + lVar1 + 0xc08);
    lVar1 = lVar1 + -0x378;
  } while (lVar1 != -0x6f0);
  FUN_00f13d08(param_1 + 0xf9);
  FUN_00f13d08(param_1 + 0xe2);
  param_1[0xc4] = &PTR_FUN_028266f0;
  param_1[0xdb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xde);
  FUN_00f13d08(param_1 + 0xc4);
  param_1[0xa6] = &PTR_FUN_028266f0;
  param_1[0xbd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xc0);
  FUN_00f13d08(param_1 + 0xa6);
  param_1[0x88] = &PTR_FUN_028266f0;
  param_1[0x9f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xa2);
  FUN_00f13d08(param_1 + 0x88);
  param_1[0x6a] = &PTR_FUN_028266f0;
  param_1[0x81] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x84);
  FUN_00f13d08(param_1 + 0x6a);
  FUN_00f13d08(param_1 + 0x51);
  param_1[0x33] = &PTR_FUN_028266f0;
  param_1[0x4a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x4d);
  FUN_00f13d08(param_1 + 0x33);
  FUN_00f13d08(param_1 + 0x1a);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00bfcf1c(void *param_1)

{
  FUN_00bfcdd8();
  operator_delete(param_1);
  return;
}




void FUN_00bfcf40(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00bfcf40;
  local_38 = param_1;
  FUN_00f03390(&local_38);
  *(undefined1 *)(param_1 + 0xf84) = 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bfcfa0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00b89cd8();
  plVar1 = param_1 + 0x1a;
  param_1[0x19] = 0;
  *param_1 = (long)&PTR_FUN_027f45b0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x38;
  FUN_00f0e4a8(plVar2);
  FUN_00f0e4a8(param_1 + 0x56);
  plVar3 = param_1 + 0x74;
  FUN_00f13ca4(plVar3);
  plVar4 = param_1 + 0x8b;
  FUN_00f0d160(plVar4);
  FUN_00f13ca4(param_1 + 0xb1);
  *(undefined1 *)(param_1 + 200) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0x56,1);
  FUN_00f023ec(plVar3,plVar4,1);
  FUN_00f023ec(plVar3,param_1 + 0xb1,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsTutorialDialog_t_02be34a8,"popup_background");
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d7fc(plVar4,&DAT_01bbb634);
  FUN_00f0dac8(plVar4,3);
  local_60 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x60c) = *(uint *)((long)param_1 + 0x60c) | 0x10;
  local_88 = FUN_00bfd184;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0xb2,&local_88);
  local_88 = FUN_00bfd184;
  local_60 = DAT_03210f8c;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0xb2,&local_88);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

