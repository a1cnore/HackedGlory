// functions/009a5 — 17 functions
#include "libGameKindred.h"




void FUN_009a504c(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027c1830;
  return;
}




void FUN_009a5064(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_009a506c(long param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d66d28(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_0312e4a8) break;
    plVar2 = (long *)plVar2[4];
  }
  lVar1 = 0;
  do {
    (**(code **)(*plVar2 + 0x90))
              (plVar2,*(undefined8 *)((long)&PTR_s_Idle_02be31c8 + lVar1),
               *(undefined8 *)(param_1 + 0x10));
    lVar1 = lVar1 + 8;
  } while (lVar1 != 0xb0);
  return;
}




void FUN_009a50f8(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  undefined4 local_58 [2];
  undefined4 local_50 [2];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00d66d28(*param_2);
  plVar4 = *(long **)(lVar2 + 0x18);
  while( true ) {
    if (plVar4 == (long *)0x0) goto LAB_009a51d0;
    if (*(int *)(plVar4[1] + 0xa4) == DAT_0312e4a8) break;
    plVar4 = (long *)plVar4[4];
  }
  lVar2 = 0;
  do {
    thunk_FUN_00d9ff34(local_58,*(undefined8 *)((long)&PTR_s_Idle_02be31c8 + lVar2));
    FUN_00d9ff84(local_50,local_58[0]);
    thunk_FUN_00d9ff34(local_68,*(undefined8 *)(param_1 + 0x10));
    FUN_00d9ff84(local_60,local_68[0]);
    uVar3 = (**(code **)(*plVar4 + 0xa8))(plVar4,local_50[0],local_60[0]);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar4 + 0x98))(plVar4,*(undefined8 *)((long)&PTR_s_Idle_02be31c8 + lVar2));
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xb0);
LAB_009a51d0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009a51fc(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d66d28(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_0312e4a8) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x009a524c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x180))(plVar2,1);
  return;
}




void FUN_009a5250(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = FUN_00d66d28(*param_2);
  plVar2 = *(long **)(lVar1 + 0x18);
  while( true ) {
    if (plVar2 == (long *)0x0) {
      return;
    }
    if (*(int *)(plVar2[1] + 0xa4) == DAT_0312e4a8) break;
    plVar2 = (long *)plVar2[4];
  }
                    /* WARNING: Could not recover jumptable at 0x009a52a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x180))(plVar2,0);
  return;
}




void FUN_009a52b0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_027c18b8;
  return;
}




void FUN_009a52c8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_009a52d0(long param_1)

{
  *(char **)(param_1 + 0x10) = "Effect_GoFast";
  return;
}




void FUN_009a52e0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00d66d28(*param_2);
  FUN_00d5a794(uVar1,*(undefined8 *)(param_1 + 0x10));
  return;
}




void FUN_009a530c(undefined8 param_1,undefined8 *param_2)

{
  FUN_00d66d28(*param_2);
  FUN_00d5a7ac();
  return;
}




void FUN_009a5328(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_027c1908;
  FUN_00f0a784(param_1 + 1);
  param_1[3] = 0;
  uVar1 = DAT_03214ce8;
  uVar2 = NEON_fmov(0x3f800000,4);
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x53) = 0;
  *(undefined4 *)((long)param_1 + 0x5b) = 0xff;
  *(undefined1 *)((long)param_1 + 0x5f) = 0xff;
  param_1[0xc] = uVar2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 6) = uVar1;
  FUN_00ceabf4((long)param_1 + 0x6c);
  *(byte *)((long)param_1 + 0x6d) = *(byte *)((long)param_1 + 0x6d) & 0xf0;
  return;
}




void FUN_009a53a8(long param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  bVar2 = *(byte *)(param_1 + 0x6d);
  *(byte *)(param_1 + 0x6d) = bVar2 & 0xfb | ((*(byte *)(lVar4 + 0x2fc) & 0x1f) != 0) << 2;
  if ((*(uint *)(param_1 + 0x44) < 0xf) &&
     ((1 << (ulong)(*(uint *)(param_1 + 0x44) & 0x1f) & 0x6640U) != 0)) {
    *(byte *)(param_1 + 0x6d) = bVar2 | 4;
  }
  lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  if ((((*(byte *)(lVar4 + 0x2f7) >> 4 & 1) == 0) ||
      (lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(),
      (*(byte *)(lVar4 + 0x2f9) >> 4 & 1) != 0)) || (*(int *)(param_1 + 0x68) == 0)) {
    *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) & 0xfb;
  }
  iVar3 = *(int *)(param_1 + 0x44);
  if (iVar3 - 0xbU < 2) {
    plVar5 = *(long **)(param_1 + 0x28);
    if (plVar5 == (long *)0x0) {
LAB_009a54d4:
      *(byte *)(param_1 + 0x6d) =
           *(byte *)(param_1 + 0x6d) & 0xfb | (*(byte *)(param_1 + 0x6c) & 2) << 1;
      puVar1 = &DAT_0312e524;
      if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
        puVar1 = &DAT_0312e51c;
      }
      *(undefined4 *)(param_1 + 0x58) = *puVar1;
    }
    else {
      if (*(int *)(param_1 + 0x30) != (int)plVar5[1]) {
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
        goto LAB_009a54d4;
      }
      lVar4 = (**(code **)(*plVar5 + 0x10))();
      if (((lVar4 == 0) ||
          (lVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))(),
          *(float *)(lVar4 + 0x44) <= 0.0)) || ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0))
      goto LAB_009a54d4;
      *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) | 4;
    }
    iVar3 = *(int *)(param_1 + 0x44);
  }
  if (iVar3 != 9) {
    plVar5 = *(long **)(param_1 + 0x18);
    uVar6 = 0;
    if (plVar5 != (long *)0x0) {
      if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
        uVar6 = (**(code **)(*plVar5 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
      }
    }
    FUN_00d55794(uVar6,param_1 + 0x38,0);
  }
  plVar5 = *(long **)(param_1 + 0x18);
  uVar6 = 0;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
      uVar6 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  iVar3 = FUN_00d5bc54(uVar6);
  if (DAT_0314fdac == iVar3) {
    fVar7 = -5.0;
    if (*(float *)(param_1 + 0x38) <= 0.0) {
      fVar7 = 5.0;
    }
    *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x38) + fVar7;
    *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + 1.0;
  }
  plVar5 = *(long **)(param_1 + 0x18);
  uVar6 = 0;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x20) == (int)plVar5[1]) {
      uVar6 = (**(code **)(*plVar5 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
  }
  uVar6 = FUN_00d9ea08(uVar6);
  lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))(*(long **)(param_1 + 0x18));
  bVar2 = 0;
  if ((*(byte *)(lVar4 + 0x2f4) & 1) != 0) {
    bVar2 = FUN_00d6bbac(uVar6,DAT_0315c934,0);
    bVar2 = (bVar2 & 1) << 3;
  }
  plVar5 = *(long **)(param_1 + 0x28);
  *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) & 0xf7 | bVar2;
  if (plVar5 != (long *)0x0) {
    if (*(int *)(param_1 + 0x30) == (int)plVar5[1]) {
      lVar4 = (**(code **)(*plVar5 + 0x10))();
      if (((lVar4 != 0) &&
          (lVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))(),
          0.0 < *(float *)(lVar4 + 0x44))) &&
         (((*(byte *)(param_1 + 0x6c) >> 1 & 1) == 0 &&
          (lVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))(),
          *(float *)(lVar4 + 0x40) != 0.0)))) {
        lVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))();
        fVar7 = *(float *)(lVar4 + 0x44);
        lVar4 = (**(code **)(**(long **)(param_1 + 0x28) + 0x10))(*(long **)(param_1 + 0x28));
        fVar7 = (*(float *)(lVar4 + 0x40) - fVar7) / *(float *)(lVar4 + 0x40);
        goto LAB_009a5784;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
    }
  }
  if (*(int *)(param_1 + 0x44) != 9) {
    return;
  }
  lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  fVar7 = 0.0;
  fVar8 = *(float *)(*(long *)(lVar4 + 0x40) + 0xd0);
  if (0.0 < fVar8) {
    lVar4 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
    fVar7 = *(float *)(*(long *)(lVar4 + 0x40) + 0xcc) / fVar8;
  }
LAB_009a5784:
  *(float *)(param_1 + 100) = fVar7;
  return;
}




void FUN_009a5798(long param_1,long param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  undefined4 local_70;
  uint uStack_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(long *)(param_1 + 8) == 0) {
    FUN_00f0a814((long *)(param_1 + 8),PTR_s_build___HUDPartsCommon_atlas_02be3440);
  }
  uVar9 = DAT_03214ce8;
  uVar15 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0x18) = param_2 + 0x28;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x20) = uVar15;
  *(undefined4 *)(param_1 + 0x30) = uVar9;
  FUN_00d55794(param_2,param_1 + 0x38,0);
  uVar15 = DAT_0312e518;
  puVar17 = (undefined8 *)(param_1 + 0x44);
  *puVar17 = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = uVar15;
  *(undefined4 *)(param_1 + 0x68) = 3;
  *(undefined4 *)(param_1 + 0x5c) = uVar15;
  bVar2 = *(byte *)(param_1 + 0x6d);
  uVar18 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(param_1 + 0x4c) = 0;
  *(undefined8 *)(param_1 + 0x60) = uVar18;
  *(byte *)(param_1 + 0x6c) = *(byte *)(param_1 + 0x6c) & 0xfc;
  *(byte *)(param_1 + 0x6d) = bVar2 | 3;
  *(byte *)(param_1 + 0x6d) = bVar2 & 0xf3 | 3 | ((*(byte *)(param_2 + 0x2fc) & 0x1f) != 0) << 2;
  iVar12 = FUN_00d5bc54(param_2);
  iVar8 = DAT_0312e514;
  iVar7 = DAT_0312e510;
  iVar6 = DAT_0312e504;
  iVar5 = DAT_0312e4f8;
  iVar4 = DAT_0312e4f0;
  iVar1 = DAT_0312e4ec;
  uVar16 = *(uint *)(param_2 + 0x2f4);
  if ((uVar16 & 1) != 0) {
    uVar15 = 1;
    goto LAB_009a58b0;
  }
  if ((uVar16 & 0x110) == 0) {
    if ((uVar16 >> 0xf & 1) != 0) {
      uVar15 = 3;
LAB_009a58b0:
      *(undefined4 *)(param_1 + 0x44) = uVar15;
      goto LAB_009a58b4;
    }
    if ((uVar16 >> 0xd & 1) != 0) {
      uVar15 = 4;
      goto LAB_009a58b0;
    }
    if ((uVar16 >> 0xe & 1) != 0) {
      uVar15 = 5;
      goto LAB_009a58b0;
    }
    if (DAT_0312e500 == iVar12) {
      uVar15 = 0xd;
      goto LAB_009a58b0;
    }
    if (DAT_0312e50c == iVar12) {
      uVar15 = 6;
      goto LAB_009a58b0;
    }
    if (((DAT_0312e4f4 == iVar12) || (DAT_0312e4fc == iVar12)) || (DAT_0312e508 == iVar12)) {
LAB_009a5bc0:
      *(byte *)(param_1 + 0x6d) = *(byte *)(param_1 + 0x6d) & 0xf9;
      goto LAB_009a58c4;
    }
    if ((uVar16 >> 0x13 & 1) == 0) {
      if ((uVar16 & 0x20100000) != 0) {
        uVar15 = 2;
        goto LAB_009a58b0;
      }
      if ((uVar16 >> 0x1b & 1) != 0) {
        cVar10 = FUN_00d55870(param_2);
        cVar11 = FUN_00cedf10();
        if ((cVar10 == cVar11) || (cVar10 = FUN_00d55870(param_2), cVar10 == '\0')) {
          *(undefined4 *)(param_1 + 0x44) = 8;
          *(undefined4 *)(param_1 + 0x58) = DAT_0312e528;
          goto LAB_009a58bc;
        }
        uVar16 = *(uint *)(param_2 + 0x2f4);
      }
      if ((uVar16 >> 0xb & 1) != 0) {
        *(undefined4 *)puVar17 = 9;
        goto LAB_009a58bc;
      }
      if ((uVar16 >> 10 & 1) != 0) {
        uVar15 = 10;
        goto LAB_009a58b0;
      }
      if (iVar1 == iVar12) {
        plVar13 = *(long **)(param_1 + 0x18);
        uVar15 = 0xb;
LAB_009a5a78:
        *(undefined4 *)(param_1 + 0x44) = uVar15;
        uVar18 = 0;
        if (plVar13 != (long *)0x0) {
LAB_009a5a80:
          if (*(int *)(param_1 + 0x20) == (int)plVar13[1]) {
            uVar18 = (**(code **)(*plVar13 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x18) = 0;
            uVar18 = 0;
            *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
          }
        }
      }
      else {
        if (iVar4 == iVar12) {
          plVar13 = *(long **)(param_1 + 0x18);
          uVar15 = 0xc;
          goto LAB_009a5a78;
        }
        if (iVar5 == iVar12) {
          uVar15 = 0xe;
        }
        else {
          if (iVar6 != iVar12) {
            if (iVar7 == iVar12) {
              *(undefined4 *)(param_1 + 0x44) = 6;
              plVar13 = *(long **)(param_1 + 0x18);
              *(undefined4 *)(param_1 + 0x58) = DAT_0312e520;
              uVar18 = 0;
              if (plVar13 != (long *)0x0) {
                if (*(int *)(param_1 + 0x20) == (int)plVar13[1]) {
                  uVar18 = (**(code **)(*plVar13 + 0x10))();
                }
                else {
                  *(undefined8 *)(param_1 + 0x18) = 0;
                  uVar18 = 0;
                  *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
                }
              }
              lVar14 = FUN_01985d44(uVar18,DAT_0312e6d4);
              uVar15 = DAT_03214ce8;
              if (lVar14 == 0) {
                uVar18 = 0;
                *(undefined8 *)(param_1 + 0x28) = 0;
                *(undefined4 *)(param_1 + 0x30) = uVar15;
              }
              else {
                iVar1 = *(int *)(lVar14 + 0x30);
                *(long **)(param_1 + 0x28) = (long *)(lVar14 + 0x28);
                *(int *)(param_1 + 0x30) = iVar1;
                if (iVar1 == *(int *)(lVar14 + 0x30)) {
                  uVar18 = (**(code **)(*(long *)(lVar14 + 0x28) + 0x10))();
                }
                else {
                  uVar18 = 0;
                  *(undefined8 *)(param_1 + 0x28) = 0;
                  *(undefined4 *)(param_1 + 0x30) = uVar15;
                }
              }
              FUN_00d7bf88(0,uVar18,param_1);
              FUN_00ceac04(&local_70);
              uVar16 = uStack_6c;
              uStack_6c = uStack_6c & 0xfffffffc;
              FUN_009a5de8(param_1,CONCAT44(uVar16,local_70) & 0xfffffffcffffffff);
              goto LAB_009a58bc;
            }
            if (iVar8 != iVar12) goto LAB_009a5bc0;
            plVar13 = *(long **)(param_1 + 0x18);
            uVar15 = 9;
            goto LAB_009a5a78;
          }
          uVar15 = 0xd;
        }
        *(undefined4 *)(param_1 + 0x44) = uVar15;
        plVar13 = *(long **)(param_1 + 0x18);
        *(undefined4 *)(param_1 + 0x58) = DAT_0312e520;
        if (plVar13 != (long *)0x0) goto LAB_009a5a80;
        uVar18 = 0;
      }
      lVar14 = FUN_01985d44(uVar18,DAT_0312e6d4);
      uVar15 = DAT_03214ce8;
      if (lVar14 == 0) {
        uVar18 = 0;
        *(undefined8 *)(param_1 + 0x28) = 0;
        *(undefined4 *)(param_1 + 0x30) = uVar15;
      }
      else {
        iVar1 = *(int *)(lVar14 + 0x30);
        *(long **)(param_1 + 0x28) = (long *)(lVar14 + 0x28);
        *(int *)(param_1 + 0x30) = iVar1;
        if (iVar1 == *(int *)(lVar14 + 0x30)) {
          uVar18 = (**(code **)(*(long *)(lVar14 + 0x28) + 0x10))();
        }
        else {
          uVar18 = 0;
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined4 *)(param_1 + 0x30) = uVar15;
        }
      }
      FUN_00d7bf88(0,uVar18,param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x44) = 7;
      FUN_009a5c80(param_1);
      *(undefined1 *)(param_1 + 0x5b) = 0x80;
    }
  }
  else {
    *(undefined4 *)puVar17 = 2;
    cVar10 = FUN_00d55870(param_2);
    if (cVar10 == '\0') goto LAB_009a58bc;
LAB_009a58b4:
    FUN_009a5c80(param_1);
  }
LAB_009a58bc:
  FUN_009a5ea0(param_1);
LAB_009a58c4:
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009a5c80(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  
  if (((DAT_0312e530 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0312e530), iVar1 != 0)) {
    DAT_0312e52c = 0xff91be3f;
    __cxa_guard_release(&DAT_0312e530);
  }
  if (((DAT_0312e540 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0312e540), iVar1 != 0)) {
    DAT_0312e538 = 0xffe0ba14;
    __cxa_guard_release(&DAT_0312e540);
  }
  if (((DAT_0312e550 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0312e550), iVar1 != 0)) {
    DAT_0312e548 = 0xff2652c9;
    __cxa_guard_release(&DAT_0312e550);
  }
  lVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x10))();
  uVar3 = FUN_00ced270(*(undefined4 *)(lVar2 + 0x260));
  if ((uVar3 & 1) == 0) {
    plVar4 = *(long **)(param_1 + 0x18);
    uVar5 = 0;
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_1 + 0x20) == (int)plVar4[1]) {
        uVar5 = (**(code **)(*plVar4 + 0x10))();
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
      }
    }
    uVar3 = FUN_00d9e99c(uVar5);
    puVar6 = &DAT_0312e538;
    if ((uVar3 & 1) == 0) {
      puVar6 = &DAT_0312e548;
    }
  }
  else {
    puVar6 = &DAT_0312e52c;
  }
  *(undefined4 *)(param_1 + 0x58) = *puVar6;
  return;
}




void FUN_009a5de8(long param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)(param_2 >> 0x20) & 3;
  *(uint *)(param_1 + 0x68) = uVar1;
  uVar4 = DAT_0312e51c;
  if (uVar1 != 3) {
    if (uVar1 == 2) {
      plVar2 = *(long **)(param_1 + 0x28);
      uVar3 = 0;
      if (plVar2 != (long *)0x0) {
        if (*(int *)(param_1 + 0x30) == (int)plVar2[1]) {
          uVar3 = (**(code **)(*plVar2 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x28) = 0;
          uVar3 = 0;
          *(undefined4 *)(param_1 + 0x30) = DAT_03214ce8;
        }
      }
      FUN_00d7bf88(param_2 & 0xffffffff,uVar3,param_1);
      return;
    }
    uVar4 = DAT_0312e520;
    if (uVar1 != 1) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x58) = uVar4;
  return;
}




void FUN_009a5ea0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  char *pcVar3;
  long *plVar4;
  char acStack_b8 [128];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  switch(*(undefined4 *)(param_1 + 0x44)) {
  case 1:
    uVar2 = FUN_00f0a7e0(param_1 + 8,"hud_minimap_herohalo_neutral");
    plVar4 = *(long **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    if (plVar4 == (long *)0x0) {
      uVar2 = 0;
    }
    else if (*(int *)(param_1 + 0x20) == (int)plVar4[1]) {
      uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
    }
    uVar2 = FUN_00d5bc2c(uVar2);
    FUN_00e6a93c(acStack_b8,0x80,"icon_hero_%s",uVar2);
    pcVar3 = acStack_b8;
    goto LAB_009a6084;
  case 2:
  case 0xb:
    pcVar3 = "hud_minimap_minion_neutral";
    break;
  case 3:
    pcVar3 = "hud_minimap_nexus_neutral";
    break;
  case 4:
    pcVar3 = "hud_minimap_turret_neutral";
    break;
  case 5:
    pcVar3 = "hud_minimap_armory";
    break;
  case 6:
    pcVar3 = "hud_minimap_kraken_neutral";
    break;
  case 7:
    pcVar3 = "hud_minimap_vision_eye";
    break;
  case 8:
    pcVar3 = "hud_minimap_store_neutral";
    break;
  case 9:
    uVar2 = FUN_00f0a7e0(param_1 + 8,"hud_minimap_timer_coin_black");
    pcVar3 = "hud_minimap_timer_coin_white";
    *(undefined8 *)(param_1 + 0x48) = uVar2;
LAB_009a6084:
    uVar2 = FUN_00f0a7e0(param_1 + 8,pcVar3);
    *(undefined8 *)(param_1 + 0x50) = uVar2;
    goto LAB_009a6004;
  case 10:
    pcVar3 = "hud_minimap_crystalminer";
    break;
  case 0xc:
    pcVar3 = "hud_minimap_buff_camp";
    break;
  case 0xd:
    pcVar3 = "hud_minimap_blackclaw";
    break;
  case 0xe:
    pcVar3 = "hud_minimap_ghostwing";
    break;
  default:
    *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
    goto LAB_009a6004;
  }
  uVar2 = FUN_00f0a7e0(param_1 + 8,pcVar3);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
LAB_009a6004:
  uVar2 = FUN_00920a70();
  FUN_009a6098(param_1,uVar2);
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

