// functions/00eab — 7 functions
#include "libGameKindred.h"




void FUN_00eab428(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  char *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00954d1c(param_2);
  FUN_00eabd10(param_1,param_2 + 0x70);
  lVar2 = FUN_008fd190(param_1,"guildUUID");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_00eab4c0:
    puVar4 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "guildUUID";
    local_50 = 0x100005;
    local_58 = 9;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00eab4c0;
    local_60 = "guildUUID";
    local_50 = 0x100005;
    local_58 = 9;
    puVar4 = (undefined8 *)FUN_008feca4(param_1,&local_60);
    if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
      puVar4 = (undefined8 *)*puVar4;
    }
  }
  FUN_008fa54c(&local_60,puVar4);
  FUN_008fce60(param_2,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar2 = FUN_008fd190(param_1,"guildName");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_00eab53c:
    puVar4 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "guildName";
    local_50 = 0x100005;
    local_58 = 9;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00eab53c;
    local_60 = "guildName";
    local_50 = 0x100005;
    local_58 = 9;
    puVar4 = (undefined8 *)FUN_008feca4(param_1,&local_60);
    if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
      puVar4 = (undefined8 *)*puVar4;
    }
  }
  FUN_008fa54c(&local_60,puVar4);
  FUN_008fce60(param_2 + 0x18,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar2 = FUN_008fd190(param_1,"guildTag");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
LAB_00eab5b8:
    puVar4 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_60 = "guildTag";
    local_50 = 0x100005;
    local_58 = 8;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_00eab5b8;
    local_60 = "guildTag";
    local_50 = 0x100005;
    local_58 = 8;
    puVar4 = (undefined8 *)FUN_008feca4(param_1,&local_60);
    if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
      puVar4 = (undefined8 *)*puVar4;
    }
  }
  FUN_008fa54c(&local_60,puVar4);
  FUN_008fce60(param_2 + 0x30,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar2 = FUN_008fd190(param_1,"motto");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_60 = "motto";
    local_50 = 0x100005;
    local_58 = 5;
    lVar2 = FUN_008feca4(param_1,&local_60);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_60 = "motto";
      local_50 = 0x100005;
      local_58 = 5;
      puVar4 = (undefined8 *)FUN_008feca4(param_1,&local_60);
      if ((*(byte *)((long)puVar4 + 0x12) >> 6 & 1) == 0) {
        puVar4 = (undefined8 *)*puVar4;
      }
      goto LAB_00eab63c;
    }
  }
  puVar4 = (undefined8 *)&DAT_01e277f2;
LAB_00eab63c:
  FUN_008fa54c(&local_60,puVar4);
  FUN_008fce60(param_2 + 0x48,&local_60);
  if (((ulong)local_60 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_4c,local_50));
  }
  lVar2 = FUN_008fd190(param_1,"numMembers");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar5 = 0;
  }
  else {
    local_60 = "numMembers";
    local_50 = 0x100005;
    local_58 = 10;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar5 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "numMembers";
      local_50 = 0x100005;
      local_58 = 10;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar5 = *puVar3;
    }
  }
  *(undefined4 *)(param_2 + 0x60) = uVar5;
  lVar2 = FUN_008fd190(param_1,"maxNumMembers");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar5 = 0;
  }
  else {
    local_60 = "maxNumMembers";
    local_50 = 0x100005;
    local_58 = 0xd;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar5 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "maxNumMembers";
      local_50 = 0x100005;
      local_58 = 0xd;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar5 = *puVar3;
    }
  }
  *(undefined4 *)(param_2 + 100) = uVar5;
  lVar2 = FUN_008fd190(param_1,"guildLevel");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar5 = 0;
  }
  else {
    local_60 = "guildLevel";
    local_50 = 0x100005;
    local_58 = 10;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar5 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "guildLevel";
      local_50 = 0x100005;
      local_58 = 10;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar5 = *puVar3;
    }
  }
  *(undefined4 *)(param_2 + 0x68) = uVar5;
  lVar2 = FUN_008fd190(param_1,"guildTier");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar2) {
    uVar5 = 0;
  }
  else {
    local_60 = "guildTier";
    local_50 = 0x100005;
    local_58 = 9;
    lVar2 = FUN_008feca4(param_1,&local_60);
    uVar5 = 0;
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_60 = "guildTier";
      local_50 = 0x100005;
      local_58 = 9;
      puVar3 = (undefined4 *)FUN_008feca4(param_1,&local_60);
      uVar5 = *puVar3;
    }
  }
  *(undefined4 *)(param_2 + 0x6c) = uVar5;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eab92c(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar2 = FUN_008fd190(param_1,"skillProgressionInfo");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_70 = "skillProgressionInfo";
    local_60 = 0x100005;
    local_68 = 0x14;
    plVar3 = (long *)FUN_008feca4(param_1,&local_70);
    lVar2 = FUN_008fd190(plVar3,"5v5_pvp_ranked");
    if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
      local_70 = "5v5_pvp_ranked";
      local_60 = 0x100005;
      local_68 = 0xe;
      uVar4 = FUN_008feca4(plVar3,&local_70);
      FUN_00ea4c78(uVar4,param_2);
    }
    lVar2 = FUN_008fd190(plVar3,"ranked");
    if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
      local_70 = "ranked";
      local_60 = 0x100005;
      local_68 = 6;
      uVar4 = FUN_008feca4(plVar3,&local_70);
      FUN_00ea4c78(uVar4,param_3);
    }
    lVar2 = FUN_008fd190(plVar3,"blitz_pvp_ranked");
    if (*plVar3 + (ulong)*(uint *)(plVar3 + 1) * 0x30 != lVar2) {
      local_70 = "blitz_pvp_ranked";
      local_60 = 0x100005;
      local_68 = 0x10;
      uVar4 = FUN_008feca4(plVar3,&local_70);
      FUN_00ea4c78(uVar4,param_4);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00eabad0(uint *param_1,long param_2)

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
    FUN_0095491c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x108;
  FUN_008fcdb8(lVar4 + -0x108,param_2);
  thunk_FUN_00e7051c(lVar4 + -0xf0,param_2 + 0x18);
  FUN_008fcdb8(lVar4 + -0xe0,param_2 + 0x28);
  memcpy((void *)(lVar4 + -200),(void *)(param_2 + 0x40),0xc3);
  return;
}




void FUN_00eabb88(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00954a38(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined8 *)(lVar1 + -8) = *(undefined8 *)(param_2 + 0x18);
  return;
}




void FUN_00eabc1c(uint *param_1,long param_2)

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
    FUN_00954b10(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  FUN_008fcdb8(lVar4 + -0x38,param_2);
  FUN_008fcdb8(lVar4 + -0x20,param_2 + 0x18);
  *(undefined4 *)(lVar4 + -8) = *(undefined4 *)(param_2 + 0x30);
  return;
}




void FUN_00eabcc4(long param_1)

{
  FUN_008fa54c(param_1,&DAT_01e277f2);
  FUN_008fa54c(param_1 + 0x18,&DAT_01e277f2);
  FUN_008fa54c(param_1 + 0x30,&DAT_01e277f2);
  *(undefined8 *)(param_1 + 0x48) = 0xffffffffffffffff;
  return;
}




void FUN_00eabd10(long *param_1,undefined4 *param_2)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  char *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fd190(param_1,"guildSettings");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) goto LAB_00eac388;
  local_70 = "guildSettings";
  local_60 = 0x100005;
  local_68 = 0xd;
  lVar3 = FUN_008feca4(param_1,&local_70);
  if (*(int *)(lVar3 + 0x10) != 3) goto LAB_00eac388;
  local_70 = "guildSettings";
  local_60 = 0x100005;
  local_68 = 0xd;
  plVar4 = (long *)FUN_008feca4(param_1,&local_70);
  lVar3 = FUN_008fd190(plVar4,"primeTimeUtcHour");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    uVar8 = 0;
  }
  else {
    local_70 = "primeTimeUtcHour";
    local_60 = 0x100005;
    local_68 = 0x10;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    uVar8 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_70 = "primeTimeUtcHour";
      local_60 = 0x100005;
      local_68 = 0x10;
      puVar5 = (undefined4 *)FUN_008feca4(plVar4,&local_70);
      uVar8 = *puVar5;
    }
  }
  *param_2 = uVar8;
  lVar3 = FUN_008fd190(plVar4,"minimumSkillTier");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
    uVar8 = 0;
  }
  else {
    local_70 = "minimumSkillTier";
    local_60 = 0x100005;
    local_68 = 0x10;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    uVar8 = 0;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_70 = "minimumSkillTier";
      local_60 = 0x100005;
      local_68 = 0x10;
      puVar5 = (undefined4 *)FUN_008feca4(plVar4,&local_70);
      uVar8 = *puVar5;
    }
  }
  param_2[1] = uVar8;
  lVar3 = FUN_008fd190(plVar4,"guildType");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eabef8:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "guildType";
    local_60 = 0x100005;
    local_68 = 9;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eabef8;
    local_70 = "guildType";
    local_60 = 0x100005;
    local_68 = 9;
    puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 2,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(plVar4,"guildLanguageCode");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eabf74:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "guildLanguageCode";
    local_60 = 0x100005;
    local_68 = 0x11;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eabf74;
    local_70 = "guildLanguageCode";
    local_60 = 0x100005;
    local_68 = 0x11;
    puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 8,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(plVar4,"guildMessage");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eabff0:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "guildMessage";
    local_60 = 0x100005;
    local_68 = 0xc;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eabff0;
    local_70 = "guildMessage";
    local_60 = 0x100005;
    local_68 = 0xc;
    puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0xe,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(plVar4,"resourceLabel1");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eac06c:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "resourceLabel1";
    local_60 = 0x100005;
    local_68 = 0xe;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eac06c;
    local_70 = "resourceLabel1";
    local_60 = 0x100005;
    local_68 = 0xe;
    puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x14,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(plVar4,"resourceLabel2");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eac0e8:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "resourceLabel2";
    local_60 = 0x100005;
    local_68 = 0xe;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eac0e8;
    local_70 = "resourceLabel2";
    local_60 = 0x100005;
    local_68 = 0xe;
    puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x1a,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(plVar4,"resourceLabel3");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eac164:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "resourceLabel3";
    local_60 = 0x100005;
    local_68 = 0xe;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eac164;
    local_70 = "resourceLabel3";
    local_60 = 0x100005;
    local_68 = 0xe;
    puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x20,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(plVar4,"resourceURL1");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eac1e0:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "resourceURL1";
    local_60 = 0x100005;
    local_68 = 0xc;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eac1e0;
    local_70 = "resourceURL1";
    local_60 = 0x100005;
    local_68 = 0xc;
    puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x26,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(plVar4,"resourceURL2");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eac25c:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "resourceURL2";
    local_60 = 0x100005;
    local_68 = 0xc;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eac25c;
    local_70 = "resourceURL2";
    local_60 = 0x100005;
    local_68 = 0xc;
    puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x2c,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(plVar4,"resourceURL3");
  if (*plVar4 + (ulong)*(uint *)(plVar4 + 1) * 0x30 == lVar3) {
LAB_00eac2d8:
    puVar7 = (undefined8 *)&DAT_01e277f2;
  }
  else {
    local_70 = "resourceURL3";
    local_60 = 0x100005;
    local_68 = 0xc;
    lVar3 = FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_00eac2d8;
    local_70 = "resourceURL3";
    local_60 = 0x100005;
    local_68 = 0xc;
    puVar7 = (undefined8 *)FUN_008feca4(plVar4,&local_70);
    if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
      puVar7 = (undefined8 *)*puVar7;
    }
  }
  FUN_008fa54c(&local_70,puVar7);
  FUN_008fce60(param_2 + 0x32,&local_70);
  if (((ulong)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_5c,local_60));
  }
  lVar3 = FUN_008fd190(param_1,"memberType");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 == lVar3) {
    bVar2 = false;
  }
  else {
    local_70 = "memberType";
    local_60 = 0x100005;
    local_68 = 10;
    lVar3 = FUN_008feca4(param_1,&local_70);
    bVar2 = false;
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_70 = "memberType";
      local_60 = 0x100005;
      local_68 = 10;
      piVar6 = (int *)FUN_008feca4(param_1,&local_70);
      bVar2 = *piVar6 != 0;
    }
  }
  *(bool *)(param_2 + 0x38) = bVar2;
LAB_00eac388:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

