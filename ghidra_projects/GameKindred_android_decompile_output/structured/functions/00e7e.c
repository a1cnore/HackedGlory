// functions/00e7e — 44 functions
#include "libGameKindred.h"




void thunk_FUN_00e7e054(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e6f144(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    FUN_00e7dcd4(param_1 + 8);
    return;
  }
  return;
}




void FUN_00e7e054(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_00e6f144(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    FUN_00e7dcd4(param_1 + 8);
    return;
  }
  return;
}




undefined4 FUN_00e7e08c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x4c8);
}




void FUN_00e7e094(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c8) = param_2;
  return;
}




void FUN_00e7e09c(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) | param_2;
  return;
}




void FUN_00e7e0ac(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x4c8) = *(uint *)(param_1 + 0x4c8) & (param_2 ^ 0xffffffff);
  return;
}




void FUN_00e7e0bc(long param_1)

{
  *(undefined8 *)(param_1 + 0x4cc) = 0;
  return;
}




void FUN_00e7e0cc(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x4cc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x4d0);
  }
  return;
}




void FUN_00e7e0e8(long param_1)

{
  FUN_00e6f144(param_1 + 8);
  return;
}




void FUN_00e7e0f0(long *param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  timespec local_48;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00e70314();
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  memset(param_1 + 10,0,0x180);
  FUN_00e70314(param_1);
  iVar2 = clock_gettime(1,&local_48);
  lVar4 = local_48.tv_nsec - param_1[1];
  lVar3 = local_48.tv_sec - *param_1;
  if (lVar4 < 0) {
    lVar3 = lVar3 + -1;
    lVar4 = (local_48.tv_nsec + 1000000000) - param_1[1];
  }
  param_1[2] = (long)((double)(lVar4 + lVar3 * 1000000000) * 1e-09);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}




void FUN_00e7e1c4(long param_1)

{
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}




void FUN_00e7e1d8(float param_1,long *param_2)

{
  long lVar1;
  float fVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  timespec local_78;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined4 *)((long)param_2 + 0x1c) = 0;
  *(undefined1 *)(param_2 + 3) = 1;
  uVar4 = FUN_00e7e3b8();
  if (0.0 <= param_1) {
    uVar3 = clock_gettime(1,&local_78);
    uVar4 = (ulong)uVar3;
    lVar6 = local_78.tv_nsec - param_2[1];
    lVar5 = local_78.tv_sec - *param_2;
    if (lVar6 < 0) {
      lVar5 = lVar5 + -1;
      lVar6 = (local_78.tv_nsec + 1000000000) - param_2[1];
    }
    dVar8 = (double)(lVar6 + lVar5 * 1000000000) * 1e-09 + (double)param_1;
  }
  else {
    dVar8 = -1.0;
  }
  if (param_2[4] != 0) {
    do {
      if (*(int *)((long)param_2 + 0x1c) != 0) break;
      dVar7 = -1.0;
      if (0.0 <= param_1) {
        clock_gettime(1,&local_78);
        lVar6 = local_78.tv_nsec - param_2[1];
        lVar5 = local_78.tv_sec - *param_2;
        if (lVar6 < 0) {
          lVar5 = lVar5 + -1;
          lVar6 = (local_78.tv_nsec + 1000000000) - param_2[1];
        }
        dVar7 = dVar8 + (double)(lVar6 + lVar5 * 1000000000) * -1e-09;
        if (dVar7 <= 0.0) {
          dVar7 = 0.0;
        }
      }
      fVar2 = 0.0;
      if (param_1 != 0.0) {
        fVar2 = (float)dVar7;
      }
      uVar4 = FUN_00e7e434(fVar2,param_2);
      if ((int)uVar4 < 1) break;
      FUN_00e7e5c0(param_2);
      uVar4 = FUN_00e7e3b8(param_2);
      if (0.0 <= dVar8) {
        uVar3 = clock_gettime(1,&local_78);
        uVar4 = (ulong)uVar3;
        lVar6 = local_78.tv_nsec - param_2[1];
        lVar5 = local_78.tv_sec - *param_2;
        if (lVar6 < 0) {
          lVar5 = lVar5 + -1;
          lVar6 = (local_78.tv_nsec + 1000000000) - param_2[1];
        }
        if (dVar8 < (double)(lVar6 + lVar5 * 1000000000) * 1e-09) break;
      }
    } while (param_2[4] != 0);
  }
  *(undefined1 *)(param_2 + 3) = 0;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




void FUN_00e7e3b8(long param_1)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  plVar2 = (long *)(param_1 + 0x38);
  if (*plVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x48);
    iVar4 = *(int *)(param_1 + 0x30);
    lVar6 = *(long *)(param_1 + 0x40);
    lVar5 = *plVar2;
    do {
      if (lVar5 == lVar6) {
        lVar7 = 0;
        lVar6 = 0;
        *plVar2 = 0;
        *(undefined8 *)(param_1 + 0x40) = 0;
      }
      else {
        lVar7 = *(long *)(lVar5 + 0x4d8);
        *plVar2 = lVar7;
      }
      *(undefined8 *)(lVar5 + 0x4d8) = 0;
      lVar8 = *(long *)(param_1 + 0x28);
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + 1;
      *(long *)(lVar5 + 0x4e0) = lVar8;
      plVar1 = (long *)(param_1 + 0x20);
      if (*(long *)(param_1 + 0x20) != 0) {
        plVar1 = (long *)(lVar8 + 0x4d8);
      }
      *plVar1 = lVar5;
      *(long *)(param_1 + 0x28) = lVar5;
      lVar5 = lVar7;
    } while (lVar7 != 0);
    *(int *)(param_1 + 0x48) = iVar3;
    *(int *)(param_1 + 0x30) = iVar4;
  }
  return;
}




void FUN_00e7e434(float param_1,long param_2)

{
  void *__s;
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  
  __s = (void *)(param_2 + 0x50);
  lVar1 = param_2 + 0xd0;
  lVar2 = param_2 + 0x150;
  memset(__s,0,0x180);
  if (*(long *)(param_2 + 0x20) == 0) {
    iVar7 = -1;
  }
  else {
    iVar7 = -1;
    lVar6 = *(long *)(param_2 + 0x20);
    do {
      lVar8 = *(long *)(lVar6 + 0x4d8);
      uVar3 = FUN_00e7e08c(lVar6);
      if ((uVar3 & 1) != 0) {
        __FD_SET_chk(*(undefined4 *)(lVar6 + 8),__s,0xffffffffffffffff);
      }
      if ((uVar3 >> 1 & 1) != 0) {
        __FD_SET_chk(*(undefined4 *)(lVar6 + 8),lVar1,0xffffffffffffffff);
      }
      if ((uVar3 >> 2 & 1) != 0) {
        __FD_SET_chk(*(undefined4 *)(lVar6 + 8),lVar2,0xffffffffffffffff);
      }
      iVar5 = iVar7;
      if ((uVar3 != 0) && (iVar5 = *(int *)(lVar6 + 8), *(int *)(lVar6 + 8) <= iVar7)) {
        iVar5 = iVar7;
      }
      iVar7 = iVar5;
      lVar6 = lVar8;
    } while (lVar8 != 0);
  }
  if (0.0 <= param_1) {
    if (param_1 == 0.0) {
      iVar4 = 0;
      iVar5 = 0;
    }
    else {
      iVar4 = (int)param_1;
      iVar5 = (int)((param_1 - (float)(int)param_1) * 1e+06) % 1000000;
    }
    thunk_FUN_00e6fb9c(iVar7 + 1,__s,lVar1,lVar2,iVar4,iVar5);
    return;
  }
  thunk_FUN_00e6fb94(iVar7 + 1,__s,lVar1,lVar2);
  return;
}




void FUN_00e7e5c0(long param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  
  if (*(long **)(param_1 + 0x20) != (long *)0x0) {
    plVar4 = *(long **)(param_1 + 0x20);
    do {
      plVar5 = (long *)plVar4[0x9b];
      iVar2 = __FD_ISSET_chk((int)plVar4[1],param_1 + 0x50,0xffffffffffffffff);
      iVar3 = __FD_ISSET_chk((int)plVar4[1],param_1 + 0xd0,0xffffffffffffffff);
      bVar1 = iVar2 != 0;
      if (iVar3 != 0) {
        bVar1 = iVar2 != 0 | 2;
      }
      iVar2 = __FD_ISSET_chk((int)plVar4[1],param_1 + 0x150,0xffffffffffffffff);
      if (iVar2 != 0) {
        bVar1 = bVar1 | 4;
      }
      if (bVar1 != 0) {
        (**(code **)(*plVar4 + 0x20))(plVar4);
      }
      plVar4 = plVar5;
    } while (plVar5 != (long *)0x0);
  }
  return;
}




void FUN_00e7e674(undefined8 param_1,float param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  timespec local_88;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (0.0 <= param_2) {
    fVar7 = (float)param_1;
    if (fVar7 <= param_2) {
      param_2 = fVar7;
    }
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    if (0.0 <= fVar7) {
      clock_gettime(1,&local_88);
      lVar5 = local_88.tv_nsec - param_3[1];
      lVar4 = local_88.tv_sec - *param_3;
      if (lVar5 < 0) {
        lVar4 = lVar4 + -1;
        lVar5 = (local_88.tv_nsec + 1000000000) - param_3[1];
      }
      dVar8 = (double)(lVar5 + lVar4 * 1000000000) * 1e-09 + (double)fVar7;
    }
    else {
      dVar8 = -1.0;
    }
    do {
      do {
        clock_gettime(1,&local_88);
        lVar5 = local_88.tv_nsec - param_3[1];
        lVar4 = local_88.tv_sec - *param_3;
        if (lVar5 < 0) {
          lVar4 = lVar4 + -1;
          lVar5 = (local_88.tv_nsec + 1000000000) - param_3[1];
        }
        dVar10 = (double)(lVar5 + lVar4 * 1000000000) * 1e-09 + (double)param_2;
        dVar6 = -1.0;
        if (0.0 <= fVar7) {
          clock_gettime(1,&local_88);
          lVar5 = local_88.tv_nsec - param_3[1];
          lVar4 = local_88.tv_sec - *param_3;
          if (lVar5 < 0) {
            lVar4 = lVar4 + -1;
            lVar5 = (local_88.tv_nsec + 1000000000) - param_3[1];
          }
          dVar6 = dVar8 + (double)(lVar5 + lVar4 * 1000000000) * -1e-09;
          if (dVar6 <= 0.0) {
            dVar6 = 0.0;
          }
        }
        dVar9 = 0.0;
        if (fVar7 != 0.0) {
          dVar9 = dVar6;
        }
        if (0.0 <= dVar10) {
          clock_gettime(1,&local_88);
          lVar5 = local_88.tv_nsec - param_3[1];
          lVar4 = local_88.tv_sec - *param_3;
          if (lVar5 < 0) {
            lVar4 = lVar4 + -1;
            lVar5 = (local_88.tv_nsec + 1000000000) - param_3[1];
          }
          dVar10 = dVar10 + (double)(lVar5 + lVar4 * 1000000000) * -1e-09;
          if (dVar10 <= 0.0) {
            dVar10 = 0.0;
          }
          if (dVar10 <= dVar9) {
            dVar9 = dVar10;
          }
        }
        FUN_00e7e1d8((float)dVar9,param_3);
        lVar4 = param_3[4];
        while (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x4d8);
          FUN_00e7e054();
        }
      } while (dVar8 < 0.0);
      clock_gettime(1,&local_88);
      lVar5 = local_88.tv_nsec - param_3[1];
      lVar4 = local_88.tv_sec - *param_3;
      if (lVar5 < 0) {
        lVar4 = lVar4 + -1;
        lVar5 = (local_88.tv_nsec + 1000000000) - param_3[1];
      }
    } while ((double)(lVar5 + lVar4 * 1000000000) * 1e-09 <= dVar8);
    uVar2 = clock_gettime(1,&local_88);
    uVar3 = (ulong)uVar2;
    lVar4 = local_88.tv_nsec - param_3[1];
    local_88.tv_sec = local_88.tv_sec - *param_3;
    if (lVar4 < 0) {
      local_88.tv_sec = local_88.tv_sec + -1;
      lVar4 = (local_88.tv_nsec + 1000000000) - param_3[1];
    }
    lVar5 = param_3[7];
    dVar8 = (double)(lVar4 + local_88.tv_sec * 1000000000) * 1e-09;
    dVar6 = dVar8 - (double)param_3[2];
    if (lVar5 != 0) {
      do {
        uVar3 = FUN_00e7df20((float)dVar6,lVar5);
        lVar5 = *(long *)(lVar5 + 0x4d8);
      } while (lVar5 != 0);
    }
    lVar4 = param_3[4];
    if (lVar4 != 0) {
      do {
        uVar3 = FUN_00e7df20((float)dVar6,lVar4);
        lVar4 = *(long *)(lVar4 + 0x4d8);
      } while (lVar4 != 0);
    }
    param_3[2] = (long)dVar8;
  }
  else {
    uVar3 = FUN_00e7e1d8(param_1,param_3);
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}




void FUN_00e7e95c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x4d8);
    FUN_00e7e054();
  }
  return;
}




void FUN_00e7e98c(long param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 1;
  return;
}




void FUN_00e7e99c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)(param_1 + 0x20);
  do {
    lVar2 = *plVar1;
    plVar1 = (long *)(lVar2 + 0x4d8);
  } while (lVar2 != 0);
  *(undefined8 *)(param_2 + 0x4d8) = 0;
  lVar2 = *(long *)(param_1 + 0x40);
  *(long *)(param_2 + 0x4e0) = lVar2;
  plVar1 = (long *)(param_1 + 0x38);
  if (*(long *)(param_1 + 0x38) != 0) {
    plVar1 = (long *)(lVar2 + 0x4d8);
  }
  *plVar1 = param_2;
  *(long *)(param_1 + 0x40) = param_2;
  *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
  return;
}




void FUN_00e7e9e4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  while( true ) {
    if (lVar1 == 0) {
      FUN_00e7ea10(param_1 + 0x20);
      return;
    }
    if (lVar1 == param_2) break;
    lVar1 = *(long *)(lVar1 + 0x4d8);
  }
  FUN_00e7ea10((long *)(param_1 + 0x38));
  return;
}




void FUN_00e7ea10(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x4d8);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x4e0);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x4d8) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x4e0);
    *(undefined8 *)(lVar1 + 0x4d8) = *(undefined8 *)(param_2 + 0x4d8);
    *(long *)(*(long *)(param_2 + 0x4d8) + 0x4e0) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00e7ea74(long param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(param_1 + 0x20);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (long *)plVar1[0x9b];
    (**(code **)(lVar2 + 0x10))();
  }
  plVar1 = *(long **)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    plVar1 = (long *)plVar1[0x9b];
    (**(code **)(lVar2 + 0x10))();
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(long *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(long *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  return;
}




undefined8 FUN_00e7eaec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




undefined8 FUN_00e7eaf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}




void FUN_00e7eb04(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820b38;
  memset(param_1 + 1,0,0x1400);
  return;
}




void FUN_00e7eb20(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820b38;
  memset(param_1 + 1,0,0x1400);
  return;
}




void FUN_00e7eb40(long param_1)

{
  FUN_019bc010(param_1 + 8);
  return;
}




uint FUN_00e7eb48(undefined8 param_1,int param_2)

{
  return param_2 + 7U & 0xfffffff8;
}




undefined4 FUN_00e7eb54(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}




void FUN_00e7eb5c(long *param_1,void *param_2,uint param_3,void *param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  
  memmove(param_4,param_2,(ulong)param_3);
  uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_3);
  if (param_3 < uVar1) {
    memset((void *)((long)param_4 + (ulong)param_3),0,(ulong)((uVar1 - 1) - param_3) + 1);
  }
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      FUN_019bbed0(param_1 + 1,(long)param_4 + (ulong)uVar2,(long)param_4 + ((ulong)uVar2 | 4));
      uVar2 = uVar2 + 8;
    } while (uVar2 < param_3);
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = uVar1;
  }
  return;
}




undefined8 FUN_00e7ec14(long *param_1,void *param_2,uint param_3,void *param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((param_3 + 7 & 0xfffffff8) == param_3) {
    memmove(param_4,param_2,(ulong)param_3);
    uVar1 = (**(code **)(*param_1 + 0x18))(param_1,(ulong)param_3);
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        FUN_019bbf70(param_1 + 1,(long)param_4 + (ulong)uVar3,(long)param_4 + ((ulong)uVar3 | 4));
        uVar3 = uVar3 + 8;
      } while (uVar3 < param_3);
    }
    if (param_5 != (undefined4 *)0x0) {
      *param_5 = uVar1;
    }
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_00e7ecc0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02820b78;
  param_1[1] = 0;
  return;
}




void FUN_00e7ecd4(void)

{
  return;
}




void FUN_00e7ecd8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0xe7ecdc);
  (*pcVar1)();
}




void FUN_00e7ecdc(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  return;
}




void FUN_00e7ece4(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}




undefined8 FUN_00e7ecec(void)

{
  return 0;
}




undefined4 FUN_00e7ecf4(byte *param_1)

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  bVar2 = *param_1;
  uVar4 = *(ulong *)(param_1 + 8);
  uVar5 = (ulong)(bVar2 >> 1);
  uVar1 = uVar5;
  if ((bVar2 & 1) != 0) {
    uVar1 = uVar4;
  }
  if (uVar1 == 3) {
    iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01b95f90,3);
    if (iVar3 == 0) {
      return 1;
    }
    bVar2 = *param_1;
    uVar4 = *(ulong *)(param_1 + 8);
    uVar5 = (ulong)(bVar2 >> 1);
  }
  if ((bVar2 & 1) != 0) {
    uVar5 = uVar4;
  }
  if (uVar5 != 4) {
    return 1;
  }
  iVar3 = FUN_0090d610(param_1,0,0xffffffffffffffff,&DAT_01bef41d,4);
  if (iVar3 == 0) {
    return 2;
  }
  return 1;
}




void FUN_00e7eda4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 1;
  FUN_00e7edd4();
  return;
}




int FUN_00e7edd4(long param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  FUN_019bc1f4(3);
  __mutex = DAT_032106e0;
  iVar1 = pthread_mutex_lock(DAT_032106e0);
  uVar2 = FUN_019be0f4(iVar1);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00e7ee14(undefined8 *param_1)

{
  FUN_00e7ee5c();
  if ((void *)param_1[0xc] != (void *)0x0) {
    operator_delete__((void *)param_1[0xc]);
    param_1[0xb] = 0;
    param_1[0xc] = 0;
  }
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}




int FUN_00e7ee5c(undefined8 *param_1)

{
  void *pvVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  void *pvVar3;
  
  FUN_00e7eeec();
  __mutex = DAT_032106e0;
  pthread_mutex_lock(DAT_032106e0);
  pvVar1 = (void *)*param_1;
  while (pvVar1 != (void *)0x0) {
    pvVar3 = *(void **)((long)pvVar1 + 0x50);
    FUN_00e7efd8(param_1,pvVar1);
    if (*(void **)((long)pvVar1 + 0x60) != (void *)0x0) {
      operator_delete__(*(void **)((long)pvVar1 + 0x60));
      *(undefined8 *)((long)pvVar1 + 0x58) = 0;
      *(undefined8 *)((long)pvVar1 + 0x60) = 0;
    }
    if ((*(byte *)((long)pvVar1 + 8) & 1) != 0) {
      operator_delete(*(void **)((long)pvVar1 + 0x18));
    }
    operator_delete(pvVar1);
    pvVar1 = pvVar3;
  }
  FUN_019c003c(param_1[9]);
  FUN_019bc360();
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}




int FUN_00e7eeec(long param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long lVar2;
  long lVar3;
  
  __mutex = DAT_032106e0;
  pthread_mutex_lock(DAT_032106e0);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 != 0) {
    do {
      if (*(long *)(param_1 + 0x18) == lVar2) {
        *(long *)(param_1 + 0x18) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
      }
      else {
        lVar2 = *(long *)(lVar2 + 0x48);
        *(long *)(param_1 + 0x20) = lVar2;
        *(undefined8 *)(lVar2 + 0x50) = 0;
      }
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
      FUN_00e7f714(param_1);
      lVar2 = *(long *)(param_1 + 0x20);
    } while (lVar2 != 0);
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    do {
      if (*(long *)(param_1 + 0x30) == lVar2) {
        *(long *)(param_1 + 0x30) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        lVar3 = *(long *)(lVar2 + 0x48);
        *(long *)(param_1 + 0x38) = lVar3;
        *(undefined8 *)(lVar3 + 0x50) = 0;
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -1;
      FUN_019be4c8(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(lVar2 + 0x28));
      FUN_019bc688(*(undefined8 *)(lVar2 + 0x28));
      FUN_00e7f0f4(param_1,*(undefined4 *)(lVar2 + 0x20));
      FUN_00e7f714(param_1,lVar2);
      lVar2 = *(long *)(param_1 + 0x38);
    } while (lVar2 != 0);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00e7efd8(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x50);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0x48);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x50) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0x48);
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(long *)(*(long *)(param_2 + 0x50) + 0x48) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}

