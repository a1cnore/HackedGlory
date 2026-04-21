// functions/00b56 — 34 functions
#include "libGameKindred.h"




void FUN_00b56034(long *param_1)

{
  if ((*(byte *)(param_1 + 0x6c) >> 1 & 1) != 0) {
    FUN_00b55dc0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00b56068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00b5606c(long param_1)

{
  FUN_00ed1918(param_1 + 0x618);
  FUN_00b55dc0(param_1);
  return;
}




void FUN_00b56094(long *param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = (int)param_1[0x1b5];
  if (0 < iVar2) {
    lVar3 = 0;
    do {
      lVar1 = *(long *)(param_1[0x1b6] + lVar3 * 8);
      if (lVar1 != 0) {
        FUN_00ab5530(lVar1,param_2);
        iVar2 = (int)param_1[0x1b5];
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 < iVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00b560f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_00b560fc(long param_1)

{
  FUN_00b56094(param_1 + -0x368);
  return;
}




void FUN_00b56104(long param_1,long param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  undefined4 local_64;
  ulong local_60 [2];
  void *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e84e5c(param_2);
  if (((uVar3 & 1) != 0) && ((*(byte *)(param_1 + 0x360) >> 1 & 1) != 0)) {
    iVar9 = *(int *)(param_2 + 0x28);
    if (iVar9 == -0x16) {
      uVar6 = FUN_00e6ce7c("MENU_DIALOG_BOOST_CANT_AFFORD_TITLE",0);
      pcVar5 = "MENU_DIALOG_BOOST_CANT_AFFORD";
    }
    else {
      if (iVar9 == 0) {
        iVar9 = *(int *)(param_1 + 0xda8);
        if (0 < iVar9) {
          lVar10 = 0;
          do {
            lVar4 = *(long *)(*(long *)(param_1 + 0xdb0) + lVar10 * 8);
            if (lVar4 != 0) {
              uVar3 = FUN_00ab53c4(lVar4,param_2 + 0x48);
              if ((uVar3 & 1) != 0) {
                if (*(int *)(param_2 + 0x28) == 0) {
                  lVar4 = FUN_009580b8();
                  FUN_009658c8(lVar4 + 0x18);
                  thunk_FUN_00ab5e5c(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + lVar10 * 8));
                  local_60[0] = 0;
                  local_60[1] = 0;
                  local_50 = (void *)0x0;
                  FUN_00ab5bf8(*(undefined8 *)(*(long *)(param_1 + 0xdb0) + lVar10 * 8),
                               param_2 + 0x48,local_60,&local_64);
                  lVar10 = *(long *)(param_2 + 0x58);
                  if ((*(byte *)(param_2 + 0x48) & 1) == 0) {
                    lVar10 = param_2 + 0x49;
                  }
                  pvVar1 = (void *)((ulong)local_60 | 1);
                  if ((local_60[0] & 1) != 0) {
                    pvVar1 = local_50;
                  }
                  FUN_00909670(lVar10,pvVar1,local_64,0,0);
                  if ((local_60[0] & 1) != 0) {
                    operator_delete(local_50);
                  }
                }
                lVar10 = FUN_009580b8();
                FUN_009658c8(lVar10 + 0x18);
                break;
              }
              iVar9 = *(int *)(param_1 + 0xda8);
            }
            lVar10 = lVar10 + 1;
          } while (lVar10 < iVar9);
        }
        goto LAB_00b56218;
      }
      uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
      if (iVar9 == -0x18) {
        pcVar5 = "MENU_DIALOG_SKU_UNAVAILABLE";
      }
      else {
        pcVar5 = "MENU_DIALOG_PURCHASE_FAILED";
      }
    }
    uVar7 = FUN_00e6ce7c(pcVar5,0);
    uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    FUN_00a9b8b8(uVar6,uVar7,uVar8,0,0);
  }
LAB_00b56218:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b562dc(long param_1)

{
  FUN_00b56104(param_1 + -0x368);
  return;
}




void FUN_00b562e4(uint *param_1,uint param_2)

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




void FUN_00b56364(undefined8 *param_1)

{
  FUN_00b2ef90();
  FUN_00948cd8(param_1 + 0x17e);
  *param_1 = &PTR_FUN_027e3688;
  param_1[0x6d] = &PTR_FUN_027e3870;
  param_1[0x17e] = &PTR_FUN_027e3898;
  return;
}




void FUN_00b563ac(long param_1)

{
  FUN_00948d58(param_1 + 0xbf0);
  FUN_00b2f254(param_1);
  return;
}




void FUN_00b563d4(long param_1)

{
  FUN_00948d58(param_1 + 0x888);
  FUN_00b2f254(param_1 + -0x368);
  return;
}




void FUN_00b563fc(long param_1)

{
  FUN_00948d58();
  FUN_00b2f254(param_1 + -0xbf0);
  return;
}




void FUN_00b56420(void *param_1)

{
  FUN_00948d58((long)param_1 + 0xbf0);
  FUN_00b2f254(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b56450(long param_1)

{
  FUN_00948d58(param_1 + 0x888);
  FUN_00b2f254((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00b56480(long param_1)

{
  FUN_00948d58();
  FUN_00b2f254((void *)(param_1 + -0xbf0));
  operator_delete((void *)(param_1 + -0xbf0));
  return;
}




void FUN_00b564ac(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  
  if (((char)param_1[0x6e] != '\0') && (uVar1 = FUN_00e84e5c(param_2), (uVar1 & 1) != 0)) {
    uVar3 = *(uint *)(param_1 + 0x6f);
    if (uVar3 != 0) {
      uVar1 = 0;
      do {
        plVar2 = *(long **)(param_1[0x70] + uVar1 * 8);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x20))();
          uVar3 = *(uint *)(param_1 + 0x6f);
        }
        uVar1 = uVar1 + 1;
      } while (uVar1 < uVar3);
    }
  }
  if (*(char *)((long)param_1 + 0x371) != '\0') {
    *(undefined1 *)((long)param_1 + 0x371) = 0;
                    /* WARNING: Could not recover jumptable at 0x00b56524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x170))(param_1);
    return;
  }
  return;
}




void FUN_00b56534(long param_1)

{
  FUN_00b564ac(param_1 + -0xbf0);
  return;
}




long FUN_00b56540(undefined8 param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar4 = FUN_00b36228();
  if (lVar4 != 0) {
    return lVar4;
  }
  bVar2 = *param_2;
  uVar6 = *(ulong *)(param_2 + 8);
  uVar7 = (ulong)(bVar2 >> 1);
  uVar1 = uVar7;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0xc) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"market_chest",0xc);
    if (iVar3 == 0) {
      pvVar5 = operator_new(200);
      FUN_00bde520();
      goto LAB_00b56660;
    }
    bVar2 = *param_2;
    uVar6 = *(ulong *)(param_2 + 8);
    uVar7 = (ulong)(bVar2 >> 1);
  }
  uVar1 = uVar7;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0x11) {
    iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"market_daily_pick",0x11);
    if (iVar3 == 0) {
      pvVar5 = operator_new(0xc0);
      FUN_00bc9e58();
      goto LAB_00b56660;
    }
    bVar2 = *param_2;
    uVar6 = *(ulong *)(param_2 + 8);
    uVar7 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar7 = uVar6;
  }
  if (uVar7 != 0x15) {
    return 0;
  }
  iVar3 = FUN_0090d610(param_2,0,0xffffffffffffffff,"market_esports_badges",0x15);
  if (iVar3 != 0) {
    return 0;
  }
  pvVar5 = operator_new(0x98);
  FUN_00bcec40();
LAB_00b56660:
  return (long)pvVar5 + 0x10;
}




void FUN_00b56670(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar6 = tpidr_el0;
  local_58 = *(long *)(lVar6 + 0x28);
  FUN_00b8e630();
  *param_1 = (long)&PTR_FUN_027e3c30;
  FUN_00be1840(param_1 + 0x6d);
  plVar1 = param_1 + 0x72;
  FUN_00f0e4a8(plVar1);
  plVar2 = param_1 + 0x90;
  FUN_00f11234(plVar2);
  plVar3 = param_1 + 0xc4;
  FUN_00ecfd6c(plVar3,0);
  plVar4 = param_1 + 0x16b;
  FUN_00ed1c1c(plVar4);
  plVar5 = param_1 + 0x199;
  FUN_00add154(plVar5);
  *(undefined1 *)(param_1 + 0x226) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  FUN_00f023ec(plVar2,plVar1,1);
  FUN_00f023ec(plVar2,plVar3,1);
  FUN_00ed026c(plVar3,param_1[0x6e],1);
  FUN_00f023ec(plVar2,plVar5,1);
  FUN_00f023ec(plVar2,plVar4,1);
  FUN_00f112f0(plVar2,1);
  FUN_00f0e548(plVar1,PTR_s_build___MenuBackground_HeroHub_p_02be3558,"full_splash_64");
  FUN_00f0e670(plVar1,&DAT_01bb4c98,2);
  FUN_00ed04d8(plVar3,0,1);
  FUN_00ab32dc(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80);
  local_60 = FUN_00f048a4("UI::EVENT_JUMPLIST_JUMP_TO_INDEX");
  local_88 = FUN_00b56840;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x16c,&local_88);
  FUN_00ed1fe8(plVar4,plVar5);
  *(uint *)((long)param_1 + 0xd4c) = *(uint *)((long)param_1 + 0xd4c) & 0xfffffffb;
  if (*(long *)(lVar6 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b56840(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1130) != '\0') {
    uVar1 = FUN_00f04924(param_4);
    FUN_00b56bc4(param_1,uVar1);
    return;
  }
  return;
}




void FUN_00b56884(long *param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0x158))(param_1,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00b568d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x138))(0x3e4ccccd,param_1,param_2 & 1,4,1);
  return;
}




void FUN_00b568dc(long *param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00b568f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1,0);
  return;
}




void FUN_00b568f4(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | (param_2 & 1) << 1;
  if ((param_2 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1130) = 1;
    FUN_00b56954(param_1);
    return;
  }
  FUN_00be1904(param_1 + 0x368);
  *(undefined1 *)(param_1 + 0x1130) = 0;
  return;
}




void FUN_00b56954(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0093dbe8();
  FUN_00be1994(param_1 + 0x6d,(uVar1 & 1) == 0);
  (**(code **)(*param_1 + 0x150))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00b569b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x6e] + 0x138))(0,(long *)param_1[0x6e],1,4,1);
  return;
}




void FUN_00b569bc(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float local_64;
  float local_60;
  float fStack_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x1130) != '\0') {
    FUN_00b8e860(param_1);
    uVar3 = FUN_0092e8e0();
    FUN_00a9bd24(param_1,uVar3 & 1,&fStack_5c,&local_60,&local_64);
    fVar7 = fStack_5c - local_64;
    lVar1 = param_1 + 0x480;
    fVar6 = local_60 - DAT_02be3670;
    FUN_00f13f08(fVar7,fVar6,lVar1);
    if (*(float *)(param_1 + 0x4c4) != DAT_02be3670) {
      *(float *)(param_1 + 0x4c4) = DAT_02be3670;
      FUN_0091ada4(lVar1);
    }
    FUN_00f13f08(fVar7,fVar6,param_1 + 0x390);
    FUN_00c55a24(fVar7 + -50.0 + -50.0,*(undefined8 *)(param_1 + 0x370));
    (**(code **)(**(long **)(param_1 + 0x370) + 0x150))();
    lVar4 = *(long *)(param_1 + 0x370);
    if ((*(float *)(lVar4 + 0x40) != 50.0) || (*(float *)(lVar4 + 0x44) != 80.0)) {
      *(undefined8 *)(lVar4 + 0x40) = 0x42a0000042480000;
      FUN_0091ada4();
    }
    FUN_00ed0418(param_1 + 0x620,1);
    if (*(float *)(param_1 + 0x664) != 0.0) {
      *(undefined4 *)(param_1 + 0x664) = 0;
      FUN_0091ada4(param_1 + 0x620);
    }
    lVar4 = param_1 + 0xb58;
    FUN_00f13f08(0x42480000,fVar6 + -80.0,lVar4);
    uVar5 = NEON_fmov(0x41f00000,4);
    *(undefined8 *)(param_1 + 0xbb0) = uVar5;
    FUN_00ed1ff0(lVar4);
    FUN_00f07940(0,0x42200000,lVar4,1,lVar1,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b56b80(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x1130) != '\0') {
    uVar1 = FUN_00f04924(param_2);
    FUN_00b56bc4(param_1,uVar1);
    return;
  }
  return;
}




void FUN_00b56bc4(long param_1,char param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_50;
  void *local_48;
  ushort local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_00be1bbc(param_1 + 0x368);
  if (lVar2 != 0) {
    FUN_00ab33d8(lVar2,param_1 + 0x620,param_1 + 0x480);
  }
  local_3c[0] = (ushort)(byte)(param_2 + 0x41);
  FUN_00e705c8(&local_50,local_3c);
  FUN_00add2c4(param_1 + 0xcc8,&local_50);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
    local_50 = 0;
    local_48 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b56c68(void *param_1)

{
  FUN_00b517b0();
  operator_delete(param_1);
  return;
}




void FUN_00b56c8c(void)

{
  return;
}




void FUN_00b56c90(undefined8 *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00b79680();
  *param_1 = &PTR_FUN_027e3db0;
  *(undefined8 *)((long)param_1 + 0x2c64) = 0;
  FUN_008fa54c(local_40,"NEWS");
  FUN_008fce60(param_1 + 0x589,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x72bd94bf,FUN_00b56d48,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b56d48(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b56d78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))();
  return;
}




void FUN_00b56d7c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e3db0;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x72bd94bf);
  FUN_00b796c4(param_1);
  return;
}




void FUN_00b56dc4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e3db0;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x72bd94bf);
  FUN_00b796c4(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b56e14(long *param_1,byte *param_2)

{
  undefined2 *puVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *__s1;
  undefined2 *puVar9;
  
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pbVar8 = *(byte **)(param_2 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_2 + 1;
    }
    pbVar5 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar5 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      lVar6 = -(ulong)(bVar3 >> 1);
      pbVar8 = param_2;
      while (pbVar8 = pbVar8 + 1, *pbVar8 == *pbVar5) {
        lVar6 = lVar6 + 1;
        pbVar5 = pbVar5 + 1;
        if (lVar6 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(pbVar8,pbVar5,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  if (*(uint *)(param_1 + 0x587) != 0) {
    pbVar8 = *(byte **)(param_2 + 0x10);
    puVar9 = (undefined2 *)param_1[0x588];
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_2 + 1;
    }
    puVar1 = puVar9 + (ulong)*(uint *)(param_1 + 0x587) * 8;
    do {
      lVar6 = *(long *)(puVar9 + 4);
      if (lVar6 != 0) {
        bVar3 = *(byte *)(lVar6 + 0x3a0);
        sVar2 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar2 = *(size_t *)(lVar6 + 0x3a8);
        }
        if (sVar2 == __n) {
          __s1 = *(void **)(lVar6 + 0x3b0);
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar6 + 0x3a1);
          }
          if ((bVar3 & 1) == 0) {
            if (__n == 0) {
LAB_00b56f80:
                    /* WARNING: Could not recover jumptable at 0x00b56fa8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x178))(param_1,*puVar9,&DAT_0320ffa8);
              return;
            }
            pbVar5 = (byte *)(lVar6 + 0x3a1);
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar8;
            while (*pbVar5 == *pbVar7) {
              pbVar5 = pbVar5 + 1;
              lVar6 = lVar6 + 1;
              pbVar7 = pbVar7 + 1;
              if (lVar6 == 0) goto LAB_00b56f80;
            }
          }
          else if ((__n == 0) || (iVar4 = memcmp(__s1,pbVar8,__n), iVar4 == 0)) goto LAB_00b56f80;
        }
      }
      puVar9 = puVar9 + 8;
    } while (puVar9 != puVar1);
  }
  return;
}




void FUN_00b56fac(long *param_1)

{
  short sVar1;
  size_t sVar2;
  size_t sVar3;
  char *pcVar4;
  void *pvVar5;
  long lVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  long lVar15;
  byte local_200 [16];
  void *local_1f0;
  byte local_1e8 [16];
  void *local_1d8;
  byte local_1d0 [16];
  void *local_1c0;
  byte local_1b8 [8];
  size_t local_1b0;
  char *local_1a8;
  byte local_1a0 [16];
  char *local_190;
  byte local_188 [8];
  size_t local_180;
  char *local_178;
  byte local_170 [8];
  size_t local_168;
  char *local_160;
  ulong local_158;
  long local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  local_158 = 0;
  local_150 = 0;
  uVar10 = FUN_0096bfec(&local_158);
  if ((uVar10 & 1) != 0) {
    FUN_00b79724(param_1);
    if ((int)local_158 != 0) {
      lVar15 = local_150 + (local_158 & 0xffffffff) * 0x78;
      lVar11 = local_150;
      do {
        (**(code **)(*param_1 + 0x1a0))(param_1,lVar11,lVar11 + 0x48,lVar11 + 0x18,lVar11 + 0x30);
        lVar11 = lVar11 + 0x78;
      } while (lVar11 != lVar15);
    }
  }
  sVar1 = 0;
  if ((short)param_1[0x585] != -1) {
    sVar1 = (short)param_1[0x585];
  }
  (**(code **)(*param_1 + 0x178))(param_1,sVar1,&DAT_0320ffa8);
  FUN_00a9e810(param_1 + 0x62);
  lVar11 = FUN_00969248();
  if ((0 < *(int *)(lVar11 + 0x38)) || (lVar11 = FUN_009580b8(), *(uint *)(lVar11 + 0x55e0) < 3))
  goto LAB_00b573d4;
  FUN_0096c040(local_170);
  FUN_0096c064(local_188);
  bVar7 = DAT_0320ffa8;
  sVar2 = (ulong)(local_170[0] >> 1);
  if ((local_170[0] & 1) != 0) {
    sVar2 = local_168;
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (sVar2 == sVar3) {
    pcVar14 = (char *)((ulong)local_170 | 1);
    pcVar4 = pcVar14;
    if ((local_170[0] & 1) != 0) {
      pcVar4 = local_160;
    }
    pcVar13 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar13 = &DAT_0320ffa9;
    }
    if ((local_170[0] & 1) == 0) {
      if (sVar2 != 0) {
        lVar11 = -(ulong)(local_170[0] >> 1);
        do {
          if (*pcVar14 != *pcVar13) goto LAB_00b57124;
          pcVar14 = pcVar14 + 1;
          lVar11 = lVar11 + 1;
          pcVar13 = pcVar13 + 1;
        } while (lVar11 != 0);
      }
    }
    else if ((sVar2 != 0) && (iVar9 = memcmp(pcVar4,pcVar13,sVar2), iVar9 != 0)) goto LAB_00b57124;
  }
  else {
LAB_00b57124:
    sVar2 = (ulong)(local_188[0] >> 1);
    if ((local_188[0] & 1) != 0) {
      sVar2 = local_180;
    }
    if (sVar2 == sVar3) {
      pcVar14 = (char *)((ulong)local_188 | 1);
      pcVar4 = pcVar14;
      if ((local_188[0] & 1) != 0) {
        pcVar4 = local_178;
      }
      pcVar13 = DAT_0320ffb8;
      if ((bVar7 & 1) == 0) {
        pcVar13 = &DAT_0320ffa9;
      }
      if ((local_188[0] & 1) == 0) {
        if (sVar3 != 0) {
          lVar11 = -(ulong)(local_188[0] >> 1);
          do {
            if (*pcVar14 != *pcVar13) goto LAB_00b571a0;
            pcVar14 = pcVar14 + 1;
            lVar11 = lVar11 + 1;
            pcVar13 = pcVar13 + 1;
          } while (lVar11 != 0);
        }
      }
      else if ((sVar3 != 0) && (iVar9 = memcmp(pcVar4,pcVar13,sVar3), iVar9 != 0))
      goto LAB_00b571a0;
    }
    else {
LAB_00b571a0:
      FUN_00936f18(local_1a0);
      pcVar14 = (char *)((ulong)local_1a0 | 1);
      if ((local_1a0[0] & 1) != 0) {
        pcVar14 = local_190;
      }
      strcpy(acStack_148,pcVar14);
      FUN_00937044(local_1e8);
      pvVar5 = (void *)((ulong)local_1e8 | 1);
      if ((local_1e8[0] & 1) != 0) {
        pvVar5 = local_1d8;
      }
      FUN_008fa54c(local_1d0,pvVar5);
      FUN_008fa54c(local_200,"newsfeed_instant_key");
      FUN_00e6bac8(local_1b8,acStack_148,local_1d0,local_200,&DAT_0320ffa8);
      bVar7 = local_1b8[0];
      sVar2 = (ulong)(local_170[0] >> 1);
      if ((local_170[0] & 1) != 0) {
        sVar2 = local_168;
      }
      sVar3 = (ulong)(local_1b8[0] >> 1);
      if ((local_1b8[0] & 1) != 0) {
        sVar3 = local_1b0;
      }
      if (sVar2 == sVar3) {
        pcVar14 = (char *)((ulong)local_170 | 1);
        pcVar4 = pcVar14;
        if ((local_170[0] & 1) != 0) {
          pcVar4 = local_160;
        }
        pcVar13 = (char *)((ulong)local_1b8 | 1);
        if ((local_1b8[0] & 1) != 0) {
          pcVar13 = local_1a8;
        }
        if ((local_170[0] & 1) == 0) {
          if (sVar2 != 0) {
            lVar11 = -(ulong)(local_170[0] >> 1);
            do {
              if (*pcVar14 != *pcVar13) goto LAB_00b572a4;
              pcVar14 = pcVar14 + 1;
              lVar11 = lVar11 + 1;
              pcVar13 = pcVar13 + 1;
            } while (lVar11 != 0);
          }
        }
        else if (sVar2 != 0) {
          iVar9 = memcmp(pcVar4,pcVar13,sVar2);
          bVar8 = iVar9 != 0;
          goto joined_r0x00b572a8;
        }
        bVar8 = false;
      }
      else {
LAB_00b572a4:
        bVar8 = true;
      }
joined_r0x00b572a8:
      if ((bVar7 & 1) != 0) {
        operator_delete(local_1a8);
      }
      if ((local_200[0] & 1) != 0) {
        operator_delete(local_1f0);
      }
      if ((local_1d0[0] & 1) != 0) {
        operator_delete(local_1c0);
      }
      if ((local_1e8[0] & 1) != 0) {
        operator_delete(local_1d8);
      }
      if (bVar8) {
        FUN_00937044(local_1d0);
        pvVar5 = (void *)((ulong)local_1d0 | 1);
        if ((local_1d0[0] & 1) != 0) {
          pvVar5 = local_1c0;
        }
        FUN_008fa54c(local_1b8,pvVar5);
        FUN_008fa54c(local_1e8,"newsfeed_instant_key");
        FUN_00e6bd24(acStack_148,local_1b8,local_1e8,local_170);
        if ((local_1e8[0] & 1) != 0) {
          operator_delete(local_1d8);
        }
        if ((local_1b8[0] & 1) != 0) {
          operator_delete(local_1a8);
        }
        if ((local_1d0[0] & 1) != 0) {
          operator_delete(local_1c0);
        }
        uVar12 = FUN_009b8d90();
        FUN_008fa54c(local_1b8,"vainglory://News");
        FUN_009bb46c(uVar12,local_1b8,local_188,0,0);
        if ((local_1b8[0] & 1) != 0) {
          operator_delete(local_1a8);
        }
      }
      if ((local_1a0[0] & 1) != 0) {
        operator_delete(local_190);
      }
    }
  }
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  if ((local_170[0] & 1) != 0) {
    operator_delete(local_160);
  }
LAB_00b573d4:
  FUN_00969c70(&local_158,1);
  if (*(long *)(lVar6 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

