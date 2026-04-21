// functions/10054 — 192 functions
#include "GameKindred.h"




void FUN_1005400a4(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x108);
  *(undefined8 **)(param_1 + 0x268) = puVar1;
  *puVar1 = FUN_100540160;
  puVar1[1] = FUN_100540180;
  puVar1[2] = FUN_100541568;
  puVar1[5] = FUN_100541604;
  *(undefined4 *)(puVar1 + 0x16) = 0;
  _memset_pattern16(puVar1 + 6,&PTR_FUN_1014a0fc0,0x80);
  *(undefined8 *)((long)puVar1 + 0xbc) = 0;
  *(undefined8 *)((long)puVar1 + 0xb4) = 0;
  *(undefined8 *)((long)puVar1 + 0xcc) = 0;
  *(undefined8 *)((long)puVar1 + 0xc4) = 0;
  *(undefined8 *)((long)puVar1 + 0xdc) = 0;
  *(undefined8 *)((long)puVar1 + 0xd4) = 0;
  *(undefined8 *)((long)puVar1 + 0xec) = 0;
  *(undefined8 *)((long)puVar1 + 0xe4) = 0;
  puVar1[6] = FUN_1005416f0;
  puVar1[0x14] = FUN_1005416f0;
  lVar2 = *(long *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0;
  *(undefined8 *)(lVar2 + 0xf8) = 0;
  return;
}




void FUN_100540160(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined4 *)(lVar1 + 0x24) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  return;
}




void FUN_100540180(long *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  code *pcVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  undefined8 *puVar20;
  void *pvVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint *puVar24;
  byte *pbVar25;
  long lVar26;
  undefined **ppuVar27;
  long *plVar28;
  byte *pbVar29;
  byte *pbVar30;
  long lVar31;
  undefined1 uVar32;
  undefined8 local_181;
  undefined8 uStack_179;
  undefined8 local_171;
  undefined8 uStack_169;
  undefined8 local_161;
  undefined8 uStack_159;
  undefined8 local_151;
  undefined8 uStack_149;
  undefined8 local_141;
  undefined8 uStack_139;
  undefined8 local_131;
  undefined8 uStack_129;
  undefined8 local_121;
  undefined8 uStack_119;
  undefined8 local_111;
  undefined8 uStack_109;
  undefined8 local_101;
  undefined8 uStack_f9;
  undefined8 local_f1;
  undefined8 uStack_e9;
  undefined8 local_e1;
  undefined8 uStack_d9;
  undefined8 local_d1;
  undefined8 uStack_c9;
  undefined8 local_c1;
  undefined8 uStack_b9;
  undefined8 local_b1;
  undefined8 uStack_a9;
  undefined8 local_a1;
  undefined8 uStack_99;
  undefined8 local_91;
  undefined8 uStack_89;
  undefined1 local_81;
  uint uStack_80;
  undefined4 uStack_7c;
  uint uStack_78;
  undefined4 uStack_74;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  uVar19 = *(uint *)((long)param_1 + 0x23c);
  if (uVar19 != 0) goto LAB_100540294;
  do {
    if (*(int *)(param_1[0x4d] + 0x18) == 0) {
      puVar20 = (undefined8 *)param_1[5];
      lVar10 = puVar20[1];
      if (lVar10 == 0) {
        uVar5 = (*(code *)puVar20[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        lVar10 = puVar20[1];
      }
      pbVar25 = (byte *)*puVar20 + 1;
      bVar1 = *(byte *)*puVar20;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        uVar5 = (*(code *)puVar20[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        pbVar25 = (byte *)*puVar20;
        lVar10 = puVar20[1];
      }
      uVar19 = (uint)*pbVar25;
      uVar16 = (uint)bVar1;
      if ((uVar16 != 0xff) || (uVar19 != 0xd8)) {
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x37;
        *(uint *)(lVar9 + 0x2c) = uVar16;
        *(uint *)(*param_1 + 0x30) = uVar19;
        (**(code **)*param_1)(param_1);
      }
      *(uint *)((long)param_1 + 0x23c) = uVar19;
      *puVar20 = pbVar25 + 1;
      puVar20[1] = lVar10 + -1;
    }
    else {
      uVar5 = FUN_10053ffa8(param_1);
      if ((int)uVar5 == 0) goto LAB_1005411a0;
      uVar19 = *(uint *)((long)param_1 + 0x23c);
    }
LAB_100540294:
    switch(uVar19) {
    case 0xc0:
      uVar6 = 1;
      goto LAB_100540338;
    case 0xc1:
      uVar6 = 0;
LAB_100540338:
      uVar5 = 0;
LAB_10054034c:
      uVar7 = 0;
LAB_100540688:
      uVar5 = FUN_100541894(param_1,uVar6,uVar5,uVar7);
      iVar4 = (int)uVar5;
joined_r0x0001005402c8:
      if (iVar4 == 0) goto LAB_1005411a0;
      break;
    case 0xc2:
      uVar6 = 0;
      uVar5 = 1;
      goto LAB_10054034c;
    case 0xc3:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xcb:
    case 0xcd:
    case 0xce:
    case 0xcf:
      lVar10 = *param_1;
      uVar15 = 0x3f;
      goto LAB_1005402d8;
    case 0xc4:
      puVar20 = (undefined8 *)param_1[5];
      lVar10 = puVar20[1];
      if (lVar10 == 0) {
        iVar4 = (*(code *)puVar20[3])(param_1);
        if (iVar4 != 0) {
          lVar10 = puVar20[1];
          goto LAB_100540380;
        }
LAB_10054119c:
        uVar5 = 0;
        goto LAB_1005411a0;
      }
LAB_100540380:
      puVar22 = (undefined1 *)*puVar20 + 1;
      uVar32 = *(undefined1 *)*puVar20;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        iVar4 = (*(code *)puVar20[3])(param_1);
        if (iVar4 == 0) goto LAB_10054119c;
        puVar22 = (undefined1 *)*puVar20;
        lVar10 = puVar20[1];
      }
      lVar10 = lVar10 + -1;
      pbVar25 = puVar22 + 1;
      uVar11 = (ulong)CONCAT11(uVar32,*puVar22);
      lVar9 = uVar11 - 2;
      if (0x12 < uVar11) {
        do {
          if (lVar10 == 0) {
            iVar4 = (*(code *)puVar20[3])(param_1);
            if (iVar4 == 0) goto LAB_10054119c;
            pbVar25 = (byte *)*puVar20;
            lVar10 = puVar20[1];
          }
          bVar1 = *pbVar25;
          lVar31 = *param_1;
          *(undefined4 *)(lVar31 + 0x28) = 0x52;
          *(uint *)(lVar31 + 0x2c) = (uint)bVar1;
          (**(code **)(*param_1 + 8))(param_1,1);
          lVar31 = 0;
          uVar11 = 0;
          local_81 = 0;
          lVar10 = lVar10 + -1;
          pbVar29 = pbVar25 + 1;
          do {
            if (lVar10 == 0) {
              iVar4 = (*(code *)puVar20[3])(param_1);
              if (iVar4 == 0) goto LAB_10054119c;
              pbVar29 = (byte *)*puVar20;
              lVar10 = puVar20[1];
            }
            pbVar25 = pbVar29 + 1;
            bVar2 = *pbVar29;
            *(byte *)((long)&uStack_80 + lVar31) = bVar2;
            uVar11 = (ulong)bVar2 + (uVar11 & 0xffffffff);
            lVar10 = lVar10 + -1;
            lVar31 = lVar31 + 1;
            pbVar29 = pbVar25;
          } while (lVar31 != 0x10);
          lVar31 = *param_1;
          uVar32 = (undefined1)(uStack_80 >> 8);
          *(ulong *)(lVar31 + 0x34) =
               (ulong)(CONCAT14((char)(uStack_80 >> 0x18),uStack_80 >> 0x10) & 0xff000000ff);
          *(ulong *)(lVar31 + 0x2c) =
               (ulong)((uint6)CONCAT14(uVar32,(uint)CONCAT12(uVar32,(ushort)(byte)uStack_80)) &
                      0xffff0000ffff);
          uVar32 = (undefined1)(uStack_7c >> 8);
          *(ulong *)(lVar31 + 0x44) =
               (ulong)(CONCAT14((char)(uStack_7c >> 0x18),uStack_7c >> 0x10) & 0xff000000ff);
          *(ulong *)(lVar31 + 0x3c) =
               (ulong)((uint6)CONCAT14(uVar32,(uint)CONCAT12(uVar32,(ushort)(byte)uStack_7c)) &
                      0xffff0000ffff);
          *(undefined4 *)(lVar31 + 0x28) = 0x58;
          (**(code **)(lVar31 + 8))(param_1,2);
          lVar31 = *param_1;
          uVar32 = (undefined1)(uStack_78 >> 8);
          *(ulong *)(lVar31 + 0x34) =
               (ulong)(CONCAT14((char)(uStack_78 >> 0x18),uStack_78 >> 0x10) & 0xff000000ff);
          *(ulong *)(lVar31 + 0x2c) =
               (ulong)((uint6)CONCAT14(uVar32,(uint)CONCAT12(uVar32,(ushort)(byte)uStack_78)) &
                      0xffff0000ffff);
          uVar32 = (undefined1)(uStack_74 >> 8);
          *(ulong *)(lVar31 + 0x44) =
               (ulong)(CONCAT14((char)(uStack_74 >> 0x18),uStack_74 >> 0x10) & 0xff000000ff);
          *(ulong *)(lVar31 + 0x3c) =
               (ulong)((uint6)CONCAT14(uVar32,(uint)CONCAT12(uVar32,(ushort)(byte)uStack_74)) &
                      0xffff0000ffff);
          *(undefined4 *)(lVar31 + 0x28) = 0x58;
          (**(code **)(lVar31 + 8))(param_1,2);
          if ((0x100 < (uint)uVar11) || (lVar9 + -0x11 < (long)uVar11)) {
            puVar12 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar12 + 5) = 9;
            (*(code *)*puVar12)(param_1);
          }
          if ((uint)uVar11 != 0) {
            pbVar30 = (byte *)&local_181;
            uVar18 = uVar11;
            do {
              if (lVar10 == 0) {
                iVar4 = (*(code *)puVar20[3])(param_1);
                if (iVar4 == 0) goto LAB_10054119c;
                pbVar29 = (byte *)*puVar20;
                lVar10 = puVar20[1];
              }
              lVar10 = lVar10 + -1;
              pbVar25 = pbVar29 + 1;
              *pbVar30 = *pbVar29;
              uVar18 = uVar18 - 1;
              pbVar29 = pbVar25;
              pbVar30 = pbVar30 + 1;
            } while (uVar18 != 0);
          }
          uVar19 = (uint)bVar1;
          lVar31 = (ulong)(uint)bVar1 + 0x1d;
          if ((bVar1 & 0x10) != 0) {
            uVar19 = bVar1 - 0x10;
            lVar31 = (ulong)bVar1 + 0x11;
          }
          plVar28 = param_1 + lVar31;
          if (3 < uVar19) {
            lVar31 = *param_1;
            *(undefined4 *)(lVar31 + 0x28) = 0x1f;
            *(uint *)(lVar31 + 0x2c) = uVar19;
            (**(code **)*param_1)(param_1);
          }
          lVar9 = (lVar9 + -0x11) - uVar11;
          puVar12 = (undefined8 *)*plVar28;
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = (undefined8 *)FUN_10053935c(param_1);
            *plVar28 = (long)puVar12;
          }
          puVar12[1] = CONCAT35((undefined3)uStack_74,CONCAT41(uStack_78,uStack_7c._3_1_));
          *puVar12 = CONCAT35((undefined3)uStack_7c,CONCAT41(uStack_80,local_81));
          *(undefined1 *)(puVar12 + 2) = uStack_74._3_1_;
          lVar31 = *plVar28;
          *(undefined8 *)(lVar31 + 0xd9) = uStack_b9;
          *(undefined8 *)(lVar31 + 0xd1) = local_c1;
          *(undefined8 *)(lVar31 + 0xe9) = uStack_a9;
          *(undefined8 *)(lVar31 + 0xe1) = local_b1;
          *(undefined8 *)(lVar31 + 0xf9) = uStack_99;
          *(undefined8 *)(lVar31 + 0xf1) = local_a1;
          *(undefined8 *)(lVar31 + 0x99) = uStack_f9;
          *(undefined8 *)(lVar31 + 0x91) = local_101;
          *(undefined8 *)(lVar31 + 0xa9) = uStack_e9;
          *(undefined8 *)(lVar31 + 0xa1) = local_f1;
          *(undefined8 *)(lVar31 + 0xb9) = uStack_d9;
          *(undefined8 *)(lVar31 + 0xb1) = local_e1;
          *(undefined8 *)(lVar31 + 0xc9) = uStack_c9;
          *(undefined8 *)(lVar31 + 0xc1) = local_d1;
          *(undefined8 *)(lVar31 + 0x59) = uStack_139;
          *(undefined8 *)(lVar31 + 0x51) = local_141;
          *(undefined8 *)(lVar31 + 0x69) = uStack_129;
          *(undefined8 *)(lVar31 + 0x61) = local_131;
          *(undefined8 *)(lVar31 + 0x79) = uStack_119;
          *(undefined8 *)(lVar31 + 0x71) = local_121;
          *(undefined8 *)(lVar31 + 0x89) = uStack_109;
          *(undefined8 *)(lVar31 + 0x81) = local_111;
          *(undefined8 *)(lVar31 + 0x19) = uStack_179;
          *(undefined8 *)(lVar31 + 0x11) = local_181;
          *(undefined8 *)(lVar31 + 0x29) = uStack_169;
          *(undefined8 *)(lVar31 + 0x21) = local_171;
          *(undefined8 *)(lVar31 + 0x39) = uStack_159;
          *(undefined8 *)(lVar31 + 0x31) = local_161;
          *(undefined8 *)(lVar31 + 0x49) = uStack_149;
          *(undefined8 *)(lVar31 + 0x41) = local_151;
          *(undefined8 *)(lVar31 + 0x109) = uStack_89;
          *(undefined8 *)(lVar31 + 0x101) = local_91;
        } while (0x10 < lVar9);
      }
      if (lVar9 != 0) {
        puVar12 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar12 + 5) = 0xc;
        (*(code *)*puVar12)(param_1);
      }
      *puVar20 = pbVar25;
      puVar20[1] = lVar10;
      break;
    case 0xc9:
      uVar5 = 0;
      goto LAB_100540684;
    case 0xca:
      uVar5 = 1;
LAB_100540684:
      uVar6 = 0;
      uVar7 = 1;
      goto LAB_100540688;
    case 0xcc:
      plVar28 = (long *)param_1[5];
      lVar10 = plVar28[1];
      if (lVar10 == 0) {
        uVar5 = (*(code *)plVar28[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        lVar10 = plVar28[1];
      }
      puVar22 = (undefined1 *)*plVar28 + 1;
      uVar32 = *(undefined1 *)*plVar28;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        uVar5 = (*(code *)plVar28[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        puVar22 = (undefined1 *)*plVar28;
        lVar10 = plVar28[1];
      }
      pbVar25 = puVar22 + 1;
      uVar11 = (ulong)CONCAT11(uVar32,*puVar22);
      lVar10 = lVar10 + -1;
      if (uVar11 < 3) {
        lVar9 = uVar11 - 2;
      }
      else {
        do {
          if (lVar10 == 0) {
            uVar5 = (*(code *)plVar28[3])(param_1);
            if ((int)uVar5 == 0) goto LAB_1005411a0;
            pbVar25 = (byte *)*plVar28;
            lVar10 = plVar28[1];
          }
          pbVar29 = pbVar25 + 1;
          bVar1 = *pbVar25;
          lVar10 = lVar10 + -1;
          if (lVar10 == 0) {
            uVar5 = (*(code *)plVar28[3])(param_1);
            if ((int)uVar5 == 0) goto LAB_1005411a0;
            pbVar29 = (byte *)*plVar28;
            lVar10 = plVar28[1];
          }
          bVar2 = *pbVar29;
          lVar9 = *param_1;
          *(undefined4 *)(lVar9 + 0x28) = 0x51;
          *(uint *)(lVar9 + 0x2c) = (uint)bVar1;
          *(uint *)(*param_1 + 0x30) = (uint)bVar2;
          (**(code **)(*param_1 + 8))(param_1,1);
          uVar19 = (uint)bVar1;
          if (bVar1 < 0x20) {
            if (0xf < uVar19) goto LAB_100540784;
            uVar16 = bVar2 & 0xf;
            *(char *)((long)param_1 + (ulong)uVar19 + 0x144) = (char)uVar16;
            *(byte *)((long)param_1 + (ulong)uVar19 + 0x154) = bVar2 >> 4;
            if (bVar2 >> 4 < uVar16) {
              lVar9 = *param_1;
              *(undefined4 *)(lVar9 + 0x28) = 0x1e;
              *(uint *)(lVar9 + 0x2c) = (uint)bVar2;
              (**(code **)*param_1)(param_1);
            }
          }
          else {
            lVar9 = *param_1;
            *(undefined4 *)(lVar9 + 0x28) = 0x1d;
            *(uint *)(lVar9 + 0x2c) = uVar19;
            (**(code **)*param_1)(param_1);
LAB_100540784:
            *(byte *)((long)param_1 + (ulong)(uVar19 - 0x10) + 0x164) = bVar2;
          }
          pbVar25 = pbVar29 + 1;
          lVar10 = lVar10 + -1;
          uVar18 = uVar11 - 2;
          lVar9 = uVar11 - 4;
          uVar11 = uVar18;
        } while (lVar9 != 0 && 1 < (long)uVar18);
      }
      if (lVar9 != 0) {
        puVar20 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar20 + 5) = 0xc;
        (*(code *)*puVar20)(param_1);
      }
      *plVar28 = (long)pbVar25;
      plVar28[1] = lVar10;
      break;
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
      goto switchD_1005402ac_caseD_d0;
    case 0xd8:
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + 0x28) = 0x68;
      (**(code **)(lVar10 + 8))(param_1,1);
      lVar10 = param_1[0x4d];
      if (*(int *)(lVar10 + 0x18) != 0) {
        puVar20 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar20 + 5) = 0x40;
        (*(code *)*puVar20)(param_1);
        lVar10 = param_1[0x4d];
      }
      *(undefined8 *)((long)param_1 + 0x144) = 0;
      *(undefined8 *)((long)param_1 + 0x14c) = 0;
      *(undefined8 *)((long)param_1 + 0x154) = 0x101010101010101;
      *(undefined8 *)((long)param_1 + 0x15c) = 0x101010101010101;
      *(undefined8 *)((long)param_1 + 0x164) = 0x505050505050505;
      *(undefined8 *)((long)param_1 + 0x16c) = 0x505050505050505;
      *(undefined4 *)((long)param_1 + 0x3c) = 0;
      *(undefined8 *)((long)param_1 + 0x18c) = 0;
      *(undefined8 *)((long)param_1 + 0x174) = 0;
      *(undefined2 *)((long)param_1 + 0x17c) = 0x101;
      *(undefined1 *)((long)param_1 + 0x17e) = 0;
      param_1[0x30] = 0x10001;
      *(undefined1 *)(param_1 + 0x31) = 0;
      *(undefined4 *)(lVar10 + 0x18) = 1;
      break;
    case 0xd9:
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + 0x28) = 0x57;
      (**(code **)(lVar10 + 8))(param_1,1);
      *(undefined4 *)((long)param_1 + 0x23c) = 0;
      uVar5 = 2;
      goto LAB_1005411a0;
    case 0xda:
      puVar20 = (undefined8 *)param_1[5];
      puVar22 = (undefined1 *)*puVar20;
      lVar10 = puVar20[1];
      if (*(int *)(param_1[0x4d] + 0x1c) == 0) {
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x3c;
        *(undefined8 *)(lVar9 + 0x34) = 0;
        *(undefined8 *)(lVar9 + 0x2c) = 0x534f53;
        *(undefined8 *)(lVar9 + 0x44) = 0;
        *(undefined8 *)(lVar9 + 0x3c) = 0;
        *(undefined8 *)(lVar9 + 0x54) = 0;
        *(undefined8 *)(lVar9 + 0x4c) = 0;
        *(undefined8 *)(lVar9 + 100) = 0;
        *(undefined8 *)(lVar9 + 0x5c) = 0;
        *(undefined8 *)(lVar9 + 0x74) = 0;
        *(undefined8 *)(lVar9 + 0x6c) = 0;
        (**(code **)*param_1)(param_1);
      }
      if (lVar10 == 0) {
        uVar5 = (*(code *)puVar20[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        puVar22 = (undefined1 *)*puVar20;
        lVar10 = puVar20[1];
      }
      puVar23 = puVar22 + 1;
      uVar32 = *puVar22;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        uVar5 = (*(code *)puVar20[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        puVar23 = (undefined1 *)*puVar20;
        lVar10 = puVar20[1];
      }
      pbVar25 = puVar23 + 1;
      uVar3 = *puVar23;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        uVar5 = (*(code *)puVar20[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        pbVar25 = (byte *)*puVar20;
        lVar10 = puVar20[1];
      }
      bVar1 = *pbVar25;
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + 0x28) = 0x69;
      *(uint *)(lVar9 + 0x2c) = (uint)bVar1;
      (**(code **)(*param_1 + 8))(param_1,1);
      if ((CONCAT11(uVar32,uVar3) != (ushort)((ushort)bVar1 * 2 + 6) || 4 < bVar1) ||
         ((bVar1 == 0 && (*(int *)((long)param_1 + 0x13c) == 0)))) {
        puVar12 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar12 + 5) = 0xc;
        (*(code *)*puVar12)(param_1);
      }
      uVar19 = (uint)bVar1;
      *(uint *)(param_1 + 0x38) = uVar19;
      pbVar25 = pbVar25 + 1;
      lVar10 = lVar10 + -1;
      if (uVar19 == 0) goto LAB_100541484;
      uVar11 = 0;
      goto LAB_100541340;
    case 0xdb:
      plVar28 = (long *)param_1[5];
      lVar10 = plVar28[1];
      if (lVar10 == 0) {
        uVar5 = (*(code *)plVar28[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        lVar10 = plVar28[1];
      }
      puVar22 = (undefined1 *)*plVar28 + 1;
      uVar32 = *(undefined1 *)*plVar28;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        uVar5 = (*(code *)plVar28[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        puVar22 = (undefined1 *)*plVar28;
        lVar10 = plVar28[1];
      }
      lVar10 = lVar10 + -1;
      pbVar25 = puVar22 + 1;
      uVar11 = (ulong)CONCAT11(uVar32,*puVar22);
      lVar9 = uVar11 - 2;
      if (2 < uVar11) {
        do {
          lVar31 = lVar10;
          pbVar29 = pbVar25;
          if (lVar10 == 0) {
            uVar5 = (*(code *)plVar28[3])(param_1);
            if ((int)uVar5 == 0) goto LAB_1005411a0;
            pbVar29 = (byte *)*plVar28;
            lVar31 = plVar28[1];
          }
          bVar1 = *pbVar29;
          lVar10 = *param_1;
          uVar19 = (uint)((ulong)bVar1 & 0xf);
          *(undefined4 *)(lVar10 + 0x28) = 0x53;
          *(uint *)(lVar10 + 0x2c) = uVar19;
          *(uint *)(*param_1 + 0x30) = (uint)(bVar1 >> 4);
          (**(code **)(*param_1 + 8))(param_1,1);
          if (3 < uVar19) {
            lVar10 = *param_1;
            *(undefined4 *)(lVar10 + 0x28) = 0x20;
            *(uint *)(lVar10 + 0x2c) = uVar19;
            (**(code **)*param_1)(param_1);
          }
          pvVar21 = (void *)param_1[((ulong)bVar1 & 0xf) + 0x19];
          if (pvVar21 == (void *)0x0) {
            pvVar21 = (void *)FUN_100539334(param_1);
            param_1[((ulong)bVar1 & 0xf) + 0x19] = (long)pvVar21;
          }
          lVar26 = lVar9 + -1;
          if (bVar1 < 0x10) {
            if (lVar9 < 0x41) {
              _memset_pattern16(pvVar21,&DAT_10115ccf0,0x80);
              lVar9 = lVar26;
              goto LAB_1005409cc;
            }
LAB_1005409f8:
            ppuVar27 = &PTR___mh_execute_header_10115cee0;
            lVar9 = 0x40;
LAB_100540a68:
            pbVar25 = pbVar29 + 1;
            lVar10 = lVar31 + -1;
            lVar31 = 0;
            do {
              if (bVar1 < 0x10) {
                pbVar29 = pbVar25;
                if (lVar10 == 0) {
                  uVar5 = (*(code *)plVar28[3])(param_1);
                  if ((int)uVar5 == 0) goto LAB_1005411a0;
                  pbVar29 = (byte *)*plVar28;
                  lVar10 = plVar28[1];
                }
                uVar8 = (ushort)*pbVar29;
              }
              else {
                if (lVar10 == 0) {
                  uVar5 = (*(code *)plVar28[3])(param_1);
                  if ((int)uVar5 == 0) goto LAB_1005411a0;
                  pbVar25 = (byte *)*plVar28;
                  lVar10 = plVar28[1];
                }
                pbVar29 = pbVar25 + 1;
                bVar2 = *pbVar25;
                lVar10 = lVar10 + -1;
                if (lVar10 == 0) {
                  uVar5 = (*(code *)plVar28[3])(param_1);
                  if ((int)uVar5 == 0) goto LAB_1005411a0;
                  pbVar29 = (byte *)*plVar28;
                  lVar10 = plVar28[1];
                }
                uVar8 = CONCAT11(bVar2,*pbVar29);
              }
              *(ushort *)((long)pvVar21 + (long)*(int *)((long)ppuVar27 + lVar31 * 4) * 2) = uVar8;
              lVar31 = lVar31 + 1;
              pbVar25 = pbVar29 + 1;
              lVar10 = lVar10 + -1;
            } while (lVar9 != lVar31);
          }
          else {
            if (0x80 < lVar9) goto LAB_1005409f8;
            _memset_pattern16(pvVar21,&DAT_10115ccf0,0x80);
            lVar9 = lVar26 >> 1;
LAB_1005409cc:
            if (0x18 < lVar9) {
              if (lVar9 == 0x19) {
                ppuVar27 = &PTR___mh_execute_header_10115d1f4;
              }
              else if (lVar9 == 0x24) {
                ppuVar27 = &PTR___mh_execute_header_10115d124;
              }
              else {
                if (lVar9 != 0x31) goto LAB_100540b7c;
                ppuVar27 = &PTR___mh_execute_header_10115d020;
              }
              goto LAB_100540a68;
            }
            if (lVar9 == 4) {
              ppuVar27 = &PTR___mh_execute_header_10115d37c;
              goto LAB_100540a68;
            }
            if (lVar9 == 9) {
              ppuVar27 = &PTR___mh_execute_header_10115d318;
              goto LAB_100540a68;
            }
            if (lVar9 == 0x10) {
              ppuVar27 = (undefined **)&DAT_10115d298;
              goto LAB_100540a68;
            }
LAB_100540b7c:
            pbVar25 = pbVar29 + 1;
            lVar10 = lVar31 + -1;
            ppuVar27 = &PTR___mh_execute_header_10115cee0;
            if (0 < lVar9) goto LAB_100540a68;
          }
          lVar31 = *param_1;
          if (1 < *(int *)(lVar31 + 0x7c)) {
            uVar11 = 0;
            puVar20 = (undefined8 *)((long)pvVar21 + 8);
            while( true ) {
              uVar5 = puVar20[-1];
              *(ulong *)(lVar31 + 0x34) =
                   (ulong)CONCAT24((short)((ulong)uVar5 >> 0x30),
                                   (uint)(ushort)((ulong)uVar5 >> 0x20));
              *(ulong *)(lVar31 + 0x2c) =
                   (ulong)(CONCAT24((short)((ulong)uVar5 >> 0x10),(int)uVar5) & 0xffff0000ffff);
              uVar5 = *puVar20;
              *(ulong *)(lVar31 + 0x44) =
                   (ulong)CONCAT24((short)((ulong)uVar5 >> 0x30),
                                   (uint)(ushort)((ulong)uVar5 >> 0x20));
              *(ulong *)(lVar31 + 0x3c) =
                   (ulong)(CONCAT24((short)((ulong)uVar5 >> 0x10),(int)uVar5) & 0xffff0000ffff);
              *(undefined4 *)(lVar31 + 0x28) = 0x5f;
              (**(code **)(lVar31 + 8))(param_1,2);
              if (0x37 < uVar11) break;
              uVar11 = uVar11 + 8;
              lVar31 = *param_1;
              puVar20 = puVar20 + 2;
            }
          }
          lVar31 = 0;
          if (0xf < bVar1) {
            lVar31 = lVar9;
          }
          lVar9 = lVar26 - (lVar9 + lVar31);
        } while (0 < lVar9);
      }
      if (lVar9 != 0) {
        puVar20 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar20 + 5) = 0xc;
        (*(code *)*puVar20)(param_1);
      }
      *plVar28 = (long)pbVar25;
      plVar28[1] = lVar10;
      break;
    case 0xdc:
      uVar5 = FUN_100541604(param_1);
      iVar4 = (int)uVar5;
      goto joined_r0x0001005402c8;
    case 0xdd:
      puVar20 = (undefined8 *)param_1[5];
      lVar10 = puVar20[1];
      if (lVar10 == 0) {
        uVar5 = (*(code *)puVar20[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        lVar10 = puVar20[1];
      }
      puVar22 = (undefined1 *)*puVar20 + 1;
      uVar32 = *(undefined1 *)*puVar20;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        uVar5 = (*(code *)puVar20[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        puVar22 = (undefined1 *)*puVar20;
        lVar10 = puVar20[1];
      }
      lVar10 = lVar10 + -1;
      puVar23 = puVar22 + 1;
      if (CONCAT11(uVar32,*puVar22) != 4) {
        puVar12 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar12 + 5) = 0xc;
        (*(code *)*puVar12)(param_1);
      }
      if (lVar10 == 0) {
        uVar5 = (*(code *)puVar20[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        puVar23 = (undefined1 *)*puVar20;
        lVar10 = puVar20[1];
      }
      puVar22 = puVar23 + 1;
      uVar32 = *puVar23;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        uVar5 = (*(code *)puVar20[3])(param_1);
        if ((int)uVar5 == 0) goto LAB_1005411a0;
        puVar22 = (undefined1 *)*puVar20;
        lVar10 = puVar20[1];
      }
      uVar3 = *puVar22;
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + 0x28) = 0x54;
      *(uint *)(lVar9 + 0x2c) = (uint)CONCAT11(uVar32,uVar3);
      (**(code **)(*param_1 + 8))(param_1,1);
      *(uint *)((long)param_1 + 0x174) = (uint)CONCAT11(uVar32,uVar3);
      *puVar20 = puVar22 + 1;
      puVar20[1] = lVar10 + -1;
      break;
    case 0xde:
    case 0xdf:
    case 0xf0:
    case 0xf1:
    case 0xf2:
    case 0xf3:
    case 0xf4:
    case 0xf5:
    case 0xf6:
    case 0xf7:
    case 0xf9:
    case 0xfa:
    case 0xfb:
    case 0xfc:
    case 0xfd:
switchD_1005402ac_caseD_de:
      lVar10 = *param_1;
      uVar15 = 0x46;
LAB_1005402d8:
      *(undefined4 *)(lVar10 + 0x28) = uVar15;
      *(uint *)(lVar10 + 0x2c) = uVar19;
      (**(code **)*param_1)(param_1);
      break;
    case 0xe0:
    case 0xe1:
    case 0xe2:
    case 0xe3:
    case 0xe4:
    case 0xe5:
    case 0xe6:
    case 0xe7:
    case 0xe8:
    case 0xe9:
    case 0xea:
    case 0xeb:
    case 0xec:
    case 0xed:
    case 0xee:
    case 0xef:
      pcVar14 = *(code **)(param_1[0x4d] + (ulong)(uVar19 - 0xe0) * 8 + 0x30);
      goto LAB_1005402c0;
    case 0xf8:
      puVar20 = (undefined8 *)param_1[5];
      pbVar25 = (byte *)*puVar20;
      lVar10 = puVar20[1];
      if (*(int *)(param_1[0x4d] + 0x1c) == 0) {
        lVar9 = *param_1;
        *(undefined4 *)(lVar9 + 0x28) = 0x3c;
        *(undefined8 *)(lVar9 + 0x34) = 0;
        *(undefined8 *)(lVar9 + 0x2c) = 0x45534c;
        *(undefined8 *)(lVar9 + 0x44) = 0;
        *(undefined8 *)(lVar9 + 0x3c) = 0;
        *(undefined8 *)(lVar9 + 0x54) = 0;
        *(undefined8 *)(lVar9 + 0x4c) = 0;
        *(undefined8 *)(lVar9 + 100) = 0;
        *(undefined8 *)(lVar9 + 0x5c) = 0;
        *(undefined8 *)(lVar9 + 0x74) = 0;
        *(undefined8 *)(lVar9 + 0x6c) = 0;
        (**(code **)*param_1)(param_1);
      }
      if ((int)param_1[7] < 3) {
LAB_10054115c:
        puVar12 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar12 + 5) = 0x1c;
        (*(code *)*puVar12)(param_1);
      }
      else {
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar25 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        pbVar29 = pbVar25 + 1;
        bVar1 = *pbVar25;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (CONCAT11(bVar1,*pbVar29) != 0x18) {
          puVar12 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar12 + 5) = 0xc;
          (*(code *)*puVar12)(param_1);
        }
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar25 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar29 = pbVar25 + 1;
        if (*pbVar25 != 0xd) {
          lVar9 = *param_1;
          *(undefined4 *)(lVar9 + 0x28) = 0x46;
          *(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)((long)param_1 + 0x23c);
          (**(code **)*param_1)(param_1);
        }
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        pbVar30 = pbVar29 + 1;
        bVar1 = *pbVar29;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar30 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar30 + 1;
        if (CONCAT11(bVar1,*pbVar30) != 0xff) goto LAB_10054115c;
        pbVar29 = pbVar25;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (*pbVar29 != 3) goto LAB_10054115c;
        pbVar29 = pbVar25;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        puVar13 = (uint *)param_1[0x26];
        if (puVar13[0x18] != (uint)*pbVar29) goto LAB_10054115c;
        pbVar29 = pbVar25;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
          puVar13 = (uint *)param_1[0x26];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (*puVar13 != (uint)*pbVar29) goto LAB_10054115c;
        pbVar29 = pbVar25;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
          puVar13 = (uint *)param_1[0x26];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (puVar13[0x30] != (uint)*pbVar29) goto LAB_10054115c;
        pbVar29 = pbVar25;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (*pbVar29 != 0x80) goto LAB_10054115c;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar25 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        pbVar29 = pbVar25 + 1;
        bVar1 = *pbVar25;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (CONCAT11(bVar1,*pbVar29) != 0) goto LAB_10054115c;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar25 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        pbVar29 = pbVar25 + 1;
        bVar1 = *pbVar25;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (CONCAT11(bVar1,*pbVar29) != 0) goto LAB_10054115c;
        pbVar29 = pbVar25;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (*pbVar29 != 0) goto LAB_10054115c;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar25 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        pbVar29 = pbVar25 + 1;
        bVar1 = *pbVar25;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (CONCAT11(bVar1,*pbVar29) != 1) goto LAB_10054115c;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar25 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        pbVar29 = pbVar25 + 1;
        bVar1 = *pbVar25;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (CONCAT11(bVar1,*pbVar29) != 0) goto LAB_10054115c;
        pbVar29 = pbVar25;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (*pbVar29 != 0) goto LAB_10054115c;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar25 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        pbVar29 = pbVar25 + 1;
        bVar1 = *pbVar25;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (CONCAT11(bVar1,*pbVar29) != 1) goto LAB_10054115c;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar25 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        pbVar29 = pbVar25 + 1;
        bVar1 = *pbVar25;
        lVar10 = lVar10 + -1;
        if (lVar10 == 0) {
          uVar5 = (*(code *)puVar20[3])(param_1);
          if ((int)uVar5 == 0) goto LAB_1005411a0;
          pbVar29 = (byte *)*puVar20;
          lVar10 = puVar20[1];
        }
        lVar10 = lVar10 + -1;
        pbVar25 = pbVar29 + 1;
        if (CONCAT11(bVar1,*pbVar29) != 0) goto LAB_10054115c;
      }
      *(undefined4 *)((long)param_1 + 0x18c) = 1;
      *puVar20 = pbVar25;
      puVar20[1] = lVar10;
      break;
    case 0xfe:
      pcVar14 = *(code **)(param_1[0x4d] + 0x28);
LAB_1005402c0:
      uVar5 = (*pcVar14)(param_1);
      iVar4 = (int)uVar5;
      goto joined_r0x0001005402c8;
    default:
      if (uVar19 != 1) goto switchD_1005402ac_caseD_de;
switchD_1005402ac_caseD_d0:
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + 0x28) = 0x5e;
      *(uint *)(lVar10 + 0x2c) = uVar19;
      (**(code **)(*param_1 + 8))(param_1,1);
    }
    *(undefined4 *)((long)param_1 + 0x23c) = 0;
  } while( true );
code_r0x000100541374:
  uVar18 = uVar18 + 1;
  if (uVar11 == uVar18) goto LAB_1005413bc;
  goto LAB_100541364;
LAB_100541340:
  do {
    if (lVar10 == 0) {
      uVar5 = (*(code *)puVar20[3])(param_1);
      if ((int)uVar5 == 0) goto LAB_1005411a0;
      pbVar25 = (byte *)*puVar20;
      lVar10 = puVar20[1];
    }
    pbVar29 = pbVar25 + 1;
    uVar16 = (uint)*pbVar25;
    if (uVar11 != 0) {
      uVar18 = 0;
LAB_100541364:
      if (*(uint *)param_1[uVar18 + 0x39] != (uint)*pbVar25) goto code_r0x000100541374;
      iVar4 = *(int *)param_1[0x39];
      if (1 < uVar11) {
        lVar9 = 0;
        iVar17 = iVar4;
        do {
          iVar4 = *(int *)param_1[lVar9 + 0x3a];
          if (*(int *)param_1[lVar9 + 0x3a] <= iVar17) {
            iVar4 = iVar17;
          }
          lVar9 = lVar9 + 1;
          iVar17 = iVar4;
        } while (uVar11 - 1 != lVar9);
      }
      uVar16 = iVar4 + 1;
    }
LAB_1005413bc:
    lVar10 = lVar10 + -1;
    puVar24 = (uint *)param_1[0x26];
    iVar4 = (int)param_1[7];
    puVar13 = puVar24;
    if (0 < iVar4) {
      puVar13 = puVar24 + (ulong)(iVar4 - 1) * 0x18 + 0x18;
      do {
        if (uVar16 == *puVar24) goto LAB_100541414;
        puVar24 = puVar24 + 0x18;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    lVar9 = *param_1;
    *(undefined4 *)(lVar9 + 0x28) = 4;
    *(uint *)(lVar9 + 0x2c) = uVar16;
    (**(code **)*param_1)(param_1);
    puVar24 = puVar13;
LAB_100541414:
    param_1[uVar11 + 0x39] = (long)puVar24;
    if (lVar10 == 0) {
      uVar5 = (*(code *)puVar20[3])(param_1);
      if ((int)uVar5 == 0) goto LAB_1005411a0;
      pbVar29 = (byte *)*puVar20;
      lVar10 = puVar20[1];
    }
    pbVar25 = pbVar29 + 1;
    bVar2 = *pbVar29;
    puVar24[5] = (uint)(bVar2 >> 4);
    puVar24[6] = bVar2 & 0xf;
    lVar9 = *param_1;
    *(uint *)(lVar9 + 0x2c) = *puVar24;
    *(uint *)(lVar9 + 0x30) = puVar24[5];
    *(uint *)(lVar9 + 0x34) = puVar24[6];
    *(undefined4 *)(lVar9 + 0x28) = 0x6a;
    (**(code **)(lVar9 + 8))(param_1,1);
    uVar11 = uVar11 + 1;
    lVar10 = lVar10 + -1;
  } while (uVar11 != uVar19);
LAB_100541484:
  if (lVar10 == 0) {
    uVar5 = (*(code *)puVar20[3])(param_1);
    if ((int)uVar5 == 0) goto LAB_1005411a0;
    pbVar25 = (byte *)*puVar20;
    lVar10 = puVar20[1];
  }
  pbVar29 = pbVar25 + 1;
  *(uint *)((long)param_1 + 0x21c) = (uint)*pbVar25;
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) {
    uVar5 = (*(code *)puVar20[3])(param_1);
    if ((int)uVar5 == 0) goto LAB_1005411a0;
    pbVar29 = (byte *)*puVar20;
    lVar10 = puVar20[1];
  }
  pbVar25 = pbVar29 + 1;
  *(uint *)(param_1 + 0x44) = (uint)*pbVar29;
  lVar10 = lVar10 + -1;
  if (lVar10 == 0) {
    uVar5 = (*(code *)puVar20[3])(param_1);
    if ((int)uVar5 == 0) goto LAB_1005411a0;
    pbVar25 = (byte *)*puVar20;
    lVar10 = puVar20[1];
  }
  bVar2 = *pbVar25;
  *(uint *)((long)param_1 + 0x224) = (uint)(bVar2 >> 4);
  *(uint *)(param_1 + 0x45) = bVar2 & 0xf;
  lVar9 = *param_1;
  *(undefined4 *)(lVar9 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
  *(int *)(lVar9 + 0x30) = (int)param_1[0x44];
  *(undefined4 *)(lVar9 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
  *(int *)(lVar9 + 0x38) = (int)param_1[0x45];
  *(undefined4 *)(lVar9 + 0x28) = 0x6b;
  (**(code **)(lVar9 + 8))(param_1,1);
  *(undefined4 *)(param_1[0x4d] + 0x20) = 0;
  if (bVar1 != 0) {
    *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
  }
  *puVar20 = pbVar25 + 1;
  puVar20[1] = lVar10 + -1;
  uVar5 = 1;
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
LAB_1005411a0:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}




undefined8 FUN_100541568(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = *(int *)((long)param_1 + 0x23c);
  if (iVar3 == 0) {
    uVar2 = FUN_10053ffa8(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    iVar3 = *(int *)((long)param_1 + 0x23c);
  }
  iVar1 = *(int *)(param_1[0x4d] + 0x20);
  if (iVar3 == iVar1 + 0xd0) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 100;
    *(int *)(lVar4 + 0x2c) = iVar1;
    (**(code **)(*param_1 + 8))(param_1,3);
    *(undefined4 *)((long)param_1 + 0x23c) = 0;
  }
  else {
    uVar2 = (**(code **)(param_1[5] + 0x28))(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  *(uint *)(param_1[0x4d] + 0x20) = *(int *)(param_1[0x4d] + 0x20) + 1U & 7;
  return 1;
}




undefined8 FUN_100541604(long *param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 *puVar9;
  ulong uVar10;
  
  puVar8 = (undefined8 *)param_1[5];
  lVar4 = puVar8[1];
  if (lVar4 == 0) {
    iVar3 = (*(code *)puVar8[3])(param_1);
    if (iVar3 != 0) {
      lVar4 = puVar8[1];
      goto LAB_100541640;
    }
LAB_1005416d0:
    uVar7 = 0;
  }
  else {
LAB_100541640:
    puVar9 = (undefined1 *)*puVar8 + 1;
    uVar2 = *(undefined1 *)*puVar8;
    lVar4 = lVar4 + -1;
    if (lVar4 == 0) {
      iVar3 = (*(code *)puVar8[3])(param_1);
      if (iVar3 == 0) goto LAB_1005416d0;
      puVar9 = (undefined1 *)*puVar8;
      lVar4 = puVar8[1];
    }
    uVar10 = (ulong)CONCAT11(uVar2,*puVar9);
    lVar6 = uVar10 - 2;
    lVar5 = *param_1;
    uVar1 = *(undefined4 *)((long)param_1 + 0x23c);
    *(undefined4 *)(lVar5 + 0x28) = 0x5d;
    *(undefined4 *)(lVar5 + 0x2c) = uVar1;
    *(int *)(*param_1 + 0x30) = (int)lVar6;
    uVar7 = 1;
    (**(code **)(*param_1 + 8))(param_1,1);
    *puVar8 = puVar9 + 1;
    puVar8[1] = lVar4 + -1;
    if (2 < uVar10) {
      (**(code **)(param_1[5] + 0x20))(param_1,lVar6);
      uVar7 = 1;
    }
  }
  return uVar7;
}




void FUN_1005416f0(long *param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulong uVar14;
  undefined1 auStack_76 [14];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  puVar10 = (undefined8 *)param_1[5];
  lVar5 = puVar10[1];
  if (lVar5 == 0) {
    uVar4 = (*(code *)puVar10[3])(param_1);
    if ((int)uVar4 == 0) goto LAB_100541858;
    lVar5 = puVar10[1];
  }
  puVar11 = (undefined1 *)*puVar10 + 1;
  uVar3 = *(undefined1 *)*puVar10;
  lVar5 = lVar5 + -1;
  if (lVar5 == 0) {
    uVar4 = (*(code *)puVar10[3])(param_1);
    if ((int)uVar4 == 0) goto LAB_100541858;
    puVar11 = (undefined1 *)*puVar10;
    lVar5 = puVar10[1];
  }
  puVar12 = puVar11 + 1;
  uVar6 = (ulong)CONCAT11(uVar3,*puVar11);
  lVar9 = uVar6 - 2;
  uVar8 = (uint)lVar9;
  if (uVar6 < 2 || lVar9 == 0) {
    uVar8 = 0;
  }
  uVar1 = 0xe;
  if (uVar6 < 0x10) {
    uVar1 = uVar8;
  }
  lVar5 = lVar5 + -1;
  if (uVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (ulong)uVar1;
    puVar11 = puVar12;
    puVar13 = auStack_76;
    uVar14 = uVar6;
    do {
      if (lVar5 == 0) {
        uVar4 = (*(code *)puVar10[3])(param_1);
        if ((int)uVar4 == 0) goto LAB_100541858;
        puVar11 = (undefined1 *)*puVar10;
        lVar5 = puVar10[1];
      }
      puVar12 = puVar11 + 1;
      *puVar13 = *puVar11;
      lVar5 = lVar5 + -1;
      uVar14 = uVar14 - 1;
      puVar11 = puVar12;
      puVar13 = puVar13 + 1;
    } while (uVar14 != 0);
  }
  lVar9 = lVar9 - uVar6;
  iVar2 = *(int *)((long)param_1 + 0x23c);
  if (iVar2 == 0xee) {
    FUN_100541e9c(param_1,auStack_76,uVar1,lVar9);
  }
  else if (iVar2 == 0xe0) {
    FUN_100541c44(param_1,auStack_76,uVar1,lVar9);
  }
  else {
    lVar7 = *param_1;
    *(undefined4 *)(lVar7 + 0x28) = 0x46;
    *(int *)(lVar7 + 0x2c) = iVar2;
    (**(code **)*param_1)(param_1);
  }
  *puVar10 = puVar12;
  puVar10[1] = lVar5;
  if (0 < lVar9) {
    (**(code **)(param_1[5] + 0x20))(param_1,lVar9);
  }
  uVar4 = 1;
LAB_100541858:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar4);
  }
  return;
}




void FUN_100541894(long *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  undefined1 *puVar14;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint *puVar19;
  undefined1 *puVar15;
  
  plVar12 = (long *)param_1[5];
  puVar15 = (undefined1 *)*plVar12;
  lVar8 = plVar12[1];
  *(undefined4 *)(param_1 + 0x27) = param_2;
  *(undefined4 *)((long)param_1 + 0x13c) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  if (lVar8 == 0) {
    iVar4 = (*(code *)plVar12[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    puVar15 = (undefined1 *)*plVar12;
    lVar8 = plVar12[1];
  }
  puVar14 = puVar15 + 1;
  uVar1 = *puVar15;
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) {
    iVar4 = (*(code *)plVar12[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    puVar14 = (undefined1 *)*plVar12;
    lVar8 = plVar12[1];
  }
  pbVar16 = puVar14 + 1;
  uVar2 = *puVar14;
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) {
    iVar4 = (*(code *)plVar12[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar16 = (byte *)*plVar12;
    lVar8 = plVar12[1];
  }
  pbVar17 = pbVar16 + 1;
  *(uint *)(param_1 + 0x25) = (uint)*pbVar16;
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) {
    iVar4 = (*(code *)plVar12[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar17 = (byte *)*plVar12;
    lVar8 = plVar12[1];
  }
  pbVar16 = pbVar17 + 1;
  iVar4 = (uint)*pbVar17 << 8;
  *(int *)((long)param_1 + 0x34) = iVar4;
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) {
    iVar4 = (*(code *)plVar12[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar16 = (byte *)*plVar12;
    lVar8 = plVar12[1];
    iVar4 = *(int *)((long)param_1 + 0x34);
  }
  pbVar17 = pbVar16 + 1;
  *(uint *)((long)param_1 + 0x34) = iVar4 + (uint)*pbVar16;
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) {
    iVar4 = (*(code *)plVar12[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar17 = (byte *)*plVar12;
    lVar8 = plVar12[1];
  }
  pbVar16 = pbVar17 + 1;
  iVar4 = (uint)*pbVar17 << 8;
  *(int *)(param_1 + 6) = iVar4;
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) {
    iVar4 = (*(code *)plVar12[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar16 = (byte *)*plVar12;
    lVar8 = plVar12[1];
    iVar4 = (int)param_1[6];
  }
  pbVar17 = pbVar16 + 1;
  *(uint *)(param_1 + 6) = iVar4 + (uint)*pbVar16;
  lVar8 = lVar8 + -1;
  if (lVar8 == 0) {
    iVar4 = (*(code *)plVar12[3])(param_1);
    if (iVar4 == 0) {
      return;
    }
    pbVar17 = (byte *)*plVar12;
    lVar8 = plVar12[1];
  }
  *(uint *)(param_1 + 7) = (uint)*pbVar17;
  lVar6 = *param_1;
  *(undefined4 *)(lVar6 + 0x2c) = *(undefined4 *)((long)param_1 + 0x23c);
  *(int *)(lVar6 + 0x30) = (int)param_1[6];
  *(undefined4 *)(lVar6 + 0x34) = *(undefined4 *)((long)param_1 + 0x34);
  *(int *)(lVar6 + 0x38) = (int)param_1[7];
  *(undefined4 *)(lVar6 + 0x28) = 0x66;
  (**(code **)(lVar6 + 8))(param_1,1);
  if (*(int *)(param_1[0x4d] + 0x1c) != 0) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x3d;
    (*(code *)*puVar7)(param_1);
  }
  if (((*(int *)((long)param_1 + 0x34) == 0) || ((int)param_1[6] == 0)) ||
     (iVar4 = (int)param_1[7], iVar4 < 1)) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0x21;
    (*(code *)*puVar7)(param_1);
    iVar4 = (int)param_1[7];
  }
  if ((ulong)CONCAT11(uVar1,uVar2) - 8 != (long)(iVar4 * 3)) {
    puVar7 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar7 + 5) = 0xc;
    (*(code *)*puVar7)(param_1);
  }
  if (param_1[0x26] == 0) {
    lVar6 = (**(code **)param_1[1])(param_1,1,(long)(int)param_1[7] * 0x60);
    param_1[0x26] = lVar6;
  }
  pbVar17 = pbVar17 + 1;
  lVar8 = lVar8 + -1;
  if (0 < (int)param_1[7]) {
    uVar13 = 0;
    iVar4 = -1;
    do {
      if (lVar8 == 0) {
        iVar5 = (*(code *)plVar12[3])(param_1);
        if (iVar5 == 0) {
          return;
        }
        pbVar17 = (byte *)*plVar12;
        lVar8 = plVar12[1];
      }
      lVar8 = lVar8 + -1;
      pbVar16 = pbVar17 + 1;
      uVar9 = (uint)*pbVar17;
      puVar19 = (uint *)param_1[0x26];
      puVar10 = puVar19;
      uVar11 = uVar13;
      if (uVar13 != 0) {
LAB_100541b34:
        if (*puVar10 != (uint)*pbVar17) goto code_r0x000100541b40;
        puVar10 = puVar19 + 0x18;
        uVar9 = *puVar19;
        puVar19 = puVar10;
        uVar11 = uVar9;
        iVar5 = iVar4;
        if (1 < uVar13) {
          do {
            puVar10 = puVar19 + 0x18;
            uVar9 = *puVar19;
            if ((int)*puVar19 <= (int)uVar11) {
              uVar9 = uVar11;
            }
            iVar5 = iVar5 + -1;
            puVar19 = puVar10;
            uVar11 = uVar9;
          } while (iVar5 != 0);
        }
        uVar9 = uVar9 + 1;
      }
LAB_100541b7c:
      *puVar10 = uVar9;
      puVar10[1] = uVar13;
      if (lVar8 == 0) {
        iVar5 = (*(code *)plVar12[3])(param_1);
        if (iVar5 == 0) {
          return;
        }
        pbVar16 = (byte *)*plVar12;
        lVar8 = plVar12[1];
      }
      pbVar18 = pbVar16 + 1;
      bVar3 = *pbVar16;
      puVar10[2] = (uint)(bVar3 >> 4);
      puVar10[3] = bVar3 & 0xf;
      lVar8 = lVar8 + -1;
      if (lVar8 == 0) {
        iVar5 = (*(code *)plVar12[3])(param_1);
        if (iVar5 == 0) {
          return;
        }
        pbVar18 = (byte *)*plVar12;
        lVar8 = plVar12[1];
      }
      pbVar17 = pbVar18 + 1;
      puVar10[4] = (uint)*pbVar18;
      lVar6 = *param_1;
      *(uint *)(lVar6 + 0x2c) = *puVar10;
      *(uint *)(lVar6 + 0x30) = puVar10[2];
      *(uint *)(lVar6 + 0x34) = puVar10[3];
      *(uint *)(lVar6 + 0x38) = puVar10[4];
      *(undefined4 *)(lVar6 + 0x28) = 0x67;
      (**(code **)(lVar6 + 8))(param_1,1);
      uVar13 = uVar13 + 1;
      lVar8 = lVar8 + -1;
      iVar4 = iVar4 + 1;
    } while ((int)uVar13 < (int)param_1[7]);
  }
  *(undefined4 *)(param_1[0x4d] + 0x1c) = 1;
  *plVar12 = (long)pbVar17;
  plVar12[1] = lVar8;
  return;
code_r0x000100541b40:
  puVar10 = puVar10 + 0x18;
  uVar11 = uVar11 - 1;
  if (uVar11 == 0) goto LAB_100541b7c;
  goto LAB_100541b34;
}




void FUN_100541c44(long *param_1,char *param_2,uint param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  uVar11 = (undefined4)(param_4 + (ulong)param_3);
  if (param_3 < 0xe) {
    if ((5 < param_3) && (*param_2 == 'J')) goto LAB_100541dd4;
LAB_100541e00:
    lVar6 = *param_1;
    uVar8 = 0x4f;
  }
  else {
    if (*param_2 != 'J') goto LAB_100541e00;
    if ((((param_2[1] == 'F') && (param_2[2] == 'I')) && (param_2[3] == 'F')) &&
       (param_2[4] == '\0')) {
      uVar5 = 1;
      *(undefined4 *)(param_1 + 0x2f) = 1;
      bVar1 = param_2[5];
      *(byte *)((long)param_1 + 0x17c) = bVar1;
      bVar2 = param_2[6];
      *(byte *)((long)param_1 + 0x17d) = bVar2;
      bVar3 = param_2[7];
      *(byte *)((long)param_1 + 0x17e) = bVar3;
      uVar9 = (uint)(*(ushort *)(param_2 + 8) >> 8) | (*(ushort *)(param_2 + 8) & 0xff00ff) << 8;
      *(short *)(param_1 + 0x30) = (short)uVar9;
      uVar10 = (uint)(*(ushort *)(param_2 + 10) >> 8) | (*(ushort *)(param_2 + 10) & 0xff00ff) << 8;
      *(short *)((long)param_1 + 0x182) = (short)uVar10;
      if (bVar1 != 1) {
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x7a;
        *(uint *)(lVar6 + 0x2c) = (uint)bVar1;
        *(uint *)(*param_1 + 0x30) = (uint)*(byte *)((long)param_1 + 0x17d);
        (**(code **)(*param_1 + 8))(param_1,0xffffffff);
        uVar5 = (uint)*(byte *)((long)param_1 + 0x17c);
        bVar2 = *(byte *)((long)param_1 + 0x17d);
        uVar9 = (uint)*(ushort *)(param_1 + 0x30);
        uVar10 = (uint)*(ushort *)((long)param_1 + 0x182);
        bVar3 = *(byte *)((long)param_1 + 0x17e);
      }
      lVar6 = *param_1;
      *(uint *)(lVar6 + 0x30) = (uint)bVar2;
      *(uint *)(lVar6 + 0x34) = uVar9;
      *(uint *)(lVar6 + 0x38) = uVar10;
      *(uint *)(lVar6 + 0x3c) = (uint)bVar3;
      *(undefined4 *)(lVar6 + 0x28) = 0x59;
      *(uint *)(lVar6 + 0x2c) = uVar5;
      (**(code **)(lVar6 + 8))(param_1,1);
      bVar1 = param_2[0xc];
      bVar2 = param_2[0xd];
      if (bVar2 != 0 || bVar1 != 0) {
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x5c;
        *(uint *)(lVar6 + 0x2c) = (uint)(byte)param_2[0xc];
        *(uint *)(*param_1 + 0x30) = (uint)(byte)param_2[0xd];
        (**(code **)(*param_1 + 8))(param_1,1);
        bVar1 = param_2[0xc];
        bVar2 = param_2[0xd];
      }
      lVar6 = param_4 + (ulong)param_3 + -0xe;
      if (lVar6 == (ulong)bVar1 * (ulong)bVar2 * 2 + (ulong)bVar1 * (ulong)bVar2) {
        return;
      }
      lVar7 = *param_1;
      *(undefined4 *)(lVar7 + 0x28) = 0x5a;
      *(int *)(lVar7 + 0x2c) = (int)lVar6;
      goto LAB_100541e0c;
    }
LAB_100541dd4:
    if (((param_2[1] != 'F') || (param_2[2] != 'X')) ||
       ((param_2[3] != 'X' || (param_2[4] != '\0')))) goto LAB_100541e00;
    cVar4 = param_2[5];
    if (cVar4 == '\x13') {
      lVar6 = *param_1;
      uVar8 = 0x70;
    }
    else if (cVar4 == '\x11') {
      lVar6 = *param_1;
      uVar8 = 0x6f;
    }
    else {
      if (cVar4 != '\x10') {
        lVar6 = *param_1;
        *(undefined4 *)(lVar6 + 0x28) = 0x5b;
        *(uint *)(lVar6 + 0x2c) = (uint)(byte)param_2[5];
        *(undefined4 *)(*param_1 + 0x30) = uVar11;
        goto LAB_100541e0c;
      }
      lVar6 = *param_1;
      uVar8 = 0x6e;
    }
  }
  *(undefined4 *)(lVar6 + 0x28) = uVar8;
  *(undefined4 *)(lVar6 + 0x2c) = uVar11;
LAB_100541e0c:
                    /* WARNING: Could not recover jumptable at 0x000100541e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}




void FUN_100541e9c(long *param_1,char *param_2,uint param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  long lVar4;
  
  if ((((0xb < param_3) && (*param_2 == 'A')) && (param_2[1] == 'd')) &&
     (((param_2[2] == 'o' && (param_2[3] == 'b')) && (param_2[4] == 'e')))) {
    uVar2 = *(ushort *)(param_2 + 5);
    uVar3 = *(ushort *)(param_2 + 9);
    bVar1 = param_2[0xb];
    lVar4 = *param_1;
    *(uint *)(lVar4 + 0x30) =
         (((*(ushort *)(param_2 + 7) & 0xff00) << 0x10) >> 8 |
         (uint)*(ushort *)(param_2 + 7) << 0x18) >> 0x10;
    *(uint *)(lVar4 + 0x34) = (((uVar3 & 0xff00) << 0x10) >> 8 | (uint)uVar3 << 0x18) >> 0x10;
    *(uint *)(lVar4 + 0x38) = (uint)bVar1;
    *(undefined4 *)(lVar4 + 0x28) = 0x4e;
    *(uint *)(lVar4 + 0x2c) = (((uVar2 & 0xff00) << 0x10) >> 8 | (uint)uVar2 << 0x18) >> 0x10;
    (**(code **)(lVar4 + 8))(param_1,1);
    *(undefined4 *)((long)param_1 + 0x184) = 1;
    *(byte *)(param_1 + 0x31) = bVar1;
    return;
  }
  lVar4 = *param_1;
  *(undefined4 *)(lVar4 + 0x28) = 0x50;
  *(uint *)(lVar4 + 0x2c) = param_4 + param_3;
                    /* WARNING: Could not recover jumptable at 0x000100541f88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,1);
  return;
}




void FUN_100541f8c(long *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  
  iVar8 = *(int *)((long)param_1 + 0x24);
  if (iVar8 != 0xca) {
    lVar10 = *param_1;
    *(undefined4 *)(lVar10 + 0x28) = 0x15;
    *(int *)(lVar10 + 0x2c) = iVar8;
    (**(code **)*param_1)(param_1);
  }
  FUN_10053eb6c(param_1);
  iVar8 = (int)param_1[7];
  if (0 < iVar8) {
    iVar11 = 0;
    lVar10 = param_1[0x26];
    iVar1 = (int)param_1[0x35];
    iVar12 = 4;
    if (*(int *)((long)param_1 + 100) != 0) {
      iVar12 = 8;
    }
    iVar2 = *(int *)((long)param_1 + 0x1ac);
    lVar13 = lVar10;
    do {
      iVar14 = iVar1;
      if (iVar1 <= iVar12) {
        iVar15 = (int)param_1[0x34];
        iVar6 = *(int *)(lVar13 + 8) * 2;
        iVar9 = 0;
        if (iVar6 != 0) {
          iVar9 = iVar15 / iVar6;
        }
        if (iVar15 == iVar9 * iVar6) {
          iVar6 = 2;
          do {
            iVar14 = iVar1 * iVar6;
            if (iVar12 < iVar14) break;
            iVar6 = iVar6 * 2;
            iVar9 = iVar6 * *(int *)(lVar13 + 8);
            iVar3 = 0;
            if (iVar9 != 0) {
              iVar3 = iVar15 / iVar9;
            }
          } while (iVar15 == iVar3 * iVar9);
        }
      }
      *(int *)(lVar13 + 0x24) = iVar14;
      iVar15 = iVar2;
      if (iVar2 <= iVar12) {
        iVar6 = *(int *)((long)param_1 + 0x1a4);
        iVar9 = *(int *)(lVar13 + 0xc) * 2;
        iVar3 = 0;
        if (iVar9 != 0) {
          iVar3 = iVar6 / iVar9;
        }
        if (iVar6 == iVar3 * iVar9) {
          iVar9 = 2;
          do {
            iVar15 = iVar2 * iVar9;
            if (iVar12 < iVar15) break;
            iVar9 = iVar9 * 2;
            iVar3 = iVar9 * *(int *)(lVar13 + 0xc);
            iVar4 = 0;
            if (iVar3 != 0) {
              iVar4 = iVar6 / iVar3;
            }
          } while (iVar6 == iVar4 * iVar3);
        }
      }
      *(int *)(lVar13 + 0x28) = iVar15;
      if (iVar15 * 2 < iVar14) {
        *(int *)(lVar13 + 0x24) = iVar15 << 1;
      }
      else if (iVar14 * 2 < iVar15) {
        *(int *)(lVar13 + 0x28) = iVar14 << 1;
      }
      iVar11 = iVar11 + 1;
      lVar13 = lVar13 + 0x60;
    } while (iVar11 != iVar8);
    iVar11 = 0;
    puVar16 = (undefined4 *)(lVar10 + 0x30);
    do {
      uVar7 = FUN_10054d2ec((long)(int)puVar16[-3] * (long)(int)puVar16[-10] *
                            (ulong)*(uint *)(param_1 + 6),
                            (long)*(int *)((long)param_1 + 0x22c) * (long)(int)param_1[0x34]);
      puVar16[-1] = uVar7;
      uVar7 = FUN_10054d2ec((long)(int)puVar16[-2] * (long)(int)puVar16[-9] *
                            (ulong)*(uint *)((long)param_1 + 0x34),
                            (long)*(int *)((long)param_1 + 0x22c) *
                            (long)*(int *)((long)param_1 + 0x1a4));
      *puVar16 = uVar7;
      iVar11 = iVar11 + 1;
      iVar8 = (int)param_1[7];
      puVar16 = puVar16 + 0x18;
    } while (iVar11 < iVar8);
  }
  uVar5 = (int)param_1[8] - 1;
  if (uVar5 < 5) {
    iVar8 = *(int *)(&DAT_10115cd10 + (long)(int)uVar5 * 4);
  }
  iVar11 = iVar8;
  if (*(int *)((long)param_1 + 0x6c) != 0) {
    iVar11 = 1;
  }
  *(int *)(param_1 + 0x12) = iVar8;
  *(int *)((long)param_1 + 0x94) = iVar11;
  iVar8 = FUN_100542198(param_1);
  if (iVar8 == 0) {
    uVar7 = 1;
  }
  else {
    uVar7 = *(undefined4 *)((long)param_1 + 0x1a4);
  }
  *(undefined4 *)(param_1 + 0x13) = uVar7;
  return;
}




bool FUN_100542198(long param_1)

{
  int iVar1;
  long lVar2;
  
  if (((((((*(int *)(param_1 + 100) == 0) && (*(int *)(param_1 + 400) == 0)) &&
         (*(int *)(param_1 + 0x3c) == 3)) &&
        ((*(int *)(param_1 + 0x38) == 3 && (*(int *)(param_1 + 0x40) == 2)))) &&
       ((*(int *)(param_1 + 0x90) == 3 &&
        ((lVar2 = *(long *)(param_1 + 0x130), *(int *)(lVar2 + 8) == 2 &&
         (*(int *)(lVar2 + 0x68) == 1)))))) && (*(int *)(lVar2 + 200) == 1)) &&
     ((((*(int *)(lVar2 + 0xc) < 3 && (*(int *)(lVar2 + 0x6c) == 1)) &&
       (*(int *)(lVar2 + 0xcc) == 1)) &&
      (((iVar1 = *(int *)(lVar2 + 0x24), iVar1 == *(int *)(param_1 + 0x1a8) &&
        (*(int *)(lVar2 + 0x84) == iVar1)) &&
       ((*(int *)(lVar2 + 0xe4) == iVar1 &&
        ((iVar1 = *(int *)(lVar2 + 0x28), iVar1 == *(int *)(param_1 + 0x1ac) &&
         (*(int *)(lVar2 + 0x88) == iVar1)))))))))) {
    return *(int *)(lVar2 + 0xe8) == iVar1;
  }
  return false;
}




void FUN_100542280(long *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  puVar5 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x30);
  param_1[0x48] = (long)puVar5;
  *puVar5 = FUN_100542638;
  puVar5[1] = FUN_1005427f8;
  *(undefined4 *)(puVar5 + 2) = 0;
  FUN_100541f8c(param_1);
  puVar6 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x580);
  lVar7 = 0;
  uVar10 = 0xf0e0d0c0b0a0908;
  uVar9 = 0x706050403020100;
  param_1[0x37] = (long)(puVar6 + 0x20);
  puVar6[1] = 0;
  *puVar6 = 0;
  puVar6[3] = 0;
  puVar6[2] = 0;
  puVar6[5] = 0;
  puVar6[4] = 0;
  puVar6[7] = 0;
  puVar6[6] = 0;
  puVar6[9] = 0;
  puVar6[8] = 0;
  puVar6[0xb] = 0;
  puVar6[10] = 0;
  puVar6[0xd] = 0;
  puVar6[0xc] = 0;
  puVar6[0xf] = 0;
  puVar6[0xe] = 0;
  puVar6[0x11] = 0;
  puVar6[0x10] = 0;
  puVar6[0x13] = 0;
  puVar6[0x12] = 0;
  puVar6[0x15] = 0;
  puVar6[0x14] = 0;
  puVar6[0x17] = 0;
  puVar6[0x16] = 0;
  puVar6[0x19] = 0;
  puVar6[0x18] = 0;
  puVar6[0x1b] = 0;
  puVar6[0x1a] = 0;
  puVar6[0x1d] = 0;
  puVar6[0x1c] = 0;
  puVar6[0x1f] = 0;
  puVar6[0x1e] = 0;
  do {
    puVar8 = (undefined8 *)((long)(puVar6 + 0x20) + lVar7);
    puVar8[1] = uVar10;
    *puVar8 = uVar9;
    lVar7 = lVar7 + 0x10;
    uVar9 = CONCAT17((char)((ulong)uVar9 >> 0x38) + '\x10',
                     CONCAT16((char)((ulong)uVar9 >> 0x30) + '\x10',
                              CONCAT15((char)((ulong)uVar9 >> 0x28) + '\x10',
                                       CONCAT14((char)((ulong)uVar9 >> 0x20) + '\x10',
                                                CONCAT13((char)((ulong)uVar9 >> 0x18) + '\x10',
                                                         CONCAT12((char)((ulong)uVar9 >> 0x10) +
                                                                  '\x10',CONCAT11((char)((ulong)
                                                  uVar9 >> 8) + '\x10',(char)uVar9 + '\x10')))))));
    uVar10 = CONCAT17((char)((ulong)uVar10 >> 0x38) + '\x10',
                      CONCAT16((char)((ulong)uVar10 >> 0x30) + '\x10',
                               CONCAT15((char)((ulong)uVar10 >> 0x28) + '\x10',
                                        CONCAT14((char)((ulong)uVar10 >> 0x20) + '\x10',
                                                 CONCAT13((char)((ulong)uVar10 >> 0x18) + '\x10',
                                                          CONCAT12((char)((ulong)uVar10 >> 0x10) +
                                                                   '\x10',CONCAT11((char)((ulong)
                                                  uVar10 >> 8) + '\x10',(char)uVar10 + '\x10')))))))
    ;
  } while (lVar7 != 0x100);
  puVar6[0x6d] = 0xffffffffffffffff;
  puVar6[0x6c] = 0xffffffffffffffff;
  puVar6[0x6f] = 0xffffffffffffffff;
  puVar6[0x6e] = 0xffffffffffffffff;
  puVar6[0x69] = 0xffffffffffffffff;
  puVar6[0x68] = 0xffffffffffffffff;
  puVar6[0x6b] = 0xffffffffffffffff;
  puVar6[0x6a] = 0xffffffffffffffff;
  puVar6[0x65] = 0xffffffffffffffff;
  puVar6[100] = 0xffffffffffffffff;
  puVar6[0x67] = 0xffffffffffffffff;
  puVar6[0x66] = 0xffffffffffffffff;
  puVar6[0x61] = 0xffffffffffffffff;
  puVar6[0x60] = 0xffffffffffffffff;
  puVar6[99] = 0xffffffffffffffff;
  puVar6[0x62] = 0xffffffffffffffff;
  puVar6[0x5d] = 0xffffffffffffffff;
  puVar6[0x5c] = 0xffffffffffffffff;
  puVar6[0x5f] = 0xffffffffffffffff;
  puVar6[0x5e] = 0xffffffffffffffff;
  puVar6[0x59] = 0xffffffffffffffff;
  puVar6[0x58] = 0xffffffffffffffff;
  puVar6[0x5b] = 0xffffffffffffffff;
  puVar6[0x5a] = 0xffffffffffffffff;
  puVar6[0x55] = 0xffffffffffffffff;
  puVar6[0x54] = 0xffffffffffffffff;
  puVar6[0x57] = 0xffffffffffffffff;
  puVar6[0x56] = 0xffffffffffffffff;
  puVar6[0x51] = 0xffffffffffffffff;
  puVar6[0x50] = 0xffffffffffffffff;
  puVar6[0x53] = 0xffffffffffffffff;
  puVar6[0x52] = 0xffffffffffffffff;
  puVar6[0x4d] = 0xffffffffffffffff;
  puVar6[0x4c] = 0xffffffffffffffff;
  puVar6[0x4f] = 0xffffffffffffffff;
  puVar6[0x4e] = 0xffffffffffffffff;
  puVar6[0x49] = 0xffffffffffffffff;
  puVar6[0x48] = 0xffffffffffffffff;
  puVar6[0x4b] = 0xffffffffffffffff;
  puVar6[0x4a] = 0xffffffffffffffff;
  puVar6[0x45] = 0xffffffffffffffff;
  puVar6[0x44] = 0xffffffffffffffff;
  puVar6[0x47] = 0xffffffffffffffff;
  puVar6[0x46] = 0xffffffffffffffff;
  puVar6[0x41] = 0xffffffffffffffff;
  puVar6[0x40] = 0xffffffffffffffff;
  puVar6[0x43] = 0xffffffffffffffff;
  puVar6[0x42] = 0xffffffffffffffff;
  puVar6[0x9f] = 0;
  puVar6[0x9e] = 0;
  puVar6[0x9d] = 0;
  puVar6[0x9c] = 0;
  puVar6[0x9b] = 0;
  puVar6[0x9a] = 0;
  puVar6[0x99] = 0;
  puVar6[0x98] = 0;
  puVar6[0x97] = 0;
  puVar6[0x96] = 0;
  puVar6[0x95] = 0;
  puVar6[0x94] = 0;
  puVar6[0x93] = 0;
  puVar6[0x92] = 0;
  puVar6[0x91] = 0;
  puVar6[0x90] = 0;
  puVar6[0x8f] = 0;
  puVar6[0x8e] = 0;
  puVar6[0x8d] = 0;
  puVar6[0x8c] = 0;
  puVar6[0x8b] = 0;
  puVar6[0x8a] = 0;
  puVar6[0x89] = 0;
  puVar6[0x88] = 0;
  puVar6[0x87] = 0;
  puVar6[0x86] = 0;
  puVar6[0x85] = 0;
  puVar6[0x84] = 0;
  puVar6[0x83] = 0;
  puVar6[0x82] = 0;
  puVar6[0x7f] = 0;
  puVar6[0x7e] = 0;
  puVar6[0x81] = 0;
  puVar6[0x80] = 0;
  puVar6[0x7b] = 0;
  puVar6[0x7a] = 0;
  puVar6[0x7d] = 0;
  puVar6[0x7c] = 0;
  puVar6[0x77] = 0;
  puVar6[0x76] = 0;
  puVar6[0x79] = 0;
  puVar6[0x78] = 0;
  puVar6[0x73] = 0;
  puVar6[0x72] = 0;
  puVar6[0x75] = 0;
  puVar6[0x74] = 0;
  puVar6[0x71] = 0;
  puVar6[0x70] = 0;
  puVar8 = (undefined8 *)param_1[0x37];
  uVar10 = puVar8[1];
  uVar9 = *puVar8;
  uVar12 = puVar8[3];
  uVar11 = puVar8[2];
  uVar14 = puVar8[5];
  uVar13 = puVar8[4];
  uVar15 = puVar8[6];
  puVar6[0xa7] = puVar8[7];
  puVar6[0xa6] = uVar15;
  puVar6[0xa5] = uVar14;
  puVar6[0xa4] = uVar13;
  puVar6[0xa3] = uVar12;
  puVar6[0xa2] = uVar11;
  puVar6[0xa1] = uVar10;
  puVar6[0xa0] = uVar9;
  uVar10 = puVar8[9];
  uVar9 = puVar8[8];
  uVar12 = puVar8[0xb];
  uVar11 = puVar8[10];
  uVar14 = puVar8[0xd];
  uVar13 = puVar8[0xc];
  uVar15 = puVar8[0xe];
  puVar6[0xaf] = puVar8[0xf];
  puVar6[0xae] = uVar15;
  puVar6[0xad] = uVar14;
  puVar6[0xac] = uVar13;
  puVar6[0xab] = uVar12;
  puVar6[0xaa] = uVar11;
  puVar6[0xa9] = uVar10;
  puVar6[0xa8] = uVar9;
  if ((long)(int)param_1[0x12] * (ulong)*(uint *)(param_1 + 0x11) >> 0x20 != 0) {
    puVar6 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar6 + 5) = 0x48;
    (*(code *)*puVar6)(param_1);
  }
  *(undefined4 *)(puVar5 + 3) = 0;
  uVar4 = FUN_100542198(param_1);
  puVar5[4] = 0;
  *(undefined4 *)((long)puVar5 + 0x1c) = uVar4;
  puVar5[5] = 0;
  if (*(int *)((long)param_1 + 0x6c) == 0) {
    param_1[0x10] = 0;
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
  }
  else {
    if ((int)param_1[0xb] == 0) {
      param_1[0x10] = 0;
      *(undefined4 *)((long)param_1 + 0x7c) = 0;
    }
    if (*(int *)((long)param_1 + 0x5c) != 0) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x30;
      (*(code *)*puVar6)(param_1);
    }
    if ((int)param_1[0x12] == 3) {
      if (param_1[0x14] == 0) {
        if (*(int *)((long)param_1 + 0x74) == 0) {
          *(undefined4 *)((long)param_1 + 0x7c) = 1;
        }
        else {
          *(undefined4 *)((long)param_1 + 0x84) = 1;
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x10) = 1;
      }
    }
    else {
      *(undefined8 *)((long)param_1 + 0x7c) = 1;
      *(undefined4 *)((long)param_1 + 0x84) = 0;
      param_1[0x14] = 0;
    }
    if (*(int *)((long)param_1 + 0x7c) != 0) {
      FUN_10054b398(param_1);
      puVar5[4] = param_1[0x52];
    }
    if ((*(int *)((long)param_1 + 0x84) != 0) || ((int)param_1[0x10] != 0)) {
      FUN_10054bfc4(param_1);
      puVar5[5] = param_1[0x52];
    }
  }
  if (*(int *)((long)param_1 + 0x5c) == 0) {
    if (*(int *)((long)puVar5 + 0x1c) == 0) {
      FUN_10053be4c(param_1);
      FUN_100543270(param_1);
    }
    else {
      FUN_100542834(param_1);
    }
    FUN_100542e4c(param_1,*(undefined4 *)((long)param_1 + 0x84));
  }
  FUN_10053c6ac(param_1);
  if ((int)param_1[0x28] == 0) {
    FUN_10053cd70(param_1);
  }
  else {
    FUN_100539b24(param_1);
  }
  if (*(int *)(param_1[0x4c] + 0x20) == 0) {
    bVar3 = (int)param_1[0xb] != 0;
  }
  else {
    bVar3 = true;
  }
  FUN_10053ae74(param_1,bVar3);
  if (*(int *)((long)param_1 + 0x5c) == 0) {
    FUN_10053f7a0(param_1,0);
  }
  (**(code **)(param_1[1] + 0x30))(param_1);
  (**(code **)(param_1[0x4c] + 0x10))(param_1);
  lVar7 = param_1[2];
  if (((lVar7 != 0) && ((int)param_1[0xb] == 0)) && (*(int *)(param_1[0x4c] + 0x20) != 0)) {
    iVar1 = (int)param_1[7];
    if (*(int *)((long)param_1 + 0x13c) != 0) {
      iVar1 = (int)param_1[7] * 3 + 2;
    }
    uVar2 = *(uint *)(param_1 + 0x36);
    *(undefined8 *)(lVar7 + 8) = 0;
    *(ulong *)(lVar7 + 0x10) = (long)iVar1 * (ulong)uVar2;
    uVar4 = 2;
    if (*(int *)((long)param_1 + 0x84) != 0) {
      uVar4 = 3;
    }
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(undefined4 *)(lVar7 + 0x1c) = uVar4;
    *(int *)(puVar5 + 3) = *(int *)(puVar5 + 3) + 1;
  }
  return;
}




void FUN_100542638(long *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = param_1[0x48];
  if (*(int *)(lVar7 + 0x10) == 0) {
    if ((*(int *)((long)param_1 + 0x6c) != 0) && (param_1[0x14] == 0)) {
      if ((*(int *)((long)param_1 + 0x74) == 0) || (*(int *)((long)param_1 + 0x84) == 0)) {
        if (*(int *)((long)param_1 + 0x7c) == 0) {
          puVar2 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar2 + 5) = 0x2f;
          (*(code *)*puVar2)(param_1);
        }
        else {
          param_1[0x52] = *(long *)(lVar7 + 0x20);
        }
      }
      else {
        param_1[0x52] = *(long *)(lVar7 + 0x28);
        *(undefined4 *)(lVar7 + 0x10) = 1;
      }
    }
    (**(code **)param_1[0x4f])(param_1);
    (**(code **)(param_1[0x4a] + 0x10))(param_1);
    if (*(int *)((long)param_1 + 0x5c) != 0) goto LAB_1005426d8;
    if (*(int *)(lVar7 + 0x1c) == 0) {
      (**(code **)param_1[0x51])(param_1);
    }
    (**(code **)param_1[0x50])(param_1);
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      (**(code **)param_1[0x52])(param_1,*(undefined4 *)(lVar7 + 0x10));
    }
    uVar4 = 0;
    if (*(int *)(lVar7 + 0x10) != 0) {
      uVar4 = 3;
    }
    (**(code **)param_1[0x4b])(param_1,uVar4);
    uVar6 = 0;
  }
  else {
    *(undefined4 *)(lVar7 + 0x10) = 0;
    (**(code **)param_1[0x52])(param_1,0);
    uVar6 = 2;
    (**(code **)param_1[0x4b])(param_1,2);
  }
  (**(code **)param_1[0x49])(param_1,uVar6);
LAB_1005426d8:
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    iVar3 = 1;
    if (*(int *)(lVar7 + 0x10) != 0) {
      iVar3 = 2;
    }
    iVar3 = iVar3 + *(int *)(lVar7 + 0x18);
    *(int *)(lVar1 + 0x18) = *(int *)(lVar7 + 0x18);
    *(int *)(lVar1 + 0x1c) = iVar3;
    if (((int)param_1[0xb] != 0) && (*(int *)(param_1[0x4c] + 0x24) == 0)) {
      iVar5 = 1;
      if (*(int *)((long)param_1 + 0x84) != 0) {
        iVar5 = 2;
      }
      *(int *)(lVar1 + 0x1c) = iVar5 + iVar3;
    }
  }
  return;
}




void FUN_1005427f8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x240);
  if (*(int *)(param_1 + 0x6c) != 0) {
    (**(code **)(*(long *)(param_1 + 0x290) + 0x10))();
  }
  *(int *)(lVar1 + 0x18) = *(int *)(lVar1 + 0x18) + 1;
  return;
}




void FUN_100542834(long param_1)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x58);
  *(undefined8 **)(param_1 + 0x280) = puVar4;
  *puVar4 = FUN_1005429d8;
  *(undefined4 *)(puVar4 + 2) = 0;
  iVar3 = *(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88);
  *(int *)((long)puVar4 + 0x4c) = iVar3;
  if (*(int *)(param_1 + 0x1a4) == 2) {
    puVar4[1] = FUN_1005429ec;
    puVar4[3] = FUN_100542b1c;
    uVar5 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,iVar3);
    puVar4[8] = uVar5;
    puVar4 = *(undefined8 **)(param_1 + 0x280);
  }
  else {
    puVar4[1] = FUN_100542ce0;
    puVar4[3] = FUN_100542d30;
    puVar4[8] = 0;
  }
  uVar5 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar4[4] = uVar5;
  uVar5 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x400);
  puVar4[5] = uVar5;
  uVar5 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  puVar4[6] = uVar5;
  lVar6 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x800);
  lVar7 = 0;
  puVar4[7] = lVar6;
  lVar1 = puVar4[4];
  lVar2 = puVar4[5];
  lVar8 = -0xe25100;
  lVar9 = -0xb2f480;
  lVar10 = 0x2c8d00;
  lVar11 = 0x5b6900;
  lVar12 = puVar4[6];
  do {
    *(int *)(lVar1 + lVar7 * 4) = (int)((ulong)lVar9 >> 0x10);
    *(int *)(lVar2 + lVar7 * 4) = (int)((ulong)lVar8 >> 0x10);
    *(long *)(lVar12 + lVar7 * 8) = lVar11;
    *(long *)(lVar6 + lVar7 * 8) = lVar10;
    lVar7 = lVar7 + 1;
    lVar10 = lVar10 + -0x581a;
    lVar11 = lVar11 + -0xb6d2;
    lVar8 = lVar8 + 0x1c5a2;
    lVar9 = lVar9 + 0x166e9;
  } while (lVar7 != 0x100);
  return;
}




void FUN_1005429d8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x280);
  *(undefined4 *)(lVar1 + 0x48) = 0;
  *(undefined4 *)(lVar1 + 0x50) = *(undefined4 *)(param_1 + 0x8c);
  return;
}




void FUN_1005429ec(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar5 = *(long *)(param_1 + 0x280);
  if (*(int *)(lVar5 + 0x48) == 0) {
    uVar2 = *(uint *)(lVar5 + 0x50);
    if (1 < uVar2) {
      uVar2 = 2;
    }
    uVar3 = *param_6;
    uVar1 = param_7 - uVar3;
    if (uVar2 <= param_7 - uVar3) {
      uVar1 = uVar2;
    }
    local_48 = *(undefined8 *)(param_5 + (ulong)uVar3 * 8);
    if (uVar1 < 2) {
      local_40 = *(undefined8 *)(lVar5 + 0x40);
      *(undefined4 *)(lVar5 + 0x48) = 1;
    }
    else {
      local_40 = *(undefined8 *)(param_5 + (ulong)(uVar3 + 1) * 8);
    }
    (**(code **)(lVar5 + 0x18))(param_1,param_2,*param_3,&local_48);
    iVar4 = *(int *)(lVar5 + 0x48);
    *param_6 = *param_6 + uVar1;
    *(uint *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) - uVar1;
    if (iVar4 != 0) goto LAB_100542aec;
  }
  else {
    FUN_10054d310(lVar5 + 0x40,0,param_5 + (ulong)*param_6 * 8,0,1,*(undefined4 *)(lVar5 + 0x4c));
    *(undefined4 *)(lVar5 + 0x48) = 0;
    *param_6 = *param_6 + 1;
    *(int *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) + -1;
  }
  *param_3 = *param_3 + 1;
LAB_100542aec:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100542b1c(long param_1,long *param_2,uint param_3,undefined8 *param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  long lVar19;
  
  lVar12 = *(long *)(param_1 + 0x280);
  lVar10 = *(long *)(param_1 + 0x1b8);
  lVar11 = *(long *)(lVar12 + 0x20);
  lVar1 = *(long *)(lVar12 + 0x28);
  lVar14 = *(long *)(lVar12 + 0x30);
  lVar12 = *(long *)(lVar12 + 0x38);
  pbVar5 = *(byte **)(*param_2 + (ulong)(param_3 << 1) * 8);
  pbVar18 = *(byte **)(*param_2 + (ulong)(param_3 << 1 | 1) * 8);
  pbVar16 = *(byte **)(param_2[1] + (ulong)param_3 * 8);
  pbVar17 = *(byte **)(param_2[2] + (ulong)param_3 * 8);
  puVar15 = (undefined1 *)*param_4;
  puVar13 = (undefined1 *)param_4[1];
  uVar2 = *(uint *)(param_1 + 0x88);
  if (1 < uVar2) {
    lVar3 = 0;
    do {
      lVar7 = (long)*(int *)(lVar11 + (ulong)pbVar17[lVar3] * 4);
      lVar8 = *(long *)(lVar12 + (ulong)pbVar16[lVar3] * 8);
      lVar6 = *(long *)(lVar14 + (ulong)pbVar17[lVar3] * 8);
      uVar9 = (ulong)*pbVar5;
      lVar19 = (long)*(int *)(lVar1 + (ulong)pbVar16[lVar3] * 4);
      *puVar15 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      iVar4 = (int)((ulong)(lVar6 + lVar8) >> 0x10);
      puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar15[2] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      uVar9 = (ulong)pbVar5[1];
      puVar15[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar15[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar15[5] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      uVar9 = (ulong)*pbVar18;
      *puVar13 = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar13[2] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      uVar9 = (ulong)pbVar18[1];
      puVar13[3] = *(undefined1 *)(lVar10 + lVar7 + uVar9);
      pbVar5 = pbVar5 + 2;
      pbVar18 = pbVar18 + 2;
      puVar13[4] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
      puVar15 = puVar15 + 6;
      puVar13[5] = *(undefined1 *)(lVar10 + lVar19 + uVar9);
      puVar13 = puVar13 + 6;
      lVar3 = lVar3 + 1;
    } while (uVar2 >> 1 != (uint)lVar3);
    uVar2 = *(uint *)(param_1 + 0x88);
    pbVar17 = pbVar17 + lVar3;
    pbVar16 = pbVar16 + lVar3;
  }
  if ((uVar2 & 1) != 0) {
    lVar3 = (long)*(int *)(lVar11 + (ulong)*pbVar17 * 4);
    lVar12 = *(long *)(lVar12 + (ulong)*pbVar16 * 8);
    lVar14 = *(long *)(lVar14 + (ulong)*pbVar17 * 8);
    lVar11 = (long)*(int *)(lVar1 + (ulong)*pbVar16 * 4);
    uVar9 = (ulong)*pbVar5;
    *puVar15 = *(undefined1 *)(lVar10 + lVar3 + uVar9);
    iVar4 = (int)((ulong)(lVar14 + lVar12) >> 0x10);
    puVar15[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar15[2] = *(undefined1 *)(lVar10 + lVar11 + uVar9);
    uVar9 = (ulong)*pbVar18;
    *puVar13 = *(undefined1 *)(lVar10 + lVar3 + uVar9);
    puVar13[1] = *(undefined1 *)(lVar10 + uVar9 + (long)iVar4);
    puVar13[2] = *(undefined1 *)(lVar10 + lVar11 + uVar9);
  }
  return;
}




void FUN_100542ce0(long param_1,undefined8 param_2,int *param_3,undefined8 param_4,long param_5,
                  uint *param_6)

{
  (**(code **)(*(long *)(param_1 + 0x280) + 0x18))
            (param_1,param_2,*param_3,param_5 + (ulong)*param_6 * 8);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}




void FUN_100542d30(long param_1,long *param_2,ulong param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  
  lVar9 = *(long *)(param_1 + 0x280);
  lVar8 = *(long *)(param_1 + 0x1b8);
  lVar1 = *(long *)(lVar9 + 0x20);
  lVar2 = *(long *)(lVar9 + 0x28);
  lVar11 = *(long *)(lVar9 + 0x30);
  lVar9 = *(long *)(lVar9 + 0x38);
  pbVar17 = *(byte **)(*param_2 + (param_3 & 0xffffffff) * 8);
  pbVar13 = *(byte **)(param_2[1] + (param_3 & 0xffffffff) * 8);
  pbVar15 = *(byte **)(param_2[2] + (param_3 & 0xffffffff) * 8);
  puVar10 = (undefined1 *)*param_4;
  uVar19 = *(uint *)(param_1 + 0x88);
  if (1 < uVar19) {
    uVar19 = uVar19 >> 1;
    pbVar14 = pbVar13;
    pbVar16 = pbVar15;
    pbVar18 = pbVar17;
    do {
      pbVar13 = pbVar14 + 1;
      pbVar15 = pbVar16 + 1;
      lVar5 = (long)*(int *)(lVar1 + (ulong)*pbVar16 * 4);
      lVar6 = *(long *)(lVar9 + (ulong)*pbVar14 * 8);
      lVar4 = *(long *)(lVar11 + (ulong)*pbVar16 * 8);
      lVar7 = (long)*(int *)(lVar2 + (ulong)*pbVar14 * 4);
      uVar12 = (ulong)*pbVar18;
      *puVar10 = *(undefined1 *)(lVar8 + lVar5 + uVar12);
      iVar3 = (int)((ulong)(lVar4 + lVar6) >> 0x10);
      puVar10[1] = *(undefined1 *)(lVar8 + uVar12 + (long)iVar3);
      puVar10[2] = *(undefined1 *)(lVar8 + lVar7 + uVar12);
      pbVar17 = pbVar18 + 2;
      uVar12 = (ulong)pbVar18[1];
      puVar10[3] = *(undefined1 *)(lVar8 + lVar5 + uVar12);
      puVar10[4] = *(undefined1 *)(lVar8 + uVar12 + (long)iVar3);
      puVar10[5] = *(undefined1 *)(lVar8 + lVar7 + uVar12);
      puVar10 = puVar10 + 6;
      uVar19 = uVar19 - 1;
      pbVar14 = pbVar13;
      pbVar16 = pbVar15;
      pbVar18 = pbVar17;
    } while (uVar19 != 0);
    uVar19 = *(uint *)(param_1 + 0x88);
  }
  if ((uVar19 & 1) != 0) {
    lVar9 = *(long *)(lVar9 + (ulong)*pbVar13 * 8);
    lVar11 = *(long *)(lVar11 + (ulong)*pbVar15 * 8);
    iVar3 = *(int *)(lVar2 + (ulong)*pbVar13 * 4);
    uVar12 = (ulong)*pbVar17;
    *puVar10 = *(undefined1 *)(lVar8 + (long)*(int *)(lVar1 + (ulong)*pbVar15 * 4) + uVar12);
    puVar10[1] = *(undefined1 *)(lVar8 + uVar12 + (long)(int)((ulong)(lVar11 + lVar9) >> 0x10));
    puVar10[2] = *(undefined1 *)(lVar8 + (long)iVar3 + uVar12);
    return;
  }
  return;
}




void FUN_100542e4c(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  
  puVar4 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x30);
  *(undefined8 **)(param_1 + 600) = puVar4;
  *puVar4 = FUN_100542f14;
  puVar4[2] = 0;
  puVar4[3] = 0;
  if (*(int *)(param_1 + 0x6c) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x1a4);
    *(undefined4 *)(puVar4 + 4) = uVar2;
    if (param_2 == 0) {
      uVar5 = (**(code **)(*(long *)(param_1 + 8) + 0x10))
                        (param_1,1,*(int *)(param_1 + 0x90) * *(int *)(param_1 + 0x88));
      puVar4[3] = uVar5;
    }
    else {
      pcVar6 = *(code **)(*(long *)(param_1 + 8) + 0x20);
      iVar1 = *(int *)(param_1 + 0x90);
      iVar3 = *(int *)(param_1 + 0x88);
      uVar5 = FUN_10054d2fc(*(undefined4 *)(param_1 + 0x8c),uVar2);
      uVar5 = (*pcVar6)(param_1,1,0,iVar1 * iVar3,uVar5,*(undefined4 *)(puVar4 + 4));
      puVar4[2] = uVar5;
    }
  }
  return;
}




void FUN_100542f14(long *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = param_1[0x4b];
  if (param_2 == 3) {
    if (*(long *)(lVar4 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
    }
    pcVar3 = FUN_100543090;
  }
  else if (param_2 == 2) {
    if (*(long *)(lVar4 + 0x10) == 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
    }
    pcVar3 = FUN_10054318c;
  }
  else {
    if (param_2 != 0) {
      puVar2 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar2 + 5) = 3;
      (*(code *)*puVar2)();
      goto LAB_100542fec;
    }
    if (*(int *)((long)param_1 + 0x6c) != 0) {
      *(code **)(lVar4 + 8) = FUN_100542ffc;
      if (*(long *)(lVar4 + 0x18) == 0) {
        uVar1 = (**(code **)(param_1[1] + 0x38))
                          (param_1,*(undefined8 *)(lVar4 + 0x10),0,*(undefined4 *)(lVar4 + 0x20),1);
        *(undefined8 *)(lVar4 + 0x18) = uVar1;
      }
      goto LAB_100542fec;
    }
    pcVar3 = *(code **)(param_1[0x50] + 8);
  }
  *(code **)(lVar4 + 8) = pcVar3;
LAB_100542fec:
  *(undefined4 *)(lVar4 + 0x24) = 0;
  *(undefined4 *)(lVar4 + 0x28) = 0;
  return;
}




void FUN_100542ffc(long param_1)

{
  long in_x4;
  uint *in_x5;
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 600);
  (**(code **)(*(long *)(param_1 + 0x280) + 8))();
  (**(code **)(*(long *)(param_1 + 0x290) + 8))
            (param_1,*(undefined8 *)(lVar1 + 0x18),in_x4 + (ulong)*in_x5 * 8,0);
  *in_x5 = *in_x5;
  return;
}




void FUN_100543090(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int *param_6)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  lVar4 = *(long *)(param_1 + 600);
  uVar5 = *(uint *)(lVar4 + 0x28);
  if (uVar5 == 0) {
    uVar2 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar4 + 0x10),*(undefined4 *)(lVar4 + 0x24),
                       *(undefined4 *)(lVar4 + 0x20),1);
    *(undefined8 *)(lVar4 + 0x18) = uVar2;
    uVar5 = *(uint *)(lVar4 + 0x28);
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
  }
  (**(code **)(*(long *)(param_1 + 0x280) + 8))
            (param_1,param_2,param_3,param_4,uVar2,(uint *)(lVar4 + 0x28),
             *(undefined4 *)(lVar4 + 0x20));
  uVar3 = *(uint *)(lVar4 + 0x28);
  iVar1 = uVar3 - uVar5;
  if (uVar5 <= uVar3 && iVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x290) + 8))
              (param_1,*(long *)(lVar4 + 0x18) + (ulong)uVar5 * 8,0,iVar1);
    *param_6 = *param_6 + iVar1;
    uVar3 = *(uint *)(lVar4 + 0x28);
  }
  if (*(uint *)(lVar4 + 0x20) <= uVar3) {
    *(uint *)(lVar4 + 0x24) = *(int *)(lVar4 + 0x24) + *(uint *)(lVar4 + 0x20);
    *(undefined4 *)(lVar4 + 0x28) = 0;
  }
  return;
}




void FUN_10054318c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long in_x4;
  uint *in_x5;
  int in_w6;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 600);
  uVar1 = *(uint *)(lVar5 + 0x28);
  if (uVar1 == 0) {
    lVar4 = (**(code **)(*(long *)(param_1 + 8) + 0x38))
                      (param_1,*(undefined8 *)(lVar5 + 0x10),*(undefined4 *)(lVar5 + 0x24),
                       *(undefined4 *)(lVar5 + 0x20),0);
    *(long *)(lVar5 + 0x18) = lVar4;
    uVar1 = *(uint *)(lVar5 + 0x28);
  }
  else {
    lVar4 = *(long *)(lVar5 + 0x18);
  }
  uVar2 = *(int *)(lVar5 + 0x20) - uVar1;
  uVar3 = in_w6 - *in_x5;
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  uVar2 = *(int *)(param_1 + 0x8c) - *(int *)(lVar5 + 0x24);
  if (uVar3 <= uVar2) {
    uVar2 = uVar3;
  }
  (**(code **)(*(long *)(param_1 + 0x290) + 8))
            (param_1,lVar4 + (ulong)uVar1 * 8,in_x4 + (ulong)*in_x5 * 8,uVar2);
  *in_x5 = *in_x5 + uVar2;
  uVar2 = *(int *)(lVar5 + 0x28) + uVar2;
  *(uint *)(lVar5 + 0x28) = uVar2;
  if (*(uint *)(lVar5 + 0x20) <= uVar2) {
    *(uint *)(lVar5 + 0x24) = *(int *)(lVar5 + 0x24) + *(uint *)(lVar5 + 0x20);
    *(undefined4 *)(lVar5 + 0x28) = 0;
  }
  return;
}




void FUN_100543270(long *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  int *piVar14;
  
  puVar9 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x100);
  param_1[0x50] = (long)puVar9;
  *puVar9 = FUN_10054346c;
  puVar9[1] = FUN_100543480;
  *(undefined4 *)(puVar9 + 2) = 0;
  if ((int)param_1[0x32] != 0) {
    puVar11 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar11 + 5) = 0x1a;
    (*(code *)*puVar11)(param_1);
  }
  if (0 < (int)param_1[7]) {
    lVar12 = 0;
    piVar14 = (int *)(param_1[0x26] + 0x24);
    do {
      lVar8 = param_1[0x35];
      iVar2 = piVar14[-7];
      iVar3 = *piVar14;
      iVar6 = 0;
      if (*(int *)((long)param_1 + 0x1ac) != 0) {
        iVar6 = (piVar14[1] * piVar14[-6]) / *(int *)((long)param_1 + 0x1ac);
      }
      iVar4 = (int)param_1[0x34];
      iVar5 = *(int *)((long)param_1 + 0x1a4);
      *(int *)((long)puVar9 + lVar12 * 4 + 0xc0) = iVar6;
      if (piVar14[4] == 0) {
        puVar9[lVar12 + 0xd] = FUN_1005435cc;
      }
      else {
        iVar7 = 0;
        if ((int)lVar8 != 0) {
          iVar7 = (iVar3 * iVar2) / (int)lVar8;
        }
        if ((iVar7 == iVar4) && (iVar6 == iVar5)) {
          puVar9[lVar12 + 0xd] = FUN_1005435d4;
        }
        else {
          if (iVar7 << 1 == iVar4 && iVar6 == iVar5) {
            puVar9[lVar12 + 0xd] = FUN_1005435dc;
          }
          else if (iVar7 << 1 == iVar4 && iVar6 << 1 == iVar5) {
            puVar9[lVar12 + 0xd] = FUN_100543630;
          }
          else {
            iVar2 = 0;
            if (iVar7 != 0) {
              iVar2 = iVar4 / iVar7;
            }
            if (iVar4 == iVar2 * iVar7) {
              iVar3 = 0;
              if (iVar6 != 0) {
                iVar3 = iVar5 / iVar6;
              }
              if (iVar5 == iVar3 * iVar6) {
                puVar9[lVar12 + 0xd] = FUN_1005436dc;
                puVar1 = (undefined1 *)((long)puVar9 + lVar12 + 0xf2);
                puVar1[-10] = (char)iVar2;
                *puVar1 = (char)iVar3;
                goto LAB_1005433e8;
              }
            }
            puVar11 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar11 + 5) = 0x27;
            (*(code *)*puVar11)(param_1);
          }
LAB_1005433e8:
          pcVar13 = *(code **)(param_1[1] + 0x10);
          uVar10 = FUN_10054d2fc((int)param_1[0x11],(long)(int)param_1[0x34]);
          uVar10 = (*pcVar13)(param_1,1,uVar10,*(undefined4 *)((long)param_1 + 0x1a4));
          puVar9[lVar12 + 3] = uVar10;
        }
      }
      lVar12 = lVar12 + 1;
      piVar14 = piVar14 + 0x18;
    } while (lVar12 < (int)param_1[7]);
  }
  return;
}




void FUN_10054346c(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x280);
  uVar1 = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(lVar2 + 0xb8) = *(undefined4 *)(param_1 + 0x1a4);
  *(undefined4 *)(lVar2 + 0xbc) = uVar1;
  return;
}




void FUN_100543480(long param_1,long param_2,int *param_3,undefined8 param_4,long param_5,
                  uint *param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = *(long *)(param_1 + 0x280);
  iVar3 = *(int *)(lVar7 + 0xb8);
  iVar4 = *(int *)(param_1 + 0x1a4);
  if (iVar4 <= iVar3) {
    if (0 < *(int *)(param_1 + 0x38)) {
      lVar8 = 0;
      lVar5 = *(long *)(param_1 + 0x130);
      lVar6 = lVar7 + 0x18;
      do {
        (**(code **)(lVar7 + 0x68 + lVar8 * 8))
                  (param_1,lVar5,
                   *(long *)(param_2 + lVar8 * 8) +
                   (ulong)(uint)(*(int *)(lVar7 + 0x68 + lVar8 * 4 + 0x58) * *param_3) * 8,lVar6);
        lVar8 = lVar8 + 1;
        lVar5 = lVar5 + 0x60;
        lVar6 = lVar6 + 8;
      } while (lVar8 < *(int *)(param_1 + 0x38));
      iVar4 = *(int *)(param_1 + 0x1a4);
    }
    iVar3 = 0;
    *(undefined4 *)(lVar7 + 0xb8) = 0;
  }
  uVar1 = *(uint *)(lVar7 + 0xbc);
  if ((uint)(iVar4 - iVar3) <= *(uint *)(lVar7 + 0xbc)) {
    uVar1 = iVar4 - iVar3;
  }
  uVar2 = param_7 - *param_6;
  if (uVar1 <= uVar2) {
    uVar2 = uVar1;
  }
  (**(code **)(*(long *)(param_1 + 0x288) + 8))
            (param_1,lVar7 + 0x18,iVar3,param_5 + (ulong)*param_6 * 8,uVar2);
  *param_6 = *param_6 + uVar2;
  iVar3 = *(int *)(lVar7 + 0xb8) + uVar2;
  *(int *)(lVar7 + 0xb8) = iVar3;
  *(uint *)(lVar7 + 0xbc) = *(int *)(lVar7 + 0xbc) - uVar2;
  if (*(int *)(param_1 + 0x1a4) <= iVar3) {
    *param_3 = *param_3 + 1;
  }
  return;
}




void FUN_1005435cc(void)

{
  undefined8 *in_x3;
  
  *in_x3 = 0;
  return;
}




void FUN_1005435d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  *param_4 = param_3;
  return;
}




void FUN_1005435dc(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  
  iVar5 = *(int *)(param_1 + 0x1a4);
  if (0 < iVar5) {
    lVar3 = 0;
    lVar4 = *param_4;
    do {
      if (*(uint *)(param_1 + 0x88) != 0) {
        puVar6 = *(undefined1 **)(lVar4 + lVar3 * 8);
        puVar1 = puVar6 + *(uint *)(param_1 + 0x88);
        puVar7 = *(undefined1 **)(param_3 + lVar3 * 8);
        do {
          uVar2 = *puVar7;
          *puVar6 = uVar2;
          puVar6[1] = uVar2;
          puVar6 = puVar6 + 2;
          puVar7 = puVar7 + 1;
        } while (puVar6 < puVar1);
        iVar5 = *(int *)(param_1 + 0x1a4);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar5);
  }
  return;
}




void FUN_100543630(long param_1,undefined8 param_2,long param_3,long *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  if (0 < *(int *)(param_1 + 0x1a4)) {
    lVar8 = 0;
    lVar6 = 0;
    lVar7 = *param_4;
    do {
      if (*(uint *)(param_1 + 0x88) == 0) {
        uVar3 = 0;
      }
      else {
        puVar4 = *(undefined1 **)(lVar7 + lVar6 * 8);
        puVar1 = puVar4 + *(uint *)(param_1 + 0x88);
        puVar5 = *(undefined1 **)(param_3 + lVar8 * 8);
        do {
          uVar2 = *puVar5;
          *puVar4 = uVar2;
          puVar4[1] = uVar2;
          puVar4 = puVar4 + 2;
          puVar5 = puVar5 + 1;
        } while (puVar4 < puVar1);
        uVar3 = *(undefined4 *)(param_1 + 0x88);
      }
      FUN_10054d310(lVar7,lVar6,lVar7,(uint)lVar6 | 1,1,uVar3);
      lVar8 = lVar8 + 1;
      lVar6 = lVar6 + 2;
    } while ((int)lVar6 < *(int *)(param_1 + 0x1a4));
  }
  return;
}




void FUN_1005436dc(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  void *pvVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  
  if (0 < *(int *)(param_1 + 0x1a4)) {
    lVar9 = 0;
    lVar6 = 0;
    lVar7 = *param_4;
    lVar1 = *(long *)(param_1 + 0x280) + (long)*(int *)(param_2 + 4);
    bVar3 = *(byte *)(lVar1 + 0xe8);
    bVar4 = *(byte *)(lVar1 + 0xf2);
    do {
      if (*(uint *)(param_1 + 0x88) != 0) {
        pvVar8 = *(void **)(lVar7 + lVar6 * 8);
        pvVar2 = (void *)((long)pvVar8 + (ulong)*(uint *)(param_1 + 0x88));
        pbVar5 = *(byte **)(param_3 + lVar9 * 8);
        do {
          if (bVar3 != 0) {
            _memset(pvVar8,(uint)*pbVar5,(ulong)bVar3);
            pvVar8 = (void *)((long)pvVar8 + (ulong)(bVar3 - 1) + 1);
          }
          pbVar5 = pbVar5 + 1;
        } while (pvVar8 < pvVar2);
      }
      if (1 < bVar4) {
        FUN_10054d310(lVar7,lVar6,lVar7,(int)lVar6 + 1,bVar4 - 1,*(undefined4 *)(param_1 + 0x88));
      }
      lVar9 = lVar9 + 1;
      lVar6 = lVar6 + (ulong)bVar4;
    } while ((int)lVar6 < *(int *)(param_1 + 0x1a4));
  }
  return;
}




void FUN_1005437d4(undefined8 *param_1)

{
  *param_1 = FUN_10054382c;
  param_1[1] = FUN_100543858;
  param_1[2] = FUN_1005438bc;
  param_1[3] = FUN_100543938;
  param_1[4] = FUN_100543a08;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = &PTR_s_Bogus_message_code__d_1014a0fd0;
  *(undefined4 *)(param_1 + 0x12) = 0x7e;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  return;
}




void FUN_10054382c(long *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  FUN_1005392fc(param_1);
                    /* WARNING: Subroutine does not return */
  _exit(1);
}




void FUN_100543858(long *param_1,int param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (param_2 < 0) {
    lVar1 = *(long *)(lVar2 + 0x80);
    if ((lVar1 == 0) || (2 < *(int *)(lVar2 + 0x7c))) {
      (**(code **)(lVar2 + 0x10))();
      lVar1 = *(long *)(lVar2 + 0x80);
    }
    *(long *)(lVar2 + 0x80) = lVar1 + 1;
  }
  else if (param_2 <= *(int *)(lVar2 + 0x7c)) {
                    /* WARNING: Could not recover jumptable at 0x000100543884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))();
    return;
  }
  return;
}




void FUN_1005438bc(long *param_1)

{
  int iVar1;
  undefined1 auStack_f0 [200];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  (**(code **)(*param_1 + 0x18))(param_1,auStack_f0);
  iVar1 = _fprintf(*(FILE **)PTR____stderrp_101444220,"%s\n");
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar1);
}




int FUN_100543938(long *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar6;
  long lVar7;
  undefined8 *puVar5;
  
  lVar7 = *param_1;
  uVar1 = *(uint *)(lVar7 + 0x28);
  if (((int)uVar1 < 1) || (*(int *)(lVar7 + 0x90) < (int)uVar1)) {
    if ((*(long *)(lVar7 + 0x98) != 0) &&
       ((*(int *)(lVar7 + 0xa0) <= (int)uVar1 && ((int)uVar1 <= *(int *)(lVar7 + 0xa4))))) {
      puVar5 = (undefined8 *)
               (*(long *)(lVar7 + 0x98) + (long)(int)(uVar1 - *(int *)(lVar7 + 0xa0)) * 8);
      goto LAB_100543990;
    }
  }
  else {
    puVar5 = (undefined8 *)(*(long *)(lVar7 + 0x88) + (ulong)uVar1 * 8);
LAB_100543990:
    pcVar4 = (char *)*puVar5;
    pcVar6 = pcVar4;
    if (pcVar4 != (char *)0x0) goto LAB_1005439a8;
  }
  *(uint *)(lVar7 + 0x2c) = uVar1;
  pcVar4 = (char *)**(undefined8 **)(lVar7 + 0x88);
  pcVar6 = pcVar4;
LAB_1005439a8:
  do {
    cVar2 = *pcVar4;
    if (cVar2 == '\0') break;
    pcVar4 = pcVar4 + 1;
  } while (cVar2 != '%');
  iVar3 = _sprintf(param_2,pcVar6);
  return iVar3;
}




void FUN_100543a08(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x80) = 0;
  *(undefined4 *)(lVar1 + 0x28) = 0;
  return;
}




void FUN_100543a18(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  undefined1 *puVar1;
  long lVar2;
  float *pfVar3;
  float *pfVar4;
  short *psVar5;
  uint uVar6;
  long lVar7;
  short sVar8;
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
  float local_128 [64];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  lVar2 = *(long *)(param_1 + 0x1b8);
  pfVar3 = *(float **)(param_2 + 0x58);
  pfVar4 = local_128;
  psVar5 = (short *)(param_3 + 0x40);
  uVar6 = 9;
  do {
    sVar8 = psVar5[-0x10];
    if (psVar5[-0x18] == 0 && sVar8 == 0) {
      if ((((psVar5[-8] != 0) || (*psVar5 != 0)) || (psVar5[8] != 0)) ||
         ((psVar5[0x10] != 0 || (psVar5[0x18] != 0)))) {
        sVar8 = 0;
        goto LAB_100543aa8;
      }
      fVar13 = *pfVar3 * (float)(int)psVar5[-0x20];
      *pfVar4 = fVar13;
      pfVar4[8] = fVar13;
      pfVar4[0x10] = fVar13;
      pfVar4[0x18] = fVar13;
      pfVar4[0x20] = fVar13;
      pfVar4[0x28] = fVar13;
      pfVar4[0x30] = fVar13;
      lVar7 = 0x38;
    }
    else {
LAB_100543aa8:
      fVar13 = pfVar3[0x20] * (float)(int)*psVar5 + *pfVar3 * (float)(int)psVar5[-0x20];
      fVar9 = *pfVar3 * (float)(int)psVar5[-0x20] - pfVar3[0x20] * (float)(int)*psVar5;
      fVar11 = pfVar3[0x30] * (float)(int)psVar5[0x10] + pfVar3[0x10] * (float)(int)sVar8;
      fVar10 = (pfVar3[0x10] * (float)(int)sVar8 - pfVar3[0x30] * (float)(int)psVar5[0x10]) *
               1.4142135 - fVar11;
      fVar12 = fVar11 + fVar13;
      fVar13 = fVar13 - fVar11;
      fVar14 = fVar10 + fVar9;
      fVar9 = fVar9 - fVar10;
      fVar10 = pfVar3[8] * (float)(int)psVar5[-0x18];
      fVar18 = pfVar3[0x28] * (float)(int)psVar5[8] + pfVar3[0x18] * (float)(int)psVar5[-8];
      fVar15 = pfVar3[0x28] * (float)(int)psVar5[8] - pfVar3[0x18] * (float)(int)psVar5[-8];
      fVar16 = pfVar3[0x38] * (float)(int)psVar5[0x18] + fVar10;
      fVar10 = fVar10 - pfVar3[0x38] * (float)(int)psVar5[0x18];
      fVar17 = fVar16 + fVar18;
      fVar11 = (fVar10 + fVar15) * 1.847759;
      fVar15 = fVar11 - (fVar17 + fVar15 * 2.613126);
      fVar16 = (fVar16 - fVar18) * 1.4142135 - fVar15;
      fVar11 = fVar11 - (fVar16 + fVar10 * 1.0823922);
      *pfVar4 = fVar17 + fVar12;
      pfVar4[0x38] = fVar12 - fVar17;
      pfVar4[8] = fVar15 + fVar14;
      pfVar4[0x30] = fVar14 - fVar15;
      pfVar4[0x10] = fVar16 + fVar9;
      pfVar4[0x28] = fVar9 - fVar16;
      pfVar4[0x18] = fVar11 + fVar13;
      fVar13 = fVar13 - fVar11;
      lVar7 = 0x20;
    }
    pfVar4[lVar7] = fVar13;
    pfVar4 = pfVar4 + 1;
    pfVar3 = pfVar3 + 1;
    uVar6 = uVar6 - 1;
    psVar5 = psVar5 + 1;
    if (uVar6 < 2) {
      lVar7 = 0;
      do {
        puVar1 = (undefined1 *)(*(long *)(param_4 + lVar7) + (ulong)param_5);
        fVar11 = local_128[lVar7] + 128.5 + local_128[lVar7 + 4];
        fVar13 = (local_128[lVar7] + 128.5) - local_128[lVar7 + 4];
        fVar9 = local_128[lVar7 + 6] + local_128[lVar7 + 2];
        fVar15 = (local_128[lVar7 + 2] - local_128[lVar7 + 6]) * 1.4142135 - fVar9;
        fVar17 = fVar9 + fVar11;
        fVar11 = fVar11 - fVar9;
        fVar14 = fVar15 + fVar13;
        fVar19 = local_128[lVar7 + 3] + local_128[lVar7 + 5];
        fVar10 = local_128[lVar7 + 5] - local_128[lVar7 + 3];
        fVar16 = local_128[lVar7 + 7] + local_128[lVar7 + 1];
        fVar12 = local_128[lVar7 + 1] - local_128[lVar7 + 7];
        fVar18 = fVar16 + fVar19;
        fVar13 = fVar13 - fVar15;
        fVar9 = (fVar12 + fVar10) * 1.847759;
        fVar10 = fVar9 - (fVar18 + fVar10 * 2.613126);
        fVar15 = (fVar16 - fVar19) * 1.4142135 - fVar10;
        *puVar1 = *(undefined1 *)(lVar2 + ((ulong)(uint)(int)(fVar18 + fVar17) & 0x3ff));
        puVar1[7] = *(undefined1 *)(lVar2 + ((ulong)(uint)(int)(fVar17 - fVar18) & 0x3ff));
        puVar1[1] = *(undefined1 *)(lVar2 + ((ulong)(uint)(int)(fVar10 + fVar14) & 0x3ff));
        puVar1[6] = *(undefined1 *)(lVar2 + ((ulong)(uint)(int)(fVar14 - fVar10) & 0x3ff));
        puVar1[2] = *(undefined1 *)(lVar2 + ((ulong)(uint)(int)(fVar15 + fVar13) & 0x3ff));
        fVar9 = fVar9 - (fVar15 + fVar12 * 1.0823922);
        puVar1[5] = *(undefined1 *)(lVar2 + ((ulong)(uint)(int)(fVar13 - fVar15) & 0x3ff));
        puVar1[3] = *(undefined1 *)(lVar2 + ((ulong)(uint)(int)(fVar9 + fVar11) & 0x3ff));
        puVar1[4] = *(undefined1 *)(lVar2 + ((ulong)(uint)(int)(fVar11 - fVar9) & 0x3ff));
        lVar7 = lVar7 + 8;
      } while (lVar7 != 0x40);
      if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}




void FUN_100543d78(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  long lVar11;
  long lVar12;
  uint *puVar13;
  short *psVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint local_138 [16];
  uint local_f8 [8];
  uint auStack_d8 [8];
  uint local_b8 [8];
  uint local_98 [8];
  uint local_78 [8];
  uint local_58 [8];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar12 = *(long *)(param_1 + 0x1b8);
  puVar13 = local_138;
  psVar14 = (short *)(param_3 + 0x40);
  uVar15 = 9;
  piVar16 = *(int **)(param_2 + 0x58);
  do {
    sVar10 = psVar14[-0x10];
    if (psVar14[-0x18] == 0 && sVar10 == 0) {
      if ((((psVar14[-8] != 0) || (*psVar14 != 0)) || (psVar14[8] != 0)) ||
         ((psVar14[0x10] != 0 || (psVar14[0x18] != 0)))) {
        sVar10 = 0;
        goto LAB_100543e00;
      }
      uVar17 = *piVar16 * (int)psVar14[-0x20];
      *puVar13 = uVar17;
      puVar13[8] = uVar17;
      puVar13[0x10] = uVar17;
      puVar13[0x18] = uVar17;
      puVar13[0x20] = uVar17;
      puVar13[0x28] = uVar17;
      puVar13[0x30] = uVar17;
      lVar11 = 0x38;
    }
    else {
LAB_100543e00:
      iVar1 = piVar16[0x20] * (int)*psVar14 + *piVar16 * (int)psVar14[-0x20];
      iVar19 = *piVar16 * (int)psVar14[-0x20] - piVar16[0x20] * (int)*psVar14;
      iVar2 = piVar16[0x30] * (int)psVar14[0x10] + piVar16[0x10] * (int)sVar10;
      iVar8 = (int)((ulong)((long)(piVar16[0x10] * (int)sVar10 - piVar16[0x30] * (int)psVar14[0x10])
                           * 0x16a) >> 8) - iVar2;
      iVar3 = iVar2 + iVar1;
      iVar1 = iVar1 - iVar2;
      iVar2 = iVar8 + iVar19;
      iVar19 = iVar19 - iVar8;
      iVar7 = piVar16[8] * (int)psVar14[-0x18];
      iVar8 = piVar16[0x28] * (int)psVar14[8] + piVar16[0x18] * (int)psVar14[-8];
      iVar9 = piVar16[0x28] * (int)psVar14[8] - piVar16[0x18] * (int)psVar14[-8];
      iVar4 = piVar16[0x38] * (int)psVar14[0x18] + iVar7;
      iVar7 = iVar7 - piVar16[0x38] * (int)psVar14[0x18];
      iVar5 = iVar4 + iVar8;
      iVar18 = (int)((ulong)((long)(iVar7 + iVar9) * 0x1d9) >> 8);
      iVar9 = ((int)((ulong)((long)iVar9 * -0x29d) >> 8) - iVar5) + iVar18;
      *puVar13 = iVar5 + iVar3;
      iVar8 = (int)((ulong)((long)(iVar4 - iVar8) * 0x16a) >> 8) - iVar9;
      puVar13[0x38] = iVar3 - iVar5;
      puVar13[8] = iVar9 + iVar2;
      iVar3 = iVar8 + ((int)((ulong)((long)iVar7 * 0x115) >> 8) - iVar18);
      puVar13[0x30] = iVar2 - iVar9;
      puVar13[0x10] = iVar8 + iVar19;
      puVar13[0x28] = iVar19 - iVar8;
      puVar13[0x20] = iVar3 + iVar1;
      uVar17 = iVar1 - iVar3;
      lVar11 = 0x18;
    }
    puVar13[lVar11] = uVar17;
    puVar13 = puVar13 + 1;
    piVar16 = piVar16 + 1;
    uVar15 = uVar15 - 1;
    psVar14 = psVar14 + 1;
  } while (1 < uVar15);
  lVar11 = 0;
  lVar12 = lVar12 + 0x80;
  puVar13 = local_138 + 4;
  do {
    plVar6 = (long *)(*(long *)(param_4 + lVar11) + (param_5 & 0xffffffff));
    uVar15 = puVar13[-3];
    uVar17 = puVar13[-2];
    if (uVar15 == 0 && uVar17 == 0) {
      if (((puVar13[-1] != 0) || (*puVar13 != 0)) ||
         ((puVar13[1] != 0 || ((puVar13[2] != 0 || (puVar13[3] != 0)))))) {
        uVar17 = 0;
        goto LAB_100543fd0;
      }
      *plVar6 = (ulong)*(byte *)(lVar12 + ((ulong)(puVar13[-4] >> 5) & 0x3ff)) * 0x101010101010101;
    }
    else {
LAB_100543fd0:
      iVar1 = *puVar13 + puVar13[-4];
      iVar7 = puVar13[-4] - *puVar13;
      iVar2 = puVar13[2] + uVar17;
      iVar8 = (int)((ulong)(uVar17 - puVar13[2]) * 0x16a >> 8) - iVar2;
      iVar3 = iVar2 + iVar1;
      iVar1 = iVar1 - iVar2;
      iVar2 = iVar8 + iVar7;
      iVar7 = iVar7 - iVar8;
      iVar8 = puVar13[-1] + puVar13[1];
      uVar17 = puVar13[1] - puVar13[-1];
      iVar4 = puVar13[3] + uVar15;
      uVar15 = uVar15 - puVar13[3];
      iVar5 = iVar4 + iVar8;
      *(undefined1 *)plVar6 =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar5 + iVar3) >> 5) & 0x3ff));
      iVar19 = (int)((ulong)(uVar15 + uVar17) * 0x1d9 >> 8);
      iVar9 = ((int)((ulong)uVar17 * -0x29d >> 8) - iVar5) + iVar19;
      *(undefined1 *)((long)plVar6 + 7) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar3 - iVar5) >> 5) & 0x3ff));
      *(undefined1 *)((long)plVar6 + 1) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar9 + iVar2) >> 5) & 0x3ff));
      iVar3 = (int)((ulong)(uint)(iVar4 - iVar8) * 0x16a >> 8) - iVar9;
      *(undefined1 *)((long)plVar6 + 6) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar2 - iVar9) >> 5) & 0x3ff));
      *(undefined1 *)((long)plVar6 + 2) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar3 + iVar7) >> 5) & 0x3ff));
      iVar2 = iVar3 + ((int)((ulong)uVar15 * 0x115 >> 8) - iVar19);
      *(undefined1 *)((long)plVar6 + 5) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar7 - iVar3) >> 5) & 0x3ff));
      *(undefined1 *)((long)plVar6 + 4) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar2 + iVar1) >> 5) & 0x3ff));
      *(undefined1 *)((long)plVar6 + 3) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar1 - iVar2) >> 5) & 0x3ff));
    }
    lVar11 = lVar11 + 8;
    puVar13 = puVar13 + 8;
    if (lVar11 == 0x40) {
      if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}




void FUN_100544138(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  short *psVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  int iVar19;
  long lVar20;
  short sVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int local_170 [16];
  int local_130 [8];
  int local_110 [8];
  int aiStack_f0 [8];
  int local_d0 [8];
  int local_b0 [8];
  int local_90 [8];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar12 = *(long *)(param_1 + 0x1b8);
  piVar14 = local_170;
  psVar15 = (short *)(param_3 + 0x40);
  uVar16 = 9;
  piVar18 = *(int **)(param_2 + 0x58);
  do {
    sVar21 = psVar15[-0x10];
    if (psVar15[-0x18] == 0 && sVar21 == 0) {
      if ((((psVar15[-8] != 0) || (*psVar15 != 0)) || (psVar15[8] != 0)) ||
         ((psVar15[0x10] != 0 || (psVar15[0x18] != 0)))) {
        sVar21 = 0;
        goto LAB_1005441f4;
      }
      iVar19 = (int)psVar15[-0x20] * *piVar18 * 4;
      *piVar14 = iVar19;
      piVar14[8] = iVar19;
      piVar14[0x10] = iVar19;
      piVar14[0x18] = iVar19;
      piVar14[0x20] = iVar19;
      piVar14[0x28] = iVar19;
      piVar14[0x30] = iVar19;
      lVar24 = 0x38;
    }
    else {
LAB_1005441f4:
      lVar25 = ((long)piVar18[0x30] * (long)psVar15[0x10] + (long)piVar18[0x10] * (long)sVar21) *
               0x1151;
      lVar23 = lVar25 + (long)piVar18[0x10] * (long)sVar21 * 0x187e;
      lVar25 = lVar25 + (long)piVar18[0x30] * (long)psVar15[0x10] * -0x3b21;
      uVar4 = (long)(*piVar18 * (int)psVar15[-0x20]) << 0xd | 0x400;
      lVar24 = uVar4 + (long)(piVar18[0x20] * (int)*psVar15) * 0x2000;
      lVar27 = uVar4 + (long)(piVar18[0x20] * (int)*psVar15) * -0x2000;
      lVar2 = lVar24 + lVar23;
      lVar24 = lVar24 - lVar23;
      lVar23 = lVar27 + lVar25;
      lVar27 = lVar27 - lVar25;
      lVar25 = (long)piVar18[0x38] * (long)psVar15[0x18];
      lVar28 = (long)piVar18[0x28] * (long)psVar15[8];
      lVar29 = (long)piVar18[0x18] * (long)psVar15[-8];
      lVar20 = (long)piVar18[8] * (long)psVar15[-0x18];
      lVar13 = (lVar20 + lVar28 + lVar29 + lVar25) * 0x25a1;
      lVar30 = lVar13 + (lVar29 + lVar25) * -0x3ec5;
      lVar13 = lVar13 + (lVar20 + lVar28) * -0xc7c;
      lVar31 = (lVar20 + lVar25) * -0x1ccd;
      lVar25 = lVar31 + lVar25 * 0x98e + lVar30;
      lVar20 = lVar31 + lVar20 * 0x300b + lVar13;
      lVar31 = (lVar29 + lVar28) * -0x5203;
      lVar13 = lVar31 + lVar28 * 0x41b3 + lVar13;
      lVar30 = lVar31 + lVar29 * 0x6254 + lVar30;
      *piVar14 = (int)((ulong)(lVar20 + lVar2) >> 0xb);
      piVar14[0x38] = (int)((ulong)(lVar2 - lVar20) >> 0xb);
      piVar14[8] = (int)((ulong)(lVar30 + lVar23) >> 0xb);
      piVar14[0x30] = (int)((ulong)(lVar23 - lVar30) >> 0xb);
      piVar14[0x10] = (int)((ulong)(lVar13 + lVar27) >> 0xb);
      piVar14[0x28] = (int)((ulong)(lVar27 - lVar13) >> 0xb);
      piVar14[0x18] = (int)((ulong)(lVar25 + lVar24) >> 0xb);
      iVar19 = (int)((ulong)(lVar24 - lVar25) >> 0xb);
      lVar24 = 0x20;
    }
    piVar14[lVar24] = iVar19;
    piVar14 = piVar14 + 1;
    piVar18 = piVar18 + 1;
    uVar16 = uVar16 - 1;
    psVar15 = psVar15 + 1;
  } while (1 < uVar16);
  lVar24 = 0;
  lVar12 = lVar12 + 0x80;
  piVar14 = local_170 + 4;
  do {
    plVar3 = (long *)(*(long *)(param_4 + lVar24) + (ulong)param_5);
    iVar19 = piVar14[-3];
    iVar22 = piVar14[-2];
    if (iVar19 == 0 && iVar22 == 0) {
      if (((piVar14[-1] != 0) || (*piVar14 != 0)) ||
         ((piVar14[1] != 0 || ((piVar14[2] != 0 || (piVar14[3] != 0)))))) {
        iVar22 = 0;
        goto LAB_100544410;
      }
      *plVar3 = (ulong)*(byte *)(lVar12 + ((ulong)(piVar14[-4] + 0x10U >> 5) & 0x3ff)) *
                0x101010101010101;
    }
    else {
LAB_100544410:
      iVar5 = piVar14[1];
      iVar26 = (piVar14[2] + iVar22) * 0x1151;
      iVar8 = iVar26 + iVar22 * 0x187e;
      iVar26 = iVar26 + piVar14[2] * -0x3b21;
      iVar7 = piVar14[-1];
      iVar22 = piVar14[-4] + 0x10 + *piVar14;
      iVar17 = (piVar14[-4] + 0x10) - *piVar14;
      iVar1 = iVar8 + iVar22 * 0x2000;
      iVar8 = iVar22 * 0x2000 - iVar8;
      iVar22 = iVar26 + iVar17 * 0x2000;
      iVar26 = iVar17 * 0x2000 - iVar26;
      iVar6 = piVar14[3];
      iVar17 = (iVar7 + iVar6 + iVar5 + iVar19) * 0x25a1;
      iVar9 = iVar17 + (iVar7 + iVar6) * -0x3ec5;
      iVar17 = iVar17 + (iVar5 + iVar19) * -0xc7c;
      iVar10 = (iVar6 + iVar19) * -0x1ccd;
      iVar19 = iVar10 + iVar19 * 0x300b + iVar17;
      *(undefined1 *)plVar3 =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar19 + iVar1) >> 0x12) & 0x3ff));
      iVar11 = (iVar7 + iVar5) * -0x5203;
      iVar7 = iVar11 + iVar7 * 0x6254 + iVar9;
      *(undefined1 *)((long)plVar3 + 7) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar1 - iVar19) >> 0x12) & 0x3ff));
      *(undefined1 *)((long)plVar3 + 1) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar7 + iVar22) >> 0x12) & 0x3ff));
      iVar17 = iVar11 + iVar5 * 0x41b3 + iVar17;
      *(undefined1 *)((long)plVar3 + 6) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar22 - iVar7) >> 0x12) & 0x3ff));
      *(undefined1 *)((long)plVar3 + 2) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar17 + iVar26) >> 0x12) & 0x3ff));
      iVar9 = iVar10 + iVar6 * 0x98e + iVar9;
      *(undefined1 *)((long)plVar3 + 5) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar26 - iVar17) >> 0x12) & 0x3ff));
      *(undefined1 *)((long)plVar3 + 3) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar9 + iVar8) >> 0x12) & 0x3ff));
      *(undefined1 *)((long)plVar3 + 4) =
           *(undefined1 *)(lVar12 + ((ulong)((uint)(iVar8 - iVar9) >> 0x12) & 0x3ff));
    }
    lVar24 = lVar24 + 8;
    piVar14 = piVar14 + 8;
    if (lVar24 == 0x40) {
      if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}




void FUN_100544590(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  int local_134 [7];
  undefined4 local_118 [7];
  undefined4 local_fc [7];
  undefined4 local_e0 [7];
  undefined4 local_c4 [7];
  undefined4 local_a8 [7];
  undefined4 local_8c [7];
  long local_70;
  
  lVar22 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar20 = *(long *)(param_1 + 0x1b8);
  lVar24 = *(long *)(param_2 + 0x58);
  do {
    piVar23 = (int *)(lVar24 + lVar22 * 4);
    psVar4 = (short *)(param_3 + lVar22 * 2);
    uVar7 = (long)(*piVar23 * (int)*psVar4) << 0xd | 0x400;
    lVar27 = (long)piVar23[0x10] * (long)psVar4[0x10];
    lVar30 = (long)piVar23[0x20] * (long)psVar4[0x20];
    lVar33 = (long)piVar23[0x30] * (long)psVar4[0x30];
    lVar34 = (lVar30 - lVar33) * 0x1c37;
    lVar35 = (lVar27 - lVar30) * 0xa12;
    lVar5 = uVar7 + lVar30 * -0x3aeb + lVar35 + lVar34;
    lVar21 = uVar7 + (lVar33 + lVar27) * 0x28c6;
    lVar34 = lVar34 + lVar33 * -0x27d + lVar21;
    lVar21 = lVar35 + lVar27 * -0x4f0f + lVar21;
    lVar28 = (long)piVar23[8] * (long)psVar4[8];
    lVar31 = (long)piVar23[0x18] * (long)psVar4[0x18];
    lVar25 = (long)piVar23[0x28] * (long)psVar4[0x28];
    lVar26 = (lVar31 + lVar28) * 0x1def;
    lVar32 = (lVar25 + lVar31) * -0x2c1f;
    lVar35 = lVar26 + (lVar28 - lVar31) * 0x573 + lVar32;
    lVar29 = (lVar25 + lVar28) * 0x13a3;
    lVar26 = lVar29 + lVar26 + (lVar28 - lVar31) * -0x573;
    lVar32 = lVar29 + lVar25 * 0x3bde + lVar32;
    local_134[lVar22] = (int)((ulong)(lVar26 + lVar34) >> 0xb);
    local_8c[lVar22] = (int)((ulong)(lVar34 - lVar26) >> 0xb);
    local_118[lVar22] = (int)((ulong)(lVar35 + lVar5) >> 0xb);
    local_a8[lVar22] = (int)((ulong)(lVar5 - lVar35) >> 0xb);
    local_fc[lVar22] = (int)((ulong)(lVar32 + lVar21) >> 0xb);
    local_c4[lVar22] = (int)((ulong)(lVar21 - lVar32) >> 0xb);
    local_e0[lVar22] = (int)(uVar7 + (lVar30 - (lVar33 + lVar27)) * 0x2d41 >> 0xb);
    lVar22 = lVar22 + 1;
  } while ((int)lVar22 != 7);
  lVar22 = 0;
  piVar23 = local_134;
  lVar20 = lVar20 + 0x80;
  do {
    iVar10 = piVar23[1];
    puVar6 = (undefined1 *)(*(long *)(param_4 + lVar22) + (ulong)param_5);
    iVar1 = *piVar23 * 0x2000 + 0x20000;
    iVar8 = piVar23[5];
    iVar11 = piVar23[6];
    iVar9 = piVar23[3];
    iVar12 = piVar23[4];
    iVar15 = (iVar12 - iVar11) * 0x1c37;
    iVar13 = piVar23[2];
    iVar16 = (iVar13 - iVar12) * 0xa12;
    iVar17 = (iVar9 + iVar10) * 0x1def;
    iVar14 = iVar1 + (iVar11 + iVar13) * 0x28c6;
    iVar2 = iVar15 + iVar11 * -0x27d + iVar14;
    iVar18 = (iVar8 + iVar9) * -0x2c1f;
    iVar19 = (iVar8 + iVar10) * 0x13a3;
    iVar3 = iVar17 + (iVar10 - iVar9) * -0x573 + iVar19;
    iVar15 = iVar1 + iVar12 * -0x3aeb + iVar16 + iVar15;
    *puVar6 = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar3 + iVar2) >> 0x12) & 0x3ff));
    iVar9 = iVar17 + (iVar10 - iVar9) * 0x573 + iVar18;
    iVar14 = iVar16 + iVar13 * -0x4f0f + iVar14;
    puVar6[6] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar2 - iVar3) >> 0x12) & 0x3ff));
    iVar18 = iVar19 + iVar8 * 0x3bde + iVar18;
    puVar6[1] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar9 + iVar15) >> 0x12) & 0x3ff));
    puVar6[5] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar15 - iVar9) >> 0x12) & 0x3ff));
    puVar6[2] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar18 + iVar14) >> 0x12) & 0x3ff));
    puVar6[4] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar14 - iVar18) >> 0x12) & 0x3ff));
    puVar6[3] = *(undefined1 *)
                 (lVar20 + ((ulong)((uint)(iVar1 + (iVar12 - (iVar11 + iVar13)) * 0x2d41) >> 0x12) &
                           0x3ff));
    lVar22 = lVar22 + 8;
    piVar23 = piVar23 + 7;
  } while (lVar22 != 0x38);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1005448d8(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int local_c8 [6];
  int local_b0 [6];
  undefined4 local_98 [6];
  undefined4 local_80 [6];
  int local_68 [6];
  undefined4 local_50 [6];
  long local_38;
  
  lVar20 = 0;
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar19 = *(long *)(param_1 + 0x1b8);
  lVar22 = *(long *)(param_2 + 0x58);
  do {
    piVar21 = (int *)(lVar22 + lVar20 * 4);
    psVar2 = (short *)(param_3 + lVar20 * 2);
    uVar6 = (long)(*piVar21 * (int)*psVar2) << 0xd | 0x400;
    sVar11 = psVar2[0x20];
    iVar16 = piVar21[0x20];
    lVar17 = uVar6 + (long)iVar16 * (long)sVar11 * 0x16a1;
    lVar3 = (long)piVar21[0x10] * (long)psVar2[0x10] * 0x2731 + lVar17;
    lVar17 = lVar17 + (long)piVar21[0x10] * (long)psVar2[0x10] * -0x2731;
    lVar18 = (long)piVar21[8] * (long)psVar2[8];
    lVar24 = (long)piVar21[0x18] * (long)psVar2[0x18];
    lVar23 = (long)piVar21[0x28] * (long)psVar2[0x28];
    lVar15 = (lVar23 + lVar18) * 0xbb6;
    lVar4 = lVar15 + (lVar24 + lVar18) * 0x2000;
    lVar15 = lVar15 + (lVar23 - lVar24) * 0x2000;
    iVar14 = (int)lVar18 - ((int)lVar24 + (int)lVar23);
    local_c8[lVar20] = (int)((ulong)(lVar4 + lVar3) >> 0xb);
    local_50[lVar20] = (int)((ulong)(lVar3 - lVar4) >> 0xb);
    iVar16 = (int)(uVar6 + (long)iVar16 * (long)sVar11 * -0x2d42 >> 0xb);
    local_b0[lVar20] = iVar16 + iVar14 * 4;
    local_68[lVar20] = iVar16 + iVar14 * -4;
    local_98[lVar20] = (int)((ulong)(lVar15 + lVar17) >> 0xb);
    local_80[lVar20] = (int)((ulong)(lVar17 - lVar15) >> 0xb);
    lVar20 = lVar20 + 1;
  } while ((int)lVar20 != 6);
  lVar20 = 0;
  piVar21 = local_c8;
  lVar19 = lVar19 + 0x80;
  do {
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar20) + (param_5 & 0xffffffff));
    iVar8 = piVar21[1];
    iVar9 = piVar21[5];
    iVar16 = *piVar21 * 0x2000 + 0x20000;
    iVar12 = iVar16 + piVar21[4] * 0x16a1;
    iVar7 = piVar21[2];
    iVar10 = piVar21[3];
    iVar14 = iVar12 + iVar7 * 0x2731;
    iVar13 = (iVar9 + iVar8) * 0xbb6;
    iVar1 = iVar13 + (iVar10 + iVar8) * 0x2000;
    iVar16 = iVar16 + piVar21[4] * -0x2d42;
    iVar8 = iVar8 - (iVar10 + iVar9);
    iVar13 = iVar13 + (iVar9 - iVar10) * 0x2000;
    *puVar5 = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar1 + iVar14) >> 0x12) & 0x3ff));
    iVar12 = iVar12 + iVar7 * -0x2731;
    puVar5[5] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar14 - iVar1) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar16 + iVar8 * 0x2000) >> 0x12) & 0x3ff))
    ;
    puVar5[4] = *(undefined1 *)
                 (lVar19 + ((ulong)((uint)(iVar16 + iVar8 * -0x2000) >> 0x12) & 0x3ff));
    puVar5[2] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar13 + iVar12) >> 0x12) & 0x3ff));
    puVar5[3] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar12 - iVar13) >> 0x12) & 0x3ff));
    lVar20 = lVar20 + 8;
    piVar21 = piVar21 + 6;
  } while (lVar20 != 0x30);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100544b10(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  int local_9c [5];
  undefined4 local_88 [5];
  undefined4 local_74 [5];
  undefined4 local_60 [5];
  undefined4 local_4c [5];
  long local_38;
  
  lVar16 = 0;
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar15 = *(long *)(param_1 + 0x1b8);
  lVar18 = *(long *)(param_2 + 0x58);
  do {
    piVar17 = (int *)(lVar18 + lVar16 * 4);
    psVar4 = (short *)(param_3 + lVar16 * 2);
    uVar7 = (long)(*piVar17 * (int)*psVar4) << 0xd | 0x400;
    lVar12 = (long)piVar17[0x20] * (long)psVar4[0x20] + (long)piVar17[0x10] * (long)psVar4[0x10];
    lVar13 = (long)piVar17[0x10] * (long)psVar4[0x10] - (long)piVar17[0x20] * (long)psVar4[0x20];
    lVar19 = uVar7 + lVar13 * 0xb50;
    lVar5 = lVar19 + lVar12 * 0x194c;
    lVar19 = lVar19 + lVar12 * -0x194c;
    lVar12 = ((long)piVar17[0x18] * (long)psVar4[0x18] + (long)piVar17[8] * (long)psVar4[8]) *
             0x1a9a;
    lVar14 = lVar12 + (long)piVar17[8] * (long)psVar4[8] * 0x1071;
    lVar12 = lVar12 + (long)piVar17[0x18] * (long)psVar4[0x18] * -0x45a4;
    local_9c[lVar16] = (int)((ulong)(lVar14 + lVar5) >> 0xb);
    local_4c[lVar16] = (int)((ulong)(lVar5 - lVar14) >> 0xb);
    local_88[lVar16] = (int)((ulong)(lVar12 + lVar19) >> 0xb);
    local_60[lVar16] = (int)((ulong)(lVar19 - lVar12) >> 0xb);
    local_74[lVar16] = (int)(uVar7 + lVar13 * -0x2d40 >> 0xb);
    lVar16 = lVar16 + 1;
  } while ((int)lVar16 != 5);
  lVar16 = 0;
  piVar17 = local_9c;
  lVar15 = lVar15 + 0x80;
  do {
    iVar1 = *piVar17 * 0x2000 + 0x20000;
    iVar2 = piVar17[4] + piVar17[2];
    iVar11 = piVar17[2] - piVar17[4];
    iVar8 = iVar1 + iVar11 * 0xb50;
    iVar3 = iVar8 + iVar2 * 0x194c;
    iVar10 = (piVar17[3] + piVar17[1]) * 0x1a9a;
    iVar9 = iVar10 + piVar17[1] * 0x1071;
    puVar6 = (undefined1 *)(*(long *)(param_4 + lVar16) + (param_5 & 0xffffffff));
    iVar10 = iVar10 + piVar17[3] * -0x45a4;
    iVar8 = iVar8 + iVar2 * -0x194c;
    *puVar6 = *(undefined1 *)(lVar15 + ((ulong)((uint)(iVar9 + iVar3) >> 0x12) & 0x3ff));
    puVar6[4] = *(undefined1 *)(lVar15 + ((ulong)((uint)(iVar3 - iVar9) >> 0x12) & 0x3ff));
    puVar6[1] = *(undefined1 *)(lVar15 + ((ulong)((uint)(iVar10 + iVar8) >> 0x12) & 0x3ff));
    puVar6[3] = *(undefined1 *)(lVar15 + ((ulong)((uint)(iVar8 - iVar10) >> 0x12) & 0x3ff));
    puVar6[2] = *(undefined1 *)
                 (lVar15 + ((ulong)((uint)(iVar1 + iVar11 * -0x2d40) >> 0x12) & 0x3ff));
    lVar16 = lVar16 + 8;
    piVar17 = piVar17 + 5;
  } while (lVar16 != 0x28);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100544d1c(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  short *psVar1;
  undefined1 *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  int iVar12;
  int local_58 [8];
  int local_38 [4];
  int local_28 [4];
  long local_18;
  
  lVar9 = 0;
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  lVar8 = *(long *)(param_1 + 0x1b8);
  lVar11 = *(long *)(param_2 + 0x58);
  do {
    piVar10 = (int *)(lVar11 + lVar9 * 4);
    psVar1 = (short *)(param_3 + lVar9 * 2);
    iVar12 = piVar10[0x10] * (int)psVar1[0x10] + *piVar10 * (int)*psVar1;
    sVar3 = psVar1[0x18];
    iVar4 = piVar10[0x18];
    lVar6 = ((long)iVar4 * (long)sVar3 + (long)piVar10[8] * (long)psVar1[8]) * 0x1151 + 0x400;
    iVar5 = *piVar10 * (int)*psVar1 - piVar10[0x10] * (int)psVar1[0x10];
    iVar7 = (int)((ulong)(lVar6 + (long)piVar10[8] * (long)psVar1[8] * 0x187e) >> 0xb);
    local_58[lVar9] = iVar7 + iVar12 * 4;
    local_28[lVar9] = iVar12 * 4 - iVar7;
    iVar12 = (int)((ulong)(lVar6 + (long)iVar4 * (long)sVar3 * -0x3b21) >> 0xb);
    local_58[lVar9 + 4] = iVar12 + iVar5 * 4;
    local_38[lVar9] = iVar5 * 4 - iVar12;
    lVar9 = lVar9 + 1;
  } while ((int)lVar9 != 4);
  lVar9 = 0;
  piVar10 = local_58;
  lVar8 = lVar8 + 0x80;
  do {
    puVar2 = (undefined1 *)(*(long *)(param_4 + lVar9) + (param_5 & 0xffffffff));
    iVar12 = *piVar10 + 0x10 + piVar10[2];
    iVar7 = (*piVar10 + 0x10) - piVar10[2];
    iVar5 = (piVar10[3] + piVar10[1]) * 0x1151;
    iVar4 = iVar5 + piVar10[1] * 0x187e;
    iVar5 = iVar5 + piVar10[3] * -0x3b21;
    *puVar2 = *(undefined1 *)(lVar8 + ((ulong)((uint)(iVar4 + iVar12 * 0x2000) >> 0x12) & 0x3ff));
    puVar2[3] = *(undefined1 *)(lVar8 + ((ulong)((uint)(iVar12 * 0x2000 - iVar4) >> 0x12) & 0x3ff));
    puVar2[1] = *(undefined1 *)(lVar8 + ((ulong)((uint)(iVar5 + iVar7 * 0x2000) >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar8 + ((ulong)((uint)(iVar7 * 0x2000 - iVar5) >> 0x12) & 0x3ff));
    lVar9 = lVar9 + 8;
    piVar10 = piVar10 + 4;
  } while (lVar9 != 0x20);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100544eb0(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  short *psVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int *piVar14;
  int local_3c [9];
  long local_18;
  
  lVar12 = 0;
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = *(long *)(param_1 + 0x1b8);
  lVar13 = *(long *)(param_2 + 0x58);
  do {
    piVar14 = (int *)(lVar13 + lVar12 * 4);
    psVar1 = (short *)(param_3 + lVar12 * 2);
    uVar3 = (long)(*piVar14 * (int)*psVar1) << 0xd | 0x400;
    sVar5 = psVar1[0x10];
    iVar7 = piVar14[0x10];
    lVar10 = uVar3 + (long)iVar7 * (long)sVar5 * 0x16a1;
    sVar6 = psVar1[8];
    iVar8 = piVar14[8];
    local_3c[lVar12] = (int)((ulong)((long)iVar8 * (long)sVar6 * 0x2731 + lVar10) >> 0xb);
    local_3c[lVar12 + 6] = (int)((ulong)(lVar10 + (long)iVar8 * (long)sVar6 * -0x2731) >> 0xb);
    local_3c[lVar12 + 3] = (int)(uVar3 + (long)iVar7 * (long)sVar5 * -0x2d42 >> 0xb);
    lVar12 = lVar12 + 1;
  } while ((int)lVar12 != 3);
  lVar12 = 0;
  piVar14 = local_3c;
  lVar11 = lVar11 + 0x80;
  do {
    puVar2 = (undefined1 *)(*(long *)(param_4 + lVar12) + (ulong)param_5);
    iVar8 = piVar14[1];
    iVar7 = *piVar14 * 0x2000 + 0x20000;
    iVar4 = piVar14[2];
    iVar9 = iVar7 + iVar4 * 0x16a1;
    *puVar2 = *(undefined1 *)(lVar11 + ((ulong)((uint)(iVar9 + iVar8 * 0x2731) >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar11 + ((ulong)((uint)(iVar9 + iVar8 * -0x2731) >> 0x12) & 0x3ff))
    ;
    puVar2[1] = *(undefined1 *)(lVar11 + ((ulong)((uint)(iVar7 + iVar4 * -0x2d42) >> 0x12) & 0x3ff))
    ;
    lVar12 = lVar12 + 8;
    piVar14 = piVar14 + 3;
  } while (lVar12 != 0x18);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100545000(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  long lVar7;
  
  lVar1 = *(long *)(param_1 + 0x1b8) + 0x80;
  piVar6 = *(int **)(param_2 + 0x58);
  iVar4 = *piVar6 * (uint)*param_3 + 4;
  iVar2 = iVar4 + piVar6[8] * (uint)param_3[8];
  iVar4 = iVar4 - piVar6[8] * (uint)param_3[8];
  iVar3 = piVar6[9] * (uint)param_3[9] + piVar6[1] * (uint)param_3[1];
  iVar5 = piVar6[1] * (uint)param_3[1] - piVar6[9] * (uint)param_3[9];
  lVar7 = *param_4;
  *(undefined1 *)(lVar7 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar3 + iVar2) >> 3) & 0x3ff));
  ((undefined1 *)(lVar7 + (ulong)param_5))[1] =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 - iVar3) >> 3) & 0x3ff));
  lVar7 = param_4[1];
  *(undefined1 *)(lVar7 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar5 + iVar4) >> 3) & 0x3ff));
  ((undefined1 *)(lVar7 + (ulong)param_5))[1] =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar4 - iVar5) >> 3) & 0x3ff));
  return;
}




void FUN_10054509c(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  *(undefined1 *)(*param_4 + (ulong)param_5) =
       *(undefined1 *)
        (((ulong)(**(int **)(param_2 + 0x58) * (uint)*param_3 + 4 >> 3) & 0x3ff) +
         *(long *)(param_1 + 0x1b8) + 0x80);
  return;
}




void FUN_1005450cc(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  int local_190 [72];
  long local_70;
  
  lVar22 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar23 = *(long *)(param_1 + 0x1b8);
  lVar24 = *(long *)(param_2 + 0x58);
  do {
    piVar5 = (int *)(lVar24 + lVar22 * 4);
    psVar6 = (short *)(param_3 + lVar22 * 2);
    uVar11 = (long)(*piVar5 * (int)*psVar6) << 0xd | 0x400;
    lVar28 = (long)piVar5[0x10] * (long)psVar6[0x10];
    lVar29 = (long)piVar5[0x20] * (long)psVar6[0x20];
    lVar31 = uVar11 + (long)piVar5[0x30] * (long)psVar6[0x30] * 0x16a1;
    lVar25 = uVar11 + (long)piVar5[0x30] * (long)psVar6[0x30] * -0x2d42;
    lVar33 = lVar25 + (lVar28 - lVar29) * 0x16a1;
    lVar7 = (lVar29 + lVar28) * 0x2a87 + lVar29 * -0x7dc + lVar31;
    lVar8 = lVar31 + (lVar29 + lVar28) * -0x2a87 + lVar28 * 0x22ab;
    lVar31 = lVar31 + lVar28 * -0x22ab + lVar29 * 0x7dc;
    lVar30 = (long)piVar5[8] * (long)psVar6[8];
    lVar34 = (long)piVar5[0x28] * (long)psVar6[0x28];
    lVar26 = (long)piVar5[0x38] * (long)psVar6[0x38];
    lVar27 = (long)piVar5[0x18] * (long)psVar6[0x18] * -0x2731;
    lVar32 = (lVar34 + lVar30) * 0x1d17;
    lVar35 = (lVar26 + lVar30) * 0xf7a;
    lVar9 = lVar32 + (long)piVar5[0x18] * (long)psVar6[0x18] * 0x2731 + lVar35;
    lVar32 = lVar27 + (lVar34 - lVar26) * -0x2c91 + lVar32;
    lVar35 = (lVar34 - lVar26) * 0x2c91 + lVar27 + lVar35;
    lVar30 = lVar30 - (lVar34 + lVar26);
    local_190[lVar22] = (int)((ulong)(lVar9 + lVar7) >> 0xb);
    local_190[lVar22 + 0x40] = (int)((ulong)(lVar7 - lVar9) >> 0xb);
    local_190[lVar22 + 8] = (int)((ulong)(lVar30 * 0x2731 + lVar33) >> 0xb);
    local_190[lVar22 + 0x38] = (int)((ulong)(lVar33 + lVar30 * -0x2731) >> 0xb);
    local_190[lVar22 + 0x10] = (int)((ulong)(lVar32 + lVar8) >> 0xb);
    local_190[lVar22 + 0x30] = (int)((ulong)(lVar8 - lVar32) >> 0xb);
    local_190[lVar22 + 0x18] = (int)((ulong)(lVar35 + lVar31) >> 0xb);
    local_190[lVar22 + 0x28] = (int)((ulong)(lVar31 - lVar35) >> 0xb);
    local_190[lVar22 + 0x20] = (int)((ulong)(lVar25 + (lVar28 - lVar29) * -0x2d42) >> 0xb);
    lVar22 = lVar22 + 1;
  } while ((int)lVar22 != 8);
  lVar22 = 0;
  lVar23 = lVar23 + 0x80;
  do {
    iVar14 = local_190[lVar22 + 1];
    iVar15 = local_190[lVar22 + 7];
    iVar1 = local_190[lVar22] * 0x2000 + 0x20000;
    iVar17 = iVar1 + local_190[lVar22 + 6] * 0x16a1;
    iVar12 = local_190[lVar22 + 2];
    iVar13 = local_190[lVar22 + 4];
    iVar16 = local_190[lVar22 + 5];
    iVar1 = iVar1 + local_190[lVar22 + 6] * -0x2d42;
    iVar18 = iVar1 + (iVar12 - iVar13) * 0x16a1;
    iVar2 = (iVar13 + iVar12) * 0x2a87 + iVar13 * -0x7dc + iVar17;
    iVar3 = iVar17 + (iVar13 + iVar12) * -0x2a87 + iVar12 * 0x22ab;
    iVar19 = local_190[lVar22 + 3] * -0x2731;
    iVar20 = (iVar16 + iVar14) * 0x1d17;
    iVar21 = (iVar15 + iVar14) * 0xf7a;
    iVar17 = iVar17 + iVar12 * -0x22ab + iVar13 * 0x7dc;
    iVar4 = iVar20 + local_190[lVar22 + 3] * 0x2731 + iVar21;
    iVar14 = iVar14 - (iVar16 + iVar15);
    puVar10 = (undefined1 *)(*(long *)(param_4 + lVar22) + (ulong)param_5);
    *puVar10 = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar4 + iVar2) >> 0x12) & 0x3ff));
    puVar10[8] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar2 - iVar4) >> 0x12) & 0x3ff));
    puVar10[1] = *(undefined1 *)
                  (lVar23 + ((ulong)((uint)(iVar14 * 0x2731 + iVar18) >> 0x12) & 0x3ff));
    iVar20 = iVar19 + (iVar16 - iVar15) * -0x2c91 + iVar20;
    puVar10[7] = *(undefined1 *)
                  (lVar23 + ((ulong)((uint)(iVar18 + iVar14 * -0x2731) >> 0x12) & 0x3ff));
    puVar10[2] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar20 + iVar3) >> 0x12) & 0x3ff));
    iVar21 = (iVar16 - iVar15) * 0x2c91 + iVar19 + iVar21;
    puVar10[6] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar3 - iVar20) >> 0x12) & 0x3ff));
    puVar10[3] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar21 + iVar17) >> 0x12) & 0x3ff));
    puVar10[5] = *(undefined1 *)(lVar23 + ((ulong)((uint)(iVar17 - iVar21) >> 0x12) & 0x3ff));
    puVar10[4] = *(undefined1 *)
                  (lVar23 + ((ulong)((uint)(iVar1 + (iVar12 - iVar13) * -0x2d42) >> 0x12) & 0x3ff));
    lVar22 = lVar22 + 8;
  } while (lVar22 != 0x48);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10054545c(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int local_1b0 [80];
  long local_70;
  
  lVar19 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar20 = *(long *)(param_1 + 0x1b8);
  lVar23 = *(long *)(param_2 + 0x58);
  do {
    piVar2 = (int *)(lVar23 + lVar19 * 4);
    psVar3 = (short *)(param_3 + lVar19 * 2);
    uVar8 = (long)(*piVar2 * (int)*psVar3) << 0xd | 0x400;
    lVar25 = (long)piVar2[0x20] * (long)psVar3[0x20];
    lVar29 = uVar8 + lVar25 * 0x249d;
    lVar30 = uVar8 + lVar25 * -0xdfc;
    lVar32 = ((long)piVar2[0x30] * (long)psVar3[0x30] + (long)piVar2[0x10] * (long)psVar3[0x10]) *
             0x1a9a;
    lVar26 = lVar32 + (long)piVar2[0x10] * (long)psVar3[0x10] * 0x1071;
    lVar32 = lVar32 + (long)piVar2[0x30] * (long)psVar3[0x30] * -0x45a4;
    lVar4 = lVar26 + lVar29;
    lVar29 = lVar29 - lVar26;
    lVar26 = lVar32 + lVar30;
    lVar30 = lVar30 - lVar32;
    lVar31 = (long)piVar2[8] * (long)psVar3[8];
    lVar18 = (long)piVar2[0x28] * (long)psVar3[0x28];
    lVar32 = (long)piVar2[0x38] * (long)psVar3[0x38] + (long)piVar2[0x18] * (long)psVar3[0x18];
    lVar21 = (long)piVar2[0x18] * (long)psVar3[0x18] - (long)piVar2[0x38] * (long)psVar3[0x38];
    lVar5 = lVar21 * 0x9e3 + lVar18 * 0x2000;
    lVar6 = lVar32 * 0x1e6f + lVar31 * 0x2cb3 + lVar5;
    lVar5 = lVar32 * -0x1e6f + lVar31 * 0x714 + lVar5;
    lVar28 = lVar18 * 0x2000 + lVar21 * -0x19e3;
    iVar14 = (int)lVar31 - ((int)lVar21 + (int)lVar18);
    lVar18 = lVar31 * 0x2853 - (lVar32 * 0x12cf + lVar28);
    lVar28 = lVar28 + lVar32 * -0x12cf + lVar31 * 0x148c;
    local_1b0[lVar19] = (int)((ulong)(lVar6 + lVar4) >> 0xb);
    local_1b0[lVar19 + 0x48] = (int)((ulong)(lVar4 - lVar6) >> 0xb);
    local_1b0[lVar19 + 8] = (int)((ulong)(lVar18 + lVar26) >> 0xb);
    local_1b0[lVar19 + 0x40] = (int)((ulong)(lVar26 - lVar18) >> 0xb);
    iVar17 = (int)(uVar8 + lVar25 * -0x2d42 >> 0xb);
    local_1b0[lVar19 + 0x10] = iVar17 + iVar14 * 4;
    local_1b0[lVar19 + 0x38] = iVar17 + iVar14 * -4;
    local_1b0[lVar19 + 0x18] = (int)((ulong)(lVar28 + lVar30) >> 0xb);
    local_1b0[lVar19 + 0x30] = (int)((ulong)(lVar30 - lVar28) >> 0xb);
    local_1b0[lVar19 + 0x20] = (int)((ulong)(lVar5 + lVar29) >> 0xb);
    local_1b0[lVar19 + 0x28] = (int)((ulong)(lVar29 - lVar5) >> 0xb);
    lVar19 = lVar19 + 1;
  } while ((int)lVar19 != 8);
  lVar19 = 0;
  lVar20 = lVar20 + 0x80;
  do {
    iVar9 = local_1b0[lVar19 + 1];
    iVar14 = local_1b0[lVar19] * 0x2000 + 0x20000;
    iVar17 = local_1b0[lVar19 + 4];
    iVar10 = local_1b0[lVar19 + 5];
    iVar11 = iVar14 + iVar17 * 0x249d;
    iVar12 = iVar14 + iVar17 * -0xdfc;
    iVar14 = iVar14 + iVar17 * -0x2d42;
    iVar24 = (local_1b0[lVar19 + 6] + local_1b0[lVar19 + 2]) * 0x1a9a;
    iVar13 = iVar24 + local_1b0[lVar19 + 2] * 0x1071;
    iVar24 = iVar24 + local_1b0[lVar19 + 6] * -0x45a4;
    iVar17 = iVar13 + iVar11;
    iVar11 = iVar11 - iVar13;
    iVar13 = iVar24 + iVar12;
    iVar27 = iVar10 * 0x2000;
    iVar22 = local_1b0[lVar19 + 7] + local_1b0[lVar19 + 3];
    iVar16 = local_1b0[lVar19 + 3] - local_1b0[lVar19 + 7];
    iVar12 = iVar12 - iVar24;
    iVar1 = iVar16 * 0x9e3 + iVar27;
    iVar24 = iVar22 * 0x1e6f + iVar9 * 0x2cb3 + iVar1;
    iVar1 = iVar22 * -0x1e6f + iVar9 * 0x714 + iVar1;
    iVar27 = iVar27 + iVar16 * -0x19e3;
    puVar7 = (undefined1 *)(*(long *)(param_4 + lVar19) + (ulong)param_5);
    *puVar7 = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar24 + iVar17) >> 0x12) & 0x3ff));
    iVar15 = iVar9 * 0x2853 - (iVar22 * 0x12cf + iVar27);
    puVar7[9] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar17 - iVar24) >> 0x12) & 0x3ff));
    puVar7[1] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar15 + iVar13) >> 0x12) & 0x3ff));
    iVar17 = iVar9 - (iVar16 + iVar10);
    puVar7[8] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar13 - iVar15) >> 0x12) & 0x3ff));
    puVar7[2] = *(undefined1 *)
                 (lVar20 + ((ulong)((uint)(iVar14 + iVar17 * 0x2000) >> 0x12) & 0x3ff));
    iVar27 = iVar27 + iVar22 * -0x12cf + iVar9 * 0x148c;
    puVar7[7] = *(undefined1 *)
                 (lVar20 + ((ulong)((uint)(iVar14 + iVar17 * -0x2000) >> 0x12) & 0x3ff));
    puVar7[3] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar27 + iVar12) >> 0x12) & 0x3ff));
    puVar7[6] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar12 - iVar27) >> 0x12) & 0x3ff));
    puVar7[4] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar1 + iVar11) >> 0x12) & 0x3ff));
    puVar7[5] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar11 - iVar1) >> 0x12) & 0x3ff));
    lVar19 = lVar19 + 8;
  } while (lVar19 != 0x50);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100545844(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  int local_1d0 [88];
  long local_70;
  
  lVar28 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar29 = *(long *)(param_1 + 0x1b8);
  lVar33 = *(long *)(param_2 + 0x58);
  do {
    piVar2 = (int *)(lVar33 + lVar28 * 4);
    psVar3 = (short *)(param_3 + lVar28 * 2);
    lVar35 = (long)piVar2[0x10] * (long)psVar3[0x10];
    uVar6 = (long)(*piVar2 * (int)*psVar3) << 0xd | 0x400;
    lVar30 = (long)piVar2[0x20] * (long)psVar3[0x20];
    lVar37 = (long)piVar2[0x30] * (long)psVar3[0x30];
    lVar39 = (lVar30 - lVar35) * 0xdc9;
    lVar25 = (lVar37 + lVar35) - lVar30;
    lVar26 = uVar6 + lVar25 * 0x2b6c;
    lVar31 = lVar26 + (lVar30 - lVar37) * 0x517e;
    lVar4 = lVar31 + lVar30 * -0x3a4c + lVar39;
    lVar31 = lVar31 + lVar37 * 0x43b5;
    lVar32 = lVar26 + lVar39 + lVar35 * -0x306f;
    lVar26 = lVar26 + (lVar37 + lVar35) * -0x24fb;
    lVar38 = lVar26 + lVar37 * -0x193d;
    lVar26 = lVar35 * -0x2c83 + lVar30 * 0x3e39 + lVar26;
    lVar36 = (long)piVar2[8] * (long)psVar3[8];
    lVar40 = (long)piVar2[0x18] * (long)psVar3[0x18];
    lVar24 = (long)piVar2[0x28] * (long)psVar3[0x28];
    lVar34 = (long)piVar2[0x38] * (long)psVar3[0x38];
    lVar27 = (lVar40 + lVar36 + lVar24 + lVar34) * 0xcc0;
    lVar37 = (lVar40 + lVar36) * 0x1c6a;
    lVar41 = (lVar24 + lVar36) * 0x1574;
    lVar35 = lVar27 + (lVar24 + lVar40) * -0x2537;
    lVar30 = lVar41 + lVar24 * -0x2626 + lVar35;
    lVar42 = (lVar34 + lVar40) * -0x398b;
    lVar35 = lVar37 + lVar40 * 0x4258 + lVar42 + lVar35;
    lVar39 = lVar27 + (lVar34 + lVar36) * 3000;
    lVar37 = lVar37 + lVar36 * -0x1d8a + lVar41 + lVar39;
    lVar39 = lVar42 + lVar34 * 0x4347 + lVar39;
    lVar27 = lVar40 * -0x2ef3 + lVar24 * 0x200b + lVar34 * -0x35ea + lVar27;
    local_1d0[lVar28] = (int)((ulong)(lVar37 + lVar31) >> 0xb);
    local_1d0[lVar28 + 0x50] = (int)((ulong)(lVar31 - lVar37) >> 0xb);
    local_1d0[lVar28 + 8] = (int)((ulong)(lVar35 + lVar4) >> 0xb);
    local_1d0[lVar28 + 0x48] = (int)((ulong)(lVar4 - lVar35) >> 0xb);
    local_1d0[lVar28 + 0x10] = (int)((ulong)(lVar30 + lVar38) >> 0xb);
    local_1d0[lVar28 + 0x40] = (int)((ulong)(lVar38 - lVar30) >> 0xb);
    local_1d0[lVar28 + 0x18] = (int)((ulong)(lVar39 + lVar32) >> 0xb);
    local_1d0[lVar28 + 0x38] = (int)((ulong)(lVar32 - lVar39) >> 0xb);
    local_1d0[lVar28 + 0x20] = (int)((ulong)(lVar27 + lVar26) >> 0xb);
    local_1d0[lVar28 + 0x30] = (int)((ulong)(lVar26 - lVar27) >> 0xb);
    local_1d0[lVar28 + 0x28] = (int)(uVar6 + lVar25 * -0x2d41 >> 0xb);
    lVar28 = lVar28 + 1;
  } while ((int)lVar28 != 8);
  lVar28 = 0;
  lVar29 = lVar29 + 0x80;
  do {
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar28) + (ulong)param_5);
    iVar10 = local_1d0[lVar28 + 1];
    iVar7 = local_1d0[lVar28 + 4];
    iVar11 = local_1d0[lVar28 + 5];
    iVar8 = local_1d0[lVar28 + 6];
    iVar12 = local_1d0[lVar28 + 7];
    iVar1 = local_1d0[lVar28] * 0x2000 + 0x20000;
    iVar9 = local_1d0[lVar28 + 2];
    iVar13 = local_1d0[lVar28 + 3];
    iVar23 = (iVar8 + iVar9) - iVar7;
    iVar20 = (iVar7 - iVar9) * 0xdc9;
    iVar14 = iVar1 + iVar23 * 0x2b6c;
    iVar15 = iVar14 + (iVar7 - iVar8) * 0x517e;
    iVar16 = iVar14 + iVar20 + iVar9 * -0x306f;
    iVar17 = iVar15 + iVar8 * 0x43b5;
    iVar14 = iVar14 + (iVar8 + iVar9) * -0x24fb;
    iVar18 = iVar14 + iVar8 * -0x193d;
    iVar21 = (iVar13 + iVar10 + iVar11 + iVar12) * 0xcc0;
    iVar22 = (iVar13 + iVar10) * 0x1c6a;
    iVar14 = iVar9 * -0x2c83 + iVar7 * 0x3e39 + iVar14;
    iVar8 = (iVar11 + iVar10) * 0x1574;
    iVar19 = iVar21 + (iVar12 + iVar10) * 3000;
    iVar20 = iVar15 + iVar7 * -0x3a4c + iVar20;
    iVar7 = iVar22 + iVar10 * -0x1d8a + iVar8 + iVar19;
    *puVar5 = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar7 + iVar17) >> 0x12) & 0x3ff));
    iVar10 = (iVar12 + iVar13) * -0x398b;
    iVar9 = iVar21 + (iVar11 + iVar13) * -0x2537;
    iVar8 = iVar8 + iVar11 * -0x2626 + iVar9;
    iVar9 = iVar22 + iVar13 * 0x4258 + iVar10 + iVar9;
    puVar5[10] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar17 - iVar7) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar9 + iVar20) >> 0x12) & 0x3ff));
    iVar19 = iVar10 + iVar12 * 0x4347 + iVar19;
    puVar5[9] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar20 - iVar9) >> 0x12) & 0x3ff));
    puVar5[2] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar8 + iVar18) >> 0x12) & 0x3ff));
    puVar5[8] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar18 - iVar8) >> 0x12) & 0x3ff));
    puVar5[3] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar19 + iVar16) >> 0x12) & 0x3ff));
    iVar21 = iVar13 * -0x2ef3 + iVar11 * 0x200b + iVar12 * -0x35ea + iVar21;
    puVar5[7] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar16 - iVar19) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar21 + iVar14) >> 0x12) & 0x3ff));
    puVar5[6] = *(undefined1 *)(lVar29 + ((ulong)((uint)(iVar14 - iVar21) >> 0x12) & 0x3ff));
    puVar5[5] = *(undefined1 *)
                 (lVar29 + ((ulong)((uint)(iVar1 + iVar23 * -0x2d41) >> 0x12) & 0x3ff));
    lVar28 = lVar28 + 8;
  } while (lVar28 != 0x58);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100545cf4(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  short *psVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  int local_1f0 [96];
  long local_70;
  
  lVar27 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar28 = *(long *)(param_1 + 0x1b8);
  lVar32 = *(long *)(param_2 + 0x58);
  do {
    piVar5 = (int *)(lVar32 + lVar27 * 4);
    psVar6 = (short *)(param_3 + lVar27 * 2);
    uVar11 = (long)(*piVar5 * (int)*psVar6) << 0xd | 0x400;
    lVar35 = (long)piVar5[0x20] * (long)psVar6[0x20] * 0x2731 + uVar11;
    lVar38 = uVar11 + (long)piVar5[0x20] * (long)psVar6[0x20] * -0x2731;
    lVar29 = (long)piVar5[0x10] * (long)psVar6[0x10];
    lVar31 = (long)piVar5[0x30] * (long)psVar6[0x30];
    lVar7 = uVar11 + (lVar29 - lVar31) * 0x2000;
    lVar36 = uVar11 + (lVar29 - lVar31) * -0x2000;
    lVar8 = lVar29 * 0x2bb6 + lVar31 * 0x2000;
    lVar9 = lVar8 + lVar35;
    lVar35 = lVar35 - lVar8;
    lVar29 = lVar29 * 0xbb6 + lVar31 * -0x2000;
    lVar8 = lVar29 + lVar38;
    lVar38 = lVar38 - lVar29;
    lVar30 = (long)piVar5[8] * (long)psVar6[8];
    lVar25 = (long)piVar5[0x18] * (long)psVar6[0x18];
    lVar33 = (long)piVar5[0x28] * (long)psVar6[0x28];
    lVar37 = (long)piVar5[0x38] * (long)psVar6[0x38];
    lVar24 = (lVar33 + lVar30 + lVar37) * 0x1b8d;
    lVar31 = lVar24 + (lVar33 + lVar30) * 0x85b;
    lVar29 = lVar25 * 0x29cf + lVar30 * 0x8f7 + lVar31;
    lVar34 = (lVar37 + lVar33) * -0x2175;
    lVar31 = lVar25 * -0x1151 + lVar33 * -0x2f50 + lVar34 + lVar31;
    lVar34 = lVar25 * -0x29cf + lVar37 * 0x32c6 + lVar24 + lVar34;
    lVar24 = lVar25 * -0x1151 + lVar30 * -0x15a4 + lVar37 * -0x3f74 + lVar24;
    lVar26 = ((lVar30 - lVar37) + (lVar25 - lVar33)) * 0x1151;
    lVar30 = lVar26 + (lVar30 - lVar37) * 0x187e;
    lVar26 = lVar26 + (lVar25 - lVar33) * -0x3b21;
    local_1f0[lVar27] = (int)((ulong)(lVar29 + lVar9) >> 0xb);
    local_1f0[lVar27 + 0x58] = (int)((ulong)(lVar9 - lVar29) >> 0xb);
    local_1f0[lVar27 + 8] = (int)((ulong)(lVar30 + lVar7) >> 0xb);
    local_1f0[lVar27 + 0x50] = (int)((ulong)(lVar7 - lVar30) >> 0xb);
    local_1f0[lVar27 + 0x10] = (int)((ulong)(lVar31 + lVar8) >> 0xb);
    local_1f0[lVar27 + 0x48] = (int)((ulong)(lVar8 - lVar31) >> 0xb);
    local_1f0[lVar27 + 0x18] = (int)((ulong)(lVar34 + lVar38) >> 0xb);
    local_1f0[lVar27 + 0x40] = (int)((ulong)(lVar38 - lVar34) >> 0xb);
    local_1f0[lVar27 + 0x20] = (int)((ulong)(lVar26 + lVar36) >> 0xb);
    local_1f0[lVar27 + 0x38] = (int)((ulong)(lVar36 - lVar26) >> 0xb);
    local_1f0[lVar27 + 0x28] = (int)((ulong)(lVar24 + lVar35) >> 0xb);
    local_1f0[lVar27 + 0x30] = (int)((ulong)(lVar35 - lVar24) >> 0xb);
    lVar27 = lVar27 + 1;
  } while ((int)lVar27 != 8);
  lVar27 = 0;
  lVar28 = lVar28 + 0x80;
  do {
    iVar14 = local_1f0[lVar27 + 1];
    iVar15 = local_1f0[lVar27 + 5];
    iVar1 = local_1f0[lVar27] * 0x2000 + 0x20000;
    iVar2 = iVar1 + local_1f0[lVar27 + 4] * 0x2731;
    iVar12 = local_1f0[lVar27 + 6];
    iVar16 = local_1f0[lVar27 + 7];
    iVar13 = local_1f0[lVar27 + 2];
    iVar17 = local_1f0[lVar27 + 3];
    iVar23 = iVar1 + local_1f0[lVar27 + 4] * -0x2731;
    iVar3 = iVar1 + (iVar13 - iVar12) * 0x2000;
    iVar1 = iVar1 + (iVar13 - iVar12) * -0x2000;
    iVar18 = iVar12 * 0x2000 + iVar13 * 0x2bb6;
    iVar4 = iVar18 + iVar2;
    iVar2 = iVar2 - iVar18;
    iVar13 = iVar12 * -0x2000 + iVar13 * 0xbb6;
    iVar12 = iVar13 + iVar23;
    iVar20 = (iVar15 + iVar14 + iVar16) * 0x1b8d;
    iVar18 = iVar20 + (iVar15 + iVar14) * 0x85b;
    iVar23 = iVar23 - iVar13;
    iVar13 = iVar17 * 0x29cf + iVar14 * 0x8f7 + iVar18;
    iVar21 = (iVar16 + iVar15) * -0x2175;
    iVar18 = iVar17 * -0x1151 + iVar15 * -0x2f50 + iVar21 + iVar18;
    puVar10 = (undefined1 *)(*(long *)(param_4 + lVar27) + (ulong)param_5);
    *puVar10 = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar13 + iVar4) >> 0x12) & 0x3ff));
    iVar22 = ((iVar14 - iVar16) + (iVar17 - iVar15)) * 0x1151;
    iVar19 = iVar22 + (iVar14 - iVar16) * 0x187e;
    puVar10[0xb] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar4 - iVar13) >> 0x12) & 0x3ff));
    puVar10[1] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar19 + iVar3) >> 0x12) & 0x3ff));
    iVar21 = iVar17 * -0x29cf + iVar16 * 0x32c6 + iVar20 + iVar21;
    puVar10[10] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar3 - iVar19) >> 0x12) & 0x3ff));
    puVar10[2] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar18 + iVar12) >> 0x12) & 0x3ff));
    puVar10[9] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar12 - iVar18) >> 0x12) & 0x3ff));
    iVar20 = iVar17 * -0x1151 + iVar14 * -0x15a4 + iVar16 * -0x3f74 + iVar20;
    puVar10[3] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar21 + iVar23) >> 0x12) & 0x3ff));
    iVar22 = iVar22 + (iVar17 - iVar15) * -0x3b21;
    puVar10[8] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar23 - iVar21) >> 0x12) & 0x3ff));
    puVar10[4] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar22 + iVar1) >> 0x12) & 0x3ff));
    puVar10[7] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar1 - iVar22) >> 0x12) & 0x3ff));
    puVar10[5] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar20 + iVar2) >> 0x12) & 0x3ff));
    puVar10[6] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar2 - iVar20) >> 0x12) & 0x3ff));
    lVar27 = lVar27 + 8;
  } while (lVar27 != 0x60);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100546168(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  int local_210 [104];
  long local_70;
  
  lVar33 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar34 = *(long *)(param_1 + 0x1b8);
  lVar35 = *(long *)(param_2 + 0x58);
  do {
    piVar6 = (int *)(lVar35 + lVar33 * 4);
    psVar7 = (short *)(param_3 + lVar33 * 2);
    lVar36 = (long)piVar6[0x10] * (long)psVar7[0x10];
    uVar11 = (long)(*piVar6 * (int)*psVar7) << 0xd | 0x400;
    lVar30 = (long)piVar6[0x30] * (long)psVar7[0x30] + (long)piVar6[0x20] * (long)psVar7[0x20];
    lVar28 = (long)piVar6[0x20] * (long)psVar7[0x20] - (long)piVar6[0x30] * (long)psVar7[0x30];
    lVar32 = uVar11 + lVar28 * 0x319;
    lVar39 = uVar11 + lVar28 * 0xf95;
    lVar37 = lVar30 * 0x24f9 + lVar36 * 0x2bf1 + lVar32;
    lVar41 = uVar11 + lVar28 * -0x1dfe;
    lVar8 = lVar30 * 0xa20 + lVar36 * -0x2812 + lVar39;
    lVar42 = (long)piVar6[8] * (long)psVar7[8];
    lVar9 = lVar30 * 0xdf2 + lVar36 * -0x19b5 + lVar41;
    lVar29 = (long)piVar6[0x18] * (long)psVar7[0x18];
    lVar32 = lVar30 * -0x24f9 + lVar36 * 0x100c + lVar32;
    lVar38 = (long)piVar6[0x28] * (long)psVar7[0x28];
    lVar27 = (long)piVar6[0x38] * (long)psVar7[0x38];
    lVar39 = lVar30 * -0xa20 + lVar36 * 0x21e0 + lVar39;
    lVar31 = (lVar29 + lVar42) * 0x2a50;
    lVar40 = (lVar38 + lVar42) * 0x253e;
    lVar41 = lVar30 * -0xdf2 + lVar36 * -0x574 + lVar41;
    lVar43 = (lVar38 + lVar29) * -0xad5;
    lVar45 = (lVar27 + lVar42) * 0x1e02;
    lVar30 = lVar31 + lVar42 * -0x40a5 + lVar40 + lVar45;
    lVar44 = (lVar27 + lVar29) * -0x253e;
    lVar31 = lVar31 + lVar29 * 0x1acb + lVar43 + lVar44;
    lVar46 = (lVar27 + lVar38) * -0x1508;
    lVar40 = lVar43 + lVar38 * -0x324f + lVar40 + lVar46;
    lVar46 = lVar44 + lVar27 * 0x4694 + lVar45 + lVar46;
    local_210[lVar33] = (int)((ulong)(lVar30 + lVar37) >> 0xb);
    local_210[lVar33 + 0x60] = (int)((ulong)(lVar37 - lVar30) >> 0xb);
    lVar37 = (lVar38 - lVar29) * 0x1e02 + (lVar27 + lVar42) * 0xad5;
    local_210[lVar33 + 8] = (int)((ulong)(lVar31 + lVar39) >> 0xb);
    local_210[lVar33 + 0x58] = (int)((ulong)(lVar39 - lVar31) >> 0xb);
    local_210[lVar33 + 0x10] = (int)((ulong)(lVar40 + lVar32) >> 0xb);
    local_210[lVar33 + 0x50] = (int)((ulong)(lVar32 - lVar40) >> 0xb);
    local_210[lVar33 + 0x18] = (int)((ulong)(lVar46 + lVar41) >> 0xb);
    local_210[lVar33 + 0x48] = (int)((ulong)(lVar41 - lVar46) >> 0xb);
    lVar30 = lVar37 + lVar42 * 0xa33 + lVar29 * -0xeea;
    local_210[lVar33 + 0x20] = (int)((ulong)(lVar30 + lVar9) >> 0xb);
    local_210[lVar33 + 0x40] = (int)((ulong)(lVar9 - lVar30) >> 0xb);
    lVar30 = lVar37 + lVar38 * 0xc4e + lVar27 * -0x37c1;
    local_210[lVar33 + 0x28] = (int)((ulong)(lVar30 + lVar8) >> 0xb);
    local_210[lVar33 + 0x38] = (int)((ulong)(lVar8 - lVar30) >> 0xb);
    local_210[lVar33 + 0x30] = (int)(uVar11 + (lVar28 - lVar36) * 0x2d41 >> 0xb);
    lVar33 = lVar33 + 1;
  } while ((int)lVar33 != 8);
  lVar33 = 0;
  lVar34 = lVar34 + 0x80;
  do {
    iVar13 = local_210[lVar33 + 1];
    iVar14 = local_210[lVar33 + 5];
    iVar1 = local_210[lVar33] * 0x2000 + 0x20000;
    iVar15 = local_210[lVar33 + 7];
    iVar5 = local_210[lVar33 + 6] + local_210[lVar33 + 4];
    iVar26 = local_210[lVar33 + 4] - local_210[lVar33 + 6];
    iVar17 = iVar1 + iVar26 * 0x319;
    iVar12 = local_210[lVar33 + 2];
    iVar16 = local_210[lVar33 + 3];
    iVar2 = iVar5 * 0x24f9 + iVar12 * 0x2bf1 + iVar17;
    iVar18 = iVar1 + iVar26 * 0xf95;
    iVar3 = iVar5 * 0xa20 + iVar12 * -0x2812 + iVar18;
    iVar19 = iVar1 + iVar26 * -0x1dfe;
    iVar4 = iVar5 * 0xdf2 + iVar12 * -0x19b5 + iVar19;
    iVar17 = iVar5 * -0x24f9 + iVar12 * 0x100c + iVar17;
    iVar20 = (iVar16 + iVar13) * 0x2a50;
    iVar18 = iVar5 * -0xa20 + iVar12 * 0x21e0 + iVar18;
    iVar21 = (iVar14 + iVar13) * 0x253e;
    iVar19 = iVar5 * -0xdf2 + iVar12 * -0x574 + iVar19;
    iVar22 = (iVar14 + iVar16) * -0xad5;
    iVar23 = (iVar15 + iVar13) * 0x1e02;
    iVar5 = iVar20 + iVar13 * -0x40a5 + iVar21 + iVar23;
    puVar10 = (undefined1 *)(*(long *)(param_4 + lVar33) + (ulong)param_5);
    iVar24 = (iVar15 + iVar16) * -0x253e;
    iVar20 = iVar20 + iVar16 * 0x1acb + iVar22 + iVar24;
    *puVar10 = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar5 + iVar2) >> 0x12) & 0x3ff));
    iVar25 = (iVar15 + iVar14) * -0x1508;
    puVar10[0xc] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar2 - iVar5) >> 0x12) & 0x3ff));
    iVar2 = iVar22 + iVar14 * -0x324f + iVar21 + iVar25;
    iVar25 = iVar24 + iVar15 * 0x4694 + iVar23 + iVar25;
    puVar10[1] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar20 + iVar18) >> 0x12) & 0x3ff));
    puVar10[0xb] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar18 - iVar20) >> 0x12) & 0x3ff));
    puVar10[2] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar2 + iVar17) >> 0x12) & 0x3ff));
    iVar18 = (iVar14 - iVar16) * 0x1e02 + (iVar15 + iVar13) * 0xad5;
    puVar10[10] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar17 - iVar2) >> 0x12) & 0x3ff));
    puVar10[3] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar25 + iVar19) >> 0x12) & 0x3ff));
    iVar2 = iVar18 + iVar13 * 0xa33 + iVar16 * -0xeea;
    puVar10[9] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar19 - iVar25) >> 0x12) & 0x3ff));
    puVar10[4] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar2 + iVar4) >> 0x12) & 0x3ff));
    iVar17 = iVar18 + iVar14 * 0xc4e + iVar15 * -0x37c1;
    puVar10[8] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar4 - iVar2) >> 0x12) & 0x3ff));
    puVar10[5] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar17 + iVar3) >> 0x12) & 0x3ff));
    puVar10[7] = *(undefined1 *)(lVar34 + ((ulong)((uint)(iVar3 - iVar17) >> 0x12) & 0x3ff));
    puVar10[6] = *(undefined1 *)
                  (lVar34 + ((ulong)((uint)(iVar1 + (iVar26 - iVar12) * 0x2d41) >> 0x12) & 0x3ff));
    lVar33 = lVar33 + 8;
  } while (lVar33 != 0x68);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1005466c8(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  int iVar28;
  int iVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  int local_230 [112];
  long local_70;
  
  lVar25 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar26 = *(long *)(param_1 + 0x1b8);
  lVar31 = *(long *)(param_2 + 0x58);
  do {
    piVar2 = (int *)(lVar31 + lVar25 * 4);
    psVar3 = (short *)(param_3 + lVar25 * 2);
    lVar22 = (long)piVar2[0x20] * (long)psVar3[0x20];
    uVar6 = (long)(*piVar2 * (int)*psVar3) << 0xd | 0x400;
    lVar27 = uVar6 + lVar22 * 0x28c6;
    lVar30 = uVar6 + lVar22 * 0xa12;
    lVar34 = uVar6 + lVar22 * -0x1c37;
    lVar21 = (long)piVar2[0x10] * (long)psVar3[0x10];
    lVar36 = (long)piVar2[0x30] * (long)psVar3[0x30];
    lVar42 = (lVar36 + lVar21) * 0x2362;
    lVar39 = lVar42 + lVar21 * 0x8bd;
    lVar42 = lVar42 + lVar36 * -0x3704;
    lVar37 = lVar21 * 0x13a3 + lVar36 * -0x2c1f;
    lVar21 = lVar39 + lVar27;
    lVar27 = lVar27 - lVar39;
    lVar36 = lVar42 + lVar30;
    lVar30 = lVar30 - lVar42;
    lVar42 = lVar37 + lVar34;
    lVar34 = lVar34 - lVar37;
    lVar35 = (long)piVar2[8] * (long)psVar3[8];
    lVar38 = (long)piVar2[0x18] * (long)psVar3[0x18];
    lVar20 = (long)piVar2[0x28] * (long)psVar3[0x28];
    lVar32 = (long)piVar2[0x38] * (long)psVar3[0x38];
    lVar23 = (lVar38 + lVar35) * 0x2ab7;
    lVar24 = (lVar20 + lVar35) * 0x2652;
    lVar33 = (lVar20 + lVar35) * 0x1814;
    lVar39 = (lVar20 + lVar38) * -0x511 + lVar32 * -0x2000;
    lVar37 = lVar23 + lVar38 * -0xd92 + lVar39;
    lVar39 = lVar24 + lVar20 * -0x4bf7 + lVar39;
    lVar40 = (lVar20 - lVar38) * 0x2cf8;
    lVar41 = (lVar35 - lVar38) * 0xef2 + lVar32 * -0x2000;
    lVar4 = lVar33 + lVar35 * -0x21f5 + lVar41;
    lVar41 = lVar40 + lVar38 * 0x1599 + lVar41;
    lVar23 = lVar23 + lVar35 * -0x2410 + lVar24 + lVar32 * 0x2000;
    lVar24 = lVar40 + lVar20 * -0x361a + lVar33 + lVar32 * 0x2000;
    iVar1 = ((int)(lVar35 - lVar38) - (int)lVar20) + (int)lVar32;
    local_230[lVar25] = (int)((ulong)(lVar23 + lVar21) >> 0xb);
    local_230[lVar25 + 0x68] = (int)((ulong)(lVar21 - lVar23) >> 0xb);
    local_230[lVar25 + 8] = (int)((ulong)(lVar37 + lVar36) >> 0xb);
    local_230[lVar25 + 0x60] = (int)((ulong)(lVar36 - lVar37) >> 0xb);
    local_230[lVar25 + 0x10] = (int)((ulong)(lVar39 + lVar42) >> 0xb);
    local_230[lVar25 + 0x58] = (int)((ulong)(lVar42 - lVar39) >> 0xb);
    iVar28 = (int)(uVar6 + lVar22 * -0x2d42 >> 0xb);
    local_230[lVar25 + 0x18] = iVar28 + iVar1 * 4;
    local_230[lVar25 + 0x50] = iVar28 + iVar1 * -4;
    local_230[lVar25 + 0x20] = (int)((ulong)(lVar24 + lVar34) >> 0xb);
    local_230[lVar25 + 0x48] = (int)((ulong)(lVar34 - lVar24) >> 0xb);
    local_230[lVar25 + 0x28] = (int)((ulong)(lVar41 + lVar30) >> 0xb);
    local_230[lVar25 + 0x40] = (int)((ulong)(lVar30 - lVar41) >> 0xb);
    local_230[lVar25 + 0x30] = (int)((ulong)(lVar4 + lVar27) >> 0xb);
    local_230[lVar25 + 0x38] = (int)((ulong)(lVar27 - lVar4) >> 0xb);
    lVar25 = lVar25 + 1;
  } while ((int)lVar25 != 8);
  lVar25 = 0;
  lVar26 = lVar26 + 0x80;
  do {
    iVar12 = local_230[lVar25 + 1];
    iVar1 = local_230[lVar25] * 0x2000 + 0x20000;
    iVar28 = local_230[lVar25 + 4];
    iVar9 = local_230[lVar25 + 5];
    iVar13 = iVar1 + iVar28 * 0x28c6;
    iVar14 = iVar1 + iVar28 * 0xa12;
    iVar15 = iVar1 + iVar28 * -0x1c37;
    iVar7 = local_230[lVar25 + 2];
    iVar10 = local_230[lVar25 + 3];
    iVar8 = local_230[lVar25 + 6];
    iVar11 = local_230[lVar25 + 7];
    iVar1 = iVar1 + iVar28 * -0x2d42;
    iVar29 = (iVar8 + iVar7) * 0x2362;
    iVar16 = iVar29 + iVar7 * 0x8bd;
    iVar29 = iVar29 + iVar8 * -0x3704;
    iVar8 = iVar7 * 0x13a3 + iVar8 * -0x2c1f;
    iVar28 = iVar16 + iVar13;
    iVar13 = iVar13 - iVar16;
    iVar7 = iVar8 + iVar15;
    iVar15 = iVar15 - iVar8;
    iVar8 = iVar29 + iVar14;
    iVar17 = (iVar10 + iVar12) * 0x2ab7;
    iVar18 = (iVar9 + iVar12) * 0x2652;
    iVar16 = iVar17 + iVar12 * -0x2410 + iVar18 + iVar11 * 0x2000;
    iVar14 = iVar14 - iVar29;
    iVar19 = (iVar9 + iVar10) * -0x511 + iVar11 * -0x2000;
    iVar29 = iVar17 + iVar10 * -0xd92 + iVar19;
    iVar19 = iVar18 + iVar9 * -0x4bf7 + iVar19;
    iVar18 = (iVar12 - iVar10) * 0xef2 + iVar11 * -0x2000;
    iVar17 = ((iVar12 - iVar10) - iVar9) + iVar11;
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar25) + (ulong)param_5);
    *puVar5 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar16 + iVar28) >> 0x12) & 0x3ff));
    puVar5[0xd] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar28 - iVar16) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar29 + iVar8) >> 0x12) & 0x3ff));
    puVar5[0xc] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar8 - iVar29) >> 0x12) & 0x3ff));
    puVar5[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar19 + iVar7) >> 0x12) & 0x3ff));
    iVar8 = (iVar9 + iVar12) * 0x1814;
    iVar16 = (iVar9 - iVar10) * 0x2cf8;
    puVar5[0xb] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar7 - iVar19) >> 0x12) & 0x3ff));
    iVar28 = iVar9 * -0x361a + iVar11 * 0x2000 + iVar16 + iVar8;
    puVar5[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar17 * 0x2000) >> 0x12) & 0x3ff))
    ;
    puVar5[10] = *(undefined1 *)
                  (lVar26 + ((ulong)((uint)(iVar1 + iVar17 * -0x2000) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar28 + iVar15) >> 0x12) & 0x3ff));
    iVar1 = iVar8 + iVar12 * -0x21f5 + iVar18;
    iVar18 = iVar16 + iVar10 * 0x1599 + iVar18;
    puVar5[9] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar15 - iVar28) >> 0x12) & 0x3ff));
    puVar5[5] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar18 + iVar14) >> 0x12) & 0x3ff));
    puVar5[8] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar14 - iVar18) >> 0x12) & 0x3ff));
    puVar5[6] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 + iVar13) >> 0x12) & 0x3ff));
    puVar5[7] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar13 - iVar1) >> 0x12) & 0x3ff));
    lVar25 = lVar25 + 8;
  } while (lVar25 != 0x70);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100546bbc(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  int local_250 [120];
  long local_70;
  
  lVar35 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar36 = *(long *)(param_1 + 0x1b8);
  lVar38 = *(long *)(param_2 + 0x58);
  do {
    piVar6 = (int *)(lVar38 + lVar35 * 4);
    psVar7 = (short *)(param_3 + lVar35 * 2);
    lVar37 = (long)piVar6[0x10] * (long)psVar7[0x10];
    uVar13 = (long)(*piVar6 * (int)*psVar7) << 0xd | 0x400;
    lVar39 = (long)piVar6[0x30] * (long)psVar7[0x30];
    lVar40 = uVar13 + lVar39 * -0xdfc;
    lVar29 = uVar13 + lVar39 * 0x249d;
    lVar32 = lVar37 - (long)piVar6[0x20] * (long)psVar7[0x20];
    lVar8 = (long)piVar6[0x20] * (long)psVar7[0x20] + lVar37;
    lVar31 = lVar32 * 0x176 + lVar8 * 0x2ace + lVar29;
    lVar9 = lVar37 * 0x2e13 + lVar8 * -0x2ace + lVar32 * 0x176 + lVar40;
    lVar10 = lVar32 * -0xcc7 + lVar8 * -0x1182 + lVar29;
    lVar37 = lVar8 * 0x1182 + lVar37 * -0x2e13 + lVar32 * -0xcc7 + lVar40;
    lVar40 = lVar32 * 0xb50 + lVar8 * 0x194c + lVar40;
    lVar8 = lVar29 + lVar8 * -0x194c + lVar32 * 0xb50;
    lVar30 = (long)piVar6[8] * (long)psVar7[8];
    lVar33 = (long)piVar6[0x18] * (long)psVar7[0x18];
    lVar34 = (long)piVar6[0x28] * (long)psVar7[0x28];
    lVar27 = (long)piVar6[0x38] * (long)psVar7[0x38];
    lVar41 = lVar34 * 0x2731 + (lVar30 - lVar27) * 0x2d02;
    lVar29 = lVar33 * 0x2b0a + lVar27 * 0x4ea3 + lVar41;
    lVar41 = lVar33 * -0x1a9a + lVar30 * -0x2399 + lVar41;
    lVar28 = (lVar27 + lVar30) * 0x1268;
    lVar11 = lVar33 * -0x1a9a + lVar30 * 0xf39 + lVar34 * -0x2731 + lVar28;
    lVar28 = lVar34 * 0x2731 + lVar33 * -0x2b0a + lVar27 * -0x1bd1 + lVar28;
    local_250[lVar35] = (int)((ulong)(lVar29 + lVar31) >> 0xb);
    local_250[lVar35 + 0x70] = (int)((ulong)(lVar31 - lVar29) >> 0xb);
    lVar29 = ((lVar33 - lVar27) + lVar30) * 0x1a9a;
    lVar31 = lVar29 + lVar30 * 0x1071;
    local_250[lVar35 + 8] = (int)((ulong)(lVar31 + lVar40) >> 0xb);
    local_250[lVar35 + 0x68] = (int)((ulong)(lVar40 - lVar31) >> 0xb);
    lVar40 = uVar13 + lVar39 * -0x2d42;
    lVar39 = lVar40 + lVar32 * 0x16a0;
    lVar31 = lVar34 * -0x2731 + (lVar30 - lVar27) * 0x2731;
    local_250[lVar35 + 0x10] = (int)((ulong)(lVar31 + lVar39) >> 0xb);
    local_250[lVar35 + 0x60] = (int)((ulong)(lVar39 - lVar31) >> 0xb);
    local_250[lVar35 + 0x18] = (int)((ulong)(lVar11 + lVar9) >> 0xb);
    local_250[lVar35 + 0x58] = (int)((ulong)(lVar9 - lVar11) >> 0xb);
    lVar29 = lVar29 + (lVar33 - lVar27) * -0x45a4;
    local_250[lVar35 + 0x20] = (int)((ulong)(lVar29 + lVar8) >> 0xb);
    local_250[lVar35 + 0x50] = (int)((ulong)(lVar8 - lVar29) >> 0xb);
    local_250[lVar35 + 0x28] = (int)((ulong)(lVar28 + lVar10) >> 0xb);
    local_250[lVar35 + 0x48] = (int)((ulong)(lVar10 - lVar28) >> 0xb);
    local_250[lVar35 + 0x30] = (int)((ulong)(lVar41 + lVar37) >> 0xb);
    local_250[lVar35 + 0x40] = (int)((ulong)(lVar37 - lVar41) >> 0xb);
    local_250[lVar35 + 0x38] = (int)((ulong)(lVar40 + lVar32 * -0x2d40) >> 0xb);
    lVar35 = lVar35 + 1;
  } while ((int)lVar35 != 8);
  lVar35 = 0;
  lVar36 = lVar36 + 0x80;
  do {
    iVar16 = local_250[lVar35 + 1];
    puVar12 = (undefined1 *)(*(long *)(param_4 + lVar35) + (ulong)param_5);
    iVar1 = local_250[lVar35] * 0x2000 + 0x20000;
    iVar14 = local_250[lVar35 + 6];
    iVar17 = local_250[lVar35 + 7];
    iVar20 = iVar1 + iVar14 * -0xdfc;
    iVar21 = iVar1 + iVar14 * 0x249d;
    iVar15 = local_250[lVar35 + 2];
    iVar18 = local_250[lVar35 + 3];
    iVar19 = local_250[lVar35 + 5];
    iVar1 = iVar1 + iVar14 * -0x2d42;
    iVar26 = iVar15 - local_250[lVar35 + 4];
    iVar5 = local_250[lVar35 + 4] + iVar15;
    iVar14 = iVar26 * 0x176 + iVar5 * 0x2ace + iVar21;
    iVar2 = iVar26 * -0xcc7 + iVar5 * -0x1182 + iVar21;
    iVar3 = iVar15 * 0x2e13 + iVar5 * -0x2ace + iVar26 * 0x176 + iVar20;
    iVar4 = iVar26 * 0xb50 + iVar5 * 0x194c + iVar20;
    iVar22 = iVar1 + iVar26 * 0x16a0;
    iVar20 = iVar5 * 0x1182 + iVar15 * -0x2e13 + iVar26 * -0xcc7 + iVar20;
    iVar23 = iVar19 * 0x2731 + (iVar16 - iVar17) * 0x2d02;
    iVar5 = iVar21 + iVar5 * -0x194c + iVar26 * 0xb50;
    iVar15 = iVar18 * 0x2b0a + iVar17 * 0x4ea3 + iVar23;
    iVar21 = iVar19 * -0x2731 + (iVar16 - iVar17) * 0x2731;
    *puVar12 = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar15 + iVar14) >> 0x12) & 0x3ff));
    iVar25 = ((iVar18 - iVar17) + iVar16) * 0x1a9a;
    iVar24 = iVar25 + iVar16 * 0x1071;
    puVar12[0xe] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar14 - iVar15) >> 0x12) & 0x3ff));
    puVar12[1] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar24 + iVar4) >> 0x12) & 0x3ff));
    puVar12[0xd] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar4 - iVar24) >> 0x12) & 0x3ff));
    puVar12[2] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar21 + iVar22) >> 0x12) & 0x3ff));
    iVar4 = (iVar17 + iVar16) * 0x1268;
    iVar14 = iVar18 * -0x1a9a + iVar16 * 0xf39 + iVar19 * -0x2731 + iVar4;
    puVar12[0xc] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar22 - iVar21) >> 0x12) & 0x3ff));
    iVar25 = iVar25 + (iVar18 - iVar17) * -0x45a4;
    puVar12[3] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar14 + iVar3) >> 0x12) & 0x3ff));
    puVar12[0xb] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar3 - iVar14) >> 0x12) & 0x3ff));
    puVar12[4] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar25 + iVar5) >> 0x12) & 0x3ff));
    iVar4 = iVar19 * 0x2731 + iVar18 * -0x2b0a + iVar17 * -0x1bd1 + iVar4;
    puVar12[10] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar5 - iVar25) >> 0x12) & 0x3ff));
    puVar12[5] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar4 + iVar2) >> 0x12) & 0x3ff));
    iVar23 = iVar18 * -0x1a9a + iVar16 * -0x2399 + iVar23;
    puVar12[9] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar2 - iVar4) >> 0x12) & 0x3ff));
    puVar12[6] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar23 + iVar20) >> 0x12) & 0x3ff));
    puVar12[8] = *(undefined1 *)(lVar36 + ((ulong)((uint)(iVar20 - iVar23) >> 0x12) & 0x3ff));
    puVar12[7] = *(undefined1 *)
                  (lVar36 + ((ulong)((uint)(iVar1 + iVar26 * -0x2d40) >> 0x12) & 0x3ff));
    lVar35 = lVar35 + 8;
  } while (lVar35 != 0x78);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10054711c(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  int iVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  int iVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long lVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  int local_270 [128];
  long local_70;
  
  lVar31 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar32 = *(long *)(param_1 + 0x1b8);
  lVar33 = *(long *)(param_2 + 0x58);
  do {
    piVar3 = (int *)(lVar33 + lVar31 * 4);
    psVar4 = (short *)(param_3 + lVar31 * 2);
    lVar36 = (long)piVar3[0x20] * (long)psVar4[0x20];
    uVar6 = (long)(*piVar3 * (int)*psVar4) << 0xd | 0x400;
    lVar35 = lVar36 * 0x29cf + uVar6;
    lVar40 = uVar6 + lVar36 * -0x29cf;
    lVar28 = lVar36 * 0x1151 + uVar6;
    lVar37 = uVar6 + lVar36 * -0x1151;
    lVar36 = (long)piVar3[0x10] * (long)psVar4[0x10];
    lVar38 = (long)piVar3[0x30] * (long)psVar4[0x30];
    lVar29 = (lVar36 - lVar38) * 0x8d4;
    lVar27 = (lVar36 - lVar38) * 0x2c63;
    lVar42 = lVar27 + lVar38 * 0x5203;
    lVar44 = lVar29 + lVar36 * 0x1ccd;
    lVar27 = lVar27 + lVar36 * -0x133e;
    lVar29 = lVar29 + lVar38 * -0x1050;
    lVar36 = lVar42 + lVar35;
    lVar35 = lVar35 - lVar42;
    lVar38 = lVar44 + lVar28;
    lVar28 = lVar28 - lVar44;
    lVar42 = lVar27 + lVar37;
    lVar37 = lVar37 - lVar27;
    lVar27 = lVar29 + lVar40;
    lVar40 = lVar40 - lVar29;
    lVar44 = (long)piVar3[8] * (long)psVar4[8];
    lVar43 = (long)piVar3[0x18] * (long)psVar4[0x18];
    lVar45 = (long)piVar3[0x28] * (long)psVar4[0x28];
    lVar30 = (long)piVar3[0x38] * (long)psVar4[0x38];
    lVar46 = (lVar43 + lVar44) * 0x2b4e;
    lVar48 = (lVar45 + lVar44) * 0x27e9;
    lVar50 = (lVar30 + lVar44) * 0x22fc;
    lVar52 = (lVar44 - lVar30) * 0x1cb6;
    lVar53 = (lVar45 + lVar44) * 0x1555;
    lVar54 = (lVar44 - lVar43) * 0xd23;
    lVar29 = lVar46 + lVar44 * -0x492a + lVar48 + lVar50;
    lVar44 = lVar54 + lVar44 * -0x3abe + lVar53 + lVar52;
    lVar41 = (lVar45 + lVar43) * 0x470;
    lVar49 = (lVar45 - lVar43) * 0x2d09;
    lVar47 = (lVar30 + lVar43) * -0x1555;
    lVar46 = lVar46 + lVar43 * 0x24d + lVar41 + lVar47;
    lVar51 = (lVar30 + lVar43) * -0x27e9;
    lVar43 = lVar54 + lVar43 * 0x3f1a + lVar49 + lVar51;
    lVar54 = (lVar30 + lVar45) * -0x2b4e;
    lVar41 = lVar41 + lVar45 * -0x2406 + lVar48 + lVar54;
    lVar54 = lVar47 + lVar30 * 0x2218 + lVar50 + lVar54;
    lVar47 = (lVar30 - lVar45) * 0xd23;
    lVar30 = lVar51 + lVar30 * 0x6485 + lVar52 + lVar47;
    lVar47 = lVar49 + lVar45 * -0x1886 + lVar53 + lVar47;
    local_270[lVar31] = (int)((ulong)(lVar29 + lVar36) >> 0xb);
    local_270[lVar31 + 0x78] = (int)((ulong)(lVar36 - lVar29) >> 0xb);
    local_270[lVar31 + 8] = (int)((ulong)(lVar46 + lVar38) >> 0xb);
    local_270[lVar31 + 0x70] = (int)((ulong)(lVar38 - lVar46) >> 0xb);
    local_270[lVar31 + 0x10] = (int)((ulong)(lVar41 + lVar42) >> 0xb);
    local_270[lVar31 + 0x68] = (int)((ulong)(lVar42 - lVar41) >> 0xb);
    local_270[lVar31 + 0x18] = (int)((ulong)(lVar54 + lVar27) >> 0xb);
    local_270[lVar31 + 0x60] = (int)((ulong)(lVar27 - lVar54) >> 0xb);
    local_270[lVar31 + 0x20] = (int)((ulong)(lVar30 + lVar40) >> 0xb);
    local_270[lVar31 + 0x58] = (int)((ulong)(lVar40 - lVar30) >> 0xb);
    local_270[lVar31 + 0x28] = (int)((ulong)(lVar47 + lVar37) >> 0xb);
    local_270[lVar31 + 0x50] = (int)((ulong)(lVar37 - lVar47) >> 0xb);
    local_270[lVar31 + 0x30] = (int)((ulong)(lVar43 + lVar28) >> 0xb);
    local_270[lVar31 + 0x48] = (int)((ulong)(lVar28 - lVar43) >> 0xb);
    local_270[lVar31 + 0x38] = (int)((ulong)(lVar44 + lVar35) >> 0xb);
    local_270[lVar31 + 0x40] = (int)((ulong)(lVar35 - lVar44) >> 0xb);
    lVar31 = lVar31 + 1;
  } while ((int)lVar31 != 8);
  lVar31 = 0;
  lVar32 = lVar32 + 0x80;
  do {
    iVar10 = local_270[lVar31 + 1];
    iVar39 = local_270[lVar31] * 0x2000 + 0x20000;
    iVar7 = local_270[lVar31 + 4];
    iVar11 = local_270[lVar31 + 5];
    iVar1 = iVar39 + iVar7 * 0x29cf;
    iVar25 = iVar39 + iVar7 * -0x29cf;
    iVar2 = iVar39 + iVar7 * 0x1151;
    iVar8 = local_270[lVar31 + 2];
    iVar12 = local_270[lVar31 + 3];
    iVar9 = local_270[lVar31 + 6];
    iVar13 = local_270[lVar31 + 7];
    iVar39 = iVar39 + iVar7 * -0x1151;
    iVar26 = (iVar8 - iVar9) * 0x8d4;
    iVar34 = (iVar8 - iVar9) * 0x2c63;
    iVar14 = iVar34 + iVar9 * 0x5203;
    iVar15 = iVar26 + iVar8 * 0x1ccd;
    iVar34 = iVar34 + iVar8 * -0x133e;
    iVar26 = iVar26 + iVar9 * -0x1050;
    iVar7 = iVar14 + iVar1;
    iVar1 = iVar1 - iVar14;
    iVar8 = iVar15 + iVar2;
    iVar2 = iVar2 - iVar15;
    iVar16 = (iVar12 + iVar10) * 0x2b4e;
    iVar17 = (iVar11 + iVar10) * 0x27e9;
    iVar18 = (iVar13 + iVar10) * 0x22fc;
    iVar9 = iVar34 + iVar39;
    iVar19 = (iVar11 + iVar10) * 0x1555;
    iVar20 = (iVar10 - iVar12) * 0xd23;
    iVar39 = iVar39 - iVar34;
    iVar14 = iVar16 + iVar10 * -0x492a + iVar17 + iVar18;
    iVar21 = (iVar11 + iVar12) * 0x470;
    iVar15 = iVar26 + iVar25;
    iVar22 = (iVar11 - iVar12) * 0x2d09;
    iVar25 = iVar25 - iVar26;
    iVar23 = (iVar13 + iVar12) * -0x1555;
    iVar24 = (iVar10 - iVar13) * 0x1cb6;
    iVar10 = iVar20 + iVar10 * -0x3abe + iVar19 + iVar24;
    iVar26 = (iVar13 + iVar12) * -0x27e9;
    iVar34 = iVar16 + iVar12 * 0x24d + iVar21 + iVar23;
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar31) + (ulong)param_5);
    *puVar5 = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar14 + iVar7) >> 0x12) & 0x3ff));
    puVar5[0xf] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar7 - iVar14) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar34 + iVar8) >> 0x12) & 0x3ff));
    iVar14 = (iVar13 + iVar11) * -0x2b4e;
    iVar7 = iVar21 + iVar11 * -0x2406 + iVar17 + iVar14;
    puVar5[0xe] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar8 - iVar34) >> 0x12) & 0x3ff));
    iVar14 = iVar23 + iVar13 * 0x2218 + iVar18 + iVar14;
    puVar5[2] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar7 + iVar9) >> 0x12) & 0x3ff));
    puVar5[0xd] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar9 - iVar7) >> 0x12) & 0x3ff));
    puVar5[3] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar14 + iVar15) >> 0x12) & 0x3ff));
    iVar8 = (iVar13 - iVar11) * 0xd23;
    iVar7 = iVar26 + iVar13 * 0x6485 + iVar24 + iVar8;
    puVar5[0xc] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar15 - iVar14) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar7 + iVar25) >> 0x12) & 0x3ff));
    iVar8 = iVar22 + iVar11 * -0x1886 + iVar19 + iVar8;
    puVar5[0xb] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar25 - iVar7) >> 0x12) & 0x3ff));
    puVar5[5] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar8 + iVar39) >> 0x12) & 0x3ff));
    iVar26 = iVar20 + iVar12 * 0x3f1a + iVar22 + iVar26;
    puVar5[10] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar39 - iVar8) >> 0x12) & 0x3ff));
    puVar5[6] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar26 + iVar2) >> 0x12) & 0x3ff));
    puVar5[9] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar2 - iVar26) >> 0x12) & 0x3ff));
    puVar5[7] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar10 + iVar1) >> 0x12) & 0x3ff));
    puVar5[8] = *(undefined1 *)(lVar32 + ((ulong)((uint)(iVar1 - iVar10) >> 0x12) & 0x3ff));
    lVar31 = lVar31 + 8;
  } while (lVar31 != 0x80);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10054772c(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  short *psVar28;
  uint uVar29;
  int *piVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  short sVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  int local_170 [64];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar26 = *(long *)(param_1 + 0x1b8);
  piVar27 = local_170;
  psVar28 = (short *)(param_3 + 0x40);
  uVar29 = 9;
  piVar30 = *(int **)(param_2 + 0x58);
  do {
    sVar34 = psVar28[-0x10];
    if (psVar28[-0x18] == 0 && sVar34 == 0) {
      if ((((psVar28[-8] != 0) || (*psVar28 != 0)) || (psVar28[8] != 0)) ||
         ((psVar28[0x10] != 0 || (psVar28[0x18] != 0)))) {
        sVar34 = 0;
        goto LAB_1005477ec;
      }
      iVar24 = (int)psVar28[-0x20] * *piVar30 * 4;
      *piVar27 = iVar24;
      piVar27[8] = iVar24;
      piVar27[0x10] = iVar24;
      piVar27[0x18] = iVar24;
      piVar27[0x20] = iVar24;
      piVar27[0x28] = iVar24;
      piVar27[0x30] = iVar24;
      lVar36 = 0x38;
    }
    else {
LAB_1005477ec:
      lVar37 = ((long)piVar30[0x30] * (long)psVar28[0x10] + (long)piVar30[0x10] * (long)sVar34) *
               0x1151;
      lVar35 = lVar37 + (long)piVar30[0x10] * (long)sVar34 * 0x187e;
      lVar37 = lVar37 + (long)piVar30[0x30] * (long)psVar28[0x10] * -0x3b21;
      uVar4 = (long)(*piVar30 * (int)psVar28[-0x20]) << 0xd | 0x400;
      lVar36 = uVar4 + (long)(piVar30[0x20] * (int)*psVar28) * 0x2000;
      lVar38 = uVar4 + (long)(piVar30[0x20] * (int)*psVar28) * -0x2000;
      lVar2 = lVar36 + lVar35;
      lVar36 = lVar36 - lVar35;
      lVar35 = lVar38 + lVar37;
      lVar38 = lVar38 - lVar37;
      lVar37 = (long)piVar30[0x38] * (long)psVar28[0x18];
      lVar39 = (long)piVar30[0x28] * (long)psVar28[8];
      lVar40 = (long)piVar30[0x18] * (long)psVar28[-8];
      lVar25 = (long)piVar30[8] * (long)psVar28[-0x18];
      lVar42 = (lVar25 + lVar39 + lVar40 + lVar37) * 0x25a1;
      lVar41 = lVar42 + (lVar40 + lVar37) * -0x3ec5;
      lVar42 = lVar42 + (lVar25 + lVar39) * -0xc7c;
      lVar43 = (lVar25 + lVar37) * -0x1ccd;
      lVar37 = lVar43 + lVar37 * 0x98e + lVar41;
      lVar25 = lVar43 + lVar25 * 0x300b + lVar42;
      lVar43 = (lVar40 + lVar39) * -0x5203;
      lVar42 = lVar43 + lVar39 * 0x41b3 + lVar42;
      lVar41 = lVar43 + lVar40 * 0x6254 + lVar41;
      *piVar27 = (int)((ulong)(lVar25 + lVar2) >> 0xb);
      piVar27[0x38] = (int)((ulong)(lVar2 - lVar25) >> 0xb);
      piVar27[8] = (int)((ulong)(lVar41 + lVar35) >> 0xb);
      piVar27[0x30] = (int)((ulong)(lVar35 - lVar41) >> 0xb);
      piVar27[0x10] = (int)((ulong)(lVar42 + lVar38) >> 0xb);
      piVar27[0x28] = (int)((ulong)(lVar38 - lVar42) >> 0xb);
      piVar27[0x18] = (int)((ulong)(lVar37 + lVar36) >> 0xb);
      iVar24 = (int)((ulong)(lVar36 - lVar37) >> 0xb);
      lVar36 = 0x20;
    }
    piVar27[lVar36] = iVar24;
    piVar27 = piVar27 + 1;
    piVar30 = piVar30 + 1;
    uVar29 = uVar29 - 1;
    psVar28 = psVar28 + 1;
    if (uVar29 < 2) {
      lVar36 = 0;
      lVar26 = lVar26 + 0x80;
      do {
        iVar8 = local_170[lVar36 + 1];
        iVar32 = local_170[lVar36] * 0x2000 + 0x20000;
        iVar5 = local_170[lVar36 + 4];
        iVar9 = local_170[lVar36 + 5];
        iVar24 = iVar32 + iVar5 * 0x29cf;
        iVar23 = iVar32 + iVar5 * -0x29cf;
        iVar1 = iVar32 + iVar5 * 0x1151;
        iVar6 = local_170[lVar36 + 2];
        iVar10 = local_170[lVar36 + 3];
        iVar7 = local_170[lVar36 + 6];
        iVar11 = local_170[lVar36 + 7];
        iVar32 = iVar32 + iVar5 * -0x1151;
        iVar33 = (iVar6 - iVar7) * 0x8d4;
        iVar31 = (iVar6 - iVar7) * 0x2c63;
        iVar12 = iVar31 + iVar7 * 0x5203;
        iVar13 = iVar33 + iVar6 * 0x1ccd;
        iVar31 = iVar31 + iVar6 * -0x133e;
        iVar33 = iVar33 + iVar7 * -0x1050;
        iVar5 = iVar12 + iVar24;
        iVar24 = iVar24 - iVar12;
        iVar6 = iVar13 + iVar1;
        iVar1 = iVar1 - iVar13;
        iVar14 = (iVar10 + iVar8) * 0x2b4e;
        iVar15 = (iVar9 + iVar8) * 0x27e9;
        iVar16 = (iVar11 + iVar8) * 0x22fc;
        iVar7 = iVar31 + iVar32;
        iVar17 = (iVar9 + iVar8) * 0x1555;
        iVar18 = (iVar8 - iVar10) * 0xd23;
        iVar32 = iVar32 - iVar31;
        iVar12 = iVar14 + iVar8 * -0x492a + iVar15 + iVar16;
        iVar19 = (iVar9 + iVar10) * 0x470;
        iVar13 = iVar33 + iVar23;
        iVar20 = (iVar9 - iVar10) * 0x2d09;
        iVar23 = iVar23 - iVar33;
        iVar21 = (iVar11 + iVar10) * -0x1555;
        iVar22 = (iVar8 - iVar11) * 0x1cb6;
        iVar8 = iVar18 + iVar8 * -0x3abe + iVar17 + iVar22;
        iVar33 = (iVar11 + iVar10) * -0x27e9;
        iVar31 = iVar14 + iVar10 * 0x24d + iVar19 + iVar21;
        puVar3 = (undefined1 *)(*(long *)(param_4 + lVar36) + (ulong)param_5);
        *puVar3 = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar12 + iVar5) >> 0x12) & 0x3ff));
        puVar3[0xf] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar5 - iVar12) >> 0x12) & 0x3ff));
        puVar3[1] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar31 + iVar6) >> 0x12) & 0x3ff));
        iVar12 = (iVar11 + iVar9) * -0x2b4e;
        iVar5 = iVar19 + iVar9 * -0x2406 + iVar15 + iVar12;
        puVar3[0xe] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar6 - iVar31) >> 0x12) & 0x3ff));
        iVar12 = iVar21 + iVar11 * 0x2218 + iVar16 + iVar12;
        puVar3[2] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar5 + iVar7) >> 0x12) & 0x3ff));
        puVar3[0xd] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar7 - iVar5) >> 0x12) & 0x3ff));
        puVar3[3] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar12 + iVar13) >> 0x12) & 0x3ff));
        iVar6 = (iVar11 - iVar9) * 0xd23;
        iVar5 = iVar33 + iVar11 * 0x6485 + iVar22 + iVar6;
        puVar3[0xc] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar13 - iVar12) >> 0x12) & 0x3ff));
        puVar3[4] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar5 + iVar23) >> 0x12) & 0x3ff));
        iVar6 = iVar20 + iVar9 * -0x1886 + iVar17 + iVar6;
        puVar3[0xb] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar23 - iVar5) >> 0x12) & 0x3ff));
        puVar3[5] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar6 + iVar32) >> 0x12) & 0x3ff));
        iVar33 = iVar18 + iVar10 * 0x3f1a + iVar20 + iVar33;
        puVar3[10] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar32 - iVar6) >> 0x12) & 0x3ff));
        puVar3[6] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar33 + iVar1) >> 0x12) & 0x3ff));
        puVar3[9] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar1 - iVar33) >> 0x12) & 0x3ff));
        puVar3[7] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar8 + iVar24) >> 0x12) & 0x3ff));
        puVar3[8] = *(undefined1 *)(lVar26 + ((ulong)((uint)(iVar24 - iVar8) >> 0x12) & 0x3ff));
        lVar36 = lVar36 + 8;
      } while (lVar36 != 0x40);
      if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}




void FUN_100547c88(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  int local_150 [56];
  long local_70;
  
  lVar22 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar21 = *(long *)(param_1 + 0x1b8);
  lVar25 = *(long *)(param_2 + 0x58);
  do {
    piVar2 = (int *)(lVar25 + lVar22 * 4);
    psVar3 = (short *)(param_3 + lVar22 * 2);
    uVar6 = (long)(*piVar2 * (int)*psVar3) << 0xd | 0x400;
    lVar28 = (long)piVar2[0x10] * (long)psVar3[0x10];
    lVar31 = (long)piVar2[0x20] * (long)psVar3[0x20];
    lVar34 = (long)piVar2[0x30] * (long)psVar3[0x30];
    lVar35 = (lVar31 - lVar34) * 0x1c37;
    lVar36 = (lVar28 - lVar31) * 0xa12;
    lVar4 = uVar6 + lVar31 * -0x3aeb + lVar36 + lVar35;
    lVar23 = uVar6 + (lVar34 + lVar28) * 0x28c6;
    lVar35 = lVar35 + lVar34 * -0x27d + lVar23;
    lVar23 = lVar36 + lVar28 * -0x4f0f + lVar23;
    lVar29 = (long)piVar2[8] * (long)psVar3[8];
    lVar32 = (long)piVar2[0x18] * (long)psVar3[0x18];
    lVar26 = (long)piVar2[0x28] * (long)psVar3[0x28];
    lVar27 = (lVar32 + lVar29) * 0x1def;
    lVar33 = (lVar26 + lVar32) * -0x2c1f;
    lVar36 = lVar27 + (lVar29 - lVar32) * 0x573 + lVar33;
    lVar30 = (lVar26 + lVar29) * 0x13a3;
    lVar27 = lVar30 + lVar27 + (lVar29 - lVar32) * -0x573;
    lVar33 = lVar30 + lVar26 * 0x3bde + lVar33;
    local_150[lVar22] = (int)((ulong)(lVar27 + lVar35) >> 0xb);
    local_150[lVar22 + 0x30] = (int)((ulong)(lVar35 - lVar27) >> 0xb);
    local_150[lVar22 + 8] = (int)((ulong)(lVar36 + lVar4) >> 0xb);
    local_150[lVar22 + 0x28] = (int)((ulong)(lVar4 - lVar36) >> 0xb);
    local_150[lVar22 + 0x10] = (int)((ulong)(lVar33 + lVar23) >> 0xb);
    local_150[lVar22 + 0x20] = (int)((ulong)(lVar23 - lVar33) >> 0xb);
    local_150[lVar22 + 0x18] = (int)(uVar6 + (lVar31 - (lVar34 + lVar28)) * 0x2d41 >> 0xb);
    lVar22 = lVar22 + 1;
  } while ((int)lVar22 != 8);
  lVar22 = 0;
  lVar21 = lVar21 + 0x80;
  do {
    iVar13 = local_150[lVar22 + 1];
    iVar1 = local_150[lVar22] * 0x2000 + 0x20000;
    iVar7 = local_150[lVar22 + 4];
    iVar10 = local_150[lVar22 + 5];
    iVar14 = iVar1 + iVar7 * 0x28c6;
    iVar15 = iVar1 + iVar7 * 0xa12;
    iVar16 = iVar1 + iVar7 * -0x1c37;
    iVar8 = local_150[lVar22 + 2];
    iVar11 = local_150[lVar22 + 3];
    iVar9 = local_150[lVar22 + 6];
    iVar12 = local_150[lVar22 + 7];
    iVar1 = iVar1 + iVar7 * -0x2d42;
    iVar24 = (iVar9 + iVar8) * 0x2362;
    iVar17 = iVar24 + iVar8 * 0x8bd;
    iVar24 = iVar24 + iVar9 * -0x3704;
    iVar9 = iVar8 * 0x13a3 + iVar9 * -0x2c1f;
    iVar7 = iVar17 + iVar14;
    iVar14 = iVar14 - iVar17;
    iVar8 = iVar9 + iVar16;
    iVar16 = iVar16 - iVar9;
    iVar9 = iVar24 + iVar15;
    iVar18 = (iVar11 + iVar13) * 0x2ab7;
    iVar19 = (iVar10 + iVar13) * 0x2652;
    iVar17 = iVar18 + iVar13 * -0x2410 + iVar19 + iVar12 * 0x2000;
    iVar15 = iVar15 - iVar24;
    iVar20 = (iVar10 + iVar11) * -0x511 + iVar12 * -0x2000;
    iVar24 = iVar18 + iVar11 * -0xd92 + iVar20;
    iVar20 = iVar19 + iVar10 * -0x4bf7 + iVar20;
    iVar19 = (iVar13 - iVar11) * 0xef2 + iVar12 * -0x2000;
    iVar18 = ((iVar13 - iVar11) - iVar10) + iVar12;
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar22) + (ulong)param_5);
    *puVar5 = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar17 + iVar7) >> 0x12) & 0x3ff));
    puVar5[0xd] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar7 - iVar17) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar24 + iVar9) >> 0x12) & 0x3ff));
    puVar5[0xc] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar9 - iVar24) >> 0x12) & 0x3ff));
    puVar5[2] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar20 + iVar8) >> 0x12) & 0x3ff));
    iVar9 = (iVar10 + iVar13) * 0x1814;
    iVar17 = (iVar10 - iVar11) * 0x2cf8;
    puVar5[0xb] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar8 - iVar20) >> 0x12) & 0x3ff));
    iVar7 = iVar10 * -0x361a + iVar12 * 0x2000 + iVar17 + iVar9;
    puVar5[3] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar1 + iVar18 * 0x2000) >> 0x12) & 0x3ff))
    ;
    puVar5[10] = *(undefined1 *)
                  (lVar21 + ((ulong)((uint)(iVar1 + iVar18 * -0x2000) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar7 + iVar16) >> 0x12) & 0x3ff));
    iVar1 = iVar9 + iVar13 * -0x21f5 + iVar19;
    iVar19 = iVar17 + iVar11 * 0x1599 + iVar19;
    puVar5[9] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar16 - iVar7) >> 0x12) & 0x3ff));
    puVar5[5] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar19 + iVar15) >> 0x12) & 0x3ff));
    puVar5[8] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar15 - iVar19) >> 0x12) & 0x3ff));
    puVar5[6] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar1 + iVar14) >> 0x12) & 0x3ff));
    puVar5[7] = *(undefined1 *)(lVar21 + ((ulong)((uint)(iVar14 - iVar1) >> 0x12) & 0x3ff));
    lVar22 = lVar22 + 8;
  } while (lVar22 != 0x38);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1005480a8(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  short sVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  long lVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int local_130 [48];
  long local_70;
  
  lVar27 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar28 = *(long *)(param_1 + 0x1b8);
  lVar29 = *(long *)(param_2 + 0x58);
  do {
    piVar3 = (int *)(lVar29 + lVar27 * 4);
    psVar4 = (short *)(param_3 + lVar27 * 2);
    uVar8 = (long)(*piVar3 * (int)*psVar4) << 0xd | 0x400;
    sVar15 = psVar4[0x20];
    iVar24 = piVar3[0x20];
    lVar25 = uVar8 + (long)iVar24 * (long)sVar15 * 0x16a1;
    lVar5 = (long)piVar3[0x10] * (long)psVar4[0x10] * 0x2731 + lVar25;
    lVar25 = lVar25 + (long)piVar3[0x10] * (long)psVar4[0x10] * -0x2731;
    lVar26 = (long)piVar3[8] * (long)psVar4[8];
    lVar31 = (long)piVar3[0x18] * (long)psVar4[0x18];
    lVar30 = (long)piVar3[0x28] * (long)psVar4[0x28];
    lVar23 = (lVar30 + lVar26) * 0xbb6;
    lVar6 = lVar23 + (lVar31 + lVar26) * 0x2000;
    lVar23 = lVar23 + (lVar30 - lVar31) * 0x2000;
    iVar21 = (int)lVar26 - ((int)lVar31 + (int)lVar30);
    local_130[lVar27] = (int)((ulong)(lVar6 + lVar5) >> 0xb);
    local_130[lVar27 + 0x28] = (int)((ulong)(lVar5 - lVar6) >> 0xb);
    iVar24 = (int)(uVar8 + (long)iVar24 * (long)sVar15 * -0x2d42 >> 0xb);
    local_130[lVar27 + 8] = iVar24 + iVar21 * 4;
    local_130[lVar27 + 0x20] = iVar24 + iVar21 * -4;
    local_130[lVar27 + 0x10] = (int)((ulong)(lVar23 + lVar25) >> 0xb);
    local_130[lVar27 + 0x18] = (int)((ulong)(lVar25 - lVar23) >> 0xb);
    lVar27 = lVar27 + 1;
  } while ((int)lVar27 != 8);
  lVar27 = 0;
  lVar28 = lVar28 + 0x80;
  do {
    iVar11 = local_130[lVar27 + 1];
    iVar12 = local_130[lVar27 + 5];
    iVar24 = local_130[lVar27] * 0x2000 + 0x20000;
    iVar21 = iVar24 + local_130[lVar27 + 4] * 0x2731;
    iVar9 = local_130[lVar27 + 6];
    iVar13 = local_130[lVar27 + 7];
    iVar10 = local_130[lVar27 + 2];
    iVar14 = local_130[lVar27 + 3];
    iVar22 = iVar24 + local_130[lVar27 + 4] * -0x2731;
    iVar1 = iVar24 + (iVar10 - iVar9) * 0x2000;
    iVar24 = iVar24 + (iVar10 - iVar9) * -0x2000;
    iVar16 = iVar9 * 0x2000 + iVar10 * 0x2bb6;
    iVar2 = iVar16 + iVar21;
    iVar21 = iVar21 - iVar16;
    iVar10 = iVar9 * -0x2000 + iVar10 * 0xbb6;
    iVar9 = iVar10 + iVar22;
    iVar18 = (iVar12 + iVar11 + iVar13) * 0x1b8d;
    iVar16 = iVar18 + (iVar12 + iVar11) * 0x85b;
    iVar22 = iVar22 - iVar10;
    iVar10 = iVar14 * 0x29cf + iVar11 * 0x8f7 + iVar16;
    iVar19 = (iVar13 + iVar12) * -0x2175;
    iVar16 = iVar14 * -0x1151 + iVar12 * -0x2f50 + iVar19 + iVar16;
    puVar7 = (undefined1 *)(*(long *)(param_4 + lVar27) + (param_5 & 0xffffffff));
    *puVar7 = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar10 + iVar2) >> 0x12) & 0x3ff));
    iVar20 = ((iVar11 - iVar13) + (iVar14 - iVar12)) * 0x1151;
    iVar17 = iVar20 + (iVar11 - iVar13) * 0x187e;
    puVar7[0xb] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar2 - iVar10) >> 0x12) & 0x3ff));
    puVar7[1] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar17 + iVar1) >> 0x12) & 0x3ff));
    iVar19 = iVar14 * -0x29cf + iVar13 * 0x32c6 + iVar18 + iVar19;
    puVar7[10] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar1 - iVar17) >> 0x12) & 0x3ff));
    puVar7[2] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar16 + iVar9) >> 0x12) & 0x3ff));
    puVar7[9] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar9 - iVar16) >> 0x12) & 0x3ff));
    iVar18 = iVar14 * -0x1151 + iVar11 * -0x15a4 + iVar13 * -0x3f74 + iVar18;
    puVar7[3] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar19 + iVar22) >> 0x12) & 0x3ff));
    iVar20 = iVar20 + (iVar14 - iVar12) * -0x3b21;
    puVar7[8] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar22 - iVar19) >> 0x12) & 0x3ff));
    puVar7[4] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar20 + iVar24) >> 0x12) & 0x3ff));
    puVar7[7] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar24 - iVar20) >> 0x12) & 0x3ff));
    puVar7[5] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar18 + iVar21) >> 0x12) & 0x3ff));
    puVar7[6] = *(undefined1 *)(lVar28 + ((ulong)((uint)(iVar21 - iVar18) >> 0x12) & 0x3ff));
    lVar27 = lVar27 + 8;
  } while (lVar27 != 0x30);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100548404(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  short *psVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  int local_110 [40];
  long local_70;
  
  lVar19 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar20 = *(long *)(param_1 + 0x1b8);
  lVar22 = *(long *)(param_2 + 0x58);
  do {
    piVar3 = (int *)(lVar22 + lVar19 * 4);
    psVar4 = (short *)(param_3 + lVar19 * 2);
    uVar7 = (long)(*piVar3 * (int)*psVar4) << 0xd | 0x400;
    lVar16 = (long)piVar3[0x20] * (long)psVar4[0x20] + (long)piVar3[0x10] * (long)psVar4[0x10];
    lVar17 = (long)piVar3[0x10] * (long)psVar4[0x10] - (long)piVar3[0x20] * (long)psVar4[0x20];
    lVar24 = uVar7 + lVar17 * 0xb50;
    lVar5 = lVar24 + lVar16 * 0x194c;
    lVar24 = lVar24 + lVar16 * -0x194c;
    lVar16 = ((long)piVar3[0x18] * (long)psVar4[0x18] + (long)piVar3[8] * (long)psVar4[8]) * 0x1a9a;
    lVar18 = lVar16 + (long)piVar3[8] * (long)psVar4[8] * 0x1071;
    lVar16 = lVar16 + (long)piVar3[0x18] * (long)psVar4[0x18] * -0x45a4;
    local_110[lVar19] = (int)((ulong)(lVar18 + lVar5) >> 0xb);
    local_110[lVar19 + 0x20] = (int)((ulong)(lVar5 - lVar18) >> 0xb);
    local_110[lVar19 + 8] = (int)((ulong)(lVar16 + lVar24) >> 0xb);
    local_110[lVar19 + 0x18] = (int)((ulong)(lVar24 - lVar16) >> 0xb);
    local_110[lVar19 + 0x10] = (int)(uVar7 + lVar17 * -0x2d40 >> 0xb);
    lVar19 = lVar19 + 1;
  } while ((int)lVar19 != 8);
  lVar19 = 0;
  lVar20 = lVar20 + 0x80;
  do {
    iVar9 = local_110[lVar19 + 1];
    iVar1 = local_110[lVar19] * 0x2000 + 0x20000;
    iVar8 = local_110[lVar19 + 4];
    iVar10 = local_110[lVar19 + 5];
    iVar11 = iVar1 + iVar8 * 0x249d;
    iVar12 = iVar1 + iVar8 * -0xdfc;
    iVar1 = iVar1 + iVar8 * -0x2d42;
    iVar23 = (local_110[lVar19 + 6] + local_110[lVar19 + 2]) * 0x1a9a;
    iVar13 = iVar23 + local_110[lVar19 + 2] * 0x1071;
    iVar23 = iVar23 + local_110[lVar19 + 6] * -0x45a4;
    iVar8 = iVar13 + iVar11;
    iVar11 = iVar11 - iVar13;
    iVar13 = iVar23 + iVar12;
    iVar25 = iVar10 * 0x2000;
    iVar21 = local_110[lVar19 + 7] + local_110[lVar19 + 3];
    iVar15 = local_110[lVar19 + 3] - local_110[lVar19 + 7];
    iVar12 = iVar12 - iVar23;
    iVar2 = iVar15 * 0x9e3 + iVar25;
    iVar23 = iVar21 * 0x1e6f + iVar9 * 0x2cb3 + iVar2;
    iVar2 = iVar21 * -0x1e6f + iVar9 * 0x714 + iVar2;
    iVar25 = iVar25 + iVar15 * -0x19e3;
    puVar6 = (undefined1 *)(*(long *)(param_4 + lVar19) + (param_5 & 0xffffffff));
    *puVar6 = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar23 + iVar8) >> 0x12) & 0x3ff));
    iVar14 = iVar9 * 0x2853 - (iVar21 * 0x12cf + iVar25);
    puVar6[9] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar8 - iVar23) >> 0x12) & 0x3ff));
    puVar6[1] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar14 + iVar13) >> 0x12) & 0x3ff));
    iVar8 = iVar9 - (iVar15 + iVar10);
    puVar6[8] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar13 - iVar14) >> 0x12) & 0x3ff));
    puVar6[2] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar1 + iVar8 * 0x2000) >> 0x12) & 0x3ff));
    iVar25 = iVar25 + iVar21 * -0x12cf + iVar9 * 0x148c;
    puVar6[7] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar1 + iVar8 * -0x2000) >> 0x12) & 0x3ff))
    ;
    puVar6[3] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar25 + iVar12) >> 0x12) & 0x3ff));
    puVar6[6] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar12 - iVar25) >> 0x12) & 0x3ff));
    puVar6[4] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar2 + iVar11) >> 0x12) & 0x3ff));
    puVar6[5] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar11 - iVar2) >> 0x12) & 0x3ff));
    lVar19 = lVar19 + 8;
  } while (lVar19 != 0x28);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100548704(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  short *psVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int local_e8 [16];
  int local_a8 [8];
  int local_88 [8];
  long local_68;
  
  lVar15 = 0;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar16 = *(long *)(param_1 + 0x1b8);
  lVar18 = *(long *)(param_2 + 0x58);
  do {
    piVar17 = (int *)(lVar18 + lVar15 * 4);
    psVar1 = (short *)(param_3 + lVar15 * 2);
    iVar20 = piVar17[0x10] * (int)psVar1[0x10] + *piVar17 * (int)*psVar1;
    sVar5 = psVar1[0x18];
    iVar6 = piVar17[0x18];
    lVar13 = ((long)iVar6 * (long)sVar5 + (long)piVar17[8] * (long)psVar1[8]) * 0x1151 + 0x400;
    iVar11 = *piVar17 * (int)*psVar1 - piVar17[0x10] * (int)psVar1[0x10];
    iVar14 = (int)((ulong)(lVar13 + (long)piVar17[8] * (long)psVar1[8] * 0x187e) >> 0xb);
    local_e8[lVar15] = iVar14 + iVar20 * 4;
    local_88[lVar15] = iVar20 * 4 - iVar14;
    iVar20 = (int)((ulong)(lVar13 + (long)iVar6 * (long)sVar5 * -0x3b21) >> 0xb);
    local_e8[lVar15 + 8] = iVar20 + iVar11 * 4;
    local_a8[lVar15] = iVar11 * 4 - iVar20;
    lVar15 = lVar15 + 1;
  } while ((int)lVar15 != 8);
  lVar15 = 0;
  lVar16 = lVar16 + 0x80;
  piVar17 = local_e8 + 4;
  do {
    iVar3 = piVar17[3];
    iVar14 = piVar17[-1];
    puVar2 = (undefined1 *)(*(long *)(param_4 + lVar15) + (param_5 & 0xffffffff));
    iVar21 = (piVar17[2] + piVar17[-2]) * 0x1151;
    iVar11 = piVar17[-3];
    iVar7 = iVar21 + piVar17[-2] * 0x187e;
    iVar4 = piVar17[1];
    iVar20 = piVar17[-4] + 0x10 + *piVar17;
    iVar12 = (piVar17[-4] + 0x10) - *piVar17;
    iVar21 = iVar21 + piVar17[2] * -0x3b21;
    iVar19 = (iVar11 + iVar4 + iVar14 + iVar3) * 0x25a1;
    iVar6 = iVar7 + iVar20 * 0x2000;
    iVar8 = iVar19 + (iVar14 + iVar3) * -0x3ec5;
    iVar19 = iVar19 + (iVar11 + iVar4) * -0xc7c;
    iVar9 = (iVar11 + iVar3) * -0x1ccd;
    iVar7 = iVar20 * 0x2000 - iVar7;
    iVar20 = iVar9 + iVar11 * 0x300b + iVar19;
    iVar10 = (iVar14 + iVar4) * -0x5203;
    iVar11 = iVar21 + iVar12 * 0x2000;
    *puVar2 = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar20 + iVar6) >> 0x12) & 0x3ff));
    iVar14 = iVar10 + iVar14 * 0x6254 + iVar8;
    iVar21 = iVar12 * 0x2000 - iVar21;
    puVar2[7] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar6 - iVar20) >> 0x12) & 0x3ff));
    iVar19 = iVar10 + iVar4 * 0x41b3 + iVar19;
    puVar2[1] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar14 + iVar11) >> 0x12) & 0x3ff));
    iVar8 = iVar9 + iVar3 * 0x98e + iVar8;
    puVar2[6] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar11 - iVar14) >> 0x12) & 0x3ff));
    puVar2[2] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar19 + iVar21) >> 0x12) & 0x3ff));
    puVar2[5] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar21 - iVar19) >> 0x12) & 0x3ff));
    puVar2[3] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar8 + iVar7) >> 0x12) & 0x3ff));
    puVar2[4] = *(undefined1 *)(lVar16 + ((ulong)((uint)(iVar7 - iVar8) >> 0x12) & 0x3ff));
    lVar15 = lVar15 + 8;
    piVar17 = piVar17 + 8;
  } while (lVar15 != 0x20);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10054898c(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  int iVar1;
  int *piVar2;
  short *psVar3;
  undefined1 *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  int *piVar19;
  long lVar20;
  int local_70 [6];
  undefined4 local_58 [6];
  undefined4 local_40 [6];
  long local_28;
  
  piVar19 = local_70;
  lVar17 = 0;
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  lVar20 = *(long *)(param_1 + 0x1b8);
  lVar18 = *(long *)(param_2 + 0x58);
  do {
    piVar2 = (int *)(lVar18 + lVar17 * 4);
    psVar3 = (short *)(param_3 + lVar17 * 2);
    uVar5 = (long)(*piVar2 * (int)*psVar3) << 0xd | 0x400;
    sVar10 = psVar3[0x10];
    iVar12 = piVar2[0x10];
    lVar16 = uVar5 + (long)iVar12 * (long)sVar10 * 0x16a1;
    sVar11 = psVar3[8];
    iVar13 = piVar2[8];
    local_70[lVar17] = (int)((ulong)((long)iVar13 * (long)sVar11 * 0x2731 + lVar16) >> 0xb);
    local_40[lVar17] = (int)((ulong)(lVar16 + (long)iVar13 * (long)sVar11 * -0x2731) >> 0xb);
    local_58[lVar17] = (int)(uVar5 + (long)iVar12 * (long)sVar10 * -0x2d42 >> 0xb);
    lVar17 = lVar17 + 1;
  } while ((int)lVar17 != 6);
  lVar17 = 0;
  lVar20 = lVar20 + 0x80;
  do {
    puVar4 = (undefined1 *)(*(long *)(param_4 + lVar17) + (param_5 & 0xffffffff));
    iVar7 = piVar19[1];
    iVar8 = piVar19[5];
    iVar12 = *piVar19 * 0x2000 + 0x20000;
    iVar14 = iVar12 + piVar19[4] * 0x16a1;
    iVar6 = piVar19[2];
    iVar9 = piVar19[3];
    iVar13 = iVar14 + iVar6 * 0x2731;
    iVar15 = (iVar8 + iVar7) * 0xbb6;
    iVar1 = iVar15 + (iVar9 + iVar7) * 0x2000;
    iVar12 = iVar12 + piVar19[4] * -0x2d42;
    iVar7 = iVar7 - (iVar9 + iVar8);
    iVar15 = iVar15 + (iVar8 - iVar9) * 0x2000;
    *puVar4 = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar1 + iVar13) >> 0x12) & 0x3ff));
    iVar14 = iVar14 + iVar6 * -0x2731;
    puVar4[5] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar13 - iVar1) >> 0x12) & 0x3ff));
    puVar4[1] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar12 + iVar7 * 0x2000) >> 0x12) & 0x3ff))
    ;
    puVar4[4] = *(undefined1 *)
                 (lVar20 + ((ulong)((uint)(iVar12 + iVar7 * -0x2000) >> 0x12) & 0x3ff));
    puVar4[2] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar15 + iVar14) >> 0x12) & 0x3ff));
    puVar4[3] = *(undefined1 *)(lVar20 + ((ulong)((uint)(iVar14 - iVar15) >> 0x12) & 0x3ff));
    lVar17 = lVar17 + 8;
    piVar19 = piVar19 + 6;
  } while (lVar17 != 0x18);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100548b48(long param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  short *psVar1;
  undefined1 *puVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long local_58;
  long lStack_50;
  undefined4 local_48 [4];
  long alStack_38 [5];
  
  lVar5 = 0;
  alStack_38[4] = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = *(long *)(param_1 + 0x1b8);
  plVar6 = alStack_38;
  puVar8 = (undefined8 *)(*(long *)(param_2 + 0x58) + 0x20);
  do {
    psVar1 = (short *)(param_3 + 0x10 + lVar5);
    iVar10 = (int)puVar8[-4] * (int)psVar1[-8];
    iVar11 = (int)((ulong)puVar8[-4] >> 0x20) * (int)psVar1[-7];
    iVar12 = (int)*puVar8 * (int)*psVar1;
    iVar13 = (int)((ulong)*puVar8 >> 0x20) * (int)psVar1[1];
    plVar6[-3] = (long)iVar13 + (long)iVar11;
    plVar6[-4] = (long)iVar12 + (long)iVar10;
    plVar6[1] = (long)iVar11 - (long)iVar13;
    *plVar6 = (long)iVar10 - (long)iVar12;
    lVar5 = lVar5 + 4;
    plVar6 = plVar6 + 2;
    puVar8 = puVar8 + 1;
  } while (lVar5 != 8);
  lVar5 = 0;
  plVar6 = &local_58;
  lVar7 = lVar7 + 0x80;
  bVar4 = true;
  do {
    bVar9 = bVar4;
    iVar10 = (int)*plVar6 + 4;
    iVar11 = iVar10 + (int)plVar6[2];
    lVar3 = plVar6[3];
    iVar13 = ((int)lVar3 + (int)plVar6[1]) * 0x1151;
    iVar10 = iVar10 - (int)plVar6[2];
    iVar12 = iVar13 + (int)plVar6[1] * 0x187e;
    puVar2 = (undefined1 *)(*(long *)(param_4 + lVar5 * 8) + (param_5 & 0xffffffff));
    *puVar2 = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar12 + iVar11 * 0x2000) >> 0x10) & 0x3ff));
    iVar13 = iVar13 + (int)lVar3 * -0x3b21;
    puVar2[3] = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar11 * 0x2000 - iVar12) >> 0x10) & 0x3ff))
    ;
    puVar2[1] = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar13 + iVar10 * 0x2000) >> 0x10) & 0x3ff))
    ;
    puVar2[2] = *(undefined1 *)(lVar7 + ((ulong)((uint)(iVar10 * 0x2000 - iVar13) >> 0x10) & 0x3ff))
    ;
    plVar6 = plVar6 + 4;
    lVar5 = 1;
    bVar4 = false;
  } while (bVar9);
  if (*(long *)PTR____stack_chk_guard_101444218 == alStack_38[4]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100548ca8(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x1b8) + 0x80;
  lVar4 = *param_4;
  iVar2 = **(int **)(param_2 + 0x58) * (uint)*param_3 + 4;
  iVar3 = (*(int **)(param_2 + 0x58))[1] * (uint)param_3[1];
  *(undefined1 *)(lVar4 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 + iVar3) >> 3) & 0x3ff));
  ((undefined1 *)(lVar4 + (ulong)param_5))[1] =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 - iVar3) >> 3) & 0x3ff));
  return;
}




void FUN_100548cf8(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  undefined1 *puVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int iVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  int local_270 [16];
  undefined4 local_230 [8];
  undefined4 local_210 [8];
  undefined4 local_1f0 [8];
  undefined4 local_1d0 [8];
  undefined4 local_1b0 [8];
  undefined4 local_190 [8];
  undefined4 local_170 [8];
  undefined4 local_150 [8];
  undefined4 local_130 [8];
  undefined4 local_110 [8];
  undefined4 local_f0 [8];
  undefined4 local_d0 [8];
  undefined4 local_b0 [8];
  undefined4 local_90 [8];
  long local_70;
  
  lVar18 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar19 = *(long *)(param_1 + 0x1b8);
  lVar21 = *(long *)(param_2 + 0x58);
  do {
    piVar20 = (int *)(lVar21 + lVar18 * 4);
    psVar3 = (short *)(param_3 + lVar18 * 2);
    lVar23 = (long)piVar20[0x20] * (long)psVar3[0x20];
    uVar5 = (long)(*piVar20 * (int)*psVar3) << 0xd | 0x400;
    lVar22 = lVar23 * 0x29cf + uVar5;
    lVar28 = uVar5 + lVar23 * -0x29cf;
    lVar25 = lVar23 * 0x1151 + uVar5;
    lVar26 = uVar5 + lVar23 * -0x1151;
    lVar23 = (long)piVar20[0x10] * (long)psVar3[0x10];
    lVar24 = (long)piVar20[0x30] * (long)psVar3[0x30];
    lVar17 = (lVar23 - lVar24) * 0x8d4;
    lVar16 = (lVar23 - lVar24) * 0x2c63;
    lVar30 = lVar16 + lVar24 * 0x5203;
    lVar33 = lVar17 + lVar23 * 0x1ccd;
    lVar16 = lVar16 + lVar23 * -0x133e;
    lVar17 = lVar17 + lVar24 * -0x1050;
    lVar23 = lVar30 + lVar22;
    lVar22 = lVar22 - lVar30;
    lVar24 = lVar33 + lVar25;
    lVar25 = lVar25 - lVar33;
    lVar30 = lVar16 + lVar26;
    lVar26 = lVar26 - lVar16;
    lVar16 = lVar17 + lVar28;
    lVar28 = lVar28 - lVar17;
    lVar33 = (long)piVar20[8] * (long)psVar3[8];
    lVar31 = (long)piVar20[0x18] * (long)psVar3[0x18];
    lVar34 = (long)piVar20[0x28] * (long)psVar3[0x28];
    lVar27 = (long)piVar20[0x38] * (long)psVar3[0x38];
    lVar35 = (lVar31 + lVar33) * 0x2b4e;
    lVar37 = (lVar34 + lVar33) * 0x27e9;
    lVar39 = (lVar27 + lVar33) * 0x22fc;
    lVar41 = (lVar33 - lVar27) * 0x1cb6;
    lVar42 = (lVar34 + lVar33) * 0x1555;
    lVar43 = (lVar33 - lVar31) * 0xd23;
    lVar17 = lVar35 + lVar33 * -0x492a + lVar37 + lVar39;
    lVar33 = lVar43 + lVar33 * -0x3abe + lVar42 + lVar41;
    lVar29 = (lVar34 + lVar31) * 0x470;
    lVar38 = (lVar34 - lVar31) * 0x2d09;
    lVar36 = (lVar27 + lVar31) * -0x1555;
    lVar35 = lVar35 + lVar31 * 0x24d + lVar29 + lVar36;
    lVar40 = (lVar27 + lVar31) * -0x27e9;
    lVar31 = lVar43 + lVar31 * 0x3f1a + lVar38 + lVar40;
    lVar43 = (lVar27 + lVar34) * -0x2b4e;
    lVar29 = lVar29 + lVar34 * -0x2406 + lVar37 + lVar43;
    lVar43 = lVar36 + lVar27 * 0x2218 + lVar39 + lVar43;
    lVar36 = (lVar27 - lVar34) * 0xd23;
    lVar27 = lVar40 + lVar27 * 0x6485 + lVar41 + lVar36;
    lVar36 = lVar38 + lVar34 * -0x1886 + lVar42 + lVar36;
    local_270[lVar18] = (int)((ulong)(lVar17 + lVar23) >> 0xb);
    local_90[lVar18] = (int)((ulong)(lVar23 - lVar17) >> 0xb);
    local_270[lVar18 + 8] = (int)((ulong)(lVar35 + lVar24) >> 0xb);
    local_b0[lVar18] = (int)((ulong)(lVar24 - lVar35) >> 0xb);
    local_230[lVar18] = (int)((ulong)(lVar29 + lVar30) >> 0xb);
    local_d0[lVar18] = (int)((ulong)(lVar30 - lVar29) >> 0xb);
    local_210[lVar18] = (int)((ulong)(lVar43 + lVar16) >> 0xb);
    local_f0[lVar18] = (int)((ulong)(lVar16 - lVar43) >> 0xb);
    local_1f0[lVar18] = (int)((ulong)(lVar27 + lVar28) >> 0xb);
    local_110[lVar18] = (int)((ulong)(lVar28 - lVar27) >> 0xb);
    local_1d0[lVar18] = (int)((ulong)(lVar36 + lVar26) >> 0xb);
    local_130[lVar18] = (int)((ulong)(lVar26 - lVar36) >> 0xb);
    local_1b0[lVar18] = (int)((ulong)(lVar31 + lVar25) >> 0xb);
    local_150[lVar18] = (int)((ulong)(lVar25 - lVar31) >> 0xb);
    local_190[lVar18] = (int)((ulong)(lVar33 + lVar22) >> 0xb);
    local_170[lVar18] = (int)((ulong)(lVar22 - lVar33) >> 0xb);
    lVar18 = lVar18 + 1;
  } while ((int)lVar18 != 8);
  lVar18 = 0;
  lVar19 = lVar19 + 0x80;
  piVar20 = local_270 + 4;
  do {
    iVar6 = piVar20[3];
    iVar7 = piVar20[-1];
    puVar4 = (undefined1 *)(*(long *)(param_4 + lVar18) + (ulong)param_5);
    iVar32 = (piVar20[2] + piVar20[-2]) * 0x1151;
    iVar8 = piVar20[-3];
    iVar10 = iVar32 + piVar20[-2] * 0x187e;
    iVar9 = piVar20[1];
    iVar1 = piVar20[-4] + 0x10 + *piVar20;
    iVar14 = (piVar20[-4] + 0x10) - *piVar20;
    iVar32 = iVar32 + piVar20[2] * -0x3b21;
    iVar15 = (iVar8 + iVar9 + iVar7 + iVar6) * 0x25a1;
    iVar2 = iVar10 + iVar1 * 0x2000;
    iVar11 = iVar15 + (iVar7 + iVar6) * -0x3ec5;
    iVar15 = iVar15 + (iVar8 + iVar9) * -0xc7c;
    iVar12 = (iVar8 + iVar6) * -0x1ccd;
    iVar10 = iVar1 * 0x2000 - iVar10;
    iVar1 = iVar12 + iVar8 * 0x300b + iVar15;
    iVar13 = (iVar7 + iVar9) * -0x5203;
    iVar8 = iVar32 + iVar14 * 0x2000;
    *puVar4 = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar1 + iVar2) >> 0x12) & 0x3ff));
    iVar7 = iVar13 + iVar7 * 0x6254 + iVar11;
    iVar32 = iVar14 * 0x2000 - iVar32;
    puVar4[7] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar2 - iVar1) >> 0x12) & 0x3ff));
    iVar15 = iVar13 + iVar9 * 0x41b3 + iVar15;
    puVar4[1] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar7 + iVar8) >> 0x12) & 0x3ff));
    iVar11 = iVar12 + iVar6 * 0x98e + iVar11;
    puVar4[6] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar8 - iVar7) >> 0x12) & 0x3ff));
    puVar4[2] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar15 + iVar32) >> 0x12) & 0x3ff));
    puVar4[5] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar32 - iVar15) >> 0x12) & 0x3ff));
    puVar4[3] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar11 + iVar10) >> 0x12) & 0x3ff));
    puVar4[4] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar10 - iVar11) >> 0x12) & 0x3ff));
    lVar18 = lVar18 + 8;
    piVar20 = piVar20 + 8;
  } while (lVar18 != 0x80);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1005491b4(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  int *piVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  int local_1f8 [7];
  undefined4 local_1dc [7];
  undefined4 local_1c0 [7];
  int local_1a4 [7];
  undefined4 local_188 [7];
  undefined4 local_16c [7];
  undefined4 local_150 [7];
  undefined4 local_134 [7];
  undefined4 local_118 [7];
  undefined4 local_fc [7];
  int local_e0 [7];
  undefined4 local_c4 [7];
  undefined4 local_a8 [7];
  undefined4 local_8c [7];
  long local_70;
  
  lVar26 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar24 = *(long *)(param_1 + 0x1b8);
  lVar30 = *(long *)(param_2 + 0x58);
  do {
    piVar28 = (int *)(lVar30 + lVar26 * 4);
    psVar3 = (short *)(param_3 + lVar26 * 2);
    lVar21 = (long)piVar28[0x20] * (long)psVar3[0x20];
    uVar6 = (long)(*piVar28 * (int)*psVar3) << 0xd | 0x400;
    lVar25 = uVar6 + lVar21 * 0x28c6;
    lVar29 = uVar6 + lVar21 * 0xa12;
    lVar34 = uVar6 + lVar21 * -0x1c37;
    lVar31 = (long)piVar28[0x10] * (long)psVar3[0x10];
    lVar36 = (long)piVar28[0x30] * (long)psVar3[0x30];
    lVar41 = (lVar36 + lVar31) * 0x2362;
    lVar19 = lVar41 + lVar31 * 0x8bd;
    lVar41 = lVar41 + lVar36 * -0x3704;
    lVar36 = lVar31 * 0x13a3 + lVar36 * -0x2c1f;
    lVar31 = lVar19 + lVar25;
    lVar25 = lVar25 - lVar19;
    lVar19 = lVar41 + lVar29;
    lVar29 = lVar29 - lVar41;
    lVar41 = lVar36 + lVar34;
    lVar34 = lVar34 - lVar36;
    lVar35 = (long)piVar28[8] * (long)psVar3[8];
    lVar37 = (long)piVar28[0x18] * (long)psVar3[0x18];
    lVar20 = (long)piVar28[0x28] * (long)psVar3[0x28];
    lVar32 = (long)piVar28[0x38] * (long)psVar3[0x38];
    lVar22 = (lVar37 + lVar35) * 0x2ab7;
    lVar23 = (lVar20 + lVar35) * 0x2652;
    lVar33 = (lVar20 + lVar35) * 0x1814;
    lVar38 = (lVar20 + lVar37) * -0x511 + lVar32 * -0x2000;
    lVar36 = lVar22 + lVar37 * -0xd92 + lVar38;
    lVar38 = lVar23 + lVar20 * -0x4bf7 + lVar38;
    lVar39 = (lVar20 - lVar37) * 0x2cf8;
    lVar40 = (lVar35 - lVar37) * 0xef2 + lVar32 * -0x2000;
    lVar4 = lVar33 + lVar35 * -0x21f5 + lVar40;
    lVar40 = lVar39 + lVar37 * 0x1599 + lVar40;
    lVar22 = lVar22 + lVar35 * -0x2410 + lVar23 + lVar32 * 0x2000;
    lVar23 = lVar39 + lVar20 * -0x361a + lVar33 + lVar32 * 0x2000;
    iVar1 = ((int)(lVar35 - lVar37) - (int)lVar20) + (int)lVar32;
    local_1f8[lVar26] = (int)((ulong)(lVar22 + lVar31) >> 0xb);
    local_8c[lVar26] = (int)((ulong)(lVar31 - lVar22) >> 0xb);
    local_1dc[lVar26] = (int)((ulong)(lVar36 + lVar19) >> 0xb);
    local_a8[lVar26] = (int)((ulong)(lVar19 - lVar36) >> 0xb);
    local_1c0[lVar26] = (int)((ulong)(lVar38 + lVar41) >> 0xb);
    local_c4[lVar26] = (int)((ulong)(lVar41 - lVar38) >> 0xb);
    iVar27 = (int)(uVar6 + lVar21 * -0x2d42 >> 0xb);
    local_1a4[lVar26] = iVar27 + iVar1 * 4;
    local_e0[lVar26] = iVar27 + iVar1 * -4;
    local_188[lVar26] = (int)((ulong)(lVar23 + lVar34) >> 0xb);
    local_fc[lVar26] = (int)((ulong)(lVar34 - lVar23) >> 0xb);
    local_16c[lVar26] = (int)((ulong)(lVar40 + lVar29) >> 0xb);
    local_118[lVar26] = (int)((ulong)(lVar29 - lVar40) >> 0xb);
    local_150[lVar26] = (int)((ulong)(lVar4 + lVar25) >> 0xb);
    local_134[lVar26] = (int)((ulong)(lVar25 - lVar4) >> 0xb);
    lVar26 = lVar26 + 1;
  } while ((int)lVar26 != 7);
  lVar26 = 0;
  piVar28 = local_1f8;
  lVar24 = lVar24 + 0x80;
  do {
    iVar9 = piVar28[1];
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar26) + (ulong)param_5);
    iVar1 = *piVar28 * 0x2000 + 0x20000;
    iVar7 = piVar28[5];
    iVar10 = piVar28[6];
    iVar8 = piVar28[3];
    iVar11 = piVar28[4];
    iVar14 = (iVar11 - iVar10) * 0x1c37;
    iVar12 = piVar28[2];
    iVar15 = (iVar12 - iVar11) * 0xa12;
    iVar16 = (iVar8 + iVar9) * 0x1def;
    iVar13 = iVar1 + (iVar10 + iVar12) * 0x28c6;
    iVar27 = iVar14 + iVar10 * -0x27d + iVar13;
    iVar17 = (iVar7 + iVar8) * -0x2c1f;
    iVar18 = (iVar7 + iVar9) * 0x13a3;
    iVar2 = iVar16 + (iVar9 - iVar8) * -0x573 + iVar18;
    iVar14 = iVar1 + iVar11 * -0x3aeb + iVar15 + iVar14;
    *puVar5 = *(undefined1 *)(lVar24 + ((ulong)((uint)(iVar2 + iVar27) >> 0x12) & 0x3ff));
    iVar8 = iVar16 + (iVar9 - iVar8) * 0x573 + iVar17;
    iVar13 = iVar15 + iVar12 * -0x4f0f + iVar13;
    puVar5[6] = *(undefined1 *)(lVar24 + ((ulong)((uint)(iVar27 - iVar2) >> 0x12) & 0x3ff));
    iVar17 = iVar18 + iVar7 * 0x3bde + iVar17;
    puVar5[1] = *(undefined1 *)(lVar24 + ((ulong)((uint)(iVar8 + iVar14) >> 0x12) & 0x3ff));
    puVar5[5] = *(undefined1 *)(lVar24 + ((ulong)((uint)(iVar14 - iVar8) >> 0x12) & 0x3ff));
    puVar5[2] = *(undefined1 *)(lVar24 + ((ulong)((uint)(iVar17 + iVar13) >> 0x12) & 0x3ff));
    puVar5[4] = *(undefined1 *)(lVar24 + ((ulong)((uint)(iVar13 - iVar17) >> 0x12) & 0x3ff));
    puVar5[3] = *(undefined1 *)
                 (lVar24 + ((ulong)((uint)(iVar1 + (iVar11 - (iVar10 + iVar12)) * 0x2d41) >> 0x12) &
                           0x3ff));
    lVar26 = lVar26 + 8;
    piVar28 = piVar28 + 7;
  } while (lVar26 != 0x70);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1005495c8(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int *piVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  int local_190 [6];
  undefined4 local_178 [6];
  undefined4 local_160 [6];
  undefined4 local_148 [6];
  undefined4 local_130 [6];
  undefined4 local_118 [6];
  undefined4 local_100 [6];
  undefined4 local_e8 [6];
  undefined4 local_d0 [6];
  undefined4 local_b8 [6];
  undefined4 local_a0 [6];
  undefined4 local_88 [6];
  long local_70;
  
  lVar22 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar19 = *(long *)(param_1 + 0x1b8);
  lVar25 = *(long *)(param_2 + 0x58);
  do {
    piVar24 = (int *)(lVar25 + lVar22 * 4);
    psVar4 = (short *)(param_3 + lVar22 * 2);
    uVar9 = (long)(*piVar24 * (int)*psVar4) << 0xd | 0x400;
    lVar28 = (long)piVar24[0x20] * (long)psVar4[0x20] * 0x2731 + uVar9;
    lVar31 = uVar9 + (long)piVar24[0x20] * (long)psVar4[0x20] * -0x2731;
    lVar20 = (long)piVar24[0x10] * (long)psVar4[0x10];
    lVar23 = (long)piVar24[0x30] * (long)psVar4[0x30];
    lVar5 = uVar9 + (lVar20 - lVar23) * 0x2000;
    lVar29 = uVar9 + (lVar20 - lVar23) * -0x2000;
    lVar6 = lVar20 * 0x2bb6 + lVar23 * 0x2000;
    lVar7 = lVar6 + lVar28;
    lVar28 = lVar28 - lVar6;
    lVar20 = lVar20 * 0xbb6 + lVar23 * -0x2000;
    lVar6 = lVar20 + lVar31;
    lVar31 = lVar31 - lVar20;
    lVar21 = (long)piVar24[8] * (long)psVar4[8];
    lVar17 = (long)piVar24[0x18] * (long)psVar4[0x18];
    lVar26 = (long)piVar24[0x28] * (long)psVar4[0x28];
    lVar30 = (long)piVar24[0x38] * (long)psVar4[0x38];
    lVar27 = (lVar26 + lVar21 + lVar30) * 0x1b8d;
    lVar23 = lVar27 + (lVar26 + lVar21) * 0x85b;
    lVar20 = lVar17 * 0x29cf + lVar21 * 0x8f7 + lVar23;
    lVar16 = (lVar30 + lVar26) * -0x2175;
    lVar23 = lVar17 * -0x1151 + lVar26 * -0x2f50 + lVar16 + lVar23;
    lVar16 = lVar17 * -0x29cf + lVar30 * 0x32c6 + lVar27 + lVar16;
    lVar27 = lVar17 * -0x1151 + lVar21 * -0x15a4 + lVar30 * -0x3f74 + lVar27;
    lVar18 = ((lVar21 - lVar30) + (lVar17 - lVar26)) * 0x1151;
    lVar21 = lVar18 + (lVar21 - lVar30) * 0x187e;
    lVar18 = lVar18 + (lVar17 - lVar26) * -0x3b21;
    local_190[lVar22] = (int)((ulong)(lVar20 + lVar7) >> 0xb);
    local_88[lVar22] = (int)((ulong)(lVar7 - lVar20) >> 0xb);
    local_178[lVar22] = (int)((ulong)(lVar21 + lVar5) >> 0xb);
    local_a0[lVar22] = (int)((ulong)(lVar5 - lVar21) >> 0xb);
    local_160[lVar22] = (int)((ulong)(lVar23 + lVar6) >> 0xb);
    local_b8[lVar22] = (int)((ulong)(lVar6 - lVar23) >> 0xb);
    local_148[lVar22] = (int)((ulong)(lVar16 + lVar31) >> 0xb);
    local_d0[lVar22] = (int)((ulong)(lVar31 - lVar16) >> 0xb);
    local_130[lVar22] = (int)((ulong)(lVar18 + lVar29) >> 0xb);
    local_e8[lVar22] = (int)((ulong)(lVar29 - lVar18) >> 0xb);
    local_118[lVar22] = (int)((ulong)(lVar27 + lVar28) >> 0xb);
    local_100[lVar22] = (int)((ulong)(lVar28 - lVar27) >> 0xb);
    lVar22 = lVar22 + 1;
  } while ((int)lVar22 != 6);
  lVar22 = 0;
  piVar24 = local_190;
  lVar19 = lVar19 + 0x80;
  do {
    puVar8 = (undefined1 *)(*(long *)(param_4 + lVar22) + (ulong)param_5);
    iVar11 = piVar24[1];
    iVar12 = piVar24[5];
    iVar1 = *piVar24 * 0x2000 + 0x20000;
    iVar14 = iVar1 + piVar24[4] * 0x16a1;
    iVar10 = piVar24[2];
    iVar13 = piVar24[3];
    iVar2 = iVar14 + iVar10 * 0x2731;
    iVar15 = (iVar12 + iVar11) * 0xbb6;
    iVar3 = iVar15 + (iVar13 + iVar11) * 0x2000;
    iVar1 = iVar1 + piVar24[4] * -0x2d42;
    iVar11 = iVar11 - (iVar13 + iVar12);
    iVar15 = iVar15 + (iVar12 - iVar13) * 0x2000;
    *puVar8 = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar3 + iVar2) >> 0x12) & 0x3ff));
    iVar14 = iVar14 + iVar10 * -0x2731;
    puVar8[5] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar2 - iVar3) >> 0x12) & 0x3ff));
    puVar8[1] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar1 + iVar11 * 0x2000) >> 0x12) & 0x3ff))
    ;
    puVar8[4] = *(undefined1 *)
                 (lVar19 + ((ulong)((uint)(iVar1 + iVar11 * -0x2000) >> 0x12) & 0x3ff));
    puVar8[2] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar15 + iVar14) >> 0x12) & 0x3ff));
    puVar8[3] = *(undefined1 *)(lVar19 + ((ulong)((uint)(iVar14 - iVar15) >> 0x12) & 0x3ff));
    lVar22 = lVar22 + 8;
    piVar24 = piVar24 + 6;
  } while (lVar22 != 0x60);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100549928(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int iVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int local_138 [5];
  undefined4 local_124 [5];
  int local_110 [5];
  undefined4 local_fc [5];
  undefined4 local_e8 [5];
  undefined4 local_d4 [5];
  undefined4 local_c0 [5];
  int local_ac [5];
  undefined4 local_98 [5];
  undefined4 local_84 [5];
  long local_70;
  
  lVar17 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  lVar15 = *(long *)(param_1 + 0x1b8);
  lVar19 = *(long *)(param_2 + 0x58);
  do {
    piVar18 = (int *)(lVar19 + lVar17 * 4);
    psVar2 = (short *)(param_3 + lVar17 * 2);
    uVar7 = (long)(*piVar18 * (int)*psVar2) << 0xd | 0x400;
    lVar20 = (long)piVar18[0x20] * (long)psVar2[0x20];
    lVar23 = uVar7 + lVar20 * 0x249d;
    lVar24 = uVar7 + lVar20 * -0xdfc;
    lVar26 = ((long)piVar18[0x30] * (long)psVar2[0x30] + (long)piVar18[0x10] * (long)psVar2[0x10]) *
             0x1a9a;
    lVar21 = lVar26 + (long)piVar18[0x10] * (long)psVar2[0x10] * 0x1071;
    lVar26 = lVar26 + (long)piVar18[0x30] * (long)psVar2[0x30] * -0x45a4;
    lVar3 = lVar21 + lVar23;
    lVar23 = lVar23 - lVar21;
    lVar21 = lVar26 + lVar24;
    lVar24 = lVar24 - lVar26;
    lVar25 = (long)piVar18[8] * (long)psVar2[8];
    lVar14 = (long)piVar18[0x28] * (long)psVar2[0x28];
    lVar26 = (long)piVar18[0x38] * (long)psVar2[0x38] + (long)piVar18[0x18] * (long)psVar2[0x18];
    lVar16 = (long)piVar18[0x18] * (long)psVar2[0x18] - (long)piVar18[0x38] * (long)psVar2[0x38];
    lVar4 = lVar16 * 0x9e3 + lVar14 * 0x2000;
    lVar5 = lVar26 * 0x1e6f + lVar25 * 0x2cb3 + lVar4;
    lVar4 = lVar26 * -0x1e6f + lVar25 * 0x714 + lVar4;
    lVar22 = lVar14 * 0x2000 + lVar16 * -0x19e3;
    iVar11 = (int)lVar25 - ((int)lVar16 + (int)lVar14);
    lVar14 = lVar25 * 0x2853 - (lVar26 * 0x12cf + lVar22);
    lVar22 = lVar22 + lVar26 * -0x12cf + lVar25 * 0x148c;
    local_138[lVar17] = (int)((ulong)(lVar5 + lVar3) >> 0xb);
    local_84[lVar17] = (int)((ulong)(lVar3 - lVar5) >> 0xb);
    local_124[lVar17] = (int)((ulong)(lVar14 + lVar21) >> 0xb);
    local_98[lVar17] = (int)((ulong)(lVar21 - lVar14) >> 0xb);
    iVar13 = (int)(uVar7 + lVar20 * -0x2d42 >> 0xb);
    local_110[lVar17] = iVar13 + iVar11 * 4;
    local_ac[lVar17] = iVar13 + iVar11 * -4;
    local_fc[lVar17] = (int)((ulong)(lVar22 + lVar24) >> 0xb);
    local_c0[lVar17] = (int)((ulong)(lVar24 - lVar22) >> 0xb);
    local_e8[lVar17] = (int)((ulong)(lVar4 + lVar23) >> 0xb);
    local_d4[lVar17] = (int)((ulong)(lVar23 - lVar4) >> 0xb);
    lVar17 = lVar17 + 1;
  } while ((int)lVar17 != 5);
  lVar17 = 0;
  piVar18 = local_138;
  lVar15 = lVar15 + 0x80;
  do {
    iVar11 = *piVar18 * 0x2000 + 0x20000;
    iVar13 = piVar18[4] + piVar18[2];
    iVar12 = piVar18[2] - piVar18[4];
    iVar8 = iVar11 + iVar12 * 0xb50;
    iVar1 = iVar8 + iVar13 * 0x194c;
    iVar10 = (piVar18[3] + piVar18[1]) * 0x1a9a;
    iVar9 = iVar10 + piVar18[1] * 0x1071;
    puVar6 = (undefined1 *)(*(long *)(param_4 + lVar17) + (ulong)param_5);
    iVar10 = iVar10 + piVar18[3] * -0x45a4;
    iVar8 = iVar8 + iVar13 * -0x194c;
    *puVar6 = *(undefined1 *)(lVar15 + ((ulong)((uint)(iVar9 + iVar1) >> 0x12) & 0x3ff));
    puVar6[4] = *(undefined1 *)(lVar15 + ((ulong)((uint)(iVar1 - iVar9) >> 0x12) & 0x3ff));
    puVar6[1] = *(undefined1 *)(lVar15 + ((ulong)((uint)(iVar10 + iVar8) >> 0x12) & 0x3ff));
    puVar6[3] = *(undefined1 *)(lVar15 + ((ulong)((uint)(iVar8 - iVar10) >> 0x12) & 0x3ff));
    puVar6[2] = *(undefined1 *)
                 (lVar15 + ((ulong)((uint)(iVar11 + iVar12 * -0x2d40) >> 0x12) & 0x3ff));
    lVar17 = lVar17 + 8;
    piVar18 = piVar18 + 5;
  } while (lVar17 != 0x50);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100549c30(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  long lVar1;
  undefined1 *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  int *piVar9;
  short *psVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  short sVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  int local_e8 [8];
  int local_c8 [4];
  int local_b8 [4];
  int aiStack_a8 [4];
  int local_98 [4];
  int local_88 [4];
  int local_78 [4];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = *(long *)(param_1 + 0x1b8);
  piVar9 = local_e8;
  psVar10 = (short *)(param_3 + 0x40);
  uVar11 = 5;
  piVar12 = *(int **)(param_2 + 0x58);
  do {
    sVar15 = psVar10[-0x10];
    if (psVar10[-0x18] == 0 && sVar15 == 0) {
      if ((((psVar10[-8] != 0) || (*psVar10 != 0)) || (psVar10[8] != 0)) ||
         ((psVar10[0x10] != 0 || (psVar10[0x18] != 0)))) {
        sVar15 = 0;
        goto LAB_100549ce8;
      }
      iVar13 = (int)psVar10[-0x20] * *piVar12 * 4;
      *piVar9 = iVar13;
      piVar9[4] = iVar13;
      piVar9[8] = iVar13;
      piVar9[0xc] = iVar13;
      piVar9[0x10] = iVar13;
      piVar9[0x14] = iVar13;
      piVar9[0x18] = iVar13;
      lVar17 = 0x1c;
    }
    else {
LAB_100549ce8:
      lVar18 = ((long)piVar12[0x30] * (long)psVar10[0x10] + (long)piVar12[0x10] * (long)sVar15) *
               0x1151;
      lVar16 = lVar18 + (long)piVar12[0x10] * (long)sVar15 * 0x187e;
      lVar18 = lVar18 + (long)piVar12[0x30] * (long)psVar10[0x10] * -0x3b21;
      uVar3 = (long)(*piVar12 * (int)psVar10[-0x20]) << 0xd | 0x400;
      lVar17 = uVar3 + (long)(piVar12[0x20] * (int)*psVar10) * 0x2000;
      lVar19 = uVar3 + (long)(piVar12[0x20] * (int)*psVar10) * -0x2000;
      lVar1 = lVar17 + lVar16;
      lVar17 = lVar17 - lVar16;
      lVar16 = lVar19 + lVar18;
      lVar19 = lVar19 - lVar18;
      lVar18 = (long)piVar12[0x38] * (long)psVar10[0x18];
      lVar20 = (long)piVar12[0x28] * (long)psVar10[8];
      lVar21 = (long)piVar12[0x18] * (long)psVar10[-8];
      lVar14 = (long)piVar12[8] * (long)psVar10[-0x18];
      lVar8 = (lVar14 + lVar20 + lVar21 + lVar18) * 0x25a1;
      lVar22 = lVar8 + (lVar21 + lVar18) * -0x3ec5;
      lVar8 = lVar8 + (lVar14 + lVar20) * -0xc7c;
      lVar23 = (lVar14 + lVar18) * -0x1ccd;
      lVar18 = lVar23 + lVar18 * 0x98e + lVar22;
      lVar14 = lVar23 + lVar14 * 0x300b + lVar8;
      lVar23 = (lVar21 + lVar20) * -0x5203;
      lVar8 = lVar23 + lVar20 * 0x41b3 + lVar8;
      lVar22 = lVar23 + lVar21 * 0x6254 + lVar22;
      *piVar9 = (int)((ulong)(lVar14 + lVar1) >> 0xb);
      piVar9[0x1c] = (int)((ulong)(lVar1 - lVar14) >> 0xb);
      piVar9[4] = (int)((ulong)(lVar22 + lVar16) >> 0xb);
      piVar9[0x18] = (int)((ulong)(lVar16 - lVar22) >> 0xb);
      piVar9[8] = (int)((ulong)(lVar8 + lVar19) >> 0xb);
      piVar9[0x14] = (int)((ulong)(lVar19 - lVar8) >> 0xb);
      piVar9[0xc] = (int)((ulong)(lVar18 + lVar17) >> 0xb);
      iVar13 = (int)((ulong)(lVar17 - lVar18) >> 0xb);
      lVar17 = 0x10;
    }
    piVar9[lVar17] = iVar13;
    piVar9 = piVar9 + 1;
    piVar12 = piVar12 + 1;
    uVar11 = uVar11 - 1;
    psVar10 = psVar10 + 1;
    if (uVar11 < 2) {
      lVar17 = 0;
      piVar9 = local_e8;
      lVar7 = lVar7 + 0x80;
      do {
        puVar2 = (undefined1 *)(*(long *)(param_4 + lVar17) + (ulong)param_5);
        iVar13 = *piVar9 + 0x10 + piVar9[2];
        iVar6 = (*piVar9 + 0x10) - piVar9[2];
        iVar5 = (piVar9[3] + piVar9[1]) * 0x1151;
        iVar4 = iVar5 + piVar9[1] * 0x187e;
        iVar5 = iVar5 + piVar9[3] * -0x3b21;
        *puVar2 = *(undefined1 *)
                   (lVar7 + ((ulong)((uint)(iVar4 + iVar13 * 0x2000) >> 0x12) & 0x3ff));
        puVar2[3] = *(undefined1 *)
                     (lVar7 + ((ulong)((uint)(iVar13 * 0x2000 - iVar4) >> 0x12) & 0x3ff));
        puVar2[1] = *(undefined1 *)
                     (lVar7 + ((ulong)((uint)(iVar5 + iVar6 * 0x2000) >> 0x12) & 0x3ff));
        puVar2[2] = *(undefined1 *)
                     (lVar7 + ((ulong)((uint)(iVar6 * 0x2000 - iVar5) >> 0x12) & 0x3ff));
        lVar17 = lVar17 + 8;
        piVar9 = piVar9 + 4;
      } while (lVar17 != 0x40);
      if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
  } while( true );
}




void FUN_100549f58(long param_1,long param_2,long param_3,long param_4,uint param_5)

{
  int *piVar1;
  short *psVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  int local_80 [18];
  long local_38;
  
  piVar17 = local_80;
  lVar16 = 0;
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  lVar15 = *(long *)(param_1 + 0x1b8);
  lVar18 = *(long *)(param_2 + 0x58);
  do {
    piVar1 = (int *)(lVar18 + lVar16 * 4);
    psVar2 = (short *)(param_3 + lVar16 * 2);
    uVar6 = (long)(*piVar1 * (int)*psVar2) << 0xd | 0x400;
    sVar8 = psVar2[0x20];
    iVar12 = piVar1[0x20];
    lVar13 = uVar6 + (long)iVar12 * (long)sVar8 * 0x16a1;
    lVar3 = (long)piVar1[0x10] * (long)psVar2[0x10] * 0x2731 + lVar13;
    lVar13 = lVar13 + (long)piVar1[0x10] * (long)psVar2[0x10] * -0x2731;
    lVar14 = (long)piVar1[8] * (long)psVar2[8];
    lVar20 = (long)piVar1[0x18] * (long)psVar2[0x18];
    lVar19 = (long)piVar1[0x28] * (long)psVar2[0x28];
    lVar11 = (lVar19 + lVar14) * 0xbb6;
    lVar4 = lVar11 + (lVar20 + lVar14) * 0x2000;
    lVar11 = lVar11 + (lVar19 - lVar20) * 0x2000;
    iVar10 = (int)lVar14 - ((int)lVar20 + (int)lVar19);
    local_80[lVar16] = (int)((ulong)(lVar4 + lVar3) >> 0xb);
    local_80[lVar16 + 0xf] = (int)((ulong)(lVar3 - lVar4) >> 0xb);
    iVar12 = (int)(uVar6 + (long)iVar12 * (long)sVar8 * -0x2d42 >> 0xb);
    local_80[lVar16 + 3] = iVar12 + iVar10 * 4;
    local_80[lVar16 + 0xc] = iVar12 + iVar10 * -4;
    local_80[lVar16 + 6] = (int)((ulong)(lVar11 + lVar13) >> 0xb);
    local_80[lVar16 + 9] = (int)((ulong)(lVar13 - lVar11) >> 0xb);
    lVar16 = lVar16 + 1;
  } while ((int)lVar16 != 3);
  lVar16 = 0;
  lVar15 = lVar15 + 0x80;
  do {
    puVar5 = (undefined1 *)(*(long *)(param_4 + lVar16) + (ulong)param_5);
    iVar10 = piVar17[1];
    iVar12 = *piVar17 * 0x2000 + 0x20000;
    iVar7 = piVar17[2];
    iVar9 = iVar12 + iVar7 * 0x16a1;
    *puVar5 = *(undefined1 *)(lVar15 + ((ulong)((uint)(iVar9 + iVar10 * 0x2731) >> 0x12) & 0x3ff));
    puVar5[2] = *(undefined1 *)
                 (lVar15 + ((ulong)((uint)(iVar9 + iVar10 * -0x2731) >> 0x12) & 0x3ff));
    puVar5[1] = *(undefined1 *)
                 (lVar15 + ((ulong)((uint)(iVar12 + iVar7 * -0x2d42) >> 0x12) & 0x3ff));
    lVar16 = lVar16 + 8;
    piVar17 = piVar17 + 3;
  } while (lVar16 != 0x30);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10054a12c(long param_1,long param_2,short *param_3,long param_4,uint param_5)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long lVar11;
  long local_58;
  undefined4 local_50 [2];
  long local_48 [7];
  
  local_48[6] = *(long *)PTR____stack_chk_guard_101444218;
  lVar6 = *(long *)(param_1 + 0x1b8);
  piVar7 = *(int **)(param_2 + 0x58);
  plVar9 = &local_58;
  bVar3 = true;
  do {
    bVar10 = bVar3;
    lVar8 = (long)piVar7[0x10] * (long)param_3[0x10] + (long)*piVar7 * (long)*param_3;
    lVar11 = (long)*piVar7 * (long)*param_3 - (long)piVar7[0x10] * (long)param_3[0x10];
    lVar5 = ((long)piVar7[0x18] * (long)param_3[0x18] + (long)piVar7[8] * (long)param_3[8]) * 0x1151
    ;
    lVar4 = lVar5 + (long)piVar7[8] * (long)param_3[8] * 0x187e;
    lVar5 = lVar5 + (long)piVar7[0x18] * (long)param_3[0x18] * -0x3b21;
    *plVar9 = lVar4 + lVar8 * 0x2000;
    plVar9[6] = lVar8 * 0x2000 - lVar4;
    plVar9[2] = lVar5 + lVar11 * 0x2000;
    plVar9[4] = lVar11 * 0x2000 - lVar5;
    param_3 = param_3 + 1;
    piVar7 = piVar7 + 1;
    plVar9 = plVar9 + 1;
    bVar3 = false;
  } while (bVar10);
  lVar8 = 0;
  plVar9 = &local_58;
  lVar6 = lVar6 + 0x80;
  do {
    puVar2 = (undefined1 *)(*(long *)(param_4 + lVar8) + (ulong)param_5);
    iVar1 = (int)*plVar9 + 0x8000;
    lVar4 = plVar9[1];
    *puVar2 = *(undefined1 *)(lVar6 + ((ulong)((uint)(iVar1 + (int)lVar4) >> 0x10) & 0x3ff));
    puVar2[1] = *(undefined1 *)(lVar6 + ((ulong)((uint)(iVar1 - (int)lVar4) >> 0x10) & 0x3ff));
    lVar8 = lVar8 + 8;
    plVar9 = plVar9 + 2;
  } while (lVar8 != 0x20);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48[6]) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10054a268(long param_1,long param_2,ushort *param_3,long *param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(long *)(param_1 + 0x1b8) + 0x80;
  iVar2 = **(int **)(param_2 + 0x58) * (uint)*param_3 + 4;
  iVar3 = (*(int **)(param_2 + 0x58))[8] * (uint)param_3[8];
  *(undefined1 *)(*param_4 + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 + iVar3) >> 3) & 0x3ff));
  *(undefined1 *)(param_4[1] + (ulong)param_5) =
       *(undefined1 *)(lVar1 + ((ulong)((uint)(iVar2 - iVar3) >> 3) & 0x3ff));
  return;
}




long FUN_10054a438(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  
  lVar6 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x100000038;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = 0;
  if ((param_3 & 7) != 0) {
    lVar1 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    lVar4 = *param_1;
    *(undefined4 *)(lVar4 + 0x28) = 0xf;
    *(uint *)(lVar4 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  param_3 = lVar1 + param_3;
  puVar8 = (undefined8 *)(lVar6 + (long)(int)param_2 * 8 + 0x68);
  puVar5 = (undefined8 *)*puVar8;
  if (puVar5 == (undefined8 *)0x0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    do {
      puVar3 = puVar5;
      if (param_3 <= (ulong)puVar3[2]) goto LAB_10054a5a8;
      puVar5 = (undefined8 *)*puVar3;
      puVar7 = puVar3;
    } while ((undefined8 *)*puVar3 != (undefined8 *)0x0);
  }
  puVar2 = &DAT_10115cd60;
  if (puVar7 != (undefined8 *)0x0) {
    puVar2 = &DAT_10115cd70;
  }
  uVar9 = 0x3b9ac9e8 - param_3;
  if (*(ulong *)(puVar2 + (long)(int)param_2 * 8) <= 0x3b9ac9e8 - param_3) {
    uVar9 = *(ulong *)(puVar2 + (long)(int)param_2 * 8);
  }
  lVar4 = uVar9 + param_3;
  lVar1 = lVar4 + 0x18;
  puVar3 = (undefined8 *)FUN_10054b350(param_1,lVar1);
  while (puVar3 == (undefined8 *)0x0) {
    if (uVar9 < 100) {
      *(undefined8 *)(*param_1 + 0x28) = 0x200000038;
      (**(code **)*param_1)(param_1);
    }
    uVar9 = uVar9 >> 1;
    lVar4 = uVar9 + param_3;
    lVar1 = lVar4 + 0x18;
    puVar3 = (undefined8 *)FUN_10054b350(param_1,lVar1);
  }
  *(long *)(lVar6 + 0x98) = *(long *)(lVar6 + 0x98) + lVar1;
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = lVar4;
  if (puVar7 != (undefined8 *)0x0) {
    puVar8 = puVar7;
  }
  *puVar8 = puVar3;
LAB_10054a5a8:
  lVar6 = puVar3[1];
  puVar3[1] = lVar6 + param_3;
  puVar3[2] = puVar3[2] - param_3;
  return (long)puVar3 + lVar6 + 0x18;
}




undefined8 * FUN_10054a5dc(long *param_1,uint param_2,ulong param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  if (0x3b9ac9e8 < param_3) {
    *(undefined8 *)(*param_1 + 0x28) = 0x300000038;
    (**(code **)*param_1)(param_1);
  }
  lVar1 = 0;
  if ((param_3 & 7) != 0) {
    lVar1 = 8 - (param_3 & 7);
  }
  if (1 < param_2) {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0xf;
    *(uint *)(lVar3 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar3 = lVar1 + param_3 + 0x18;
  puVar2 = (undefined8 *)FUN_10054b360(param_1,lVar3);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000038;
    (**(code **)*param_1)(param_1);
  }
  *(long *)(lVar4 + 0x98) = *(long *)(lVar4 + 0x98) + lVar3;
  lVar4 = lVar4 + (long)(int)param_2 * 8;
  *puVar2 = *(undefined8 *)(lVar4 + 0x78);
  puVar2[1] = lVar1 + param_3;
  puVar2[2] = 0;
  *(undefined8 **)(lVar4 + 0x78) = puVar2;
  return puVar2 + 3;
}




long FUN_10054a6dc(long *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  
  lVar5 = param_1[1];
  uVar7 = 0;
  if (param_3 != 0) {
    uVar7 = 0x3b9ac9e8 / param_3;
  }
  if (0x3b9ac9e8 < param_3) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x48;
    (*(code *)*puVar3)(param_1);
  }
  if (param_4 <= uVar7) {
    uVar7 = param_4;
  }
  uVar6 = (ulong)uVar7;
  *(uint *)(lVar5 + 0xa0) = uVar7;
  lVar5 = FUN_10054a438(param_1,param_2,(ulong)param_4 << 3);
  if (param_4 != 0) {
    uVar7 = 0;
    do {
      uVar1 = (uint)uVar6;
      if (param_4 - uVar7 <= (uint)uVar6) {
        uVar1 = param_4 - uVar7;
      }
      uVar6 = (ulong)uVar1;
      lVar2 = FUN_10054a5dc(param_1,param_2,uVar6 * param_3);
      uVar4 = uVar6;
      while (uVar1 != 0) {
        *(long *)(lVar5 + (ulong)uVar7 * 8) = lVar2;
        lVar2 = lVar2 + (ulong)param_3;
        uVar1 = (int)uVar4 - 1;
        uVar4 = (ulong)uVar1;
        uVar7 = uVar7 + 1;
      }
    } while (uVar7 < param_4);
  }
  return lVar5;
}




long FUN_10054a7d0(long *param_1,undefined8 param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar6 = param_1[1];
  uVar7 = (ulong)param_3 * 0x80;
  uVar8 = 0;
  if ((ulong)param_3 != 0) {
    uVar8 = 0x3b9ac9e8 / uVar7;
  }
  if (0x773593 < param_3) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x48;
    (*(code *)*puVar3)(param_1);
  }
  uVar5 = (uint)param_4;
  uVar9 = (uint)uVar8;
  if ((param_4 & 0xffffffff) <= uVar8) {
    uVar9 = uVar5;
  }
  uVar8 = (ulong)uVar9;
  *(uint *)(lVar6 + 0xa0) = uVar9;
  lVar6 = FUN_10054a438(param_1,param_2,(param_4 & 0xffffffff) << 3);
  if (uVar5 != 0) {
    uVar9 = 0;
    do {
      uVar1 = (uint)uVar8;
      if (uVar5 - uVar9 <= (uint)uVar8) {
        uVar1 = uVar5 - uVar9;
      }
      uVar8 = (ulong)uVar1;
      lVar2 = FUN_10054a5dc(param_1,param_2,uVar7 * uVar8);
      uVar4 = uVar8;
      while (uVar1 != 0) {
        *(long *)(lVar6 + (ulong)uVar9 * 8) = lVar2;
        lVar2 = lVar2 + uVar7;
        uVar1 = (int)uVar4 - 1;
        uVar4 = (ulong)uVar1;
        uVar9 = uVar9 + 1;
      }
    } while (uVar9 < uVar5);
  }
  return lVar6;
}




void FUN_10054a8cc(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  if ((int)param_2 != 1) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    *(int *)(lVar2 + 0x2c) = (int)param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined8 *)FUN_10054a438(param_1,param_2,0x98);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = param_5;
  *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  *(undefined4 *)(puVar1 + 2) = param_6;
  *(undefined4 *)((long)puVar1 + 0x24) = param_3;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  puVar1[6] = *(undefined8 *)(lVar3 + 0x88);
  *(undefined8 **)(lVar3 + 0x88) = puVar1;
  return;
}




void FUN_10054a96c(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_1[1];
  if ((int)param_2 != 1) {
    lVar2 = *param_1;
    *(undefined4 *)(lVar2 + 0x28) = 0xf;
    *(int *)(lVar2 + 0x2c) = (int)param_2;
    (**(code **)*param_1)(param_1);
  }
  puVar1 = (undefined8 *)FUN_10054a438(param_1,param_2,0x98);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 1) = param_5;
  *(undefined4 *)((long)puVar1 + 0xc) = param_4;
  *(undefined4 *)(puVar1 + 2) = param_6;
  *(undefined4 *)((long)puVar1 + 0x24) = param_3;
  *(undefined4 *)((long)puVar1 + 0x2c) = 0;
  puVar1[6] = *(undefined8 *)(lVar3 + 0x90);
  *(undefined8 **)(lVar3 + 0x90) = puVar1;
  return;
}




void FUN_10054aa0c(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 8);
  plVar4 = *(long **)(lVar7 + 0x88);
  if (plVar4 == (long *)0x0) {
    lVar6 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = 0;
    lVar6 = 0;
    do {
      if (*plVar4 == 0) {
        lVar5 = lVar5 + (ulong)*(uint *)((long)plVar4 + 0xc) * (ulong)*(uint *)(plVar4 + 2);
        lVar6 = lVar6 + (ulong)*(uint *)(plVar4 + 1) * (ulong)*(uint *)((long)plVar4 + 0xc);
      }
      plVar4 = (long *)plVar4[6];
    } while (plVar4 != (long *)0x0);
  }
  for (plVar4 = *(long **)(lVar7 + 0x90); plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
    if (*plVar4 == 0) {
      lVar5 = lVar5 + (ulong)*(uint *)(plVar4 + 2) * (ulong)*(uint *)((long)plVar4 + 0xc) * 0x80;
      lVar6 = lVar6 + (ulong)*(uint *)((long)plVar4 + 0xc) * (ulong)*(uint *)(plVar4 + 1) * 0x80;
    }
  }
  if (0 < lVar5) {
    lVar2 = FUN_10054b370(param_1,lVar5,lVar6,*(undefined8 *)(lVar7 + 0x98));
    if (lVar2 < lVar6) {
      lVar6 = 0;
      if (lVar5 != 0) {
        lVar6 = lVar2 / lVar5;
      }
      if (lVar6 < 2) {
        lVar6 = 1;
      }
    }
    else {
      lVar6 = 1000000000;
    }
    for (plVar4 = *(long **)(lVar7 + 0x88); plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      if (*plVar4 == 0) {
        uVar3 = (ulong)*(uint *)(plVar4 + 1);
        uVar1 = *(uint *)(plVar4 + 2);
        lVar5 = 0;
        if ((ulong)uVar1 != 0) {
          lVar5 = (long)(uVar3 - 1) / (long)(ulong)uVar1;
        }
        if (lVar5 < lVar6) {
          *(uint *)((long)plVar4 + 0x14) = *(uint *)(plVar4 + 1);
        }
        else {
          *(uint *)((long)plVar4 + 0x14) = uVar1 * (int)lVar6;
          FUN_10054b378(param_1,plVar4 + 7,*(uint *)((long)plVar4 + 0xc) * uVar3);
          *(undefined4 *)((long)plVar4 + 0x2c) = 1;
          uVar3 = (ulong)*(uint *)((long)plVar4 + 0x14);
        }
        lVar5 = FUN_10054a6dc(param_1,1,*(undefined4 *)((long)plVar4 + 0xc),uVar3);
        *plVar4 = lVar5;
        *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(lVar7 + 0xa0);
        *(undefined4 *)((long)plVar4 + 0x1c) = 0;
        *(undefined4 *)(plVar4 + 4) = 0;
        *(undefined4 *)(plVar4 + 5) = 0;
      }
    }
    for (plVar4 = *(long **)(lVar7 + 0x90); plVar4 != (long *)0x0; plVar4 = (long *)plVar4[6]) {
      if (*plVar4 == 0) {
        uVar3 = (ulong)*(uint *)(plVar4 + 1);
        uVar1 = *(uint *)(plVar4 + 2);
        lVar5 = 0;
        if ((ulong)uVar1 != 0) {
          lVar5 = (long)(uVar3 - 1) / (long)(ulong)uVar1;
        }
        if (lVar5 < lVar6) {
          *(uint *)((long)plVar4 + 0x14) = *(uint *)(plVar4 + 1);
        }
        else {
          *(uint *)((long)plVar4 + 0x14) = uVar1 * (int)lVar6;
          FUN_10054b378(param_1,plVar4 + 7,uVar3 * *(uint *)((long)plVar4 + 0xc) * 0x80);
          *(undefined4 *)((long)plVar4 + 0x2c) = 1;
          uVar3 = (ulong)*(uint *)((long)plVar4 + 0x14);
        }
        lVar5 = FUN_10054a7d0(param_1,1,*(undefined4 *)((long)plVar4 + 0xc),uVar3);
        *plVar4 = lVar5;
        *(undefined4 *)(plVar4 + 3) = *(undefined4 *)(lVar7 + 0xa0);
        *(undefined4 *)((long)plVar4 + 0x1c) = 0;
        *(undefined4 *)(plVar4 + 4) = 0;
        *(undefined4 *)(plVar4 + 5) = 0;
      }
    }
  }
  return;
}




long FUN_10054abf0(long *param_1,long *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar1) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x17;
    (*(code *)*puVar4)(param_1);
  }
  if ((param_3 < *(uint *)((long)param_2 + 0x1c)) ||
     (*(int *)((long)param_2 + 0x14) + *(uint *)((long)param_2 + 0x1c) < uVar1)) {
    if (*(int *)((long)param_2 + 0x2c) == 0) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x47;
      (*(code *)*puVar4)(param_1);
    }
    if ((int)param_2[5] != 0) {
      FUN_10054b144(param_1,param_2,1);
      *(undefined4 *)(param_2 + 5) = 0;
    }
    uVar3 = param_3;
    if ((param_3 <= *(uint *)((long)param_2 + 0x1c)) &&
       (lVar5 = (ulong)uVar1 - (ulong)*(uint *)((long)param_2 + 0x14), uVar3 = (uint)lVar5,
       lVar5 < 1)) {
      uVar3 = 0;
    }
    *(uint *)((long)param_2 + 0x1c) = uVar3;
    FUN_10054b144(param_1,param_2,0);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 < uVar1) {
    if (param_3 <= uVar3) {
      if (param_5 != 0) goto LAB_10054ad24;
LAB_10054ad34:
      if (*(int *)((long)param_2 + 0x24) == 0) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x17;
        (*(code *)*puVar4)(param_1);
        goto LAB_10054ad8c;
      }
LAB_10054ad3c:
      uVar2 = uVar3 - *(int *)((long)param_2 + 0x1c);
      if (uVar2 < uVar1 - *(int *)((long)param_2 + 0x1c)) {
        uVar1 = *(uint *)((long)param_2 + 0xc);
        lVar5 = (ulong)uVar2 << 3;
        iVar6 = (param_4 + param_3) - uVar3;
        do {
          _bzero(*(void **)(*param_2 + lVar5),(ulong)uVar1);
          lVar5 = lVar5 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      goto LAB_10054ad80;
    }
    uVar3 = param_3;
    if (param_5 == 0) goto LAB_10054ad34;
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x17;
    (*(code *)*puVar4)(param_1);
LAB_10054ad24:
    *(uint *)(param_2 + 4) = uVar1;
    if (*(int *)((long)param_2 + 0x24) != 0) goto LAB_10054ad3c;
  }
  else {
LAB_10054ad80:
    if (param_5 == 0) goto LAB_10054ad8c;
  }
  *(undefined4 *)(param_2 + 5) = 1;
LAB_10054ad8c:
  return *param_2 + (ulong)(param_3 - *(int *)((long)param_2 + 0x1c)) * 8;
}




long FUN_10054adcc(long *param_1,long *param_2,uint param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  int iVar6;
  
  uVar1 = param_4 + param_3;
  if (((*(uint *)(param_2 + 1) < uVar1) || (*(uint *)(param_2 + 2) < param_4)) || (*param_2 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x17;
    (*(code *)*puVar4)(param_1);
  }
  if ((param_3 < *(uint *)((long)param_2 + 0x1c)) ||
     (*(int *)((long)param_2 + 0x14) + *(uint *)((long)param_2 + 0x1c) < uVar1)) {
    if (*(int *)((long)param_2 + 0x2c) == 0) {
      puVar4 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar4 + 5) = 0x47;
      (*(code *)*puVar4)(param_1);
    }
    if ((int)param_2[5] != 0) {
      FUN_10054b248(param_1,param_2,1);
      *(undefined4 *)(param_2 + 5) = 0;
    }
    uVar3 = param_3;
    if ((param_3 <= *(uint *)((long)param_2 + 0x1c)) &&
       (lVar5 = (ulong)uVar1 - (ulong)*(uint *)((long)param_2 + 0x14), uVar3 = (uint)lVar5,
       lVar5 < 1)) {
      uVar3 = 0;
    }
    *(uint *)((long)param_2 + 0x1c) = uVar3;
    FUN_10054b248(param_1,param_2,0);
  }
  uVar3 = *(uint *)(param_2 + 4);
  if (uVar3 < uVar1) {
    if (param_3 <= uVar3) {
      if (param_5 != 0) goto LAB_10054af00;
LAB_10054af10:
      if (*(int *)((long)param_2 + 0x24) == 0) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x17;
        (*(code *)*puVar4)(param_1);
        goto LAB_10054af6c;
      }
LAB_10054af18:
      uVar2 = uVar3 - *(int *)((long)param_2 + 0x1c);
      if (uVar2 < uVar1 - *(int *)((long)param_2 + 0x1c)) {
        uVar1 = *(uint *)((long)param_2 + 0xc);
        lVar5 = (ulong)uVar2 << 3;
        iVar6 = (param_4 + param_3) - uVar3;
        do {
          _bzero(*(void **)(*param_2 + lVar5),(ulong)uVar1 << 7);
          lVar5 = lVar5 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      goto LAB_10054af60;
    }
    uVar3 = param_3;
    if (param_5 == 0) goto LAB_10054af10;
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x17;
    (*(code *)*puVar4)(param_1);
LAB_10054af00:
    *(uint *)(param_2 + 4) = uVar1;
    if (*(int *)((long)param_2 + 0x24) != 0) goto LAB_10054af18;
  }
  else {
LAB_10054af60:
    if (param_5 == 0) goto LAB_10054af6c;
  }
  *(undefined4 *)(param_2 + 5) = 1;
LAB_10054af6c:
  return *param_2 + (ulong)(param_3 - *(int *)((long)param_2 + 0x1c)) * 8;
}




void FUN_10054afac(long *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  if (param_2 < 2) {
    if (param_2 == 1) {
      for (lVar3 = *(long *)(lVar4 + 0x88); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x30)) {
        if (*(int *)(lVar3 + 0x2c) != 0) {
          *(undefined4 *)(lVar3 + 0x2c) = 0;
          (**(code **)(lVar3 + 0x48))(param_1,lVar3 + 0x38);
        }
      }
      *(undefined8 *)(lVar4 + 0x88) = 0;
      for (lVar3 = *(long *)(lVar4 + 0x90); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x30)) {
        if (*(int *)(lVar3 + 0x2c) != 0) {
          *(undefined4 *)(lVar3 + 0x2c) = 0;
          (**(code **)(lVar3 + 0x48))(param_1,lVar3 + 0x38);
        }
      }
      *(undefined8 *)(lVar4 + 0x90) = 0;
    }
  }
  else {
    lVar3 = *param_1;
    *(undefined4 *)(lVar3 + 0x28) = 0xf;
    *(uint *)(lVar3 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar3 = lVar4 + (long)(int)param_2 * 8;
  puVar2 = *(undefined8 **)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x78) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    lVar3 = puVar2[1] + puVar2[2] + 0x18;
    FUN_10054b368(param_1,puVar2,lVar3);
    *(long *)(lVar4 + 0x98) = *(long *)(lVar4 + 0x98) - lVar3;
    puVar2 = puVar1;
  }
  lVar3 = lVar4 + (long)(int)param_2 * 8;
  puVar2 = *(undefined8 **)(lVar3 + 0x68);
  *(undefined8 *)(lVar3 + 0x68) = 0;
  while (puVar2 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar2;
    lVar3 = puVar2[1] + puVar2[2] + 0x18;
    FUN_10054b358(param_1,puVar2,lVar3);
    *(long *)(lVar4 + 0x98) = *(long *)(lVar4 + 0x98) - lVar3;
    puVar2 = puVar1;
  }
  return;
}




void FUN_10054b0f4(long param_1)

{
  int iVar1;
  
  iVar1 = 1;
  do {
    FUN_10054afac(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (iVar1 != -1);
  FUN_10054b358(param_1,*(undefined8 *)(param_1 + 8),0xa8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_10054b394(param_1);
  return;
}




void FUN_10054b144(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)((long)param_2 + 0x14);
  if (uVar2 != 0) {
    uVar4 = (ulong)*(uint *)((long)param_2 + 0x1c);
    uVar3 = (ulong)*(uint *)(param_2 + 3);
    if ((ulong)uVar2 <= (ulong)*(uint *)(param_2 + 3)) {
      uVar3 = (ulong)uVar2;
    }
    if ((long)(*(uint *)(param_2 + 4) - uVar4) <= (long)uVar3) {
      uVar3 = *(uint *)(param_2 + 4) - uVar4;
    }
    if ((long)(*(uint *)(param_2 + 1) - uVar4) <= (long)uVar3) {
      uVar3 = *(uint *)(param_2 + 1) - uVar4;
    }
    if (0 < (long)uVar3) {
      uVar7 = 0;
      uVar2 = *(uint *)((long)param_2 + 0xc);
      lVar5 = uVar4 * uVar2;
      lVar1 = 0x38;
      if (param_3 != 0) {
        lVar1 = 0x40;
      }
      do {
        lVar6 = uVar3 * uVar2;
        (**(code **)((long)param_2 + lVar1))
                  (param_1,param_2 + 7,*(undefined8 *)(*param_2 + uVar7 * 8),lVar5,lVar6);
        uVar3 = (ulong)*(uint *)(param_2 + 3);
        uVar7 = uVar7 + uVar3;
        if (*(uint *)((long)param_2 + 0x14) <= uVar7) {
          return;
        }
        lVar5 = lVar6 + lVar5;
        uVar4 = *(uint *)((long)param_2 + 0x14) - uVar7;
        if ((long)uVar4 <= (long)uVar3) {
          uVar3 = uVar4;
        }
        lVar6 = uVar7 + *(uint *)((long)param_2 + 0x1c);
        uVar4 = (ulong)*(uint *)(param_2 + 4) - lVar6;
        if ((long)uVar4 <= (long)uVar3) {
          uVar3 = uVar4;
        }
        uVar4 = (ulong)*(uint *)(param_2 + 1) - lVar6;
        if ((long)uVar4 <= (long)uVar3) {
          uVar3 = uVar4;
        }
      } while (0 < (long)uVar3);
    }
  }
  return;
}




void FUN_10054b248(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  uVar2 = *(uint *)((long)param_2 + 0x14);
  if (uVar2 != 0) {
    uVar4 = (ulong)*(uint *)((long)param_2 + 0x1c);
    uVar3 = (ulong)*(uint *)(param_2 + 3);
    if ((ulong)uVar2 <= (ulong)*(uint *)(param_2 + 3)) {
      uVar3 = (ulong)uVar2;
    }
    if ((long)(*(uint *)(param_2 + 4) - uVar4) <= (long)uVar3) {
      uVar3 = *(uint *)(param_2 + 4) - uVar4;
    }
    if ((long)(*(uint *)(param_2 + 1) - uVar4) <= (long)uVar3) {
      uVar3 = *(uint *)(param_2 + 1) - uVar4;
    }
    if (0 < (long)uVar3) {
      uVar7 = 0;
      lVar8 = (ulong)*(uint *)((long)param_2 + 0xc) * 0x80;
      lVar5 = lVar8 * uVar4;
      lVar1 = 0x38;
      if (param_3 != 0) {
        lVar1 = 0x40;
      }
      do {
        lVar6 = uVar3 * lVar8;
        (**(code **)((long)param_2 + lVar1))
                  (param_1,param_2 + 7,*(undefined8 *)(*param_2 + uVar7 * 8),lVar5,lVar6);
        uVar3 = (ulong)*(uint *)(param_2 + 3);
        uVar7 = uVar7 + uVar3;
        if (*(uint *)((long)param_2 + 0x14) <= uVar7) {
          return;
        }
        lVar5 = lVar6 + lVar5;
        uVar4 = *(uint *)((long)param_2 + 0x14) - uVar7;
        if ((long)uVar4 <= (long)uVar3) {
          uVar3 = uVar4;
        }
        lVar6 = uVar7 + *(uint *)((long)param_2 + 0x1c);
        uVar4 = (ulong)*(uint *)(param_2 + 4) - lVar6;
        if ((long)uVar4 <= (long)uVar3) {
          uVar3 = uVar4;
        }
        uVar4 = (ulong)*(uint *)(param_2 + 1) - lVar6;
        if ((long)uVar4 <= (long)uVar3) {
          uVar3 = uVar4;
        }
      } while (0 < (long)uVar3);
    }
  }
  return;
}




void FUN_10054b350(undefined8 param_1,size_t param_2)

{
  _malloc(param_2);
  return;
}




void FUN_10054b358(undefined8 param_1,void *param_2)

{
  _free(param_2);
  return;
}




void FUN_10054b360(undefined8 param_1,size_t param_2)

{
  _malloc(param_2);
  return;
}




void FUN_10054b368(undefined8 param_1,void *param_2)

{
  _free(param_2);
  return;
}




undefined8 FUN_10054b370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




void FUN_10054b378(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 5) = 0x33;
                    /* WARNING: Could not recover jumptable at 0x00010054b388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}




undefined8 FUN_10054b38c(void)

{
  return 0;
}




void FUN_10054b394(void)

{
  return;
}




void FUN_10054b398(long *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 uVar8;
  uint *puVar9;
  bool bVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  
  puVar4 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x98);
  param_1[0x52] = (long)puVar4;
  *puVar4 = FUN_10054b738;
  puVar4[2] = FUN_10054b988;
  puVar4[3] = FUN_10054b98c;
  puVar4[0xe] = 0;
  puVar4[10] = 0;
  if (4 < (int)param_1[0x12]) {
    *(undefined8 *)(*param_1 + 0x28) = 0x400000039;
    (**(code **)*param_1)(param_1);
  }
  iVar18 = (int)param_1[0xf];
  if (0x100 < iVar18) {
    *(undefined8 *)(*param_1 + 0x28) = 0x1000000003b;
    (**(code **)*param_1)(param_1);
    iVar18 = (int)param_1[0xf];
  }
  lVar19 = param_1[0x52];
  uVar12 = *(uint *)(param_1 + 0x12);
  uVar20 = (ulong)uVar12;
  lVar21 = (long)iVar18;
  lVar6 = 1;
  do {
    lVar5 = lVar6;
    lVar6 = lVar5 + 1;
    lVar11 = lVar6;
    iVar18 = uVar12 - 1;
    if (1 < (int)uVar12) {
      do {
        lVar11 = lVar11 * lVar6;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
  } while (lVar11 <= lVar21);
  uVar17 = (uint)lVar5;
  if (uVar17 < 2) {
    lVar6 = *param_1;
    *(undefined4 *)(lVar6 + 0x28) = 0x3a;
    *(int *)(lVar6 + 0x2c) = (int)lVar11;
    (**(code **)*param_1)(param_1);
  }
  if ((int)uVar12 < 1) {
    uVar7 = 1;
    uVar22 = uVar7;
  }
  else {
    uVar7 = uVar20 + 1 & 0x1fffffffe;
    puVar9 = (uint *)(lVar19 + 0x40);
    uVar23 = 1;
    uVar22 = 0;
    uVar1 = 1;
    uVar3 = 1;
    do {
      uVar27 = uVar3;
      uVar26 = uVar1;
      uVar24 = -(uint)(uVar22 <= uVar20 - 1);
      uVar25 = -(uint)(uVar23 <= uVar20 - 1);
      if ((uVar24 & 1) != 0) {
        puVar9[-1] = uVar17;
      }
      if ((uVar25 & 1) != 0) {
        *puVar9 = uVar17;
      }
      uVar22 = uVar22 + 2;
      uVar23 = uVar23 + 2;
      puVar9 = puVar9 + 2;
      uVar7 = uVar7 - 2;
      uVar1 = uVar26 * uVar17;
      uVar3 = uVar27 * uVar17;
    } while (uVar7 != 0);
    uVar7 = (ulong)((uVar26 ^ (uVar26 ^ uVar26 * uVar17) & uVar24) *
                   (uVar27 ^ (uVar27 ^ uVar27 * uVar17) & uVar25));
    uVar22 = uVar7;
  }
  do {
    uVar23 = uVar22;
    if ((int)uVar12 < 1) break;
    uVar23 = 0;
    lVar6 = param_1[8];
    bVar10 = true;
    do {
      if ((int)lVar6 == 2) {
        iVar18 = (&DAT_10115ce90)[uVar23];
      }
      else {
        iVar18 = (int)uVar23;
      }
      piVar15 = (int *)(lVar19 + (long)iVar18 * 4 + 0x3c);
      iVar18 = *piVar15;
      iVar13 = 0;
      if (iVar18 != 0) {
        iVar13 = (int)uVar7 / iVar18;
      }
      uVar14 = (long)iVar13 * ((long)iVar18 + 1);
      if (uVar14 - lVar21 != 0 && lVar21 <= (long)uVar14) goto LAB_10054b5b0;
      bVar10 = false;
      *piVar15 = (int)((long)iVar18 + 1);
      uVar23 = uVar23 + 1;
      uVar7 = uVar14;
    } while (uVar20 != uVar23);
    bVar10 = false;
LAB_10054b5b0:
    uVar23 = uVar7;
  } while (!bVar10);
  lVar6 = param_1[0x12];
  lVar21 = *param_1;
  iVar18 = (int)uVar23;
  *(int *)(lVar21 + 0x2c) = iVar18;
  if ((int)lVar6 == 3) {
    *(undefined4 *)(lVar21 + 0x30) = *(undefined4 *)(lVar19 + 0x3c);
    *(undefined4 *)(lVar21 + 0x34) = *(undefined4 *)(lVar19 + 0x40);
    *(undefined4 *)(lVar21 + 0x38) = *(undefined4 *)(lVar19 + 0x44);
    uVar8 = 0x60;
    lVar6 = lVar21;
  }
  else {
    lVar6 = *param_1;
    uVar8 = 0x61;
  }
  *(undefined4 *)(lVar21 + 0x28) = uVar8;
  (**(code **)(lVar6 + 8))(param_1,1);
  lVar6 = (**(code **)(param_1[1] + 0x10))(param_1,1,uVar23,(int)param_1[0x12]);
  iVar13 = (int)param_1[0x12];
  if (0 < iVar13) {
    lVar21 = 0;
    do {
      uVar17 = *(uint *)(lVar19 + lVar21 * 4 + 0x3c);
      lVar11 = (long)(int)uVar17 + -1;
      uVar12 = (uint)lVar11;
      if ((int)uVar12 < 0) {
        uVar12 = uVar12 + 1;
      }
      uVar1 = 0;
      iVar16 = (int)uVar23;
      if (uVar17 != 0) {
        uVar1 = iVar16 / (int)uVar17;
      }
      uVar23 = (ulong)uVar1;
      if (0 < (int)uVar17) {
        uVar20 = 0;
        iVar13 = 0;
        do {
          if ((int)(uVar1 * (int)uVar20) < iVar18) {
            lVar5 = (long)iVar13;
            uVar2 = 0;
            if (lVar11 != 0) {
              uVar2 = (undefined1)
                      ((long)(uVar20 * 0xff + ((long)((ulong)uVar12 << 0x20) >> 0x21)) / lVar11);
            }
            do {
              if (0 < (int)uVar1) {
                uVar7 = 0;
                do {
                  *(undefined1 *)(*(long *)(lVar6 + lVar21 * 8) + lVar5 + uVar7) = uVar2;
                  uVar7 = uVar7 + 1;
                } while (uVar23 != uVar7);
              }
              lVar5 = lVar5 + iVar16;
            } while (lVar5 < iVar18);
          }
          uVar20 = uVar20 + 1;
          iVar13 = iVar13 + uVar1;
        } while (uVar20 != uVar17);
        iVar13 = (int)param_1[0x12];
      }
      lVar21 = lVar21 + 1;
    } while (lVar21 < iVar13);
  }
  *(long *)(lVar19 + 0x20) = lVar6;
  *(int *)(lVar19 + 0x28) = iVar18;
  FUN_10054b9a0(param_1);
  if ((int)param_1[0xe] != 2) {
    return;
  }
  FUN_10054badc(param_1);
  return;
}




void FUN_10054b738(undefined8 *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar13 = param_1[0x52];
  param_1[0x14] = *(undefined8 *)(lVar13 + 0x20);
  *(undefined4 *)((long)param_1 + 0x9c) = *(undefined4 *)(lVar13 + 0x28);
  iVar3 = *(int *)(param_1 + 0xe);
  if (iVar3 == 2) {
    *(code **)(lVar13 + 8) = FUN_10054be0c;
    *(undefined4 *)(lVar13 + 0x90) = 0;
    if (*(long *)(lVar13 + 0x70) == 0) {
      FUN_10054badc(param_1);
    }
    if (0 < *(int *)(param_1 + 0x12)) {
      lVar14 = 0;
      iVar3 = *(int *)(param_1 + 0x11);
      do {
        _bzero(*(void **)(lVar13 + 0x70 + lVar14 * 8),(ulong)(iVar3 + 2) << 1);
        lVar14 = lVar14 + 1;
      } while (lVar14 < *(int *)(param_1 + 0x12));
    }
  }
  else if (iVar3 == 1) {
    pcVar4 = FUN_10054bc54;
    if (*(int *)(param_1 + 0x12) != 3) {
      pcVar4 = FUN_10054bd1c;
    }
    *(code **)(lVar13 + 8) = pcVar4;
    *(undefined4 *)(lVar13 + 0x4c) = 0;
    if (*(int *)(lVar13 + 0x38) == 0) {
      FUN_10054b9a0(param_1);
    }
    if ((*(long *)(lVar13 + 0x50) == 0) && (iVar3 = *(int *)(param_1 + 0x12), 0 < iVar3)) {
      lVar13 = 0;
      lVar14 = param_1[0x52];
      do {
        iVar1 = *(int *)(lVar14 + lVar13 * 4 + 0x3c);
        if (lVar13 != 0) {
          lVar7 = 0;
          do {
            if (iVar1 == *(int *)(lVar14 + 0x3c + lVar7 * 4)) {
              lVar7 = *(long *)(lVar14 + 0x3c + lVar7 * 8 + 0x14);
              if (lVar7 != 0) goto LAB_10054b918;
              break;
            }
            lVar7 = lVar7 + 1;
          } while (lVar13 != lVar7);
        }
        lVar7 = (**(code **)param_1[1])(param_1,1,0x400);
        lVar5 = 0;
        uVar2 = iVar1 - 1;
        uVar8 = -(ulong)(uVar2 >> 0x1f) & 0xfffffe0000000000 | (ulong)uVar2 << 9;
        puVar9 = &DAT_10115cd90;
        lVar10 = lVar7;
        do {
          lVar11 = 0;
          do {
            lVar12 = (ulong)(byte)puVar9[lVar11] * -0x1fe;
            iVar3 = 0;
            if (uVar8 != 0) {
              iVar3 = (int)((lVar12 + 0xfe01) / (long)uVar8);
            }
            iVar1 = 0;
            if (uVar8 != 0) {
              iVar1 = (int)((long)((ulong)(byte)puVar9[lVar11] * 0x1fe + -0xfe01) / (long)uVar8);
            }
            if (lVar12 < -0xfe01) {
              iVar3 = -iVar1;
            }
            *(int *)(lVar10 + lVar11 * 4) = iVar3;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x10);
          lVar5 = lVar5 + 1;
          lVar10 = lVar10 + 0x40;
          puVar9 = puVar9 + 0x10;
        } while (lVar5 != 0x10);
        iVar3 = *(int *)(param_1 + 0x12);
LAB_10054b918:
        *(long *)(lVar14 + lVar13 * 8 + 0x50) = lVar7;
        lVar13 = lVar13 + 1;
      } while (lVar13 < iVar3);
    }
  }
  else {
    if (iVar3 != 0) {
      puVar6 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar6 + 5) = 0x31;
                    /* WARNING: Could not recover jumptable at 0x00010054b95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar6)(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x12) == 3) {
      pcVar4 = FUN_10054bb50;
    }
    else {
      pcVar4 = FUN_10054bbc4;
    }
    *(code **)(lVar13 + 8) = pcVar4;
  }
  return;
}




void FUN_10054b988(void)

{
  return;
}




void FUN_10054b98c(undefined8 *param_1)

{
  param_1 = (undefined8 *)*param_1;
  *(undefined4 *)(param_1 + 5) = 0x2f;
                    /* WARNING: Could not recover jumptable at 0x00010054b99c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)();
  return;
}




void FUN_10054b9a0(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  lVar15 = *(long *)(param_1 + 0x290);
  iVar2 = *(int *)(param_1 + 0x70);
  uVar7 = 0x2fe;
  if (iVar2 != 1) {
    uVar7 = 0x100;
  }
  *(uint *)(lVar15 + 0x38) = (uint)(iVar2 == 1);
  uVar5 = (**(code **)(*(long *)(param_1 + 8) + 0x10))
                    (param_1,1,uVar7,*(undefined4 *)(param_1 + 0x90));
  *(undefined8 *)(lVar15 + 0x30) = uVar5;
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar6 = 0;
    iVar8 = *(int *)(lVar15 + 0x28);
    do {
      iVar3 = *(int *)(lVar15 + lVar6 * 4 + 0x3c);
      if (iVar2 == 1) {
        *(long *)(*(long *)(lVar15 + 0x30) + lVar6 * 8) =
             *(long *)(*(long *)(lVar15 + 0x30) + lVar6 * 8) + 0xff;
      }
      lVar10 = 0;
      iVar12 = 0;
      puVar9 = *(undefined1 **)(*(long *)(lVar15 + 0x30) + lVar6 * 8);
      lVar13 = (long)iVar3 + -1;
      lVar14 = (long)((int)lVar13 << 1);
      lVar11 = 0;
      if (lVar14 != 0) {
        lVar11 = ((long)iVar3 + 0xfe) / lVar14;
      }
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = iVar8 / iVar3;
      }
      do {
        iVar8 = iVar4;
        if ((int)lVar11 < lVar10) {
          uVar1 = iVar12 * 2 + 3;
          do {
            lVar11 = 0;
            if (lVar14 != 0) {
              lVar11 = (long)(((-(ulong)(uVar1 >> 0x1f) & 0xffffff0000000000 | (ulong)uVar1 << 8) -
                              (long)(int)uVar1) + lVar13) / lVar14;
            }
            iVar12 = iVar12 + 1;
            uVar1 = uVar1 + 2;
          } while ((int)lVar11 < lVar10);
        }
        puVar9[lVar10] = (char)iVar12 * (char)iVar8;
        lVar10 = lVar10 + 1;
        iVar4 = iVar8;
      } while (lVar10 != 0x100);
      if (iVar2 == 1) {
        lVar11 = -1;
        lVar10 = 0x100;
        do {
          puVar9[lVar11] = *puVar9;
          puVar9[lVar10] = puVar9[0xff];
          lVar10 = lVar10 + 1;
          lVar11 = lVar11 + -1;
        } while (lVar11 != -0x100);
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_1 + 0x90));
  }
  return;
}




void FUN_10054badc(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (0 < *(int *)(param_1 + 0x90)) {
    lVar4 = 0;
    lVar3 = *(long *)(param_1 + 0x290);
    iVar1 = *(int *)(param_1 + 0x88);
    do {
      uVar2 = (**(code **)(*(long *)(param_1 + 8) + 8))(param_1,1,(ulong)(iVar1 + 2) << 1);
      *(undefined8 *)(lVar3 + 0x70 + lVar4 * 8) = uVar2;
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x90));
  }
  return;
}




void FUN_10054bb50(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  char *pcVar7;
  byte *pbVar8;
  int iVar9;
  
  if (0 < (int)param_4) {
    uVar4 = 0;
    plVar5 = *(long **)(*(long *)(param_1 + 0x290) + 0x30);
    lVar1 = *plVar5;
    lVar2 = plVar5[1];
    lVar6 = plVar5[2];
    iVar3 = *(int *)(param_1 + 0x88);
    do {
      if (iVar3 != 0) {
        pbVar8 = *(byte **)(param_2 + uVar4 * 8);
        pcVar7 = *(char **)(param_3 + uVar4 * 8);
        iVar9 = iVar3;
        do {
          *pcVar7 = *(char *)(lVar2 + (ulong)pbVar8[1]) + *(char *)(lVar1 + (ulong)*pbVar8) +
                    *(char *)(lVar6 + (ulong)pbVar8[2]);
          pbVar8 = pbVar8 + 3;
          iVar9 = iVar9 + -1;
          pcVar7 = pcVar7 + 1;
        } while (iVar9 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_4);
  }
  return;
}




void FUN_10054bbc4(long param_1,long param_2,long param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  byte *pbVar5;
  ulong uVar6;
  long *plVar7;
  char *pcVar8;
  byte *pbVar9;
  int iVar10;
  char cVar11;
  
  if (0 < (int)param_4) {
    uVar6 = 0;
    plVar7 = *(long **)(*(long *)(param_1 + 0x290) + 0x30);
    iVar1 = *(int *)(param_1 + 0x88);
    uVar2 = *(uint *)(param_1 + 0x90);
    do {
      if (iVar1 != 0) {
        pbVar9 = *(byte **)(param_2 + uVar6 * 8);
        pcVar8 = *(char **)(param_3 + uVar6 * 8);
        iVar10 = iVar1;
        do {
          if ((int)uVar2 < 1) {
            cVar11 = '\0';
          }
          else {
            cVar11 = '\0';
            uVar3 = (ulong)uVar2;
            plVar4 = plVar7;
            pbVar5 = pbVar9;
            do {
              cVar11 = cVar11 + *(char *)(*plVar4 + (ulong)*pbVar5);
              uVar3 = uVar3 - 1;
              plVar4 = plVar4 + 1;
              pbVar5 = pbVar5 + 1;
            } while (uVar3 != 0);
            pbVar9 = pbVar9 + (ulong)(uVar2 - 1) + 1;
          }
          *pcVar8 = cVar11;
          iVar10 = iVar10 + -1;
          pcVar8 = pcVar8 + 1;
        } while (iVar10 != 0);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 != param_4);
  }
  return;
}




void FUN_10054bc54(long param_1,long param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint uVar14;
  ulong uVar16;
  long lVar15;
  
  if (0 < (int)param_4) {
    uVar10 = 0;
    lVar11 = *(long *)(param_1 + 0x290);
    plVar12 = *(long **)(lVar11 + 0x30);
    lVar1 = *plVar12;
    lVar3 = plVar12[1];
    lVar13 = plVar12[2];
    iVar5 = *(int *)(param_1 + 0x88);
    uVar14 = *(uint *)(lVar11 + 0x4c);
    do {
      lVar15 = (long)(int)uVar14;
      if (iVar5 != 0) {
        uVar16 = 0;
        lVar2 = *(long *)(lVar11 + 0x50);
        lVar4 = *(long *)(lVar11 + 0x58);
        lVar7 = *(long *)(lVar11 + 0x60);
        pbVar9 = *(byte **)(param_2 + uVar10 * 8);
        pcVar8 = *(char **)(param_3 + uVar10 * 8);
        iVar6 = iVar5;
        do {
          *pcVar8 = *(char *)(lVar3 + (long)*(int *)(lVar4 + lVar15 * 0x40 + uVar16 * 4) +
                                      (ulong)pbVar9[1]) +
                    *(char *)(lVar1 + (long)*(int *)(lVar2 + lVar15 * 0x40 + uVar16 * 4) +
                                      (ulong)*pbVar9) +
                    *(char *)(lVar13 + (long)*(int *)(lVar7 + lVar15 * 0x40 + uVar16 * 4) +
                                       (ulong)pbVar9[2]);
          uVar16 = (ulong)((int)uVar16 + 1U & 0xf);
          pbVar9 = pbVar9 + 3;
          iVar6 = iVar6 + -1;
          pcVar8 = pcVar8 + 1;
        } while (iVar6 != 0);
      }
      uVar14 = uVar14 + 1 & 0xf;
      *(uint *)(lVar11 + 0x4c) = uVar14;
      uVar10 = uVar10 + 1;
    } while (uVar10 != param_4);
  }
  return;
}




void FUN_10054bd1c(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  if (0 < (int)param_4) {
    uVar12 = 0;
    lVar13 = *(long *)(param_1 + 0x290);
    uVar2 = *(uint *)(param_1 + 0x90);
    uVar1 = *(uint *)(param_1 + 0x88);
    do {
      _bzero(*(void **)(param_3 + uVar12 * 8),(ulong)uVar1);
      iVar3 = *(int *)(lVar13 + 0x4c);
      if (0 < (int)uVar2) {
        uVar5 = 0;
        do {
          if (uVar1 != 0) {
            uVar6 = 0;
            lVar7 = *(long *)(*(long *)(lVar13 + 0x30) + uVar5 * 8);
            lVar8 = *(long *)(lVar13 + uVar5 * 8 + 0x50);
            lVar10 = *(long *)(param_2 + uVar12 * 8);
            pcVar9 = *(char **)(param_3 + uVar12 * 8);
            uVar11 = (ulong)uVar1;
            do {
              *pcVar9 = *pcVar9 + *(char *)(lVar7 + (long)*(int *)(lVar8 + (long)iVar3 * 0x40 +
                                                                  uVar6 * 4) +
                                                    (ulong)*(byte *)(lVar10 + uVar5));
              uVar6 = (ulong)((int)uVar6 + 1U & 0xf);
              lVar10 = lVar10 + (int)uVar2;
              uVar4 = (int)uVar11 - 1;
              uVar11 = (ulong)uVar4;
              pcVar9 = pcVar9 + 1;
            } while (uVar4 != 0);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar2);
      }
      *(uint *)(lVar13 + 0x4c) = iVar3 + 1U & 0xf;
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_4);
  }
  return;
}




void FUN_10054be0c(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  short sVar7;
  ulong uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  byte *pbVar12;
  char *pcVar13;
  short *psVar14;
  long lVar15;
  short sVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  long lVar23;
  
  if (0 < (int)param_4) {
    uVar21 = 0;
    lVar22 = *(long *)(param_1 + 0x290);
    uVar1 = *(uint *)(param_1 + 0x90);
    uVar2 = *(uint *)(param_1 + 0x88);
    lVar23 = *(long *)(param_1 + 0x1b8);
    do {
      _bzero(*(void **)(param_3 + uVar21 * 8),(ulong)uVar2);
      if (0 < (int)uVar1) {
        uVar11 = 0;
        do {
          pbVar12 = (byte *)(*(long *)(param_2 + uVar21 * 8) + uVar11);
          pcVar13 = *(char **)(param_3 + uVar21 * 8);
          if (*(int *)(lVar22 + 0x90) == 0) {
            psVar14 = *(short **)(lVar22 + uVar11 * 8 + 0x70);
            lVar15 = 1;
            uVar20 = uVar1;
            if (uVar2 != 0) goto LAB_10054bec8;
LAB_10054bf70:
            sVar16 = 0;
          }
          else {
            pbVar12 = pbVar12 + (uVar2 - 1) * uVar1;
            pcVar13 = pcVar13 + (uVar2 - 1);
            psVar14 = (short *)(*(long *)(lVar22 + uVar11 * 8 + 0x70) + (ulong)(uVar2 + 1) * 2);
            lVar15 = -1;
            uVar20 = -uVar1;
            if (uVar2 == 0) goto LAB_10054bf70;
LAB_10054bec8:
            iVar10 = 0;
            iVar17 = 0;
            lVar18 = *(long *)(*(long *)(lVar22 + 0x30) + uVar11 * 8);
            lVar19 = *(long *)(*(long *)(lVar22 + 0x20) + uVar11 * 8);
            uVar8 = (ulong)uVar2;
            iVar9 = 0;
            do {
              bVar3 = *(byte *)(lVar23 + (ulong)*pbVar12 + (long)(iVar10 + psVar14[lVar15] + 8 >> 4)
                               );
              bVar4 = *(byte *)(lVar18 + (ulong)bVar3);
              *pcVar13 = *pcVar13 + bVar4;
              iVar5 = (uint)bVar3 - (uint)*(byte *)(lVar19 + (ulong)bVar4);
              sVar7 = (short)iVar17;
              iVar17 = iVar5 * 5 + iVar9;
              sVar16 = (short)iVar17;
              iVar10 = iVar5 * 7;
              pbVar12 = pbVar12 + (int)uVar20;
              *psVar14 = (short)iVar5 * 3 + sVar7;
              pcVar13 = pcVar13 + lVar15;
              psVar14 = psVar14 + lVar15;
              uVar6 = (int)uVar8 - 1;
              uVar8 = (ulong)uVar6;
              iVar9 = iVar5;
            } while (uVar6 != 0);
          }
          *psVar14 = sVar16;
          uVar11 = uVar11 + 1;
        } while (uVar11 != uVar1);
      }
      *(uint *)(lVar22 + 0x90) = (uint)(*(int *)(lVar22 + 0x90) == 0);
      uVar21 = uVar21 + 1;
    } while (uVar21 != param_4);
  }
  return;
}




void FUN_10054bfc4(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar2 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x58);
  param_1[0x52] = (long)puVar2;
  *puVar2 = FUN_10054c15c;
  puVar2[3] = FUN_10054c2a4;
  puVar2[8] = 0;
  puVar2[10] = 0;
  if ((int)param_1[0x12] != 3) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x30;
    (*(code *)*puVar4)(param_1);
  }
  uVar3 = (**(code **)param_1[1])(param_1,1,0x100);
  lVar5 = 0;
  puVar2[6] = uVar3;
  do {
    uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,0x1000);
    *(undefined8 *)(puVar2[6] + lVar5) = uVar3;
    lVar5 = lVar5 + 8;
  } while (lVar5 != 0x100);
  *(undefined4 *)(puVar2 + 7) = 1;
  if (*(int *)((long)param_1 + 0x84) == 0) {
    puVar2[4] = 0;
    goto LAB_10054c100;
  }
  iVar1 = (int)param_1[0xf];
  if (iVar1 < 8) {
    uVar3 = 0x80000003a;
LAB_10054c0c4:
    *(undefined8 *)(*param_1 + 0x28) = uVar3;
    (**(code **)*param_1)(param_1);
  }
  else if (0x100 < iVar1) {
    uVar3 = 0x1000000003b;
    goto LAB_10054c0c4;
  }
  uVar3 = (**(code **)(param_1[1] + 0x10))(param_1,1,iVar1,3);
  puVar2[4] = uVar3;
  *(int *)(puVar2 + 5) = iVar1;
LAB_10054c100:
  if ((int)param_1[0xe] != 0) {
    *(undefined4 *)(param_1 + 0xe) = 2;
    uVar3 = (**(code **)(param_1[1] + 8))(param_1,1,(ulong)((int)param_1[0x11] + 2) * 6);
    puVar2[8] = uVar3;
    FUN_10054c2b4(param_1);
    return;
  }
  return;
}




void FUN_10054c15c(long *param_1,int param_2)

{
  void *pvVar1;
  code *pcVar2;
  long lVar3;
  size_t sVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar5 = param_1[0x52];
  lVar6 = *(long *)(lVar5 + 0x30);
  if ((int)param_1[0xe] == 0) {
    if (param_2 != 0) goto LAB_10054c19c;
    pcVar2 = FUN_10054ca68;
  }
  else {
    *(undefined4 *)(param_1 + 0xe) = 2;
    if (param_2 != 0) {
LAB_10054c19c:
      *(code **)(lVar5 + 8) = FUN_10054c364;
      *(code **)(lVar5 + 0x10) = FUN_10054c3e4;
      *(undefined4 *)(lVar5 + 0x38) = 1;
      goto LAB_10054c26c;
    }
    pcVar2 = FUN_10054c770;
  }
  *(code **)(lVar5 + 8) = pcVar2;
  *(code **)(lVar5 + 0x10) = FUN_10054cb3c;
  if (*(int *)((long)param_1 + 0x9c) < 1) {
    uVar7 = 0x10000003a;
LAB_10054c1f8:
    *(undefined8 *)(*param_1 + 0x28) = uVar7;
    (**(code **)*param_1)(param_1);
  }
  else if (0x100 < *(int *)((long)param_1 + 0x9c)) {
    uVar7 = 0x1000000003b;
    goto LAB_10054c1f8;
  }
  if ((int)param_1[0xe] == 2) {
    sVar4 = (ulong)((int)param_1[0x11] + 2) * 6;
    pvVar1 = *(void **)(lVar5 + 0x40);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = (void *)(**(code **)(param_1[1] + 8))(param_1,1,sVar4);
      *(void **)(lVar5 + 0x40) = pvVar1;
    }
    _bzero(pvVar1,sVar4);
    if (*(long *)(lVar5 + 0x50) == 0) {
      FUN_10054c2b4(param_1);
    }
    *(undefined4 *)(lVar5 + 0x48) = 0;
  }
LAB_10054c26c:
  if (*(int *)(lVar5 + 0x38) != 0) {
    lVar3 = 0;
    do {
      _bzero(*(void **)(lVar6 + lVar3),0x1000);
      lVar3 = lVar3 + 8;
    } while (lVar3 != 0x100);
    *(undefined4 *)(lVar5 + 0x38) = 0;
  }
  return;
}




void FUN_10054c2a4(long param_1)

{
  *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x38) = 1;
  return;
}




void FUN_10054c2b4(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x290);
  lVar1 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x7fc);
  lVar3 = 0;
  lVar4 = 0;
  lVar5 = lVar1 + 0x3fc;
  *(long *)(lVar7 + 0x50) = lVar5;
  do {
    *(int *)(lVar5 + lVar4 * 4) = (int)lVar4;
    *(int *)(lVar5 + lVar3 * 4) = (int)lVar3;
    lVar4 = lVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar4 != 0x10);
  iVar2 = 0x10;
  lVar5 = 0x10f;
  lVar4 = 0x3bc;
  do {
    *(int *)(lVar1 + lVar5 * 4) = iVar2;
    *(int *)(lVar1 + lVar4) = -iVar2;
    iVar2 = (~((int)lVar5 - 0xfeU) & 1) + iVar2;
    lVar5 = lVar5 + 1;
    lVar4 = lVar4 + -4;
  } while (lVar5 != 0x12f);
  lVar5 = 0x33c;
  piVar6 = (int *)(lVar1 + 0x4bc);
  do {
    *piVar6 = iVar2;
    *(int *)(lVar1 + lVar5) = -iVar2;
    lVar5 = lVar5 + -4;
    piVar6 = piVar6 + 1;
  } while (lVar5 != -4);
  return;
}




void FUN_10054c364(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  
  if (0 < (int)param_4) {
    uVar4 = 0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
    iVar2 = *(int *)(param_1 + 0x88);
    do {
      if (iVar2 != 0) {
        pbVar6 = *(byte **)(param_2 + uVar4 * 8);
        iVar7 = iVar2;
        do {
          uVar8 = (ulong)(pbVar6[2] >> 2) & 0x3e;
          lVar1 = *(long *)(lVar5 + ((ulong)*pbVar6 & 0xf8)) + ((ulong)pbVar6[1] & 0xfc) * 0x10;
          uVar3 = *(ushort *)(lVar1 + uVar8);
          if ((uVar3 + 1 & 0x10000) == 0) {
            uVar3 = uVar3 + 1;
          }
          *(ushort *)(lVar1 + uVar8) = uVar3;
          pbVar6 = pbVar6 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_4);
  }
  return;
}




void FUN_10054c3e4(long *param_1)

{
  char cVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ushort *puVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  undefined8 uVar24;
  
  lVar11 = param_1[0x52];
  param_1[0x14] = *(long *)(lVar11 + 0x20);
  uVar21 = *(uint *)(lVar11 + 0x28);
  uVar17 = 1;
  piVar5 = (int *)(**(code **)param_1[1])(param_1,1,(long)(int)uVar21 * 0x28);
  piVar5[2] = 0;
  piVar5[3] = 0x3f;
  piVar5[0] = 0;
  piVar5[1] = 0x1f;
  piVar5[4] = 0;
  piVar5[5] = 0x1f;
  FUN_10054cb40(param_1,piVar5);
  if (1 < (int)uVar21) {
    uVar18 = 1;
    do {
      if ((int)uVar21 < (int)uVar18 * 2) {
        lVar8 = 0;
        piVar6 = (int *)0x0;
        uVar17 = uVar18;
        piVar9 = piVar5;
        do {
          piVar7 = piVar9;
          lVar12 = *(long *)(piVar9 + 6);
          if (*(long *)(piVar9 + 6) <= lVar8) {
            piVar7 = piVar6;
            lVar12 = lVar8;
          }
          lVar8 = lVar12;
          piVar9 = piVar9 + 10;
          uVar17 = uVar17 - 1;
          piVar6 = piVar7;
        } while (uVar17 != 0);
      }
      else {
        piVar6 = (int *)0x0;
        lVar8 = 0;
        uVar17 = uVar18;
        piVar9 = piVar5;
        do {
          piVar7 = piVar6;
          lVar12 = lVar8;
          if ((lVar8 < *(long *)(piVar9 + 8)) &&
             (piVar7 = piVar9, lVar12 = *(long *)(piVar9 + 8), *(long *)(piVar9 + 6) < 1)) {
            piVar7 = piVar6;
            lVar12 = lVar8;
          }
          piVar9 = piVar9 + 10;
          uVar17 = uVar17 - 1;
          piVar6 = piVar7;
          lVar8 = lVar12;
        } while (uVar17 != 0);
      }
      uVar17 = uVar18;
      if (piVar7 == (int *)0x0) break;
      piVar6 = piVar5 + uVar18 * 10;
      piVar6[5] = piVar7[5];
      uVar24 = *(undefined8 *)piVar7;
      *(undefined8 *)(piVar6 + 2) = *(undefined8 *)(piVar7 + 2);
      *(undefined8 *)piVar6 = uVar24;
      iVar10 = piVar7[5];
      piVar9 = piVar6 + 4;
      *piVar9 = piVar7[4];
      iVar2 = (piVar7[1] - *piVar7) * 0x10;
      iVar4 = piVar7[3] - piVar7[2];
      iVar16 = iVar4 * 0xc;
      iVar22 = iVar2;
      if (iVar2 <= iVar16) {
        iVar22 = iVar4 * 0xc;
      }
      cVar1 = '\x02';
      if ((iVar10 - piVar7[4]) * 8 <= iVar22) {
        cVar1 = iVar2 <= iVar16;
      }
      if (cVar1 == '\x02') {
        iVar10 = piVar7[4] + iVar10;
        if (iVar10 < 0) {
          iVar10 = iVar10 + 1;
        }
        iVar10 = iVar10 >> 1;
        piVar7[5] = iVar10;
LAB_10054c5a8:
        *piVar9 = iVar10 + 1;
      }
      else {
        if (cVar1 == '\x01') {
          piVar9 = piVar5 + uVar18 * 10 + 2;
          iVar10 = piVar7[2] + piVar7[3];
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
          }
          iVar10 = iVar10 >> 1;
          piVar7[3] = iVar10;
          goto LAB_10054c5a8;
        }
        if (cVar1 == '\0') {
          iVar10 = *piVar7 + piVar7[1];
          if (iVar10 < 0) {
            iVar10 = iVar10 + 1;
          }
          iVar10 = iVar10 >> 1;
          piVar7[1] = iVar10;
          piVar9 = piVar6;
          goto LAB_10054c5a8;
        }
      }
      FUN_10054cb40(param_1);
      FUN_10054cb40(param_1,piVar6);
      uVar18 = uVar18 + 1;
      uVar17 = (long)(int)uVar21;
    } while (uVar18 != uVar21);
    iVar16 = (int)uVar17;
    if (iVar16 < 1) goto LAB_10054c720;
  }
  iVar16 = (int)uVar17;
  uVar18 = 0;
  do {
    piVar9 = piVar5 + uVar18 * 10;
    lVar8 = (long)*piVar9;
    if (piVar9[1] < *piVar9) {
      lVar12 = 0;
      lVar15 = 0;
      lVar14 = 0;
      lVar13 = 0;
    }
    else {
      lVar13 = 0;
      lVar14 = 0;
      lVar15 = 0;
      lVar12 = 0;
      iVar10 = piVar9[4];
      do {
        if (piVar9[2] <= piVar9[3]) {
          lVar19 = (long)piVar9[2];
          do {
            if (iVar10 <= piVar9[5]) {
              puVar20 = (ushort *)
                        (*(long *)(*(long *)(param_1[0x52] + 0x30) + lVar8 * 8) + lVar19 * 0x40 +
                        (long)iVar10 * 2);
              iVar22 = (piVar9[5] - iVar10) + 1;
              uVar21 = iVar10 << 3 | 4;
              do {
                uVar23 = (ulong)*puVar20;
                if (uVar23 != 0) {
                  lVar12 = lVar12 + uVar23;
                  lVar15 = lVar15 + uVar23 * (long)(int)((int)lVar8 << 3 | 4);
                  lVar14 = lVar14 + uVar23 * (long)(int)((int)lVar19 << 2 | 2);
                  lVar13 = lVar13 + uVar23 * (long)(int)uVar21;
                }
                uVar21 = uVar21 + 8;
                iVar22 = iVar22 + -1;
                puVar20 = puVar20 + 1;
              } while (iVar22 != 0);
            }
            lVar19 = lVar19 + 1;
          } while (piVar9[3] + 1 != (int)lVar19);
        }
        lVar8 = lVar8 + 1;
      } while (piVar9[1] + 1 != (int)lVar8);
    }
    lVar8 = lVar12 >> 1;
    uVar3 = 0;
    if (lVar12 != 0) {
      uVar3 = (undefined1)((lVar15 + lVar8) / lVar12);
    }
    *(undefined1 *)(*(long *)param_1[0x14] + uVar18) = uVar3;
    uVar3 = 0;
    if (lVar12 != 0) {
      uVar3 = (undefined1)((lVar14 + lVar8) / lVar12);
    }
    *(undefined1 *)(*(long *)(param_1[0x14] + 8) + uVar18) = uVar3;
    uVar3 = 0;
    if (lVar12 != 0) {
      uVar3 = (undefined1)((lVar13 + lVar8) / lVar12);
    }
    *(undefined1 *)(*(long *)(param_1[0x14] + 0x10) + uVar18) = uVar3;
    uVar18 = uVar18 + 1;
  } while (uVar18 != (uVar17 & 0xffffffff));
LAB_10054c720:
  *(int *)((long)param_1 + 0x9c) = iVar16;
  lVar8 = *param_1;
  *(undefined4 *)(lVar8 + 0x28) = 0x62;
  *(int *)(lVar8 + 0x2c) = iVar16;
  (**(code **)(*param_1 + 8))(param_1,1);
  *(undefined4 *)(lVar11 + 0x38) = 1;
  return;
}




void FUN_10054c770(long param_1,long param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  long lVar16;
  short sVar17;
  int iVar18;
  short sVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  int iVar23;
  long *plVar24;
  int iVar25;
  ulong uVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  int iVar35;
  byte *pbVar36;
  short *psVar37;
  short *psVar38;
  undefined1 *puVar39;
  long lVar40;
  short sVar41;
  int iVar42;
  
  if (0 < (int)param_4) {
    uVar26 = 0;
    lVar28 = *(long *)(param_1 + 0x290);
    lVar34 = *(long *)(lVar28 + 0x30);
    iVar5 = *(int *)(param_1 + 0x88);
    lVar16 = *(long *)(param_1 + 0x1b8);
    lVar21 = *(long *)(lVar28 + 0x50);
    plVar24 = *(long **)(param_1 + 0xa0);
    lVar3 = *plVar24;
    lVar4 = plVar24[1];
    lVar22 = plVar24[2];
    do {
      lVar29 = *(long *)(param_2 + uVar26 * 8);
      puVar39 = *(undefined1 **)(param_3 + uVar26 * 8);
      bVar2 = *(int *)(lVar28 + 0x48) == 0;
      if (bVar2) {
        psVar37 = *(short **)(lVar28 + 0x40);
        iVar30 = 3;
        lVar40 = 1;
      }
      else {
        lVar29 = lVar29 + (ulong)(iVar5 * 3 - 3);
        puVar39 = puVar39 + (iVar5 - 1);
        psVar37 = (short *)(*(long *)(lVar28 + 0x40) + (ulong)(iVar5 * 3 + 3) * 2);
        iVar30 = -3;
        lVar40 = -1;
      }
      *(uint *)(lVar28 + 0x48) = (uint)bVar2;
      if (iVar5 == 0) {
        sVar41 = 0;
        sVar17 = 0;
        sVar19 = 0;
      }
      else {
        iVar27 = 0;
        iVar25 = 0;
        iVar23 = 0;
        iVar20 = 0;
        iVar18 = 0;
        iVar42 = 0;
        pbVar36 = (byte *)(lVar29 + 1);
        psVar38 = psVar37;
        iVar35 = iVar5;
        iVar31 = 0;
        iVar33 = 0;
        iVar32 = 0;
        do {
          psVar37 = psVar38 + iVar30;
          bVar6 = *(byte *)(lVar16 + (long)*(int *)(lVar21 + (long)(iVar27 + *psVar37 + 8 >> 4) * 4)
                                     + (ulong)pbVar36[-1]);
          bVar7 = *(byte *)(lVar16 + (long)*(int *)(lVar21 + (long)(iVar25 + psVar37[1] + 8 >> 4) *
                                                             4) + (ulong)*pbVar36);
          bVar8 = *(byte *)(lVar16 + (long)*(int *)(lVar21 + (long)(iVar23 + psVar37[2] + 8 >> 4) *
                                                             4) + (ulong)pbVar36[1]);
          puVar1 = (ushort *)
                   (*(long *)(lVar34 + (ulong)(bVar6 >> 3) * 8) + (ulong)(bVar7 >> 2) * 0x40 +
                   (ulong)(bVar8 >> 3) * 2);
          uVar9 = *puVar1;
          if (uVar9 == 0) {
            FUN_10054cf3c(param_1);
            uVar9 = *puVar1;
          }
          lVar29 = (ulong)uVar9 - 1;
          *puVar39 = (char)lVar29;
          iVar10 = (uint)bVar6 - (uint)*(byte *)(lVar3 + lVar29);
          iVar11 = (uint)bVar7 - (uint)*(byte *)(lVar4 + lVar29);
          iVar12 = (uint)bVar8 - (uint)*(byte *)(lVar22 + lVar29);
          sVar13 = (short)iVar20;
          iVar20 = iVar10 * 5 + iVar32;
          sVar19 = (short)iVar20;
          sVar14 = (short)iVar18;
          iVar18 = iVar11 * 5 + iVar33;
          sVar17 = (short)iVar18;
          sVar15 = (short)iVar42;
          iVar27 = iVar10 * 7;
          iVar42 = iVar12 * 5 + iVar31;
          sVar41 = (short)iVar42;
          iVar25 = iVar11 * 7;
          *psVar38 = (short)iVar10 * 3 + sVar13;
          psVar38[1] = (short)iVar11 * 3 + sVar14;
          iVar23 = iVar12 * 7;
          puVar39 = puVar39 + lVar40;
          pbVar36 = pbVar36 + iVar30;
          psVar38[2] = (short)iVar12 * 3 + sVar15;
          iVar35 = iVar35 + -1;
          psVar38 = psVar37;
          iVar31 = iVar12;
          iVar33 = iVar11;
          iVar32 = iVar10;
        } while (iVar35 != 0);
      }
      *psVar37 = sVar19;
      psVar37[1] = sVar17;
      psVar37[2] = sVar41;
      uVar26 = uVar26 + 1;
    } while (uVar26 != param_4);
  }
  return;
}




void FUN_10054ca68(long param_1,long param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  ushort uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  byte *pbVar7;
  int iVar8;
  
  if (0 < (int)param_4) {
    uVar4 = 0;
    lVar5 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
    iVar2 = *(int *)(param_1 + 0x88);
    do {
      if (iVar2 != 0) {
        pbVar7 = *(byte **)(param_2 + uVar4 * 8);
        pcVar6 = *(char **)(param_3 + uVar4 * 8);
        iVar8 = iVar2;
        do {
          puVar1 = (ushort *)
                   (*(long *)(lVar5 + (ulong)(*pbVar7 >> 3) * 8) + (ulong)(pbVar7[1] >> 2) * 0x40 +
                   (ulong)(pbVar7[2] >> 3) * 2);
          uVar3 = *puVar1;
          if (uVar3 == 0) {
            FUN_10054cf3c(param_1);
            uVar3 = (ushort)(byte)*puVar1;
          }
          *pcVar6 = (char)uVar3 + -1;
          pbVar7 = pbVar7 + 3;
          iVar8 = iVar8 + -1;
          pcVar6 = pcVar6 + 1;
        } while (iVar8 != 0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_4);
  }
  return;
}




void FUN_10054cb3c(void)

{
  return;
}




void FUN_10054cb40(long param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  short *psVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  
  lVar7 = *(long *)(*(long *)(param_1 + 0x290) + 0x30);
  iVar14 = *param_2;
  iVar15 = param_2[1];
  iVar10 = param_2[2];
  iVar11 = param_2[3];
  lVar13 = (long)iVar10;
  iVar8 = param_2[4];
  iVar12 = param_2[5];
  lVar9 = (long)iVar8;
  if (iVar14 < iVar15) {
    lVar16 = (long)iVar14;
    do {
      if (iVar10 <= iVar11) {
        lVar4 = lVar13;
        do {
          if (iVar8 <= iVar12) {
            psVar5 = (short *)(*(long *)(lVar7 + lVar16 * 8) + lVar4 * 0x40 + lVar9 * 2);
            iVar6 = (iVar12 - iVar8) + 1;
            do {
              if (*psVar5 != 0) {
                iVar14 = (int)lVar16;
                *param_2 = iVar14;
                goto LAB_10054cbdc;
              }
              psVar5 = psVar5 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar4 = lVar4 + 1;
        } while (iVar11 + 1 != (int)lVar4);
      }
      lVar16 = lVar16 + 1;
    } while (iVar15 + 1 != (int)lVar16);
  }
LAB_10054cbdc:
  if (iVar14 < iVar15) {
    lVar16 = (long)iVar15;
    do {
      if (iVar10 <= iVar11) {
        lVar4 = lVar13;
        do {
          if (iVar8 <= iVar12) {
            psVar5 = (short *)(*(long *)(lVar7 + lVar16 * 8) + lVar4 * 0x40 + lVar9 * 2);
            iVar6 = (iVar12 - iVar8) + 1;
            do {
              if (*psVar5 != 0) {
                iVar15 = (int)lVar16;
                param_2[1] = iVar15;
                goto LAB_10054cc60;
              }
              psVar5 = psVar5 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar4 = lVar4 + 1;
        } while (iVar11 + 1 != (int)lVar4);
      }
      bVar1 = iVar14 < lVar16;
      lVar16 = lVar16 + -1;
    } while (bVar1);
  }
LAB_10054cc60:
  if (iVar10 < iVar11) {
    do {
      lVar16 = (long)iVar14;
      if (iVar14 <= iVar15) {
        do {
          if (iVar8 <= iVar12) {
            psVar5 = (short *)(*(long *)(lVar7 + lVar16 * 8) + lVar13 * 0x40 + lVar9 * 2);
            iVar6 = (iVar12 - iVar8) + 1;
            do {
              if (*psVar5 != 0) {
                iVar10 = (int)lVar13;
                param_2[2] = iVar10;
                goto LAB_10054cce0;
              }
              psVar5 = psVar5 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar16 = lVar16 + 1;
        } while (iVar15 + 1 != (int)lVar16);
      }
      lVar13 = lVar13 + 1;
    } while (iVar11 + 1 != (int)lVar13);
  }
LAB_10054cce0:
  if (iVar10 < iVar11) {
    lVar13 = (long)iVar11;
    do {
      lVar16 = (long)iVar14;
      if (iVar14 <= iVar15) {
        do {
          if (iVar8 <= iVar12) {
            psVar5 = (short *)(*(long *)(lVar7 + lVar16 * 8) + lVar13 * 0x40 + lVar9 * 2);
            iVar6 = (iVar12 - iVar8) + 1;
            do {
              if (*psVar5 != 0) {
                iVar11 = (int)lVar13;
                param_2[3] = iVar11;
                goto LAB_10054cd6c;
              }
              psVar5 = psVar5 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar16 = lVar16 + 1;
        } while (iVar15 + 1 != (int)lVar16);
      }
      bVar1 = iVar10 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar1);
  }
LAB_10054cd6c:
  if (iVar8 < iVar12) {
    do {
      lVar13 = (long)iVar14;
      if (iVar14 <= iVar15) {
        do {
          if (iVar10 <= iVar11) {
            psVar5 = (short *)(*(long *)(lVar7 + lVar13 * 8) + (long)iVar10 * 0x40 + lVar9 * 2);
            iVar6 = (iVar11 - iVar10) + 1;
            do {
              if (*psVar5 != 0) {
                iVar8 = (int)lVar9;
                param_2[4] = iVar8;
                goto LAB_10054cdf4;
              }
              psVar5 = psVar5 + 0x20;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar13 = lVar13 + 1;
        } while (iVar15 + 1 != (int)lVar13);
      }
      lVar9 = lVar9 + 1;
    } while (iVar12 + 1 != (int)lVar9);
  }
LAB_10054cdf4:
  if (iVar8 < iVar12) {
    lVar13 = (long)iVar12;
    do {
      lVar9 = (long)iVar14;
      if (iVar14 <= iVar15) {
        do {
          if (iVar10 <= iVar11) {
            psVar5 = (short *)(*(long *)(lVar7 + lVar9 * 8) + (long)iVar10 * 0x40 + lVar13 * 2);
            iVar6 = (iVar11 - iVar10) + 1;
            do {
              if (*psVar5 != 0) {
                iVar12 = (int)lVar13;
                param_2[5] = iVar12;
                goto LAB_10054ce94;
              }
              psVar5 = psVar5 + 0x20;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
          lVar9 = lVar9 + 1;
        } while (iVar15 + 1 != (int)lVar9);
      }
      bVar1 = iVar8 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar1);
  }
LAB_10054ce94:
  iVar6 = (iVar15 - iVar14) * 0x10;
  iVar2 = (iVar11 - iVar10) * 0xc;
  iVar3 = (iVar12 - iVar8) * 8;
  *(long *)(param_2 + 6) =
       (long)iVar2 * (long)iVar2 + (long)iVar6 * (long)iVar6 + (long)iVar3 * (long)iVar3;
  lVar13 = 0;
  if (iVar14 <= iVar15) {
    lVar9 = (long)iVar14;
    do {
      if (iVar10 <= iVar11) {
        lVar16 = (long)iVar10;
        do {
          if (iVar8 <= iVar12) {
            psVar5 = (short *)(*(long *)(lVar7 + lVar9 * 8) + lVar16 * 0x40 + (long)iVar8 * 2);
            iVar14 = (iVar12 - iVar8) + 1;
            do {
              if (*psVar5 != 0) {
                lVar13 = lVar13 + 1;
              }
              iVar14 = iVar14 + -1;
              psVar5 = psVar5 + 1;
            } while (iVar14 != 0);
          }
          lVar16 = lVar16 + 1;
        } while (iVar11 + 1 != (int)lVar16);
      }
      lVar9 = lVar9 + 1;
    } while (iVar15 + 1 != (int)lVar9);
  }
  *(long *)(param_2 + 8) = lVar13;
  return;
}




void FUN_10054cf3c(long param_1,ulong param_2,int param_3,int param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  ulong uVar19;
  int iVar20;
  ulong uVar21;
  byte *pbVar22;
  long *plVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  ulong uVar27;
  long lVar28;
  int iVar29;
  ulong uVar30;
  long lVar31;
  uint uVar32;
  byte local_9e8 [128];
  byte local_968 [256];
  long local_868 [256];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar15 = *(long *)(param_1 + 0x290);
  uVar1 = (int)(param_2 >> 2) << 5 | 4;
  uVar27 = (long)(param_3 << 2) & 0xffffffffffffffe0U | 2;
  uVar30 = (long)(param_4 << 3) & 0xffffffffffffffe0U | 4;
  uVar3 = *(uint *)(param_1 + 0x9c);
  iVar26 = (int)uVar27;
  iVar29 = (int)uVar30;
  if ((int)uVar3 < 1) {
    uVar32 = 0;
  }
  else {
    uVar32 = (uint)param_2 << 3 | 0x1c;
    uVar19 = (long)(param_3 << 2) | 0x1e;
    iVar18 = (int)uVar19;
    uVar21 = (long)(param_4 << 3) | 0x1c;
    iVar20 = (int)uVar21;
    puVar17 = *(undefined8 **)(param_1 + 0xa0);
    pbVar6 = (byte *)puVar17[1];
    pbVar7 = (byte *)puVar17[2];
    plVar8 = local_868;
    uVar9 = (ulong)uVar3;
    lVar16 = 0x7fffffff;
    pbVar22 = (byte *)*puVar17;
    do {
      bVar4 = *pbVar22;
      iVar5 = (bVar4 - uVar1) * 2;
      lVar10 = (long)iVar5 * (long)iVar5;
      iVar5 = (bVar4 - uVar32) * 2;
      lVar11 = (long)iVar5 * (long)iVar5;
      lVar24 = lVar10;
      if ((int)(uint)bVar4 <= (int)(uVar1 + uVar32) >> 1) {
        lVar24 = lVar11;
      }
      lVar13 = 0;
      if ((int)uVar32 < (int)(uint)bVar4) {
        lVar24 = lVar10;
        lVar13 = lVar11;
      }
      if ((int)(uint)bVar4 < (int)uVar1) {
        lVar24 = lVar11;
        lVar13 = lVar10;
      }
      bVar4 = *pbVar6;
      uVar12 = (ulong)bVar4;
      lVar11 = (uVar12 - (long)iVar26) * 3;
      lVar11 = lVar11 * lVar11;
      lVar25 = (uVar12 - (long)iVar18) * 3;
      lVar10 = lVar11;
      if ((int)(uint)bVar4 <= iVar26 + iVar18 >> 1) {
        lVar10 = lVar25 * lVar25;
      }
      lVar28 = lVar13;
      if (iVar18 < (int)(uint)bVar4) {
        lVar10 = lVar11;
        lVar28 = lVar13 + lVar25 * lVar25;
      }
      lVar11 = (uVar12 - uVar27) * 3;
      lVar25 = (uVar12 - uVar19) * 3;
      if ((int)(uint)bVar4 < iVar26) {
        lVar10 = lVar25 * lVar25;
        lVar28 = lVar13 + lVar11 * lVar11;
      }
      bVar4 = *pbVar7;
      uVar12 = (ulong)bVar4;
      lVar13 = (uVar12 - (long)iVar29) * (uVar12 - (long)iVar29);
      lVar25 = uVar12 - (long)iVar20;
      lVar11 = lVar13;
      if ((int)(uint)bVar4 <= iVar29 + iVar20 >> 1) {
        lVar11 = lVar25 * lVar25;
      }
      lVar14 = lVar28;
      if (iVar20 < (int)(uint)bVar4) {
        lVar11 = lVar13;
        lVar14 = lVar28 + lVar25 * lVar25;
      }
      lVar13 = uVar12 - uVar30;
      lVar25 = uVar12 - uVar21;
      if ((int)(uint)bVar4 < iVar29) {
        lVar11 = lVar25 * lVar25;
        lVar14 = lVar28 + lVar13 * lVar13;
      }
      lVar11 = lVar10 + lVar24 + lVar11;
      *plVar8 = lVar14;
      if (lVar16 <= lVar11) {
        lVar11 = lVar16;
      }
      uVar9 = uVar9 - 1;
      pbVar6 = pbVar6 + 1;
      pbVar7 = pbVar7 + 1;
      plVar8 = plVar8 + 1;
      lVar16 = lVar11;
      pbVar22 = pbVar22 + 1;
    } while (uVar9 != 0);
    uVar27 = 0;
    uVar32 = 0;
    do {
      if (local_868[uVar27] <= lVar11) {
        local_968[(int)uVar32] = (byte)uVar27;
        uVar32 = uVar32 + 1;
      }
      uVar27 = uVar27 + 1;
    } while (uVar3 != uVar27);
  }
  lVar15 = *(long *)(lVar15 + 0x30);
  _memset_pattern16(local_868,&DAT_10115ced0,0x400);
  if (0 < (int)uVar32) {
    uVar27 = 0;
    do {
      plVar8 = local_868;
      pbVar6 = local_9e8;
      bVar4 = local_968[uVar27];
      uVar30 = (ulong)bVar4;
      plVar23 = *(long **)(param_1 + 0xa0);
      uVar3 = (uVar1 - *(byte *)(*plVar23 + uVar30)) * 2;
      lVar10 = (long)iVar26 - (ulong)*(byte *)(plVar23[1] + uVar30);
      lVar16 = lVar10 * 3;
      lVar11 = (long)iVar29 - (ulong)*(byte *)(plVar23[2] + uVar30);
      lVar24 = lVar16 * lVar16 + (long)(int)uVar3 * (long)(int)uVar3 + lVar11 * lVar11;
      lVar16 = (-(ulong)(uVar3 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar3 << 5) + 0x100;
      iVar18 = 3;
      do {
        lVar13 = lVar10 * 0x48 + 0x90;
        lVar25 = lVar24;
        iVar20 = 7;
        do {
          lVar14 = 0;
          lVar28 = lVar11 * 0x10 + 0x40;
          lVar31 = lVar25;
          do {
            if (lVar31 < *(long *)((long)plVar8 + lVar14)) {
              *(long *)((long)plVar8 + lVar14) = lVar31;
              *pbVar6 = bVar4;
            }
            lVar31 = lVar31 + lVar28;
            lVar28 = lVar28 + 0x80;
            pbVar6 = pbVar6 + 1;
            lVar14 = lVar14 + 8;
          } while ((int)lVar14 != 0x20);
          lVar25 = lVar25 + lVar13;
          lVar13 = lVar13 + 0x120;
          plVar8 = (long *)((long)plVar8 + lVar14);
          bVar2 = iVar20 != 0;
          iVar20 = iVar20 + -1;
        } while (bVar2);
        lVar24 = lVar24 + lVar16;
        lVar16 = lVar16 + 0x200;
        bVar2 = iVar18 != 0;
        iVar18 = iVar18 + -1;
      } while (bVar2);
      uVar27 = uVar27 + 1;
    } while (uVar27 != uVar32);
  }
  lVar16 = 0;
  pbVar6 = local_9e8;
  do {
    lVar24 = 0;
    lVar10 = *(long *)(lVar15 + (lVar16 + (int)((uint)param_2 & 0xfffffffc)) * 8) +
             ((long)param_3 & 0xfffffffffffffff8U) * 0x40 +
             ((long)param_4 & 0xfffffffffffffffcU) * 2;
    do {
      lVar11 = 0;
      do {
        *(ushort *)(lVar10 + lVar11 * 2) = pbVar6[lVar11] + 1;
        lVar11 = lVar11 + 1;
      } while (lVar11 != 4);
      lVar24 = lVar24 + 1;
      lVar10 = lVar10 + 0x40;
      pbVar6 = pbVar6 + 4;
    } while (lVar24 != 8);
    lVar16 = lVar16 + 1;
  } while (lVar16 != 4);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




long FUN_10054d2ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = (param_1 + param_2 + -1) / param_2;
  }
  return lVar1;
}




long FUN_10054d2fc(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = (param_1 + param_2 + -1) / param_2;
  }
  return lVar1 * param_2;
}




void FUN_10054d310(long param_1,int param_2,long param_3,int param_4,int param_5,uint param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (0 < param_5) {
    param_5 = param_5 + 1;
    puVar1 = (undefined8 *)(param_3 + (long)param_4 * 8);
    puVar2 = (undefined8 *)(param_1 + (long)param_2 * 8);
    do {
      _memcpy((void *)*puVar1,(void *)*puVar2,(ulong)param_6);
      param_5 = param_5 + -1;
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (1 < param_5);
  }
  return;
}




void FUN_10054d364(void *param_1,void *param_2,ulong param_3)

{
  _memcpy(param_2,param_1,(param_3 & 0xffffffff) << 7);
  return;
}




void FUN_10054d38c(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x18);
  puVar2 = (undefined8 *)FUN_1004e83c4(pvVar1,0);
  *puVar2 = &PTR_FUN_1014a13e0;
  FUN_1004e82c0();
  FUN_1004e8330(pvVar1);
  return;
}




void FUN_10054d3cc(void)

{
  return;
}




void FUN_10054d3d4(void)

{
  return;
}




void FUN_10054d3d8(void)

{
  return;
}




void FUN_10054d3dc(void)

{
  return;
}




void FUN_10054d3e0(void)

{
  return;
}




undefined8 FUN_10054d3e4(void)

{
  return 1;
}




void FUN_10054d3ec(void)

{
  return;
}




char * FUN_10054d3f0(void)

{
  return "defData";
}




undefined8 FUN_10054d3fc(long param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long local_50;
  undefined8 **local_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar2 = FUN_10065bb60(param_2);
  local_48 = (undefined8 ***)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1006581d8(uVar2,&local_48);
  pppuVar1 = (undefined8 ***)local_48;
  if (-1 < local_38) {
    pppuVar1 = &local_48;
  }
  uVar2 = FUN_100658c88(pppuVar1,1);
  if ((int)uVar2 != -1) {
    local_50 = 0;
    uVar3 = FUN_100658cc4(uVar2,&local_50);
    FUN_100658c9c(uVar2);
    if (local_50 != 0) {
      FUN_1010a0d84(*(undefined8 *)(param_1 + 8),0,local_50,uVar3);
      FUN_100658ce8(local_50);
    }
  }
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return 0;
}




void FUN_10054d4b4(long param_1,undefined8 param_2,int param_3)

{
  FUN_10065b658(*(undefined8 *)(param_1 + 8),"defData",param_2,(long)param_3,0);
  return;
}




void FUN_10054d4d4(undefined4 param_1,undefined8 param_2,undefined1 param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = operator_new(0x40);
  puVar2 = (undefined8 *)FUN_1004e83c4(pvVar1,3);
  *puVar2 = &PTR_FUN_1014a14b8;
  *(undefined4 *)(puVar2 + 3) = param_1;
  *(undefined4 *)((long)puVar2 + 0x1c) = param_4;
  puVar2[4] = param_2;
  *(undefined1 *)(puVar2 + 5) = param_3;
  FUN_1004e82c0();
  FUN_1004e8330(pvVar1);
  return;
}




void FUN_10054d540(void)

{
  return;
}




void FUN_10054d548(long param_1)

{
  FUN_10054dff0();
  FUN_10054d644(1);
  FUN_1010a1024(*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                *(undefined1 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x1c));
  return;
}




void FUN_10054d57c(void)

{
  FUN_1010a132c();
  FUN_10054e014();
  return;
}




undefined8 FUN_10054d598(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_1004e8338(1);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  plVar2 = (long *)FUN_10063ee94();
  puVar3 = operator_new(0x10);
  FUN_1010a1520();
  *puVar3 = &PTR_FUN_1014a1490;
  puVar3[1] = plVar2;
  *(undefined8 **)(param_1 + 0x38) = puVar3;
  uVar1 = FUN_1010a1520();
  FUN_1010a0c6c(uVar1,*(undefined8 *)(param_1 + 0x38));
  puVar3 = operator_new(0x10);
  uVar1 = FUN_1010a1520();
  *puVar3 = &PTR_FUN_1014a1430;
  puVar3[1] = uVar1;
  (**(code **)(*plVar2 + 0x10))(plVar2,puVar3);
  return 1;
}




void FUN_10054d630(void)

{
  return;
}




void FUN_10054d634(void)

{
  return;
}




void FUN_10054d63c(void)

{
  return;
}




void FUN_10054d644(int param_1)

{
  if (param_1 != 0) {
    DAT_101d918f8 = operator_new(0x18);
    *DAT_101d918f8 = 0;
    DAT_101d918f8[1] = 0;
    *(undefined4 *)(DAT_101d918f8 + 2) = 0x3f800000;
  }
  return;
}




void FUN_10054d674(void)

{
  if (DAT_101d918f8 != 0) {
    FUN_10054d688();
    return;
  }
  return;
}




void FUN_10054d688(float param_1,uint *param_2)

{
  ulong uVar1;
  float *pfVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  undefined4 uVar7;
  
  uVar1 = (ulong)*param_2;
  if (*param_2 != 0) {
    pfVar2 = (float *)(*(long *)(param_2 + 2) + 0x24);
    do {
      *pfVar2 = *pfVar2 + param_1;
      uVar1 = uVar1 - 1;
      pfVar2 = pfVar2 + 10;
    } while (uVar1 != 0);
    uVar1 = 0;
    do {
      lVar5 = *(long *)(param_2 + 2);
      plVar6 = (long *)(lVar5 + uVar1 * 0x28);
      lVar3 = *plVar6;
      if (*(int *)(lVar3 + 0x3c) == 0) {
        for (plVar4 = *(long **)(lVar5 + uVar1 * 0x28 + 8); plVar4 != (long *)0x0;
            plVar4 = (long *)plVar4[2]) {
          (**(code **)(*plVar4 + 0x10))(plVar4,lVar3);
          lVar3 = *plVar6;
        }
        lVar5 = lVar5 + uVar1 * 0x28;
        uVar7 = _fmodf(*(undefined4 *)(lVar5 + 0x24),param_2[4]);
        *(undefined4 *)(lVar5 + 0x24) = uVar7;
      }
      FUN_10054dca0(lVar3);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *param_2);
  }
  return;
}




void FUN_10054d754(undefined8 param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_101d918f8 != 0) {
    uVar1 = FUN_1004d2524();
    uVar2 = FUN_100015208(param_1,uVar1,0x12345678);
    FUN_10054d7a8(DAT_101d918f8,uVar2);
    return;
  }
  return;
}




void FUN_10054d7a8(uint *param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  
  if (*param_1 != 0) {
    lVar5 = 0;
    lVar2 = *(long *)(param_1 + 2);
    do {
      lVar3 = lVar2 + lVar5;
      if (*(int *)(lVar3 + 0x20) == param_2) {
        for (lVar3 = *(long *)(lVar3 + 8); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x10)) {
          *(undefined4 *)(lVar3 + 8) = 0;
        }
        lVar2 = lVar2 + lVar5;
        *(undefined8 *)(lVar2 + 8) = 0;
        *(undefined8 *)(lVar2 + 0x10) = 0;
        *(undefined4 *)(lVar2 + 0x18) = 0;
        lVar2 = *(long *)(param_1 + 2);
        pvVar4 = *(void **)(lVar2 + lVar5);
        if (pvVar4 != (void *)0x0) {
          lVar2 = 0;
          do {
            if (*(void **)((long)pvVar4 + lVar2) != (void *)0x0) {
              operator_delete__(*(void **)((long)pvVar4 + lVar2));
            }
            *(undefined8 *)((long)pvVar4 + lVar2) = 0;
            lVar2 = lVar2 + 8;
          } while (lVar2 != 0x18);
          operator_delete(pvVar4);
          lVar2 = *(long *)(param_1 + 2);
        }
        puVar1 = (undefined8 *)(lVar2 + lVar5);
        *puVar1 = 0;
        FUN_10054df3c(param_1,puVar1,puVar1 + 5);
        return;
      }
      lVar5 = lVar5 + 0x28;
    } while ((ulong)*param_1 * 0x28 - lVar5 != 0);
  }
  return;
}




undefined8 FUN_10054d878(undefined8 param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  
  if (DAT_101d918f8 != (uint *)0x0) {
    uVar1 = FUN_1004d2524();
    iVar2 = FUN_100015208(param_1,uVar1,0x12345678);
    uVar3 = (ulong)*DAT_101d918f8;
    if (*DAT_101d918f8 != 0) {
      piVar4 = (int *)(*(long *)(DAT_101d918f8 + 2) + 0x20);
      do {
        if (*piVar4 == iVar2) {
          return *(undefined8 *)(piVar4 + -8);
        }
        piVar4 = piVar4 + 10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
    }
  }
  return 0;
}




float FUN_10054d8f0(float param_1,float param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  uVar3 = (uint)((param_1 - *(float *)(param_3 + 0x24)) / *(float *)(param_3 + 0x34));
  uVar4 = (uint)((param_2 - *(float *)(param_3 + 0x28)) / *(float *)(param_3 + 0x38));
  uVar1 = *(uint *)(param_3 + 0x18);
  uVar2 = (uVar1 & 0x7fff) - 1;
  if ((int)uVar2 <= (int)uVar3) {
    uVar3 = uVar2;
  }
  uVar2 = (uVar1 >> 0xf & 0x7fff) - 1;
  if ((int)uVar2 <= (int)uVar4) {
    uVar4 = uVar2;
  }
  fVar5 = 0.0;
  if ((((*(float *)(param_3 + 0x24) <= (float)(int)param_1) &&
       ((float)(int)param_1 <= *(float *)(param_3 + 0x2c))) &&
      (*(float *)(param_3 + 0x28) <= (float)(int)param_2)) &&
     ((float)(int)param_2 <= *(float *)(param_3 + 0x30))) {
    fVar5 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)(param_3 + (ulong)(uVar1 >> 0x1e & 1) * 8) +
                                             (ulong)((uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) +
                                                    (uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU)) *
                                                    (uVar1 & 0x7fff))));
    fVar5 = fVar5 * 0.003921569;
  }
  return fVar5;
}




undefined4
FUN_10054d994(float param_1,float param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int local_70;
  uint local_6c;
  int local_68;
  undefined4 local_64;
  
  uVar6 = (uint)((param_1 - *(float *)(param_3 + 0x24)) / *(float *)(param_3 + 0x34));
  uVar7 = (uint)((param_2 - *(float *)(param_3 + 0x28)) / *(float *)(param_3 + 0x38));
  local_64 = 0;
  uVar9 = (*(uint *)(param_3 + 0x18) & 0x7fff) - 1;
  if ((int)uVar9 <= (int)uVar6) {
    uVar6 = uVar9;
  }
  uVar9 = (*(uint *)(param_3 + 0x18) >> 0xf & 0x7fff) - 1;
  if ((int)uVar9 <= (int)uVar7) {
    uVar7 = uVar9;
  }
  if ((((*(float *)(param_3 + 0x24) <= (float)(int)param_1) &&
       ((float)(int)param_1 <= *(float *)(param_3 + 0x2c))) &&
      (*(float *)(param_3 + 0x28) <= (float)(int)param_2)) &&
     (((float)(int)param_2 <= *(float *)(param_3 + 0x30) && (-1 < param_7)))) {
    uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    uVar7 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
    local_70 = 0;
    local_68 = 1;
    local_6c = uVar6;
    do {
      uVar3 = uVar6 - local_70;
      uVar1 = local_70 + uVar6;
      iVar10 = local_68;
      uVar9 = uVar3;
      if (uVar1 < uVar3) {
        iVar10 = uVar7 - local_70;
      }
      else {
        do {
          uVar5 = FUN_10054dbc8(param_3,uVar9,local_70 + uVar7,param_4,param_5,param_6,&local_64);
          if ((uVar5 & 1) == 0) {
            return local_64;
          }
          uVar9 = uVar9 + 1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        iVar10 = uVar7 - local_70;
        if (uVar3 <= uVar1) {
          iVar11 = 0;
          do {
            uVar5 = FUN_10054dbc8(param_3,local_6c + iVar11,iVar10,param_4,param_5,param_6,&local_64
                                 );
            if ((uVar5 & 1) == 0) {
              return local_64;
            }
            iVar11 = iVar11 + 1;
          } while (local_68 != iVar11);
        }
      }
      uVar2 = (local_70 + uVar7) - 1;
      uVar9 = iVar10 + 1;
      uVar8 = uVar9;
      while (uVar8 <= uVar2) {
        uVar5 = FUN_10054dbc8(param_3,uVar1,uVar8,param_4,param_5,param_6,&local_64);
        uVar8 = uVar8 + 1;
        if ((uVar5 & 1) == 0) {
          return local_64;
        }
      }
      while (uVar9 <= uVar2) {
        uVar5 = FUN_10054dbc8(param_3,uVar3,uVar9,param_4,param_5,param_6,&local_64);
        uVar9 = uVar9 + 1;
        if ((uVar5 & 1) == 0) {
          return local_64;
        }
      }
      local_68 = local_68 + 2;
      local_6c = local_6c - 1;
      bVar4 = local_70 != param_7;
      local_70 = local_70 + 1;
    } while (bVar4);
  }
  return local_64;
}




bool FUN_10054dbc8(long param_1,uint param_2,uint param_3,code *param_4,long param_5,int param_6,
                  int *param_7)

{
  int iVar1;
  undefined8 *puVar2;
  float local_48;
  float fStack_44;
  uint uStack_40;
  uint uStack_3c;
  undefined4 local_38;
  
  if ((*(float *)(param_1 + 0x24) <= (float)(int)param_2) &&
     ((float)(int)param_2 <= *(float *)(param_1 + 0x2c))) {
    if ((*(float *)(param_1 + 0x28) <= (float)(int)param_3) &&
       ((float)(int)param_3 <= *(float *)(param_1 + 0x30))) {
      local_48 = *(float *)(param_1 + 0x24) + (float)param_2 * *(float *)(param_1 + 0x34);
      fStack_44 = *(float *)(param_1 + 0x28) + (float)param_3 * *(float *)(param_1 + 0x38);
      uStack_40 = param_2;
      uStack_3c = param_3;
      local_38 = FUN_10054d8f0();
      iVar1 = (*param_4)(&local_48);
      if (iVar1 != 0) {
        iVar1 = *param_7;
        *param_7 = iVar1 + 1;
        puVar2 = (undefined8 *)(param_5 + (long)iVar1 * 0x14);
        puVar2[1] = CONCAT44(uStack_3c,uStack_40);
        *puVar2 = CONCAT44(fStack_44,local_48);
        *(undefined4 *)(puVar2 + 2) = local_38;
      }
      return *param_7 < param_6;
    }
  }
  return true;
}




void FUN_10054dca0(long param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (*(uint *)(param_1 + 0x18) >> 0xf & 0x7fff) * (*(uint *)(param_1 + 0x18) & 0x7fff);
  iVar2 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_1 + 0x40) + iVar2;
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar4 <= iVar1) {
    iVar1 = iVar4;
  }
  FUN_10054dd14(param_1,iVar2,iVar1);
  if (iVar4 <= *(int *)(param_1 + 0x3c)) {
    uVar3 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar3 ^ 0x40000000;
    _bzero(*(void **)(param_1 + 0x10),((ulong)(uVar3 >> 0xf) & 0x7fff) * ((ulong)uVar3 & 0x7fff));
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}




void FUN_10054dd14(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  uVar8 = *(uint *)(param_1 + 0x18);
  if (param_2 < param_3) {
    lVar9 = *(long *)(param_1 + (ulong)((uVar8 & 0x40000000) >> 0x1e) * 8);
    lVar12 = *(long *)(param_1 + 0x10);
    lVar11 = *(long *)(param_1 + (ulong)((uVar8 & 0x40000000) == 0) * 8);
    fVar17 = *(float *)(param_1 + 0x34);
    fVar19 = *(float *)(param_1 + 0x38);
    lVar10 = (long)param_2;
    while( true ) {
      uVar2 = uVar8 & 0x7fff;
      iVar5 = 0;
      if (uVar2 != 0) {
        iVar5 = (int)lVar10 / (int)uVar2;
      }
      uVar15 = (uint)*(byte *)(lVar12 + lVar10);
      iVar6 = (int)lVar10 + -1;
      iVar13 = (iVar6 + (iVar5 + -1) * uVar2) - iVar5 * uVar2;
      iVar14 = -1;
      do {
        iVar16 = 0;
        do {
          uVar7 = uVar15;
          if ((((iVar16 != 1 || iVar14 != 0) &&
               (iVar1 = (iVar6 - iVar5 * uVar2) + iVar16, -1 < iVar1)) && (iVar1 < (int)uVar2)) &&
             ((-1 < iVar14 + iVar5 && (iVar14 + iVar5 < (int)(uVar8 >> 0xf & 0x7fff))))) {
            fVar18 = SQRT(fVar17 * fVar17 + fVar19 * fVar19);
            if ((iVar14 == 0) != (iVar16 == 1)) {
              fVar18 = *(float *)(param_1 + 0x34);
            }
            bVar3 = *(byte *)(lVar12 + (ulong)(uint)(iVar13 + iVar16));
            bVar4 = *(byte *)(lVar9 + (ulong)(uint)(iVar13 + iVar16));
            if (bVar3 <= bVar4) {
              bVar3 = bVar4;
            }
            fVar18 = (float)_expf(*(float *)(param_1 + 0x20) * -fVar18);
            uVar7 = (int)(fVar18 * (float)bVar3);
            if ((uint)(int)(fVar18 * (float)bVar3) <= (uVar15 & 0xff)) {
              uVar7 = uVar15;
            }
          }
          uVar15 = uVar7;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 3);
        iVar14 = iVar14 + 1;
        iVar13 = iVar13 + uVar2;
      } while (iVar14 != 2);
      fVar18 = (float)NEON_ucvtf((uint)*(byte *)(lVar9 + lVar10));
      *(char *)(lVar11 + lVar10) =
           (char)(int)(fVar18 + *(float *)(param_1 + 0x1c) * ((float)(uVar15 & 0xff) - fVar18));
      lVar10 = lVar10 + 1;
      if (lVar10 == param_3) break;
      uVar8 = *(uint *)(param_1 + 0x18);
    }
  }
  return;
}




void FUN_10054ded4(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x28;
      puVar2 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        *puVar2 = 0;
        puVar2[1] = 0;
        *(undefined4 *)(puVar2 + 2) = 0;
        puVar2 = puVar2 + 5;
        lVar1 = lVar1 + -0x28;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_10054df3c(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  iVar2 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  uVar3 = (ulong)*param_1;
  if (*param_1 != iVar2 * -0x33333333) {
    lVar4 = *(long *)(param_1 + 2);
    puVar6 = (undefined8 *)(lVar4 + uVar3 * 0x28);
    lVar1 = (long)puVar6 - (long)param_3;
    puVar5 = param_2;
    if (lVar1 != 0) {
      do {
        uVar8 = param_3[1];
        uVar7 = *param_3;
        uVar10 = param_3[3];
        uVar9 = param_3[2];
        puVar5[4] = param_3[4];
        puVar5[1] = uVar8;
        *puVar5 = uVar7;
        puVar5[3] = uVar10;
        puVar5[2] = uVar9;
        param_3 = param_3 + 5;
        puVar5 = puVar5 + 5;
      } while (param_3 != puVar6);
      uVar3 = (ulong)*param_1;
      lVar4 = *(long *)(param_1 + 2);
    }
    param_2 = param_2 + ((lVar1 >> 3) * -0x3333333333333333 & 0xffffffffU) * 5;
    puVar5 = (undefined8 *)(lVar4 + uVar3 * 0x28);
    if (param_2 != puVar5) {
      do {
        param_2[1] = 0;
        param_2[2] = 0;
        *(undefined4 *)(param_2 + 3) = 0;
        param_2 = param_2 + 5;
      } while (param_2 != puVar5);
      uVar3 = (ulong)*param_1;
    }
    *param_1 = (int)uVar3 + iVar2 * 0x33333333;
    return;
  }
  FUN_10054ded4(param_1,1);
  return;
}




void FUN_10054dff0(void)

{
  operator_new(0x448);
  DAT_101d91900 = FUN_10054e0f0();
  return;
}




void FUN_10054e014(void)

{
  void *pvVar1;
  
  if (DAT_101d91900 != 0) {
    pvVar1 = (void *)FUN_10054e144();
    operator_delete(pvVar1);
  }
  DAT_101d91900 = 0;
  return;
}




void FUN_10054e044(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_14 [4];
  
  FUN_10054e2f8(DAT_101d91900,param_1,param_2,auStack_14,param_3,param_4);
  return;
}




void FUN_10054e07c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10054e2f8(DAT_101d91900,param_1,param_2,param_3,param_4,param_5);
  return;
}




void FUN_10054e09c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_10054e3d8(DAT_101d91900,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}




void FUN_10054e0c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10054e19c(DAT_101d91900,param_1,param_2,param_3);
  return;
}




void FUN_10054e0d8(undefined8 param_1)

{
  FUN_10054e2bc(DAT_101d91900,param_1);
  return;
}




long thunk_FUN_10054e4f4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100550edc();
  FUN_100550ea4(lVar1 + 0x60);
  *(undefined4 *)(param_1 + 0x764) = 0;
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xfffe;
  return param_1;
}




undefined8 * FUN_10054e0f0(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0x40;
  do {
    FUN_100550edc((long)param_1 + lVar1);
    lVar1 = lVar1 + 0x60;
  } while (lVar1 != 0x340);
  FUN_100550ea4(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x88) = 0xfffe;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  return param_1;
}




long FUN_10054e144(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    if (*(long *)(param_1 + lVar1) != 0) {
      FUN_10054f12c();
      *(undefined8 *)(param_1 + lVar1) = 0;
    }
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0x40);
  lVar1 = 0x2e0;
  do {
    thunk_FUN_100550ef4(param_1 + lVar1);
    lVar1 = lVar1 + -0x60;
  } while (lVar1 != -0x20);
  return param_1;
}




ulong FUN_10054e19c(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *pvVar4;
  ulong uVar5;
  uint uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((uint)param_2 < 8) {
    uVar5 = param_2 & 0xffffffff;
    if (*(long *)(param_1 + (param_2 & 0xffffffff) * 8) != 0) {
      FUN_10054f12c();
      *(undefined8 *)(param_1 + uVar5 * 8) = 0;
    }
    uStack_78 = param_3[1];
    local_80 = *param_3;
    uStack_68 = param_3[3];
    uStack_70 = param_3[2];
    uVar3 = FUN_10054f0f4();
    FUN_10054f1d0(uVar3,(ulong)&local_80 | 4);
    if ((uint)local_80 != 0) {
      uVar6 = 0;
      param_3 = param_3 + 4;
      do {
        uVar1 = *(undefined4 *)param_3;
        uVar2 = (ulong)*(uint *)((long)param_3 + 4);
        pvVar4 = (void *)thunk_FUN_10054ec0c(uVar2,0);
        _bzero(pvVar4,uVar2);
        _memmove(pvVar4,param_3 + 1,uVar2);
        param_3 = (undefined8 *)((long)(param_3 + 1) + uVar2);
        FUN_10054f3f8(uVar3,pvVar4,uVar2,1,uVar1,0);
        uVar6 = uVar6 + 1;
      } while (uVar6 < (uint)local_80);
    }
    *(undefined8 *)(param_1 + uVar5 * 8) = uVar3;
    FUN_100550f50(param_1 + uVar5 * 0x60 + 0x40,uVar3,0x800);
  }
  else {
    param_2 = (ulong)DAT_101867788;
  }
  return param_2;
}




void FUN_10054e2bc(long param_1,uint param_2)

{
  FUN_10054f12c(*(undefined8 *)(param_1 + (ulong)param_2 * 8));
  *(undefined8 *)(param_1 + (ulong)param_2 * 8) = 0;
  return;
}




void FUN_10054e2e8(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_100550f50(param_3,*(undefined8 *)(param_1 + (param_2 & 0xffffffff) * 8),0x800);
  return;
}




bool FUN_10054e2f8(long param_1,ulong param_2,undefined8 param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  local_40 = NEON_fmov(0x3e800000,4);
  local_38 = 0x3e800000;
  if (param_6 != (undefined8 *)0x0) {
    local_40 = *param_6;
    local_38 = *(undefined4 *)(param_6 + 1);
  }
  local_54 = 0;
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x60 + 0x40;
  iVar3 = FUN_100551a1c(lVar1,param_3,&local_40,param_1 + 0x340,&local_54,&local_50);
  bVar2 = false;
  if (iVar3 == 0x40000000 && local_54 != 0) {
    local_58 = 0;
    iVar3 = FUN_100551078(lVar1,local_54,&local_50,&local_58);
    bVar2 = iVar3 == 0x40000000;
    if (bVar2) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_58;
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = local_50;
        *(undefined4 *)(param_5 + 1) = local_48;
      }
    }
  }
  return bVar2;
}




bool FUN_10054e3d8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 *param_5,undefined8 *param_6,undefined8 *param_7)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  local_50 = NEON_fmov(0x3e800000,4);
  local_48 = 0x3e800000;
  if (param_7 != (undefined8 *)0x0) {
    local_50 = *param_7;
    local_48 = *(undefined4 *)(param_7 + 1);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  lVar1 = param_1 + (param_2 & 0xffffffff) * 0x60 + 0x40;
  iVar3 = FUN_100551a1c(lVar1,param_3,&local_50,param_1 + 0x340,(long)&local_68 + 4,0);
  if (iVar3 == 0x40000000 && local_68._4_4_ != 0) {
    FUN_1005537f4(lVar1,local_68._4_4_,param_3,param_4,param_1 + 0x340,&local_68,&local_60,0,0,0);
    if (param_5 != (undefined4 *)0x0) {
      uVar4 = NEON_fminnm((float)local_68,0x3f800000);
      *param_5 = uVar4;
    }
    if (param_6 != (undefined8 *)0x0) {
      *param_6 = local_60;
      *(undefined4 *)(param_6 + 1) = local_58;
    }
    bVar2 = 1.0 < (float)local_68;
  }
  else {
    bVar2 = false;
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = 0;
    }
  }
  return bVar2;
}




long FUN_10054e4f4(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_100550edc();
  FUN_100550ea4(lVar1 + 0x60);
  *(undefined4 *)(param_1 + 0x764) = 0;
  *(undefined4 *)(param_1 + 0x778) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0xfffe;
  return param_1;
}




void FUN_10054e534(long param_1,undefined8 param_2)

{
  FUN_10054e2e8(DAT_101d91900,param_2,param_1);
  *(undefined4 *)(param_1 + 0x764) = 0;
  *(undefined4 *)(param_1 + 0x774) = 0;
  *(int *)(param_1 + 0x778) = (int)param_2;
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_10054e574(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 in_stack_fffffffffffffab0;
  undefined4 uVar26;
  float local_540;
  float fStack_53c;
  float local_538;
  undefined8 local_530;
  float local_528;
  undefined8 local_520;
  undefined4 local_518;
  undefined8 local_510;
  float local_508;
  int local_500;
  undefined4 local_4fc;
  undefined4 local_4f8;
  float local_4f4;
  byte local_4ef [3];
  float local_4ec [15];
  int iStack_4b0;
  int local_4ac [256];
  uint local_ac [3];
  long local_a0;
  
  uVar26 = (undefined4)((ulong)in_stack_fffffffffffffab0 >> 0x20);
  local_a0 = *(long *)PTR____stack_chk_guard_101444218;
  if (((DAT_101e947f8 & 1) == 0) && (iVar7 = ___cxa_guard_acquire(&DAT_101e947f8), iVar7 != 0)) {
    DAT_101e947e8 = NEON_fmov(0x3fc00000,4);
    DAT_101e947f0 = 0x3fc00000;
    ___cxa_guard_release(&DAT_101e947f8);
  }
  local_4fc = 0;
  local_4f8 = 0;
  local_500 = -1;
  lVar10 = param_1 + 0x60;
  FUN_100551a1c(param_1,param_2,&DAT_101e947e8,lVar10,&local_4f8,0);
  FUN_100551a1c(param_1,param_3,&DAT_101e947e8,lVar10,&local_4fc,0);
  FUN_1005520e4(param_1,local_4f8,local_4fc,param_2,param_3,lVar10,local_4ac,&local_500,
                CONCAT44(uVar26,0x100));
  if (local_500 < 1) {
    bVar5 = false;
  }
  else {
    FUN_100551888(param_1,local_4f8,param_2,&local_510);
    FUN_100551888(param_1,(&iStack_4b0)[local_500],param_3,&local_520);
    *(undefined8 *)(param_1 + 0x164) = local_510;
    *(float *)(param_1 + 0x16c) = local_508;
    uVar13 = 1;
    *(undefined4 *)(param_1 + 0x764) = 1;
    local_530 = local_510;
    local_528 = local_508;
    if (local_500 != 0) {
      uVar13 = 1;
      do {
        if (0x7f < uVar13) break;
        local_4f4 = 0.0;
        FUN_100552ac8(param_1,&local_530,&local_520,local_4ac,local_500,local_4ef + 3,local_4ef,
                      local_ac,&local_4f4,3);
        if ((int)local_4f4 < 1) {
LAB_10054e998:
          uVar13 = *(uint *)(param_1 + 0x764);
          break;
        }
        uVar8 = 0;
        fVar4 = local_530._4_4_;
        pbVar11 = local_4ef;
        while( true ) {
          uVar1 = uVar8 & 0xffffffff;
          fVar21 = *(float *)(local_4ef + uVar1 * 4 + 3);
          if ((*pbVar11 >> 2 & 1) != 0) break;
          bVar5 = false;
          bVar6 = false;
          if (((float)local_530 - fVar21) * ((float)local_530 - fVar21) +
              (local_528 - local_4ec[uVar1 + 2]) * (local_528 - local_4ec[uVar1 + 2]) < 0.0001) {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(ABS(local_530._4_4_ - local_4ec[uVar1 + 1]))) {
              bVar5 = ABS(local_530._4_4_ - local_4ec[uVar1 + 1]) < 1000.0;
              bVar6 = false;
            }
          }
          if (bVar5 == bVar6) break;
          pbVar11 = pbVar11 + 1;
          uVar8 = uVar8 + 3;
          if ((ulong)(uint)local_4f4 * 3 == uVar8) goto LAB_10054e998;
        }
        fVar20 = *(float *)(local_4ef + (ulong)((int)uVar8 + 2) * 4 + 3);
        bVar2 = *pbVar11;
        fVar22 = fVar21 - (float)local_530;
        fVar19 = local_530._4_4_ - local_530._4_4_;
        fVar23 = fVar20 - local_528;
        fVar24 = SQRT(fVar22 * fVar22 + fVar19 * fVar19 + fVar23 * fVar23);
        if (((bVar2 >> 1 & 1) == 0) || (fVar25 = 1.0, 1.0 <= fVar24)) {
          fVar25 = 1.0 / fVar24;
        }
        local_540 = (float)local_530 + fVar22 * fVar25;
        fStack_53c = local_530._4_4_ + fVar19 * fVar25;
        local_538 = local_528 + fVar23 * fVar25;
        local_ac[0] = 0;
        FUN_100553294(param_1,local_4ac[0],&local_530,&local_540,lVar10,&local_530,local_4ef + 3,
                      local_ac,0x10);
        uVar18 = local_ac[0] - 1;
        uVar13 = 0xffffffff;
        iVar7 = -1;
        lVar9 = (long)local_500;
        do {
          do {
            lVar3 = lVar9 + -1;
            if (lVar9 < 1) goto LAB_10054e888;
            lVar9 = lVar3;
          } while ((int)local_ac[0] < 1);
          bVar5 = false;
          lVar17 = (ulong)local_ac[0] + 1;
          uVar16 = uVar18;
          uVar14 = uVar13;
          iVar15 = iVar7;
          do {
            bVar6 = *(int *)((long)local_4ac + lVar3 * 4) ==
                    *(int *)(local_4ef + (ulong)uVar16 * 4 + 3);
            uVar13 = uVar16;
            if (!bVar6) {
              uVar13 = uVar14;
            }
            bVar5 = (bool)(bVar6 | bVar5);
            iVar7 = (int)lVar3;
            if (!bVar6) {
              iVar7 = iVar15;
            }
            lVar17 = lVar17 + -1;
            uVar16 = uVar16 - 1;
            uVar14 = uVar13;
            iVar15 = iVar7;
          } while (1 < lVar17);
        } while (!bVar5);
LAB_10054e888:
        if ((iVar7 != -1) && (uVar13 != 0xffffffff)) {
          uVar13 = local_ac[0] - uVar13;
          iVar15 = local_500;
          if (iVar7 + 1 < local_500) {
            iVar15 = iVar7 + 1;
          }
          uVar16 = local_500 - iVar15 & (local_500 - iVar15 >> 0x1f ^ 0xffffffffU);
          uVar14 = 0x100 - uVar13;
          if ((int)(uVar16 + uVar13) < 0x101) {
            uVar14 = uVar16;
          }
          if (uVar14 != 0) {
            _memmove((void *)((long)local_4ac + (long)(int)uVar13 * 4),
                     (void *)((long)local_4ac + (long)iVar15 * 4),
                     -(ulong)(uVar14 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar14 << 2);
          }
          if (0 < (int)uVar13) {
            uVar8 = (ulong)uVar13;
            piVar12 = local_4ac;
            do {
              *piVar12 = *(int *)(local_4ef + (long)(int)uVar18 * 4 + 3);
              uVar18 = uVar18 - 1;
              uVar8 = uVar8 - 1;
              piVar12 = piVar12 + 1;
            } while (uVar8 != 0);
          }
          local_500 = uVar14 + uVar13;
        }
        local_4f4 = 0.0;
        FUN_100551078(param_1,local_4ac[0],&local_530,&local_4f4);
        local_530 = CONCAT44(local_4f4,(float)local_530);
        if ((bVar2 >> 1 & 1) != 0) {
          fVar20 = fVar20 - local_528;
          bVar5 = false;
          bVar6 = false;
          if ((fVar21 - (float)local_530) * (fVar21 - (float)local_530) + fVar20 * fVar20 < 0.0001)
          {
            bVar5 = false;
            bVar6 = true;
            if (!NAN(ABS(fVar4 - local_4f4))) {
              bVar5 = ABS(fVar4 - local_4f4) < 1.0;
              bVar6 = false;
            }
          }
          if (bVar5 != bVar6) {
            lVar10 = param_1 + (ulong)*(uint *)(param_1 + 0x764) * 0xc;
            *(undefined8 *)(lVar10 + 0x164) = local_520;
            *(undefined4 *)(lVar10 + 0x16c) = local_518;
            uVar13 = *(int *)(param_1 + 0x764) + 1;
            *(uint *)(param_1 + 0x764) = uVar13;
            break;
          }
        }
        lVar9 = param_1 + (ulong)*(uint *)(param_1 + 0x764) * 0xc;
        *(undefined8 *)(lVar9 + 0x164) = local_530;
        *(float *)(lVar9 + 0x16c) = local_528;
        uVar13 = *(int *)(param_1 + 0x764) + 1;
        *(uint *)(param_1 + 0x764) = uVar13;
      } while (local_500 != 0);
    }
    *(undefined8 *)(param_1 + 0x768) = local_510;
    *(float *)(param_1 + 0x770) = local_508;
    *(undefined4 *)(param_1 + 0x774) = 0;
    bVar5 = 1 < uVar13;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_a0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(bVar5);
  }
  return;
}




bool FUN_10054ea68(float param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar1 = *(uint *)(param_2 + 0x764);
  if (1 < uVar1) {
    uVar3 = (ulong)*(int *)(param_2 + 0x774);
    lVar5 = param_2 + uVar3 * 0xc;
    fVar7 = *(float *)(lVar5 + 0x164) - *(float *)(param_2 + 0x768);
    fVar8 = *(float *)(lVar5 + 0x168) - *(float *)(param_2 + 0x76c);
    fVar10 = *(float *)(lVar5 + 0x16c) - *(float *)(param_2 + 0x770);
    param_1 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar10 * fVar10) + param_1;
    pfVar6 = (float *)(lVar5 + 0x178);
    fVar7 = *(float *)(lVar5 + 0x164);
    fVar8 = *(float *)(lVar5 + 0x168);
    fVar10 = *(float *)(lVar5 + 0x16c);
    while( true ) {
      fVar9 = pfVar6[-2];
      fVar11 = pfVar6[-1];
      fVar12 = *pfVar6;
      fVar13 = SQRT((fVar7 - fVar9) * (fVar7 - fVar9) + (fVar8 - fVar11) * (fVar8 - fVar11) +
                    (fVar10 - fVar12) * (fVar10 - fVar12));
      if (param_1 < fVar13) break;
      iVar2 = (int)uVar3;
      if (uVar1 - 2 == iVar2) {
        lVar5 = param_2 + (ulong)(uVar1 - 1) * 0xc;
        uVar4 = *(undefined8 *)(lVar5 + 0x164);
        *(undefined4 *)(param_2 + 0x770) = *(undefined4 *)(lVar5 + 0x16c);
        *(undefined8 *)(param_2 + 0x768) = uVar4;
        goto LAB_10054eb84;
      }
      pfVar6 = pfVar6 + 3;
      param_1 = param_1 - fVar13;
      *(int *)(param_2 + 0x774) = iVar2 + 1;
      uVar3 = (ulong)(iVar2 + 1);
      fVar7 = fVar9;
      fVar8 = fVar11;
      fVar10 = fVar12;
    }
    fVar9 = fVar9 - fVar7;
    fVar11 = fVar11 - fVar8;
    fVar12 = fVar12 - fVar10;
    fVar13 = 1.0 / SQRT(fVar9 * fVar9 + fVar11 * fVar11 + fVar12 * fVar12);
    *(float *)(param_2 + 0x768) = fVar7 + fVar13 * fVar9 * param_1;
    *(float *)(param_2 + 0x76c) = fVar8 + fVar13 * fVar11 * param_1;
    *(float *)(param_2 + 0x770) = fVar10 + fVar13 * fVar12 * param_1;
  }
LAB_10054eb84:
  return 1 < uVar1;
}




void FUN_10054eb90(void)

{
  return;
}




void FUN_10054ec0c(int param_1)

{
  _malloc((long)param_1);
  return;
}




void thunk_FUN_10054ec0c(void)

{
  (*(code *)PTR_FUN_101867790)();
  return;
}




void FUN_10054ec24(long param_1)

{
  if (param_1 != 0) {
    (*(code *)PTR__free_101867798)();
    return;
  }
  return;
}




float FUN_10054ec38(float param_1)

{
  return SQRT(param_1);
}




undefined8
FUN_10054ec40(float *param_1,float *param_2,long param_3,uint param_4,float *param_5,float *param_6,
             int *param_7,int *param_8)

{
  float *pfVar1;
  ulong uVar2;
  ulong uVar3;
  float *pfVar4;
  int iVar5;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  ulong uVar6;
  
  *param_5 = 0.0;
  *param_6 = 1.0;
  *param_7 = -1;
  *param_8 = -1;
  if ((int)param_4 < 1) {
    return 1;
  }
  fVar10 = *param_1;
  fVar7 = *param_2 - fVar10;
  fVar11 = param_1[2];
  fVar8 = param_2[2] - fVar11;
  pfVar4 = (float *)(param_3 + 8);
  fVar9 = 1.0;
  uVar2 = 0;
  uVar6 = (ulong)(param_4 - 1);
  while( true ) {
    uVar3 = uVar2;
    iVar5 = (int)uVar6;
    pfVar1 = (float *)(param_3 + (long)(iVar5 * 3) * 4);
    fVar13 = *pfVar1;
    fVar12 = pfVar4[-2] - fVar13;
    fVar15 = pfVar1[2];
    fVar14 = *pfVar4 - fVar15;
    fVar10 = (fVar15 - fVar11) * fVar12 + fVar14 * (fVar10 - fVar13);
    fVar11 = fVar12 * fVar8 - fVar14 * fVar7;
    if (1e-08 <= ABS(fVar11)) {
      fVar10 = fVar10 / fVar11;
      if (0.0 <= fVar11) {
        if (fVar10 < fVar9) {
          *param_6 = fVar10;
          *param_8 = iVar5;
          fVar9 = fVar10;
          if (fVar10 < *param_5) {
            return 0;
          }
        }
      }
      else if (*param_5 < fVar10) {
        *param_5 = fVar10;
        *param_7 = iVar5;
        fVar9 = *param_6;
        if (*param_6 < fVar10) {
          return 0;
        }
      }
    }
    else if (fVar10 < 0.0) {
      return 0;
    }
    if ((ulong)param_4 - 1 == uVar3) break;
    fVar10 = *param_1;
    fVar11 = param_1[2];
    pfVar4 = pfVar4 + 3;
    uVar2 = uVar3 + 1;
    uVar6 = uVar3;
  }
  return 1;
}




float FUN_10054ed64(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = *param_3 - *param_2;
  fVar1 = param_3[2] - param_2[2];
  fVar5 = fVar3 * fVar3 + fVar1 * fVar1;
  fVar4 = (*param_1 - *param_2) * fVar3 + fVar1 * (param_1[2] - param_2[2]);
  fVar2 = fVar4 / fVar5;
  if (fVar5 <= 0.0) {
    fVar2 = fVar4;
  }
  *param_4 = fVar2;
  fVar4 = 0.0;
  if ((fVar2 < 0.0) || (fVar4 = 1.0, 1.0 < fVar2)) {
    *param_4 = fVar4;
    fVar2 = fVar4;
  }
  fVar3 = (*param_2 + fVar3 * fVar2) - *param_1;
  fVar2 = (param_2[2] + fVar1 * fVar2) - param_1[2];
  return fVar3 * fVar3 + fVar2 * fVar2;
}




bool FUN_10054edf8(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar3 = *param_2;
  fVar2 = *param_4 - fVar3;
  fVar6 = param_2[2];
  fVar4 = param_4[2] - fVar6;
  fVar7 = *param_3 - fVar3;
  fVar8 = param_3[2] - fVar6;
  fVar9 = fVar2 * fVar2 + fVar4 * fVar4;
  fVar10 = fVar7 * fVar2 + fVar4 * fVar8;
  fVar5 = (*param_1 - fVar3) * fVar2 + fVar4 * (param_1[2] - fVar6);
  fVar2 = fVar7 * fVar7 + fVar8 * fVar8;
  fVar3 = (*param_1 - fVar3) * fVar7 + fVar8 * (param_1[2] - fVar6);
  fVar4 = 1.0 / (fVar2 * fVar9 - fVar10 * fVar10);
  fVar2 = (fVar5 * fVar2 - fVar3 * fVar10) * fVar4;
  fVar4 = (fVar3 * fVar9 - fVar5 * fVar10) * fVar4;
  bVar1 = fVar2 + fVar4 <= 1.0001;
  if ((-0.0001 <= fVar2 && -0.0001 <= fVar4) && bVar1) {
    fVar3 = param_2[1];
    *param_5 = fVar3 + fVar4 * (param_3[1] - fVar3) + fVar2 * (param_4[1] - fVar3);
  }
  return (-0.0001 <= fVar2 && -0.0001 <= fVar4) && bVar1;
}




uint FUN_10054eee0(float *param_1,long param_2,uint param_3)

{
  float *pfVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  float *pfVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((int)param_3 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    fVar7 = param_1[2];
    pfVar5 = (float *)(param_2 + 8);
    uVar2 = 0;
    uVar6 = (ulong)(param_3 - 1);
    do {
      uVar4 = uVar2;
      pfVar1 = (float *)(param_2 + (long)((int)uVar6 * 3) * 4);
      fVar8 = *pfVar5;
      fVar9 = pfVar1[2];
      if ((fVar8 <= fVar7 == fVar7 < fVar9) &&
         (*param_1 < ((*pfVar1 - pfVar5[-2]) * (fVar7 - fVar8)) / (fVar9 - fVar8) + pfVar5[-2])) {
        uVar3 = uVar3 ^ 1;
      }
      uVar2 = uVar4 + 1;
      pfVar5 = pfVar5 + 3;
      uVar6 = uVar4;
    } while (param_3 != uVar2);
  }
  return uVar3;
}




uint FUN_10054ef7c(float *param_1,float *param_2,uint param_3,long param_4,long param_5)

{
  ulong uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  ulong uVar4;
  
  if ((int)param_3 < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    uVar4 = (ulong)(param_3 - 1);
    pfVar5 = param_2;
    uVar7 = 0;
    do {
      iVar3 = (int)uVar4;
      pfVar2 = param_2 + (long)iVar3 * 3;
      fVar8 = pfVar5[2];
      fVar10 = param_1[2];
      if ((fVar8 <= fVar10 == fVar10 < pfVar2[2]) &&
         (*param_1 < ((*pfVar2 - *pfVar5) * (fVar10 - fVar8)) / (pfVar2[2] - fVar8) + *pfVar5)) {
        uVar6 = uVar6 ^ 1;
      }
      uVar9 = FUN_10054ed64(param_1,pfVar2,pfVar5,param_5 + (long)iVar3 * 4);
      *(undefined4 *)(param_4 + (long)iVar3 * 4) = uVar9;
      uVar1 = uVar7 + 1;
      pfVar5 = pfVar5 + 3;
      uVar4 = uVar7;
      uVar7 = uVar1;
    } while (param_3 != uVar1);
  }
  return uVar6;
}




bool FUN_10054f074(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_2 - *param_1;
  fVar2 = param_2[2] - param_1[2];
  fVar5 = *param_4 - *param_3;
  fVar7 = param_4[2] - param_3[2];
  fVar6 = fVar7 * fVar1 - fVar5 * fVar2;
  if (1e-06 <= ABS(fVar6)) {
    fVar3 = *param_1 - *param_3;
    fVar4 = param_1[2] - param_3[2];
    *param_5 = (fVar4 * fVar5 - fVar7 * fVar3) / fVar6;
    *param_6 = (fVar4 * fVar1 - fVar3 * fVar2) / fVar6;
  }
  return 1e-06 <= ABS(fVar6);
}




void FUN_10054f0f4(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)thunk_FUN_10054ec0c(0x68,0);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x34) = 0;
    *(undefined8 *)((long)puVar1 + 0x2c) = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[5] = 0;
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[9] = 0;
    puVar1[8] = 0;
    puVar1[0xb] = 0;
    puVar1[10] = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0;
  }
  return;
}




void FUN_10054f12c(long param_1)

{
  if (param_1 != 0) {
    FUN_10054f148();
    FUN_10054ec24();
    return;
  }
  return;
}




long FUN_10054f148(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    lVar1 = *(long *)(param_1 + 0x50);
    do {
      if ((*(byte *)(lVar1 + lVar3 + 0x5c) & 1) != 0) {
        FUN_10054ec24(*(undefined8 *)(lVar1 + lVar3 + 0x50));
        lVar1 = *(long *)(param_1 + 0x50);
        *(undefined8 *)(lVar1 + lVar3 + 0x50) = 0;
        *(undefined4 *)(lVar1 + lVar3 + 0x58) = 0;
        iVar2 = *(int *)(param_1 + 0x30);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x68;
    } while (lVar4 < iVar2);
  }
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x40));
  FUN_10054ec24(*(undefined8 *)(param_1 + 0x50));
  return param_1;
}




undefined4 FUN_10054f1d0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  byte bVar8;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  int iVar9;
  byte bVar15;
  byte bVar17;
  byte bVar18;
  uint uVar16;
  byte bVar19;
  byte bVar20;
  undefined8 uVar10;
  undefined8 uVar21;
  uint uVar22;
  undefined8 uVar23;
  uint uVar25;
  ulong uVar24;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  
  uVar7 = 0x80000004;
  uVar21 = param_2[1];
  uVar10 = *param_2;
  uVar23 = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined8 *)((long)param_1 + 0xc) = uVar23;
  param_1[1] = uVar21;
  *param_1 = uVar10;
  *(undefined4 *)((long)param_1 + 0x1c) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((long)param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)(param_2 + 1);
  param_1[5] = *(undefined8 *)((long)param_2 + 0xc);
  iVar1 = *(int *)((long)param_2 + 0x14);
  iVar9 = iVar1 + 3;
  if (-1 < iVar1) {
    iVar9 = iVar1;
  }
  uVar4 = (iVar9 >> 2) - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  iVar9 = uVar4 + 1;
  if (uVar4 == 0xffffffff) {
    iVar9 = 1;
  }
  *(int *)(param_1 + 6) = iVar1;
  *(int *)((long)param_1 + 0x34) = iVar9;
  *(int *)(param_1 + 7) = iVar9 + -1;
  lVar2 = thunk_FUN_10054ec0c(iVar1 * 0x68,0);
  param_1[10] = lVar2;
  if (lVar2 != 0) {
    lVar2 = thunk_FUN_10054ec0c(*(int *)((long)param_1 + 0x34) << 3,0);
    param_1[8] = lVar2;
    if (lVar2 != 0) {
      _bzero((void *)param_1[10],(long)*(int *)(param_1 + 6) * 0x68);
      _bzero((void *)param_1[8],(long)*(int *)((long)param_1 + 0x34) << 3);
      param_1[9] = 0;
      uVar4 = *(uint *)(param_1 + 6);
      if (0 < (int)uVar4) {
        lVar3 = param_1[10];
        lVar2 = (ulong)uVar4 + 1;
        puVar5 = (undefined4 *)0x0;
        do {
          uVar4 = uVar4 - 1;
          puVar6 = (undefined4 *)(lVar3 + (ulong)uVar4 * 0x68);
          *puVar6 = 1;
          *(undefined4 **)(puVar6 + 0x18) = puVar5;
          lVar2 = lVar2 + -1;
          puVar5 = puVar6;
        } while (1 < lVar2);
        param_1[9] = lVar3;
      }
      uVar4 = (int)*(undefined8 *)((long)param_2 + 0x14) - 1;
      uVar16 = (int)((ulong)*(undefined8 *)((long)param_2 + 0x14) >> 0x20) - 1;
      uVar22 = uVar4 >> 1;
      uVar25 = uVar16 >> 1;
      bVar8 = (byte)uVar22 | (byte)uVar4;
      bVar11 = (byte)(uVar22 >> 8) | (byte)(uVar4 >> 8);
      bVar12 = (byte)(uVar22 >> 0x10) | (byte)(uVar4 >> 0x10);
      bVar14 = (byte)(uVar4 >> 0x18);
      bVar14 = bVar14 >> 1 | bVar14;
      uVar4 = CONCAT13(bVar14,CONCAT12(bVar12,CONCAT11(bVar11,bVar8)));
      bVar15 = (byte)uVar25 | (byte)uVar16;
      bVar17 = (byte)(uVar25 >> 8) | (byte)(uVar16 >> 8);
      bVar20 = (byte)(uVar16 >> 0x18);
      bVar18 = (byte)(uVar25 >> 0x10) | (byte)(uVar16 >> 0x10);
      bVar20 = bVar20 >> 1 | bVar20;
      uVar16 = uVar4 >> 2;
      uVar22 = (uint)(CONCAT17(bVar20,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar15,uVar4)))) >>
                     0x22);
      bVar8 = (byte)uVar16 | bVar8;
      bVar11 = (byte)(uVar16 >> 8) | bVar11;
      bVar12 = (byte)(uVar16 >> 0x10) | bVar12;
      bVar14 = bVar14 >> 2 | bVar14;
      uVar4 = CONCAT13(bVar14,CONCAT12(bVar12,CONCAT11(bVar11,bVar8)));
      bVar15 = (byte)uVar22 | bVar15;
      bVar17 = (byte)(uVar22 >> 8) | bVar17;
      bVar18 = (byte)(uVar22 >> 0x10) | bVar18;
      bVar20 = bVar20 >> 2 | bVar20;
      uVar16 = uVar4 >> 4;
      uVar22 = (uint)(CONCAT17(bVar20,CONCAT16(bVar18,CONCAT15(bVar17,CONCAT14(bVar15,uVar4)))) >>
                     0x24);
      bVar11 = (byte)(uVar16 >> 8) | bVar11;
      bVar12 = (byte)(uVar16 >> 0x10) | bVar12;
      bVar14 = bVar14 >> 4 | bVar14;
      bVar17 = (byte)(uVar22 >> 8) | bVar17;
      bVar18 = (byte)(uVar22 >> 0x10) | bVar18;
      bVar20 = bVar20 >> 4 | bVar20;
      bVar13 = bVar14 | bVar12;
      bVar19 = bVar20 | bVar18;
      iVar9 = CONCAT13(bVar14,CONCAT12(bVar13,CONCAT11(bVar14 | bVar12 | bVar11,
                                                       bVar13 | bVar11 | (byte)uVar16 | bVar8)));
      uVar4 = iVar9 + 1;
      uVar16 = (int)(CONCAT17(bVar20,CONCAT16(bVar19,CONCAT15(bVar20 | bVar18 | bVar17,
                                                              CONCAT14(bVar19 | bVar17 | (byte)
                                                  uVar22 | bVar15,iVar9)))) >> 0x20) + 1;
      uVar24 = CONCAT44(-(uint)(0xffff < uVar16),-(uint)(0xffff < uVar4)) & 0x1000000010;
      uVar10 = NEON_ushl(CONCAT44(uVar16,uVar4),CONCAT44(-(int)(uVar24 >> 0x20),-(int)uVar24),4);
      uVar26 = CONCAT44(-(uint)(0xff < (uint)((ulong)uVar10 >> 0x20)),-(uint)(0xff < (uint)uVar10))
               & 0x800000008;
      uVar10 = NEON_ushl(uVar10,CONCAT44(-(int)(uVar26 >> 0x20),-(int)uVar26),4);
      uVar27 = CONCAT44(-(uint)(0xf < (uint)((ulong)uVar10 >> 0x20)),-(uint)(0xf < (uint)uVar10)) &
               0x400000004;
      uVar10 = NEON_ushl(uVar10,CONCAT44(-(int)(uVar27 >> 0x20),-(int)uVar27),4);
      uVar28 = CONCAT44(-(uint)(3 < (uint)((ulong)uVar10 >> 0x20)),-(uint)(3 < (uint)uVar10)) &
               0x200000002;
      uVar10 = NEON_ushl(uVar10,CONCAT44(-(int)(uVar28 >> 0x20),-(int)uVar28),4);
      uVar4 = (uint)uVar10 >> 1;
      uVar16 = (uint)((ulong)uVar10 >> 0x21);
      iVar9 = CONCAT13((byte)((ulong)uVar10 >> 0x18) >> 1,
                       CONCAT12((char)(uVar4 >> 0x10),
                                CONCAT11((char)(uVar4 >> 8),
                                         (byte)uVar26 | (byte)uVar24 | (byte)uVar27 | (byte)uVar28 |
                                         (byte)uVar4)));
      uVar10 = CONCAT17((byte)((ulong)uVar10 >> 0x39),
                        CONCAT16((char)((uint3)((ulong)uVar10 >> 0x29) >> 8),
                                 CONCAT15((char)(uVar16 >> 8),
                                          CONCAT14((byte)(uVar26 >> 0x20) | (byte)(uVar24 >> 0x20) |
                                                   (byte)(uVar27 >> 0x20) | (byte)(uVar28 >> 0x20) |
                                                   (byte)uVar16,iVar9))));
      *(undefined8 *)((long)param_1 + 0x5c) = uVar10;
      uVar4 = 0x20 - (iVar9 + (int)((ulong)uVar10 >> 0x20));
      if (0x1e < uVar4) {
        uVar4 = 0x1f;
      }
      *(uint *)(param_1 + 0xb) = uVar4;
      uVar7 = 0x80000008;
      if (9 < uVar4) {
        uVar7 = 0x40000000;
      }
    }
  }
  return uVar7;
}




undefined8
FUN_10054f3f8(long param_1,int *param_2,uint param_3,uint param_4,uint param_5,uint *param_6)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined4 *puVar13;
  ulong uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  uint *puVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  undefined8 local_170 [32];
  long local_70;
  
  puVar20 = local_170;
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if (*param_2 == 0x444e4156) {
    uVar21 = 0x80000004;
    if (param_2[1] == 7) {
      iVar18 = param_2[2];
      iVar5 = param_2[3];
      lVar12 = FUN_100550b34(param_1,iVar18,iVar5,param_2[4]);
      if (lVar12 == 0) {
        if (param_5 == 0) {
          puVar17 = *(uint **)(param_1 + 0x48);
          if (puVar17 == (uint *)0x0) goto LAB_10054f494;
          *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(puVar17 + 0x18);
          puVar17[0x18] = 0;
          puVar17[0x19] = 0;
        }
        else {
          uVar3 = *(uint *)(param_1 + 0x5c);
          uVar6 = *(uint *)(param_1 + 0x60);
          uVar11 = param_5 >> (ulong)(uVar6 & 0x1f) & (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
          if (*(int *)(param_1 + 0x30) <= (int)uVar11) goto LAB_10054f494;
          puVar17 = (uint *)(*(long *)(param_1 + 0x50) + (long)(int)uVar11 * 0x68);
          puVar16 = (uint *)0x0;
          puVar19 = (uint *)(param_1 + 0x48);
          do {
            puVar15 = puVar16;
            puVar16 = *(uint **)puVar19;
            puVar19 = puVar16 + 0x18;
          } while (puVar16 != (uint *)0x0 && puVar16 != puVar17);
          if (puVar16 != puVar17) goto LAB_10054f494;
          puVar19 = (uint *)(param_1 + 0x48);
          if (puVar15 != (uint *)0x0) {
            puVar19 = puVar15 + 0x18;
          }
          *(undefined8 *)puVar19 =
               *(undefined8 *)(*(long *)(param_1 + 0x50) + (long)(int)uVar11 * 0x68 + 0x60);
          *puVar17 = param_5 >> (ulong)(uVar6 + uVar3 & 0x1f) &
                     (-1 << (ulong)(*(uint *)(param_1 + 0x58) & 0x1f) ^ 0xffffffffU);
        }
        uVar11 = *(uint *)(param_1 + 0x38) & iVar18 * -0x72594cbd + iVar5 * -0x27e9c7bf;
        lVar12 = *(long *)(param_1 + 0x40);
        *(undefined8 *)(puVar17 + 0x18) = *(undefined8 *)(lVar12 + (long)(int)uVar11 * 8);
        *(uint **)(lVar12 + (long)(int)uVar11 * 8) = puVar17;
        iVar18 = param_2[6];
        iVar7 = param_2[7];
        iVar5 = param_2[8];
        iVar8 = param_2[9];
        iVar4 = param_2[10];
        iVar9 = param_2[0xb];
        iVar10 = param_2[0xc];
        lVar12 = (long)(param_2 + 0x19) + (long)(iVar7 * 0xc);
        *(long *)(puVar17 + 4) = lVar12;
        *(int **)(puVar17 + 6) = param_2 + 0x19;
        lVar12 = lVar12 + (iVar18 << 5);
        lVar1 = lVar12 + iVar5 * 0xc;
        *(long *)(puVar17 + 8) = lVar12;
        *(long *)(puVar17 + 10) = lVar1;
        lVar1 = lVar1 + iVar8 * 0xc;
        lVar2 = lVar1 + iVar4 * 0xc;
        *(long *)(puVar17 + 0xc) = lVar1;
        *(long *)(puVar17 + 0xe) = lVar2;
        lVar2 = lVar2 + (iVar9 << 2);
        *(long *)(puVar17 + 0x10) = lVar2;
        *(long *)(puVar17 + 0x12) = lVar2 + (iVar10 << 4);
        if (iVar10 << 4 == 0) {
          puVar17[0x10] = 0;
          puVar17[0x11] = 0;
        }
        puVar17[1] = 0;
        *(undefined4 *)(lVar12 + (long)(int)(iVar5 - 1U) * 0xc + 4) = 0xffffffff;
        if (1 < iVar5) {
          uVar14 = 0;
          puVar13 = (undefined4 *)((long)param_2 + (long)(iVar18 << 5) + (long)(iVar7 * 0xc) + 0x68)
          ;
          do {
            uVar14 = uVar14 + 1;
            *puVar13 = (int)uVar14;
            puVar13 = puVar13 + 3;
          } while (iVar5 - 1U != uVar14);
        }
        *(int **)(puVar17 + 2) = param_2;
        *(int **)(puVar17 + 0x14) = param_2;
        puVar17[0x16] = param_3;
        puVar17[0x17] = param_4;
        FUN_1005501ac(param_1,puVar17);
        FUN_10055029c(param_1,puVar17);
        uVar11 = FUN_100550b98(param_1,param_2[2],param_2[3],local_170,0x20);
        if (0 < (int)uVar11) {
          uVar14 = (ulong)uVar11;
          do {
            puVar19 = (uint *)*puVar20;
            if (puVar19 != puVar17) {
              FUN_10054fb88(param_1,puVar17,puVar19,0xffffffff);
              FUN_10054fb88(param_1,puVar19,puVar17,0xffffffff);
            }
            FUN_10054fdd8(param_1,puVar17,puVar19,0xffffffff);
            FUN_10054fdd8(param_1,puVar19,puVar17,0xffffffff);
            puVar20 = puVar20 + 1;
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        iVar18 = 0;
        do {
          uVar11 = FUN_100550c08(param_1,param_2[2],param_2[3],iVar18,local_170,0x20);
          if (0 < (int)uVar11) {
            uVar3 = iVar18 + 4U & 7;
            uVar14 = (ulong)uVar11;
            puVar20 = local_170;
            do {
              uVar21 = *puVar20;
              FUN_10054fb88(param_1,puVar17,uVar21,iVar18);
              FUN_10054fb88(param_1,uVar21,puVar17,uVar3);
              FUN_10054fdd8(param_1,puVar17,uVar21,iVar18);
              FUN_10054fdd8(param_1,uVar21,puVar17,uVar3);
              uVar14 = uVar14 - 1;
              puVar20 = puVar20 + 1;
            } while (uVar14 != 0);
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 != 8);
        if (param_6 != (uint *)0x0) {
          *param_6 = (int)((ulong)((long)puVar17 - *(long *)(param_1 + 0x50)) >> 3) * -0x3b13b13b <<
                     (ulong)(*(uint *)(param_1 + 0x60) & 0x1f) |
                     *puVar17 <<
                     (ulong)(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60) & 0x1f);
        }
        uVar21 = 0x40000000;
      }
      else {
        uVar21 = 0x80000000;
      }
    }
    else {
      uVar21 = 0x80000002;
    }
  }
  else {
    uVar21 = 0x80000001;
  }
LAB_10054f494:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




int FUN_10054f800(long param_1,float *param_2,undefined8 param_3,int *param_4,ulong param_5,
                 long param_6,long param_7,int param_8)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  float *pfVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  long local_a8;
  
  local_a8 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_4 != (int *)0x0) {
    FUN_10054fad4(param_2,param_3,&local_b0,&local_b8);
    uVar2 = (uint)param_5 & 0xfffffffb;
    if ((param_5 & 0xfffffffb) == 0) {
LAB_10054f88c:
      fVar28 = *param_2;
    }
    else {
      fVar28 = 0.0;
      if (uVar2 == 2) {
        param_2 = param_2 + 2;
        goto LAB_10054f88c;
      }
    }
    lVar14 = *(long *)(param_4 + 2);
    if (0 < *(int *)(lVar14 + 0x18)) {
      lVar21 = 0;
      iVar20 = 0;
      lVar15 = *(long *)(param_1 + 0x50);
      iVar6 = *param_4;
      iVar4 = *(int *)(param_1 + 0x5c);
      uVar5 = *(uint *)(param_1 + 0x60);
      fVar29 = (fStack_b4 - fStack_ac) / (local_b8 - local_b0);
      do {
        lVar19 = *(long *)(param_4 + 4);
        uVar17 = (ulong)*(byte *)(lVar19 + lVar21 * 0x20 + 0x1e);
        if (uVar17 != 0) {
          uVar18 = 0;
          do {
            lVar1 = lVar19 + lVar21 * 0x20;
            if (((uint)param_5 & 0x7fff | 0x8000) == (uint)*(ushort *)(lVar1 + uVar18 * 2 + 0x10)) {
              lVar1 = lVar1 + 4;
              pfVar13 = (float *)(*(long *)(param_4 + 6) +
                                 (ulong)*(ushort *)(lVar1 + uVar18 * 2) * 0xc);
              uVar3 = 0;
              if (uVar18 + 1 != uVar17) {
                uVar3 = uVar18 + 1 & 0xffffffff;
              }
              pfVar16 = pfVar13;
              if ((param_5 & 0xfffffffb) == 0) {
LAB_10054f97c:
                fVar22 = *pfVar16;
              }
              else {
                fVar22 = 0.0;
                if (uVar2 == 2) {
                  pfVar16 = pfVar13 + 2;
                  goto LAB_10054f97c;
                }
              }
              if (ABS(fVar28 - fVar22) <= 0.01) {
                FUN_10054fad4(pfVar13,*(long *)(param_4 + 6) +
                                      (ulong)*(ushort *)(lVar1 + uVar3 * 2) * 0xc,&local_c0,
                              &local_c8,param_5);
                lVar14 = *(long *)(param_4 + 2);
                fVar22 = local_b0 + 0.01;
                if (local_b0 + 0.01 <= local_c0 + 0.01) {
                  fVar22 = local_c0 + 0.01;
                }
                fVar24 = (float)NEON_fminnm(local_b8 + -0.01,local_c8 + -0.01);
                if (fVar22 <= fVar24) {
                  fVar26 = (local_c4 - local_bc) / (local_c8 - local_c0);
                  fVar27 = fVar26 - fVar29;
                  fVar26 = (local_bc - local_c0 * fVar26) + (fVar29 * local_b0 - fStack_ac);
                  fVar22 = fVar26 + fVar22 * fVar27;
                  fVar26 = fVar26 + fVar24 * fVar27;
                  fVar25 = *(float *)(lVar14 + 0x44) + *(float *)(lVar14 + 0x44);
                  fVar25 = fVar25 * fVar25;
                  fVar24 = fVar22 * fVar22;
                  fVar27 = fVar26 * fVar26;
                  bVar7 = false;
                  bVar9 = true;
                  bVar11 = false;
                  if (0.0 <= fVar22 * fVar26) {
                    bVar7 = false;
                    bVar9 = false;
                    bVar11 = true;
                    if (!NAN(fVar24) && !NAN(fVar25)) {
                      bVar7 = fVar24 < fVar25;
                      bVar9 = fVar24 == fVar25;
                      bVar11 = false;
                    }
                  }
                  bVar8 = false;
                  bVar10 = true;
                  bVar12 = false;
                  if (!bVar9 && bVar7 == bVar11) {
                    bVar8 = false;
                    bVar10 = false;
                    bVar12 = true;
                    if (!NAN(fVar27) && !NAN(fVar25)) {
                      bVar8 = fVar27 < fVar25;
                      bVar10 = fVar27 == fVar25;
                      bVar12 = false;
                    }
                  }
                  if (bVar10 || bVar8 != bVar12) {
                    if (iVar20 < param_8) {
                      *(float *)(param_7 + (long)(iVar20 << 1) * 4) = local_b0;
                      uVar23 = NEON_fminnm(local_b8,local_c8);
                      *(undefined4 *)(param_7 + (long)iVar20 * 8 + 4) = uVar23;
                      *(uint *)(param_6 + (long)iVar20 * 4) =
                           (int)((ulong)((long)param_4 - lVar15) >> 3) * -0x3b13b13b <<
                           (ulong)(uVar5 & 0x1f) | iVar6 << (ulong)(iVar4 + uVar5 & 0x1f) |
                           (uint)lVar21;
                      iVar20 = iVar20 + 1;
                    }
                    break;
                  }
                }
              }
            }
            uVar18 = uVar18 + 1;
          } while (uVar18 != uVar17);
        }
        lVar21 = lVar21 + 1;
      } while (lVar21 < *(int *)(lVar14 + 0x18));
      goto LAB_10054fa84;
    }
  }
  iVar20 = 0;
LAB_10054fa84:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_a8) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar20;
}




void FUN_10054fad4(float *param_1,float *param_2,undefined4 *param_3,float *param_4,uint param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = param_1;
  if ((param_5 & 0xfffffffb) == 2) {
    uVar3 = NEON_fminnm(*param_1,*param_2);
    pfVar2 = param_2;
    if (*param_2 <= *param_1) {
      pfVar1 = param_2;
      pfVar2 = param_1;
      param_2 = param_1;
    }
  }
  else {
    if ((param_5 & 0xfffffffb) != 0) {
      return;
    }
    fVar4 = param_1[2];
    fVar5 = param_2[2];
    uVar3 = NEON_fminnm(fVar4,fVar5);
    pfVar2 = param_2 + 2;
    if (fVar5 <= fVar4) {
      pfVar1 = param_2;
      pfVar2 = param_1 + 2;
      param_2 = param_1;
    }
  }
  *param_3 = uVar3;
  param_3[1] = pfVar1[1];
  *param_4 = *pfVar2;
  param_4[1] = param_2[1];
  return;
}




uint FUN_10054fb48(long param_1,int *param_2)

{
  if (param_2 != (int *)0x0) {
    return (int)((ulong)((long)param_2 - *(long *)(param_1 + 0x50)) >> 3) * -0x3b13b13b <<
           (ulong)(*(uint *)(param_1 + 0x60) & 0x1f) |
           *param_2 << (ulong)(*(int *)(param_1 + 0x5c) + *(uint *)(param_1 + 0x60) & 0x1f);
  }
  return 0;
}




void FUN_10054fb88(undefined8 param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  long lVar4;
  undefined4 *puVar5;
  float *pfVar6;
  ulong uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ulong uVar10;
  ulong uVar11;
  float *pfVar12;
  float *pfVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  undefined1 local_a8 [4];
  float local_a4 [7];
  undefined4 local_88 [4];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_2 != 0) && (lVar4 = *(long *)(param_2 + 8), 0 < *(int *)(lVar4 + 0x18))) {
    lVar14 = 0;
    do {
      lVar15 = *(long *)(param_2 + 0x10);
      puVar1 = (uint *)(lVar15 + lVar14 * 0x20);
      uVar11 = (ulong)*(byte *)((long)puVar1 + 0x1e);
      if (uVar11 != 0) {
        uVar10 = 0;
        do {
          uVar2 = *(ushort *)(lVar15 + lVar14 * 0x20 + uVar10 * 2 + 0x10);
          if (((short)uVar2 < 0) && ((param_4 == 0xffffffff || ((uVar2 & 0xff) == param_4)))) {
            lVar4 = lVar15 + lVar14 * 0x20 + 4;
            pfVar12 = (float *)(*(long *)(param_2 + 0x18) +
                               (ulong)*(ushort *)(lVar4 + uVar10 * 2) * 0xc);
            uVar7 = 0;
            if (uVar10 + 1 != uVar11) {
              uVar7 = uVar10 + 1 & 0xffffffff;
            }
            pfVar13 = (float *)(*(long *)(param_2 + 0x18) +
                               (ulong)*(ushort *)(lVar4 + uVar7 * 2) * 0xc);
            uVar3 = FUN_10054f800(param_1,pfVar12,pfVar13,param_3,uVar2 + 4 & 7,local_88,local_a8,4)
            ;
            if (0 < (int)uVar3) {
              uVar8 = *(uint *)(param_2 + 4);
              puVar5 = local_88;
              uVar7 = (ulong)uVar3;
              pfVar6 = local_a4;
              do {
                if (uVar8 == 0xffffffff) {
                  uVar3 = 0xffffffff;
                }
                else {
                  lVar4 = *(long *)(param_2 + 0x20);
                  puVar9 = (undefined4 *)(lVar4 + (ulong)uVar8 * 0xc);
                  uVar3 = puVar9[1];
                  *(uint *)(param_2 + 4) = uVar3;
                  *puVar9 = *puVar5;
                  *(char *)(puVar9 + 2) = (char)uVar10;
                  *(char *)((long)puVar9 + 9) = (char)uVar2;
                  puVar9[1] = *puVar1;
                  *puVar1 = uVar8;
                  if ((uVar2 & 0xfb) == 2) {
                    fVar17 = *pfVar12;
                    fVar16 = pfVar6[-1] - fVar17;
                    fVar19 = *pfVar13;
                  }
                  else {
                    if ((uVar2 & 0xfb) != 0) goto LAB_10054fd60;
                    fVar17 = pfVar12[2];
                    fVar16 = pfVar6[-1] - fVar17;
                    fVar19 = pfVar13[2];
                  }
                  fVar16 = fVar16 / (fVar19 - fVar17);
                  fVar17 = (*pfVar6 - fVar17) / (fVar19 - fVar17);
                  uVar18 = NEON_fminnm(fVar16,fVar17);
                  if (fVar16 <= fVar17) {
                    fVar16 = fVar17;
                  }
                  fVar17 = (float)NEON_fminnm(uVar18,0x3f800000);
                  if (fVar17 <= 0.0) {
                    fVar17 = 0.0;
                  }
                  lVar4 = lVar4 + (ulong)uVar8 * 0xc;
                  *(char *)(lVar4 + 10) = (char)(int)(fVar17 * 255.0);
                  fVar16 = (float)NEON_fminnm(fVar16,0x3f800000);
                  if (fVar16 <= 0.0) {
                    fVar16 = 0.0;
                  }
                  *(char *)(lVar4 + 0xb) = (char)(int)(fVar16 * 255.0);
                }
LAB_10054fd60:
                uVar8 = uVar3;
                puVar5 = puVar5 + 1;
                pfVar6 = pfVar6 + 2;
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 != uVar11);
        lVar4 = *(long *)(param_2 + 8);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)(lVar4 + 0x18));
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_10054fdd8(long param_1,long param_2,int *param_3,int param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  long lVar8;
  float *pfVar9;
  uint *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_2 != 0) {
    uVar3 = param_4 + 4U & 7;
    if (param_4 == -1) {
      uVar3 = 0xffffffff;
    }
    lVar8 = *(long *)(param_3 + 2);
    if (0 < *(int *)(lVar8 + 0x34)) {
      lVar13 = 0;
      lVar14 = 0;
      do {
        lVar15 = *(long *)(param_3 + 0x12);
        lVar1 = lVar15 + lVar13;
        if ((uint)*(byte *)(lVar1 + 0x1f) == (uVar3 & 0xff)) {
          lVar12 = *(long *)(param_3 + 4);
          uVar6 = *(ushort *)(lVar1 + 0x1c);
          puVar11 = (uint *)(lVar12 + (ulong)uVar6 * 0x20);
          if (*puVar11 != 0xffffffff) {
            lVar2 = lVar15 + lVar13;
            local_74 = *(undefined4 *)(lVar2 + 0x18);
            uStack_70 = *(undefined4 *)(lVar8 + 0x44);
            local_6c = local_74;
            uVar7 = FUN_100550034(param_1,param_2,(float *)(lVar2 + 0xc),&local_74,&local_80);
            if ((uVar7 != 0) &&
               (fVar16 = local_80 - *(float *)(lVar2 + 0xc),
               fVar17 = local_78 - *(float *)(lVar2 + 0x14),
               fVar16 * fVar16 + fVar17 * fVar17 <=
               *(float *)(lVar2 + 0x18) * *(float *)(lVar2 + 0x18))) {
              pfVar9 = (float *)(*(long *)(param_3 + 6) +
                                (ulong)*(ushort *)(lVar12 + (ulong)uVar6 * 0x20 + 6) * 0xc);
              *pfVar9 = local_80;
              pfVar9[1] = local_7c;
              pfVar9[2] = local_78;
              uVar5 = param_3[1];
              if (uVar5 != 0xffffffff) {
                puVar10 = (uint *)(*(long *)(param_3 + 8) + (ulong)uVar5 * 0xc);
                param_3[1] = puVar10[1];
                *puVar10 = uVar7;
                *(undefined1 *)(puVar10 + 2) = 1;
                *(char *)((long)puVar10 + 9) = (char)uVar3;
                *(undefined2 *)((long)puVar10 + 10) = 0;
                puVar10[1] = *puVar11;
                *puVar11 = uVar5;
              }
              if ((*(byte *)(lVar15 + lVar13 + 0x1e) & 1) != 0) {
                uVar5 = *(uint *)(param_2 + 4);
                if (uVar5 != 0xffffffff) {
                  puVar11 = (uint *)(*(long *)(param_2 + 0x20) + (ulong)uVar5 * 0xc);
                  *(uint *)(param_2 + 4) = puVar11[1];
                  uVar4 = *(uint *)(param_1 + 0x60);
                  lVar15 = *(long *)(param_2 + 0x10);
                  *puVar11 = *param_3 << (ulong)(*(int *)(param_1 + 0x5c) + uVar4 & 0x1f) |
                             (uint)*(ushort *)(lVar1 + 0x1c) |
                             (int)((ulong)((long)param_3 - *(long *)(param_1 + 0x50)) >> 3) *
                             -0x3b13b13b << (ulong)(uVar4 & 0x1f);
                  *(undefined1 *)(puVar11 + 2) = 0xff;
                  *(char *)((long)puVar11 + 9) = (char)param_4;
                  *(undefined2 *)((long)puVar11 + 10) = 0;
                  lVar8 = (ulong)(uVar7 & (-1 << (ulong)(uVar4 & 0x1f) ^ 0xffffffffU) & 0xffff) *
                          0x20;
                  puVar11[1] = *(uint *)(lVar15 + lVar8);
                  *(uint *)(lVar15 + lVar8) = uVar5;
                }
              }
            }
            lVar8 = *(long *)(param_3 + 2);
          }
        }
        lVar14 = lVar14 + 1;
        lVar13 = lVar13 + 0x24;
      } while (lVar14 < *(int *)(lVar8 + 0x34));
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

