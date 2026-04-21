// functions/1002f — 269 functions
#include "GameKindred.h"




void thunk_FUN_1002fb8c4(void)

{
  FUN_1002fb8c4();
  return;
}




void FUN_1002f00c8(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23820,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002f0110(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23824,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002f0158(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23828,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002f01a0(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d2381c,*(byte *)(param_1 + 0x384c) ^ 1);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002f01f0(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d2382c,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002f023c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002f023c_10148bf40;
  param_1[0x5c0] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x6e1);
  FUN_1002ebc50(param_1 + 0x5c0);
  param_1[0x477] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x598);
  FUN_1002ebc50(param_1 + 0x477);
  param_1[0x32e] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x44f);
  FUN_1002ebc50(param_1 + 0x32e);
  param_1[0x1e5] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x306);
  FUN_1002ebc50(param_1 + 0x1e5);
  param_1[0x9c] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x1bd);
  FUN_1002ebc50(param_1 + 0x9c);
  thunk_FUN_100651068(param_1 + 0x76);
  thunk_FUN_10064e2bc(param_1 + 0x5f);
  param_1[0x41] = &PTR_FUN_1014a7108;
  param_1[0x58] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5b);
  FUN_10064e2bc(param_1 + 0x41);
  param_1[0x17] = &PTR_FUN_1014a6db0;
  param_1[0x2e] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002f023c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002f023c_10148bf40;
  param_1[0x5c0] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x6e1);
  FUN_1002ebc50(param_1 + 0x5c0);
  param_1[0x477] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x598);
  FUN_1002ebc50(param_1 + 0x477);
  param_1[0x32e] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x44f);
  FUN_1002ebc50(param_1 + 0x32e);
  param_1[0x1e5] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x306);
  FUN_1002ebc50(param_1 + 0x1e5);
  param_1[0x9c] = &PTR_FUN_10148b3a0;
  thunk_FUN_100651068(param_1 + 0x1bd);
  FUN_1002ebc50(param_1 + 0x9c);
  thunk_FUN_100651068(param_1 + 0x76);
  thunk_FUN_10064e2bc(param_1 + 0x5f);
  param_1[0x41] = &PTR_FUN_1014a7108;
  param_1[0x58] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5b);
  FUN_10064e2bc(param_1 + 0x41);
  param_1[0x17] = &PTR_FUN_1014a6db0;
  param_1[0x2e] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002f037c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002f023c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002f0390(long param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x3848) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x3848) = param_2;
  switch(param_2) {
  case 0:
    *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) & 0xfffffffb;
    *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) & 0xfffffffb;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
    *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0xfffffffb;
    *(uint *)(param_1 + 0x243c) = *(uint *)(param_1 + 0x243c) | 4;
    *(uint *)(param_1 + 0x2e84) = *(uint *)(param_1 + 0x2e84) & 0xfffffffb;
    break;
  case 1:
    *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) | 4;
    *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) | 4;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) | 4;
    *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0xfffffffb;
    *(uint *)(param_1 + 0x243c) = *(uint *)(param_1 + 0x243c) & 0xfffffffb;
    *(uint *)(param_1 + 0x2e84) = *(uint *)(param_1 + 0x2e84) & 0xfffffffb;
    pcVar1 = "MENU_DRAFT_LOBBY_HERO_SWAP_PROMPT";
    goto LAB_1002f056c;
  case 2:
    *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) & 0xfffffffb;
    *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) & 0xfffffffb;
    *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) & 0xfffffffb;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x243c) = *(uint *)(param_1 + 0x243c) | 4;
    *(uint *)(param_1 + 0x2e84) =
         *(uint *)(param_1 + 0x2e84) & 0xfffffff8 |
         *(uint *)(param_1 + 0x2e84) & 3 | (uint)(*(char *)(param_1 + 0x384c) == '\0') << 2;
    uVar2 = FUN_1004e0150("MENU_DRAFT_LOBBY_HERO_SWAP_PROMPT",0);
    FUN_1002ecce4(param_1 + 0x2e00,uVar2);
    break;
  case 3:
    *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) | 4;
    *(uint *)(param_1 + 0xfac) = *(uint *)(param_1 + 0xfac) | 4;
    *(uint *)(param_1 + 0x564) = *(uint *)(param_1 + 0x564) & 0xfffffffb;
    *(uint *)(param_1 + 0x19f4) = *(uint *)(param_1 + 0x19f4) & 0xfffffffb;
    *(uint *)(param_1 + 0x243c) = *(uint *)(param_1 + 0x243c) & 0xfffffffb;
    *(uint *)(param_1 + 0x2e84) = *(uint *)(param_1 + 0x2e84) & 0xfffffffb;
    FUN_100651038(param_1 + 0x3b0,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
    pcVar1 = "MENU_DRAFT_LOBBY_SWAP_PENDING";
LAB_1002f056c:
    uVar2 = FUN_1004e0150(pcVar1,0);
    FUN_1006513c0(param_1 + 0x3b0,uVar2);
  }
  FUN_1002f0590(param_1);
  return;
}




void FUN_1002f0590(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  
  lVar3 = param_1 + 0xb8;
  FUN_10064e5ec(0,0,lVar3,8,param_1,8);
  FUN_10064e5ec(0xc0800000,0,param_1 + 0x208,7,lVar3,7);
  lVar2 = param_1 + 0x2f8;
  FUN_10064e5ec(0,0,lVar2,8,lVar3,8);
  lVar3 = lVar2;
  switch(*(undefined4 *)(param_1 + 0x3848)) {
  case 0:
    lVar2 = param_1 + 0x23b8;
    uVar7 = 0;
    uVar4 = 5;
    uVar5 = 5;
    break;
  case 1:
    lVar3 = param_1 + 0x3b0;
    FUN_100651700(lVar3,3);
    uVar5 = FUN_10064e3cc(lVar2);
    FUN_10065179c(uVar5,0,0x3f800000,lVar3);
    FUN_10064e5ec(0,0,lVar3,4,lVar2,4);
    FUN_10064e5ec(0,0,param_1 + 0x4e0,1,lVar3,6);
    lVar2 = param_1 + 0x1970;
    uVar7 = 0;
    uVar4 = 0;
    uVar5 = 6;
    break;
  case 2:
    bVar1 = *(char *)(param_1 + 0x384c) != '\0';
    lVar3 = param_1 + 0x2e00;
    if (bVar1) {
      lVar3 = lVar2;
    }
    uVar5 = 6;
    if (bVar1) {
      uVar5 = 8;
    }
    uVar7 = 0x41800000;
    if (bVar1) {
      uVar7 = 0;
    }
    FUN_10064e5ec(0,0,param_1 + 0x2e00,4,lVar2,4);
    lVar2 = param_1 + 0x23b8;
    uVar4 = 4;
    if (*(char *)(param_1 + 0x384c) != '\0') {
      uVar4 = 8;
    }
    break;
  case 3:
    FUN_10064e5ec(0,0,param_1 + 0xf28,5,lVar2,5);
    fVar6 = (float)FUN_10064eb7c(lVar2,7,param_1 + 0xf28,7);
    lVar2 = param_1 + 0x3b0;
    FUN_10065179c(fVar6 * 0.9,0,0x3f800000,lVar2);
    FUN_100651700(lVar2,0);
    uVar7 = 0;
    uVar4 = 7;
    uVar5 = 7;
    break;
  default:
    return;
  }
  FUN_10064e5ec(0,uVar7,lVar2,uVar4,lVar3,uVar5);
  return;
}




void FUN_1002f07f4(long param_1,int param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  uint uVar3;
  
  *(char *)(param_1 + 0x384c) = (char)param_2;
  pcVar1 = "MENU_DRAFT_UNMUTE_ALLY_PROMPT";
  if (param_2 == 0) {
    pcVar1 = "MENU_DRAFT_MUTE_ALLY_PROMPT";
  }
  uVar3 = 0;
  if (param_2 == 0) {
    uVar3 = 4;
  }
  uVar2 = FUN_1004e0150(pcVar1,0);
  FUN_1002ecce4(param_1 + 0x23b8,uVar2);
  *(uint *)(param_1 + 0x2e84) = *(uint *)(param_1 + 0x2e84) & 0xfffffffb | uVar3;
  FUN_1002f0590(param_1);
  return;
}




void FUN_1002f0864(undefined8 param_1,undefined8 param_2,long param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_48;
  float fStack_44;
  
  FUN_10064e328();
  FUN_10064e47c(param_1,param_2,param_3 + 0xb8);
  fVar1 = (float)param_1;
  fVar3 = fVar1 * 0.75;
  fVar2 = (float)param_2 * 0.33;
  FUN_10064e47c(fVar3,(float)param_2 * 0.75,param_3 + 0x2f8);
  local_48 = fVar3;
  fStack_44 = fVar2;
  FUN_10064e48c(param_3 + 0x3b0,&local_48);
  local_48 = fVar3;
  fStack_44 = fVar2;
  FUN_10064e48c(param_3 + 0x2e00,&local_48);
  local_48 = fVar3;
  fStack_44 = fVar2;
  FUN_10064e48c(param_3 + 0x23b8,&local_48);
  local_48 = fVar1 * 0.35999998;
  fStack_44 = fVar2;
  FUN_10064e48c(param_3 + 0x4e0,&local_48);
  local_48 = fVar1 * 0.35999998;
  fStack_44 = fVar2;
  FUN_10064e48c(param_3 + 0x1970,&local_48);
  local_48 = fVar1 * 0.2475;
  fStack_44 = fVar2;
  FUN_10064e48c(param_3 + 0xf28,&local_48);
  FUN_1002f0590(param_3);
  return;
}




void FUN_1002f0964(void)

{
  DAT_101e45658 = 0xff;
  DAT_101e4565a = 0xffff;
  DAT_101e4565c = 0xffff;
  DAT_101e45660 = 0x4326000041900000;
  DAT_101e45668 = 0x4326000041c00000;
  DAT_101e45670 = 0xffbc9c44;
  DAT_101e45674 = 0xff1166f2;
  DAT_101e45678 = 0xffe0e0e0;
  DAT_101e4567c = 0xffa0a0a0;
  DAT_101e45680 = 0xff8c8c8c;
  DAT_101e45684 = 0xff322213;
  DAT_101e45688 = 0xff091911;
  DAT_101e4568c = 0xff170c19;
  DAT_101e45690 = 0xff241a14;
  DAT_101e45694 = 0xff14171c;
  DAT_101e45698 = 0xff221911;
  DAT_101e4569c = 0xff1a1416;
  DAT_101e456a0 = 0xff121414;
  DAT_101e456a4 = 0xff1a1809;
  DAT_101e456a8 = 0xff141414;
  DAT_101e456ac = 0xff141414;
  DAT_101e456b0 = 0xff2929c0;
  DAT_101e456b4 = 0xff283082;
  DAT_101e456b8 = 0xff5262cc;
  DAT_101e456bc = 0xff283082;
  DAT_101e456c0 = 0xff5262cc;
  DAT_101e456c4 = 0xff745c42;
  DAT_101e456c8 = 0xff184155;
  DAT_101e456cc = 0xff92665e;
  DAT_101e456d0 = 0xffbc9c44;
  DAT_101e456d4 = 0xffbbae56;
  DAT_101e456d8 = 0xff8b7b01;
  DAT_101e456dc = 0xff90b3ef;
  DAT_101e456e0 = 0xff728ebe;
  DAT_101e456e4 = 0xff19459d;
  DAT_101e456e8 = 0xff9d877b;
  DAT_101e456ec = 0xffcbb1a3;
  DAT_101e456f0 = 0xff3f6fb5;
  DAT_101e456f4 = 0xffc5c5c5;
  DAT_101e456f8 = 0xff4fc1f1;
  DAT_101e456fc = 0xff606060;
  DAT_101e45700 = 0xffc5ff7b;
  DAT_101e45704 = 0xff5271eb;
  DAT_101e45708 = 0xfffae076;
  DAT_101e4570c = 0xff3ac8f6;
  DAT_101e45710 = 0xffaaaaaa;
  DAT_101e45714 = 0xffe19400;
  DAT_101e45718 = 0xffe19400;
  DAT_101e4571c = 0xffe550b2;
  DAT_101e45720 = 0xfff22ae8;
  DAT_101e45724 = 0xff005ae1;
  DAT_101e45728 = 0xff1addfa;
  DAT_101e4572c = 0xff2424b3;
  DAT_101e45730 = 0xff2424b3;
  DAT_101e45734 = 0xff646464;
  DAT_101e45738 = 0xff92665e;
  DAT_101e4573c = 0xff646037;
  DAT_101e45744 = 0xff1111a1;
  DAT_101e45748 = 0xff321ee1;
  DAT_101e4574c = 0xffc8c8c8;
  DAT_101e45750 = 0xff321ee1;
  DAT_101e4575c = 0xff6259b3;
  DAT_101e45760 = 0xff506e73;
  DAT_101e45764 = 0xff9dbf86;
  DAT_101e45740 = 0xffffffff;
  DAT_101e45768 = 0xffa35244;
  DAT_101e45754 = 0xff7fe801;
  DAT_101e4576c = 0xffca828e;
  DAT_101e45758 = 0xffffffff;
  DAT_101e45770 = 0xffa6a6a6;
  DAT_101e45774 = 0xffa6a6a6;
  DAT_101e45778 = 0xffffffff;
  DAT_101e4577c = 0xff88ea2f;
  DAT_101e45780 = 0xff8c8c8c;
  DAT_101e45784 = 0xffffb400;
  DAT_101e45788 = 0xffff00ff;
  DAT_101e4578c = 0xff00aded;
  DAT_101e45790 = 0xff33d3ff;
  DAT_101e45794 = 0xff7fe801;
  DAT_101e45798 = 0xff282828;
  DAT_101e4579c = 0xfff0f0f0;
  DAT_101e457a0 = 0xffa4781e;
  DAT_101e457a4 = 0xffa6654b;
  DAT_101e457a8 = 0xff93435b;
  DAT_101e457ac = 0xff387f9c;
  DAT_101e457b0 = 0xffa3781e;
  DAT_101e457b4 = 0xffffd18a;
  DAT_101e457b8 = 0xffff61f7;
  DAT_101e457bc = 0xff5de1f2;
  DAT_101e457c0 = 0xff80eaff;
  DAT_101e457c4 = 0xff32e00e;
  DAT_101e457c8 = 0xff5a3c10;
  DAT_101e457cc = 0xff330b03;
  DAT_101e457d0 = 0xff33031d;
  DAT_101e457d4 = 0xff032433;
  DAT_101e457d8 = 0xff9e8e8d;
  DAT_101d2381c = FUN_100644a94("MUTE_ALLY");
  DAT_101d23820 = FUN_100644a94("ACCEPT_REQUEST");
  DAT_101d23824 = FUN_100644a94("CANCEL_REQUEST");
  DAT_101d23828 = FUN_100644a94("DECLINE_REQUEST");
  DAT_101d2382c = FUN_100644a94("SEND_REQUEST");
  return;
}




long * FUN_1002f10ac(undefined1 param_1 [16],float param_2,long *param_3,int param_4,int param_5,
                    undefined1 param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 local_a0;
  long *plStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_1002f172c_10148c088;
  *(undefined4 *)((long)puVar7 + 0xbc) = 0xff;
  *(int *)(puVar7 + 0x18) = param_4;
  puVar7 = puVar7 + 0x19;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_3 + 0x37;
  thunk_FUN_100652c08(plVar1);
  param_3[0x57] = 0;
  param_3[0x56] = 0;
  param_3[0x55] = (long)(param_3 + 0x56);
  plVar2 = param_3 + 0x58;
  thunk_FUN_1002ecd94(plVar2,0);
  plVar3 = param_3 + 0x1d2;
  thunk_FUN_1002ecd94(plVar3,0);
  plVar4 = param_3 + 0x34c;
  thunk_FUN_1002ecd94(plVar4,0);
  plVar5 = param_3 + 0x4c6;
  thunk_FUN_100650e64(plVar5);
  *(undefined1 *)(param_3 + 0x4ec) = 0;
  *(undefined1 *)((long)param_3 + 0x2761) = param_6;
  (**(code **)(*param_3 + 0x78))(param_3,puVar7,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
  FUN_100652cac(puVar7,DAT_101854a08,"popup_bg");
  if (param_4 == 2) {
    *(uint *)((long)param_3 + 0x23c) = *(uint *)((long)param_3 + 0x23c) & 0xfffffffb;
  }
  else {
    if (param_4 == 1) {
      pcVar9 = "draft_minimap3V3";
    }
    else {
      if (param_4 != 0) goto LAB_1002f1284;
      pcVar9 = "draft_minimap5V5";
    }
    FUN_100652cac(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,pcVar9);
    FUN_100653080(plVar1,1);
  }
LAB_1002f1284:
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_a0,"lobby_build_crystal");
  FUN_1002ece5c(plVar2,puVar6,&local_a0,&DAT_101d91198);
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  FUN_1002ebe0c(plVar2,DAT_101854a08,"main_nav_background");
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_a0,"lobby_build_utility");
  FUN_1002ece5c(plVar3,puVar6,&local_a0,&DAT_101d91198);
  if (local_90 < 0) {
    operator_delete(local_a0);
  }
  FUN_1002ebe0c(plVar3,DAT_101854a08,"main_nav_background");
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&local_a0,"lobby_build_weapon");
  FUN_1002ece5c(plVar4,puVar6,&local_a0,&DAT_101d91198);
  if (local_90._7_1_ < '\0') {
    operator_delete(local_a0);
  }
  FUN_1002ebe0c(plVar4,DAT_101854a08,"main_nav_background");
  fVar10 = (float)FUN_100652e60(param_3 + 400);
  param_2 = param_2 * 1.2;
  local_a0 = (code *)CONCAT44(param_2,fVar10 * 1.2);
  FUN_10064e48c(plVar2,&local_a0);
  fVar10 = (float)FUN_100652e60(param_3 + 0x30a);
  param_2 = param_2 * 1.2;
  local_a0 = (code *)CONCAT44(param_2,fVar10 * 1.2);
  FUN_10064e48c(plVar3,&local_a0);
  fVar10 = (float)FUN_100652e60(param_3 + 0x484);
  local_a0 = (code *)CONCAT44(param_2 * 1.2,fVar10 * 1.2);
  FUN_10064e48c(plVar4,&local_a0);
  if (param_4 == 1) {
    if (param_5 == 0) {
      FUN_1002f1664(0x3f51eb85,0x3ee66666,param_3,6);
      FUN_1002f1664(0x3f000000,0x3eb33333,param_3,5);
      uVar11 = 0x3f266666;
    }
    else {
      FUN_1002f1664(0x3e3851ec,0x3ee66666,param_3,6);
      uVar11 = 0x3eb33333;
      FUN_1002f1664(0x3f000000,0x3eb33333,param_3,5);
    }
    FUN_1002f1664(uVar11,0x3f11eb85,param_3,1);
    uVar12 = 0x3f333333;
    uVar11 = 0x3f000000;
  }
  else {
    if (param_4 != 0) goto LAB_1002f1558;
    FUN_1002f1664(0x3e6147ae,0x3f47ae14,param_3,6);
    FUN_1002f1664(0x3e3851ec,0x3e8f5c29,param_3,2);
    FUN_1002f1664(0x3ef0a3d7,0x3f07ae14,param_3,3);
    FUN_1002f1664(0x3f333333,0x3f4ccccd,param_3,4);
    FUN_1002f1664(0x3eeb851f,0x3f333333,param_3,1);
    uVar11 = 0x3ecccccd;
    uVar12 = 0x3f19999a;
  }
  FUN_1002f1664(uVar11,uVar12,param_3,0);
LAB_1002f1558:
  uVar11 = DAT_101d91884;
  local_78 = DAT_101d91884;
  local_a0 = thunk_FUN_1002f2200;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_3;
  FUN_10001554c(param_3 + 0x59,&local_a0);
  local_78 = uVar11;
  local_a0 = thunk_FUN_1002f225c;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_3;
  FUN_10001554c(param_3 + 0x1d3,&local_a0);
  local_78 = uVar11;
  local_a0 = thunk_FUN_1002f22bc;
  local_88 = 0;
  uStack_80 = 0;
  local_90 = 0;
  plStack_98 = param_3;
  FUN_10001554c(param_3 + 0x34d,&local_a0);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar5,&DAT_101e457f2);
  pcVar9 = "MENU_DRAFT_BUILD_PATH_INSTRUCTION";
  if (param_4 != 2) {
    pcVar9 = "MENU_DRAFT_POSITION_INSTRUCTION";
  }
  uVar8 = FUN_1004e0150(pcVar9,0);
  FUN_1006513c0(plVar5,uVar8);
  FUN_10065184c(0x43200000,0,0x3f800000,plVar5);
  return param_3;
}




void FUN_1002f1664(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long *plVar2;
  code *local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_48;
  
  lVar1 = FUN_1002f2100(param_3 + 0x1b8,1);
  local_48 = DAT_101d91884;
  local_70 = FUN_1002f2174;
  local_60 = 0;
  uStack_58 = 0;
  lStack_68 = param_3;
  local_50 = lVar1;
  FUN_10001554c(lVar1 + 8,&local_70);
  FUN_1001d55e0(lVar1,param_4);
  *(undefined1 *)(lVar1 + 0x1732) = *(undefined1 *)(param_3 + 0x2761);
  local_70 = (code *)CONCAT44(local_70._4_4_,(int)param_4);
  plVar2 = (long *)FUN_1002f1cdc(param_3 + 0x2a8,&local_70);
  *plVar2 = lVar1;
  *(undefined4 *)(plVar2 + 1) = param_1;
  *(undefined4 *)((long)plVar2 + 0xc) = param_2;
  return;
}




void thunk_FUN_1002f2200(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 1) {
    uVar1 = 1;
  }
  FUN_1002f1e1c(param_1,uVar1);
  FUN_100644aec(auStack_40,DAT_101d23834,*(undefined4 *)(param_1 + 0xbc));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_1002f225c(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 2) {
    uVar1 = 2;
  }
  FUN_1002f1e1c(param_1,uVar1);
  FUN_100644aec(auStack_40,DAT_101d23834,*(undefined4 *)(param_1 + 0xbc));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void thunk_FUN_1002f22bc(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar1 = 0;
  }
  FUN_1002f1e1c(param_1,uVar1);
  FUN_100644aec(auStack_40,DAT_101d23834,*(undefined4 *)(param_1 + 0xbc));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




long * thunk_FUN_1002f10ac(undefined1 param_1 [16],float param_2,long *param_3,int param_4,
                          int param_5,undefined1 param_6)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined8 uStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_78;
  
  puVar7 = (undefined8 *)FUN_10064e20c();
  *puVar7 = &PTR_thunk_FUN_1002f172c_10148c088;
  *(undefined4 *)((long)puVar7 + 0xbc) = 0xff;
  *(int *)(puVar7 + 0x18) = param_4;
  puVar7 = puVar7 + 0x19;
  thunk_FUN_100652c08(puVar7);
  plVar1 = param_3 + 0x37;
  thunk_FUN_100652c08(plVar1);
  param_3[0x57] = 0;
  param_3[0x56] = 0;
  param_3[0x55] = (long)(param_3 + 0x56);
  plVar2 = param_3 + 0x58;
  thunk_FUN_1002ecd94(plVar2,0);
  plVar3 = param_3 + 0x1d2;
  thunk_FUN_1002ecd94(plVar3,0);
  plVar4 = param_3 + 0x34c;
  thunk_FUN_1002ecd94(plVar4,0);
  plVar5 = param_3 + 0x4c6;
  thunk_FUN_100650e64(plVar5);
  *(undefined1 *)(param_3 + 0x4ec) = 0;
  *(undefined1 *)((long)param_3 + 0x2761) = param_6;
  (**(code **)(*param_3 + 0x78))(param_3,puVar7,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar1,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar2,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar3,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar4,1);
  (**(code **)(*param_3 + 0x78))(param_3,plVar5,1);
  FUN_100652cac(puVar7,DAT_101854a08,"popup_bg");
  if (param_4 == 2) {
    *(uint *)((long)param_3 + 0x23c) = *(uint *)((long)param_3 + 0x23c) & 0xfffffffb;
  }
  else {
    if (param_4 == 1) {
      pcVar9 = "draft_minimap3V3";
    }
    else {
      if (param_4 != 0) goto LAB_1002f1284;
      pcVar9 = "draft_minimap5V5";
    }
    FUN_100652cac(plVar1,PTR_s_build___MenuDraftPartsCommon_tga_101854a38,pcVar9);
    FUN_100653080(plVar1,1);
  }
LAB_1002f1284:
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&uStack_a0,"lobby_build_crystal");
  FUN_1002ece5c(plVar2,puVar6,&uStack_a0,&DAT_101d91198);
  if (uStack_90 < 0) {
    operator_delete(uStack_a0);
  }
  FUN_1002ebe0c(plVar2,DAT_101854a08,"main_nav_background");
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&uStack_a0,"lobby_build_utility");
  FUN_1002ece5c(plVar3,puVar6,&uStack_a0,&DAT_101d91198);
  if (uStack_90 < 0) {
    operator_delete(uStack_a0);
  }
  FUN_1002ebe0c(plVar3,DAT_101854a08,"main_nav_background");
  puVar6 = PTR_s_build___MenuPartsCommon_tga_101854970;
  FUN_10001549c(&uStack_a0,"lobby_build_weapon");
  FUN_1002ece5c(plVar4,puVar6,&uStack_a0,&DAT_101d91198);
  if (uStack_90._7_1_ < '\0') {
    operator_delete(uStack_a0);
  }
  FUN_1002ebe0c(plVar4,DAT_101854a08,"main_nav_background");
  fVar10 = (float)FUN_100652e60(param_3 + 400);
  param_2 = param_2 * 1.2;
  uStack_a0 = (code *)CONCAT44(param_2,fVar10 * 1.2);
  FUN_10064e48c(plVar2,&uStack_a0);
  fVar10 = (float)FUN_100652e60(param_3 + 0x30a);
  param_2 = param_2 * 1.2;
  uStack_a0 = (code *)CONCAT44(param_2,fVar10 * 1.2);
  FUN_10064e48c(plVar3,&uStack_a0);
  fVar10 = (float)FUN_100652e60(param_3 + 0x484);
  uStack_a0 = (code *)CONCAT44(param_2 * 1.2,fVar10 * 1.2);
  FUN_10064e48c(plVar4,&uStack_a0);
  if (param_4 == 1) {
    if (param_5 == 0) {
      FUN_1002f1664(0x3f51eb85,0x3ee66666,param_3,6);
      FUN_1002f1664(0x3f000000,0x3eb33333,param_3,5);
      uVar11 = 0x3f266666;
    }
    else {
      FUN_1002f1664(0x3e3851ec,0x3ee66666,param_3,6);
      uVar11 = 0x3eb33333;
      FUN_1002f1664(0x3f000000,0x3eb33333,param_3,5);
    }
    FUN_1002f1664(uVar11,0x3f11eb85,param_3,1);
    uVar12 = 0x3f333333;
    uVar11 = 0x3f000000;
  }
  else {
    if (param_4 != 0) goto LAB_1002f1558;
    FUN_1002f1664(0x3e6147ae,0x3f47ae14,param_3,6);
    FUN_1002f1664(0x3e3851ec,0x3e8f5c29,param_3,2);
    FUN_1002f1664(0x3ef0a3d7,0x3f07ae14,param_3,3);
    FUN_1002f1664(0x3f333333,0x3f4ccccd,param_3,4);
    FUN_1002f1664(0x3eeb851f,0x3f333333,param_3,1);
    uVar11 = 0x3ecccccd;
    uVar12 = 0x3f19999a;
  }
  FUN_1002f1664(uVar11,uVar12,param_3,0);
LAB_1002f1558:
  uVar11 = DAT_101d91884;
  uStack_78 = DAT_101d91884;
  uStack_a0 = thunk_FUN_1002f2200;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_3;
  FUN_10001554c(param_3 + 0x59,&uStack_a0);
  uStack_78 = uVar11;
  uStack_a0 = thunk_FUN_1002f225c;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_3;
  FUN_10001554c(param_3 + 0x1d3,&uStack_a0);
  uStack_78 = uVar11;
  uStack_a0 = thunk_FUN_1002f22bc;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_90 = 0;
  plStack_98 = param_3;
  FUN_10001554c(param_3 + 0x34d,&uStack_a0);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_100651460(plVar5,&DAT_101e457f2);
  pcVar9 = "MENU_DRAFT_BUILD_PATH_INSTRUCTION";
  if (param_4 != 2) {
    pcVar9 = "MENU_DRAFT_POSITION_INSTRUCTION";
  }
  uVar8 = FUN_1004e0150(pcVar9,0);
  FUN_1006513c0(plVar5,uVar8);
  FUN_10065184c(0x43200000,0,0x3f800000,plVar5);
  return param_3;
}




void FUN_1002f172c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002f172c_10148c088;
  thunk_FUN_100651068(param_1 + 0x4c6);
  FUN_1001acc08(param_1 + 0x34c);
  FUN_1001acc08(param_1 + 0x1d2);
  FUN_1001acc08(param_1 + 0x58);
  FUN_1002f2318(param_1 + 0x55,param_1[0x56]);
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002f172c(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002f172c_10148c088;
  thunk_FUN_100651068(param_1 + 0x4c6);
  FUN_1001acc08(param_1 + 0x34c);
  FUN_1001acc08(param_1 + 0x1d2);
  FUN_1001acc08(param_1 + 0x58);
  FUN_1002f2318(param_1 + 0x55,param_1[0x56]);
  param_1[0x37] = &PTR_FUN_1014a7108;
  param_1[0x4e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x51);
  FUN_10064e2bc(param_1 + 0x37);
  param_1[0x19] = &PTR_FUN_1014a7108;
  param_1[0x30] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33);
  FUN_10064e2bc(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002f17e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002f172c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002f17f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e328();
  FUN_10064e47c(param_1,param_2,param_3 + 200);
  FUN_100651700(param_3 + 0x2630,3);
  FUN_100651708((float)param_1 * 0.65,param_3 + 0x2630,1);
  FUN_1002f1864(param_3);
  return;
}




void FUN_1002f1864(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float local_68;
  float fStack_64;
  
  lVar1 = param_1 + 200;
  FUN_10064e5ec(0,0,lVar1,8,param_1,8);
  fVar10 = -65.0;
  FUN_10064e5ec(0,param_1 + 0x2630,8,param_1,6);
  if (*(int *)(param_1 + 0xc0) == 0) {
    local_68 = (float)FUN_100652e60(lVar1);
    local_68 = local_68 * 1.1;
    fStack_64 = fVar10 * 1.1;
    FUN_10064e48c(param_1 + 0x1b8,&local_68);
    uVar11 = 0x42f00000;
    fVar10 = -100.0;
    uVar3 = 1;
    uVar4 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xc0) == 2) {
      FUN_10064e3cc(param_1 + 0x1a60);
      FUN_10064e5ec(fVar10 * -2.6,0,param_1 + 0x1a60,8,param_1,8);
      fVar10 = 0.0;
      FUN_10064e5ec(0,0,param_1 + 0x2c0,8,param_1,8);
      FUN_10064e3cc(param_1 + 0xe90);
      FUN_10064e5ec(fVar10 * 2.6,0,param_1 + 0xe90,8,param_1,8);
      return;
    }
    local_68 = (float)FUN_100652e60(lVar1);
    fStack_64 = fVar10;
    FUN_10064e48c(param_1 + 0x1b8,&local_68);
    uVar11 = 0x42700000;
    fVar10 = 0.0;
    uVar3 = 8;
    uVar4 = 8;
  }
  FUN_10064e5ec(uVar11,fVar10,param_1 + 0x1b8,uVar3,param_1,uVar4);
  if (*(long **)(param_1 + 0x2a8) != (long *)(param_1 + 0x2b0)) {
    plVar8 = *(long **)(param_1 + 0x2a8);
    do {
      plVar7 = (long *)plVar8[5];
      lVar6 = plVar8[6];
      uVar11 = *(undefined4 *)((long)plVar8 + 0x34);
      fVar10 = (float)FUN_100652e60(lVar1);
      fVar9 = (float)(**(code **)(*plVar7 + 0x48))(plVar7);
      fVar9 = (fVar10 * 0.1) / fVar9;
      bVar2 = false;
      if ((*(float *)(plVar7 + 9) == fVar9) &&
         (bVar2 = false, !NAN(*(float *)((long)plVar7 + 0x4c)) && !NAN(fVar9))) {
        bVar2 = *(float *)((long)plVar7 + 0x4c) == fVar9;
      }
      if (!bVar2) {
        *(float *)(plVar7 + 9) = fVar9;
        *(float *)((long)plVar7 + 0x4c) = fVar9;
        FUN_1000200a0(plVar7);
      }
      fVar10 = 0.5;
      FUN_10064e784(0x3f000000,0x3f000000,(int)lVar6,uVar11,0,0,plVar7,param_1 + 0x1b8);
      plVar7 = (long *)plVar8[1];
      if ((long *)plVar8[1] == (long *)0x0) {
        plVar7 = plVar8 + 2;
        plVar5 = (long *)*plVar7;
        if ((long *)*plVar5 != plVar8) {
          do {
            lVar6 = *plVar7;
            plVar7 = (long *)(lVar6 + 0x10);
            plVar5 = (long *)*plVar7;
          } while (*plVar5 != lVar6);
        }
      }
      else {
        do {
          plVar5 = plVar7;
          plVar7 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar8 = plVar5;
    } while (plVar5 != (long *)(param_1 + 0x2b0));
  }
  FUN_10064e3cc(param_1 + 0x1a60);
  FUN_10064e5ec(0x42c80000,fVar10 * -1.3,param_1 + 0x1a60,8,param_1,7);
  fVar10 = 0.0;
  FUN_10064e5ec(0x42c80000,0,param_1 + 0x2c0,8,param_1,7);
  FUN_10064e3cc(param_1 + 0xe90);
  FUN_10064e5ec(0x42c80000,fVar10 * 1.3,param_1 + 0xe90,8,param_1,7);
  return;
}




void FUN_1002f1b84(long param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  int local_34;
  
  iVar4 = (int)param_2;
  if (*(int *)(param_1 + 0xb8) != iVar4) {
    plVar7 = *(long **)(param_1 + 0x2a8);
    while (plVar7 != (long *)(param_1 + 0x2b0)) {
      FUN_1001d4edc(plVar7[5],0);
      plVar5 = (long *)plVar7[1];
      if ((long *)plVar7[1] == (long *)0x0) {
        plVar5 = plVar7 + 2;
        bVar1 = *(long **)*plVar5 != plVar7;
        plVar7 = (long *)*plVar5;
        if (bVar1) {
          do {
            lVar6 = *plVar5;
            plVar5 = (long *)(lVar6 + 0x10);
            plVar7 = (long *)*plVar5;
          } while (*plVar7 != lVar6);
        }
      }
      else {
        do {
          plVar7 = plVar5;
          plVar5 = (long *)*plVar7;
        } while ((long *)*plVar7 != (long *)0x0);
      }
    }
    if (*(int *)(param_1 + 0xc0) != 2) {
      if (iVar4 == 0xff) {
        uVar2 = FUN_1004e0150("MENU_DRAFT_POSITION_INSTRUCTION",0);
        FUN_1006513c0(param_1 + 0x2630,uVar2);
      }
      else {
        uVar2 = FUN_1004e0150("MENU_DRAFT_POSITION_INSTRUCTION_LOCKIN",0);
        FUN_1006513c0(param_1 + 0x2630,uVar2);
        local_34 = iVar4;
        puVar3 = (undefined8 *)FUN_1002f1cdc(param_1 + 0x2a8,&local_34);
        FUN_1001d4edc(*puVar3,1);
      }
    }
    FUN_10065184c(0x43200000,0,0x3f800000,param_1 + 0x2630);
    *(int *)(param_1 + 0xb8) = iVar4;
    FUN_1002f1d98(param_1,param_2,*(undefined4 *)(param_1 + 0xbc));
    FUN_1002f1864(param_1);
  }
  return;
}




undefined8 * FUN_1002f1cdc(long param_1,int *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  puVar1 = (undefined8 *)(param_1 + 8);
  puVar3 = (undefined8 *)*puVar1;
  puVar2 = puVar1;
  if (puVar3 == (undefined8 *)0x0) {
LAB_1002f1d54:
    iVar4 = *param_2;
  }
  else {
    iVar4 = *param_2;
    puVar1 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar2 = puVar3, *(int *)(puVar2 + 4) <= iVar4) {
        if (iVar4 <= *(int *)(puVar2 + 4)) {
          if (puVar2 != (undefined8 *)0x0) goto LAB_1002f1d80;
          goto LAB_1002f1d54;
        }
        puVar1 = puVar2 + 1;
        puVar3 = (undefined8 *)*puVar1;
        if ((undefined8 *)*puVar1 == (undefined8 *)0x0) goto LAB_1002f1d58;
      }
      puVar1 = puVar2;
      puVar3 = (undefined8 *)*puVar2;
    } while ((undefined8 *)*puVar2 != (undefined8 *)0x0);
  }
LAB_1002f1d58:
  puVar3 = operator_new(0x38);
  *(int *)(puVar3 + 4) = iVar4;
  puVar3[5] = 0;
  puVar3[6] = 0;
  FUN_1002f2358(param_1,puVar2,puVar1,puVar3);
  puVar2 = puVar3;
LAB_1002f1d80:
  return puVar2 + 5;
}




void FUN_1002f1d98(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int local_34;
  
  iVar1 = FUN_10034cbf8(param_2);
  if ((iVar1 != 0) && (plVar3 = *(long **)(param_1 + 0x2b0), plVar3 != (long *)0x0)) {
    do {
      local_34 = (int)param_2;
      if ((int)plVar3[4] <= local_34) {
        if (local_34 <= (int)plVar3[4]) {
          puVar2 = (undefined8 *)FUN_1002f1cdc(param_1 + 0x2a8,&local_34);
          FUN_1001d5644(*puVar2,param_3);
          return;
        }
        plVar3 = plVar3 + 1;
      }
      plVar3 = (long *)*plVar3;
    } while (plVar3 != (long *)0x0);
  }
  return;
}




void FUN_1002f1e1c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  float fVar6;
  
  fVar6 = 2.0;
  if (*(int *)(param_1 + 0xc0) != 2) {
    fVar6 = 1.0;
  }
  lVar1 = param_1 + 0x2c0;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x308) == fVar6) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x30c)) && !NAN(fVar6))) {
    bVar3 = *(float *)(param_1 + 0x30c) == fVar6;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x308) = fVar6;
    *(float *)(param_1 + 0x30c) = fVar6;
    FUN_1000200a0(lVar1);
  }
  FUN_1002ebe0c(lVar1,DAT_101854a08,"main_nav_background");
  lVar5 = param_1 + 0x1a60;
  bVar3 = false;
  if ((*(float *)(param_1 + 0x1aa8) == fVar6) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0x1aac)) && !NAN(fVar6))) {
    bVar3 = *(float *)(param_1 + 0x1aac) == fVar6;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0x1aa8) = fVar6;
    *(float *)(param_1 + 0x1aac) = fVar6;
    FUN_1000200a0(lVar5);
  }
  FUN_1002ebe0c(lVar5,DAT_101854a08,"main_nav_background");
  lVar2 = param_1 + 0xe90;
  bVar3 = false;
  if ((*(float *)(param_1 + 0xed8) == fVar6) &&
     (bVar3 = false, !NAN(*(float *)(param_1 + 0xedc)) && !NAN(fVar6))) {
    bVar3 = *(float *)(param_1 + 0xedc) == fVar6;
  }
  if (!bVar3) {
    *(float *)(param_1 + 0xed8) = fVar6;
    *(float *)(param_1 + 0xedc) = fVar6;
    FUN_1000200a0(lVar2);
  }
  FUN_1002ebe0c(lVar2,DAT_101854a08,"main_nav_background");
  iVar4 = (int)param_2;
  if (iVar4 == 0) {
    fVar6 = fVar6 * 1.3;
    bVar3 = false;
    if ((*(float *)(param_1 + 0x1aa8) == fVar6) &&
       (bVar3 = false, !NAN(*(float *)(param_1 + 0x1aac)) && !NAN(fVar6))) {
      bVar3 = *(float *)(param_1 + 0x1aac) == fVar6;
    }
    if (!bVar3) {
      *(float *)(param_1 + 0x1aa8) = fVar6;
      *(float *)(param_1 + 0x1aac) = fVar6;
LAB_1002f1fb4:
      FUN_1000200a0(lVar5);
    }
  }
  else if (iVar4 == 2) {
    fVar6 = fVar6 * 1.3;
    bVar3 = false;
    if ((*(float *)(param_1 + 0xed8) == fVar6) &&
       (bVar3 = false, !NAN(*(float *)(param_1 + 0xedc)) && !NAN(fVar6))) {
      bVar3 = *(float *)(param_1 + 0xedc) == fVar6;
    }
    lVar5 = lVar2;
    if (!bVar3) {
      *(float *)(param_1 + 0xed8) = fVar6;
      *(float *)(param_1 + 0xedc) = fVar6;
      goto LAB_1002f1fb4;
    }
  }
  else {
    if (iVar4 != 1) goto LAB_1002f1fd8;
    fVar6 = fVar6 * 1.3;
    bVar3 = false;
    if ((*(float *)(param_1 + 0x308) == fVar6) &&
       (bVar3 = false, !NAN(*(float *)(param_1 + 0x30c)) && !NAN(fVar6))) {
      bVar3 = *(float *)(param_1 + 0x30c) == fVar6;
    }
    lVar5 = lVar1;
    if (!bVar3) {
      *(float *)(param_1 + 0x308) = fVar6;
      *(float *)(param_1 + 0x30c) = fVar6;
      goto LAB_1002f1fb4;
    }
  }
  FUN_1002ebe0c(lVar5,PTR_s_build___MenuPartsCommon_tga_101854970,"button_lively_generic_fill_bg");
LAB_1002f1fd8:
  *(int *)(param_1 + 0xbc) = iVar4;
  FUN_1002f1d98(param_1,*(undefined4 *)(param_1 + 0xb8),param_2);
  FUN_1002f1864(param_1);
  return;
}




void FUN_1002f2008(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  int local_24;
  
  plVar2 = *(long **)(param_1 + 0x2b0);
  if (plVar2 != (long *)0x0) {
    do {
      if ((int)plVar2[4] <= param_2) {
        if (param_2 <= (int)plVar2[4]) {
          local_24 = param_2;
          puVar1 = (undefined8 *)FUN_1002f1cdc(param_1 + 0x2a8,&local_24);
          FUN_1001d531c(*puVar1,param_3);
          break;
        }
        plVar2 = plVar2 + 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  FUN_1002f1864(param_1);
  return;
}




void FUN_1002f207c(long param_1,int param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  int local_24;
  
  if ((param_2 != 0xff) && (plVar2 = *(long **)(param_1 + 0x2b0), plVar2 != (long *)0x0)) {
    do {
      if ((int)plVar2[4] <= param_2) {
        if (param_2 <= (int)plVar2[4]) {
          local_24 = param_2;
          puVar1 = (undefined8 *)FUN_1002f1cdc(param_1 + 0x2a8,&local_24);
          FUN_1001d56d4(*puVar1,param_3);
          return;
        }
        plVar2 = plVar2 + 1;
      }
      plVar2 = (long *)*plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return;
}




undefined4 FUN_1002f20ec(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc0);
}




void FUN_1002f20f4(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x2760) = param_2;
  return;
}




void * FUN_1002f2100(long *param_1,int param_2)

{
  void *pvVar1;
  long lVar2;
  uint uVar3;
  
  pvVar1 = operator_new(0x1738);
  lVar2 = thunk_FUN_1001d4b60();
  uVar3 = 0x20;
  if (param_2 == 0) {
    uVar3 = 0;
  }
  *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffffffdf | uVar3;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_1002f2174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1002f217c(param_1,param_2,param_5);
  return;
}




void FUN_1002f217c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined1 auStack_40 [32];
  
  if ((*(char *)(param_1 + 0x2761) == '\0') || (*(char *)(param_1 + 0x2760) == '\0')) {
    iVar1 = 0xff;
    if (*(int *)(param_3 + 0x1728) != *(int *)(param_1 + 0xb8)) {
      iVar1 = *(int *)(param_3 + 0x1728);
    }
    FUN_1002f1b84(param_1,iVar1);
    FUN_100644aec(auStack_40,DAT_101d23830,iVar1);
    FUN_100644c34(param_1,auStack_40,1);
  }
  return;
}




void FUN_1002f2200(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 1) {
    uVar1 = 1;
  }
  FUN_1002f1e1c(param_1,uVar1);
  FUN_100644aec(auStack_40,DAT_101d23834,*(undefined4 *)(param_1 + 0xbc));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002f225c(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 2) {
    uVar1 = 2;
  }
  FUN_1002f1e1c(param_1,uVar1);
  FUN_100644aec(auStack_40,DAT_101d23834,*(undefined4 *)(param_1 + 0xbc));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002f22bc(long param_1)

{
  undefined4 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = 0xff;
  if (*(int *)(param_1 + 0xbc) != 0) {
    uVar1 = 0;
  }
  FUN_1002f1e1c(param_1,uVar1);
  FUN_100644aec(auStack_40,DAT_101d23834,*(undefined4 *)(param_1 + 0xbc));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002f2318(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1002f2318(param_1,*param_2);
    FUN_1002f2318(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_1002f2358(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_1002f23ac(void)

{
  DAT_101e457e0 = 0xff;
  DAT_101e457e2 = 0xffff;
  DAT_101e457e4 = 0xffff;
  DAT_101e457e6 = 0xffbc9c44;
  DAT_101e457ea = 0xff1166f2;
  DAT_101e457ee = 0xffe0e0e0;
  DAT_101e457f2 = 0xffa0a0a0;
  DAT_101e457f6 = 0xff8c8c8c;
  DAT_101e457fa = 0xff322213;
  DAT_101e457fe = 0xff091911;
  DAT_101e45802 = 0xff170c19;
  DAT_101e45806 = 0xff241a14;
  DAT_101e4580a = 0xff14171c;
  DAT_101e4580e = 0xff221911;
  DAT_101e45812 = 0xff1a1416;
  DAT_101e45816 = 0xff121414;
  DAT_101e4581a = 0xff1a1809;
  DAT_101e4581e = 0xff141414;
  DAT_101e45822 = 0xff141414;
  DAT_101e45826 = 0xff2929c0;
  DAT_101e4582a = 0xff283082;
  DAT_101e4582e = 0xff5262cc;
  DAT_101e45832 = 0xff283082;
  DAT_101e45836 = 0xff5262cc;
  DAT_101e4583a = 0xff745c42;
  DAT_101e4583e = 0xff184155;
  DAT_101e45842 = 0xff92665e;
  DAT_101e45846 = 0xffbc9c44;
  DAT_101e4584a = 0xffbbae56;
  DAT_101e4584e = 0xff8b7b01;
  DAT_101e45852 = 0xff90b3ef;
  DAT_101e45856 = 0xff728ebe;
  DAT_101e4585a = 0xff19459d;
  DAT_101e4585e = 0xff9d877b;
  DAT_101e45862 = 0xffcbb1a3;
  DAT_101e45866 = 0xff3f6fb5;
  DAT_101e4586a = 0xffc5c5c5;
  DAT_101e4586e = 0xff4fc1f1;
  DAT_101e45872 = 0xff606060;
  DAT_101e45876 = 0xffc5ff7b;
  DAT_101e4587a = 0xff5271eb;
  DAT_101e4587e = 0xfffae076;
  DAT_101e45882 = 0xff3ac8f6;
  DAT_101e45886 = 0xffaaaaaa;
  DAT_101e4588a = 0xffe19400;
  DAT_101e4588e = 0xffe19400;
  DAT_101e45892 = 0xffe550b2;
  DAT_101e45896 = 0xfff22ae8;
  DAT_101e4589a = 0xff005ae1;
  DAT_101e4589e = 0xff1addfa;
  DAT_101e458a2 = 0xff2424b3;
  DAT_101e458a6 = 0xff2424b3;
  DAT_101e458aa = 0xff646464;
  DAT_101e458ae = 0xff92665e;
  DAT_101e458b2 = 0xff646037;
  DAT_101e458bc = 0xff1111a1;
  DAT_101e458c4 = 0xffc8c8c8;
  DAT_101e458c0 = 0xff321ee1;
  DAT_101e458c8 = 0xff321ee1;
  DAT_101e458d4 = 0xff6259b3;
  DAT_101e458d8 = 0xff506e73;
  DAT_101e458b8 = 0xffffffff;
  DAT_101e458dc = 0xff9dbf86;
  DAT_101e458cc = 0xff7fe801;
  DAT_101e458e0 = 0xffa35244;
  DAT_101e458d0 = 0xffffffff;
  DAT_101e458e4 = 0xffca828e;
  DAT_101e458e8 = 0xffa6a6a6;
  DAT_101e458ec = 0xffa6a6a6;
  DAT_101e458f0 = 0xffffffff;
  DAT_101e458f4 = 0xff88ea2f;
  DAT_101e458f8 = 0xff8c8c8c;
  DAT_101e458fc = 0xffffb400;
  DAT_101e45900 = 0xffff00ff;
  DAT_101e45904 = 0xff00aded;
  DAT_101e45908 = 0xff33d3ff;
  DAT_101e4590c = 0xff7fe801;
  DAT_101e45910 = 0xff282828;
  DAT_101e45914 = 0xfff0f0f0;
  DAT_101e45918 = 0xffa4781e;
  DAT_101e4591c = 0xffa6654b;
  DAT_101e45920 = 0xff93435b;
  DAT_101e45924 = 0xff387f9c;
  DAT_101e45928 = 0xffa3781e;
  DAT_101e4592c = 0xffffd18a;
  DAT_101e45930 = 0xffff61f7;
  DAT_101e45934 = 0xff5de1f2;
  DAT_101e45938 = 0xff80eaff;
  DAT_101e4593c = 0xff32e00e;
  DAT_101e45940 = 0xff5a3c10;
  DAT_101e45944 = 0xff330b03;
  DAT_101e45948 = 0xff33031d;
  DAT_101e4594c = 0xff032433;
  DAT_101e45950 = 0xff9e8e8d;
  DAT_101e45958 = 0x4326000041900000;
  DAT_101e45960 = 0x4326000041c00000;
  DAT_101d23830 = FUN_100644a94("ROLE_SELECTED");
  DAT_101d23834 = FUN_100644a94("BUILD_SELECTED");
  return;
}




long * FUN_1002f2ab8(long *param_1,undefined4 *param_2,ulong param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  string *this;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  void *local_88 [2];
  char local_71;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_1002f3570_10148c1d0;
  plVar1 = puVar6 + 0x17;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x71;
  FUN_1006421a8(plVar4);
  param_1[0x71] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x92) = param_4;
  *(undefined1 *)((long)param_1 + 0x494) = 0;
  FUN_10001549c(local_88,"skins_card_back");
  std::string::operator=((string *)(param_1 + 0x82),(string *)local_88);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x92) = *param_2;
  }
  if ((*(float *)(param_1 + 0x79) != -286.5) || (*(float *)((long)param_1 + 0x3cc) != -379.0)) {
    param_1[0x79] = -0x3c427fff3c70c000;
    FUN_1000200a0(plVar4);
  }
  local_88[0] = (void *)0x0;
  (**(code **)(param_1[0x71] + 0x28))(plVar4,local_88);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar1,1);
  FUN_100642bd8(plVar4,plVar2,1);
  FUN_100642bd8(plVar4,plVar3,1);
  local_88[0] = (void *)0x443d8000440f4000;
  FUN_10064e48c(param_1,local_88);
  fVar10 = DAT_101dc1cb8._4_4_;
  fVar9 = (float)DAT_101dc1cb8;
  if (3 < *(uint *)(param_1 + 0x92)) {
    fVar8 = 130.0;
    goto LAB_1002f2da0;
  }
  this = (string *)(param_1 + 0x85);
  switch(*(uint *)(param_1 + 0x92)) {
  case 0:
    FUN_10001549c(local_88,"blueprint_frame_rare");
    std::string::operator=(this,(string *)local_88);
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
    lVar11 = -0x3d6bffff3dc40000;
    break;
  case 1:
    FUN_10001549c(local_88,"blueprint_frame_rare");
    std::string::operator=(this,(string *)local_88);
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
    lVar11 = NEON_fmov(0xc1800000,4);
    fVar10 = 89.0;
    fVar9 = 90.0;
    break;
  case 2:
    FUN_10001549c(local_88,"blueprint_frame_epic");
    std::string::operator=(this,(string *)local_88);
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
    lVar11 = -0x3e7fffff3e700000;
    fVar10 = 70.0;
    fVar9 = 72.0;
    break;
  case 3:
    FUN_10001549c(local_88,"blueprint_frame_legendary");
    std::string::operator=(this,(string *)local_88);
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
    lVar11 = -0x3e57ffff3e400000;
    fVar9 = 62.0;
    fVar8 = 120.0;
    fVar10 = 62.0;
    goto LAB_1002f2d9c;
  }
  fVar8 = 130.0;
LAB_1002f2d9c:
  param_1[0x91] = lVar11;
LAB_1002f2da0:
  FUN_100652e40(plVar2,0);
  FUN_100652e40(plVar1,0);
  FUN_1002f2f8c(param_1,param_2);
  if ((*(float *)(param_1 + 0x1f) != 286.5) || (*(float *)((long)param_1 + 0xfc) != fVar8)) {
    *(undefined4 *)(param_1 + 0x1f) = 0x438f4000;
    *(float *)((long)param_1 + 0xfc) = fVar8;
    FUN_1000200a0(plVar1);
  }
  local_88[0] = (void *)0x3f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,local_88);
  FUN_10064e47c(0x43b90000,0x43b90000,plVar1);
  uVar7 = FUN_1004d2538(*(undefined8 *)(param_2 + 4));
  if ((uVar7 & 1) == 0) {
    FUN_10001549c(local_88,"skins_card_hero_");
    std::string::operator=((string *)(param_1 + 0x8e),(string *)local_88);
    if (local_71 < '\0') {
      operator_delete(local_88[0]);
    }
    std::string::append((char *)(param_1 + 0x8e));
    if ((*(float *)(param_1 + 0x5b) != fVar9) || (*(float *)((long)param_1 + 0x2dc) != fVar10)) {
      *(float *)(param_1 + 0x5b) = fVar9;
      *(float *)((long)param_1 + 0x2dc) = fVar10;
      FUN_1000200a0(plVar3);
    }
    if ((*(float *)(param_1 + 0x5d) != 0.5) || (*(float *)((long)param_1 + 0x2ec) != 0.5)) {
      param_1[0x5d] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar3);
    }
    FUN_100652e40(plVar3,0);
    uVar5 = *(uint *)((long)param_1 + 0x31c);
    if ((uVar5 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x31c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x3300;
      FUN_1000200a0(plVar3);
    }
  }
  if ((*(float *)(param_1 + 0x3d) != *(float *)(param_1 + 0x91)) ||
     (*(float *)((long)param_1 + 0x1ec) != *(float *)((long)param_1 + 0x48c))) {
    param_1[0x3d] = param_1[0x91];
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0x3e) != 2.0) || (*(float *)((long)param_1 + 500) != 2.0)) {
    param_1[0x3e] = 0x4000000040000000;
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




void FUN_1002f2f8c(long param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  void *local_d0 [2];
  char local_b9;
  void *local_b8 [2];
  char local_a1;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  if (param_2 == (int *)0x0) goto LAB_1002f31e8;
  iVar2 = FUN_1004d2524(*(undefined8 *)(param_2 + 0x10));
  if (iVar2 != 0) {
    FUN_1004d2698(local_b8,"build://%s");
    FUN_10001549c(local_d0,local_b8);
    std::string::operator=((string *)(param_1 + 0x440),(string *)local_d0);
    if (local_b9 < '\0') {
      operator_delete(local_d0[0]);
    }
  }
  iVar2 = FUN_1004d2524(*(undefined8 *)(param_2 + 0x12));
  if (iVar2 != 0) {
    FUN_10001549c(local_b8,*(undefined8 *)(param_2 + 0x12));
    std::string::operator=((string *)(param_1 + 0x458),(string *)local_b8);
    if (local_a1 < '\0') {
      operator_delete(local_b8[0]);
    }
  }
  if (*param_2 == 0) {
    if (*(char *)(param_1 + 0x457) < '\0') {
      if (*(long *)(param_1 + 0x448) == 0) goto LAB_1002f3108;
    }
    else if (*(char *)(param_1 + 0x457) == '\0') {
LAB_1002f3108:
      FUN_1004d2698(local_b8,"build://Common_%02d.png");
      FUN_10001549c(local_d0,local_b8);
      std::string::operator=((string *)(param_1 + 0x440),(string *)local_d0);
      if (local_b9 < '\0') {
        operator_delete(local_d0[0]);
      }
    }
    cVar1 = *(char *)(param_1 + 0x46f);
    if (-1 < cVar1) goto joined_r0x0001002f3174;
    lVar3 = *(long *)(param_1 + 0x460);
joined_r0x0001002f3180:
    if (lVar3 != 0) goto LAB_1002f31e8;
  }
  else {
    if (*(char *)(param_1 + 0x457) < '\0') {
      if (*(long *)(param_1 + 0x448) == 0) goto LAB_1002f3074;
    }
    else if (*(char *)(param_1 + 0x457) == '\0') {
LAB_1002f3074:
      FUN_1004d2698(local_b8,"build://%s.png");
      FUN_10001549c(local_d0,local_b8);
      std::string::operator=((string *)(param_1 + 0x440),(string *)local_d0);
      if (local_b9 < '\0') {
        operator_delete(local_d0[0]);
      }
    }
    cVar1 = *(char *)(param_1 + 0x46f);
    if (cVar1 < '\0') {
      lVar3 = *(long *)(param_1 + 0x460);
      goto joined_r0x0001002f3180;
    }
joined_r0x0001002f3174:
    if (cVar1 != '\0') goto LAB_1002f31e8;
  }
  FUN_1004d2698(local_b8,"card_image_%d");
  FUN_10001549c(local_d0,local_b8);
  std::string::operator=((string *)(param_1 + 0x458),(string *)local_d0);
  if (local_b9 < '\0') {
    operator_delete(local_d0[0]);
  }
LAB_1002f31e8:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




long * thunk_FUN_1002f2ab8(long *param_1,undefined4 *param_2,ulong param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  string *this;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  long lVar11;
  void *apvStack_88 [2];
  char cStack_71;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_1002f3570_10148c1d0;
  plVar1 = puVar6 + 0x17;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x53;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x71;
  FUN_1006421a8(plVar4);
  param_1[0x71] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x90] = 0;
  *(undefined4 *)(param_1 + 0x92) = param_4;
  *(undefined1 *)((long)param_1 + 0x494) = 0;
  FUN_10001549c(apvStack_88,"skins_card_back");
  std::string::operator=((string *)(param_1 + 0x82),(string *)apvStack_88);
  if (cStack_71 < '\0') {
    operator_delete(apvStack_88[0]);
  }
  if ((param_3 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x92) = *param_2;
  }
  if ((*(float *)(param_1 + 0x79) != -286.5) || (*(float *)((long)param_1 + 0x3cc) != -379.0)) {
    param_1[0x79] = -0x3c427fff3c70c000;
    FUN_1000200a0(plVar4);
  }
  apvStack_88[0] = (void *)0x0;
  (**(code **)(param_1[0x71] + 0x28))(plVar4,apvStack_88);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar1,1);
  FUN_100642bd8(plVar4,plVar2,1);
  FUN_100642bd8(plVar4,plVar3,1);
  apvStack_88[0] = (void *)0x443d8000440f4000;
  FUN_10064e48c(param_1,apvStack_88);
  fVar10 = DAT_101dc1cb8._4_4_;
  fVar9 = (float)DAT_101dc1cb8;
  if (3 < *(uint *)(param_1 + 0x92)) {
    fVar8 = 130.0;
    goto LAB_1002f2da0;
  }
  this = (string *)(param_1 + 0x85);
  switch(*(uint *)(param_1 + 0x92)) {
  case 0:
    FUN_10001549c(apvStack_88,"blueprint_frame_rare");
    std::string::operator=(this,(string *)apvStack_88);
    if (cStack_71 < '\0') {
      operator_delete(apvStack_88[0]);
    }
    lVar11 = -0x3d6bffff3dc40000;
    break;
  case 1:
    FUN_10001549c(apvStack_88,"blueprint_frame_rare");
    std::string::operator=(this,(string *)apvStack_88);
    if (cStack_71 < '\0') {
      operator_delete(apvStack_88[0]);
    }
    lVar11 = NEON_fmov(0xc1800000,4);
    fVar10 = 89.0;
    fVar9 = 90.0;
    break;
  case 2:
    FUN_10001549c(apvStack_88,"blueprint_frame_epic");
    std::string::operator=(this,(string *)apvStack_88);
    if (cStack_71 < '\0') {
      operator_delete(apvStack_88[0]);
    }
    lVar11 = -0x3e7fffff3e700000;
    fVar10 = 70.0;
    fVar9 = 72.0;
    break;
  case 3:
    FUN_10001549c(apvStack_88,"blueprint_frame_legendary");
    std::string::operator=(this,(string *)apvStack_88);
    if (cStack_71 < '\0') {
      operator_delete(apvStack_88[0]);
    }
    lVar11 = -0x3e57ffff3e400000;
    fVar9 = 62.0;
    fVar8 = 120.0;
    fVar10 = 62.0;
    goto LAB_1002f2d9c;
  }
  fVar8 = 130.0;
LAB_1002f2d9c:
  param_1[0x91] = lVar11;
LAB_1002f2da0:
  FUN_100652e40(plVar2,0);
  FUN_100652e40(plVar1,0);
  FUN_1002f2f8c(param_1,param_2);
  if ((*(float *)(param_1 + 0x1f) != 286.5) || (*(float *)((long)param_1 + 0xfc) != fVar8)) {
    *(undefined4 *)(param_1 + 0x1f) = 0x438f4000;
    *(float *)((long)param_1 + 0xfc) = fVar8;
    FUN_1000200a0(plVar1);
  }
  apvStack_88[0] = (void *)0x3f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,apvStack_88);
  FUN_10064e47c(0x43b90000,0x43b90000,plVar1);
  uVar7 = FUN_1004d2538(*(undefined8 *)(param_2 + 4));
  if ((uVar7 & 1) == 0) {
    FUN_10001549c(apvStack_88,"skins_card_hero_");
    std::string::operator=((string *)(param_1 + 0x8e),(string *)apvStack_88);
    if (cStack_71 < '\0') {
      operator_delete(apvStack_88[0]);
    }
    std::string::append((char *)(param_1 + 0x8e));
    if ((*(float *)(param_1 + 0x5b) != fVar9) || (*(float *)((long)param_1 + 0x2dc) != fVar10)) {
      *(float *)(param_1 + 0x5b) = fVar9;
      *(float *)((long)param_1 + 0x2dc) = fVar10;
      FUN_1000200a0(plVar3);
    }
    if ((*(float *)(param_1 + 0x5d) != 0.5) || (*(float *)((long)param_1 + 0x2ec) != 0.5)) {
      param_1[0x5d] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar3);
    }
    FUN_100652e40(plVar3,0);
    uVar5 = *(uint *)((long)param_1 + 0x31c);
    if ((uVar5 & 0x7f80) != 0x3300) {
      *(uint *)((long)param_1 + 0x31c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x3300;
      FUN_1000200a0(plVar3);
    }
  }
  if ((*(float *)(param_1 + 0x3d) != *(float *)(param_1 + 0x91)) ||
     (*(float *)((long)param_1 + 0x1ec) != *(float *)((long)param_1 + 0x48c))) {
    param_1[0x3d] = param_1[0x91];
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_1 + 0x3e) != 2.0) || (*(float *)((long)param_1 + 500) != 2.0)) {
    param_1[0x3e] = 0x4000000040000000;
    FUN_1000200a0(plVar2);
  }
  return param_1;
}




void FUN_1002f321c(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  size_t sVar14;
  size_t sVar15;
  byte bVar16;
  
  FUN_1002f3474();
  *(undefined1 *)(param_1 + 0x494) = 1;
  cVar5 = *(char *)(param_1 + 0x457);
  if (cVar5 < '\0') {
    if (*(long *)(param_1 + 0x448) != 0) goto LAB_1002f3264;
  }
  else if (cVar5 != '\0') {
LAB_1002f3264:
    cVar6 = *(char *)(param_1 + 0x46f);
    if (cVar6 < '\0') {
      if (*(long *)(param_1 + 0x460) != 0) goto LAB_1002f3284;
    }
    else if (cVar6 != '\0') {
LAB_1002f3284:
      plVar8 = (long *)(param_1 + 0x440);
      if (cVar5 < '\0') {
        plVar8 = (long *)*plVar8;
      }
      plVar9 = (long *)(param_1 + 0x458);
      if (cVar6 < '\0') {
        plVar9 = (long *)*plVar9;
      }
      FUN_100652cac(param_1 + 0xb8,plVar8,plVar9);
    }
  }
  bVar16 = DAT_101d911a8._7_1_;
  sVar15 = DAT_101d911a0;
  plVar8 = (long *)(param_1 + 0x428);
  bVar4 = *(byte *)(param_1 + 0x43f);
  uVar10 = (ulong)bVar4;
  sVar2 = *(size_t *)(param_1 + 0x430);
  if (-1 < (char)bVar4) {
    sVar2 = uVar10;
  }
  sVar14 = (size_t)DAT_101d911a8._7_1_;
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = sVar14;
  }
  if (sVar2 == sVar1) {
    plVar13 = (long *)*plVar8;
    plVar9 = plVar13;
    if (-1 < (char)bVar4) {
      plVar9 = plVar8;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(plVar9,pbVar12,sVar2), plVar8 = plVar13, iVar7 != 0))
      goto LAB_1002f3374;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar12 == ((uint)plVar13 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0x429);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_1002f3388;
          bVar3 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar3 == *pbVar12);
        goto LAB_1002f333c;
      }
      goto LAB_1002f3374;
    }
  }
  else {
LAB_1002f333c:
    if ((char)bVar4 < '\0') {
      plVar8 = (long *)*plVar8;
    }
LAB_1002f3374:
    FUN_100652cac(param_1 + 0x1a8,PTR_s_build___MenuSkinsHeroesBlueprint_101854a48,plVar8);
    sVar14 = (size_t)DAT_101d911a8._7_1_;
    sVar15 = DAT_101d911a0;
    bVar16 = DAT_101d911a8._7_1_;
  }
LAB_1002f3388:
  plVar8 = (long *)(param_1 + 0x470);
  bVar4 = *(byte *)(param_1 + 0x487);
  uVar10 = (ulong)bVar4;
  sVar2 = *(size_t *)(param_1 + 0x478);
  if (-1 < (char)bVar4) {
    sVar2 = uVar10;
  }
  if (-1 < (char)bVar16) {
    sVar15 = sVar14;
  }
  if (sVar2 == sVar15) {
    plVar13 = (long *)*plVar8;
    plVar9 = plVar13;
    if (-1 < (char)bVar4) {
      plVar9 = plVar8;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)bVar16) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if (sVar2 == 0) {
        return;
      }
      iVar7 = _memcmp(plVar9,pbVar12,sVar2);
      plVar8 = plVar13;
      if (iVar7 == 0) {
        return;
      }
      goto LAB_1002f3458;
    }
    if (sVar2 == 0) {
      return;
    }
    if ((uint)*pbVar12 != ((uint)plVar13 & 0xff)) goto LAB_1002f3458;
    pbVar11 = (byte *)(param_1 + 0x471);
    do {
      uVar10 = uVar10 - 1;
      pbVar12 = pbVar12 + 1;
      if (uVar10 == 0) {
        return;
      }
      bVar16 = *pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (bVar16 == *pbVar12);
  }
  if ((char)bVar4 < '\0') {
    plVar8 = (long *)*plVar8;
  }
LAB_1002f3458:
  FUN_100652cac(param_1 + 0x298,PTR_s_build___MenuSkinsHeroesBlueprint_101854a48,plVar8);
  return;
}




void FUN_1002f3474(long param_1)

{
  *(undefined1 *)(param_1 + 0x494) = 0;
  if (*(long *)(param_1 + 0x188) != 0) {
    FUN_100652d8c(param_1 + 0xb8);
  }
  if (*(long *)(param_1 + 0x278) != 0) {
    FUN_100652d8c(param_1 + 0x1a8);
  }
  if (*(long *)(param_1 + 0x368) != 0) {
    FUN_100652d8c(param_1 + 0x298);
    return;
  }
  return;
}




void FUN_1002f34cc(long param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0x3f800000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  FUN_100652e14(uVar2,param_1 + 0x1a8);
  FUN_100652e14(uVar2,param_1 + 0x298);
  FUN_100652e14(uVar2,param_1 + 0xb8);
  uVar1 = *(uint *)(param_1 + 0x84);
  if ((uVar1 & 0x7f80) == 0x6600) {
    return;
  }
  *(uint *)(param_1 + 0x84) = uVar1 & 0xffff8000 | uVar1 & 0x7f | 0x6600;
  FUN_1000200a0(param_1);
  return;
}




void thunk_FUN_1002f3570(void)

{
  FUN_1002f3570();
  return;
}




void FUN_1002f355c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002f3570();
  operator_delete(pvVar1);
  return;
}




void FUN_1002f3570(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002f3570_10148c1d0;
  if (*(char *)((long)param_1 + 0x487) < '\0') {
    operator_delete((void *)param_1[0x8e]);
  }
  if (*(char *)((long)param_1 + 0x46f) < '\0') {
    operator_delete((void *)param_1[0x8b]);
  }
  if (*(char *)((long)param_1 + 0x457) < '\0') {
    operator_delete((void *)param_1[0x88]);
  }
  if (*(char *)((long)param_1 + 0x43f) < '\0') {
    operator_delete((void *)param_1[0x85]);
  }
  if (*(char *)((long)param_1 + 0x427) < '\0') {
    operator_delete((void *)param_1[0x82]);
  }
  FUN_10064221c(param_1 + 0x71);
  param_1[0x53] = &PTR_FUN_1014a7108;
  param_1[0x6a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x6d);
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




long * FUN_1002f3660(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *local_68;
  
  puVar9 = (undefined8 *)FUN_10064e20c();
  *puVar9 = &PTR_thunk_FUN_1002f7c44_10148c318;
  thunk_FUN_1001c43fc(puVar9 + 0x17);
  plVar1 = param_1 + 0x94;
  FUN_1006421a8(plVar1);
  param_1[0x94] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar2 = param_1 + 0xa5;
  thunk_FUN_1001bd4e0(plVar2,0);
  plVar3 = param_1 + 0x13b;
  FUN_1006421a8(plVar3);
  param_1[0x13b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar4 = param_1 + 0x14c;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x16a;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 400;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0x1ae;
  thunk_FUN_100650e64(plVar7);
  (**(code **)(*param_1 + 0x78))(param_1,puVar9 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar1,plVar3,1);
  FUN_100642bd8(plVar3,plVar4,1);
  FUN_100642bd8(plVar3,plVar5,1);
  FUN_100642bd8(plVar3,plVar6,1);
  FUN_100642bd8(plVar3,plVar7,1);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xfffffffb;
  local_68 = &DAT_3f0000003f000000;
  FUN_1001bd8b4(plVar2,&local_68);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"opal_icon_small");
  if ((*(float *)(param_1 + 0x155) != 2.5) || (*(float *)((long)param_1 + 0xaac) != 2.5)) {
    lVar11 = NEON_fmov(0x40200000,4);
    param_1[0x155] = lVar11;
    FUN_1000200a0(plVar4);
  }
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_100652cac(plVar6,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar8 = *(uint *)((long)param_1 + 0xd04);
  if ((uVar8 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xd04) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2600;
    FUN_1000200a0(plVar6);
  }
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0);
  FUN_100651700(plVar7,3);
  uVar10 = FUN_1004e0150("MENU_CARDS_DUPLICATE_BONUS_LABEL",0);
  FUN_1006513c0(plVar7,uVar10);
  FUN_1002f38b0(param_1);
  return param_1;
}




void FUN_1002f38b0(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 *local_58;
  
  lVar1 = param_3 + 0xa60;
  fVar4 = (float)FUN_10065317c(lVar1);
  fVar8 = param_2 * 0.5;
  bVar3 = false;
  if ((*(float *)(param_3 + 0xaa0) == 0.0) &&
     (bVar3 = false, !NAN(*(float *)(param_3 + 0xaa4)) && !NAN(fVar8))) {
    bVar3 = *(float *)(param_3 + 0xaa4) == fVar8;
  }
  if (!bVar3) {
    *(undefined4 *)(param_3 + 0xaa0) = 0;
    *(float *)(param_3 + 0xaa4) = fVar8;
    FUN_1000200a0(lVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0xa60) + 0x28))(lVar1,&local_58);
  fVar6 = *(float *)(param_3 + 0xaa4) + param_2 * 0.25;
  bVar3 = false;
  if ((*(float *)(param_3 + 0xb90) == fVar4 * 0.25) &&
     (bVar3 = false, !NAN(*(float *)(param_3 + 0xb94)) && !NAN(fVar6))) {
    bVar3 = *(float *)(param_3 + 0xb94) == fVar6;
  }
  if (!bVar3) {
    *(float *)(param_3 + 0xb90) = fVar4 * 0.25;
    *(float *)(param_3 + 0xb94) = fVar6;
    FUN_1000200a0(param_3 + 0xb50);
  }
  local_58 = (undefined1 *)0x3f00000000000000;
  (**(code **)(*(long *)(param_3 + 0xb50) + 0x28))(param_3 + 0xb50,&local_58);
  fVar7 = *(float *)(param_3 + 0xaa4);
  lVar1 = param_3 + 0xc80;
  FUN_100652e60(lVar1);
  fVar6 = fVar8 + 15.0 + fVar7 + fVar6 * 0.5;
  lVar2 = param_3 + 0xd70;
  FUN_100651184(lVar2);
  fVar8 = 2.0;
  FUN_10064e47c(fVar4 * 0.95 + 28.5,lVar1);
  if ((*(float *)(param_3 + 0xcc0) != 0.0) || (*(float *)(param_3 + 0xcc4) != fVar6)) {
    *(undefined4 *)(param_3 + 0xcc0) = 0;
    *(float *)(param_3 + 0xcc4) = fVar6;
    FUN_1000200a0(lVar1);
  }
  local_58 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_3 + 0xc80) + 0x28))(lVar1,&local_58);
  FUN_100652e60(lVar1);
  fVar4 = fVar6 + 15.0 + fVar8 * 0.5;
  fVar8 = *(float *)(param_3 + 0xdb0);
  if ((fVar8 != 0.0) || (fVar8 = *(float *)(param_3 + 0xdb4), fVar8 != fVar4)) {
    *(undefined4 *)(param_3 + 0xdb0) = 0;
    *(float *)(param_3 + 0xdb4) = fVar4;
    FUN_1000200a0(lVar2);
  }
  local_58 = (undefined1 *)0x0;
  (**(code **)(*(long *)(param_3 + 0xd70) + 0x28))(lVar2,&local_58);
  lVar1 = param_3 + 0x9d8;
  FUN_1006425d0(lVar1,1,0,1,1);
  fVar4 = *(float *)(param_3 + 0xa1c);
  if (fVar4 != fVar8 * -0.5) {
    *(float *)(param_3 + 0xa1c) = fVar8 * -0.5;
    FUN_1000200a0(lVar1);
  }
  uVar5 = FUN_1006425d0(lVar1,1,0,1,1);
  FUN_1006425d0(lVar1,1,0,1,1);
  FUN_10064e47c(uVar5,fVar4 + 30.0,param_3 + 0x528);
  return;
}




void FUN_1002f3b18(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  byte bVar7;
  void *local_60 [2];
  char local_49;
  undefined8 **local_48;
  void *local_40;
  long local_38;
  
  bVar7 = *(byte *)(param_2 + 0x17);
  uVar5 = (ulong)bVar7;
  uVar6 = *(ulong *)(param_2 + 8);
  uVar1 = uVar6;
  if (-1 < (char)bVar7) {
    uVar1 = uVar5;
  }
  if (uVar1 == 0) goto LAB_1002f3e48;
  local_48 = (undefined8 ***)0x0;
  local_40 = (void *)0x0;
  local_38 = 0;
  if (uVar1 == 0x15) {
    iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d2526);
    if (iVar3 != 0) {
      bVar7 = *(byte *)(param_2 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 8);
      goto LAB_1002f3b8c;
    }
    pcVar4 = "essence_icon_small";
LAB_1002f3df8:
    FUN_10001549c(local_60,pcVar4);
    std::string::operator=((string *)&local_48,(string *)local_60);
    if (local_49 < '\0') {
      operator_delete(local_60[0]);
    }
  }
  else {
LAB_1002f3b8c:
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x19) {
      iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d2481);
      if (iVar3 != 0) {
        bVar7 = *(byte *)(param_2 + 0x17);
        uVar5 = (ulong)bVar7;
        uVar6 = *(ulong *)(param_2 + 8);
        goto LAB_1002f3bcc;
      }
LAB_1002f3dcc:
      pcVar4 = "glory_icon_small";
      goto LAB_1002f3df8;
    }
LAB_1002f3bcc:
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x1a) {
      iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d249b);
      if (iVar3 == 0) goto LAB_1002f3dcc;
      bVar7 = *(byte *)(param_2 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 8);
    }
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x19) {
      iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d24b6);
      if (iVar3 == 0) goto LAB_1002f3dcc;
      bVar7 = *(byte *)(param_2 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 8);
    }
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x13) {
      iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013ee900);
      if (iVar3 == 0) goto LAB_1002f3dcc;
      bVar7 = *(byte *)(param_2 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 8);
    }
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x12) {
      iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d2541);
      if (iVar3 == 0) {
        pcVar4 = "opal_icon_small";
        goto LAB_1002f3df8;
      }
      bVar7 = *(byte *)(param_2 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 8);
    }
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x17) {
      iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d2506);
      if (iVar3 != 0) {
        bVar7 = *(byte *)(param_2 + 0x17);
        uVar5 = (ulong)bVar7;
        uVar6 = *(ulong *)(param_2 + 8);
        goto LAB_1002f3d0c;
      }
LAB_1002f3de4:
      pcVar4 = "ice_icon_small";
      goto LAB_1002f3df8;
    }
LAB_1002f3d0c:
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x18) {
      iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d24ed);
      if (iVar3 == 0) goto LAB_1002f3de4;
      bVar7 = *(byte *)(param_2 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 8);
    }
    uVar1 = uVar6;
    if (-1 < (char)bVar7) {
      uVar1 = uVar5;
    }
    if (uVar1 == 0x17) {
      iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d24d5);
      if (iVar3 == 0) goto LAB_1002f3de4;
      bVar7 = *(byte *)(param_2 + 0x17);
      uVar5 = (ulong)bVar7;
      uVar6 = *(ulong *)(param_2 + 8);
    }
    if (-1 < (char)bVar7) {
      uVar6 = uVar5;
    }
    if ((uVar6 == 0x10) &&
       (iVar3 = std::string::compare(param_2,0,(char *)0xffffffffffffffff,0x1013d2653), iVar3 == 0))
    {
      pcVar4 = "generic_xp_icon";
      goto LAB_1002f3df8;
    }
  }
  pppuVar2 = (undefined8 ***)local_48;
  if (-1 < local_38) {
    pppuVar2 = &local_48;
  }
  FUN_100652cdc(param_1 + 0xa60,pppuVar2);
  if (local_38 < 0) {
    operator_delete(local_48);
  }
LAB_1002f3e48:
  FUN_1004e313c(&local_48);
  FUN_1004e38ac(&local_48,"+%d");
  FUN_1006513c0(param_1 + 0xb50,&local_48);
  FUN_1002f38b0(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
  }
  return;
}




void FUN_1002f3e98(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  ushort uVar6;
  ushort *puVar7;
  float fVar8;
  
  if (param_3 != 0) {
    *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) | 4;
    lVar1 = param_2 + 0x4a0;
    FUN_100642324(lVar1);
    uVar2 = *(uint *)(param_2 + 0x524);
    *(uint *)(param_2 + 0x524) = uVar2 | 4;
    if ((uVar2 & 0x7f80) != 0) {
      *(uint *)(param_2 + 0x524) = uVar2 & 0xffff807f | 4;
      FUN_1000200a0(lVar1);
    }
    fVar8 = (float)param_1;
    if (0.0 < fVar8) {
      uVar5 = FUN_10064081c(param_1);
      FUN_100642b14(lVar1,uVar5);
    }
    bVar4 = false;
    if ((*(float *)(param_2 + 0x4e8) == 6.0) && (bVar4 = false, !NAN(*(float *)(param_2 + 0x4ec))))
    {
      bVar4 = *(float *)(param_2 + 0x4ec) == 6.0;
    }
    if (!bVar4) {
      uVar5 = NEON_fmov(0x40c00000,4);
      *(undefined8 *)(param_2 + 0x4e8) = uVar5;
      FUN_1000200a0(lVar1);
    }
    uVar5 = FUN_100640db8(0x3f800000,0x3f800000,0x3ee66666,FUN_10001f4c4);
    FUN_100640840(0x3f800000,0x3ee66666,FUN_10001f4c4);
    lVar3 = DAT_101dbd2f8;
    uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
      *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
      FUN_10063f1bc(puVar7);
      *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    }
    FUN_10063f2a4(puVar7,uVar5);
    FUN_100642b14(lVar1,puVar7);
    uVar5 = FUN_100640db8(0x3f59999a,0x3f59999a,0x3d99999a,FUN_10001f4c4);
    FUN_100642b14(lVar1,uVar5);
    uVar5 = FUN_100640db8(0x3f800000,0x3f800000,0x3e028f5d,FUN_10001f4c4);
    FUN_100642b14(lVar1,uVar5);
    lVar1 = param_2 + 0xb8;
    FUN_100642324(lVar1);
    *(uint *)(param_2 + 0x13c) = *(uint *)(param_2 + 0x13c) & 0xfffffffb;
    uVar5 = FUN_10064081c(fVar8 + 0.39999998);
    FUN_100642b14(lVar1,uVar5);
    lVar3 = DAT_101dbd2f8;
    uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    puVar7 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar7;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar7);
    *(undefined ***)puVar7 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
    FUN_100642b14(lVar1,puVar7);
    FUN_1001c4648(fVar8 + -2.9802322e-08,lVar1);
    return;
  }
  *(uint *)(param_2 + 0x84) = *(uint *)(param_2 + 0x84) & 0xfffffffb;
  return;
}




long FUN_1002f4164(long param_1,undefined4 *param_2,byte param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001a7cf4();
  *puVar1 = &PTR_thunk_FUN_1002f7860_10148c460;
  FUN_1001aa1d4(puVar1 + 0x76);
  thunk_FUN_100182684(param_1 + 0x590,0);
  thunk_FUN_100182684(param_1 + 0x2470,0);
  FUN_1006421a8(param_1 + 0x4350);
  *(undefined ***)(param_1 + 0x4350) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x43d8);
  FUN_1006421a8(param_1 + 0x4508);
  *(undefined ***)(param_1 + 0x4508) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x4590);
  thunk_FUN_100650e64(param_1 + 0x46c0);
  thunk_FUN_100650e64(param_1 + 0x47f0);
  FUN_1006421a8(param_1 + 0x4920);
  *(undefined ***)(param_1 + 0x4920) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x49a8);
  *(undefined ***)(param_1 + 0x49a8) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x4a30);
  thunk_FUN_100650e64(param_1 + 0x4b60);
  thunk_FUN_100650e64(param_1 + 0x4c90);
  thunk_FUN_100650e64(param_1 + 0x4dc0);
  thunk_FUN_100652c08(param_1 + 0x4ef0);
  thunk_FUN_100652c08(param_1 + 0x4fe0);
  thunk_FUN_100652c08(param_1 + 0x50d0);
  thunk_FUN_100652c08(param_1 + 0x51c0);
  thunk_FUN_100652c08(param_1 + 0x52b0);
  thunk_FUN_100652c08(param_1 + 0x53a0);
  thunk_FUN_100652c08(param_1 + 0x5490);
  FUN_100657568(param_1 + 0x5580);
  FUN_100657568(param_1 + 0x5590);
  FUN_100657568(param_1 + 0x55a0);
  thunk_FUN_100652c08(param_1 + 0x55b0);
  FUN_1002f3660(param_1 + 0x56a0);
  thunk_FUN_100652c08(param_1 + 0x6540);
  thunk_FUN_100652c08(param_1 + 0x6630);
  *(undefined4 **)(param_1 + 0x6720) = param_2;
  *(undefined8 *)(param_1 + 0x6730) = 0;
  *(undefined8 *)(param_1 + 0x6728) = 0;
  *(undefined4 *)(param_1 + 0x6738) = DAT_101dc0b88;
  *(undefined2 *)(param_1 + 0x6744) = 0;
  *(byte *)(param_1 + 0x6746) = param_3;
  if ((param_3 & 1) == 0) {
    param_4 = *param_2;
  }
  *(undefined4 *)(param_1 + 0x6740) = param_4;
  FUN_1006575f4(param_1 + 0x55a0,PTR_s_build___MenuSkinsHeroesBlueprint_101854a48);
  FUN_1006575f4(param_1 + 0x5580,PTR_s_build___MenuSkinsHeroesBlueprint_101854a48);
  FUN_1002f43a0(param_1);
  FUN_1002f4548(param_1);
  return param_1;
}




void FUN_1002f43a0(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = FUN_100345b94();
  uVar2 = FUN_10034c450(uVar2,"*LootCardRep3D*");
  FUN_1001a812c(param_1,uVar2);
  local_40 = DAT_101dc1cb8;
  uStack_38 = DAT_101dc1cb8;
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_1004d2524("heroArt_repeat");
  uVar2 = FUN_100015208("heroArt_repeat",uVar1,0x12345678);
  FUN_1010af9d0(uVar3,uVar2,&uStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_1004d2524("heroArt_offset");
  uVar2 = FUN_100015208("heroArt_offset",uVar1,0x12345678);
  FUN_1010af9d0(uVar3,uVar2,&local_40);
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_1004d2524("heroArt_file");
  uVar2 = FUN_100015208("heroArt_file",uVar1,0x12345678);
  FUN_1010afab8(uVar3,uVar2,*(undefined8 *)(param_1 + 0x5580));
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_1004d2524("cardArt_file");
  uVar2 = FUN_100015208("cardArt_file",uVar1,0x12345678);
  FUN_1010afab8(uVar3,uVar2,*(undefined8 *)(param_1 + 0x5580));
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_1004d2524("cardArt_repeat");
  uVar2 = FUN_100015208("cardArt_repeat",uVar1,0x12345678);
  FUN_1010af9d0(uVar3,uVar2,&uStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_1004d2524("cardArt_offset");
  uVar2 = FUN_100015208("cardArt_offset",uVar1,0x12345678);
  FUN_1010af9d0(uVar3,uVar2,&local_40);
  return;
}




void FUN_1002f4548(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *****pppppuVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  bool bVar12;
  ulong uVar13;
  char *pcVar14;
  undefined8 uVar15;
  long lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_10c;
  undefined8 ****local_100;
  ulong local_f8;
  byte local_e9;
  undefined4 local_e4;
  float local_e0;
  undefined4 uStack_dc;
  code *local_d8;
  long *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  
  FUN_100641464(&uStack_dc,&local_e0);
  fVar11 = local_e0;
  plVar1 = param_1 + 0xcc6;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar2 = param_1 + 0x8a1;
  uVar13 = FUN_100642d08(plVar2);
  if ((uVar13 & 1) == 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
    FUN_100642bd8(plVar2,param_1 + 0x9de,1);
    FUN_100642bd8(plVar2,param_1 + 0x9fc,1);
    FUN_100642bd8(plVar2,param_1 + 0x8d8,1);
    FUN_100642bd8(plVar2,param_1 + 0x8b2,1);
    FUN_100642bd8(plVar2,param_1 + 0x8fe,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xad4,1);
  plVar3 = param_1 + 0xa56;
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  if (*(char *)((long)param_1 + 0x6746) != '\0') {
    plVar4 = param_1 + 0x924;
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    plVar5 = param_1 + 0x935;
    FUN_100642bd8(plVar4,plVar5,1);
    FUN_100642bd8(plVar5,param_1 + 0x76,1);
    FUN_100642bd8(plVar5,param_1 + 0x96c,1);
    FUN_100642bd8(plVar4,param_1 + 0x946,1);
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xca8,1);
    plVar4 = param_1 + 0xb2;
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    FUN_100642bd8(plVar4,param_1 + 0xa1a,1);
    FUN_100642bd8(plVar4,param_1 + 0x992,1);
    (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xa74,1);
    plVar4 = param_1 + 0x86a;
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
    FUN_100642bd8(plVar4,param_1 + 0x87b,1);
    plVar5 = param_1 + 0x48e;
    FUN_100642bd8(plVar4,plVar5,1);
    FUN_100642bd8(plVar5,param_1 + 0xa38,1);
    FUN_100642bd8(plVar5,param_1 + 0x9b8,1);
    FUN_100642bd8(plVar4,param_1 + 0xa92,1);
  }
  fVar22 = fVar11 * 0.182763 + 274.0;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_10064e47c(0x44160000,0x442f0000,plVar1);
  fVar18 = fVar11 * -0.012087501;
  bVar12 = false;
  if ((*(float *)(param_1 + 0xcce) == fVar22) &&
     (bVar12 = false, !NAN(*(float *)((long)param_1 + 0x6674)) && !NAN(fVar18))) {
    bVar12 = *(float *)((long)param_1 + 0x6674) == fVar18;
  }
  if (!bVar12) {
    *(float *)(param_1 + 0xcce) = fVar22;
    *(float *)((long)param_1 + 0x6674) = fVar18;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xcc6] + 0x28))(plVar1,&local_d8);
  *(uint *)((long)param_1 + 0x66b4) = *(uint *)((long)param_1 + 0x66b4) & 0xfffffffb;
  plVar1 = param_1 + 0x9de;
  *(uint *)((long)param_1 + 0x4f74) = *(uint *)((long)param_1 + 0x4f74) | 4;
  *(uint *)((long)param_1 + 0x5064) = *(uint *)((long)param_1 + 0x5064) | 4;
  local_e4 = 0xffffffff;
  fVar18 = 0.0;
  fVar23 = -0.355;
  switch((int)param_1[0xce8]) {
  case 0:
    fVar20 = 280.0;
    fVar18 = 0.0;
    break;
  case 1:
    local_e4 = DAT_101e45a14;
    fVar20 = 280.0;
    goto LAB_1002f4988;
  case 2:
    local_e4 = DAT_101e45a1c;
    fVar20 = 260.0;
LAB_1002f4988:
    uVar17 = 0xb2;
    fVar18 = 0.0;
LAB_1002f49d0:
    local_10c = 0.385;
    fVar19 = 0.26;
    goto LAB_1002f4a20;
  case 3:
    local_e4 = DAT_101e45a24;
    uVar17 = 0xff;
    fVar20 = 255.0;
    fVar23 = -0.33;
    fVar18 = 0.02;
    goto LAB_1002f49d0;
  case 4:
    fVar20 = 260.0;
    fVar18 = 0.03;
    break;
  case 5:
    fVar20 = 280.0;
    fVar23 = -0.348;
    break;
  default:
    local_10c = 0.4375;
    uVar17 = 0xb2;
    fVar20 = 280.0;
    fVar19 = 0.35;
    goto LAB_1002f4a20;
  }
  local_10c = 0.4375;
  uVar17 = 0xb2;
  fVar19 = 0.275;
LAB_1002f4a20:
  plVar4 = param_1 + 0x9fc;
  fVar24 = fVar11 * 0.4835;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  uVar7 = *(uint *)((long)param_1 + 0x4f74);
  if (uVar17 != (uVar7 >> 7 & 0xff)) {
    *(uint *)((long)param_1 + 0x4f74) = uVar7 & 0xffff8000 | uVar7 & 0x7f | uVar17 << 7;
    FUN_1000200a0(plVar1);
  }
  FUN_10064e47c(0x4450c000,0x43140000,plVar1);
  fVar18 = fVar11 * 0.365526 * fVar18;
  fVar23 = fVar23 * fVar24;
  if ((*(float *)(param_1 + 0x9e6) != fVar18) || (*(float *)((long)param_1 + 0x4f34) != fVar23)) {
    *(float *)(param_1 + 0x9e6) = fVar18;
    *(float *)((long)param_1 + 0x4f34) = fVar23;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_d8);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100652dd4(plVar4,&DAT_10115a164,2);
  if ((*(uint *)((long)param_1 + 0x5064) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x5064) = *(uint *)((long)param_1 + 0x5064) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar4);
  }
  FUN_10064e47c(0x44aa0000,0x440c8000,plVar4);
  fVar19 = fVar19 * fVar24;
  if ((*(float *)(param_1 + 0xa04) != 0.0) || (*(float *)((long)param_1 + 0x5024) != fVar19)) {
    *(undefined4 *)(param_1 + 0xa04) = 0;
    *(float *)((long)param_1 + 0x5024) = fVar19;
    FUN_1000200a0(plVar4);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_d8);
  if (*(uint *)(param_1 + 0xce8) < 4) {
    plVar1 = param_1 + 0x8fe;
    FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_60_10184e208,&DAT_10115a168);
    if ((*(float *)(param_1 + 0x907) != 0.5) || (*(float *)((long)param_1 + 0x483c) != 0.5)) {
      param_1[0x907] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    if (*(char *)((long)param_1 + 0x6746) == '\0') {
      pcVar14 = *(char **)(param_1[0xce4] + 0x30);
    }
    else {
      pcVar14 = "MENU_MARKET_DRAWN_CARD_BLUEPRINT";
    }
    uVar15 = FUN_1004e0150(pcVar14,0);
    FUN_1006513c0(plVar1,uVar15);
    FUN_100651700(plVar1,3);
    if ((*(float *)(param_1 + 0x906) != 0.0) || (*(float *)((long)param_1 + 0x4834) != fVar19)) {
      *(undefined4 *)(param_1 + 0x906) = 0;
      *(float *)((long)param_1 + 0x4834) = fVar19;
      FUN_1000200a0(plVar1);
    }
    if ((*(float *)(param_1 + 0x908) != 0.5) || (*(float *)((long)param_1 + 0x4844) != 0.5)) {
      param_1[0x908] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    FUN_100651708(330.0 / *(float *)(param_1 + 0x907),plVar1,1);
    FUN_1006516bc(plVar1,&DAT_10115a164);
    FUN_10065165c(plVar1,1);
    if ((int)param_1[0xce8] < 1) {
      *(uint *)((long)param_1 + 0x4614) = *(uint *)((long)param_1 + 0x4614) & 0xfffffffb;
    }
    else {
      plVar1 = param_1 + 0x8b2;
      *(uint *)((long)param_1 + 0x4614) = *(uint *)((long)param_1 + 0x4614) | 4;
      FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_10115a168);
      fVar19 = 0.5;
      if ((*(float *)(param_1 + 0x8bb) != 0.5) || (*(float *)((long)param_1 + 0x45dc) != 0.5)) {
        param_1[0x8bb] = (long)&DAT_3f0000003f000000;
        FUN_1000200a0(plVar1);
        fVar19 = *(float *)(param_1 + 0x8bb);
      }
      FUN_100651708(330.0 / fVar19,plVar1,1);
      uVar17 = *(uint *)((long)param_1 + 0x4614);
      if ((uVar17 & 0x7f80) != 0x6600) {
        *(uint *)((long)param_1 + 0x4614) = uVar17 & 0xffff8000 | uVar17 & 0x7f | 0x6600;
        FUN_1000200a0(plVar1);
      }
      FUN_100651700(plVar1,3);
      if ((*(float *)(param_1 + 0x8ba) != 0.0) ||
         (*(float *)((long)param_1 + 0x45d4) != local_10c * fVar24)) {
        *(undefined4 *)(param_1 + 0x8ba) = 0;
        *(float *)((long)param_1 + 0x45d4) = local_10c * fVar24;
        FUN_1000200a0(plVar1);
      }
      if ((*(float *)(param_1 + 0x8bc) != 0.5) || (*(float *)((long)param_1 + 0x45e4) != 1.0)) {
        param_1[0x8bc] = 0x3f8000003f000000;
        FUN_1000200a0(plVar1);
      }
      FUN_1006516bc(plVar1,&DAT_10115a164);
      FUN_10065165c(plVar1,1);
      FUN_1006513c0(plVar1,&DAT_101d91650);
    }
  }
  else if ((*(uint *)(param_1 + 0xce8) & 0xfffffffe) == 4) {
    *(uint *)((long)param_1 + 0x4614) = *(uint *)((long)param_1 + 0x4614) & 0xfffffffb;
    plVar1 = param_1 + 0xab6;
    FUN_100642bd8(plVar2,plVar1,1);
    if (*(long *)(param_1[0xce4] + 0x38) != 0) {
      FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
      if ((*(float *)(param_1 + 0xabf) != 0.75) || (*(float *)((long)param_1 + 0x55fc) != 0.75)) {
        lVar16 = NEON_fmov(0x3f400000,4);
        param_1[0xabf] = lVar16;
        FUN_1000200a0(plVar1);
      }
      if (*(float *)((long)param_1 + 0x55f4) != fVar19 + 6.0) {
        *(float *)((long)param_1 + 0x55f4) = fVar19 + 6.0;
        FUN_1000200a0(plVar1);
      }
      if ((*(float *)(param_1 + 0xac0) != 1.0) || (*(float *)((long)param_1 + 0x5604) != 0.5)) {
        param_1[0xac0] = 0x3f0000003f800000;
        FUN_1000200a0(plVar1);
      }
    }
    *(uint *)((long)param_1 + 0x5634) =
         *(uint *)((long)param_1 + 0x5634) & 0xfffffff8 |
         *(uint *)((long)param_1 + 0x5634) & 3 | (uint)(*(long *)(param_1[0xce4] + 0x38) != 0) << 2;
    plVar1 = param_1 + 0x8fe;
    FUN_100651594(plVar1,PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e290,&DAT_10115a168);
    if ((*(float *)(param_1 + 0x907) != 0.5) || (*(float *)((long)param_1 + 0x483c) != 0.5)) {
      param_1[0x907] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    FUN_1006516bc(plVar1,&DAT_10115a164);
    FUN_10065165c(plVar1,1);
    if (*(float *)((long)param_1 + 0x4834) != fVar19) {
      *(float *)((long)param_1 + 0x4834) = fVar19;
      FUN_1000200a0(plVar1);
    }
    if ((*(float *)(param_1 + 0x908) != 0.0) || (*(float *)((long)param_1 + 0x4844) != 0.5)) {
      param_1[0x908] = 0x3f00000000000000;
      FUN_1000200a0(plVar1);
    }
  }
  plVar1 = param_1 + 0x8d8;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248,&local_e4);
  if ((*(float *)(param_1 + 0x8e1) != 0.5) || (*(float *)((long)param_1 + 0x470c) != 0.5)) {
    param_1[0x8e1] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100651700(plVar1,3);
  if ((*(float *)(param_1 + 0x8e0) != fVar18) || (*(float *)((long)param_1 + 0x4704) != fVar23)) {
    *(float *)(param_1 + 0x8e0) = fVar18;
    *(float *)((long)param_1 + 0x4704) = fVar23;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x8e2) != 0.5) || (*(float *)((long)param_1 + 0x4714) != 0.5)) {
    param_1[0x8e2] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100651708(fVar20 / *(float *)(param_1 + 0x8e1),plVar1,1);
  FUN_10065165c(plVar1,1);
  FUN_1006516bc(plVar1,&DAT_10115a164);
  FUN_10065165c(plVar1,1);
  FUN_10001549c(&local_100,*(undefined8 *)(param_1[0xce4] + 0x28));
  if (-1 < (char)local_e9) {
    local_f8 = (ulong)local_e9;
  }
  if (local_f8 == 0) {
    lVar16 = FUN_10032bbf4(*(undefined8 *)(param_1[0xce4] + 0x18));
    FUN_10001549c(&local_d8,*(undefined8 *)(lVar16 + 0x18));
    std::string::operator=((string *)&local_100,(string *)&local_d8);
    if (local_c8._7_1_ < '\0') {
      operator_delete(local_d8);
    }
  }
  pppppuVar6 = (undefined8 *****)local_100;
  if (-1 < (char)local_e9) {
    pppppuVar6 = &local_100;
  }
  uVar15 = FUN_1004e0150(pppppuVar6,0);
  FUN_1006513c0(plVar1,uVar15);
  *(uint *)((long)param_1 + 0x5724) = *(uint *)((long)param_1 + 0x5724) & 0xfffffffb;
  bVar12 = false;
  if ((*(float *)((long)param_1 + 0x56e4) == 0.0) &&
     (bVar12 = false, !NAN(*(float *)(param_1 + 0xadc)))) {
    bVar12 = *(float *)(param_1 + 0xadc) == 0.0;
  }
  if (!bVar12) {
    param_1[0xadc] = 0;
    FUN_1000200a0(param_1 + 0xad4);
  }
  FUN_100652e40(plVar3,0);
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(uint *)((long)param_1 + 0x5334) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5334) = *(uint *)((long)param_1 + 0x5334) & 0xffff807f;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a170,2);
  *(uint *)((long)param_1 + 0x5334) = *(uint *)((long)param_1 + 0x5334) | 0x10;
  FUN_10064e47c(0x43fa0000,0x44200000,plVar3);
  if ((*(float *)(param_1 + 0xa60) != 0.5) || (*(float *)((long)param_1 + 0x5304) != 0.5)) {
    param_1[0xa60] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  plVar1 = param_1 + 0x946;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Bold_36_fo_10184e228,&DAT_10115a168);
  uVar15 = FUN_1004e0150("MENU_3DCARD_PLAYER_ESSENCE_LABEL",0);
  FUN_1006513c0(plVar1,uVar15);
  if ((*(float *)(param_1 + 0x950) != 0.5) || (*(float *)((long)param_1 + 0x4a84) != 0.5)) {
    param_1[0x950] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  uVar15 = FUN_100345b94();
  uVar15 = FUN_10034c450(uVar15,"*PlayerEssenceEffects*");
  plVar2 = param_1 + 0x76;
  FUN_1001aa350(plVar2,uVar15);
  FUN_10064e47c(0x43c80000,0x43c80000,plVar2);
  bVar12 = false;
  if ((*(float *)((long)param_1 + 0x3f4) == 0.0) &&
     (bVar12 = false, !NAN(*(float *)(param_1 + 0x7e)))) {
    bVar12 = *(float *)(param_1 + 0x7e) == 0.0;
  }
  if (!bVar12) {
    param_1[0x7e] = 0;
    FUN_1000200a0(plVar2);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x76] + 0x28))(plVar2,&local_d8);
  if ((*(float *)(param_1 + 0x7f) != 1.5) || (*(float *)((long)param_1 + 0x3fc) != 1.5)) {
    lVar16 = NEON_fmov(0x3fc00000,4);
    param_1[0x7f] = lVar16;
    FUN_1000200a0(plVar2);
  }
  FUN_1001aaebc(plVar2);
  FUN_1001aae30(plVar2,"ESSENCE_ICON");
  plVar2 = param_1 + 0x96c;
  FUN_100651594(plVar2,PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0,&DAT_10115a168);
  if ((*(uint *)((long)param_1 + 0x4be4) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x4be4) = *(uint *)((long)param_1 + 0x4be4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar2);
  }
  FUN_1004e3120(&local_d8,"0");
  FUN_1006513c0(plVar2,&local_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
  }
  if ((*(float *)(param_1 + 0x974) != 70.0) || (*(float *)((long)param_1 + 0x4ba4) != 0.0)) {
    param_1[0x974] = 0x428c0000;
    FUN_1000200a0(plVar2);
  }
  local_d8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0x96c] + 0x28))(plVar2,&local_d8);
  fVar18 = (float)FUN_100651184(plVar1);
  fVar23 = 30.0;
  fVar20 = 30.0 - fVar18 * 0.5;
  fVar18 = *(float *)((long)param_1 + 0x4a74);
  FUN_100651184(plVar2);
  fVar18 = (fVar23 + fVar18) * 0.5 + 20.0;
  if ((*(float *)(param_1 + 0x93d) != fVar20) || (*(float *)((long)param_1 + 0x49ec) != fVar18)) {
    *(float *)(param_1 + 0x93d) = fVar20;
    *(float *)((long)param_1 + 0x49ec) = fVar18;
    FUN_1000200a0(param_1 + 0x935);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x935] + 0x28))(param_1 + 0x935,&local_d8);
  plVar1 = param_1 + 0x924;
  if ((*(float *)(param_1 + 0x92d) != 0.5) || (*(float *)((long)param_1 + 0x496c) != 0.5)) {
    param_1[0x92d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x92c) != fVar22) ||
     (*(float *)((long)param_1 + 0x4964) != fVar11 * -0.16922499)) {
    *(float *)(param_1 + 0x92c) = fVar22;
    *(float *)((long)param_1 + 0x4964) = fVar11 * -0.16922499;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_d8);
  uVar21 = 0;
  if (*(uint *)(param_1 + 0xce8) < 4) {
    uVar21 = *(undefined4 *)(&DAT_101158c50 + (long)(int)*(uint *)(param_1 + 0xce8) * 4);
  }
  plVar1 = param_1 + 0xca8;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_10064e47c(uStack_dc,local_e0,plVar1);
  if ((*(float *)(param_1 + 0xcb2) != 0.5) || (*(float *)((long)param_1 + 0x6594) != 0.5)) {
    param_1[0xcb2] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  uVar17 = *(uint *)((long)param_1 + 0x65c4);
  if ((uVar17 & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x65c4) = uVar17 & 0xffff807f;
    FUN_1000200a0(plVar1);
    uVar17 = *(uint *)((long)param_1 + 0x65c4);
  }
  *(uint *)((long)param_1 + 0x65c4) = uVar17 | 0x10;
  uVar9 = DAT_101dbd460;
  local_b0 = DAT_101dbd460;
  local_d8 = FUN_1002f5edc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xca9,&local_d8);
  uVar10 = DAT_101dbd48c;
  local_b0 = DAT_101dbd48c;
  local_d8 = FUN_1002f5edc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xca9,&local_d8);
  *(uint *)((long)param_1 + 0x65c4) = *(uint *)((long)param_1 + 0x65c4) & 0xfffffffb;
  plVar1 = param_1 + 0xb2;
  uVar15 = FUN_1004e0150("MENU_3DCARD_DESTROY_BUTTON",0);
  FUN_1001816d4(0x42200000,0x43d70000,0x43d70000,plVar1,0,uVar15,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_b0 = DAT_101d918e0;
  local_d8 = thunk_FUN_1002f7408;
  plVar2 = param_1 + 0xb3;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(plVar2,&local_d8);
  local_b0 = DAT_101d918e4;
  local_d8 = thunk_FUN_1002f7700;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(plVar2,&local_d8);
  uVar8 = DAT_101d918e8;
  local_b0 = DAT_101d918e8;
  local_d8 = thunk_FUN_1002f7624;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(plVar2,&local_d8);
  FUN_100651038(param_1 + 0x195,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1001b495c(0,plVar1);
  if ((*(float *)(param_1 + 0xbc) != 0.5) || (*(float *)((long)param_1 + 0x5e4) != 0.5)) {
    param_1[0xbc] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xbb) != 0.5) || (*(float *)((long)param_1 + 0x5dc) != 0.5)) {
    param_1[0xbb] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100181c68(0x430a0000,plVar1);
  FUN_100181b5c(0,0x41f00000,plVar1);
  FUN_100181bd0(0x3f800000,plVar1,&DAT_10115a164);
  FUN_1001829b4(uVar21,plVar1);
  if ((*(float *)(param_1 + 0xba) != fVar22) ||
     (*(float *)((long)param_1 + 0x5d4) != fVar11 * -0.072525)) {
    *(float *)(param_1 + 0xba) = fVar22;
    *(float *)((long)param_1 + 0x5d4) = fVar11 * -0.072525;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0xb2] + 0x28))(plVar1,&local_d8);
  plVar1 = param_1 + 0xa74;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_10064259c(param_1 + 0xff);
  FUN_10064e47c(0x43e1bfff,plVar1);
  if ((*(float *)(param_1 + 0xa7c) != *(float *)(param_1 + 0xba)) ||
     (*(float *)((long)param_1 + 0x53e4) != *(float *)((long)param_1 + 0x5d4))) {
    *(float *)(param_1 + 0xa7c) = *(float *)(param_1 + 0xba);
    *(float *)((long)param_1 + 0x53e4) = *(float *)((long)param_1 + 0x5d4);
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa7e) != 0.5) || (*(float *)((long)param_1 + 0x53f4) != 0.5)) {
    param_1[0xa7e] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(uint *)((long)param_1 + 0x5424) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5424) = *(uint *)((long)param_1 + 0x5424) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa7d) != *(float *)(param_1 + 0xbb)) ||
     (*(float *)((long)param_1 + 0x53ec) != *(float *)((long)param_1 + 0x5dc))) {
    *(float *)(param_1 + 0xa7d) = *(float *)(param_1 + 0xbb);
    *(float *)((long)param_1 + 0x53ec) = *(float *)((long)param_1 + 0x5dc);
    FUN_1000200a0(plVar1);
  }
  local_b0 = uVar9;
  local_d8 = FUN_1002f5efc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xa75,&local_d8);
  local_b0 = uVar10;
  local_d8 = FUN_1002f5efc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xa75,&local_d8);
  plVar1 = param_1 + 0xa1a;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  if ((*(float *)(param_1 + 0xa22) != -6.0) || (*(float *)((long)param_1 + 0x5114) != 10.0)) {
    param_1[0xa22] = 0x41200000c0c00000;
    FUN_1000200a0(plVar1);
  }
  lVar16 = NEON_fmov(0x3f800000,4);
  if ((*(float *)(param_1 + 0xa24) != 1.0) || (*(float *)((long)param_1 + 0x5124) != 1.0)) {
    param_1[0xa24] = lVar16;
    FUN_1000200a0(plVar1);
  }
  plVar1 = param_1 + 0x992;
  local_d8 = (code *)CONCAT44(local_d8._4_4_,0xff9bdb2d);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&local_d8);
  FUN_1004e3120(&local_d8,"+0");
  FUN_1006513c0(plVar1,&local_d8);
  if (local_d0 != (long *)0x0) {
    operator_delete__(local_d0);
  }
  if ((*(float *)(param_1 + 0x99a) != 6.0) || (*(float *)((long)param_1 + 0x4cd4) != 8.0)) {
    param_1[0x99a] = 0x4100000040c00000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x99c) != 0.0) || (*(float *)((long)param_1 + 0x4ce4) != 1.0)) {
    param_1[0x99c] = 0x3f80000000000000;
    FUN_1000200a0(plVar1);
  }
  *(uint *)((long)param_1 + 0x43d4) = *(uint *)((long)param_1 + 0x43d4) & 0xfffffffb;
  plVar1 = param_1 + 0x87b;
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0,&DAT_10115a168);
  FUN_100651700(plVar1,0);
  fVar18 = fVar11 * 0.182763 + 137.0;
  if ((*(float *)(param_1 + 0x883) != fVar18) || (*(float *)((long)param_1 + 0x441c) != 0.0)) {
    *(float *)(param_1 + 0x883) = fVar18;
    *(undefined4 *)((long)param_1 + 0x441c) = 0;
    FUN_1000200a0(plVar1);
  }
  FUN_100651708(0x43d70000,plVar1,1);
  plVar1 = param_1 + 0x48e;
  uVar15 = FUN_1004e0150("MENU_SKINS_HUB_CRAFT_SKIN_BUTTON",0);
  FUN_1001816d4(0x42200000,0x43d70000,0x43d70000,plVar1,0,uVar15,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_b0 = uVar8;
  local_d8 = FUN_1002f5f10;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0x48f,&local_d8);
  FUN_100651038(param_1 + 0x571,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_1001b495c(0,plVar1);
  if ((*(float *)(param_1 + 0x498) != 0.5) || (*(float *)((long)param_1 + 0x24c4) != 0.5)) {
    param_1[0x498] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x497) != 0.5) || (*(float *)((long)param_1 + 0x24bc) != 0.5)) {
    param_1[0x497] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  FUN_100181c68(0x430a0000,plVar1);
  FUN_100181b5c(0,0x41f00000,plVar1);
  FUN_100181bd0(0x3f800000,plVar1,&DAT_10115a164);
  FUN_1001829b4(uVar21,plVar1);
  FUN_1001b4c0c(plVar1,0);
  if ((*(float *)(param_1 + 0x496) != fVar22) ||
     (*(float *)((long)param_1 + 0x24b4) != fVar11 * 0.16922499)) {
    *(float *)(param_1 + 0x496) = fVar22;
    *(float *)((long)param_1 + 0x24b4) = fVar11 * 0.16922499;
    FUN_1000200a0(plVar1);
  }
  local_d8 = (code *)&DAT_3f0000003f000000;
  (**(code **)(param_1[0x48e] + 0x28))(plVar1,&local_d8);
  plVar1 = param_1 + 0xa92;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_10064259c(param_1 + 0xff);
  FUN_10064e47c(0x43e1bfff,plVar1);
  if ((*(float *)(param_1 + 0xa9a) != *(float *)(param_1 + 0x496)) ||
     (*(float *)((long)param_1 + 0x54d4) != *(float *)((long)param_1 + 0x24b4))) {
    *(float *)(param_1 + 0xa9a) = *(float *)(param_1 + 0x496);
    *(float *)((long)param_1 + 0x54d4) = *(float *)((long)param_1 + 0x24b4);
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa9c) != 0.5) || (*(float *)((long)param_1 + 0x54e4) != 0.5)) {
    param_1[0xa9c] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(uint *)((long)param_1 + 0x5514) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x5514) = *(uint *)((long)param_1 + 0x5514) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa9b) != *(float *)(param_1 + 0xbb)) ||
     (*(float *)((long)param_1 + 0x54dc) != *(float *)((long)param_1 + 0x5dc))) {
    *(float *)(param_1 + 0xa9b) = *(float *)(param_1 + 0xbb);
    *(float *)((long)param_1 + 0x54dc) = *(float *)((long)param_1 + 0x5dc);
    FUN_1000200a0(plVar1);
  }
  local_b0 = uVar9;
  local_d8 = FUN_1002f5efc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xa93,&local_d8);
  local_b0 = uVar10;
  local_d8 = FUN_1002f5efc;
  local_c0 = 0;
  uStack_b8 = 0;
  local_c8 = 0;
  local_d0 = param_1;
  FUN_10001554c(param_1 + 0xa93,&local_d8);
  plVar1 = param_1 + 0xa38;
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"essence_icon_small");
  if ((*(float *)(param_1 + 0xa40) != -6.0) || (*(float *)((long)param_1 + 0x5204) != 10.0)) {
    param_1[0xa40] = 0x41200000c0c00000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0xa42) != 1.0) || (*(float *)((long)param_1 + 0x5214) != 1.0)) {
    param_1[0xa42] = lVar16;
    FUN_1000200a0(plVar1);
  }
  plVar1 = param_1 + 0x9b8;
  local_d8 = (code *)CONCAT44(local_d8._4_4_,0xff9bdb2d);
  FUN_100651594(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&local_d8);
  FUN_1004e3120(&local_d8,"-0");
  FUN_1006513c0(plVar1,&local_d8);
  if (local_d0 != (long *)0x0) {
    operator_delete__(local_d0);
  }
  if ((*(float *)(param_1 + 0x9c0) != 6.0) || (*(float *)((long)param_1 + 0x4e04) != 8.0)) {
    param_1[0x9c0] = 0x4100000040c00000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x9c2) != 0.0) || (*(float *)((long)param_1 + 0x4e14) != 1.0)) {
    param_1[0x9c2] = 0x3f80000000000000;
    FUN_1000200a0(plVar1);
  }
  if ((char)local_e9 < '\0') {
    operator_delete(local_100);
  }
  return;
}




long thunk_FUN_1002f4164(long param_1,undefined4 *param_2,byte param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001a7cf4();
  *puVar1 = &PTR_thunk_FUN_1002f7860_10148c460;
  FUN_1001aa1d4(puVar1 + 0x76);
  thunk_FUN_100182684(param_1 + 0x590,0);
  thunk_FUN_100182684(param_1 + 0x2470,0);
  FUN_1006421a8(param_1 + 0x4350);
  *(undefined ***)(param_1 + 0x4350) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x43d8);
  FUN_1006421a8(param_1 + 0x4508);
  *(undefined ***)(param_1 + 0x4508) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x4590);
  thunk_FUN_100650e64(param_1 + 0x46c0);
  thunk_FUN_100650e64(param_1 + 0x47f0);
  FUN_1006421a8(param_1 + 0x4920);
  *(undefined ***)(param_1 + 0x4920) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x49a8);
  *(undefined ***)(param_1 + 0x49a8) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0x4a30);
  thunk_FUN_100650e64(param_1 + 0x4b60);
  thunk_FUN_100650e64(param_1 + 0x4c90);
  thunk_FUN_100650e64(param_1 + 0x4dc0);
  thunk_FUN_100652c08(param_1 + 0x4ef0);
  thunk_FUN_100652c08(param_1 + 0x4fe0);
  thunk_FUN_100652c08(param_1 + 0x50d0);
  thunk_FUN_100652c08(param_1 + 0x51c0);
  thunk_FUN_100652c08(param_1 + 0x52b0);
  thunk_FUN_100652c08(param_1 + 0x53a0);
  thunk_FUN_100652c08(param_1 + 0x5490);
  FUN_100657568(param_1 + 0x5580);
  FUN_100657568(param_1 + 0x5590);
  FUN_100657568(param_1 + 0x55a0);
  thunk_FUN_100652c08(param_1 + 0x55b0);
  FUN_1002f3660(param_1 + 0x56a0);
  thunk_FUN_100652c08(param_1 + 0x6540);
  thunk_FUN_100652c08(param_1 + 0x6630);
  *(undefined4 **)(param_1 + 0x6720) = param_2;
  *(undefined8 *)(param_1 + 0x6730) = 0;
  *(undefined8 *)(param_1 + 0x6728) = 0;
  *(undefined4 *)(param_1 + 0x6738) = DAT_101dc0b88;
  *(undefined2 *)(param_1 + 0x6744) = 0;
  *(byte *)(param_1 + 0x6746) = param_3;
  if ((param_3 & 1) == 0) {
    param_4 = *param_2;
  }
  *(undefined4 *)(param_1 + 0x6740) = param_4;
  FUN_1006575f4(param_1 + 0x55a0,PTR_s_build___MenuSkinsHeroesBlueprint_101854a48);
  FUN_1006575f4(param_1 + 0x5580,PTR_s_build___MenuSkinsHeroesBlueprint_101854a48);
  FUN_1002f43a0(param_1);
  FUN_1002f4548(param_1);
  return param_1;
}




void FUN_1002f5edc(long param_1)

{
  *(uint *)(param_1 + 0x65c4) = *(uint *)(param_1 + 0x65c4) & 0xfffffffb;
  return;
}




void thunk_FUN_1002f7408(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 uStack_58;
  undefined4 *puStack_50;
  undefined4 uStack_44;
  ulong uStack_40;
  undefined4 *puStack_38;
  
  *(uint *)(param_1 + 0x65c4) = *(uint *)(param_1 + 0x65c4) | 4;
  FUN_100642324();
  FUN_100642324(param_1 + 0x4508);
  uVar1 = *(uint *)(param_1 + 0x458c);
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x458c) = uVar1 & 0xffff807f;
    FUN_1000200a0(param_1 + 0x4508);
  }
  uStack_40 = 0;
  puStack_38 = (undefined4 *)0x0;
  uStack_44 = 0x1d;
  FUN_1000228fc(&uStack_40,&uStack_44);
  switch(*(undefined4 *)(param_1 + 0x6740)) {
  case 0:
    uStack_44 = 0x15;
    break;
  case 1:
    uStack_44 = 0x15;
    FUN_1000228fc(&uStack_40,&uStack_44);
    uStack_44 = 0x17;
    break;
  case 2:
    uStack_44 = 0x15;
    FUN_1000228fc(&uStack_40,&uStack_44);
    uStack_44 = 0x17;
    FUN_1000228fc(&uStack_40,&uStack_44);
    uStack_44 = 0x19;
    break;
  case 3:
    uStack_44 = 0x15;
    FUN_1000228fc(&uStack_40,&uStack_44);
    uStack_44 = 0x17;
    FUN_1000228fc(&uStack_40,&uStack_44);
    uStack_44 = 0x19;
    FUN_1000228fc(&uStack_40,&uStack_44);
    uStack_44 = 0x1b;
    break;
  default:
    goto switchD_1002f749c_default;
  }
  FUN_1000228fc(&uStack_40,&uStack_44);
switchD_1002f749c_default:
  uStack_58 = 0;
  puStack_50 = (undefined4 *)0x0;
  FUN_100026bb4(&uStack_58,uStack_40 & 0xffffffff);
  if ((int)uStack_40 == 0) {
    iVar3 = 0;
  }
  else {
    lVar6 = (uStack_40 & 0xffffffff) << 2;
    puVar4 = puStack_38;
    puVar5 = puStack_50;
    do {
      *puVar5 = *puVar4;
      lVar6 = lVar6 + -4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      iVar3 = (int)uStack_40;
    } while (lVar6 != 0);
  }
  uStack_58 = CONCAT44(uStack_58._4_4_,iVar3);
  FUN_1001a9150(param_1,&uStack_58,0);
  if (puStack_50 != (undefined4 *)0x0) {
    operator_delete__(puStack_50);
    uStack_58 = 0;
    puStack_50 = (undefined4 *)0x0;
  }
  FUN_1001a87e8(param_1);
  FUN_1001a9200(param_1,"Back_Craft_Idle");
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  lVar6 = FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/progress_rumble_loop.mp3",1,0);
  if (lVar6 != 0) {
    uVar2 = *(undefined4 *)(lVar6 + 0x30);
    *(long *)(param_1 + 0x6730) = lVar6 + 0x28;
    *(undefined4 *)(param_1 + 0x6738) = uVar2;
  }
  if (puStack_38 != (undefined4 *)0x0) {
    operator_delete__(puStack_38);
  }
  return;
}




void thunk_FUN_1002f7700(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_100642324();
  FUN_1001a86c8(param_1,1);
  FUN_1001a87e8(param_1);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x128);
  uVar2 = FUN_10018616c();
  FUN_1001e1d50(uVar2,param_1,uVar5);
  FUN_100642b14(param_1,uVar2);
  FUN_1002f7054(0x3e4ccccd,param_1,0);
  FUN_1002f6fd4(0x3dcccccd,param_1);
  plVar3 = *(long **)(param_1 + 0x6730);
  if (plVar3 != (long *)0x0) {
    piVar1 = (int *)(param_1 + 0x6738);
    if (*piVar1 == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        plVar3 = *(long **)(param_1 + 0x6730);
        uVar2 = 0;
        if (plVar3 != (long *)0x0) {
          if (*piVar1 == (int)plVar3[1]) {
            uVar2 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            uVar2 = 0;
            *(undefined8 *)(param_1 + 0x6730) = 0;
            *piVar1 = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3f000000,uVar2);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6730) = 0;
      *piVar1 = DAT_101dc0b88;
    }
  }
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  return;
}




void thunk_FUN_1002f7624(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  (**(code **)**(undefined8 **)(param_1 + 0x6728))();
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/card_destroyed.mp3",0,0);
  plVar2 = *(long **)(param_1 + 0x6730);
  if (plVar2 != (long *)0x0) {
    piVar1 = (int *)(param_1 + 0x6738);
    if (*piVar1 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x6730);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*piVar1 == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x6730) = 0;
            *piVar1 = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3e4ccccd,uVar4);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6730) = 0;
      *piVar1 = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1002f5efc(long param_1)

{
  *(uint *)(param_1 + 0x65c4) = *(uint *)(param_1 + 0x65c4) & 0xfffffffb;
  return;
}




void FUN_1002f5f10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f5f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x6728) + 8))();
  return;
}




void FUN_1002f5f20(long param_1,byte *param_2,int param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte *pbVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  byte *pbVar8;
  
  FUN_1002f3b18(param_1 + 0x56a0);
  bVar4 = param_2[0x17];
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 != sVar2) {
LAB_1002f5fe0:
    bVar5 = true;
    goto LAB_1002f6000;
  }
  pbVar3 = *(byte **)param_2;
  if (-1 < (char)bVar4) {
    pbVar3 = param_2;
  }
  pbVar8 = DAT_101d91198;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    pbVar8 = (byte *)&DAT_101d91198;
  }
  if ((char)bVar4 < '\0') {
    if (sVar1 == 0) goto LAB_1002f5ffc;
    iVar6 = _memcmp(pbVar3,pbVar8,sVar1);
    bVar5 = iVar6 == 0;
  }
  else {
    if (sVar1 == 0) {
LAB_1002f5ffc:
      bVar5 = false;
      goto LAB_1002f6000;
    }
    if ((uint)*pbVar8 != ((uint)*(byte **)param_2 & 0xff)) goto LAB_1002f5fe0;
    do {
      uVar7 = uVar7 - 1;
      pbVar8 = pbVar8 + 1;
      param_2 = param_2 + 1;
      if (uVar7 == 0) break;
    } while (*param_2 == *pbVar8);
    bVar5 = uVar7 == 0;
  }
  bVar5 = !bVar5;
LAB_1002f6000:
  *(char *)(param_1 + 0x6745) = bVar5 | 0 < param_3;
  return;
}




void FUN_1002f6024(long param_1,long param_2,byte *param_3,long *param_4)

{
  size_t sVar1;
  byte *pbVar2;
  long *plVar3;
  int iVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined8 uVar13;
  byte bVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  undefined1 auStack_88 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  pcVar15 = *(char **)(param_2 + 0x10);
  sVar6 = _strlen(pcVar15);
  pbVar11 = (byte *)&DAT_101d91198;
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  if ((sVar6 != sVar1) ||
     (iVar4 = std::string::compare(0x101d91198,0,(char *)0xffffffffffffffff,(ulong)pcVar15),
     iVar4 != 0)) {
    FUN_100102450(auStack_88,"skins_card_hero_%s");
    uVar13 = *(undefined8 *)(param_1 + 0x308);
    uVar5 = FUN_1004d2524("heroArt_file");
    uVar7 = FUN_100015208("heroArt_file",uVar5,0x12345678);
    FUN_1010afab8(uVar13,uVar7,*(undefined8 *)(param_1 + 0x5580));
    lVar8 = FUN_1006575c4(param_1 + 0x5580,auStack_88);
    if (lVar8 != 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x5580) + 8);
      fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x48));
      fVar17 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x4c));
      local_90 = (float)*(ushort *)(lVar8 + 4) / fVar16;
      fStack_8c = 1.0 - (float)((uint)*(ushort *)(lVar8 + 10) + (uint)*(ushort *)(lVar8 + 6)) /
                        fVar17;
      local_98 = (float)((uint)*(ushort *)(lVar8 + 8) + (uint)*(ushort *)(lVar8 + 4)) / fVar16 -
                 local_90;
      fStack_94 = 1.0 - ((float)*(ushort *)(lVar8 + 6) / fVar17 + fStack_8c);
      uVar13 = *(undefined8 *)(param_1 + 0x308);
      uVar5 = FUN_1004d2524("heroArt_repeat");
      uVar7 = FUN_100015208("heroArt_repeat",uVar5,0x12345678);
      FUN_1010af9d0(uVar13,uVar7,&local_98);
      uVar13 = *(undefined8 *)(param_1 + 0x308);
      uVar5 = FUN_1004d2524("heroArt_offset");
      uVar7 = FUN_100015208("heroArt_offset",uVar5,0x12345678);
      FUN_1010af9d0(uVar13,uVar7,&local_90);
    }
  }
  uVar10 = (ulong)DAT_101d911a8._7_1_;
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = uVar10;
  }
  bVar14 = param_3[0x17];
  sVar6 = *(size_t *)(param_3 + 8);
  if (-1 < (char)bVar14) {
    sVar6 = (ulong)bVar14;
  }
  if (sVar1 == sVar6) {
    pbVar2 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar2 = pbVar11;
    }
    pbVar12 = *(byte **)param_3;
    if (-1 < (char)bVar14) {
      pbVar12 = param_3;
    }
    if ((char)DAT_101d911a8._7_1_ < '\0') {
      if ((sVar1 == 0) || (iVar4 = _memcmp(pbVar2,pbVar12,sVar1), iVar4 == 0)) goto LAB_1002f63e0;
    }
    else {
      if (sVar1 == 0) goto LAB_1002f63e0;
      if ((uint)*pbVar12 == ((uint)DAT_101d91198 & 0xff)) {
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          pbVar11 = pbVar11 + 1;
          if (uVar10 == 0) goto LAB_1002f63e0;
        } while (*pbVar11 == *pbVar12);
      }
    }
  }
  lVar8 = param_1 + 0x5590;
  if (*(long *)(param_1 + 0x5590) != 0) {
    FUN_1006576cc(lVar8);
    bVar14 = param_3[0x17];
  }
  pbVar11 = *(byte **)param_3;
  if (-1 < (char)bVar14) {
    pbVar11 = param_3;
  }
  FUN_1006575f4(lVar8,pbVar11);
  uVar13 = *(undefined8 *)(param_1 + 0x308);
  uVar5 = FUN_1004d2524("cardArt_file");
  uVar7 = FUN_100015208("cardArt_file",uVar5,0x12345678);
  FUN_1010afab8(uVar13,uVar7,*(undefined8 *)(param_1 + 0x5590));
  plVar3 = (long *)*param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    plVar3 = param_4;
  }
  lVar8 = FUN_1006575c4(lVar8,plVar3);
  if (lVar8 != 0) {
    lVar9 = *(long *)(*(long *)(param_1 + 0x5590) + 8);
    fVar16 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x48));
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)(lVar9 + 0x4c));
    local_90 = (float)*(ushort *)(lVar8 + 4) / fVar16;
    fStack_8c = 1.0 - (float)((uint)*(ushort *)(lVar8 + 10) + (uint)*(ushort *)(lVar8 + 6)) / fVar17
    ;
    local_98 = (float)((uint)*(ushort *)(lVar8 + 8) + (uint)*(ushort *)(lVar8 + 4)) / fVar16 -
               local_90;
    fStack_94 = 1.0 - ((float)*(ushort *)(lVar8 + 6) / fVar17 + fStack_8c);
    uVar13 = *(undefined8 *)(param_1 + 0x308);
    uVar5 = FUN_1004d2524("cardArt_repeat");
    uVar7 = FUN_100015208("cardArt_repeat",uVar5,0x12345678);
    FUN_1010af9d0(uVar13,uVar7,&local_98);
    uVar13 = *(undefined8 *)(param_1 + 0x308);
    uVar5 = FUN_1004d2524("cardArt_offset");
    uVar7 = FUN_100015208("cardArt_offset",uVar5,0x12345678);
    FUN_1010af9d0(uVar13,uVar7,&local_90);
  }
LAB_1002f63e0:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1002f6414(long param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_100644aec(auStack_40,DAT_101d23838,0);
  FUN_100644c34(param_1,auStack_40,1);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  FUN_1001a86c8(param_1,0);
  FUN_100642324(param_1);
  FUN_1001a8964(param_1,(&PTR_s_COMMON_10148c5e8)[*(int *)(param_1 + 0x6740)]);
  FUN_1002f64ac(0,0,param_1,1);
  return;
}




void FUN_1002f64ac(undefined8 param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(param_2);
  FUN_100642b14(param_3 + 0x4508,uVar2);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063fcac(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar5 = 0x3f800000;
  if (param_4 == 0) {
    uVar5 = 0;
  }
  FUN_10063fce0(uVar5,puVar4);
  FUN_10063f0e8(param_1,puVar4);
  FUN_100642b14(param_3 + 0x4508,puVar4);
  return;
}




void FUN_1002f65a8(long param_1)

{
  FUN_1002f64ac(0,0,param_1,1);
  FUN_1002f65e4(param_1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x20));
  return;
}




void FUN_1002f65e4(undefined8 param_1,undefined8 *param_2)

{
  FUN_1001a86c8(param_1,0);
  FUN_1001a8e34(*(undefined4 *)(param_2 + 2),param_1,*param_2,*(undefined1 *)((long)param_2 + 0x14),
                0);
  return;
}




void FUN_1002f6620(long param_1)

{
  char *pcVar1;
  
  FUN_1002f64ac(0,0,param_1,0);
  FUN_1002f65e4(param_1,**(undefined8 **)(*(long *)(param_1 + 0x1a0) + 8));
  pcVar1 = "Effect_Back_Idle_Basic";
  if (*(char *)(param_1 + 0x6744) != '\0') {
    pcVar1 = "Effect_Back_Idle_Basic_LQ";
  }
  FUN_1001a9200(param_1,pcVar1);
  return;
}




void FUN_1002f6684(undefined8 param_1,undefined8 param_2)

{
  FUN_1002f65e4(param_2,param_1);
  return;
}




void FUN_1002f6694(undefined8 param_1,undefined8 param_2)

{
  FUN_1002f64ac(0x3e99999a,0,param_2,1);
  return;
}




void FUN_1002f66ac(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  int local_38;
  int local_34;
  
  FUN_1004e313c(param_1);
  iVar1 = FUN_1004e3054((double)param_3,&local_34,&local_38,auStack_40);
  FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_DAY",0);
  FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_DAYS",0);
  FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_HOUR",0);
  FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_HOURS",0);
  FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_MINUTE",0);
  FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_MINUTES",0);
  if (iVar1 < 1) {
    if (local_34 < 1) {
      if (local_38 < 1) {
        if (-1 < param_3) {
          return;
        }
        pcVar2 = "MENU_BOOSTS_MARKET_DURATION_PERMANENT";
      }
      else {
        if (local_38 != 1) {
          uVar3 = FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_MINUTES",0);
          FUN_1000153b4(param_1,uVar3);
          FUN_1004e313c(auStack_50);
          goto LAB_1002f6840;
        }
        pcVar2 = "MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_MINUTE";
      }
    }
    else {
      if (local_34 != 1) {
        uVar3 = FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_HOURS",0);
        FUN_1000153b4(param_1,uVar3);
        FUN_1004e313c(auStack_50);
        goto LAB_1002f6840;
      }
      pcVar2 = "MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_HOUR";
    }
  }
  else {
    if (iVar1 != 1) {
      uVar3 = FUN_1004e0150("MENU_BOOSTS_MARKET_DURATION_TIMED_PLURAL_DAYS",0);
      FUN_1000153b4(param_1,uVar3);
      FUN_1004e313c(auStack_50);
LAB_1002f6840:
      FUN_1004e38ac(auStack_50,"%d");
      FUN_1004e3120(auStack_60,"[DURATION]");
      FUN_1004e3bc4(param_1,0,auStack_60,auStack_50);
      if (local_58 != (void *)0x0) {
        operator_delete__(local_58);
      }
      if (local_48 == (void *)0x0) {
        return;
      }
      operator_delete__(local_48);
      return;
    }
    pcVar2 = "MENU_BOOSTS_MARKET_DURATION_TIMED_SINGLE_DAY";
  }
  uVar3 = FUN_1004e0150(pcVar2,0);
  FUN_1000153b4(param_1,uVar3);
  return;
}




void FUN_1002f68a0(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  void *local_60;
  void *local_58;
  char local_49;
  long local_48;
  
  local_48 = 0;
  uVar1 = FUN_10032f924();
  FUN_10001549c(&local_60,*(undefined8 *)(*(long *)(param_1 + 0x6720) + 8));
  FUN_1003301bc(uVar1,&local_60,&local_48);
  if (local_49 < '\0') {
    operator_delete(local_60);
  }
  if (local_48 == 0) {
    FUN_1004e313c(&local_60);
    FUN_1004e38ac(&local_60,"%d");
    FUN_1006513c0(param_1 + 0x47f0,&local_60);
    fVar3 = (float)FUN_10065317c(param_1 + 0x55b0);
    fVar2 = (float)FUN_10064259c(param_1 + 0x47f0);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    fVar2 = fVar3 + 15.0 + fVar2;
  }
  else {
    FUN_1002f66ac(&local_60);
    FUN_1006513c0(param_1 + 0x47f0,&local_60);
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
    fVar2 = (float)FUN_10064259c(param_1 + 0x47f0);
  }
  fVar3 = (float)FUN_10064259c(param_1 + 0x47f0);
  fVar3 = fVar2 * 0.5 - fVar3;
  if (*(float *)(param_1 + 0x4830) != fVar3) {
    *(float *)(param_1 + 0x4830) = fVar3;
    FUN_1000200a0(param_1 + 0x47f0);
  }
  if (*(float *)(param_1 + 22000) != fVar3 + -15.0) {
    *(float *)(param_1 + 22000) = fVar3 + -15.0;
    FUN_1000200a0(param_1 + 0x55b0);
  }
  return;
}




void FUN_1002f6a18(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"+%d");
  FUN_1006513c0(param_1 + 0x4c90,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002f6a88(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"-%d");
  FUN_1006513c0(param_1 + 0x4dc0,auStack_30);
  uVar1 = FUN_1004e0150("MENU_SKINS_HUB_CRAFTING_INSTRUCTIONS_OWNED_BLUEPRINT",0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  FUN_1004e3120(auStack_50,"[EM]");
  FUN_1004e3120(auStack_60,"{0,320,340,340}");
  FUN_1004e3d50(auStack_40,0,auStack_50,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  FUN_1004e3120(auStack_50,"[/EM]");
  FUN_1004e3120(auStack_60,"{\\}");
  FUN_1004e3d50(auStack_40,0,auStack_50,auStack_60);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  uVar1 = FUN_100655b6c(param_1 + 0x4790);
  thunk_FUN_1004e439c(auStack_50,uVar1);
  FUN_1004e313c(auStack_60);
  FUN_1004e38ac(auStack_60,"%d");
  FUN_1004e3120(auStack_70,"[SKIN_NAME]");
  FUN_1004e3bc4(auStack_40,0,auStack_70,auStack_50);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1004e3120(auStack_70,"[NUM_ESSENCE]");
  FUN_1004e3bc4(auStack_40,0,auStack_70,auStack_60);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  FUN_1006513c0(param_1 + 0x43d8,auStack_40);
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002f6c78(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0x4b60,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002f6ce8(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x49a4) = *(uint *)(param_1 + 0x49a4) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x614) = *(uint *)(param_1 + 0x614) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002f6d1c(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_1001b4c0c(param_1 + 0x2470);
  uVar1 = *(uint *)(param_1 + 0x24f4);
  uVar2 = 0xff;
  if (param_2 == 0) {
    uVar2 = 0x99;
  }
  if (uVar2 == (uVar1 >> 7 & 0xff)) {
    return;
  }
  *(uint *)(param_1 + 0x24f4) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_1000200a0(param_1 + 0x2470);
  return;
}




void FUN_1002f6d90(undefined8 param_1,undefined8 param_2)

{
  FUN_1002f64ac(0,0,param_2,1);
  return;
}




void FUN_1002f6da4(undefined8 param_1,undefined8 param_2)

{
  FUN_1002f64ac(0,0,param_2,0);
  return;
}




void FUN_1002f6db8(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  
  FUN_100642324();
  if (*(long *)(param_2 + 0x6720) != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x308);
    uVar2 = FUN_1004d2524("saturation");
    uVar3 = FUN_100015208("saturation",uVar2,0x12345678);
    FUN_1010af998(0x3f800000,uVar4,uVar3);
    FUN_1002f6ee0(param_2);
    if (param_3 == 0) {
      uVar3 = FUN_10001f424();
      local_58 = 0x4000000040000000;
      FUN_10064025c(uVar3,&local_58);
      FUN_10063f0e8(param_1,uVar3);
    }
    else {
      lVar1 = 0x28;
      if ((*(uint *)(param_2 + 0x6740) & 0xfffffffb) != 0) {
        lVar1 = 0x30;
      }
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x1a0) + 8) + lVar1);
      uVar3 = FUN_10018616c();
      FUN_1001e1d50(uVar3,param_2,uVar4);
    }
    FUN_100642b14(param_2,uVar3);
    if (*(char *)(param_2 + 0x6745) != '\0') {
      FUN_1002f3e98(0x3f000000,param_2 + 0x56a0,1);
    }
  }
  return;
}




void FUN_1002f6ee0(long param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  switch(*(undefined4 *)(param_1 + 0x6740)) {
  case 0:
    FUN_1001a9200(param_1,"Effect_Back_TapWave");
    pcVar3 = "Effect_Common_Front";
    goto LAB_1002f6fc4;
  case 1:
    FUN_1001a9200(param_1,"Effect_Rare_Front_Gem");
    pcVar3 = "Effect_Rare_Front_Flare_LQ";
    goto LAB_1002f6fc4;
  case 2:
    cVar1 = *(char *)(param_1 + 0x6744);
    pcVar2 = "Effect_Epic_Front_LQ";
    pcVar3 = "Effect_Epic_Front";
    break;
  case 3:
    cVar1 = *(char *)(param_1 + 0x6744);
    pcVar2 = "Effect_Legendary_Front_LQ";
    pcVar3 = "Effect_Legendary_Front";
    break;
  case 4:
    cVar1 = *(char *)(param_1 + 0x6744);
    pcVar2 = "Effect_Currency_Glory_Front_Flare_LQ";
    pcVar3 = "Effect_Currency_Glory_Front_Flare";
    break;
  case 5:
    cVar1 = *(char *)(param_1 + 0x6744);
    pcVar2 = "Effect_Currency_Ice_Front_Flare_LQ";
    pcVar3 = "Effect_Currency_Ice_Front_Flare";
    break;
  default:
    return;
  }
  if (cVar1 != '\0') {
    pcVar3 = pcVar2;
  }
LAB_1002f6fc4:
  FUN_1001a9200(param_1,pcVar3);
  return;
}




void FUN_1002f6fd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10008e900();
  *(code **)(lVar1 + 0x10) = FUN_1002f6da4;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  FUN_100642b14(param_2,lVar1);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(param_1);
  FUN_100642b14(param_2,uVar2);
  lVar1 = FUN_10008e900();
  *(code **)(lVar1 + 0x10) = FUN_1002f6694;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  FUN_100642b14(param_2,lVar1);
  return;
}




void FUN_1002f7054(undefined8 param_1,long param_2,int param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  void *local_80 [2];
  char local_69;
  void *local_68;
  undefined8 uStack_60;
  long local_58;
  
  uVar7 = *(undefined8 *)(param_2 + 0x308);
  uVar2 = FUN_1004d2524("saturation");
  uVar3 = FUN_100015208("saturation",uVar2,0x12345678);
  uVar2 = 0x3f800000;
  if (*(char *)(param_2 + 0x6746) != '\0') {
    uVar2 = 0;
  }
  FUN_1010af998(uVar2,uVar7,uVar3);
  local_68 = (void *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  if (*(char *)(param_2 + 0x6746) == '\0') {
    switch(*(undefined4 *)(param_2 + 0x6740)) {
    case 0:
      pcVar4 = "Effect_Common_Front_NoDelay";
      break;
    case 1:
      pcVar4 = "Effect_Rare_Front_NoDelay";
      break;
    case 2:
      pcVar4 = "Effect_Epic_Front_NoDelay";
      break;
    case 3:
      pcVar4 = "Effect_Legendary_Front_NoDelay";
      break;
    case 4:
      pcVar4 = "Effect_Currency_Glory_Front_NoDelay";
      break;
    case 5:
      pcVar4 = "Effect_Currency_Ice_Front_NoDelay";
      break;
    default:
      goto switchD_1002f7100_default;
    }
    goto LAB_1002f719c;
  }
  switch(*(undefined4 *)(param_2 + 0x6740)) {
  case 0:
    pcVar4 = "Ghost_Common";
    break;
  case 1:
    pcVar4 = "Ghost_Rare";
    break;
  case 2:
    pcVar4 = "Ghost_Epic";
    break;
  case 3:
    pcVar4 = "Ghost_Legendary";
    break;
  default:
    goto switchD_1002f7100_default;
  }
LAB_1002f719c:
  FUN_10001549c(local_80,pcVar4);
  std::string::operator=((string *)&local_68,(string *)local_80);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  else {
switchD_1002f7100_default:
  }
  if (param_3 != 0) {
    FUN_100642324(param_2);
  }
  if (0.0 < (float)param_1) {
    uVar3 = FUN_10001f55c();
    FUN_10063f0e8(param_1);
    FUN_100642b14(param_2,uVar3);
  }
  lVar1 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_1001e1d58(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_1001e1ddc(puVar6,param_2,&local_68);
  FUN_100642b14(param_2,puVar6);
  if (local_58 < 0) {
    operator_delete(local_68);
  }
  return;
}




void FUN_1002f72b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_100642324();
  FUN_1002f7054(0,param_1,1);
  lVar1 = FUN_10008e900();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x48);
  *(code **)(lVar1 + 0x10) = FUN_1002f6684;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  FUN_100642b14(param_1,lVar1);
  return;
}




void FUN_1002f730c(undefined8 param_1)

{
  undefined1 auStack_40 [32];
  
  FUN_1001a87e8();
  FUN_100644aec(auStack_40,DAT_101d2383c,0);
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_1002f7358(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  
  FUN_100642324();
  uVar1 = FUN_10001f424();
  local_38 = param_2;
  uStack_34 = param_2;
  FUN_10064025c(uVar1,&local_38);
  FUN_10063f0e8(param_1,uVar1);
  FUN_100642b14(param_3,uVar1);
  lVar2 = FUN_10008e900();
  *(code **)(lVar2 + 0x10) = FUN_1002f6d90;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  FUN_100642b14(param_3,lVar2);
  lVar2 = FUN_10008e900();
  uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x1a0) + 8) + 0x20);
  *(code **)(lVar2 + 0x10) = FUN_1002f6684;
  *(undefined8 *)(lVar2 + 0x20) = uVar1;
  FUN_100642b14(param_3,lVar2);
  return;
}




void FUN_1002f7408(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 local_58;
  undefined4 *local_50;
  undefined4 local_44;
  ulong local_40;
  undefined4 *local_38;
  
  *(uint *)(param_1 + 0x65c4) = *(uint *)(param_1 + 0x65c4) | 4;
  FUN_100642324();
  FUN_100642324(param_1 + 0x4508);
  uVar1 = *(uint *)(param_1 + 0x458c);
  if ((uVar1 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x458c) = uVar1 & 0xffff807f;
    FUN_1000200a0(param_1 + 0x4508);
  }
  local_40 = 0;
  local_38 = (undefined4 *)0x0;
  local_44 = 0x1d;
  FUN_1000228fc(&local_40,&local_44);
  switch(*(undefined4 *)(param_1 + 0x6740)) {
  case 0:
    local_44 = 0x15;
    break;
  case 1:
    local_44 = 0x15;
    FUN_1000228fc(&local_40,&local_44);
    local_44 = 0x17;
    break;
  case 2:
    local_44 = 0x15;
    FUN_1000228fc(&local_40,&local_44);
    local_44 = 0x17;
    FUN_1000228fc(&local_40,&local_44);
    local_44 = 0x19;
    break;
  case 3:
    local_44 = 0x15;
    FUN_1000228fc(&local_40,&local_44);
    local_44 = 0x17;
    FUN_1000228fc(&local_40,&local_44);
    local_44 = 0x19;
    FUN_1000228fc(&local_40,&local_44);
    local_44 = 0x1b;
    break;
  default:
    goto switchD_1002f749c_default;
  }
  FUN_1000228fc(&local_40,&local_44);
switchD_1002f749c_default:
  local_58 = 0;
  local_50 = (undefined4 *)0x0;
  FUN_100026bb4(&local_58,local_40 & 0xffffffff);
  if ((int)local_40 == 0) {
    iVar3 = 0;
  }
  else {
    lVar6 = (local_40 & 0xffffffff) << 2;
    puVar4 = local_38;
    puVar5 = local_50;
    do {
      *puVar5 = *puVar4;
      lVar6 = lVar6 + -4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
      iVar3 = (int)local_40;
    } while (lVar6 != 0);
  }
  local_58 = CONCAT44(local_58._4_4_,iVar3);
  FUN_1001a9150(param_1,&local_58,0);
  if (local_50 != (undefined4 *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (undefined4 *)0x0;
  }
  FUN_1001a87e8(param_1);
  FUN_1001a9200(param_1,"Back_Craft_Idle");
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  lVar6 = FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/progress_rumble_loop.mp3",1,0);
  if (lVar6 != 0) {
    uVar2 = *(undefined4 *)(lVar6 + 0x30);
    *(long *)(param_1 + 0x6730) = lVar6 + 0x28;
    *(undefined4 *)(param_1 + 0x6738) = uVar2;
  }
  if (local_38 != (undefined4 *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1002f7624(long param_1)

{
  int *piVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  (**(code **)**(undefined8 **)(param_1 + 0x6728))();
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/card_destroyed.mp3",0,0);
  plVar2 = *(long **)(param_1 + 0x6730);
  if (plVar2 != (long *)0x0) {
    piVar1 = (int *)(param_1 + 0x6738);
    if (*piVar1 == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0x6730);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*piVar1 == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0x6730) = 0;
            *piVar1 = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3e4ccccd,uVar4);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6730) = 0;
      *piVar1 = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1002f7700(long param_1)

{
  int *piVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_100642324();
  FUN_1001a86c8(param_1,1);
  FUN_1001a87e8(param_1);
  uVar5 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x128);
  uVar2 = FUN_10018616c();
  FUN_1001e1d50(uVar2,param_1,uVar5);
  FUN_100642b14(param_1,uVar2);
  FUN_1002f7054(0x3e4ccccd,param_1,0);
  FUN_1002f6fd4(0x3dcccccd,param_1);
  plVar3 = *(long **)(param_1 + 0x6730);
  if (plVar3 != (long *)0x0) {
    piVar1 = (int *)(param_1 + 0x6738);
    if (*piVar1 == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        plVar3 = *(long **)(param_1 + 0x6730);
        uVar2 = 0;
        if (plVar3 != (long *)0x0) {
          if (*piVar1 == (int)plVar3[1]) {
            uVar2 = (**(code **)(*plVar3 + 0x10))();
          }
          else {
            uVar2 = 0;
            *(undefined8 *)(param_1 + 0x6730) = 0;
            *piVar1 = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0x3f000000,uVar2);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x6730) = 0;
      *piVar1 = DAT_101dc0b88;
    }
  }
  FUN_1001e79b8(0x3f800000,"build://Sounds/Cards/spoils_cards_flip.mp3",0,0);
  return;
}




void thunk_FUN_1002f7860(void)

{
  FUN_1002f7860();
  return;
}




void FUN_1002f7834(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002f7860();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002f7c44(void)

{
  FUN_1002f7c44();
  return;
}




void FUN_1002f784c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002f7c44();
  operator_delete(pvVar1);
  return;
}




void FUN_1002f7860(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002f7860_10148c460;
  param_1[0xcc6] = &PTR_FUN_1014a7108;
  param_1[0xcdd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xce0);
  FUN_10064e2bc(param_1 + 0xcc6);
  param_1[0xca8] = &PTR_FUN_1014a7108;
  param_1[0xcbf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xcc2);
  FUN_10064e2bc(param_1 + 0xca8);
  FUN_1002f7c44(param_1 + 0xad4);
  param_1[0xab6] = &PTR_FUN_1014a7108;
  param_1[0xacd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xad0);
  FUN_10064e2bc(param_1 + 0xab6);
  thunk_FUN_100657580(param_1 + 0xab4);
  thunk_FUN_100657580(param_1 + 0xab2);
  thunk_FUN_100657580(param_1 + 0xab0);
  param_1[0xa92] = &PTR_FUN_1014a7108;
  param_1[0xaa9] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xaac);
  FUN_10064e2bc(param_1 + 0xa92);
  param_1[0xa74] = &PTR_FUN_1014a7108;
  param_1[0xa8b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa8e);
  FUN_10064e2bc(param_1 + 0xa74);
  param_1[0xa56] = &PTR_FUN_1014a7108;
  param_1[0xa6d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa70);
  FUN_10064e2bc(param_1 + 0xa56);
  param_1[0xa38] = &PTR_FUN_1014a7108;
  param_1[0xa4f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa52);
  FUN_10064e2bc(param_1 + 0xa38);
  param_1[0xa1a] = &PTR_FUN_1014a7108;
  param_1[0xa31] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa34);
  FUN_10064e2bc(param_1 + 0xa1a);
  param_1[0x9fc] = &PTR_FUN_1014a7108;
  param_1[0xa13] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa16);
  FUN_10064e2bc(param_1 + 0x9fc);
  param_1[0x9de] = &PTR_FUN_1014a7108;
  param_1[0x9f5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9f8);
  FUN_10064e2bc(param_1 + 0x9de);
  thunk_FUN_100651068(param_1 + 0x9b8);
  thunk_FUN_100651068(param_1 + 0x992);
  thunk_FUN_100651068(param_1 + 0x96c);
  thunk_FUN_100651068(param_1 + 0x946);
  FUN_10064221c(param_1 + 0x935);
  FUN_10064221c(param_1 + 0x924);
  thunk_FUN_100651068(param_1 + 0x8fe);
  thunk_FUN_100651068(param_1 + 0x8d8);
  thunk_FUN_100651068(param_1 + 0x8b2);
  FUN_10064221c(param_1 + 0x8a1);
  thunk_FUN_100651068(param_1 + 0x87b);
  FUN_10064221c(param_1 + 0x86a);
  param_1[0x48e] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x834);
  FUN_10064221c(param_1 + 0x823);
  FUN_10064e2bc(param_1 + 0x7ef);
  FUN_10064221c(param_1 + 0x7de);
  thunk_FUN_100651068(param_1 + 0x7b8);
  thunk_FUN_100651068(param_1 + 0x792);
  param_1[0x774] = &PTR_FUN_1014a7108;
  param_1[0x78b] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78e);
  FUN_10064e2bc(param_1 + 0x774);
  param_1[0x756] = &PTR_FUN_1014a7108;
  param_1[0x76d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x770);
  FUN_10064e2bc(param_1 + 0x756);
  FUN_10064221c(param_1 + 0x745);
  FUN_10003bd40(param_1 + 0x48e);
  param_1[0xb2] = &PTR_FUN_10145efd0;
  FUN_10064e2bc(param_1 + 0x458);
  FUN_10064221c(param_1 + 0x447);
  FUN_10064e2bc(param_1 + 0x413);
  FUN_10064221c(param_1 + 0x402);
  thunk_FUN_100651068(param_1 + 0x3dc);
  thunk_FUN_100651068(param_1 + 0x3b6);
  param_1[0x398] = &PTR_FUN_1014a7108;
  param_1[0x3af] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x3b2);
  FUN_10064e2bc(param_1 + 0x398);
  param_1[0x37a] = &PTR_FUN_1014a7108;
  param_1[0x391] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x394);
  FUN_10064e2bc(param_1 + 0x37a);
  FUN_10064221c(param_1 + 0x369);
  FUN_10003bd40(param_1 + 0xb2);
  thunk_FUN_1001aa23c(param_1 + 0x76);
  FUN_1001a7dd8(param_1);
  return;
}




void FUN_1002f7c44(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002f7c44_10148c318;
  thunk_FUN_100651068(param_1 + 0x1ae);
  param_1[400] = &PTR_FUN_1014a7108;
  param_1[0x1a7] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1aa);
  FUN_10064e2bc(param_1 + 400);
  thunk_FUN_100651068(param_1 + 0x16a);
  param_1[0x14c] = &PTR_FUN_1014a7108;
  param_1[0x163] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x166);
  FUN_10064e2bc(param_1 + 0x14c);
  FUN_10064221c(param_1 + 0x13b);
  param_1[0xa5] = &PTR_FUN_101464e50;
  param_1[0x110] = &PTR_FUN_1014a6db0;
  param_1[0x127] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x12a);
  FUN_10064e2bc(param_1 + 0x110);
  param_1[0xe6] = &PTR_FUN_1014a6db0;
  param_1[0xfd] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x100);
  FUN_10064e2bc(param_1 + 0xe6);
  param_1[0xbc] = &PTR_FUN_1014a6db0;
  param_1[0xd3] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0xd6);
  FUN_10064e2bc(param_1 + 0xbc);
  FUN_10064e2bc(param_1 + 0xa5);
  FUN_10064221c(param_1 + 0x94);
  param_1[0x17] = &PTR_FUN_10145ea78;
  param_1[0x75] = &PTR_FUN_1014a7108;
  param_1[0x8c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x8f);
  FUN_10064e2bc(param_1 + 0x75);
  param_1[0x57] = &PTR_FUN_1014a7108;
  param_1[0x6e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x71);
  FUN_10064e2bc(param_1 + 0x57);
  FUN_10064221c(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002f7de4(void)

{
  DAT_101e45968 = 0xff;
  DAT_101e4596a = 0xffff;
  DAT_101e4596c = 0xffff;
  DAT_101e4596e = 0xffbc9c44;
  DAT_101e45972 = 0xff1166f2;
  DAT_101e45976 = 0xffe0e0e0;
  DAT_101e4597a = 0xffa0a0a0;
  DAT_101e4597e = 0xff8c8c8c;
  DAT_101e45982 = 0xff322213;
  DAT_101e45986 = 0xff091911;
  DAT_101e4598a = 0xff170c19;
  DAT_101e4598e = 0xff241a14;
  DAT_101e45992 = 0xff14171c;
  DAT_101e45996 = 0xff221911;
  DAT_101e4599a = 0xff1a1416;
  DAT_101e4599e = 0xff121414;
  DAT_101e459a2 = 0xff1a1809;
  DAT_101e459a6 = 0xff141414;
  DAT_101e459aa = 0xff141414;
  DAT_101e459ae = 0xff2929c0;
  DAT_101e459b2 = 0xff283082;
  DAT_101e459b6 = 0xff5262cc;
  DAT_101e459ba = 0xff283082;
  DAT_101e459be = 0xff5262cc;
  DAT_101e459c2 = 0xff745c42;
  DAT_101e459c6 = 0xff184155;
  DAT_101e459ca = 0xff92665e;
  DAT_101e459ce = 0xffbc9c44;
  DAT_101e459d2 = 0xffbbae56;
  DAT_101e459d6 = 0xff8b7b01;
  DAT_101e459da = 0xff90b3ef;
  DAT_101e459de = 0xff728ebe;
  DAT_101e459e2 = 0xff19459d;
  DAT_101e459e6 = 0xff9d877b;
  DAT_101e459ea = 0xffcbb1a3;
  DAT_101e459ee = 0xff3f6fb5;
  DAT_101e459f2 = 0xffc5c5c5;
  DAT_101e459f6 = 0xff4fc1f1;
  DAT_101e459fa = 0xff606060;
  DAT_101e459fe = 0xffc5ff7b;
  DAT_101e45a02 = 0xff5271eb;
  DAT_101e45a06 = 0xfffae076;
  DAT_101e45a0a = 0xff3ac8f6;
  DAT_101e45a0e = 0xffaaaaaa;
  DAT_101e45a14 = 0xffe19400;
  DAT_101e45a18 = 0xffe19400;
  DAT_101e45a1c = 0xffe550b2;
  DAT_101e45a20 = 0xfff22ae8;
  DAT_101e45a24 = 0xff005ae1;
  DAT_101e45a28 = 0xff1addfa;
  DAT_101e45a2c = 0xff2424b3;
  DAT_101e45a30 = 0xff2424b3;
  DAT_101e45a34 = 0xff646464;
  DAT_101e45a38 = 0xff92665e;
  DAT_101e45a3c = 0xff646037;
  DAT_101e45a44 = 0xff1111a1;
  DAT_101e45a4c = 0xffc8c8c8;
  DAT_101e45a48 = 0xff321ee1;
  DAT_101e45a50 = 0xff321ee1;
  DAT_101e45a5c = 0xff6259b3;
  DAT_101e45a60 = 0xff506e73;
  DAT_101e45a40 = 0xffffffff;
  DAT_101e45a64 = 0xff9dbf86;
  DAT_101e45a54 = 0xff7fe801;
  DAT_101e45a68 = 0xffa35244;
  DAT_101e45a58 = 0xffffffff;
  DAT_101e45a6c = 0xffca828e;
  DAT_101e45a70 = 0xffa6a6a6;
  DAT_101e45a74 = 0xffa6a6a6;
  DAT_101e45a78 = 0xffffffff;
  DAT_101e45a7c = 0xff88ea2f;
  DAT_101e45a80 = 0xff8c8c8c;
  DAT_101e45a84 = 0xffffb400;
  DAT_101e45a88 = 0xffff00ff;
  DAT_101e45a8c = 0xff00aded;
  DAT_101e45a90 = 0xff33d3ff;
  DAT_101e45a94 = 0xff7fe801;
  DAT_101e45a98 = 0xff282828;
  DAT_101e45a9c = 0xfff0f0f0;
  DAT_101e45aa0 = 0xffa4781e;
  DAT_101e45aa4 = 0xffa6654b;
  DAT_101e45aa8 = 0xff93435b;
  DAT_101e45aac = 0xff387f9c;
  DAT_101e45ab0 = 0xffa3781e;
  DAT_101e45ab4 = 0xffffd18a;
  DAT_101e45ab8 = 0xffff61f7;
  DAT_101e45abc = 0xff5de1f2;
  DAT_101e45ac0 = 0xff80eaff;
  DAT_101e45ac4 = 0xff32e00e;
  DAT_101e45ac8 = 0xff5a3c10;
  DAT_101e45acc = 0xff330b03;
  DAT_101e45ad0 = 0xff33031d;
  DAT_101e45ad4 = 0xff032433;
  DAT_101e45ad8 = 0xff9e8e8d;
  DAT_101e45ae0 = 0x4326000041900000;
  DAT_101e45ae8 = 0x4326000041c00000;
  DAT_101d23838 = FUN_100644a94("UI::EVENT_LOOT_CARD_3D_SHOW");
  DAT_101d2383c = FUN_100644a94("UI::EVENT_LOOT_CARD_3D_HIDE");
  return;
}




long * FUN_1002f84e4(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined **ppuVar8;
  long *plVar9;
  long lVar10;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10148c628;
  puVar6 = puVar6 + 0x17;
  FUN_1006421a8(puVar6);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08(plVar1);
  plVar9 = param_1 + 0x46;
  FUN_100653ff8(plVar9);
  plVar2 = param_1 + 0x67;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x85;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xa3;
  thunk_FUN_100652c08(plVar4);
  *(byte *)(param_1 + 0xc1) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  if ((param_2 & 1) == 0) {
    FUN_100642bd8(puVar6,plVar1,1);
    FUN_100642bd8(puVar6,plVar9,1);
    FUN_100642bd8(puVar6,plVar3,1);
    FUN_100642bd8(puVar6,plVar4,1);
    FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_shadow");
    if ((*(float *)(param_1 + 0x32) != 0.5) || (*(float *)((long)param_1 + 0x194) != 0.5)) {
      param_1[0x32] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    if ((*(float *)(param_1 + 0x31) != 4.0) || (*(float *)((long)param_1 + 0x18c) != 4.0)) {
      lVar10 = NEON_fmov(0x40800000,4);
      param_1[0x31] = lVar10;
      FUN_1000200a0(plVar1);
    }
    *(uint *)((long)param_1 + 0x1c4) = *(uint *)((long)param_1 + 0x1c4) & 0xffffffbf;
    pcVar7 = "generic_large_circle";
    ppuVar8 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  else {
    FUN_100642bd8(puVar6,plVar9,1);
    FUN_100642bd8(puVar6,plVar2,1);
    FUN_100642bd8(puVar6,plVar3,1);
    pcVar7 = "circle_button_fill";
    ppuVar8 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  FUN_10065403c(plVar9,*ppuVar8,pcVar7);
  FUN_100652dfc(plVar9,0xb);
  if ((*(float *)(param_1 + 0x50) == 0.5) && (*(float *)((long)param_1 + 0x284) == 0.5)) {
    if ((param_2 & 1) != 0) goto LAB_1002f86d0;
LAB_1002f8790:
    if ((*(float *)(param_1 + 0x4f) == 2.8) && (*(float *)((long)param_1 + 0x27c) == 2.8)) {
      ppuVar8 = &PTR_s_build___Talent_Coins_tga_101854a28;
      goto LAB_1002f87e8;
    }
    param_1[0x4f] = 0x4033333340333333;
    ppuVar8 = &PTR_s_build___Talent_Coins_tga_101854a28;
  }
  else {
    param_1[0x50] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar9);
    if ((param_2 & 1) == 0) goto LAB_1002f8790;
LAB_1002f86d0:
    FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_frame");
    FUN_100652dd4(plVar2,&DAT_10115a164,2);
    uVar5 = *(uint *)((long)param_1 + 0x3bc);
    if ((uVar5 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x3bc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
      FUN_1000200a0(plVar2);
    }
    if ((*(float *)(param_1 + 0x71) != 0.5) || (*(float *)((long)param_1 + 0x38c) != 0.5)) {
      param_1[0x71] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar2);
    }
    if (*(float *)((long)param_1 + 0x37c) == 2.0) {
      ppuVar8 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
      goto LAB_1002f87e8;
    }
    *(undefined4 *)((long)param_1 + 0x37c) = 0x40000000;
    ppuVar8 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
    plVar9 = plVar2;
  }
  FUN_1000200a0(plVar9);
LAB_1002f87e8:
  FUN_100652ca4(plVar3,*ppuVar8);
  if ((*(float *)(param_1 + 0x8f) != 0.5) || (*(float *)((long)param_1 + 0x47c) != 0.5)) {
    param_1[0x8f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x8e) != 1.0) || (*(float *)((long)param_1 + 0x474) != 1.0)) {
    lVar10 = NEON_fmov(0x3f800000,4);
    param_1[0x8e] = lVar10;
    FUN_1000200a0(plVar3);
  }
  if ((param_2 & 1) == 0) {
    FUN_100652ca4(plVar4,PTR_s_build___Talent_Coins_tga_101854a28);
    if ((*(float *)(param_1 + 0xad) != 0.5) || (*(float *)((long)param_1 + 0x56c) != 0.5)) {
      param_1[0xad] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar4);
    }
    if ((*(float *)(param_1 + 0xac) != 3.18) || (*(float *)((long)param_1 + 0x564) != 3.18)) {
      param_1[0xac] = 0x404b851f404b851f;
      FUN_1000200a0(plVar4);
    }
  }
  *(uint *)((long)param_1 + 0x59c) = *(uint *)((long)param_1 + 0x59c) & 0xffffffbf;
  return param_1;
}




long * thunk_FUN_1002f84e4(long *param_1,byte param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  uint uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined **ppuVar8;
  long *plVar9;
  long lVar10;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10148c628;
  puVar6 = puVar6 + 0x17;
  FUN_1006421a8(puVar6);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100652c08(plVar1);
  plVar9 = param_1 + 0x46;
  FUN_100653ff8(plVar9);
  plVar2 = param_1 + 0x67;
  thunk_FUN_100652c08(plVar2);
  plVar3 = param_1 + 0x85;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xa3;
  thunk_FUN_100652c08(plVar4);
  *(byte *)(param_1 + 0xc1) = param_2;
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  if ((param_2 & 1) == 0) {
    FUN_100642bd8(puVar6,plVar1,1);
    FUN_100642bd8(puVar6,plVar9,1);
    FUN_100642bd8(puVar6,plVar3,1);
    FUN_100642bd8(puVar6,plVar4,1);
    FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"corner_shadow");
    if ((*(float *)(param_1 + 0x32) != 0.5) || (*(float *)((long)param_1 + 0x194) != 0.5)) {
      param_1[0x32] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar1);
    }
    if ((*(float *)(param_1 + 0x31) != 4.0) || (*(float *)((long)param_1 + 0x18c) != 4.0)) {
      lVar10 = NEON_fmov(0x40800000,4);
      param_1[0x31] = lVar10;
      FUN_1000200a0(plVar1);
    }
    *(uint *)((long)param_1 + 0x1c4) = *(uint *)((long)param_1 + 0x1c4) & 0xffffffbf;
    pcVar7 = "generic_large_circle";
    ppuVar8 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  else {
    FUN_100642bd8(puVar6,plVar9,1);
    FUN_100642bd8(puVar6,plVar2,1);
    FUN_100642bd8(puVar6,plVar3,1);
    pcVar7 = "circle_button_fill";
    ppuVar8 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  }
  FUN_10065403c(plVar9,*ppuVar8,pcVar7);
  FUN_100652dfc(plVar9,0xb);
  if ((*(float *)(param_1 + 0x50) == 0.5) && (*(float *)((long)param_1 + 0x284) == 0.5)) {
    if ((param_2 & 1) != 0) goto LAB_1002f86d0;
LAB_1002f8790:
    if ((*(float *)(param_1 + 0x4f) == 2.8) && (*(float *)((long)param_1 + 0x27c) == 2.8)) {
      ppuVar8 = &PTR_s_build___Talent_Coins_tga_101854a28;
      goto LAB_1002f87e8;
    }
    param_1[0x4f] = 0x4033333340333333;
    ppuVar8 = &PTR_s_build___Talent_Coins_tga_101854a28;
  }
  else {
    param_1[0x50] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar9);
    if ((param_2 & 1) == 0) goto LAB_1002f8790;
LAB_1002f86d0:
    FUN_100652cac(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098,"circle_button_frame");
    FUN_100652dd4(plVar2,&DAT_10115a164,2);
    uVar5 = *(uint *)((long)param_1 + 0x3bc);
    if ((uVar5 & 0x7f80) != 0x4c80) {
      *(uint *)((long)param_1 + 0x3bc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
      FUN_1000200a0(plVar2);
    }
    if ((*(float *)(param_1 + 0x71) != 0.5) || (*(float *)((long)param_1 + 0x38c) != 0.5)) {
      param_1[0x71] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar2);
    }
    if (*(float *)((long)param_1 + 0x37c) == 2.0) {
      ppuVar8 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
      goto LAB_1002f87e8;
    }
    *(undefined4 *)((long)param_1 + 0x37c) = 0x40000000;
    ppuVar8 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
    plVar9 = plVar2;
  }
  FUN_1000200a0(plVar9);
LAB_1002f87e8:
  FUN_100652ca4(plVar3,*ppuVar8);
  if ((*(float *)(param_1 + 0x8f) != 0.5) || (*(float *)((long)param_1 + 0x47c) != 0.5)) {
    param_1[0x8f] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x8e) != 1.0) || (*(float *)((long)param_1 + 0x474) != 1.0)) {
    lVar10 = NEON_fmov(0x3f800000,4);
    param_1[0x8e] = lVar10;
    FUN_1000200a0(plVar3);
  }
  if ((param_2 & 1) == 0) {
    FUN_100652ca4(plVar4,PTR_s_build___Talent_Coins_tga_101854a28);
    if ((*(float *)(param_1 + 0xad) != 0.5) || (*(float *)((long)param_1 + 0x56c) != 0.5)) {
      param_1[0xad] = (long)&DAT_3f0000003f000000;
      FUN_1000200a0(plVar4);
    }
    if ((*(float *)(param_1 + 0xac) != 3.18) || (*(float *)((long)param_1 + 0x564) != 3.18)) {
      param_1[0xac] = 0x404b851f404b851f;
      FUN_1000200a0(plVar4);
    }
  }
  *(uint *)((long)param_1 + 0x59c) = *(uint *)((long)param_1 + 0x59c) & 0xffffffbf;
  return param_1;
}




void FUN_1002f88f4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f88fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002f8900(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002f8908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))();
  return;
}




void FUN_1002f890c(long param_1)

{
  FUN_10064e5ec(0,0,param_1 + 0xb8,8,param_1,8);
  return;
}




void FUN_1002f8928(float param_1,float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_58;
  float fStack_54;
  
  lVar4 = param_3 + 0xb8;
  fVar7 = param_2;
  fVar5 = (float)FUN_1006425d0(lVar4,0,1,0,1);
  lVar1 = param_3 + 0x230;
  fVar8 = fVar7;
  fVar6 = (float)FUN_1006531b0(lVar1);
  if (((((0.0 < fVar5) && (0.0 < fVar7)) && (0.0 <= param_1)) && ((0.0 <= param_2 && (0.0 < fVar6)))
      ) && (0.0 < fVar8)) {
    fVar8 = (float)NEON_fminnm(param_1 / fVar5,3.0 / *(float *)(param_3 + 0x278));
    fVar6 = (float)NEON_fminnm(param_2 / fVar7,3.0 / *(float *)(param_3 + 0x27c));
    local_58 = fVar8 * fVar5;
    fVar7 = fVar6 * fVar7;
    fStack_54 = fVar7;
    FUN_10064e48c(param_3,&local_58);
    bVar2 = *(float *)(param_3 + 0x100) == fVar8;
    bVar3 = *(float *)(param_3 + 0x104) == fVar6;
    if (*(char *)(param_3 + 0x608) == '\0') {
      if (bVar2 && bVar3) {
        return;
      }
      *(float *)(param_3 + 0x100) = fVar8;
      *(float *)(param_3 + 0x104) = fVar6;
    }
    else {
      if (!bVar2 || !bVar3) {
        *(float *)(param_3 + 0x100) = fVar8;
        *(float *)(param_3 + 0x104) = fVar6;
        FUN_1000200a0(lVar4);
      }
      fVar8 = (float)FUN_1006531b0(lVar1);
      fVar7 = 99.0 / fVar7;
      if ((*(float *)(param_3 + 0x278) != 99.0 / fVar8) || (*(float *)(param_3 + 0x27c) != fVar7)) {
        *(float *)(param_3 + 0x278) = 99.0 / fVar8;
        *(float *)(param_3 + 0x27c) = fVar7;
        FUN_1000200a0(lVar1);
      }
      lVar4 = param_3 + 0x338;
      fVar8 = (float)FUN_1006531b0(lVar4);
      if ((*(float *)(param_3 + 0x380) == 101.0 / fVar8) &&
         (*(float *)(param_3 + 900) == 101.0 / fVar7)) {
        return;
      }
      *(float *)(param_3 + 0x380) = 101.0 / fVar8;
      *(float *)(param_3 + 900) = 101.0 / fVar7;
    }
    FUN_1000200a0(lVar4);
  }
  return;
}




void FUN_1002f8ad4(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffb | uVar1;
  FUN_1002f8b04();
  return;
}




void FUN_1002f8b04(long param_1,int param_2)

{
  long lVar1;
  undefined4 local_40 [2];
  undefined4 local_38 [2];
  
  lVar1 = param_1 + 0x230;
  if (param_2 != 0) {
    FUN_100652dd4(lVar1,&DAT_10115a168,2);
    FUN_100652e14(0x3f800000,lVar1);
    FUN_100652dd4(param_1 + 0x428,&DAT_10115a168,2);
    FUN_100652e14(0x3f800000,param_1 + 0x428);
    return;
  }
  local_38[0] = 0xff00c000;
  FUN_100652dd4(lVar1,local_38,2);
  FUN_100652e14(0,lVar1);
  local_40[0] = 0xff008000;
  FUN_100652dd4(param_1 + 0x428,local_40,2);
  FUN_100652e14(0,param_1 + 0x428);
  return;
}




void FUN_1002f8be0(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002f8c00(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x1c4) = *(uint *)(param_1 + 0x1c4) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002f8c30(undefined1 param_1 [16],undefined4 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  char *pcVar2;
  undefined4 local_c8;
  undefined4 uStack_c4;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  plVar1 = param_3 + 0x46;
  FUN_100652d8c(plVar1);
  if ((char)param_3[0xc1] == '\0') {
    FUN_100652e40(plVar1,0);
  }
  FUN_100652cac(plVar1,param_4,param_5);
  pcVar2 = "talent_coin_%s";
  if ((char)param_3[0xc1] != '\0') {
    pcVar2 = "talent_coin_%s_small";
  }
  FUN_10006d330(&local_c8,pcVar2);
  FUN_100652cdc(param_3 + 0x85,&local_c8);
  if ((char)param_3[0xc1] == '\0') {
    FUN_1004d2698(&local_c8,"talent_glow_%s");
    FUN_100652cdc(param_3 + 0xa3,&local_c8);
  }
  local_c8 = FUN_1006531b0(param_3 + 0x85);
  uStack_c4 = param_2;
  FUN_10064e48c(param_3,&local_c8);
  (**(code **)(*param_3 + 0xe8))(param_3);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1002f8d54(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148c628;
  param_1[0xa3] = &PTR_FUN_1014a7108;
  param_1[0xba] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbd);
  FUN_10064e2bc(param_1 + 0xa3);
  param_1[0x85] = &PTR_FUN_1014a7108;
  param_1[0x9c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9f);
  FUN_10064e2bc(param_1 + 0x85);
  param_1[0x67] = &PTR_FUN_1014a7108;
  param_1[0x7e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x81);
  FUN_10064e2bc(param_1 + 0x67);
  param_1[0x46] = &PTR_FUN_1014a77a8;
  param_1[0x5d] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 100);
  param_1[0x46] = &PTR_FUN_1014a7108;
  param_1[0x5d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002f8e4c(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148c628;
  param_1[0xa3] = &PTR_FUN_1014a7108;
  param_1[0xba] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbd);
  FUN_10064e2bc(param_1 + 0xa3);
  param_1[0x85] = &PTR_FUN_1014a7108;
  param_1[0x9c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x9f);
  FUN_10064e2bc(param_1 + 0x85);
  param_1[0x67] = &PTR_FUN_1014a7108;
  param_1[0x7e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x81);
  FUN_10064e2bc(param_1 + 0x67);
  param_1[0x46] = &PTR_FUN_1014a77a8;
  param_1[0x5d] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 100);
  param_1[0x46] = &PTR_FUN_1014a7108;
  param_1[0x5d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x60);
  FUN_10064e2bc(param_1 + 0x46);
  param_1[0x28] = &PTR_FUN_1014a7108;
  param_1[0x3f] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x42);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long FUN_1002f8f48(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001a7cf4();
  *puVar1 = &PTR_FUN_10148c770;
  thunk_FUN_100652c08(puVar1 + 0x76);
  FUN_100657568(param_1 + 0x4a0);
  FUN_1006421a8(param_1 + 0x4b0);
  *(undefined ***)(param_1 + 0x4b0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x538);
  *(undefined ***)(param_1 + 0x538) = &PTR_thunk_FUN_10064221c_10144b7e8;
  *(undefined4 *)(param_1 + 0x5c0) = 0x3f4ccccd;
  *(undefined8 *)(param_1 + 0x5c4) = 0x100000004;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined2 *)(param_1 + 0x5d0) = 0;
  FUN_1006575f4(param_1 + 0x4a0,PTR_s_build___MenuSkinsHeroesBlueprint_101854a48);
  FUN_1002f9014(param_1);
  FUN_1002f9114(param_1);
  *(undefined4 *)(param_1 + 0x5c4) = 1;
  FUN_1001a8964(param_1,"rare");
  return param_1;
}




void FUN_1002f9014(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = FUN_100345b94();
  uVar2 = FUN_10034c450(uVar2,"*TalentCoinRep3D*");
  FUN_1001a812c(param_1,uVar2);
  local_40 = DAT_101dc1cb8;
  uStack_38 = DAT_101dc1cb8;
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_1004d2524("art_file");
  uVar2 = FUN_100015208("art_file",uVar1,0x12345678);
  FUN_1010afab8(uVar3,uVar2,*(undefined8 *)(param_1 + 0x4a0));
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_1004d2524("u_repeat");
  uVar2 = FUN_100015208("u_repeat",uVar1,0x12345678);
  FUN_1010af9d0(uVar3,uVar2,&uStack_38);
  uVar3 = *(undefined8 *)(param_1 + 0x308);
  uVar1 = FUN_1004d2524("u_offset");
  uVar2 = FUN_100015208("u_offset",uVar1,0x12345678);
  FUN_1010af9d0(uVar3,uVar2,&local_40);
  return;
}




void FUN_1002f9114(long *param_1)

{
  long *plVar1;
  
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x96,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0xa7,1);
  plVar1 = param_1 + 0x76;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100652e40(plVar1,0);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  if ((*(uint *)((long)param_1 + 0x434) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x434) = *(uint *)((long)param_1 + 0x434) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100652dd4(plVar1,&DAT_10115a170,2);
  *(uint *)((long)param_1 + 0x434) = *(uint *)((long)param_1 + 0x434) | 0x10;
  FUN_10064e47c(0x43480000,0x43480000,plVar1);
  if ((*(float *)(param_1 + 0x80) == 0.5) && (*(float *)((long)param_1 + 0x404) == 0.5)) {
    return;
  }
  param_1[0x80] = (long)&DAT_3f0000003f000000;
  FUN_1000200a0(plVar1);
  return;
}




void FUN_1002f9224(long param_1,int param_2)

{
  *(int *)(param_1 + 0x5c4) = param_2;
  if (param_2 - 1U < 3) {
    FUN_1001a8964(param_1,(&PTR_s_rare_10148c8f8)[(int)(param_2 - 1U)]);
    return;
  }
  FUN_1001a8964(param_1,"");
  return;
}




long thunk_FUN_1002f8f48(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1001a7cf4();
  *puVar1 = &PTR_FUN_10148c770;
  thunk_FUN_100652c08(puVar1 + 0x76);
  FUN_100657568(param_1 + 0x4a0);
  FUN_1006421a8(param_1 + 0x4b0);
  *(undefined ***)(param_1 + 0x4b0) = &PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0x538);
  *(undefined ***)(param_1 + 0x538) = &PTR_thunk_FUN_10064221c_10144b7e8;
  *(undefined4 *)(param_1 + 0x5c0) = 0x3f4ccccd;
  *(undefined8 *)(param_1 + 0x5c4) = 0x100000004;
  *(undefined4 *)(param_1 + 0x5cc) = 0;
  *(undefined2 *)(param_1 + 0x5d0) = 0;
  FUN_1006575f4(param_1 + 0x4a0,PTR_s_build___MenuSkinsHeroesBlueprint_101854a48);
  FUN_1002f9014(param_1);
  FUN_1002f9114(param_1);
  *(undefined4 *)(param_1 + 0x5c4) = 1;
  FUN_1001a8964(param_1,"rare");
  return param_1;
}




void FUN_1002f9254(long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    lVar3 = param_1 + 0x4a0;
    if (*(long *)(param_1 + 0x4a0) != 0) {
      FUN_1006576cc(lVar3);
    }
    FUN_1006575f4(lVar3,param_2);
    uVar5 = *(undefined8 *)(param_1 + 0x308);
    uVar1 = FUN_1004d2524("art_file");
    uVar2 = FUN_100015208("art_file",uVar1,0x12345678);
    FUN_1010afab8(uVar5,uVar2,*(undefined8 *)(param_1 + 0x4a0));
    lVar3 = FUN_1006575c4(lVar3,param_3);
    if (lVar3 != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x4a0) + 8);
      fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
      fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x4c));
      local_48 = (float)*(ushort *)(lVar3 + 4) / fVar6;
      fStack_44 = 1.0 - (float)((uint)*(ushort *)(lVar3 + 10) + (uint)*(ushort *)(lVar3 + 6)) /
                        fVar7;
      local_50 = (float)((uint)*(ushort *)(lVar3 + 8) + (uint)*(ushort *)(lVar3 + 4)) / fVar6 -
                 local_48;
      fStack_4c = 1.0 - ((float)*(ushort *)(lVar3 + 6) / fVar7 + fStack_44);
      uVar5 = *(undefined8 *)(param_1 + 0x308);
      uVar1 = FUN_1004d2524("u_repeat");
      uVar2 = FUN_100015208("u_repeat",uVar1,0x12345678);
      FUN_1010af9d0(uVar5,uVar2,&local_50);
      uVar5 = *(undefined8 *)(param_1 + 0x308);
      uVar1 = FUN_1004d2524("u_offset");
      uVar2 = FUN_100015208("u_offset",uVar1,0x12345678);
      FUN_1010af9d0(uVar5,uVar2,&local_48);
    }
  }
  return;
}




void FUN_1002f93dc(undefined8 param_1)

{
  FUN_1001a86c8(param_1,0);
  FUN_100642324(param_1);
  return;
}




void FUN_1002f9404(long param_1)

{
  FUN_1002f9414(param_1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 8));
  return;
}




void FUN_1002f9414(undefined8 param_1,undefined8 *param_2)

{
  FUN_1001a86c8(param_1,0);
  FUN_1001a8e34(*(undefined4 *)(param_2 + 2),param_1,*param_2,*(undefined1 *)((long)param_2 + 0x14),
                0);
  return;
}




void FUN_1002f9450(long param_1)

{
  FUN_1002f9414(param_1,**(undefined8 **)(*(long *)(param_1 + 0x1a0) + 8));
  return;
}




void FUN_1002f9460(undefined8 param_1,undefined8 param_2)

{
  FUN_1002f9414(param_2,param_1);
  return;
}




void FUN_1002f9470(void)

{
  return;
}




void FUN_1002f9474(long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x5c8) = param_2;
  *(undefined4 *)(param_1 + 0x5cc) = param_3;
  return;
}




void FUN_1002f9480(void)

{
  return;
}




void FUN_1002f9484(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_100642324();
  FUN_1002f9508(param_1,*(undefined1 *)(param_1 + 0x5d1));
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x10);
  uVar1 = FUN_10018616c();
  FUN_1001e1d50(uVar1,param_1,uVar2);
  FUN_100642b14(param_1,uVar1);
  if (param_2 != 0) {
    FUN_1002f9704(0x3e99999a,param_1);
    return;
  }
  return;
}




void FUN_1002f9508(long param_1,int param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  char cVar6;
  ushort uVar7;
  char *pcVar8;
  char *pcVar9;
  ushort *puVar10;
  void *local_70 [2];
  char local_59;
  void *local_58;
  ulong local_50;
  ulong local_48;
  
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0;
  iVar2 = *(int *)(param_1 + 0x5c4);
  if (iVar2 == 3) {
    cVar6 = *(char *)(param_1 + 0x5d0);
    pcVar8 = "Effect_Coin_Legendary_Front_Flare_LQ";
    pcVar9 = "Effect_Coin_Legendary_Front_Flare";
  }
  else if (iVar2 == 2) {
    cVar6 = *(char *)(param_1 + 0x5d0);
    pcVar8 = "Effect_Coin_Epic_Front_Flare_LQ";
    pcVar9 = "Effect_Coin_Epic_Front_Flare";
  }
  else {
    if (iVar2 != 1) goto LAB_1002f95bc;
    cVar6 = *(char *)(param_1 + 0x5d0);
    pcVar8 = "Effect_Coin_Rare_Front_Flare_LQ";
    pcVar9 = "Effect_Coin_Rare_Front_Flare";
  }
  if (cVar6 != '\0') {
    pcVar9 = pcVar8;
  }
  FUN_10001549c(local_70,pcVar9);
  std::string::operator=((string *)&local_58,(string *)local_70);
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
LAB_1002f95bc:
  uVar1 = local_50;
  if (-1 < (long)local_48) {
    uVar1 = local_48 >> 0x38;
  }
  if (uVar1 != 0) {
    FUN_100642324(param_1 + 0x4b0);
    puVar4 = (ushort *)FUN_1001af8c8();
    FUN_1001e1ddc(puVar4,param_1,&local_58);
    if (param_2 != 0) {
      uVar5 = FUN_1001af8c8();
      pcVar8 = "Effect_Coin_New_Generic";
      if (*(char *)(param_1 + 0x5d0) != '\0') {
        pcVar8 = "Effect_Coin_New_Generic_LQ";
      }
      FUN_10001549c(local_70,pcVar8);
      FUN_1001e1ddc(uVar5,param_1,local_70);
      if (local_59 < '\0') {
        operator_delete(local_70[0]);
      }
      lVar3 = DAT_101dbd2f8;
      uVar7 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
      if ((ulong)uVar7 == 0xffff) {
        puVar10 = (ushort *)0x0;
      }
      else {
        puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar7 * 0x40 + 0x10);
        if (uVar7 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
          uVar7 = 0xffff;
        }
        else {
          uVar7 = *puVar10;
        }
        *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar7;
        *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
        FUN_10063f1bc(puVar10);
        *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
      }
      FUN_10063f2a4(puVar10,puVar4);
      puVar4 = puVar10;
    }
    FUN_100642b14(param_1 + 0x4b0,puVar4);
  }
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void FUN_1002f9704(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_10008e900();
  *(code **)(lVar1 + 0x10) = FUN_1002f9480;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  FUN_100642b14(param_2,lVar1);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(param_1);
  FUN_100642b14(param_2,uVar2);
  lVar1 = FUN_10008e900();
  *(code **)(lVar1 + 0x10) = FUN_1002f9470;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  FUN_100642b14(param_2,lVar1);
  return;
}




void FUN_1002f9784(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  
  uVar2 = FUN_10018616c();
  FUN_1001e1d50(uVar2,param_1,*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x20));
  FUN_100642b14(param_1,uVar2);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(0x3e4ccccd);
  FUN_100642b14(param_1,uVar2);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_100640770(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_1006407a4(puVar4,"EVENT_3D_COIN_TALENT_UPGRADE_REVEAL");
  FUN_100642b14(param_1,puVar4);
  FUN_1001a87e8(param_1);
  FUN_1002f9508(param_1,0);
  FUN_1002f9898(param_1);
  return;
}




void FUN_1002f9898(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  void *local_60 [2];
  char local_49;
  void *local_48;
  ulong local_40;
  undefined8 local_38;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  local_38 = 0;
  iVar2 = *(int *)(param_1 + 0x5c4);
  if (iVar2 == 3) {
    cVar4 = *(char *)(param_1 + 0x5d0);
    pcVar6 = "Effect_Coin_Legendary_Upgrade_LQ";
    pcVar7 = "Effect_Coin_Legendary_Upgrade";
  }
  else if (iVar2 == 2) {
    cVar4 = *(char *)(param_1 + 0x5d0);
    pcVar6 = "Effect_Coin_Epic_Upgrade_LQ";
    pcVar7 = "Effect_Coin_Epic_Upgrade";
  }
  else {
    if (iVar2 != 1) goto LAB_1002f9944;
    cVar4 = *(char *)(param_1 + 0x5d0);
    pcVar6 = "Effect_Coin_Rare_Upgrade_LQ";
    pcVar7 = "Effect_Coin_Rare_Upgrade";
  }
  if (cVar4 != '\0') {
    pcVar7 = pcVar6;
  }
  FUN_10001549c(local_60,pcVar7);
  std::string::operator=((string *)&local_48,(string *)local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
LAB_1002f9944:
  uVar5 = (uint)(char)local_38._7_1_;
  uVar1 = local_40;
  if (-1 < (int)uVar5) {
    uVar1 = (ulong)local_38._7_1_;
  }
  if (uVar1 != 0) {
    FUN_100642324(param_1 + 0x538);
    uVar3 = FUN_1001af8c8();
    FUN_1001e1ddc(uVar3,param_1,&local_48);
    FUN_100642b14(param_1 + 0x538,uVar3);
    uVar5 = (uint)local_38._7_1_;
  }
  if ((uVar5 >> 7 & 1) != 0) {
    operator_delete(local_48);
  }
  return;
}




void FUN_1002f99ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_100642324();
  lVar1 = FUN_10008e900();
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 0x18);
  *(code **)(lVar1 + 0x10) = FUN_1002f9460;
  *(undefined8 *)(lVar1 + 0x20) = uVar2;
  FUN_100642b14(param_1,lVar1);
  return;
}




void FUN_1002f99f8(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  ushort uVar2;
  undefined8 uVar3;
  ushort *puVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  
  FUN_100642324();
  lVar1 = FUN_10008e900();
  uVar3 = *(undefined8 *)(*(long *)(*(long *)(param_3 + 0x1a0) + 8) + 8);
  *(code **)(lVar1 + 0x10) = FUN_1002f9460;
  *(undefined8 *)(lVar1 + 0x20) = uVar3;
  FUN_100642b14(param_3,lVar1);
  lVar1 = DAT_101dbd2f8;
  uVar2 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar2 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar2 * 0x40 + 0x10);
    if (uVar2 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar2 = 0xffff;
    }
    else {
      uVar2 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar2;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10064021c(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  local_48 = param_2;
  uStack_44 = param_2;
  FUN_10064025c(puVar4,&local_48);
  FUN_10063f0e8(param_1,puVar4);
  FUN_100642b14(param_3,puVar4);
  return;
}




void FUN_1002f9b00(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148c770;
  FUN_10064221c(param_1 + 0xa7);
  FUN_10064221c(param_1 + 0x96);
  thunk_FUN_100657580(param_1 + 0x94);
  param_1[0x76] = &PTR_FUN_1014a7108;
  param_1[0x8d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x90);
  FUN_10064e2bc(param_1 + 0x76);
  FUN_1001a7dd8(param_1);
  return;
}




void FUN_1002f9b70(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148c770;
  FUN_10064221c(param_1 + 0xa7);
  FUN_10064221c(param_1 + 0x96);
  thunk_FUN_100657580(param_1 + 0x94);
  param_1[0x76] = &PTR_FUN_1014a7108;
  param_1[0x8d] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x90);
  FUN_10064e2bc(param_1 + 0x76);
  pvVar1 = (void *)FUN_1001a7dd8(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1002f9be4(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148c920;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100655644(puVar2);
  plVar1 = param_1 + 0x42;
  thunk_FUN_100650e64(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100655930(puVar2,plVar1,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar3 = FUN_1004e0150("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
  FUN_1006513c0(plVar1,uVar3);
  return param_1;
}




long * thunk_FUN_1002f9be4(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148c920;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100655644(puVar2);
  plVar1 = param_1 + 0x42;
  thunk_FUN_100650e64(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100655930(puVar2,plVar1,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar3 = FUN_1004e0150("MENU_NEWS_FEED_TAB_NAME_COMING_SOON",0);
  FUN_1006513c0(plVar1,uVar3);
  return param_1;
}




void FUN_1002f9c90(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_100642d08();
  if (iVar1 != 0) {
    local_28 = (**(code **)(**(long **)(param_3 + 0x20) + 0x48))();
    uStack_24 = param_2;
    FUN_10064e48c(param_3,&local_28);
  }
  FUN_10064e5ec(0,0,param_3 + 0x210,8,param_3,8);
  return;
}




long * FUN_1002f9cf8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  *puVar8 = &PTR_FUN_10148ca68;
  puVar8 = puVar8 + 0x17;
  FUN_1006421a8(puVar8);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x79;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x97;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xbd;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xdb;
  thunk_FUN_100650e64(plVar6);
  *(undefined2 *)(param_1 + 0x101) = 0;
  *(undefined1 *)((long)param_1 + 0x80a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100642bd8(puVar8,plVar1,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100655930(plVar1,plVar5,1);
  FUN_100655930(plVar1,plVar6,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar9 = FUN_1004e0150("MENU_PLAY_RANKED_REQUIRES",0);
  FUN_1006513c0(plVar2,uVar9);
  FUN_10065165c(plVar2,1);
  FUN_1006516bc(plVar2,&DAT_101158c80);
  uVar7 = *(uint *)((long)param_1 + 0x53c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x53c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_1000200a0(plVar4);
  }
  FUN_10065165c(plVar4,1);
  FUN_1006516bc(plVar4,&DAT_101158c80);
  *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) & 0xfffffffb;
  uVar7 = *(uint *)((long)param_1 + 0x75c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x75c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_1000200a0(plVar6);
  }
  FUN_10065165c(plVar6,1);
  FUN_1006516bc(plVar6,&DAT_101158c80);
  *(uint *)((long)param_1 + 0x75c) = *(uint *)((long)param_1 + 0x75c) & 0xfffffffb;
  FUN_100652cac(plVar3,DAT_101854a08,"shiny_checkbox_off");
  FUN_100652cac(plVar5,DAT_101854a08,"shiny_checkbox_off");
  *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) & 0xfffffffb;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}




long * thunk_FUN_1002f9cf8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  puVar8 = (undefined8 *)FUN_10064e20c();
  *puVar8 = &PTR_FUN_10148ca68;
  puVar8 = puVar8 + 0x17;
  FUN_1006421a8(puVar8);
  param_1[0x17] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0x28;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x79;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0x97;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0xbd;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xdb;
  thunk_FUN_100650e64(plVar6);
  *(undefined2 *)(param_1 + 0x101) = 0;
  *(undefined1 *)((long)param_1 + 0x80a) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar8,1);
  FUN_100642bd8(puVar8,plVar1,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100655930(plVar1,plVar5,1);
  FUN_100655930(plVar1,plVar6,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar9 = FUN_1004e0150("MENU_PLAY_RANKED_REQUIRES",0);
  FUN_1006513c0(plVar2,uVar9);
  FUN_10065165c(plVar2,1);
  FUN_1006516bc(plVar2,&DAT_101158c80);
  uVar7 = *(uint *)((long)param_1 + 0x53c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x53c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_1000200a0(plVar4);
  }
  FUN_10065165c(plVar4,1);
  FUN_1006516bc(plVar4,&DAT_101158c80);
  *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) & 0xfffffffb;
  uVar7 = *(uint *)((long)param_1 + 0x75c);
  if ((uVar7 & 0x7f80) != 0x6600) {
    *(uint *)((long)param_1 + 0x75c) = uVar7 & 0xffff8000 | uVar7 & 0x7f | 0x6600;
    FUN_1000200a0(plVar6);
  }
  FUN_10065165c(plVar6,1);
  FUN_1006516bc(plVar6,&DAT_101158c80);
  *(uint *)((long)param_1 + 0x75c) = *(uint *)((long)param_1 + 0x75c) & 0xfffffffb;
  FUN_100652cac(plVar3,DAT_101854a08,"shiny_checkbox_off");
  FUN_100652cac(plVar5,DAT_101854a08,"shiny_checkbox_off");
  *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) & 0xfffffffb;
  (**(code **)(*param_1 + 0x90))(param_1);
  return param_1;
}




void FUN_1002f9f54(long *param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  *(undefined1 *)(param_1 + 0x101) = param_2;
  if (((DAT_101e45b00 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e45b00), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101e45af0);
    ___cxa_atexit(FUN_100046198,&DAT_101e45af0,0x100000000);
    ___cxa_guard_release(&DAT_101e45b00);
  }
  if (((DAT_101e45b18 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e45b18), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101e45b08);
    ___cxa_atexit(FUN_100046198,&DAT_101e45b08,0x100000000);
    ___cxa_guard_release(&DAT_101e45b18);
  }
  FUN_1004e38ac(&DAT_101e45b08,"%d");
  uVar2 = FUN_1004e0150("MENU_PLAY_MENU_MODE_REQUIRES_LEVEL_LABEL",0);
  FUN_1000153b4(&DAT_101e45af0,uVar2);
  FUN_1004e3120(auStack_40,"[LEVEL_NUMBER]");
  FUN_1004e3d50(&DAT_101e45af0,0,auStack_40,&DAT_101e45b08);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1006513c0(param_1 + 0x97,&DAT_101e45af0);
  *(uint *)((long)param_1 + 0x53c) = *(uint *)((long)param_1 + 0x53c) | 4;
  *(uint *)((long)param_1 + 0x44c) = *(uint *)((long)param_1 + 0x44c) | 4;
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002fa0f4(long *param_1,undefined1 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  *(undefined1 *)((long)param_1 + 0x809) = param_2;
  if (((DAT_101e45b30 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e45b30), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101e45b20);
    ___cxa_atexit(FUN_100046198,&DAT_101e45b20,0x100000000);
    ___cxa_guard_release(&DAT_101e45b30);
  }
  if (((DAT_101e45b48 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e45b48), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101e45b38);
    ___cxa_atexit(FUN_100046198,&DAT_101e45b38,0x100000000);
    ___cxa_guard_release(&DAT_101e45b48);
  }
  FUN_1004e38ac(&DAT_101e45b38,"%d");
  uVar2 = FUN_1004e0150("MENU_PLAY_MENU_MODE_REQUIRES_NUM_HEROES_LABEL",0);
  FUN_1000153b4(&DAT_101e45b20,uVar2);
  FUN_1004e3120(auStack_40,"[X]");
  FUN_1004e3d50(&DAT_101e45b20,0,auStack_40,&DAT_101e45b38);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_1006513c0(param_1 + 0xdb,&DAT_101e45b20);
  *(uint *)((long)param_1 + 0x75c) = *(uint *)((long)param_1 + 0x75c) | 4;
  *(uint *)((long)param_1 + 0x66c) = *(uint *)((long)param_1 + 0x66c) | 4;
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002fa294(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  bool bVar6;
  int iVar7;
  float fVar8;
  undefined8 uVar9;
  undefined4 local_58;
  undefined4 uStack_54;
  
  iVar7 = FUN_100642d08();
  if (iVar7 != 0) {
    local_58 = (**(code **)(**(long **)(param_3 + 0x20) + 0x48))();
    uStack_54 = param_2;
    FUN_10064e48c(param_3,&local_58);
  }
  lVar1 = param_3 + 0x4b8;
  FUN_100651594(lVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_101158c70);
  lVar2 = param_3 + 0x6d8;
  FUN_100651594(lVar2,PTR_s_build___Fonts_Brandon_Regular_48_10184e200,&DAT_101158c70);
  lVar3 = param_3 + 0x3c8;
  FUN_100652cdc(lVar3,"shiny_checkbox_off");
  lVar4 = param_3 + 0x5e8;
  FUN_100652cdc(lVar4,"shiny_checkbox_off");
  FUN_10064e47c(0x42900000,0x42900000,lVar3);
  FUN_10064e47c(0x42900000,0x42900000,lVar4);
  bVar6 = false;
  if ((*(float *)(param_3 + 0x410) == 0.75) && (bVar6 = false, !NAN(*(float *)(param_3 + 0x414)))) {
    bVar6 = *(float *)(param_3 + 0x414) == 0.75;
  }
  uVar9 = NEON_fmov(0x3f400000,4);
  if (!bVar6) {
    *(undefined8 *)(param_3 + 0x410) = uVar9;
    FUN_1000200a0(lVar3);
  }
  bVar6 = false;
  if ((*(float *)(param_3 + 0x630) == 0.75) && (bVar6 = false, !NAN(*(float *)(param_3 + 0x634)))) {
    bVar6 = *(float *)(param_3 + 0x634) == 0.75;
  }
  if (!bVar6) {
    *(undefined8 *)(param_3 + 0x630) = uVar9;
    FUN_1000200a0(lVar4);
  }
  FUN_10064e72c(0x41b00000,lVar4,0,lVar3,2);
  FUN_10064e72c(0,lVar4,3,lVar3,3);
  FUN_10064e72c(0x42000000,lVar1,3,lVar3,1);
  FUN_10064e72c(0x42000000,lVar2,3,lVar4,1);
  fVar8 = (float)FUN_10064eb7c(lVar1,7,param_3,5);
  FUN_10065179c(fVar8 + -16.0,0,0x3f800000,lVar1);
  FUN_10065179c(fVar8 + -16.0,0,0x3f800000,lVar2);
  FUN_10064e72c(0,lVar1,5,lVar3,5);
  FUN_10064e72c(0,lVar2,5,lVar4,5);
  FUN_1006557ec(param_3 + 0x140);
  FUN_10064e72c(0,param_3 + 0x298,4,param_3,4);
  pcVar5 = "shiny_checkbox_off";
  if (*(char *)(param_3 + 0x808) != '\0') {
    pcVar5 = "shiny_checkbox_on";
  }
  FUN_100652cdc(lVar3,pcVar5);
  pcVar5 = "shiny_checkbox_off";
  if (*(char *)(param_3 + 0x809) != '\0') {
    pcVar5 = "shiny_checkbox_on";
  }
  FUN_100652cdc(lVar4,pcVar5);
  FUN_10064e72c(0,param_3 + 0x140,4,param_3,4);
  return;
}




long * FUN_1002fa510(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148cbb0;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100655644(puVar2);
  plVar1 = param_1 + 0x42;
  thunk_FUN_1006509c0(plVar1);
  thunk_FUN_1001c6e5c(param_1 + 0x8a);
  thunk_FUN_100650e64(param_1 + 0x104);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100655930(puVar2,plVar1,1);
  FUN_100650dc4(plVar1,param_1 + 0x8a,1);
  FUN_100655930(puVar2,param_1 + 0x104,1);
  return param_1;
}




long * thunk_FUN_1002fa510(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148cbb0;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100655644(puVar2);
  plVar1 = param_1 + 0x42;
  thunk_FUN_1006509c0(plVar1);
  thunk_FUN_1001c6e5c(param_1 + 0x8a);
  thunk_FUN_100650e64(param_1 + 0x104);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100655930(puVar2,plVar1,1);
  FUN_100650dc4(plVar1,param_1 + 0x8a,1);
  FUN_100655930(puVar2,param_1 + 0x104,1);
  return param_1;
}




void FUN_1002fa5cc(long *param_1,undefined8 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  FUN_1001c6fd8(param_1 + 0x8a);
  uVar1 = FUN_1000f0a5c(param_2);
  if (uVar1 < 3) {
    FUN_100651460(param_1 + 0x104,(&PTR_DAT_10148cf78)[(int)uVar1]);
  }
  *(uint *)((long)param_1 + 0x8a4) =
       *(uint *)((long)param_1 + 0x8a4) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x8a4) & 3 | (uint)(0 < param_3) << 2;
  if (((DAT_101e45b60 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101e45b60), iVar2 != 0)) {
    FUN_1004e313c(&DAT_101e45b50);
    ___cxa_atexit(FUN_100046198,&DAT_101e45b50,0x100000000);
    ___cxa_guard_release(&DAT_101e45b60);
  }
  FUN_1004e38ac(&DAT_101e45b50,"%d");
  FUN_1006513c0(param_1 + 0x104,&DAT_101e45b50);
                    /* WARNING: Could not recover jumptable at 0x0001002fa684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002fa6d0(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_38;
  
  iVar3 = FUN_100642d08();
  if (iVar3 != 0) {
    uVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x48))();
    local_38 = CONCAT44(param_2,uVar4);
    FUN_10064e48c(param_3,&local_38);
  }
  local_38 = 0x4000000000000000;
  lVar1 = param_3 + 0x450;
  FUN_1001c7278(lVar1,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_1001c72a8(0x3f19999a,lVar1);
  FUN_1001c717c(lVar1,1);
  FUN_1001c71e4(lVar1,&local_38,0xdc403020);
  lVar2 = param_3 + 0x210;
  FUN_100650db0(lVar2,2);
  FUN_10064e47c(0x432a0000,0x432a0000,lVar2);
  FUN_10064e5ec(0,0,lVar1,8,lVar2,8);
  FUN_100650a8c(lVar2);
  lVar1 = param_3 + 0x820;
  FUN_100651038(lVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10065165c(lVar1,1);
  FUN_1006516bc(lVar1,&DAT_101158c80);
  FUN_1006516c8(lVar1,&local_38);
  FUN_10064e72c(0x41000000,lVar1,0,lVar2,2);
  FUN_10064e72c(0,lVar1,4,lVar2,4);
  FUN_1006557ec(param_3 + 0xb8);
  FUN_10064e5ec(0,0x41c00000,param_3 + 0xb8,8,param_3,8);
  return;
}




long * FUN_1002fa858(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148ccf8;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100655644(puVar2);
  plVar1 = param_1 + 0x42;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_100650e64(param_1 + 0x60);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100655930(puVar2,plVar1,1);
  FUN_100655930(puVar2,param_1 + 0x60,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"brawl_trophy");
  return param_1;
}




long * thunk_FUN_1002fa858(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148ccf8;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100655644(puVar2);
  plVar1 = param_1 + 0x42;
  thunk_FUN_100652c08(plVar1);
  thunk_FUN_100650e64(param_1 + 0x60);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100655930(puVar2,plVar1,1);
  FUN_100655930(puVar2,param_1 + 0x60,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"brawl_trophy");
  return param_1;
}




void FUN_1002fa90c(long *param_1)

{
  int iVar1;
  
  if (((DAT_101e45b78 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e45b78), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101e45b68);
    ___cxa_atexit(FUN_100046198,&DAT_101e45b68,0x100000000);
    ___cxa_guard_release(&DAT_101e45b78);
  }
  FUN_1004e38ac(&DAT_101e45b68,"%d");
  FUN_1006513c0(param_1 + 0x60,&DAT_101e45b68);
                    /* WARNING: Could not recover jumptable at 0x0001002fa978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_1002fa9d0(undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 local_38;
  
  iVar3 = FUN_100642d08();
  if (iVar3 != 0) {
    uVar4 = (**(code **)(**(long **)(param_3 + 0x20) + 0x48))();
    local_38 = CONCAT44(param_2,uVar4);
    FUN_10064e48c(param_3,&local_38);
  }
  local_38 = 0x4000000000000000;
  lVar1 = param_3 + 0x210;
  FUN_10064e47c(0x432a0000,0x432a0000,lVar1);
  lVar2 = param_3 + 0x300;
  FUN_100651038(lVar2,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  FUN_10065165c(lVar2,1);
  FUN_1006516bc(lVar2,&DAT_101158c80);
  FUN_1006516c8(lVar2,&local_38);
  FUN_10064e72c(0x41000000,lVar2,0,lVar1,2);
  FUN_10064e72c(0,lVar2,4,lVar1,4);
  FUN_1006557ec(param_3 + 0xb8);
  FUN_10064e5ec(0,0,param_3 + 0xb8,8,param_3,8);
  return;
}




long * FUN_1002faae0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148ce40;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100655644(puVar2);
  plVar1 = param_1 + 0x42;
  thunk_FUN_100650e64(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100655930(puVar2,plVar1,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar3 = FUN_1004e0150("PLAY_MENU_TILE_BANNED",0);
  FUN_1006513c0(plVar1,uVar3);
  return param_1;
}




long * thunk_FUN_1002faae0(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148ce40;
  puVar2 = puVar2 + 0x17;
  thunk_FUN_100655644(puVar2);
  plVar1 = param_1 + 0x42;
  thunk_FUN_100650e64(plVar1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar2,1);
  FUN_100655930(puVar2,plVar1,1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  uVar3 = FUN_1004e0150("PLAY_MENU_TILE_BANNED",0);
  FUN_1006513c0(plVar1,uVar3);
  return param_1;
}




void FUN_1002fab8c(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  int iVar2;
  float fVar3;
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = FUN_100642d08();
  if (iVar2 != 0) {
    local_28 = (**(code **)(*(long *)param_3[4] + 0x48))();
    uStack_24 = param_2;
    FUN_10064e48c(param_3,&local_28);
  }
  plVar1 = param_3 + 0x42;
  fVar3 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  FUN_100651708(fVar3 + -64.0,plVar1,1);
  FUN_100651700(plVar1,3);
  FUN_10064e5ec(0,0,plVar1,8,param_3,8);
  return;
}




void FUN_1002fac2c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148c920;
  thunk_FUN_100651068(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002fac84(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148c920;
  thunk_FUN_100651068(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002face0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148ca68;
  thunk_FUN_100651068(param_1 + 0xdb);
  param_1[0xbd] = &PTR_FUN_1014a7108;
  param_1[0xd4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd7);
  FUN_10064e2bc(param_1 + 0xbd);
  thunk_FUN_100651068(param_1 + 0x97);
  param_1[0x79] = &PTR_FUN_1014a7108;
  param_1[0x90] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x93);
  FUN_10064e2bc(param_1 + 0x79);
  thunk_FUN_100651068(param_1 + 0x53);
  param_1[0x28] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x3f);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002fada0(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148ca68;
  thunk_FUN_100651068(param_1 + 0xdb);
  param_1[0xbd] = &PTR_FUN_1014a7108;
  param_1[0xd4] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd7);
  FUN_10064e2bc(param_1 + 0xbd);
  thunk_FUN_100651068(param_1 + 0x97);
  param_1[0x79] = &PTR_FUN_1014a7108;
  param_1[0x90] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x93);
  FUN_10064e2bc(param_1 + 0x79);
  thunk_FUN_100651068(param_1 + 0x53);
  param_1[0x28] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x3f);
  FUN_10064e2bc(param_1 + 0x28);
  FUN_10064221c(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002fae64(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148cbb0;
  thunk_FUN_100651068(param_1 + 0x104);
  FUN_10017d364(param_1 + 0x8a);
  param_1[0x42] = &PTR_FUN_1014a6a80;
  FUN_10064230c(param_1 + 0x76);
  FUN_10064e2bc(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002faee8(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148cbb0;
  thunk_FUN_100651068(param_1 + 0x104);
  FUN_10017d364(param_1 + 0x8a);
  param_1[0x42] = &PTR_FUN_1014a6a80;
  FUN_10064230c(param_1 + 0x76);
  FUN_10064e2bc(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002faf70(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148ccf8;
  thunk_FUN_100651068(param_1 + 0x60);
  param_1[0x42] = &PTR_FUN_1014a7108;
  param_1[0x59] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5c);
  FUN_10064e2bc(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002faff4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148ccf8;
  thunk_FUN_100651068(param_1 + 0x60);
  param_1[0x42] = &PTR_FUN_1014a7108;
  param_1[0x59] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x5c);
  FUN_10064e2bc(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002fb07c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148ce40;
  thunk_FUN_100651068(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002fb0d4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148ce40;
  thunk_FUN_100651068(param_1 + 0x42);
  param_1[0x17] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x2e);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




long * FUN_1002fb130(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10148cfa0;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_1006543ec(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  ppuVar4 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar4 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  FUN_100652cac(puVar6,*ppuVar4,"white_background");
  FUN_100652dd4(puVar6,&DAT_10115a164,2);
  uVar5 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar5 & 0x7f80) != 0x4480) {
    *(uint *)((long)param_1 + 0x13c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4480;
    FUN_1000200a0(puVar6);
  }
  pcVar3 = "white_background";
  if (param_2 == 0) {
    pcVar3 = "xp_bar_background";
  }
  ppuVar4 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar4 = (undefined **)&DAT_101854a08;
  }
  FUN_100652cac(plVar1,*ppuVar4,pcVar3);
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffffffbf;
  FUN_100654488(plVar2,1);
  return param_1;
}




long * thunk_FUN_1002fb130(long *param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  char *pcVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_FUN_10148cfa0;
  puVar6 = puVar6 + 0x17;
  thunk_FUN_100652c08(puVar6);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x53;
  thunk_FUN_1006543ec(plVar2);
  (**(code **)(*param_1 + 0x78))(param_1,puVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100642bd8(plVar2,plVar1,1);
  ppuVar4 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar4 = &PTR_s_build___MenuPartsCommon_tga_101854970;
  }
  FUN_100652cac(puVar6,*ppuVar4,"white_background");
  FUN_100652dd4(puVar6,&DAT_10115a164,2);
  uVar5 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar5 & 0x7f80) != 0x4480) {
    *(uint *)((long)param_1 + 0x13c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4480;
    FUN_1000200a0(puVar6);
  }
  pcVar3 = "white_background";
  if (param_2 == 0) {
    pcVar3 = "xp_bar_background";
  }
  ppuVar4 = &PTR_s_build___HUDPartsCommon_atlas_10184e098;
  if (param_2 == 0) {
    ppuVar4 = (undefined **)&DAT_101854a08;
  }
  FUN_100652cac(plVar1,*ppuVar4,pcVar3);
  *(uint *)((long)param_1 + 0x22c) = *(uint *)((long)param_1 + 0x22c) & 0xffffffbf;
  FUN_100654488(plVar2,1);
  return param_1;
}




void FUN_1002fb290(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e47c(param_3 + 0xb8);
  FUN_10064e47c(param_1,param_2,param_3 + 0x298);
  FUN_10064e47c(param_1,param_2,param_3 + 0x1a8);
  FUN_10064e784(0x3f800000,0,*(undefined4 *)(param_3 + 0x438),0,0,0,param_3 + 0x1a8,param_3 + 0x298)
  ;
  return;
}




void FUN_1002fb314(undefined1 param_1 [16],long param_2)

{
  *(int *)(param_2 + 0x438) = param_1._0_4_;
  FUN_10064e784(0x3f800000,0,param_1._0_8_,0,0,0,param_2 + 0x1a8,param_2 + 0x298);
  return;
}




long * FUN_1002fb340(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined4 local_68 [2];
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  puVar12 = puVar10 + 0x17;
  *puVar10 = &PTR_thunk_FUN_1002ceae0_101487bf8;
  FUN_1002fb130(puVar12,0);
  plVar1 = param_1 + 0x9f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0xbd;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0xd4;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xf2;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x110;
  thunk_FUN_100650e64(plVar5);
  lVar11 = 0x9b0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar11);
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0xb90);
  do {
    thunk_FUN_100650e64((long)param_1 + lVar11);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0xdf0);
  plVar6 = param_1 + 0x1be;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x1e4;
  thunk_FUN_100650e64(plVar7);
  param_1[0x20b] = 0;
  param_1[0x20a] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar12,1);
  FUN_100642bd8(puVar12,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(puVar12,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x136,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x172,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x154,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x198,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100652cac(plVar1,DAT_101854a08,"xp_bar_fill_gradient");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_play");
  *(byte *)(param_1 + 0x10d) = *(byte *)(param_1 + 0x10d) | 1;
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10065165c(plVar5,1);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  local_68[0] = 0xffc08a77;
  FUN_100651460(plVar6,local_68);
  FUN_10065165c(plVar6,1);
  lVar11 = 0;
  bVar9 = true;
  do {
    bVar13 = bVar9;
    plVar1 = param_1 + lVar11 * 0x1e + 0x136;
    FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
    FUN_10064e47c(0,0x42400000,plVar1);
    uVar8 = *(uint *)((long)param_1 + lVar11 * 0xf0 + 0xa34);
    if ((uVar8 & 0x7f80) != 0x2c80) {
      *(uint *)((long)param_1 + lVar11 * 0xf0 + 0xa34) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2c80;
      FUN_1000200a0(plVar1);
    }
    FUN_100651038(param_1 + lVar11 * 0x26 + 0x172,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
    lVar11 = 1;
    bVar9 = false;
  } while (bVar13);
  return param_1;
}




long * thunk_FUN_1002fb340(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  uint uVar8;
  bool bVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined4 auStack_68 [2];
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  puVar12 = puVar10 + 0x17;
  *puVar10 = &PTR_thunk_FUN_1002ceae0_101487bf8;
  FUN_1002fb130(puVar12,0);
  plVar1 = param_1 + 0x9f;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0xbd;
  FUN_10064e264(plVar2);
  plVar3 = param_1 + 0xd4;
  thunk_FUN_100652c08(plVar3);
  plVar4 = param_1 + 0xf2;
  thunk_FUN_100652c08(plVar4);
  plVar5 = param_1 + 0x110;
  thunk_FUN_100650e64(plVar5);
  lVar11 = 0x9b0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar11);
    lVar11 = lVar11 + 0xf0;
  } while (lVar11 != 0xb90);
  do {
    thunk_FUN_100650e64((long)param_1 + lVar11);
    lVar11 = lVar11 + 0x130;
  } while (lVar11 != 0xdf0);
  plVar6 = param_1 + 0x1be;
  thunk_FUN_100650e64(plVar6);
  plVar7 = param_1 + 0x1e4;
  thunk_FUN_100650e64(plVar7);
  param_1[0x20b] = 0;
  param_1[0x20a] = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar12,1);
  FUN_100642bd8(puVar12,plVar2,1);
  FUN_100642bd8(plVar2,plVar3,1);
  FUN_100642bd8(plVar2,plVar4,1);
  FUN_100642bd8(plVar2,plVar5,1);
  FUN_100642bd8(puVar12,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x136,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x172,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x154,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x198,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100651038(plVar7,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_100652cac(plVar1,DAT_101854a08,"xp_bar_fill_gradient");
  FUN_100652cac(plVar3,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"circle_button_play");
  *(byte *)(param_1 + 0x10d) = *(byte *)(param_1 + 0x10d) | 1;
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_10065165c(plVar5,1);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238);
  auStack_68[0] = 0xffc08a77;
  FUN_100651460(plVar6,auStack_68);
  FUN_10065165c(plVar6,1);
  lVar11 = 0;
  bVar9 = true;
  do {
    bVar13 = bVar9;
    plVar1 = param_1 + lVar11 * 0x1e + 0x136;
    FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
    FUN_10064e47c(0,0x42400000,plVar1);
    uVar8 = *(uint *)((long)param_1 + lVar11 * 0xf0 + 0xa34);
    if ((uVar8 & 0x7f80) != 0x2c80) {
      *(uint *)((long)param_1 + lVar11 * 0xf0 + 0xa34) = uVar8 & 0xffff8000 | uVar8 & 0x7f | 0x2c80;
      FUN_1000200a0(plVar1);
    }
    FUN_100651038(param_1 + lVar11 * 0x26 + 0x172,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
    lVar11 = 1;
    bVar9 = false;
  } while (bVar13);
  return param_1;
}




void FUN_1002fb690(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x66c) = *(uint *)(param_1 + 0x66c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0xa34) = *(uint *)(param_1 + 0xa34) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0xc14) = *(uint *)(param_1 + 0xc14) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0xb24) = *(uint *)(param_1 + 0xb24) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0xd44) = *(uint *)(param_1 + 0xd44) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002fb6f0(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0xe74) = *(uint *)(param_1 + 0xe74) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002fb710(undefined4 param_1,undefined4 param_2,long param_3)

{
  undefined1 auStack_58 [8];
  void *local_50;
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined4 *)(param_3 + 0x1050) = param_1;
  *(undefined4 *)(param_3 + 0x1054) = param_2;
  FUN_1004d2698(auStack_48,"%d");
  FUN_1004e3120(auStack_58,auStack_48);
  (**(code **)(*(long *)(param_3 + 0xb90) + 0x138))(param_3 + 0xb90,auStack_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
  }
  FUN_1004d2698(auStack_48,"%d");
  FUN_1004e3120(auStack_58,auStack_48);
  (**(code **)(*(long *)(param_3 + 0xcc0) + 0x138))(param_3 + 0xcc0,auStack_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
  }
  NEON_fminnm(*(float *)(param_3 + 0x1058) - *(float *)(param_3 + 0x1050),
              *(undefined4 *)(param_3 + 0x1054));
  FUN_1004d2698(auStack_48,"%d/%d");
  FUN_1004e3120(auStack_58,auStack_48);
  FUN_1006513c0(param_3 + 0xdf0,auStack_58);
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1002fb85c(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x1058) = param_1;
  return;
}




void FUN_1002fb864(long param_1,undefined4 param_2)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  *(undefined4 *)(param_1 + 0x105c) = param_2;
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%d");
  FUN_1006513c0(param_1 + 0xf20,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_1002fb8c4(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  float local_68;
  undefined4 uStack_64;
  
  FUN_1002fbbc4();
  fVar7 = (float)(**(code **)(*param_3 + 0x48))(param_3);
  uStack_64 = (undefined4)param_2;
  uVar9 = param_2;
  local_68 = fVar7;
  FUN_100651184(param_3 + 0x1be);
  FUN_10064e504(param_3,(ulong)(uint)(int)(float)uVar9 << 0x20);
  plVar1 = param_3 + 0x1e4;
  fVar8 = 0.0;
  FUN_10064e5ec(0x41000000,0,plVar1,7,param_3,7);
  FUN_100655b6c(param_3 + 0x1fe);
  iVar6 = FUN_1004e3624();
  plVar2 = param_3 + 0x9f;
  if (iVar6 == 0) {
    fVar8 = (float)FUN_100651184(plVar1);
    FUN_10064e47c((fVar7 + -8.0) - fVar8,param_2,plVar2);
    fVar8 = (float)param_2;
    FUN_10064e72c(0x41000000,plVar2,3,plVar1,1);
  }
  else {
    FUN_10064e48c(plVar2,&local_68);
  }
  fVar7 = (float)FUN_100652e60(plVar2);
  plVar1 = param_3 + 0x17;
  FUN_10064e47c(fVar7 + -16.0,fVar8 + -16.0,plVar1);
  fVar8 = 0.0;
  FUN_10064e5ec(0x41000000,0,plVar1,7,plVar2,7);
  plVar3 = param_3 + 0xd4;
  uVar9 = FUN_100652e60(plVar3);
  FUN_10064e3cc(plVar1);
  plVar4 = param_3 + 0xf2;
  fVar7 = fVar8;
  FUN_100652e60(plVar4);
  FUN_10064e47c(uVar9,fVar8 + 16.0 + fVar7,plVar3);
  plVar5 = param_3 + 0xbd;
  uVar9 = FUN_100652e60(plVar3);
  FUN_10064e3cc(plVar1);
  FUN_10064e47c(uVar9,plVar5);
  FUN_10064e5ec(0,0,plVar3,6,plVar5,6);
  FUN_10064e5ec(0,0,plVar4,1,plVar3,0);
  FUN_10064e72c(0x80000000,param_3 + 0x110,1,plVar4,3);
  FUN_10064e72c(0,param_3 + 0x110,5,plVar4,5);
  FUN_10064e5ec(0,0,param_3 + 0x1be,8,plVar1,8);
  FUN_10064e5ec(0,0,param_3 + 0x136,0,plVar1,3);
  FUN_10064e5ec(0,0,param_3 + 0x154,1,plVar1,2);
  FUN_10064e5ec(0xc0a00000,0,param_3 + 0x172,5,param_3 + 0x136,3);
  FUN_10064e72c(0x41000000,param_3 + 0x172,0,plVar2,2);
  FUN_10064e5ec(0xc0a00000,0,param_3 + 0x198,5,param_3 + 0x154,3);
  FUN_10064e72c(0x41000000,param_3 + 0x198,0,plVar2,2);
  fVar7 = (float)FUN_10064e3cc(plVar1);
  FUN_10064e5ec(fVar7 * *(float *)(param_3 + 0x9e),0,plVar5,3,plVar1,3);
  return;
}




void FUN_1002fbbc4(long param_1)

{
  float fVar1;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined1 auStack_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  fVar1 = *(float *)(param_1 + 0x1050);
  NEON_fminnm(*(undefined4 *)(param_1 + 0x1058),*(float *)(param_1 + 0x1054));
  fVar1 = (fVar1 - fVar1) / (*(float *)(param_1 + 0x1054) - fVar1);
  *(float *)(param_1 + 0x4f0) = fVar1;
  FUN_10064e784(0x3f800000,0,fVar1,0,0,0,param_1 + 0x260,param_1 + 0x350);
  FUN_10064e784(0x3f800000,0,*(undefined4 *)(param_1 + 0x4f0),0,0,0,param_1 + 0x260,param_1 + 0x350)
  ;
  FUN_1004d2698(auStack_58,"%d");
  FUN_1004e3120(auStack_68,auStack_58);
  FUN_1006513c0(param_1 + 0x880,auStack_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  FUN_1004d2698(auStack_58,"%d/%d");
  FUN_1004e3120(auStack_68,auStack_58);
  FUN_1006513c0(param_1 + 0xdf0,auStack_68);
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_1002fbd28(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148cfa0;
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002fbdac(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148cfa0;
  FUN_10064e2bc(param_1 + 0x53);
  param_1[0x35] = &PTR_FUN_1014a7108;
  param_1[0x4c] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002fbe34(long param_1)

{
  if (*(long *)(param_1 + 0x188) != 0) {
    return;
  }
  FUN_100652cac(param_1 + 0xb8);
  FUN_100653080(param_1 + 0xb8,1);
  FUN_1002fbe80(param_1);
  return;
}




void FUN_1002fbe80(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  local_28 = (**(code **)(*param_3 + 0x48))();
  uStack_24 = param_2;
  FUN_10064e48c(param_3 + 0x17,&local_28);
  FUN_10064e5ec(0,0,param_3 + 0x17,8,param_3,8);
  return;
}




void thunk_FUN_1002fbe80(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (**(code **)(*param_3 + 0x48))();
  uStack_24 = param_2;
  FUN_10064e48c(param_3 + 0x17,&uStack_28);
  FUN_10064e5ec(0,0,param_3 + 0x17,8,param_3,8);
  return;
}




long * FUN_1002fbee4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_10064e20c();
  *puVar3 = &PTR_thunk_FUN_1002fc050_10148d230;
  thunk_FUN_1006421a8(puVar3 + 0x17);
  plVar1 = param_1 + 0x2a;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x48;
  thunk_FUN_100650e64(plVar2);
  thunk_FUN_100652c08(param_1 + 0x6e);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6e,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar3 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100652cac(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"menu_fuzzy_dot");
  FUN_100652dd4(plVar1,&DAT_10115a164,2);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  FUN_100651700(plVar2,3);
  FUN_100651460(plVar2,&DAT_10115a168);
  FUN_1006515e0(plVar2,1);
  FUN_100651764(0xbdcccccd,plVar2);
  FUN_10065165c(plVar2,1);
  FUN_1006516bc(plVar2,&DAT_10115a164);
  return param_1;
}




void FUN_1002fc050(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002fc050_10148d230;
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 8))();
  }
  param_1[0x28] = 0;
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 8))();
  }
  param_1[0x29] = 0;
  param_1[0x6e] = &PTR_FUN_1014a7108;
  param_1[0x85] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x88);
  FUN_10064e2bc(param_1 + 0x6e);
  thunk_FUN_100651068(param_1 + 0x48);
  param_1[0x2a] = &PTR_FUN_1014a7108;
  param_1[0x41] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2a);
  FUN_10064230c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002fc050(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002fc050_10148d230;
  if ((long *)param_1[0x28] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x28] + 8))();
  }
  param_1[0x28] = 0;
  if ((long *)param_1[0x29] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x29] + 8))();
  }
  param_1[0x29] = 0;
  param_1[0x6e] = &PTR_FUN_1014a7108;
  param_1[0x85] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x88);
  FUN_10064e2bc(param_1 + 0x6e);
  thunk_FUN_100651068(param_1 + 0x48);
  param_1[0x2a] = &PTR_FUN_1014a7108;
  param_1[0x41] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x44);
  FUN_10064e2bc(param_1 + 0x2a);
  FUN_10064230c(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002fc110(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002fc050();
  operator_delete(pvVar1);
  return;
}




void thunk_FUN_1002fc128(void)

{
  FUN_1002fc128();
  return;
}




void FUN_1002fc128(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  plVar1 = param_3 + 0x48;
  uVar3 = (**(code **)(*param_3 + 0x48))();
  (**(code **)(*param_3 + 0x48))(param_3);
  param_2 = param_2 * 0.5;
  FUN_10064e47c(uVar3,param_2,plVar1);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10065184c(param_2 * 0.5,0,0x3f800000,plVar1);
  fVar4 = 0.0;
  FUN_10064e5ec(0,param_3 + 0x6e,8,param_3,8);
  lVar2 = param_3[0x29];
  if (lVar2 == 0) {
    lVar2 = param_3[0x28];
  }
  if (lVar2 != 0) {
    fVar4 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    FUN_10064e47c(fVar4 * 0.8,0x43a80000,lVar2);
    FUN_10064e5ec(0,0,lVar2,8,param_3,8);
    fVar4 = 0.0;
    FUN_10064e5ec(0,plVar1,8,lVar2,6);
  }
  fVar5 = *(float *)((long)param_3 + 0x284);
  FUN_10064259c(plVar1);
  fVar5 = fVar4 + fVar5;
  (**(code **)(*param_3 + 0x48))(param_3);
  if (fVar4 < fVar5) {
    FUN_10064e5ec(0,0,plVar1,6,param_3,6);
  }
  uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_100651184(plVar1);
  FUN_10064e47c(uVar3,param_3 + 0x2a);
  FUN_10064e5ec(0,0,param_3 + 0x2a,8,plVar1,8);
  return;
}




void FUN_1002fc2d0(float param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = param_2 + 0x370;
  FUN_100652cac(lVar1);
  uVar2 = *(uint *)(param_2 + 0x3f4);
  if ((int)(param_1 * 255.0) != (uVar2 >> 7 & 0xff)) {
    *(uint *)(param_2 + 0x3f4) =
         uVar2 & 0xffff8000 | uVar2 & 0x7f | ((int)(param_1 * 255.0) & 0xffU) << 7;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e47c(0x43eb0000,0x43eb0000,lVar1);
  return;
}




void FUN_1002fc344(long param_1,long *param_2,undefined8 param_3)

{
  undefined1 *local_38;
  
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 8))();
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  }
  *(long **)(param_1 + 0x140) = param_2;
  *(undefined8 *)(param_1 + 0x148) = 0;
  local_38 = &DAT_3f0000003f000000;
  (**(code **)(*param_2 + 0x28))(param_2,&local_38);
  FUN_100642bd8(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x140),1);
  FUN_1006513c0(param_1 + 0x240,param_3);
  FUN_1002fc128(param_1);
  return;
}




void FUN_1002fc3e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  
  if (*(long **)(param_1 + 0x140) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x140) + 8))();
  }
  *(undefined8 *)(param_1 + 0x140) = 0;
  if (*(long **)(param_1 + 0x148) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x148) + 8))();
  }
  *(undefined8 *)(param_1 + 0x148) = 0;
  plVar1 = operator_new(0x1a8);
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148d0e8;
  thunk_FUN_100652c08(puVar2 + 0x17);
  (**(code **)(*plVar1 + 0x78))(plVar1,puVar2 + 0x17,1);
  *(long **)(param_1 + 0x148) = plVar1;
  FUN_1002fbe34(plVar1,param_2,param_3);
  FUN_1006513c0(param_1 + 0x240,param_4);
  FUN_100642bd8(param_1 + 0xb8,*(undefined8 *)(param_1 + 0x148),1);
  FUN_1002fc128(param_1);
  return;
}




long * FUN_1002fc4c4(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  uint uVar5;
  
  puVar4 = (undefined8 *)FUN_10064e20c();
  *puVar4 = &PTR_FUN_10148d378;
  puVar4 = puVar4 + 0x17;
  thunk_FUN_100652c08(puVar4);
  plVar1 = param_1 + 0x35;
  thunk_FUN_100651ebc(plVar1);
  plVar2 = param_1 + 0x5f;
  thunk_FUN_100652c08(plVar2);
  FUN_10064e264(param_1 + 0x7d);
  FUN_10064e264(param_1 + 0x94);
  plVar3 = param_1 + 0xab;
  FUN_1002fbee4(plVar3);
  (**(code **)(*param_1 + 0x78))(param_1,puVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x94,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x7d,1);
  FUN_1002fc2d0(0x3f800000,plVar3,DAT_101854a08,"quest_item_glow");
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  uVar5 = *(uint *)((long)param_1 + 0x37c);
  if ((uVar5 & 0x7f80) != 0x1e80) {
    *(uint *)((long)param_1 + 0x37c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x1e80;
    FUN_1000200a0(plVar2);
  }
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffffffbf;
  FUN_100652cac(puVar4,DAT_101854a08,"quest_normal_state");
  uVar5 = *(uint *)((long)param_1 + 0x13c);
  if ((uVar5 & 0x7f80) != 0x4c80) {
    *(uint *)((long)param_1 + 0x13c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x4c80;
    FUN_1000200a0(puVar4);
    uVar5 = *(uint *)((long)param_1 + 0x13c);
  }
  *(uint *)((long)param_1 + 0x13c) = uVar5 & 0xfffffffb;
  uVar5 = *(uint *)((long)param_1 + 0x22c);
  if ((uVar5 & 0x7f80) == 0x6b00) {
    uVar5 = uVar5 & 0xfffffffb;
  }
  else {
    *(uint *)((long)param_1 + 0x22c) = uVar5 & 0xffff807b | 0x6b00;
    FUN_1000200a0(plVar1);
    uVar5 = *(uint *)((long)param_1 + 0x22c);
  }
  *(uint *)((long)param_1 + 0x22c) = uVar5 & 0xffffffbf;
  FUN_100651f8c(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970);
  FUN_100651f94(plVar1,0,0,0,0,"quest_item_highlight_top",0,0,0,0,0,0,0,"quest_item_highlight_mid",0
                ,0,0,0,0,"quest_item_highlight_bot",0,0,0);
  return param_1;
}




void FUN_1002fc780(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x22c) = *(uint *)(param_1 + 0x22c) & 0xfffffffb | uVar1;
  return;
}




void FUN_1002fc7a0(long param_1)

{
  FUN_1002fc344(param_1 + 0x558);
  return;
}




void FUN_1002fc7a8(long param_1)

{
  FUN_1002fc3e8(param_1 + 0x558);
  return;
}




void FUN_1002fc7b0(long param_1,int param_2)

{
  uint uVar1;
  undefined4 local_14;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = 4;
  }
  *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x46c) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x524) = *(uint *)(param_1 + 0x524) & 0xfffffffb | uVar1;
  *(uint *)(param_1 + 0x5dc) = *(uint *)(param_1 + 0x5dc) & 0xfffffffb | uVar1;
  if (param_2 == 0) {
    local_14 = 0xffffffff;
  }
  else {
    local_14 = 0xff969696;
  }
  FUN_100652dd4(param_1 + 0xb8,&local_14,2);
  return;
}




void FUN_1002fc834(long param_1)

{
  if (*(long **)(param_1 + 0x698) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x698) + 8))();
  }
  *(undefined8 *)(param_1 + 0x698) = 0;
  if (*(long **)(param_1 + 0x6a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x6a0) + 8))();
  }
  *(undefined8 *)(param_1 + 0x6a0) = 0;
  return;
}




float FUN_1002fc880(undefined1 param_1 [16],float param_2,long param_3)

{
  FUN_1006425d0(param_3 + 0x4a0,1,0,0,1);
  param_2 = param_2 + 100.0;
  if (param_2 <= 420.0) {
    param_2 = 420.0;
  }
  return param_2;
}




void FUN_1002fc8c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  
  lVar1 = param_3 + 0xb8;
  uVar6 = param_2;
  FUN_10064e47c(lVar1);
  lVar2 = param_3 + 0x1a8;
  FUN_100652390(lVar2,1);
  uVar7 = uVar6;
  FUN_100652390(lVar2,7);
  FUN_1006525c4(0,param_1,0,uVar6,param_2,uVar7,lVar2);
  FUN_10064e47c(param_1,param_2,lVar2);
  FUN_10064e5ec(0,0,lVar2,8,param_3,8);
  lVar2 = param_3 + 0x558;
  fVar8 = (float)param_2 + -100.0;
  fVar4 = fVar8;
  if (fVar8 <= 420.0) {
    fVar4 = 420.0;
  }
  FUN_10064e47c(0x43d20000,fVar4,lVar2);
  lVar3 = param_3 + 1000;
  FUN_10064e47c(0x43c80000,fVar8,lVar3);
  fVar4 = (float)FUN_10064e3cc(lVar2);
  fVar5 = (float)FUN_10064e3cc(lVar3);
  FUN_10064e47c((float)param_1 - (fVar4 + fVar5),fVar8,param_3 + 0x4a0);
  FUN_10064e5ec(0,0,lVar2,7,lVar1,7);
  FUN_10064e5ec(0,0,lVar3,5,lVar1,5);
  FUN_10064e5ec(0,0,lVar2,7,param_3,7);
  FUN_10064e5ec(0,0,lVar3,5,param_3,5);
  FUN_10064e5ec(0,0,param_3 + 0x4a0,5,lVar3,7);
  lVar2 = param_3 + 0x2f8;
  FUN_100652e60(lVar2);
  FUN_10064e47c(param_1,lVar2);
  FUN_10064e5ec(0,0,lVar2,6,param_3,6);
  FUN_10064e5ec(0,0,lVar2,6,lVar1,6);
  return;
}




long * FUN_1002fcabc(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_thunk_FUN_1002fcb10_10148d4c0;
  thunk_FUN_1001cd1dc(puVar1 + 0x17);
  (**(code **)(*param_1 + 0x78))(param_1,puVar1 + 0x17,1);
  return param_1;
}




void FUN_1002fcb10(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002fcb10_10148d4c0;
  param_1[0x17] = &PTR_FUN_10145eb78;
  param_1[0x2e] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x3f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3f]);
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1002fcb10(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002fcb10_10148d4c0;
  param_1[0x17] = &PTR_FUN_10145eb78;
  param_1[0x2e] = &PTR_FUN_10145ecf0;
  if ((void *)param_1[0x3f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3f]);
    param_1[0x3e] = 0;
    param_1[0x3f] = 0;
  }
  FUN_100651068(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002fcb70(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002fcb10();
  operator_delete(pvVar1);
  return;
}




void FUN_1002fcb84(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  undefined4 local_28;
  undefined4 uStack_24;
  
  FUN_10064e47c();
  local_28 = (**(code **)(*param_3 + 0x48))(param_3);
  uStack_24 = param_2;
  FUN_10064e48c(param_3 + 0x17,&local_28);
  FUN_10064e5ec(0,0,param_3 + 0x17,8,param_3,8);
  return;
}




void FUN_1002fcbec(undefined1 param_1 [16],undefined4 param_2,long *param_3)

{
  long *plVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28 [2];
  
  plVar1 = param_3 + 0x17;
  uVar2 = *(uint *)((long)param_3 + 0x13c);
  if ((uVar2 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_3 + 0x13c) = uVar2 & 0xffff8000 | uVar2 & 0x7f | 0x3300;
    FUN_1000200a0(plVar1);
  }
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_48_10184e200);
  local_28[0] = 0xffffc591;
  FUN_100651460(plVar1,local_28);
  FUN_1006515d0(plVar1,1);
  FUN_100651700(plVar1,3);
  uVar3 = FUN_1004e0150("MENU_LANDING_PAGE_SIDEBAR_QUEST_TILE_TIME_REMAINING",0);
  FUN_1001cd23c(plVar1,uVar3,1,1);
  local_30 = (**(code **)(*param_3 + 0x58))(param_3,1,0,0,1);
  uStack_2c = param_2;
  FUN_10064e48c(param_3,&local_30);
  return;
}




void FUN_1002fccd0(long param_1)

{
  if ((*(byte *)(param_1 + 0x84) >> 2 & 1) == 0) {
    return;
  }
  FUN_1001cd374(param_1 + 0xb8);
  return;
}




void FUN_1002fcce4(long param_1,undefined8 param_2)

{
  FUN_1001cd23c(param_1 + 0xb8,param_2,1,1);
  return;
}




void FUN_1002fccf4(long param_1)

{
  FUN_1006515e0(param_1 + 0xb8);
  return;
}




void FUN_1002fccfc(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148d0e8;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002fcd54(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148d0e8;
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_1002fcdb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10148d378;
  FUN_1002fc050(param_1 + 0xab);
  thunk_FUN_10064e2bc(param_1 + 0x94);
  thunk_FUN_10064e2bc(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  param_1[0x35] = &PTR_FUN_1014a6db0;
  param_1[0x4c] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002fce70(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10148d378;
  FUN_1002fc050(param_1 + 0xab);
  thunk_FUN_10064e2bc(param_1 + 0x94);
  thunk_FUN_10064e2bc(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_1014a7108;
  param_1[0x76] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x79);
  FUN_10064e2bc(param_1 + 0x5f);
  param_1[0x35] = &PTR_FUN_1014a6db0;
  param_1[0x4c] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x35);
  param_1[0x17] = &PTR_FUN_1014a7108;
  param_1[0x2e] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x31);
  FUN_10064e2bc(param_1 + 0x17);
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void * FUN_1002fcf34(long param_1)

{
  void *pvVar1;
  long *plVar2;
  
  switch(*(undefined4 *)(param_1 + 0x20)) {
  case 0:
    pvVar1 = operator_new(0x848);
    plVar2 = (long *)thunk_FUN_1002fddc8();
    break;
  case 1:
    pvVar1 = operator_new(0x4c0);
    plVar2 = (long *)thunk_FUN_1002fd4b0();
    break;
  case 2:
    pvVar1 = operator_new(0x2e88);
    plVar2 = (long *)thunk_FUN_100300bfc();
    break;
  case 3:
    pvVar1 = operator_new(0x16a8);
    plVar2 = (long *)thunk_FUN_1002ffd94();
    break;
  case 4:
    pvVar1 = operator_new(0xfe0);
    plVar2 = (long *)thunk_FUN_1002fea14();
    break;
  default:
    return (void *)0x0;
  }
  (**(code **)(*plVar2 + 0x138))(plVar2,param_1);
  return pvVar1;
}




void FUN_1002fcff0(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_10064e20c();
  *puVar2 = &PTR_FUN_10148d608;
  puVar2[0x17] = 0;
  uVar1 = DAT_101dc0b88;
  *(undefined4 *)(puVar2 + 0x18) = DAT_101dc0b88;
  puVar2[0x19] = 0;
  *(undefined4 *)(puVar2 + 0x1a) = uVar1;
  return;
}




void FUN_1002fd02c(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_10148d608;
  FUN_1002fd214();
  plVar1 = (long *)param_1[0x19];
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1a) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = (long *)param_1[0x19];
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0x1a) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            param_1[0x19] = 0;
            *(undefined4 *)(param_1 + 0x1a) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0,uVar3);
      }
    }
    else {
      param_1[0x19] = 0;
      *(undefined4 *)(param_1 + 0x1a) = DAT_101dc0b88;
    }
  }
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1002fd0e4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002fd0e8);
  (*pcVar1)();
}




void FUN_1002fd0e8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002fd0ec);
  (*pcVar1)();
}




void FUN_1002fd0ec(long param_1)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        plVar2 = *(long **)(param_1 + 0xb8);
        uVar4 = 0;
        if (plVar2 != (long *)0x0) {
          if (*(int *)(param_1 + 0xc0) == (int)plVar2[1]) {
            uVar4 = (**(code **)(*plVar2 + 0x10))();
          }
          else {
            uVar4 = 0;
            *(undefined8 *)(param_1 + 0xb8) = 0;
            *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0,uVar4);
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    }
  }
  lVar3 = FUN_1001e79b8(0x3e000000,"build://Sounds/UI.assetbundle/sfx_spoils_countup_sparkle.ogg",1,
                        1);
  if (lVar3 != 0) {
    uVar1 = *(undefined4 *)(lVar3 + 0x30);
    *(long *)(param_1 + 0xb8) = lVar3 + 0x28;
    *(undefined4 *)(param_1 + 0xc0) = uVar1;
  }
  return;
}




void FUN_1002fd1bc(long *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x170))();
  if (iVar1 != 0) {
    FUN_100642324(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001002fd1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}




void FUN_1002fd208(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002fd210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_1002fd214(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0xb8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        plVar1 = *(long **)(param_1 + 0xb8);
        uVar3 = 0;
        if (plVar1 != (long *)0x0) {
          if (*(int *)(param_1 + 0xc0) == (int)plVar1[1]) {
            uVar3 = (**(code **)(*plVar1 + 0x10))();
          }
          else {
            uVar3 = 0;
            *(undefined8 *)(param_1 + 0xb8) = 0;
            *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
          }
        }
        FUN_10004b1f8(0,uVar3);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_1002fd2bc(undefined4 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  undefined8 uVar5;
  undefined4 local_78;
  undefined4 uStack_74;
  
  uStack_74 = (undefined4)param_2;
  local_78 = param_1;
  uVar5 = FUN_10064efd0(&local_78,*(undefined8 *)(param_4 + 0x20));
  *(uint *)(param_4 + 0x84) = *(uint *)(param_4 + 0x84) | 4;
  uVar2 = FUN_100640840(0,param_3,FUN_10001f4ac);
  FUN_1006408f4(uVar5,param_2,param_3,FUN_10001f4c4);
  FUN_100640db8(0,0,param_3,FUN_10001f4c4);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f1bc(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar4,uVar2);
  FUN_100642b14(param_4,puVar4);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f050(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f090(puVar4,0);
  FUN_100642b14(param_4,puVar4);
  return;
}




void FUN_1002fd498(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002fd4a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))();
  return;
}




void FUN_1002fd4a4(void)

{
  return;
}




void FUN_1002fd4a8(void)

{
  return;
}




long * FUN_1002fd4b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1002fcff0();
  *puVar3 = &PTR_thunk_FUN_1002fdd28_10148d790;
  puVar3 = puVar3 + 0x1b;
  FUN_10064e264(puVar3);
  plVar1 = param_1 + 0x32;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x50;
  thunk_FUN_100650e64(plVar2);
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0x3f80000000000000;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x90] = 0;
  param_1[0x76] = (long)&PTR_FUN_101472130;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_190_f_10184e268);
  FUN_10065165c(plVar2,1);
  *(uint *)((long)param_1 + 0x304) = *(uint *)((long)param_1 + 0x304) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x3c) != (float)DAT_101873a40) ||
     (*(float *)((long)param_1 + 0x1e4) != DAT_101873a40._4_4_)) {
    param_1[0x3c] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




long * thunk_FUN_1002fd4b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)FUN_1002fcff0();
  *puVar3 = &PTR_thunk_FUN_1002fdd28_10148d790;
  puVar3 = puVar3 + 0x1b;
  FUN_10064e264(puVar3);
  plVar1 = param_1 + 0x32;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x50;
  thunk_FUN_100650e64(plVar2);
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  *(undefined8 *)((long)param_1 + 0x3d4) = 0;
  *(undefined8 *)((long)param_1 + 0x3ec) = 0;
  *(undefined8 *)((long)param_1 + 0x3e4) = 0;
  *(undefined8 *)((long)param_1 + 0x3fc) = 0;
  *(undefined8 *)((long)param_1 + 0x3f4) = 0;
  *(undefined8 *)((long)param_1 + 0x404) = 0x3f80000000000000;
  param_1[0x83] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x84] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8a] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x8f] = 0;
  param_1[0x8e] = 0;
  param_1[0x90] = 0;
  param_1[0x76] = (long)&PTR_FUN_101472130;
  *(undefined4 *)(param_1 + 0x91) = 0;
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 1;
  (**(code **)(*param_1 + 0x78))(param_1,puVar3,1);
  FUN_100642bd8(puVar3,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_190_f_10184e268);
  FUN_10065165c(plVar2,1);
  *(uint *)((long)param_1 + 0x304) = *(uint *)((long)param_1 + 0x304) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x3c) != (float)DAT_101873a40) ||
     (*(float *)((long)param_1 + 0x1e4) != DAT_101873a40._4_4_)) {
    param_1[0x3c] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




void FUN_1002fd620(long *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  string *this;
  string *this_00;
  undefined1 *local_50;
  void *local_48;
  
  local_50 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x50] + 0x28))(param_1 + 0x50,&local_50);
  std::string::operator=((string *)(param_1 + 0x77),(string *)(param_2 + 8));
  param_1[0x7a] = *(long *)(param_2 + 0x20);
  std::string::operator=((string *)(param_1 + 0x7b),(string *)(param_2 + 0x28));
  std::string::operator=((string *)(param_1 + 0x7e),(string *)(param_2 + 0x40));
  *(undefined4 *)(param_1 + 0x81) = *(undefined4 *)(param_2 + 0x58);
  std::string::operator=((string *)(param_1 + 0x82),(string *)(param_2 + 0x60));
  std::string::operator=((string *)(param_1 + 0x85),(string *)(param_2 + 0x78));
  std::string::operator=((string *)(param_1 + 0x88),(string *)(param_2 + 0x90));
  std::string::operator=((string *)(param_1 + 0x8b),(string *)(param_2 + 0xa8));
  std::string::operator=((string *)(param_1 + 0x8e),(string *)(param_2 + 0xc0));
  *(undefined4 *)(param_1 + 0x91) = *(undefined4 *)(param_2 + 0xd8);
  this = (string *)(param_1 + 0x92);
  std::string::operator=(this,(string *)(param_2 + 0xe0));
  this_00 = (string *)(param_1 + 0x95);
  std::string::operator=(this_00,(string *)(param_2 + 0xf8));
  lVar2 = param_1[0x91];
  FUN_1004e313c(&local_50);
  pcVar1 = "x%d";
  if ((int)(float)(int)lVar2 < 2) {
    pcVar1 = "%d";
  }
  FUN_1004e38ac(&local_50,pcVar1);
  FUN_1006513c0(param_1 + 0x50,&local_50);
  if (*(char *)((long)param_1 + 0x4bf) < '\0') {
    this_00 = *(string **)this_00;
  }
  if (*(char *)((long)param_1 + 0x4a7) < '\0') {
    this = *(string **)this;
  }
  FUN_100652cac(param_1 + 0x32,this_00,this);
  (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*param_1 + 0x148))(param_1);
  FUN_100301d28(0x438c0000,0x41700000,0x3f333333,0x3e800000,param_1 + 0x32,param_1 + 0x8b);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_1002fd7d0(long param_1)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  uint uVar6;
  long lVar7;
  bool bVar8;
  int iVar9;
  undefined8 uVar10;
  ushort uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long *plVar15;
  ushort *puVar16;
  ushort *puVar17;
  undefined4 uVar18;
  undefined8 uVar19;
  void *local_58 [2];
  char local_41;
  
  FUN_1002fd0ec();
  lVar1 = param_1 + 0x280;
  *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) | 4;
  FUN_100642324(lVar1);
  bVar8 = false;
  if ((*(float *)(param_1 + 0x2c8) == 3.0) && (bVar8 = false, !NAN(*(float *)(param_1 + 0x2cc)))) {
    bVar8 = *(float *)(param_1 + 0x2cc) == 3.0;
  }
  if (!bVar8) {
    uVar19 = NEON_fmov(0x40400000,4);
    *(undefined8 *)(param_1 + 0x2c8) = uVar19;
    FUN_1000200a0(lVar1);
  }
  if ((*(uint *)(param_1 + 0x304) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  uVar19 = FUN_10001f55c();
  uVar18 = 0x3fe00000;
  if (*(int *)(param_1 + 0x488) != 1) {
    uVar18 = 0x3f400000;
  }
  FUN_10063f0e8(uVar18);
  FUN_100642b14(lVar1,uVar19);
  if (*(int *)(param_1 + 0x488) < 2) {
    return;
  }
  plVar15 = (long *)(param_1 + 0x470);
  uVar12 = (ulong)*(byte *)(param_1 + 0x487);
  uVar6 = (uint)(char)*(byte *)(param_1 + 0x487);
  sVar2 = *(size_t *)(param_1 + 0x478);
  if (-1 < (int)uVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    plVar4 = (long *)*plVar15;
    if (-1 < (int)uVar6) {
      plVar4 = plVar15;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((int)uVar6 < 0) {
      if ((sVar2 == 0) || (iVar9 = _memcmp(plVar4,pbVar14,sVar2), iVar9 == 0)) goto LAB_1002fd9fc;
    }
    else {
      if (sVar2 == 0) goto LAB_1002fd9fc;
      if ((uint)*pbVar14 == ((uint)(long *)*plVar15 & 0xff)) {
        pbVar13 = (byte *)(param_1 + 0x471);
        do {
          uVar12 = uVar12 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar12 == 0) goto LAB_1002fd9fc;
          bVar5 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar5 == *pbVar14);
      }
    }
  }
  lVar7 = DAT_101dbd2f8;
  uVar11 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar16 = (ushort *)0x0;
    if ((uVar6 >> 7 & 1) != 0) goto LAB_1002fd9bc;
  }
  else {
    puVar16 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar11 * 0x40);
    if (uVar11 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar16;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar11;
    *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
    FUN_10063ee9c(puVar16);
    *(undefined ***)puVar16 = &PTR_FUN_101469878;
    puVar16[0xc] = 0;
    puVar16[0xd] = 0;
    puVar16[0xe] = 0;
    puVar16[0xf] = 0;
    puVar16[0x10] = 0;
    puVar16[0x11] = 0;
    puVar16[0x12] = 0;
    puVar16[0x13] = 0;
    puVar16[0x14] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar16[10] = 0;
    puVar16[0xb] = 0;
    *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
    if (*(char *)(param_1 + 0x487) < '\0') {
LAB_1002fd9bc:
      plVar15 = (long *)*plVar15;
    }
  }
  FUN_10001549c(local_58,plVar15);
  FUN_1001e1e48(puVar16,local_58,0,0);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  FUN_100642b14(lVar1,puVar16);
LAB_1002fd9fc:
  uVar19 = FUN_100640db8(0x3f400000,0x3f400000,0x3e800000,0);
  FUN_10063f130(uVar19,FUN_10001f4c4);
  uVar10 = FUN_100640db8(0x3f800000,0x3f800000,0x3d23d70a,0);
  FUN_10063f130(uVar10,FUN_10001f4c4);
  lVar7 = DAT_101dbd2f8;
  uVar11 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar16 = (ushort *)0x0;
  }
  else {
    puVar16 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar16;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar11;
    *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
    FUN_10063f564(puVar16);
    *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
  }
  FUN_10063f614(puVar16,uVar19);
  FUN_100640840(0x3f800000,0x3ee66666,FUN_10001f4c4);
  lVar7 = DAT_101dbd2f8;
  uVar11 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar11 == 0xffff) {
    puVar17 = (ushort *)0x0;
  }
  else {
    puVar17 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar11 * 0x40 + 0x10);
    if (uVar11 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar11 = 0xffff;
    }
    else {
      uVar11 = *puVar17;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar11;
    *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
    FUN_10063f1bc(puVar17);
    *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar17,puVar16);
  FUN_100642b14(lVar1,puVar17);
  uVar19 = FUN_10001f55c();
  FUN_10063f0e8(0x3f733333);
  FUN_100642b14(lVar1,uVar19);
  return;
}




void FUN_1002fdba0(long *param_1)

{
  FUN_100642324();
  FUN_100642324(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001002fdbd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_1002fdbd4(long param_1)

{
  FUN_1002fd2bc();
  *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfffffffb;
  return;
}




void FUN_1002fdc00(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  float fVar4;
  
  lVar1 = param_3 + 400;
  uVar3 = FUN_100642bc8(lVar1);
  if ((uVar3 & 1) == 0) {
    fVar4 = (float)FUN_100652e60(lVar1);
    FUN_100652e60(lVar1);
    if (fVar4 <= param_2) {
      fVar4 = param_2;
    }
    fVar4 = 500.0 / fVar4;
    bVar2 = false;
    if ((*(float *)(param_3 + 0x1d8) == fVar4) &&
       (bVar2 = false, !NAN(*(float *)(param_3 + 0x1dc)) && !NAN(fVar4))) {
      bVar2 = *(float *)(param_3 + 0x1dc) == fVar4;
    }
    if (!bVar2) {
      *(float *)(param_3 + 0x1d8) = fVar4;
      *(float *)(param_3 + 0x1dc) = fVar4;
      FUN_1000200a0(lVar1);
    }
    FUN_10064e5ec(0,0,lVar1,8,param_3 + 0xd8,8);
  }
  FUN_10064e5ec(0,0xc2700000,param_3 + 0xd8,8,param_3,8);
  FUN_10064e5ec(0,0x43898000,param_3 + 0x280,8,param_3 + 0xd8,8);
  return;
}




void thunk_FUN_1002fdd28(void)

{
  FUN_1002fdd28();
  return;
}




void FUN_1002fdcdc(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002fdd28();
  operator_delete(pvVar1);
  return;
}




undefined8 FUN_1002fdcf0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_100642bc8();
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar2 = FUN_100642bc8(param_1 + 0x280);
  return uVar2;
}




void FUN_1002fdd28(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002fdd28_10148d790;
  param_1[0x76] = &PTR_FUN_101472130;
  if (*(char *)((long)param_1 + 0x4bf) < '\0') {
    operator_delete((void *)param_1[0x95]);
  }
  if (*(char *)((long)param_1 + 0x4a7) < '\0') {
    operator_delete((void *)param_1[0x92]);
  }
  FUN_100214410(param_1 + 0x76);
  thunk_FUN_100651068(param_1 + 0x50);
  param_1[0x32] = &PTR_FUN_1014a7108;
  param_1[0x49] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4c);
  FUN_10064e2bc(param_1 + 0x32);
  thunk_FUN_10064e2bc(param_1 + 0x1b);
  FUN_1002fd02c(param_1);
  return;
}




long * FUN_1002fddc8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_1002fcff0();
  *puVar5 = &PTR_thunk_FUN_1002fe914_10148d918;
  puVar5 = puVar5 + 0x1b;
  FUN_10064e264(puVar5);
  plVar1 = param_1 + 0x32;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x50;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x76;
  thunk_FUN_100655644(plVar3);
  thunk_FUN_100652c08(param_1 + 0xa1);
  plVar4 = param_1 + 0xbf;
  thunk_FUN_100650e64(plVar4);
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)((long)param_1 + 0x754) = 0;
  *(undefined8 *)((long)param_1 + 0x74c) = 0;
  *(undefined8 *)((long)param_1 + 0x764) = 0;
  *(undefined8 *)((long)param_1 + 0x75c) = 0;
  *(undefined8 *)((long)param_1 + 0x774) = 0;
  *(undefined8 *)((long)param_1 + 0x76c) = 0;
  *(undefined8 *)((long)param_1 + 0x77c) = 0x3f80000000000000;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  param_1[0xff] = 0;
  param_1[0xe5] = (long)&PTR_FUN_10148df60;
  *(undefined4 *)((long)param_1 + 0x804) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  FUN_10001549c(param_1 + 0x101,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50);
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100655930(plVar3,param_1 + 0xa1,1);
  FUN_100655930(plVar3,plVar4,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_190_f_10184e268);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_10065165c(plVar2,1);
  *(uint *)((long)param_1 + 0x304) = *(uint *)((long)param_1 + 0x304) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x67c) = *(uint *)((long)param_1 + 0x67c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x3c) != (float)DAT_101873a40) ||
     (*(float *)((long)param_1 + 0x1e4) != DAT_101873a40._4_4_)) {
    param_1[0x3c] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




long * thunk_FUN_1002fddc8(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  
  puVar5 = (undefined8 *)FUN_1002fcff0();
  *puVar5 = &PTR_thunk_FUN_1002fe914_10148d918;
  puVar5 = puVar5 + 0x1b;
  FUN_10064e264(puVar5);
  plVar1 = param_1 + 0x32;
  thunk_FUN_100652c08(plVar1);
  plVar2 = param_1 + 0x50;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x76;
  thunk_FUN_100655644(plVar3);
  thunk_FUN_100652c08(param_1 + 0xa1);
  plVar4 = param_1 + 0xbf;
  thunk_FUN_100650e64(plVar4);
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  param_1[0xe8] = 0;
  *(undefined8 *)((long)param_1 + 0x754) = 0;
  *(undefined8 *)((long)param_1 + 0x74c) = 0;
  *(undefined8 *)((long)param_1 + 0x764) = 0;
  *(undefined8 *)((long)param_1 + 0x75c) = 0;
  *(undefined8 *)((long)param_1 + 0x774) = 0;
  *(undefined8 *)((long)param_1 + 0x76c) = 0;
  *(undefined8 *)((long)param_1 + 0x77c) = 0x3f80000000000000;
  param_1[0xf2] = 0;
  param_1[0xf1] = 0;
  param_1[0xf4] = 0;
  param_1[0xf3] = 0;
  param_1[0xf6] = 0;
  param_1[0xf5] = 0;
  param_1[0xf8] = 0;
  param_1[0xf7] = 0;
  param_1[0xfa] = 0;
  param_1[0xf9] = 0;
  param_1[0xfc] = 0;
  param_1[0xfb] = 0;
  param_1[0xfe] = 0;
  param_1[0xfd] = 0;
  param_1[0xff] = 0;
  param_1[0xe5] = (long)&PTR_FUN_10148df60;
  *(undefined4 *)((long)param_1 + 0x804) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  FUN_10001549c(param_1 + 0x101,PTR_s_build___SpoilsOfWarPartsCommon_t_101854a50);
  *(undefined4 *)(param_1 + 0xe9) = 0;
  param_1[0x105] = 0;
  param_1[0x104] = 0;
  param_1[0x107] = 0;
  param_1[0x106] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  FUN_100642bd8(puVar5,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100655930(plVar3,param_1 + 0xa1,1);
  FUN_100655930(plVar3,plVar4,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_190_f_10184e268);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250);
  FUN_10065165c(plVar2,1);
  *(uint *)((long)param_1 + 0x304) = *(uint *)((long)param_1 + 0x304) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x67c) = *(uint *)((long)param_1 + 0x67c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x3c) != (float)DAT_101873a40) ||
     (*(float *)((long)param_1 + 0x1e4) != DAT_101873a40._4_4_)) {
    param_1[0x3c] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




void FUN_1002fdffc(long param_1)

{
  long lVar1;
  char *pcVar2;
  float fVar3;
  undefined1 auStack_40 [8];
  void *local_38;
  
  fVar3 = *(float *)(param_1 + 0x838);
  FUN_1004e313c(auStack_40);
  pcVar2 = "+%d";
  if ((int)fVar3 < 0) {
    pcVar2 = "%d";
  }
  FUN_1004e38ac(auStack_40,pcVar2);
  lVar1 = param_1 + 0x280;
  FUN_1006513c0(lVar1,auStack_40);
  FUN_1004e38ac(auStack_40,"%d");
  FUN_1006513c0(param_1 + 0x5f8,auStack_40);
  FUN_10064e72c(0xc2820000,lVar1,2,param_1 + 0x3b0,0);
  FUN_10064e72c(0,lVar1,4,param_1 + 0x3b0,4);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1002fe0d4(long *param_1,long param_2)

{
  string *this;
  char *pcVar1;
  size_t sVar2;
  size_t sVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  string *psVar9;
  string *psVar10;
  ulong uVar11;
  byte *pbVar12;
  byte *pbVar13;
  string *psVar14;
  string *psVar15;
  string *psVar16;
  string *psVar17;
  float fVar18;
  undefined1 auStack_60 [8];
  void *local_58;
  
  std::string::operator=((string *)(param_1 + 0xe6),(string *)(param_2 + 8));
  param_1[0xe9] = *(long *)(param_2 + 0x20);
  psVar15 = (string *)(param_1 + 0xea);
  std::string::operator=(psVar15,(string *)(param_2 + 0x28));
  std::string::operator=((string *)(param_1 + 0xed),(string *)(param_2 + 0x40));
  *(undefined4 *)(param_1 + 0xf0) = *(undefined4 *)(param_2 + 0x58);
  this = (string *)(param_1 + 0xf1);
  std::string::operator=(this,(string *)(param_2 + 0x60));
  psVar14 = (string *)(param_1 + 0xf4);
  std::string::operator=(psVar14,(string *)(param_2 + 0x78));
  std::string::operator=((string *)(param_1 + 0xf7),(string *)(param_2 + 0x90));
  std::string::operator=((string *)(param_1 + 0xfa),(string *)(param_2 + 0xa8));
  std::string::operator=((string *)(param_1 + 0xfd),(string *)(param_2 + 0xc0));
  param_1[0x100] = *(long *)(param_2 + 0xd8);
  psVar16 = (string *)(param_1 + 0x101);
  std::string::operator=(psVar16,(string *)(param_2 + 0xe0));
  psVar17 = (string *)(param_1 + 0x104);
  std::string::operator=(psVar17,(string *)(param_2 + 0xf8));
  *(float *)((long)param_1 + 0x83c) = (float)(int)param_1[0x100];
  *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)((long)param_1 + 0x804);
  psVar9 = psVar16;
  if (*(char *)((long)param_1 + 0x81f) < '\0') {
    psVar9 = *(string **)psVar16;
  }
  psVar10 = psVar17;
  if (*(char *)((long)param_1 + 0x837) < '\0') {
    psVar10 = *(string **)psVar17;
  }
  FUN_100652cac(param_1 + 0x32,psVar9,psVar10);
  if (*(char *)((long)param_1 + 0x81f) < '\0') {
    psVar16 = *(string **)psVar16;
  }
  if (*(char *)((long)param_1 + 0x837) < '\0') {
    psVar17 = *(string **)psVar17;
  }
  FUN_100652cac(param_1 + 0xa1,psVar16,psVar17);
  fVar18 = *(float *)(param_1 + 0x107);
  FUN_1004e313c(auStack_60);
  pcVar1 = "+%d";
  if ((int)fVar18 < 0) {
    pcVar1 = "%d";
  }
  FUN_1004e38ac(auStack_60,pcVar1);
  FUN_1006513c0(param_1 + 0x50,auStack_60);
  FUN_1004e38ac(auStack_60,"%d");
  FUN_1006513c0(param_1 + 0xbf,auStack_60);
  *(uint *)((long)param_1 + 0x304) = *(uint *)((long)param_1 + 0x304) | 4;
  *(uint *)((long)param_1 + 0x67c) = *(uint *)((long)param_1 + 0x67c) | 4;
  (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*param_1 + 0x148))(param_1);
  FUN_100301d28(0x438c0000,0x41700000,0x3f333333,0x3e800000,param_1 + 0x32,param_1 + 0xfa);
  bVar6 = *(byte *)((long)param_1 + 0x767);
  uVar11 = (ulong)bVar6;
  sVar2 = param_1[0xeb];
  if (-1 < (char)bVar6) {
    sVar2 = uVar11;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    psVar17 = *(string **)psVar15;
    psVar16 = psVar17;
    if (-1 < (char)bVar6) {
      psVar16 = psVar15;
    }
    pbVar13 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar13 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(psVar16,pbVar13,sVar2), psVar15 = psVar17, iVar7 != 0))
      goto LAB_1002fe374;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar13 == ((uint)psVar17 & 0xff)) {
        pbVar12 = (byte *)((long)param_1 + 0x751);
        do {
          uVar11 = uVar11 - 1;
          pbVar13 = pbVar13 + 1;
          if (uVar11 == 0) goto LAB_1002fe388;
          bVar5 = *pbVar12;
          pbVar12 = pbVar12 + 1;
        } while (bVar5 == *pbVar13);
        goto LAB_1002fe354;
      }
      goto LAB_1002fe374;
    }
  }
  else {
LAB_1002fe354:
    if ((char)bVar6 < '\0') {
      psVar15 = *(string **)psVar15;
    }
LAB_1002fe374:
    FUN_1001e79b8(0x3f800000,psVar15,0,1);
  }
LAB_1002fe388:
  if ((int)param_1[0x100] < 1) {
    bVar6 = *(byte *)((long)param_1 + 0x79f);
    uVar11 = (ulong)bVar6;
    sVar2 = param_1[0xf2];
    if (-1 < (char)bVar6) {
      sVar2 = uVar11;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    psVar14 = this;
    if (sVar2 == sVar3) {
      psVar16 = *(string **)this;
      psVar15 = psVar16;
      if (-1 < (char)bVar6) {
        psVar15 = this;
      }
      pbVar13 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar13 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar6 < '\0') {
        if (sVar2 == 0) goto LAB_1002fe510;
        iVar7 = _memcmp(psVar15,pbVar13,sVar2);
        goto joined_r0x0001002fe4e4;
      }
      if (sVar2 == 0) goto LAB_1002fe510;
      if ((uint)*pbVar13 != ((uint)psVar16 & 0xff)) goto LAB_1002fe4f0;
      pbVar12 = (byte *)((long)param_1 + 0x789);
      do {
        uVar11 = uVar11 - 1;
        pbVar13 = pbVar13 + 1;
        if (uVar11 == 0) goto LAB_1002fe510;
        bVar5 = *pbVar12;
        pbVar12 = pbVar12 + 1;
      } while (bVar5 == *pbVar13);
    }
    if ((char)bVar6 < '\0') {
      psVar14 = *(string **)this;
    }
  }
  else {
    bVar6 = *(byte *)((long)param_1 + 0x7b7);
    uVar11 = (ulong)bVar6;
    sVar2 = param_1[0xf5];
    if (-1 < (char)bVar6) {
      sVar2 = uVar11;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar2 == sVar3) {
      psVar16 = *(string **)psVar14;
      psVar15 = psVar16;
      if (-1 < (char)bVar6) {
        psVar15 = psVar14;
      }
      pbVar13 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar13 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar6 < '\0') {
        if (sVar2 == 0) goto LAB_1002fe510;
        iVar7 = _memcmp(psVar15,pbVar13,sVar2);
joined_r0x0001002fe4e4:
        psVar14 = psVar16;
        if (iVar7 == 0) goto LAB_1002fe510;
      }
      else {
        if (sVar2 == 0) goto LAB_1002fe510;
        if ((uint)*pbVar13 == ((uint)psVar16 & 0xff)) {
          pbVar12 = (byte *)((long)param_1 + 0x7a1);
          do {
            uVar11 = uVar11 - 1;
            pbVar13 = pbVar13 + 1;
            if (uVar11 == 0) goto LAB_1002fe510;
            bVar5 = *pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (bVar5 == *pbVar13);
          goto LAB_1002fe418;
        }
      }
    }
    else {
LAB_1002fe418:
      if ((char)bVar6 < '\0') {
        psVar14 = *(string **)psVar14;
      }
    }
  }
LAB_1002fe4f0:
  lVar8 = FUN_1001e79b8(0x3f400000,psVar14,0,1);
  if (lVar8 != 0) {
    uVar4 = *(undefined4 *)(lVar8 + 0x30);
    param_1[0x19] = lVar8 + 0x28;
    *(undefined4 *)(param_1 + 0x1a) = uVar4;
  }
LAB_1002fe510:
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}




void FUN_1002fe538(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  ushort *puVar4;
  long local_40;
  code *pcStack_38;
  
  FUN_1002fd0ec();
  FUN_1002fd1bc(param_1);
  pcStack_38 = FUN_1002fea08;
  local_40 = param_1;
  FUN_100643618(0xbf800000,&local_40,0,1);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(0x3f000000);
  FUN_100642b14(param_1,uVar2);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    puVar4 = (ushort *)0x0;
  }
  else {
    puVar4 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *puVar4;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_100640620(puVar4);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_100640684(*(undefined4 *)(param_1 + 0x83c),puVar4,param_1 + 0x838);
  FUN_10063f130(puVar4,FUN_1002fe6fc);
  FUN_10063f0e8(0x3f800000,puVar4);
  FUN_100642b14(param_1,puVar4);
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(0x3f000000);
  FUN_100642b14(param_1,uVar2);
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  puVar4 = (ushort *)(DAT_101dbd2f8 + 0x10 + (ulong)uVar3 * 0x40);
  if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
    uVar3 = 0xffff;
  }
  else {
    uVar3 = *puVar4;
  }
  *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
  *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
  FUN_10063ee9c(puVar4);
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
  *(undefined ***)puVar4 = &PTR_thunk_FUN_10063eeb4_10144bff8;
  *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  *(code **)(puVar4 + 8) = FUN_1002fd208;
  *(long *)(puVar4 + 0x10) = param_1;
  FUN_100642b14(param_1,puVar4);
  return;
}




float FUN_1002fe6fc(float param_1,float param_2,float param_3,float param_4)

{
  return (param_3 * param_1) / param_4 + param_2;
}




void FUN_1002fe70c(long param_1)

{
  long local_30;
  code *pcStack_28;
  
  FUN_1002fd214();
  pcStack_28 = FUN_1002fea08;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  *(undefined4 *)(param_1 + 0x838) = *(undefined4 *)(param_1 + 0x83c);
  return;
}




void FUN_1002fe750(long param_1)

{
  FUN_1002fd2bc();
  *(uint *)(param_1 + 0x434) = *(uint *)(param_1 + 0x434) & 0xfffffffb;
  *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) & 0xfffffffb;
  return;
}




void FUN_1002fe788(undefined1 param_1 [16],undefined1 param_2 [16],long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  bool bVar5;
  ulong uVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  
  uVar9 = param_2._4_4_;
  fVar8 = param_2._0_4_;
  lVar1 = param_3 + 0x508;
  lVar2 = param_3 + 0x5f8;
  FUN_100651184(lVar2);
  uVar4 = CONCAT44(uVar9,fVar8);
  FUN_100651184(lVar2);
  FUN_10064e47c(uVar4,lVar1);
  lVar3 = param_3 + 400;
  uVar6 = FUN_100642bc8(lVar3);
  if ((uVar6 & 1) == 0) {
    fVar7 = (float)FUN_100652e60(lVar3);
    FUN_100652e60(lVar3);
    if (fVar7 <= fVar8) {
      fVar7 = fVar8;
    }
    fVar7 = 500.0 / fVar7;
    bVar5 = false;
    if ((*(float *)(param_3 + 0x1d8) == fVar7) &&
       (bVar5 = false, !NAN(*(float *)(param_3 + 0x1dc)) && !NAN(fVar7))) {
      bVar5 = *(float *)(param_3 + 0x1dc) == fVar7;
    }
    if (!bVar5) {
      *(float *)(param_3 + 0x1d8) = fVar7;
      *(float *)(param_3 + 0x1dc) = fVar7;
      FUN_1000200a0(lVar3);
    }
    FUN_10064e5ec(0,0,lVar3,8,param_3 + 0xd8,8);
  }
  FUN_10064e5ec(0,0xc2700000,param_3 + 0xd8,8,param_3,8);
  FUN_10064e72c(0,lVar2,3,lVar1,1);
  FUN_10064e72c(0,lVar2,5,lVar1,5);
  lVar1 = param_3 + 0x3b0;
  FUN_1006557ec(lVar1);
  FUN_10064e5ec(0,0,lVar1,6,param_3,6);
  FUN_10064e5ec(0,0xc3250000,param_3 + 0x280,8,lVar1,4);
  return;
}




void FUN_1002fe8e4(float param_1,long *param_2)

{
  *(float *)((long)param_2 + 0x83c) = *(float *)((long)param_2 + 0x83c) + param_1;
                    /* WARNING: Could not recover jumptable at 0x0001002fe8f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x148))();
  return;
}




void thunk_FUN_1002fe914(void)

{
  FUN_1002fe914();
  return;
}




void FUN_1002fe900(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002fe914();
  operator_delete(pvVar1);
  return;
}




void FUN_1002fe914(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_1002fe914_10148d918;
  param_1[0xe5] = &PTR_FUN_10148df60;
  if (*(char *)((long)param_1 + 0x837) < '\0') {
    operator_delete((void *)param_1[0x104]);
  }
  if (*(char *)((long)param_1 + 0x81f) < '\0') {
    operator_delete((void *)param_1[0x101]);
  }
  FUN_100214410(param_1 + 0xe5);
  thunk_FUN_100651068(param_1 + 0xbf);
  param_1[0xa1] = &PTR_FUN_1014a7108;
  param_1[0xb8] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xbb);
  FUN_10064e2bc(param_1 + 0xa1);
  param_1[0x76] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x8d);
  FUN_10064e2bc(param_1 + 0x76);
  thunk_FUN_100651068(param_1 + 0x50);
  param_1[0x32] = &PTR_FUN_1014a7108;
  param_1[0x49] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4c);
  FUN_10064e2bc(param_1 + 0x32);
  thunk_FUN_10064e2bc(param_1 + 0x1b);
  FUN_1002fd02c(param_1);
  return;
}




void FUN_1002fea08(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002fea10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




long * FUN_1002fea14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 local_80 [2];
  undefined8 local_78;
  
  puVar8 = (undefined8 *)FUN_1002fcff0();
  puVar10 = puVar8 + 0x1b;
  *puVar8 = &PTR_thunk_FUN_1002ffc28_10148daa0;
  FUN_10064e264(puVar10);
  plVar1 = param_1 + 0x32;
  FUN_100653ff8();
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x79;
  thunk_FUN_100652c08(plVar3);
  plVar7 = param_1 + 0x97;
  FUN_10064e264(plVar7);
  FUN_10064e264(param_1 + 0xae);
  FUN_10064e264(param_1 + 0xc5);
  lVar9 = 0x6e0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar9);
    lVar9 = lVar9 + 0xf0;
  } while (lVar9 != 0xb90);
  plVar4 = param_1 + 0x172;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x189;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x1af;
  thunk_FUN_100650e64(plVar6);
  param_1[0x1d7] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d8] = 0;
  *(undefined8 *)((long)param_1 + 0xed4) = 0;
  *(undefined8 *)((long)param_1 + 0xecc) = 0;
  *(undefined8 *)((long)param_1 + 0xee4) = 0;
  *(undefined8 *)((long)param_1 + 0xedc) = 0;
  *(undefined8 *)((long)param_1 + 0xef4) = 0;
  *(undefined8 *)((long)param_1 + 0xeec) = 0;
  *(undefined8 *)((long)param_1 + 0xefc) = 0x3f80000000000000;
  param_1[0x1e2] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1d5] = (long)&PTR_FUN_101472108;
  FUN_1004e313c(param_1 + 499);
  param_1[0x1fa] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1d9) = 4;
  *(undefined4 *)(param_1 + 0x1fb) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100642bd8(plVar7,param_1 + 0xae,1);
  FUN_100642bd8(plVar7,param_1 + 0xc5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  lVar9 = 0x6e0;
  do {
    plVar7 = (long *)((long)param_1 + lVar9);
    FUN_100652cac(plVar7,PTR_s_build___InventoryCommon_atlas_10184e108,"128x128_hero_mastery_star");
    FUN_10064e47c(0,0x42aa0000,plVar7);
    local_78 = 0x3f8000003f000000;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_78);
    lVar9 = lVar9 + 0xf0;
  } while (lVar9 != 0xb90);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651460(plVar2,&DAT_10115a168);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651460(plVar5,&DAT_10115a168);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  local_80[0] = 0xffb0917e;
  FUN_100651460(plVar6,local_80);
  FUN_100652cac(plVar3,PTR_s_build___InventoryCommon_atlas_10184e108,"inventory_hero_mastery_accent"
               );
  FUN_100653080(plVar3,1);
  FUN_100652eac(plVar3,500);
  FUN_10065403c(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dfc(plVar1,0xb);
  if ((*(float *)(param_1 + 0x3c) != (float)DAT_101873a40) ||
     (*(float *)((long)param_1 + 0x1e4) != DAT_101873a40._4_4_)) {
    param_1[0x3c] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




long * thunk_FUN_1002fea14(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined4 auStack_80 [2];
  undefined8 uStack_78;
  
  puVar8 = (undefined8 *)FUN_1002fcff0();
  puVar10 = puVar8 + 0x1b;
  *puVar8 = &PTR_thunk_FUN_1002ffc28_10148daa0;
  FUN_10064e264(puVar10);
  plVar1 = param_1 + 0x32;
  FUN_100653ff8();
  plVar2 = param_1 + 0x53;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x79;
  thunk_FUN_100652c08(plVar3);
  plVar7 = param_1 + 0x97;
  FUN_10064e264(plVar7);
  FUN_10064e264(param_1 + 0xae);
  FUN_10064e264(param_1 + 0xc5);
  lVar9 = 0x6e0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar9);
    lVar9 = lVar9 + 0xf0;
  } while (lVar9 != 0xb90);
  plVar4 = param_1 + 0x172;
  FUN_10064e264(plVar4);
  plVar5 = param_1 + 0x189;
  thunk_FUN_100650e64(plVar5);
  plVar6 = param_1 + 0x1af;
  thunk_FUN_100650e64(plVar6);
  param_1[0x1d7] = 0;
  param_1[0x1d6] = 0;
  param_1[0x1d8] = 0;
  *(undefined8 *)((long)param_1 + 0xed4) = 0;
  *(undefined8 *)((long)param_1 + 0xecc) = 0;
  *(undefined8 *)((long)param_1 + 0xee4) = 0;
  *(undefined8 *)((long)param_1 + 0xedc) = 0;
  *(undefined8 *)((long)param_1 + 0xef4) = 0;
  *(undefined8 *)((long)param_1 + 0xeec) = 0;
  *(undefined8 *)((long)param_1 + 0xefc) = 0x3f80000000000000;
  param_1[0x1e2] = 0;
  param_1[0x1e1] = 0;
  param_1[0x1e4] = 0;
  param_1[0x1e3] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e5] = 0;
  param_1[0x1e8] = 0;
  param_1[0x1e7] = 0;
  param_1[0x1ea] = 0;
  param_1[0x1e9] = 0;
  param_1[0x1ec] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ee] = 0;
  param_1[0x1ed] = 0;
  param_1[0x1ef] = 0;
  param_1[0x1d5] = (long)&PTR_FUN_101472108;
  FUN_1004e313c(param_1 + 499);
  param_1[0x1fa] = 0;
  param_1[0x1f9] = 0;
  param_1[0x1f8] = 0;
  param_1[0x1f7] = 0;
  param_1[0x1f6] = 0;
  param_1[0x1f5] = 0;
  *(undefined4 *)(param_1 + 0x1d9) = 4;
  *(undefined4 *)(param_1 + 0x1fb) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10,1);
  FUN_100642bd8(puVar10,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar7,1);
  FUN_100642bd8(plVar7,param_1 + 0xae,1);
  FUN_100642bd8(plVar7,param_1 + 0xc5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  lVar9 = 0x6e0;
  do {
    plVar7 = (long *)((long)param_1 + lVar9);
    FUN_100652cac(plVar7,PTR_s_build___InventoryCommon_atlas_10184e108,"128x128_hero_mastery_star");
    FUN_10064e47c(0,0x42aa0000,plVar7);
    uStack_78 = 0x3f8000003f000000;
    (**(code **)(*plVar7 + 0x28))(plVar7,&uStack_78);
    lVar9 = lVar9 + 0xf0;
  } while (lVar9 != 0xb90);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651460(plVar2,&DAT_10115a168);
  FUN_100651038(plVar5,PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248);
  FUN_100651460(plVar5,&DAT_10115a168);
  FUN_100651038(plVar6,PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240);
  auStack_80[0] = 0xffb0917e;
  FUN_100651460(plVar6,auStack_80);
  FUN_100652cac(plVar3,PTR_s_build___InventoryCommon_atlas_10184e108,"inventory_hero_mastery_accent"
               );
  FUN_100653080(plVar3,1);
  FUN_100652eac(plVar3,500);
  FUN_10065403c(plVar1,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_large_circle");
  FUN_100652dfc(plVar1,0xb);
  if ((*(float *)(param_1 + 0x3c) != (float)DAT_101873a40) ||
     (*(float *)((long)param_1 + 0x1e4) != DAT_101873a40._4_4_)) {
    param_1[0x3c] = CONCAT44(DAT_101873a40._4_4_,(float)DAT_101873a40);
    FUN_1000200a0(plVar1);
  }
  return param_1;
}




void FUN_1002fedd4(undefined1 param_1 [16],undefined4 param_2,long *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  uint *puVar5;
  int iVar6;
  string *this;
  string *this_00;
  long *plVar7;
  uint uVar8;
  ulong uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined8 local_60;
  void *local_58;
  
  std::string::operator=((string *)(param_3 + 0x1d6),(string *)(param_4 + 8));
  param_3[0x1d9] = *(long *)(param_4 + 0x20);
  std::string::operator=((string *)(param_3 + 0x1da),(string *)(param_4 + 0x28));
  std::string::operator=((string *)(param_3 + 0x1dd),(string *)(param_4 + 0x40));
  *(undefined4 *)(param_3 + 0x1e0) = *(undefined4 *)(param_4 + 0x58);
  std::string::operator=((string *)(param_3 + 0x1e1),(string *)(param_4 + 0x60));
  std::string::operator=((string *)(param_3 + 0x1e4),(string *)(param_4 + 0x78));
  std::string::operator=((string *)(param_3 + 0x1e7),(string *)(param_4 + 0x90));
  std::string::operator=((string *)(param_3 + 0x1ea),(string *)(param_4 + 0xa8));
  std::string::operator=((string *)(param_3 + 0x1ed),(string *)(param_4 + 0xc0));
  lVar4 = *(long *)(param_4 + 0xe8);
  lVar11 = *(long *)(param_4 + 0xd8);
  param_3[0x1f1] = *(long *)(param_4 + 0xe0);
  param_3[0x1f0] = lVar11;
  param_3[0x1f2] = lVar4;
  FUN_1000153b4(param_3 + 499,param_4 + 0xf0);
  this = (string *)(param_3 + 0x1f5);
  std::string::operator=(this,(string *)(param_4 + 0x100));
  this_00 = (string *)(param_3 + 0x1f8);
  std::string::operator=(this_00,(string *)(param_4 + 0x118));
  FUN_1006513c0(param_3 + 0x53,param_3 + 499);
  plVar1 = param_3 + 0x32;
  if (*(char *)((long)param_3 + 0xfd7) < '\0') {
    this_00 = *(string **)this_00;
  }
  if (*(char *)((long)param_3 + 0xfbf) < '\0') {
    this = *(string **)this;
  }
  FUN_100652cac(plVar1,this_00,this);
  local_60 = 0x4418800044188000;
  FUN_10064e48c(plVar1,&local_60);
  uVar10 = FUN_100652e60(plVar1);
  local_60 = CONCAT44(param_2,uVar10);
  FUN_10064e48c(param_3 + 0x1b,&local_60);
  FUN_1004e313c(&local_60);
  FUN_1004e38ac(&local_60,"%d/");
  FUN_1004e313c(auStack_70);
  FUN_1004e38ac(auStack_70,"%d");
  FUN_100651700(param_3 + 0x189,1);
  FUN_1006513c0(param_3 + 0x189,&local_60);
  FUN_1006513c0(param_3 + 0x1af,auStack_70);
  *(float *)(param_3 + 0x1fb) = (float)(int)param_3[0x1f0];
  plVar2 = param_3 + 0xae;
  if ((int)param_3[0x1f2] < 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    plVar7 = param_3 + 0xdc;
    do {
      FUN_100642bd8(plVar2,plVar7,1);
      if ((int)uVar9 == 0) {
        param_2 = 0;
        FUN_10064e5ec(0,plVar7,0,plVar2,0);
      }
      else {
        FUN_10064e72c(0x40a00000,plVar7,3,plVar7 + -0x1e,1);
        FUN_10064e72c(0,plVar7,5,plVar7 + -0x1e,5);
      }
      uVar9 = uVar9 + 1;
      plVar7 = plVar7 + 0x1e;
    } while ((long)uVar9 < (long)(int)param_3[0x1f2]);
  }
  local_78 = FUN_1006425d0(plVar2,0,0,1,1);
  uStack_74 = param_2;
  FUN_10064e48c(plVar2,&local_78);
  plVar2 = param_3 + 0xc5;
  uVar8 = (uint)uVar9;
  if ((int)uVar8 < *(int *)((long)param_3 + 0xf94)) {
    lVar4 = 0;
    plVar7 = param_3 + (uVar9 & 0xffffffff) * 0x1e + 0xdc;
    do {
      FUN_100642bd8(plVar2,plVar7,1);
      if ((int)lVar4 == 0) {
        param_2 = 0;
        FUN_10064e5ec(0,plVar7,0,plVar2,0);
      }
      else {
        FUN_10064e72c(0x40a00000,plVar7,3,plVar7 + -0x1e,1);
        FUN_10064e72c(0,plVar7,5,plVar7 + -0x1e,5);
      }
      plVar7 = plVar7 + 0x1e;
      lVar4 = lVar4 + 1;
    } while ((long)((uVar9 & 0xffffffff) + lVar4) < (long)*(int *)((long)param_3 + 0xf94));
    uVar8 = uVar8 + (int)lVar4;
  }
  local_78 = FUN_1006425d0(plVar2,0,0,1,1);
  uStack_74 = param_2;
  FUN_10064e48c(plVar2,&local_78);
  *(uint *)((long)param_3 + 0x6ac) = *(uint *)((long)param_3 + 0x6ac) & 0xfffffffb;
  if (uVar8 < 5) {
    iVar6 = uVar8 - 5;
    puVar5 = (uint *)((long)param_3 + (ulong)uVar8 * 0xf0 + 0x764);
    do {
      *puVar5 = *puVar5 & 0xfffffffb;
      bVar3 = iVar6 != -1;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 0x3c;
    } while (bVar3);
  }
  (**(code **)(*param_3 + 0x160))(param_3);
  (**(code **)(*param_3 + 0x148))(param_3);
  FUN_100301d28(0x438c0000,0x41700000,0x3f333333,0x3e800000,plVar1,param_3 + 0x1ea);
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}




void FUN_1002ff1d4(long param_1)

{
  int iVar1;
  
  if (((DAT_101e45b90 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e45b90), iVar1 != 0)) {
    FUN_1004e313c(&DAT_101e45b80);
    ___cxa_atexit(FUN_100046198,&DAT_101e45b80,0x100000000);
    ___cxa_guard_release(&DAT_101e45b90);
  }
  FUN_1004e38ac(&DAT_101e45b80,"%d/");
  FUN_1006513c0(param_1 + 0xc48,&DAT_101e45b80);
  return;
}




void FUN_1002ff27c(long param_1)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  long *plVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  int iVar17;
  long local_60;
  code *pcStack_58;
  
  FUN_1002fd0ec();
  pcStack_58 = FUN_1002ffd88;
  local_60 = param_1;
  FUN_100643618(0xbf800000,&local_60,0,1);
  plVar14 = (long *)(param_1 + 0xed0);
  bVar6 = *(byte *)(param_1 + 0xee7);
  uVar10 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0xed8);
  if (-1 < (char)bVar6) {
    sVar2 = uVar10;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    plVar13 = (long *)*plVar14;
    plVar4 = plVar13;
    if (-1 < (char)bVar6) {
      plVar4 = plVar14;
    }
    pbVar12 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar12 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 == 0) || (iVar17 = _memcmp(plVar4,pbVar12,sVar2), plVar14 = plVar13, iVar17 == 0))
      goto LAB_1002ff384;
    }
    else {
      if (sVar2 == 0) goto LAB_1002ff384;
      if ((uint)*pbVar12 == ((uint)plVar13 & 0xff)) {
        pbVar11 = (byte *)(param_1 + 0xed1);
        do {
          uVar10 = uVar10 - 1;
          pbVar12 = pbVar12 + 1;
          if (uVar10 == 0) goto LAB_1002ff384;
          bVar5 = *pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (bVar5 == *pbVar12);
        goto LAB_1002ff350;
      }
    }
  }
  else {
LAB_1002ff350:
    if ((char)bVar6 < '\0') {
      plVar14 = (long *)*plVar14;
    }
  }
  FUN_1001e79b8(0x3f800000,plVar14,0,1);
LAB_1002ff384:
  uVar8 = FUN_10001f55c();
  FUN_10063f0e8(0x40000000);
  uVar8 = FUN_100642b14(param_1,uVar8);
  lVar15 = 0;
  lVar16 = 0;
  do {
    lVar1 = param_1 + lVar15;
    if ((*(uint *)(lVar1 + 0x764) & 0x7f80) != 0) {
      *(uint *)(lVar1 + 0x764) = *(uint *)(lVar1 + 0x764) & 0xffff807f;
      uVar8 = FUN_1000200a0(lVar1 + 0x6e0);
    }
    bVar7 = false;
    if ((*(float *)(lVar1 + 0x728) == 0.5) && (bVar7 = false, !NAN(*(float *)(lVar1 + 0x72c)))) {
      bVar7 = *(float *)(lVar1 + 0x72c) == 0.5;
    }
    if (!bVar7) {
      *(undefined1 **)(param_1 + lVar15 + 0x728) = &DAT_3f0000003f000000;
      uVar8 = FUN_1000200a0(lVar1 + 0x6e0);
    }
    if (lVar16 < *(int *)(param_1 + 0xf90)) {
      uVar8 = FUN_1002ff570(0,uVar8,param_1 + lVar15 + 0x6e0);
    }
    lVar16 = lVar16 + 1;
    lVar15 = lVar15 + 0xf0;
  } while (lVar16 != 5);
  if (*(int *)(param_1 + 0xf90) < *(int *)(param_1 + 0xf94)) {
    iVar17 = *(int *)(param_1 + 0xf88);
    uVar9 = FUN_1000d0538();
    FUN_100640684((float)iVar17,uVar9,param_1 + 0xfd8);
    FUN_10063f130(uVar9,FUN_1002fe6fc);
    FUN_10063f0e8(0x3f400000,uVar9);
    lVar16 = FUN_10008e900();
    *(code **)(lVar16 + 0x10) = FUN_1002ff6d4;
    *(long *)(lVar16 + 0x20) = param_1;
    uVar8 = FUN_1000d0538();
    FUN_100640684((float)*(int *)(param_1 + 0xf84),uVar8,param_1 + 0xfd8);
    FUN_10063f130(uVar8,FUN_1002fe6fc);
    FUN_10063f0e8(0x3f400000,uVar8);
    uVar8 = FUN_10008cac4();
    FUN_10063f614(uVar8,uVar9);
  }
  else {
    uVar8 = FUN_1000d0538();
    FUN_100640684((float)*(int *)(param_1 + 0xf84),uVar8,param_1 + 0xfd8);
    FUN_10063f130(uVar8,FUN_1002fe6fc);
    FUN_10063f0e8(0x3fc00000,uVar8);
  }
  FUN_100642b14(param_1,uVar8);
  lVar16 = FUN_10008e900();
  *(code **)(lVar16 + 0x10) = FUN_1002fd208;
  *(long *)(lVar16 + 0x20) = param_1;
  FUN_100642b14(param_1,lVar16);
  uVar8 = FUN_10001f55c();
  FUN_10063f0e8(0x3fc00000);
  FUN_100642b14(param_1,uVar8);
  return;
}




void FUN_1002ff570(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  
  uVar2 = FUN_10001f55c();
  FUN_10063f0e8(param_1);
  uVar3 = FUN_100640db8(0x3f99999a,0x3f99999a,0x3eb33333,0);
  FUN_10063f130(uVar3,FUN_10001f4c4);
  uVar4 = FUN_100640db8(0x3f800000,0x3f800000,0x3d75c28f,0);
  FUN_10063f130(uVar4,FUN_10001f4c4);
  uVar4 = FUN_10008cac4();
  FUN_10063f614(uVar4,uVar3);
  FUN_100640840(0x3f800000,0x3e800000,FUN_10001f4c4);
  lVar1 = DAT_101dbd2f8;
  uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f1bc(puVar6);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar6,uVar4);
  FUN_100642b14(param_3,uVar2);
  FUN_100642b14(param_3,puVar6);
  return;
}




void FUN_1002ff6d4(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  long *plVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  void *local_38;
  
  *(uint *)(param_1 + 0x6ac) = *(uint *)(param_1 + 0x6ac) | 4;
  iVar6 = *(int *)(param_1 + 0xf90);
  if (iVar6 < 5 && iVar6 < *(int *)(param_1 + 0xf94)) {
    lVar15 = (long)iVar6;
    lVar12 = param_1 + lVar15 * 0xf0 + 0x6e0;
    lVar7 = param_1;
    do {
      lVar7 = FUN_1002ff570(0,lVar7,lVar12);
      if (3 < lVar15) break;
      lVar15 = lVar15 + 1;
      lVar12 = lVar12 + 0xf0;
    } while (lVar15 < *(int *)(param_1 + 0xf94));
  }
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%d");
  FUN_1006513c0(param_1 + 0xd78,auStack_40);
  uVar8 = FUN_1006408f4(0,0,0x3f000000,0);
  FUN_100642b14(param_1 + 0x570,uVar8);
  uVar8 = FUN_100644a94("SPOILSOFWAR::PULSE_RING");
  FUN_100644aec(auStack_60,uVar8,0);
  FUN_100644c34(param_1,auStack_60,1);
  plVar14 = (long *)(param_1 + 0xf38);
  bVar5 = *(byte *)(param_1 + 0xf4f);
  uVar9 = (ulong)bVar5;
  sVar1 = *(size_t *)(param_1 + 0xf40);
  if (-1 < (char)bVar5) {
    sVar1 = uVar9;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar2) {
    plVar13 = (long *)*plVar14;
    plVar3 = plVar13;
    if (-1 < (char)bVar5) {
      plVar3 = plVar14;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar1 == 0) || (iVar6 = _memcmp(plVar3,pbVar11,sVar1), plVar14 = plVar13, iVar6 == 0))
      goto LAB_1002ff880;
    }
    else {
      if (sVar1 == 0) goto LAB_1002ff880;
      if ((uint)*pbVar11 == ((uint)plVar13 & 0xff)) {
        pbVar10 = (byte *)(param_1 + 0xf39);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_1002ff880;
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar4 == *pbVar11);
        goto LAB_1002ff84c;
      }
    }
  }
  else {
LAB_1002ff84c:
    if ((char)bVar5 < '\0') {
      plVar14 = (long *)*plVar14;
    }
  }
  FUN_1001e79b8(0x3f800000,plVar14,0,1);
LAB_1002ff880:
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1002ff8a0(long *param_1)

{
  long *local_30;
  code *pcStack_28;
  
  FUN_1002fd214();
  pcStack_28 = FUN_1002ffd88;
  local_30 = param_1;
  FUN_100643a8c(&local_30);
  (**(code **)(*param_1 + 0x160))(param_1);
  return;
}




void FUN_1002ff8ec(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  
  (**(code **)(*param_3 + 0x48))();
  if ((param_2 != 0.0) && (fVar5 = (float)(**(code **)(*param_3 + 0x48))(param_3), fVar5 != 0.0)) {
    plVar1 = param_3 + 0x1b;
    FUN_100652e60(param_3 + 0x32);
    FUN_10064e5ec(0,param_2 * 0.5,param_3 + 0x32,8,plVar1,8);
    fVar5 = -45.0;
    FUN_10064e5ec(0,0xc2340000,plVar1,8,param_3,8);
    plVar2 = param_3 + 0x79;
    FUN_10064e3cc(plVar1);
    FUN_10064e72c(fVar5 * -0.15,plVar2,0,plVar1,2);
    FUN_10064e72c(0,plVar2,4,plVar1,4);
    FUN_10064e72c(0x80000000,param_3 + 0x53,2,plVar2,0);
    FUN_10064e72c(0,param_3 + 0x53,4,plVar2,4);
    plVar1 = param_3 + 0xae;
    plVar3 = param_3 + 0x97;
    uVar6 = 0;
    FUN_10064e5ec(0,plVar1,0,plVar3,0);
    FUN_10064e72c(0x40a00000,param_3 + 0xc5,3,plVar1,1);
    FUN_10064e72c(0,param_3 + 0xc5,5,plVar1,5);
    local_58 = FUN_1006425d0(plVar3,0,0,1,1);
    uStack_54 = uVar6;
    FUN_10064e48c(plVar3,&local_58);
    if ((*(byte *)((long)param_3 + 0x6ac) >> 2 & 1) == 0) {
      FUN_10064e5ec(0,0,plVar1,8,plVar3,8);
    }
    FUN_10064e72c(0x41200000,plVar3,0,plVar2,2);
    FUN_10064e72c(0,plVar3,4,plVar2,4);
    plVar1 = param_3 + 0x189;
    bVar4 = false;
    if ((*(float *)((long)param_3 + 0xc8c) == 0.0) &&
       (bVar4 = false, !NAN(*(float *)(param_3 + 0x191)))) {
      bVar4 = *(float *)(param_3 + 0x191) == 0.0;
    }
    if (!bVar4) {
      param_3[0x191] = 0;
      FUN_1000200a0(plVar1);
    }
    uVar6 = 0;
    FUN_10064e5ec(0,param_3 + 0x1af,3,plVar1,2);
    plVar3 = param_3 + 0x172;
    local_58 = FUN_1006425d0(plVar3,1,0,1,1);
    uStack_54 = uVar6;
    FUN_10064e48c(plVar3,&local_58);
    FUN_10064e72c(0x43700000,plVar3,0,plVar2,2);
    FUN_10064e72c(0,plVar3,4,plVar2,4);
    fVar5 = (float)FUN_100651184(plVar1);
    if ((*(float *)(param_3 + 0x191) != fVar5) || (*(float *)((long)param_3 + 0xc8c) != 0.0)) {
      *(float *)(param_3 + 0x191) = fVar5;
      *(undefined4 *)((long)param_3 + 0xc8c) = 0;
      FUN_1000200a0(plVar1);
    }
  }
  return;
}




void FUN_1002ffbcc(long param_1)

{
  FUN_1002fd2bc();
  *(uint *)(param_1 + 0x31c) = *(uint *)(param_1 + 0x31c) & 0xfffffffb;
  *(uint *)(param_1 + 0x53c) = *(uint *)(param_1 + 0x53c) & 0xfffffffb;
  *(uint *)(param_1 + 0x44c) = *(uint *)(param_1 + 0x44c) & 0xfffffffb;
  return;
}




void thunk_FUN_1002ffc28(void)

{
  FUN_1002ffc28();
  return;
}




void FUN_1002ffc14(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1002ffc28();
  operator_delete(pvVar1);
  return;
}




void FUN_1002ffc28(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_1002ffc28_10148daa0;
  param_1[0x1d5] = &PTR_FUN_101472108;
  if (*(char *)((long)param_1 + 0xfd7) < '\0') {
    operator_delete((void *)param_1[0x1f8]);
  }
  if (*(char *)((long)param_1 + 0xfbf) < '\0') {
    operator_delete((void *)param_1[0x1f5]);
  }
  if ((void *)param_1[500] != (void *)0x0) {
    operator_delete__((void *)param_1[500]);
    param_1[500] = 0;
    param_1[499] = 0;
  }
  FUN_100214410(param_1 + 0x1d5);
  thunk_FUN_100651068(param_1 + 0x1af);
  thunk_FUN_100651068(param_1 + 0x189);
  thunk_FUN_10064e2bc(param_1 + 0x172);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0xaa0) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0xb58) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0xb70);
    FUN_10064e2bc((long)param_1 + lVar1 + 0xaa0);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  thunk_FUN_10064e2bc(param_1 + 0xc5);
  thunk_FUN_10064e2bc(param_1 + 0xae);
  thunk_FUN_10064e2bc(param_1 + 0x97);
  param_1[0x79] = &PTR_FUN_1014a7108;
  param_1[0x90] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x93);
  FUN_10064e2bc(param_1 + 0x79);
  thunk_FUN_100651068(param_1 + 0x53);
  param_1[0x32] = &PTR_FUN_1014a77a8;
  param_1[0x49] = &PTR_FUN_1014a7910;
  thunk_FUN_100657580(param_1 + 0x50);
  param_1[0x32] = &PTR_FUN_1014a7108;
  param_1[0x49] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x4c);
  FUN_10064e2bc(param_1 + 0x32);
  thunk_FUN_10064e2bc(param_1 + 0x1b);
  FUN_1002fd02c(param_1);
  return;
}




void FUN_1002ffd88(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001002ffd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))();
  return;
}




long * FUN_1002ffd94(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *local_48;
  
  puVar5 = (undefined8 *)FUN_1002fcff0();
  *puVar5 = &PTR_thunk_FUN_100300b58_10148dc28;
  puVar5 = puVar5 + 0x1b;
  thunk_FUN_100650e64(puVar5);
  plVar1 = param_1 + 0x41;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x58;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x7e;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xa4;
  thunk_FUN_1002fb340(plVar4);
  param_1[0x2b2] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b3] = 0;
  *(undefined8 *)((long)param_1 + 0x15ac) = 0;
  *(undefined8 *)((long)param_1 + 0x15a4) = 0;
  *(undefined8 *)((long)param_1 + 0x15bc) = 0;
  *(undefined8 *)((long)param_1 + 0x15b4) = 0;
  *(undefined8 *)((long)param_1 + 0x15cc) = 0;
  *(undefined8 *)((long)param_1 + 0x15c4) = 0;
  *(undefined8 *)((long)param_1 + 0x15d4) = 0x3f80000000000000;
  param_1[0x2bd] = 0;
  param_1[700] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2be] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c6] = 0;
  param_1[0x2c9] = 0;
  param_1[0x2c8] = 0;
  param_1[0x2b0] = (long)&PTR_FUN_101471ff8;
  param_1[0x2cc] = 0;
  param_1[0x2cb] = 0;
  param_1[0x2ca] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cd] = 0;
  FUN_1004e313c(param_1 + 0x2cf);
  FUN_1004e313c(param_1 + 0x2d1);
  *(undefined4 *)(param_1 + 0x2b4) = 3;
  param_1[0x2d3] = 0x42a0000044960000;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100651038(puVar5,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  local_48 = (undefined1 *)0x3f2666663f000000;
  (**(code **)(param_1[0x1b] + 0x28))(puVar5,&local_48);
  FUN_10065165c(puVar5,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_400_f_10184e270);
  local_48 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x58] + 0x28))(plVar2,&local_48);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_100_f_10184e258);
  FUN_1002fb690(plVar4,0);
  FUN_1002fb6f0(plVar4,1);
  return param_1;
}




long * thunk_FUN_1002ffd94(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined1 *puStack_48;
  
  puVar5 = (undefined8 *)FUN_1002fcff0();
  *puVar5 = &PTR_thunk_FUN_100300b58_10148dc28;
  puVar5 = puVar5 + 0x1b;
  thunk_FUN_100650e64(puVar5);
  plVar1 = param_1 + 0x41;
  FUN_10064e264(plVar1);
  plVar2 = param_1 + 0x58;
  thunk_FUN_100650e64(plVar2);
  plVar3 = param_1 + 0x7e;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0xa4;
  thunk_FUN_1002fb340(plVar4);
  param_1[0x2b2] = 0;
  param_1[0x2b1] = 0;
  param_1[0x2b3] = 0;
  *(undefined8 *)((long)param_1 + 0x15ac) = 0;
  *(undefined8 *)((long)param_1 + 0x15a4) = 0;
  *(undefined8 *)((long)param_1 + 0x15bc) = 0;
  *(undefined8 *)((long)param_1 + 0x15b4) = 0;
  *(undefined8 *)((long)param_1 + 0x15cc) = 0;
  *(undefined8 *)((long)param_1 + 0x15c4) = 0;
  *(undefined8 *)((long)param_1 + 0x15d4) = 0x3f80000000000000;
  param_1[0x2bd] = 0;
  param_1[700] = 0;
  param_1[0x2bf] = 0;
  param_1[0x2be] = 0;
  param_1[0x2c1] = 0;
  param_1[0x2c0] = 0;
  param_1[0x2c3] = 0;
  param_1[0x2c2] = 0;
  param_1[0x2c5] = 0;
  param_1[0x2c4] = 0;
  param_1[0x2c7] = 0;
  param_1[0x2c6] = 0;
  param_1[0x2c9] = 0;
  param_1[0x2c8] = 0;
  param_1[0x2b0] = (long)&PTR_FUN_101471ff8;
  param_1[0x2cc] = 0;
  param_1[0x2cb] = 0;
  param_1[0x2ca] = 0;
  param_1[0x2ce] = 0;
  param_1[0x2cd] = 0;
  FUN_1004e313c(param_1 + 0x2cf);
  FUN_1004e313c(param_1 + 0x2d1);
  *(undefined4 *)(param_1 + 0x2b4) = 3;
  param_1[0x2d3] = 0x42a0000044960000;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100642bd8(plVar1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,puVar5,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_100651038(puVar5,PTR_s_build___Fonts_Brandon_Bold_130_f_10184e260);
  puStack_48 = (undefined1 *)0x3f2666663f000000;
  (**(code **)(param_1[0x1b] + 0x28))(puVar5,&puStack_48);
  FUN_10065165c(puVar5,1);
  FUN_100651038(plVar2,PTR_s_build___Fonts_Brandon_Bold_400_f_10184e270);
  puStack_48 = &DAT_3f0000003f000000;
  (**(code **)(param_1[0x58] + 0x28))(plVar2,&puStack_48);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Brandon_Bold_100_f_10184e258);
  FUN_1002fb690(plVar4,0);
  FUN_1002fb6f0(plVar4,1);
  return param_1;
}




void FUN_1002fffc0(long param_1)

{
  FUN_1002fb8c4(param_1 + 0x520);
  return;
}




void FUN_1002fffc8(long *param_1,long param_2)

{
  long *plVar1;
  string *this;
  size_t sVar2;
  size_t sVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  string *psVar12;
  string *psVar13;
  string *psVar14;
  string *psVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_60 [8];
  void *local_58;
  
  std::string::operator=((string *)(param_1 + 0x2b1),(string *)(param_2 + 8));
  param_1[0x2b4] = *(long *)(param_2 + 0x20);
  psVar15 = (string *)(param_1 + 0x2b5);
  std::string::operator=(psVar15,(string *)(param_2 + 0x28));
  std::string::operator=((string *)(param_1 + 0x2b8),(string *)(param_2 + 0x40));
  *(undefined4 *)(param_1 + 699) = *(undefined4 *)(param_2 + 0x58);
  this = (string *)(param_1 + 700);
  std::string::operator=(this,(string *)(param_2 + 0x60));
  psVar13 = (string *)(param_1 + 0x2bf);
  std::string::operator=(psVar13,(string *)(param_2 + 0x78));
  std::string::operator=((string *)(param_1 + 0x2c2),(string *)(param_2 + 0x90));
  std::string::operator=((string *)(param_1 + 0x2c5),(string *)(param_2 + 0xa8));
  std::string::operator=((string *)(param_1 + 0x2c8),(string *)(param_2 + 0xc0));
  lVar16 = *(long *)(param_2 + 0xf0);
  lVar8 = *(long *)(param_2 + 0xe8);
  lVar17 = *(long *)(param_2 + 0xd8);
  param_1[0x2cc] = *(long *)(param_2 + 0xe0);
  param_1[0x2cb] = lVar17;
  param_1[0x2ce] = lVar16;
  param_1[0x2cd] = lVar8;
  FUN_1000153b4(param_1 + 0x2cf,param_2 + 0xf8);
  FUN_1000153b4(param_1 + 0x2d1,param_2 + 0x108);
  plVar1 = param_1 + 0xa4;
  FUN_1002fb710((float)(int)param_1[0x2cb],(float)*(int *)((long)param_1 + 0x165c),plVar1);
  FUN_1002fb85c((float)(int)param_1[0x2cc],plVar1);
  *(float *)(param_1 + 0x2d4) = (float)(int)param_1[0x2ce];
  FUN_1002fb864(plVar1,*(undefined4 *)((long)param_1 + 0x1664));
  FUN_1004e313c(auStack_60);
  FUN_1004e38ac(auStack_60,"%d");
  FUN_1006513c0(param_1 + 0x58,auStack_60);
  FUN_1006513c0(param_1 + 0x1b,param_1 + 0x2d1);
  *(uint *)((long)param_1 + 0x15c) = *(uint *)((long)param_1 + 0x15c) & 0xfffffffb;
  FUN_1006513c0(param_1 + 0x7e,param_1 + 0x2cf);
  FUN_10065165c(param_1 + 0x7e,1);
  (**(code **)(*param_1 + 0x160))(param_1);
  (**(code **)(*param_1 + 0x148))(param_1);
  FUN_100301d28(0x438c0000,0x41700000,0x3f333333,0x3e800000,param_1 + 0x58,
                (string *)(param_1 + 0x2c5));
  bVar6 = *(byte *)((long)param_1 + 0x15bf);
  uVar9 = (ulong)bVar6;
  sVar2 = param_1[0x2b6];
  if (-1 < (char)bVar6) {
    sVar2 = uVar9;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    psVar14 = *(string **)psVar15;
    psVar12 = psVar14;
    if (-1 < (char)bVar6) {
      psVar12 = psVar15;
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(psVar12,pbVar11,sVar2), psVar15 = psVar14, iVar7 != 0))
      goto LAB_100300270;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar11 == ((uint)psVar14 & 0xff)) {
        pbVar10 = (byte *)((long)param_1 + 0x15a9);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_100300284;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
        goto LAB_100300250;
      }
      goto LAB_100300270;
    }
  }
  else {
LAB_100300250:
    if ((char)bVar6 < '\0') {
      psVar15 = *(string **)psVar15;
    }
LAB_100300270:
    FUN_1001e79b8(0x3f800000,psVar15,0,1);
  }
LAB_100300284:
  if ((int)param_1[0x2cc] < (int)param_1[0x2ce]) {
    bVar6 = *(byte *)((long)param_1 + 0x160f);
    uVar9 = (ulong)bVar6;
    sVar2 = param_1[0x2c0];
    if (-1 < (char)bVar6) {
      sVar2 = uVar9;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar2 == sVar3) {
      psVar12 = *(string **)psVar13;
      psVar15 = psVar12;
      if (-1 < (char)bVar6) {
        psVar15 = psVar13;
      }
      pbVar11 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar11 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar6 < '\0') {
        if (sVar2 == 0) goto LAB_100300418;
        iVar7 = _memcmp(psVar15,pbVar11,sVar2);
joined_r0x0001003003ec:
        psVar13 = psVar12;
        if (iVar7 == 0) goto LAB_100300418;
      }
      else {
        if (sVar2 == 0) goto LAB_100300418;
        if ((uint)*pbVar11 == ((uint)psVar12 & 0xff)) {
          pbVar10 = (byte *)((long)param_1 + 0x15f9);
          do {
            uVar9 = uVar9 - 1;
            pbVar11 = pbVar11 + 1;
            if (uVar9 == 0) goto LAB_100300418;
            bVar5 = *pbVar10;
            pbVar10 = pbVar10 + 1;
          } while (bVar5 == *pbVar11);
          goto LAB_10030031c;
        }
      }
    }
    else {
LAB_10030031c:
      if ((char)bVar6 < '\0') {
        psVar13 = *(string **)psVar13;
      }
    }
  }
  else {
    bVar6 = *(byte *)((long)param_1 + 0x15f7);
    uVar9 = (ulong)bVar6;
    sVar2 = param_1[0x2bd];
    if (-1 < (char)bVar6) {
      sVar2 = uVar9;
    }
    sVar3 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar3 = (ulong)DAT_101d911a8._7_1_;
    }
    psVar13 = this;
    if (sVar2 == sVar3) {
      psVar12 = *(string **)this;
      psVar15 = psVar12;
      if (-1 < (char)bVar6) {
        psVar15 = this;
      }
      pbVar11 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar11 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar6 < '\0') {
        if (sVar2 == 0) goto LAB_100300418;
        iVar7 = _memcmp(psVar15,pbVar11,sVar2);
        goto joined_r0x0001003003ec;
      }
      if (sVar2 == 0) goto LAB_100300418;
      if ((uint)*pbVar11 != ((uint)psVar12 & 0xff)) goto LAB_1003003f8;
      pbVar10 = (byte *)((long)param_1 + 0x15e1);
      do {
        uVar9 = uVar9 - 1;
        pbVar11 = pbVar11 + 1;
        if (uVar9 == 0) goto LAB_100300418;
        bVar5 = *pbVar10;
        pbVar10 = pbVar10 + 1;
      } while (bVar5 == *pbVar11);
    }
    if ((char)bVar6 < '\0') {
      psVar13 = *(string **)this;
    }
  }
LAB_1003003f8:
  lVar8 = FUN_1001e79b8(0x3f400000,psVar13,0,1);
  if (lVar8 != 0) {
    uVar4 = *(undefined4 *)(lVar8 + 0x30);
    param_1[0x19] = lVar8 + 0x28;
    *(undefined4 *)(param_1 + 0x1a) = uVar4;
  }
LAB_100300418:
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  return;
}

