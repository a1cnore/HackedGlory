// functions/10027 — 145 functions
#include "GameKindred.h"




void FUN_100270380(long param_1)

{
  uint *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (uint *)(param_1 + 0x11f80);
  if (*puVar1 != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x11f88) + uVar5 * 8) == 0) goto LAB_100270400;
      iVar2 = FUN_100642d08();
      if (iVar2 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x11f88) + uVar5 * 8),1);
      }
      lVar4 = *(long *)(param_1 + 0x11f88);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(param_1 + 0x11f88);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar1);
  }
  if (*(long *)(param_1 + 0x11f88) != 0) {
LAB_100270400:
    *puVar1 = 0;
  }
  return;
}




void FUN_100270410(long param_1)

{
  uint *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (uint *)(param_1 + 0x11fa0);
  if (*puVar1 != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x11fa8) + uVar5 * 8) == 0) goto LAB_100270490;
      iVar2 = FUN_100642d08();
      if (iVar2 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x11fa8) + uVar5 * 8),1);
      }
      lVar4 = *(long *)(param_1 + 0x11fa8);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(param_1 + 0x11fa8);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar1);
  }
  if (*(long *)(param_1 + 0x11fa8) != 0) {
LAB_100270490:
    *puVar1 = 0;
  }
  return;
}




void FUN_1002704a0(long param_1)

{
  uint *puVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  
  puVar1 = (uint *)(param_1 + 0x11f90);
  *(undefined8 *)(param_1 + 0x11ff0) = 0;
  if (*puVar1 != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x11f98) + uVar5 * 8) == 0) goto LAB_100270524;
      iVar2 = FUN_100642d08();
      if (iVar2 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x11f98) + uVar5 * 8),1);
      }
      lVar4 = *(long *)(param_1 + 0x11f98);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(param_1 + 0x11f98);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *puVar1);
  }
  if (*(long *)(param_1 + 0x11f98) != 0) {
LAB_100270524:
    *puVar1 = 0;
  }
  if (*(int *)(param_1 + 0x11fd0) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x11fd8) + uVar5 * 8) == 0) goto LAB_100270590;
      iVar2 = FUN_100642d08();
      if (iVar2 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x11fd8) + uVar5 * 8),1);
      }
      lVar4 = *(long *)(param_1 + 0x11fd8);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(param_1 + 0x11fd8);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x11fd0));
  }
  if (*(long *)(param_1 + 0x11fd8) != 0) {
LAB_100270590:
    *(undefined4 *)(param_1 + 0x11fd0) = 0;
  }
  if (*(int *)(param_1 + 0x11fe0) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x11fe8) + uVar5 * 8) == 0) goto LAB_1002705fc;
      iVar2 = FUN_100642d08();
      if (iVar2 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x11fe8) + uVar5 * 8),1);
      }
      lVar4 = *(long *)(param_1 + 0x11fe8);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(param_1 + 0x11fe8);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x11fe0));
  }
  if (*(long *)(param_1 + 0x11fe8) != 0) {
LAB_1002705fc:
    *(undefined4 *)(param_1 + 0x11fe0) = 0;
  }
  if (*(int *)(param_1 + 0x11fb0) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x11fb8) + uVar5 * 8) == 0) goto LAB_100270668;
      iVar2 = FUN_100642d08();
      if (iVar2 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x11fb8) + uVar5 * 8),1);
      }
      lVar4 = *(long *)(param_1 + 0x11fb8);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(param_1 + 0x11fb8);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x11fb0));
  }
  if (*(long *)(param_1 + 0x11fb8) != 0) {
LAB_100270668:
    *(undefined4 *)(param_1 + 0x11fb0) = 0;
  }
  if (*(int *)(param_1 + 0x11fc0) != 0) {
    uVar5 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x11fc8) + uVar5 * 8) == 0) goto LAB_1002706d4;
      iVar2 = FUN_100642d08();
      if (iVar2 != 0) {
        FUN_1006423ec(*(undefined8 *)(*(long *)(param_1 + 0x11fc8) + uVar5 * 8),1);
      }
      lVar4 = *(long *)(param_1 + 0x11fc8);
      plVar3 = *(long **)(lVar4 + uVar5 * 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        lVar4 = *(long *)(param_1 + 0x11fc8);
      }
      *(undefined8 *)(lVar4 + uVar5 * 8) = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x11fc0));
  }
  if (*(long *)(param_1 + 0x11fc8) != 0) {
LAB_1002706d4:
    *(undefined4 *)(param_1 + 0x11fc0) = 0;
  }
  return;
}




void FUN_1002706e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  FUN_10003bec8(param_1);
  return;
}




void FUN_10027078c(long param_1)

{
  FUN_10026f59c(param_1 + -0x368);
  return;
}




void FUN_100270794(long param_1)

{
  FUN_10026f59c(param_1 + -0x380);
  return;
}




void FUN_10027079c(long param_1)

{
  FUN_10026f59c(param_1 + -0x398);
  return;
}




void FUN_1002707a4(long param_1)

{
  FUN_10026f59c(param_1 + -0x3a0);
  return;
}




void FUN_1002707ac(long param_1)

{
  FUN_10026f59c(param_1 + -0x3b8);
  return;
}




void FUN_1002707b4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026f59c();
  operator_delete(pvVar1);
  return;
}




void FUN_1002707c8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026f59c(param_1 + -0x368);
  operator_delete(pvVar1);
  return;
}




void FUN_1002707e0(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026f59c(param_1 + -0x380);
  operator_delete(pvVar1);
  return;
}




void FUN_1002707f8(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026f59c(param_1 + -0x398);
  operator_delete(pvVar1);
  return;
}




void FUN_100270810(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026f59c(param_1 + -0x3a0);
  operator_delete(pvVar1);
  return;
}




void FUN_100270828(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10026f59c(param_1 + -0x3b8);
  operator_delete(pvVar1);
  return;
}




void FUN_100270840(long param_1)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined8 local_38;
  
  iVar5 = FUN_1004eef24();
  if (iVar5 != 0) {
    cVar3 = *(char *)(param_1 + 0x125b2);
    FUN_10015d3ec();
    dVar9 = (double)FUN_1001664b0();
    if ((bool)cVar3 != 0.0 < dVar9) {
      FUN_100270a84(param_1);
      FUN_10015d3ec();
      dVar9 = (double)FUN_1001664b0();
      *(bool *)(param_1 + 0x125b2) = 0.0 < dVar9;
    }
  }
  uVar6 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar6,auStack_3c,auStack_40,auStack_44);
  lVar1 = param_1 + 0x35d0;
  fVar8 = *(float *)(param_1 + 0x12590) * 0.5;
  fVar10 = (float)NEON_fminnm(*(undefined4 *)(param_1 + 0x38e4),DAT_101854aec);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x3610) == fVar8) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x3614)) && !NAN(fVar10))) {
    bVar4 = *(float *)(param_1 + 0x3614) == fVar10;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x3610) = fVar8;
    *(float *)(param_1 + 0x3614) = fVar10;
    FUN_1000200a0(lVar1);
  }
  local_38 = 0x3f8000003f000000;
  (**(code **)(*(long *)(param_1 + 0x35d0) + 0x28))(lVar1,&local_38);
  fVar8 = *(float *)(param_1 + 0x38e4);
  if (0.0 < fVar8) {
    fVar10 = (float)NEON_fminnm(fVar8 / DAT_101854aec,0x3f800000);
    fVar10 = fVar10 * 0.33 + 0.66;
    bVar4 = false;
    if ((*(float *)(param_1 + 0x3618) == fVar10) &&
       (bVar4 = false, !NAN(*(float *)(param_1 + 0x361c)) && !NAN(fVar10))) {
      bVar4 = *(float *)(param_1 + 0x361c) == fVar10;
    }
    if (!bVar4) {
      *(float *)(param_1 + 0x3618) = fVar10;
      *(float *)(param_1 + 0x361c) = fVar10;
      FUN_1000200a0(lVar1);
      fVar8 = *(float *)(param_1 + 0x38e4);
    }
    if (fVar8 <= DAT_101854aec) {
      fVar8 = (float)NEON_fminnm(fVar8 / DAT_101854aec,0x3f800000);
      uVar7 = (uint)(fVar8 * 51.0 + 30.599998);
      uVar2 = *(uint *)(param_1 + 0x3654);
      if (uVar7 != (uVar2 >> 7 & 0xff)) {
        *(uint *)(param_1 + 0x3654) = uVar2 & 0xffff8000 | uVar2 & 0x7f | (uVar7 & 0xff) << 7;
        goto LAB_1002709e4;
      }
    }
    else if ((~*(uint *)(param_1 + 0x3654) & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x3654) = *(uint *)(param_1 + 0x3654) | 0x7f80;
LAB_1002709e4:
      FUN_1000200a0(lVar1);
    }
    FUN_100651460(lVar1,&DAT_10115a168);
  }
  uVar2 = *(uint *)(param_1 + 0x944);
  if ((((*(int *)(param_1 + 0x11f90) == 0) && (*(int *)(param_1 + 0x11fd0) == 0)) &&
      (*(int *)(param_1 + 0x11fe0) == 0)) &&
     (((*(int *)(param_1 + 0x11fb0) == 0 && (*(int *)(param_1 + 0x11fc0) == 0)) &&
      (*(int *)(param_1 + 0x125a0) == 0)))) {
    *(uint *)(param_1 + 0x944) = uVar2 & 0xfffffffb;
    if ((uVar2 >> 2 & 1) == 0) goto LAB_100270a44;
  }
  else {
    *(uint *)(param_1 + 0x944) = uVar2 | 4;
    if ((uVar2 >> 2 & 1) != 0) goto LAB_100270a44;
  }
  FUN_100270b60(param_1);
LAB_100270a44:
  uVar6 = FUN_10015d3ec();
  uVar6 = FUN_10016680c(uVar6,0);
  FUN_1001b4c0c(param_1 + 0x8c0,uVar6);
  return;
}




void FUN_100270a84(long param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  
  FUN_10027c3ac(param_1 + 0x124b0,0);
  lVar1 = param_1 + 0xde98;
  FUN_100186730(lVar1,1);
  plVar3 = *(long **)(param_1 + 0x11ef8);
  if (((plVar3 == (long *)0x0) || (uVar4 = (**(code **)(*plVar3 + 0x30))(), (uVar4 & 1) == 0)) &&
     (iVar2 = FUN_1004eef24(), iVar2 != 0)) {
    FUN_100186c14(lVar1,param_1 + 75000);
  }
  FUN_1002795e8(param_1,0,0);
  plVar3 = *(long **)(param_1 + 0x11ef8);
  if ((plVar3 != (long *)0x0) && (iVar2 = (**(code **)(*plVar3 + 0x40))(), iVar2 == 2)) {
    return;
  }
  FUN_100187878(lVar1,&DAT_101d91198,1,1);
  return;
}




void FUN_100270b60(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_74 [4];
  float local_70;
  undefined1 auStack_6c [4];
  undefined1 *local_68;
  
  uVar4 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar4,auStack_6c,&local_70,auStack_74);
  iVar3 = FUN_100126c88();
  fVar6 = local_70;
  fVar8 = *(float *)(param_1 + 0x12590) * 0.5;
  if ((*(byte *)(param_1 + 0x944) >> 2 & 1) == 0) {
    plVar5 = (long *)(param_1 + 0x1e78);
    local_70 = local_70 + *(float *)(param_1 + 0x12594) * -0.5;
    bVar2 = false;
    if ((*(float *)(param_1 + 0x1eb8) == fVar8) &&
       (bVar2 = false, !NAN(*(float *)(param_1 + 0x1ebc)) && !NAN(local_70))) {
      bVar2 = *(float *)(param_1 + 0x1ebc) == local_70;
    }
    if (!bVar2) {
      *(float *)(param_1 + 0x1eb8) = fVar8;
      *(float *)(param_1 + 0x1ebc) = local_70;
      FUN_1000200a0(plVar5);
    }
  }
  else {
    plVar5 = (long *)(param_1 + 0x8c0);
    fVar7 = 18.0;
    fVar9 = 18.0;
    if (iVar3 == 0) {
      fVar9 = 12.0;
    }
    lVar1 = param_1 + 0x1e78;
    fVar10 = *(float *)(param_1 + 0x12594);
    FUN_10064e3cc(lVar1);
    fVar6 = fVar6 + fVar9 + (fVar7 - fVar10) * 0.5;
    fVar7 = *(float *)(param_1 + 0x1eb8);
    bVar2 = false;
    if ((fVar7 == fVar8) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x1ebc)) && !NAN(fVar6))) {
      bVar2 = *(float *)(param_1 + 0x1ebc) == fVar6;
    }
    if (!bVar2) {
      *(float *)(param_1 + 0x1eb8) = fVar8;
      *(float *)(param_1 + 0x1ebc) = fVar6;
      FUN_1000200a0(lVar1);
    }
    local_68 = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x1e78) + 0x28))(lVar1,&local_68);
    fVar6 = *(float *)(param_1 + 0x12594);
    FUN_10064e3cc(plVar5);
    fVar6 = (local_70 - fVar9) + (fVar7 + fVar6) * -0.5;
    bVar2 = false;
    if ((*(float *)(param_1 + 0x900) == fVar8) &&
       (bVar2 = false, !NAN(*(float *)(param_1 + 0x904)) && !NAN(fVar6))) {
      bVar2 = *(float *)(param_1 + 0x904) == fVar6;
    }
    if (!bVar2) {
      *(float *)(param_1 + 0x900) = fVar8;
      *(float *)(param_1 + 0x904) = fVar6;
      FUN_1000200a0(plVar5);
    }
  }
  local_68 = &DAT_3f0000003f000000;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_68);
  return;
}




void FUN_100270d00(long *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    (**(code **)(*param_1 + 0x1c0))();
    FUN_1001117e4(1);
    FUN_100111808(*(char *)((long)param_1 + 0x125af) == '\0');
    iVar1 = FUN_10015d3f8();
    if (iVar1 != 0) {
      lVar2 = FUN_10015d3ec();
      FUN_100169cec(lVar2 + 0x278);
    }
    *(undefined1 *)((long)param_1 + 0x125b4) = 1;
    FUN_100531b88(param_1 + 0x714);
    uVar3 = FUN_10012f6b0();
    if (((uVar3 & 1) == 0) && ((int)param_1[0x248e] != 0)) {
      uVar4 = FUN_1004e0150("MENU_FRIENDS_STAR_FOLLOW_TUTORIAL_TOASTIE",0);
      FUN_1001e55b0(0xbf800000,uVar4,0,1);
      FUN_10012f5f0();
    }
    (**(code **)(*param_1 + 0x150))(param_1);
    FUN_100270dec(param_1);
    return;
  }
  FUN_1001117e4(0);
  FUN_100111808(1);
  *(undefined1 *)((long)param_1 + 0x125b4) = 0;
  return;
}




void FUN_100270dec(long param_1)

{
  uint *puVar1;
  float *pfVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 *local_a8 [2];
  char local_91;
  undefined1 auStack_8c [4];
  float local_88;
  undefined1 auStack_84 [4];
  
  puVar1 = (uint *)(param_1 + 0x11f80);
  pfVar2 = (float *)(param_1 + 0x41a0);
  uVar14 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar14,auStack_84,&local_88,auStack_8c);
  iVar13 = FUN_100126c88();
  fVar21 = *(float *)(param_1 + 0x12590);
  lVar15 = param_1 + 0x4448;
  FUN_10064e47c(fVar21,0x43000000,lVar15);
  lVar3 = param_1 + 0x4f48;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x12590),0x43000000,lVar3);
  lVar4 = param_1 + 0x5a48;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x12590),0x43000000,lVar4);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x12590),0x43000000);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x12590),0x43000000);
  lVar5 = param_1 + 0x7b48;
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x12590),0x43000000,lVar5);
  plVar6 = (long *)(param_1 + 0x8648);
  FUN_10064e47c(*(undefined4 *)(param_1 + 0x12590),0x43000000);
  uVar17 = *puVar1;
  uVar16 = (uint)(uVar17 != 0);
  *(uint *)(param_1 + 0x4734) =
       *(uint *)(param_1 + 0x4734) & 0xfffffff8 | *(uint *)(param_1 + 0x4734) & 3 | uVar16 << 2;
  *(uint *)(param_1 + 0x4954) =
       *(uint *)(param_1 + 0x4954) & 0xfffffff8 | *(uint *)(param_1 + 0x4954) & 3 | uVar16 << 2;
  *(uint *)(param_1 + 0x44cc) =
       *(uint *)(param_1 + 0x44cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x44cc) & 3 | (uint)(uVar17 != 0) << 2;
  if (uVar17 == 0) {
    fVar22 = 88.0;
  }
  else {
    if ((*(float *)(param_1 + 0x46f0) != 72.0) || (*(float *)(param_1 + 0x46f4) != 88.0)) {
      *(undefined8 *)(param_1 + 0x46f0) = 0x42b0000042900000;
      FUN_1000200a0(param_1 + 0x46b0);
    }
    local_a8[0] = (undefined1 *)0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x46b0) + 0x28))(param_1 + 0x46b0,local_a8);
    if ((*(float *)(param_1 + 0x4910) != 36.0) || (*(float *)(param_1 + 0x4914) != 88.0)) {
      *(undefined8 *)(param_1 + 0x4910) = 0x42b0000042100000;
      FUN_1000200a0(param_1 + 0x48d0);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x48d0) + 0x28))(param_1 + 0x48d0,local_a8);
    if ((*(float *)(param_1 + 0x4488) != 0.0) || (*(float *)(param_1 + 0x448c) != 132.0)) {
      *(undefined8 *)(param_1 + 0x4488) = 0x4304000000000000;
      FUN_1000200a0(lVar15);
    }
    local_a8[0] = (undefined1 *)0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x4448) + 0x28))(lVar15,local_a8);
    if ((*(float *)(param_1 + 0x4820) != 72.0) || (*(float *)(param_1 + 0x4824) != 132.0)) {
      *(undefined8 *)(param_1 + 0x4820) = 0x4304000042900000;
      FUN_1000200a0(param_1 + 0x47e0);
    }
    FUN_10064e47c(fVar21 + -104.0,0x40800000,param_1 + 0x47e0);
    fVar22 = DAT_101d237d0 * 0.5 + 136.0;
    if ((*(float *)(param_1 + 0x4400) != 0.0) || (*(float *)(param_1 + 0x4404) != fVar22)) {
      *(undefined4 *)(param_1 + 0x4400) = 0;
      *(float *)(param_1 + 0x4404) = fVar22;
      FUN_1000200a0(param_1 + 0x43c0);
    }
    if (*(char *)(param_1 + 0x125a8) == '\0') {
      if (*puVar1 != 0) {
        uVar18 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11f88) + uVar18 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & 0xfffffffb;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *puVar1);
      }
    }
    else if (*puVar1 != 0) {
      uVar18 = 0;
      fVar23 = DAT_101d237d0;
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x11f88) + uVar18 * 8);
        *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) | 4;
        lVar15 = *(long *)(*(long *)(param_1 + 0x11f88) + uVar18 * 8);
        fVar20 = fVar23 * (float)(uVar18 & 0xffffffff);
        bVar12 = false;
        if ((*(float *)(lVar15 + 0x40) == 0.0) &&
           (bVar12 = false, !NAN(*(float *)(lVar15 + 0x44)) && !NAN(fVar20))) {
          bVar12 = *(float *)(lVar15 + 0x44) == fVar20;
        }
        if (!bVar12) {
          *(undefined4 *)(lVar15 + 0x40) = 0;
          *(float *)(lVar15 + 0x44) = fVar20;
          FUN_1000200a0();
          fVar23 = DAT_101d237d0;
        }
        fVar22 = fVar23 + fVar22;
        uVar18 = uVar18 + 1;
      } while (uVar18 < *puVar1);
    }
  }
  if (*(int *)(param_1 + 0x11fa0) == 0) {
    *(uint *)(param_1 + 0x5234) = *(uint *)(param_1 + 0x5234) & 0xfffffffb;
    *(uint *)(param_1 + 0x5454) = *(uint *)(param_1 + 0x5454) & 0xfffffffb;
    *(uint *)(param_1 + 0x4fcc) = *(uint *)(param_1 + 0x4fcc) & 0xfffffffb;
    *(uint *)(param_1 + 0x5364) = *(uint *)(param_1 + 0x5364) & 0xfffffffb;
    *(uint *)(param_1 + 0x6964) = *(uint *)(param_1 + 0x6964) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x5234) = *(uint *)(param_1 + 0x5234) | 4;
    *(uint *)(param_1 + 0x5454) = *(uint *)(param_1 + 0x5454) | 4;
    *(uint *)(param_1 + 0x4fcc) = *(uint *)(param_1 + 0x4fcc) | 4;
    if ((*(float *)(param_1 + 0x51f0) != 72.0) || (*(float *)(param_1 + 0x51f4) != fVar22)) {
      *(undefined4 *)(param_1 + 0x51f0) = 0x42900000;
      *(float *)(param_1 + 0x51f4) = fVar22;
      FUN_1000200a0(param_1 + 0x51b0);
    }
    local_a8[0] = (undefined1 *)0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x51b0) + 0x28))(param_1 + 0x51b0,local_a8);
    if ((*(float *)(param_1 + 0x5410) != 36.0) || (*(float *)(param_1 + 0x5414) != fVar22)) {
      *(undefined4 *)(param_1 + 0x5410) = 0x42100000;
      *(float *)(param_1 + 0x5414) = fVar22;
      FUN_1000200a0(param_1 + 0x53d0);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x53d0) + 0x28))(param_1 + 0x53d0,local_a8);
    fVar23 = fVar22 + 44.0;
    if ((*(float *)(param_1 + 0x4f88) != 0.0) || (*(float *)(param_1 + 0x4f8c) != fVar23)) {
      *(undefined4 *)(param_1 + 0x4f88) = 0;
      *(float *)(param_1 + 0x4f8c) = fVar23;
      FUN_1000200a0(lVar3);
    }
    local_a8[0] = (undefined1 *)0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x4f48) + 0x28))(lVar3,local_a8);
    if ((*(float *)(param_1 + 0x5320) != 72.0) || (*(float *)(param_1 + 0x5324) != fVar23)) {
      *(undefined4 *)(param_1 + 0x5320) = 0x42900000;
      *(float *)(param_1 + 0x5324) = fVar23;
      FUN_1000200a0(param_1 + 0x52e0);
    }
    FUN_10064e47c(fVar21 + -104.0,0x40800000,param_1 + 0x52e0);
    fVar22 = fVar22 + 48.0 + DAT_101d237d0 * 0.5;
    if ((*(float *)(param_1 + 0x4f00) != 0.0) || (*(float *)(param_1 + 0x4f04) != fVar22)) {
      *(undefined4 *)(param_1 + 0x4f00) = 0;
      *(float *)(param_1 + 0x4f04) = fVar22;
      FUN_1000200a0(param_1 + 0x4ec0);
    }
    if (((*(char *)(param_1 + 0x125aa) == '\0') &&
        ((*(uint *)(param_1 + 0x12480) < 5 ||
         ((((*(int *)(param_1 + 0x11fc0) == 0 && (*(int *)(param_1 + 0x11fe0) == 0)) &&
           (*(int *)(param_1 + 0x11fd0) == 0)) && (*(int *)(param_1 + 0x11f90) == 0)))))) ||
       (*(char *)(param_1 + 0x125a9) != '\0')) {
      if (*(int *)(param_1 + 0x11fa0) != 0) {
        uVar18 = 0;
        fVar23 = DAT_101d237d0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fa8) + uVar18 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) | 4;
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fa8) + uVar18 * 8);
          fVar20 = fVar23 * (float)(uVar18 & 0xffffffff);
          bVar12 = false;
          if ((*(float *)(lVar15 + 0x40) == 0.0) &&
             (bVar12 = false, !NAN(*(float *)(lVar15 + 0x44)) && !NAN(fVar20))) {
            bVar12 = *(float *)(lVar15 + 0x44) == fVar20;
          }
          if (!bVar12) {
            *(undefined4 *)(lVar15 + 0x40) = 0;
            *(float *)(lVar15 + 0x44) = fVar20;
            FUN_1000200a0();
            fVar23 = DAT_101d237d0;
          }
          fVar22 = fVar23 + fVar22;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(param_1 + 0x11fa0));
      }
    }
    else if (*(int *)(param_1 + 0x11fa0) != 0) {
      uVar18 = 0;
      do {
        lVar15 = *(long *)(*(long *)(param_1 + 0x11fa8) + uVar18 * 8);
        *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & 0xfffffffb;
        uVar18 = uVar18 + 1;
      } while (uVar18 < *(uint *)(param_1 + 0x11fa0));
    }
  }
  iVar11 = *(int *)(param_1 + 0x11fc0);
  uVar17 = (uint)(iVar11 != 0);
  *(uint *)(param_1 + 0x5d34) =
       *(uint *)(param_1 + 0x5d34) & 0xfffffff8 | *(uint *)(param_1 + 0x5d34) & 3 | uVar17 << 2;
  *(uint *)(param_1 + 0x5f54) =
       *(uint *)(param_1 + 0x5f54) & 0xfffffff8 | *(uint *)(param_1 + 0x5f54) & 3 | uVar17 << 2;
  *(uint *)(param_1 + 0x5acc) =
       *(uint *)(param_1 + 0x5acc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x5acc) & 3 | (uint)(iVar11 != 0) << 2;
  if (iVar11 != 0) {
    bVar12 = false;
    if ((*(float *)(param_1 + 0x5cf0) == 72.0) &&
       (bVar12 = false, !NAN(*(float *)(param_1 + 0x5cf4)) && !NAN(fVar22))) {
      bVar12 = *(float *)(param_1 + 0x5cf4) == fVar22;
    }
    if (!bVar12) {
      *(undefined4 *)(param_1 + 0x5cf0) = 0x42900000;
      *(float *)(param_1 + 0x5cf4) = fVar22;
      FUN_1000200a0(param_1 + 0x5cb0);
    }
    local_a8[0] = (undefined1 *)0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x5cb0) + 0x28))(param_1 + 0x5cb0,local_a8);
    if ((*(float *)(param_1 + 0x5f10) != 36.0) || (*(float *)(param_1 + 0x5f14) != fVar22)) {
      *(undefined4 *)(param_1 + 0x5f10) = 0x42100000;
      *(float *)(param_1 + 0x5f14) = fVar22;
      FUN_1000200a0(param_1 + 0x5ed0);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x5ed0) + 0x28))(param_1 + 0x5ed0,local_a8);
    fVar23 = fVar22 + 44.0;
    if ((*(float *)(param_1 + 0x5a88) != 0.0) || (*(float *)(param_1 + 0x5a8c) != fVar23)) {
      *(undefined4 *)(param_1 + 0x5a88) = 0;
      *(float *)(param_1 + 0x5a8c) = fVar23;
      FUN_1000200a0(lVar4);
    }
    local_a8[0] = (undefined1 *)0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x5a48) + 0x28))(lVar4,local_a8);
    if ((*(float *)(param_1 + 0x5e20) != 72.0) || (*(float *)(param_1 + 0x5e24) != fVar23)) {
      *(undefined4 *)(param_1 + 0x5e20) = 0x42900000;
      *(float *)(param_1 + 0x5e24) = fVar23;
      FUN_1000200a0(param_1 + 0x5de0);
    }
    FUN_10064e47c(fVar21 + -104.0,0x40800000,param_1 + 0x5de0);
    fVar22 = fVar22 + 48.0 + DAT_101d237d0 * 0.5;
    if ((*(float *)(param_1 + 0x5a00) != 0.0) || (*(float *)(param_1 + 0x5a04) != fVar22)) {
      *(undefined4 *)(param_1 + 0x5a00) = 0;
      *(float *)(param_1 + 0x5a04) = fVar22;
      FUN_1000200a0(param_1 + 0x59c0);
    }
    uVar17 = *(uint *)(param_1 + 0x11fc0);
    uVar18 = (ulong)uVar17;
    if (*(char *)(param_1 + 0x125ab) == '\0') {
      if (uVar17 != 0) {
        uVar18 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fc8) + uVar18 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & 0xfffffffb;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(param_1 + 0x11fc0));
      }
    }
    else {
      if (uVar17 != 0) {
        uVar19 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fc8) + uVar19 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) | 4;
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fc8) + uVar19 * 8);
          fVar23 = DAT_101d237d0 * (float)(uVar19 & 0xffffffff);
          bVar12 = false;
          if ((*(float *)(lVar15 + 0x40) == 0.0) &&
             (bVar12 = false, !NAN(*(float *)(lVar15 + 0x44)) && !NAN(fVar23))) {
            bVar12 = *(float *)(lVar15 + 0x44) == fVar23;
          }
          if (!bVar12) {
            *(undefined4 *)(lVar15 + 0x40) = 0;
            *(float *)(lVar15 + 0x44) = fVar23;
            FUN_1000200a0();
          }
          uVar19 = uVar19 + 1;
          uVar18 = (ulong)*(uint *)(param_1 + 0x11fc0);
        } while (uVar19 < uVar18);
      }
      fVar22 = fVar22 + (float)uVar18 * DAT_101d237d0;
    }
  }
  iVar11 = *(int *)(param_1 + 0x11fe0);
  uVar17 = (uint)(iVar11 != 0);
  *(uint *)(param_1 + 0x7e34) =
       *(uint *)(param_1 + 0x7e34) & 0xfffffff8 | *(uint *)(param_1 + 0x7e34) & 3 | uVar17 << 2;
  *(uint *)(param_1 + 0x8054) =
       *(uint *)(param_1 + 0x8054) & 0xfffffff8 | *(uint *)(param_1 + 0x8054) & 3 | uVar17 << 2;
  *(uint *)(param_1 + 0x7bcc) =
       *(uint *)(param_1 + 0x7bcc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x7bcc) & 3 | (uint)(iVar11 != 0) << 2;
  if (iVar11 != 0) {
    bVar12 = false;
    if ((*(float *)(param_1 + 0x7df0) == 72.0) &&
       (bVar12 = false, !NAN(*(float *)(param_1 + 0x7df4)) && !NAN(fVar22))) {
      bVar12 = *(float *)(param_1 + 0x7df4) == fVar22;
    }
    if (!bVar12) {
      *(undefined4 *)(param_1 + 0x7df0) = 0x42900000;
      *(float *)(param_1 + 0x7df4) = fVar22;
      FUN_1000200a0(param_1 + 0x7db0);
    }
    local_a8[0] = (undefined1 *)0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x7db0) + 0x28))(param_1 + 0x7db0,local_a8);
    if ((*(float *)(param_1 + 0x8010) != 36.0) || (*(float *)(param_1 + 0x8014) != fVar22)) {
      *(undefined4 *)(param_1 + 0x8010) = 0x42100000;
      *(float *)(param_1 + 0x8014) = fVar22;
      FUN_1000200a0(param_1 + 0x7fd0);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x7fd0) + 0x28))(param_1 + 0x7fd0,local_a8);
    fVar23 = fVar22 + 44.0;
    if ((*(float *)(param_1 + 0x7b88) != 0.0) || (*(float *)(param_1 + 0x7b8c) != fVar23)) {
      *(undefined4 *)(param_1 + 0x7b88) = 0;
      *(float *)(param_1 + 0x7b8c) = fVar23;
      FUN_1000200a0(lVar5);
    }
    local_a8[0] = (undefined1 *)0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x7b48) + 0x28))(lVar5,local_a8);
    if ((*(float *)(param_1 + 0x7f20) != 72.0) || (*(float *)(param_1 + 0x7f24) != fVar23)) {
      *(undefined4 *)(param_1 + 0x7f20) = 0x42900000;
      *(float *)(param_1 + 0x7f24) = fVar23;
      FUN_1000200a0(param_1 + 0x7ee0);
    }
    FUN_10064e47c(fVar21 + -104.0,0x40800000,param_1 + 0x7ee0);
    fVar22 = fVar22 + 48.0 + DAT_101d237d0 * 0.5;
    if ((*(float *)(param_1 + 0x7b00) != 0.0) || (*(float *)(param_1 + 0x7b04) != fVar22)) {
      *(undefined4 *)(param_1 + 0x7b00) = 0;
      *(float *)(param_1 + 0x7b04) = fVar22;
      FUN_1000200a0(param_1 + 0x7ac0);
    }
    uVar17 = *(uint *)(param_1 + 0x11fe0);
    uVar18 = (ulong)uVar17;
    if (*(char *)(param_1 + 0x125ad) == '\0') {
      if (uVar17 != 0) {
        uVar18 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fe8) + uVar18 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & 0xfffffffb;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(param_1 + 0x11fe0));
      }
    }
    else {
      if (uVar17 != 0) {
        uVar19 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fe8) + uVar19 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) | 4;
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fe8) + uVar19 * 8);
          fVar23 = DAT_101d237d0 * (float)(uVar19 & 0xffffffff);
          bVar12 = false;
          if ((*(float *)(lVar15 + 0x40) == 0.0) &&
             (bVar12 = false, !NAN(*(float *)(lVar15 + 0x44)) && !NAN(fVar23))) {
            bVar12 = *(float *)(lVar15 + 0x44) == fVar23;
          }
          if (!bVar12) {
            *(undefined4 *)(lVar15 + 0x40) = 0;
            *(float *)(lVar15 + 0x44) = fVar23;
            FUN_1000200a0();
          }
          uVar19 = uVar19 + 1;
          uVar18 = (ulong)*(uint *)(param_1 + 0x11fe0);
        } while (uVar19 < uVar18);
      }
      fVar22 = fVar22 + (float)uVar18 * DAT_101d237d0;
    }
  }
  iVar11 = *(int *)(param_1 + 0x11fd0);
  uVar17 = (uint)(iVar11 != 0);
  *(uint *)(param_1 + 0x7334) =
       *(uint *)(param_1 + 0x7334) & 0xfffffff8 | *(uint *)(param_1 + 0x7334) & 3 | uVar17 << 2;
  *(uint *)(param_1 + 0x7554) =
       *(uint *)(param_1 + 0x7554) & 0xfffffff8 | *(uint *)(param_1 + 0x7554) & 3 | uVar17 << 2;
  *(uint *)(param_1 + 0x70cc) =
       *(uint *)(param_1 + 0x70cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x70cc) & 3 | (uint)(iVar11 != 0) << 2;
  if (iVar11 != 0) {
    bVar12 = false;
    if ((*(float *)(param_1 + 0x72f0) == 72.0) &&
       (bVar12 = false, !NAN(*(float *)(param_1 + 0x72f4)) && !NAN(fVar22))) {
      bVar12 = *(float *)(param_1 + 0x72f4) == fVar22;
    }
    if (!bVar12) {
      *(undefined4 *)(param_1 + 0x72f0) = 0x42900000;
      *(float *)(param_1 + 0x72f4) = fVar22;
      FUN_1000200a0(param_1 + 0x72b0);
    }
    local_a8[0] = (undefined1 *)0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x72b0) + 0x28))(param_1 + 0x72b0,local_a8);
    if ((*(float *)(param_1 + 0x7510) != 36.0) || (*(float *)(param_1 + 0x7514) != fVar22)) {
      *(undefined4 *)(param_1 + 0x7510) = 0x42100000;
      *(float *)(param_1 + 0x7514) = fVar22;
      FUN_1000200a0(param_1 + 0x74d0);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x74d0) + 0x28))(param_1 + 0x74d0,local_a8);
    fVar23 = fVar22 + 44.0;
    if ((*(float *)(param_1 + 0x7088) != 0.0) || (*(float *)(param_1 + 0x708c) != fVar23)) {
      *(undefined4 *)(param_1 + 0x7088) = 0;
      *(float *)(param_1 + 0x708c) = fVar23;
      FUN_1000200a0(param_1 + 0x7048);
    }
    local_a8[0] = (undefined1 *)0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x7048) + 0x28))(param_1 + 0x7048,local_a8);
    if ((*(float *)(param_1 + 0x7420) != 72.0) || (*(float *)(param_1 + 0x7424) != fVar23)) {
      *(undefined4 *)(param_1 + 0x7420) = 0x42900000;
      *(float *)(param_1 + 0x7424) = fVar23;
      FUN_1000200a0(param_1 + 0x73e0);
    }
    FUN_10064e47c(fVar21 + -104.0,0x40800000,param_1 + 0x73e0);
    fVar22 = fVar22 + 48.0 + DAT_101d237d0 * 0.5;
    if ((*(float *)(param_1 + 0x7000) != 0.0) || (*(float *)(param_1 + 0x7004) != fVar22)) {
      *(undefined4 *)(param_1 + 0x7000) = 0;
      *(float *)(param_1 + 0x7004) = fVar22;
      FUN_1000200a0(param_1 + 0x6fc0);
    }
    uVar17 = *(uint *)(param_1 + 0x11fd0);
    uVar18 = (ulong)uVar17;
    if (*(char *)(param_1 + 0x125ac) == '\0') {
      if (uVar17 != 0) {
        uVar18 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fd8) + uVar18 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & 0xfffffffb;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(param_1 + 0x11fd0));
      }
    }
    else {
      if (uVar17 != 0) {
        uVar19 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fd8) + uVar19 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) | 4;
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fd8) + uVar19 * 8);
          fVar23 = DAT_101d237d0 * (float)(uVar19 & 0xffffffff);
          bVar12 = false;
          if ((*(float *)(lVar15 + 0x40) == 0.0) &&
             (bVar12 = false, !NAN(*(float *)(lVar15 + 0x44)) && !NAN(fVar23))) {
            bVar12 = *(float *)(lVar15 + 0x44) == fVar23;
          }
          if (!bVar12) {
            *(undefined4 *)(lVar15 + 0x40) = 0;
            *(float *)(lVar15 + 0x44) = fVar23;
            FUN_1000200a0();
          }
          uVar19 = uVar19 + 1;
          uVar18 = (ulong)*(uint *)(param_1 + 0x11fd0);
        } while (uVar19 < uVar18);
      }
      fVar22 = fVar22 + (float)uVar18 * DAT_101d237d0;
    }
  }
  plVar7 = (long *)(param_1 + 0x8ad0);
  plVar8 = (long *)(param_1 + 0x88b0);
  iVar11 = *(int *)(param_1 + 0x11f90);
  uVar17 = (uint)(iVar11 != 0);
  *(uint *)(param_1 + 0x6834) =
       *(uint *)(param_1 + 0x6834) & 0xfffffff8 | *(uint *)(param_1 + 0x6834) & 3 | uVar17 << 2;
  *(uint *)(param_1 + 0x6a54) =
       *(uint *)(param_1 + 0x6a54) & 0xfffffff8 | *(uint *)(param_1 + 0x6a54) & 3 | uVar17 << 2;
  *(uint *)(param_1 + 0x65cc) =
       *(uint *)(param_1 + 0x65cc) & 0xfffffff8 |
       *(uint *)(param_1 + 0x65cc) & 3 | (uint)(iVar11 != 0) << 2;
  if (iVar11 != 0) {
    bVar12 = false;
    if ((*(float *)(param_1 + 0x67f0) == 72.0) &&
       (bVar12 = false, !NAN(*(float *)(param_1 + 0x67f4)) && !NAN(fVar22))) {
      bVar12 = *(float *)(param_1 + 0x67f4) == fVar22;
    }
    if (!bVar12) {
      *(undefined4 *)(param_1 + 0x67f0) = 0x42900000;
      *(float *)(param_1 + 0x67f4) = fVar22;
      FUN_1000200a0(param_1 + 0x67b0);
    }
    local_a8[0] = (undefined1 *)0x3f00000000000000;
    (**(code **)(*(long *)(param_1 + 0x67b0) + 0x28))(param_1 + 0x67b0,local_a8);
    if ((*(float *)(param_1 + 0x6a10) != 36.0) || (*(float *)(param_1 + 0x6a14) != fVar22)) {
      *(undefined4 *)(param_1 + 0x6a10) = 0x42100000;
      *(float *)(param_1 + 0x6a14) = fVar22;
      FUN_1000200a0(param_1 + 0x69d0);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x69d0) + 0x28))(param_1 + 0x69d0,local_a8);
    fVar23 = fVar22 + 44.0;
    if ((*(float *)(param_1 + 0x6588) != 0.0) || (*(float *)(param_1 + 0x658c) != fVar23)) {
      *(undefined4 *)(param_1 + 0x6588) = 0;
      *(float *)(param_1 + 0x658c) = fVar23;
      FUN_1000200a0(param_1 + 0x6548);
    }
    local_a8[0] = (undefined1 *)0x3f80000000000000;
    (**(code **)(*(long *)(param_1 + 0x6548) + 0x28))(param_1 + 0x6548,local_a8);
    if ((*(float *)(param_1 + 0x6920) != 72.0) || (*(float *)(param_1 + 0x6924) != fVar23)) {
      *(undefined4 *)(param_1 + 0x6920) = 0x42900000;
      *(float *)(param_1 + 0x6924) = fVar23;
      FUN_1000200a0(param_1 + 0x68e0);
    }
    FUN_10064e47c(fVar21 + -104.0,0x40800000,param_1 + 0x68e0);
    fVar22 = fVar22 + 48.0 + DAT_101d237d0 * 0.5;
    if ((*(float *)(param_1 + 0x6500) != 0.0) || (*(float *)(param_1 + 0x6504) != fVar22)) {
      *(undefined4 *)(param_1 + 0x6500) = 0;
      *(float *)(param_1 + 0x6504) = fVar22;
      FUN_1000200a0(param_1 + 0x64c0);
    }
    uVar17 = *(uint *)(param_1 + 0x11f90);
    uVar18 = (ulong)uVar17;
    if (*(char *)(param_1 + 0x125ae) == '\0') {
      if (uVar17 != 0) {
        uVar18 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11f98) + uVar18 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & 0xfffffffb;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(param_1 + 0x11f90));
      }
    }
    else {
      if (uVar17 != 0) {
        uVar19 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11f98) + uVar19 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) | 4;
          lVar15 = *(long *)(*(long *)(param_1 + 0x11f98) + uVar19 * 8);
          fVar23 = DAT_101d237d0 * (float)(uVar19 & 0xffffffff);
          bVar12 = false;
          if ((*(float *)(lVar15 + 0x40) == 0.0) &&
             (bVar12 = false, !NAN(*(float *)(lVar15 + 0x44)) && !NAN(fVar23))) {
            bVar12 = *(float *)(lVar15 + 0x44) == fVar23;
          }
          if (!bVar12) {
            *(undefined4 *)(lVar15 + 0x40) = 0;
            *(float *)(lVar15 + 0x44) = fVar23;
            FUN_1000200a0();
          }
          uVar19 = uVar19 + 1;
          uVar18 = (ulong)*(uint *)(param_1 + 0x11f90);
        } while (uVar19 < uVar18);
      }
      fVar22 = fVar22 + (float)uVar18 * DAT_101d237d0;
    }
  }
  plVar9 = (long *)(param_1 + 0x9638);
  if (*(int *)(param_1 + 0x11fb0) == 0) {
    uVar17 = *(uint *)(param_1 + 0x8934);
    if (*(int *)(param_1 + 0x125a0) == 0) {
      uVar16 = 0;
      bVar12 = false;
      goto LAB_100271e68;
    }
  }
  else {
    uVar17 = *(uint *)(param_1 + 0x8934);
  }
  uVar16 = 4;
  bVar12 = true;
LAB_100271e68:
  *(uint *)(param_1 + 0x8934) = uVar16 | uVar17 & 0xfffffffb;
  *(uint *)(param_1 + 0x8b54) = *(uint *)(param_1 + 0x8b54) & 0xfffffffb | uVar16;
  *(uint *)(param_1 + 0x86cc) = *(uint *)(param_1 + 0x86cc) & 0xfffffffb | uVar16;
  if (bVar12) {
    plVar10 = (long *)(param_1 + 0x90c0);
    bVar12 = false;
    if ((*(float *)(param_1 + 0x88f0) == 72.0) &&
       (bVar12 = false, !NAN(*(float *)(param_1 + 0x88f4)) && !NAN(fVar22))) {
      bVar12 = *(float *)(param_1 + 0x88f4) == fVar22;
    }
    if (!bVar12) {
      *(undefined4 *)(param_1 + 0x88f0) = 0x42900000;
      *(float *)(param_1 + 0x88f4) = fVar22;
      FUN_1000200a0(plVar8);
    }
    local_a8[0] = (undefined1 *)0x3f00000000000000;
    (**(code **)(*plVar8 + 0x28))(plVar8,local_a8);
    fVar20 = *(float *)(param_1 + 0x88f0);
    fVar23 = (float)FUN_100651184(plVar8);
    fVar20 = fVar20 + fVar23 + 20.0;
    bVar12 = false;
    if ((*(float *)(param_1 + 0x9100) == fVar20) &&
       (bVar12 = false, !NAN(*(float *)(param_1 + 0x9104)) && !NAN(fVar22))) {
      bVar12 = *(float *)(param_1 + 0x9104) == fVar22;
    }
    if (!bVar12) {
      *(float *)(param_1 + 0x9100) = fVar20;
      *(float *)(param_1 + 0x9104) = fVar22;
      FUN_1000200a0(plVar10);
    }
    local_a8[0] = (undefined1 *)0x3f00000000000000;
    (**(code **)(*plVar10 + 0x28))(plVar10,local_a8);
    if ((*(float *)(param_1 + 0x8b10) != 36.0) || (*(float *)(param_1 + 0x8b14) != fVar22)) {
      *(undefined4 *)(param_1 + 0x8b10) = 0x42100000;
      *(float *)(param_1 + 0x8b14) = fVar22;
      FUN_1000200a0(plVar7);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*plVar7 + 0x28))(plVar7,local_a8);
    fVar23 = fVar22 + 44.0;
    if ((*(float *)(param_1 + 0x8688) != 0.0) || (*(float *)(param_1 + 0x868c) != fVar23)) {
      *(undefined4 *)(param_1 + 0x8688) = 0;
      *(float *)(param_1 + 0x868c) = fVar23;
      FUN_1000200a0(plVar6);
    }
    local_a8[0] = (undefined1 *)0x3f80000000000000;
    (**(code **)(*plVar6 + 0x28))(plVar6,local_a8);
    fVar20 = (float)FUN_100652e60(plVar9);
    fVar20 = fVar21 + -60.0 + fVar20 * -0.5;
    if ((*(float *)(param_1 + 0x9678) != fVar20) || (*(float *)(param_1 + 0x967c) != fVar22)) {
      *(float *)(param_1 + 0x9678) = fVar20;
      *(float *)(param_1 + 0x967c) = fVar22;
      FUN_1000200a0(plVar9);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*plVar9 + 0x28))(plVar9,local_a8);
    lVar15 = param_1 + 0x9728;
    if ((*(float *)(param_1 + 0x9768) != fVar20) || (*(float *)(param_1 + 0x976c) != fVar22 + -5.0))
    {
      *(float *)(param_1 + 0x9768) = fVar20;
      *(float *)(param_1 + 0x976c) = fVar22 + -5.0;
      FUN_1000200a0(lVar15);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x9728) + 0x28))(lVar15,local_a8);
    fVar20 = 1.5;
    if (iVar13 == 0) {
      fVar20 = 1.0;
    }
    if ((*(float *)(param_1 + 0x9680) != fVar20) || (*(float *)(param_1 + 0x9684) != fVar20)) {
      *(float *)(param_1 + 0x9680) = fVar20;
      *(float *)(param_1 + 0x9684) = fVar20;
      FUN_1000200a0(plVar9);
    }
    fVar20 = fVar20 * 0.85;
    if ((*(float *)(param_1 + 0x9770) != fVar20) || (*(float *)(param_1 + 0x9774) != fVar20)) {
      *(float *)(param_1 + 0x9770) = fVar20;
      *(float *)(param_1 + 0x9774) = fVar20;
      FUN_1000200a0(lVar15);
    }
    if ((*(float *)(param_1 + 0x8a20) != 72.0) || (*(float *)(param_1 + 0x8a24) != fVar23)) {
      *(undefined4 *)(param_1 + 0x8a20) = 0x42900000;
      *(float *)(param_1 + 0x8a24) = fVar23;
      FUN_1000200a0(param_1 + 0x89e0);
    }
    FUN_10064e47c(fVar21 + -104.0,0x40800000,param_1 + 0x89e0);
    fVar22 = fVar22 + 48.0 + DAT_101d237d0 * 0.5;
    if ((*(float *)(param_1 + 0x8600) != 0.0) || (*(float *)(param_1 + 0x8604) != fVar22)) {
      *(float *)(param_1 + 0x8600) = 0.0;
      *(float *)(param_1 + 0x8604) = fVar22;
      FUN_1000200a0(param_1 + 0x85c0);
    }
    if (*(char *)(param_1 + 0x125af) == '\0') {
      if (*(int *)(param_1 + 0x11fb0) != 0) {
        uVar18 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fb8) + uVar18 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) & 0xfffffffb;
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(param_1 + 0x11fb0));
      }
    }
    else {
      if (*(int *)(param_1 + 0x11fb0) == 0) {
        fVar23 = 0.0;
      }
      else {
        uVar18 = 0;
        do {
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fb8) + uVar18 * 8);
          *(uint *)(lVar15 + 0x84) = *(uint *)(lVar15 + 0x84) | 4;
          lVar15 = *(long *)(*(long *)(param_1 + 0x11fb8) + uVar18 * 8);
          fVar23 = DAT_101d237d0 * (float)(uVar18 & 0xffffffff);
          bVar12 = false;
          if ((*(float *)(lVar15 + 0x40) == 0.0) &&
             (bVar12 = false, !NAN(*(float *)(lVar15 + 0x44)) && !NAN(fVar23))) {
            bVar12 = *(float *)(lVar15 + 0x44) == fVar23;
          }
          if (!bVar12) {
            *(undefined4 *)(lVar15 + 0x40) = 0;
            *(float *)(lVar15 + 0x44) = fVar23;
            FUN_1000200a0();
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(uint *)(param_1 + 0x11fb0));
        fVar23 = (float)*(uint *)(param_1 + 0x11fb0);
      }
      fVar22 = fVar22 + fVar23 * DAT_101d237d0;
    }
  }
  if ((((*puVar1 == 0) && (*(int *)(param_1 + 0x11fa0) == 0)) && (*(int *)(param_1 + 0x12470) == 0))
     && ((*(int *)(param_1 + 0x125a0) == 0 && (*(int *)(param_1 + 0x11fc0) == 0)))) {
    FUN_10053093c(*(undefined4 *)(param_1 + 0x12590),local_88 - DAT_101854ae8,param_1 + 0x38a0);
    FUN_100530c04(param_1 + 0x38a0,0);
    lVar15 = param_1 + 0x4160;
    *(uint *)(param_1 + 0x41e4) = *(uint *)(param_1 + 0x41e4) | 4;
    lVar3 = param_1 + 0x4290;
    *(uint *)(param_1 + 0x4314) = *(uint *)(param_1 + 0x4314) | 4;
    FUN_100651708(fVar21 + DAT_101854ae4 * -2.0,lVar15,1);
    fVar22 = (local_88 - DAT_101854ae8) * 0.3;
    if ((*pfVar2 != fVar21 * 0.5) || (*(float *)(param_1 + 0x41a4) != fVar22)) {
      *pfVar2 = fVar21 * 0.5;
      *(float *)(param_1 + 0x41a4) = fVar22;
      FUN_1000200a0(lVar15);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x4160) + 0x28))(lVar15,local_a8);
    fVar20 = *pfVar2;
    fVar24 = *(float *)(param_1 + 0x41a4);
    FUN_100651184(lVar15);
    fVar23 = fVar22;
    FUN_100651184(lVar3);
    fVar22 = fVar24 + 60.0 + (fVar23 + fVar22) * 0.5;
    if ((*(float *)(param_1 + 0x42d0) != fVar20) || (*(float *)(param_1 + 0x42d4) != fVar22)) {
      *(float *)(param_1 + 0x42d0) = fVar20;
      *(float *)(param_1 + 0x42d4) = fVar22;
      FUN_1000200a0(lVar3);
    }
    local_a8[0] = &DAT_3f0000003f000000;
    (**(code **)(*(long *)(param_1 + 0x4290) + 0x28))(lVar3,local_a8);
    FUN_100651708(fVar21 + DAT_101854ae4 * -2.0,lVar3,1);
    lVar15 = *(long *)(param_1 + 0x11ff0);
    *(uint *)(param_1 + 0x9a54) =
         *(uint *)(param_1 + 0x9a54) & 0xfffffff8 |
         *(uint *)(param_1 + 0x9a54) & 3 | (uint)(lVar15 != 0) << 2;
  }
  else {
    FUN_10053093c(*(undefined4 *)(param_1 + 0x12590),fVar22,param_1 + 0x38a0);
    FUN_100530c04(param_1 + 0x38a0,1);
    *(uint *)(param_1 + 0x41e4) = *(uint *)(param_1 + 0x41e4) & 0xfffffffb;
    *(uint *)(param_1 + 0x4314) = *(uint *)(param_1 + 0x4314) & 0xfffffffb;
    lVar15 = *(long *)(param_1 + 0x11ff0);
  }
  if (lVar15 != 0) {
    FUN_10001549c(local_a8,"friendInMatchInformation");
    lVar15 = *(long *)(param_1 + 0x11ff0);
    uVar18 = *(ulong *)(lVar15 + 0x3d70);
    if (-1 < *(char *)(lVar15 + 0x3d87)) {
      uVar18 = lVar15 + 0x3d70;
    }
    std::string::append((char *)local_a8,uVar18);
    iVar13 = FUN_1001cee20(param_1 + 0x12388,local_a8);
    if ((iVar13 != 0) && (*(int *)(*(long *)(param_1 + 0x11ff0) + 0x3d98) == 2)) {
      FUN_100278378(param_1,*(long *)(param_1 + 0x11ff0),1);
    }
    iVar13 = FUN_1001cee20(param_1 + 0x12388,local_a8);
    if ((iVar13 != 0) && (*(int *)(*(long *)(param_1 + 0x11ff0) + 0x3d98) == 3)) {
      FUN_100278bfc(param_1,*(long *)(param_1 + 0x11ff0),1);
    }
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
  }
  return;
}




void FUN_100272528(void)

{
  return;
}




void FUN_10027252c(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100272534. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_100272538(long param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  
  bVar2 = 2;
  if (param_2 == 0) {
    bVar2 = 0;
  }
  *(byte *)(param_1 + 0x360) = *(byte *)(param_1 + 0x360) & 0xfd | bVar2;
  if (param_2 != 0) {
    uVar1 = FUN_1002725c8(param_1,param_1 + 0x12508);
    if (uVar1 != 0xffffffff) {
      FUN_1000165f0(*(long *)(param_1 + 0x124b8) + (ulong)uVar1 * 0x50,0);
      return;
    }
    return;
  }
  FUN_100187060(param_1 + 0xde98);
  return;
}




ulong FUN_1002725c8(long param_1,byte *param_2)

{
  size_t sVar1;
  uint uVar2;
  byte bVar3;
  size_t sVar4;
  int iVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  long lVar12;
  byte *pbVar13;
  
  bVar3 = param_2[0x17];
  uVar8 = (ulong)bVar3;
  sVar1 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar1 = (ulong)DAT_101d911a8._7_1_;
  }
  pbVar13 = *(byte **)param_2;
  pbVar11 = pbVar13;
  sVar4 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    pbVar11 = param_2;
    sVar4 = uVar8;
  }
  if (sVar4 == sVar1) {
    pbVar6 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar6 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar3 < '\0') {
      if (sVar4 == 0) {
        return 0xffffffff;
      }
      iVar5 = _memcmp(pbVar11,pbVar6,sVar4);
      pbVar11 = pbVar13;
      if (iVar5 == 0) {
        return 0xffffffff;
      }
    }
    else {
      if (sVar4 == 0) {
        return 0xffffffff;
      }
      if ((uint)*pbVar6 == ((uint)pbVar13 & 0xff)) {
        do {
          uVar8 = uVar8 - 1;
          param_2 = param_2 + 1;
          pbVar6 = pbVar6 + 1;
          if (uVar8 == 0) {
            return 0xffffffff;
          }
        } while (*param_2 == *pbVar6);
      }
    }
  }
  uVar2 = *(uint *)(param_1 + 0x124b0);
  if (uVar2 != 0) {
    uVar8 = 0;
    lVar12 = *(long *)(param_1 + 0x124b8);
    pbVar13 = (byte *)(lVar12 + 0x21);
    do {
      lVar9 = lVar12 + uVar8 * 0x50;
      bVar3 = *(byte *)(lVar9 + 0x37);
      uVar7 = (ulong)bVar3;
      sVar1 = *(size_t *)(lVar9 + 0x28);
      if (-1 < (char)bVar3) {
        sVar1 = uVar7;
      }
      if (sVar1 == sVar4) {
        if ((char)bVar3 < '\0') {
          if (sVar4 == 0) {
            return uVar8;
          }
          iVar5 = _memcmp(*(void **)(lVar9 + 0x20),pbVar11,sVar4);
          if (iVar5 == 0) {
            return uVar8;
          }
        }
        else {
          if (sVar4 == 0) {
            return uVar8;
          }
          pbVar10 = pbVar13;
          pbVar6 = pbVar11;
          if ((uint)*pbVar11 == ((uint)*(void **)(lVar9 + 0x20) & 0xff)) {
            do {
              uVar7 = uVar7 - 1;
              pbVar6 = pbVar6 + 1;
              if (uVar7 == 0) {
                return uVar8;
              }
              bVar3 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar3 == *pbVar6);
          }
        }
      }
      uVar8 = uVar8 + 1;
      pbVar13 = pbVar13 + 0x50;
    } while (uVar8 != uVar2);
  }
  return 0xffffffff;
}




void FUN_10027275c(long param_1,long param_2)

{
  int iVar1;
  
  if (((*(long **)(param_1 + 0x11ef8) != (long *)0x0) &&
      (iVar1 = (**(code **)(**(long **)(param_1 + 0x11ef8) + 0x38))(), iVar1 != 0)) &&
     (iVar1 = FUN_1004e3654(param_2 + 0x80,param_1 + 75000), iVar1 != 0)) {
    FUN_1002727f0(param_1,param_2 + 0x90,&DAT_101d91650);
    FUN_100272aec(param_1,param_2 + 200,&DAT_101d91650);
    return;
  }
  return;
}




void FUN_1002727f0(long param_1,string *param_2,undefined8 param_3)

{
  string *this;
  size_t sVar1;
  undefined8 ******ppppppuVar2;
  string sVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  string *psVar9;
  string *psVar10;
  string *local_a8 [2];
  char local_91;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  string *local_70;
  undefined8 *****local_68;
  size_t local_60;
  byte local_51;
  
  plVar6 = *(long **)(param_1 + 0x11ef8);
  if (plVar6 == (long *)0x0) {
    return;
  }
  iVar5 = (**(code **)(*plVar6 + 0x38))();
  if (iVar5 == 0) {
    return;
  }
  this = (string *)(param_1 + 0x12520);
  uVar8 = *(ulong *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    uVar8 = (ulong)(byte)param_2[0x17];
  }
  if (uVar8 == 0) {
    if (*(char *)(param_1 + 0x12537) < '\0') {
      if (*(long *)(param_1 + 0x12528) == 0) {
        return;
      }
    }
    else if (*(char *)(param_1 + 0x12537) == '\0') {
      return;
    }
    FUN_100276078(param_1);
    return;
  }
  std::operator+("#",param_2);
  std::string::string((string *)&local_68,(string *)local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  uVar8 = (ulong)local_51;
  if (-1 < (char)local_51) {
    local_60 = uVar8;
  }
  bVar4 = *(byte *)(param_1 + 0x12537);
  sVar1 = *(size_t *)(param_1 + 0x12528);
  if (-1 < (char)bVar4) {
    sVar1 = (ulong)bVar4;
  }
  if (local_60 == sVar1) {
    ppppppuVar2 = (undefined8 ******)local_68;
    if (-1 < (char)local_51) {
      ppppppuVar2 = &local_68;
    }
    psVar10 = *(string **)this;
    if (-1 < (char)bVar4) {
      psVar10 = this;
    }
    if ((char)local_51 < '\0') {
      if ((local_60 == 0) || (iVar5 = _memcmp(ppppppuVar2,psVar10,local_60), iVar5 == 0))
      goto LAB_100272ac0;
    }
    else {
      if (local_60 == 0) goto LAB_100272ac0;
      if ((uint)(byte)*psVar10 == ((uint)local_68 & 0xff)) {
        psVar9 = (string *)((ulong)&local_68 | 1);
        do {
          uVar8 = uVar8 - 1;
          psVar10 = psVar10 + 1;
          if (uVar8 == 0) goto LAB_100272ac0;
          sVar3 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar3 == *psVar10);
      }
    }
  }
  if (sVar1 != 0) {
    FUN_100276078(param_1);
  }
  std::string::operator=(this,(string *)&local_68);
  FUN_100187878(param_1 + 0xde98,this,1,1);
  FUN_100187774(param_1 + 0xde98,&DAT_101d91198);
  local_a8[0] = this;
  if (*(char *)(param_1 + 0x12537) < '\0') {
    local_a8[0] = *(string **)this;
  }
  uVar8 = FUN_100279d64(param_1 + 0x124c0,local_a8);
  if ((uVar8 & 1) == 0) {
    local_70 = this;
    if (*(char *)(param_1 + 0x12537) < '\0') {
      local_70 = *(string **)this;
    }
    uVar7 = FUN_1004e0150("MENU_FRIENDS_GUILD_CONVERSATION",0);
    FUN_10003330c(local_a8,this);
    thunk_FUN_1004e439c(&local_90,uVar7);
    thunk_FUN_1004e439c(&local_80,param_3);
    FUN_100279e14(param_1 + 0x124c0,&local_70,local_a8);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
    plVar6 = *(long **)(param_1 + 0x11ef8);
    if (((plVar6 == (long *)0x0) || (iVar5 = (**(code **)(*plVar6 + 0x40))(), iVar5 != 2)) &&
       (iVar5 = FUN_1002725c8(param_1,this), iVar5 == -1)) {
      FUN_1002742c8(param_1,this);
    }
  }
LAB_100272ac0:
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  return;
}




void FUN_100272aec(long param_1,string *param_2,undefined8 param_3)

{
  string *this;
  size_t sVar1;
  undefined8 ******ppppppuVar2;
  string sVar3;
  byte bVar4;
  int iVar5;
  long *plVar6;
  undefined8 uVar7;
  ulong uVar8;
  string *psVar9;
  string *psVar10;
  string *local_a8 [2];
  char local_91;
  undefined8 local_90;
  void *local_88;
  undefined8 local_80;
  void *local_78;
  string *local_70;
  undefined8 *****local_68;
  size_t local_60;
  byte local_51;
  
  plVar6 = *(long **)(param_1 + 0x11ef8);
  if (plVar6 == (long *)0x0) {
    return;
  }
  iVar5 = (**(code **)(*plVar6 + 0x38))();
  if (iVar5 == 0) {
    return;
  }
  this = (string *)(param_1 + 0x12538);
  uVar8 = *(ulong *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    uVar8 = (ulong)(byte)param_2[0x17];
  }
  if (uVar8 == 0) {
    if (*(char *)(param_1 + 0x1254f) < '\0') {
      if (*(long *)(param_1 + 0x12540) == 0) {
        return;
      }
    }
    else if (*(char *)(param_1 + 0x1254f) == '\0') {
      return;
    }
    FUN_10027631c(param_1);
    return;
  }
  std::operator+("#",param_2);
  std::string::string((string *)&local_68,(string *)local_a8);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  uVar8 = (ulong)local_51;
  if (-1 < (char)local_51) {
    local_60 = uVar8;
  }
  bVar4 = *(byte *)(param_1 + 0x1254f);
  sVar1 = *(size_t *)(param_1 + 0x12540);
  if (-1 < (char)bVar4) {
    sVar1 = (ulong)bVar4;
  }
  if (local_60 == sVar1) {
    ppppppuVar2 = (undefined8 ******)local_68;
    if (-1 < (char)local_51) {
      ppppppuVar2 = &local_68;
    }
    psVar10 = *(string **)this;
    if (-1 < (char)bVar4) {
      psVar10 = this;
    }
    if ((char)local_51 < '\0') {
      if ((local_60 == 0) || (iVar5 = _memcmp(ppppppuVar2,psVar10,local_60), iVar5 == 0))
      goto LAB_100272dbc;
    }
    else {
      if (local_60 == 0) goto LAB_100272dbc;
      if ((uint)(byte)*psVar10 == ((uint)local_68 & 0xff)) {
        psVar9 = (string *)((ulong)&local_68 | 1);
        do {
          uVar8 = uVar8 - 1;
          psVar10 = psVar10 + 1;
          if (uVar8 == 0) goto LAB_100272dbc;
          sVar3 = *psVar9;
          psVar9 = psVar9 + 1;
        } while (sVar3 == *psVar10);
      }
    }
  }
  if (sVar1 != 0) {
    FUN_10027631c(param_1);
  }
  std::string::operator=(this,(string *)&local_68);
  FUN_100187878(param_1 + 0xde98,this,1,1);
  FUN_100187774(param_1 + 0xde98,&DAT_101d91198);
  local_a8[0] = this;
  if (*(char *)(param_1 + 0x1254f) < '\0') {
    local_a8[0] = *(string **)this;
  }
  uVar8 = FUN_100279d64(param_1 + 0x124c0,local_a8);
  if ((uVar8 & 1) == 0) {
    local_70 = this;
    if (*(char *)(param_1 + 0x1254f) < '\0') {
      local_70 = *(string **)this;
    }
    uVar7 = FUN_1004e0150("MENU_FRIENDS_TEAM_CONVERSATION",0);
    FUN_10003330c(local_a8,this);
    thunk_FUN_1004e439c(&local_90,uVar7);
    thunk_FUN_1004e439c(&local_80,param_3);
    FUN_100279e14(param_1 + 0x124c0,&local_70,local_a8);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
      local_80 = 0;
      local_78 = (void *)0x0;
    }
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
      local_90 = 0;
      local_88 = (void *)0x0;
    }
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
    plVar6 = *(long **)(param_1 + 0x11ef8);
    if (((plVar6 == (long *)0x0) || (iVar5 = (**(code **)(*plVar6 + 0x40))(), iVar5 != 2)) &&
       (iVar5 = FUN_1002725c8(param_1,this), iVar5 == -1)) {
      FUN_1002742c8(param_1,this);
    }
  }
LAB_100272dbc:
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  return;
}




void FUN_100272de8(long param_1)

{
  FUN_10027275c(param_1 + -0x380);
  return;
}




void FUN_100272df0(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10015d3ec();
  uVar1 = FUN_100164424(uVar2,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x125b0) = uVar1;
  return;
}




void FUN_100272e28(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10015d3ec();
  uVar1 = FUN_100164424(uVar2,param_2 + 0x180);
  *(undefined1 *)(param_1 + 0x12230) = uVar1;
  return;
}




void FUN_100272e60(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0x125b0) = 0;
  }
  return;
}




void FUN_100272ea0(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0x12230) = 0;
  }
  return;
}




void FUN_100272ee4(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10015d3ec();
  uVar1 = FUN_1001645b8(uVar2,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x125b1) = uVar1;
  return;
}




void FUN_100272f1c(long param_1,long param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_10015d3ec();
  uVar1 = FUN_1001645b8(uVar2,param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x12231) = uVar1;
  return;
}




void FUN_100272f54(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0x125b1) = 0;
  }
  return;
}




void FUN_100272f94(long param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004f1680(param_2);
  if ((iVar1 != 0) && (*(char *)(param_2 + 0x44) != '\0')) {
    *(undefined1 *)(param_1 + 0x12231) = 0;
  }
  return;
}




void FUN_100272fd8(void)

{
  return;
}




void FUN_100272fdc(void)

{
  return;
}




void FUN_100272fe0(long param_1,long param_2)

{
  FUN_1001864e4(param_1 + 0xde98,*(int *)(param_2 + 0x28) == 0);
  return;
}




void FUN_100272ff8(long param_1,long param_2)

{
  FUN_1001864e4(param_1 + 0xdb30,*(int *)(param_2 + 0x28) == 0);
  return;
}




void FUN_100273010(long param_1,undefined8 param_2)

{
  FUN_10018e754(param_1 + 0xb568,param_2,1,0);
  return;
}




void FUN_100273024(long param_1,undefined8 param_2)

{
  FUN_10018e754(param_1 + 0xb1c8,param_2,1,0);
  return;
}




void FUN_100273038(long param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  ulong local_50;
  void *local_48;
  
  puVar2 = (uint *)(param_1 + 0x12470);
  lVar7 = *(long *)(param_1 + 0x12478);
  if (lVar7 != 0) {
    if (*puVar2 != 0) {
      lVar11 = (ulong)*puVar2 * 0x188;
      do {
        lVar7 = FUN_100111a80(lVar7);
        lVar7 = lVar7 + 0x188;
        lVar11 = lVar11 + -0x188;
      } while (lVar11 != 0);
    }
    *puVar2 = 0;
  }
  puVar1 = (uint *)(param_1 + 0x12480);
  lVar7 = *(long *)(param_1 + 0x12488);
  if (lVar7 != 0) {
    if (*puVar1 != 0) {
      lVar11 = (ulong)*puVar1 * 0x188;
      do {
        lVar7 = FUN_100111a80(lVar7);
        lVar7 = lVar7 + 0x188;
        lVar11 = lVar11 + -0x188;
      } while (lVar11 != 0);
    }
    *puVar1 = 0;
  }
  puVar3 = (uint *)(param_1 + 0x9144);
  uVar4 = FUN_100111818();
  *(undefined4 *)(param_1 + 0x125a0) = uVar4;
  iVar5 = FUN_1001118b0();
  if (iVar5 != 0) {
    uVar12 = 0;
    do {
      uVar8 = FUN_1001118c0(uVar12);
      FUN_100110e8c(puVar1,uVar8);
      uVar12 = uVar12 + 1;
      uVar6 = FUN_1001118b0();
    } while (uVar12 < uVar6);
  }
  iVar5 = FUN_100111828();
  if (iVar5 != 0) {
    local_50 = 0;
    local_48 = (void *)0x0;
    uVar8 = FUN_100111828();
    FUN_10020df00(&local_50,uVar8,0);
    iVar5 = FUN_100111828();
    if (iVar5 != 0) {
      uVar13 = 0;
      do {
        uVar8 = FUN_100111838(uVar13);
        *(undefined8 *)((long)local_48 + uVar13 * 8) = uVar8;
        uVar13 = uVar13 + 1;
        uVar9 = FUN_100111828();
      } while (uVar13 < (uVar9 & 0xffffffff));
    }
    _qsort(local_48,local_50 & 0xffffffff,8,(int *)FUN_100111120);
    if ((int)local_50 != 0) {
      uVar13 = 0;
      do {
        FUN_100110e8c(puVar2,*(undefined8 *)((long)local_48 + uVar13 * 8));
        uVar13 = uVar13 + 1;
      } while (uVar13 < (local_50 & 0xffffffff));
    }
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
  }
  if ((*(byte *)puVar3 >> 2 & 1) != 0) {
    FUN_1001c102c(param_1 + 0x90c0);
    *puVar3 = *puVar3 & 0xfffffffb;
  }
  FUN_10027a11c(param_1);
  FUN_100270dec(param_1);
  FUN_10027b34c(param_1);
  if (*(int *)(param_1 + 0x124a0) != 0) {
    FUN_100273450(param_1);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_REQUESTS_TITLE",0);
  thunk_FUN_1004e439c(&local_50,uVar8);
  FUN_1004e313c(auStack_60);
  if (*puVar1 != 0) {
    if (*(uint *)(param_1 + 0x1259c) < *puVar1) {
      pcVar10 = " (%d+)";
    }
    else {
      pcVar10 = " (%d)";
    }
    FUN_1004e38ac(auStack_60,pcVar10);
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x51b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_TEAM_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11fe0) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x7db0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_GUILD_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11fd0) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x72b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_ONLINE_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  if (*(int *)(param_1 + 0x11f90) != 0) {
    FUN_1004e38ac(auStack_60," (%d)");
    FUN_1004e372c(&local_50,auStack_60);
    FUN_1006513c0(param_1 + 0x67b0,&local_50);
  }
  uVar8 = FUN_1004e0150("MENU_FRIENDS_OFFLINE_TITLE",0);
  FUN_1000153b4(&local_50,uVar8);
  uVar12 = *(uint *)(param_1 + 0x125a0);
  if (*(uint *)(param_1 + 0x125a0) <= *(uint *)(param_1 + 0x11fb0)) {
    uVar12 = *(uint *)(param_1 + 0x11fb0);
  }
  if (uVar12 != 0) {
    if (uVar12 < 0x1f5) {
      FUN_1004e38ac(auStack_60,"(%d)");
    }
    else {
      FUN_1004e3120(auStack_70,"(500+)");
      FUN_1000153b4(auStack_60,auStack_70);
      if (local_68 != (void *)0x0) {
        operator_delete__(local_68);
      }
    }
    FUN_1004e3120(auStack_70,"[NUM_OFFLINE]");
    FUN_1004e3bc4(&local_50,0,auStack_70,auStack_60);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    FUN_1006513c0(param_1 + 0x88b0,&local_50);
  }
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_100273cfc(long param_1)

{
  FUN_100273038(param_1 + -0x3b8);
  return;
}




void FUN_100273d04(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  if (param_2 == 0) {
    uVar1 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_COULD_NOT_ADD",0);
    FUN_1000153b4(auStack_30,uVar1);
    FUN_1004e3120(auStack_40,"[NAME]");
    FUN_1004e3bc4(auStack_30,0,auStack_40,param_1 + 0x12550);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  else {
    uVar1 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
    FUN_1000153b4(auStack_30,uVar1);
    FUN_1000153b4(param_1 + 0x12550,&DAT_101d91650);
  }
  FUN_100273de8(0x40200000,param_1,1,auStack_30,0);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_100273de8(undefined8 param_1,float param_2,long param_3,int param_4,undefined8 param_5,
                  int param_6)

{
  long lVar1;
  long lVar2;
  float fVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  ushort *puVar10;
  undefined4 uVar11;
  undefined4 local_98;
  float fStack_94;
  undefined1 auStack_8c [4];
  float local_88;
  undefined1 auStack_84 [4];
  
  lVar1 = param_3 + 0x660;
  FUN_100642324(lVar1);
  if ((~*(uint *)(param_3 + 0x6e4) & 0x7f80) != 0) {
    *(uint *)(param_3 + 0x6e4) = *(uint *)(param_3 + 0x6e4) | 0x7f80;
    FUN_1000200a0(lVar1);
  }
  iVar5 = FUN_1004e36c0(param_5,&DAT_101d91650);
  if (iVar5 != 0) {
    FUN_1006513c0(lVar1,param_5);
  }
  FUN_100651184(lVar1);
  param_2 = param_2 + 10.0;
  lVar2 = param_3 + 0x570;
  FUN_10064e47c(*(undefined4 *)(param_3 + 0x12590),lVar2);
  if (param_6 != 0) {
    uVar6 = FUN_100047714();
    FUN_10063fce0(0x3f800000);
    FUN_10063f0e8(0x3f800000,uVar6);
    uVar7 = FUN_100047714();
    FUN_10063fce0(0x3f400000);
    FUN_10063f0e8(0x3f800000,uVar7);
    lVar4 = DAT_101dbd2f8;
    uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar8 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
      if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar8 = 0xffff;
      }
      else {
        uVar8 = *puVar10;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
      *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
      FUN_10063f564(puVar10);
      *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
    }
    FUN_10063f614(puVar10,uVar6);
    FUN_100642b14(lVar1,puVar10);
  }
  FUN_100642324(lVar2);
  uVar6 = FUN_100126b4c();
  FUN_1001e35ec(param_3,uVar6,auStack_84,&local_88,auStack_8c);
  lVar1 = DAT_101dbd2f8;
  uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar10 = (ushort *)0x0;
  }
  else {
    puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar10;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f0f0(puVar10);
    *(undefined ***)puVar10 = &PTR_thunk_FUN_10063eeb4_10144b270;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f0e8(param_1,puVar10);
  uVar6 = FUN_100047714();
  fVar3 = 1.0;
  if (param_4 == 0) {
    fVar3 = 0.0;
  }
  FUN_10063fce0(fVar3);
  FUN_10063f0e8(0x3eb33333,uVar6);
  FUN_10063f130(uVar6,FUN_10001f160);
  lVar1 = DAT_101dbd2f8;
  uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063fb5c(puVar9);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar11 = *(undefined4 *)(param_3 + 0x408);
  fStack_94 = 0.0;
  if (param_4 != 0) {
    FUN_100652e60(lVar2);
    fStack_94 = param_2;
  }
  fStack_94 = local_88 - fStack_94;
  local_98 = uVar11;
  FUN_10063fb90(puVar9,&local_98);
  FUN_10063f0e8(0x3eb33333,puVar9);
  FUN_10063f130(puVar9,FUN_10001f160);
  lVar1 = DAT_101dbd2f8;
  uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063f1bc(puVar9);
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  FUN_10063f2a4(puVar9,uVar6);
  FUN_100642b7c(lVar2,puVar10);
  return;
}




void FUN_1002741b4(long param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  
  piVar1 = (int *)(param_1 + 0x12490);
  FUN_1001107e4(piVar1,0);
  iVar2 = FUN_100111914();
  if (iVar2 != 0) {
    uVar5 = 0;
    do {
      uVar4 = FUN_100111924(uVar5);
      FUN_10020f054(piVar1,uVar4);
      uVar5 = uVar5 + 1;
      uVar3 = FUN_100111914();
    } while (uVar5 < uVar3);
  }
  FUN_10027a11c(param_1);
  FUN_100270dec(param_1);
  FUN_10027b34c(param_1);
  if (*piVar1 != 0) {
    uVar4 = FUN_1004e0150("MENU_FRIENDS_RECENTS_TITLE",0);
    thunk_FUN_1004e439c(auStack_40,uVar4);
    thunk_FUN_1004e439c(auStack_50,&DAT_101d91650);
    FUN_1004e38ac(auStack_50," (%d)");
    FUN_1004e372c(auStack_40,auStack_50);
    FUN_1006513c0(param_1 + 0x46b0,auStack_40);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
  }
  return;
}




void FUN_1002742c0(long param_1)

{
  FUN_1002741b4(param_1 + -0x3b8);
  return;
}




ulong FUN_1002742c8(long param_1,byte *param_2)

{
  uint *puVar1;
  undefined8 *******pppppppuVar2;
  size_t sVar3;
  size_t sVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ulong uVar8;
  int iVar9;
  char *pcVar10;
  ulong uVar11;
  byte *pbVar12;
  size_t sVar13;
  byte *pbVar14;
  long lVar15;
  byte *pbVar16;
  size_t sVar17;
  uint uVar18;
  long lVar19;
  char *pcVar20;
  char *pcVar21;
  void *local_e0 [2];
  char local_c9;
  void *local_c8 [2];
  char local_b1;
  undefined8 ******local_b0 [2];
  char local_99;
  void *local_90 [2];
  char local_79;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  
  bVar6 = param_2[0x17];
  uVar11 = (ulong)bVar6;
  sVar3 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar6) {
    sVar3 = uVar11;
  }
  sVar4 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar4 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar3 == sVar4) {
    pbVar12 = *(byte **)param_2;
    if (-1 < (char)bVar6) {
      pbVar12 = param_2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar3 == 0) {
        return 0xffffffff;
      }
      iVar9 = _memcmp(pbVar12,pbVar14,sVar3);
      if (iVar9 == 0) {
        return 0xffffffff;
      }
    }
    else {
      if (sVar3 == 0) {
        return 0xffffffff;
      }
      pbVar12 = param_2;
      if ((uint)*pbVar14 == ((uint)*(byte **)param_2 & 0xff)) {
        do {
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
          pbVar12 = pbVar12 + 1;
          if (uVar11 == 0) {
            return 0xffffffff;
          }
        } while (*pbVar12 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_1002725c8(param_1,param_2);
  if ((int)uVar11 == -1) {
    puVar1 = (uint *)(param_1 + 0x124b0);
    FUN_1000164dc(local_b0);
    FUN_10003330c(local_90,param_2);
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0x1e;
    local_64 = 0;
    FUN_10027c2fc(puVar1,local_b0);
    FUN_10027d9fc(&local_78,1);
    if (local_79 < '\0') {
      operator_delete(local_90[0]);
    }
    thunk_FUN_10001653c(local_b0);
    FUN_10001549c(local_e0,"FRIENDS.PENDING_CHATS.");
    FUN_1000e8b18(local_c8,local_e0,param_2);
    std::string::string((string *)local_b0,(string *)local_c8);
    if (local_b1 < '\0') {
      operator_delete(local_c8[0]);
    }
    if (local_c9 < '\0') {
      operator_delete(local_e0[0]);
    }
    pppppppuVar2 = (undefined8 *******)local_b0[0];
    if (-1 < local_99) {
      pppppppuVar2 = local_b0;
    }
    FUN_100016648(*(long *)(param_1 + 0x124b8) + (ulong)(*puVar1 - 1) * 0x50,pppppppuVar2,1);
    uVar18 = *puVar1;
    if (*(uint *)(param_1 + 0x12598) < uVar18) {
      uVar11 = 0;
      lVar19 = *(long *)(param_1 + 0x124b8);
      bVar6 = *(byte *)(param_1 + 0x1251f);
      sVar3 = *(size_t *)(param_1 + 0x12510);
      if (-1 < (char)bVar6) {
        sVar3 = (ulong)bVar6;
      }
      pbVar12 = (byte *)(lVar19 + 0x21);
      do {
        lVar15 = lVar19 + uVar11 * 0x50;
        pcVar21 = (char *)(lVar15 + 0x20);
        bVar7 = *(byte *)(lVar15 + 0x37);
        sVar13 = (size_t)bVar7;
        sVar17 = *(size_t *)(lVar15 + 0x28);
        sVar4 = sVar17;
        if (-1 < (char)bVar7) {
          sVar4 = sVar13;
        }
        if (sVar4 != sVar3) {
LAB_100274540:
          if ((char)bVar7 < '\0') {
            sVar13 = sVar17;
            pcVar21 = *(char **)pcVar21;
          }
LAB_100274568:
          if (0 < (long)sVar13) {
            pcVar20 = pcVar21 + sVar13;
            pcVar10 = pcVar21;
            while( true ) {
              pcVar10 = _memchr(pcVar10,0x23,sVar13);
              if (pcVar10 == (char *)0x0) goto LAB_1002745d8;
              if (*pcVar10 == '#') break;
              pcVar10 = pcVar10 + 1;
              sVar13 = (long)pcVar20 - (long)pcVar10;
              if ((long)sVar13 < 1) goto LAB_1002745d8;
            }
            if ((pcVar10 != pcVar20) && (pcVar10 == pcVar21)) goto LAB_1002745b8;
          }
LAB_1002745d8:
          lVar19 = lVar19 + (uVar11 & 0xffffffff) * 0x50;
          FUN_10027e5c8(puVar1,lVar19,lVar19 + 0x50);
          uVar18 = *puVar1;
          break;
        }
        pcVar20 = *(char **)pcVar21;
        pcVar10 = pcVar20;
        if (-1 < (char)bVar7) {
          pcVar10 = pcVar21;
        }
        pbVar14 = *(byte **)(param_1 + 0x12508);
        if (-1 < (char)bVar6) {
          pbVar14 = (byte *)(param_1 + 0x12508);
        }
        if ((char)bVar7 < '\0') {
          if ((sVar3 != 0) &&
             (iVar9 = _memcmp(pcVar10,pbVar14,sVar3), sVar13 = sVar17, pcVar21 = pcVar20, iVar9 != 0
             )) goto LAB_100274568;
        }
        else if (sVar3 != 0) {
          pbVar16 = pbVar12;
          uVar8 = sVar13;
          if ((uint)*pbVar14 == ((uint)pcVar20 & 0xff)) {
            do {
              pbVar14 = pbVar14 + 1;
              if (uVar8 - 1 == 0) goto LAB_1002745b8;
              bVar5 = *pbVar16;
              pbVar16 = pbVar16 + 1;
              uVar8 = uVar8 - 1;
            } while (bVar5 == *pbVar14);
            goto LAB_100274540;
          }
          goto LAB_100274568;
        }
LAB_1002745b8:
        uVar11 = uVar11 + 1;
        pbVar12 = pbVar12 + 0x50;
      } while (uVar11 != uVar18);
    }
    uVar11 = (ulong)(uVar18 - 1);
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
  }
  return uVar11;
}




void FUN_10027462c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  void *local_160 [2];
  char local_149;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined **local_138 [23];
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  void *local_60;
  char local_49;
  
  FUN_1004e3120(auStack_148,param_3);
  FUN_10001549c(local_160,param_4);
  FUN_1002772b4(local_138,param_2,auStack_148,local_160,param_5,param_6);
  FUN_100277330(param_1 + 0x38,local_138);
  local_138[0] = &PTR_FUN_10147df40;
  if (local_49 < '\0') {
    operator_delete(local_60);
  }
  if (local_68 != (void *)0x0) {
    operator_delete__(local_68);
    local_70 = 0;
    local_68 = (void *)0x0;
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
    local_80 = 0;
    local_78 = (void *)0x0;
  }
  FUN_10064e2bc(local_138);
  if (local_149 < '\0') {
    operator_delete(local_160[0]);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  return;
}




void FUN_100274710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10027d7cc(param_1,param_4,param_5);
  return;
}




void FUN_10027471c(void)

{
  return;
}




undefined8
FUN_100274720(long param_1,long param_2,long param_3,long param_4,undefined8 param_5,
             undefined1 param_6)

{
  void *local_c8 [2];
  char local_b1;
  void *local_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  void *pvStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 local_50;
  undefined1 local_4f;
  
  if (((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) {
    pvStack_68 = (void *)0x0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
    lStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = (void *)0x0;
    uStack_a8 = 0;
    local_b0 = (void *)0x0;
    local_98 = (void *)0x0;
    lStack_a0 = 0;
    FUN_10001549c(local_c8);
    std::string::operator=((string *)&local_b0,(string *)local_c8);
    if (local_b1 < '\0') {
      operator_delete(local_c8[0]);
    }
    FUN_10001549c(local_c8,param_3);
    std::string::operator=((string *)&local_98,(string *)local_c8);
    if (local_b1 < '\0') {
      operator_delete(local_c8[0]);
    }
    FUN_10001549c(local_c8,param_4);
    std::string::operator=((string *)&local_80,(string *)local_c8);
    if (local_b1 < '\0') {
      operator_delete(local_c8[0]);
    }
    FUN_10001549c(local_c8,param_5);
    std::string::operator=((string *)&pvStack_68,(string *)local_c8);
    if (local_b1 < '\0') {
      operator_delete(local_c8[0]);
    }
    local_4f = 0;
    local_50 = param_6;
    FUN_10027488c(param_1 + 0x124a0,&local_b0);
    FUN_100273450(param_1);
    if (lStack_58 < 0) {
      operator_delete(pvStack_68);
    }
    if (local_70 < 0) {
      operator_delete(local_80);
    }
    if (lStack_88 < 0) {
      operator_delete(local_98);
    }
    if (lStack_a0 < 0) {
      operator_delete(local_b0);
    }
  }
  return 1;
}




void FUN_10027488c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10027ddb4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x68;
  FUN_10003330c(lVar4 + -0x68,param_2);
  FUN_10003330c(lVar4 + -0x50,param_2 + 0x18);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x30);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0x48);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0x60);
  return;
}




undefined8 FUN_100274940(long param_1)

{
  FUN_100274720(param_1 + -0x398);
  return 1;
}




undefined8 FUN_10027495c(long *param_1,undefined8 param_2,long param_3,long param_4)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *****pppppuVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  string *psVar7;
  long lVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined1 auStack_198 [8];
  void *local_190;
  undefined8 ****local_188;
  size_t local_180;
  ulong local_178;
  undefined1 auStack_170 [8];
  void *local_168;
  long local_160;
  string local_158;
  undefined7 uStack_157;
  char local_141;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  local_160 = param_3;
  iVar5 = FUN_1004e3654(param_2,&DAT_101d91650);
  if ((iVar5 != 0 || param_3 == 0) || param_4 == 0) goto LAB_100274c00;
  FUN_1004e313c(auStack_170);
  local_188 = (undefined8 *****)0x0;
  local_180 = 0;
  local_178 = 0;
  psVar7 = (string *)FUN_100274c3c(param_1 + 0x2498,&local_160);
  if (psVar7 == (string *)0x0) {
    FUN_10001549c(&local_158,local_160);
    std::string::operator=((string *)&local_188,&local_158);
    if (local_141 < '\0') {
      operator_delete((void *)CONCAT71(uStack_157,local_158));
    }
    FUN_10001549c(&local_158,local_160);
    (**(code **)(*param_1 + 0x1d8))(param_1,&local_158,auStack_170);
    if (local_141 < '\0') {
      operator_delete((void *)CONCAT71(uStack_157,local_158));
    }
  }
  else {
    std::string::operator=((string *)&local_188,psVar7);
    FUN_1000153b4(auStack_170,psVar7 + 0x18);
  }
  uVar6 = FUN_1002725c8(param_1,&local_188);
  if (uVar6 == 0xffffffff) {
    uVar6 = FUN_1002742c8(param_1,&local_188);
  }
  if ((-1 < (int)uVar6) && (uVar6 < *(uint *)(param_1 + 0x2496))) {
    local_158 = (string)0x0;
    if (((long *)param_1[0x23df] != (long *)0x0) &&
       (iVar5 = (**(code **)(*(long *)param_1[0x23df] + 0x40))(), iVar5 == 2)) {
      lVar8 = FUN_1004f1a74(0);
      FUN_1004d3350((double)lVar8,&local_158,0x100);
    }
    FUN_10027462c(param_1[0x2497] + (ulong)uVar6 * 0x50,param_2,param_4,&local_158,1,0);
    uVar9 = local_178 >> 0x38;
    sVar1 = local_180;
    if (-1 < (long)local_178) {
      sVar1 = uVar9;
    }
    bVar4 = *(byte *)((long)param_1 + 0x1251f);
    sVar2 = param_1[0x24a2];
    if (-1 < (char)bVar4) {
      sVar2 = (ulong)bVar4;
    }
    if (sVar1 == sVar2) {
      pppppuVar3 = (undefined8 *****)local_188;
      if (-1 < (long)local_178) {
        pppppuVar3 = &local_188;
      }
      pbVar11 = (byte *)param_1[0x24a1];
      if (-1 < (char)bVar4) {
        pbVar11 = (byte *)(param_1 + 0x24a1);
      }
      if ((long)local_178 < 0) {
        if ((sVar1 == 0) || (iVar5 = _memcmp(pppppuVar3,pbVar11,sVar1), iVar5 == 0))
        goto LAB_100274ba8;
      }
      else if (sVar1 == 0) {
LAB_100274ba8:
        FUN_1004e3120(auStack_198,param_4);
        FUN_100187144(param_1 + 0x1bd3,param_2,auStack_198,&local_158,1,0);
        if (local_190 != (void *)0x0) {
          operator_delete__(local_190);
        }
      }
      else if ((uint)*pbVar11 == ((uint)local_188 & 0xff)) {
        pbVar10 = (byte *)((ulong)&local_188 | 1);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_100274ba8;
          bVar4 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar4 == *pbVar11);
      }
    }
  }
  if ((long)local_178 < 0) {
    operator_delete(local_188);
  }
  if (local_168 != (void *)0x0) {
    operator_delete__(local_168);
  }
LAB_100274c00:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




long FUN_100274c3c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar3 = FUN_1004d2524(uVar7);
  uVar4 = FUN_100015208(uVar7,uVar3,0x12345678);
  uVar1 = *param_1;
  if (uVar1 != 0) {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar4 / uVar1;
    }
    uVar6 = (ulong)(uVar4 - uVar2 * uVar1);
    lVar5 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar5 + uVar6 * 8) != uVar4) {
      do {
        if (*(int *)(lVar5 + uVar6 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar6) {
          uVar2 = (uint)uVar6;
        }
        uVar6 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar5 + uVar6 * 8) != uVar4);
      if ((int)uVar6 == -1) {
        return 0;
      }
    }
    uVar1 = *(uint *)(lVar5 + uVar6 * 8 + 4);
    if (uVar1 != 0xffffffff) {
      return *(long *)(param_1 + 8) + (ulong)uVar1 * 0x38;
    }
  }
  return 0;
}




undefined8 FUN_100274cf8(long param_1)

{
  FUN_10027495c(param_1 + -0x398);
  return 1;
}




void FUN_100274d14(long param_1,byte *param_2,undefined8 param_3)

{
  size_t sVar1;
  size_t sVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  uint uVar17;
  ulong uVar18;
  
  lVar8 = FUN_10015d3ec();
  bVar4 = *(byte *)(lVar8 + 0x551f);
  sVar1 = *(size_t *)(lVar8 + 0x5510);
  if (-1 < (char)bVar4) {
    sVar1 = (ulong)bVar4;
  }
  bVar3 = param_2[0x17];
  sVar2 = *(size_t *)(param_2 + 8);
  if (-1 < (char)bVar3) {
    sVar2 = (ulong)bVar3;
  }
  if (sVar1 != sVar2) {
    pbVar15 = *(byte **)param_2;
    if (-1 < (char)bVar3) {
      pbVar15 = param_2;
    }
LAB_100274df0:
    uVar17 = *(uint *)(param_1 + 0x11fd0);
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar8 = *(long *)(param_1 + 0x11fd8);
      do {
        lVar9 = *(long *)(lVar8 + uVar18 * 8);
        bVar4 = *(byte *)(lVar9 + 0x3d87);
        uVar10 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x3d78);
        if (-1 < (char)bVar4) {
          sVar1 = uVar10;
        }
        if (sVar1 == sVar2) {
          if ((char)bVar4 < '\0') {
            if ((sVar2 == 0) ||
               (iVar6 = _memcmp(*(void **)(lVar9 + 0x3d70),pbVar15,sVar2), iVar6 == 0))
            goto LAB_100275550;
          }
          else {
            if (sVar2 == 0) goto LAB_100275550;
            if ((uint)*pbVar15 == ((uint)*(void **)(lVar9 + 0x3d70) & 0xff)) {
              pbVar11 = (byte *)(lVar9 + 0x3d71);
              pbVar13 = pbVar15;
              do {
                uVar10 = uVar10 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar10 == 0) goto LAB_100275550;
                bVar4 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar4 == *pbVar13);
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar17);
    }
    uVar17 = *(uint *)(param_1 + 0x11fe0);
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar8 = *(long *)(param_1 + 0x11fe8);
      do {
        lVar9 = *(long *)(lVar8 + uVar18 * 8);
        bVar4 = *(byte *)(lVar9 + 0x3d87);
        uVar10 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x3d78);
        if (-1 < (char)bVar4) {
          sVar1 = uVar10;
        }
        if (sVar1 == sVar2) {
          if ((char)bVar4 < '\0') {
            if ((sVar2 == 0) ||
               (iVar6 = _memcmp(*(void **)(lVar9 + 0x3d70),pbVar15,sVar2), iVar6 == 0))
            goto LAB_100275550;
          }
          else {
            if (sVar2 == 0) goto LAB_100275550;
            if ((uint)*pbVar15 == ((uint)*(void **)(lVar9 + 0x3d70) & 0xff)) {
              pbVar11 = (byte *)(lVar9 + 0x3d71);
              pbVar13 = pbVar15;
              do {
                uVar10 = uVar10 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar10 == 0) goto LAB_100275550;
                bVar4 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar4 == *pbVar13);
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar17);
    }
    uVar17 = *(uint *)(param_1 + 0x11fc0);
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar8 = *(long *)(param_1 + 0x11fc8);
      do {
        lVar9 = *(long *)(lVar8 + uVar18 * 8);
        bVar4 = *(byte *)(lVar9 + 0x3d87);
        uVar10 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x3d78);
        if (-1 < (char)bVar4) {
          sVar1 = uVar10;
        }
        if (sVar1 == sVar2) {
          if ((char)bVar4 < '\0') {
            if ((sVar2 == 0) ||
               (iVar6 = _memcmp(*(void **)(lVar9 + 0x3d70),pbVar15,sVar2), iVar6 == 0))
            goto LAB_100275550;
          }
          else {
            if (sVar2 == 0) goto LAB_100275550;
            if ((uint)*pbVar15 == ((uint)*(void **)(lVar9 + 0x3d70) & 0xff)) {
              pbVar11 = (byte *)(lVar9 + 0x3d71);
              pbVar13 = pbVar15;
              do {
                uVar10 = uVar10 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar10 == 0) goto LAB_100275550;
                bVar4 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar4 == *pbVar13);
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar17);
    }
    uVar17 = *(uint *)(param_1 + 0x11f90);
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar8 = *(long *)(param_1 + 0x11f98);
      do {
        lVar9 = *(long *)(lVar8 + uVar18 * 8);
        bVar4 = *(byte *)(lVar9 + 0x3d87);
        uVar10 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x3d78);
        if (-1 < (char)bVar4) {
          sVar1 = uVar10;
        }
        if (sVar1 == sVar2) {
          if ((char)bVar4 < '\0') {
            if ((sVar2 == 0) ||
               (iVar6 = _memcmp(*(void **)(lVar9 + 0x3d70),pbVar15,sVar2), iVar6 == 0))
            goto LAB_100275550;
          }
          else {
            if (sVar2 == 0) goto LAB_100275550;
            if ((uint)*pbVar15 == ((uint)*(void **)(lVar9 + 0x3d70) & 0xff)) {
              pbVar11 = (byte *)(lVar9 + 0x3d71);
              pbVar13 = pbVar15;
              do {
                uVar10 = uVar10 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar10 == 0) goto LAB_100275550;
                bVar4 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar4 == *pbVar13);
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar17);
    }
    uVar17 = *(uint *)(param_1 + 0x11fa0);
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar8 = *(long *)(param_1 + 0x11fa8);
      do {
        lVar9 = *(long *)(lVar8 + uVar18 * 8);
        bVar4 = *(byte *)(lVar9 + 0x3d87);
        uVar10 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x3d78);
        if (-1 < (char)bVar4) {
          sVar1 = uVar10;
        }
        if (sVar1 == sVar2) {
          if ((char)bVar4 < '\0') {
            if ((sVar2 == 0) ||
               (iVar6 = _memcmp(*(void **)(lVar9 + 0x3d70),pbVar15,sVar2), iVar6 == 0))
            goto LAB_100275550;
          }
          else {
            if (sVar2 == 0) goto LAB_100275550;
            if ((uint)*pbVar15 == ((uint)*(void **)(lVar9 + 0x3d70) & 0xff)) {
              pbVar11 = (byte *)(lVar9 + 0x3d71);
              pbVar13 = pbVar15;
              do {
                uVar10 = uVar10 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar10 == 0) goto LAB_100275550;
                bVar4 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar4 == *pbVar13);
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar17);
    }
    uVar17 = *(uint *)(param_1 + 0x11f80);
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar8 = *(long *)(param_1 + 0x11f88);
      do {
        lVar9 = *(long *)(lVar8 + uVar18 * 8);
        bVar4 = *(byte *)(lVar9 + 0x3d87);
        uVar10 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x3d78);
        if (-1 < (char)bVar4) {
          sVar1 = uVar10;
        }
        if (sVar1 == sVar2) {
          if ((char)bVar4 < '\0') {
            if ((sVar2 == 0) ||
               (iVar6 = _memcmp(*(void **)(lVar9 + 0x3d70),pbVar15,sVar2), iVar6 == 0))
            goto LAB_100275550;
          }
          else {
            if (sVar2 == 0) goto LAB_100275550;
            if ((uint)*pbVar15 == ((uint)*(void **)(lVar9 + 0x3d70) & 0xff)) {
              pbVar11 = (byte *)(lVar9 + 0x3d71);
              pbVar13 = pbVar15;
              do {
                uVar10 = uVar10 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar10 == 0) goto LAB_100275550;
                bVar4 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar4 == *pbVar13);
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar17);
    }
    uVar17 = *(uint *)(param_1 + 0x11fb0);
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar8 = *(long *)(param_1 + 0x11fb8);
      do {
        lVar9 = *(long *)(lVar8 + uVar18 * 8);
        bVar4 = *(byte *)(lVar9 + 0x3d87);
        uVar10 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar9 + 0x3d78);
        if (-1 < (char)bVar4) {
          sVar1 = uVar10;
        }
        if (sVar1 == sVar2) {
          if ((char)bVar4 < '\0') {
            if ((sVar2 == 0) ||
               (iVar6 = _memcmp(*(void **)(lVar9 + 0x3d70),pbVar15,sVar2), iVar6 == 0)) {
LAB_1002755a4:
              lVar9 = lVar9 + 0x3cd0;
              goto LAB_100275584;
            }
          }
          else {
            if (sVar2 == 0) goto LAB_1002755a4;
            if ((uint)*pbVar15 == ((uint)*(void **)(lVar9 + 0x3d70) & 0xff)) {
              pbVar11 = (byte *)(lVar9 + 0x3d71);
              pbVar13 = pbVar15;
              do {
                uVar10 = uVar10 - 1;
                pbVar13 = pbVar13 + 1;
                if (uVar10 == 0) goto LAB_1002755a4;
                bVar4 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar4 == *pbVar13);
            }
          }
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 != uVar17);
    }
    lVar8 = FUN_10015d3ec();
    uVar17 = *(uint *)(lVar8 + 0x5360);
    pbVar15 = *(byte **)param_2;
    sVar1 = *(size_t *)(param_2 + 8);
    if (-1 < (char)param_2[0x17]) {
      pbVar15 = param_2;
      sVar1 = (ulong)param_2[0x17];
    }
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar8 = *(long *)(lVar8 + 0x5368);
      pbVar13 = (byte *)(lVar8 + 1);
      do {
        puVar12 = (undefined8 *)(lVar8 + uVar18 * 0x38);
        bVar4 = *(byte *)((long)puVar12 + 0x17);
        uVar10 = (ulong)bVar4;
        sVar2 = puVar12[1];
        if (-1 < (char)bVar4) {
          sVar2 = uVar10;
        }
        if (sVar2 == sVar1) {
          if ((char)bVar4 < '\0') {
            if ((sVar1 == 0) || (iVar6 = _memcmp((void *)*puVar12,pbVar15,sVar1), iVar6 == 0)) {
LAB_1002755b0:
              lVar9 = 0x38;
              goto LAB_1002755c4;
            }
          }
          else {
            if (sVar1 == 0) goto LAB_1002755b0;
            pbVar14 = pbVar13;
            pbVar11 = pbVar15;
            if ((uint)*pbVar15 == ((uint)(void *)*puVar12 & 0xff)) {
              do {
                uVar10 = uVar10 - 1;
                pbVar11 = pbVar11 + 1;
                if (uVar10 == 0) goto LAB_1002755b0;
                bVar4 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while (bVar4 == *pbVar11);
            }
          }
        }
        uVar18 = uVar18 + 1;
        pbVar13 = pbVar13 + 0x38;
      } while (uVar18 != uVar17);
    }
    lVar8 = FUN_10015d3ec();
    uVar17 = *(uint *)(lVar8 + 0x5260);
    pbVar15 = *(byte **)param_2;
    sVar1 = *(size_t *)(param_2 + 8);
    if (-1 < (char)param_2[0x17]) {
      pbVar15 = param_2;
      sVar1 = (ulong)param_2[0x17];
    }
    if (uVar17 != 0) {
      uVar18 = 0;
      lVar8 = *(long *)(lVar8 + 0x5268);
      pbVar13 = (byte *)(lVar8 + 1);
      do {
        puVar12 = (undefined8 *)(lVar8 + uVar18 * 0x108);
        bVar4 = *(byte *)((long)puVar12 + 0x17);
        uVar10 = (ulong)bVar4;
        sVar2 = puVar12[1];
        if (-1 < (char)bVar4) {
          sVar2 = uVar10;
        }
        if (sVar2 == sVar1) {
          if ((char)bVar4 < '\0') {
            if ((sVar1 == 0) || (iVar6 = _memcmp((void *)*puVar12,pbVar15,sVar1), iVar6 == 0)) {
LAB_1002755bc:
              lVar9 = 0x108;
LAB_1002755c4:
              lVar9 = lVar8 + (uVar18 & 0xffffffff) * lVar9 + 0x18;
              goto LAB_100275584;
            }
          }
          else {
            if (sVar1 == 0) goto LAB_1002755bc;
            pbVar14 = pbVar13;
            pbVar11 = pbVar15;
            if ((uint)*pbVar15 == ((uint)(void *)*puVar12 & 0xff)) {
              do {
                uVar10 = uVar10 - 1;
                pbVar11 = pbVar11 + 1;
                if (uVar10 == 0) goto LAB_1002755bc;
                bVar4 = *pbVar14;
                pbVar14 = pbVar14 + 1;
              } while (bVar4 == *pbVar11);
            }
          }
        }
        uVar18 = uVar18 + 1;
        pbVar13 = pbVar13 + 0x108;
      } while (uVar18 != uVar17);
    }
    iVar6 = FUN_100111828();
    if (iVar6 != 0) {
      uVar17 = 0;
      do {
        lVar8 = FUN_100111838(uVar17);
        bVar4 = *(byte *)(lVar8 + 0x1f);
        uVar18 = (ulong)bVar4;
        sVar1 = *(size_t *)(lVar8 + 0x10);
        if (-1 < (char)bVar4) {
          sVar1 = uVar18;
        }
        bVar3 = param_2[0x17];
        sVar2 = *(size_t *)(param_2 + 8);
        if (-1 < (char)bVar3) {
          sVar2 = (ulong)bVar3;
        }
        if (sVar1 == sVar2) {
          pvVar16 = *(void **)(lVar8 + 8);
          puVar12 = pvVar16;
          if (-1 < (char)bVar4) {
            puVar12 = (undefined8 *)(lVar8 + 8);
          }
          pbVar15 = *(byte **)param_2;
          if (-1 < (char)bVar3) {
            pbVar15 = param_2;
          }
          if ((char)bVar4 < '\0') {
            if ((sVar1 == 0) || (iVar6 = _memcmp(puVar12,pbVar15,sVar1), iVar6 == 0))
            goto LAB_1002755d0;
          }
          else {
            if (sVar1 == 0) {
LAB_1002755d0:
              lVar9 = FUN_100111838(uVar17);
              lVar9 = lVar9 + 0x20;
              goto LAB_100275584;
            }
            if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
              pbVar13 = (byte *)(lVar8 + 9);
              do {
                uVar18 = uVar18 - 1;
                pbVar15 = pbVar15 + 1;
                if (uVar18 == 0) goto LAB_1002755d0;
                bVar4 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              } while (bVar4 == *pbVar15);
            }
          }
        }
        uVar17 = uVar17 + 1;
        uVar7 = FUN_100111828();
      } while (uVar17 < uVar7);
    }
    return;
  }
  pvVar16 = *(void **)(lVar8 + 0x5508);
  puVar12 = pvVar16;
  if (-1 < (char)bVar4) {
    puVar12 = (undefined8 *)(lVar8 + 0x5508);
  }
  pbVar15 = *(byte **)param_2;
  if (-1 < (char)bVar3) {
    pbVar15 = param_2;
  }
  if ((char)bVar4 < '\0') {
    if ((sVar1 != 0) && (iVar6 = _memcmp(puVar12,pbVar15,sVar1), iVar6 != 0)) goto LAB_100274df0;
  }
  else if (sVar1 != 0) {
    if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
      lVar9 = 0;
      do {
        if ((ulong)bVar4 - 1 == lVar9) goto LAB_100275574;
        pbVar13 = (byte *)(lVar8 + 0x5509 + lVar9);
        lVar5 = lVar9 + 1;
        lVar9 = lVar9 + 1;
      } while (*pbVar13 == pbVar15[lVar5]);
    }
    goto LAB_100274df0;
  }
LAB_100275574:
  lVar9 = param_1 + 75000;
LAB_100275584:
  FUN_1000153b4(param_3,lVar9);
  return;
LAB_100275550:
  lVar9 = lVar9 + 0x3cd0;
  goto LAB_100275584;
}




void FUN_1002755e0(long param_1)

{
  FUN_100274d14(param_1 + -0x398);
  return;
}




void FUN_100275f84(long param_1)

{
  FUN_1002755e8(param_1 + -0x398);
  return;
}




void FUN_100275f8c(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_100276078();
  lVar3 = FUN_10015d3ec();
  lVar4 = FUN_10015d3ec();
  FUN_1004e3170(auStack_40,lVar4 + 0x50c8);
  FUN_1002727f0(param_1,lVar3 + 0x5478,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  FUN_10027631c(param_1);
  lVar3 = FUN_10015d3ec();
  lVar4 = FUN_10015d3ec();
  FUN_1004e3170(auStack_40,lVar4 + 0x5308);
  FUN_100272aec(param_1,lVar3 + 0x5490,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  if (*(long **)(param_1 + 0x11ef8) == (long *)0x0) {
    bVar1 = false;
  }
  else {
    iVar2 = (**(code **)(**(long **)(param_1 + 0x11ef8) + 0x40))();
    bVar1 = iVar2 == 2;
  }
  *(bool *)(param_1 + 0x125b3) = bVar1;
  FUN_1002765c0(param_1);
  return;
}




void FUN_100276078(long param_1)

{
  string *this;
  size_t sVar1;
  undefined8 *puVar2;
  size_t sVar3;
  byte bVar4;
  string sVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  string *psVar12;
  string *psVar13;
  ulong uVar14;
  string *local_48;
  
  this = (string *)(param_1 + 0x12520);
  bVar6 = *(byte *)(param_1 + 0x12537);
  uVar14 = (ulong)bVar6;
  sVar1 = *(size_t *)(param_1 + 0x12528);
  if (-1 < (char)bVar6) {
    sVar1 = uVar14;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar3) {
    psVar12 = *(string **)this;
    if (-1 < (char)bVar6) {
      psVar12 = this;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar7 = _memcmp(psVar12,pbVar10,sVar1);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)*(string **)this & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x12521);
        do {
          uVar14 = uVar14 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar14 == 0) {
            return;
          }
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0x11ff0);
  if (lVar8 != 0) {
    bVar4 = *(byte *)(lVar8 + 0x3d87);
    uVar14 = (ulong)bVar4;
    sVar3 = *(size_t *)(lVar8 + 0x3d78);
    if (-1 < (char)bVar4) {
      sVar3 = uVar14;
    }
    if (sVar3 == sVar1) {
      pvVar11 = *(void **)(lVar8 + 0x3d70);
      puVar2 = pvVar11;
      if (-1 < (char)bVar4) {
        puVar2 = (undefined8 *)(lVar8 + 0x3d70);
      }
      psVar12 = *(string **)this;
      if (-1 < (char)bVar6) {
        psVar12 = this;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 == 0) || (iVar7 = _memcmp(puVar2,psVar12,sVar1), iVar7 == 0)) goto LAB_100276204;
      }
      else if (sVar1 == 0) {
LAB_100276204:
        *(long *)(param_1 + 0x11ff0) = 0;
      }
      else if ((uint)(byte)*psVar12 == ((uint)pvVar11 & 0xff)) {
        psVar13 = (string *)(lVar8 + 0x3d71);
        do {
          uVar14 = uVar14 - 1;
          psVar12 = psVar12 + 1;
          if (uVar14 == 0) goto LAB_100276204;
          sVar5 = *psVar13;
          psVar13 = psVar13 + 1;
        } while (sVar5 == *psVar12);
      }
    }
  }
  bVar4 = *(byte *)(param_1 + 0x1258f);
  uVar14 = (ulong)bVar4;
  sVar3 = *(size_t *)(param_1 + 0x12580);
  if (-1 < (char)bVar4) {
    sVar3 = uVar14;
  }
  if (sVar3 == sVar1) {
    psVar12 = *(string **)(param_1 + 0x12578);
    if (-1 < (char)bVar4) {
      psVar12 = (string *)(param_1 + 0x12578);
    }
    psVar13 = *(string **)this;
    if (-1 < (char)bVar6) {
      psVar13 = this;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar7 = _memcmp(psVar12,psVar13,sVar1), iVar7 != 0)) goto LAB_1002762ac;
    }
    else if (sVar1 != 0) {
      if ((uint)(byte)*psVar13 == ((uint)*(string **)(param_1 + 0x12578) & 0xff)) {
        psVar12 = (string *)(param_1 + 0x12579);
        do {
          uVar14 = uVar14 - 1;
          psVar13 = psVar13 + 1;
          if (uVar14 == 0) goto LAB_10027629c;
          sVar5 = *psVar12;
          psVar12 = psVar12 + 1;
        } while (sVar5 == *psVar13);
      }
      goto LAB_1002762ac;
    }
LAB_10027629c:
    std::string::operator=((string *)(param_1 + 0x12578),(string *)&DAT_101d91198);
  }
LAB_1002762ac:
  FUN_100279e7c(param_1,this);
  local_48 = this;
  if (*(char *)(param_1 + 0x12537) < '\0') {
    local_48 = *(string **)this;
  }
  FUN_100279fb8(param_1 + 0x124c0,&local_48);
  FUN_100188db8(param_1 + 0xde98,this);
  std::string::operator=(this,(string *)&DAT_101d91198);
  return;
}




void FUN_10027631c(long param_1)

{
  string *this;
  size_t sVar1;
  undefined8 *puVar2;
  size_t sVar3;
  byte bVar4;
  string sVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  string *psVar12;
  string *psVar13;
  ulong uVar14;
  string *local_48;
  
  this = (string *)(param_1 + 0x12538);
  bVar6 = *(byte *)(param_1 + 0x1254f);
  uVar14 = (ulong)bVar6;
  sVar1 = *(size_t *)(param_1 + 0x12540);
  if (-1 < (char)bVar6) {
    sVar1 = uVar14;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar1 == sVar3) {
    psVar12 = *(string **)this;
    if (-1 < (char)bVar6) {
      psVar12 = this;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar1 == 0) {
        return;
      }
      iVar7 = _memcmp(psVar12,pbVar10,sVar1);
      if (iVar7 == 0) {
        return;
      }
    }
    else {
      if (sVar1 == 0) {
        return;
      }
      if ((uint)*pbVar10 == ((uint)*(string **)this & 0xff)) {
        pbVar9 = (byte *)(param_1 + 0x12539);
        do {
          uVar14 = uVar14 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar14 == 0) {
            return;
          }
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  lVar8 = *(long *)(param_1 + 0x11ff0);
  if (lVar8 != 0) {
    bVar4 = *(byte *)(lVar8 + 0x3d87);
    uVar14 = (ulong)bVar4;
    sVar3 = *(size_t *)(lVar8 + 0x3d78);
    if (-1 < (char)bVar4) {
      sVar3 = uVar14;
    }
    if (sVar3 == sVar1) {
      pvVar11 = *(void **)(lVar8 + 0x3d70);
      puVar2 = pvVar11;
      if (-1 < (char)bVar4) {
        puVar2 = (undefined8 *)(lVar8 + 0x3d70);
      }
      psVar12 = *(string **)this;
      if (-1 < (char)bVar6) {
        psVar12 = this;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 == 0) || (iVar7 = _memcmp(puVar2,psVar12,sVar1), iVar7 == 0)) goto LAB_1002764a8;
      }
      else if (sVar1 == 0) {
LAB_1002764a8:
        *(long *)(param_1 + 0x11ff0) = 0;
      }
      else if ((uint)(byte)*psVar12 == ((uint)pvVar11 & 0xff)) {
        psVar13 = (string *)(lVar8 + 0x3d71);
        do {
          uVar14 = uVar14 - 1;
          psVar12 = psVar12 + 1;
          if (uVar14 == 0) goto LAB_1002764a8;
          sVar5 = *psVar13;
          psVar13 = psVar13 + 1;
        } while (sVar5 == *psVar12);
      }
    }
  }
  bVar4 = *(byte *)(param_1 + 0x1258f);
  uVar14 = (ulong)bVar4;
  sVar3 = *(size_t *)(param_1 + 0x12580);
  if (-1 < (char)bVar4) {
    sVar3 = uVar14;
  }
  if (sVar3 == sVar1) {
    psVar12 = *(string **)(param_1 + 0x12578);
    if (-1 < (char)bVar4) {
      psVar12 = (string *)(param_1 + 0x12578);
    }
    psVar13 = *(string **)this;
    if (-1 < (char)bVar6) {
      psVar13 = this;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 != 0) && (iVar7 = _memcmp(psVar12,psVar13,sVar1), iVar7 != 0)) goto LAB_100276550;
    }
    else if (sVar1 != 0) {
      if ((uint)(byte)*psVar13 == ((uint)*(string **)(param_1 + 0x12578) & 0xff)) {
        psVar12 = (string *)(param_1 + 0x12579);
        do {
          uVar14 = uVar14 - 1;
          psVar13 = psVar13 + 1;
          if (uVar14 == 0) goto LAB_100276540;
          sVar5 = *psVar12;
          psVar12 = psVar12 + 1;
        } while (sVar5 == *psVar13);
      }
      goto LAB_100276550;
    }
LAB_100276540:
    std::string::operator=((string *)(param_1 + 0x12578),(string *)&DAT_101d91198);
  }
LAB_100276550:
  FUN_100279e7c(param_1,this);
  local_48 = this;
  if (*(char *)(param_1 + 0x1254f) < '\0') {
    local_48 = *(string **)this;
  }
  FUN_100279fb8(param_1 + 0x124c0,&local_48);
  FUN_100188db8(param_1 + 0xde98,this);
  std::string::operator=(this,(string *)&DAT_101d91198);
  return;
}




void FUN_1002765c0(long param_1)

{
  string *psVar1;
  int iVar2;
  long lVar3;
  string *psVar4;
  string *local_50;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  lVar3 = FUN_100278fd8(param_1,param_1 + 0x12508,0);
  FUN_1002795e8(param_1,0,0);
  FUN_1002795e8(param_1,lVar3,0);
  if (lVar3 != 0) {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_38 = 0;
    psVar1 = (string *)(lVar3 + 0x3d70);
    local_50 = psVar1;
    if (*(char *)(lVar3 + 0x3d87) < '\0') {
      local_50 = *(string **)psVar1;
    }
    psVar4 = (string *)FUN_100274c3c(param_1 + 0x124c0,&local_50);
    if ((psVar4 == (string *)0x0) &&
       ((*(long **)(param_1 + 0x11ef8) == (long *)0x0 ||
        (iVar2 = (**(code **)(**(long **)(param_1 + 0x11ef8) + 0x40))(), psVar4 = psVar1, iVar2 != 2
        )))) {
      FUN_100188e18(param_1 + 0xde98,lVar3 + 0x3cd0,&local_48);
    }
    else {
      std::string::operator=((string *)&local_48,psVar4);
    }
    FUN_100187774(param_1 + 0xde98,&local_48);
    if (local_38 < 0) {
      operator_delete(local_48);
    }
  }
  return;
}




void FUN_1002766e4(long param_1)

{
  FUN_100275f8c(param_1 + -0x398);
  return;
}




void FUN_1002766ec(long param_1)

{
  std::string::operator=((string *)(param_1 + 0x12538),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x12520),(string *)&DAT_101d91198);
  return;
}




void FUN_100276734(long param_1)

{
  std::string::operator=((string *)(param_1 + 0x121a0),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x12188),(string *)&DAT_101d91198);
  return;
}




void FUN_10027677c(long *param_1,long param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 ****ppppuVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  undefined8 ****ppppuVar17;
  undefined1 auStack_1b8 [8];
  void *local_1b0;
  undefined1 auStack_1a8 [8];
  void *local_1a0;
  undefined1 auStack_198 [8];
  void *local_190;
  undefined8 ***local_188;
  size_t local_180;
  byte local_171;
  long local_170;
  void *local_168;
  void *local_160;
  char local_151;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  bVar6 = true;
  local_170 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_100276afc;
  lVar9 = FUN_100274c3c(param_1 + 0x2498,&local_170);
  if (lVar9 != 0) {
    FUN_10003330c(&local_188,lVar9);
    uVar10 = FUN_1004e0150("MENU_CHAT_PLAYER_HAS_JOINED_MESSAGE",0);
    thunk_FUN_1004e439c(auStack_198,uVar10);
    FUN_1004e313c(auStack_1a8);
    FUN_10001549c(&local_168,param_2);
    (**(code **)(*param_1 + 0x1d8))(param_1,&local_168,auStack_1a8);
    if (local_151 < '\0') {
      operator_delete(local_168);
    }
    iVar7 = FUN_1004e3654(auStack_1a8,&DAT_101d91650);
    if (iVar7 != 0) {
      FUN_1004e3120(&local_168,"[?]");
      FUN_1000153b4(auStack_1a8,&local_168);
      if (local_160 != (void *)0x0) {
        operator_delete__(local_160);
      }
    }
    FUN_1004e3120(&local_168,"[PLAYER_HANDLE]");
    FUN_1004e3bc4(auStack_198,0,&local_168,auStack_1a8);
    if (local_160 != (void *)0x0) {
      operator_delete__(local_160);
    }
    uVar8 = FUN_1002725c8(param_1,&local_188);
    if (uVar8 == 0xffffffff) {
      uVar8 = FUN_1002742c8(param_1,&local_188);
      FUN_100270dec(param_1);
      plVar12 = (long *)param_1[0x23df];
      if ((plVar12 != (long *)0x0) &&
         (iVar7 = (**(code **)(*plVar12 + 0x40))(), bVar4 = local_171,
         ppppuVar17 = (undefined8 ****)local_188, iVar7 == 2)) {
        uVar13 = (ulong)local_171;
        sVar1 = local_180;
        if (-1 < (char)local_171) {
          sVar1 = uVar13;
        }
        bVar5 = *(byte *)((long)param_1 + 0x12537);
        sVar2 = param_1[0x24a5];
        if (-1 < (char)bVar5) {
          sVar2 = (ulong)bVar5;
        }
        if (sVar1 == sVar2) {
          ppppuVar3 = (undefined8 ****)local_188;
          if (-1 < (char)local_171) {
            ppppuVar3 = &local_188;
          }
          pbVar16 = (byte *)param_1[0x24a4];
          if (-1 < (char)bVar5) {
            pbVar16 = (byte *)(param_1 + 0x24a4);
          }
          if ((char)local_171 < '\0') {
            if ((sVar1 == 0) || (iVar7 = _memcmp(ppppuVar3,pbVar16,sVar1), iVar7 == 0))
            goto LAB_100276be0;
          }
          else {
            if (sVar1 == 0) goto LAB_100276bdc;
            if ((uint)*pbVar16 == ((uint)local_188 & 0xff)) {
              pbVar15 = (byte *)((ulong)&local_188 | 1);
              uVar14 = uVar13;
              do {
                uVar14 = uVar14 - 1;
                pbVar16 = pbVar16 + 1;
                if (uVar14 == 0) goto LAB_100276bd8;
                bVar5 = *pbVar15;
                pbVar15 = pbVar15 + 1;
              } while (bVar5 == *pbVar16);
            }
          }
        }
        ppppuVar17 = (undefined8 ****)local_188;
        bVar5 = *(byte *)((long)param_1 + 0x1254f);
        sVar2 = param_1[0x24a8];
        if (-1 < (char)bVar5) {
          sVar2 = (ulong)bVar5;
        }
        if (sVar1 == sVar2) {
          ppppuVar3 = (undefined8 ****)local_188;
          if (-1 < (char)bVar4) {
            ppppuVar3 = &local_188;
          }
          pbVar16 = (byte *)param_1[0x24a7];
          if (-1 < (char)bVar5) {
            pbVar16 = (byte *)(param_1 + 0x24a7);
          }
          if ((char)bVar4 < '\0') {
            if ((sVar1 == 0) || (iVar7 = _memcmp(ppppuVar3,pbVar16,sVar1), iVar7 == 0))
            goto LAB_100276be0;
          }
          else {
            if (sVar1 == 0) goto LAB_100276bdc;
            if ((uint)*pbVar16 == ((uint)local_188 & 0xff)) {
              pbVar15 = (byte *)((ulong)&local_188 | 1);
              do {
                uVar13 = uVar13 - 1;
                pbVar16 = pbVar16 + 1;
                if (uVar13 == 0) goto LAB_100276bd8;
                bVar5 = *pbVar15;
                pbVar15 = pbVar15 + 1;
              } while (bVar5 == *pbVar16);
            }
          }
        }
      }
    }
    goto LAB_1002768e0;
  }
LAB_100276af4:
  bVar6 = lVar9 != 0;
LAB_100276afc:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(bVar6);
  }
  return;
LAB_100276bd8:
  ppppuVar17 = (undefined8 ****)local_188;
  if (-1 < (char)bVar4) {
LAB_100276bdc:
    ppppuVar17 = &local_188;
  }
LAB_100276be0:
  plVar12 = (long *)param_1[0x23df];
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x80))(plVar12,ppppuVar17,200);
  }
LAB_1002768e0:
  lVar11 = FUN_1004f1a74(0);
  FUN_1004d3350((double)lVar11,&local_168,0x100);
  if (uVar8 != 0xffffffff) {
    FUN_10027462c(param_1[0x2497] + (ulong)uVar8 * 0x50,auStack_198,"",&local_168,0,1);
  }
  uVar13 = (ulong)local_171;
  if (-1 < (char)local_171) {
    local_180 = uVar13;
  }
  bVar4 = *(byte *)((long)param_1 + 0x1251f);
  sVar1 = param_1[0x24a2];
  if (-1 < (char)bVar4) {
    sVar1 = (ulong)bVar4;
  }
  if (local_180 == sVar1) {
    ppppuVar17 = (undefined8 ****)local_188;
    if (-1 < (char)local_171) {
      ppppuVar17 = &local_188;
    }
    pbVar16 = (byte *)param_1[0x24a1];
    if (-1 < (char)bVar4) {
      pbVar16 = (byte *)(param_1 + 0x24a1);
    }
    if ((char)local_171 < '\0') {
      if ((local_180 == 0) || (iVar7 = _memcmp(ppppuVar17,pbVar16,local_180), iVar7 == 0))
      goto LAB_100276a8c;
    }
    else if (local_180 == 0) {
LAB_100276a8c:
      FUN_1004e3170(auStack_1b8,&DAT_101d91198);
      FUN_100187144(param_1 + 0x1bd3,auStack_198,auStack_1b8,&local_168,0,1);
      if (local_1b0 != (void *)0x0) {
        operator_delete__(local_1b0);
      }
    }
    else if ((uint)*pbVar16 == ((uint)local_188 & 0xff)) {
      pbVar15 = (byte *)((ulong)&local_188 | 1);
      do {
        uVar13 = uVar13 - 1;
        pbVar16 = pbVar16 + 1;
        if (uVar13 == 0) goto LAB_100276a8c;
        bVar4 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar4 == *pbVar16);
    }
  }
  if (local_1a0 != (void *)0x0) {
    operator_delete__(local_1a0);
  }
  if (local_190 != (void *)0x0) {
    operator_delete__(local_190);
  }
  if ((char)local_171 < '\0') {
    operator_delete(local_188);
  }
  goto LAB_100276af4;
}




void FUN_100276c04(long param_1)

{
  FUN_10027677c(param_1 + -0x398);
  return;
}




undefined8 FUN_100276c0c(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  void *pvVar2;
  undefined8 ****ppppuVar3;
  size_t sVar4;
  size_t sVar5;
  long *plVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 uVar13;
  void *pvVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_1a8 [8];
  void *local_1a0;
  undefined1 auStack_198 [8];
  void *local_190;
  undefined1 auStack_188 [8];
  void *local_180;
  undefined8 ***local_178;
  void *local_170;
  byte local_161;
  long local_160;
  void *local_158;
  void *local_150;
  char local_141;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  local_160 = param_3;
  if ((param_2 == 0) || (param_3 == 0)) goto LAB_10027725c;
  lVar12 = FUN_100274c3c(param_1 + 0x2498,&local_160);
  if (lVar12 == 0) {
    uVar13 = FUN_1004e0150("MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE",0);
    thunk_FUN_1004e439c(&local_178,uVar13);
    FUN_1004e313c(auStack_188);
    FUN_10001549c(&local_158,param_2);
    (**(code **)(*param_1 + 0x1d8))(param_1,&local_158,auStack_188);
    if (local_141 < '\0') {
      operator_delete(local_158);
    }
    FUN_1004e3120(&local_158,"[PLAYER_HANDLE]");
    FUN_1004e3bc4(&local_178,0,&local_158,auStack_188);
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
    }
    lVar12 = FUN_10015d3ec();
    if (*(uint *)(lVar12 + 0x5260) != 0) {
      uVar10 = 0;
      lVar17 = 0x18;
      uVar18 = 1;
      do {
        uVar11 = FUN_1004e3654(*(long *)(lVar12 + 0x5268) + lVar17,auStack_188);
        uVar10 = uVar11 | uVar10;
        if (*(uint *)(lVar12 + 0x5260) <= uVar18) break;
        lVar17 = lVar17 + 0x108;
        uVar18 = uVar18 + 1;
      } while ((uVar10 & 1) == 0);
      if ((uVar10 & 1) != 0) {
        plVar1 = param_1 + 0x24a4;
        uVar10 = FUN_1002725c8(param_1,plVar1);
        if (uVar10 == 0xffffffff) {
          uVar10 = FUN_1002742c8(param_1,plVar1);
          FUN_100270dec(param_1);
        }
        lVar12 = FUN_1004f1a74(0);
        FUN_1004d3350((double)lVar12,&local_158,0x100);
        FUN_10027462c(param_1[0x2497] + (ulong)uVar10 * 0x50,&local_178,"",&local_158,0,1);
        bVar7 = *(byte *)((long)param_1 + 0x12537);
        uVar18 = (ulong)bVar7;
        sVar4 = param_1[0x24a5];
        if (-1 < (char)bVar7) {
          sVar4 = uVar18;
        }
        bVar8 = *(byte *)((long)param_1 + 0x1251f);
        sVar5 = param_1[0x24a2];
        if (-1 < (char)bVar8) {
          sVar5 = (ulong)bVar8;
        }
        if (sVar4 == sVar5) {
          plVar6 = (long *)*plVar1;
          if (-1 < (char)bVar7) {
            plVar6 = plVar1;
          }
          pbVar16 = (byte *)param_1[0x24a1];
          if (-1 < (char)bVar8) {
            pbVar16 = (byte *)(param_1 + 0x24a1);
          }
          if ((char)bVar7 < '\0') {
            if ((sVar4 == 0) || (iVar9 = _memcmp(plVar6,pbVar16,sVar4), iVar9 == 0))
            goto LAB_1002770a8;
          }
          else if (sVar4 == 0) {
LAB_1002770a8:
            FUN_1004e3170(auStack_198,&DAT_101d91198);
            FUN_100187144(param_1 + 0x1bd3,&local_178,auStack_198,&local_158,0,1);
            if (local_190 != (void *)0x0) {
              operator_delete__(local_190);
            }
          }
          else if ((uint)*pbVar16 == ((uint)(long *)*plVar1 & 0xff)) {
            pbVar15 = (byte *)((long)param_1 + 0x12521);
            do {
              uVar18 = uVar18 - 1;
              pbVar16 = pbVar16 + 1;
              if (uVar18 == 0) goto LAB_1002770a8;
              bVar7 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar7 == *pbVar16);
          }
        }
      }
    }
    lVar12 = FUN_10015d3ec();
    if (*(uint *)(lVar12 + 0x5360) != 0) {
      uVar10 = 0;
      lVar17 = 0x18;
      uVar18 = 1;
      do {
        uVar11 = FUN_1004e3654(*(long *)(lVar12 + 0x5368) + lVar17,auStack_188);
        uVar10 = uVar11 | uVar10;
        if (*(uint *)(lVar12 + 0x5360) <= uVar18) break;
        lVar17 = lVar17 + 0x38;
        uVar18 = uVar18 + 1;
      } while ((uVar10 & 1) == 0);
      if ((uVar10 & 1) != 0) {
        plVar1 = param_1 + 0x24a7;
        iVar9 = FUN_1002725c8(param_1,plVar1);
        if (iVar9 == -1) {
          FUN_1002742c8(param_1,plVar1);
          FUN_100270dec(param_1);
        }
        bVar7 = *(byte *)((long)param_1 + 0x1254f);
        uVar18 = (ulong)bVar7;
        sVar4 = param_1[0x24a8];
        if (-1 < (char)bVar7) {
          sVar4 = uVar18;
        }
        bVar8 = *(byte *)((long)param_1 + 0x1251f);
        sVar5 = param_1[0x24a2];
        if (-1 < (char)bVar8) {
          sVar5 = (ulong)bVar8;
        }
        if (sVar4 == sVar5) {
          plVar6 = (long *)*plVar1;
          if (-1 < (char)bVar7) {
            plVar6 = plVar1;
          }
          pbVar16 = (byte *)param_1[0x24a1];
          if (-1 < (char)bVar8) {
            pbVar16 = (byte *)(param_1 + 0x24a1);
          }
          if ((char)bVar7 < '\0') {
            if ((sVar4 == 0) || (iVar9 = _memcmp(plVar6,pbVar16,sVar4), iVar9 == 0))
            goto LAB_100277208;
          }
          else if (sVar4 == 0) {
LAB_100277208:
            lVar12 = FUN_1004f1a74(0);
            FUN_1004d3350((double)lVar12,&local_158,0x100);
            FUN_100187144(param_1 + 0x1bd3,&local_178,&DAT_101d91650,&local_158,0,1);
          }
          else if ((uint)*pbVar16 == ((uint)(long *)*plVar1 & 0xff)) {
            pbVar15 = (byte *)((long)param_1 + 0x12539);
            do {
              uVar18 = uVar18 - 1;
              pbVar16 = pbVar16 + 1;
              if (uVar18 == 0) goto LAB_100277208;
              bVar7 = *pbVar15;
              pbVar15 = pbVar15 + 1;
            } while (bVar7 == *pbVar16);
          }
        }
      }
    }
    if (local_180 != (void *)0x0) {
      operator_delete__(local_180);
    }
    if (local_170 != (void *)0x0) {
      operator_delete__(local_170);
    }
    goto LAB_10027725c;
  }
  FUN_10003330c(&local_178);
  uVar13 = FUN_1004e0150("MENU_CHAT_PLAYER_HAS_LEFT_MESSAGE",0);
  thunk_FUN_1004e439c(auStack_188,uVar13);
  FUN_1004e313c(auStack_198);
  FUN_10001549c(&local_158,param_2);
  (**(code **)(*param_1 + 0x1d8))(param_1,&local_158,auStack_198);
  if (local_141 < '\0') {
    operator_delete(local_158);
  }
  iVar9 = FUN_1004e3654(auStack_198,&DAT_101d91650);
  if (iVar9 != 0) {
    FUN_1004e3120(&local_158,"[?]");
    FUN_1000153b4(auStack_198,&local_158);
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
    }
  }
  FUN_1004e3120(&local_158,"[PLAYER_HANDLE]");
  FUN_1004e3bc4(auStack_188,0,&local_158,auStack_198);
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  uVar10 = FUN_1002725c8(param_1,&local_178);
  if (uVar10 == 0xffffffff) {
    uVar10 = FUN_1002742c8(param_1,&local_178);
    FUN_100270dec(param_1);
  }
  lVar12 = FUN_1004f1a74(0);
  FUN_1004d3350((double)lVar12,&local_158,0x100);
  FUN_10027462c(param_1[0x2497] + (ulong)uVar10 * 0x50,auStack_188,"",&local_158,0,1);
  pvVar14 = (void *)(ulong)local_161;
  if (-1 < (char)local_161) {
    local_170 = pvVar14;
  }
  bVar7 = *(byte *)((long)param_1 + 0x1251f);
  pvVar2 = (void *)param_1[0x24a2];
  if (-1 < (char)bVar7) {
    pvVar2 = (void *)(ulong)bVar7;
  }
  if (local_170 == pvVar2) {
    ppppuVar3 = (undefined8 ****)local_178;
    if (-1 < (char)local_161) {
      ppppuVar3 = &local_178;
    }
    pbVar16 = (byte *)param_1[0x24a1];
    if (-1 < (char)bVar7) {
      pbVar16 = (byte *)(param_1 + 0x24a1);
    }
    if ((char)local_161 < '\0') {
      if ((local_170 == (void *)0x0) ||
         (iVar9 = _memcmp(ppppuVar3,pbVar16,(size_t)local_170), iVar9 == 0)) goto LAB_100277030;
    }
    else if (local_170 == (void *)0x0) {
LAB_100277030:
      FUN_1004e3170(auStack_1a8,&DAT_101d91198);
      FUN_100187144(param_1 + 0x1bd3,auStack_188,auStack_1a8,&local_158,0,1);
      if (local_1a0 != (void *)0x0) {
        operator_delete__(local_1a0);
      }
    }
    else if ((uint)*pbVar16 == ((uint)local_178 & 0xff)) {
      pbVar15 = (byte *)((ulong)&local_178 | 1);
      do {
        pvVar14 = (void *)((long)pvVar14 - 1);
        pbVar16 = pbVar16 + 1;
        if (pvVar14 == (void *)0x0) goto LAB_100277030;
        bVar7 = *pbVar15;
        pbVar15 = pbVar15 + 1;
      } while (bVar7 == *pbVar16);
    }
  }
  if (local_190 != (void *)0x0) {
    operator_delete__(local_190);
  }
  if (local_180 != (void *)0x0) {
    operator_delete__(local_180);
  }
  if ((char)local_161 < '\0') {
    operator_delete(local_178);
  }
LAB_10027725c:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return 1;
}




undefined8 FUN_100277298(long param_1)

{
  FUN_100276c0c(param_1 + -0x398);
  return 1;
}




long FUN_1002772b4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10064e20c();
  *puVar1 = &PTR_FUN_10147df40;
  thunk_FUN_1004e439c(puVar1 + 0x17,param_2);
  thunk_FUN_1004e439c(param_1 + 200,param_3);
  FUN_10003330c(param_1 + 0xd8,param_4);
  *(undefined1 *)(param_1 + 0xf0) = param_5;
  *(undefined1 *)(param_1 + 0xf1) = param_6;
  return param_1;
}




void FUN_100277330(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10027def4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xf8;
  *(undefined ***)(lVar4 + -0xf8) = &PTR_FUN_1014a5658;
  FUN_10027e070(lVar4 + -0xf0,param_2 + 8);
  *(undefined8 *)(lVar4 + -0xe0) = *(undefined8 *)(param_2 + 0x18);
  *(undefined ***)(lVar4 + -0xf8) = &PTR_FUN_1014a5530;
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar5 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = *(undefined8 *)(param_2 + 0x38);
  uVar7 = *(undefined8 *)(param_2 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(lVar4 + -0xb0) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(lVar4 + -0xb8) = uVar9;
  *(undefined8 *)(lVar4 + -0xc0) = uVar8;
  *(undefined8 *)(lVar4 + -200) = uVar7;
  *(undefined8 *)(lVar4 + -0xd0) = uVar6;
  *(undefined8 *)(lVar4 + -0xd8) = uVar5;
  uVar6 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar8 = *(undefined8 *)(param_2 + 0x68);
  uVar7 = *(undefined8 *)(param_2 + 0x60);
  uVar10 = *(undefined8 *)(param_2 + 0x78);
  uVar9 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar4 + -0x78) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar4 + -0x80) = uVar10;
  *(undefined8 *)(lVar4 + -0x88) = uVar9;
  *(undefined8 *)(lVar4 + -0x90) = uVar8;
  *(undefined8 *)(lVar4 + -0x98) = uVar7;
  *(undefined8 *)(lVar4 + -0xa0) = uVar6;
  *(undefined8 *)(lVar4 + -0xa8) = uVar5;
  *(undefined ***)(lVar4 + -0xf8) = &PTR_thunk_FUN_10064e2bc_1014a5ca0;
  uVar6 = *(undefined8 *)(param_2 + 0x90);
  uVar5 = *(undefined8 *)(param_2 + 0x88);
  uVar8 = *(undefined8 *)(param_2 + 0xa0);
  uVar7 = *(undefined8 *)(param_2 + 0x98);
  uVar9 = *(undefined8 *)(param_2 + 0xa5);
  *(undefined8 *)(lVar4 + -0x4b) = *(undefined8 *)(param_2 + 0xad);
  *(undefined8 *)(lVar4 + -0x53) = uVar9;
  *(undefined8 *)(lVar4 + -0x68) = uVar6;
  *(undefined8 *)(lVar4 + -0x70) = uVar5;
  *(undefined8 *)(lVar4 + -0x58) = uVar8;
  *(undefined8 *)(lVar4 + -0x60) = uVar7;
  *(undefined ***)(lVar4 + -0xf8) = &PTR_FUN_10147df40;
  thunk_FUN_1004e439c(lVar4 + -0x40,param_2 + 0xb8);
  thunk_FUN_1004e439c(lVar4 + -0x30,param_2 + 200);
  FUN_10003330c(lVar4 + -0x20,param_2 + 0xd8);
  *(undefined2 *)(lVar4 + -8) = *(undefined2 *)(param_2 + 0xf0);
  return;
}




void FUN_10027746c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10147df40;
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    operator_delete((void *)param_1[0x1b]);
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
  FUN_10064e2bc(param_1);
  return;
}




long FUN_1002774c8(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_100183990(param_1,0);
  *puVar1 = &PTR_FUN_10147e088;
  FUN_100652cdc(puVar1 + 0x9a,"arrow_down");
  *(uint *)(param_1 + 0x374) = *(uint *)(param_1 + 0x374) & 0xfffffffb;
  *(uint *)(param_1 + 0x464) = *(uint *)(param_1 + 0x464) & 0xfffffffb;
  FUN_1001b495c(0,param_1);
  FUN_1001b4964(param_1,1);
  return param_1;
}




void thunk_FUN_10027c440(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_MSG",0);
  uVar3 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_CONFIRM",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar1,uVar2,uVar3,uVar4,param_1,thunk_FUN_10027d778,FUN_10027c4d8);
  return;
}




void thunk_FUN_10027c4dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_INPUT_CAPTION",0);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_INPUT_MESSAGE",0);
  FUN_1001e7ca4(param_1 + 0x124f0,uVar1,uVar2,&DAT_101d91650,0,0,0,0,param_1,thunk_FUN_10027ca60,
                FUN_10027c588,param_1 + 0x12550);
  return;
}




void thunk_FUN_10027c59c(long *param_1)

{
  ulong uVar1;
  
  if ((DAT_101854aec < *(float *)((long)param_1 + 0x38e4)) &&
     (uVar1 = FUN_100530da0(param_1 + 0x714), (uVar1 & 1) == 0)) {
    FUN_1001117cc(0);
                    /* WARNING: Could not recover jumptable at 0x00010027c5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c0))(param_1);
    return;
  }
  return;
}




void FUN_100277548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10027d5a8(param_1,param_2,param_5);
  return;
}




void thunk_FUN_10027c674(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [8];
  void *pvStack_130;
  void *pvStack_128;
  void *pvStack_120;
  undefined7 uStack_118;
  char cStack_111;
  char cStack_101;
  undefined4 uStack_100;
  undefined8 uStack_fc;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [40];
  long lStack_c0;
  undefined8 uStack_a0;
  void *pvStack_98;
  void *pvStack_90;
  char cStack_79;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_54;
  
  if (*(long *)(param_1 + 0x11ff0) != 0) {
    if (*(char *)(param_1 + 0x1258f) < '\0') {
      if (*(long *)(param_1 + 0x12580) == 0) {
        return;
      }
    }
    else if (*(char *)(param_1 + 0x1258f) == '\0') {
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x11ff0) + 0x3dac) == '\0') {
      FUN_100111890(param_1 + 0x12578);
    }
    else {
      FUN_1001118a0();
    }
    FUN_1001b4c70(param_1 + 0x9c78);
    thunk_FUN_1001cd434(&ppuStack_f0);
    uStack_60 = 0x3f733333;
    lStack_c0 = param_1 + 0x9c78;
    iVar1 = FUN_100126c88();
    uStack_5c = 0x44160000;
    if (iVar1 == 0) {
      uStack_5c = 0x43e10000;
    }
    uStack_54 = 0x40000000;
    uVar2 = FUN_1004e0150("MENU_FRIENDS_FAVORITE_TOOLTIP_TITLE",0);
    thunk_FUN_1004e439c(&pvStack_128,uVar2);
    FUN_10003330c(&uStack_118,&DAT_101d91198);
    uStack_100 = 0;
    uStack_fc = 0x41a00000;
    FUN_10003c048(auStack_e8,&pvStack_128);
    if (cStack_101 < '\0') {
      operator_delete((void *)CONCAT17(cStack_111,uStack_118));
    }
    if (pvStack_120 != (void *)0x0) {
      operator_delete__(pvStack_120);
    }
    uVar2 = FUN_1004e0150("MENU_FRIENDS_FAVORITE_TOOLTIP_TEXT",0);
    thunk_FUN_1004e439c(auStack_138,uVar2);
    thunk_FUN_1004e439c(&pvStack_128,auStack_138);
    FUN_10003330c(&uStack_118,&DAT_101d91198);
    uStack_100 = 1;
    uStack_fc = 0x41a00000;
    FUN_10003c048(auStack_e8,&pvStack_128);
    if (cStack_101 < '\0') {
      operator_delete((void *)CONCAT17(cStack_111,uStack_118));
    }
    if (pvStack_120 != (void *)0x0) {
      operator_delete__(pvStack_120);
    }
    FUN_10001549c(&pvStack_128,"starFriendInfo");
    FUN_1001cefb8(param_1 + 0x122a0,&pvStack_128,&ppuStack_f0);
    if (cStack_111 < '\0') {
      operator_delete(pvStack_128);
    }
    if (pvStack_130 != (void *)0x0) {
      operator_delete__(pvStack_130);
    }
    ppuStack_f0 = &PTR_FUN_1014666e0;
    if (cStack_79 < '\0') {
      operator_delete(pvStack_90);
    }
    if (pvStack_98 != (void *)0x0) {
      operator_delete__(pvStack_98);
      uStack_a0 = 0;
      pvStack_98 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_e8,1);
  }
  return;
}




void thunk_FUN_10027c8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  undefined1 auStack_40 [8];
  void *pvStack_38;
  undefined1 auStack_30 [8];
  void *pvStack_28;
  
  lVar3 = *(long *)(param_1 + 0x11ff0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x3d68) != 3) {
      FUN_10027ca60(param_1,param_2,lVar3 + 0x3cd0);
      return;
    }
    std::string::operator=((string *)(param_1 + 0x12560),(string *)(param_1 + 0x12578));
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_TITLE",0);
    thunk_FUN_1004e439c(auStack_30,uVar1);
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_DESCRIPTION",0);
    thunk_FUN_1004e439c(auStack_40,uVar1);
    FUN_1004e3120(auStack_50,"[PLAYER_NAME]");
    uVar1 = FUN_100655b6c(*(long *)(param_1 + 0x11ff0) + 0x330);
    FUN_1004e3bc4(auStack_40,0,auStack_50,uVar1);
    if (pvStack_48 != (void *)0x0) {
      operator_delete__(pvStack_48);
    }
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_CONFIRM",0);
    uVar2 = FUN_1004e0150("MENU_FRIENDS_DELETE_CANCEL",0);
    FUN_1001e31c8(auStack_30,auStack_40,uVar1,uVar2,&DAT_101d91650,param_1,FUN_10027ca14,0,0);
    if (pvStack_38 != (void *)0x0) {
      operator_delete__(pvStack_38);
    }
    if (pvStack_28 != (void *)0x0) {
      operator_delete__(pvStack_28);
    }
  }
  return;
}




void thunk_FUN_10027cbb0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *pvStack_168;
  void *pvStack_160;
  void *pvStack_158;
  undefined7 uStack_150;
  char cStack_149;
  char cStack_139;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined **ppuStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 uStack_d8;
  void *pvStack_d0;
  void *pvStack_c8;
  char cStack_b1;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d18);
  bVar9 = *(byte *)(lVar15 + 0x3d2f);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b0) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d20);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d20);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027cd7c;
      }
      else {
        if (sVar3 == 0) {
LAB_10027cd7c:
          thunk_FUN_1001cd434(&ppuStack_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&pvStack_160,uVar11);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 0;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&pvStack_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&pvStack_160,uVar11);
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          thunk_FUN_1004e439c(&pvStack_160,auStack_170);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 1;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          pcStack_108 = thunk_FUN_10027cfb0;
          lStack_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&uStack_d8,uVar11);
          lStack_f8 = param_1 + 0xa858;
          uStack_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          uStack_94 = 0x44160000;
          if (iVar10 == 0) {
            uStack_94 = 0x43e10000;
          }
          FUN_10001549c(&pvStack_160,"guildInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&pvStack_160,&ppuStack_128);
          if (cStack_149 < '\0') {
            operator_delete(pvStack_160);
          }
          if (pvStack_168 != (void *)0x0) {
            operator_delete__(pvStack_168);
          }
          ppuStack_128 = &PTR_FUN_1014666e0;
          if (cStack_b1 < '\0') {
            operator_delete(pvStack_c8);
          }
          if (pvStack_d0 != (void *)0x0) {
            operator_delete__(pvStack_d0);
            uStack_d8 = 0;
            pvStack_d0 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_120,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d19);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027cd7c;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d19);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001634c4(uVar11,*plVar1 + 0x3d18,1);
  FUN_10021a8ec(*plVar1 + 0x3d18,0);
  return;
}




void thunk_FUN_10027d0ac(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *pvStack_168;
  void *pvStack_160;
  void *pvStack_158;
  undefined7 uStack_150;
  char cStack_149;
  char cStack_139;
  undefined4 uStack_138;
  undefined8 uStack_134;
  undefined **ppuStack_128;
  undefined1 auStack_120 [16];
  long lStack_110;
  code *pcStack_108;
  long lStack_f8;
  undefined8 uStack_d8;
  void *pvStack_d0;
  void *pvStack_c8;
  char cStack_b1;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d50);
  bVar9 = *(byte *)(lVar15 + 0x3d67);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b1) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027d278;
      }
      else {
        if (sVar3 == 0) {
LAB_10027d278:
          thunk_FUN_1001cd434(&ppuStack_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&pvStack_160,uVar11);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 0;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&pvStack_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&pvStack_160,uVar11);
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          thunk_FUN_1004e439c(&pvStack_160,auStack_170);
          FUN_10003330c(&uStack_150,&DAT_101d91198);
          uStack_138 = 1;
          uStack_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&pvStack_160);
          if (cStack_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,uStack_150));
          }
          if (pvStack_158 != (void *)0x0) {
            operator_delete__(pvStack_158);
          }
          pcStack_108 = thunk_FUN_10027d4ac;
          lStack_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&uStack_d8,uVar11);
          lStack_f8 = param_1 + 0xae48;
          uStack_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          uStack_94 = 0x44160000;
          if (iVar10 == 0) {
            uStack_94 = 0x43e10000;
          }
          FUN_10001549c(&pvStack_160,"userTeamInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&pvStack_160,&ppuStack_128);
          if (cStack_149 < '\0') {
            operator_delete(pvStack_160);
          }
          if (pvStack_168 != (void *)0x0) {
            operator_delete__(pvStack_168);
          }
          ppuStack_128 = &PTR_FUN_1014666e0;
          if (cStack_b1 < '\0') {
            operator_delete(pvStack_c8);
          }
          if (pvStack_d0 != (void *)0x0) {
            operator_delete__(pvStack_d0);
            uStack_d8 = 0;
            pvStack_d0 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_120,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d51);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027d278;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d51);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001635bc(uVar11,*plVar1 + 0x3d50,1);
  uVar11 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  FUN_100644aec(&ppuStack_128,uVar11,0);
  FUN_100644c34(param_1,&ppuStack_128,1);
  return;
}




void thunk_FUN_10027d744(long param_1)

{
  string *psVar1;
  string *this;
  
  psVar1 = (string *)FUN_10018e8a8(param_1 + 0xb568);
  this = (string *)FUN_10032ae04();
  std::string::operator=(this,psVar1);
  FUN_10032b458();
  return;
}




void FUN_100277564(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10027c5fc(param_1,param_4);
  return;
}




void FUN_10027756c(undefined1 param_1 [16],undefined8 param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  size_t sVar5;
  undefined8 *puVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined **ppuVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  code *pcVar16;
  byte *pbVar17;
  ulong uVar18;
  uint uVar19;
  byte *****pppppbVar20;
  void *pvVar21;
  float fVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  undefined8 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  void *local_d0 [2];
  char local_b9;
  byte ****local_b8;
  size_t local_b0;
  byte local_a1;
  
  FUN_10026d404();
  uVar23 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  iVar12 = FUN_100126c88();
  DAT_101854ae8 = DAT_101854a80;
  *(undefined4 *)(param_3 + 0x24b2) = 0x447a0000;
  DAT_101d237d0 = 0x433c0000;
  FUN_10064e47c(uVar23,param_2,param_3 + 0x79);
  uVar26 = param_2;
  FUN_10064e47c(uVar23,param_2,param_3 + 0x90);
  fVar25 = (float)uVar26;
  plVar1 = param_3 + 0xf2;
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar12 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  }
  plVar13 = param_3 + 0xcc;
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  if (iVar12 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
  }
  FUN_100651594(plVar1,*ppuVar3,&DAT_10115a168);
  FUN_100651594(plVar13,*ppuVar4,&DAT_10115a164);
  FUN_100651708(0x44750000,plVar13,1);
  FUN_100651184(plVar13);
  plVar2 = param_3 + 0xae;
  FUN_10064e47c(0x447a0000,fVar25 + 10.0,plVar2);
  fVar25 = (float)param_2;
  if ((*(float *)(param_3 + 0xb6) != 0.0) || (*(float *)((long)param_3 + 0x5b4) != fVar25)) {
    *(undefined4 *)(param_3 + 0xb6) = 0;
    *(float *)((long)param_3 + 0x5b4) = fVar25;
    FUN_1000200a0(plVar2);
  }
  local_b8 = (byte ****)0x0;
  (**(code **)(param_3[0xae] + 0x28))(plVar2,&local_b8);
  if ((*(float *)(param_3 + 0xd4) != 500.0) || (*(float *)((long)param_3 + 0x6a4) != 5.0)) {
    param_3[0xd4] = 0x40a0000043fa0000;
    FUN_1000200a0(plVar13);
  }
  local_b8 = (byte ****)0x3f000000;
  (**(code **)(param_3[0xcc] + 0x28))(plVar13,&local_b8);
  fVar24 = DAT_101854a7c;
  if ((*(float *)(param_3 + 0xfa) != DAT_101854ae4) ||
     (*(float *)((long)param_3 + 0x7d4) != DAT_101854a7c)) {
    *(float *)(param_3 + 0xfa) = DAT_101854ae4;
    *(float *)((long)param_3 + 0x7d4) = fVar24;
    FUN_1000200a0(plVar1);
  }
  local_b8 = (byte ****)0x3f00000000000000;
  (**(code **)(param_3[0xf2] + 0x28))(plVar1,&local_b8);
  fVar24 = 1.25;
  if (iVar12 == 0) {
    fVar24 = 1.0;
  }
  if ((*(float *)(param_3 + 0x3d8) != fVar24) || (*(float *)((long)param_3 + 0x1ec4) != fVar24)) {
    *(float *)(param_3 + 0x3d8) = fVar24;
    *(float *)((long)param_3 + 0x1ec4) = fVar24;
    FUN_1000200a0(param_3 + 0x3cf);
  }
  if ((*(float *)(param_3 + 0x121) != fVar24) || (*(float *)((long)param_3 + 0x90c) != fVar24)) {
    *(float *)(param_3 + 0x121) = fVar24;
    *(float *)((long)param_3 + 0x90c) = fVar24;
    FUN_1000200a0(param_3 + 0x118);
  }
  FUN_100270b60(param_3);
  fVar24 = fVar25 - (*(float *)((long)param_3 + 0x12594) + DAT_101854ae8);
  FUN_10064e47c(uVar23,param_3 + 0x6e0);
  plVar1 = param_3 + 0x7bb;
  lVar14 = param_3[0x24b2];
  FUN_10064e3cc(param_3 + 0x6e0);
  fVar24 = fVar25 - (*(float *)((long)param_3 + 0x3474) + fVar24);
  FUN_10064e47c((int)lVar14,plVar1);
  FUN_10064e3cc(plVar1);
  if ((*(float *)(param_3 + 0x7c3) != 0.0) ||
     (*(float *)((long)param_3 + 0x3e1c) != fVar25 - fVar24)) {
    *(undefined4 *)(param_3 + 0x7c3) = 0;
    *(float *)((long)param_3 + 0x3e1c) = fVar25 - fVar24;
    FUN_1000200a0(plVar1);
  }
  plVar1 = param_3 + 0x7f0;
  fVar24 = fVar25 - *(float *)((long)param_3 + 0x12594);
  if ((*(float *)(param_3 + 0x7f8) != 0.0) || (*(float *)((long)param_3 + 0x3fc4) != fVar24)) {
    *(undefined4 *)(param_3 + 0x7f8) = 0;
    *(float *)((long)param_3 + 0x3fc4) = fVar24;
    FUN_1000200a0(plVar1);
  }
  local_b8 = (byte ****)0x3f80000000000000;
  (**(code **)(param_3[0x7f0] + 0x28))(plVar1,&local_b8);
  FUN_10064e47c(0x447a0000,0x42a00000,plVar1);
  uVar15 = *(uint *)((long)param_3 + 0x4004);
  if ((uVar15 & 0x7f80) != 0x3900) {
    *(uint *)((long)param_3 + 0x4004) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x3900;
    FUN_1000200a0(plVar1);
  }
  plVar1 = param_3 + 0x80e;
  fVar24 = fVar25 - *(float *)((long)param_3 + 0x12594);
  if ((*(float *)(param_3 + 0x816) != 0.0) || (*(float *)((long)param_3 + 0x40b4) != fVar24)) {
    *(undefined4 *)(param_3 + 0x816) = 0;
    *(float *)((long)param_3 + 0x40b4) = fVar24;
    FUN_1000200a0(plVar1);
  }
  FUN_10064e47c(0x447a0000,0x40800000,plVar1);
  uVar15 = *(uint *)((long)param_3 + 0x40f4);
  if ((uVar15 & 0x7f80) != 0x1300) {
    *(uint *)((long)param_3 + 0x40f4) = uVar15 & 0xffff8000 | uVar15 & 0x7f | 0x1300;
    FUN_1000200a0(plVar1);
  }
  fVar24 = DAT_101854ae8;
  if ((*(float *)(param_3 + 0x68e) != 0.0) || (*(float *)((long)param_3 + 0x3474) != DAT_101854ae8))
  {
    *(undefined4 *)(param_3 + 0x68e) = 0;
    *(float *)((long)param_3 + 0x3474) = fVar24;
    FUN_1000200a0(param_3 + 0x686);
  }
  FUN_10064e47c(0x447a0000,fVar25 - DAT_101854ae8,param_3 + 0x686);
  ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  if (iVar12 == 0) {
    ppuVar3 = &PTR_s_build___Fonts_Brandon_Bold_30_fo_10184e220;
  }
  ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  ppuVar10 = &PTR_s_build___Fonts_Brandon_Light_80_f_10184e1d0;
  if (iVar12 == 0) {
    ppuVar4 = &PTR_s_build___Fonts_Brandon_Regular_30_10184e1e8;
    ppuVar10 = &PTR_s_build___Fonts_Brandon_Regular_48_10184e200;
  }
  FUN_100651038(param_3 + 0x6ba,*ppuVar3);
  FUN_100651038(param_3 + 0x82c,*ppuVar10);
  FUN_100651038(param_3 + 0x852,*ppuVar4);
  fVar24 = DAT_101854a78;
  if (iVar12 == 0) {
    fVar24 = 1.0;
  }
  if ((*(float *)(param_3 + 0x923) != fVar24) || (*(float *)((long)param_3 + 0x491c) != fVar24)) {
    *(float *)(param_3 + 0x923) = fVar24;
    *(float *)((long)param_3 + 0x491c) = fVar24;
    FUN_1000200a0(param_3 + 0x91a);
    fVar24 = DAT_101854a78;
    if (iVar12 == 0) {
      fVar24 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0xa83) != fVar24) || (*(float *)((long)param_3 + 0x541c) != fVar24)) {
    *(float *)(param_3 + 0xa83) = fVar24;
    *(float *)((long)param_3 + 0x541c) = fVar24;
    FUN_1000200a0(param_3 + 0xa7a);
    fVar24 = DAT_101854a78;
    if (iVar12 == 0) {
      fVar24 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0xbe3) != fVar24) || (*(float *)((long)param_3 + 0x5f1c) != fVar24)) {
    *(float *)(param_3 + 0xbe3) = fVar24;
    *(float *)((long)param_3 + 0x5f1c) = fVar24;
    FUN_1000200a0(param_3 + 0xbda);
    fVar24 = DAT_101854a78;
    if (iVar12 == 0) {
      fVar24 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0xd43) != fVar24) || (*(float *)((long)param_3 + 0x6a1c) != fVar24)) {
    *(float *)(param_3 + 0xd43) = fVar24;
    *(float *)((long)param_3 + 0x6a1c) = fVar24;
    FUN_1000200a0(param_3 + 0xd3a);
    fVar24 = DAT_101854a78;
    if (iVar12 == 0) {
      fVar24 = 1.0;
    }
  }
  if ((*(float *)(param_3 + 0x1163) != fVar24) || (*(float *)((long)param_3 + 0x8b1c) != fVar24)) {
    *(float *)(param_3 + 0x1163) = fVar24;
    *(float *)((long)param_3 + 0x8b1c) = fVar24;
    FUN_1000200a0(param_3 + 0x115a);
    fVar24 = DAT_101854a78;
    if (iVar12 == 0) {
      fVar24 = 1.0;
    }
  }
  plVar1 = param_3 + 0x130b;
  if ((*(float *)(param_3 + 0xea3) != fVar24) || (*(float *)((long)param_3 + 0x751c) != fVar24)) {
    *(float *)(param_3 + 0xea3) = fVar24;
    *(float *)((long)param_3 + 0x751c) = fVar24;
    FUN_1000200a0(param_3 + 0xe9a);
    fVar24 = DAT_101854a78;
    if (iVar12 == 0) {
      fVar24 = 1.0;
    }
  }
  plVar13 = param_3 + 0x1369;
  if ((*(float *)(param_3 + 0x1003) != fVar24) || (*(float *)((long)param_3 + 0x801c) != fVar24)) {
    *(float *)(param_3 + 0x1003) = fVar24;
    *(float *)((long)param_3 + 0x801c) = fVar24;
    FUN_1000200a0(param_3 + 0xffa);
  }
  plVar2 = param_3 + 0x138f;
  fVar24 = *(float *)(param_3 + 0x24b2);
  fVar27 = (float)uVar23 - fVar24;
  if ((*(float *)(param_3 + 0x1313) != fVar24) || (*(float *)((long)param_3 + 0x989c) != 0.0)) {
    *(float *)(param_3 + 0x1313) = fVar24;
    *(undefined4 *)((long)param_3 + 0x989c) = 0;
    FUN_1000200a0(plVar1);
  }
  local_b8 = (byte ****)0x0;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_b8);
  FUN_10064e47c(fVar27,param_2,param_3 + 0x131c);
  fVar24 = DAT_101854ae8;
  fVar22 = 1.5;
  if (iVar12 == 0) {
    fVar22 = 1.15;
  }
  fVar29 = DAT_101854ae8 + 88.0;
  uVar9 = 0x43898000;
  if (iVar12 == 0) {
    uVar9 = 0x43d48000;
  }
  FUN_10065179c(uVar9,0,0x3f800000,plVar13);
  if ((*(float *)(param_3 + 0x1371) != 36.0) || (*(float *)((long)param_3 + 0x9b8c) != fVar29)) {
    *(undefined4 *)(param_3 + 0x1371) = 0x42100000;
    *(float *)((long)param_3 + 0x9b8c) = fVar29;
    FUN_1000200a0(plVar13);
  }
  plVar1 = param_3 + 0x144d;
  local_b8 = (byte ****)0x3f00000000000000;
  (**(code **)(*plVar13 + 0x28))(plVar13,&local_b8);
  fVar28 = fVar27 + -36.0;
  fVar30 = fVar28 + fVar22 * -24.0;
  if ((*(float *)(param_3 + 0x1398) != fVar22) || (*(float *)((long)param_3 + 0x9cc4) != fVar22)) {
    *(float *)(param_3 + 0x1398) = fVar22;
    *(float *)((long)param_3 + 0x9cc4) = fVar22;
    FUN_1000200a0(plVar2);
  }
  if ((*(float *)(param_3 + 0x1397) != fVar30) || (*(float *)((long)param_3 + 0x9cbc) != fVar29)) {
    *(float *)(param_3 + 0x1397) = fVar30;
    *(float *)((long)param_3 + 0x9cbc) = fVar29;
    FUN_1000200a0(plVar2);
  }
  plVar13 = param_3 + 0x15c9;
  local_b8 = (byte ****)&DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
  fVar30 = fVar30 - fVar22 * 96.0;
  if ((*(float *)(param_3 + 0x1456) != fVar22) || (*(float *)((long)param_3 + 0xa2b4) != fVar22)) {
    *(float *)(param_3 + 0x1456) = fVar22;
    *(float *)((long)param_3 + 0xa2b4) = fVar22;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_3 + 0x1455) != fVar30) || (*(float *)((long)param_3 + 0xa2ac) != fVar29)) {
    *(float *)(param_3 + 0x1455) = fVar30;
    *(float *)((long)param_3 + 0xa2ac) = fVar29;
    FUN_1000200a0(plVar1);
  }
  local_b8 = (byte ****)&DAT_3f0000003f000000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_b8);
  fVar30 = fVar30 - fVar22 * 96.0;
  if ((*(float *)(param_3 + 0x15d2) != fVar22) || (*(float *)((long)param_3 + 0xae94) != fVar22)) {
    *(float *)(param_3 + 0x15d2) = fVar22;
    *(float *)((long)param_3 + 0xae94) = fVar22;
    FUN_1000200a0(plVar13);
  }
  plVar1 = param_3 + 0x150b;
  if ((*(float *)(param_3 + 0x15d1) != fVar30) || (*(float *)((long)param_3 + 0xae8c) != fVar29)) {
    *(float *)(param_3 + 0x15d1) = fVar30;
    *(float *)((long)param_3 + 0xae8c) = fVar29;
    FUN_1000200a0(plVar13);
  }
  plVar2 = param_3 + 0x16ad;
  local_b8 = (byte ****)&DAT_3f0000003f000000;
  (**(code **)(*plVar13 + 0x28))(plVar13,&local_b8);
  if ((*(byte *)((long)param_3 + 0xaecc) >> 2 & 1) == 0) {
    if ((*(float *)(param_3 + 0x1513) != fVar30) || (*(float *)((long)param_3 + 0xa89c) != fVar29))
    {
      *(float *)(param_3 + 0x1513) = fVar30;
      *(float *)((long)param_3 + 0xa89c) = fVar29;
      FUN_1000200a0(plVar1);
    }
    pcVar16 = *(code **)(*plVar1 + 0x28);
    plVar13 = plVar1;
  }
  else {
    if ((*(float *)(param_3 + 0x15d1) != fVar30) || (*(float *)((long)param_3 + 0xae8c) != fVar29))
    {
      *(float *)(param_3 + 0x15d1) = fVar30;
      *(float *)((long)param_3 + 0xae8c) = fVar29;
      FUN_1000200a0(plVar13);
    }
    pcVar16 = *(code **)(*plVar13 + 0x28);
  }
  local_b8 = (byte ****)&DAT_3f0000003f000000;
  (*pcVar16)(plVar13,&local_b8);
  if ((*(float *)(param_3 + 0x1514) != fVar22) || (*(float *)((long)param_3 + 0xa8a4) != fVar22)) {
    *(float *)(param_3 + 0x1514) = fVar22;
    *(float *)((long)param_3 + 0xa8a4) = fVar22;
    FUN_1000200a0(param_3 + 0x150b);
  }
  plVar1 = param_3 + 0x1687;
  fVar22 = (float)FUN_10018ee40(plVar2);
  fVar22 = fVar28 + fVar22 * -0.5;
  if ((*(float *)(param_3 + 0x16b5) != fVar22) || (*(float *)((long)param_3 + 0xb5ac) != fVar29)) {
    *(float *)(param_3 + 0x16b5) = fVar22;
    *(float *)((long)param_3 + 0xb5ac) = fVar29;
    FUN_1000200a0(plVar2);
  }
  local_b8 = (byte ****)&DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_b8);
  if (param_3[0x23fe] == 0) {
    *(uint *)((long)param_3 + 0x9cfc) = *(uint *)((long)param_3 + 0x9cfc) & 0xfffffffb;
    *(uint *)((long)param_3 + 0xa2ec) = *(uint *)((long)param_3 + 0xa2ec) & 0xfffffffb;
    *(uint *)((long)param_3 + 0xb4bc) = *(uint *)((long)param_3 + 0xb4bc) & 0xfffffffb;
    *(uint *)((long)param_3 + 0xb5ec) = *(uint *)((long)param_3 + 0xb5ec) & 0xfffffffb;
    goto LAB_10027812c;
  }
  cVar7 = *(char *)(param_3[0x23fe] + 0x3db2);
  uVar15 = (uint)(cVar7 == '\0');
  *(uint *)((long)param_3 + 0x9cfc) =
       *(uint *)((long)param_3 + 0x9cfc) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0x9cfc) & 3 | uVar15 << 2;
  *(uint *)((long)param_3 + 0xa2ec) =
       *(uint *)((long)param_3 + 0xa2ec) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0xa2ec) & 3 | uVar15 << 2;
  *(uint *)((long)param_3 + 0xb4bc) =
       *(uint *)((long)param_3 + 0xb4bc) & 0xfffffff8 |
       *(uint *)((long)param_3 + 0xb4bc) & 3 | (uint)(cVar7 == '\0') << 2;
  lVar14 = FUN_10015d3ec();
  std::operator+("#",(string *)(lVar14 + 0x5478));
  std::string::string((string *)&local_b8,(string *)local_d0);
  if (local_b9 < '\0') {
    operator_delete(local_d0[0]);
    if (cVar7 != '\0') goto LAB_10027804c;
LAB_100278104:
    uVar19 = 0;
    uVar15 = *(uint *)((long)param_3 + 0xb5ec);
  }
  else {
    if (cVar7 == '\0') goto LAB_100278104;
LAB_10027804c:
    lVar14 = param_3[0x23fe];
    bVar8 = *(byte *)(lVar14 + 0x3d87);
    uVar18 = (ulong)bVar8;
    if ((char)bVar8 < '\0') {
      if (*(long *)(lVar14 + 0x3d78) != 0) goto LAB_100278074;
      goto LAB_100278104;
    }
    if (uVar18 == 0) goto LAB_100278104;
LAB_100278074:
    sVar5 = *(size_t *)(lVar14 + 0x3d78);
    if (-1 < (char)bVar8) {
      sVar5 = uVar18;
    }
    if (-1 < (char)local_a1) {
      local_b0 = (ulong)local_a1;
    }
    if (sVar5 != local_b0) goto LAB_100278104;
    pvVar21 = *(void **)(lVar14 + 0x3d70);
    puVar6 = pvVar21;
    if (-1 < (char)bVar8) {
      puVar6 = (undefined8 *)(lVar14 + 0x3d70);
    }
    pppppbVar20 = (byte *****)local_b8;
    if (-1 < (char)local_a1) {
      pppppbVar20 = &local_b8;
    }
    if ((char)bVar8 < '\0') {
      if (sVar5 == 0) goto LAB_100278368;
      iVar12 = _memcmp(puVar6,pppppbVar20,sVar5);
      uVar15 = *(uint *)((long)param_3 + 0xb5ec);
      if (iVar12 == 0) goto LAB_100278370;
      uVar19 = 0;
    }
    else {
      if (sVar5 != 0) {
        if ((uint)*(byte *)pppppbVar20 == ((uint)pvVar21 & 0xff)) {
          pbVar17 = (byte *)(lVar14 + 0x3d71);
          do {
            uVar18 = uVar18 - 1;
            pppppbVar20 = (byte *****)((long)pppppbVar20 + 1);
            if (uVar18 == 0) goto LAB_100278368;
            bVar8 = *pbVar17;
            pbVar17 = pbVar17 + 1;
          } while (bVar8 == *(byte *)pppppbVar20);
        }
        goto LAB_100278104;
      }
LAB_100278368:
      uVar15 = *(uint *)((long)param_3 + 0xb5ec);
LAB_100278370:
      uVar19 = 4;
    }
  }
  *(uint *)((long)param_3 + 0xb5ec) = uVar19 | uVar15 & 0xfffffffb;
  if ((char)local_a1 < '\0') {
    operator_delete(local_b8);
  }
LAB_10027812c:
  fVar24 = fVar24 + 156.0;
  fVar22 = *(float *)(param_3 + 0x168f);
  bVar11 = false;
  if ((fVar22 == fVar28) &&
     (bVar11 = false, !NAN(*(float *)((long)param_3 + 0xb47c)) && !NAN(fVar24))) {
    bVar11 = *(float *)((long)param_3 + 0xb47c) == fVar24;
  }
  if (!bVar11) {
    *(float *)(param_3 + 0x168f) = fVar28;
    *(float *)((long)param_3 + 0xb47c) = fVar24;
    FUN_1000200a0(plVar1);
  }
  local_b8 = (byte ****)0x3f0000003f800000;
  (**(code **)(*plVar1 + 0x28))(plVar1,&local_b8);
  fVar29 = *(float *)((long)param_3 + 0xb47c);
  FUN_10064259c(plVar1);
  fVar29 = fVar29 + fVar22 * 0.5;
  fVar22 = fVar29 + 6.0;
  FUN_10064e47c(fVar27,0x40000000,param_3 + 0x134b);
  fVar24 = *(float *)((long)param_3 + 0x9a9c);
  bVar11 = false;
  if ((*(float *)(param_3 + 0x1353) == 0.0) && (bVar11 = false, !NAN(fVar24) && !NAN(fVar22))) {
    bVar11 = fVar24 == fVar22;
  }
  if (!bVar11) {
    *(undefined4 *)(param_3 + 0x1353) = 0;
    *(float *)((long)param_3 + 0x9a9c) = fVar22;
    FUN_1000200a0(param_3 + 0x134b);
    fVar24 = *(float *)((long)param_3 + 0x9a9c);
  }
  if ((*(float *)(param_3 + 0x1bdb) != 36.0) ||
     (*(float *)((long)param_3 + 0xdedc) != fVar24 + 32.0)) {
    *(undefined4 *)(param_3 + 0x1bdb) = 0x42100000;
    *(float *)((long)param_3 + 0xdedc) = fVar24 + 32.0;
    FUN_1000200a0(param_3 + 0x1bd3);
  }
  FUN_100187094(fVar27 + -72.0,(fVar25 + -48.0) - fVar22,param_3 + 0x1bd3);
  plVar1 = param_3 + 0x242e;
  FUN_100651708(0x441b0000,plVar1,1);
  fVar25 = *(float *)(param_3 + 0x2436);
  if ((fVar25 != 30.0) || (fVar25 = *(float *)((long)param_3 + 0x121b4), fVar25 != 30.0)) {
    lVar14 = NEON_fmov(0x41f00000,4);
    param_3[0x2436] = lVar14;
    FUN_1000200a0(plVar1);
  }
  fVar24 = (float)FUN_100651184(plVar1);
  FUN_100651184(plVar1);
  FUN_10064e47c(fVar24 + 60.0,fVar25 + 60.0,param_3 + 0x2410);
  fVar25 = (float)FUN_1006425d0(param_3 + 0x23ff,0,0,1,1);
  fVar25 = (fVar27 + -12.0) - fVar25;
  fVar29 = fVar29 + 18.0;
  if ((*(float *)(param_3 + 0x2407) != fVar25) || (*(float *)((long)param_3 + 0x1203c) != fVar29)) {
    *(float *)(param_3 + 0x2407) = fVar25;
    *(float *)((long)param_3 + 0x1203c) = fVar29;
    FUN_1000200a0(param_3 + 0x23ff);
  }
  return;
}




void FUN_100278378(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_1d8 [4];
  float local_1d4;
  undefined1 auStack_1d0 [8];
  void *local_1c8;
  undefined4 local_1c0;
  float local_1bc;
  void *local_1b8;
  undefined1 auStack_1b0 [8];
  void *local_1a8;
  void *local_1a0;
  void *local_198;
  undefined7 local_190;
  char cStack_189;
  char local_179;
  undefined4 local_178;
  undefined8 local_174;
  undefined1 auStack_168 [8];
  void *local_160;
  undefined1 auStack_158 [8];
  void *local_150;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined **local_138;
  undefined1 auStack_130 [16];
  long local_120;
  code *pcStack_118;
  long local_108;
  undefined8 local_e8;
  void *local_e0;
  void *local_d8;
  char local_c1;
  undefined4 local_a8;
  undefined4 local_a4;
  float local_98;
  undefined4 local_94;
  undefined4 local_90;
  
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_2 + 0x3c98) == 0x41) {
    return;
  }
  thunk_FUN_1001cd434(&local_138);
  puVar6 = &DAT_101d91650;
  thunk_FUN_1004e439c(auStack_148,&DAT_101d91650);
  pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_GUILD";
  switch(*(undefined4 *)(param_2 + 0x3cb0)) {
  case 0:
    pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_SOLO";
    break;
  case 1:
    break;
  case 2:
    pcVar5 = "MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TYPE_TEAM";
    break;
  case 3:
    goto switchD_100278400_caseD_3;
  default:
    goto switchD_100278400_default;
  }
  puVar6 = (undefined8 *)FUN_1004e0150(pcVar5,0);
switchD_100278400_caseD_3:
  FUN_1000153b4(auStack_148,puVar6);
switchD_100278400_default:
  FUN_1004e313c(auStack_158);
  uVar1 = *(uint *)(param_2 + 0x3c98);
  if ((uVar1 < 0x34) && ((0xc6affd9ff9fffU >> ((ulong)uVar1 & 0x3f) & 1) != 0)) {
    uVar7 = FUN_1004e0150((&PTR_s_MENU_FRIENDS_IN_MATCH_DETAILS_GA_10147e258)[(int)uVar1],0);
    FUN_1000153b4(auStack_158,uVar7);
  }
  uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TYPE",0);
  thunk_FUN_1004e439c(auStack_168,uVar7);
  FUN_1004e3120(&local_1a0,"[PARTY_TYPE]");
  FUN_1004e3bc4(auStack_168,0,&local_1a0,auStack_148);
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  FUN_1004e3120(&local_1a0,"[GAME_QUEUE]");
  FUN_1004e3bc4(auStack_168,0,&local_1a0,auStack_158);
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  thunk_FUN_1004e439c(&local_1a0,auStack_168);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 0;
  local_174 = 0xc120000041000000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  uVar2 = *(undefined4 *)(param_2 + 0x3d9c);
  uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_MATCH_TIME",0);
  FUN_1000f1e20(auStack_1b0,uVar7,uVar2,0);
  thunk_FUN_1004e439c(&local_1a0,auStack_1b0);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 1;
  local_174 = 0x41f0000042200000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
    local_1a0 = (void *)0x0;
    local_198 = (void *)0x0;
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
  }
  thunk_FUN_1004e439c(&local_1a0,&DAT_101d91650);
  FUN_10003330c(&local_190,&DAT_101d91198);
  local_178 = 2;
  local_174 = 0x41f00000;
  FUN_10003c048(auStack_130,&local_1a0);
  if (local_179 < '\0') {
    operator_delete((void *)CONCAT17(cStack_189,local_190));
  }
  if (local_198 != (void *)0x0) {
    operator_delete__(local_198);
  }
  FUN_1004e313c(auStack_1b0);
  plVar8 = (long *)(param_2 + 0x3cb8);
  if (*(char *)(param_2 + 0x3ccf) < '\0') {
    if (*(int *)(param_2 + 0x3cc0) == 0) goto LAB_100278694;
    plVar8 = (long *)*plVar8;
  }
  else if (*(char *)(param_2 + 0x3ccf) == '\0') goto LAB_100278694;
  lVar10 = FUN_10034be08(plVar8);
  uVar7 = FUN_1004e0150(*(undefined8 *)(lVar10 + 0x18),0);
  FUN_1000153b4(auStack_1b0,uVar7);
LAB_100278694:
  iVar4 = FUN_1004e36c0(auStack_1b0,&DAT_101d91650);
  if (iVar4 == 0) {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_HERO_SELECT",0);
    thunk_FUN_1004e439c(&local_1c0,uVar7);
    thunk_FUN_1004e439c(&local_1a0,&local_1c0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000042200000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    pvVar3 = local_1b8;
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
      pvVar3 = local_1b8;
    }
  }
  else {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PLAYING_TITLE",0);
    thunk_FUN_1004e439c(&local_1a0,uVar7);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    thunk_FUN_1004e439c(&local_1a0,auStack_1b0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 1;
    local_174 = 0x41f0000042200000;
    FUN_10003c048(auStack_130,&local_1a0);
    pvVar3 = local_198;
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
      pvVar3 = local_198;
    }
  }
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  if (*(int *)(param_2 + 0x3ca0) != 0) {
    thunk_FUN_1004e439c(&local_1a0,&DAT_101d91650);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 2;
    local_174 = 0x41f00000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    uVar7 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
    thunk_FUN_1004e439c(&local_1c0,uVar7);
    thunk_FUN_1004e439c(&local_1a0,&local_1c0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 0;
    local_174 = 0xc120000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    uVar1 = *(uint *)(param_2 + 0x3ca0);
    if (uVar1 != 0) {
      lVar10 = 0;
      do {
        thunk_FUN_1004e439c(auStack_1d0,*(long *)(param_2 + 0x3ca8) + lVar10);
        uVar9 = FUN_1004e3654(auStack_1d0,param_2 + 0x3cd0);
        if ((uVar9 & 1) == 0) {
          thunk_FUN_1004e439c(&local_1a0,auStack_1d0);
          FUN_10003330c(&local_190,&DAT_101d91198);
          local_178 = 1;
          local_174 = 0x41f0000041000000;
          FUN_10003c048(auStack_130,&local_1a0);
          if (local_179 < '\0') {
            operator_delete((void *)CONCAT17(cStack_189,local_190));
          }
          if (local_198 != (void *)0x0) {
            operator_delete__(local_198);
          }
        }
        if (local_1c8 != (void *)0x0) {
          operator_delete__(local_1c8);
        }
        lVar10 = lVar10 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar10 != 0);
    }
    thunk_FUN_1004e439c(&local_1a0,param_2 + 0x3cd0);
    FUN_10003330c(&local_190,&DAT_101d91198);
    local_178 = 1;
    local_174 = 0x41f0000041000000;
    FUN_10003c048(auStack_130,&local_1a0);
    if (local_179 < '\0') {
      operator_delete((void *)CONCAT17(cStack_189,local_190));
    }
    if (local_198 != (void *)0x0) {
      operator_delete__(local_198);
    }
    if (local_1b8 != (void *)0x0) {
      operator_delete__(local_1b8);
    }
  }
  FUN_10001549c(&local_1a0,"friendInMatchInformation");
  std::string::append((char *)&local_1a0);
  local_108 = param_2 + 0xb8;
  local_90 = 3;
  iVar4 = FUN_100126c88();
  local_a4 = 0x44160000;
  if (iVar4 == 0) {
    local_a4 = 0x44100000;
  }
  iVar4 = FUN_1001311dc();
  if (iVar4 != 0) {
    uVar7 = FUN_1004e0150("MENU_FRIENDS_SPECTATE",0);
    FUN_1000153b4(&local_e8,uVar7);
    pcStack_118 = FUN_10027c43c;
    local_120 = param_1;
  }
  uVar7 = FUN_100126b4c();
  FUN_1001e35ec(param_1,uVar7,auStack_1d0,&local_1d4,auStack_1d8);
  lVar10 = FUN_10003d5bc(param_2);
  fVar12 = *(float *)(lVar10 + 0xc);
  lVar10 = FUN_10003d5bc(param_1);
  fVar11 = *(float *)(param_1 + 0x12594);
  fVar12 = fVar12 / *(float *)(lVar10 + 0x14) + DAT_101d237d0 * 0.5 + (fVar11 - local_1d4);
  if (0.0 < fVar12) {
    uVar7 = FUN_10001f0d8();
    FUN_10063f0e8(0x3dcccccd);
    local_1bc = -fVar12;
    local_1c0 = 0;
    FUN_10063f984(uVar7,&local_1c0);
    FUN_100642b14(param_1 + 0x38a0,uVar7);
    fVar11 = *(float *)(param_1 + 0x12594);
  }
  local_94 = 0;
  lVar10 = FUN_10003d5bc(param_1);
  local_98 = *(float *)(lVar10 + 0x14) * ((local_1d4 + -16.0) - fVar11);
  local_a8 = 0x3e051eb8;
  if (param_3 == 0) {
    FUN_1001cefb8(param_1 + 0x12388,&local_1a0,&local_138);
  }
  else {
    FUN_1001cf098();
  }
  if (cStack_189 < '\0') {
    operator_delete(local_1a0);
  }
  if (local_1a8 != (void *)0x0) {
    operator_delete__(local_1a8);
  }
  if (local_160 != (void *)0x0) {
    operator_delete__(local_160);
  }
  if (local_150 != (void *)0x0) {
    operator_delete__(local_150);
  }
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  local_138 = &PTR_FUN_1014666e0;
  if (local_c1 < '\0') {
    operator_delete(local_d8);
  }
  if (local_e0 != (void *)0x0) {
    operator_delete__(local_e0);
    local_e8 = 0;
    local_e0 = (void *)0x0;
  }
  FUN_10003c1ec(auStack_130,1);
  return;
}




void FUN_100278bfc(long param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_18c [4];
  float local_188;
  undefined1 auStack_184 [4];
  undefined4 local_180;
  float local_17c;
  void *local_178;
  void *local_170;
  void *local_168;
  undefined7 local_160;
  char cStack_159;
  char local_149;
  undefined4 local_148;
  undefined8 local_144;
  undefined1 auStack_138 [8];
  void *local_130;
  undefined **local_128;
  undefined1 auStack_120 [16];
  long local_110;
  code *local_108;
  long local_f8;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  char local_b1;
  undefined4 local_98;
  undefined4 local_94;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  
  if (param_2 != 0) {
    thunk_FUN_1001cd434(&local_128);
    uVar3 = FUN_1004e0150("MENU_FRIENDS_IN_MATCH_DETAILS_PARTY_TITLE",0);
    thunk_FUN_1004e439c(auStack_138,uVar3);
    thunk_FUN_1004e439c(&local_170,auStack_138);
    FUN_10003330c(&local_160,&DAT_101d91198);
    local_148 = 0;
    local_144 = 0xc120000041000000;
    FUN_10003c048(auStack_120,&local_170);
    if (local_149 < '\0') {
      operator_delete((void *)CONCAT17(cStack_159,local_160));
    }
    if (local_168 != (void *)0x0) {
      operator_delete__(local_168);
    }
    uVar1 = *(uint *)(param_2 + 0x3ca0);
    if (uVar1 != 0) {
      lVar5 = 0;
      do {
        thunk_FUN_1004e439c(&local_180,*(long *)(param_2 + 0x3ca8) + lVar5);
        uVar4 = FUN_1004e3654(&local_180,param_2 + 0x3cd0);
        if ((uVar4 & 1) == 0) {
          thunk_FUN_1004e439c(&local_170,&local_180);
          FUN_10003330c(&local_160,&DAT_101d91198);
          local_148 = 1;
          local_144 = 0x41f0000041000000;
          FUN_10003c048(auStack_120,&local_170);
          if (local_149 < '\0') {
            operator_delete((void *)CONCAT17(cStack_159,local_160));
          }
          if (local_168 != (void *)0x0) {
            operator_delete__(local_168);
          }
        }
        if (local_178 != (void *)0x0) {
          operator_delete__(local_178);
        }
        lVar5 = lVar5 + 0x10;
      } while ((ulong)uVar1 * 0x10 - lVar5 != 0);
      thunk_FUN_1004e439c(&local_170,param_2 + 0x3cd0);
      FUN_10003330c(&local_160,&DAT_101d91198);
      local_148 = 1;
      local_144 = 0x41f0000041000000;
      FUN_10003c048(auStack_120,&local_170);
      if (local_149 < '\0') {
        operator_delete((void *)CONCAT17(cStack_159,local_160));
      }
      if (local_168 != (void *)0x0) {
        operator_delete__(local_168);
      }
    }
    FUN_10001549c(&local_170,"friendInMatchInformation");
    std::string::append((char *)&local_170);
    local_f8 = param_2 + 0xb8;
    local_80 = 3;
    iVar2 = FUN_100126c88();
    local_94 = 0x44160000;
    if (iVar2 == 0) {
      local_94 = 0x44100000;
    }
    iVar2 = FUN_1001311dc();
    if (iVar2 != 0) {
      uVar3 = FUN_1004e0150("MENU_FRIENDS_SPECTATE",0);
      FUN_1000153b4(&local_d8,uVar3);
      local_108 = FUN_10027c43c;
      local_110 = param_1;
    }
    uVar3 = FUN_100126b4c();
    FUN_1001e35ec(param_1,uVar3,auStack_184,&local_188,auStack_18c);
    lVar5 = FUN_10003d5bc(param_2);
    fVar7 = *(float *)(lVar5 + 0xc);
    lVar5 = FUN_10003d5bc(param_1);
    fVar6 = *(float *)(param_1 + 0x12594);
    fVar7 = fVar7 / *(float *)(lVar5 + 0x14) + DAT_101d237d0 * 0.5 + (fVar6 - local_188);
    if (0.0 < fVar7) {
      uVar3 = FUN_10001f0d8();
      FUN_10063f0e8(0x3dcccccd);
      local_17c = -fVar7;
      local_180 = 0;
      FUN_10063f984(uVar3,&local_180);
      FUN_100642b14(param_1 + 0x38a0,uVar3);
      fVar6 = *(float *)(param_1 + 0x12594);
    }
    local_84 = 0;
    lVar5 = FUN_10003d5bc(param_1);
    local_88 = *(float *)(lVar5 + 0x14) * ((local_188 + -16.0) - fVar6);
    local_98 = 0x3e051eb8;
    if (param_3 == 0) {
      FUN_1001cefb8(param_1 + 0x12388,&local_170,&local_128);
    }
    else {
      FUN_1001cf098();
    }
    if (cStack_159 < '\0') {
      operator_delete(local_170);
    }
    if (local_130 != (void *)0x0) {
      operator_delete__(local_130);
    }
    local_128 = &PTR_FUN_1014666e0;
    if (local_b1 < '\0') {
      operator_delete(local_c8);
    }
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      local_d8 = 0;
      local_d0 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_120,1);
  }
  return;
}




long FUN_100278fd8(long *param_1,long *param_2)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  ulong uVar9;
  void *pvVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long local_70;
  void *local_68;
  
  local_70 = *param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    local_70 = (long)param_2;
  }
  pbVar8 = (byte *)FUN_100274c3c(param_1 + 0x2498,&local_70);
  if (pbVar8 == (byte *)0x0) {
    FUN_1004e313c(&local_70);
    (**(code **)(*param_1 + 0x1d8))(param_1,param_2,&local_70);
    if ((int)param_1[0x23f8] != 0) {
      uVar14 = 0;
      do {
        uVar9 = FUN_1004e3654(*(long *)(param_1[0x23f9] + uVar14 * 8) + 0x3cd0,&local_70);
        if ((uVar9 & 1) != 0) {
          lVar15 = *(long *)(param_1[0x23f9] + uVar14 * 8);
          *(undefined1 *)((long)param_1 + 0x125ab) = 1;
          if (lVar15 != 0) goto LAB_1002792c8;
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x23f8));
    }
    if ((int)param_1[0x23fc] != 0) {
      uVar14 = 0;
      do {
        uVar9 = FUN_1004e3654(*(long *)(param_1[0x23fd] + uVar14 * 8) + 0x3cd0,&local_70);
        if ((uVar9 & 1) != 0) {
          lVar15 = *(long *)(param_1[0x23fd] + uVar14 * 8);
          *(undefined1 *)((long)param_1 + 0x125ad) = 1;
          if (lVar15 != 0) goto LAB_1002792c8;
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x23fc));
    }
    if ((int)param_1[0x23fa] != 0) {
      uVar14 = 0;
      do {
        uVar9 = FUN_1004e3654(*(long *)(param_1[0x23fb] + uVar14 * 8) + 0x3cd0,&local_70);
        if ((uVar9 & 1) != 0) {
          lVar15 = *(long *)(param_1[0x23fb] + uVar14 * 8);
          *(undefined1 *)((long)param_1 + 0x125ac) = 1;
          if (lVar15 != 0) goto LAB_1002792c8;
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x23fa));
    }
    if (*(uint *)(param_1 + 0x23f2) != 0) {
      uVar14 = 0;
      do {
        uVar9 = FUN_1004e3654(*(long *)(param_1[0x23f3] + uVar14 * 8) + 0x3cd0,&local_70);
        if ((uVar9 & 1) != 0) {
          lVar15 = *(long *)(param_1[0x23f3] + uVar14 * 8);
          *(undefined1 *)((long)param_1 + 0x125ae) = 1;
          if (lVar15 != 0) goto LAB_1002792c8;
          break;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x23f2));
    }
    if ((*(char *)((long)param_1 + 0x125af) != '\0') && ((int)param_1[0x23f6] != 0)) {
      uVar14 = 0;
      do {
        iVar7 = FUN_1004e3654(*(long *)(param_1[0x23f7] + uVar14 * 8) + 0x3cd0,&local_70);
        if (iVar7 != 0) {
          lVar15 = *(long *)(param_1[0x23f7] + uVar14 * 8);
          goto LAB_1002792c8;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < *(uint *)(param_1 + 0x23f6));
    }
    lVar15 = 0;
LAB_1002792c8:
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x23f8);
    if (uVar4 != 0) {
      uVar14 = 0;
      lVar15 = param_1[0x23f9];
      bVar5 = pbVar8[0x17];
      sVar1 = *(size_t *)(pbVar8 + 8);
      if (-1 < (char)bVar5) {
        sVar1 = (ulong)bVar5;
      }
      do {
        lVar13 = *(long *)(lVar15 + uVar14 * 8);
        bVar6 = *(byte *)(lVar13 + 0x3d87);
        uVar9 = (ulong)bVar6;
        sVar2 = *(size_t *)(lVar13 + 0x3d78);
        if (-1 < (char)bVar6) {
          sVar2 = uVar9;
        }
        if (sVar2 == sVar1) {
          pvVar10 = *(void **)(lVar13 + 0x3d70);
          puVar3 = pvVar10;
          if (-1 < (char)bVar6) {
            puVar3 = (undefined8 *)(lVar13 + 0x3d70);
          }
          pbVar12 = *(byte **)pbVar8;
          if (-1 < (char)bVar5) {
            pbVar12 = pbVar8;
          }
          if ((char)bVar6 < '\0') {
            if ((sVar1 == 0) || (iVar7 = _memcmp(puVar3,pbVar12,sVar1), iVar7 == 0))
            goto LAB_100279168;
          }
          else {
            if (sVar1 == 0) {
LAB_100279168:
              *(undefined1 *)((long)param_1 + 0x125ab) = 1;
              return lVar13;
            }
            if ((uint)*pbVar12 == ((uint)pvVar10 & 0xff)) {
              pbVar11 = (byte *)(lVar13 + 0x3d71);
              do {
                uVar9 = uVar9 - 1;
                pbVar12 = pbVar12 + 1;
                if (uVar9 == 0) goto LAB_100279168;
                bVar6 = *pbVar11;
                pbVar11 = pbVar11 + 1;
              } while (bVar6 == *pbVar12);
            }
          }
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar4);
    }
    lVar15 = 0;
  }
  return lVar15;
}




void FUN_1002792f8(long param_1,undefined8 param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  void *pvVar12;
  
  lVar1 = param_1 + 75000;
  iVar6 = FUN_1004e36c0(param_2,lVar1);
  if (iVar6 == 0) {
    return;
  }
  FUN_1000153b4(lVar1,param_2);
  lVar7 = FUN_10015d3ec();
  if (*(int *)(lVar7 + 0x55cc) == 1) {
    FUN_100270a84(param_1);
  }
  FUN_1002795e8(param_1,0,0);
  if ((*(long **)(param_1 + 0x11ef8) == (long *)0x0) ||
     (iVar6 = (**(code **)(**(long **)(param_1 + 0x11ef8) + 0x40))(), iVar6 != 2)) {
    FUN_100187878(param_1 + 0xde98,&DAT_101d91198,1,1);
  }
  *(undefined1 *)(param_1 + 0x125af) = 0;
  FUN_100652cdc(param_1 + 0x8fa0,"arrow_right");
  FUN_1001c102c(param_1 + 0x90c0);
  *(uint *)(param_1 + 0x9144) = *(uint *)(param_1 + 0x9144) & 0xfffffffb;
  FUN_100111808(*(char *)(param_1 + 0x125af) == '\0');
  lVar7 = FUN_10015d3ec();
  if (*(char *)(lVar7 + 0x567c) != '\0') goto LAB_1002795cc;
  lVar7 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar7 + 0x548f);
  uVar9 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar7 + 0x5480);
  if (-1 < (char)bVar5) {
    sVar2 = uVar9;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar12 = *(void **)(lVar7 + 0x5478);
    puVar4 = pvVar12;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar7 + 0x5478);
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar6 = _memcmp(puVar4,pbVar11,sVar2), iVar6 != 0)) goto LAB_1002794d0;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar11 == ((uint)pvVar12 & 0xff)) {
        pbVar10 = (byte *)(lVar7 + 0x5479);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_1002794f0;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
      goto LAB_1002794d0;
    }
  }
  else {
LAB_1002794d0:
    uVar8 = FUN_10015d3ec();
    lVar7 = FUN_10015d3ec();
    FUN_1001634c4(uVar8,lVar7 + 0x5478,0);
  }
LAB_1002794f0:
  FUN_10015d3ec();
  FUN_100166fd8();
  lVar7 = FUN_10015d3ec();
  bVar5 = *(byte *)(lVar7 + 0x54a7);
  uVar9 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar7 + 0x5498);
  if (-1 < (char)bVar5) {
    sVar2 = uVar9;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar12 = *(void **)(lVar7 + 0x5490);
    puVar4 = pvVar12;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar7 + 0x5490);
    }
    pbVar11 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar11 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar6 = _memcmp(puVar4,pbVar11,sVar2), iVar6 != 0)) goto LAB_1002795a4;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar11 == ((uint)pvVar12 & 0xff)) {
        pbVar10 = (byte *)(lVar7 + 0x5491);
        do {
          uVar9 = uVar9 - 1;
          pbVar11 = pbVar11 + 1;
          if (uVar9 == 0) goto LAB_1002795c4;
          bVar5 = *pbVar10;
          pbVar10 = pbVar10 + 1;
        } while (bVar5 == *pbVar11);
      }
      goto LAB_1002795a4;
    }
  }
  else {
LAB_1002795a4:
    uVar8 = FUN_10015d3ec();
    lVar7 = FUN_10015d3ec();
    FUN_1001635bc(uVar8,lVar7 + 0x5490,0);
  }
LAB_1002795c4:
  FUN_10015d3ec();
  FUN_100167860();
LAB_1002795cc:
  FUN_100188fec(param_1 + 0xde98,lVar1);
  return;
}




void FUN_1002795e8(long *param_1,long param_2,int param_3)

{
  byte *pbVar1;
  uint *puVar2;
  long *plVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long *******ppppppplVar7;
  string sVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  char *pcVar17;
  long *plVar18;
  string *psVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  string *psVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  void *pvVar27;
  string *psVar28;
  ulong uVar29;
  double dVar30;
  void *local_80;
  void *local_78;
  char local_69;
  long ******local_68;
  void *local_60;
  char local_51;
  
  lVar14 = param_1[0x23fe];
  if (lVar14 == param_2 && param_3 == 0) {
    return;
  }
  pbVar1 = (byte *)(param_1 + 0x1d42);
  puVar2 = (uint *)((long)param_1 + 0x9a54);
  param_1[0x23fe] = param_2;
  if (lVar14 != 0) {
    FUN_10019e818(lVar14,0);
    param_2 = param_1[0x23fe];
  }
  *puVar2 = *puVar2 & 0xfffffff8 | *puVar2 & 3 | (uint)(param_2 != 0) << 2;
  if (param_2 == 0) {
    std::string::operator=((string *)(param_1 + 0x24af),(string *)&DAT_101d91198);
    std::string::operator=((string *)(param_1 + 0x24a1),(string *)&DAT_101d91198);
    FUN_100187774(param_1 + 0x1bd3,&DAT_101d91198);
    return;
  }
  plVar20 = param_1 + 0x24a1;
  psVar19 = (string *)(param_1 + 0x24af);
  bVar10 = *(byte *)(param_2 + 0x3d87);
  uVar26 = (ulong)bVar10;
  sVar4 = *(size_t *)(param_2 + 0x3d78);
  if (-1 < (char)bVar10) {
    sVar4 = uVar26;
  }
  bVar9 = *(byte *)((long)param_1 + 0x1258f);
  sVar5 = param_1[0x24b0];
  if (-1 < (char)bVar9) {
    sVar5 = (ulong)bVar9;
  }
  if (sVar4 == sVar5) {
    pvVar27 = *(void **)(param_2 + 0x3d70);
    puVar6 = pvVar27;
    if (-1 < (char)bVar10) {
      puVar6 = (undefined8 *)(param_2 + 0x3d70);
    }
    psVar23 = *(string **)psVar19;
    if (-1 < (char)bVar9) {
      psVar23 = psVar19;
    }
    if ((char)bVar10 < '\0') {
      if (sVar4 == 0) goto LAB_100279778;
      iVar13 = _memcmp(puVar6,psVar23,sVar4);
      bVar11 = iVar13 == 0;
    }
    else {
      if (sVar4 != 0) {
        if ((uint)(byte)*psVar23 == ((uint)pvVar27 & 0xff)) {
          psVar28 = (string *)(param_2 + 0x3d71);
          do {
            uVar26 = uVar26 - 1;
            psVar23 = psVar23 + 1;
            if (uVar26 == 0) goto LAB_100279778;
            sVar8 = *psVar28;
            psVar28 = psVar28 + 1;
          } while (sVar8 == *psVar23);
        }
        goto LAB_100279784;
      }
LAB_100279778:
      bVar11 = true;
    }
    if ((bVar11) && (param_3 == 0)) {
      return;
    }
  }
LAB_100279784:
  plVar3 = param_1 + 0x1bd3;
  FUN_100187060(plVar3);
  FUN_10019e818(param_1[0x23fe],1);
  std::string::operator=(psVar19,(string *)(param_1[0x23fe] + 0x3d70));
  FUN_1006513c0(param_1 + 0x1369,param_1[0x23fe] + 0x3cd0);
  pcVar17 = "generic_star_outline";
  if (*(char *)(param_1[0x23fe] + 0x3dac) != '\0') {
    pcVar17 = "generic_star";
  }
  FUN_100652cdc(param_1 + 0x1429,pcVar17);
  *puVar2 = *puVar2 | 4;
  local_68 = (long ******)(param_1[0x23fe] + 0x3d70);
  if (*(char *)(param_1[0x23fe] + 0x3d87) < '\0') {
    local_68 = (long ******)*local_68;
  }
  psVar23 = (string *)FUN_100274c3c(param_1 + 0x2498,&local_68);
  psVar19 = psVar23;
  if (psVar23 == (string *)0x0) {
    if (((long *)param_1[0x23df] != (long *)0x0) &&
       (iVar13 = (**(code **)(*(long *)param_1[0x23df] + 0x40))(), iVar13 == 2)) {
      psVar19 = (string *)(param_1[0x23fe] + 0x3d70);
      goto LAB_100279850;
    }
    FUN_100188e18(plVar3,param_1[0x23fe] + 0x3cd0,param_1 + 0x24a1);
  }
  else {
LAB_100279850:
    std::string::operator=((string *)(param_1 + 0x24a1),psVar19);
  }
  FUN_10027c09c(param_1);
  FUN_100187774(plVar3,plVar20);
  FUN_1001876ec(plVar3);
  uVar12 = FUN_1002725c8(param_1,plVar20);
  if (uVar12 == 0xffffffff) {
    if (((long *)param_1[0x23df] != (long *)0x0) &&
       (iVar13 = (**(code **)(*(long *)param_1[0x23df] + 0x40))(), iVar13 == 2)) {
      if (psVar23 == (string *)0x0) {
        plVar20 = (long *)(param_1[0x23fe] + 0x3d70);
        if (*(char *)(param_1[0x23fe] + 0x3d87) < '\0') {
          plVar20 = (long *)*plVar20;
        }
        FUN_10001549c(&local_68,plVar20);
        plVar20 = (long *)param_1[0x23df];
        if (plVar20 != (long *)0x0) {
          ppppppplVar7 = (long *******)local_68;
          if (-1 < local_51) {
            ppppppplVar7 = &local_68;
          }
          iVar13 = (**(code **)(*plVar20 + 0x78))(plVar20,ppppppplVar7,200);
          if (iVar13 != 0) {
            ppppppplVar7 = (long *******)local_68;
            if (-1 < local_51) {
              ppppppplVar7 = &local_68;
            }
            FUN_10001549c(&local_80,ppppppplVar7);
            FUN_1002742c8(param_1,&local_80);
            if (local_69 < '\0') {
              operator_delete(local_80);
            }
          }
        }
        if (local_51 < '\0') {
          operator_delete(local_68);
        }
      }
      else {
        plVar21 = plVar20;
        if (*(char *)((long)param_1 + 0x1251f) < '\0') {
          plVar21 = (long *)*plVar20;
        }
        plVar18 = (long *)param_1[0x23df];
        if ((plVar18 != (long *)0x0) &&
           (iVar13 = (**(code **)(*plVar18 + 0x80))(plVar18,plVar21,200), iVar13 != 0)) {
          FUN_1002742c8(param_1,plVar20);
        }
      }
    }
  }
  else {
    uVar26 = (ulong)uVar12;
    lVar14 = uVar26 * 4 + (ulong)uVar12;
    *(undefined1 *)(param_1[0x2497] + lVar14 * 0x10 + 0x4c) = 0;
    FUN_10019e90c(param_1[0x23fe],1,0,0);
    lVar24 = param_1[0x2497];
    if (*(int *)(lVar24 + lVar14 * 0x10 + 0x38) != 0) {
      lVar14 = 0;
      uVar29 = 0;
      do {
        lVar25 = *(long *)(lVar24 + uVar26 * 0x50 + 0x40);
        lVar24 = lVar25 + lVar14;
        if (*(char *)(lVar24 + 0xef) < '\0') {
          lVar22 = *(long *)(lVar24 + 0xd8);
        }
        else {
          lVar22 = lVar24 + 0xd8;
        }
        lVar25 = lVar25 + lVar14;
        FUN_100187144(plVar3,lVar24 + 0xb8,lVar24 + 200,lVar22,*(undefined1 *)(lVar25 + 0xf0),
                      *(undefined1 *)(lVar25 + 0xf1));
        uVar29 = uVar29 + 1;
        lVar24 = param_1[0x2497];
        lVar14 = lVar14 + 0xf8;
      } while (uVar29 < *(uint *)(lVar24 + uVar26 * 0x50 + 0x38));
    }
    FUN_1000165f0(lVar24 + uVar26 * 0x50,0);
  }
  if (0.0 < *(double *)(param_1[0x23fe] + 0x3d88)) {
    FUN_1001870b0(plVar3,0);
    uVar15 = FUN_1004e0150("MENU_CHAT_PLAYER_BANNED",0);
    thunk_FUN_1004e439c(&local_68,uVar15);
    FUN_1004e3120(&local_80,"[PLAYER_NAME]");
    lVar14 = param_1[0x23fe] + 0x3cd0;
LAB_1002799e4:
    FUN_1004e3bc4(&local_68,0,&local_80,lVar14);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    uVar15 = FUN_100655b6c(param_1 + ((ulong)*pbVar1 & 1) * 0x26 + 0x1d10);
    iVar13 = FUN_1004e36c0(uVar15,&local_68);
    if (iVar13 != 0) {
LAB_100279a28:
      FUN_100187120(plVar3,&local_68,0);
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  else {
    iVar13 = FUN_10015d3f8();
    if (iVar13 == 0) {
LAB_100279ae8:
      switch(*(undefined4 *)(param_1[0x23fe] + 0x3d98)) {
      case 0:
        FUN_1001870b0(plVar3,*(undefined1 *)((long)param_1 + 0x125b3));
        uVar15 = FUN_1004e0150("MENU_CHAT_PLAYER_OFFLINE",0);
        thunk_FUN_1004e439c(&local_68,uVar15);
        FUN_1004e3120(&local_80,"[PLAYER_NAME]");
        uVar15 = FUN_100655b6c(param_1[0x23fe] + 0x330);
        FUN_1004e3bc4(&local_68,0,&local_80,uVar15);
        if (local_78 != (void *)0x0) {
          operator_delete__(local_78);
        }
        goto LAB_100279a28;
      case 1:
        FUN_1001870b0(plVar3,1);
        break;
      case 2:
        FUN_1001870b0(plVar3,*(undefined1 *)((long)param_1 + 0x125b3));
        uVar15 = FUN_1004e0150("MENU_CHAT_PLAYER_IN_GAME",0);
        thunk_FUN_1004e439c(&local_68,uVar15);
        FUN_1004e3120(&local_80,"[PLAYER_NAME]");
        lVar14 = FUN_100655b6c(param_1[0x23fe] + 0x330);
        goto LAB_1002799e4;
      case 3:
      case 4:
        FUN_1001870b0(plVar3,1);
        uVar15 = FUN_100655b6c(param_1 + ((ulong)*pbVar1 & 1) * 0x26 + 0x1d10);
        uVar16 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
        iVar13 = FUN_1004e36c0(uVar15,uVar16);
        if (iVar13 == 0) goto switchD_100279b0c_default;
        break;
      default:
        goto switchD_100279b0c_default;
      }
      pcVar17 = "MENU_CHAT_ENTER_YOUR_CHAT";
    }
    else {
      FUN_10015d3ec();
      dVar30 = (double)FUN_1001664b0();
      if (dVar30 <= 0.0) goto LAB_100279ae8;
      FUN_1001870b0(plVar3,0);
      uVar15 = FUN_100655b6c(param_1 + ((ulong)*pbVar1 & 1) * 0x26 + 0x1d10);
      uVar16 = FUN_1004e0150("MENU_FRIENDS_PLAYER_BANNED",0);
      iVar13 = FUN_1004e36c0(uVar15,uVar16);
      if (iVar13 == 0) goto switchD_100279b0c_default;
      pcVar17 = "MENU_FRIENDS_PLAYER_BANNED";
    }
    uVar15 = FUN_1004e0150(pcVar17,0);
    FUN_100187120(plVar3,uVar15,0);
  }
switchD_100279b0c_default:
  FUN_1001cedd0(param_1 + 0x2454);
  if (param_1[0x23fe] != 0) {
    FUN_10027c18c(param_1);
  }
  (**(code **)(*param_1 + 0x150))(param_1);
  FUN_10027b34c(param_1);
  return;
}




bool FUN_100279d64(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  uVar4 = FUN_1004d2524(uVar8);
  uVar5 = FUN_100015208(uVar8,uVar4,0x12345678);
  uVar1 = *param_1;
  if (uVar1 == 0) {
LAB_100279e04:
    bVar3 = false;
  }
  else {
    uVar2 = 0;
    if (uVar1 != 0) {
      uVar2 = uVar5 / uVar1;
    }
    uVar7 = (ulong)(uVar5 - uVar2 * uVar1);
    lVar6 = *(long *)(param_1 + 2);
    if (*(uint *)(lVar6 + uVar7 * 8) != uVar5) {
      do {
        if (*(int *)(lVar6 + uVar7 * 8 + 4) == -1) break;
        uVar2 = uVar1;
        if (0 < (int)(uint)uVar7) {
          uVar2 = (uint)uVar7;
        }
        uVar7 = (ulong)(uVar2 - 1);
      } while (*(uint *)(lVar6 + uVar7 * 8) != uVar5);
      if ((int)uVar7 == -1) goto LAB_100279e04;
    }
    bVar3 = *(int *)(lVar6 + uVar7 * 8 + 4) != -1;
  }
  return bVar3;
}




void FUN_100279e14(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  uVar1 = FUN_1004d2524(uVar3);
  uVar3 = FUN_100015208(uVar3,uVar1,0x12345678);
  lVar2 = FUN_100034344(param_1,uVar3);
  uVar1 = FUN_10027e0e4(param_1,param_3);
  *(undefined4 *)(lVar2 + 4) = uVar1;
  return;
}




bool FUN_100279e7c(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  uint uVar3;
  byte bVar4;
  size_t sVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  
  uVar3 = *(uint *)(param_1 + 0x124b0);
  pbVar1 = *(byte **)param_2;
  sVar5 = *(size_t *)(param_2 + 8);
  if (-1 < (char)param_2[0x17]) {
    pbVar1 = param_2;
    sVar5 = (ulong)param_2[0x17];
  }
  if (uVar3 == 0) {
    bVar6 = false;
  }
  else {
    uVar12 = 0;
    lVar13 = *(long *)(param_1 + 0x124b8);
    pbVar14 = (byte *)(lVar13 + 0x21);
    bVar6 = true;
    do {
      lVar10 = lVar13 + uVar12 * 0x50;
      bVar4 = *(byte *)(lVar10 + 0x37);
      uVar8 = (ulong)bVar4;
      sVar2 = *(size_t *)(lVar10 + 0x28);
      if (-1 < (char)bVar4) {
        sVar2 = uVar8;
      }
      if (sVar2 == sVar5) {
        if ((char)bVar4 < '\0') {
          if ((sVar5 == 0) || (iVar7 = _memcmp(*(void **)(lVar10 + 0x20),pbVar1,sVar5), iVar7 == 0))
          {
LAB_100279f78:
            lVar13 = lVar13 + (uVar12 & 0xffffffff) * 0x50;
            FUN_10027e5c8((uint *)(param_1 + 0x124b0),lVar13,lVar13 + 0x50);
            return bVar6;
          }
        }
        else {
          if (sVar5 == 0) goto LAB_100279f78;
          pbVar11 = pbVar14;
          pbVar9 = pbVar1;
          if ((uint)*pbVar1 == ((uint)*(void **)(lVar10 + 0x20) & 0xff)) {
            do {
              uVar8 = uVar8 - 1;
              pbVar9 = pbVar9 + 1;
              if (uVar8 == 0) goto LAB_100279f78;
              bVar4 = *pbVar11;
              pbVar11 = pbVar11 + 1;
            } while (bVar4 == *pbVar9);
          }
        }
      }
      uVar12 = uVar12 + 1;
      pbVar14 = pbVar14 + 0x50;
      bVar6 = uVar12 < uVar3;
    } while (uVar12 != uVar3);
  }
  return bVar6;
}




void FUN_100279fb8(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  
  uVar8 = *param_2;
  uVar4 = FUN_1004d2524(uVar8);
  uVar5 = FUN_100015208(uVar8,uVar4,0x12345678);
  uVar9 = *param_1;
  if (uVar9 == 0) {
    lVar6 = *(long *)(param_1 + 2);
    uVar10 = 0xffffffff;
  }
  else {
    uVar3 = 0;
    if (uVar9 != 0) {
      uVar3 = uVar5 / uVar9;
    }
    uVar3 = uVar5 - uVar3 * uVar9;
    lVar6 = *(long *)(param_1 + 2);
    while ((uVar10 = (ulong)uVar3, *(uint *)(lVar6 + uVar10 * 8) != uVar5 &&
           (*(int *)(lVar6 + uVar10 * 8 + 4) != -1))) {
      uVar1 = uVar9;
      if (0 < (int)uVar3) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 - 1;
    }
  }
  FUN_10027dba4(param_1,*(undefined4 *)(lVar6 + uVar10 * 8 + 4));
  *(undefined4 *)(*(long *)(param_1 + 2) + uVar10 * 8 + 4) = 0xffffffff;
  while( true ) {
    uVar9 = (uint)uVar10;
    if ((int)uVar9 < 1) {
      uVar9 = *param_1;
    }
    uVar10 = (ulong)(uVar9 - 1);
    lVar6 = *(long *)(param_1 + 2);
    piVar7 = (int *)(lVar6 + uVar10 * 8 + 4);
    iVar2 = *piVar7;
    if (iVar2 == -1) break;
    *piVar7 = -1;
    lVar6 = FUN_100034344(param_1,*(undefined4 *)(lVar6 + uVar10 * 8));
    *(int *)(lVar6 + 4) = iVar2;
  }
  param_1[4] = param_1[4] - 1;
  return;
}




void FUN_10027a0c4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_101d91198;
  if (*(long *)(param_2 + 0x11ff0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x11ff0) + 0x3d18);
  }
  FUN_10003330c(param_1,puVar1);
  return;
}




void FUN_10027a0f0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = &DAT_101d91198;
  if (*(long *)(param_2 + 0x11ff0) != 0) {
    puVar1 = (undefined8 *)(*(long *)(param_2 + 0x11ff0) + 0x3d50);
  }
  FUN_10003330c(param_1,puVar1);
  return;
}




void FUN_10027b34c(long param_1)

{
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 *puVar4;
  byte bVar5;
  undefined8 *******pppppppuVar6;
  int iVar7;
  undefined8 *******pppppppuVar8;
  int *piVar9;
  char *pcVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  void *pvVar16;
  float fVar17;
  float fVar18;
  undefined8 ******local_68;
  ulong uStack_60;
  ulong local_58;
  
  lVar12 = *(long *)(param_1 + 0x11ff0);
  if ((lVar12 == 0) || (*(char *)(lVar12 + 0x3db2) != '\0')) {
    *(uint *)(param_1 + 0xa8dc) = *(uint *)(param_1 + 0xa8dc) & 0xfffffffb;
    *(uint *)(param_1 + 0xaecc) = *(uint *)(param_1 + 0xaecc) & 0xfffffffb;
    return;
  }
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  local_58 = 0;
  FUN_1004e357c(lVar12 + 0x3cd0,&local_68);
  uVar13 = uStack_60;
  pppppppuVar6 = (undefined8 *******)local_68;
  if (-1 < (long)local_58) {
    uVar13 = local_58 >> 0x38;
    pppppppuVar6 = &local_68;
  }
  if (5 < (long)uVar13) {
    piVar1 = (int *)((long)pppppppuVar6 + uVar13);
    pppppppuVar8 = pppppppuVar6;
    while (piVar9 = _memchr(pppppppuVar8,0x47,uVar13 - 5), piVar9 != (int *)0x0) {
      if (*piVar9 == 0x73657547 && (short)piVar9[1] == 0x5f74) {
        if ((piVar9 != piVar1) && ((long)piVar9 - (long)pppppppuVar6 != -1)) {
          *(uint *)(param_1 + 0xa8dc) = *(uint *)(param_1 + 0xa8dc) & 0xfffffffb;
          *(uint *)(param_1 + 0xaecc) = *(uint *)(param_1 + 0xaecc) & 0xfffffffb;
          goto LAB_10027b690;
        }
        break;
      }
      pppppppuVar8 = (undefined8 *******)((long)piVar9 + 1);
      uVar13 = (long)piVar1 - (long)pppppppuVar8;
      if ((long)uVar13 < 6) break;
    }
  }
  lVar12 = *(long *)(param_1 + 0x11ff0);
  bVar5 = *(byte *)(lVar12 + 0x3d67);
  uVar13 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar12 + 0x3d58);
  if (-1 < (char)bVar5) {
    sVar2 = uVar13;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar16 = *(void **)(lVar12 + 0x3d50);
    puVar4 = pvVar16;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar12 + 0x3d50);
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar15,sVar2), iVar7 != 0)) goto LAB_10027b53c;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
        pbVar14 = (byte *)(lVar12 + 0x3d51);
        do {
          uVar13 = uVar13 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar13 == 0) goto LAB_10027b5f8;
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 == *pbVar15);
      }
      goto LAB_10027b53c;
    }
LAB_10027b5f8:
    if (*(char *)(param_1 + 0x125b1) != '\0') {
      pcVar10 = "generic_team_outline";
      goto LAB_10027b54c;
    }
    uVar11 = *(uint *)(param_1 + 0xaecc) & 0xfffffffb;
  }
  else {
LAB_10027b53c:
    pcVar10 = "generic_team";
LAB_10027b54c:
    FUN_100652cdc(param_1 + 0xb318,pcVar10);
    uVar11 = *(uint *)(param_1 + 0xaecc) | 4;
  }
  *(uint *)(param_1 + 0xaecc) = uVar11;
  lVar12 = *(long *)(param_1 + 0x11ff0);
  bVar5 = *(byte *)(lVar12 + 0x3d2f);
  uVar13 = (ulong)bVar5;
  sVar2 = *(size_t *)(lVar12 + 0x3d20);
  if (-1 < (char)bVar5) {
    sVar2 = uVar13;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    pvVar16 = *(void **)(lVar12 + 0x3d18);
    puVar4 = pvVar16;
    if (-1 < (char)bVar5) {
      puVar4 = (undefined8 *)(lVar12 + 0x3d18);
    }
    pbVar15 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar15 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar5 < '\0') {
      if ((sVar2 != 0) && (iVar7 = _memcmp(puVar4,pbVar15,sVar2), iVar7 != 0)) goto LAB_10027b620;
    }
    else if (sVar2 != 0) {
      if ((uint)*pbVar15 == ((uint)pvVar16 & 0xff)) {
        pbVar14 = (byte *)(lVar12 + 0x3d19);
        do {
          uVar13 = uVar13 - 1;
          pbVar15 = pbVar15 + 1;
          if (uVar13 == 0) goto LAB_10027b6a4;
          bVar5 = *pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (bVar5 == *pbVar15);
      }
      goto LAB_10027b620;
    }
LAB_10027b6a4:
    if (*(char *)(param_1 + 0x125b0) == '\0') {
      uVar11 = *(uint *)(param_1 + 0xa8dc) & 0xfffffffb;
      goto LAB_10027b63c;
    }
    pcVar10 = "generic_guild_outline";
  }
  else {
LAB_10027b620:
    pcVar10 = "generic_guild";
  }
  FUN_100652cdc(param_1 + 0xad28,pcVar10);
  uVar11 = *(uint *)(param_1 + 0xa8dc) | 4;
LAB_10027b63c:
  *(uint *)(param_1 + 0xa8dc) = uVar11;
  if ((*(byte *)(param_1 + 0xaecc) >> 2 & 1) == 0) {
    fVar17 = *(float *)(param_1 + 0xae88);
  }
  else {
    fVar18 = *(float *)(param_1 + 0xae88);
    fVar17 = (float)FUN_10064e3cc(param_1 + 0xae48);
    fVar17 = fVar18 + fVar17 * -0.5 + -48.0;
  }
  if (*(float *)(param_1 + 0xa898) != fVar17) {
    *(float *)(param_1 + 0xa898) = fVar17;
    FUN_1000200a0(param_1 + 0xa858);
  }
LAB_10027b690:
  if ((long)local_58 < 0) {
    operator_delete(local_68);
  }
  return;
}




void FUN_10027b6d8(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  size_t sVar3;
  size_t sVar4;
  undefined8 *puVar5;
  byte bVar6;
  uint uVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  size_t sVar15;
  long lVar16;
  size_t sVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  byte bVar21;
  ulong uVar22;
  size_t sVar23;
  size_t sVar24;
  undefined4 uVar25;
  undefined8 local_78;
  
  FUN_100270380();
  if (*(int *)(param_1 + 0x12490) != 0) {
    uVar22 = 0;
    pbVar1 = (byte *)(param_1 + 0x12578);
    plVar2 = (long *)(param_1 + 0x11f88);
    do {
      lVar16 = *(long *)(param_1 + 0x12498);
      operator_new(0x3db8);
      local_78 = thunk_FUN_10019cfbc();
      FUN_10027b9b0(param_1 + 0x11f80,&local_78);
      lVar19 = lVar16 + uVar22 * 0x38;
      sVar15 = *(size_t *)(lVar19 + 0x10);
      puVar14 = (undefined8 *)(lVar19 + 8);
      sVar24 = (size_t)*(byte *)(lVar19 + 0x1f);
      uVar7 = (uint)(char)*(byte *)(lVar19 + 0x1f);
      uVar18 = (ulong)uVar7;
      sVar3 = sVar15;
      if (-1 < (int)uVar7) {
        sVar3 = sVar24;
      }
      bVar21 = *(byte *)(param_1 + 0x1258f);
      sVar23 = (size_t)bVar21;
      sVar17 = *(size_t *)(param_1 + 0x12580);
      sVar4 = sVar17;
      if (-1 < (char)bVar21) {
        sVar4 = sVar23;
      }
      if (sVar3 == sVar4) {
        puVar5 = (void *)*puVar14;
        if (-1 < (int)uVar7) {
          puVar5 = puVar14;
        }
        pbVar13 = *(byte **)pbVar1;
        if (-1 < (char)bVar21) {
          pbVar13 = pbVar1;
        }
        if ((int)uVar7 < 0) {
          if ((sVar3 == 0) || (iVar9 = _memcmp(puVar5,pbVar13,sVar3), iVar9 == 0))
          goto LAB_10027b828;
        }
        else if (sVar3 == 0) {
LAB_10027b828:
          lVar11 = *(long *)(*plVar2 + uVar22 * 8);
          *(long *)(param_1 + 0x11ff0) = lVar11;
          FUN_1006513c0(param_1 + 0x9b48,lVar11 + 0x3cd0);
          uVar18 = (ulong)*(byte *)(lVar19 + 0x1f);
          sVar15 = *(size_t *)(lVar19 + 0x10);
          bVar21 = *(byte *)(param_1 + 0x1258f);
          sVar23 = (size_t)bVar21;
          sVar17 = *(size_t *)(param_1 + 0x12580);
          sVar24 = uVar18;
        }
        else if ((uint)*pbVar13 == ((uint)(void *)*puVar14 & 0xff)) {
          pbVar12 = (byte *)(lVar16 + uVar22 * 0x38 + 9);
          uVar10 = sVar24;
          do {
            uVar10 = uVar10 - 1;
            pbVar13 = pbVar13 + 1;
            if (uVar10 == 0) goto LAB_10027b828;
            bVar6 = *pbVar12;
            pbVar12 = pbVar12 + 1;
          } while (bVar6 == *pbVar13);
        }
      }
      uVar20 = *(undefined8 *)(*plVar2 + uVar22 * 8);
      uVar25 = *(undefined4 *)(param_1 + 0x12590);
      if (-1 < (char)uVar18) {
        sVar15 = sVar24;
      }
      if (-1 < (char)bVar21) {
        sVar17 = sVar23;
      }
      if (sVar15 == sVar17) {
        puVar5 = (undefined8 *)*puVar14;
        if (-1 < (char)uVar18) {
          puVar5 = puVar14;
        }
        pbVar13 = *(byte **)pbVar1;
        if (-1 < (char)bVar21) {
          pbVar13 = pbVar1;
        }
        if (((uint)uVar18 >> 7 & 1) == 0) {
          if (sVar15 == 0) {
LAB_10027b928:
            bVar8 = true;
          }
          else {
            if ((uint)*pbVar13 != ((uint)(undefined8 *)*puVar14 & 0xff)) goto LAB_10027b8fc;
            pbVar12 = (byte *)(lVar16 + uVar22 * 0x38 + 9);
            do {
              sVar24 = sVar24 - 1;
              pbVar13 = pbVar13 + 1;
              bVar8 = sVar24 == 0;
              if (sVar24 == 0) break;
              bVar21 = *pbVar12;
              pbVar12 = pbVar12 + 1;
            } while (bVar21 == *pbVar13);
          }
        }
        else {
          if (sVar15 == 0) goto LAB_10027b928;
          iVar9 = _memcmp(puVar5,pbVar13,sVar15);
          bVar8 = iVar9 == 0;
        }
      }
      else {
LAB_10027b8fc:
        bVar8 = false;
      }
      FUN_10019ef80(uVar25,uVar20,lVar16 + uVar22 * 0x38 + 0x20,puVar14,bVar8,
                    *(undefined1 *)(lVar16 + uVar22 * 0x38 + 0x35));
      FUN_10019f470(*(undefined4 *)(param_1 + 0x12590),DAT_101d237d0,
                    *(undefined8 *)(*plVar2 + uVar22 * 8));
      FUN_100642bd8(param_1 + 0x43c0,*(undefined8 *)(*plVar2 + uVar22 * 8),1);
      uVar22 = uVar22 + 1;
    } while (uVar22 < *(uint *)(param_1 + 0x12490));
  }
  return;
}




void FUN_10027b9b0(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10027e2d8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined4 FUN_10027ba30(long param_1)

{
  int *piVar1;
  byte *pbVar2;
  long *plVar3;
  int *piVar4;
  char *pcVar5;
  size_t sVar6;
  size_t sVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined4 uVar20;
  undefined4 local_84;
  undefined8 local_78;
  
  FUN_100270410();
  if (*(int *)(param_1 + 0x12480) == 0) {
    local_84 = 0;
  }
  else {
    uVar19 = 0;
    local_84 = 0;
    pbVar2 = (byte *)(param_1 + 0x12578);
    plVar3 = (long *)(param_1 + 0x11fa8);
    do {
      if (*(uint *)(param_1 + 0x1259c) <= uVar19) {
        return local_84;
      }
      lVar17 = *(long *)(param_1 + 0x12488);
      piVar16 = (int *)(lVar17 + uVar19 * 0x188);
      operator_new(0x3db8);
      local_78 = thunk_FUN_10019cfbc();
      FUN_10027b9b0(param_1 + 0x11fa0,&local_78);
      piVar1 = piVar16 + 2;
      bVar8 = *(byte *)((long)piVar16 + 0x1f);
      uVar12 = (ulong)bVar8;
      sVar6 = *(size_t *)(piVar16 + 4);
      if (-1 < (char)bVar8) {
        sVar6 = uVar12;
      }
      bVar9 = *(byte *)(param_1 + 0x1258f);
      sVar7 = *(size_t *)(param_1 + 0x12580);
      if (-1 < (char)bVar9) {
        sVar7 = (ulong)bVar9;
      }
      if (sVar6 == sVar7) {
        piVar4 = *(int **)piVar1;
        if (-1 < (char)bVar8) {
          piVar4 = piVar1;
        }
        pbVar15 = *(byte **)pbVar2;
        if (-1 < (char)bVar9) {
          pbVar15 = pbVar2;
        }
        if ((char)bVar8 < '\0') {
          if ((sVar6 == 0) || (iVar11 = _memcmp(piVar4,pbVar15,sVar6), iVar11 == 0))
          goto LAB_10027bb90;
        }
        else if (sVar6 == 0) {
LAB_10027bb90:
          lVar13 = *(long *)(*plVar3 + uVar19 * 8);
          *(long *)(param_1 + 0x11ff0) = lVar13;
          FUN_1006513c0(param_1 + 0x9b48,lVar13 + 0x3cd0);
          pcVar5 = "generic_star_outline";
          if (*piVar16 < 0) {
            pcVar5 = "generic_star";
          }
          FUN_100652cdc(param_1 + 0xa148,pcVar5);
          local_84 = 1;
        }
        else if ((uint)*pbVar15 == ((uint)*(int **)piVar1 & 0xff)) {
          pbVar14 = (byte *)(lVar17 + uVar19 * 0x188 + 9);
          do {
            uVar12 = uVar12 - 1;
            pbVar15 = pbVar15 + 1;
            if (uVar12 == 0) goto LAB_10027bb90;
            bVar8 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (bVar8 == *pbVar15);
        }
      }
      uVar18 = *(undefined8 *)(*plVar3 + uVar19 * 8);
      uVar20 = *(undefined4 *)(param_1 + 0x12590);
      bVar8 = *(byte *)((long)piVar16 + 0x1f);
      uVar12 = (ulong)bVar8;
      sVar6 = *(size_t *)(piVar16 + 4);
      if (-1 < (char)bVar8) {
        sVar6 = uVar12;
      }
      bVar9 = *(byte *)(param_1 + 0x1258f);
      sVar7 = *(size_t *)(param_1 + 0x12580);
      if (-1 < (char)bVar9) {
        sVar7 = (ulong)bVar9;
      }
      if (sVar6 == sVar7) {
        piVar16 = *(int **)piVar1;
        if (-1 < (char)bVar8) {
          piVar16 = piVar1;
        }
        pbVar15 = *(byte **)pbVar2;
        if (-1 < (char)bVar9) {
          pbVar15 = pbVar2;
        }
        if ((char)bVar8 < '\0') {
          if (sVar6 == 0) goto LAB_10027bc94;
          iVar11 = _memcmp(piVar16,pbVar15,sVar6);
          bVar10 = iVar11 == 0;
        }
        else if (sVar6 == 0) {
LAB_10027bc94:
          bVar10 = true;
        }
        else {
          if ((uint)*pbVar15 != ((uint)*(int **)piVar1 & 0xff)) goto LAB_10027bc78;
          pbVar14 = (byte *)(lVar17 + uVar19 * 0x188 + 9);
          do {
            uVar12 = uVar12 - 1;
            pbVar15 = pbVar15 + 1;
            bVar10 = uVar12 == 0;
            if (uVar12 == 0) break;
            bVar8 = *pbVar14;
            pbVar14 = pbVar14 + 1;
          } while (bVar8 == *pbVar15);
        }
      }
      else {
LAB_10027bc78:
        bVar10 = false;
      }
      lVar17 = lVar17 + uVar19 * 0x188;
      FUN_10019ea08(uVar20,uVar18,lVar17 + 0x20,piVar1,lVar17 + 0x30,lVar17 + 0x40,lVar17 + 0x50,
                    lVar17 + 0x68,lVar17 + 0x78,lVar17 + 0x88,bVar10);
      FUN_10019f470(*(undefined4 *)(param_1 + 0x12590),DAT_101d237d0,
                    *(undefined8 *)(*plVar3 + uVar19 * 8));
      FUN_100642bd8(param_1 + 0x4ec0,*(undefined8 *)(*plVar3 + uVar19 * 8),1);
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)(param_1 + 0x12480));
  }
  return local_84;
}




void FUN_10027bd4c(long param_1,short *param_2)

{
  long lVar1;
  size_t sVar2;
  size_t sVar3;
  undefined8 ***pppuVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  double dVar13;
  undefined1 auStack_78 [8];
  void *local_70;
  undefined1 auStack_68 [8];
  void *local_60;
  undefined8 **local_58;
  size_t local_50;
  ulong local_48;
  
  local_58 = (undefined8 ***)0x0;
  local_50 = 0;
  local_48 = 0;
  lVar1 = param_1 + 0xde98;
  if ((*(long **)(param_1 + 0x11ef8) == (long *)0x0) ||
     (iVar6 = (**(code **)(**(long **)(param_1 + 0x11ef8) + 0x40))(), iVar6 != 2)) {
    FUN_100188e18(lVar1,param_2 + 0x10,&local_58);
  }
  else {
    std::string::operator=((string *)&local_58,(string *)(param_2 + 4));
  }
  uVar10 = local_48 >> 0x38;
  sVar2 = local_50;
  if (-1 < (long)local_48) {
    sVar2 = uVar10;
  }
  bVar5 = *(byte *)(param_1 + 0x1251f);
  sVar3 = *(size_t *)(param_1 + 0x12510);
  if (-1 < (char)bVar5) {
    sVar3 = (ulong)bVar5;
  }
  if (sVar2 != sVar3) goto LAB_10027bf54;
  pppuVar4 = (undefined8 ***)local_58;
  if (-1 < (long)local_48) {
    pppuVar4 = &local_58;
  }
  pbVar12 = *(byte **)(param_1 + 0x12508);
  if (-1 < (char)bVar5) {
    pbVar12 = (byte *)(param_1 + 0x12508);
  }
  if ((long)local_48 < 0) {
    if ((sVar2 != 0) && (iVar6 = _memcmp(pppuVar4,pbVar12,sVar2), iVar6 != 0)) goto LAB_10027bf54;
  }
  else if (sVar2 != 0) {
    if ((uint)*pbVar12 == ((uint)local_58 & 0xff)) {
      pbVar11 = (byte *)((ulong)&local_58 | 1);
      do {
        uVar10 = uVar10 - 1;
        pbVar12 = pbVar12 + 1;
        if (uVar10 == 0) goto LAB_10027be68;
        bVar5 = *pbVar11;
        pbVar11 = pbVar11 + 1;
      } while (bVar5 == *pbVar12);
    }
    goto LAB_10027bf54;
  }
LAB_10027be68:
  pbVar12 = (byte *)(param_1 + 0xea10);
  FUN_1001870b0(lVar1,1);
  if (*param_2 == 0) {
    FUN_1001870b0(lVar1,*(undefined1 *)(param_1 + 0x125b3));
    pcVar9 = "MENU_CHAT_PLAYER_OFFLINE";
LAB_10027bebc:
    uVar7 = FUN_1004e0150(pcVar9,0);
    thunk_FUN_1004e439c(auStack_68,uVar7);
    FUN_1004e3120(auStack_78,"[PLAYER_NAME]");
    FUN_1004e3bc4(auStack_68,0,auStack_78,param_2 + 0x10);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
    }
    uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
    iVar6 = FUN_1004e36c0(uVar7,auStack_68);
    if (iVar6 != 0) {
      FUN_100187120(lVar1,auStack_68,0);
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
    }
  }
  else {
    if (0.0 < *(double *)(param_2 + 0x50)) {
      FUN_1001870b0(lVar1,0);
      pcVar9 = "MENU_CHAT_PLAYER_BANNED";
      goto LAB_10027bebc;
    }
    iVar6 = FUN_10015d3f8();
    if (iVar6 == 0) {
LAB_10027bfec:
      switch(*param_2) {
      case 1:
      case 3:
      case 4:
        FUN_1001870b0(lVar1,1);
        uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
        uVar8 = FUN_1004e0150("MENU_CHAT_ENTER_YOUR_CHAT",0);
        iVar6 = FUN_1004e36c0(uVar7,uVar8);
        if (iVar6 != 0) {
          pcVar9 = "MENU_CHAT_ENTER_YOUR_CHAT";
          goto LAB_10027c068;
        }
        break;
      case 2:
        FUN_1001870b0(lVar1,*(undefined1 *)(param_1 + 0x125b3));
        pcVar9 = "MENU_CHAT_PLAYER_IN_GAME";
        goto LAB_10027bebc;
      }
    }
    else {
      FUN_10015d3ec();
      dVar13 = (double)FUN_1001664b0();
      if (dVar13 <= 0.0) goto LAB_10027bfec;
      FUN_1001870b0(lVar1,0);
      uVar7 = FUN_100655b6c(param_1 + ((ulong)*pbVar12 & 1) * 0x130 + 0xe880);
      uVar8 = FUN_1004e0150("MENU_FRIENDS_PLAYER_BANNED",0);
      iVar6 = FUN_1004e36c0(uVar7,uVar8);
      if (iVar6 != 0) {
        pcVar9 = "MENU_FRIENDS_PLAYER_BANNED";
LAB_10027c068:
        uVar7 = FUN_1004e0150(pcVar9,0);
        FUN_100187120(lVar1,uVar7,0);
      }
    }
  }
  if (*(long *)(param_1 + 0x11ff0) != 0) {
    FUN_10027c18c(param_1);
  }
LAB_10027bf54:
  if ((long)local_48 < 0) {
    operator_delete(local_58);
  }
  return;
}




void FUN_10027c09c(long param_1)

{
  float *pfVar1;
  bool bVar2;
  undefined8 uVar3;
  
  pfVar1 = (float *)(param_1 + 0xa780);
  if (*(long *)(param_1 + 0x11ff0) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(*(long *)(param_1 + 0x11ff0) + 0x3d68) == 3;
  }
  FUN_1001b4c0c(param_1 + 0x9c78,bVar2);
  if ((*(long *)(param_1 + 0x11ff0) == 0) || (*(int *)(*(long *)(param_1 + 0x11ff0) + 0x3d68) != 3))
  {
    FUN_100652cdc(param_1 + 0xa738,"generic_invite_friend_hollow");
    bVar2 = false;
    if ((*pfVar1 == 1.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0xa784)))) {
      bVar2 = *(float *)(param_1 + 0xa784) == 1.0;
    }
    if (bVar2) {
      return;
    }
    uVar3 = NEON_fmov(0x3f800000,4);
  }
  else {
    FUN_100652cdc(param_1 + 0xa738,"generic_x");
    uVar3 = 0x3f99999a3f99999a;
    if ((*pfVar1 == 1.2) && (*(float *)(param_1 + 0xa784) == 1.2)) {
      return;
    }
  }
  *(undefined8 *)pfVar1 = uVar3;
  FUN_1000200a0(param_1 + 0xa738);
  return;
}




void FUN_10027c18c(long param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  if (param_2 == 0) {
    return;
  }
  if (0.0 < *(double *)(param_2 + 0x3d88)) {
    uVar1 = FUN_1004e0150("MENU_FRIENDS_STATUS_BANNED",0);
    thunk_FUN_1004e439c(auStack_30,uVar1);
    FUN_1000f1e20(auStack_40,auStack_30,(long)*(double *)(param_2 + 0x3d88),0);
    FUN_1006513c0(param_1 + 0xb438,auStack_40);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    goto LAB_10027c2e0;
  }
  FUN_1004e313c(auStack_30);
  switch(*(undefined4 *)(param_2 + 0x3d98)) {
  case 0:
    pcVar2 = "MENU_FRIENDS_STATUS_OFFLINE";
    break;
  case 1:
    pcVar2 = "MENU_FRIENDS_STATUS_AVAILABLE";
    break;
  case 2:
    uVar1 = FUN_1004e0150("MENU_FRIENDS_STATUS_BUSY",0);
    thunk_FUN_1004e439c(auStack_40,uVar1);
    FUN_1000f1e20(auStack_50,auStack_40,*(undefined4 *)(param_2 + 0x3d9c),0);
    FUN_1000153b4(auStack_30,auStack_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    goto switchD_10027c234_default;
  case 3:
    pcVar2 = "MENU_FRIENDS_STATUS_IN_PARTY";
    break;
  case 4:
    pcVar2 = "MENU_FRIENDS_STATUS_MATCHING";
    break;
  default:
    goto switchD_10027c234_default;
  }
  uVar1 = FUN_1004e0150(pcVar2,0);
  FUN_1000153b4(auStack_30,uVar1);
switchD_10027c234_default:
  FUN_1006513c0(param_1 + 0xb438,auStack_30);
LAB_10027c2e0:
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_10027c2fc(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar1 = 0;
    if (uVar4 != 0xffffffff) {
      uVar1 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar1 = uVar4 << 1;
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10027e354(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x50;
  FUN_1000164ec(lVar5 + -0x50,param_2);
  FUN_10003330c(lVar5 + -0x30,param_2 + 0x20);
  FUN_10027e474(lVar5 + -0x18,param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x48);
  *(undefined1 *)(lVar5 + -4) = *(undefined1 *)(param_2 + 0x4c);
  *(undefined4 *)(lVar5 + -8) = uVar3;
  return;
}




void FUN_10027c43c(void)

{
  return;
}




void FUN_10027c440(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_TITLE",0);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_MSG",0);
  uVar3 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_DIALOG_CONFIRM",0);
  uVar4 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001e3120(uVar1,uVar2,uVar3,uVar4,param_1,thunk_FUN_10027d778,FUN_10027c4d8);
  return;
}




void thunk_FUN_10027d778(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10015d3ec();
  iVar1 = FUN_10016680c(uVar2,0);
  if (iVar1 != 0) {
    uVar2 = FUN_10015d3ec();
    FUN_100166750(uVar2,0);
    uVar2 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_SENT_TOASTIE",0);
    FUN_1001e55b0(0x3fe66666,uVar2,0,0);
    return;
  }
  return;
}




void FUN_10027c4d8(void)

{
  return;
}




void FUN_10027c4dc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_INPUT_CAPTION",0);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_INPUT_MESSAGE",0);
  FUN_1001e7ca4(param_1 + 0x124f0,uVar1,uVar2,&DAT_101d91650,0,0,0,0,param_1,thunk_FUN_10027ca60,
                FUN_10027c588,param_1 + 0x12550);
  return;
}




void thunk_FUN_10027ca60(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  void *pvStack_48;
  
  if (*(uint *)(param_1 + 0x12470) != 0) {
    uVar5 = 0;
    lVar6 = 0xac;
    do {
      iVar1 = FUN_1004e3654(param_3,*(long *)(param_1 + 0x12478) + lVar6 + -0x8c);
      if ((iVar1 != 0) && (*(int *)(*(long *)(param_1 + 0x12478) + lVar6) == 3)) {
        uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x188;
    } while (uVar5 < *(uint *)(param_1 + 0x12470));
  }
  FUN_100111870(param_3);
  FUN_1000153b4(param_1 + 0x12550,param_3);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  thunk_FUN_1004e439c(auStack_50,uVar2);
  FUN_100273de8(0x40200000,param_1,1,auStack_50,1);
  if (pvStack_48 != (void *)0x0) {
    operator_delete__(pvStack_48);
  }
  return;
}




void FUN_10027c588(long param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1000153b4(param_1 + 0x12550,param_3);
  return;
}




void FUN_10027c59c(long *param_1)

{
  ulong uVar1;
  
  if ((DAT_101854aec < *(float *)((long)param_1 + 0x38e4)) &&
     (uVar1 = FUN_100530da0(param_1 + 0x714), (uVar1 & 1) == 0)) {
    FUN_1001117cc(0);
                    /* WARNING: Could not recover jumptable at 0x00010027c5f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1c0))(param_1);
    return;
  }
  return;
}




void FUN_10027c5fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  
  lVar1 = FUN_100644b2c(param_2);
  FUN_1002795e8(param_1,lVar1,0);
  iVar2 = *(int *)(lVar1 + 0x3d98);
  if (iVar2 == 2) {
    FUN_100278378(param_1,lVar1,0);
    iVar2 = *(int *)(lVar1 + 0x3d98);
  }
  if (iVar2 == 3) {
    FUN_100278bfc(param_1,lVar1,0);
    return;
  }
  return;
}




void FUN_10027c674(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [8];
  void *local_130;
  void *local_128;
  void *local_120;
  undefined7 local_118;
  char cStack_111;
  char local_101;
  undefined4 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 auStack_e8 [40];
  long local_c0;
  undefined8 local_a0;
  void *local_98;
  void *local_90;
  char local_79;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_54;
  
  if (*(long *)(param_1 + 0x11ff0) != 0) {
    if (*(char *)(param_1 + 0x1258f) < '\0') {
      if (*(long *)(param_1 + 0x12580) == 0) {
        return;
      }
    }
    else if (*(char *)(param_1 + 0x1258f) == '\0') {
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x11ff0) + 0x3dac) == '\0') {
      FUN_100111890(param_1 + 0x12578);
    }
    else {
      FUN_1001118a0();
    }
    FUN_1001b4c70(param_1 + 0x9c78);
    thunk_FUN_1001cd434(&local_f0);
    local_60 = 0x3f733333;
    local_c0 = param_1 + 0x9c78;
    iVar1 = FUN_100126c88();
    local_5c = 0x44160000;
    if (iVar1 == 0) {
      local_5c = 0x43e10000;
    }
    local_54 = 0x40000000;
    uVar2 = FUN_1004e0150("MENU_FRIENDS_FAVORITE_TOOLTIP_TITLE",0);
    thunk_FUN_1004e439c(&local_128,uVar2);
    FUN_10003330c(&local_118,&DAT_101d91198);
    local_100 = 0;
    local_fc = 0x41a00000;
    FUN_10003c048(auStack_e8,&local_128);
    if (local_101 < '\0') {
      operator_delete((void *)CONCAT17(cStack_111,local_118));
    }
    if (local_120 != (void *)0x0) {
      operator_delete__(local_120);
    }
    uVar2 = FUN_1004e0150("MENU_FRIENDS_FAVORITE_TOOLTIP_TEXT",0);
    thunk_FUN_1004e439c(auStack_138,uVar2);
    thunk_FUN_1004e439c(&local_128,auStack_138);
    FUN_10003330c(&local_118,&DAT_101d91198);
    local_100 = 1;
    local_fc = 0x41a00000;
    FUN_10003c048(auStack_e8,&local_128);
    if (local_101 < '\0') {
      operator_delete((void *)CONCAT17(cStack_111,local_118));
    }
    if (local_120 != (void *)0x0) {
      operator_delete__(local_120);
    }
    FUN_10001549c(&local_128,"starFriendInfo");
    FUN_1001cefb8(param_1 + 0x122a0,&local_128,&local_f0);
    if (cStack_111 < '\0') {
      operator_delete(local_128);
    }
    if (local_130 != (void *)0x0) {
      operator_delete__(local_130);
    }
    local_f0 = &PTR_FUN_1014666e0;
    if (local_79 < '\0') {
      operator_delete(local_90);
    }
    if (local_98 != (void *)0x0) {
      operator_delete__(local_98);
      local_a0 = 0;
      local_98 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_e8,1);
  }
  return;
}




void FUN_10027c8b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  void *local_48;
  undefined1 auStack_40 [8];
  void *local_38;
  undefined1 auStack_30 [8];
  void *local_28;
  
  lVar3 = *(long *)(param_1 + 0x11ff0);
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x3d68) != 3) {
      FUN_10027ca60(param_1,param_2,lVar3 + 0x3cd0);
      return;
    }
    std::string::operator=((string *)(param_1 + 0x12560),(string *)(param_1 + 0x12578));
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_TITLE",0);
    thunk_FUN_1004e439c(auStack_30,uVar1);
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_DESCRIPTION",0);
    thunk_FUN_1004e439c(auStack_40,uVar1);
    FUN_1004e3120(auStack_50,"[PLAYER_NAME]");
    uVar1 = FUN_100655b6c(*(long *)(param_1 + 0x11ff0) + 0x330);
    FUN_1004e3bc4(auStack_40,0,auStack_50,uVar1);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
    }
    uVar1 = FUN_1004e0150("MENU_FRIENDS_DELETE_CONFIRM",0);
    uVar2 = FUN_1004e0150("MENU_FRIENDS_DELETE_CANCEL",0);
    FUN_1001e31c8(auStack_30,auStack_40,uVar1,uVar2,&DAT_101d91650,param_1,FUN_10027ca14,0,0);
    if (local_38 != (void *)0x0) {
      operator_delete__(local_38);
    }
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  return;
}




void FUN_10027ca14(long param_1)

{
  FUN_100111880(param_1 + 0x12560);
  *(undefined8 *)(param_1 + 0x11ff0) = 0;
  std::string::operator=((string *)(param_1 + 0x12578),(string *)&DAT_101d91198);
  return;
}




void FUN_10027ca60(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_50 [8];
  void *local_48;
  
  if (*(uint *)(param_1 + 0x12470) != 0) {
    uVar5 = 0;
    lVar6 = 0xac;
    do {
      iVar1 = FUN_1004e3654(param_3,*(long *)(param_1 + 0x12478) + lVar6 + -0x8c);
      if ((iVar1 != 0) && (*(int *)(*(long *)(param_1 + 0x12478) + lVar6) == 3)) {
        uVar2 = FUN_1004e0150("GENERIC_DIALOG_ERROR",0);
        uVar3 = FUN_1004e0150("MENU_FRIENDS_ADD_FRIEND_DUPLICATE_ERROR",0);
        uVar4 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
        FUN_1001e3090(uVar2,uVar3,uVar4,0,0);
        return;
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x188;
    } while (uVar5 < *(uint *)(param_1 + 0x12470));
  }
  FUN_100111870(param_3);
  FUN_1000153b4(param_1 + 0x12550,param_3);
  uVar2 = FUN_1004e0150("MENU_FRIENDS_ADD_EXPLAIN_REQUEST_SENT_TO",0);
  thunk_FUN_1004e439c(auStack_50,uVar2);
  FUN_100273de8(0x40200000,param_1,1,auStack_50,1);
  if (local_48 != (void *)0x0) {
    operator_delete__(local_48);
  }
  return;
}




void FUN_10027cbb0(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *local_168;
  void *local_160;
  void *local_158;
  undefined7 local_150;
  char cStack_149;
  char local_139;
  undefined4 local_138;
  undefined8 local_134;
  undefined **local_128;
  undefined1 auStack_120 [16];
  long local_110;
  code *pcStack_108;
  long local_f8;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  char local_b1;
  undefined4 local_98;
  undefined4 local_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d18);
  bVar9 = *(byte *)(lVar15 + 0x3d2f);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b0) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d20);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d20);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027cd7c;
      }
      else {
        if (sVar3 == 0) {
LAB_10027cd7c:
          thunk_FUN_1001cd434(&local_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&local_160,uVar11);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 0;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_GUILD_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&local_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&local_160,uVar11);
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          thunk_FUN_1004e439c(&local_160,auStack_170);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 1;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          pcStack_108 = thunk_FUN_10027cfb0;
          local_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&local_d8,uVar11);
          local_f8 = param_1 + 0xa858;
          local_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          local_94 = 0x44160000;
          if (iVar10 == 0) {
            local_94 = 0x43e10000;
          }
          FUN_10001549c(&local_160,"guildInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&local_160,&local_128);
          if (cStack_149 < '\0') {
            operator_delete(local_160);
          }
          if (local_168 != (void *)0x0) {
            operator_delete__(local_168);
          }
          local_128 = &PTR_FUN_1014666e0;
          if (local_b1 < '\0') {
            operator_delete(local_c8);
          }
          if (local_d0 != (void *)0x0) {
            operator_delete__(local_d0);
            local_d8 = 0;
            local_d0 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_120,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d19);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027cd7c;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d19);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001634c4(uVar11,*plVar1 + 0x3d18,1);
  FUN_10021a8ec(*plVar1 + 0x3d18,0);
  return;
}




void thunk_FUN_10027cfb0(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  void *pvVar11;
  
  lVar7 = *(long *)(param_1 + 0x11ff0);
  if (lVar7 != 0) {
    bVar4 = *(byte *)(lVar7 + 0x3d2f);
    uVar9 = (ulong)bVar4;
    sVar1 = *(size_t *)(lVar7 + 0x3d20);
    if (-1 < (char)bVar4) {
      sVar1 = uVar9;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar11 = *(void **)(lVar7 + 0x3d18);
      puVar3 = pvVar11;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar7 + 0x3d18);
      }
      pbVar10 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar10 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 != 0)) {
          return;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar10 != ((uint)pvVar11 & 0xff)) {
          return;
        }
        pbVar8 = (byte *)(lVar7 + 0x3d19);
        while( true ) {
          uVar9 = uVar9 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar9 == 0) break;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (bVar4 != *pbVar10) {
            return;
          }
        }
      }
      if (*(char *)(param_1 + 0x125b0) != '\0') {
        uVar6 = FUN_10015d3ec();
        FUN_1001670f4(uVar6,*(long *)(param_1 + 0x11ff0) + 0x3d70);
        return;
      }
    }
  }
  return;
}




void FUN_10027cfb0(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  void *pvVar11;
  
  lVar7 = *(long *)(param_1 + 0x11ff0);
  if (lVar7 != 0) {
    bVar4 = *(byte *)(lVar7 + 0x3d2f);
    uVar9 = (ulong)bVar4;
    sVar1 = *(size_t *)(lVar7 + 0x3d20);
    if (-1 < (char)bVar4) {
      sVar1 = uVar9;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar11 = *(void **)(lVar7 + 0x3d18);
      puVar3 = pvVar11;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar7 + 0x3d18);
      }
      pbVar10 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar10 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 != 0)) {
          return;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar10 != ((uint)pvVar11 & 0xff)) {
          return;
        }
        pbVar8 = (byte *)(lVar7 + 0x3d19);
        while( true ) {
          uVar9 = uVar9 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar9 == 0) break;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (bVar4 != *pbVar10) {
            return;
          }
        }
      }
      if (*(char *)(param_1 + 0x125b0) != '\0') {
        uVar6 = FUN_10015d3ec();
        FUN_1001670f4(uVar6,*(long *)(param_1 + 0x11ff0) + 0x3d70);
        return;
      }
    }
  }
  return;
}




void FUN_10027d0ac(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  size_t sVar4;
  size_t sVar5;
  undefined8 *puVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  int iVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  size_t sVar17;
  undefined1 auStack_170 [8];
  void *local_168;
  void *local_160;
  void *local_158;
  undefined7 local_150;
  char cStack_149;
  char local_139;
  undefined4 local_138;
  undefined8 local_134;
  undefined **local_128;
  undefined1 auStack_120 [16];
  long local_110;
  code *pcStack_108;
  long local_f8;
  undefined8 local_d8;
  void *local_d0;
  void *local_c8;
  char local_b1;
  undefined4 local_98;
  undefined4 local_94;
  
  bVar8 = DAT_101d911a8._7_1_;
  sVar5 = DAT_101d911a0;
  plVar1 = (long *)(param_1 + 0x11ff0);
  lVar15 = *plVar1;
  if (lVar15 == 0) {
    return;
  }
  puVar2 = (undefined8 *)(lVar15 + 0x3d50);
  bVar9 = *(byte *)(lVar15 + 0x3d67);
  uVar16 = (ulong)bVar9;
  if (*(char *)(param_1 + 0x125b1) == '\0') {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
  }
  else {
    sVar17 = *(size_t *)(lVar15 + 0x3d58);
    sVar3 = sVar17;
    if (-1 < (char)bVar9) {
      sVar3 = uVar16;
    }
    sVar4 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar4 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar3 == sVar4) {
      puVar6 = (void *)*puVar2;
      if (-1 < (char)bVar9) {
        puVar6 = puVar2;
      }
      pbVar14 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar14 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar9 < '\0') {
        if ((sVar3 == 0) || (iVar10 = _memcmp(puVar6,pbVar14,sVar3), iVar10 == 0))
        goto LAB_10027d278;
      }
      else {
        if (sVar3 == 0) {
LAB_10027d278:
          thunk_FUN_1001cd434(&local_128);
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TITLE",0);
          thunk_FUN_1004e439c(&local_160,uVar11);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 0;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          uVar11 = FUN_1004e0150("MENU_FRIENDS_INVITE_USER_TEAM_DIALOG_TEXT",0);
          thunk_FUN_1004e439c(auStack_170,uVar11);
          FUN_1004e3120(&local_160,"[PLAYER_NAME]");
          uVar11 = FUN_100655b6c(*plVar1 + 0x330);
          FUN_1004e3bc4(auStack_170,0,&local_160,uVar11);
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          thunk_FUN_1004e439c(&local_160,auStack_170);
          FUN_10003330c(&local_150,&DAT_101d91198);
          local_138 = 1;
          local_134 = 0x41a00000;
          FUN_10003c048(auStack_120,&local_160);
          if (local_139 < '\0') {
            operator_delete((void *)CONCAT17(cStack_149,local_150));
          }
          if (local_158 != (void *)0x0) {
            operator_delete__(local_158);
          }
          pcStack_108 = thunk_FUN_10027d4ac;
          local_110 = param_1;
          uVar11 = FUN_1004e0150("GENERIC_DIALOG_OKAY",0);
          FUN_1000153b4(&local_d8,uVar11);
          local_f8 = param_1 + 0xae48;
          local_98 = 0x3f400000;
          iVar10 = FUN_100126c88();
          local_94 = 0x44160000;
          if (iVar10 == 0) {
            local_94 = 0x43e10000;
          }
          FUN_10001549c(&local_160,"userTeamInvite");
          FUN_1001cefb8(param_1 + 0x122a0,&local_160,&local_128);
          if (cStack_149 < '\0') {
            operator_delete(local_160);
          }
          if (local_168 != (void *)0x0) {
            operator_delete__(local_168);
          }
          local_128 = &PTR_FUN_1014666e0;
          if (local_b1 < '\0') {
            operator_delete(local_c8);
          }
          if (local_d0 != (void *)0x0) {
            operator_delete__(local_d0);
            local_d8 = 0;
            local_d0 = (void *)0x0;
          }
          FUN_10003c1ec(auStack_120,1);
          return;
        }
        if ((uint)*pbVar14 == ((uint)(void *)*puVar2 & 0xff)) {
          pbVar13 = (byte *)(lVar15 + 0x3d51);
          uVar12 = uVar16;
          do {
            uVar12 = uVar12 - 1;
            pbVar14 = pbVar14 + 1;
            if (uVar12 == 0) goto LAB_10027d278;
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          } while (bVar7 == *pbVar14);
        }
      }
    }
  }
  if (-1 < (char)bVar9) {
    sVar17 = uVar16;
  }
  if (-1 < (char)bVar8) {
    sVar5 = (ulong)bVar8;
  }
  if (sVar17 == sVar5) {
    puVar6 = (undefined8 *)*puVar2;
    if (-1 < (char)bVar9) {
      puVar6 = puVar2;
    }
    pbVar14 = DAT_101d91198;
    if (-1 < (char)bVar8) {
      pbVar14 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar9 < '\0') {
      if (sVar17 == 0) {
        return;
      }
      iVar10 = _memcmp(puVar6,pbVar14,sVar17);
      if (iVar10 == 0) {
        return;
      }
    }
    else {
      if (sVar17 == 0) {
        return;
      }
      if ((uint)*pbVar14 == ((uint)(undefined8 *)*puVar2 & 0xff)) {
        pbVar13 = (byte *)(lVar15 + 0x3d51);
        do {
          uVar16 = uVar16 - 1;
          pbVar14 = pbVar14 + 1;
          if (uVar16 == 0) {
            return;
          }
          bVar8 = *pbVar13;
          pbVar13 = pbVar13 + 1;
        } while (bVar8 == *pbVar14);
      }
    }
  }
  uVar11 = FUN_10015d3ec();
  FUN_1001635bc(uVar11,*plVar1 + 0x3d50,1);
  uVar11 = FUN_100644a94("EVENT_FRIENDS_LIST_QUERYING_USERTEAM");
  FUN_100644aec(&local_128,uVar11,0);
  FUN_100644c34(param_1,&local_128,1);
  return;
}




void thunk_FUN_10027d4ac(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  void *pvVar11;
  
  lVar7 = *(long *)(param_1 + 0x11ff0);
  if (lVar7 != 0) {
    bVar4 = *(byte *)(lVar7 + 0x3d67);
    uVar9 = (ulong)bVar4;
    sVar1 = *(size_t *)(lVar7 + 0x3d58);
    if (-1 < (char)bVar4) {
      sVar1 = uVar9;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar11 = *(void **)(lVar7 + 0x3d50);
      puVar3 = pvVar11;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar7 + 0x3d50);
      }
      pbVar10 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar10 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 != 0)) {
          return;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar10 != ((uint)pvVar11 & 0xff)) {
          return;
        }
        pbVar8 = (byte *)(lVar7 + 0x3d51);
        while( true ) {
          uVar9 = uVar9 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar9 == 0) break;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (bVar4 != *pbVar10) {
            return;
          }
        }
      }
      if (*(char *)(param_1 + 0x125b1) != '\0') {
        uVar6 = FUN_10015d3ec();
        FUN_100167940(uVar6,*(long *)(param_1 + 0x11ff0) + 0x3d70);
        return;
      }
    }
  }
  return;
}




void FUN_10027d4ac(long param_1)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  void *pvVar11;
  
  lVar7 = *(long *)(param_1 + 0x11ff0);
  if (lVar7 != 0) {
    bVar4 = *(byte *)(lVar7 + 0x3d67);
    uVar9 = (ulong)bVar4;
    sVar1 = *(size_t *)(lVar7 + 0x3d58);
    if (-1 < (char)bVar4) {
      sVar1 = uVar9;
    }
    sVar2 = DAT_101d911a0;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      sVar2 = (ulong)DAT_101d911a8._7_1_;
    }
    if (sVar1 == sVar2) {
      pvVar11 = *(void **)(lVar7 + 0x3d50);
      puVar3 = pvVar11;
      if (-1 < (char)bVar4) {
        puVar3 = (undefined8 *)(lVar7 + 0x3d50);
      }
      pbVar10 = DAT_101d91198;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        pbVar10 = (byte *)&DAT_101d91198;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 != 0) && (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 != 0)) {
          return;
        }
      }
      else if (sVar1 != 0) {
        if ((uint)*pbVar10 != ((uint)pvVar11 & 0xff)) {
          return;
        }
        pbVar8 = (byte *)(lVar7 + 0x3d51);
        while( true ) {
          uVar9 = uVar9 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar9 == 0) break;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
          if (bVar4 != *pbVar10) {
            return;
          }
        }
      }
      if (*(char *)(param_1 + 0x125b1) != '\0') {
        uVar6 = FUN_10015d3ec();
        FUN_100167940(uVar6,*(long *)(param_1 + 0x11ff0) + 0x3d70);
        return;
      }
    }
  }
  return;
}




void FUN_10027d5a8(long param_1,undefined8 param_2,uint param_3)

{
  char *pcVar1;
  byte bVar2;
  long lVar3;
  
  if (6 < param_3) goto LAB_10027d734;
  switch(param_3) {
  case 0:
    bVar2 = *(byte *)(param_1 + 0x125a8);
    *(byte *)(param_1 + 0x125a8) = bVar2 ^ 1;
    lVar3 = 0x4da0;
    break;
  case 1:
    bVar2 = *(byte *)(param_1 + 0x125a9);
    *(byte *)(param_1 + 0x125a9) = bVar2 ^ 1;
    pcVar1 = "arrow_down";
    if (bVar2 != 0) {
      pcVar1 = "arrow_right";
    }
    FUN_100652cdc(param_1 + 0x58a0,pcVar1);
    *(undefined1 *)(param_1 + 0x125aa) = 1;
    goto LAB_10027d734;
  case 2:
    bVar2 = *(byte *)(param_1 + 0x125ab);
    *(byte *)(param_1 + 0x125ab) = bVar2 ^ 1;
    lVar3 = 0x63a0;
    break;
  case 3:
    bVar2 = *(byte *)(param_1 + 0x125ae);
    *(byte *)(param_1 + 0x125ae) = bVar2 ^ 1;
    lVar3 = 0x6ea0;
    break;
  case 4:
    bVar2 = *(byte *)(param_1 + 0x125af);
    *(byte *)(param_1 + 0x125af) = bVar2 ^ 1;
    pcVar1 = "arrow_down";
    if (bVar2 != 0) {
      pcVar1 = "arrow_right";
    }
    FUN_100652cdc(param_1 + 0x8fa0,pcVar1);
    FUN_100111808(*(char *)(param_1 + 0x125af) == '\0');
    if (*(char *)(param_1 + 0x125af) != '\0') {
      FUN_1001117cc(0);
    }
    lVar3 = FUN_10015d3ec();
    FUN_100169cec(lVar3 + 0x18);
    if ((*(char *)(param_1 + 0x125af) != '\0') && (*(int *)(param_1 + 0x11fb0) == 0)) {
      FUN_1001c0e10(param_1 + 0x90c0);
      *(uint *)(param_1 + 0x9144) = *(uint *)(param_1 + 0x9144) | 4;
    }
    goto LAB_10027d734;
  case 5:
    bVar2 = *(byte *)(param_1 + 0x125ac);
    *(byte *)(param_1 + 0x125ac) = bVar2 ^ 1;
    lVar3 = 0x79a0;
    break;
  case 6:
    bVar2 = *(byte *)(param_1 + 0x125ad);
    *(byte *)(param_1 + 0x125ad) = bVar2 ^ 1;
    lVar3 = 0x84a0;
  }
  pcVar1 = "arrow_down";
  if (bVar2 != 0) {
    pcVar1 = "arrow_right";
  }
  FUN_100652cdc(param_1 + lVar3,pcVar1);
LAB_10027d734:
  FUN_100270dec(param_1);
  return;
}




void FUN_10027d744(long param_1)

{
  string *psVar1;
  string *this;
  
  psVar1 = (string *)FUN_10018e8a8(param_1 + 0xb568);
  this = (string *)FUN_10032ae04();
  std::string::operator=(this,psVar1);
  FUN_10032b458();
  return;
}




void FUN_10027d778(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_10015d3ec();
  iVar1 = FUN_10016680c(uVar2,0);
  if (iVar1 != 0) {
    uVar2 = FUN_10015d3ec();
    FUN_100166750(uVar2,0);
    uVar2 = FUN_1004e0150("MENU_FRIENDS_BROADCAST_SENT_TOASTIE",0);
    FUN_1001e55b0(0x3fe66666,uVar2,0,0);
    return;
  }
  return;
}




void FUN_10027d7cc(long param_1,undefined8 param_2,uint param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  
  if ((-1 < (int)param_3) && (param_3 < *(uint *)(param_1 + 0x124b0))) {
    FUN_1001876ec(param_1 + 0xde98);
    uVar5 = (ulong)param_3;
    lVar3 = *(long *)(param_1 + 0x124b8);
    if (*(int *)(lVar3 + uVar5 * 0x50 + 0x38) != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
        lVar4 = *(long *)(lVar3 + uVar5 * 0x50 + 0x40);
        lVar3 = lVar4 + lVar6;
        if (*(char *)(lVar3 + 0xef) < '\0') {
          lVar2 = *(long *)(lVar3 + 0xd8);
        }
        else {
          lVar2 = lVar3 + 0xd8;
        }
        lVar4 = lVar4 + lVar6;
        FUN_100187144(param_1 + 0xde98,lVar3 + 0xb8,lVar3 + 200,lVar2,*(undefined1 *)(lVar4 + 0xf0),
                      *(undefined1 *)(lVar4 + 0xf1));
        uVar7 = uVar7 + 1;
        lVar3 = *(long *)(param_1 + 0x124b8);
        lVar6 = lVar6 + 0xf8;
      } while (uVar7 < *(uint *)(lVar3 + uVar5 * 0x50 + 0x38));
    }
    lVar3 = FUN_100278fd8(param_1,lVar3 + uVar5 * 0x50 + 0x20,0);
    if (lVar3 != 0) {
      FUN_100270dec(param_1);
    }
    FUN_1002795e8(param_1,lVar3,0);
  }
  uVar1 = FUN_10002f320();
  FUN_10003055c(uVar1,param_2,0);
  return;
}




void FUN_10027d8f4(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10147df40;
  if (*(char *)((long)param_1 + 0xef) < '\0') {
    operator_delete((void *)param_1[0x1b]);
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
  pvVar1 = (void *)FUN_10064e2bc(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10027d954(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_10145f300;
  param_1[0x9a] = &PTR_FUN_1014a7108;
  param_1[0xb1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xb4);
  FUN_10064e2bc(param_1 + 0x9a);
  param_1[0x7c] = &PTR_FUN_1014a7108;
  param_1[0x93] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x96);
  FUN_10064e2bc(param_1 + 0x7c);
  param_1[0x5e] = &PTR_FUN_1014a7108;
  param_1[0x75] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x78);
  FUN_10064e2bc(param_1 + 0x5e);
  FUN_10064221c(param_1 + 0x4d);
  pvVar1 = (void *)FUN_10003bec8(param_1);
  operator_delete(pvVar1);
  return;
}




void FUN_10027d9fc(uint *param_1,int param_2)

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
    if (param_2 != 0) {
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




uint * FUN_10027db20(uint *param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = (ulong)*param_1;
  if (*param_1 != 0) {
    uVar2 = 0;
    lVar3 = 4;
    do {
      if (*(int *)(*(long *)(param_1 + 2) + lVar3) != -1) {
        FUN_10027dba4(param_1);
        uVar1 = (ulong)*param_1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (uVar2 < uVar1);
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 8));
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (*(void **)(param_1 + 2) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 2));
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}




void FUN_10027dba4(long param_1,uint param_2)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x20);
  uVar3 = (ulong)param_2;
  puVar4 = (undefined8 *)(lVar2 + (ulong)param_2 * 0x38);
  pvVar1 = (void *)puVar4[6];
  if (pvVar1 != (void *)0x0) {
    lVar5 = lVar2 + uVar3 * 0x38;
    operator_delete__(pvVar1);
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined8 *)(lVar5 + 0x30) = 0;
  }
  pvVar1 = *(void **)(lVar2 + uVar3 * 0x38 + 0x20);
  if (pvVar1 != (void *)0x0) {
    lVar5 = lVar2 + uVar3 * 0x38;
    operator_delete__(pvVar1);
    *(undefined8 *)(lVar5 + 0x18) = 0;
    *(undefined8 *)(lVar5 + 0x20) = 0;
  }
  if (*(char *)(lVar2 + uVar3 * 0x38 + 0x17) < '\0') {
    operator_delete((void *)*puVar4);
  }
  *(undefined4 *)(lVar2 + uVar3 * 0x38) = *(undefined4 *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = param_2;
  return;
}




void FUN_10027dc48(uint *param_1,string *param_2,string *param_3)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  string *psVar5;
  string *psVar6;
  
  iVar2 = (int)((ulong)((long)param_3 - (long)param_2) >> 3);
  uVar3 = (ulong)*param_1;
  if (*param_1 != iVar2 * -0x3b13b13b) {
    lVar4 = *(long *)(param_1 + 2);
    psVar6 = (string *)(lVar4 + uVar3 * 0x68);
    lVar1 = (long)psVar6 - (long)param_3;
    psVar5 = param_2;
    if (lVar1 != 0) {
      do {
        std::string::operator=(psVar5,param_3);
        std::string::operator=(psVar5 + 0x18,param_3 + 0x18);
        std::string::operator=(psVar5 + 0x30,param_3 + 0x30);
        std::string::operator=(psVar5 + 0x48,param_3 + 0x48);
        *(undefined2 *)(psVar5 + 0x60) = *(undefined2 *)(param_3 + 0x60);
        param_3 = param_3 + 0x68;
        psVar5 = psVar5 + 0x68;
      } while (param_3 != psVar6);
      uVar3 = (ulong)*param_1;
      lVar4 = *(long *)(param_1 + 2);
    }
    param_2 = param_2 + ((lVar1 >> 3) * 0xc4ec4ec5 & 0xffffffffU) * 0x68;
    psVar5 = (string *)(lVar4 + uVar3 * 0x68);
    if (param_2 != psVar5) {
      do {
        if ((char)param_2[0x5f] < '\0') {
          operator_delete(*(void **)(param_2 + 0x48));
        }
        if ((char)param_2[0x47] < '\0') {
          operator_delete(*(void **)(param_2 + 0x30));
        }
        if ((char)param_2[0x2f] < '\0') {
          operator_delete(*(void **)(param_2 + 0x18));
        }
        if ((char)param_2[0x17] < '\0') {
          operator_delete(*(void **)param_2);
        }
        param_2 = param_2 + 0x68;
      } while (param_2 != psVar5);
      uVar3 = (ulong)*param_1;
    }
    *param_1 = (int)uVar3 + iVar2 * 0x3b13b13b;
    return;
  }
  FUN_10027da74(param_1,1);
  return;
}




void FUN_10027def4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 * 0xf8);
    puVar4 = *(undefined8 **)(param_1 + 2);
    uVar2 = *param_1;
    if (uVar2 == 0) {
      param_1[1] = param_2;
    }
    else {
      lVar5 = 0;
      do {
        puVar1 = (undefined8 *)((long)pvVar3 + lVar5);
        *puVar1 = &PTR_FUN_1014a5658;
        FUN_10027e070(puVar1 + 1,(long)puVar4 + lVar5 + 8);
        puVar1[3] = *(undefined8 *)((long)puVar4 + lVar5 + 0x18);
        uVar7 = *(undefined8 *)((long)puVar4 + lVar5 + 0x28);
        uVar6 = *(undefined8 *)((long)puVar4 + lVar5 + 0x20);
        uVar8 = *(undefined8 *)((long)puVar4 + lVar5 + 0x30);
        uVar10 = *(undefined8 *)((long)puVar4 + lVar5 + 0x48);
        uVar9 = *(undefined8 *)((long)puVar4 + lVar5 + 0x40);
        puVar1[7] = *(undefined8 *)((long)puVar4 + lVar5 + 0x38);
        puVar1[6] = uVar8;
        puVar1[9] = uVar10;
        puVar1[8] = uVar9;
        puVar1[5] = uVar7;
        puVar1[4] = uVar6;
        uVar7 = *(undefined8 *)((long)puVar4 + lVar5 + 0x58);
        uVar6 = *(undefined8 *)((long)puVar4 + lVar5 + 0x50);
        uVar9 = *(undefined8 *)((long)puVar4 + lVar5 + 0x68);
        uVar8 = *(undefined8 *)((long)puVar4 + lVar5 + 0x60);
        uVar11 = *(undefined8 *)((long)puVar4 + lVar5 + 0x78);
        uVar10 = *(undefined8 *)((long)puVar4 + lVar5 + 0x70);
        puVar1[0x10] = *(undefined8 *)((long)puVar4 + lVar5 + 0x80);
        puVar1[0xd] = uVar9;
        puVar1[0xc] = uVar8;
        puVar1[0xf] = uVar11;
        puVar1[0xe] = uVar10;
        puVar1[0xb] = uVar7;
        puVar1[10] = uVar6;
        uVar7 = *(undefined8 *)((long)puVar4 + lVar5 + 0x90);
        uVar6 = *(undefined8 *)((long)puVar4 + lVar5 + 0x88);
        uVar9 = *(undefined8 *)((long)puVar4 + lVar5 + 0xa0);
        uVar8 = *(undefined8 *)((long)puVar4 + lVar5 + 0x98);
        uVar10 = *(undefined8 *)((long)puVar4 + lVar5 + 0xa5);
        *(undefined8 *)((long)puVar1 + 0xad) = *(undefined8 *)((long)puVar4 + lVar5 + 0xad);
        *(undefined8 *)((long)puVar1 + 0xa5) = uVar10;
        puVar1[0x14] = uVar9;
        puVar1[0x13] = uVar8;
        puVar1[0x12] = uVar7;
        puVar1[0x11] = uVar6;
        *puVar1 = &PTR_FUN_10147df40;
        thunk_FUN_1004e439c(puVar1 + 0x17,(long)puVar4 + lVar5 + 0xb8);
        thunk_FUN_1004e439c(puVar1 + 0x19,(long)puVar4 + lVar5 + 200);
        FUN_10003330c(puVar1 + 0x1b,(long)puVar4 + lVar5 + 0xd8);
        *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)((long)puVar4 + lVar5 + 0xf0);
        lVar5 = lVar5 + 0xf8;
      } while ((ulong)uVar2 * 0xf8 - lVar5 != 0);
      puVar4 = *(undefined8 **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar5 = (ulong)*param_1 * 0xf8;
        do {
          (**(code **)*puVar4)(puVar4);
          lVar5 = lVar5 + -0xf8;
          puVar4 = puVar4 + 0x1f;
        } while (lVar5 != 0);
        puVar4 = *(undefined8 **)(param_1 + 2);
      }
    }
    if (puVar4 != (undefined8 *)0x0) {
      operator_delete__(puVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




uint * FUN_10027e070(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_1000155d8(param_1,*param_2);
  if (*param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(param_2 + 2);
    lVar4 = (ulong)*param_2 * 0x30;
    puVar3 = *(undefined8 **)(param_1 + 2);
    do {
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      uVar7 = puVar2[2];
      uVar9 = puVar2[5];
      uVar8 = puVar2[4];
      puVar3[3] = puVar2[3];
      puVar3[2] = uVar7;
      puVar3[5] = uVar9;
      puVar3[4] = uVar8;
      puVar3[1] = uVar6;
      *puVar3 = uVar5;
      puVar2 = puVar2 + 6;
      lVar4 = lVar4 + -0x30;
      puVar3 = puVar3 + 6;
    } while (lVar4 != 0);
    uVar1 = *param_2;
  }
  *param_1 = uVar1;
  return param_1;
}




ulong FUN_10027e0e4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_70 [56];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = (ulong)*(uint *)(param_1 + 0x28);
  if (*(uint *)(param_1 + 0x28) == 0xffffffff) {
    FUN_10027e1ac(param_1 + 0x18,auStack_70);
    uVar2 = (ulong)(*(int *)(param_1 + 0x18) - 1);
    lVar1 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(lVar1 + uVar2 * 0x38);
  }
  lVar1 = lVar1 + uVar2 * 0x38;
  FUN_10003330c(lVar1,param_2);
  thunk_FUN_1004e439c(lVar1 + 0x18,param_2 + 0x18);
  thunk_FUN_1004e439c(lVar1 + 0x28,param_2 + 0x28);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10027e1ac(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_10027e244(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  uVar6 = param_2[1];
  uVar5 = *param_2;
  uVar8 = param_2[3];
  uVar7 = param_2[2];
  uVar10 = param_2[5];
  uVar9 = param_2[4];
  *(undefined8 *)(lVar4 + -8) = param_2[6];
  *(undefined8 *)(lVar4 + -0x10) = uVar10;
  *(undefined8 *)(lVar4 + -0x18) = uVar9;
  *(undefined8 *)(lVar4 + -0x20) = uVar8;
  *(undefined8 *)(lVar4 + -0x28) = uVar7;
  *(undefined8 *)(lVar4 + -0x30) = uVar6;
  *(undefined8 *)(lVar4 + -0x38) = uVar5;
  return;
}




void FUN_10027e244(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 * 0x38);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 * 0x38;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        uVar7 = puVar5[1];
        uVar6 = *puVar5;
        uVar9 = puVar5[3];
        uVar8 = puVar5[2];
        uVar11 = puVar5[5];
        uVar10 = puVar5[4];
        puVar4[6] = puVar5[6];
        puVar4[3] = uVar9;
        puVar4[2] = uVar8;
        puVar4[5] = uVar11;
        puVar4[4] = uVar10;
        puVar4[1] = uVar7;
        *puVar4 = uVar6;
        puVar5 = puVar5 + 7;
        lVar3 = lVar3 + -0x38;
        puVar4 = puVar4 + 7;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




void FUN_10027e2d8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




uint * FUN_10027e474(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10027def4(param_1,*param_2);
  uVar3 = *param_2;
  uVar4 = 0;
  if (uVar3 != 0) {
    lVar5 = 0;
    lVar6 = *(long *)(param_2 + 2);
    lVar7 = *(long *)(param_1 + 2);
    do {
      puVar1 = (undefined8 *)(lVar7 + lVar5);
      *puVar1 = &PTR_FUN_1014a5658;
      lVar2 = lVar6 + lVar5;
      FUN_10027e070(puVar1 + 1,lVar2 + 8);
      puVar1[3] = *(undefined8 *)(lVar2 + 0x18);
      *puVar1 = &PTR_FUN_1014a5530;
      uVar9 = *(undefined8 *)(lVar2 + 0x28);
      uVar8 = *(undefined8 *)(lVar2 + 0x20);
      uVar10 = *(undefined8 *)(lVar2 + 0x30);
      uVar12 = *(undefined8 *)(lVar2 + 0x48);
      uVar11 = *(undefined8 *)(lVar2 + 0x40);
      puVar1[7] = *(undefined8 *)(lVar2 + 0x38);
      puVar1[6] = uVar10;
      puVar1[9] = uVar12;
      puVar1[8] = uVar11;
      puVar1[5] = uVar9;
      puVar1[4] = uVar8;
      uVar9 = *(undefined8 *)(lVar2 + 0x58);
      uVar8 = *(undefined8 *)(lVar2 + 0x50);
      uVar11 = *(undefined8 *)(lVar2 + 0x68);
      uVar10 = *(undefined8 *)(lVar2 + 0x60);
      uVar13 = *(undefined8 *)(lVar2 + 0x78);
      uVar12 = *(undefined8 *)(lVar2 + 0x70);
      puVar1[0x10] = *(undefined8 *)(lVar2 + 0x80);
      puVar1[0xd] = uVar11;
      puVar1[0xc] = uVar10;
      puVar1[0xf] = uVar13;
      puVar1[0xe] = uVar12;
      puVar1[0xb] = uVar9;
      puVar1[10] = uVar8;
      *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a5ca0;
      uVar9 = *(undefined8 *)(lVar2 + 0x90);
      uVar8 = *(undefined8 *)(lVar2 + 0x88);
      uVar11 = *(undefined8 *)(lVar2 + 0xa0);
      uVar10 = *(undefined8 *)(lVar2 + 0x98);
      uVar12 = *(undefined8 *)(lVar2 + 0xa5);
      *(undefined8 *)((long)puVar1 + 0xad) = *(undefined8 *)(lVar2 + 0xad);
      *(undefined8 *)((long)puVar1 + 0xa5) = uVar12;
      puVar1[0x14] = uVar11;
      puVar1[0x13] = uVar10;
      puVar1[0x12] = uVar9;
      puVar1[0x11] = uVar8;
      *puVar1 = &PTR_FUN_10147df40;
      thunk_FUN_1004e439c(puVar1 + 0x17,lVar2 + 0xb8);
      thunk_FUN_1004e439c(puVar1 + 0x19,lVar2 + 200);
      FUN_10003330c(puVar1 + 0x1b,lVar2 + 0xd8);
      *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)(lVar2 + 0xf0);
      lVar5 = lVar5 + 0xf8;
    } while ((ulong)uVar3 * 0xf8 - lVar5 != 0);
    uVar4 = *param_2;
  }
  *param_1 = uVar4;
  return param_1;
}




void FUN_10027e724(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  if (param_1 != param_2) {
    FUN_10027d9fc(param_1,1);
    FUN_10027def4(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        puVar1 = (undefined8 *)(lVar7 + lVar5);
        *puVar1 = &PTR_FUN_1014a5658;
        lVar2 = lVar6 + lVar5;
        FUN_10027e070(puVar1 + 1,lVar2 + 8);
        puVar1[3] = *(undefined8 *)(lVar2 + 0x18);
        *puVar1 = &PTR_FUN_1014a5530;
        uVar9 = *(undefined8 *)(lVar2 + 0x28);
        uVar8 = *(undefined8 *)(lVar2 + 0x20);
        uVar10 = *(undefined8 *)(lVar2 + 0x30);
        uVar12 = *(undefined8 *)(lVar2 + 0x48);
        uVar11 = *(undefined8 *)(lVar2 + 0x40);
        puVar1[7] = *(undefined8 *)(lVar2 + 0x38);
        puVar1[6] = uVar10;
        puVar1[9] = uVar12;
        puVar1[8] = uVar11;
        puVar1[5] = uVar9;
        puVar1[4] = uVar8;
        uVar9 = *(undefined8 *)(lVar2 + 0x58);
        uVar8 = *(undefined8 *)(lVar2 + 0x50);
        uVar11 = *(undefined8 *)(lVar2 + 0x68);
        uVar10 = *(undefined8 *)(lVar2 + 0x60);
        uVar13 = *(undefined8 *)(lVar2 + 0x78);
        uVar12 = *(undefined8 *)(lVar2 + 0x70);
        puVar1[0x10] = *(undefined8 *)(lVar2 + 0x80);
        puVar1[0xd] = uVar11;
        puVar1[0xc] = uVar10;
        puVar1[0xf] = uVar13;
        puVar1[0xe] = uVar12;
        puVar1[0xb] = uVar9;
        puVar1[10] = uVar8;
        *puVar1 = &PTR_thunk_FUN_10064e2bc_1014a5ca0;
        uVar9 = *(undefined8 *)(lVar2 + 0x90);
        uVar8 = *(undefined8 *)(lVar2 + 0x88);
        uVar11 = *(undefined8 *)(lVar2 + 0xa0);
        uVar10 = *(undefined8 *)(lVar2 + 0x98);
        uVar12 = *(undefined8 *)(lVar2 + 0xa5);
        *(undefined8 *)((long)puVar1 + 0xad) = *(undefined8 *)(lVar2 + 0xad);
        *(undefined8 *)((long)puVar1 + 0xa5) = uVar12;
        puVar1[0x14] = uVar11;
        puVar1[0x13] = uVar10;
        puVar1[0x12] = uVar9;
        puVar1[0x11] = uVar8;
        *puVar1 = &PTR_FUN_10147df40;
        thunk_FUN_1004e439c(puVar1 + 0x17,lVar2 + 0xb8);
        thunk_FUN_1004e439c(puVar1 + 0x19,lVar2 + 200);
        FUN_10003330c(puVar1 + 0x1b,lVar2 + 0xd8);
        *(undefined2 *)(puVar1 + 0x1e) = *(undefined2 *)(lVar2 + 0xf0);
        lVar5 = lVar5 + 0xf8;
      } while ((ulong)uVar3 * 0xf8 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




long * FUN_10027e884(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long *plVar40;
  undefined **ppuVar41;
  undefined **ppuVar42;
  undefined4 uVar43;
  int iVar44;
  long lVar45;
  undefined8 uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  undefined8 local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  
  plVar2 = param_1 + 0xf267;
  plVar3 = param_1 + 0xf22a;
  plVar4 = param_1 + 0xef55;
  plVar5 = param_1 + 0xef18;
  plVar6 = param_1 + 0xe6e2;
  plVar7 = param_1 + 0xd2d5;
  plVar8 = param_1 + 0xd226;
  plVar9 = param_1 + 0xd15d;
  plVar10 = param_1 + 0xc99c;
  puVar11 = (uint *)((long)param_1 + 0x64afc);
  lVar45 = FUN_10026d1f4();
  FUN_10014f4a0(lVar45 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100280618_10147e408;
  param_1[0x6d] = (long)&PTR_FUN_10147e5c8;
  thunk_FUN_10023b4b8();
  plVar12 = param_1 + 0xc938;
  FUN_10064e264();
  plVar13 = param_1 + 0xc94f;
  thunk_FUN_100652c08();
  thunk_FUN_1001f0830(param_1 + 0xc96d);
  FUN_10064e264(param_1 + 0xc985);
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0xc9ad] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0xc9be);
  param_1[0xc9be] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0xc9cf);
  thunk_FUN_100181304(param_1 + 0xc9f5,0);
  thunk_FUN_100652c08(param_1 + 0xccac);
  thunk_FUN_100652c08(param_1 + 0xccca);
  thunk_FUN_100650e64(param_1 + 0xcce8);
  thunk_FUN_100652c08(param_1 + 0xcd0e);
  FUN_10064e264(param_1 + 0xcd2c);
  FUN_10053077c(param_1 + 0xcd43,0);
  thunk_FUN_100652c08(param_1 + 0xcdea);
  param_1[0xce09] = 0;
  param_1[0xce08] = 0;
  FUN_100284d7c(param_1 + 0xce0a);
  FUN_1006421a8(plVar9);
  *plVar9 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0xd16e;
  FUN_1006421a8();
  param_1[0xd16e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0xd17f;
  FUN_10053077c(plVar14,0);
  FUN_1006421a8(plVar8);
  *plVar8 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar15 = param_1 + 0xd237;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0xd255;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xd273;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xd299;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xd2b7;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar7);
  *plVar7 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar20 = param_1 + 0xd2e6;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0xd332;
  thunk_FUN_100184f78();
  plVar22 = param_1 + 0xd6d0;
  thunk_FUN_100184f78();
  plVar23 = param_1 + 0xda6e;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar24 = param_1 + 0xdaba;
  thunk_FUN_100184f78();
  plVar25 = param_1 + 0xde58;
  thunk_FUN_100184f78();
  plVar26 = param_1 + 0xe1f6;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar27 = param_1 + 0xe242;
  thunk_FUN_100184f78();
  plVar28 = param_1 + 0xe5e0;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar29 = param_1 + 0xe62c;
  FUN_10064e264(plVar29);
  plVar30 = param_1 + 0xe643;
  thunk_FUN_100652c08();
  plVar31 = param_1 + 0xe661;
  thunk_FUN_100650e64();
  plVar32 = param_1 + 0xe687;
  FUN_10064e264(plVar32);
  plVar33 = param_1 + 0xe69e;
  thunk_FUN_100652c08();
  plVar34 = param_1 + 0xe6bc;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar6);
  *plVar6 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar35 = param_1 + 0xe6f3;
  thunk_FUN_100181304(plVar35,0);
  plVar36 = param_1 + 0xe9aa;
  thunk_FUN_100181304(plVar36,0);
  plVar37 = param_1 + 0xec61;
  thunk_FUN_100181304(plVar37,0);
  FUN_10064e264(plVar5);
  plVar38 = param_1 + 0xef2f;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar4);
  plVar39 = param_1 + 0xef73;
  thunk_FUN_100181304(plVar39,0);
  FUN_10064e264(plVar3);
  plVar40 = param_1 + 0xf241;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_1001c0018(param_1 + 0xf285,0);
  thunk_FUN_1001ceb64(param_1 + 0xf310,0);
  FUN_10003330c(param_1 + 0xf32e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xf331,&DAT_101d91198);
  FUN_1004e313c(param_1 + 0xf334);
  *(undefined8 *)((long)param_1 + 0x799b6) = 0;
  param_1[0xf336] = 0;
  FUN_1006423ec(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_100642bd8(plVar12,plVar10,1);
  FUN_100642bd8(plVar10,param_1 + 0xc9ad,1);
  FUN_100642bd8(param_1 + 0xc9ad,param_1[0xc96e],1);
  FUN_100642bd8(plVar12,plVar9,1);
  FUN_100642bd8(plVar9,plVar1,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar14,1);
  FUN_1005308f8(plVar14,plVar15,1);
  FUN_1005308f8(plVar14,plVar16,1);
  FUN_1005308f8(plVar14,plVar17,1);
  FUN_1005308f8(plVar14,plVar18,1);
  FUN_1005308f8(plVar14,plVar19,1);
  FUN_1005308f8(plVar14,plVar7,1);
  FUN_100642bd8(plVar7,plVar20,1);
  FUN_100642bd8(plVar7,param_1 + 0xd30c,1);
  FUN_100642bd8(plVar7,plVar21,1);
  FUN_100642bd8(plVar7,plVar22,1);
  FUN_100642bd8(plVar7,plVar23,1);
  FUN_100642bd8(plVar7,param_1 + 0xda94,1);
  FUN_100642bd8(plVar7,plVar24,1);
  FUN_100642bd8(plVar7,plVar25,1);
  FUN_100642bd8(plVar7,plVar26,1);
  FUN_100642bd8(plVar7,param_1 + 0xe21c,1);
  FUN_100642bd8(plVar7,plVar27,1);
  FUN_100642bd8(plVar7,plVar28,1);
  FUN_100642bd8(plVar7,param_1 + 0xe606,1);
  FUN_100642bd8(plVar7,plVar29,1);
  FUN_100642bd8(plVar29,plVar30,1);
  FUN_100642bd8(plVar29,plVar31,1);
  FUN_100642bd8(plVar7,plVar32,1);
  FUN_100642bd8(plVar32,plVar33,1);
  FUN_100642bd8(plVar32,plVar34,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar6,plVar35,1);
  FUN_100642bd8(plVar6,plVar36,1);
  FUN_100642bd8(plVar6,plVar37,1);
  FUN_100642bd8(plVar37,plVar5,1);
  FUN_100642bd8(plVar5,plVar4,1);
  FUN_100642bd8(plVar5,plVar38,1);
  FUN_100642bd8(plVar6,plVar39,1);
  FUN_100642bd8(plVar39,plVar3,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar3,plVar40,1);
  FUN_100642bd8(plVar12,param_1 + 0xf310,1);
  FUN_100642bd8(plVar12,param_1 + 0x70,1);
  iVar44 = FUN_100126c88();
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar47 = *puVar11;
  if ((uVar47 & 0x7f80) != 0x2600) {
    *puVar11 = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar13);
    uVar47 = *puVar11;
  }
  *puVar11 = uVar47 | 0x10;
  if ((*(uint *)((long)param_1 + 0x68bf4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100530adc(plVar14,0,1);
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar47 = *(uint *)((long)param_1 + 0x6923c);
  if ((uVar47 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6923c) = uVar47 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar15);
    uVar47 = *(uint *)((long)param_1 + 0x6923c);
  }
  *(uint *)((long)param_1 + 0x6923c) = uVar47 | 0x10;
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  fVar50 = *(float *)(param_1 + 0xd25e);
  if ((fVar50 != 1.5) || (fVar50 = *(float *)((long)param_1 + 0x692f4), fVar50 != 1.5)) {
    lVar45 = NEON_fmov(0x3fc00000,4);
    param_1[0xd25e] = lVar45;
    FUN_1000200a0(plVar16);
  }
  uVar47 = *(uint *)((long)param_1 + 0x6932c);
  if ((uVar47 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x6932c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x1980;
    FUN_1000200a0(plVar16);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar17,uVar46);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar17,*ppuVar42);
  if ((*(uint *)((long)param_1 + 0x6941c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6941c) = *(uint *)((long)param_1 + 0x6941c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar47 = *(uint *)((long)param_1 + 0x6954c);
  if ((uVar47 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x6954c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar18);
    uVar47 = *(uint *)((long)param_1 + 0x6954c);
  }
  *(uint *)((long)param_1 + 0x6954c) = uVar47 | 0x10;
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar19,&DAT_10115a164,2);
  uVar47 = *(uint *)((long)param_1 + 0x6963c);
  if ((uVar47 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x6963c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar19);
    uVar47 = *(uint *)((long)param_1 + 0x6963c);
  }
  *(uint *)((long)param_1 + 0x6963c) = uVar47 | 0x10;
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xd30c,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xda94,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xe21c,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xe606,uVar46);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar20,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x697b4);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x697b4) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar20);
  }
  FUN_1004e3120(&local_c8,"1");
  FUN_1006513c0(plVar20,&local_c8);
  if (local_c0 != (void *)0x0) {
    operator_delete__(local_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar21,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar21,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar21,1);
  FUN_100185e38(plVar21,1,3);
  FUN_100185e48(plVar21,1,0x10);
  FUN_100185e70(plVar21,0);
  uVar48 = DAT_101dbd4ac;
  local_a0 = DAT_101dbd4ac;
  local_c8 = thunk_FUN_1002841f0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xd333,&local_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar22,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar22,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar22,1);
  FUN_100185e38(plVar22,1,3);
  FUN_100185e48(plVar22,1,0x10);
  FUN_100185e70(plVar22,0);
  local_a0 = uVar48;
  local_c8 = thunk_FUN_1002841f0;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xd6d1,&local_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar23,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x6d3f4);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x6d3f4) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar23);
  }
  FUN_1004e3120(&local_c8,"2");
  FUN_1006513c0(plVar23,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar24,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar24,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar24,1);
  FUN_100185e38(plVar24,1,2);
  FUN_100185e48(plVar24,1,4);
  FUN_100185e70(plVar24,0);
  local_a0 = uVar48;
  local_c8 = thunk_FUN_10028425c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xdabb,&local_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar25,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar25,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar25,1);
  FUN_100185e38(plVar25,1,2);
  FUN_100185e48(plVar25,1,4);
  FUN_100185e70(plVar25,0);
  local_a0 = uVar48;
  local_c8 = thunk_FUN_10028425c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xde59,&local_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar26,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x71034);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x71034) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar26);
  }
  FUN_1004e3120(&local_c8,"3");
  FUN_1006513c0(plVar26,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_100185730(plVar27,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_1001afd98(plVar27,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(plVar27,0);
  FUN_1001b0734(plVar27,0);
  FUN_100185e48(plVar27,1,0x8c);
  FUN_100185e2c(plVar27,0);
  local_a0 = uVar48;
  local_c8 = thunk_FUN_1002842c8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe243,&local_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar28,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x72f84);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x72f84) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar28);
  }
  FUN_1004e3120(&local_c8,"4");
  FUN_1006513c0(plVar28,&local_c8);
  if (local_c0 != (long *)0x0) {
    operator_delete__(local_c0);
  }
  FUN_100652cac(plVar30,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  ppuVar41 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar44 == 0) {
    ppuVar41 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar31,*ppuVar42,&DAT_10115a168);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(plVar31,uVar46);
  uVar48 = FUN_1006425d0(plVar29,0,0,1,1);
  local_c8 = (code *)CONCAT44(fVar50,uVar48);
  FUN_10064e48c(plVar29,&local_c8);
  *(uint *)((long)param_1 + 0x731e4) = *(uint *)((long)param_1 + 0x731e4) | 0x10;
  uVar48 = DAT_101dbd458;
  local_a0 = DAT_101dbd458;
  local_c8 = FUN_10028033c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe62d,&local_c8);
  uVar43 = DAT_101dbd484;
  local_a0 = DAT_101dbd484;
  local_c8 = FUN_10028033c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe62d,&local_c8);
  FUN_100652cac(plVar33,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  FUN_100651594(plVar34,*ppuVar42,&DAT_10115a168);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(plVar34,uVar46);
  uVar49 = FUN_1006425d0(plVar32,0,0,1,1);
  local_c8 = (code *)CONCAT44(fVar50,uVar49);
  FUN_10064e48c(plVar32,&local_c8);
  *(uint *)((long)param_1 + 0x734bc) = *(uint *)((long)param_1 + 0x734bc) | 0x10;
  local_a0 = uVar48;
  local_c8 = FUN_10028033c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe688,&local_c8);
  local_a0 = uVar43;
  local_c8 = FUN_10028033c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe688,&local_c8);
  uVar46 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar35,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar48 = DAT_101d91884;
  local_a0 = DAT_101d91884;
  local_c8 = thunk_FUN_100284428;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe6f4,&local_c8);
  FUN_1001b4964(plVar35,1);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_RENAME_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar36,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar48;
  local_c8 = FUN_10028034c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xe9ab,&local_c8);
  FUN_1001b4c0c(plVar36,0);
  FUN_1001b4964(plVar36,1);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar37,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar48;
  local_c8 = FUN_10028034c;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 1;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xec62,&local_c8);
  FUN_100651038(param_1 + 0xed44,*ppuVar41);
  FUN_1001b495c(0x3f000000,plVar37);
  if ((*(float *)(param_1 + 0xec6b) != 0.5) || (*(float *)((long)param_1 + 0x7635c) != 0.5)) {
    param_1[0xec6b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar37);
  }
  FUN_100181b5c(0,0x41f00000,plVar37);
  FUN_100181c68(0x43133333,plVar37);
  FUN_1001b4964(plVar37,1);
  FUN_1001b4c0c(plVar37,0);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0xef5d) != 0.0) || (*(float *)((long)param_1 + 0x77aec) != 3.0)) {
    param_1[0xef5d] = 0x4040000000000000;
    FUN_1000200a0(plVar4);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_c8);
  if ((*(float *)(param_1 + 0xef5e) != 0.9) || (*(float *)((long)param_1 + 0x77af4) != 0.9)) {
    param_1[0xef5e] = 0x3f6666663f666666;
    FUN_1000200a0(plVar4);
  }
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar38,*ppuVar42);
  fVar50 = (float)FUN_100652e60(plVar4);
  fVar51 = *(float *)((long)param_1 + 0x77aec) + -3.0;
  if ((*(float *)(param_1 + 0xef37) != fVar50) || (*(float *)((long)param_1 + 0x779bc) != fVar51)) {
    *(float *)(param_1 + 0xef37) = fVar50;
    *(float *)((long)param_1 + 0x779bc) = fVar51;
    FUN_1000200a0(plVar38);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0xef2f] + 0x28))(plVar38,&local_c8);
  fVar50 = (float)FUN_1006425d0(plVar5,0,0,1,1);
  FUN_1006425d0(plVar5,0,0,1,1);
  fVar51 = fVar51 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xef20) != fVar50 * -0.5) ||
     (*(float *)((long)param_1 + 0x77904) != fVar51)) {
    *(float *)(param_1 + 0xef20) = fVar50 * -0.5;
    *(float *)((long)param_1 + 0x77904) = fVar51;
    FUN_1000200a0(plVar5);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar5 + 0x28))(plVar5,&local_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar39,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  local_a0 = uVar48;
  local_c8 = FUN_10028034c;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xef74,&local_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0xf056,*ppuVar42);
  FUN_1001b495c(0x3f000000,plVar39);
  if ((*(float *)(param_1 + 0xef7d) != 0.5) || (*(float *)((long)param_1 + 0x77bec) != 0.5)) {
    param_1[0xef7d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar39);
  }
  FUN_100181b5c(0,0x41f00000,plVar39);
  FUN_100181c68(0x43133333,plVar39);
  FUN_1001b4964(plVar39,1);
  FUN_1001b4c0c(plVar39,0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0xf26f) != 0.0) || (*(float *)((long)param_1 + 0x7937c) != 3.0)) {
    param_1[0xf26f] = 0x4040000000000000;
    FUN_1000200a0(plVar2);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_c8);
  if ((*(float *)(param_1 + 0xf270) != 0.9) || (*(float *)((long)param_1 + 0x79384) != 0.9)) {
    param_1[0xf270] = 0x3f6666663f666666;
    FUN_1000200a0(plVar2);
  }
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar40,*ppuVar42);
  fVar50 = (float)FUN_100652e60(plVar2);
  fVar51 = *(float *)((long)param_1 + 0x7937c) + -3.0;
  if ((*(float *)(param_1 + 0xf249) != fVar50) || (*(float *)((long)param_1 + 0x7924c) != fVar51)) {
    *(float *)(param_1 + 0xf249) = fVar50;
    *(float *)((long)param_1 + 0x7924c) = fVar51;
    FUN_1000200a0(plVar40);
  }
  local_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0xf241] + 0x28))(plVar40,&local_c8);
  fVar50 = (float)FUN_1006425d0(plVar3,0,0,1,1);
  FUN_1006425d0(plVar3,0,0,1,1);
  fVar51 = fVar51 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xf232) != fVar50 * -0.5) ||
     (*(float *)((long)param_1 + 0x79194) != fVar51)) {
    *(float *)(param_1 + 0xf232) = fVar50 * -0.5;
    *(float *)((long)param_1 + 0x79194) = fVar51;
    FUN_1000200a0(plVar3);
  }
  local_c8 = (code *)0x0;
  (**(code **)(*plVar3 + 0x28))(plVar3,&local_c8);
  local_a0 = DAT_101dbd460;
  local_c8 = thunk_FUN_1002847f8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xf297,&local_c8);
  local_a0 = DAT_101dbd48c;
  local_c8 = thunk_FUN_1002847f8;
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = 0;
  local_c0 = param_1;
  FUN_10001554c(param_1 + 0xf297,&local_c8);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_10023d1f0(param_1 + 0x70,0);
  FUN_100652cdc(plVar30,"checkbox_filled");
  FUN_100652cdc(plVar33,"checkbox_empty");
  *(undefined4 *)(param_1 + 0xf32d) = 0;
  FUN_100280358(param_1);
  *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xfffffffb;
  FUN_100280478(0,param_1,1,0,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}




long * thunk_FUN_10027e884(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  uint *puVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long *plVar23;
  long *plVar24;
  long *plVar25;
  long *plVar26;
  long *plVar27;
  long *plVar28;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  long *plVar35;
  long *plVar36;
  long *plVar37;
  long *plVar38;
  long *plVar39;
  long *plVar40;
  undefined **ppuVar41;
  undefined **ppuVar42;
  undefined4 uVar43;
  int iVar44;
  long lVar45;
  undefined8 uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  float fVar50;
  float fVar51;
  undefined8 uStack_c8;
  long *plStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  
  plVar2 = param_1 + 0xf267;
  plVar3 = param_1 + 0xf22a;
  plVar4 = param_1 + 0xef55;
  plVar5 = param_1 + 0xef18;
  plVar6 = param_1 + 0xe6e2;
  plVar7 = param_1 + 0xd2d5;
  plVar8 = param_1 + 0xd226;
  plVar9 = param_1 + 0xd15d;
  plVar10 = param_1 + 0xc99c;
  puVar11 = (uint *)((long)param_1 + 0x64afc);
  lVar45 = FUN_10026d1f4();
  FUN_10014f4a0(lVar45 + 0x368);
  *param_1 = (long)&PTR_thunk_FUN_100280618_10147e408;
  param_1[0x6d] = (long)&PTR_FUN_10147e5c8;
  thunk_FUN_10023b4b8();
  plVar12 = param_1 + 0xc938;
  FUN_10064e264();
  plVar13 = param_1 + 0xc94f;
  thunk_FUN_100652c08();
  thunk_FUN_1001f0830(param_1 + 0xc96d);
  FUN_10064e264(param_1 + 0xc985);
  FUN_1006421a8(plVar10);
  *plVar10 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0xc9ad] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8(param_1 + 0xc9be);
  param_1[0xc9be] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_100650e64(param_1 + 0xc9cf);
  thunk_FUN_100181304(param_1 + 0xc9f5,0);
  thunk_FUN_100652c08(param_1 + 0xccac);
  thunk_FUN_100652c08(param_1 + 0xccca);
  thunk_FUN_100650e64(param_1 + 0xcce8);
  thunk_FUN_100652c08(param_1 + 0xcd0e);
  FUN_10064e264(param_1 + 0xcd2c);
  FUN_10053077c(param_1 + 0xcd43,0);
  thunk_FUN_100652c08(param_1 + 0xcdea);
  param_1[0xce09] = 0;
  param_1[0xce08] = 0;
  FUN_100284d7c(param_1 + 0xce0a);
  FUN_1006421a8(plVar9);
  *plVar9 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar1 = param_1 + 0xd16e;
  FUN_1006421a8();
  param_1[0xd16e] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar14 = param_1 + 0xd17f;
  FUN_10053077c(plVar14,0);
  FUN_1006421a8(plVar8);
  *plVar8 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar15 = param_1 + 0xd237;
  thunk_FUN_100652c08();
  plVar16 = param_1 + 0xd255;
  thunk_FUN_100652c08();
  plVar17 = param_1 + 0xd273;
  thunk_FUN_100650e64();
  plVar18 = param_1 + 0xd299;
  thunk_FUN_100652c08();
  plVar19 = param_1 + 0xd2b7;
  thunk_FUN_100652c08();
  FUN_1006421a8(plVar7);
  *plVar7 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar20 = param_1 + 0xd2e6;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar21 = param_1 + 0xd332;
  thunk_FUN_100184f78();
  plVar22 = param_1 + 0xd6d0;
  thunk_FUN_100184f78();
  plVar23 = param_1 + 0xda6e;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar24 = param_1 + 0xdaba;
  thunk_FUN_100184f78();
  plVar25 = param_1 + 0xde58;
  thunk_FUN_100184f78();
  plVar26 = param_1 + 0xe1f6;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar27 = param_1 + 0xe242;
  thunk_FUN_100184f78();
  plVar28 = param_1 + 0xe5e0;
  thunk_FUN_100650e64();
  thunk_FUN_100650e64();
  plVar29 = param_1 + 0xe62c;
  FUN_10064e264(plVar29);
  plVar30 = param_1 + 0xe643;
  thunk_FUN_100652c08();
  plVar31 = param_1 + 0xe661;
  thunk_FUN_100650e64();
  plVar32 = param_1 + 0xe687;
  FUN_10064e264(plVar32);
  plVar33 = param_1 + 0xe69e;
  thunk_FUN_100652c08();
  plVar34 = param_1 + 0xe6bc;
  thunk_FUN_100650e64();
  FUN_1006421a8(plVar6);
  *plVar6 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar35 = param_1 + 0xe6f3;
  thunk_FUN_100181304(plVar35,0);
  plVar36 = param_1 + 0xe9aa;
  thunk_FUN_100181304(plVar36,0);
  plVar37 = param_1 + 0xec61;
  thunk_FUN_100181304(plVar37,0);
  FUN_10064e264(plVar5);
  plVar38 = param_1 + 0xef2f;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar4);
  plVar39 = param_1 + 0xef73;
  thunk_FUN_100181304(plVar39,0);
  FUN_10064e264(plVar3);
  plVar40 = param_1 + 0xf241;
  thunk_FUN_100650e64();
  thunk_FUN_100652c08(plVar2);
  thunk_FUN_1001c0018(param_1 + 0xf285,0);
  thunk_FUN_1001ceb64(param_1 + 0xf310,0);
  FUN_10003330c(param_1 + 0xf32e,&DAT_101d91198);
  FUN_10003330c(param_1 + 0xf331,&DAT_101d91198);
  FUN_1004e313c(param_1 + 0xf334);
  *(undefined8 *)((long)param_1 + 0x799b6) = 0;
  param_1[0xf336] = 0;
  FUN_1006423ec(param_1 + 0x30,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar12,1);
  FUN_100642bd8(plVar12,plVar10,1);
  FUN_100642bd8(plVar10,param_1 + 0xc9ad,1);
  FUN_100642bd8(param_1 + 0xc9ad,param_1[0xc96e],1);
  FUN_100642bd8(plVar12,plVar9,1);
  FUN_100642bd8(plVar9,plVar1,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar14,1);
  FUN_1005308f8(plVar14,plVar15,1);
  FUN_1005308f8(plVar14,plVar16,1);
  FUN_1005308f8(plVar14,plVar17,1);
  FUN_1005308f8(plVar14,plVar18,1);
  FUN_1005308f8(plVar14,plVar19,1);
  FUN_1005308f8(plVar14,plVar7,1);
  FUN_100642bd8(plVar7,plVar20,1);
  FUN_100642bd8(plVar7,param_1 + 0xd30c,1);
  FUN_100642bd8(plVar7,plVar21,1);
  FUN_100642bd8(plVar7,plVar22,1);
  FUN_100642bd8(plVar7,plVar23,1);
  FUN_100642bd8(plVar7,param_1 + 0xda94,1);
  FUN_100642bd8(plVar7,plVar24,1);
  FUN_100642bd8(plVar7,plVar25,1);
  FUN_100642bd8(plVar7,plVar26,1);
  FUN_100642bd8(plVar7,param_1 + 0xe21c,1);
  FUN_100642bd8(plVar7,plVar27,1);
  FUN_100642bd8(plVar7,plVar28,1);
  FUN_100642bd8(plVar7,param_1 + 0xe606,1);
  FUN_100642bd8(plVar7,plVar29,1);
  FUN_100642bd8(plVar29,plVar30,1);
  FUN_100642bd8(plVar29,plVar31,1);
  FUN_100642bd8(plVar7,plVar32,1);
  FUN_100642bd8(plVar32,plVar33,1);
  FUN_100642bd8(plVar32,plVar34,1);
  FUN_100642bd8(plVar7,plVar6,1);
  FUN_100642bd8(plVar6,plVar35,1);
  FUN_100642bd8(plVar6,plVar36,1);
  FUN_100642bd8(plVar6,plVar37,1);
  FUN_100642bd8(plVar37,plVar5,1);
  FUN_100642bd8(plVar5,plVar4,1);
  FUN_100642bd8(plVar5,plVar38,1);
  FUN_100642bd8(plVar6,plVar39,1);
  FUN_100642bd8(plVar39,plVar3,1);
  FUN_100642bd8(plVar3,plVar2,1);
  FUN_100642bd8(plVar3,plVar40,1);
  FUN_100642bd8(plVar12,param_1 + 0xf310,1);
  FUN_100642bd8(plVar12,param_1 + 0x70,1);
  iVar44 = FUN_100126c88();
  FUN_100652cac(plVar13,PTR_s_build___MenuPartsCommon_tga_101854970,"white_background");
  FUN_100652dd4(plVar13,&DAT_10115a164,2);
  uVar47 = *puVar11;
  if ((uVar47 & 0x7f80) != 0x2600) {
    *puVar11 = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar13);
    uVar47 = *puVar11;
  }
  *puVar11 = uVar47 | 0x10;
  if ((*(uint *)((long)param_1 + 0x68bf4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xffff807f;
    FUN_1000200a0(plVar1);
  }
  FUN_100530adc(plVar14,0,1);
  FUN_100652cac(plVar15,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar47 = *(uint *)((long)param_1 + 0x6923c);
  if ((uVar47 & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6923c) = uVar47 & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar15);
    uVar47 = *(uint *)((long)param_1 + 0x6923c);
  }
  *(uint *)((long)param_1 + 0x6923c) = uVar47 | 0x10;
  FUN_100652cac(plVar16,PTR_s_build___MenuPartsCommon_tga_101854970,"generic_guild_outline");
  fVar50 = *(float *)(param_1 + 0xd25e);
  if ((fVar50 != 1.5) || (fVar50 = *(float *)((long)param_1 + 0x692f4), fVar50 != 1.5)) {
    lVar45 = NEON_fmov(0x3fc00000,4);
    param_1[0xd25e] = lVar45;
    FUN_1000200a0(plVar16);
  }
  uVar47 = *(uint *)((long)param_1 + 0x6932c);
  if ((uVar47 & 0x7f80) != 0x1980) {
    *(uint *)((long)param_1 + 0x6932c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x1980;
    FUN_1000200a0(plVar16);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM_HEADER",0);
  FUN_1006513c0(plVar17,uVar46);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  }
  FUN_100651038(plVar17,*ppuVar42);
  if ((*(uint *)((long)param_1 + 0x6941c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x6941c) = *(uint *)((long)param_1 + 0x6941c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar17);
  }
  FUN_100652cac(plVar18,PTR_s_build___MenuPartsCommon_tga_101854970,"black_background");
  uVar47 = *(uint *)((long)param_1 + 0x6954c);
  if ((uVar47 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x6954c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar18);
    uVar47 = *(uint *)((long)param_1 + 0x6954c);
  }
  *(uint *)((long)param_1 + 0x6954c) = uVar47 | 0x10;
  FUN_100652cac(plVar19,PTR_s_build___MenuPartsCommon_tga_101854970,"vert_glass_shadow");
  FUN_100652dd4(plVar19,&DAT_10115a164,2);
  uVar47 = *(uint *)((long)param_1 + 0x6963c);
  if ((uVar47 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x6963c) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0x2600;
    FUN_1000200a0(plVar19);
    uVar47 = *(uint *)((long)param_1 + 0x6963c);
  }
  *(uint *)((long)param_1 + 0x6963c) = uVar47 | 0x10;
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xd30c,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xda94,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xe21c,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_FIELD_BLURB",0);
  FUN_1006513c0(param_1 + 0xe606,uVar46);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar20,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x697b4);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x697b4) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar20);
  }
  FUN_1004e3120(&uStack_c8,"1");
  FUN_1006513c0(plVar20,&uStack_c8);
  if (plStack_c0 != (void *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_FIELD",0);
  FUN_100185730(plVar21,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar21,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar21,1);
  FUN_100185e38(plVar21,1,3);
  FUN_100185e48(plVar21,1,0x10);
  FUN_100185e70(plVar21,0);
  uVar48 = DAT_101dbd4ac;
  uStack_a0 = DAT_101dbd4ac;
  uStack_c8 = thunk_FUN_1002841f0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xd333,&uStack_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CONFIRM_FIELD",0);
  FUN_100185730(plVar22,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_NAME_CAPTION",0);
  FUN_1001afd98(plVar22,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar22,1);
  FUN_100185e38(plVar22,1,3);
  FUN_100185e48(plVar22,1,0x10);
  FUN_100185e70(plVar22,0);
  uStack_a0 = uVar48;
  uStack_c8 = thunk_FUN_1002841f0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xd6d1,&uStack_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar23,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x6d3f4);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x6d3f4) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar23);
  }
  FUN_1004e3120(&uStack_c8,"2");
  FUN_1006513c0(plVar23,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_FIELD",0);
  FUN_100185730(plVar24,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar24,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar24,1);
  FUN_100185e38(plVar24,1,2);
  FUN_100185e48(plVar24,1,4);
  FUN_100185e70(plVar24,0);
  uStack_a0 = uVar48;
  uStack_c8 = thunk_FUN_10028425c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xdabb,&uStack_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CONFIRM_FIELD",0);
  FUN_100185730(plVar25,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TAG_CAPTION",0);
  FUN_1001afd98(plVar25,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e2c(plVar25,1);
  FUN_100185e38(plVar25,1,2);
  FUN_100185e48(plVar25,1,4);
  FUN_100185e70(plVar25,0);
  uStack_a0 = uVar48;
  uStack_c8 = thunk_FUN_10028425c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xde59,&uStack_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar26,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x71034);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x71034) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar26);
  }
  FUN_1004e3120(&uStack_c8,"3");
  FUN_1006513c0(plVar26,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_FIELD",0);
  FUN_100185730(plVar27,uVar46);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_MOTTO_CAPTION",0);
  FUN_1001afd98(plVar27,uVar46,&DAT_101d91650,&DAT_101d91650,0,0,0,0,0,0);
  FUN_100185e70(plVar27,0);
  FUN_1001b0734(plVar27,0);
  FUN_100185e48(plVar27,1,0x8c);
  FUN_100185e2c(plVar27,0);
  uStack_a0 = uVar48;
  uStack_c8 = thunk_FUN_1002842c8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe243,&uStack_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_80_fo_10184e250;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_72_fo_10184e248;
  }
  FUN_100651594(plVar28,*ppuVar42,&DAT_10115a168);
  uVar47 = *(uint *)((long)param_1 + 0x72f84);
  if ((uVar47 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x72f84) = uVar47 & 0xffff8000 | uVar47 & 0x7f | 0xc80;
    FUN_1000200a0(plVar28);
  }
  FUN_1004e3120(&uStack_c8,"4");
  FUN_1006513c0(plVar28,&uStack_c8);
  if (plStack_c0 != (long *)0x0) {
    operator_delete__(plStack_c0);
  }
  FUN_100652cac(plVar30,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Regular_60_10184e208;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Regular_36_10184e1f0;
  }
  ppuVar41 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar44 == 0) {
    ppuVar41 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651594(plVar31,*ppuVar42,&DAT_10115a168);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_OPEN",0);
  FUN_1006513c0(plVar31,uVar46);
  uVar48 = FUN_1006425d0(plVar29,0,0,1,1);
  uStack_c8 = (code *)CONCAT44(fVar50,uVar48);
  FUN_10064e48c(plVar29,&uStack_c8);
  *(uint *)((long)param_1 + 0x731e4) = *(uint *)((long)param_1 + 0x731e4) | 0x10;
  uVar48 = DAT_101dbd458;
  uStack_a0 = DAT_101dbd458;
  uStack_c8 = FUN_10028033c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe62d,&uStack_c8);
  uVar43 = DAT_101dbd484;
  uStack_a0 = DAT_101dbd484;
  uStack_c8 = FUN_10028033c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe62d,&uStack_c8);
  FUN_100652cac(plVar33,PTR_s_build___MenuPartsCommon_tga_101854970,"checkbox_filled");
  FUN_100651594(plVar34,*ppuVar42,&DAT_10115a168);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TYPE_INVITE_ONLY",0);
  FUN_1006513c0(plVar34,uVar46);
  uVar49 = FUN_1006425d0(plVar32,0,0,1,1);
  uStack_c8 = (code *)CONCAT44(fVar50,uVar49);
  FUN_10064e48c(plVar32,&uStack_c8);
  *(uint *)((long)param_1 + 0x734bc) = *(uint *)((long)param_1 + 0x734bc) | 0x10;
  uStack_a0 = uVar48;
  uStack_c8 = FUN_10028033c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe688,&uStack_c8);
  uStack_a0 = uVar43;
  uStack_c8 = FUN_10028033c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe688,&uStack_c8);
  uVar46 = FUN_1004e0150("GENERIC_DIALOG_CANCEL",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x438c0000,plVar35,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uVar48 = DAT_101d91884;
  uStack_a0 = DAT_101d91884;
  uStack_c8 = thunk_FUN_100284428;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe6f4,&uStack_c8);
  FUN_1001b4964(plVar35,1);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_RENAME_TEAM",0);
  FUN_1001816d4(0x42000000,0x42c80000,0x446b0000,plVar36,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar48;
  uStack_c8 = FUN_10028034c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xe9ab,&uStack_c8);
  FUN_1001b4c0c(plVar36,0);
  FUN_1001b4964(plVar36,1);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar37,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar48;
  uStack_c8 = FUN_10028034c;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 1;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xec62,&uStack_c8);
  FUN_100651038(param_1 + 0xed44,*ppuVar41);
  FUN_1001b495c(0x3f000000,plVar37);
  if ((*(float *)(param_1 + 0xec6b) != 0.5) || (*(float *)((long)param_1 + 0x7635c) != 0.5)) {
    param_1[0xec6b] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar37);
  }
  FUN_100181b5c(0,0x41f00000,plVar37);
  FUN_100181c68(0x43133333,plVar37);
  FUN_1001b4964(plVar37,1);
  FUN_1001b4c0c(plVar37,0);
  FUN_100652cac(plVar4,PTR_s_build___MenuPartsCommon_tga_101854970,"glory_icon_small");
  if ((*(float *)(param_1 + 0xef5d) != 0.0) || (*(float *)((long)param_1 + 0x77aec) != 3.0)) {
    param_1[0xef5d] = 0x4040000000000000;
    FUN_1000200a0(plVar4);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar4 + 0x28))(plVar4,&uStack_c8);
  if ((*(float *)(param_1 + 0xef5e) != 0.9) || (*(float *)((long)param_1 + 0x77af4) != 0.9)) {
    param_1[0xef5e] = 0x3f6666663f666666;
    FUN_1000200a0(plVar4);
  }
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar38,*ppuVar42);
  fVar50 = (float)FUN_100652e60(plVar4);
  fVar51 = *(float *)((long)param_1 + 0x77aec) + -3.0;
  if ((*(float *)(param_1 + 0xef37) != fVar50) || (*(float *)((long)param_1 + 0x779bc) != fVar51)) {
    *(float *)(param_1 + 0xef37) = fVar50;
    *(float *)((long)param_1 + 0x779bc) = fVar51;
    FUN_1000200a0(plVar38);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0xef2f] + 0x28))(plVar38,&uStack_c8);
  fVar50 = (float)FUN_1006425d0(plVar5,0,0,1,1);
  FUN_1006425d0(plVar5,0,0,1,1);
  fVar51 = fVar51 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xef20) != fVar50 * -0.5) ||
     (*(float *)((long)param_1 + 0x77904) != fVar51)) {
    *(float *)(param_1 + 0xef20) = fVar50 * -0.5;
    *(float *)((long)param_1 + 0x77904) = fVar51;
    FUN_1000200a0(plVar5);
  }
  uStack_c8 = (code *)0x0;
  (**(code **)(*plVar5 + 0x28))(plVar5,&uStack_c8);
  uVar46 = FUN_1004e0150("MENU_PROFILE_GUILD_CREATE_TEAM",0);
  FUN_1001816d4(0x42480000,0x43480000,0x449c4000,plVar39,0,uVar46,&DAT_10115a168,&DAT_101dc1cb8,0);
  uStack_a0 = uVar48;
  uStack_c8 = FUN_10028034c;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xef74,&uStack_c8);
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_60_fo_10184e240;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Bold_48_fo_10184e238;
  }
  FUN_100651038(param_1 + 0xf056,*ppuVar42);
  FUN_1001b495c(0x3f000000,plVar39);
  if ((*(float *)(param_1 + 0xef7d) != 0.5) || (*(float *)((long)param_1 + 0x77bec) != 0.5)) {
    param_1[0xef7d] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar39);
  }
  FUN_100181b5c(0,0x41f00000,plVar39);
  FUN_100181c68(0x43133333,plVar39);
  FUN_1001b4964(plVar39,1);
  FUN_1001b4c0c(plVar39,0);
  FUN_100652cac(plVar2,PTR_s_build___MenuPartsCommon_tga_101854970,"ice_icon_small");
  if ((*(float *)(param_1 + 0xf26f) != 0.0) || (*(float *)((long)param_1 + 0x7937c) != 3.0)) {
    param_1[0xf26f] = 0x4040000000000000;
    FUN_1000200a0(plVar2);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&uStack_c8);
  if ((*(float *)(param_1 + 0xf270) != 0.9) || (*(float *)((long)param_1 + 0x79384) != 0.9)) {
    param_1[0xf270] = 0x3f6666663f666666;
    FUN_1000200a0(plVar2);
  }
  ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_60_f_10184e1c8;
  if (iVar44 == 0) {
    ppuVar42 = &PTR_s_build___Fonts_Brandon_Light_48_f_10184e1c0;
  }
  FUN_100651038(plVar40,*ppuVar42);
  fVar50 = (float)FUN_100652e60(plVar2);
  fVar51 = *(float *)((long)param_1 + 0x7937c) + -3.0;
  if ((*(float *)(param_1 + 0xf249) != fVar50) || (*(float *)((long)param_1 + 0x7924c) != fVar51)) {
    *(float *)(param_1 + 0xf249) = fVar50;
    *(float *)((long)param_1 + 0x7924c) = fVar51;
    FUN_1000200a0(plVar40);
  }
  uStack_c8 = (code *)0x3f00000000000000;
  (**(code **)(param_1[0xf241] + 0x28))(plVar40,&uStack_c8);
  fVar50 = (float)FUN_1006425d0(plVar3,0,0,1,1);
  FUN_1006425d0(plVar3,0,0,1,1);
  fVar51 = fVar51 * -0.5 + 10.0;
  if ((*(float *)(param_1 + 0xf232) != fVar50 * -0.5) ||
     (*(float *)((long)param_1 + 0x79194) != fVar51)) {
    *(float *)(param_1 + 0xf232) = fVar50 * -0.5;
    *(float *)((long)param_1 + 0x79194) = fVar51;
    FUN_1000200a0(plVar3);
  }
  uStack_c8 = (code *)0x0;
  (**(code **)(*plVar3 + 0x28))(plVar3,&uStack_c8);
  uStack_a0 = DAT_101dbd460;
  uStack_c8 = thunk_FUN_1002847f8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xf297,&uStack_c8);
  uStack_a0 = DAT_101dbd48c;
  uStack_c8 = thunk_FUN_1002847f8;
  uStack_b0 = 0;
  uStack_a8 = 0;
  uStack_b8 = 0;
  plStack_c0 = param_1;
  FUN_10001554c(param_1 + 0xf297,&uStack_c8);
  *(uint *)((long)param_1 + 0x404) = *(uint *)((long)param_1 + 0x404) & 0xfffffffb;
  FUN_10023d1f0(param_1 + 0x70,0);
  FUN_100652cdc(plVar30,"checkbox_filled");
  FUN_100652cdc(plVar33,"checkbox_empty");
  *(undefined4 *)(param_1 + 0xf32d) = 0;
  FUN_100280358(param_1);
  *(uint *)((long)param_1 + 0x68bf4) = *(uint *)((long)param_1 + 0x68bf4) & 0xfffffffb;
  FUN_100280478(0,param_1,1,0,0);
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) | 8;
  return param_1;
}

