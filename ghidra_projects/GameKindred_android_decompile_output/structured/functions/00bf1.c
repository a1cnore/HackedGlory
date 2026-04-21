// functions/00bf1 — 52 functions
#include "libGameKindred.h"




void thunk_FUN_00bf1c4c(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    uVar1 = thunk_FUN_00ec5f5c();
    if ((uVar1 & 1) != 0) {
      FUN_00bf1a34(param_1);
    }
    FUN_00931c9c();
    return;
  }
  return;
}




void FUN_00bf1000(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      uVar1 = FUN_00cdbb18();
      lVar2 = *(long *)(param_1 + 0x18);
      if ((*(byte *)(lVar2 + lVar3) & 1) == 0) {
        lVar2 = lVar2 + lVar3 + 1;
      }
      else {
        lVar2 = *(long *)(lVar2 + lVar3 + 0x10);
      }
      FUN_00cdce6c(uVar1,lVar2);
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x18;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  return;
}




void FUN_00bf1070(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18) + (param_3 & 0xffffffff) * 0x18;
  lVar1 = FUN_00cdbb24(lVar2);
  if ((lVar1 != 0) && ((*(ushort *)(lVar1 + 0xb0) >> 8 & 1) != 0)) {
    FUN_00cdd050();
    FUN_00cae740(0x44e10000,0x44960000,lVar2,1,0);
  }
  FUN_00f0490c(param_2);
  return;
}




void FUN_00bf10d4(long param_1)

{
  FUN_00c641a4(*(undefined8 *)(param_1 + 8),param_1 + 0x10);
  return;
}




void FUN_00bf10e4(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027efeb0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf1128(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf112c);
  (*pcVar1)();
}




void FUN_00bf112c(undefined8 *param_1,long param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027eff10;
  pvVar1 = operator_new(0x21f8);
  FUN_00c64878();
  *(undefined8 **)((long)pvVar1 + 0xd8) = param_1;
  *param_1 = &PTR_FUN_027efee8;
  param_1[1] = pvVar1;
  FUN_008fcdb8(param_1 + 2,param_2);
  FUN_00c64ae8(param_1[1],*(undefined4 *)(param_2 + 0x18));
  return;
}




void FUN_00bf119c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009b8d90();
  FUN_009bb978(uVar1,param_1 + 0x10);
  return;
}




void FUN_00bf11c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efee8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  *param_1 = &PTR___cxa_pure_virtual_027eff10;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf1224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027efee8;
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    operator_delete((void *)param_1[4]);
  }
  *param_1 = &PTR___cxa_pure_virtual_027eff10;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf1288(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027eff10;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf12cc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbf12d0);
  (*pcVar1)();
}




void FUN_00bf12d0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027eff98;
  pvVar1 = operator_new(0xfd8);
  FUN_00c65500();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0x148) = param_1;
  FUN_00e83560(param_1 + 2);
  *param_1 = &PTR_FUN_027eff38;
  param_1[2] = &PTR_FUN_027eff68;
  FUN_00bf1338(param_1);
  return;
}




void FUN_00bf1338(long param_1)

{
  bool bVar1;
  uint *puVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  
  FUN_00aa323c();
  puVar2 = (uint *)FUN_00aa3228();
  uVar4 = (ulong)*puVar2;
  if (*puVar2 != 0) {
    uVar5 = 0;
    bVar1 = false;
    do {
      plVar3 = *(long **)(*(long *)(puVar2 + 2) + uVar5 * 8);
      if ((int)plVar3[1] == 2) {
        (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(param_1 + 8),thunk_FUN_00c6567c);
        uVar4 = (ulong)*puVar2;
        bVar1 = true;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
    if (bVar1) {
      FUN_00c656f8(*(undefined8 *)(param_1 + 8),0);
      return;
    }
  }
  return;
}




void FUN_00bf13d8(undefined8 *param_1)

{
  FUN_00e835e0(param_1 + 2);
  *param_1 = &PTR_FUN_027eff98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf1424(long param_1)

{
  FUN_00e835e0();
  *(undefined ***)(param_1 + -0x10) = &PTR_FUN_027eff98;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00bf146c(undefined8 *param_1)

{
  FUN_00e835e0(param_1 + 2);
  *param_1 = &PTR_FUN_027eff98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf14b8(long param_1)

{
  FUN_00bf146c(param_1 + -0x10);
  return;
}




void FUN_00bf14c0(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313377c,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf152c(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313377c,0);
  FUN_00f04760(*(undefined8 *)(param_1 + -8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf1598(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313377c,0);
  FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf1604(long param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313377c,0);
  FUN_00f04760(*(undefined8 *)(param_1 + -8),auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf1670(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eff98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf16b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027eff98;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf16fc(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027f0080;
  pvVar1 = operator_new(0x1640);
  FUN_00c65704();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  FUN_00932160(param_1 + 2);
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027effb8;
  param_1[2] = &PTR_FUN_027f0040;
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}




void FUN_00bf1768(undefined8 *param_1)

{
  FUN_009321e0(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f0080;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bf17b4(long param_1)

{
  FUN_009321e0();
  *(undefined ***)(param_1 + -0x10) = &PTR___cxa_pure_virtual_027f0080;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00bf17fc(undefined8 *param_1)

{
  FUN_009321e0(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027f0080;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bf1848(long param_1)

{
  FUN_00bf17fc(param_1 + -0x10);
  return;
}




void FUN_00bf1850(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  FUN_00c658a4(*(undefined8 *)(param_1 + 8));
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00c66804(uVar2);
  FUN_00c66190(uVar2,uVar1 & 1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = thunk_FUN_00ec5f5c();
  FUN_00c66878(uVar2,uVar1 & 1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00932084();
  FUN_00c6696c(uVar2,uVar1 & 1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00931fe4();
  FUN_00c669b0(uVar2,uVar1 & 1);
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}




undefined1 FUN_00bf18d0(long param_1)

{
  return *(undefined1 *)(param_1 + 0x30);
}




void FUN_00bf18d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00bf18e0(long param_1)

{
  void *pvVar1;
  long lVar2;
  undefined1 uVar3;
  ulong uVar4;
  long lVar5;
  byte local_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined6 uStack_56;
  byte local_50 [16];
  void *local_40;
  undefined1 local_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_0092e920();
  if ((((uVar4 & 1) == 0) || (uVar4 = FUN_009580c4(), (uVar4 & 1) == 0)) ||
     (((uVar4 = FUN_009c1050(), (uVar4 & 1) == 0 || (uVar4 = FUN_00931d34(), (uVar4 & 1) == 0)) &&
      (lVar5 = FUN_009580b8(), *(char *)(lVar5 + 0x568a) == '\0')))) goto LAB_00bf1a10;
  lVar5 = FUN_009580b8();
  FUN_008fcdb8(local_50,lVar5 + 0x54c0);
  uVar4 = FUN_009c1050();
  if ((uVar4 & 1) == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar4 = FUN_00ceab64();
      if ((uVar4 & 1) != 0) goto LAB_00bf196c;
      uVar3 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x28));
      goto LAB_00bf1984;
    }
  }
  else {
    uVar4 = FUN_00ceab64();
    if ((uVar4 & 1) == 0) {
      uVar3 = FUN_00cedf10();
    }
    else {
LAB_00bf196c:
      uVar3 = 0xff;
    }
LAB_00bf1984:
    FUN_00e6a8a8(local_38,"_%u",uVar3);
    uStack_56 = 0;
    local_68 = 0x20;
    uStack_5f = (undefined7)local_38._8_8_;
    uStack_58 = SUB81(local_38._8_8_,7);
    uStack_67 = (undefined7)local_38._0_8_;
    uStack_60 = SUB81(local_38._0_8_,7);
    uStack_57 = 0;
    FUN_0090de84(local_50,(ulong)&local_68 | 1,0x10);
    if ((local_68 & 1) != 0) {
      operator_delete((void *)CONCAT62(uStack_56,CONCAT11(uStack_57,uStack_58)));
    }
  }
  pvVar1 = (void *)((ulong)local_50 | 1);
  if ((local_50[0] & 1) != 0) {
    pvVar1 = local_40;
  }
  FUN_00931e2c(pvVar1);
  FUN_00c66878(*(undefined8 *)(param_1 + 8),1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
LAB_00bf1a10:
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf1a34(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    FUN_00931e48();
    FUN_00c66878(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}




void FUN_00bf1a70(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = thunk_FUN_00ec5f5c();
  FUN_00c66878(uVar2,uVar1 & 1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00932084();
  FUN_00c6696c(uVar2,uVar1 & 1);
  FUN_00bf1acc(param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = FUN_00931fe4();
  FUN_00c669b0(uVar2,uVar1 & 1);
  return;
}




void FUN_00bf1acc(long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_198 [240];
  undefined8 local_a8 [2];
  undefined4 local_98 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_0092e920();
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00c66c50(*(undefined8 *)(param_1 + 8),local_98,0x10);
    if (uVar3 != 0) {
      uVar4 = (ulong)uVar3;
      puVar9 = local_98;
      do {
        lVar5 = FUN_00931cd0(*puVar9);
        if ((lVar5 == 0) || (*(char *)(lVar5 + 0x21) == '\0')) {
          FUN_00c66ba8(*(undefined8 *)(param_1 + 8),*puVar9);
        }
        uVar4 = uVar4 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
    }
    lVar5 = 0;
    do {
      FUN_00e70510(auStack_198 + lVar5);
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x100);
    uVar3 = FUN_00931d10(auStack_198,0x10);
    if (uVar3 != 0) {
      uVar4 = (ulong)uVar3;
      puVar8 = auStack_198;
      do {
        lVar5 = FUN_00931cb0(puVar8);
        if (((lVar5 != 0) && (*(char *)(lVar5 + 0x21) != '\0')) &&
           (uVar6 = FUN_00931cf0(lVar5), (uVar6 & 1) == 0)) {
          uVar6 = FUN_00c66c30(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar5 + 0x18));
          bVar2 = *(char *)(lVar5 + 0x20) != '\0';
          if ((uVar6 & 1) == 0) {
            FUN_00c66a34(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar5 + 0x18),lVar5,bVar2);
          }
          else {
            FUN_00c66d14(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar5 + 0x18),bVar2);
          }
        }
        uVar4 = uVar4 - 1;
        puVar8 = puVar8 + 0x10;
      } while (uVar4 != 0);
    }
    lVar5 = 0;
    do {
      pvVar7 = *(void **)((long)local_a8 + lVar5 + 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete__(pvVar7);
        *(undefined8 *)((long)local_a8 + lVar5) = 0;
        *(undefined8 *)((long)local_a8 + lVar5 + 8) = 0;
      }
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != -0x100);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf1c44(long param_1)

{
  FUN_00c660e4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bf1c4c(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    uVar1 = thunk_FUN_00ec5f5c();
    if ((uVar1 & 1) != 0) {
      FUN_00bf1a34(param_1);
    }
    FUN_00931c9c();
    return;
  }
  return;
}




void FUN_00bf1c8c(long param_1)

{
  FUN_00bf1acc();
                    /* WARNING: Could not recover jumptable at 0x00bf1cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  return;
}




void FUN_00bf1cb8(long param_1)

{
  FUN_00bf1acc(param_1 + -0x10);
                    /* WARNING: Could not recover jumptable at 0x00bf1ce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + -8) + 0x90))();
  return;
}




void FUN_00bf1ce8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00931cf0(param_2);
  if ((uVar1 & 1) == 0) {
    FUN_00bf1acc(param_1);
  }
  else {
    uVar1 = FUN_00931e18();
    if ((uVar1 & 1) == 0) {
      FUN_00c660e4(*(undefined8 *)(param_1 + 8));
    }
    else {
      FUN_00bf1a70(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00bf1d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  return;
}




void FUN_00bf1d44(long param_1)

{
  FUN_00bf1ce8(param_1 + -0x10);
  return;
}




void thunk_FUN_00bf1acc(long param_1)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  void *pvVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  undefined1 auStack_198 [240];
  undefined8 auStack_a8 [2];
  undefined4 auStack_98 [16];
  long lStack_58;
  
  lVar1 = tpidr_el0;
  lStack_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_0092e920();
  if ((uVar4 & 1) != 0) {
    uVar3 = FUN_00c66c50(*(undefined8 *)(param_1 + 8),auStack_98,0x10);
    if (uVar3 != 0) {
      uVar4 = (ulong)uVar3;
      puVar9 = auStack_98;
      do {
        lVar5 = FUN_00931cd0(*puVar9);
        if ((lVar5 == 0) || (*(char *)(lVar5 + 0x21) == '\0')) {
          FUN_00c66ba8(*(undefined8 *)(param_1 + 8),*puVar9);
        }
        uVar4 = uVar4 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar4 != 0);
    }
    lVar5 = 0;
    do {
      FUN_00e70510(auStack_198 + lVar5);
      lVar5 = lVar5 + 0x10;
    } while (lVar5 != 0x100);
    uVar3 = FUN_00931d10(auStack_198,0x10);
    if (uVar3 != 0) {
      uVar4 = (ulong)uVar3;
      puVar8 = auStack_198;
      do {
        lVar5 = FUN_00931cb0(puVar8);
        if (((lVar5 != 0) && (*(char *)(lVar5 + 0x21) != '\0')) &&
           (uVar6 = FUN_00931cf0(lVar5), (uVar6 & 1) == 0)) {
          uVar6 = FUN_00c66c30(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar5 + 0x18));
          bVar2 = *(char *)(lVar5 + 0x20) != '\0';
          if ((uVar6 & 1) == 0) {
            FUN_00c66a34(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar5 + 0x18),lVar5,bVar2);
          }
          else {
            FUN_00c66d14(*(undefined8 *)(param_1 + 8),*(undefined4 *)(lVar5 + 0x18),bVar2);
          }
        }
        uVar4 = uVar4 - 1;
        puVar8 = puVar8 + 0x10;
      } while (uVar4 != 0);
    }
    lVar5 = 0;
    do {
      pvVar7 = *(void **)((long)auStack_a8 + lVar5 + 8);
      if (pvVar7 != (void *)0x0) {
        operator_delete__(pvVar7);
        *(undefined8 *)((long)auStack_a8 + lVar5) = 0;
        *(undefined8 *)((long)auStack_a8 + lVar5 + 8) = 0;
      }
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != -0x100);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bf1d50(long param_1)

{
  FUN_00bf1acc(param_1 + -0x10);
  return;
}




void FUN_00bf1d58(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0092e920();
  if (((uVar2 & 1) != 0) && (uVar2 = FUN_00931e18(), (uVar2 & 1) == 0)) {
    FUN_00bf1a70(param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = FUN_00c6681c(uVar3);
    FUN_00c66218(uVar3,~uVar1 & 1);
    return;
  }
  uVar2 = FUN_0092e920();
  if ((((uVar2 & 1) == 0) || (uVar2 = FUN_00931e18(), (uVar2 & 1) == 0)) ||
     (uVar2 = FUN_00931d34(), (uVar2 & 1) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = 0;
  }
  else {
    FUN_00bf1a70(param_1);
    FUN_00c66218(*(undefined8 *)(param_1 + 8),0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = FUN_00c66804(uVar3);
    uVar1 = ~uVar1 & 1;
  }
  FUN_00c66190(uVar3,uVar1);
  return;
}




void FUN_00bf1e00(long param_1)

{
  ulong uVar1;
  
  FUN_00bf18e0();
  uVar1 = FUN_00c66810(*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) != 0) {
    FUN_00c66150(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}




void FUN_00bf1e40(long param_1)

{
  ulong uVar1;
  
  FUN_00bf1a34();
  uVar1 = FUN_00c66810(*(undefined8 *)(param_1 + 8));
  if ((uVar1 & 1) != 0) {
    FUN_00c66150(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}




void FUN_00bf1e80(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    FUN_0093203c(1);
    FUN_00c6696c(*(undefined8 *)(param_1 + 8),1);
    uVar1 = FUN_00c66810(*(undefined8 *)(param_1 + 8));
    if ((uVar1 & 1) != 0) {
      FUN_00c66150(*(undefined8 *)(param_1 + 8),0);
      return;
    }
  }
  return;
}




void FUN_00bf1ed8(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    FUN_0093203c(0);
    FUN_00c6696c(*(undefined8 *)(param_1 + 8),0);
    uVar1 = FUN_00c66810(*(undefined8 *)(param_1 + 8));
    if ((uVar1 & 1) != 0) {
      FUN_00c66150(*(undefined8 *)(param_1 + 8),0);
      return;
    }
  }
  return;
}




void FUN_00bf1f30(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_0092e920();
  if ((uVar2 & 1) != 0) {
    FUN_00bf1acc(param_1);
    uVar3 = *(undefined8 *)(param_1 + 8);
    uVar1 = FUN_00c66810(uVar3);
    FUN_00c66150(uVar3,~uVar1 & 1);
    return;
  }
  return;
}




void FUN_00bf1f80(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    FUN_00931fc8(1);
    FUN_00c669b0(*(undefined8 *)(param_1 + 8),1);
    return;
  }
  return;
}




void FUN_00bf1fc0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e920();
  if ((uVar1 & 1) != 0) {
    FUN_00931fc8(0);
    FUN_00c669b0(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}

