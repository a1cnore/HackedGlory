// functions/00d16 — 34 functions
#include "libGameKindred.h"




undefined8 FUN_00d1608c(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  lVar2 = FUN_00d25570(param_2);
  plVar8 = *(long **)(param_2 + 0x1420);
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    if ((int)plVar8[1] == (int)plVar6[1]) {
      lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
      if ((lVar3 != 0) && (uVar4 = FUN_00d5887c(lVar2), (uVar4 & 1) != 0)) {
        if (lVar2 != 0) {
          uVar9 = 0x10000;
          lVar5 = lVar2;
LAB_00d16160:
          do {
            do {
              lVar7 = lVar5;
              if ((lVar7 != lVar2) &&
                 (lVar5 = FUN_019865b4(*(undefined8 *)(lVar7 + 8),0x6f8008e4), lVar5 != 0)) {
                (**(code **)(lVar5 + 8))(lVar7,lVar3);
              }
              if (((uVar9 & 0xffff) < uVar9 >> 0x10) &&
                 (lVar5 = *(long *)(lVar7 + 0x18), lVar5 != 0)) {
                uVar9 = uVar9 & 0xffff0000 | uVar9 + 1 & 0xffff;
                goto LAB_00d16160;
              }
              if ((uVar9 & 0xffff) == 0) goto LAB_00d161bc;
              lVar5 = *(long *)(lVar7 + 0x20);
            } while (*(long *)(lVar7 + 0x20) != 0);
            lVar7 = *(long *)(lVar7 + 0x10);
            if ((lVar7 == 0) || (uVar1 = uVar9 - 1 & 0xffff, uVar1 == 0)) break;
            uVar9 = uVar1 | uVar9 & 0xffff0000;
            while (lVar5 = *(long *)(lVar7 + 0x20), lVar5 == 0) {
              if ((uVar9 - 1 & 0xffff) == 0) goto LAB_00d161bc;
              lVar7 = *(long *)(lVar7 + 0x10);
              uVar9 = uVar9 & 0xffff0000 | uVar9 - 1 & 0xffff;
              if (lVar7 == 0) goto LAB_00d161bc;
            }
          } while( true );
        }
LAB_00d161bc:
        *(undefined8 *)(param_1 + 0x24) = 0x3d4ccccd00000001;
      }
    }
    else {
      *plVar8 = 0;
      *(undefined4 *)(plVar8 + 1) = DAT_03214ce8;
    }
  }
  return 3;
}




undefined8 FUN_00d161e8(long param_1,long param_2)

{
  ulong uVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0x28) - *(float *)(param_2 + 0x6c);
  *(float *)(param_1 + 0x28) = fVar2;
  if (fVar2 <= 0.0) {
    FUN_00d25570(param_2);
    uVar1 = FUN_00d5887c();
    if ((uVar1 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x24) = 0;
    }
  }
  return 3;
}




void FUN_00d16234(void)

{
  return;
}




undefined8 FUN_00d16238(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  
  plVar5 = *(long **)(param_2 + 0x1428);
  if ((plVar5 != (long *)0x0) && (plVar2 = (long *)*plVar5, plVar2 != (long *)0x0)) {
    if ((int)plVar5[1] == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        uVar4 = FUN_00d25570(param_2);
        FUN_00d24960(param_2,uVar4,lVar3,param_2 + 0x18b8);
        uVar1 = FUN_00e6a474("__MASTER__");
        uVar1 = FUN_0091ed5c("__MASTER__",uVar1,0x12345678);
        plVar5 = (long *)(**(code **)(*(long *)(param_2 + 0x1688) + 0x10))(param_2 + 0x1688,uVar1);
        *plVar5 = param_2 + 0x18b8;
        return 1;
      }
    }
    else {
      *plVar5 = 0;
      *(undefined4 *)(plVar5 + 1) = DAT_03214ce8;
    }
  }
  return 2;
}




void FUN_00d16318(void)

{
  return;
}




void FUN_00d1631c(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *param_1 = &PTR_FUN_028146a0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0xffffffff00000000;
  return;
}




void FUN_00d16368(long param_1,undefined4 param_2,byte param_3)

{
  *(undefined4 *)(param_1 + 0x50) = param_2;
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe | param_3 & 1;
  return;
}




void FUN_00d1637c(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_50);
  FUN_008fce60(param_1 + 0x38,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  *(byte *)(param_1 + 0x54) = *(byte *)(param_1 + 0x54) & 0xfe | param_3 & 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d16400(long param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  char *__s2;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  
  bVar2 = *(byte *)(param_1 + 0x38);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x40);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar8 = *(void **)(param_1 + 0x48);
    __s1 = pvVar8;
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x39);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar6 = (char *)(param_1 + 0x39);
        lVar7 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar6 != *__s2) goto LAB_00d164a0;
          pcVar6 = pcVar6 + 1;
          lVar7 = lVar7 + 1;
          __s2 = __s2 + 1;
        } while (lVar7 != 0);
      }
      goto LAB_00d16508;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00d16508;
  }
  else {
LAB_00d164a0:
    if ((bVar2 & 1) == 0) {
      pvVar8 = (void *)(param_1 + 0x39);
    }
    else {
      pvVar8 = *(void **)(param_1 + 0x48);
    }
  }
  uVar4 = FUN_00e6a474(pvVar8);
  uVar4 = FUN_0091ed5c(pvVar8,uVar4,0x12345678);
  puVar5 = (undefined4 *)
           (**(code **)(*(long *)(param_2 + 0x1688) + 0x10))((long *)(param_2 + 0x1688),uVar4);
  *(undefined4 *)(param_1 + 0x50) = *puVar5;
LAB_00d16508:
  FUN_00da2958(*(undefined4 *)(param_1 + 0x50),param_1 + 0x28,param_1 + 0x30);
  return;
}




void FUN_00d16524(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  if ((*(int *)(param_1 + 0x24) != param_2) && (*(int *)(param_1 + 0x24) = param_2, param_2 == 1)) {
    FUN_00d16550(param_1,param_3,param_4);
    return;
  }
  return;
}




void FUN_00d1654c(void)

{
  return;
}




void FUN_00d16550(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 auStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d55794(lVar3,auStack_48,0);
  FUN_00d16a90(param_1,auStack_48);
  if ((*(long **)(param_1 + 0x30) == (long *)0x0) ||
     (lVar5 = **(long **)(param_1 + 0x30), lVar5 == 0)) {
    local_50 = DAT_03218f38;
    local_58 = DAT_03218f30;
  }
  else {
    local_58 = *(undefined8 *)(lVar5 + 4);
    local_50 = *(undefined4 *)(lVar5 + 0xc);
  }
  uVar4 = FUN_00e0b8e8(param_2,&local_58,0);
  if (((uVar4 & 1) == 0) &&
     (((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
       (2 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
      ((*(byte *)(lVar3 + 0x2f8) >> 1 & 1) == 0)))) {
    FUN_00cb6ef4(lVar3,&local_58);
    FUN_00d2568c(param_2,&local_58);
  }
  else if (*(int *)(param_1 + 0x24) != 0) {
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d16670(void)

{
  return;
}




undefined8 FUN_00d16674(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x28) == 0) {
    FUN_00d16400(param_1,param_2);
  }
  if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = FUN_00d16754(param_1,param_2,param_3);
  }
  else if ((*(int *)(param_1 + 0x24) == 0) && (*(long *)(param_1 + 0x30) != 0)) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    FUN_00d16550(param_1,param_2,param_3);
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_2 + 0x1680) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_2 + 0x1678) = uVar2;
  return uVar1;
}




undefined8 FUN_00d16710(long param_1)

{
  if (*(long *)(param_1 + 0x30) == 0) {
    return 2;
  }
  if (*(int *)(param_1 + 0x24) == 1) {
    return 3;
  }
  *(undefined4 *)(param_1 + 0x24) = 1;
  FUN_00d16550();
  return 3;
}




void FUN_00d16754(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_68;
  float fStack_64;
  float local_60;
  float local_58;
  float fStack_54;
  float local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d55794(lVar3,&local_58,0);
  uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
  if ((uVar1 == 0x1f) || (*(short *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) != 2)) {
    pfVar8 = (float *)**(long **)(param_1 + 0x30);
    fVar9 = pfVar8[1] - local_58;
    fVar10 = pfVar8[2] - fStack_54;
    fVar11 = pfVar8[3] - local_50;
    if ((fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11 < *pfVar8 * *pfVar8) ||
       (((uVar1 != 0x1f && (*(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 3)) ||
        ((*(byte *)(lVar3 + 0x2f8) >> 1 & 1) != 0)))) goto LAB_00d168cc;
    if ((*(long **)(param_1 + 0x30) == (long *)0x0) ||
       (local_68 = pfVar8[1], fStack_64 = pfVar8[2], local_60 = pfVar8[3], pfVar8 == (float *)0x0))
    {
      local_68 = (float)DAT_03218f30;
      fStack_64 = (float)((ulong)DAT_03218f30 >> 0x20);
      local_60 = DAT_03218f38;
    }
    uVar4 = FUN_00e0b8e8(param_2,&local_68,0);
    if ((((uVar4 & 1) != 0) ||
        ((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 != 0x1f &&
         (*(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3 < 3)))) ||
       ((*(byte *)(lVar3 + 0x2f8) >> 1 & 1) != 0)) goto LAB_00d168cc;
    FUN_00cb6ef4(lVar3,&local_68);
    FUN_00d2568c(param_2,&local_68);
  }
  else {
LAB_00d168cc:
    plVar6 = *(long **)(param_1 + 0x30);
    pfVar8 = (float *)*plVar6;
    if ((pfVar8[1] - local_58) * (pfVar8[1] - local_58) +
        (pfVar8[2] - fStack_54) * (pfVar8[2] - fStack_54) +
        (pfVar8[3] - local_50) * (pfVar8[3] - local_50) < *pfVar8 * *pfVar8) {
      FUN_00d16bf8(param_1);
      if ((*(long **)(param_1 + 0x30) == (long *)0x0) ||
         (lVar7 = **(long **)(param_1 + 0x30), lVar7 == 0)) {
        uVar5 = 2;
        if (*(int *)(param_1 + 0x24) != 2) {
          *(undefined4 *)(param_1 + 0x24) = 2;
        }
        goto LAB_00d16a54;
      }
      local_60 = *(float *)(lVar7 + 0xc);
      local_68 = (float)*(undefined8 *)(lVar7 + 4);
      fStack_64 = (float)((ulong)*(undefined8 *)(lVar7 + 4) >> 0x20);
      uVar4 = FUN_00e0b8e8(param_2,&local_68,0);
      if (((uVar4 & 1) == 0) &&
         (((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
           (2 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
          ((*(byte *)(lVar3 + 0x2f8) >> 1 & 1) == 0)))) {
        FUN_00cb6ef4(lVar3,&local_68);
        FUN_00d2568c(param_2,&local_68);
      }
      plVar6 = *(long **)(param_1 + 0x30);
    }
    if ((plVar6 == (long *)0x0) || (lVar3 = *plVar6, lVar3 == 0)) {
      local_60 = DAT_03218f38;
      local_68 = (float)DAT_03218f30;
      fStack_64 = (float)((ulong)DAT_03218f30 >> 0x20);
    }
    else {
      local_60 = *(float *)(lVar3 + 0xc);
      local_68 = (float)*(undefined8 *)(lVar3 + 4);
      fStack_64 = (float)((ulong)*(undefined8 *)(lVar3 + 4) >> 0x20);
    }
    uVar4 = FUN_00e0b8e8(param_2,&local_68,0);
    if (((uVar4 & 1) != 0) ||
       (fVar9 = local_68 - *(float *)(param_2 + 0x143c),
       fVar10 = fStack_64 - (float)*(undefined8 *)(param_2 + 0x1440),
       fVar11 = local_60 - (float)((ulong)*(undefined8 *)(param_2 + 0x1440) >> 0x20),
       1.0 < fVar9 * fVar9 + fVar10 * fVar10 + fVar11 * fVar11)) {
      if (*(int *)(param_1 + 0x24) != 0) {
        *(undefined4 *)(param_1 + 0x24) = 0;
      }
      uVar5 = 2;
      goto LAB_00d16a54;
    }
  }
  uVar5 = 3;
LAB_00d16a54:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}




undefined8 FUN_00d16a80(void)

{
  return 2;
}




void FUN_00d16a88(long param_1)

{
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}




void FUN_00d16a90(long param_1,float *param_2)

{
  float *pfVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  float fVar16;
  
  plVar2 = *(long **)(param_1 + 0x30);
  if ((plVar2 != (long *)0x0) && (*plVar2 != 0)) {
    fVar6 = *param_2;
    do {
      plVar3 = plVar2;
      fVar7 = (float)*(undefined8 *)(param_2 + 1);
      fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
      if (*(long **)(*(long *)(param_1 + 0x28) + 8) == plVar3) break;
      lVar5 = plVar3[-1];
      uVar11 = *(undefined8 *)(*plVar3 + 8);
      uVar15 = *(undefined8 *)(lVar5 + 8);
      fVar9 = *(float *)(*plVar3 + 4) - fVar6;
      fVar10 = (float)uVar11 - fVar7;
      fVar12 = (float)((ulong)uVar11 >> 0x20) - fVar8;
      fVar13 = *(float *)(lVar5 + 4) - fVar6;
      fVar14 = (float)uVar15 - fVar7;
      fVar16 = (float)((ulong)uVar15 >> 0x20) - fVar8;
      plVar2 = plVar3 + -1;
    } while (fVar13 * fVar13 + fVar14 * fVar14 + fVar16 * fVar16 <
             fVar9 * fVar9 + fVar10 * fVar10 + fVar12 * fVar12);
    plVar2 = plVar3 + -1;
    lVar5 = *plVar3;
    do {
      if (lVar5 == 0) {
        return;
      }
      lVar4 = plVar2[2];
      if (lVar4 == 0) {
        return;
      }
      pfVar1 = (float *)(lVar5 + 4);
      plVar2 = plVar2 + 1;
      fVar9 = (float)*(undefined8 *)(lVar5 + 8);
      fVar10 = (float)((ulong)*(undefined8 *)(lVar5 + 8) >> 0x20);
      lVar5 = lVar4;
    } while ((*(float *)(lVar4 + 4) - *pfVar1) * (*pfVar1 - fVar6) +
             ((float)*(undefined8 *)(lVar4 + 8) - fVar9) * (fVar9 - fVar7) +
             ((float)((ulong)*(undefined8 *)(lVar4 + 8) >> 0x20) - fVar10) * (fVar10 - fVar8) <= 0.0
            );
    *(long **)(param_1 + 0x30) = plVar2;
  }
  return;
}




void FUN_00d16b74(long param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if ((*(long **)(param_1 + 0x30) != (long *)0x0) &&
     (lVar2 = **(long **)(param_1 + 0x30), lVar2 != 0)) {
    uVar1 = *(undefined4 *)(lVar2 + 0xc);
    *param_2 = *(undefined8 *)(lVar2 + 4);
    *(undefined4 *)(param_2 + 1) = uVar1;
    return;
  }
  *(undefined4 *)(param_2 + 1) = DAT_03218f38;
  *param_2 = DAT_03218f30;
  return;
}




bool FUN_00d16bb4(long param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)**(long **)(param_1 + 0x30);
  fVar2 = (float)*(undefined8 *)(pfVar1 + 2) - (float)*(undefined8 *)(param_2 + 1);
  fVar3 = (float)((ulong)*(undefined8 *)(pfVar1 + 2) >> 0x20) -
          (float)((ulong)*(undefined8 *)(param_2 + 1) >> 0x20);
  return (pfVar1[1] - *param_2) * (pfVar1[1] - *param_2) + fVar2 * fVar2 + fVar3 * fVar3 <
         *pfVar1 * *pfVar1;
}




void FUN_00d16bf8(long param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(param_1 + 0x30);
  if (((plVar1 != (long *)0x0) && (*plVar1 != 0)) &&
     (*(long **)(param_1 + 0x30) = plVar1 + 1, plVar1[1] != 0)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x54) & 1) == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    return;
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(*(long *)(param_1 + 0x28) + 8);
  return;
}




bool FUN_00d16c3c(long param_1)

{
  if (*(long **)(param_1 + 0x30) != (long *)0x0) {
    return **(long **)(param_1 + 0x30) != 0;
  }
  return false;
}




void FUN_00d16c5c(void)

{
  return;
}




void FUN_00d16c60(undefined8 *param_1)

{
  FUN_00d0aac4();
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *param_1 = &PTR_FUN_02814728;
  param_1[7] = 0x3ffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}




void FUN_00d16cac(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x3c) = param_2;
  return;
}




void FUN_00d16cb4(long param_1,long param_2)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x1de4);
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  FUN_00da2958(uVar1,param_1 + 0x28,param_1 + 0x30);
  return;
}




void FUN_00d16ccc(long param_1,int param_2,undefined8 param_3)

{
  if ((*(int *)(param_1 + 0x24) != param_2) && (*(int *)(param_1 + 0x24) = param_2, param_2 == 1)) {
    FUN_00d16cf4(param_1,param_3);
    return;
  }
  return;
}




void FUN_00d16cf0(void)

{
  return;
}




void FUN_00d16cf4(long param_1,long param_2)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  lVar5 = FUN_00d25570(param_2);
  FUN_00d55794(lVar5,auStack_58,0);
  plVar1 = (long *)(param_1 + 0x30);
  if ((*(int *)(param_1 + 0x40) == *(int *)(param_2 + 0x1de0)) && (*plVar1 != 0)) {
    FUN_00d17208(param_1,auStack_58);
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 0x1de4);
    *(undefined4 *)(param_1 + 0x38) = uVar3;
    FUN_00da2958(uVar3,param_1 + 0x28,plVar1);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_2 + 0x1680) = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_2 + 0x1678) = uVar8;
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x1de0);
    if (*(int *)(param_1 + 0x3c) == 1) {
      FUN_00d17198(param_1,param_2 + 0x1e28);
    }
  }
  if (((long *)*plVar1 == (long *)0x0) || (lVar7 = *(long *)*plVar1, lVar7 == 0)) {
    local_60 = DAT_03218f38;
    local_68 = DAT_03218f30;
  }
  else {
    local_68 = *(undefined8 *)(lVar7 + 4);
    local_60 = *(undefined4 *)(lVar7 + 0xc);
  }
  uVar6 = FUN_00e0b8e8(param_2,&local_68,0);
  if (((uVar6 & 1) == 0) &&
     (((uVar2 = *(ushort *)(lVar5 + 0x88) & 0x1f, uVar2 == 0x1f ||
       (2 < *(ushort *)(lVar5 + (ulong)uVar2 * 0x38 + 0x90) - 3)) &&
      ((*(byte *)(lVar5 + 0x2f8) >> 1 & 1) == 0)))) {
    FUN_00cb6ef4(lVar5,&local_68);
    FUN_00d2568c(param_2,&local_68);
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00d16e70(void)

{
  return;
}




undefined8 FUN_00d16e74(long param_1)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x24) == 1) {
    uVar1 = FUN_00d16edc();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    FUN_00d16cf4();
    return 3;
  }
  return 2;
}




undefined8 FUN_00d16eb0(long param_1)

{
  if (*(int *)(param_1 + 0x24) != 1) {
    *(undefined4 *)(param_1 + 0x24) = 1;
    FUN_00d16cf4();
  }
  return 3;
}




void FUN_00d16edc(long param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  undefined8 local_68;
  float local_60;
  float local_58;
  float local_54;
  float fStack_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  lVar3 = FUN_00d25570(param_2);
  FUN_00d55794(lVar3,&local_58,0);
  uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f;
  uVar7 = (ulong)uVar1;
  if ((uVar1 == 0x1f) || (*(short *)(lVar3 + uVar7 * 0x38 + 0x90) != 2)) {
    plVar5 = *(long **)(param_1 + 0x30);
    pfVar8 = (float *)*plVar5;
    fVar9 = pfVar8[1] - local_58;
    fVar10 = pfVar8[3] - fStack_50;
    if ((*pfVar8 * *pfVar8 <=
         fVar9 * fVar9 + (pfVar8[2] - local_54) * (pfVar8[2] - local_54) + fVar10 * fVar10) &&
       (((uVar1 == 0x1f || (2 < *(ushort *)(lVar3 + uVar7 * 0x38 + 0x90) - 3)) &&
        ((*(byte *)(lVar3 + 0x2f8) >> 1 & 1) == 0)))) {
      if ((plVar5 == (long *)0x0) ||
         (local_68 = *(undefined8 *)(pfVar8 + 1), local_60 = pfVar8[3], pfVar8 == (float *)0x0)) {
        local_68 = DAT_03218f30;
        local_60 = DAT_03218f38;
      }
      if ((uVar1 == 0x1f) || (2 < *(ushort *)(lVar3 + uVar7 * 0x38 + 0x90) - 3)) {
        FUN_00cb6ef4(lVar3,&local_68);
        FUN_00d2568c(param_2,&local_68);
        uVar4 = 3;
        goto LAB_00d1715c;
      }
    }
  }
  else {
    plVar5 = *(long **)(param_1 + 0x30);
  }
  if (plVar5 != (long *)0x0) {
    pfVar8 = (float *)*plVar5;
    if (pfVar8 != (float *)0x0) {
      local_54 = (float)*(undefined8 *)(pfVar8 + 2) - local_54;
      fStack_50 = (float)((ulong)*(undefined8 *)(pfVar8 + 2) >> 0x20) - fStack_50;
      if (*pfVar8 * *pfVar8 <=
          (pfVar8[1] - local_58) * (pfVar8[1] - local_58) + local_54 * local_54 +
          fStack_50 * fStack_50) {
LAB_00d170f0:
        lVar3 = *plVar5;
        if (lVar3 != 0) {
          local_68 = *(undefined8 *)(lVar3 + 4);
          local_60 = *(float *)(lVar3 + 0xc);
          uVar7 = FUN_00e0b8e8(param_2,&local_68,0);
          uVar4 = 2;
          if ((uVar7 & 1) == 0) {
            uVar4 = 3;
          }
          goto LAB_00d1715c;
        }
      }
      else {
        FUN_00d17390(param_1);
        if ((*(long **)(param_1 + 0x30) != (long *)0x0) &&
           (lVar6 = **(long **)(param_1 + 0x30), lVar6 != 0)) {
          local_68 = *(undefined8 *)(lVar6 + 4);
          local_60 = *(float *)(lVar6 + 0xc);
          uVar7 = FUN_00e0b8e8(param_2,&local_68,0);
          if (((uVar7 & 1) == 0) &&
             (((uVar1 = *(ushort *)(lVar3 + 0x88) & 0x1f, uVar1 == 0x1f ||
               (2 < *(ushort *)(lVar3 + (ulong)uVar1 * 0x38 + 0x90) - 3)) &&
              ((*(byte *)(lVar3 + 0x2f8) >> 1 & 1) == 0)))) {
            FUN_00cb6ef4(lVar3,&local_68);
            FUN_00d2568c(param_2,&local_68);
          }
          plVar5 = *(long **)(param_1 + 0x30);
          if (plVar5 != (long *)0x0) goto LAB_00d170f0;
        }
      }
    }
  }
  uVar4 = 2;
  if (*(int *)(param_1 + 0x24) != 2) {
    *(undefined4 *)(param_1 + 0x24) = 2;
  }
LAB_00d1715c:
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

