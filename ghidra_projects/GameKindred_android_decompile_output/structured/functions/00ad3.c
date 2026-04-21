// functions/00ad3 — 3 functions
#include "libGameKindred.h"




void FUN_00ad3a30(long param_1)

{
  FUN_00ad489c(param_1,*(char *)(param_1 + 0xdc50) == '\0');
  return;
}




void FUN_00ad3a50(long param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0xb154) =
       *(uint *)(param_1 + 0xb154) & 0xfffffff8 |
       *(uint *)(param_1 + 0xb154) & 3 | (param_2 & 1) << 2;
  *(uint *)(param_1 + 0xc714) =
       *(uint *)(param_1 + 0xc714) & 0xfffffff8 |
       *(uint *)(param_1 + 0xc714) & 3 | (param_3 & 1) << 2;
  *(uint *)(param_1 + 0xb08c) =
       *(uint *)(param_1 + 0xb08c) & 0xfffffff8 |
       *(uint *)(param_1 + 0xb08c) & 3 | ((param_2 | param_3) & 1) << 2;
  FUN_00ad3a94();
  return;
}




void FUN_00ad3a94(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float *pfVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulong local_a0;
  float local_94;
  undefined1 auStack_90 [4];
  float local_8c;
  long local_88;
  
  lVar6 = tpidr_el0;
  local_88 = *(long *)(lVar6 + 0x28);
  uVar7 = FUN_0092e8e0();
  FUN_00a9bd24(param_1,uVar7 & 1,&local_8c,auStack_90,&local_94);
  fVar13 = *(float *)(param_1 + 0x8af8);
  fVar12 = local_8c - local_94;
  fVar8 = (float)FUN_00f0d4e0(param_1 + 0x8ab8);
  fVar9 = (float)FUN_00f0e700(param_1 + 0x9958);
  fVar11 = *(float *)(param_1 + 0x8afc);
  fVar8 = fVar13 + fVar8 * 0.5 + fVar9 * 0.5 + 20.0;
  if ((*(float *)(param_1 + 0x9998) != fVar8) || (*(float *)(param_1 + 0x999c) != fVar11)) {
    *(float *)(param_1 + 0x9998) = fVar8;
    *(float *)(param_1 + 0x999c) = fVar11;
    FUN_0091ada4(param_1 + 0x9958);
  }
  lVar3 = param_1 + 0x8398;
  fVar13 = fVar12 * 0.5;
  FUN_00f01c20(lVar3);
  fVar9 = *(float *)(param_1 + 0x83d8);
  fVar8 = fVar11 * 0.5 + 30.0;
  pfVar4 = (float *)(param_1 + 0x83dc);
  if ((fVar9 != fVar13) || (fVar9 = *pfVar4, fVar9 != fVar8)) {
    *(float *)(param_1 + 0x83d8) = fVar13;
    *pfVar4 = fVar8;
    FUN_0091ada4(lVar3);
  }
  lVar1 = param_1 + 0x878;
  fVar8 = (float)FUN_00f0d548(param_1 + 0x618);
  fVar11 = (float)FUN_00f01c20(lVar1);
  fVar11 = fVar8 + fVar11 * 0.5 + 16.0;
  FUN_00f01c20(param_1 + 0x618);
  fVar8 = fVar9 * 0.5;
  if ((*(float *)(param_1 + 0x8b8) != fVar11) ||
     (fVar9 = *(float *)(param_1 + 0x8bc), fVar9 != fVar8)) {
    *(float *)(param_1 + 0x8b8) = fVar11;
    *(float *)(param_1 + 0x8bc) = fVar8;
    FUN_0091ada4(lVar1);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x878) + 0x28))(lVar1,&local_a0);
  lVar1 = param_1 + 0x10d0;
  fVar8 = (float)FUN_00f0d548(param_1 + 0xe70);
  fVar11 = (float)FUN_00f01c20(lVar1);
  fVar8 = fVar8 + fVar11 * 0.5 + 16.0;
  FUN_00f01c20(param_1 + 0xe70);
  if ((*(float *)(param_1 + 0x1110) != fVar8) || (*(float *)(param_1 + 0x1114) != fVar9 * 0.5)) {
    *(float *)(param_1 + 0x1110) = fVar8;
    *(float *)(param_1 + 0x1114) = fVar9 * 0.5;
    FUN_0091ada4(lVar1);
  }
  local_a0 = 0x3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x10d0) + 0x28))(lVar1,&local_a0);
  fVar8 = (float)FUN_00f01c20(param_1 + 0x16c8);
  if (*(float *)(param_1 + 0x1708) != fVar8 * 0.5) {
    *(float *)(param_1 + 0x1708) = fVar8 * 0.5;
    FUN_0091ada4(param_1 + 0x16c8);
  }
  fVar8 = (float)FUN_00f01c20(param_1 + 0x2da8);
  if (*(float *)(param_1 + 0x2de8) != fVar8 * 0.5) {
    *(float *)(param_1 + 0x2de8) = fVar8 * 0.5;
    FUN_0091ada4(param_1 + 0x2da8);
  }
  fVar8 = (float)FUN_00f01c20(param_1 + 0x4488);
  fVar9 = *(float *)(param_1 + 0x44c8);
  if (fVar9 != fVar8 * 0.5) {
    *(float *)(param_1 + 0x44c8) = fVar8 * 0.5;
    FUN_0091ada4(param_1 + 0x4488);
  }
  FUN_00f0bc04(&local_a0);
  FUN_00f0c168(param_1 + 0x550,&local_a0);
  (**(code **)(*(long *)(param_1 + 0x550) + 0x90))(param_1 + 0x550);
  lVar1 = param_1 + 0x5b68;
  FUN_00f0bc04(&local_a0);
  FUN_00f0c168(lVar1,&local_a0);
  (**(code **)(*(long *)(param_1 + 0x5b68) + 0x90))(lVar1);
  fVar8 = 0.5;
  FUN_00f0c030(0x3f000000,lVar1,0);
  FUN_00f13e54(lVar1);
  FUN_00f13f08(0x43480000,lVar1);
  lVar1 = param_1 + 0x6f80;
  FUN_00f0bc04(&local_a0);
  FUN_00f0c168(lVar1,&local_a0);
  (**(code **)(*(long *)(param_1 + 0x6f80) + 0x90))(lVar1);
  FUN_00f0c030(0x3f000000,lVar1,0);
  FUN_00f13e54(lVar1);
  FUN_00f13f08(0x43480000,lVar1);
  lVar1 = param_1 + 0x498;
  local_a0 = (ulong)(uint)fVar12;
  FUN_00f13f18(lVar1,&local_a0);
  fVar14 = *pfVar4;
  FUN_00f01c20(lVar3);
  fVar11 = *(float *)(param_1 + 0x4dc);
  if (fVar11 != fVar14 + fVar9) {
    *(float *)(param_1 + 0x4dc) = fVar14 + fVar9;
    FUN_0091ada4(lVar1);
    fVar11 = *(float *)(param_1 + 0x4dc);
  }
  FUN_00f01c54(lVar1,1,0,1,1);
  fVar11 = fVar11 + fVar9;
  FUN_00f01c20(param_1 + 0x9a48);
  fVar9 = fVar11 + fVar9 * 0.5 + 20.0;
  if ((*(float *)(param_1 + 0x9a88) != fVar13) || (*(float *)(param_1 + 0x9a8c) != fVar9)) {
    *(float *)(param_1 + 0x9a88) = fVar13;
    *(float *)(param_1 + 0x9a8c) = fVar9;
    FUN_0091ada4(param_1 + 0x9a48);
  }
  plVar5 = (long *)(param_1 + 0xb008);
  fVar9 = 60.0;
  FUN_00f0bc10(fVar13,0x3f000000,0x42700000,&local_a0);
  FUN_00f0c168(plVar5,&local_a0);
  (**(code **)(*plVar5 + 0x90))(plVar5);
  fVar11 = *(float *)(param_1 + 0x4dc);
  FUN_00f01c54(lVar1,1,0,1,1);
  lVar1 = param_1 + 0xb0d0;
  fVar11 = fVar11 + fVar8;
  FUN_00f01c20(lVar1);
  fVar11 = fVar11 + fVar8 * 0.5;
  if (*(float *)(param_1 + 0xb04c) != fVar11 + 40.0) {
    *(float *)(param_1 + 0xb04c) = fVar11 + 40.0;
    FUN_0091ada4(plVar5);
  }
  uVar10 = FUN_00f13e54(plVar5);
  FUN_00f13e54(plVar5);
  fVar8 = fVar11;
  FUN_00f01c20(lVar1);
  FUN_00f13f08(uVar10,fVar11 + fVar8 * -0.5,plVar5);
  FUN_00f13f08(fVar12,0x42700000,param_1 + 0x140);
  FUN_00f13f08(fVar12,0x42700000,param_1 + 800);
  lVar2 = param_1 + 0x230;
  if (*(char *)(param_1 + 0xdc50) == '\0') {
    FUN_00f01c20(lVar3);
    fVar9 = fVar9 + 60.0;
  }
  else {
    FUN_00f01fcc(param_1 + 0x410,1,0,1,1);
    fVar8 = fVar9 + *pfVar4;
    FUN_00f01c20(lVar3);
    fVar8 = fVar8 + fVar9;
    if ((*(byte *)(param_1 + 0xb08c) >> 2 & 1) == 0) {
      fVar9 = 0.0;
    }
    else {
      FUN_00f01c20(lVar1);
      fVar9 = fVar9 * 0.5;
    }
    fVar9 = fVar8 + fVar9 + 30.0;
  }
  FUN_00f13f08(fVar12,fVar9,lVar2);
  fVar8 = local_94;
  FUN_00f0e700(lVar2);
  FUN_00f13f08(local_8c - local_94,param_1);
  fVar9 = *(float *)(param_1 + 0x274);
  FUN_00f0e700(lVar2);
  fVar9 = fVar9 + fVar8;
  if (*(float *)(param_1 + 0x364) != fVar9) {
    *(float *)(param_1 + 0x364) = fVar9;
    FUN_0091ada4(param_1 + 800);
  }
  if (*(long *)(lVar6 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

