// functions/00f33 — 20 functions
#include "libGameKindred.h"




undefined1 FUN_00f335bc(long param_1)

{
  return *(undefined1 *)((long)&__DT_RELA[0x4157].r_offset + param_1 + 1);
}




void FUN_00f335cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  uint local_4c;
  undefined1 auStack_48 [8];
  uint *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e6a474(param_2);
  local_4c = FUN_0091ed5c(param_2,uVar3,0x12345678);
  plVar1 = (long *)((long)&__DT_RELA[0x4156].r_info + param_1);
  plVar7 = (long *)*plVar1;
  plVar8 = plVar1;
  if (plVar7 != (long *)0x0) {
    do {
      if (*(uint *)(plVar7 + 4) >= local_4c) {
        plVar8 = plVar7;
      }
      plVar7 = (long *)plVar7[*(uint *)(plVar7 + 4) < local_4c];
    } while (plVar7 != (long *)0x0);
    if ((plVar8 != plVar1) && (uVar4 = 0, *(uint *)(plVar8 + 4) <= local_4c)) goto LAB_00f336b4;
  }
  puVar5 = operator_new(0x18);
  puVar5[1] = 0;
  puVar5[2] = 0;
  *puVar5 = param_3;
  FUN_00f337e0(param_1,puVar5);
  local_40 = &local_4c;
  lVar6 = FUN_00f33a84(param_1 + 0x1c60d0,&local_4c,&DAT_01bf81f4,&local_40,auStack_48);
  *(undefined8 **)(lVar6 + 0x28) = puVar5;
  uVar4 = 1;
LAB_00f336b4:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00f336dc(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  void *pvVar7;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar3 = FUN_00e6a474(param_2);
  local_3c = FUN_0091ed5c(param_2,uVar3,0x12345678);
  plVar1 = (long *)((long)&__DT_RELA[0x4156].r_info + param_1);
  plVar5 = (long *)*plVar1;
  plVar6 = plVar1;
  if (plVar5 != (long *)0x0) {
    do {
      if (*(uint *)(plVar5 + 4) >= local_3c) {
        plVar6 = plVar5;
      }
      plVar5 = (long *)plVar5[*(uint *)(plVar5 + 4) < local_3c];
    } while (plVar5 != (long *)0x0);
    if (plVar6 != plVar1) {
      uVar4 = 0;
      if (*(uint *)(plVar6 + 4) <= local_3c) {
        FUN_00f31a10(plVar6[5],*(undefined8 *)((long)&__DT_RELA[0x4155].r_info + param_1));
        pvVar7 = (void *)plVar6[5];
        if (pvVar7 != (void *)0x0) {
          FUN_00f319d4(pvVar7);
          operator_delete(pvVar7);
        }
        FUN_00f33bac(param_1 + 0x1c60d0,&local_3c);
        uVar4 = 1;
      }
      goto LAB_00f337b8;
    }
  }
  uVar4 = 0;
LAB_00f337b8:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




void FUN_00f337e0(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  long lVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 local_178;
  undefined1 auStack_170 [256];
  long local_70;
  
  lVar6 = tpidr_el0;
  local_70 = *(long *)(lVar6 + 0x28);
  lVar11 = *param_2;
  if (*(char *)(lVar11 + 0x18) != '\0') {
    uVar12 = 0;
    lVar13 = lVar11 + 0x19;
    puVar1 = (undefined8 *)((long)&__DT_RELA[0x4155].r_info + param_1);
    lVar10 = lVar11;
    while( true ) {
      if (lVar13 != 0) {
        lVar10 = lVar13;
      }
      cVar3 = *(char *)(lVar10 + 0xab);
      lVar13 = lVar10 + 0xe4;
      if (cVar3 == '\0') {
        bVar7 = true;
      }
      else {
        cVar4 = *(char *)((long)&__DT_RELA[0x4157].r_offset + param_1);
        if (((cVar3 == '\x01') && (cVar4 == '\0')) ||
           ((bVar7 = true, cVar3 == '\x02' && (cVar4 != '\0')))) {
          bVar7 = false;
        }
      }
      if ((*(byte *)(lVar10 + 0x18) - 4 < 5) || (*(byte *)(lVar10 + 0x18) == 1)) {
        iVar8 = FUN_00e6a474(lVar10 + 0x28);
        if (iVar8 != 0) {
          if (bVar7) {
            FUN_00e6a8a8(auStack_170,"build://%s",lVar10 + 0x28);
            FUN_01996490(*puVar1,auStack_170);
            local_178 = 0;
            local_178 = FUN_019965fc(*puVar1,auStack_170);
            FUN_00f339b0(param_2 + 1,&local_178);
          }
          bVar5 = *(byte *)(lVar10 + 0xa9);
          if (bVar5 != 0) {
            uVar9 = (uint)bVar5;
            if (bVar5 < 2) {
              uVar9 = 1;
            }
            lVar13 = lVar10 + (ulong)(uVar9 - 1) * 0x18 + 0xfc;
          }
          bVar5 = *(byte *)(lVar10 + 0xaa);
          if (bVar5 != 0) {
            uVar9 = (uint)bVar5;
            if (bVar5 < 2) {
              uVar9 = 1;
            }
            lVar13 = lVar13 + (ulong)(uVar9 - 1) * 0x18 + 0x18;
          }
          if (*(byte *)(lVar10 + 0xa8) != 0) {
            uVar9 = 0;
            do {
              uVar9 = uVar9 + 1;
              lVar2 = *param_2;
              if (lVar13 != 0) {
                lVar2 = lVar13;
              }
              lVar13 = lVar2 + 0x7a;
            } while (uVar9 < *(byte *)(lVar10 + 0xa8));
          }
        }
      }
      uVar12 = uVar12 + 1;
      if (*(byte *)(lVar11 + 0x18) <= uVar12) break;
      lVar10 = *param_2;
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00f339b0(uint *param_1,undefined8 *param_2)

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
    FUN_00f33ca8(param_1,uVar1);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




void FUN_00f33a38(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_00f33a38(param_1,*param_2);
    FUN_00f33a38(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_00f33a84(long param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar4 = (undefined8 *)(param_1 + 8);
  puVar5 = puVar4;
  if ((undefined8 *)*puVar4 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)*puVar4;
    puVar5 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar4 = puVar3, *param_2 < *(uint *)(puVar4 + 4)) {
        puVar3 = (undefined8 *)*puVar4;
        puVar5 = puVar4;
        if ((undefined8 *)*puVar4 == (undefined8 *)0x0) goto LAB_00f33afc;
      }
      if (*param_2 <= *(uint *)(puVar4 + 4)) break;
      puVar5 = puVar4 + 1;
      puVar3 = (undefined8 *)*puVar5;
    } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
  }
LAB_00f33afc:
  pvVar6 = (void *)*puVar5;
  bVar1 = pvVar6 == (void *)0x0;
  if (bVar1) {
    pvVar6 = operator_new(0x30);
    uVar2 = *(undefined4 *)*param_4;
    *(undefined8 *)((long)pvVar6 + 0x28) = 0;
    *(undefined4 *)((long)pvVar6 + 0x20) = uVar2;
    FUN_00f33b58(param_1,puVar4,puVar5,pvVar6);
  }
  auVar7[8] = bVar1;
  auVar7._0_8_ = pvVar6;
  auVar7._9_7_ = 0;
  return auVar7;
}




void FUN_00f33b58(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_0090d468(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




undefined8 FUN_00f33bac(long param_1,uint *param_2)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar3 = (long *)(param_1 + 8);
  plVar4 = (long *)*plVar3;
  if (plVar4 != (long *)0x0) {
    uVar1 = *param_2;
    plVar2 = plVar3;
    do {
      if (*(uint *)(plVar4 + 4) >= uVar1) {
        plVar2 = plVar4;
      }
      plVar4 = (long *)plVar4[*(uint *)(plVar4 + 4) < uVar1];
    } while (plVar4 != (long *)0x0);
    if (plVar2 != plVar3) {
      if (uVar1 < *(uint *)(plVar2 + 4)) {
        return 0;
      }
      FUN_00f33c14();
      return 1;
    }
  }
  return 0;
}




long * FUN_00f33c14(undefined8 *param_1,void *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar1 = *(long **)((long)param_2 + 8);
  if (*(long **)((long)param_2 + 8) == (long *)0x0) {
    plVar1 = (long *)((long)param_2 + 0x10);
    plVar3 = (long *)*plVar1;
    if ((void *)*plVar3 != param_2) {
      do {
        lVar2 = *plVar1;
        plVar1 = (long *)(lVar2 + 0x10);
        plVar3 = (long *)*plVar1;
      } while (*plVar3 != lVar2);
    }
  }
  else {
    do {
      plVar3 = plVar1;
      plVar1 = (long *)*plVar3;
    } while ((long *)*plVar3 != (long *)0x0);
  }
  if ((void *)*param_1 == param_2) {
    *param_1 = plVar3;
  }
  param_1[2] = param_1[2] + -1;
  FUN_009343e8(param_1[1],param_2);
  operator_delete(param_2);
  return plVar3;
}




void FUN_00f33ca8(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      do {
        lVar3 = lVar3 + -8;
        *puVar4 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
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




void FUN_00f33d28(void)

{
  FUN_00e78608(&DAT_03212090,1,"DispatchQueue_ParticleFX");
  FUN_00e78b80(&DAT_03212090);
  return;
}




void FUN_00f33d60(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03212090);
  if ((uVar1 & 1) != 0) {
    FUN_00e78724(&DAT_03212090);
    return;
  }
  return;
}




void FUN_00f33d90(void)

{
  FUN_00e78714(&DAT_03212090);
  return;
}




void FUN_00f33d9c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03212090);
  if (((uVar1 & 1) != 0) && (DAT_03212188 != 0)) {
    DAT_03212188 = 0;
    FUN_00e7893c(&DAT_03212090);
    return;
  }
  return;
}




void FUN_00f33ddc(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03212090);
  if ((DAT_0321218c != '\0') && ((uVar1 & 1) != 0)) {
    DAT_0321218c = 0;
    FUN_00e7893c(&DAT_03212090);
    return;
  }
  return;
}




void FUN_00f33e1c(void)

{
  ulong uVar1;
  
  uVar1 = FUN_00e78714(&DAT_03212090);
  if ((uVar1 & 1) != 0) {
    FUN_00e7893c(&DAT_03212090);
    return;
  }
  return;
}




void FUN_00f33e4c(undefined4 param_1,undefined8 param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_00e7825c();
  uVar3 = FUN_00f329fc(param_2,&DAT_03212198,0x400);
  DAT_0321419c = 0;
  bVar1 = param_3 != (void *)0x0;
  DAT_03212190 = param_2;
  DAT_03214198 = uVar3;
  DAT_032141a0 = param_1;
  if (bVar1) {
    memcpy(&DAT_032141a4,param_3,0x104);
  }
  DAT_03212188 = iVar2;
  DAT_032142a8 = bVar1;
  if (uVar3 < 0x33) {
    iVar2 = 1;
    DAT_03212188 = iVar2;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_00e78ecc(&DAT_03212090,FUN_00f33f2c,&DAT_03212190);
  }
  return;
}




void FUN_00f33f2c(undefined8 *param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  
  lVar2 = 0;
  if (*(char *)(param_1 + 0x423) != '\0') {
    lVar2 = (long)param_1 + 0x2014;
  }
  puVar1 = (uint *)((long)param_1 + 0x200c);
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 + 1;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if (uVar3 < *(uint *)(param_1 + 0x401)) {
    do {
      FUN_00f32930(*(undefined4 *)(param_1 + 0x402),*param_1,lVar2,param_1[(ulong)uVar3 + 1]);
      do {
        uVar3 = *puVar1;
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar3 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    } while (uVar3 < *(uint *)(param_1 + 0x401));
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(0x3212188,0x10);
    if (bVar5) {
      cVar4 = ExclusiveMonitorsStatus();
      DAT_03212188 = DAT_03212188 + -1;
    }
  } while (cVar4 != '\0');
  return;
}




void FUN_00f33fd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 int *param_5)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  do {
    while (*param_5 != 0) {
      ClearExclusiveLocal();
    }
    cVar1 = '\x01';
    bVar2 = (bool)ExclusiveMonitorPass(param_5,0x10);
    if (bVar2) {
      *param_5 = 100;
      cVar1 = ExclusiveMonitorsStatus();
    }
  } while (cVar1 != '\0');
  lVar3 = FUN_00f016d4(param_5 + (ulong)(uint)param_5[10] * 4 + 2,0x5f);
  puVar4 = (undefined8 *)(lVar3 + 7U & 0xfffffffffffffff8);
  *param_5 = 0;
  *puVar4 = param_1;
  puVar4[1] = param_3;
  uVar5 = param_4[6];
  puVar4[9] = param_4[7];
  puVar4[8] = uVar5;
  uVar5 = param_4[4];
  puVar4[7] = param_4[5];
  puVar4[6] = uVar5;
  uVar5 = param_4[2];
  puVar4[5] = param_4[3];
  puVar4[4] = uVar5;
  uVar6 = param_4[1];
  uVar5 = *param_4;
  puVar4[10] = param_2;
  puVar4[3] = uVar6;
  puVar4[2] = uVar5;
  DAT_0321218c = 1;
  FUN_00e78ecc(&DAT_03212090,FUN_00f34094);
  return;
}

