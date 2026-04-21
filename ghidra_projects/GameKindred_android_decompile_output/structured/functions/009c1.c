// functions/009c1 — 15 functions
#include "libGameKindred.h"




void FUN_009c1038(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x009c1040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)();
  return;
}




undefined8 FUN_009c1044(void)

{
  return DAT_0312f150;
}




bool FUN_009c1050(void)

{
  return DAT_0312f150 != 0;
}




void FUN_009c1064(undefined8 param_1,undefined4 param_2)

{
  if (DAT_0312f150 != 0) {
    FUN_00a3ecd4(DAT_0312f150 + 0x268,param_1,param_2);
    return;
  }
  return;
}




void FUN_009c1084(long param_1)

{
  FUN_00a3ecd4(param_1 + 0x268);
  return;
}




void FUN_009c108c(undefined4 param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0x2d56d876) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x2d56d876];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x2d56d877)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])
                  (*(undefined8 *)(plVar4[6] + lVar1),param_1);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_009c112c(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_0312f150 != 0) {
    FUN_00a3ed80(DAT_0312f150 + 0x268,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_009c1150(long param_1)

{
  FUN_00a3ed80(param_1 + 0x268);
  return;
}




void FUN_009c1158(void)

{
  if (DAT_0312f150 != 0) {
    FUN_00a3ef24(DAT_0312f150 + 0x268);
    return;
  }
  return;
}




void FUN_009c1170(long param_1)

{
  FUN_00a3ef24(param_1 + 0x268);
  return;
}




void FUN_009c1178(void)

{
  if (DAT_0312f150 != 0) {
    *(ushort *)(DAT_0312f150 + 0x7b028) = *(ushort *)(DAT_0312f150 + 0x7b028) & 0xefff;
  }
  return;
}




void FUN_009c11ac(long param_1)

{
  *(ushort *)(param_1 + 0x7b028) = *(ushort *)(param_1 + 0x7b028) & 0xefff;
  return;
}




void FUN_009c11d4(undefined8 param_1,undefined4 param_2)

{
  if (DAT_0312f150 != 0) {
    FUN_00a3ed70(DAT_0312f150 + 0x268,param_1,param_2);
    return;
  }
  return;
}




void FUN_009c11f4(long param_1)

{
  FUN_00a3ed70(param_1 + 0x268);
  return;
}




void FUN_009c11fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  ushort *puVar9;
  undefined4 uVar10;
  long lVar11;
  ushort uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *plVar16;
  long *plVar17;
  code *local_a0;
  undefined8 *puStack_98;
  undefined8 *local_90;
  code *local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  long local_70;
  
  lVar11 = tpidr_el0;
  local_70 = *(long *)(lVar11 + 0x28);
  *param_1 = &PTR_FUN_027c29f8;
  param_1[5] = 0;
  uVar10 = DAT_03214ce8;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 6) = uVar10;
  FUN_00f13ca4();
  puVar1 = param_1 + 0x1f;
  FUN_00f13ca4(puVar1);
  FUN_00f13ca4();
  FUN_00a393b8();
  puVar2 = param_1 + 0x459b;
  FUN_00f017e8(puVar2);
  *puVar2 = &PTR_FUN_027c1f80;
  FUN_00a7039c();
  FUN_00a70cac();
  FUN_00a70cac(param_1 + 0x45e1);
  FUN_00a59488();
  FUN_00a4e290(param_1 + 0xae18);
  FUN_00a5682c();
  FUN_00adb418(param_1 + 0xb22f,1);
  FUN_00bbf698(param_1 + 0xbc25);
  FUN_00c83b14();
  FUN_00c83c78();
  FUN_00c82a68();
  FUN_00bbc248(param_1 + 0xc762);
  FUN_00bc4334(param_1 + 0xc768);
  FUN_00bbc658(param_1 + 0xc76d);
  FUN_00bc4518(param_1 + 0xc771);
  param_1[0xc773] = 0;
  FUN_00a29748();
  FUN_00a6a9ec();
  FUN_00a54a78();
  FUN_00941734(param_1 + 0xf489);
  FUN_00b27c04(param_1 + 0xf48a,1);
  puVar3 = param_1 + 0xf4a7;
  FUN_00f017e8(puVar3);
  puVar4 = param_1 + 0xf4b8;
  *puVar3 = &PTR_FUN_027c1f80;
  FUN_00f017e8(puVar4);
  puVar5 = param_1 + 0xf4c9;
  *puVar4 = &PTR_FUN_027c1f80;
  FUN_00f017e8(puVar5);
  puVar6 = param_1 + 0xf4da;
  *puVar5 = &PTR_FUN_027c1f80;
  FUN_00f017e8(puVar6);
  puVar7 = param_1 + 0xf4eb;
  *puVar6 = &PTR_FUN_027c1f80;
  FUN_00f017e8(puVar7);
  *puVar7 = &PTR_FUN_027c1f80;
  FUN_00acac40(param_1 + 0xf4fc,1);
  *(undefined4 *)(param_1 + 0xf601) = 0;
  param_1[0xf603] = 0;
  param_1[0xf602] = 0;
  param_1[0xf604] = 0xffffffff00000000;
  puVar8 = (uint *)((long)param_1 + 0x7b024);
  puVar9 = (ushort *)(param_1 + 0xf605);
  *(byte *)((long)param_1 + 0x7b02a) = *(byte *)((long)param_1 + 0x7b02a) & 0xf8;
  *puVar9 = 0;
  FUN_00da4178();
  *puVar8 = *puVar8 & 0xfff7ffff;
  FUN_00ceace8();
  uVar14 = FUN_00ceaf74();
  if ((uVar14 & 1) == 0) {
    *puVar8 = *puVar8 & 0xfffff7ff;
  }
  DAT_0312f150 = param_1;
  FUN_00bbf9ec(param_1 + 0xbc25);
  uVar15 = FUN_00a1ffc0();
  FUN_00e6ea58(uVar15,param_1,0xda87fc4a,FUN_009c1fa8,0);
  uVar15 = FUN_009f1f64();
  local_a0 = (code *)0x0;
  local_88 = thunk_FUN_009c7ed4;
  puStack_98 = param_1;
  local_90 = param_1;
  FUN_009104f8(uVar15,&local_a0);
  *(uint *)((long)param_1 + 0x17c) = *(uint *)((long)param_1 + 0x17c) & 0xfffffffb;
  plVar16 = (long *)FUN_00f00438("ingame-effects");
  (**(code **)(*plVar16 + 0x78))(plVar16,param_1 + 0x45ac,1);
  plVar17 = (long *)FUN_00f00438("ingame-ui");
  (**(code **)(*plVar17 + 0x78))(plVar17,param_1 + 8,1);
  (**(code **)(*plVar17 + 0x78))(plVar17,puVar1,1);
  FUN_009b5278(puVar1);
  FUN_00ceace8();
  uVar12 = FUN_00ceb05c();
  *puVar9 = *puVar9 & 0xdfff | (uVar12 & 1) << 0xd;
  FUN_00f023ec(puVar1,param_1 + 0xb0fc,1);
  plVar17 = (long *)FUN_00f00438("root-layer");
  (**(code **)(*plVar17 + 0x78))(plVar17,puVar3,1);
  (**(code **)(*plVar17 + 0x78))(plVar17,puVar4,1);
  FUN_00f023ec(puVar1,param_1 + 0x36,1);
  FUN_00f023ec(param_1 + 0x36,param_1 + 0x4d,1);
  FUN_00f023ec(puVar1,puVar5,1);
  FUN_00f023ec(puVar1,puVar2,1);
  FUN_00f023ec(puVar2,param_1 + 0x45fc,1);
  FUN_00f023ec(puVar2,param_1 + 0xeeea,1);
  if ((*puVar9 >> 0xd & 1) != 0) {
    FUN_00f023ec(puVar2,param_1 + 0xe855,1);
  }
  FUN_00f023ec(puVar2,param_1[0xbc26],1);
  FUN_00f023ec(puVar2,param_1 + 0xc774,1);
  FUN_00f023ec(puVar2,param_1 + 0xbf03,1);
  FUN_00f023ec(puVar2,param_1 + 0xc741,1);
  FUN_00f023ec(puVar2,param_1 + 0xc0f5,1);
  FUN_00f023ec(puVar1,param_1 + 0xf48a,1);
  FUN_00f023ec(puVar1,puVar6,1);
  FUN_00f023ec(puVar1,param_1 + 0xb235,1);
  FUN_00f023ec(puVar1,param_1[0xc763],1);
  FUN_00f023ec(puVar1,param_1[0xc76e],1);
  FUN_00f023ec(puVar1,param_1[0xc772],1);
  FUN_00f023ec(puVar1,param_1[0xc769],1);
  FUN_00f023ec(puVar1,puVar7,1);
  (**(code **)(*plVar16 + 0x78))(plVar16,param_1 + 0x45c7,1);
  FUN_00ceace8();
  uVar14 = FUN_00ceae90();
  if ((uVar14 & 1) != 0) {
    *(uint *)((long)param_1 + 0x57144) = *(uint *)((long)param_1 + 0x57144) & 0xfffffffb;
  }
  uVar14 = FUN_00a3f1fc(param_1 + 0x4d);
  if ((uVar14 & 1) != 0) {
    uVar13 = FUN_009f1f70(5);
    FUN_009c2064(param_1,uVar13 & 1);
  }
  FUN_00acae7c(param_1 + 0xf4fc,1);
  *(uint *)((long)param_1 + 0x7a864) = *(uint *)((long)param_1 + 0x7a864) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x5922c) = *(uint *)((long)param_1 + 0x5922c) & 0xfffffffb;
  FUN_009a8334();
  puVar1 = param_1 + 9;
  local_78 = DAT_03210f84;
  local_a0 = FUN_009c20a8;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f88;
  local_a0 = FUN_009c20b0;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f8c;
  local_a0 = FUN_009c20b8;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f58;
  local_a0 = FUN_009c20c0;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f5c;
  local_a0 = FUN_009c20c8;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f60;
  local_a0 = FUN_009c20d0;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f70;
  local_a0 = FUN_009c20d8;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f74;
  local_a0 = FUN_009c20e0;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f78;
  local_a0 = FUN_009c20e8;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f64;
  local_a0 = FUN_009c20f0;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f68;
  local_a0 = FUN_009c20f8;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f6c;
  local_a0 = FUN_009c2100;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03210f7c;
  local_a0 = FUN_009c2108;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  *(uint *)((long)param_1 + 0xc4) = *(uint *)((long)param_1 + 0xc4) | 0x10;
  local_78 = FUN_00f048a4("EVENT_CLOSE_SHOP");
  local_a0 = FUN_009c2110;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(param_1 + 0x45fd,&local_a0);
  local_78 = FUN_00f048a4("EVENT_CLOSE_SHOP_AND_OPEN_RECOMMENDED_PATH_SELECTOR");
  local_a0 = thunk_FUN_009c791c;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(param_1 + 0x45fd,&local_a0);
  local_88 = (code *)0x0;
  uStack_80 = 0;
  uVar10 = DAT_03210c64;
  local_a0 = FUN_009c2158;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  local_78 = uVar10;
  FUN_009693a0(param_1[0xbc26] + 8,&local_a0);
  local_a0 = FUN_009c218c;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  local_78 = uVar10;
  FUN_009693a0(param_1 + 0xc775,&local_a0);
  local_a0 = FUN_009c21c0;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  local_78 = uVar10;
  FUN_009693a0(param_1 + 0xb0fd,&local_a0);
  local_78 = FUN_00f048a4("EVENT_CLOSE_TALENT_SELECTOR");
  local_a0 = thunk_FUN_009c7688;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(param_1 + 0xe856,&local_a0);
  local_78 = FUN_00f048a4("EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR");
  local_a0 = FUN_009c2208;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(param_1 + 0xeeeb,&local_a0);
  local_78 = FUN_00f048a4("EVENT_CLOSE_RECOMMENDED_PATH_SELECTOR_AND_OPEN_SHOP");
  local_a0 = thunk_FUN_009c7884;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(param_1 + 0xeeeb,&local_a0);
  uVar10 = DAT_0313c3c8;
  local_a0 = FUN_009c2250;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  local_78 = uVar10;
  FUN_009693a0(param_1 + 0xbf04,&local_a0);
  local_78 = FUN_00f048a4("UI::EVENT_CLOSE_MOBILECHAT");
  local_a0 = FUN_009c2284;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(param_1 + 0xc742,&local_a0);
  local_a0 = thunk_FUN_009c7648;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  local_78 = uVar10;
  FUN_009693a0(param_1 + 0xc0f6,&local_a0);
  local_a0 = thunk_FUN_009c7648;
  local_78 = DAT_0313cc28;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(param_1 + 0xc0f6,&local_a0);
  local_78 = FUN_00f048a4("EVENT_UTILS_SELECT_ITEM");
  puVar1 = param_1 + 0x4e;
  local_a0 = FUN_009c22bc;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  uVar14 = FUN_0093d83c();
  if ((uVar14 & 1) != 0) {
    local_78 = FUN_00f048a4("EVENT_UTILS_FOCUS_KILLED");
    local_a0 = FUN_009c22c4;
    local_88 = (code *)0x0;
    uStack_80 = 0;
    local_90 = (undefined8 *)0x0;
    puStack_98 = param_1;
    FUN_009693a0(puVar1,&local_a0);
  }
  local_78 = FUN_00f048a4("EVENT_SELECT_ZOOM_TOGGLE");
  local_a0 = thunk_FUN_009c7e0c;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = FUN_00f048a4("EVENT_BLITZ_ROUNDS_PLAYERS_READY");
  local_a0 = FUN_009c22d0;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_03132398;
  local_a0 = FUN_009c22d8;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = DAT_0313239c;
  local_a0 = FUN_009c230c;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = FUN_00f048a4("EVENT_SELECT_SURRENDER");
  puVar1 = param_1 + 0x20;
  local_a0 = FUN_009c2340;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = FUN_00f048a4("EVENT_DISPLAY_TOOLTIP");
  local_a0 = FUN_009c2348;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = FUN_00f048a4("EVENT_HIDE_TOOLTIPS");
  local_a0 = FUN_009c2350;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  local_78 = FUN_00f048a4("EVENT_INFO_PANEL_CLOSED");
  local_a0 = FUN_009c2380;
  local_88 = (code *)0x0;
  uStack_80 = 0;
  local_90 = (undefined8 *)0x0;
  puStack_98 = param_1;
  FUN_009693a0(puVar1,&local_a0);
  if (*(long *)(lVar11 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

