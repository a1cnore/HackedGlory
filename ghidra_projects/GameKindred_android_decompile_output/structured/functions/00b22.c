// functions/00b22 — 24 functions
#include "libGameKindred.h"




void FUN_00b220bc(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0xb5) = param_2 & 1;
  return;
}




void FUN_00b220c8(long *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  
  FUN_008fce60(param_1 + 0xad0);
  FUN_00bd6afc(param_1 + 0x1a,param_2);
  FUN_00c3b76c(param_1[0x1b],1);
  FUN_00c3b9e4(param_1[0x1b],1);
  lVar2 = FUN_00cdbb24(param_2);
  if (lVar2 != 0) {
    uVar1 = FUN_00cdccb0();
    FUN_00bd6eec(param_1 + 0x1a,uVar1 & 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00b22148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00b2214c(long *param_1,byte *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = param_1 + 0x18d;
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
  }
  FUN_00aba748(plVar1,pbVar5);
  local_48 = 0x42c8000042c80000;
  FUN_00aba790(plVar1,&local_48);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_3);
  FUN_00ab7498(plVar1,&local_48);
  if ((int)param_3 < 1) {
    bVar3 = false;
  }
  else {
    lVar4 = FUN_009580b8();
    bVar3 = param_3 <= *(uint *)(lVar4 + 0x5454);
  }
  FUN_00b22244(param_1,bVar3);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b22244(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = param_1 + 0xc68;
  bVar2 = (param_2 & 1) == 0;
  if (bVar2) {
    FUN_00ab7570(0x3f666666,lVar1,&DAT_01bb2218);
    FUN_00ab7588(0x3f666666,lVar1,&DAT_01bb2218);
  }
  else {
    FUN_00ab7570(0x3f666666,lVar1,&DAT_01bb2214);
    FUN_00ab7588(0x3f666666,lVar1,&DAT_01bb2214);
  }
  *(bool *)(param_1 + 0x2222) = !bVar2;
  return;
}




void FUN_00b222e4(long *param_1,byte *param_2,uint param_3)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  byte *pbVar5;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar1 = param_1 + 0x641;
  pbVar5 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar5 = param_2 + 1;
  }
  FUN_00aba748(plVar1,pbVar5);
  local_48 = 0x42c8000042c80000;
  FUN_00aba790(plVar1,&local_48);
  FUN_00e70510(&local_48);
  FUN_00e70e18(&local_48,&DAT_01bb6d43,param_3);
  FUN_00ab7498(plVar1,&local_48);
  if ((int)param_3 < 1) {
    bVar3 = false;
  }
  else {
    lVar4 = FUN_009580b8();
    bVar3 = param_3 <= *(uint *)(lVar4 + 0x5454);
  }
  FUN_00b223e0(param_1,bVar3);
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_40 != (void *)0x0) {
    operator_delete__(local_40);
    local_48 = 0;
    local_40 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b223e0(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  
  lVar1 = param_1 + 0x3208;
  bVar2 = (param_2 & 1) == 0;
  if (bVar2) {
    FUN_00ab7570(0x3f666666,lVar1,&DAT_01bb2218);
    FUN_00ab7588(0x3f666666,lVar1,&DAT_01bb2218);
  }
  else {
    FUN_00ab7570(0x3f666666,lVar1,&DAT_01bb2214);
    FUN_00ab7588(0x3f666666,lVar1,&DAT_01bb2214);
  }
  *(bool *)(param_1 + 0x47c2) = !bVar2;
  return;
}




void FUN_00b22484(long *param_1,int param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  undefined4 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  uVar6 = FUN_00e6ce7c("MENU_MARKET_DAILY_PICK_COINS_LEFT",0);
  thunk_FUN_00e7051c(&local_68,uVar6);
  FUN_00e70510(&local_78);
  FUN_00e70e18(&local_78,&DAT_01bb6d43,param_2);
  FUN_00e705c8(&local_88,"[COINS]");
  FUN_00e71248(&local_68,0,&local_88,&local_78);
  if (local_80 != (void *)0x0) {
    operator_delete__(local_80);
    local_88 = 0;
    local_80 = (void *)0x0;
  }
  FUN_00f0d75c(param_1 + 0x141,&local_68);
  bVar1 = 0 < param_2;
  plVar2 = param_1 + 0x18d;
  puVar4 = (undefined4 *)&DAT_01bb221c;
  if (param_2 < 1) {
    puVar4 = &DAT_01bee7f6;
  }
  FUN_00b09454(plVar2,bVar1);
  *(uint *)((long)param_1 + 0x2bdc) =
       *(uint *)((long)param_1 + 0x2bdc) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x2bdc) & 3 | (uint)bVar1 << 2;
  (**(code **)(param_1[0x18d] + 0x180))(plVar2);
  FUN_00f0d7fc(param_1 + 0x167,puVar4);
  plVar3 = param_1 + 0x641;
  FUN_00b09454(plVar3,(uint)bVar1);
  *(uint *)((long)param_1 + 0x517c) =
       *(uint *)((long)param_1 + 0x517c) & 0xfffffff8 |
       *(uint *)((long)param_1 + 0x517c) & 3 | (uint)bVar1 << 2;
  (**(code **)(param_1[0x641] + 0x180))(plVar3);
  FUN_00f0d7fc(param_1 + 0x61b,puVar4);
  if (param_2 < 1) {
    FUN_00ab7570(0x3f800000,plVar2,&DAT_01bb2214);
    uVar6 = FUN_00e6ce7c("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
    FUN_00ab7498(plVar2,uVar6);
    FUN_00ab7570(0x3f800000,plVar3,&DAT_01bb2214);
    uVar6 = FUN_00e6ce7c("MENU_MARKET_DAILY_PICK_SOLD_OUT",0);
    FUN_00ab7498(plVar3,uVar6);
  }
  (**(code **)(*param_1 + 0xe8))(param_1);
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b2269c(long param_1)

{
  FUN_00c3b9b4(*(undefined8 *)(param_1 + 0xd8));
  return;
}




void FUN_00b226a4(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  char *__s2;
  long lVar7;
  char *pcVar8;
  void *__s1;
  long lVar9;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00b220c8(param_1,(byte *)(param_1 + 0x5680));
  lVar6 = FUN_00cdf7c4();
  lVar9 = 0;
  do {
    lVar7 = lVar6 + lVar9 * 0xd0;
    bVar2 = *(byte *)(lVar7 + 0x10);
    bVar3 = *(byte *)(param_1 + 0x5680);
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar7 + 0x18);
    }
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x5688);
    }
    if (__n == sVar1) {
      __s1 = *(void **)(lVar6 + lVar9 * 0xd0 + 0x20);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar7 + 0x11);
      }
      __s2 = (char *)(param_1 + 0x5681);
      if ((bVar3 & 1) != 0) {
        __s2 = *(char **)(param_1 + 0x5690);
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar8 = (char *)(lVar7 + 0x11);
          lVar7 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar8 != *__s2) goto LAB_00b22804;
            pcVar8 = pcVar8 + 1;
            lVar7 = lVar7 + 1;
            __s2 = __s2 + 1;
          } while (lVar7 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00b22804;
      FUN_008fa54c(local_70,"glory_icon_small");
      FUN_00b2214c(param_1,local_70,*(undefined4 *)(lVar6 + lVar9 * 0xd0 + 0x5c));
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      FUN_008fa54c(local_70,"glory_icon_small");
      FUN_00b222e4(param_1,local_70,*(undefined4 *)(lVar6 + lVar9 * 0xd0 + 0xa4));
      if ((local_70[0] & 1) != 0) {
        operator_delete(local_60);
      }
      lVar7 = lVar6 + lVar9 * 0xd0;
      FUN_00b22484(param_1,*(int *)(lVar7 + 0xd8) - *(int *)(lVar7 + 0xd4));
    }
LAB_00b22804:
    lVar9 = lVar9 + 1;
    if (lVar9 == 3) {
      if (*(long *)(lVar4 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_00b22840(long param_1)

{
  FUN_00b226a4(param_1 + -0xb8);
  return;
}




void FUN_00b22848(long param_1,ulong param_2,byte *param_3,undefined4 param_4)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  
  if ((param_2 & 1) != 0) {
    FUN_00c3b9b4(*(undefined8 *)(param_1 + 0xd8),param_4);
    return;
  }
  bVar2 = *param_3;
  uVar3 = (ulong)(bVar2 >> 1);
  __n = uVar3;
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_3 + 8);
  }
  sVar1 = (ulong)(DAT_0313e368 >> 1);
  if ((DAT_0313e368 & 1) != 0) {
    sVar1 = DAT_0313e370;
  }
  if (__n == sVar1) {
    pbVar11 = *(byte **)(param_3 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar11 = param_3 + 1;
    }
    pbVar9 = DAT_0313e378;
    if ((DAT_0313e368 & 1) == 0) {
      pbVar9 = &DAT_0313e369;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar10 = -uVar3;
        pbVar11 = param_3;
        do {
          pbVar11 = pbVar11 + 1;
          if (*pbVar11 != *pbVar9) goto LAB_00b22918;
          lVar10 = lVar10 + 1;
          pbVar9 = pbVar9 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar4 = memcmp(pbVar11,pbVar9,__n), iVar4 != 0)) goto LAB_00b22918;
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    pcVar5 = "MENU_MARKET_DAILY_PICK_ERROR_PURCHASE_NOT_FOUND";
    goto LAB_00b22a10;
  }
LAB_00b22918:
  sVar1 = (ulong)(DAT_0313e380 >> 1);
  if ((DAT_0313e380 & 1) != 0) {
    sVar1 = DAT_0313e388;
  }
  if (__n != sVar1) {
LAB_00b22988:
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
LAB_00b2299c:
    pcVar5 = "MENU_MARKET_DAILY_PICK_ERROR_GENERIC";
    goto LAB_00b22a10;
  }
  pbVar11 = *(byte **)(param_3 + 0x10);
  if ((bVar2 & 1) == 0) {
    pbVar11 = param_3 + 1;
  }
  pbVar9 = DAT_0313e390;
  if ((DAT_0313e380 & 1) == 0) {
    pbVar9 = &DAT_0313e381;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      lVar10 = -uVar3;
      do {
        param_3 = param_3 + 1;
        if (*param_3 != *pbVar9) goto LAB_00b22988;
        lVar10 = lVar10 + 1;
        pbVar9 = pbVar9 + 1;
      } while (lVar10 != 0);
    }
LAB_00b229f4:
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
  }
  else {
    if (__n == 0) goto LAB_00b229f4;
    iVar4 = memcmp(pbVar11,pbVar9,__n);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_ERROR",0);
    if (iVar4 != 0) goto LAB_00b2299c;
  }
  pcVar5 = "MENU_MARKET_DAILY_PICK_ERROR_PURCHASE_NOT_ALLOWED";
LAB_00b22a10:
  uVar7 = FUN_00e6ce7c(pcVar5,0);
  uVar8 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar6,uVar7,uVar8,param_1,0);
  return;
}




void FUN_00b22a54(long param_1,uint param_2)

{
  FUN_00b22848(param_1 + -0xb8,param_2 & 1);
  return;
}




void FUN_00b22a60(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x5678);
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b22a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,param_1 + 0x5680);
    return;
  }
  return;
}




void FUN_00b22a84(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x5678);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b22aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,param_1 + 0x5680);
    return;
  }
  return;
}




void FUN_00b22aa8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x5678);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b22ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x5680);
    return;
  }
  return;
}




void FUN_00b22acc(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *local_88;
  long *plStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  FUN_00b09580();
  *param_1 = (long)&PTR_FUN_027ddfa0;
  FUN_00ca5af4(param_1 + 0x263);
  plVar2 = param_1 + 0x2dd;
  FUN_00b133a8(plVar2,0);
  plVar3 = param_1 + 1000;
  FUN_00afbfb0(plVar3);
  plVar1 = param_1 + 0x17;
  param_1[0x424] = -0xffffff01000000;
  *(undefined2 *)(param_1 + 0x425) = 0;
  *(undefined1 *)((long)param_1 + 0x212a) = 0;
  uVar5 = FUN_00f02540(plVar1);
  if ((uVar5 & 1) != 0) {
    FUN_00f01a4c(plVar1,1);
  }
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x263,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar3,1);
  FUN_00b13714(plVar2,2);
  *(uint *)((long)param_1 + 0x176c) = *(uint *)((long)param_1 + 0x176c) | 0x10;
  *(uint *)((long)param_1 + 0x139c) = *(uint *)((long)param_1 + 0x139c) & 0xfffffffb;
  local_60 = FUN_00f048a4("UI::EVENT_ANIM_COMPLETE");
  local_88 = FUN_00b22cc0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  plStack_80 = param_1;
  FUN_009693a0(param_1 + 0x264,&local_88);
  *(undefined1 *)((long)param_1 + 0x1314) = 1;
  FUN_00b0b848(0x3f800000,param_1,"white_background","white_background");
  FUN_00b0b88c(0x3f800000,0x3f800000,param_1);
  FUN_00b0b988(param_1);
  uVar6 = FUN_00d6eb50();
  uVar6 = FUN_00d6eb5c(uVar6,"*KindredMenuProgressBarEffects*");
  FUN_00afc274(plVar3,uVar6);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b22cc0(long param_1)

{
  if ((*(char *)(param_1 + 0x2128) != '\0') && (*(char *)(param_1 + 0x212a) == '\0')) {
    FUN_00ca5d48(param_1 + 0x1318,1,0);
    return;
  }
  *(uint *)(param_1 + 0x139c) = *(uint *)(param_1 + 0x139c) & 0xfffffffb;
  return;
}




void FUN_00b22cfc(float param_1,float param_2,long param_3)

{
  FUN_00b0a930();
  FUN_00f01c20(param_3 + 0x1318);
  if ((*(float *)(param_3 + 0x1358) == param_1) && (*(float *)(param_3 + 0x135c) == param_2 * 0.25))
  {
    return;
  }
  *(float *)(param_3 + 0x1358) = param_1;
  *(float *)(param_3 + 0x135c) = param_2 * 0.25;
  FUN_0091ada4(param_3 + 0x1318);
  return;
}




void FUN_00b22d78(long *param_1)

{
  (**(code **)(*param_1 + 0x138))
            (param_1,(int)(float)(int)param_1[0x261],(int)(float)*(int *)((long)param_1 + 0x130c),
             (int)(float)*(int *)((long)param_1 + 0x1304),1);
                    /* WARNING: Could not recover jumptable at 0x00b22dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xe8))(param_1);
  return;
}




void FUN_00b22dd4(long *param_1)

{
  float fVar1;
  undefined8 uVar2;
  
  uVar2 = (**(code **)(*param_1 + 0x48))();
  (**(code **)(*param_1 + 0x48))(param_1);
  FUN_00f13f08(uVar2,param_1 + 0x2dd);
  fVar1 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if ((*(float *)(param_1 + 0x2e5) != fVar1 * 0.5) || (*(float *)((long)param_1 + 0x172c) != 0.0)) {
    *(float *)(param_1 + 0x2e5) = fVar1 * 0.5;
    *(undefined4 *)((long)param_1 + 0x172c) = 0;
    FUN_0091ada4(param_1 + 0x2dd);
  }
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 0x10;
  fVar1 = (float)(**(code **)(*param_1 + 0x48))(param_1);
  if (*(float *)(param_1 + 0x3f0) != fVar1 * 0.5) {
    *(float *)(param_1 + 0x3f0) = fVar1 * 0.5;
    FUN_0091ada4(param_1 + 1000);
    return;
  }
  return;
}




void FUN_00b22eb4(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  long lVar1;
  bool bVar2;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)(param_1 + 0x2120) = *param_2;
  *(undefined4 *)(param_1 + 0x2124) = *param_3;
  if (*(char *)(param_1 + 0x2128) == '\0') {
    local_34 = *param_3;
    uStack_2c = *param_2;
  }
  else {
    bVar2 = *(char *)(param_1 + 0x212a) != '\0';
    uStack_2c = 0xff7fe801;
    if (bVar2) {
      uStack_2c = *param_2;
    }
    local_34 = 0xff32e00e;
    if (bVar2) {
      local_34 = *param_3;
    }
  }
  local_30 = uStack_2c;
  FUN_00b0a8a8(param_1,&uStack_2c,&local_30,&local_34);
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 FUN_00b22f60(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2128) != '\0') {
    uVar1 = 0xff7fe801;
    if (*(char *)(param_1 + 0x212a) != '\0') {
      uVar1 = param_2;
    }
    return uVar1;
  }
  return param_2;
}




undefined4 FUN_00b22f94(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x2128) != '\0') {
    uVar1 = 0xff32e00e;
    if (*(char *)(param_1 + 0x212a) != '\0') {
      uVar1 = param_2;
    }
    return uVar1;
  }
  return param_2;
}




void FUN_00b22fc8(undefined8 param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 uint param_6,int param_7)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  bVar1 = param_7 <= param_3;
  bVar3 = param_7 == -1;
  if (bVar3) {
    param_7 = 1;
  }
  *(bool *)(param_2 + 0x2128) = bVar1;
  if (bVar3) {
    param_3 = 1;
  }
  FUN_00b230c8();
  local_70 = param_5;
  local_6c = param_4;
  if (*(char *)(param_2 + 0x2128) != '\0') {
    local_6c = 0xff7fe801;
    local_70 = 0xff32e00e;
    if (*(char *)(param_2 + 0x212a) != '\0') {
      local_70 = param_5;
      local_6c = param_4;
    }
  }
  FUN_00b0a264(param_1,param_2,param_3,&local_6c,&local_70,param_6 & 1,param_7,
               *(undefined1 *)(param_2 + 0x2129));
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

