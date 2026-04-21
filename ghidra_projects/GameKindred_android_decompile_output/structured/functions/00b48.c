// functions/00b48 — 14 functions
#include "libGameKindred.h"




void FUN_00b48138(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  undefined8 uVar7;
  
  iVar2 = *(int *)(param_1 + 0x1384);
  lVar4 = param_1 + 0x178;
  lVar5 = -9;
  do {
    fVar6 = (float)((int)lVar5 + iVar2 + 10);
    if ((float)param_2 == fVar6) {
      if ((~*(uint *)(lVar4 + 0x84) & 0x7f80) != 0) {
        *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) | 0x7f80;
        FUN_0091ada4(lVar4);
      }
      if ((*(float *)(lVar4 + 0x48) != 0.7) || (*(float *)(lVar4 + 0x4c) != 0.7)) {
        *(undefined8 *)(lVar4 + 0x48) = 0x3f3333333f333333;
LAB_00b4823c:
        FUN_0091ada4(lVar4);
      }
    }
    else {
      uVar3 = 0x66;
      if ((float)param_2 < fVar6) {
        uVar3 = 0x26;
      }
      if ((*(uint *)(lVar4 + 0x84) >> 7 & 0xff) != uVar3) {
        *(uint *)(lVar4 + 0x84) = *(uint *)(lVar4 + 0x84) & 0xffff807f | uVar3 << 7;
        FUN_0091ada4(lVar4);
      }
      if ((*(float *)(lVar4 + 0x48) != 0.6) || (*(float *)(lVar4 + 0x4c) != 0.6)) {
        *(undefined8 *)(lVar4 + 0x48) = 0x3f19999a3f19999a;
        goto LAB_00b4823c;
      }
    }
    iVar2 = *(int *)(param_1 + 0x1384);
    lVar5 = lVar5 + 1;
    lVar4 = lVar4 + 0x130;
    if (lVar5 == 0) {
      uVar1 = *(uint *)(param_1 + 0xcac);
      uVar3 = 0x26;
      if (iVar2 <= param_2) {
        uVar3 = 0xff;
      }
      if ((uVar1 >> 7 & 0xff) != uVar3) {
        *(uint *)(param_1 + 0xcac) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar3 << 7;
        FUN_0091ada4(param_1 + 0xc28);
        iVar2 = *(int *)(param_1 + 0x1384);
      }
      if (param_2 < iVar2) {
        uVar3 = *(uint *)(param_1 + 0xddc);
        if ((uVar3 & 0x7f80) != 0x1300) {
          *(uint *)(param_1 + 0xddc) = uVar3 & 0xffff8000 | uVar3 & 0x7f | 0x1300;
          FUN_0091ada4(param_1 + 0xd58);
        }
        if ((*(float *)(param_1 + 0xda0) == 0.75) && (*(float *)(param_1 + 0xda4) == 0.75)) {
          return;
        }
        uVar7 = NEON_fmov(0x3f400000,4);
        *(undefined8 *)(param_1 + 0xda0) = uVar7;
      }
      else {
        fVar6 = 1.0;
        if (iVar2 + 10 <= param_2) {
          fVar6 = 0.75;
        }
        if ((*(float *)(param_1 + 0xda0) != fVar6) || (*(float *)(param_1 + 0xda4) != fVar6)) {
          *(float *)(param_1 + 0xda0) = fVar6;
          *(float *)(param_1 + 0xda4) = fVar6;
          FUN_0091ada4(param_1 + 0xd58);
        }
        uVar1 = *(uint *)(param_1 + 0xddc);
        uVar3 = 0xff;
        if (iVar2 + 10 <= param_2) {
          uVar3 = 0x99;
        }
        if ((uVar1 >> 7 & 0xff) == uVar3) {
          return;
        }
        *(uint *)(param_1 + 0xddc) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar3 << 7;
      }
      FUN_0091ada4(param_1 + 0xd58);
      return;
    }
  } while( true );
}




void FUN_00b48394(float param_1,long param_2,long *param_3,uint param_4,uint param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  undefined8 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (param_4 < 0x65) {
    uVar4 = (ulong)(param_4 & 0xff) / 10;
    param_4 = param_4 + ((param_4 & 0xff) / 10) * -10;
    lVar3 = param_2 + uVar4 * 5000;
    plVar1 = (long *)(lVar3 + 0xcf0);
    if ((param_4 & 0xff) != 0) {
      plVar1 = (long *)(lVar3 + ((ulong)param_4 & 0xff) * 0x130 + 0x110);
    }
    fVar6 = *(float *)(plVar1 + 8);
    if ((param_5 & 1) == 0) {
      fVar5 = (float)(**(code **)(*plVar1 + 0x50))(plVar1);
      fVar6 = ((fVar6 - fVar5) - param_1) + -30.0;
      fVar5 = *(float *)(param_2 + uVar4 * 5000 + 0x10c) + *(float *)((long)plVar1 + 0x44);
      if ((*(float *)(param_3 + 8) != fVar6) || (*(float *)((long)param_3 + 0x44) != fVar5)) {
        *(float *)(param_3 + 8) = fVar6;
        *(float *)((long)param_3 + 0x44) = fVar5;
        FUN_0091ada4(param_3);
      }
      local_60 = 0x3f0000003f800000;
    }
    else {
      param_1 = fVar6 + 20.0 + param_1;
      fVar6 = *(float *)((long)plVar1 + 0x44) + *(float *)(param_2 + uVar4 * 5000 + 0x10c);
      if ((*(float *)(param_3 + 8) != param_1) || (*(float *)((long)param_3 + 0x44) != fVar6)) {
        *(float *)(param_3 + 8) = param_1;
        *(float *)((long)param_3 + 0x44) = fVar6;
        FUN_0091ada4(param_3);
      }
      local_60 = 0x3f00000000000000;
    }
    (**(code **)(*param_3 + 0x28))(param_3,&local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b48510(uint *param_1,undefined8 *param_2)

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
    FUN_00b48d3c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00b48598(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3148) = param_2 & 1;
  FUN_00b48b44();
  return;
}




void FUN_00b485a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00b47f30(param_1,param_2,param_5);
  return;
}




void FUN_00b485b0(long param_1,int param_2,int param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong local_70;
  void *local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70510(&local_48);
  if (param_2 < 1) {
    *(uint *)(param_1 + 0xe94) = *(uint *)(param_1 + 0xe94) & 0xfffffffb;
    puVar2 = &DAT_03210450;
  }
  else {
    *(uint *)(param_1 + 0xe94) = *(uint *)(param_1 + 0xe94) | 4;
    FUN_00e705c8(&local_70,&DAT_01b9f8c3);
    FUN_00910394(&local_48,&local_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_70 = 0;
      local_68 = (void *)0x0;
    }
    FUN_00cb418c(&local_70,param_2);
    FUN_00e70570(&local_58,&local_70);
    FUN_00e70c34(&local_48,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    puVar2 = &local_48;
  }
  FUN_00f0d75c(param_1 + 0xf00,puVar2);
  if (param_3 == 0) {
    *(uint *)(param_1 + 0x10b4) = *(uint *)(param_1 + 0x10b4) & 0xfffffffb;
    puVar2 = &DAT_03210450;
  }
  else {
    *(uint *)(param_1 + 0x10b4) = *(uint *)(param_1 + 0x10b4) | 4;
    FUN_00e705c8(&local_70,&DAT_01b9f8c3);
    FUN_00910394(&local_48,&local_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
      local_70 = 0;
      local_68 = (void *)0x0;
    }
    FUN_00cb418c(&local_70,param_3);
    FUN_00e70570(&local_58,&local_70);
    FUN_00e70c34(&local_48,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if ((local_70 & 1) != 0) {
      operator_delete(local_60);
    }
    puVar2 = &local_48;
  }
  FUN_00f0d75c(param_1 + 0x1120,puVar2);
  FUN_00b47838(*(undefined4 *)(param_1 + 0x1380),param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4877c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454("http://www.vainglorygame.com/news/what-is-a-season/");
    return;
  }
  return;
}




void FUN_00b487a4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  
  FUN_00f017e8();
  plVar10 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027e1b80;
  FUN_00f0e4a8(plVar10);
  lVar9 = 0x178;
  do {
    FUN_00f0d160((long)param_1 + lVar9);
    lVar9 = lVar9 + 0x130;
  } while (lVar9 != 0xc28);
  plVar1 = param_1 + 0x185;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x1ab;
  FUN_00f13ca4(plVar2);
  plVar3 = param_1 + 0x1c2;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x1e0;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x206;
  FUN_00f0e4a8(plVar5);
  plVar6 = param_1 + 0x224;
  FUN_00f0d160(plVar6);
  plVar7 = param_1 + 0x24a;
  FUN_00f0d160(plVar7);
  *(undefined4 *)((long)param_1 + 0x1384) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar10,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar6,1);
  FUN_00f023ec(plVar2,plVar7,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  lVar9 = 0x178;
  do {
    (**(code **)(*param_1 + 0x78))(param_1,(long)param_1 + lVar9,1);
    lVar9 = lVar9 + 0x130;
  } while (lVar9 != 0xc28);
  FUN_00f0e548(plVar10,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"glory_icon_small");
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00f0e548(plVar5,PTR_s_build___MenuPartsCommon_tga_02be3530,"ice_icon_small");
  FUN_00f0d92c(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88,&DAT_01bee7fa);
  FUN_00f0d92c(plVar7,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
  uVar8 = FUN_00e6ce7c("MENU_GUILD_SEASON_REWARDS_EXPLANATION_TEXT",0);
  FUN_00f0d75c(plVar7,uVar8);
  if ((*(float *)(param_1 + 0x253) != 0.6) || (*(float *)((long)param_1 + 0x129c) != 0.6)) {
    param_1[0x253] = 0x3f19999a3f19999a;
    FUN_0091ada4(plVar7);
  }
  lVar9 = 0x1fc;
  do {
    *(uint *)((long)param_1 + lVar9) = *(uint *)((long)param_1 + lVar9) & 0xfffffffb;
    lVar9 = lVar9 + 0x130;
  } while (lVar9 != 0xcac);
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bee7fa);
  return;
}




void FUN_00b48a38(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  FUN_00f13ca4();
  plVar1 = param_1 + 0x17;
  *param_1 = (long)&PTR_FUN_027e1c80;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x35;
  FUN_00ac5ab8(plVar2,0);
  FUN_00b2624c(param_1 + 0x1b6,0);
  FUN_00e70510(param_1 + 0x627);
  *(undefined1 *)(param_1 + 0x629) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00ac5da8(plVar2,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  FUN_00ac6004(0x41200000,0x40800000,plVar2);
  FUN_00f0e548(plVar1,PTR_s_build___MenuPartsCommon_tga_02be3530,"arrow_right");
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfe | *(byte *)(param_1 + 0x629);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  FUN_00b48b44(param_1);
  return;
}




void FUN_00b48b44(long *param_1)

{
  long *plVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined8 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  plVar1 = param_1 + 0x17;
  *(byte *)(param_1 + 0x32) = *(byte *)(param_1 + 0x32) & 0xfe | *(byte *)(param_1 + 0x629);
  fVar5 = (float)FUN_00f0eac0(plVar1);
  if ((*(float *)(param_1 + 0x1f) != fVar5 * 0.5) || (*(float *)((long)param_1 + 0xfc) != 0.0)) {
    *(float *)(param_1 + 0x1f) = fVar5 * 0.5;
    *(undefined4 *)((long)param_1 + 0xfc) = 0;
    FUN_0091ada4(plVar1);
  }
  local_60 = 0x3f0000003f000000;
  (**(code **)(param_1[0x17] + 0x28))(plVar1,&local_60);
  bVar3 = *(byte *)(param_1 + 0x629);
  fVar9 = *(float *)(param_1 + 0x1f);
  plVar2 = param_1 + 0x35;
  fVar5 = (float)FUN_00f0eac0(plVar1);
  if (bVar3 == 0) {
    fVar6 = (float)FUN_00f01fcc(plVar2,0,0,1,1);
    fVar8 = -5.0;
    fVar5 = (fVar9 - fVar5 * 0.5) + fVar6 * -0.5 + -5.0;
    if (*(float *)(param_1 + 0x3d) == fVar5) goto LAB_00b48c78;
  }
  else {
    fVar6 = (float)FUN_00f01fcc(plVar2,0,0,1,1);
    fVar8 = *(float *)(param_1 + 0x3d);
    fVar5 = fVar9 + fVar5 * 0.5 + fVar6 * 0.5 + 5.0;
    if (fVar8 == fVar5) {
LAB_00b48c78:
      fVar8 = *(float *)((long)param_1 + 0x1ec);
      if (fVar8 == 0.0) goto LAB_00b48c94;
    }
  }
  *(float *)(param_1 + 0x3d) = fVar5;
  *(undefined4 *)((long)param_1 + 0x1ec) = 0;
  FUN_0091ada4(plVar2);
LAB_00b48c94:
  uVar7 = (**(code **)(*param_1 + 0x60))(param_1,0,0,1,1);
  local_60 = CONCAT44(fVar8,uVar7);
  FUN_00f13f18(param_1,&local_60);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b48cf4(void *param_1)

{
  FUN_00b46330();
  operator_delete(param_1);
  return;
}




void FUN_00b48d18(void *param_1)

{
  FUN_00b46214();
  operator_delete(param_1);
  return;
}




void FUN_00b48d3c(uint *param_1,uint param_2)

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




void FUN_00b48dbc(long *param_1)

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
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  FUN_00a9f290();
  FUN_00948cd8(param_1 + 0x587);
  plVar2 = param_1 + 0x58a;
  *param_1 = (long)&PTR_FUN_027e1dc8;
  param_1[0x587] = (long)&PTR_FUN_027e1fd8;
  FUN_00f017e8(plVar2);
  plVar3 = param_1 + 0x59b;
  param_1[0x58a] = (long)&PTR_FUN_027c1f80;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x5b9;
  FUN_00f13ca4(plVar4);
  plVar5 = param_1 + 0x5d0;
  FUN_00ecfd6c(plVar5,0);
  plVar6 = param_1 + 0x67a;
  FUN_00b1f530(plVar6);
  plVar7 = param_1 + 0x7d4;
  FUN_00b3dba8(plVar7);
  plVar8 = param_1 + 0x725c;
  FUN_00b379ac(plVar8);
  FUN_00b45914(param_1 + 0x931e);
  plVar9 = param_1 + 0xb64e;
  FUN_00b712b8(plVar9);
  FUN_00b30820();
  memset(param_1 + 0xc9e2,0,0x68);
  plVar1 = param_1 + 0x2e;
  *(undefined2 *)(param_1 + 0xc9ef) = 1;
  *(undefined1 *)((long)param_1 + 0x64f7a) = 1;
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00ed026c(plVar5,plVar2,1);
  FUN_00f023ec(plVar2,plVar7,1);
  FUN_00f023ec(plVar2,plVar8,1);
  FUN_00f023ec(plVar2,param_1 + 0x931e,1);
  FUN_00f023ec(plVar2,plVar9,1);
  FUN_00f023ec(plVar2,plVar6,1);
  FUN_00f023ec(plVar1,param_1 + 0xba56,1);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar10 = *(uint *)((long)param_1 + 0x2d5c);
  if ((uVar10 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x2d5c) = uVar10 & 0xffff8000 | uVar10 & 0x7f | 0x2600;
    FUN_0091ada4(plVar3);
  }
  FUN_00ed04d8(plVar5,0,1);
  param_1[0x677] = (long)plVar7;
  param_1[0x678] = (long)plVar8;
  param_1[0x679] = (long)plVar9;
  local_a8 = 0;
  uStack_a0 = 0;
  uVar12 = FUN_00e6ce7c("MENU_PROFILE_TAB_OVERVIEW",0);
  FUN_0090ea30(&local_a8,uVar12);
  uVar12 = FUN_00e6ce7c("MENU_GUILD_TAB_MEMBERS",0);
  FUN_0090ea30(&local_a8,uVar12);
  uVar12 = FUN_00e6ce7c("MENU_GUILD_TAB_TROPHIES",0);
  FUN_0090ea30(&local_a8,uVar12);
  FUN_00b1fc3c(0x42800000,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,plVar6,&local_a8);
  FUN_00b208e0(0x3f4ccccd,plVar6);
  local_70 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
  local_98 = FUN_00b493f0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x67b,&local_98);
  FUN_00b20988(plVar6,0,"GUILD.CHESTS.*");
  FUN_00f01a4c(param_1 + 0x62,1);
  FUN_00f01a4c(param_1 + 0x567,1);
  FUN_00b89d24(0,plVar7,1,4,0);
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,plVar2,0,1);
  local_70 = DAT_03210c64;
  local_98 = FUN_00b4941c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xba6e,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  local_98 = FUN_00b49444;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0xba57,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_MOTTO");
  plVar1 = param_1 + 0x7d5;
  local_98 = thunk_FUN_00b4a7dc;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_MESSAGE");
  local_98 = thunk_FUN_00b4a880;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_NAME");
  local_98 = thunk_FUN_00b4a984;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_TAG");
  local_98 = thunk_FUN_00b4aa14;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_EXPAND_GUILD_SETTINGS");
  local_98 = FUN_00b494b0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_GUILD_OVERVIEW_SIZE_CHANGE");
  local_98 = thunk_FUN_00b4aaa8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_NAME");
  plVar1 = param_1 + 0x725d;
  local_98 = thunk_FUN_00b4a984;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_TAG");
  local_98 = thunk_FUN_00b4aa14;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_70 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_TYPE");
  local_98 = FUN_00b494b8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00b4950c,0);
  FUN_0090eb54(&local_a8,1);
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

