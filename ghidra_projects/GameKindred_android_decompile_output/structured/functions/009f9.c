// functions/009f9 — 9 functions
#include "libGameKindred.h"




long FUN_009f9024(undefined8 param_1,byte *param_2,long param_3,long param_4)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s2;
  byte bVar3;
  uint uVar4;
  void *__s1;
  
  if (param_3 != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
    __s2 = *(byte **)(param_2 + 0x10);
    if ((*param_2 & 1) == 0) {
      __s2 = param_2 + 1;
      uVar2 = (ulong)(*param_2 >> 1);
    }
    do {
      bVar3 = *(byte *)(param_3 + 0x20);
      uVar1 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar1 = *(ulong *)(param_3 + 0x28);
      }
      __n = uVar2;
      if (uVar1 <= uVar2) {
        __n = uVar1;
      }
      if (__n == 0) {
LAB_009f9098:
        uVar4 = (uint)(uVar2 < uVar1);
        if (uVar1 < uVar2) {
          uVar4 = 0xffffffff;
        }
      }
      else {
        __s1 = *(void **)(param_3 + 0x30);
        if ((bVar3 & 1) == 0) {
          __s1 = (void *)(param_3 + 0x21);
        }
        uVar4 = memcmp(__s1,__s2,__n);
        if (uVar4 == 0) goto LAB_009f9098;
      }
      if ((int)uVar4 >= 0) {
        param_4 = param_3;
      }
      param_3 = *(long *)(param_3 + (ulong)((int)uVar4 < 0) * 8);
    } while (param_3 != 0);
  }
  return param_4;
}




void * FUN_009f90d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  bool bVar1;
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  puVar3 = (undefined8 *)FUN_009f9184(param_1,&local_50,param_2);
  pvVar4 = (void *)*puVar3;
  bVar1 = pvVar4 == (void *)0x0;
  if (bVar1) {
    pvVar4 = operator_new(0x40);
    FUN_008fcdb8((long)pvVar4 + 0x20,*param_4);
    *(undefined8 *)((long)pvVar4 + 0x38) = 0;
    puVar3 = (undefined8 *)FUN_009f92b0(param_1,local_50,puVar3,pvVar4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(puVar3,bVar1);
  }
  return pvVar4;
}




long * FUN_009f9184(long param_1,undefined8 *param_2,byte *param_3)

{
  ulong uVar1;
  size_t __n;
  ulong uVar2;
  byte *__s1;
  byte bVar3;
  int iVar4;
  void *__s2;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar5 = (long *)(param_1 + 8);
  plVar6 = (long *)*plVar5;
  if (plVar6 == (long *)0x0) {
    *param_2 = plVar5;
  }
  else {
    uVar2 = *(ulong *)(param_3 + 8);
    __s1 = *(byte **)(param_3 + 0x10);
    plVar5 = (long *)(param_1 + 8);
    if ((*param_3 & 1) == 0) {
      __s1 = param_3 + 1;
      uVar2 = (ulong)(*param_3 >> 1);
    }
    do {
      while( true ) {
        plVar7 = plVar6;
        bVar3 = *(byte *)(plVar7 + 4);
        uVar1 = (ulong)(bVar3 >> 1);
        if ((bVar3 & 1) != 0) {
          uVar1 = plVar7[5];
        }
        __n = uVar1;
        if (uVar2 <= uVar1) {
          __n = uVar2;
        }
        if (__n == 0) break;
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        iVar4 = memcmp(__s1,__s2,__n);
        if (iVar4 == 0) break;
        if (-1 < iVar4) {
LAB_009f91e8:
          iVar4 = memcmp(__s2,__s1,__n);
          if (iVar4 == 0) goto LAB_009f9204;
          if (iVar4 < 0) goto LAB_009f920c;
          goto LAB_009f9284;
        }
LAB_009f9270:
        plVar5 = plVar7;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) {
          *param_2 = plVar7;
          return plVar7;
        }
      }
      if (uVar2 < uVar1) goto LAB_009f9270;
      if (__n != 0) {
        __s2 = (void *)plVar7[6];
        if ((bVar3 & 1) == 0) {
          __s2 = (void *)((long)plVar7 + 0x21);
        }
        goto LAB_009f91e8;
      }
LAB_009f9204:
      if (uVar2 <= uVar1) break;
LAB_009f920c:
      plVar5 = plVar7 + 1;
      plVar6 = (long *)*plVar5;
    } while ((long *)*plVar5 != (long *)0x0);
LAB_009f9284:
    *param_2 = plVar7;
  }
  return plVar5;
}




void FUN_009f92b0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




void FUN_009f9308(uint *param_1,uint *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    FUN_00955be0(param_1,1);
    FUN_00955af8(param_1,*param_2);
    uVar3 = 0;
    if (*param_2 != 0) {
      lVar4 = *(long *)(param_2 + 2);
      lVar5 = *(long *)(param_1 + 2);
      lVar1 = lVar4 + (ulong)*param_2 * 0x40;
      do {
        thunk_FUN_00e7051c(lVar5,lVar4);
        uVar6 = *(undefined8 *)(lVar4 + 0x2c);
        *(undefined8 *)(lVar5 + 0x34) = *(undefined8 *)(lVar4 + 0x34);
        *(undefined8 *)(lVar5 + 0x2c) = uVar6;
        uVar6 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 *)(lVar5 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
        *(undefined8 *)(lVar5 + 0x20) = uVar6;
        puVar2 = (undefined8 *)(lVar4 + 0x18);
        uVar6 = *(undefined8 *)(lVar4 + 0x10);
        lVar4 = lVar4 + 0x40;
        *(undefined8 *)(lVar5 + 0x18) = *puVar2;
        *(undefined8 *)(lVar5 + 0x10) = uVar6;
        lVar5 = lVar5 + 0x40;
      } while (lVar4 != lVar1);
      uVar3 = *param_2;
    }
    *param_1 = uVar3;
  }
  return;
}




void FUN_009f93a8(ulong param_1,ulong param_2,undefined8 *param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 local_a8;
  void *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined8 uStack_74;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
LAB_009f94f0:
  uVar11 = param_2 - 0x40;
  uVar8 = param_1;
LAB_009f9514:
  param_1 = uVar8;
  lVar9 = param_2 - param_1;
  uVar8 = lVar9 >> 6;
  switch(uVar8) {
  case 0:
  case 1:
    goto switchD_009f991c_caseD_0;
  case 2:
    uVar8 = (*(code *)*param_3)(uVar11,param_1);
    if ((uVar8 & 1) != 0) {
      thunk_FUN_00e7051c(&local_a8,param_1);
      uStack_74 = *(undefined8 *)(param_1 + 0x34);
      uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      uStack_88 = *(undefined8 *)(param_1 + 0x20);
      uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      local_7c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
      uStack_90 = *(undefined8 *)(param_1 + 0x18);
      local_98 = *(undefined8 *)(param_1 + 0x10);
      FUN_00910394(param_1,uVar11);
      uVar14 = *(undefined8 *)(param_2 - 0x14);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 - 0xc);
      *(undefined8 *)(param_1 + 0x2c) = uVar14;
      uVar14 = *(undefined8 *)(param_2 - 0x20);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 - 0x18);
      *(undefined8 *)(param_1 + 0x20) = uVar14;
      uVar14 = *(undefined8 *)(param_2 - 0x30);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 - 0x28);
      *(undefined8 *)(param_1 + 0x10) = uVar14;
      FUN_00910394(uVar11,&local_a8);
      *(undefined8 *)(param_2 - 0xc) = uStack_74;
      *(ulong *)(param_2 - 0x14) = CONCAT44(uStack_78,local_7c);
      *(ulong *)(param_2 - 0x18) = CONCAT44(local_7c,uStack_80);
      *(undefined8 *)(param_2 - 0x20) = uStack_88;
      *(undefined8 *)(param_2 - 0x28) = uStack_90;
      *(undefined8 *)(param_2 - 0x30) = local_98;
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
    }
    goto switchD_009f991c_caseD_0;
  case 3:
    FUN_009f9a50(param_1,param_1 + 0x40,uVar11,param_3);
    goto switchD_009f991c_caseD_0;
  case 4:
    FUN_009f9d88(param_1,param_1 + 0x40,param_1 + 0x80,uVar11,param_3);
    goto switchD_009f991c_caseD_0;
  case 5:
    FUN_009f9fd0(param_1,param_1 + 0x40,param_1 + 0x80,param_1 + 0xc0,uVar11,param_3);
    goto switchD_009f991c_caseD_0;
  default:
    if (lVar9 < 0x1c0) {
      FUN_009fa2b8(param_1,param_2,param_3);
      goto switchD_009f991c_caseD_0;
    }
    uVar6 = uVar8;
    if ((long)uVar8 < 0) {
      uVar6 = uVar8 + 1;
    }
    uVar6 = param_1 + (uVar6 & 0x7fffffffffffffe) * 0x20;
    if (lVar9 < 0xf9c1) {
      iVar3 = FUN_009f9a50(param_1,uVar6,uVar11,param_3);
    }
    else {
      uVar13 = uVar8 + 3;
      if (-1 < (long)uVar8) {
        uVar13 = uVar8;
      }
      lVar9 = (uVar13 & 0xffffffffffffffc) * 0x10;
      iVar3 = FUN_009f9fd0(param_1,param_1 + lVar9,uVar6,uVar6 + lVar9,uVar11,param_3);
    }
    uVar4 = (*(code *)*param_3)(param_1,uVar6);
    uVar8 = param_2 - 0x80;
    uVar13 = uVar11;
    if ((uVar4 & 1) == 0) {
      do {
        uVar13 = uVar8;
        if (param_1 == uVar13) {
          uVar8 = param_1 + 0x40;
          uVar6 = (*(code *)*param_3)(param_1,uVar11);
          if ((uVar6 & 1) != 0) goto LAB_009f9900;
          if (uVar8 == uVar11) goto switchD_009f991c_caseD_0;
          uVar8 = param_1 + 0x80;
          goto LAB_009f985c;
        }
        uVar4 = (*(code *)*param_3)(uVar13,uVar6);
        uVar8 = uVar13 - 0x40;
      } while ((uVar4 & 1) == 0);
      thunk_FUN_00e7051c(&local_a8,param_1);
      uStack_74 = *(undefined8 *)(param_1 + 0x34);
      uStack_78 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      uStack_88 = *(undefined8 *)(param_1 + 0x20);
      uStack_80 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      local_7c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
      uStack_90 = *(undefined8 *)(param_1 + 0x18);
      local_98 = *(undefined8 *)(param_1 + 0x10);
      FUN_00910394(param_1,uVar13);
      uVar14 = *(undefined8 *)(uVar13 + 0x2c);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(uVar13 + 0x34);
      *(undefined8 *)(param_1 + 0x2c) = uVar14;
      uVar14 = *(undefined8 *)(uVar13 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(uVar13 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = uVar14;
      uVar14 = *(undefined8 *)(uVar13 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(uVar13 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar14;
      FUN_00910394(uVar13,&local_a8);
      *(undefined8 *)(uVar13 + 0x34) = uStack_74;
      *(ulong *)(uVar13 + 0x2c) = CONCAT44(uStack_78,local_7c);
      *(ulong *)(uVar13 + 0x28) = CONCAT44(local_7c,uStack_80);
      *(undefined8 *)(uVar13 + 0x20) = uStack_88;
      *(undefined8 *)(uVar13 + 0x18) = uStack_90;
      *(undefined8 *)(uVar13 + 0x10) = local_98;
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
      iVar3 = iVar3 + 1;
    }
    uVar4 = param_1 + 0x40;
    uVar10 = uVar6;
    uVar8 = uVar4;
    if (uVar4 < uVar13) {
      while( true ) {
        uVar6 = uVar10;
        uVar4 = uVar8 - 0x40;
        do {
          uVar10 = uVar4;
          uVar4 = uVar10 + 0x40;
          uVar8 = (*(code *)*param_3)(uVar4,uVar6);
        } while ((uVar8 & 1) != 0);
        uVar8 = uVar10 + 0x80;
        do {
          uVar12 = uVar13;
          uVar13 = uVar12 - 0x40;
          uVar5 = (*(code *)*param_3)(uVar13,uVar6);
        } while ((uVar5 & 1) == 0);
        if (uVar13 < uVar4) break;
        thunk_FUN_00e7051c(&local_a8,uVar4);
        uStack_74 = *(undefined8 *)(uVar10 + 0x74);
        uStack_78 = (undefined4)((ulong)*(undefined8 *)(uVar10 + 0x6c) >> 0x20);
        uStack_88 = *(undefined8 *)(uVar10 + 0x60);
        uStack_80 = (undefined4)*(undefined8 *)(uVar10 + 0x68);
        local_7c = (undefined4)((ulong)*(undefined8 *)(uVar10 + 0x68) >> 0x20);
        uStack_90 = *(undefined8 *)(uVar10 + 0x58);
        local_98 = *(undefined8 *)(uVar10 + 0x50);
        FUN_00910394(uVar4,uVar13);
        uVar14 = *(undefined8 *)(uVar12 - 0x14);
        *(undefined8 *)(uVar10 + 0x74) = *(undefined8 *)(uVar12 - 0xc);
        *(undefined8 *)(uVar10 + 0x6c) = uVar14;
        uVar14 = *(undefined8 *)(uVar12 - 0x20);
        *(undefined8 *)(uVar10 + 0x68) = *(undefined8 *)(uVar12 - 0x18);
        *(undefined8 *)(uVar10 + 0x60) = uVar14;
        uVar14 = *(undefined8 *)(uVar12 - 0x30);
        *(undefined8 *)(uVar10 + 0x58) = *(undefined8 *)(uVar12 - 0x28);
        *(undefined8 *)(uVar10 + 0x50) = uVar14;
        FUN_00910394(uVar13,&local_a8);
        *(undefined8 *)(uVar12 - 0xc) = uStack_74;
        *(ulong *)(uVar12 - 0x14) = CONCAT44(uStack_78,local_7c);
        *(ulong *)(uVar12 - 0x18) = CONCAT44(local_7c,uStack_80);
        *(undefined8 *)(uVar12 - 0x20) = uStack_88;
        *(undefined8 *)(uVar12 - 0x28) = uStack_90;
        *(undefined8 *)(uVar12 - 0x30) = local_98;
        if (local_a0 != (void *)0x0) {
          operator_delete__(local_a0);
          local_a8 = 0;
          local_a0 = (void *)0x0;
        }
        iVar3 = iVar3 + 1;
        uVar10 = uVar13;
        if (uVar6 != uVar4) {
          uVar10 = uVar6;
        }
      }
    }
    if ((uVar4 != uVar6) && (uVar8 = (*(code *)*param_3)(uVar6,uVar4), (uVar8 & 1) != 0)) {
      thunk_FUN_00e7051c(&local_a8,uVar4);
      uStack_74 = *(undefined8 *)(uVar4 + 0x34);
      uStack_78 = (undefined4)((ulong)*(undefined8 *)(uVar4 + 0x2c) >> 0x20);
      uStack_88 = *(undefined8 *)(uVar4 + 0x20);
      uStack_80 = (undefined4)*(undefined8 *)(uVar4 + 0x28);
      local_7c = (undefined4)((ulong)*(undefined8 *)(uVar4 + 0x28) >> 0x20);
      uStack_90 = *(undefined8 *)(uVar4 + 0x18);
      local_98 = *(undefined8 *)(uVar4 + 0x10);
      FUN_00910394(uVar4,uVar6);
      uVar14 = *(undefined8 *)(uVar6 + 0x2c);
      *(undefined8 *)(uVar4 + 0x34) = *(undefined8 *)(uVar6 + 0x34);
      *(undefined8 *)(uVar4 + 0x2c) = uVar14;
      uVar14 = *(undefined8 *)(uVar6 + 0x20);
      *(undefined8 *)(uVar4 + 0x28) = *(undefined8 *)(uVar6 + 0x28);
      *(undefined8 *)(uVar4 + 0x20) = uVar14;
      uVar14 = *(undefined8 *)(uVar6 + 0x10);
      *(undefined8 *)(uVar4 + 0x18) = *(undefined8 *)(uVar6 + 0x18);
      *(undefined8 *)(uVar4 + 0x10) = uVar14;
      FUN_00910394(uVar6,&local_a8);
      *(undefined8 *)(uVar6 + 0x34) = uStack_74;
      *(ulong *)(uVar6 + 0x2c) = CONCAT44(uStack_78,local_7c);
      *(ulong *)(uVar6 + 0x28) = CONCAT44(local_7c,uStack_80);
      *(undefined8 *)(uVar6 + 0x20) = uStack_88;
      *(undefined8 *)(uVar6 + 0x18) = uStack_90;
      *(undefined8 *)(uVar6 + 0x10) = local_98;
      if (local_a0 != (void *)0x0) {
        operator_delete__(local_a0);
        local_a8 = 0;
        local_a0 = (void *)0x0;
      }
      iVar3 = iVar3 + 1;
    }
    if (iVar3 != 0) goto LAB_009f980c;
    uVar6 = FUN_009fa418(param_1,uVar4,param_3);
    uVar8 = FUN_009fa418(uVar4 + 0x40,param_2,param_3);
    if ((uVar8 & 1) == 0) goto code_r0x009f9808;
    bVar2 = (uVar6 & 1) == 0;
    if (bVar2) {
      param_2 = uVar4;
    }
    uVar7 = 1;
    if (bVar2) {
      uVar7 = 2;
    }
  }
  goto LAB_009f94b4;
LAB_009f985c:
  lVar9 = uVar8 - 0x40;
  uVar6 = (*(code *)*param_3)(param_1,lVar9);
  if ((uVar6 & 1) != 0) goto LAB_009f9884;
  uVar8 = uVar8 + 0x40;
  if (param_2 == uVar8) goto switchD_009f991c_caseD_0;
  goto LAB_009f985c;
LAB_009f9884:
  thunk_FUN_00e7051c(&local_a8,lVar9);
  uStack_74 = *(undefined8 *)(uVar8 - 0xc);
  uStack_78 = (undefined4)((ulong)*(undefined8 *)(uVar8 - 0x14) >> 0x20);
  uStack_88 = *(undefined8 *)(uVar8 - 0x20);
  uStack_80 = (undefined4)*(undefined8 *)(uVar8 - 0x18);
  local_7c = (undefined4)((ulong)*(undefined8 *)(uVar8 - 0x18) >> 0x20);
  uStack_90 = *(undefined8 *)(uVar8 - 0x28);
  local_98 = *(undefined8 *)(uVar8 - 0x30);
  FUN_00910394(lVar9,uVar11);
  uVar14 = *(undefined8 *)(param_2 - 0x14);
  *(undefined8 *)(uVar8 - 0xc) = *(undefined8 *)(param_2 - 0xc);
  *(undefined8 *)(uVar8 - 0x14) = uVar14;
  uVar14 = *(undefined8 *)(param_2 - 0x20);
  *(undefined8 *)(uVar8 - 0x18) = *(undefined8 *)(param_2 - 0x18);
  *(undefined8 *)(uVar8 - 0x20) = uVar14;
  uVar14 = *(undefined8 *)(param_2 - 0x30);
  *(undefined8 *)(uVar8 - 0x28) = *(undefined8 *)(param_2 - 0x28);
  *(undefined8 *)(uVar8 - 0x30) = uVar14;
  FUN_00910394(uVar11,&local_a8);
  *(undefined8 *)(param_2 - 0xc) = uStack_74;
  *(ulong *)(param_2 - 0x14) = CONCAT44(uStack_78,local_7c);
  *(ulong *)(param_2 - 0x18) = CONCAT44(local_7c,uStack_80);
  *(undefined8 *)(param_2 - 0x20) = uStack_88;
  *(undefined8 *)(param_2 - 0x28) = uStack_90;
  *(undefined8 *)(param_2 - 0x30) = local_98;
  if (local_a0 != (void *)0x0) {
    operator_delete__(local_a0);
    local_a8 = 0;
    local_a0 = (void *)0x0;
  }
LAB_009f9900:
  if (uVar8 == uVar11) {
switchD_009f991c_caseD_0:
    if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  while( true ) {
    uVar6 = uVar8 - 0x40;
    do {
      uVar13 = uVar6;
      uVar6 = uVar13 + 0x40;
      uVar8 = (*(code *)*param_3)(param_1,uVar6);
    } while ((uVar8 & 1) == 0);
    uVar8 = uVar13 + 0x80;
    do {
      uVar10 = uVar11;
      uVar11 = uVar10 - 0x40;
      uVar4 = (*(code *)*param_3)(param_1,uVar11);
    } while ((uVar4 & 1) != 0);
    if (uVar11 <= uVar6) break;
    thunk_FUN_00e7051c(&local_a8,uVar6);
    uStack_74 = *(undefined8 *)(uVar13 + 0x74);
    uStack_78 = (undefined4)((ulong)*(undefined8 *)(uVar13 + 0x6c) >> 0x20);
    uStack_88 = *(undefined8 *)(uVar13 + 0x60);
    uStack_80 = (undefined4)*(undefined8 *)(uVar13 + 0x68);
    local_7c = (undefined4)((ulong)*(undefined8 *)(uVar13 + 0x68) >> 0x20);
    uStack_90 = *(undefined8 *)(uVar13 + 0x58);
    local_98 = *(undefined8 *)(uVar13 + 0x50);
    FUN_00910394(uVar6,uVar11);
    uVar14 = *(undefined8 *)(uVar10 - 0x14);
    *(undefined8 *)(uVar13 + 0x74) = *(undefined8 *)(uVar10 - 0xc);
    *(undefined8 *)(uVar13 + 0x6c) = uVar14;
    uVar14 = *(undefined8 *)(uVar10 - 0x20);
    *(undefined8 *)(uVar13 + 0x68) = *(undefined8 *)(uVar10 - 0x18);
    *(undefined8 *)(uVar13 + 0x60) = uVar14;
    uVar14 = *(undefined8 *)(uVar10 - 0x30);
    *(undefined8 *)(uVar13 + 0x58) = *(undefined8 *)(uVar10 - 0x28);
    *(undefined8 *)(uVar13 + 0x50) = uVar14;
    FUN_00910394(uVar11,&local_a8);
    *(undefined8 *)(uVar10 - 0xc) = uStack_74;
    *(ulong *)(uVar10 - 0x14) = CONCAT44(uStack_78,local_7c);
    *(ulong *)(uVar10 - 0x18) = CONCAT44(local_7c,uStack_80);
    *(undefined8 *)(uVar10 - 0x20) = uStack_88;
    *(undefined8 *)(uVar10 - 0x28) = uStack_90;
    *(undefined8 *)(uVar10 - 0x30) = local_98;
    if (local_a0 != (void *)0x0) {
      operator_delete__(local_a0);
      local_a8 = 0;
      local_a0 = (void *)0x0;
    }
  }
  uVar7 = 4;
  param_1 = uVar6;
LAB_009f94b4:
  if ((4 < uVar7) || ((1 << (ulong)uVar7 & 0x15U) == 0)) goto switchD_009f991c_caseD_0;
  goto LAB_009f94f0;
code_r0x009f9808:
  uVar8 = uVar4 + 0x40;
  if ((uVar6 & 1) == 0) {
LAB_009f980c:
    if ((long)(param_2 - uVar4) <= (long)(uVar4 - param_1)) {
      FUN_009f93a8(uVar4 + 0x40,param_2,param_3);
      param_2 = uVar4;
      goto LAB_009f94f0;
    }
    FUN_009f93a8(param_1,uVar4,param_3);
    uVar8 = uVar4 + 0x40;
  }
  goto LAB_009f9514;
}




void FUN_009f9a50(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined8 uStack_54;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar2 = (*(code *)*param_4)(param_2,param_1);
  uVar3 = (*(code *)*param_4)(param_3,param_2);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    if ((uVar3 & 1) == 0) goto LAB_009f9d5c;
    thunk_FUN_00e7051c(&local_88,param_2);
    uStack_54 = *(undefined8 *)(param_2 + 0x34);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
    uStack_68 = *(undefined8 *)(param_2 + 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(param_2 + 0x28);
    local_5c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
    uStack_70 = *(undefined8 *)(param_2 + 0x18);
    local_78 = *(undefined8 *)(param_2 + 0x10);
    FUN_00910394(param_2,param_3);
    uVar4 = *(undefined8 *)(param_3 + 0x2c);
    *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_3 + 0x34);
    *(undefined8 *)(param_2 + 0x2c) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_2 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_2 + 0x10) = uVar4;
    FUN_00910394(param_3,&local_88);
    *(undefined8 *)(param_3 + 0x34) = uStack_54;
    *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_58,local_5c);
    *(ulong *)(param_3 + 0x28) = CONCAT44(local_5c,uStack_60);
    *(undefined8 *)(param_3 + 0x20) = uStack_68;
    *(undefined8 *)(param_3 + 0x18) = uStack_70;
    *(undefined8 *)(param_3 + 0x10) = local_78;
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    uVar2 = (*(code *)*param_4)(param_2,param_1);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_00e7051c(&local_88,param_1);
      uStack_54 = *(undefined8 *)(param_1 + 0x34);
      uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
      uStack_68 = *(undefined8 *)(param_1 + 0x20);
      uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x28);
      local_5c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
      uStack_70 = *(undefined8 *)(param_1 + 0x18);
      local_78 = *(undefined8 *)(param_1 + 0x10);
      FUN_00910394(param_1,param_2);
      uVar4 = *(undefined8 *)(param_2 + 0x2c);
      *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
      *(undefined8 *)(param_1 + 0x2c) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = uVar4;
      FUN_00910394(param_2,&local_88);
      *(undefined8 *)(param_2 + 0x34) = uStack_54;
      *(ulong *)(param_2 + 0x2c) = CONCAT44(uStack_58,local_5c);
      *(ulong *)(param_2 + 0x28) = CONCAT44(local_5c,uStack_60);
      *(undefined8 *)(param_2 + 0x20) = uStack_68;
      *(undefined8 *)(param_2 + 0x18) = uStack_70;
      *(undefined8 *)(param_2 + 0x10) = local_78;
      goto LAB_009f9d40;
    }
  }
  else if ((uVar3 & 1) == 0) {
    thunk_FUN_00e7051c(&local_88,param_1);
    uStack_54 = *(undefined8 *)(param_1 + 0x34);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x28);
    local_5c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
    uStack_70 = *(undefined8 *)(param_1 + 0x18);
    local_78 = *(undefined8 *)(param_1 + 0x10);
    FUN_00910394(param_1,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x2c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
    *(undefined8 *)(param_1 + 0x2c) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_00910394(param_2,&local_88);
    *(undefined8 *)(param_2 + 0x34) = uStack_54;
    *(ulong *)(param_2 + 0x2c) = CONCAT44(uStack_58,local_5c);
    *(ulong *)(param_2 + 0x28) = CONCAT44(local_5c,uStack_60);
    *(undefined8 *)(param_2 + 0x20) = uStack_68;
    *(undefined8 *)(param_2 + 0x18) = uStack_70;
    *(undefined8 *)(param_2 + 0x10) = local_78;
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    uVar2 = (*(code *)*param_4)(param_3,param_2);
    if ((uVar2 & 1) != 0) {
      thunk_FUN_00e7051c(&local_88,param_2);
      uStack_54 = *(undefined8 *)(param_2 + 0x34);
      uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
      uStack_68 = *(undefined8 *)(param_2 + 0x20);
      uStack_60 = (undefined4)*(undefined8 *)(param_2 + 0x28);
      local_5c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
      uStack_70 = *(undefined8 *)(param_2 + 0x18);
      local_78 = *(undefined8 *)(param_2 + 0x10);
      FUN_00910394(param_2,param_3);
      uVar4 = *(undefined8 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_3 + 0x34);
      *(undefined8 *)(param_2 + 0x2c) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x20) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      FUN_00910394(param_3,&local_88);
      *(undefined8 *)(param_3 + 0x34) = uStack_54;
      *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_58,local_5c);
      *(ulong *)(param_3 + 0x28) = CONCAT44(local_5c,uStack_60);
      *(undefined8 *)(param_3 + 0x20) = uStack_68;
      *(undefined8 *)(param_3 + 0x18) = uStack_70;
      *(undefined8 *)(param_3 + 0x10) = local_78;
LAB_009f9d40:
      if (local_80 != (void *)0x0) {
        operator_delete__(local_80);
        local_88 = 0;
        local_80 = (void *)0x0;
      }
      uVar4 = 2;
      goto LAB_009f9d5c;
    }
  }
  else {
    thunk_FUN_00e7051c(&local_88,param_1);
    uStack_54 = *(undefined8 *)(param_1 + 0x34);
    uStack_58 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = (undefined4)*(undefined8 *)(param_1 + 0x28);
    local_5c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
    uStack_70 = *(undefined8 *)(param_1 + 0x18);
    local_78 = *(undefined8 *)(param_1 + 0x10);
    FUN_00910394(param_1,param_3);
    uVar4 = *(undefined8 *)(param_3 + 0x2c);
    *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_3 + 0x34);
    *(undefined8 *)(param_1 + 0x2c) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x20);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 0x18);
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    FUN_00910394(param_3,&local_88);
    *(undefined8 *)(param_3 + 0x34) = uStack_54;
    *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_58,local_5c);
    *(ulong *)(param_3 + 0x28) = CONCAT44(local_5c,uStack_60);
    *(undefined8 *)(param_3 + 0x20) = uStack_68;
    *(undefined8 *)(param_3 + 0x18) = uStack_70;
    *(undefined8 *)(param_3 + 0x10) = local_78;
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
  }
  uVar4 = 1;
LAB_009f9d5c:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




int FUN_009f9d88(long param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_009f9a50();
  uVar3 = (*(code *)*param_5)(param_4,param_3);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_00e7051c(&local_98,param_3);
    uStack_64 = *(undefined8 *)(param_3 + 0x34);
    uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x2c) >> 0x20);
    uStack_78 = *(undefined8 *)(param_3 + 0x20);
    uStack_70 = (undefined4)*(undefined8 *)(param_3 + 0x28);
    local_6c = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
    uStack_80 = *(undefined8 *)(param_3 + 0x18);
    local_88 = *(undefined8 *)(param_3 + 0x10);
    FUN_00910394(param_3,param_4);
    uVar4 = *(undefined8 *)(param_4 + 0x2c);
    *(undefined8 *)(param_3 + 0x34) = *(undefined8 *)(param_4 + 0x34);
    *(undefined8 *)(param_3 + 0x2c) = uVar4;
    uVar4 = *(undefined8 *)(param_4 + 0x20);
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_4 + 0x28);
    *(undefined8 *)(param_3 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(param_4 + 0x10);
    *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_4 + 0x18);
    *(undefined8 *)(param_3 + 0x10) = uVar4;
    FUN_00910394(param_4,&local_98);
    *(undefined8 *)(param_4 + 0x34) = uStack_64;
    *(ulong *)(param_4 + 0x2c) = CONCAT44(uStack_68,local_6c);
    *(ulong *)(param_4 + 0x28) = CONCAT44(local_6c,uStack_70);
    *(undefined8 *)(param_4 + 0x20) = uStack_78;
    *(undefined8 *)(param_4 + 0x18) = uStack_80;
    *(undefined8 *)(param_4 + 0x10) = local_88;
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    uVar3 = (*(code *)*param_5)(param_3,param_2);
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      thunk_FUN_00e7051c(&local_98,param_2);
      uStack_64 = *(undefined8 *)(param_2 + 0x34);
      uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
      uStack_78 = *(undefined8 *)(param_2 + 0x20);
      uStack_70 = (undefined4)*(undefined8 *)(param_2 + 0x28);
      local_6c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
      uStack_80 = *(undefined8 *)(param_2 + 0x18);
      local_88 = *(undefined8 *)(param_2 + 0x10);
      FUN_00910394(param_2,param_3);
      uVar4 = *(undefined8 *)(param_3 + 0x2c);
      *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_3 + 0x34);
      *(undefined8 *)(param_2 + 0x2c) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 0x20);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
      *(undefined8 *)(param_2 + 0x20) = uVar4;
      uVar4 = *(undefined8 *)(param_3 + 0x10);
      *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      FUN_00910394(param_3,&local_98);
      *(undefined8 *)(param_3 + 0x34) = uStack_64;
      *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_68,local_6c);
      *(ulong *)(param_3 + 0x28) = CONCAT44(local_6c,uStack_70);
      *(undefined8 *)(param_3 + 0x20) = uStack_78;
      *(undefined8 *)(param_3 + 0x18) = uStack_80;
      *(undefined8 *)(param_3 + 0x10) = local_88;
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      uVar3 = (*(code *)*param_5)(param_2,param_1);
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
      }
      else {
        thunk_FUN_00e7051c(&local_98,param_1);
        uStack_64 = *(undefined8 *)(param_1 + 0x34);
        uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
        uStack_78 = *(undefined8 *)(param_1 + 0x20);
        uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x28);
        local_6c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
        uStack_80 = *(undefined8 *)(param_1 + 0x18);
        local_88 = *(undefined8 *)(param_1 + 0x10);
        FUN_00910394(param_1,param_2);
        uVar4 = *(undefined8 *)(param_2 + 0x2c);
        *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
        *(undefined8 *)(param_1 + 0x2c) = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x20);
        *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
        *(undefined8 *)(param_1 + 0x20) = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x10);
        *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
        *(undefined8 *)(param_1 + 0x10) = uVar4;
        FUN_00910394(param_2,&local_98);
        *(undefined8 *)(param_2 + 0x34) = uStack_64;
        *(ulong *)(param_2 + 0x2c) = CONCAT44(uStack_68,local_6c);
        *(ulong *)(param_2 + 0x28) = CONCAT44(local_6c,uStack_70);
        *(undefined8 *)(param_2 + 0x20) = uStack_78;
        *(undefined8 *)(param_2 + 0x18) = uStack_80;
        *(undefined8 *)(param_2 + 0x10) = local_88;
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
          local_98 = 0;
          local_90 = (void *)0x0;
        }
        iVar2 = iVar2 + 3;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_009f9fd0(long param_1,long param_2,long param_3,long param_4,long param_5,
                undefined8 *param_6)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 local_98;
  void *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 uStack_64;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_009f9d88();
  uVar3 = (*(code *)*param_6)(param_5,param_4);
  if ((uVar3 & 1) != 0) {
    thunk_FUN_00e7051c(&local_98,param_4);
    uStack_64 = *(undefined8 *)(param_4 + 0x34);
    uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x2c) >> 0x20);
    uStack_78 = *(undefined8 *)(param_4 + 0x20);
    uStack_70 = (undefined4)*(undefined8 *)(param_4 + 0x28);
    local_6c = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x28) >> 0x20);
    uStack_80 = *(undefined8 *)(param_4 + 0x18);
    local_88 = *(undefined8 *)(param_4 + 0x10);
    FUN_00910394(param_4,param_5);
    uVar4 = *(undefined8 *)(param_5 + 0x2c);
    *(undefined8 *)(param_4 + 0x34) = *(undefined8 *)(param_5 + 0x34);
    *(undefined8 *)(param_4 + 0x2c) = uVar4;
    uVar4 = *(undefined8 *)(param_5 + 0x20);
    *(undefined8 *)(param_4 + 0x28) = *(undefined8 *)(param_5 + 0x28);
    *(undefined8 *)(param_4 + 0x20) = uVar4;
    uVar4 = *(undefined8 *)(param_5 + 0x10);
    *(undefined8 *)(param_4 + 0x18) = *(undefined8 *)(param_5 + 0x18);
    *(undefined8 *)(param_4 + 0x10) = uVar4;
    FUN_00910394(param_5,&local_98);
    *(undefined8 *)(param_5 + 0x34) = uStack_64;
    *(ulong *)(param_5 + 0x2c) = CONCAT44(uStack_68,local_6c);
    *(ulong *)(param_5 + 0x28) = CONCAT44(local_6c,uStack_70);
    *(undefined8 *)(param_5 + 0x20) = uStack_78;
    *(undefined8 *)(param_5 + 0x18) = uStack_80;
    *(undefined8 *)(param_5 + 0x10) = local_88;
    if (local_90 != (void *)0x0) {
      operator_delete__(local_90);
      local_98 = 0;
      local_90 = (void *)0x0;
    }
    uVar3 = (*(code *)*param_6)(param_4,param_3);
    if ((uVar3 & 1) == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      thunk_FUN_00e7051c(&local_98,param_3);
      uStack_64 = *(undefined8 *)(param_3 + 0x34);
      uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x2c) >> 0x20);
      uStack_78 = *(undefined8 *)(param_3 + 0x20);
      uStack_70 = (undefined4)*(undefined8 *)(param_3 + 0x28);
      local_6c = (undefined4)((ulong)*(undefined8 *)(param_3 + 0x28) >> 0x20);
      uStack_80 = *(undefined8 *)(param_3 + 0x18);
      local_88 = *(undefined8 *)(param_3 + 0x10);
      FUN_00910394(param_3,param_4);
      uVar4 = *(undefined8 *)(param_4 + 0x2c);
      *(undefined8 *)(param_3 + 0x34) = *(undefined8 *)(param_4 + 0x34);
      *(undefined8 *)(param_3 + 0x2c) = uVar4;
      uVar4 = *(undefined8 *)(param_4 + 0x20);
      *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(param_4 + 0x28);
      *(undefined8 *)(param_3 + 0x20) = uVar4;
      uVar4 = *(undefined8 *)(param_4 + 0x10);
      *(undefined8 *)(param_3 + 0x18) = *(undefined8 *)(param_4 + 0x18);
      *(undefined8 *)(param_3 + 0x10) = uVar4;
      FUN_00910394(param_4,&local_98);
      *(undefined8 *)(param_4 + 0x34) = uStack_64;
      *(ulong *)(param_4 + 0x2c) = CONCAT44(uStack_68,local_6c);
      *(ulong *)(param_4 + 0x28) = CONCAT44(local_6c,uStack_70);
      *(undefined8 *)(param_4 + 0x20) = uStack_78;
      *(undefined8 *)(param_4 + 0x18) = uStack_80;
      *(undefined8 *)(param_4 + 0x10) = local_88;
      if (local_90 != (void *)0x0) {
        operator_delete__(local_90);
        local_98 = 0;
        local_90 = (void *)0x0;
      }
      uVar3 = (*(code *)*param_6)(param_3,param_2);
      if ((uVar3 & 1) == 0) {
        iVar2 = iVar2 + 2;
      }
      else {
        thunk_FUN_00e7051c(&local_98,param_2);
        uStack_64 = *(undefined8 *)(param_2 + 0x34);
        uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x2c) >> 0x20);
        uStack_78 = *(undefined8 *)(param_2 + 0x20);
        uStack_70 = (undefined4)*(undefined8 *)(param_2 + 0x28);
        local_6c = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x28) >> 0x20);
        uStack_80 = *(undefined8 *)(param_2 + 0x18);
        local_88 = *(undefined8 *)(param_2 + 0x10);
        FUN_00910394(param_2,param_3);
        uVar4 = *(undefined8 *)(param_3 + 0x2c);
        *(undefined8 *)(param_2 + 0x34) = *(undefined8 *)(param_3 + 0x34);
        *(undefined8 *)(param_2 + 0x2c) = uVar4;
        uVar4 = *(undefined8 *)(param_3 + 0x20);
        *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_3 + 0x28);
        *(undefined8 *)(param_2 + 0x20) = uVar4;
        uVar4 = *(undefined8 *)(param_3 + 0x10);
        *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_3 + 0x18);
        *(undefined8 *)(param_2 + 0x10) = uVar4;
        FUN_00910394(param_3,&local_98);
        *(undefined8 *)(param_3 + 0x34) = uStack_64;
        *(ulong *)(param_3 + 0x2c) = CONCAT44(uStack_68,local_6c);
        *(ulong *)(param_3 + 0x28) = CONCAT44(local_6c,uStack_70);
        *(undefined8 *)(param_3 + 0x20) = uStack_78;
        *(undefined8 *)(param_3 + 0x18) = uStack_80;
        *(undefined8 *)(param_3 + 0x10) = local_88;
        if (local_90 != (void *)0x0) {
          operator_delete__(local_90);
          local_98 = 0;
          local_90 = (void *)0x0;
        }
        uVar3 = (*(code *)*param_6)(param_2,param_1);
        if ((uVar3 & 1) == 0) {
          iVar2 = iVar2 + 3;
        }
        else {
          thunk_FUN_00e7051c(&local_98,param_1);
          uStack_64 = *(undefined8 *)(param_1 + 0x34);
          uStack_68 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x2c) >> 0x20);
          uStack_78 = *(undefined8 *)(param_1 + 0x20);
          uStack_70 = (undefined4)*(undefined8 *)(param_1 + 0x28);
          local_6c = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
          uStack_80 = *(undefined8 *)(param_1 + 0x18);
          local_88 = *(undefined8 *)(param_1 + 0x10);
          FUN_00910394(param_1,param_2);
          uVar4 = *(undefined8 *)(param_2 + 0x2c);
          *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
          *(undefined8 *)(param_1 + 0x2c) = uVar4;
          uVar4 = *(undefined8 *)(param_2 + 0x20);
          *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
          *(undefined8 *)(param_1 + 0x20) = uVar4;
          uVar4 = *(undefined8 *)(param_2 + 0x10);
          *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
          *(undefined8 *)(param_1 + 0x10) = uVar4;
          FUN_00910394(param_2,&local_98);
          *(undefined8 *)(param_2 + 0x34) = uStack_64;
          *(ulong *)(param_2 + 0x2c) = CONCAT44(uStack_68,local_6c);
          *(ulong *)(param_2 + 0x28) = CONCAT44(local_6c,uStack_70);
          *(undefined8 *)(param_2 + 0x20) = uStack_78;
          *(undefined8 *)(param_2 + 0x18) = uStack_80;
          *(undefined8 *)(param_2 + 0x10) = local_88;
          if (local_90 != (void *)0x0) {
            operator_delete__(local_90);
            local_98 = 0;
            local_90 = (void *)0x0;
          }
          iVar2 = iVar2 + 4;
        }
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

