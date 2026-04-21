// functions/00b35 — 31 functions
#include "libGameKindred.h"




void thunk_FUN_00b35024(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  void *__s1;
  
  lVar4 = FUN_009580b8();
  bVar2 = *(byte *)(lVar4 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar4 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n != sVar1) {
LAB_00b350d0:
    uVar5 = FUN_009580b8();
    lVar4 = FUN_009580b8();
    FUN_00963148(uVar5,lVar4 + 0x5478,param_1 + 0x7c18);
    return;
  }
  __s1 = *(void **)(lVar4 + 0x5488);
  if ((bVar2 & 1) == 0) {
    __s1 = (void *)(lVar4 + 0x5479);
  }
  __s2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    __s2 = &DAT_0320ffa9;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      pcVar6 = (char *)(lVar4 + 0x5479);
      lVar4 = -(ulong)(bVar2 >> 1);
      do {
        if (*pcVar6 != *__s2) goto LAB_00b350d0;
        pcVar6 = pcVar6 + 1;
        lVar4 = lVar4 + 1;
        __s2 = __s2 + 1;
      } while (lVar4 != 0);
    }
  }
  else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b350d0;
  return;
}




void thunk_FUN_00b35108(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00b35178(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  void *__s1;
  
  lVar4 = FUN_009580b8();
  bVar2 = *(byte *)(lVar4 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar4 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n != sVar1) {
LAB_00b35224:
    uVar5 = FUN_009580b8();
    lVar4 = FUN_009580b8();
    FUN_009633d0(uVar5,lVar4 + 0x5478,*(int *)(param_1 + 0x7c50) != 0);
    return;
  }
  __s1 = *(void **)(lVar4 + 0x5488);
  if ((bVar2 & 1) == 0) {
    __s1 = (void *)(lVar4 + 0x5479);
  }
  __s2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    __s2 = &DAT_0320ffa9;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      pcVar6 = (char *)(lVar4 + 0x5479);
      lVar4 = -(ulong)(bVar2 >> 1);
      do {
        if (*pcVar6 != *__s2) goto LAB_00b35224;
        pcVar6 = pcVar6 + 1;
        lVar4 = lVar4 + 1;
        __s2 = __s2 + 1;
      } while (lVar4 != 0);
    }
  }
  else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b35224;
  return;
}




void FUN_00b35024(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  void *__s1;
  
  lVar4 = FUN_009580b8();
  bVar2 = *(byte *)(lVar4 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar4 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n != sVar1) {
LAB_00b350d0:
    uVar5 = FUN_009580b8();
    lVar4 = FUN_009580b8();
    FUN_00963148(uVar5,lVar4 + 0x5478,param_1 + 0x7c18);
    return;
  }
  __s1 = *(void **)(lVar4 + 0x5488);
  if ((bVar2 & 1) == 0) {
    __s1 = (void *)(lVar4 + 0x5479);
  }
  __s2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    __s2 = &DAT_0320ffa9;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      pcVar6 = (char *)(lVar4 + 0x5479);
      lVar4 = -(ulong)(bVar2 >> 1);
      do {
        if (*pcVar6 != *__s2) goto LAB_00b350d0;
        pcVar6 = pcVar6 + 1;
        lVar4 = lVar4 + 1;
        __s2 = __s2 + 1;
      } while (lVar4 != 0);
    }
  }
  else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b350d0;
  return;
}




void FUN_00b35108(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00f048a4("UI::EVENT_EDIT_GUILD_MESSAGE_SUBMIT");
  FUN_00f048e0(auStack_48,uVar2,0);
  FUN_00f04760(param_1,auStack_48,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b35178(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *__s2;
  char *pcVar6;
  void *__s1;
  
  lVar4 = FUN_009580b8();
  bVar2 = *(byte *)(lVar4 + 0x5478);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(lVar4 + 0x5480);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n != sVar1) {
LAB_00b35224:
    uVar5 = FUN_009580b8();
    lVar4 = FUN_009580b8();
    FUN_009633d0(uVar5,lVar4 + 0x5478,*(int *)(param_1 + 0x7c50) != 0);
    return;
  }
  __s1 = *(void **)(lVar4 + 0x5488);
  if ((bVar2 & 1) == 0) {
    __s1 = (void *)(lVar4 + 0x5479);
  }
  __s2 = DAT_0320ffb8;
  if ((DAT_0320ffa8 & 1) == 0) {
    __s2 = &DAT_0320ffa9;
  }
  if ((bVar2 & 1) == 0) {
    if (__n != 0) {
      pcVar6 = (char *)(lVar4 + 0x5479);
      lVar4 = -(ulong)(bVar2 >> 1);
      do {
        if (*pcVar6 != *__s2) goto LAB_00b35224;
        pcVar6 = pcVar6 + 1;
        lVar4 = lVar4 + 1;
        __s2 = __s2 + 1;
      } while (lVar4 != 0);
    }
  }
  else if ((__n != 0) && (iVar3 = memcmp(__s1,__s2,__n), iVar3 != 0)) goto LAB_00b35224;
  return;
}




void FUN_00b35268(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e03a8;
  param_1[0x11] = &PTR_FUN_027e04a8;
  param_1[0x14] = &PTR_FUN_027e04d8;
  if ((*(byte *)(param_1 + 0xf87) & 1) != 0) {
    operator_delete((void *)param_1[0xf89]);
  }
  if ((void *)param_1[0xf86] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf86]);
    param_1[0xf86] = 0;
    param_1[0xf85] = 0;
  }
  if ((void *)param_1[0xf84] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf84]);
    param_1[0xf84] = 0;
    param_1[0xf83] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xf5d);
  param_1[0xf3f] = &PTR_FUN_028266f0;
  param_1[0xf56] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xf59);
  FUN_00f13d08(param_1 + 0xf3f);
  FUN_00f13d08(param_1 + 0xf28);
  FUN_00f0d3a4(param_1 + 0xf02);
  param_1[0xee4] = &PTR_FUN_028266f0;
  param_1[0xefb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xefe);
  FUN_00f13d08(param_1 + 0xee4);
  FUN_00f13d08(param_1 + 0xecd);
  param_1[0xeaf] = &PTR_FUN_028266f0;
  param_1[0xec6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xec9);
  FUN_00f13d08(param_1 + 0xeaf);
  FUN_00f0d3a4(param_1 + 0xe89);
  FUN_00f13d08(param_1 + 0xe72);
  FUN_009c7fa8(param_1 + 0xbba);
  param_1[0x81b] = &PTR_FUN_027d5508;
  if ((void *)param_1[0xbb4] != (void *)0x0) {
    operator_delete__((void *)param_1[0xbb4]);
    param_1[0xbb4] = 0;
    param_1[0xbb3] = 0;
  }
  if ((void *)param_1[0xbb2] != (void *)0x0) {
    operator_delete__((void *)param_1[0xbb2]);
    param_1[0xbb2] = 0;
    param_1[0xbb1] = 0;
  }
  if ((void *)param_1[0xbb0] != (void *)0x0) {
    operator_delete__((void *)param_1[0xbb0]);
    param_1[0xbb0] = 0;
    param_1[0xbaf] = 0;
  }
  FUN_00f0d3a4(param_1 + 0xb89);
  FUN_00f13d08(param_1 + 0xb6e);
  FUN_00f13d08(param_1 + 0xb53);
  FUN_009c7fa8(param_1 + 0x89b);
  FUN_00abd150(param_1 + 0x81b);
  param_1[0x47c] = &PTR_FUN_027d5508;
  if ((void *)param_1[0x815] != (void *)0x0) {
    operator_delete__((void *)param_1[0x815]);
    param_1[0x815] = 0;
    param_1[0x814] = 0;
  }
  if ((void *)param_1[0x813] != (void *)0x0) {
    operator_delete__((void *)param_1[0x813]);
    param_1[0x813] = 0;
    param_1[0x812] = 0;
  }
  if ((void *)param_1[0x811] != (void *)0x0) {
    operator_delete__((void *)param_1[0x811]);
    param_1[0x811] = 0;
    param_1[0x810] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x7ea);
  FUN_00f13d08(param_1 + 1999);
  FUN_00f13d08(param_1 + 0x7b4);
  FUN_009c7fa8(param_1 + 0x4fc);
  FUN_00abd150(param_1 + 0x47c);
  FUN_00f0d3a4(param_1 + 0x456);
  FUN_00f0d3a4(param_1 + 0x430);
  FUN_00f01868(param_1 + 0x41f);
  param_1[0x3fb] = &PTR_FUN_028266f0;
  param_1[0x412] = &PTR_FUN_02826850;
  param_1[0x360] = &PTR_FUN_027d5388;
  FUN_00f0a79c(param_1 + 0x415);
  FUN_00f13d08(param_1 + 0x3fb);
  param_1[0x3dd] = &PTR_FUN_028266f0;
  param_1[0x3f4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3f7);
  FUN_00f13d08(param_1 + 0x3dd);
  param_1[0x3bf] = &PTR_FUN_028266f0;
  param_1[0x3d6] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x3d9);
  FUN_00f13d08(param_1 + 0x3bf);
  FUN_00f01868(param_1 + 0x3ae);
  FUN_009c825c(param_1 + 0x360);
  FUN_00f0d3a4(param_1 + 0x33a);
  param_1[0x31c] = &PTR_FUN_028266f0;
  param_1[0x333] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x336);
  FUN_00f13d08(param_1 + 0x31c);
  param_1[0x2fe] = &PTR_FUN_028266f0;
  param_1[0x315] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x318);
  FUN_00f13d08(param_1 + 0x2fe);
  param_1[0x2e0] = &PTR_FUN_028266f0;
  param_1[0x2f7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2fa);
  FUN_00f13d08(param_1 + 0x2e0);
  FUN_00f01868(param_1 + 0x2cf);
  FUN_009c7fa8(param_1 + 0x17);
  FUN_00948d58(param_1 + 0x14);
  FUN_00e835e0(param_1 + 0x11);
  FUN_00f01868(param_1);
  return;
}




void FUN_00b35658(void *param_1)

{
  FUN_00b35268();
  operator_delete(param_1);
  return;
}




void FUN_00b3567c(long param_1)

{
  FUN_00b35268(param_1 + -0x88);
  return;
}




void FUN_00b35684(long param_1)

{
  FUN_00b35268((void *)(param_1 + -0x88));
  operator_delete((void *)(param_1 + -0x88));
  return;
}




void FUN_00b356ac(long param_1)

{
  FUN_00b35268(param_1 + -0xa0);
  return;
}




void FUN_00b356b4(long param_1)

{
  FUN_00b35268((void *)(param_1 + -0xa0));
  operator_delete((void *)(param_1 + -0xa0));
  return;
}




void FUN_00b356dc(undefined8 *param_1)

{
  long lVar1;
  code *local_58;
  undefined8 *puStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00b8e630();
  *(undefined2 *)(param_1 + 0x6e) = 0;
  param_1[0x71] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x72] = 0;
  *param_1 = &PTR_FUN_027e0870;
  param_1[0x6d] = &PTR_FUN_027e0a40;
  param_1[0x6f] = 0;
  FUN_008fa54c(param_1 + 0x74,"sections");
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  local_30 = FUN_00f048a4("UI::EVENT_NAVIGATE_TO_LINK");
  local_58 = FUN_00b357a4;
  local_40 = 0;
  uStack_38 = 0;
  local_48 = 0;
  puStack_50 = param_1;
  FUN_009693a0(param_1 + 1,&local_58);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b357a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00b378a0(param_1,param_4);
  return;
}




void FUN_00b357ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e0870;
  param_1[0x6d] = &PTR_FUN_027e0a40;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x72bd94bf);
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0xe51db192);
  FUN_00b3589c(param_1);
  if ((*(byte *)(param_1 + 0x77) & 1) != 0) {
    operator_delete((void *)param_1[0x79]);
  }
  if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
    operator_delete((void *)param_1[0x76]);
  }
  if ((*(byte *)(param_1 + 0x71) & 1) != 0) {
    operator_delete((void *)param_1[0x73]);
  }
  if ((void *)param_1[0x70] != (void *)0x0) {
    operator_delete__((void *)param_1[0x70]);
    param_1[0x70] = 0;
    param_1[0x6f] = 0;
  }
  param_1[0x6d] = &PTR_FUN_027e0a68;
  FUN_0096bd60(param_1 + 0x6d);
  FUN_00b8e790(param_1);
  return;
}




void FUN_00b3589c(long *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  FUN_0096bd60(param_1 + 0x6d);
  puVar4 = (undefined8 *)param_1[0x70];
  if (*(uint *)(param_1 + 0x6f) != 0) {
    lVar5 = (ulong)*(uint *)(param_1 + 0x6f) << 3;
    do {
      plVar3 = (long *)*puVar4;
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
        uVar1 = FUN_00f02540();
        if ((uVar1 & 1) != 0) {
          uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
          FUN_00f01a4c(uVar2,1);
        }
        (**(code **)(*param_1 + 0x1a0))(param_1,plVar3);
      }
      lVar5 = lVar5 + -8;
      puVar4 = puVar4 + 1;
    } while (lVar5 != 0);
    puVar4 = (undefined8 *)param_1[0x70];
  }
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 0x6f) = 0;
  }
  *(undefined4 *)((long)param_1 + 0x3dc) = 0;
  param_1[0x7a] = 0;
  return;
}




void FUN_00b35944(long param_1)

{
  FUN_00b357ac(param_1 + -0x368);
  return;
}




void FUN_00b3594c(void *param_1)

{
  FUN_00b357ac();
  operator_delete(param_1);
  return;
}




void FUN_00b35970(long param_1)

{
  FUN_00b357ac((void *)(param_1 + -0x368));
  operator_delete((void *)(param_1 + -0x368));
  return;
}




void FUN_00b35998(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b359a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b359a4(void)

{
  return;
}




void FUN_00b359a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_008fce60(param_1 + 0x388,param_4);
  FUN_008fce60(param_1 + 0x3a0,param_3);
  return;
}




void FUN_00b359dc(long param_1,byte param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00b35a0c(param_1);
  }
  *(byte *)(param_1 + 0x370) = param_2 & 1;
  return;
}




void FUN_00b35a0c(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  if (*(uint *)(param_1 + 0x378) != 0) {
    puVar10 = *(undefined8 **)(param_1 + 0x380);
    puVar1 = puVar10 + *(uint *)(param_1 + 0x378);
    do {
      plVar9 = (long *)*puVar10;
      if (plVar9 != (long *)0x0) {
        lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9);
        uVar3 = *(undefined4 *)(lVar4 + 0x618);
        lVar4 = (**(code **)(*plVar9 + 0x10))(plVar9);
        lVar5 = (**(code **)(*plVar9 + 0x10))(plVar9);
        FUN_00b36380(param_1,lVar4 + 0x600,uVar3,lVar5 + 0x178);
        puVar6 = (uint *)(**(code **)(*plVar9 + 0x28))(plVar9);
        if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
          plVar9 = *(long **)(puVar6 + 2);
          lVar4 = (ulong)*puVar6 << 3;
          do {
            lVar5 = *plVar9;
            if (lVar5 != 0) {
              pbVar7 = (byte *)FUN_00af6c04(lVar5);
              uVar2 = (ulong)(*pbVar7 >> 1);
              if ((*pbVar7 & 1) != 0) {
                uVar2 = *(ulong *)(pbVar7 + 8);
              }
              if (uVar2 != 0) {
                uVar8 = FUN_00af6c04(lVar5);
                FUN_00b36380(param_1,uVar8,uVar3,lVar5);
              }
            }
            lVar4 = lVar4 + -8;
            plVar9 = plVar9 + 1;
          } while (lVar4 != 0);
        }
      }
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar1);
  }
  return;
}




void FUN_00b35b24(long *param_1,byte *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
  }
  if (uVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00b35b44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1b8))();
    return;
  }
  return;
}




void FUN_00b35b4c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  byte local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = FUN_0096bfcc(&local_38);
  if ((uVar2 & 1) != 0) {
    FUN_0096bb84(local_50);
    FUN_00b35bd4(param_1,&local_38,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  FUN_00969c70(&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b35bd4(long *param_1,uint *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char *__s1;
  ulong uVar4;
  long lVar5;
  char *__s2;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_88 [32];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  if (*param_2 != 0) {
    lVar8 = *(long *)(param_2 + 2);
    lVar9 = lVar8 + (ulong)*param_2 * 0x78;
    do {
      if ((*(byte *)(lVar8 + 0x18) & 1) == 0) {
        __s1 = (char *)(lVar8 + 0x19);
      }
      else {
        __s1 = *(char **)(lVar8 + 0x28);
      }
      __s2 = (char *)((long)param_1 + 0x3a1);
      if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
        __s2 = (char *)param_1[0x76];
      }
      iVar2 = strcmp(__s1,__s2);
      if (iVar2 == 0) {
        FUN_00b3589c(param_1);
        if (*(uint *)(lVar8 + 8) != 0) {
          lVar6 = *(long *)(lVar8 + 0x10);
          iVar2 = 0;
          lVar7 = (ulong)*(uint *)(lVar8 + 8) * 0x598;
          do {
            uVar4 = (**(code **)(*param_1 + 0x1b0))(param_1,lVar6,iVar2);
            if (((uVar4 & 1) != 0) && (lVar5 = FUN_00b35e94(param_1,param_3,lVar6), lVar5 != 0)) {
              (**(code **)(*param_1 + 0x1a8))(param_1,lVar5);
              iVar2 = iVar2 + 1;
            }
            lVar7 = lVar7 + -0x598;
            lVar6 = lVar6 + 0x598;
          } while (lVar7 != 0);
        }
      }
      lVar8 = lVar8 + 0x78;
    } while (lVar8 != lVar9);
  }
  if ((char)param_1[0x6e] != '\0') {
    FUN_00b35a0c(param_1);
    FUN_00b35f84(param_1);
    if ((*(byte *)(param_1 + 0x77) & 1) == 0) {
      if (*(byte *)(param_1 + 0x77) >> 1 == 0) goto LAB_00b35d20;
    }
    else if (param_1[0x78] == 0) goto LAB_00b35d20;
    (**(code **)(*param_1 + 0x1b8))(param_1,param_1 + 0x77);
  }
LAB_00b35d20:
  uVar3 = FUN_00f048a4("UI::EVENT_FEED_SIZE_UPDATE");
  FUN_00f048e0(auStack_88,uVar3,0);
  FUN_00f04760(param_1,auStack_88,1);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b35d84(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  byte local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = FUN_0096bfec(&local_38);
  if ((uVar2 & 1) != 0) {
    FUN_0096bba8(local_50);
    FUN_00b35bd4(param_1,&local_38,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  FUN_00969c70(&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b35e0c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  byte local_50 [16];
  void *local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  uStack_30 = 0;
  uVar2 = FUN_0096c0ac(&local_38);
  if ((uVar2 & 1) != 0) {
    FUN_0096bbcc(local_50);
    FUN_00b35bd4(param_1,&local_38,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  FUN_00969c70(&local_38,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b35e94(long *param_1,undefined8 param_2,long param_3)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00bcf6ac(param_3);
  plVar4 = (long *)0x0;
  if ((uVar3 & 1) != 0) {
    uVar3 = FUN_00b36064(param_3);
    if ((uVar3 & 1) == 0) {
      plVar4 = (long *)(**(code **)(*param_1 + 0x198))(param_1,param_3 + 0x3a8);
      local_50 = plVar4;
      if (plVar4 != (long *)0x0) {
        uVar1 = *(undefined4 *)((long)param_1 + 0x3dc);
        uVar5 = FUN_00b360f4(param_1);
        (**(code **)(*plVar4 + 0x18))(plVar4,param_2,param_3,uVar1,uVar5);
        FUN_00b361a0(param_1 + 0x6f,&local_50);
        plVar4 = local_50;
      }
    }
    else {
      *(int *)((long)param_1 + 0x3dc) = *(int *)((long)param_1 + 0x3dc) + *(int *)(param_3 + 0x508);
      plVar4 = (long *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(plVar4);
}




void FUN_00b35f84(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  byte local_c0 [16];
  void *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(byte *)(param_1 + 0x388) & 1) == 0) {
    lVar3 = param_1 + 0x389;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x398);
  }
  if ((*(byte *)(param_1 + 0x3a0) & 1) == 0) {
    lVar4 = param_1 + 0x3a1;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x3b0);
  }
  FUN_00969b40(auStack_a8,"%s_%s",lVar3,lVar4);
  FUN_008fa54c(local_c0,auStack_a8);
  uVar2 = FUN_00e85318(0);
  FUN_00939a8c(local_c0,uVar2);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  FUN_0096bdbc(param_1 + 0x3a0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

