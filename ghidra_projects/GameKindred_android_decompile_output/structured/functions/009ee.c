// functions/009ee — 17 functions
#include "libGameKindred.h"




void FUN_009ee190(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_009ee8b0(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




undefined4 FUN_009ee224(uint *param_1,byte *param_2)

{
  size_t __n;
  size_t sVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  byte *__s2;
  long lVar7;
  byte *pbVar8;
  undefined4 unaff_w20;
  long lVar9;
  byte local_80 [8];
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  if (*param_1 != 0) {
    lVar9 = *(long *)(param_1 + 2);
    do {
      FUN_008fcdb8(local_80,lVar9);
      bVar5 = local_80[0];
      bVar2 = *param_2;
      __n = (ulong)(bVar2 >> 1);
      if ((bVar2 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      sVar1 = (ulong)(local_80[0] >> 1);
      if ((local_80[0] & 1) != 0) {
        sVar1 = local_78;
      }
      if (__n == sVar1) {
        pbVar8 = param_2 + 1;
        if ((bVar2 & 1) != 0) {
          pbVar8 = *(byte **)(param_2 + 0x10);
        }
        __s2 = (byte *)((ulong)local_80 | 1);
        if ((local_80[0] & 1) != 0) {
          __s2 = local_70;
        }
        if ((bVar2 & 1) == 0) {
          if (__n != 0) {
            lVar7 = -(ulong)(bVar2 >> 1);
            pbVar8 = param_2 + 1;
            do {
              if (*pbVar8 != *__s2) goto joined_r0x009ee314;
              pbVar8 = pbVar8 + 1;
              lVar7 = lVar7 + 1;
              __s2 = __s2 + 1;
            } while (lVar7 != 0);
          }
        }
        else if ((__n != 0) && (iVar6 = memcmp(pbVar8,__s2,__n), iVar6 != 0))
        goto joined_r0x009ee314;
        unaff_w20 = *(undefined4 *)(lVar9 + 0x18);
        bVar4 = true;
        if ((bVar5 & 1) == 0) goto LAB_009ee318;
LAB_009ee32c:
        operator_delete(local_70);
        if (bVar4) goto LAB_009ee354;
      }
      else {
joined_r0x009ee314:
        bVar4 = false;
        if ((bVar5 & 1) != 0) goto LAB_009ee32c;
LAB_009ee318:
        if (bVar4) goto LAB_009ee354;
      }
      lVar9 = lVar9 + 0x20;
    } while (lVar9 != *(long *)(param_1 + 2) + (ulong)*param_1 * 0x20);
  }
  unaff_w20 = 0;
LAB_009ee354:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_w20;
}




undefined4 FUN_009ee38c(undefined8 param_1)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fc940();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_008fcdb8(local_40,lVar3);
    uVar2 = FUN_009ee224(param_1,local_40);
    if ((local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_009ee410(long param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  uint *puVar1;
  size_t __n;
  size_t sVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  ulong uVar6;
  int iVar7;
  byte *__s2;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  ulong local_88;
  size_t local_80;
  byte *local_78;
  undefined4 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar1 = (uint *)(param_1 + 0x10);
  if ((param_4 & 1) == 0) {
    puVar1 = (uint *)(param_1 + 0x20);
  }
  if (*puVar1 != 0) {
    lVar10 = *(long *)(puVar1 + 2);
    do {
      FUN_008fcdb8(&local_88,lVar10);
      uVar6 = local_88;
      bVar3 = *param_2;
      __n = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        __n = *(size_t *)(param_2 + 8);
      }
      sVar2 = local_88 >> 1 & 0x7f;
      if ((local_88 & 1) != 0) {
        sVar2 = local_80;
      }
      bVar5 = false;
      if (__n == sVar2) {
        pbVar9 = param_2 + 1;
        if ((bVar3 & 1) != 0) {
          pbVar9 = *(byte **)(param_2 + 0x10);
        }
        __s2 = (byte *)((ulong)&local_88 | 1);
        if ((local_88 & 1) != 0) {
          __s2 = local_78;
        }
        if ((bVar3 & 1) == 0) {
          if (__n != 0) {
            lVar8 = -(ulong)(bVar3 >> 1);
            pbVar9 = param_2 + 1;
            do {
              if (*pbVar9 != *__s2) {
                bVar5 = false;
                if ((local_88 & 1) == 0) goto LAB_009ee51c;
                goto LAB_009ee514;
              }
              pbVar9 = pbVar9 + 1;
              lVar8 = lVar8 + 1;
              __s2 = __s2 + 1;
            } while (lVar8 != 0);
          }
        }
        else if (__n != 0) {
          iVar7 = memcmp(pbVar9,__s2,__n);
          bVar5 = false;
          if (iVar7 != 0) goto LAB_009ee510;
        }
        bVar5 = true;
        *(undefined4 *)(lVar10 + 0x18) = param_3;
      }
LAB_009ee510:
      if ((uVar6 & 1) != 0) {
LAB_009ee514:
        operator_delete(local_78);
      }
LAB_009ee51c:
      if (bVar5) goto LAB_009ee57c;
      lVar10 = lVar10 + 0x20;
    } while (lVar10 != *(long *)(puVar1 + 2) + (ulong)*puVar1 * 0x20);
  }
  local_88 = 0;
  local_80 = 0;
  local_78 = (byte *)0x0;
  FUN_008fce60(&local_88,param_2);
  local_70 = param_3;
  FUN_009ee5b0(puVar1,&local_88);
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
LAB_009ee57c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_009ee5b0(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    if (uVar4 < 0x20) {
      uVar3 = uVar4 << 1;
    }
    else if (uVar4 == 0xffffffff) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uVar4 + 0x10) - (uVar4 & 0xf);
    }
    uVar2 = uVar4 + 1;
    if (uVar4 + 1 <= uVar3) {
      uVar2 = uVar3;
    }
    FUN_009ee988(param_1,uVar2);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_008fcdb8(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




undefined4 FUN_009ee644(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fc940();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_008fcdb8(local_50,lVar3);
    uVar2 = FUN_009ede24(param_1,local_50,param_2 & 1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 FUN_009ee6d8(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar3 = FUN_008fc990();
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    FUN_008fcdb8(local_50,lVar3);
    uVar2 = FUN_009ede24(param_1,local_50,param_2 & 1);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_009ee76c(void)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = (float)FUN_009ee7a8();
  lVar1 = FUN_008fc920();
  fVar3 = 0.0;
  if ((lVar1 != 0) && (*(uint *)(lVar1 + 0x6c) != 0)) {
    fVar3 = fVar2 / (float)*(uint *)(lVar1 + 0x6c);
  }
  return fVar3;
}




void FUN_009ee7a8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = FUN_008fc940();
  lVar5 = FUN_008fc920();
  fVar6 = 0.0;
  if ((lVar4 != 0) && (lVar5 != 0)) {
    FUN_008fcdb8(0,local_50,lVar4);
    iVar3 = FUN_009ee224(param_1,local_50);
    iVar1 = *(int *)(lVar5 + 100);
    if ((local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
    fVar6 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0x48));
    fVar6 = (float)(uint)(iVar3 - iVar1) / fVar6;
    fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar5 + 0x6c));
    if (fVar7 <= fVar6) {
      fVar6 = fVar7;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar6);
}




undefined4 FUN_009ee860(void)

{
  undefined4 uVar1;
  long lVar2;
  
  lVar2 = FUN_008fc920();
  uVar1 = 0;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(lVar2 + 0x6c);
  }
  return uVar1;
}




void FUN_009ee87c(long param_1)

{
  long lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_008fc920();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(lVar1 + 0x70);
  }
  FUN_0099cf94(param_1 + 0x30,uVar2);
  return;
}




void FUN_009ee8b0(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_009ee988(uint *param_1,uint param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  
  if (param_1[1] < param_2) {
    pvVar3 = operator_new__((ulong)param_2 << 5);
    pvVar4 = *(void **)(param_1 + 2);
    if (*param_1 == 0) {
      param_1[1] = param_2;
    }
    else {
      pvVar2 = (void *)((long)pvVar4 + (ulong)*param_1 * 0x20);
      pvVar7 = pvVar3;
      do {
        FUN_008fcdb8(pvVar7,pvVar4);
        puVar1 = (undefined4 *)((long)pvVar4 + 0x18);
        pvVar4 = (void *)((long)pvVar4 + 0x20);
        *(undefined4 *)((long)pvVar7 + 0x18) = *puVar1;
        pvVar7 = (void *)((long)pvVar7 + 0x20);
      } while (pvVar4 != pvVar2);
      pvVar4 = *(void **)(param_1 + 2);
      param_1[1] = param_2;
      if (*param_1 != 0) {
        lVar6 = (ulong)*param_1 << 5;
        puVar5 = (undefined8 *)((long)pvVar4 + 0x10);
        do {
          if ((*(byte *)(puVar5 + -2) & 1) != 0) {
            operator_delete((void *)*puVar5);
          }
          lVar6 = lVar6 + -0x20;
          puVar5 = puVar5 + 4;
        } while (lVar6 != 0);
        pvVar4 = *(void **)(param_1 + 2);
      }
    }
    if (pvVar4 != (void *)0x0) {
      operator_delete__(pvVar4);
    }
    *(void **)(param_1 + 2) = pvVar3;
  }
  return;
}




void FUN_009eea60(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    lVar1 = param_1 + lVar2;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *(undefined4 *)(lVar1 + 0x28) = 0;
    FUN_00e70510(lVar1 + 0x30);
    lVar2 = lVar2 + 0x50;
    *(undefined8 *)(lVar1 + 0x40) = 0;
    *(undefined8 *)(lVar1 + 0x48) = 0;
  } while (lVar2 != 0xaa0);
  lVar2 = 0;
  do {
    FUN_00e70510(param_1 + 0xaa8 + lVar2);
    lVar2 = lVar2 + 0x18;
  } while (lVar2 != 0xd8);
  *(undefined1 *)(param_1 + 0xb78) = 0;
  return;
}




void FUN_009eeacc(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = 0xb70;
  do {
    if (*(void **)(param_1 + lVar2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + lVar2));
      ((undefined8 *)(param_1 + lVar2))[-1] = 0;
      *(undefined8 *)(param_1 + lVar2) = 0;
    }
    lVar2 = lVar2 + -0x18;
  } while (lVar2 != 0xa98);
  lVar2 = 0xaa0;
  do {
    lVar1 = param_1 + lVar2;
    FUN_009f1bec(lVar1 + -0x10,1);
    if (*(void **)(lVar1 + -0x18) != (void *)0x0) {
      operator_delete__(*(void **)(lVar1 + -0x18));
      *(undefined8 *)(lVar1 + -0x20) = 0;
      *(undefined8 *)(lVar1 + -0x18) = 0;
    }
    lVar2 = lVar2 + -0x50;
  } while (lVar2 != 0);
  return;
}




void FUN_009eeb40(void)

{
  FUN_009eeb4c(&DAT_0312fd10);
  return;
}




void FUN_009eeb4c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 local_e0;
  undefined4 uStack_dc;
  char *pcStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_b0;
  void *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  
  lVar8 = tpidr_el0;
  local_90 = *(long *)(lVar8 + 0x28);
  iVar9 = FUN_0092eec4();
  uVar15 = iVar9 - 1;
  if (1 < uVar15) {
    uVar15 = 2;
  }
  iVar9 = FUN_0092f28c();
  if (iVar9 == 2) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
    if (iVar9 == 0) {
      uVar10 = FUN_0092eb08();
      uVar10 = uVar10 & 1;
    }
  }
  uVar12 = FUN_0092ea9c();
  uVar16 = 0;
  if ((uVar12 & 1) != 0) {
    iVar9 = FUN_0092f28c();
    uVar16 = (uint)(iVar9 != 1);
  }
  iVar9 = FUN_0092f28c();
  iVar11 = FUN_0092f28c();
  pcStack_d8 = "preferFullscreen";
  local_e0 = 0;
  local_d0 = (void *)0x100000002;
  uStack_c8 = (ulong)(iVar11 == 1) << 0x20;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 1;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[5] = CONCAT44(uStack_b4,uStack_b8);
  param_1[4] = CONCAT44(uStack_bc,local_c0);
  param_1[3] = uStack_c8;
  param_1[2] = local_d0;
  param_1[1] = pcStack_d8;
  *param_1 = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 6,&local_b0);
  FUN_009f1b3c(param_1 + 8,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 1;
  pcStack_d8 = "preferredGraphicsLevel";
  local_d0 = (void *)0x200000002;
  uStack_c8 = CONCAT44(uVar15,1);
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 1;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xf] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xe] = CONCAT44(uStack_bc,local_c0);
  param_1[0xd] = uStack_c8;
  param_1[0xc] = local_d0;
  param_1[0xb] = pcStack_d8;
  param_1[10] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x10,&local_b0);
  puVar1 = param_1 + 0x12;
  FUN_009f1b3c(puVar1,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 2;
  pcStack_d8 = "preferredControlScheme";
  local_d0 = (void *)0x200000000;
  uStack_c8 = CONCAT44(uVar10,1);
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 2;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x19] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x18] = CONCAT44(uStack_bc,local_c0);
  param_1[0x17] = uStack_c8;
  param_1[0x16] = local_d0;
  param_1[0x15] = pcStack_d8;
  param_1[0x14] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x1a,&local_b0);
  puVar2 = param_1 + 0x1c;
  FUN_009f1b3c(puVar2,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 3;
  pcStack_d8 = "preferredMouseScheme";
  uStack_c8 = 0x100000001;
  local_d0 = (void *)0x200000000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 1;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x23] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x22] = CONCAT44(uStack_bc,local_c0);
  param_1[0x21] = uStack_c8;
  param_1[0x20] = local_d0;
  param_1[0x1f] = pcStack_d8;
  param_1[0x1e] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x24,&local_b0);
  puVar3 = param_1 + 0x26;
  FUN_009f1b3c(puVar3,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 9;
  pcStack_d8 = "preferKeyboardSmartCast";
  local_d0 = (void *)0x100000000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_bc = 2;
  uStack_b8 = 0;
  uStack_b4 = 1;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x5f] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x5e] = CONCAT44(uStack_bc,local_c0);
  param_1[0x5d] = uStack_c8;
  param_1[0x5c] = local_d0;
  param_1[0x5b] = pcStack_d8;
  param_1[0x5a] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x60,&local_b0);
  FUN_009f1b3c(param_1 + 0x62,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 10;
  pcStack_d8 = "preferKeyboardInstantCast";
  local_d0 = (void *)0x100000000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 5;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x69] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x68] = CONCAT44(uStack_bc,local_c0);
  param_1[0x67] = uStack_c8;
  param_1[0x66] = local_d0;
  param_1[0x65] = pcStack_d8;
  param_1[100] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x6a,&local_b0);
  FUN_009f1b3c(param_1 + 0x6c,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x1f;
  pcStack_d8 = "preferAttackIgnoreCursor";
  local_d0 = (void *)0x100000000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 1;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x13b] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x13a] = CONCAT44(uStack_bc,local_c0);
  param_1[0x139] = uStack_c8;
  param_1[0x138] = local_d0;
  param_1[0x137] = pcStack_d8;
  param_1[0x136] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x13c,&local_b0);
  FUN_009f1b3c(param_1 + 0x13e,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0xb;
  pcStack_d8 = "preferTapInstantCast2";
  uStack_c8 = 0x100000000;
  local_d0 = (void *)0x100000000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 6;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x73] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x72] = CONCAT44(uStack_bc,local_c0);
  param_1[0x71] = uStack_c8;
  param_1[0x70] = local_d0;
  param_1[0x6f] = pcStack_d8;
  param_1[0x6e] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x74,&local_b0);
  FUN_009f1b3c(param_1 + 0x76,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x21;
  pcStack_d8 = "preferSimplifiedJoystick";
  local_d0 = (void *)0x100000000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_bc = 2;
  uStack_b8 = 1;
  uStack_b4 = 2;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x14f] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x14e] = CONCAT44(uStack_bc,local_c0);
  param_1[0x14d] = uStack_c8;
  param_1[0x14c] = local_d0;
  param_1[0x14b] = pcStack_d8;
  param_1[0x14a] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x150,&local_b0);
  FUN_009f1b3c(param_1 + 0x152,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0xc;
  pcStack_d8 = "preferredMoveStickPlacement";
  uStack_c8 = 1;
  local_d0 = (void *)0x200000000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 2;
  uStack_b8 = 1;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x7d] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x7c] = CONCAT44(uStack_bc,local_c0);
  param_1[0x7b] = uStack_c8;
  param_1[0x7a] = local_d0;
  param_1[0x79] = pcStack_d8;
  param_1[0x78] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x7e,&local_b0);
  puVar4 = param_1 + 0x80;
  FUN_009f1b3c(puVar4,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x1e;
  pcStack_d8 = "preferTargetPriority";
  uStack_c8 = 1;
  local_d0 = (void *)0x200000000;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 2;
  uStack_b8 = 1;
  uStack_b4 = 2;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x131] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x130] = CONCAT44(uStack_bc,local_c0);
  param_1[0x12f] = uStack_c8;
  param_1[0x12e] = local_d0;
  param_1[0x12d] = pcStack_d8;
  param_1[300] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x132,&local_b0);
  puVar5 = param_1 + 0x134;
  FUN_009f1b3c(puVar5,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 4;
  pcStack_d8 = "preferredMouseCameraScheme";
  uStack_c8 = 1;
  local_d0 = (void *)0x200000003;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 1;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x2d] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x2c] = CONCAT44(uStack_bc,local_c0);
  param_1[0x2b] = uStack_c8;
  param_1[0x2a] = local_d0;
  param_1[0x29] = pcStack_d8;
  param_1[0x28] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x2e,&local_b0);
  puVar6 = param_1 + 0x30;
  FUN_009f1b3c(puVar6,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 5;
  pcStack_d8 = "preferZoomedCamera";
  local_d0 = (void *)0x100000003;
  uStack_c8 = (ulong)uVar16 << 0x20;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 2;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x37] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x36] = CONCAT44(uStack_bc,local_c0);
  param_1[0x35] = uStack_c8;
  param_1[0x34] = local_d0;
  param_1[0x33] = pcStack_d8;
  param_1[0x32] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x38,&local_b0);
  FUN_009f1b3c(param_1 + 0x3a,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 6;
  pcStack_d8 = "preferLockedCamera";
  uStack_c8 = 0x100000000;
  local_d0 = (void *)0x100000003;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 2;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x41] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x40] = CONCAT44(uStack_bc,local_c0);
  param_1[0x3f] = uStack_c8;
  param_1[0x3e] = local_d0;
  param_1[0x3d] = pcStack_d8;
  param_1[0x3c] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x42,&local_b0);
  FUN_009f1b3c(param_1 + 0x44,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 7;
  pcStack_d8 = "preferShowCamZoomButton";
  uStack_c8 = 0x100000000;
  local_d0 = (void *)0x100000003;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 2;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x4b] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x4a] = CONCAT44(uStack_bc,local_c0);
  param_1[0x49] = uStack_c8;
  param_1[0x48] = local_d0;
  param_1[0x47] = pcStack_d8;
  param_1[0x46] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x4c,&local_b0);
  FUN_009f1b3c(param_1 + 0x4e,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 8;
  pcStack_d8 = "preferShowCamLockButton";
  uStack_c8 = 0x100000000;
  local_d0 = (void *)0x100000003;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 2;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x55] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x54] = CONCAT44(uStack_bc,local_c0);
  param_1[0x53] = uStack_c8;
  param_1[0x52] = local_d0;
  param_1[0x51] = pcStack_d8;
  param_1[0x50] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x56,&local_b0);
  FUN_009f1b3c(param_1 + 0x58,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0xd;
  pcStack_d8 = "cameraEdgePanningSpeed";
  uStack_c8 = 0x3f00000000000002;
  local_d0 = (void *)0x300000003;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 2;
  uStack_b8 = 0;
  uStack_b4 = 1;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x87] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x86] = CONCAT44(uStack_bc,local_c0);
  param_1[0x85] = uStack_c8;
  param_1[0x84] = local_d0;
  param_1[0x83] = pcStack_d8;
  param_1[0x82] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x88,&local_b0);
  FUN_009f1b3c(param_1 + 0x8a,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0xe;
  pcStack_d8 = "preferSmoothEdgePanning";
  uStack_c8 = 0x100000000;
  local_d0 = (void *)0x100000003;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 2;
  uStack_b8 = 0;
  uStack_b4 = 1;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x91] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x90] = CONCAT44(uStack_bc,local_c0);
  param_1[0x8f] = uStack_c8;
  param_1[0x8e] = local_d0;
  param_1[0x8d] = pcStack_d8;
  param_1[0x8c] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x92,&local_b0);
  FUN_009f1b3c(param_1 + 0x94,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  uVar12 = FUN_0093dbe8();
  if ((uVar12 & 1) == 0) {
    local_e0 = 0xf;
    pcStack_d8 = "preferEnableInGameChat";
    uStack_c8 = 0x100000000;
    local_d0 = (void *)0x100000008;
    local_c0 = (uint)local_c0._1_3_ << 8;
    uStack_bc = 0x23;
    uStack_b8 = 0;
    uStack_b4 = 7;
    FUN_00e70510(&local_b0);
    local_a0 = 0;
    uStack_98 = 0;
    param_1[0x9b] = CONCAT44(uStack_b4,uStack_b8);
    param_1[0x9a] = CONCAT44(uStack_bc,local_c0);
    param_1[0x99] = uStack_c8;
    param_1[0x98] = local_d0;
    param_1[0x97] = pcStack_d8;
    param_1[0x96] = CONCAT44(uStack_dc,local_e0);
    FUN_00910394(param_1 + 0x9c,&local_b0);
    FUN_009f1b3c(param_1 + 0x9e,&local_a0);
    FUN_009f1bec(&local_a0,1);
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    local_e0 = 0x10;
    pcStack_d8 = "preferChatFromGreatKarmaOnly";
    uStack_c8 = 0x100000000;
    local_d0 = (void *)0x100000008;
    local_c0 = local_c0 & 0xffffff00;
    uStack_bc = 0xf;
    uStack_b8 = 1;
    uStack_b4 = 7;
    FUN_00e70510(&local_b0);
    local_a0 = 0;
    uStack_98 = 0;
    param_1[0xa5] = CONCAT44(uStack_b4,uStack_b8);
    param_1[0xa4] = CONCAT44(uStack_bc,local_c0);
    param_1[0xa3] = uStack_c8;
    param_1[0xa2] = local_d0;
    param_1[0xa1] = pcStack_d8;
    param_1[0xa0] = CONCAT44(uStack_dc,local_e0);
    FUN_00910394(param_1 + 0xa6,&local_b0);
    FUN_009f1b3c(param_1 + 0xa8,&local_a0);
    FUN_009f1bec(&local_a0,1);
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    uStack_b4 = 2;
  }
  else {
    local_e0 = 0xf;
    pcStack_d8 = "preferEnableInGameChat";
    uStack_c8 = 0x100000000;
    local_d0 = (void *)0x100000008;
    local_c0 = (uint)local_c0._1_3_ << 8;
    uStack_bc = 0x23;
    uStack_b8 = 0;
    uStack_b4 = 4;
    FUN_00e70510(&local_b0);
    local_a0 = 0;
    uStack_98 = 0;
    param_1[0x9b] = CONCAT44(uStack_b4,uStack_b8);
    param_1[0x9a] = CONCAT44(uStack_bc,local_c0);
    param_1[0x99] = uStack_c8;
    param_1[0x98] = local_d0;
    param_1[0x97] = pcStack_d8;
    param_1[0x96] = CONCAT44(uStack_dc,local_e0);
    FUN_00910394(param_1 + 0x9c,&local_b0);
    FUN_009f1b3c(param_1 + 0x9e,&local_a0);
    FUN_009f1bec(&local_a0,1);
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    local_e0 = 0x10;
    pcStack_d8 = "preferChatFromGreatKarmaOnly";
    uStack_c8 = 0x100000000;
    local_d0 = (void *)0x100000008;
    local_c0 = local_c0 & 0xffffff00;
    uStack_bc = 0xf;
    uStack_b8 = 1;
    uStack_b4 = 4;
    FUN_00e70510(&local_b0);
    local_a0 = 0;
    uStack_98 = 0;
    param_1[0xa5] = CONCAT44(uStack_b4,uStack_b8);
    param_1[0xa4] = CONCAT44(uStack_bc,local_c0);
    param_1[0xa3] = uStack_c8;
    param_1[0xa2] = local_d0;
    param_1[0xa1] = pcStack_d8;
    param_1[0xa0] = CONCAT44(uStack_dc,local_e0);
    FUN_00910394(param_1 + 0xa6,&local_b0);
    FUN_009f1b3c(param_1 + 0xa8,&local_a0);
    FUN_009f1bec(&local_a0,1);
    if (local_a8 != (void *)0x0) {
      operator_delete__(local_a8);
      local_b0 = 0;
      local_a8 = (void *)0x0;
    }
    uStack_b4 = 4;
  }
  local_e0 = 0x20;
  pcStack_d8 = "preferMobileChatTransparency";
  uStack_c8 = 1;
  local_d0 = (void *)0x200000008;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0xf;
  uStack_b8 = 1;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x145] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x144] = CONCAT44(uStack_bc,local_c0);
  param_1[0x143] = uStack_c8;
  param_1[0x142] = local_d0;
  param_1[0x141] = pcStack_d8;
  param_1[0x140] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x146,&local_b0);
  FUN_009f1b3c(param_1 + 0x148,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x11;
  pcStack_d8 = "preferredMinimapSize";
  uStack_c8 = 0x3f00000000000002;
  local_d0 = (void *)0x300000004;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 3;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xaf] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xae] = CONCAT44(uStack_bc,local_c0);
  param_1[0xad] = uStack_c8;
  param_1[0xac] = local_d0;
  param_1[0xab] = pcStack_d8;
  param_1[0xaa] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0xb0,&local_b0);
  FUN_009f1b3c(param_1 + 0xb2,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x12;
  pcStack_d8 = "preferTapAndHoldScoreboard";
  local_d0 = (void *)0x100000004;
  uStack_c8 = (ulong)(iVar9 == 1) << 0x20;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xb9] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xb8] = CONCAT44(uStack_bc,local_c0);
  param_1[0xb7] = uStack_c8;
  param_1[0xb6] = local_d0;
  param_1[0xb5] = pcStack_d8;
  param_1[0xb4] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0xba,&local_b0);
  FUN_009f1b3c(param_1 + 0xbc,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x13;
  pcStack_d8 = "preferHideNamesAbovePlaques";
  local_d0 = (void *)0x100000004;
  local_c0 = local_c0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xc3] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xc2] = CONCAT44(uStack_bc,local_c0);
  param_1[0xc1] = uStack_c8;
  param_1[0xc0] = local_d0;
  param_1[0xbf] = pcStack_d8;
  param_1[0xbe] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0xc4,&local_b0);
  FUN_009f1b3c(param_1 + 0xc6,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x14;
  pcStack_d8 = "preferPulseOnDamage";
  local_d0 = (void *)0x100000004;
  local_c0 = local_c0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xcd] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xcc] = CONCAT44(uStack_bc,local_c0);
  param_1[0xcb] = uStack_c8;
  param_1[0xca] = local_d0;
  param_1[0xc9] = pcStack_d8;
  param_1[200] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0xce,&local_b0);
  FUN_009f1b3c(param_1 + 0xd0,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x15;
  pcStack_d8 = "preferMinimapInstantPan";
  local_d0 = (void *)0x100000004;
  local_c0 = local_c0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 2;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xd7] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xd6] = CONCAT44(uStack_bc,local_c0);
  param_1[0xd5] = uStack_c8;
  param_1[0xd4] = local_d0;
  param_1[0xd3] = pcStack_d8;
  param_1[0xd2] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0xd8,&local_b0);
  FUN_009f1b3c(param_1 + 0xda,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x16;
  pcStack_d8 = "prefer3V3MinimapOnRight";
  local_d0 = (void *)0x100000004;
  local_c0 = local_c0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xe1] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xe0] = CONCAT44(uStack_bc,local_c0);
  param_1[0xdf] = uStack_c8;
  param_1[0xde] = local_d0;
  param_1[0xdd] = pcStack_d8;
  param_1[0xdc] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0xe2,&local_b0);
  FUN_009f1b3c(param_1 + 0xe4,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x1d;
  pcStack_d8 = "preferBountyInScoreboard";
  uStack_c8 = 0x100000000;
  local_d0 = (void *)0x100000004;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x127] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x126] = CONCAT44(uStack_bc,local_c0);
  param_1[0x125] = uStack_c8;
  param_1[0x124] = local_d0;
  param_1[0x123] = pcStack_d8;
  param_1[0x122] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x128,&local_b0);
  FUN_009f1b3c(param_1 + 0x12a,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x17;
  pcStack_d8 = "audioLevelGame";
  uStack_c8 = 0x3f80000000000002;
  local_d0 = (void *)0x300000005;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xeb] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xea] = CONCAT44(uStack_bc,local_c0);
  param_1[0xe9] = uStack_c8;
  param_1[0xe8] = local_d0;
  param_1[0xe7] = pcStack_d8;
  param_1[0xe6] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0xec,&local_b0);
  FUN_009f1b3c(param_1 + 0xee,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x18;
  pcStack_d8 = "audioLevelMusic";
  uStack_c8 = 0x3f80000000000002;
  local_d0 = (void *)0x300000005;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xf5] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xf4] = CONCAT44(uStack_bc,local_c0);
  param_1[0xf3] = uStack_c8;
  param_1[0xf2] = local_d0;
  param_1[0xf1] = pcStack_d8;
  param_1[0xf0] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0xf6,&local_b0);
  FUN_009f1b3c(param_1 + 0xf8,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x19;
  pcStack_d8 = "preferInGameHints";
  uStack_c8 = 0x100000000;
  local_d0 = (void *)0x100000004;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0xff] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0xfe] = CONCAT44(uStack_bc,local_c0);
  param_1[0xfd] = uStack_c8;
  param_1[0xfc] = local_d0;
  param_1[0xfb] = pcStack_d8;
  param_1[0xfa] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x100,&local_b0);
  FUN_009f1b3c(param_1 + 0x102,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x1a;
  pcStack_d8 = "preferredAutoShopBehavior";
  uStack_c8 = 0x100000001;
  local_d0 = (void *)0x200000006;
  local_c0 = local_c0 & 0xffffff00;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x109] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x108] = CONCAT44(uStack_bc,local_c0);
  param_1[0x107] = uStack_c8;
  param_1[0x106] = local_d0;
  param_1[0x105] = pcStack_d8;
  param_1[0x104] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x10a,&local_b0);
  puVar7 = param_1 + 0x10c;
  FUN_009f1b3c(puVar7,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x1b;
  pcStack_d8 = "preferAutoUpgradeAbilities";
  local_d0 = (void *)0x100000006;
  local_c0 = local_c0 & 0xffffff00;
  uStack_c8 = 0;
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x113] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x112] = CONCAT44(uStack_bc,local_c0);
  param_1[0x111] = uStack_c8;
  param_1[0x110] = local_d0;
  param_1[0x10f] = pcStack_d8;
  param_1[0x10e] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x114,&local_b0);
  FUN_009f1b3c(param_1 + 0x116,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  local_e0 = 0x1c;
  pcStack_d8 = "preferShowRankedRecallPfx";
  uStack_c8 = 0x100000000;
  local_d0 = (void *)0x100000004;
  local_c0 = CONCAT31(local_c0._1_3_,1);
  uStack_bc = 0x23;
  uStack_b8 = 0;
  uStack_b4 = 0;
  FUN_00e70510(&local_b0);
  local_a0 = 0;
  uStack_98 = 0;
  param_1[0x11d] = CONCAT44(uStack_b4,uStack_b8);
  param_1[0x11c] = CONCAT44(uStack_bc,local_c0);
  param_1[0x11b] = uStack_c8;
  param_1[0x11a] = local_d0;
  param_1[0x119] = pcStack_d8;
  param_1[0x118] = CONCAT44(uStack_dc,local_e0);
  FUN_00910394(param_1 + 0x11e,&local_b0);
  FUN_009f1b3c(param_1 + 0x120,&local_a0);
  FUN_009f1bec(&local_a0,1);
  if (local_a8 != (void *)0x0) {
    operator_delete__(local_a8);
    local_b0 = 0;
    local_a8 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_GRAPHICS_TITLE",0);
  FUN_00910394(param_1 + 0x10,uVar13);
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_GRAPHICS_HIGH",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_GRAPHICS_HIGH_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar1,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_GRAPHICS_MEDIUM",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_GRAPHICS_MEDIUM_DESC",0);
  local_e0 = 1;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar1,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_GRAPHICS_LOW",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_GRAPHICS_LOW_DESC",0);
  local_e0 = 2;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar1,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_CONTROL_SCHEME_TAP",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_CONTROL_SCHEME_TAP_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar2,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_CONTROL_SCHEME_JOYSTICK",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_CONTROL_SCHEME_JOYSTICK_DESC",0);
  local_e0 = 1;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar2,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_SCHEME_VAINGLORIOUS",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_SCHEME_VAINGLORIOUS_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar3,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_SCHEME_TRADITIONAL",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_SCHEME_TRADITIONAL_DESC",0);
  local_e0 = 1;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar3,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_CAMERA_DRAG_ONLY",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_CAMERA_DRAG_ONLY_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar6,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_CAMERA_NUDGE_ONLY",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_CAMERA_NUDGE_ONLY_DESC",0);
  local_e0 = 1;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar6,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_CAMERA_DRAG_AND_NUDGE",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOUSE_CAMERA_DRAG_AND_NUDGE_DESC",0);
  local_e0 = 2;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar6,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_ZOOMED_CAMERA",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0x3a,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_LOCKED_CAMERA",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0x44,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SHOW_CAM_ZOOM_BUTTON",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0x4e,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SHOW_CAM_LOCK_BUTTON",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0x58,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_INSTANT_CAST_MODALS",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_HUD_SETTINGS_INSTANT_CAST_MODALS_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0x76,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_INSTANT_CAST_MODALS",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_HUD_SETTINGS_INSTANT_CAST_MODALS_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0x6c,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SMART_CAST",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_SMART_CAST_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0x62,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_LAZY_ATTACK_IGNORE_CURSOR",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_LAZY_ATTACK_IGNORE_CURSOR_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0x13e,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOVE_STICK_FIXED",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOVE_STICK_FIXED_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar4,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOVE_STICK_DRIFT",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOVE_STICK_DRIFT_DESC",0);
  local_e0 = 1;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar4,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOVE_STICK_LOCK",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOVE_STICK_LOCK_DESC",0);
  local_e0 = 2;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar4,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_CAMERA_EDGE_PANNING_SPEED",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0x8a,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_CAMERA_EDGE_PANNING_SMOOTH",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0x94,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SETTING_IN_GAME_CHAT_ENABLED",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0x9e,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_CHAT_FROM_GREAT_KARMA_ONLY",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_CHAT_FROM_GREAT_KARMA_ONLY_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0xa8,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_FULLSCREEN",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_FULLSCREEN_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 8,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SCOREBOARD_TAP_AND_HOLD",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_SCOREBOARD_TAP_AND_HOLD_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0xbc,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SHOW_NAMES",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0xc6,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_PULSE_SCREEN",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0xd0,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MINIMAP_INSTANT_PAN",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MINIMAP_INSTANT_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0xda,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_IN_GAME_HINTS",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_IN_GAME_HINTS_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0x102,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SHOW_RANKED_RECALL_PFX",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_SHOW_RANKED_RECALL_PFX_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0x120,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MINIMAP_SIZE",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0xb2,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_3V3_MINIMAP_ON_RIGHT",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_3V3_MINIMAP_ON_RIGHT_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0xe4,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SHOW_BOUNTY_IN_SCOREBOARD",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_SHOW_BOUNTY_IN_SCOREBOARD_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0x12a,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_TARGET_PRIORITY",0);
  FUN_00910394(param_1 + 0x132,uVar13);
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_TARGET_LOWHPPERCENT",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_TARGET_LOWHPPERCENT_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar5,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_TARGET_LOWHP",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_TARGET_LOWHP_DESC",0);
  local_e0 = 1;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar5,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_TARGET_CLOSEST",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_TARGET_CLOSEST_DESC",0);
  local_e0 = 2;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar5,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SIMPLIFIED_JOYSTICK",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_SIMPLIFIED_JOYSTICK_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0x152,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_AUTO_UPGRADE_ABILITIES",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_AUTO_UPGRADE_ABILITIES_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(param_1 + 0x116,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_VOLUME_LEVEL_GAME_AUDIO",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0xee,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_VOLUME_LEVEL_MUSIC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,&DAT_03210450);
  FUN_009f1a7c(param_1 + 0xf8,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SHOP_ENABLE_AUTO_BUY",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_SHOP_ENABLE_AUTO_BUY_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar7,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SHOP_ENABLE_QUICK_BUY",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_SHOP_ENABLE_QUICK_BUY_DESC",0);
  local_e0 = 1;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar7,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SHOP_ENABLE_MANUAL_BUY",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_SHOP_ENABLE_MANUAL_BUY_DESC",0);
  local_e0 = 2;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar7,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTING_MOBILECHAT_TRANSPARENCY",0);
  FUN_00910394(param_1 + 0x146,uVar13);
  puVar1 = param_1 + 0x148;
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOBILECHAT_OPAQUE",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOBILECHAT_OPAQUE_DESC",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar1,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOBILECHAT_PARTIAL_TRANSPARENCY",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOBILECHAT_PARTIAL_TRANSPARENCY_DESC",0);
  local_e0 = 1;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar1,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_MOBILECHAT_FULL_TRANSPARENCY",0);
  uVar14 = FUN_00e6ce7c("HUD_SETTINGS_MOBILECHAT_FULL_TRANSPARENCY_DESC",0);
  local_e0 = 2;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  thunk_FUN_00e7051c(&uStack_c8,uVar14);
  FUN_009f1a7c(puVar1,&local_e0);
  if ((void *)CONCAT44(uStack_bc,local_c0) != (void *)0x0) {
    operator_delete__((void *)CONCAT44(uStack_bc,local_c0));
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_bc = 0;
  }
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_GRAPHICS",0);
  local_e0 = 2;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  *(undefined4 *)(param_1 + 0x15a) = local_e0;
  FUN_00910394(param_1 + 0x15b,&pcStack_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_KEY_BINDINGS",0);
  local_e0 = 1;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  *(undefined4 *)(param_1 + 0x157) = local_e0;
  FUN_00910394(param_1 + 0x158,&pcStack_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_CONTROL_SCHEME",0);
  local_e0 = 0;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  *(undefined4 *)(param_1 + 0x154) = local_e0;
  FUN_00910394(param_1 + 0x155,&pcStack_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_CAMERA",0);
  local_e0 = 3;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  *(undefined4 *)(param_1 + 0x15d) = local_e0;
  FUN_00910394(param_1 + 0x15e,&pcStack_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_PREFERENCES",0);
  local_e0 = 4;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  *(undefined4 *)(param_1 + 0x160) = local_e0;
  FUN_00910394(param_1 + 0x161,&pcStack_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_SOUND_OPTIONS",0);
  local_e0 = 5;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  *(undefined4 *)(param_1 + 0x163) = local_e0;
  FUN_00910394(param_1 + 0x164,&pcStack_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar13 = FUN_00e6ce7c("HUD_SETTINGS_GAMEPLAY_OPTIONS",0);
  local_e0 = 6;
  thunk_FUN_00e7051c(&pcStack_d8,uVar13);
  *(undefined4 *)(param_1 + 0x166) = local_e0;
  FUN_00910394(param_1 + 0x167,&pcStack_d8);
  if (local_d0 != (void *)0x0) {
    operator_delete__(local_d0);
    pcStack_d8 = (char *)0x0;
    local_d0 = (void *)0x0;
  }
  uVar12 = FUN_00937f1c();
  if ((uVar12 & 1) == 0) {
    uVar13 = FUN_00e6ce7c("HUD_SETTINGS_CREDITS",0);
    local_e0 = 7;
    thunk_FUN_00e7051c(&pcStack_d8,uVar13);
    *(undefined4 *)(param_1 + 0x169) = local_e0;
    FUN_00910394(param_1 + 0x16a,&pcStack_d8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      pcStack_d8 = (char *)0x0;
      local_d0 = (void *)0x0;
    }
  }
  uVar12 = FUN_0093dbe8();
  if ((uVar12 & 1) == 0) {
    uVar13 = FUN_00e6ce7c("HUD_SETTINGS_CHAT",0);
    local_e0 = 8;
    thunk_FUN_00e7051c(&pcStack_d8,uVar13);
    *(undefined4 *)(param_1 + 0x16c) = local_e0;
    FUN_00910394(param_1 + 0x16d,&pcStack_d8);
    if (local_d0 != (void *)0x0) {
      operator_delete__(local_d0);
      pcStack_d8 = (char *)0x0;
      local_d0 = (void *)0x0;
    }
  }
  *(undefined1 *)(param_1 + 0x16f) = 1;
  if (*(long *)(lVar8 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

