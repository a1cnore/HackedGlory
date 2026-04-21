// functions/00b6d — 13 functions
#include "libGameKindred.h"




void FUN_00b6d98c(long param_1)

{
  FUN_00b32020(param_1 + 0x1d0);
  FUN_00b6d9e8(param_1,param_1 + 0x1d0,1,0);
  return;
}




void FUN_00b6d9c4(long param_1)

{
  FUN_00ac9484(param_1 + 0x23560,0);
  return;
}




void FUN_00b6d9e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b6f0cc(param_1,param_4);
  return;
}




void FUN_00b6d9e8(long param_1,long param_2,uint param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  float fVar7;
  float local_70;
  undefined1 auStack_6c [4];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00f00298(auStack_6c,&local_70);
  if ((param_4 & 1) == 0) {
    if (((param_3 ^ *(byte *)(param_2 + 0x84) >> 2) & 1) != 0) {
      lVar1 = param_2;
      if ((param_3 & 1) == 0) {
        lVar1 = param_1 + 0x7e30;
      }
      uVar4 = FUN_00efef08(0,0,0x3f4ccccd,FUN_00a36794);
      FUN_00f01980(lVar1);
      *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) | 4;
      FUN_00f022a0(lVar1,uVar4);
      lVar1 = param_1 + 0x7e30;
      if ((param_3 & 1) == 0) {
        lVar1 = param_2;
        local_70 = -local_70;
      }
      uVar4 = FUN_00efef08(0,local_70,0x3f4ccccd,FUN_00a36794);
      lVar3 = DAT_03210d00;
      uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar5 == 0xffff) {
        puVar6 = (ushort *)0x0;
      }
      else {
        puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
        if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
          uVar5 = 0xffff;
        }
        else {
          uVar5 = *puVar6;
        }
        *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_00efc8e8(puVar6);
        *(undefined ***)puVar6 = &PTR_FUN_02825148;
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_00f01980(lVar1);
      FUN_00f02308(lVar1,uVar4,puVar6,0);
    }
  }
  else {
    *(uint *)(param_2 + 0x84) =
         *(uint *)(param_2 + 0x84) & 0xfffffff8 | *(uint *)(param_2 + 0x84) & 3 | (param_3 & 1) << 2
    ;
    *(uint *)(param_1 + 0x7eb4) =
         *(uint *)(param_1 + 0x7eb4) & 0xfffffff8 |
         *(uint *)(param_1 + 0x7eb4) & 3 | (~param_3 & 1) << 2;
    fVar7 = 0.0;
    if ((param_3 & 1) == 0) {
      fVar7 = -local_70;
    }
    if (*(float *)(param_2 + 0x44) != fVar7) {
      *(float *)(param_2 + 0x44) = fVar7;
      FUN_0091ada4(param_2);
    }
    if ((param_3 & 1) == 0) {
      local_70 = 0.0;
    }
    if (*(float *)(param_1 + 0x7e74) != local_70) {
      *(float *)(param_1 + 0x7e74) = local_70;
      FUN_0091ada4(param_1 + 0x7e30);
    }
  }
  if ((param_3 & 1) == 0) {
    FUN_00b68ab0(param_1 + 0x8ae8);
    FUN_00b6e858(param_1,0);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b6dc54(long param_1)

{
  FUN_00b6d9e8(param_1,param_1 + 0x1d0,0,0);
  return;
}




void FUN_00b6dc64(void)

{
  FUN_00b6df4c();
  return;
}




void FUN_00b6dc90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e5170;
  param_1[0x34] = &PTR_FUN_027e5320;
  param_1[0x37] = &PTR_FUN_027e56b8;
  FUN_00b1fa78(param_1 + 0x1003);
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  if ((void *)param_1[0x4bfe] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4bfe]);
    param_1[0x4bfe] = 0;
    param_1[0x4bfd] = 0;
  }
  if ((void *)param_1[0x4bfc] != (void *)0x0) {
    operator_delete__((void *)param_1[0x4bfc]);
    param_1[0x4bfc] = 0;
    param_1[0x4bfb] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x4bd3);
  FUN_00ac848c(param_1 + 0x46ac);
  FUN_00ac50d4(param_1 + 0x4512);
  FUN_00f0d3a4(param_1 + 0x44ec);
  FUN_00aad654(param_1 + 0x4372);
  param_1[0x4347] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x435e);
  FUN_00f13d08(param_1 + 0x4347);
  FUN_00b27cec(param_1 + 0x432a);
  FUN_00f0d3a4(param_1 + 0x4304);
  FUN_00f0d3a4(param_1 + 0x42de);
  FUN_00aad654(param_1 + 0x4164);
  param_1[0x4139] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x4150);
  FUN_00f13d08(param_1 + 0x4139);
  FUN_00b6bae4(param_1 + 0x37ac);
  FUN_00b6bae4(param_1 + 0x2e1f);
  FUN_00b674f8(param_1 + 0x115d);
  FUN_00b1f8e8(param_1 + 0x1003);
  param_1[0xfd7] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0xfee);
  FUN_00f13d08(param_1 + 0xfd7);
  FUN_00f01868(param_1 + 0xfc6);
  FUN_00b35268(param_1 + 0x3a);
  FUN_00e835e0(param_1 + 0x37);
  FUN_00948d58(param_1 + 0x34);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b6dec8(long param_1)

{
  FUN_00b6dc90(param_1 + -0x1a0);
  return;
}




void FUN_00b6ded0(long param_1)

{
  FUN_00b6dc90(param_1 + -0x1b8);
  return;
}




void FUN_00b6ded8(void *param_1)

{
  FUN_00b6dc90();
  operator_delete(param_1);
  return;
}




void FUN_00b6defc(long param_1)

{
  FUN_00b6dc90((void *)(param_1 + -0x1a0));
  operator_delete((void *)(param_1 + -0x1a0));
  return;
}




void FUN_00b6df24(long param_1)

{
  FUN_00b6dc90((void *)(param_1 + -0x1b8));
  operator_delete((void *)(param_1 + -0x1b8));
  return;
}




void FUN_00b6df4c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  uint *puVar15;
  ulong uVar16;
  long lVar17;
  undefined4 local_7c;
  ulong local_78;
  long local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_78 = 0;
  local_70 = 0;
  FUN_0096bf08(&local_78);
  if ((int)local_78 != 0) {
    uVar13 = 0;
    do {
      lVar5 = local_70;
      lVar7 = local_70 + uVar13 * 0xe8;
      pbVar8 = (byte *)(lVar7 + 0xc0);
      bVar3 = *pbVar8;
      uVar16 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar16 = *(ulong *)(lVar7 + 200);
      }
      if ((uVar16 == 0x12) &&
         (iVar6 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,"renamePlayerHandle",0x12), iVar6 == 0))
      {
        puVar15 = (uint *)(lVar5 + uVar13 * 0xe8 + 8);
        uVar10 = *puVar15;
        if (uVar10 != 0) {
          uVar16 = 0;
          do {
            lVar7 = *(long *)(lVar5 + uVar13 * 0xe8 + 0x10);
            puVar14 = (uint *)(lVar7 + uVar16 * 0xa0 + 8);
            uVar2 = *puVar14;
            uVar9 = (ulong)uVar2;
            if (uVar2 != 0) {
              lVar11 = 0;
              uVar12 = 0;
              do {
                lVar17 = *(long *)(lVar7 + uVar16 * 0xa0 + 0x10);
                pbVar8 = (byte *)(lVar17 + lVar11);
                uVar1 = (ulong)(*pbVar8 >> 1);
                if ((*pbVar8 & 1) != 0) {
                  uVar1 = *(ulong *)(pbVar8 + 8);
                }
                if (uVar1 == 4) {
                  iVar6 = FUN_0090d610(pbVar8,0,0xffffffffffffffff,"gold",4);
                  if (iVar6 == 0) {
                    local_7c = *(undefined4 *)(lVar17 + lVar11 + 0x18);
                    FUN_00b31dec(param_1 + 0x1d0,lVar7 + (uVar16 & 0xffffffff) * 0xa0 + 0x60,
                                 &local_7c);
                    goto LAB_00b6e0ec;
                  }
                  uVar9 = (ulong)*puVar14;
                }
                uVar12 = uVar12 + 1;
                lVar11 = lVar11 + 0x20;
              } while (uVar12 < uVar9);
              uVar10 = *puVar15;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 < uVar10);
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (local_78 & 0xffffffff));
  }
LAB_00b6e0ec:
  FUN_0097905c(&local_78,1);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

