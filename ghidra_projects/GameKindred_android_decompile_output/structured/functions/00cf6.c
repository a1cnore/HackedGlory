// functions/00cf6 — 39 functions
#include "libGameKindred.h"




void FUN_00cf6094(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_thunk_FUN_00cfc44c_0280fae8;
  FUN_00d4d9e8(param_1 + 2);
  *(undefined1 *)(param_1 + 0xe) = 0;
  return;
}




void FUN_00cf60d0(long param_1,long param_2,ulong param_3)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 8);
  memcpy((void *)(param_1 + 0x24),(void *)(param_2 + 0x14),0x47);
  if ((param_3 & 1) == 0) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_00ceab48();
    bVar1 = bVar1 & 1;
  }
  *(byte *)(param_1 + 0x70) = bVar1;
  return;
}




void FUN_00cf6128(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined **local_6e8;
  undefined8 uStack_6e0;
  undefined1 local_6d8;
  undefined1 auStack_6d4 [76];
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x70) != '\0') {
    local_6d8 = *(undefined1 *)(param_1 + 0x20);
    uStack_6e0 = *(undefined8 *)(param_1 + 0x18);
    local_6e8 = &PTR_FUN_0281d898;
    memcpy(auStack_6d4,(void *)(param_1 + 0x24),0x47);
    uVar3 = FUN_00d5048c(param_2);
    FUN_00d4db40(&local_6e8,uVar3);
    uVar2 = FUN_00d9e840(&local_6e8,auStack_688,200,0);
    if (uVar2 != 0) {
      uVar4 = (ulong)uVar2;
      puVar5 = auStack_688;
      do {
        FUN_00d518f4(param_2,*puVar5);
        uVar4 = uVar4 - 1;
        puVar5 = puVar5 + 1;
      } while (uVar4 != 0);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf6200(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280fb48;
  param_1[2] = 0;
  return;
}




void FUN_00cf6234(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf623c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = -1;
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_2,&local_3c);
    if ((local_3c != -1) && (lVar2 = FUN_00d9e390(), lVar2 != 0)) {
      FUN_00d518f4(param_2,lVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf62cc(undefined8 *param_1)

{
  FUN_00cfc438();
  *(undefined2 *)(param_1 + 2) = 0x101;
  *param_1 = &PTR_FUN_0280fba8;
  *(undefined1 *)((long)param_1 + 0x12) = 1;
  return;
}




void FUN_00cf630c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x10) = param_2 & 1;
  return;
}




void FUN_00cf6318(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x11) = param_2 & 1;
  return;
}




void FUN_00cf6324(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x12) = param_2 & 1;
  return;
}




void FUN_00cf6330(long param_1,undefined8 param_2)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined1 auStack_6e8 [96];
  long local_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar4 = FUN_00d5048c(param_2);
  FUN_00d4d9e8(auStack_6e8);
  bVar2 = false;
  if ((*(byte *)(lVar4 + 0x2f4) & 1) != 0) {
    bVar2 = *(char *)(param_1 + 0x12) != '\0';
  }
  FUN_00d4db40(auStack_6e8,lVar4);
  FUN_00d4daf4(auStack_6e8,*(undefined1 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x11),bVar2,0);
  FUN_00d4dabc(auStack_6e8,1);
  FUN_00d4d364(auStack_6e8,1);
  FUN_00d4d354(auStack_6e8,1);
  FUN_00d4dc24(auStack_6e8,0);
  FUN_00d4dc44(auStack_6e8,0);
  uVar3 = FUN_00d9e840(auStack_6e8,local_688,200,0);
  if (uVar3 != 0) {
    uVar5 = (ulong)uVar3;
    plVar6 = local_688;
    do {
      if (*plVar6 != 0) {
        FUN_00d518f4(param_2);
      }
      uVar5 = uVar5 - 1;
      plVar6 = plVar6 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf6450(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280fc08;
  *(undefined4 *)(param_1 + 2) = 0x3f800000;
  return;
}




void FUN_00cf6488(undefined4 param_1,long param_2,byte param_3,byte param_4)

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  *(byte *)(param_2 + 0x14) = param_3 & 1;
  *(byte *)(param_2 + 0x15) = param_4 & 1;
  return;
}




void FUN_00cf64a0(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [96];
  long alStack_c8 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_00d51778(param_2);
  if (lVar3 != 0) {
    FUN_00d4d9e8(auStack_128);
    FUN_00d55794(lVar3,auStack_138,0);
    FUN_00d4db40(auStack_128,lVar3);
    FUN_00d4daf4(auStack_128,*(undefined1 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x15),
                 *(uint *)(lVar3 + 0x2f4) & 1,0);
    FUN_00d4dabc(auStack_128,1);
    FUN_00d4db48(*(undefined4 *)(param_1 + 0x10),auStack_128,auStack_138);
    uVar2 = FUN_00d9e840(auStack_128,alStack_c8,0x10,0);
    if (uVar2 != 0) {
      uVar5 = (ulong)uVar2;
      fVar8 = 2.0;
      lVar4 = 0;
      plVar6 = alStack_c8;
      do {
        lVar7 = *(long *)(*plVar6 + 0x40);
        fVar9 = (*(float *)(lVar7 + 0x1a0) + 1.0) *
                (*(float *)(lVar7 + 0x38) +
                *(float *)(lVar7 + 0xec) * (*(float *)(lVar7 + 0x254) + 1.0));
        if (DAT_0314f670 <= fVar9) {
          fVar9 = DAT_0314f670;
        }
        fVar10 = DAT_0314f5b0;
        if (DAT_0314f5b0 <= fVar9) {
          fVar10 = fVar9;
        }
        fVar10 = *(float *)(lVar7 + 0x308) / fVar10;
        lVar7 = *plVar6;
        if (fVar8 <= fVar10) {
          lVar7 = lVar4;
          fVar10 = fVar8;
        }
        fVar8 = fVar10;
        uVar5 = uVar5 - 1;
        lVar4 = lVar7;
        plVar6 = plVar6 + 1;
      } while (uVar5 != 0);
      if (lVar7 != 0) {
        lVar3 = lVar7;
      }
    }
    FUN_00d518f4(param_2,lVar3);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf6610(undefined8 *param_1)

{
  FUN_00cfc438();
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0280fc68;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}




void FUN_00cf6648(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf6650(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}




void FUN_00cf665c(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [40];
  undefined1 auStack_6e8 [96];
  long local_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d5048c(param_2);
  FUN_00d55794(uVar3,auStack_720,0);
  uVar4 = (**(code **)(param_1 + 0x10))(uVar3);
  FUN_00d4d9e8(auStack_6e8);
  FUN_00d4dabc(auStack_6e8,0x40000);
  FUN_00d4daf4(auStack_6e8,0,1,0,uVar3);
  FUN_00d4db48(uVar4,auStack_6e8,auStack_720);
  FUN_00d4eb08(auStack_710,auStack_720,1,*(undefined1 *)(param_1 + 0x18));
  iVar2 = FUN_00d9e840(auStack_6e8,local_688,200,auStack_710);
  if ((0 < iVar2) && (local_688[0] != 0)) {
    FUN_00d518f4(param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf6760(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280fcc8;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(byte *)((long)param_1 + 0x1c) = *(byte *)((long)param_1 + 0x1c) & 0xfc | 2;
  return;
}




void FUN_00cf67a8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) & 0xfd;
  return;
}




void FUN_00cf67bc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x18) = param_1;
  *(byte *)(param_2 + 0x1c) = *(byte *)(param_2 + 0x1c) & 0xfd;
  return;
}




void FUN_00cf67d0(long param_1)

{
  *(byte *)(param_1 + 0x1c) = *(byte *)(param_1 + 0x1c) | 1;
  return;
}




void FUN_00cf67e0(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auStack_720 [16];
  undefined1 auStack_710 [40];
  undefined1 auStack_6e8 [96];
  long local_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d5048c(param_2);
  FUN_00d55794(uVar3,auStack_720,0);
  if ((*(byte *)(param_1 + 0x1c) >> 1 & 1) == 0) {
    if (*(code **)(param_1 + 0x10) == (code *)0x0) {
      uVar4 = (ulong)*(uint *)(param_1 + 0x18);
    }
    else {
      uVar4 = (**(code **)(param_1 + 0x10))(uVar3);
    }
  }
  else {
    uVar4 = FUN_00d50cc8(param_2);
  }
  FUN_00d4d9e8(auStack_6e8);
  FUN_00d4dabc(auStack_6e8,0x40000);
  FUN_00d4daf4(auStack_6e8,1,0,0,uVar3);
  FUN_00d4db48(uVar4,auStack_6e8,auStack_720);
  FUN_00d4eb08(auStack_710,auStack_720,1,*(byte *)(param_1 + 0x1c) & 1);
  iVar2 = FUN_00d9e840(auStack_6e8,local_688,200,auStack_710);
  if ((0 < iVar2) && (local_688[0] != 0)) {
    FUN_00d518f4(param_2);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf6908(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d5048c(param_2);
  FUN_00d518f4(param_2,uVar1);
  return;
}




void FUN_00cf6934(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  FUN_00d5048c(param_2);
  FUN_00d5cf60();
  lVar1 = FUN_00d9e390();
  if (lVar1 != 0) {
    FUN_00d518f4(param_2,lVar1);
    return;
  }
  return;
}




void FUN_00cf6978(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280fd28;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00cf69ac(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf69b4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00cf69bc(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint local_2ac;
  undefined1 auStack_2a8 [96];
  undefined8 auStack_248 [65];
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d5048c(param_2);
  FUN_00d4d9e8(auStack_2a8);
  FUN_00d4daf4(auStack_2a8,1,0,0,uVar3);
  FUN_00d4ddc4(auStack_2a8);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00d4dca4(auStack_2a8,*(long *)(param_1 + 0x10),0);
  }
  local_2ac = 0x40;
  if (*(code **)(param_1 + 0x18) == (code *)0x0) {
    local_2ac = 0x20;
  }
  else {
    (**(code **)(param_1 + 0x18))(param_2,&local_2ac);
    if (local_2ac == 0) goto LAB_00cf6aa0;
    if (0x1f < local_2ac) {
      local_2ac = 0x20;
    }
  }
  uVar2 = FUN_00d9e840(auStack_2a8,auStack_248,local_2ac,0);
  if (uVar2 != 0) {
    uVar5 = (ulong)uVar2;
    puVar6 = auStack_248;
    do {
      FUN_00d518f4(param_2,*puVar6);
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
LAB_00cf6aa0:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf6acc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 auStack_6b0 [40];
  undefined8 auStack_688 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00d4d634(auStack_6b0);
  uVar3 = FUN_00d5048c(param_2);
  FUN_00d4d66c(auStack_6b0,uVar3);
  FUN_00d4d680(auStack_6b0);
  uVar2 = FUN_00d9e840(auStack_6b0,auStack_688,200,0);
  if (uVar2 != 0) {
    uVar4 = (ulong)uVar2;
    puVar5 = auStack_688;
    do {
      FUN_00d518f4(param_2,*puVar5);
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00cf69bc(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  uint uStack_2ac;
  undefined1 auStack_2a8 [96];
  undefined8 auStack_248 [65];
  
  lVar1 = tpidr_el0;
  lVar4 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_00d5048c(param_2);
  FUN_00d4d9e8(auStack_2a8);
  FUN_00d4daf4(auStack_2a8,1,0,0,uVar3);
  FUN_00d4ddc4(auStack_2a8);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00d4dca4(auStack_2a8,*(long *)(param_1 + 0x10),0);
  }
  uStack_2ac = 0x40;
  if (*(code **)(param_1 + 0x18) == (code *)0x0) {
    uStack_2ac = 0x20;
  }
  else {
    (**(code **)(param_1 + 0x18))(param_2,&uStack_2ac);
    if (uStack_2ac == 0) goto LAB_00cf6aa0;
    if (0x1f < uStack_2ac) {
      uStack_2ac = 0x20;
    }
  }
  uVar2 = FUN_00d9e840(auStack_2a8,auStack_248,uStack_2ac,0);
  if (uVar2 != 0) {
    uVar5 = (ulong)uVar2;
    puVar6 = auStack_248;
    do {
      FUN_00d518f4(param_2,*puVar6);
      uVar5 = uVar5 - 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 != 0);
  }
LAB_00cf6aa0:
  if (*(long *)(lVar1 + 0x28) != lVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cf6b7c(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280fd88;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}




void FUN_00cf6bb0(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00cf6bb8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00cf6bc0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined1 auStack_f8 [8];
  undefined1 local_f0 [4];
  undefined4 local_ec;
  undefined4 local_e8;
  float local_e4;
  undefined1 auStack_e0 [112];
  long local_70;
  
  lVar3 = tpidr_el0;
  local_70 = *(long *)(lVar3 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    lVar9 = FUN_00d5048c(param_2);
    iVar6 = FUN_00d51964(param_2);
    if (iVar6 != 0) {
      uVar11 = 0;
      do {
        lVar10 = FUN_00d51954(param_2,uVar11);
        if (lVar10 != 0) {
          local_e8 = 0xffffffff;
          local_e4 = -1.0;
          local_ec = 0xffffffff;
          local_f0[0] = 0;
          (**(code **)(param_1 + 0x10))(param_2,lVar10,&local_e4,&local_ec,&local_e8,local_f0);
          local_e4 = (float)(int)local_e4;
          if (*(int *)(lVar10 + 0x260) == *(int *)(lVar9 + 0x260)) {
            FUN_00d5810c(lVar9,auStack_f8,&DAT_03218f20);
          }
          else {
            FUN_00d9e1e0(lVar9,lVar10,auStack_f8);
          }
          uVar5 = local_e8;
          uVar4 = local_ec;
          uVar1 = *(undefined4 *)(lVar9 + 0x260);
          uVar2 = *(undefined4 *)(lVar10 + 0x260);
          lVar10 = FUN_00d5029c(param_2);
          FUN_00daa148(local_e4,auStack_e0,uVar1,uVar2,uVar5,uVar4,auStack_f8,
                       *(undefined8 *)(lVar10 + 8),local_f0[0],1);
          if (*(code **)(param_1 + 0x18) != (code *)0x0) {
            (**(code **)(param_1 + 0x18))(param_2,auStack_e0);
          }
          FUN_00910c08(auStack_e0);
        }
        uVar11 = uVar11 + 1;
        uVar7 = FUN_00d51964(param_2);
      } while (uVar11 < uVar7);
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf6d54(long param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 0x10) = *param_2;
  return;
}




void FUN_00cf6d68(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  float fVar8;
  undefined1 auStack_98 [64];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    fVar8 = (float)FUN_00a82290(param_1 + 0x10,param_2,0);
    iVar2 = FUN_00d51964(param_2);
    if (iVar2 != 0) {
      uVar7 = 0;
      do {
        lVar5 = FUN_00d51954(param_2,uVar7);
        if (lVar5 != 0) {
          lVar6 = FUN_00d5048c(param_2);
          FUN_00daa4a4((float)(uint)(int)fVar8,auStack_98,*(undefined4 *)(lVar6 + 0x260),
                       *(undefined4 *)(lVar5 + 0x260),0xffffffff,0xffffffff,0xee,0xffffffff);
          FUN_00910c0c(auStack_98);
        }
        uVar7 = uVar7 + 1;
        uVar3 = FUN_00d51964(param_2);
      } while (uVar7 < uVar3);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cf6e70(undefined8 *param_1)

{
  FUN_00cfc438();
  *param_1 = &PTR_FUN_0280fde8;
  param_1[2] = 0;
  return;
}




void FUN_00cf6ea4(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined1 auStack_160 [12];
  undefined4 local_154;
  undefined4 local_150;
  float local_14c;
  undefined1 auStack_148 [88];
  undefined1 auStack_f0 [84];
  float local_9c;
  long local_80;
  
  lVar2 = tpidr_el0;
  local_80 = *(long *)(lVar2 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d5048c(param_2);
    iVar4 = FUN_00d51964(param_2);
    if (iVar4 != 0) {
      uVar11 = 0;
      do {
        lVar9 = FUN_00d51954(param_2,uVar11);
        if (lVar9 != 0) {
          local_150 = 0xffffffff;
          local_14c = -1.0;
          local_154 = 0xffffffff;
          (**(code **)(param_1 + 0x10))(param_2,&local_14c,&local_150,&local_154);
          local_14c = (float)(uint)(int)local_14c;
          FUN_00d9e1e0(lVar8,lVar9,auStack_160);
          uVar3 = local_150;
          uVar13 = local_154;
          uVar1 = *(undefined4 *)(lVar8 + 0x260);
          uVar5 = *(undefined4 *)(lVar9 + 0x260);
          lVar10 = FUN_00d5029c(param_2);
          FUN_00daa148(local_14c,auStack_f0,uVar1,uVar5,uVar13,uVar3,auStack_160,
                       *(undefined8 *)(lVar10 + 8),0,1);
          FUN_00910c08(auStack_f0);
          if (*(float *)(*(long *)(lVar9 + 0x40) + 0x308) <= local_9c) {
            uVar1 = *(undefined4 *)(lVar8 + 0x260);
            uVar12 = *(undefined8 *)(param_1 + 0x18);
            uVar13 = *(undefined4 *)(param_1 + 0x20);
            uVar5 = FUN_00ceb350();
            FUN_00cfe864(uVar13,0,0,auStack_148,uVar1,uVar1,uVar12,uVar5,1,0,0);
            FUN_00ce20fc(auStack_148);
          }
        }
        uVar11 = uVar11 + 1;
        uVar6 = FUN_00d51964(param_2);
      } while (uVar11 < uVar6);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

