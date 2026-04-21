// functions/00cbf — 26 functions
#include "libGameKindred.h"




void thunk_FUN_00cbf96c(void)

{
  FUN_00cbf91c(&DAT_01e277f2);
  return;
}




void FUN_00cbf060(long param_1)

{
  long lVar1;
  float fVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00f00298(&fStack_3c,&local_40);
  uVar4 = (ulong)(uint)(local_40 - 100.0);
  fVar2 = fStack_3c - 200.0;
  if (2300.0 <= fStack_3c - 200.0) {
    fVar2 = 2300.0;
  }
  local_48 = 0x41200000;
  FUN_00b0877c(param_1,&local_48);
  uVar3 = FUN_00b07b80(fVar2,param_1);
  FUN_00b07b44(param_1);
  FUN_00b07d08(param_1,0);
  FUN_00b0828c(param_1);
  *(int *)(param_1 + 0x4954) = (int)uVar3;
  *(int *)(param_1 + 0x4958) = (int)uVar4;
  FUN_00f13f08(uVar3,uVar4,param_1 + 0x1cf0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbf15c(long param_1)

{
  thunk_FUN_00b07e7c();
  FUN_00b57430(param_1 + 0x1cf0,1);
  return;
}




void FUN_00cbf188(long param_1)

{
  thunk_FUN_00b07fec();
  FUN_00b57430(param_1 + 0x1cf0,0);
  return;
}




void FUN_00cbf1b4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b908;
  param_1[0x92c] = &PTR_FUN_028266f0;
  param_1[0x943] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x946);
  FUN_00f13d08(param_1 + 0x92c);
  FUN_00b56d7c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbf224(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_0280b908;
  param_1[0x92c] = &PTR_FUN_028266f0;
  param_1[0x943] = &PTR_FUN_02826850;
  FUN_00f0a79c(param_1 + 0x946);
  FUN_00f13d08(param_1 + 0x92c);
  FUN_00b56d7c(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  operator_delete(param_1);
  return;
}




void FUN_00cbf29c(undefined8 param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00aa1880();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00aa19fc("PLAY_MENU"), (uVar1 & 1) == 0)) {
    pvVar2 = operator_new(0x2458);
    FUN_00cbf374();
    FUN_00b07a8c(pvVar2,param_1);
    FUN_00aa18e0(pvVar2,"PLAY_MENU",1,0,1);
    return;
  }
  return;
}




void FUN_00cbf310(void)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = FUN_00aa1880();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_00aa19fc("PLAY_MENU"), (uVar1 & 1) == 0)) {
    pvVar2 = operator_new(0x2458);
    FUN_00cbf374();
    FUN_00aa19a8(pvVar2,"PLAY_MENU",1,0,1);
    return;
  }
  return;
}




void FUN_00cbf374(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  code *local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  code *local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00b06f74();
  *param_1 = &PTR_FUN_0280ba38;
  FUN_00bdd264(param_1 + 0x39e);
  FUN_00ca92f8(param_1 + 0x3b4);
  *(undefined2 *)(param_1 + 0x48a) = 0x100;
  lVar2 = FUN_00a06b24();
  local_68 = (code *)0x0;
  local_50 = FUN_00cbf90c;
  puStack_60 = param_1;
  local_58 = param_1;
  FUN_00933ec0(lVar2 + 0x30,&local_68);
  FUN_00b0780c(param_1,param_1[0x39f]);
  FUN_00b07888(param_1,param_1 + 0x3b4);
  FUN_00b075b8(param_1,1);
  uVar3 = FUN_00e6ce7c("MAIN_MENU_PLAY",0);
  FUN_00b078b8(param_1,uVar3);
  local_40 = DAT_0313abc0;
  local_68 = FUN_00cbf498;
  local_50 = (code *)0x0;
  uStack_48 = 0;
  local_58 = (undefined8 *)0x0;
  puStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  FUN_00bdd4d8(param_1 + 0x39e);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbf498(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_00cbf7a4(param_1,param_4);
  return;
}




void FUN_00cbf4a0(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_0280ba38;
  lVar2 = FUN_00a06b24();
  lVar4 = (ulong)*(uint *)(lVar2 + 0x30) << 5;
  lVar1 = *(long *)(lVar2 + 0x38);
  do {
    lVar3 = lVar1;
    if (lVar4 == 0) goto LAB_00cbf4f0;
    lVar4 = lVar4 + -0x20;
    lVar1 = lVar3 + 0x20;
  } while (*(undefined8 **)(lVar3 + 8) != param_1);
  FUN_00933fe0((uint *)(lVar2 + 0x30),lVar3);
LAB_00cbf4f0:
  FUN_00ca97b0(param_1 + 0x3b4);
  FUN_00bdd300(param_1 + 0x39e);
  FUN_00b08b68(param_1);
  return;
}




void FUN_00cbf518(void *param_1)

{
  FUN_00cbf4a0();
  operator_delete(param_1);
  return;
}




void FUN_00cbf53c(long param_1)

{
  ulong uVar1;
  
  FUN_00ca98f0(param_1 + 0x1da0);
  uVar1 = FUN_00f023dc(param_1 + 0x168);
  if ((uVar1 & 1) == 0) {
    FUN_00cbf57c(param_1);
  }
  FUN_00b0828c(param_1);
  return;
}




void FUN_00cbf57c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float local_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 auStack_50 [4];
  float local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if ((*(char *)(param_1 + 0x2450) == '\0') || (*(char *)(param_1 + 0x2451) != '\0')) {
    FUN_00f00298(&local_4c,auStack_50);
    local_58 = 0;
    fVar5 = local_4c - 200.0;
    FUN_00b0877c(param_1,&local_58);
    uVar6 = 0x44a28000;
    uVar2 = FUN_00b07b80(fVar5,param_1);
    local_58 = CONCAT44(uVar6,uVar2);
    FUN_00f13f18(*(undefined8 *)(param_1 + 0x1cf8),&local_58);
    (**(code **)(**(long **)(param_1 + 0x1cf8) + 0x90))();
    fVar3 = (float)FUN_00c49ed0(*(undefined8 *)(param_1 + 0x1cf8));
    fVar4 = (float)FUN_00b07bbc(param_1);
    if (fVar3 <= fVar4) {
      fVar3 = fVar4;
    }
    local_60 = (float)local_58;
    if (fVar3 <= (float)local_58) {
      local_60 = fVar3;
    }
    uStack_5c = local_58._4_4_;
    fVar3 = (float)FUN_00b07b44(param_1);
    if (fVar3 <= fVar5) {
      fVar5 = fVar3;
    }
    FUN_00b07d08(fVar5,0x44a28000,param_1,*(char *)(param_1 + 0x2450));
    FUN_00b0828c(param_1);
    FUN_00f13f18(*(undefined8 *)(param_1 + 0x1cf8),&local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00cbf6c0(long param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  thunk_FUN_00b07e7c();
  lVar1 = FUN_00a1ffc0();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  if (plVar3 != (long *)0x0) {
    plVar4 = plVar2;
    do {
      if (*(uint *)(plVar3 + 4) >= 0xb3cf6e0d) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xb3cf6e0d];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xb3cf6e0e)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])
                  (*(undefined8 *)(plVar4[6] + lVar1),param_1 + 0x1cf0);
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_00cbf76c(long param_1)

{
  thunk_FUN_00b07fec();
  FUN_00bdd420(param_1 + 0x1cf0);
  return;
}




void FUN_00cbf794(undefined8 param_1,int *param_2)

{
  if (*param_2 != 0) {
    return;
  }
  FUN_00b07af8();
  return;
}




void FUN_00cbf7a4(long *param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  lVar1 = FUN_00f04924(param_2);
  lVar3 = lVar1 + 0x20;
  uVar2 = FUN_00e70b88(lVar3,&DAT_03210450);
  if ((uVar2 & 1) == 0) {
    lVar3 = FUN_00e6ce7c("MAIN_MENU_PLAY",0);
  }
  FUN_00b078b8(param_1,lVar3);
  FUN_00b07ad0(param_1,*(undefined1 *)(lVar1 + 0x30));
  *(uint *)((long)param_1 + 0x19f4) =
       *(uint *)((long)param_1 + 0x19f4) & 0xfffffffb |
       ((uint)*(byte *)(lVar1 + 0x32) << 2 ^ 4) & 0xfc;
  *(undefined1 *)((long)param_1 + 0x2451) = *(undefined1 *)(lVar1 + 0x31);
  (**(code **)(*param_1 + 0x118))(param_1);
  *(undefined1 *)(param_1 + 0x48a) = 1;
  lVar3 = FUN_00ed373c(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_00ed373c(param_1);
    uVar2 = FUN_00ed2d8c(uVar4,param_1);
    if ((uVar2 & 1) != 0) {
      lVar3 = FUN_00a1ffc0();
      plVar5 = (long *)(lVar3 + 0x10);
      plVar6 = (long *)*plVar5;
      if (plVar6 != (long *)0x0) {
        plVar7 = plVar5;
        do {
          if (*(uint *)(plVar6 + 4) >= 0xb3cf6e0d) {
            plVar7 = plVar6;
          }
          plVar6 = (long *)plVar6[*(uint *)(plVar6 + 4) < 0xb3cf6e0d];
        } while (plVar6 != (long *)0x0);
        if (((plVar7 != plVar5) && (*(uint *)(plVar7 + 4) < 0xb3cf6e0e)) && ((int)plVar7[5] != 0)) {
          lVar3 = 0;
          uVar2 = 0;
          do {
            (*(code *)((undefined8 *)(plVar7[6] + lVar3))[1])
                      (*(undefined8 *)(plVar7[6] + lVar3),param_1 + 0x39e);
            uVar2 = uVar2 + 1;
            lVar3 = lVar3 + 0x10;
          } while (uVar2 < *(uint *)(plVar7 + 5));
        }
      }
    }
  }
  return;
}




void FUN_00cbf90c(undefined8 param_1,int *param_2)

{
  if (*param_2 != 0) {
    return;
  }
  FUN_00b07af8();
  return;
}




void FUN_00cbf91c(undefined8 param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x288f0);
  FUN_00cbf978();
  FUN_00b07a8c(pvVar1,param_1);
  FUN_00aa18e0(pvVar1,0,1,0,1);
  return;
}




void FUN_00cbf96c(void)

{
  FUN_00cbf91c(&DAT_01e277f2);
  return;
}




void FUN_00cbf978(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  code *local_98;
  long *local_90;
  void *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar13 = tpidr_el0;
  local_68 = *(long *)(lVar13 + 0x28);
  FUN_00b06f74();
  FUN_00948cd8(param_1 + 0x39e);
  *param_1 = (long)&PTR_FUN_0280bb68;
  param_1[0x39e] = (long)&PTR_FUN_0280bca0;
  FUN_00b6cc2c(param_1 + 0x3a1);
  FUN_00b1a1c4();
  plVar1 = param_1 + 0x5075;
  FUN_00f017e8();
  plVar2 = param_1 + 0x5086;
  FUN_00f0d160(plVar2);
  plVar3 = param_1 + 0x50ac;
  FUN_00f0d160(plVar3);
  plVar4 = param_1 + 0x50d2;
  FUN_00f0d160(plVar4);
  plVar5 = param_1 + 0x50f8;
  FUN_00f0d160(plVar5);
  FUN_00b0780c(param_1,param_1 + 0x3a1);
  local_70 = DAT_0313377c;
  local_98 = thunk_FUN_00b07af8;
  local_80 = 0;
  local_78 = 0;
  local_88 = (void *)0x0;
  local_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  FUN_00b075b8(param_1,1);
  FUN_00f0d378(plVar2,PTR_s_build___Fonts_Brandon_Bold_80_fo_02be9ca0);
  FUN_00f0d378(plVar3,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d378(plVar4,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_60_fo_02be9c90);
  FUN_009580b8();
  uVar14 = FUN_0095fdf0();
  FUN_00f0d75c(plVar2,uVar14);
  uVar14 = FUN_00e6ce7c("MENU_PROFILE_TAB_RANKED_5V5",0);
  FUN_00f0d75c(plVar3,uVar14);
  uVar14 = FUN_00e6ce7c("MENU_PROFILE_TAB_RANKED_3V3",0);
  FUN_00f0d75c(plVar4,uVar14);
  uVar14 = FUN_00e6ce7c("GENERIC_STATS",0);
  FUN_00f0d75c(plVar5,uVar14);
  uVar10 = DAT_03210f60;
  local_98 = FUN_00cbff00;
  local_80 = 0;
  local_78 = 0;
  local_88 = (void *)0x0;
  local_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x5087,&local_98);
  local_98 = FUN_00cbff00;
  uVar11 = DAT_03210f8c;
  local_80 = 0;
  local_78 = 0;
  local_88 = (void *)0x0;
  local_90 = param_1;
  local_70 = uVar11;
  FUN_009693a0(param_1 + 0x5087,&local_98);
  local_98 = FUN_00cbff00;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 1;
  local_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x50ad,&local_98);
  local_98 = FUN_00cbff00;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 1;
  local_90 = param_1;
  local_70 = uVar11;
  FUN_009693a0(param_1 + 0x50ad,&local_98);
  local_98 = FUN_00cbff00;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 2;
  local_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x50d3,&local_98);
  local_98 = FUN_00cbff00;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 2;
  local_90 = param_1;
  local_70 = uVar11;
  FUN_009693a0(param_1 + 0x50d3,&local_98);
  local_98 = FUN_00cbff00;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 3;
  local_90 = param_1;
  local_70 = uVar10;
  FUN_009693a0(param_1 + 0x50f9,&local_98);
  local_98 = FUN_00cbff00;
  local_88 = (void *)0x0;
  local_80 = 0;
  local_78 = 3;
  local_90 = param_1;
  local_70 = uVar11;
  FUN_009693a0(param_1 + 0x50f9,&local_98);
  puVar6 = (uint *)((long)param_1 + 0x284b4);
  puVar7 = (uint *)((long)param_1 + 0x285e4);
  *puVar6 = *puVar6 | 0x10;
  puVar8 = (uint *)((long)param_1 + 0x28714);
  *puVar7 = *puVar7 | 0x10;
  puVar9 = (uint *)((long)param_1 + 0x28844);
  *puVar8 = *puVar8 | 0x10;
  *puVar9 = *puVar9 | 0x10;
  FUN_00f0d7fc(plVar2,&DAT_01bee7fa);
  FUN_00f0d7fc(plVar3,&DAT_01bee7fe);
  FUN_00f0d7fc(plVar4,&DAT_01bee7fe);
  FUN_00f0d7fc(plVar5,&DAT_01bee7fe);
  uVar12 = *puVar6;
  if ((uVar12 & 0x7f80) != 0x7280) {
    *puVar6 = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7280;
    FUN_0091ada4(plVar2);
  }
  uVar12 = *puVar7;
  if ((uVar12 & 0x7f80) != 0x7280) {
    *puVar7 = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7280;
    FUN_0091ada4(plVar3);
  }
  uVar12 = *puVar8;
  if ((uVar12 & 0x7f80) != 0x7280) {
    *puVar8 = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7280;
    FUN_0091ada4(plVar4);
  }
  uVar12 = *puVar9;
  if ((uVar12 & 0x7f80) != 0x7280) {
    *puVar9 = uVar12 & 0xffff8000 | uVar12 & 0x7f | 0x7280;
    FUN_0091ada4(plVar5);
  }
  FUN_00b1a8e8(param_1 + 0x4fa1,"ACCOUNT.*");
  *(uint *)((long)param_1 + 0x27d8c) = *(uint *)((long)param_1 + 0x27d8c) & 0xffffffbf;
  FUN_00f023ec(plVar1,plVar2,1);
  FUN_00f023ec(plVar1,plVar3,1);
  FUN_00f023ec(plVar1,plVar4,1);
  FUN_0096c088(&local_98);
  plVar2 = local_90;
  if (((ulong)local_98 & 1) == 0) {
    if ((byte)local_98 < 2) goto LAB_00cbfe68;
  }
  else {
    operator_delete(local_88);
    if (plVar2 == (long *)0x0) goto LAB_00cbfe68;
  }
  FUN_00f023ec(plVar1,plVar5,1);
LAB_00cbfe68:
  FUN_00f023ec(plVar1,param_1 + 0x4fa1,1);
  FUN_00b07828(param_1,plVar1);
  (**(code **)(*param_1 + 0x118))(param_1);
  local_70 = FUN_00f048a4("UI::EVENT_SWITCH_TO_TAB");
  local_98 = FUN_00cbff08;
  local_80 = 0;
  local_78 = 0;
  local_88 = (void *)0x0;
  local_90 = param_1;
  FUN_009693a0(param_1 + 1,&local_98);
  if (*(long *)(lVar13 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00cbff00(undefined8 param_1)

{
  undefined8 in_x4;
  
  FUN_00cbff60(param_1,in_x4);
  return;
}




void FUN_00cbff08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_4);
  FUN_00cbff60(param_1,uVar1);
  return;
}




void FUN_00cbff34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00f04924(param_2);
  FUN_00cbff60(param_1,uVar1);
  return;
}




void FUN_00cbff60(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  lVar4 = param_1 + 0x28430;
  FUN_00f0d7fc(lVar4,&DAT_01bee7fe);
  lVar1 = param_1 + 0x28560;
  FUN_00f0d7fc(lVar1,&DAT_01bee7fe);
  lVar2 = param_1 + 0x28690;
  FUN_00f0d7fc(lVar2,&DAT_01bee7fe);
  FUN_00f0d7fc(param_1 + 0x287c0,&DAT_01bee7fe);
  switch(param_2) {
  case 0:
    FUN_008fa54c(local_70,"overview");
    FUN_00b6f168(param_1 + 0x1d08,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    break;
  case 1:
    FUN_008fa54c(local_70,"ranked5v5");
    FUN_00b6f168(param_1 + 0x1d08,local_70);
    lVar4 = lVar1;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    break;
  case 2:
    FUN_008fa54c(local_70,"ranked3v3");
    FUN_00b6f168(param_1 + 0x1d08,local_70);
    lVar4 = lVar2;
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    break;
  case 3:
    FUN_00cc0130();
    lVar4 = param_1 + 0x287c0;
    break;
  default:
    goto switchD_00cc0014_default;
  }
  FUN_00f0d7fc(lVar4,&DAT_01bee7fa);
switchD_00cc0014_default:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

