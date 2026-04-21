// functions/00b4a — 30 functions
#include "libGameKindred.h"




void thunk_FUN_00b4a7dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  FUN_00b49d94();
  uStack_3c = 0;
  plVar1 = param_1 + 0xba56;
  FUN_00b31dec(plVar1,&DAT_0320ffa8,&uStack_3c);
  FUN_00b32074(plVar1,4);
  (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x58a,1,0);
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b4a880(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 uStack_3c;
  long lStack_38;
  
  lVar2 = tpidr_el0;
  lStack_38 = *(long *)(lVar2 + 0x28);
  FUN_00b49d94();
  uStack_3c = 0;
  plVar1 = param_1 + 0xba56;
  FUN_00b31dec(plVar1,&DAT_0320ffa8,&uStack_3c);
  FUN_00b32074(plVar1,5);
  (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x58a,1,0);
  if (*(long *)(lVar2 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b4a984(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d880();
  if ((uVar2 & 1) != 0) {
    FUN_00b49d94(param_1);
    plVar1 = param_1 + 0xba56;
    FUN_00b31dec(plVar1,param_1 + 0xc9e8,param_1 + 0xc9ee);
    FUN_00b32074(plVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00b4aa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x58a,1,0);
    return;
  }
  return;
}




void thunk_FUN_00b4aa14(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d880();
  if ((uVar2 & 1) != 0) {
    FUN_00b49d94(param_1);
    plVar1 = param_1 + 0xba56;
    FUN_00b31dec(plVar1,param_1 + 0xc9eb,(long)param_1 + 0x64f74);
    FUN_00b32074(plVar1,3);
                    /* WARNING: Could not recover jumptable at 0x00b4aa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x58a,1,0);
    return;
  }
  return;
}




void thunk_FUN_00b4aaa8(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00b20974(param_3 + 0x33d0);
  if (iVar2 == 0) {
    uVar3 = FUN_0092e8e0();
    FUN_00a9bd24(param_3,uVar3 & 1,auStack_2c,auStack_30,auStack_34);
    auVar4 = FUN_00b413b0(param_3 + 0x3ea0,1,0,1);
    FUN_00ed02d8(auVar4,param_2 + 160.0,param_3 + 0x2e80);
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4a0f0(long param_1,long param_2)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  void *pvVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  bVar3 = *(byte *)(param_2 + 0x180);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_2 + 0x188);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (sVar1 == sVar2) {
    pvVar14 = *(void **)(param_2 + 400);
    if ((bVar3 & 1) == 0) {
      pvVar14 = (void *)(param_2 + 0x181);
    }
    pcVar9 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pcVar9 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        pcVar10 = (char *)(param_2 + 0x181);
        lVar13 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar10 != *pcVar9) goto LAB_00b4a1b4;
          pcVar10 = pcVar10 + 1;
          lVar13 = lVar13 + 1;
          pcVar9 = pcVar9 + 1;
        } while (lVar13 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar7 = memcmp(pvVar14,pcVar9,sVar1), iVar7 != 0)) goto LAB_00b4a1b4;
  }
  else {
LAB_00b4a1b4:
    FUN_00b426d4(param_1 + 0x3ea0,param_2,*(byte *)(param_1 + 0x2c34) >> 1 & 1);
    FUN_00b3a038(param_1 + 0x392e0,param_2);
    FUN_00b46454(param_1 + 0x498f0,param_2);
  }
  if (*(char *)(param_2 + 0x1d0) == '\0') goto LAB_00b4a4d4;
  pbVar12 = (byte *)(param_1 + 0x64f28);
  bVar3 = *pbVar12;
  bVar4 = *(byte *)(param_2 + 0x180);
  sVar1 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar1 = *(size_t *)(param_1 + 0x64f30);
  }
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_2 + 0x188);
  }
  if (sVar1 == sVar2) {
    pvVar14 = *(void **)(param_1 + 0x64f38);
    pbVar15 = *(byte **)(param_2 + 400);
    if ((bVar3 & 1) == 0) {
      pvVar14 = (void *)(param_1 + 0x64f29);
    }
    if ((bVar4 & 1) == 0) {
      pbVar15 = (byte *)(param_2 + 0x181);
    }
    if ((bVar3 & 1) == 0) {
      if (sVar1 != 0) {
        lVar13 = -(ulong)(bVar3 >> 1);
        pbVar11 = pbVar12;
        do {
          pbVar11 = pbVar11 + 1;
          if (*pbVar11 != *pbVar15) goto LAB_00b4a2a8;
          lVar13 = lVar13 + 1;
          pbVar15 = pbVar15 + 1;
        } while (lVar13 != 0);
      }
    }
    else if ((sVar1 != 0) && (iVar7 = memcmp(pvVar14,pbVar15,sVar1), iVar7 != 0)) goto LAB_00b4a2a8;
  }
  else {
LAB_00b4a2a8:
    FUN_008fce60(pbVar12,param_2 + 0x180);
    FUN_00b20790(param_1 + 0x33d0,0,1);
  }
  FUN_00955098(param_1 + 0x64f10,0);
  if (*(int *)(param_2 + 0x208) != 0) {
    lVar13 = 0;
    uVar16 = 0;
    do {
      FUN_00b4a504(param_1 + 0x64f10,*(long *)(param_2 + 0x210) + lVar13);
      uVar16 = uVar16 + 1;
      lVar13 = lVar13 + 0x50;
    } while (uVar16 < *(uint *)(param_2 + 0x208));
  }
  *(undefined1 *)(param_1 + 0x64f79) = 1;
  uVar16 = FUN_009580c4();
  bVar6 = false;
  if ((uVar16 & 1) != 0) {
    lVar13 = FUN_009580b8();
    bVar3 = *pbVar12;
    bVar4 = *(byte *)(lVar13 + 0x5478);
    sVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      sVar1 = *(size_t *)(param_1 + 0x64f30);
    }
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(lVar13 + 0x5480);
    }
    bVar6 = false;
    if (sVar1 == sVar2) {
      pvVar14 = *(void **)(param_1 + 0x64f38);
      pbVar15 = *(byte **)(lVar13 + 0x5488);
      if ((bVar3 & 1) == 0) {
        pvVar14 = (void *)(param_1 + 0x64f29);
      }
      if ((bVar4 & 1) == 0) {
        pbVar15 = (byte *)(lVar13 + 0x5479);
      }
      if ((bVar3 & 1) == 0) {
        if (sVar1 != 0) {
          lVar13 = -(ulong)(bVar3 >> 1);
          do {
            pbVar12 = pbVar12 + 1;
            if (*pbVar12 != *pbVar15) {
              bVar6 = false;
              goto LAB_00b4a3e4;
            }
            lVar13 = lVar13 + 1;
            pbVar15 = pbVar15 + 1;
          } while (lVar13 != 0);
        }
      }
      else if (sVar1 != 0) {
        iVar7 = memcmp(pvVar14,pbVar15,sVar1);
        bVar6 = iVar7 == 0;
        goto LAB_00b4a3e4;
      }
      bVar6 = true;
    }
  }
LAB_00b4a3e4:
  pcVar9 = (char *)(param_1 + 0x64f78);
  if (bVar6 != (bool)*pcVar9) {
    *pcVar9 = bVar6;
    FUN_00b43418(param_1 + 0x3ea0);
    local_68 = 0;
    uStack_60 = 0;
    uVar8 = FUN_00e6ce7c("MENU_PROFILE_TAB_OVERVIEW",0);
    FUN_0090ea30(&local_68,uVar8);
    uVar8 = FUN_00e6ce7c("MENU_GUILD_TAB_MEMBERS",0);
    FUN_0090ea30(&local_68,uVar8);
    uVar8 = FUN_00e6ce7c("MENU_GUILD_TAB_TROPHIES",0);
    FUN_0090ea30(&local_68,uVar8);
    FUN_00b1fc3c(0x42800000,0x43fa0000,0x41a00000,0x3f800000,0x3f800000,param_1 + 0x33d0,&local_68);
    if (*pcVar9 == '\0') {
      local_6c = 0xff5262cc;
    }
    else {
      local_6c = 0xffffba8c;
    }
    FUN_00f0e670(param_1 + 0x2cd8,&local_6c,2);
    FUN_00b49e8c(param_1);
    FUN_0090eb54(&local_68,1);
  }
LAB_00b4a4d4:
  if (*(long *)(lVar5 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b4a504(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
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
    FUN_00954c08(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x50;
  FUN_008fcdb8(lVar4 + -0x50,param_2);
  FUN_008fcdb8(lVar4 + -0x38,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x30);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x48);
  return;
}




void FUN_00b4a5b8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x64f79) != '\0') {
    lVar1 = param_1 + 0x5b270;
    FUN_00b71c88(lVar1);
    if (*(uint *)(param_1 + 0x64f10) != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        lVar7 = *(long *)(param_1 + 0x64f18);
        uVar4 = FUN_00e6ce7c("MENU_TROPHY_GUILD_SUBTITLE",0);
        thunk_FUN_00e7051c(&local_78,uVar4);
        FUN_00e705c8(&local_88,"[SEASON_NAME]");
        lVar2 = lVar7 + lVar5;
        FUN_00cb47e8(&local_98,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        FUN_00e71248(&local_78,0,&local_88,&local_98);
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
          local_98 = 0;
          local_90 = (void *)0x0;
        }
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
          local_88 = 0;
          local_80 = (void *)0x0;
        }
        FUN_00cb47e8(&local_88,*(undefined4 *)(lVar2 + 0x48),0,0,0);
        lVar7 = lVar7 + lVar5;
        FUN_00e70570(&local_98,lVar7 + 0x18);
        FUN_00b726f0(lVar1,&local_88,&local_78,&local_98,*(undefined4 *)(lVar7 + 0x4c));
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
          local_98 = 0;
          local_90 = (void *)0x0;
        }
        if (local_80 != (void *)0x0) {
          operator_delete__(local_80);
          local_88 = 0;
          local_80 = (void *)0x0;
        }
        if (local_70 != (void *)0x0) {
          operator_delete__(local_70);
          local_78 = 0;
          local_70 = (void *)0x0;
        }
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x50;
      } while (uVar6 < *(uint *)(param_1 + 0x64f10));
    }
    FUN_00b72854(lVar1,1);
    uVar8 = DAT_02be3670;
    if (*(char *)(param_1 + 0x64f7a) != '\0') {
      uVar8 = 0;
    }
    FUN_00b728d4(uVar8,lVar1);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4a7b4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b4a7d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,0,0);
  return;
}




void FUN_00b4a7dc(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00b49d94();
  local_3c = 0;
  plVar1 = param_1 + 0xba56;
  FUN_00b31dec(plVar1,&DAT_0320ffa8,&local_3c);
  FUN_00b32074(plVar1,4);
  (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x58a,1,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4a880(long *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00b49d94();
  local_3c = 0;
  plVar1 = param_1 + 0xba56;
  FUN_00b31dec(plVar1,&DAT_0320ffa8,&local_3c);
  FUN_00b32074(plVar1,5);
  (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x58a,1,0);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4a924(long *param_1)

{
  FUN_00b43450(param_1 + 0x7d4,param_1 + 0xc9d9);
                    /* WARNING: Could not recover jumptable at 0x00b4a980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,0,1);
  return;
}




void FUN_00b4a984(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d880();
  if ((uVar2 & 1) != 0) {
    FUN_00b49d94(param_1);
    plVar1 = param_1 + 0xba56;
    FUN_00b31dec(plVar1,param_1 + 0xc9e8,param_1 + 0xc9ee);
    FUN_00b32074(plVar1,2);
                    /* WARNING: Could not recover jumptable at 0x00b4aa04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x58a,1,0);
    return;
  }
  return;
}




void FUN_00b4aa14(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d880();
  if ((uVar2 & 1) != 0) {
    FUN_00b49d94(param_1);
    plVar1 = param_1 + 0xba56;
    FUN_00b31dec(plVar1,param_1 + 0xc9eb,(long)param_1 + 0x64f74);
    FUN_00b32074(plVar1,3);
                    /* WARNING: Could not recover jumptable at 0x00b4aa94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x188))(param_1,plVar1,param_1 + 0x58a,1,0);
    return;
  }
  return;
}




void FUN_00b4aaa4(void)

{
  return;
}




void FUN_00b4aaa8(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00b20974(param_3 + 0x33d0);
  if (iVar2 == 0) {
    uVar3 = FUN_0092e8e0();
    FUN_00a9bd24(param_3,uVar3 & 1,auStack_2c,auStack_30,auStack_34);
    auVar4 = FUN_00b413b0(param_3 + 0x3ea0,1,0,1);
    FUN_00ed02d8(auVar4,param_2 + 160.0,param_3 + 0x2e80);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b4ab48(long *param_1)

{
  FUN_00b32074(param_1 + 0xba56,6);
                    /* WARNING: Could not recover jumptable at 0x00b4ab98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x188))(param_1,param_1 + 0xba56,param_1 + 0x58a,1,0);
  return;
}




void FUN_00b4ab9c(long param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  byte *pbVar10;
  
  FUN_00b42420(param_1 + 0x3ea0);
  uVar3 = FUN_00e84e5c(param_2);
  if ((uVar3 & 1) == 0) goto LAB_00b4ae04;
  if (*(char *)(param_2 + 0x44) != '\0') {
    FUN_00936760(thunk_FUN_00b49a10,FUN_00b4ae1c);
    goto LAB_00b4ae04;
  }
  pbVar10 = (byte *)(param_2 + 0x48);
  bVar1 = *pbVar10;
  uVar8 = *(ulong *)(param_2 + 0x50);
  uVar9 = (ulong)(bVar1 >> 1);
  uVar3 = uVar9;
  if ((bVar1 & 1) != 0) {
    uVar3 = uVar8;
  }
  if (uVar3 == 0x11) {
    iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"nonexistant_guild",0x11);
    if (iVar2 != 0) {
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
      goto LAB_00b4ac44;
    }
    uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
    pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_NONEXISTANT_GUILD";
  }
  else {
LAB_00b4ac44:
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0x10) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"already_in_guild",0x10);
      if (iVar2 == 0) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_ALREADY_IN_GUILD";
        goto LAB_00b4add0;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 0xe) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"guild_not_open",0xe);
      if (iVar2 == 0) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_NOT_OPEN";
        goto LAB_00b4add0;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    uVar3 = uVar9;
    if ((bVar1 & 1) != 0) {
      uVar3 = uVar8;
    }
    if (uVar3 == 10) {
      iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"guild_full",10);
      if (iVar2 == 0) {
        uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
        pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_FULL";
        goto LAB_00b4add0;
      }
      bVar1 = *(byte *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar9 = (ulong)(bVar1 >> 1);
    }
    if ((bVar1 & 1) != 0) {
      uVar9 = uVar8;
    }
    if ((uVar9 != 0xe) ||
       (iVar2 = FUN_0090d610(pbVar10,0,0xffffffffffffffff,"min_skill_tier",0xe), iVar2 != 0))
    goto LAB_00b4ae04;
    uVar4 = FUN_00e6ce7c("MENU_PROFILE_GUILD_CANT_JOIN_TITLE",0);
    pcVar5 = "MENU_PROFILE_GUILD_CANT_JOIN_REASON_MIN_SKILL_TIER";
  }
LAB_00b4add0:
  uVar6 = FUN_00e6ce7c(pcVar5,0);
  uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
  FUN_00a9b8b8(uVar4,uVar6,uVar7,0,0);
LAB_00b4ae04:
  FUN_00b49e8c(param_1);
  return;
}




void FUN_00b4ae1c(void)

{
  return;
}




void FUN_00b4ae20(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x64f7a) = param_2 & 1;
  FUN_00b3edc4(param_1 + 0x3ea0);
  *(undefined1 *)(param_1 + 0x498e9) = *(undefined1 *)(param_1 + 0x64f7a);
  return;
}




void FUN_00b4ae68(long param_1)

{
  if ((*(byte *)(param_1 + 0x2c34) >> 1 & 1) == 0) {
    return;
  }
  FUN_00b423e0(param_1 + 0x3ea0);
  return;
}




void FUN_00b4ae84(long param_1)

{
  if ((*(byte *)(param_1 + -4) >> 1 & 1) == 0) {
    return;
  }
  FUN_00b423e0(param_1 + 0x1268);
  return;
}




void FUN_00b4aea4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x25) != '\0')) {
    FUN_00936760(thunk_FUN_00b49a10,FUN_00b4ae1c);
    return;
  }
  return;
}




void thunk_FUN_00b4aea4(undefined8 param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x25) != '\0')) {
    FUN_00936760(thunk_FUN_00b49a10,FUN_00b4ae1c);
    return;
  }
  return;
}




void FUN_00b4aef4(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  FUN_00b432cc(param_1 + 0x3ea0);
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    lVar2 = FUN_009580b8();
    FUN_009658c8(lVar2 + 0x18);
    FUN_00936760(thunk_FUN_00b49a10,FUN_00b4ae1c);
    return;
  }
  return;
}




void FUN_00b4af58(long param_1)

{
  FUN_00b4aef4(param_1 + -0x2c38);
  return;
}




void FUN_00b4af64(long param_1)

{
  FUN_00b43320(param_1 + 0x3ea0);
  return;
}




void FUN_00b4af70(long param_1)

{
  FUN_00b43320(param_1 + 0x1268);
  return;
}




void FUN_00b4af7c(undefined8 param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__s2;
  char *pcVar9;
  void *__s1;
  
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      bVar2 = *(byte *)(param_2 + 0x48);
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(param_2 + 0x50);
      }
      if ((uVar4 == 0x11) &&
         (iVar3 = FUN_0090d610((byte *)(param_2 + 0x48),0,0xffffffffffffffff,"membership_locked",
                               0x11), iVar3 == 0)) {
        uVar8 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE",0);
        uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar8,uVar6,uVar7,0,0);
        return;
      }
    }
    else {
      lVar5 = FUN_009580b8();
      bVar2 = *(byte *)(lVar5 + 0x5478);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar5 + 0x5480);
      }
      sVar1 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar1 = DAT_0320ffb0;
      }
      if (__n != sVar1) {
LAB_00b4b0d0:
        uVar8 = FUN_009580b8();
        lVar5 = FUN_009580b8();
        FUN_0095e21c(uVar8,lVar5 + 0x5478,1);
        return;
      }
      __s1 = *(void **)(lVar5 + 0x5488);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar5 + 0x5479);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(lVar5 + 0x5479);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar9 != *__s2) goto LAB_00b4b0d0;
            pcVar9 = pcVar9 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b4b0d0;
    }
  }
  return;
}




void thunk_FUN_00b4af7c(undefined8 param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *__s2;
  char *pcVar9;
  void *__s1;
  
  uVar4 = FUN_00e84e5c(param_2);
  if ((uVar4 & 1) != 0) {
    if (*(char *)(param_2 + 0x44) == '\0') {
      bVar2 = *(byte *)(param_2 + 0x48);
      uVar4 = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        uVar4 = *(ulong *)(param_2 + 0x50);
      }
      if ((uVar4 == 0x11) &&
         (iVar3 = FUN_0090d610((byte *)(param_2 + 0x48),0,0xffffffffffffffff,"membership_locked",
                               0x11), iVar3 == 0)) {
        uVar8 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_TITLE",0);
        uVar6 = FUN_00e6ce7c("MENU_PROFILE_GUILD_TEAM_MEMBERSHIP_LOCKED_MESSAGE",0);
        uVar7 = FUN_00e6ce7c("GENERIC_DIALOG_OKAY",0);
        FUN_00a9b8b8(uVar8,uVar6,uVar7,0,0);
        return;
      }
    }
    else {
      lVar5 = FUN_009580b8();
      bVar2 = *(byte *)(lVar5 + 0x5478);
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(lVar5 + 0x5480);
      }
      sVar1 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar1 = DAT_0320ffb0;
      }
      if (__n != sVar1) {
LAB_00b4b0d0:
        uVar8 = FUN_009580b8();
        lVar5 = FUN_009580b8();
        FUN_0095e21c(uVar8,lVar5 + 0x5478,1);
        return;
      }
      __s1 = *(void **)(lVar5 + 0x5488);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar5 + 0x5479);
      }
      __s2 = DAT_0320ffb8;
      if ((DAT_0320ffa8 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          pcVar9 = (char *)(lVar5 + 0x5479);
          lVar5 = -(ulong)(bVar2 >> 1);
          do {
            if (*pcVar9 != *__s2) goto LAB_00b4b0d0;
            pcVar9 = pcVar9 + 1;
            lVar5 = lVar5 + 1;
            __s2 = __s2 + 1;
          } while (lVar5 != 0);
        }
      }
      else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b4b0d0;
    }
  }
  return;
}

