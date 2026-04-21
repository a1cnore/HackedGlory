// functions/00bd6 — 47 functions
#include "libGameKindred.h"




void FUN_00bd6040(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ed6f0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd6084(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd6088);
  (*pcVar1)();
}




void FUN_00bd6088(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ec488;
  pvVar1 = operator_new(0xb88);
  FUN_00c3506c();
  param_1[1] = pvVar1;
  param_1[2] = 0;
  *(undefined8 **)((long)pvVar1 + 0x158) = param_1;
  param_1[3] = 0;
  param_1[4] = param_2;
  *param_1 = &PTR_FUN_027ed738;
  param_1[5] = 0;
  return;
}




void FUN_00bd60f0(long param_1,undefined8 param_2)

{
  FUN_0093d974(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00bd6124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(param_1 + 0x20))(*(undefined8 **)(param_1 + 0x20),param_2);
  return;
}




void FUN_00bd6128(long param_1)

{
  FUN_00c357f4(*(undefined8 *)(param_1 + 8),0);
                    /* WARNING: Could not recover jumptable at 0x00bd6158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 0x20) + 8))();
  return;
}




void FUN_00bd615c(long param_1,long param_2)

{
  if (param_2 != 0) {
    *(long *)(param_1 + 0x28) = param_2;
    FUN_00bd6198(param_1);
    FUN_00bd631c(param_1);
    return;
  }
  return;
}




void FUN_00bd6198(long param_1)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_b8;
  byte local_b0;
  undefined8 local_a8;
  void *local_a0;
  byte local_98 [16];
  void *local_88;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  FUN_00c35348(*(undefined8 *)(param_1 + 8));
  plVar4 = (long *)FUN_00cc75b0();
  plVar4 = (long *)*plVar4;
  puVar6 = (undefined8 *)*plVar4;
  while (puVar6 != (undefined8 *)0x0) {
    plVar4 = plVar4 + 1;
    iVar3 = strcmp((char *)puVar6[2],*(char **)(param_1 + 0x28));
    if (iVar3 == 0) {
      uVar5 = FUN_00e80f58();
      uVar7 = 0;
      if ((uVar5 & 1) != 0) {
        uVar7 = FUN_009580b8();
        FUN_008fa54c(local_98,*puVar6);
        uVar7 = FUN_0096173c(uVar7,local_98);
        if ((local_98[0] & 1) != 0) {
          operator_delete(local_88);
        }
      }
      uVar5 = FUN_00bd6424();
      if (((uVar5 & 1) != 0) &&
         ((bVar2 = FUN_00bd648c(uVar5,puVar6,uVar7), (bVar2 & 1) != 0 ||
          (*(char *)((long)puVar6 + 0x34) == '\0')))) {
        FUN_00cc78d0(&local_a8,puVar6,1);
        FUN_00e6a8a8(local_98,"build://Splash_%s.png",puVar6[5]);
        FUN_00c355fc(*(undefined8 *)(param_1 + 8),*puVar6,local_98,&local_a8,bVar2 & 1 ^ 1);
        local_b8 = *puVar6;
        local_b0 = bVar2 & 1;
        FUN_00bd6558((undefined4 *)(param_1 + 0x10),&local_b8);
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
      }
    }
    puVar6 = (undefined8 *)*plVar4;
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x90))();
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd631c(long param_1)

{
  char *__s1;
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  byte local_60 [8];
  ulong local_58;
  char *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_0093da58(local_60,*(undefined8 *)(param_1 + 0x28));
  uVar6 = *(uint *)(param_1 + 0x10);
  if (uVar6 == 0) {
    uVar5 = 0;
  }
  else {
    lVar8 = 0;
    uVar7 = 0;
    uVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x18) + lVar8 + 8) != '\0') {
        bVar2 = (local_60[0] & 1) != 0;
        uVar5 = (ulong)(local_60[0] >> 1);
        if (bVar2) {
          uVar5 = local_58;
        }
        if (uVar5 != 0) {
          __s1 = (char *)((ulong)local_60 | 1);
          if (bVar2) {
            __s1 = local_50;
          }
          iVar3 = strcmp(__s1,*(char **)(*(long *)(param_1 + 0x18) + lVar8));
          if (iVar3 == 0) {
            uVar4 = *(undefined8 *)(param_1 + 8);
            uVar5 = uVar7 & 0xffffffff;
            goto LAB_00bd63cc;
          }
          uVar6 = *(uint *)(param_1 + 0x10);
        }
        uVar5 = uVar7 & 0xffffffff;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0x10;
    } while (uVar7 < uVar6);
  }
  uVar4 = *(undefined8 *)(param_1 + 8);
LAB_00bd63cc:
  FUN_00c35b04(uVar4,uVar5);
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bd6418(long param_1,uint param_2)

{
  FUN_00c357f4(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




bool FUN_00bd6424(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0093d7f8();
  if (((uVar2 & 1) == 0) || (*(char *)(param_2 + 8) != '\0')) {
    bVar1 = param_3 != 0;
    if ((param_3 != 0) &&
       ((uVar2 = FUN_00cc851c(param_3), (uVar2 & 1) != 0 &&
        (uVar2 = FUN_00cc99fc(param_3), (uVar2 & 1) == 0)))) {
      return false;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




void FUN_00bd648c(undefined8 param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = FUN_0093dbe8();
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_009580b8();
    FUN_008fa54c(local_50,*param_2);
    uVar3 = FUN_00961744(uVar4,local_50);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    if ((uVar3 & 1) == 0) {
      FUN_00ceace8();
      uVar3 = FUN_00ceaf1c();
      if (((((uVar3 & 1) != 0) || (param_3 == 0)) || (*(char *)((long)param_2 + 0x34) != '\0')) ||
         (uVar3 = FUN_00cc851c(param_3), (uVar3 & 1) != 0)) {
        bVar2 = *(int *)(param_2 + 4) == 0;
        goto LAB_00bd6514;
      }
    }
  }
  bVar2 = true;
LAB_00bd6514:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}




void FUN_00bd6558(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
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
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00bd66a8(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = *param_2;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x10;
  *(undefined8 *)(lVar1 + -8) = param_2[1];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  return;
}




void FUN_00bd65e0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed738;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027ec488;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd6644(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ed738;
  if ((void *)param_1[3] != (void *)0x0) {
    operator_delete__((void *)param_1[3]);
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &PTR___cxa_pure_virtual_027ec488;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bd66a8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 4);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 4;
      puVar4 = puVar1;
      do {
        uVar5 = *puVar2;
        lVar3 = lVar3 + -0x10;
        puVar4[1] = puVar2[1];
        *puVar4 = uVar5;
        puVar4 = puVar4 + 2;
        puVar2 = puVar2 + 2;
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




void FUN_00bd672c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009580b8();
  FUN_0096005c(uVar1,param_2,param_3);
  FUN_00900b3c();
  return;
}




void FUN_00bd675c(void)

{
  FUN_00aa25b0("https://my.superevilmegacorp.net/passwordResetRequest",0);
  return;
}




void FUN_00bd676c(long param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 auStack_48 [32];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(param_2 + 0x28) == 0) && (uVar3 = FUN_009480e0(), (uVar3 & 1) == 0)) {
    uVar2 = FUN_00f048a4("UI::EVENT_USER_LOGGED_IN_OR_SIGNED_UP");
    FUN_00f048e0(auStack_48,uVar2,param_1);
    FUN_00f04760(*(undefined8 *)(param_1 + 8),auStack_48,1);
  }
  FUN_00c36b6c(*(undefined8 *)(param_1 + 8),0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd67f8(long param_1)

{
  FUN_00bd676c(param_1 + -0x10);
  return;
}




void FUN_00bd6800(undefined8 *param_1)

{
  FUN_00e835e0(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ed7d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd684c(undefined8 *param_1)

{
  FUN_00e835e0(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ed7d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bd6898(long param_1)

{
  FUN_00e835e0();
  *(undefined ***)(param_1 + -0x10) = &PTR___cxa_pure_virtual_027ed7d0;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  *(undefined8 *)(param_1 + -8) = 0;
  return;
}




void FUN_00bd68e0(long param_1)

{
  FUN_00e835e0();
  *(undefined8 *)(param_1 + -0x10) = &PTR___cxa_pure_virtual_027ed7d0;
  if (*(long **)(param_1 + -8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + -8) + 8))();
  }
  operator_delete((undefined8 *)(param_1 + -0x10));
  return;
}




void FUN_00bd6928(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ed7d0;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd696c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd6970);
  (*pcVar1)();
}




void FUN_00bd6970(long param_1,undefined8 param_2,uint param_3)

{
  FUN_00c38cf8(*(undefined8 *)(param_1 + 8),param_2,param_3 & 1);
  return;
}




void FUN_00bd697c(undefined8 *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  
  *param_1 = &PTR___cxa_pure_virtual_027ed898;
  pvVar1 = operator_new(0x4608);
  FUN_00c397a4();
  param_1[1] = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0x648) = param_1;
  FUN_00bd7114(param_1 + 2);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027ed800;
  param_1[2] = &PTR_FUN_027ed840;
  FUN_00c3a630(param_1[1],param_2 & 1,param_3 & 1);
  return;
}




void FUN_00bd6a08(undefined8 *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  code *pcStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027ed898;
  pvVar2 = operator_new(0x4608);
  FUN_00c397a4();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0x648) = param_1;
  FUN_00bd7114(param_1 + 2);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = &PTR_FUN_027ed800;
  param_1[2] = &PTR_FUN_027ed840;
  FUN_00c3a630(param_1[1],param_3 & 1,param_4 & 1);
  FUN_00bd6afc(param_1,param_2);
  lVar3 = FUN_00cdbb24(param_2);
  if (lVar3 != 0) {
    local_68 = 0;
    pcStack_50 = FUN_00bd7008;
    puStack_60 = param_1;
    local_58 = param_1;
    FUN_00bd6f78(lVar3,&local_68);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd6afc(long param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [128];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008fce60(param_1 + 0x18);
  lVar3 = FUN_00cdbb24(param_1 + 0x18);
  if ((lVar3 != 0) && ((*(ushort *)(lVar3 + 0xb0) >> 8 & 1) != 0)) {
    puVar4 = (undefined8 *)FUN_00cdda38(lVar3);
    FUN_008fce60(param_1 + 0x30,(byte *)(lVar3 + 0x78));
    FUN_00c3b27c(*(undefined8 *)(param_1 + 8),*puVar4);
    FUN_00c3b3c4(*(undefined8 *)(param_1 + 8),*(undefined4 *)(puVar4 + 3));
    if ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
      lVar5 = lVar3 + 0x79;
    }
    else {
      lVar5 = *(long *)(lVar3 + 0x88);
    }
    lVar5 = FUN_00ce9cb8(lVar5);
    FUN_00e6a8a8(auStack_c8,PTR_s_build___HUDPartsHero__s_png_02be3470,*(undefined8 *)(lVar5 + 0x20)
                );
    if (*(int *)(puVar4 + 3) - 1U < 3) {
      puVar6 = (&PTR_s_rare_027ed870)[(int)(*(int *)(puVar4 + 3) - 1U)];
    }
    else {
      puVar6 = &DAT_01e277f2;
    }
    FUN_00c3b70c(*(undefined8 *)(param_1 + 8),auStack_c8,puVar4[2],puVar6);
    if ((*(byte *)(lVar3 + 0x78) & 1) == 0) {
      lVar5 = lVar3 + 0x79;
    }
    else {
      lVar5 = *(long *)(lVar3 + 0x88);
    }
    lVar5 = FUN_00ce9b48(lVar5);
    FUN_00e6a8a8(auStack_c8,"portrait_%s",*(undefined8 *)(lVar5 + 0x10));
    FUN_00c3b6c0(*(undefined8 *)(param_1 + 8),auStack_c8);
    FUN_00c3b2c0(*(undefined8 *)(param_1 + 8),
                 (ulong)(long)(short)(*(short *)(lVar3 + 0xb0) << 8) >> 8);
    FUN_00c3b53c(*(undefined8 *)(param_1 + 8),(long)(short)*(long *)(lVar3 + 0xa8),
                 (*(long *)(lVar3 + 0xa8) << 0x20) >> 0x30);
    FUN_00c3b168(*(undefined8 *)(param_1 + 8),*(ushort *)(lVar3 + 0xb0) >> 9 & 1);
    FUN_00c3b180(*(undefined8 *)(param_1 + 8),*(ushort *)(lVar3 + 0xb0) >> 0xb & 1);
    uVar7 = *(undefined8 *)(param_1 + 8);
    uVar2 = FUN_00cdccb0(lVar3);
    FUN_00c3b1a4(uVar7,uVar2 & 1);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd6cac(undefined8 *param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  byte *pbVar5;
  
  *param_1 = &PTR_FUN_027ed800;
  param_1[2] = &PTR_FUN_027ed840;
  pbVar5 = (byte *)(param_1 + 3);
  if ((*pbVar5 & 1) == 0) {
    if (*pbVar5 >> 1 == 0) goto LAB_00bd6d34;
  }
  else if (param_1[4] == 0) goto LAB_00bd6d34;
  puVar2 = (uint *)FUN_00cdbb24(pbVar5);
  if (puVar2 != (uint *)0x0) {
    lVar4 = (ulong)*puVar2 << 5;
    lVar1 = *(long *)(puVar2 + 2);
    do {
      lVar3 = lVar1;
      if (lVar4 == 0) goto LAB_00bd6d34;
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
    } while (*(undefined8 **)(lVar3 + 8) != param_1);
    FUN_00bd709c(puVar2,lVar3);
  }
LAB_00bd6d34:
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    operator_delete((void *)param_1[8]);
  }
  if ((*pbVar5 & 1) != 0) {
    operator_delete((void *)param_1[5]);
  }
  FUN_00bd7128(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ed898;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd6d94(long param_1)

{
  FUN_00bd6cac(param_1 + -0x10);
  return;
}




void FUN_00bd6d9c(void *param_1)

{
  FUN_00bd6cac();
  operator_delete(param_1);
  return;
}




void FUN_00bd6dc0(long param_1)

{
  FUN_00bd6cac((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bd6de8(long param_1)

{
  FUN_00cae740(0x44e10000,0x44960000,param_1 + 0x18,0,1);
  return;
}




void FUN_00bd6e04(void)

{
  long lVar1;
  undefined8 uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00cae8f0();
  FUN_008fa54c(local_40,uVar2);
  FUN_00affa44(local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bd6e6c(long param_1)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    if (*(byte *)(param_1 + 0x18) >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  puVar2 = (uint *)FUN_00cdbb24();
  if (puVar2 != (uint *)0x0) {
    lVar4 = (ulong)*puVar2 << 5;
    lVar1 = *(long *)(puVar2 + 2);
    while (lVar3 = lVar1, lVar4 != 0) {
      lVar4 = lVar4 + -0x20;
      lVar1 = lVar3 + 0x20;
      if (*(long *)(lVar3 + 8) == param_1) {
        FUN_00bd709c(puVar2,lVar3);
        return;
      }
    }
  }
  return;
}




void FUN_00bd6ee0(long param_1,uint param_2)

{
  FUN_00c3b9f8(*(undefined8 *)(param_1 + 8),param_2 & 1);
  return;
}




void FUN_00bd6eec(long param_1,ulong param_2)

{
  if ((param_2 & 1) != 0) {
    FUN_00c3b9c0(*(undefined8 *)(param_1 + 8),1,0);
    return;
  }
  FUN_00c3b9d8(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bd6f04(long param_1)

{
  FUN_00bd6afc(param_1,param_1 + 0x18);
  return;
}




undefined8 FUN_00bd6f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




long FUN_00bd6f14(long param_1)

{
  return param_1 + 0x10;
}




undefined8 FUN_00bd6f1c(void)

{
  return 0;
}




void FUN_00bd6f24(void)

{
  return;
}




undefined8 FUN_00bd6f28(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_00bd6f30(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ed898;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bd6f74(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbd6f78);
  (*pcVar1)();
}




void FUN_00bd6f78(uint *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
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
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_00bd7010(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  uVar5 = param_2[2];
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  *(undefined8 *)(lVar1 + -8) = param_2[3];
  *(undefined8 *)(lVar1 + -0x10) = uVar5;
  uVar5 = *param_2;
  *(undefined8 *)(lVar1 + -0x18) = param_2[1];
  *(undefined8 *)(lVar1 + -0x20) = uVar5;
  return;
}

