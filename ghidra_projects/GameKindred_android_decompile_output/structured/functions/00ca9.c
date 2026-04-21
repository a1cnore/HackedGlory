// functions/00ca9 — 18 functions
#include "libGameKindred.h"




void FUN_00ca9114(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_00ca9168(long param_1,long *param_2,uint *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  
  plVar1 = (long *)(param_1 + 8);
  if ((long *)*plVar1 == (long *)0x0) {
    *param_2 = (long)plVar1;
    return plVar1;
  }
  plVar2 = (long *)(param_1 + 8);
  plVar1 = (long *)*plVar1;
  do {
    while (plVar3 = plVar1, *param_3 < *(uint *)(plVar3 + 4)) {
      plVar2 = plVar3;
      plVar1 = (long *)*plVar3;
      if ((long *)*plVar3 == (long *)0x0) {
        *param_2 = (long)plVar3;
        return plVar3;
      }
    }
    if (*param_3 <= *(uint *)(plVar3 + 4)) break;
    plVar2 = plVar3 + 1;
    plVar1 = (long *)*plVar2;
  } while ((long *)*plVar2 != (long *)0x0);
  *param_2 = (long)plVar3;
  return plVar2;
}




long * FUN_00ca91d0(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




long * FUN_00ca9264(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_00ca92f8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *local_68;
  code *pcStack_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00f1306c();
  plVar1 = param_1 + 0x2b;
  *param_1 = (long)&PTR_FUN_028091a8;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x56;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x74;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x92;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0xb0;
  FUN_00f0d160(plVar5);
  pcStack_60 = thunk_FUN_00ca9488;
  local_68 = param_1;
  FUN_00f02e98(0x3e4ccccd,&local_68,0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f133a4(plVar1,plVar3,1);
  FUN_00f133a4(plVar1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_ping_3bar");
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_ping_2bar");
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"menu_ping_1bar");
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00ca9488(param_1);
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca9488(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 local_8c;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar5 = FUN_009439e0();
  if ((uVar5 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x334);
    uVar7 = *(uint *)(param_1 + 0x424) & 0xfffffffb;
    *(uint *)(param_1 + 0x334) = uVar2 & 0xfffffffb;
    *(uint *)(param_1 + 0x424) = uVar7;
    *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) & 0xfffffffb;
    *(uint *)(param_1 + 0x604) = *(uint *)(param_1 + 0x604) & 0xfffffffb;
    if ((uVar2 & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x334) = uVar2 & 0xffff807b | 0x3f80;
      FUN_0091ada4(param_1 + 0x2b0);
      uVar7 = *(uint *)(param_1 + 0x424);
    }
    if ((uVar7 & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x424) = uVar7 & 0xffff807f | 0x3f80;
      FUN_0091ada4(param_1 + 0x3a0);
    }
    if ((*(uint *)(param_1 + 0x514) & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) & 0xffff807f | 0x3f80;
      FUN_0091ada4(param_1 + 0x490);
    }
  }
  else {
    uVar9 = FUN_009439fc(0x41200000);
    fVar10 = (float)NEON_fminnm(uVar9,0x44fa0000);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    FUN_00e70510(&local_88);
    FUN_00e70e18(&local_88,"%d ms",(int)fVar10);
    lVar1 = param_1 + 0x580;
    FUN_00f0d75c(lVar1,&local_88);
    *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 4;
    *(uint *)(param_1 + 0x424) = *(uint *)(param_1 + 0x424) | 4;
    *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) | 4;
    *(uint *)(param_1 + 0x604) = *(uint *)(param_1 + 0x604) | 4;
    if (250.0 <= fVar10) {
      if (500.0 <= fVar10) {
        puVar6 = &DAT_01bee802;
        uVar7 = 1;
      }
      else {
        puVar6 = &DAT_01bee80e;
        uVar7 = 2;
      }
    }
    else {
      puVar6 = &DAT_01bee7fa;
      uVar7 = 3;
    }
    local_8c = *puVar6;
    if (2000.0 <= fVar10) {
      FUN_00f0d75c(lVar1,&DAT_03210450);
      uVar7 = 0;
      local_8c = 0xffffffff;
    }
    FUN_00f0e670(param_1 + 0x2b0,&DAT_01bee7fa,2);
    if ((*(uint *)(param_1 + 0x334) & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xffff807f | 0x3f80;
      FUN_0091ada4(param_1 + 0x2b0);
    }
    puVar6 = &DAT_01bee7fa;
    if (uVar7 < 2) {
      puVar6 = &local_8c;
    }
    uVar8 = 0x7f;
    uVar2 = uVar8;
    if (uVar7 < 2) {
      uVar2 = 0xe5;
    }
    FUN_00f0e670(param_1 + 0x3a0,puVar6,2);
    uVar3 = *(uint *)(param_1 + 0x424);
    if ((uVar3 >> 7 & 0xff) != uVar2) {
      *(uint *)(param_1 + 0x424) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar2 << 7;
      FUN_0091ada4(param_1 + 0x3a0);
    }
    puVar6 = &DAT_01bee7fa;
    if (uVar7 == 0) {
      uVar8 = 0xe5;
      puVar6 = &local_8c;
    }
    FUN_00f0e670(param_1 + 0x490,puVar6,2);
    uVar7 = *(uint *)(param_1 + 0x514);
    if ((uVar7 >> 7 & 0xff) != uVar8) {
      *(uint *)(param_1 + 0x514) = uVar7 & 0xffff8000 | uVar7 & 0x7f | uVar8 << 7;
      FUN_0091ada4(param_1 + 0x490);
    }
    FUN_00f0d7fc(lVar1,&local_8c);
    uVar7 = *(uint *)(param_1 + 0x604);
    if ((uVar7 >> 7 & 0xff) != uVar2) {
      *(uint *)(param_1 + 0x604) = uVar7 & 0xffff8000 | uVar7 & 0x7f | uVar2 << 7;
      FUN_0091ada4(lVar1);
    }
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ca97b0(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_028091a8;
  pcStack_50 = thunk_FUN_00ca9488;
  local_58 = param_1;
  FUN_00f03390(&local_58);
  FUN_00f0d3a4(param_1 + 0xb0);
  param_1[0x92] = &PTR_FUN_028266f0;
  param_1[0xa9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xac);
  FUN_00f13d08(param_1 + 0x92);
  param_1[0x74] = &PTR_FUN_028266f0;
  param_1[0x8b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x8e);
  FUN_00f13d08(param_1 + 0x74);
  param_1[0x56] = &PTR_FUN_028266f0;
  param_1[0x6d] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x70);
  FUN_00f13d08(param_1 + 0x56);
  param_1[0x2b] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x42);
  FUN_00f13d08(param_1 + 0x2b);
  *param_1 = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca98cc(void *param_1)

{
  FUN_00ca97b0();
  operator_delete(param_1);
  return;
}




void FUN_00ca98f0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_00f07940(0,0x41700000,param_1 + 0x3a0,4,param_1 + 0x2b0,4);
  FUN_00f07940(0,0x41800000,param_1 + 0x490,4,param_1 + 0x3a0,4);
  lVar1 = param_1 + 0x158;
  FUN_00f13238(lVar1);
  if (((DAT_0313cdd8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0313cdd8), iVar4 != 0)) {
    uVar5 = FUN_00f08be8(param_1 + 0x650);
    thunk_FUN_00e7051c(&DAT_0313cdc8,uVar5);
    __cxa_atexit(FUN_0090e338,&DAT_0313cdc8,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_0313cdd8);
  }
  lVar2 = param_1 + 0x580;
  FUN_00e705c8(&local_48,"9999 ms");
  FUN_00f0d75c(lVar2,&local_48);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  FUN_00f07b18(0x41200000,lVar2,3,lVar1,1);
  FUN_00f07b18(0,lVar2,5,lVar1,5);
  FUN_00f13238(param_1);
  FUN_00f0d75c(lVar2,&DAT_0313cdc8);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00ca9488(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  void *pvStack_80;
  long lStack_78;
  
  lVar4 = tpidr_el0;
  lStack_78 = *(long *)(lVar4 + 0x28);
  uVar5 = FUN_009439e0();
  if ((uVar5 & 1) == 0) {
    uVar2 = *(uint *)(param_1 + 0x334);
    uVar7 = *(uint *)(param_1 + 0x424) & 0xfffffffb;
    *(uint *)(param_1 + 0x334) = uVar2 & 0xfffffffb;
    *(uint *)(param_1 + 0x424) = uVar7;
    *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) & 0xfffffffb;
    *(uint *)(param_1 + 0x604) = *(uint *)(param_1 + 0x604) & 0xfffffffb;
    if ((uVar2 & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x334) = uVar2 & 0xffff807b | 0x3f80;
      FUN_0091ada4(param_1 + 0x2b0);
      uVar7 = *(uint *)(param_1 + 0x424);
    }
    if ((uVar7 & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x424) = uVar7 & 0xffff807f | 0x3f80;
      FUN_0091ada4(param_1 + 0x3a0);
    }
    if ((*(uint *)(param_1 + 0x514) & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) & 0xffff807f | 0x3f80;
      FUN_0091ada4(param_1 + 0x490);
    }
  }
  else {
    uVar9 = FUN_009439fc(0x41200000);
    fVar10 = (float)NEON_fminnm(uVar9,0x44fa0000);
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
    FUN_00e70510(&uStack_88);
    FUN_00e70e18(&uStack_88,"%d ms",(int)fVar10);
    lVar1 = param_1 + 0x580;
    FUN_00f0d75c(lVar1,&uStack_88);
    *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) | 4;
    *(uint *)(param_1 + 0x424) = *(uint *)(param_1 + 0x424) | 4;
    *(uint *)(param_1 + 0x514) = *(uint *)(param_1 + 0x514) | 4;
    *(uint *)(param_1 + 0x604) = *(uint *)(param_1 + 0x604) | 4;
    if (250.0 <= fVar10) {
      if (500.0 <= fVar10) {
        puVar6 = &DAT_01bee802;
        uVar7 = 1;
      }
      else {
        puVar6 = &DAT_01bee80e;
        uVar7 = 2;
      }
    }
    else {
      puVar6 = &DAT_01bee7fa;
      uVar7 = 3;
    }
    uStack_8c = *puVar6;
    if (2000.0 <= fVar10) {
      FUN_00f0d75c(lVar1,&DAT_03210450);
      uVar7 = 0;
      uStack_8c = 0xffffffff;
    }
    FUN_00f0e670(param_1 + 0x2b0,&DAT_01bee7fa,2);
    if ((*(uint *)(param_1 + 0x334) & 0x7f80) != 0x3f80) {
      *(uint *)(param_1 + 0x334) = *(uint *)(param_1 + 0x334) & 0xffff807f | 0x3f80;
      FUN_0091ada4(param_1 + 0x2b0);
    }
    puVar6 = &DAT_01bee7fa;
    if (uVar7 < 2) {
      puVar6 = &uStack_8c;
    }
    uVar8 = 0x7f;
    uVar2 = uVar8;
    if (uVar7 < 2) {
      uVar2 = 0xe5;
    }
    FUN_00f0e670(param_1 + 0x3a0,puVar6,2);
    uVar3 = *(uint *)(param_1 + 0x424);
    if ((uVar3 >> 7 & 0xff) != uVar2) {
      *(uint *)(param_1 + 0x424) = uVar3 & 0xffff8000 | uVar3 & 0x7f | uVar2 << 7;
      FUN_0091ada4(param_1 + 0x3a0);
    }
    puVar6 = &DAT_01bee7fa;
    if (uVar7 == 0) {
      uVar8 = 0xe5;
      puVar6 = &uStack_8c;
    }
    FUN_00f0e670(param_1 + 0x490,puVar6,2);
    uVar7 = *(uint *)(param_1 + 0x514);
    if ((uVar7 >> 7 & 0xff) != uVar8) {
      *(uint *)(param_1 + 0x514) = uVar7 & 0xffff8000 | uVar7 & 0x7f | uVar8 << 7;
      FUN_0091ada4(param_1 + 0x490);
    }
    FUN_00f0d7fc(lVar1,&uStack_8c);
    uVar7 = *(uint *)(param_1 + 0x604);
    if ((uVar7 >> 7 & 0xff) != uVar2) {
      *(uint *)(param_1 + 0x604) = uVar7 & 0xffff8000 | uVar7 & 0x7f | uVar2 << 7;
      FUN_0091ada4(lVar1);
    }
    if (pvStack_80 != (void *)0x0) {
      operator_delete__(pvStack_80);
      uStack_88 = 0;
      pvStack_80 = (void *)0x0;
    }
  }
  if (*(long *)(lVar4 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00ca9a64(long *param_1)

{
  long lVar1;
  void *pvVar2;
  undefined **local_2a0 [5];
  undefined1 auStack_278 [16];
  undefined1 auStack_268 [16];
  undefined8 local_258;
  void *local_250;
  undefined1 auStack_248 [40];
  undefined1 auStack_220 [296];
  undefined8 local_f8;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00f13ca4();
  *param_1 = (long)&PTR_FUN_028092f8;
  pvVar2 = operator_new(0x48);
  FUN_00bf7a10();
  param_1[0x17] = (long)pvVar2;
  pvVar2 = operator_new(0x40);
  FUN_00bf7578();
  param_1[0x18] = (long)pvVar2;
  pvVar2 = operator_new(0x28);
  FUN_00bf7da8();
  param_1[0x19] = (long)pvVar2;
  pvVar2 = operator_new(0x30);
  FUN_00bf8188();
  param_1[0x1a] = (long)pvVar2;
  pvVar2 = operator_new(0x28);
  FUN_00bf892c();
  param_1[0x1b] = (long)pvVar2;
  param_1[0x1c] = *(long *)(param_1[0x17] + 8);
  param_1[0x1d] = *(long *)(param_1[0x18] + 8);
  param_1[0x1e] = *(long *)(param_1[0x19] + 8);
  param_1[0x1f] = *(long *)(param_1[0x1a] + 8);
  param_1[0x20] = *(long *)((long)pvVar2 + 8);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x17] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x18] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x19] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x1a] + 8),1);
  (**(code **)(*param_1 + 0x78))(param_1,*(undefined8 *)(param_1[0x1b] + 8),1);
  FUN_00e84dac(local_2a0);
  local_2a0[0] = &PTR_FUN_027bb448;
  memset(auStack_278,0,0x58);
  FUN_00964684(auStack_220);
  local_f8 = 0xffffffffffffffff;
  (**(code **)(*(long *)param_1[0x18] + 0x18))((long *)param_1[0x18],local_2a0);
  local_2a0[0] = &PTR_FUN_027bb448;
  FUN_009515b0(auStack_220);
  FUN_00951478(auStack_248,1);
  if (local_250 != (void *)0x0) {
    operator_delete__(local_250);
    local_258 = 0;
    local_250 = (void *)0x0;
  }
  FUN_0095132c(auStack_268,1);
  FUN_009512b0(auStack_278,1);
  FUN_00e84dd8(local_2a0);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ca9c90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028092f8;
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 0x40))();
  }
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x10))();
  }
  if ((long *)param_1[0x19] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x19] + 0x10))();
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 0x10))();
  }
  if ((long *)param_1[0x1b] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1b] + 0x10))();
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00ca9d24(void *param_1)

{
  FUN_00ca9c90();
  operator_delete(param_1);
  return;
}




void FUN_00ca9d48(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  FUN_00f13db4();
  FUN_00f13f08(0x44750000,0x430c0000,*(undefined8 *)(param_1 + 0xe0));
  FUN_00f13f08(0x44750000,0x435c0000,*(undefined8 *)(param_1 + 0xe8));
  plVar2 = *(long **)(param_1 + 0xf0);
  iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
  FUN_00f13f08(0x44750000,(float)iVar1,plVar2);
  plVar2 = *(long **)(param_1 + 0xf8);
  iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
  FUN_00f13f08(0x44750000,(float)iVar1,plVar2);
  plVar2 = *(long **)(param_1 + 0x100);
  iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
  FUN_00f13f08(0x44750000,(float)iVar1,plVar2);
  lVar5 = 0;
  iVar1 = 0;
  *(uint *)(*(long *)(param_1 + 0xf0) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xf0) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0xf8) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0xf8) + 0x84) & 0xfffffffb;
  *(uint *)(*(long *)(param_1 + 0x100) + 0x84) =
       *(uint *)(*(long *)(param_1 + 0x100) + 0x84) & 0xfffffffb;
  do {
    lVar3 = ((undefined8 *)(param_1 + 0xe8))[lVar5];
    if ((*(byte *)(lVar3 + 0x84) >> 2 & 1) != 0) {
      uVar4 = *(undefined8 *)(param_1 + (long)iVar1 * 8 + 0xe0);
      FUN_00f07b18(0,lVar3,0,uVar4,2);
      FUN_00f07b18(0,lVar3,1,uVar4,1);
      iVar1 = (int)lVar5 + 1;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  return;
}




ulong FUN_00ca9eb8(long param_1)

{
  int iVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  plVar2 = *(long **)(param_1 + 0xf0);
  if ((*(byte *)((long)plVar2 + 0x84) >> 2 & 1) == 0) {
    fVar4 = 360.0;
  }
  else {
    iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
    fVar4 = (float)iVar1 + 360.0;
  }
  plVar2 = *(long **)(param_1 + 0xf8);
  fVar5 = 0.0;
  fVar3 = 0.0;
  if ((*(byte *)((long)plVar2 + 0x84) >> 2 & 1) != 0) {
    iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
    fVar3 = (float)iVar1;
  }
  plVar2 = *(long **)(param_1 + 0x100);
  if ((*(byte *)((long)plVar2 + 0x84) >> 2 & 1) != 0) {
    iVar1 = (**(code **)(*plVar2 + 0x100))(plVar2,0x3d4);
    fVar5 = (float)iVar1;
  }
  return (ulong)(uint)(int)(fVar4 + fVar3 + fVar5) << 0x20 | 0x3d4;
}




undefined8 FUN_00ca9f6c(long param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)(param_1 + 0x18);
  do {
    lVar1 = *plVar2;
    plVar2 = (long *)(lVar1 + 0x20);
  } while (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_0313cde0);
  lVar1 = *(long *)(lVar1 + 0x18);
  while( true ) {
    if (lVar1 == 0) {
      return 0;
    }
    if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0313cdf0) break;
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  return 1;
}




void FUN_00ca9fc8(undefined8 param_1,undefined8 param_2)

{
  FUN_00ca9fd4(param_1,param_2,0,0);
  return;
}




long FUN_00ca9fd4(long param_1,long *param_2,long param_3,long param_4)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  undefined4 local_50 [2];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (*(char *)((long)param_2 + 0x65) == '\0') {
    lVar7 = FUN_01988738(DAT_02e3ef98,0);
LAB_00caa060:
    if (lVar7 != 0) {
      local_50[0] = (undefined4)param_2[4];
      if ((long *)param_2[3] != (long *)0x0) {
        local_50[0] = (**(code **)(*(long *)param_2[3] + 8))();
      }
      FUN_009d3364(lVar7,local_50);
      FUN_009d33e4(lVar7,(int)param_2[5]);
      FUN_009d3440(*(undefined4 *)((long)param_2 + 0x24),lVar7);
      FUN_009d3464(lVar7,(char)param_2[0xd]);
      uVar6 = *(undefined4 *)(lVar7 + 0x10c);
      bVar1 = *(byte *)(lVar7 + 0x110);
      bVar4 = (byte)(((ulong)(*(uint *)((long)param_2 + 0x5c) & 3) << 0x23) >> 0x20);
      *(undefined4 *)(lVar7 + 0x10c) = uVar6;
      *(byte *)(lVar7 + 0x110) = bVar1 & 0xe0 | bVar1 & 7 | bVar4;
      bVar2 = *(byte *)((long)param_2 + 0x66);
      *(undefined4 *)(lVar7 + 0x10c) = uVar6;
      *(byte *)(lVar7 + 0x110) = bVar1 & 0xe0 | bVar1 & 6 | bVar4 | bVar2;
      FUN_009d3e98(lVar7,(int)param_2[0xc]);
      if (*(char *)((long)param_2 + 0x65) != '\0') {
        FUN_009d3f48(lVar7,param_1 + 0x2fc);
      }
      if (param_3 == 0) {
        bVar5 = *(char *)((long)param_2 + 100) != '\0';
        if (param_4 == 0) {
          FUN_009d3654(lVar7,param_1,bVar5);
        }
        else {
          FUN_009d3840(lVar7,param_1,param_4,bVar5);
        }
      }
      else {
        FUN_009d373c(lVar7,param_1,param_3,*(undefined1 *)((long)param_2 + 100));
      }
      if (*(char *)((long)param_2 + 0x67) != '\0') {
        FUN_009d3950(*(undefined4 *)((long)param_2 + 0x2c),lVar7);
      }
      lVar8 = *param_2;
      if (lVar8 == 0) {
        if (param_2[2] != 0) {
          FUN_009d3db8(lVar7);
        }
      }
      else if (param_2[1] == 0) {
        if (((int)param_2[6] == -0x7ee3623b) || ((int)param_2[6] == 0)) {
          FUN_009d3b70(lVar7,lVar8);
        }
        else {
          FUN_009d3d8c(lVar7,lVar8);
        }
      }
      else {
        uVar6 = FUN_01995208();
        FUN_009d3d6c(lVar7,lVar8,uVar6);
      }
      if ((*(float *)(param_2 + 10) != 0.0) || (*(float *)((long)param_2 + 0x54) != 0.0)) {
        FUN_009d3e40(*(float *)(param_2 + 10),*(float *)((long)param_2 + 0x54),(int)param_2[0xb],
                     lVar7,(long)param_2 + 0x44);
      }
      FUN_009d3ebc(lVar7,(long)param_2 + 0x34);
      FUN_009d3ec8((int)param_2[7],lVar7);
      FUN_009d3ed0(lVar7,(long)param_2 + 0x3c);
      FUN_009d33ec(lVar7);
    }
  }
  else {
    for (lVar7 = *(long *)(param_1 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
      if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_0312e4a8) {
        lVar7 = FUN_01985d44(lVar7,DAT_02e3ef98);
        goto LAB_00caa060;
      }
    }
    lVar7 = 0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

