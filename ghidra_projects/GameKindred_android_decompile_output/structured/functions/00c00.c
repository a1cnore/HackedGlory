// functions/00c00 — 33 functions
#include "libGameKindred.h"




void FUN_00c0011c(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  code *local_68;
  long lStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined1 *)(param_1 + 0xca) = 1;
  *(undefined8 *)(param_1 + 0xc0) = param_2;
  if ((*(long *)(param_1 + 0x98) != 0) && (uVar2 = FUN_00f02540(param_2), (uVar2 & 1) == 0)) {
    (**(code **)(**(long **)(param_1 + 0x98) + 0x78))(*(long **)(param_1 + 0x98),param_2,0);
  }
  local_40 = FUN_00f048a4("UI::HUD::ON_DOWN_EMOTE_PANEL");
  local_68 = FUN_00c00210;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(param_1 + 8,&local_68);
  local_40 = FUN_00f048a4("UI::HUD::ON_RELEASE_EMOTE_PANEL");
  local_68 = FUN_00c00250;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  lStack_60 = param_1;
  FUN_009693a0(param_1 + 8,&local_68);
  FUN_00bfff7c(param_1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c00210(long param_1)

{
  if ((ulong)*(byte *)(param_1 + 200) != 0xff) {
    FUN_00c83994(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (ulong)*(byte *)(param_1 + 200) * 8),0)
    ;
    *(undefined1 *)(param_1 + 200) = 0xff;
  }
  return;
}




void FUN_00c00250(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c005d0;
  local_38 = param_1;
  FUN_00f02e98(0xbf800000,&local_38,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c002b0(long param_1,ulong param_2)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((param_2 & 1) == 0) {
    pcStack_30 = FUN_00c005d0;
    local_38 = param_1;
    FUN_00f02e98(0xbf800000,&local_38,0,0);
  }
  else {
    *(undefined1 *)(param_1 + 0xc9) = 1;
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0032c(long param_1)

{
  long lVar1;
  long local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c005d0;
  local_38 = param_1;
  FUN_00f02e98(0xbf800000,&local_38,0,0);
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_00bff880();
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c0039c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00c003a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x88))();
  return;
}




void FUN_00c003ac(long param_1)

{
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
  return;
}




void FUN_00c003c0(long param_1,uint param_2)

{
  if ((uint)*(byte *)(param_1 + 200) < *(uint *)(param_1 + 0xa0)) {
    FUN_00c83994(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (ulong)*(byte *)(param_1 + 200) * 8),0)
    ;
  }
  FUN_00c83994(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (ulong)param_2 * 8),1);
  *(char *)(param_1 + 200) = (char)param_2;
  return;
}




void FUN_00c00414(long param_1,ulong param_2)

{
  FUN_00c83994(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (param_2 & 0xffffffff) * 8),0);
  *(undefined1 *)(param_1 + 200) = 0xff;
  return;
}




void FUN_00c00448(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c003c0(param_1,param_3);
  if (*(long *)(param_1 + 0xc0) != 0) {
    FUN_00bff880();
    return;
  }
  return;
}




void FUN_00c00480(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)**(undefined8 **)(param_1 + 0x88))
            (*(undefined8 **)(param_1 + 0x88),
             *(undefined1 *)(*(long *)(param_1 + 0xb8) + (param_3 & 0xffffffff)));
  FUN_00c83994(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (param_3 & 0xffffffff) * 8),0);
  *(undefined1 *)(param_1 + 200) = 0xff;
  pcStack_40 = FUN_00c005d0;
  local_48 = param_1;
  FUN_00f02e98(0xbf800000,&local_48,0,0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c00520(long param_1)

{
  if ((ulong)*(byte *)(param_1 + 200) != 0xff) {
    FUN_00c83994(*(undefined8 *)(*(long *)(param_1 + 0xa8) + (ulong)*(byte *)(param_1 + 200) * 8),0)
    ;
    *(undefined1 *)(param_1 + 200) = 0xff;
  }
  return;
}




void FUN_00c00560(undefined8 param_1)

{
  long lVar1;
  undefined8 local_38;
  code *pcStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_30 = FUN_00c005d0;
  local_38 = param_1;
  FUN_00f02e98(0xbf800000,&local_38,0,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c005c0(long param_1)

{
  FUN_00c002b0(param_1,*(char *)(param_1 + 0xc9) == '\0');
  return;
}




void FUN_00c005d0(long param_1)

{
  *(undefined1 *)(param_1 + 0xc9) = 0;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
  return;
}




void FUN_00c005e4(uint *param_1,uint param_2)

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




void FUN_00c00664(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x12;
  param_1[0x11] = 0;
  *param_1 = (long)&PTR_FUN_027f4c08;
  FUN_00b16678(plVar1);
  plVar2 = param_1 + 0x186;
  FUN_00f1306c(plVar2);
  plVar3 = param_1 + 0x1b1;
  FUN_00f0d160(plVar3);
  FUN_00f0c4bc(param_1 + 0x1d7);
  param_1[0x207] = 0;
  param_1[0x206] = 0;
  param_1[0x205] = 0;
  param_1[0x204] = 0;
  *(undefined4 *)(param_1 + 0x208) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1044) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f133a4(plVar2,plVar3,1);
  FUN_00f133a4(plVar2,param_1 + 0x1d7,1);
  FUN_00f0d92c(plVar3,PTR_s_build___Fonts_Avenir_Heavy_30_fo_02be9d00,&DAT_01bee7fa);
  uVar4 = FUN_00e6ce7c("HUD_STORE_RECOMMEND_TO",0);
  FUN_00f0d75c(plVar3,uVar4);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xfffffff7;
  return;
}




void FUN_00c00780(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  long *plVar4;
  
  uVar3 = *(uint *)(param_1 + 0x204);
  plVar1 = (long *)param_1[0x205];
  *param_1 = &PTR_FUN_027f4c08;
  plVar4 = plVar1;
  if (uVar3 != 0) {
    do {
      plVar2 = (long *)*plVar4;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))(plVar2);
        uVar3 = *(uint *)(param_1 + 0x204);
        plVar1 = (long *)param_1[0x205];
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1 + uVar3);
  }
  if (plVar1 != (long *)0x0) {
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  if ((void *)param_1[0x207] != (void *)0x0) {
    operator_delete__((void *)param_1[0x207]);
    plVar1 = (long *)param_1[0x205];
    param_1[0x207] = 0;
    param_1[0x206] = 0;
  }
  if (plVar1 != (long *)0x0) {
    operator_delete__(plVar1);
    param_1[0x204] = 0;
    param_1[0x205] = 0;
  }
  param_1[0x1d7] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x1ee);
  FUN_00f13d08(param_1 + 0x1d7);
  FUN_00f0d3a4(param_1 + 0x1b1);
  param_1[0x186] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x19d);
  FUN_00f13d08(param_1 + 0x186);
  FUN_00ac51b8(param_1 + 0x12);
  FUN_00f01868(param_1);
  return;
}




void FUN_00c0087c(void *param_1)

{
  FUN_00c00780();
  operator_delete(param_1);
  return;
}




void FUN_00c008a0(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  void *local_98;
  undefined4 local_8c;
  code *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_8c = param_2;
  pvVar3 = operator_new(0x490);
  FUN_00c00e84(pvVar3,param_3,param_4);
  uVar4 = (ulong)*(uint *)(param_1 + 0x1020);
  lVar1 = (long)pvVar3 + 8;
  local_60 = DAT_03210f5c;
  local_88 = FUN_00c00a1c;
  local_78 = 0;
  uStack_70 = 0;
  local_98 = pvVar3;
  lStack_80 = param_1;
  local_68 = uVar4;
  FUN_009693a0(lVar1,&local_88);
  local_88 = FUN_00c00a1c;
  local_60 = DAT_03210f88;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar4;
  FUN_009693a0(lVar1,&local_88);
  local_60 = DAT_03210f60;
  local_88 = FUN_00c00a28;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar4;
  FUN_009693a0(lVar1,&local_88);
  local_88 = FUN_00c00a28;
  local_60 = DAT_03210f8c;
  local_78 = 0;
  uStack_70 = 0;
  lStack_80 = param_1;
  local_68 = uVar4;
  FUN_009693a0(lVar1,&local_88);
  *(uint *)((long)pvVar3 + 0x84) = *(uint *)((long)pvVar3 + 0x84) | 0x10;
  FUN_00f133a4(param_1 + 0xeb8,pvVar3,1);
  FUN_00c00a30(param_1 + 0x1020,&local_98);
  FUN_0091f584(param_1 + 0x1030,&local_8c);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c00a1c(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00c00d64(param_1,in_x4,1);
  return;
}




void FUN_00c00a28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  FUN_00c00e34(param_1,param_2,param_5);
  return;
}




void FUN_00c00a30(uint *param_1,undefined8 *param_2)

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
    FUN_00c0129c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00c00ab8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x1044) != '\0') {
    uVar2 = 0;
LAB_00c00adc:
    FUN_00c00b18(param_1,uVar2);
    return;
  }
  lVar1 = FUN_00a1ae38();
  if (lVar1 != 0) {
    FUN_00a1ae38();
    fVar3 = (float)FUN_00a1b610();
    if (fVar3 <= 0.0) {
      uVar2 = 1;
      goto LAB_00c00adc;
    }
  }
  return;
}




void FUN_00c00b18(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  
  *(uint *)(param_1 + 0x84) =
       *(uint *)(param_1 + 0x84) & 0xfffffff0 | *(uint *)(param_1 + 0x84) & 7 | (param_2 & 1) << 3;
  *(char *)(param_1 + 0x1044) = (char)(param_2 & 1);
  uVar1 = *(uint *)(param_1 + 0x1020);
  if (uVar1 != 0) {
    plVar2 = *(long **)(param_1 + 0x1028);
    plVar4 = plVar2;
    do {
      lVar3 = *plVar4;
      if ((*(uint *)(lVar3 + 0x10c) & 0x7f80) != 0x600) {
        *(uint *)(lVar3 + 0x10c) = *(uint *)(lVar3 + 0x10c) & 0xffff807f | 0x600;
        FUN_0091ada4(lVar3 + 0x88);
        uVar1 = *(uint *)(param_1 + 0x1020);
        plVar2 = *(long **)(param_1 + 0x1028);
      }
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar2 + uVar1);
  }
  *(undefined4 *)(param_1 + 0x1040) = 0xffffffff;
  return;
}




void FUN_00c00ba4(long param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = 0x3f;
  if ((param_2 & 1) == 0) {
    uVar1 = 0xc;
  }
  if ((*(uint *)(param_1 + 0x10c) >> 7 & 0xff) == uVar1) {
    return;
  }
  *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xffff807f | uVar1 << 7;
  FUN_0091ada4(param_1 + 0x88);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00c00be0(undefined1 param_1 [16],undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)param_2;
  if (*(int *)(param_3 + 0x1020) != 0) {
    plVar2 = *(long **)(param_3 + 0x1028);
    do {
      plVar3 = plVar2 + 1;
      plVar2 = (long *)*plVar2;
      plVar2[0x91] = 0x4300000043e40000;
      (**(code **)(*plVar2 + 0x90))();
      fVar5 = (float)param_2;
      plVar2 = plVar3;
    } while (plVar3 != (long *)(*(long *)(param_3 + 0x1028) + (ulong)*(uint *)(param_3 + 0x1020) * 8
                               ));
  }
  lVar1 = param_3 + 0xeb8;
  FUN_00f0c4fc(0x41400000,lVar1,1,3);
  FUN_00f0c584(lVar1);
  FUN_00f07b18(0x41400000,lVar1,0,param_3 + 0xd88,2);
  lVar1 = param_3 + 0xc30;
  FUN_00f13238(lVar1);
  FUN_00f07b18(0,param_3 + 0xd88,4,lVar1,4);
  fVar4 = (float)FUN_00f13e54(lVar1);
  FUN_00f13e54(lVar1);
  FUN_00b16840(0x3e4ccccd,fVar4 + 24.0,fVar5 + 24.0,param_3 + 0x90,0,1);
  FUN_00b18a7c(0x41400000,0x41400000,DAT_03218ef8,_DAT_03218efc,param_3 + 0x90,lVar1);
  *(uint *)(param_3 + 0xcb4) = *(uint *)(param_3 + 0xcb4) | 0x10;
  return;
}




void FUN_00c00d1c(undefined4 param_1,undefined4 param_2,long param_3)

{
  *(undefined4 *)(param_3 + 0x488) = param_1;
  *(undefined4 *)(param_3 + 0x48c) = param_2;
  return;
}




void FUN_00c00d28(long param_1,ulong param_2)

{
  (**(code **)**(undefined8 **)(param_1 + 0x88))
            (*(undefined8 **)(param_1 + 0x88),
             *(undefined4 *)(*(long *)(param_1 + 0x1038) + (param_2 & 0xffffffff) * 4));
  FUN_00c00b18(param_1,0);
  return;
}




void FUN_00c00d64(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  
  if (*(uint *)(param_1 + 0x1040) != param_2) {
    uVar2 = 0x3f;
    lVar1 = *(long *)(*(long *)(param_1 + 0x1028) + (ulong)param_2 * 8);
    if ((param_3 & 1) == 0) {
      uVar2 = 0xc;
    }
    if ((*(uint *)(lVar1 + 0x10c) >> 7 & 0xff) != uVar2) {
      *(uint *)(lVar1 + 0x10c) = *(uint *)(lVar1 + 0x10c) & 0xffff807f | uVar2 << 7;
      FUN_0091ada4(lVar1 + 0x88);
    }
    if ((param_3 & 1) == 0) {
      param_2 = 0xffffffff;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x1040);
      if ((-1 < (int)uVar2) && (uVar2 < *(uint *)(param_1 + 0x1020))) {
        lVar1 = *(long *)(*(long *)(param_1 + 0x1028) + (ulong)uVar2 * 8);
        if ((*(uint *)(lVar1 + 0x10c) & 0x7f80) != 0x600) {
          *(uint *)(lVar1 + 0x10c) = *(uint *)(lVar1 + 0x10c) & 0xffff807f | 0x600;
          FUN_0091ada4(lVar1 + 0x88);
        }
      }
    }
    *(uint *)(param_1 + 0x1040) = param_2;
  }
  return;
}




void FUN_00c00e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00c00d64(param_1,param_3,1);
  return;
}




void FUN_00c00e34(long param_1,undefined8 param_2,uint param_3)

{
  (**(code **)**(undefined8 **)(param_1 + 0x88))
            (*(undefined8 **)(param_1 + 0x88),
             *(undefined4 *)(*(long *)(param_1 + 0x1038) + (ulong)param_3 * 4));
  FUN_00c00b18(param_1,0);
  FUN_00c00d64(param_1,param_3,0);
  return;
}




void FUN_00c00e84(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  FUN_00f017e8();
  plVar1 = param_1 + 0x11;
  *param_1 = (long)&PTR_FUN_027f4d08;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4d;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x6b;
  FUN_00f0d160(plVar4);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f0e548(plVar1,PTR_s_build___HUDPartsCommon_atlas_02be3440,"white_background");
  FUN_00f0e670(plVar1,&DAT_01bee7fa,2);
  FUN_00f0e548(plVar2,PTR_s_build___HUDPartsCommon_atlas_02be3440,"circle_button_fill");
  FUN_00f0e670(plVar2,&DAT_01bbb6d0,2);
  FUN_00f0e540(plVar3,PTR_s_build___HUDPartsCommon_atlas_02be3440);
  FUN_00a1ffcc(plVar3,param_2);
  FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bbb6d0);
  FUN_00f0d75c(plVar4,param_3);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  if ((*(uint *)((long)param_1 + 0x10c) & 0x7f80) != 0x600) {
    *(uint *)((long)param_1 + 0x10c) = *(uint *)((long)param_1 + 0x10c) & 0xffff807f | 0x600;
    FUN_0091ada4(plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00c0103c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x90))(param_1);
  return;
}

