// functions/00c55 — 29 functions
#include "libGameKindred.h"




void FUN_00c550fc(void *param_1)

{
  FUN_00c540d4();
  operator_delete(param_1);
  return;
}




void FUN_00c55120(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 local_50 [2];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  FUN_00f0ac5c();
  plVar1 = param_1 + 0x2c;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  *param_1 = (long)&PTR_FUN_027fddf0;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x4a;
  FUN_00f0f5dc(plVar2);
  plVar3 = param_1 + 0x6b;
  FUN_00f0d160(plVar3);
  FUN_00f1306c(param_1 + 0x91);
  *(undefined1 *)((long)param_1 + 0x5e6) = 0;
  *(undefined2 *)((long)param_1 + 0x5e4) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x91,1);
  FUN_00f0e548(plVar1,PTR_s_build___InventoryCommon_atlas_02be34e0,
               "inventory_hero_portrait_frame_standard");
  local_50[0] = 0xffb6acaa;
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Brandon_Regular_60_02be9c58,local_50);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c55264(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [32];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6a8a8(auStack_58,"portrait_%s",*(undefined8 *)(param_2 + 0x10));
  FUN_00f0e628(param_1 + 0x250);
  FUN_00a9bbc4(param_1 + 0x250,auStack_58);
  uVar2 = FUN_00e6ce7c(*(undefined8 *)(param_2 + 0x18),0);
  FUN_00f0d75c(param_1 + 0x358,uVar2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c552fc(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x5e0) = param_1;
  return;
}




void FUN_00c55304(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x5e0),0x43fa0000);
  lVar1 = param_1 + 0x160;
  local_88 = 0x43480000;
  local_84 = 0x439240f0;
  fVar12 = 46.253662;
  local_80 = local_84;
  uStack_7c = local_84;
  FUN_00f13f18(lVar1,&local_88);
  lVar2 = param_1 + 0x250;
  FUN_00f13f18(lVar2,&local_80);
  *(undefined8 *)(param_1 + 0x348) = 0x3e21ec5d3e21ec5d;
  *(undefined8 *)(param_1 + 0x340) = 0x3e21ec5d3e21ec5d;
  fVar11 = (float)FUN_00f080a0(lVar1,5,param_1,5);
  if (*(int *)(param_1 + 0x150) != 0) {
    uVar13 = 0x43cd0000;
    puVar9 = *(undefined8 **)(param_1 + 0x158);
    uVar10 = 0;
    uVar6 = 0;
    do {
      uVar7 = *puVar9;
      FUN_00c56490(0x43c30000,uVar7);
      FUN_00c56518(uVar7);
      if (puVar9 == *(undefined8 **)(param_1 + 0x158)) {
LAB_00c554b0:
        uVar10 = 1;
        uVar6 = uVar7;
      }
      else {
        if ((uint)(int)((fVar11 + -40.0 + -100.0 + 20.0) / 410.0) <= uVar10) {
          FUN_00f07b18(0x41a00000,uVar7,0,uVar6,2);
          FUN_00f07b18(0,uVar7,3,uVar6,3);
          goto LAB_00c554b0;
        }
        uVar8 = puVar9[-1];
        uVar10 = uVar10 + 1;
        FUN_00f07b18(0x41a00000,uVar7,3,uVar8,1);
        FUN_00f07b18(0,uVar7,0,uVar8,0);
      }
      fVar12 = (float)uVar13;
      puVar9 = puVar9 + 1;
    } while (puVar9 != (undefined8 *)
                       (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
  }
  lVar3 = param_1 + 0x488;
  FUN_00f13238(lVar3);
  uVar14 = *(undefined4 *)(param_1 + 0x5e0);
  FUN_00f13e54(lVar3);
  fVar11 = fVar12;
  FUN_00f0e700(lVar2);
  lVar4 = param_1 + 0x358;
  if (fVar12 <= fVar11) {
    fVar12 = fVar11;
  }
  fVar11 = fVar12 + 100.0;
  FUN_00f0d4e0(0x42c80000,fVar12,lVar4);
  FUN_00f13f08(uVar14,fVar12 + fVar11,param_1);
  FUN_00f07940(0x41200000,0x41200000,lVar4,0,param_1,0);
  FUN_00f07940(0,0x41a00000,lVar1,0,lVar4,3);
  FUN_00f07940(0,0,lVar2,8,lVar1,8);
  FUN_00f07b18(0x42200000,lVar3,3,lVar1,1);
  FUN_00f07b18(0,lVar3,0,lVar1,0);
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c555e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f133a4(param_1 + 0x488,param_2,1);
  local_40 = param_2;
  FUN_00c55650(param_1 + 0x150,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c55650(uint *param_1,undefined8 *param_2)

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
    FUN_00c55954(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c556d8(long param_1)

{
  *(undefined1 *)(param_1 + 0x5e4) = 1;
  return;
}




void FUN_00c556e4(long param_1)

{
  if ((*(char *)(param_1 + 0x5e6) != '\0') && (*(char *)(param_1 + 0x5e4) != '\0')) {
    FUN_00c5571c(param_1);
    *(undefined1 *)(param_1 + 0x5e6) = 0;
  }
  return;
}




void FUN_00c5571c(long param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  bVar1 = FUN_00f08470();
  bVar1 = bVar1 & 1;
  if (bVar1 != *(byte *)(param_1 + 0x5e5)) {
    if (bVar1 == 0) {
      if (*(int *)(param_1 + 0x150) != 0) {
        puVar3 = *(undefined8 **)(param_1 + 0x158);
        do {
          puVar2 = puVar3 + 1;
          FUN_00c56498(*puVar3);
          puVar3 = puVar2;
        } while (puVar2 != (undefined8 *)
                           (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
      }
    }
    else if (*(int *)(param_1 + 0x150) != 0) {
      puVar3 = *(undefined8 **)(param_1 + 0x158);
      do {
        puVar2 = puVar3 + 1;
        FUN_00c564d4(*puVar3);
        puVar3 = puVar2;
      } while (puVar2 != (undefined8 *)
                         (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
    }
    *(byte *)(param_1 + 0x5e5) = bVar1;
  }
  return;
}




void FUN_00c557ac(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x150) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x158);
    do {
      puVar2 = puVar1 + 1;
      FUN_00c56498(*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
  }
  return;
}




void FUN_00c557f0(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x150) != 0) {
    puVar1 = *(undefined8 **)(param_1 + 0x158);
    do {
      puVar2 = puVar1 + 1;
      FUN_00c564d4(*puVar1);
      puVar1 = puVar2;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0x158) + (ulong)*(uint *)(param_1 + 0x150) * 8));
  }
  return;
}




void FUN_00c55834(long param_1)

{
  FUN_00f02914();
  *(undefined1 *)(param_1 + 0x5e6) = 1;
  return;
}




void FUN_00c5585c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fddf0;
  param_1[0x91] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0xa8);
  FUN_00f13d08(param_1 + 0x91);
  FUN_00f0d3a4(param_1 + 0x6b);
  param_1[0x4a] = &PTR_FUN_028266f0;
  param_1[0x61] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 100);
  FUN_00f13d08(param_1 + 0x4a);
  param_1[0x2c] = &PTR_FUN_028266f0;
  param_1[0x43] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x46);
  FUN_00f13d08(param_1 + 0x2c);
  if ((void *)param_1[0x2b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x2b]);
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
  }
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c55930(void *param_1)

{
  FUN_00c5585c();
  operator_delete(param_1);
  return;
}




void FUN_00c55954(uint *param_1,uint param_2)

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




void FUN_00c559d4(undefined8 *param_1)

{
  FUN_00b89cd8();
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x447a0000;
  *param_1 = &PTR_FUN_027fdf40;
  *(undefined1 *)((long)param_1 + 0xe4) = 0;
  return;
}




void FUN_00c55a18(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xe4) = param_2 & 1;
  return;
}




void FUN_00c55a24(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xe0) = param_1;
  return;
}




void FUN_00c55a2c(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0xd8);
    do {
      plVar1 = (long *)*puVar2;
      FUN_00c552fc(*(undefined4 *)(param_1 + 0xe0),plVar1);
      (**(code **)(*plVar1 + 0x138))(plVar1);
      if (puVar2 == *(undefined8 **)(param_1 + 0xd8)) {
        FUN_00f07940(0,0,plVar1,0,param_1,0);
      }
      else {
        FUN_00f07b18(0,plVar1,0,puVar2[-1],2);
      }
      FUN_00c556d8(plVar1);
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined8 *)
                       (*(long *)(param_1 + 0xd8) + (ulong)*(uint *)(param_1 + 0xd0) * 8));
  }
  return;
}




void FUN_00c55ae0(long *param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x78))(param_1,param_2,1);
  local_40 = param_2;
  FUN_00c55b50(param_1 + 0x1a,&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c55b50(uint *param_1,undefined8 *param_2)

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
    FUN_00c55c98(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c55bd8(long param_1)

{
  if (*(long *)(param_1 + 0xd8) != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}




void FUN_00c55be8(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c55bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 200))(*(undefined8 **)(param_1 + 200),param_2 & 1);
  return;
}




void FUN_00c55bfc(long param_1,uint param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00c55c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 200) + 8))(*(long **)(param_1 + 200),param_2 & 1);
  return;
}




void FUN_00c55c10(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fdf40;
  if ((void *)param_1[0x1b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b]);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  FUN_00f13d08(param_1);
  return;
}




void FUN_00c55c50(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027fdf40;
  if ((void *)param_1[0x1b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1b]);
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
  }
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c55c98(uint *param_1,uint param_2)

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




void FUN_00c55d18(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar12 = tpidr_el0;
  local_68 = *(long *)(lVar12 + 0x28);
  FUN_00b08d84();
  plVar1 = param_1 + 0x4f;
  param_1[0x4e] = 0;
  *param_1 = (long)&PTR_FUN_027fe0a8;
  FUN_00f1306c(plVar1);
  plVar2 = param_1 + 0x7a;
  FUN_00f0ac5c(plVar2);
  plVar3 = param_1 + 0xa3;
  FUN_00f0e4a8(plVar3);
  FUN_00f0e4a8();
  plVar4 = param_1 + 0xdf;
  FUN_00f0e4a8(plVar4);
  plVar5 = param_1 + 0xfd;
  FUN_00f0e4a8();
  plVar6 = param_1 + 0x11b;
  FUN_00f017e8(plVar6);
  plVar7 = param_1 + 300;
  param_1[0x11b] = (long)&PTR_FUN_027c1f80;
  FUN_00f0d160(plVar7);
  plVar8 = param_1 + 0x152;
  FUN_00f1306c(plVar8);
  plVar9 = param_1 + 0x17d;
  FUN_00f0e4a8(plVar9);
  plVar10 = param_1 + 0x19b;
  FUN_00f0d160(plVar10);
  param_1[0x1c1] = 0;
  *(undefined2 *)(param_1 + 0x1c2) = 0;
  param_1[0x1c3] = 0;
  *(undefined4 *)(param_1 + 0x1c4) = 0x43b40000;
  *(undefined4 *)((long)param_1 + 0xe24) = 0xff000000;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f133a4(plVar1,plVar2,1);
  FUN_00f0ad88(plVar2,plVar3,1);
  FUN_00f0ad88(plVar2,param_1 + 0xc1,1);
  FUN_00f0ad88(plVar2,plVar4,1);
  FUN_00f0ad88(plVar2,plVar5,1);
  FUN_00f133a4(plVar1,plVar6,1);
  FUN_00f023ec(plVar6,plVar7,1);
  FUN_00f023ec(plVar6,plVar8,1);
  FUN_00f133a4(plVar8,plVar9,1);
  FUN_00f133a4(plVar8,plVar10,1);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e548(plVar4,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar4,&DAT_01bee7f6,2);
  uVar11 = *(uint *)((long)param_1 + 0x77c);
  if ((uVar11 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x77c) = uVar11 & 0xffff8000 | uVar11 & 0x7f | 0x4c80;
    FUN_0091ada4(plVar4);
  }
  FUN_00f0d378(plVar7,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  uVar13 = FUN_00e6ce7c("MENU_MARKET_CTA_OWNED",0);
  FUN_00f0d75c(plVar7,uVar13);
  FUN_00f0d378(plVar10,PTR_s_build___Fonts_Brandon_Regular_40_02be9c48);
  FUN_00f0d7fc(plVar10,&DAT_01bee7fa);
  FUN_00f0e540(plVar9,PTR_s_build___MenuPartsCommon_tga_02be3530);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"crafting_blueprint_corner");
  *(uint *)((long)param_1 + 0x86c) = *(uint *)((long)param_1 + 0x86c) & 0xfffffffb;
  FUN_00f13f08(0x431e0000,0x42e60000,plVar5);
  local_70 = DAT_03210c64;
  local_98 = FUN_00c56048;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  FUN_00b0914c(param_1,1);
  if (*(long *)(lVar12 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

