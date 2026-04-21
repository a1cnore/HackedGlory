// functions/00a25 — 20 functions
#include "libGameKindred.h"




ushort * FUN_00a250a8(void)

{
  long lVar1;
  ushort uVar2;
  ushort *puVar3;
  
  lVar1 = DAT_03210d00;
  uVar2 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar3 = (ushort *)0x0;
  }
  else {
    puVar3 = (ushort *)(DAT_03210d00 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar3;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efdd74(puVar3);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return puVar3;
}




void FUN_00a25150(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x8b4) | 4;
  if ((param_2 & 1) == 0) {
    uVar1 = *(uint *)(param_1 + 0x8b4) & 0xfffffffb;
  }
  *(uint *)(param_1 + 0x8b4) = uVar1;
  return;
}




void FUN_00a2516c(long param_1,ulong param_2)

{
  long lVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort *puVar4;
  
  lVar1 = DAT_03210d00;
  if ((param_2 & 1) == 0) {
    puVar4 = (ushort *)FUN_00a250a8();
    FUN_00efddc4(0);
    FUN_00efcac4(0x3dcccccd,puVar4);
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar2 = (ushort *)0x0;
    }
    else {
      puVar2 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar2;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar2);
      *(undefined ***)puVar2 = &PTR_FUN_02825148;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
  }
  else {
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
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_02825100;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    puVar2 = (ushort *)FUN_00a250a8();
    FUN_00efddc4(0x3e99999a);
    FUN_00efcac4(0x3dcccccd,puVar2);
  }
  FUN_00f01980(param_1 + 0x640);
  FUN_00f02308(param_1 + 0x640,puVar4,puVar2,0);
  return;
}




void FUN_00a25330(long param_1,ulong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00a250a8();
  if ((param_2 & 1) == 0) {
    FUN_00efcac4(0x3eb33333,uVar1);
    FUN_00efddc4(0,uVar1);
  }
  else {
    FUN_00efddc4(0x3ecccccd,uVar1);
    FUN_00efcac4(0x3ba3d70a,uVar1);
  }
  FUN_00f022a0(param_1 + 0x730,uVar1);
  return;
}




void FUN_00a253ac(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  byte bVar5;
  
  plVar2 = *(long **)(param_1 + 0x1a8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if ((lVar3 != 0) && (uVar4 = FUN_00ceab64(), (uVar4 & 1) == 0)) {
        plVar2 = (long *)(lVar3 + 0x18);
        do {
          lVar3 = *plVar2;
          plVar2 = (long *)(lVar3 + 0x20);
        } while (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_02e3ef68);
        for (lVar3 = *(long *)(lVar3 + 0x18); lVar3 != 0; lVar3 = *(long *)(lVar3 + 0x20)) {
          if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_02e8b430) {
            FUN_00a0d99c(lVar3);
            iVar1 = FUN_008ff0d4();
            if (iVar1 == 0) {
              FUN_00a0d99c(lVar3);
              iVar1 = FUN_008ff0dc();
              if (iVar1 == *(int *)(param_1 + 0x1ce8)) {
                if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x14 & 1) == 0) {
                  FUN_00a2516c(param_1,1);
                }
                bVar5 = 0x10;
                goto LAB_00a254dc;
              }
            }
            break;
          }
        }
        if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x14 & 1) != 0) {
          FUN_00a2516c(param_1,0);
        }
        bVar5 = 0;
LAB_00a254dc:
        *(undefined2 *)(param_1 + 0x1cf0) = *(undefined2 *)(param_1 + 0x1cf0);
        *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) & 0xef | bVar5;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a25508(long param_1)

{
  uint uVar1;
  long *plVar2;
  undefined8 uVar3;
  uint uVar4;
  
  plVar2 = *(long **)(param_1 + 0x1a8);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_03214ce8;
    }
  }
  uVar3 = FUN_00d9eb38(uVar3);
  uVar1 = FUN_00d53a44(uVar3,*(undefined4 *)(param_1 + 0x1ce8));
  uVar4 = *(uint *)(param_1 + 0x9e4);
  if (uVar1 < 2) {
    if ((uVar4 >> 2 & 1) != 0) {
      *(uint *)(param_1 + 0x9e4) = uVar4 & 0xfffffffb;
    }
    if ((*(uint *)(param_1 + 0xad4) >> 2 & 1) == 0) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0xad4) & 0xfffffffb;
  }
  else {
    if ((uVar4 >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x9e4) = uVar4 | 4;
    }
    if ((*(uint *)(param_1 + 0xad4) >> 2 & 1) != 0) {
      return;
    }
    uVar4 = *(uint *)(param_1 + 0xad4) | 4;
  }
  *(uint *)(param_1 + 0xad4) = uVar4;
  return;
}




void FUN_00a255b4(long param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  
  plVar2 = *(long **)(param_1 + 0x1a8);
  uVar3 = 0;
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      uVar3 = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_03214ce8;
    }
  }
  lVar4 = FUN_00d9eb38(uVar3);
  if (lVar4 != 0) {
    iVar1 = FUN_00d53954(lVar4,*(undefined4 *)(param_1 + 0x1ce8));
    if (*(char *)(param_1 + 0x1cf0) != iVar1) {
      FUN_00a241b0(param_1,iVar1);
      FUN_00a24238(param_1);
      return;
    }
  }
  return;
}




void FUN_00a2564c(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_00a24f44();
  if (uVar1 == *(byte *)(param_1 + 0x1cf1)) {
    return;
  }
  FUN_00a24238(param_1);
  return;
}




undefined4 FUN_00a2568c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1ce0);
}




undefined4 FUN_00a25694(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1ce4);
}




float FUN_00a2569c(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_02e3ef78))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  fVar3 = (float)FUN_00d53b2c(lVar2,*(undefined4 *)(param_1 + 0x1ce8));
  if (fVar3 <= 0.0) {
    fVar3 = (float)FUN_00d53b44(lVar2,*(undefined4 *)(param_1 + 0x1ce8));
    if (fVar3 <= 0.0) {
      return 0.0;
    }
    fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0x314);
    fVar3 = (float)FUN_00d53b44(0,lVar2,*(undefined4 *)(param_1 + 0x1ce8));
  }
  else {
    fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0x310);
    fVar3 = (float)FUN_00d53b2c(lVar2,*(undefined4 *)(param_1 + 0x1ce8));
  }
  return 1.0 - fVar4 / fVar3;
}




undefined4 FUN_00a25768(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1ce8);
}




bool FUN_00a25770(long param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  
  plVar4 = *(long **)(param_1 + 0x1a8);
  uVar5 = 0;
  if (plVar4 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_03214ce8;
    }
  }
  uVar5 = FUN_00d9eb64(uVar5);
  iVar3 = FUN_00d53978(uVar5,*(undefined4 *)(param_1 + 0x1ce8));
  if ((iVar3 == 0) && (uVar1 = *(ushort *)(param_1 + 0xb8) & 0x1f, uVar1 != 0x1f)) {
    bVar2 = *(ushort *)(param_1 + (ulong)uVar1 * 0x38 + 0xc0) - 1 < 2;
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}




void FUN_00a25810(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_REQUEST_ABILITY_ACTIVATION");
  FUN_00f048e0(auStack_48,uVar2,*(undefined4 *)(param_1 + 0x1cec));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a25880(long *param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_164 [4];
  undefined **local_160;
  undefined1 auStack_158 [40];
  long *local_130;
  undefined8 local_110;
  void *local_108;
  byte local_100;
  void *local_f0;
  undefined4 local_e0;
  float local_dc;
  float local_cc;
  undefined4 local_b8;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  byte local_80 [16];
  void *local_70;
  undefined4 local_68;
  undefined8 local_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0093d828();
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)param_1[0x35];
    if (plVar4 == (long *)0x0) {
      uVar5 = 0;
    }
    else if ((int)param_1[0x36] == (int)plVar4[1]) {
      uVar5 = (**(code **)(*plVar4 + 0x10))();
    }
    else {
      param_1[0x35] = 0;
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x36) = DAT_03214ce8;
    }
    uVar6 = FUN_00d9eb38(uVar5);
    puVar7 = (undefined8 *)FUN_00d53914(uVar6,(int)param_1[0x39d]);
    uVar6 = FUN_00e6ce7c(*puVar7,0);
    thunk_FUN_00e7051c(&local_a0,uVar6);
    uVar6 = FUN_00e6ce7c(puVar7[5],0);
    thunk_FUN_00e7051c(&local_b0,uVar6);
    FUN_00cb0ddc(&local_b0,puVar7,uVar5);
    uVar3 = FUN_0092ea9c();
    fVar8 = (float)(**(code **)(*param_1 + 0x48))(param_1);
    fVar9 = 0.3;
    if ((uVar3 & 1) == 0) {
      fVar9 = 0.1;
    }
    FUN_00b26098(&local_160);
    local_e0 = 0;
    local_b8 = 0;
    local_130 = param_1;
    local_dc = fVar9 * fVar8;
    thunk_FUN_00e7051c(&local_90,&local_a0);
    FUN_008fcdb8(local_80,&DAT_0320ffa8);
    local_68 = 0;
    local_64 = 0x41a00000;
    FUN_009c82b4(auStack_158,&local_90);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    thunk_FUN_00e7051c(&local_90,&local_b0);
    FUN_008fcdb8(local_80,&DAT_0320ffa8);
    local_68 = 1;
    local_64 = 0x41a00000;
    FUN_009c82b4(auStack_158,&local_90);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    if ((uVar3 & 1) != 0) {
      FUN_00f00298(&local_90,auStack_164);
      local_cc = (float)local_90 * 0.55;
    }
    uVar2 = FUN_00f048a4("EVENT_REQUEST_ABILITY_TOOLTIP");
    FUN_00f048e0(&local_90,uVar2,&local_160);
    FUN_00f04760(param_1,&local_90,1);
    local_160 = &PTR_FUN_027de7f0;
    if ((local_100 & 1) != 0) {
      operator_delete(local_f0);
    }
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
      local_110 = 0;
      local_108 = (void *)0x0;
    }
    FUN_009c8464(auStack_158,1);
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a25b44(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("EVENT_REQUEST_ABILITY_TOOLTIP_CANCEL");
  FUN_00f048e0(auStack_48,uVar2,*(undefined4 *)(param_1 + 0x1ce8));
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a25bb4(ushort *param_1)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  
  uVar1 = *param_1 & 0x1f;
  if (uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(long *)(*(long *)(param_1 + 0x74) +
                                ((long)*(ulong *)(param_1 + (ulong)uVar1 * 0x1c + 0xc) >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00a25bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_00a25bfc(ulong param_1)

{
  long lVar1;
  uint3 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  timespec local_58;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = *(uint3 *)(param_1 + 0x1cf0);
  uVar4 = param_1;
  if ((*(byte *)(param_1 + 0x1cf2) & 2) == 0) {
    uVar4 = FUN_00a24c74(param_1);
    uVar2 = *(uint3 *)(param_1 + 0x1cf0);
    if ((uVar4 & 1) != 0) {
      if ((*(byte *)(param_1 + 0x1cf2) & 1) != 0) {
        uVar3 = clock_gettime(1,&local_58);
        uVar4 = (ulong)uVar3;
        lVar6 = local_58.tv_nsec - *(long *)(param_1 + 0x1cd8);
        lVar5 = local_58.tv_sec - *(long *)(param_1 + 0x1cd0);
        if (lVar6 < 0) {
          lVar5 = lVar5 + -1;
          lVar6 = (local_58.tv_nsec + 1000000000) - *(long *)(param_1 + 0x1cd8);
        }
        if (0.4000000059604645 < (double)(lVar6 + lVar5 * 1000000000) * 1e-09) {
          local_48 = *(undefined8 *)(param_1 + 0x1a8);
          local_40 = *(undefined4 *)(param_1 + 0x1b0);
          FUN_00a21d58(&local_48,*(undefined4 *)(param_1 + 0x1ce8));
          uVar4 = FUN_00a25880(param_1);
        }
      }
      goto LAB_00a25cec;
    }
  }
  if ((uVar2 >> 0x10 & 1) != 0) {
    uVar4 = FUN_00a24bcc(param_1);
  }
LAB_00a25cec:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00a25d14(long param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_03210fd8);
  if ((((uVar2 & 1) != 0) || (DAT_03210fd8 == DAT_03210f50)) &&
     ((uVar2 = FUN_00f04a94(param_2), (uVar2 & 1) == 0 ||
      (uVar2 = FUN_00a25e58(param_1), (uVar2 & 1) == 0)))) {
    if ((((uint)*(byte *)(param_1 + 0x1cf2) << 0x10) >> 0x11 & 1) == 0) {
      local_48 = *(undefined8 *)(param_1 + 0x1a8);
      local_40 = *(undefined4 *)(param_1 + 0x1b0);
      uVar2 = FUN_00a21d58(&local_48,*(undefined4 *)(param_1 + 0x1ce8));
      uVar3 = FUN_00a25770(param_1);
      if ((uVar2 & 1) == 0) {
        if ((uVar3 & 1) != 0) {
          FUN_00a260b4(param_1);
          FUN_00a25810(param_1);
        }
      }
      else if ((uVar3 & 1) != 0) {
        FUN_00a260b4(param_1);
        *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) | 8;
      }
      FUN_00e70314(param_1 + 0x1cd0);
      *(byte *)(param_1 + 0x1cf2) = *(byte *)(param_1 + 0x1cf2) | 1;
      FUN_00a26d94(param_1);
    }
    else {
      FUN_00a25880(param_1);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00a25e58(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  float fVar11;
  undefined8 uVar12;
  timespec local_88 [3];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  clock_gettime(1,local_88);
  lVar7 = local_88[0].tv_nsec - *(long *)(param_1 + 0x1cc8);
  lVar6 = local_88[0].tv_sec - *(long *)(param_1 + 0x1cc0);
  if (lVar7 < 0) {
    lVar6 = lVar6 + -1;
    lVar7 = (local_88[0].tv_nsec + 1000000000) - *(long *)(param_1 + 0x1cc8);
  }
  uVar4 = 0;
  if (2.0 <= (double)(lVar7 + lVar6 * 1000000000) * 1e-09) {
    lVar6 = FUN_00a114dc(0);
    if (lVar6 != 0) {
      FUN_00a1ae38();
      fVar11 = (float)FUN_00a1b610();
      uVar4 = 0;
      if (0.0 < fVar11) goto LAB_00a26080;
    }
    uVar4 = FUN_00da414c(0);
    uVar2 = FUN_00da45fc(uVar4,3);
    lVar6 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))(*(long **)(param_1 + 0x1a8));
    lVar6 = *(long *)(lVar6 + 0x18);
    while ((lVar6 != 0 && (*(int *)(*(long *)(lVar6 + 8) + 0xa4) != DAT_02e3ef78))) {
      lVar6 = *(long *)(lVar6 + 0x20);
    }
    uVar4 = FUN_00d535a4(lVar6,*(undefined4 *)(param_1 + 0x1ce8));
    if ((int)uVar4 != 0) {
      uVar12 = FUN_00d539e8(lVar6,*(undefined4 *)(param_1 + 0x1ce8));
      fVar11 = (float)FUN_00d53a18(lVar6,*(undefined4 *)(param_1 + 0x1ce8));
      if (fVar11 < 10.0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        if (5.0 <= (float)uVar12) {
          uVar3 = FUN_00cedce4(0);
          FUN_009841dc(uVar12,local_88,uVar3,uVar2,0xffffffff,*(undefined4 *)(param_1 + 0x1ce8));
          FUN_00ce20fc(local_88);
          lVar6 = FUN_00a1ffc0();
          plVar5 = (long *)(lVar6 + 0x10);
          plVar8 = (long *)*plVar5;
          plVar9 = plVar5;
          if (plVar8 != (long *)0x0) {
            do {
              if (*(uint *)(plVar8 + 4) >= 0x2e4f13dd) {
                plVar9 = plVar8;
              }
              plVar8 = (long *)plVar8[*(uint *)(plVar8 + 4) < 0x2e4f13dd];
            } while (plVar8 != (long *)0x0);
            if (((plVar9 != plVar5) && (*(uint *)(plVar9 + 4) < 0x2e4f13de)) &&
               ((int)plVar9[5] != 0)) {
              lVar6 = 0;
              uVar10 = 0;
              do {
                (*(code *)((undefined8 *)(plVar9[6] + lVar6))[1])
                          (*(undefined8 *)(plVar9[6] + lVar6),uVar2 & 0xff);
                uVar10 = uVar10 + 1;
                lVar6 = lVar6 + 0x10;
              } while (uVar10 < *(uint *)(plVar9 + 5));
            }
          }
          FUN_00e70314(param_1 + 0x1cc0);
          uVar4 = 1;
        }
      }
    }
  }
LAB_00a26080:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

