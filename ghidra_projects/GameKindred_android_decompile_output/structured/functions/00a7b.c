// functions/00a7b — 20 functions
#include "libGameKindred.h"




void thunk_FUN_00a7b15c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float afStack_60 [3];
  float fStack_54;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar1 = tpidr_el0;
  lStack_48 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)FUN_009240a4();
  uStack_50 = 0;
  uVar2 = FUN_019807a4();
  if ((uVar2 & 1) == 0) {
    FUN_01980738((long)&uStack_50 + 4,&uStack_50,0,0);
    FUN_00f0036c(afStack_60,(ulong)afStack_60 | 4);
    afStack_60[0] = uStack_50._4_4_ / afStack_60[0];
    uStack_50 = CONCAT44(afStack_60[0],(undefined4)uStack_50);
  }
  else {
    lVar3 = FUN_019807cc(0);
    FUN_00f0036c(afStack_60,&fStack_54);
    afStack_60[0] = *(float *)(lVar3 + 4) / afStack_60[0];
    uStack_50 = CONCAT44(afStack_60[0],*(float *)(lVar3 + 8) / fStack_54);
  }
  fVar6 = afStack_60[0] - *(float *)(param_1 + 0x670);
  fVar5 = (float)FUN_00f0e700(param_1 + 0x630);
  if (fVar5 <= fVar6) {
    fVar6 = fVar5;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  uStack_50 = CONCAT44(fVar6,(undefined4)uStack_50);
  fVar5 = (float)FUN_00f0e700(param_1 + 0x630);
  *(undefined1 *)(param_1 + 0x5365) = 0;
  FUN_00a7b058(param_1);
  FUN_009188a4();
  FUN_0091a558(fVar4 * (fVar6 / fVar5));
  if (*(long *)(lVar1 + 0x28) == lStack_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00a7b104(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009188a4();
  FUN_0091a0e4(uVar1,0);
  FUN_009bbfb0();
  FUN_009bd6fc();
  return;
}




void FUN_00a7b044(long param_1)

{
  if (*(char *)(param_1 + 0x5364) != '\0') {
    FUN_00a7b058();
    return;
  }
  FUN_00a7b098();
  return;
}




void FUN_00a7b058(long param_1)

{
  if (*(char *)(param_1 + 0x5364) != '\0') {
    *(char *)(param_1 + 0x5364) = '\0';
    *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) & 0xfffffffb;
    *(uint *)(param_1 + 0x1a8c) = *(uint *)(param_1 + 0x1a8c) | 4;
    FUN_00ce2834((double)*(float *)(param_1 + 0x5360));
    return;
  }
  return;
}




void FUN_00a7b098(long param_1)

{
  double dVar1;
  
  if (*(char *)(param_1 + 0x5364) != '\0') {
    return;
  }
  *(char *)(param_1 + 0x5364) = '\x01';
  *(uint *)(param_1 + 0x1a8c) = *(uint *)(param_1 + 0x1a8c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) | 4;
  dVar1 = (double)FUN_00ce2828();
  *(float *)(param_1 + 0x5360) = (float)dVar1;
  FUN_00ce2834(0);
  return;
}




void FUN_00a7b104(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009188a4();
  FUN_0091a0e4(uVar1,0);
  FUN_009bbfb0();
  FUN_009bd6fc();
  return;
}




void FUN_00a7b124(long param_1)

{
  *(undefined1 *)(param_1 + 0x5364) = 1;
  *(uint *)(param_1 + 0x1a8c) = *(uint *)(param_1 + 0x1a8c) & 0xfffffffb;
  *(uint *)(param_1 + 0x1b7c) = *(uint *)(param_1 + 0x1b7c) | 4;
  return;
}




void FUN_00a7b14c(long param_1)

{
  *(undefined1 *)(param_1 + 0x5365) = 1;
  FUN_00a7b098();
  return;
}




void FUN_00a7b15c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_60 [3];
  float local_54;
  undefined8 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  fVar4 = (float)FUN_009240a4();
  local_50 = 0;
  uVar2 = FUN_019807a4();
  if ((uVar2 & 1) == 0) {
    FUN_01980738((long)&local_50 + 4,&local_50,0,0);
    FUN_00f0036c(local_60,(ulong)local_60 | 4);
    local_60[0] = local_50._4_4_ / local_60[0];
    local_50 = CONCAT44(local_60[0],(undefined4)local_50);
  }
  else {
    lVar3 = FUN_019807cc(0);
    FUN_00f0036c(local_60,&local_54);
    local_60[0] = *(float *)(lVar3 + 4) / local_60[0];
    local_50 = CONCAT44(local_60[0],*(float *)(lVar3 + 8) / local_54);
  }
  fVar6 = local_60[0] - *(float *)(param_1 + 0x670);
  fVar5 = (float)FUN_00f0e700(param_1 + 0x630);
  if (fVar5 <= fVar6) {
    fVar6 = fVar5;
  }
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  local_50 = CONCAT44(fVar6,(undefined4)local_50);
  fVar5 = (float)FUN_00f0e700(param_1 + 0x630);
  *(undefined1 *)(param_1 + 0x5365) = 0;
  FUN_00a7b058(param_1);
  FUN_009188a4();
  FUN_0091a558(fVar4 * (fVar6 / fVar5));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a7b284(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  float fVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x5358) + (ulong)param_3 * 8);
  if (lVar1 != 0) {
    fVar2 = *(float *)(lVar1 + 0x890) + -5.0;
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    FUN_009188a4();
    FUN_0091a558(fVar2);
    return;
  }
  return;
}




void FUN_00a7b2c8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027cdd28;
  FUN_00abaee8(plVar1,1);
  plVar2 = param_1 + 0xd6;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0xf4;
  FUN_00f0e4a8(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00abb1c8(0x3f4ccccd,plVar1,&DAT_01bee7f6);
  FUN_00b09144(0xbf800000,plVar1);
  if ((*(float *)(param_1 + 0x21) != 0.5) || (*(float *)((long)param_1 + 0x10c) != 0.5)) {
    param_1[0x21] = 0x3f0000003f000000;
    FUN_0091ada4(plVar1);
  }
  uVar4 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x13c) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e548(plVar2,PTR_s_build___Tutorial_Components_tga_02be3478,"vert_fade");
  uVar4 = *(uint *)((long)param_1 + 0x734);
  *(byte *)(param_1 + 0xf1) = *(byte *)(param_1 + 0xf1) | 2;
  if ((uVar4 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x734) = uVar4 & 0xffff8000 | uVar4 & 0x7f | 0x6600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f13f08(0x40c00000,0x42480000,plVar2);
  FUN_00f0e548(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440,"hud_replay_kill");
  *(uint *)((long)param_1 + 0x824) = *(uint *)((long)param_1 + 0x824) & 0xfffffffb;
  return;
}




void FUN_00a7b478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cdd28;
  param_1[0xf4] = &PTR_FUN_028266f0;
  param_1[0x10b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x10e);
  FUN_00f13d08(param_1 + 0xf4);
  param_1[0xd6] = &PTR_FUN_028266f0;
  param_1[0xed] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf0);
  FUN_00f13d08(param_1 + 0xd6);
  param_1[0x17] = &PTR_FUN_027d5388;
  param_1[0xb2] = &PTR_FUN_028266f0;
  param_1[0xc9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xcc);
  FUN_00f13d08(param_1 + 0xb2);
  param_1[0x94] = &PTR_FUN_028266f0;
  param_1[0xab] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xae);
  FUN_00f13d08(param_1 + 0x94);
  param_1[0x76] = &PTR_FUN_028266f0;
  param_1[0x8d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x90);
  FUN_00f13d08(param_1 + 0x76);
  FUN_00f01868(param_1 + 0x65);
  FUN_009c825c(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a7b578(void *param_1)

{
  FUN_00a7b478();
  operator_delete(param_1);
  return;
}




void FUN_00a7b59c(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
      } while (lVar3 != 0);
      puVar2 = *(undefined8 **)(param_1 + 2);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_00a7b61c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = FUN_01985d44(param_1,DAT_03133524);
  if (lVar1 != 0) {
    if (*(float *)(param_2 + 0xac) == -1.0) {
      FUN_00d80ebc(param_1);
    }
    FUN_00a7b690(lVar1,param_2,param_3);
    return;
  }
  return;
}




void FUN_00a7b690(undefined4 param_1,long param_2,undefined8 *param_3,long *param_4)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long *plVar12;
  long lVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  undefined8 uVar19;
  uint uVar20;
  uint local_d0 [2];
  uint local_c8 [2];
  uint local_c0 [2];
  uint local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = *(undefined1 *)(param_3 + 0x16);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x8c) = param_1;
  *(undefined1 *)(param_2 + 0x90) = uVar1;
  uVar9 = FUN_00d817fc(uVar19);
  uVar10 = FUN_00d818a4(uVar19);
  if (((uVar9 & 1) == 0) && ((uVar10 & 1) == 0)) goto LAB_00a7bd18;
  uVar20 = 0x811c9dc5;
  FUN_00cedce4();
  cVar5 = FUN_00cecb68();
  cVar6 = FUN_00d813b8(uVar19);
  puVar11 = (undefined8 *)FUN_00d80eb4(uVar19);
  uStack_a8 = puVar11[1];
  local_b0 = *puVar11;
  uStack_98 = puVar11[3];
  local_a0 = puVar11[2];
  uStack_88 = puVar11[5];
  local_90 = puVar11[4];
  uStack_78 = puVar11[7];
  local_80 = puVar11[6];
  if (((cVar5 == cVar6) || (pbVar17 = (byte *)param_3[1], pbVar17 == (byte *)0x0)) &&
     (pbVar17 = (byte *)*param_3, pbVar17 == (byte *)0x0)) {
    local_b8[0] = 0;
  }
  else {
    local_b8[0] = 0x811c9dc5;
    if (*pbVar17 != 0) {
      local_b8[0] = 0x811c9dc5;
      uVar16 = (uint)*pbVar17;
      do {
        pbVar17 = pbVar17 + 1;
        local_b8[0] = (local_b8[0] ^ uVar16) * 0x1000193;
        uVar16 = (uint)*pbVar17;
      } while (*pbVar17 != 0);
    }
  }
  if ((local_b8[0] != 0x811c9dc5) && (local_b8[0] != 0)) {
    if (param_4 != (long *)0x0) {
      local_b8[0] = (**(code **)(*param_4 + 8))(param_4,local_b8[0]);
    }
    FUN_00a7bde0(param_2,(long *)(param_2 + 0x28),local_b8,&local_b0,(long)param_3 + 0xa4);
    plVar12 = *(long **)(param_2 + 0x28);
    if (plVar12 != (long *)0x0) {
      if (*(int *)(param_2 + 0x30) == (int)plVar12[1]) {
        lVar13 = (**(code **)(*plVar12 + 0x10))();
        if ((lVar13 != 0) && (lVar13 = param_3[0x11], lVar13 != 0)) {
          plVar12 = *(long **)(param_2 + 0x28);
          uVar14 = 0;
          if (plVar12 != (long *)0x0) {
            if (*(int *)(param_2 + 0x30) == (int)plVar12[1]) {
              uVar14 = (**(code **)(*plVar12 + 0x10))();
              lVar13 = param_3[0x11];
            }
            else {
              *(undefined8 *)(param_2 + 0x28) = 0;
              uVar14 = 0;
              *(undefined4 *)(param_2 + 0x30) = DAT_03214ce8;
            }
          }
          FUN_009d3edc(uVar14,lVar13,*(undefined4 *)(param_3 + 0x12),(long)param_3 + 0x94);
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x28) = 0;
        *(undefined4 *)(param_2 + 0x30) = DAT_03214ce8;
      }
    }
  }
  if (((cVar5 == cVar6) || (pbVar17 = (byte *)param_3[3], pbVar17 == (byte *)0x0)) &&
     (pbVar17 = (byte *)param_3[2], pbVar17 == (byte *)0x0)) {
    local_c0[0] = 0;
  }
  else {
    local_c0[0] = 0x811c9dc5;
    if (*pbVar17 != 0) {
      local_c0[0] = 0x811c9dc5;
      uVar16 = (uint)*pbVar17;
      do {
        pbVar17 = pbVar17 + 1;
        local_c0[0] = (local_c0[0] ^ uVar16) * 0x1000193;
        uVar16 = (uint)*pbVar17;
      } while (*pbVar17 != 0);
    }
  }
  if ((local_c0[0] != 0x811c9dc5) && (local_c0[0] != 0)) {
    if (param_4 != (long *)0x0) {
      local_c0[0] = (**(code **)(*param_4 + 8))(param_4,local_c0[0]);
    }
    FUN_00a7bde0(param_2,param_2 + 0x38,local_c0,&local_b0,0);
  }
  if (((cVar5 == cVar6) || (pbVar17 = (byte *)param_3[9], pbVar17 == (byte *)0x0)) &&
     (pbVar17 = (byte *)param_3[8], pbVar17 == (byte *)0x0)) {
    local_c8[0] = 0;
  }
  else {
    local_c8[0] = 0x811c9dc5;
    if (*pbVar17 != 0) {
      local_c8[0] = 0x811c9dc5;
      uVar16 = (uint)*pbVar17;
      do {
        pbVar17 = pbVar17 + 1;
        local_c8[0] = (local_c8[0] ^ uVar16) * 0x1000193;
        uVar16 = (uint)*pbVar17;
      } while (*pbVar17 != 0);
    }
  }
  if ((local_c8[0] != 0x811c9dc5) && (local_c8[0] != 0)) {
    if (param_4 != (long *)0x0) {
      local_c8[0] = (**(code **)(*param_4 + 8))(param_4,local_c8[0]);
    }
    plVar12 = (long *)(param_2 + 0x68);
    FUN_00a7bde0(param_2,plVar12,local_c8,&local_b0,0);
    plVar15 = *(long **)(param_2 + 0x68);
    if (plVar15 != (long *)0x0) {
      if (*(int *)(param_2 + 0x70) == (int)plVar15[1]) {
        lVar13 = (**(code **)(*plVar15 + 0x10))();
        if (lVar13 != 0) {
          if (*(char *)((long)param_3 + 0xb1) == '\0') {
            uVar19 = FUN_00d81070(uVar19);
          }
          else {
            uVar19 = FUN_00d81178(uVar19);
          }
          pbVar17 = (byte *)param_3[10];
          if (pbVar17 == (byte *)0x0) {
            lVar13 = param_3[0xb];
            if (lVar13 != 0) {
              plVar12 = (long *)*plVar12;
              if (plVar12 == (long *)0x0) {
                uVar14 = 0;
              }
              else if (*(int *)(param_2 + 0x70) == (int)plVar12[1]) {
                uVar14 = (**(code **)(*plVar12 + 0x10))();
                lVar13 = param_3[0xb];
              }
              else {
                *(undefined8 *)(param_2 + 0x68) = 0;
                uVar14 = 0;
                *(undefined4 *)(param_2 + 0x70) = DAT_03214ce8;
              }
              FUN_00d5a5c4(uVar19,lVar13);
              uVar7 = FUN_01995208();
              FUN_009d3d6c(uVar14,uVar19,uVar7);
            }
          }
          else {
            plVar12 = (long *)*plVar12;
            if (plVar12 == (long *)0x0) {
LAB_00a7bae8:
              uVar14 = 0;
LAB_00a7baec:
              if (*pbVar17 == 0) {
                local_d0[0] = 0x811c9dc5;
              }
              else {
                local_d0[0] = 0x811c9dc5;
                uVar16 = (uint)*pbVar17;
                do {
                  pbVar17 = pbVar17 + 1;
                  local_d0[0] = (local_d0[0] ^ uVar16) * 0x1000193;
                  uVar16 = (uint)*pbVar17;
                } while (*pbVar17 != 0);
              }
            }
            else {
              if (*(int *)(param_2 + 0x70) != (int)plVar12[1]) {
                *(undefined8 *)(param_2 + 0x68) = 0;
                *(undefined4 *)(param_2 + 0x70) = DAT_03214ce8;
                goto LAB_00a7bae8;
              }
              uVar14 = (**(code **)(*plVar12 + 0x10))();
              pbVar17 = (byte *)param_3[10];
              if (pbVar17 != (byte *)0x0) goto LAB_00a7baec;
              local_d0[0] = 0;
            }
            FUN_009d3d8c(uVar14,uVar19,local_d0);
          }
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x68) = 0;
        *(undefined4 *)(param_2 + 0x70) = DAT_03214ce8;
      }
    }
  }
  local_80 = CONCAT44(0x3c23d70a,(undefined4)local_80);
  if (((cVar5 == cVar6) || (pbVar17 = (byte *)param_3[7], pbVar17 == (byte *)0x0)) &&
     (pbVar17 = (byte *)param_3[6], pbVar17 == (byte *)0x0)) {
    local_d0[0] = 0;
  }
  else {
    local_d0[0] = 0x811c9dc5;
    if (*pbVar17 != 0) {
      local_d0[0] = 0x811c9dc5;
      uVar16 = (uint)*pbVar17;
      do {
        pbVar17 = pbVar17 + 1;
        local_d0[0] = (local_d0[0] ^ uVar16) * 0x1000193;
        uVar16 = (uint)*pbVar17;
      } while (*pbVar17 != 0);
    }
  }
  if ((local_d0[0] != 0x811c9dc5) && (local_d0[0] != 0)) {
    if (param_4 != (long *)0x0) {
      local_d0[0] = (**(code **)(*param_4 + 8))(param_4,local_d0[0]);
    }
    FUN_00a7bde0(param_2,param_2 + 0x58,local_d0,&local_b0,0);
  }
  if (((cVar5 == cVar6) || (pbVar17 = (byte *)param_3[5], pbVar17 == (byte *)0x0)) &&
     (pbVar17 = (byte *)param_3[4], pbVar17 == (byte *)0x0)) {
    uVar20 = 0;
  }
  else {
    uVar16 = (uint)*pbVar17;
    if (*pbVar17 != 0) {
      do {
        pbVar17 = pbVar17 + 1;
        uVar20 = (uVar20 ^ uVar16) * 0x1000193;
        uVar16 = (uint)*pbVar17;
      } while (*pbVar17 != 0);
    }
  }
  *(uint *)(param_2 + 0x78) = uVar20;
  if (((param_4 != (long *)0x0) && (uVar20 != 0x811c9dc5)) && (uVar20 != 0)) {
    uVar7 = (**(code **)(*param_4 + 8))(param_4,uVar20);
    *(undefined4 *)(param_2 + 0x78) = uVar7;
  }
  lVar13 = 0;
  iVar18 = 0;
  do {
    lVar4 = lVar13 + 0x60;
    lVar13 = lVar13 + 8;
    if (*(long *)((long)param_3 + lVar4) != 0) {
      iVar18 = iVar18 + 1;
    }
  } while (lVar13 != 0x28);
  if (iVar18 != 0) {
    iVar8 = rand();
    iVar2 = 0;
    if (iVar18 != 0) {
      iVar2 = iVar8 / iVar18;
    }
    uVar19 = param_3[(long)(iVar8 - iVar2 * iVar18) + 0xc];
    if (param_4 != (long *)0x0) {
      uVar19 = (**(code **)(*param_4 + 0x10))(param_4);
    }
    *(undefined8 *)(param_2 + 0x80) = uVar19;
    *(undefined4 *)(param_2 + 0x88) = *(undefined4 *)(param_3 + 0x15);
  }
LAB_00a7bd18:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a7bd4c(undefined8 *param_1)

{
  undefined4 uVar1;
  
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027cde70;
  uVar1 = DAT_03214ce8;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 6) = uVar1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 10) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  return;
}




undefined8 FUN_00a7bda0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




uint FUN_00a7bda8(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = FUN_00d817fc(uVar3);
  uVar2 = FUN_00d818a4(uVar3);
  return (uVar1 | uVar2) & 1;
}




void FUN_00a7bde0(long param_1,long *param_2,int *param_3,undefined8 param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  
  if ((*param_3 == -0x7ee3623b) || (*param_3 == 0)) {
    plVar3 = (long *)*param_2;
  }
  else {
    lVar2 = FUN_01988738(DAT_02e3ef98,0);
    plVar3 = (long *)(lVar2 + 0x40);
    iVar5 = DAT_03214ce8;
    plVar1 = (long *)0x0;
    if ((lVar2 == 0) || (iVar5 = *(int *)(lVar2 + 0x48), plVar1 = plVar3, iVar5 == DAT_03214ce8)) {
      plVar3 = plVar1;
      *param_2 = (long)plVar3;
    }
    else {
      *param_2 = (long)plVar3;
    }
    *(int *)(param_2 + 1) = iVar5;
  }
  if (plVar3 != (long *)0x0) {
    if ((int)param_2[1] == (int)plVar3[1]) {
      lVar2 = (**(code **)(*plVar3 + 0x10))();
      if (lVar2 != 0) {
        plVar3 = (long *)*param_2;
        uVar4 = 0;
        if (plVar3 != (long *)0x0) {
          if ((int)param_2[1] == (int)plVar3[1]) {
            uVar4 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *param_2 = 0;
            uVar4 = 0;
            *(int *)(param_2 + 1) = DAT_03214ce8;
          }
        }
        FUN_009d3364(uVar4,param_3);
        plVar3 = (long *)*param_2;
        uVar4 = 0;
        if (plVar3 != (long *)0x0) {
          if ((int)param_2[1] == (int)plVar3[1]) {
            uVar4 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *param_2 = 0;
            uVar4 = 0;
            *(int *)(param_2 + 1) = DAT_03214ce8;
          }
        }
        FUN_009d34d4(uVar4,param_4);
        if (param_5 != 0) {
          plVar3 = (long *)*param_2;
          uVar4 = 0;
          if (plVar3 != (long *)0x0) {
            if ((int)param_2[1] == (int)plVar3[1]) {
              uVar4 = (**(code **)(*plVar3 + 0x10))();
            }
            else {
              *param_2 = 0;
              uVar4 = 0;
              *(int *)(param_2 + 1) = DAT_03214ce8;
            }
          }
          FUN_009d3ebc(uVar4,param_5);
        }
        plVar3 = (long *)*param_2;
        uVar4 = 0;
        if (plVar3 != (long *)0x0) {
          if ((int)param_2[1] == (int)plVar3[1]) {
            uVar4 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *param_2 = 0;
            uVar4 = 0;
            *(int *)(param_2 + 1) = DAT_03214ce8;
          }
        }
        FUN_009d3ec8(*(undefined4 *)(param_1 + 0x8c),uVar4);
        plVar3 = (long *)*param_2;
        uVar4 = 0;
        if (plVar3 != (long *)0x0) {
          if ((int)param_2[1] == (int)plVar3[1]) {
            uVar4 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            *param_2 = 0;
            uVar4 = 0;
            *(int *)(param_2 + 1) = DAT_03214ce8;
          }
        }
        FUN_009d33ec(uVar4);
        return;
      }
    }
    else {
      *param_2 = 0;
      *(int *)(param_2 + 1) = DAT_03214ce8;
    }
  }
  return;
}

