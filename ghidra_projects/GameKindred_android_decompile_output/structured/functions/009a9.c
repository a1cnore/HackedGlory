// functions/009a9 — 11 functions
#include "libGameKindred.h"




void FUN_009a9350(void)

{
  FUN_009aeb38();
  return;
}




void FUN_009a937c(void)

{
  FUN_009aeda0();
  return;
}




void FUN_009a93a8(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar3 = FUN_00cec840(*(undefined4 *)(lVar7 + 0x260));
  iVar2 = FUN_00e70b14();
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfbffffff | (uint)(iVar2 != 0) << 0x1a;
  uVar4 = FUN_00cec930(*(undefined4 *)(lVar7 + 0x260));
  uVar5 = FUN_00e70b88(uVar4,&DAT_03210450);
  if ((uVar5 & 1) == 0) {
    uVar4 = FUN_00cec9a0(*(undefined4 *)(lVar7 + 0x260));
    uVar5 = FUN_00e70b88(uVar4,&DAT_03210450);
    if ((uVar5 & 1) == 0) {
      FUN_009d592c(*(undefined8 *)(param_1 + 0x40),uVar3);
      goto LAB_009a94cc;
    }
    uVar4 = FUN_00cec9a0(*(undefined4 *)(lVar7 + 0x260));
    thunk_FUN_00e7051c(&local_48,uVar4);
    puVar6 = &DAT_01bb5073;
  }
  else {
    uVar4 = FUN_00cec930(*(undefined4 *)(lVar7 + 0x260));
    thunk_FUN_00e7051c(&local_48,uVar4);
    puVar6 = (undefined *)0x1e21c1a;
  }
  FUN_00e705c8(&local_58,puVar6);
  FUN_00e70c34(&local_48,&local_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  FUN_00e70c34(&local_48,uVar3);
  FUN_009d592c(*(undefined8 *)(param_1 + 0x40),&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
LAB_009a94cc:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009a94f4(long param_1)

{
  undefined4 *puVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 local_50 [2];
  long local_48;
  
  puVar6 = local_50;
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar4 = FUN_00da2f68(*(undefined8 *)(param_1 + 0x10));
  lVar9 = *(long *)(param_1 + 0x58);
  if (lVar9 == 0) goto switchD_009a954c_default;
  switch(uVar4) {
  case 0:
    if ((*(uint *)(param_1 + 0x9c) & 7) == 0) goto switchD_009a954c_default;
    uVar5 = FUN_009aaf84(param_1,&DAT_0312e8cc,&DAT_0312e8d0);
    puVar1 = &DAT_0312e8d0;
    if ((uVar5 & 1) == 0) {
      puVar1 = &DAT_0312e8cc;
    }
    local_50[0] = *puVar1;
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    FUN_009a9784(param_1);
    break;
  case 1:
    if (((*(uint *)(param_1 + 0x9c) & 7) == 1) ||
       (uVar5 = FUN_009b2c64(lVar9,&DAT_0312e900), (uVar5 & 1) == 0)) goto switchD_009a954c_default;
    uVar2 = *(ushort *)(param_1 + 0xa0);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    FUN_009a9784(param_1);
    if ((uVar2 & 1) != 0) {
      puVar7 = &DAT_0312e910;
      pcVar8 = "StrafeForwardStartToStrafeForward";
LAB_009a973c:
      FUN_009b28f0(uVar10,puVar7,0,0,pcVar8);
      goto switchD_009a954c_default;
    }
    puVar6 = (undefined4 *)&DAT_0312e900;
    break;
  case 2:
    if (((*(uint *)(param_1 + 0x9c) & 7) == 2) ||
       (uVar5 = FUN_009b2c64(lVar9,&DAT_0312e904), (uVar5 & 1) == 0)) goto switchD_009a954c_default;
    uVar2 = *(ushort *)(param_1 + 0xa0);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    FUN_009a9784(param_1);
    if ((((ulong)uVar2 << 0x20) >> 0x21 & 1) != 0) {
      puVar7 = &DAT_0312e914;
      pcVar8 = "StrafeBackStartToStrafeBack";
      goto LAB_009a973c;
    }
    puVar6 = (undefined4 *)&DAT_0312e904;
    break;
  case 3:
    if (((*(uint *)(param_1 + 0x9c) & 7) == 3) ||
       (uVar5 = FUN_009b2c64(lVar9,&DAT_0312e908), (uVar5 & 1) == 0)) goto switchD_009a954c_default;
    uVar2 = *(ushort *)(param_1 + 0xa0);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    FUN_009a9784(param_1);
    if ((((ulong)uVar2 << 0x20) >> 0x22 & 1) != 0) {
      puVar7 = &DAT_0312e918;
      pcVar8 = "StrafeLeftStartToStrafeLeft";
      goto LAB_009a973c;
    }
    puVar6 = (undefined4 *)&DAT_0312e908;
    break;
  case 4:
    if (((*(uint *)(param_1 + 0x9c) & 7) == 4) ||
       (uVar5 = FUN_009b2c64(lVar9,&DAT_0312e90c), (uVar5 & 1) == 0)) goto switchD_009a954c_default;
    uVar2 = *(ushort *)(param_1 + 0xa0);
    uVar10 = *(undefined8 *)(param_1 + 0x58);
    FUN_009a9784(param_1);
    if ((((ulong)uVar2 << 0x20) >> 0x23 & 1) != 0) {
      puVar7 = &DAT_0312e91c;
      pcVar8 = "StrafeRightStartToStrafeRight";
      goto LAB_009a973c;
    }
    puVar6 = (undefined4 *)&DAT_0312e90c;
    break;
  default:
    goto switchD_009a954c_default;
  }
  FUN_009b2bec(uVar10,puVar6,1,0,&DAT_0312e8ac);
switchD_009a954c_default:
  *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xfffffff8 | uVar4 & 7;
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




float FUN_009a9784(long param_1)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if ((*(uint *)(param_1 + 0x9c) >> 0x19 & 1) == 0) {
    lVar1 = *(long *)(param_1 + 0x10);
    fVar2 = (float)FUN_00d9ee8c(lVar1);
    fVar3 = *(float *)(*(long *)(lVar1 + 0x40) + 0x80);
    fVar2 = fVar2 / fVar3;
    if (fVar3 <= 0.0) {
      fVar2 = 1.0;
    }
    return fVar2;
  }
  return 1.0;
}




void FUN_009a97d8(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  ulong uVar6;
  undefined2 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  uint6 *puVar11;
  undefined4 local_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar11 = (uint6 *)(param_1 + 0x9c);
  uVar8 = *(uint *)puVar11;
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  bVar4 = FUN_00d9ef9c(uVar10);
  bVar5 = FUN_00d9ef60(uVar10);
  uVar6 = (ulong)*puVar11;
  uVar3 = *(uint *)puVar11 & 0x18;
  if ((((uVar8 >> 0x1e & 1) == 0) || (uVar3 == 0x10)) || ((bVar4 & 1) == 0)) {
    if ((-1 < (int)uVar8) || (((bVar4 | uVar3 == 8 | bVar5 ^ 1) & 1) != 0)) {
      uVar8 = *(uint *)puVar11 >> 3 & 3;
      if (uVar8 != 0) {
        if (((bVar4 & 1) == 0 && uVar3 == 0x10) || ((bVar5 & 1) == 0 && uVar8 == 1)) {
          uVar6 = FUN_009aaf84(param_1,&DAT_0312e8cc,&DAT_0312e8d0);
          puVar1 = &DAT_0312e8d0;
          if ((uVar6 & 1) == 0) {
            puVar1 = &DAT_0312e8cc;
          }
          local_50[0] = *puVar1;
          lVar9 = *(long *)(param_1 + 0x58);
          if (lVar9 != 0) {
            FUN_009a9784(param_1);
            FUN_009b2bec(lVar9,local_50,1,0,&DAT_0312e8ac);
          }
          *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffffe7;
        }
      }
      goto LAB_009a9900;
    }
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar9 != 0) {
      FUN_009a9784(param_1);
      FUN_009b2bec(lVar9,&DAT_0312e8c8,1,0,&DAT_0312e8ac);
      uVar6 = (ulong)*(uint6 *)(param_1 + 0x9c);
    }
    uVar7 = (undefined2)(uVar6 >> 0x20);
    uVar8 = (uint)uVar6 & 0xffffffef | 8;
  }
  else {
    lVar9 = *(long *)(param_1 + 0x58);
    if (lVar9 != 0) {
      FUN_009a9784(param_1);
      FUN_009b2bec(lVar9,&DAT_0312e8c4,1,0,&DAT_0312e8ac);
      uVar6 = (ulong)*(uint6 *)(param_1 + 0x9c);
    }
    uVar7 = (undefined2)(uVar6 >> 0x20);
    uVar8 = (uint)uVar6 & 0xffffffe7 | 0x10;
  }
  *(undefined2 *)(param_1 + 0xa0) = uVar7;
  *(uint *)(param_1 + 0x9c) = uVar8;
LAB_009a9900:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009a99c8(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  plVar1 = *(long **)(param_1 + 0x88);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0x88);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x88) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
          }
        }
        uVar4 = FUN_009d3fec(uVar3);
        if (((uVar4 & 1) != 0) && (uVar4 = FUN_009ab4f0(param_1), (uVar4 & 1) != 0)) {
          plVar1 = *(long **)(param_1 + 0x88);
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x88) = 0;
              uVar3 = 0;
              *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
            }
          }
          FUN_009d33ec(uVar3);
          return;
        }
        plVar1 = *(long **)(param_1 + 0x88);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x88) = 0;
            uVar3 = 0;
            *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
          }
        }
        uVar4 = FUN_009d4018(uVar3);
        if (((uVar4 & 1) != 0) && (uVar4 = FUN_009ab4f0(param_1), (uVar4 & 1) == 0)) {
          plVar1 = *(long **)(param_1 + 0x88);
          uVar3 = 0;
          if (plVar1 != (long *)0x0) {
            if (*(int *)(param_1 + 0x90) == (int)plVar1[1]) {
              uVar3 = (**(code **)(*plVar1 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x88) = 0;
              uVar3 = 0;
              *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
            }
          }
          FUN_009d341c(uVar3);
          return;
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = DAT_03214ce8;
    }
  }
  return;
}




undefined8 FUN_009a9b60(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ec00) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  uVar2 = FUN_00d7d300();
  return uVar2;
}




void FUN_009a9b98(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x303) & 1) == 0) {
      uVar1 = FUN_00d9ef9c();
      uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8);
      if (((uVar2 & 1) == 0) && ((((ulong)*(ushort *)(param_1 + 0xa0) << 0x20) >> 0x24 & 1) != 0)) {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8b8,&DAT_0312e8c0);
      }
      uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc);
      if (((uVar2 & 1) == 0) && ((uVar1 & 1) == 0 && (*(ushort *)(param_1 + 0xa0) & 0x20) != 0)) {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8cc,&DAT_0312e8d4);
      }
      uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0);
      if (((uVar2 & 1) == 0) && ((uVar1 & 1) == 0 && (*(ushort *)(param_1 + 0xa0) & 0x40) != 0)) {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e0,&DAT_0312e8e8);
      }
      uVar2 = FUN_009b3348(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec);
      if (((uVar2 & 1) == 0) && ((uVar1 & 1) == 0 && (*(ushort *)(param_1 + 0xa0) & 0x80) != 0)) {
        FUN_009b2ff8(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8ec,&DAT_0312e8f4);
        return;
      }
    }
  }
  return;
}




void FUN_009a9cfc(long param_1)

{
  float fVar1;
  
  if ((*(byte *)(*(long *)(param_1 + 0x10) + 0x2f4) & 1) != 0) {
    fVar1 = *(float *)(param_1 + 0x98);
    if (0.0 < fVar1) {
      fVar1 = (float)FUN_01988c78();
      fVar1 = (float)NEON_fminnm(*(float *)(param_1 + 0x98) - fVar1,0x41200000);
      if (fVar1 <= 0.0) {
        fVar1 = 0.0;
      }
      *(float *)(param_1 + 0x98) = fVar1;
    }
    if (fVar1 == 0.0) {
      *(uint *)(param_1 + 0x9c) = *(uint *)(param_1 + 0x9c) & 0xffffff1f;
    }
  }
  return;
}




void FUN_009a9d6c(long param_1,uint *param_2,undefined8 *param_3)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long *plVar14;
  undefined8 *puVar15;
  int *piVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  int *piVar20;
  long lVar21;
  ulong uVar22;
  uint *puVar23;
  undefined8 *puVar24;
  int local_144;
  undefined8 local_140;
  void *local_138;
  long local_130;
  undefined4 local_128;
  long local_120;
  undefined4 local_118;
  long local_110;
  undefined4 local_108;
  long local_100;
  undefined4 local_f8;
  ulong local_f0;
  int *local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined4 local_84;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  *(uint **)(param_1 + 0x38) = param_2;
  lVar21 = *(long *)(param_1 + 0x10);
  puVar24 = (undefined8 *)**(undefined8 **)(param_2 + 0x76);
  plVar10 = param_3 + 1;
  if ((*plVar10 == 0) || (iVar3 = FUN_00e6a474(), plVar11 = plVar10, iVar3 == 0)) {
    plVar11 = puVar24 + 1;
  }
  if ((param_3[2] == 0) || (iVar3 = FUN_00e6a474(), iVar3 == 0)) {
    plVar10 = puVar24 + 1;
  }
  iVar3 = FUN_00e6a474(*plVar11);
  if ((iVar3 == 0) && (iVar3 = FUN_00e6a474(plVar10[1]), iVar3 == 0)) goto LAB_009aa478;
  lVar8 = FUN_01985d44(lVar21,DAT_0312ead4);
  *(long *)(param_1 + 0x48) = lVar8;
  if (lVar8 == 0) goto LAB_009aa478;
  if (((*param_2 < 10) && ((1 << (ulong)(*param_2 & 0x1f) & 0x23bU) != 0)) ||
     ((char)param_2[0x75] != '\0')) {
    uVar13 = 5;
  }
  else {
    uVar13 = 1;
  }
  FUN_00e7cd70(lVar8,uVar13);
  iVar3 = FUN_00e6a474(plVar10[1]);
  if (iVar3 == 0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x20))(*(long **)(param_1 + 0x48),*plVar11);
LAB_009a9ea0:
    uVar13 = *(undefined8 *)(param_1 + 0x48);
    lVar8 = plVar11[5];
  }
  else {
    uVar9 = FUN_00d9e99c(lVar21);
    plVar14 = *(long **)(param_1 + 0x48);
    if ((uVar9 & 1) != 0) {
      (**(code **)(*plVar14 + 0x20))(plVar14,*plVar11);
      goto LAB_009a9ea0;
    }
    (**(code **)(*plVar14 + 0x20))(plVar14,plVar10[1]);
    uVar13 = *(undefined8 *)(param_1 + 0x48);
    lVar8 = plVar10[5];
  }
  FUN_00cab74c(uVar13,param_1 + 0x50,lVar8);
  *(char *)(*(long *)(param_1 + 0x48) + 0x33) = (char)plVar11[6];
  local_c0 = param_2[0x19];
  uStack_b4 = 0;
  uStack_b0 = 0;
  uStack_bc = 0;
  uStack_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  uStack_8c = 0;
  local_94 = 0;
  local_84 = 0x3f800000;
  local_ac = local_c0;
  local_98 = local_c0;
  FUN_00e7ca50(*(undefined8 *)(param_1 + 0x48),&local_c0);
  plVar10 = param_3 + 3;
  if ((*plVar10 == 0) || (iVar3 = FUN_00e6a474(), iVar3 == 0)) {
    plVar10 = puVar24 + 3;
  }
  lVar8 = *plVar10;
  iVar3 = FUN_00e6a474(lVar8);
  if (iVar3 != 0) {
    plVar10 = (long *)FUN_01985d44(lVar21,DAT_0312eae0);
    *(long **)(param_1 + 0x58) = plVar10;
    (**(code **)(*plVar10 + 0x10))();
    FUN_009b2664(*(undefined8 *)(param_1 + 0x58),lVar8);
    local_e0 = 0;
    local_f0 = 0;
    local_e8 = (int *)0x0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0xffffffff;
    plVar10 = (long *)puVar24[5];
    lVar8 = *plVar10;
    while (lVar8 != 0) {
      local_140 = *(undefined8 *)*plVar10;
      FUN_009aa890(&local_f0,&local_140,plVar10);
      plVar10 = plVar10 + 1;
      lVar8 = *plVar10;
    }
    if (puVar24 != param_3) {
      plVar10 = (long *)param_3[5];
      lVar8 = *plVar10;
      while (lVar8 != 0) {
        local_140 = *(undefined8 *)*plVar10;
        lVar8 = *plVar10;
        plVar11 = (long *)FUN_009af3ec(&local_f0,&local_140);
        *plVar11 = lVar8;
        plVar10 = plVar10 + 1;
        lVar8 = *plVar10;
      }
    }
    plVar10 = (long *)puVar24[5];
    lVar8 = *plVar10;
    while (lVar8 != 0) {
      local_140 = *(undefined8 *)*plVar10;
      puVar12 = (undefined8 *)FUN_009af3ec(&local_f0,&local_140);
      puVar12 = (undefined8 *)*puVar12;
      FUN_009b2780(*(undefined4 *)(puVar12 + 2),*(undefined4 *)((long)puVar12 + 0x14),
                   *(undefined4 *)(puVar12 + 3),*(undefined8 *)(param_1 + 0x58),*puVar12,puVar12[1],
                   *(undefined1 *)((long)puVar12 + 0x1c));
      plVar11 = (long *)puVar12[4];
      puVar15 = (undefined8 *)*plVar11;
      while (puVar15 != (undefined8 *)0x0) {
        plVar11 = plVar11 + 1;
        FUN_009b2830(*(undefined4 *)(puVar15 + 1),*(undefined4 *)((long)puVar15 + 0xc),
                     *(undefined4 *)(puVar15 + 2),*(undefined8 *)(param_1 + 0x58),*puVar12,*puVar15,
                     *(undefined1 *)((long)puVar15 + 0x14));
        puVar15 = (undefined8 *)*plVar11;
      }
      plVar10 = plVar10 + 1;
      lVar8 = *plVar10;
    }
    FUN_009b2b10(0xbe800000,0x3e800000,*(undefined8 *)(param_1 + 0x58),"AttackToIdle",&DAT_0312e8b8)
    ;
    FUN_009b2b10(0xbe800000,0x3e800000,*(undefined8 *)(param_1 + 0x58),"AttackToIdleCombat",
                 &DAT_0312e8bc);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveToFromBrush",
                 &DAT_0312e8cc);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveStartToMove",
                 &DAT_0312e8cc);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveStartToMoveCombat",
                 &DAT_0312e8d0);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveStopToIdle",
                 &DAT_0312e8b8);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveStopToIdleCombat",
                 &DAT_0312e8bc);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"MoveSheathToMove",
                 &DAT_0312e8cc);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"IdleSheathToIdle",
                 &DAT_0312e8b8);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"IntroToDance",&DAT_0312e8b0)
    ;
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"IntroToTaunt",&DAT_0312e8b4)
    ;
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),
                 "StrafeForwardStartToStrafeForward",&DAT_0312e900);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"StrafeBackStartToStrafeBack"
                 ,&DAT_0312e904);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),"StrafeLeftStartToStrafeLeft"
                 ,&DAT_0312e908);
    FUN_009b2b10(0xbdcc985f,0x3d886595,*(undefined8 *)(param_1 + 0x58),
                 "StrafeRightStartToStrafeRight",&DAT_0312e90c);
    if (*(char *)(puVar24 + 4) == '\0') {
      FUN_009b3950(*(undefined8 *)(param_1 + 0x58));
    }
    uVar4 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8c4);
    puVar23 = (uint *)(param_1 + 0x9c);
    *puVar23 = *puVar23 & 0xbfffffff | (uVar4 & 1) << 0x1e;
    iVar3 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8c8);
    *puVar23 = *puVar23 & 0x7fffffff | iVar3 << 0x1f;
    uVar2 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e910);
    *(ushort *)(param_1 + 0xa0) = *(ushort *)(param_1 + 0xa0) & 0xfffe | uVar2 & 1;
    uVar4 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e914);
    *(ushort *)(param_1 + 0xa0) =
         *(ushort *)(param_1 + 0xa0) & 0xfffd | (ushort)(((ulong)(uVar4 & 1) << 0x21) >> 0x20);
    uVar4 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e918);
    *(ushort *)(param_1 + 0xa0) =
         *(ushort *)(param_1 + 0xa0) & 0xfffb | (ushort)(((ulong)(uVar4 & 1) << 0x22) >> 0x20);
    uVar4 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e91c);
    *(ushort *)(param_1 + 0xa0) =
         *(ushort *)(param_1 + 0xa0) & 0xfff7 | (ushort)(((ulong)(uVar4 & 1) << 0x23) >> 0x20);
    uVar4 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8c0);
    *(ushort *)(param_1 + 0xa0) =
         *(ushort *)(param_1 + 0xa0) & 0xffef | (ushort)(((ulong)(uVar4 & 1) << 0x24) >> 0x20);
    uVar4 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8d4);
    *(ushort *)(param_1 + 0xa0) =
         *(ushort *)(param_1 + 0xa0) & 0xffdf | (ushort)(((ulong)(uVar4 & 1) << 0x25) >> 0x20);
    uVar4 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8e8);
    *(ushort *)(param_1 + 0xa0) =
         *(ushort *)(param_1 + 0xa0) & 0xffbf | (ushort)(((ulong)(uVar4 & 1) << 0x26) >> 0x20);
    uVar4 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8f4);
    *(ushort *)(param_1 + 0xa0) =
         *(ushort *)(param_1 + 0xa0) & 0xff7f | (ushort)(((ulong)(uVar4 & 1) << 0x27) >> 0x20);
    uVar4 = FUN_009b2c64(*(undefined8 *)(param_1 + 0x58),&DAT_0312e8dc);
    *(ushort *)(param_1 + 0xa0) =
         *(ushort *)(param_1 + 0xa0) & 0xfeff | (ushort)(((ulong)(uVar4 & 1) << 0x28) >> 0x20);
    FUN_009aaa68(&local_f0);
  }
  FUN_00e7ce38(*(undefined8 *)(param_1 + 0x48));
LAB_009aa478:
  if ((*(byte *)(lVar21 + 0x2f4) & 5) != 0) {
    FUN_01985d44(param_1,DAT_02c091e8);
  }
  FUN_009aaaec(param_1,param_2 + 0x68);
  uVar5 = *(undefined4 *)(lVar21 + 0x30);
  lVar8 = lVar21 + 0x28;
  puVar23 = param_2 + 0x6e;
  if ((*(long *)(param_2 + 0x6e) != 0) && (iVar3 = FUN_00e6a474(), iVar3 != 0)) {
    uVar13 = FUN_01985d44(param_1,DAT_0312eaf0);
    *(undefined8 *)(param_1 + 0x68) = uVar13;
    local_100 = lVar8;
    local_f8 = uVar5;
    FUN_009d8b0c(0xbf800000,uVar13,&local_100,*(undefined8 *)puVar23,puVar23);
  }
  if (*(long *)(param_2 + 0x70) != 0) {
    iVar3 = FUN_00e6a474();
    if (iVar3 != 0) {
      uVar13 = FUN_01985d44(param_1,DAT_0312eaf0);
      *(undefined8 *)(param_1 + 0x60) = uVar13;
      local_110 = lVar8;
      local_108 = uVar5;
      FUN_009d8b0c(0xbf800000,uVar13,&local_110,*(undefined8 *)(param_2 + 0x70),puVar23);
    }
    if ((*(long *)(param_2 + 0x70) != 0) && (iVar3 = FUN_00e6a474(), iVar3 != 0)) {
      uVar13 = FUN_01985d44(param_1,DAT_0312eaf0);
      *(undefined8 *)(param_1 + 0x70) = uVar13;
      local_120 = lVar8;
      local_118 = uVar5;
      FUN_009d8b0c(0xbf800000,uVar13,&local_120,*(undefined8 *)(param_2 + 0x70),puVar23);
      uVar13 = FUN_01985d44(param_1,DAT_0312eaf0);
      *(undefined8 *)(param_1 + 0x78) = uVar13;
      local_130 = lVar8;
      local_128 = uVar5;
      FUN_009d8b0c(0xbf800000,uVar13,&local_130,*(undefined8 *)(param_2 + 0x70),puVar23);
    }
  }
  FUN_009aabc8(param_1,lVar21,param_2);
  FUN_009aadd0(param_1,param_3[10]);
  puVar24 = (undefined8 *)**(undefined8 **)(param_2 + 0x76);
  if ((((*(long *)puVar24[0xb] != 0) || (*(long *)puVar24[0xc] != 0)) ||
      (*(long *)param_3[0xb] != 0)) || (*(long *)param_3[0xc] != 0)) {
    lVar8 = FUN_01985d44(param_1,DAT_0312eb00);
    puVar15 = (undefined8 *)0x0;
    if (lVar8 != 0) {
      puVar15 = (undefined8 *)(lVar8 + 0x28);
    }
    *(undefined8 **)(param_1 + 0x80) = puVar15;
    (**(code **)*puVar15)(puVar15,puVar24,param_3);
  }
  if (puVar24 == param_3) {
    FUN_00966224(*param_3);
  }
  else {
    local_c0 = 0;
    uStack_bc = 0;
    uStack_b8 = 0;
    uStack_b4 = 0;
    FUN_0096642c(*param_3,&local_c0);
    local_f0 = 0;
    local_e8 = (int *)0x0;
    plVar10 = (long *)puVar24[0xb];
    puVar24 = (undefined8 *)*plVar10;
    while (puVar24 != (undefined8 *)0x0) {
      plVar10 = plVar10 + 1;
      uVar13 = *puVar24;
      uVar5 = FUN_00e6a474(uVar13);
      uVar5 = FUN_0091ed5c(uVar13,uVar5,0x12345678);
      uVar13 = puVar24[1];
      uVar6 = FUN_00e6a474(uVar13);
      uVar6 = FUN_0091ed5c(uVar13,uVar6,0x12345678);
      FUN_009aae24(&local_f0,uVar5,uVar6);
      puVar24 = (undefined8 *)*plVar10;
    }
    plVar10 = (long *)param_3[0xb];
    puVar24 = (undefined8 *)*plVar10;
    piVar16 = local_e8;
    while (local_e8 = piVar16, puVar24 != (undefined8 *)0x0) {
      uVar13 = *puVar24;
      uVar5 = FUN_00e6a474(uVar13);
      iVar3 = FUN_0091ed5c(uVar13,uVar5,0x12345678);
      uVar13 = puVar24[1];
      uVar5 = FUN_00e6a474(uVar13);
      iVar7 = FUN_0091ed5c(uVar13,uVar5,0x12345678);
      if ((int)local_f0 != 0) {
        uVar9 = 0;
        piVar16 = local_e8 + 1;
        do {
          if (piVar16[-1] == iVar3) {
            *piVar16 = iVar7;
            goto LAB_009aa748;
          }
          uVar9 = uVar9 + 1;
          piVar16 = piVar16 + 2;
        } while (uVar9 < (local_f0 & 0xffffffff));
      }
      FUN_009aae24(&local_f0,iVar3);
LAB_009aa748:
      plVar10 = plVar10 + 1;
      piVar16 = local_e8;
      puVar24 = (undefined8 *)*plVar10;
    }
    uVar9 = (ulong)local_c0;
    local_140 = 0;
    local_138 = (void *)0x0;
    if (local_c0 != 0) {
      iVar3 = (int)local_f0;
      uVar22 = 0;
      lVar8 = (local_f0 & 0xffffffff) << 3;
      do {
        local_144 = *(int *)(CONCAT44(uStack_b4,uStack_b8) + uVar22 * 4);
        piVar17 = piVar16 + 1;
        lVar19 = lVar8;
        if (iVar3 != 0) {
          do {
            if (*piVar17 == local_144) goto LAB_009aa7bc;
            lVar19 = lVar19 + -8;
            lVar18 = lVar8;
            piVar17 = piVar17 + 2;
            piVar20 = piVar16;
          } while (lVar19 != 0);
          do {
            if (*piVar20 == local_144) goto LAB_009aa7cc;
            lVar18 = lVar18 + -8;
            piVar20 = piVar20 + 2;
          } while (lVar18 != 0);
        }
LAB_009aa7bc:
        FUN_0091f584(&local_140,&local_144);
        uVar9 = (ulong)local_c0;
LAB_009aa7cc:
        uVar22 = uVar22 + 1;
      } while (uVar22 < uVar9);
    }
    FUN_00966818(*param_3,&local_140);
    if (local_138 != (void *)0x0) {
      operator_delete__(local_138);
      local_140 = 0;
      local_138 = (void *)0x0;
    }
    if (local_e8 != (int *)0x0) {
      operator_delete__(local_e8);
      local_f0 = 0;
      local_e8 = (int *)0x0;
    }
    if ((void *)CONCAT44(uStack_b4,uStack_b8) != (void *)0x0) {
      operator_delete__((void *)CONCAT44(uStack_b4,uStack_b8));
      local_c0 = 0;
      uStack_bc = 0;
      uStack_b8 = 0;
      uStack_b4 = 0;
    }
  }
  FUN_009aaf04(param_1);
  uVar9 = FUN_00ced270(*(undefined4 *)(lVar21 + 0x260));
  if ((uVar9 & 1) != 0) {
    FUN_01985d44(param_1,DAT_0312eb10);
  }
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

