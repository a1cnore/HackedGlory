// functions/00b94 — 23 functions
#include "libGameKindred.h"




void FUN_00b94348(void)

{
  return;
}




void FUN_00b9434c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b94354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00b94358(long param_1,byte param_2)

{
  uint uVar1;
  
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | (param_2 & 1) << 1;
  if ((param_2 & 1) == 0) {
    FUN_00ac1340(param_1 + 0xdf40);
    return;
  }
  uVar1 = FUN_00b943e0(param_1,param_1 + 0x125c8);
  if (uVar1 != 0xffffffff) {
    FUN_0099cf94(*(long *)(param_1 + 0x12578) + (ulong)uVar1 * 0x50,0);
    return;
  }
  return;
}




ulong FUN_00b943e0(long param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *__s1;
  ulong uVar10;
  
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar9 = *(byte **)(param_2 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    pbVar5 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar5 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        lVar7 = -(ulong)(bVar3 >> 1);
        pbVar9 = param_2;
        do {
          pbVar9 = pbVar9 + 1;
          if (*pbVar9 != *pbVar5) goto LAB_00b94490;
          lVar7 = lVar7 + 1;
          pbVar5 = pbVar5 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_00b94548;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar9,pbVar5,__n), iVar4 == 0)) goto LAB_00b94548;
  }
LAB_00b94490:
  uVar2 = *(uint *)(param_1 + 0x12570);
  if (uVar2 != 0) {
    pbVar9 = *(byte **)(param_2 + 0x10);
    lVar7 = *(long *)(param_1 + 0x12578);
    uVar10 = 0;
    if ((bVar3 & 1) == 0) {
      pbVar9 = param_2 + 1;
    }
    do {
      lVar6 = lVar7 + uVar10 * 0x50;
      bVar3 = *(byte *)(lVar6 + 0x20);
      sVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        sVar1 = *(size_t *)(lVar6 + 0x28);
      }
      if (sVar1 == __n) {
        __s1 = *(void **)(lVar7 + uVar10 * 0x50 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(lVar6 + 0x21);
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) goto LAB_00b9454c;
          pbVar5 = (byte *)(lVar6 + 0x21);
          lVar6 = -(ulong)(bVar3 >> 1);
          pbVar8 = pbVar9;
          while (*pbVar5 == *pbVar8) {
            pbVar5 = pbVar5 + 1;
            lVar6 = lVar6 + 1;
            pbVar8 = pbVar8 + 1;
            if (lVar6 == 0) goto LAB_00b9454c;
          }
        }
        else if ((__n == 0) || (iVar4 = memcmp(__s1,pbVar9,__n), iVar4 == 0)) goto LAB_00b9454c;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar2);
  }
LAB_00b94548:
  uVar10 = 0xffffffff;
LAB_00b9454c:
  return uVar10 & 0xffffffff;
}




void FUN_00b94564(long param_1,long param_2)

{
  ulong uVar1;
  
  if (((*(long **)(param_1 + 0x11fb0) != (long *)0x0) &&
      (uVar1 = (**(code **)(**(long **)(param_1 + 0x11fb0) + 0x38))(), (uVar1 & 1) != 0)) &&
     (uVar1 = FUN_00e70b34(param_2 + 0x80,param_1 + 0x125b8), (uVar1 & 1) != 0)) {
    FUN_00b945f8(param_1,param_2 + 0x90,&DAT_03210450);
    FUN_00b94920(param_1,param_2 + 200,&DAT_03210450);
    return;
  }
  return;
}




void FUN_00b945f8(long param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  char *__s1;
  byte bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  char *__s2;
  ulong local_c0 [2];
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  long local_88;
  byte local_80 [8];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar6 = *(long **)(param_1 + 0x11fb0);
  if ((plVar6 == (long *)0x0) || (uVar7 = (**(code **)(*plVar6 + 0x38))(), (uVar7 & 1) == 0))
  goto LAB_00b948ec;
  uVar7 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  if (uVar7 == 0) {
    if ((*(byte *)(param_1 + 0x125e0) & 1) == 0) {
      if (*(byte *)(param_1 + 0x125e0) >> 1 == 0) goto LAB_00b948ec;
    }
    else if (*(long *)(param_1 + 0x125e8) == 0) goto LAB_00b948ec;
    FUN_00b98634(param_1);
    goto LAB_00b948ec;
  }
  FUN_0090dab8(local_c0,&DAT_01b9349c,param_2);
  FUN_008fcdb8(local_80,local_c0);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  pbVar1 = (byte *)(param_1 + 0x125e0);
  bVar3 = *pbVar1;
  __n = (ulong)(local_80[0] >> 1);
  if ((local_80[0] & 1) != 0) {
    __n = local_78;
  }
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x125e8);
  }
  if (__n == sVar2) {
    __s2 = *(char **)(param_1 + 0x125f0);
    pcVar9 = (char *)((ulong)local_80 | 1);
    __s1 = pcVar9;
    if ((local_80[0] & 1) != 0) {
      __s1 = local_70;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(param_1 + 0x125e1);
    }
    if ((local_80[0] & 1) == 0) {
      if (__n != 0) {
        lVar10 = -(ulong)(local_80[0] >> 1);
        do {
          if (*pcVar9 != *__s2) goto LAB_00b9477c;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00b9477c;
  }
  else {
LAB_00b9477c:
    if (sVar2 != 0) {
      FUN_00b98634(param_1);
    }
    FUN_008fce60(pbVar1,local_80);
    FUN_00ac1c18(param_1 + 0xdf40,pbVar1,1,1);
    FUN_00ac1b34(param_1 + 0xdf40,&DAT_0320ffa8);
    if ((*pbVar1 & 1) == 0) {
      local_c0[0] = param_1 + 0x125e1;
    }
    else {
      local_c0[0] = *(ulong *)(param_1 + 0x125f0);
    }
    uVar7 = FUN_00b9cd0c(param_1 + 0x12580,local_c0);
    if ((uVar7 & 1) == 0) {
      if ((*pbVar1 & 1) == 0) {
        local_88 = param_1 + 0x125e1;
      }
      else {
        local_88 = *(long *)(param_1 + 0x125f0);
      }
      uVar8 = FUN_00e6ce7c("MENU_FRIENDS_GUILD_CONVERSATION",0);
      FUN_008fcdb8(local_c0,pbVar1);
      thunk_FUN_00e7051c(&local_a8,uVar8);
      thunk_FUN_00e7051c(&local_98,param_3);
      FUN_00b9cdac(param_1 + 0x12580,&local_88,local_c0);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      plVar6 = *(long **)(param_1 + 0x11fb0);
      if (((plVar6 == (long *)0x0) || (iVar5 = (**(code **)(*plVar6 + 0x40))(), iVar5 != 2)) &&
         (iVar5 = FUN_00b943e0(param_1,pbVar1), iVar5 == -1)) {
        FUN_00b96740(param_1,pbVar1);
      }
    }
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00b948ec:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b94920(long param_1,byte *param_2,undefined8 param_3)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  char *__s1;
  byte bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  long lVar10;
  char *__s2;
  ulong local_c0 [2];
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  void *local_90;
  long local_88;
  byte local_80 [8];
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar6 = *(long **)(param_1 + 0x11fb0);
  if ((plVar6 == (long *)0x0) || (uVar7 = (**(code **)(*plVar6 + 0x38))(), (uVar7 & 1) == 0))
  goto LAB_00b94c14;
  uVar7 = (ulong)(*param_2 >> 1);
  if ((*param_2 & 1) != 0) {
    uVar7 = *(ulong *)(param_2 + 8);
  }
  if (uVar7 == 0) {
    if ((*(byte *)(param_1 + 0x125f8) & 1) == 0) {
      if (*(byte *)(param_1 + 0x125f8) >> 1 == 0) goto LAB_00b94c14;
    }
    else if (*(long *)(param_1 + 0x12600) == 0) goto LAB_00b94c14;
    FUN_00b988e4(param_1);
    goto LAB_00b94c14;
  }
  FUN_0090dab8(local_c0,&DAT_01b9349c,param_2);
  FUN_008fcdb8(local_80,local_c0);
  if ((local_c0[0] & 1) != 0) {
    operator_delete(local_b0);
  }
  pbVar1 = (byte *)(param_1 + 0x125f8);
  bVar3 = *pbVar1;
  __n = (ulong)(local_80[0] >> 1);
  if ((local_80[0] & 1) != 0) {
    __n = local_78;
  }
  sVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x12600);
  }
  if (__n == sVar2) {
    __s2 = *(char **)(param_1 + 0x12608);
    pcVar9 = (char *)((ulong)local_80 | 1);
    __s1 = pcVar9;
    if ((local_80[0] & 1) != 0) {
      __s1 = local_70;
    }
    if ((bVar3 & 1) == 0) {
      __s2 = (char *)(param_1 + 0x125f9);
    }
    if ((local_80[0] & 1) == 0) {
      if (__n != 0) {
        lVar10 = -(ulong)(local_80[0] >> 1);
        do {
          if (*pcVar9 != *__s2) goto LAB_00b94aa4;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
    }
    else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00b94aa4;
  }
  else {
LAB_00b94aa4:
    if (sVar2 != 0) {
      FUN_00b988e4(param_1);
    }
    FUN_008fce60(pbVar1,local_80);
    FUN_00ac1c18(param_1 + 0xdf40,pbVar1,1,1);
    FUN_00ac1b34(param_1 + 0xdf40,&DAT_0320ffa8);
    if ((*pbVar1 & 1) == 0) {
      local_c0[0] = param_1 + 0x125f9;
    }
    else {
      local_c0[0] = *(ulong *)(param_1 + 0x12608);
    }
    uVar7 = FUN_00b9cd0c(param_1 + 0x12580,local_c0);
    if ((uVar7 & 1) == 0) {
      if ((*pbVar1 & 1) == 0) {
        local_88 = param_1 + 0x125f9;
      }
      else {
        local_88 = *(long *)(param_1 + 0x12608);
      }
      uVar8 = FUN_00e6ce7c("MENU_FRIENDS_TEAM_CONVERSATION",0);
      FUN_008fcdb8(local_c0,pbVar1);
      thunk_FUN_00e7051c(&local_a8,uVar8);
      thunk_FUN_00e7051c(&local_98,param_3);
      FUN_00b9cdac(param_1 + 0x12580,&local_88,local_c0);
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
      if ((local_c0[0] & 1) != 0) {
        operator_delete(local_b0);
      }
      plVar6 = *(long **)(param_1 + 0x11fb0);
      if (((plVar6 == (long *)0x0) || (iVar5 = (**(code **)(*plVar6 + 0x40))(), iVar5 != 2)) &&
         (iVar5 = FUN_00b943e0(param_1,pbVar1), iVar5 == -1)) {
        FUN_00b96740(param_1,pbVar1);
      }
    }
  }
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
LAB_00b94c14:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00b94c48(long param_1)

{
  FUN_00b94564(param_1 + -0x380);
  return;
}




void FUN_00b94c50(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_009580b8();
  bVar1 = FUN_0095f298(uVar2,param_2 + 0x180);
  *(byte *)(param_1 + 0x12670) = bVar1 & 1;
  return;
}




void FUN_00b94c8c(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_009580b8();
  bVar1 = FUN_0095f298(uVar2,param_2 + 0x180);
  *(byte *)(param_1 + 0x122f0) = bVar1 & 1;
  return;
}




void FUN_00b94cc8(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0x12670) = 0;
  }
  return;
}




void FUN_00b94d08(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0x122f0) = 0;
  }
  return;
}




void FUN_00b94d4c(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_009580b8();
  bVar1 = FUN_0095f418(uVar2,param_2 + 0x28);
  *(byte *)(param_1 + 0x12671) = bVar1 & 1;
  return;
}




void FUN_00b94d88(long param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_009580b8();
  bVar1 = FUN_0095f418(uVar2,param_2 + 0x28);
  *(byte *)(param_1 + 0x122f1) = bVar1 & 1;
  return;
}




void FUN_00b94dc4(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0x12671) = 0;
  }
  return;
}




void FUN_00b94e04(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e84e5c(param_2);
  if (((uVar1 & 1) != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0x122f1) = 0;
  }
  return;
}




void FUN_00b94e48(void)

{
  return;
}




void FUN_00b94e4c(void)

{
  return;
}




void FUN_00b94e50(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x28) != 0) {
    FUN_00ac0728(param_1 + 0xdf40,0);
    return;
  }
  FUN_00ac0728(param_1 + 0xdf40,1);
  return;
}




void FUN_00b94e70(long param_1)

{
  FUN_00b94e50(param_1 + -0x368);
  return;
}




void FUN_00b94e78(long param_1,undefined8 param_2)

{
  FUN_00ac9b64(param_1 + 0xb608,param_2,1,0);
  return;
}




void FUN_00b94e8c(long param_1,undefined8 param_2)

{
  FUN_00ac9b64(param_1 + 0xb268,param_2,1,0);
  return;
}




void FUN_00b94ea0(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar11 = *(long *)(param_1 + 0x12538);
  puVar1 = (uint *)(param_1 + 0x12530);
  if (lVar11 != 0) {
    if (*puVar1 != 0) {
      lVar12 = (ulong)*puVar1 * 0x188;
      do {
        FUN_0091587c(lVar11);
        lVar12 = lVar12 + -0x188;
        lVar11 = lVar11 + 0x188;
      } while (lVar12 != 0);
    }
    *puVar1 = 0;
  }
  lVar11 = *(long *)(param_1 + 0x12548);
  puVar2 = (uint *)(param_1 + 0x12540);
  if (lVar11 != 0) {
    if (*puVar2 != 0) {
      lVar12 = (ulong)*puVar2 * 0x188;
      do {
        FUN_0091587c(lVar11);
        lVar12 = lVar12 + -0x188;
        lVar11 = lVar11 + 0x188;
      } while (lVar12 != 0);
    }
    *puVar2 = 0;
  }
  uVar4 = FUN_00915fe4();
  *(uint *)(param_1 + 0x12660) = uVar4;
  iVar5 = FUN_00916098();
  if (iVar5 != 0) {
    uVar4 = 0;
    do {
      uVar8 = FUN_009160a8(uVar4);
      FUN_0091564c(puVar2,uVar8);
      uVar4 = uVar4 + 1;
      uVar6 = FUN_00916098();
    } while (uVar4 < uVar6);
  }
  iVar5 = FUN_00915ff4();
  if (iVar5 != 0) {
    local_58 = 0;
    local_50 = (void *)0x0;
    uVar7 = FUN_00915ff4();
    FUN_00b625e0(&local_58,uVar7,0);
    iVar5 = FUN_00915ff4();
    if (iVar5 != 0) {
      uVar13 = 0;
      do {
        uVar8 = FUN_00916004(uVar13 & 0xffffffff);
        *(undefined8 *)((long)local_50 + uVar13 * 8) = uVar8;
        uVar13 = uVar13 + 1;
        uVar9 = FUN_00915ff4();
      } while (uVar13 < (uVar9 & 0xffffffff));
    }
    qsort(local_50,local_58 & 0xffffffff,8,FUN_0091593c);
    if ((int)local_58 != 0) {
      uVar13 = 0;
      do {
        FUN_0091564c(puVar1,*(undefined8 *)((long)local_50 + uVar13 * 8));
        uVar13 = uVar13 + 1;
      } while (uVar13 < (local_58 & 0xffffffff));
    }
    if (local_50 != (void *)0x0) {
      operator_delete__(local_50);
      local_58 = 0;
      local_50 = (void *)0x0;
    }
  }
  puVar1 = (uint *)(param_1 + 0x91c4);
  if ((*(byte *)puVar1 >> 2 & 1) != 0) {
    FUN_00b16600(param_1 + 0x9140);
    *puVar1 = *puVar1 & 0xfffffffb;
  }
  FUN_00b9d400(param_1);
  FUN_00b92674(param_1);
  FUN_00b9e9bc(param_1);
  if (*(int *)(param_1 + 0x12560) != 0) {
    FUN_00b95350(param_1);
  }
  uVar8 = FUN_00e6ce7c("MENU_FRIENDS_REQUESTS_TITLE",0);
  thunk_FUN_00e7051c(&local_58,uVar8);
  FUN_00e70510(&local_68);
  uVar4 = *puVar2;
  if (uVar4 != 0) {
    if (*(uint *)(param_1 + 0x1265c) < uVar4) {
      pcVar10 = " (%d+)";
      uVar4 = *(uint *)(param_1 + 0x1265c);
    }
    else {
      pcVar10 = " (%d)";
    }
    FUN_00e70e18(&local_68,pcVar10,uVar4);
    FUN_00e70c34(&local_58,&local_68);
    FUN_00f0d75c(param_1 + 0x51d8,&local_58);
  }
  uVar8 = FUN_00e6ce7c("MENU_TEAM_TITLE",0);
  FUN_00910394(&local_58,uVar8);
  if (*(int *)(param_1 + 0x120a0) != 0) {
    FUN_00e70e18(&local_68," (%d)");
    FUN_00e70c34(&local_58,&local_68);
    FUN_00f0d75c(param_1 + 0x7e18,&local_58);
  }
  uVar8 = FUN_00e6ce7c("MENU_GUILD_TITLE",0);
  FUN_00910394(&local_58,uVar8);
  if (*(int *)(param_1 + 0x12090) != 0) {
    FUN_00e70e18(&local_68," (%d)");
    FUN_00e70c34(&local_58,&local_68);
    FUN_00f0d75c(param_1 + 0x7308,&local_58);
  }
  uVar8 = FUN_00e6ce7c("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_00910394(&local_58,uVar8);
  if (*(int *)(param_1 + 0x12050) != 0) {
    FUN_00e70e18(&local_68," (%d)");
    FUN_00e70c34(&local_58,&local_68);
    FUN_00f0d75c(param_1 + 0x67f8,&local_58);
  }
  uVar8 = FUN_00e6ce7c("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_00910394(&local_58,uVar8);
  uVar4 = *(uint *)(param_1 + 0x12660);
  if (uVar4 <= *(uint *)(param_1 + 0x12070)) {
    uVar4 = *(uint *)(param_1 + 0x12070);
  }
  if (uVar4 != 0) {
    if (uVar4 < 0x1f5) {
      FUN_00e70e18(&local_68,"(%d)");
    }
    else {
      FUN_00e705c8(&local_78,"(500+)");
      FUN_00910394(&local_68,&local_78);
      if (local_70 != (void *)0x0) {
        operator_delete__(local_70);
        local_78 = 0;
        local_70 = (void *)0x0;
      }
    }
    FUN_00e705c8(&local_78,"[NUM_OFFLINE]");
    FUN_00e71248(&local_58,0,&local_78,&local_68);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0x8928,&local_58);
  }
  if (local_60 != (void *)0x0) {
    operator_delete__(local_60);
    local_68 = 0;
    local_60 = (void *)0x0;
  }
  if (local_50 != (void *)0x0) {
    operator_delete__(local_50);
    local_58 = 0;
    local_50 = (void *)0x0;
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

