// functions/00b79 — 23 functions
#include "libGameKindred.h"




void FUN_00b79020(undefined8 *param_1)

{
  long lVar1;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00b79680();
  *param_1 = &PTR_FUN_027e6758;
  *(undefined8 *)((long)param_1 + 0x2c64) = 0;
  FUN_008fa54c(local_40,"ACADEMY");
  FUN_008fce60(param_1 + 0x589,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0xe51db192,FUN_00b790d8,0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b790d8(void)

{
  FUN_00b79334();
  return;
}




void FUN_00b79104(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e6758;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0xe51db192);
  FUN_00b796c4(param_1);
  return;
}




void FUN_00b7914c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e6758;
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0xe51db192);
  FUN_00b796c4(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00b7919c(long *param_1,byte *param_2)

{
  undefined2 *puVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte *pbVar8;
  void *__s1;
  undefined2 *puVar9;
  
  bVar3 = *param_2;
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_2 + 8);
  }
  sVar2 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar2 = DAT_0320ffb0;
  }
  if (__n == sVar2) {
    pbVar8 = *(byte **)(param_2 + 0x10);
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_2 + 1;
    }
    pbVar5 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      pbVar5 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n == 0) {
        return;
      }
      lVar6 = -(ulong)(bVar3 >> 1);
      pbVar8 = param_2;
      while (pbVar8 = pbVar8 + 1, *pbVar8 == *pbVar5) {
        lVar6 = lVar6 + 1;
        pbVar5 = pbVar5 + 1;
        if (lVar6 == 0) {
          return;
        }
      }
    }
    else {
      if (__n == 0) {
        return;
      }
      iVar4 = memcmp(pbVar8,pbVar5,__n);
      if (iVar4 == 0) {
        return;
      }
    }
  }
  if (*(uint *)(param_1 + 0x587) != 0) {
    pbVar8 = *(byte **)(param_2 + 0x10);
    puVar9 = (undefined2 *)param_1[0x588];
    if ((bVar3 & 1) == 0) {
      pbVar8 = param_2 + 1;
    }
    puVar1 = puVar9 + (ulong)*(uint *)(param_1 + 0x587) * 8;
    do {
      lVar6 = *(long *)(puVar9 + 4);
      if (lVar6 != 0) {
        bVar3 = *(byte *)(lVar6 + 0x3a0);
        sVar2 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          sVar2 = *(size_t *)(lVar6 + 0x3a8);
        }
        if (sVar2 == __n) {
          __s1 = *(void **)(lVar6 + 0x3b0);
          if ((bVar3 & 1) == 0) {
            __s1 = (void *)(lVar6 + 0x3a1);
          }
          if ((bVar3 & 1) == 0) {
            if (__n == 0) {
LAB_00b79308:
                    /* WARNING: Could not recover jumptable at 0x00b79330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*param_1 + 0x178))(param_1,*puVar9,&DAT_0320ffa8);
              return;
            }
            pbVar5 = (byte *)(lVar6 + 0x3a1);
            lVar6 = -(ulong)(bVar3 >> 1);
            pbVar7 = pbVar8;
            while (*pbVar5 == *pbVar7) {
              pbVar5 = pbVar5 + 1;
              lVar6 = lVar6 + 1;
              pbVar7 = pbVar7 + 1;
              if (lVar6 == 0) goto LAB_00b79308;
            }
          }
          else if ((__n == 0) || (iVar4 = memcmp(__s1,pbVar8,__n), iVar4 == 0)) goto LAB_00b79308;
        }
      }
      puVar9 = puVar9 + 8;
    } while (puVar9 != puVar1);
  }
  return;
}




void FUN_00b79334(long *param_1)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong local_48;
  long local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = 0;
  local_40 = 0;
  uVar3 = FUN_0096c0ac(&local_48);
  if ((uVar3 & 1) != 0) {
    FUN_00b79724(param_1);
    if ((int)local_48 != 0) {
      lVar5 = local_40 + (local_48 & 0xffffffff) * 0x78;
      lVar4 = local_40;
      do {
        (**(code **)(*param_1 + 0x198))(param_1,lVar4,lVar4 + 0x48,lVar4 + 0x18,lVar4 + 0x30);
        lVar4 = lVar4 + 0x78;
      } while (lVar4 != lVar5);
    }
  }
  sVar1 = 0;
  if ((short)param_1[0x585] != -1) {
    sVar1 = (short)param_1[0x585];
  }
  (**(code **)(*param_1 + 0x178))(param_1,sVar1,&DAT_0320ffa8);
  FUN_00a9e810(param_1 + 0x62);
  FUN_00969c70(&local_48,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b79418(undefined8 param_1,uint param_2)

{
  FUN_00b7987c(param_1,param_2 & 1);
  if ((param_2 & 1) != 0) {
    FUN_00b79334(param_1);
    return;
  }
  return;
}




long * FUN_00b79454(long param_1,undefined8 param_2,byte *param_3,byte *param_4)

{
  void *pvVar1;
  undefined4 uVar2;
  short sVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong *puVar8;
  byte *pbVar9;
  undefined4 uVar10;
  byte local_a8 [16];
  void *local_98;
  undefined8 local_90;
  void *local_88;
  ulong local_80;
  long *plStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar5 = operator_new(0xbf0);
  FUN_00b57740();
  uVar10 = *(undefined4 *)(param_1 + 0x2c68);
  FUN_00f13f08(*(undefined4 *)(param_1 + 0x2c64),plVar5);
  pbVar9 = *(byte **)(param_4 + 0x10);
  if ((*param_4 & 1) == 0) {
    pbVar9 = param_4 + 1;
  }
  FUN_008fa54c(&local_80,pbVar9);
  FUN_00b359a8(plVar5,param_2,&local_80,param_1 + 0x2c48);
  if (((byte)local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  (**(code **)(*plVar5 + 0x180))(plVar5);
  pbVar9 = *(byte **)(param_3 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x2c38);
  if ((*param_3 & 1) == 0) {
    pbVar9 = param_3 + 1;
  }
  FUN_00e705c8(&local_90,pbVar9);
  uVar6 = FUN_00e70b04(&local_90);
  if ((uVar6 & 1) != 0) {
    pbVar9 = param_4 + 1;
    if ((*param_4 & 1) != 0) {
      pbVar9 = *(byte **)(param_4 + 0x10);
    }
    uVar7 = FUN_00e6ce7c(pbVar9,0);
    FUN_00910394(&local_90,uVar7);
  }
  FUN_00a9f888(param_1,uVar2,&local_90,plVar5);
  sVar3 = (short)uVar2;
  FUN_009697c8(local_a8,param_1 + 0x2c48,".");
  uVar6 = (ulong)(*param_4 >> 1);
  pbVar9 = param_4 + 1;
  if ((*param_4 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 8);
    pbVar9 = *(byte **)(param_4 + 0x10);
  }
  puVar8 = (ulong *)FUN_0090de84(local_a8,pbVar9,uVar6);
  local_70 = (void *)puVar8[2];
  plStack_78 = (long *)puVar8[1];
  local_80 = *puVar8;
  puVar8[1] = 0;
  puVar8[2] = 0;
  *puVar8 = 0;
  pvVar1 = (void *)((ulong)&local_80 | 1);
  if ((local_80 & 1) != 0) {
    pvVar1 = local_70;
  }
  FUN_00a9f170(param_1 + 0x310,(int)sVar3,pvVar1);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if ((local_a8[0] & 1) != 0) {
    operator_delete(local_98);
  }
  FUN_00f01fcc(param_1 + 0x310,1,0,1,1);
  *(undefined4 *)(plVar5 + 0x7b) = uVar10;
  local_80 = CONCAT62(local_80._2_6_,sVar3);
  plStack_78 = plVar5;
  FUN_00b5519c(param_1 + 0x2c38,&local_80);
  if (local_88 != (void *)0x0) {
    operator_delete__(local_88);
    local_90 = 0;
    local_88 = (void *)0x0;
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return plVar5;
}




void FUN_00b79680(undefined8 *param_1)

{
  FUN_00a9f290();
  param_1[0x58b] = 0;
  param_1[0x58a] = 0;
  param_1[0x589] = 0;
  param_1[0x588] = 0;
  *param_1 = &PTR_FUN_027e6908;
  param_1[0x587] = 0;
  return;
}




void FUN_00b796c4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e6908;
  FUN_00b79724();
  if ((*(byte *)(param_1 + 0x589) & 1) != 0) {
    operator_delete((void *)param_1[0x58b]);
  }
  if ((void *)param_1[0x588] != (void *)0x0) {
    operator_delete__((void *)param_1[0x588]);
    param_1[0x588] = 0;
    param_1[0x587] = 0;
  }
  FUN_00a9f558(param_1);
  return;
}




void FUN_00b79724(long param_1)

{
  long lVar1;
  undefined2 *puVar2;
  
  if (*(int *)(param_1 + 0x2c38) == 0) {
    lVar1 = *(long *)(param_1 + 0x2c40);
  }
  else {
    puVar2 = *(undefined2 **)(param_1 + 0x2c40);
    do {
      FUN_00a9f8e4(param_1,*puVar2,*(undefined8 *)(puVar2 + 4));
      *puVar2 = 0xffff;
      if (*(long **)(puVar2 + 4) != (long *)0x0) {
        (**(code **)(**(long **)(puVar2 + 4) + 8))();
      }
      *(undefined8 *)(puVar2 + 4) = 0;
      lVar1 = *(long *)(param_1 + 0x2c40);
      puVar2 = puVar2 + 8;
    } while (puVar2 != (undefined2 *)(lVar1 + (ulong)*(uint *)(param_1 + 0x2c38) * 0x10));
  }
  if (lVar1 != 0) {
    *(undefined4 *)(param_1 + 0x2c38) = 0;
  }
  FUN_00a9e764(param_1 + 0x310);
  return;
}




void FUN_00b797b4(void *param_1)

{
  FUN_00b796c4();
  operator_delete(param_1);
  return;
}




undefined4 FUN_00b797d8(long param_1)

{
  return *(undefined4 *)(param_1 + 0x2c60);
}




void FUN_00b797e0(long param_1,uint param_2,undefined8 param_3)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x2c28);
  if ((-1 < (short)uVar1) && ((uint)uVar1 != (param_2 & 0xffff))) {
    FUN_00b7983c(param_1,(int)(short)uVar1);
  }
  FUN_00a9f964(param_1,param_2,param_3);
  return;
}




void FUN_00b7983c(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x2c38) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x2c38) << 4;
    plVar1 = (long *)(*(long *)(param_1 + 0x2c40) + 8);
    do {
      if ((short)plVar1[-1] == param_2) {
        if (*plVar1 == 0) {
          return;
        }
        FUN_00b35f84();
        return;
      }
      lVar2 = lVar2 + -0x10;
      plVar1 = plVar1 + 2;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00b7987c(long param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  FUN_00a9f604(param_1,param_2 & 1);
  if ((param_2 & 1) != 0) {
    FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_menu_layer_slide.mp3",0,0);
    return;
  }
  FUN_00b7983c(param_1,(long)*(short *)(param_1 + 0x2c28));
  uVar1 = (ulong)*(uint *)(param_1 + 0x2c38);
  if (*(uint *)(param_1 + 0x2c38) != 0) {
    lVar2 = *(long *)(param_1 + 0x2c40);
    lVar3 = lVar2;
    do {
      if (*(long *)(lVar3 + 8) != 0) {
        FUN_00b3589c();
        uVar1 = (ulong)*(uint *)(param_1 + 0x2c38);
        lVar2 = *(long *)(param_1 + 0x2c40);
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar3 != lVar2 + uVar1 * 0x10);
  }
  return;
}




undefined8 FUN_00b7990c(long param_1,int param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (*(uint *)(param_1 + 0x2c38) != 0) {
    lVar2 = (ulong)*(uint *)(param_1 + 0x2c38) << 4;
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x2c40) + 8);
    do {
      if (*(short *)(puVar1 + -1) == param_2) {
        return *puVar1;
      }
      lVar2 = lVar2 + -0x10;
      puVar1 = puVar1 + 2;
    } while (lVar2 != 0);
  }
  return 0;
}




void FUN_00b79948(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_00a9f290();
  FUN_00948cd8(param_1 + 0x587);
  *param_1 = &PTR_FUN_027e6ab0;
  param_1[0x587] = &PTR_FUN_027e6c68;
  FUN_00ba9e8c(param_1 + 0x58a,param_1);
  FUN_00baf4a4(param_1 + 0x4586,param_1);
  FUN_00bad5d0(param_1 + 0x482b,param_1);
  puVar1 = param_1 + 0x51eb;
  param_1[0x51ea] = 0;
  FUN_00af772c(puVar1);
  uVar2 = FUN_00e6ce7c("MENU_HERO_TAB_NAME_OVERVIEW",0);
  FUN_00a9f888(param_1,0,uVar2,param_1 + 0x58a);
  uVar2 = FUN_00e6ce7c("MENU_HERO_TAB_NAME_SKINS",0);
  FUN_00a9f888(param_1,2,uVar2,param_1 + 0x482b);
  uVar2 = FUN_00e6ce7c("MENU_HERO_TAB_NAME_TALENTS",0);
  FUN_00a9f888(param_1,1,uVar2,param_1 + 0x4586);
  FUN_00f01a4c(param_1 + 0x567,1);
  FUN_00f023ec(param_1 + 0x62,puVar1,1);
  *(uint *)((long)param_1 + 0x29094) = *(uint *)((long)param_1 + 0x29094) | 4;
  FUN_00af7d24(puVar1);
  FUN_00af7ba0(puVar1,0);
  FUN_00e6ea58(&DAT_02c7eef8,param_1,0x9d2c9b16,FUN_00b79ad4,0);
  return;
}




void FUN_00b79ad4(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00b79b04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x198))();
  return;
}




void FUN_00b79b08(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027e6ab0;
  param_1[0x587] = &PTR_FUN_027e6c68;
  pvVar1 = (void *)param_1[0x51ea];
  if (pvVar1 != (void *)0x0) {
    FUN_00b79bd4(pvVar1);
    operator_delete(pvVar1);
    param_1[0x51ea] = 0;
  }
  FUN_00e6ec00(&DAT_02c7eef8,param_1,0x9d2c9b16);
  FUN_00af7be4(param_1 + 0x51eb);
  FUN_00badb88(param_1 + 0x482b);
  FUN_00b79c74(param_1 + 0x4586);
  FUN_00b79d8c(param_1 + 0x58a);
  FUN_00948d58(param_1 + 0x587);
  FUN_00a9f558(param_1);
  return;
}




void FUN_00b79bd4(byte *param_1)

{
  if ((param_1[0xd0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xe0));
  }
  if ((param_1[0xb8] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 200));
  }
  if ((param_1[0xa0] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0xb0));
  }
  if ((param_1[0x80] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x90));
  }
  if ((param_1[0x60] & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x70));
  }
  FUN_00951534(param_1 + 0x50,1);
  if (*(void **)(param_1 + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x30));
    param_1[0x28] = 0;
    param_1[0x29] = 0;
    param_1[0x2a] = 0;
    param_1[0x2b] = 0;
    param_1[0x2c] = 0;
    param_1[0x2d] = 0;
    param_1[0x2e] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = 0;
    param_1[0x31] = 0;
    param_1[0x32] = 0;
    param_1[0x33] = 0;
    param_1[0x34] = 0;
    param_1[0x35] = 0;
    param_1[0x36] = 0;
    param_1[0x37] = 0;
  }
  if ((*param_1 & 1) == 0) {
    return;
  }
  operator_delete(*(void **)(param_1 + 0x10));
  return;
}




void FUN_00b79c74(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ea1b0;
  param_1[0x1e4] = &PTR_FUN_027d5388;
  param_1[0x27f] = &PTR_FUN_028266f0;
  param_1[0x296] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x299);
  FUN_00f13d08(param_1 + 0x27f);
  param_1[0x261] = &PTR_FUN_028266f0;
  param_1[0x278] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x27b);
  FUN_00f13d08(param_1 + 0x261);
  param_1[0x243] = &PTR_FUN_028266f0;
  param_1[0x25a] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x25d);
  FUN_00f13d08(param_1 + 0x243);
  FUN_00f01868(param_1 + 0x232);
  FUN_009c825c(param_1 + 0x1e4);
  FUN_00f0d3a4(param_1 + 0x1be);
  FUN_00f13d08(param_1 + 0x1a5);
  FUN_00b7093c(param_1 + 0x8b);
  param_1[0x6d] = &PTR_FUN_028266f0;
  param_1[0x84] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x87);
  FUN_00f13d08(param_1 + 0x6d);
  FUN_00b8e790(param_1);
  return;
}




void FUN_00b79d8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027e9720;
  param_1[0x6d] = &PTR_FUN_027e98a8;
  FUN_00b4e68c(param_1 + 0x397c);
  FUN_00b4d610(param_1 + 0x2a23);
  param_1[0x2964] = &PTR_FUN_027d5388;
  param_1[0x29ff] = &PTR_FUN_028266f0;
  param_1[0x2a16] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2a19);
  FUN_00f13d08(param_1 + 0x29ff);
  param_1[0x29e1] = &PTR_FUN_028266f0;
  param_1[0x29f8] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x29fb);
  FUN_00f13d08(param_1 + 0x29e1);
  param_1[0x29c3] = &PTR_FUN_028266f0;
  param_1[0x29da] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x29dd);
  FUN_00f13d08(param_1 + 0x29c3);
  FUN_00f01868(param_1 + 0x29b2);
  FUN_009c825c(param_1 + 0x2964);
  FUN_00ed00e0(param_1 + 0x28bd);
  FUN_00f13d08(param_1 + 0x2889);
  param_1[0x27ca] = &PTR_FUN_027d5388;
  param_1[0x2865] = &PTR_FUN_028266f0;
  param_1[0x287c] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x287f);
  FUN_00f13d08(param_1 + 0x2865);
  param_1[0x2847] = &PTR_FUN_028266f0;
  param_1[0x285e] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2861);
  FUN_00f13d08(param_1 + 0x2847);
  param_1[0x2829] = &PTR_FUN_028266f0;
  param_1[0x2840] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2843);
  FUN_00f13d08(param_1 + 0x2829);
  FUN_00f01868(param_1 + 0x2818);
  FUN_009c825c(param_1 + 0x27ca);
  param_1[0x270b] = &PTR_FUN_027d5388;
  param_1[0x27a6] = &PTR_FUN_028266f0;
  param_1[0x27bd] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x27c0);
  FUN_00f13d08(param_1 + 0x27a6);
  param_1[0x2788] = &PTR_FUN_028266f0;
  param_1[0x279f] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x27a2);
  FUN_00f13d08(param_1 + 0x2788);
  param_1[0x276a] = &PTR_FUN_028266f0;
  param_1[0x2781] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x2784);
  FUN_00f13d08(param_1 + 0x276a);
  FUN_00f01868(param_1 + 0x2759);
  FUN_009c825c(param_1 + 0x270b);
  FUN_00ad65a8(param_1 + 0x1d53);
  FUN_00f01868(param_1 + 0x1d42);
  FUN_00abbb28(param_1 + 0x18b4);
  FUN_00abbb28(param_1 + 0x1426);
  FUN_009c7fa8(param_1 + 0x116e);
  FUN_00f0d3a4(param_1 + 0x1148);
  FUN_00f13d08(param_1 + 0x112f);
  FUN_00f01868(param_1 + 0x111e);
  param_1[0x1100] = &PTR_FUN_028266f0;
  param_1[0x1117] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x111a);
  FUN_00f13d08(param_1 + 0x1100);
  FUN_00f13d08(param_1 + 0x10e9);
  FUN_009c7fa8(param_1 + 0xe31);
  FUN_00ad7a38(param_1 + 0x10f);
  FUN_00f01868(param_1 + 0xfe);
  param_1[0xe0] = &PTR_FUN_028266f0;
  param_1[0xf7] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xfa);
  FUN_00f13d08(param_1 + 0xe0);
  param_1[0xc2] = &PTR_FUN_028266f0;
  param_1[0xd9] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xdc);
  FUN_00f13d08(param_1 + 0xc2);
  param_1[0xa4] = &PTR_FUN_028266f0;
  param_1[0xbb] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0xbe);
  FUN_00f13d08(param_1 + 0xa4);
  FUN_00f13d08(param_1 + 0x70);
  FUN_00948d58(param_1 + 0x6d);
  FUN_00b8e790(param_1);
  return;
}

