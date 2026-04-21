// functions/00bdc — 20 functions
#include "libGameKindred.h"




void FUN_00bdc254(long param_1)

{
  size_t __n;
  size_t sVar1;
  void *__s1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *__s2;
  char *pcVar5;
  long lVar6;
  void *pvVar7;
  
  bVar2 = *(byte *)(param_1 + 0x98);
  if ((bVar2 & 1) == 0) {
    if (bVar2 >> 1 == 0) {
      return;
    }
  }
  else if (*(long *)(param_1 + 0xa0) == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + 0x30);
  __n = (ulong)(bVar2 >> 1);
  if ((bVar2 & 1) != 0) {
    __n = *(size_t *)(param_1 + 0x38);
  }
  sVar1 = (ulong)(DAT_0320ffa8 >> 1);
  if ((DAT_0320ffa8 & 1) != 0) {
    sVar1 = DAT_0320ffb0;
  }
  if (__n == sVar1) {
    pvVar7 = *(void **)(param_1 + 0x40);
    __s1 = pvVar7;
    if ((bVar2 & 1) == 0) {
      __s1 = (void *)(param_1 + 0x31);
    }
    __s2 = DAT_0320ffb8;
    if ((DAT_0320ffa8 & 1) == 0) {
      __s2 = &DAT_0320ffa9;
    }
    if ((bVar2 & 1) == 0) {
      if (__n != 0) {
        pcVar5 = (char *)(param_1 + 0x31);
        lVar6 = -(ulong)(bVar2 >> 1);
        do {
          if (*pcVar5 != *__s2) goto LAB_00bdc31c;
          pcVar5 = pcVar5 + 1;
          lVar6 = lVar6 + 1;
          __s2 = __s2 + 1;
        } while (lVar6 != 0);
      }
      goto LAB_00bdc364;
    }
    if ((__n == 0) || (iVar3 = memcmp(__s1,__s2,__n), iVar3 == 0)) goto LAB_00bdc364;
  }
  else {
LAB_00bdc31c:
    if ((bVar2 & 1) == 0) {
      pvVar7 = (void *)(param_1 + 0x31);
    }
    else {
      pvVar7 = *(void **)(param_1 + 0x40);
    }
  }
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    lVar6 = param_1 + 0x49;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x58);
  }
  FUN_009092e4(pvVar7,lVar6,0,1);
LAB_00bdc364:
  FUN_00c439b8(*(undefined8 *)(param_1 + 8),0);
  uVar4 = FUN_009b8d90();
  FUN_009bb46c(uVar4,(byte *)(param_1 + 0x98),&DAT_0320ffa8,*(undefined1 *)(param_1 + 0x162),0);
  return;
}




void FUN_00bdc398(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  FUN_00bdbfac(param_1,param_2,param_3 & 1,param_4 & 1);
  return;
}




void FUN_00bdc3a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_009fded0();
  if ((lVar2 != 0) && (iVar1 = FUN_009fe4d0(lVar2,param_3), iVar1 == 1)) {
    FUN_009fea24(lVar2,param_2,param_3);
    return;
  }
  return;
}




void FUN_00bdc408(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong local_38;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = 0;
  local_30 = (void *)0x0;
  FUN_00c46568(*(undefined8 *)(param_1 + 8),&local_38);
  if ((int)local_38 == 0) {
    if (local_30 == (void *)0x0) goto LAB_00bdc474;
  }
  else {
    uVar2 = 0;
    do {
      lVar3 = *(long *)((long)local_30 + uVar2 * 8);
      uVar2 = uVar2 + 1;
      *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xfffffff7;
    } while (uVar2 < (local_38 & 0xffffffff));
  }
  operator_delete__(local_30);
  local_38 = 0;
  local_30 = (void *)0x0;
LAB_00bdc474:
  if (*(long *)(lVar1 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00bdc498(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}




undefined8 FUN_00bdc4a0(long param_1)

{
  return *(undefined8 *)(param_1 + -8);
}




void FUN_00bdc4a8(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_027ee418;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdc4ec(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xbdc4f0);
  (*pcVar1)();
}




void FUN_00bdc4f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  void *local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  *param_1 = &PTR_FUN_027ee478;
  pvVar4 = operator_new(0x1be0);
  FUN_00c46e08();
  *(undefined8 **)((long)pvVar4 + 0x240) = param_1;
  *param_1 = &PTR_FUN_027ee458;
  param_1[1] = pvVar4;
  uVar5 = *param_2;
  param_1[3] = param_2[1];
  param_1[2] = uVar5;
  FUN_008fcdb8(param_1 + 4,param_2 + 2);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 7);
  uVar5 = param_2[5];
  param_1[8] = param_2[6];
  param_1[7] = uVar5;
  thunk_FUN_00e7051c(param_1 + 10,param_2 + 8);
  puVar1 = param_1 + 0xc;
  thunk_FUN_00e7051c(puVar1,param_2 + 10);
  thunk_FUN_00e7051c(param_1 + 0xe,param_2 + 0xc);
  FUN_008fcdb8(param_1 + 0x10,param_2 + 0xe);
  uVar5 = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)((long)param_1 + 0xa9) = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)((long)param_1 + 0xa1) = uVar5;
  uVar5 = param_2[0x11];
  param_1[0x14] = param_2[0x12];
  param_1[0x13] = uVar5;
  iVar3 = FUN_00a03248(param_1 + 2);
  FUN_00c477a8(param_1[1],param_1 + 10);
  FUN_00c47810(param_1[1],*(undefined4 *)(param_1 + 0x13),param_1[0x14]);
  FUN_00c478b8(param_1[1],*(int *)(param_1 + 8) != -1);
  FUN_00c4790c(param_1[1],param_1 + 0xe);
  FUN_00c4792c(param_1[1],*(undefined1 *)((long)param_1 + 0xaf));
  FUN_00c47914(param_1[1],*(undefined1 *)((long)param_1 + 0xae));
  FUN_00c4793c(param_1[1],*(undefined1 *)(param_1 + 0x16));
  if (iVar3 == 0) {
    uVar5 = param_1[1];
    uVar6 = 0;
  }
  else {
    uVar5 = param_1[1];
    if (iVar3 == 2) {
      uVar6 = 2;
    }
    else {
      uVar6 = 1;
    }
  }
  FUN_00c477a0(uVar5,uVar6);
  if (*(int *)(param_1 + 0x15) == 0) {
    FUN_00c477d8(param_1[1],puVar1);
  }
  else {
    FUN_00e70510(&local_68);
    FUN_00e70e18(&local_68,&DAT_01bb6d43,*(undefined4 *)(param_1 + 0x15));
    thunk_FUN_00e7051c(&local_78,puVar1);
    FUN_00e705c8(&local_88,"[MIN]");
    FUN_00e71248(&local_78,0,&local_88,&local_68);
    if (local_80 != (void *)0x0) {
      operator_delete__(local_80);
      local_88 = 0;
      local_80 = (void *)0x0;
    }
    FUN_00c477d8(param_1[1],&local_78);
    if (local_70 != (void *)0x0) {
      operator_delete__(local_70);
      local_78 = 0;
      local_70 = (void *)0x0;
    }
    if (local_60 != (void *)0x0) {
      operator_delete__(local_60);
      local_68 = 0;
      local_60 = (void *)0x0;
    }
  }
  FUN_00bdc744(param_1,param_1 + 2);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdc744(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  
  iVar2 = FUN_00a03248(param_2);
  switch(*(undefined4 *)(param_2 + 0x34)) {
  case 1:
  case 2:
  case 3:
  case 4:
    FUN_00bdc948(param_1,param_2);
    break;
  case 7:
    FUN_00bdca94(param_1,param_2);
    break;
  case 8:
    FUN_00bdcbb8(param_1,param_2);
    break;
  case 9:
    FUN_00bdccdc(param_1,param_2);
    break;
  case 10:
    plVar5 = *(long **)(param_1 + 8);
    (**(code **)(*plVar5 + 0xe8))(plVar5);
    FUN_00bdcff4(plVar5 + 0x349,1);
  }
  iVar1 = *(int *)(param_2 + 0x2c);
  if (iVar1 == 2) {
    uVar3 = FUN_00a07558();
    lVar4 = FUN_00a0766c(uVar3,2);
    if ((iVar2 == 0) && (fVar8 = *(float *)(lVar4 + 0x1c), 0 < (int)fVar8)) {
      plVar5 = *(long **)(param_1 + 8);
      (**(code **)(*plVar5 + 0xe8))(plVar5);
      uVar3 = FUN_00bdd0c4(plVar5 + 0x349,1);
      FUN_00ca1948(uVar3,(int)fVar8);
      return;
    }
  }
  else if (iVar1 == 1) {
    uVar3 = FUN_00a07558();
    lVar4 = FUN_00a0766c(uVar3,1);
    uVar7 = *(uint *)(lVar4 + 4);
    uVar3 = FUN_00a07558();
    lVar4 = FUN_00a0766c(uVar3,1);
    uVar6 = (uint)*(float *)(lVar4 + 0x1c);
    if (((uVar7 | uVar6) & 0x80000000) == 0 && iVar2 == 0) {
      plVar5 = *(long **)(param_1 + 8);
      (**(code **)(*plVar5 + 0xe8))(plVar5);
      uVar3 = FUN_00bdd05c(plVar5 + 0x349,1);
LAB_00bdc938:
      FUN_00ca15d8(uVar3,uVar7,uVar6);
      return;
    }
  }
  else if (iVar1 == 0) {
    uVar3 = FUN_00a07558();
    lVar4 = FUN_00a0766c(uVar3,0);
    uVar7 = *(uint *)(lVar4 + 4);
    uVar3 = FUN_00a07558();
    lVar4 = FUN_00a0766c(uVar3,0);
    if (((iVar2 == 0) && (0 < (int)uVar7)) &&
       (uVar6 = (uint)*(float *)(lVar4 + 0x1c), 0 < (int)uVar6)) {
      plVar5 = *(long **)(param_1 + 8);
      (**(code **)(*plVar5 + 0xe8))(plVar5);
      uVar3 = FUN_00bdd05c(plVar5 + 0x349,1);
      goto LAB_00bdc938;
    }
  }
  return;
}




void FUN_00bdc948(long param_1,long param_2)

{
  undefined4 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 local_50;
  void *local_48;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_00a03248(param_2);
  if (iVar3 != 2) {
    plVar5 = *(long **)(param_1 + 8);
    (**(code **)(*plVar5 + 0xe8))(plVar5);
    plVar5 = (long *)FUN_00bdd12c(plVar5 + 0x349,1);
    FUN_00f0d378(plVar5,PTR_s_build___Fonts_Brandon_Bold_130_f_02be9cb0);
    FUN_00f0da30(plVar5,1);
    local_50 = 0x3f8000003f000000;
    (**(code **)(*plVar5 + 0x28))(plVar5,&local_50);
    puVar1 = &DAT_01bee7fa;
    if (iVar3 != 0) {
      puVar1 = (undefined4 *)&DAT_01bbaa98;
    }
    FUN_00f0d7fc(plVar5,puVar1);
    iVar3 = *(int *)(param_2 + 0x34);
    lVar4 = FUN_00940c10();
    FUN_00bdcd84(auStack_3c,&DAT_01bb6d43,
                 iVar3 - (uint)(0 < *(int *)(lVar4 + 0x24) && *(int *)(lVar4 + 0x24) < iVar3));
    FUN_00e705c8(&local_50,auStack_3c);
    (**(code **)(*plVar5 + 0x138))(plVar5,&local_50);
    if (local_48 != (void *)0x0) {
      operator_delete__(local_48);
      local_50 = 0;
      local_48 = (void *)0x0;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdca94(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  iVar3 = FUN_00a03248(param_2);
  if (iVar3 == 3) {
    plVar10 = *(long **)(param_1 + 8);
    (**(code **)(*plVar10 + 0xe8))(plVar10);
    FUN_00bdd1fc(plVar10 + 0x349,1);
  }
  else if (iVar3 == 1) {
    plVar10 = *(long **)(param_1 + 8);
    (**(code **)(*plVar10 + 0xe8))(plVar10);
    bVar2 = true;
    uVar7 = FUN_00bdd194(plVar10 + 0x349,1);
    FUN_00a07558();
    uVar4 = FUN_00a0765c();
    FUN_00a07558();
    uVar5 = FUN_00a0764c();
    lVar8 = FUN_009580b8();
    uVar1 = *(uint *)(lVar8 + 0x55e0);
    FUN_009580b8();
    uVar6 = FUN_0095e478();
    if (uVar6 < uVar5) {
      lVar8 = FUN_009580b8();
      uVar9 = FUN_0093dbe8();
      if ((uVar9 & 1) == 0) {
        bVar2 = *(char *)(lVar8 + 0x5680) != '\0';
      }
      else {
        bVar2 = true;
      }
    }
    FUN_00ca0d60(uVar7,uVar4 <= uVar1,uVar4);
    FUN_00ca0f24(uVar7,bVar2,uVar5);
    return;
  }
  return;
}




void FUN_00bdcbb8(long param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  iVar3 = FUN_00a03248(param_2);
  if (iVar3 == 3) {
    plVar10 = *(long **)(param_1 + 8);
    (**(code **)(*plVar10 + 0xe8))(plVar10);
    FUN_00bdd1fc(plVar10 + 0x349,1);
  }
  else if (iVar3 == 1) {
    plVar10 = *(long **)(param_1 + 8);
    (**(code **)(*plVar10 + 0xe8))(plVar10);
    bVar2 = true;
    uVar7 = FUN_00bdd194(plVar10 + 0x349,1);
    FUN_00a07558();
    uVar4 = FUN_00a07664();
    FUN_00a07558();
    uVar5 = FUN_00a07654();
    lVar8 = FUN_009580b8();
    uVar1 = *(uint *)(lVar8 + 0x55e0);
    FUN_009580b8();
    uVar6 = FUN_0095e478();
    if (uVar6 < uVar5) {
      lVar8 = FUN_009580b8();
      uVar9 = FUN_0093dbe8();
      if ((uVar9 & 1) == 0) {
        bVar2 = *(char *)(lVar8 + 0x5680) != '\0';
      }
      else {
        bVar2 = true;
      }
    }
    FUN_00ca0d60(uVar7,uVar4 <= uVar1,uVar4);
    FUN_00ca0f24(uVar7,bVar2,uVar5);
    return;
  }
  return;
}




void FUN_00bdccdc(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  iVar1 = FUN_00a03248(param_2);
  if (iVar1 == 3) {
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0xe8))(plVar4);
    FUN_00bdd1fc(plVar4 + 0x349,1);
  }
  else if (iVar1 == 1) {
    plVar4 = *(long **)(param_1 + 8);
    (**(code **)(*plVar4 + 0xe8))(plVar4);
    uVar2 = FUN_00bdd194(plVar4 + 0x349,1);
    lVar3 = FUN_009580b8();
    FUN_00ca0d60(uVar2,4 < *(uint *)(lVar3 + 0x55e0),5);
    return;
  }
  return;
}




void FUN_00bdcd84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 *local_70;
  undefined1 **ppuStack_68;
  undefined8 *puStack_60;
  undefined8 uStack_58;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  puStack_60 = &local_a0;
  ppuStack_68 = &local_70;
  uStack_58 = 0xffffff80ffffffd0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = (undefined1 *)register0x00000008;
  FUN_00e6a9d0(param_1,2,param_2,&local_70);
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00bdce24(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee458;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    operator_delete((void *)param_1[0x12]);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  *param_1 = &PTR_FUN_027ee478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdcec8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee458;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    operator_delete((void *)param_1[0x12]);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    operator_delete__((void *)param_1[0xf]);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xd] != (void *)0x0) {
    operator_delete__((void *)param_1[0xd]);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
  }
  if ((void *)param_1[0xb] != (void *)0x0) {
    operator_delete__((void *)param_1[0xb]);
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  if ((*(byte *)(param_1 + 4) & 1) != 0) {
    operator_delete((void *)param_1[6]);
  }
  *param_1 = &PTR_FUN_027ee478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void FUN_00bdcf6c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  param_1[1] = 0;
  return;
}




void FUN_00bdcfb0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_027ee478;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 8))();
  }
  operator_delete(param_1);
  return;
}




void * FUN_00bdcff4(long *param_1,uint param_2)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x340);
  FUN_00ca09dc();
  *(uint *)((long)pvVar1 + 0x84) =
       *(uint *)((long)pvVar1 + 0x84) & 0xffffffc0 |
       *(uint *)((long)pvVar1 + 0x84) & 0x1f | (param_2 & 1) << 5;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 0x78))(param_1,pvVar1,1);
  }
  return pvVar1;
}

