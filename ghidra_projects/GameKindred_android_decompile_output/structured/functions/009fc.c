// functions/009fc — 30 functions
#include "libGameKindred.h"




long FUN_009fc26c(long param_1,uint param_2)

{
  return *(long *)(param_1 + 0x18) + (ulong)param_2 * 0xe8;
}




undefined4 FUN_009fc27c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}




void FUN_009fc284(void)

{
  FUN_00ceace8();
  FUN_00ceb0fc();
  return;
}




void FUN_009fc298(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00ceace8();
  FUN_00ceafec(uVar1,1);
  return;
}




undefined8 FUN_009fc2b0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  undefined8 local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00ceacf4();
  uVar3 = FUN_00cacb98(uVar2,param_1);
  if ((uVar3 & 1) != 0) {
    uVar2 = FUN_00e6ce7c("HUD_LOADING_SCREEN_TIP_BASE",0);
    thunk_FUN_00e7051c(&local_38,uVar2);
    FUN_00e705c8(&local_48,&DAT_01b9db64);
    FUN_00e705c8(&local_58,"{100,189,209,255}");
    FUN_00e713f0(&local_38,0,&local_48,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    FUN_00e705c8(&local_48,"[/EM]");
    FUN_00e705c8(&local_58,&DAT_01bd12d3);
    FUN_00e713f0(&local_38,0,&local_48,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    FUN_00e705c8(&local_48,"[LOADING_TIP]");
    FUN_00e71248(&local_38,0,&local_48,param_1);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
    FUN_00910394(param_1,&local_38);
    if (local_30 != (void *)0x0) {
      operator_delete__(local_30);
      local_38 = 0;
      local_30 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fc41c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,"build://Splash_Celeste_Queen_T1.png");
  plVar4 = (long *)(param_1 + 0x18);
  FUN_008fce60(*plVar4 + 0x80,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"build://Splash_Kestrel.png");
  FUN_008fce60(*plVar4 + 0x168,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"build://Splash_Fortress_Xmas.png");
  FUN_008fce60(*plVar4 + 0x250,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"build://Splash_Vox_Pirate_T2.png");
  FUN_008fce60(*plVar4 + 0x338,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"build://Splash_SAW_SAWborg_T3.png");
  FUN_008fce60(*plVar4 + 0x420,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"build://Splash_Celeste.png");
  FUN_008fce60(*plVar4 + 0x508,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"build://Splash_Fortress_Xmas.png");
  FUN_008fce60(*plVar4 + 0x5f0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"build://Splash_Kestrel.png");
  FUN_008fce60(*plVar4 + 0x6d8,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"build://Splash_Vox_Pirate_T2.png");
  FUN_008fce60(*plVar4 + 0x7c0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"build://Splash_Adagio.png");
  FUN_008fce60(*plVar4 + 0x8a8,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_Celeste_Queen_T1_5v5");
  FUN_008fce60(*plVar4 + 0xb0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_Kestrel_5v5");
  FUN_008fce60(*plVar4 + 0x198,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_Fortress_Xmas_5v5");
  FUN_008fce60(*plVar4 + 0x280,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_Vox_Pirate_T2_5v5");
  FUN_008fce60(*plVar4 + 0x368,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_SAW_SAWborg_T3_5v5");
  FUN_008fce60(*plVar4 + 0x450,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_Celeste_5v5");
  FUN_008fce60(*plVar4 + 0x538,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_Fortress_Xmas_5v5");
  FUN_008fce60(*plVar4 + 0x620,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_Kestrel_5v5");
  FUN_008fce60(*plVar4 + 0x708,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_Vox_Pirate_T2_5v5");
  FUN_008fce60(*plVar4 + 0x7f0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"loading_vert_Adagio_5v5");
  FUN_008fce60(*plVar4 + 0x8d8,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"Celeste Queen I");
  FUN_008fce60(*plVar4 + 0x98,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"Kestrel");
  FUN_008fce60(*plVar4 + 0x180,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"Christmas Fortress");
  FUN_008fce60(*plVar4 + 0x268,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"Vox Pirate II");
  FUN_008fce60(*plVar4 + 0x350,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"SAWborg III");
  FUN_008fce60(*plVar4 + 0x438,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"Celeste");
  FUN_008fce60(*plVar4 + 0x520,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,&DAT_01b9dd7e);
  FUN_008fce60(*plVar4 + 0x608,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"Kestrel");
  FUN_008fce60(*plVar4 + 0x6f0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"Vox Pirate II");
  FUN_008fce60(*plVar4 + 0x7d8,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_008fa54c(local_40,"Adagio");
  FUN_008fce60(*plVar4 + 0x8c0,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  lVar2 = 0;
  puVar3 = (undefined4 *)(*plVar4 + 0xdc);
  do {
    *puVar3 = (int)lVar2;
    lVar2 = lVar2 + 1;
    puVar3 = puVar3 + 0x3a;
  } while (lVar2 != 10);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fca1c(undefined4 *param_1)

{
  *param_1 = 0xffffffff;
  memset(param_1 + 2,0,0xc0);
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined2 *)((long)param_1 + 0xce) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0x3f000000;
  param_1[0x32] = 0xffffffff;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_009fca7c(long param_1)

{
  if ((*(byte *)(param_1 + 0xb0) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xc0));
  }
  if ((*(byte *)(param_1 + 0x98) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xa8));
  }
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x90));
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x78));
  }
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x60));
  }
  if ((*(byte *)(param_1 + 0x38) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x20) & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x18));
  return;
}




long FUN_009fcb20(long param_1)

{
  return param_1 + 0x50;
}




long FUN_009fcb28(long param_1)

{
  return param_1 + 0x20;
}




long FUN_009fcb30(long param_1)

{
  return param_1 + 0x68;
}




undefined1 FUN_009fcb38(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcd);
}




undefined1 FUN_009fcb40(long param_1)

{
  return *(undefined1 *)(param_1 + 0xce);
}




undefined1 FUN_009fcb48(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcf);
}




undefined1 FUN_009fcb50(long param_1)

{
  return *(undefined1 *)(param_1 + 0xd0);
}




long FUN_009fcb58(long param_1)

{
  return param_1 + 0x80;
}




long FUN_009fcb60(long param_1)

{
  return param_1 + 0xb0;
}




long FUN_009fcb68(long param_1)

{
  return param_1 + 0x98;
}




long FUN_009fcb70(long param_1)

{
  return param_1 + 200;
}




undefined1 FUN_009fcb78(long param_1)

{
  return *(undefined1 *)(param_1 + 0xcc);
}




long FUN_009fcb80(long param_1)

{
  return param_1 + 0x38;
}




undefined4 FUN_009fcb88(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd4);
}




undefined4 FUN_009fcb90(long param_1)

{
  return *(undefined4 *)(param_1 + 0xd8);
}




undefined4 FUN_009fcb98(long param_1)

{
  return *(undefined4 *)(param_1 + 0xdc);
}




undefined4 FUN_009fcba0(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe0);
}




undefined4 FUN_009fcba8(long param_1)

{
  return *(undefined4 *)(param_1 + 0xe4);
}




void FUN_009fcbb0(uint *param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0xe8;
      do {
        FUN_009fca7c(lVar1);
        lVar2 = lVar2 + -0xe8;
        lVar1 = lVar1 + 0xe8;
      } while (lVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_009fcc20(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 * 0xe8);
    puVar3 = *(undefined4 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar5 = puVar3 + (ulong)*param_1 * 0x3a;
      puVar6 = puVar2;
      do {
        *puVar6 = *puVar3;
        FUN_008fcdb8(puVar6 + 2,puVar3 + 2);
        FUN_008fcdb8(puVar6 + 8,puVar3 + 8);
        FUN_008fcdb8(puVar6 + 0xe,puVar3 + 0xe);
        FUN_008fcdb8(puVar6 + 0x14,puVar3 + 0x14);
        FUN_008fcdb8(puVar6 + 0x1a,puVar3 + 0x1a);
        FUN_008fcdb8(puVar6 + 0x20,puVar3 + 0x20);
        FUN_008fcdb8(puVar6 + 0x26,puVar3 + 0x26);
        FUN_008fcdb8(puVar6 + 0x2c,puVar3 + 0x2c);
        uVar7 = *(undefined8 *)(puVar3 + 0x36);
        *(undefined8 *)(puVar6 + 0x38) = *(undefined8 *)(puVar3 + 0x38);
        *(undefined8 *)(puVar6 + 0x36) = uVar7;
        puVar1 = (undefined8 *)(puVar3 + 0x34);
        uVar7 = *(undefined8 *)(puVar3 + 0x32);
        puVar3 = puVar3 + 0x3a;
        *(undefined8 *)(puVar6 + 0x34) = *puVar1;
        *(undefined8 *)(puVar6 + 0x32) = uVar7;
        puVar6 = puVar6 + 0x3a;
      } while (puVar3 != puVar5);
      puVar3 = *(undefined4 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0xe8;
        do {
          FUN_009fca7c(puVar3);
          lVar4 = lVar4 + -0xe8;
          puVar3 = puVar3 + 0x3a;
        } while (lVar4 != 0);
        puVar3 = *(undefined4 **)(param_1 + 2);
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      operator_delete__(puVar3);
    }
    *(undefined4 **)(param_1 + 2) = puVar2;
  }
  return;
}




void FUN_009fcd54(undefined8 *param_1,byte param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_009e08ac();
  *param_1 = &PTR_FUN_027c6628;
  memset((void *)((long)param_1 + 0x94),0,0x126e);
  *(byte *)((long)param_1 + 0x1302) = param_2 & 1;
  FUN_009fce90(param_1);
  FUN_009fd234(param_1);
  *(undefined4 *)((long)param_1 + 0x8e4) = 0x41200000;
  uVar3 = FUN_00d6eb50();
  uVar2 = FUN_00d6e9d4(uVar3,"*Adagio*");
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  uVar3 = FUN_00d6eb50();
  uVar2 = FUN_00d6e9d4(uVar3,"*Ozo*");
  lVar4 = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  *(undefined1 *)(param_1 + 0x11d) = 1;
  lVar5 = (long)param_1 + 0xac;
  *(undefined4 *)((long)param_1 + 0x94) = 0x2010201;
  *(undefined4 *)((long)param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = 0xffff;
  *(undefined4 *)((long)param_1 + 0xa4) = 0xffff;
  do {
    lVar6 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar6) = 0xffff;
      lVar6 = lVar6 + 4;
    } while (lVar6 != 0x18);
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + 0x18;
  } while (lVar4 != 10);
  *(undefined4 *)((long)param_1 + 0x8ea) = 0x41200000;
  pcStack_40 = thunk_FUN_009fd500;
  local_48 = param_1;
  FUN_00f02e98(0xbf800000,&local_48,0,1);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009fce90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *__src;
  ulong uVar4;
  void *__dest;
  undefined8 local_6f0;
  void *local_6e8;
  undefined8 local_6e0;
  void *local_6d8;
  ushort local_6d0 [2];
  undefined4 local_6cb;
  undefined2 local_6c7;
  undefined2 local_6c5;
  undefined1 auStack_6bf [144];
  undefined2 local_62f;
  undefined1 local_62d;
  undefined2 local_62a;
  undefined1 local_627;
  undefined2 local_625;
  undefined1 local_622;
  undefined2 local_621;
  undefined1 auStack_619 [144];
  undefined2 local_589;
  undefined1 local_587;
  undefined1 local_586;
  undefined2 local_584;
  undefined4 local_57f;
  undefined2 local_57b;
  undefined1 auStack_573 [144];
  undefined2 local_4e3;
  undefined2 local_4de [2];
  undefined4 local_4d9;
  undefined2 local_4d5;
  undefined1 auStack_4cd [144];
  undefined2 local_43d;
  undefined2 local_438 [2];
  undefined1 local_433;
  undefined2 local_431;
  undefined2 local_42f;
  undefined1 auStack_427 [144];
  undefined2 local_397;
  undefined1 auStack_390 [816];
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  __src = auStack_390;
  memset(auStack_390,0,0x325);
  uVar4 = 0;
  __dest = (void *)(param_1 + 0x8f2);
  do {
    FUN_009fdb58(param_1,__src,uVar4 & 0xffffffff,1,0);
    memcpy(__dest,__src,0xa1);
    uVar4 = uVar4 + 1;
    __dest = (void *)((long)__dest + 0xa1);
    __src = __src + 0xa1;
  } while (uVar4 != 5);
  memset(local_6d0,0,0x33e);
  FUN_00e705c8(&local_6e0,"teamLeftPlayerOne");
  FUN_00e70978(&local_6e0,auStack_6bf,0x40);
  local_6d0[0] = 1;
  local_6cb = 0x101ffff;
  uVar2 = FUN_00d6eb50();
  local_6c7 = FUN_00d6e9d4(uVar2,"*Tony*");
  local_62d = 1;
  local_62f = 0x100;
  local_6c5 = 0xffff;
  local_6d0[0] = local_6d0[0] & 0xff;
  FUN_00e705c8(&local_6f0,"teamLeftPlayerTwo");
  FUN_00910394(&local_6e0,&local_6f0);
  if (local_6e8 != (void *)0x0) {
    operator_delete__(local_6e8);
    local_6f0 = 0;
    local_6e8 = (void *)0x0;
  }
  FUN_00e70978(&local_6e0,auStack_619,0x40);
  local_62a = 1;
  local_625 = 0x2ff;
  local_622 = 1;
  local_627 = 0;
  local_586 = 1;
  uVar2 = FUN_00d6eb50();
  local_621 = FUN_00d6e9d4(uVar2,"*Ardan*");
  local_589 = 0x401;
  local_587 = 0;
  local_62a = CONCAT11(1,(undefined1)local_62a);
  FUN_00e705c8(&local_6f0,"teamLeftPlayerThree");
  FUN_00910394(&local_6e0,&local_6f0);
  if (local_6e8 != (void *)0x0) {
    operator_delete__(local_6e8);
    local_6f0 = 0;
    local_6e8 = (void *)0x0;
  }
  FUN_00e70978(&local_6e0,auStack_573,0x40);
  local_584 = 1;
  local_57f = 0x101ff03;
  uVar2 = FUN_00d6eb50();
  local_57b = FUN_00d6e9d4(uVar2,"*Blackfeather*");
  local_4e3 = 0x502;
  local_584 = CONCAT11(2,(undefined1)local_584);
  if (*(char *)(param_1 + 0x1302) != '\0') {
    FUN_00e705c8(&local_6f0,"teamLeftPlayerFour");
    FUN_00910394(&local_6e0,&local_6f0);
    if (local_6e8 != (void *)0x0) {
      operator_delete__(local_6e8);
      local_6f0 = 0;
      local_6e8 = (void *)0x0;
    }
    FUN_00e70978(&local_6e0,auStack_4cd,0x40);
    local_4de[0] = 0x301;
    local_4d9 = 0x1010104;
    local_43d = 0x803;
    local_4d5 = 0xffff;
    FUN_00e705c8(&local_6f0,"teamLeftPlayerFive");
    FUN_00910394(&local_6e0,&local_6f0);
    if (local_6e8 != (void *)0x0) {
      operator_delete__(local_6e8);
      local_6f0 = 0;
      local_6e8 = (void *)0x0;
    }
    FUN_00e70978(&local_6e0,auStack_427,0x40);
    local_438[0] = 0x401;
    local_433 = 1;
    local_431 = 0x101;
    local_397 = 0x904;
    local_42f = 0xffff;
  }
  memcpy((void *)(param_1 + 0x19c),local_6d0,0xa6);
  memcpy((void *)(param_1 + 0x242),&local_62a,0xa6);
  memcpy((void *)(param_1 + 0x2e8),&local_584,0xa6);
  memcpy((void *)(param_1 + 0x38e),local_4de,0xa6);
  memcpy((void *)(param_1 + 0x434),local_438,0xa6);
  if (local_6d8 != (void *)0x0) {
    operator_delete__(local_6d8);
    local_6e0 = 0;
    local_6d8 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) != lVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

