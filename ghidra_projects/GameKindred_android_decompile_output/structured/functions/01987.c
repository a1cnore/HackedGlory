// functions/01987 — 29 functions
#include "libGameKindred.h"




void FUN_01987034(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baefa8;
  *(undefined ***)(param_1 + 0x17) = &PTR_FUN_02baefd0;
  FUN_019873f8(param_1 + 2);
  std::__ndk1::ios_base::~ios_base((ios_base *)(param_1 + 0x17));
  return;
}




void FUN_01987070(long param_1,ulong param_2,long param_3,ulong param_4)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_458 [8];
  undefined1 auStack_450 [1048];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8);
  auVar4 = FUN_019a10a0(auStack_458,param_3,param_3 + (param_4 & 0xffffffff),7);
  piVar2 = auVar4._0_8_;
  if (*piVar2 == 0x30464544) {
    FUN_019896a8(piVar2,auVar4._8_8_,uVar3);
  }
  else {
    FUN_01989f70(auStack_450,uVar3);
    FUN_01989f94(auStack_450,piVar2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_01987114(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_01989d84(*(undefined8 *)(*(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 8),param_3,
               param_4);
  return;
}




int FUN_01987128(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = FUN_01989e20(*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar3 * 8));
      uVar3 = uVar3 + 1;
      iVar2 = iVar1 + iVar2;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return iVar2;
}




undefined8 FUN_01987188(long param_1,uint param_2)

{
  return *(undefined8 *)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8);
}




int FUN_01987194(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = FUN_01989e34(*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar3 * 8));
      uVar3 = uVar3 + 1;
      iVar2 = iVar1 + iVar2;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return iVar2;
}




int FUN_019871f4(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(int *)(param_1 + 8) == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
      iVar1 = FUN_01989e3c(*(undefined8 *)(*(long *)(param_1 + 0x10) + uVar3 * 8));
      uVar3 = uVar3 + 1;
      iVar2 = iVar1 + iVar2;
    } while (uVar3 < *(uint *)(param_1 + 8));
  }
  return iVar2;
}




void FUN_01987254(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_01987254(param_1,*param_2);
    FUN_01987254(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_019872a0(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_02baefa8;
  *(undefined ***)(puVar1 + 0x17) = &PTR_FUN_02baefd0;
  FUN_019873f8(puVar1 + 2);
  std::__ndk1::ios_base::~ios_base((ios_base *)(puVar1 + 0x17));
  return;
}




void FUN_019872e8(long param_1)

{
  std::__ndk1::ios_base::~ios_base((ios_base *)(param_1 + 0x10));
  return;
}




void FUN_019872f0(void *param_1)

{
  std::__ndk1::ios_base::~ios_base((ios_base *)((long)param_1 + 0x10));
  operator_delete(param_1);
  return;
}




void FUN_01987318(long *param_1)

{
  std::__ndk1::ios_base::~ios_base((ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x10))
  ;
  return;
}




void FUN_0198732c(long *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)((long)param_1 + *(long *)(*param_1 + -0x18));
  std::__ndk1::ios_base::~ios_base((ios_base *)((long)pvVar1 + 0x10));
  operator_delete(pvVar1);
  return;
}




void FUN_0198735c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baefa8;
  *(undefined ***)(param_1 + 0x17) = &PTR_FUN_02baefd0;
  FUN_019873f8(param_1 + 2);
  std::__ndk1::ios_base::~ios_base((ios_base *)(param_1 + 0x17));
  operator_delete(param_1);
  return;
}




void FUN_019873a4(long *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + -0x18));
  *puVar1 = &PTR_FUN_02baefa8;
  *(undefined ***)(puVar1 + 0x17) = &PTR_FUN_02baefd0;
  FUN_019873f8(puVar1 + 2);
  std::__ndk1::ios_base::~ios_base((ios_base *)(puVar1 + 0x17));
  operator_delete(puVar1);
  return;
}




void FUN_019873f8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baf040;
  FUN_01987464();
  if ((*(char *)(param_1 + 0x14) != '\0') && ((void *)param_1[8] != (void *)0x0)) {
    operator_delete__((void *)param_1[8]);
  }
  if ((*(char *)((long)param_1 + 0xa1) != '\0') && ((void *)param_1[0xd] != (void *)0x0)) {
    operator_delete__((void *)param_1[0xd]);
  }
  *param_1 = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale((locale *)(param_1 + 1));
  return;
}




long * FUN_01987464(long *param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  FILE *__stream;
  
  __stream = (FILE *)param_1[0xf];
  if (__stream == (FILE *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x30))(param_1);
    iVar2 = fclose(__stream);
    plVar3 = (long *)0x0;
    if (iVar2 == 0) {
      plVar3 = param_1;
      if (iVar1 != 0) {
        plVar3 = (long *)0x0;
      }
      param_1[0xf] = 0;
    }
  }
  return plVar3;
}




void FUN_019874cc(void *param_1)

{
  FUN_019873f8();
  operator_delete(param_1);
  return;
}




void FUN_019874f0(long *param_1,locale *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  long *plVar6;
  void *pvVar7;
  
  (**(code **)(*param_1 + 0x30))();
  plVar6 = (long *)std::__ndk1::locale::use_facet
                             (param_2,(id *)&std::__ndk1::codecvt<char,char,mbstate_t>::id);
  param_1[0x10] = (long)plVar6;
  bVar3 = *(byte *)((long)param_1 + 0xa2);
  bVar5 = (**(code **)(*plVar6 + 0x38))();
  *(byte *)((long)param_1 + 0xa2) = bVar5 & 1;
  if (bVar3 != (bVar5 & 1)) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    if ((bVar5 & 1) == 0) {
      if (((char)param_1[0x14] == '\0') && ((long *)param_1[8] != param_1 + 0xb)) {
        *(undefined1 *)((long)param_1 + 0xa1) = 0;
        param_1[0xd] = param_1[8];
        param_1[0xe] = param_1[0xc];
        pvVar7 = operator_new__(param_1[0xc]);
        param_1[8] = (long)pvVar7;
        *(undefined1 *)(param_1 + 0x14) = 1;
      }
      else {
        param_1[0xe] = param_1[0xc];
        pvVar7 = operator_new__(param_1[0xc]);
        param_1[0xd] = (long)pvVar7;
        *(undefined1 *)((long)param_1 + 0xa1) = 1;
      }
    }
    else {
      if (((char)param_1[0x14] != '\0') && ((void *)param_1[8] != (void *)0x0)) {
        operator_delete__((void *)param_1[8]);
      }
      uVar4 = *(undefined1 *)((long)param_1 + 0xa1);
      lVar1 = param_1[0xd];
      lVar2 = param_1[0xe];
      *(undefined1 *)((long)param_1 + 0xa1) = 0;
      param_1[0xe] = 0;
      *(undefined1 *)(param_1 + 0x14) = uVar4;
      param_1[0xc] = lVar2;
      param_1[0xd] = 0;
      param_1[8] = lVar1;
    }
  }
  return;
}




long FUN_019875e0(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  void *pvVar2;
  
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  if ((*(char *)(param_1 + 0xa0) != '\0') && (*(void **)(param_1 + 0x40) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x40));
  }
  if ((*(char *)(param_1 + 0xa1) != '\0') && (*(void **)(param_1 + 0x68) != (void *)0x0)) {
    operator_delete__(*(void **)(param_1 + 0x68));
  }
  *(ulong *)(param_1 + 0x60) = param_3;
  if (param_3 < 9) {
    cVar1 = *(char *)(param_1 + 0xa2);
    *(long *)(param_1 + 0x40) = param_1 + 0x58;
    *(undefined8 *)(param_1 + 0x60) = 8;
    *(undefined1 *)(param_1 + 0xa0) = 0;
  }
  else {
    cVar1 = *(char *)(param_1 + 0xa2);
    if ((param_2 != 0) && (cVar1 != '\0')) {
      *(long *)(param_1 + 0x40) = param_2;
      *(undefined1 *)(param_1 + 0xa0) = 0;
      goto LAB_01987670;
    }
    pvVar2 = operator_new__(param_3);
    *(void **)(param_1 + 0x40) = pvVar2;
    *(undefined1 *)(param_1 + 0xa0) = 1;
  }
  if (cVar1 == '\0') {
    if ((long)param_3 < 9) {
      param_3 = 8;
    }
    *(ulong *)(param_1 + 0x70) = param_3;
    if ((param_2 != 0) && (7 < param_3)) {
      *(long *)(param_1 + 0x68) = param_2;
      *(undefined1 *)(param_1 + 0xa1) = 0;
      return param_1;
    }
    pvVar2 = operator_new__(param_3);
    *(void **)(param_1 + 0x68) = pvVar2;
    *(undefined1 *)(param_1 + 0xa1) = 1;
    return param_1;
  }
LAB_01987670:
  *(undefined1 *)(param_1 + 0xa1) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  return param_1;
}




undefined1  [16] FUN_019876e0(long *param_1,long param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  __off_t _Var3;
  long lVar4;
  undefined1 auVar5 [16];
  
  if ((long *)param_1[0x10] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  iVar1 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
  if ((param_1[0xf] != 0) && ((param_2 == 0 || (0 < iVar1)))) {
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
    _Var3 = -1;
    if (iVar2 != 0) {
      lVar4 = 0;
      goto LAB_01987774;
    }
    lVar4 = 0;
    if (2 < param_3) goto LAB_01987774;
    _Var3 = iVar1 * param_2;
    if (iVar1 < 1) {
      _Var3 = 0;
    }
    iVar1 = fseeko((FILE *)param_1[0xf],_Var3,param_3);
    if (iVar1 == 0) {
      _Var3 = ftello((FILE *)param_1[0xf]);
      lVar4 = param_1[0x11];
      goto LAB_01987774;
    }
  }
  lVar4 = 0;
  _Var3 = -1;
LAB_01987774:
  auVar5._8_8_ = _Var3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}




undefined1  [16] FUN_019877a8(long *param_1,long param_2,__off_t param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  
  if (((param_1[0xf] == 0) || (iVar1 = (**(code **)(*param_1 + 0x30))(param_1), iVar1 != 0)) ||
     (iVar1 = fseeko((FILE *)param_1[0xf],param_3,0), iVar1 != 0)) {
    param_2 = 0;
    param_3 = -1;
  }
  else {
    param_1[0x11] = param_2;
  }
  auVar2._8_8_ = param_3;
  auVar2._0_8_ = param_2;
  return auVar2;
}




undefined4 FUN_0198781c(long *param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  size_t sVar4;
  undefined4 uVar5;
  long lVar6;
  size_t __n;
  long local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[0xf] != 0) {
    if ((long *)param_1[0x10] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((*(uint *)((long)param_1 + 0x9c) >> 4 & 1) == 0) {
      if ((*(uint *)((long)param_1 + 0x9c) >> 3 & 1) != 0) {
        local_50 = param_1[0x12];
        if (*(char *)((long)param_1 + 0xa2) == '\0') {
          iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x30))();
          lVar6 = param_1[10] - param_1[9];
          if (iVar3 < 1) {
            if (param_1[3] == param_1[4]) {
              bVar2 = false;
            }
            else {
              iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x40))
                                ((long *)param_1[0x10],&local_50,param_1[8],param_1[9],
                                 param_1[3] - param_1[2]);
              bVar2 = true;
              lVar6 = ((param_1[9] + lVar6) - (long)iVar3) - param_1[8];
            }
          }
          else {
            bVar2 = false;
            lVar6 = lVar6 + (param_1[4] - param_1[3]) * (long)iVar3;
          }
        }
        else {
          bVar2 = false;
          lVar6 = param_1[4] - param_1[3];
        }
        iVar3 = fseeko((FILE *)param_1[0xf],-lVar6,1);
        if (iVar3 != 0) goto LAB_019879ac;
        if (bVar2) {
          param_1[0x11] = local_50;
        }
        *(undefined4 *)((long)param_1 + 0x9c) = 0;
        param_1[3] = 0;
        param_1[4] = 0;
        param_1[2] = 0;
        param_1[9] = param_1[8];
        param_1[10] = param_1[8];
      }
    }
    else {
      if (param_1[6] != param_1[5]) {
        uVar5 = 0xffffffff;
        iVar3 = (**(code **)(*param_1 + 0x68))(param_1,0xffffffff);
        if (iVar3 == -1) goto LAB_019879d8;
      }
      do {
        iVar3 = (**(code **)(*(long *)param_1[0x10] + 0x28))
                          ((long *)param_1[0x10],param_1 + 0x11,param_1[8],param_1[8] + param_1[0xc]
                           ,&local_50);
        __n = local_50 - param_1[8];
        sVar4 = fwrite((void *)param_1[8],1,__n,(FILE *)param_1[0xf]);
        if (sVar4 != __n) goto LAB_019879ac;
      } while (iVar3 == 1);
      if ((iVar3 == 2) || (iVar3 = fflush((FILE *)param_1[0xf]), iVar3 != 0)) {
LAB_019879ac:
        uVar5 = 0xffffffff;
        goto LAB_019879d8;
      }
    }
  }
  uVar5 = 0;
LAB_019879d8:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}




void FUN_01987a0c(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  size_t sVar5;
  long *plVar6;
  void *pvVar7;
  byte *pbVar8;
  byte *pbVar9;
  long lVar10;
  long lVar11;
  size_t __n;
  byte *local_58;
  undefined1 local_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(long *)(param_1 + 0x78) == 0) {
    uVar4 = 0xffffffff;
    goto LAB_01987c64;
  }
  if ((*(byte *)(param_1 + 0x9c) >> 3 & 1) == 0) {
    lVar10 = 0x70;
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    bVar2 = *(char *)(param_1 + 0xa2) != '\0';
    if (bVar2) {
      lVar10 = 0x60;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
    lVar11 = 0x68;
    if (bVar2) {
      lVar11 = 0x40;
    }
    lVar11 = *(long *)(param_1 + lVar11);
    lVar10 = *(long *)(param_1 + lVar10);
    *(undefined4 *)(param_1 + 0x9c) = 8;
    bVar2 = true;
    pbVar8 = (byte *)(lVar11 + lVar10);
    *(long *)(param_1 + 0x10) = lVar11;
    *(byte **)(param_1 + 0x18) = pbVar8;
    *(byte **)(param_1 + 0x20) = pbVar8;
    if (pbVar8 != (byte *)0x0) goto LAB_01987aa8;
LAB_01987ab8:
    pbVar8 = (byte *)((ulong)local_4c | 1);
    *(undefined1 **)(param_1 + 0x10) = local_4c;
    *(byte **)(param_1 + 0x18) = pbVar8;
    *(byte **)(param_1 + 0x20) = pbVar8;
    if (bVar2) goto LAB_01987aac;
LAB_01987acc:
    pbVar9 = *(byte **)(param_1 + 0x20);
    lVar10 = (long)pbVar9 - *(long *)(param_1 + 0x10);
    if (lVar10 < 0) {
      lVar10 = lVar10 + 1;
    }
    __n = lVar10 >> 1;
    if (3 < __n) {
      __n = 4;
    }
  }
  else {
    pbVar8 = *(byte **)(param_1 + 0x18);
    bVar2 = false;
    if (pbVar8 == (byte *)0x0) goto LAB_01987ab8;
LAB_01987aa8:
    if (!bVar2) goto LAB_01987acc;
LAB_01987aac:
    pbVar9 = *(byte **)(param_1 + 0x20);
    __n = 0;
  }
  if (pbVar8 == pbVar9) {
    memmove(*(void **)(param_1 + 0x10),pbVar8 + -__n,__n);
    if (*(char *)(param_1 + 0xa2) == '\0') {
      pvVar7 = *(void **)(param_1 + 0x48);
      lVar10 = *(long *)(param_1 + 0x50);
      if (lVar10 - (long)pvVar7 != 0) {
        memmove(*(void **)(param_1 + 0x40),pvVar7,lVar10 - (long)pvVar7);
        pvVar7 = *(void **)(param_1 + 0x48);
        lVar10 = *(long *)(param_1 + 0x50);
      }
      lVar11 = *(long *)(param_1 + 0x40);
      pvVar7 = (void *)(lVar11 + (lVar10 - (long)pvVar7));
      *(void **)(param_1 + 0x48) = pvVar7;
      if (lVar11 == param_1 + 0x58) {
        lVar10 = 8;
      }
      else {
        lVar10 = *(long *)(param_1 + 0x60);
      }
      sVar5 = (lVar11 + lVar10) - (long)pvVar7;
      *(long *)(param_1 + 0x50) = lVar11 + lVar10;
      *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_1 + 0x88);
      uVar4 = *(long *)(param_1 + 0x70) - __n;
      if (uVar4 <= sVar5) {
        sVar5 = uVar4;
      }
      sVar5 = fread(pvVar7,1,sVar5,*(FILE **)(param_1 + 0x78));
      if (sVar5 != 0) {
        plVar6 = *(long **)(param_1 + 0x80);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar10 = *(long *)(param_1 + 0x48) + sVar5;
        *(long *)(param_1 + 0x50) = lVar10;
        iVar3 = (**(code **)(*plVar6 + 0x20))
                          (plVar6,(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x40),
                           lVar10,(undefined8 *)(param_1 + 0x48),*(long *)(param_1 + 0x10) + __n,
                           *(long *)(param_1 + 0x10) + *(long *)(param_1 + 0x70),&local_58);
        if (iVar3 == 3) {
          pbVar8 = *(byte **)(param_1 + 0x40);
          local_58 = *(byte **)(param_1 + 0x50);
          *(byte **)(param_1 + 0x10) = pbVar8;
        }
        else {
          pbVar8 = (byte *)(*(long *)(param_1 + 0x10) + __n);
          if (local_58 == pbVar8) goto LAB_01987c48;
        }
LAB_01987c3c:
        *(byte **)(param_1 + 0x18) = pbVar8;
        *(byte **)(param_1 + 0x20) = local_58;
        uVar4 = (ulong)*pbVar8;
        goto LAB_01987c4c;
      }
    }
    else {
      sVar5 = fread((void *)(*(long *)(param_1 + 0x10) + __n),1,
                    (*(long *)(param_1 + 0x20) - __n) - *(long *)(param_1 + 0x10),
                    *(FILE **)(param_1 + 0x78));
      if (sVar5 != 0) {
        pbVar8 = (byte *)(*(long *)(param_1 + 0x10) + __n);
        local_58 = pbVar8 + sVar5;
        goto LAB_01987c3c;
      }
    }
LAB_01987c48:
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (ulong)*pbVar8;
  }
LAB_01987c4c:
  if (*(undefined1 **)(param_1 + 0x10) == local_4c) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
LAB_01987c64:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}




uint FUN_01987c94(long param_1,uint param_2)

{
  ulong uVar1;
  
  if ((*(long *)(param_1 + 0x78) != 0) &&
     (uVar1 = *(ulong *)(param_1 + 0x18), *(ulong *)(param_1 + 0x10) < uVar1)) {
    if (param_2 == 0xffffffff) {
      *(ulong *)(param_1 + 0x18) = uVar1 - 1;
      return 0;
    }
    if (((*(byte *)(param_1 + 0x98) >> 4 & 1) != 0) ||
       ((uint)*(byte *)(uVar1 - 1) == (param_2 & 0xff))) {
      *(undefined1 **)(param_1 + 0x18) = (undefined1 *)(uVar1 - 1);
      *(undefined1 *)(uVar1 - 1) = (char)param_2;
      return param_2;
    }
  }
  return 0xffffffff;
}




void FUN_01987cf4(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  long *plVar6;
  size_t sVar7;
  FILE *__s;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  void *__ptr;
  long lVar11;
  void *pvVar12;
  void *local_70;
  long local_68;
  undefined1 local_5c [4];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_01987eb0(param_1);
    puVar8 = *(undefined1 **)(param_1 + 0x30);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    pvVar12 = *(void **)(param_1 + 0x28);
    __ptr = pvVar12;
    if (param_2 != -1) {
      if (puVar8 == (undefined1 *)0x0) {
        puVar8 = local_5c;
        *(undefined1 **)(param_1 + 0x28) = puVar8;
        *(undefined1 **)(param_1 + 0x30) = puVar8;
        *(ulong *)(param_1 + 0x38) = (ulong)puVar8 | 1;
      }
      *puVar8 = (char)param_2;
      puVar8 = (undefined1 *)(*(long *)(param_1 + 0x30) + 1);
      *(undefined1 **)(param_1 + 0x30) = puVar8;
      __ptr = *(void **)(param_1 + 0x28);
    }
    sVar7 = (long)puVar8 - (long)__ptr;
    if (sVar7 == 0) {
LAB_01987da4:
      iVar4 = 0;
      if (param_2 != -1) {
        iVar4 = param_2;
      }
      goto LAB_01987e64;
    }
    if (*(char *)(param_1 + 0xa2) == '\0') {
      lVar9 = *(long *)(param_1 + 0x40);
      plVar6 = *(long **)(param_1 + 0x80);
      local_68 = lVar9;
      if (plVar6 == (long *)0x0) {
LAB_01987eac:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar11 = *(long *)(param_1 + 0x60);
      pcVar10 = *(code **)(*plVar6 + 0x18);
      while( true ) {
        uVar3 = (*pcVar10)(plVar6,param_1 + 0x88,__ptr,puVar8,&local_70,lVar9,lVar9 + lVar11,
                           &local_68);
        __ptr = *(void **)(param_1 + 0x28);
        if (local_70 == __ptr) break;
        if (uVar3 == 3) {
          __s = *(FILE **)(param_1 + 0x78);
          sVar7 = *(long *)(param_1 + 0x30) - (long)__ptr;
          goto LAB_01987d8c;
        }
        if ((1 < uVar3) ||
           (sVar5 = local_68 - (long)*(void **)(param_1 + 0x40),
           sVar7 = fwrite(*(void **)(param_1 + 0x40),1,sVar5,*(FILE **)(param_1 + 0x78)),
           sVar7 != sVar5)) break;
        if (uVar3 != 1) goto LAB_01987d9c;
        puVar8 = *(undefined1 **)(param_1 + 0x30);
        plVar6 = *(long **)(param_1 + 0x80);
        *(void **)(param_1 + 0x28) = local_70;
        *(undefined1 **)(param_1 + 0x38) = puVar8;
        if (plVar6 == (long *)0x0) goto LAB_01987eac;
        lVar9 = *(long *)(param_1 + 0x40);
        lVar11 = *(long *)(param_1 + 0x60);
        pcVar10 = *(code **)(*plVar6 + 0x18);
        __ptr = local_70;
      }
    }
    else {
      __s = *(FILE **)(param_1 + 0x78);
LAB_01987d8c:
      sVar5 = fwrite(__ptr,1,sVar7,__s);
      if (sVar5 == sVar7) {
LAB_01987d9c:
        *(void **)(param_1 + 0x28) = pvVar12;
        *(void **)(param_1 + 0x30) = pvVar12;
        *(undefined8 *)(param_1 + 0x38) = uVar1;
        goto LAB_01987da4;
      }
    }
  }
  iVar4 = -1;
LAB_01987e64:
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar4);
  }
  return;
}




void FUN_01987eb0(long param_1)

{
  long lVar1;
  
  if ((*(byte *)(param_1 + 0x9c) >> 4 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    if (*(ulong *)(param_1 + 0x60) < 9) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    else if (*(char *)(param_1 + 0xa2) == '\0') {
      lVar1 = *(long *)(param_1 + 0x68);
      *(long *)(param_1 + 0x28) = lVar1;
      *(long *)(param_1 + 0x30) = lVar1;
      *(long *)(param_1 + 0x38) = lVar1 + *(long *)(param_1 + 0x70) + -1;
    }
    else {
      lVar1 = *(long *)(param_1 + 0x40);
      *(long *)(param_1 + 0x28) = lVar1;
      *(long *)(param_1 + 0x30) = lVar1;
      *(ulong *)(param_1 + 0x38) = lVar1 + *(ulong *)(param_1 + 0x60) + -1;
    }
    *(undefined4 *)(param_1 + 0x9c) = 0x10;
  }
  return;
}




void FUN_01987f18(uint *param_1,uint param_2)

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




void FUN_01987f98(long *param_1)

{
  locale *this;
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  locale alStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (locale *)(param_1 + 1);
  *param_1 = (long)&PTR_FUN_02820d60;
  std::__ndk1::locale::locale(this);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  *param_1 = (long)&PTR_FUN_02baf040;
  param_1[8] = 0;
  memset(param_1 + 0xc,0,0x43);
  std::__ndk1::locale::locale(alStack_40,this);
  uVar3 = std::__ndk1::locale::has_facet
                    (alStack_40,(id *)&std::__ndk1::codecvt<char,char,mbstate_t>::id);
  std::__ndk1::locale::~locale(alStack_40);
  if ((uVar3 & 1) != 0) {
    std::__ndk1::locale::locale(alStack_40,this);
    lVar4 = std::__ndk1::locale::use_facet
                      (alStack_40,(id *)&std::__ndk1::codecvt<char,char,mbstate_t>::id);
    param_1[0x10] = lVar4;
    std::__ndk1::locale::~locale(alStack_40);
    bVar2 = (**(code **)(*(long *)param_1[0x10] + 0x38))();
    *(byte *)((long)param_1 + 0xa2) = bVar2 & 1;
  }
  (**(code **)(*param_1 + 0x18))(param_1,0,0x1000);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

