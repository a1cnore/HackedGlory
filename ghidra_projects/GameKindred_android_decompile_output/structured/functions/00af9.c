// functions/00af9 — 20 functions
#include "libGameKindred.h"




void FUN_00af907c(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return;
}




void FUN_00af9100(void *param_1)

{
  FUN_00af8c0c();
  operator_delete(param_1);
  return;
}




void FUN_00af9124(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  if (*(long *)(param_1 + 0x1a0) == 0) {
    *(long *)(param_1 + 0x1a0) = param_2;
    *(long *)(param_1 + 600) = param_2 + 0x28;
    FUN_00af91f8(param_1,*(undefined8 *)(param_2 + 0x20));
    iVar1 = strcmp((char *)**(undefined8 **)(param_1 + 0x1a0),"");
    if (iVar1 != 0) {
      uVar2 = FUN_019955e4(**(undefined8 **)(param_1 + 0x1a0));
      *(undefined8 *)(param_1 + 0x388) = uVar2;
      *(undefined8 *)(param_1 + 0x318) = uVar2;
      puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x1a0) + 8);
      puVar3 = (undefined8 *)*puVar4;
      while (puVar3 != (undefined8 *)0x0) {
        puVar4 = puVar4 + 1;
        FUN_00af9348(param_1,*puVar3,puVar3[1]);
        puVar3 = (undefined8 *)*puVar4;
      }
    }
    lVar5 = *(long *)(param_1 + 0x1a0);
    puVar4 = *(undefined8 **)(lVar5 + 0x10);
    puVar3 = (undefined8 *)*puVar4;
    if (puVar3 != (undefined8 *)0x0) {
      do {
        puVar4 = puVar4 + 1;
        FUN_00af93bc(param_1,*puVar3,puVar3[1]);
        puVar3 = (undefined8 *)*puVar4;
      } while (puVar3 != (undefined8 *)0x0);
      lVar5 = *(long *)(param_1 + 0x1a0);
    }
    FUN_00af945c(param_1,*(undefined8 *)(lVar5 + 0x18));
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  }
  return;
}




void FUN_00af91f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_01995ebc(auStack_60);
  local_58 = 0;
  uStack_50 = 0;
  puVar4 = (undefined8 *)*param_2;
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = 0;
    do {
      switch(*(undefined4 *)(puVar4 + 1)) {
      case 0:
        uVar3 = *puVar4;
        uVar2 = 1;
        break;
      case 1:
        uVar3 = *puVar4;
        uVar2 = 2;
        break;
      case 2:
        uVar3 = *puVar4;
        uVar2 = 3;
        break;
      case 3:
        uVar3 = *puVar4;
        uVar2 = 4;
        break;
      case 4:
        FUN_01996068(auStack_60,uVar5 & 0xffffffff,0,*puVar4);
      default:
        goto switchD_00af925c_default;
      }
      FUN_01996270(auStack_60,uVar5 & 0xffffffff,&local_58,uVar2,1,uVar3);
switchD_00af925c_default:
      puVar4 = (undefined8 *)param_2[uVar5 + 1];
      uVar5 = uVar5 + 1;
    } while (puVar4 != (undefined8 *)0x0);
  }
  uVar2 = FUN_019962e8(auStack_60);
  *(undefined8 *)(param_1 + 0x308) = uVar2;
  FUN_01995ef4(auStack_60);
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00af931c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019955e4(param_2);
  *(undefined8 *)(param_1 + 0x388) = uVar1;
  *(undefined8 *)(param_1 + 0x318) = uVar1;
  return;
}




void FUN_00af9348(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  uVar2 = FUN_0198ff3c();
  local_48 = FUN_01990008(uVar2,param_3);
  FUN_00afa20c(param_1 + 0x290,&local_40,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af93bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  void *pvVar2;
  undefined8 uVar3;
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_2;
  pvVar2 = operator_new(0x90);
  FUN_00af84f8(pvVar2,param_3,*(undefined8 *)(param_1 + 0x308));
  local_48 = pvVar2;
  if ((*(long *)(param_1 + 0x388) == 0) || (*(int *)(param_1 + 0x2a0) == 0)) {
    uVar3 = FUN_0198ab78();
  }
  else {
    uVar3 = FUN_0198ab84();
  }
  *(undefined8 *)((long)pvVar2 + 0x10) = uVar3;
  FUN_00afa1a4(param_1 + 0x260,&local_40,&local_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af945c(long param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  ulong *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong local_160 [2];
  void *local_150;
  undefined **local_148;
  undefined4 local_140;
  undefined8 local_138;
  byte local_130 [8];
  undefined8 uStack_128;
  void *local_120;
  byte local_118 [8];
  undefined8 local_110;
  void *pvStack_108;
  undefined4 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  puVar16 = (ulong *)*param_2;
  if (puVar16 != (ulong *)0x0) {
    do {
      param_2 = param_2 + 1;
      local_138 = FUN_00f34280();
      local_140 = 0x7000000;
      local_148 = &PTR_FUN_027dabf8;
      pvStack_108 = (void *)0x0;
      local_110 = 0;
      uStack_128 = 0;
      local_130[0] = 0;
      local_118[0] = 0;
      local_120 = (void *)0x0;
      local_b0 = DAT_03218f38;
      local_b8 = DAT_03218f30;
      local_ac = 0xffff;
      local_f8 = 0x3f800000;
      local_e8 = 0x3f80000000000000;
      local_d8 = 0;
      local_c8 = 0;
      local_c0 = 0x3f80000000000000;
      local_f0 = 0;
      local_e0 = 0;
      local_d0 = 0x3f800000;
      local_100 = (undefined4 *)0x0;
      FUN_008fa54c(local_160,*puVar16);
      FUN_008fce60(local_130,local_160);
      if ((local_160[0] & 1) != 0) {
        operator_delete(local_150);
      }
      FUN_008fa54c(local_160,puVar16[1]);
      FUN_008fce60(local_118,local_160);
      if ((local_160[0] & 1) != 0) {
        operator_delete(local_150);
      }
      uVar14 = DAT_0321901c;
      fVar13 = DAT_03219018;
      fVar12 = DAT_03219010._4_4_;
      fVar11 = (float)DAT_03219010;
      uVar10 = DAT_03218ffc;
      uVar9 = DAT_03218ff8;
      uVar8 = DAT_03218ff0._4_4_;
      uVar7 = (undefined4)DAT_03218ff0;
      uVar6 = DAT_03218fec;
      uVar5 = DAT_03218fe8;
      uVar4 = DAT_03218fe0._4_4_;
      uVar3 = (undefined4)DAT_03218fe0;
      local_b8 = puVar16[3];
      local_b0 = (undefined4)puVar16[4];
      uVar1 = *(uint *)((long)puVar16 + 0x24);
      local_ac = CONCAT44(uVar1,0xffff);
      if (uVar1 < 5) {
        uVar21 = CONCAT44(-(float)((ulong)_DAT_03219000 >> 0x20),-(float)_DAT_03219000);
        uVar20 = CONCAT44(-(float)((ulong)ram0x03219008 >> 0x20),-(float)ram0x03219008);
        switch(uVar1) {
        default:
          if (local_100 != (undefined4 *)0x0) {
            *local_100 = (undefined4)DAT_03218fe0;
            local_100[1] = uVar4;
            local_100[2] = uVar5;
            local_100[3] = uVar6;
            local_100[4] = uVar7;
            local_100[5] = uVar8;
            local_100[6] = uVar9;
            local_100[7] = uVar10;
            *(undefined8 *)(local_100 + 8) = uVar21;
            *(undefined8 *)(local_100 + 10) = uVar20;
            local_100[0xc] = fVar11;
            local_100[0xd] = fVar12;
            local_100[0xe] = fVar13;
            local_100[0xf] = uVar14;
            local_f8 = CONCAT44(uVar4,uVar3);
            local_f0 = CONCAT44(uVar6,uVar5);
            local_e8 = CONCAT44(uVar8,uVar7);
            local_e0 = CONCAT44(uVar10,uVar9);
            local_c8 = CONCAT44(fVar12,fVar11);
            local_c0 = CONCAT44(uVar14,fVar13);
            local_d8 = uVar21;
            local_d0 = uVar20;
          }
          break;
        case 1:
          if (local_100 != (undefined4 *)0x0) {
            fVar17 = *(float *)(puVar16 + 3);
            fVar18 = *(float *)((long)puVar16 + 0x1c);
            fVar19 = *(float *)(puVar16 + 4);
            *local_100 = (undefined4)DAT_03218fe0;
            local_100[1] = uVar4;
            fVar18 = fVar18 + fVar12;
            local_100[2] = uVar5;
            local_100[3] = uVar6;
            local_100[4] = uVar7;
            local_100[5] = uVar8;
            local_100[6] = uVar9;
            local_100[7] = uVar10;
            *(undefined8 *)(local_100 + 8) = uVar21;
            *(undefined8 *)(local_100 + 10) = uVar20;
            local_100[0xf] = uVar14;
            local_100[0xc] = fVar17 + fVar11;
            local_100[0xd] = fVar18;
            local_100[0xe] = fVar19 + fVar13;
            local_f8 = CONCAT44(uVar4,uVar3);
            local_f0 = CONCAT44(uVar6,uVar5);
            local_e8 = CONCAT44(uVar8,uVar7);
            local_e0 = CONCAT44(uVar10,uVar9);
            local_c8 = CONCAT44(fVar18,fVar17 + fVar11);
            local_c0 = CONCAT44(uVar14,fVar19 + fVar13);
            local_d8 = uVar21;
            local_d0 = uVar20;
          }
          break;
        case 3:
        case 4:
          if (*(long *)(param_1 + 0x388) != 0) {
            uVar15 = FUN_019951b4(*(long *)(param_1 + 0x388),puVar16[2]);
            local_ac = CONCAT44(local_ac._4_4_,uVar15) & 0xffffffff0000ffff;
            if (local_100 != (undefined4 *)0x0) {
              *local_100 = uVar3;
              local_100[1] = uVar4;
              local_100[2] = uVar5;
              local_100[3] = uVar6;
              local_100[4] = uVar7;
              local_100[5] = uVar8;
              local_100[6] = uVar9;
              local_100[7] = uVar10;
              *(undefined8 *)(local_100 + 8) = uVar21;
              *(undefined8 *)(local_100 + 10) = uVar20;
              local_100[0xc] = fVar11;
              local_100[0xd] = fVar12;
              local_100[0xe] = fVar13;
              local_100[0xf] = uVar14;
              local_f8 = CONCAT44(uVar4,uVar3);
              local_f0 = CONCAT44(uVar6,uVar5);
              local_e8 = CONCAT44(uVar8,uVar7);
              local_e0 = CONCAT44(uVar10,uVar9);
              local_c8 = CONCAT44(fVar12,fVar11);
              local_c0 = CONCAT44(uVar14,fVar13);
              local_d8 = uVar21;
              local_d0 = uVar20;
            }
          }
        }
      }
      local_160[0] = *puVar16;
      FUN_00afa274(param_1 + 0x2c0,local_160,&local_148);
      local_148 = &PTR_FUN_027dabf8;
      if ((local_118[0] & 1) != 0) {
        operator_delete(pvStack_108);
      }
      if ((local_130[0] & 1) != 0) {
        operator_delete(local_120);
      }
      puVar16 = (ulong *)*param_2;
    } while (puVar16 != (ulong *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af97f4(long param_1,ulong param_2)

{
  if (((param_2 & 1) != 0) && (*(long *)(param_1 + 0x2f8) != 0)) {
    *(undefined4 *)(param_1 + 0x2f0) = 0;
  }
  if (*(long *)(param_1 + 0x310) != 0) {
    FUN_0198fe30(param_1 + 0x318);
    *(undefined8 *)(param_1 + 0x310) = 0;
  }
  return;
}




void FUN_00af9834(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




void FUN_00af98a4(uint *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar3);
      if (uVar1 != 0xffffffff) {
        *(uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 8) = param_1[10];
        uVar4 = *param_1;
        param_1[10] = uVar1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar4);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




void FUN_00af9914(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2c0);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar3 = (ulong)uVar6;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x2e0);
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4);
    if ((*(byte *)(lVar4 + uVar5 * 0xa8 + 0x18) & 1) == 0) {
      lVar4 = lVar4 + uVar5 * 0xa8 + 0x19;
    }
    else {
      lVar4 = *(long *)(lVar4 + uVar5 * 0xa8 + 0x28);
    }
    FUN_00afa7b8(param_1,lVar4);
    uVar6 = (uint)uVar3;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x2c0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4) == -1);
  } while( true );
}




void FUN_00af99f0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    uVar4 = 0;
    lVar5 = 4;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 2) + lVar5);
      if (uVar1 != 0xffffffff) {
        puVar3 = (uint *)(*(long *)(param_1 + 8) + (ulong)uVar1 * 0xa8);
        (*(code *)**(undefined8 **)puVar3)(puVar3);
        *puVar3 = param_1[10];
        uVar2 = *param_1;
        param_1[10] = uVar1;
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (uVar4 < uVar2);
  }
  if (*(long *)(param_1 + 2) != 0) {
    *param_1 = 0;
  }
  param_1[4] = 0;
  if (*(long *)(param_1 + 8) != 0) {
    param_1[6] = 0;
  }
  param_1[10] = 0xffffffff;
  return;
}




void FUN_00af9aa0(long param_1,undefined8 param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  ulong local_48 [2];
  void *local_38;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_48[0] = 0;
  local_30 = param_2;
  puVar3 = (ulong *)FUN_00afb0e4(param_1 + 0x260,&local_30);
  puVar1 = local_48;
  if (puVar3 != (ulong *)0x0) {
    puVar1 = puVar3;
  }
  if (*puVar1 == 0) {
    *(undefined8 *)(param_1 + 0x300) = 0;
    FUN_008fce60(param_1 + 0x390,&DAT_0320ffa8);
    uVar4 = 0;
  }
  else {
    *(ulong *)(param_1 + 0x300) = *puVar1;
    FUN_008fa54c(local_48,local_30);
    FUN_008fce60(param_1 + 0x390,local_48);
    if ((local_48[0] & 1) != 0) {
      operator_delete(local_38);
    }
    if (*(long *)(param_1 + 0x388) != 0) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x300) + 0x20))();
      FUN_0198abf0(uVar4,param_1 + 0x318);
    }
    uVar4 = 1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00af9b78(long param_1)

{
  *(undefined8 *)(param_1 + 0x300) = 0;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00af9b80(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar13 = DAT_0321901c;
  fVar12 = DAT_03219018;
  fVar11 = DAT_03219010._4_4_;
  fVar10 = (float)DAT_03219010;
  uVar9 = DAT_03218ffc;
  uVar8 = DAT_03218ff8;
  uVar7 = DAT_03218ff0._4_4_;
  uVar6 = (undefined4)DAT_03218ff0;
  uVar5 = DAT_03218fec;
  uVar4 = DAT_03218fe8;
  uVar3 = DAT_03218fe0._4_4_;
  uVar2 = (undefined4)DAT_03218fe0;
  puVar14 = *(undefined4 **)(param_2 + 0x48);
  if (puVar14 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_2 + 0xa0);
    if (iVar1 - 3U < 2) {
      FUN_00af9c90();
      return;
    }
    fVar16 = -(float)_DAT_03219000;
    fVar17 = -(float)((ulong)_DAT_03219000 >> 0x20);
    uVar15 = CONCAT44(-(float)((ulong)ram0x03219008 >> 0x20),-(float)ram0x03219008);
    if (iVar1 == 2) {
      *puVar14 = (undefined4)DAT_03218fe0;
      puVar14[1] = uVar3;
      puVar14[2] = uVar4;
      puVar14[3] = uVar5;
      puVar14[4] = uVar6;
      puVar14[5] = uVar7;
      puVar14[6] = uVar8;
      puVar14[7] = uVar9;
      *(ulong *)(puVar14 + 8) = CONCAT44(fVar17,fVar16);
      *(undefined8 *)(puVar14 + 10) = uVar15;
      puVar14[0xc] = fVar10;
      puVar14[0xd] = fVar11;
      puVar14[0xe] = fVar12;
      puVar14[0xf] = uVar13;
      *(undefined4 *)(param_2 + 0x50) = uVar2;
      *(undefined4 *)(param_2 + 0x54) = uVar3;
      *(undefined4 *)(param_2 + 0x58) = uVar4;
      *(undefined4 *)(param_2 + 0x5c) = uVar5;
      *(undefined4 *)(param_2 + 0x60) = uVar6;
      *(undefined4 *)(param_2 + 100) = uVar7;
      *(undefined4 *)(param_2 + 0x68) = uVar8;
      *(undefined4 *)(param_2 + 0x6c) = uVar9;
      *(ulong *)(param_2 + 0x70) = CONCAT44(fVar17,fVar16);
      *(undefined8 *)(param_2 + 0x78) = uVar15;
      *(float *)(param_2 + 0x80) = fVar10;
      *(float *)(param_2 + 0x84) = fVar11;
      *(float *)(param_2 + 0x88) = fVar12;
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      fVar18 = *(float *)(param_2 + 0x90);
      fVar19 = *(float *)(param_2 + 0x94);
      fVar20 = *(float *)(param_2 + 0x98);
      *puVar14 = (undefined4)DAT_03218fe0;
      puVar14[1] = uVar3;
      fVar18 = fVar18 + fVar10;
      fVar19 = fVar19 + fVar11;
      fVar20 = fVar20 + fVar12;
      puVar14[2] = uVar4;
      puVar14[3] = uVar5;
      puVar14[4] = uVar6;
      puVar14[5] = uVar7;
      puVar14[6] = uVar8;
      puVar14[7] = uVar9;
      *(ulong *)(puVar14 + 8) = CONCAT44(fVar17,fVar16);
      *(undefined8 *)(puVar14 + 10) = uVar15;
      puVar14[0xf] = uVar13;
      puVar14[0xc] = fVar18;
      puVar14[0xd] = fVar19;
      puVar14[0xe] = fVar20;
      *(undefined4 *)(param_2 + 0x50) = uVar2;
      *(undefined4 *)(param_2 + 0x54) = uVar3;
      *(undefined4 *)(param_2 + 0x58) = uVar4;
      *(undefined4 *)(param_2 + 0x5c) = uVar5;
      *(undefined4 *)(param_2 + 0x60) = uVar6;
      *(undefined4 *)(param_2 + 100) = uVar7;
      *(undefined4 *)(param_2 + 0x68) = uVar8;
      *(undefined4 *)(param_2 + 0x6c) = uVar9;
      *(ulong *)(param_2 + 0x70) = CONCAT44(fVar17,fVar16);
      *(undefined8 *)(param_2 + 0x78) = uVar15;
      *(float *)(param_2 + 0x80) = fVar18;
      *(float *)(param_2 + 0x84) = fVar19;
      *(float *)(param_2 + 0x88) = fVar20;
    }
    *(undefined4 *)(param_2 + 0x8c) = uVar13;
  }
  return;
}




void FUN_00af9c90(long param_1,long param_2)

{
  long lVar1;
  float *pfVar2;
  undefined8 uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
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
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  undefined8 local_48;
  ulong local_40;
  float local_38;
  float fStack_34;
  float local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fVar5 = local_58;
  fVar7 = fStack_54;
  if ((*(int *)(param_2 + 0xa0) - 3U < 2) && (*(int *)(param_2 + 0x9c) != 0xffff)) {
    FUN_0198fb50(param_1 + 0x318,&local_58,1,*(int *)(param_2 + 0x9c),1);
    if (*(int *)(param_2 + 0xa0) == 4) {
      local_48 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x90) >> 0x20) +
                          (float)((ulong)local_48 >> 0x20),
                          (float)*(undefined8 *)(param_2 + 0x90) + (float)local_48);
      uVar4 = CONCAT44((float)(local_40 >> 0x20) + 0.0,*(float *)(param_2 + 0x98) + (float)local_40)
      ;
      local_40 = uVar4;
    }
    else {
      uVar4 = local_40 & 0xffffffff;
    }
    fVar5 = -local_58;
    fVar7 = -fStack_54;
    pfVar2 = *(float **)(param_2 + 0x48);
    if (pfVar2 != (float *)0x0) {
      fVar20 = fStack_54 * fStack_54 + local_58 * local_58;
      uVar3 = CONCAT44((float)((ulong)local_48 >> 0x20) + 0.0,(float)local_48 + 0.0);
      fVar17 = 1.0 - (fVar20 + fVar20);
      fVar20 = fStack_54 * fStack_54 + local_50 * local_50;
      fVar14 = local_50 * local_50 + local_58 * local_58;
      fVar12 = fVar17 * 0.0;
      fVar18 = fStack_54 * local_58 + local_50 * fStack_4c;
      fVar24 = local_50 * fVar5 - fStack_4c * fVar7;
      fVar13 = fStack_54 * local_58 - local_50 * fStack_4c;
      fVar21 = local_50 * fVar7 + fStack_4c * fVar5;
      fVar22 = local_50 * fVar5 + fStack_4c * fVar7;
      fVar6 = local_50 * fVar7 - fStack_4c * fVar5;
      fVar18 = fVar18 + fVar18;
      fVar24 = fVar24 + fVar24;
      fVar13 = fVar13 + fVar13;
      fVar21 = fVar21 + fVar21;
      fVar22 = fVar22 + fVar22;
      fVar6 = fVar6 + fVar6;
      fVar8 = 1.0 - (fVar20 + fVar20);
      fVar10 = 1.0 - (fVar14 + fVar14);
      fVar20 = (float)uVar4 + 0.0;
      fVar15 = fVar13 * 0.0;
      fVar23 = fVar22 * 0.0;
      fVar14 = fVar6 * 0.0;
      fVar11 = fVar18 * 0.0;
      fVar25 = fVar21 * 0.0;
      fVar19 = fVar24 * 0.0;
      fVar9 = fVar8 * 0.0;
      fVar16 = fVar10 * 0.0;
      fVar24 = fVar12 + local_38 * fVar24 + fVar25;
      fVar12 = fVar12 + fVar19 + fStack_34 * fVar21;
      fVar17 = local_30 * fVar17 + fVar19 + fVar25;
      fVar8 = fVar23 + local_38 * fVar8 + fVar15;
      fVar23 = fVar23 + fVar9 + fStack_34 * fVar13;
      fVar9 = local_30 * fVar22 + fVar9 + fVar15;
      fVar18 = fVar14 + local_38 * fVar18 + fVar16;
      fVar14 = fVar14 + fVar11 + fStack_34 * fVar10;
      fVar6 = local_30 * fVar6 + fVar11 + fVar16;
      pfVar2[3] = 0.0;
      pfVar2[7] = 0.0;
      pfVar2[0xb] = 0.0;
      pfVar2[0xf] = 1.0;
      *(undefined8 *)(pfVar2 + 0xc) = uVar3;
      pfVar2[0xe] = fVar20;
      pfVar2[1] = fVar18;
      pfVar2[2] = fVar24;
      pfVar2[5] = fVar14;
      pfVar2[6] = fVar12;
      pfVar2[9] = fVar6;
      pfVar2[10] = fVar17;
      *pfVar2 = fVar8;
      pfVar2[4] = fVar23;
      pfVar2[8] = fVar9;
      *(float *)(param_2 + 0x50) = fVar8;
      *(float *)(param_2 + 0x54) = fVar18;
      *(float *)(param_2 + 0x58) = fVar24;
      *(undefined4 *)(param_2 + 0x5c) = 0;
      *(float *)(param_2 + 0x60) = fVar23;
      *(float *)(param_2 + 100) = fVar14;
      *(float *)(param_2 + 0x68) = fVar12;
      *(undefined4 *)(param_2 + 0x6c) = 0;
      *(float *)(param_2 + 0x70) = fVar9;
      *(float *)(param_2 + 0x74) = fVar6;
      *(float *)(param_2 + 0x78) = fVar17;
      *(undefined4 *)(param_2 + 0x7c) = 0;
      *(undefined8 *)(param_2 + 0x80) = uVar3;
      *(float *)(param_2 + 0x88) = fVar20;
      *(undefined4 *)(param_2 + 0x8c) = 0x3f800000;
    }
  }
  fStack_54 = fVar7;
  local_58 = fVar5;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00af9ee8(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_0198f550(param_1 + 0x318);
  uVar1 = *(uint *)(param_1 + 0x2c0);
  uVar3 = 0;
  do {
    uVar8 = uVar3;
    uVar6 = (ulong)uVar8;
    if (uVar1 <= uVar8) break;
    uVar3 = uVar8 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar6 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar8) {
      lVar5 = *(long *)(param_1 + 0x310);
      if ((lVar5 != 0) && ((*(int *)(lVar5 + 0x24) != 0 || (*(char *)(lVar5 + 0x2c) != '\0')))) {
        if (*(char *)(param_1 + 0x3a8) != '\0') {
          uVar4 = FUN_00f048a4("UI::EVENT_ANIMATION_LOOPED");
          FUN_00f048e0(auStack_68,uVar4,*(undefined4 *)(*(long *)(param_1 + 0x310) + 0x24));
          FUN_00f04760(param_1,auStack_68,1);
          lVar5 = *(long *)(param_1 + 0x310);
          *(undefined4 *)(lVar5 + 0x24) = 0;
        }
        if (*(int *)(param_1 + 0x2f0) != 0) {
          if (lVar5 != 0) {
            FUN_0198fe30(param_1 + 0x318);
            *(undefined8 *)(param_1 + 0x310) = 0;
          }
          puVar7 = *(undefined8 **)
                    (*(long *)(*(long *)(param_1 + 0x1a0) + 8) +
                    (ulong)**(uint **)(param_1 + 0x2f8) * 8);
          FUN_00afa094(*(undefined4 *)(puVar7 + 2),param_1,*puVar7,
                       *(undefined1 *)((long)puVar7 + 0x14),*(undefined1 *)(param_1 + 0x3a8));
          FUN_00a1b8f0(param_1 + 0x2f0,*(long *)(param_1 + 0x2f8),*(long *)(param_1 + 0x2f8) + 4);
        }
      }
      if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    FUN_00af9b80(param_1,*(long *)(param_1 + 0x2e0) +
                         (ulong)*(uint *)(*(long *)(param_1 + 0x2c8) + uVar6 * 8 + 4) * 0xa8);
    uVar8 = (uint)uVar6;
    do {
      uVar8 = uVar8 + 1;
      uVar6 = (ulong)uVar8;
      if (*(uint *)(param_1 + 0x2c0) <= uVar8) break;
    } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar6 * 8 + 4) == -1);
  } while( true );
}




void thunk_FUN_00af9ee8(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 auStack_68 [32];
  long lStack_48;
  
  lVar2 = tpidr_el0;
  lStack_48 = *(long *)(lVar2 + 0x28);
  FUN_0198f550(param_1 + 0x318);
  uVar1 = *(uint *)(param_1 + 0x2c0);
  uVar3 = 0;
  do {
    uVar8 = uVar3;
    uVar6 = (ulong)uVar8;
    if (uVar1 <= uVar8) break;
    uVar3 = uVar8 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar6 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar8) {
      lVar5 = *(long *)(param_1 + 0x310);
      if ((lVar5 != 0) && ((*(int *)(lVar5 + 0x24) != 0 || (*(char *)(lVar5 + 0x2c) != '\0')))) {
        if (*(char *)(param_1 + 0x3a8) != '\0') {
          uVar4 = FUN_00f048a4("UI::EVENT_ANIMATION_LOOPED");
          FUN_00f048e0(auStack_68,uVar4,*(undefined4 *)(*(long *)(param_1 + 0x310) + 0x24));
          FUN_00f04760(param_1,auStack_68,1);
          lVar5 = *(long *)(param_1 + 0x310);
          *(undefined4 *)(lVar5 + 0x24) = 0;
        }
        if (*(int *)(param_1 + 0x2f0) != 0) {
          if (lVar5 != 0) {
            FUN_0198fe30(param_1 + 0x318);
            *(undefined8 *)(param_1 + 0x310) = 0;
          }
          puVar7 = *(undefined8 **)
                    (*(long *)(*(long *)(param_1 + 0x1a0) + 8) +
                    (ulong)**(uint **)(param_1 + 0x2f8) * 8);
          FUN_00afa094(*(undefined4 *)(puVar7 + 2),param_1,*puVar7,
                       *(undefined1 *)((long)puVar7 + 0x14),*(undefined1 *)(param_1 + 0x3a8));
          FUN_00a1b8f0(param_1 + 0x2f0,*(long *)(param_1 + 0x2f8),*(long *)(param_1 + 0x2f8) + 4);
        }
      }
      if (*(long *)(lVar2 + 0x28) != lStack_48) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    FUN_00af9b80(param_1,*(long *)(param_1 + 0x2e0) +
                         (ulong)*(uint *)(*(long *)(param_1 + 0x2c8) + uVar6 * 8 + 4) * 0xa8);
    uVar8 = (uint)uVar6;
    do {
      uVar8 = uVar8 + 1;
      uVar6 = (ulong)uVar8;
      if (*(uint *)(param_1 + 0x2c0) <= uVar8) break;
    } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar6 * 8 + 4) == -1);
  } while( true );
}




void thunk_FUN_00af9914(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar1 = *(uint *)(param_1 + 0x2c0);
  uVar2 = 0;
  do {
    uVar6 = uVar2;
    uVar3 = (ulong)uVar6;
    if (uVar1 <= uVar6) break;
    uVar2 = uVar6 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4) == -1);
  do {
    if (uVar1 == uVar6) {
      return;
    }
    lVar4 = *(long *)(param_1 + 0x2e0);
    uVar5 = (ulong)*(uint *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4);
    if ((*(byte *)(lVar4 + uVar5 * 0xa8 + 0x18) & 1) == 0) {
      lVar4 = lVar4 + uVar5 * 0xa8 + 0x19;
    }
    else {
      lVar4 = *(long *)(lVar4 + uVar5 * 0xa8 + 0x28);
    }
    FUN_00afa7b8(param_1,lVar4);
    uVar6 = (uint)uVar3;
    do {
      uVar6 = uVar6 + 1;
      uVar3 = (ulong)uVar6;
      if (*(uint *)(param_1 + 0x2c0) <= uVar6) break;
    } while (*(int *)(*(long *)(param_1 + 0x2c8) + uVar3 * 8 + 4) == -1);
  } while( true );
}

