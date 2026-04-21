// functions/1010e — 132 functions
#include "GameKindred.h"




ulong FUN_1010e1bac(char *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  ulong uVar4;
  uint uVar5;
  long local_40;
  long local_38;
  
  plVar2 = &local_40;
  local_40 = 0;
  local_38 = 0;
  if (param_1 != (char *)0x0) {
    sVar3 = _strlen(param_1);
    plVar1 = &local_38;
    if (param_2 == (long *)0x0) {
      plVar1 = (long *)0x0;
    }
    if (param_3 == (long *)0x0) {
      plVar2 = (long *)0x0;
    }
    uVar4 = FUN_1010e4f80(param_1,sVar3,plVar1,plVar2,0);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  if (param_2 == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if ((param_1 != (char *)0x0) && (local_38 == 0)) {
      if (*param_1 == ':') {
        local_38 = (*(code *)PTR__strdup_101873638)("");
        uVar5 = 0x1b;
        if (local_38 != 0) {
          uVar5 = 0;
        }
        uVar4 = (ulong)uVar5;
      }
      else {
        uVar4 = 0;
      }
    }
    if (*param_2 != 0) {
      (*(code *)PTR__free_101873628)(*param_2);
      *param_2 = 0;
    }
    *param_2 = local_38;
  }
  if (param_3 != (long *)0x0) {
    if (*param_3 != 0) {
      (*(code *)PTR__free_101873628)();
      *param_3 = 0;
    }
    *param_3 = local_40;
  }
  return uVar4;
}




undefined8 FUN_1010e1ccc(long *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  if ((param_1 != (long *)0x0) && (lVar2 = *param_1, lVar2 != 0)) {
    if (param_1[0xb] != 0) {
      FUN_1010d1aa4(lVar2);
      param_1[0xb] = 0;
    }
    FUN_1010d1460(lVar2);
    FUN_101100124(param_1);
    if (*(code **)(param_1[0x61] + 0x60) != (code *)0x0) {
      (**(code **)(param_1[0x61] + 0x60))(param_1,param_2);
    }
    FUN_1010d909c(lVar2,"Closing connection %ld\n");
    FUN_1011034b8(*(undefined8 *)(lVar2 + 0x8d0),param_1);
    thunk_FUN_1011065c4(param_1,0);
    iVar1 = FUN_1010f0394(*(undefined8 *)(lVar2 + 0x60));
    if (iVar1 != 0) {
      FUN_1010e1d9c(param_1[0x70]);
      FUN_1010e1d9c(param_1[0x71]);
    }
    FUN_1010e1e04(param_1);
  }
  return 0;
}




void FUN_1010e1d9c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  if (param_1 != (long *)0x0) {
    plVar1 = (long *)*param_1;
    while (plVar1 != (long *)0x0) {
      plVar2 = (long *)plVar1[2];
      *(undefined1 *)(*plVar1 + 0x8a99) = 1;
      FUN_1010f03b0();
      FUN_1010ef040(param_1,plVar1,0);
      plVar1 = plVar2;
    }
  }
  return;
}




void FUN_1010e1e04(long param_1)

{
  if (param_1 != 0) {
    thunk_FUN_1011065c4(param_1,0);
    thunk_FUN_1011065c4(param_1,1);
    if (*(int *)(param_1 + 0x1d4) != -1) {
      FUN_1010ee3ec(param_1);
    }
    if (*(int *)(param_1 + 0x1d0) != -1) {
      FUN_1010ee3ec(param_1);
    }
    if (*(int *)(param_1 + 0x1d8) != -1) {
      FUN_1010ee3ec(param_1);
    }
    if (*(int *)(param_1 + 0x1dc) != -1) {
      FUN_1010ee3ec(param_1);
    }
    FUN_101100350(param_1);
    if (*(long *)(param_1 + 0x170) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x170) = 0;
    }
    if (*(long *)(param_1 + 0x178) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x178) = 0;
    }
    if (*(long *)(param_1 + 0x188) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x188) = 0;
    }
    if (*(long *)(param_1 + 0x180) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x180) = 0;
    }
    if (*(long *)(param_1 + 400) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 400) = 0;
    }
    if (*(long *)(param_1 + 0x198) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x198) = 0;
    }
    if (*(long *)(param_1 + 0x328) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x328) = 0;
    }
    if (*(long *)(param_1 + 0x330) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x330) = 0;
    }
    if (*(long *)(param_1 + 0x340) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x340) = 0;
    }
    if (*(long *)(param_1 + 0x338) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x338) = 0;
    }
    if (*(long *)(param_1 + 0x370) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x370) = 0;
    }
    if (*(long *)(param_1 + 0x348) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x348) = 0;
    }
    if (*(long *)(param_1 + 0x350) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x350) = 0;
    }
    if (*(long *)(param_1 + 0x358) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x358) = 0;
    }
    if (*(long *)(param_1 + 0x360) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x360) = 0;
    }
    if (*(long *)(param_1 + 0x368) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x368) = 0;
    }
    if (*(long *)(param_1 + 0x520) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x520) = 0;
    }
    if (*(long *)(param_1 + 0xb0) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    if (*(long *)(param_1 + 0xd0) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0xd0) = 0;
    }
    if (*(long *)(param_1 + 0x390) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x390) = 0;
    }
    FUN_1010ef0ec(*(undefined8 *)(param_1 + 0x380),0);
    FUN_1010ef0ec(*(undefined8 *)(param_1 + 0x388),0);
    *(undefined8 *)(param_1 + 0x388) = 0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    if (*(long *)(param_1 + 0x648) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 0x648) = 0;
    }
    FUN_101104fac(param_1 + 600);
    (*(code *)PTR__free_101873628)(param_1);
    return;
  }
  return;
}




undefined4 FUN_1010e2124(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1010eef88(param_2,*(undefined8 *)(param_2 + 8),param_1);
  uVar2 = 0x1b;
  if (iVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




undefined8 FUN_1010e2158(long param_1,long *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)*param_2;
  while( true ) {
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    if (*plVar1 == param_1) break;
    plVar1 = (long *)plVar1[2];
  }
  FUN_1010ef040(param_2,plVar1,0);
  return 1;
}




void FUN_1010e21a0(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  
  if (*(char *)(param_2 + 0x378) == '\0') {
    bVar1 = true;
  }
  else {
    if ((long *)**(long **)(param_2 + 0x388) == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)**(long **)(param_2 + 0x388);
    }
    bVar1 = lVar4 != param_1;
  }
  if (*(char *)(param_2 + 0x379) == '\0') {
    bVar2 = true;
  }
  else {
    if ((long *)**(long **)(param_2 + 0x380) == (long *)0x0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)**(long **)(param_2 + 0x380);
    }
    bVar2 = lVar4 != param_1;
  }
  iVar3 = FUN_1010e2158(param_1,*(undefined8 *)(param_2 + 0x388));
  if (!bVar1 && iVar3 != 0) {
    *(undefined1 *)(param_2 + 0x378) = 0;
  }
  iVar3 = FUN_1010e2158(param_1,*(undefined8 *)(param_2 + 0x380));
  if (!bVar2 && iVar3 != 0) {
    *(undefined1 *)(param_2 + 0x379) = 0;
  }
  return;
}




undefined8 FUN_1010e2268(long param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((param_2 == 0) && (*(char *)(param_1 + 0x2ca) != '\0')) {
    switch(*(undefined4 *)(param_1 + 0x1a0)) {
    case 4:
      uVar1 = FUN_1010f5830(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0xc0),
                            *(undefined4 *)(param_1 + 0xf8),0,param_1,0);
      return uVar1;
    case 5:
    case 7:
      uVar1 = FUN_1010f5cc4(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0x198),
                            *(undefined8 *)(param_1 + 0xc0),*(undefined4 *)(param_1 + 0xf8),0,
                            param_1);
      return uVar1;
    case 6:
      uVar1 = FUN_1010f5830(*(undefined8 *)(param_1 + 400),*(undefined8 *)(param_1 + 0xc0),
                            *(undefined4 *)(param_1 + 0xf8),0,param_1,1);
      return uVar1;
    }
  }
  return 0;
}




void FUN_1010e2304(long *param_1)

{
  if (*(char *)(*param_1 + 0x508) != '\0') {
    FUN_1010d909c(*param_1,"Connected to %s (%s) port %ld (#%ld)\n");
  }
  return;
}




undefined8 FUN_1010e2364(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x308) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010e2370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}




undefined8 FUN_1010e237c(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x308) + 0x48);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010e238c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  return 0;
}




undefined8 FUN_1010e2398(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x308) + 0x30);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001010e23ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  *param_2 = 1;
  return 0;
}




undefined8 FUN_1010e23c0(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  if (param_1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x308) + 0x38);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
      *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001010e23d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
  }
  *param_2 = 1;
  return 0;
}




undefined8 FUN_1010e23e8(long param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x2d1) == '\0') {
    if (*(char *)(param_1 + 0x2d3) != '\0') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x2d3) != '\0') {
    if (*(long *)(*(long *)(param_1 + 0x308) + 0x30) != 0) {
      return 0;
    }
    *param_2 = 1;
    return 0;
  }
  uVar1 = FUN_1010ff3c8(param_1);
  if ((int)uVar1 == 0) {
    if (((*(char *)(param_1 + 0x2d5) != '\0') && (*(char *)(param_1 + 0x2cb) != '\0')) &&
       (*(int *)(param_1 + 0x658) != 2)) {
      return 0;
    }
    pcVar2 = *(code **)(*(long *)(param_1 + 0x308) + 0x28);
    if (pcVar2 == (code *)0x0) {
      *param_2 = 1;
    }
    else {
      uVar1 = (*pcVar2)(param_1,param_2);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    *(undefined1 *)(param_1 + 0x2d3) = 1;
    return 0;
  }
  return uVar1;
}




undefined8 FUN_1010e24a0(long *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *param_1;
  FUN_1010d231c(lVar3,3);
  if ((*(byte *)(param_1[0x61] + 0x7c) >> 4 & 1) == 0) {
    *param_2 = 0;
    *(undefined1 *)((long)param_1 + 0x2de) = 0;
    if (*(long *)(lVar3 + 0x618) != 0) {
      if (param_1[0x66] != 0) {
        (*(code *)PTR__free_101873628)();
        param_1[0x66] = 0;
      }
      lVar1 = FUN_1010e7298("User-Agent: %s\r\n");
      param_1[0x66] = lVar1;
      if (lVar1 == 0) {
        return 0x1b;
      }
    }
    *(undefined8 *)(lVar3 + 0xa8) = 0;
    *(undefined8 *)(lVar3 + 0x8aa0) = 0;
    auVar4 = FUN_1010d0e58();
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar4;
    if ((int)param_1[0x3a] == -1) {
      *(undefined1 *)((long)param_1 + 0x2d1) = 0;
      uVar2 = FUN_1010ee454(param_1,param_1[0xb]);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      FUN_1010d231c(lVar3,4);
      FUN_1010d231c(lVar3,5);
      *(undefined1 *)((long)param_1 + 0x2d1) = 1;
      *param_2 = 1;
      FUN_1010edc9c(param_1,(int)param_1[0x3a]);
      FUN_1010e2304(param_1);
    }
    auVar4 = FUN_1010d0e58();
    *(undefined1 (*) [16])(param_1 + 0x36) = auVar4;
  }
  else {
    *param_2 = 1;
  }
  return 0;
}




ulong FUN_1010e25cc(long param_1,long *param_2,char *param_3,undefined1 *param_4)

{
  bool bVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte *pbVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  __darwin_ct_rune_t _Var9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  long lVar15;
  size_t sVar16;
  long lVar17;
  undefined1 *puVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  size_t sVar22;
  size_t sVar23;
  size_t sVar24;
  void *pvVar25;
  int *piVar26;
  byte *pbVar27;
  ulong uVar28;
  ulong uVar29;
  long *plVar30;
  undefined8 uVar31;
  char cVar32;
  long *plVar33;
  byte *pbVar34;
  undefined **ppuVar35;
  long **pplVar36;
  long **pplVar37;
  byte *pbVar38;
  byte *pbVar39;
  char *pcVar40;
  undefined **ppuVar41;
  long *plVar42;
  long lVar43;
  undefined8 *puVar44;
  ulong uVar45;
  long *plVar46;
  undefined1 auVar47 [16];
  ulong local_318;
  long *local_2d8;
  char *local_2d0;
  undefined1 uStack_299;
  char *local_298;
  long local_290;
  char *local_288;
  long local_280;
  long local_278;
  char *local_270;
  char *local_268;
  ulong local_260;
  undefined1 local_169;
  long *local_168 [2];
  undefined1 local_157;
  undefined1 local_69;
  long local_68;
  
  lVar43 = *(long *)PTR____stack_chk_guard_101444218;
  *param_3 = '\0';
  local_298 = (char *)0x0;
  local_290 = 0;
  local_68 = lVar43;
  uVar12 = FUN_1010f2038(*(undefined8 *)(param_1 + 0x60));
  uVar13 = FUN_1010f204c(*(undefined8 *)(param_1 + 0x60));
  *param_3 = '\0';
  if (*(long *)(param_1 + 0x738) == 0) {
    uVar45 = 3;
  }
  else {
    plVar14 = (long *)(*(code *)PTR__calloc_101873640)(1,0x670);
    if (plVar14 != (long *)0x0) {
      *(undefined1 *)(plVar14 + 0x59) = 1;
      plVar14[0x61] = (long)&PTR_s_<no_protocol>_10182ef60;
      plVar14[10] = -1;
      plVar14[0x1e] = -1;
      *(undefined4 *)(plVar14 + 0x1f) = 0xffffffff;
      plVar14[0x3a] = -1;
      plVar14[0x3b] = -1;
      auVar47 = FUN_1010d0e58();
      *(undefined1 (*) [16])(plVar14 + 0x38) = auVar47;
      *plVar14 = param_1;
      iVar8 = *(int *)(param_1 + 0x4a0);
      *(int *)(plVar14 + 0x34) = iVar8;
      if (*(char **)(param_1 + 0x5c8) == (char *)0x0) {
        bVar5 = false;
        *(undefined1 *)((long)plVar14 + 0x2ca) = 0;
      }
      else {
        cVar32 = **(char **)(param_1 + 0x5c8);
        *(bool *)((long)plVar14 + 0x2ca) = cVar32 != '\0';
        if (cVar32 == '\0') {
          bVar5 = false;
        }
        else if (iVar8 == 0) {
          bVar5 = true;
        }
        else {
          bVar5 = iVar8 == 1;
        }
      }
      *(bool *)((long)plVar14 + 0x2cb) = bVar5;
      *(bool *)((long)plVar14 + 0x2cd) = *(long *)(param_1 + 0x648) != 0;
      *(undefined1 *)((long)plVar14 + 0x2d5) = *(undefined1 *)(param_1 + 0x4f2);
      *(bool *)((long)plVar14 + 0x2cc) = *(long *)(param_1 + 0x630) != 0;
      *(undefined1 *)(plVar14 + 0x5b) = *(undefined1 *)(param_1 + 0x50c);
      *(undefined1 *)((long)plVar14 + 0x2d9) = *(undefined1 *)(param_1 + 0x50d);
      *(undefined1 *)(plVar14 + 200) = *(undefined1 *)(param_1 + 0x440);
      *(undefined1 *)((long)plVar14 + 0x641) = *(undefined1 *)(param_1 + 0x441);
      plVar14[99] = *(long *)(param_1 + 0x4c8);
      *(undefined4 *)(plVar14 + 0x81) = 0xffffffff;
      *(undefined4 *)((long)plVar14 + 0x41c) = 0;
      *(undefined8 *)((long)plVar14 + 0x414) = 0;
      *(undefined8 *)((long)plVar14 + 0x40c) = 0;
      iVar8 = FUN_1010f0394(*(undefined8 *)(param_1 + 0x60));
      if ((iVar8 != 0) && (plVar14[0x72] == 0)) {
        lVar15 = (*(code *)PTR__calloc_101873640)(0x4000,1);
        plVar14[0x72] = lVar15;
        if (lVar15 != 0) goto LAB_1010e2790;
LAB_1010e294c:
        FUN_1010ef0ec(plVar14[0x70],0);
        FUN_1010ef0ec(plVar14[0x71],0);
        plVar14[0x71] = 0;
        plVar14[0x70] = 0;
        if (plVar14[0x72] != 0) {
          (*(code *)PTR__free_101873628)();
          plVar14[0x72] = 0;
        }
        if (plVar14[0xc9] != 0) {
          (*(code *)PTR__free_101873628)();
          plVar14[0xc9] = 0;
        }
        (*(code *)PTR__free_101873628)(plVar14);
        goto LAB_1010e29b8;
      }
LAB_1010e2790:
      lVar15 = FUN_1010eef44(FUN_1010e569c);
      plVar14[0x70] = lVar15;
      lVar15 = FUN_1010eef44(FUN_1010e569c);
      plVar14[0x71] = lVar15;
      if ((lVar15 == 0) || (plVar14[0x70] == 0)) goto LAB_1010e294c;
      if (*(long *)(param_1 + 0x578) != 0) {
        lVar15 = (*(code *)PTR__strdup_101873638)();
        plVar14[0xc9] = lVar15;
        if (lVar15 == 0) goto LAB_1010e294c;
      }
      *(undefined4 *)((long)plVar14 + 0x654) = *(undefined4 *)(param_1 + 0x2ac);
      *(undefined2 *)(plVar14 + 0xca) = *(undefined2 *)(param_1 + 0x2a8);
      plVar14[7] = *(long *)(param_1 + 0x318);
      plVar14[8] = *(long *)(param_1 + 800);
      *param_2 = (long)plVar14;
      sVar16 = _strlen(*(char **)(param_1 + 0x738));
      plVar30 = (long *)(param_1 + 0x8aa8);
      if (*plVar30 != 0) {
        (*(code *)PTR__free_101873628)();
        *plVar30 = 0;
      }
      plVar46 = (long *)(param_1 + 0x8ab0);
      *plVar46 = 0;
      lVar15 = 0x102;
      if (0xff < sVar16) {
        lVar15 = sVar16 + 2;
      }
      lVar17 = (*(code *)PTR__malloc_101873620)(lVar15);
      *plVar30 = lVar17;
      if (lVar17 == 0) {
LAB_1010e2ae4:
        uVar45 = 0x1b;
        goto LAB_1010e29c4;
      }
      *plVar46 = lVar17;
      puVar18 = (undefined1 *)(*(code *)PTR__malloc_101873620)(lVar15);
      plVar14[0x16] = (long)puVar18;
      if (puVar18 == (undefined1 *)0x0) {
        if (*plVar30 != 0) {
          (*(code *)PTR__free_101873628)();
          *plVar30 = 0;
        }
        *plVar46 = 0;
        goto LAB_1010e2ae4;
      }
      plVar14[0x18] = (long)puVar18;
      *puVar18 = 0;
      lVar15 = (*(code *)PTR__strdup_101873638)("");
      local_290 = lVar15;
      pcVar19 = (char *)(*(code *)PTR__strdup_101873638)("");
      local_298 = pcVar19;
      local_2d0 = (char *)(*(code *)PTR__strdup_101873638)("");
      uVar45 = 0x1b;
      if (((lVar15 == 0) || (pcVar19 == (char *)0x0)) || (local_2d0 == (char *)0x0))
      goto LAB_1010e3c48;
      pcVar19 = (char *)*plVar46;
      local_268 = (char *)0x0;
      local_260 = 0;
      pcVar40 = *(char **)(param_1 + 0x738);
      pcVar20 = _strpbrk(pcVar40,"\r\n");
      if (pcVar20 == (char *)0x0) {
        pcVar20 = (char *)&local_268;
        iVar8 = _sscanf(pcVar40,"%15[^:]:%[^\n]");
        if ((iVar8 == 2) && (iVar8 = FUN_1010f659c(&local_268,"file"), iVar8 != 0)) {
          if (*pcVar19 == '/') {
            if (pcVar19[1] == '/') {
              sVar16 = _strlen(pcVar19 + 2);
              _memmove(pcVar19,pcVar19 + 2,sVar16 + 1);
              if (*pcVar19 != '/') goto LAB_1010e2b70;
            }
          }
          else {
LAB_1010e2b70:
            pcVar20 = _strchr(pcVar19,0x2f);
            if (pcVar20 != (char *)0x0) {
              pcVar40 = pcVar20 + 1;
              if (pcVar20[1] != '/') {
                pcVar40 = pcVar20;
              }
              sVar16 = _strlen(pcVar40);
              _memmove(pcVar19,pcVar40,sVar16 + 1);
            }
          }
          bVar5 = false;
          pcVar20 = "file";
        }
        else {
          *pcVar19 = '\0';
          iVar8 = _sscanf(*(char **)(param_1 + 0x738),"%15[^\n:]://%[^\n/?]%[^\n]");
          if (iVar8 < 2) {
            iVar8 = _sscanf(*(char **)(param_1 + 0x738),"%[^\n/?]%[^\n]");
            if (iVar8 < 1) {
              FUN_1010d9258(param_1,"<url> malformed");
              bVar5 = false;
              uVar45 = 3;
              goto LAB_1010e3310;
            }
            iVar8 = FUN_1010f6624("FTP.",plVar14[0x18],4);
            if (iVar8 == 0) {
              iVar8 = FUN_1010f6624("DICT.",plVar14[0x18],5);
              if (iVar8 == 0) {
                iVar8 = FUN_1010f6624("LDAP.",plVar14[0x18],5);
                if (iVar8 == 0) {
                  iVar8 = FUN_1010f6624("IMAP.",plVar14[0x18],5);
                  if (iVar8 == 0) {
                    iVar8 = FUN_1010f6624("SMTP.",plVar14[0x18],5);
                    if (iVar8 == 0) {
                      iVar8 = FUN_1010f6624("POP3.",plVar14[0x18],5);
                      pcVar20 = "http";
                      if (iVar8 != 0) {
                        pcVar20 = "pop3";
                      }
                    }
                    else {
                      pcVar20 = "smtp";
                    }
                  }
                  else {
                    pcVar20 = "IMAP";
                  }
                }
                else {
                  pcVar20 = "LDAP";
                }
              }
              else {
                pcVar20 = "DICT";
              }
            }
            else {
              pcVar20 = "ftp";
            }
            bVar5 = true;
          }
          else {
            bVar5 = false;
          }
        }
        pcVar40 = (char *)plVar14[0x18];
        pcVar21 = _strchr(pcVar40,0x40);
        if (pcVar21 != (char *)0x0) {
          pcVar40 = pcVar21 + 1;
        }
        pcVar40 = _strchr(pcVar40,0x3f);
        if (pcVar40 == (char *)0x0) {
          cVar32 = *pcVar19;
          if (cVar32 == '\0') {
            pcVar19[0] = '/';
            pcVar19[1] = '\0';
            goto LAB_1010e2ddc;
          }
          bVar1 = false;
        }
        else {
          sVar16 = _strlen(pcVar40);
          sVar22 = _strlen(pcVar19);
          _memmove(pcVar19 + sVar16 + 1,pcVar19,sVar22 + 1);
          _memcpy(pcVar19 + 1,pcVar40,sVar16);
          *pcVar19 = '/';
          *pcVar40 = '\0';
LAB_1010e2ddc:
          cVar32 = *pcVar19;
          bVar1 = true;
        }
        if (cVar32 == '?') {
          sVar16 = _strlen(pcVar19);
          _memmove(pcVar19 + 1,pcVar19,sVar16 + 1);
          *pcVar19 = '/';
          goto LAB_1010e2e88;
        }
        pcVar40 = (char *)FUN_101103b44(pcVar19);
        if (pcVar40 == (char *)0x0) {
          uVar45 = 0x1b;
          goto LAB_1010e3310;
        }
        iVar8 = _strcmp(pcVar40,pcVar19);
        if (iVar8 == 0) {
          (*(code *)PTR__free_101873628)(pcVar40);
          if (bVar1) goto LAB_1010e2e88;
        }
        else {
          (*(code *)PTR__free_101873628)(*plVar30);
          *plVar30 = (long)pcVar40;
          *plVar46 = (long)pcVar40;
          pcVar19 = pcVar40;
LAB_1010e2e88:
          sVar22 = _strlen(pcVar19);
          sVar23 = _strlen(*(char **)(param_1 + 0x738));
          sVar16 = _strlen((char *)plVar14[0x18]);
          if (!bVar5) {
            sVar24 = _strlen(pcVar20);
            sVar16 = sVar16 + sVar24 + 3;
          }
          pvVar25 = (void *)(*(code *)PTR__malloc_101873620)(sVar23 + 2);
          if (pvVar25 == (void *)0x0) {
            uVar45 = 0x1b;
            goto LAB_1010e3310;
          }
          _memcpy(pvVar25,*(void **)(param_1 + 0x738),sVar16);
          _memcpy((void *)((long)pvVar25 + sVar16),pcVar19,sVar22 + 1);
          if (*(char *)(param_1 + 0x740) != '\0') {
            if (*(long *)(param_1 + 0x738) != 0) {
              (*(code *)PTR__free_101873628)();
              *(undefined8 *)(param_1 + 0x738) = 0;
            }
            *(undefined1 *)(param_1 + 0x740) = 0;
          }
          FUN_1010d909c(param_1,"Rebuilt URL to: %s\n");
          *(void **)(param_1 + 0x738) = pvVar25;
          *(undefined1 *)(param_1 + 0x740) = 1;
        }
        local_278 = 0;
        local_270 = (char *)0x0;
        local_280 = 0;
        pcVar21 = (char *)plVar14[0x18];
        pcVar40 = _strchr(pcVar21,0x40);
        if (pcVar40 == (char *)0x0) {
LAB_1010e3058:
          uVar45 = 0;
        }
        else {
          plVar14[0x18] = (long)(pcVar40 + 1);
          if (*(int *)(param_1 + 0x504) == 2) goto LAB_1010e3058;
          uVar45 = FUN_1010e4f80(pcVar21,pcVar40 + 1 + ~(ulong)pcVar21,&local_270,&local_278,
                                 &local_280);
          if ((int)uVar45 == 0) {
            if (local_270 == (char *)0x0) {
LAB_1010e2fe0:
              if (local_278 != 0) {
                pcVar40 = (char *)FUN_1010e5f30(param_1,local_278,0,0);
                if (pcVar40 == (char *)0x0) goto LAB_1010e3180;
                (*(code *)PTR__free_101873628)(local_298);
                local_298 = pcVar40;
              }
              if (local_280 == 0) goto LAB_1010e3058;
              pcVar40 = (char *)FUN_1010e5f30(param_1,local_280,0,0);
              if (pcVar40 != (char *)0x0) {
                (*(code *)PTR__free_101873628)(local_2d0);
                uVar45 = 0;
                local_2d0 = pcVar40;
                goto LAB_1010e305c;
              }
            }
            else {
              *(undefined1 *)((long)plVar14 + 0x2db) = 1;
              *(undefined1 *)((long)plVar14 + 0x2cc) = 1;
              lVar15 = FUN_1010e5f30(param_1,local_270,0,0);
              if (lVar15 != 0) {
                (*(code *)PTR__free_101873628)(local_290);
                local_290 = lVar15;
                goto LAB_1010e2fe0;
              }
            }
LAB_1010e3180:
            uVar45 = 0x1b;
          }
        }
LAB_1010e305c:
        if (local_270 != (char *)0x0) {
          (*(code *)PTR__free_101873628)();
          local_270 = (char *)0x0;
        }
        if (local_278 != 0) {
          (*(code *)PTR__free_101873628)();
          local_278 = 0;
        }
        if (local_280 != 0) {
          (*(code *)PTR__free_101873628)();
          local_280 = 0;
        }
        if ((int)uVar45 == 0) {
          if ((*(char *)plVar14[0x18] == '[') &&
             (pcVar40 = _strchr((char *)plVar14[0x18],0x25), pcVar40 != (char *)0x0)) {
            lVar15 = 3;
            iVar8 = _strncmp("%25",pcVar40,3);
            if (iVar8 != 0) {
              FUN_1010d909c(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
              lVar15 = 1;
            }
            uVar45 = _strtoul(pcVar40 + lVar15,&local_288,10);
            if (*local_288 == ']') {
              sVar16 = _strlen(local_288);
              _memmove(pcVar40,local_288,sVar16 + 1);
              *(int *)(plVar14 + 0x15) = (int)uVar45;
            }
            else {
              _strncpy((char *)local_168,pcVar40 + lVar15,0x12);
              local_157 = 0;
              pcVar21 = _strchr((char *)local_168,0x5d);
              if (pcVar21 != (char *)0x0) {
                *pcVar21 = '\0';
                uVar11 = _if_nametoindex((char *)local_168);
                if (uVar11 != 0) {
                  sVar16 = _strlen((char *)local_168);
                  sVar22 = _strlen(pcVar40 + sVar16 + lVar15);
                  _memmove(pcVar40,pcVar40 + sVar16 + lVar15,sVar22 + 1);
                  *(uint *)(plVar14 + 0x15) = uVar11;
                  goto LAB_1010e3248;
                }
                piVar26 = ___error();
                _strerror(*piVar26);
                FUN_1010d909c(param_1,"Invalid network interface: %s; %s\n");
              }
              FUN_1010d909c(param_1,"Invalid IPv6 address format\n");
            }
          }
LAB_1010e3248:
          if (*(int *)(param_1 + 0x6a8) != 0) {
            *(int *)(plVar14 + 0x15) = *(int *)(param_1 + 0x6a8);
          }
          pcVar19 = _strchr(pcVar19,0x23);
          if (pcVar19 != (char *)0x0) {
            *pcVar19 = '\0';
            pcVar19 = _strchr(*(char **)(param_1 + 0x738),0x23);
            if (pcVar19 != (char *)0x0) {
              *pcVar19 = '\0';
            }
          }
          ppuVar35 = &PTR_s_HTTP_10182ec40;
          ppuVar41 = &PTR_PTR_10182efe8;
          do {
            iVar8 = FUN_1010f659c(*ppuVar35,pcVar20);
            if (iVar8 != 0) {
              if ((((ulong)*(uint *)(ppuVar35 + 0xf) & *(ulong *)(param_1 + 0x6b0)) != 0) &&
                 ((*(char *)(param_1 + 0x8918) == '\0' ||
                  ((*(ulong *)(param_1 + 0x6b8) & (ulong)*(uint *)(ppuVar35 + 0xf)) != 0)))) {
                uVar45 = 0;
                plVar14[0x62] = (long)ppuVar35;
                plVar14[0x61] = (long)ppuVar35;
                goto LAB_1010e3310;
              }
              break;
            }
            ppuVar35 = (undefined **)*ppuVar41;
            ppuVar41 = ppuVar41 + 1;
          } while (ppuVar35 != (undefined **)0x0);
          FUN_1010d9258(param_1,"Protocol \"%s\" not supported or disabled in libcurl");
          uVar45 = 1;
        }
      }
      else {
        FUN_1010d9258(param_1,"Illegal characters found in URL");
        bVar5 = false;
        uVar45 = 3;
      }
LAB_1010e3310:
      if ((int)uVar45 != 0) goto LAB_1010e3c48;
      if (!bVar5) {
LAB_1010e3380:
        if (((*(byte *)(plVar14[0x62] + 0x7c) >> 6 & 1) != 0) &&
           (pcVar19 = _strchr(*(char **)(*plVar14 + 0x8ab0),0x3f), pcVar19 != (char *)0x0)) {
          *pcVar19 = '\0';
        }
        if (*(long *)(param_1 + 0x688) == 0) {
LAB_1010e33c4:
          if (*(char *)((long)plVar14 + 0x2cd) != '\0') {
            _memset(local_168,0,0x100);
            _memset(&local_268,0,0x100);
            if (*(char **)(param_1 + 0x648) != (char *)0x0) {
              _strncpy((char *)local_168,*(char **)(param_1 + 0x648),0x100);
              local_69 = 0;
            }
            if (*(char **)(param_1 + 0x650) != (char *)0x0) {
              _strncpy((char *)&local_268,*(char **)(param_1 + 0x650),0x100);
              local_169 = 0;
            }
            lVar15 = FUN_1010e5f30(param_1,local_168,0,0);
            plVar14[0x32] = lVar15;
            if (lVar15 != 0) {
              lVar15 = FUN_1010e5f30(param_1,&local_268,0,0);
              plVar14[0x33] = lVar15;
              if (lVar15 != 0) goto LAB_1010e3454;
            }
            goto LAB_1010e39bc;
          }
LAB_1010e3454:
          if (*(long *)(param_1 + 0x5c8) == 0) {
            pbVar27 = (byte *)0x0;
          }
          else {
            pbVar27 = (byte *)(*(code *)PTR__strdup_101873638)();
            if (pbVar27 == (byte *)0x0) {
              FUN_1010d9258(param_1,"memory shortage");
              uVar45 = 0x1b;
              goto LAB_1010e3c48;
            }
          }
          if ((*(long *)(param_1 + 0x658) == 0) ||
             (iVar8 = FUN_1010e524c(plVar14[0x18]), iVar8 == 0)) {
            if (pbVar27 == (byte *)0x0) {
              lVar15 = FUN_1010e5ef8("no_proxy");
              if (lVar15 == 0) {
                lVar15 = FUN_1010e5ef8("NO_PROXY");
              }
              uVar45 = FUN_1010e524c(plVar14[0x18],lVar15);
              if ((uVar45 & 1) == 0) {
                pcVar19 = *(char **)plVar14[0x61];
                cVar32 = *pcVar19;
                if (cVar32 == '\0') {
                  pplVar37 = local_168;
                }
                else {
                  pplVar36 = local_168;
                  do {
                    pcVar19 = pcVar19 + 1;
                    _Var9 = ___tolower((int)cVar32);
                    pplVar37 = (long **)((long)pplVar36 + 1);
                    *(char *)pplVar36 = (char)_Var9;
                    cVar32 = *pcVar19;
                    pplVar36 = pplVar37;
                  } while (cVar32 != '\0');
                }
                *(undefined1 *)((long)pplVar37 + 6) = 0;
                *(undefined2 *)((long)pplVar37 + 4) = 0x7978;
                *(undefined4 *)pplVar37 = 0x6f72705f;
                pbVar27 = (byte *)FUN_1010e5ef8(local_168);
                if (pbVar27 == (byte *)0x0) {
                  iVar8 = FUN_1010f659c("http_proxy",local_168);
                  if (iVar8 == 0) {
                    FUN_1010f66c4(local_168,local_168,0x80);
                    pbVar27 = (byte *)FUN_1010e5ef8(local_168);
                    if (pbVar27 != (byte *)0x0) goto LAB_1010e35ac;
                  }
                  pbVar27 = (byte *)FUN_1010e5ef8("all_proxy");
                  if (pbVar27 == (byte *)0x0) {
                    pbVar27 = (byte *)FUN_1010e5ef8("ALL_PROXY");
                  }
                }
              }
              else {
                pbVar27 = (byte *)0x0;
              }
LAB_1010e35ac:
              if (lVar15 != 0) {
                (*(code *)PTR__free_101873628)(lVar15);
              }
              if (pbVar27 == (byte *)0x0) goto LAB_1010e363c;
            }
            if (((*(long *)(param_1 + 0x690) != 0) || (*pbVar27 == 0)) ||
               ((*(byte *)(plVar14[0x61] + 0x7c) >> 4 & 1) != 0)) goto LAB_1010e3628;
            pcVar19 = _strstr((char *)pbVar27,"://");
            pbVar39 = pbVar27;
            if (pcVar19 != (char *)0x0) {
              pbVar39 = (byte *)(pcVar19 + 3);
              iVar8 = FUN_1010f6624("socks5h",pbVar27,7);
              if (iVar8 == 0) {
                iVar8 = FUN_1010f6624("socks5",pbVar27,6);
                if (iVar8 == 0) {
                  iVar8 = FUN_1010f6624("socks4a",pbVar27,7);
                  if (iVar8 == 0) {
                    iVar8 = FUN_1010f6624("socks4",pbVar27,6);
                    if ((iVar8 == 0) && (iVar8 = FUN_1010f6624("socks",pbVar27,5), iVar8 == 0))
                    goto LAB_1010e3d3c;
                    uVar10 = 4;
                  }
                  else {
                    uVar10 = 6;
                  }
                }
                else {
                  uVar10 = 5;
                }
                *(undefined4 *)(plVar14 + 0x34) = uVar10;
              }
              else {
                *(undefined4 *)(plVar14 + 0x34) = 7;
              }
            }
LAB_1010e3d3c:
            pcVar19 = _strchr((char *)pbVar39,0x40);
            if (pcVar19 == (char *)0x0) {
LAB_1010e3eb8:
              puVar3 = PTR___DefaultRuneLocale_101444130;
              pbVar34 = pbVar39;
              if (*pbVar39 == 0x5b) {
                pbVar34 = pbVar39 + 1;
                bVar7 = *pbVar34;
                pbVar4 = pbVar34;
                pbVar2 = pbVar39;
                while (pbVar38 = pbVar4, pbVar39 = pbVar38, bVar7 != 0) {
                  uVar45 = (ulong)bVar7;
                  if (((PTR___DefaultRuneLocale_101444130[uVar45 * 4 + 0x3e] & 1) == 0) &&
                     (bVar7 != 0x2e)) {
                    if (bVar7 == 0x25) {
                      iVar8 = _strncmp("%25",(char *)pbVar38,3);
                      if (iVar8 != 0) {
                        FUN_1010d909c(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
                      }
                      bVar7 = pbVar38[1];
                      pbVar39 = pbVar38 + 1;
                      pbVar2 = pbVar38;
                      goto joined_r0x0001010e3f58;
                    }
                    if (bVar7 != 0x3a) goto LAB_1010e4408;
                  }
                  bVar7 = pbVar2[2];
                  pbVar4 = pbVar2 + 2;
                  pbVar2 = pbVar38;
                }
                goto LAB_1010e4420;
              }
              goto LAB_1010e4434;
            }
            local_168[0] = (long *)0x0;
            local_268 = (char *)0x0;
            uVar45 = FUN_1010e4f80(pbVar39,(long)pcVar19 - (long)pbVar39,local_168,&local_268,0);
            if ((int)uVar45 == 0) {
              if (plVar14[0x32] != 0) {
                (*(code *)PTR__free_101873628)();
                plVar14[0x32] = 0;
              }
              plVar30 = local_168[0];
              if ((local_168[0] == (long *)0x0) ||
                 (sVar16 = _strlen((char *)local_168[0]), 0xff < sVar16)) {
                lVar15 = (*(code *)PTR__strdup_101873638)("");
              }
              else {
                lVar15 = FUN_1010e5f30(param_1,plVar30,0,0);
              }
              plVar14[0x32] = lVar15;
              if (lVar15 != 0) {
                if (plVar14[0x33] != 0) {
                  (*(code *)PTR__free_101873628)();
                  plVar14[0x33] = 0;
                }
                pcVar20 = local_268;
                if ((local_268 == (char *)0x0) || (sVar16 = _strlen(local_268), 0xff < sVar16)) {
                  lVar15 = (*(code *)PTR__strdup_101873638)("");
                }
                else {
                  lVar15 = FUN_1010e5f30(param_1,pcVar20,0,0);
                }
                plVar14[0x33] = lVar15;
                if (lVar15 != 0) {
                  uVar45 = 0;
                  *(undefined1 *)((long)plVar14 + 0x2cd) = 1;
                  pbVar39 = (byte *)(pcVar19 + 1);
                  goto LAB_1010e3e78;
                }
              }
              uVar45 = 0x1b;
            }
LAB_1010e3e78:
            if (local_168[0] != (long *)0x0) {
              (*(code *)PTR__free_101873628)();
              local_168[0] = (long *)0x0;
            }
            if (local_268 != (char *)0x0) {
              (*(code *)PTR__free_101873628)();
              local_268 = (char *)0x0;
            }
            if ((int)uVar45 == 0) goto LAB_1010e3eb8;
            goto LAB_1010e44a8;
          }
          if (pbVar27 != (byte *)0x0) {
LAB_1010e3628:
            (*(code *)PTR__free_101873628)(pbVar27);
          }
LAB_1010e363c:
          bVar5 = false;
          *(undefined2 *)((long)plVar14 + 0x2ca) = 0;
          *(undefined1 *)((long)plVar14 + 0x2cd) = 0;
          *(undefined1 *)((long)plVar14 + 0x2d5) = 0;
          goto LAB_1010e364c;
        }
        lVar15 = (*(code *)PTR__strdup_101873638)();
        plVar14[0x31] = lVar15;
        if (lVar15 != 0) goto LAB_1010e33c4;
        goto LAB_1010e39bc;
      }
      lVar15 = FUN_1010e7298("%s://%s");
      if (lVar15 != 0) {
        if (*(char *)(param_1 + 0x740) != '\0') {
          if (*(long *)(param_1 + 0x738) != 0) {
            (*(code *)PTR__free_101873628)();
            *(undefined8 *)(param_1 + 0x738) = 0;
          }
          *(undefined1 *)(param_1 + 0x740) = 0;
        }
        *(long *)(param_1 + 0x738) = lVar15;
        *(undefined1 *)(param_1 + 0x740) = 1;
        goto LAB_1010e3380;
      }
LAB_1010e3c38:
      uVar45 = 0x1b;
      goto LAB_1010e3c48;
    }
LAB_1010e29b8:
    uVar45 = 0x1b;
  }
  goto LAB_1010e29c4;
joined_r0x0001010e3f58:
  pbVar38 = pbVar39;
  pbVar39 = pbVar38;
  if (bVar7 == 0) goto LAB_1010e4420;
  if ((char)bVar7 < '\0') {
    uVar11 = ___maskrune((uint)bVar7,0x100);
  }
  else {
    uVar11 = *(uint *)(puVar3 + (ulong)bVar7 * 4 + 0x3c) & 0x100;
  }
  if (uVar11 == 0) {
    bVar7 = *pbVar38;
    uVar45 = (ulong)bVar7;
    if (((((puVar3[uVar45 * 4 + 0x3e] & 1) == 0) && (1 < bVar7 - 0x2d)) && (bVar7 != 0x5f)) &&
       (bVar7 != 0x7e)) goto LAB_1010e4408;
  }
  bVar7 = pbVar2[2];
  pbVar39 = pbVar2 + 2;
  pbVar2 = pbVar38;
  goto joined_r0x0001010e3f58;
LAB_1010e4408:
  pbVar39 = pbVar38;
  if ((int)uVar45 == 0x5d) {
    pbVar39 = pbVar38 + 1;
    *pbVar38 = 0;
  }
  else {
LAB_1010e4420:
    FUN_1010d909c(param_1,"Invalid IPv6 address format\n");
  }
LAB_1010e4434:
  pcVar19 = _strchr((char *)pbVar39,0x3a);
  if (pcVar19 == (char *)0x0) {
    if (*pbVar34 != 0x2f) {
      pcVar19 = _strchr((char *)pbVar34,0x2f);
      if (pcVar19 != (char *)0x0) {
        *pcVar19 = '\0';
      }
      if (*(long *)(param_1 + 0x238) != 0) {
        plVar14[0x1e] = *(long *)(param_1 + 0x238);
      }
      goto LAB_1010e4458;
    }
    uVar45 = 5;
  }
  else {
    *pcVar19 = '\0';
    lVar43 = _strtol(pcVar19 + 1,(char **)0x0,10);
    plVar14[0x1e] = lVar43;
LAB_1010e4458:
    lVar43 = (*(code *)PTR__strdup_101873638)(pbVar34);
    plVar14[0x1a] = lVar43;
    plVar14[0x1c] = lVar43;
    uVar11 = 0x1b;
    if (lVar43 != 0) {
      uVar11 = 0;
    }
    uVar45 = (ulong)uVar11;
  }
  lVar43 = *(long *)PTR____stack_chk_guard_101444218;
LAB_1010e44a8:
  (*(code *)PTR__free_101873628)(pbVar27);
  if ((int)uVar45 == 0) {
    if (*(uint *)(plVar14 + 0x34) < 2) {
      if (((*(byte *)(plVar14[0x61] + 0x78) & 3) == 0) && (*(char *)((long)plVar14 + 0x2d5) == '\0')
         ) {
        plVar14[0x61] = (long)&PTR_s_HTTP_10182ec40;
      }
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    *(bool *)((long)plVar14 + 0x2cb) = bVar5;
    *(undefined1 *)((long)plVar14 + 0x2ca) = 1;
LAB_1010e364c:
    if ((bVar5) && ((*(uint *)(plVar14[0x62] + 0x7c) & 1) != 0)) {
      *(undefined1 *)((long)plVar14 + 0x2d5) = 1;
    }
    iVar8 = _sscanf((char *)plVar14[0x18],"[%*45[0123456789abcdefABCDEF:.]%c");
    if ((iVar8 == 1) && ((char)local_278 == ']')) {
      *(undefined1 *)((long)plVar14 + 0x2ce) = 1;
      lVar15 = plVar14[0x18];
      plVar14[0x18] = lVar15 + 1;
      pcVar19 = _strchr((char *)(lVar15 + 1),0x5d);
      if (pcVar19 == (char *)0x0) {
        pcVar19 = (char *)0x0;
      }
      else {
        *pcVar19 = '\0';
        pcVar19 = pcVar19 + 1;
        if (*pcVar19 != ':') {
          pcVar19 = (char *)0x0;
        }
      }
LAB_1010e3720:
      if ((*(long *)(param_1 + 0x260) == 0) || (*(char *)(param_1 + 0x8968) == '\0')) {
        if (pcVar19 == (char *)0x0) goto LAB_1010e37ac;
        uVar45 = _strtol(pcVar19 + 1,&local_270,10);
        if (uVar45 < 0x10000) {
          uVar45 = 0;
          *pcVar19 = '\0';
          if (local_270 != pcVar19 + 1) {
            uVar10 = FUN_1010feec4();
            uVar45 = 0;
            *(undefined4 *)(plVar14 + 0x1f) = uVar10;
          }
        }
        else {
          FUN_1010d9258(param_1,"Port number out of range");
          uVar45 = 3;
        }
      }
      else {
        *(uint *)(plVar14 + 0x1f) = (uint)*(long *)(param_1 + 0x260) & 0xffff;
        if (pcVar19 != (char *)0x0) {
          *pcVar19 = '\0';
        }
        if (*(char *)((long)plVar14 + 0x2cb) == '\0') {
LAB_1010e37ac:
          uVar45 = 0;
        }
        else {
          local_260 = local_260 & 0xffffffff00000000;
          local_268 = (char *)0x0;
          if ((char)plVar14[0x5c] != '\0') {
            FUN_1010e7270(&local_268,0xc,";type=%c");
          }
          lVar15 = FUN_1010e7298("%s://%s%s%s:%hu%s%s%s");
          if (lVar15 == 0) {
            uVar45 = 0x1b;
          }
          else {
            if (*(char *)(param_1 + 0x740) != '\0') {
              if (*(long *)(param_1 + 0x738) != 0) {
                (*(code *)PTR__free_101873628)();
                *(undefined8 *)(param_1 + 0x738) = 0;
              }
              *(undefined1 *)(param_1 + 0x740) = 0;
            }
            uVar45 = 0;
            *(long *)(param_1 + 0x738) = lVar15;
            *(undefined1 *)(param_1 + 0x740) = 1;
          }
        }
      }
    }
    else {
      iVar8 = _inet_pton(0x1e,(char *)plVar14[0x18],local_168);
      if (iVar8 < 1) {
        pcVar19 = _strrchr((char *)plVar14[0x18],0x3a);
        goto LAB_1010e3720;
      }
      FUN_1010d9258(param_1,"IPv6 numerical address used in URL without brackets");
      uVar45 = 3;
    }
    if ((int)uVar45 != 0) goto LAB_1010e3c48;
    if (*(long *)(param_1 + 0x630) != 0) {
      (*(code *)PTR__free_101873628)(local_290);
      local_290 = (*(code *)PTR__strdup_101873638)(*(undefined8 *)(param_1 + 0x630));
      if (local_290 != 0) goto LAB_1010e3914;
LAB_1010e39bc:
      uVar45 = 0x1b;
      goto LAB_1010e3c48;
    }
LAB_1010e3914:
    if (*(long *)(param_1 + 0x638) != 0) {
      (*(code *)PTR__free_101873628)(local_298);
      local_298 = (char *)(*(code *)PTR__strdup_101873638)(*(undefined8 *)(param_1 + 0x638));
      if (local_298 == (char *)0x0) goto LAB_1010e39bc;
    }
    if (*(long *)(param_1 + 0x640) != 0) {
      (*(code *)PTR__free_101873628)(local_2d0);
      local_2d0 = (char *)(*(code *)PTR__strdup_101873638)(*(undefined8 *)(param_1 + 0x640));
      if (local_2d0 == (char *)0x0) {
        uVar45 = 0x1b;
        goto LAB_1010e29c4;
      }
    }
    *(undefined1 *)((long)plVar14 + 0x2da) = 0;
    if (*(int *)(param_1 + 0x504) != 0) {
      iVar8 = FUN_1010e8e38(plVar14[0x18],&local_290,&local_298,*(undefined8 *)(param_1 + 0x5c0));
      if (iVar8 < 1) {
        if (iVar8 < 0) goto LAB_1010e3c38;
        *(undefined1 *)((long)plVar14 + 0x2da) = 1;
        *(undefined1 *)((long)plVar14 + 0x2cc) = 1;
      }
      else {
        FUN_1010d909c(param_1,"Couldn\'t find host %s in the .netrc file; using defaults\n");
      }
    }
    pcVar19 = local_298;
    if (((*(byte *)(plVar14[0x61] + 0x7c) >> 5 & 1) == 0) ||
       (*(char *)((long)plVar14 + 0x2cc) != '\0')) {
      lVar15 = (*(code *)PTR__strdup_101873638)(local_290);
      plVar14[0x2e] = lVar15;
      if (lVar15 == 0) goto LAB_1010e3c34;
    }
    else {
      lVar15 = (*(code *)PTR__strdup_101873638)("anonymous");
      plVar14[0x2e] = lVar15;
      if (lVar15 == 0) {
LAB_1010e3c34:
        plVar14[0x2f] = 0;
        goto LAB_1010e3c38;
      }
      pcVar19 = "ftp@example.com";
    }
    lVar15 = (*(code *)PTR__strdup_101873638)(pcVar19);
    plVar14[0x2f] = lVar15;
    uVar45 = 0x1b;
    if ((lVar15 == 0) || (plVar14[0x2e] == 0)) goto LAB_1010e3c48;
    if (*local_2d0 == '\0') {
LAB_1010e3a88:
      lVar43 = *plVar14;
      if (*(long *)(lVar43 + 0x218) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(lVar43 + 0x218) = 0;
      }
      if (*(long *)(lVar43 + 0x1f8) != 0) {
        (*(code *)PTR__free_101873628)();
        *(undefined8 *)(lVar43 + 0x1f8) = 0;
      }
      _bzero((void *)(lVar43 + 0x78),0x1a8);
      *(undefined8 *)(lVar43 + 0x88) = 0xffffffffffffffff;
      *(undefined4 *)((long)plVar14 + 0xac) = 1;
      lVar43 = plVar14[0x61];
      if (*(code **)(lVar43 + 8) == (code *)0x0) {
LAB_1010e3b0c:
        if (plVar14[0x1e] < 0) {
          plVar14[0x1e] = *(long *)(lVar43 + 0x70);
        }
        if ((int)plVar14[0x1f] < 0) {
          *(uint *)(plVar14 + 0x1f) = (uint)*(ushort *)(plVar14[0x62] + 0x70);
        }
        plVar14[0x3e] = (long)FUN_1010d959c;
        plVar14[0x3d] = (long)FUN_1010d959c;
        plVar14[0x40] = (long)FUN_1010d94a0;
        plVar14[0x3f] = (long)FUN_1010d94a0;
        if ((*(byte *)(lVar43 + 0x7c) >> 4 & 1) == 0) {
          *(undefined8 *)(param_1 + 0x448) = *(undefined8 *)(param_1 + 0x5e8);
          *(undefined8 *)(param_1 + 0x450) = *(undefined8 *)(param_1 + 0x5f0);
          *(undefined8 *)(param_1 + 0x458) = *(undefined8 *)(param_1 + 0x620);
          *(undefined8 *)(param_1 + 0x460) = *(undefined8 *)(param_1 + 0x628);
          *(undefined8 *)(param_1 + 0x468) = *(undefined8 *)(param_1 + 0x610);
          *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)(param_1 + 0x608);
          *(undefined8 *)(param_1 + 0x478) = *(undefined8 *)(param_1 + 0x600);
          iVar8 = FUN_101104e9c(param_1 + 0x430);
          if (iVar8 != 0) {
            auVar47 = FUN_1010d0e58();
            lVar43 = FUN_1010d0e80(auVar47._0_8_,auVar47._8_8_,
                                   *(undefined8 *)(*(long *)(param_1 + 0x8d0) + 0x18),
                                   *(undefined8 *)(*(long *)(param_1 + 0x8d0) + 0x20));
            if (999 < lVar43) {
              FUN_101103508(*(undefined8 *)(param_1 + 0x8d0),param_1,FUN_1010e56a0);
              *(undefined1 (*) [16])(*(long *)(param_1 + 0x8d0) + 0x18) = auVar47;
            }
            if ((*(char *)(param_1 + 0x50b) == '\0') || (*(char *)(param_1 + 0x8918) != '\0')) {
              iVar8 = FUN_1010e551c(param_1,plVar14);
              if ((*(byte *)(param_1 + 0x89f0) & 0x28) == 0) {
                bVar5 = false;
              }
              else {
                bVar5 = (*(byte *)(plVar14[0x61] + 0x78) & 3) != 0;
              }
              if (iVar8 == 0) {
                uVar11 = 0;
              }
              else {
                uVar11 = FUN_101103794(param_1,plVar14);
                uVar11 = uVar11 ^ 1;
              }
              pcVar19 = (char *)FUN_101103324(*(undefined8 *)(param_1 + 0x8d0),plVar14[0x18]);
              if (pcVar19 == (char *)0x0) goto LAB_1010e45b8;
              uVar45 = FUN_1010f2060(*(undefined8 *)(param_1 + 0x60));
              FUN_1010d909c(param_1,"Found bundle for host %s: %p\n");
              if (uVar11 == 0) {
LAB_1010e40a4:
                bVar1 = false;
              }
              else {
                if (*pcVar19 == '\0') {
                  FUN_1010d909c(param_1,"Server doesn\'t support pipelining\n");
                  goto LAB_1010e40a4;
                }
                bVar1 = true;
              }
              puVar44 = (undefined8 *)**(undefined8 **)(pcVar19 + 0x10);
              if (puVar44 == (undefined8 *)0x0) goto LAB_1010e45b8;
              local_2d8 = (long *)0x0;
              plVar30 = plVar14 + 0x2e;
              local_318 = uVar45;
              do {
                plVar46 = (long *)*puVar44;
                puVar44 = (undefined8 *)puVar44[2];
                uVar28 = FUN_1010e56b8(plVar46,param_1);
                plVar42 = local_2d8;
                if ((uVar28 & 1) == 0) {
                  uVar28 = ((long *)plVar46[0x71])[3] + ((undefined8 *)plVar46[0x70])[3];
                  if (bVar1) {
                    plVar33 = *(long **)plVar46[0x70];
                    if (plVar33 == (long *)0x0) {
                      lVar43 = 0;
                    }
                    else {
                      lVar43 = *plVar33;
                    }
                    plVar33 = *(long **)plVar46[0x71];
                    if (plVar33 == (long *)0x0) {
                      lVar15 = 0;
                    }
                    else {
                      lVar15 = *plVar33;
                    }
                    if (((lVar43 == 0) && (lVar43 = lVar15, lVar15 == 0)) ||
                       (uVar29 = FUN_1010e551c(lVar43,plVar46), (uVar29 & 1) != 0)) {
LAB_1010e4180:
                      uVar11 = *(uint *)(plVar14[0x61] + 0x7c);
                      if (((((((*(uint *)(plVar46[0x61] + 0x7c) ^ uVar11) & 1) == 0) ||
                            ((*(uint *)(plVar46[0x61] + 0x78) & *(uint *)(plVar14[0x61] + 0x78)) !=
                             0)) && (((uVar11 & 1) == 0 ||
                                     ((*(char *)(param_1 + 0x440) == (char)plVar46[200] &&
                                      (*(char *)(param_1 + 0x441) ==
                                       *(char *)((long)plVar46 + 0x641))))))) &&
                          (*(char *)((long)plVar14 + 0x2ca) == *(char *)((long)plVar46 + 0x2ca))) &&
                         ((bVar1 || ((char)plVar46[9] == '\0')))) {
                        pcVar19 = (char *)plVar14[0xc9];
                        if (((pcVar19 == (char *)0x0) && ((short)plVar14[0xca] == 0)) ||
                           (((((short)plVar46[0xca] == (short)plVar14[0xca] &&
                              (*(int *)((long)plVar46 + 0x654) == *(int *)((long)plVar14 + 0x654)))
                             && (pcVar19 != (char *)0x0)) &&
                            (((char *)plVar46[0xc9] != (char *)0x0 &&
                             (iVar8 = _strcmp((char *)plVar46[0xc9],pcVar19), iVar8 == 0)))))) {
                          if ((bool)(bVar5 | (uVar11 & 0x80) == 0)) {
                            iVar8 = FUN_1010eb4e8(*plVar30,plVar46[0x2e]);
                            if ((iVar8 == 0) ||
                               (iVar8 = FUN_1010eb4e8(plVar14[0x2f],plVar46[0x2f]), iVar8 == 0))
                            goto LAB_1010e43f0;
                            bVar6 = true;
                          }
                          else {
                            bVar6 = false;
                          }
                          if (((*(char *)((long)plVar14 + 0x2cb) == '\0') ||
                              ((*(byte *)(plVar14[0x61] + 0x7c) & 1) != 0)) ||
                             ((*(char *)((long)plVar46 + 0x2cb) != '\0' &&
                              ((((*(char *)((long)plVar14 + 0x2d5) != '\0' &&
                                 (*(char *)((long)plVar46 + 0x2d5) != '\0')) &&
                                (iVar8 = FUN_1010f659c(plVar14[0x1c],plVar46[0x1c]), iVar8 != 0)) &&
                               (plVar14[0x1e] == plVar46[0x1e])))))) {
                            iVar8 = FUN_1010f659c(*(undefined8 *)plVar14[0x61],
                                                  *(undefined8 *)plVar46[0x61]);
                            if ((((iVar8 != 0) ||
                                 ((*(uint *)(plVar46[0x61] + 0x78) & *(uint *)(plVar14[0x61] + 0x78)
                                  ) != 0)) &&
                                ((iVar8 = FUN_1010f659c(plVar14[0x18],plVar46[0x18]), iVar8 != 0 &&
                                 ((int)plVar14[0x1f] == (int)plVar46[0x1f])))) &&
                               (((*(byte *)(plVar14[0x61] + 0x7c) & 1) == 0 ||
                                ((iVar8 = FUN_101104d8c(plVar14 + 0x4b,plVar46 + 0x4b), iVar8 != 0
                                 && (*(int *)((long)plVar46 + 0x20c) == 2)))))) goto LAB_1010e4380;
                          }
                          else if ((*(char *)((long)plVar46 + 0x2ca) != '\0') &&
                                  (((((int)plVar14[0x34] == (int)plVar46[0x34] &&
                                     (*(char *)((long)plVar14 + 0x2d5) ==
                                      *(char *)((long)plVar46 + 0x2d5))) &&
                                    (iVar8 = FUN_1010f659c(plVar14[0x1c],plVar46[0x1c]), iVar8 != 0)
                                    ) && (plVar14[0x1e] == plVar46[0x1e])))) {
LAB_1010e4380:
                            if (bVar5) {
                              if ((bVar6) && ((int)plVar46[0x79] != 0)) goto LAB_1010e4740;
                              bVar6 = !bVar6;
                              uVar28 = local_318;
                            }
                            else {
                              if (uVar28 == 0 || (bool)(bVar1 ^ 1)) goto LAB_1010e4538;
                              if (uVar45 <= uVar28) goto LAB_1010e43f0;
                              bVar7 = FUN_1011035d8(param_1,plVar46);
                              bVar6 = (uVar28 < local_318 & (bVar7 ^ 1)) == 0;
                              if (bVar6) {
                                uVar28 = local_318;
                              }
                            }
                            local_318 = uVar28;
                            plVar42 = plVar46;
                            if (bVar6) {
                              plVar42 = local_2d8;
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (uVar28 == 0) {
                    if (((int)plVar46[0x3a] != -1) && ((char)plVar46[0x59] == '\0'))
                    goto LAB_1010e4180;
                    FUN_1010d909c(param_1,"Connection #%ld isn\'t open enough, can\'t reuse\n");
                  }
                }
LAB_1010e43f0:
                local_2d8 = plVar42;
              } while (puVar44 != (undefined8 *)0x0);
              plVar46 = local_2d8;
              if (local_2d8 == (long *)0x0) goto LAB_1010e45b8;
LAB_1010e4538:
              local_2d8 = plVar46;
              iVar8 = FUN_1010e551c(param_1,local_2d8);
              plVar46 = local_2d8;
              if (((iVar8 != 0) &&
                  (*(long *)(local_2d8[0x71] + 0x18) + *(long *)(local_2d8[0x70] + 0x18) != 0)) &&
                 ((FUN_1010d909c(param_1,"Found connection %ld, with requests in the pipe (%zu)\n"),
                  *(ulong *)(local_2d8[0xcc] + 8) < uVar12 &&
                  (*(ulong *)(*(long *)(param_1 + 0x8d0) + 8) < uVar13)))) {
                FUN_1010d909c(param_1,"We can reuse, but we want a new connection anyway\n");
                goto LAB_1010e45b8;
              }
LAB_1010e4740:
              *(undefined1 *)(plVar46 + 9) = 1;
              if (plVar14[0x1a] != 0) {
                (*(code *)PTR__free_101873628)();
              }
              FUN_101104fac(plVar14 + 0x4b);
              *plVar46 = *plVar14;
              cVar32 = *(char *)((long)plVar14 + 0x2cc);
              *(char *)((long)plVar46 + 0x2cc) = cVar32;
              if (cVar32 != '\0') {
                if (plVar46[0x2e] != 0) {
                  (*(code *)PTR__free_101873628)();
                  plVar46[0x2e] = 0;
                }
                if (plVar46[0x2f] != 0) {
                  (*(code *)PTR__free_101873628)();
                  plVar46[0x2f] = 0;
                }
                plVar46[0x2e] = plVar14[0x2e];
                plVar46[0x2f] = plVar14[0x2f];
                *plVar30 = 0;
                plVar14[0x2f] = 0;
              }
              cVar32 = *(char *)((long)plVar14 + 0x2cd);
              *(char *)((long)plVar46 + 0x2cd) = cVar32;
              if (cVar32 != '\0') {
                if (plVar46[0x32] != 0) {
                  (*(code *)PTR__free_101873628)();
                  plVar46[0x32] = 0;
                }
                if (plVar46[0x33] != 0) {
                  (*(code *)PTR__free_101873628)();
                  plVar46[0x33] = 0;
                }
                plVar46[0x32] = plVar14[0x32];
                plVar46[0x33] = plVar14[0x33];
                plVar14[0x32] = 0;
                plVar14[0x33] = 0;
              }
              plVar42 = plVar46 + 0x16;
              if (*plVar42 != 0) {
                (*(code *)PTR__free_101873628)();
                *plVar42 = 0;
              }
              lVar43 = plVar14[0x18];
              plVar46[0x19] = plVar14[0x19];
              plVar46[0x18] = lVar43;
              lVar43 = plVar14[0x16];
              plVar46[0x17] = plVar14[0x17];
              *plVar42 = lVar43;
              FUN_1010edc20(plVar46);
              *(undefined1 *)((long)plVar46 + 0x2c9) = 1;
              if (*plVar30 != 0) {
                (*(code *)PTR__free_101873628)();
                *plVar30 = 0;
              }
              if (plVar14[0x2f] != 0) {
                (*(code *)PTR__free_101873628)();
                plVar14[0x2f] = 0;
              }
              if (plVar14[0x32] != 0) {
                (*(code *)PTR__free_101873628)();
                plVar14[0x32] = 0;
              }
              if (plVar14[0x33] != 0) {
                (*(code *)PTR__free_101873628)();
                plVar14[0x33] = 0;
              }
              if (plVar14[0xc9] != 0) {
                (*(code *)PTR__free_101873628)();
                plVar14[0xc9] = 0;
              }
              FUN_1010ef0ec(plVar14[0x70],0);
              FUN_1010ef0ec(plVar14[0x71],0);
              plVar14[0x70] = 0;
              plVar14[0x71] = 0;
              if (plVar14[0x72] != 0) {
                (*(code *)PTR__free_101873628)();
                plVar14[0x72] = 0;
              }
              (*(code *)PTR__free_101873628)(plVar14);
              *param_2 = (long)plVar46;
              FUN_1010e557c(param_1,plVar42);
              FUN_1010d909c(param_1,"Re-using existing connection! (#%ld) with host %s\n");
LAB_1010e498c:
              *(undefined1 *)(plVar46 + 9) = 1;
              FUN_1010e5474(plVar46);
              uVar45 = FUN_1010e5394(param_1);
              if ((int)uVar45 == 0) {
                plVar46[0x77] = *(long *)(param_1 + 0x2c8);
                plVar46[0x78] = *(long *)(param_1 + 0x248);
                plVar46[0x75] = *(long *)(param_1 + 0x298);
                plVar46[0x76] = *(long *)(param_1 + 0x328);
                uVar31 = FUN_1010edb38(param_1,0,1);
                if (*(char *)((long)plVar46 + 0x2c9) == '\0') {
                  FUN_1010e557c(param_1,plVar46 + 0x16);
                  pcVar19 = *(char **)(param_1 + 0x690);
                  if (pcVar19 == (char *)0x0) {
                    if (((char *)plVar46[0x1c] == (char *)0x0) || (*(char *)plVar46[0x1c] == '\0'))
                    {
                      plVar46[0x1e] = (long)(int)plVar46[0x1f];
                      iVar8 = FUN_1010d18a4(plVar46,plVar46[0x18],(long)(int)plVar46[0x1f],local_168
                                            ,uVar31);
                      if (iVar8 == -2) goto LAB_1010e4aec;
                      if (iVar8 == 1) goto LAB_1010e4b28;
                      if (local_168[0] != (long *)0x0) goto LAB_1010e4b68;
                      FUN_1010d9258(param_1,"Couldn\'t resolve host \'%s\'");
                      uVar45 = 6;
                    }
                    else {
                      FUN_1010e557c(param_1,plVar46 + 0x1a);
                      iVar8 = FUN_1010d18a4(plVar46,plVar46[0x1c],(int)plVar46[0x1e],local_168,
                                            uVar31);
                      if (iVar8 == -2) {
LAB_1010e4aec:
                        uVar45 = 0x1c;
                      }
                      else if (iVar8 == 1) {
LAB_1010e4b28:
                        uVar45 = 0;
                        *param_3 = '\x01';
                      }
                      else if (local_168[0] == (long *)0x0) {
                        FUN_1010d9258(param_1,"Couldn\'t resolve proxy \'%s\'");
                        uVar45 = 5;
                      }
                      else {
LAB_1010e4b68:
                        uVar45 = 0;
                      }
                    }
                  }
                  else {
                    plVar14 = (long *)(*(code *)PTR__calloc_101873640)(1,0x18);
                    local_168[0] = plVar14;
                    if (plVar14 == (long *)0x0) {
                      uVar45 = 0x1b;
                    }
                    else {
                      lVar43 = FUN_1010f6cf4(pcVar19);
                      *plVar14 = lVar43;
                      if (lVar43 == 0) {
                        sVar16 = _strlen(pcVar19);
                        if (sVar16 < 0x68) {
                          uVar45 = 0x1b;
                        }
                        else {
                          FUN_1010d9258(param_1,"Unix socket path too long: \'%s\'");
                          uVar45 = 6;
                        }
                        (*(code *)PTR__free_101873628)(local_168[0]);
                        local_168[0] = (long *)0x0;
                      }
                      else {
                        uVar45 = 0;
                        local_168[0][2] = local_168[0][2] + 1;
                      }
                    }
                  }
                  plVar46[0xb] = (long)local_168[0];
                }
                else {
                  uVar45 = 0;
                  *param_3 = '\0';
                }
              }
            }
            else {
LAB_1010e45b8:
              lVar43 = FUN_101103324(*(undefined8 *)(param_1 + 0x8d0),plVar14[0x18]);
              bVar5 = false;
              if ((uVar12 != 0) && (lVar43 != 0)) {
                if (*(ulong *)(lVar43 + 8) < uVar12) {
LAB_1010e464c:
                  bVar5 = false;
                }
                else {
                  auVar47 = FUN_1010d0e58();
                  puVar44 = (undefined8 *)**(undefined8 **)(lVar43 + 0x10);
                  if (puVar44 != (undefined8 *)0x0) {
                    lVar43 = -1;
                    plVar30 = (long *)0x0;
                    do {
                      plVar42 = (long *)*puVar44;
                      lVar15 = lVar43;
                      plVar46 = plVar30;
                      if (((char)plVar42[9] == '\0') &&
                         (lVar15 = FUN_1010d0e80(auVar47._0_8_,auVar47._8_8_,plVar42[0x36],
                                                 plVar42[0x37]), plVar46 = plVar42, lVar15 <= lVar43
                         )) {
                        lVar15 = lVar43;
                        plVar46 = plVar30;
                      }
                      puVar44 = (undefined8 *)puVar44[2];
                      lVar43 = lVar15;
                      plVar30 = plVar46;
                    } while (puVar44 != (undefined8 *)0x0);
                    if (plVar46 != (long *)0x0) {
                      *plVar46 = param_1;
                      FUN_1010e1ccc(plVar46,0);
                      goto LAB_1010e464c;
                    }
                  }
                  bVar5 = true;
                }
              }
              if ((uVar13 == 0) || (*(ulong *)(*(long *)(param_1 + 0x8d0) + 8) < uVar13)) {
LAB_1010e468c:
                if (!bVar5) {
                  FUN_101103368(*(undefined8 *)(param_1 + 0x8d0),plVar14);
                  pbVar27 = (byte *)(param_1 + 0x89f8);
                  if (((*pbVar27 & 0x28) != 0) && (*(char *)(param_1 + 0x8a08) != '\0')) {
                    FUN_1010d909c(param_1,"NTLM picked AND auth done set, clear picked!\n");
                    pbVar27[0] = 0;
                    pbVar27[1] = 0;
                    pbVar27[2] = 0;
                    pbVar27[3] = 0;
                    pbVar27[4] = 0;
                    pbVar27[5] = 0;
                    pbVar27[6] = 0;
                    pbVar27[7] = 0;
                  }
                  pbVar27 = (byte *)(param_1 + 0x8a18);
                  plVar46 = plVar14;
                  if (((*pbVar27 & 0x28) != 0) && (*(char *)(param_1 + 0x8a28) != '\0')) {
                    FUN_1010d909c(param_1,"NTLM-proxy picked AND auth done set, clear picked!\n");
                    pbVar27[0] = 0;
                    pbVar27[1] = 0;
                    pbVar27[2] = 0;
                    pbVar27[3] = 0;
                    pbVar27[4] = 0;
                    pbVar27[5] = 0;
                    pbVar27[6] = 0;
                    pbVar27[7] = 0;
                  }
                  goto LAB_1010e498c;
                }
              }
              else {
                plVar30 = (long *)FUN_1010e55ec(param_1);
                if (plVar30 != (long *)0x0) {
                  *plVar30 = param_1;
                  FUN_1010e1ccc(plVar30,0);
                  goto LAB_1010e468c;
                }
              }
              FUN_1010d909c(param_1,"No connections available.\n");
              FUN_1010e1e04(plVar14);
              *param_2 = 0;
              uVar45 = 0x59;
            }
            lVar43 = *(long *)PTR____stack_chk_guard_101444218;
            goto LAB_1010e3c48;
          }
          uVar45 = 0x1b;
        }
        else {
          uVar45 = (**(code **)(lVar43 + 0x28))(plVar14,&uStack_299);
          if ((int)uVar45 == 0) {
            *plVar14 = param_1;
            *(undefined1 *)((long)plVar14 + 0x2d1) = 1;
            FUN_101103368(*(undefined8 *)(param_1 + 0x8d0),plVar14);
            uVar45 = FUN_1010e5394(param_1);
            if ((int)uVar45 != 0) {
              (**(code **)(plVar14[0x61] + 0x18))(plVar14,uVar45,0);
              goto LAB_1010e4060;
            }
            FUN_1010eb3d0(plVar14,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
            uVar45 = 0;
          }
          FUN_1010e5474(plVar14);
        }
      }
      else {
        uVar45 = (**(code **)(lVar43 + 8))(plVar14);
        if ((int)uVar45 == 0) {
          lVar43 = plVar14[0x61];
          goto LAB_1010e3b0c;
        }
      }
LAB_1010e4060:
      lVar43 = *(long *)PTR____stack_chk_guard_101444218;
    }
    else {
      lVar15 = (*(code *)PTR__strdup_101873638)(local_2d0);
      plVar14[0x30] = lVar15;
      if (lVar15 != 0) goto LAB_1010e3a88;
      uVar45 = 0x1b;
    }
  }
  else {
LAB_1010e3c48:
    if (local_2d0 == (char *)0x0) goto LAB_1010e29c4;
  }
  (*(code *)PTR__free_101873628)(local_2d0);
LAB_1010e29c4:
  if (local_298 != (char *)0x0) {
    (*(code *)PTR__free_101873628)();
    local_298 = (char *)0x0;
  }
  if (local_290 != 0) {
    (*(code *)PTR__free_101873628)();
    local_290 = 0;
  }
  if ((int)uVar45 == 0) {
    lVar15 = *param_2;
    if ((*(long *)(*(long *)(lVar15 + 0x380) + 0x18) != 0) ||
       (*(long *)(*(long *)(lVar15 + 0x388) + 0x18) != 0)) {
      uVar45 = 0;
      *param_4 = 1;
      goto LAB_1010e2a74;
    }
    if (*param_3 == '\0') {
      uVar45 = FUN_1010e24a0(lVar15,param_4);
      goto LAB_1010e2a40;
    }
  }
  else {
LAB_1010e2a40:
    if ((int)uVar45 != 0) {
      if ((int)uVar45 == 0x59) {
        *param_2 = 0;
        uVar45 = 0x59;
      }
      else if (*param_2 != 0) {
        FUN_1010e1ccc(*param_2,0);
        *param_2 = 0;
      }
      goto LAB_1010e2a74;
    }
  }
  uVar45 = 0;
LAB_1010e2a74:
  if (lVar43 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar45;
}




ulong FUN_1010e4bb0(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = (long *)*param_1;
  if (*(char *)((long)plVar6 + 0x2dc) != '\0') {
    return 0;
  }
  lVar5 = *plVar6;
  FUN_1010e21a0(lVar5,plVar6);
  if (((*(long *)(plVar6[0x70] + 0x18) + *(long *)(plVar6[0x71] + 0x18) != 0) &&
      (*(char *)(lVar5 + 0x50a) == '\0')) && ((char)plVar6[0x59] == '\0')) {
    return 0;
  }
  *(undefined1 *)((long)plVar6 + 0x2dc) = 1;
  if (*(long *)(lVar5 + 0x1f8) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(lVar5 + 0x1f8) = 0;
  }
  if (*(long *)(lVar5 + 0x1f0) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(lVar5 + 0x1f0) = 0;
  }
  if (plVar6[0xb] != 0) {
    FUN_1010d1aa4(lVar5);
    plVar6[0xb] = 0;
  }
  if (((uint)param_2 < 0x2b) && ((1L << (param_2 & 0x3f) & 0x40004800000U) != 0)) {
    param_3 = 1;
  }
  if (*(code **)(plVar6[0x61] + 0x18) != (code *)0x0) {
    param_2 = (**(code **)(plVar6[0x61] + 0x18))(plVar6,param_2,param_3);
  }
  if ((int)param_2 == 0) {
    iVar1 = FUN_1010d1d5c(plVar6);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = 0x2a;
    }
    param_2 = (ulong)uVar3;
  }
  if (*(long *)(lVar5 + 0x8938) != 0) {
    (*(code *)PTR__free_101873628)();
    *(long *)(lVar5 + 0x8938) = 0;
  }
  if ((((*(char *)(lVar5 + 0x50a) != '\0') && ((int)plVar6[0x79] != 2)) && ((int)plVar6[0x7d] != 2))
     || (((uint)param_3 | (uint)((char)plVar6[0x59] != '\0')) == 1)) {
    FUN_1010e1ccc(plVar6,param_3);
    goto LAB_1010e4de8;
  }
  uVar4 = *(ulong *)(*(long *)(lVar5 + 0x60) + 0x70);
  if ((long)uVar4 < 0) {
    uVar4 = (long)*(int *)(*(long *)(lVar5 + 0x60) + 0x18) << 2;
  }
  *(undefined1 *)(plVar6 + 9) = 0;
  if ((uVar4 == 0) || (*(ulong *)(*(long *)(lVar5 + 0x8d0) + 8) <= uVar4)) {
LAB_1010e4da0:
    plVar2 = (long *)0x0;
  }
  else {
    FUN_1010d909c(lVar5,"Connection cache is full, closing the oldest one.\n");
    plVar2 = (long *)FUN_1010e55ec(lVar5);
    if (plVar2 == (long *)0x0) goto LAB_1010e4da0;
    *plVar2 = lVar5;
    FUN_1010e1ccc(plVar2,0);
  }
  if (plVar2 == plVar6) {
    *(undefined8 *)(lVar5 + 0x8f0) = 0;
  }
  else {
    *(long **)(lVar5 + 0x8f0) = plVar6;
    FUN_1010d909c(lVar5,"Connection #%ld to host %s left intact\n");
  }
LAB_1010e4de8:
  *param_1 = 0;
  if (*(long *)(lVar5 + 0x218) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(lVar5 + 0x218) = 0;
  }
  if (*(long *)(lVar5 + 0x1f8) != 0) {
    (*(code *)PTR__free_101873628)();
    *(undefined8 *)(lVar5 + 0x1f8) = 0;
    return param_2;
  }
  return param_2;
}




undefined8 FUN_1010e4e40(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)*param_1;
  if (*(code **)(plVar3[0x61] + 0x10) != (code *)0x0) {
    lVar4 = *plVar3;
    uVar2 = (**(code **)(plVar3[0x61] + 0x10))(plVar3,param_2);
    if ((int)uVar2 == 0x37) {
      if ((*(char *)((long)plVar3 + 0x2c9) == '\0') || (*(long *)(lVar4 + 0x60) != 0)) {
        return 0x37;
      }
      uVar2 = FUN_1010eb234(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      plVar3 = (long *)*param_1;
      uVar2 = (**(code **)(plVar3[0x61] + 0x10))(plVar3,param_2);
    }
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*param_2 != '\0') {
      lVar4 = *plVar3;
      *(undefined1 *)(lVar4 + 0x210) = 0;
      iVar1 = (int)plVar3[100];
      if ((int)plVar3[100] <= *(int *)((long)plVar3 + 0x324)) {
        iVar1 = *(int *)((long)plVar3 + 0x324);
      }
      *(int *)(lVar4 + 0x1e0) = iVar1 + 1;
      FUN_1010d231c(lVar4,6);
    }
  }
  return 0;
}




undefined8 FUN_1010e4f04(long *param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = 0;
  *param_2 = 0;
  if ((*(code **)(param_1[0x61] + 0x20) != (code *)0x0) &&
     (uVar2 = (**(code **)(param_1[0x61] + 0x20))(param_1,param_2), (int)uVar2 == 0)) {
    if (*param_2 == 1) {
      lVar3 = *param_1;
      *(undefined1 *)(lVar3 + 0x210) = 0;
      iVar1 = (int)param_1[100];
      if ((int)param_1[100] <= *(int *)((long)param_1 + 0x324)) {
        iVar1 = *(int *)((long)param_1 + 0x324);
      }
      *(int *)(lVar3 + 0x1e0) = iVar1 + 1;
      FUN_1010d231c(lVar3,6);
    }
    uVar2 = 0;
  }
  return uVar2;
}




int FUN_1010e4f80(char *param_1,size_t param_2,long *param_3,long *param_4,long *param_5)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  void *pvVar8;
  void *pvVar9;
  
  if (param_4 == (long *)0x0) {
    pcVar6 = (char *)0x0;
  }
  else {
    pcVar1 = _strchr(param_1,0x3a);
    pcVar6 = (char *)0x0;
    if (pcVar1 < param_1 + param_2) {
      pcVar6 = pcVar1;
    }
  }
  if (param_5 == (long *)0x0) {
    pcVar1 = (char *)0x0;
  }
  else {
    pcVar2 = _strchr(param_1,0x3b);
    pcVar1 = (char *)0x0;
    if (pcVar2 < param_1 + param_2) {
      pcVar1 = pcVar2;
    }
  }
  if (pcVar6 == (char *)0x0) {
    if (pcVar1 == (char *)0x0) {
      pcVar2 = (char *)0x0;
      pcVar5 = (char *)0x0;
      sVar4 = param_2;
      goto LAB_1010e5074;
    }
    pcVar2 = (char *)0x0;
    sVar4 = (long)pcVar1 - (long)param_1;
LAB_1010e505c:
    pcVar5 = param_1 + (param_2 - (long)pcVar1);
  }
  else {
    if ((pcVar1 == (char *)0x0) || (pcVar6 <= pcVar1)) {
      sVar4 = (long)pcVar6 - (long)param_1;
    }
    else {
      sVar4 = (long)pcVar1 - (long)param_1;
    }
    if ((pcVar1 == (char *)0x0) ||
       (pcVar2 = pcVar1 + -(long)pcVar6, pcVar1 < pcVar6 || pcVar2 == (char *)0x0)) {
      pcVar2 = param_1 + (param_2 - (long)pcVar6);
    }
    pcVar2 = pcVar2 + -1;
    if (pcVar1 == (char *)0x0) {
      pcVar5 = (char *)0x0;
      goto LAB_1010e5074;
    }
    pcVar5 = pcVar6 + -(long)pcVar1;
    if (pcVar6 < pcVar1 || pcVar5 == (char *)0x0) goto LAB_1010e505c;
  }
  pcVar5 = pcVar5 + -1;
LAB_1010e5074:
  iVar3 = 0;
  pvVar7 = (void *)0x0;
  if ((param_3 != (long *)0x0) && (sVar4 != 0)) {
    pvVar7 = (void *)(*(code *)PTR__malloc_101873620)(sVar4 + 1);
    iVar3 = 0x1b;
    if (pvVar7 != (void *)0x0) {
      iVar3 = 0;
    }
  }
  pvVar8 = (void *)0x0;
  if ((((pcVar2 == (char *)0x0) || (param_4 == (long *)0x0)) || (iVar3 != 0)) ||
     (pvVar8 = (void *)(*(code *)PTR__malloc_101873620)(pcVar2 + 1), pvVar8 != (void *)0x0)) {
    pvVar9 = (void *)0x0;
    if (((pcVar5 == (char *)0x0) || (param_5 == (long *)0x0)) ||
       ((iVar3 != 0 ||
        (pvVar9 = (void *)(*(code *)PTR__malloc_101873620)(pcVar5 + 1), pvVar9 != (void *)0x0)))) {
      if (iVar3 != 0) {
        return iVar3;
      }
      if (pvVar7 != (void *)0x0) {
        _memcpy(pvVar7,param_1,sVar4);
        *(undefined1 *)((long)pvVar7 + sVar4) = 0;
        if (*param_3 != 0) {
          (*(code *)PTR__free_101873628)();
          *param_3 = 0;
        }
        *param_3 = (long)pvVar7;
      }
      if (pvVar8 != (void *)0x0) {
        _memcpy(pvVar8,pcVar6 + 1,(size_t)pcVar2);
        *(char *)((long)pvVar8 + (long)pcVar2) = '\0';
        if (*param_4 != 0) {
          (*(code *)PTR__free_101873628)();
          *param_4 = 0;
        }
        *param_4 = (long)pvVar8;
      }
      if (pvVar9 != (void *)0x0) {
        _memcpy(pvVar9,pcVar1 + 1,(size_t)pcVar5);
        *(char *)((long)pvVar9 + (long)pcVar5) = '\0';
        if (*param_5 != 0) {
          (*(code *)PTR__free_101873628)();
          *param_5 = 0;
        }
        *param_5 = (long)pvVar9;
        return 0;
      }
      return 0;
    }
    if (pvVar8 != (void *)0x0) {
      (*(code *)PTR__free_101873628)(pvVar8);
    }
  }
  if (pvVar7 != (void *)0x0) {
    (*(code *)PTR__free_101873628)(pvVar7);
  }
  return 0x1b;
}




undefined8 FUN_1010e524c(char *param_1,char *param_2)

{
  ulong uVar1;
  int iVar2;
  size_t sVar3;
  char *pcVar4;
  void *pvVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = FUN_1010f659c("*",param_2);
    if (iVar2 != 0) {
      return 1;
    }
    sVar3 = _strlen(param_2);
    pcVar4 = _strchr(param_1,0x3a);
    if (pcVar4 == (char *)0x0) {
      sVar6 = _strlen(param_1);
    }
    else {
      sVar6 = (long)pcVar4 - (long)param_1;
    }
    if (sVar3 != 0) {
      uVar7 = 0;
      do {
        while ((uVar7 < sVar3 &&
               (pvVar5 = _memchr(", ",(int)param_2[uVar7],3), pvVar5 != (void *)0x0))) {
          uVar7 = uVar7 + 1;
        }
        uVar1 = uVar7;
        if (uVar7 == sVar3) {
          return 0;
        }
        while ((uVar1 < sVar3 &&
               (pvVar5 = _memchr(", ",(int)param_2[uVar1],3), pvVar5 == (void *)0x0))) {
          uVar1 = uVar1 + 1;
        }
        if (param_2[uVar7] == '.') {
          uVar7 = uVar7 + 1;
        }
        uVar8 = uVar1 - uVar7;
        if ((uVar8 <= sVar6) &&
           (iVar2 = FUN_1010f6624(param_2 + uVar7,param_1 + (sVar6 - uVar8),uVar8), iVar2 != 0)) {
          if (sVar6 == uVar8) {
            return 1;
          }
          if (param_1[(sVar6 - uVar8) + -1] == '.') {
            return 1;
          }
        }
        uVar7 = uVar1 + 1;
      } while (uVar7 < sVar3);
    }
  }
  return 0;
}




undefined8 FUN_1010e5394(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x3a8);
  *(long *)(param_1 + 0x8ac8) = lVar2;
  if ((lVar2 == 0) && (*(long *)(param_1 + 0x5d0) == 0)) {
    uVar1 = 0;
    *(undefined1 *)(param_1 + 0x8ab9) = 0;
  }
  else {
    if (*(char *)(param_1 + 0x8aba) != '\0') {
      (*(code *)PTR__free_101873628)(*(undefined8 *)(param_1 + 0x8ac0));
      lVar2 = *(long *)(param_1 + 0x8ac8);
    }
    if (lVar2 == 0) {
      lVar2 = (*(code *)PTR__strdup_101873638)(*(undefined8 *)(param_1 + 0x5d0));
    }
    else {
      lVar2 = FUN_1010e7298("%lu-");
    }
    *(long *)(param_1 + 0x8ac0) = lVar2;
    *(char *)(param_1 + 0x8aba) = lVar2 != 0;
    if (lVar2 == 0) {
      uVar1 = 0x1b;
    }
    else {
      uVar1 = 0;
      *(undefined1 *)(param_1 + 0x8ab9) = 1;
    }
  }
  return uVar1;
}




void FUN_1010e5474(long *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *param_1;
  *(undefined1 *)((long)param_1 + 0x2dc) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(lVar2 + 0x8a98) = 0;
  if (*(char *)(lVar2 + 0x4ff) == '\0') {
    if (*(int *)(lVar2 + 0x420) != 5) goto LAB_1010e54b8;
    uVar1 = 1;
  }
  else {
    uVar1 = 5;
  }
  *(undefined4 *)(lVar2 + 0x420) = uVar1;
LAB_1010e54b8:
  auVar3 = FUN_1010d0e58();
  *(undefined1 (*) [16])(lVar2 + 0xb8) = auVar3;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined1 *)(lVar2 + 0xd8) = 1;
  *(long *)(lVar2 + 0x1d0) = lVar2 + 0x908;
  *(undefined8 *)(lVar2 + 0xd0) = *(undefined8 *)(lVar2 + 0xc0);
  *(undefined8 *)(lVar2 + 200) = *(undefined8 *)(lVar2 + 0xb8);
  *(long *)(lVar2 + 0x1d8) = lVar2 + 0x4909;
  *(undefined8 *)(lVar2 + 0xe8) = *(undefined8 *)(lVar2 + 0x8f8);
  *(undefined1 *)(lVar2 + 0x1e9) = 0;
  FUN_1010e5e14(lVar2);
  FUN_1010d2468(lVar2,0);
  FUN_1010d2460(lVar2,0);
  return;
}




undefined8 FUN_1010e551c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (((((*(byte *)(*(long *)(param_2 + 0x308) + 0x78) & 3) == 0) ||
       (iVar1 = FUN_1010f0394(*(undefined8 *)(param_1 + 0x60)), iVar1 == 0)) ||
      ((*(uint *)(param_1 + 0x420) | 4) != 5)) || (*(long *)(param_1 + 0x428) == 1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_1010e557c(undefined8 param_1,long param_2)

{
  char cVar1;
  size_t sVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_2 + 0x10);
  *(char **)(param_2 + 0x18) = pcVar3;
  sVar2 = _strlen(pcVar3);
  if (pcVar3[sVar2 - 1] == '.') {
    pcVar3[sVar2 - 1] = '\0';
    pcVar3 = *(char **)(param_2 + 0x10);
  }
  do {
    cVar1 = *pcVar3;
    if (cVar1 == '\0') {
      return;
    }
    pcVar3 = pcVar3 + 1;
  } while (-1 < cVar1);
  FUN_1010d909c(param_1,"IDN support not present, can\'t parse Unicode domains\n");
  return;
}




long FUN_1010e55ec(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_58 [24];
  
  puVar3 = *(undefined8 **)(param_1 + 0x8d0);
  auVar8 = FUN_1010d0e58();
  FUN_1010ef884(*puVar3,auStack_58);
  plVar1 = (long *)FUN_1010ef894(auStack_58);
  lVar4 = 0;
  if (plVar1 != (long *)0x0) {
    lVar6 = -1;
    do {
      for (plVar1 = (long *)**(long **)(*plVar1 + 0x10); plVar1 != (long *)0x0;
          plVar1 = (long *)plVar1[2]) {
        lVar7 = *plVar1;
        lVar5 = lVar4;
        lVar2 = lVar6;
        if ((*(char *)(lVar7 + 0x48) == '\0') &&
           (lVar2 = FUN_1010d0e80(auVar8._0_8_,auVar8._8_8_,*(undefined8 *)(lVar7 + 0x1b0),
                                  *(undefined8 *)(lVar7 + 0x1b8)), lVar5 = lVar7, lVar2 <= lVar6)) {
          lVar5 = lVar4;
          lVar2 = lVar6;
        }
        lVar4 = lVar5;
        lVar6 = lVar2;
      }
      plVar1 = (long *)FUN_1010ef894(auStack_58);
    } while (plVar1 != (long *)0x0);
  }
  return lVar4;
}




void FUN_1010e569c(void)

{
  return;
}




undefined8 FUN_1010e56a0(void)

{
  FUN_1010e56b8();
  return 0;
}




undefined8 FUN_1010e56b8(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  
  if ((*(long *)(param_1[0x70] + 0x18) + *(long *)(param_1[0x71] + 0x18) == 0) &&
     (*(char *)(param_1 + 9) == '\0')) {
    if ((*(byte *)(param_1[0x61] + 0x7a) >> 2 & 1) == 0) {
      iVar1 = FUN_1010f37c8(*(undefined4 *)(param_1 + 0x3a),0xffffffff,0xffffffff,0);
      if (iVar1 != 0) {
LAB_1010e5724:
        *param_1 = param_2;
        FUN_1010d909c(param_2,"Connection %ld seems to be dead!\n");
        FUN_1010e1ccc(param_1,1);
        return 1;
      }
    }
    else {
      uVar2 = FUN_1010fec1c(param_1);
      if ((uVar2 & 1) != 0) goto LAB_1010e5724;
    }
  }
  return 0;
}




undefined8 FUN_1010e576c(long *param_1,undefined1 *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 in_x7;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  
  lVar6 = *param_1;
  lVar1 = param_1[0x3a];
  pcVar7 = *(char **)(lVar6 + 0x8ab0);
  *param_2 = 1;
  iVar2 = FUN_1010f6624(pcVar7,"/MATCH:",7);
  if (((iVar2 == 0) && (iVar2 = FUN_1010f6624(pcVar7,"/M:",3), iVar2 == 0)) &&
     (iVar2 = FUN_1010f6624(pcVar7,"/FIND:",6), iVar2 == 0)) {
    iVar2 = FUN_1010f6624(pcVar7,"/DEFINE:",8);
    if (((iVar2 == 0) && (iVar2 = FUN_1010f6624(pcVar7,"/D:",3), iVar2 == 0)) &&
       (iVar2 = FUN_1010f6624(pcVar7,"/LOOKUP:",8), iVar2 == 0)) {
      pcVar8 = _strchr(pcVar7,0x2f);
      pcVar7 = pcVar8;
      if (pcVar8 == (char *)0x0) {
        return 0;
      }
      do {
        while( true ) {
          pcVar7 = pcVar7 + 1;
          if (*pcVar7 != ':') break;
          *pcVar7 = ' ';
        }
      } while (*pcVar7 != '\0');
      pcVar8 = pcVar8 + 1;
      uVar5 = FUN_1010d9320((int)lVar1,param_1,"CLIENT libcurl 7.40.0\r\n%s\r\nQUIT\r\n");
      iVar2 = (int)uVar5;
      goto joined_r0x0001010e58f0;
    }
    pcVar7 = _strchr(pcVar7,0x3a);
    if (pcVar7 == (char *)0x0) {
      pcVar8 = (char *)0x0;
LAB_1010e5998:
      FUN_1010d909c(lVar6,"lookup word is missing\n");
      pcVar7 = "default";
    }
    else {
      pcVar7 = pcVar7 + 1;
      pcVar3 = _strchr(pcVar7,0x3a);
      if (pcVar3 == (char *)0x0) {
        pcVar8 = (char *)0x0;
      }
      else {
        pcVar8 = pcVar3 + 1;
        *pcVar3 = '\0';
        pcVar3 = _strchr(pcVar8,0x3a);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
        }
      }
      if (*pcVar7 == '\0') goto LAB_1010e5998;
    }
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
      pcVar8 = "!";
    }
    lVar4 = FUN_1010e5aa4(lVar6,pcVar7);
    if (lVar4 == 0) {
      return 0x1b;
    }
    pcVar7 = "CLIENT libcurl 7.40.0\r\nDEFINE %s %s\r\nQUIT\r\n";
  }
  else {
    pcVar7 = _strchr(pcVar7,0x3a);
    if (pcVar7 == (char *)0x0) {
      pcVar8 = (char *)0x0;
LAB_1010e5868:
      FUN_1010d909c(lVar6,"lookup word is missing\n");
      pcVar7 = "default";
    }
    else {
      pcVar7 = pcVar7 + 1;
      pcVar3 = _strchr(pcVar7,0x3a);
      if (pcVar3 == (char *)0x0) {
        pcVar8 = (char *)0x0;
      }
      else {
        pcVar8 = pcVar3 + 1;
        *pcVar3 = '\0';
        pcVar3 = _strchr(pcVar8,0x3a);
        if (pcVar3 != (char *)0x0) {
          *pcVar3 = '\0';
          pcVar3 = _strchr(pcVar3 + 1,0x3a);
          if (pcVar3 != (char *)0x0) {
            *pcVar3 = '\0';
          }
        }
      }
      if (*pcVar7 == '\0') goto LAB_1010e5868;
    }
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
      pcVar8 = "!";
    }
    lVar4 = FUN_1010e5aa4(lVar6,pcVar7);
    if (lVar4 == 0) {
      return 0x1b;
    }
    pcVar7 = "CLIENT libcurl 7.40.0\r\nMATCH %s %s %s\r\nQUIT\r\n";
  }
  uVar5 = FUN_1010d9320((int)lVar1,param_1,pcVar7);
  (*(code *)PTR__free_101873628)(lVar4);
  iVar2 = (int)uVar5;
joined_r0x0001010e58f0:
  if (iVar2 == 0) {
    FUN_1010eb3d0(param_1,0,0xffffffffffffffff,0,lVar6 + 0x98,0xffffffff,0,in_x7,pcVar8);
    return 0;
  }
  FUN_1010d9258(lVar6,"Failed sending DICT request");
  return uVar5;
}




long FUN_1010e5aa4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int local_24;
  
  pcVar1 = (char *)FUN_1010e5f30(param_1,param_2,0,&local_24);
  if (pcVar1 == (char *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (*(code *)PTR__malloc_101873620)((long)local_24 << 1 | 1);
    if (lVar2 != 0) {
      cVar3 = *pcVar1;
      if (cVar3 == '\0') {
        lVar4 = 0;
      }
      else {
        iVar6 = 0;
        pcVar5 = pcVar1;
        do {
          pcVar5 = pcVar5 + 1;
          if (cVar3 < '!') {
LAB_1010e5b40:
            *(undefined1 *)(lVar2 + iVar6) = 0x5c;
            iVar7 = iVar6 + 1;
          }
          else {
            iVar7 = iVar6;
            if (cVar3 < '\\') {
              if ((cVar3 == '\"') || (cVar3 == '\'')) goto LAB_1010e5b40;
            }
            else if ((cVar3 == '\\') || (cVar3 == '\x7f')) goto LAB_1010e5b40;
          }
          iVar6 = iVar7 + 1;
          *(char *)(lVar2 + iVar7) = cVar3;
          cVar3 = *pcVar5;
        } while (cVar3 != '\0');
        lVar4 = (long)iVar6;
      }
      *(undefined1 *)(lVar2 + lVar4) = 0;
    }
    (*(code *)PTR__free_101873628)(pcVar1);
  }
  return lVar2;
}




undefined8 FUN_1010e5b9c(long param_1)

{
  uint uVar1;
  
  if (*(char *)(param_1 + 1) == '\x1e') {
    uVar1 = *(byte *)(param_1 + 9) & 0xc0 | (uint)*(byte *)(param_1 + 8) << 8;
    if (uVar1 == 0) {
      if ((((((((((((((*(char *)(param_1 + 10) == '\0' && *(byte *)(param_1 + 9) == 0) &&
                     *(char *)(param_1 + 0xb) == '\0') && *(char *)(param_1 + 0xc) == '\0') &&
                   *(char *)(param_1 + 0xd) == '\0') && *(char *)(param_1 + 0xe) == '\0') &&
                 *(char *)(param_1 + 0xf) == '\0') && *(char *)(param_1 + 0x10) == '\0') &&
               *(char *)(param_1 + 0x11) == '\0') && *(char *)(param_1 + 0x12) == '\0') &&
             *(char *)(param_1 + 0x13) == '\0') && *(char *)(param_1 + 0x14) == '\0') &&
           *(char *)(param_1 + 0x15) == '\0') && *(char *)(param_1 + 0x16) == '\0') &&
         (*(char *)(param_1 + 0x17) == '\x01')) {
        return 3;
      }
    }
    else {
      if (uVar1 == 0xfe80) {
        return 1;
      }
      if (uVar1 == 0xfec0) {
        return 2;
      }
    }
  }
  return 0;
}




undefined1
FUN_1010e5c70(uint param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,int param_6
             )

{
  int iVar1;
  char *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  sockaddr *psVar5;
  long lVar6;
  ifaddrs *piVar7;
  ifaddrs *local_c0;
  char acStack_b8 [64];
  undefined8 local_78;
  undefined4 local_70;
  long local_68;
  
  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar6;
  iVar1 = _getifaddrs(&local_c0);
  if (iVar1 < 0) {
    uVar4 = 0;
  }
  else {
    if (local_c0 == (ifaddrs *)0x0) {
      uVar4 = 0;
    }
    else {
      piVar7 = local_c0;
      bVar3 = false;
      do {
        uVar4 = bVar3;
        if (piVar7->ifa_addr != (sockaddr *)0x0) {
          if (piVar7->ifa_addr->sa_family == param_1) {
            iVar1 = FUN_1010eb4e8(piVar7->ifa_name,param_4);
            if (iVar1 != 0) {
              local_70 = 0;
              local_78 = 0;
              if (param_1 == 0x1e) {
                psVar5 = piVar7->ifa_addr;
                iVar1 = FUN_1010e5b9c(psVar5);
                if ((iVar1 != param_2) ||
                   ((param_3 != 0 && (*(int *)(psVar5[1].sa_data + 6) != param_3)))) {
                  uVar4 = true;
                  if (bVar3 != false) {
                    uVar4 = bVar3;
                  }
                  goto LAB_1010e5d54;
                }
                pcVar2 = psVar5->sa_data + 6;
                if (*(int *)(psVar5[1].sa_data + 6) != 0) {
                  FUN_1010e7270(&local_78,0xc,"%%%u");
                }
              }
              else {
                pcVar2 = piVar7->ifa_addr->sa_data + 2;
              }
              _inet_ntop(param_1,pcVar2,acStack_b8,0x40);
              FUN_1010e7270(param_5,(long)param_6,"%s%s");
              uVar4 = 2;
              break;
            }
          }
          else if (bVar3 == false) {
            iVar1 = FUN_1010eb4e8(piVar7->ifa_name,param_4);
            uVar4 = iVar1 != 0;
          }
        }
LAB_1010e5d54:
        piVar7 = piVar7->ifa_next;
        bVar3 = (bool)uVar4;
      } while (piVar7 != (ifaddrs *)0x0);
    }
    _freeifaddrs(local_c0);
  }
  if (lVar6 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar4;
}




void FUN_1010e5e14(long param_1)

{
  *(undefined8 *)(param_1 + 0x8e8) = 0;
  *(undefined8 *)(param_1 + 0x8e0) = 0;
  return;
}




undefined8 FUN_1010e5e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((((*(long *)(param_1 + 0x798) < 0) || (*(long *)(param_1 + 0x390) == 0)) ||
      (lVar1 = FUN_1010d0ef4(*(undefined8 *)(param_1 + 0x8e0),*(undefined8 *)(param_1 + 0x8e8)),
      lVar1 == 0)) || (*(long *)(param_1 + 0x388) <= *(long *)(param_1 + 0x798))) {
    *(undefined8 *)(param_1 + 0x8e0) = param_2;
    *(undefined8 *)(param_1 + 0x8e8) = param_3;
    if (*(long *)(param_1 + 0x388) == 0) {
      return 0;
    }
    lVar1 = *(long *)(param_1 + 0x390) * 1000;
  }
  else {
    lVar1 = FUN_1010d0e80(param_2,param_3,*(undefined8 *)(param_1 + 0x8e0),
                          *(undefined8 *)(param_1 + 0x8e8));
    lVar1 = *(long *)(param_1 + 0x390) * 1000 - lVar1;
    if (lVar1 < 1) {
      FUN_1010d9258(param_1,
                    "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds");
      return 0x1c;
    }
  }
  FUN_1010f1f70(param_1,lVar1);
  return 0;
}




undefined8 FUN_1010e5ef8(char *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = _getenv(param_1);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    uVar2 = (*(code *)PTR__strdup_101873638)();
    return uVar2;
  }
  return 0;
}




undefined8 FUN_1010e5f30(undefined8 param_1,undefined8 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  iVar1 = FUN_1010e5f8c(param_1,param_2,(long)param_3,&local_28,&local_30,0);
  uVar3 = 0;
  if ((iVar1 == 0) && (uVar3 = local_28, param_4 != (undefined4 *)0x0)) {
    uVar2 = FUN_1010feed4(local_30);
    *param_4 = uVar2;
    uVar3 = local_28;
  }
  return uVar3;
}




undefined8
FUN_1010e5f8c(undefined8 param_1,byte *param_2,size_t param_3,long *param_4,long *param_5,
             int param_6)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  char *pcStack_70;
  byte local_63;
  byte local_62;
  undefined1 local_61;
  
  if (param_3 == 0) {
    param_3 = _strlen((char *)param_2);
  }
  lVar3 = (*(code *)PTR__malloc_101873620)(param_3 + 1);
  puVar1 = PTR___DefaultRuneLocale_101444130;
  if (lVar3 == 0) {
    uVar4 = 0x1b;
  }
  else {
    if (param_3 == 0) {
      lVar5 = 0;
    }
    else {
      uVar7 = param_3 + 1;
      lVar8 = 0;
      do {
        uVar6 = param_3;
        uVar2 = (uint)*param_2;
        if ((uVar6 < 3) || (*param_2 != 0x25)) {
LAB_1010e6070:
          if (uVar2 < 0x20 && param_6 != 0) {
            (*(code *)PTR__free_101873628)(lVar3);
            return 3;
          }
        }
        else {
          if (((puVar1[(ulong)param_2[1] * 4 + 0x3e] & 1) != 0) &&
             (pbVar9 = param_2 + 2, (puVar1[(ulong)*pbVar9 * 4 + 0x3e] & 1) != 0)) {
            local_62 = *pbVar9;
            local_61 = 0;
            local_63 = param_2[1];
            _strtoul((char *)&local_63,&pcStack_70,0x10);
            uVar2 = FUN_1010feecc();
            uVar6 = uVar7 - 3;
            param_2 = pbVar9;
            goto LAB_1010e6070;
          }
          uVar2 = 0x25;
        }
        lVar5 = lVar8 + 1;
        *(char *)(lVar3 + lVar8) = (char)uVar2;
        param_2 = param_2 + 1;
        param_3 = uVar6 - 1;
        uVar7 = uVar6;
        lVar8 = lVar5;
      } while (uVar6 - 1 != 0);
    }
    *(undefined1 *)(lVar3 + lVar5) = 0;
    if (param_5 != (long *)0x0) {
      *param_5 = lVar5;
    }
    uVar4 = 0;
    *param_4 = lVar3;
  }
  return uVar4;
}




void FUN_1010e60fc(undefined1 *param_1,long param_2)

{
  undefined1 *local_28;
  long lStack_20;
  long local_18;
  
  lStack_20 = 0;
  local_28 = param_1;
  local_18 = param_2;
  FUN_1010e614c(&local_28,FUN_1010e7238);
  if (local_18 != 0) {
    if (local_18 == lStack_20) {
      local_28[-1] = 0;
    }
    else {
      *local_28 = 0;
    }
  }
  return;
}




int FUN_1010e614c(char *param_1,code *param_2,char *param_3,ulong *param_4)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  char *pcVar9;
  size_t sVar10;
  undefined8 uVar11;
  byte bVar12;
  char cVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  uint uVar17;
  ulong *puVar18;
  ulong uVar19;
  long *plVar20;
  char *pcVar21;
  char *pcVar22;
  char *pcVar23;
  long lVar24;
  char *pcVar25;
  long lVar26;
  ulong uVar27;
  ulong uVar28;
  char *pcVar29;
  byte *pbVar30;
  byte *pbVar31;
  char *pcVar32;
  long lVar33;
  ulong uVar34;
  int iVar35;
  char *pcVar36;
  char *local_15a8;
  char *local_15a0;
  ulong *local_1598;
  undefined8 local_1590;
  undefined8 uStack_1588;
  undefined8 uStack_1580;
  undefined8 uStack_1578;
  char local_1568;
  char acStack_1567 [252];
  char acStack_146b [3];
  long alStack_1468 [128];
  int local_1068;
  undefined1 local_1064 [8];
  undefined1 auStack_105c [8];
  undefined4 uStack_1054;
  ulong uStack_1050;
  ulong auStack_1048 [508];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  cVar13 = *param_3;
  pcVar9 = param_1;
  local_15a0 = param_3;
  local_1598 = param_4;
  if (cVar13 != '\0') {
    lVar33 = 0;
    iVar35 = 0;
    plVar20 = (long *)(acStack_146b + 3);
LAB_1010e6640:
    do {
      pcVar9 = local_15a0 + 1;
      pcVar3 = pcVar9;
      if (cVar13 == '%') {
        if (*pcVar9 != '%') {
          iVar35 = iVar35 + 1;
          local_15a0 = pcVar9;
          lVar8 = FUN_1010e74e4(pcVar9,&local_15a0);
          lVar26 = 0;
          lVar24 = 0;
          lVar15 = (long)iVar35;
          if (lVar8 != 0) {
            lVar15 = lVar8;
          }
          lVar8 = lVar15;
          uVar6 = 0;
          pcVar9 = local_15a0;
          if (lVar15 <= lVar33) {
            lVar8 = lVar33;
          }
switchD_1010e6280_caseD_21:
          local_15a0 = pcVar9;
          lVar33 = lVar8;
          pcVar3 = local_15a0;
          cVar13 = *local_15a0;
          iVar5 = (int)cVar13;
          if (cVar13 < 'L') {
            if (0x39 < (uint)(int)cVar13 || (1L << ((long)cVar13 & 0x3fU) & 0x3ff6c0900000000U) == 0
               ) goto LAB_1010e63f0;
          }
          else {
            uVar14 = (int)cVar13 - 0x4c;
            if (0x2e < uVar14 || (1L << ((ulong)uVar14 & 0x3f) & 0x402110000009U) == 0)
            goto LAB_1010e63f0;
          }
          pcVar9 = local_15a0 + 1;
          lVar8 = lVar33;
          if (cVar13 < 'L') {
            switch(iVar5) {
            case 0x20:
              uVar6 = uVar6 | 1;
              break;
            case 0x23:
              uVar6 = uVar6 | 8;
              break;
            case 0x2a:
              uVar6 = uVar6 | 0x4000;
              iVar35 = iVar35 + 1;
              local_15a0 = pcVar9;
              lVar8 = FUN_1010e74e4(pcVar9,&local_15a0);
              lVar26 = (long)iVar35;
              if (lVar8 != 0) {
                lVar26 = lVar8;
              }
              lVar8 = lVar26;
              pcVar9 = local_15a0;
              if (lVar26 <= lVar33) {
                lVar8 = lVar33;
              }
              break;
            case 0x2b:
              uVar6 = uVar6 | 2;
              break;
            case 0x2d:
              uVar6 = uVar6 & 0xfffffefb | 4;
              break;
            case 0x2e:
              if (*pcVar9 == '*') {
                uVar6 = uVar6 | 0x18000;
                local_15a0 = local_15a0 + 2;
                iVar35 = iVar35 + 1;
                lVar8 = FUN_1010e74e4(local_15a0,&local_15a0);
                lVar24 = (long)iVar35;
                if (lVar8 != 0) {
                  lVar24 = lVar8;
                }
                lVar8 = lVar24;
                pcVar9 = local_15a0;
                if (lVar24 <= lVar33) {
                  lVar8 = lVar33;
                }
              }
              else {
                local_15a0 = pcVar9;
                lVar24 = _strtol(pcVar9,&local_15a0,10);
                uVar6 = uVar6 | 0x8000;
                pcVar9 = local_15a0;
              }
              break;
            case 0x30:
              uVar6 = (uVar6 << 6 ^ 0xffffffff) & 0x100 | uVar6;
            case 0x31:
            case 0x32:
            case 0x33:
            case 0x34:
            case 0x35:
            case 0x36:
            case 0x37:
            case 0x38:
            case 0x39:
              local_15a0 = pcVar9;
              lVar26 = _strtol(pcVar3,&local_15a0,10);
              uVar6 = uVar6 | 0x2000;
              pcVar9 = local_15a0;
            }
          }
          else if (cVar13 < 'h') {
            uVar17 = uVar6 | 0x80;
            uVar14 = uVar6 | 0x20;
            if (iVar5 != 0x4f) {
              uVar14 = uVar6;
            }
            bVar4 = iVar5 == 0x4c;
LAB_1010e61f8:
            uVar6 = uVar17;
            if (!bVar4) {
              uVar6 = uVar14;
            }
          }
          else {
            if (0x70 < iVar5) {
              uVar17 = uVar6 | 0x40;
              uVar14 = uVar6 | 0x20;
              if (iVar5 != 0x7a) {
                uVar14 = uVar6;
              }
              bVar4 = iVar5 == 0x71;
              goto LAB_1010e61f8;
            }
            if (iVar5 == 0x68) {
              uVar6 = uVar6 | 0x10;
            }
            else if (iVar5 == 0x6c) {
              uVar14 = uVar6 | 0x40;
              uVar17 = uVar6 & 0x20;
              uVar6 = uVar6 | 0x20;
              if (uVar17 != 0) {
                uVar6 = uVar14;
              }
            }
          }
          goto switchD_1010e6280_caseD_21;
        }
        pcVar3 = local_15a0 + 2;
      }
      local_15a0 = pcVar3;
      cVar13 = *local_15a0;
    } while (cVar13 != '\0');
    goto LAB_1010e6674;
  }
  goto LAB_1010e6770;
LAB_1010e63f0:
  lVar15 = lVar15 + -1;
  if (iVar5 < 99) {
    if (cVar13 < 'S') {
      if (iVar5 == 0x45) {
        (&local_1068)[lVar15 * 8] = 7;
        uVar6 = uVar6 | 0x41000;
        goto LAB_1010e64f0;
      }
      if (cVar13 == 'G') {
        (&local_1068)[lVar15 * 8] = 7;
        uVar6 = uVar6 | 0x81000;
        goto LAB_1010e64f0;
      }
    }
    else {
      if (cVar13 == 'S') {
        uVar6 = uVar6 | 8;
        goto switchD_1010e6454_caseD_73;
      }
      if (iVar5 == 0x58) {
        (&local_1068)[lVar15 * 8] = 3;
        uVar6 = uVar6 | 0x1a00;
        goto LAB_1010e64f0;
      }
    }
switchD_1010e6454_caseD_68:
    (&local_1068)[lVar15 * 8] = 0;
  }
  else {
    switch(iVar5) {
    case 99:
      (&local_1068)[lVar15 * 8] = 3;
      uVar6 = uVar6 | 0x20000;
      break;
    case 100:
    case 0x69:
      (&local_1068)[lVar15 * 8] = 3;
      break;
    case 0x65:
      (&local_1068)[lVar15 * 8] = 7;
      uVar6 = uVar6 | 0x40000;
      break;
    case 0x66:
      (&local_1068)[lVar15 * 8] = 7;
      break;
    case 0x67:
      (&local_1068)[lVar15 * 8] = 7;
      uVar6 = uVar6 | 0x80000;
      break;
    default:
      goto switchD_1010e6454_caseD_68;
    case 0x6e:
      (&local_1068)[lVar15 * 8] = 4;
      break;
    case 0x6f:
      (&local_1068)[lVar15 * 8] = 3;
      uVar6 = uVar6 | 0x400;
      break;
    case 0x70:
      (&local_1068)[lVar15 * 8] = 2;
      break;
    case 0x73:
switchD_1010e6454_caseD_73:
      (&local_1068)[lVar15 * 8] = 1;
      break;
    case 0x75:
      (&local_1068)[lVar15 * 8] = 3;
      uVar6 = uVar6 | 0x200;
      break;
    case 0x78:
      (&local_1068)[lVar15 * 8] = 3;
      uVar6 = uVar6 | 0xa00;
    }
  }
LAB_1010e64f0:
  lVar8 = lVar15 * 0x20;
  *(uint *)(local_1064 + lVar8) = uVar6;
  *(long *)(local_1064 + lVar8 + 4) = lVar26;
  *(long *)(auStack_105c + lVar8 + 4) = lVar24;
  if ((uVar6 >> 0xe & 1) != 0) {
    lVar15 = lVar26 + -1;
    *(long *)(local_1064 + lVar8 + 4) = lVar15;
    (&local_1068)[lVar15 * 8] = 9;
    (&uStack_1054)[lVar15 * 8] = 0;
    *(undefined8 *)(auStack_105c + lVar15 * 0x20) = 0;
    *(undefined8 *)(local_1064 + lVar15 * 0x20) = 0;
  }
  if ((uVar6 >> 0x10 & 1) != 0) {
    lVar24 = lVar24 + -1;
    *(long *)(auStack_105c + lVar15 * 0x20 + 4) = lVar24;
    (&local_1068)[lVar24 * 8] = 9;
    (&uStack_1054)[lVar24 * 8] = 0;
    *(undefined8 *)(auStack_105c + lVar24 * 0x20) = 0;
    *(undefined8 *)(local_1064 + lVar24 * 0x20) = 0;
  }
  *plVar20 = (long)(local_15a0 + 1);
  cVar13 = *local_15a0;
  pcVar9 = local_15a0;
  plVar20 = plVar20 + 1;
  if (cVar13 == '\0') goto LAB_1010e6674;
  goto LAB_1010e6640;
LAB_1010e6674:
  if (0 < lVar33) {
    lVar15 = 0;
    puVar18 = auStack_1048;
    do {
      lVar15 = lVar15 + 1;
      if ((lVar15 < lVar33) && ((int)*puVar18 == 9)) {
        puVar18[3] = (long)(int)(uint)*local_1598;
        local_1598 = local_1598 + 1;
      }
      switch((int)puVar18[-4]) {
      case 0:
      case 1:
      case 2:
      case 4:
switchD_1010e66e8_caseD_0:
        uVar27 = *local_1598;
        goto LAB_1010e6740;
      case 3:
        uVar6 = *(uint *)((long)puVar18 + -0x1c);
        if (((((uVar6 & 0x240) == 0x240) || ((uVar6 >> 6 & 1) != 0)) || ((uVar6 & 0x220) == 0x220))
           || ((uVar6 >> 5 & 1) != 0)) goto switchD_1010e66e8_caseD_0;
        uVar27 = (ulong)(uint)*local_1598;
        if ((uVar6 & 0x200) == 0) {
          uVar27 = (ulong)(int)(uint)*local_1598;
        }
LAB_1010e6740:
        local_1598 = local_1598 + 1;
        puVar18[-1] = uVar27;
        break;
      case 7:
        puVar18[-1] = *local_1598;
        local_1598 = local_1598 + 1;
        break;
      case 9:
        *(int *)(puVar18 + -4) = 3;
      }
      puVar18 = puVar18 + 4;
    } while (lVar33 != lVar15);
  }
LAB_1010e6770:
  pcVar36 = (char *)0x0;
  iVar35 = 0;
  pcVar3 = acStack_146b + 2;
  pcVar25 = "0123456789abcdefghijklmnopqrstuvwxyz";
  plVar20 = (long *)(acStack_146b + 3);
  local_15a8 = param_3;
  do {
    while( true ) {
      while (iVar5 = iVar35, *param_3 != '%') {
        if (*param_3 == '\0') goto LAB_1010e70ec;
        cVar13 = *param_3;
        pcVar32 = param_3;
        do {
          pcVar9 = (char *)(*param_2)(cVar13,param_1);
          iVar5 = iVar35;
          if ((int)pcVar9 == -1) goto LAB_1010e70ec;
          iVar35 = iVar35 + 1;
          param_3 = pcVar32 + 1;
          cVar13 = pcVar32[1];
          local_15a8 = param_3;
        } while ((cVar13 != '\0') && (pcVar32 = param_3, cVar13 != '%'));
      }
      local_15a8 = param_3 + 1;
      if (param_3[1] != '%') break;
      param_3 = param_3 + 2;
      local_15a8 = param_3;
      pcVar9 = (char *)(*param_2)(0x25,param_1);
      if ((int)pcVar9 == -1) goto LAB_1010e70ec;
      iVar35 = iVar35 + 1;
    }
    pcVar9 = (char *)FUN_1010e74e4(local_15a8,&local_15a8);
    pcVar32 = pcVar36;
    if (pcVar9 != (char *)0x0) {
      pcVar32 = pcVar9 + -1;
    }
    uVar6 = *(uint *)(local_1064 + (long)pcVar32 * 0x20);
    uVar34 = *(ulong *)(local_1064 + (long)pcVar32 * 0x20 + 4);
    uVar27 = uVar34;
    if ((uVar6 >> 0xe & 1) != 0) {
      uVar27 = auStack_1048[uVar34 * 4 + -1];
    }
    if ((uVar6 >> 0x10 & 1) == 0) {
      pcVar36 = pcVar36 + 1;
      if ((uVar6 >> 0xf & 1) == 0) {
        pcVar29 = (char *)0xffffffffffffffff;
      }
      else {
        pcVar29 = *(char **)(auStack_105c + (long)pcVar32 * 0x20 + 4);
      }
    }
    else {
      pcVar29 = (char *)auStack_1048[*(long *)(auStack_105c + (long)pcVar32 * 0x20 + 4) * 4 + -1];
      pcVar36 = pcVar36 + 2;
    }
    if ((&local_1068)[(long)pcVar32 * 8] - 1U < 7) {
      puVar16 = (uint *)((ulong)(&local_1068 + (long)pcVar32 * 8) | 4);
      switch((&local_1068)[(long)pcVar32 * 8]) {
      case 1:
        pcVar32 = (char *)auStack_1048[(long)pcVar32 * 4 + -1];
        if ((byte *)pcVar32 == (byte *)0x0) {
          if (pcVar29 == (char *)0xffffffffffffffff || 4 < (long)pcVar29) {
            uVar6 = uVar6 & 0xfffffff7;
            *puVar16 = uVar6;
            pcVar32 = "(nil)";
            pcVar29 = (char *)0x5;
          }
          else {
            pcVar29 = (char *)0x0;
            pcVar32 = "";
          }
        }
        else if (pcVar29 == (char *)0xffffffffffffffff) {
          pcVar9 = (char *)_strlen(pcVar32);
          pcVar29 = pcVar9;
        }
        if ((uVar6 >> 3 & 1) != 0) {
          pcVar9 = (char *)(*param_2)(0x22,param_1);
          if ((int)pcVar9 == -1) goto LAB_1010e70ec;
          iVar35 = iVar35 + 1;
          uVar6 = *puVar16;
        }
        lVar33 = uVar27 - (long)pcVar29;
        if ((uVar6 >> 2 & 1) == 0) {
          while (bVar4 = 0 < lVar33, lVar33 = lVar33 + -1, bVar4) {
            pcVar9 = (char *)(*param_2)(0x20,param_1);
            iVar5 = iVar35;
            if ((int)pcVar9 == -1) goto LAB_1010e70ec;
            iVar35 = iVar35 + 1;
          }
        }
        for (; (pcVar29 != (char *)0x0 && (pcVar9 = (char *)(ulong)(byte)*pcVar32, *pcVar32 != 0));
            pcVar32 = pcVar32 + 1) {
          pcVar9 = (char *)(*param_2)(pcVar9,param_1);
          iVar5 = iVar35;
          if ((int)pcVar9 == -1) goto LAB_1010e70ec;
          pcVar29 = pcVar29 + -1;
          iVar35 = iVar35 + 1;
        }
        uVar6 = *puVar16;
        if (((uVar6 >> 2 & 1) != 0) && (0 < lVar33)) {
          lVar33 = lVar33 + 1;
          do {
            pcVar9 = (char *)(*param_2)(0x20,param_1);
            iVar5 = iVar35;
            if ((int)pcVar9 == -1) goto LAB_1010e70ec;
            iVar35 = iVar35 + 1;
            lVar33 = lVar33 + -1;
          } while (1 < lVar33);
          uVar6 = *puVar16;
        }
        if ((uVar6 >> 3 & 1) != 0) {
          pcVar9 = (char *)(*param_2)(0x22,param_1);
          iVar5 = iVar35;
          if ((int)pcVar9 == -1) goto LAB_1010e70ec;
          iVar35 = iVar35 + 1;
        }
        break;
      case 2:
        if (auStack_1048[(long)pcVar32 * 4 + -1] == 0) {
          if ((uVar6 >> 2 & 1) == 0) {
            lVar33 = uVar27 - 5;
          }
          else {
            lVar33 = uVar27 - 6;
            lVar15 = lVar33;
            if (5 < (long)uVar27) {
              do {
                pcVar9 = (char *)(*param_2)(0x20,param_1);
                iVar5 = iVar35;
                if ((int)pcVar9 == -1) goto LAB_1010e70ec;
                iVar35 = iVar35 + 1;
                lVar33 = lVar15 + -1;
                bVar4 = 0 < lVar15;
                lVar15 = lVar33;
              } while (bVar4);
            }
          }
          pcVar32 = "(nil)";
          cVar13 = '(';
          do {
            pcVar32 = pcVar32 + 1;
            pcVar9 = (char *)(*param_2)(cVar13,param_1);
            iVar5 = iVar35;
            if ((int)pcVar9 == -1) goto LAB_1010e70ec;
            iVar35 = iVar35 + 1;
            cVar13 = *pcVar32;
          } while (cVar13 != '\0');
          if (((*puVar16 >> 2 & 1) == 0) && (0 < lVar33)) {
            iVar5 = 0;
            lVar33 = lVar33 + 1;
            do {
              pcVar9 = (char *)(*param_2)(0x20,param_1);
              if ((int)pcVar9 == -1) {
                iVar5 = iVar35 - iVar5;
                goto LAB_1010e70ec;
              }
              lVar33 = lVar33 + -1;
              iVar5 = iVar5 + -1;
            } while (1 < lVar33);
            iVar35 = iVar35 - iVar5;
          }
        }
        else {
          pcVar9 = (char *)0x0;
          pcVar25 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
          if ((uVar6 & 0x1000) == 0) {
            pcVar25 = "0123456789abcdefghijklmnopqrstuvwxyz";
          }
          uVar14 = 1;
          uVar19 = 0x10;
          uVar28 = auStack_1048[(long)pcVar32 * 4 + -1];
LAB_1010e6acc:
          pcVar2 = pcVar3;
          pcVar32 = (char *)0x1;
          if (pcVar29 != (char *)0xffffffffffffffff) {
            pcVar32 = pcVar29;
          }
          while (uVar28 != 0) {
            uVar34 = 0;
            if (uVar19 != 0) {
              uVar34 = uVar28 / uVar19;
            }
            *pcVar2 = pcVar25[uVar28 - uVar34 * uVar19];
            pcVar2 = pcVar2 + -1;
            uVar28 = uVar34;
          }
          lVar33 = uVar27 - ((long)pcVar3 - (long)pcVar2);
          lVar15 = (long)pcVar32 - ((long)pcVar3 - (long)pcVar2);
          pcVar29 = pcVar2;
          if (((uVar14 != 0) && (uVar19 == 8)) && (lVar15 < 1)) {
            *pcVar2 = '0';
            lVar33 = lVar33 + -1;
            pcVar29 = pcVar2 + -1;
          }
          if (0 < lVar15) {
            lVar33 = lVar33 - lVar15;
            pcVar23 = acStack_146b + (-(long)pcVar2 - (long)pcVar32) + 1;
            if ((long)pcVar23 < -1) {
              pcVar23 = (char *)0xfffffffffffffffe;
            }
            pcVar21 = pcVar32 + (-0xfe - (long)&local_1568) + (long)pcVar2;
            pcVar22 = pcVar29;
            do {
              *pcVar22 = '0';
              pcVar21 = pcVar21 + -1;
              pcVar22 = pcVar22 + -1;
            } while (1 < (long)pcVar21);
            pcVar29 = pcVar29 + (long)(acStack_146b +
                                      ((-(long)pcVar2 - (long)pcVar32) - (long)pcVar23));
          }
          lVar15 = lVar33 + -2;
          if (uVar14 == 0 || uVar19 != 0x10) {
            lVar15 = lVar33;
          }
          iVar7 = (int)pcVar9;
          lVar15 = lVar15 - (ulong)(iVar7 != 0 || (*puVar16 & 3) != 0);
          if ((*puVar16 & 0x104) == 0) {
            while (bVar4 = 0 < lVar15, lVar15 = lVar15 + -1, bVar4) {
              pcVar9 = (char *)(*param_2)(0x20,param_1);
              iVar5 = iVar35;
              if ((int)pcVar9 == -1) goto LAB_1010e70ec;
              iVar35 = iVar35 + 1;
            }
          }
          if (iVar7 == 0) {
            if ((*puVar16 >> 1 & 1) != 0) {
              uVar11 = 0x2b;
              goto LAB_1010e6e88;
            }
            if ((*puVar16 & 1) != 0) {
              uVar11 = 0x20;
              goto LAB_1010e6e88;
            }
          }
          else {
            uVar11 = 0x2d;
LAB_1010e6e88:
            pcVar9 = (char *)(*param_2)(uVar11,param_1);
            iVar5 = iVar35;
            if ((int)pcVar9 == -1) goto LAB_1010e70ec;
            iVar35 = iVar35 + 1;
          }
          if (uVar14 != 0 && uVar19 == 0x10) {
            pcVar9 = (char *)(*param_2)(0x30,param_1);
            iVar5 = iVar35;
            if ((int)pcVar9 == -1) {
LAB_1010e70ec:
              if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
                ___stack_chk_fail(pcVar9);
              }
              return iVar5;
            }
            if ((*(byte *)((long)puVar16 + 1) >> 4 & 1) == 0) {
              uVar11 = 0x78;
            }
            else {
              uVar11 = 0x58;
            }
            pcVar9 = (char *)(*param_2)(uVar11,param_1);
            iVar5 = iVar35 + 1;
            if ((int)pcVar9 == -1) goto LAB_1010e70ec;
            iVar35 = iVar35 + 2;
          }
          if ((*puVar16 & 0x104) == 0x100) {
            while (bVar4 = 0 < lVar15, lVar15 = lVar15 + -1, bVar4) {
              pcVar9 = (char *)(*param_2)(0x30,param_1);
              iVar5 = iVar35;
              if ((int)pcVar9 == -1) goto LAB_1010e70ec;
              iVar35 = iVar35 + 1;
            }
          }
          pcVar32 = pcVar29 + 1;
          while (pcVar2 = pcVar32, pcVar2 <= pcVar3) {
            pcVar9 = (char *)(*param_2)(*pcVar2,param_1);
            iVar5 = iVar35;
            if ((int)pcVar9 == -1) goto LAB_1010e70ec;
            iVar35 = iVar35 + 1;
            pcVar32 = pcVar29 + 2;
            pcVar29 = pcVar2;
          }
          if (((*puVar16 >> 2 & 1) != 0) && (0 < lVar15)) {
            lVar15 = lVar15 + 1;
            do {
              pcVar9 = (char *)(*param_2)(0x20,param_1);
              iVar5 = iVar35;
              if ((int)pcVar9 == -1) goto LAB_1010e70ec;
              iVar35 = iVar35 + 1;
              lVar15 = lVar15 + -1;
            } while (1 < lVar15);
          }
        }
        break;
      case 3:
        uVar34 = auStack_1048[(long)pcVar32 * 4 + -1];
        if ((uVar6 >> 0x11 & 1) == 0) {
          uVar14 = uVar6 >> 3 & 1;
          uVar28 = uVar34;
          if ((uVar6 >> 10 & 1) == 0) {
            uVar1 = -uVar34;
            if (-1 < (long)uVar34) {
              uVar1 = uVar34;
            }
            bVar4 = (uVar6 & 0x200) == 0;
            uVar17 = 0;
            if (bVar4) {
              uVar17 = (uint)(uVar34 >> 0x3f);
            }
            uVar19 = 10;
            if (bVar4) {
              uVar28 = uVar1;
            }
            pcVar32 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            if ((uVar6 & 0x1000) == 0) {
              pcVar32 = "0123456789abcdefghijklmnopqrstuvwxyz";
            }
            bVar4 = (uVar6 & 0x800) != 0;
            if (bVar4) {
              uVar17 = 0;
            }
            pcVar9 = (char *)(ulong)uVar17;
            if (bVar4) {
              uVar19 = 0x10;
              pcVar25 = pcVar32;
              uVar28 = uVar34;
            }
          }
          else {
            pcVar9 = (char *)0x0;
            uVar19 = 8;
          }
          goto LAB_1010e6acc;
        }
        if (((uVar6 >> 2 & 1) == 0) &&
           (bVar4 = 1 < (long)uVar27, uVar28 = uVar27 - 1, uVar27 = uVar27 - 1, bVar4)) {
          do {
            pcVar9 = (char *)(*param_2)(0x20,param_1);
            iVar5 = iVar35;
            if ((int)pcVar9 == -1) goto LAB_1010e70ec;
            iVar35 = iVar35 + 1;
            uVar27 = uVar28 - 1;
            bVar4 = 0 < (long)uVar28;
            uVar28 = uVar27;
          } while (uVar27 != 0 && bVar4);
        }
        pcVar9 = (char *)(*param_2)((uint)uVar34 & 0xff,param_1);
        iVar5 = iVar35;
        if ((int)pcVar9 == -1) goto LAB_1010e70ec;
        iVar35 = iVar35 + 1;
        if ((*puVar16 >> 2 & 1) != 0) {
          for (; 1 < (long)uVar27; uVar27 = uVar27 - 1) {
            pcVar9 = (char *)(*param_2)(0x20,param_1);
            iVar5 = iVar35;
            if ((int)pcVar9 == -1) goto LAB_1010e70ec;
            iVar35 = iVar35 + 1;
          }
        }
        break;
      case 4:
        if (((uVar6 >> 6 & 1) == 0) && ((uVar6 >> 5 & 1) == 0)) {
          if ((uVar6 >> 4 & 1) == 0) {
            *(int *)auStack_1048[(long)pcVar32 * 4 + -1] = iVar35;
          }
          else {
            *(short *)auStack_1048[(long)pcVar32 * 4 + -1] = (short)iVar35;
          }
        }
        else {
          *(long *)auStack_1048[(long)pcVar32 * 4 + -1] = (long)iVar35;
        }
        break;
      case 7:
        uStack_1588 = 0;
        local_1590 = 0x25;
        uStack_1578 = 0;
        uStack_1580 = 0;
        sVar10 = _strlen((char *)&local_1590);
        uVar27 = uVar34;
        if ((uVar6 & 0x2000) == 0) {
          uVar27 = 0xffffffffffffffff;
        }
        if ((uVar6 & 0x6000) == 0x4000) {
          uVar27 = auStack_1048[uVar34 * 4 + -1];
        }
        if ((uVar6 >> 0xf & 1) == 0) {
          if ((uVar6 & 0x10000) == 0) {
            uVar34 = 0xffffffffffffffff;
          }
          else {
            uVar34 = auStack_1048[*(long *)(auStack_105c + (long)pcVar32 * 0x20 + 4) * 4 + -1];
          }
        }
        else {
          uVar34 = *(ulong *)(auStack_105c + (long)pcVar32 * 0x20 + 4);
        }
        lVar33 = 2;
        pbVar31 = (byte *)((long)&local_1590 + 1);
        if ((uVar6 >> 2 & 1) != 0) {
          local_1590._0_2_ = CONCAT11(0x2d,(char)local_1590);
          lVar33 = 3;
          pbVar31 = (byte *)((long)&local_1590 + 2);
        }
        if ((uVar6 >> 1 & 1) != 0) {
          *pbVar31 = 0x2b;
          pbVar31 = (byte *)((long)&local_1590 + lVar33);
        }
        pbVar30 = pbVar31;
        if ((uVar6 & 1) != 0) {
          pbVar30 = pbVar31 + 1;
          *pbVar31 = 0x20;
          uVar6 = *puVar16;
        }
        lVar33 = 0x20 - sVar10;
        pbVar31 = pbVar30;
        if ((uVar6 >> 3 & 1) != 0) {
          pbVar31 = pbVar30 + 1;
          *pbVar30 = 0x23;
        }
        *pbVar31 = 0;
        if (-1 < (long)uVar27) {
          iVar5 = FUN_1010e7270(pbVar31,lVar33,"%ld");
          pbVar31 = pbVar31 + iVar5;
          lVar33 = lVar33 - iVar5;
        }
        if (-1 < (long)uVar34) {
          iVar5 = FUN_1010e7270(pbVar31,lVar33,".%ld");
          pbVar31 = pbVar31 + iVar5;
        }
        uVar6 = *puVar16;
        pbVar30 = pbVar31;
        if ((uVar6 >> 5 & 1) != 0) {
          pbVar30 = pbVar31 + 1;
          *pbVar31 = 0x6c;
          uVar6 = *puVar16;
        }
        if ((uVar6 >> 0x12 & 1) == 0) {
          if ((uVar6 >> 0x13 & 1) != 0) {
            bVar12 = 0x67;
            goto LAB_1010e6c78;
          }
          bVar12 = 0x66;
        }
        else {
          bVar12 = 0x65;
LAB_1010e6c78:
          bVar12 = (byte)(uVar6 >> 7) & 0x20 ^ bVar12;
        }
        *pbVar30 = bVar12;
        pbVar30[1] = 0;
        uVar6 = _sprintf(&local_1568,(char *)&local_1590);
        pcVar9 = (char *)(ulong)uVar6;
        pcVar32 = acStack_1567;
        cVar13 = local_1568;
        while (cVar13 != '\0') {
          pcVar9 = (char *)(*param_2)(cVar13,param_1);
          iVar5 = iVar35;
          if ((int)pcVar9 == -1) goto LAB_1010e70ec;
          iVar35 = iVar35 + 1;
          cVar13 = *pcVar32;
          pcVar32 = pcVar32 + 1;
        }
      }
    }
    param_3 = (char *)*plVar20;
    plVar20 = plVar20 + 1;
    local_15a8 = param_3;
  } while( true );
}




ulong FUN_1010e7238(byte param_1,long *param_2)

{
  if ((ulong)param_2[1] < (ulong)param_2[2]) {
    *(byte *)*param_2 = param_1;
    *param_2 = *param_2 + 1;
    param_2[1] = param_2[1] + 1;
    return (ulong)param_1;
  }
  return 0xffffffff;
}




void FUN_1010e7270(void)

{
  FUN_1010e60fc();
  return;
}




long FUN_1010e7298(undefined8 param_1)

{
  int iVar1;
  long local_38;
  long local_30;
  long local_28;
  int local_20;
  
  local_20 = 0;
  local_30 = 0;
  local_28 = 0;
  local_38 = 0;
  iVar1 = FUN_1010e614c(&local_38,FUN_1010e7340,param_1,&stack0x00000000);
  if (iVar1 == -1 || local_20 != 0) {
    if (local_28 != 0) {
      (*(code *)PTR__free_101873628)(local_38);
    }
    local_38 = 0;
  }
  else if (local_28 == 0) {
    local_38 = (*(code *)PTR__strdup_101873638)("");
  }
  else {
    *(undefined1 *)(local_38 + local_30) = 0;
  }
  return local_38;
}




ulong FUN_1010e7340(byte param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
    lVar1 = (*(code *)PTR__malloc_101873620)(0x20);
    *param_2 = lVar1;
    if (lVar1 == 0) {
LAB_1010e73ec:
      *(undefined4 *)(param_2 + 3) = 1;
      return 0xffffffff;
    }
    lVar2 = 0;
    param_2[2] = 0x20;
    param_2[1] = 0;
  }
  else {
    lVar2 = param_2[1];
    if ((ulong)param_2[2] <= lVar2 + 1U) {
      lVar1 = (*(code *)PTR__realloc_101873630)(lVar1,param_2[2] << 1);
      if (lVar1 == 0) goto LAB_1010e73ec;
      *param_2 = lVar1;
      lVar2 = param_2[1];
      param_2[2] = param_2[2] << 1;
    }
  }
  *(byte *)(lVar1 + lVar2) = param_1;
  param_2[1] = param_2[1] + 1;
  return (ulong)param_1;
}




long FUN_1010e7408(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long local_30;
  long local_28;
  long local_20;
  int local_18;
  
  local_18 = 0;
  local_28 = 0;
  local_20 = 0;
  local_30 = 0;
  iVar1 = FUN_1010e614c(&local_30,FUN_1010e7340,param_1,param_2);
  if (iVar1 == -1 || local_18 != 0) {
    if (local_20 != 0) {
      (*(code *)PTR__free_101873628)(local_30);
    }
    local_30 = 0;
  }
  else if (local_20 == 0) {
    local_30 = (*(code *)PTR__strdup_101873638)("");
  }
  else {
    *(undefined1 *)(local_30 + local_28) = 0;
  }
  return local_30;
}




void FUN_1010e74ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1010e614c(param_1,PTR__fputc_101444258,param_2,&stack0x00000000);
  return;
}




long FUN_1010e74e4(byte *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  uVar2 = (uint)*param_1;
  if (*param_1 - 0x30 < 10) {
    iVar3 = 0;
    pbVar4 = param_1 + 1;
    do {
      iVar3 = iVar3 * 10 + (int)(char)uVar2 + -0x30;
      pbVar5 = pbVar4 + 1;
      uVar2 = (uint)*pbVar4;
      pbVar4 = pbVar5;
    } while (uVar2 - 0x30 < 10);
    lVar1 = 0;
    if ((iVar3 != 0) && (uVar2 == 0x24)) {
      *param_2 = pbVar5;
      lVar1 = (long)iVar3;
    }
    return lVar1;
  }
  return 0;
}




ulong FUN_1010e7540(long *param_1,undefined1 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  int *piVar15;
  byte *pbVar16;
  long lVar17;
  undefined4 *puVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  long local_200;
  undefined4 local_1f8;
  undefined2 local_1f4;
  ushort local_1f2;
  int local_1f0;
  undefined2 local_1ec;
  ushort local_1ea;
  char acStack_1e8 [256];
  undefined1 auStack_e8 [128];
  long local_68;
  
  lVar20 = *(long *)PTR____stack_chk_guard_101444218;
  lVar21 = *param_1;
  uVar5 = (undefined4)param_1[0x3a];
  *param_2 = 1;
  local_68 = lVar20;
  lVar12 = (*(code *)PTR__calloc_101873640)(1,0x1ed0);
  if (lVar12 == 0) {
LAB_1010e7844:
    uVar26 = 0x1b;
  }
  else {
    lVar22 = *param_1;
    *(long *)(lVar22 + 0x218) = lVar12;
    *(undefined4 *)(lVar12 + 0x1ec8) = 0;
    *(long *)(lVar12 + 0x1eb8) = lVar12 + 0x1cb8;
    *(undefined4 *)(lVar12 + 0x814) = 1;
    *(undefined4 *)(lVar12 + 0x1414) = 1;
    *(undefined4 *)(lVar12 + 0x808) = 1;
    *(undefined4 *)(lVar12 + 0x1408) = 1;
    *(undefined4 *)(lVar12 + 0x140c) = 1;
    *(undefined4 *)(lVar12 + 0x1884) = 1;
    piVar19 = *(int **)(lVar21 + 0x218);
    _memset(auStack_e8,0,0x80);
    _memset(acStack_1e8,0,0x100);
    lVar12 = *(long *)(lVar22 + 0x218);
    if (*(char *)((long)param_1 + 0x2cc) != '\0') {
      FUN_1010e7270(acStack_1e8,0x100,"USER,%s");
      lVar13 = FUN_1010f6e28(*(undefined8 *)(lVar12 + 0x1cb0),acStack_1e8);
      if (lVar13 == 0) {
        FUN_1010f6eb4(*(undefined8 *)(lVar12 + 0x1cb0));
        *(undefined8 *)(lVar12 + 0x1cb0) = 0;
        goto LAB_1010e7844;
      }
      *(long *)(lVar12 + 0x1cb0) = lVar13;
      *(undefined4 *)(lVar12 + 0x8a4) = 1;
    }
    puVar25 = *(undefined8 **)(lVar22 + 0x400);
    if (puVar25 != (undefined8 *)0x0) {
      do {
        iVar9 = _sscanf((char *)*puVar25,"%127[^= ]%*[ =]%255s");
        if (iVar9 != 2) {
LAB_1010e7800:
          FUN_1010d9258(lVar22,"Syntax error in telnet option: %s");
          uVar26 = 0x31;
          goto LAB_1010e781c;
        }
        iVar9 = FUN_1010f659c(auStack_e8,"TTYPE");
        if (iVar9 == 0) {
          iVar9 = FUN_1010f659c(auStack_e8,"XDISPLOC");
          if (iVar9 == 0) {
            iVar9 = FUN_1010f659c(auStack_e8,"NEW_ENV");
            if (iVar9 == 0) {
              iVar9 = FUN_1010f659c(auStack_e8,"WS");
              if (iVar9 == 0) {
                iVar9 = FUN_1010f659c(auStack_e8,"BINARY");
                if (iVar9 == 0) {
                  FUN_1010d9258(lVar22,"Unknown telnet option %s");
                  uVar26 = 0x30;
                  goto LAB_1010e781c;
                }
                iVar9 = _atoi(acStack_1e8);
                if (iVar9 != 1) {
                  *(undefined4 *)(lVar12 + 0x808) = 0;
                  *(undefined4 *)(lVar12 + 0x1408) = 0;
                }
              }
              else {
                iVar9 = _sscanf(acStack_1e8,"%hu%*[xX]%hu");
                if (iVar9 != 2) goto LAB_1010e7800;
                *(undefined4 *)(lVar12 + 0x884) = 1;
              }
            }
            else {
              lVar20 = FUN_1010f6e28(*(undefined8 *)(lVar12 + 0x1cb0),acStack_1e8);
              if (lVar20 == 0) {
                uVar26 = 0x1b;
LAB_1010e781c:
                lVar20 = *(long *)PTR____stack_chk_guard_101444218;
                FUN_1010f6eb4(*(undefined8 *)(lVar12 + 0x1cb0));
                *(undefined8 *)(lVar12 + 0x1cb0) = 0;
                goto LAB_1010e8228;
              }
              *(long *)(lVar12 + 0x1cb0) = lVar20;
              *(undefined4 *)(lVar12 + 0x8a4) = 1;
            }
          }
          else {
            _strncpy((char *)(lVar12 + 0x1c28),acStack_1e8,0x7f);
            *(undefined1 *)(lVar12 + 0x1ca7) = 0;
            *(undefined4 *)(lVar12 + 0x894) = 1;
          }
        }
        else {
          _strncpy((char *)(lVar12 + 0x1c08),acStack_1e8,0x1f);
          *(undefined1 *)(lVar12 + 0x1c27) = 0;
          *(undefined4 *)(lVar12 + 0x868) = 1;
        }
        puVar25 = (undefined8 *)puVar25[1];
      } while (puVar25 != (undefined8 *)0x0);
    }
    pvVar1 = (void *)(lVar21 + 0x908);
    local_1f4 = 1;
    local_1f8 = uVar5;
    if ((undefined *)param_1[0x77] == PTR__fread_101444260) {
      local_1f0 = _fileno((FILE *)param_1[0x78]);
      local_1ec = 1;
      uVar23 = 1000;
      iVar9 = 2;
    }
    else {
      uVar23 = 100;
      iVar9 = 1;
    }
    uVar26 = 0;
    bVar8 = true;
    do {
      if ((!bVar8) || (iVar11 = FUN_1010f3a50(&local_1f8,iVar9,uVar23), iVar11 == -1))
      goto LAB_1010e81fc;
      if (iVar11 == 0) {
        local_1f2 = 0;
        local_1ea = 0;
LAB_1010e80b8:
        local_200 = 0;
        if (iVar9 == 2) {
          if ((local_1ea & 1) != 0) {
            local_200 = _read(local_1f0,pvVar1,0x3fff);
LAB_1010e8130:
            if (0 < local_200) {
              uVar26 = FUN_1010e831c(param_1,pvVar1,local_200);
              if ((int)uVar26 == 0) {
                FUN_1010d2468(lVar21);
                uVar26 = 0;
                goto LAB_1010e8180;
              }
              goto LAB_1010e8150;
            }
          }
          bVar8 = -1 < local_200;
        }
        else {
          iVar11 = (*(code *)param_1[0x77])(pvVar1,1,0x3fff,param_1[0x78]);
          local_200 = (long)iVar11;
          if (iVar11 == 0x10000000) {
LAB_1010e8150:
            bVar8 = false;
          }
          else {
            if (local_200 != 0x10000001) goto LAB_1010e8130;
LAB_1010e8180:
            bVar8 = true;
          }
        }
      }
      else {
        if ((local_1f2 & 1) == 0) goto LAB_1010e80b8;
        uVar10 = FUN_1010d9ad8(param_1,uVar5,pvVar1,0x3fff,&local_200);
        if (uVar10 == 0) {
          if (0 < local_200) {
            FUN_1010d2460(lVar21);
            lVar12 = local_200;
            if (local_200 != 0) {
              lVar20 = 0;
              lVar22 = *param_1;
              puVar24 = *(undefined4 **)(lVar22 + 0x218);
              puVar2 = puVar24 + 0x72e;
              pbVar3 = (byte *)(puVar24 + 0x7ae);
              iVar11 = -1;
              do {
                bVar7 = *(byte *)(lVar21 + 0x908 + lVar20);
                uVar26 = (ulong)bVar7;
                iVar6 = iVar11;
                switch(puVar24[0x7b2]) {
                case 0:
                  if (bVar7 == 0xd) {
                    puVar24[0x7b2] = 6;
                  }
                  else if (bVar7 == 0xff) {
                    puVar24[0x7b2] = 1;
                    goto LAB_1010e7c18;
                  }
LAB_1010e7ef4:
                  iVar6 = (int)lVar20;
                  if (-1 < iVar11) {
                    iVar6 = iVar11;
                  }
                  break;
                case 1:
switchD_1010e79bc_caseD_1:
                  switch(bVar7) {
                  case 0xfa:
                    *(undefined4 **)(puVar24 + 0x7ae) = puVar2;
LAB_1010e7e78:
                    puVar24[0x7b2] = 7;
                    break;
                  case 0xfb:
                    puVar24[0x7b2] = 2;
                    break;
                  case 0xfc:
                    puVar24[0x7b2] = 3;
                    break;
                  case 0xfd:
                    puVar24[0x7b2] = 4;
                    break;
                  case 0xfe:
                    puVar24[0x7b2] = 5;
                    break;
                  case 0xff:
                    puVar24[0x7b2] = 0;
                    goto LAB_1010e7ef4;
                  default:
                    puVar24[0x7b2] = 0;
                    FUN_1010e8428(lVar22,"RCVD",0xff,uVar26);
                  }
                  break;
                case 2:
                  FUN_1010e8428(lVar22,"RCVD",0xfb,uVar26);
                  *puVar24 = 1;
                  lVar17 = *(long *)(*param_1 + 0x218);
                  lVar13 = lVar17 + uVar26 * 4;
                  piVar15 = (int *)(lVar13 + 0xc08);
                  iVar11 = *(int *)(lVar13 + 0xc08);
                  if (iVar11 == 3) {
                    iVar11 = *(int *)(lVar13 + 0x1008);
                    if (iVar11 != 1) goto joined_r0x0001010e7e4c;
                    puVar18 = (undefined4 *)(lVar13 + 0x1008);
LAB_1010e7dac:
                    *piVar15 = 1;
                    *puVar18 = 0;
                  }
                  else if (iVar11 == 2) {
                    lVar17 = lVar17 + uVar26 * 4;
                    iVar11 = *(int *)(lVar17 + 0x1008);
                    if (iVar11 == 1) {
                      *piVar15 = 3;
                      *(undefined4 *)(lVar17 + 0x1008) = 0;
LAB_1010e7d94:
                      uVar14 = 0xfe;
                      goto LAB_1010e7e3c;
                    }
                    if (iVar11 == 0) {
                      *piVar15 = 1;
                    }
                  }
                  else if (iVar11 == 0) {
                    if (*(int *)(lVar17 + uVar26 * 4 + 0x1408) == 1) {
                      *piVar15 = 1;
                      uVar14 = 0xfd;
                      goto LAB_1010e7e3c;
                    }
                    goto LAB_1010e7d94;
                  }
                  goto LAB_1010e7e54;
                case 3:
                  FUN_1010e8428(lVar22,"RCVD",0xfc,uVar26);
                  *puVar24 = 1;
                  lVar13 = *(long *)(*param_1 + 0x218) + uVar26 * 4;
                  piVar15 = (int *)(lVar13 + 0xc08);
                  iVar11 = *(int *)(lVar13 + 0xc08);
                  if (iVar11 == 3) {
                    iVar11 = *(int *)(lVar13 + 0x1008);
                    if (iVar11 == 1) {
                      *piVar15 = 2;
                      *(undefined4 *)(lVar13 + 0x1008) = 0;
                      uVar14 = 0xfd;
                      goto LAB_1010e7e3c;
                    }
                    goto joined_r0x0001010e7e4c;
                  }
                  if (iVar11 == 2) {
                    lVar13 = *(long *)(*param_1 + 0x218) + uVar26 * 4;
                    iVar11 = *(int *)(lVar13 + 0x1008);
                    if (iVar11 != 1) goto joined_r0x0001010e7e4c;
                    puVar18 = (undefined4 *)(lVar13 + 0x1008);
LAB_1010e7b60:
                    *piVar15 = 0;
                    *puVar18 = 0;
                  }
                  else if (iVar11 == 1) {
                    *piVar15 = 0;
                    goto LAB_1010e7d94;
                  }
                  goto LAB_1010e7e54;
                case 4:
                  FUN_1010e8428(lVar22,"RCVD",0xfd,uVar26);
                  *puVar24 = 1;
                  lVar17 = *(long *)(*param_1 + 0x218);
                  lVar13 = lVar17 + uVar26 * 4;
                  piVar15 = (int *)(lVar13 + 8);
                  iVar11 = *piVar15;
                  if (iVar11 == 3) {
                    iVar11 = *(int *)(lVar13 + 0x408);
                    if (iVar11 != 1) goto joined_r0x0001010e7e4c;
                    puVar18 = (undefined4 *)(lVar13 + 0x408);
                    goto LAB_1010e7dac;
                  }
                  if (iVar11 == 2) {
                    lVar13 = lVar17 + uVar26 * 4;
                    iVar11 = *(int *)(lVar13 + 0x408);
                    if (iVar11 == 1) {
                      *piVar15 = 3;
                      *(undefined4 *)(lVar13 + 0x1008) = 0;
                      uVar14 = 0xfc;
                      goto LAB_1010e7e3c;
                    }
                    if (iVar11 == 0) {
                      *piVar15 = 1;
                      iVar11 = *(int *)(lVar17 + uVar26 * 4 + 0x1808);
joined_r0x0001010e7df8:
                      if (iVar11 == 1) {
                        FUN_1010e88b0(param_1,uVar26);
                      }
                    }
                  }
                  else if (iVar11 == 0) {
                    lVar17 = lVar17 + uVar26 * 4;
                    if (*(int *)(lVar17 + 0x808) == 1) {
                      *piVar15 = 1;
                      FUN_1010e881c(param_1,0xfb,uVar26);
                      iVar11 = *(int *)(lVar17 + 0x1808);
                      goto joined_r0x0001010e7df8;
                    }
                    if (*(int *)(lVar17 + 0x1808) == 1) {
                      *piVar15 = 1;
                      FUN_1010e881c(param_1,0xfb,uVar26);
                      FUN_1010e88b0(param_1,uVar26);
                    }
                    else {
                      FUN_1010e881c(param_1,0xfc,uVar26);
                    }
                  }
                  goto LAB_1010e7e54;
                case 5:
                  FUN_1010e8428(lVar22,"RCVD",0xfe,uVar26);
                  *puVar24 = 1;
                  lVar13 = *(long *)(*param_1 + 0x218) + uVar26 * 4;
                  piVar15 = (int *)(lVar13 + 8);
                  iVar11 = *piVar15;
                  if (iVar11 == 3) {
                    iVar11 = *(int *)(lVar13 + 0x408);
                    if (iVar11 != 1) goto joined_r0x0001010e7e4c;
                    *piVar15 = 2;
                    *(undefined4 *)(lVar13 + 0x408) = 0;
                    uVar14 = 0xfb;
                  }
                  else {
                    if (iVar11 == 2) {
                      lVar13 = *(long *)(*param_1 + 0x218) + uVar26 * 4;
                      iVar11 = *(int *)(lVar13 + 0x408);
                      if (iVar11 == 1) {
                        puVar18 = (undefined4 *)(lVar13 + 0x408);
                        goto LAB_1010e7b60;
                      }
joined_r0x0001010e7e4c:
                      if (iVar11 == 0) {
                        *piVar15 = 0;
                      }
                      goto LAB_1010e7e54;
                    }
                    if (iVar11 != 1) goto LAB_1010e7e54;
                    *piVar15 = 0;
                    uVar14 = 0xfc;
                  }
LAB_1010e7e3c:
                  FUN_1010e881c(param_1,uVar14,uVar26);
                  goto LAB_1010e7e54;
                case 6:
                  puVar24[0x7b2] = 0;
                  if (bVar7 != 0) goto LAB_1010e7ef4;
LAB_1010e7c18:
                  if ((-1 < iVar11) &&
                     (uVar26 = FUN_1010d98ec(param_1,1,lVar21 + iVar11 + 0x908,
                                             (long)((int)lVar20 - iVar11)), (int)uVar26 != 0))
                  goto LAB_1010e7f38;
                  iVar6 = -1;
                  break;
                case 7:
                  if (bVar7 == 0xff) {
                    puVar24[0x7b2] = 8;
                  }
                  else {
                    pbVar16 = *(byte **)(puVar24 + 0x7ae);
                    if (pbVar16 < pbVar3) {
                      *(byte **)(puVar24 + 0x7ae) = pbVar16 + 1;
                      *pbVar16 = bVar7;
                    }
                  }
                  break;
                case 8:
                  if (bVar7 != 0xf0) {
                    pbVar16 = *(byte **)(puVar24 + 0x7ae);
                    if (bVar7 != 0xff) {
                      if (pbVar16 < pbVar3) {
                        *(byte **)(puVar24 + 0x7ae) = pbVar16 + 1;
                        *pbVar16 = 0xff;
                        pbVar16 = *(byte **)(puVar24 + 0x7ae);
                      }
                      if (pbVar16 < pbVar3) {
                        *(byte **)(puVar24 + 0x7ae) = pbVar16 + 1;
                        *pbVar16 = bVar7;
                        pbVar16 = *(byte **)(puVar24 + 0x7ae);
                      }
                      *(byte **)(puVar24 + 0x7b0) = pbVar16 + -2;
                      *(undefined4 **)(puVar24 + 0x7ae) = puVar2;
                      FUN_1010e8428(lVar22,"In SUBOPTION processing, RCVD",0xff,uVar26);
                      FUN_1010e8538(param_1);
                      puVar24[0x7b2] = 1;
                      goto switchD_1010e79bc_caseD_1;
                    }
                    if (pbVar16 < pbVar3) {
                      *(byte **)(puVar24 + 0x7ae) = pbVar16 + 1;
                      *pbVar16 = 0xff;
                    }
                    goto LAB_1010e7e78;
                  }
                  pbVar16 = *(byte **)(puVar24 + 0x7ae);
                  if (pbVar16 < pbVar3) {
                    *(byte **)(puVar24 + 0x7ae) = pbVar16 + 1;
                    *pbVar16 = 0xff;
                    pbVar16 = *(byte **)(puVar24 + 0x7ae);
                  }
                  if (pbVar16 < pbVar3) {
                    *(byte **)(puVar24 + 0x7ae) = pbVar16 + 1;
                    *pbVar16 = 0xf0;
                    pbVar16 = *(byte **)(puVar24 + 0x7ae);
                  }
                  *(byte **)(puVar24 + 0x7b0) = pbVar16 + -2;
                  *(undefined4 **)(puVar24 + 0x7ae) = puVar2;
                  FUN_1010e8538(param_1);
LAB_1010e7e54:
                  puVar24[0x7b2] = 0;
                }
                iVar11 = iVar6;
                lVar20 = lVar20 + 1;
              } while (lVar12 != lVar20);
              if ((-1 < iVar11) &&
                 (uVar26 = FUN_1010d98ec(param_1,1,lVar21 + iVar11 + 0x908,
                                         (long)((int)lVar20 - iVar11)), (int)uVar26 != 0)) {
LAB_1010e7f38:
                bVar8 = false;
                goto LAB_1010e8184;
              }
            }
            if (*piVar19 == 0) {
              uVar26 = 0;
            }
            else if (piVar19[1] == 0) {
              iVar11 = 0;
              lVar12 = 0;
              lVar20 = *(long *)(*param_1 + 0x218);
              do {
                if ((int)lVar12 != 4) {
                  lVar22 = lVar20 + lVar12;
                  if (*(int *)(lVar22 + 0x808) == 1) {
                    lVar13 = *(long *)(*param_1 + 0x218) + lVar12;
                    iVar6 = *(int *)(lVar13 + 8);
                    if (iVar6 == 3) {
                      if (*(int *)(lVar13 + 0x408) == 0) {
                        *(undefined4 *)(lVar13 + 0x408) = 1;
                      }
                    }
                    else if (iVar6 == 2) {
                      lVar13 = *(long *)(*param_1 + 0x218) + lVar12;
                      if (*(int *)(lVar13 + 0x408) == 1) {
                        *(undefined4 *)(lVar13 + 0x408) = 0;
                      }
                    }
                    else if (iVar6 == 0) {
                      *(undefined4 *)(lVar13 + 8) = 2;
                      FUN_1010e881c(param_1,0xfb,iVar11);
                    }
                  }
                  if (*(int *)(lVar22 + 0x1408) == 1) {
                    lVar22 = *(long *)(*param_1 + 0x218) + lVar12;
                    iVar6 = *(int *)(lVar22 + 0xc08);
                    if (iVar6 == 3) {
                      if (*(int *)(lVar22 + 0x1008) == 0) {
                        *(undefined4 *)(lVar22 + 0x1008) = 1;
                      }
                    }
                    else if (iVar6 == 2) {
                      lVar22 = *(long *)(*param_1 + 0x218) + lVar12;
                      if (*(int *)(lVar22 + 0x1008) == 1) {
                        *(undefined4 *)(lVar22 + 0x1008) = 0;
                      }
                    }
                    else if (iVar6 == 0) {
                      *(undefined4 *)(lVar22 + 0xc08) = 2;
                      FUN_1010e881c(param_1,0xfd,iVar11);
                    }
                  }
                }
                lVar12 = lVar12 + 4;
                iVar11 = iVar11 + 1;
              } while (lVar12 != 0xa0);
              uVar26 = 0;
              piVar19[1] = 1;
            }
            else {
              uVar26 = 0;
            }
            goto LAB_1010e80b8;
          }
          bVar8 = false;
          uVar26 = 0;
        }
        else {
          bVar8 = uVar10 == 0x51;
          uVar4 = 0x51;
          if (!bVar8) {
            uVar4 = uVar10;
          }
          uVar26 = (ulong)uVar4;
        }
      }
LAB_1010e8184:
      if (*(long *)(lVar21 + 0x358) != 0) {
        auVar27 = FUN_1010d0e58();
        lVar12 = FUN_1010d0e80(auVar27._0_8_,auVar27._8_8_,param_1[0x38],param_1[0x39]);
        if (*(long *)(lVar21 + 0x358) <= lVar12) {
          FUN_1010d9258(lVar21,"Time-out");
          bVar8 = false;
          uVar26 = 0x1c;
        }
      }
      iVar11 = FUN_1010d1dac(param_1);
    } while (iVar11 == 0);
    uVar26 = 0x2a;
LAB_1010e81fc:
    FUN_1010eb3d0(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    lVar20 = *(long *)PTR____stack_chk_guard_101444218;
  }
LAB_1010e8228:
  if (lVar20 == local_68) {
    return uVar26;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1010e82c0(long *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(*param_1 + 0x218);
  if (lVar1 != 0) {
    FUN_1010f6eb4(*(undefined8 *)(lVar1 + 0x1cb0));
    *(undefined8 *)(lVar1 + 0x1cb0) = 0;
    if (*(long *)(*param_1 + 0x218) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(*param_1 + 0x218) = 0;
    }
  }
  return 0;
}




void FUN_1010e831c(long param_1,char *param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_80;
  char local_72 [2];
  undefined4 local_70;
  undefined2 local_6c;
  long local_68;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar3;
  do {
    if (param_3 == 0) {
      uVar2 = 0;
      break;
    }
    param_3 = param_3 + -1;
    local_72[0] = *param_2;
    lVar4 = 1;
    if (local_72[0] == -1) {
      local_72[1] = 0xff;
      lVar4 = 2;
    }
    lVar5 = 0;
    do {
      local_70 = *(undefined4 *)(param_1 + 0x1d0);
      local_6c = 4;
      iVar1 = FUN_1010f3a50(&local_70,1,0xffffffff);
      if (iVar1 + 1U < 2) {
        uVar2 = 0x37;
        goto LAB_1010e83f0;
      }
      local_80 = 0;
      uVar2 = FUN_1010d942c(param_1,*(undefined4 *)(param_1 + 0x1d0),local_72 + lVar5,lVar4 - lVar5,
                            &local_80);
    } while (((int)uVar2 == 0) && (lVar5 = local_80 + lVar5, lVar5 < lVar4));
    param_2 = param_2 + 1;
  } while ((int)uVar2 == 0);
LAB_1010e83f0:
  if (lVar3 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}




void FUN_1010e8428(long param_1,undefined8 param_2,int param_3,int param_4)

{
  char *pcVar1;
  
  if (*(char *)(param_1 + 0x508) == '\0') {
    return;
  }
  if (param_3 != 0xfb) {
    if (param_3 == 0xff) {
      if (param_4 - 0xecU < 0x14) {
        pcVar1 = "%s IAC %s\n";
      }
      else {
        pcVar1 = "%s IAC %d\n";
      }
      goto LAB_1010e8514;
    }
    if (((param_3 != 0xfc) && (param_3 != 0xfd)) && (param_3 != 0xfe)) {
      pcVar1 = "%s %d %d\n";
      goto LAB_1010e8514;
    }
  }
  if ((param_4 < 0x28) || (param_4 == 0xff)) {
    pcVar1 = "%s %s %s\n";
  }
  else {
    pcVar1 = "%s %s %d\n";
  }
LAB_1010e8514:
  FUN_1010d909c(param_1,pcVar1);
  return;
}




void FUN_1010e8538(long *param_1)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  size_t sVar4;
  ssize_t sVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 auStack_968 [128];
  undefined1 auStack_8e8 [128];
  undefined1 auStack_868 [2048];
  long local_68;
  
  lVar8 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar8;
  _memset(auStack_8e8,0,0x80);
  _memset(auStack_968,0,0x80);
  lVar10 = *param_1;
  lVar7 = *(long *)(lVar10 + 0x218);
  FUN_1010e8a7c(lVar10,0x3c,lVar7 + 0x1cb8,
                (*(long *)(lVar7 + 0x1ec0) + 2) - *(long *)(lVar7 + 0x1eb8));
  pcVar6 = *(char **)(lVar7 + 0x1eb8);
  *(char **)(lVar7 + 0x1eb8) = pcVar6 + 1;
  cVar2 = *pcVar6;
  if (cVar2 == '\'') {
    FUN_1010e7270(auStack_868,0x800,"%c%c%c%c");
    uVar9 = 4;
    for (puVar11 = *(undefined8 **)(lVar7 + 0x1cb0); puVar11 != (undefined8 *)0x0;
        puVar11 = (undefined8 *)puVar11[1]) {
      pcVar6 = (char *)*puVar11;
      sVar4 = _strlen(pcVar6);
      uVar1 = uVar9 + sVar4 + 1;
      if ((uVar1 < 0x7fa) && (iVar3 = _sscanf(pcVar6,"%127[^,],%127s"), iVar3 != 0)) {
        FUN_1010e7270(auStack_868 + uVar9,0x800 - uVar9,"%c%s%c%s");
        uVar9 = uVar1;
      }
    }
    FUN_1010e7270(auStack_868 + uVar9,0x800 - uVar9,"%c%c");
    sVar5 = _send((int)param_1[0x3a],auStack_868,uVar9 + 2,0);
    lVar8 = *(long *)PTR____stack_chk_guard_101444218;
    if (sVar5 < 0) {
      ___error();
      FUN_1010d9258(lVar10,"Sending data failed (%d)");
    }
  }
  else {
    if (cVar2 == '#') {
      sVar4 = _strlen((char *)(lVar7 + 0x1c28));
    }
    else {
      if (cVar2 != '\x18') goto LAB_1010e87ec;
      sVar4 = _strlen((char *)(lVar7 + 0x1c08));
    }
    uVar9 = sVar4 + 4;
    FUN_1010e7270(auStack_868,0x800,"%c%c%c%c%s%c%c");
    sVar5 = _send((int)param_1[0x3a],auStack_868,sVar4 + 6,0);
    if (sVar5 < 0) {
      ___error();
      FUN_1010d9258(lVar10,"Sending data failed (%d)");
    }
  }
  FUN_1010e8a7c(lVar10,0x3e,auStack_868 + 2,uVar9);
LAB_1010e87ec:
  if (lVar8 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1010e881c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  ssize_t sVar1;
  undefined8 uVar2;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  
  uVar2 = *param_1;
  local_33 = 0xff;
  local_32 = (undefined1)param_2;
  local_31 = (undefined1)param_3;
  sVar1 = _send(*(int *)(param_1 + 0x3a),&local_33,3,0);
  if (sVar1 < 0) {
    ___error();
    FUN_1010d9258(uVar2,"Sending data failed (%d)");
  }
  FUN_1010e8428(*param_1,"SENT",param_2,param_3);
  return;
}




void FUN_1010e88b0(long *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  ssize_t sVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 == 0x1f) {
    lVar7 = *param_1;
    lVar8 = *(long *)(lVar7 + 0x218);
    puVar1 = (undefined1 *)(lVar8 + 0x1cb8);
    *puVar1 = 0xff;
    *(undefined1 *)(lVar8 + 0x1cb9) = 0xfa;
    puVar2 = (undefined1 *)(lVar8 + 0x1eb8);
    *(long *)(lVar8 + 0x1eb8) = lVar8 + 0x1cbb;
    *(undefined1 *)(lVar8 + 0x1cba) = 0x1f;
    puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    uVar3 = *(undefined2 *)(lVar8 + 0x1ca8);
    uVar4 = *(undefined2 *)(lVar8 + 0x1caa);
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = (char)((ushort)uVar3 >> 8);
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = (char)uVar3;
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = (char)((ushort)uVar4 >> 8);
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = (char)uVar4;
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = 0xff;
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    if (puVar6 < puVar2) {
      *(undefined1 **)(lVar8 + 0x1eb8) = puVar6 + 1;
      *puVar6 = 0xf0;
      puVar6 = *(undefined1 **)(lVar8 + 0x1eb8);
    }
    *(undefined1 **)(lVar8 + 0x1ec0) = puVar6;
    *(undefined1 **)(lVar8 + 0x1eb8) = puVar1;
    FUN_1010e8a7c(lVar7,0x3e,lVar8 + 0x1cba,puVar6 + (-2 - (long)puVar1));
    sVar5 = _send((int)param_1[0x3a],puVar1,3,0);
    if (sVar5 < 0) {
      ___error();
      FUN_1010d9258(lVar7,"Sending data failed (%d)");
    }
    FUN_1010e831c(param_1,lVar8 + 0x1cbb,4);
    sVar5 = _send((int)param_1[0x3a],(void *)(lVar8 + 0x1cbf),2,0);
    if (sVar5 < 0) {
      ___error();
      FUN_1010d9258(lVar7,"Sending data failed (%d)");
    }
  }
  return;
}




void FUN_1010e8a7c(long param_1,int param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (*(char *)(param_1 + 0x508) == '\0') {
    return;
  }
  uVar6 = param_4;
  if (param_2 == 0) {
LAB_1010e8b34:
    if (uVar6 == 0) {
      pcVar4 = "(Empty suboption?)";
      goto LAB_1010e8d30;
    }
  }
  else {
    FUN_1010d909c(param_1,"%s IAC SB ");
    uVar6 = param_4 - 2;
    if (param_4 < 3) goto LAB_1010e8b34;
    bVar1 = param_3[uVar6];
    bVar2 = param_3[param_4 - 1];
    if ((bVar1 != 0xff) || (bVar2 != 0xf0)) {
      FUN_1010d909c(param_1,"(terminated by ");
      if ((bVar1 < 0x28) || (0xeb < bVar1)) {
        pcVar4 = "%s ";
      }
      else {
        pcVar4 = "%u ";
      }
      FUN_1010d909c(param_1,pcVar4);
      if ((bVar2 < 0x28) || (0xeb < bVar2)) {
        pcVar4 = "%s";
      }
      else {
        pcVar4 = "%d";
      }
      FUN_1010d909c(param_1,pcVar4);
      FUN_1010d909c(param_1,", not IAC SE!) ");
    }
  }
  bVar1 = *param_3;
  if (bVar1 < 0x28) {
    if ((bVar1 < 0x28) && ((1L << ((ulong)bVar1 & 0x3f) & 0x8881000000U) != 0)) {
      pcVar4 = "%s";
    }
    else {
      pcVar4 = "%s (unsupported)";
    }
  }
  else {
    pcVar4 = "%d (unknown)";
  }
  FUN_1010d909c(param_1,pcVar4);
  if (*param_3 == 0x1f) {
    if (4 < uVar6) {
      pcVar4 = "Width: %hu ; Height: %hu";
LAB_1010e8d1c:
      FUN_1010d909c(param_1,pcVar4);
    }
  }
  else {
    switch(param_3[1]) {
    case 0:
      pcVar4 = " IS";
      break;
    case 1:
      pcVar4 = " SEND";
      break;
    case 2:
      pcVar4 = " INFO/REPLY";
      break;
    case 3:
      pcVar4 = " NAME";
      break;
    default:
      goto switchD_1010e8cbc_default;
    }
    FUN_1010d909c(param_1,pcVar4);
switchD_1010e8cbc_default:
    bVar1 = *param_3;
    if ((bVar1 == 0x18) || (bVar1 == 0x23)) {
      param_3[uVar6] = 0;
      pcVar4 = " \"%s\"";
      goto LAB_1010e8d1c;
    }
    if (bVar1 == 0x27) {
      if (param_3[1] == 0) {
        FUN_1010d909c(param_1," ");
        if (3 < uVar6) {
          uVar5 = 3;
          uVar7 = 4;
          do {
            pcVar4 = " = ";
            if ((param_3[uVar5] != 1) && (pcVar4 = ", ", param_3[uVar5] != 0)) {
              pcVar4 = "%c";
            }
            FUN_1010d909c(param_1,pcVar4);
            bVar3 = uVar7 < uVar6;
            uVar5 = uVar7;
            uVar7 = (ulong)((int)uVar7 + 1);
          } while (bVar3);
        }
      }
    }
    else if (2 < uVar6) {
      uVar5 = 3;
      do {
        FUN_1010d909c(param_1," %.2x");
        bVar3 = uVar5 < uVar6;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (bVar3);
    }
  }
  if (param_2 == 0) {
    return;
  }
  pcVar4 = "\n";
LAB_1010e8d30:
  FUN_1010d909c(param_1,pcVar4);
  return;
}




undefined4 FUN_1010e8e38(undefined8 param_1,long *param_2,long *param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uid_t uVar4;
  int iVar5;
  uint uVar6;
  FILE *pFVar7;
  long lVar8;
  FILE *pFVar9;
  char *pcVar10;
  char *pcVar11;
  undefined4 uVar12;
  long lVar13;
  bool bVar14;
  int local_4c8;
  char *pcStack_4c0;
  long local_4b8;
  undefined1 auStack_4b0 [48];
  undefined8 local_480;
  char acStack_468 [1024];
  long local_68;
  
  lVar13 = *(long *)PTR____stack_chk_guard_101444218;
  if ((char *)*param_2 == (char *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(char *)*param_2 != '\0';
  }
  local_68 = lVar13;
  if (param_4 == (char *)0x0) {
    lVar8 = FUN_1010e5ef8("HOME");
    if (lVar8 == 0) {
      uVar4 = _geteuid();
      pFVar7 = (FILE *)_getpwuid_r(uVar4,auStack_4b0,acStack_468,0x400,&local_4b8);
      if ((int)pFVar7 != 0 || local_4b8 == 0) {
        uVar12 = 1;
        goto LAB_1010e91b0;
      }
      lVar8 = (*(code *)PTR__strdup_101873638)(local_480);
      if (lVar8 == 0) {
        uVar12 = 0x1b;
        pFVar7 = (FILE *)0x0;
        goto LAB_1010e91b0;
      }
    }
    pcVar11 = (char *)FUN_1010e7298("%s%s%s");
    pFVar7 = (FILE *)(*(code *)PTR__free_101873628)(lVar8);
    if (pcVar11 == (char *)0x0) {
      uVar12 = 0xffffffff;
      goto LAB_1010e91b0;
    }
    pFVar9 = _fopen(pcVar11,"r");
    pFVar7 = (FILE *)(*(code *)PTR__free_101873628)(pcVar11);
  }
  else {
    pFVar7 = _fopen(param_4,"r");
    pFVar9 = pFVar7;
  }
  uVar12 = 1;
  if (pFVar9 != (FILE *)0x0) {
    local_4c8 = 0;
    bVar14 = false;
    bVar1 = false;
    cVar3 = '\0';
    uVar12 = 1;
    while (pcVar11 = _fgets(acStack_468,0x100,pFVar9), pcVar11 != (char *)0x0) {
      pcVar11 = acStack_468;
      while (pcVar11 = _strtok_r(pcVar11," \t\n",&pcStack_4c0), pcVar11 != (char *)0x0) {
        pcVar10 = (char *)*param_2;
        if ((((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) && ((char *)*param_3 != (char *)0x0))
           && (*(char *)*param_3 != '\0')) goto LAB_1010e919c;
        if (cVar3 == '\x02') {
          if (bVar1) {
            if (bVar2) {
              local_4c8 = FUN_1010f659c(pcVar10,pcVar11);
            }
            else {
              (*(code *)PTR__free_101873628)();
              lVar13 = (*(code *)PTR__strdup_101873638)(pcVar11);
              *param_2 = lVar13;
              if (lVar13 == 0) {
LAB_1010e9198:
                uVar12 = 0xffffffff;
                goto LAB_1010e919c;
              }
            }
            bVar1 = false;
            cVar3 = '\x02';
          }
          else if (bVar14) {
            if ((bool)(bVar2 & local_4c8 == 0)) {
              bVar1 = false;
              bVar14 = false;
              local_4c8 = 0;
              cVar3 = '\x02';
            }
            else {
              (*(code *)PTR__free_101873628)(*param_3);
              lVar13 = (*(code *)PTR__strdup_101873638)(pcVar11);
              *param_3 = lVar13;
              if (lVar13 == 0) goto LAB_1010e9198;
              bVar1 = false;
              bVar14 = false;
              cVar3 = '\x02';
            }
          }
          else {
            iVar5 = FUN_1010f659c("login",pcVar11);
            if (iVar5 == 0) {
              iVar5 = FUN_1010f659c("password",pcVar11);
              if (iVar5 == 0) {
                iVar5 = FUN_1010f659c("machine",pcVar11);
                bVar1 = false;
                bVar14 = false;
                cVar3 = '\x01';
                if (iVar5 == 0) {
                  cVar3 = '\x02';
                }
                else {
                  local_4c8 = 0;
                }
              }
              else {
                bVar1 = false;
                bVar14 = true;
                cVar3 = '\x02';
              }
            }
            else {
              bVar14 = false;
              bVar1 = true;
              cVar3 = '\x02';
            }
          }
        }
        else if (cVar3 == '\x01') {
          iVar5 = FUN_1010f659c(param_1,pcVar11);
          if (iVar5 != 0) {
            uVar12 = 0;
          }
          cVar3 = '\0';
          if (iVar5 != 0) {
            cVar3 = '\x02';
          }
        }
        else if (cVar3 == '\0') {
          iVar5 = FUN_1010f659c("machine",pcVar11);
          cVar3 = iVar5 != 0;
        }
        pcVar11 = (char *)0x0;
      }
    }
LAB_1010e919c:
    uVar6 = _fclose(pFVar9);
    pFVar7 = (FILE *)(ulong)uVar6;
    lVar13 = *(long *)PTR____stack_chk_guard_101444218;
  }
LAB_1010e91b0:
  if (lVar13 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(pFVar7);
  }
  return uVar12;
}




undefined8 FUN_1010e91ec(long param_1)

{
  *(undefined8 *)(param_1 + 0x7b0) = 0;
  *(undefined4 *)(param_1 + 0x8b28) = 0;
  *(undefined8 *)(param_1 + 0x8b2c) = 0;
  *(undefined8 *)(param_1 + 0x7f0) = 0;
  *(undefined8 *)(param_1 + 0x7e8) = 0;
  *(undefined8 *)(param_1 + 0x7e0) = 0;
  *(undefined8 *)(param_1 + 0x7d8) = 0;
  *(undefined8 *)(param_1 + 2000) = 0;
  *(undefined8 *)(param_1 + 0x7c8) = 0;
  *(undefined8 *)(param_1 + 0x8b38) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0x8b40) = 0;
  if (*(long *)(param_1 + 0x8b70) != 0) {
    (*(code *)PTR__free_101873628)();
  }
  *(undefined1 *)(param_1 + 0x8b80) = 0;
  *(undefined1 *)(param_1 + 0x8bb8) = 0;
  *(undefined8 *)(param_1 + 0x8bb0) = 0;
  *(undefined8 *)(param_1 + 0x8be8) = 0;
  *(undefined8 *)(param_1 + 0x8b50) = 0;
  *(undefined8 *)(param_1 + 0x8b48) = 0;
  *(undefined8 *)(param_1 + 0x8b70) = 0;
  *(undefined8 *)(param_1 + 0x8b68) = 0;
  return 0;
}




undefined8 FUN_1010e92a8(long param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  long lVar6;
  double *in_stack_00000000;
  
  if (param_1 == 0) {
    return 0x2b;
  }
  uVar1 = param_2 & 0xf00000;
  if (0x2fffff < uVar1) {
    if (uVar1 != 0x300000) {
      if (uVar1 != 0x400000) {
        return 0x2b;
      }
      if (in_stack_00000000 == (double *)0x0) {
        return 0x2b;
      }
      if ((int)param_2 < 0x400022) {
        if (param_2 == 0x40001b) {
          dVar4 = (double)FUN_10110561c();
        }
        else {
          if (param_2 != 0x40001c) {
            return 0x2b;
          }
          dVar4 = (double)FUN_1010d4984();
        }
        *in_stack_00000000 = dVar4;
        return 0;
      }
      if (param_2 != 0x400022) {
        if (param_2 == 0x40002b) {
          *in_stack_00000000 = (double)(param_1 + 0x8c00);
          *(undefined4 *)(param_1 + 0x8c00) = 0;
          *(undefined8 *)(param_1 + 0x8c08) = 0;
          return 0;
        }
        return 0x2b;
      }
      dVar4 = (double)(param_1 + 0x8bf0);
      goto LAB_1010e9710;
    }
    if (in_stack_00000000 == (double *)0x0) {
      return 0x2b;
    }
    switch(param_2) {
    case 0x300003:
      *in_stack_00000000 = *(double *)(param_1 + 0x7b0);
      return 0;
    case 0x300004:
      *in_stack_00000000 = *(double *)(param_1 + 0x7c8);
      return 0;
    case 0x300005:
      *in_stack_00000000 = *(double *)(param_1 + 2000);
      return 0;
    case 0x300006:
      *in_stack_00000000 = *(double *)(param_1 + 0x7e0);
      return 0;
    case 0x300007:
      lVar6 = *(long *)(param_1 + 0x790);
      break;
    case 0x300008:
      lVar6 = *(long *)(param_1 + 0x788);
      break;
    case 0x300009:
      lVar6 = *(long *)(param_1 + 0x7b8);
      break;
    case 0x30000a:
      lVar6 = *(long *)(param_1 + 0x7c0);
      break;
    default:
      return 0x2b;
    case 0x30000f:
      if ((*(byte *)(param_1 + 0x7a8) >> 6 & 1) == 0) {
LAB_1010e95e0:
        dVar4 = -1.0;
        goto LAB_1010e9620;
      }
      lVar6 = *(long *)(param_1 + 0x778);
      goto LAB_1010e961c;
    case 0x300010:
      if ((*(byte *)(param_1 + 0x7a8) >> 5 & 1) == 0) goto LAB_1010e95e0;
      lVar6 = *(long *)(param_1 + 0x780);
LAB_1010e961c:
      dVar4 = (double)lVar6;
LAB_1010e9620:
      *in_stack_00000000 = dVar4;
      return 0;
    case 0x300011:
      *in_stack_00000000 = *(double *)(param_1 + 0x7e8);
      return 0;
    case 0x300013:
      *in_stack_00000000 = *(double *)(param_1 + 0x7f0);
      return 0;
    case 0x300021:
      *in_stack_00000000 = *(double *)(param_1 + 0x7d8);
      return 0;
    }
    *in_stack_00000000 = (double)lVar6;
    return 0;
  }
  if (uVar1 == 0x100000) {
    if (in_stack_00000000 == (double *)0x0) {
      return 0x2b;
    }
    if ((int)param_2 < 0x10001e) {
      if (param_2 == 0x100001) {
        pcVar2 = "";
        if (*(char **)(param_1 + 0x738) != (char *)0x0) {
          pcVar2 = *(char **)(param_1 + 0x738);
        }
        *in_stack_00000000 = (double)pcVar2;
        return 0;
      }
      if (param_2 != 0x100012) {
        if (param_2 == 0x100015) {
          *in_stack_00000000 = *(double *)(param_1 + 0x4b8);
          return 0;
        }
        return 0x2b;
      }
      lVar6 = 0x8b70;
      goto LAB_1010e9524;
    }
    switch(param_2) {
    case 0x10001e:
      lVar6 = 0x8a88;
      break;
    case 0x10001f:
      lVar6 = 0x8b78;
      break;
    case 0x100020:
      lVar6 = 0x8b80;
      goto LAB_1010e9554;
    default:
      return 0x2b;
    case 0x100024:
      *in_stack_00000000 = *(double *)(param_1 + 0x660);
      return 0;
    case 0x100029:
      lVar6 = 0x8bb8;
LAB_1010e9554:
      *in_stack_00000000 = (double)(param_1 + lVar6);
      return 0;
    }
LAB_1010e9524:
    *in_stack_00000000 = *(double *)(param_1 + lVar6);
    return 0;
  }
  if (uVar1 != 0x200000) {
    return 0x2b;
  }
  if (in_stack_00000000 == (double *)0x0) {
    return 0x2b;
  }
  uVar5 = 0x2b;
  switch(param_2) {
  case 0x200002:
    lVar6 = 0x8b28;
    goto LAB_1010e9694;
  default:
    goto switchD_1010e945c_caseD_100021;
  case 0x20000b:
    lVar6 = 0x8b48;
    break;
  case 0x20000c:
    lVar6 = 0x8b50;
    break;
  case 0x20000d:
    dVar4 = *(double *)(param_1 + 0x438);
    goto LAB_1010e9710;
  case 0x20000e:
    lVar6 = 0x8b38;
    break;
  case 0x200014:
    dVar4 = *(double *)(param_1 + 0x278);
    goto LAB_1010e9710;
  case 0x200016:
    lVar6 = 0x8b2c;
    goto LAB_1010e9694;
  case 0x200017:
    lVar6 = 0x8b60;
    break;
  case 0x200018:
    lVar6 = 0x8b58;
    break;
  case 0x200019:
    lVar6 = 0x895c;
LAB_1010e9694:
    dVar4 = (double)(long)*(int *)(param_1 + lVar6);
    goto LAB_1010e9710;
  case 0x20001a:
    lVar6 = 0x8b68;
    break;
  case 0x20001d:
    iVar3 = FUN_1010eecec(param_1,0);
    if (iVar3 == -1) {
      dVar4 = -NAN;
    }
    else {
      dVar4 = (double)(long)iVar3;
    }
    goto LAB_1010e9710;
  case 0x200023:
    dVar4 = (double)(ulong)*(byte *)(param_1 + 0x8b40);
    goto LAB_1010e9710;
  case 0x200025:
    lVar6 = 0x8ad0;
    break;
  case 0x200026:
    lVar6 = 0x8ad8;
    break;
  case 0x200027:
    lVar6 = 0x8ae0;
    break;
  case 0x200028:
    lVar6 = 0x8bb0;
    break;
  case 0x20002a:
    lVar6 = 0x8be8;
  }
  dVar4 = *(double *)(param_1 + lVar6);
LAB_1010e9710:
  uVar5 = 0;
  *in_stack_00000000 = dVar4;
switchD_1010e945c_caseD_100021:
  return uVar5;
}




void FUN_1010e9874(long *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *pcVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined1 auStack_63 [11];
  long local_58;
  
  lVar9 = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = *param_1;
  uVar8 = (ulong)param_2;
  if (*(char *)(lVar7 + 0x211) == '\0') {
    lVar6 = *(long *)(lVar7 + 0x208);
  }
  else {
    uVar8 = uVar8 - 0xc;
    lVar6 = *(long *)(lVar7 + 0x208) + 10;
    *(long *)(lVar7 + 0x208) = lVar6;
  }
  plVar10 = (long *)(lVar7 + 0x208);
  local_58 = lVar9;
  iVar1 = (*(code *)param_1[0x77])(lVar6,1,uVar8,param_1[0x78]);
  if (iVar1 == 0x10000001) {
    if ((*(byte *)(param_1[0x61] + 0x7c) >> 4 & 1) == 0) {
      *(uint *)(lVar7 + 0x1e4) = *(uint *)(lVar7 + 0x1e4) | 0x20;
      if (*(char *)(lVar7 + 0x211) != '\0') {
        *plVar10 = *plVar10 + -10;
      }
      uVar3 = 0;
      *param_3 = 0;
      goto LAB_1010e9a40;
    }
    pcVar5 = "Read callback asked for PAUSE when not supported!";
  }
  else {
    if (iVar1 == 0x10000000) {
      FUN_1010d9258(lVar7,"operation aborted by callback");
      *param_3 = 0;
      uVar3 = 0x2a;
      goto LAB_1010e9a40;
    }
    if ((ulong)(long)iVar1 <= uVar8) {
      if ((*(char *)(lVar7 + 0x213) == '\0') && (*(char *)(lVar7 + 0x211) != '\0')) {
        pcVar5 = "\n";
        if ((*(char *)(lVar7 + 0x4f3) == '\0') &&
           (pcVar5 = "\r\n", *(char *)(lVar7 + 0x3ca) != '\0')) {
          pcVar5 = "\n";
        }
        iVar2 = FUN_1010e7270(auStack_63,0xb,"%x%s");
        lVar6 = *plVar10;
        *plVar10 = lVar6 - iVar2;
        _memcpy((void *)(lVar6 - iVar2),auStack_63,(long)iVar2);
        lVar6 = *plVar10;
        sVar4 = _strlen(pcVar5);
        _memcpy((void *)(lVar6 + (iVar2 + iVar1)),pcVar5,sVar4);
        if (iVar1 == 0) {
          *(undefined1 *)(lVar7 + 0x1e8) = 1;
        }
        sVar4 = _strlen(pcVar5);
        iVar1 = (int)sVar4 + iVar2 + iVar1;
      }
      uVar3 = 0;
      *param_3 = iVar1;
      goto LAB_1010e9a40;
    }
    *param_3 = 0;
    pcVar5 = "read function returned funny value";
  }
  FUN_1010d9258(lVar7,pcVar5);
  uVar3 = 0x1a;
LAB_1010e9a40:
  if (lVar9 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3);
  }
  return;
}




undefined8 FUN_1010e9a6c(long *param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *(undefined1 *)((long)param_1 + 0x2d7) = 0;
  *(uint *)(lVar4 + 0x1e4) = *(uint *)(lVar4 + 0x1e4) & 0xfffffffd;
  if (*(long *)(lVar4 + 0x290) != 0) {
    return 0;
  }
  if (*(int *)(lVar4 + 0x420) == 3) {
LAB_1010e9b24:
    uVar2 = 0;
  }
  else {
    if (*(code **)(lVar4 + 0x298) == (code *)0x0) {
      if (*(code **)(lVar4 + 0x2f0) == (code *)0x0) {
        if ((*(undefined **)(lVar4 + 0x2c8) == PTR__fread_101444260) &&
           (iVar1 = _fseek(*(FILE **)(lVar4 + 0x248),0,0), iVar1 != -1)) {
          return 0;
        }
        pcVar3 = "necessary data rewind wasn\'t possible";
      }
      else {
        iVar1 = (**(code **)(lVar4 + 0x2f0))(lVar4,1,*(undefined8 *)(lVar4 + 0x350));
        FUN_1010d909c(lVar4,"the ioctl callback returned %d\n");
        if (iVar1 == 0) goto LAB_1010e9b24;
        pcVar3 = "ioctl callback returned error %d";
      }
    }
    else {
      iVar1 = (**(code **)(lVar4 + 0x298))(*(undefined8 *)(lVar4 + 0x328),0,0);
      if (iVar1 == 0) {
        return 0;
      }
      pcVar3 = "seek callback returned error %d";
    }
    FUN_1010d9258(lVar4,pcVar3);
    uVar2 = 0x41;
  }
  return uVar2;
}




undefined8 FUN_1010e9b84(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  
  if ((param_2 == 0) || (lVar2 = *(long *)(param_1 + 0x418), lVar2 == 0)) {
    uVar3 = 1;
  }
  else {
    if (*(int *)(param_1 + 0x410) == 2) {
      if (param_2 < lVar2) {
        return 1;
      }
      pcVar1 = "The requested document is not old enough\n";
    }
    else {
      if (lVar2 < param_2) {
        return 1;
      }
      pcVar1 = "The requested document is not new enough\n";
    }
    FUN_1010d909c(param_1,pcVar1);
    *(undefined1 *)(param_1 + 0x8b40) = 1;
    uVar3 = 0;
  }
  return uVar3;
}




undefined8 FUN_1010e9c00(long *param_1,char *param_2)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  long *plVar19;
  long lVar20;
  undefined1 auVar21 [16];
  char local_6d;
  uint local_6c;
  long local_68;
  
  lVar16 = *param_1;
  uVar5 = *(uint *)(param_1 + 199);
  *(undefined4 *)(param_1 + 199) = 0;
  if ((*(uint *)(lVar16 + 0x1e4) & 0x15) == 1) {
    uVar4 = (undefined4)param_1[100];
  }
  else {
    uVar4 = 0xffffffff;
  }
  if ((*(uint *)(lVar16 + 0x1e4) & 0x2a) == 2) {
    uVar11 = *(undefined4 *)((long)param_1 + 0x324);
  }
  else {
    uVar11 = 0xffffffff;
  }
  if (uVar5 == 0) {
    uVar5 = FUN_1010f37c8(uVar4,0xffffffff,uVar11,0);
  }
  if (uVar5 == 4) {
    FUN_1010d9258(lVar16,"select/poll returned error");
    return 0x37;
  }
  plVar1 = (long *)(lVar16 + 0x78);
  uVar12 = *(uint *)(lVar16 + 0x1e4);
  if (((uVar12 & 1) == 0) || (((uVar5 & 1) == 0 && (*(char *)((long)param_1 + 0x2dd) == '\0')))) {
    uVar17 = 0;
  }
  else {
    uVar17 = 0;
    lVar20 = 0;
    local_6c = local_6c & 0xffffff00;
    *param_2 = '\0';
    do {
      lVar9 = 0x4000;
      if (*(long *)(lVar16 + 0x4b0) != 0) {
        lVar9 = *(long *)(lVar16 + 0x4b0);
      }
      lVar14 = lVar9;
      if ((*(long *)(lVar16 + 0x78) == -1) || (*(char *)(lVar16 + 0xd8) != '\0')) {
LAB_1010e9d30:
        uVar7 = FUN_1010d9ad8(param_1,(int)param_1[100],*(undefined8 *)(lVar16 + 0x1d0),lVar14,
                              &local_68);
        if ((int)uVar7 == 0x51) break;
        if ((int)uVar7 != 0) goto LAB_1010ea63c;
        lVar13 = *(long *)(lVar16 + 0x98);
      }
      else {
        lVar13 = *(long *)(lVar16 + 0x98);
        lVar14 = *(long *)(lVar16 + 0x78) - lVar13;
        if (lVar9 <= lVar14) {
          lVar14 = lVar9;
        }
        if (lVar14 != 0) goto LAB_1010e9d30;
        local_68 = 0;
      }
      if (((lVar13 == 0) && (*(long *)(lVar16 + 0xa0) == 0)) &&
         (FUN_1010d231c(lVar16,7), *(int *)(lVar16 + 0x140) != 0)) {
        auVar21 = FUN_1010d0e58();
        *(undefined1 (*) [16])(lVar16 + 0x130) = auVar21;
      }
      uVar17 = 1;
      if (local_68 == 0) {
        bVar3 = *(long *)(lVar16 + 0x1c8) == 0;
      }
      else {
        bVar3 = false;
      }
      if ((0 < local_68) || (bVar3)) {
        *(undefined1 *)(*(long *)(lVar16 + 0x1d0) + local_68) = 0;
      }
      else if (local_68 < 1) {
        *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) & 0xfffffffe;
        break;
      }
      *(undefined8 *)(lVar16 + 0xf8) = *(undefined8 *)(lVar16 + 0x1d0);
      if (*(code **)(param_1[0x61] + 0x68) != (code *)0x0) {
        uVar7 = (**(code **)(param_1[0x61] + 0x68))(lVar16,param_1,&local_68,&local_6c);
        if ((int)uVar7 != 0) goto LAB_1010ea63c;
        if ((char)local_6c != '\0') break;
      }
      if (*(char *)(lVar16 + 0xd8) != '\0') {
        local_6d = '\0';
        uVar7 = FUN_1010d7eac(lVar16,param_1,&local_68,&local_6d);
        if ((int)uVar7 != 0) goto LAB_1010ea63c;
        if (((*(code **)(param_1[0x61] + 0x68) != (code *)0x0) && (*(long *)(lVar16 + 0x88) < 1)) &&
           (0 < local_68)) {
          uVar7 = (**(code **)(param_1[0x61] + 0x68))(lVar16,param_1,&local_68,&local_6c);
          if ((int)uVar7 != 0) goto LAB_1010ea63c;
          if ((char)local_6c != '\0') break;
        }
        if (local_6d != '\0') {
          if (0 < local_68) {
            iVar6 = FUN_1010f0394(*(undefined8 *)(*param_1 + 0x60));
            if (iVar6 == 0) {
              FUN_1010d909c(lVar16,
                            "Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)\n"
                           );
            }
            else {
              FUN_1010d909c(lVar16,"Rewinding stream by : %zd bytes on url %s (zero-length body)\n")
              ;
              param_1[0x73] = param_1[0x73] - local_68;
              *(undefined1 *)((long)param_1 + 0x2dd) = 1;
            }
          }
          break;
        }
      }
      if (((*(long *)(lVar16 + 0xf8) != 0) && (*(char *)(lVar16 + 0xd8) == '\0')) &&
         ((bool)(bVar3 | 0 < local_68))) {
        if ((!bVar3 && *(long *)(lVar16 + 0x1c8) == 0) &&
           ((*(uint *)(param_1[0x61] + 0x78) & 0x40003) != 0)) {
          if (*(long *)(lVar16 + 0x1f8) != 0) {
            if ((char)param_1[0x59] != '\0') {
              uVar7 = 0;
              *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) & 0xfffffffe;
              *param_2 = '\x01';
              goto LAB_1010ea63c;
            }
            *(undefined1 *)(lVar16 + 0x1e9) = 1;
            FUN_1010d909c(lVar16,"Ignoring the response-body\n");
          }
          if (((*(long *)(lVar16 + 0x8ac8) != 0) && (*(char *)(lVar16 + 0x118) == '\0')) &&
             ((*(int *)(lVar16 + 0x420) == 1 && (*(char *)(lVar16 + 0x1e9) == '\0')))) {
            if (*plVar1 == *(long *)(lVar16 + 0x8ac8)) {
              FUN_1010d909c(lVar16,"The entire document is already downloaded");
              uVar7 = 0;
              *(undefined1 *)(param_1 + 0x59) = 1;
              *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) & 0xfffffffe;
              *param_2 = '\x01';
            }
            else {
              FUN_1010d9258(lVar16,
                            "HTTP server doesn\'t seem to support byte ranges. Cannot resume.");
              uVar7 = 0x21;
            }
            goto LAB_1010ea63c;
          }
          if (((*(int *)(lVar16 + 0x410) != 0) && (*(long *)(lVar16 + 0x8ac0) == 0)) &&
             (uVar8 = FUN_1010e9b84(lVar16,*(undefined8 *)(lVar16 + 0x1c0)), (uVar8 & 1) == 0)) {
            *param_2 = '\x01';
            *(undefined4 *)(lVar16 + 0x8b28) = 0x130;
            FUN_1010d909c(lVar16,"Simulate a HTTP 304 response!\n");
            uVar7 = 0;
            *(undefined1 *)(param_1 + 0x59) = 1;
            goto LAB_1010ea63c;
          }
        }
        *(long *)(lVar16 + 0x1c8) = *(long *)(lVar16 + 0x1c8) + 1;
        if ((*(char *)(lVar16 + 0x508) != '\0') &&
           ((*(int *)(lVar16 + 0xdc) == 0 ||
            (FUN_1010d9130(lVar16,3,*(undefined8 *)(lVar16 + 0x8f8),*(undefined8 *)(lVar16 + 0xf0),
                           param_1), *(int *)(lVar16 + 0xdc) == 1)))) {
          FUN_1010d9130(lVar16,3,*(undefined8 *)(lVar16 + 0xf8),local_68,param_1);
        }
        if (*(char *)(lVar16 + 0x210) != '\0') {
          iVar6 = FUN_1010ed6b8(param_1,*(undefined8 *)(lVar16 + 0xf8),local_68,&local_68);
          if (0 < iVar6) {
            if (iVar6 == 4) {
              FUN_1010d9258(lVar16,"Failed writing data");
              uVar7 = 0x17;
            }
            else {
              FUN_1010edb10();
              FUN_1010d9258(lVar16,"%s in chunked-encoding");
              uVar7 = 0x38;
            }
            goto LAB_1010ea63c;
          }
          if (iVar6 == -1) {
            *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) & 0xfffffffe;
            lVar9 = param_1[6];
            if (lVar9 != 0) {
              FUN_1010d909c(*param_1,"Leftovers after chunking: %zu bytes\n");
              iVar6 = FUN_1010f0394(*(undefined8 *)(*param_1 + 0x60));
              if (iVar6 != 0) {
                FUN_1010d909c(*param_1,"Rewinding %zu bytes\n");
                param_1[0x73] = param_1[0x73] - lVar9;
                *(undefined1 *)((long)param_1 + 0x2dd) = 1;
              }
            }
          }
        }
        if ((*(int *)(lVar16 + 0xdc) != 0) && (*(char *)(lVar16 + 0x1e9) == '\0')) {
          *(long *)(lVar16 + 0x98) = *(long *)(lVar16 + 0x98) + *(long *)(lVar16 + 0xf0);
        }
        lVar9 = *(long *)(lVar16 + 0x88);
        if (lVar9 == -1) {
          lVar14 = *(long *)(lVar16 + 0x98);
        }
        else {
          lVar14 = *(long *)(lVar16 + 0x98);
          lVar13 = (local_68 + lVar14) - lVar9;
          if (lVar9 <= local_68 + lVar14) {
            if ((lVar13 != 0) && (*(char *)(lVar16 + 0x1e9) == '\0')) {
              iVar6 = FUN_1010f0394(*(undefined8 *)(*param_1 + 0x60));
              if (iVar6 == 0) {
                FUN_1010d909c(lVar16,
                              "Excess found in a non pipelined read: excess = %zu, size = %ld, maxdownload = %ld, bytecount = %ld\n"
                             );
              }
              else {
                FUN_1010d909c(lVar16,
                              "Rewinding stream by : %zu bytes on url %s (size = %ld, maxdownload = %ld, bytecount = %ld, nread = %zd)\n"
                             );
                param_1[0x73] = param_1[0x73] - lVar13;
                *(undefined1 *)((long)param_1 + 0x2dd) = 1;
              }
            }
            lVar14 = *(long *)(lVar16 + 0x98);
            lVar20 = *(long *)(lVar16 + 0x88) - lVar14;
            local_68 = 0;
            if (-1 < lVar20) {
              local_68 = lVar20;
            }
            *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) & 0xfffffffe;
            lVar20 = lVar13;
          }
        }
        *(long *)(lVar16 + 0x98) = local_68 + lVar14;
        FUN_1010d2460(lVar16);
        if (*(char *)(lVar16 + 0x210) == '\0') {
          uVar12 = *(uint *)(lVar16 + 0xdc);
          if ((local_68 != 0) || (bVar3 || uVar12 != 0)) {
            if (uVar12 != 0) {
              if (*(char *)(lVar16 + 0x1e9) == '\0') {
                lVar14 = *(long *)(lVar16 + 0x88);
                lVar9 = *(long *)(lVar16 + 0xf0);
                if ((lVar14 != -1) && (lVar14 < lVar9)) {
                  lVar9 = lVar14;
                }
                uVar7 = FUN_1010d98ec(param_1,1,*(undefined8 *)(lVar16 + 0x8f8),lVar9);
                if ((int)uVar7 != 0) goto LAB_1010ea63c;
                uVar12 = *(uint *)(lVar16 + 0xdc);
              }
              if (uVar12 < 2) goto LAB_1010ea19c;
              goto LAB_1010ea200;
            }
LAB_1010ea19c:
            if (*(char *)(*param_1 + 0x531) == '\0') {
              iVar6 = *(int *)(lVar16 + 0x148);
              if (iVar6 == 2) {
                if (*(char *)(lVar16 + 0x1e9) == '\0') {
                  uVar7 = FUN_1010f2454(param_1,plVar1,local_68);
                  goto LAB_1010ea248;
                }
              }
              else {
                if (iVar6 != 1) {
                  if (iVar6 == 0) goto LAB_1010ea1f8;
                  FUN_1010d9258(lVar16,
                                "Unrecognized content encoding type. libcurl understands `identity\', `deflate\' and `gzip\' content encodings."
                               );
                  *(undefined4 *)(lVar16 + 0xdc) = 0;
                  uVar7 = 0x3d;
                  goto LAB_1010ea63c;
                }
                if (*(char *)(lVar16 + 0x1e9) == '\0') {
                  uVar7 = FUN_1010f2158(param_1,plVar1,local_68);
                  goto LAB_1010ea248;
                }
              }
            }
            else {
LAB_1010ea1f8:
              if (*(char *)(lVar16 + 0x1e9) == '\0') {
                if ((*(byte *)(param_1[0x61] + 0x79) & 0xc0) == 0) {
                  uVar7 = FUN_1010d98ec(param_1,1,*(undefined8 *)(lVar16 + 0xf8),local_68);
                }
                else {
                  uVar7 = FUN_1010fa440(param_1,*(undefined8 *)(lVar16 + 0xf8),local_68);
                }
LAB_1010ea248:
                *(undefined4 *)(lVar16 + 0xdc) = 0;
                if ((int)uVar7 == 0) goto LAB_1010ea250;
                goto LAB_1010ea63c;
              }
            }
LAB_1010ea200:
            *(undefined4 *)(lVar16 + 0xdc) = 0;
          }
        }
      }
LAB_1010ea250:
      lVar9 = param_1[0x61];
      if (((lVar20 != 0) && (pcVar15 = *(code **)(lVar9 + 0x68), pcVar15 != (code *)0x0)) &&
         (*(char *)((long)param_1 + 0x2dd) == '\0')) {
        *(long *)(lVar16 + 0xf8) = *(long *)(lVar16 + 0xf8) + local_68;
        local_68 = lVar20;
        uVar7 = (*pcVar15)(lVar16,param_1,&local_68,&local_6c);
        if ((int)uVar7 != 0) goto LAB_1010ea63c;
        if ((char)local_6c != '\0') {
          *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) | 1;
        }
        break;
      }
      if (bVar3) {
        *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) & 0xfffffffe;
      }
    } while (((*(byte *)(lVar9 + 0x78) & 0x30) != 0) ||
            (uVar8 = thunk_FUN_101106684(param_1,0), (uVar8 & 1) != 0));
    if (((*(uint *)(lVar16 + 0x1e4) & 3) == 2) && ((char)param_1[0x59] != '\0')) {
      FUN_1010d909c(lVar16,"we are done reading and this is set to close, stop send\n");
      uVar7 = 0;
      *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) & 0xfffffffd;
    }
    else {
      uVar7 = 0;
    }
LAB_1010ea63c:
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (*param_2 != '\0') {
      return 0;
    }
    uVar12 = *(uint *)(lVar16 + 0x1e4);
  }
  uVar18 = uVar17;
  if (((uVar5 & uVar12) >> 1 & 1) != 0) {
    if ((*(long *)(lVar16 + 0x98) == 0) && (*(long *)(lVar16 + 0xa0) == 0)) {
      FUN_1010d231c(lVar16,7);
    }
    uVar18 = uVar17 | 2;
    if (*(long *)(lVar16 + 0x200) == 0) {
      *(undefined8 *)(lVar16 + 0x208) = *(undefined8 *)(lVar16 + 0x1d8);
      if (*(char *)(lVar16 + 0x1e8) == '\0') {
        if ((*(int *)(lVar16 + 0x140) != 2) || (*(int *)(*(long *)(lVar16 + 0x218) + 0x78) != 2)) {
          if ((*(uint *)(param_1[0x61] + 0x78) & 0x40003) == 0) {
            bVar3 = false;
          }
          else {
            bVar3 = *(int *)(*(long *)(lVar16 + 0x218) + 0x78) == 1;
          }
          uVar7 = FUN_1010e9874(param_1,0x4000,&local_6c);
          if ((int)uVar7 != 0) {
            return uVar7;
          }
          lVar20 = (long)(int)local_6c;
          if (local_6c == 0) goto LAB_1010ea5dc;
          if (0 < (int)local_6c) {
            *(long *)(lVar16 + 0x200) = lVar20;
            if ((!bVar3) &&
               ((*(char *)(lVar16 + 0x4f3) != '\0' || (*(char *)(lVar16 + 0x3ca) != '\0')))) {
              plVar19 = (long *)(lVar16 + 0x8950);
              if (*plVar19 == 0) {
                lVar9 = (*(code *)PTR__malloc_101873620)(0x8000);
                *plVar19 = lVar9;
                if (lVar9 == 0) {
                  FUN_1010d9258(lVar16,"Failed to alloc scratch buffer!");
                  return 0x1b;
                }
              }
              lVar9 = 0;
              lVar14 = 0;
              do {
                cVar2 = *(char *)(*(long *)(lVar16 + 0x208) + lVar9);
                if (cVar2 == '\n') {
                  lVar13 = lVar14 + 1;
                  *(undefined1 *)(*plVar19 + lVar14) = 0xd;
                  *(undefined1 *)(*plVar19 + lVar13) = 10;
                  lVar14 = lVar13;
                  if (*(char *)(lVar16 + 0x3ca) == '\0') {
                    *(long *)(lVar16 + 0x8ae8) = *(long *)(lVar16 + 0x8ae8) + 1;
                  }
                }
                else {
                  *(char *)(*plVar19 + lVar14) = cVar2;
                }
                lVar9 = lVar9 + 1;
                lVar14 = lVar14 + 1;
              } while (lVar20 != lVar9);
              if (lVar14 != lVar20) {
                *(long *)(lVar16 + 0x208) = *plVar19;
                *(long *)(lVar16 + 0x200) = lVar14;
                lVar20 = lVar14;
              }
            }
            if (((*(byte *)(param_1[0x61] + 0x7a) & 3) != 0) &&
               (uVar7 = FUN_1010fc340(param_1,lVar20), (int)uVar7 != 0)) {
              return uVar7;
            }
            goto LAB_1010ea2d0;
          }
          uVar5 = *(uint *)(lVar16 + 0x1e4);
          goto LAB_1010ea684;
        }
        *(undefined4 *)(lVar16 + 0x140) = 1;
        *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) & 0xfffffffd;
        auVar21 = FUN_1010d0e58();
        *(undefined1 (*) [16])(lVar16 + 0x130) = auVar21;
        FUN_1010efbdc(lVar16,*(undefined8 *)(lVar16 + 0x730));
        uVar18 = uVar17;
      }
      else {
LAB_1010ea5dc:
        uVar5 = *(uint *)(lVar16 + 0x1e4);
        if ((uVar5 >> 5 & 1) == 0) {
LAB_1010ea684:
          *(uint *)(lVar16 + 0x1e4) = uVar5 & 0xfffffffd;
          if ((*(char *)((long)param_1 + 0x2d7) != '\0') &&
             (uVar7 = FUN_1010e9a6c(param_1), (int)uVar7 != 0)) {
            return uVar7;
          }
        }
      }
    }
    else {
LAB_1010ea2d0:
      plVar19 = (long *)(lVar16 + 0x208);
      uVar7 = FUN_1010d942c(param_1,*(undefined4 *)((long)param_1 + 0x324),*plVar19,
                            *(undefined8 *)(lVar16 + 0x200),&local_68);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (*(char *)(lVar16 + 0x508) != '\0') {
        FUN_1010d9130(lVar16,4,*plVar19,local_68,param_1);
      }
      lVar20 = *(long *)(lVar16 + 0xa0) + local_68;
      *(long *)(lVar16 + 0xa0) = lVar20;
      if (lVar20 == *(long *)(lVar16 + 0x8ae8)) {
        *(undefined1 *)(lVar16 + 0x1e8) = 1;
        FUN_1010d909c(lVar16,"We are completely uploaded and fine\n");
      }
      lVar20 = *(long *)(lVar16 + 0x200) - local_68;
      if (lVar20 == 0) {
        *plVar19 = *(long *)(lVar16 + 0x1d8);
        *(undefined8 *)(lVar16 + 0x200) = 0;
        if (*(char *)(lVar16 + 0x1e8) != '\0') {
          *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) & 0xfffffffd;
        }
      }
      else {
        *(long *)(lVar16 + 0x200) = lVar20;
        *plVar19 = *plVar19 + local_68;
      }
      FUN_1010d2468(lVar16,*(undefined8 *)(lVar16 + 0xa0));
    }
  }
  auVar21 = FUN_1010d0e58();
  *(undefined1 (*) [16])(lVar16 + 200) = auVar21;
  if (uVar18 == 0) {
    if ((*(int *)(lVar16 + 0x140) == 1) &&
       (lVar20 = FUN_1010d0e80(*(undefined8 *)(lVar16 + 200),*(undefined8 *)(lVar16 + 0xd0),
                               *(undefined8 *)(lVar16 + 0x130),*(undefined8 *)(lVar16 + 0x138)),
       *(long *)(lVar16 + 0x730) <= lVar20)) {
      *(undefined4 *)(lVar16 + 0x140) = 0;
      *(uint *)(lVar16 + 0x1e4) = *(uint *)(lVar16 + 0x1e4) | 2;
      FUN_1010d909c(lVar16,"Done waiting for 100-continue\n");
    }
  }
  else {
    if (*(undefined8 **)(lVar16 + 0x80) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar16 + 0x80) = *(undefined8 *)(lVar16 + 0x98);
    }
    if (*(undefined8 **)(lVar16 + 0x90) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar16 + 0x90) = *(undefined8 *)(lVar16 + 0xa0);
    }
  }
  iVar6 = FUN_1010d1dac(param_1);
  if (iVar6 == 0) {
    uVar7 = FUN_1010e5e20(lVar16,*(undefined8 *)(lVar16 + 200),*(undefined8 *)(lVar16 + 0xd0));
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    if (*(int *)(lVar16 + 0x1e4) == 0) {
      if (*(char *)(lVar16 + 0x4ff) == '\0') {
        lVar20 = *plVar1;
        if ((((lVar20 != -1) && (lVar20 != *(long *)(lVar16 + 0x98))) &&
            (*(long *)(lVar16 + 0x98) != *(long *)(lVar16 + 0x8aa0) + lVar20)) &&
           (*(long *)(lVar16 + 0x1f8) == 0)) {
          pcVar10 = "transfer closed with %ld bytes remaining to read";
LAB_1010ea8d4:
          FUN_1010d9258(lVar16,pcVar10);
          return 0x12;
        }
        if ((*(char *)(lVar16 + 0x210) != '\0') && ((int)param_1[4] != 4)) {
          pcVar10 = "transfer closed with outstanding read data remaining";
          goto LAB_1010ea8d4;
        }
      }
      iVar6 = FUN_1010d1dac(param_1);
      if (iVar6 != 0) goto LAB_1010ea7ec;
    }
    else {
      lVar20 = FUN_1010edb38(lVar16,(undefined1 (*) [16])(lVar16 + 200),0);
      if (lVar20 < 0) {
        lVar20 = *(long *)(lVar16 + 0x78);
        FUN_1010d0e80(*(undefined8 *)(lVar16 + 200),*(undefined8 *)(lVar16 + 0xd0),
                      *(undefined8 *)(lVar16 + 0x808),*(undefined8 *)(lVar16 + 0x810));
        if (lVar20 == -1) {
          pcVar10 = "Operation timed out after %ld milliseconds with %ld bytes received";
        }
        else {
          pcVar10 = "Operation timed out after %ld milliseconds with %ld out of %ld bytes received";
        }
        FUN_1010d9258(lVar16,pcVar10);
        return 0x1c;
      }
    }
    uVar7 = 0;
    *param_2 = (*(uint *)(lVar16 + 0x1e4) & 0x33) == 0;
  }
  else {
LAB_1010ea7ec:
    uVar7 = 0x2a;
  }
  return uVar7;
}




ulong FUN_1010ea96c(long *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  
  if (*(code **)(param_1[0x61] + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001010ea980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1[0x61] + 0x58))(param_1);
    return uVar2;
  }
  if (1 < param_3) {
    lVar4 = *param_1;
    uVar3 = *(uint *)(lVar4 + 0x1e4);
    bVar1 = (uVar3 & 0x15) == 1;
    if (bVar1) {
      *param_2 = (int)param_1[100];
      uVar3 = *(uint *)(lVar4 + 0x1e4);
    }
    uVar2 = (ulong)bVar1;
    if ((uVar3 & 0x2a) == 2) {
      if ((bVar1 == 0) || ((int)param_1[100] != *(int *)((long)param_1 + 0x324))) {
        param_2[(uint)bVar1] = *(int *)((long)param_1 + 0x324);
        uVar3 = bVar1 | 0x10;
      }
      else {
        uVar3 = 0x10;
      }
      uVar2 = (ulong)(1 << (ulong)uVar3 | (uint)bVar1);
    }
    return uVar2;
  }
  return 0;
}




ulong FUN_1010eaa08(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  lVar1 = param_1 + (param_1 >> 10);
  lVar2 = param_1;
  if (param_2 < param_1 - (param_1 >> 10)) {
    lVar2 = param_1 + (param_1 >> 6);
  }
  if (lVar1 < param_2) {
    lVar2 = param_1 - (param_1 >> 6);
  }
  uVar3 = (ulong)(lVar1 < param_2);
  uVar4 = 0;
  if (lVar2 != 0) {
    uVar4 = (long)(param_3 * 8000) / lVar2;
  }
  if ((long)uVar3 <= (long)uVar4) {
    uVar3 = uVar4;
  }
  uVar4 = 0x7fffffff;
  if ((long)uVar3 < 0x80000000) {
    uVar4 = uVar3;
  }
  return uVar4;
}




undefined8 FUN_1010eaa6c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 extraout_x0;
  
  if (*(long *)(param_1 + 0x738) == 0) {
    FUN_1010d9258(param_1,"No URL set!");
    uVar2 = 3;
  }
  else {
    uVar2 = FUN_101105624(param_1,*(undefined8 *)(param_1 + 0x480));
    if ((int)uVar2 == 0) {
      *(undefined8 *)(param_1 + 0x278) = 0;
      *(undefined1 *)(param_1 + 0x8918) = 0;
      *(undefined1 *)(param_1 + 0x8958) = 0;
      *(undefined4 *)(param_1 + 0x8a94) = 0;
      *(undefined1 *)(param_1 + 0x8a30) = 0;
      *(ulong *)(param_1 + 0x89f0) = *(ulong *)(param_1 + 0x268);
      *(ulong *)(param_1 + 0x8a10) = *(ulong *)(param_1 + 0x270);
      plVar1 = (long *)(param_1 + 0x8b78);
      if (*plVar1 != 0) {
        (*(code *)PTR__free_101873628)();
        *plVar1 = 0;
      }
      *plVar1 = 0;
      if (*(long *)(param_1 + 0x758) != 0) {
        FUN_1010d32c4(param_1);
      }
      if ((*(long *)(param_1 + 0x760) == 0) || (uVar2 = FUN_1010d1b78(param_1), (int)uVar2 == 0)) {
        *(undefined1 *)(param_1 + 0x8968) = 1;
        if (*(char *)(param_1 + 0x51c) == '\0') {
          _signal(0xd);
          *(undefined8 *)(param_1 + 0x8960) = extraout_x0;
        }
        FUN_1010e91ec(param_1);
        FUN_1010d2424(param_1);
        if (*(long *)(param_1 + 0x358) != 0) {
          FUN_1010efbdc(param_1);
        }
        if (*(long *)(param_1 + 0x360) != 0) {
          FUN_1010efbdc(param_1);
        }
        uVar2 = 0;
        *(ulong *)(param_1 + 0x89f8) = *(ulong *)(param_1 + 0x89f8) & *(ulong *)(param_1 + 0x89f0);
        *(ulong *)(param_1 + 0x8a18) = *(ulong *)(param_1 + 0x8a18) & *(ulong *)(param_1 + 0x8a10);
      }
    }
  }
  return uVar2;
}




undefined8 FUN_1010eabd4(long param_1)

{
  if (*(char *)(param_1 + 0x51c) == '\0') {
    _signal(0xd);
  }
  return 0;
}




void FUN_1010eb1c4(char *param_1,char *param_2)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  
  cVar3 = *param_2;
  if (cVar3 != '\0') {
    bVar2 = true;
    pcVar1 = param_1;
    do {
      param_2 = param_2 + 1;
      if (cVar3 == ' ') {
        if (bVar2) {
          pcVar1[0] = '%';
          pcVar1[1] = '2';
          pcVar1[2] = '0';
          param_1 = pcVar1 + 3;
          bVar2 = true;
        }
        else {
          bVar2 = false;
          *pcVar1 = '+';
          param_1 = pcVar1 + 1;
        }
      }
      else {
        if (cVar3 == '?') {
          bVar2 = false;
        }
        param_1 = pcVar1 + 1;
        *pcVar1 = cVar3;
      }
      cVar3 = *param_2;
      pcVar1 = param_1;
    } while (cVar3 != '\0');
  }
  *param_1 = '\0';
  return;
}




undefined8 FUN_1010eb234(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_3a;
  char local_39;
  undefined8 *local_38;
  
  puVar3 = (undefined8 *)*param_1;
  uVar2 = *puVar3;
  local_38 = puVar3;
  FUN_1010d909c(uVar2,"Re-used connection seems dead, get a new one\n");
  *(undefined1 *)(puVar3 + 0x59) = 1;
  uVar1 = FUN_1010e4bb0(&local_38,0,0);
  *param_1 = 0;
  if (((int)uVar1 == 0) || ((int)uVar1 == 0x37)) {
    local_3a = 1;
    uVar1 = FUN_1010e25cc(uVar2,param_1,&local_39,&local_3a);
    if ((int)uVar1 == 0) {
      if (local_39 == '\0') {
        uVar1 = 0;
      }
      else {
        uVar1 = 6;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1010eb2dc(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_2 = 0;
  if (((((*(char *)(lVar3 + 0x501) == '\0') || ((*(uint *)(param_1[0x61] + 0x78) & 0x40003) != 0))
       && (*(long *)(lVar3 + 0x98) + *(long *)(lVar3 + 0xa8) == 0)) &&
      ((*(char *)((long)param_1 + 0x2c9) != '\0' && (*(char *)(lVar3 + 0x4ff) == '\0')))) &&
     (*(int *)(lVar3 + 0x6cc) != 0xb)) {
    FUN_1010d909c(*param_1,"Connection died, retrying a fresh connect\n");
    lVar1 = (*(code *)PTR__strdup_101873638)(*(undefined8 *)(*param_1 + 0x738));
    *param_2 = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
    *(undefined1 *)(param_1 + 0x59) = 1;
    *(undefined1 *)((long)param_1 + 0x2d4) = 1;
    if (((*(byte *)(param_1[0x61] + 0x78) & 3) != 0) &&
       (*(long *)(*(long *)(lVar3 + 0x218) + 0x30) != 0)) {
      uVar2 = FUN_1010e9a6c(param_1);
      return uVar2;
    }
  }
  return 0;
}




void FUN_1010eb3d0(long *param_1,int param_2,long param_3,byte param_4,undefined8 param_5,
                  int param_6,undefined8 param_7)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *param_1;
  if (param_2 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)((long)param_1 + (long)param_2 * 4 + 0x1d0);
  }
  *(undefined4 *)(param_1 + 100) = uVar1;
  if (param_6 == -1) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)((long)param_1 + (long)param_6 * 4 + 0x1d0);
  }
  *(undefined4 *)((long)param_1 + 0x324) = uVar1;
  *(byte *)(lVar2 + 0x212) = param_4;
  *(long *)(lVar2 + 0x78) = param_3;
  *(undefined8 *)(lVar2 + 0x80) = param_5;
  *(undefined8 *)(lVar2 + 0x90) = param_7;
  if (((param_4 & 1) != 0) ||
     (((*(undefined1 *)(lVar2 + 0xd8) = 0, 0 < param_3 &&
       (FUN_1010d22cc(lVar2,param_3), *(char *)(lVar2 + 0x212) != '\0')) ||
      (*(char *)(lVar2 + 0x4ff) == '\0')))) {
    if ((int)param_1[100] != -1) {
      *(uint *)(lVar2 + 0x1e4) = *(uint *)(lVar2 + 0x1e4) | 1;
    }
    if (*(int *)((long)param_1 + 0x324) != -1) {
      if (*(char *)(lVar2 + 0x8a98) != '\0') {
        if (((*(byte *)(param_1[0x61] + 0x78) & 3) != 0) &&
           (*(int *)(*(long *)(lVar2 + 0x218) + 0x78) == 2)) {
          *(undefined4 *)(lVar2 + 0x140) = 1;
          auVar3 = FUN_1010d0e58();
          *(undefined1 (*) [16])(lVar2 + 0x130) = auVar3;
          FUN_1010efbdc(lVar2,*(undefined8 *)(lVar2 + 0x730));
          return;
        }
        *(undefined4 *)(lVar2 + 0x140) = 2;
      }
      *(uint *)(lVar2 + 0x1e4) = *(uint *)(lVar2 + 0x1e4) | 2;
    }
  }
  return;
}




bool FUN_1010eb4e8(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _strcasecmp(param_1,param_2);
  return iVar1 == 0;
}




bool FUN_1010eb504(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = _strncasecmp(param_1,param_2,param_3);
  return iVar1 == 0;
}




undefined8 FUN_1010eb520(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = DAT_101ea5f98 + 1;
  if (DAT_101ea5f98 == 0) {
    PTR__malloc_101873620 = PTR__malloc_101444370;
    PTR__free_101873628 = PTR__free_101444268;
    PTR__realloc_101873630 = PTR__realloc_1014443c8;
    PTR__strdup_101873638 = PTR__strdup_1014443d0;
    PTR__calloc_101873640 = PTR__calloc_101444248;
    DAT_101ea5f98 = iVar1;
    if (((param_1 & 1) == 0) || (iVar1 = FUN_101105124(), iVar1 != 0)) {
      if (((uint)param_1 >> 2 & 1) != 0) {
        DAT_101dc1cb4 = 1;
      }
      uVar2 = 0;
      DAT_101ea5fa0 = param_1;
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 0;
    DAT_101ea5f98 = iVar1;
  }
  return uVar2;
}




void FUN_1010eb5dc(void)

{
  if ((DAT_101ea5f98 != 0) && (DAT_101ea5f98 = DAT_101ea5f98 + -1, DAT_101ea5f98 == 0)) {
    FUN_1010d1390();
    if ((DAT_101ea5fa0 & 1) != 0) {
      FUN_101105140();
    }
    DAT_101ea5fa0 = 0;
  }
  return;
}




undefined8 FUN_1010eb624(void)

{
  int iVar1;
  undefined8 local_18;
  
  if (((DAT_101ea5f98 == 0) && (iVar1 = FUN_1010eb520(3), iVar1 != 0)) ||
     (iVar1 = FUN_1010deaac(&local_18), iVar1 != 0)) {
    local_18 = 0;
  }
  return local_18;
}




undefined8 FUN_1010eb66c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    uVar1 = FUN_1010deb88(param_1,param_2,&stack0x00000000);
  }
  return uVar1;
}




undefined4 FUN_1010eb6a0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auStack_5c [4];
  int local_58;
  int local_54;
  
  if (param_1 == 0) {
    uVar3 = 0x2b;
  }
  else if (*(long *)(param_1 + 0x60) == 0) {
    lVar4 = *(long *)(param_1 + 0x68);
    if (lVar4 == 0) {
      lVar4 = FUN_1010ef910(1,3);
      if (lVar4 == 0) {
        return 0x1b;
      }
      *(long *)(param_1 + 0x68) = lVar4;
    }
    FUN_1010f1c00(lVar4,6);
    iVar1 = FUN_1010efa70(lVar4,param_1);
    if (iVar1 == 0) {
      *(long *)(param_1 + 0x60) = lVar4;
      uVar6 = 0;
      do {
        local_54 = 0;
        auVar7 = FUN_1010d0e58();
        iVar1 = FUN_1010f04c4(lVar4,0,0,1000,&local_58);
        uVar5 = uVar6;
        if (iVar1 == 0) {
          if (local_58 == -1) {
            uVar3 = 0x38;
            goto LAB_1010eb838;
          }
          if (local_58 == 0) {
            auVar8 = FUN_1010d0e58();
            lVar2 = FUN_1010d0e80(auVar8._0_8_,auVar8._8_8_,auVar7._0_8_,auVar7._8_8_);
            if (10 < lVar2) goto LAB_1010eb7d8;
            uVar5 = uVar6 + 1;
            if (1 < (int)uVar6) {
              iVar1 = 1 << (ulong)(uVar6 & 0x1f);
              if (9 < (int)uVar5) {
                iVar1 = 1000;
              }
              FUN_1010f370c(iVar1);
            }
          }
          else {
LAB_1010eb7d8:
            uVar5 = 0;
          }
          iVar1 = FUN_1010f0880(lVar4,&local_54);
        }
        if ((local_54 == 0 && iVar1 == 0) && (lVar2 = FUN_1010f1ac0(lVar4,auStack_5c), lVar2 != 0))
        {
          if (iVar1 == 0) {
            uVar3 = *(undefined4 *)(lVar2 + 0x10);
            goto LAB_1010eb838;
          }
          break;
        }
        uVar6 = uVar5;
      } while (iVar1 == 0);
      uVar3 = 0x1b;
      if (iVar1 != 3) {
        uVar3 = 0x2b;
      }
LAB_1010eb838:
      FUN_1010efe70(lVar4,param_1);
    }
    else {
      FUN_1010f19a0(lVar4);
      uVar3 = 0x1b;
      if (iVar1 != 3) {
        uVar3 = 2;
      }
    }
  }
  else {
    FUN_1010d9258(param_1,"easy handle already used in multi handle");
    uVar3 = 2;
  }
  return uVar3;
}




void FUN_1010eb86c(long param_1)

{
  if (param_1 != 0) {
    FUN_1010de718();
    return;
  }
  return;
}




void FUN_1010eb878(void)

{
  FUN_1010e92a8();
  return;
}




undefined8 FUN_1010eb8ac(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = FUN_1010eb8c8(param_2,param_3);
    return uVar1;
  }
  return 2;
}




void * FUN_1010ec3a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(*(code *)PTR__malloc_101873620)(0x80);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    _memset(pvVar1,0,0x80);
  }
  return pvVar1;
}




void FUN_1010ec3f0(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    if (*(long *)(param_2 + 0x68) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_2 + 0x68) = 0;
    }
    (*(code *)PTR__free_101873628)(param_2);
    return;
  }
  return;
}




void FUN_1010ec448(void)

{
  (*(code *)PTR__calloc_101873640)(1,0x58);
  return;
}




void FUN_1010ec460(long *param_1)

{
  if (*param_1 != 0) {
    (*(code *)PTR__free_101873628)();
  }
  *param_1 = 0;
  return;
}




undefined4 FUN_1010ec498(long param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}




ulong FUN_1010ec4a0(char *param_1,long param_2,long param_3,long *param_4)

{
  byte *pbVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int *piVar8;
  char *pcVar9;
  void *pvVar10;
  size_t sVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  char *local_78;
  char *local_70;
  char *local_68;
  
  uVar13 = param_3 * param_2;
  piVar16 = (int *)**(undefined8 **)(*param_4 + 0x8b10);
  if (piVar16[3] == 0) {
    if (uVar13 != 0 && *piVar16 == 0) {
      iVar5 = 1;
      if ((byte)(*param_1 - 0x30U) < 10) {
        iVar5 = 2;
      }
      *piVar16 = iVar5;
    }
    if (uVar13 == 0) {
      uVar13 = 0;
    }
    else {
      uVar14 = 0;
      do {
        bVar4 = param_1[uVar14];
        uVar15 = (ulong)bVar4;
        lVar17 = *(long *)(piVar16 + 4);
        if (lVar17 == 0) {
          lVar17 = FUN_1010ec3a0();
          *(long *)(piVar16 + 4) = lVar17;
          if (lVar17 == 0) {
            piVar16[3] = 0x1b;
            return uVar13;
          }
          lVar7 = (*(code *)PTR__malloc_101873620)(0xa0);
          lVar17 = *(long *)(piVar16 + 4);
          *(long *)(lVar17 + 0x68) = lVar7;
          if (lVar7 == 0) {
            lVar17 = **(long **)(*param_4 + 0x8b10);
            if (*(long *)(lVar17 + 0x10) != 0) {
              FUN_1010ec3f0(0);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
            *(undefined4 *)(lVar17 + 0xc) = 0x1b;
            return uVar13;
          }
          *(undefined8 *)(lVar17 + 0x70) = 0xa0;
          piVar16[8] = 0;
          piVar16[9] = 0;
          piVar16[6] = 0;
        }
        else {
          lVar7 = *(long *)(lVar17 + 0x68);
        }
        uVar6 = (uint)(char)bVar4;
        lVar12 = *(long *)(lVar17 + 0x78);
        *(long *)(lVar17 + 0x78) = lVar12 + 1;
        *(byte *)(lVar7 + lVar12) = bVar4;
        if (*(long *)(lVar17 + 0x70) - 1U <= *(ulong *)(lVar17 + 0x78)) {
          lVar7 = (*(code *)PTR__realloc_101873630)
                            (*(undefined8 *)(lVar17 + 0x68),*(long *)(lVar17 + 0x70) + 0xa0);
          if (lVar7 == 0) {
            FUN_1010ec3f0(0,*(undefined8 *)(piVar16 + 4));
            piVar16[4] = 0;
            piVar16[5] = 0;
            piVar16[3] = 0x1b;
            lVar17 = **(long **)(*param_4 + 0x8b10);
            if (*(long *)(lVar17 + 0x10) != 0) {
              FUN_1010ec3f0(0);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
            *(undefined4 *)(lVar17 + 0xc) = 0x1b;
            return uVar13;
          }
          *(long *)(lVar17 + 0x68) = lVar7;
          *(long *)(lVar17 + 0x70) = *(long *)(lVar17 + 0x70) + 0xa0;
        }
        if (*piVar16 == 2) {
          switch(piVar16[1]) {
          case 0:
            uVar2 = piVar16[6] + 1;
            piVar16[6] = uVar2;
            if (uVar2 < 9) {
              sVar11 = 0xc;
              pcVar9 = "0123456789-";
LAB_1010ecb8c:
              pvVar10 = _memchr(pcVar9,uVar6,sVar11);
              if (pvVar10 == (void *)0x0) goto LAB_1010ed31c;
            }
            else {
              if ((uVar2 != 9) || (bVar4 != 0x20)) goto LAB_1010ed31c;
              piVar16[1] = 1;
              piVar16[2] = 0;
            }
            break;
          case 1:
            iVar5 = piVar16[6];
            piVar16[6] = iVar5 + 1U;
            if (piVar16[2] == 1) {
              if (bVar4 != 0x20) {
                sVar11 = 0xf;
                pcVar9 = "APM0123456789:";
                goto LAB_1010ecb8c;
              }
              *(long *)(piVar16 + 0x10) = *(long *)(piVar16 + 8);
              *(undefined1 *)
               (*(long *)(piVar16 + 8) + (ulong)(iVar5 + 1U) + *(long *)(lVar17 + 0x68) + -1) = 0;
              piVar16[1] = 2;
              piVar16[2] = 0;
              piVar16[6] = 0;
            }
            else if (piVar16[2] == 0) {
              if ((int)uVar6 < 0) {
                uVar6 = ___maskrune((uint)bVar4,0x4000);
              }
              else {
                uVar6 = *(uint *)(PTR___DefaultRuneLocale_101444130 + uVar15 * 4 + 0x3c) & 0x4000;
              }
              if (uVar6 == 0) goto LAB_1010ecfa0;
            }
            break;
          case 2:
            iVar5 = piVar16[2];
            if (iVar5 != 1) goto LAB_1010ecae0;
            iVar5 = piVar16[6];
            piVar16[6] = iVar5 + 1U;
            if (bVar4 == 0x20) {
              *(undefined1 *)
               (*(long *)(piVar16 + 8) + (ulong)(iVar5 + 1U) + *(long *)(lVar17 + 0x68) + -1) = 0;
              pcVar9 = (char *)(*(long *)(lVar17 + 0x68) + *(long *)(piVar16 + 8));
              iVar5 = _strcmp("<DIR>",pcVar9);
              if (iVar5 == 0) {
                *(undefined4 *)(lVar17 + 8) = 1;
                *(undefined8 *)(lVar17 + 0x28) = 0;
                lVar17 = *(long *)(piVar16 + 4);
              }
              else {
                lVar7 = _strtol(pcVar9,&local_78,10);
                *(long *)(lVar17 + 0x28) = lVar7;
                if ((*local_78 != '\0') ||
                   ((lVar7 + 0x8000000000000001U < 2 && (piVar8 = ___error(), *piVar8 == 0x22))))
                goto LAB_1010ed31c;
                lVar17 = *(long *)(piVar16 + 4);
                *(undefined4 *)(lVar17 + 8) = 0;
              }
              *(uint *)(lVar17 + 0x60) = *(uint *)(lVar17 + 0x60) | 0x40;
LAB_1010ed22c:
              piVar16[6] = 0;
              piVar16[1] = 3;
              piVar16[2] = 0;
            }
            break;
          case 3:
            iVar5 = piVar16[2];
            if (iVar5 == 2) {
              if (bVar4 != 10) goto LAB_1010ed31c;
            }
            else {
              if (iVar5 != 1) goto LAB_1010ecae0;
              piVar16[6] = piVar16[6] + 1;
              if (bVar4 != 10) {
                if (bVar4 == 0xd) {
                  piVar16[2] = 2;
                  *(undefined1 *)(*(long *)(lVar17 + 0x78) + *(long *)(lVar17 + 0x68) + -1) = 0;
                }
                break;
              }
              *(undefined1 *)(*(long *)(lVar17 + 0x78) + *(long *)(lVar17 + 0x68) + -1) = 0;
            }
            *(undefined8 *)(piVar16 + 10) = *(undefined8 *)(piVar16 + 8);
            iVar5 = FUN_1010ed498(param_4,lVar17);
            if (iVar5 != 0) goto LAB_1010ed3fc;
            piVar16[1] = 0;
            piVar16[2] = 0;
          }
          goto switchD_1010ec5e4_default;
        }
        if (*piVar16 != 1) {
          return uVar13 + 1;
        }
        switch(piVar16[1]) {
        case 0:
          if (piVar16[2] == 1) {
            uVar6 = piVar16[6];
            piVar16[6] = uVar6 + 1;
            if (bVar4 == 10) {
              *(undefined1 *)(*(long *)(lVar17 + 0x68) + (ulong)uVar6) = 0;
              pcVar9 = *(char **)(lVar17 + 0x68);
              iVar5 = _strncmp("total ",pcVar9,6);
              if (iVar5 != 0) goto LAB_1010ed31c;
              pcVar9 = pcVar9 + 5;
              do {
                bVar4 = pcVar9[1];
                if ((char)bVar4 < '\0') {
                  uVar6 = ___maskrune((uint)bVar4,0x4000);
                }
                else {
                  uVar6 = *(uint *)(PTR___DefaultRuneLocale_101444130 + (ulong)bVar4 * 4 + 0x3c) &
                          0x4000;
                }
                pcVar9 = pcVar9 + 1;
              } while (uVar6 != 0);
              lVar7 = 0;
              do {
                pbVar1 = (byte *)(pcVar9 + lVar7);
                lVar7 = lVar7 + 1;
              } while (*pbVar1 - 0x30 < 10);
              if (*pbVar1 != 0) goto LAB_1010ed31c;
              piVar16[1] = 1;
              *(undefined8 *)(lVar17 + 0x78) = 0;
            }
            else if (bVar4 == 0xd) {
              piVar16[6] = uVar6;
              *(long *)(lVar17 + 0x78) = *(long *)(lVar17 + 0x78) + -1;
            }
          }
          else if (piVar16[2] == 0) {
            if (bVar4 == 0x74) {
              piVar16[2] = 1;
              piVar16[6] = piVar16[6] + 1;
            }
            else {
              piVar16[1] = 1;
              *(undefined8 *)(lVar17 + 0x78) = 0;
              uVar14 = uVar14 - 1;
            }
          }
          break;
        case 1:
          if ((int)uVar6 < 0x62) {
            if (uVar6 == 0x2d) {
              *(undefined4 *)(lVar17 + 8) = 0;
            }
            else {
              if (uVar6 != 0x44) goto LAB_1010ed31c;
              *(undefined4 *)(lVar17 + 8) = 7;
            }
          }
          else if ((int)uVar6 < 0x70) {
            if ((int)uVar6 < 100) {
              if (uVar6 == 0x62) {
                *(undefined4 *)(lVar17 + 8) = 3;
              }
              else {
                if (uVar6 != 99) goto LAB_1010ed31c;
                *(undefined4 *)(lVar17 + 8) = 4;
              }
            }
            else if (uVar6 == 100) {
              *(undefined4 *)(lVar17 + 8) = 1;
            }
            else {
              if (uVar6 != 0x6c) goto LAB_1010ed31c;
              *(undefined4 *)(lVar17 + 8) = 2;
            }
          }
          else if (uVar6 == 0x70) {
            *(undefined4 *)(lVar17 + 8) = 5;
          }
          else {
            if (uVar6 != 0x73) goto LAB_1010ed31c;
            *(undefined4 *)(lVar17 + 8) = 6;
          }
          piVar16[1] = 2;
          piVar16[6] = 0;
          piVar16[8] = 1;
          piVar16[9] = 0;
          break;
        case 2:
          uVar2 = piVar16[6] + 1;
          piVar16[6] = uVar2;
          if (uVar2 < 10) {
            sVar11 = 9;
            pcVar9 = "rwx-tTsS";
            goto LAB_1010ecb8c;
          }
          if (uVar2 == 10) {
            if (bVar4 != 0x20) goto LAB_1010ed31c;
            *(undefined1 *)(*(long *)(lVar17 + 0x68) + 10) = 0;
            lVar7 = *(long *)(lVar17 + 0x68);
            lVar17 = *(long *)(piVar16 + 8);
            if (*(char *)(lVar7 + lVar17) == 'r') {
              uVar6 = 0x100;
            }
            else {
              uVar6 = 0;
              if (*(char *)(lVar7 + lVar17) != '-') {
                uVar6 = 0x1000000;
              }
            }
            cVar3 = *(char *)(lVar17 + lVar7 + 1);
            if (cVar3 != '-') {
              if (cVar3 == 'w') {
                uVar6 = uVar6 | 0x80;
              }
              else {
                uVar6 = uVar6 | 0x1000000;
              }
            }
            cVar3 = *(char *)(lVar17 + lVar7 + 2);
            if (cVar3 < 's') {
              if (cVar3 != '-') {
                if (cVar3 == 'S') {
                  uVar6 = uVar6 | 0x800;
                }
                else {
LAB_1010ed0dc:
                  uVar6 = uVar6 | 0x1000000;
                }
              }
            }
            else if (cVar3 == 's') {
              uVar6 = uVar6 | 0x840;
            }
            else {
              if (cVar3 != 'x') goto LAB_1010ed0dc;
              uVar6 = uVar6 | 0x40;
            }
            cVar3 = *(char *)(lVar17 + lVar7 + 3);
            if (cVar3 != '-') {
              if (cVar3 == 'r') {
                uVar6 = uVar6 | 0x20;
              }
              else {
                uVar6 = uVar6 | 0x1000000;
              }
            }
            cVar3 = *(char *)(lVar17 + lVar7 + 4);
            if (cVar3 != '-') {
              if (cVar3 == 'w') {
                uVar6 = uVar6 | 0x10;
              }
              else {
                uVar6 = uVar6 | 0x1000000;
              }
            }
            cVar3 = *(char *)(lVar17 + lVar7 + 5);
            if (cVar3 < 's') {
              if (cVar3 != '-') {
                if (cVar3 == 'S') {
                  uVar6 = uVar6 | 0x400;
                }
                else {
LAB_1010ed174:
                  uVar6 = uVar6 | 0x1000000;
                }
              }
            }
            else if (cVar3 == 's') {
              uVar6 = uVar6 | 0x408;
            }
            else {
              if (cVar3 != 'x') goto LAB_1010ed174;
              uVar6 = uVar6 | 8;
            }
            cVar3 = *(char *)(lVar17 + lVar7 + 6);
            if (cVar3 != '-') {
              if (cVar3 == 'r') {
                uVar6 = uVar6 | 4;
              }
              else {
                uVar6 = uVar6 | 0x1000000;
              }
            }
            cVar3 = *(char *)(lVar17 + lVar7 + 7);
            if (cVar3 != '-') {
              if (cVar3 == 'w') {
                uVar6 = uVar6 | 2;
              }
              else {
                uVar6 = uVar6 | 0x1000000;
              }
            }
            cVar3 = *(char *)(lVar17 + lVar7 + 8);
            if (cVar3 < 't') {
              if (cVar3 != '-') {
                if (cVar3 == 'T') {
                  uVar6 = uVar6 | 0x200;
                }
                else {
LAB_1010ed20c:
                  uVar6 = uVar6 | 0x1000000;
                }
              }
            }
            else if (cVar3 == 't') {
              uVar6 = uVar6 | 0x201;
            }
            else {
              if (cVar3 != 'x') goto LAB_1010ed20c;
              uVar6 = uVar6 | 1;
            }
            if (uVar6 >> 0x18 != 0) goto LAB_1010ed31c;
            lVar7 = *(long *)(piVar16 + 4);
            *(uint *)(lVar7 + 0x60) = *(uint *)(lVar7 + 0x60) | 8;
            *(uint *)(lVar7 + 0x18) = uVar6;
            *(long *)(piVar16 + 0x12) = lVar17;
            goto LAB_1010ed22c;
          }
          break;
        case 3:
          iVar5 = piVar16[2];
          if (iVar5 == 1) {
            iVar5 = piVar16[6];
            piVar16[6] = iVar5 + 1U;
            if (bVar4 == 0x20) {
              *(undefined1 *)
               (*(long *)(piVar16 + 8) + (ulong)(iVar5 + 1U) + *(long *)(lVar17 + 0x68) + -1) = 0;
              lVar17 = _strtol((char *)(*(long *)(lVar17 + 0x68) + *(long *)(piVar16 + 8)),&local_68
                               ,10);
              if (1 < lVar17 + 0x8000000000000001U && *local_68 == '\0') {
                lVar7 = *(long *)(piVar16 + 4);
                *(uint *)(lVar7 + 0x60) = *(uint *)(lVar7 + 0x60) | 0x80;
                *(long *)(lVar7 + 0x30) = lVar17;
              }
              piVar16[6] = 0;
              piVar16[8] = 0;
              piVar16[9] = 0;
              piVar16[1] = 4;
              piVar16[2] = 0;
            }
            else {
LAB_1010eccc8:
              if (9 < uVar6 - 0x30) goto LAB_1010ed31c;
            }
          }
          else {
LAB_1010ecb18:
            if ((iVar5 == 0) && (bVar4 != 0x20)) {
              if (9 < uVar6 - 0x30) {
LAB_1010ed31c:
                lVar17 = **(long **)(*param_4 + 0x8b10);
                if (*(long *)(lVar17 + 0x10) != 0) {
                  FUN_1010ec3f0(0);
                }
                *(undefined8 *)(lVar17 + 0x10) = 0;
                *(undefined4 *)(lVar17 + 0xc) = 0x57;
                return uVar13;
              }
              goto LAB_1010ecb34;
            }
          }
          break;
        case 4:
          iVar5 = piVar16[2];
          if (iVar5 == 1) {
            iVar5 = piVar16[6];
            piVar16[6] = iVar5 + 1U;
            if (bVar4 == 0x20) {
              *(undefined1 *)
               (*(long *)(piVar16 + 8) + (ulong)(iVar5 + 1U) + *(long *)(lVar17 + 0x68) + -1) = 0;
              *(undefined8 *)(piVar16 + 0xc) = *(undefined8 *)(piVar16 + 8);
              piVar16[1] = 5;
LAB_1010ec9ac:
              piVar16[2] = 0;
              piVar16[8] = 0;
              piVar16[9] = 0;
              piVar16[6] = 0;
            }
          }
          else {
LAB_1010ecae0:
            if (iVar5 == 0) goto switchD_1010ecb04_caseD_0;
          }
          break;
        case 5:
          iVar5 = piVar16[2];
          if (iVar5 != 1) goto LAB_1010ecae0;
          iVar5 = piVar16[6];
          piVar16[6] = iVar5 + 1U;
          if (bVar4 == 0x20) {
            *(undefined1 *)
             (*(long *)(piVar16 + 8) + (ulong)(iVar5 + 1U) + *(long *)(lVar17 + 0x68) + -1) = 0;
            *(undefined8 *)(piVar16 + 0xe) = *(undefined8 *)(piVar16 + 8);
            piVar16[1] = 6;
            goto LAB_1010ec9ac;
          }
          break;
        case 6:
          iVar5 = piVar16[2];
          if (iVar5 != 1) goto LAB_1010ecb18;
          iVar5 = piVar16[6];
          piVar16[6] = iVar5 + 1U;
          uVar6 = (uint)bVar4;
          if (bVar4 != 0x20) goto LAB_1010eccc8;
          *(undefined1 *)
           (*(long *)(piVar16 + 8) + (ulong)(iVar5 + 1U) + *(long *)(lVar17 + 0x68) + -1) = 0;
          lVar17 = _strtol((char *)(*(long *)(lVar17 + 0x68) + *(long *)(piVar16 + 8)),&local_70,10)
          ;
          if (1 < lVar17 + 0x8000000000000001U && *local_70 == '\0') {
            lVar7 = *(long *)(piVar16 + 4);
            *(uint *)(lVar7 + 0x60) = *(uint *)(lVar7 + 0x60) | 0x40;
            *(long *)(lVar7 + 0x28) = lVar17;
          }
          piVar16[6] = 0;
          piVar16[8] = 0;
          piVar16[9] = 0;
          piVar16[1] = 7;
          piVar16[2] = 0;
          break;
        case 7:
          switch(piVar16[2]) {
          case 0:
            if (bVar4 != 0x20) {
              if ((int)uVar6 < 0) {
                uVar6 = ___maskrune((uint)bVar4,0x500);
              }
              else {
                uVar6 = *(uint *)(PTR___DefaultRuneLocale_101444130 + uVar15 * 4 + 0x3c) & 0x500;
              }
              if (uVar6 == 0) goto LAB_1010ed31c;
              goto LAB_1010ecb34;
            }
            break;
          case 1:
            piVar16[6] = piVar16[6] + 1;
            if (bVar4 == 0x20) {
LAB_1010eced0:
              piVar16[2] = 2;
            }
            else {
LAB_1010ece00:
              if ((int)uVar6 < 0) {
                uVar6 = ___maskrune((uint)bVar4,0x500);
              }
              else {
                uVar6 = *(uint *)(PTR___DefaultRuneLocale_101444130 + uVar15 * 4 + 0x3c) & 0x500;
              }
              if ((bVar4 != 0x2e) && (uVar6 == 0)) goto LAB_1010ed31c;
            }
            break;
          case 2:
            piVar16[6] = piVar16[6] + 1;
            if (bVar4 != 0x20) {
              if ((int)uVar6 < 0) {
                uVar6 = ___maskrune((uint)bVar4,0x500);
              }
              else {
                uVar6 = *(uint *)(PTR___DefaultRuneLocale_101444130 + uVar15 * 4 + 0x3c) & 0x500;
              }
              if (uVar6 == 0) goto LAB_1010ed31c;
LAB_1010ed2d0:
              piVar16[2] = 3;
            }
            break;
          case 3:
            piVar16[6] = piVar16[6] + 1;
            if (bVar4 != 0x20) goto LAB_1010ece00;
LAB_1010ecf38:
            piVar16[2] = 4;
            break;
          case 4:
            piVar16[6] = piVar16[6] + 1;
            if (bVar4 != 0x20) {
              if ((int)uVar6 < 0) {
                uVar6 = ___maskrune((uint)bVar4,0x500);
              }
              else {
                uVar6 = *(uint *)(PTR___DefaultRuneLocale_101444130 + uVar15 * 4 + 0x3c) & 0x500;
              }
              if (uVar6 == 0) goto LAB_1010ed31c;
              piVar16[2] = 5;
            }
            break;
          case 5:
            iVar5 = piVar16[6];
            piVar16[6] = iVar5 + 1U;
            if (bVar4 == 0x20) {
              *(undefined1 *)
               (*(long *)(piVar16 + 8) + (ulong)(iVar5 + 1U) + *(long *)(lVar17 + 0x68) + -1) = 0;
              *(undefined8 *)(piVar16 + 0x10) = *(undefined8 *)(piVar16 + 8);
              if (*(int *)(lVar17 + 8) == 2) {
                piVar16[1] = 9;
                piVar16[2] = 0;
              }
              else {
                piVar16[1] = 8;
                piVar16[2] = 0;
              }
            }
            else {
              if ((int)uVar6 < 0) {
                uVar6 = ___maskrune((uint)bVar4,0x500);
              }
              else {
                uVar6 = *(uint *)(PTR___DefaultRuneLocale_101444130 + uVar15 * 4 + 0x3c) & 0x500;
              }
              if (((uVar6 == 0) && (bVar4 != 0x2e)) && (bVar4 != 0x3a)) goto LAB_1010ed31c;
            }
          }
          break;
        case 8:
          iVar5 = piVar16[2];
          if (iVar5 == 2) {
            if (bVar4 != 10) goto LAB_1010ed31c;
            *(undefined1 *)
             (*(long *)(lVar17 + 0x68) + (ulong)(uint)piVar16[6] + *(long *)(piVar16 + 8)) = 0;
          }
          else {
            if (iVar5 != 1) goto LAB_1010ecae0;
            iVar5 = piVar16[6];
            uVar6 = iVar5 + 1;
            piVar16[6] = uVar6;
            if (bVar4 != 10) {
              if (bVar4 == 0xd) {
                piVar16[6] = iVar5;
                goto LAB_1010eced0;
              }
              break;
            }
            *(undefined1 *)(*(long *)(piVar16 + 8) + (ulong)uVar6 + *(long *)(lVar17 + 0x68) + -1) =
                 0;
          }
          *(undefined8 *)(piVar16 + 10) = *(undefined8 *)(piVar16 + 8);
          piVar16[1] = 1;
          iVar5 = FUN_1010ed498(param_4,lVar17);
          if (iVar5 != 0) goto LAB_1010ed3fc;
          break;
        case 9:
          switch(piVar16[2]) {
          case 0:
switchD_1010ecb04_caseD_0:
            if (bVar4 != 0x20) {
LAB_1010ecb34:
              *(long *)(piVar16 + 8) = *(long *)(lVar17 + 0x78) + -1;
              piVar16[6] = 1;
              piVar16[2] = 1;
            }
            break;
          case 1:
            piVar16[6] = piVar16[6] + 1;
            if ((bVar4 == 0xd) || (bVar4 == 10)) goto LAB_1010ed31c;
            if (bVar4 == 0x20) goto LAB_1010eced0;
            break;
          case 2:
            piVar16[6] = piVar16[6] + 1;
            if ((bVar4 == 0xd) || (bVar4 == 10)) goto LAB_1010ed31c;
            if (bVar4 == 0x2d) goto LAB_1010ed2d0;
            goto LAB_1010ecfa0;
          case 3:
            piVar16[6] = piVar16[6] + 1;
            if ((bVar4 == 0xd) || (bVar4 == 10)) goto LAB_1010ed31c;
            if (bVar4 == 0x3e) goto LAB_1010ecf38;
LAB_1010ecfa0:
            piVar16[2] = 1;
            break;
          case 4:
            iVar5 = piVar16[6];
            piVar16[6] = iVar5 + 1U;
            if ((bVar4 == 0xd) || (bVar4 == 10)) goto LAB_1010ed31c;
            if (bVar4 != 0x20) goto LAB_1010ecfa0;
            piVar16[2] = 5;
            *(undefined1 *)
             (*(long *)(piVar16 + 8) + (ulong)(iVar5 + 1U) + *(long *)(lVar17 + 0x68) + -4) = 0;
            *(undefined8 *)(piVar16 + 10) = *(undefined8 *)(piVar16 + 8);
            piVar16[6] = 0;
            piVar16[8] = 0;
            piVar16[9] = 0;
            break;
          case 5:
            if ((bVar4 == 10) || (bVar4 == 0xd)) goto LAB_1010ed31c;
            piVar16[2] = 6;
            *(long *)(piVar16 + 8) = *(long *)(lVar17 + 0x78) + -1;
            piVar16[6] = 1;
            break;
          case 6:
            iVar5 = piVar16[6];
            uVar6 = iVar5 + 1;
            piVar16[6] = uVar6;
            if (bVar4 == 10) {
              lVar7 = *(long *)(piVar16 + 8) + (ulong)uVar6;
              goto LAB_1010ed01c;
            }
            if (bVar4 == 0xd) {
              piVar16[6] = iVar5;
              piVar16[2] = 7;
            }
            break;
          case 7:
            if (bVar4 != 10) goto LAB_1010ed31c;
            lVar7 = *(long *)(piVar16 + 8) + (ulong)(uint)piVar16[6];
LAB_1010ed01c:
            *(undefined1 *)(lVar7 + *(long *)(lVar17 + 0x68) + -1) = 0;
            *(undefined8 *)(piVar16 + 0x14) = *(undefined8 *)(piVar16 + 8);
            iVar5 = FUN_1010ed498(param_4,lVar17);
            if (iVar5 != 0) {
LAB_1010ed3fc:
              lVar17 = **(long **)(*param_4 + 0x8b10);
              if (*(long *)(lVar17 + 0x10) != 0) {
                FUN_1010ec3f0(0);
              }
              *(undefined8 *)(lVar17 + 0x10) = 0;
              *(int *)(lVar17 + 0xc) = iVar5;
              return uVar13;
            }
            piVar16[1] = 1;
          }
        }
switchD_1010ec5e4_default:
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar13);
    }
  }
  return uVar13;
}




undefined8 FUN_1010ed498(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  
  lVar5 = *param_1;
  plVar9 = *(long **)(lVar5 + 0x8b10);
  lVar8 = *(long *)(lVar5 + 0x8b08);
  lVar6 = *plVar9;
  lVar7 = param_2[0xd];
  *param_2 = lVar7 + *(long *)(lVar6 + 0x28);
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x38) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x38);
  }
  param_2[10] = lVar1;
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x48) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x48);
  }
  param_2[8] = lVar1;
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x50) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x50);
  }
  param_2[0xb] = lVar1;
  param_2[7] = lVar7 + *(long *)(lVar6 + 0x40);
  lVar1 = 0;
  if (*(long *)(lVar6 + 0x30) != 0) {
    lVar1 = lVar7 + *(long *)(lVar6 + 0x30);
  }
  param_2[9] = lVar1;
  pcVar4 = *(code **)(lVar5 + 0x6f0);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = FUN_1010eb8ac;
  }
  iVar2 = (*pcVar4)(*(undefined8 *)(lVar5 + 0x6f8),*(undefined8 *)(lVar5 + 0x8b00));
  if ((iVar2 == 0) &&
     ((((int)param_2[1] != 2 || ((char *)param_2[0xb] == (char *)0x0)) ||
      (pcVar3 = _strstr((char *)param_2[0xb]," -> "), pcVar3 == (char *)0x0)))) {
    iVar2 = FUN_1010eef88(lVar8,*(undefined8 *)(lVar8 + 8),param_2);
    if (iVar2 == 0) {
      FUN_1010ec3f0(0,param_2);
      *(undefined8 *)(*plVar9 + 0x10) = 0;
      return 0x1b;
    }
  }
  else {
    FUN_1010ec3f0(0,param_2);
  }
  *(undefined8 *)(*plVar9 + 0x10) = 0;
  return 0;
}




undefined4 FUN_1010ed5e8(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_1010eef44(FUN_1010ec3f0);
  *(long *)(param_1 + 0x18) = lVar1;
  uVar2 = 0x1b;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_1010ed620(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(code **)(param_1 + 10) != (code *)0x0) {
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(param_1 + 10) = 0;
    }
    if (*(long *)(param_1 + 6) != 0) {
      FUN_1010ef0ec(*(long *)(param_1 + 6),0);
      *(undefined8 *)(param_1 + 6) = 0;
    }
    if (*(long *)(param_1 + 2) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 2) = 0;
    }
    if (*(long *)(param_1 + 4) != 0) {
      (*(code *)PTR__free_101873628)();
      *(undefined8 *)(param_1 + 4) = 0;
    }
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0;
  }
  return;
}




void FUN_1010ed6a8(long param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}




undefined8 FUN_1010ed6b8(long *param_1,byte *param_2,long param_3,long *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  char *pcStack_68;
  
  lVar9 = *param_1;
  *param_4 = 0;
  if (((*(char *)(lVar9 + 0x530) == '\0') || (*(char *)(lVar9 + 0x1e9) != '\0')) ||
     (iVar3 = FUN_1010d98ec(param_1,1,param_2,param_3), iVar3 == 0)) {
    if (param_3 != 0) {
LAB_1010ed734:
      uVar7 = (undefined4)param_1[4];
switchD_1010ed758_default:
      switch(uVar7) {
      case 0:
        bVar1 = *param_2;
        if (bVar1 - 0x30 < 10 || (bVar1 - 0x41 & 0xff) < 6) {
          iVar3 = *(int *)((long)param_1 + 0x1c);
        }
        else {
          iVar3 = *(int *)((long)param_1 + 0x1c);
          if (5 < bVar1 - 0x61) {
            if (iVar3 != 0) {
              *(undefined1 *)((long)param_1 + (long)iVar3 + 8) = 0;
              lVar5 = _strtol((char *)(param_1 + 1),&pcStack_68,0x10);
              param_1[5] = lVar5;
              if ((lVar5 != 0x7fffffffffffffff) || (piVar4 = ___error(), *piVar4 != 0x22)) {
                uVar7 = 1;
                *(undefined4 *)(param_1 + 4) = 1;
                goto switchD_1010ed758_default;
              }
            }
            return 2;
          }
        }
        if (0xf < iVar3) {
          return 1;
        }
        *(byte *)((long)param_1 + (long)iVar3 + 8) = bVar1;
        param_2 = param_2 + 1;
        param_3 = param_3 + -1;
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
        goto LAB_1010eda6c;
      case 1:
        goto switchD_1010ed758_caseD_1;
      case 2:
        lVar5 = param_1[5];
        if (param_3 <= param_1[5]) {
          lVar5 = param_3;
        }
        lVar5 = FUN_1010feefc(lVar5);
        if (*(char *)(*param_1 + 0x531) == '\0') {
          iVar3 = *(int *)(lVar9 + 0x148);
          if (iVar3 == 2) {
            *(byte **)(lVar9 + 0xf8) = param_2;
            iVar3 = FUN_1010f2454(param_1,lVar9 + 0x78,lVar5);
          }
          else {
            if (iVar3 != 1) {
              if (iVar3 != 0) {
                FUN_1010d9258(*param_1,
                              "Unrecognized content encoding type. libcurl understands `identity\', `deflate\' and `gzip\' content encodings."
                             );
                return 5;
              }
              goto LAB_1010ed958;
            }
            *(byte **)(lVar9 + 0xf8) = param_2;
            iVar3 = FUN_1010f2158(param_1,lVar9 + 0x78,lVar5);
          }
LAB_1010ed97c:
          if (iVar3 != 0) goto LAB_1010edaa0;
        }
        else {
LAB_1010ed958:
          if ((*(char *)(lVar9 + 0x1e9) == '\0') && (*(char *)(lVar9 + 0x530) == '\0')) {
            iVar3 = FUN_1010d98ec(param_1,1,param_2,lVar5);
            goto LAB_1010ed97c;
          }
        }
        *param_4 = *param_4 + lVar5;
        lVar8 = param_1[5];
        param_3 = param_3 - lVar5;
        param_1[5] = lVar8 - lVar5;
        param_2 = param_2 + lVar5;
        if (lVar8 - lVar5 == 0) {
          *(undefined4 *)(param_1 + 4) = 3;
        }
        goto LAB_1010eda6c;
      case 3:
        if (*param_2 == 0xd) goto LAB_1010ed920;
        if (*param_2 == 10) {
          *(undefined4 *)((long)param_1 + 0x1c) = 0;
          param_1[6] = 0;
          *(undefined4 *)(param_1 + 4) = 0;
          goto LAB_1010ed920;
        }
        break;
      case 4:
        if (*param_2 == 10) {
          lVar9 = FUN_1010feefc(param_3 + -1);
          param_1[6] = lVar9;
          return 0xffffffff;
        }
        break;
      case 5:
        bVar1 = *param_2;
        if (bVar1 != 10 && bVar1 != 0xd) {
          iVar3 = *(int *)((long)param_1 + 0x52c);
          iVar2 = (int)param_1[0xa5];
          if (iVar3 < iVar2) {
            lVar5 = param_1[0xa4];
          }
          else {
            if (iVar2 == 0) {
              *(undefined4 *)(param_1 + 0xa5) = 0x80;
              lVar5 = (*(code *)PTR__malloc_101873620)(0x83);
            }
            else {
              *(int *)(param_1 + 0xa5) = (int)((long)iVar2 * 2);
              lVar5 = (*(code *)PTR__realloc_101873630)(param_1[0xa4],(long)iVar2 * 2 + 3);
            }
            if (lVar5 == 0) {
              return 6;
            }
            param_1[0xa4] = lVar5;
            bVar1 = *param_2;
            iVar3 = *(int *)((long)param_1 + 0x52c);
          }
          *(int *)((long)param_1 + 0x52c) = iVar3 + 1;
          *(byte *)(lVar5 + iVar3) = bVar1;
          goto LAB_1010ed920;
        }
        iVar3 = *(int *)((long)param_1 + 0x52c);
        if (iVar3 == 0) {
          uVar7 = 7;
          *(undefined4 *)(param_1 + 4) = 7;
        }
        else {
          *(int *)((long)param_1 + 0x52c) = iVar3 + 1;
          *(undefined1 *)(param_1[0xa4] + (long)iVar3) = 0xd;
          iVar3 = *(int *)((long)param_1 + 0x52c);
          *(int *)((long)param_1 + 0x52c) = iVar3 + 1;
          *(undefined1 *)(param_1[0xa4] + (long)iVar3) = 10;
          *(undefined1 *)(param_1[0xa4] + (long)*(int *)((long)param_1 + 0x52c)) = 0;
          if ((*(char *)(lVar9 + 0x530) == '\0') &&
             (iVar3 = FUN_1010d98ec(param_1,2,param_1[0xa4],(long)*(int *)((long)param_1 + 0x52c)),
             iVar3 != 0)) goto LAB_1010edaa0;
          *(undefined4 *)((long)param_1 + 0x52c) = 0;
          uVar7 = 6;
          *(undefined4 *)(param_1 + 4) = 6;
          if (*param_2 != 10) goto LAB_1010ed920;
        }
        goto switchD_1010ed758_default;
      case 6:
        if (*param_2 == 10) {
          *(undefined4 *)(param_1 + 4) = 7;
          goto LAB_1010ed920;
        }
        break;
      case 7:
        if (*param_2 == 10) {
LAB_1010eda64:
          *(undefined4 *)(param_1 + 4) = 4;
          goto LAB_1010eda6c;
        }
        if (*param_2 == 0xd) {
          param_2 = param_2 + 1;
          param_3 = param_3 + -1;
          goto LAB_1010eda64;
        }
        uVar7 = 5;
        *(undefined4 *)(param_1 + 4) = 5;
      default:
        goto switchD_1010ed758_default;
      }
      return 3;
    }
LAB_1010eda70:
    uVar6 = 0;
  }
  else {
LAB_1010edaa0:
    uVar6 = 4;
  }
  return uVar6;
switchD_1010ed758_caseD_1:
  if (*param_2 == 10) {
    if (param_1[5] == 0) {
      *(undefined4 *)(param_1 + 4) = 5;
      *(undefined4 *)((long)param_1 + 0x52c) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 4) = 2;
    }
  }
LAB_1010ed920:
  param_2 = param_2 + 1;
  param_3 = param_3 + -1;
LAB_1010eda6c:
  if (param_3 == 0) goto LAB_1010eda70;
  goto LAB_1010ed734;
}




char * FUN_1010edb10(int param_1)

{
  if (param_1 - 1U < 6) {
    return (&PTR_s_Too_long_hexadecimal_number_10182f360)[(int)(param_1 - 1U)];
  }
  return "OK";
}




long FUN_1010edb38(long param_1,undefined8 *param_2,int param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  long lVar8;
  undefined1 local_40 [16];
  
  lVar6 = 300000;
  if (param_3 == 0) {
    lVar6 = 0;
  }
  lVar8 = *(long *)(param_1 + 0x358);
  bVar1 = 0 < lVar8;
  bVar7 = bVar1;
  if ((param_3 != 0) && (bVar7 = bVar1 | 2, *(long *)(param_1 + 0x360) < 1)) {
    bVar7 = bVar1;
  }
  if (bVar7 != 1) {
    if (bVar7 == 3) {
      if (*(long *)(param_1 + 0x360) <= lVar8) {
        lVar8 = *(long *)(param_1 + 0x360);
      }
    }
    else if (bVar7 == 2) {
      lVar8 = *(long *)(param_1 + 0x360);
    }
    else {
      lVar8 = lVar6;
      if (param_3 == 0) {
        return 0;
      }
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    local_40 = FUN_1010d0e58();
    param_2 = (undefined8 *)local_40;
  }
  if (param_3 == 0) {
    uVar3 = param_2[1];
    uVar5 = *(undefined8 *)(param_1 + 0x820);
    uVar4 = *(undefined8 *)(param_1 + 0x818);
  }
  else {
    uVar3 = param_2[1];
    uVar5 = *(undefined8 *)(param_1 + 0x810);
    uVar4 = *(undefined8 *)(param_1 + 0x808);
  }
  lVar2 = FUN_1010d0e80(*param_2,uVar3,uVar4,uVar5);
  lVar6 = -1;
  if (lVar8 - lVar2 != 0) {
    lVar6 = lVar8 - lVar2;
  }
  return lVar6;
}




void FUN_1010edc20(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)((long)param_1 + 0x11a);
  *(undefined8 *)(lVar1 + 0x8ba6) = *(undefined8 *)((long)param_1 + 0x122);
  *(undefined8 *)(lVar1 + 0x8b9e) = uVar2;
  uVar2 = *(undefined8 *)((long)param_1 + 0x10c);
  *(undefined8 *)(lVar1 + 0x8b98) = *(undefined8 *)((long)param_1 + 0x114);
  *(undefined8 *)(lVar1 + 0x8b90) = uVar2;
  uVar2 = *(undefined8 *)((long)param_1 + 0xfc);
  *(undefined8 *)(lVar1 + 0x8b88) = *(undefined8 *)((long)param_1 + 0x104);
  *(undefined8 *)(lVar1 + 0x8b80) = uVar2;
  lVar1 = *param_1;
  uVar2 = *(undefined8 *)((long)param_1 + 0x156);
  *(undefined8 *)(lVar1 + 0x8bde) = *(undefined8 *)((long)param_1 + 0x15e);
  *(undefined8 *)(lVar1 + 0x8bd6) = uVar2;
  lVar3 = param_1[0x29];
  *(long *)(lVar1 + 0x8bd0) = param_1[0x2a];
  *(long *)(lVar1 + 0x8bc8) = lVar3;
  lVar3 = param_1[0x27];
  *(long *)(lVar1 + 0x8bc0) = param_1[0x28];
  *(long *)(lVar1 + 0x8bb8) = lVar3;
  lVar1 = *param_1;
  *(long *)(lVar1 + 0x8bb0) = param_1[0x26];
  *(long *)(lVar1 + 0x8be8) = param_1[0x2d];
  return;
}




undefined8 FUN_1010ede40(long param_1,char *param_2,ulong *param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    FUN_1010e7270(param_2,0x2e,"%s");
    *param_3 = 0;
    return 1;
  }
  if (cVar1 == '\x1e') {
    pvVar4 = (void *)(param_1 + 8);
    iVar2 = 0x1e;
  }
  else {
    if (cVar1 != '\x02') goto LAB_1010edee4;
    pvVar4 = (void *)(param_1 + 4);
    iVar2 = 2;
  }
  pcVar3 = _inet_ntop(iVar2,pvVar4,param_2,0x2e);
  if (pcVar3 != (char *)0x0) {
    *param_3 = (ulong)CONCAT21(*(undefined2 *)(param_1 + 2),
                               (char)((ushort)*(undefined2 *)(param_1 + 2) >> 8)) & 0xffff;
    return 1;
  }
LAB_1010edee4:
  *param_2 = '\0';
  *param_3 = 0;
  return 0;
}




undefined8 FUN_1010edf04(long *param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined1 local_b0 [16];
  int local_9c;
  undefined1 auStack_96 [46];
  long local_68;
  
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = *param_1;
  local_9c = 0;
  *param_3 = 0;
  iVar8 = (int)param_2;
  local_68 = lVar10;
  if (*(char *)((long)param_1 + (long)iVar8 + 0x2d1) != '\0') {
    uVar9 = 0;
    *param_3 = 1;
    goto LAB_1010ee250;
  }
  local_b0 = FUN_1010d0e58();
  lVar4 = FUN_1010edb38(lVar7,local_b0,1);
  if (lVar4 < 0) {
    FUN_1010d9258(lVar7,"Connection time-out");
    uVar9 = 0x1c;
    goto LAB_1010ee250;
  }
  uVar11 = 0;
  uVar9 = 0;
  lVar10 = 0x68;
  lVar1 = lVar4;
  if (lVar4 < 0) {
    lVar1 = lVar4 + 1;
  }
  do {
    iVar3 = *(int *)((long)param_1 + uVar11 * 4 + 0x1d8);
    if (iVar3 != -1) {
      uVar2 = FUN_1010f37c8(0xffffffff,0xffffffff,iVar3,0);
      if (uVar2 == 2) {
        iVar3 = FUN_1010ee374(*(undefined4 *)((long)param_1 + uVar11 * 4 + 0x1d8),&local_9c);
        if (iVar3 != 0) {
          *(undefined4 *)((long)param_1 + (long)iVar8 * 4 + 0x1d0) =
               *(undefined4 *)((long)param_1 + uVar11 * 4 + 0x1d8);
          param_1[0xc] = *(long *)((long)param_1 + lVar10);
          *(undefined4 *)((long)param_1 + uVar11 * 4 + 0x1d8) = 0xffffffff;
          if (*(int *)((long)param_1 + (uVar11 ^ 1) * 4 + 0x1d8) != -1) {
            FUN_1010ee3ec(param_1);
            *(undefined4 *)((long)param_1 + (uVar11 ^ 1) * 4 + 0x1d8) = 0xffffffff;
          }
          uVar9 = FUN_1010e2268(param_1,param_2);
          lVar10 = *(long *)PTR____stack_chk_guard_101444218;
          if ((int)uVar9 != 0) goto LAB_1010ee250;
          *(undefined1 *)((long)param_1 + (long)iVar8 + 0x2d1) = 1;
          *param_3 = 1;
          if (iVar8 == 0) {
            FUN_1010d231c(lVar7,4);
          }
          FUN_1010edc9c(param_1,*(undefined4 *)((long)param_1 + (long)iVar8 * 4 + 0x1d0));
          FUN_1010e2304(param_1);
          goto LAB_1010ee24c;
        }
        FUN_1010d909c(lVar7,"Connection failed\n");
      }
      else if (uVar2 == 0) {
        lVar5 = FUN_1010d0e80(local_b0._0_8_,local_b0._8_8_,param_1[0x5d],param_1[0x5e]);
        if (param_1[0x60] <= lVar5) {
          FUN_1010d909c(lVar7,"After %ldms connect time, move on!\n");
          local_9c = 0x3c;
        }
        if (((int)uVar11 == 0) && (param_1[0xe] == 0)) {
          lVar5 = FUN_1010d0e80(local_b0._0_8_,local_b0._8_8_,param_1[0x5d],param_1[0x5e]);
          if (199 < lVar5) {
            FUN_1010ee284(param_1,param_2,1);
          }
        }
      }
      else if ((uVar2 >> 2 & 1) != 0) {
        FUN_1010ee374(*(undefined4 *)((long)param_1 + uVar11 * 4 + 0x1d8),&local_9c);
      }
      iVar3 = local_9c;
      if (local_9c != 0) {
        *(int *)(lVar7 + 0x895c) = local_9c;
        piVar6 = ___error();
        *piVar6 = iVar3;
        if (*(long *)((long)param_1 + lVar10) != 0) {
          FUN_1010d1414(*(long *)((long)param_1 + lVar10),auStack_96,0x2e);
          FUN_1010f2ce0(param_1,local_9c);
          FUN_1010d909c(lVar7,"connect to %s port %ld failed: %s\n");
          lVar5 = lVar4;
          if (*(long *)(*(long *)((long)param_1 + lVar10) + 0x28) != 0) {
            lVar5 = lVar1 >> 1;
          }
          param_1[0x60] = lVar5;
          uVar9 = FUN_1010ee284(param_1,param_2,uVar11);
        }
      }
    }
    uVar11 = uVar11 + 1;
    lVar10 = lVar10 + 8;
  } while ((long)uVar11 < 2);
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  if ((int)uVar9 == 0) {
LAB_1010ee24c:
    uVar9 = 0;
  }
  else {
    if (param_1[0xe] == 0) {
      uVar9 = FUN_1010ee284(param_1,param_2,1);
      if ((int)uVar9 == 0) goto LAB_1010ee24c;
    }
    FUN_1010f2ce0(param_1,local_9c);
    FUN_1010d9258(lVar7,"Failed to connect to %s port %ld: %s");
  }
LAB_1010ee250:
  if (lVar10 == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1010ee284(long param_1,int param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  
  lVar1 = param_1 + (long)param_3 * 4;
  iVar2 = *(int *)(lVar1 + 0x1d8);
  *(undefined4 *)(lVar1 + 0x1d8) = 0xffffffff;
  if (param_2 == 0) {
    plVar6 = (long *)(param_1 + (long)param_3 * 8 + 0x68);
    lVar4 = *plVar6;
    if (lVar4 == 0) {
      lVar4 = *(long *)(param_1 + 0x68);
      if (lVar4 == 0) goto LAB_1010ee338;
      iVar5 = 0x1e;
      if (*(int *)(lVar4 + 4) != 2) {
        iVar5 = 2;
      }
    }
    else {
      iVar5 = *(int *)(lVar4 + 4);
    }
    lVar4 = *(long *)(lVar4 + 0x28);
    if (lVar4 != 0) {
      do {
        while( true ) {
          if (lVar4 == 0) goto LAB_1010ee338;
          if (*(int *)(lVar4 + 4) == iVar5) break;
          lVar4 = *(long *)(lVar4 + 0x28);
        }
        uVar3 = FUN_1010ee560(param_1,lVar4,lVar1 + 0x1d8);
        if ((int)uVar3 != 7) {
          *plVar6 = lVar4;
          break;
        }
        lVar4 = *(long *)(lVar4 + 0x28);
        uVar3 = 7;
      } while (lVar4 != 0);
      goto LAB_1010ee33c;
    }
  }
LAB_1010ee338:
  uVar3 = 7;
LAB_1010ee33c:
  if (iVar2 != -1) {
    FUN_1010ee3ec(param_1,iVar2);
  }
  return uVar3;
}




undefined8 FUN_1010ee374(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  socklen_t local_28;
  int local_24;
  
  local_24 = 0;
  local_28 = 4;
  iVar1 = _getsockopt(param_1,0xffff,0x1007,&local_24,&local_28);
  if (iVar1 != 0) {
    piVar2 = ___error();
    local_24 = *piVar2;
  }
  uVar3 = 1;
  if ((local_24 != 0) && (local_24 != 0x38)) {
    uVar3 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_24;
  }
  return uVar3;
}




undefined8 FUN_1010ee3ec(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(code **)(param_1 + 0x38) != (code *)0x0) {
      if ((*(int *)(param_1 + 0x1d4) != (int)param_2) || (*(char *)(param_1 + 0x1e1) == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001010ee450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_2);
        return uVar1;
      }
      *(undefined1 *)(param_1 + 0x1e1) = 0;
    }
    FUN_1010f1b40(param_1,param_2);
  }
  _close(param_2);
  return 0;
}




undefined8 FUN_1010ee454(long *param_1,long *param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 local_40 [16];
  
  lVar6 = *param_1;
  local_40 = FUN_1010d0e58();
  lVar3 = FUN_1010edb38(lVar6,local_40,1);
  if (lVar3 < 0) {
    FUN_1010d9258(lVar6,"Connection time-out");
    uVar4 = 0x1c;
  }
  else {
    uVar2 = FUN_1010d13f8(*param_2);
    *(undefined4 *)(param_1 + 0x5f) = uVar2;
    param_1[0xd] = *param_2;
    param_1[0xe] = 0;
    param_1[0x3b] = -1;
    FUN_1010efbdc(*param_1,200);
    lVar5 = param_1[0xd];
    lVar1 = lVar3;
    if (lVar3 < 0) {
      lVar1 = lVar3 + 1;
    }
    if (*(long *)(lVar5 + 0x28) != 0) {
      lVar3 = lVar1 >> 1;
    }
    param_1[0x60] = lVar3;
    if (lVar5 == 0) {
      uVar4 = 7;
    }
    else {
      do {
        uVar4 = FUN_1010ee560(param_1,lVar5,param_1 + 0x3b);
        if ((int)uVar4 == 0) {
          uVar4 = 0;
          break;
        }
        lVar5 = *(long *)(param_1[0xd] + 0x28);
        param_1[0xd] = lVar5;
      } while (lVar5 != 0);
    }
    if ((int)param_1[0x3b] != -1) {
      uVar4 = 0;
      *(long *)(lVar6 + 0x8b68) = *(long *)(lVar6 + 0x8b68) + 1;
    }
  }
  return uVar4;
}




void FUN_1010ee560(long *param_1,undefined8 param_2,int *param_3)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  size_t sVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  socklen_t sVar14;
  char *pcVar15;
  char *pcVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_2c0 [8];
  int local_2b8 [2];
  undefined8 *local_2b0;
  undefined1 auStack_2a6 [46];
  int local_278;
  int iStack_274;
  socklen_t local_26c;
  sockaddr asStack_268 [8];
  sockaddr local_1e8 [16];
  sockaddr sStack_e8;
  int local_d0;
  long local_68;
  
  lVar19 = *(long *)PTR____stack_chk_guard_101444218;
  lVar11 = *param_1;
  *param_3 = -1;
  local_68 = lVar19;
  iVar4 = FUN_1010eedbc(param_1,param_2,&local_278,local_2b8);
  if (iVar4 == 0) {
    uVar6 = FUN_1010ede40(asStack_268,auStack_2a6,auStack_2c0);
    if ((uVar6 & 1) != 0) {
      FUN_1010d909c(lVar11,"  Trying %s...\n");
      if (((local_278 == 2) || (local_278 == 0x1e)) && (iStack_274 == 1)) {
        if (*(char *)(lVar11 + 0x51e) != '\0') {
          lVar13 = *param_1;
          local_1e8[0]._0_4_ = ZEXT14(*(byte *)(lVar13 + 0x51e));
          iVar4 = _setsockopt(local_2b8[0],6,1,local_1e8,4);
          if (iVar4 < 0) {
            piVar9 = ___error();
            FUN_1010f2ce0(param_1,*piVar9);
            pcVar16 = "Could not set TCP_NODELAY: %s\n";
          }
          else {
            pcVar16 = "TCP_NODELAY set\n";
          }
          FUN_1010d909c(lVar13,pcVar16);
        }
        FUN_1010eeed0(param_1,local_2b8[0]);
        if (*(byte *)(lVar11 + 0x708) != 0) {
          local_1e8[0]._0_4_ = (uint)*(byte *)(lVar11 + 0x708);
          iVar4 = _setsockopt(local_2b8[0],0xffff,8,local_1e8,4);
          if (iVar4 < 0) {
            pcVar16 = "Failed to set SO_KEEPALIVE on fd %d\n";
          }
          else {
            local_1e8[0]._0_4_ = FUN_1010feee0(*(undefined8 *)(lVar11 + 0x718));
            iVar4 = _setsockopt(local_2b8[0],6,0x101,local_1e8,4);
            if (iVar4 < 0) {
              FUN_1010d909c(lVar11,"Failed to set TCP_KEEPINTVL on fd %d\n");
            }
            local_1e8[0]._0_4_ = FUN_1010feee0(*(undefined8 *)(lVar11 + 0x710));
            iVar4 = _setsockopt(local_2b8[0],6,0x10,local_1e8,4);
            if (-1 < iVar4) goto LAB_1010ee7a0;
            pcVar16 = "Failed to set TCP_KEEPALIVE on fd %d\n";
          }
          FUN_1010d909c(lVar11,pcVar16);
        }
      }
      else {
        FUN_1010eeed0(param_1,local_2b8[0]);
      }
LAB_1010ee7a0:
      if (*(code **)(lVar11 + 0x2f8) == (code *)0x0) {
LAB_1010ee7e0:
        bVar2 = false;
      }
      else {
        iVar4 = (**(code **)(lVar11 + 0x2f8))(*(undefined8 *)(lVar11 + 0x300),local_2b8[0],0);
        if (iVar4 != 2) {
          if (iVar4 != 0) {
            FUN_1010ee3ec(param_1,local_2b8[0]);
            iVar4 = 0x2a;
            goto LAB_1010ee680;
          }
          goto LAB_1010ee7e0;
        }
        bVar2 = true;
      }
      iVar4 = local_278;
      if ((local_278 == 2) || (local_278 == 0x1e)) {
        uVar7 = FUN_1010e5b9c(asStack_268);
        lVar13 = *param_1;
        local_2b0 = (undefined8 *)0x0;
        uVar1 = *(ushort *)(lVar13 + 0x2a8);
        uVar12 = (uint)uVar1;
        iVar17 = *(int *)(lVar13 + 0x2ac);
        pcVar16 = *(char **)(lVar13 + 0x578);
        if ((uVar1 == 0) && (pcVar16 == (char *)0x0)) {
          iVar17 = 0;
        }
        else {
          _memset(&sStack_e8,0,0x80);
          if ((pcVar16 == (char *)0x0) || (sVar8 = _strlen(pcVar16), 0xfe < sVar8)) {
            if (iVar4 == 2) {
LAB_1010ee8bc:
              sStack_e8.sa_family = '\x02';
              sStack_e8.sa_data._0_2_ = uVar1 >> 8 | uVar1 << 8;
              sVar14 = 0x10;
            }
            else if (iVar4 == 0x1e) {
              sStack_e8.sa_family = '\x1e';
              sStack_e8.sa_data._0_2_ = uVar1 >> 8 | uVar1 << 8;
LAB_1010ee8ec:
              sVar14 = 0x1c;
            }
            else {
LAB_1010eea54:
              sVar14 = 0;
            }
            iVar4 = _bind(local_2b8[0],&sStack_e8,sVar14);
            if (iVar4 < 0) {
              iVar17 = iVar17 + 1;
              do {
                iVar17 = iVar17 + -1;
                if (iVar17 < 2) {
                  piVar9 = ___error();
                  iVar4 = *piVar9;
                  *(int *)(lVar13 + 0x895c) = iVar4;
                  FUN_1010f2ce0(param_1,iVar4);
                  pcVar16 = "bind failed with errno %d: %s";
                  goto LAB_1010eeb90;
                }
                FUN_1010d909c(lVar13,"Bind to local port %hu failed, trying next\n");
                uVar12 = uVar12 + 1;
                sStack_e8.sa_data._0_2_ =
                     (ushort)(uVar12 >> 8) & 0xff | (ushort)((uVar12 & 0xffff) << 8);
                iVar4 = _bind(local_2b8[0],&sStack_e8,sVar14);
              } while (iVar4 < 0);
            }
            local_2b8[1] = 0x80;
            _memset(local_1e8,0,0x80);
            iVar4 = _getsockname(local_2b8[0],local_1e8,(socklen_t *)(local_2b8 + 1));
            if (iVar4 < 0) {
              piVar9 = ___error();
              iVar4 = *piVar9;
              *(int *)(lVar13 + 0x895c) = iVar4;
              FUN_1010f2ce0(param_1,iVar4);
              FUN_1010d9258(lVar13,"getsockname() failed with errno %d: %s");
              iVar17 = 0x2d;
            }
            else {
              FUN_1010d909c(lVar13,"Local port: %hu\n");
              iVar17 = 0;
              *(undefined1 *)((long)param_1 + 0x2df) = 1;
            }
          }
          else {
            _memset(local_1e8,0,0x100);
            iVar5 = _strncmp("if!",pcVar16,3);
            if (iVar5 != 0) {
              iVar5 = _strncmp("host!",pcVar16,5);
              pcVar15 = pcVar16 + 5;
              if (iVar5 != 0) {
                bVar3 = false;
                pcVar15 = pcVar16;
                goto LAB_1010ee900;
              }
              goto LAB_1010ee978;
            }
            pcVar15 = pcVar16 + 3;
            bVar3 = true;
LAB_1010ee900:
            iVar5 = FUN_1010e5c70(iVar4,uVar7,(int)param_1[0x15],pcVar15,local_1e8,0x100);
            if (iVar5 == 2) {
              FUN_1010d909c(lVar13,"Local Interface %s is ip %s using address family %i\n");
LAB_1010eea00:
              if (iVar4 == 2) {
                iVar4 = _inet_pton(2,(char *)local_1e8,(void *)((ulong)&sStack_e8 | 4));
                if (0 < iVar4) goto LAB_1010ee8bc;
              }
              else if (iVar4 == 0x1e) {
                pcVar16 = _strchr((char *)local_1e8,0x25);
                if (pcVar16 == (char *)0x0) {
                  pcVar15 = (char *)0x0;
                }
                else {
                  pcVar15 = pcVar16 + 1;
                  *pcVar16 = '\0';
                }
                iVar4 = _inet_pton(0x1e,(char *)local_1e8,sStack_e8.sa_data + 6);
                if (0 < iVar4) {
                  sStack_e8.sa_family = '\x1e';
                  sStack_e8.sa_data._0_2_ = uVar1 >> 8 | uVar1 << 8;
                  if (pcVar15 != (char *)0x0) {
                    local_d0 = _atoi(pcVar15);
                  }
                }
                goto LAB_1010ee8ec;
              }
              goto LAB_1010eea54;
            }
            if (iVar5 == 1) {
              iVar17 = 1;
              goto LAB_1010eeba4;
            }
            if (iVar5 == 0) {
              if (!bVar3) {
LAB_1010ee978:
                lVar18 = param_1[99];
                if (iVar4 == 0x1e) {
                  lVar10 = 2;
LAB_1010ee998:
                  param_1[99] = lVar10;
                }
                else if (iVar4 == 2) {
                  lVar10 = 1;
                  goto LAB_1010ee998;
                }
                FUN_1010d1744(param_1,pcVar15,0,&local_2b0);
                param_1[99] = lVar18;
                if (local_2b0 != (undefined8 *)0x0) {
                  FUN_1010d1414(*local_2b0,local_1e8,0x100);
                  FUN_1010d909c(lVar13,"Name \'%s\' family %i resolved to \'%s\' family %i\n");
                  FUN_1010d1aa4(lVar13,local_2b0);
                  goto LAB_1010eea00;
                }
                goto LAB_1010eeb84;
              }
              pcVar16 = "Couldn\'t bind to interface \'%s\'";
            }
            else {
              if (!bVar3) goto LAB_1010ee978;
LAB_1010eeb84:
              pcVar16 = "Couldn\'t bind to \'%s\'";
            }
LAB_1010eeb90:
            FUN_1010d9258(lVar13,pcVar16);
            iVar17 = 0x2d;
          }
        }
LAB_1010eeba4:
        if (iVar17 != 0) {
          FUN_1010ee3ec(param_1,local_2b8[0]);
          iVar4 = 7;
          if (iVar17 != 1) {
            iVar4 = iVar17;
          }
          goto LAB_1010ee680;
        }
      }
      FUN_1010f6f0c(local_2b8[0],1);
      auVar20 = FUN_1010d0e58();
      *(undefined1 (*) [16])(param_1 + 0x5d) = auVar20;
      if (1 < (int)param_1[0x5f]) {
        FUN_1010f1f70(lVar11,param_1[0x60]);
      }
      if ((!bVar2) && (*(int *)((long)param_1 + 0xac) == 1)) {
        iVar4 = _connect(local_2b8[0],asStack_268,local_26c);
        if (iVar4 == -1) {
          piVar9 = ___error();
          iVar4 = *piVar9;
          *(bool *)((long)param_1 + 0x2cf) = local_278 == 0x1e;
          if (1 < iVar4 - 0x23U) {
            FUN_1010f2ce0(param_1,iVar4);
            FUN_1010d909c(lVar11,"Immediate connect fail for %s: %s\n");
            *(int *)(lVar11 + 0x895c) = iVar4;
            FUN_1010ee3ec(param_1,local_2b8[0]);
            iVar4 = 7;
            goto LAB_1010ee680;
          }
        }
        else {
          *(bool *)((long)param_1 + 0x2cf) = local_278 == 0x1e;
        }
      }
      *param_3 = local_2b8[0];
      iVar4 = 0;
      goto LAB_1010ee680;
    }
    piVar9 = ___error();
    FUN_1010f2ce0(param_1,*piVar9);
    FUN_1010d9258(lVar11,"sa_addr inet_ntop() failed with errno %d: %s");
    FUN_1010ee3ec(param_1,local_2b8[0]);
  }
  iVar4 = 0;
LAB_1010ee680:
  if (lVar19 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar4);
}




int FUN_1010eecec(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  ssize_t sVar3;
  long lVar4;
  undefined1 uStack_41;
  long local_40;
  char local_38;
  
  lVar4 = *(long *)(param_1 + 0x8f0);
  if ((lVar4 != 0) && (*(long *)(param_1 + 0x68) != 0)) {
    local_38 = '\0';
    local_40 = lVar4;
    FUN_101103508(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x60),&local_40,FUN_1010eed9c);
    if (local_38 == '\0') {
      *(undefined8 *)(param_1 + 0x8f0) = 0;
    }
    else {
      if (param_2 != (long *)0x0) {
        *param_2 = lVar4;
      }
      iVar1 = *(int *)(lVar4 + 0x1d0);
      if (*(char *)(lVar4 + 0x208) == '\0') {
        sVar3 = _recv(iVar1,&uStack_41,1,2);
        if (sVar3 != 0) {
          return iVar1;
        }
      }
      else {
        iVar2 = thunk_FUN_101106638(lVar4);
        if (iVar2 != 0) {
          return iVar1;
        }
      }
    }
  }
  return -1;
}




undefined8 FUN_1010eed9c(long param_1,long *param_2)

{
  if (*param_2 != param_1) {
    return 0;
  }
  *(undefined1 *)(param_2 + 1) = 1;
  return 1;
}




void FUN_1010eedbc(long *param_1,long param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  int local_d8 [36];
  long local_48;
  
  lVar6 = *(long *)PTR____stack_chk_guard_101444218;
  lVar7 = *param_1;
  piVar2 = local_d8;
  if (param_3 != (int *)0x0) {
    piVar2 = param_3;
  }
  local_48 = lVar6;
  *piVar2 = *(int *)(param_2 + 4);
  iVar3 = *(int *)((long)param_1 + 0xac);
  piVar2[1] = iVar3;
  if (iVar3 == 2) {
    iVar3 = 0x11;
  }
  else {
    iVar3 = *(int *)(param_2 + 0xc);
  }
  piVar2[2] = iVar3;
  uVar1 = 0x80;
  if (*(uint *)(param_2 + 0x10) < 0x81) {
    uVar1 = *(uint *)(param_2 + 0x10);
  }
  piVar2[3] = uVar1;
  _memcpy(piVar2 + 4,*(void **)(param_2 + 0x20),(ulong)uVar1);
  pcVar5 = *(code **)(lVar7 + 0x308);
  if (pcVar5 == (code *)0x0) {
    iVar3 = _socket(*piVar2,piVar2[1],piVar2[2]);
  }
  else {
    iVar3 = (*pcVar5)(*(undefined8 *)(lVar7 + 0x310),0,piVar2);
  }
  *param_4 = iVar3;
  if (iVar3 == -1) {
    uVar4 = 7;
  }
  else if (((int)param_1[0x15] == 0) || (*piVar2 != 0x1e)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    piVar2[10] = (int)param_1[0x15];
  }
  if (lVar6 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}




void FUN_1010eeed0(undefined8 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  uVar3 = *param_1;
  local_24 = 1;
  iVar1 = _setsockopt(param_2,0xffff,0x1022,&local_24,4);
  if (iVar1 < 0) {
    piVar2 = ___error();
    FUN_1010f2ce0(param_1,*piVar2);
    FUN_1010d909c(uVar3,"Could not set SO_NOSIGPIPE: %s\n");
  }
  return;
}




undefined8 * FUN_1010eef44(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)PTR__malloc_101873620)(0x20);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    puVar1[2] = param_1;
    puVar1[3] = 0;
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  return puVar1;
}




undefined8 FUN_1010eef88(long *param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = (undefined8 *)(*(code *)PTR__malloc_101873620)(0x18);
  if (puVar3 == (undefined8 *)0x0) {
    uVar4 = 0;
  }
  else {
    *puVar3 = param_3;
    lVar5 = param_1[3];
    if (lVar5 == 0) {
      *param_1 = (long)puVar3;
      puVar3[2] = 0;
      puVar3[1] = 0;
      param_1[1] = (long)puVar3;
    }
    else {
      plVar1 = (long *)(param_2 + 0x10);
      plVar2 = plVar1;
      if (param_2 == 0) {
        plVar2 = param_1;
      }
      lVar6 = *plVar2;
      puVar3[1] = param_2;
      puVar3[2] = lVar6;
      if (param_2 == 0) {
        *(undefined8 **)(*param_1 + 8) = puVar3;
        *param_1 = (long)puVar3;
      }
      else {
        if (*plVar1 == 0) {
          param_1[1] = (long)puVar3;
        }
        else {
          *(undefined8 **)(*plVar1 + 8) = puVar3;
        }
        *plVar1 = (long)puVar3;
      }
    }
    param_1[3] = lVar5 + 1;
    uVar4 = 1;
  }
  return uVar4;
}




undefined8 FUN_1010ef040(long *param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 != (undefined8 *)0x0) && (param_1[3] != 0)) {
    lVar1 = param_2[2];
    if ((undefined8 *)*param_1 == param_2) {
      *param_1 = lVar1;
      if (lVar1 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(lVar1 + 8) = 0;
      }
    }
    else {
      lVar2 = param_2[1];
      *(long *)(lVar2 + 0x10) = lVar1;
      if (param_2[2] == 0) {
        param_1[1] = lVar2;
      }
      else {
        *(long *)(param_2[2] + 8) = lVar2;
      }
    }
    (*(code *)param_1[2])(param_3,*param_2);
    param_2[1] = 0;
    param_2[2] = 0;
    *param_2 = 0;
    (*(code *)PTR__free_101873628)(param_2);
    param_1[3] = param_1[3] + -1;
  }
  return 1;
}




void FUN_1010ef0ec(long param_1,undefined8 param_2)

{
  if (param_1 == 0) {
    return;
  }
  while (*(long *)(param_1 + 0x18) != 0) {
    FUN_1010ef040(param_1,*(undefined8 *)(param_1 + 8),param_2);
  }
  (*(code *)PTR__free_101873628)(param_1);
  return;
}




undefined8 FUN_1010ef144(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




undefined8 FUN_1010ef14c(long *param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  if ((param_2 != 0) && (lVar1 = param_1[3], lVar1 != 0)) {
    lVar2 = *(long *)(param_2 + 0x10);
    if (*param_1 == param_2) {
      *param_1 = lVar2;
      if (lVar2 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(lVar2 + 8) = 0;
      }
    }
    else {
      lVar4 = *(long *)(param_2 + 8);
      *(long *)(lVar4 + 0x10) = lVar2;
      if (*(long *)(param_2 + 0x10) == 0) {
        param_1[1] = lVar4;
      }
      else {
        *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar4;
      }
    }
    param_1[3] = lVar1 + -1;
    lVar1 = param_3[3];
    if (lVar1 == 0) {
      *param_3 = param_2;
      *(undefined8 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      param_3[1] = param_2;
    }
    else {
      uVar3 = *(undefined8 *)(param_4 + 0x10);
      *(long *)(param_2 + 8) = param_4;
      *(undefined8 *)(param_2 + 0x10) = uVar3;
      if (*(long *)(param_4 + 0x10) == 0) {
        param_3[1] = param_2;
      }
      else {
        *(long *)(*(long *)(param_4 + 0x10) + 8) = param_2;
      }
      *(long *)(param_4 + 0x10) = param_2;
    }
    param_3[3] = lVar1 + 1;
    return 1;
  }
  return 0;
}




undefined8 FUN_1010ef1f4(long *param_1,ulong param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = 1;
  iVar4 = (int)param_2;
  if ((((iVar4 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[5] = 0;
    *(int *)(param_1 + 4) = iVar4;
    lVar2 = (*(code *)PTR__malloc_101873620)
                      (-(param_2 >> 0x1f & 1) & 0xfffffff800000000 | (param_2 & 0xffffffff) << 3);
    *param_1 = lVar2;
    if (lVar2 == 0) {
LAB_1010ef308:
      *(undefined4 *)(param_1 + 4) = 0;
      uVar1 = 1;
    }
    else {
      if (0 < iVar4) {
        lVar2 = 0;
        lVar5 = -2;
        do {
          uVar1 = FUN_1010eef44(FUN_1010ef324);
          *(undefined8 *)(*param_1 + lVar2) = uVar1;
          lVar3 = *param_1;
          if (*(long *)(lVar3 + lVar2) == 0) {
            if ((int)lVar5 != -2) {
              FUN_1010ef0ec(*(undefined8 *)(lVar3 + lVar2 + -8),0);
              *(undefined8 *)(*param_1 + lVar2 + -8) = 0;
              for (; (int)lVar5 != -1; lVar5 = lVar5 + -1) {
                FUN_1010ef0ec(*(undefined8 *)(*param_1 + lVar5 * 8),0);
                *(undefined8 *)(*param_1 + lVar5 * 8) = 0;
              }
              lVar3 = *param_1;
            }
            (*(code *)PTR__free_101873628)(lVar3);
            *param_1 = 0;
            goto LAB_1010ef308;
          }
          lVar2 = lVar2 + 8;
          lVar3 = lVar5 + 3;
          lVar5 = lVar5 + 1;
        } while (lVar3 < iVar4);
      }
      uVar1 = 0;
    }
  }
  return uVar1;
}




void FUN_1010ef324(long param_1,long *param_2)

{
  if (param_2[1] != 0) {
    (*(code *)PTR__free_101873628)();
    param_2[1] = 0;
  }
  if (*param_2 != 0) {
    (**(code **)(param_1 + 0x18))();
    *param_2 = 0;
  }
  param_2[2] = 0;
  (*(code *)PTR__free_101873628)(param_2);
  return;
}




long FUN_1010ef388(undefined8 param_1,long param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  if (((((int)param_1 != 0) && (param_2 != 0)) && (param_3 != 0)) &&
     (((param_4 != 0 && (lVar2 = (*(code *)PTR__malloc_101873620)(0x30), lVar2 != 0)) &&
      (iVar1 = FUN_1010ef1f4(lVar2,param_1,param_2,param_3,param_4), iVar1 != 0)))) {
    (*(code *)PTR__free_101873628)(lVar2);
    lVar2 = 0;
  }
  return lVar2;
}




undefined8 FUN_1010ef428(long *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long *plVar5;
  long *plVar6;
  
  lVar2 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar5 = *(long **)(*param_1 + lVar2 * 8);
  plVar6 = (long *)*plVar5;
  do {
    if (plVar6 == (long *)0x0) {
LAB_1010ef4b8:
      puVar3 = (undefined8 *)(*(code *)PTR__malloc_101873620)(0x18);
      if (puVar3 != (undefined8 *)0x0) {
        pvVar4 = (void *)(*(code *)PTR__malloc_101873620)(param_3);
        if (pvVar4 != (void *)0x0) {
          _memcpy(pvVar4,param_2,param_3);
          puVar3[1] = pvVar4;
          puVar3[2] = param_3;
          *puVar3 = param_4;
          iVar1 = FUN_1010eef88(plVar5,plVar5[1],puVar3);
          if (iVar1 != 0) {
            param_1[5] = param_1[5] + 1;
            return param_4;
          }
          (*(code *)PTR__free_101873628)(puVar3[1]);
        }
        (*(code *)PTR__free_101873628)(puVar3);
      }
      return 0;
    }
    lVar2 = (*(code *)param_1[2])
                      (*(undefined8 *)(*plVar6 + 8),*(undefined8 *)(*plVar6 + 0x10),param_2,param_3)
    ;
    if (lVar2 != 0) {
      FUN_1010ef040(plVar5,plVar6,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_1010ef4b8;
    }
    plVar6 = (long *)plVar6[2];
  } while( true );
}




undefined8 FUN_1010ef574(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  
  lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
  plVar2 = *(long **)(*param_1 + lVar1 * 8);
  plVar3 = (long *)*plVar2;
  while( true ) {
    if (plVar3 == (long *)0x0) {
      return 1;
    }
    lVar1 = (*(code *)param_1[2])
                      (*(undefined8 *)(*plVar3 + 8),*(undefined8 *)(*plVar3 + 0x10),param_2,param_3)
    ;
    if (lVar1 != 0) break;
    plVar3 = (long *)plVar3[2];
  }
  FUN_1010ef040(plVar2,plVar3,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}




undefined8 FUN_1010ef618(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (param_1 != (long *)0x0) {
    lVar1 = (*(code *)param_1[1])(param_2,param_3,(long)(int)param_1[4]);
    for (puVar2 = (undefined8 *)**(long **)(*param_1 + lVar1 * 8); puVar2 != (undefined8 *)0x0;
        puVar2 = (undefined8 *)puVar2[2]) {
      puVar3 = (undefined8 *)*puVar2;
      lVar1 = (*(code *)param_1[2])(puVar3[1],puVar3[2],param_2,param_3);
      if (lVar1 != 0) {
        return *puVar3;
      }
    }
  }
  return 0;
}




void FUN_1010ef6a4(long *param_1)

{
  long lVar1;
  
  if (0 < (int)param_1[4]) {
    lVar1 = 0;
    do {
      FUN_1010ef0ec(*(undefined8 *)(*param_1 + lVar1 * 8),param_1);
      *(undefined8 *)(*param_1 + lVar1 * 8) = 0;
      lVar1 = lVar1 + 1;
    } while (lVar1 < (int)param_1[4]);
  }
  if (*param_1 != 0) {
    (*(code *)PTR__free_101873628)();
    *param_1 = 0;
  }
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}




void FUN_1010ef71c(long *param_1,undefined8 param_2,code *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (param_1 != (long *)0x0) {
    iVar1 = (int)param_1[4];
    if (0 < iVar1) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(*param_1 + lVar4 * 8);
        puVar3 = (undefined8 *)*puVar2;
        if (puVar3 != (undefined8 *)0x0) {
          do {
            puVar5 = (undefined8 *)puVar3[2];
            iVar1 = (*param_3)(param_2,*(undefined8 *)*puVar3);
            if (iVar1 != 0) {
              FUN_1010ef040(puVar2,puVar3,param_1);
              param_1[5] = param_1[5] + -1;
            }
            puVar3 = puVar5;
          } while (puVar5 != (undefined8 *)0x0);
          iVar1 = (int)param_1[4];
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 < iVar1);
    }
  }
  return;
}




void FUN_1010ef7c8(long param_1)

{
  if (param_1 != 0) {
    FUN_1010ef6a4(param_1);
    (*(code *)PTR__free_101873628)(param_1);
    return;
  }
  return;
}




long FUN_1010ef80c(char *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar4 = 0x1505;
  if (0 < param_2) {
    pcVar2 = param_1;
    do {
      pcVar3 = pcVar2 + 1;
      uVar4 = (long)*pcVar2 ^ uVar4 * 0x21;
      pcVar2 = pcVar3;
    } while (pcVar3 < param_1 + param_2);
  }
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = uVar4 / param_3;
  }
  return uVar4 - uVar1 * param_3;
}




undefined8 FUN_1010ef83c(char *param_1,size_t param_2,char *param_3,size_t param_4)

{
  int iVar1;
  
  if (((param_2 == param_4) && (*param_1 == *param_3)) &&
     (iVar1 = _memcmp(param_1,param_3,param_2), iVar1 == 0)) {
    return 1;
  }
  return 0;
}




void FUN_1010ef884(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  return;
}




undefined8 FUN_1010ef894(long *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (param_1[2] == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = *(undefined8 **)(param_1[2] + 0x10);
    param_1[2] = (long)puVar2;
    puVar6 = puVar2;
    if (puVar2 != (undefined8 *)0x0) goto LAB_1010ef8e8;
  }
  iVar5 = (int)param_1[1];
  lVar4 = (long)iVar5;
  iVar1 = (int)((long *)*param_1)[4];
  puVar6 = puVar2;
  if (iVar5 < iVar1) {
    do {
      iVar5 = iVar5 + 1;
      puVar6 = (undefined8 *)**(undefined8 **)(*(long *)*param_1 + lVar4 * 8);
      if (puVar6 != (undefined8 *)0x0) {
        param_1[2] = (long)puVar6;
        *(int *)(param_1 + 1) = iVar5;
        goto LAB_1010ef904;
      }
      lVar4 = lVar4 + 1;
      puVar6 = puVar2;
    } while (lVar4 < iVar1);
  }
LAB_1010ef8e8:
  if (puVar6 == (undefined8 *)0x0) {
    uVar3 = 0;
    param_1[2] = 0;
  }
  else {
LAB_1010ef904:
    uVar3 = *puVar6;
  }
  return uVar3;
}




undefined8 * FUN_1010ef910(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)(*(code *)PTR__calloc_101873640)(1,0xd0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0xbab1e;
    lVar2 = FUN_1010d1b34();
    puVar1[8] = lVar2;
    if (lVar2 != 0) {
      lVar2 = FUN_1010ef388(param_1,FUN_1010f2118,FUN_1010f212c,FUN_1010f2140);
      puVar1[10] = lVar2;
      if (lVar2 != 0) {
        lVar2 = FUN_101103258(param_2);
        puVar1[0xc] = lVar2;
        if (lVar2 != 0) {
          lVar2 = FUN_1010eef44(FUN_1010efa60);
          puVar1[4] = lVar2;
          if (lVar2 != 0) {
            lVar2 = FUN_1010eef44(FUN_1010efa60);
            puVar1[5] = lVar2;
            if (lVar2 != 0) {
              lVar2 = FUN_1010eb624();
              puVar1[0xd] = lVar2;
              if (lVar2 != 0) {
                *(undefined8 **)(lVar2 + 0x60) = puVar1;
                *(undefined8 *)(lVar2 + 0x8d0) = puVar1[0xc];
                puVar1[0x11] = 5;
                puVar1[0xe] = 0xffffffffffffffff;
                return puVar1;
              }
            }
          }
        }
      }
    }
    FUN_1010ef7c8(puVar1[10]);
    puVar1[10] = 0;
    FUN_1010ef7c8(puVar1[8]);
    puVar1[8] = 0;
    FUN_1011032dc(puVar1[0xc]);
    puVar1[0xc] = 0;
    FUN_1010de718(puVar1[0xd]);
    puVar1[0xd] = 0;
    FUN_1010ef0ec(puVar1[4],0);
    FUN_1010ef0ec(puVar1[5],0);
    (*(code *)PTR__free_101873628)(puVar1);
  }
  return (undefined8 *)0x0;
}




void FUN_1010efa60(void)

{
  return;
}




void FUN_1010efa64(void)

{
  FUN_1010ef910(0x38f,0x61);
  return;
}




undefined8 FUN_1010efa70(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (undefined8 *)0x0) || (*(int *)(param_2 + 0x1182) != -0x3f212453)) {
    return 2;
  }
  if (param_2[0xc] != 0) {
    return 7;
  }
  lVar1 = FUN_1010eef44(FUN_1010efbc8);
  if (lVar1 == 0) {
    return 3;
  }
  param_2[0x1150] = lVar1;
  if (*(int *)(param_2 + 3) != 0) {
    *(undefined4 *)(param_2 + 3) = 0;
  }
  if ((*(char *)((long)param_2 + 0x51d) == '\0') || (*(int *)(param_2 + 0xb) == 1)) {
    if ((param_2[10] != 0) && (*(int *)(param_2 + 0xb) != 0)) goto LAB_1010efb54;
    param_2[10] = param_1[8];
    uVar2 = 2;
  }
  else {
    lVar1 = FUN_1010d12d0();
    if (lVar1 == 0) goto LAB_1010efb54;
    param_2[10] = lVar1;
    uVar2 = 1;
  }
  *(undefined4 *)(param_2 + 0xb) = uVar2;
LAB_1010efb54:
  param_2[0x11a] = param_1[0xc];
  param_2[0x115d] = param_2[0x70];
  *param_2 = 0;
  if (param_1[1] == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_1[1] = (long)param_2;
  }
  else {
    puVar3 = (undefined8 *)param_1[2];
    *puVar3 = param_2;
    param_2[1] = puVar3;
  }
  param_1[2] = (long)param_2;
  param_2[0xc] = param_1;
  FUN_1010efbdc(param_2,1);
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + 1;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  FUN_1010efdc4(param_1);
  return 0;
}




void FUN_1010efbc8(undefined8 param_1,undefined8 param_2)

{
  (*(code *)PTR__free_101873628)(param_2);
  return;
}




void FUN_1010efbdc(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_40;
  undefined8 uStack_38;
  
  lVar5 = *(long *)(param_1 + 0x60);
  if (lVar5 != 0) {
    plVar1 = (long *)(param_1 + 0x8a40);
    if (param_2 == 0) {
      if ((*plVar1 != 0) || (*(int *)(param_1 + 0x8a48) != 0)) {
        lVar4 = *(long *)(param_1 + 0x8a80);
        iVar2 = FUN_1010f564c(*(undefined8 *)(lVar5 + 0x48),param_1 + 0x8a50,
                              (undefined8 *)(lVar5 + 0x48));
        if (iVar2 != 0) {
          FUN_1010d909c(param_1,"Internal error clearing splay node = %d\n");
        }
        while (*(long *)(lVar4 + 0x18) != 0) {
          FUN_1010ef040(lVar4,*(undefined8 *)(lVar4 + 8),0);
        }
        *plVar1 = 0;
        *(undefined4 *)(param_1 + 0x8a48) = 0;
      }
    }
    else {
      auVar6 = FUN_1010d0e58();
      lVar4 = param_2 / 1000 + (param_2 >> 0x3f);
      local_40 = auVar6._0_8_ + (lVar4 - (param_2 >> 0x3f));
      iVar2 = auVar6._8_4_ +
              ((int)param_2 +
              ((int)lVar4 - (SUB164(SEXT816(param_2) * SEXT816(0x20c49ba5e353f7cf),0xc) >> 0x1f)) *
              -1000) * 1000;
      if (999999 < iVar2) {
        local_40 = local_40 + 1;
        iVar2 = iVar2 + -1000000;
      }
      uStack_38 = CONCAT44(auVar6._12_4_,iVar2);
      if ((*plVar1 != 0) || (*(int *)(param_1 + 0x8a48) != 0)) {
        lVar4 = FUN_1010d0e80(local_40,uStack_38,*(undefined8 *)(param_1 + 0x8a40),
                              *(undefined8 *)(param_1 + 0x8a48));
        if (0 < lVar4) {
          FUN_1010f1ea4(*(undefined8 *)(param_1 + 0x8a80),&local_40);
          return;
        }
        FUN_1010f1ea4(*(undefined8 *)(param_1 + 0x8a80),plVar1);
        iVar2 = FUN_1010f564c(*(undefined8 *)(lVar5 + 0x48),param_1 + 0x8a50,
                              (undefined8 *)(lVar5 + 0x48));
        if (iVar2 != 0) {
          FUN_1010d909c(param_1,"Internal error removing splay node = %d\n");
        }
      }
      *(undefined8 *)(param_1 + 0x8a48) = uStack_38;
      *plVar1 = local_40;
      *(long *)(param_1 + 0x8a78) = param_1;
      uVar3 = FUN_1010f5470(*(undefined8 *)(param_1 + 0x8a40),*(undefined8 *)(param_1 + 0x8a48),
                            *(undefined8 *)(lVar5 + 0x48),param_1 + 0x8a50);
      *(undefined8 *)(lVar5 + 0x48) = uVar3;
    }
  }
  return;
}




void FUN_1010efdc4(long param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  long local_28;
  
  if (*(long *)(param_1 + 0xb0) == 0) {
    return;
  }
  FUN_1010f07dc(param_1,&local_28);
  if (local_28 < 0) {
    if ((*(long *)(param_1 + 0xc0) == 0) && (*(int *)(param_1 + 200) == 0)) {
      return;
    }
    *(long *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xb0);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
    local_28 = -1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x48);
    if ((*(long *)(lVar2 + 0x18) == *(long *)(param_1 + 0xc0)) &&
       (*(int *)(lVar2 + 0x20) == *(int *)(param_1 + 200))) {
      return;
    }
    lVar3 = *(long *)(lVar2 + 0x18);
    *(undefined8 *)(param_1 + 200) = *(undefined8 *)(lVar2 + 0x20);
    *(long *)(param_1 + 0xc0) = lVar3;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0xb0);
    uVar1 = *(undefined8 *)(param_1 + 0xb8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001010efe5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,local_28,uVar1);
  return;
}




undefined8 FUN_1010efe70(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 *puVar6;
  
  if ((param_1 == (long *)0x0) || (*param_1 != 0xbab1e)) {
    uVar4 = 1;
  }
  else if ((param_2 == (long *)0x0) || ((int)param_2[0x1182] != -0x3f212453)) {
    uVar4 = 2;
  }
  else {
    if (param_2[0xc] != 0) {
      plVar5 = param_2 + 2;
      puVar6 = (undefined8 *)*plVar5;
      uVar1 = *(uint *)(param_2 + 3);
      if (puVar6 == (undefined8 *)0x0) {
        bVar2 = false;
      }
      else {
        bVar2 = (long *)*puVar6 == param_2;
      }
      if (uVar1 < 0x10) {
        *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
      }
      if (uVar1 - 9 < 7 && puVar6 != (undefined8 *)0x0) {
        bVar2 = true;
        *(undefined1 *)(puVar6 + 0x59) = 1;
        *puVar6 = param_2;
      }
      FUN_1010efbdc(param_2,0);
      lVar3 = param_2[0x1150];
      if (lVar3 != 0) {
        FUN_1010ef0ec(lVar3,0);
        param_2[0x1150] = 0;
      }
      if ((int)param_2[0xb] == 2) {
        param_2[10] = 0;
        *(undefined4 *)(param_2 + 0xb) = 0;
      }
      if (*plVar5 != 0) {
        if (bVar2) {
          FUN_1010e4bb0(plVar5,*(undefined4 *)((long)param_2 + 0x1c),uVar1 < 0x10);
        }
        else {
          FUN_1010e21a0(param_2);
        }
      }
      FUN_1010ed620(param_2 + 0x115e);
      param_2[0x11a] = 0;
      *(undefined4 *)(param_2 + 3) = 0x10;
      FUN_1010f0058(param_1,param_2);
      if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
        *(undefined8 *)param_2[2] = 0;
        *plVar5 = 0;
      }
      param_2[0xc] = 0;
      for (plVar5 = *(long **)param_1[4]; plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if (*(long **)(*plVar5 + 8) == param_2) {
          FUN_1010ef040((long *)param_1[4],plVar5,0);
          break;
        }
      }
      lVar3 = *param_2;
      plVar5 = (long *)param_2[1];
      if (plVar5 == (long *)0x0) {
        param_1[1] = lVar3;
      }
      else {
        *plVar5 = lVar3;
        lVar3 = *param_2;
      }
      if (lVar3 == 0) {
        param_1[2] = (long)plVar5;
      }
      else {
        *(long **)(lVar3 + 8) = plVar5;
      }
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
      FUN_1010efdc4(param_1);
    }
    uVar4 = 0;
  }
  return uVar4;
}

