// functions/00ac1 — 21 functions
#include "libGameKindred.h"




void FUN_00ac1238(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00ac1240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_00ac1244(long *param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f58();
  if ((uVar1 & 1) != 0) {
    if ((param_2 & 1) == 0) {
      FUN_00ce1f70(param_1 + 0x101,1);
    }
    else if (((long *)param_1[0x80e] == (long *)0x0) ||
            (uVar1 = (**(code **)(*(long *)param_1[0x80e] + 0x30))(), (uVar1 & 1) == 0)) {
      FUN_00ac0eb0(param_1,&DAT_03210450);
    }
                    /* WARNING: Could not recover jumptable at 0x00ac12bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x150))(param_1);
    return;
  }
  return;
}




void FUN_00ac12c0(long param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00e80f58();
  if ((uVar1 & 1) != 0) {
    if ((param_2 & 1) == 0) {
      FUN_00ce1f70(param_1 + 0x808,1);
      FUN_00910394(param_1 + 0xbc8,&DAT_03210450);
      *(undefined1 *)(param_1 + 0x40ea) = 0;
    }
    else if ((*(long **)(param_1 + 0x4070) == (long *)0x0) ||
            (uVar1 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x30))(), (uVar1 & 1) == 0)) {
      FUN_00ac0eb0(param_1,&DAT_03210450);
      return;
    }
  }
  return;
}




void FUN_00ac1340(long param_1)

{
  FUN_00910394(param_1 + 0xbc8,&DAT_03210450);
  *(undefined1 *)(param_1 + 0x40ea) = 0;
  return;
}




void FUN_00ac1374(undefined4 param_1,undefined4 param_2,long *param_3)

{
  *(undefined4 *)(param_3 + 0x817) = param_1;
  *(undefined4 *)((long)param_3 + 0x40bc) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00ac138c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_3 + 0x150))();
  return;
}




void FUN_00ac1390(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x354) =
       *(uint *)(param_1 + 0x354) & 0xfffffff8 | *(uint *)(param_1 + 0x354) & 3 | (param_2 & 1) << 2
  ;
  return;
}




void FUN_00ac13a4(long param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  FUN_00ce1cbc(param_1 + 0x808,param_2 & 1);
  uVar1 = *(uint *)(param_1 + 0x88c);
  uVar2 = 0xff;
  if ((param_2 & 1) == 0) {
    uVar2 = 0x4c;
  }
  if ((uVar1 >> 7 & 0xff) == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x88c) = uVar1 & 0xffff8000 | uVar1 & 0x7f | uVar2 << 7;
  FUN_0091ada4(param_1 + 0x808);
  return;
}




void FUN_00ac1418(long param_1,undefined8 param_2,ulong param_3)

{
  if ((*(char *)(param_1 + 0x40ea) != '\0') && ((param_3 & 1) == 0)) {
    return;
  }
  FUN_00b02c3c(param_1 + 0x808,param_2,0);
  return;
}




void FUN_00ac1438(long param_1)

{
  FUN_00ce1e34(param_1 + 0x808);
  return;
}




void FUN_00ac1474(long param_1,undefined8 *param_2,undefined8 param_3,char *param_4,uint param_5,
                 uint param_6)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  double dVar17;
  long *local_a0 [2];
  void *local_90;
  undefined8 local_88;
  void *local_80;
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  dVar17 = 0.0;
  if ((param_4 == (char *)0x0) || (*param_4 == '\0')) {
    bVar5 = false;
  }
  else {
    dVar17 = (double)FUN_00e6bdf4(param_4);
    bVar5 = true;
  }
  uVar6 = FUN_00e70b34(param_1 + 0x40c8,param_2);
  if (((uVar6 & 1) == 0) || (*(double *)(param_1 + 0x40d8) + 300.0 <= dVar17)) {
    bVar12 = true;
  }
  else {
    bVar12 = false;
  }
  if ((param_6 & 1) == 0) {
    FUN_00910394(param_1 + 0x40c8,param_2);
    *(double *)(param_1 + 0x40d8) = dVar17;
  }
  plVar7 = operator_new(0x408);
  if (!bVar12 && (param_6 & 1) == 0) {
    param_2 = &DAT_03210450;
  }
  if (bVar5) {
    FUN_00ac1884(local_a0,param_1,param_4);
    FUN_00e70570(&local_88,local_a0);
    FUN_00ac38fc(plVar7,param_2,param_3,&local_88,param_5 & 1,param_6 & 1);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    if (((byte)local_a0[0] & 1) != 0) {
      operator_delete(local_90);
    }
  }
  else {
    thunk_FUN_00e7051c(&local_88,&DAT_03210450);
    FUN_00ac38fc(plVar7,param_2,param_3,&local_88,param_5 & 1,param_6 & 1);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  local_a0[0] = plVar7;
  fVar13 = (float)FUN_00f13e54(param_1 + 0x130);
  uVar6 = 0x3f4ccccd;
  plVar2 = plVar7 + 0x5b;
  fVar14 = (float)FUN_00f0d548(plVar2);
  fVar16 = fVar13 * 0.8;
  if (fVar14 <= fVar13 * 0.8) {
    fVar16 = fVar14;
  }
  FUN_00f0dad0(fVar16,plVar2,1);
  uVar15 = (**(code **)(*plVar7 + 0x58))(plVar7,0,0,1,1);
  local_88 = CONCAT44((int)uVar6,uVar15);
  FUN_00f13f18(plVar7,&local_88);
  if ((param_5 & 1) == 0) {
    local_88 = 0;
    (**(code **)(*plVar7 + 0x28))(plVar7,&local_88);
    if (*(float *)(local_a0[0] + 8) == 0.0) goto LAB_00ac1714;
    *(undefined4 *)(local_a0[0] + 8) = 0;
  }
  else {
    if ((*(float *)(plVar7 + 0x65) != 1.0) || (*(float *)((long)plVar7 + 0x32c) != 0.0)) {
      plVar7[0x65] = 0x3f800000;
      FUN_0091ada4(plVar2);
      plVar7 = local_a0[0];
    }
    if ((*(float *)(plVar7 + 0x3f) != 1.0) || (*(float *)((long)plVar7 + 0x1fc) != 0.0)) {
      plVar7[0x3f] = 0x3f800000;
      FUN_0091ada4(plVar7 + 0x35);
    }
    fVar16 = (float)FUN_00f13e54(param_1 + 0x130);
    uVar6 = (ulong)(uint)*(float *)(local_a0[0] + 8);
    if (*(float *)(local_a0[0] + 8) == fVar16) goto LAB_00ac1714;
    *(float *)(local_a0[0] + 8) = fVar16;
  }
  FUN_0091ada4();
LAB_00ac1714:
  puVar1 = (uint *)(param_1 + 0x4078);
  FUN_00ac18f8(puVar1,local_a0);
  FUN_00ed026c(param_1 + 0x2d0,local_a0[0],1);
  uVar3 = *puVar1 - *(int *)(param_1 + 0x40e4);
  if (0 < (int)uVar3) {
    lVar9 = 0;
    lVar10 = 0;
    uVar11 = (ulong)uVar3;
    do {
      plVar7 = *(long **)(*(long *)(param_1 + 0x4080) + lVar9);
      if (plVar7 == (long *)0x0) {
        puVar8 = (undefined8 *)(*(long *)(param_1 + 0x4080) + lVar10 * 8);
      }
      else {
        (**(code **)(*plVar7 + 8))();
        puVar8 = (undefined8 *)(*(long *)(param_1 + 0x4080) + lVar9);
      }
      lVar10 = lVar10 + 1;
      uVar11 = uVar11 - 1;
      lVar9 = lVar9 + 8;
      *puVar8 = 0;
    } while (uVar11 != 0);
    if (0 < (int)uVar3) {
      FUN_00ac1980(puVar1,*(long *)(param_1 + 0x4080),
                   *(long *)(param_1 + 0x4080) + (long)(int)uVar3 * 8);
    }
  }
  lVar10 = **(long **)(param_1 + 0x4080);
  if (*(float *)(lVar10 + 0x44) != 0.0) {
    *(undefined4 *)(lVar10 + 0x44) = 0;
    FUN_0091ada4();
  }
  if (1 < *puVar1) {
    lVar10 = 0;
    do {
      plVar7 = (long *)(*(long *)(param_1 + 0x4080) + lVar10 * 8);
      plVar2 = (long *)*plVar7;
      lVar9 = plVar7[1];
      fVar16 = *(float *)((long)plVar2 + 0x44);
      (**(code **)(*plVar2 + 0x48))();
      fVar16 = fVar16 + (float)uVar6 + 20.0;
      if (*(float *)(lVar9 + 0x44) != fVar16) {
        *(float *)(lVar9 + 0x44) = fVar16;
        FUN_0091ada4(lVar9);
      }
      uVar11 = lVar10 + 2;
      lVar10 = lVar10 + 1;
    } while (uVar11 < *puVar1);
  }
  FUN_00ac19ec(param_1);
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac1884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_138 [256];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e6bdf4(param_3);
  FUN_00e6c1c0(auStack_138,0x100,&DAT_01baf1cd);
  FUN_008fa54c(param_1,auStack_138);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00ac18f8(uint *param_1,undefined8 *param_2)

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
    FUN_00ac3d18(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00ac1980(uint *param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = *param_1;
  uVar2 = (uint)((ulong)((long)param_3 - (long)param_2) >> 3);
  if (uVar1 == uVar2) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    lVar3 = *(long *)(param_1 + 2);
    for (; (undefined8 *)(lVar3 + (ulong)uVar1 * 8) != param_3; param_3 = param_3 + 1) {
      *param_2 = *param_3;
      param_2 = param_2 + 1;
    }
    *param_1 = uVar1 - uVar2;
  }
  return;
}




void FUN_00ac19ec(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  lVar1 = param_3 + 0x130;
  lVar2 = param_3 + 0x2d0;
  uVar3 = FUN_00f13e54(lVar1);
  FUN_00ed0470(lVar2,1,0,1,1);
  FUN_00ed02d8(uVar3,lVar2);
  FUN_00ed0464(lVar2);
  fVar4 = param_2;
  FUN_00f13e54(lVar1);
  if (fVar4 < param_2) {
    FUN_00f13e54(lVar1);
    fVar5 = fVar4;
    FUN_00ed0464(lVar2);
    if (*(float *)(param_3 + 0x314) != fVar4 - fVar5) {
      *(float *)(param_3 + 0x314) = fVar4 - fVar5;
      FUN_0091ada4(lVar2);
      return;
    }
  }
  return;
}




void FUN_00ac1aac(long param_1)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  ulong uVar4;
  
  puVar1 = (uint *)(param_1 + 0x4078);
  uVar3 = *puVar1;
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      plVar2 = *(long **)(*(long *)(param_1 + 0x4080) + uVar4 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
        *(undefined8 *)(*(long *)(param_1 + 0x4080) + uVar4 * 8) = 0;
        uVar3 = *puVar1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar3);
  }
  if (*(long *)(param_1 + 0x4080) != 0) {
    *puVar1 = 0;
  }
  *(undefined8 *)(param_1 + 0x40d8) = 0;
  FUN_00910394(param_1 + 0x40c8,&DAT_03210450);
  return;
}




void FUN_00ac1b34(long param_1)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  int iVar3;
  char *__s2;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  void *__s1;
  
  FUN_008fce60((byte *)(param_1 + 0x4088));
  bVar2 = *(byte *)(param_1 + 0x4088);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x4090);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    __s1 = *(void **)(param_1 + 0x4098);
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x4089);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar5 = (char *)(param_1 + 0x4089);
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar5 != *__s2) goto LAB_00ac1bd8;
          pcVar5 = pcVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
    }
    else if (__n != 0) {
      iVar3 = memcmp(__s1,__s2,__n);
      uVar4 = (uint)(iVar3 != 0) << 2;
      goto LAB_00ac1bfc;
    }
    uVar4 = 0;
  }
  else {
LAB_00ac1bd8:
    uVar4 = 4;
  }
LAB_00ac1bfc:
  *(uint *)(param_1 + 0x88c) = *(uint *)(param_1 + 0x88c) & 0xfffffffb | uVar4;
  return;
}




void FUN_00ac1c18(long param_1,byte *param_2,ulong param_3)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  char *__s2;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  byte *pbVar11;
  byte *__s2_00;
  void *__s1;
  
  pbVar1 = (byte *)(param_1 + 0x4088);
  if ((param_3 & 1) == 0) {
    bVar4 = *param_2;
    bVar5 = *pbVar1;
    sVar2 = (ulong)(bVar4 >> 1);
    if ((bVar4 & 1) != 0) {
      sVar2 = *(size_t *)(param_2 + 8);
    }
    sVar3 = (ulong)(bVar5 >> 1);
    if ((bVar5 & 1) != 0) {
      sVar3 = *(size_t *)(param_1 + 0x4090);
    }
    if (sVar2 == sVar3) {
      pbVar11 = *(byte **)(param_2 + 0x10);
      __s2_00 = *(byte **)(param_1 + 0x4098);
      if ((bVar4 & 1) == 0) {
        pbVar11 = param_2 + 1;
      }
      if ((bVar5 & 1) == 0) {
        __s2_00 = (byte *)(param_1 + 0x4089);
      }
      if ((bVar4 & 1) == 0) {
        if (sVar2 == 0) {
          return;
        }
        lVar10 = -(ulong)(bVar4 >> 1);
        pbVar11 = param_2;
        while (pbVar11 = pbVar11 + 1, *pbVar11 == *__s2_00) {
          lVar10 = lVar10 + 1;
          __s2_00 = __s2_00 + 1;
          if (lVar10 == 0) {
            return;
          }
        }
      }
      else {
        if (sVar2 == 0) {
          return;
        }
        iVar6 = memcmp(pbVar11,__s2_00,sVar2);
        if (iVar6 == 0) {
          return;
        }
      }
    }
  }
  FUN_008fce60(pbVar1,param_2);
  *(undefined1 *)(param_1 + 0x40e9) = 1;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 4;
  if ((*(long **)(param_1 + 0x4070) == (long *)0x0) ||
     (uVar7 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x30))(), (uVar7 & 1) == 0)) {
    FUN_00ac0eb0(param_1,&DAT_03210450);
  }
  else {
    if ((*pbVar1 & 1) == 0) {
      lVar10 = param_1 + 0x4089;
    }
    else {
      lVar10 = *(long *)(param_1 + 0x4098);
    }
    (**(code **)(**(long **)(param_1 + 0x4070) + 0x48))(*(long **)(param_1 + 0x4070),lVar10,0);
  }
  bVar4 = *pbVar1;
  sVar2 = (ulong)(bVar4 >> 1);
  if ((bVar4 & 1) != 0) {
    sVar2 = *(size_t *)(param_1 + 0x4090);
  }
  sVar3 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar3 = DAT_0320ffb0;
  }
  if (sVar2 == sVar3) {
    __s1 = *(void **)(param_1 + 0x4098);
    if ((bVar4 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x4089);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar4 & 1) == 0) {
      if (sVar2 != 0) {
        pcVar9 = (char *)(param_1 + 0x4089);
        lVar10 = -(ulong)(bVar4 >> 1);
        do {
          if (*pcVar9 != *__s2) goto LAB_00ac1dc0;
          pcVar9 = pcVar9 + 1;
          lVar10 = lVar10 + 1;
          __s2 = __s2 + 1;
        } while (lVar10 != 0);
      }
    }
    else if (sVar2 != 0) {
      iVar6 = memcmp(__s1,__s2,sVar2);
      uVar8 = (uint)(iVar6 != 0) << 2;
      goto LAB_00ac1de4;
    }
    uVar8 = 0;
  }
  else {
LAB_00ac1dc0:
    uVar8 = 4;
  }
LAB_00ac1de4:
  *(uint *)(param_1 + 0x88c) = *(uint *)(param_1 + 0x88c) & 0xfffffffb | uVar8;
  return;
}




void FUN_00ac1e04(long param_1)

{
  ulong uVar1;
  
  if ((*(long **)(param_1 + 0x4070) != (long *)0x0) &&
     (uVar1 = (**(code **)(**(long **)(param_1 + 0x4070) + 0x30))(), (uVar1 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00ac1e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x4070) + 0x68))(0x3a83126f);
    return;
  }
  return;
}




void FUN_00ac1e58(long param_1)

{
  FUN_00f0d75c(param_1 + 0x2250);
  return;
}




void FUN_00ac1e64(long param_1)

{
  FUN_00f0d75c(param_1 + 0x2980);
  return;
}




void FUN_00ac1e70(long param_1)

{
  size_t __n;
  size_t sVar1;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  char *__s2;
  long lVar7;
  char *pcVar8;
  long lVar9;
  void *pvVar10;
  double dVar11;
  undefined4 local_6c;
  ulong local_68 [2];
  void *local_58;
  timespec local_50;
  void *local_40;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  *(uint *)(param_1 + 0x224c) = *(uint *)(param_1 + 0x224c) & 0xfffffffb;
  FUN_00b16600(param_1 + 0x2380);
  *(uint *)(param_1 + 0x297c) = *(uint *)(param_1 + 0x297c) & 0xfffffffb;
  *(uint *)(param_1 + 0x354) = *(uint *)(param_1 + 0x354) | 4;
  bVar3 = *(byte *)(param_1 + 0x4088);
  __n = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x4090);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar10 = *(void **)(param_1 + 0x4098);
    pvVar2 = pvVar10;
    if ((bVar3 & 1) == 0) {
      pvVar2 = (void *)(param_1 + 0x4089);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar3 & 1) == 0) {
      if (__n != 0) {
        pcVar8 = (char *)(param_1 + 0x4089);
        lVar9 = -(ulong)(bVar3 >> 1);
        do {
          if (*pcVar8 != *__s2) goto LAB_00ac1f50;
          pcVar8 = pcVar8 + 1;
          lVar9 = lVar9 + 1;
          __s2 = __s2 + 1;
        } while (lVar9 != 0);
      }
      goto LAB_00ac1f8c;
    }
    if ((__n == 0) || (iVar5 = memcmp(pvVar2,__s2,__n), iVar5 == 0)) goto LAB_00ac1f8c;
    plVar6 = *(long **)(param_1 + 0x4070);
  }
  else {
LAB_00ac1f50:
    plVar6 = *(long **)(param_1 + 0x4070);
    if ((bVar3 & 1) == 0) {
      pvVar10 = (void *)(param_1 + 0x4089);
    }
    else {
      pvVar10 = *(void **)(param_1 + 0x4098);
    }
  }
  (**(code **)(*plVar6 + 0x48))(plVar6,pvVar10,0);
LAB_00ac1f8c:
  if (*(long **)(param_1 + 0x40c0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x40c0) + 0x30))();
  }
  clock_gettime(1,&local_50);
  lVar7 = local_50.tv_nsec - *(long *)(param_1 + 0x40f8);
  lVar9 = local_50.tv_sec - *(long *)(param_1 + 0x40f0);
  if (lVar7 < 0) {
    lVar9 = lVar9 + -1;
    lVar7 = (local_50.tv_nsec + 1000000000) - *(long *)(param_1 + 0x40f8);
  }
  dVar11 = (double)(lVar7 + lVar9 * 1000000000) * 1e-09;
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  local_50.tv_sec = 0;
  local_50.tv_nsec = 0;
  local_40 = (void *)0x0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_58 = (void *)0x0;
  FUN_00948284(&local_50,local_68,&local_6c);
  pvVar10 = (void *)((ulong)&local_50 | 1);
  if ((local_50.tv_sec & 1U) != 0) {
    pvVar10 = local_40;
  }
  pvVar2 = (void *)((ulong)local_68 | 1);
  if ((local_68[0] & 1) != 0) {
    pvVar2 = local_58;
  }
  FUN_0090cb08(pvVar10,pvVar2,local_6c,(int)(dVar11 * 1000.0));
  if ((local_68[0] & 1) != 0) {
    operator_delete(local_58);
  }
  if ((local_50.tv_sec & 1U) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar4 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

