// functions/009d3 — 44 functions
#include "libGameKindred.h"




undefined * FUN_009d3070(void)

{
  return &DAT_0312f380;
}




undefined * FUN_009d307c(void)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)0x0;
  if (DAT_0312f4c4 != '\0') {
    puVar1 = &DAT_0312f3c0;
  }
  return puVar1;
}




void FUN_009d3098(long param_1)

{
  uint uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_00f30afc(*(long *)(param_1 + 0x50),"Ally_Enemy");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xffffffe0 | uVar1 & 0x1f;
    uVar1 = FUN_00f30afc(*(undefined8 *)(param_1 + 0x50),"Color");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfffffc1f | (uVar1 & 0x1f) << 5;
    uVar1 = FUN_00f30afc(*(undefined8 *)(param_1 + 0x50),"Radius");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xffff83ff | (uVar1 & 0x1f) << 10;
    uVar1 = FUN_00f30afc(*(undefined8 *)(param_1 + 0x50),"Alpha");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfff07fff | (uVar1 & 0x1f) << 0xf;
    uVar1 = FUN_00f30afc(*(undefined8 *)(param_1 + 0x50),"SizeXY");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xfe0fffff | (uVar1 & 0x1f) << 0x14;
    uVar1 = FUN_00f30afc(*(undefined8 *)(param_1 + 0x50),"Duration");
    *(uint *)(param_1 + 0x10c) = *(uint *)(param_1 + 0x10c) & 0xc1ffffff | (uVar1 & 0x1f) << 0x19;
  }
  return;
}




void FUN_009d31b4(long param_1,byte *param_2,uint param_3)

{
  undefined8 uVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  
  if ((param_3 & 1) == 0) {
LAB_009d3258:
    if (param_2 != (byte *)0x0) {
      uVar1 = FUN_009d3278(param_2);
      *(undefined8 *)(param_1 + 0x50) = uVar1;
    }
  }
  else {
    uVar1 = FUN_00d6eb50();
    plVar2 = (long *)FUN_00d6eb5c(uVar1,"*KindredEffects*");
    if (param_2 == (byte *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar4 = (uint)*param_2;
      uVar3 = 0x811c9dc5;
      if (*param_2 != 0) {
        do {
          param_2 = param_2 + 1;
          uVar3 = (uVar3 ^ uVar4) * 0x1000193;
          uVar4 = (uint)*param_2;
        } while (*param_2 != 0);
      }
    }
    plVar2 = (long *)*plVar2;
    lVar5 = *plVar2;
    while (lVar5 != 0) {
      puVar7 = *(undefined8 **)(lVar5 + 0x10);
      puVar6 = (uint *)*puVar7;
      while (puVar6 != (uint *)0x0) {
        puVar7 = puVar7 + 1;
        if (*puVar6 == uVar3) {
          param_2 = *(byte **)(puVar6 + 2);
          goto LAB_009d3258;
        }
        puVar6 = (uint *)*puVar7;
      }
      plVar2 = plVar2 + 1;
      lVar5 = *plVar2;
    }
  }
  FUN_009d3098(param_1);
  return;
}




undefined8 FUN_009d3278(undefined8 param_1)

{
  void *pvVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong local_70 [2];
  void *local_60;
  ulong local_58 [2];
  void *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_40 = 0;
  uVar3 = FUN_00f1c800(param_1,&local_40,0);
  local_58[0] = 0;
  local_58[1] = 0;
  local_48 = (void *)0x0;
  FUN_00f1c904(param_1,local_58);
  pvVar1 = (void *)((ulong)local_58 | 1);
  if ((local_58[0] & 1) != 0) {
    pvVar1 = local_48;
  }
  local_70[0] = 0;
  local_70[1] = 0;
  local_60 = (void *)0x0;
  FUN_00f1c8ec(pvVar1,local_70);
  uVar4 = FUN_00f3428c();
  pvVar1 = (void *)((ulong)local_70 | 1);
  if ((local_70[0] & 1) != 0) {
    pvVar1 = local_60;
  }
  uVar4 = FUN_00f32a6c(uVar4,pvVar1,local_40,uVar3);
  if ((local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if ((local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d3364(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  undefined8 *puVar6;
  
  iVar1 = *param_2;
  uVar2 = FUN_00d6eb50();
  plVar3 = (long *)FUN_00d6eb5c(uVar2,"*KindredEffects*");
  plVar3 = (long *)*plVar3;
  lVar4 = *plVar3;
  do {
    if (lVar4 == 0) {
LAB_009d33d4:
      FUN_009d3098(param_1);
      return;
    }
    puVar6 = *(undefined8 **)(lVar4 + 0x10);
    piVar5 = (int *)*puVar6;
    while (piVar5 != (int *)0x0) {
      puVar6 = puVar6 + 1;
      if (*piVar5 == iVar1) {
        if (*(long *)(piVar5 + 2) != 0) {
          uVar2 = FUN_009d3278();
          *(undefined8 *)(param_1 + 0x50) = uVar2;
        }
        goto LAB_009d33d4;
      }
      piVar5 = (int *)*puVar6;
    }
    plVar3 = plVar3 + 1;
    lVar4 = *plVar3;
  } while( true );
}




void FUN_009d33e4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  return;
}




void FUN_009d33ec(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00f309f4();
    return;
  }
  return;
}




void FUN_009d33fc(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00f30a1c();
    return;
  }
  return;
}




void FUN_009d340c(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00f30a40();
    return;
  }
  return;
}




void FUN_009d341c(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00f30a80(*(long *)(param_1 + 0x50),0);
    return;
  }
  return;
}




void FUN_009d3430(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00f30a68();
    return;
  }
  return;
}




void FUN_009d3440(undefined4 param_1,long param_2)

{
  if (*(long *)(param_2 + 0x50) != 0) {
    *(undefined4 *)(*(long *)(param_2 + 0x50) + 0x60) = param_1;
  }
  *(undefined4 *)(param_2 + 0x108) = param_1;
  return;
}




void FUN_009d3454(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_00f30d18();
    return;
  }
  return;
}




void FUN_009d3464(long param_1,uint param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  *(byte *)(param_1 + 0x110) =
       *(byte *)(param_1 + 0x110) & 0xfd | (byte)(((ulong)(param_2 & 1) << 0x21) >> 0x20);
  if (lVar1 != 0) {
    *(ushort *)(lVar1 + 100) = *(ushort *)(lVar1 + 100) & 0xf7ff | (ushort)((param_2 & 1) << 0xb);
  }
  return;
}




bool FUN_009d34a0(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return (*(ushort *)(*(long *)(param_1 + 0x50) + 100) & 0x38) == 0x28;
  }
  return false;
}




undefined8 FUN_009d34c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}




undefined8 FUN_009d34cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




void FUN_009d34d4(long param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  float fVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  lVar4 = tpidr_el0;
  lVar5 = *(long *)(lVar4 + 0x28);
  fVar1 = param_2[0xf];
  fVar17 = *param_2;
  fVar16 = param_2[1];
  fVar15 = param_2[2];
  fVar2 = param_2[3];
  fVar13 = param_2[4];
  fVar11 = param_2[5];
  fVar14 = param_2[6];
  fVar3 = param_2[7];
  fVar12 = param_2[8];
  fVar19 = param_2[9];
  fVar18 = param_2[10];
  uVar9 = *(undefined8 *)(param_2 + 0xd);
  uVar8 = *(undefined8 *)(param_2 + 0xb);
  if (*(int *)(param_1 + 0x10c) < 0) {
    fVar10 = fVar17 * fVar17 + fVar16 * fVar16 + fVar15 * fVar15;
    fVar7 = SQRT(fVar10);
    if (NAN(fVar7)) {
      fVar7 = sqrtf(fVar10);
    }
    fVar10 = 1.0;
    if (1.1920929e-07 <= ABS(fVar7)) {
      fVar10 = 1.0 / fVar7;
    }
    fVar17 = fVar17 * fVar10;
    fVar16 = fVar16 * fVar10;
    fVar15 = fVar15 * fVar10;
    fVar13 = fVar13 * fVar10;
    fVar11 = fVar11 * fVar10;
    fVar14 = fVar14 * fVar10;
    fVar12 = fVar12 * fVar10;
    fVar19 = fVar19 * fVar10;
    fVar18 = fVar18 * fVar10;
  }
  pfVar6 = *(float **)(param_1 + 0x50);
  if (pfVar6 != (float *)0x0) {
    *pfVar6 = fVar17;
    pfVar6[1] = fVar16;
    pfVar6[2] = fVar15;
    pfVar6[3] = fVar2;
    pfVar6[4] = fVar13;
    pfVar6[5] = fVar11;
    pfVar6[6] = fVar14;
    pfVar6[7] = fVar3;
    pfVar6[8] = fVar12;
    pfVar6[9] = fVar19;
    pfVar6[10] = fVar18;
    pfVar6[0xf] = fVar1;
    *(undefined8 *)(pfVar6 + 0xd) = uVar9;
    *(undefined8 *)(pfVar6 + 0xb) = uVar8;
  }
  *(float *)(param_1 + 0x68) = fVar17;
  *(float *)(param_1 + 0x6c) = fVar16;
  *(float *)(param_1 + 0x70) = fVar15;
  *(float *)(param_1 + 0x74) = fVar2;
  *(float *)(param_1 + 0x78) = fVar13;
  *(float *)(param_1 + 0x7c) = fVar11;
  *(float *)(param_1 + 0x80) = fVar14;
  *(float *)(param_1 + 0x84) = fVar3;
  *(float *)(param_1 + 0x88) = fVar12;
  *(float *)(param_1 + 0x8c) = fVar19;
  *(float *)(param_1 + 0x90) = fVar18;
  *(float *)(param_1 + 0xa4) = fVar1;
  *(undefined8 *)(param_1 + 0x9c) = uVar9;
  *(undefined8 *)(param_1 + 0x94) = uVar8;
  if (*(long *)(lVar4 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009d3654(long param_1,long param_2,uint param_3)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  FUN_00d58198(param_2,auStack_78);
  FUN_009d34d4(param_1,auStack_78);
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 1;
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x58) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x60) = uVar1;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d36dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d58198(param_2,auStack_68);
  FUN_009d34d4(param_1,auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d373c(long param_1,long param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined1 auStack_88 [64];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  FUN_00d58298(param_2,param_3,auStack_88);
  FUN_009d34d4(param_1,auStack_88);
  if ((param_4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 2;
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x58) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0x60) = uVar1;
    *(undefined4 *)(param_1 + 0xc0) = *param_3;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d37dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_68 [64];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00d58298(param_2,param_3,auStack_68);
  FUN_009d34d4(param_1,auStack_68);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d3840(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_01995208(param_3);
  FUN_009d38a8(param_1,param_2,uVar2);
  if ((param_4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0xb8) = 3;
    uVar1 = *(undefined4 *)(param_2 + 0x30);
    *(long *)(param_1 + 0x58) = param_2 + 0x28;
    *(undefined4 *)(param_1 + 0xbc) = uVar2;
    *(undefined4 *)(param_1 + 0x60) = uVar1;
  }
  return;
}




void FUN_009d38a8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_78 [64];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = *(long *)(param_2 + 0x18);
  do {
    if (lVar3 == 0) {
LAB_009d3910:
      FUN_00d58198(param_2,auStack_78);
LAB_009d391c:
      FUN_009d34d4(param_1,auStack_78);
      if (*(long *)(lVar1 + 0x28) == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(*(long *)(lVar3 + 8) + 0xa4) == DAT_0312eae0) {
      uVar2 = FUN_009b3484(lVar3,auStack_78,param_3,1);
      if ((uVar2 & 1) != 0) goto LAB_009d391c;
      goto LAB_009d3910;
    }
    lVar3 = *(long *)(lVar3 + 0x20);
  } while( true );
}




void FUN_009d3950(undefined4 param_1,long param_2)

{
  FUN_009d398c();
  *(undefined4 *)(param_2 + 0xa8) = param_1;
  *(uint *)(param_2 + 0x10c) = *(uint *)(param_2 + 0x10c) | 0x40000000;
  return;
}




void FUN_009d398c(float param_1,long param_2)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_a8;
  float fStack_a4;
  float local_a0;
  undefined4 local_9c;
  float local_98;
  float fStack_94;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  fVar2 = cosf(param_1);
  fVar3 = sinf(param_1);
  fVar5 = fVar2 * fVar2 + 0.0 + fVar3 * fVar3;
  fVar4 = (float)DAT_03218f68;
  fVar6 = DAT_03218f68._4_4_;
  fVar9 = DAT_03218f70;
  if (1e-06 <= fVar5) {
    fVar9 = SQRT(fVar5);
    if (NAN(fVar9)) {
      fVar9 = sqrtf(fVar5);
    }
    fVar4 = fVar2 / fVar9;
    fVar6 = 0.0 / fVar9;
    fVar9 = fVar3 / fVar9;
  }
  fVar5 = DAT_03218f80;
  fVar3 = DAT_03218f7c;
  fVar2 = DAT_03218f78;
  fVar7 = fVar9 * DAT_03218f7c - fVar6 * DAT_03218f80;
  fVar8 = fVar4 * DAT_03218f80 - fVar9 * DAT_03218f78;
  fVar9 = fVar6 * DAT_03218f78 - fVar4 * DAT_03218f7c;
  fVar6 = fVar9 * fVar9 + fVar7 * fVar7 + fVar8 * fVar8;
  fVar4 = SQRT(fVar6);
  if (NAN(fVar4)) {
    fVar4 = sqrtf(fVar6);
  }
  fVar7 = fVar7 / fVar4;
  fVar8 = fVar8 / fVar4;
  fVar9 = fVar9 / fVar4;
  fVar11 = fVar5 * fVar8 - fVar3 * fVar9;
  fVar6 = fVar2 * fVar9 - fVar5 * fVar7;
  fVar10 = fVar3 * fVar7 - fVar2 * fVar8;
  fVar4 = fVar10 * fVar10 + fVar11 * fVar11 + fVar6 * fVar6;
  local_80 = SQRT(fVar4);
  if (NAN(local_80)) {
    local_80 = sqrtf(fVar4);
  }
  local_78 = *(undefined8 *)(param_2 + 0x98);
  local_70 = *(undefined4 *)(param_2 + 0xa0);
  local_88 = fVar11 / local_80;
  fStack_84 = fVar6 / local_80;
  local_80 = fVar10 / local_80;
  uStack_6c = 0x3f800000;
  local_9c = 0;
  local_8c = 0;
  local_7c = 0;
  local_a8 = fVar7;
  fStack_a4 = fVar8;
  local_a0 = fVar9;
  local_98 = fVar2;
  fStack_94 = fVar3;
  local_90 = fVar5;
  FUN_009d34d4(param_2,&local_a8);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009d3b70(long param_1,long param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc4) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  *(undefined8 *)(param_1 + 0xd8) = 0xffffffff;
  FUN_009d3b94();
  return;
}




void FUN_009d3b94(long param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int iVar6;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 auStack_78 [48];
  undefined8 local_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = *(long **)(param_1 + 200);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0xd0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        iVar6 = *(int *)(param_1 + 0xd8);
        if (iVar6 == -1) {
          iVar6 = *(int *)(param_1 + 0xdc);
          plVar2 = *(long **)(param_1 + 200);
          if ((iVar6 == -0x7ee3623b) || (iVar6 == 0)) {
            uVar4 = 0;
            if (plVar2 != (long *)0x0) {
              if (*(int *)(param_1 + 0xd0) == (int)plVar2[1]) {
                uVar4 = (**(code **)(*plVar2 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 200) = 0;
                uVar4 = 0;
                *(undefined4 *)(param_1 + 0xd0) = DAT_03214ce8;
              }
            }
            FUN_00d55794(uVar4,&local_88,0);
          }
          else {
            uVar4 = 0;
            if (plVar2 != (long *)0x0) {
              if (*(int *)(param_1 + 0xd0) == (int)plVar2[1]) {
                uVar4 = (**(code **)(*plVar2 + 0x10))();
              }
              else {
                *(undefined8 *)(param_1 + 200) = 0;
                uVar4 = 0;
                *(undefined4 *)(param_1 + 0xd0) = DAT_03214ce8;
              }
            }
            FUN_00d58298(uVar4,(int *)(param_1 + 0xdc),auStack_78);
            local_88 = local_48;
            local_80 = local_40;
          }
        }
        else {
          plVar2 = *(long **)(param_1 + 200);
          if (plVar2 == (long *)0x0) {
            plVar5 = (long *)0x0;
          }
          else if (*(int *)(param_1 + 0xd0) == (int)plVar2[1]) {
            plVar2 = (long *)(**(code **)(*plVar2 + 0x10))();
            iVar6 = *(int *)(param_1 + 0xd8);
            plVar5 = plVar2;
          }
          else {
            *(undefined8 *)(param_1 + 200) = 0;
            plVar5 = (long *)0x0;
            *(undefined4 *)(param_1 + 0xd0) = DAT_03214ce8;
          }
          FUN_009d403c(plVar2,plVar5,iVar6,&local_88);
        }
        FUN_009d3dc4(param_1,&local_88);
      }
    }
    else {
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined4 *)(param_1 + 0xd0) = DAT_03214ce8;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d3d6c(long param_1,long param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc4) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd8) = param_3;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  FUN_009d3b94();
  return;
}




void FUN_009d3d8c(long param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0xc4) = 1;
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 200) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xd0) = uVar1;
  *(undefined4 *)(param_1 + 0xd8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xdc) = *param_3;
  FUN_009d3b94();
  return;
}




void FUN_009d3db8(long param_1)

{
  *(undefined4 *)(param_1 + 0xc4) = 2;
  FUN_009d3dc4();
  return;
}




void FUN_009d3dc4(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *param_2;
  local_30 = *(undefined4 *)(param_2 + 1);
  uVar2 = FUN_00f30afc(*(undefined8 *)(param_1 + 0x50),"beam_target");
  FUN_00f30cb4(*(undefined8 *)(param_1 + 0x50),uVar2,&local_38,3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009d3e40(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 *param_5)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_4 + 0xe8) = *(undefined4 *)(param_5 + 1);
  uVar1 = *param_5;
  *(undefined4 *)(param_4 + 0xec) = param_1;
  *(undefined4 *)(param_4 + 0xf0) = param_2;
  *(undefined4 *)(param_4 + 0xf4) = param_3;
  *(undefined8 *)(param_4 + 0xe0) = uVar1;
  return;
}




void FUN_009d3e5c(long param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  if (param_2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xe8);
    *param_2 = *(undefined8 *)(param_1 + 0xe0);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xec);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xf0);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0xf4);
  }
  return;
}




void FUN_009d3e98(long param_1,uint param_2)

{
  *(byte *)(param_1 + 0x110) =
       *(byte *)(param_1 + 0x110) & 0xfb | (byte)(((ulong)(param_2 & 1) << 0x22) >> 0x20);
  return;
}




void FUN_009d3ebc(long param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xf8) = *param_2;
  return;
}




void FUN_009d3ec8(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0xfc) = param_1;
  return;
}




void FUN_009d3ed0(long param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x100) = *param_2;
  return;
}




void FUN_009d3edc(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  
  if (*(long *)(param_1 + 0x50) != 0) {
    uVar1 = FUN_00f30afc();
    FUN_00f30cb4(*(undefined8 *)(param_1 + 0x50),uVar1,param_4,param_3);
    return;
  }
  return;
}




long FUN_009d3f38(long param_1)

{
  return param_1 + 0x68;
}




long FUN_009d3f40(long param_1)

{
  return param_1 + 0x40;
}




void FUN_009d3f48(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  bVar1 = *param_2;
  if (((((bVar1 & 0x1f) == 0) && ((*(byte *)(param_1 + 0x110) & 0x18) != 0)) ||
      ((((uint)(int)(char)bVar1 >> 5 & 1) != 0 && ((*(byte *)(param_1 + 0x110) & 0x18) == 0x10))))
     || ((char)bVar1 < '\0')) {
    local_2c = 0;
  }
  else {
    local_2c = *(undefined4 *)(param_1 + 0xac);
  }
  uVar3 = FUN_01988c6c();
  FUN_019894ac(uVar3,*(undefined2 *)(param_1 + 0xb0),0,&local_2c);
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_009d3fec(long param_1)

{
  if (*(long *)(param_1 + 0x50) != 0) {
    return (*(ushort *)(*(long *)(param_1 + 0x50) + 100) >> 3 & 6 | 1) == 3;
  }
  return false;
}

