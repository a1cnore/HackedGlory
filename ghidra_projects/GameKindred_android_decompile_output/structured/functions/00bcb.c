// functions/00bcb — 23 functions
#include "libGameKindred.h"




void FUN_00bcb010(long param_1)

{
  FUN_00bcafd8(param_1 + -0xa8);
  return;
}




void FUN_00bcb018(void)

{
  return;
}




void FUN_00bcb01c(void)

{
  return;
}




undefined8 FUN_00bcb020(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bcb028(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_00bcb030(long *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)(**(code **)(*param_1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00bcb050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xf8))();
  return;
}




void FUN_00bcb054(undefined8 param_1,long param_2)

{
  FUN_00bcb0b0(param_1,param_2 + 8);
  return;
}




void FUN_00bcb060(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ec3a8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bcb0a4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbcb0a8);
  (*pcVar1)();
}




void FUN_00bcb0a8(long param_1)

{
  FUN_00c227c0(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bcb0b0(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_00bcad08(param_1,*param_2);
  uVar2 = 0;
  if (*param_2 != 0) {
    lVar3 = *(long *)(param_2 + 2);
    lVar4 = *(long *)(param_1 + 2);
    lVar5 = lVar3 + (ulong)*param_2 * 0x48;
    do {
      FUN_008fcdb8(lVar4,lVar3);
      FUN_008fcdb8(lVar4 + 0x18,lVar3 + 0x18);
      *(undefined2 *)(lVar4 + 0x40) = *(undefined2 *)(lVar3 + 0x40);
      puVar1 = (undefined8 *)(lVar3 + 0x38);
      uVar6 = *(undefined8 *)(lVar3 + 0x30);
      lVar3 = lVar3 + 0x48;
      *(undefined8 *)(lVar4 + 0x38) = *puVar1;
      *(undefined8 *)(lVar4 + 0x30) = uVar6;
      lVar4 = lVar4 + 0x48;
    } while (lVar3 != lVar5);
    uVar2 = *param_2;
  }
  *param_1 = uVar2;
  return;
}




void FUN_00bcb144(code *param_1,undefined4 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  code *local_78;
  code *pcStack_70;
  code *local_68;
  code *local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  *(undefined ***)param_1 = &PTR___cxa_pure_virtual_027ec4b8;
  pvVar4 = operator_new(0x7058);
  FUN_00c2314c();
  *(void **)(param_1 + 8) = pvVar4;
  *(code **)((long)pvVar4 + 0xd8) = param_1;
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_027ec468;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  lVar7 = 0x28;
  *(undefined ***)param_1 = &PTR_thunk_FUN_00bcd9a0_027ec3d8;
  *(undefined8 *)(param_1 + 0x20) = 0;
  do {
    FUN_00bd55d4(param_1 + lVar7);
    lVar7 = lVar7 + 0x28;
  } while (lVar7 != 0xf0);
  lVar7 = 0xf0;
  do {
    FUN_00bd55d4(param_1 + lVar7);
    lVar7 = lVar7 + 0x28;
  } while (lVar7 != 0x1b8);
  FUN_00bd6088(param_1 + 0x1b8,param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x1350) = 0;
  *(undefined8 *)(param_1 + 0x1348) = 0;
  memset(param_1 + 0x1e8,0,0x1152);
  *(code **)(param_1 + 0x1340) = param_1 + 0x1348;
  *(undefined8 *)(param_1 + 0x1368) = 0;
  *(undefined8 *)(param_1 + 0x1360) = 0;
  *(undefined8 *)(param_1 + 0x13c8) = 0;
  *(code **)(param_1 + 0x1358) = param_1 + 0x1360;
  FUN_008fcdb8(param_1 + 0x13d0,&DAT_0320ffa8);
  *(undefined8 *)(param_1 + 0x13f8) = 0;
  *(undefined8 *)(param_1 + 0x13f0) = 0;
  *(undefined8 *)(param_1 + 0x13e8) = 0;
  *(undefined4 *)(param_1 + 0x141c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1410) = 0;
  *(undefined8 *)(param_1 + 0x1408) = 0xff000000ff;
  *(undefined8 *)(param_1 + 0x1400) = 0xffffffffff;
  *(undefined4 *)(param_1 + 0x1414) = 0xffff;
  *(undefined4 *)(param_1 + 0x1418) = 0xffff;
  param_1[0x1420] = (code)(param_3 & 1);
  *(undefined4 *)(param_1 + 0x1421) = 0;
  pvVar4 = operator_new(0x98);
  FUN_009e08ac();
  *(void **)(param_1 + 0x13c8) = pvVar4;
  lVar7 = -0x38;
  do {
    lVar1 = lVar7 + 8;
    *(undefined4 *)(param_1 + lVar7 + 0x13a8) = 0xffff;
    *(undefined4 *)(param_1 + lVar7 + 0x13ac) = 0xff;
    lVar7 = lVar1;
  } while (lVar1 != 0);
  *(undefined4 *)(param_1 + 0x13c0) = 0;
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  *(undefined8 *)(param_1 + 0x13a8) = 0;
  *(undefined8 *)(param_1 + 0x13b8) = 0;
  FUN_00bcb4dc(param_1);
  local_78 = (code *)0x0;
  local_60 = thunk_FUN_00bcb7b8;
  pcStack_70 = param_1;
  local_68 = param_1;
  FUN_00bce778(*(long *)(param_1 + 0x13c8) + 0x18,&local_78);
  pcStack_70 = (code *)0x0;
  local_60 = FUN_00bce898;
  local_78 = param_1;
  local_68 = param_1;
  FUN_009e4694(*(long *)(param_1 + 0x13c8) + 0x48,&local_78);
  pvVar4 = operator_new(0x58);
  FUN_00bc4e08();
  *(void **)(param_1 + 0x13e8) = pvVar4;
  *(undefined4 *)((long)pvVar4 + 0x50) = 100;
  FUN_00c19c68(*(undefined8 *)((long)pvVar4 + 8),0);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x13e8) + 8) + 0x41d0) = 0;
  FUN_00c243fc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x13e8) + 8),1,0);
  FUN_00bc509c(*(undefined8 *)(param_1 + 0x13e8));
  pvVar4 = operator_new(0x58);
  FUN_00bc4e08();
  *(void **)(param_1 + 0x13f0) = pvVar4;
  *(undefined4 *)((long)pvVar4 + 0x50) = 10;
  FUN_00c19c68(*(undefined8 *)((long)pvVar4 + 8),1);
  FUN_00c243fc(*(undefined8 *)(param_1 + 8),*(undefined8 *)(*(long *)(param_1 + 0x13f0) + 8),0,1);
  FUN_00bc509c(*(undefined8 *)(param_1 + 0x13f0));
  FUN_00c24508(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x1c0));
  FUN_00c357f4(*(undefined8 *)(param_1 + 0x1c0),0);
  lVar7 = FUN_00ceace8();
  if (lVar7 != 0) {
    lVar7 = *(long *)(param_1 + 8);
    uVar5 = FUN_00ceace8();
    FUN_00ceace8();
    uVar3 = FUN_00ceae78();
    FUN_00aae790(lVar7 + 0xd98,uVar5,uVar3 & 1);
  }
  local_50 = DAT_0313adec;
  local_78 = FUN_00bcb53c;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  FUN_009693a0(*(long *)(param_1 + 8) + 8,&local_78);
  local_50 = DAT_0313adf0;
  local_78 = FUN_00bcb550;
  local_60 = (code *)0x0;
  uStack_58 = 0;
  local_68 = (code *)0x0;
  pcStack_70 = param_1;
  FUN_009693a0(*(long *)(param_1 + 8) + 8,&local_78);
  pcStack_70 = thunk_FUN_00bcdc9c;
  local_78 = param_1;
  FUN_00f02e98(0xbf800000,&local_78,0,1);
  lVar7 = FUN_00ceace8();
  if (lVar7 != 0) {
    FUN_00ceace8();
    uVar6 = FUN_00ceae80();
    if ((uVar6 & 1) != 0) {
      FUN_00ceace8();
      FUN_00907ce0();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bcb4dc(long param_1)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  
  plVar1 = (long *)FUN_00ce9af4();
  lVar3 = *(long *)*plVar1;
  plVar1 = (long *)*plVar1;
  while (lVar3 != 0) {
    uVar2 = FUN_0093d7f8();
    if (((uVar2 & 1) == 0) || (*(char *)(*plVar1 + 8) != '\0')) {
      FUN_00c24798(*(undefined8 *)(param_1 + 8));
    }
    lVar3 = plVar1[1];
    plVar1 = plVar1 + 1;
  }
  FUN_00c24550(*(undefined8 *)(param_1 + 8));
  FUN_00c24c10(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bcb53c(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) | 4;
  return;
}




void FUN_00bcb550(long param_1)

{
  *(uint *)(*(long *)(param_1 + 8) + 0x32c) = *(uint *)(*(long *)(param_1 + 8) + 0x32c) & 0xfffffffb
  ;
  return;
}




void FUN_00bcb564(undefined8 *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_thunk_FUN_00bcd9a0_027ec3d8;
  param_1[2] = &PTR_FUN_027ec468;
  if ((*(char *)((long)param_1 + 0xa3c) == '\x02') && (lVar4 = FUN_00ceace8(), lVar4 != 0)) {
    FUN_00ceace8();
    uVar5 = FUN_00ceaed4();
    if (((uVar5 & 1) != 0) && (*(char *)((long)param_1 + 0x1337) == '\0')) {
      uVar1 = *(undefined1 *)((long)param_1 + 0xa3d);
      uVar6 = FUN_00ceace8();
      FUN_00908830(uVar1,uVar6);
    }
  }
  pcStack_40 = thunk_FUN_00bcdc9c;
  local_48 = param_1;
  FUN_00f03390(&local_48);
  lVar7 = param_1[0x279];
  lVar10 = (ulong)*(uint *)(lVar7 + 0x18) << 5;
  lVar4 = *(long *)(lVar7 + 0x20);
  do {
    lVar8 = lVar4;
    if (lVar10 == 0) goto LAB_00bcb630;
    lVar10 = lVar10 + -0x20;
    lVar4 = lVar8 + 0x20;
  } while (*(undefined8 **)(lVar8 + 8) != param_1);
  FUN_00bce908((uint *)(lVar7 + 0x18),lVar8);
  lVar7 = param_1[0x279];
LAB_00bcb630:
  lVar4 = (ulong)*(uint *)(lVar7 + 0x48) << 5;
  puVar3 = *(undefined8 **)(lVar7 + 0x50);
  do {
    puVar9 = puVar3;
    if (lVar4 == 0) goto LAB_00bcb658;
    lVar4 = lVar4 + -0x20;
    puVar3 = puVar9 + 4;
  } while ((undefined8 *)*puVar9 != param_1);
  FUN_00910480((uint *)(lVar7 + 0x48),puVar9);
LAB_00bcb658:
  if ((long *)param_1[0x27e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27e] + 0x10))();
  }
  param_1[0x27e] = 0;
  if ((long *)param_1[0x27d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27d] + 0x10))();
  }
  param_1[0x27d] = 0;
  if ((long *)param_1[0x279] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x279] + 8))();
  }
  param_1[0x279] = 0;
  if ((*(byte *)(param_1 + 0x27a) & 1) != 0) {
    operator_delete((void *)param_1[0x27c]);
  }
  FUN_00bce644(param_1 + 0x26b,param_1[0x26c]);
  FUN_00bce69c(param_1 + 0x268,param_1[0x269]);
  param_1[0x37] = &PTR_FUN_027ed738;
  if ((void *)param_1[0x3a] != (void *)0x0) {
    operator_delete__((void *)param_1[0x3a]);
    param_1[0x39] = 0;
    param_1[0x3a] = 0;
  }
  param_1[0x37] = &PTR___cxa_pure_virtual_027ec488;
  if ((long *)param_1[0x38] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x38] + 8))();
  }
  lVar4 = 400;
  param_1[0x38] = 0;
  do {
    FUN_00bd563c((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x28;
  } while (lVar4 != 200);
  do {
    FUN_00bd563c((long)param_1 + lVar4);
    lVar4 = lVar4 + -0x28;
  } while (lVar4 != 0);
  *param_1 = &PTR___cxa_pure_virtual_027ec4b8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bcb794(void *param_1)

{
  FUN_00bcb564();
  operator_delete(param_1);
  return;
}




void FUN_00bcb7b8(long param_1,void *param_2)

{
  void *__src;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  
  __src = (void *)(param_1 + 0x1e8);
  FUN_00bcb8fc(param_1,__src,param_2);
  memcpy((void *)(param_1 + 0xa3e),__src,0x856);
  memcpy(__src,param_2,0x856);
  FUN_00c24550(*(undefined8 *)(param_1 + 8));
  uVar4 = FUN_00bcba2c(param_1);
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1421) = 1;
  }
  fVar5 = *(float *)((long)param_2 + 0x850);
  if (1.0 < ABS(*(float *)(param_1 + 0x1410) - fVar5)) {
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x1410) = fVar5;
  }
  *(undefined4 *)(param_1 + 0x13c0) = 0;
  *(undefined8 *)(param_1 + 0x13b8) = 0;
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  *(undefined8 *)(param_1 + 0x13a8) = 0;
  if ((*(char *)(param_1 + 0x1421) != '\0') && (*(char *)(param_1 + 0x1424) == '\0')) {
    FUN_00c245d8(*(undefined8 *)(param_1 + 8));
  }
  FUN_00bcbd18(param_1);
  FUN_00bcbf28(param_1);
  FUN_00bcc1d8(param_1);
  FUN_00bcc40c(param_1);
  FUN_00bcc578(param_1);
  bVar1 = *(byte *)(param_1 + 0x1335);
  uVar3 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = bVar1 / uVar3;
  }
  *(ulong *)(param_1 + 0x20) = param_1 + (ulong)((uint)bVar1 - uVar2 * uVar3) * 0x28 + 0x28;
  FUN_00bcc7bc(param_1);
  FUN_00bcca98(param_1);
  FUN_00c24e7c(*(undefined4 *)((long)param_2 + 0x850),*(undefined8 *)(param_1 + 8));
  FUN_00bccb10(param_1);
  return;
}




void FUN_00bcb8fc(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  iVar2 = FUN_00bcce54();
  if (iVar2 < 0) {
    bVar1 = false;
  }
  else {
    bVar1 = *(char *)(param_2 + (long)iVar2 * 0xa6 + 0x108) != '\0';
  }
  lVar3 = 0;
  do {
    if (((bVar1) && (*(char *)(param_2 + 0x14 + lVar3) == '\0')) &&
       (*(char *)(param_3 + 0x14 + lVar3) != '\0')) {
      FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_hero_ban.mp3",0,0);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 4);
  lVar3 = 0x10b;
  do {
    if (((bVar1) && (*(char *)(param_2 + lVar3) == '\0')) && (*(char *)(param_3 + lVar3) != '\0')) {
      FUN_00aa12a8(0x3f800000,"build://Sounds/UI.assetbundle/ui_drafting_lock_in_confirm.mp3",0,0);
    }
    lVar3 = lVar3 + 0xa6;
  } while (lVar3 != 0x787);
  if ((*(char *)(param_3 + 0x854) == '\x03') && (*(char *)(param_2 + 0x854) != '\x03')) {
    FUN_00aa132c("VO_Vainglory_SwapHeroes");
    return;
  }
  return;
}




void FUN_00bcba2c(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 uStack_198;
  byte local_197;
  char local_195;
  byte local_193;
  byte local_192;
  ushort local_18f;
  byte local_f6;
  char local_f5;
  char local_f3;
  undefined1 auStack_f0 [3];
  char local_ed;
  ushort local_e7;
  char local_4d;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  iVar5 = FUN_00bcce54();
  if (iVar5 == -1) {
    uVar10 = 0;
    goto LAB_00bcbcec;
  }
  memcpy(auStack_f0,(void *)(param_1 + 0x1294),0xa6);
  memcpy(&uStack_198,(void *)(param_1 + (long)iVar5 * 0xa6 + 0x2f0),0xa6);
  if (((*(char *)(param_1 + 0xa3c) == '\x02') && (local_f6 - 1 == (uint)*(byte *)(param_1 + 0xa3d)))
     && ((uint)*(byte *)(param_1 + 0xa3d) != (uint)*(byte *)(param_1 + 0x1293))) {
    FUN_00bccea0(param_1);
  }
  *(uint *)(param_1 + 0x1400) = (uint)local_197;
  FUN_00bccfdc(param_1,auStack_f0,&uStack_198);
  if (local_4d == '\0') {
    if (local_f5 == '\0') goto LAB_00bcbb5c;
    FUN_00c24690(*(undefined8 *)(param_1 + 8));
    uVar9 = FUN_00bcd110(param_1,*(undefined4 *)(param_1 + 0x1414));
    if ((uVar9 & 1) == 0) {
      FUN_00c2469c(*(undefined8 *)(param_1 + 8));
    }
    FUN_00cbc238();
    if (*(char *)(param_1 + 0xa3c) == '\x01') {
      if (local_f3 != '\0') {
        uVar1 = *(undefined4 *)(param_1 + 0x1414);
        uVar9 = FUN_00bcd194(param_1,uVar1);
        if ((uVar9 & 1) != 0) {
          FUN_009e0c88(*(undefined8 *)(param_1 + 0x13c8),uVar1);
        }
      }
    }
    else if ((*(char *)(param_1 + 0xa3c) == '\x02') &&
            (uVar9 = FUN_00bcd110(param_1,*(undefined4 *)(param_1 + 0x1414)), (uVar9 & 1) != 0)) {
      FUN_009e0bd4(*(undefined8 *)(param_1 + 0x13c8),*(undefined4 *)(param_1 + 0x1414));
    }
    *(uint *)(*(long *)(param_1 + 8) + 0x32c) =
         *(uint *)(*(long *)(param_1 + 8) + 0x32c) & 0xfffffffb;
  }
  else if (local_f5 == '\0') {
LAB_00bcbb5c:
    FUN_00c23fc4(*(undefined8 *)(param_1 + 8));
  }
  if (local_195 == '\0') {
    if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
       (lVar7 = FUN_00c249c0(*(undefined8 *)(param_1 + 8)), lVar7 != 0)) {
      FUN_00aa9b78();
    }
    *(undefined4 *)(param_1 + 0x1418) = 0xffff;
  }
  else {
    if ((*(int *)(param_1 + 0x1414) != 0xffff) &&
       (lVar7 = FUN_00c249c0(*(undefined8 *)(param_1 + 8)), lVar7 != 0)) {
      FUN_00aa9b14();
    }
    *(uint *)(param_1 + 0x1418) = (uint)local_18f;
    if (((local_ed == '\0') || ((uint)local_e7 != (uint)local_18f)) &&
       (puVar8 = (undefined8 *)FUN_00ce9ba0(param_1 + 0x1418), *(char *)(param_1 + 0x1420) == '\0'))
    {
      FUN_00bd6418(param_1 + 0x1b8,1);
      FUN_00bd615c(param_1 + 0x1b8,*puVar8);
    }
  }
  FUN_00bcd220(param_1,&uStack_198);
  *(undefined4 *)(param_1 + 0x1404) = *(undefined4 *)(param_1 + 0x1408);
  *(uint *)(param_1 + 0x1408) = (uint)local_193;
  *(uint *)(param_1 + 0x140c) = (uint)local_192;
  if (*(long *)(param_1 + 0x13f8) != 0) {
    FUN_00cbe2dc();
  }
  memcpy((void *)(param_1 + 0x1294),&uStack_198,0xa6);
  FUN_00ecf888(*(long *)(param_1 + 8) + 0x25f0,*(char *)(param_1 + 0x1297) != '\0');
  uVar9 = FUN_0092e920();
  if (((uVar9 & 1) != 0) && (iVar5 = FUN_00c243f0(*(undefined8 *)(param_1 + 8)), iVar5 != 0)) {
    bVar2 = *(byte *)(param_1 + 0x1335);
    uVar6 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
    if (*(long *)(param_1 + 0x13c8) != 0) {
      uVar3 = 0;
      if (uVar6 != 0) {
        uVar3 = bVar2 / uVar6;
      }
      FUN_00bd5f1c(param_1 + (ulong)((uint)bVar2 - uVar3 * uVar6) * 0x28 + 0x28);
    }
  }
  uVar10 = 1;
LAB_00bcbcec:
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}




void FUN_00bcbd18(long param_1)

{
  char cVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  byte local_90 [16];
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x1424) == '\0') {
    lVar7 = 0;
    iVar8 = 0;
    iVar9 = 0;
    local_78 = 0;
    uStack_70 = 0;
    do {
      if (*(char *)(param_1 + lVar7 + 0x2f0) != '\0') {
        cVar1 = *(char *)(param_1 + lVar7 + 0x2f8);
        if (cVar1 == '\x02') {
          lVar6 = param_1 + (long)iVar9 * 0x28;
          lVar10 = lVar6 + 0xf0;
          FUN_00c24338(*(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar6 + 0xf8));
          FUN_00bd56d8(lVar10,1);
          iVar9 = iVar9 + 1;
          uVar5 = 0;
LAB_00bcbe1c:
          FUN_00bd56cc(lVar10,uVar5);
        }
        else if (cVar1 == '\x01') {
          lVar10 = param_1 + (long)iVar8 * 0x28;
          plVar11 = (long *)(lVar10 + 0x30);
          lVar10 = lVar10 + 0x28;
          FUN_00c2421c(*(undefined8 *)(param_1 + 8),*plVar11);
          if (*(char *)(param_1 + 0x1421) != '\0') {
            *(uint *)(*plVar11 + 0x84) = *(uint *)(*plVar11 + 0x84) & 0xffffffef;
          }
          FUN_00c33e0c(*plVar11,*(int *)(param_1 + 0x18) == 4);
          FUN_00bd56d8(lVar10,1);
          iVar8 = iVar8 + 1;
          uVar5 = 1;
          goto LAB_00bcbe1c;
        }
        FUN_008fa54c(local_90,param_1 + lVar7 + 0x351);
        FUN_0096204c(&local_78,local_90);
        if ((local_90[0] & 1) != 0) {
          operator_delete(local_80);
        }
      }
      lVar7 = lVar7 + 0xa6;
    } while (lVar7 != 0x67c);
    if (*(char *)(param_1 + 0x1420) == '\0') {
      uVar3 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
      FUN_00bccbd8(param_1,uVar3);
    }
    uVar4 = FUN_0092e920();
    if (((uVar4 & 1) != 0) && (uVar4 = thunk_FUN_00ec5f5c(), (uVar4 & 1) != 0)) {
      FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
      FUN_00931e78();
    }
    FUN_00bccd24(param_1);
    *(char *)(param_1 + 0x1424) = '\x01';
    uVar5 = FUN_009580b8();
    FUN_00962178(uVar5,&local_78);
    lVar7 = FUN_00ceace8();
    if (lVar7 != 0) {
      FUN_00ceace8();
      FUN_00907ecc();
    }
    if (*(char *)(param_1 + 0x1420) == '\0') {
      FUN_00ceace8();
      uVar4 = FUN_00ceae78();
      if ((uVar4 & 1) != 0) {
        FUN_009013e4();
      }
    }
    FUN_00c23bd0(*(undefined8 *)(param_1 + 8),1);
    FUN_00951534(&local_78,1);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bcbf28(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  char cVar14;
  byte bVar15;
  byte bVar16;
  long lVar17;
  ulong uVar18;
  
  uVar8 = FUN_009e0d70(*(undefined8 *)(param_1 + 0x13c8));
  lVar17 = 0;
  bVar16 = 0;
  bVar6 = false;
  do {
    lVar2 = param_1 + lVar17;
    if (*(char *)(lVar2 + 0x2f0) != '\0') {
      lVar1 = lVar2 + 0x2f0;
      if (((uVar8 & 0xff) == (uint)*(byte *)(lVar2 + 0x2f8)) || (*(byte *)(param_1 + 0x1421) != 0))
      {
        if (*(char *)(param_1 + lVar17 + 0x393) == '\0') {
          bVar15 = 0;
        }
        else {
          bVar15 = *(byte *)(param_1 + 0x1421) ^ 1;
        }
        bVar7 = false;
        bVar16 = bVar15 & 1 | bVar16;
        bVar5 = true;
      }
      else {
        bVar5 = false;
        bVar7 = *(char *)(param_1 + lVar17 + 0x393) != '\0';
      }
      bVar15 = *(byte *)(param_1 + lVar17 + 0x391);
      bVar6 = bVar7 || bVar6 != false;
      uVar9 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
      uVar4 = 0;
      uVar10 = (uint)bVar15;
      if (uVar9 != 0) {
        uVar4 = uVar10 / uVar9;
      }
      uVar10 = uVar10 - uVar4 * uVar9;
      uVar18 = (ulong)uVar10;
      if ((uVar8 & 0xff) == (uint)*(byte *)(lVar2 + 0x2f8)) {
        lVar11 = param_1 + uVar18 * 0x28 + 0x28;
        bVar7 = *(uint *)(param_1 + 0x1400) == (uint)*(byte *)(param_1 + lVar17 + 0x2f1);
      }
      else {
        lVar11 = param_1 + uVar18 * 0x28 + 0xf0;
        bVar7 = false;
      }
      FUN_00bd5bbc(lVar11,lVar1,uVar8,bVar7);
      if (bVar5) {
        lVar11 = param_1 + lVar17;
        bVar15 = *(byte *)(lVar11 + 0x2f5);
        uVar18 = (ulong)bVar15;
        if (uVar18 != 0xff) {
          lVar3 = param_1 + uVar18 * 4;
          *(int *)(lVar3 + 0x13a8) = *(int *)(lVar3 + 0x13a8) + 1;
        }
        if (*(char *)(lVar11 + 0x394) == '\0') {
LAB_00bcc0ec:
          cVar14 = *(char *)(lVar11 + 0x2f3);
        }
        else {
          cVar14 = *(char *)(lVar11 + 0x2f3);
          if ((bVar15 < 6) && (cVar14 != '\0')) {
            lVar3 = param_1 + uVar18 * 8;
            *(uint *)(lVar3 + 0x1370) = (uint)*(ushort *)(param_1 + lVar17 + 0x2f9);
            *(uint *)(lVar3 + 0x1374) = (uint)*(byte *)(param_1 + lVar17 + 0x2f6);
            if (*(long *)(param_1 + 0x13f8) != 0) {
              FUN_00cbe320();
              FUN_00cbe32c(*(undefined8 *)(param_1 + 0x13f8),*(undefined1 *)(lVar11 + 0x2f5),
                           *(undefined4 *)(lVar3 + 0x1374));
            }
            goto LAB_00bcc0ec;
          }
        }
        if ((cVar14 != '\0') && (*(char *)(param_1 + lVar17 + 0xb49) != cVar14)) {
          if ((*(uint *)(param_1 + 0x1404) == (uint)*(byte *)(lVar11 + 0x2f5)) &&
             (*(uint *)(param_1 + 0x1404) != *(uint *)(param_1 + 0x1408))) {
            uVar12 = FUN_00ceace8();
            FUN_0090ce84(uVar12,*(undefined1 *)(lVar11 + 0x2f5));
          }
          FUN_00bcd338(param_1,lVar1);
        }
      }
      else if (*(char *)(param_1 + 0x1420) == '\0') {
        FUN_00ceace8();
        uVar13 = FUN_00ceae78();
        if ((uVar13 & 1) != 0) {
          FUN_00bd56ec(param_1 + uVar18 * 0x28 + 0xf0,uVar10 + 1);
        }
      }
      bVar15 = *(byte *)(lVar2 + 0x2f8);
      uVar12 = *(undefined8 *)(param_1 + 8);
      uVar10 = FUN_00ced270(*(undefined2 *)(param_1 + lVar17 + 0x2fb));
      FUN_00c24d98(uVar12,(uVar8 & 0xff) == (uint)bVar15,uVar10 & 1,lVar1);
    }
    lVar17 = lVar17 + 0xa6;
    if (lVar17 == 0x67c) {
      FUN_00c24640(*(undefined8 *)(param_1 + 8),bVar16,bVar6);
      return;
    }
  } while( true );
}




void thunk_FUN_00bcb7b8(long param_1,void *param_2)

{
  void *__src;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  
  __src = (void *)(param_1 + 0x1e8);
  FUN_00bcb8fc(param_1,__src,param_2);
  memcpy((void *)(param_1 + 0xa3e),__src,0x856);
  memcpy(__src,param_2,0x856);
  FUN_00c24550(*(undefined8 *)(param_1 + 8));
  uVar4 = FUN_00bcba2c(param_1);
  if ((uVar4 & 1) == 0) {
    *(undefined1 *)(param_1 + 0x1421) = 1;
  }
  fVar5 = *(float *)((long)param_2 + 0x850);
  if (1.0 < ABS(*(float *)(param_1 + 0x1410) - fVar5)) {
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    *(float *)(param_1 + 0x1410) = fVar5;
  }
  *(undefined4 *)(param_1 + 0x13c0) = 0;
  *(undefined8 *)(param_1 + 0x13b8) = 0;
  *(undefined8 *)(param_1 + 0x13b0) = 0;
  *(undefined8 *)(param_1 + 0x13a8) = 0;
  if ((*(char *)(param_1 + 0x1421) != '\0') && (*(char *)(param_1 + 0x1424) == '\0')) {
    FUN_00c245d8(*(undefined8 *)(param_1 + 8));
  }
  FUN_00bcbd18(param_1);
  FUN_00bcbf28(param_1);
  FUN_00bcc1d8(param_1);
  FUN_00bcc40c(param_1);
  FUN_00bcc578(param_1);
  bVar1 = *(byte *)(param_1 + 0x1335);
  uVar3 = FUN_00c243f0(*(undefined8 *)(param_1 + 8));
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = bVar1 / uVar3;
  }
  *(ulong *)(param_1 + 0x20) = param_1 + (ulong)((uint)bVar1 - uVar2 * uVar3) * 0x28 + 0x28;
  FUN_00bcc7bc(param_1);
  FUN_00bcca98(param_1);
  FUN_00c24e7c(*(undefined4 *)((long)param_2 + 0x850),*(undefined8 *)(param_1 + 8));
  FUN_00bccb10(param_1);
  return;
}

