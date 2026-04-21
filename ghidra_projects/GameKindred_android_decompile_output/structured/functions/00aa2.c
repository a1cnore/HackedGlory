// functions/00aa2 — 30 functions
#include "libGameKindred.h"




void FUN_00aa2034(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aa203c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x388))();
  return;
}




void FUN_00aa2040(undefined8 param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50,param_1);
  FUN_008fce60(param_2 + 0x68,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  pvVar2 = operator_new(0x1878);
  FUN_00cbd79c();
  *(void **)(param_2 + 0x80) = pvVar2;
  FUN_00affc48(DAT_03139948,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(param_2 + 0x80));
}




void FUN_00aa20e0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00aa20e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x390))();
  return;
}




void FUN_00aa20ec(void)

{
  FUN_009b8d90();
  FUN_009bba7c();
  return;
}




void FUN_00aa2100(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d1940;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00948d58(param_1);
  return;
}




void FUN_00aa2140(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d1940;
  if ((*(byte *)(param_1 + 3) & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00948d58(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00aa2188(void)

{
  return;
}




void FUN_00aa218c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte local_78 [16];
  void *local_68;
  ulong local_60 [2];
  void *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = 0;
  local_60[1] = 0;
  local_60[0] = 0;
  local_48 = 0;
  local_50 = (void *)0x0;
  FUN_008fa54c(local_78);
  FUN_008fce60(local_60,local_78);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  local_48 = param_3;
  local_40 = param_4;
  FUN_00aa2230(param_1 + 8,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa2230(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
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
    FUN_00aa2400(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x28;
  FUN_008fcdb8(lVar4 + -0x28,param_2);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




undefined8 FUN_00aa22cc(undefined8 *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *__s2;
  long lVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  
  if (*(int *)(param_1 + 1) != 0) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      pbVar4 = (byte *)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18);
      if ((*pbVar4 & 1) == 0) {
        pbVar4 = pbVar4 + 1;
      }
      else {
        pbVar4 = *(byte **)(*(long *)(param_2 + 2) + (ulong)(*param_2 - 1) * 0x18 + 0x10);
      }
      lVar3 = param_1[2];
      if ((*(byte *)(lVar3 + lVar5) & 1) == 0) {
        __s2 = (char *)(lVar3 + lVar5 + 1);
      }
      else {
        __s2 = *(char **)(lVar3 + lVar5 + 0x10);
      }
      iVar1 = strcasecmp((char *)pbVar4,__s2);
      if (iVar1 == 0) {
        FUN_00aa23b8(param_2);
                    /* WARNING: Could not recover jumptable at 0x00aa23b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(param_1[2] + lVar5 + 0x20))
                          (*(undefined8 *)(param_1[2] + lVar5 + 0x18),param_2);
        return uVar2;
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x28;
    } while (uVar6 < *(uint *)(param_1 + 1));
  }
  (**(code **)*param_1)(param_1,param_2);
  return 0;
}




void FUN_00aa23b8(uint *param_1)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *param_1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)uVar1 * 0x18;
  if ((*(byte *)(lVar2 + -0x18) & 1) != 0) {
    operator_delete(*(void **)(lVar2 + -8));
    uVar1 = *param_1;
  }
  *param_1 = uVar1 - 1;
  return;
}




void FUN_00aa2400(uint *param_1,uint param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined8 uVar7;
  
  if (param_1[1] < param_2) {
    pvVar1 = operator_new__((ulong)param_2 * 0x28);
    pvVar2 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar6 = (void *)((long)pvVar2 + (ulong)*param_1 * 0x28);
      pvVar5 = pvVar1;
      do {
        FUN_008fcdb8(pvVar5,pvVar2);
        puVar3 = (undefined8 *)((long)pvVar2 + 0x20);
        uVar7 = *(undefined8 *)((long)pvVar2 + 0x18);
        pvVar2 = (void *)((long)pvVar2 + 0x28);
        *(undefined8 *)((long)pvVar5 + 0x20) = *puVar3;
        *(undefined8 *)((long)pvVar5 + 0x18) = uVar7;
        pvVar5 = (void *)((long)pvVar5 + 0x28);
      } while (pvVar2 != pvVar6);
      pvVar2 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar4 = (ulong)*param_1 * 0x28;
        puVar3 = (undefined8 *)((long)pvVar2 + 0x10);
        do {
          if ((*(byte *)(puVar3 + -2) & 1) != 0) {
            operator_delete((void *)*puVar3);
          }
          lVar4 = lVar4 + -0x28;
          puVar3 = puVar3 + 5;
        } while (lVar4 != 0);
        pvVar2 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar2 != (void *)0x0) {
      operator_delete__(pvVar2);
    }
    *(void **)(param_1 + 2) = pvVar1;
  }
  return;
}




void FUN_00aa24dc(undefined8 param_1)

{
  long lVar1;
  undefined8 local_40;
  code *pcStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  pcStack_38 = thunk_FUN_00aa2fc4;
  local_40 = 0;
  DAT_03133c50 = param_1;
  FUN_00f02e98(0xbf800000,&local_40,0,1);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa254c(void)

{
  long lVar1;
  undefined8 local_40;
  code *pcStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  DAT_03133c50 = 0;
  pcStack_38 = thunk_FUN_00aa2fc4;
  local_40 = 0;
  FUN_00f03390(&local_40);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa25b0(char *param_1,uint param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  byte local_c0 [16];
  void *local_b0;
  undefined8 local_a8;
  void *local_a0;
  ulong local_98 [2];
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  ulong local_68 [2];
  void *local_58;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if ((((param_1 != (char *)0x0) && (uVar4 = FUN_00e6a488(param_1), (uVar4 & 1) == 0)) &&
      (pcVar5 = strchr(param_1,0x3a), pcVar5 != (char *)0x0)) &&
     (iVar3 = FUN_00e6a594(pcVar5,"://",3), iVar3 == 0)) {
    uVar4 = FUN_00aa27d8(param_1);
    if ((uVar4 & 1) == 0) {
      FUN_00aa2824(param_1,0);
    }
    else {
      FUN_008fa54c(local_50,param_1);
      uVar4 = FUN_009580c4();
      if ((uVar4 & 1) != 0) {
        local_68[0] = 0;
        local_68[1] = 0;
        local_58 = (void *)0x0;
        uVar4 = FUN_00e81200(local_68);
        if ((uVar4 & 1) != 0) {
          FUN_008fa54c(local_80,"[PLAYER_UUID]");
          FUN_00937db8(local_50,local_80,local_68);
          if (((byte)local_80[0] & 1) != 0) {
            operator_delete(local_70);
          }
        }
        local_80[0] = 0;
        local_80[1] = 0;
        local_70 = (void *)0x0;
        uVar4 = FUN_00e8121c(local_80);
        if ((uVar4 & 1) != 0) {
          FUN_008fa54c(local_98,"[PLAYER_SESSION_TOKEN]");
          FUN_00937db8(local_50,local_98,local_80);
          if (((byte)local_98[0] & 1) != 0) {
            operator_delete(local_88);
          }
        }
        FUN_009580b8();
        uVar6 = FUN_0095fdf0();
        thunk_FUN_00e7051c(&local_a8,uVar6);
        local_98[0] = 0;
        local_98[1] = 0;
        local_88 = (void *)0x0;
        FUN_00e70a24(&local_a8,local_98);
        FUN_008fa54c(local_c0,"[PLAYER_NAME]");
        FUN_00937db8(local_50,local_c0,local_98);
        if ((local_c0[0] & 1) != 0) {
          operator_delete(local_b0);
        }
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        if ((local_68[0] & 1) != 0) {
          operator_delete(local_58);
        }
      }
      uVar4 = FUN_0092e990();
      if ((((uVar4 & 1) == 0) || ((param_2 & 1) == 0)) && (iVar3 = FUN_0092f28c(), iVar3 != 1)) {
        FUN_00aa28a0(local_50);
      }
      else {
        pvVar1 = (void *)((ulong)local_50 | 1);
        if ((local_50[0] & 1) != 0) {
          pvVar1 = local_40;
        }
        FUN_00aa2824(pvVar1,param_2 & 1);
      }
      if ((local_50[0] & 1) != 0) {
        operator_delete(local_40);
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong FUN_00aa27d8(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = FUN_00e6a594(param_1,"vainglory://",0xc);
  if ((int)uVar2 != 0) {
    iVar1 = FUN_00e6a594(param_1,"video://",8);
    uVar2 = (ulong)(iVar1 != 0);
  }
  return uVar2;
}




void FUN_00aa2824(undefined8 param_1,byte param_2)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,param_1);
  FUN_008fce60(&DAT_03133c70,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  DAT_03133c8c = param_2 & 1;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa28a0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined8 local_58;
  void *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(&DAT_03133c58,param_1);
  lVar2 = FUN_009580b8();
  if (*(int *)(lVar2 + 0x55dc) == 2) {
    uVar3 = FUN_00e6ce7c("MENU_DIALOG_OPEN_URL_OUT_OF_APP_TITLE",0);
    uVar4 = FUN_00e6ce7c("MENU_DIALOG_OPEN_URL_OUT_OF_APP_MSG",0);
    uVar5 = FUN_00e6ce7c("GENERIC_DIALOG_OPEN",0);
    uVar6 = FUN_00e6ce7c("GENERIC_DIALOG_CANCEL",0);
    FUN_00a9b94c(uVar3,uVar4,uVar5,uVar6,0,FUN_00aa2f1c,FUN_00aa2f98);
  }
  else {
    uVar3 = FUN_00e6ce7c("MENU_NEWS_TILE_LEAVE_APP_BUTTON",0);
    thunk_FUN_00e7051c(&local_48,uVar3);
    uVar3 = FUN_00e6ce7c("MENU_EXTERNAL_LINK_CONFIRMATION",0);
    thunk_FUN_00e7051c(&local_58,uVar3);
    FUN_00e705c8(&local_68,"[URL]");
    FUN_00e70570(&local_78,&DAT_03133c58);
    FUN_00e71248(&local_58,0,&local_68,&local_78);
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
    uVar3 = FUN_00e6ce7c("GENERIC_DIALOG_YES",0);
    uVar4 = FUN_00e6ce7c("GENERIC_DIALOG_NO",0);
    FUN_00a9b94c(&local_48,&local_58,uVar3,uVar4,0,FUN_00aa2f1c,FUN_00aa2f98);
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
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_00aa2a7c(void)

{
  ulong uVar1;
  
  uVar1 = (ulong)((byte)DAT_03133c70 >> 1);
  if (((byte)DAT_03133c70 & 1) != 0) {
    uVar1 = DAT_03133c78;
  }
  return uVar1 != 0;
}




void FUN_00aa2aa4(void)

{
  if (DAT_03133c88 != '\0') {
    return;
  }
  DAT_03133c88 = 1;
  return;
}




void FUN_00aa2ac0(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0092e990();
  if (((uVar1 & 1) != 0) && ((param_2 & 1) != 0)) {
    FUN_00cc3040(param_1,&DAT_03218f18);
    return;
  }
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454(param_1);
    return;
  }
  return;
}




void FUN_00aa2b1c(undefined8 param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00ec544c();
  if ((uVar1 & 1) != 0) {
    FUN_00ec5454(param_1);
    return;
  }
  return;
}




void FUN_00aa2b50(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_40,param_1 + 8);
  uVar2 = FUN_009b8d90();
  FUN_009ba5d4(uVar2,local_40,1,1,2);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa2bc4(long param_1)

{
  long lVar1;
  char *pcVar2;
  long lVar3;
  char *__s;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  ulong local_a0;
  undefined8 uStack_98;
  void *local_90;
  byte local_88 [16];
  void *local_78;
  undefined8 local_70;
  long lStack_68;
  ulong local_60;
  undefined8 uStack_58;
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_50 = (void *)0x0;
  lStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  local_60 = 0;
  FUN_008fa54c(local_88,param_1);
  FUN_008fce60(&local_60,local_88);
  if ((local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  __s = (char *)(param_1 + 0xc);
  iVar6 = -1;
  iVar4 = 1;
  pcVar2 = __s;
  do {
    if (*pcVar2 == '/') {
      iVar4 = iVar4 + 1;
      iVar6 = -1;
    }
    else {
      if (*pcVar2 == '\0') break;
      iVar6 = 0;
    }
    pcVar2 = pcVar2 + 1;
  } while( true );
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (void *)0x0;
  FUN_00aa2da0(&local_70,iVar6 + iVar4,&local_a0);
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
  lVar3 = DAT_03133c50;
  if ((0 < iVar6 + iVar4) && (*__s != '\0')) {
    uVar7 = (iVar6 + iVar4) - 1;
    lVar5 = (ulong)uVar7 * 0x18;
    while (pcVar2 = strchr(__s,0x2f), pcVar2 != (char *)0x0) {
      FUN_00aa2e84(local_88,__s,(long)pcVar2 - (long)__s);
      FUN_008fce60(lStack_68 + lVar5,local_88);
      if ((local_88[0] & 1) != 0) {
        operator_delete(local_78);
      }
      __s = pcVar2 + 1;
      lVar3 = DAT_03133c50;
      if (((int)uVar7 < 1) || (lVar5 = lVar5 + -0x18, uVar7 = uVar7 - 1, *__s == '\0'))
      goto joined_r0x00aa2d40;
    }
    FUN_008fa54c(local_88,__s);
    FUN_008fce60(lStack_68 + lVar5,local_88);
    lVar3 = DAT_03133c50;
    if ((local_88[0] & 1) != 0) {
      operator_delete(local_78);
      lVar3 = DAT_03133c50;
    }
  }
joined_r0x00aa2d40:
  while ((lVar3 != 0 && ((int)local_70 != 0))) {
    lVar3 = FUN_00aa22cc(lVar3,&local_70);
  }
  if ((local_60 & 1) != 0) {
    operator_delete(local_50);
  }
  FUN_00951534(&local_70,1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00aa2da0(uint *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if (param_2 != 0) {
    if (param_1[1] < param_2) {
      FUN_009511d8(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < param_2) {
      lVar2 = (ulong)uVar1 * 0x18;
      lVar4 = (ulong)param_2 - (ulong)uVar1;
      do {
        FUN_008fcdb8(*(long *)(param_1 + 2) + lVar2,param_3);
        lVar4 = lVar4 + -1;
        lVar2 = lVar2 + 0x18;
      } while (lVar4 != 0);
      uVar1 = *param_1;
    }
    if (param_2 < uVar1) {
      lVar2 = (ulong)uVar1 * 0x18 + (ulong)param_2 * -0x18;
      puVar3 = (undefined8 *)(*(long *)(param_1 + 2) + (ulong)param_2 * 0x18 + 0x10);
      do {
        if ((*(byte *)(puVar3 + -2) & 1) != 0) {
          operator_delete((void *)*puVar3);
        }
        lVar2 = lVar2 + -0x18;
        puVar3 = puVar3 + 3;
      } while (lVar2 != 0);
    }
    *param_1 = param_2;
    return;
  }
  FUN_00951534(param_1);
  return;
}




void FUN_00aa2e84(ulong *param_1,undefined1 *param_2,ulong param_3)

{
  undefined1 *__src;
  void *__dest;
  ulong uVar1;
  
  __src = &DAT_01e277f2;
  if (param_2 != (undefined1 *)0x0) {
    __src = param_2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_3 < 0x17) {
    __dest = (void *)((long)param_1 + 1);
    *(char *)param_1 = (char)((int)param_3 << 1);
    if (param_3 == 0) goto LAB_00aa2f04;
  }
  else {
    uVar1 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar1);
    param_1[1] = param_3;
    param_1[2] = (ulong)__dest;
    *param_1 = uVar1 | 1;
  }
  memcpy(__dest,__src,param_3);
LAB_00aa2f04:
  *(undefined1 *)((long)__dest + param_3) = 0;
  return;
}




void FUN_00aa2f1c(void)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  uVar1 = (ulong)((byte)DAT_03133c58 >> 1);
  if (((ushort)DAT_03133c58 & 1) != 0) {
    uVar1 = DAT_03133c60;
  }
  if (uVar1 != 0) {
    uVar3 = FUN_009580b8();
    FUN_009606dc(uVar3,0);
    puVar2 = DAT_03133c68;
    if (((ushort)DAT_03133c58 & 1) == 0) {
      puVar2 = (undefined1 *)((long)&DAT_03133c58 + 1);
    }
    FUN_00aa2824(puVar2,0);
    if (((ushort)DAT_03133c58 & 1) == 0) {
      DAT_03133c58._0_2_ = 0;
    }
    else {
      *DAT_03133c68 = 0;
      DAT_03133c60 = 0;
    }
  }
  return;
}




void FUN_00aa2f98(void)

{
  if (((ushort)DAT_03133c58 & 1) == 0) {
    DAT_03133c58._0_2_ = 0;
    return;
  }
  *DAT_03133c68 = 0;
  DAT_03133c60 = 0;
  return;
}




void FUN_00aa2fc4(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (ulong)((byte)DAT_03133c70 >> 1);
  if (((ushort)DAT_03133c70 & 1) != 0) {
    uVar3 = DAT_03133c78;
  }
  if (DAT_03133c88 == '\0') {
    return;
  }
  if (uVar3 == 0) {
    return;
  }
  puVar1 = DAT_03133c80;
  if (((ushort)DAT_03133c70 & 1) == 0) {
    puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
  }
  iVar2 = FUN_00e6a594(puVar1,"http://",7);
  if (iVar2 != 0) {
    puVar1 = DAT_03133c80;
    if (((ushort)DAT_03133c70 & 1) == 0) {
      puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
    }
    iVar2 = FUN_00e6a594(puVar1,"https://",8);
    if (iVar2 != 0) {
      puVar1 = DAT_03133c80;
      if (((ushort)DAT_03133c70 & 1) == 0) {
        puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
      }
      iVar2 = FUN_00e6a594(puVar1,"twitch://",9);
      puVar1 = DAT_03133c80;
      if (((ushort)DAT_03133c70 & 1) == 0) {
        puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
      }
      if (iVar2 == 0) {
        uVar3 = FUN_00ec544c();
        if ((uVar3 & 1) != 0) {
          FUN_00ec5454(puVar1);
        }
      }
      else {
        iVar2 = FUN_00e6a594(puVar1,"video://",8);
        puVar1 = DAT_03133c80;
        if (((ushort)DAT_03133c70 & 1) == 0) {
          puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
        }
        if (iVar2 == 0) {
          FUN_00aa2b50(puVar1);
        }
        else {
          iVar2 = FUN_00e6a594(puVar1,"vainglory://",0xc);
          if (iVar2 == 0) {
            puVar1 = DAT_03133c80;
            if (((ushort)DAT_03133c70 & 1) == 0) {
              puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
            }
            FUN_00aa2bc4(puVar1);
          }
        }
      }
      goto LAB_00aa30e8;
    }
  }
  puVar1 = DAT_03133c80;
  if (((ushort)DAT_03133c70 & 1) == 0) {
    puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
  }
  FUN_00aa2ac0(puVar1,DAT_03133c8c);
LAB_00aa30e8:
  if (((ushort)DAT_03133c70 & 1) == 0) {
    DAT_03133c70._0_2_ = 0;
  }
  else {
    *DAT_03133c80 = 0;
    DAT_03133c78 = 0;
  }
  DAT_03133c8c = 0;
  return;
}




void thunk_FUN_00aa2fc4(void)

{
  undefined1 *puVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = (ulong)((byte)DAT_03133c70 >> 1);
  if (((ushort)DAT_03133c70 & 1) != 0) {
    uVar3 = DAT_03133c78;
  }
  if (DAT_03133c88 == '\0') {
    return;
  }
  if (uVar3 == 0) {
    return;
  }
  puVar1 = DAT_03133c80;
  if (((ushort)DAT_03133c70 & 1) == 0) {
    puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
  }
  iVar2 = FUN_00e6a594(puVar1,"http://",7);
  if (iVar2 != 0) {
    puVar1 = DAT_03133c80;
    if (((ushort)DAT_03133c70 & 1) == 0) {
      puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
    }
    iVar2 = FUN_00e6a594(puVar1,"https://",8);
    if (iVar2 != 0) {
      puVar1 = DAT_03133c80;
      if (((ushort)DAT_03133c70 & 1) == 0) {
        puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
      }
      iVar2 = FUN_00e6a594(puVar1,"twitch://",9);
      puVar1 = DAT_03133c80;
      if (((ushort)DAT_03133c70 & 1) == 0) {
        puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
      }
      if (iVar2 == 0) {
        uVar3 = FUN_00ec544c();
        if ((uVar3 & 1) != 0) {
          FUN_00ec5454(puVar1);
        }
      }
      else {
        iVar2 = FUN_00e6a594(puVar1,"video://",8);
        puVar1 = DAT_03133c80;
        if (((ushort)DAT_03133c70 & 1) == 0) {
          puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
        }
        if (iVar2 == 0) {
          FUN_00aa2b50(puVar1);
        }
        else {
          iVar2 = FUN_00e6a594(puVar1,"vainglory://",0xc);
          if (iVar2 == 0) {
            puVar1 = DAT_03133c80;
            if (((ushort)DAT_03133c70 & 1) == 0) {
              puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
            }
            FUN_00aa2bc4(puVar1);
          }
        }
      }
      goto LAB_00aa30e8;
    }
  }
  puVar1 = DAT_03133c80;
  if (((ushort)DAT_03133c70 & 1) == 0) {
    puVar1 = (undefined1 *)((long)&DAT_03133c70 + 1);
  }
  FUN_00aa2ac0(puVar1,DAT_03133c8c);
LAB_00aa30e8:
  if (((ushort)DAT_03133c70 & 1) == 0) {
    DAT_03133c70._0_2_ = 0;
  }
  else {
    *DAT_03133c80 = 0;
    DAT_03133c78 = 0;
  }
  DAT_03133c8c = 0;
  return;
}

