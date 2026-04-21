// functions/00937 — 21 functions
#include "libGameKindred.h"




void FUN_00937044(undefined8 param_1)

{
  long lVar1;
  byte local_60 [16];
  void *local_50;
  undefined1 auStack_44 [4];
  ulong local_40 [2];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_40[0] = 0;
  local_40[1] = 0;
  local_30 = (void *)0x0;
  FUN_009376bc(local_40,auStack_44);
  FUN_0090dab8(local_60,"environment: ",local_40);
  FUN_008fcdb8(param_1,local_60);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009370dc(undefined8 param_1,undefined4 param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  FUN_00937044(local_178);
  pvVar1 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar1 = local_168;
  }
  FUN_00e6b92c(acStack_148,pvVar1,param_1,param_2);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009371ac(undefined8 param_1,undefined8 param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  FUN_00937044(local_178);
  pvVar1 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar1 = local_168;
  }
  FUN_00e6b960(param_1,acStack_148,pvVar1,param_2);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0093727c(undefined8 param_1,undefined8 param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  FUN_00937044(local_178);
  pvVar1 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar1 = local_168;
  }
  FUN_00e6b98c(acStack_148,pvVar1,param_1,param_2);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_0093734c(undefined8 param_1,uint param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  uint uVar3;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  FUN_00937044(local_178);
  pvVar1 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar1 = local_168;
  }
  uVar3 = FUN_00e6b838(acStack_148,pvVar1,param_1,param_2 & 1);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_00937424(undefined8 param_1,undefined4 param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  FUN_00937044(local_178);
  pvVar1 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar1 = local_168;
  }
  uVar3 = FUN_00e6b86c(acStack_148,pvVar1,param_1,param_2);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined1  [16] FUN_009374fc(undefined8 param_1,undefined8 param_2)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  FUN_00937044(local_178);
  pvVar1 = (void *)((ulong)local_178 | 1);
  if ((local_178[0] & 1) != 0) {
    pvVar1 = local_168;
  }
  auVar3 = FUN_00e6b898(param_1,acStack_148,pvVar1,param_2);
  uVar4 = auVar3._8_8_;
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    auVar3._8_8_ = uVar4;
    return auVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009375d4(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char *__src;
  void *pvVar1;
  long lVar2;
  byte local_188 [16];
  void *local_178;
  byte local_170 [16];
  char *local_160;
  char acStack_158 [256];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  FUN_00936f18(local_170);
  __src = (char *)((ulong)local_170 | 1);
  if ((local_170[0] & 1) != 0) {
    __src = local_160;
  }
  strcpy(acStack_158,__src);
  FUN_00937044(local_188);
  pvVar1 = (void *)((ulong)local_188 | 1);
  if ((local_188[0] & 1) != 0) {
    pvVar1 = local_178;
  }
  FUN_00e6b8ac(acStack_158,pvVar1,param_1,param_2,param_3,param_4);
  if ((local_188[0] & 1) != 0) {
    operator_delete(local_178);
  }
  if ((local_170[0] & 1) != 0) {
    operator_delete(local_160);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009376bc(undefined8 param_1,undefined4 *param_2)

{
  char *__src;
  long lVar1;
  undefined4 uVar2;
  byte local_1c0 [16];
  void *local_1b0;
  byte local_1a8 [16];
  void *local_198;
  byte local_190 [16];
  void *local_180;
  byte local_178 [16];
  void *local_168;
  byte local_160 [16];
  char *local_150;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_00937800(local_160);
  __src = (char *)((ulong)local_160 | 1);
  if ((local_160[0] & 1) != 0) {
    __src = local_150;
  }
  strcpy(acStack_148,__src);
  FUN_008fa54c(local_190,"Platform");
  FUN_008fa54c(local_1a8,"hostname");
  FUN_008fa54c(local_1c0,"platform.superevil.net");
  FUN_00e6bac8(local_178,acStack_148,local_190,local_1a8,local_1c0);
  FUN_008fce60(param_1,local_178);
  if ((local_178[0] & 1) != 0) {
    operator_delete(local_168);
  }
  if ((local_1c0[0] & 1) != 0) {
    operator_delete(local_1b0);
  }
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if ((local_190[0] & 1) != 0) {
    operator_delete(local_180);
  }
  uVar2 = FUN_00e6b86c(acStack_148,"Platform","port",8000);
  *param_2 = uVar2;
  if ((local_160[0] & 1) != 0) {
    operator_delete(local_150);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00937800(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t sVar6;
  ulong *puVar7;
  ulong uVar8;
  void *pvVar9;
  byte local_98 [16];
  void *local_88;
  ulong local_80 [2];
  void *local_70;
  byte local_68 [8];
  ulong local_60;
  void *local_58;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  uVar3 = FUN_00e70198(&DAT_0320ffc0,"--config");
  if ((uVar3 & 1) != 0) {
    uVar4 = FUN_00e70138(&DAT_0320ffc0,"--config");
    uVar3 = FUN_00e6af2c();
    if ((uVar3 & 1) != 0) {
      FUN_008fa54c(local_68,uVar4);
      FUN_008fce60(local_50,local_68);
      if ((local_68[0] & 1) != 0) {
        operator_delete(local_58);
      }
      FUN_008fcdb8(param_1,local_50);
      goto LAB_00937a18;
    }
  }
  FUN_008fa54c(local_68,"appdata://");
  FUN_0090de84(local_68,"Startup.ini",0xb);
  pvVar9 = (void *)((ulong)local_68 | 1);
  pvVar1 = pvVar9;
  if ((local_68[0] & 1) != 0) {
    pvVar1 = local_58;
  }
  uVar3 = FUN_00f1c888(pvVar1);
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_00e7012c(&DAT_0320ffc0,0);
    FUN_008fa54c(local_80,uVar4);
    FUN_008fce60(local_68,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    pvVar1 = pvVar9;
    uVar3 = (ulong)(local_68[0] >> 1);
    if ((local_68[0] & 1) != 0) {
      pvVar1 = local_58;
      uVar3 = local_60;
    }
    if (uVar3 == 0) {
LAB_00937980:
      uVar8 = 0;
    }
    else {
      do {
        uVar8 = uVar3;
        if (uVar8 == 0) goto LAB_00937980;
        uVar3 = uVar8 - 1;
      } while (*(char *)((long)pvVar1 + (uVar8 - 1)) != '/');
    }
    FUN_0093ddb0(local_98,local_68,0,uVar8,local_68);
    FUN_008fcdb8(local_80,local_98);
    FUN_008fce60(local_68,local_80);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
    if ((local_98[0] & 1) != 0) {
      operator_delete(local_88);
    }
    FUN_0090de84(local_68,"Startup.ini",0xb);
    if ((local_68[0] & 1) != 0) {
      pvVar9 = local_58;
    }
    uVar3 = FUN_00e6af2c(pvVar9);
    if ((uVar3 & 1) != 0) {
      puVar7 = (ulong *)local_68;
      goto LAB_00937a00;
    }
    pcVar5 = getenv("NUO_DEVROOT");
    if (pcVar5 == (char *)0x0) {
LAB_00937b0c:
      local_80[0] = 0;
      local_80[1] = 0;
      local_70 = (void *)0x0;
      pcVar5 = (char *)FUN_00e7012c(&DAT_0320ffc0,0);
      sVar6 = strlen(pcVar5);
      FUN_0090de84(local_80,pcVar5,sVar6);
      FUN_0090de84(local_80,"/",1);
      FUN_0090de84(local_80,"Startup.ini",0xb);
      pvVar1 = (void *)((ulong)local_80 | 1);
      if ((local_80[0] & 1) != 0) {
        pvVar1 = local_70;
      }
      uVar3 = FUN_00e6af2c(pvVar1);
      if ((uVar3 & 1) != 0) goto LAB_00937b84;
    }
    else {
      FUN_008fa54c(local_80,pcVar5);
      FUN_0093de70(local_80,0x2f);
      FUN_0090de84(local_80,"Projects",8);
      FUN_0093de70(local_80,0x2f);
      FUN_0090de84(local_80,"Kindred",7);
      FUN_0093de70(local_80,0x2f);
      FUN_0090de84(local_80,"Configure/",10);
      FUN_0090de84(local_80,"Startup.ini",0xb);
      pvVar1 = (void *)((ulong)local_80 | 1);
      if ((local_80[0] & 1) != 0) {
        pvVar1 = local_70;
      }
      uVar3 = FUN_00e6af2c(pvVar1);
      if ((uVar3 & 1) == 0) {
        if ((local_80[0] & 1) != 0) {
          operator_delete(local_70);
        }
        goto LAB_00937b0c;
      }
LAB_00937b84:
      FUN_008fce60(local_50,local_80);
    }
    FUN_008fcdb8(param_1,local_50);
    if ((local_80[0] & 1) != 0) {
      operator_delete(local_70);
    }
  }
  else {
    if ((local_68[0] & 1) != 0) {
      pvVar9 = local_58;
    }
    FUN_00f1c8ec(pvVar9,local_50);
    puVar7 = local_50;
LAB_00937a00:
    FUN_008fcdb8(param_1,puVar7);
  }
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
LAB_00937a18:
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00937bb4(byte *param_1)

{
  char *__src;
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  byte *__s2;
  long lVar5;
  byte *pbVar6;
  byte local_198 [16];
  void *local_188;
  byte local_180 [16];
  void *local_170;
  byte local_168 [16];
  char *local_158;
  byte local_150 [16];
  void *local_140;
  char acStack_138 [256];
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  FUN_008fa54c(param_1,&DAT_01e277f2);
  FUN_00937800(local_168);
  __src = (char *)((ulong)local_168 | 1);
  if ((local_168[0] & 1) != 0) {
    __src = local_158;
  }
  strcpy(acStack_138,__src);
  FUN_008fa54c(local_198,"Auth");
  FUN_008fa54c(local_150,"initURL");
  FUN_00e6bac8(local_180,acStack_138,local_198,local_150,param_1);
  FUN_008fce60(param_1,local_180);
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
  if ((local_150[0] & 1) != 0) {
    operator_delete(local_140);
  }
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  bVar2 = *param_1;
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pbVar6 = *(byte **)(param_1 + 0x10);
    if ((bVar2 & 1) == 0) {
      pbVar6 = param_1 + 1;
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        lVar5 = -(ulong)(bVar2 >> 1);
        pbVar6 = param_1;
        do {
          pbVar6 = pbVar6 + 1;
          if (*pbVar6 != *__s2) goto LAB_00937d14;
          lVar5 = lVar5 + 1;
          __s2 = __s2 + 1;
        } while (lVar5 != 0);
      }
      goto LAB_00937d80;
    }
    if ((__n == 0) || (iVar4 = memcmp(pbVar6,__s2,__n), iVar4 == 0)) goto LAB_00937d80;
  }
LAB_00937d14:
  FUN_00e6a93c(local_150,10,&DAT_01bb6d43,DAT_02bf24e0);
  FUN_008fa54c(local_180,"[REVISION]");
  FUN_008fa54c(local_198,local_150);
  FUN_00937db8(param_1,local_180,local_198);
  if ((local_198[0] & 1) != 0) {
    operator_delete(local_188);
  }
  if ((local_180[0] & 1) != 0) {
    operator_delete(local_170);
  }
LAB_00937d80:
  if ((local_168[0] & 1) != 0) {
    operator_delete(local_158);
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00937db8(byte *param_1,byte *param_2,byte *param_3)

{
  size_t __n;
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong __n_00;
  byte bVar4;
  byte *__s2;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  ulong uVar8;
  
  uVar8 = 0;
  do {
    uVar3 = (ulong)(*param_1 >> 1);
    pbVar2 = param_1 + 1;
    if ((*param_1 & 1) != 0) {
      uVar3 = *(ulong *)(param_1 + 8);
      pbVar2 = *(byte **)(param_1 + 0x10);
    }
    __n_00 = (ulong)(*param_2 >> 1);
    __s2 = param_2 + 1;
    if ((*param_2 & 1) != 0) {
      __n_00 = *(ulong *)(param_2 + 8);
      __s2 = *(byte **)(param_2 + 0x10);
    }
    if (uVar3 < uVar8) {
      return;
    }
    if (__n_00 != 0) {
      pbVar6 = pbVar2 + uVar8;
      pbVar1 = pbVar2 + uVar3;
      lVar7 = (long)pbVar1 - (long)pbVar6;
      if (lVar7 < (long)__n_00) {
        return;
      }
      bVar4 = *__s2;
      while( true ) {
        __n = (lVar7 - __n_00) + 1;
        if (__n == 0) {
          return;
        }
        pbVar6 = memchr(pbVar6,(uint)bVar4,__n);
        if (pbVar6 == (byte *)0x0) {
          return;
        }
        iVar5 = memcmp(pbVar6,__s2,__n_00);
        if (iVar5 == 0) break;
        pbVar6 = pbVar6 + 1;
        lVar7 = (long)pbVar1 - (long)pbVar6;
        if (lVar7 < (long)__n_00) {
          return;
        }
      }
      if (pbVar6 == pbVar1) {
        return;
      }
      uVar8 = (long)pbVar6 - (long)pbVar2;
    }
    if (uVar8 == 0xffffffffffffffff) {
      return;
    }
    pbVar2 = param_3 + 1;
    uVar3 = (ulong)(*param_3 >> 1);
    if ((*param_3 & 1) != 0) {
      pbVar2 = *(byte **)(param_3 + 0x10);
      uVar3 = *(ulong *)(param_3 + 8);
    }
    FUN_0093dbf0(param_1,uVar8,__n_00 & 0xffffffff,pbVar2,uVar3);
    uVar3 = (ulong)(*param_3 >> 1);
    if ((*param_3 & 1) != 0) {
      uVar3 = *(ulong *)(param_3 + 8);
    }
    uVar8 = uVar8 + (uVar3 & 0xffffffff);
  } while( true );
}




undefined8 FUN_00937f1c(void)

{
  return 0;
}




undefined8 FUN_00937f24(void)

{
  return 1;
}




bool FUN_00937f2c(void)

{
  int iVar1;
  
  iVar1 = FUN_0092ec00();
  return iVar1 == 0xf;
}




char * FUN_00937f48(void)

{
  return "support@superevilmegacorp.com";
}




char * FUN_00937f54(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  char *pcVar5;
  byte local_40 [8];
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  FUN_00ec52d8(local_40);
  uVar4 = (ulong)(local_40[0] >> 1);
  uVar1 = uVar4;
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if (uVar1 == 6) {
    iVar3 = FUN_0090d610(local_40,0,0xffffffffffffffff,"amazon",6);
    if (iVar3 == 0) {
      pcVar5 = "amzn://apps/android?p=com.superevilmegacorp.game";
      goto LAB_009380b4;
    }
    uVar4 = (ulong)(local_40[0] >> 1);
  }
  uVar1 = uVar4;
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if (uVar1 == 0xb) {
    iVar3 = FUN_0090d610(local_40,0,0xffffffffffffffff,"google-play",0xb);
    if (iVar3 == 0) {
      pcVar5 = "market://details?id=com.superevilmegacorp.game";
      goto LAB_009380b4;
    }
    uVar4 = (ulong)(local_40[0] >> 1);
  }
  uVar1 = uVar4;
  if ((local_40[0] & 1) != 0) {
    uVar1 = local_38;
  }
  if (uVar1 == 7) {
    iVar3 = FUN_0090d610(local_40,0,0xffffffffffffffff,"netease",7);
    if (iVar3 == 0) {
      pcVar5 = "http://vg.163.com/bbs";
      goto LAB_009380b4;
    }
    uVar4 = (ulong)(local_40[0] >> 1);
  }
  if ((local_40[0] & 1) != 0) {
    uVar4 = local_38;
  }
  pcVar5 = "http://www.vainglorygame.com/";
  if (uVar4 == 7) {
    iVar3 = FUN_0090d610(local_40,0,0xffffffffffffffff,"neunion",7);
    pcVar5 = "http://vg.163.com/bbs";
    if (iVar3 != 0) {
      pcVar5 = "http://www.vainglorygame.com/";
    }
  }
LAB_009380b4:
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar5;
}




undefined8 thunk_FUN_00937f24(void)

{
  return 1;
}




undefined8 thunk_FUN_00937f24(void)

{
  return 1;
}




undefined8 thunk_FUN_00937f24(void)

{
  return 1;
}




undefined8 thunk_FUN_00937f24(void)

{
  return 1;
}

