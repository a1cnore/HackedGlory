// functions/00a59 — 14 functions
#include "libGameKindred.h"




void FUN_00a59144(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  plVar1 = *(long **)(param_1 + 0x7b8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7c0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar2 + 0x40);
        fVar5 = *(float *)(lVar4 + 800);
        fVar9 = (*(float *)(lVar4 + 0x244) + 1.0) *
                (*(float *)(lVar4 + 0xdc) +
                *(float *)(lVar4 + 400) * (*(float *)(lVar4 + 0x2f8) + 1.0));
        fVar6 = (*(float *)(lVar4 + 0x248) + 1.0) *
                (*(float *)(lVar4 + 0xe0) +
                *(float *)(lVar4 + 0x194) * (*(float *)(lVar4 + 0x2fc) + 1.0));
        if (DAT_03132c14 <= fVar9) {
          fVar9 = DAT_03132c14;
        }
        fVar10 = DAT_03132b54;
        if (DAT_03132b54 <= fVar9) {
          fVar10 = fVar9;
        }
        fVar9 = *(float *)(lVar4 + 0x334);
        if (DAT_03132c18 <= fVar6) {
          fVar6 = DAT_03132c18;
        }
        fVar7 = (float)DAT_03132b58;
        if ((float)DAT_03132b58 <= fVar6) {
          fVar7 = fVar6;
        }
        FUN_00ceace8();
        uVar3 = FUN_00ceb054();
        lVar2 = *(long *)(lVar2 + 0x40);
        if ((uVar3 & 1) == 0) {
          fVar6 = *(float *)(lVar2 + 0x340);
        }
        else {
          fVar8 = (*(float *)(lVar2 + 0x238) + 1.0) *
                  (*(float *)(lVar2 + 0xd0) +
                  *(float *)(lVar2 + 0x184) * (*(float *)(lVar2 + 0x2ec) + 1.0));
          if (DAT_03132c08 <= fVar8) {
            fVar8 = DAT_03132c08;
          }
          fVar6 = DAT_03132b48;
          if (DAT_03132b48 <= fVar8) {
            fVar6 = fVar8;
          }
        }
        lVar2 = param_1 + 0x7c8;
        FUN_00e70e18(lVar2,&DAT_01bb6d43,(int)fVar5);
        FUN_00f0d75c(param_1 + 0x158,lVar2);
        FUN_00e70e18(lVar2,&DAT_01bb6d43,(int)fVar6);
        FUN_00f0d75c(param_1 + 0x3b8,lVar2);
        FUN_00e70e18(lVar2,&DAT_01ba0a26,(int)fVar10,(int)fVar7,(int)fVar9);
        FUN_00f0d75c(param_1 + 0x288,lVar2);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x7b8) = 0;
      *(undefined4 *)(param_1 + 0x7c0) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a5933c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cb8d8;
  if ((void *)param_1[0x198] != (void *)0x0) {
    operator_delete__((void *)param_1[0x198]);
    param_1[0x198] = 0;
    param_1[0x197] = 0;
  }
  param_1[0x177] = &PTR_FUN_028266f0;
  param_1[0x18e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x191);
  FUN_00f13d08(param_1 + 0x177);
  param_1[0x159] = &PTR_FUN_028266f0;
  param_1[0x170] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x173);
  FUN_00f13d08(param_1 + 0x159);
  param_1[0x13b] = &PTR_FUN_028266f0;
  param_1[0x152] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x155);
  FUN_00f13d08(param_1 + 0x13b);
  param_1[0x11d] = &PTR_FUN_028266f0;
  param_1[0x134] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x137);
  FUN_00f13d08(param_1 + 0x11d);
  param_1[0xff] = &PTR_FUN_028266f0;
  param_1[0x116] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x119);
  FUN_00f13d08(param_1 + 0xff);
  FUN_00f0d3a4(param_1 + 0xd9);
  FUN_00f0d3a4(param_1 + 0xb3);
  FUN_00f0d3a4(param_1 + 0x8d);
  FUN_00f0d3a4(param_1 + 0x67);
  FUN_00f0d3a4(param_1 + 0x41);
  FUN_00f01868(param_1 + 0x30);
  FUN_00f13d08(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a59460(void *param_1)

{
  FUN_00a5933c();
  operator_delete(param_1);
  return;
}




void thunk_FUN_00a59144(long param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  plVar1 = *(long **)(param_1 + 0x7b8);
  if (plVar1 != (long *)0x0) {
    if (*(int *)(param_1 + 0x7c0) == (int)plVar1[1]) {
      lVar2 = (**(code **)(*plVar1 + 0x10))();
      if (lVar2 != 0) {
        lVar4 = *(long *)(lVar2 + 0x40);
        fVar5 = *(float *)(lVar4 + 800);
        fVar9 = (*(float *)(lVar4 + 0x244) + 1.0) *
                (*(float *)(lVar4 + 0xdc) +
                *(float *)(lVar4 + 400) * (*(float *)(lVar4 + 0x2f8) + 1.0));
        fVar6 = (*(float *)(lVar4 + 0x248) + 1.0) *
                (*(float *)(lVar4 + 0xe0) +
                *(float *)(lVar4 + 0x194) * (*(float *)(lVar4 + 0x2fc) + 1.0));
        if (DAT_03132c14 <= fVar9) {
          fVar9 = DAT_03132c14;
        }
        fVar10 = DAT_03132b54;
        if (DAT_03132b54 <= fVar9) {
          fVar10 = fVar9;
        }
        fVar9 = *(float *)(lVar4 + 0x334);
        if (DAT_03132c18 <= fVar6) {
          fVar6 = DAT_03132c18;
        }
        fVar7 = (float)DAT_03132b58;
        if ((float)DAT_03132b58 <= fVar6) {
          fVar7 = fVar6;
        }
        FUN_00ceace8();
        uVar3 = FUN_00ceb054();
        lVar2 = *(long *)(lVar2 + 0x40);
        if ((uVar3 & 1) == 0) {
          fVar6 = *(float *)(lVar2 + 0x340);
        }
        else {
          fVar8 = (*(float *)(lVar2 + 0x238) + 1.0) *
                  (*(float *)(lVar2 + 0xd0) +
                  *(float *)(lVar2 + 0x184) * (*(float *)(lVar2 + 0x2ec) + 1.0));
          if (DAT_03132c08 <= fVar8) {
            fVar8 = DAT_03132c08;
          }
          fVar6 = DAT_03132b48;
          if (DAT_03132b48 <= fVar8) {
            fVar6 = fVar8;
          }
        }
        lVar2 = param_1 + 0x7c8;
        FUN_00e70e18(lVar2,&DAT_01bb6d43,(int)fVar5);
        FUN_00f0d75c(param_1 + 0x158,lVar2);
        FUN_00e70e18(lVar2,&DAT_01bb6d43,(int)fVar6);
        FUN_00f0d75c(param_1 + 0x3b8,lVar2);
        FUN_00e70e18(lVar2,&DAT_01ba0a26,(int)fVar10,(int)fVar7,(int)fVar9);
        FUN_00f0d75c(param_1 + 0x288,lVar2);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x7b8) = 0;
      *(undefined4 *)(param_1 + 0x7c0) = DAT_03214ce8;
    }
  }
  return;
}




void FUN_00a59488(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined8 uVar14;
  code *local_98;
  long *plStack_90;
  long *local_88;
  code *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  FUN_00b89cd8();
  plVar1 = param_1 + 0x19;
  *param_1 = (long)&PTR_FUN_027cbb70;
  FUN_00b89cd8(plVar1);
  FUN_00f0b3a4();
  FUN_00c83504(param_1 + 0x4d);
  FUN_00f13ca4(param_1 + 0xbe);
  FUN_00f0b3a4();
  FUN_00f0b3a4();
  FUN_00f0b3a4();
  FUN_00f0b3a4();
  plVar2 = param_1 + 0x141;
  FUN_00f0d160();
  FUN_00a5d790(param_1 + 0x167);
  plVar3 = param_1 + 0x504;
  FUN_00f11234(plVar3);
  FUN_00a624b8(param_1 + 0x538);
  FUN_00a5e4b8(param_1 + 0x5856);
  FUN_00a5bf40(param_1 + 0x5e4c);
  FUN_00a61af0();
  plVar4 = param_1 + 0x66c6;
  FUN_00b1b85c(plVar4,1);
  plVar5 = param_1 + 0x6759;
  FUN_00abaee8(plVar5,1);
  param_1[0x6818] = 0;
  *(undefined4 *)(param_1 + 0x6819) = DAT_03214ce8;
  param_1[0x681a] = 0;
  uVar9 = FUN_00e6a474("HUD_Store");
  uVar10 = FUN_0091ed5c("HUD_Store",uVar9,0x1234);
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar10 & 0xffff) << 0xf;
  FUN_00ceace8();
  uVar13 = FUN_00ceaf54();
  uVar10 = 0;
  if ((uVar13 & 1) != 0) {
    FUN_00ceace8();
    uVar10 = FUN_00ceaf64();
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,param_1 + 0x32,1);
  FUN_00f023ec(plVar1,param_1 + 0x4d,1);
  FUN_00f023ec(plVar1,param_1 + 0x10b,1);
  FUN_00f023ec(plVar1,param_1 + 0x126,1);
  FUN_00f023ec(plVar1,param_1 + 0xd5,1);
  FUN_00f023ec(plVar1,param_1 + 0xf0,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00f023ec(plVar3,param_1 + 0x538,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x167,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x6397,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5e4c,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x5856,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar5,1);
  if ((uVar10 & 1) != 0) {
    (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  }
  FUN_00f0b424(param_1 + 0x32,1);
  uVar9 = DAT_03210f58;
  local_98 = thunk_FUN_00a5bd48;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar9;
  FUN_009693a0(param_1 + 0xd6,&local_98);
  local_98 = thunk_FUN_00a5bd48;
  uVar6 = DAT_03210f84;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar6;
  FUN_009693a0(param_1 + 0xd6,&local_98);
  FUN_00f0b424(param_1 + 0xd5,1);
  local_98 = thunk_FUN_00a5bd48;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar9;
  FUN_009693a0(param_1 + 0xf1,&local_98);
  local_98 = thunk_FUN_00a5bd48;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar6;
  FUN_009693a0(param_1 + 0xf1,&local_98);
  FUN_00f0b424(param_1 + 0xf0,1);
  FUN_00f0e578(param_1 + 0x67f4,"circle_button_x");
  FUN_00abb1c8(0x3f400000,plVar5,&DAT_01bee7f6);
  local_98 = thunk_FUN_00a5bd48;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar9;
  FUN_009693a0(param_1 + 0x675a,&local_98);
  local_98 = thunk_FUN_00a5bd48;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar6;
  FUN_009693a0(param_1 + 0x675a,&local_98);
  uVar11 = FUN_00e6a474("HUD_Store_Close_Button");
  uVar12 = FUN_0091ed5c("HUD_Store_Close_Button",uVar11,0x1234);
  uVar11 = DAT_03210c64;
  *(uint *)((long)param_1 + 0x33b4c) =
       *(uint *)((long)param_1 + 0x33b4c) & 0x80000000 |
       *(uint *)((long)param_1 + 0x33b4c) & 0x7fff | (uVar12 & 0xffff) << 0xf;
  local_98 = FUN_00a59bf8;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar11;
  FUN_009693a0(param_1 + 0x168,&local_98);
  plVar1 = param_1 + 0x539;
  local_98 = FUN_00a59c00;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar11;
  FUN_009693a0(plVar1,&local_98);
  uVar7 = DAT_03210c6c;
  local_98 = thunk_FUN_00a5b474;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar7;
  FUN_009693a0(plVar1,&local_98);
  local_70 = FUN_00f048a4("EVENT_SHOP_RIGHT_CLICK_BUY_ITEM");
  local_98 = thunk_FUN_00a5b474;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(plVar1,&local_98);
  local_98 = thunk_FUN_00a5b474;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar11;
  FUN_009693a0(param_1 + 0x5e4d,&local_98);
  local_70 = DAT_03133768;
  local_98 = FUN_00a59c0c;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x5e4d,&local_98);
  uVar13 = FUN_0093d930();
  if ((uVar13 & 1) != 0) {
    local_98 = thunk_FUN_00a5b474;
    local_80 = (code *)0x0;
    uStack_78 = 0;
    local_88 = (long *)0x0;
    plStack_90 = param_1;
    local_70 = uVar7;
    FUN_009693a0(param_1 + 0x5857,&local_98);
  }
  FUN_00f0b424(param_1 + 0x10b,1);
  FUN_00f0b424(param_1 + 0x126,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_NorthwoodHigh_Regu_02be9ce0);
  uVar14 = FUN_00e6ce7c("HUD_STORE_TITLE",0);
  FUN_00f0d75c(plVar2,uVar14);
  *(uint *)((long)param_1 + 0xa8c) = *(uint *)((long)param_1 + 0xa8c) | 0x10;
  local_98 = thunk_FUN_00a5bd48;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar9;
  FUN_009693a0(param_1 + 0x142,&local_98);
  local_98 = thunk_FUN_00a5bd48;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar6;
  FUN_009693a0(param_1 + 0x142,&local_98);
  local_98 = FUN_00a59c18;
  local_80 = (code *)0x0;
  uStack_78 = 0;
  local_88 = (long *)0x0;
  plStack_90 = param_1;
  local_70 = uVar11;
  FUN_009693a0(param_1 + 0x5857,&local_98);
  if ((uVar10 & 1) != 0) {
    uVar14 = FUN_009f1f64();
    local_98 = (code *)0x0;
    local_80 = FUN_00a5bf24;
    plStack_90 = param_1;
    local_88 = param_1;
    FUN_009104f8(uVar14,&local_98);
    FUN_00a59c20(param_1);
    FUN_00b1bcc8(0x3feccccd,plVar4);
    FUN_008fa54c(&local_98,PTR_s_build___Fonts_Brandon_Regular_48_02be9c50);
    FUN_00b1bc90(plVar4,&local_98);
    if (((ulong)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    local_70 = FUN_00f048a4("UI::EVENT_CONTROL_TOGGLED");
    local_98 = thunk_FUN_00a5bdb8;
    local_80 = (code *)0x0;
    uStack_78 = 0;
    local_88 = (long *)0x0;
    plStack_90 = param_1;
    FUN_009693a0(param_1 + 0x66c7,&local_98);
    FUN_00b1bd10(plVar4,1);
  }
  FUN_00a624b0(param_1 + 0x6397);
  if (*(long *)(lVar8 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00a59bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a5b394(param_1,param_4);
  return;
}




void FUN_00a59c00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a5b8a4(param_1,param_4);
  return;
}




void FUN_00a59c0c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00a59c14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00a59c18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00a5ba9c(param_1,param_4);
  return;
}




void FUN_00a59c20(long param_1)

{
  int iVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_009f1f94(0x1a);
  if (iVar1 == 0) {
    pcVar2 = "HUD_STORE_AUTO_BUY_LABEL";
  }
  else if (iVar1 == 1) {
    pcVar2 = "HUD_STORE_QUICK_BUY_LABEL";
  }
  else {
    if (iVar1 != 2) goto LAB_00a59c8c;
    pcVar2 = "HUD_STORE_MANUAL_BUY_LABEL";
  }
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00b1bc68(param_1 + 0x33630,uVar3);
LAB_00a59c8c:
  FUN_00b1bd10(param_1 + 0x33630,1);
  return;
}




void FUN_00a59ca4(long param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_00a6219c();
    return;
  }
  FUN_00a624b0(param_1 + 0x31cb8);
  return;
}




void FUN_00a59cbc(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_027cbb70;
  uVar2 = FUN_009f1f50();
  if ((uVar2 & 1) != 0) {
    puVar3 = (uint *)FUN_009f1f64();
    lVar5 = (ulong)*puVar3 << 5;
    lVar1 = *(long *)(puVar3 + 2);
    do {
      lVar4 = lVar1;
      if (lVar5 == 0) goto LAB_00a59d1c;
      lVar5 = lVar5 + -0x20;
      lVar1 = lVar4 + 0x20;
    } while (*(undefined8 **)(lVar4 + 8) != param_1);
    FUN_0091064c(puVar3,lVar4);
  }
LAB_00a59d1c:
  if (param_1[0x681a] != 0) {
    FUN_019888f4();
  }
  param_1[0x6759] = &PTR_FUN_027d5388;
  param_1[0x67f4] = &PTR_FUN_028266f0;
  param_1[0x680b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x680e);
  FUN_00f13d08(param_1 + 0x67f4);
  param_1[0x67d6] = &PTR_FUN_028266f0;
  param_1[0x67ed] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67f0);
  FUN_00f13d08(param_1 + 0x67d6);
  param_1[0x67b8] = &PTR_FUN_028266f0;
  param_1[0x67cf] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67d2);
  FUN_00f13d08(param_1 + 0x67b8);
  FUN_00f01868(param_1 + 0x67a7);
  FUN_009c825c(param_1 + 0x6759);
  param_1[0x66c6] = &PTR_FUN_027cbcd8;
  FUN_00f0d3a4(param_1 + 0x6732);
  param_1[0x6714] = &PTR_FUN_028266f0;
  param_1[0x672b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x672e);
  FUN_00f13d08(param_1 + 0x6714);
  FUN_009c825c(param_1 + 0x66c6);
  FUN_00a59ff4(param_1 + 0x6397);
  FUN_00a5c518(param_1 + 0x5e4c);
  FUN_00a5a0e8(param_1 + 0x5856);
  FUN_00a62d78(param_1 + 0x538);
  FUN_00f13d08(param_1 + 0x504);
  FUN_00a5a290(param_1 + 0x167);
  FUN_00f0d3a4(param_1 + 0x141);
  FUN_00f13d08(param_1 + 0x126);
  FUN_00f13d08(param_1 + 0x10b);
  FUN_00f13d08(param_1 + 0xf0);
  FUN_00f13d08(param_1 + 0xd5);
  FUN_00f13d08(param_1 + 0xbe);
  param_1[0xa0] = &PTR_FUN_028266f0;
  param_1[0xb7] = &PTR_FUN_02826850;
  param_1[0x4d] = &PTR_FUN_02804168;
  FUN_00f0a79c(param_1 + 0xba);
  FUN_00f13d08(param_1 + 0xa0);
  param_1[0x82] = &PTR_FUN_028266f0;
  param_1[0x99] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x9c);
  FUN_00f13d08(param_1 + 0x82);
  param_1[100] = &PTR_FUN_028266f0;
  param_1[0x7b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x7e);
  FUN_00f13d08(param_1 + 100);
  FUN_00f13d08(param_1 + 0x4d);
  FUN_00f13d08(param_1 + 0x32);
  FUN_00f13d08(param_1 + 0x19);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00a59f90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027cbcd8;
  FUN_00f0d3a4(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_028266f0;
  param_1[0x65] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x68);
  FUN_00f13d08(param_1 + 0x4e);
  FUN_009c825c(param_1);
  return;
}




void FUN_00a59ff4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_1 + 0x32e;
  lVar2 = -0x50;
  *param_1 = &PTR_FUN_027cbe58;
  do {
    if ((void *)*puVar1 != (void *)0x0) {
      operator_delete__((void *)*puVar1);
      puVar1[-1] = 0;
      *puVar1 = 0;
    }
    lVar2 = lVar2 + 0x10;
    puVar1 = puVar1 + -2;
  } while (lVar2 != 0);
  lVar2 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar2 + 0x17f8);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x5f0);
  lVar2 = 0;
  do {
    FUN_00f0d3a4((long)param_1 + lVar2 + 0x1208);
    lVar2 = lVar2 + -0x130;
  } while (lVar2 != -0x5f0);
  param_1[0x17e] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x195);
  FUN_00f13d08(param_1 + 0x17e);
  FUN_00f0d3a4(param_1 + 0x158);
  FUN_00f0d3a4(param_1 + 0x132);
  FUN_00ed00e0(param_1 + 0x8b);
  FUN_00f13d08(param_1 + 0x57);
  FUN_00f0d3a4(param_1 + 0x31);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}

