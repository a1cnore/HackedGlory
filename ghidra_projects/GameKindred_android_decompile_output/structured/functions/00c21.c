// functions/00c21 — 18 functions
#include "libGameKindred.h"




void thunk_FUN_00c216bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x3060;
  uVar2 = FUN_00ce1f88(param_1 + 0x1368);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00c2159c(param_1);
  return;
}




void thunk_FUN_00c21720(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x6cb0;
  uVar2 = FUN_00ce1f88(param_1 + 0x4fb8);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00c2159c(param_1);
  return;
}




void thunk_FUN_00c21784(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  void *pvStack_40;
  long lStack_38;
  
  lVar3 = tpidr_el0;
  lStack_38 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x8c08;
  FUN_00abc788(lVar1);
  uVar5 = FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x8f78) & 1) * 0x130 + 0x1e0);
  lVar2 = param_1 + 0xf940;
  FUN_00910394(lVar2,uVar5);
  uVar4 = FUN_00e70b14(lVar2);
  if (0x10 < uVar4) {
    FUN_00e71810(&uStack_48,lVar2,0,0x10);
    FUN_00e705c8(&uStack_58,"...");
    FUN_00e70c34(&uStack_48,&uStack_58);
    if (pvStack_50 != (void *)0x0) {
      operator_delete__(pvStack_50);
      uStack_58 = 0;
      pvStack_50 = (void *)0x0;
    }
    FUN_00abc73c(lVar1,&uStack_48);
    if (pvStack_40 != (void *)0x0) {
      operator_delete__(pvStack_40);
      uStack_48 = 0;
      pvStack_40 = (void *)0x0;
    }
  }
  FUN_00c2159c(param_1);
  if (*(long *)(lVar3 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c211b8(long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  *(undefined4 *)(param_1 + 0xf950) = param_3;
  *(undefined4 *)(param_1 + 0xf954) = param_2;
  FUN_00e70510(&local_80);
  FUN_00e70e18(&local_80,&DAT_01bb6d43,param_2);
  plVar1 = (long *)(param_1 + 0xf668);
  FUN_00f0d75c(plVar1,&local_80);
  fVar3 = (float)FUN_00f0e700(param_1 + 0xf798);
  fVar4 = *(float *)(param_1 + 0xf7dc) + -3.0;
  if ((*(float *)(param_1 + 0xf6a8) != fVar3) || (*(float *)(param_1 + 0xf6ac) != fVar4)) {
    *(float *)(param_1 + 0xf6a8) = fVar3;
    *(float *)(param_1 + 0xf6ac) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  plVar1 = (long *)(param_1 + 0xf5b0);
  fVar3 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  FUN_00f01c54(plVar1,0,0,1,1);
  fVar4 = fVar4 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xf5f0) != fVar3 * -0.5) || (*(float *)(param_1 + 0xf5f4) != fVar4)) {
    *(float *)(param_1 + 0xf5f0) = fVar3 * -0.5;
    *(float *)(param_1 + 0xf5f4) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  FUN_00e70e18(&local_80,&DAT_01bb6d43,param_3);
  plVar1 = (long *)(param_1 + 0xddd0);
  FUN_00f0d75c(plVar1,&local_80);
  fVar3 = (float)FUN_00f0e700(param_1 + 0xdf00);
  fVar4 = *(float *)(param_1 + 0xdf44) + -3.0;
  if ((*(float *)(param_1 + 0xde10) != fVar3) || (*(float *)(param_1 + 0xde14) != fVar4)) {
    *(float *)(param_1 + 0xde10) = fVar3;
    *(float *)(param_1 + 0xde14) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0x3f00000000000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  plVar1 = (long *)(param_1 + 0xdd18);
  fVar3 = (float)FUN_00f01c54(plVar1,0,0,1,1);
  FUN_00f01c54(plVar1,0,0,1,1);
  fVar4 = fVar4 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xdd58) != fVar3 * -0.5) || (*(float *)(param_1 + 0xdd5c) != fVar4)) {
    *(float *)(param_1 + 0xdd58) = fVar3 * -0.5;
    *(float *)(param_1 + 0xdd5c) = fVar4;
    FUN_0091ada4(plVar1);
  }
  local_70 = 0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_70);
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c214a8(long param_1)

{
  undefined8 uVar1;
  
  FUN_00abc5bc(param_1 + 0x1368);
  FUN_00abc5bc(param_1 + 0x3060);
  FUN_00abc5bc(param_1 + 0x4fb8);
  FUN_00abc5bc(param_1 + 0x6cb0);
  FUN_00910394(param_1 + 0xf940,&DAT_03210450);
  uVar1 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_00abc73c(param_1 + 0x8c08,uVar1);
  FUN_00f0e578(param_1 + 0xac18,"checkbox_filled");
  FUN_00f0e578(param_1 + 0xaef0,"checkbox_empty");
  *(undefined4 *)(param_1 + 0xf958) = 0;
  FUN_00b09454(param_1 + 0xc758,0);
  FUN_00b09454(param_1 + 0xdff0,0);
  if (*(float *)(param_1 + 0x214) != 0.0) {
    *(undefined4 *)(param_1 + 0x214) = 0;
    FUN_0091ada4(param_1 + 0x1d0);
    return;
  }
  return;
}




void FUN_00c2159c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00abce6c(param_1 + 0x1368);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_00abce6c(param_1 + 0x3060);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_00ce1f88(param_1 + 0x1368);
      uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
      if ((uVar1 & 1) != 0) {
        uVar2 = FUN_00ce1f88(param_1 + 0x3060);
        uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
        if ((uVar1 & 1) != 0) {
          uVar1 = FUN_00abce6c(param_1 + 0x4fb8);
          if ((uVar1 & 1) == 0) {
            uVar1 = FUN_00abce6c(param_1 + 0x6cb0);
            if ((uVar1 & 1) == 0) {
              uVar2 = FUN_00ce1f88(param_1 + 0x4fb8);
              uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
              if ((uVar1 & 1) != 0) {
                uVar2 = FUN_00ce1f88(param_1 + 0x6cb0);
                uVar1 = FUN_00e70b88(uVar2,&DAT_03210450);
                if (((uVar1 & 1) != 0) && (uVar1 = FUN_00abce6c(param_1 + 0x8c08), (uVar1 & 1) == 0)
                   ) {
                  FUN_00b09454(param_1 + 0xc758,1);
                  uVar2 = 1;
                  goto LAB_00c2168c;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_00b09454(param_1 + 0xc758,0);
  uVar2 = 0;
LAB_00c2168c:
  FUN_00b09454(param_1 + 0xdff0,uVar2);
  return;
}




void FUN_00c216bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x3060;
  uVar2 = FUN_00ce1f88(param_1 + 0x1368);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00c2159c(param_1);
  return;
}




void FUN_00c21720(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  lVar1 = param_1 + 0x6cb0;
  uVar2 = FUN_00ce1f88(param_1 + 0x4fb8);
  FUN_00abcf38(lVar1,1,uVar2);
  uVar2 = FUN_00ce1f88(lVar1);
  uVar3 = FUN_00e70b88(uVar2,&DAT_03210450);
  if ((uVar3 & 1) != 0) {
    FUN_00abc788(lVar1);
  }
  FUN_00c2159c(param_1);
  return;
}




void FUN_00c21784(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  lVar1 = param_1 + 0x8c08;
  FUN_00abc788(lVar1);
  uVar5 = FUN_00f08be8(lVar1 + ((ulong)*(byte *)(param_1 + 0x8f78) & 1) * 0x130 + 0x1e0);
  lVar2 = param_1 + 0xf940;
  FUN_00910394(lVar2,uVar5);
  uVar4 = FUN_00e70b14(lVar2);
  if (0x10 < uVar4) {
    FUN_00e71810(&local_48,lVar2,0,0x10);
    FUN_00e705c8(&local_58,"...");
    FUN_00e70c34(&local_48,&local_58);
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
    FUN_00abc73c(lVar1,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  FUN_00c2159c(param_1);
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c21884(long param_1,undefined8 param_2,int param_3)

{
  char *pcVar1;
  
  FUN_00f0490c(param_2);
  pcVar1 = "checkbox_filled";
  if (param_3 != 0) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0xac18,pcVar1);
  pcVar1 = "checkbox_filled";
  if (param_3 != 1) {
    pcVar1 = "checkbox_empty";
  }
  FUN_00f0e578(param_1 + 0xaef0,pcVar1);
  *(int *)(param_1 + 0xf958) = param_3;
  return;
}




void FUN_00c218f4(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313b138,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c2195c(long param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_3 == 1) {
    if (*(int *)(param_1 + 0xf950) == -1) goto LAB_00c21b50;
    FUN_00e70510(&local_48);
    FUN_00e70e18(&local_48,&DAT_01bb6d43,*(int *)(param_1 + 0xf950));
    uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_GLORY_DIALOG_TEXT",0);
    thunk_FUN_00e7051c(&local_58,uVar2);
    FUN_00e705c8(&local_68,"[COST]");
    FUN_00e71248(&local_58,0,&local_68,&local_48);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TITLE",0);
    uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    pcVar5 = thunk_FUN_00c21c10;
  }
  else {
    if (param_3 != 0) goto LAB_00c21b50;
    if (*(int *)(param_1 + 0xf954) == -1) goto LAB_00c21b50;
    FUN_00e70510(&local_48);
    FUN_00e70e18(&local_48,&DAT_01bb6d43,*(int *)(param_1 + 0xf954));
    uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_ICE_DIALOG_TEXT",0);
    thunk_FUN_00e7051c(&local_58,uVar2);
    FUN_00e705c8(&local_68,"[COST]");
    FUN_00e71248(&local_58,0,&local_68,&local_48);
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
    uVar2 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CREATE_TITLE",0);
    uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    pcVar5 = thunk_FUN_00c21b80;
  }
  FUN_00a9b94c(uVar2,&local_58,uVar3,uVar4,param_1,pcVar5,0);
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
LAB_00c21b50:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c21b80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x16d8) & 1) * 0x130 + 0x1548);
  uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x5328) & 1) * 0x130 + 0x5198);
                    /* WARNING: Could not recover jumptable at 0x00c21c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1,uVar1,uVar2,param_1 + 0xf940,*(undefined4 *)(param_1 + 0xf958));
  return;
}




void thunk_FUN_00c21c10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x16d8) & 1) * 0x130 + 0x1548);
  uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x5328) & 1) * 0x130 + 0x5198);
                    /* WARNING: Could not recover jumptable at 0x00c21c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,0,uVar1,uVar2,param_1 + 0xf940,*(undefined4 *)(param_1 + 0xf958));
  return;
}




void FUN_00c21b80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x16d8) & 1) * 0x130 + 0x1548);
  uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x5328) & 1) * 0x130 + 0x5198);
                    /* WARNING: Could not recover jumptable at 0x00c21c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,1,uVar1,uVar2,param_1 + 0xf940,*(undefined4 *)(param_1 + 0xf958));
  return;
}




void FUN_00c21c10(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(param_1 + 0xb8);
  uVar1 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x16d8) & 1) * 0x130 + 0x1548);
  uVar2 = FUN_00f08be8(param_1 + ((ulong)*(byte *)(param_1 + 0x5328) & 1) * 0x130 + 0x5198);
                    /* WARNING: Could not recover jumptable at 0x00c21c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar3)(puVar3,0,uVar1,uVar2,param_1 + 0xf940,*(undefined4 *)(param_1 + 0xf958));
  return;
}




void FUN_00c21ca0(undefined8 param_1)

{
  long lVar1;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00f048e0(auStack_48,DAT_0313b138,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c21d08(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027f8518;
  if ((void *)param_1[0x1f29] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1f29]);
    param_1[0x1f29] = 0;
    param_1[0x1f28] = 0;
  }
  FUN_00f13d08(param_1 + 0x1f11);
  param_1[0x1ef3] = &PTR_FUN_028266f0;
  param_1[0x1f0a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1f0d);
  FUN_00f13d08(param_1 + 0x1ef3);
  FUN_00f0d3a4(param_1 + 0x1ecd);
  FUN_00f13d08(param_1 + 0x1eb6);
  FUN_009c7fa8(param_1 + 0x1bfe);
  param_1[0x1be0] = &PTR_FUN_028266f0;
  param_1[0x1bf7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1bfa);
  FUN_00f13d08(param_1 + 0x1be0);
  FUN_00f0d3a4(param_1 + 0x1bba);
  FUN_00f13d08(param_1 + 0x1ba3);
  FUN_009c7fa8(param_1 + 0x18eb);
  FUN_009c7fa8(param_1 + 0x1633);
  FUN_00f01868(param_1 + 0x1622);
  FUN_00f0d3a4(param_1 + 0x15fc);
  param_1[0x15de] = &PTR_FUN_028266f0;
  param_1[0x15f5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x15f8);
  FUN_00f13d08(param_1 + 0x15de);
  FUN_00f13d08(param_1 + 0x15c7);
  FUN_00f0d3a4(param_1 + 0x15a1);
  param_1[0x1583] = &PTR_FUN_028266f0;
  param_1[0x159a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x159d);
  FUN_00f13d08(param_1 + 0x1583);
  FUN_00f13d08(param_1 + 0x156c);
  FUN_00f0d3a4(param_1 + 0x1546);
  FUN_00f0d3a4(param_1 + 0x1520);
  param_1[0x1181] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x151a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x151a]);
    param_1[0x151a] = 0;
    param_1[0x1519] = 0;
  }
  if ((void *)param_1[0x1518] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1518]);
    param_1[0x1518] = 0;
    param_1[0x1517] = 0;
  }
  if ((void *)param_1[0x1516] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1516]);
    param_1[0x1516] = 0;
    param_1[0x1515] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x14ef);
  FUN_00f13d08(param_1 + 0x14d4);
  FUN_00f13d08(param_1 + 0x14b9);
  FUN_009c7fa8(param_1 + 0x1201);
  FUN_00abd150(param_1 + 0x1181);
  FUN_00f0d3a4(param_1 + 0x115b);
  FUN_00f0d3a4(param_1 + 0x1135);
  param_1[0xd96] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x112f] != (void *)0x0) {
    operator_delete__((void *)param_1[0x112f]);
    param_1[0x112f] = 0;
    param_1[0x112e] = 0;
  }
  if ((void *)param_1[0x112d] != (void *)0x0) {
    operator_delete__((void *)param_1[0x112d]);
    param_1[0x112d] = 0;
    param_1[0x112c] = 0;
  }
  if ((void *)param_1[0x112b] != (void *)0x0) {
    operator_delete__((void *)param_1[0x112b]);
    param_1[0x112b] = 0;
    param_1[0x112a] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1104);
  FUN_00f13d08(param_1 + 0x10e9);
  FUN_00f13d08(param_1 + 0x10ce);
  FUN_009c7fa8(param_1 + 0xe16);
  FUN_00abd150(param_1 + 0xd96);
  param_1[0x9f7] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xd90] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd90]);
    param_1[0xd90] = 0;
    param_1[0xd8f] = 0;
  }
  if ((void *)param_1[0xd8e] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd8e]);
    param_1[0xd8e] = 0;
    param_1[0xd8d] = 0;
  }
  if ((void *)param_1[0xd8c] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd8c]);
    param_1[0xd8c] = 0;
    param_1[0xd8b] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xd65);
  FUN_00f13d08(param_1 + 0xd4a);
  FUN_00f13d08(param_1 + 0xd2f);
  FUN_009c7fa8(param_1 + 0xa77);
  FUN_00abd150(param_1 + 0x9f7);
  FUN_00f0d3a4(param_1 + 0x9d1);
  FUN_00f0d3a4(param_1 + 0x9ab);
  param_1[0x60c] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x9a5] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9a5]);
    param_1[0x9a5] = 0;
    param_1[0x9a4] = 0;
  }
  if ((void *)param_1[0x9a3] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9a3]);
    param_1[0x9a3] = 0;
    param_1[0x9a2] = 0;
  }
  if ((void *)param_1[0x9a1] != (void *)0x0) {
    operator_delete__((void *)param_1[0x9a1]);
    param_1[0x9a1] = 0;
    param_1[0x9a0] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x97a);
  FUN_00f13d08(param_1 + 0x95f);
  FUN_00f13d08(param_1 + 0x944);
  FUN_009c7fa8(param_1 + 0x68c);
  FUN_00abd150(param_1 + 0x60c);
  param_1[0x26d] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x606] != (void *)0x0) {
    operator_delete__((void *)param_1[0x606]);
    param_1[0x606] = 0;
    param_1[0x605] = 0;
  }
  if ((void *)param_1[0x604] != (void *)0x0) {
    operator_delete__((void *)param_1[0x604]);
    param_1[0x604] = 0;
    param_1[0x603] = 0;
  }
  if ((void *)param_1[0x602] != (void *)0x0) {
    operator_delete__((void *)param_1[0x602]);
    param_1[0x602] = 0;
    param_1[0x601] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x5db);
  FUN_00f13d08(param_1 + 0x5c0);
  FUN_00f13d08(param_1 + 0x5a5);
  FUN_009c7fa8(param_1 + 0x2ed);
  FUN_00abd150(param_1 + 0x26d);
  FUN_00f0d3a4(param_1 + 0x247);
  FUN_00f0d3a4(param_1 + 0x221);
  FUN_00f01868(param_1 + 0x210);
  param_1[0x1f2] = &PTR_FUN_028266f0;
  param_1[0x209] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x20c);
  FUN_00f13d08(param_1 + 0x1f2);
  FUN_00f0d3a4(param_1 + 0x1cc);
  param_1[0x1ae] = &PTR_FUN_028266f0;
  param_1[0x1c5] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c8);
  FUN_00f13d08(param_1 + 0x1ae);
  param_1[400] = &PTR_FUN_028266f0;
  param_1[0x1a7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1aa);
  FUN_00f13d08(param_1 + 400);
  FUN_00f01868(param_1 + 0x17f);
  thunk_FUN_00ed5534(param_1 + 0x3a);
  FUN_00f01868(param_1 + 0x29);
  FUN_00f01868(param_1 + 0x18);
  FUN_00f13d08(param_1);
  return;
}

