// functions/00cc7 — 35 functions
#include "libGameKindred.h"




void * FUN_00cc7004(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xb8);
  FUN_00f13ca4();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00cc706c(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xd8);
  FUN_00f0c714();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void * FUN_00cc70d4(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x148);
  FUN_00f0ac5c();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}




void FUN_00cc713c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280d380;
  param_1[0x1c9] = &PTR_FUN_028266f0;
  param_1[0x1e0] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1e3);
  FUN_00f13d08(param_1 + 0x1c9);
  param_1[0x1ab] = &PTR_FUN_028266f0;
  param_1[0x1c2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1c5);
  FUN_00f13d08(param_1 + 0x1ab);
  param_1[0x18d] = &PTR_FUN_028266f0;
  param_1[0x1a4] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1a7);
  FUN_00f13d08(param_1 + 0x18d);
  param_1[0x16f] = &PTR_FUN_028266f0;
  param_1[0x186] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x189);
  FUN_00f13d08(param_1 + 0x16f);
  FUN_00f0d3a4(param_1 + 0x149);
  FUN_00f0d3a4(param_1 + 0x123);
  FUN_00f0d3a4(param_1 + 0xfd);
  FUN_00f0d3a4(param_1 + 0xd7);
  FUN_00f13d08(param_1 + 0xbf);
  FUN_00f13d08(param_1 + 0xa4);
  param_1[0x7b] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x92);
  FUN_00f13d08(param_1 + 0x7b);
  param_1[0x52] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x69);
  FUN_00f13d08(param_1 + 0x52);
  param_1[0x29] = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x40);
  FUN_00f13d08(param_1 + 0x29);
  *param_1 = &PTR_FUN_02825728;
  FUN_00f01868(param_1 + 0x17);
  FUN_00f13d08(param_1);
  return;
}




void FUN_00cc7284(void *param_1)

{
  FUN_00cc713c();
  operator_delete(param_1);
  return;
}




void FUN_00cc72a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280d250;
  FUN_00cc713c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cc72e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280d250;
  FUN_00cc713c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cc7328(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00cc7354(undefined8 param_1)

{
  FUN_00b89298(param_1,1);
  return;
}




void FUN_00cc735c(undefined8 *param_1)

{
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




void FUN_00cc73a8(undefined8 param_1)

{
  FUN_00ccb850(param_1,1);
  return;
}




void FUN_00cc73b0(long param_1)

{
  FUN_00ccde24(param_1 + 0x10,1);
  FUN_00ccdd98(param_1,1);
  return;
}




void FUN_00cc73e0(void)

{
  uint uVar1;
  
  FUN_009f669c();
  FUN_009360e4();
  FUN_008fc87c();
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) == 0) {
    FUN_00cd68cc();
  }
  FUN_00cdba4c();
  FUN_00a0208c();
  FUN_009f5bac();
  return;
}




void FUN_00cc7410(void)

{
  ulong uVar1;
  
  FUN_009f5d30();
  FUN_00a02198();
  FUN_00cdbad0();
  uVar1 = FUN_0093dbe8();
  if ((uVar1 & 1) == 0) {
    FUN_00cd68fc();
  }
  FUN_008fc8ac();
  FUN_00936158();
  FUN_009f6818();
  FUN_00cc7458(&DAT_0313db68);
  FUN_00cc7548(&DAT_0313dba8);
  return;
}




void FUN_00cc7458(long param_1)

{
  long lVar1;
  byte *pbVar2;
  void *pvVar3;
  uint uVar4;
  ulong uVar5;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    uVar4 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x18);
      pbVar2 = *(byte **)(lVar1 + (ulong)uVar4 * 8);
      if (pbVar2 == (byte *)0x0) goto LAB_00cc74dc;
      if (*(void **)(pbVar2 + 0x38) != (void *)0x0) {
        operator_delete__(*(void **)(pbVar2 + 0x38));
        pbVar2[0x30] = 0;
        pbVar2[0x31] = 0;
        pbVar2[0x32] = 0;
        pbVar2[0x33] = 0;
        pbVar2[0x34] = 0;
        pbVar2[0x35] = 0;
        pbVar2[0x36] = 0;
        pbVar2[0x37] = 0;
        pbVar2[0x38] = 0;
        pbVar2[0x39] = 0;
        pbVar2[0x3a] = 0;
        pbVar2[0x3b] = 0;
        pbVar2[0x3c] = 0;
        pbVar2[0x3d] = 0;
        pbVar2[0x3e] = 0;
        pbVar2[0x3f] = 0;
      }
      if ((pbVar2[0x18] & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + 0x28));
      }
      if ((*pbVar2 & 1) != 0) {
        operator_delete(*(void **)(pbVar2 + 0x10));
      }
      operator_delete(pbVar2);
      *(undefined8 *)(*(long *)(param_1 + 0x18) + (ulong)uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x10));
  }
  lVar1 = *(long *)(param_1 + 0x18);
LAB_00cc74dc:
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    uVar4 = 0;
    do {
      lVar1 = *(long *)(param_1 + 0x28);
      pvVar3 = *(void **)(lVar1 + (ulong)uVar4 * 8);
      if (pvVar3 == (void *)0x0) goto LAB_00cc752c;
      uVar5 = (ulong)uVar4;
      FUN_00cc972c(pvVar3);
      operator_delete(pvVar3);
      uVar4 = uVar4 + 1;
      *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar5 * 8) = 0;
    } while (uVar4 < *(uint *)(param_1 + 0x20));
  }
  lVar1 = *(long *)(param_1 + 0x28);
LAB_00cc752c:
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_00cc7548(uint *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 2);
  if (lVar1 != 0) {
    if (*param_1 != 0) {
      lVar2 = (ulong)*param_1 * 0xf8;
      do {
        FUN_00ccb680(lVar1);
        lVar2 = lVar2 + -0xf8;
        lVar1 = lVar1 + 0xf8;
      } while (lVar2 != 0);
    }
    *param_1 = 0;
  }
  FUN_00e70314(param_1 + 4);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}




void FUN_00cc75b0(void)

{
  FUN_00cc75c4("*KindredSkinManifest*","build://Progression/KindredSkinManifest.def");
  return;
}




void FUN_00cc75c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




long FUN_00cc7618(char *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  plVar2 = (long *)FUN_00cc75c4("*KindredSkinManifest*",
                                "build://Progression/KindredSkinManifest.def");
  puVar3 = *(undefined8 **)*plVar2;
  plVar2 = (long *)*plVar2;
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar1 = strcmp((char *)*puVar3,param_1);
    if (iVar1 == 0) break;
    puVar3 = (undefined8 *)plVar2[1];
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}




void FUN_00cc767c(int *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  int local_40 [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)FUN_00cc75c4("*KindredSkinManifest*",
                                "build://Progression/KindredSkinManifest.def");
  puVar4 = *(undefined8 **)*plVar2;
  plVar2 = (long *)*plVar2;
  do {
    if (puVar4 == (undefined8 *)0x0) {
      lVar3 = 0;
LAB_00cc76f4:
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(lVar3);
    }
    thunk_FUN_00d9ff34(local_40,*puVar4);
    if (local_40[0] == *param_1) {
      lVar3 = *plVar2;
      goto LAB_00cc76f4;
    }
    puVar4 = (undefined8 *)plVar2[1];
    plVar2 = plVar2 + 1;
  } while( true );
}




undefined8 FUN_00cc771c(byte *param_1)

{
  byte *pbVar1;
  void *pvVar2;
  byte *pbVar3;
  long lVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uVar8 = 0;
  uVar7 = *(ulong *)(param_1 + 8);
  pbVar3 = *(byte **)(param_1 + 0x10);
  if ((*param_1 & 1) == 0) {
    pbVar3 = param_1 + 1;
    uVar7 = (ulong)(*param_1 >> 1);
  }
  if (9 < (long)uVar7) {
    pbVar1 = pbVar3 + uVar7;
    pbVar6 = pbVar3;
    do {
      if ((uVar7 - 9 == 0) || (pbVar6 = memchr(pbVar6,99,uVar7 - 9), pbVar6 == (byte *)0x0)) break;
      iVar5 = memcmp(pbVar6,"card_skin_",10);
      if (iVar5 == 0) {
        if (pbVar6 != pbVar1) {
          uVar8 = 0;
          if (pbVar6 == pbVar3) {
            FUN_0093ddb0(local_78,param_1,10,0xffffffffffffffff,param_1);
            FUN_008fcdb8(local_60,local_78);
            if ((local_78[0] & 1) != 0) {
              operator_delete(local_68);
            }
            pvVar2 = (void *)((ulong)local_60 | 1);
            if ((local_60[0] & 1) != 0) {
              pvVar2 = local_50;
            }
            uVar8 = FUN_00cc7618(pvVar2);
            if ((local_60[0] & 1) != 0) {
              operator_delete(local_50);
            }
          }
          goto LAB_00cc7838;
        }
        break;
      }
      pbVar6 = pbVar6 + 1;
      uVar7 = (long)pbVar1 - (long)pbVar6;
    } while (9 < (long)uVar7);
    uVar8 = 0;
  }
LAB_00cc7838:
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long FUN_00cc7868(char *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  plVar2 = (long *)FUN_00cc75c4("*KindredSkinManifest*",
                                "build://Progression/KindredSkinManifest.def");
  lVar3 = *(long *)*plVar2;
  plVar2 = (long *)*plVar2;
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    iVar1 = strcmp(*(char **)(lVar3 + 0x10),param_1);
    if ((iVar1 == 0) && (*(int *)(*plVar2 + 0x20) == 0)) break;
    lVar3 = plVar2[1];
    plVar2 = plVar2 + 1;
  }
  return *plVar2;
}




void FUN_00cc78d0(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00e7051c(param_1,&DAT_03210450);
  if (*(int *)(param_2 + 0x20) == 0) {
    pcVar2 = "CHAR_INFO_DEFAULT_SKIN";
  }
  else {
    pcVar2 = *(char **)(param_2 + 0x18);
  }
  uVar3 = FUN_00e6ce7c(pcVar2,0);
  FUN_00910394(param_1,uVar3);
  if ((param_3 & 1) != 0) {
    if (*(char *)(param_2 + 0x34) == '\0') {
      if (*(char *)(param_2 + 0x35) == '\0') goto LAB_00cc79f8;
      FUN_00e705c8(&local_48," (");
      FUN_00e70c34(param_1,&local_48);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
      pcVar2 = "MENU_SKINS_SPECIAL_EDITION_SHORT_NAME";
    }
    else {
      FUN_00e705c8(&local_48," (");
      FUN_00e70c34(param_1,&local_48);
      if (local_40 != (void *)0x0) {
        operator_delete__(local_40);
        local_48 = 0;
        local_40 = (void *)0x0;
      }
      pcVar2 = "MENU_SKINS_LIMITED_EDITION_SHORT_NAME";
    }
    uVar3 = FUN_00e6ce7c(pcVar2,0);
    FUN_00e70c34(param_1,uVar3);
    FUN_00e705c8(&local_48,&DAT_01e2fd76);
    FUN_00e70c34(param_1,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
LAB_00cc79f8:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc7a20(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00e7051c(param_1,&DAT_03210450);
  lVar2 = FUN_00cc7618(param_2);
  if (lVar2 != 0) {
    FUN_00cc78d0(&local_48,lVar2,param_3 & 1);
    FUN_00910394(param_1,&local_48);
    if (local_40 != (void *)0x0) {
      operator_delete__(local_40);
      local_48 = 0;
      local_40 = (void *)0x0;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc7ab8(void)

{
  FUN_00cc7acc("*KindredCardManifest*","build://Progression/KindredCardManifest.def");
  return;
}




void FUN_00cc7acc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_01988718();
  lVar2 = FUN_01987114(uVar1,0,param_1,0);
  if (lVar2 == 0) {
    FUN_01988700(0,param_2);
    uVar1 = FUN_01988718();
    FUN_01987114(uVar1,0,param_1,0);
  }
  return;
}




long FUN_00cc7b20(byte *param_1)

{
  byte *pbVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  undefined8 *puVar5;
  byte *__s2;
  long lVar6;
  byte *pbVar7;
  byte *__s1;
  long *plVar8;
  long lVar9;
  
  puVar5 = (undefined8 *)
           FUN_00cc7acc("*KindredCardManifest*","build://Progression/KindredCardManifest.def");
  plVar8 = (long *)*puVar5;
  lVar9 = *plVar8;
  if (lVar9 != 0) {
    pbVar1 = param_1 + 1;
    do {
      bVar3 = *param_1;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_1 + 8);
      }
      sVar2 = (ulong)(DAT_0320ffa8 >> 1);
      if ((DAT_0320ffa8 & 1) != 0) {
        sVar2 = DAT_0320ffb0;
      }
      if (__n == sVar2) {
        __s1 = *(byte **)(param_1 + 0x10);
        pbVar7 = pbVar1;
        if ((bVar3 & 1) != 0) {
          pbVar7 = __s1;
        }
        __s2 = DAT_0320ffb8;
        if ((DAT_0320ffa8 & 1) == 0) {
          __s2 = &DAT_0320ffa9;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar1;
            do {
              if (*pbVar7 != *__s2) goto LAB_00cc7bf4;
              pbVar7 = pbVar7 + 1;
              lVar6 = lVar6 + 1;
              __s2 = __s2 + 1;
            } while (lVar6 != 0);
          }
        }
        else if ((__n != 0) && (iVar4 = memcmp(pbVar7,__s2,__n), iVar4 != 0)) goto LAB_00cc7c00;
      }
      else {
LAB_00cc7bf4:
        __s1 = pbVar1;
        if ((bVar3 & 1) != 0) {
          __s1 = *(byte **)(param_1 + 0x10);
        }
LAB_00cc7c00:
        iVar4 = strcmp((char *)__s1,*(char **)(lVar9 + 8));
        if (iVar4 == 0) {
          return *plVar8;
        }
      }
      plVar8 = plVar8 + 1;
      lVar9 = *plVar8;
    } while (lVar9 != 0);
  }
  return 0;
}




undefined8 * FUN_00cc7c38(void)

{
  return &DAT_0313db68;
}




undefined1 FUN_00cc7c44(void)

{
  return DAT_0313dba0;
}




undefined8 * FUN_00cc7c54(void)

{
  return &DAT_0313dba8;
}




void FUN_00cc7c60(undefined8 param_1)

{
  FUN_00cc7c74(&DAT_0313dba8,param_1);
  return;
}




byte * FUN_00cc7c74(uint *param_1,byte *param_2)

{
  ulong uVar1;
  size_t __n;
  byte *__s2;
  uint uVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *param_1;
  if (uVar2 != 0) {
    __n = *(size_t *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    lVar10 = *(long *)(param_1 + 2);
    uVar9 = 0;
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      __n = (ulong)(*param_2 >> 1);
    }
    do {
      pbVar8 = (byte *)(lVar10 + uVar9 * 0xf8);
      bVar3 = *pbVar8;
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(pbVar8 + 8);
      }
      if (uVar1 == __n) {
        pbVar7 = *(byte **)(lVar10 + uVar9 * 0xf8 + 0x10);
        if ((bVar3 & 1) == 0) {
          pbVar7 = pbVar8 + 1;
        }
        if ((bVar3 & 1) == 0) {
          if (__n == 0) {
            return pbVar8;
          }
          lVar6 = -(ulong)(bVar3 >> 1);
          pbVar7 = __s2;
          pbVar5 = pbVar8;
          while (pbVar5 = pbVar5 + 1, *pbVar5 == *pbVar7) {
            lVar6 = lVar6 + 1;
            pbVar7 = pbVar7 + 1;
            if (lVar6 == 0) {
              return pbVar8;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar8;
          }
          iVar4 = memcmp(pbVar7,__s2,__n);
          if (iVar4 == 0) {
            return pbVar8;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar2);
  }
  return (byte *)0x0;
}




void FUN_00cc7d60(undefined8 param_1,byte *param_2,int *param_3)

{
  long lVar1;
  char *pcVar2;
  byte bVar3;
  byte *pbVar4;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*param_3 == 0) {
    if (param_3[2] == 0) {
      if (param_3[1] == 0) {
        FUN_008fcdb8(param_1,&DAT_0320ffa8);
        goto LAB_00cc7df0;
      }
      bVar3 = *param_2;
      pbVar4 = *(byte **)(param_2 + 0x10);
      pcVar2 = "%s_SILVER_%d";
    }
    else {
      bVar3 = *param_2;
      pbVar4 = *(byte **)(param_2 + 0x10);
      pcVar2 = "%s_OPAL_%d";
    }
  }
  else {
    bVar3 = *param_2;
    pbVar4 = *(byte **)(param_2 + 0x10);
    pcVar2 = "%s_ICE_%d";
  }
  if ((bVar3 & 1) == 0) {
    pbVar4 = param_2 + 1;
  }
  FUN_00e6a8a8(auStack_138,pcVar2,pbVar4);
  FUN_008fa54c(param_1,auStack_138);
LAB_00cc7df0:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cc7e2c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auStack_1d8 [16];
  byte local_1c8 [16];
  void *local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  byte local_180 [16];
  void *local_170;
  undefined8 local_168;
  void *local_160;
  undefined8 local_158;
  void *local_150;
  undefined4 local_148;
  undefined1 auStack_140 [8];
  int local_138;
  long local_130;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  FUN_00976588(auStack_140);
  FUN_008fa718(param_1);
  if (((param_2 != 0) &&
      (uVar3 = FUN_0096bf64(param_2,auStack_140), lVar2 = local_130, (uVar3 & 1) != 0)) &&
     (local_138 != 0)) {
    FUN_00978240(auStack_1d8,local_130 + 8);
    FUN_008fcdb8(local_1c8,lVar2 + 0x18);
    uStack_188 = *(undefined8 *)(lVar2 + 0x58);
    local_190 = *(undefined8 *)(lVar2 + 0x50);
    uStack_198 = *(undefined8 *)(lVar2 + 0x48);
    local_1a0 = *(undefined8 *)(lVar2 + 0x40);
    uStack_1a8 = *(undefined8 *)(lVar2 + 0x38);
    local_1b0 = *(undefined8 *)(lVar2 + 0x30);
    FUN_008fcdb8(local_180,lVar2 + 0x60);
    thunk_FUN_00e7051c(&local_168,lVar2 + 0x78);
    thunk_FUN_00e7051c(&local_158,lVar2 + 0x88);
    local_148 = *(undefined4 *)(lVar2 + 0x98);
    FUN_008fce60(param_1,local_130 + 0x18);
    uVar4 = *(undefined8 *)(local_130 + 0x50);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(local_130 + 0x58);
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    uVar4 = *(undefined8 *)(local_130 + 0x40);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(local_130 + 0x48);
    *(undefined8 *)(param_1 + 0x28) = uVar4;
    uVar4 = *(undefined8 *)(local_130 + 0x30);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(local_130 + 0x38);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
      local_158 = 0;
      local_150 = (void *)0x0;
    }
    if (local_160 != (void *)0x0) {
      operator_delete__(local_160);
      local_168 = 0;
      local_160 = (void *)0x0;
    }
    if ((local_180[0] & 1) != 0) {
      operator_delete(local_170);
    }
    if ((local_1c8[0] & 1) != 0) {
      operator_delete(local_1b8);
    }
    FUN_00977ea0(auStack_1d8,1);
  }
  FUN_009767f4(auStack_140);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




byte * FUN_00cc7fb8(byte *param_1)

{
  size_t __n;
  byte *__s2;
  byte bVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  byte *__s1;
  byte *pbVar6;
  uint uVar7;
  
  lVar3 = DAT_0313db80;
  uVar2 = (uint)DAT_0313db78;
  if ((DAT_0313dba0 != '\0') && ((uint)DAT_0313db78 != 0)) {
    __n = *(size_t *)(param_1 + 8);
    __s2 = *(byte **)(param_1 + 0x10);
    uVar7 = 0;
    if ((*param_1 & 1) == 0) {
      __s2 = param_1 + 1;
      __n = (ulong)(*param_1 >> 1);
    }
    do {
      pbVar6 = *(byte **)(lVar3 + (ulong)uVar7 * 8);
      if (pbVar6 == (byte *)0x0) {
        return (byte *)0x0;
      }
      bVar1 = *pbVar6;
      uVar5 = (ulong)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        uVar5 = *(ulong *)(pbVar6 + 8);
      }
      if (uVar5 == __n) {
        __s1 = *(byte **)(pbVar6 + 0x10);
        if ((bVar1 & 1) == 0) {
          __s1 = pbVar6 + 1;
        }
        if ((bVar1 & 1) == 0) {
          if (__n == 0) {
            return pbVar6;
          }
          uVar5 = 0;
          while (pbVar6[uVar5 + 1] == __s2[uVar5]) {
            uVar5 = uVar5 + 1;
            if (bVar1 >> 1 == uVar5) {
              return pbVar6;
            }
          }
        }
        else {
          if (__n == 0) {
            return pbVar6;
          }
          iVar4 = memcmp(__s1,__s2,__n);
          if (iVar4 == 0) {
            return pbVar6;
          }
        }
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar2);
  }
  return (byte *)0x0;
}

