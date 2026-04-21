// functions/00d40 — 38 functions
#include "libGameKindred.h"




void FUN_00d40008(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281ae08;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  return;
}




void FUN_00d4004c(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d40054(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d4005c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_3c = -1;
  if (*(code **)(param_1 + 0x10) == (code *)0x0) {
    local_3c = *(int *)(param_1 + 0x18);
  }
  else {
    (**(code **)(param_1 + 0x10))(param_2,&local_3c);
  }
  if ((local_3c != -1) && (lVar2 = FUN_00d9e390(), lVar2 != 0)) {
    FUN_00d67b8c(param_2,lVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d400f8(undefined8 *param_1)

{
  FUN_00d468c8();
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_0281ae48;
  param_1[2] = 0;
  return;
}




void FUN_00d40130(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x10) = param_2;
  return;
}




void FUN_00d40138(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d40140(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x20) = param_2;
  return;
}




void FUN_00d40148(long param_1,undefined8 param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  char local_140 [4];
  uint local_13c;
  undefined1 auStack_138 [96];
  undefined8 local_d8 [16];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = FUN_00d66d28(param_2);
  FUN_00d4d9e8(auStack_138);
  FUN_00d4daf4(auStack_138,1,0,0,uVar4);
  FUN_00d4ddc4(auStack_138);
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_00d4dca4(auStack_138,*(long *)(param_1 + 0x10),0);
  }
  uVar2 = FUN_00d9e840(auStack_138,local_d8,0x10,0);
  local_13c = uVar2;
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2,&local_13c);
  }
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      local_140[0] = '\x01';
      uVar3 = FUN_00d67bf4(param_2);
      if (local_13c <= uVar3) break;
      if (*(code **)(param_1 + 0x20) != (code *)0x0) {
        (**(code **)(param_1 + 0x20))(param_2,local_d8[uVar5],local_140);
      }
      if (local_140[0] != '\0') {
        FUN_00d67b8c(param_2,local_d8[uVar5]);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d40284(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_00d66d28(param_2);
  FUN_00d5cf60();
  uVar1 = FUN_00d9e390();
  FUN_00d67b8c(param_2,uVar1);
  return;
}




void FUN_00d402b8(undefined8 param_1,undefined8 param_2)

{
  FUN_00d67c04(param_2);
  return;
}




void FUN_00d402c0(undefined8 *param_1)

{
  FUN_00d468c8();
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_0281b728;
  param_1[3] = 0;
  return;
}




void FUN_00d402f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}




void FUN_00d40300(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *(undefined4 *)(param_1 + 0x10);
  if (*(code **)(param_1 + 0x18) != (code *)0x0) {
    (**(code **)(param_1 + 0x18))(param_2,param_3,&local_2c);
  }
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_2c);
  }
  return;
}




void FUN_00d40370(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281b768;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0x300000001;
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) & 0xf0 | 2;
  return;
}




void FUN_00d403c8(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4,byte param_5
                 )

{
  *(undefined4 *)(param_2 + 0x10) = param_1;
  *(undefined4 *)(param_2 + 0x20) = param_3;
  *(undefined4 *)(param_2 + 0x24) = param_4;
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 0xfe | param_5 & 1;
  return;
}




void FUN_00d403e0(long param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,byte param_5
                 )

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfe | param_5 & 1;
  return;
}




void FUN_00d403f8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_00d40400(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfd | (param_2 & 1) << 1;
  return;
}




void FUN_00d40418(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xfb | (param_2 & 1) << 2;
  return;
}




void FUN_00d40430(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x30) = *(byte *)(param_1 + 0x30) & 0xf7 | (param_2 & 1) << 3;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00d40448(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint uVar13;
  float fVar14;
  undefined8 local_e0;
  float local_d8 [28];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar8 = FUN_00ceab48();
  if (((uVar8 & 1) != 0) && (iVar5 = FUN_00d67bf4(param_2), iVar5 != 0)) {
    uVar13 = 0;
    do {
      uVar6 = FUN_00d67b84(param_2);
      lVar9 = FUN_00d67bdc(param_2,uVar13);
      if (((*(byte *)(param_1 + 0x30) >> 2 & 1) == 0) &&
         (lVar10 = FUN_00d66d28(param_2), *(int *)(lVar10 + 0x260) != *(int *)(lVar9 + 0x260))) {
        uVar11 = FUN_00d66d28(param_2);
        FUN_00d9e1e0(uVar11,lVar9,&local_e0);
      }
      else {
        local_e0 = _DAT_03218ef8;
      }
      local_d8[0] = *(float *)(param_1 + 0x10);
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_2,lVar9,local_d8);
      }
      fVar14 = local_d8[0];
      if ((*(byte *)(param_1 + 0x30) >> 3 & 1) != 0) {
        uVar7 = FUN_00d66cf4(param_2);
        fVar14 = fVar14 * (float)uVar7;
      }
      uVar3 = *(undefined4 *)(lVar9 + 0x260);
      uVar1 = *(undefined4 *)(param_1 + 0x20);
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      puVar12 = (undefined8 *)FUN_00d67b14(param_2);
      FUN_00daa148(fVar14,local_d8,uVar6,uVar3,uVar1,uVar2,&local_e0,*puVar12,
                   *(byte *)(param_1 + 0x30) & 1,*(byte *)(param_1 + 0x30) >> 1 & 1);
      if (*(code **)(param_1 + 0x28) != (code *)0x0) {
        (**(code **)(param_1 + 0x28))(param_2,local_d8);
      }
      FUN_00910c08(local_d8);
      uVar13 = uVar13 + 1;
      uVar7 = FUN_00d67bf4(param_2);
    } while (uVar13 < uVar7);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d405ec(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  undefined4 local_88 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    lVar7 = FUN_00d66d28(param_2);
    uVar4 = FUN_00d67b84(param_2);
    local_88[0] = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(lVar7 + 0x260);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,lVar7,local_88);
    }
    uVar3 = local_88[0];
    uVar5 = FUN_00d66d34(param_2);
    FUN_00daa4a4(uVar3,local_88,uVar4,uVar1,uVar5,0xffffffff,0xee,0xffffffff);
    FUN_00910c0c(local_88);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d406e0(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  undefined4 local_a8 [16];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar8 = FUN_00ceab48();
  if (((uVar8 & 1) != 0) && (iVar4 = FUN_00d67bf4(param_2), iVar4 != 0)) {
    uVar10 = 0;
    do {
      lVar9 = FUN_00d67bdc(param_2,uVar10);
      uVar5 = FUN_00d67b84(param_2);
      local_a8[0] = *(undefined4 *)(param_1 + 0x10);
      uVar1 = *(undefined4 *)(lVar9 + 0x260);
      if (*(code **)(param_1 + 0x18) != (code *)0x0) {
        (**(code **)(param_1 + 0x18))(param_2,lVar9,local_a8);
      }
      uVar3 = local_a8[0];
      uVar6 = FUN_00d66d34(param_2);
      FUN_00daa4a4(uVar3,local_a8,uVar5,uVar1,uVar6,0xffffffff,0xee,0xffffffff);
      FUN_00910c0c(local_a8);
      uVar10 = uVar10 + 1;
      uVar7 = FUN_00d67bf4(param_2);
    } while (uVar10 < uVar7);
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d40814(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined4 local_68 [12];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00ceab48();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_00d66d28(param_2);
    local_68[0] = *(undefined4 *)(param_1 + 0x10);
    uVar1 = *(undefined4 *)(lVar4 + 0x260);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,lVar4,local_68);
    }
    FUN_00d043c0(local_68[0],local_68,uVar1,2,0);
    FUN_00ce20fc(local_68);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d408c0(undefined8 *param_1)

{
  FUN_00d468c8();
  param_1[2] = 0x10;
  param_1[3] = 0;
  *param_1 = &PTR_thunk_FUN_00d468dc_0281ae88;
  *(undefined4 *)(param_1 + 4) = DAT_03214ce8;
  return;
}




void FUN_00d40908(undefined4 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x14) = param_1;
  return;
}




void FUN_00d40914(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  float fVar13;
  float fVar14;
  
  uVar6 = FUN_00ceab48();
  if ((uVar6 & 1) != 0) {
    uVar7 = FUN_00d66d28(param_2);
    iVar2 = FUN_00d67c54(param_2);
    if (iVar2 < 1) {
      uVar6 = 0;
    }
    else {
      fVar13 = *(float *)(param_1 + 0x14);
      iVar2 = FUN_00d67c54(param_2);
      uVar6 = (ulong)(uint)(fVar13 * (float)iVar2);
      if (*(int *)(param_1 + 0x10) == 5) {
        uVar3 = FUN_00d67b84(param_2);
        lVar8 = FUN_00d66d28(param_2);
        uVar6 = FUN_00910c10(uVar6,uVar3,*(undefined4 *)(lVar8 + 0x260));
      }
      else if (*(int *)(param_1 + 0x10) == 4) {
        uVar3 = FUN_00d67b84(param_2);
        lVar8 = FUN_00d66d28(param_2);
        uVar6 = FUN_00910c18(uVar6,uVar3,*(undefined4 *)(lVar8 + 0x260));
      }
    }
    iVar2 = FUN_00d66cf4(param_2);
    plVar12 = *(long **)(param_1 + 0x18);
    bVar1 = false;
    if (plVar12 != (long *)0x0) {
      if (*(int *)(param_1 + 0x20) == (int)plVar12[1]) {
        lVar8 = (**(code **)(*plVar12 + 0x10))(plVar12);
        bVar1 = lVar8 != 0;
      }
      else {
        *(undefined8 *)(param_1 + 0x18) = 0;
        bVar1 = false;
        *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
      }
    }
    if (iVar2 == 0) {
      if (bVar1) {
        plVar12 = *(long **)(param_1 + 0x18);
        if (plVar12 == (long *)0x0) {
          uVar9 = 0;
        }
        else if (*(int *)(param_1 + 0x20) == (int)plVar12[1]) {
          uVar9 = (**(code **)(*plVar12 + 0x10))();
        }
        else {
          *(undefined8 *)(param_1 + 0x18) = 0;
          uVar9 = 0;
          *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
        }
        FUN_00d7f9ec(uVar7,uVar9);
        uVar3 = DAT_03214ce8;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined4 *)(param_1 + 0x20) = uVar3;
      }
    }
    else {
      if (bVar1) {
        if ((float)uVar6 <= 0.0) {
          plVar12 = *(long **)(param_1 + 0x18);
          uVar9 = 0;
          if (plVar12 != (long *)0x0) {
            if (*(int *)(param_1 + 0x20) == (int)plVar12[1]) {
              uVar9 = (**(code **)(*plVar12 + 0x10))();
            }
            else {
              *(undefined8 *)(param_1 + 0x18) = 0;
              uVar9 = 0;
              *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
            }
          }
          fVar13 = (float)FUN_00d7bce4(uVar9);
          fVar14 = *(float *)(param_1 + 0x14);
          uVar5 = FUN_00d66cf4(param_2);
          fVar14 = fVar14 * (float)uVar5;
          if (fVar13 <= fVar14) {
            return;
          }
          uVar9 = FUN_00d44c78(param_2);
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
            uVar10 = 0;
          }
          else if (*(int *)(param_1 + 0x20) == (int)plVar12[1]) {
            uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          }
          else {
            *(undefined8 *)(param_1 + 0x18) = 0;
            uVar10 = 0;
            *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
          }
          uVar6 = (ulong)(uint)(fVar14 - fVar13);
        }
        else {
          uVar9 = FUN_00d44c78(param_2);
          plVar12 = *(long **)(param_1 + 0x18);
          if (plVar12 == (long *)0x0) {
            uVar10 = 0;
          }
          else if (*(int *)(param_1 + 0x20) == (int)plVar12[1]) {
            uVar10 = (**(code **)(*plVar12 + 0x10))(plVar12);
          }
          else {
            *(undefined8 *)(param_1 + 0x18) = 0;
            uVar10 = 0;
            *(undefined4 *)(param_1 + 0x20) = DAT_03214ce8;
          }
        }
        FUN_00d7fa78(uVar6,uVar9,uVar7,uVar10);
        return;
      }
      uVar9 = FUN_00d44c78(param_2);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar4 = FUN_00d66d34(param_2);
      lVar11 = FUN_00d7f914(uVar6,uVar9,uVar7,uVar3,uVar4);
      lVar8 = 0;
      uVar3 = DAT_03214ce8;
      if (lVar11 != 0) {
        uVar3 = *(undefined4 *)(lVar11 + 0x30);
        lVar8 = lVar11 + 0x28;
      }
      *(long *)(param_1 + 0x18) = lVar8;
      *(undefined4 *)(param_1 + 0x20) = uVar3;
    }
  }
  return;
}




void FUN_00d40c88(undefined8 *param_1)

{
  FUN_00d468c8();
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = &PTR_FUN_0281aec8;
  param_1[2] = 0x40000002d;
  *(undefined2 *)((long)param_1 + 0x24) = 1;
  return;
}




void FUN_00d40cd4(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4,byte param_5
                 ,byte param_6)

{
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x14) = param_4;
  *(undefined4 *)(param_2 + 0x20) = param_1;
  *(byte *)(param_2 + 0x24) = param_5 & 1;
  *(byte *)(param_2 + 0x25) = param_6 & 1;
  return;
}




void FUN_00d40cf0(long param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,byte param_5
                 ,byte param_6)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(undefined4 *)(param_1 + 0x14) = param_3;
  *(byte *)(param_1 + 0x24) = param_5 & 1;
  *(byte *)(param_1 + 0x25) = param_6 & 1;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}




void FUN_00d40d0c(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  undefined4 local_94;
  undefined1 auStack_90 [56];
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar8 = FUN_00ceab48();
  if ((uVar8 & 1) != 0) {
    lVar9 = FUN_00d66d28(param_2);
    local_94 = *(undefined4 *)(param_1 + 0x20);
    if (*(code **)(param_1 + 0x18) != (code *)0x0) {
      (**(code **)(param_1 + 0x18))(param_2,&local_94);
    }
    uVar6 = local_94;
    uVar3 = *(undefined4 *)(lVar9 + 0x260);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar4 = *(undefined1 *)(param_1 + 0x24);
    uVar7 = FUN_00d66d34(param_2);
    FUN_00d041e4(uVar6,auStack_90,uVar3,uVar1,uVar2,uVar4,uVar7);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00d40de4(undefined8 *param_1)

{
  FUN_00d468c8();
  *param_1 = &PTR_FUN_0281af08;
  param_1[2] = 0x40000002d;
  *(undefined4 *)(param_1 + 3) = 0;
  return;
}




void FUN_00d40e24(undefined4 param_1,long param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_2 + 0x10) = param_3;
  *(undefined4 *)(param_2 + 0x14) = param_4;
  *(undefined4 *)(param_2 + 0x18) = param_1;
  return;
}




void FUN_00d40e30(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  undefined1 auStack_90 [56];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar7 = FUN_00ceab48();
  if ((uVar7 & 1) != 0) {
    lVar8 = FUN_00d66d28(param_2);
    uVar3 = *(undefined4 *)(lVar8 + 0x260);
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    fVar9 = *(float *)(param_1 + 0x18);
    iVar5 = FUN_00d67c54(param_2);
    uVar6 = FUN_00d66d34(param_2);
    FUN_00d041e4(fVar9 * (float)iVar5,auStack_90,uVar3,uVar1,uVar2,0,uVar6);
    FUN_00ce20fc(auStack_90);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d40eec(undefined8 *param_1)

{
  FUN_00d468c8();
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *param_1 = &PTR_FUN_0281af48;
  param_1[2] = 0x40000002d;
  *(undefined4 *)(param_1 + 4) = 1;
  return;
}




void FUN_00d40f38(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,byte param_6)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_2 + 0x10) = param_4;
  *(undefined4 *)(param_2 + 0x14) = param_5;
  *(undefined4 *)(param_2 + 0x18) = param_1;
  *(byte *)(param_2 + 0x1c) = param_6 & 1;
  uVar1 = FUN_00d66cf4(param_3);
  *(undefined4 *)(param_2 + 0x20) = uVar1;
  return;
}




void FUN_00d40f70(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar4 = FUN_00ceab48();
  if ((uVar4 & 1) != 0) {
    lVar5 = FUN_00d66d28(param_2);
    iVar3 = FUN_00d66cf4(param_2);
    iVar1 = iVar3 - *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      FUN_00d041e4(*(float *)(param_1 + 0x18) * (float)iVar1,auStack_70,
                   *(undefined4 *)(lVar5 + 0x260),*(undefined4 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 0x14),*(undefined1 *)(param_1 + 0x1c),0xffffffff);
      FUN_00ce20fc(auStack_70);
      *(int *)(param_1 + 0x20) = iVar3;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

