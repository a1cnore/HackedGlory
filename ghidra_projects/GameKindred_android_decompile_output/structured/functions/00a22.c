// functions/00a22 — 8 functions
#include "libGameKindred.h"




void FUN_00a22cc8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x1ce0),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"ability_icon_inactive_overlay");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00a22d74(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x1ce4),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"ability_icon_inactive_overlay");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00a22e20(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_00a2569c(param_5);
  fVar2 = (float)NEON_fminnm(1.0 - fVar2,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_00f0a7e0(param_3,"ability_energy_ring");
  FUN_00a20e44(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1,
               param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_00a22ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a25d14(param_1,param_4);
  return;
}




void FUN_00a22ee0(undefined8 param_1)

{
  FUN_00a25b44();
  FUN_00a24bcc(param_1);
  return;
}




void FUN_00a22f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a26544(param_1,param_4);
  return;
}




void FUN_00a22f0c(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x11 & 1) == 0) {
    return;
  }
  FUN_00a25880();
  return;
}




void FUN_00a22f28(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  uint3 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  uint uVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  int local_60 [2];
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  plVar7 = *(long **)(param_3 + 0x1a8);
  if (plVar7 != (long *)0x0) {
    if (*(int *)(param_3 + 0x1b0) == (int)plVar7[1]) {
      lVar8 = (**(code **)(*plVar7 + 0x10))();
      if (lVar8 != 0) {
        lVar13 = *(long *)(lVar8 + 0x18);
        while ((lVar13 != 0 && (*(int *)(*(long *)(lVar13 + 8) + 0xa4) != DAT_02e3ef78))) {
          lVar13 = *(long *)(lVar13 + 0x20);
        }
        uVar4 = FUN_00d53978(lVar13,*(undefined4 *)(param_3 + 0x1ce8));
        if ((uVar4 & 1) == 0) {
          uVar5 = FUN_00d53a44(lVar13,*(undefined4 *)(param_3 + 0x1ce8));
          iVar6 = FUN_00d53a30(lVar13,*(undefined4 *)(param_3 + 0x1ce8));
          if (1 < uVar5) {
            fVar14 = (float)FUN_00d53a58(lVar13,*(undefined4 *)(param_3 + 0x1ce8));
            fVar15 = (float)FUN_00d53a00(lVar13,*(undefined4 *)(param_3 + 0x1ce8));
            fVar14 = fVar14 / fVar15;
            if (fVar15 <= 0.0) {
              fVar14 = 0.0;
            }
            param_2 = (float)NEON_fminnm(fVar14,0x3f800000);
            *(float *)(param_3 + 0x1ce4) = param_2;
            *(byte *)(param_3 + 0x1cf2) =
                 (byte)(((uint)(iVar6 == 0) << 0x17) >> 0x10) | *(byte *)(param_3 + 0x1cf2) & 0x7f;
            FUN_00a27764(param_3,iVar6);
          }
          if ((uVar4 >> 5 & 1) == 0) {
            if ((uVar4 >> 7 & 1) != 0) {
              pcVar10 = "ability_stunned_badge";
LAB_00a230e4:
              FUN_00f0e578(param_3 + 0xcb0,pcVar10);
              if ((*(float *)(param_3 + 0xcf0) != 0.0) || (*(float *)(param_3 + 0xcf4) != 0.0)) {
                *(undefined8 *)(param_3 + 0xcf0) = 0;
                FUN_0091ada4(param_3 + 0xcb0);
              }
              uVar12 = *(uint *)(param_3 + 0xe24);
              uVar5 = *(uint *)(param_3 + 0xd34) | 4;
              goto LAB_00a2311c;
            }
            if (((uVar4 >> 8 & 1) != 0) || ((uVar4 >> 9 & 1) != 0)) {
              pcVar10 = "ability_silenced_badge";
              goto LAB_00a230e4;
            }
            if ((uVar4 >> 3 & 1) == 0) {
              if ((uVar4 & 0x452) == 0) {
                uVar5 = *(uint *)(param_3 + 0xe24);
                puVar2 = (uint3 *)(param_3 + 0x1cf0);
                if (((uVar5 >> 2 & 1) != 0) || (uVar12 = (uint)(int3)*puVar2, (int)uVar12 < 0)) {
                  FUN_00a274d4(param_3,0);
                  uVar5 = *(uint *)(param_3 + 0xe24);
                  uVar12 = (uint)*puVar2;
                }
                *(short *)puVar2 = (short)uVar12;
                *(byte *)(param_3 + 0x1cf2) = (byte)(uVar12 >> 0x10) & 0x7f;
                *(uint *)(param_3 + 0xe24) = uVar5 & 0xfffffffb;
                *(uint *)(param_3 + 0xd34) = *(uint *)(param_3 + 0xd34) & 0xfffffffb;
                goto LAB_00a23128;
              }
              goto LAB_00a23070;
            }
            FUN_00f0e578(param_3 + 0xcb0,"ability_energy_badge");
            if ((*(float *)(param_3 + 0xcf0) != 0.0) || (*(float *)(param_3 + 0xcf4) != 0.0)) {
              *(undefined8 *)(param_3 + 0xcf0) = 0;
              FUN_0091ada4(param_3 + 0xcb0);
            }
            uVar5 = *(uint *)(param_3 + 0xd34) | 4;
            uVar12 = *(uint *)(param_3 + 0xe24) | 4;
          }
          else {
LAB_00a23070:
            uVar12 = *(uint *)(param_3 + 0xe24);
            uVar5 = *(uint *)(param_3 + 0xd34) & 0xfffffffb;
LAB_00a2311c:
            uVar12 = uVar12 & 0xfffffffb;
          }
          *(uint *)(param_3 + 0xd34) = uVar5;
          *(uint *)(param_3 + 0xe24) = uVar12;
        }
LAB_00a23128:
        fVar14 = (float)FUN_00f13e54(param_3 + 0x1b8);
        FUN_00f13e54(param_3 + 0x1b8);
        if (param_2 <= fVar14) {
          fVar14 = param_2;
        }
        if ((*(byte *)(param_3 + 0xd34) >> 2 & 1) != 0) {
          lVar1 = param_3 + 0xcb0;
          iVar6 = FUN_00f0e650(lVar1);
          thunk_FUN_00d9ff34(local_60,"ability_energy_badge");
          if (iVar6 == local_60[0]) {
            fVar15 = 0.4;
          }
          else {
            fVar15 = 0.8;
          }
          fVar16 = (float)FUN_00f0e700(lVar1);
          fVar16 = (fVar14 * fVar15) / fVar16;
          param_2 = (fVar14 * fVar15) / param_2;
          if ((*(float *)(param_3 + 0xcf8) != fVar16) || (*(float *)(param_3 + 0xcfc) != param_2)) {
            *(float *)(param_3 + 0xcf8) = fVar16;
            *(float *)(param_3 + 0xcfc) = param_2;
            FUN_0091ada4(lVar1);
          }
        }
        if (((uVar4 >> 2 & 1) == 0) || (((uVar4 >> 5 & 1) == 0 && ((uVar4 & 0x38a) != 0)))) {
          if ((uVar4 == 0) &&
             (((iVar6 = FUN_00d535a4(lVar13,*(undefined4 *)(param_3 + 0x1ce8)), iVar6 != 0 &&
               (uVar9 = FUN_00d52fe0(lVar13,*(undefined4 *)(param_3 + 0x1ce8)), (uVar9 & 1) != 0))
              && (uVar9 = FUN_00d5867c(lVar8,*(undefined4 *)(param_3 + 0x1ce8)), (uVar9 & 1) != 0)))
             ) {
            uVar11 = 1;
            goto LAB_00a23228;
          }
        }
        else {
          uVar11 = 3;
LAB_00a23228:
          FUN_00a239fc(param_3 + 0xb8,uVar11,0,0);
        }
        fVar14 = (float)FUN_00d539e8(lVar13,*(undefined4 *)(param_3 + 0x1ce8));
        fVar15 = (float)FUN_00d53a00(lVar13,*(undefined4 *)(param_3 + 0x1ce8));
        fVar14 = fVar14 / fVar15;
        if (fVar15 <= 0.0) {
          fVar14 = 0.0;
        }
        uVar17 = NEON_fminnm(fVar14,0x3f800000);
        *(undefined4 *)(param_3 + 0x1ce0) = uVar17;
        goto LAB_00a23098;
      }
    }
    else {
      *(undefined8 *)(param_3 + 0x1a8) = 0;
      *(undefined4 *)(param_3 + 0x1b0) = DAT_03214ce8;
    }
  }
  FUN_00ceab64();
LAB_00a23098:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

