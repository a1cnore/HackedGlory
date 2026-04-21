// functions/00cdd — 15 functions
#include "libGameKindred.h"




void FUN_00cdd050(long param_1)

{
  *(ushort *)(param_1 + 0xb0) = *(ushort *)(param_1 + 0xb0) & 0xf3ff;
  FUN_0099cf94(param_1 + 0x40,0);
  return;
}




void FUN_00cdd06c(long param_1)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    uVar3 = uVar4;
    uVar1 = (ulong)uVar3;
    if (*(uint *)(param_1 + 0x68) <= uVar3) break;
    uVar4 = uVar3 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x70) + uVar1 * 8 + 4) == -1);
  if (*(uint *)(param_1 + 0x68) != uVar3) {
    do {
      lVar2 = *(long *)(*(long *)(param_1 + 0x88) +
                       (ulong)*(uint *)(*(long *)(param_1 + 0x70) + uVar1 * 8 + 4) * 8);
      if ((*(byte *)(lVar2 + 0x90) & 1) == 0) {
        lVar2 = lVar2 + 0x91;
      }
      else {
        lVar2 = *(long *)(lVar2 + 0xa0);
      }
      FUN_00cdce6c(param_1,lVar2);
      uVar4 = (uint)uVar1;
      do {
        uVar4 = uVar4 + 1;
        uVar1 = (ulong)uVar4;
        if (*(uint *)(param_1 + 0x68) <= uVar4) break;
      } while (*(int *)(*(long *)(param_1 + 0x70) + uVar1 * 8 + 4) == -1);
    } while (*(uint *)(param_1 + 0x68) != uVar4);
  }
  return;
}




void FUN_00cdd134(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 local_b4;
  undefined4 uStack_ac;
  int local_a8 [2];
  ulong local_a0;
  int local_98 [12];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e84e5c(param_2);
  if ((uVar3 & 1) != 0) {
    local_98[8] = 0;
    local_98[9] = 0;
    local_98[10] = 0;
    local_98[0xb] = 0;
    local_98[4] = 0;
    local_98[5] = 0;
    local_98[6] = 0;
    local_98[7] = 0;
    local_98[0] = 0;
    local_98[1] = 0;
    local_98[2] = 0;
    local_98[3] = 0;
    local_a8[0] = 0;
    local_a8[1] = 0;
    local_a0 = 0;
    if (*(int *)(param_2 + 0x28) == 0) {
      local_b4 = 0;
      iVar10 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar7 = 0;
      iVar8 = 0;
      iVar6 = 0;
    }
    else {
      lVar11 = 0;
      uVar3 = 0;
      do {
        lVar4 = *(long *)(param_2 + 0x30) + lVar11;
        FUN_00cdd418(param_1,lVar4);
        lVar4 = FUN_00cdc0c8(param_1,lVar4);
        if ((lVar4 != 0) && (uVar9 = (uint)(char)*(undefined2 *)(lVar4 + 0xb0), uVar9 != 0)) {
          if ((*(byte *)(lVar4 + 0x60) & 1) == 0) {
            lVar5 = lVar4 + 0x61;
          }
          else {
            lVar5 = *(long *)(lVar4 + 0x70);
          }
          lVar5 = FUN_00ce9d20(lVar5);
          uVar1 = *(uint *)(lVar5 + 0x18);
          local_98[(ulong)uVar1 + 8] = local_98[(ulong)uVar1 + 8] + 1;
          local_98[(ulong)uVar1 + 4] = local_98[(ulong)uVar1 + 4] + uVar9;
          if ((((9 < uVar9) && (uVar1 == 1)) || ((4 < uVar9 && (uVar1 == 2)))) ||
             ((1 < uVar9 && (uVar1 == 3)))) {
            local_98[uVar1] = local_98[uVar1] + 1;
          }
          if ((*(ushort *)(lVar4 + 0xb0) >> 9 & 1) != 0) {
            local_a8[uVar1] = local_a8[uVar1] + 1;
          }
        }
        uVar3 = uVar3 + 1;
        lVar11 = lVar11 + 0x78;
      } while (uVar3 < *(uint *)(param_2 + 0x28));
      local_b4 = local_a8[1];
      iVar8 = local_98[10];
      iVar7 = local_98[0xb];
      iVar16 = local_98[5];
      iVar15 = local_98[6];
      iVar14 = local_98[7];
      iVar13 = local_98[1];
      iVar12 = local_98[2];
      iVar10 = local_98[3];
      iVar6 = local_98[9];
    }
    uVar3 = local_a0;
    FUN_008ffcf8("talent_num_rares",iVar6,0);
    FUN_008ffcf8("talent_num_epics",iVar8,0);
    FUN_008ffcf8("talent_num_legens",iVar7,0);
    FUN_008ffcf8("talent_sum_rare_lvls",iVar16,0);
    FUN_008ffcf8("talent_sum_epic_lvls",iVar15,0);
    FUN_008ffcf8("talent_sum_legen_lvls",iVar14,0);
    FUN_008ffcf8("talent_num_rare_mid_lvl",iVar13,0);
    FUN_008ffcf8("talent_num_epic_mid_level",iVar12,0);
    FUN_008ffcf8("talent_num_legen_mid_level",iVar10,0);
    FUN_008ffcf8("talent_num_rare_max_lvl",local_b4,0);
    FUN_008ffcf8("talent_num_epic_max_level",uVar3 & 0xffffffff,0);
    uStack_ac = (undefined4)(uVar3 >> 0x20);
    FUN_008ffcf8("talent_num_legen_max_level",uStack_ac,0);
    *(undefined1 *)(param_1 + 200) = 1;
    FUN_00cdda64(param_1 + 0x30,param_1);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cdd418(long param_1,long param_2)

{
  void *pvVar1;
  size_t __n;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  long lVar9;
  ulong *puVar10;
  uint *puVar11;
  byte *__s2;
  ulong uVar12;
  byte *pbVar13;
  ushort uVar14;
  long lVar15;
  ushort uVar16;
  ulong uVar17;
  ulong uVar18;
  byte *pbVar19;
  byte *pbVar20;
  long lVar21;
  byte local_150 [8];
  ulong local_148;
  void *local_140;
  byte local_138 [8];
  ulong local_130;
  void *local_128;
  ulong local_120;
  ulong uStack_118;
  void *local_110;
  ulong local_100;
  ulong uStack_f8;
  void *local_f0;
  ulong local_e0;
  ulong uStack_d8;
  void *local_d0;
  byte local_c8 [16];
  void *local_b8;
  ulong local_b0;
  ulong uStack_a8;
  void *local_a0;
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar9 = FUN_00cdc0c8();
  uVar14 = *(ushort *)(lVar9 + 0xb0);
  uVar12 = *(ulong *)(lVar9 + 0xa8);
  if ((uVar14 >> 8 & 1) != 0) {
    if ((char)uVar14 == '\0') {
      uVar18 = (ulong)(*(int *)(param_2 + 0x60) != 0) << 0xb;
    }
    else {
      uVar18 = 0;
    }
    uVar16 = (ushort)(uVar18 >> 1);
    if ((uVar14 & 0x400) != 0) {
      uVar16 = 0x400;
    }
    uVar14 = (ushort)uVar18 | uVar14 & 0xf3ff | uVar16;
    *(ulong *)(lVar9 + 0xa8) = uVar12;
    *(ushort *)(lVar9 + 0xb0) = uVar14;
  }
  bVar4 = *(byte *)(param_2 + 0x60);
  *(ulong *)(lVar9 + 0xa8) = uVar12;
  uVar14 = (ushort)bVar4 | uVar14 & 0xff00;
  *(ushort *)(lVar9 + 0xb0) = uVar14;
  uVar18 = (ulong)*(ushort *)(param_2 + 100);
  *(ushort *)(lVar9 + 0xb0) = uVar14;
  *(ulong *)(lVar9 + 0xa8) = uVar12 & 0xffffffffffff0000 | uVar18;
  iVar8 = *(int *)(param_2 + 0x68);
  *(ushort *)(lVar9 + 0xb0) = uVar14;
  uVar17 = (ulong)(uint)(iVar8 << 0x10);
  *(ulong *)(lVar9 + 0xa8) = uVar12 & 0xffffffff00000000 | uVar18 | uVar17;
  uVar3 = *(uint *)(param_2 + 0x6c);
  *(ushort *)(lVar9 + 0xb0) = uVar14;
  *(ulong *)(lVar9 + 0xa8) = uVar18 | uVar17 | (ulong)uVar3 << 0x20;
  FUN_008fce60(lVar9 + 0x60,param_2 + 0x18);
  FUN_008fce60(lVar9 + 0x90,param_2);
  pbVar13 = (byte *)(lVar9 + 0x78);
  FUN_008fce60(pbVar13,param_2 + 0x48);
  *(ushort *)(lVar9 + 0xb0) =
       *(ushort *)(lVar9 + 0xb0) & 0xfdff | (ushort)*(byte *)(param_2 + 0x70) << 9;
  FUN_008fa54c(&local_120,"TALENTS.UPGRADE.");
  uVar12 = lVar9 + 0x79;
  uVar18 = (ulong)(*(byte *)(lVar9 + 0x78) >> 1);
  uVar17 = uVar12;
  if ((*(byte *)(lVar9 + 0x78) & 1) != 0) {
    uVar18 = *(ulong *)(lVar9 + 0x80);
    uVar17 = *(ulong *)(lVar9 + 0x88);
  }
  puVar10 = (ulong *)FUN_0090de84(&local_120,uVar17,uVar18);
  local_f0 = (void *)puVar10[2];
  uStack_f8 = puVar10[1];
  local_100 = *puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  FUN_008fa54c(local_138,".");
  uVar18 = (ulong)(local_138[0] >> 1);
  pvVar1 = (void *)((ulong)local_138 | 1);
  if ((local_138[0] & 1) != 0) {
    uVar18 = local_130;
    pvVar1 = local_128;
  }
  puVar10 = (ulong *)FUN_0090de84(&local_100,pvVar1,uVar18);
  local_d0 = (void *)puVar10[2];
  pbVar20 = (byte *)(lVar9 + 0x91);
  uStack_d8 = puVar10[1];
  local_e0 = *puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  uVar18 = (ulong)(*(byte *)(lVar9 + 0x90) >> 1);
  pbVar19 = pbVar20;
  if ((*(byte *)(lVar9 + 0x90) & 1) != 0) {
    uVar18 = *(ulong *)(lVar9 + 0x98);
    pbVar19 = *(byte **)(lVar9 + 0xa0);
  }
  puVar10 = (ulong *)FUN_0090de84(&local_e0,pbVar19,uVar18);
  local_a0 = (void *)puVar10[2];
  uStack_a8 = puVar10[1];
  local_b0 = *puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  FUN_008fcdb8(local_c8,&local_b0);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if ((local_138[0] & 1) != 0) {
    operator_delete(local_128);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if (((byte)local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  pvVar1 = (void *)((ulong)local_c8 | 1);
  if ((local_c8[0] & 1) != 0) {
    pvVar1 = local_b8;
  }
  FUN_0099cfec(lVar9 + 0x20,pvVar1,1);
  uVar7 = FUN_00a0a728(param_1 + 0x40);
  FUN_00cdc584(lVar9,uVar7);
  FUN_008fa54c(local_138,"TALENTS.NEWTALENT.");
  uVar18 = (ulong)(*(byte *)(lVar9 + 0x78) >> 1);
  uVar17 = uVar12;
  if ((*(byte *)(lVar9 + 0x78) & 1) != 0) {
    uVar18 = *(ulong *)(lVar9 + 0x80);
    uVar17 = *(ulong *)(lVar9 + 0x88);
  }
  puVar10 = (ulong *)FUN_0090de84(local_138,uVar17,uVar18);
  local_110 = (void *)puVar10[2];
  uStack_118 = puVar10[1];
  local_120 = *puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  FUN_008fa54c(local_150,".");
  uVar18 = (ulong)(local_150[0] >> 1);
  pvVar1 = (void *)((ulong)local_150 | 1);
  if ((local_150[0] & 1) != 0) {
    uVar18 = local_148;
    pvVar1 = local_140;
  }
  puVar10 = (ulong *)FUN_0090de84(&local_120,pvVar1,uVar18);
  local_f0 = (void *)puVar10[2];
  uStack_f8 = puVar10[1];
  local_100 = *puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  uVar18 = (ulong)(*(byte *)(lVar9 + 0x90) >> 1);
  pbVar19 = pbVar20;
  if ((*(byte *)(lVar9 + 0x90) & 1) != 0) {
    uVar18 = *(ulong *)(lVar9 + 0x98);
    pbVar19 = *(byte **)(lVar9 + 0xa0);
  }
  puVar10 = (ulong *)FUN_0090de84(&local_100,pbVar19,uVar18);
  local_a0 = (void *)puVar10[2];
  uStack_a8 = puVar10[1];
  local_b0 = *puVar10;
  puVar10[1] = 0;
  puVar10[2] = 0;
  *puVar10 = 0;
  FUN_008fcdb8(&local_e0,&local_b0);
  if ((local_b0 & 1) != 0) {
    operator_delete(local_a0);
  }
  if ((local_100 & 1) != 0) {
    operator_delete(local_f0);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_120 & 1) != 0) {
    operator_delete(local_110);
  }
  if ((local_138[0] & 1) != 0) {
    operator_delete(local_128);
  }
  pvVar1 = (void *)((ulong)&local_e0 | 1);
  if ((local_e0 & 1) != 0) {
    pvVar1 = local_d0;
  }
  FUN_0099cfec(lVar9 + 0x40,pvVar1,1);
  FUN_0099cf94(lVar9 + 0x40,*(ushort *)(lVar9 + 0xb0) >> 10 & 1);
  param_1 = param_1 + 0x98;
  local_b0 = uVar12;
  if ((*(byte *)(lVar9 + 0x78) & 1) != 0) {
    local_b0 = *(ulong *)(lVar9 + 0x88);
  }
  uVar18 = FUN_00cdc6f4(param_1,&local_b0);
  if ((uVar18 & 1) == 0) {
    local_100 = uVar12;
    if ((*pbVar13 & 1) != 0) {
      local_100 = *(ulong *)(lVar9 + 0x88);
    }
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_00cddb80(param_1,&local_100,&local_b0);
    FUN_00951534(&local_b0,1);
  }
  if ((*pbVar13 & 1) != 0) {
    uVar12 = *(ulong *)(lVar9 + 0x88);
  }
  local_b0 = uVar12;
  puVar11 = (uint *)FUN_00cdcc10(param_1,&local_b0);
  uVar3 = *puVar11;
  if (uVar3 != 0) {
    bVar4 = *(byte *)(lVar9 + 0x90);
    lVar21 = *(long *)(puVar11 + 2);
    uVar12 = 0;
    __n = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      __n = *(size_t *)(lVar9 + 0x98);
    }
    do {
      pbVar13 = (byte *)(lVar21 + uVar12 * 0x18);
      bVar5 = *pbVar13;
      sVar2 = (ulong)(bVar5 >> 1);
      if ((bVar5 & 1) != 0) {
        sVar2 = *(size_t *)(pbVar13 + 8);
      }
      if (sVar2 == __n) {
        pbVar19 = *(byte **)(lVar21 + uVar12 * 0x18 + 0x10);
        if ((bVar5 & 1) == 0) {
          pbVar19 = pbVar13 + 1;
        }
        __s2 = pbVar20;
        if ((bVar4 & 1) != 0) {
          __s2 = *(byte **)(lVar9 + 0xa0);
        }
        if ((bVar5 & 1) == 0) {
          if (__n == 0) goto LAB_00cdd95c;
          lVar15 = -(ulong)(bVar5 >> 1);
          while (pbVar13 = pbVar13 + 1, *pbVar13 == *__s2) {
            lVar15 = lVar15 + 1;
            __s2 = __s2 + 1;
            if (lVar15 == 0) goto LAB_00cdd95c;
          }
        }
        else if ((__n == 0) || (iVar8 = memcmp(pbVar19,__s2,__n), iVar8 == 0)) goto LAB_00cdd95c;
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 < uVar3);
  }
  FUN_0096204c(puVar11,lVar9 + 0x90);
LAB_00cdd95c:
  *(ushort *)(lVar9 + 0xb0) = *(ushort *)(lVar9 + 0xb0) | 0x100;
  FUN_00cdc3d8(lVar9,lVar9);
  pbVar13 = pbVar20;
  if ((*(byte *)(lVar9 + 0x90) & 1) != 0) {
    pbVar13 = *(byte **)(lVar9 + 0xa0);
  }
  FUN_00e6a8a8(&local_b0,"talent_%s_level",pbVar13);
  FUN_008ffcf8(&local_b0,(ulong)(long)(short)(*(short *)(lVar9 + 0xb0) << 8) >> 8,0);
  if ((*(byte *)(lVar9 + 0x90) & 1) != 0) {
    pbVar20 = *(byte **)(lVar9 + 0xa0);
  }
  FUN_00e6a8a8(&local_b0,"talent_%s_fragments",pbVar20);
  FUN_008ffcf8(&local_b0,(long)*(short *)(lVar9 + 0xa8),0);
  if ((local_e0 & 1) != 0) {
    operator_delete(local_d0);
  }
  if ((local_c8[0] & 1) != 0) {
    operator_delete(local_b8);
  }
  if (*(long *)(lVar6 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00cdda38(long param_1)

{
  undefined8 uVar1;
  
  if ((*(ushort *)(param_1 + 0xb0) >> 8 & 1) == 0) {
    return 0;
  }
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    uVar1 = FUN_00ce9d20(param_1 + 0x61);
    return uVar1;
  }
  uVar1 = FUN_00ce9d20(*(undefined8 *)(param_1 + 0x70));
  return uVar1;
}




void FUN_00cdda64(uint *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    puVar1 = *(undefined8 **)(param_1 + 2);
    do {
      if ((code *)*puVar1 == (code *)0x0) {
        (*(code *)puVar1[3])(puVar1[2],param_2);
      }
      else {
        (*(code *)*puVar1)(param_2);
      }
      puVar1 = puVar1 + 4;
    } while (puVar1 != (undefined8 *)(*(long *)(param_1 + 2) + (ulong)*param_1 * 0x20));
  }
  return;
}




void FUN_00cddad0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  if (*(int *)(param_2 + 0x28) != 0) {
    lVar1 = 0;
    uVar2 = 0;
    do {
      FUN_00cdd418(param_1,*(long *)(param_2 + 0x30) + lVar1);
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x78;
    } while (uVar2 < *(uint *)(param_2 + 0x28));
  }
  FUN_00cdda64(param_1 + 0x30,param_1);
  lVar1 = FUN_009580b8();
  FUN_009658c8(lVar1 + 0x18);
  return;
}




void FUN_00cddb40(void)

{
  FUN_00cdbd9c();
  FUN_009580b8();
  FUN_00962918();
  return;
}




void FUN_00cddb58(long param_1)

{
  FUN_00cdbd9c(param_1 + -0x18);
  FUN_009580b8();
  FUN_00962918();
  return;
}




void FUN_00cddb78(long param_1)

{
  FUN_00cdbd9c(param_1 + -0x18);
  return;
}




void FUN_00cddb80(uint *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  void *pvVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined8 local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar14 = *param_2;
  uVar4 = FUN_00e6a474(uVar14);
  uVar5 = FUN_0091ed5c(uVar14,uVar4,0x12345678);
  uVar10 = param_1[4];
  uVar9 = *param_1;
  param_1[4] = uVar10 + 1;
  if (uVar9 >> 1 < uVar10 + 1) {
    local_58 = 0;
    local_50 = (void *)0x0;
    FUN_009348c8(&local_58,(uVar9 * 3 + 3 >> 1) + 7 & 0xfffffff8,0xffffffff00000000);
    uVar10 = *param_1;
    uVar11 = uVar10 - 1;
    uVar9 = (uint)local_58;
    if ((int)uVar11 < 0) {
      pvVar7 = *(void **)(param_1 + 2);
    }
    else {
      pvVar7 = *(void **)(param_1 + 2);
      do {
        iVar6 = *(int *)((long)pvVar7 + (ulong)uVar11 * 8 + 4);
        if (iVar6 != -1) {
          uVar10 = *(uint *)((long)pvVar7 + (ulong)uVar11 * 8);
          uVar2 = 0;
          if ((uint)local_58 != 0) {
            uVar2 = uVar10 / (uint)local_58;
          }
          uVar12 = (ulong)(uVar10 - uVar2 * (uint)local_58);
          piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
          iVar1 = *piVar13;
          while (iVar1 != -1) {
            uVar2 = (uint)local_58;
            if (0 < (int)(uint)uVar12) {
              uVar2 = (uint)uVar12;
            }
            uVar12 = (ulong)(uVar2 - 1);
            piVar13 = (int *)((long)local_50 + uVar12 * 8 + 4);
            iVar1 = *piVar13;
          }
          *(uint *)((long)local_50 + uVar12 * 8) = uVar10;
          *piVar13 = iVar6;
        }
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
      uVar10 = *param_1;
    }
    uVar11 = param_1[1];
    *param_1 = (uint)local_58;
    param_1[1] = local_58._4_4_;
    local_58 = CONCAT44(uVar11,uVar10);
    *(void **)(param_1 + 2) = local_50;
    local_50 = pvVar7;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      local_58 = 0;
      local_50 = (void *)0x0;
      uVar9 = *param_1;
    }
  }
  lVar8 = *(long *)(param_1 + 2);
  uVar10 = 0;
  if (uVar9 != 0) {
    uVar10 = uVar5 / uVar9;
  }
  uVar12 = (ulong)(uVar5 - uVar10 * uVar9);
  piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
  iVar6 = *piVar13;
  while (iVar6 != -1) {
    uVar10 = uVar9;
    if (0 < (int)(uint)uVar12) {
      uVar10 = (uint)uVar12;
    }
    uVar12 = (ulong)(uVar10 - 1);
    piVar13 = (int *)(lVar8 + uVar12 * 8 + 4);
    iVar6 = *piVar13;
  }
  *(uint *)(lVar8 + uVar12 * 8) = uVar5;
  iVar6 = FUN_00cde3c4(param_1,param_3);
  *piVar13 = iVar6;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cddd58(long param_1,undefined8 param_2,undefined8 param_3)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  byte *__s2;
  byte *pbVar10;
  long lVar11;
  byte *__s1;
  long lVar12;
  long local_80 [3];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  lVar7 = FUN_00cdc0c8(param_1,param_3);
  pbVar10 = (byte *)(lVar7 + 0x78);
  FUN_008fce60(pbVar10,param_2);
  FUN_008fce60(lVar7 + 0x90,param_3);
  param_1 = param_1 + 0x98;
  *(ushort *)(lVar7 + 0xb0) = *(ushort *)(lVar7 + 0xb0) & 0xfd00 | 1;
  if ((*(byte *)(lVar7 + 0x78) & 1) == 0) {
    local_80[0] = lVar7 + 0x79;
  }
  else {
    local_80[0] = *(long *)(lVar7 + 0x88);
  }
  uVar8 = FUN_00cdc6f4(param_1,local_80);
  if ((uVar8 & 1) == 0) {
    if ((*pbVar10 & 1) == 0) {
      local_80[2] = lVar7 + 0x79;
    }
    else {
      local_80[2] = *(long *)(lVar7 + 0x88);
    }
    local_80[1] = 0;
    local_80[0] = 0;
    FUN_00cddb80(param_1,local_80 + 2,local_80);
    FUN_00951534(local_80,1);
  }
  if ((*pbVar10 & 1) == 0) {
    local_80[0] = lVar7 + 0x79;
  }
  else {
    local_80[0] = *(long *)(lVar7 + 0x88);
  }
  puVar9 = (uint *)FUN_00cdcc10(param_1,local_80);
  uVar2 = *puVar9;
  if (uVar2 != 0) {
    bVar3 = *(byte *)(lVar7 + 0x90);
    lVar12 = *(long *)(puVar9 + 2);
    uVar8 = 0;
    __n = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      __n = *(size_t *)(lVar7 + 0x98);
    }
    do {
      pbVar10 = (byte *)(lVar12 + uVar8 * 0x18);
      bVar4 = *pbVar10;
      sVar1 = (ulong)(bVar4 >> 1);
      if ((bVar4 & 1) != 0) {
        sVar1 = *(size_t *)(pbVar10 + 8);
      }
      if (sVar1 == __n) {
        __s1 = *(byte **)(lVar12 + uVar8 * 0x18 + 0x10);
        if ((bVar4 & 1) == 0) {
          __s1 = pbVar10 + 1;
        }
        __s2 = (byte *)(lVar7 + 0x91);
        if ((bVar3 & 1) != 0) {
          __s2 = *(byte **)(lVar7 + 0xa0);
        }
        if ((bVar4 & 1) == 0) {
          if (__n == 0) goto LAB_00cddf24;
          lVar11 = -(ulong)(bVar4 >> 1);
          while (pbVar10 = pbVar10 + 1, *pbVar10 == *__s2) {
            lVar11 = lVar11 + 1;
            __s2 = __s2 + 1;
            if (lVar11 == 0) goto LAB_00cddf24;
          }
        }
        else if ((__n == 0) || (iVar6 = memcmp(__s1,__s2,__n), iVar6 == 0)) goto LAB_00cddf24;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar2);
  }
  FUN_0096204c(puVar9,lVar7 + 0x90);
LAB_00cddf24:
  *(ushort *)(lVar7 + 0xb0) = *(ushort *)(lVar7 + 0xb0) | 0x100;
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cddf68(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  FUN_0099ce88(param_1 + 4);
  FUN_0099ce88(param_1 + 8);
  memset(param_1 + 0xc,0,0x48);
  param_1[0x15] = 0x100010000;
  *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) & 0xf000;
  return;
}




void FUN_00cddfc8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_009629d8(uVar1,param_1 + 0x90);
  return;
}




void FUN_00cddfec(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00cde080(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}

