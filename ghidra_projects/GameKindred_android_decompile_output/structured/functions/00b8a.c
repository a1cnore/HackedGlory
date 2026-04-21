// functions/00b8a — 9 functions
#include "libGameKindred.h"




void FUN_00b8a604(undefined8 param_1,long param_2,byte param_3)

{
  uint uVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if ((*(byte *)(param_2 + 0xc0) & 1) == (param_3 & 1)) {
    return;
  }
  FUN_00f01980(param_2);
  lVar2 = DAT_03210d00;
  if ((param_3 & 1) == 0) {
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar5;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efcad4(puVar5);
      *(undefined ***)puVar5 = &PTR_FUN_02825268;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00efcac4(param_1,puVar5);
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) {
      puVar6 = (ushort *)0x0;
LAB_00b8a8d4:
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar6;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar6);
      *(undefined ***)puVar6 = &PTR_FUN_02825148;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
      lVar2 = DAT_03210d00;
      uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
      if ((ulong)uVar4 == 0xffff) goto LAB_00b8a8d4;
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
      if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar4 = 0xffff;
      }
      else {
        uVar4 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_028250b8;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_00f02308(param_2,puVar5,puVar6,puVar7,0);
    bVar3 = *(byte *)(param_2 + 0xc0) & 0xfe;
    goto LAB_00b8a9b8;
  }
  uVar1 = *(uint *)(param_2 + 0x84);
  *(uint *)(param_2 + 0x84) = uVar1 | 8;
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_2 + 0x84) = uVar1 & 0xffff807f | 8;
    FUN_0091ada4(param_2);
  }
  lVar2 = DAT_03210d00;
  uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
LAB_00b8a7a0:
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efc8e8(puVar5);
    *(undefined ***)puVar5 = &PTR_FUN_02825100;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    lVar2 = DAT_03210d00;
    uVar4 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar4 == 0xffff) goto LAB_00b8a7a0;
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_00efcad4(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825220;
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_00efcac4(param_1,puVar6);
  FUN_00f02308(param_2,puVar5,puVar6,0);
  bVar3 = *(byte *)(param_2 + 0xc0) | 1;
LAB_00b8a9b8:
  *(byte *)(param_2 + 0xc0) = bVar3;
  return;
}




void FUN_00b8a9d4(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b8a9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x148))(param_1,1);
    return;
  }
  return;
}




void FUN_00b8a9ec(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b8a9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x148))(param_1,0);
    return;
  }
  return;
}




void FUN_00b8aa04(void *param_1)

{
  FUN_00f13d08();
  operator_delete(param_1);
  return;
}




void FUN_00b8aa28(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  uint uVar4;
  long lVar5;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e8060;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4d;
  FUN_00f0e4a8(plVar3);
  FUN_00f0d160(param_1 + 0x6b);
  *(undefined1 *)(param_1 + 0x91) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6b,1);
  local_60 = DAT_03210f58;
  local_88 = FUN_00b8ac70;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  local_88 = FUN_00b8ac70;
  local_60 = DAT_03210f84;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 1,&local_88);
  FUN_00f0e6e8(plVar1,0);
  FUN_00f0e670(plVar1,&DAT_01bee7f6,2);
  if ((*(uint *)((long)param_1 + 0x10c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar1);
  }
  FUN_00f0e6e8(plVar2,0);
  if ((*(uint *)((long)param_1 + 0x1fc) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x1fc) = *(uint *)((long)param_1 + 0x1fc) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar2);
  }
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) | 2;
  FUN_00f0e6e8(plVar3,0);
  if ((*(uint *)((long)param_1 + 0x2ec) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x2ec) = *(uint *)((long)param_1 + 0x2ec) & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar3);
  }
  uVar4 = *(uint *)((long)param_1 + 0x84);
  *(uint *)((long)param_1 + 0x84) = uVar4 & 0xfffffffb;
  if ((uVar4 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x84) = uVar4 & 0xffff807b;
    FUN_0091ada4(param_1);
  }
  FUN_00b8ac74(param_1);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b8ac70(void)

{
  return;
}




void FUN_00b8ac74(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float local_48;
  float fStack_44;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&fStack_44,&local_48);
  FUN_00f13f08(fStack_44,local_48,param_1 + 0x88);
  lVar1 = param_1 + 0x178;
  FUN_00f13f08(fStack_44,local_48 * 0.5,lVar1);
  if ((*(float *)(param_1 + 0x1b8) != 0.0) || (*(float *)(param_1 + 0x1bc) != 0.0)) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    FUN_0091ada4(lVar1);
  }
  local_40 = 0;
  (**(code **)(*(long *)(param_1 + 0x178) + 0x28))(lVar1,&local_40);
  lVar1 = param_1 + 0x268;
  FUN_00f13f08(fStack_44,local_48 * 0.5,lVar1);
  if ((*(float *)(param_1 + 0x2a8) != 0.0) || (*(float *)(param_1 + 0x2ac) != local_48)) {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(float *)(param_1 + 0x2ac) = local_48;
    FUN_0091ada4(lVar1);
  }
  local_40 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x268) + 0x28))(lVar1,&local_40);
  plVar2 = (long *)(param_1 + 0x358);
  if ((*(float *)(param_1 + 0x398) != fStack_44 * 0.5) ||
     (*(float *)(param_1 + 0x39c) != local_48 * 0.5)) {
    *(float *)(param_1 + 0x398) = fStack_44 * 0.5;
    *(float *)(param_1 + 0x39c) = local_48 * 0.5;
    FUN_0091ada4(plVar2);
  }
  local_40 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_40);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b8ac74(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  float fStack_48;
  float fStack_44;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  FUN_00f00298(&fStack_44,&fStack_48);
  FUN_00f13f08(fStack_44,fStack_48,param_1 + 0x88);
  lVar1 = param_1 + 0x178;
  FUN_00f13f08(fStack_44,fStack_48 * 0.5,lVar1);
  if ((*(float *)(param_1 + 0x1b8) != 0.0) || (*(float *)(param_1 + 0x1bc) != 0.0)) {
    *(undefined8 *)(param_1 + 0x1b8) = 0;
    FUN_0091ada4(lVar1);
  }
  uStack_40 = 0;
  (**(code **)(*(long *)(param_1 + 0x178) + 0x28))(lVar1,&uStack_40);
  lVar1 = param_1 + 0x268;
  FUN_00f13f08(fStack_44,fStack_48 * 0.5,lVar1);
  if ((*(float *)(param_1 + 0x2a8) != 0.0) || (*(float *)(param_1 + 0x2ac) != fStack_48)) {
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    *(float *)(param_1 + 0x2ac) = fStack_48;
    FUN_0091ada4(lVar1);
  }
  uStack_40 = 0x3f80000000000000;
  (**(code **)(*(long *)(param_1 + 0x268) + 0x28))(lVar1,&uStack_40);
  plVar2 = (long *)(param_1 + 0x358);
  if ((*(float *)(param_1 + 0x398) != fStack_44 * 0.5) ||
     (*(float *)(param_1 + 0x39c) != fStack_48 * 0.5)) {
    *(float *)(param_1 + 0x398) = fStack_44 * 0.5;
    *(float *)(param_1 + 0x39c) = fStack_48 * 0.5;
    FUN_0091ada4(plVar2);
  }
  uStack_40 = 0x3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&uStack_40);
  if (*(long *)(lVar3 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00b8adec(long param_1,byte param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if (*(byte *)(param_1 + 0x488) == (param_2 & 1)) {
    return;
  }
  FUN_00f01980(param_1);
  lVar1 = DAT_03210d00;
  if ((param_2 & 1) != 0) {
    uVar2 = *(uint *)(param_1 + 0x84);
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x84) = uVar2 & 0xffff807f;
      FUN_0091ada4(param_1);
      uVar2 = *(uint *)(param_1 + 0x84);
    }
    *(uint *)(param_1 + 0x84) = uVar2 | 0x10;
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) {
      puVar5 = (ushort *)0x0;
      puVar4 = (ushort *)0x0;
      puVar6 = (ushort *)0x0;
      _DAT_00000010 = FUN_00b8b370;
      _DAT_00000020 = 0;
    }
    else {
      puVar4 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
      if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar4;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efc8e8(puVar4);
      *(undefined ***)puVar4 = &PTR_FUN_027c27b8;
      puVar4[0xc] = 0;
      puVar4[0xd] = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      puVar4[8] = 0;
      puVar4[9] = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
      lVar1 = DAT_03210d00;
      puVar6 = (ushort *)(DAT_03210d00 + 0x20010);
      uVar3 = *puVar6;
      *(code **)(puVar4 + 8) = FUN_00b8b370;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0;
      puVar4[0x12] = 0;
      puVar4[0x13] = 0;
      if ((ulong)uVar3 == 0xffff) {
        puVar5 = (ushort *)0x0;
      }
      else {
        puVar5 = (ushort *)(lVar1 + (ulong)uVar3 * 0x40 + 0x10);
        if (uVar3 == *(ushort *)(lVar1 + 0x20012)) {
          uVar3 = 0xffff;
        }
        else {
          uVar3 = *puVar5;
        }
        *puVar6 = uVar3;
        *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
        FUN_00efc8e8(puVar5);
        *(undefined ***)puVar5 = &PTR_FUN_02825100;
        *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
        lVar1 = DAT_03210d00;
        uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar3 != 0xffff) {
          puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar3 * 0x40 + 0x10);
          if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar3 = 0xffff;
          }
          else {
            uVar3 = *puVar6;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
          *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
          FUN_00efdd74(puVar6);
          *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
          goto LAB_00b8b314;
        }
      }
      puVar6 = (ushort *)0x0;
    }
LAB_00b8b314:
    FUN_00efcac4(0x3dcccccd,puVar6);
    FUN_00efddc4(0x3f800000,puVar6);
    FUN_00f02308(param_1,puVar4,puVar5,puVar6,0);
    *(undefined1 *)(param_1 + 0x488) = 1;
    uVar2 = *(uint *)(param_1 + 0x10c) | 0x10;
    goto LAB_00b8b358;
  }
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar6 = (ushort *)0x0;
    puVar5 = (ushort *)0x0;
    _DAT_00000010 = FUN_00b8b370;
    _DAT_00000020 = 0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_027c27b8;
    puVar6[0xc] = 0;
    puVar6[0xd] = 0;
    puVar6[0xe] = 0;
    puVar6[0xf] = 0;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    puVar6[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    puVar4 = (ushort *)(DAT_03210d00 + 0x20010);
    uVar3 = *puVar4;
    *(code **)(puVar6 + 8) = FUN_00b8b370;
    puVar6[0x10] = 0;
    puVar6[0x11] = 0;
    puVar6[0x12] = 0;
    puVar6[0x13] = 0;
    if ((ulong)uVar3 == 0xffff) {
      puVar5 = (ushort *)0x0;
    }
    else {
      puVar5 = (ushort *)(lVar1 + (ulong)uVar3 * 0x40 + 0x10);
      if (uVar3 == *(ushort *)(lVar1 + 0x20012)) {
        uVar3 = 0xffff;
      }
      else {
        uVar3 = *puVar5;
      }
      *puVar4 = uVar3;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdd74(puVar5);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
  }
  FUN_00efcac4(0x3dcccccd,puVar5);
  FUN_00efddc4(0,puVar5);
  lVar1 = DAT_03210d00;
  uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
LAB_00b8b248:
    puVar7 = (ushort *)0x0;
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
    *(undefined ***)puVar4 = &PTR_FUN_02825148;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    lVar1 = DAT_03210d00;
    uVar3 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar3 == 0xffff) goto LAB_00b8b248;
    puVar7 = (ushort *)(DAT_03210d00 + 0x10 + (ulong)uVar3 * 0x40);
    if (uVar3 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar7;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_00efc8e8(puVar7);
    *(undefined ***)puVar7 = &PTR_FUN_027c27b8;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0;
    puVar7[0xe] = 0;
    puVar7[0xf] = 0;
    puVar7[0x10] = 0;
    puVar7[0x11] = 0;
    puVar7[0x12] = 0;
    puVar7[0x13] = 0;
    puVar7[8] = 0;
    puVar7[9] = 0;
    puVar7[10] = 0;
    puVar7[0xb] = 0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  *(code **)(puVar7 + 8) = FUN_00b8b378;
  puVar7[0x10] = 0;
  puVar7[0x11] = 0;
  puVar7[0x12] = 0;
  puVar7[0x13] = 0;
  FUN_00f02308(param_1,puVar6,puVar5,puVar4,puVar7,0);
  *(undefined1 *)(param_1 + 0x488) = 0;
  uVar2 = *(uint *)(param_1 + 0x10c) & 0xffffffef;
LAB_00b8b358:
  *(uint *)(param_1 + 0x10c) = uVar2;
  return;
}

