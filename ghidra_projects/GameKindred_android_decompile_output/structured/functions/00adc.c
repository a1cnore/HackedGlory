// functions/00adc — 15 functions
#include "libGameKindred.h"




void FUN_00adc0f4(long param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  long *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00adcc40();
  if (*param_2 != 0) {
    lVar4 = *(long *)(param_2 + 2);
    lVar5 = (ulong)*param_2 * 0x38;
    fVar8 = 0.0;
    do {
      local_70 = (long *)0x0;
      uVar1 = *(uint *)(lVar4 + 0x28);
      if (uVar1 < 2) {
        local_70 = (long *)FUN_00adcce4(param_1,lVar4);
LAB_00adc198:
        FUN_00f023ec(param_1 + 0xda8,local_70,1);
        FUN_00adcf84(param_1 + 0xb8,&local_70);
        plVar3 = local_70;
        fVar9 = *(float *)(lVar4 + 0x30);
        fVar6 = (float)(**(code **)(*local_70 + 0x50))(local_70);
        fVar7 = *(float *)(plVar3 + 8);
        fVar9 = fVar9 + fVar6 * -0.5;
        if ((fVar7 != fVar9) || (fVar7 = *(float *)((long)plVar3 + 0x44), fVar7 != fVar8)) {
          *(float *)(plVar3 + 8) = fVar9;
          *(float *)((long)plVar3 + 0x44) = fVar8;
          FUN_0091ada4(plVar3);
        }
        (**(code **)(*local_70 + 0x50))();
        fVar8 = fVar8 + fVar7 + *(float *)(lVar4 + 0x2c);
      }
      else {
        if (uVar1 == 2) {
          local_70 = (long *)FUN_00adce2c(param_1);
          goto LAB_00adc198;
        }
        if (uVar1 == 3) {
          local_70 = (long *)FUN_00adcef8(param_1,lVar4);
          goto LAB_00adc198;
        }
      }
      lVar5 = lVar5 + -0x38;
      lVar4 = lVar4 + 0x38;
    } while (lVar5 != 0);
  }
  FUN_00adc464(param_1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00adc264(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_1 + 0x4faa) & 0x10) == 0) {
    return;
  }
  *(undefined2 *)(param_1 + 0x4fa8) = *(undefined2 *)(param_1 + 0x4fa8);
  *(byte *)(param_1 + 0x4faa) = *(byte *)(param_1 + 0x4faa) & 0xef;
  plVar2 = *(long **)(param_1 + 0x4f98);
  if (plVar2 != (long *)0x0) {
    piVar1 = (int *)(param_1 + 0x4fa0);
    if (*piVar1 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x4f98);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*piVar1 == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            *(undefined8 *)(param_1 + 0x4f98) = 0;
            uVar4 = 0;
            *piVar1 = DAT_03214ce8;
          }
        }
        FUN_009dbf64(0x3dcccccd,uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x4f98) = 0;
      *piVar1 = DAT_03214ce8;
    }
  }
  FUN_00a57410(0,0);
  return;
}




void FUN_00adc358(long param_1,long param_2)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (*(long *)(param_2 + 0x70) != 0) {
    *(byte *)(param_1 + 0x4faa) = *(byte *)(param_1 + 0x4faa) | 0x10;
    lVar4 = FUN_00d70a78();
    puVar5 = (undefined8 *)**(long **)(lVar4 + 0x168);
    plVar1 = *(long **)(lVar4 + 0x168);
    while (puVar5 != (undefined8 *)0x0) {
      iVar3 = strcmp((char *)*puVar5,*(char **)(param_2 + 0x70));
      if (iVar3 == 0) {
        FUN_009b4b90(*(undefined8 *)(*plVar1 + 8));
        lVar4 = FUN_00a57398(0x3ecccccd);
        uVar2 = DAT_03214ce8;
        if (lVar4 == 0) {
          *(undefined8 *)(param_1 + 0x4f98) = 0;
        }
        else {
          iVar3 = *(int *)(lVar4 + 0x30);
          *(long **)(param_1 + 0x4f98) = (long *)(lVar4 + 0x28);
          *(int *)(param_1 + 0x4fa0) = iVar3;
          if (iVar3 == *(int *)(lVar4 + 0x30)) {
            lVar4 = (**(code **)(*(long *)(lVar4 + 0x28) + 0x10))();
            if (lVar4 == 0) {
              return;
            }
            FUN_00a57410(*(undefined4 *)(param_2 + 0x78),1);
            return;
          }
          *(undefined8 *)(param_1 + 0x4f98) = 0;
        }
        *(undefined4 *)(param_1 + 0x4fa0) = uVar2;
        return;
      }
      puVar5 = (undefined8 *)plVar1[1];
      plVar1 = plVar1 + 1;
    }
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00adc464(undefined1 param_1 [16],float param_2,long param_3)

{
  ushort *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float local_64;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&local_64,&local_68);
  if (*(uint *)(param_3 + 0xb8) == 0) {
    fVar9 = 30.0;
  }
  else {
    plVar4 = *(long **)(*(long *)(param_3 + 0xc0) + (ulong)*(uint *)(param_3 + 0xb8) * 8 + -8);
    fVar9 = *(float *)((long)plVar4 + 0x44);
    (**(code **)(*plVar4 + 0x50))();
    fVar9 = fVar9 + param_2;
    param_2 = 30.0;
    fVar9 = fVar9 + 30.0;
  }
  plVar4 = (long *)(param_3 + 0xe30);
  FUN_00f01c20(plVar4);
  fVar9 = fVar9 + param_2 * 0.5;
  fVar10 = fVar9 + 10.0;
  FUN_00f08be8(param_3 + 0x2be0);
  uVar5 = FUN_00e70b04();
  if ((uVar5 & 1) == 0) {
LAB_00adc574:
    plVar6 = (long *)(param_3 + 0x23f0);
    FUN_00f08be8(param_3 + 0x41a0);
    uVar5 = FUN_00e70b04();
    puVar1 = (ushort *)(param_3 + 0x4fa8);
    if ((uVar5 & 1) == 0) {
      fVar9 = (float)NEON_ucvtf((uint)*puVar1);
      if ((*(float *)(param_3 + 0xe70) != fVar9 * 0.33) || (*(float *)(param_3 + 0xe74) != fVar10))
      {
        *(float *)(param_3 + 0xe70) = fVar9 * 0.33;
        *(float *)(param_3 + 0xe74) = fVar10;
        FUN_0091ada4(plVar4);
      }
      local_60 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_3 + 0xe30) + 0x28))(plVar4,&local_60);
      if ((*(float *)(param_3 + 0x39f0) != 0.0) || (*(float *)(param_3 + 0x39f4) != fVar10)) {
        *(undefined4 *)(param_3 + 0x39f0) = 0;
        *(float *)(param_3 + 0x39f4) = fVar10;
        FUN_0091ada4(param_3 + 0x39b0);
      }
      local_60 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_3 + 0x39b0) + 0x28))(param_3 + 0x39b0,&local_60);
      fVar9 = -0.33;
      fVar8 = (float)NEON_ucvtf((uint)*puVar1);
      if ((*(float *)(param_3 + 0x2430) != fVar8 * -0.33) ||
         (fVar9 = *(float *)(param_3 + 0x2434), fVar9 != fVar10)) {
        *(float *)(param_3 + 0x2430) = fVar8 * -0.33;
        *(float *)(param_3 + 0x2434) = fVar10;
        FUN_0091ada4(plVar6);
      }
      lVar7 = *plVar6;
    }
    else {
      fVar9 = (float)NEON_ucvtf((uint)*puVar1);
      if ((*(float *)(param_3 + 0x2430) != fVar9 * -0.166) ||
         (*(float *)(param_3 + 0x2434) != fVar10)) {
        *(float *)(param_3 + 0x2430) = fVar9 * -0.166;
        *(float *)(param_3 + 0x2434) = fVar10;
        FUN_0091ada4(plVar6);
      }
      local_60 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_3 + 0x23f0) + 0x28))(plVar6,&local_60);
      fVar9 = 0.166;
      fVar8 = (float)NEON_ucvtf((uint)*puVar1);
      if ((*(float *)(param_3 + 0xe70) != fVar8 * 0.166) ||
         (fVar9 = *(float *)(param_3 + 0xe74), fVar9 != fVar10)) {
        *(float *)(param_3 + 0xe70) = fVar8 * 0.166;
        *(float *)(param_3 + 0xe74) = fVar10;
        FUN_0091ada4(plVar4);
      }
      lVar7 = *plVar4;
      plVar6 = plVar4;
    }
    local_60 = 0x3f0000003f000000;
    (**(code **)(lVar7 + 0x28))(plVar6,&local_60);
  }
  else {
    FUN_00f08be8(param_3 + 0x41a0);
    uVar5 = FUN_00e70b04();
    if ((uVar5 & 1) == 0) goto LAB_00adc574;
    if ((*(float *)(param_3 + 0xe70) != 0.0) || (*(float *)(param_3 + 0xe74) != fVar10)) {
      *(undefined4 *)(param_3 + 0xe70) = 0;
      *(float *)(param_3 + 0xe74) = fVar10;
      FUN_0091ada4(plVar4);
    }
    local_60 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_3 + 0xe30) + 0x28))(plVar4,&local_60);
  }
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x4fa8));
  FUN_00f01c54(param_3 + 0xda8,0,0,1,1);
  FUN_00b18344(fVar10 + 60.0,fVar9 + 60.0,0xbf800000,param_3 + 0x208,
               *(byte *)(param_3 + 0x4faa) >> 2 & 1);
  local_60 = *(undefined8 *)(param_3 + 600);
  (**(code **)(*(long *)(param_3 + 0x30) + 0x28))((long *)(param_3 + 0x30),&local_60);
  FUN_00b18a7c(0,0x41f00000,DAT_03218ef8,_DAT_03218efc,param_3 + 0x208,param_3 + 0xda8);
  iVar2 = *(int *)(param_3 + 0x4f88);
  if (iVar2 == 3) {
    fVar9 = local_68 + -40.0;
    FUN_00f01fcc(param_3 + 0x180,0,0,1,1);
    fVar9 = fVar9 - local_68;
    if (*(float *)(param_3 + 0x1c0) == local_64 * 0.5) {
LAB_00adc8a8:
      if (*(float *)(param_3 + 0x1c4) == fVar9) goto LAB_00adc8c4;
    }
LAB_00adc8b4:
    *(float *)(param_3 + 0x1c0) = local_64 * 0.5;
    *(float *)(param_3 + 0x1c4) = fVar9;
  }
  else {
    if (iVar2 == 2) {
      fVar9 = local_68 * 0.5;
      FUN_00f01fcc(param_3 + 0x180,0,0,1,1);
      fVar9 = fVar9 - local_68 * 0.5;
      if (*(float *)(param_3 + 0x1c0) == local_64 * 0.5) goto LAB_00adc8a8;
      goto LAB_00adc8b4;
    }
    if ((iVar2 != 1) ||
       ((*(float *)(param_3 + 0x1c0) == local_64 * 0.5 && (*(float *)(param_3 + 0x1c4) == 40.0))))
    goto LAB_00adc8c4;
    *(float *)(param_3 + 0x1c0) = local_64 * 0.5;
    *(undefined4 *)(param_3 + 0x1c4) = 0x42200000;
  }
  FUN_0091ada4(param_3 + 0x180);
LAB_00adc8c4:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined * FUN_00adc8f8(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if ((*(byte *)(param_1 + 0x4faa) & 4) != 0) {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  return *ppuVar1;
}




void FUN_00adc92c(float param_1,long param_2)

{
  float fVar1;
  
  if ((*(byte *)(param_2 + 0x4faa) & 1) == 0) {
    fVar1 = *(float *)(param_2 + 0x4f90);
    if ((0.0 < fVar1) &&
       (fVar1 = fVar1 - param_1, *(float *)(param_2 + 0x4f90) = fVar1, fVar1 <= 0.0)) {
      *(undefined4 *)(param_2 + 0x4f94) = 0;
      *(byte *)(param_2 + 0x4faa) = *(byte *)(param_2 + 0x4faa) | 1;
      *(undefined2 *)(param_2 + 0x4fa8) = *(undefined2 *)(param_2 + 0x4fa8);
    }
    return;
  }
  FUN_00adc98c();
  return;
}




void FUN_00adc98c(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort *puVar7;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_00ecfca4(param_1,*(undefined4 *)(param_1 + 0x4f94));
  FUN_00adc264(param_1);
  lVar1 = param_1 + 0x30;
  FUN_00f01980(lVar1);
  uVar2 = *(uint *)(param_1 + 0xb4);
  if ((uVar2 & 0x7f80) != 0x6600) {
    *(uint *)(param_1 + 0xb4) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x6600;
    FUN_0091ada4(lVar1);
  }
  lVar4 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efdd74(puVar7);
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar7);
  FUN_00efcac4(0x3ecccccd,puVar7);
  FUN_00efcb24(puVar7,FUN_009a7608);
  FUN_00f022a0(lVar1,puVar7);
  lVar4 = DAT_03210d00;
  uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar7 = (ushort *)0x0;
  }
  else {
    puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_02825148;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar7);
  *(byte *)(param_1 + 0x4faa) = *(byte *)(param_1 + 0x4faa) & 0xfe;
  uVar5 = FUN_00f048a4("EVENT_INFO_PANEL_CLOSED");
  FUN_00f048e0(auStack_68,uVar5,0);
  FUN_00f04760(lVar1,auStack_68,1);
  if ((((uint)*(byte *)(param_1 + 0x4faa) << 0x10) >> 0x11 & 1) != 0) {
    FUN_009253e0(0);
  }
  FUN_00adcc40(param_1);
  *(undefined4 *)(param_1 + 0x4f90) = 0;
  *(undefined4 *)(param_1 + 0x4f88) = 1;
  *(undefined2 *)(param_1 + 0x4fa8) = 1000;
  *(byte *)(param_1 + 0x4faa) = *(byte *)(param_1 + 0x4faa) & 0xf5;
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00adcc2c(long param_1)

{
  FUN_00adc92c(param_1 + -0x30);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_00adc464(undefined1 param_1 [16],float param_2,long param_3)

{
  ushort *puVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar3 = tpidr_el0;
  lStack_58 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&fStack_64,&fStack_68);
  if (*(uint *)(param_3 + 0xb8) == 0) {
    fVar9 = 30.0;
  }
  else {
    plVar4 = *(long **)(*(long *)(param_3 + 0xc0) + (ulong)*(uint *)(param_3 + 0xb8) * 8 + -8);
    fVar9 = *(float *)((long)plVar4 + 0x44);
    (**(code **)(*plVar4 + 0x50))();
    fVar9 = fVar9 + param_2;
    param_2 = 30.0;
    fVar9 = fVar9 + 30.0;
  }
  plVar4 = (long *)(param_3 + 0xe30);
  FUN_00f01c20(plVar4);
  fVar9 = fVar9 + param_2 * 0.5;
  fVar10 = fVar9 + 10.0;
  FUN_00f08be8(param_3 + 0x2be0);
  uVar5 = FUN_00e70b04();
  if ((uVar5 & 1) == 0) {
LAB_00adc574:
    plVar6 = (long *)(param_3 + 0x23f0);
    FUN_00f08be8(param_3 + 0x41a0);
    uVar5 = FUN_00e70b04();
    puVar1 = (ushort *)(param_3 + 0x4fa8);
    if ((uVar5 & 1) == 0) {
      fVar9 = (float)NEON_ucvtf((uint)*puVar1);
      if ((*(float *)(param_3 + 0xe70) != fVar9 * 0.33) || (*(float *)(param_3 + 0xe74) != fVar10))
      {
        *(float *)(param_3 + 0xe70) = fVar9 * 0.33;
        *(float *)(param_3 + 0xe74) = fVar10;
        FUN_0091ada4(plVar4);
      }
      uStack_60 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_3 + 0xe30) + 0x28))(plVar4,&uStack_60);
      if ((*(float *)(param_3 + 0x39f0) != 0.0) || (*(float *)(param_3 + 0x39f4) != fVar10)) {
        *(undefined4 *)(param_3 + 0x39f0) = 0;
        *(float *)(param_3 + 0x39f4) = fVar10;
        FUN_0091ada4(param_3 + 0x39b0);
      }
      uStack_60 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_3 + 0x39b0) + 0x28))(param_3 + 0x39b0,&uStack_60);
      fVar9 = -0.33;
      fVar8 = (float)NEON_ucvtf((uint)*puVar1);
      if ((*(float *)(param_3 + 0x2430) != fVar8 * -0.33) ||
         (fVar9 = *(float *)(param_3 + 0x2434), fVar9 != fVar10)) {
        *(float *)(param_3 + 0x2430) = fVar8 * -0.33;
        *(float *)(param_3 + 0x2434) = fVar10;
        FUN_0091ada4(plVar6);
      }
      lVar7 = *plVar6;
    }
    else {
      fVar9 = (float)NEON_ucvtf((uint)*puVar1);
      if ((*(float *)(param_3 + 0x2430) != fVar9 * -0.166) ||
         (*(float *)(param_3 + 0x2434) != fVar10)) {
        *(float *)(param_3 + 0x2430) = fVar9 * -0.166;
        *(float *)(param_3 + 0x2434) = fVar10;
        FUN_0091ada4(plVar6);
      }
      uStack_60 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_3 + 0x23f0) + 0x28))(plVar6,&uStack_60);
      fVar9 = 0.166;
      fVar8 = (float)NEON_ucvtf((uint)*puVar1);
      if ((*(float *)(param_3 + 0xe70) != fVar8 * 0.166) ||
         (fVar9 = *(float *)(param_3 + 0xe74), fVar9 != fVar10)) {
        *(float *)(param_3 + 0xe70) = fVar8 * 0.166;
        *(float *)(param_3 + 0xe74) = fVar10;
        FUN_0091ada4(plVar4);
      }
      lVar7 = *plVar4;
      plVar6 = plVar4;
    }
    uStack_60 = 0x3f0000003f000000;
    (**(code **)(lVar7 + 0x28))(plVar6,&uStack_60);
  }
  else {
    FUN_00f08be8(param_3 + 0x41a0);
    uVar5 = FUN_00e70b04();
    if ((uVar5 & 1) == 0) goto LAB_00adc574;
    if ((*(float *)(param_3 + 0xe70) != 0.0) || (*(float *)(param_3 + 0xe74) != fVar10)) {
      *(undefined4 *)(param_3 + 0xe70) = 0;
      *(float *)(param_3 + 0xe74) = fVar10;
      FUN_0091ada4(plVar4);
    }
    uStack_60 = 0x3f0000003f000000;
    (**(code **)(*(long *)(param_3 + 0xe30) + 0x28))(plVar4,&uStack_60);
  }
  fVar10 = (float)NEON_ucvtf((uint)*(ushort *)(param_3 + 0x4fa8));
  FUN_00f01c54(param_3 + 0xda8,0,0,1,1);
  FUN_00b18344(fVar10 + 60.0,fVar9 + 60.0,0xbf800000,param_3 + 0x208,
               *(byte *)(param_3 + 0x4faa) >> 2 & 1);
  uStack_60 = *(undefined8 *)(param_3 + 600);
  (**(code **)(*(long *)(param_3 + 0x30) + 0x28))((long *)(param_3 + 0x30),&uStack_60);
  FUN_00b18a7c(0,0x41f00000,DAT_03218ef8,_DAT_03218efc,param_3 + 0x208,param_3 + 0xda8);
  iVar2 = *(int *)(param_3 + 0x4f88);
  if (iVar2 == 3) {
    fVar9 = fStack_68 + -40.0;
    FUN_00f01fcc(param_3 + 0x180,0,0,1,1);
    fVar9 = fVar9 - fStack_68;
    if (*(float *)(param_3 + 0x1c0) == fStack_64 * 0.5) {
LAB_00adc8a8:
      if (*(float *)(param_3 + 0x1c4) == fVar9) goto LAB_00adc8c4;
    }
LAB_00adc8b4:
    *(float *)(param_3 + 0x1c0) = fStack_64 * 0.5;
    *(float *)(param_3 + 0x1c4) = fVar9;
  }
  else {
    if (iVar2 == 2) {
      fVar9 = fStack_68 * 0.5;
      FUN_00f01fcc(param_3 + 0x180,0,0,1,1);
      fVar9 = fVar9 - fStack_68 * 0.5;
      if (*(float *)(param_3 + 0x1c0) == fStack_64 * 0.5) goto LAB_00adc8a8;
      goto LAB_00adc8b4;
    }
    if ((iVar2 != 1) ||
       ((*(float *)(param_3 + 0x1c0) == fStack_64 * 0.5 && (*(float *)(param_3 + 0x1c4) == 40.0))))
    goto LAB_00adc8c4;
    *(float *)(param_3 + 0x1c0) = fStack_64 * 0.5;
    *(undefined4 *)(param_3 + 0x1c4) = 0x42200000;
  }
  FUN_0091ada4(param_3 + 0x180);
LAB_00adc8c4:
  if (*(long *)(lVar3 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00adcc38(long param_1)

{
  FUN_00adc464(param_1 + -0x30);
  return;
}




void FUN_00adcc40(long param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = (ulong)*(uint *)(param_1 + 0xb8);
  if (*(uint *)(param_1 + 0xb8) != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0xc0) + lVar4) != 0) {
        uVar2 = FUN_00f02540();
        if ((uVar2 & 1) != 0) {
          FUN_00f01a4c(*(undefined8 *)(*(long *)(param_1 + 0xc0) + lVar4),1);
        }
        plVar1 = *(long **)(*(long *)(param_1 + 0xc0) + lVar4);
        if (plVar1 == (long *)0x0) {
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xc0) + uVar5 * 8);
        }
        else {
          (**(code **)(*plVar1 + 8))();
          puVar3 = (undefined8 *)(*(long *)(param_1 + 0xc0) + lVar4);
        }
        *puVar3 = 0;
        uVar2 = (ulong)*(uint *)(param_1 + 0xb8);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0xc0) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 0;
  }
  return;
}




long * FUN_00adcce4(long param_1,long param_2)

{
  void *pvVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  FUN_008fa54c(local_60,DAT_03134350);
  FUN_00adb360(param_2,local_60);
  plVar5 = operator_new(0x130);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  FUN_00f0d25c(plVar5,pvVar1);
  (**(code **)(*plVar5 + 0x138))(plVar5,param_2);
  if (*(int *)(param_2 + 0x28) == 1) {
    FUN_00f08c18(plVar5 + 0x1a,*(undefined4 *)(param_1 + 0x4f8c));
    if ((~*(uint *)((long)plVar5 + 0x84) & 0x7f80) == 0) goto LAB_00adcdd4;
    uVar2 = *(uint *)((long)plVar5 + 0x84) | 0x7f80;
  }
  else {
    if (*(int *)(param_2 + 0x28) != 0) goto LAB_00adcdd4;
    FUN_00f08c18(plVar5 + 0x1a,3);
    uVar2 = *(uint *)((long)plVar5 + 0x84);
    if ((uVar2 & 0x7f80) == 0x5900) goto LAB_00adcdd4;
    uVar2 = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x5900;
  }
  *(uint *)((long)plVar5 + 0x84) = uVar2;
  FUN_0091ada4(plVar5);
LAB_00adcdd4:
  uVar4 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0x4fa8));
  FUN_00f0dad0((short)uVar4,plVar5,1);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return plVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00adce2c(long param_1)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined4 uVar3;
  void *pvVar4;
  
  pvVar4 = operator_new(0xf0);
  FUN_00f0e4a8();
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if ((*(byte *)(param_1 + 0x4faa) & 4) != 0) {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  FUN_00f0e548(pvVar4,*ppuVar1,"white_background");
  FUN_00f0e670(pvVar4,&DAT_01bee7fa,2);
  uVar2 = *(uint *)((long)pvVar4 + 0x84);
  if ((uVar2 & 0x7f80) != 0x1980) {
    *(uint *)((long)pvVar4 + 0x84) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x1980;
    FUN_0091ada4(pvVar4);
  }
  uVar3 = NEON_ucvtf((uint)*(ushort *)(param_1 + 0x4fa8));
  FUN_00f13f08((short)uVar3,0x40000000,pvVar4);
  return pvVar4;
}




void * FUN_00adcef8(long param_1,long param_2)

{
  undefined **ppuVar1;
  void *pvVar2;
  
  pvVar2 = operator_new(0xf0);
  FUN_00f0e4a8();
  ppuVar1 = &PTR_s_build___MenuPartsCommon_tga_02be3530;
  if ((*(byte *)(param_1 + 0x4faa) & 4) != 0) {
    ppuVar1 = &PTR_s_build___HUDPartsCommon_atlas_02be3440;
  }
  if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
    param_2 = param_2 + 0x11;
  }
  else {
    param_2 = *(long *)(param_2 + 0x20);
  }
  FUN_00f0e548(pvVar2,*ppuVar1,param_2);
  return pvVar2;
}




void FUN_00adcf84(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00add0d4(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}

