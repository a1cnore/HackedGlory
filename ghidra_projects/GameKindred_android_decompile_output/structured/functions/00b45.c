// functions/00b45 — 19 functions
#include "libGameKindred.h"




void thunk_FUN_00b458c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x342c2;
  lVar2 = 3;
  do {
    *(undefined1 *)(param_1 + lVar1) = 1;
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0xbd10;
  } while (lVar2 != 0);
  FUN_00936730();
  FUN_00b45660(param_1,0);
  return;
}




void FUN_00b4511c(void)

{
  size_t sVar1;
  size_t __n;
  byte bVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  byte *__s2;
  byte *pbVar6;
  long lVar7;
  void *__s1;
  long lVar8;
  
  bVar4 = DAT_0320ffa8;
  lVar3 = DAT_0313a0d0;
  if (DAT_0313a0d0 == 0) {
    return;
  }
  lVar8 = 0;
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  do {
    lVar7 = lVar3 + lVar8 * 0xbd10;
    pbVar6 = (byte *)(lVar7 + 0x342a0);
    bVar2 = *pbVar6;
    __n = (ulong)(bVar2 >> 1);
    if ((bVar2 & 1) != 0) {
      __n = *(size_t *)(lVar7 + 0x342a8);
    }
    if (__n == sVar1) {
      __s1 = *(void **)(lVar3 + lVar8 * 0xbd10 + 0x342b0);
      if ((bVar2 & 1) == 0) {
        __s1 = (void *)(lVar7 + 0x342a1);
      }
      __s2 = DAT_0320ffb8;
      if ((bVar4 & 1) == 0) {
        __s2 = &DAT_0320ffa9;
      }
      if ((bVar2 & 1) == 0) {
        if (__n != 0) {
          lVar7 = -(ulong)(bVar2 >> 1);
          do {
            pbVar6 = pbVar6 + 1;
            if (*pbVar6 != *__s2) goto LAB_00b4521c;
            lVar7 = lVar7 + 1;
            __s2 = __s2 + 1;
          } while (lVar7 != 0);
        }
      }
      else if ((__n != 0) && (iVar5 = memcmp(__s1,__s2,__n), iVar5 != 0)) goto LAB_00b4521c;
      *(undefined1 *)(lVar3 + lVar8 * 0xbd10 + 0x342c2) = 1;
    }
LAB_00b4521c:
    lVar8 = lVar8 + 1;
    if (lVar8 == 3) {
      FUN_00b45264(lVar3);
      return;
    }
  } while( true );
}




void FUN_00b45264(long param_1)

{
  size_t sVar1;
  size_t __n;
  char *__s1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  char *pcVar5;
  size_t sVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  char *__s2;
  long lVar13;
  float fVar14;
  undefined8 local_2c0;
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 local_1e0;
  byte local_1d8 [8];
  size_t local_1d0;
  char *local_1c8;
  byte local_1c0;
  void *local_1b0;
  byte local_1a8;
  void *local_198;
  byte local_190;
  void *local_180;
  undefined1 auStack_168 [8];
  undefined1 auStack_160 [224];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  lVar13 = 0;
  fVar14 = 0.0;
  do {
    lVar11 = param_1 + lVar13 * 0xbd10;
    if (*(char *)(lVar11 + 0x342c2) != '\0') {
      lVar11 = lVar11 + 0x285b8;
      memset(auStack_160,0,0xd8);
      memset(local_1d8,0,0x60);
      FUN_00954ec0(auStack_168);
      FUN_00954d1c(local_1d8);
      local_2c0 = *(undefined8 *)(param_1 + 0x57878);
      FUN_008fcdb8(auStack_2b8,param_1 + 0x57880);
      FUN_008fcdb8(auStack_2a0,param_1 + 0x57898);
      FUN_008fcdb8(auStack_288,param_1 + 0x578b0);
      FUN_008fcdb8(auStack_270,param_1 + 0x578c8);
      FUN_008fcdb8(auStack_258,param_1 + 0x578e0);
      FUN_008fcdb8(auStack_240,param_1 + 0x578f8);
      FUN_008fcdb8(auStack_228,param_1 + 0x57910);
      FUN_008fcdb8(auStack_210,param_1 + 0x57928);
      FUN_008fcdb8(auStack_1f8,param_1 + 0x57940);
      local_1e0 = *(undefined1 *)(param_1 + 0x57958);
      uVar10 = FUN_009361ac(&local_2c0,local_1d8);
      FUN_00936630(&local_2c0);
      bVar7 = local_1d8[0];
      if ((uVar10 & 1) == 0) {
        FUN_00ad1cdc(fVar14,lVar11);
      }
      else {
        bVar4 = local_1d8[0] >> 1;
        bVar8 = (local_1d8[0] & 1) != 0;
        __n = (ulong)bVar4;
        if (bVar8) {
          __n = local_1d0;
        }
        uVar10 = 0;
        __s1 = (char *)((ulong)local_1d8 | 1);
        if (bVar8) {
          __s1 = local_1c8;
        }
        do {
          lVar12 = param_1 + uVar10 * 0xbd10;
          bVar2 = *(byte *)(lVar12 + 0x342a0);
          sVar1 = (ulong)(bVar2 >> 1);
          if ((bVar2 & 1) != 0) {
            sVar1 = *(size_t *)(lVar12 + 0x342a8);
          }
          if (__n == sVar1) {
            __s2 = *(char **)(param_1 + uVar10 * 0xbd10 + 0x342b0);
            if ((bVar2 & 1) == 0) {
              __s2 = (char *)(lVar12 + 0x342a1);
            }
            pcVar5 = (char *)((ulong)local_1d8 | 1);
            sVar1 = -(ulong)bVar4;
            sVar6 = __n;
            if ((bVar7 & 1) == 0) {
              while( true ) {
                if (sVar6 == 0) goto LAB_00b455a4;
                if (*pcVar5 != *__s2) break;
                sVar1 = sVar1 + 1;
                __s2 = __s2 + 1;
                pcVar5 = pcVar5 + 1;
                sVar6 = sVar1;
              }
            }
            else if ((__n == 0) || (iVar9 = memcmp(__s1,__s2,__n), iVar9 == 0)) {
LAB_00b455a4:
              FUN_0093671c(local_1d8);
              FUN_00b45264(param_1);
              goto LAB_00b455cc;
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < 3);
        lVar12 = param_1 + lVar13 * 0xbd10;
        *(uint *)(lVar12 + 0x2863c) = *(uint *)(lVar12 + 0x2863c) | 4;
        FUN_00ad15c8(fVar14,lVar11,local_1d8,*(undefined1 *)(lVar12 + 0x342c1));
        fVar14 = fVar14 + 0.15;
      }
LAB_00b455cc:
      FUN_00936630(auStack_168);
      if ((local_190 & 1) != 0) {
        operator_delete(local_180);
      }
      if ((local_1a8 & 1) != 0) {
        operator_delete(local_198);
      }
      if ((local_1c0 & 1) != 0) {
        operator_delete(local_1b0);
      }
      if ((local_1d8[0] & 1) != 0) {
        operator_delete(local_1c8);
      }
    }
    lVar13 = lVar13 + 1;
    if (lVar13 == 3) {
      if (*(long *)(lVar3 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_00b4565c(void)

{
  return;
}




void FUN_00b45660(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0093d928();
  if ((uVar1 & 1) != 0) {
    if ((param_2 & 1) == 0) {
      FUN_00cbec10(param_1 + 0x4bce8);
    }
    else {
      FUN_00cbeb84();
      FUN_00e6ce7c("MENU_GUILD_SEARCH_FORM_PANEL_TITLE",0);
      FUN_00cbeccc();
    }
    FUN_00f04824(param_1 + 0x4bce8,param_1);
    return;
  }
  return;
}




void FUN_00b456dc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 3;
  lVar2 = 0x342c2;
  do {
    *(undefined1 *)(param_1 + lVar2) = 1;
    lVar1 = lVar1 + -1;
    lVar2 = lVar2 + 0xbd10;
  } while (lVar1 != 0);
  FUN_00b45264();
  return;
}




void FUN_00b45704(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x342c2;
  lVar2 = 3;
  do {
    *(undefined1 *)(param_1 + lVar1) = 1;
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0xbd10;
  } while (lVar2 != 0);
  FUN_00b45264();
  return;
}




void FUN_00b4572c(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  lVar2 = 3;
  puVar1 = (undefined1 *)(param_1 + 0x3420a);
  do {
    *puVar1 = 1;
    lVar2 = lVar2 + -1;
    puVar1 = puVar1 + 0xbd10;
  } while (lVar2 != 0);
  FUN_00b45264(param_1 + -0xb8);
  return;
}




void FUN_00b45760(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_2 + 0x28) == 0) && (uVar1 = FUN_009580c4(), (uVar1 & 1) != 0)) {
    FUN_009580b8();
    FUN_00962c7c();
    return;
  }
  return;
}




void thunk_FUN_00b45760(undefined8 param_1,long param_2)

{
  uint uVar1;
  
  if ((*(int *)(param_2 + 0x28) == 0) && (uVar1 = FUN_009580c4(), (uVar1 & 1) != 0)) {
    FUN_009580b8();
    FUN_00962c7c();
    return;
  }
  return;
}




void FUN_00b45790(long param_1,undefined8 param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  
  iVar2 = FUN_00f04924(param_2);
  *(uint *)(param_1 + 0x4d7c) =
       *(uint *)(param_1 + 0x4d7c) & 0xfffffff8 |
       *(uint *)(param_1 + 0x4d7c) & 3 | (uint)(iVar2 == 1) << 2;
  puVar1 = (uint *)(param_1 + 0x28574);
  uVar4 = (uint)(iVar2 != 1);
  *puVar1 = *puVar1 & 0xfffffff8 | *puVar1 & 3 | uVar4 << 2;
  *(uint *)(param_1 + 0x21fc) =
       *(uint *)(param_1 + 0x21fc) & 0xfffffff8 | *(uint *)(param_1 + 0x21fc) & 3 | uVar4 << 2;
  uVar3 = FUN_0093d928();
  uVar4 = 0;
  if ((uVar3 & 1) != 0) {
    uVar4 = *puVar1 & 4;
  }
  *(uint *)(param_1 + 0x37bc) = *(uint *)(param_1 + 0x37bc) & 0xfffffffb | uVar4;
  return;
}




void FUN_00b45818(void)

{
  return;
}




void FUN_00b4581c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 3;
  lVar2 = 0x342c2;
  do {
    *(undefined1 *)(param_1 + lVar2) = 1;
    lVar1 = lVar1 + -1;
    lVar2 = lVar2 + 0xbd10;
  } while (lVar1 != 0);
  FUN_00b45264();
  return;
}




void FUN_00b45844(undefined8 param_1)

{
  FUN_00b45660(param_1,1);
  return;
}




void FUN_00b4584c(long param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  uVar1 = FUN_00f04924(param_2);
  if ((uVar1 & 1) == 0) {
    lVar2 = param_1 + (long)param_3 * 0xbd10;
    FUN_0093671c(lVar2 + 0x342a0);
    *(undefined1 *)(lVar2 + 0x342c2) = 1;
    FUN_00b45264(param_1);
    return;
  }
  *(undefined1 *)(param_1 + (long)param_3 * 0xbd10 + 0x10aca) = 1;
  return;
}




void FUN_00b458c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0x342c2;
  lVar2 = 3;
  do {
    *(undefined1 *)(param_1 + lVar1) = 1;
    lVar2 = lVar2 + -1;
    lVar1 = lVar1 + 0xbd10;
  } while (lVar2 != 0);
  FUN_00936730();
  FUN_00b45660(param_1,0);
  return;
}




void FUN_00b45914(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long local_68;
  
  lVar7 = tpidr_el0;
  local_68 = *(long *)(lVar7 + 0x28);
  FUN_00b89cd8();
  lVar9 = 0;
  *param_1 = (long)&PTR_FUN_027e1a18;
  do {
    FUN_00b487a4((long)param_1 + lVar9 + 200);
    lVar9 = lVar9 + 5000;
  } while (lVar9 != 55000);
  plVar12 = param_1 + 0x1af4;
  FUN_00f0e4a8(plVar12);
  plVar1 = param_1 + 0x1b12;
  FUN_00f0d160(plVar1);
  plVar2 = param_1 + 0x1b38;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x1b5e;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x1b7c;
  FUN_00f11234(plVar4);
  plVar5 = param_1 + 0x1bb0;
  FUN_00ecfd6c(plVar5,0);
  FUN_00b1ec58(param_1 + 0x1c57,0);
  FUN_00b48a38(param_1 + 0x1ce3);
  FUN_00b27c04(param_1 + 0x230d,0);
  *(undefined4 *)(param_1 + 0x232f) = 0;
  param_1[0x232e] = 0;
  param_1[0x232d] = 0;
  param_1[0x232c] = 0;
  param_1[0x232b] = 0;
  param_1[0x232a] = 0;
  plVar10 = param_1 + 0x19;
  (**(code **)(*param_1 + 0x78))(param_1,plVar4,1);
  FUN_00f023ec(plVar4,plVar5,1);
  FUN_00ed026c(plVar5,plVar12,1);
  FUN_00ed026c(plVar5,plVar1,1);
  FUN_00ed026c(plVar5,plVar2,1);
  FUN_00ed026c(plVar5,plVar3,1);
  lVar9 = 0xb;
  do {
    FUN_00ed026c(plVar5,plVar10,1);
    lVar9 = lVar9 + -1;
    plVar10 = plVar10 + 0x271;
  } while (lVar9 != 0);
  FUN_00ed026c(plVar5,param_1 + 0x1ce3,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x1c57,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x230d,1);
  FUN_00ed04d8(plVar5,0,1);
  FUN_00f0e548(plVar12,PTR_s_build___MenuPartsCommon_tga_02be3530,"black_background");
  uVar6 = *(uint *)((long)param_1 + 0xd824);
  if ((uVar6 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0xd824) = uVar6 & 0xffff807f | 0x3f80;
    FUN_0091ada4(plVar12);
  }
  FUN_00f0d92c(plVar1,PTR_s_build___Fonts_Brandon_Light_80_f_02be9c20,&DAT_01bee7fa);
  uVar8 = FUN_00e6ce7c("MENU_GUILD_SEASON_REWARDS_HEADER_TITLE",0);
  FUN_00f0d75c(plVar1,uVar8);
  FUN_00f0dac8(plVar1,3);
  FUN_00f0d92c(plVar2,PTR_s_build___Fonts_Brandon_Regular_36_02be9c40,&DAT_01bee7fa);
  uVar8 = FUN_00e6ce7c("MENU_GUILD_SEASON_REWARDS_HEADER_SUBTITLE",0);
  FUN_00f0d75c(plVar2,uVar8);
  uVar6 = *(uint *)((long)param_1 + 0xda44);
  if ((uVar6 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0xda44) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x2600;
    FUN_0091ada4(plVar2);
  }
  FUN_00f0dac8(plVar2,3);
  FUN_00f0e548(plVar3,PTR_s_build___MenuPartsCommon_tga_02be3530,"vert_glass_shadow");
  FUN_00f0e670(plVar3,&DAT_01bee7f6,2);
  uVar6 = *(uint *)((long)param_1 + 0xdb74);
  if ((uVar6 & 0x7f80) != 0x3300) {
    *(uint *)((long)param_1 + 0xdb74) = uVar6 & 0xffff8000 | uVar6 & 0x7f | 0x3300;
    FUN_0091ada4(plVar3);
  }
  uVar11 = 0;
  plVar12 = param_1 + 0x19;
  do {
    FUN_00b45d78(plVar12,uVar11 & 0xffffffff,9);
    uVar11 = uVar11 + 10;
    plVar12 = plVar12 + 0x271;
  } while (uVar11 != 100);
  FUN_00b45d78(param_1 + 0x1883,100,0);
  local_70 = DAT_03210f60;
  local_98 = thunk_FUN_00b47cd8;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x1c69,&local_98);
  local_98 = thunk_FUN_00b47cd8;
  local_70 = DAT_03210f8c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_009693a0(param_1 + 0x1c69,&local_98);
  if (*(long *)(lVar7 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b45d78(long param_1,int param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar3 = 0x66;
  if ((param_2 / 10 & 1U) != 0) {
    uVar3 = 0x33;
  }
  uVar5 = (ulong)param_3;
  *(int *)(param_1 + 0x1384) = param_2;
  if ((*(uint *)(param_1 + 0x10c) >> 7 & 0xff) != uVar3) {
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xffff807f | uVar3 << 7;
    FUN_0091ada4(param_1 + 0x88);
  }
  FUN_00e70510(&local_78);
  if (param_2 < 1) {
    uVar2 = FUN_00e6ce7c("MENU_GUILD_SEASON_REWARDS_GUILD_FORMED",0);
    FUN_00f0d75c(param_1 + 0xc28,uVar2);
  }
  else {
    uVar2 = FUN_00e6ce7c("MENU_GUILD_SEASON_REWARDS_BASE_LEVEL",0);
    thunk_FUN_00e7051c(&local_88,uVar2);
    FUN_00e70e18(&local_78,&DAT_01bb6d43,param_2);
    FUN_00e705c8(&local_98,"[NUMBER]");
    FUN_00e71248(&local_88,0,&local_98,&local_78);
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    FUN_00f0d75c(param_1 + 0xc28,&local_88);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  if (0 < (int)param_3) {
    plVar4 = (long *)(param_1 + 0x178);
    do {
      param_2 = param_2 + 1;
      *(uint *)((long)plVar4 + 0x84) = *(uint *)((long)plVar4 + 0x84) | 4;
      FUN_00f0d92c(plVar4,PTR_s_build___Fonts_Brandon_Bold_40_fo_02be9c80,&DAT_01bee7fa);
      if ((*(float *)(plVar4 + 9) != 0.6) || (*(float *)((long)plVar4 + 0x4c) != 0.6)) {
        plVar4[9] = 0x3f19999a3f19999a;
        FUN_0091ada4(plVar4);
      }
      FUN_00e70e18(&local_78,&DAT_01bb6d43,param_2);
      (**(code **)(*plVar4 + 0x138))(plVar4,&local_78);
      plVar4 = plVar4 + 0x26;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_78 = 0;
    local_70 = (void *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00b45fb0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027e1a18;
  FUN_00b4619c();
  if ((void *)param_1[0x232e] != (void *)0x0) {
    operator_delete__((void *)param_1[0x232e]);
    param_1[0x232e] = 0;
    param_1[0x232d] = 0;
  }
  if ((*(byte *)(param_1 + 0x232a) & 1) != 0) {
    operator_delete((void *)param_1[0x232c]);
  }
  FUN_00b27cec(param_1 + 0x230d);
  FUN_00b46214(param_1 + 0x1ce3);
  param_1[0x1c57] = &PTR_FUN_027dd960;
  param_1[0x1cb6] = &PTR_FUN_027d3cc8;
  param_1[0x1ccd] = &PTR_FUN_027d3e40;
  if ((void *)param_1[0x1cdf] != (void *)0x0) {
    operator_delete__((void *)param_1[0x1cdf]);
    param_1[0x1cdf] = 0;
    param_1[0x1cde] = 0;
  }
  FUN_00f0d3a4(param_1 + 0x1cb6);
  FUN_00f0d3a4(param_1 + 0x1c90);
  FUN_00f01868(param_1 + 0x1c7f);
  FUN_00f13d08(param_1 + 0x1c68);
  FUN_00f01868(param_1 + 0x1c57);
  FUN_00ed00e0(param_1 + 0x1bb0);
  FUN_00f13d08(param_1 + 0x1b7c);
  param_1[0x1b5e] = &PTR_FUN_028266f0;
  param_1[0x1b75] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b78);
  FUN_00f13d08(param_1 + 0x1b5e);
  FUN_00f0d3a4(param_1 + 0x1b38);
  FUN_00f0d3a4(param_1 + 0x1b12);
  param_1[0x1af4] = &PTR_FUN_028266f0;
  param_1[0x1b0b] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x1b0e);
  FUN_00f13d08(param_1 + 0x1af4);
  lVar2 = -55000;
  puVar1 = param_1 + 0x1883;
  do {
    FUN_00b46330(puVar1);
    lVar2 = lVar2 + 5000;
    puVar1 = puVar1 + -0x271;
  } while (lVar2 != 0);
  FUN_00f13d08(param_1);
  return;
}

