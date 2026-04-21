// functions/00edb — 8 functions
#include "libGameKindred.h"




void FUN_00edb018(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)param_1[0x4c];
  *puVar1 = FUN_00edaa64;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 1;
  (**(code **)(*param_1 + 0x20))();
  (**(code **)param_1[0x4d])(param_1);
  param_1[0x18] = 0;
  return;
}




void FUN_00edb070(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  void *__dest;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  
  iVar8 = (int)param_1[0x38];
  if (iVar8 == 1) {
    lVar11 = param_1[0x39];
    *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(lVar11 + 0x1c);
    uVar1 = *(uint *)(lVar11 + 0x20);
    *(uint *)((long)param_1 + 0x1ec) = uVar1;
    uVar2 = *(uint *)(lVar11 + 0xc);
    *(undefined8 *)(lVar11 + 0x38) = 0x100000001;
    uVar9 = 1;
    *(undefined4 *)(lVar11 + 0x40) = 1;
    *(undefined4 *)(lVar11 + 0x44) = *(undefined4 *)(lVar11 + 0x24);
    uVar5 = 0;
    if (uVar2 != 0) {
      uVar5 = uVar1 / uVar2;
    }
    uVar1 = uVar1 - uVar5 * uVar2;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    *(undefined4 *)(lVar11 + 0x48) = 1;
    *(uint *)(lVar11 + 0x4c) = uVar2;
    param_1[0x3e] = 1;
  }
  else {
    if (3 < iVar8 - 1U) {
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + 0x28) = 0x1b;
      *(int *)(lVar11 + 0x2c) = iVar8;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
    }
    uVar7 = FUN_00ee123c((int)param_1[6],
                         (long)*(int *)((long)param_1 + 0x22c) * (long)(int)param_1[0x34]);
    *(undefined4 *)(param_1 + 0x3d) = uVar7;
    uVar7 = FUN_00ee123c(*(undefined4 *)((long)param_1 + 0x34),
                         (long)*(int *)((long)param_1 + 0x22c) *
                         (long)*(int *)((long)param_1 + 0x1a4));
    *(undefined4 *)((long)param_1 + 0x1ec) = uVar7;
    *(undefined4 *)(param_1 + 0x3e) = 0;
    if ((int)param_1[0x38] < 1) goto LAB_00edb2a8;
    iVar8 = 0;
    lVar11 = 0;
    while( true ) {
      lVar13 = param_1[lVar11 + 0x39];
      uVar2 = *(uint *)(lVar13 + 8);
      uVar1 = *(uint *)(lVar13 + 0xc);
      iVar4 = uVar1 * uVar2;
      *(int *)(lVar13 + 0x40) = iVar4;
      *(uint *)(lVar13 + 0x44) = *(int *)(lVar13 + 0x24) * uVar2;
      uVar5 = 0;
      if (uVar2 != 0) {
        uVar5 = *(uint *)(lVar13 + 0x1c) / uVar2;
      }
      uVar5 = *(uint *)(lVar13 + 0x1c) - uVar5 * uVar2;
      uVar6 = 0;
      if (uVar1 != 0) {
        uVar6 = *(uint *)(lVar13 + 0x20) / uVar1;
      }
      uVar3 = *(uint *)(lVar13 + 0x20) - uVar6 * uVar1;
      uVar6 = uVar2;
      if (uVar5 != 0) {
        uVar6 = uVar5;
      }
      uVar5 = uVar1;
      if (uVar3 != 0) {
        uVar5 = uVar3;
      }
      *(uint *)(lVar13 + 0x38) = uVar2;
      *(uint *)(lVar13 + 0x3c) = uVar1;
      *(uint *)(lVar13 + 0x48) = uVar6;
      *(uint *)(lVar13 + 0x4c) = uVar5;
      if (10 < iVar4 + iVar8) {
        puVar10 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar10 + 5) = 0xe;
        (*(code *)*puVar10)(param_1);
      }
      if (0 < iVar4) {
        iVar8 = uVar1 * uVar2 + 1;
        do {
          lVar13 = param_1[0x3e];
          iVar8 = iVar8 + -1;
          *(int *)(param_1 + 0x3e) = (int)lVar13 + 1;
          *(int *)((long)param_1 + (long)(int)lVar13 * 4 + 500) = (int)lVar11;
        } while (1 < iVar8);
      }
      uVar9 = (ulong)(int)param_1[0x38];
      lVar11 = lVar11 + 1;
      if ((long)uVar9 <= lVar11) break;
      iVar8 = (int)param_1[0x3e];
    }
    if ((int)param_1[0x38] < 1) goto LAB_00edb2a8;
  }
  lVar11 = 0;
  do {
    lVar13 = param_1[lVar11 + 0x39];
    if (*(long *)(lVar13 + 0x50) == 0) {
      uVar2 = *(uint *)(lVar13 + 0x10);
      if ((3 < uVar2) || (param_1[(long)(int)uVar2 + 0x19] == 0)) {
        lVar12 = *param_1;
        *(undefined4 *)(lVar12 + 0x28) = 0x36;
        *(uint *)(lVar12 + 0x2c) = uVar2;
        (**(code **)*param_1)(param_1);
      }
      __dest = (void *)(**(code **)param_1[1])(param_1,1,0x84);
      memcpy(__dest,(void *)param_1[(long)(int)uVar2 + 0x19],0x84);
      *(void **)(lVar13 + 0x50) = __dest;
      uVar9 = (ulong)*(uint *)(param_1 + 0x38);
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 < (int)uVar9);
LAB_00edb2a8:
  (**(code **)param_1[0x4e])(param_1);
  (**(code **)param_1[0x4a])(param_1);
  *(undefined8 *)param_1[0x4c] = *(undefined8 *)(param_1[0x4a] + 8);
  return;
}




void FUN_00edb2f0(long param_1)

{
  **(undefined8 **)(param_1 + 0x260) = FUN_00edaa64;
  return;
}




undefined8 FUN_00edb304(long *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = *param_1;
  uVar5 = *(uint *)((long)param_1 + 0x23c);
  *(undefined4 *)(lVar3 + 0x28) = 0x7c;
  *(uint *)(lVar3 + 0x2c) = uVar5;
  *(int *)(*param_1 + 0x30) = param_2;
  (**(code **)(*param_1 + 8))(param_1,0xffffffff);
  do {
    iVar4 = 1;
    if (uVar5 == (param_2 + 6U & 7 | 0xd0)) {
      iVar4 = 2;
    }
    while( true ) {
      lVar3 = *param_1;
      iVar6 = 2;
      if (0xbf < (int)uVar5) {
        iVar6 = 3;
      }
      *(undefined4 *)(lVar3 + 0x28) = 99;
      *(uint *)(lVar3 + 0x2c) = uVar5;
      iVar1 = 2;
      if (uVar5 != (param_2 - 1U & 7 | 0xd0)) {
        iVar1 = iVar4;
      }
      if (0xbf < (int)uVar5 &&
          (((uVar5 & 0xfffffff8) == 0xd0 && uVar5 != (param_2 + 1U & 7 | 0xd0)) &&
          uVar5 != (param_2 + 2U & 7 | 0xd0))) {
        iVar6 = iVar1;
      }
      *(int *)(*param_1 + 0x30) = iVar6;
      (**(code **)(*param_1 + 8))(param_1,4);
      if (iVar6 == 3) {
        return 1;
      }
      if (iVar6 == 2) break;
      if (iVar6 == 1) {
        *(undefined4 *)((long)param_1 + 0x23c) = 0;
        return 1;
      }
    }
    uVar2 = FUN_00edb46c(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    uVar5 = *(uint *)((long)param_1 + 0x23c);
  } while( true );
}




undefined8 FUN_00edb46c(long *param_1)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  byte *pbVar6;
  byte *pbVar8;
  long lVar9;
  byte *pbVar7;
  
  puVar5 = (undefined8 *)param_1[5];
  lVar9 = puVar5[1];
  pbVar7 = (byte *)*puVar5;
  do {
    if (lVar9 == 0) {
      uVar3 = (*(code *)puVar5[3])(param_1);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      pbVar7 = (byte *)*puVar5;
      lVar9 = puVar5[1];
    }
    pbVar6 = pbVar7 + 1;
    lVar9 = lVar9 + -1;
    pbVar8 = pbVar6;
    if (*pbVar7 == 0xff) {
      do {
        if (lVar9 == 0) {
          uVar3 = (*(code *)puVar5[3])(param_1);
          if ((int)uVar3 == 0) {
            return uVar3;
          }
          pbVar8 = (byte *)*puVar5;
          lVar9 = puVar5[1];
        }
        pbVar6 = pbVar8 + 1;
        bVar2 = *pbVar8;
        lVar9 = lVar9 + -1;
        pbVar8 = pbVar6;
      } while (bVar2 == 0xff);
      iVar1 = *(int *)(param_1[0x4d] + 0x24);
      if (bVar2 != 0) {
        if (iVar1 != 0) {
          lVar4 = *param_1;
          *(undefined4 *)(lVar4 + 0x28) = 0x77;
          *(int *)(lVar4 + 0x2c) = iVar1;
          *(uint *)(*param_1 + 0x30) = (uint)bVar2;
          (**(code **)(*param_1 + 8))(param_1,0xffffffff);
          *(undefined4 *)(param_1[0x4d] + 0x24) = 0;
        }
        *(uint *)((long)param_1 + 0x23c) = (uint)bVar2;
        *puVar5 = pbVar6;
        puVar5[1] = lVar9;
        return 1;
      }
      *(int *)(param_1[0x4d] + 0x24) = iVar1 + 2;
    }
    else {
      *(int *)(param_1[0x4d] + 0x24) = *(int *)(param_1[0x4d] + 0x24) + 1;
    }
    *puVar5 = pbVar6;
    puVar5[1] = lVar9;
    pbVar7 = pbVar6;
  } while( true );
}




void FUN_00edb564(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  puVar2 = (undefined8 *)(*(code *)**(undefined8 **)(param_1 + 8))(param_1,0,0x108);
  *(undefined8 **)(param_1 + 0x268) = puVar2;
  *puVar2 = FUN_00edb624;
  lVar3 = 0;
  puVar2[5] = FUN_00edca98;
  puVar2[2] = FUN_00edc9fc;
  puVar2[1] = FUN_00edb644;
  *(undefined4 *)(puVar2 + 0x16) = 0;
  puVar4 = puVar2 + 6;
  do {
    lVar1 = lVar3 + 0xb4;
    lVar3 = lVar3 + 8;
    puVar4[1] = FUN_00edca98;
    *puVar4 = FUN_00edca98;
    *(undefined8 *)((long)puVar2 + lVar1) = 0;
    puVar4 = puVar4 + 2;
  } while (lVar3 != 0x40);
  puVar2[6] = FUN_00edcb88;
  puVar2[0x14] = FUN_00edcb88;
  lVar3 = *(long *)(param_1 + 0x268);
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x23c) = 0;
  *(undefined8 *)(lVar3 + 0x18) = 0;
  *(undefined4 *)(lVar3 + 0x24) = 0;
  *(undefined8 *)(lVar3 + 0xf8) = 0;
  return;
}




void FUN_00edb624(long param_1)

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




void FUN_00edb644(long *param_1)

{
  long *plVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ushort uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  int *piVar18;
  ulong uVar19;
  code *pcVar20;
  uint *puVar21;
  undefined4 uVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  long lVar26;
  undefined8 *puVar27;
  byte *pbVar28;
  byte *pbVar29;
  long *plVar30;
  uint uVar31;
  undefined1 *puVar32;
  undefined1 *puVar33;
  long lVar34;
  byte *pbVar35;
  uint uVar36;
  long lVar37;
  undefined4 *puVar38;
  byte local_194 [256];
  byte local_94 [36];
  
  lVar6 = tpidr_el0;
  lVar14 = *(long *)(lVar6 + 0x28);
  uVar31 = *(uint *)((long)param_1 + 0x23c);
  if (uVar31 != 0) goto LAB_00edb760;
  do {
    if (*(int *)(param_1[0x4d] + 0x18) == 0) {
      puVar27 = (undefined8 *)param_1[5];
      lVar16 = puVar27[1];
      if (lVar16 == 0) {
        uVar10 = (*(code *)puVar27[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        lVar16 = puVar27[1];
      }
      lVar16 = lVar16 + -1;
      pbVar35 = (byte *)*puVar27 + 1;
      bVar2 = *(byte *)*puVar27;
      if (lVar16 == 0) {
        uVar10 = (*(code *)puVar27[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        pbVar35 = (byte *)*puVar27;
        lVar16 = puVar27[1];
      }
      uVar31 = (uint)*pbVar35;
      uVar36 = (uint)bVar2;
      if ((uVar36 != 0xff) || (uVar31 != 0xd8)) {
        lVar15 = *param_1;
        *(undefined4 *)(lVar15 + 0x28) = 0x37;
        *(uint *)(lVar15 + 0x2c) = uVar36;
        *(uint *)(*param_1 + 0x30) = uVar31;
        (**(code **)*param_1)(param_1);
      }
      *(uint *)((long)param_1 + 0x23c) = uVar31;
      *puVar27 = pbVar35 + 1;
      puVar27[1] = lVar16 + -1;
    }
    else {
      uVar10 = FUN_00edb46c(param_1);
      if ((int)uVar10 == 0) goto LAB_00edc9bc;
      uVar31 = *(uint *)((long)param_1 + 0x23c);
    }
LAB_00edb760:
    switch(uVar31) {
    case 0xc0:
      uVar10 = 1;
      goto LAB_00edbeb4;
    case 0xc1:
      uVar10 = 0;
LAB_00edbeb4:
      uVar11 = 0;
LAB_00edbeb8:
      uVar12 = 0;
      goto LAB_00edbebc;
    case 0xc2:
      uVar11 = 1;
      uVar10 = 0;
      goto LAB_00edbeb8;
    case 0xc3:
    case 0xc5:
    case 0xc6:
    case 199:
    case 200:
    case 0xcb:
    case 0xcd:
    case 0xce:
    case 0xcf:
      lVar16 = *param_1;
      uVar22 = 0x3f;
      goto LAB_00edb7a0;
    case 0xc4:
      plVar30 = (long *)param_1[5];
      lVar16 = plVar30[1];
      if (lVar16 != 0) {
LAB_00edb944:
        lVar16 = lVar16 + -1;
        puVar32 = (undefined1 *)*plVar30 + 1;
        uVar3 = *(undefined1 *)*plVar30;
        if (lVar16 == 0) {
          iVar9 = (*(code *)plVar30[3])(param_1);
          if (iVar9 == 0) goto LAB_00edc64c;
          puVar32 = (undefined1 *)*plVar30;
          lVar16 = plVar30[1];
        }
        pbVar35 = puVar32 + 1;
        lVar16 = lVar16 + -1;
        uVar19 = (ulong)CONCAT11(uVar3,*puVar32);
        lVar15 = uVar19 - 2;
        if (0x12 < uVar19) {
          do {
            if (lVar16 == 0) {
              iVar9 = (*(code *)plVar30[3])(param_1);
              if (iVar9 == 0) goto LAB_00edc64c;
              pbVar35 = (byte *)*plVar30;
              lVar16 = plVar30[1];
            }
            bVar2 = *pbVar35;
            lVar26 = *param_1;
            *(undefined4 *)(lVar26 + 0x28) = 0x52;
            *(uint *)(lVar26 + 0x2c) = (uint)bVar2;
            (**(code **)(*param_1 + 8))(param_1,1);
            uVar19 = 0;
            lVar16 = lVar16 + -1;
            uVar25 = 1;
            local_94[0] = 0;
            pbVar28 = pbVar35 + 1;
            do {
              if (lVar16 == 0) {
                iVar9 = (*(code *)plVar30[3])(param_1);
                if (iVar9 == 0) goto LAB_00edc64c;
                pbVar28 = (byte *)*plVar30;
                lVar16 = plVar30[1];
              }
              pbVar35 = pbVar28 + 1;
              bVar5 = *pbVar28;
              lVar16 = lVar16 + -1;
              local_94[uVar25] = bVar5;
              uVar25 = uVar25 + 1;
              uVar19 = (ulong)bVar5 + (uVar19 & 0xffffffff);
              pbVar28 = pbVar35;
            } while (uVar25 < 0x11);
            lVar26 = *param_1;
            *(uint *)(lVar26 + 0x2c) = (uint)local_94[1];
            *(uint *)(lVar26 + 0x30) = (uint)local_94[2];
            *(uint *)(lVar26 + 0x34) = (uint)local_94[3];
            *(uint *)(lVar26 + 0x38) = (uint)local_94[4];
            *(uint *)(lVar26 + 0x3c) = (uint)local_94[5];
            *(uint *)(lVar26 + 0x40) = (uint)local_94[6];
            *(uint *)(lVar26 + 0x44) = (uint)local_94[7];
            *(undefined4 *)(lVar26 + 0x28) = 0x58;
            *(uint *)(lVar26 + 0x48) = (uint)local_94[8];
            (**(code **)(lVar26 + 8))(param_1,2);
            lVar26 = *param_1;
            *(undefined4 *)(lVar26 + 0x28) = 0x58;
            *(uint *)(lVar26 + 0x2c) = (uint)local_94[9];
            *(uint *)(lVar26 + 0x30) = (uint)local_94[10];
            *(uint *)(lVar26 + 0x34) = (uint)local_94[0xb];
            *(uint *)(lVar26 + 0x38) = (uint)local_94[0xc];
            *(uint *)(lVar26 + 0x3c) = (uint)local_94[0xd];
            *(uint *)(lVar26 + 0x40) = (uint)local_94[0xe];
            *(uint *)(lVar26 + 0x44) = (uint)local_94[0xf];
            *(uint *)(lVar26 + 0x48) = (uint)local_94[0x10];
            (**(code **)(lVar26 + 8))(param_1,2);
            if ((0x100 < (uint)uVar19) || (lVar15 + -0x11 < (long)uVar19)) {
              puVar27 = (undefined8 *)*param_1;
              *(undefined4 *)(puVar27 + 5) = 9;
              (*(code *)*puVar27)(param_1);
            }
            if ((uint)uVar19 != 0) {
              uVar25 = 0;
              do {
                if (lVar16 == 0) {
                  iVar9 = (*(code *)plVar30[3])(param_1);
                  if (iVar9 == 0) goto LAB_00edc64c;
                  pbVar28 = (byte *)*plVar30;
                  lVar16 = plVar30[1];
                }
                pbVar35 = pbVar28 + 1;
                lVar16 = lVar16 + -1;
                local_194[uVar25] = *pbVar28;
                uVar25 = uVar25 + 1;
                pbVar28 = pbVar35;
              } while (uVar25 < uVar19);
            }
            uVar31 = (uint)bVar2;
            lVar26 = (ulong)(uint)bVar2 + 0x1d;
            if ((bVar2 & 0x10) != 0) {
              uVar31 = bVar2 - 0x10;
              lVar26 = (ulong)bVar2 + 0x11;
            }
            plVar1 = param_1 + lVar26;
            if (3 < uVar31) {
              lVar26 = *param_1;
              *(undefined4 *)(lVar26 + 0x28) = 0x1f;
              *(uint *)(lVar26 + 0x2c) = uVar31;
              (**(code **)*param_1)(param_1);
            }
            puVar27 = (undefined8 *)*plVar1;
            lVar15 = (lVar15 + -0x11) - uVar19;
            if (puVar27 == (undefined8 *)0x0) {
              puVar27 = (undefined8 *)FUN_00ee24e4(param_1);
              *plVar1 = (long)puVar27;
            }
            *(byte *)(puVar27 + 2) = local_94[0x10];
            puVar27[1] = CONCAT17(local_94[0xf],
                                  CONCAT16(local_94[0xe],
                                           CONCAT15(local_94[0xd],
                                                    CONCAT14(local_94[0xc],
                                                             CONCAT13(local_94[0xb],
                                                                      CONCAT12(local_94[10],
                                                                               CONCAT11(local_94[9],
                                                                                        local_94[8])
                                                                              ))))));
            *puVar27 = CONCAT17(local_94[7],
                                CONCAT16(local_94[6],
                                         CONCAT15(local_94[5],
                                                  CONCAT14(local_94[4],
                                                           CONCAT13(local_94[3],
                                                                    CONCAT12(local_94[2],
                                                                             CONCAT11(local_94[1],
                                                                                      local_94[0])))
                                                          ))));
            memcpy((void *)(*plVar1 + 0x11),local_194,0x100);
          } while (0x10 < lVar15);
        }
        if (lVar15 != 0) goto LAB_00edbe84;
        goto LAB_00edbe9c;
      }
      iVar9 = (*(code *)plVar30[3])(param_1);
      if (iVar9 != 0) {
        lVar16 = plVar30[1];
        goto LAB_00edb944;
      }
LAB_00edc64c:
      uVar10 = 0;
      goto LAB_00edc9bc;
    case 0xc9:
      uVar12 = 1;
      uVar10 = 0;
      uVar11 = 0;
      goto LAB_00edbebc;
    case 0xca:
      uVar11 = 1;
      uVar12 = 1;
      uVar10 = 0;
LAB_00edbebc:
      uVar10 = FUN_00edd0ac(param_1,uVar10,uVar11,uVar12);
      iVar9 = (int)uVar10;
joined_r0x00edb790:
      if (iVar9 == 0) goto LAB_00edc9bc;
      break;
    case 0xcc:
      plVar30 = (long *)param_1[5];
      lVar16 = plVar30[1];
      if (lVar16 == 0) {
        uVar10 = (*(code *)plVar30[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        lVar16 = plVar30[1];
      }
      lVar16 = lVar16 + -1;
      puVar32 = (undefined1 *)*plVar30 + 1;
      uVar3 = *(undefined1 *)*plVar30;
      if (lVar16 == 0) {
        uVar10 = (*(code *)plVar30[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        puVar32 = (undefined1 *)*plVar30;
        lVar16 = plVar30[1];
      }
      pbVar35 = puVar32 + 1;
      lVar16 = lVar16 + -1;
      uVar19 = (ulong)CONCAT11(uVar3,*puVar32);
      if (2 < uVar19) {
        do {
          if (lVar16 == 0) {
            uVar10 = (*(code *)plVar30[3])(param_1);
            if ((int)uVar10 == 0) goto LAB_00edc9bc;
            pbVar35 = (byte *)*plVar30;
            lVar16 = plVar30[1];
          }
          pbVar28 = pbVar35 + 1;
          bVar2 = *pbVar35;
          uVar25 = (ulong)bVar2;
          lVar16 = lVar16 + -1;
          if (lVar16 == 0) {
            uVar10 = (*(code *)plVar30[3])(param_1);
            if ((int)uVar10 == 0) goto LAB_00edc9bc;
            pbVar28 = (byte *)*plVar30;
            lVar16 = plVar30[1];
          }
          lVar15 = *param_1;
          bVar5 = *pbVar28;
          *(undefined4 *)(lVar15 + 0x28) = 0x51;
          *(uint *)(lVar15 + 0x2c) = (uint)bVar2;
          uVar31 = (uint)bVar5;
          *(uint *)(*param_1 + 0x30) = uVar31;
          (**(code **)(*param_1 + 8))(param_1,1);
          if (bVar2 < 0x20) {
            if (0xf < bVar2) goto LAB_00edbe64;
            *(char *)((long)param_1 + uVar25 + 0x144) = (char)(uVar31 & 0xf);
            *(byte *)((long)param_1 + uVar25 + 0x154) = bVar5 >> 4;
            if ((uint)(bVar5 >> 4) < (uVar31 & 0xf)) {
              lVar15 = *param_1;
              *(undefined4 *)(lVar15 + 0x28) = 0x1e;
              *(uint *)(lVar15 + 0x2c) = uVar31;
              (**(code **)*param_1)(param_1);
            }
          }
          else {
            lVar15 = *param_1;
            *(undefined4 *)(lVar15 + 0x28) = 0x1d;
            *(uint *)(lVar15 + 0x2c) = (uint)bVar2;
            (**(code **)*param_1)(param_1);
LAB_00edbe64:
            *(byte *)((long)param_1 + uVar25 + 0x154) = bVar5;
          }
          uVar19 = uVar19 - 2;
          pbVar35 = pbVar28 + 1;
          lVar16 = lVar16 + -1;
        } while (2 < (long)uVar19);
      }
      if (uVar19 != 2) {
LAB_00edbe84:
        puVar27 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar27 + 5) = 0xc;
        (*(code *)*puVar27)(param_1);
      }
LAB_00edbe9c:
      *plVar30 = (long)pbVar35;
      plVar30[1] = lVar16;
      break;
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xd3:
    case 0xd4:
    case 0xd5:
    case 0xd6:
    case 0xd7:
      goto switchD_00edb774_caseD_d0;
    case 0xd8:
      lVar16 = *param_1;
      *(undefined4 *)(lVar16 + 0x28) = 0x68;
      (**(code **)(lVar16 + 8))(param_1,1);
      piVar18 = (int *)(param_1[0x4d] + 0x18);
      if (*piVar18 != 0) {
        puVar27 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar27 + 5) = 0x40;
        (*(code *)*puVar27)(param_1);
        piVar18 = (int *)(param_1[0x4d] + 0x18);
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
      param_1[0x30] = 0x10001;
      *(undefined1 *)((long)param_1 + 0x17e) = 0;
      *(undefined1 *)(param_1 + 0x31) = 0;
      *piVar18 = 1;
      break;
    case 0xd9:
      lVar16 = *param_1;
      *(undefined4 *)(lVar16 + 0x28) = 0x57;
      (**(code **)(lVar16 + 8))(param_1,1);
      *(undefined4 *)((long)param_1 + 0x23c) = 0;
      uVar10 = 2;
      goto LAB_00edc9bc;
    case 0xda:
      puVar27 = (undefined8 *)param_1[5];
      puVar32 = (undefined1 *)*puVar27;
      lVar16 = puVar27[1];
      if (*(int *)(param_1[0x4d] + 0x1c) == 0) {
        lVar15 = *param_1;
        *(undefined4 *)(lVar15 + 0x28) = 0x3c;
        strncpy((char *)(lVar15 + 0x2c),"SOS",0x50);
        (**(code **)*param_1)(param_1);
      }
      if (lVar16 == 0) {
        uVar10 = (*(code *)puVar27[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        puVar32 = (undefined1 *)*puVar27;
        lVar16 = puVar27[1];
      }
      puVar33 = puVar32 + 1;
      uVar3 = *puVar32;
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) {
        uVar10 = (*(code *)puVar27[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        puVar33 = (undefined1 *)*puVar27;
        lVar16 = puVar27[1];
      }
      pbVar35 = puVar33 + 1;
      uVar4 = *puVar33;
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) {
        uVar10 = (*(code *)puVar27[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        pbVar35 = (byte *)*puVar27;
        lVar16 = puVar27[1];
      }
      lVar15 = *param_1;
      bVar2 = *pbVar35;
      *(undefined4 *)(lVar15 + 0x28) = 0x69;
      *(uint *)(lVar15 + 0x2c) = (uint)bVar2;
      (**(code **)(*param_1 + 8))(param_1,1);
      uVar31 = (uint)bVar2;
      if ((bVar2 < 5) && ((ulong)CONCAT11(uVar3,uVar4) == (ulong)bVar2 * 2 + 6)) {
        if (uVar31 == 0) {
          if (*(int *)((long)param_1 + 0x13c) == 0) goto LAB_00edc758;
          *(uint *)(param_1 + 0x38) = (uint)bVar2;
          lVar15 = lVar16 + -1;
          bVar7 = true;
          if (lVar15 == 0) goto LAB_00edc8e8;
          pbVar28 = pbVar35 + 1;
          goto LAB_00edc8fc;
        }
        bVar8 = lVar16 == 1;
        *(uint *)(param_1 + 0x38) = (uint)bVar2;
      }
      else {
LAB_00edc758:
        puVar17 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar17 + 5) = 0xc;
        (*(code *)*puVar17)(param_1);
        lVar15 = lVar16 + -1;
        bVar8 = lVar15 == 0;
        pbVar28 = pbVar35 + 1;
        *(uint *)(param_1 + 0x38) = uVar31;
        if (uVar31 == 0) {
          bVar7 = true;
          goto joined_r0x00edc8e4;
        }
      }
      pbVar28 = pbVar35 + 1;
      lVar15 = lVar16 + -1;
      uVar19 = 0;
      goto LAB_00edc794;
    case 0xdb:
      plVar30 = (long *)param_1[5];
      lVar16 = plVar30[1];
      if (lVar16 == 0) {
        uVar10 = (*(code *)plVar30[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        lVar16 = plVar30[1];
      }
      lVar16 = lVar16 + -1;
      puVar32 = (undefined1 *)*plVar30 + 1;
      uVar3 = *(undefined1 *)*plVar30;
      if (lVar16 == 0) {
        uVar10 = (*(code *)plVar30[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        puVar32 = (undefined1 *)*plVar30;
        lVar16 = plVar30[1];
      }
      pbVar35 = puVar32 + 1;
      lVar16 = lVar16 + -1;
      uVar19 = (ulong)CONCAT11(uVar3,*puVar32);
      lVar15 = uVar19 - 2;
      if (2 < uVar19) {
        do {
          pbVar28 = pbVar35;
          lVar26 = lVar16;
          if (lVar16 == 0) {
            uVar10 = (*(code *)plVar30[3])(param_1);
            if ((int)uVar10 == 0) goto LAB_00edc9bc;
            pbVar28 = (byte *)*plVar30;
            lVar26 = plVar30[1];
          }
          bVar2 = *pbVar28;
          lVar16 = *param_1;
          uVar31 = bVar2 & 0xf;
          *(undefined4 *)(lVar16 + 0x28) = 0x53;
          *(uint *)(lVar16 + 0x2c) = uVar31;
          bVar2 = bVar2 >> 4;
          *(uint *)(*param_1 + 0x30) = (uint)bVar2;
          (**(code **)(*param_1 + 8))(param_1,1);
          if (3 < uVar31) {
            lVar16 = *param_1;
            *(undefined4 *)(lVar16 + 0x28) = 0x20;
            *(uint *)(lVar16 + 0x2c) = uVar31;
            (**(code **)*param_1)(param_1);
          }
          lVar34 = param_1[(ulong)uVar31 + 0x19];
          if (lVar34 == 0) {
            lVar34 = FUN_00ee24bc(param_1);
            param_1[(ulong)uVar31 + 0x19] = lVar34;
          }
          lVar24 = lVar15 + -1;
          if (bVar2 == 0) {
            if (lVar15 < 0x41) {
              lVar16 = 0;
              do {
                ((undefined8 *)(lVar34 + lVar16))[1] = 0x1000100010001;
                *(undefined8 *)(lVar34 + lVar16) = 0x1000100010001;
                lVar16 = lVar16 + 0x10;
                lVar37 = lVar24;
              } while (lVar16 != 0x80);
              goto LAB_00edc400;
            }
LAB_00edc42c:
            puVar38 = (undefined4 *)&DAT_01bf3110;
            lVar37 = 0x40;
LAB_00edc49c:
            pbVar35 = pbVar28 + 1;
            lVar16 = lVar26 + -1;
            lVar15 = 0;
            do {
              if (bVar2 == 0) {
                if (lVar16 == 0) {
                  uVar10 = (*(code *)plVar30[3])(param_1);
                  if ((int)uVar10 == 0) goto LAB_00edc9bc;
                  pbVar35 = (byte *)*plVar30;
                  lVar16 = plVar30[1];
                }
                uVar13 = (ushort)*pbVar35;
              }
              else {
                pbVar28 = pbVar35;
                if (lVar16 == 0) {
                  uVar10 = (*(code *)plVar30[3])(param_1);
                  if ((int)uVar10 == 0) goto LAB_00edc9bc;
                  pbVar28 = (byte *)*plVar30;
                  lVar16 = plVar30[1];
                }
                pbVar35 = pbVar28 + 1;
                bVar5 = *pbVar28;
                lVar16 = lVar16 + -1;
                if (lVar16 == 0) {
                  uVar10 = (*(code *)plVar30[3])(param_1);
                  if ((int)uVar10 == 0) goto LAB_00edc9bc;
                  pbVar35 = (byte *)*plVar30;
                  lVar16 = plVar30[1];
                }
                uVar13 = CONCAT11(bVar5,*pbVar35);
              }
              piVar18 = puVar38 + lVar15;
              lVar15 = lVar15 + 1;
              pbVar35 = pbVar35 + 1;
              lVar16 = lVar16 + -1;
              *(ushort *)(lVar34 + (long)*piVar18 * 2) = uVar13;
            } while (lVar15 < lVar37);
          }
          else {
            if (0x80 < lVar15) goto LAB_00edc42c;
            lVar16 = 0;
            do {
              ((undefined8 *)(lVar34 + lVar16))[1] = 0x1000100010001;
              *(undefined8 *)(lVar34 + lVar16) = 0x1000100010001;
              lVar16 = lVar16 + 0x10;
            } while (lVar16 != 0x80);
            lVar37 = lVar24 >> 1;
LAB_00edc400:
            if (0x18 < lVar37) {
              if (lVar37 == 0x19) {
                puVar38 = (undefined4 *)&DAT_01bf3424;
              }
              else if (lVar37 == 0x24) {
                puVar38 = (undefined4 *)&DAT_01bf3354;
              }
              else {
                if (lVar37 != 0x31) goto LAB_00edc300;
                puVar38 = (undefined4 *)&DAT_01bf3250;
              }
              goto LAB_00edc49c;
            }
            if (lVar37 == 4) {
              puVar38 = (undefined4 *)&DAT_01bf35ac;
              goto LAB_00edc49c;
            }
            if (lVar37 == 9) {
              puVar38 = (undefined4 *)&DAT_01bf3548;
              goto LAB_00edc49c;
            }
            if (lVar37 == 0x10) {
              puVar38 = &DAT_01bf34c8;
              goto LAB_00edc49c;
            }
LAB_00edc300:
            puVar38 = (undefined4 *)&DAT_01bf3110;
            pbVar35 = pbVar28 + 1;
            lVar16 = lVar26 + -1;
            if (0 < lVar37) goto LAB_00edc49c;
          }
          lVar15 = *param_1;
          if (1 < *(int *)(lVar15 + 0x7c)) {
            puVar27 = (undefined8 *)(lVar34 + 8);
            uVar19 = 8;
            while( true ) {
              uVar10 = puVar27[-1];
              *(ulong *)(lVar15 + 0x34) =
                   (ulong)CONCAT24((short)((ulong)uVar10 >> 0x30),
                                   (uint)(ushort)((ulong)uVar10 >> 0x20));
              *(ulong *)(lVar15 + 0x2c) =
                   (ulong)(CONCAT24((short)((ulong)uVar10 >> 0x10),(int)uVar10) & 0xffff0000ffff);
              uVar10 = *puVar27;
              *(undefined4 *)(lVar15 + 0x28) = 0x5f;
              *(ulong *)(lVar15 + 0x44) =
                   (ulong)CONCAT24((short)((ulong)uVar10 >> 0x30),
                                   (uint)(ushort)((ulong)uVar10 >> 0x20));
              *(ulong *)(lVar15 + 0x3c) =
                   (ulong)(CONCAT24((short)((ulong)uVar10 >> 0x10),(int)uVar10) & 0xffff0000ffff);
              (**(code **)(lVar15 + 8))(param_1,2);
              if (0x3f < uVar19) break;
              lVar15 = *param_1;
              uVar19 = uVar19 + 8;
              puVar27 = puVar27 + 2;
            }
          }
          lVar15 = 0;
          if (bVar2 != 0) {
            lVar15 = -lVar37;
          }
          lVar15 = (lVar24 - lVar37) + lVar15;
        } while (0 < lVar15);
      }
      if (lVar15 != 0) {
        puVar27 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar27 + 5) = 0xc;
        (*(code *)*puVar27)(param_1);
      }
      *plVar30 = (long)pbVar35;
      plVar30[1] = lVar16;
      break;
    case 0xdc:
      uVar10 = FUN_00edca98(param_1);
      iVar9 = (int)uVar10;
      goto joined_r0x00edb790;
    case 0xdd:
      puVar27 = (undefined8 *)param_1[5];
      lVar16 = puVar27[1];
      if (lVar16 == 0) {
        uVar10 = (*(code *)puVar27[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        lVar16 = puVar27[1];
      }
      lVar16 = lVar16 + -1;
      puVar32 = (undefined1 *)*puVar27 + 1;
      uVar3 = *(undefined1 *)*puVar27;
      if (lVar16 == 0) {
        uVar10 = (*(code *)puVar27[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        puVar32 = (undefined1 *)*puVar27;
        lVar16 = puVar27[1];
      }
      puVar33 = puVar32 + 1;
      lVar16 = lVar16 + -1;
      if (CONCAT11(uVar3,*puVar32) != 4) {
        puVar17 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar17 + 5) = 0xc;
        (*(code *)*puVar17)(param_1);
      }
      if (lVar16 == 0) {
        uVar10 = (*(code *)puVar27[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        puVar33 = (undefined1 *)*puVar27;
        lVar16 = puVar27[1];
      }
      puVar32 = puVar33 + 1;
      uVar3 = *puVar33;
      lVar16 = lVar16 + -1;
      if (lVar16 == 0) {
        uVar10 = (*(code *)puVar27[3])(param_1);
        if ((int)uVar10 == 0) goto LAB_00edc9bc;
        puVar32 = (undefined1 *)*puVar27;
        lVar16 = puVar27[1];
      }
      uVar4 = *puVar32;
      lVar15 = *param_1;
      *(undefined4 *)(lVar15 + 0x28) = 0x54;
      *(uint *)(lVar15 + 0x2c) = (uint)CONCAT11(uVar3,uVar4);
      (**(code **)(*param_1 + 8))(param_1,1);
      *(uint *)((long)param_1 + 0x174) = (uint)CONCAT11(uVar3,uVar4);
      *puVar27 = puVar32 + 1;
      puVar27[1] = lVar16 + -1;
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
switchD_00edb774_caseD_de:
      lVar16 = *param_1;
      uVar22 = 0x46;
LAB_00edb7a0:
      *(undefined4 *)(lVar16 + 0x28) = uVar22;
      *(uint *)(lVar16 + 0x2c) = uVar31;
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
      pcVar20 = *(code **)(param_1[0x4d] + (long)(int)uVar31 * 8 + -0x6d0);
      goto LAB_00edb788;
    case 0xf8:
      puVar27 = (undefined8 *)param_1[5];
      pbVar35 = (byte *)*puVar27;
      lVar16 = puVar27[1];
      if (*(int *)(param_1[0x4d] + 0x1c) == 0) {
        lVar15 = *param_1;
        *(undefined4 *)(lVar15 + 0x28) = 0x3c;
        strncpy((char *)(lVar15 + 0x2c),"LSE",0x50);
        (**(code **)*param_1)(param_1);
      }
      if ((int)param_1[7] < 3) {
LAB_00edc5dc:
        puVar17 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar17 + 5) = 0x1c;
        (*(code *)*puVar17)(param_1);
      }
      else {
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar35 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar28 = pbVar35 + 1;
        bVar2 = *pbVar35;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (CONCAT11(bVar2,*pbVar28) != 0x18) {
          puVar17 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar17 + 5) = 0xc;
          (*(code *)*puVar17)(param_1);
        }
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar35 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar28 = pbVar35 + 1;
        lVar16 = lVar16 + -1;
        if (*pbVar35 != 0xd) {
          lVar15 = *param_1;
          *(undefined4 *)(lVar15 + 0x28) = 0x46;
          *(undefined4 *)(lVar15 + 0x2c) = *(undefined4 *)((long)param_1 + 0x23c);
          (**(code **)*param_1)(param_1);
        }
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar29 = pbVar28 + 1;
        bVar2 = *pbVar28;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar29 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar29 + 1;
        lVar16 = lVar16 + -1;
        if (CONCAT11(bVar2,*pbVar29) != 0xff) goto LAB_00edc5dc;
        pbVar28 = pbVar35;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (*pbVar28 != 3) goto LAB_00edc5dc;
        pbVar28 = pbVar35;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        puVar21 = (uint *)param_1[0x26];
        lVar16 = lVar16 + -1;
        if (puVar21[0x18] != (uint)*pbVar28) goto LAB_00edc5dc;
        pbVar28 = pbVar35;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
          puVar21 = (uint *)param_1[0x26];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (*puVar21 != (uint)*pbVar28) goto LAB_00edc5dc;
        pbVar28 = pbVar35;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
          puVar21 = (uint *)param_1[0x26];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (puVar21[0x30] != (uint)*pbVar28) goto LAB_00edc5dc;
        pbVar28 = pbVar35;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (*pbVar28 != 0x80) goto LAB_00edc5dc;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar35 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar28 = pbVar35 + 1;
        bVar2 = *pbVar35;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (CONCAT11(bVar2,*pbVar28) != 0) goto LAB_00edc5dc;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar35 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar28 = pbVar35 + 1;
        bVar2 = *pbVar35;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (CONCAT11(bVar2,*pbVar28) != 0) goto LAB_00edc5dc;
        pbVar28 = pbVar35;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (*pbVar28 != 0) goto LAB_00edc5dc;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar35 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar28 = pbVar35 + 1;
        bVar2 = *pbVar35;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (CONCAT11(bVar2,*pbVar28) != 1) goto LAB_00edc5dc;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar35 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar28 = pbVar35 + 1;
        bVar2 = *pbVar35;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (CONCAT11(bVar2,*pbVar28) != 0) goto LAB_00edc5dc;
        pbVar28 = pbVar35;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (*pbVar28 != 0) goto LAB_00edc5dc;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar35 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar28 = pbVar35 + 1;
        bVar2 = *pbVar35;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (CONCAT11(bVar2,*pbVar28) != 1) goto LAB_00edc5dc;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar35 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar28 = pbVar35 + 1;
        bVar2 = *pbVar35;
        lVar16 = lVar16 + -1;
        if (lVar16 == 0) {
          uVar10 = (*(code *)puVar27[3])(param_1);
          if ((int)uVar10 == 0) goto LAB_00edc9bc;
          pbVar28 = (byte *)*puVar27;
          lVar16 = puVar27[1];
        }
        pbVar35 = pbVar28 + 1;
        lVar16 = lVar16 + -1;
        if (CONCAT11(bVar2,*pbVar28) != 0) goto LAB_00edc5dc;
      }
      *(undefined4 *)((long)param_1 + 0x18c) = 1;
      *puVar27 = pbVar35;
      puVar27[1] = lVar16;
      break;
    case 0xfe:
      pcVar20 = *(code **)(param_1[0x4d] + 0x28);
LAB_00edb788:
      uVar10 = (*pcVar20)(param_1);
      iVar9 = (int)uVar10;
      goto joined_r0x00edb790;
    default:
      if (uVar31 != 1) goto switchD_00edb774_caseD_de;
switchD_00edb774_caseD_d0:
      lVar16 = *param_1;
      *(undefined4 *)(lVar16 + 0x28) = 0x5e;
      *(uint *)(lVar16 + 0x2c) = uVar31;
      (**(code **)(*param_1 + 8))(param_1,1);
    }
    *(undefined4 *)((long)param_1 + 0x23c) = 0;
  } while( true );
code_r0x00edc7c8:
  uVar25 = uVar25 + 1;
  if (uVar19 <= uVar25) goto LAB_00edc810;
  goto LAB_00edc7b8;
LAB_00edc794:
  do {
    if (bVar8) {
      uVar10 = (*(code *)puVar27[3])(param_1);
      if ((int)uVar10 == 0) goto LAB_00edc9bc;
      pbVar28 = (byte *)*puVar27;
      lVar15 = puVar27[1];
    }
    pbVar35 = pbVar28 + 1;
    uVar31 = (uint)*pbVar28;
    if (uVar19 != 0) {
      uVar25 = 0;
LAB_00edc7b8:
      if (*(uint *)param_1[uVar25 + 0x39] != (uint)*pbVar28) goto code_r0x00edc7c8;
      iVar9 = *(int *)param_1[0x39];
      if (1 < uVar19) {
        lVar16 = 0;
        iVar23 = iVar9;
        do {
          lVar26 = lVar16 + 0x3a;
          lVar16 = lVar16 + 1;
          iVar9 = *(int *)param_1[lVar26];
          if (*(int *)param_1[lVar26] <= iVar23) {
            iVar9 = iVar23;
          }
          iVar23 = iVar9;
        } while (uVar19 - 1 != lVar16);
      }
      uVar31 = iVar9 + 1;
    }
LAB_00edc810:
    puVar21 = (uint *)param_1[0x26];
    lVar15 = lVar15 + -1;
    if (0 < (int)param_1[7]) {
      iVar9 = 0;
      do {
        if (uVar31 == *puVar21) goto LAB_00edc860;
        iVar9 = iVar9 + 1;
        puVar21 = puVar21 + 0x18;
      } while (iVar9 < (int)param_1[7]);
    }
    lVar16 = *param_1;
    *(undefined4 *)(lVar16 + 0x28) = 4;
    *(uint *)(lVar16 + 0x2c) = uVar31;
    (**(code **)*param_1)(param_1);
LAB_00edc860:
    param_1[uVar19 + 0x39] = (long)puVar21;
    if (lVar15 == 0) {
      uVar10 = (*(code *)puVar27[3])(param_1);
      if ((int)uVar10 == 0) goto LAB_00edc9bc;
      pbVar35 = (byte *)*puVar27;
      lVar15 = puVar27[1];
    }
    pbVar28 = pbVar35 + 1;
    bVar5 = *pbVar35;
    puVar21[5] = (uint)(bVar5 >> 4);
    puVar21[6] = bVar5 & 0xf;
    lVar16 = *param_1;
    *(uint *)(lVar16 + 0x2c) = *puVar21;
    *(uint *)(lVar16 + 0x30) = puVar21[5];
    uVar31 = puVar21[6];
    *(undefined4 *)(lVar16 + 0x28) = 0x6a;
    *(uint *)(lVar16 + 0x34) = uVar31;
    (**(code **)(lVar16 + 8))(param_1,1);
    uVar19 = uVar19 + 1;
    lVar15 = lVar15 + -1;
    bVar8 = lVar15 == 0;
  } while (uVar19 < bVar2);
  bVar7 = false;
joined_r0x00edc8e4:
  if (bVar8) {
LAB_00edc8e8:
    uVar10 = (*(code *)puVar27[3])(param_1);
    if ((int)uVar10 == 0) goto LAB_00edc9bc;
    pbVar28 = (byte *)*puVar27;
    lVar15 = puVar27[1];
  }
LAB_00edc8fc:
  pbVar35 = pbVar28 + 1;
  lVar15 = lVar15 + -1;
  *(uint *)((long)param_1 + 0x21c) = (uint)*pbVar28;
  if (lVar15 == 0) {
    uVar10 = (*(code *)puVar27[3])(param_1);
    if ((int)uVar10 == 0) goto LAB_00edc9bc;
    pbVar35 = (byte *)*puVar27;
    lVar15 = puVar27[1];
  }
  pbVar28 = pbVar35 + 1;
  lVar15 = lVar15 + -1;
  *(uint *)(param_1 + 0x44) = (uint)*pbVar35;
  if (lVar15 == 0) {
    uVar10 = (*(code *)puVar27[3])(param_1);
    if ((int)uVar10 == 0) goto LAB_00edc9bc;
    pbVar28 = (byte *)*puVar27;
    lVar15 = puVar27[1];
  }
  bVar2 = *pbVar28;
  lVar26 = *param_1;
  *(uint *)((long)param_1 + 0x224) = (uint)(bVar2 >> 4);
  *(uint *)(param_1 + 0x45) = bVar2 & 0xf;
  *(undefined4 *)(lVar26 + 0x2c) = *(undefined4 *)((long)param_1 + 0x21c);
  *(int *)(lVar26 + 0x30) = (int)param_1[0x44];
  *(undefined4 *)(lVar26 + 0x34) = *(undefined4 *)((long)param_1 + 0x224);
  lVar16 = param_1[0x45];
  *(undefined4 *)(lVar26 + 0x28) = 0x6b;
  *(int *)(lVar26 + 0x38) = (int)lVar16;
  (**(code **)(lVar26 + 8))(param_1,1);
  *(undefined4 *)(param_1[0x4d] + 0x20) = 0;
  if (!bVar7) {
    *(int *)((long)param_1 + 0xac) = *(int *)((long)param_1 + 0xac) + 1;
  }
  *puVar27 = pbVar28 + 1;
  puVar27[1] = lVar15 + -1;
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  uVar10 = 1;
LAB_00edc9bc:
  if (*(long *)(lVar6 + 0x28) != lVar14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

