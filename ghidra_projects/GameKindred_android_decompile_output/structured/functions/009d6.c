// functions/009d6 — 21 functions
#include "libGameKindred.h"




void FUN_009d6028(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  
  lVar1 = param_2 + 0x28;
  *(uint *)(param_2 + 0xac) = *(uint *)(param_2 + 0xac) | 8;
  FUN_00f01980(lVar1);
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar4);
  lVar2 = DAT_03210d00;
  if ((*(byte *)(param_2 + 0xc8c) & 0x1f) != 0) goto LAB_009d6250;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
LAB_009d61ec:
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar4);
    *(undefined ***)puVar4 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) goto LAB_009d61ec;
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efdd74(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0,puVar5);
  FUN_00f022a0(lVar1,puVar4);
  FUN_00f022a0(lVar1,puVar5);
LAB_009d6250:
  lVar2 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efdd74(puVar4);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efddc4(0x3f000000,puVar4);
  FUN_00efcac4(param_1,puVar4);
  FUN_00f022a0(lVar1,puVar4);
  return;
}




void FUN_009d630c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009bebe4();
  *(undefined8 *)(param_1 + 0xc50) = uVar1;
  FUN_009d5954(param_1);
  return;
}




void FUN_009d6334(long param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a8;
  void *local_a0;
  void *local_98;
  uint local_90 [4];
  void *local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (((*(int *)(param_1 + 0x4b0) == 0) && (*(long *)(param_1 + 0xc58) != 0)) &&
     (uVar5 = FUN_009c1050(), (uVar5 & 1) != 0)) {
    lVar6 = FUN_00d9e390(param_2);
    FUN_00ced928(param_2);
    lVar7 = FUN_00cce8a4();
    local_90[0] = param_4;
    lVar8 = FUN_00920c38(param_3,lVar7,local_90);
    uVar4 = local_90[0];
    if ((lVar6 != 0) && (lVar8 != 0)) {
      lVar1 = param_1 + 0x940;
      uVar9 = FUN_00d5bc38(lVar6);
      FUN_00a1ffcc(lVar1,uVar9);
      FUN_008fa54c(local_90,PTR_s_build___HUDPartsCommon_atlas_02be3440);
      uVar5 = FUN_00ceabdc(param_3);
      if ((uVar5 & 1) != 0) {
        FUN_00cac438(&local_a8,*(undefined8 *)(lVar7 + 8));
        FUN_008fce60(local_90,&local_a8);
        if (((byte)local_a8 & 1) != 0) {
          operator_delete(local_98);
        }
      }
      lVar6 = param_1 + 0xa30;
      pvVar2 = (void *)((ulong)local_90 | 1);
      if ((local_90[0] & 1) != 0) {
        pvVar2 = local_80;
      }
      FUN_00f0e5bc(lVar6,pvVar2,lVar8);
      if ((*(float *)(param_1 + 0xa78) != 1.0) || (*(float *)(param_1 + 0xa7c) != 1.0)) {
        uVar9 = NEON_fmov(0x3f800000,4);
        *(undefined8 *)(param_1 + 0xa78) = uVar9;
        FUN_0091ada4(lVar6);
      }
      fVar10 = (float)FUN_00f0eac0(lVar6);
      fVar11 = (float)FUN_00f0e700(lVar1);
      fVar10 = fVar10 / fVar11;
      if ((*(float *)(param_1 + 0x988) != fVar10) || (*(float *)(param_1 + 0x98c) != fVar10)) {
        *(float *)(param_1 + 0x988) = fVar10;
        *(float *)(param_1 + 0x98c) = fVar10;
        FUN_0091ada4(lVar1);
      }
      fVar11 = (float)FUN_00a4064c(param_1 + 0x400);
      fVar13 = *(float *)(param_1 + 0xf4);
      fVar12 = -0.25;
      FUN_00f0d4e0(param_1 + 0xb0);
      fVar10 = fVar12 * 0.5;
      FUN_00f0e700(lVar1);
      fVar10 = ((fVar13 - fVar10) - fVar12 * 0.5) + -5.0;
      if ((*(float *)(param_1 + 0x980) != fVar11 * -0.25) || (*(float *)(param_1 + 0x984) != fVar10)
         ) {
        *(float *)(param_1 + 0x980) = fVar11 * -0.25;
        *(float *)(param_1 + 0x984) = fVar10;
        FUN_0091ada4(lVar1);
      }
      local_a8 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0x940) + 0x28))(lVar1,&local_a8);
      fVar11 = (float)FUN_00a4064c(param_1 + 0x400);
      if ((*(float *)(param_1 + 0xa70) != fVar11 * 0.25) ||
         (*(float *)(param_1 + 0xa74) != *(float *)(param_1 + 0x984))) {
        *(float *)(param_1 + 0xa70) = fVar11 * 0.25;
        *(float *)(param_1 + 0xa74) = *(float *)(param_1 + 0x984);
        FUN_0091ada4(lVar6);
      }
      local_a8 = 0x3f0000003f000000;
      (**(code **)(*(long *)(param_1 + 0xa30) + 0x28))(lVar6,&local_a8);
      fVar10 = *(float *)(param_1 + 0xa70);
      lVar7 = param_1 + 0xb20;
      fVar11 = (float)FUN_00f0eac0(lVar6);
      fVar11 = fVar10 + fVar11 * 0.5 + 5.0;
      if ((*(float *)(param_1 + 0xb60) != fVar11) ||
         (*(float *)(param_1 + 0xb64) != *(float *)(param_1 + 0xa74))) {
        *(float *)(param_1 + 0xb60) = fVar11;
        *(float *)(param_1 + 0xb64) = *(float *)(param_1 + 0xa74);
        FUN_0091ada4(lVar7);
      }
      local_a8 = 0x3f00000000000000;
      (**(code **)(*(long *)(param_1 + 0xb20) + 0x28))(lVar7,&local_a8);
      *(uint *)(param_1 + 0x9c4) = *(uint *)(param_1 + 0x9c4) | 4;
      *(uint *)(param_1 + 0xab4) = *(uint *)(param_1 + 0xab4) | 4;
      if (1 < uVar4) {
        FUN_00e70510(&local_a8);
        FUN_00e70e18(&local_a8,&DAT_01b95634,uVar4);
        FUN_00f0d75c(lVar7,&local_a8);
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
      }
      *(uint *)(param_1 + 0xba4) =
           *(uint *)(param_1 + 0xba4) & 0xfffffff8 |
           *(uint *)(param_1 + 0xba4) & 3 | (uint)(1 < uVar4) << 2;
      *(undefined4 *)(param_1 + 0xc78) = 0x40000000;
      if ((local_90[0] & 1) != 0) {
        operator_delete(local_80);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d66cc(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = *param_4;
  FUN_00920c38(param_1,param_2,&local_3c);
  uVar2 = NEON_fmov(0x3f800000,4);
  *param_4 = local_3c;
  *param_3 = uVar2;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d673c(long param_1)

{
  FUN_00a41708(param_1 + 0x400);
  return;
}




void FUN_009d6744(long param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 local_58;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_009bbf9c();
  if ((uVar3 & 1) == 0) goto LAB_009d6820;
  FUN_00d584f4(*(undefined8 *)(param_1 + 0xc58),&DAT_0312f660,auStack_48);
  FUN_0091ef94(&local_58,auStack_48,0);
  lVar6 = param_1 + 0x28;
  lVar4 = FUN_00965ecc(lVar6);
  uVar8 = *(undefined8 *)(lVar4 + 0x10);
  fVar7 = (float)((ulong)uVar8 >> 0x20);
  local_58 = CONCAT44((float)(int)((float)((ulong)local_58 >> 0x20) * fVar7) / fVar7,
                      (float)(int)((float)local_58 * (float)uVar8) / (float)uVar8);
  fVar7 = (float)(**(code **)(*(long *)(param_1 + 0x28) + 0x50))(lVar6);
  fVar9 = (float)local_58 + fVar7 * -0.5;
  if ((*(float *)(param_1 + 0xc84) < fVar9) || (fVar7 + fVar9 < 0.0)) {
LAB_009d67e4:
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) & 0xfffffff7;
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) & 0xfffffff7;
  }
  else {
    fVar7 = local_58._4_4_ + (float)uVar8 * -0.5;
    if ((*(float *)(param_1 + 0xc88) < fVar7) || ((float)uVar8 + fVar7 < 0.0)) goto LAB_009d67e4;
    *(uint *)(param_1 + 0xac) = *(uint *)(param_1 + 0xac) | 8;
    *(uint *)(param_1 + 0x484) = *(uint *)(param_1 + 0x484) | 8;
    if ((*(float *)(param_1 + 0x68) != (float)local_58) ||
       (*(float *)(param_1 + 0x6c) != local_58._4_4_)) {
      *(float *)(param_1 + 0x68) = (float)local_58;
      *(float *)(param_1 + 0x6c) = local_58._4_4_;
      FUN_0091ada4(lVar6);
    }
    if (*(int *)(param_1 + 0x4b0) == 4) {
      cVar2 = FUN_00d55870(*(undefined8 *)(param_1 + 0xc58));
      if (cVar2 == '\0') {
        lVar6 = *(long *)(*(long *)(param_1 + 0xc58) + 0x40);
        fVar7 = (*(float *)(lVar6 + 0x1a0) + 1.0) *
                (*(float *)(lVar6 + 0x38) +
                *(float *)(lVar6 + 0xec) * (*(float *)(lVar6 + 0x254) + 1.0));
        if (DAT_0312f740 <= fVar7) {
          fVar7 = DAT_0312f740;
        }
        fVar9 = DAT_0312f680;
        if (DAT_0312f680 <= fVar7) {
          fVar9 = fVar7;
        }
        if (fVar9 <= *(float *)(lVar6 + 0x308)) {
          FUN_00ceace8();
          uVar3 = FUN_00ceb0ac();
          lVar6 = *(long *)(*(long *)(param_1 + 0xc58) + 0x38);
          if ((uVar3 & 1) == 0) {
            pcVar5 = *(char **)(lVar6 + 0x28);
          }
          else {
            pcVar5 = *(char **)(lVar6 + 0x30);
          }
        }
        else {
          pcVar5 = "HUD_PLAQUE_CAPTURING";
        }
        uVar8 = FUN_00e6ce7c(pcVar5,0);
        FUN_00f0d75c(param_1 + 0xb0,uVar8);
      }
    }
    else if (*(int *)(param_1 + 0x4b0) == 0) {
      FUN_009d6b04(param_1);
      FUN_009d6c28(param_1);
    }
  }
  if ((*(byte *)(param_1 + 0xc90) & 1) != 0) {
    FUN_00a40724(param_1 + 0x400,1);
    FUN_00a416d0(param_1 + 0x400,*(undefined8 *)(param_1 + 0xc50));
  }
LAB_009d6820:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d6990(uint *param_1,undefined8 *param_2)

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
    FUN_009d6df8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_009d6a18(long param_1)

{
  FUN_00f0025c(param_1 + 0xc84,param_1 + 0xc88);
  return;
}




void FUN_009d6a28(long param_1)

{
  if ((*(byte *)(param_1 + 0xc90) & 1) == 0) {
    return;
  }
  FUN_00a40414(param_1 + 0x400);
  return;
}




void FUN_009d6a3c(long param_1,byte *param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xc58);
  if ((lVar3 != 0) &&
     ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
      (1 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)))) {
    bVar2 = *param_2;
    if ((bVar2 & 0x1f) == 2) {
      if ((bVar2 >> 6 & 1) == 0) {
        FUN_009d6028(0x3da3d70a,param_1);
      }
    }
    else if ((bVar2 & 0x1f) == 1) {
      if ((bVar2 >> 6 & 1) == 0) {
        FUN_009d5dac(0x3da3d70a,param_1);
      }
    }
    else if ((bVar2 & 0x1f) == 0) {
      FUN_009d5b6c(0x3da3d70a,param_1);
    }
    bVar2 = *param_2;
    if ((bVar2 >> 6 & 1) != 0) {
      FUN_009d59fc(param_1);
      bVar2 = *param_2;
    }
    *(byte *)(param_1 + 0xc8c) = bVar2;
  }
  return;
}




void FUN_009d6b04(long param_1)

{
  int iVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0xc58) + 0x40);
  fVar3 = (*(float *)(lVar2 + 0x240) + 1.0) *
          (*(float *)(lVar2 + 0xd8) + *(float *)(lVar2 + 0x18c) * (*(float *)(lVar2 + 0x2f4) + 1.0))
  ;
  if (DAT_0312f7e0 <= fVar3) {
    fVar3 = DAT_0312f7e0;
  }
  fVar4 = DAT_0312f720;
  if (DAT_0312f720 <= fVar3) {
    fVar4 = fVar3;
  }
  if ((*(ushort *)(param_1 + 0xc90) >> 1 & 0xff) == (int)fVar4) {
    return;
  }
  *(ushort *)(param_1 + 0xc90) =
       (ushort)(((int)fVar4 & 0xffU) << 1) | *(ushort *)(param_1 + 0xc90) & 0xfe01;
  if (((DAT_0312f678 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0312f678), iVar1 != 0)) {
    FUN_00e70510(&DAT_0312f668);
    __cxa_atexit(FUN_0090e338,&DAT_0312f668,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0312f678);
  }
  FUN_00e70e18(&DAT_0312f668,&DAT_01bb6d43,*(ushort *)(param_1 + 0xc90) >> 1 & 0xff);
  FUN_00f0d75c(param_1 + 0x1e0,&DAT_0312f668);
  return;
}




void FUN_009d6c28(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  
  uVar5 = FUN_00d9e99c(*(undefined8 *)(param_1 + 0xc58));
  if (((uVar5 & 1) != 0) || (uVar5 = FUN_00ceab64(), (uVar5 & 1) != 0)) {
    for (lVar6 = *(long *)(*(long *)(param_1 + 0xc58) + 0x18); lVar6 != 0;
        lVar6 = *(long *)(lVar6 + 0x20)) {
      if (*(int *)(*(long *)(lVar6 + 8) + 0xa4) == DAT_02e3ef78) {
        iVar2 = FUN_00d5359c(lVar6);
        if (iVar2 == 0) {
          return;
        }
        uVar7 = 0;
        do {
          uVar5 = FUN_00d54540(lVar6,uVar7);
          if ((uVar5 & 1) != 0) {
            iVar2 = FUN_00d53a44(lVar6,uVar7);
            if (iVar2 == 0) {
              bVar1 = false;
            }
            else {
              iVar2 = FUN_00d53a30(lVar6,uVar7);
              bVar1 = iVar2 == 0;
            }
            uVar4 = FUN_00d53990(lVar6,uVar7);
            FUN_00a6df78(param_1 + 0x548,uVar4,bVar1);
            return;
          }
          uVar7 = uVar7 + 1;
          uVar3 = FUN_00d5359c(lVar6);
        } while (uVar7 < uVar3);
        return;
      }
    }
  }
  return;
}




void FUN_009d6d1c(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_009d6d40(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027c33a8;
  param_1[0x46] = &PTR_FUN_028266f0;
  param_1[0x5d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x60);
  FUN_00f13d08(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_028266f0;
  param_1[0x3f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x28);
  FUN_00f01868(param_1);
  operator_delete(param_1);
  return;
}




undefined8 FUN_009d6dc8(undefined8 param_1)

{
  FUN_009d4478();
  return param_1;
}




void FUN_009d6dec(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009d6df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




void FUN_009d6df8(uint *param_1,uint param_2)

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




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_009d6e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  memset((void *)(param_1 + 0x48),0,0xc4);
  thunk_FUN_00e7051c(param_1 + 0x110,param_3);
  thunk_FUN_00e7051c(param_1 + 0x120,param_2);
  FUN_00e70510(param_1 + 0x130);
  auVar4 = NEON_fmov(0xbf800000,4);
  *(undefined4 *)(param_1 + 0x15c) = 0xbf800000;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined2 *)(param_1 + 0x160) = 0;
  *(long *)(param_1 + 0x16c) = auVar4._8_8_;
  *(long *)(param_1 + 0x164) = auVar4._0_8_;
  auVar4 = _DAT_01b99340;
  *(undefined4 *)(param_1 + 0x184) = 0x3e4ccccd;
  *(long *)(param_1 + 400) = auVar4._8_8_;
  *(long *)(param_1 + 0x188) = auVar4._0_8_;
  uVar1 = _DAT_03218ef8;
  *(undefined4 *)(param_1 + 0x1b0) = 0x1010101;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined1 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x198) = uVar1;
  lVar2 = 0;
  lVar3 = 0x48;
  do {
    *(undefined8 *)(param_1 + lVar2 * 8) = 0;
    *(undefined1 *)(param_1 + lVar2 + 0x40) = 0;
    FUN_008fce60(param_1 + lVar3,&DAT_0320ffa8);
    lVar2 = lVar2 + 1;
    lVar3 = lVar3 + 0x18;
  } while (lVar2 != 8);
  return;
}




void FUN_009d6f74(void *param_1)

{
  *(undefined4 *)((long)param_1 + 0x108) = 0;
  *(undefined8 *)((long)param_1 + 0x140) = 0;
  *(undefined8 *)((long)param_1 + 0x148) = 0;
  *(undefined2 *)((long)param_1 + 0x160) = 0;
  *(undefined4 *)((long)param_1 + 0x15c) = 0xbf800000;
  *(undefined2 *)((long)param_1 + 0x1b2) = 0x101;
  *(undefined4 *)((long)param_1 + 0x194) = 0;
  memset(param_1,0,0x48);
  return;
}




void FUN_009d6fb0(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  FUN_008fce60(param_1 + (long)*(int *)(param_1 + 0x108) * 0x18 + 0x48,param_3);
  iVar1 = *(int *)(param_1 + 0x108);
  *(undefined8 *)(param_1 + (long)iVar1 * 8) = param_2;
  *(int *)(param_1 + 0x108) = iVar1 + 1;
  return;
}




void FUN_009d6ff8(float param_1,long param_2,undefined8 *param_3,byte param_4,byte param_5)

{
  undefined8 uVar1;
  float fVar2;
  
  *(undefined4 *)(param_2 + 0x158) = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  fVar2 = 15.0;
  if (0.0 <= param_1) {
    fVar2 = param_1;
  }
  *(byte *)(param_2 + 0x160) = param_4 & 1;
  *(byte *)(param_2 + 0x161) = param_5 & 1;
  *(undefined8 *)(param_2 + 0x150) = uVar1;
  *(float *)(param_2 + 0x15c) = fVar2;
  return;
}

