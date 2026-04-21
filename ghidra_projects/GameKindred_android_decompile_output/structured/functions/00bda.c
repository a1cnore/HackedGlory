// functions/00bda — 33 functions
#include "libGameKindred.h"




void FUN_00bda000(uint *param_1,uint param_2)

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




void FUN_00bda084(undefined8 *param_1)

{
  void *pvVar1;
  
  *param_1 = &PTR_FUN_027edd70;
  pvVar1 = operator_new(0x628);
  FUN_00c3fe08();
  *(undefined8 **)((long)pvVar1 + 0xb8) = param_1;
  *param_1 = &PTR_FUN_027ede20;
  param_1[1] = pvVar1;
  return;
}




void FUN_00bda0d4(long param_1)

{
  FUN_00c40044(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bda0e0(long param_1)

{
  FUN_00c40218(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bda0e8(long param_1)

{
  FUN_00c401f4(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bda0f0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027edd70;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bda134(undefined8 *param_1)

{
  long lVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  undefined8 local_58;
  undefined8 *puStack_50;
  undefined8 *local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *param_1 = &PTR___cxa_pure_virtual_027ee358;
  pvVar2 = operator_new(0x2b90);
  FUN_00c40348();
  param_1[1] = pvVar2;
  *(undefined8 **)((long)pvVar2 + 0xb8) = param_1;
  FUN_00948cd8(param_1 + 2);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_027ede40;
  param_1[2] = &PTR_FUN_027ede78;
  *(undefined2 *)(param_1 + 0xc) = 0;
  FUN_00e70314(param_1 + 0xd);
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  FUN_00e84dac(param_1 + 0x11);
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x11] = &PTR_FUN_027e7ec8;
  FUN_00e84dac(param_1 + 0x1e);
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x23] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x1e] = &PTR_FUN_027b99b0;
  param_1[0x27] = 0;
  lVar3 = FUN_00a06b24();
  local_58 = 0;
  pcStack_40 = thunk_FUN_00bdadc8;
  puStack_50 = param_1;
  local_48 = param_1;
  FUN_00933ec0(lVar3 + 0x40,&local_58);
  uVar4 = FUN_009feccc();
  if ((uVar4 & 1) != 0) {
    lVar3 = FUN_009fece0();
    local_58 = 0;
    pcStack_40 = thunk_FUN_00bdad64;
    puStack_50 = param_1;
    local_48 = param_1;
    FUN_00bd275c(lVar3 + 0x60,&local_58);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bda27c(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_027ede40;
  param_1[2] = &PTR_FUN_027ede78;
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_00f033ac(param_1);
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  uVar2 = FUN_009feccc();
  if ((uVar2 & 1) != 0) {
    lVar3 = FUN_009fece0();
    lVar5 = (ulong)*(uint *)(lVar3 + 0x60) << 5;
    lVar1 = *(long *)(lVar3 + 0x68);
    do {
      lVar4 = lVar1;
      if (lVar5 == 0) goto LAB_00bda2f8;
      lVar5 = lVar5 + -0x20;
      lVar1 = lVar4 + 0x20;
    } while (*(undefined8 **)(lVar4 + 8) != param_1);
    FUN_00bd2944((uint *)(lVar3 + 0x60),lVar4);
  }
LAB_00bda2f8:
  lVar3 = FUN_00a06b24();
  lVar5 = (ulong)*(uint *)(lVar3 + 0x40) << 5;
  lVar1 = *(long *)(lVar3 + 0x48);
  do {
    lVar4 = lVar1;
    if (lVar5 == 0) goto LAB_00bda328;
    lVar5 = lVar5 + -0x20;
    lVar1 = lVar4 + 0x20;
  } while (*(undefined8 **)(lVar4 + 8) != param_1);
  FUN_00933fe0((uint *)(lVar3 + 0x40),lVar4);
LAB_00bda328:
  param_1[0x1e] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x27) & 1) != 0) {
    operator_delete((void *)param_1[0x29]);
  }
  if ((*(byte *)(param_1 + 0x23) & 1) != 0) {
    operator_delete((void *)param_1[0x25]);
  }
  FUN_00e84dd8(param_1 + 0x1e);
  param_1[0x11] = &PTR_FUN_027e7ec8;
  FUN_00b89368(param_1 + 0x1a,1);
  if ((*(byte *)(param_1 + 0x16) & 1) != 0) {
    operator_delete((void *)param_1[0x18]);
  }
  FUN_00e84dd8(param_1 + 0x11);
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  if ((void *)param_1[8] != (void *)0x0) {
    operator_delete__((void *)param_1[8]);
    param_1[7] = 0;
    param_1[8] = 0;
  }
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  FUN_00948d58(param_1 + 2);
  *param_1 = &PTR___cxa_pure_virtual_027ee358;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bda40c(long param_1)

{
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_00f033ac(param_1);
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  return;
}




void FUN_00bda43c(long param_1)

{
  FUN_00bda27c(param_1 + -0x10);
  return;
}




void FUN_00bda444(void *param_1)

{
  FUN_00bda27c();
  operator_delete(param_1);
  return;
}




void FUN_00bda468(long param_1)

{
  FUN_00bda27c((void *)(param_1 + -0x10));
  operator_delete((void *)(param_1 + -0x10));
  return;
}




void FUN_00bda490(long param_1)

{
  long lVar1;
  long local_48;
  code *pcStack_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0x60) == '\0') {
    pcStack_40 = thunk_FUN_00bda514;
    local_48 = param_1;
    FUN_00f02e98(0xbf800000,&local_48,0,1);
    FUN_00e70314(param_1 + 0x68);
    *(undefined1 *)(param_1 + 0x60) = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bda514(float param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  byte *__s1;
  byte *__s2;
  undefined4 uVar14;
  byte *pbVar15;
  float fVar16;
  float fVar17;
  timespec local_90;
  void *local_80;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  fVar16 = *(float *)(param_2 + 0x78) - param_1;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  *(float *)(param_2 + 0x78) = fVar16;
  fVar17 = fVar16 + -1.0;
  if (fVar16 + -1.0 <= 0.0) {
    fVar17 = 0.0;
  }
  FUN_00c416a0(fVar17,0x41980000,*(undefined8 *)(param_2 + 8));
  clock_gettime(1,&local_90);
  lVar10 = CONCAT71(local_90.tv_sec._1_7_,(byte)local_90.tv_sec) - *(long *)(param_2 + 0x68);
  lVar11 = local_90.tv_nsec - *(long *)(param_2 + 0x70);
  if (lVar11 < 0) {
    lVar10 = lVar10 + -1;
    lVar11 = (local_90.tv_nsec + 1000000000) - *(long *)(param_2 + 0x70);
  }
  if (1.0 <= (double)(lVar11 + lVar10 * 1000000000) * 1e-09) {
    uVar8 = FUN_00e84e68(param_2 + 0x88);
    if (((uVar8 & 1) != 0) && (uVar8 = FUN_009483a4(), (uVar8 & 1) == 0)) {
      lVar10 = FUN_00e829e0();
      if (*(int *)(lVar10 + 0xa0) != 0) {
        FUN_00e826d8(param_2 + 0x88);
      }
      FUN_00e70314((long *)(param_2 + 0x68));
    }
  }
  fVar16 = *(float *)(param_2 + 0x78);
  if (((int)fVar16 != (int)(fVar16 + param_1)) && (*(int *)(param_2 + 0x80) == 0)) {
    if ((fVar16 <= 8.0) && (((int)fVar16 & 1U) == 0)) {
      FUN_00c41024(*(undefined8 *)(param_2 + 8));
      fVar16 = *(float *)(param_2 + 0x78);
    }
    if ((int)fVar16 == 8) {
      FUN_00c417ac(*(undefined8 *)(param_2 + 8));
      fVar16 = *(float *)(param_2 + 0x78);
    }
  }
  if ((fVar16 <= 0.0) && (*(int *)(param_2 + 0x80) == 0)) {
    *(undefined4 *)(param_2 + 0x80) = 2;
    FUN_008fa54c(&local_90,"PENDING");
    FUN_008fffc0(&local_90);
    if (((byte)local_90.tv_sec & 1) != 0) {
      operator_delete(local_80);
    }
    uVar8 = FUN_00e80f58();
    if ((uVar8 & 1) != 0) {
      FUN_00e826a0(param_2 + 0x48,param_2 + 0xf0);
    }
  }
  uVar9 = *(uint *)(param_2 + 0x28);
  if (uVar9 != 0) {
    fVar16 = *(float *)(param_2 + 0x78);
    lVar10 = *(long *)(param_2 + 0x40);
    uVar8 = 0;
    do {
      fVar17 = *(float *)(lVar10 + uVar8 * 4);
      if (((0.0 < fVar17) && (fVar17 < 20.0 - fVar16)) &&
         (*(int *)(*(long *)(param_2 + 0x30) + uVar8 * 4) != 1)) {
        *(undefined4 *)(*(long *)(param_2 + 0x30) + uVar8 * 4) = 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  uVar8 = FUN_00e84e74(param_2 + 0x88);
  if (((uVar8 & 1) != 0) && (*(char *)(param_2 + 0xe0) != '\0')) {
    uVar8 = (ulong)(*(byte *)(param_2 + 0xb0) >> 1);
    lVar10 = param_2 + 0xb1;
    if ((*(byte *)(param_2 + 0xb0) & 1) != 0) {
      uVar8 = *(ulong *)(param_2 + 0xb8);
      lVar10 = *(long *)(param_2 + 0xc0);
    }
    FUN_008fcea8(param_2 + 0x48,lVar10,uVar8);
    if (1.0 < ABS(*(float *)(param_2 + 0x78) - *(float *)(param_2 + 200))) {
      *(float *)(param_2 + 0x78) = *(float *)(param_2 + 200);
    }
    uVar9 = *(uint *)(param_2 + 0xd0);
    if (uVar9 == 0) {
      bVar6 = true;
    }
    else {
      uVar8 = 0;
      bVar6 = true;
      piVar13 = (int *)(*(long *)(param_2 + 0xd8) + 0x2c);
      do {
        if ((float)piVar13[-1] <= 0.0) {
          bVar6 = (bool)(bVar6 & *piVar13 == 1);
        }
        uVar8 = uVar8 + 1;
        piVar13 = piVar13 + 0xc;
      } while (uVar8 < uVar9);
    }
    if ((*(char *)(param_2 + 0x61) == '\0') && (bVar6)) {
      *(undefined1 *)(param_2 + 0x61) = 1;
      FUN_009013cc();
      uVar9 = *(uint *)(param_2 + 0xd0);
    }
    if (uVar9 == 0) {
      uVar14 = 0;
    }
    else {
      uVar8 = 0;
      uVar14 = 0;
      do {
        lVar10 = *(long *)(param_2 + 0x30);
        lVar11 = *(long *)(param_2 + 0xd8);
        if (*(int *)(lVar10 + uVar8 * 4) == 0) {
          lVar12 = lVar11 + uVar8 * 0x30;
          fVar16 = *(float *)(lVar12 + 0x28);
          uVar2 = *(undefined4 *)(lVar12 + 0x2c);
          *(float *)(*(long *)(param_2 + 0x40) + uVar8 * 4) = fVar16;
          if ((bool)(bVar6 & 0.0 < fVar16)) {
            uVar2 = 1;
          }
          *(undefined4 *)(lVar10 + uVar8 * 4) = uVar2;
        }
        pbVar15 = (byte *)(lVar11 + uVar8 * 0x30);
        lVar10 = FUN_009580b8();
        bVar3 = *pbVar15;
        bVar4 = *(byte *)(lVar10 + 0x5508);
        __n = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          __n = *(size_t *)(pbVar15 + 8);
        }
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(lVar10 + 0x5510);
        }
        if (__n == sVar1) {
          __s1 = *(byte **)(lVar11 + uVar8 * 0x30 + 0x10);
          __s2 = *(byte **)(lVar10 + 0x5518);
          if ((bVar3 & 1) == 0) {
            __s1 = pbVar15 + 1;
          }
          if ((bVar4 & 1) == 0) {
            __s2 = (byte *)(lVar10 + 0x5509);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              lVar10 = -(ulong)(bVar3 >> 1);
              do {
                pbVar15 = pbVar15 + 1;
                if (*pbVar15 != *__s2) goto LAB_00bda8d8;
                lVar10 = lVar10 + 1;
                __s2 = __s2 + 1;
              } while (lVar10 != 0);
            }
          }
          else if ((__n != 0) && (iVar7 = memcmp(__s1,__s2,__n), iVar7 != 0)) goto LAB_00bda8d8;
          *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(*(long *)(param_2 + 0x30) + uVar8 * 4);
          FUN_00c40ed8(*(undefined8 *)(param_2 + 8),
                       *(int *)(*(long *)(param_2 + 0x30) + uVar8 * 4) == 0);
          uVar14 = (undefined4)uVar8;
        }
LAB_00bda8d8:
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_2 + 0xd0));
    }
    FUN_00c41274(*(undefined8 *)(param_2 + 8),(uint *)(param_2 + 0x28),uVar14);
  }
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00bda938(long param_1)

{
  long lVar1;
  
  lVar1 = FUN_00e829e0();
  if (*(int *)(lVar1 + 0xa0) != 0) {
    FUN_00e826d8(param_1 + 0x88);
    return;
  }
  return;
}




void FUN_00bda970(long param_1,uint param_2)

{
  undefined4 uVar1;
  long lVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  
  FUN_00a9dbbc(~param_2 & 1);
  if ((~param_2 & 1) != 0) {
    FUN_00c4175c(*(undefined8 *)(param_1 + 8));
    lVar2 = FUN_009580b8();
    if (1 < *(int *)(lVar2 + 0x55dc) - 5U) {
      if (*(int *)(param_1 + 0x80) == 1) {
        pcVar4 = "MAIN_MATCH_CONFIRM_EXPLAIN_FAILED";
      }
      else {
        pcVar4 = "MAIN_MATCH_CONFIRM_EXPLAIN_FAILED_YOURFAULT";
      }
      uVar5 = FUN_00e6ce7c(pcVar4,0);
      FUN_00a9da50(0x41400000,uVar5,0,1);
    }
    FUN_00bdaa90(param_1);
    return;
  }
  FUN_00c416ac();
  FUN_00bdaa90(param_1);
  FUN_00a06b24();
  uVar1 = FUN_00a06c64();
  FUN_00bdaaf8(param_1 + 0x28,uVar1,0);
  FUN_00a06b24();
  uVar1 = FUN_00a06c64();
  FUN_00bdab7c(0,param_1 + 0x38,uVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  FUN_00a06b24();
  uVar1 = FUN_00a06c64();
  FUN_00c41084(uVar5,uVar1);
  lVar2 = FUN_00e829e0();
  if (*(int *)(lVar2 + 0xa0) != 0) {
    FUN_00e826d8(param_1 + 0x88);
  }
  FUN_00c40fc4(*(undefined8 *)(param_1 + 8));
  uVar3 = FUN_0092e7ac();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_00eca230();
    return;
  }
  return;
}




void FUN_00bdaa90(long param_1)

{
  FUN_008fce60(param_1 + 0x48,&DAT_0320ffa8);
  *(undefined1 *)(param_1 + 0x61) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x41a00000;
  FUN_00e84dec(param_1 + 0xf0);
  FUN_00e84dec(param_1 + 0x88);
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  FUN_00c40e38(*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_00bdaaf8(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  if (param_2 == 0) {
    if (*(long *)(param_1 + 2) != 0) {
      *param_1 = 0;
    }
  }
  else {
    if (param_1[1] < param_2) {
      FUN_00bdb0f0(param_1,param_2);
    }
    uVar1 = *param_1;
    if (uVar1 < param_2) {
      lVar3 = (ulong)param_2 - (ulong)uVar1;
      puVar2 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 4);
      do {
        lVar3 = lVar3 + -1;
        *puVar2 = param_3;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
    *param_1 = param_2;
  }
  return;
}




void FUN_00bdab7c(undefined4 param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  if (param_3 == 0) {
    if (*(long *)(param_2 + 2) != 0) {
      *param_2 = 0;
    }
  }
  else {
    if (param_2[1] < param_3) {
      FUN_00925040(param_2,param_3);
    }
    uVar1 = *param_2;
    if (uVar1 < param_3) {
      lVar3 = (ulong)param_3 - (ulong)uVar1;
      puVar2 = (undefined4 *)(*(long *)(param_2 + 2) + (ulong)uVar1 * 4);
      do {
        lVar3 = lVar3 + -1;
        *puVar2 = param_1;
        puVar2 = puVar2 + 1;
      } while (lVar3 != 0);
    }
    *param_2 = param_3;
  }
  return;
}




void FUN_00bdac00(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f58();
  if (((uVar1 & 1) != 0) && (*(int *)(param_1 + 0x80) == 0)) {
    FUN_00e82668(param_1 + 0x48,param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_00c40ed8(*(undefined8 *)(param_1 + 8),0);
    return;
  }
  return;
}




void FUN_00bdac54(long param_1)

{
  long lVar1;
  ulong uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e80f58();
  if (((uVar2 & 1) != 0) && (*(int *)(param_1 + 0x80) == 0)) {
    FUN_00e826a0(param_1 + 0x48,param_1 + 0xf0);
    *(undefined4 *)(param_1 + 0x7c) = 2;
    FUN_008fa54c(local_40,"DECLINED");
    FUN_008fffc0(local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
    FUN_00c40ed8(*(undefined8 *)(param_1 + 8),0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdacf0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_009580c4();
  if ((uVar2 & 1) != 0) {
    uVar3 = FUN_009580b8();
    local_2c = 8;
    uVar2 = FUN_0095fc98(uVar3,&local_2c);
    if ((uVar2 & 1) != 0) {
      FUN_00e826d8(param_1 + 0x88);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdad5c(long param_1)

{
  FUN_00bdacf0(param_1 + -0x10);
  return;
}




void FUN_00bdad64(long param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  uVar1 = FUN_00a06e70(pbVar3);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  uVar2 = FUN_00a06f04(pbVar3);
  FUN_00c4160c(*(undefined8 *)(param_1 + 8),uVar1,uVar2);
  return;
}




void FUN_00bdadc8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_00a06b24();
  iVar2 = FUN_00a06c4c();
  if (iVar2 == 1) {
    lVar3 = FUN_009580b8();
    if (*(char *)(lVar3 + 0x568a) == '\0') {
      lVar3 = FUN_009580b8();
      FUN_008fcdb8(local_40,lVar3 + 0x54a8);
      FUN_00bdad64(param_1,local_40);
      if ((local_40[0] & 1) != 0) {
        operator_delete(local_30);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdae5c(long *param_1)

{
  long lVar1;
  code *local_68;
  long *plStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ed45a4();
  *param_1 = (long)&PTR_FUN_027ee210;
  FUN_00bda134(param_1 + 0x1b);
  (**(code **)(*param_1 + 0x78))(param_1,param_1[0x1c],1);
  local_40 = DAT_03210c7c;
  local_68 = thunk_FUN_00bdaf48;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  local_40 = DAT_03210c80;
  local_68 = thunk_FUN_00bdafec;
  local_50 = 0;
  uStack_48 = 0;
  local_58 = 0;
  plStack_60 = param_1;
  FUN_009693a0(param_1 + 1,&local_68);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bdaf48(long param_1)

{
  long lVar1;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  long lStack_38;
  
  lVar1 = tpidr_el0;
  lStack_38 = *(long *)(lVar1 + 0x28);
  FUN_00affa84();
  FUN_00aa1814(0);
  FUN_00bda490(param_1 + 0xd8);
  FUN_00f00298(&uStack_3c,&uStack_40);
  FUN_00f13f08(uStack_3c,uStack_40,*(undefined8 *)(param_1 + 0xe0));
  FUN_00bda970(param_1 + 0xd8,1);
  FUN_00f07940(0,0,*(undefined8 *)(param_1 + 0xe0),8,param_1,8);
  if (*(long *)(lVar1 + 0x28) == lStack_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bdafec(long param_1)

{
  FUN_00bda970(param_1 + 0xd8,0);
  if (*(char *)(param_1 + 0x138) != '\0') {
    FUN_00f033ac(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return;
}




void FUN_00bdaf48(long param_1)

{
  long lVar1;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00affa84();
  FUN_00aa1814(0);
  FUN_00bda490(param_1 + 0xd8);
  FUN_00f00298(&uStack_3c,&local_40);
  FUN_00f13f08(uStack_3c,local_40,*(undefined8 *)(param_1 + 0xe0));
  FUN_00bda970(param_1 + 0xd8,1);
  FUN_00f07940(0,0,*(undefined8 *)(param_1 + 0xe0),8,param_1,8);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdafec(long param_1)

{
  FUN_00bda970(param_1 + 0xd8,0);
  if (*(char *)(param_1 + 0x138) != '\0') {
    FUN_00f033ac(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  return;
}




void thunk_FUN_00bdadc8(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte abStack_40 [16];
  void *pvStack_30;
  long lStack_28;
  
  lVar1 = tpidr_el0;
  lStack_28 = *(long *)(lVar1 + 0x28);
  FUN_00a06b24();
  iVar2 = FUN_00a06c4c();
  if (iVar2 == 1) {
    lVar3 = FUN_009580b8();
    if (*(char *)(lVar3 + 0x568a) == '\0') {
      lVar3 = FUN_009580b8();
      FUN_008fcdb8(abStack_40,lVar3 + 0x54a8);
      FUN_00bdad64(param_1,abStack_40);
      if ((abStack_40[0] & 1) != 0) {
        operator_delete(pvStack_30);
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == lStack_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_00bdad64(long param_1,byte *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  uVar1 = FUN_00a06e70(pbVar3);
  pbVar3 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar3 = param_2 + 1;
  }
  uVar2 = FUN_00a06f04(pbVar3);
  FUN_00c4160c(*(undefined8 *)(param_1 + 8),uVar1,uVar2);
  return;
}




void thunk_FUN_00bda514(float param_1,long param_2)

{
  size_t __n;
  size_t sVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  byte *__s1;
  byte *__s2;
  undefined4 uVar14;
  byte *pbVar15;
  float fVar16;
  float fVar17;
  timespec tStack_90;
  void *pvStack_80;
  long lStack_78;
  
  lVar5 = tpidr_el0;
  lStack_78 = *(long *)(lVar5 + 0x28);
  fVar16 = *(float *)(param_2 + 0x78) - param_1;
  if (fVar16 <= 0.0) {
    fVar16 = 0.0;
  }
  *(float *)(param_2 + 0x78) = fVar16;
  fVar17 = fVar16 + -1.0;
  if (fVar16 + -1.0 <= 0.0) {
    fVar17 = 0.0;
  }
  FUN_00c416a0(fVar17,0x41980000,*(undefined8 *)(param_2 + 8));
  clock_gettime(1,&tStack_90);
  lVar10 = CONCAT71(tStack_90.tv_sec._1_7_,(byte)tStack_90.tv_sec) - *(long *)(param_2 + 0x68);
  lVar11 = tStack_90.tv_nsec - *(long *)(param_2 + 0x70);
  if (lVar11 < 0) {
    lVar10 = lVar10 + -1;
    lVar11 = (tStack_90.tv_nsec + 1000000000) - *(long *)(param_2 + 0x70);
  }
  if (1.0 <= (double)(lVar11 + lVar10 * 1000000000) * 1e-09) {
    uVar8 = FUN_00e84e68(param_2 + 0x88);
    if (((uVar8 & 1) != 0) && (uVar8 = FUN_009483a4(), (uVar8 & 1) == 0)) {
      lVar10 = FUN_00e829e0();
      if (*(int *)(lVar10 + 0xa0) != 0) {
        FUN_00e826d8(param_2 + 0x88);
      }
      FUN_00e70314((long *)(param_2 + 0x68));
    }
  }
  fVar16 = *(float *)(param_2 + 0x78);
  if (((int)fVar16 != (int)(fVar16 + param_1)) && (*(int *)(param_2 + 0x80) == 0)) {
    if ((fVar16 <= 8.0) && (((int)fVar16 & 1U) == 0)) {
      FUN_00c41024(*(undefined8 *)(param_2 + 8));
      fVar16 = *(float *)(param_2 + 0x78);
    }
    if ((int)fVar16 == 8) {
      FUN_00c417ac(*(undefined8 *)(param_2 + 8));
      fVar16 = *(float *)(param_2 + 0x78);
    }
  }
  if ((fVar16 <= 0.0) && (*(int *)(param_2 + 0x80) == 0)) {
    *(undefined4 *)(param_2 + 0x80) = 2;
    FUN_008fa54c(&tStack_90,"PENDING");
    FUN_008fffc0(&tStack_90);
    if (((byte)tStack_90.tv_sec & 1) != 0) {
      operator_delete(pvStack_80);
    }
    uVar8 = FUN_00e80f58();
    if ((uVar8 & 1) != 0) {
      FUN_00e826a0(param_2 + 0x48,param_2 + 0xf0);
    }
  }
  uVar9 = *(uint *)(param_2 + 0x28);
  if (uVar9 != 0) {
    fVar16 = *(float *)(param_2 + 0x78);
    lVar10 = *(long *)(param_2 + 0x40);
    uVar8 = 0;
    do {
      fVar17 = *(float *)(lVar10 + uVar8 * 4);
      if (((0.0 < fVar17) && (fVar17 < 20.0 - fVar16)) &&
         (*(int *)(*(long *)(param_2 + 0x30) + uVar8 * 4) != 1)) {
        *(undefined4 *)(*(long *)(param_2 + 0x30) + uVar8 * 4) = 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar9);
  }
  uVar8 = FUN_00e84e74(param_2 + 0x88);
  if (((uVar8 & 1) != 0) && (*(char *)(param_2 + 0xe0) != '\0')) {
    uVar8 = (ulong)(*(byte *)(param_2 + 0xb0) >> 1);
    lVar10 = param_2 + 0xb1;
    if ((*(byte *)(param_2 + 0xb0) & 1) != 0) {
      uVar8 = *(ulong *)(param_2 + 0xb8);
      lVar10 = *(long *)(param_2 + 0xc0);
    }
    FUN_008fcea8(param_2 + 0x48,lVar10,uVar8);
    if (1.0 < ABS(*(float *)(param_2 + 0x78) - *(float *)(param_2 + 200))) {
      *(float *)(param_2 + 0x78) = *(float *)(param_2 + 200);
    }
    uVar9 = *(uint *)(param_2 + 0xd0);
    if (uVar9 == 0) {
      bVar6 = true;
    }
    else {
      uVar8 = 0;
      bVar6 = true;
      piVar13 = (int *)(*(long *)(param_2 + 0xd8) + 0x2c);
      do {
        if ((float)piVar13[-1] <= 0.0) {
          bVar6 = (bool)(bVar6 & *piVar13 == 1);
        }
        uVar8 = uVar8 + 1;
        piVar13 = piVar13 + 0xc;
      } while (uVar8 < uVar9);
    }
    if ((*(char *)(param_2 + 0x61) == '\0') && (bVar6)) {
      *(undefined1 *)(param_2 + 0x61) = 1;
      FUN_009013cc();
      uVar9 = *(uint *)(param_2 + 0xd0);
    }
    if (uVar9 == 0) {
      uVar14 = 0;
    }
    else {
      uVar8 = 0;
      uVar14 = 0;
      do {
        lVar10 = *(long *)(param_2 + 0x30);
        lVar11 = *(long *)(param_2 + 0xd8);
        if (*(int *)(lVar10 + uVar8 * 4) == 0) {
          lVar12 = lVar11 + uVar8 * 0x30;
          fVar16 = *(float *)(lVar12 + 0x28);
          uVar2 = *(undefined4 *)(lVar12 + 0x2c);
          *(float *)(*(long *)(param_2 + 0x40) + uVar8 * 4) = fVar16;
          if ((bool)(bVar6 & 0.0 < fVar16)) {
            uVar2 = 1;
          }
          *(undefined4 *)(lVar10 + uVar8 * 4) = uVar2;
        }
        pbVar15 = (byte *)(lVar11 + uVar8 * 0x30);
        lVar10 = FUN_009580b8();
        bVar3 = *pbVar15;
        bVar4 = *(byte *)(lVar10 + 0x5508);
        __n = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          __n = *(size_t *)(pbVar15 + 8);
        }
        sVar1 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar1 = *(size_t *)(lVar10 + 0x5510);
        }
        if (__n == sVar1) {
          __s1 = *(byte **)(lVar11 + uVar8 * 0x30 + 0x10);
          __s2 = *(byte **)(lVar10 + 0x5518);
          if ((bVar3 & 1) == 0) {
            __s1 = pbVar15 + 1;
          }
          if ((bVar4 & 1) == 0) {
            __s2 = (byte *)(lVar10 + 0x5509);
          }
          if ((bVar3 & 1) == 0) {
            if (__n != 0) {
              lVar10 = -(ulong)(bVar3 >> 1);
              do {
                pbVar15 = pbVar15 + 1;
                if (*pbVar15 != *__s2) goto LAB_00bda8d8;
                lVar10 = lVar10 + 1;
                __s2 = __s2 + 1;
              } while (lVar10 != 0);
            }
          }
          else if ((__n != 0) && (iVar7 = memcmp(__s1,__s2,__n), iVar7 != 0)) goto LAB_00bda8d8;
          *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(*(long *)(param_2 + 0x30) + uVar8 * 4);
          FUN_00c40ed8(*(undefined8 *)(param_2 + 8),
                       *(int *)(*(long *)(param_2 + 0x30) + uVar8 * 4) == 0);
          uVar14 = (undefined4)uVar8;
        }
LAB_00bda8d8:
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(uint *)(param_2 + 0xd0));
    }
    FUN_00c41274(*(undefined8 *)(param_2 + 8),(uint *)(param_2 + 0x28),uVar14);
  }
  if (*(long *)(lVar5 + 0x28) != lStack_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

