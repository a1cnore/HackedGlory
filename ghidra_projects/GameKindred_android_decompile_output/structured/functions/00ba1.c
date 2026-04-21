// functions/00ba1 — 27 functions
#include "libGameKindred.h"




void thunk_FUN_00ba1148(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ac9cd0(param_1 + 0xb608);
  uVar2 = FUN_00cb9378();
  FUN_008fce60(uVar2,uVar1);
  FUN_00cb9a60();
  return;
}




void thunk_FUN_00ba117c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_009580b8();
  uVar2 = FUN_00961a78(uVar1,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_009580b8();
    FUN_00961988(uVar1,0);
    uVar1 = FUN_00e6ce7c("MENU_FRIENDS_BROADCAST_SENT_TOASTIE",0);
    FUN_00a9da50(0x3fe66666,uVar1,0,0);
    return;
  }
  return;
}




void FUN_00ba1148(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00ac9cd0(param_1 + 0xb608);
  uVar2 = FUN_00cb9378();
  FUN_008fce60(uVar2,uVar1);
  FUN_00cb9a60();
  return;
}




void FUN_00ba117c(void)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = FUN_009580b8();
  uVar2 = FUN_00961a78(uVar1,0);
  if ((uVar2 & 1) != 0) {
    uVar1 = FUN_009580b8();
    FUN_00961988(uVar1,0);
    uVar1 = FUN_00e6ce7c("MENU_FRIENDS_BROADCAST_SENT_TOASTIE",0);
    FUN_00a9da50(0x3fe66666,uVar1,0,0);
    return;
  }
  return;
}




void FUN_00ba11d0(void)

{
  return;
}




void FUN_00ba11d4(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x12570))) {
    FUN_00ac1aac(param_1 + 0xdf40);
    lVar3 = *(long *)(param_1 + 0x12578);
    uVar5 = (ulong)param_3;
    if (*(int *)(lVar3 + uVar5 * 0x50 + 0x38) != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar4 = *(long *)(lVar3 + uVar5 * 0x50 + 0x40);
        lVar3 = lVar4 + lVar6;
        if ((*(byte *)(lVar3 + 0xd8) & 1) == 0) {
          lVar2 = lVar3 + 0xd9;
        }
        else {
          lVar2 = *(long *)(lVar3 + 0xe8);
        }
        lVar4 = lVar4 + lVar6;
        FUN_00ac1474(param_1 + 0xdf40,lVar3 + 0xb8,lVar3 + 200,lVar2,*(undefined1 *)(lVar4 + 0xf0),
                     *(undefined1 *)(lVar4 + 0xf1));
        lVar3 = *(long *)(param_1 + 0x12578);
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0xf8;
      } while (uVar7 < *(uint *)(lVar3 + uVar5 * 0x50 + 0x38));
    }
    lVar3 = FUN_00b9be84(param_1,lVar3 + uVar5 * 0x50 + 0x20,0);
    if (lVar3 != 0) {
      FUN_00b92674(param_1);
    }
    FUN_00b9c524(param_1,lVar3,0);
  }
  uVar1 = FUN_009b8d90();
  FUN_009ba344(uVar1,param_2,0);
  return;
}




void FUN_00ba1304(void)

{
  return;
}




void FUN_00ba1308(long param_1)

{
  FUN_0091605c(param_1 + 0x12620);
  *(undefined8 *)(param_1 + 0x120b0) = 0;
  FUN_008fce60(param_1 + 0x12638,&DAT_0320ffa8);
  return;
}




void FUN_00ba1354(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00910394(param_1 + 0x12610,param_3);
  return;
}




void FUN_00ba1368(void)

{
  return;
}




void FUN_00ba136c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e8d50;
  if ((*(byte *)(param_1 + 0x1b) & 1) != 0) {
    operator_delete((void *)param_1[0x1d]);
  }
  if ((void *)param_1[0x1a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1a]);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
  }
  if ((void *)param_1[0x18] != (void *)0x0) {
    operator_delete__((void *)param_1[0x18]);
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  FUN_00f13d08(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ba13d4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027d5388;
  param_1[0x9b] = &PTR_FUN_028266f0;
  param_1[0xb2] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xb5);
  FUN_00f13d08(param_1 + 0x9b);
  param_1[0x7d] = &PTR_FUN_028266f0;
  param_1[0x94] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x97);
  FUN_00f13d08(param_1 + 0x7d);
  param_1[0x5f] = &PTR_FUN_028266f0;
  param_1[0x76] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x79);
  FUN_00f13d08(param_1 + 0x5f);
  FUN_00f01868(param_1 + 0x4e);
  FUN_009c825c(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00ba1480(void)

{
  return;
}




void FUN_00ba1484(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xba1488);
  (*pcVar1)();
}




void FUN_00ba1488(uint *param_1,uint param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0xf8;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0xf8;
        puVar2 = puVar2 + 0x1f;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00ba1500(uint *param_1,uint param_2)

{
  long lVar1;
  byte *pbVar2;
  
  if (*(long *)(param_1 + 2) != 0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x68;
      pbVar2 = (byte *)(*(long *)(param_1 + 2) + 0x30);
      do {
        if ((pbVar2[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x28));
        }
        if ((*pbVar2 & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + 0x10));
        }
        if ((pbVar2[-0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -8));
        }
        if ((pbVar2[-0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar2 + -0x20));
        }
        lVar1 = lVar1 + -0x68;
        pbVar2 = pbVar2 + 0x68;
      } while (lVar1 != 0);
    }
    if ((param_2 & 1) != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_00ba15ac(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_1[1] < param_2) {
    puVar2 = operator_new__((ulong)param_2 * 0x38);
    puVar3 = *(undefined4 **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      puVar6 = puVar3 + (ulong)*param_1 * 0xe;
      puVar7 = puVar2;
      do {
        *puVar7 = *puVar3;
        FUN_008fcdb8(puVar7 + 2,puVar3 + 2);
        thunk_FUN_00e7051c(puVar7 + 8,puVar3 + 8);
        *(undefined2 *)(puVar7 + 0xd) = *(undefined2 *)(puVar3 + 0xd);
        puVar1 = puVar3 + 0xc;
        puVar3 = puVar3 + 0xe;
        puVar7[0xc] = *puVar1;
        puVar7 = puVar7 + 0xe;
      } while (puVar3 != puVar6);
      puVar3 = *(undefined4 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x38;
        puVar4 = (undefined8 *)(puVar3 + 10);
        do {
          if ((void *)*puVar4 != (void *)0x0) {
            operator_delete__((void *)*puVar4);
            puVar4[-1] = 0;
            *puVar4 = 0;
          }
          if ((*(byte *)(puVar4 + -4) & 1) != 0) {
            operator_delete((void *)puVar4[-2]);
          }
          lVar5 = lVar5 + -0x38;
          puVar4 = puVar4 + 7;
        } while (lVar5 != 0);
        puVar3 = *(undefined4 **)(param_1 + 2);
      }
    }
    if (puVar3 != (undefined4 *)0x0) {
      operator_delete__(puVar3);
    }
    *(undefined4 **)(param_1 + 2) = puVar2;
  }
  return;
}




void FUN_00ba16b4(uint *param_1,long param_2,byte *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  byte *pbVar6;
  
  uVar2 = *param_1;
  iVar3 = (int)((ulong)((long)param_3 - param_2) >> 3);
  if (uVar2 != iVar3 * -0x3b13b13b) {
    pbVar6 = (byte *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x68);
    lVar1 = (long)pbVar6 - (long)param_3;
    lVar5 = param_2;
    if (lVar1 != 0) {
      do {
        FUN_008fce60(lVar5,param_3);
        FUN_008fce60(lVar5 + 0x18,param_3 + 0x18);
        FUN_008fce60(lVar5 + 0x30,param_3 + 0x30);
        FUN_008fce60(lVar5 + 0x48,param_3 + 0x48);
        pbVar4 = param_3 + 0x60;
        param_3 = param_3 + 0x68;
        *(undefined2 *)(lVar5 + 0x60) = *(undefined2 *)pbVar4;
        lVar5 = lVar5 + 0x68;
      } while (param_3 != pbVar6);
      uVar2 = *param_1;
      pbVar6 = (byte *)(*(long *)(param_1 + 2) + (ulong)uVar2 * 0x68);
    }
    pbVar4 = (byte *)(param_2 + ((lVar1 >> 3) * 0xc4ec4ec5 & 0xffffffffU) * 0x68);
    if (pbVar4 != pbVar6) {
      do {
        if ((pbVar4[0x48] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x58));
        }
        if ((pbVar4[0x30] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x40));
        }
        if ((pbVar4[0x18] & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x28));
        }
        if ((*pbVar4 & 1) != 0) {
          operator_delete(*(void **)(pbVar4 + 0x10));
        }
        pbVar4 = pbVar4 + 0x68;
      } while (pbVar6 != pbVar4);
      uVar2 = *param_1;
    }
    *param_1 = uVar2 + iVar3 * 0x3b13b13b;
    return;
  }
  FUN_00ba1500(param_1,1);
  return;
}




void FUN_00ba1824(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  void *pvVar2;
  void *pvVar3;
  byte *pbVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x68);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x68);
      pvVar6 = pvVar2;
      do {
        FUN_008fcdb8(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x18,(long)pvVar3 + 0x18);
        FUN_008fcdb8((long)pvVar6 + 0x30,(long)pvVar3 + 0x30);
        FUN_008fcdb8((long)pvVar6 + 0x48,(long)pvVar3 + 0x48);
        puVar1 = (undefined2 *)((long)pvVar3 + 0x60);
        pvVar3 = (void *)((long)pvVar3 + 0x68);
        *(undefined2 *)((long)pvVar6 + 0x60) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x68);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x68;
        pbVar4 = (byte *)((long)pvVar3 + 0x30);
        do {
          if ((pbVar4[0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x28));
          }
          if ((*pbVar4 & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + 0x10));
          }
          if ((pbVar4[-0x18] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -8));
          }
          if ((pbVar4[-0x30] & 1) != 0) {
            operator_delete(*(void **)(pbVar4 + -0x20));
          }
          lVar5 = lVar5 + -0x68;
          pbVar4 = pbVar4 + 0x68;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_00ba1954(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  
  if (param_1[1] < param_2) {
    pvVar4 = operator_new__((ulong)param_2 * 0xf8);
    uVar2 = *param_1;
    puVar6 = *(undefined8 **)(param_1 + 2);
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar7 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar4 + lVar7);
        *puVar1 = &PTR_FUN_02825520;
        FUN_00ba1af4(puVar1 + 1,(long)puVar6 + lVar7 + 8);
        uVar5 = *(undefined8 *)((long)puVar6 + lVar7 + 0x18);
        *puVar1 = &PTR_FUN_028253d8;
        puVar1[3] = uVar5;
        memcpy(puVar1 + 4,(void *)((long)puVar6 + lVar7 + 0x20),0x68);
        *puVar1 = &PTR_FUN_028284a0;
        uVar5 = *(undefined8 *)((long)puVar6 + lVar7 + 0xa5);
        *(undefined8 *)((long)puVar1 + 0xad) = *(undefined8 *)((long)puVar6 + lVar7 + 0xad);
        *(undefined8 *)((long)puVar1 + 0xa5) = uVar5;
        uVar5 = *(undefined8 *)((long)puVar6 + lVar7 + 0x98);
        puVar1[0x14] = *(undefined8 *)((long)puVar6 + lVar7 + 0xa0);
        puVar1[0x13] = uVar5;
        uVar8 = *(undefined8 *)((long)puVar6 + lVar7 + 0x90);
        uVar5 = *(undefined8 *)((long)puVar6 + lVar7 + 0x88);
        *puVar1 = &PTR_FUN_027e8d50;
        puVar1[0x12] = uVar8;
        puVar1[0x11] = uVar5;
        thunk_FUN_00e7051c(puVar1 + 0x17,(long)puVar6 + lVar7 + 0xb8);
        thunk_FUN_00e7051c(puVar1 + 0x19,(long)puVar6 + lVar7 + 200);
        FUN_008fcdb8(puVar1 + 0x1b,(long)puVar6 + lVar7 + 0xd8);
        lVar3 = lVar7 + 0xf0;
        lVar7 = lVar7 + 0xf8;
        *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)((long)puVar6 + lVar3);
      } while ((ulong)uVar2 * 0xf8 - lVar7 != 0);
      puVar6 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar7 = (ulong)*param_1 * 0xf8;
        do {
          (**(code **)*puVar6)(puVar6);
          lVar7 = lVar7 + -0xf8;
          puVar6 = puVar6 + 0x1f;
        } while (lVar7 != 0);
        puVar6 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar6 != (undefined8 *)0x0) {
      operator_delete__(puVar6);
    }
    *(void **)(param_1 + 2) = pvVar4;
  }
  return;
}




void FUN_00ba1af4(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0096943c(param_1,*param_2);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 2);
    lVar4 = (ulong)*param_2 * 0x30;
    puVar2 = *(undefined8 **)(param_2 + 2);
    do {
      uVar5 = puVar2[4];
      lVar4 = lVar4 + -0x30;
      puVar3[5] = puVar2[5];
      puVar3[4] = uVar5;
      uVar5 = puVar2[2];
      puVar3[3] = puVar2[3];
      puVar3[2] = uVar5;
      uVar5 = *puVar2;
      puVar3[1] = puVar2[1];
      *puVar3 = uVar5;
      puVar3 = puVar3 + 6;
      puVar2 = puVar2 + 6;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return;
}




ulong FUN_00ba1b6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_70 [56];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_00ba1c28(param_1 + 0x18,auStack_70);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar3 = (ulong)(*(int *)(param_1 + 0x18) - 1);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar2 + uVar3 * 0x38);
  }
  lVar2 = lVar2 + uVar3 * 0x38;
  FUN_008fcdb8(lVar2,param_2);
  thunk_FUN_00e7051c(lVar2 + 0x18,param_2 + 0x18);
  thunk_FUN_00e7051c(lVar2 + 0x28,param_2 + 0x28);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ba1c28(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
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
    uVar1 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar1 = uVar3;
    }
    FUN_00ba1ccc(param_1,uVar1);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar2 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x38;
  *(undefined8 *)(lVar2 + -8) = param_2[6];
  uVar5 = param_2[4];
  *(undefined8 *)(lVar2 + -0x10) = param_2[5];
  *(undefined8 *)(lVar2 + -0x18) = uVar5;
  uVar5 = param_2[2];
  *(undefined8 *)(lVar2 + -0x20) = param_2[3];
  *(undefined8 *)(lVar2 + -0x28) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar2 + -0x30) = param_2[1];
  *(undefined8 *)(lVar2 + -0x38) = uVar5;
  return;
}




void FUN_00ba1ccc(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x38);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x38;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -0x38;
        puVar4[6] = puVar2[6];
        uVar5 = puVar2[4];
        puVar4[5] = puVar2[5];
        puVar4[4] = uVar5;
        uVar5 = puVar2[2];
        puVar4[3] = puVar2[3];
        puVar4[2] = uVar5;
        uVar5 = *puVar2;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 7;
        puVar2 = puVar2 + 7;
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




void FUN_00ba1d6c(uint *param_1,uint param_2)

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




void FUN_00ba1dec(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar2 = operator_new__((ulong)param_2 * 0x50);
    pvVar3 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar7 = (void *)((long)pvVar3 + (ulong)*param_1 * 0x50);
      pvVar6 = pvVar2;
      do {
        FUN_0099ce98(pvVar6,pvVar3);
        FUN_008fcdb8((long)pvVar6 + 0x20,(long)pvVar3 + 0x20);
        FUN_00ba1efc((long)pvVar6 + 0x38,(long)pvVar3 + 0x38);
        *(undefined1 *)((long)pvVar6 + 0x4c) = *(undefined1 *)((long)pvVar3 + 0x4c);
        puVar1 = (undefined4 *)((long)pvVar3 + 0x48);
        pvVar3 = (void *)((long)pvVar3 + 0x50);
        *(undefined4 *)((long)pvVar6 + 0x48) = *puVar1;
        pvVar6 = (void *)((long)pvVar6 + 0x50);
      } while (pvVar3 != pvVar7);
      pvVar3 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0x50;
        lVar4 = (long)pvVar3 + 0x38;
        do {
          FUN_00ba1488(lVar4,1);
          if ((*(byte *)(lVar4 + -0x18) & 1) != 0) {
            operator_delete(*(void **)(lVar4 + -8));
          }
          FUN_0099cedc(lVar4 + -0x38);
          lVar5 = lVar5 + -0x50;
          lVar4 = lVar4 + 0x50;
        } while (lVar5 != 0);
        pvVar3 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
    *(void **)(param_1 + 2) = pvVar2;
  }
  return;
}




void FUN_00ba1efc(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00ba1954(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar7 = *(long *)(param_2 + 2);
    lVar8 = *(long *)(param_1 + 2);
    lVar6 = 0;
    do {
      puVar1 = (undefined8 *)(lVar8 + lVar6);
      lVar2 = lVar7 + lVar6;
      *puVar1 = &PTR_FUN_02825520;
      FUN_00ba1af4(puVar1 + 1,lVar2 + 8);
      uVar5 = *(undefined8 *)(lVar2 + 0x18);
      *puVar1 = &PTR_FUN_028253d8;
      puVar1[3] = uVar5;
      memcpy(puVar1 + 4,(void *)(lVar2 + 0x20),0x68);
      *puVar1 = &PTR_FUN_028284a0;
      uVar5 = *(undefined8 *)(lVar2 + 0xa5);
      *(undefined8 *)((long)puVar1 + 0xad) = *(undefined8 *)(lVar2 + 0xad);
      *(undefined8 *)((long)puVar1 + 0xa5) = uVar5;
      uVar5 = *(undefined8 *)(lVar2 + 0x98);
      puVar1[0x14] = *(undefined8 *)(lVar2 + 0xa0);
      puVar1[0x13] = uVar5;
      uVar9 = *(undefined8 *)(lVar2 + 0x90);
      uVar5 = *(undefined8 *)(lVar2 + 0x88);
      *puVar1 = &PTR_FUN_027e8d50;
      puVar1[0x12] = uVar9;
      puVar1[0x11] = uVar5;
      thunk_FUN_00e7051c(puVar1 + 0x17,lVar2 + 0xb8);
      thunk_FUN_00e7051c(puVar1 + 0x19,lVar2 + 200);
      FUN_008fcdb8(puVar1 + 0x1b,lVar2 + 0xd8);
      lVar6 = lVar6 + 0xf8;
      *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)(lVar2 + 0xf0);
    } while ((ulong)uVar3 * 0xf8 - lVar6 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return;
}

