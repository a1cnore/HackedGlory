// functions/009b2 — 29 functions
#include "libGameKindred.h"




void FUN_009b2030(void *param_1)

{
  FUN_009b1f14();
  operator_delete(param_1);
  return;
}




void FUN_009b2054(long param_1)

{
  long lVar1;
  
  DAT_0312eae0 = *(uint *)(param_1 + 0x13fb0);
  *(uint *)(param_1 + 0x13fb0) = DAT_0312eae0 + 1;
  lVar1 = param_1 + (ulong)DAT_0312eae0 * 0x2e8;
  *(code **)(lVar1 + 0xb0) = FUN_009b3b58;
  *(code **)(lVar1 + 0xb8) = FUN_009b3b7c;
  *(uint *)(lVar1 + 0x2d8) = *(uint *)(lVar1 + 0x2d8) & 0x80000000 | 0xfa;
  *(uint *)(lVar1 + 0xa4) = DAT_0312eae0;
  *(undefined4 *)(lVar1 + 0xa8) = 0x1d18;
  *(long *)(param_1 + 0x13fb8) = lVar1;
  FUN_01986780(param_1,4,FUN_009b20c4,0);
  return;
}




void FUN_009b20c4(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  char *pcVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  lVar8 = param_1 + 0x28;
  iVar1 = FUN_0198feb0(lVar8);
  if (iVar1 != 0) {
    fVar12 = (float)FUN_01988c78();
    FUN_0198f550(lVar8);
    uVar6 = 0;
    do {
      if ((1 << (ulong)(uVar6 & 0x1f) & *(ushort *)(param_1 + 0x1d12) & 0x1f) != 0) {
        lVar2 = param_1 + 0x1c18;
        lVar4 = param_1 + 0x1d08;
        uVar5 = 5;
        goto LAB_009b2150;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < 5);
    lVar2 = 0;
    lVar4 = 0;
    uVar5 = 0;
LAB_009b2150:
    uVar5 = FUN_0198fec0(lVar8,lVar2,lVar4,uVar5);
    lVar2 = *(long *)(param_1 + 0x1bf8);
    if (lVar2 != 0) {
      fVar13 = *(float *)(param_1 + 0x1c04);
      fVar15 = 0.0;
      fVar14 = (float)NEON_fminnm(fVar13 / *(float *)(param_1 + 0x1c00),0x3f800000);
      if (fVar14 <= 0.0) {
        fVar14 = 0.0;
      }
      *(float *)(*(long *)(param_1 + 0x1bf0) + 0x10) = fVar14;
      *(float *)(lVar2 + 0x10) = 1.0 - fVar14;
      if (0.01 <= 1.0 - fVar14) {
        fVar15 = fVar12 + fVar13;
      }
      else {
        uVar5 = FUN_0198fe30(lVar8);
        *(undefined8 *)(param_1 + 0x1bf8) = 0;
        *(undefined4 *)(param_1 + 0x1c00) = 0;
      }
      *(float *)(param_1 + 0x1c04) = fVar15;
    }
    plVar7 = *(long **)(param_1 + 0x1bf0);
    lVar8 = (long)*(char *)(param_1 + 0x1d14);
    if ((lVar8 == -1) || (*(int *)((long)plVar7 + 0x14) != 0)) {
      if ((*(int *)((long)plVar7 + 0x14) == 1) &&
         (plVar3 = *(long **)(param_1 + 0x1c10), plVar3 != (long *)0x0)) {
        fVar12 = (*(float *)(*plVar7 + 4) - *(float *)(plVar7 + 4)) - *(float *)(plVar7 + 4);
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        if (fVar12 - *(float *)((long)plVar3 + 0xc) <= *(float *)(plVar7 + 1)) {
          if (*plVar7 != *plVar3) {
            uVar5 = FUN_009b2540((int)plVar7[3],param_1,plVar3,
                                 (int)((uint)*(ushort *)(param_1 + 0x1d12) << 0x12) >> 0x18,1);
          }
          uVar5 = FUN_009b3aa4(uVar5,param_1 + (long)(short)(char)((ushort)(*(short *)(param_1 +
                                                                                      0x1d12) << 2)
                                                                  >> 8) * 0x88 + 0x98);
          *(undefined8 *)(param_1 + 0x1c10) = uVar5;
        }
      }
    }
    else {
      lVar2 = param_1 + 0x1af0;
      fVar12 = *(float *)(lVar2 + lVar8 * 0x10 + 8);
      if (((0.0 < fVar12) && (fVar12 <= *(float *)(plVar7 + 1))) ||
         ((fVar12 <= 0.0 && (fVar12 + *(float *)(*plVar7 + 4) <= *(float *)(plVar7 + 1))))) {
        FUN_00d9ff8c(param_1 + 0x1c08,*(undefined4 *)(lVar2 + lVar8 * 0x10 + 4));
        iVar1 = *(int *)(param_1 + 0x1c08);
        uVar9 = 0;
        pcVar11 = (char *)(param_1 + 0x1a20);
        do {
          if ((*pcVar11 != '\0') && (*(int *)(pcVar11 + -8) == iVar1)) {
            iVar1 = *(int *)(pcVar11 + -4);
            break;
          }
          uVar9 = uVar9 + 1;
          pcVar11 = pcVar11 + 0xc;
        } while (uVar9 < 0x12);
        uVar6 = 0;
        piVar10 = (int *)(param_1 + 0x98);
        do {
          if (*piVar10 == iVar1) {
            FUN_009b24ac(0x3f800000,param_1,uVar6,1,0,
                         lVar2 + (long)*(char *)(param_1 + 0x1d14) * 0x10 + 0xc);
            return;
          }
          uVar6 = uVar6 + 1;
          piVar10 = piVar10 + 0x22;
        } while (uVar6 < 0x30);
      }
    }
  }
  return;
}




void FUN_009b2364(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    for (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar2 != 0;
        lVar2 = *(long *)(lVar2 + 0x20)) {
      if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_0312ead4) {
        *(long *)(param_1 + 0x1be0) = lVar2;
        FUN_00e7ca08(lVar2,1);
        uVar1 = FUN_00e7ca48(lVar2);
        FUN_0198abf0(uVar1,param_1 + 0x28);
        return;
      }
    }
  }
  return;
}




void FUN_009b23d8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    for (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x18); lVar1 != 0;
        lVar1 = *(long *)(lVar1 + 0x20)) {
      if (*(int *)(*(long *)(lVar1 + 8) + 0xa4) == DAT_0312ead4) {
        uVar2 = FUN_00e7ca48();
        lVar1 = FUN_0198ac00();
        if (lVar1 == param_1 + 0x28) {
          FUN_0198abf8(uVar2);
        }
        *(undefined8 *)(param_1 + 0x1be0) = 0;
        return;
      }
    }
  }
  return;
}




bool FUN_009b244c(long param_1,uint param_2)

{
  return (1 << (ulong)(param_2 & 0x1f) & (uint)*(ushort *)(param_1 + 0x1d12) & 0x1f) != 0;
}




int FUN_009b2468(long param_1,int *param_2)

{
  ulong uVar1;
  char *pcVar2;
  
  uVar1 = 0;
  pcVar2 = (char *)(param_1 + 0x1a20);
  while ((*pcVar2 == '\0' || (*(int *)(pcVar2 + -8) != *param_2))) {
    uVar1 = uVar1 + 1;
    pcVar2 = pcVar2 + 0xc;
    if (0x11 < uVar1) {
LAB_009b24a4:
      return *param_2;
    }
  }
  param_2 = (int *)(pcVar2 + -4);
  goto LAB_009b24a4;
}




void FUN_009b24ac(undefined8 param_1,long param_2,int param_3,int param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2 + (long)param_3 * 0x88;
  lVar1 = lVar3 + 0x98;
  uVar2 = FUN_009b3aa4(param_2,lVar1);
  FUN_009b2540(param_1,param_2,uVar2,param_3,param_4);
  uVar2 = 0;
  if ((param_4 == 1) && (*(char *)(lVar3 + 0x118) != '\0')) {
    uVar2 = FUN_009b3aa4(0,lVar1);
  }
  *(undefined8 *)(param_2 + 0x1c10) = uVar2;
  return;
}




void FUN_009b2540(float param_1,long param_2,undefined8 *param_3,ushort param_4,undefined4 param_5,
                 undefined8 param_6,float *param_7)

{
  float *pfVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  undefined4 uVar5;
  
  if (*(long *)(param_2 + 0x1bf8) != 0) {
    FUN_0198fe30(param_2 + 0x28,*(long *)(param_2 + 0x1bf8));
    *(undefined8 *)(param_2 + 0x1bf8) = 0;
  }
  lVar3 = *(long *)(param_2 + 0x1bf0);
  pfVar1 = (float *)((long)param_3 + 0xc);
  if (param_7 != (float *)0x0) {
    pfVar1 = param_7;
  }
  *(undefined8 *)(param_2 + 0x1c00) = 0;
  uVar5 = 0x3f800000;
  if (lVar3 != 0) {
    fVar4 = *pfVar1;
    if (0.0001 <= ABS(fVar4)) {
      uVar5 = 0;
      *(long *)(param_2 + 0x1bf8) = lVar3;
      *(undefined4 *)(lVar3 + 0x10) = 0x3f800000;
      *(float *)(param_2 + 0x1c00) = fVar4;
      *(undefined4 *)(param_2 + 0x1c04) = 0;
    }
    else {
      FUN_0198fe30(param_2 + 0x28);
      uVar5 = 0x3f800000;
    }
  }
  uVar2 = FUN_0198ff3c();
  lVar3 = FUN_019902b4(uVar2,*param_3);
  *(long *)(param_2 + 0x1bf0) = lVar3;
  *(ushort *)(param_2 + 0x1d12) = *(ushort *)(param_2 + 0x1d12) & 0xc03f | (param_4 & 0xff) << 6;
  fVar4 = *(float *)(param_3 + 1);
  *(undefined4 *)(lVar3 + 0x14) = param_5;
  *(undefined4 *)(lVar3 + 0xc) = 0;
  *(undefined4 *)(lVar3 + 0x10) = uVar5;
  *(float *)(lVar3 + 0x18) = fVar4 * param_1;
  FUN_0198fe18(param_2 + 0x28);
  return;
}




void FUN_009b2640(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_009b3aa4();
  *(undefined8 *)(param_1 + 0x1c10) = uVar1;
  return;
}




void FUN_009b2664(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_019955e4(param_2);
  *(undefined8 *)(param_1 + 0x1be8) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  return;
}




void FUN_009b2690(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x10))();
  lVar2 = FUN_019955e4(param_2);
  param_1[0x37d] = lVar2;
  param_1[5] = lVar2;
  FUN_009b2780(*(undefined4 *)(param_3 + 2),*(undefined4 *)((long)param_3 + 0x14),
               *(undefined4 *)(param_3 + 3),param_1,*param_3,param_3[1],
               *(undefined1 *)((long)param_3 + 0x1c));
  plVar4 = (long *)param_3[4];
  puVar3 = (undefined8 *)*plVar4;
  while (puVar3 != (undefined8 *)0x0) {
    plVar4 = plVar4 + 1;
    FUN_009b2830(*(undefined4 *)(puVar3 + 1),*(undefined4 *)((long)puVar3 + 0xc),
                 *(undefined4 *)(puVar3 + 2),param_1,*param_3,*puVar3,0);
    puVar3 = (undefined8 *)*plVar4;
  }
  thunk_FUN_00d9ff34(auStack_48,*param_3);
  thunk_FUN_00d9ff34(auStack_40,0);
  FUN_009b2bec(0x3f800000,param_1,auStack_48,1,0,auStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b2780(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  uVar3 = 0;
  puVar4 = (undefined4 *)(param_4 + 0x98);
  do {
    if (*(long *)(puVar4 + 2) == 0) {
      uVar2 = FUN_0198ff3c();
      uVar2 = FUN_01990008(uVar2,param_6);
      uVar1 = FUN_00e6a474(param_5);
      uVar1 = FUN_0091ed5c(param_5,uVar1,0x12345678);
      *puVar4 = uVar1;
      *(undefined8 *)(puVar4 + 2) = uVar2;
      puVar4[4] = param_1;
      puVar4[5] = param_2;
      puVar4[6] = param_3;
      *(byte *)((long)puVar4 + 0x81) = param_7 & 1;
      *(undefined1 *)(puVar4 + 0x20) = 0;
      return;
    }
    uVar3 = uVar3 + 1;
    puVar4 = puVar4 + 0x22;
  } while (uVar3 < 0x30);
  return;
}




void FUN_009b2830(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  uint uVar6;
  
  uVar1 = FUN_00e6a474(param_5);
  iVar2 = FUN_0091ed5c(param_5,uVar1,0x12345678);
  uVar6 = 0;
  piVar4 = (int *)(param_4 + 0x98);
  do {
    if (*piVar4 == iVar2) goto LAB_009b28a4;
    uVar6 = uVar6 + 1;
    piVar4 = piVar4 + 0x22;
  } while (uVar6 < 0x30);
  uVar6 = 0xffffffff;
LAB_009b28a4:
  uVar3 = FUN_0198ff3c();
  uVar3 = FUN_01990008(uVar3,param_6);
  param_4 = param_4 + (long)(int)uVar6 * 0x88;
  lVar5 = param_4 + (ulong)*(byte *)(param_4 + 0x118) * 0x18;
  *(byte *)(param_4 + 0x118) = *(byte *)(param_4 + 0x118) + 1;
  *(undefined8 *)(lVar5 + 0xb8) = uVar3;
  *(undefined4 *)(lVar5 + 0xc0) = param_1;
  *(undefined4 *)(lVar5 + 0xc4) = param_2;
  *(undefined4 *)(lVar5 + 200) = param_3;
  return;
}




void FUN_009b28f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(auStack_50,param_6);
  FUN_009b2bec(param_1,param_2,param_3,param_4,param_5,auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b2984(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (**(code **)(*param_1 + 0x10))();
  lVar2 = FUN_019955e4(param_2);
  param_1[0x37d] = lVar2;
  param_1[5] = lVar2;
  FUN_009b2780(0x3f800000,0,0x3f800000,param_1,param_3,param_3,0);
  thunk_FUN_00d9ff34(auStack_58,param_3);
  thunk_FUN_00d9ff34(auStack_50,0);
  FUN_009b2bec(0x3f800000,param_1,auStack_58,1,0,auStack_50);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b2a54(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  int *__s;
  ulong uVar5;
  int *piVar6;
  
  uVar1 = FUN_00e6a474(param_2);
  iVar2 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  uVar4 = 0;
  __s = (int *)(param_1 + 0x98);
  do {
    if (*__s == iVar2) {
      uVar3 = FUN_0198ff3c();
      FUN_019901e8(uVar3,*(undefined8 *)(__s + 2));
      if ((char)__s[0x20] != '\0') {
        uVar5 = 0;
        piVar6 = __s + 8;
        do {
          uVar3 = FUN_0198ff3c();
          FUN_019901e8(uVar3,*(undefined8 *)piVar6);
          uVar5 = uVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (uVar5 < *(byte *)(__s + 0x20));
      }
      memset(__s,0,0x88);
      return;
    }
    uVar4 = uVar4 + 1;
    __s = __s + 0x22;
  } while (uVar4 < 0x30);
  return;
}




void FUN_009b2b10(int param_1,int param_2,long param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int local_50 [2];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  thunk_FUN_00d9ff34(local_50);
  iVar1 = *param_5;
  uVar3 = 0;
  piVar4 = (int *)(param_3 + 0x1af0);
  do {
    if (*piVar4 == 0) {
      *piVar4 = local_50[0];
      piVar4[1] = iVar1;
      piVar4[2] = param_1;
      piVar4[3] = param_2;
      break;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 4;
  } while (uVar3 < 0xf);
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009b2bb0(int param_1,int param_2,long param_3,int *param_4,int *param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  iVar1 = *param_5;
  uVar2 = 0;
  piVar3 = (int *)(param_3 + 0x1af0);
  do {
    if (*piVar3 == 0) {
      *piVar3 = *param_4;
      piVar3[1] = iVar1;
      piVar3[2] = param_1;
      piVar3[3] = param_2;
      return;
    }
    uVar2 = uVar2 + 1;
    piVar3 = piVar3 + 4;
  } while (uVar2 < 0xf);
  return;
}




void FUN_009b2bec(long param_1,int *param_2,undefined8 param_3,undefined8 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  
  iVar1 = *param_2;
  uVar3 = 0;
  lVar4 = 0x98;
  while (*(int *)(param_1 + lVar4) != iVar1) {
    uVar3 = uVar3 + 1;
    lVar4 = lVar4 + 0x88;
    if (0x2f < uVar3) {
      return;
    }
  }
  uVar3 = 0;
  pcVar5 = (char *)(param_1 + 0x1a20);
  *(int *)(param_1 + 0x1c08) = iVar1;
  while ((*pcVar5 == '\0' || (*(int *)(pcVar5 + -8) != iVar1))) {
    uVar3 = uVar3 + 1;
    pcVar5 = pcVar5 + 0xc;
    if (0x11 < uVar3) {
LAB_009b2c54:
      iVar2 = *param_5;
      if (iVar2 == 0) {
        iVar2 = -1;
      }
      FUN_009b2c9c(param_1,iVar1,param_3,param_4,iVar2);
      return;
    }
  }
  iVar1 = *(int *)(pcVar5 + -4);
  goto LAB_009b2c54;
}




undefined8 FUN_009b2c64(long param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  
  uVar1 = 0;
  piVar2 = (int *)(param_1 + 0x98);
  do {
    if (*piVar2 == *param_2) {
      return 1;
    }
    uVar1 = uVar1 + 1;
    piVar2 = piVar2 + 0x22;
  } while (uVar1 < 0x30);
  return 0;
}




void FUN_009b2c9c(undefined8 param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  ulong uVar1;
  long lVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = 0;
  lVar2 = 0x98;
  do {
    if (*(int *)(param_2 + lVar2) == param_3) goto LAB_009b2cf0;
    uVar4 = uVar4 + 1;
    lVar2 = lVar2 + 0x88;
  } while (uVar4 < 0x30);
  uVar4 = 0xffffffff;
LAB_009b2cf0:
  uVar1 = FUN_009b2db0(param_2);
  if (((uVar1 & 1) == 0) || (*(char *)(param_2 + (long)(int)uVar4 * 0x88 + 0x119) != '\0')) {
    FUN_009b24ac(param_1,param_2,uVar4,param_4,param_5,0);
  }
  else {
    lVar2 = *(long *)(param_2 + 0x1bf0);
    *(float *)(lVar2 + 0x18) = *(float *)(param_2 + (long)(int)uVar4 * 0x88 + 0xa8) * (float)param_1
    ;
    *(undefined4 *)(lVar2 + 0x14) = param_4;
  }
  if (param_6 == -1) {
    *(undefined1 *)(param_2 + 0x1d14) = 0xff;
  }
  else {
    uVar4 = 0;
    piVar3 = (int *)(param_2 + 0x1af0);
    do {
      if (*piVar3 == param_6) goto LAB_009b2d80;
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (uVar4 < 0xf);
    uVar4 = 0xffffffff;
LAB_009b2d80:
    *(char *)(param_2 + 0x1d14) = (char)uVar4;
  }
  return;
}




undefined8 FUN_009b2db0(long param_1,int param_2)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  
  if (*(long **)(param_1 + 0x1bf0) != (long *)0x0) {
    uVar3 = 0;
    plVar1 = (long *)(param_1 + 0xb8);
    while ((int)plVar1[-4] != param_2) {
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 0x11;
      if (0x2f < uVar3) {
        return 0;
      }
    }
    lVar2 = **(long **)(param_1 + 0x1bf0);
    if (lVar2 == plVar1[-3]) {
      return 1;
    }
    uVar3 = 0;
    do {
      if (lVar2 == *plVar1) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      plVar1 = plVar1 + 3;
    } while (uVar3 < 4);
  }
  return 0;
}




void FUN_009b2e20(float param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  float *pfVar5;
  float fVar6;
  
  plVar1 = *(long **)(param_2 + 0x1bf0);
  if (plVar1 != (long *)0x0) {
    lVar4 = (long)(short)(char)((ushort)(*(short *)(param_2 + 0x1d12) << 2) >> 8);
    if (*plVar1 == *(long *)(param_2 + lVar4 * 0x88 + 0xa0)) {
      fVar6 = *(float *)(param_2 + lVar4 * 0x88 + 0xa8);
LAB_009b2ea8:
      *(float *)(plVar1 + 3) = fVar6 * param_1;
      return;
    }
    uVar2 = (uint)*(byte *)(param_2 + lVar4 * 0x88 + 0x118);
    if (uVar2 != 0) {
      uVar3 = 0;
      pfVar5 = (float *)(param_2 + lVar4 * 0x88 + 0xc0);
      do {
        if (*plVar1 == *(long *)(pfVar5 + -2)) {
          fVar6 = *pfVar5;
          goto LAB_009b2ea8;
        }
        uVar3 = uVar3 + 1;
        pfVar5 = pfVar5 + 6;
      } while (uVar3 < uVar2);
    }
  }
  return;
}




uint FUN_009b2eb4(undefined8 param_1)

{
  long lVar1;
  uint uVar2;
  undefined4 local_30 [2];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(local_30);
  uVar2 = FUN_009b2db0(param_1,local_30[0]);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b2f10(undefined8 param_1,undefined4 *param_2)

{
  FUN_009b2db0(param_1,*param_2);
  return;
}




undefined8 FUN_009b2f18(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  uVar1 = FUN_00e6a474(param_2);
  iVar2 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x98);
  do {
    if (*piVar4 == iVar2) {
      return 1;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x22;
  } while (uVar3 < 0x30);
  return 0;
}




void FUN_009b2f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  thunk_FUN_00d9ff34(auStack_40);
  thunk_FUN_00d9ff34(auStack_48,param_3);
  FUN_009b2ff8(param_1,auStack_40,auStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009b2ff8(long param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  long lVar7;
  
  iVar1 = *param_2;
  uVar4 = 0;
  lVar7 = 0x98;
  do {
    if (*(int *)(param_1 + lVar7) == iVar1) {
      iVar2 = *param_3;
      uVar4 = 0;
      lVar7 = 0x98;
      do {
        if (*(int *)(param_1 + lVar7) == iVar2) {
          uVar4 = 0;
          pcVar5 = (char *)(param_1 + 0x1a20);
          while (((*pcVar5 == '\0' || (*(int *)(pcVar5 + -8) != iVar1)) ||
                 (*(int *)(pcVar5 + -4) != iVar2))) {
            uVar4 = uVar4 + 1;
            pcVar5 = pcVar5 + 0xc;
            if (0x11 < uVar4) {
              FUN_009b3164(param_1);
              uVar6 = 0;
              pcVar5 = (char *)(param_1 + 0x1a20);
              do {
                if (*pcVar5 == '\0') {
                  *(int *)(pcVar5 + -8) = iVar1;
                  *(int *)(pcVar5 + -4) = iVar2;
                  *pcVar5 = '\x01';
                  if (*(long *)(param_1 + 0x1bf0) == 0) {
                    return;
                  }
                  lVar7 = -0x1980;
                  do {
                    if ((iVar1 == *(int *)(param_1 + lVar7 + 0x1a18)) &&
                       (iVar1 == *(int *)(param_1 + 0x1c08))) {
                      if ((long)*(char *)(param_1 + 0x1d14) == -1) {
                        uVar3 = 0xffffffff;
                      }
                      else {
                        uVar3 = *(undefined4 *)
                                 (param_1 + (long)*(char *)(param_1 + 0x1d14) * 0x10 + 0x1af0);
                      }
                      FUN_009b2c9c(*(undefined4 *)(*(long *)(param_1 + 0x1bf0) + 0x18),param_1,iVar2
                                   ,*(undefined4 *)(*(long *)(param_1 + 0x1bf0) + 0x14),0,uVar3);
                    }
                    lVar7 = lVar7 + 0x88;
                  } while (lVar7 != 0);
                  return;
                }
                uVar6 = uVar6 + 1;
                pcVar5 = pcVar5 + 0xc;
              } while (uVar6 < 0x12);
              return;
            }
          }
          return;
        }
        uVar4 = uVar4 + 1;
        lVar7 = lVar7 + 0x88;
      } while (uVar4 < 0x30);
      return;
    }
    uVar4 = uVar4 + 1;
    lVar7 = lVar7 + 0x88;
  } while (uVar4 < 0x30);
  return;
}

