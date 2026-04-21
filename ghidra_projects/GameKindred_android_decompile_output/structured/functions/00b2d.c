// functions/00b2d — 27 functions
#include "libGameKindred.h"




void FUN_00b2d024(long *param_1)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  
  FUN_00b2cec8();
  plVar1 = param_1 + 0x18;
  *param_1 = (long)&PTR_FUN_027dfb10;
  FUN_00f0e4a8(plVar1);
  FUN_00f13f08(0,0x40800000,param_1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  uVar2 = FUN_00e6a474("TableViewSeparator");
  uVar3 = FUN_0091ed5c("TableViewSeparator",uVar2,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffef;
  FUN_00f04710(param_1);
  return;
}




void FUN_00b2d0e8(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_00f13f08();
  FUN_00f13f08(param_1,param_2,param_3 + 0xc0);
  FUN_00f07940(0,0,param_3 + 0xc0,8,param_3,8);
  return;
}




void FUN_00b2d144(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  FUN_00f0e670(param_1 + 0xc0,&local_2c,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2d198(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027dfc60;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2e;
  FUN_00f0e4a8(plVar2);
  FUN_00f13ca4(param_1 + 0x4c);
  plVar3 = param_1 + 99;
  FUN_00f0eea8(plVar3);
  plVar4 = param_1 + 0x87;
  FUN_00f0d160(plVar4);
  *(undefined1 *)((long)param_1 + 0x592) = 0;
  *(undefined2 *)(param_1 + 0xb2) = 0;
  param_1[0xb1] = 0;
  param_1[0xb0] = 0;
  param_1[0xaf] = 0;
  param_1[0xae] = 0;
  param_1[0xad] = 0;
  *(undefined4 *)((long)param_1 + 0x593) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x4c,1);
  uVar7 = 0x42c80000;
  FUN_00f13f08(0x42200000,plVar1);
  local_88 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x17] + 0x28))(plVar1,&local_88);
  local_60 = DAT_03210f60;
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) | 0x10;
  local_88 = FUN_00b2d3ec;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x18,&local_88);
  local_88 = FUN_00b2d3ec;
  local_60 = DAT_03210f8c;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x18,&local_88);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_right");
  uVar6 = FUN_00f0eaf4(plVar3);
  local_88 = (code *)CONCAT44(uVar7,uVar6);
  FUN_00f13f18(plVar3,&local_88);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50,&DAT_01bee7fa);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2d3ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b2e5c8(param_1,param_4);
  return;
}




void FUN_00b2d3f4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027dfc60;
  FUN_00b2d4bc();
  param_1[0xad] = 0;
  if ((void *)param_1[0xb1] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb1]);
    param_1[0xb1] = 0;
    param_1[0xb0] = 0;
  }
  if ((void *)param_1[0xaf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xaf]);
    param_1[0xaf] = 0;
    param_1[0xae] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x87);
  param_1[99] = &PTR_FUN_028266f0;
  param_1[0x7a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7d);
  FUN_00f13d08(param_1 + 99);
  FUN_00f13d08(param_1 + 0x4c);
  param_1[0x2e] = &PTR_FUN_028266f0;
  param_1[0x45] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x48);
  FUN_00f13d08(param_1 + 0x2e);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00b2d4bc(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  
  uVar2 = *(uint *)(param_1 + 0x570);
  if (uVar2 != 0) {
    lVar4 = 0;
    uVar5 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x578) + lVar4);
      if (plVar1 == (long *)0x0) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x578) + uVar5 * 8);
      }
      else {
        (**(code **)(*plVar1 + 8))();
        uVar2 = *(uint *)(param_1 + 0x570);
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x578) + lVar4);
      }
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + 8;
      *puVar3 = 0;
    } while (uVar5 < uVar2);
  }
  if (*(long *)(param_1 + 0x578) != 0) {
    *(undefined4 *)(param_1 + 0x570) = 0;
  }
  return;
}




void FUN_00b2d53c(void *param_1)

{
  FUN_00b2d3f4();
  operator_delete(param_1);
  return;
}




void FUN_00b2d560(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00b2d598();
  FUN_00f13f08(param_1,uVar1,param_2);
  return;
}




float FUN_00b2d598(undefined1 param_1 [16],float param_2,long param_3)

{
  float fVar1;
  float fVar2;
  
  FUN_00f13e54(param_3 + 0xb8);
  fVar1 = (float)FUN_00b2e4b0(param_3);
  fVar2 = (float)FUN_00b2e53c(param_3);
  return param_2 + fVar1 + fVar2;
}




void FUN_00b2d5e4(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  if (DAT_02be9bcc == '\0') {
    lVar3 = *(long *)(param_1 + 0x288);
    if (*(long *)(param_1 + 0x288) == 0) {
      *(undefined1 *)(param_1 + 0x591) = 0;
    }
    else {
      do {
        lVar2 = *(long *)(lVar3 + 0x30);
        if (lVar2 == 0) {
          uVar1 = FUN_00f023dc(lVar3);
          if ((uVar1 & 1) == 0) {
            *(undefined1 *)(param_1 + 0x591) = 0;
          }
          lVar2 = *(long *)(lVar3 + 0x30);
        }
        lVar3 = lVar2;
      } while (lVar2 != 0);
      if (*(char *)(param_1 + 0x591) != '\0') {
        return;
      }
    }
    if (*(char *)(param_1 + 0x592) != '\0') {
      FUN_00b2d670(param_1);
    }
    if (*(int *)(param_1 + 0x580) != 0) {
      FUN_00b2d6b0(param_1);
      return;
    }
  }
  return;
}




void FUN_00b2d670(long param_1)

{
  FUN_00b2d4bc();
  *(undefined1 *)(param_1 + 0x592) = 0;
  if (*(int *)(param_1 + 0x580) != 0) {
    return;
  }
  FUN_00b2e2d8(*(undefined8 *)(param_1 + 0x568),0);
  return;
}




void FUN_00b2d6b0(long *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((int)param_1[0xb0] != 0) {
    uVar4 = 0;
    do {
      lVar3 = *(long *)(param_1[0xb1] + uVar4 * 8);
      FUN_00f023ec(param_1 + 0x4c,lVar3,1);
      *(long **)(lVar3 + 0xb8) = param_1;
      if ((char)param_1[0xb2] == '\0') {
        uVar1 = *(uint *)(lVar3 + 0x84);
        *(uint *)(lVar3 + 0x84) = uVar1 & 0xfffffffb;
        if ((uVar1 & 0x7f80) != 0) {
          *(uint *)(lVar3 + 0x84) = uVar1 & 0xffff807b;
          FUN_0091ada4(lVar3);
        }
      }
      local_60 = lVar3;
      FUN_00b2dae0(param_1 + 0xae,&local_60);
      uVar1 = *(uint *)(param_1 + 0xb0);
      if (uVar4 != uVar1 - 1) {
        lVar3 = FUN_00b2eea8(param_1 + 0x4c,1);
        local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)((long)param_1 + 0x593));
        FUN_00f0e670(lVar3 + 0xc0,&local_60,2);
        if ((char)param_1[0xb2] == '\0') {
          uVar1 = *(uint *)(lVar3 + 0x84);
          *(uint *)(lVar3 + 0x84) = uVar1 & 0xfffffffb;
          if ((uVar1 & 0x7f80) != 0) {
            *(uint *)(lVar3 + 0x84) = uVar1 & 0xffff807b;
            FUN_0091ada4(lVar3);
          }
        }
        local_60 = lVar3;
        FUN_00b2dae0(param_1 + 0xae,&local_60);
        uVar1 = *(uint *)(param_1 + 0xb0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_00b2de68(param_1,0);
  FUN_00b2e2d8(param_1[0xad],0);
  if (param_1[0xb1] != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2d838(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  FUN_00f13db4();
  plVar1 = param_3 + 0x17;
  uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00f13e54(plVar1);
  FUN_00f13f08(uVar7,plVar1);
  local_60 = FUN_00f13e54(plVar1);
  uStack_5c = param_2;
  FUN_00f13f18(param_3 + 0x2e,&local_60);
  if ((int)param_3[0xae] != 0) {
    uVar4 = 0;
    do {
      uVar7 = *(undefined8 *)(param_3[0xaf] + uVar4 * 8);
      uVar8 = (**(code **)(*param_3 + 0x48))(param_3);
      (**(code **)(**(long **)(param_3[0xaf] + uVar4 * 8) + 0x48))();
      FUN_00f13f08(uVar8,uVar7);
      (**(code **)(**(long **)(param_3[0xaf] + uVar4 * 8) + 0x90))();
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_3 + 0xae));
  }
  uVar7 = (**(code **)(*param_3 + 0x48))(param_3);
  fVar5 = (float)FUN_00b2e4b0(param_3);
  fVar6 = (float)FUN_00b2e53c(param_3);
  FUN_00f13f08(uVar7,fVar5 + fVar6,param_3 + 0x4c);
  FUN_00f07b18(0,plVar1,0,param_3,0);
  FUN_00f07b18(0,param_3 + 0x4c,0,plVar1,2);
  FUN_00f07940(0,0,param_3 + 0x2e,8,plVar1,8);
  plVar2 = param_3 + 99;
  FUN_00f07b18(0,plVar2,5,plVar1,5);
  FUN_00f07b18(0,param_3 + 0x87,5,plVar1,5);
  FUN_00f07b18(0x41a00000,plVar2,3,plVar1,3);
  FUN_00f07b18(0x41a00000,param_3 + 0x87,3,plVar2,1);
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00b2da40(undefined8 param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)FUN_00b2e4b0();
  fVar2 = (float)FUN_00b2e53c(param_1);
  return fVar1 + fVar2;
}




void FUN_00b2da78(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_2;
  FUN_00b2dae0(param_1 + 0x580,&local_30);
  if (DAT_02be9bcc != '\0') {
    FUN_00b2d6b0(param_1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2dae0(uint *param_1,undefined8 *param_2)

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
    FUN_00b2ee28(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




int FUN_00b2db68(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  
  iVar4 = 0;
  for (lVar5 = *(long *)(param_1 + 0x288); lVar5 != 0; lVar5 = *(long *)(lVar5 + 0x30)) {
    if ((param_2 & 1) == 0) {
      uVar1 = FUN_00e6a474("TableViewSeparator");
      iVar2 = FUN_0091ed5c("TableViewSeparator",uVar1,0x1234);
      uVar3 = (uint)((uint)(*(int *)(lVar5 + 0x84) << 1 ^ iVar2 << 0x10) >> 0x10 != 0);
    }
    else {
      uVar3 = 1;
    }
    iVar4 = iVar4 + uVar3;
  }
  return iVar4;
}




void FUN_00b2dbec(long param_1)

{
  long *plVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x570) != 0) {
    uVar2 = 0;
    do {
      plVar1 = *(long **)(*(long *)(param_1 + 0x578) + uVar2 * 8);
      (**(code **)(*plVar1 + 0x138))(plVar1,0);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x570));
  }
  return;
}




void FUN_00b2dc3c(long param_1)

{
  if (DAT_02be9bcc != '\0') {
    FUN_00b2d670();
    return;
  }
  *(undefined1 *)(param_1 + 0x592) = 1;
  return;
}




void FUN_00b2dc58(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x590) = param_2 & 1;
  FUN_00b2dc64();
  return;
}




void FUN_00b2dc64(long param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x590) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3fc90fdb;
  }
  uVar1 = FUN_00eff338(uVar2,0x3dcccccd,param_1 + 0x318,0);
  FUN_00f022a0(param_1 + 0x318,uVar1);
  return;
}




void FUN_00b2dcd0(long param_1)

{
  FUN_00f0d75c(param_1 + 0x438);
  return;
}




void FUN_00b2dcd8(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  FUN_00f0d7fc(param_1 + 0x438,&local_2c);
  FUN_00f0e670(param_1 + 0x318,&local_2c,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2dd3c(long param_1,undefined4 param_2)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = param_2;
  FUN_00f0e670(param_1 + 0x170,&local_2c,2);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2dd90(long param_1,long *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  uVar3 = *(uint *)(param_1 + 0xbd0);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      lVar5 = *(long *)(*(long *)(param_1 + 0xbd8) + uVar4 * 8);
      if (*(int *)(lVar5 + 0x570) != 0) {
        uVar6 = 0;
        do {
          plVar2 = *(long **)(*(long *)(lVar5 + 0x578) + uVar6 * 8);
          (**(code **)(*plVar2 + 0x138))(plVar2,0);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(lVar5 + 0x570));
        uVar3 = *(uint *)(param_1 + 0xbd0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (DAT_0313a0b8 != 0) {
    plVar2 = (long *)(DAT_0313a0b8 + -8);
    while (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      plVar1 = plVar2 + 1;
      plVar2 = (long *)0x0;
      if (*plVar1 != 0) {
        plVar2 = (long *)(*plVar1 + -8);
      }
    }
  }
  *(long **)(param_1 + 0xbe0) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00b2de64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,1);
  return;
}




void FUN_00b2de68(long *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  float fVar4;
  long lVar5;
  undefined8 uVar6;
  ushort *puVar7;
  uint uVar8;
  ushort uVar9;
  uint *puVar10;
  ushort *puVar11;
  ushort *puVar12;
  ushort *puVar13;
  ulong uVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long local_a0;
  long local_98;
  
  lVar3 = tpidr_el0;
  local_98 = *(long *)(lVar3 + 0x28);
  (**(code **)(*param_1 + 0x48))();
  uVar15 = 0;
  fVar16 = 0.0;
  (**(code **)(*param_1 + 0xf0))(param_1);
  uVar8 = *(uint *)(param_1 + 0xae);
  fVar4 = 0.5;
  if ((uVar8 < 0x12d & param_2) == 0) {
    fVar4 = fVar16;
  }
  bVar1 = DAT_02be9bcc == '\0' & uVar8 < 0x12d & param_2;
  *(byte *)((long)param_1 + 0x591) = bVar1;
  if (uVar8 != 0) {
    uVar14 = 0;
    fVar17 = 0.0;
    do {
      lVar5 = DAT_03210d00;
      if (uVar14 == 0) {
        fVar18 = 0.0;
        if (bVar1 == 0) goto LAB_00b2df8c;
LAB_00b2df40:
        uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar9 == 0xffff) {
          puVar12 = (ushort *)0x0;
        }
        else {
          puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
          if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar9 = 0xffff;
          }
          else {
            uVar9 = *puVar12;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efdc08(puVar12);
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_00efcb24(puVar12,FUN_0091aa80);
        if (uVar14 == 0) {
          local_a0 = 0;
          FUN_00efdc50(puVar12,&local_a0);
          uVar15 = 0;
        }
        else {
          local_a0 = (ulong)(uint)fVar18 << 0x20;
          FUN_00efdc50(puVar12,&local_a0);
          uVar15 = (ulong)(uint)fVar4;
        }
        FUN_00efcac4(uVar15,puVar12);
        fVar18 = fVar16;
        if ((char)param_1[0xb2] != '\0') {
          fVar18 = 1.0;
        }
        uVar15 = (ulong)(uint)fVar4;
        uVar6 = FUN_00efee28(fVar18,0);
        lVar5 = DAT_03210d00;
        uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar9 == 0xffff) {
          puVar11 = (ushort *)0x0;
        }
        else {
          puVar11 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
          if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar9 = 0xffff;
          }
          else {
            uVar9 = *puVar11;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efcd98(puVar11);
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_00efcea4(puVar11,puVar12,uVar6,0);
        lVar5 = DAT_03210d00;
        uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar9 == 0xffff) {
          puVar12 = (ushort *)0x0;
        }
        else {
          puVar12 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
          if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar9 = 0xffff;
          }
          else {
            uVar9 = *puVar12;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efc9c0(puVar12);
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        FUN_00efca10(puVar12,(char)param_1[0xb2]);
        lVar5 = DAT_03210d00;
        uVar9 = *(ushort *)(DAT_03210d00 + 0x20010);
        if ((ulong)uVar9 == 0xffff) {
          puVar13 = (ushort *)0x0;
        }
        else {
          puVar13 = (ushort *)(DAT_03210d00 + (ulong)uVar9 * 0x40 + 0x10);
          if (uVar9 == *(ushort *)(DAT_03210d00 + 0x20012)) {
            uVar9 = 0xffff;
          }
          else {
            uVar9 = *puVar13;
          }
          *(ushort *)(DAT_03210d00 + 0x20010) = uVar9;
          *(int *)(lVar5 + 0x20014) = *(int *)(lVar5 + 0x20014) + 1;
          FUN_00efd208(puVar13);
          *(int *)(lVar5 + 0x20020) = *(int *)(lVar5 + 0x20020) + 1;
        }
        puVar7 = puVar11;
        if ((char)param_1[0xb2] != '\0') {
          puVar7 = puVar12;
          puVar12 = puVar11;
        }
        FUN_00efd2dc(puVar13,puVar7,puVar12,0);
        FUN_00f022a0(*(undefined8 *)(param_1[0xaf] + uVar14 * 8),puVar13);
      }
      else {
        fVar18 = fVar16;
        if ((char)param_1[0xb2] != '\0') {
          fVar18 = fVar17;
        }
        if (bVar1 != 0) goto LAB_00b2df40;
LAB_00b2df8c:
        bVar2 = *(byte *)(param_1 + 0xb2);
        lVar5 = *(long *)(param_1[0xaf] + uVar14 * 8);
        puVar10 = (uint *)(lVar5 + 0x84);
        uVar8 = *puVar10;
        if ((uVar8 >> 7 & 0xff) != (-(bVar2 & 1) & 0xff)) {
          *(uint *)(lVar5 + 0x84) = uVar8 & 0xffff8000 | uVar8 & 0x7f | (-(bVar2 & 1) & 0xff) << 7;
          FUN_0091ada4();
          bVar2 = *(byte *)(param_1 + 0xb2);
          puVar10 = (uint *)(*(long *)(param_1[0xaf] + uVar14 * 8) + 0x84);
          uVar8 = *puVar10;
        }
        *puVar10 = uVar8 & 0xfffffffb | (bVar2 & 0x3f) << 2;
        lVar5 = *(long *)(param_1[0xaf] + uVar14 * 8);
        if ((*(float *)(lVar5 + 0x40) != 0.0) || (*(float *)(lVar5 + 0x44) != fVar18)) {
          *(undefined4 *)(lVar5 + 0x40) = 0;
          *(float *)(lVar5 + 0x44) = fVar18;
          FUN_0091ada4();
        }
      }
      (**(code **)(**(long **)(param_1[0xaf] + uVar14 * 8) + 0x48))();
      uVar14 = uVar14 + 1;
      fVar17 = fVar17 + (float)uVar15;
    } while (uVar14 < *(uint *)(param_1 + 0xae));
  }
  if (*(long *)(lVar3 + 0x28) == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

