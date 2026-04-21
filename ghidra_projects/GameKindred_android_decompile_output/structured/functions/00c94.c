// functions/00c94 — 18 functions
#include "libGameKindred.h"




void FUN_00c94034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028062b0;
  FUN_00f0d3a4(param_1 + 0x121);
  FUN_00c925cc(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c94074(void *param_1)

{
  FUN_00aad654();
  operator_delete(param_1);
  return;
}




void FUN_00c94098(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028065e0;
  param_1[0x172] = &PTR_FUN_028266f0;
  param_1[0x189] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x18c);
  FUN_00f13d08(param_1 + 0x172);
  param_1[0x147] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x15e);
  FUN_00f13d08(param_1 + 0x147);
  FUN_00f0d3a4(param_1 + 0x121);
  FUN_00c925cc(param_1);
  return;
}




void FUN_00c94120(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028065e0;
  param_1[0x172] = &PTR_FUN_028266f0;
  param_1[0x189] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x18c);
  FUN_00f13d08(param_1 + 0x172);
  param_1[0x147] = &PTR_FUN_02827fc8;
  FUN_00f01868(param_1 + 0x15e);
  FUN_00f13d08(param_1 + 0x147);
  FUN_00f0d3a4(param_1 + 0x121);
  FUN_00c925cc(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00c941b0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00c941b0(param_1,*param_2);
    FUN_00c941b0(param_1,param_2[1]);
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      operator_delete((void *)param_2[6]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




undefined8 * FUN_00c9420c(long param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  byte *__s1;
  void *__s2;
  undefined8 *puVar7;
  
  puVar7 = (undefined8 *)(param_1 + 8);
  puVar6 = (undefined8 *)FUN_00c942c4(param_1,param_2,*puVar7,puVar7);
  if (puVar7 != puVar6) {
    bVar3 = *(byte *)(puVar6 + 4);
    bVar4 = *param_2;
    uVar1 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar1 = puVar6[5];
    }
    uVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    __n = uVar1;
    if (uVar2 <= uVar1) {
      __n = uVar2;
    }
    if (__n != 0) {
      __s1 = *(byte **)(param_2 + 0x10);
      __s2 = (void *)puVar6[6];
      if ((bVar4 & 1) == 0) {
        __s1 = param_2 + 1;
      }
      if ((bVar3 & 1) == 0) {
        __s2 = (void *)((long)puVar6 + 0x21);
      }
      iVar5 = memcmp(__s1,__s2,__n);
      if (iVar5 != 0) {
        if (iVar5 < 0) {
          return puVar7;
        }
        return puVar6;
      }
    }
    if (uVar1 <= uVar2) {
      return puVar6;
    }
  }
  return puVar7;
}




long FUN_00c942c4(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_00c94338:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_00c94338;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void * FUN_00c94374(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_00c94424(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined8 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_00c94550(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_00c94424(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_00c94488:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_00c944a4;
          if (iVar4 < 0) goto LAB_00c944ac;
          goto LAB_00c94524;
        }
LAB_00c94510:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_00c94510;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_00c94488;
      }
LAB_00c944a4:
      if (uVar2 <= uVar1) break;
LAB_00c944ac:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_00c94524:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_00c94550(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




void FUN_00c945a4(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long *local_78;
  code *pcStack_70;
  long local_68;
  
  lVar10 = tpidr_el0;
  local_68 = *(long *)(lVar10 + 0x28);
  FUN_00f13ca4();
  plVar1 = param_1 + 0x18;
  param_1[0x17] = param_2;
  *param_1 = (long)&PTR_FUN_02806778;
  FUN_00f13ca4(plVar1);
  plVar2 = param_1 + 0x2f;
  FUN_00f0e4a8(plVar2);
  plVar3 = param_1 + 0x4d;
  FUN_00f0e4a8(plVar3);
  plVar4 = param_1 + 0x6b;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x91;
  FUN_00f0d160(plVar5);
  plVar6 = param_1 + 0xb7;
  FUN_00f13ca4(plVar6);
  plVar7 = param_1 + 0xce;
  FUN_00f13ca4(plVar7);
  plVar8 = param_1 + 0xe5;
  FUN_00f11234(plVar8);
  FUN_00e70314(param_1 + 0x119);
  *(undefined4 *)(param_1 + 0x11b) = 0x3f800000;
  *(undefined1 *)((long)param_1 + 0x8dc) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_00f023ec(plVar1,plVar6,1);
  FUN_00f023ec(plVar6,plVar2,1);
  FUN_00f023ec(plVar6,plVar4,1);
  FUN_00f023ec(plVar1,plVar8,1);
  FUN_00f023ec(plVar8,plVar7,1);
  FUN_00f023ec(plVar7,plVar3,1);
  FUN_00f023ec(plVar7,plVar5,1);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0xffffffbf;
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xffffffbf;
  puVar11 = PTR_s_build___MenuPartsCommon_tga_02be3530;
  FUN_00f0e548(plVar2,PTR_s_build___MenuPartsCommon_tga_02be3530,"white_background");
  FUN_00f0e670(plVar2,&DAT_01bee7fe,2);
  uVar12 = FUN_0092ea9c();
  ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_02be9c88;
  if ((uVar12 & 1) == 0) {
    ppuVar9 = &PTR_s_build___Fonts_Brandon_Bold_36_fo_02be9c78;
  }
  puVar14 = *ppuVar9;
  FUN_00f0d92c(plVar4,puVar14,&DAT_01bee7fa);
  uVar13 = FUN_00e6ce7c("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_00f0d75c(plVar4,uVar13);
  FUN_00f0e548(plVar3,puVar11,"white_background");
  FUN_00f0d92c(plVar5,puVar14,&DAT_01bee7f6);
  uVar13 = FUN_00e6ce7c("MENU_TAP_AND_HOLD_BUTTON_INSTRUCTIONS",0);
  FUN_00f0d75c(plVar5,uVar13);
  FUN_00f112f0(plVar8,1);
  *(uint *)((long)param_1 + 0x144) = *(uint *)((long)param_1 + 0x144) & 0xfffffffb;
  pcStack_70 = thunk_FUN_00c94a58;
  local_78 = param_1;
  FUN_00f02e98(0xbf800000,&local_78,0,1);
  if (*(long *)(lVar10 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c94838(undefined8 *param_1)

{
  long lVar1;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR_FUN_02806778;
  pcStack_50 = thunk_FUN_00c94a58;
  local_58 = param_1;
  FUN_00f03390(&local_58);
  FUN_00f13d08(param_1 + 0xe5);
  FUN_00f13d08(param_1 + 0xce);
  FUN_00f13d08(param_1 + 0xb7);
  FUN_00f0d3a4(param_1 + 0x91);
  FUN_00f0d3a4(param_1 + 0x6b);
  param_1[0x4d] = &PTR_FUN_028266f0;
  param_1[100] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x67);
  FUN_00f13d08(param_1 + 0x4d);
  param_1[0x2f] = &PTR_FUN_028266f0;
  param_1[0x46] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x49);
  FUN_00f13d08(param_1 + 0x2f);
  FUN_00f13d08(param_1 + 0x18);
  FUN_00f13d08(param_1);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c94930(void *param_1)

{
  FUN_00c94838();
  operator_delete(param_1);
  return;
}




void FUN_00c94954(long param_1)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x48))();
  FUN_00f13f08(uVar1,0x42700000,param_1);
  FUN_00f13f08(uVar1,0x42700000,param_1 + 0x178);
  fVar2 = (float)uVar1 + -8.0;
  FUN_00f0db64(fVar2,0,0x3f800000,param_1 + 0x358);
  FUN_00f07940(0,0,param_1 + 0x358,8,param_1 + 0x178,8);
  FUN_00f13f08(uVar1,0x42700000,param_1 + 0x268);
  FUN_00f0db64(fVar2,0,0x3f800000,param_1 + 0x488);
  FUN_00f07940(0,0,param_1 + 0x488,8,param_1 + 0x268,8);
  FUN_00f13f08(uVar1,0x42700000,param_1 + 0x728);
  return;
}




void FUN_00c94a58(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (*(char *)(param_1 + 0x8dc) != '\0') {
    uVar2 = FUN_019807a4();
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_019806b8(0);
      if ((uVar2 & 1) == 0) goto LAB_00c94adc;
    }
    else {
      iVar1 = FUN_019807b8();
      if (iVar1 != 1) {
LAB_00c94adc:
        FUN_00c94aec(param_1);
        return;
      }
      puVar3 = (uint *)FUN_019807cc(0);
      if (((int)*puVar3 < 0x10) || ((*puVar3 & 1) == 0)) goto LAB_00c94adc;
    }
    if ((*(float *)(param_1 + 0x768) == 0.0) && (0.0 < *(float *)(param_1 + 0x8d8))) {
      FUN_00c94ea8(param_1);
      return;
    }
  }
  return;
}




void FUN_00c94aec(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  ushort *puVar7;
  float local_88 [8];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*(char *)(param_1 + 0x8dc) != '\0') {
    lVar1 = param_1 + 0xc0;
    *(undefined1 *)(param_1 + 0x8dc) = 0;
    FUN_00f01980(lVar1);
    lVar2 = param_1 + 0x728;
    FUN_00f01980(lVar2);
    FUN_00f01980(param_1 + 0x670);
    uVar5 = *(uint *)(param_1 + 0x144);
    if ((~uVar5 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x144) = uVar5 | 0x7f80;
      FUN_0091ada4(lVar1);
      uVar5 = *(uint *)(param_1 + 0x144);
    }
    *(uint *)(param_1 + 0x144) = uVar5 | 4;
    lVar4 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efdd74(puVar7);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3fa00000,puVar7);
    FUN_00efddc4(0,puVar7);
    FUN_00f022a0(lVar1,puVar7);
    lVar4 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_00efc8e8(puVar7);
      *(undefined ***)puVar7 = &PTR_FUN_02825148;
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_00f022a0(lVar1,puVar7);
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdc08(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e4ccccd,puVar7);
    local_88[0] = (float)FUN_00f13e54(lVar2);
    local_88[0] = -local_88[0];
    local_88[1] = 0.0;
    FUN_00efdc50(puVar7,local_88);
    FUN_00f022a0(lVar2,puVar7);
    lVar1 = DAT_03210d00;
    uVar6 = *(ushort *)(DAT_03210d00 + 0x20010);
    if ((ulong)uVar6 == 0xffff) {
      puVar7 = (ushort *)0x0;
    }
    else {
      puVar7 = (ushort *)(DAT_03210d00 + (ulong)uVar6 * 0x40 + 0x10);
      if (uVar6 == *(ushort *)(DAT_03210d00 + 0x20012)) {
        uVar6 = 0xffff;
      }
      else {
        uVar6 = *puVar7;
      }
      *(ushort *)(DAT_03210d00 + 0x20010) = uVar6;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_00efdc08(puVar7);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_00efcac4(0x3e4ccccd,puVar7);
    local_88[0] = (float)FUN_00f13e54(lVar2);
    local_88[0] = local_88[0] + 2.0;
    local_88[1] = 0.0;
    FUN_00efdc50(puVar7,local_88);
    FUN_00f022a0(param_1 + 0x670,puVar7);
    FUN_00f048e0(local_88,DAT_03210c8c,0);
    FUN_00f04760(param_1,local_88,1);
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00c94ea8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined1 auStack_68 [32];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined1 *)(param_1 + 0x8dc) = 0;
  if ((*(uint *)(param_1 + 0x63c) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x63c) = *(uint *)(param_1 + 0x63c) & 0xffff807f;
    FUN_0091ada4(param_1 + 0x5b8);
  }
  lVar1 = param_1 + 0xc0;
  FUN_00f01980(lVar1);
  FUN_00f01980(param_1 + 0x728);
  FUN_00f01980(param_1 + 0x670);
  uVar4 = *(uint *)(param_1 + 0x144);
  if ((~uVar4 & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x144) = uVar4 | 0x7f80;
    FUN_0091ada4(lVar1);
    uVar4 = *(uint *)(param_1 + 0x144);
  }
  *(uint *)(param_1 + 0x144) = uVar4 | 4;
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efdd74(puVar6);
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00efcac4(0x3fa00000,puVar6);
  FUN_00efddc4(0,puVar6);
  FUN_00f022a0(lVar1,puVar6);
  lVar3 = DAT_03210d00;
  uVar5 = *(ushort *)(DAT_03210d00 + 0x20010);
  if ((ulong)uVar5 == 0xffff) {
    puVar6 = (ushort *)0x0;
  }
  else {
    puVar6 = (ushort *)(DAT_03210d00 + (ulong)uVar5 * 0x40 + 0x10);
    if (uVar5 == *(ushort *)(DAT_03210d00 + 0x20012)) {
      uVar5 = 0xffff;
    }
    else {
      uVar5 = *puVar6;
    }
    *(ushort *)(DAT_03210d00 + 0x20010) = uVar5;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_00efc8e8(puVar6);
    *(undefined ***)puVar6 = &PTR_FUN_02825148;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_00f022a0(lVar1,puVar6);
  FUN_00f048e0(auStack_68,DAT_03210c90,0);
  FUN_00f04760(param_1,auStack_68,1);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00c94a58(long param_1)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  
  if (*(char *)(param_1 + 0x8dc) != '\0') {
    uVar2 = FUN_019807a4();
    if ((uVar2 & 1) == 0) {
      uVar2 = FUN_019806b8(0);
      if ((uVar2 & 1) == 0) goto LAB_00c94adc;
    }
    else {
      iVar1 = FUN_019807b8();
      if (iVar1 != 1) {
LAB_00c94adc:
        FUN_00c94aec(param_1);
        return;
      }
      puVar3 = (uint *)FUN_019807cc(0);
      if (((int)*puVar3 < 0x10) || ((*puVar3 & 1) == 0)) goto LAB_00c94adc;
    }
    if ((*(float *)(param_1 + 0x768) == 0.0) && (0.0 < *(float *)(param_1 + 0x8d8))) {
      FUN_00c94ea8(param_1);
      return;
    }
  }
  return;
}

