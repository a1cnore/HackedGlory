// functions/00f30 — 41 functions
#include "libGameKindred.h"




void FUN_00f30014(long param_1,long param_2,undefined4 param_3,ushort param_4,ushort param_5,
                 ushort param_6,long *param_7,uint param_8)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  
  if (*(int *)(param_1 + 8) != 0) {
    uVar4 = 0;
    do {
      if (param_8 <= *(uint *)(param_2 + 0x200)) {
        return;
      }
      plVar3 = *(long **)(*(long *)(param_1 + 0x10) + uVar4 * 8);
      if (((((plVar3 != (long *)0x0) &&
            (uVar2 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3), (uVar2 & 1) != 0)) &&
           ((*(ushort *)(plVar3 + 2) & param_5) != 0)) &&
          ((*(ushort *)((long)plVar3 + 0x12) & param_6) != 0)) &&
         (((param_4 == 0xffff || ((*(ushort *)((long)plVar3 + 0xe) & param_4) != 0)) &&
          ((*(char *)((long)plVar3 + 0xc) != '\0' &&
           ((param_7 == (long *)0x0 ||
            (uVar2 = (**(code **)(*param_7 + 0x10))(param_7,plVar3), (uVar2 & 1) != 0)))))))) {
        uVar1 = *(uint *)(param_2 + 0x200);
        *(long **)(param_2 + (ulong)uVar1 * 8) = plVar3;
        uVar1 = uVar1 + 1;
        *(uint *)(param_2 + 0x200) = uVar1;
        if (param_8 <= uVar1) {
          return;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 8));
  }
  return;
}




bool FUN_00f30128(undefined8 param_1,long param_2)

{
  return *(int *)(param_2 + 8) != -1;
}




void FUN_00f30138(long param_1)

{
  FUN_00f3032c(param_1 + 0x38);
  return;
}




void FUN_00f30140(long param_1)

{
  FUN_00f30528(param_1 + 0x38);
  return;
}




void FUN_00f30148(long param_1)

{
  FUN_00f3022c(param_1 + 0x38);
  return;
}




undefined8 FUN_00f30150(long param_1)

{
  uint uVar1;
  
  if (*(uint *)(param_1 + 8) != 0) {
    uVar1 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x10) + (ulong)uVar1 * 8) != 0) {
        return 0;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(param_1 + 8));
  }
  return 1;
}




void FUN_00f30184(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    if (uVar3 < 0x20) {
      uVar2 = uVar3 << 1;
    }
    else if (uVar3 == 0xffffffff) {
      uVar2 = 0;
    }
    else {
      uVar2 = (uVar3 + 0x10) - (uVar3 & 0xf);
    }
    uVar1 = uVar3 + 1;
    if (uVar3 + 1 <= uVar2) {
      uVar1 = uVar2;
    }
    FUN_00f2fd0c(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00f3020c(void)

{
  return;
}




void FUN_00f30210(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_02829260;
  param_1[1] = 0;
  return;
}




void FUN_00f3022c(long param_1)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}




void FUN_00f30264(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_02829260;
  param_1[1] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
  }
  param_1[5] = 0;
  return;
}




void FUN_00f302a8(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_02829260;
  param_1[1] = 0;
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete__((void *)param_1[5]);
  }
  operator_delete(param_1);
  return;
}




int FUN_00f302ec(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = param_3 + -1;
    if (param_1 <= param_3 + -1) {
      iVar1 = param_1;
    }
  }
  if (param_2 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_4 + -1;
    if (param_2 <= param_4 + -1) {
      iVar2 = param_2;
    }
  }
  return (iVar1 + iVar2 * param_3) * 6;
}




void FUN_00f3032c(long param_1,float *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined8 uVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar9 == 0) {
    lVar9 = 0;
    do {
      ((undefined8 *)(param_3 + lVar9))[1] = 0x3f80000000000000;
      *(undefined8 *)(param_3 + lVar9) = 0;
      lVar9 = lVar9 + 0x10;
    } while (lVar9 != 0x60);
  }
  else {
    fVar18 = *(float *)(param_1 + 0x18);
    fVar19 = *(float *)(param_1 + 0x1c);
    fVar17 = *(float *)(param_1 + 0x10);
    fVar20 = *(float *)(param_1 + 0x24);
    iVar5 = *(int *)(param_1 + 8);
    fVar16 = *param_2;
    if (fVar19 <= *param_2) {
      fVar16 = fVar19;
    }
    fVar22 = fVar17;
    if (fVar17 <= fVar16) {
      fVar22 = fVar16;
    }
    fVar16 = param_2[2];
    if (fVar20 <= param_2[2]) {
      fVar16 = fVar20;
    }
    uVar7 = iVar5 - 1;
    fVar23 = fVar18;
    if (fVar18 <= fVar16) {
      fVar23 = fVar16;
    }
    uVar8 = *(int *)(param_1 + 0xc) - 1;
    fVar16 = ((fVar22 - fVar17) / (fVar19 - fVar17)) * (float)uVar7;
    fVar17 = (float)(int)fVar16;
    fVar18 = ((fVar23 - fVar18) / (fVar20 - fVar18)) * (float)uVar8;
    uVar13 = (uint)fVar17;
    fVar19 = (float)(int)fVar18;
    uVar4 = uVar7;
    if ((int)uVar13 <= (int)uVar7) {
      uVar4 = uVar13;
    }
    uVar14 = (uint)fVar19;
    uVar3 = 0;
    if (-1 < (int)uVar13) {
      uVar3 = uVar4;
    }
    uVar4 = uVar8;
    if ((int)uVar14 <= (int)uVar8) {
      uVar4 = uVar14;
    }
    uVar15 = (uint)(fVar17 + 1.0);
    uVar13 = 0;
    if (-1 < (int)uVar14) {
      uVar13 = uVar4;
    }
    if ((int)uVar15 <= (int)uVar7) {
      uVar7 = uVar15;
    }
    uVar14 = (uint)(fVar19 + 1.0);
    uVar4 = 0;
    if (-1 < (int)uVar15) {
      uVar4 = uVar7;
    }
    if ((int)uVar14 <= (int)uVar8) {
      uVar8 = uVar14;
    }
    iVar6 = uVar13 * iVar5 * 6;
    uVar7 = 0;
    if (-1 < (int)uVar14) {
      uVar7 = uVar8;
    }
    fVar16 = fVar16 - fVar17;
    fVar18 = fVar18 - fVar19;
    fVar17 = 1.0 - fVar16;
    fVar19 = 1.0 - fVar18;
    iVar5 = uVar7 * iVar5 * 6;
    lVar11 = 0;
    puVar12 = (undefined8 *)(param_3 + 8);
    do {
      iVar10 = (int)lVar11;
      puVar1 = (undefined8 *)(lVar9 + (ulong)(iVar6 + uVar3 * 6 + iVar10) * 0x10);
      puVar2 = (undefined8 *)(lVar9 + (ulong)(iVar6 + uVar4 * 6 + iVar10) * 0x10);
      uVar21 = *puVar1;
      uVar24 = puVar1[1];
      uVar26 = *puVar2;
      uVar28 = puVar2[1];
      puVar1 = (undefined8 *)(lVar9 + (ulong)(iVar5 + uVar3 * 6 + iVar10) * 0x10);
      puVar2 = (undefined8 *)(lVar9 + (ulong)(iVar5 + uVar4 * 6 + iVar10) * 0x10);
      uVar30 = *puVar1;
      uVar31 = puVar1[1];
      uVar27 = *puVar2;
      uVar29 = puVar2[1];
      fVar20 = fVar19 * (fVar17 * (float)uVar21 + fVar16 * (float)uVar26) +
               fVar18 * (fVar17 * (float)uVar30 + fVar16 * (float)uVar27);
      fVar22 = fVar19 * (fVar17 * (float)((ulong)uVar21 >> 0x20) +
                        fVar16 * (float)((ulong)uVar26 >> 0x20)) +
               fVar18 * (fVar17 * (float)((ulong)uVar30 >> 0x20) +
                        fVar16 * (float)((ulong)uVar27 >> 0x20));
      fVar23 = fVar19 * (fVar17 * (float)uVar24 + fVar16 * (float)uVar28) +
               fVar18 * (fVar17 * (float)uVar31 + fVar16 * (float)uVar29);
      fVar25 = fVar19 * (fVar17 * (float)((ulong)uVar24 >> 0x20) +
                        fVar16 * (float)((ulong)uVar28 >> 0x20)) +
               fVar18 * (fVar17 * (float)((ulong)uVar31 >> 0x20) +
                        fVar16 * (float)((ulong)uVar29 >> 0x20));
      lVar11 = lVar11 + 1;
      puVar12[-1] = CONCAT44(fVar22 * fVar22 * 0.5,fVar20 * fVar20 * 0.5);
      *puVar12 = CONCAT44(fVar25 * fVar25 * 0.5,fVar23 * fVar23 * 0.5);
      puVar12 = puVar12 + 2;
    } while (lVar11 != 6);
  }
  return;
}




undefined8 FUN_00f30528(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (*(void **)(param_1 + 0x28) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 0x28));
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  local_5c = 0;
  FUN_00e6acac(param_3,"%f %f %f %f%n",param_1 + 0x10,param_1 + 0x18,param_1 + 0x1c,param_1 + 0x24,
               &local_5c);
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  lVar6 = (long)local_5c;
  FUN_00e6acac(param_3 + lVar6,"%d %d%n",(undefined8 *)(param_1 + 8),param_1 + 0xc,&local_5c);
  lVar8 = (long)local_5c;
  uVar3 = *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc) * 6;
  pvVar5 = operator_new__((ulong)uVar3 << 4);
  *(void **)(param_1 + 0x28) = pvVar5;
  if (uVar3 != 0) {
    lVar8 = param_3 + lVar6 + lVar8;
    uVar9 = 2;
    do {
      FUN_00e6acac(lVar8,"%f%n",(long)pvVar5 + (ulong)(uVar9 - 2) * 0x10 + 0xc,&local_5c);
      lVar7 = (long)local_5c;
      lVar6 = *(long *)(param_1 + 0x28) + (ulong)(uVar9 - 2) * 0x10;
      FUN_00e6acac(lVar8 + lVar7,"%f %f %f%n",lVar6,lVar6 + 4,lVar6 + 8,&local_5c);
      lVar8 = lVar8 + lVar7 + (long)local_5c;
      lVar6 = *(long *)(param_1 + 0x28) + (ulong)(uVar9 - 1) * 0x10;
      FUN_00e6acac(lVar8,"%f %f %f%n",lVar6,lVar6 + 4,lVar6 + 8,&local_5c);
      lVar6 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar6 + (ulong)(uVar9 - 1) * 0x10 + 0xc) = 0;
      lVar6 = lVar6 + (ulong)uVar9 * 0x10;
      lVar8 = lVar8 + local_5c;
      FUN_00e6acac(lVar8,"%f %f %f%n",lVar6,lVar6 + 4,lVar6 + 8,&local_5c);
      lVar6 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar6 + (ulong)uVar9 * 0x10 + 0xc) = 0;
      lVar6 = lVar6 + (ulong)(uVar9 + 1) * 0x10;
      lVar8 = lVar8 + local_5c;
      FUN_00e6acac(lVar8,"%f %f %f%n",lVar6,lVar6 + 4,lVar6 + 8,&local_5c);
      lVar6 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar6 + (ulong)(uVar9 + 1) * 0x10 + 0xc) = 0;
      lVar6 = lVar6 + (ulong)(uVar9 + 2) * 0x10;
      lVar8 = lVar8 + local_5c;
      FUN_00e6acac(lVar8,"%f %f %f%n",lVar6,lVar6 + 4,lVar6 + 8,&local_5c);
      lVar6 = *(long *)(param_1 + 0x28);
      *(undefined4 *)(lVar6 + (ulong)(uVar9 + 2) * 0x10 + 0xc) = 0;
      uVar1 = uVar9 + 3;
      lVar6 = lVar6 + (ulong)uVar1 * 0x10;
      lVar8 = lVar8 + local_5c;
      FUN_00e6acac(lVar8,"%f %f %f%n",lVar6,lVar6 + 4,lVar6 + 8,&local_5c);
      pvVar5 = *(void **)(param_1 + 0x28);
      uVar2 = uVar9 + 4;
      uVar9 = uVar9 + 6;
      *(undefined4 *)((long)pvVar5 + (ulong)uVar1 * 0x10 + 0xc) = 0;
      lVar8 = lVar8 + local_5c;
    } while (uVar2 < uVar3);
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f3079c(long param_1)

{
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  return;
}




uint FUN_00f307a8(long param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)(param_1 + 0x144) + -1;
  if (*(int *)(param_1 + 0x144) < 1) {
    uVar2 = 1 << (ulong)(*(uint *)(param_1 + 0x120) & 0x1f);
    *(uint *)(param_1 + 0x120) = *(uint *)(param_1 + 0x120) + 1;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + (long)iVar1 * 2 + 0x124);
    *(int *)(param_1 + 0x144) = iVar1;
  }
  return uVar2;
}




void FUN_00f307e0(long param_1,short param_2)

{
  int iVar1;
  ulong uVar2;
  short *psVar3;
  
  uVar2 = 0;
  psVar3 = (short *)(param_1 + 0x10);
  do {
    if (*psVar3 == param_2) goto LAB_00f30808;
    uVar2 = uVar2 + 1;
    psVar3 = psVar3 + 9;
  } while (uVar2 < 0x10);
  uVar2 = 0xffffffffffffffff;
LAB_00f30808:
  iVar1 = *(int *)(param_1 + 0x144);
  *(undefined2 *)(param_1 + (long)iVar1 * 2 + 0x124) =
       *(undefined2 *)(param_1 + uVar2 * 0x12 + 0x10);
  *(int *)(param_1 + 0x144) = iVar1 + 1;
  return;
}




ulong FUN_00f30830(long param_1,short param_2)

{
  ulong uVar1;
  short *psVar2;
  
  uVar1 = 0;
  psVar2 = (short *)(param_1 + 0x10);
  do {
    if (*psVar2 == param_2) {
      return uVar1;
    }
    uVar1 = uVar1 + 1;
    psVar2 = psVar2 + 9;
  } while (uVar1 < 0x10);
  return 0xffffffff;
}




undefined2 FUN_00f30860(char *param_1,char *param_2)

{
  int iVar1;
  char *__s1;
  ulong uVar2;
  
  uVar2 = 0;
  __s1 = param_1;
  do {
    iVar1 = strcmp(__s1,param_2);
    if (iVar1 == 0) goto LAB_00f308a4;
    uVar2 = uVar2 + 1;
    __s1 = __s1 + 0x12;
  } while (uVar2 < 0x10);
  uVar2 = 0xffffffffffffffff;
LAB_00f308a4:
  return *(undefined2 *)(param_1 + uVar2 * 0x12 + 0x10);
}




ulong FUN_00f308c0(char *param_1,char *param_2)

{
  int iVar1;
  ulong uVar2;
  
  uVar2 = 0;
  do {
    iVar1 = strcmp(param_1,param_2);
    if (iVar1 == 0) goto LAB_00f30900;
    uVar2 = uVar2 + 1;
    param_1 = param_1 + 0x12;
  } while (uVar2 < 0x10);
  uVar2 = 0xffffffff;
LAB_00f30900:
  return uVar2 & 0xffffffff;
}




void FUN_00f30914(undefined8 *param_1)

{
  param_1[7] = 0x3f80000000000000;
  param_1[6] = 0;
  param_1[5] = 0x3f800000;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[2] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  *(ushort *)((long)param_1 + 100) = *(ushort *)((long)param_1 + 100) & 0xe000 | 0x40;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 8) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x44) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 10) = 0xff7fffff;
  *(undefined4 *)((long)param_1 + 0x54) = 0xff7fffff;
  param_1[1] = 0;
  *param_1 = 0x3f800000;
  *(undefined4 *)(param_1 + 9) = 0x7f7fffff;
  *(undefined4 *)((long)param_1 + 0x4c) = 0xff7fffff;
  return;
}




void FUN_00f3098c(void)

{
  return;
}




void FUN_00f30990(long param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x2c0) = 0;
  param_2 = param_2 + 0x2c0;
  if (*(long *)(param_1 + 0x68) == 0) {
    *(long *)(param_1 + 0x68) = param_2;
  }
  else {
    **(long **)(param_1 + 0x70) = param_2;
  }
  *(long *)(param_1 + 0x70) = param_2;
  *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
  return;
}




void FUN_00f309c4(long param_1,long param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_2 + 0x18);
  *puVar1 = 0;
  if (*(long *)(param_1 + 0x80) == 0) {
    *(undefined8 **)(param_1 + 0x80) = puVar1;
  }
  else {
    **(undefined8 **)(param_1 + 0x88) = puVar1;
  }
  *(undefined8 **)(param_1 + 0x88) = puVar1;
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) + 1;
  return;
}




void FUN_00f309f4(long param_1)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 100) & 7;
  if ((uVar1 < 5) && (uVar1 != 1)) {
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | 1;
  }
  return;
}




void FUN_00f30a1c(long param_1)

{
  if ((*(ushort *)(param_1 + 100) & 7) < 5) {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | 1;
  }
  return;
}




void FUN_00f30a40(long param_1)

{
  if ((ushort)((*(ushort *)(param_1 + 100) & 7) - 1) < 3) {
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | 4;
  }
  return;
}




void FUN_00f30a68(long param_1)

{
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | 5;
  return;
}




void FUN_00f30a80(long param_1,uint param_2)

{
  ushort uVar1;
  
  if ((*(ushort *)(param_1 + 100) & 7) == 1) {
    uVar1 = 2;
    if ((param_2 & 1) == 0) {
      uVar1 = 3;
    }
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | uVar1;
  }
  return;
}




void FUN_00f30aac(long param_1)

{
  if ((*(ushort *)(param_1 + 100) & 6) == 2) {
    *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xfff8 | 1;
  }
  return;
}




long FUN_00f30acc(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_1 + 0x80) != 0) {
    lVar1 = *(long *)(param_1 + 0x80) + -0x18;
  }
  return lVar1;
}




long FUN_00f30ae0(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  if (*(long *)(param_2 + 0x18) != 0) {
    lVar1 = *(long *)(param_2 + 0x18) + -0x18;
  }
  return lVar1;
}




undefined4 FUN_00f30af4(long param_1)

{
  return *(undefined4 *)(param_1 + 0x90);
}




int FUN_00f30afc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_00f361e4(param_2);
  if ((*(long *)(param_1 + 0x80) != 0) && (lVar8 = *(long *)(param_1 + 0x80) + -0x18, lVar8 != 0)) {
    iVar9 = 0;
    do {
      if (*(int *)(lVar8 + 0x10) == iVar3) goto LAB_00f30c38;
      plVar1 = (long *)(lVar8 + 0x18);
      iVar9 = iVar9 + 1;
      lVar8 = 0;
      if (*plVar1 != 0) {
        lVar8 = *plVar1 + -0x18;
      }
    } while (lVar8 != 0);
  }
  uVar5 = FUN_00f3428c();
  iVar9 = -1;
  if ((*(long *)(param_1 + 0x68) != 0) && (lVar8 = *(long *)(param_1 + 0x68) + -0x2c0, lVar8 != 0))
  {
    lVar10 = 0;
    iVar9 = -1;
    do {
      if (*(long **)(lVar8 + 0x208) != (long *)0x0) {
        lVar11 = **(long **)(lVar8 + 0x208);
        uVar6 = FUN_00f335bc(uVar5);
        lVar11 = *(long *)(lVar11 + (uVar6 & 0xff) * 8 + 8);
        if (lVar11 == 0) {
          FUN_00e6a2fc(0);
        }
        lVar11 = *(long *)(lVar11 + 8);
        if ((lVar11 != 0) && (uVar6 = FUN_019970a8(lVar11,iVar3), (uVar6 & 1) != 0)) {
          local_68 = 0;
          uStack_60 = 0;
          if (lVar10 == 0) {
            uVar7 = FUN_00f3428c();
            lVar10 = FUN_00f323e8(uVar7,param_1);
            if (lVar10 == 0) goto LAB_00f30c24;
            uVar4 = FUN_019970ec(lVar11,iVar3);
            iVar9 = *(int *)(param_1 + 0x90) + -1;
            FUN_00f3606c(lVar10,iVar3,&local_68,uVar4,0xffffffff);
          }
          FUN_00f34c8c(lVar8,lVar10);
        }
      }
LAB_00f30c24:
      plVar1 = (long *)(lVar8 + 0x2c0);
      lVar8 = 0;
      if (*plVar1 != 0) {
        lVar8 = *plVar1 + -0x2c0;
      }
    } while (lVar8 != 0);
  }
LAB_00f30c38:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return iVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f30c6c(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  
  if (((param_2 != 0xffffffff) && (*(long *)(param_1 + 0x80) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x80) + -0x18, lVar2 != 0)) {
    param_2 = ~param_2;
    do {
      param_2 = param_2 + 1;
      if (param_2 == 0) {
        FUN_00f36170(lVar2,param_3,param_4);
        return;
      }
      plVar1 = (long *)(lVar2 + 0x18);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -0x18;
      }
    } while (lVar2 != 0);
  }
  return;
}




void FUN_00f30cb4(long param_1,uint param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  
  if (((param_2 != 0xffffffff) && (*(long *)(param_1 + 0x80) != 0)) &&
     (lVar2 = *(long *)(param_1 + 0x80) + -0x18, lVar2 != 0)) {
    param_2 = ~param_2;
    do {
      param_2 = param_2 + 1;
      if (param_2 == 0) {
        FUN_00f360c8(lVar2,param_3,param_4);
        return;
      }
      plVar1 = (long *)(lVar2 + 0x18);
      lVar2 = 0;
      if (*plVar1 != 0) {
        lVar2 = *plVar1 + -0x18;
      }
    } while (lVar2 != 0);
  }
  return;
}




uint FUN_00f30cfc(long param_1)

{
  return 0xa1U >> (ulong)((*(ushort *)(param_1 + 100) ^ 4) & 7) & 1;
}




void FUN_00f30d18(float param_1,long param_2)

{
  *(float *)(param_2 + 0x60) = *(float *)(param_2 + 0x5c) + param_1;
  return;
}




void FUN_00f30d28(long param_1,long param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar8 = (undefined2 *)(*(long *)(param_1 + 0x68) + -0x2c0), puVar8 != (undefined2 *)0x0)) {
    piVar2 = (int *)(param_2 + 0x84004);
    do {
      iVar3 = *(int *)(puVar8 + 0x100);
      do {
        while (*piVar2 != 0) {
          ClearExclusiveLocal();
        }
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar6) {
          *piVar2 = 100;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      iVar4 = *(int *)(param_2 + 0x84000);
      if (iVar3 != 0) {
        puVar9 = (undefined2 *)(param_2 + (long)iVar4 * 2 + 0x80000);
        puVar10 = puVar8;
        iVar7 = iVar3;
        do {
          iVar7 = iVar7 + -1;
          *puVar9 = *puVar10;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        } while (iVar7 != 0);
      }
      *(int *)(param_2 + 0x84000) = iVar4 + iVar3;
      *piVar2 = 0;
      plVar1 = (long *)(puVar8 + 0x160);
      *(undefined4 *)(puVar8 + 0x100) = 0;
      *(undefined1 *)(puVar8 + 0x124) = 1;
      puVar8 = (undefined2 *)0x0;
      if (*plVar1 != 0) {
        puVar8 = (undefined2 *)(*plVar1 + -0x2c0);
      }
    } while (puVar8 != (undefined2 *)0x0);
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) & 0xffc7;
  return;
}




void FUN_00f30dd0(float param_1,long param_2,undefined8 param_3)

{
  int *piVar1;
  long *plVar2;
  ushort uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  float fVar10;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  undefined1 auStack_88 [16];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar3 = *(ushort *)(param_2 + 100);
  param_1 = *(float *)(param_2 + 0x58) + param_1;
  if ((uVar3 >> 10 & 1) != 0) {
    *(float *)(param_2 + 0x58) = param_1;
    goto LAB_00f310c8;
  }
  uVar7 = (uint)uVar3;
  uVar6 = (uVar3 & 7) << 3 | uVar7 & 0xffffffc7;
  *(undefined4 *)(param_2 + 0x58) = 0;
  *(short *)(param_2 + 100) = (short)uVar6;
  if ((uVar7 & 7) == 1) {
    fVar10 = *(float *)(param_2 + 0x60);
    if (fVar10 == 0.0) {
      if ((*(long *)(param_2 + 0x68) != 0) &&
         (lVar8 = *(long *)(param_2 + 0x68) + -0x2c0, lVar8 != 0)) {
        do {
          uVar5 = FUN_00f34c54(*(undefined4 *)(param_2 + 0x5c),lVar8);
          if ((uVar5 & 1) == 0) {
            uVar6 = (uint)*(ushort *)(param_2 + 100);
            goto LAB_00f30ec0;
          }
          plVar2 = (long *)(lVar8 + 0x2c0);
          lVar8 = 0;
          if (*plVar2 != 0) {
            lVar8 = *plVar2 + -0x2c0;
          }
        } while (lVar8 != 0);
        uVar6 = (uint)*(ushort *)(param_2 + 100);
      }
      uVar6 = uVar6 & 0xffffffc7 | 0x20;
LAB_00f30e84:
      *(short *)(param_2 + 100) = (short)uVar6;
    }
    else if ((0.0 < fVar10) && (fVar10 < *(float *)(param_2 + 0x5c))) {
      uVar6 = uVar7 & 0xffffffc7 | 0x20;
      *(short *)(param_2 + 100) = (short)uVar6;
      if ((uVar3 >> 0xb & 1) != 0) {
        uVar6 = uVar7 & 0xffffffc0 | 0x25;
        goto LAB_00f30e84;
      }
    }
  }
LAB_00f30ec0:
  uVar7 = uVar6 >> 3 & 7;
  if ((uVar7 < 5) && ((1 << (ulong)uVar7 & 0x1aU) != 0)) {
    fVar10 = *(float *)(param_2 + 0x5c);
    FUN_00f3b21c(&local_288);
    if ((*(long *)(param_2 + 0x80) != 0) && (lVar8 = *(long *)(param_2 + 0x80) + -0x18, lVar8 != 0))
    {
      iVar9 = 0;
      do {
        if (-1 < (short)(*(ushort *)(lVar8 + 0x14) << 7)) {
          uVar3 = *(ushort *)(lVar8 + 0x14) & 7;
          FUN_00f36170(lVar8,auStack_88,uVar3);
          FUN_00f3b238(iVar9,auStack_88,uVar3,&local_288);
        }
        plVar2 = (long *)(lVar8 + 0x18);
        iVar9 = iVar9 + 1;
        lVar8 = 0;
        if (*plVar2 != 0) {
          lVar8 = *plVar2 + -0x18;
        }
      } while (lVar8 != 0);
    }
    if ((*(long *)(param_2 + 0x68) != 0) && (lVar8 = *(long *)(param_2 + 0x68) + -0x2c0, lVar8 != 0)
       ) {
      do {
        FUN_00f34f70(fVar10,param_1,lVar8,param_3,1 < (uVar7 - 3 & 0xffff),param_2,param_2,
                     &local_288);
        plVar2 = (long *)(lVar8 + 0x2c0);
        lVar8 = 0;
        if (*plVar2 != 0) {
          lVar8 = *plVar2 + -0x2c0;
        }
      } while (lVar8 != 0);
    }
    uVar6 = (uint)*(ushort *)(param_2 + 100);
    *(float *)(param_2 + 0x5c) = param_1 + fVar10;
  }
  if ((uVar6 & 0x38) == 0x20) {
    if ((*(long *)(param_2 + 0x68) != 0) && (lVar8 = *(long *)(param_2 + 0x68) + -0x2c0, lVar8 != 0)
       ) {
      iVar9 = 0;
      do {
        plVar2 = (long *)(lVar8 + 0x2c0);
        piVar1 = (int *)(lVar8 + 0x200);
        lVar8 = 0;
        if (*plVar2 != 0) {
          lVar8 = *plVar2 + -0x2c0;
        }
        iVar9 = *piVar1 + iVar9;
      } while (lVar8 != 0);
      if (iVar9 != 0) goto LAB_00f31000;
    }
    *(ushort *)(param_2 + 100) = (ushort)uVar6 & 0xffcf | 0x28;
  }
LAB_00f31000:
  if (((uVar6 & 7) < 5) && ((1 << (ulong)(uVar6 & 7) & 0x1aU) != 0)) {
    local_288 = 3.4028235e+38;
    fStack_27c = -3.4028235e+38;
    fStack_284 = local_288;
    fStack_280 = local_288;
    local_278 = fStack_27c;
    fStack_274 = fStack_27c;
    if (*(long *)(param_2 + 0x68) != 0) {
      lVar8 = *(long *)(param_2 + 0x68) + -0x2c0;
      while (lVar8 != 0) {
        if (*(int *)(lVar8 + 0x200) != 0) {
          FUN_00f35c30(lVar8,param_3,param_2,&local_288);
        }
        plVar2 = (long *)(lVar8 + 0x2c0);
        lVar8 = 0;
        if (*plVar2 != 0) {
          lVar8 = *plVar2 + -0x2c0;
        }
      }
    }
    if (((fStack_27c < local_288) || (local_278 < fStack_284)) || (fStack_274 < fStack_280)) {
      local_288 = *(float *)(param_2 + 0x30);
      fStack_284 = *(float *)(param_2 + 0x34);
      fStack_280 = *(float *)(param_2 + 0x38);
      fStack_27c = local_288;
      local_278 = fStack_284;
      fStack_274 = fStack_280;
    }
    else {
      *(ulong *)(param_2 + 0x50) = CONCAT44(fStack_274,local_278);
      *(ulong *)(param_2 + 0x48) = CONCAT44(fStack_27c,fStack_280);
      *(ulong *)(param_2 + 0x40) = CONCAT44(fStack_284,local_288);
    }
  }
LAB_00f310c8:
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

