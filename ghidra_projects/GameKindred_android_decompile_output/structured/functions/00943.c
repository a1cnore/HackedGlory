// functions/00943 — 34 functions
#include "libGameKindred.h"




float FUN_0094309c(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_1 + 400);
  uVar5 = uVar2 - param_2 & ((int)(uVar2 - param_2) >> 0x1f ^ 0xffffffffU);
  iVar3 = uVar2 - uVar5;
  if (0 < iVar3) {
    fVar6 = 0.0;
    if ((int)uVar5 < (int)uVar2) {
      fVar6 = 0.0;
      do {
        uVar1 = *(int *)(param_1 + 0x194) + uVar5;
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar1 / uVar2;
        }
        uVar5 = uVar5 + 1;
        fVar6 = fVar6 + *(float *)(param_1 + (ulong)(uVar1 - uVar4 * uVar2) * 4);
      } while ((int)uVar5 < (int)uVar2);
    }
    return fVar6 / (float)iVar3;
  }
  return -1.0;
}




undefined1  [16] FUN_009430fc(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  
  fVar6 = (float)FUN_0094309c();
  uVar2 = *(uint *)(param_1 + 400);
  uVar5 = uVar2 - param_2 & ((int)(uVar2 - param_2) >> 0x1f ^ 0xffffffffU);
  iVar3 = uVar2 - uVar5;
  if (iVar3 < 1) {
    fVar6 = 0.0;
  }
  else {
    fVar8 = 0.0;
    if ((int)uVar5 < (int)uVar2) {
      fVar8 = 0.0;
      do {
        uVar1 = *(int *)(param_1 + 0x194) + uVar5;
        uVar4 = 0;
        if (uVar2 != 0) {
          uVar4 = uVar1 / uVar2;
        }
        uVar5 = uVar5 + 1;
        fVar9 = *(float *)(param_1 + (ulong)(uVar1 - uVar4 * uVar2) * 4) - fVar6;
        fVar8 = fVar8 + fVar9 * fVar9;
      } while ((int)uVar5 < (int)uVar2);
    }
    fVar8 = fVar8 / (float)iVar3;
    fVar6 = SQRT(fVar8);
    if (NAN(fVar6)) {
      auVar7._0_4_ = sqrtf(fVar8);
      auVar7._4_4_ = extraout_var;
      auVar7._8_8_ = extraout_var_00;
      return auVar7;
    }
  }
  return ZEXT416((uint)fVar6);
}




void FUN_0094319c(void *param_1)

{
  memset(param_1,0,0x1a0);
  *(undefined8 *)((long)param_1 + 0x1b0) = 0;
  *(undefined8 *)((long)param_1 + 0x1b8) = 0;
  *(undefined8 *)((long)param_1 + 0x1a8) = 0;
  return;
}




void FUN_009431cc(long param_1)

{
  long lVar1;
  long lVar2;
  
  FUN_00e77acc(param_1 + 8,0);
  FUN_00e77acc(param_1 + 0x30,0);
  lVar2 = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 3000;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined8 *)(lVar1 + 0x238) = 0xbf80000000000000;
    *(undefined8 *)(lVar1 + 0x230) = 0;
    *(undefined8 *)(lVar1 + 0x228) = 0;
    *(undefined8 *)(lVar1 + 0x78) = 0;
    *(undefined8 *)(lVar1 + 0x70) = 0;
    *(undefined8 *)(lVar1 + 0x88) = 0;
    *(undefined8 *)(lVar1 + 0x80) = 0;
    *(undefined8 *)(lVar1 + 0x68) = 0;
    *(undefined8 *)(lVar1 + 0x60) = 0;
    memset((void *)(lVar1 + 0x98),0,400);
    lVar2 = lVar2 + 0x200;
    *(undefined8 *)(lVar1 + 0x250) = 0;
    *(undefined8 *)(lVar1 + 0x248) = 0;
    *(undefined4 *)(lVar1 + 600) = 0;
    *(undefined8 *)(lVar1 + 0x240) = 0;
  } while (lVar2 != 0x2000);
  *(undefined1 *)(param_1 + 0x2062) = 0;
  return;
}




void FUN_0094326c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027bade0;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}




void FUN_00943284(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 8) = 1;
  FUN_00e7db34(param_2);
  return;
}




void FUN_00943294(uint param_1)

{
  if (param_1 < 0x3e9) {
    param_1 = 1000;
  }
  DAT_02c7c718 = 1;
  DAT_02c7c71c = param_1;
  FUN_00e77c7c(&DAT_02c7c6c0,FUN_009432cc,0,0);
  return;
}




undefined8 FUN_009432cc(void)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  char *__s2;
  long lVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  long local_7a8;
  long lStack_7a0;
  timespec local_798;
  undefined **local_788;
  char local_780;
  undefined1 auStack_778 [1736];
  long local_b0;
  
  lVar3 = tpidr_el0;
  local_b0 = *(long *)(lVar3 + 0x28);
  uVar6 = (ulong)DAT_02c7c71c;
  FUN_00e7d840(auStack_778);
  local_788 = &PTR_FUN_027bade0;
  local_780 = '\0';
  uVar5 = FUN_00e7d8f8(auStack_778,&local_788);
  if ((uVar5 & 1) != 0) {
    FUN_00e70314(&local_7a8);
    FUN_00e70314(&local_7a8);
    if (DAT_02c7c718 != '\0') {
      dVar15 = (double)NEON_ucvtf(uVar6);
      dVar15 = dVar15 / 1000.0;
      do {
        iVar4 = clock_gettime(1,&local_798);
        lVar10 = local_798.tv_nsec - lStack_7a0;
        lVar7 = local_798.tv_sec - local_7a8;
        if (lVar10 < 0) {
          lVar7 = lVar7 + -1;
          lVar10 = (local_798.tv_nsec + 1000000000) - lStack_7a0;
        }
        if (DAT_02c7e722 == '\0') {
          if (DAT_02c7e720 != 0) {
            uVar5 = 0;
            do {
              pthread_mutex_lock((pthread_mutex_t *)&DAT_02c7c6c8);
              if (DAT_02c7e720 <= uVar5) {
LAB_0094369c:
                iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_02c7c6c8);
                break;
              }
              lVar9 = uVar5 * 0x200;
              local_780 = '\0';
              uVar6 = FUN_00e7dab4(auStack_778);
              if (((uVar6 & 1) != 0) || (uVar6 = FUN_00e7da78(auStack_778), (uVar6 & 1) != 0)) {
                FUN_00e7da18(auStack_778);
              }
              clock_gettime(1,&local_798);
              lVar13 = local_798.tv_nsec - lStack_7a0;
              lVar14 = local_798.tv_sec - local_7a8;
              if (lVar13 < 0) {
                lVar14 = lVar14 + -1;
                lVar13 = (local_798.tv_nsec + 1000000000) - lStack_7a0;
              }
              bVar2 = (&DAT_02c7c720)[lVar9];
              __n = (ulong)(bVar2 >> 1);
              if ((bVar2 & 1) != 0) {
                __n = (&DAT_02c7c728)[uVar5 * 0x40];
              }
              sVar1 = (ulong)(DAT_0320ffa8 >> 1);
              if ((DAT_0320ffa8 & 1) != 0) {
                sVar1 = DAT_0320ffb0;
              }
              if (__n == sVar1) {
                puVar12 = (undefined1 *)(&DAT_02c7c730)[uVar5 * 0x40];
                if ((bVar2 & 1) == 0) {
                  puVar12 = &DAT_02c7c721 + lVar9;
                }
                __s2 = DAT_0320ffb8;
                if ((DAT_0320ffa8 & 1) == 0) {
                  __s2 = &DAT_0320ffa9;
                }
                if ((bVar2 & 1) == 0) {
                  if (__n != 0) {
                    pcVar8 = &DAT_02c7c721 + lVar9;
                    lVar11 = -(ulong)(bVar2 >> 1);
                    do {
                      if (*pcVar8 != *__s2) goto LAB_009434ec;
                      pcVar8 = pcVar8 + 1;
                      lVar11 = lVar11 + 1;
                      __s2 = __s2 + 1;
                    } while (lVar11 != 0);
                  }
                }
                else if ((__n != 0) && (iVar4 = memcmp(puVar12,__s2,__n), iVar4 != 0))
                goto LAB_009434ec;
              }
              else {
LAB_009434ec:
                if (0 < (int)(&DAT_02c7c750)[uVar5 * 0x80]) {
                  if ((bVar2 & 1) == 0) {
                    puVar12 = &DAT_02c7c721 + lVar9;
                  }
                  else {
                    puVar12 = (undefined1 *)(&DAT_02c7c730)[uVar5 * 0x40];
                  }
                  uVar6 = FUN_00e7d954(auStack_778,puVar12,(&DAT_02c7c750)[uVar5 * 0x80],0,0);
                  if ((uVar6 & 1) != 0) {
                    dVar16 = (double)(lVar13 + lVar14 * 1000000000) * 1e-09;
                    do {
                      if (DAT_02c7c718 == '\0') goto LAB_0094369c;
                      FUN_00e7db2c(0x40000000,0xbf800000,auStack_778);
                      if (local_780 != '\0') break;
                      clock_gettime(1,&local_798);
                      lVar14 = local_798.tv_nsec - lStack_7a0;
                      lVar13 = local_798.tv_sec - local_7a8;
                      if (lVar14 < 0) {
                        lVar13 = lVar13 + -1;
                        lVar14 = (local_798.tv_nsec + 1000000000) - lStack_7a0;
                      }
                    } while ((double)(lVar14 + lVar13 * 1000000000) * 1e-09 - dVar16 <= 2.0);
                    clock_gettime(1,&local_798);
                    lVar14 = local_798.tv_nsec - lStack_7a0;
                    lVar13 = local_798.tv_sec - local_7a8;
                    if (lVar14 < 0) {
                      lVar13 = lVar13 + -1;
                      lVar14 = (local_798.tv_nsec + 1000000000) - lStack_7a0;
                    }
                    if ((2.0 < (double)(lVar14 + lVar13 * 1000000000) * 1e-09 - dVar16) &&
                       (uVar6 = FUN_00e7e0e8(auStack_778), (uVar6 & 1) != 0)) {
                      FUN_00e7da18(auStack_778);
                    }
                    clock_gettime(1,&local_798);
                    lVar14 = local_798.tv_nsec - lStack_7a0;
                    lVar13 = local_798.tv_sec - local_7a8;
                    if (lVar14 < 0) {
                      lVar13 = lVar13 + -1;
                      lVar14 = (local_798.tv_nsec + 1000000000) - lStack_7a0;
                    }
                    dVar16 = (double)(lVar14 + lVar13 * 1000000000) * 1e-09 - dVar16;
                    if (dVar16 <= 0.0) {
                      dVar16 = 0.0;
                    }
                    FUN_00942c34((float)(dVar16 * 1000.0),&DAT_02c7c758 + uVar5 * 0x200,
                                 &DAT_02c7c720 + lVar9,
                                 (&DAT_02c7c754)[uVar5 * 0x200] != '\0' && DAT_02c7e722 == '\0');
                    (&DAT_02c7c91c)[uVar5 * 0x80] = (float)(dVar16 * 1000.0);
                    if (DAT_02c7c718 == '\0') goto LAB_0094369c;
                  }
                }
              }
              iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_02c7c6c8);
              uVar5 = uVar5 + 1;
            } while (uVar5 < DAT_02c7e720);
          }
          FUN_00943a20(iVar4);
        }
        clock_gettime(1,&local_798);
        lVar13 = local_798.tv_nsec - lStack_7a0;
        lVar9 = local_798.tv_sec - local_7a8;
        if (lVar13 < 0) {
          lVar9 = lVar9 + -1;
          lVar13 = (local_798.tv_nsec + 1000000000) - lStack_7a0;
        }
        dVar16 = dVar15 - ((double)(lVar13 + lVar9 * 1000000000) * 1e-09 -
                          (double)(lVar10 + lVar7 * 1000000000) * 1e-09);
        if (dVar15 <= dVar16) {
          dVar16 = dVar15;
        }
        if (dVar16 <= 0.0) {
          dVar16 = 0.0;
        }
        while ((0.0 < dVar16 && (DAT_02c7c718 != '\0'))) {
          dVar17 = (double)NEON_fminnm(dVar16,0x3fb999999999999a);
          FUN_00e6b418((int)(dVar17 * 1000.0));
          dVar16 = dVar16 + -0.1;
        }
      } while (DAT_02c7c718 != '\0');
    }
    uVar5 = FUN_00e7dab4(auStack_778);
    if (((uVar5 & 1) != 0) || (uVar5 = FUN_00e7da78(auStack_778), (uVar5 & 1) != 0)) {
      FUN_00e7da18(auStack_778);
    }
    FUN_00e7d910(auStack_778);
  }
  FUN_00e7d880(auStack_778);
  if (*(long *)(lVar3 + 0x28) == local_b0) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009437b0(void)

{
  if (DAT_02c7c718 != '\0') {
    DAT_02c7c718 = 0;
    FUN_00e77ccc();
    FUN_009437dc();
    return;
  }
  return;
}




int FUN_009437dc(void)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_02c7c6c8);
  uVar2 = (ulong)DAT_02c7e720;
  if (uVar2 != 0) {
    uVar3 = 0;
    puVar4 = &DAT_02c7c6c0;
    do {
      memset(puVar4 + 0x98,0,0x1a0);
      uVar3 = uVar3 + 1;
      *(undefined8 *)(puVar4 + 0x250) = 0;
      *(undefined8 *)(puVar4 + 0x248) = 0;
      *(undefined8 *)(puVar4 + 0x240) = 0;
      puVar4 = puVar4 + 0x200;
    } while (uVar3 < uVar2);
  }
  DAT_02c7e720 = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_02c7c6c8);
  return iVar1;
}




void FUN_00943868(long param_1,int param_2,long param_3,byte param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  byte local_70 [16];
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pthread_mutex_lock((pthread_mutex_t *)&DAT_02c7c6c8);
  if ((((param_1 != 0) && (DAT_02c7e720 < 0x10)) && (uVar3 = FUN_00e6a488(param_1), -1 < param_2))
     && ((uVar3 & 1) == 0)) {
    FUN_008fa54c(local_70,param_1);
    FUN_008fce60(&DAT_02c7c720 + (ulong)DAT_02c7e720 * 0x200,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    (&DAT_02c7c750)[(ulong)DAT_02c7e720 * 0x80] = param_2;
    if (param_3 == 0) {
      FUN_008fcdb8(local_70,&DAT_0320ffa8);
    }
    else {
      FUN_008fa54c(local_70,param_3);
    }
    FUN_008fce60(&DAT_02c7c738 + (ulong)DAT_02c7e720 * 0x200,local_70);
    if ((local_70[0] & 1) != 0) {
      operator_delete(local_60);
    }
    uVar3 = (ulong)DAT_02c7e720;
    DAT_02c7e720 = DAT_02c7e720 + 1;
    (&DAT_02c7c754)[uVar3 * 0x200] = param_4 & 1;
    (&DAT_02c7c91c)[uVar3 * 0x80] = 0;
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_02c7c6c8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_009439c8(byte param_1)

{
  DAT_02c7e722 = param_1 & 1;
  return;
}




bool FUN_009439e0(void)

{
  return DAT_02c7e720 != 0;
}




undefined4 FUN_009439fc(undefined4 param_1)

{
  if (DAT_02c7e720 != 0) {
    param_1 = DAT_02c7c91c;
  }
  return param_1;
}




int FUN_00943a20(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined4 uVar9;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_02c7c6f0);
  lVar6 = 0;
  uVar7 = 0;
  puVar5 = &DAT_02c7c758;
  piVar8 = &DAT_02c7c8ec;
  do {
    if (uVar7 < DAT_02c7e720) {
      FUN_008fce60(&DAT_02c7e728 + lVar6,piVar8 + -0x73);
      FUN_008fce60(&DAT_02c7e740 + lVar6,piVar8 + -0x6d);
      uVar9 = FUN_0094309c(puVar5,100);
      *(undefined4 *)((long)&DAT_02c7e758 + lVar6) = uVar9;
      uVar9 = FUN_009430fc(puVar5,100);
      *(undefined4 *)((long)&DAT_02c7e75c + lVar6) = uVar9;
      uVar9 = FUN_00943c70(puVar5,100);
      uVar1 = piVar8[-1];
      *(undefined4 *)((long)&DAT_02c7e760 + lVar6) = uVar9;
      if (uVar1 == 0) {
        uVar9 = 0;
      }
      else {
        uVar2 = (uVar1 + *piVar8) - 1;
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = uVar2 / uVar1;
        }
        uVar9 = *(undefined4 *)(&DAT_02c7c758 + uVar7 * 0x200 + (ulong)(uVar2 - uVar3 * uVar1) * 4);
      }
      *(undefined4 *)((long)&DAT_02c7e764 + lVar6) = uVar9;
    }
    else {
      FUN_008fce60(&DAT_02c7e728 + lVar6,&DAT_0320ffa8);
      FUN_008fce60(&DAT_02c7e740 + lVar6,&DAT_0320ffa8);
      *(undefined8 *)((long)&DAT_02c7e758 + lVar6) = 0;
      *(undefined8 *)((long)&DAT_02c7e760 + lVar6) = 0;
    }
    lVar6 = lVar6 + 0x40;
    uVar7 = uVar7 + 1;
    puVar5 = puVar5 + 0x200;
    piVar8 = piVar8 + 0x80;
  } while (lVar6 != 0x400);
  iVar4 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_02c7c6f0);
  return iVar4;
}




int FUN_00943b58(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  
  pthread_mutex_lock((pthread_mutex_t *)&DAT_02c7c6f0);
  lVar4 = 0;
  do {
    lVar1 = param_1 + lVar4;
    FUN_008fce60(lVar1,&DAT_02c7e728 + lVar4);
    FUN_008fce60(lVar1 + 0x18,&DAT_02c7e740 + lVar4);
    puVar2 = (undefined8 *)((long)&DAT_02c7e760 + lVar4);
    uVar5 = *(undefined8 *)((long)&DAT_02c7e758 + lVar4);
    lVar4 = lVar4 + 0x40;
    *(undefined8 *)(lVar1 + 0x38) = *puVar2;
    *(undefined8 *)(lVar1 + 0x30) = uVar5;
  } while (lVar4 != 0x400);
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_02c7c6f0);
  return iVar3;
}




void FUN_00943bdc(void)

{
  return;
}




undefined8 FUN_00943be0(void)

{
  return 0;
}




void FUN_00943be8(void)

{
  return;
}




void FUN_00943bec(undefined8 param_1,undefined8 param_2)

{
  FUN_00e7db34(param_2);
  FUN_00e7da18(param_2);
  return;
}




void FUN_00943c14(undefined8 param_1,undefined8 param_2)

{
  FUN_00e7db34(param_2);
  FUN_00e7da18(param_2);
  return;
}




void FUN_00943c3c(undefined8 param_1,undefined8 param_2)

{
  FUN_00e7db34(param_2);
  FUN_00e7da18(param_2);
  return;
}




void FUN_00943c64(void)

{
  return;
}




undefined8 FUN_00943c68(void)

{
  return 0;
}




float FUN_00943c70(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  uVar2 = *(uint *)(param_1 + 400);
  fVar5 = 0.0;
  uVar4 = uVar2 - param_2 & ((int)(uVar2 - param_2) >> 0x1f ^ 0xffffffffU);
  if ((int)uVar4 < (int)uVar2) {
    uVar1 = *(int *)(param_1 + 0x194) + uVar4;
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = uVar1 / uVar2;
    }
    fVar6 = *(float *)(param_1 + (ulong)(uVar1 - uVar3 * uVar2) * 4);
    do {
      uVar1 = *(int *)(param_1 + 0x194) + uVar4;
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = uVar1 / uVar2;
      }
      fVar5 = *(float *)(param_1 + (ulong)(uVar1 - uVar3 * uVar2) * 4);
      uVar4 = uVar4 + 1;
      if (fVar5 <= fVar6) {
        fVar5 = fVar6;
      }
      fVar6 = fVar5;
    } while ((int)uVar4 < (int)uVar2);
  }
  return fVar5;
}




undefined8 FUN_00943cc4(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00943ccc(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00943cd4(void)

{
  return;
}




void FUN_00943cd8(void)

{
  return;
}




void FUN_00943cdc(void)

{
  return;
}




void FUN_00943ce0(void)

{
  return;
}




undefined8 FUN_00943ce4(void)

{
  return 0;
}




void FUN_00943cec(undefined8 *param_1)

{
  FUN_00d580a0(*param_1);
  return;
}




void FUN_00943cf4(long *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  long *plVar11;
  uint uVar12;
  long lVar13;
  long local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  *param_1 = 0;
  uVar4 = DAT_03214ce8;
  plVar11 = param_1 + 4;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = uVar4;
  *(undefined4 *)(param_1 + 3) = uVar4;
  do {
    lVar13 = 0;
    do {
      puVar1 = (undefined8 *)((long)plVar11 + lVar13);
      *puVar1 = &PTR_FUN_027bae48;
      memset(puVar1 + 1,0,0x70);
      lVar13 = lVar13 + 0x78;
    } while (puVar1 + 0xf != plVar11 + 0x5a);
    *(undefined4 *)(plVar11 + 0x5a) = 0x45;
    puVar1 = (undefined8 *)((long)plVar11 + 0x2d4);
    *(undefined1 *)((long)plVar11 + 0x2dc) = 0;
    plVar11 = plVar11 + 0x5c;
    *puVar1 = 0;
  } while (plVar11 != param_1 + 0x620);
  pcVar2 = (char *)((long)param_1 + 0x3109);
  *(undefined8 *)((long)param_1 + 0x3106) = 0;
  param_1[0x620] = 0;
  *pcVar2 = '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2f4);
  uVar12 = 0x811c9dc5;
  *(uint *)((long)param_1 + 0x2f4) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 4);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2f4);
  *(uint *)((long)param_1 + 0x2f4) = uVar8 + 1;
  lVar13 = FUN_00944e80(param_1 + (ulong)uVar8 * 0xf + 4);
  *(undefined4 *)(lVar13 + 8) = 0;
  *(undefined4 *)(lVar13 + 0x10) = 1;
  *(undefined8 *)(lVar13 + 0x18) = 0x1d00000000;
  *(undefined4 *)(param_1 + 0x5e) = 0x31;
  *(undefined4 *)(param_1 + 0x5f) = 0;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x60);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar13 = FUN_00945020(param_1 + (ulong)uVar8 * 0xf + 0x60);
  *(undefined1 *)(lVar13 + 0x20) = 1;
  *(undefined4 *)(lVar13 + 0x10) = 1;
  *(undefined4 *)(lVar13 + 8) = 0x3e99999a;
  *(undefined8 *)(lVar13 + 0x18) = 2;
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar13 = FUN_00945148(param_1 + (ulong)uVar8 * 0xf + 0x60);
  if (PTR_s_Ability__Item__HealingFlask_02beaf08 == (undefined *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0x811c9dc5;
    if (*PTR_s_Ability__Item__HealingFlask_02beaf08 != 0) {
      uVar8 = 0x811c9dc5;
      uVar9 = (uint)(byte)*PTR_s_Ability__Item__HealingFlask_02beaf08;
      pbVar10 = PTR_s_Ability__Item__HealingFlask_02beaf08;
      do {
        pbVar10 = pbVar10 + 1;
        uVar8 = (uVar8 ^ uVar9) * 0x1000193;
        uVar9 = (uint)*pbVar10;
      } while (*pbVar10 != 0);
    }
  }
  *(uint *)(lVar13 + 8) = uVar8;
  *(undefined1 *)(lVar13 + 0xc) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x5d4);
  *(uint *)((long)param_1 + 0x5d4) = uVar8 + 1;
  lVar13 = FUN_00945020(param_1 + (ulong)uVar8 * 0xf + 0x60);
  *(undefined8 *)(lVar13 + 0x18) = 0;
  *(undefined4 *)(lVar13 + 0x10) = 1;
  *(undefined4 *)(lVar13 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xba) = 0x32;
  *(undefined4 *)(param_1 + 0xbb) = 0;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x8b4);
  *(uint *)((long)param_1 + 0x8b4) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0xbc);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x8b4);
  *(uint *)((long)param_1 + 0x8b4) = uVar8 + 1;
  lVar13 = FUN_009451f4(param_1 + (ulong)uVar8 * 0xf + 0xbc);
  *(undefined **)(lVar13 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_02beba80;
  uVar8 = *(uint *)((long)param_1 + 0x8b4);
  *(uint *)((long)param_1 + 0x8b4) = uVar8 + 1;
  FUN_009452a0(param_1 + (ulong)uVar8 * 0xf + 0xbc);
  *(undefined4 *)(param_1 + 0x117) = 0;
  *(undefined4 *)(param_1 + 0x116) = 0x30;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar13 = FUN_0094530c(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined4 *)(lVar13 + 8) = 2;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar13 = FUN_00945020(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined4 *)(lVar13 + 0x10) = 1;
  *(undefined4 *)(lVar13 + 8) = 0x451c4000;
  *(undefined8 *)(lVar13 + 0x18) = 0x600000000;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar13 = FUN_00945388(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined1 *)(lVar13 + 8) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar13 = FUN_009451f4(param_1 + (ulong)uVar8 * 0xf + 0x118);
  puVar6 = PTR_s_Buff_Shop_AllowStorePurchase_02beba80;
  *(undefined1 *)(lVar13 + 0x14) = 1;
  *(undefined **)(lVar13 + 8) = puVar6;
  uVar8 = *(uint *)((long)param_1 + 0xb94);
  *(uint *)((long)param_1 + 0xb94) = uVar8 + 1;
  lVar13 = FUN_00944e80(param_1 + (ulong)uVar8 * 0xf + 0x118);
  *(undefined4 *)(lVar13 + 0x10) = 1;
  *(undefined4 *)(lVar13 + 8) = 0x41200000;
  pcVar2 = (char *)((long)param_1 + 0x310c);
  *(undefined8 *)(lVar13 + 0x18) = 0x2800000002;
  *(undefined4 *)(param_1 + 0x172) = 0x34;
  *(undefined4 *)(param_1 + 0x173) = 0;
  *(undefined1 *)((long)param_1 + 0x310b) = 4;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x174);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar13 = FUN_00945020(param_1 + (ulong)uVar8 * 0xf + 0x174);
  *(undefined1 *)(lVar13 + 0x20) = 1;
  *(undefined8 *)(lVar13 + 0x18) = 2;
  *(undefined4 *)(lVar13 + 8) = 0x3e99999a;
  *(undefined4 *)(lVar13 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar13 = FUN_00945148(param_1 + (ulong)uVar8 * 0xf + 0x174);
  if (PTR_s_Ability__Item__HealingFlask_02beaf08 == (undefined *)0x0) {
    uVar12 = 0;
  }
  else {
    uVar8 = (uint)(byte)*PTR_s_Ability__Item__HealingFlask_02beaf08;
    pbVar10 = PTR_s_Ability__Item__HealingFlask_02beaf08;
    if (*PTR_s_Ability__Item__HealingFlask_02beaf08 != 0) {
      do {
        uVar9 = (uint)pbVar10[1];
        uVar12 = (uVar12 ^ uVar8) * 0x1000193;
        uVar8 = uVar9;
        pbVar10 = pbVar10 + 1;
      } while (uVar9 != 0);
    }
  }
  *(uint *)(lVar13 + 8) = uVar12;
  *(undefined1 *)(lVar13 + 0xc) = 1;
  uVar8 = *(uint *)((long)param_1 + 0xe74);
  *(uint *)((long)param_1 + 0xe74) = uVar8 + 1;
  lVar13 = FUN_00945020(param_1 + (ulong)uVar8 * 0xf + 0x174);
  *(undefined4 *)(lVar13 + 8) = 0x3f800000;
  *(undefined4 *)(lVar13 + 0x10) = 1;
  *(undefined8 *)(lVar13 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1ce) = 0x33;
  *(undefined4 *)(param_1 + 0x1cf) = 0;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1154);
  *(uint *)((long)param_1 + 0x1154) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x1d0);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1154);
  *(uint *)((long)param_1 + 0x1154) = uVar8 + 1;
  lVar13 = FUN_00945428(param_1 + (ulong)uVar8 * 0xf + 0x1d0);
  *(undefined4 *)(lVar13 + 0x28) = 4;
  *(undefined4 *)(lVar13 + 0x10) = 4;
  *(undefined4 *)(lVar13 + 0x20) = 1;
  *(undefined4 *)(lVar13 + 0x18) = 0x40e00000;
  *(code **)(lVar13 + 8) = FUN_00943cec;
  *(undefined4 *)(param_1 + 0x22a) = 0x35;
  *(undefined4 *)(param_1 + 0x22b) = 2;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1434);
  *(uint *)((long)param_1 + 0x1434) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x22c);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1434);
  *(uint *)((long)param_1 + 0x1434) = uVar8 + 1;
  lVar13 = FUN_009451f4(param_1 + (ulong)uVar8 * 0xf + 0x22c);
  *(undefined **)(lVar13 + 8) = PTR_s_Buff_GameObjectives_River5v5Bonu_02beb580;
  *(undefined4 *)(param_1 + 0x286) = 0x36;
  *(undefined4 *)(param_1 + 0x287) = 2;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1714);
  *(uint *)((long)param_1 + 0x1714) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x288);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1714);
  *(uint *)((long)param_1 + 0x1714) = uVar8 + 1;
  lVar13 = FUN_00945428(param_1 + (ulong)uVar8 * 0xf + 0x288);
  *(undefined4 *)(lVar13 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar13 + 0x20) = 1;
  *(undefined4 *)(lVar13 + 8) = 0xf64cd42b;
  *(undefined4 *)(lVar13 + 0x10) = 3;
  *(byte *)(lVar13 + 0x2c) = *(byte *)(lVar13 + 0x2c) & 0xfc;
  uVar8 = *(uint *)((long)param_1 + 0x1714);
  *(uint *)((long)param_1 + 0x1714) = uVar8 + 1;
  lVar13 = FUN_009451f4(param_1 + (ulong)uVar8 * 0xf + 0x288);
  *(undefined **)(lVar13 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_02beba80;
  *(undefined4 *)(param_1 + 0x2e2) = 0x37;
  *(undefined4 *)(param_1 + 0x2e3) = 2;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x19f4);
  *(uint *)((long)param_1 + 0x19f4) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x2e4);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x19f4);
  *(uint *)((long)param_1 + 0x19f4) = uVar8 + 1;
  lVar13 = FUN_00945428(param_1 + (ulong)uVar8 * 0xf + 0x2e4);
  *(undefined4 *)(lVar13 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar13 + 0x20) = 1;
  *(undefined4 *)(lVar13 + 0x10) = 3;
  *(undefined4 *)(lVar13 + 8) = 0x4bf7772d;
  *(byte *)(lVar13 + 0x2c) = *(byte *)(lVar13 + 0x2c) & 0xfc;
  uVar8 = *(uint *)((long)param_1 + 0x19f4);
  *(uint *)((long)param_1 + 0x19f4) = uVar8 + 1;
  lVar13 = FUN_009451f4(param_1 + (ulong)uVar8 * 0xf + 0x2e4);
  *(undefined **)(lVar13 + 8) = PTR_s_Buff_Shop_AllowStorePurchase_02beba80;
  *(undefined4 *)(param_1 + 0x33e) = 0x38;
  *(undefined4 *)(param_1 + 0x33f) = 2;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1cd4);
  *(uint *)((long)param_1 + 0x1cd4) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x340);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1cd4);
  *(uint *)((long)param_1 + 0x1cd4) = uVar8 + 1;
  lVar13 = FUN_00945428(param_1 + (ulong)uVar8 * 0xf + 0x340);
  *(undefined4 *)(lVar13 + 0x10) = 4;
  *(undefined4 *)(lVar13 + 0x18) = 0x40e00000;
  *(undefined4 *)(lVar13 + 0x20) = 1;
  *(code **)(lVar13 + 8) = FUN_00943cec;
  *(undefined4 *)(lVar13 + 0x28) = 0x100;
  *(undefined4 *)(param_1 + 0x39a) = 0x39;
  *(undefined4 *)(param_1 + 0x39b) = 2;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar13 = FUN_00945020(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined1 *)(lVar13 + 0x20) = 1;
  *(undefined8 *)(lVar13 + 0x18) = 2;
  *(undefined4 *)(lVar13 + 0x10) = 1;
  *(undefined4 *)(lVar13 + 8) = 0x3dcccccd;
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar13 = FUN_00945020(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined8 *)(lVar13 + 0x18) = 0;
  *(undefined4 *)(lVar13 + 8) = 0x3f800000;
  *(undefined4 *)(lVar13 + 0x10) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x1fb4);
  *(uint *)((long)param_1 + 0x1fb4) = uVar8 + 1;
  lVar13 = FUN_00945388(param_1 + (ulong)uVar8 * 0xf + 0x39c);
  *(undefined1 *)(lVar13 + 8) = 1;
  *(undefined4 *)(param_1 + 0x3f7) = 2;
  *(undefined4 *)(param_1 + 0x3f6) = 0x3a;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2294);
  *(uint *)((long)param_1 + 0x2294) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x3f8);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2294);
  *(uint *)((long)param_1 + 0x2294) = uVar8 + 1;
  lVar13 = FUN_00945020(param_1 + (ulong)uVar8 * 0xf + 0x3f8);
  *(undefined8 *)(lVar13 + 0x18) = 2;
  *(undefined4 *)(lVar13 + 8) = 0x3f800000;
  *(undefined4 *)(lVar13 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x453) = 2;
  *(undefined4 *)(param_1 + 0x452) = 0x3b;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar13 = FUN_009451f4(param_1 + (ulong)uVar8 * 0xf + 0x454);
  puVar6 = PTR_s_Buff_Shop_AllowStorePurchase_02beba80;
  *(undefined1 *)(lVar13 + 0x14) = 1;
  *(undefined **)(lVar13 + 8) = puVar6;
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar13 = FUN_00945020(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined8 *)(lVar13 + 0x18) = 0x600000000;
  *(undefined4 *)(lVar13 + 0x10) = 1;
  *(undefined4 *)(lVar13 + 8) = 0x44fa0000;
  uVar8 = *(uint *)((long)param_1 + 0x2574);
  *(uint *)((long)param_1 + 0x2574) = uVar8 + 1;
  lVar13 = FUN_00945388(param_1 + (ulong)uVar8 * 0xf + 0x454);
  *(undefined1 *)(lVar13 + 8) = 1;
  *(undefined4 *)(param_1 + 0x4af) = 2;
  *(undefined4 *)(param_1 + 0x4ae) = 0x3c;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2854);
  *(uint *)((long)param_1 + 0x2854) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x4b0);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2854);
  *(uint *)((long)param_1 + 0x2854) = uVar8 + 1;
  FUN_009455d4(param_1 + (ulong)uVar8 * 0xf + 0x4b0);
  *(undefined4 *)(param_1 + 0x50b) = 2;
  *(undefined4 *)(param_1 + 0x50a) = 0x3d;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2b34);
  *(uint *)((long)param_1 + 0x2b34) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x50c);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2b34);
  *(uint *)((long)param_1 + 0x2b34) = uVar8 + 1;
  lVar13 = FUN_00945428(param_1 + (ulong)uVar8 * 0xf + 0x50c);
  *(undefined4 *)(lVar13 + 0x10) = 3;
  *(undefined4 *)(lVar13 + 0x18) = 0x41a00000;
  *(undefined4 *)(lVar13 + 8) = 0xbe59a86e;
  *(undefined4 *)(lVar13 + 0x20) = 1;
  *(byte *)(lVar13 + 0x2c) = *(byte *)(lVar13 + 0x2c) & 0xfc;
  *(undefined4 *)(param_1 + 0x566) = 0x3e;
  *(undefined4 *)(param_1 + 0x567) = 2;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x2e14);
  *(uint *)((long)param_1 + 0x2e14) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x568);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x2e14);
  *(uint *)((long)param_1 + 0x2e14) = uVar8 + 1;
  lVar13 = FUN_0094563c(param_1 + (ulong)uVar8 * 0xf + 0x568);
  *(undefined4 *)(lVar13 + 8) = 0x2000;
  *(undefined4 *)(param_1 + 0x5c2) = 0x3f;
  *(undefined4 *)(param_1 + 0x5c3) = 2;
  *pcVar2 = *pcVar2 + '\x01';
  uVar8 = *(uint *)((long)param_1 + 0x30f4);
  *(uint *)((long)param_1 + 0x30f4) = uVar8 + 1;
  lVar13 = FUN_00944dd8(param_1 + (ulong)uVar8 * 0xf + 0x5c4);
  *(undefined1 *)(lVar13 + 0xd) = 1;
  uVar8 = *(uint *)((long)param_1 + 0x30f4);
  *(uint *)((long)param_1 + 0x30f4) = uVar8 + 1;
  lVar13 = FUN_00945428(param_1 + (ulong)uVar8 * 0xf + 0x5c4);
  *(undefined4 *)(lVar13 + 0x18) = 0x41200000;
  *(undefined4 *)(lVar13 + 0x20) = 1;
  *(code **)(lVar13 + 8) = FUN_00943cec;
  *(undefined4 *)(lVar13 + 0x10) = 4;
  *(undefined4 *)(lVar13 + 0x28) = 0x80000;
  *(undefined4 *)(param_1 + 0x61e) = 0x40;
  *(undefined4 *)(param_1 + 0x61f) = 2;
  local_90 = 0;
  FUN_019889cc(&local_90,1,DAT_02c09250,0);
  if (local_90 != 0) {
    lVar7 = FUN_01985d44(local_90,DAT_02c7eb30);
    lVar13 = 0;
    if (lVar7 != 0) {
      lVar13 = lVar7 + 0x28;
    }
    puVar3 = &DAT_03214ce8;
    if (lVar7 != 0) {
      puVar3 = (undefined4 *)(lVar13 + 8);
    }
    uVar4 = *puVar3;
    *param_1 = lVar13;
    *(undefined4 *)(param_1 + 1) = uVar4;
  }
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

