// functions/10006 — 244 functions
#include "GameKindred.h"




bool FUN_100060214(long param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (uVar1 == 0) {
    return false;
  }
  if (**(int **)(param_1 + 0x10) == param_2) {
    return true;
  }
  uVar2 = 1;
  do {
    uVar3 = uVar2;
    if (uVar1 == uVar3) break;
    uVar2 = uVar3 + 1;
  } while ((*(int **)(param_1 + 0x10))[uVar3] != param_2);
  return uVar3 < uVar1;
}




void FUN_100060268(long param_1,long param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_7c8 [96];
  undefined1 auStack_768 [96];
  undefined1 auStack_708 [1600];
  undefined1 auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_2 != 0) && (*(int *)(param_1 + 0x260) != *(int *)(param_2 + 0x260))) {
    FUN_1003467f8();
    iVar1 = FUN_10034cdd0();
    uVar3 = 0;
    if ((iVar1 == 0) || (param_4 != 6)) goto LAB_1000602b0;
    thunk_FUN_10045cc04(auStack_768);
    FUN_1003a2644(auStack_768,1);
    FUN_1003a25f4(auStack_768,1,0,0,param_2);
    FUN_10045ccc4(0x42a20000,auStack_768,param_3);
    iVar1 = FUN_1003a6ce4(auStack_768,auStack_c8,0x10,0);
    thunk_FUN_10045cc04(auStack_7c8);
    FUN_1003a2644(auStack_7c8,0x10000);
    FUN_10045ccc4(0x41100000,auStack_7c8,param_3);
    FUN_1003c3608(auStack_7c8,0);
    FUN_1003a25f4(auStack_7c8,0,1,0,param_1);
    iVar2 = FUN_1003a6ce4(auStack_7c8,auStack_708,200,0);
    if ((iVar1 != 0) && (iVar2 == 0)) {
      FUN_1003467f8();
      FUN_100107484();
      uVar3 = 1;
      goto LAB_1000602b0;
    }
  }
  uVar3 = 0;
LAB_1000602b0:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




void FUN_1000603d4(long param_1,int param_2,ulong param_3)

{
  uint *puVar1;
  ulong uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  int local_44;
  
  puVar1 = (uint *)(param_1 + 8);
  local_44 = param_2;
  if ((param_3 & 1) == 0) {
    uVar2 = (ulong)*(uint *)(param_1 + 8);
    if (*(uint *)(param_1 + 8) != 0) {
      lVar4 = 0;
      uVar5 = 0;
      do {
        piVar3 = (int *)(*(long *)(param_1 + 0x10) + lVar4);
        if (*piVar3 == param_2) {
          FUN_10006070c(puVar1,piVar3,piVar3 + 1);
          uVar2 = (ulong)*puVar1;
        }
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 4;
      } while (uVar5 < uVar2);
    }
  }
  else {
    uVar2 = (ulong)*puVar1;
    if (*puVar1 != 0) {
      piVar3 = *(int **)(param_1 + 0x10);
      do {
        if (*piVar3 == param_2) {
          return;
        }
        piVar3 = piVar3 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    FUN_1000228fc(puVar1,&local_44);
  }
  return;
}




void FUN_100060490(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_68 [56];
  
  fVar2 = (float)FUN_100060518();
  if (fVar2 <= 0.0) {
    FUN_1003dd83c(auStack_68,*(undefined4 *)(*param_1 + 0x260),param_2,&DAT_1013cd800,param_3,1);
    FUN_100345498(auStack_68);
    iVar1 = (int)param_1[4];
    if (iVar1 == 0) {
      FUN_1004e3004(param_1 + 3);
      iVar1 = (int)param_1[4];
    }
    *(int *)(param_1 + 4) = iVar1 + 1;
  }
  return;
}




float FUN_100060518(long param_1)

{
  uint64_t uVar1;
  float fVar2;
  
  if (3 < *(uint *)(param_1 + 0x20)) {
    uVar1 = _mach_absolute_time();
    fVar2 = *(float *)(param_1 + 0x24);
    if ((double)((uVar1 - *(long *)(param_1 + 0x18)) * DAT_101d91638) * 1e-09 < (double)fVar2) {
      uVar1 = _mach_absolute_time();
      fVar2 = (float)((double)fVar2 +
                     (double)((uVar1 - *(long *)(param_1 + 0x18)) * DAT_101d91638) * -1e-09);
      if (0.0 < fVar2) {
        return fVar2;
      }
      return 0.0;
    }
  }
  return 0.0;
}




void FUN_1000605bc(long param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0) {
    FUN_1004e3004(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x20);
  }
  *(int *)(param_1 + 0x20) = iVar1 + param_2;
  return;
}




void FUN_1000605f8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_68 [56];
  
  fVar2 = (float)FUN_100060518();
  if (fVar2 <= 0.0) {
    FUN_1003dd83c(auStack_68,*(undefined4 *)(*param_1 + 0x260),0xffffffff,param_2,param_3,1);
    FUN_100345498(auStack_68);
    iVar1 = (int)param_1[4];
    if (iVar1 == 0) {
      FUN_1004e3004(param_1 + 3);
      iVar1 = (int)param_1[4];
    }
    *(int *)(param_1 + 4) = iVar1 + 1;
  }
  return;
}




void FUN_100060684(long *param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_68 [56];
  
  fVar2 = (float)FUN_100060518();
  if (fVar2 <= 0.0) {
    FUN_1003dd83c(auStack_68,*(undefined4 *)(*param_1 + 0x260),*(undefined4 *)(*param_1 + 0x260),
                  &DAT_1013cd800,param_2,param_3);
    FUN_100345498(auStack_68);
    iVar1 = (int)param_1[4];
    if (iVar1 == 0) {
      FUN_1004e3004(param_1 + 3);
      iVar1 = (int)param_1[4];
    }
    *(int *)(param_1 + 4) = iVar1 + 1;
  }
  return;
}




void FUN_10006070c(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  uVar3 = (uint)((ulong)((long)param_3 - (long)param_2) >> 2);
  if (uVar4 == uVar3) {
    if (*(void **)(param_1 + 2) != (void *)0x0) {
      operator_delete__(*(void **)(param_1 + 2));
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
    }
  }
  else {
    puVar1 = (undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 4);
    if (puVar1 != param_3) {
      do {
        puVar2 = param_3 + 1;
        *param_2 = *param_3;
        param_2 = param_2 + 1;
        param_3 = puVar2;
      } while (puVar2 != puVar1);
      uVar4 = *param_1;
    }
    *param_1 = uVar4 - uVar3;
  }
  return;
}




void FUN_10006077c(void)

{
  if ((DAT_10184db60 & 1) == 0) {
    DAT_10184db58 = DAT_101872e38;
    DAT_10184db60 = 1;
  }
  return;
}




void FUN_1000607a8(void)

{
  undefined1 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 local_40;
  void *pvStack_38;
  void *local_30;
  code *pcStack_28;
  
  if (DAT_101dc3890 == (void *)0x0) {
    pvVar2 = operator_new(8);
    uVar3 = FUN_100316150();
    local_40 = 0;
    pcStack_28 = thunk_FUN_100060820;
    pvStack_38 = pvVar2;
    local_30 = pvVar2;
    FUN_10003c508(uVar3,&local_40);
    DAT_101dc3890 = pvVar2;
  }
  uVar1 = FUN_1001269e0();
  pvVar2 = DAT_101dc3890;
  *(undefined1 *)((long)DAT_101dc3890 + 5) = uVar1;
  local_40 = CONCAT44(local_40._4_4_,0x22);
  FUN_100060820(pvVar2,&local_40);
  return;
}




void FUN_100060820(undefined8 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_101dc3890 != 0) {
    uVar4 = *param_2;
    if ((uVar4 | 0x20) == 0x22) {
      iVar3 = FUN_100316180(2);
      uVar1 = 2;
      if (iVar3 != 1) {
        uVar1 = 0xd;
      }
      uVar2 = 0xd;
      if (iVar3 != 0) {
        uVar2 = uVar1;
      }
      FUN_1000608fc(uVar2);
      uVar4 = *param_2;
    }
    if (uVar4 < 0x23 && (1L << ((ulong)uVar4 & 0x3f) & 0x400000044U) != 0) {
      uVar4 = FUN_10031615c(6);
      FUN_1000609a0(uVar4 ^ 1);
      return;
    }
  }
  return;
}




void FUN_1000608bc(void)

{
  void *pvVar1;
  
  if (DAT_101dc3890 != 0) {
    pvVar1 = (void *)FUN_100060b2c();
    operator_delete(pvVar1);
    DAT_101dc3890 = 0;
  }
  return;
}




undefined4 FUN_1000608ec(void)

{
  return *DAT_101dc3890;
}




void FUN_1000608fc(undefined4 param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  *DAT_101dc3890 = param_1;
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0x461d39a) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0x461d39a];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0x461d39b)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_1000609a0(undefined1 param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  *(undefined1 *)(DAT_101dc3890 + 4) = param_1;
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xc8e15bb6) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xc8e15bb6];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xc8e15bb7)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




bool FUN_100060a44(uint param_1)

{
  return (param_1 & (*DAT_101dc3890 ^ 0xffffffff)) == 0;
}




uint FUN_100060a5c(void)

{
  return *DAT_101dc3890 & 1;
}




byte FUN_100060a70(void)

{
  return *DAT_101dc3890 >> 1 & 1;
}




undefined1 FUN_100060a84(void)

{
  return *(undefined1 *)(DAT_101dc3890 + 5);
}




bool FUN_100060a94(void)

{
  if ((*DAT_101dc3890 >> 3 & 1) == 0) {
    return false;
  }
  return DAT_101dc3890[4] != 0;
}




bool FUN_100060abc(void)

{
  bool bVar1;
  int iVar2;
  
  if (*(char *)(DAT_101dc3890 + 4) == '\0') {
    bVar1 = false;
  }
  else {
    iVar2 = FUN_10012709c();
    bVar1 = iVar2 != 1;
  }
  return bVar1;
}




byte FUN_100060af0(void)

{
  return *DAT_101dc3890 >> 2 & 1;
}




undefined8 FUN_100060b04(void)

{
  return 0;
}




bool FUN_100060b0c(void)

{
  int iVar1;
  
  iVar1 = FUN_10012709c();
  return iVar1 == 1;
}




void thunk_FUN_100060820(void)

{
  FUN_100060820();
  return;
}




long FUN_100060b2c(long param_1)

{
  long *plVar1;
  int iVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  
  iVar2 = FUN_10031613c();
  if (iVar2 != 0) {
    puVar3 = (uint *)FUN_100316150();
    if (*puVar3 != 0) {
      lVar4 = *(long *)(puVar3 + 2);
      lVar5 = (ulong)*puVar3 << 5;
      do {
        plVar1 = (long *)(lVar4 + 8);
        lVar4 = lVar4 + 0x20;
        if (*plVar1 == param_1) {
          FUN_10003c608();
          return param_1;
        }
        lVar5 = lVar5 + -0x20;
      } while (lVar5 != 0);
    }
  }
  return param_1;
}




void FUN_100060b8c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10144d828;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  return;
}




void FUN_100060bac(void)

{
  return;
}




void FUN_100060bb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 8) = param_2;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x18) = param_4;
  return;
}




void FUN_100060bc0(long param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  long *plVar11;
  float *pfVar12;
  float *pfVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  
  pfVar13 = &local_b0;
  pfVar12 = &local_b0;
  fVar17 = (float)FUN_10109c448(2);
  fVar18 = (float)FUN_10109c448(3);
  local_a8 = fVar17;
  fStack_a4 = fVar18;
  fVar19 = (float)FUN_10109c448(0);
  fVar20 = (float)FUN_10109c448(1);
  fVar21 = (float)FUN_10109c448(5);
  fVar22 = (float)FUN_10109c448(4);
  bVar1 = *(byte *)(param_1 + 0x2d);
  uVar8 = FUN_10109c418(8);
  bVar2 = *(byte *)(param_1 + 0x2b);
  uVar9 = FUN_10109c418(9);
  cVar3 = *(char *)(param_1 + 0x2a);
  bVar6 = DAT_10184e078 <= fVar21;
  uVar7 = FUN_10109c418(8);
  *(undefined1 *)(param_1 + 0x2d) = uVar7;
  uVar7 = FUN_10109c418(9);
  *(undefined1 *)(param_1 + 0x2b) = uVar7;
  *(bool *)(param_1 + 0x2a) = DAT_10184e078 <= fVar21;
  uVar10 = FUN_10109c418(4);
  plVar11 = *(long **)(param_1 + 8);
  if (plVar11 != (long *)0x0) {
    fVar21 = SQRT(fVar17 * fVar17 + fVar18 * fVar18);
    if (DAT_10184e070 <= fVar21) {
      local_a8 = fVar17 / fVar21;
      fStack_a4 = fVar18 / fVar21;
      (**(code **)(*plVar11 + 0x18))(plVar11,1,&local_a8);
      *(undefined1 *)(param_1 + 0x28) = 1;
    }
    else if (*(char *)(param_1 + 0x28) != '\0') {
      (**(code **)(*plVar11 + 0x20))(plVar11,1);
      *(undefined1 *)(param_1 + 0x28) = 0;
    }
  }
  plVar11 = *(long **)(param_1 + 0x10);
  fVar17 = SQRT(fVar19 * fVar19 + fVar20 * fVar20);
  if (plVar11 != (long *)0x0) {
    if (DAT_10184e07c <= fVar22) {
      if (*(char *)(param_1 + 0x2c) == '\0') {
        (**(code **)(*plVar11 + 0x10))();
        *(undefined1 *)(param_1 + 0x2c) = 1;
      }
      plVar11 = *(long **)(param_1 + 0x10);
      if (DAT_10184e074 <= fVar17) {
        local_b0 = fVar19 / fVar17;
        fStack_ac = fVar20 / fVar17;
        pcVar14 = *(code **)(*plVar11 + 0x18);
        fVar18 = fVar17;
      }
      else {
        pcVar14 = *(code **)(*plVar11 + 0x18);
        pfVar12 = (float *)&DAT_101dc1cb8;
        fVar18 = 0.0;
      }
      (*pcVar14)(fVar18,plVar11,DAT_10184e074 <= fVar17,pfVar12);
    }
    else if (*(char *)(param_1 + 0x2c) != '\0') {
      (**(code **)(*plVar11 + 0x20))(plVar11,*(undefined1 *)(param_1 + 0x29));
      *(undefined1 *)(param_1 + 0x2c) = 0;
    }
  }
  plVar11 = *(long **)(param_1 + 0x18);
  if (plVar11 == (long *)0x0) {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  else {
    cVar4 = *(char *)(param_1 + 0x20);
    bVar5 = (byte)uVar10;
    if (*(char *)(param_1 + 0x2d) == '\0') {
      if (*(char *)(param_1 + 0x2b) == '\0') {
        if (*(char *)(param_1 + 0x2a) == '\0') {
          *(undefined1 *)(param_1 + 0x20) = 0;
        }
        else {
          *(byte *)(param_1 + 0x20) = bVar5 ^ 1;
          if ((uVar10 & 1) == 0) {
            iVar15 = *(int *)(param_1 + 0x24);
            iVar16 = iVar15;
            if (*(char *)(param_1 + 0x2a) == '\0') goto joined_r0x000100060fa0;
            iVar16 = 2;
            goto LAB_100060e38;
          }
        }
      }
      else {
        *(byte *)(param_1 + 0x20) = bVar5 ^ 1;
        if ((uVar10 & 1) == 0) {
          iVar15 = *(int *)(param_1 + 0x24);
          iVar16 = 1;
LAB_100060e38:
          *(int *)(param_1 + 0x24) = iVar16;
joined_r0x000100060fa0:
          if (cVar4 == '\0') {
            (**(code **)(*plVar11 + 0x10))();
            FUN_100061d78(*(undefined4 *)(param_1 + 0x24));
            FUN_1000c6c24();
          }
          else if (iVar15 != iVar16) {
            (**(code **)(*plVar11 + 0x28))();
          }
          bVar6 = fVar17 < DAT_10184e074;
          *(bool *)(param_1 + 0x29) = !bVar6;
          plVar11 = *(long **)(param_1 + 0x18);
          if (bVar6) {
            pcVar14 = *(code **)(*plVar11 + 0x18);
            pfVar13 = (float *)&DAT_101dc1cb8;
            fVar17 = 0.0;
          }
          else {
            local_b0 = fVar19 / fVar17;
            fStack_ac = fVar20 / fVar17;
            pcVar14 = *(code **)(*plVar11 + 0x18);
          }
          (*pcVar14)(fVar17,plVar11,!bVar6,pfVar13);
          return;
        }
      }
    }
    else {
      *(byte *)(param_1 + 0x20) = bVar5 ^ 1;
      if ((uVar10 & 1) == 0) {
        iVar16 = 0;
        iVar15 = *(int *)(param_1 + 0x24);
        *(int *)(param_1 + 0x24) = 0;
        goto joined_r0x000100060fa0;
      }
    }
    if (cVar4 != '\0') {
      if (uVar10 == 0) {
        (**(code **)(*plVar11 + 0x20))(plVar11,*(undefined1 *)(param_1 + 0x29));
        return;
      }
      (**(code **)(*plVar11 + 0x28))();
      goto LAB_100060f04;
    }
  }
  if (uVar10 == 0) {
    return;
  }
LAB_100060f04:
  if ((bVar1 != uVar8) && (*(char *)(param_1 + 0x2d) != '\0')) {
    FUN_100061d78(0);
    FUN_1000c6cb4();
  }
  if ((bVar2 != uVar9) && (*(char *)(param_1 + 0x2b) != '\0')) {
    FUN_100061d78(1);
    FUN_1000c6cb4();
  }
  if (((bool)cVar3 != bVar6) && (*(char *)(param_1 + 0x2a) != '\0')) {
    FUN_100061d78(2);
    FUN_1000c6cb4();
  }
  return;
}




void FUN_100060fa8(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_10005ebfc();
  *puVar1 = &PTR_thunk_FUN_10005ec0c_10144d848;
  puVar1[2] = DAT_101dc1cb8;
  *(undefined4 *)(puVar1 + 3) = 0;
  *(undefined4 *)((long)puVar1 + 0x1b) = 0;
  return;
}




void FUN_100060fe4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10005ec0c();
  operator_delete(pvVar1);
  return;
}




void FUN_100060ff8(long param_1)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}




void FUN_100061008(undefined4 param_1,long param_2,int param_3,undefined8 *param_4)

{
  if (param_3 != 0) {
    *(undefined1 *)(param_2 + 0x1d) = 1;
  }
  *(undefined8 *)(param_2 + 0x10) = *param_4;
  *(undefined4 *)(param_2 + 0x18) = param_1;
  return;
}




void FUN_100061024(long param_1)

{
  *(undefined2 *)(param_1 + 0x1c) = 0;
  return;
}




void FUN_10006102c(long param_1)

{
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  return;
}




long FUN_10006103c(float param_1,float param_2,undefined8 param_3,float *param_4,undefined8 param_5,
                  int param_6)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_728;
  float local_724;
  float local_720 [4];
  float local_710;
  float fStack_70c;
  float local_708;
  float local_700;
  float local_6fc;
  float fStack_6f8;
  long local_6f0 [200];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1003a6ce4(param_3,local_6f0,200,0);
  FUN_100345b68(param_5,&local_710,0);
  lVar5 = 0;
  if (uVar3 != 0) {
    uVar7 = (ulong)uVar3;
    plVar8 = local_6f0;
    local_728 = 3.4028235e+38;
    local_724 = 3.4028235e+38;
    do {
      lVar6 = *plVar8;
      FUN_100345b68(lVar6,&local_700,0);
      uVar1 = DAT_101dc3960;
      fVar11 = DAT_101dc38a0;
      if (param_6 == 0) {
        fVar16 = 0.0;
        fVar17 = param_2 * param_2;
      }
      else {
        fVar16 = *(float *)(*(long *)(lVar6 + 0x38) + 100);
        fVar16 = ((*(float *)(lVar6 + 0x2e8) + fVar16) * *(float *)(*(long *)(lVar6 + 0x38) + 0x68))
                 / fVar16;
        fVar17 = (fVar16 + param_2) * (fVar16 + param_2);
      }
      if (((local_700 - local_710) * (local_700 - local_710) +
           (local_6fc - fStack_70c) * (local_6fc - fStack_70c) +
           (fStack_6f8 - local_708) * (fStack_6f8 - local_708) <= fVar17) &&
         (fVar17 = (local_700 - *param_4) * (local_700 - *param_4) +
                   (local_6fc - param_4[1]) * (local_6fc - param_4[1]) +
                   (fStack_6f8 - param_4[2]) * (fStack_6f8 - param_4[2]),
         fVar17 <= (fVar16 + param_1) * (fVar16 + param_1))) {
        lVar4 = *(long *)(lVar6 + 0x40);
        fVar15 = *(float *)(lVar4 + 0x308);
        fVar16 = *(float *)(lVar4 + 0x38);
        fVar13 = *(float *)(lVar4 + 0xec);
        fVar14 = *(float *)(lVar4 + 0x254);
        fVar12 = *(float *)(lVar4 + 0x1a0);
        uVar3 = *(uint *)(lVar6 + 0x2f4);
        if (lVar5 == 0) {
          bVar2 = false;
        }
        else {
          FUN_100345b68(lVar5,local_720,0);
          fVar9 = (float)*(undefined8 *)(param_4 + 1);
          fVar10 = (float)((ulong)*(undefined8 *)(param_4 + 1) >> 0x20);
          bVar2 = ((float)local_720._4_8_ - fVar9) * (local_6fc - fVar9) +
                  (local_700 - *param_4) * (local_720[0] - *param_4) +
                  (SUB84(local_720._4_8_,4) - fVar10) * (fStack_6f8 - fVar10) < 0.0;
        }
        fVar9 = fVar17;
        if ((uVar3 & 1) != 0) {
          fVar10 = (float)NEON_fminnm(((fVar17 - DAT_10184e080) -
                                      (fVar17 - DAT_10184e080) * DAT_101d22fe0) /
                                      (DAT_10184e084 - DAT_10184e080) + DAT_101d22fe0,0x3f800000);
          fVar9 = DAT_101d22fe0;
          if (DAT_101d22fe0 <= fVar10) {
            fVar9 = fVar10;
          }
          fVar9 = fVar9 * fVar9 * fVar17;
        }
        fVar16 = fVar16 + fVar13 * (fVar14 + 1.0);
        NEON_fminnm(fVar16 + fVar16 * fVar12,uVar1);
        fVar15 = fVar15 / fVar11;
        if (fVar15 < 1.0) {
          fVar11 = (float)NEON_fminnm(fVar15,0x3f800000);
          fVar11 = DAT_101d22fe4 + fVar11 * (1.0 - DAT_101d22fe4);
          fVar16 = (float)NEON_fminnm(((fVar17 - DAT_10184e080) - (fVar17 - DAT_10184e080) * fVar11)
                                      / (DAT_10184e084 - DAT_10184e080) + fVar11,0x3f800000);
          if (fVar11 <= fVar16) {
            fVar11 = fVar16;
          }
          fVar9 = fVar11 * fVar11 * fVar9;
        }
        if (((bool)(bVar2 & fVar9 < local_724)) || ((!bVar2 && (fVar17 < local_728)))) {
          lVar5 = lVar6;
          local_728 = fVar17;
          local_724 = fVar9;
        }
      }
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_b0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar5;
}




float FUN_100061350(float param_1,float param_2)

{
  float fVar1;
  
  fVar1 = (float)FUN_1000e8c04();
  return fVar1 * param_2 * param_1;
}




undefined8 FUN_10006137c(void)

{
  undefined8 uVar1;
  int in_w3;
  
  if (in_w3 - 4U < 4 || in_w3 == 0) {
    uVar1 = FUN_100061398();
    return uVar1;
  }
  return 0;
}




long FUN_100061398(float param_1,float param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  int param_6)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  byte bVar13;
  long *plVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_s15;
  undefined4 local_944;
  undefined8 local_940;
  long lStack_938;
  long local_930;
  byte local_928;
  undefined2 local_927;
  undefined1 local_925;
  float local_924;
  float fStack_920;
  float local_91c;
  undefined4 local_918;
  undefined8 local_910;
  undefined8 uStack_908;
  long lStack_900;
  undefined8 uStack_8f8;
  undefined8 local_8f0;
  undefined8 uStack_8e8;
  undefined8 local_8e0;
  long lStack_8d8;
  long local_8d0;
  byte local_8c8;
  undefined2 local_8c7;
  undefined1 local_8c5;
  float local_8c4;
  float fStack_8c0;
  float local_8bc;
  undefined4 local_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  long lStack_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 local_880;
  long lStack_878;
  long local_870;
  byte local_868;
  undefined2 local_867;
  undefined1 local_865;
  float local_864;
  float local_860;
  float local_85c;
  undefined4 local_858;
  undefined8 local_850;
  undefined8 uStack_848;
  long lStack_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 local_820;
  long lStack_818;
  long local_810;
  byte local_808;
  undefined2 local_807;
  undefined1 local_805;
  float local_804;
  float local_800;
  float local_7fc;
  undefined4 local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  long lStack_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 local_7c0;
  long lStack_7b8;
  long local_7b0;
  byte local_7a8;
  undefined2 local_7a7;
  undefined1 local_7a5;
  float local_7a4;
  float local_7a0;
  float local_79c;
  undefined4 local_798;
  undefined8 local_790;
  undefined8 uStack_788;
  long lStack_780;
  undefined8 uStack_778;
  undefined8 local_770;
  undefined8 uStack_768;
  float local_758;
  float local_754;
  float local_750;
  undefined8 local_748;
  float fStack_740;
  undefined4 uStack_73c;
  long local_738;
  byte local_730;
  undefined1 uStack_72f;
  undefined1 local_72e;
  undefined1 local_72d;
  float local_72c;
  float local_728;
  float fStack_724;
  undefined4 uStack_720;
  undefined4 uStack_71c;
  undefined2 local_718;
  undefined1 local_716;
  undefined8 local_710;
  undefined8 uStack_708;
  long local_6f8 [200];
  long local_b8;
  
  local_b8 = *(long *)PTR____stack_chk_guard_101444218;
  uVar3 = FUN_1003a6ce4(param_3,local_6f8,200,0);
  local_710 = 0;
  uStack_708 = (ulong)uStack_708._4_4_ << 0x20;
  local_718 = 0;
  fVar16 = 3.4028235e+38;
  local_748 = 0;
  fStack_740 = 0.0;
  local_730 = 0;
  uStack_72f = 0;
  local_72e = 0;
  local_72c = 3.4028235e+38;
  fStack_724 = 3.4028235e+38;
  uStack_720 = 0;
  FUN_100345b68(param_4,&local_758,0);
  lVar10 = 0;
  if (uVar3 != 0) {
    bVar13 = 0;
    local_944 = 0;
    uVar12 = (ulong)uVar3;
    plVar14 = local_6f8;
    fVar17 = fVar16;
    do {
      lVar11 = *plVar14;
      local_730 = *(byte *)(lVar11 + 0x2f4) & 1;
      local_738 = lVar11;
      iVar4 = FUN_100345bbc(lVar11);
      iVar5 = FUN_100345bbc(param_4);
      uStack_72f = iVar4 != iVar5;
      FUN_100345b68(lVar11,&local_748,0);
      fStack_724 = 0.0;
      if (param_5 != 0) {
        fStack_724 = *(float *)(*(long *)(lVar11 + 0x38) + 100);
        fStack_724 = ((*(float *)(lVar11 + 0x2e8) + fStack_724) *
                     *(float *)(*(long *)(lVar11 + 0x38) + 0x68)) / fStack_724;
      }
      fStack_724 = SQRT(((float)local_748 - local_758) * ((float)local_748 - local_758) +
                        (local_748._4_4_ - local_754) * (local_748._4_4_ - local_754) +
                        (fStack_740 - local_750) * (fStack_740 - local_750)) - fStack_724;
      if (fStack_724 <= 0.0) {
        fStack_724 = 0.0;
      }
      fStack_724 = fStack_724 * fStack_724;
      local_72e = fStack_724 < param_1 * param_1;
      lVar8 = *(long *)(lVar11 + 0x40);
      local_728 = *(float *)(lVar8 + 0x308);
      fVar15 = *(float *)(lVar8 + 0x38) +
               *(float *)(lVar8 + 0xec) * (*(float *)(lVar8 + 0x254) + 1.0);
      NEON_fminnm(fVar15 + fVar15 * *(float *)(lVar8 + 0x1a0),DAT_101dc3960);
      local_72c = local_728 / DAT_101dc38a0;
      if (param_6 == 7) {
        uVar6 = FUN_1003e2814(lVar11);
        uStack_720 = FUN_1003a34a4(uVar6,DAT_101d2c948);
      }
      else {
        uStack_720 = 0;
      }
      if (param_2 * param_2 < fStack_724) goto switchD_100061618_caseD_1;
      if (lVar10 == 0) goto LAB_1000617e0;
      switch(param_6) {
      case 0:
        iVar4 = FUN_100316180(0x1e);
        if (iVar4 == 0) {
          uStack_788 = CONCAT44(uStack_73c,fStack_740);
          uStack_778 = CONCAT44(local_72c,
                                CONCAT13(local_72d,
                                         CONCAT12(local_72e,CONCAT11(uStack_72f,local_730))));
          local_790 = local_748;
          lStack_780 = local_738;
          uStack_768 = CONCAT44(uStack_71c,uStack_720);
          local_770 = CONCAT44(fStack_724,local_728);
          lStack_7b8 = uStack_708;
          local_7c0 = local_710;
          local_7a7 = local_718;
          local_7a5 = local_716;
          local_798 = local_944;
          local_7b0 = lVar10;
          local_7a8 = bVar13;
          local_7a4 = fVar17;
          local_7a0 = unaff_s15;
          local_79c = fVar16;
          iVar4 = FUN_100061938(&local_790,&local_7c0);
          if (iVar4 != 0) goto LAB_1000617e0;
        }
        else {
          if (iVar4 == 1) {
            uStack_7e8 = CONCAT44(uStack_73c,fStack_740);
            uStack_7d8 = CONCAT44(local_72c,
                                  CONCAT13(local_72d,
                                           CONCAT12(local_72e,CONCAT11(uStack_72f,local_730))));
            local_7f0 = local_748;
            lStack_7e0 = local_738;
            uStack_7c8 = CONCAT44(uStack_71c,uStack_720);
            local_7d0 = CONCAT44(fStack_724,local_728);
            lStack_818 = uStack_708;
            local_820 = local_710;
            local_807 = local_718;
            local_805 = local_716;
            local_7f8 = local_944;
            local_810 = lVar10;
            local_808 = bVar13;
            local_804 = fVar17;
            local_800 = unaff_s15;
            local_7fc = fVar16;
            uVar7 = FUN_1000619b8(&local_7f0,&local_820);
            goto joined_r0x0001000616e0;
          }
          if (iVar4 == 2) {
            bVar9 = bVar13;
            if (local_730 != 0) {
              if (bVar13 == 0) goto LAB_1000617e0;
              bVar9 = 1;
            }
            if ((local_730 == bVar9) &&
               (((fStack_724 < fVar16 && (0.5 <= ABS(fStack_724 - fVar16))) ||
                ((ABS(fStack_724 - fVar16) < 0.5 && (local_72c < fVar17)))))) goto LAB_1000617e0;
          }
        }
        break;
      case 4:
        uStack_848 = CONCAT44(uStack_73c,fStack_740);
        uStack_838 = CONCAT44(local_72c,
                              CONCAT13(local_72d,CONCAT12(local_72e,CONCAT11(uStack_72f,local_730)))
                             );
        local_850 = local_748;
        lStack_840 = local_738;
        uStack_828 = CONCAT44(uStack_71c,uStack_720);
        local_830 = CONCAT44(fStack_724,local_728);
        lStack_878 = uStack_708;
        local_880 = local_710;
        local_867 = local_718;
        local_865 = local_716;
        local_858 = local_944;
        local_870 = lVar10;
        local_868 = bVar13;
        local_864 = fVar17;
        local_860 = unaff_s15;
        local_85c = fVar16;
        uVar7 = FUN_100061a38(&local_850,&local_880);
joined_r0x0001000616e0:
        if ((uVar7 & 1) == 0) break;
        goto LAB_1000617e0;
      case 5:
        uStack_8a8 = CONCAT44(uStack_73c,fStack_740);
        uStack_898 = CONCAT44(local_72c,
                              CONCAT13(local_72d,CONCAT12(local_72e,CONCAT11(uStack_72f,local_730)))
                             );
        local_8b0 = local_748;
        lStack_8a0 = local_738;
        uStack_888 = CONCAT44(uStack_71c,uStack_720);
        local_890 = CONCAT44(fStack_724,local_728);
        lStack_8d8 = uStack_708;
        local_8e0 = local_710;
        local_8c7 = local_718;
        local_8c5 = local_716;
        local_8b8 = local_944;
        local_8d0 = lVar10;
        local_8c8 = bVar13;
        local_8c4 = fVar17;
        fStack_8c0 = unaff_s15;
        local_8bc = fVar16;
        uVar7 = FUN_100061ab8(&local_8b0,&local_8e0);
        goto joined_r0x0001000617dc;
      case 6:
        bVar9 = bVar13;
        if (local_730 != 0) {
          if (bVar13 == 0) goto LAB_1000617e0;
          bVar9 = 1;
        }
        if (local_730 == bVar9) {
          fVar15 = ABS(fStack_724 - fVar16);
          bVar1 = true;
          bVar2 = false;
          if (fStack_724 < fVar16) {
            bVar1 = false;
            bVar2 = true;
            if (!NAN(fVar15)) {
              bVar1 = fVar15 < 0.5;
              bVar2 = false;
            }
          }
          if (bVar1 != bVar2) {
            bVar1 = false;
            bVar2 = false;
            if (fVar15 < 0.5) {
              bVar1 = false;
              bVar2 = true;
              if (!NAN(local_72c) && !NAN(fVar17)) {
                bVar1 = local_72c < fVar17;
                bVar2 = false;
              }
            }
            if (bVar1 == bVar2) break;
          }
          goto LAB_1000617e0;
        }
        break;
      case 7:
        uStack_908 = CONCAT44(uStack_73c,fStack_740);
        uStack_8f8 = CONCAT44(local_72c,
                              CONCAT13(local_72d,CONCAT12(local_72e,CONCAT11(uStack_72f,local_730)))
                             );
        local_910 = local_748;
        lStack_900 = local_738;
        uStack_8e8 = CONCAT44(uStack_71c,uStack_720);
        local_8f0 = CONCAT44(fStack_724,local_728);
        lStack_938 = uStack_708;
        local_940 = local_710;
        local_927 = local_718;
        local_925 = local_716;
        local_918 = local_944;
        local_930 = lVar10;
        local_928 = bVar13;
        local_924 = fVar17;
        fStack_920 = unaff_s15;
        local_91c = fVar16;
        uVar7 = FUN_100061b5c(&local_910,&local_940);
joined_r0x0001000617dc:
        if ((uVar7 & 1) != 0) {
LAB_1000617e0:
          uStack_708 = CONCAT44(uStack_73c,fStack_740);
          local_710 = local_748;
          local_718 = CONCAT11(local_72e,uStack_72f);
          local_716 = local_72d;
          local_944 = uStack_720;
          lVar10 = local_738;
          fVar16 = fStack_724;
          fVar17 = local_72c;
          unaff_s15 = local_728;
          bVar13 = local_730;
        }
      }
switchD_100061618_caseD_1:
      plVar14 = plVar14 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 != local_b8) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar10;
}




undefined1 FUN_100061938(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_2 + 0x1a);
  if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x1a) == cVar2) {
    cVar2 = *(char *)(param_2 + 0x18);
    if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
      return 1;
    }
    if ((*(char *)(param_1 + 0x18) == cVar2) &&
       ((*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c) ||
        ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
         (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) {
      return 1;
    }
  }
  return 0;
}




undefined1 FUN_1000619b8(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_2 + 0x1a);
  if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x1a) == cVar2) {
    cVar2 = *(char *)(param_2 + 0x18);
    if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
      return 1;
    }
    if ((*(char *)(param_1 + 0x18) == cVar2) &&
       ((*(float *)(param_1 + 0x20) < *(float *)(param_2 + 0x20) ||
        ((*(float *)(param_1 + 0x20) == *(float *)(param_2 + 0x20) &&
         (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) {
      return 1;
    }
  }
  return 0;
}




undefined1 FUN_100061a38(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_2 + 0x18);
  if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x18) == cVar2) {
    cVar2 = *(char *)(param_2 + 0x1a);
    if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
      return 1;
    }
    if ((*(char *)(param_1 + 0x1a) == cVar2) &&
       ((*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c) ||
        ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
         (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) {
      return 1;
    }
  }
  return 0;
}




undefined1 FUN_100061ab8(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = *(char *)(param_2 + 0x19);
  if ((*(char *)(param_1 + 0x19) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
    return 1;
  }
  if (*(char *)(param_1 + 0x19) == cVar2) {
    cVar2 = *(char *)(param_2 + 0x1a);
    if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
      return 1;
    }
    if (*(char *)(param_1 + 0x1a) == cVar2) {
      cVar2 = *(char *)(param_2 + 0x18);
      if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
        return 1;
      }
      if ((*(char *)(param_1 + 0x18) == cVar2) &&
         ((*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c) ||
          ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
           (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) {
        return 1;
      }
    }
  }
  return 0;
}




undefined1 FUN_100061b5c(long param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  
  if (*(uint *)(param_2 + 0x28) < *(uint *)(param_1 + 0x28)) {
LAB_100061b6c:
    uVar3 = 1;
  }
  else {
    if (*(uint *)(param_1 + 0x28) == *(uint *)(param_2 + 0x28)) {
      cVar2 = *(char *)(param_2 + 0x18);
      if ((*(char *)(param_1 + 0x18) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
        return 1;
      }
      if (*(char *)(param_1 + 0x18) == cVar2) {
        cVar2 = *(char *)(param_2 + 0x1a);
        if ((*(char *)(param_1 + 0x1a) != '\0') && (bVar1 = cVar2 == '\0', cVar2 = '\x01', bVar1)) {
          return 1;
        }
        if ((*(char *)(param_1 + 0x1a) == cVar2) &&
           ((*(float *)(param_1 + 0x1c) < *(float *)(param_2 + 0x1c) ||
            ((*(float *)(param_1 + 0x1c) == *(float *)(param_2 + 0x1c) &&
             (*(float *)(param_1 + 0x24) < *(float *)(param_2 + 0x24))))))) goto LAB_100061b6c;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100061bf0(void)

{
  uRam0000000101dc3968 = 0x7f7fffff7f7fffff;
  _DAT_101dc3960 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3978 = 0x7f7fffff7f7fffff;
  _DAT_101dc3970 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3988 = 0x7f7fffff7f7fffff;
  _DAT_101dc3980 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3998 = 0x7f7fffff7f7fffff;
  _DAT_101dc3990 = 0x7f7fffff7f7fffff;
  DAT_101dc39a0 = 0x7f7fffff;
  DAT_101dc39a4 = 0x7f7fffff;
  DAT_101dc39a8 = 0x7f7fffff;
  DAT_101dc39ac = 0x3f800000;
  uRam0000000101dc39b8 = 0x7f7fffff7f7fffff;
  _DAT_101dc39b0 = 0x7f7fffff7f7fffff;
  DAT_101dc39c0 = 0x7f7fffff;
  DAT_101dc39c4 = 0x3eb33333;
  uRam0000000101dc39d0 = 0x7f7fffff7f7fffff;
  _DAT_101dc39c8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc39e0 = 0x7f7fffff7f7fffff;
  _DAT_101dc39d8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc39f0 = 0x7f7fffff7f7fffff;
  _DAT_101dc39e8 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3a00 = 0x7f7fffff7f7fffff;
  _DAT_101dc39f8 = 0x7f7fffff7f7fffff;
  DAT_101dc3a08 = 0x7f7fffff;
  DAT_101dc3a0c = 0x7f7fffff;
  DAT_101dc3a10 = 0x7f7fffff;
  uRam0000000101dc38a8 = 0xff7fffffff7fffff;
  _DAT_101dc38a0 = 0xff7fffffff7fffff;
  DAT_101dc38b0 = 0;
  DAT_101dc38b8 = 0;
  uRam0000000101dc38c4 = 0xff7fffffff7fffff;
  _DAT_101dc38bc = 0xff7fffffff7fffff;
  DAT_101dc38cc = 0xff7fffff;
  DAT_101dc38d0 = 0xff7fffff;
  DAT_101dc38d4 = NEON_fmov(0xbf800000,4);
  DAT_101dc38dc = 0x3f000000;
  DAT_101dc38e0 = 0;
  DAT_101dc38e8 = 0;
  uRam0000000101dc38f8 = 0xff7fffffff7fffff;
  _DAT_101dc38f0 = 0xff7fffffff7fffff;
  uRam0000000101dc3908 = 0xff7fffffff7fffff;
  _DAT_101dc3900 = 0xff7fffffff7fffff;
  uRam0000000101dc3918 = 0xff7fffffff7fffff;
  _DAT_101dc3910 = 0xff7fffffff7fffff;
  uRam0000000101dc3928 = 0xbf800000bf800000;
  _DAT_101dc3920 = 0xbf80000000000000;
  DAT_101dc3930 = 0xbf800000;
  DAT_101dc3934 = 0xff7fffff;
  DAT_101dc3938 = 0xff7fffff;
  DAT_101dc393c = 0xff7fffff;
  DAT_101dc3940 = 0;
  DAT_101dc3944 = 0xff7fffff;
  DAT_101dc3948 = 0;
  DAT_101dc3950 = 0;
  DAT_101d22fe0 = 1.0 / DAT_10184e088;
  DAT_101d22fe4 = 1.0 / DAT_10184e08c;
  return;
}




undefined8 FUN_100061ce8(void)

{
  long lVar1;
  
  lVar1 = FUN_100057f34();
  return *(undefined8 *)(lVar1 + 0x150);
}




undefined8 FUN_100061d00(void)

{
  long lVar1;
  
  lVar1 = FUN_100057f34();
  return *(undefined8 *)(lVar1 + 0x160);
}




undefined8 FUN_100061d18(void)

{
  long lVar1;
  
  lVar1 = FUN_100057f34();
  return *(undefined8 *)(lVar1 + 0x158);
}




long FUN_100061d30(void)

{
  long lVar1;
  
  lVar1 = FUN_100057f34();
  return lVar1 + 0x1b8;
}




long FUN_100061d48(void)

{
  long lVar1;
  
  lVar1 = FUN_100057f34();
  return lVar1 + 0x168;
}




long FUN_100061d60(void)

{
  long lVar1;
  
  lVar1 = FUN_100057f34();
  return lVar1 + 0x1f8;
}




void FUN_100061d78(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100057f34();
  FUN_10005a914(uVar1,param_1);
  return;
}




void FUN_100061d9c(void)

{
  FUN_100057f34();
  FUN_10005a930();
  return;
}




long FUN_100061db0(void)

{
  long lVar1;
  
  lVar1 = FUN_100057f34();
  return lVar1 + 0x260;
}




long FUN_100061dc8(void)

{
  int iVar1;
  long lVar2;
  
  iVar1 = FUN_100057f40();
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_100057f34();
    lVar2 = lVar2 + 0x260;
  }
  return lVar2;
}




undefined1 FUN_100061df0(void)

{
  long lVar1;
  
  lVar1 = FUN_100057f34();
  return *(undefined1 *)(lVar1 + 0x37f);
}




void FUN_100061e08(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  undefined8 **local_48 [2];
  char local_31;
  
  FUN_10001549c(local_48,"icon_hero_");
  std::string::append((char *)local_48);
  pppuVar1 = (undefined8 ***)local_48[0];
  if (-1 < local_31) {
    pppuVar1 = local_48;
  }
  FUN_100652cdc(param_1,pppuVar1);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return;
}




void FUN_100061e84(void)

{
  DAT_101dc3a14 = 0xff;
  DAT_101dc3a16 = 0xffff;
  DAT_101dc3a18 = 0xffff;
  DAT_101dc3a1a = 0xffbc9c44;
  DAT_101dc3a1e = 0xff1166f2;
  DAT_101dc3a22 = 0xffe0e0e0;
  DAT_101dc3a26 = 0xffa0a0a0;
  DAT_101dc3a2a = 0xff8c8c8c;
  DAT_101dc3a2e = 0xff322213;
  DAT_101dc3a32 = 0xff091911;
  DAT_101dc3a36 = 0xff170c19;
  DAT_101dc3a3a = 0xff241a14;
  DAT_101dc3a3e = 0xff14171c;
  DAT_101dc3a42 = 0xff221911;
  DAT_101dc3a46 = 0xff1a1416;
  DAT_101dc3a4a = 0xff121414;
  DAT_101dc3a4e = 0xff1a1809;
  DAT_101dc3a52 = 0xff141414;
  DAT_101dc3a56 = 0xff141414;
  DAT_101dc3a5a = 0xff2929c0;
  DAT_101dc3a5e = 0xff283082;
  DAT_101dc3a62 = 0xff5262cc;
  DAT_101dc3a66 = 0xff283082;
  DAT_101dc3a6a = 0xff5262cc;
  DAT_101dc3a6e = 0xff745c42;
  DAT_101dc3a72 = 0xff184155;
  DAT_101dc3a76 = 0xff92665e;
  DAT_101dc3a7a = 0xffbc9c44;
  DAT_101dc3a7e = 0xffbbae56;
  DAT_101dc3a82 = 0xff8b7b01;
  DAT_101dc3a86 = 0xff90b3ef;
  DAT_101dc3a8a = 0xff728ebe;
  DAT_101dc3a8e = 0xff19459d;
  DAT_101dc3a92 = 0xff9d877b;
  DAT_101dc3a96 = 0xffcbb1a3;
  DAT_101dc3a9a = 0xff3f6fb5;
  DAT_101dc3a9e = 0xffc5c5c5;
  DAT_101dc3aa2 = 0xff4fc1f1;
  DAT_101dc3aa6 = 0xff606060;
  DAT_101dc3aaa = 0xffc5ff7b;
  DAT_101dc3aae = 0xff5271eb;
  DAT_101dc3ab2 = 0xfffae076;
  DAT_101dc3ab6 = 0xff3ac8f6;
  DAT_101dc3aba = 0xffaaaaaa;
  DAT_101dc3abe = 0xffe19400;
  DAT_101dc3ac2 = 0xffe19400;
  DAT_101dc3ac6 = 0xffe550b2;
  DAT_101dc3aca = 0xfff22ae8;
  DAT_101dc3ace = 0xff005ae1;
  DAT_101dc3ad2 = 0xff1addfa;
  DAT_101dc3ad6 = 0xff2424b3;
  DAT_101dc3ada = 0xff2424b3;
  DAT_101dc3ade = 0xff646464;
  DAT_101dc3ae2 = 0xff92665e;
  DAT_101dc3ae6 = 0xff646037;
  DAT_101dc3aec = 0xffffffff;
  DAT_101dc3af0 = 0xff1111a1;
  DAT_101dc3af4 = 0xff321ee1;
  DAT_101dc3af8 = 0xffc8c8c8;
  DAT_101dc3afc = 0xff321ee1;
  DAT_101dc3b00 = 0xff7fe801;
  DAT_101dc3b04 = 0xffffffff;
  DAT_101dc3b08 = 0xff6259b3;
  DAT_101dc3b0c = 0xff506e73;
  DAT_101dc3b10 = 0xff9dbf86;
  DAT_101dc3b14 = 0xffa35244;
  DAT_101dc3b18 = 0xffca828e;
  DAT_101dc3b1c = 0xffa6a6a6;
  DAT_101dc3b20 = 0xffa6a6a6;
  DAT_101dc3b24 = 0xffffffff;
  DAT_101dc3b28 = 0xff88ea2f;
  DAT_101dc3b2c = 0xff8c8c8c;
  DAT_101dc3b30 = 0xffffb400;
  DAT_101dc3b34 = 0xffff00ff;
  DAT_101dc3b38 = 0xff00aded;
  DAT_101dc3b3c = 0xff33d3ff;
  DAT_101dc3b40 = 0xff7fe801;
  DAT_101dc3b44 = 0xff282828;
  DAT_101dc3b48 = 0xfff0f0f0;
  DAT_101dc3b4c = 0xffa4781e;
  DAT_101dc3b50 = 0xffa6654b;
  DAT_101dc3b54 = 0xff93435b;
  DAT_101dc3b58 = 0xff387f9c;
  DAT_101dc3b5c = 0xffa3781e;
  DAT_101dc3b60 = 0xffffd18a;
  DAT_101dc3b64 = 0xffff61f7;
  DAT_101dc3b68 = 0xff5de1f2;
  DAT_101dc3b6c = 0xff80eaff;
  DAT_101dc3b70 = 0xff32e00e;
  DAT_101dc3b74 = 0xff5a3c10;
  DAT_101dc3b78 = 0xff330b03;
  DAT_101dc3b7c = 0xff33031d;
  DAT_101dc3b80 = 0xff032433;
  DAT_101dc3b84 = 0xff9e8e8d;
  DAT_101d22fe8 = 0xc0000000;
  DAT_101d22fec = 0xff3ac8f6;
  DAT_101d22ff0 = PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288;
  DAT_101d22ff8 = PTR_s_build___Fonts_Brandon_Bold_30_St_10184e278;
  DAT_101d23000 = PTR_s_build___Fonts_NorthwoodHigh_Regu_10184e288;
  DAT_101d23008 = PTR_s_build___Fonts_Brandon_Bold_40_fo_10184e230;
  DAT_101d23010 = 0xffffffff;
  DAT_101d23014 = 0xc0000000;
  return;
}




void FUN_1000625b0(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,long *param_8,long param_9,long param_10,
                  long *param_11,undefined1 *param_12,int param_13,int param_14)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulong uVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float extraout_s17;
  float extraout_s17_00;
  float extraout_s17_01;
  float extraout_s17_02;
  float fVar24;
  float fVar25;
  float fVar26;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  fVar21 = (float)(int)(*(float *)(param_9 + 0x10) * fVar21);
  if (fVar21 <= 0.0) {
    return;
  }
  fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  fVar22 = (float)(int)(*(float *)(param_9 + 0x14) * fVar22);
  if (fVar22 < 0.0) {
    return;
  }
  fVar15 = (float)NEON_fminnm(param_3 * 360.0,0x43b40000);
  fVar19 = fVar21 * param_6;
  fVar1 = fVar22 * param_7;
  param_1 = param_1 - (float)(int)(fVar21 * param_4);
  param_2 = param_2 - (float)(int)(fVar22 * param_5);
  fVar14 = fVar15 * -0.0055555557;
  local_88 = (float)(int)(param_1 + fVar19);
  fStack_84 = (float)(int)(param_2 + fVar1);
  fVar12 = (float)___sincosf_stret(fVar14 * 3.1415927);
  local_a0 = (float)(int)(param_1 + fVar19) - fVar12 * 9999.0;
  fStack_9c = (float)(int)(param_2 + fVar1) - fVar14 * 9999.0;
  fVar23 = param_1 + fVar21;
  local_a8 = fVar23;
  local_a4 = param_2;
  local_90 = param_1;
  fStack_8c = param_2;
  uVar7 = FUN_1010d0068(&local_88,&local_a0,&local_90,&local_a8,&local_98);
  fVar14 = param_2 + fVar22;
  fVar12 = extraout_s17;
  if (((((uVar7 & 1) == 0) &&
       (local_a8 = fVar23, local_a4 = fVar14, local_90 = fVar23, fStack_8c = param_2,
       uVar7 = FUN_1010d0068(&local_88,&local_a0,&local_90,&local_a8,&local_98),
       fVar12 = extraout_s17_00, (uVar7 & 1) == 0)) &&
      (local_a8 = param_1, local_a4 = fVar14, local_90 = fVar23, fStack_8c = fVar14,
      uVar7 = FUN_1010d0068(&local_88,&local_a0,&local_90,&local_a8,&local_98),
      fVar12 = extraout_s17_01, (uVar7 & 1) == 0)) &&
     (local_a8 = param_1, local_a4 = param_2, local_90 = param_1, fStack_8c = fVar14,
     iVar6 = FUN_1010d0068(&local_88,&local_a0,&local_90,&local_a8,&local_98),
     fVar12 = extraout_s17_02, iVar6 == 0)) {
    return;
  }
  fVar16 = fVar21 - fVar21 * param_6;
  fVar18 = fVar22 - fVar22 * param_7;
  fVar23 = 0.0;
  if (param_13 == 0) {
    fVar23 = 1.0;
  }
  fVar20 = 1.0;
  if (param_13 == 0) {
    fVar20 = 0.0;
  }
  fVar13 = 0.0;
  if (param_14 == 0) {
    fVar13 = 1.0;
  }
  fVar17 = 1.0;
  if (param_14 == 0) {
    fVar17 = 0.0;
  }
  if (fVar15 <= 315.0) {
    if (225.0 < fVar15) {
      pfVar8 = (float *)*param_8;
      goto LAB_100062994;
    }
    if (135.0 < fVar15) {
      pfVar11 = &local_98;
      pfVar8 = (float *)*param_8;
      fVar12 = fStack_94;
      goto LAB_100062b74;
    }
    pfVar10 = &local_98;
    pfVar8 = (float *)*param_8;
    if (fVar15 <= 45.0) goto LAB_100062f28;
  }
  else {
    fVar12 = fStack_84 - fVar1;
    fVar2 = (local_98 - param_1) / fVar21;
    fVar26 = 1.0 - fVar2;
    if (param_13 == 0) {
      fVar26 = fVar2;
    }
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
    pfVar8 = (float *)*param_8;
    *pfVar8 = local_88;
    pfVar8[1] = fStack_84;
    pfVar8[2] = 0.0;
    *(undefined1 *)(pfVar8 + 3) = *param_12;
    *(undefined1 *)((long)pfVar8 + 0xd) = param_12[1];
    *(undefined1 *)((long)pfVar8 + 0xe) = param_12[2];
    *(undefined1 *)((long)pfVar8 + 0xf) = param_12[3];
    pfVar8[4] = (fVar25 + param_6 * fVar5) / fVar2;
    pfVar8[5] = 1.0 - (fVar4 + param_7 * fVar24) / fVar3;
    lVar9 = *param_8;
    *(undefined8 *)(lVar9 + 0x18) = CONCAT44(fStack_94,local_98);
    *param_8 = lVar9 + 0x18;
    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
    fVar24 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_12;
    *(undefined1 *)(lVar9 + 0x25) = param_12[1];
    *(undefined1 *)(lVar9 + 0x26) = param_12[2];
    *(undefined1 *)(lVar9 + 0x27) = param_12[3];
    *(float *)(lVar9 + 0x28) = (fVar3 + fVar4 * fVar26) / fVar24;
    *(float *)(lVar9 + 0x2c) = 1.0 - (fVar25 + fVar5 * fVar13) / fVar2;
    lVar9 = *param_8;
    *param_8 = lVar9 + 0x18;
    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
    fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
    *(float *)(lVar9 + 0x18) = local_88 - fVar19;
    *(float *)(lVar9 + 0x1c) = fVar12;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_12;
    *(undefined1 *)(lVar9 + 0x25) = param_12[1];
    *(undefined1 *)(lVar9 + 0x26) = param_12[2];
    *(undefined1 *)(lVar9 + 0x27) = param_12[3];
    *(float *)(lVar9 + 0x28) = (fVar3 + fVar4 * fVar20) / fVar2;
    *(float *)(lVar9 + 0x2c) = 1.0 - (fVar25 + fVar5 * fVar13) / fVar26;
    pfVar8 = (float *)(*param_8 + 0x18);
    *param_8 = (long)pfVar8;
    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
    local_98 = local_88 - fVar19;
LAB_100062994:
    if (fVar15 <= 315.0) {
      fVar12 = fStack_94;
    }
    fStack_8c = fStack_84 + fVar18;
    local_90 = local_88 - fVar19;
    fVar15 = (fVar14 - fVar12) / fVar22;
    fVar2 = 1.0 - fVar15;
    if (param_14 == 0) {
      fVar2 = fVar15;
    }
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
    fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
    *pfVar8 = local_88;
    pfVar8[1] = fStack_84;
    pfVar8[2] = 0.0;
    *(undefined1 *)(pfVar8 + 3) = *param_12;
    *(undefined1 *)((long)pfVar8 + 0xd) = param_12[1];
    *(undefined1 *)((long)pfVar8 + 0xe) = param_12[2];
    *(undefined1 *)((long)pfVar8 + 0xf) = param_12[3];
    pfVar8[4] = (fVar3 + param_6 * fVar4) / fVar15;
    pfVar8[5] = 1.0 - (fVar25 + param_7 * fVar5) / fVar26;
    lVar9 = *param_8;
    *(float *)(lVar9 + 0x18) = local_98;
    *param_8 = lVar9 + 0x18;
    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
    fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
    *(float *)(lVar9 + 0x1c) = fVar12;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_12;
    *(undefined1 *)(lVar9 + 0x25) = param_12[1];
    *(undefined1 *)(lVar9 + 0x26) = param_12[2];
    *(undefined1 *)(lVar9 + 0x27) = param_12[3];
    *(float *)(lVar9 + 0x28) = (fVar3 + fVar4 * fVar20) / fVar15;
    *(float *)(lVar9 + 0x2c) = 1.0 - (fVar25 + fVar5 * fVar2) / fVar26;
    lVar9 = *param_8;
    *param_8 = lVar9 + 0x18;
    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
    fVar25 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
    fVar12 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
    fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
    *(float *)(lVar9 + 0x18) = local_88 - fVar19;
    *(float *)(lVar9 + 0x1c) = fStack_8c;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_12;
    *(undefined1 *)(lVar9 + 0x25) = param_12[1];
    *(undefined1 *)(lVar9 + 0x26) = param_12[2];
    *(undefined1 *)(lVar9 + 0x27) = param_12[3];
    *(float *)(lVar9 + 0x28) = (fVar15 + fVar26 * fVar20) / fVar25;
    *(float *)(lVar9 + 0x2c) = 1.0 - (fVar2 + fVar3 * fVar17) / fVar12;
    pfVar8 = (float *)(*param_8 + 0x18);
    *param_8 = (long)pfVar8;
    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
    pfVar11 = &local_90;
    fVar12 = fStack_8c;
LAB_100062b74:
    pfVar10 = &local_90;
    fVar15 = *pfVar11;
    local_90 = local_88 + fVar16;
    fStack_94 = fStack_84 + fVar18;
    fStack_8c = fStack_94;
    fVar20 = (fVar15 - param_1) / fVar21;
    fVar18 = 1.0 - fVar20;
    if (param_13 == 0) {
      fVar18 = fVar20;
    }
    fVar20 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
    fVar2 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
    fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
    *pfVar8 = local_88;
    pfVar8[1] = fStack_84;
    pfVar8[2] = 0.0;
    *(undefined1 *)(pfVar8 + 3) = *param_12;
    *(undefined1 *)((long)pfVar8 + 0xd) = param_12[1];
    *(undefined1 *)((long)pfVar8 + 0xe) = param_12[2];
    *(undefined1 *)((long)pfVar8 + 0xf) = param_12[3];
    pfVar8[4] = (fVar26 + param_6 * fVar25) / fVar20;
    pfVar8[5] = 1.0 - (fVar3 + param_7 * fVar4) / fVar2;
    lVar9 = *param_8;
    *(float *)(lVar9 + 0x18) = fVar15;
    *param_8 = lVar9 + 0x18;
    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
    fVar20 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
    *(float *)(lVar9 + 0x1c) = fVar12;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_12;
    *(undefined1 *)(lVar9 + 0x25) = param_12[1];
    *(undefined1 *)(lVar9 + 0x26) = param_12[2];
    *(undefined1 *)(lVar9 + 0x27) = param_12[3];
    *(float *)(lVar9 + 0x28) = (fVar25 + fVar26 * fVar18) / fVar15;
    *(float *)(lVar9 + 0x2c) = 1.0 - (fVar2 + fVar3 * fVar17) / fVar20;
    lVar9 = *param_8;
    *param_8 = lVar9 + 0x18;
    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
    fVar12 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
    fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
    fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
    fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
    fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
    fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
    *(float *)(lVar9 + 0x18) = local_90;
    *(float *)(lVar9 + 0x1c) = fStack_94;
    *(undefined4 *)(lVar9 + 0x20) = 0;
    *(undefined1 *)(lVar9 + 0x24) = *param_12;
    *(undefined1 *)(lVar9 + 0x25) = param_12[1];
    *(undefined1 *)(lVar9 + 0x26) = param_12[2];
    *(undefined1 *)(lVar9 + 0x27) = param_12[3];
    *(float *)(lVar9 + 0x28) = (fVar26 + fVar20 * fVar23) / fVar12;
    *(float *)(lVar9 + 0x2c) = 1.0 - (fVar18 + fVar2 * fVar17) / fVar15;
    pfVar8 = (float *)(*param_8 + 0x18);
    *param_8 = (long)pfVar8;
    *(int *)(param_8 + 1) = (int)param_8[1] + 1;
  }
  fVar15 = *pfVar10;
  local_90 = local_88 + fVar16;
  fStack_8c = fStack_84 - fVar1;
  fVar22 = (fVar14 - fStack_94) / fVar22;
  fVar12 = 1.0 - fVar22;
  if (param_14 == 0) {
    fVar12 = fVar22;
  }
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
  fVar17 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  *pfVar8 = local_88;
  pfVar8[1] = fStack_84;
  pfVar8[2] = 0.0;
  *(undefined1 *)(pfVar8 + 3) = *param_12;
  *(undefined1 *)((long)pfVar8 + 0xd) = param_12[1];
  *(undefined1 *)((long)pfVar8 + 0xe) = param_12[2];
  *(undefined1 *)((long)pfVar8 + 0xf) = param_12[3];
  pfVar8[4] = (fVar14 + param_6 * fVar18) / fVar22;
  pfVar8[5] = 1.0 - (fVar16 + param_7 * fVar20) / fVar17;
  lVar9 = *param_8;
  *(float *)(lVar9 + 0x18) = fVar15;
  *param_8 = lVar9 + 0x18;
  *(int *)(param_8 + 1) = (int)param_8[1] + 1;
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar20 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  *(float *)(lVar9 + 0x1c) = fStack_94;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined1 *)(lVar9 + 0x24) = *param_12;
  *(undefined1 *)(lVar9 + 0x25) = param_12[1];
  *(undefined1 *)(lVar9 + 0x26) = param_12[2];
  *(undefined1 *)(lVar9 + 0x27) = param_12[3];
  *(float *)(lVar9 + 0x28) = (fVar14 + fVar20 * fVar23) / fVar18;
  *(float *)(lVar9 + 0x2c) = 1.0 - (fVar15 + fVar16 * fVar12) / fVar22;
  lVar9 = *param_8;
  *param_8 = lVar9 + 0x18;
  *(int *)(param_8 + 1) = (int)param_8[1] + 1;
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  *(float *)(lVar9 + 0x18) = local_90;
  *(float *)(lVar9 + 0x1c) = fStack_8c;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined1 *)(lVar9 + 0x24) = *param_12;
  *(undefined1 *)(lVar9 + 0x25) = param_12[1];
  *(undefined1 *)(lVar9 + 0x26) = param_12[2];
  *(undefined1 *)(lVar9 + 0x27) = param_12[3];
  *(float *)(lVar9 + 0x28) = (fVar12 + fVar18 * fVar23) / fVar16;
  *(float *)(lVar9 + 0x2c) = 1.0 - (fVar14 + fVar15 * fVar13) / fVar22;
  pfVar8 = (float *)(*param_8 + 0x18);
  *param_8 = (long)pfVar8;
  *(int *)(param_8 + 1) = (int)param_8[1] + 1;
  pfVar10 = &local_90;
  fStack_94 = fStack_8c;
LAB_100062f28:
  fVar12 = *pfVar10;
  fVar21 = ((fVar12 + fVar19) - local_88) / fVar21;
  fVar22 = 1.0 - fVar21;
  if (param_13 == 0) {
    fVar22 = fVar21;
  }
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
  fVar15 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  *pfVar8 = local_88;
  pfVar8[1] = fStack_84;
  pfVar8[2] = 0.0;
  *(undefined1 *)(pfVar8 + 3) = *param_12;
  *(undefined1 *)((long)pfVar8 + 0xd) = param_12[1];
  *(undefined1 *)((long)pfVar8 + 0xe) = param_12[2];
  *(undefined1 *)((long)pfVar8 + 0xf) = param_12[3];
  pfVar8[4] = (fVar16 + param_6 * fVar19) / fVar21;
  pfVar8[5] = 1.0 - (fVar15 + param_7 * fVar23) / fVar14;
  lVar9 = *param_8;
  *(float *)(lVar9 + 0x18) = fVar12;
  *param_8 = lVar9 + 0x18;
  *(int *)(param_8 + 1) = (int)param_8[1] + 1;
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
  fVar19 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  *(float *)(lVar9 + 0x1c) = fStack_94;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined1 *)(lVar9 + 0x24) = *param_12;
  *(undefined1 *)(lVar9 + 0x25) = param_12[1];
  *(undefined1 *)(lVar9 + 0x26) = param_12[2];
  *(undefined1 *)(lVar9 + 0x27) = param_12[3];
  *(float *)(lVar9 + 0x28) = (fVar21 + fVar14 * fVar22) / fVar15;
  *(float *)(lVar9 + 0x2c) = 1.0 - (fVar12 + fVar23 * fVar13) / fVar19;
  lVar9 = *param_8;
  *param_8 = lVar9 + 0x18;
  *(int *)(param_8 + 1) = (int)param_8[1] + 1;
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x4c));
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
  fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar12 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  *(float *)(lVar9 + 0x18) = local_88;
  *(float *)(lVar9 + 0x1c) = fStack_84 - fVar1;
  *(undefined4 *)(lVar9 + 0x20) = 0;
  *(undefined1 *)(lVar9 + 0x24) = *param_12;
  *(undefined1 *)(lVar9 + 0x25) = param_12[1];
  *(undefined1 *)(lVar9 + 0x26) = param_12[2];
  *(undefined1 *)(lVar9 + 0x27) = param_12[3];
  *(float *)(lVar9 + 0x28) = (fVar21 + param_6 * fVar12) / fVar14;
  *(float *)(lVar9 + 0x2c) = 1.0 - (fVar22 + fVar19 * fVar13) / fVar15;
  *param_8 = *param_8 + 0x18;
  *(int *)(param_8 + 1) = (int)param_8[1] + 1;
  return;
}




void FUN_100063164(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,long *param_9,long param_10,
                  long param_11,long *param_12,undefined1 *param_13,int param_14,int param_15,
                  undefined8 param_16,float param_17)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  ulong uVar8;
  float *pfVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  ushort uVar31;
  ushort uVar32;
  ushort uVar33;
  ushort uVar34;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float local_84;
  
  fVar28 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  fVar28 = (float)(int)(fVar28 * param_8 * *(float *)(param_10 + 0x10));
  if (ABS(fVar28) < 0.1) {
    return;
  }
  fVar22 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
  fVar22 = (float)(int)(fVar22 * param_17 * *(float *)(param_10 + 0x14));
  if (ABS(fVar22) < 0.1) {
    return;
  }
  fVar18 = (float)NEON_fminnm(param_3 * 360.0,0x43b40000);
  uVar29 = SUB42(fVar18,0);
  uVar30 = (undefined2)((uint)fVar18 >> 0x10);
  if (fVar18 <= 0.0) {
    uVar29 = 0;
    uVar30 = 0;
  }
  fVar23 = fVar28 * param_6;
  fVar20 = fVar22 * param_7;
  param_1 = param_1 - (float)(int)(fVar28 * param_4);
  param_2 = param_2 - (float)(int)(fVar22 * param_5);
  fVar18 = (float)CONCAT22(uVar30,uVar29);
  fVar16 = (float)CONCAT22(uVar30,uVar29) * -0.0055555557;
  local_88 = (float)(int)(param_1 + fVar23);
  local_84 = (float)(int)(param_2 + fVar20);
  fVar14 = (float)___sincosf_stret(fVar16 * 3.1415927);
  local_98 = (float)(int)(param_1 + fVar23) - fVar14 * 9999.0;
  fStack_94 = (float)(int)(param_2 + fVar20) - fVar16 * 9999.0;
  fVar16 = param_1 + fVar28;
  local_a8 = fVar16;
  fStack_a4 = param_2;
  local_a0 = param_1;
  fStack_9c = param_2;
  uVar8 = FUN_1010d0068(&local_88,&local_98,&local_a0,&local_a8,&local_90);
  fVar14 = param_2 + fVar22;
  if (((((uVar8 & 1) == 0) &&
       (local_a8 = fVar16, fStack_a4 = fVar14, local_a0 = fVar16, fStack_9c = param_2,
       uVar8 = FUN_1010d0068(&local_88,&local_98,&local_a0,&local_a8,&local_90), (uVar8 & 1) == 0))
      && (local_a8 = param_1, fStack_a4 = fVar14, local_a0 = fVar16, fStack_9c = fVar14,
         uVar8 = FUN_1010d0068(&local_88,&local_98,&local_a0,&local_a8,&local_90), (uVar8 & 1) == 0)
      ) && (local_a8 = param_1, fStack_a4 = param_2, local_a0 = param_1, fStack_9c = fVar14,
           iVar7 = FUN_1010d0068(&local_88,&local_98,&local_a0,&local_a8,&local_90), iVar7 == 0)) {
    return;
  }
  fVar21 = fVar28 - fVar28 * param_6;
  fVar19 = fVar22 - fVar22 * param_7;
  fVar16 = 0.0;
  if (param_14 == 0) {
    fVar16 = 1.0;
  }
  fVar17 = 1.0;
  if (param_14 == 0) {
    fVar17 = 0.0;
  }
  fVar27 = 0.0;
  if (param_15 == 0) {
    fVar27 = 1.0;
  }
  fVar15 = 1.0;
  if (param_15 == 0) {
    fVar15 = 0.0;
  }
  if (45.0 <= fVar18) {
    local_a8 = 135.0;
    if (fVar18 < 135.0) {
      pfVar9 = (float *)*param_9;
      goto LAB_100063558;
    }
    if (fVar18 < 225.0) {
      pfVar12 = &local_90;
      pfVar13 = (float *)((ulong)pfVar12 | 4);
      pfVar9 = (float *)*param_9;
      goto LAB_100063754;
    }
    pfVar11 = &local_90;
    pfVar12 = (float *)((ulong)pfVar11 | 4);
    pfVar9 = (float *)*param_9;
    if (315.0 <= fVar18) goto LAB_100063b14;
  }
  else {
    local_a0 = local_88 + fVar21;
    local_a8 = local_84 - fVar20;
    fVar26 = (local_90 - param_1) / fVar28;
    fVar24 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
    pfVar9 = (float *)*param_9;
    *pfVar9 = local_88;
    pfVar9[1] = local_84;
    pfVar9[2] = 0.0;
    *(undefined1 *)(pfVar9 + 3) = *param_13;
    *(undefined1 *)((long)pfVar9 + 0xd) = param_13[1];
    *(undefined1 *)((long)pfVar9 + 0xe) = param_13[2];
    *(undefined1 *)((long)pfVar9 + 0xf) = param_13[3];
    pfVar9[4] = (fVar25 + param_6 * fVar5) / fVar24;
    pfVar9[5] = 1.0 - (fVar4 + param_7 * fVar6) / fVar3;
    lVar10 = *param_9;
    *(float *)(lVar10 + 0x18) = local_a0;
    *param_9 = lVar10 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    fVar24 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
    *(float *)(lVar10 + 0x1c) = local_a8;
    *(undefined4 *)(lVar10 + 0x20) = 0;
    *(undefined1 *)(lVar10 + 0x24) = *param_13;
    *(undefined1 *)(lVar10 + 0x25) = param_13[1];
    *(undefined1 *)(lVar10 + 0x26) = param_13[2];
    *(undefined1 *)(lVar10 + 0x27) = param_13[3];
    *(float *)(lVar10 + 0x28) = (fVar25 + fVar5 * fVar16) / fVar24;
    *(float *)(lVar10 + 0x2c) = 1.0 - (fVar4 + fVar6 * fVar15) / fVar3;
    lVar10 = *param_9;
    *(undefined8 *)(lVar10 + 0x18) = CONCAT44(fStack_8c,local_90);
    fVar24 = 1.0 - fVar26;
    if (param_14 == 0) {
      fVar24 = fVar26;
    }
    *param_9 = lVar10 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
    *(undefined4 *)(lVar10 + 0x20) = 0;
    *(undefined1 *)(lVar10 + 0x24) = *param_13;
    *(undefined1 *)(lVar10 + 0x25) = param_13[1];
    *(undefined1 *)(lVar10 + 0x26) = param_13[2];
    *(undefined1 *)(lVar10 + 0x27) = param_13[3];
    *(float *)(lVar10 + 0x28) = (fVar25 + fVar5 * fVar24) / fVar26;
    *(float *)(lVar10 + 0x2c) = 1.0 - (fVar4 + fVar6 * fVar15) / fVar3;
    pfVar9 = (float *)(*param_9 + 0x18);
    *param_9 = (long)pfVar9;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
LAB_100063558:
    pfVar12 = &local_a0;
    pfVar13 = pfVar12;
    if (45.0 <= fVar18) {
      pfVar13 = &local_90;
    }
    fVar26 = *pfVar13;
    fVar24 = local_a8;
    if (45.0 <= fVar18) {
      fVar24 = fStack_8c;
    }
    local_a0 = local_88 + fVar21;
    local_a8 = local_84 + fVar19;
    fVar18 = (fVar14 - fVar24) / fVar22;
    if (param_15 == 0) {
      fVar18 = 1.0 - fVar18;
    }
    fVar21 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
    *pfVar9 = local_88;
    pfVar9[1] = local_84;
    pfVar9[2] = 0.0;
    *(undefined1 *)(pfVar9 + 3) = *param_13;
    *(undefined1 *)((long)pfVar9 + 0xd) = param_13[1];
    *(undefined1 *)((long)pfVar9 + 0xe) = param_13[2];
    *(undefined1 *)((long)pfVar9 + 0xf) = param_13[3];
    pfVar9[4] = (fVar25 + param_6 * fVar5) / fVar21;
    pfVar9[5] = 1.0 - (fVar4 + param_7 * fVar6) / fVar3;
    lVar10 = *param_9;
    *(float *)(lVar10 + 0x18) = local_a0;
    *param_9 = lVar10 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    fVar21 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
    fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    fVar6 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
    *(float *)(lVar10 + 0x1c) = local_a8;
    *(undefined4 *)(lVar10 + 0x20) = 0;
    *(undefined1 *)(lVar10 + 0x24) = *param_13;
    *(undefined1 *)(lVar10 + 0x25) = param_13[1];
    *(undefined1 *)(lVar10 + 0x26) = param_13[2];
    *(undefined1 *)(lVar10 + 0x27) = param_13[3];
    *(float *)(lVar10 + 0x28) = (fVar25 + fVar5 * fVar16) / fVar21;
    *(float *)(lVar10 + 0x2c) = 1.0 - (fVar4 + fVar6 * fVar27) / fVar3;
    lVar10 = *param_9;
    *(float *)(lVar10 + 0x18) = fVar26;
    *param_9 = lVar10 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    fVar21 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
    fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    fVar5 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
    *(float *)(lVar10 + 0x1c) = fVar24;
    *(undefined4 *)(lVar10 + 0x20) = 0;
    *(undefined1 *)(lVar10 + 0x24) = *param_13;
    *(undefined1 *)(lVar10 + 0x25) = param_13[1];
    *(undefined1 *)(lVar10 + 0x26) = param_13[2];
    *(undefined1 *)(lVar10 + 0x27) = param_13[3];
    *(float *)(lVar10 + 0x28) = (fVar3 + fVar4 * fVar16) / fVar21;
    *(float *)(lVar10 + 0x2c) = 1.0 - (fVar25 + fVar5 * fVar18) / fVar26;
    pfVar9 = (float *)(*param_9 + 0x18);
    *param_9 = (long)pfVar9;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    pfVar13 = &local_a8;
LAB_100063754:
    pfVar11 = &local_a0;
    fVar18 = *pfVar12;
    fVar21 = *pfVar13;
    local_a0 = local_88 - fVar23;
    local_a8 = local_84 + fVar19;
    fVar19 = (fVar18 - param_1) / fVar28;
    fVar16 = 1.0 - fVar19;
    if (param_14 == 0) {
      fVar16 = fVar19;
    }
    fVar19 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
    fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
    *pfVar9 = local_88;
    pfVar9[1] = local_84;
    pfVar9[2] = 0.0;
    *(undefined1 *)(pfVar9 + 3) = *param_13;
    *(undefined1 *)((long)pfVar9 + 0xd) = param_13[1];
    *(undefined1 *)((long)pfVar9 + 0xe) = param_13[2];
    *(undefined1 *)((long)pfVar9 + 0xf) = param_13[3];
    pfVar9[4] = (fVar24 + param_6 * fVar25) / fVar19;
    pfVar9[5] = 1.0 - (fVar3 + param_7 * fVar4) / fVar26;
    lVar10 = *param_9;
    *(float *)(lVar10 + 0x18) = local_88 - fVar23;
    *param_9 = lVar10 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    fVar19 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
    fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar25 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
    *(float *)(lVar10 + 0x1c) = local_a8;
    *(undefined4 *)(lVar10 + 0x20) = 0;
    *(undefined1 *)(lVar10 + 0x24) = *param_13;
    *(undefined1 *)(lVar10 + 0x25) = param_13[1];
    *(undefined1 *)(lVar10 + 0x26) = param_13[2];
    *(undefined1 *)(lVar10 + 0x27) = param_13[3];
    *(float *)(lVar10 + 0x28) = (fVar24 + fVar25 * fVar17) / fVar19;
    *(float *)(lVar10 + 0x2c) = 1.0 - (fVar3 + fVar4 * fVar27) / fVar26;
    lVar10 = *param_9;
    *(float *)(lVar10 + 0x18) = fVar18;
    *param_9 = lVar10 + 0x18;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
    fVar25 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
    fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
    fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
    fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
    fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
    *(float *)(lVar10 + 0x1c) = fVar21;
    *(undefined4 *)(lVar10 + 0x20) = 0;
    *(undefined1 *)(lVar10 + 0x24) = *param_13;
    *(undefined1 *)(lVar10 + 0x25) = param_13[1];
    *(undefined1 *)(lVar10 + 0x26) = param_13[2];
    *(undefined1 *)(lVar10 + 0x27) = param_13[3];
    *(float *)(lVar10 + 0x28) = (fVar19 + fVar24 * fVar16) / fVar18;
    *(float *)(lVar10 + 0x2c) = 1.0 - (fVar26 + fVar3 * fVar27) / fVar25;
    pfVar9 = (float *)(*param_9 + 0x18);
    *param_9 = (long)pfVar9;
    *(int *)(param_9 + 1) = (int)param_9[1] + 1;
    pfVar12 = &local_a8;
  }
  fVar16 = *pfVar11;
  fVar18 = *pfVar12;
  local_a0 = local_88 - fVar23;
  local_a8 = local_84 - fVar20;
  fVar22 = (fVar14 - fVar18) / fVar22;
  if (param_15 == 0) {
    fVar22 = 1.0 - fVar22;
  }
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
  fVar19 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
  fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
  fVar26 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  fVar24 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
  *pfVar9 = local_88;
  pfVar9[1] = local_84;
  pfVar9[2] = 0.0;
  *(undefined1 *)(pfVar9 + 3) = *param_13;
  *(undefined1 *)((long)pfVar9 + 0xd) = param_13[1];
  *(undefined1 *)((long)pfVar9 + 0xe) = param_13[2];
  *(undefined1 *)((long)pfVar9 + 0xf) = param_13[3];
  pfVar9[4] = (fVar21 + param_6 * fVar26) / fVar14;
  pfVar9[5] = 1.0 - (fVar27 + param_7 * fVar24) / fVar19;
  lVar10 = *param_9;
  *(float *)(lVar10 + 0x18) = local_88 - fVar23;
  *param_9 = lVar10 + 0x18;
  *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  fVar26 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
  fVar21 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
  *(float *)(lVar10 + 0x1c) = local_84 - fVar20;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined1 *)(lVar10 + 0x24) = *param_13;
  *(undefined1 *)(lVar10 + 0x25) = param_13[1];
  *(undefined1 *)(lVar10 + 0x26) = param_13[2];
  *(undefined1 *)(lVar10 + 0x27) = param_13[3];
  *(float *)(lVar10 + 0x28) = (fVar23 + fVar21 * fVar17) / fVar26;
  *(float *)(lVar10 + 0x2c) = 1.0 - (fVar19 + fVar27 * fVar15) / fVar14;
  lVar10 = *param_9;
  *(float *)(lVar10 + 0x18) = fVar16;
  *param_9 = lVar10 + 0x18;
  *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  fVar21 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
  fVar14 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
  fVar27 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
  *(float *)(lVar10 + 0x1c) = fVar18;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined1 *)(lVar10 + 0x24) = *param_13;
  *(undefined1 *)(lVar10 + 0x25) = param_13[1];
  *(undefined1 *)(lVar10 + 0x26) = param_13[2];
  *(undefined1 *)(lVar10 + 0x27) = param_13[3];
  *(float *)(lVar10 + 0x28) = (fVar27 + fVar23 * fVar17) / fVar21;
  *(float *)(lVar10 + 0x2c) = 1.0 - (fVar16 + fVar19 * fVar22) / fVar14;
  pfVar9 = (float *)(*param_9 + 0x18);
  *param_9 = (long)pfVar9;
  *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  pfVar12 = &local_a8;
  pfVar11 = &local_a0;
LAB_100063b14:
  fVar17 = *pfVar11;
  fVar21 = *pfVar12;
  fVar28 = (fVar17 - param_1) / fVar28;
  uVar1 = *(undefined4 *)(*(long *)(*param_12 + 8) + 0x48);
  uVar2 = *(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c);
  uVar31 = *(ushort *)(param_11 + 4);
  uVar32 = *(ushort *)(param_11 + 6);
  uVar33 = *(ushort *)(param_11 + 8);
  uVar34 = *(ushort *)(param_11 + 10);
  *pfVar9 = local_88;
  pfVar9[1] = local_84;
  fVar22 = (float)NEON_ucvtf(uVar1);
  fVar18 = (float)NEON_ucvtf(uVar2);
  fVar14 = (float)NEON_ucvtf((uint)uVar31);
  fVar16 = (float)NEON_ucvtf((uint)uVar32);
  fVar23 = (float)NEON_ucvtf((uint)uVar33);
  fVar19 = (float)NEON_ucvtf((uint)uVar34);
  pfVar9[2] = 0.0;
  *(undefined1 *)(pfVar9 + 3) = *param_13;
  *(undefined1 *)((long)pfVar9 + 0xd) = param_13[1];
  *(undefined1 *)((long)pfVar9 + 0xe) = param_13[2];
  *(undefined1 *)((long)pfVar9 + 0xf) = param_13[3];
  pfVar9[4] = (fVar14 + param_6 * fVar23) / fVar22;
  pfVar9[5] = 1.0 - (fVar16 + param_7 * fVar19) / fVar18;
  lVar10 = *param_9;
  *(float *)(lVar10 + 0x18) = local_88;
  *param_9 = lVar10 + 0x18;
  *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  fVar22 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
  fVar18 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
  fVar16 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  fVar19 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
  *(float *)(lVar10 + 0x1c) = local_84 - fVar20;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined1 *)(lVar10 + 0x24) = *param_13;
  *(undefined1 *)(lVar10 + 0x25) = param_13[1];
  *(undefined1 *)(lVar10 + 0x26) = param_13[2];
  *(undefined1 *)(lVar10 + 0x27) = param_13[3];
  *(float *)(lVar10 + 0x28) = (fVar14 + param_6 * fVar23) / fVar22;
  *(float *)(lVar10 + 0x2c) = 1.0 - (fVar16 + fVar19 * fVar15) / fVar18;
  lVar10 = *param_9;
  *(float *)(lVar10 + 0x18) = fVar17;
  fVar22 = 1.0 - fVar28;
  if (param_14 == 0) {
    fVar22 = fVar28;
  }
  *param_9 = lVar10 + 0x18;
  *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  fVar16 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x48));
  fVar20 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_12 + 8) + 0x4c));
  fVar28 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 4));
  fVar23 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 6));
  fVar18 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 8));
  fVar14 = (float)NEON_ucvtf((uint)*(ushort *)(param_11 + 10));
  *(float *)(lVar10 + 0x1c) = fVar21;
  *(undefined4 *)(lVar10 + 0x20) = 0;
  *(undefined1 *)(lVar10 + 0x24) = *param_13;
  *(undefined1 *)(lVar10 + 0x25) = param_13[1];
  *(undefined1 *)(lVar10 + 0x26) = param_13[2];
  *(undefined1 *)(lVar10 + 0x27) = param_13[3];
  *(float *)(lVar10 + 0x28) = (fVar28 + fVar18 * fVar22) / fVar16;
  *(float *)(lVar10 + 0x2c) = 1.0 - (fVar23 + fVar14 * fVar15) / fVar20;
  *param_9 = *param_9 + 0x18;
  *(int *)(param_9 + 1) = (int)param_9[1] + 1;
  return;
}




void FUN_100063d54(float param_1,float param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,undefined8 param_8,long param_9,long param_10,
                  long *param_11,undefined8 param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 8));
  fVar2 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 10));
  fVar8 = *(float *)(param_9 + 0x10) * param_6 * fVar1;
  param_1 = param_1 - param_4 * fVar8;
  fVar7 = *(float *)(param_9 + 0x14) * param_7 * fVar2;
  fVar6 = (param_2 - param_5 * fVar7) + (1.0 - param_3) * fVar7;
  fVar3 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 4));
  fVar4 = (float)NEON_ucvtf((uint)*(ushort *)(param_10 + 6));
  fVar5 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*param_11 + 8) + 0x48));
  fVar5 = 1.0 / fVar5;
  FUN_100043664(param_1,fVar6,fVar8 + param_1,fVar6 + param_3 * fVar7,0,fVar5 * fVar3,
                1.0 - (fVar4 + fVar2 * (1.0 - param_3)) * fVar5,SUB42(fVar5 * (fVar3 + fVar1),0),
                param_8,param_12,0);
  return;
}




void FUN_100063e04(undefined4 param_1)

{
  DAT_101dc3b88 = param_1;
  return;
}




undefined4 FUN_100063e10(void)

{
  return DAT_101dc3b88;
}




long * FUN_100063e1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  long *plVar16;
  
  plVar2 = param_1 + 0x1c77;
  plVar22 = param_1 + 0x17df;
  puVar14 = (undefined8 *)FUN_100269da8();
  *puVar14 = &PTR_thunk_FUN_1000645cc_10144d888;
  puVar14 = puVar14 + 0x19;
  FUN_1006421a8(puVar14);
  param_1[0x19] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0x2a] = (long)&PTR_thunk_FUN_10064221c_10144d9f0;
  plVar1 = param_1 + 0x3b;
  FUN_100269de4();
  thunk_FUN_1000dee58();
  plVar21 = param_1 + 0xc5;
  thunk_FUN_100183990(plVar21,1);
  lVar20 = 0xc18;
  do {
    FUN_100269de4((long)param_1 + lVar20);
    lVar20 = lVar20 + 200;
  } while (lVar20 != 0xe70);
  lVar20 = 0xe70;
  do {
    thunk_FUN_100655644((long)param_1 + lVar20);
    lVar20 = lVar20 + 0x158;
  } while (lVar20 != 0x1278);
  plVar16 = param_1 + 0x24f;
  lVar20 = 0xac80;
  do {
    lVar15 = thunk_FUN_10006621c(plVar16);
    plVar16 = (long *)(lVar15 + 0x3980);
    lVar20 = lVar20 + -0x3980;
  } while (lVar20 != 0);
  FUN_1006421a8(plVar22);
  *plVar22 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar16 = param_1 + 0x17f0;
  FUN_1006421a8();
  param_1[0x17f0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x1801;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x1827;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x184d;
  thunk_FUN_1006543ec();
  plVar6 = param_1 + 0x1881;
  FUN_10053077c(plVar6,0);
  plVar7 = param_1 + 0x1928;
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x194e;
  thunk_FUN_100181304(plVar8,1);
  lVar20 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar20 + 0xe028);
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x390);
  puVar17 = (undefined8 *)FUN_1006421a8(plVar2);
  *puVar17 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar9 = param_1 + 0x1c88;
  thunk_FUN_100655644(plVar9);
  plVar18 = param_1 + 0x1cb3;
  lVar20 = 0x10a0;
  do {
    lVar15 = thunk_FUN_100650e64(plVar18);
    plVar18 = (long *)(lVar15 + 0x130);
    lVar20 = lVar20 + -0x130;
  } while (lVar20 != 0);
  plVar18 = param_1 + 0x1ec7;
  lVar20 = 0x10a0;
  do {
    lVar15 = thunk_FUN_100650e64(plVar18);
    plVar18 = (long *)(lVar15 + 0x130);
    lVar20 = lVar20 + -0x130;
  } while (lVar20 != 0);
  FUN_1004e313c(param_1 + 0x20dc);
  *(undefined1 *)(param_1 + 0x20de) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar14,1);
  FUN_100642bd8(puVar14,param_1 + 0x2a,1);
  FUN_100642bd8(puVar14,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x54,1);
  uVar10 = DAT_101dbd458;
  local_70 = DAT_101dbd458;
  local_98 = thunk_FUN_100065440;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x2b,&local_98);
  uVar11 = DAT_101dbd484;
  local_70 = DAT_101dbd484;
  local_98 = thunk_FUN_100065440;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x2b,&local_98);
  *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) | 0x10;
  FUN_100642bd8(plVar1,plVar21,1);
  FUN_100652cdc(param_1 + 0x15f,"circle_button_x");
  FUN_100183c50(0x3f400000,plVar21,&DAT_10115a164);
  local_70 = uVar10;
  local_98 = thunk_FUN_100065440;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc6,&local_98);
  local_70 = uVar11;
  local_98 = thunk_FUN_100065440;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc6,&local_98);
  uVar12 = FUN_1004d2524("HUD_Ability_Help_Close_Button");
  uVar13 = FUN_100015208("HUD_Ability_Help_Close_Button",uVar12,0x1234);
  *(uint *)((long)param_1 + 0x6ac) =
       *(uint *)((long)param_1 + 0x6ac) & 0x80000000 |
       *(uint *)((long)param_1 + 0x6ac) & 0x7fff | (uVar13 & 0xffff) << 0xf;
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar4,&DAT_101dc3b9e);
  FUN_100642bd8(plVar16,plVar4,1);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
  FUN_100651460(plVar3,&DAT_101dc3b9e);
  uVar19 = FUN_1004e0150("HUD_LEARN_HEROIC_PERK",0);
  FUN_1006513c0(plVar3,uVar19);
  FUN_100642bd8(plVar16,plVar3,1);
  FUN_100642bd8(plVar16,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_1005308f8(plVar6,plVar7,1);
  FUN_100654488(plVar5,1);
  FUN_100530adc(plVar6,0,1);
  FUN_100651038(plVar7,PTR_s_build___Fonts_Avenir_Medium_30_f_10184e2a8);
  FUN_100651460(plVar7,&DAT_101dc3b9e);
  FUN_100642bd8(plVar1,plVar22,1);
  FUN_100642bd8(plVar22,plVar16,1);
  lVar20 = 0xc18;
  lVar15 = 0xe70;
  lVar23 = 0x1278;
  do {
    plVar21 = (long *)((long)param_1 + lVar20);
    plVar22 = (long *)((long)param_1 + lVar15);
    (**(code **)(*plVar21 + 0x78))(plVar21,plVar22,1);
    (**(code **)(*plVar22 + 0x78))(plVar22,(long)param_1 + lVar23,1);
    FUN_100642bd8(puVar14,plVar21,1);
    lVar20 = lVar20 + 200;
    lVar15 = lVar15 + 0x158;
    lVar23 = lVar23 + 0x3980;
  } while (lVar20 != 0xe70);
  lVar20 = 0;
  do {
    lVar15 = (long)param_1 + lVar20 + 0xe028;
    FUN_100651038(lVar15,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
    FUN_100655930(plVar9,lVar15,1);
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x390);
  uVar19 = FUN_1004e0150("HUD_LEARN_STAT_TABLE_LABEL_BASIC_STATS",0);
  (**(code **)(param_1[0x1c05] + 0x138))(param_1 + 0x1c05,uVar19);
  uVar19 = FUN_1004e0150("HUD_LEARN_STAT_TABLE_LABEL_WEAPON",0);
  (**(code **)(param_1[0x1c2b] + 0x138))(param_1 + 0x1c2b,uVar19);
  uVar19 = FUN_1004e0150("HUD_LEARN_STAT_TABLE_LABEL_ABILITY",0);
  (**(code **)(param_1[0x1c51] + 0x138))(param_1 + 0x1c51,uVar19);
  plVar21 = param_1 + 0x1cb3;
  plVar22 = param_1 + 0x1ec7;
  lVar20 = 0xe;
  do {
    FUN_100651038(plVar21,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
    FUN_100651460(plVar21,&DAT_101dc3ba2);
    FUN_100655930(plVar9,plVar21,1);
    FUN_100651038(plVar22,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
    FUN_100651460(plVar22,&DAT_101dc3b9e);
    FUN_100655930(plVar9,plVar22,1);
    plVar21 = plVar21 + 0x26;
    plVar22 = plVar22 + 0x26;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar9,1);
  uVar19 = FUN_1004e0150("HUD_LEARN_MORE_INFO",0);
  local_98 = (code *)CONCAT44(local_98._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x44480000,plVar8,0,uVar19,&local_98,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar8,1);
  FUN_1001b495c(0xbf800000,plVar8);
  local_70 = DAT_101d91884;
  local_98 = thunk_FUN_1000654dc;
  plVar21 = param_1 + 0x194f;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar21,&local_98);
  local_70 = uVar10;
  local_98 = FUN_1000645c4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar21,&local_98);
  local_70 = uVar11;
  local_98 = FUN_1000645c4;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar21,&local_98);
  FUN_100642bd8(plVar1,plVar8,1);
  *(uint *)((long)param_1 + 0xe43c) = *(uint *)((long)param_1 + 0xe43c) & 0xfffffffb;
  return param_1;
}




void thunk_FUN_100065440(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auStack_60 [48];
  
  FUN_100530200(auStack_60,DAT_101d91884,0,0);
  FUN_100644c34(param_1,auStack_60,1);
  uVar1 = 3;
  plVar2 = (long *)(param_1 + 0xc18);
  do {
    uVar1 = uVar1 - 1;
    (**(code **)(*plVar2 + 0x138))((float)(uVar1 & 0xffffffff) * 0.05 + 0.25,plVar2,0,1,1);
    plVar2 = plVar2 + 0x19;
  } while (uVar1 != 0);
  return;
}




void thunk_FUN_1000654dc(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  undefined8 uStack_68;
  
  uVar9 = 0;
  lVar7 = param_1 + 0x1278;
  do {
    FUN_1000672a0((float)(uVar9 & 0xffffffff) * 0.001,lVar7);
    uVar9 = uVar9 + 1;
    lVar7 = lVar7 + 0x3980;
  } while (uVar9 != 3);
  bVar1 = *(byte *)(param_1 + 0x106f0);
  *(byte *)(param_1 + 0x106f0) = bVar1 ^ 1;
  lVar7 = param_1 + 0xbef8;
  lVar2 = param_1 + 0xe3b8;
  if (bVar1 != 0) {
    lVar7 = param_1 + 0xe3b8;
    lVar2 = param_1 + 0xbef8;
  }
  FUN_100642324(lVar7);
  FUN_100642324(lVar2);
  uVar4 = FUN_10001f0d8();
  uStack_68 = 0x42c80000;
  FUN_10063f984(uVar4,&uStack_68);
  FUN_10063f0e8(0x3e19999a,uVar4);
  uVar5 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3e19999a,uVar5);
  lVar3 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar8);
    *(undefined ***)puVar8 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063eee4(uVar5,puVar8);
  uVar5 = FUN_10001f4d4();
  FUN_10063f2a4(uVar5,uVar4);
  FUN_100642b7c(lVar7,uVar5);
  lVar7 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
    *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
    FUN_10063ee9c(puVar8);
    *(undefined ***)puVar8 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
  }
  uVar4 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e19999a,uVar4);
  FUN_10063eee4(puVar8,uVar4);
  uVar4 = FUN_10001f0d8();
  uStack_68 = 0x42c80000;
  FUN_10063f984(uVar4,&uStack_68);
  FUN_10063f0e8(0x3e19999a,uVar4);
  FUN_10063f130(uVar4,FUN_1000657e0);
  uVar4 = FUN_10001f4d4();
  FUN_10063f2a4(uVar4,puVar8);
  if ((*(float *)(lVar2 + 0x40) != -100.0) || (*(float *)(lVar2 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar2 + 0x40) = 0xc2c80000;
    FUN_1000200a0(lVar2);
  }
  if ((*(uint *)(lVar2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffff807f;
    FUN_1000200a0(lVar2);
  }
  FUN_100642b7c(lVar2,uVar4);
  return;
}




void FUN_1000645c4(void)

{
  return;
}




long * thunk_FUN_100063e1c(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  long *plVar16;
  
  plVar2 = param_1 + 0x1c77;
  plVar22 = param_1 + 0x17df;
  puVar14 = (undefined8 *)FUN_100269da8();
  *puVar14 = &PTR_thunk_FUN_1000645cc_10144d888;
  puVar14 = puVar14 + 0x19;
  FUN_1006421a8(puVar14);
  param_1[0x19] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  FUN_1006421a8();
  param_1[0x2a] = (long)&PTR_thunk_FUN_10064221c_10144d9f0;
  plVar1 = param_1 + 0x3b;
  FUN_100269de4();
  thunk_FUN_1000dee58();
  plVar21 = param_1 + 0xc5;
  thunk_FUN_100183990(plVar21,1);
  lVar20 = 0xc18;
  do {
    FUN_100269de4((long)param_1 + lVar20);
    lVar20 = lVar20 + 200;
  } while (lVar20 != 0xe70);
  lVar20 = 0xe70;
  do {
    thunk_FUN_100655644((long)param_1 + lVar20);
    lVar20 = lVar20 + 0x158;
  } while (lVar20 != 0x1278);
  plVar16 = param_1 + 0x24f;
  lVar20 = 0xac80;
  do {
    lVar15 = thunk_FUN_10006621c(plVar16);
    plVar16 = (long *)(lVar15 + 0x3980);
    lVar20 = lVar20 + -0x3980;
  } while (lVar20 != 0);
  FUN_1006421a8(plVar22);
  *plVar22 = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar16 = param_1 + 0x17f0;
  FUN_1006421a8();
  param_1[0x17f0] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar3 = param_1 + 0x1801;
  thunk_FUN_100650e64(plVar3);
  plVar4 = param_1 + 0x1827;
  thunk_FUN_100650e64(plVar4);
  plVar5 = param_1 + 0x184d;
  thunk_FUN_1006543ec();
  plVar6 = param_1 + 0x1881;
  FUN_10053077c(plVar6,0);
  plVar7 = param_1 + 0x1928;
  thunk_FUN_100650e64();
  plVar8 = param_1 + 0x194e;
  thunk_FUN_100181304(plVar8,1);
  lVar20 = 0;
  do {
    thunk_FUN_100650e64((long)param_1 + lVar20 + 0xe028);
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x390);
  puVar17 = (undefined8 *)FUN_1006421a8(plVar2);
  *puVar17 = &PTR_thunk_FUN_10064221c_10144b7e8;
  plVar9 = param_1 + 0x1c88;
  thunk_FUN_100655644(plVar9);
  plVar18 = param_1 + 0x1cb3;
  lVar20 = 0x10a0;
  do {
    lVar15 = thunk_FUN_100650e64(plVar18);
    plVar18 = (long *)(lVar15 + 0x130);
    lVar20 = lVar20 + -0x130;
  } while (lVar20 != 0);
  plVar18 = param_1 + 0x1ec7;
  lVar20 = 0x10a0;
  do {
    lVar15 = thunk_FUN_100650e64(plVar18);
    plVar18 = (long *)(lVar15 + 0x130);
    lVar20 = lVar20 + -0x130;
  } while (lVar20 != 0);
  FUN_1004e313c(param_1 + 0x20dc);
  *(undefined1 *)(param_1 + 0x20de) = 0;
  (**(code **)(*param_1 + 0x78))(param_1,puVar14,1);
  FUN_100642bd8(puVar14,param_1 + 0x2a,1);
  FUN_100642bd8(puVar14,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x54,1);
  uVar10 = DAT_101dbd458;
  uStack_70 = DAT_101dbd458;
  pcStack_98 = thunk_FUN_100065440;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x2b,&pcStack_98);
  uVar11 = DAT_101dbd484;
  uStack_70 = DAT_101dbd484;
  pcStack_98 = thunk_FUN_100065440;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x2b,&pcStack_98);
  *(uint *)((long)param_1 + 0x1d4) = *(uint *)((long)param_1 + 0x1d4) | 0x10;
  FUN_100642bd8(plVar1,plVar21,1);
  FUN_100652cdc(param_1 + 0x15f,"circle_button_x");
  FUN_100183c50(0x3f400000,plVar21,&DAT_10115a164);
  uStack_70 = uVar10;
  pcStack_98 = thunk_FUN_100065440;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc6,&pcStack_98);
  uStack_70 = uVar11;
  pcStack_98 = thunk_FUN_100065440;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0xc6,&pcStack_98);
  uVar12 = FUN_1004d2524("HUD_Ability_Help_Close_Button");
  uVar13 = FUN_100015208("HUD_Ability_Help_Close_Button",uVar12,0x1234);
  *(uint *)((long)param_1 + 0x6ac) =
       *(uint *)((long)param_1 + 0x6ac) & 0x80000000 |
       *(uint *)((long)param_1 + 0x6ac) & 0x7fff | (uVar13 & 0xffff) << 0xf;
  FUN_100651038(plVar4,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  FUN_100651460(plVar4,&DAT_101dc3b9e);
  FUN_100642bd8(plVar16,plVar4,1);
  FUN_100651038(plVar3,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
  FUN_100651460(plVar3,&DAT_101dc3b9e);
  uVar19 = FUN_1004e0150("HUD_LEARN_HEROIC_PERK",0);
  FUN_1006513c0(plVar3,uVar19);
  FUN_100642bd8(plVar16,plVar3,1);
  FUN_100642bd8(plVar16,plVar5,1);
  FUN_100642bd8(plVar5,plVar6,1);
  FUN_1005308f8(plVar6,plVar7,1);
  FUN_100654488(plVar5,1);
  FUN_100530adc(plVar6,0,1);
  FUN_100651038(plVar7,PTR_s_build___Fonts_Avenir_Medium_30_f_10184e2a8);
  FUN_100651460(plVar7,&DAT_101dc3b9e);
  FUN_100642bd8(plVar1,plVar22,1);
  FUN_100642bd8(plVar22,plVar16,1);
  lVar20 = 0xc18;
  lVar15 = 0xe70;
  lVar23 = 0x1278;
  do {
    plVar21 = (long *)((long)param_1 + lVar20);
    plVar22 = (long *)((long)param_1 + lVar15);
    (**(code **)(*plVar21 + 0x78))(plVar21,plVar22,1);
    (**(code **)(*plVar22 + 0x78))(plVar22,(long)param_1 + lVar23,1);
    FUN_100642bd8(puVar14,plVar21,1);
    lVar20 = lVar20 + 200;
    lVar15 = lVar15 + 0x158;
    lVar23 = lVar23 + 0x3980;
  } while (lVar20 != 0xe70);
  lVar20 = 0;
  do {
    lVar15 = (long)param_1 + lVar20 + 0xe028;
    FUN_100651038(lVar15,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
    FUN_100655930(plVar9,lVar15,1);
    lVar20 = lVar20 + 0x130;
  } while (lVar20 != 0x390);
  uVar19 = FUN_1004e0150("HUD_LEARN_STAT_TABLE_LABEL_BASIC_STATS",0);
  (**(code **)(param_1[0x1c05] + 0x138))(param_1 + 0x1c05,uVar19);
  uVar19 = FUN_1004e0150("HUD_LEARN_STAT_TABLE_LABEL_WEAPON",0);
  (**(code **)(param_1[0x1c2b] + 0x138))(param_1 + 0x1c2b,uVar19);
  uVar19 = FUN_1004e0150("HUD_LEARN_STAT_TABLE_LABEL_ABILITY",0);
  (**(code **)(param_1[0x1c51] + 0x138))(param_1 + 0x1c51,uVar19);
  plVar21 = param_1 + 0x1cb3;
  plVar22 = param_1 + 0x1ec7;
  lVar20 = 0xe;
  do {
    FUN_100651038(plVar21,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
    FUN_100651460(plVar21,&DAT_101dc3ba2);
    FUN_100655930(plVar9,plVar21,1);
    FUN_100651038(plVar22,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
    FUN_100651460(plVar22,&DAT_101dc3b9e);
    FUN_100655930(plVar9,plVar22,1);
    plVar21 = plVar21 + 0x26;
    plVar22 = plVar22 + 0x26;
    lVar20 = lVar20 + -1;
  } while (lVar20 != 0);
  FUN_100642bd8(plVar1,plVar2,1);
  FUN_100642bd8(plVar2,plVar9,1);
  uVar19 = FUN_1004e0150("HUD_LEARN_MORE_INFO",0);
  pcStack_98 = (code *)CONCAT44(pcStack_98._4_4_,0xffc0c0c0);
  FUN_1001816d4(0x42800000,0,0x44480000,plVar8,0,uVar19,&pcStack_98,&DAT_101dc1cb8,0);
  FUN_1001b4c0c(plVar8,1);
  FUN_1001b495c(0xbf800000,plVar8);
  uStack_70 = DAT_101d91884;
  pcStack_98 = thunk_FUN_1000654dc;
  plVar21 = param_1 + 0x194f;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar21,&pcStack_98);
  uStack_70 = uVar10;
  pcStack_98 = FUN_1000645c4;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar21,&pcStack_98);
  uStack_70 = uVar11;
  pcStack_98 = FUN_1000645c4;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar21,&pcStack_98);
  FUN_100642bd8(plVar1,plVar8,1);
  *(uint *)((long)param_1 + 0xe43c) = *(uint *)((long)param_1 + 0xe43c) & 0xfffffffb;
  return param_1;
}




void FUN_1000645cc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1000645cc_10144d888;
  if ((void *)param_1[0x20dd] != (void *)0x0) {
    operator_delete__((void *)param_1[0x20dd]);
    param_1[0x20dd] = 0;
    param_1[0x20dc] = 0;
  }
  puVar2 = param_1 + 0x20b5;
  lVar3 = -0x10a0;
  do {
    lVar1 = thunk_FUN_100651068(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x130);
    lVar3 = lVar3 + 0x130;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x1ea1;
  lVar3 = -0x10a0;
  do {
    lVar1 = thunk_FUN_100651068(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x130);
    lVar3 = lVar3 + 0x130;
  } while (lVar3 != 0);
  param_1[0x1c88] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1c9f);
  FUN_10064e2bc(param_1 + 0x1c88);
  FUN_10064221c(param_1 + 0x1c77);
  lVar3 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar3 + 0xe288);
    lVar3 = lVar3 + -0x130;
  } while (lVar3 != -0x390);
  FUN_10003bd40(param_1 + 0x194e);
  thunk_FUN_100651068(param_1 + 0x1928);
  thunk_FUN_100530784(param_1 + 0x1881);
  FUN_10064e2bc(param_1 + 0x184d);
  thunk_FUN_100651068(param_1 + 0x1827);
  thunk_FUN_100651068(param_1 + 0x1801);
  FUN_10064221c(param_1 + 0x17f0);
  FUN_10064221c(param_1 + 0x17df);
  puVar2 = param_1 + 0x10af;
  lVar3 = -0xac80;
  do {
    lVar1 = FUN_100065850(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x3980);
    lVar3 = lVar3 + 0x3980;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x224;
  lVar3 = -0x408;
  do {
    *puVar2 = &PTR_FUN_1014a7f88;
    FUN_10064221c(puVar2 + 0x17);
    FUN_10064e2bc(puVar2);
    puVar2 = puVar2 + -0x2b;
    lVar3 = lVar3 + 0x158;
  } while (lVar3 != 0);
  lVar3 = 0xda8;
  do {
    FUN_10064e2bc((long)param_1 + lVar3);
    lVar3 = lVar3 + -200;
  } while (lVar3 != 0xb50);
  param_1[0xc5] = &PTR_FUN_10145f300;
  param_1[0x15f] = &PTR_FUN_1014a7108;
  param_1[0x176] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x179);
  FUN_10064e2bc(param_1 + 0x15f);
  param_1[0x141] = &PTR_FUN_1014a7108;
  param_1[0x158] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15b);
  FUN_10064e2bc(param_1 + 0x141);
  param_1[0x123] = &PTR_FUN_1014a7108;
  param_1[0x13a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13d);
  FUN_10064e2bc(param_1 + 0x123);
  FUN_10064221c(param_1 + 0x112);
  FUN_10003bec8(param_1 + 0xc5);
  param_1[0x54] = &PTR_FUN_101457060;
  param_1[0xa7] = &PTR_FUN_1014a7108;
  param_1[0xbe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc1);
  FUN_10064e2bc(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  FUN_10064e2bc(param_1 + 0x54);
  FUN_10064e2bc(param_1 + 0x3b);
  FUN_10064221c(param_1 + 0x2a);
  FUN_10064221c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_1000645cc(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_thunk_FUN_1000645cc_10144d888;
  if ((void *)param_1[0x20dd] != (void *)0x0) {
    operator_delete__((void *)param_1[0x20dd]);
    param_1[0x20dd] = 0;
    param_1[0x20dc] = 0;
  }
  puVar2 = param_1 + 0x20b5;
  lVar3 = -0x10a0;
  do {
    lVar1 = thunk_FUN_100651068(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x130);
    lVar3 = lVar3 + 0x130;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x1ea1;
  lVar3 = -0x10a0;
  do {
    lVar1 = thunk_FUN_100651068(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x130);
    lVar3 = lVar3 + 0x130;
  } while (lVar3 != 0);
  param_1[0x1c88] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x1c9f);
  FUN_10064e2bc(param_1 + 0x1c88);
  FUN_10064221c(param_1 + 0x1c77);
  lVar3 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar3 + 0xe288);
    lVar3 = lVar3 + -0x130;
  } while (lVar3 != -0x390);
  FUN_10003bd40(param_1 + 0x194e);
  thunk_FUN_100651068(param_1 + 0x1928);
  thunk_FUN_100530784(param_1 + 0x1881);
  FUN_10064e2bc(param_1 + 0x184d);
  thunk_FUN_100651068(param_1 + 0x1827);
  thunk_FUN_100651068(param_1 + 0x1801);
  FUN_10064221c(param_1 + 0x17f0);
  FUN_10064221c(param_1 + 0x17df);
  puVar2 = param_1 + 0x10af;
  lVar3 = -0xac80;
  do {
    lVar1 = FUN_100065850(puVar2);
    puVar2 = (undefined8 *)(lVar1 + -0x3980);
    lVar3 = lVar3 + 0x3980;
  } while (lVar3 != 0);
  puVar2 = param_1 + 0x224;
  lVar3 = -0x408;
  do {
    *puVar2 = &PTR_FUN_1014a7f88;
    FUN_10064221c(puVar2 + 0x17);
    FUN_10064e2bc(puVar2);
    puVar2 = puVar2 + -0x2b;
    lVar3 = lVar3 + 0x158;
  } while (lVar3 != 0);
  lVar3 = 0xda8;
  do {
    FUN_10064e2bc((long)param_1 + lVar3);
    lVar3 = lVar3 + -200;
  } while (lVar3 != 0xb50);
  param_1[0xc5] = &PTR_FUN_10145f300;
  param_1[0x15f] = &PTR_FUN_1014a7108;
  param_1[0x176] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x179);
  FUN_10064e2bc(param_1 + 0x15f);
  param_1[0x141] = &PTR_FUN_1014a7108;
  param_1[0x158] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x15b);
  FUN_10064e2bc(param_1 + 0x141);
  param_1[0x123] = &PTR_FUN_1014a7108;
  param_1[0x13a] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x13d);
  FUN_10064e2bc(param_1 + 0x123);
  FUN_10064221c(param_1 + 0x112);
  FUN_10003bec8(param_1 + 0xc5);
  param_1[0x54] = &PTR_FUN_101457060;
  param_1[0xa7] = &PTR_FUN_1014a7108;
  param_1[0xbe] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc1);
  FUN_10064e2bc(param_1 + 0xa7);
  param_1[0x89] = &PTR_FUN_1014a7108;
  param_1[0xa0] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa3);
  FUN_10064e2bc(param_1 + 0x89);
  param_1[0x6b] = &PTR_FUN_1014a7108;
  param_1[0x82] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x85);
  FUN_10064e2bc(param_1 + 0x6b);
  FUN_10064e2bc(param_1 + 0x54);
  FUN_10064e2bc(param_1 + 0x3b);
  FUN_10064221c(param_1 + 0x2a);
  FUN_10064221c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_1000648a4(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1000645cc();
  operator_delete(pvVar1);
  return;
}




void FUN_1000648b8(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_40 [8];
  void *local_38;
  
  *(long *)(param_1 + 0x106d8) = param_2;
  lVar2 = *(long *)(param_2 + 0x38);
  FUN_100066318(param_1 + 0x1278,param_2,*(undefined4 *)(lVar2 + 0xd0),0);
  FUN_100066318(param_1 + 0x4bf8,*(undefined8 *)(param_1 + 0x106d8),*(undefined4 *)(lVar2 + 0xd4),1)
  ;
  FUN_100066318(param_1 + 0x8578,*(undefined8 *)(param_1 + 0x106d8),*(undefined4 *)(lVar2 + 0xd8),2)
  ;
  uVar1 = FUN_1004e0150(*(undefined8 *)(lVar2 + 0x40),0);
  FUN_1006513c0(param_1 + 0xc138,uVar1);
  uVar1 = FUN_1004e0150(*(undefined8 *)(lVar2 + 0x48),0);
  thunk_FUN_1004e439c(auStack_40,uVar1);
  FUN_1000ef2f4(auStack_40,lVar2);
  FUN_1000f2b7c(auStack_40);
  FUN_1006513c0(param_1 + 0xc940,auStack_40);
  FUN_100530a48(param_1 + 0xc408,1);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_1000649b0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  
  FUN_100269e20(0x3e19999a,param_1 + 0x3b,param_2,1,1);
  uVar2 = 0;
  plVar1 = param_1 + 0x24f;
  plVar3 = param_1 + 0x183;
  do {
    (**(code **)(*plVar3 + 0x138))((float)(uVar2 & 0xffffffff) * 0.05 + 0.25,plVar3,param_2,1,1);
    FUN_100066b2c(plVar1);
    uVar2 = uVar2 + 1;
    plVar1 = plVar1 + 0x730;
    plVar3 = plVar3 + 0x19;
  } while (uVar2 != 3);
  FUN_100064a74(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100064a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))(param_1);
  return;
}




void FUN_100064a74(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  float fVar9;
  undefined1 auStack_160 [16];
  undefined1 auStack_150 [16];
  undefined1 auStack_140 [16];
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long local_90 [4];
  
  puVar5 = auStack_160;
  local_90[2] = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = FUN_1004e0150("STAT_TABLE_HEALTH_SMALL",0);
  thunk_FUN_1004e439c(auStack_160,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_ENERGY_SMALL",0);
  thunk_FUN_1004e439c(auStack_150,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_ARMOR_SMALL",0);
  thunk_FUN_1004e439c(auStack_140,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_SHIELD_SMALL",0);
  thunk_FUN_1004e439c(auStack_130,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_WEAPON_SMALL",0);
  thunk_FUN_1004e439c(auStack_120,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_ATKSPD_SMALL",0);
  thunk_FUN_1004e439c(auStack_110,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_CRIT_C_SMALL",0);
  thunk_FUN_1004e439c(auStack_100,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_CRIT_D_SMALL",0);
  thunk_FUN_1004e439c(auStack_f0,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_ARMPRC_SMALL",0);
  thunk_FUN_1004e439c(auStack_e0,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_WVAMP_SMALL",0);
  thunk_FUN_1004e439c(auStack_d0,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_CYSTAL_SMALL",0);
  thunk_FUN_1004e439c(auStack_c0,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_CLDN_SMALL",0);
  thunk_FUN_1004e439c(auStack_b0,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_SHDPRC_SMALL",0);
  thunk_FUN_1004e439c(auStack_a0,uVar2);
  uVar2 = FUN_1004e0150("STAT_TABLE_CVAMP_SMALL",0);
  thunk_FUN_1004e439c(local_90,uVar2);
  lVar8 = 0;
  plVar7 = (long *)(param_1 + 0xe598);
  lVar6 = param_1 + 0xf638;
  do {
    (**(code **)(*plVar7 + 0x138))(plVar7,puVar5);
    uVar4 = (ulong)*(uint *)((long)&DAT_10114b9b8 + lVar8);
    lVar1 = *(long *)(*(long *)(param_1 + 0x106d8) + 0x40) + uVar4 * 4;
    fVar9 = *(float *)(lVar1 + 0x38) + *(float *)(lVar1 + 0xec) * (*(float *)(lVar1 + 0x254) + 1.0);
    NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar1 + 0x1a0),
                *(undefined4 *)(&DAT_101dc3dd0 + uVar4 * 4));
    FUN_1000ee590(*(undefined4 *)(&DAT_101dc3d10 + uVar4 * 4),
                  *(undefined4 *)(&DAT_101dc3d10 + uVar4 * 4),
                  *(undefined4 *)(&DAT_101dc3dd0 + uVar4 * 4),
                  *(undefined4 *)((long)&DAT_10114b9f0 + lVar8),param_1 + 0x106e0,0);
    (**(code **)(plVar7[0x214] + 0x138))(lVar6,param_1 + 0x106e0);
    puVar5 = puVar5 + 0x10;
    lVar8 = lVar8 + 4;
    plVar7 = plVar7 + 0x26;
    lVar6 = lVar6 + 0x130;
  } while (lVar8 != 0x38);
  lVar8 = 0;
  do {
    pvVar3 = *(void **)((long)local_90 + lVar8 + 8);
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
      *(undefined8 *)((long)local_90 + lVar8) = 0;
      *(undefined8 *)((long)local_90 + lVar8 + 8) = 0;
    }
    lVar8 = lVar8 + -0x10;
  } while (lVar8 != -0xe0);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_90[2]) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}




void FUN_100064db0(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100064db8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x150))();
  return;
}




void FUN_100064dbc(long param_1)

{
  long lVar1;
  long *plVar2;
  float *pfVar3;
  long lVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  undefined1 *local_a8;
  
  FUN_10064142c(&local_ac,&local_b0);
  FUN_100641464(&local_b4,&local_b8);
  fVar16 = local_ac - local_b4;
  fVar13 = (local_b0 - local_b8) + 310.0;
  fVar14 = local_b0 - fVar13;
  fVar13 = fVar13 * 0.5;
  fVar15 = fVar13 + 2.0;
  lVar1 = param_1 + 0x2a0;
  fVar11 = -(fVar16 * 0.5);
  fVar12 = (local_b0 - local_b8) * 0.5 + 140.0;
  bVar5 = false;
  if ((*(float *)(param_1 + 0x2e0) == fVar11) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x2e4)) && !NAN(fVar12))) {
    bVar5 = *(float *)(param_1 + 0x2e4) == fVar12;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x2e0) = fVar11;
    *(float *)(param_1 + 0x2e4) = fVar12;
    FUN_1000200a0(lVar1);
  }
  FUN_10064e47c(local_ac,fVar14,lVar1);
  lVar7 = param_1 + 0x628;
  fVar11 = (float)FUN_10064e3cc(lVar7);
  fVar12 = -26.0;
  fVar18 = (local_ac - fVar11 * 0.5) + -26.0;
  FUN_10064e3cc(lVar7);
  fVar11 = (fVar15 - fVar12 * 0.5) + -20.0;
  if ((*(float *)(param_1 + 0x668) != fVar18) || (*(float *)(param_1 + 0x66c) != fVar11)) {
    *(float *)(param_1 + 0x668) = fVar18;
    *(float *)(param_1 + 0x66c) = fVar11;
    FUN_1000200a0(lVar7);
  }
  plVar2 = (long *)(param_1 + 0xca70);
  pfVar3 = (float *)(param_1 + 0xbfc8);
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*(long *)(param_1 + 0x628) + 0x28))(lVar7,&local_a8);
  uVar17 = NEON_fmov(0x3fc00000,4);
  if ((*(float *)(param_1 + 0x670) != 1.5) || (*(float *)(param_1 + 0x674) != 1.5)) {
    *(undefined8 *)(param_1 + 0x670) = uVar17;
    FUN_1000200a0(lVar7);
  }
  FUN_10064e5ec(-16.0 - fVar16 * 0.5,0x42100000,lVar7,2,lVar1,1);
  lVar7 = 0;
  uVar8 = 0;
  fVar13 = fVar13 + -70.0;
  fVar11 = local_b4 * 0.5;
  lVar6 = 0x1278;
  lVar9 = 0x12c0;
  lVar10 = 0x12c4;
  do {
    if ((*(float *)(param_1 + lVar9) != 1.35) || (*(float *)(param_1 + lVar10) != 1.35)) {
      *(undefined8 *)(param_1 + lVar9) = 0x3faccccd3faccccd;
      FUN_1000200a0(param_1 + lVar6);
    }
    lVar4 = param_1 + lVar7;
    (**(code **)(*(long *)(lVar4 + 0xe70) + 0x138))(lVar4 + 0xe70);
    fVar12 = fVar11 + -1155.0 + (float)(uVar8 & 0xffffffff) * 810.0;
    fVar16 = *(float *)(lVar4 + 0xeb0);
    bVar5 = false;
    if ((fVar16 == fVar12) && (bVar5 = false, !NAN(*(float *)(lVar4 + 0xeb4)) && !NAN(fVar13))) {
      bVar5 = *(float *)(lVar4 + 0xeb4) == fVar13;
    }
    if (!bVar5) {
      *(float *)(lVar4 + 0xeb0) = fVar12;
      *(float *)(lVar4 + 0xeb4) = fVar13;
      FUN_1000200a0(lVar4 + 0xe70);
    }
    uVar8 = uVar8 + 1;
    lVar6 = lVar6 + 0x3980;
    lVar7 = lVar7 + 0x158;
    lVar9 = lVar9 + 0x3980;
    lVar10 = lVar10 + 0x3980;
  } while (uVar8 != 3);
  if ((*pfVar3 != 1.35) || (*(float *)(param_1 + 0xbfcc) != 1.35)) {
    pfVar3[0] = 1.35;
    pfVar3[1] = 1.35;
    FUN_1000200a0(param_1 + 0xbf80);
  }
  lVar6 = param_1 + 0xc008;
  lVar7 = param_1 + 0xe70;
  FUN_10064e72c(0x41400000,lVar6,0,lVar7,2);
  FUN_10064e72c(0,lVar6,3,lVar7,3);
  lVar9 = param_1 + 0xc138;
  FUN_100651708(0x438c0000,lVar9,1);
  FUN_10064e72c(0,lVar9,0,lVar6,2);
  FUN_10064e72c(0,lVar9,3,lVar6,3);
  FUN_10064eb7c(lVar9,0,lVar1,3);
  FUN_10064e47c(0x44f64000,fVar16 + -12.0,param_1 + 0xc268);
  FUN_10064e5ec(0x43a00000,0,param_1 + 0xc268,0,lVar6,0);
  FUN_100651708(0x44a42aab,param_1 + 0xc940,1);
  FUN_100530a48(param_1 + 0xc408,1);
  bVar5 = false;
  if ((*(float *)(param_1 + 0xe06c) == 0.0) && (bVar5 = false, !NAN(*(float *)(param_1 + 0xe068))))
  {
    bVar5 = *(float *)(param_1 + 0xe068) == 0.0;
  }
  if (!bVar5) {
    *(undefined8 *)(param_1 + 0xe068) = 0;
    FUN_1000200a0(param_1 + 0xe028);
  }
  if ((*(float *)(param_1 + 0xe198) != 472.0) || (*(float *)(param_1 + 0xe19c) != 0.0)) {
    *(undefined8 *)(param_1 + 0xe198) = 0x43ec0000;
    FUN_1000200a0(param_1 + 0xe158);
  }
  if ((*(float *)(param_1 + 0xe2c8) != 1180.0) || (*(float *)(param_1 + 0xe2cc) != 0.0)) {
    *(undefined8 *)(param_1 + 0xe2c8) = 0x44938000;
    FUN_1000200a0(param_1 + 0xe288);
  }
  lVar6 = 0;
  uVar8 = 0;
  do {
    fVar11 = (float)((uint)(uVar8 >> 1) & 0x7fffffff) * 236.0;
    fVar13 = (float)((uint)uVar8 & 1) * 38.0 + 38.0;
    fVar12 = *(float *)(param_1 + 0xe5dc + lVar6);
    bVar5 = false;
    if ((*(float *)(param_1 + 0xe5d8 + lVar6) == fVar11) &&
       (bVar5 = false, !NAN(fVar12) && !NAN(fVar13))) {
      bVar5 = fVar12 == fVar13;
    }
    if (!bVar5) {
      *(float *)(param_1 + 0xe5d8 + lVar6) = fVar11;
      *(float *)(param_1 + 0xe5dc + lVar6) = fVar13;
      FUN_1000200a0(param_1 + 0xe598 + lVar6);
    }
    lVar9 = param_1 + 0xf638 + lVar6;
    fVar11 = (float)((uint)uVar8 + 2 >> 1) * 236.0 + -50.0;
    pfVar3 = (float *)(param_1 + 0xf67c + lVar6);
    bVar5 = false;
    if ((pfVar3[-1] == fVar11) && (bVar5 = false, !NAN(*pfVar3) && !NAN(fVar13))) {
      bVar5 = *pfVar3 == fVar13;
    }
    if (!bVar5) {
      pfVar3[-1] = fVar11;
      *(float *)(param_1 + 0xf67c + lVar6) = fVar13;
      FUN_1000200a0(lVar9);
    }
    local_a8 = (undefined1 *)0x3f800000;
    (**(code **)(*(long *)(param_1 + 0xf638 + lVar6) + 0x28))(lVar9,&local_a8);
    uVar8 = uVar8 + 1;
    lVar6 = lVar6 + 0x130;
  } while (uVar8 != 0xe);
  lVar6 = param_1 + 0xe440;
  if ((*(float *)(param_1 + 0xe488) != 1.5) || (*(float *)(param_1 + 0xe48c) != 1.5)) {
    *(undefined8 *)(param_1 + 0xe488) = uVar17;
    FUN_1000200a0(lVar6);
  }
  FUN_1006557ec(lVar6);
  FUN_10064e72c(0,lVar6,3,lVar7,3);
  FUN_10064e72c(0xc2000000,lVar6,2,lVar1,2);
  if ((*(float *)(param_1 + 0xcab8) != 1.5) || (*(float *)(param_1 + 0xcabc) != 1.5)) {
    *(undefined8 *)(param_1 + 0xcab8) = uVar17;
    FUN_1000200a0(plVar2);
  }
  fVar11 = (fVar14 + -2.0 + fVar15 + local_b8) * 0.5 + -5.0;
  if ((*(float *)(param_1 + 0xcab0) != local_b4 * 0.5) || (*(float *)(param_1 + 0xcab4) != fVar11))
  {
    *(float *)(param_1 + 0xcab0) = local_b4 * 0.5;
    *(float *)(param_1 + 0xcab4) = fVar11;
    FUN_1000200a0(plVar2);
  }
  local_a8 = &DAT_3f0000003f000000;
  (**(code **)(*plVar2 + 0x28))(plVar2,&local_a8);
  return;
}




void FUN_100065440(long param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined1 auStack_60 [48];
  
  FUN_100530200(auStack_60,DAT_101d91884,0,0);
  FUN_100644c34(param_1,auStack_60,1);
  uVar1 = 3;
  plVar2 = (long *)(param_1 + 0xc18);
  do {
    uVar1 = uVar1 - 1;
    (**(code **)(*plVar2 + 0x138))((float)(uVar1 & 0xffffffff) * 0.05 + 0.25,plVar2,0,1,1);
    plVar2 = plVar2 + 0x19;
  } while (uVar1 != 0);
  return;
}




void FUN_1000654dc(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ushort uVar6;
  long lVar7;
  ushort *puVar8;
  ulong uVar9;
  undefined8 local_68;
  
  uVar9 = 0;
  lVar7 = param_1 + 0x1278;
  do {
    FUN_1000672a0((float)(uVar9 & 0xffffffff) * 0.001,lVar7);
    uVar9 = uVar9 + 1;
    lVar7 = lVar7 + 0x3980;
  } while (uVar9 != 3);
  bVar1 = *(byte *)(param_1 + 0x106f0);
  *(byte *)(param_1 + 0x106f0) = bVar1 ^ 1;
  lVar7 = param_1 + 0xbef8;
  lVar2 = param_1 + 0xe3b8;
  if (bVar1 != 0) {
    lVar7 = param_1 + 0xe3b8;
    lVar2 = param_1 + 0xbef8;
  }
  FUN_100642324(lVar7);
  FUN_100642324(lVar2);
  uVar4 = FUN_10001f0d8();
  local_68 = 0x42c80000;
  FUN_10063f984(uVar4,&local_68);
  FUN_10063f0e8(0x3e19999a,uVar4);
  uVar5 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3e19999a,uVar5);
  lVar3 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
    *(int *)(lVar3 + 0x20014) = *(int *)(lVar3 + 0x20014) + 1;
    FUN_10063ee9c(puVar8);
    *(undefined ***)puVar8 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar3 + 0x20020) = *(int *)(lVar3 + 0x20020) + 1;
  }
  FUN_10063eee4(uVar5,puVar8);
  uVar5 = FUN_10001f4d4();
  FUN_10063f2a4(uVar5,uVar4);
  FUN_100642b7c(lVar7,uVar5);
  lVar7 = DAT_101dbd2f8;
  uVar6 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar6 == 0xffff) {
    puVar8 = (ushort *)0x0;
  }
  else {
    puVar8 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar6 * 0x40 + 0x10);
    if (uVar6 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar6 = 0xffff;
    }
    else {
      uVar6 = *puVar8;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar6;
    *(int *)(lVar7 + 0x20014) = *(int *)(lVar7 + 0x20014) + 1;
    FUN_10063ee9c(puVar8);
    *(undefined ***)puVar8 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar7 + 0x20020) = *(int *)(lVar7 + 0x20020) + 1;
  }
  uVar4 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e19999a,uVar4);
  FUN_10063eee4(puVar8,uVar4);
  uVar4 = FUN_10001f0d8();
  local_68 = 0x42c80000;
  FUN_10063f984(uVar4,&local_68);
  FUN_10063f0e8(0x3e19999a,uVar4);
  FUN_10063f130(uVar4,FUN_1000657e0);
  uVar4 = FUN_10001f4d4();
  FUN_10063f2a4(uVar4,puVar8);
  if ((*(float *)(lVar2 + 0x40) != -100.0) || (*(float *)(lVar2 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar2 + 0x40) = 0xc2c80000;
    FUN_1000200a0(lVar2);
  }
  if ((*(uint *)(lVar2 + 0x84) & 0x7f80) != 0) {
    *(uint *)(lVar2 + 0x84) = *(uint *)(lVar2 + 0x84) & 0xffff807f;
    FUN_1000200a0(lVar2);
  }
  FUN_100642b7c(lVar2,uVar4);
  return;
}




float FUN_1000657e0(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = (float)_sinf((param_1 * 0.5 * 3.1415927) / param_4);
  return param_2 + param_3 * fVar1;
}




void FUN_100065824(void)

{
  return;
}




void FUN_100065828(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10064221c();
  operator_delete(pvVar1);
  return;
}




void FUN_10006583c(void)

{
  return;
}




void FUN_100065850(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100065850_10144daf0;
  FUN_100065974(param_1 + 0x5af);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x2c88) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x2d40) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x2d58);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x2c88);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  FUN_10064221c(param_1 + 0x508);
  lVar1 = 0;
  do {
    thunk_FUN_100651068((long)param_1 + lVar1 + 10000);
    thunk_FUN_100651068((long)param_1 + lVar1 + 0x25e0);
    lVar1 = lVar1 + -0x260;
  } while (lVar1 != -0x1c80);
  FUN_10064221c(param_1 + 0x167);
  thunk_FUN_100651068(param_1 + 0x141);
  thunk_FUN_100530784(param_1 + 0x9a);
  FUN_10064e2bc(param_1 + 0x66);
  FUN_10064221c(param_1 + 0x55);
  thunk_FUN_100651068(param_1 + 0x2f);
  param_1[0x11] = &PTR_FUN_1014a7108;
  param_1[0x28] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2b);
  FUN_10064e2bc(param_1 + 0x11);
  FUN_10064221c(param_1);
  return;
}




void FUN_100065974(undefined8 *param_1)

{
  *param_1 = &PTR_thunk_FUN_100065974_10144de80;
  thunk_FUN_1001aa23c(param_1 + 0x13e);
  thunk_FUN_100651068(param_1 + 0x118);
  param_1[0xfa] = &PTR_FUN_1014a7108;
  param_1[0x111] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x114);
  FUN_10064e2bc(param_1 + 0xfa);
  param_1[0xdc] = &PTR_FUN_1014a7108;
  param_1[0xf3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xf6);
  FUN_10064e2bc(param_1 + 0xdc);
  param_1[0xbe] = &PTR_FUN_1014a7108;
  param_1[0xd5] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xd8);
  FUN_10064e2bc(param_1 + 0xbe);
  FUN_10064221c(param_1 + 0xad);
  param_1[0x83] = &PTR_FUN_1014a6db0;
  param_1[0x9a] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x9d);
  FUN_10064e2bc(param_1 + 0x83);
  param_1[0x59] = &PTR_FUN_1014a6db0;
  param_1[0x70] = &PTR_FUN_1014a6f10;
  thunk_FUN_100657580(param_1 + 0x73);
  FUN_10064e2bc(param_1 + 0x59);
  param_1[0x2e] = &PTR_FUN_1014a7f88;
  FUN_10064221c(param_1 + 0x45);
  FUN_10064e2bc(param_1 + 0x2e);
  thunk_FUN_10064e2bc(param_1 + 0x17);
  FUN_10064e2bc(param_1);
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100065a9c(void)

{
  DAT_101dc3b90 = 0xff;
  DAT_101dc3b92 = 0xffff;
  DAT_101dc3b94 = 0xffff;
  DAT_101dc3b96 = 0xffbc9c44;
  DAT_101dc3b9a = 0xff1166f2;
  DAT_101dc3b9e = 0xffe0e0e0;
  DAT_101dc3ba2 = 0xffa0a0a0;
  DAT_101dc3ba6 = 0xff8c8c8c;
  DAT_101dc3baa = 0xff322213;
  DAT_101dc3bae = 0xff091911;
  DAT_101dc3bb2 = 0xff170c19;
  DAT_101dc3bb6 = 0xff241a14;
  DAT_101dc3bba = 0xff14171c;
  DAT_101dc3bbe = 0xff221911;
  DAT_101dc3bc2 = 0xff1a1416;
  DAT_101dc3bc6 = 0xff121414;
  DAT_101dc3bca = 0xff1a1809;
  DAT_101dc3bce = 0xff141414;
  DAT_101dc3bd2 = 0xff141414;
  DAT_101dc3bd6 = 0xff2929c0;
  DAT_101dc3bda = 0xff283082;
  DAT_101dc3bde = 0xff5262cc;
  DAT_101dc3be2 = 0xff283082;
  DAT_101dc3be6 = 0xff5262cc;
  DAT_101dc3bea = 0xff745c42;
  DAT_101dc3bee = 0xff184155;
  DAT_101dc3bf2 = 0xff92665e;
  DAT_101dc3bf6 = 0xffbc9c44;
  DAT_101dc3bfa = 0xffbbae56;
  DAT_101dc3bfe = 0xff8b7b01;
  DAT_101dc3c02 = 0xff90b3ef;
  DAT_101dc3c06 = 0xff728ebe;
  DAT_101dc3c0a = 0xff19459d;
  DAT_101dc3c0e = 0xff9d877b;
  DAT_101dc3c12 = 0xffcbb1a3;
  DAT_101dc3c16 = 0xff3f6fb5;
  DAT_101dc3c1a = 0xffc5c5c5;
  DAT_101dc3c1e = 0xff4fc1f1;
  DAT_101dc3c22 = 0xff606060;
  DAT_101dc3c26 = 0xffc5ff7b;
  DAT_101dc3c2a = 0xff5271eb;
  DAT_101dc3c2e = 0xfffae076;
  DAT_101dc3c32 = 0xff3ac8f6;
  DAT_101dc3c36 = 0xffaaaaaa;
  DAT_101dc3c3a = 0xffe19400;
  DAT_101dc3c3e = 0xffe19400;
  DAT_101dc3c42 = 0xffe550b2;
  DAT_101dc3c46 = 0xfff22ae8;
  DAT_101dc3c4a = 0xff005ae1;
  DAT_101dc3c4e = 0xff1addfa;
  DAT_101dc3c52 = 0xff2424b3;
  DAT_101dc3c56 = 0xff2424b3;
  DAT_101dc3c5a = 0xff646464;
  DAT_101dc3c5e = 0xff92665e;
  DAT_101dc3c62 = 0xff646037;
  DAT_101dc3c68 = 0xffffffff;
  DAT_101dc3c6c = 0xff1111a1;
  DAT_101dc3c70 = 0xff321ee1;
  DAT_101dc3c74 = 0xffc8c8c8;
  DAT_101dc3c78 = 0xff321ee1;
  DAT_101dc3c7c = 0xff7fe801;
  DAT_101dc3c80 = 0xffffffff;
  DAT_101dc3c84 = 0xff6259b3;
  DAT_101dc3c88 = 0xff506e73;
  DAT_101dc3c8c = 0xff9dbf86;
  DAT_101dc3c90 = 0xffa35244;
  DAT_101dc3c94 = 0xffca828e;
  DAT_101dc3c98 = 0xffa6a6a6;
  DAT_101dc3c9c = 0xffa6a6a6;
  DAT_101dc3ca0 = 0xffffffff;
  DAT_101dc3ca4 = 0xff88ea2f;
  DAT_101dc3ca8 = 0xff8c8c8c;
  DAT_101dc3cac = 0xffffb400;
  DAT_101dc3cb0 = 0xffff00ff;
  DAT_101dc3cb4 = 0xff00aded;
  DAT_101dc3cb8 = 0xff33d3ff;
  DAT_101dc3cbc = 0xff7fe801;
  DAT_101dc3cc0 = 0xff282828;
  DAT_101dc3cc4 = 0xfff0f0f0;
  DAT_101dc3cc8 = 0xffa4781e;
  DAT_101dc3ccc = 0xffa6654b;
  DAT_101dc3cd0 = 0xff93435b;
  DAT_101dc3cd4 = 0xff387f9c;
  DAT_101dc3cd8 = 0xffa3781e;
  DAT_101dc3cdc = 0xffffd18a;
  DAT_101dc3ce0 = 0xffff61f7;
  DAT_101dc3ce4 = 0xff5de1f2;
  DAT_101dc3ce8 = 0xff80eaff;
  DAT_101dc3cec = 0xff32e00e;
  DAT_101dc3cf0 = 0xff5a3c10;
  DAT_101dc3cf4 = 0xff330b03;
  DAT_101dc3cf8 = 0xff33031d;
  DAT_101dc3cfc = 0xff032433;
  DAT_101dc3d00 = 0xff9e8e8d;
  uRam0000000101dc3dd8 = 0x7f7fffff7f7fffff;
  _DAT_101dc3dd0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3de8 = 0x7f7fffff7f7fffff;
  _DAT_101dc3de0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3df8 = 0x7f7fffff7f7fffff;
  _DAT_101dc3df0 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3e08 = 0x7f7fffff7f7fffff;
  _DAT_101dc3e00 = 0x7f7fffff7f7fffff;
  DAT_101dc3e10 = 0x7f7fffff;
  DAT_101dc3e14 = 0x7f7fffff;
  DAT_101dc3e18 = 0x7f7fffff;
  DAT_101dc3e1c = 0x3f800000;
  uRam0000000101dc3e28 = 0x7f7fffff7f7fffff;
  _DAT_101dc3e20 = 0x7f7fffff7f7fffff;
  DAT_101dc3e30 = 0x7f7fffff;
  DAT_101dc3e34 = 0x3eb33333;
  uRam0000000101dc3e40 = 0x7f7fffff7f7fffff;
  _DAT_101dc3e38 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3e50 = 0x7f7fffff7f7fffff;
  _DAT_101dc3e48 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3e60 = 0x7f7fffff7f7fffff;
  _DAT_101dc3e58 = 0x7f7fffff7f7fffff;
  uRam0000000101dc3e70 = 0x7f7fffff7f7fffff;
  _DAT_101dc3e68 = 0x7f7fffff7f7fffff;
  DAT_101dc3e78 = 0x7f7fffff;
  DAT_101dc3e7c = 0x7f7fffff;
  DAT_101dc3e80 = 0x7f7fffff;
  uRam0000000101dc3d18 = 0xff7fffffff7fffff;
  _DAT_101dc3d10 = 0xff7fffffff7fffff;
  DAT_101dc3d20 = 0;
  DAT_101dc3d28 = 0;
  uRam0000000101dc3d34 = 0xff7fffffff7fffff;
  _DAT_101dc3d2c = 0xff7fffffff7fffff;
  DAT_101dc3d3c = 0xff7fffff;
  DAT_101dc3d40 = 0xff7fffff;
  DAT_101dc3d44 = NEON_fmov(0xbf800000,4);
  DAT_101dc3d4c = 0x3f000000;
  DAT_101dc3d50 = 0;
  DAT_101dc3d58 = 0;
  uRam0000000101dc3d68 = 0xff7fffffff7fffff;
  _DAT_101dc3d60 = 0xff7fffffff7fffff;
  uRam0000000101dc3d78 = 0xff7fffffff7fffff;
  _DAT_101dc3d70 = 0xff7fffffff7fffff;
  uRam0000000101dc3d88 = 0xff7fffffff7fffff;
  _DAT_101dc3d80 = 0xff7fffffff7fffff;
  uRam0000000101dc3d98 = 0xbf800000bf800000;
  _DAT_101dc3d90 = 0xbf80000000000000;
  DAT_101dc3da0 = 0xbf800000;
  DAT_101dc3da4 = 0xff7fffff;
  DAT_101dc3da8 = 0xff7fffff;
  DAT_101dc3dac = 0xff7fffff;
  DAT_101dc3db0 = 0;
  DAT_101dc3db4 = 0xff7fffff;
  DAT_101dc3db8 = 0;
  DAT_101dc3dc0 = 0;
  return;
}




long FUN_10006621c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_100065850_10144daf0;
  thunk_FUN_100652c08(puVar1 + 0x11);
  thunk_FUN_100650e64(param_1 + 0x178);
  FUN_1006421a8(param_1 + 0x2a8);
  *(undefined ***)(param_1 + 0x2a8) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x330);
  FUN_10053077c(param_1 + 0x4d0,0);
  thunk_FUN_100650e64(param_1 + 0xa08);
  FUN_1006421a8(param_1 + 0xb38);
  lVar2 = 0;
  *(undefined ***)(param_1 + 0xb38) = &PTR_thunk_FUN_10064221c_10144b7e8;
  do {
    thunk_FUN_100650e64(param_1 + lVar2 + 0xbc0);
    thunk_FUN_100650e64(param_1 + lVar2 + 0xcf0);
    lVar2 = lVar2 + 0x260;
  } while (lVar2 != 0x1c80);
  FUN_1006421a8(param_1 + 0x2840);
  lVar2 = 0;
  *(undefined ***)(param_1 + 0x2840) = &PTR_thunk_FUN_10064221c_10144b7e8;
  do {
    thunk_FUN_100652c08(param_1 + 0x28c8 + lVar2);
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x4b0);
  thunk_FUN_10006f1e0(param_1 + 0x2d78);
  *(undefined4 *)(param_1 + 0x3974) = 0;
  *(undefined1 *)(param_1 + 0x3978) = 0;
  return param_1;
}




long thunk_FUN_10006621c(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = (undefined8 *)FUN_1006421a8();
  *puVar1 = &PTR_thunk_FUN_100065850_10144daf0;
  thunk_FUN_100652c08(puVar1 + 0x11);
  thunk_FUN_100650e64(param_1 + 0x178);
  FUN_1006421a8(param_1 + 0x2a8);
  *(undefined ***)(param_1 + 0x2a8) = &PTR_thunk_FUN_10064221c_10144b7e8;
  thunk_FUN_1006543ec(param_1 + 0x330);
  FUN_10053077c(param_1 + 0x4d0,0);
  thunk_FUN_100650e64(param_1 + 0xa08);
  FUN_1006421a8(param_1 + 0xb38);
  lVar2 = 0;
  *(undefined ***)(param_1 + 0xb38) = &PTR_thunk_FUN_10064221c_10144b7e8;
  do {
    thunk_FUN_100650e64(param_1 + lVar2 + 0xbc0);
    thunk_FUN_100650e64(param_1 + lVar2 + 0xcf0);
    lVar2 = lVar2 + 0x260;
  } while (lVar2 != 0x1c80);
  FUN_1006421a8(param_1 + 0x2840);
  lVar2 = 0;
  *(undefined ***)(param_1 + 0x2840) = &PTR_thunk_FUN_10064221c_10144b7e8;
  do {
    thunk_FUN_100652c08(param_1 + 0x28c8 + lVar2);
    lVar2 = lVar2 + 0xf0;
  } while (lVar2 != 0x4b0);
  thunk_FUN_10006f1e0(param_1 + 0x2d78);
  *(undefined4 *)(param_1 + 0x3974) = 0;
  *(undefined1 *)(param_1 + 0x3978) = 0;
  return param_1;
}




void FUN_100066318(long *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  undefined1 *local_150;
  undefined1 auStack_148 [8];
  void *local_140;
  undefined1 auStack_138 [4];
  undefined1 auStack_134 [4];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [128];
  long local_90;
  
  local_90 = *(long *)PTR____stack_chk_guard_101444218;
  param_1[0x72c] = param_2;
  *(int *)(param_1 + 0x72e) = (int)param_3;
  lVar14 = *(long *)(param_2 + 0x18);
  while ((lVar14 != 0 && (*(int *)(*(long *)(lVar14 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar14 = *(long *)(lVar14 + 0x20);
  }
  lVar10 = FUN_1003c1b18(lVar14,param_3);
  param_1[0x72d] = lVar10;
  FUN_100641464(auStack_134,auStack_138);
  plVar13 = param_1 + 0x11;
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  plVar1 = param_1 + 0x2f;
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  plVar6 = param_1 + 0x508;
  (**(code **)(*param_1 + 0x78))(param_1,plVar6,1);
  (**(code **)(*param_1 + 0x78))(param_1,param_1 + 0x55,1);
  plVar2 = param_1 + 0x167;
  (**(code **)(*param_1 + 0x78))(param_1,plVar2,1);
  *(uint *)((long)param_1 + 0xbbc) = *(uint *)((long)param_1 + 0xbbc) & 0xfffffffb;
  puVar7 = PTR_s_build___HUDPartsHero__s_png_10184e0b8;
  FUN_1004654a0(param_1[0x72c]);
  FUN_1004d2698(auStack_110,puVar7);
  if ((*(float *)(param_1 + 0x1b) != 0.0) || (*(float *)((long)param_1 + 0xdc) != 0.4)) {
    param_1[0x1b] = 0x3ecccccd00000000;
    FUN_1000200a0(plVar13);
  }
  if ((*(float *)(param_1 + 0x19) != 0.0) || (*(float *)((long)param_1 + 0xcc) != 72.0)) {
    param_1[0x19] = 0x4290000000000000;
    FUN_1000200a0(plVar13);
  }
  FUN_10064e47c(0x43100000,0x43100000,plVar13);
  FUN_100652ca4(plVar13,auStack_110);
  FUN_1004d2698(auStack_130,"ability_icon_%d");
  FUN_100652cdc(plVar13,auStack_130);
  if ((*(float *)(param_1 + 0x39) != 0.0) || (*(float *)((long)param_1 + 0x1cc) != 0.4)) {
    param_1[0x39] = 0x3ecccccd00000000;
    FUN_1000200a0(plVar1);
  }
  if ((*(float *)(param_1 + 0x37) != 176.0) || (*(float *)((long)param_1 + 0x1bc) != 88.0)) {
    param_1[0x37] = 0x42b0000043300000;
    FUN_1000200a0(plVar1);
  }
  FUN_10065179c(0x438e0000,0,0x3f800000,plVar1);
  FUN_100651038(plVar1,PTR_s_build___Fonts_Brandon_Regular_40_10184e1f8);
  plVar13 = param_1 + 0x66;
  FUN_100642bd8(param_1 + 0x55,plVar13,1);
  plVar3 = param_1 + 0x9a;
  FUN_100642bd8(plVar13,plVar3,1);
  plVar4 = param_1 + 0x141;
  FUN_1005308f8(plVar3,plVar4,1);
  FUN_100654488(plVar13,1);
  FUN_10064e47c(0x43f50000,0x43cf8000,plVar13);
  if ((*(float *)(param_1 + 0x6e) != 0.0) || (*(float *)((long)param_1 + 0x374) != 204.0)) {
    param_1[0x6e] = 0x434c000000000000;
    FUN_1000200a0(plVar13);
  }
  FUN_100651708(0x43e60000,plVar4,1);
  FUN_100651038(plVar4,PTR_s_build___Fonts_Avenir_Medium_30_f_10184e2a8);
  FUN_100651460(plVar4,&DAT_101dc3e9e);
  uVar15 = 0;
  *(uint *)((long)param_1 + 0xbbc) = *(uint *)((long)param_1 + 0xbbc) & 0xffffffbf;
  plVar12 = param_1 + 0x178;
  do {
    FUN_100642bd8(plVar2,plVar12,1);
    plVar5 = plVar12 + 0x26;
    FUN_100642bd8(plVar2,plVar5,1);
    FUN_100651038(plVar12,PTR_s_build___Fonts_Avenir_Medium_30_f_10184e2a8);
    if ((*(float *)(plVar12 + 10) != 1.0) || (*(float *)((long)plVar12 + 0x54) != 0.0)) {
      plVar12[10] = 0x3f800000;
      FUN_1000200a0(plVar12);
    }
    fVar17 = 32.0;
    if (uVar15 < 4) {
      fVar17 = 0.0;
    }
    fVar17 = (float)(uVar15 & 0xffffffff) * 40.0 + 204.0 + fVar17;
    if ((*(float *)(plVar12 + 8) != 220.0) || (*(float *)((long)plVar12 + 0x44) != fVar17)) {
      *(undefined4 *)(plVar12 + 8) = 0x435c0000;
      *(float *)((long)plVar12 + 0x44) = fVar17;
      FUN_1000200a0(plVar12);
    }
    FUN_100651460(plVar12,&DAT_101dc3ea2);
    uVar11 = 0x436c0000;
    if ((*(float *)(plVar12 + 0x2e) != 236.0) || (*(float *)((long)plVar12 + 0x174) != fVar17)) {
      *(undefined4 *)(plVar12 + 0x2e) = 0x436c0000;
      *(float *)((long)plVar12 + 0x174) = fVar17;
      FUN_1000200a0(plVar5);
    }
    FUN_100651038(plVar5,PTR_s_build___Fonts_Avenir_Medium_30_f_10184e2a8);
    FUN_100651460(plVar5,&DAT_101dc3e9e);
    uVar15 = uVar15 + 1;
    plVar12 = plVar12 + 0x4c;
  } while (uVar15 != 0xc);
  lVar10 = 0;
  do {
    FUN_100642bd8(plVar6,(long)param_1 + lVar10 + 0x28c8,1);
    fVar17 = (float)uVar11;
    lVar10 = lVar10 + 0xf0;
  } while (lVar10 != 0x4b0);
  uVar11 = FUN_1004e0150(*(undefined8 *)param_1[0x72d],0);
  FUN_1006513c0(plVar1,uVar11);
  uVar11 = FUN_1004e0150(*(undefined8 *)(param_1[0x72d] + 0x20),0);
  thunk_FUN_1004e439c(auStack_148,uVar11);
  FUN_1000ecbe8(auStack_148,param_1[0x72d]);
  FUN_1000f2b7c(auStack_148);
  FUN_1006513c0(plVar4,auStack_148);
  FUN_100530be0(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                PTR_s_scrollbar_button_fill_top_101854958,
                PTR_s_scrollbar_button_fill_middle_101854960,
                PTR_s_scrollbar_button_fill_bottom_101854968);
  uVar11 = FUN_10064e3cc(plVar13);
  FUN_100651184(plVar4);
  FUN_10053093c(uVar11,plVar3);
  FUN_100530a94(plVar3);
  fVar16 = fVar17;
  FUN_10064e3cc(plVar13);
  FUN_100530adc(plVar3,0,fVar16 < fVar17);
  FUN_100530bb4(0x3ecccccd,0x3f800000,plVar3);
  FUN_100530c04(plVar3,fVar16 < fVar17);
  *(uint *)((long)param_1 + 0x554) = *(uint *)((long)param_1 + 0x554) & 0xffffffbf;
  if (fVar16 < fVar17) {
    FUN_100531b88(plVar3);
  }
  uVar9 = FUN_1004618b8(lVar14,(int)param_1[0x72e]);
  if (uVar9 != 0) {
    uVar15 = 0;
    plVar13 = param_1 + 0x519;
    do {
      FUN_100652ca4(plVar13,PTR_s_build___HUDPartsCommon_atlas_10184e098);
      FUN_100652cdc(plVar13,"hud_ability_level_dot_dim");
      local_150 = &DAT_3f0000003f000000;
      (**(code **)(*plVar13 + 0x28))(plVar13,&local_150);
      fVar17 = (float)((double)((float)(uVar15 & 0xffffffff) * 16.0) - (double)(uVar9 - 1) * 8.0);
      if ((*(float *)(plVar13 + 8) != fVar17) || (*(float *)((long)plVar13 + 0x44) != 0.0)) {
        *(float *)(plVar13 + 8) = fVar17;
        *(undefined4 *)((long)plVar13 + 0x44) = 0;
        FUN_1000200a0(plVar13);
      }
      uVar15 = uVar15 + 1;
      plVar13 = plVar13 + 0x1e;
    } while (uVar9 != uVar15);
  }
  bVar8 = false;
  if ((*(float *)(param_1 + 0x512) == 0.5) &&
     (bVar8 = false, !NAN(*(float *)((long)param_1 + 0x2894)))) {
    bVar8 = *(float *)((long)param_1 + 0x2894) == 0.5;
  }
  if (!bVar8) {
    param_1[0x512] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar6);
  }
  if ((*(float *)(param_1 + 0x510) != 72.0) || (*(float *)((long)param_1 + 0x2884) != 168.0)) {
    param_1[0x510] = 0x4328000042900000;
    FUN_1000200a0(plVar6);
  }
  plVar13 = param_1 + 0x5af;
  FUN_10006f6fc(plVar13,param_1[0x72c],(int)param_1[0x72e],param_4);
  if ((*(float *)(param_1 + 0x5b7) != 0.0) || (*(float *)((long)param_1 + 0x2dbc) != -50.0)) {
    *(undefined4 *)(param_1 + 0x5b7) = 0;
    *(undefined4 *)((long)param_1 + 0x2dbc) = 0xc2480000;
    FUN_1000200a0(plVar13);
  }
  FUN_10064e47c(0x43100000,0x427a0000,plVar13);
  *(uint *)((long)param_1 + 0x2dfc) = *(uint *)((long)param_1 + 0x2dfc) & 0xffffffbf | 4;
  (**(code **)(*param_1 + 0x78))(param_1,plVar13,1);
  if (local_140 != (void *)0x0) {
    operator_delete__(local_140);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100066b2c(long param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_90 [8];
  void *local_88;
  undefined1 auStack_80 [8];
  void *local_78;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x3960) + 0x18);
  while ((lVar9 != 0 && (*(int *)(*(long *)(lVar9 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar9 = *(long *)(lVar9 + 0x20);
  }
  uVar4 = FUN_1003a4970(lVar9,*(undefined4 *)(param_1 + 0x3970));
  uVar5 = FUN_1004618b8(lVar9,*(undefined4 *)(param_1 + 0x3970));
  uVar12 = 0;
  lVar9 = *(long *)(*(long *)(param_1 + 0x3960) + 0x40);
  fVar14 = *(float *)(lVar9 + 0xd8) + *(float *)(lVar9 + 0x18c) * (*(float *)(lVar9 + 0x2f4) + 1.0);
  fVar15 = (float)NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar9 + 0x240),DAT_101dc41a0);
  fVar14 = DAT_101dc40e0;
  if (DAT_101dc40e0 <= fVar15) {
    fVar14 = fVar15;
  }
  uVar4 = uVar4 & 0xffffffff;
  lVar9 = param_1 + 0x28c8;
  do {
    if (uVar12 < uVar4) {
      FUN_100652cdc(lVar9,"hud_ability_level_dot_lit");
    }
    uVar12 = uVar12 + 1;
    lVar9 = lVar9 + 0xf0;
  } while (uVar12 != 5);
  uVar6 = FUN_1004e0150("STAT_LABEL_TYPE",0);
  FUN_1006513c0(param_1 + 0xbc0,uVar6);
  uVar6 = FUN_1004e0150(*(undefined8 *)(*(long *)(param_1 + 0x3968) + 0x18),0);
  FUN_1006513c0(param_1 + 0xcf0,uVar6);
  fVar15 = *(float *)(*(long *)(param_1 + 0x3968) + 0x84);
  if (fVar15 <= 0.0) {
    lVar9 = FUN_10034c30c("Range",*(long *)(param_1 + 0x3968),0);
    if (lVar9 == 0) {
      fVar15 = 0.0;
    }
    else {
      fVar15 = *(float *)(lVar9 + 8);
    }
  }
  iVar10 = (int)fVar14;
  FUN_1004e313c(auStack_80);
  if (fVar15 <= 0.0) {
    FUN_1004e3120(auStack_90,"n/a");
    FUN_1000153b4(auStack_80,auStack_90);
    if (local_88 != (void *)0x0) {
      operator_delete__(local_88);
    }
  }
  else {
    FUN_1004e38ac(auStack_80,"%.1f");
  }
  uVar6 = FUN_1004e0150("STAT_LABEL_RANGE",0);
  FUN_1006513c0(param_1 + 0xe20,uVar6);
  FUN_1006513c0(param_1 + 0xf50,auStack_80);
  lVar9 = FUN_10034c30c("Energy Cost",*(undefined8 *)(param_1 + 0x3968),0);
  if (lVar9 != 0) {
    uVar6 = FUN_1000eff84(0x36);
    FUN_100066f3c(lVar9,uVar6,1,uVar4,uVar5,iVar10,param_1 + 0x1080);
  }
  lVar9 = FUN_10034c30c("Cooldown",*(undefined8 *)(param_1 + 0x3968),0);
  if (lVar9 != 0) {
    uVar6 = FUN_1000eff84(0x2c);
    FUN_100066f3c(lVar9,uVar6,4,uVar4,uVar5,iVar10,param_1 + 0x12e0);
  }
  lVar9 = *(long *)(param_1 + 0x3968);
  plVar8 = *(long **)(lVar9 + 0xa8);
  lVar11 = *plVar8;
  if (lVar11 == 0) {
    uVar12 = 4;
  }
  else {
    uVar12 = 4;
    do {
      plVar8 = plVar8 + 1;
      if (*(char *)(lVar11 + 0x58) == '\0') {
        lVar9 = *(long *)(*(long *)(param_1 + 0x3960) + 0x40);
        fVar14 = *(float *)(lVar9 + 0x38) +
                 *(float *)(lVar9 + 0xec) * (*(float *)(lVar9 + 0x254) + 1.0);
        NEON_fminnm(fVar14 + fVar14 * *(float *)(lVar9 + 0x1a0),DAT_101dc4100);
        fVar14 = DAT_101dc4040 - *(float *)(lVar9 + 0x38);
        uVar6 = FUN_1000eff84(*(undefined4 *)(lVar11 + 0x54));
        FUN_1000670e8(fVar14,lVar11,uVar6,1,uVar4,uVar5,iVar10,param_1 + uVar12 * 0x260 + 0xbc0);
        uVar12 = (ulong)((int)uVar12 + 1);
      }
      lVar11 = *plVar8;
    } while (lVar11 != 0 && (uint)uVar12 < 0xc);
    lVar9 = *(long *)(param_1 + 0x3968);
  }
  puVar7 = *(undefined8 **)(lVar9 + 0xb0);
  puVar13 = (undefined8 *)*puVar7;
  bVar1 = false;
  bVar2 = true;
  if (puVar13 != (undefined8 *)0x0) {
    bVar2 = 10 < (uint)uVar12;
    bVar1 = (uint)uVar12 == 0xb;
  }
  if (!bVar2 || bVar1) {
    do {
      puVar7 = puVar7 + 1;
      iVar3 = _strcasecmp("Energy Cost",(char *)*puVar13);
      if ((((iVar3 != 0) && (iVar3 = _strcasecmp("Cooldown",(char *)*puVar13), iVar3 != 0)) &&
          (iVar3 = _strcasecmp("Range",(char *)*puVar13), iVar3 != 0)) &&
         ((*(int *)((long)puVar13 + 0x2c) != 0 && (*(char *)((long)puVar13 + 0x34) == '\0')))) {
        uVar6 = FUN_1000eff68(puVar13);
        FUN_100066f3c(puVar13,uVar6,*(undefined4 *)((long)puVar13 + 0x2c),uVar4,uVar5,iVar10,
                      param_1 + uVar12 * 0x260 + 0xbc0);
        uVar12 = (ulong)((int)uVar12 + 1);
      }
      puVar13 = (undefined8 *)*puVar7;
    } while (puVar13 != (undefined8 *)0x0 && (uint)uVar12 < 0xc);
  }
  if (local_78 != (void *)0x0) {
    operator_delete__(local_78);
  }
  return;
}




void FUN_100066f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,undefined8 param_6,long param_7)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  
  if (((DAT_101dc4018 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101dc4018), iVar2 != 0)) {
    FUN_1004e313c(&DAT_101dc4008);
    ___cxa_atexit(FUN_100046198,&DAT_101dc4008,0x100000000);
    ___cxa_guard_release(&DAT_101dc4018);
  }
  uVar3 = (uint)param_4;
  uVar4 = FUN_1003df578(param_1,param_4,uVar3 == param_5,param_6);
  uVar5 = uVar4;
  if (uVar3 != param_5) {
    uVar5 = FUN_1003df578(param_1,uVar3 + 1,uVar3 + 1 == param_5,param_6);
  }
  fVar6 = (float)uVar5 - (float)uVar4;
  FUN_1000ee590(uVar4,param_3,&DAT_101dc4008,0);
  if ((fVar6 != 0.0 && uVar3 != 0) && uVar3 < param_5) {
    FUN_1004e313c(auStack_70);
    FUN_1000ee590(fVar6,param_3,auStack_70,0);
    pcVar1 = " +";
    if (fVar6 <= 0.0) {
      pcVar1 = "";
    }
    FUN_1004e3120(auStack_80,pcVar1);
    FUN_1004e372c(&DAT_101dc4008,auStack_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1004e372c(&DAT_101dc4008,auStack_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
  }
  FUN_1006513c0(param_7,param_2);
  FUN_1006513c0(param_7 + 0x130,&DAT_101dc4008);
  return;
}




void FUN_1000670e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,undefined8 param_7,long param_8)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float fVar6;
  undefined1 auStack_80 [8];
  void *local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  
  if (((DAT_101dc4030 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_101dc4030), iVar2 != 0)) {
    FUN_1004e313c(&DAT_101dc4020);
    ___cxa_atexit(FUN_100046198,&DAT_101dc4020,0x100000000);
    ___cxa_guard_release(&DAT_101dc4030);
  }
  uVar3 = (uint)param_5;
  uVar4 = FUN_1003df4f8(param_1,param_2,param_5,uVar3 == param_6,param_7);
  uVar5 = uVar4;
  if (uVar3 != param_6) {
    uVar5 = FUN_1003df4f8(param_1,param_2,uVar3 + 1,uVar3 + 1 == param_6,param_7);
  }
  fVar6 = (float)uVar5 - (float)uVar4;
  FUN_1000ee590(uVar4,param_4,&DAT_101dc4020,0);
  if ((fVar6 != 0.0 && uVar3 != 0) && uVar3 < param_6) {
    FUN_1004e313c(auStack_70);
    FUN_1000ee590(fVar6,param_4,auStack_70,0);
    pcVar1 = " +";
    if (fVar6 <= 0.0) {
      pcVar1 = "";
    }
    FUN_1004e3120(auStack_80,pcVar1);
    FUN_1004e372c(&DAT_101dc4020,auStack_80);
    if (local_78 != (void *)0x0) {
      operator_delete__(local_78);
    }
    FUN_1004e372c(&DAT_101dc4020,auStack_70);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
  }
  FUN_1006513c0(param_8,param_3);
  FUN_1006513c0(param_8 + 0x130,&DAT_101dc4020);
  return;
}




void FUN_1000672a0(undefined8 param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ushort uVar8;
  ushort *puVar9;
  undefined8 local_78;
  
  bVar2 = *(byte *)(param_2 + 0x3978);
  *(byte *)(param_2 + 0x3978) = bVar2 ^ 1;
  *(uint *)(param_2 + 0x554) = *(uint *)(param_2 + 0x554) & 0xffffffef | (uint)bVar2 << 4;
  lVar1 = param_2 + 0xb38;
  lVar3 = param_2 + 0x2a8;
  if (bVar2 == 0) {
    lVar1 = param_2 + 0x2a8;
    lVar3 = param_2 + 0xb38;
  }
  FUN_100642324(lVar1);
  FUN_100642324(lVar3);
  uVar5 = FUN_10001f55c();
  FUN_10063f0e8(param_1);
  uVar6 = FUN_10001f0d8();
  local_78 = 0x42c80000;
  FUN_10063f984(uVar6,&local_78);
  FUN_10063f0e8(0x3e19999a,uVar6);
  uVar7 = FUN_100047714();
  FUN_10063fce0(0);
  FUN_10063f0e8(0x3e19999a,uVar7);
  lVar4 = DAT_101dbd2f8;
  uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
    *(int *)(lVar4 + 0x20014) = *(int *)(lVar4 + 0x20014) + 1;
    FUN_10063ee9c(puVar9);
    *(undefined ***)puVar9 = &PTR_thunk_FUN_10063eeb4_1014a5338;
    *(int *)(lVar4 + 0x20020) = *(int *)(lVar4 + 0x20020) + 1;
  }
  FUN_10063eee4(uVar7,puVar9);
  uVar7 = FUN_10001f4d4();
  FUN_10063f2a4(uVar7,uVar6);
  FUN_100642b7c(lVar1,uVar5);
  uVar5 = FUN_10001f55c();
  FUN_10063f0e8(param_1);
  lVar1 = DAT_101dbd2f8;
  uVar8 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar8 == 0xffff) {
    puVar9 = (ushort *)0x0;
  }
  else {
    puVar9 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar8 * 0x40 + 0x10);
    if (uVar8 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar8 = 0xffff;
    }
    else {
      uVar8 = *puVar9;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar8;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    FUN_10063ee9c(puVar9);
    *(undefined ***)puVar9 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  uVar6 = FUN_100047714();
  FUN_10063fce0(0x3f800000);
  FUN_10063f0e8(0x3e19999a,uVar6);
  FUN_10063eee4(puVar9,uVar6);
  uVar6 = FUN_10001f0d8();
  local_78 = 0x42c80000;
  FUN_10063f984(uVar6,&local_78);
  FUN_10063f0e8(0x3e19999a,uVar6);
  FUN_10063f130(uVar6,FUN_1000657e0);
  uVar6 = FUN_10001f4d4();
  FUN_10063f2a4(uVar6,puVar9);
  if ((*(float *)(lVar3 + 0x40) != -100.0) || (*(float *)(lVar3 + 0x44) != 0.0)) {
    *(undefined8 *)(lVar3 + 0x40) = 0xc2c80000;
    FUN_1000200a0(lVar3);
  }
  if ((*(uint *)(lVar3 + 0x84) & 0x7f80) != 0) {
    *(uint *)(lVar3 + 0x84) = *(uint *)(lVar3 + 0x84) & 0xffff807f;
    FUN_1000200a0(lVar3);
  }
  FUN_100642b7c(lVar3,uVar5);
  return;
}




void FUN_100067598(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x3960) + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_1003a4970(lVar2,*(undefined4 *)(param_1 + 0x3970));
  if (iVar1 == *(int *)(param_1 + 0x3974)) {
    return;
  }
  FUN_100066b2c(param_1);
  return;
}




void thunk_FUN_100065850(void)

{
  FUN_100065850();
  return;
}




void FUN_100067608(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100065850();
  operator_delete(pvVar1);
  return;
}




void FUN_10006761c(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100067648(void)

{
  DAT_101dc3e90 = 0xff;
  DAT_101dc3e92 = 0xffff;
  DAT_101dc3e94 = 0xffff;
  DAT_101dc3e96 = 0xffbc9c44;
  DAT_101dc3e9a = 0xff1166f2;
  DAT_101dc3e9e = 0xffe0e0e0;
  DAT_101dc3ea2 = 0xffa0a0a0;
  DAT_101dc3ea6 = 0xff8c8c8c;
  DAT_101dc3eaa = 0xff322213;
  DAT_101dc3eae = 0xff091911;
  DAT_101dc3eb2 = 0xff170c19;
  DAT_101dc3eb6 = 0xff241a14;
  DAT_101dc3eba = 0xff14171c;
  DAT_101dc3ebe = 0xff221911;
  DAT_101dc3ec2 = 0xff1a1416;
  DAT_101dc3ec6 = 0xff121414;
  DAT_101dc3eca = 0xff1a1809;
  DAT_101dc3ece = 0xff141414;
  DAT_101dc3ed2 = 0xff141414;
  DAT_101dc3ed6 = 0xff2929c0;
  DAT_101dc3eda = 0xff283082;
  DAT_101dc3ede = 0xff5262cc;
  DAT_101dc3ee2 = 0xff283082;
  DAT_101dc3ee6 = 0xff5262cc;
  DAT_101dc3eea = 0xff745c42;
  DAT_101dc3eee = 0xff184155;
  DAT_101dc3ef2 = 0xff92665e;
  DAT_101dc3ef6 = 0xffbc9c44;
  DAT_101dc3efa = 0xffbbae56;
  DAT_101dc3efe = 0xff8b7b01;
  DAT_101dc3f02 = 0xff90b3ef;
  DAT_101dc3f06 = 0xff728ebe;
  DAT_101dc3f0a = 0xff19459d;
  DAT_101dc3f0e = 0xff9d877b;
  DAT_101dc3f12 = 0xffcbb1a3;
  DAT_101dc3f16 = 0xff3f6fb5;
  DAT_101dc3f1a = 0xffc5c5c5;
  DAT_101dc3f1e = 0xff4fc1f1;
  DAT_101dc3f22 = 0xff606060;
  DAT_101dc3f26 = 0xffc5ff7b;
  DAT_101dc3f2a = 0xff5271eb;
  DAT_101dc3f2e = 0xfffae076;
  DAT_101dc3f32 = 0xff3ac8f6;
  DAT_101dc3f36 = 0xffaaaaaa;
  DAT_101dc3f3a = 0xffe19400;
  DAT_101dc3f3e = 0xffe19400;
  DAT_101dc3f42 = 0xffe550b2;
  DAT_101dc3f46 = 0xfff22ae8;
  DAT_101dc3f4a = 0xff005ae1;
  DAT_101dc3f4e = 0xff1addfa;
  DAT_101dc3f52 = 0xff2424b3;
  DAT_101dc3f56 = 0xff2424b3;
  DAT_101dc3f5a = 0xff646464;
  DAT_101dc3f5e = 0xff92665e;
  DAT_101dc3f62 = 0xff646037;
  DAT_101dc3f68 = 0xffffffff;
  DAT_101dc3f6c = 0xff1111a1;
  DAT_101dc3f70 = 0xff321ee1;
  DAT_101dc3f74 = 0xffc8c8c8;
  DAT_101dc3f78 = 0xff321ee1;
  DAT_101dc3f7c = 0xff7fe801;
  DAT_101dc3f80 = 0xffffffff;
  DAT_101dc3f84 = 0xff6259b3;
  DAT_101dc3f88 = 0xff506e73;
  DAT_101dc3f8c = 0xff9dbf86;
  DAT_101dc3f90 = 0xffa35244;
  DAT_101dc3f94 = 0xffca828e;
  DAT_101dc3f98 = 0xffa6a6a6;
  DAT_101dc3f9c = 0xffa6a6a6;
  DAT_101dc3fa0 = 0xffffffff;
  DAT_101dc3fa4 = 0xff88ea2f;
  DAT_101dc3fa8 = 0xff8c8c8c;
  DAT_101dc3fac = 0xffffb400;
  DAT_101dc3fb0 = 0xffff00ff;
  DAT_101dc3fb4 = 0xff00aded;
  DAT_101dc3fb8 = 0xff33d3ff;
  DAT_101dc3fbc = 0xff7fe801;
  DAT_101dc3fc0 = 0xff282828;
  DAT_101dc3fc4 = 0xfff0f0f0;
  DAT_101dc3fc8 = 0xffa4781e;
  DAT_101dc3fcc = 0xffa6654b;
  DAT_101dc3fd0 = 0xff93435b;
  DAT_101dc3fd4 = 0xff387f9c;
  DAT_101dc3fd8 = 0xffa3781e;
  DAT_101dc3fdc = 0xffffd18a;
  DAT_101dc3fe0 = 0xffff61f7;
  DAT_101dc3fe4 = 0xff5de1f2;
  DAT_101dc3fe8 = 0xff80eaff;
  DAT_101dc3fec = 0xff32e00e;
  DAT_101dc3ff0 = 0xff5a3c10;
  DAT_101dc3ff4 = 0xff330b03;
  DAT_101dc3ff8 = 0xff33031d;
  DAT_101dc3ffc = 0xff032433;
  DAT_101dc4000 = 0xff9e8e8d;
  uRam0000000101dc4108 = 0x7f7fffff7f7fffff;
  _DAT_101dc4100 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4118 = 0x7f7fffff7f7fffff;
  _DAT_101dc4110 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4128 = 0x7f7fffff7f7fffff;
  _DAT_101dc4120 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4138 = 0x7f7fffff7f7fffff;
  _DAT_101dc4130 = 0x7f7fffff7f7fffff;
  DAT_101dc4140 = 0x7f7fffff;
  DAT_101dc4144 = 0x7f7fffff;
  DAT_101dc4148 = 0x7f7fffff;
  DAT_101dc414c = 0x3f800000;
  uRam0000000101dc4158 = 0x7f7fffff7f7fffff;
  _DAT_101dc4150 = 0x7f7fffff7f7fffff;
  DAT_101dc4160 = 0x7f7fffff;
  DAT_101dc4164 = 0x3eb33333;
  uRam0000000101dc4170 = 0x7f7fffff7f7fffff;
  _DAT_101dc4168 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4180 = 0x7f7fffff7f7fffff;
  _DAT_101dc4178 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4190 = 0x7f7fffff7f7fffff;
  _DAT_101dc4188 = 0x7f7fffff7f7fffff;
  _DAT_101dc41a0 = 0x7f7fffff7f7fffff;
  _DAT_101dc4198 = 0x7f7fffff7f7fffff;
  DAT_101dc41a8 = 0x7f7fffff;
  DAT_101dc41ac = 0x7f7fffff;
  DAT_101dc41b0 = 0x7f7fffff;
  uRam0000000101dc4048 = 0xff7fffffff7fffff;
  _DAT_101dc4040 = 0xff7fffffff7fffff;
  DAT_101dc4050 = 0;
  DAT_101dc4058 = 0;
  uRam0000000101dc4064 = 0xff7fffffff7fffff;
  _DAT_101dc405c = 0xff7fffffff7fffff;
  DAT_101dc406c = 0xff7fffff;
  DAT_101dc4070 = 0xff7fffff;
  DAT_101dc4074 = NEON_fmov(0xbf800000,4);
  DAT_101dc407c = 0x3f000000;
  DAT_101dc4080 = 0;
  DAT_101dc4088 = 0;
  uRam0000000101dc4098 = 0xff7fffffff7fffff;
  _DAT_101dc4090 = 0xff7fffffff7fffff;
  uRam0000000101dc40a8 = 0xff7fffffff7fffff;
  _DAT_101dc40a0 = 0xff7fffffff7fffff;
  uRam0000000101dc40b8 = 0xff7fffffff7fffff;
  _DAT_101dc40b0 = 0xff7fffffff7fffff;
  uRam0000000101dc40c8 = 0xbf800000bf800000;
  _DAT_101dc40c0 = 0xbf80000000000000;
  DAT_101dc40d0 = 0xbf800000;
  DAT_101dc40d4 = 0xff7fffff;
  DAT_101dc40d8 = 0xff7fffff;
  DAT_101dc40dc = 0xff7fffff;
  DAT_101dc40e0 = 0;
  DAT_101dc40e4 = 0xff7fffff;
  DAT_101dc40e8 = 0;
  DAT_101dc40f0 = 0;
  return;
}




ulong FUN_100067dc8(long *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  uVar2 = thunk_FUN_100126ad4();
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)*param_1;
    uVar2 = 0;
    if (plVar3 != (long *)0x0) {
      if ((int)param_1[1] == (int)plVar3[1]) {
        lVar4 = (**(code **)(*plVar3 + 0x10))();
        uVar2 = 0;
        if (((lVar4 != 0) && (lVar4 = FUN_1003a7540(), uVar2 = 0, lVar4 != 0)) &&
           (uVar2 = FUN_1001311f4(), (int)uVar2 != 0)) {
          iVar1 = FUN_100461470(lVar4,param_2);
          uVar2 = (ulong)(iVar1 == 4);
        }
      }
      else {
        uVar2 = 0;
        *param_1 = 0;
        *(undefined4 *)(param_1 + 1) = DAT_101dc0b88;
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}




long * FUN_100067e64(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  ushort uVar17;
  bool bVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  uint uVar21;
  long *plVar22;
  ushort *puVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar19 = (undefined8 *)FUN_10064e20c();
  puVar23 = (ushort *)(puVar19 + 0x17);
  *puVar19 = &PTR_thunk_FUN_100069b04_10144dbf0;
  *puVar23 = *puVar23 & 0x8000 | 0x3ff;
  *(undefined4 *)(puVar19 + 0x18) = 0;
  puVar19[0x34] = puVar19;
  puVar19[0x35] = 0;
  *(undefined4 *)(puVar19 + 0x36) = DAT_101dc0b88;
  puVar19 = puVar19 + 0x37;
  FUN_10064e264(puVar19);
  thunk_FUN_100652c08(param_1 + 0x4e);
  plVar22 = param_1 + 0x6c;
  FUN_1006533a4();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0xe6;
  FUN_1006533a4();
  plVar2 = param_1 + 0x106;
  thunk_FUN_100650f44(plVar2,DAT_101d22ff0);
  plVar3 = param_1 + 300;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x14a;
  thunk_FUN_100650f44(plVar4,DAT_101d22ff8);
  plVar5 = param_1 + 0x170;
  thunk_FUN_100650f44(plVar5,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
  plVar6 = param_1 + 0x196;
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0x1b4;
  FUN_1006533a4();
  param_1[0x1d4] = 0;
  plVar8 = param_1 + 0x1d5;
  FUN_10064e264();
  thunk_FUN_100652c08();
  plVar9 = param_1 + 0x20a;
  FUN_10064e264(plVar9);
  lVar24 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar24 + 0x1108);
    lVar24 = lVar24 + 0xf0;
  } while (lVar24 != 0x4b0);
  plVar10 = param_1 + 0x2b7;
  thunk_FUN_100652c08(plVar10);
  plVar11 = param_1 + 0x2d5;
  thunk_FUN_1006543ec(plVar11);
  plVar12 = param_1 + 0x309;
  FUN_10064e264(plVar12);
  plVar13 = param_1 + 800;
  thunk_FUN_100652c08(plVar13);
  plVar14 = param_1 + 0x33e;
  thunk_FUN_100652c08(plVar14);
  plVar15 = param_1 + 0x35c;
  FUN_1001aa1d4();
  FUN_1004e3004(param_1 + 0x398);
  FUN_1004e3004(param_1 + 0x399);
  lVar24 = NEON_fmov(0x3f800000,4);
  param_1[0x39a] = lVar24;
  *(undefined4 *)(param_1 + 0x39b) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1cdc) = 3;
  *(undefined1 *)((long)param_1 + 0x1ce2) = 0;
  *(undefined2 *)(param_1 + 0x39c) = 0xff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar19,1);
  FUN_100642bd8(puVar19,param_1 + 0x4e,1);
  FUN_100642bd8(puVar19,plVar10,1);
  FUN_100642bd8(puVar19,plVar22,1);
  FUN_100642bd8(puVar19,param_1 + 0x8c,1);
  FUN_100642bd8(puVar19,param_1 + 0xaa,1);
  FUN_100642bd8(puVar19,param_1 + 200,1);
  FUN_100642bd8(puVar19,plVar1,1);
  FUN_100642bd8(puVar19,plVar3,1);
  FUN_100642bd8(puVar19,plVar4,1);
  FUN_100642bd8(puVar19,plVar2,1);
  FUN_100642bd8(puVar19,plVar5,1);
  FUN_100642bd8(puVar19,plVar7,1);
  FUN_100642bd8(puVar19,plVar6,1);
  FUN_100642bd8(puVar19,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  FUN_100642bd8(plVar12,plVar14,1);
  FUN_100642bd8(puVar19,plVar8,1);
  FUN_100642bd8(plVar8,param_1 + 0x1ec,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  lVar24 = 0;
  do {
    FUN_100642bd8(plVar9,(long)param_1 + lVar24 + 0x1108,1);
    lVar24 = lVar24 + 0xf0;
  } while (lVar24 != 0x4b0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar15,1);
  fVar25 = 0.5;
  bVar18 = false;
  if ((*(float *)(param_1 + 0x41) == 0.5) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x20c)))) {
    bVar18 = *(float *)((long)param_1 + 0x20c) == 0.5;
  }
  fVar26 = 0.5;
  if (!bVar18) {
    param_1[0x41] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar19);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  bVar18 = false;
  if ((*(float *)(param_1 + 0x76) == fVar26) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x3b4)) && !NAN(fVar25))) {
    bVar18 = *(float *)((long)param_1 + 0x3b4) == fVar25;
  }
  if (!bVar18) {
    *(float *)(param_1 + 0x76) = fVar26;
    *(float *)((long)param_1 + 0x3b4) = fVar25;
    FUN_1000200a0(plVar22);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  bVar18 = false;
  if ((*(float *)(param_1 + 0x96) == fVar26) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x4b4)) && !NAN(fVar25))) {
    bVar18 = *(float *)((long)param_1 + 0x4b4) == fVar25;
  }
  if (!bVar18) {
    *(float *)(param_1 + 0x96) = fVar26;
    *(float *)((long)param_1 + 0x4b4) = fVar25;
    FUN_1000200a0(param_1 + 0x8c);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  bVar18 = false;
  if ((*(float *)(param_1 + 0xb4) == fVar26) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x5a4)) && !NAN(fVar25))) {
    bVar18 = *(float *)((long)param_1 + 0x5a4) == fVar25;
  }
  if (!bVar18) {
    *(float *)(param_1 + 0xb4) = fVar26;
    *(float *)((long)param_1 + 0x5a4) = fVar25;
    FUN_1000200a0(param_1 + 0xaa);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0xd2) != fVar26) || (*(float *)((long)param_1 + 0x694) != fVar25)) {
    *(float *)(param_1 + 0xd2) = fVar26;
    *(float *)((long)param_1 + 0x694) = fVar25;
    FUN_1000200a0(param_1 + 200);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0xf0) != fVar26) || (*(float *)((long)param_1 + 0x784) != fVar25)) {
    *(float *)(param_1 + 0xf0) = fVar26;
    *(float *)((long)param_1 + 0x784) = fVar25;
    FUN_1000200a0(plVar1);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x110) != fVar26) || (*(float *)((long)param_1 + 0x884) != fVar25)) {
    *(float *)(param_1 + 0x110) = fVar26;
    *(float *)((long)param_1 + 0x884) = fVar25;
    FUN_1000200a0(plVar2);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x17a) != fVar26) || (*(float *)((long)param_1 + 0xbd4) != fVar25)) {
    *(float *)(param_1 + 0x17a) = fVar26;
    *(float *)((long)param_1 + 0xbd4) = fVar25;
    FUN_1000200a0(plVar5);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x1be) != fVar26) || (*(float *)((long)param_1 + 0xdf4) != fVar25)) {
    *(float *)(param_1 + 0x1be) = fVar26;
    *(float *)((long)param_1 + 0xdf4) = fVar25;
    FUN_1000200a0(plVar7);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x1a0) != fVar26) || (*(float *)((long)param_1 + 0xd04) != fVar25)) {
    *(float *)(param_1 + 0x1a0) = fVar26;
    *(float *)((long)param_1 + 0xd04) = fVar25;
    FUN_1000200a0(plVar6);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x1df) != fVar26) || (*(float *)((long)param_1 + 0xefc) != fVar25)) {
    *(float *)(param_1 + 0x1df) = fVar26;
    *(float *)((long)param_1 + 0xefc) = fVar25;
    FUN_1000200a0(plVar8);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x2df) != fVar26) || (*(float *)((long)param_1 + 0x16fc) != fVar25)) {
    *(float *)(param_1 + 0x2df) = fVar26;
    *(float *)((long)param_1 + 0x16fc) = fVar25;
    FUN_1000200a0(plVar11);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x313) != fVar26) || (*(float *)((long)param_1 + 0x189c) != fVar25)) {
    *(float *)(param_1 + 0x313) = fVar26;
    *(float *)((long)param_1 + 0x189c) = fVar25;
    FUN_1000200a0(plVar12);
  }
  if ((*(float *)(param_1 + 0x32a) != 0.5) || (*(float *)((long)param_1 + 0x1954) != 1.0)) {
    param_1[0x32a] = 0x3f8000003f000000;
    FUN_1000200a0(plVar13);
  }
  if ((*(float *)(param_1 + 0x348) != 0.5) || (*(float *)((long)param_1 + 0x1a44) != 0.0)) {
    param_1[0x348] = 0x3f000000;
    FUN_1000200a0(plVar14);
  }
  *(uint *)((long)param_1 + 0xf2c) = *(uint *)((long)param_1 + 0xf2c) | 4;
  if ((*(uint *)((long)param_1 + 0xfe4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xfe4) = *(uint *)((long)param_1 + 0xfe4) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x1ec);
  }
  *(uint *)((long)param_1 + 0x172c) = *(uint *)((long)param_1 + 0x172c) | 4;
  FUN_100654488(plVar11,1);
  FUN_100652cac(plVar13,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  *(byte *)(param_1 + 0x33b) = *(byte *)(param_1 + 0x33b) | 2;
  uVar21 = *(uint *)((long)param_1 + 0x1984);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1984) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar13);
    uVar21 = *(uint *)((long)param_1 + 0x1984);
  }
  *(uint *)((long)param_1 + 0x1984) = uVar21 | 4;
  FUN_100652cac(plVar14,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  *(byte *)(param_1 + 0x359) = *(byte *)(param_1 + 0x359) & 0xfd;
  uVar21 = *(uint *)((long)param_1 + 0x1a74);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1a74) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar14);
    uVar21 = *(uint *)((long)param_1 + 0x1a74);
  }
  *(uint *)((long)param_1 + 0x1a74) = uVar21 | 4;
  *(uint *)((long)param_1 + 0x18cc) = *(uint *)((long)param_1 + 0x18cc) & 0xfffffffb;
  FUN_100653464(plVar22,FUN_100068cc8,param_1);
  FUN_100653464(plVar1,FUN_100068d74,param_1);
  FUN_100651700(plVar2,0);
  FUN_100651460(plVar2,&DAT_10114bab9);
  FUN_1006516bc(plVar2,&DAT_101d22fe8);
  FUN_10065165c(plVar2,1);
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_corner");
  if ((*(float *)(param_1 + 0x136) != 1.0) || (*(float *)((long)param_1 + 0x9b4) != 0.0)) {
    param_1[0x136] = 0x3f800000;
    FUN_1000200a0(plVar3);
  }
  uVar21 = *(uint *)((long)param_1 + 0x9e4);
  if ((uVar21 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x9e4) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5280;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x135) != 1.8) || (*(float *)((long)param_1 + 0x9ac) != 1.8)) {
    param_1[0x135] = 0x3fe666663fe66666;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x9e4) = *(uint *)((long)param_1 + 0x9e4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x154) != 1.0) || (*(float *)((long)param_1 + 0xaa4) != 0.0)) {
    param_1[0x154] = 0x3f800000;
    FUN_1000200a0(plVar4);
  }
  FUN_100651460(plVar4,&DAT_10114bab9);
  *(uint *)((long)param_1 + 0xad4) = *(uint *)((long)param_1 + 0xad4) & 0xfffffffb;
  FUN_100651700(plVar5,0);
  FUN_100651460(plVar5,&DAT_10114bab9);
  FUN_1006516bc(plVar5,&DAT_101d22fe8);
  FUN_10065165c(plVar5,1);
  uVar21 = *(uint *)((long)param_1 + 0xc04);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc04) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652ca4(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uVar21 = *(uint *)((long)param_1 + 0xd34);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xd34) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar6);
    uVar21 = *(uint *)((long)param_1 + 0xd34);
  }
  *(uint *)((long)param_1 + 0xd34) = uVar21 & 0xfffffffb;
  FUN_100652ca4(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar7,"ability_energy_ring");
  uVar21 = *(uint *)((long)param_1 + 0xe24);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xe24) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar7);
    uVar21 = *(uint *)((long)param_1 + 0xe24);
  }
  *(uint *)((long)param_1 + 0xe24) = uVar21 & 0xfffffffb;
  FUN_100653464(plVar7,FUN_100068e20,param_1);
  *(uint *)((long)param_1 + 0x10d4) = *(uint *)((long)param_1 + 0x10d4) | 4;
  FUN_100652cac(plVar10,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  FUN_100652dd4(plVar10,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x2d2) = *(byte *)(param_1 + 0x2d2) | 2;
  uVar21 = *(uint *)((long)param_1 + 0x163c);
  if ((uVar21 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x163c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x7280;
    FUN_1000200a0(plVar10);
    uVar21 = *(uint *)((long)param_1 + 0x163c);
  }
  *(uint *)((long)param_1 + 0x163c) = uVar21 | 4;
  *(uint *)((long)param_1 + 0x5d4) = *(uint *)((long)param_1 + 0x5d4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6c4) = *(uint *)((long)param_1 + 0x6c4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x366) != 0.5) || (*(float *)((long)param_1 + 0x1b34) != 0.5)) {
    param_1[0x366] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar15);
  }
  uVar20 = FUN_100345b94();
  uVar20 = FUN_10034c450(uVar20,"*KindredHUDEffects*");
  FUN_10016a5c8();
  FUN_1001aa350(plVar15,uVar20);
  local_70 = DAT_101dbd484;
  local_98 = FUN_100068ed0;
  plVar22 = param_1 + 1;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&local_98);
  local_70 = DAT_101dbd458;
  local_98 = FUN_100068ed0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&local_98);
  local_70 = DAT_101dbd494;
  local_98 = thunk_FUN_10006beb0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&local_98);
  local_70 = DAT_101dbd48c;
  local_98 = thunk_FUN_10006bd94;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&local_98);
  local_70 = DAT_101dbd460;
  local_98 = thunk_FUN_10006bd94;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&local_98);
  local_70 = DAT_101dbd498;
  local_98 = FUN_100068ee0;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&local_98);
  local_70 = DAT_101dbd4a4;
  local_98 = FUN_100068f04;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&local_98);
  local_70 = DAT_101dbd4a0;
  local_98 = FUN_100068f0c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&local_98);
  uVar17 = *(ushort *)(param_1 + 0x17);
  plVar22 = param_1 + ((ulong)(uVar17 >> 10) & 0x1f) * 7 + 0x18;
  *(undefined4 *)plVar22 = 0;
  plVar22[1] = (long)FUN_100068f28;
  plVar22[2] = 0;
  plVar22[3] = (long)FUN_100069310;
  plVar22[4] = 0;
  plVar22[5] = (long)FUN_100069400;
  plVar22[6] = 0;
  uVar21 = uVar17 + 0x400;
  uVar16 = uVar17 & 0xffff83ff;
  plVar22 = param_1 + (ulong)(uVar21 >> 10 & 0x1f) * 7 + 0x18;
  *(undefined4 *)plVar22 = 1;
  plVar22[1] = (long)FUN_10006941c;
  plVar22[2] = 0;
  uVar21 = (uVar21 & 0x7c00 | uVar16) + 0x400;
  plVar22[5] = 0;
  plVar22[6] = 0;
  plVar22[3] = (long)FUN_100069560;
  plVar22[4] = 0;
  plVar22 = param_1 + (ulong)(uVar21 >> 10 & 0x1f) * 7 + 0x18;
  *(undefined4 *)plVar22 = 2;
  plVar22[1] = (long)FUN_100069628;
  plVar22[2] = 0;
  uVar21 = (uVar21 & 0x7c00 | uVar16) + 0x400;
  plVar22[3] = (long)FUN_1000696bc;
  plVar22[4] = 0;
  plVar22[5] = 0;
  plVar22[6] = 0;
  plVar22 = param_1 + (ulong)(uVar21 >> 10 & 0x1f) * 7 + 0x18;
  *(undefined4 *)plVar22 = 3;
  plVar22[1] = (long)FUN_10006971c;
  plVar22[2] = 0;
  plVar22[3] = (long)FUN_100069850;
  plVar22[4] = 0;
  plVar22[5] = (long)FUN_10006995c;
  plVar22[6] = 0;
  *(ushort *)(param_1 + 0x17) =
       ((ushort)uVar21 & 0x7c00 | (ushort)uVar16) + 0x400 & 0x7c00 | (ushort)uVar16;
  FUN_100069960(puVar23,0,1);
  FUN_100069960(puVar23,0,3);
  FUN_100069960(puVar23,2,0);
  FUN_100069960(puVar23,2,1);
  FUN_100069960(puVar23,2,3);
  FUN_100069960(puVar23,1,0);
  FUN_100069960(puVar23,1,2);
  FUN_100069960(puVar23,1,3);
  FUN_100069960(puVar23,3,0);
  FUN_100069960(puVar23,3,1);
  FUN_1000699e4(puVar23,0,0,0);
  return param_1;
}




void FUN_100068cc8(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x1cd0),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"ability_icon_inactive_overlay");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_100068d74(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)NEON_fminnm(1.0 - *(float *)(param_5 + 0x1cd4),0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"ability_icon_inactive_overlay");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_100068e20(undefined8 param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  float fVar2;
  
  fVar2 = (float)FUN_10006b354(param_5);
  fVar2 = (float)NEON_fminnm(1.0 - fVar2,0x3f800000);
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  uVar1 = FUN_1006575c4(param_3,"ability_energy_ring");
  FUN_100063164(*param_2,param_2[1],fVar2,0,0,0x3f000000,0x3f000000,0x3f800000,param_1,param_2,uVar1
                ,param_3,param_4,0,0,param_8,0x3f800000);
  return;
}




void FUN_100068ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10006b8e8(param_1,param_4);
  return;
}




void thunk_FUN_10006beb0(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x11 & 1) == 0) {
    FUN_1004e3004(param_1 + 0x1cc8);
    *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) | 1;
    FUN_10006bfd0(param_1);
    return;
  }
  FUN_10006b4e8(param_1);
  return;
}




void thunk_FUN_10006bd94(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if ((*(byte *)(param_1 + 0x1ce2) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x1ce2) & 8) != 0) {
      uStack_30 = *(undefined8 *)(param_1 + 0x1a8);
      uStack_28 = *(undefined4 *)(param_1 + 0x1b0);
      iVar1 = FUN_100067dc8(&uStack_30,*(undefined4 *)(param_1 + 0x1cd8));
      if ((iVar1 != 0) && (iVar1 = FUN_10006b42c(param_1), iVar1 != 0)) {
        *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) & 0xf7;
        FUN_10006b498(param_1);
      }
      uVar2 = FUN_10006abf8(param_1);
      if ((uVar2 & 1) == 0) {
        FUN_10006ab54(param_1);
        return;
      }
    }
  }
  else {
    uVar2 = FUN_10006abf8(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_10006b774(param_1);
      return;
    }
  }
  return;
}




void FUN_100068ee0(undefined8 param_1)

{
  FUN_10006b774();
  FUN_10006ab54(param_1);
  return;
}




void FUN_100068f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10006be64(param_1,param_4);
  return;
}




void FUN_100068f0c(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x11 & 1) == 0) {
    return;
  }
  FUN_10006b4e8();
  return;
}




void FUN_100068f28(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  int local_58 [2];
  
  plVar6 = *(long **)(param_3 + 0x1a8);
  if (plVar6 == (long *)0x0) {
LAB_100069080:
    FUN_10034cb58();
    return;
  }
  if (*(int *)(param_3 + 0x1b0) != (int)plVar6[1]) {
    *(undefined8 *)(param_3 + 0x1a8) = 0;
    *(undefined4 *)(param_3 + 0x1b0) = DAT_101dc0b88;
    goto LAB_100069080;
  }
  lVar7 = (**(code **)(*plVar6 + 0x10))();
  if (lVar7 == 0) goto LAB_100069080;
  lVar11 = *(long *)(lVar7 + 0x18);
  while ((lVar11 != 0 && (*(int *)(*(long *)(lVar11 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar11 = *(long *)(lVar11 + 0x20);
  }
  uVar3 = FUN_100461350(lVar11,*(undefined4 *)(param_3 + 0x1cd8));
  if ((uVar3 & 1) == 0) {
    uVar4 = FUN_1003b2aa0(lVar11,*(undefined4 *)(param_3 + 0x1cd8));
    uVar8 = FUN_1003b2a7c(lVar11,*(undefined4 *)(param_3 + 0x1cd8));
    if (1 < uVar4) {
      fVar12 = (float)FUN_1004613c0(lVar11,*(undefined4 *)(param_3 + 0x1cd8));
      fVar13 = (float)FUN_100461390(lVar11,*(undefined4 *)(param_3 + 0x1cd8));
      fVar12 = fVar12 / fVar13;
      if (fVar13 <= 0.0) {
        fVar12 = 0.0;
      }
      param_2 = (float)NEON_fminnm(fVar12,0x3f800000);
      *(float *)(param_3 + 0x1cd4) = param_2;
      *(byte *)(param_3 + 0x1ce2) =
           (byte)(((uint)((int)uVar8 == 0) << 0x17) >> 0x10) | *(byte *)(param_3 + 0x1ce2) & 0x7f;
      FUN_10006c360(param_3,uVar8);
    }
    if ((uVar3 >> 5 & 1) == 0) {
      if ((uVar3 >> 7 & 1) != 0) {
        pcVar9 = "ability_stunned_badge";
LAB_1000690b8:
        FUN_100652cdc(param_3 + 0xcb0,pcVar9);
        param_2 = 0.0;
        bVar2 = false;
        if ((*(float *)(param_3 + 0xcf4) == 0.0) &&
           (bVar2 = false, !NAN(*(float *)(param_3 + 0xcf0)))) {
          bVar2 = *(float *)(param_3 + 0xcf0) == 0.0;
        }
        if (!bVar2) {
          *(undefined8 *)(param_3 + 0xcf0) = 0;
          FUN_1000200a0(param_3 + 0xcb0);
        }
        uVar4 = *(uint *)(param_3 + 0xd34) | 4;
        goto LAB_1000690ec;
      }
      if (((uVar3 >> 8 & 1) != 0) || ((uVar3 >> 9 & 1) != 0)) {
        pcVar9 = "ability_silenced_badge";
        goto LAB_1000690b8;
      }
      if ((uVar3 >> 3 & 1) == 0) {
        if ((uVar3 & 0x452) != 0) goto LAB_100069060;
        uVar4 = *(uint *)(param_3 + 0xe24);
        if (((uVar4 >> 2 & 1) != 0) || (uVar10 = (uint)*(int3 *)(param_3 + 0x1ce0), (int)uVar10 < 0)
           ) {
          FUN_10006c104(param_3,0);
          uVar10 = (uint)*(uint3 *)(param_3 + 0x1ce0);
          uVar4 = *(uint *)(param_3 + 0xe24);
        }
        *(short *)(param_3 + 0x1ce0) = (short)uVar10;
        *(byte *)(param_3 + 0x1ce2) = (byte)(uVar10 >> 0x10) & 0x7f;
        *(uint *)(param_3 + 0xd34) = *(uint *)(param_3 + 0xd34) & 0xfffffffb;
        goto LAB_1000690f4;
      }
      FUN_100652cdc(param_3 + 0xcb0,"ability_energy_badge");
      param_2 = 0.0;
      bVar2 = false;
      if ((*(float *)(param_3 + 0xcf4) == 0.0) && (bVar2 = false, !NAN(*(float *)(param_3 + 0xcf0)))
         ) {
        bVar2 = *(float *)(param_3 + 0xcf0) == 0.0;
      }
      if (!bVar2) {
        *(undefined8 *)(param_3 + 0xcf0) = 0;
        FUN_1000200a0(param_3 + 0xcb0);
      }
      *(uint *)(param_3 + 0xd34) = *(uint *)(param_3 + 0xd34) | 4;
      uVar4 = *(uint *)(param_3 + 0xe24) | 4;
    }
    else {
LAB_100069060:
      uVar4 = *(uint *)(param_3 + 0xd34) & 0xfffffffb;
LAB_1000690ec:
      *(uint *)(param_3 + 0xd34) = uVar4;
      uVar4 = *(uint *)(param_3 + 0xe24);
LAB_1000690f4:
      uVar4 = uVar4 & 0xfffffffb;
    }
    *(uint *)(param_3 + 0xe24) = uVar4;
  }
  uVar14 = FUN_10064e3cc(param_3 + 0x1b8);
  FUN_10064e3cc(param_3 + 0x1b8);
  if ((*(byte *)(param_3 + 0xd34) >> 2 & 1) != 0) {
    fVar12 = (float)NEON_fminnm(uVar14,param_2);
    lVar1 = param_3 + 0xcb0;
    iVar5 = FUN_100652db4(lVar1);
    FUN_10034cb1c(local_58,"ability_energy_badge");
    if (iVar5 == local_58[0]) {
      fVar13 = 0.4;
    }
    else {
      fVar13 = 0.8;
    }
    fVar15 = (float)FUN_100652e60(lVar1);
    fVar15 = (fVar12 * fVar13) / fVar15;
    param_2 = (fVar12 * fVar13) / param_2;
    bVar2 = false;
    if ((*(float *)(param_3 + 0xcf8) == fVar15) &&
       (bVar2 = false, !NAN(*(float *)(param_3 + 0xcfc)) && !NAN(param_2))) {
      bVar2 = *(float *)(param_3 + 0xcfc) == param_2;
    }
    if (!bVar2) {
      *(float *)(param_3 + 0xcf8) = fVar15;
      *(float *)(param_3 + 0xcfc) = param_2;
      FUN_1000200a0(lVar1);
    }
  }
  if ((uVar3 >> 2 & 1) == 0) {
    if ((uVar3 != 0) ||
       (((iVar5 = FUN_1003a4970(lVar11,*(undefined4 *)(param_3 + 0x1cd8)), iVar5 == 0 ||
         (iVar5 = FUN_100460b78(lVar11,*(undefined4 *)(param_3 + 0x1cd8)), iVar5 == 0)) ||
        (iVar5 = FUN_1003c1088(lVar7,*(undefined4 *)(param_3 + 0x1cd8)), iVar5 == 0))))
    goto LAB_1000691fc;
    uVar8 = 1;
  }
  else {
    uVar8 = 3;
    if (((uVar3 >> 5 & 1) == 0) && ((uVar3 & 0x38a) != 0)) goto LAB_1000691fc;
  }
  FUN_1000699e4(param_3 + 0xb8,uVar8,0,0);
LAB_1000691fc:
  fVar12 = (float)FUN_1003bf0ac(lVar11,*(undefined4 *)(param_3 + 0x1cd8));
  fVar13 = (float)FUN_100461390(lVar11,*(undefined4 *)(param_3 + 0x1cd8));
  fVar12 = fVar12 / fVar13;
  if (fVar13 <= 0.0) {
    fVar12 = 0.0;
  }
  uVar14 = NEON_fminnm(fVar12,0x3f800000);
  *(undefined4 *)(param_3 + 0x1cd0) = uVar14;
  return;
}




void FUN_100069310(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x12 & 1) != 0) {
    *(uint *)(param_1 + 0x8b4) = *(uint *)(param_1 + 0x8b4) & 0xfffffffb;
  }
  FUN_10006aec4(param_1,1);
  FUN_10006afb4(param_1,0);
  plVar2 = *(long **)(param_1 + 0x1a8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      lVar3 = *(long *)(lVar3 + 0x18);
      while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
        lVar3 = *(long *)(lVar3 + 0x20);
      }
      iVar1 = FUN_1003b2aa0(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
      FUN_10006b058(param_1,iVar1 != 0);
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_101dc0b88;
    }
  }
  *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) & 0xfb;
  return;
}




void FUN_100069400(long param_1)

{
  *(uint *)(param_1 + 0xd34) = *(uint *)(param_1 + 0xd34) & 0xfffffffb;
  *(uint *)(param_1 + 0xe24) = *(uint *)(param_1 + 0xe24) & 0xfffffffb;
  return;
}




void FUN_10006941c(long param_1)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  
  plVar2 = *(long **)(param_1 + 0x1a8);
  if (plVar2 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar2[1]) {
      lVar3 = (**(code **)(*plVar2 + 0x10))();
      if (lVar3 != 0) {
        lVar3 = *(long *)(lVar3 + 0x18);
        while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
          lVar3 = *(long *)(lVar3 + 0x20);
        }
        uVar1 = FUN_100461350(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
        if ((uVar1 == 0 || (uVar1 & 4) != 0) && (((uVar1 >> 5 & 1) != 0 || ((uVar1 & 0x38a) == 0))))
        {
          if ((uVar1 >> 2 & 1) == 0) {
            fVar5 = (float)FUN_1004613c0(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
            fVar6 = (float)FUN_100461390(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
            fVar5 = fVar5 / fVar6;
            if (fVar6 <= 0.0) {
              fVar5 = 0.0;
            }
            uVar7 = NEON_fminnm(fVar5,0x3f800000);
            *(undefined4 *)(param_1 + 0x1cd4) = uVar7;
            uVar4 = FUN_1003b2a7c(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
            FUN_10006c360(param_1,uVar4);
            return;
          }
          uVar4 = 3;
        }
        else {
          uVar4 = 0;
        }
        FUN_1000699e4(param_1 + 0xb8,uVar4,0,0);
        return;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_101dc0b88;
    }
  }
  FUN_10034cb58();
  return;
}




void FUN_100069560(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x12 & 1) != 0) {
    *(uint *)(param_1 + 0x8b4) = *(uint *)(param_1 + 0x8b4) & 0xfffffffb;
  }
  FUN_10006aec4(param_1,0);
  FUN_10006afb4(param_1,*(byte *)(param_1 + 0x1ce2) >> 4 & 1);
  lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_1003b2aa0(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
  FUN_10006b058(param_1,iVar1 != 0);
  *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) & 0xfb;
  return;
}




void FUN_100069628(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  uVar1 = FUN_100461350(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
  if (uVar1 == 0) {
    uVar3 = 1;
  }
  else if ((uVar1 >> 2 & 1) == 0) {
    if ((uVar1 >> 1 & 1) != 0) {
      return;
    }
    uVar3 = 0;
  }
  else {
    uVar3 = 3;
  }
  FUN_1000699e4(param_1 + 0xb8,uVar3,0,0);
  return;
}




void FUN_1000696bc(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x12 & 1) != 0) {
    *(uint *)(param_1 + 0x8b4) = *(uint *)(param_1 + 0x8b4) & 0xfffffffb;
  }
  FUN_10006afb4(param_1,1);
  *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) & 0xfb;
  return;
}




void FUN_10006971c(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  
  lVar3 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x18);
  while ((lVar3 != 0 && (*(int *)(*(long *)(lVar3 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar3 = *(long *)(lVar3 + 0x20);
  }
  uVar8 = FUN_1003bf0ac(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
  fVar6 = (float)FUN_100461390(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
  FUN_10006c2ec(uVar8,param_1);
  iVar1 = FUN_1003b2aa0(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
  if (iVar1 != 0) {
    uVar4 = FUN_1003b2a7c(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
    FUN_10006c360(param_1,uVar4);
  }
  fVar7 = (float)uVar8 / fVar6;
  if (fVar6 <= 0.0) {
    fVar7 = 0.0;
  }
  fVar6 = (float)NEON_fminnm(fVar7,0x3f800000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0x1cd0) = fVar6;
  FUN_10006acc4(param_1);
  uVar2 = FUN_100461350(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
  if (uVar2 == 0) {
    uVar5 = FUN_100460b78(lVar3,*(undefined4 *)(param_1 + 0x1cd8));
    if ((uVar5 & 1) == 0) {
      return;
    }
    uVar8 = 1;
  }
  else {
    if (((uVar2 >> 2 & 1) != 0) && (((uVar2 >> 5 & 1) != 0 || ((uVar2 & 0x388) == 0)))) {
      return;
    }
    uVar8 = 0;
  }
  FUN_1000699e4(param_1 + 0xb8,uVar8,0,0);
  return;
}




void FUN_100069850(long param_1)

{
  int iVar1;
  long lVar2;
  
  if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x12 & 1) == 0) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
    lVar2 = *(long *)(lVar2 + 0x18);
    while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar2 = *(long *)(lVar2 + 0x20);
    }
    FUN_1003bf0ac(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
    FUN_10006c2ec(param_1);
    *(uint *)(param_1 + 0x8b4) = *(uint *)(param_1 + 0x8b4) | 4;
  }
  FUN_10006aec4(param_1,1);
  FUN_10006afb4(param_1,0);
  lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_1003b2aa0(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
  FUN_10006b058(param_1,iVar1 != 0);
  *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) | 4;
  FUN_1004e3004(param_1 + 0x1cc0);
  return;
}




void FUN_10006995c(void)

{
  return;
}




void FUN_100069960(ushort *param_1,uint param_2,uint param_3)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  ushort *puVar6;
  
  uVar4 = (ulong)(*param_1 >> 10) & 0x1f;
  uVar3 = (uint)uVar4;
  if (uVar3 != 0) {
    uVar2 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_2) goto LAB_100069994;
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar4 != uVar2);
    uVar2 = 0xffffffff;
LAB_100069994:
    uVar5 = 0;
    puVar6 = param_1 + 4;
    do {
      if (*puVar6 == param_3) {
        iVar1 = (int)uVar2;
        if (iVar1 == -1) {
          return;
        }
        param_1[(long)iVar1 * 0x1c + 5] =
             param_1[(long)iVar1 * 0x1c + 5] | (ushort)(1 << (ulong)(uVar5 & 0x1f));
        return;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 0x1c;
    } while (uVar3 != uVar5);
  }
  return;
}




void FUN_1000699e4(ushort *param_1,uint param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  if ((uVar1 >> 10 & 0x1f) != 0) {
    uVar2 = 0;
    puVar5 = param_1 + 4;
    do {
      if (*puVar5 == param_2) goto LAB_100069a28;
      uVar2 = uVar2 + 1;
      puVar5 = puVar5 + 0x1c;
    } while ((uVar1 >> 10 & 0x1f) != uVar2);
  }
  uVar2 = 0x1f;
LAB_100069a28:
  uVar3 = (ulong)uVar1 & 0x1f;
  if ((uint)uVar3 == 0x1f) {
    uVar1 = uVar1 & 0xfc1f;
  }
  else {
    if (uVar2 == (uint)uVar3) {
      return;
    }
    if ((param_1[uVar3 * 0x1c + 5] >> (ulong)(uVar2 & 0x1f) & 1) == 0) {
      return;
    }
    uVar1 = uVar1 & 0xfc1f | (ushort)((uVar2 & 0x1f) << 5);
    *param_1 = uVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar3 * 0x1c + 0x18);
    uVar4 = *(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) & 1;
    if (uVar4 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar4 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + uVar3 * 0x1c + 0x1c) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
      (*UNRECOVERED_JUMPTABLE)();
      uVar1 = *param_1;
    }
  }
  uVar2 = uVar2 & 0x1f;
  *param_1 = (ushort)uVar2 | uVar1 & 0xfc00 | 0x3e0;
  if (uVar2 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + (ulong)uVar2 * 0x1c + 0x10);
    uVar3 = *(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) & 1;
    if (uVar3 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar3 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + (ulong)uVar2 * 0x1c + 0x14) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x000100069a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




long * thunk_FUN_100067e64(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  uint uVar16;
  ushort uVar17;
  bool bVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  uint uVar21;
  long *plVar22;
  ushort *puVar23;
  long lVar24;
  float fVar25;
  float fVar26;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar19 = (undefined8 *)FUN_10064e20c();
  puVar23 = (ushort *)(puVar19 + 0x17);
  *puVar19 = &PTR_thunk_FUN_100069b04_10144dbf0;
  *puVar23 = *puVar23 & 0x8000 | 0x3ff;
  *(undefined4 *)(puVar19 + 0x18) = 0;
  puVar19[0x34] = puVar19;
  puVar19[0x35] = 0;
  *(undefined4 *)(puVar19 + 0x36) = DAT_101dc0b88;
  puVar19 = puVar19 + 0x37;
  FUN_10064e264(puVar19);
  thunk_FUN_100652c08(param_1 + 0x4e);
  plVar22 = param_1 + 0x6c;
  FUN_1006533a4();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  thunk_FUN_100652c08();
  plVar1 = param_1 + 0xe6;
  FUN_1006533a4();
  plVar2 = param_1 + 0x106;
  thunk_FUN_100650f44(plVar2,DAT_101d22ff0);
  plVar3 = param_1 + 300;
  thunk_FUN_100652c08();
  plVar4 = param_1 + 0x14a;
  thunk_FUN_100650f44(plVar4,DAT_101d22ff8);
  plVar5 = param_1 + 0x170;
  thunk_FUN_100650f44(plVar5,PTR_s_build___Fonts_Avenir_Medium_24_f_10184e2a0);
  plVar6 = param_1 + 0x196;
  thunk_FUN_100652c08();
  plVar7 = param_1 + 0x1b4;
  FUN_1006533a4();
  param_1[0x1d4] = 0;
  plVar8 = param_1 + 0x1d5;
  FUN_10064e264();
  thunk_FUN_100652c08();
  plVar9 = param_1 + 0x20a;
  FUN_10064e264(plVar9);
  lVar24 = 0;
  do {
    thunk_FUN_100652c08((long)param_1 + lVar24 + 0x1108);
    lVar24 = lVar24 + 0xf0;
  } while (lVar24 != 0x4b0);
  plVar10 = param_1 + 0x2b7;
  thunk_FUN_100652c08(plVar10);
  plVar11 = param_1 + 0x2d5;
  thunk_FUN_1006543ec(plVar11);
  plVar12 = param_1 + 0x309;
  FUN_10064e264(plVar12);
  plVar13 = param_1 + 800;
  thunk_FUN_100652c08(plVar13);
  plVar14 = param_1 + 0x33e;
  thunk_FUN_100652c08(plVar14);
  plVar15 = param_1 + 0x35c;
  FUN_1001aa1d4();
  FUN_1004e3004(param_1 + 0x398);
  FUN_1004e3004(param_1 + 0x399);
  lVar24 = NEON_fmov(0x3f800000,4);
  param_1[0x39a] = lVar24;
  *(undefined4 *)(param_1 + 0x39b) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1cdc) = 3;
  *(undefined1 *)((long)param_1 + 0x1ce2) = 0;
  *(undefined2 *)(param_1 + 0x39c) = 0xff;
  (**(code **)(*param_1 + 0x78))(param_1,puVar19,1);
  FUN_100642bd8(puVar19,param_1 + 0x4e,1);
  FUN_100642bd8(puVar19,plVar10,1);
  FUN_100642bd8(puVar19,plVar22,1);
  FUN_100642bd8(puVar19,param_1 + 0x8c,1);
  FUN_100642bd8(puVar19,param_1 + 0xaa,1);
  FUN_100642bd8(puVar19,param_1 + 200,1);
  FUN_100642bd8(puVar19,plVar1,1);
  FUN_100642bd8(puVar19,plVar3,1);
  FUN_100642bd8(puVar19,plVar4,1);
  FUN_100642bd8(puVar19,plVar2,1);
  FUN_100642bd8(puVar19,plVar5,1);
  FUN_100642bd8(puVar19,plVar7,1);
  FUN_100642bd8(puVar19,plVar6,1);
  FUN_100642bd8(puVar19,plVar11,1);
  FUN_100642bd8(plVar11,plVar12,1);
  FUN_100642bd8(plVar12,plVar13,1);
  FUN_100642bd8(plVar12,plVar14,1);
  FUN_100642bd8(puVar19,plVar8,1);
  FUN_100642bd8(plVar8,param_1 + 0x1ec,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar9,1);
  lVar24 = 0;
  do {
    FUN_100642bd8(plVar9,(long)param_1 + lVar24 + 0x1108,1);
    lVar24 = lVar24 + 0xf0;
  } while (lVar24 != 0x4b0);
  (**(code **)(*param_1 + 0x78))(param_1,plVar15,1);
  fVar25 = 0.5;
  bVar18 = false;
  if ((*(float *)(param_1 + 0x41) == 0.5) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x20c)))) {
    bVar18 = *(float *)((long)param_1 + 0x20c) == 0.5;
  }
  fVar26 = 0.5;
  if (!bVar18) {
    param_1[0x41] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(puVar19);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  bVar18 = false;
  if ((*(float *)(param_1 + 0x76) == fVar26) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x3b4)) && !NAN(fVar25))) {
    bVar18 = *(float *)((long)param_1 + 0x3b4) == fVar25;
  }
  if (!bVar18) {
    *(float *)(param_1 + 0x76) = fVar26;
    *(float *)((long)param_1 + 0x3b4) = fVar25;
    FUN_1000200a0(plVar22);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  bVar18 = false;
  if ((*(float *)(param_1 + 0x96) == fVar26) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x4b4)) && !NAN(fVar25))) {
    bVar18 = *(float *)((long)param_1 + 0x4b4) == fVar25;
  }
  if (!bVar18) {
    *(float *)(param_1 + 0x96) = fVar26;
    *(float *)((long)param_1 + 0x4b4) = fVar25;
    FUN_1000200a0(param_1 + 0x8c);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  bVar18 = false;
  if ((*(float *)(param_1 + 0xb4) == fVar26) &&
     (bVar18 = false, !NAN(*(float *)((long)param_1 + 0x5a4)) && !NAN(fVar25))) {
    bVar18 = *(float *)((long)param_1 + 0x5a4) == fVar25;
  }
  if (!bVar18) {
    *(float *)(param_1 + 0xb4) = fVar26;
    *(float *)((long)param_1 + 0x5a4) = fVar25;
    FUN_1000200a0(param_1 + 0xaa);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0xd2) != fVar26) || (*(float *)((long)param_1 + 0x694) != fVar25)) {
    *(float *)(param_1 + 0xd2) = fVar26;
    *(float *)((long)param_1 + 0x694) = fVar25;
    FUN_1000200a0(param_1 + 200);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0xf0) != fVar26) || (*(float *)((long)param_1 + 0x784) != fVar25)) {
    *(float *)(param_1 + 0xf0) = fVar26;
    *(float *)((long)param_1 + 0x784) = fVar25;
    FUN_1000200a0(plVar1);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x110) != fVar26) || (*(float *)((long)param_1 + 0x884) != fVar25)) {
    *(float *)(param_1 + 0x110) = fVar26;
    *(float *)((long)param_1 + 0x884) = fVar25;
    FUN_1000200a0(plVar2);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x17a) != fVar26) || (*(float *)((long)param_1 + 0xbd4) != fVar25)) {
    *(float *)(param_1 + 0x17a) = fVar26;
    *(float *)((long)param_1 + 0xbd4) = fVar25;
    FUN_1000200a0(plVar5);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x1be) != fVar26) || (*(float *)((long)param_1 + 0xdf4) != fVar25)) {
    *(float *)(param_1 + 0x1be) = fVar26;
    *(float *)((long)param_1 + 0xdf4) = fVar25;
    FUN_1000200a0(plVar7);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x1a0) != fVar26) || (*(float *)((long)param_1 + 0xd04) != fVar25)) {
    *(float *)(param_1 + 0x1a0) = fVar26;
    *(float *)((long)param_1 + 0xd04) = fVar25;
    FUN_1000200a0(plVar6);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x1df) != fVar26) || (*(float *)((long)param_1 + 0xefc) != fVar25)) {
    *(float *)(param_1 + 0x1df) = fVar26;
    *(float *)((long)param_1 + 0xefc) = fVar25;
    FUN_1000200a0(plVar8);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x2df) != fVar26) || (*(float *)((long)param_1 + 0x16fc) != fVar25)) {
    *(float *)(param_1 + 0x2df) = fVar26;
    *(float *)((long)param_1 + 0x16fc) = fVar25;
    FUN_1000200a0(plVar11);
    fVar26 = *(float *)(param_1 + 0x41);
    fVar25 = *(float *)((long)param_1 + 0x20c);
  }
  if ((*(float *)(param_1 + 0x313) != fVar26) || (*(float *)((long)param_1 + 0x189c) != fVar25)) {
    *(float *)(param_1 + 0x313) = fVar26;
    *(float *)((long)param_1 + 0x189c) = fVar25;
    FUN_1000200a0(plVar12);
  }
  if ((*(float *)(param_1 + 0x32a) != 0.5) || (*(float *)((long)param_1 + 0x1954) != 1.0)) {
    param_1[0x32a] = 0x3f8000003f000000;
    FUN_1000200a0(plVar13);
  }
  if ((*(float *)(param_1 + 0x348) != 0.5) || (*(float *)((long)param_1 + 0x1a44) != 0.0)) {
    param_1[0x348] = 0x3f000000;
    FUN_1000200a0(plVar14);
  }
  *(uint *)((long)param_1 + 0xf2c) = *(uint *)((long)param_1 + 0xf2c) | 4;
  if ((*(uint *)((long)param_1 + 0xfe4) & 0x7f80) != 0) {
    *(uint *)((long)param_1 + 0xfe4) = *(uint *)((long)param_1 + 0xfe4) & 0xffff807f;
    FUN_1000200a0(param_1 + 0x1ec);
  }
  *(uint *)((long)param_1 + 0x172c) = *(uint *)((long)param_1 + 0x172c) | 4;
  FUN_100654488(plVar11,1);
  FUN_100652cac(plVar13,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  *(byte *)(param_1 + 0x33b) = *(byte *)(param_1 + 0x33b) | 2;
  uVar21 = *(uint *)((long)param_1 + 0x1984);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1984) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar13);
    uVar21 = *(uint *)((long)param_1 + 0x1984);
  }
  *(uint *)((long)param_1 + 0x1984) = uVar21 | 4;
  FUN_100652cac(plVar14,PTR_s_build___HUDPartsCommon_atlas_10184e098,"vert_glass_shadow");
  *(byte *)(param_1 + 0x359) = *(byte *)(param_1 + 0x359) & 0xfd;
  uVar21 = *(uint *)((long)param_1 + 0x1a74);
  if ((uVar21 & 0x7f80) != 0x5900) {
    *(uint *)((long)param_1 + 0x1a74) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5900;
    FUN_1000200a0(plVar14);
    uVar21 = *(uint *)((long)param_1 + 0x1a74);
  }
  *(uint *)((long)param_1 + 0x1a74) = uVar21 | 4;
  *(uint *)((long)param_1 + 0x18cc) = *(uint *)((long)param_1 + 0x18cc) & 0xfffffffb;
  FUN_100653464(plVar22,FUN_100068cc8,param_1);
  FUN_100653464(plVar1,FUN_100068d74,param_1);
  FUN_100651700(plVar2,0);
  FUN_100651460(plVar2,&DAT_10114bab9);
  FUN_1006516bc(plVar2,&DAT_101d22fe8);
  FUN_10065165c(plVar2,1);
  FUN_100652cac(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_corner");
  if ((*(float *)(param_1 + 0x136) != 1.0) || (*(float *)((long)param_1 + 0x9b4) != 0.0)) {
    param_1[0x136] = 0x3f800000;
    FUN_1000200a0(plVar3);
  }
  uVar21 = *(uint *)((long)param_1 + 0x9e4);
  if ((uVar21 & 0x7f80) != 0x5280) {
    *(uint *)((long)param_1 + 0x9e4) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5280;
    FUN_1000200a0(plVar3);
  }
  if ((*(float *)(param_1 + 0x135) != 1.8) || (*(float *)((long)param_1 + 0x9ac) != 1.8)) {
    param_1[0x135] = 0x3fe666663fe66666;
    FUN_1000200a0(plVar3);
  }
  FUN_100652dd4(plVar3,&DAT_10115a164,2);
  *(uint *)((long)param_1 + 0x9e4) = *(uint *)((long)param_1 + 0x9e4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x154) != 1.0) || (*(float *)((long)param_1 + 0xaa4) != 0.0)) {
    param_1[0x154] = 0x3f800000;
    FUN_1000200a0(plVar4);
  }
  FUN_100651460(plVar4,&DAT_10114bab9);
  *(uint *)((long)param_1 + 0xad4) = *(uint *)((long)param_1 + 0xad4) & 0xfffffffb;
  FUN_100651700(plVar5,0);
  FUN_100651460(plVar5,&DAT_10114bab9);
  FUN_1006516bc(plVar5,&DAT_101d22fe8);
  FUN_10065165c(plVar5,1);
  uVar21 = *(uint *)((long)param_1 + 0xc04);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xc04) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar5);
  }
  FUN_100652ca4(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  uVar21 = *(uint *)((long)param_1 + 0xd34);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xd34) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar6);
    uVar21 = *(uint *)((long)param_1 + 0xd34);
  }
  *(uint *)((long)param_1 + 0xd34) = uVar21 & 0xfffffffb;
  FUN_100652ca4(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar7,"ability_energy_ring");
  uVar21 = *(uint *)((long)param_1 + 0xe24);
  if ((uVar21 & 0x7f80) != 0x5f80) {
    *(uint *)((long)param_1 + 0xe24) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x5f80;
    FUN_1000200a0(plVar7);
    uVar21 = *(uint *)((long)param_1 + 0xe24);
  }
  *(uint *)((long)param_1 + 0xe24) = uVar21 & 0xfffffffb;
  FUN_100653464(plVar7,FUN_100068e20,param_1);
  *(uint *)((long)param_1 + 0x10d4) = *(uint *)((long)param_1 + 0x10d4) | 4;
  FUN_100652cac(plVar10,PTR_s_build___HUDPartsCommon_atlas_10184e098,"generic_gradient_vertical");
  FUN_100652dd4(plVar10,&DAT_10115a164,2);
  *(byte *)(param_1 + 0x2d2) = *(byte *)(param_1 + 0x2d2) | 2;
  uVar21 = *(uint *)((long)param_1 + 0x163c);
  if ((uVar21 & 0x7f80) != 0x7280) {
    *(uint *)((long)param_1 + 0x163c) = uVar21 & 0xffff8000 | uVar21 & 0x7f | 0x7280;
    FUN_1000200a0(plVar10);
    uVar21 = *(uint *)((long)param_1 + 0x163c);
  }
  *(uint *)((long)param_1 + 0x163c) = uVar21 | 4;
  *(uint *)((long)param_1 + 0x5d4) = *(uint *)((long)param_1 + 0x5d4) & 0xfffffffb;
  *(uint *)((long)param_1 + 0x6c4) = *(uint *)((long)param_1 + 0x6c4) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x366) != 0.5) || (*(float *)((long)param_1 + 0x1b34) != 0.5)) {
    param_1[0x366] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar15);
  }
  uVar20 = FUN_100345b94();
  uVar20 = FUN_10034c450(uVar20,"*KindredHUDEffects*");
  FUN_10016a5c8();
  FUN_1001aa350(plVar15,uVar20);
  uStack_70 = DAT_101dbd484;
  pcStack_98 = FUN_100068ed0;
  plVar22 = param_1 + 1;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&pcStack_98);
  uStack_70 = DAT_101dbd458;
  pcStack_98 = FUN_100068ed0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&pcStack_98);
  uStack_70 = DAT_101dbd494;
  pcStack_98 = thunk_FUN_10006beb0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&pcStack_98);
  uStack_70 = DAT_101dbd48c;
  pcStack_98 = thunk_FUN_10006bd94;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&pcStack_98);
  uStack_70 = DAT_101dbd460;
  pcStack_98 = thunk_FUN_10006bd94;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&pcStack_98);
  uStack_70 = DAT_101dbd498;
  pcStack_98 = FUN_100068ee0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&pcStack_98);
  uStack_70 = DAT_101dbd4a4;
  pcStack_98 = FUN_100068f04;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&pcStack_98);
  uStack_70 = DAT_101dbd4a0;
  pcStack_98 = FUN_100068f0c;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(plVar22,&pcStack_98);
  uVar17 = *(ushort *)(param_1 + 0x17);
  plVar22 = param_1 + ((ulong)(uVar17 >> 10) & 0x1f) * 7 + 0x18;
  *(undefined4 *)plVar22 = 0;
  plVar22[1] = (long)FUN_100068f28;
  plVar22[2] = 0;
  plVar22[3] = (long)FUN_100069310;
  plVar22[4] = 0;
  plVar22[5] = (long)FUN_100069400;
  plVar22[6] = 0;
  uVar21 = uVar17 + 0x400;
  uVar16 = uVar17 & 0xffff83ff;
  plVar22 = param_1 + (ulong)(uVar21 >> 10 & 0x1f) * 7 + 0x18;
  *(undefined4 *)plVar22 = 1;
  plVar22[1] = (long)FUN_10006941c;
  plVar22[2] = 0;
  uVar21 = (uVar21 & 0x7c00 | uVar16) + 0x400;
  plVar22[5] = 0;
  plVar22[6] = 0;
  plVar22[3] = (long)FUN_100069560;
  plVar22[4] = 0;
  plVar22 = param_1 + (ulong)(uVar21 >> 10 & 0x1f) * 7 + 0x18;
  *(undefined4 *)plVar22 = 2;
  plVar22[1] = (long)FUN_100069628;
  plVar22[2] = 0;
  uVar21 = (uVar21 & 0x7c00 | uVar16) + 0x400;
  plVar22[3] = (long)FUN_1000696bc;
  plVar22[4] = 0;
  plVar22[5] = 0;
  plVar22[6] = 0;
  plVar22 = param_1 + (ulong)(uVar21 >> 10 & 0x1f) * 7 + 0x18;
  *(undefined4 *)plVar22 = 3;
  plVar22[1] = (long)FUN_10006971c;
  plVar22[2] = 0;
  plVar22[3] = (long)FUN_100069850;
  plVar22[4] = 0;
  plVar22[5] = (long)FUN_10006995c;
  plVar22[6] = 0;
  *(ushort *)(param_1 + 0x17) =
       ((ushort)uVar21 & 0x7c00 | (ushort)uVar16) + 0x400 & 0x7c00 | (ushort)uVar16;
  FUN_100069960(puVar23,0,1);
  FUN_100069960(puVar23,0,3);
  FUN_100069960(puVar23,2,0);
  FUN_100069960(puVar23,2,1);
  FUN_100069960(puVar23,2,3);
  FUN_100069960(puVar23,1,0);
  FUN_100069960(puVar23,1,2);
  FUN_100069960(puVar23,1,3);
  FUN_100069960(puVar23,3,0);
  FUN_100069960(puVar23,3,1);
  FUN_1000699e4(puVar23,0,0,0);
  return param_1;
}




void FUN_100069b04(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100069b04_10144dbf0;
  if ((long *)param_1[0x1d4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d4] + 8))();
    param_1[0x1d4] = 0;
  }
  thunk_FUN_1001aa23c(param_1 + 0x35c);
  param_1[0x33e] = &PTR_FUN_1014a7108;
  param_1[0x355] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x358);
  FUN_10064e2bc(param_1 + 0x33e);
  param_1[800] = &PTR_FUN_1014a7108;
  param_1[0x337] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33a);
  FUN_10064e2bc(param_1 + 800);
  thunk_FUN_10064e2bc(param_1 + 0x309);
  FUN_10064e2bc(param_1 + 0x2d5);
  param_1[0x2b7] = &PTR_FUN_1014a7108;
  param_1[0x2ce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d1);
  FUN_10064e2bc(param_1 + 0x2b7);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x14c8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x1580) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x1598);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x14c8);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  thunk_FUN_10064e2bc(param_1 + 0x20a);
  param_1[0x1ec] = &PTR_FUN_1014a7108;
  param_1[0x203] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x206);
  FUN_10064e2bc(param_1 + 0x1ec);
  thunk_FUN_10064e2bc(param_1 + 0x1d5);
  param_1[0x1b4] = &PTR_FUN_1014a7108;
  param_1[0x1cb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ce);
  FUN_10064e2bc(param_1 + 0x1b4);
  param_1[0x196] = &PTR_FUN_1014a7108;
  param_1[0x1ad] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b0);
  FUN_10064e2bc(param_1 + 0x196);
  thunk_FUN_100651068(param_1 + 0x170);
  thunk_FUN_100651068(param_1 + 0x14a);
  param_1[300] = &PTR_FUN_1014a7108;
  param_1[0x143] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x146);
  FUN_10064e2bc(param_1 + 300);
  thunk_FUN_100651068(param_1 + 0x106);
  param_1[0xe6] = &PTR_FUN_1014a7108;
  param_1[0xfd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x100);
  FUN_10064e2bc(param_1 + 0xe6);
  param_1[200] = &PTR_FUN_1014a7108;
  param_1[0xdf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe2);
  FUN_10064e2bc(param_1 + 200);
  param_1[0xaa] = &PTR_FUN_1014a7108;
  param_1[0xc1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc4);
  FUN_10064e2bc(param_1 + 0xaa);
  param_1[0x8c] = &PTR_FUN_1014a7108;
  param_1[0xa3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa6);
  FUN_10064e2bc(param_1 + 0x8c);
  param_1[0x6c] = &PTR_FUN_1014a7108;
  param_1[0x83] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x86);
  FUN_10064e2bc(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_1014a7108;
  param_1[0x65] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x68);
  FUN_10064e2bc(param_1 + 0x4e);
  thunk_FUN_10064e2bc(param_1 + 0x37);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_100069b04(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_thunk_FUN_100069b04_10144dbf0;
  if ((long *)param_1[0x1d4] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1d4] + 8))();
    param_1[0x1d4] = 0;
  }
  thunk_FUN_1001aa23c(param_1 + 0x35c);
  param_1[0x33e] = &PTR_FUN_1014a7108;
  param_1[0x355] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x358);
  FUN_10064e2bc(param_1 + 0x33e);
  param_1[800] = &PTR_FUN_1014a7108;
  param_1[0x337] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x33a);
  FUN_10064e2bc(param_1 + 800);
  thunk_FUN_10064e2bc(param_1 + 0x309);
  FUN_10064e2bc(param_1 + 0x2d5);
  param_1[0x2b7] = &PTR_FUN_1014a7108;
  param_1[0x2ce] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x2d1);
  FUN_10064e2bc(param_1 + 0x2b7);
  lVar1 = 0;
  do {
    *(undefined ***)((long)param_1 + lVar1 + 0x14c8) = &PTR_FUN_1014a7108;
    *(undefined ***)((long)param_1 + lVar1 + 0x1580) = &PTR_FUN_1014a7268;
    thunk_FUN_100657580((long)param_1 + lVar1 + 0x1598);
    FUN_10064e2bc((long)param_1 + lVar1 + 0x14c8);
    lVar1 = lVar1 + -0xf0;
  } while (lVar1 != -0x4b0);
  thunk_FUN_10064e2bc(param_1 + 0x20a);
  param_1[0x1ec] = &PTR_FUN_1014a7108;
  param_1[0x203] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x206);
  FUN_10064e2bc(param_1 + 0x1ec);
  thunk_FUN_10064e2bc(param_1 + 0x1d5);
  param_1[0x1b4] = &PTR_FUN_1014a7108;
  param_1[0x1cb] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1ce);
  FUN_10064e2bc(param_1 + 0x1b4);
  param_1[0x196] = &PTR_FUN_1014a7108;
  param_1[0x1ad] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1b0);
  FUN_10064e2bc(param_1 + 0x196);
  thunk_FUN_100651068(param_1 + 0x170);
  thunk_FUN_100651068(param_1 + 0x14a);
  param_1[300] = &PTR_FUN_1014a7108;
  param_1[0x143] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x146);
  FUN_10064e2bc(param_1 + 300);
  thunk_FUN_100651068(param_1 + 0x106);
  param_1[0xe6] = &PTR_FUN_1014a7108;
  param_1[0xfd] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x100);
  FUN_10064e2bc(param_1 + 0xe6);
  param_1[200] = &PTR_FUN_1014a7108;
  param_1[0xdf] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xe2);
  FUN_10064e2bc(param_1 + 200);
  param_1[0xaa] = &PTR_FUN_1014a7108;
  param_1[0xc1] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xc4);
  FUN_10064e2bc(param_1 + 0xaa);
  param_1[0x8c] = &PTR_FUN_1014a7108;
  param_1[0xa3] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0xa6);
  FUN_10064e2bc(param_1 + 0x8c);
  param_1[0x6c] = &PTR_FUN_1014a7108;
  param_1[0x83] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x86);
  FUN_10064e2bc(param_1 + 0x6c);
  param_1[0x4e] = &PTR_FUN_1014a7108;
  param_1[0x65] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x68);
  FUN_10064e2bc(param_1 + 0x4e);
  thunk_FUN_10064e2bc(param_1 + 0x37);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_100069d94(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_100069b04();
  operator_delete(pvVar1);
  return;
}




void FUN_100069da8(long param_1,undefined4 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,int param_7)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined1 *local_110;
  void *local_108;
  undefined1 auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_101444218;
  *(undefined4 *)(param_1 + 0x1cdc) = param_2;
  uVar2 = *(undefined4 *)(param_3 + 0x30);
  *(long *)(param_1 + 0x1a8) = param_3 + 0x28;
  *(undefined4 *)(param_1 + 0x1b0) = uVar2;
  bVar10 = 0x20;
  if (param_6 == 0) {
    bVar10 = 0;
  }
  bVar11 = 0x40;
  if (param_7 == 0) {
    bVar11 = 0;
  }
  *(byte *)(param_1 + 0x1ce2) = bVar11 | bVar10 | *(byte *)(param_1 + 0x1ce2) & 0x9f;
  puVar4 = PTR_s_build___HUDPartsHero__s_png_10184e0b8;
  FUN_1004654a0(param_3);
  FUN_1004d2698(auStack_100,puVar4);
  fVar13 = *(float *)(param_1 + 0x20c);
  bVar5 = false;
  if ((*(float *)(param_1 + 0x2c0) == *(float *)(param_1 + 0x208)) &&
     (bVar5 = false, !NAN(*(float *)(param_1 + 0x2c4)) && !NAN(fVar13))) {
    bVar5 = *(float *)(param_1 + 0x2c4) == fVar13;
  }
  if (!bVar5) {
    *(float *)(param_1 + 0x2c0) = *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0x2c4) = fVar13;
    FUN_1000200a0(param_1 + 0x270);
  }
  FUN_100652ca4(param_1 + 0x270,auStack_100);
  if ((*(float *)(param_1 + 0xfb0) != *(float *)(param_1 + 0x208)) ||
     (*(float *)(param_1 + 0xfb4) != *(float *)(param_1 + 0x20c))) {
    *(float *)(param_1 + 0xfb0) = *(float *)(param_1 + 0x208);
    *(float *)(param_1 + 0xfb4) = *(float *)(param_1 + 0x20c);
    FUN_1000200a0(param_1 + 0xf60);
  }
  FUN_100652ca4(param_1 + 0xf60,auStack_100);
  fVar13 = 0.5;
  if ((*(float *)(param_1 + 0x10a0) != 0.5) || (fVar14 = 1.0, *(float *)(param_1 + 0x10a4) != 1.0))
  {
    *(undefined8 *)(param_1 + 0x10a0) = 0x3f8000003f000000;
    FUN_1000200a0(param_1 + 0x1050);
    fVar13 = *(float *)(param_1 + 0x10a0);
    fVar14 = *(float *)(param_1 + 0x10a4);
  }
  if ((*(float *)(param_1 + 0x1608) != fVar13) || (*(float *)(param_1 + 0x160c) != fVar14)) {
    *(float *)(param_1 + 0x1608) = fVar13;
    *(float *)(param_1 + 0x160c) = fVar14;
    FUN_1000200a0(param_1 + 0x15b8);
  }
  lVar12 = 0;
  do {
    plVar1 = (long *)(param_1 + 0x1108 + lVar12);
    local_110 = &DAT_3f0000003f000000;
    (**(code **)(*plVar1 + 0x28))(plVar1,&local_110);
    FUN_100652ca4(plVar1,PTR_s_build___HUDPartsCommon_atlas_10184e098);
    FUN_100652cdc(plVar1,"hud_ability_level_dot_dim");
    *(uint *)(param_1 + lVar12 + 0x118c) = *(uint *)(param_1 + lVar12 + 0x118c) & 0xfffffffb;
    lVar12 = lVar12 + 0xf0;
  } while (lVar12 != 0x4b0);
  FUN_100652cac(param_1 + 0x360,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "ability_icon_inactive_overlay");
  FUN_100652cac(param_1 + 0x460,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "ability_icon_inactive_overlay");
  FUN_100652cac(param_1 + 0x550,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "ability_icon_flash_overlay");
  FUN_100652cac(param_1 + 0x640,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "ability_icon_flash_overlay");
  FUN_100652cac(param_1 + 0x730,PTR_s_build___HUDPartsCommon_atlas_10184e098,
                "ability_icon_inactive_overlay");
  if ((*(uint *)(param_1 + 0x7b4) & 0x7f80) != 0x3f80) {
    *(uint *)(param_1 + 0x7b4) = *(uint *)(param_1 + 0x7b4) & 0xffff807f | 0x3f80;
    FUN_1000200a0(param_1 + 0x730);
  }
  if (((*(byte *)(param_1 + 0x1ce2) ^ 0xff) & 0x60) == 0) {
    FUN_1004e3120(&local_110,"188");
    FUN_1006513c0(param_1 + 0x830,&local_110);
    if (local_108 != (void *)0x0) {
      operator_delete__(local_108);
    }
    FUN_1006513c0(param_1 + 0x830,&DAT_101d91650);
  }
  FUN_10006a140(param_1,param_4,param_5);
  uVar7 = FUN_10109c478();
  if ((((uVar7 & 1) != 0) || (iVar6 = FUN_10012709c(), iVar6 == 1)) &&
     (uVar7 = FUN_10034cb58(), (uVar7 & 1) == 0)) {
    uVar3 = *(uint *)(param_1 + 0x1cdc);
    if (2 < uVar3) {
      uVar3 = 0x1b;
    }
    pvVar8 = operator_new(0x200);
    uVar9 = thunk_FUN_1000de11c(pvVar8,uVar3);
    *(undefined8 *)(param_1 + 0xea0) = uVar9;
    FUN_100642bd8(param_1 + 0x1b8,pvVar8,1);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10006a140(long param_1,undefined4 param_2,undefined8 param_3)

{
  *(undefined4 *)(param_1 + 0x1cd8) = param_2;
  FUN_10006a190(param_1,param_3);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x14;
  FUN_1000699e4(param_1 + 0xb8,0,0,0);
  FUN_10006a234(param_1);
  return;
}




void FUN_10006a190(long param_1,ushort param_2)

{
  undefined1 auStack_48 [32];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_1004d2698(auStack_48,"ability_icon_%d");
  FUN_100652cdc(param_1 + 0x270,auStack_48);
  FUN_100652cdc(param_1 + 0xf60,auStack_48);
  *(char *)(param_1 + 0x1ce2) = (char)((ushort)*(short *)(param_1 + 0x1ce1) >> 8);
  *(ushort *)(param_1 + 0x1ce0) = param_2 & 0xff | *(short *)(param_1 + 0x1ce1) << 8;
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10006a234(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  ulong uVar10;
  float *pfVar11;
  ulong uVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_a8;
  float fStack_a4;
  
  if ((int)param_3[0x39b] != -1) {
    plVar1 = param_3 + 0x37;
    *(uint *)((long)param_3 + 0x23c) = *(uint *)((long)param_3 + 0x23c) & 0xffffffbf;
    *(uint *)((long)param_3 + 0x10d4) = *(uint *)((long)param_3 + 0x10d4) & 0xffffffbf;
    *(uint *)((long)param_3 + 0x1b64) = *(uint *)((long)param_3 + 0x1b64) & 0xffffffbf;
    local_a8 = (float)(**(code **)(*param_3 + 0x48))();
    local_a8 = local_a8 * 0.98;
    param_2 = param_2 * 0.98;
    fStack_a4 = param_2;
    FUN_10064e48c(plVar1,&local_a8);
    (**(code **)(*param_3 + 0x48))(param_3);
    fVar13 = param_2;
    FUN_10064e3cc(plVar1);
    fVar13 = (fVar13 - param_2) * 0.5;
    fVar18 = *(float *)(param_3 + 0x3f);
    if ((fVar18 != 0.0) || (fVar18 = *(float *)((long)param_3 + 0x1fc), fVar18 != fVar13)) {
      *(undefined4 *)(param_3 + 0x3f) = 0;
      *(float *)((long)param_3 + 0x1fc) = fVar13;
      FUN_1000200a0(plVar1);
    }
    local_a8 = (float)FUN_10064e3cc(plVar1);
    fStack_a4 = fVar18;
    FUN_10064e48c(param_3 + 0x1d5,&local_a8);
    uVar14 = FUN_10064e3cc(plVar1);
    FUN_10064e3cc(plVar1);
    fVar13 = (float)NEON_fminnm(uVar14,fVar18);
    plVar2 = param_3 + 0x2b7;
    if ((*(float *)(param_3 + 0x2c1) != 0.5) || (*(float *)((long)param_3 + 0x160c) != 1.0)) {
      param_3[0x2c1] = 0x3f8000003f000000;
      FUN_1000200a0(plVar2);
    }
    plVar3 = param_3 + 0x20a;
    fVar18 = *(float *)(param_3 + 0x2bf);
    if ((fVar18 != 0.0) || (fVar18 = *(float *)((long)param_3 + 0x15fc), fVar18 != fVar13 * 0.52)) {
      *(undefined4 *)(param_3 + 0x2bf) = 0;
      *(float *)((long)param_3 + 0x15fc) = fVar13 * 0.52;
      FUN_1000200a0(plVar2);
    }
    fVar15 = (float)FUN_100652e60(plVar2);
    FUN_100652e60(plVar2);
    fVar18 = (fVar13 * 0.4) / fVar18;
    bVar4 = false;
    if ((*(float *)(param_3 + 0x2c0) == fVar13 / fVar15) &&
       (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x1604)) && !NAN(fVar18))) {
      bVar4 = *(float *)((long)param_3 + 0x1604) == fVar18;
    }
    if (!bVar4) {
      *(float *)(param_3 + 0x2c0) = fVar13 / fVar15;
      *(float *)((long)param_3 + 0x1604) = fVar18;
      FUN_1000200a0(plVar2);
    }
    fVar18 = (float)(**(code **)(*param_3 + 0x48))(param_3);
    fVar15 = 0.8;
    FUN_100652e60(plVar2);
    fVar15 = fVar15 * 0.3;
    FUN_10064e47c(fVar18 * 0.8,plVar3);
    FUN_10064e3cc(plVar3);
    fVar18 = fVar15;
    FUN_10064e3cc(plVar1);
    fVar15 = fVar15 + fVar18 * 0.4;
    fVar18 = *(float *)(param_3 + 0x212);
    if ((fVar18 != 0.0) || (fVar18 = *(float *)((long)param_3 + 0x1094), fVar18 != fVar15)) {
      *(undefined4 *)(param_3 + 0x212) = 0;
      *(float *)((long)param_3 + 0x1094) = fVar15;
      FUN_1000200a0(plVar3);
    }
    plVar2 = param_3 + 0x4e;
    fVar15 = (float)FUN_100652e60(plVar2);
    fVar18 = fVar13 / fVar18;
    if ((*(float *)(param_3 + 0x57) != fVar13 / fVar15) ||
       (*(float *)((long)param_3 + 700) != fVar18)) {
      *(float *)(param_3 + 0x57) = fVar13 / fVar15;
      *(float *)((long)param_3 + 700) = fVar18;
      FUN_1000200a0(plVar2);
    }
    fVar15 = (float)FUN_100652e60(plVar2);
    fVar18 = fVar13 / fVar18;
    if ((*(float *)(param_3 + 0x1f5) != fVar13 / fVar15) ||
       (*(float *)((long)param_3 + 0xfac) != fVar18)) {
      *(float *)(param_3 + 0x1f5) = fVar13 / fVar15;
      *(float *)((long)param_3 + 0xfac) = fVar18;
      FUN_1000200a0(param_3 + 0x1ec);
    }
    fVar15 = (float)FUN_100652e60(param_3 + 0x6c);
    fVar15 = (fVar13 * 1.05) / fVar15;
    fVar18 = (fVar13 * 1.05) / fVar18;
    if ((*(float *)(param_3 + 0x75) != fVar15) || (*(float *)((long)param_3 + 0x3ac) != fVar18)) {
      *(float *)(param_3 + 0x75) = fVar15;
      *(float *)((long)param_3 + 0x3ac) = fVar18;
      FUN_1000200a0(param_3 + 0x6c);
    }
    fVar15 = (float)FUN_100652e60(param_3 + 0x8c);
    fVar18 = fVar13 / fVar18;
    if ((*(float *)(param_3 + 0x95) != fVar13 / fVar15) ||
       (*(float *)((long)param_3 + 0x4ac) != fVar18)) {
      *(float *)(param_3 + 0x95) = fVar13 / fVar15;
      *(float *)((long)param_3 + 0x4ac) = fVar18;
      FUN_1000200a0(param_3 + 0x8c);
    }
    fVar15 = (float)FUN_100652e60(param_3 + 0xaa);
    fVar18 = fVar13 / fVar18;
    if ((*(float *)(param_3 + 0xb3) != fVar13 / fVar15) ||
       (*(float *)((long)param_3 + 0x59c) != fVar18)) {
      *(float *)(param_3 + 0xb3) = fVar13 / fVar15;
      *(float *)((long)param_3 + 0x59c) = fVar18;
      FUN_1000200a0(param_3 + 0xaa);
    }
    fVar15 = (float)FUN_100652e60(param_3 + 200);
    fVar18 = fVar13 / fVar18;
    if ((*(float *)(param_3 + 0xd1) != fVar13 / fVar15) ||
       (*(float *)((long)param_3 + 0x68c) != fVar18)) {
      *(float *)(param_3 + 0xd1) = fVar13 / fVar15;
      *(float *)((long)param_3 + 0x68c) = fVar18;
      FUN_1000200a0(param_3 + 200);
    }
    fVar15 = (float)FUN_100652e60(param_3 + 0xe6);
    fVar18 = fVar13 / fVar18;
    if ((*(float *)(param_3 + 0xef) != fVar13 / fVar15) ||
       (*(float *)((long)param_3 + 0x77c) != fVar18)) {
      *(float *)(param_3 + 0xef) = fVar13 / fVar15;
      *(float *)((long)param_3 + 0x77c) = fVar18;
      FUN_1000200a0(param_3 + 0xe6);
    }
    fVar15 = (float)FUN_100652e60(param_3 + 0x1b4);
    fVar15 = (fVar13 * 0.7) / fVar15;
    fVar18 = (fVar13 * 0.7) / fVar18;
    if ((*(float *)(param_3 + 0x1bd) != fVar15) || (*(float *)((long)param_3 + 0xdec) != fVar18)) {
      *(float *)(param_3 + 0x1bd) = fVar15;
      *(float *)((long)param_3 + 0xdec) = fVar18;
      FUN_1000200a0(param_3 + 0x1b4);
    }
    FUN_10006acc4(param_3);
    fVar13 = (float)FUN_10064e3cc(plVar1);
    fVar18 = 0.51;
    FUN_10064e3cc(plVar1);
    if ((*(float *)(param_3 + 0x134) != fVar13 * 0.51) ||
       (*(float *)((long)param_3 + 0x9a4) != fVar18 * -0.5)) {
      *(float *)(param_3 + 0x134) = fVar13 * 0.51;
      *(float *)((long)param_3 + 0x9a4) = fVar18 * -0.5;
      FUN_1000200a0(param_3 + 300);
    }
    fVar13 = (float)FUN_10064e3cc(plVar1);
    fVar18 = 0.49;
    FUN_10064e3cc(plVar1);
    fVar15 = *(float *)(param_3 + 0x152);
    if ((fVar15 != fVar13 * 0.49) ||
       (fVar15 = *(float *)((long)param_3 + 0xa94), fVar15 != fVar18 * -0.48)) {
      *(float *)(param_3 + 0x152) = fVar13 * 0.49;
      *(float *)((long)param_3 + 0xa94) = fVar18 * -0.48;
      FUN_1000200a0(param_3 + 0x14a);
    }
    FUN_10064e3cc(plVar3);
    fVar13 = (float)FUN_10064e3cc(plVar3);
    uVar6 = FUN_10006ae38(param_3);
    fVar18 = (fVar13 * fVar15) / (float)uVar6;
    fVar15 = SQRT(fVar18);
    fVar13 = fVar15;
    if (fVar18 <= 0.0) {
      fVar13 = fVar18;
    }
    FUN_10064e3cc(plVar3);
    fVar18 = fVar15;
    fVar16 = (float)FUN_10064e3cc(plVar3);
    uVar6 = FUN_10006ae38(param_3);
    iVar7 = FUN_10006ae38(param_3);
    sVar5 = FUN_10006ae6c(param_3);
    *(ushort *)(param_3 + 0x39c) = *(ushort *)(param_3 + 0x39c) & 0xff | sVar5 << 8;
    uVar10 = (ulong)((*(byte *)((long)param_3 + 0x1ce2) & 0x20) == 0);
    iVar8 = FUN_10006ae38(param_3);
    if (iVar8 != 0) {
      uVar12 = 0;
      fVar13 = (float)NEON_fminnm(fVar15,fVar13);
      fVar16 = (fVar16 - (float)uVar6 * fVar13) / (float)(iVar7 + 1);
      fVar18 = *(float *)(&DAT_10114ba68 + uVar10 * 4);
      fVar15 = *(float *)(&DAT_10114ba70 + uVar10 * 4);
      fVar20 = fVar18 * fVar13;
      pfVar11 = (float *)(param_3 + 0x20b);
      do {
        pfVar9 = pfVar11 + 0x2c;
        if (uVar12 < *(byte *)((long)param_3 + 0x1ce1)) {
          FUN_100652cdc(pfVar9,"hud_ability_level_dot_lit");
          (**(code **)(*(long *)(pfVar11 + 0x2c) + 0x48))(pfVar9);
          fVar18 = fVar20 / fVar18;
        }
        else {
          FUN_100652cdc(pfVar9,"hud_ability_level_dot_dim");
          (**(code **)(*(long *)(pfVar11 + 0x2c) + 0x48))(pfVar9);
          fVar18 = (fVar15 * fVar13) / fVar18;
        }
        fVar19 = pfVar11[0x3e];
        bVar4 = false;
        if ((fVar19 == fVar18) && (bVar4 = false, !NAN(pfVar11[0x3f]) && !NAN(fVar18))) {
          bVar4 = pfVar11[0x3f] == fVar18;
        }
        if (!bVar4) {
          pfVar11[0x3e] = fVar18;
          pfVar11[0x3f] = fVar18;
          FUN_1000200a0(pfVar11 + 0x2c);
        }
        if (uVar12 == 0) {
          fVar18 = (float)FUN_10064e3cc(plVar3);
          fVar21 = fVar16 + fVar18 * -0.5 + fVar13 * 0.5;
          FUN_10064e3cc(plVar3);
          fVar19 = fVar19 * -0.5;
          fVar18 = *(float *)(param_3 + 0x229);
          bVar4 = false;
          if ((fVar18 == fVar21) &&
             (bVar4 = false, !NAN(*(float *)((long)param_3 + 0x114c)) && !NAN(fVar19))) {
            bVar4 = *(float *)((long)param_3 + 0x114c) == fVar19;
          }
          if (!bVar4) {
            *(float *)(param_3 + 0x229) = fVar21;
            *(float *)((long)param_3 + 0x114c) = fVar19;
            pfVar9 = (float *)(param_3 + 0x221);
            goto LAB_10006a910;
          }
        }
        else {
          fVar19 = pfVar11[1];
          fVar18 = fVar16 + fVar13 + *pfVar11;
          bVar4 = false;
          if ((pfVar11[0x3c] == fVar18) && (bVar4 = false, !NAN(pfVar11[0x3d]) && !NAN(fVar19))) {
            bVar4 = pfVar11[0x3d] == fVar19;
          }
          if (!bVar4) {
            pfVar11[0x3c] = fVar18;
            pfVar11[0x3d] = fVar19;
            pfVar9 = pfVar11 + 0x2c;
LAB_10006a910:
            FUN_1000200a0(pfVar9);
          }
        }
        pfVar11[0x4d] = (float)((uint)pfVar11[0x4d] | 4);
        uVar12 = uVar12 + 1;
        uVar10 = FUN_10006ae38(param_3);
        pfVar11 = pfVar11 + 0x3c;
      } while (uVar12 < (uVar10 & 0xffffffff));
    }
    plVar3 = param_3 + 0x2d5;
    local_a8 = (float)FUN_10064e3cc(plVar1);
    fStack_a4 = fVar18;
    FUN_10064e48c(plVar3,&local_a8);
    plVar1 = param_3 + 0x309;
    uVar17 = FUN_10064e3cc(plVar3);
    FUN_10064e3cc(plVar3);
    fVar18 = fVar18 * 1.9;
    FUN_10064e47c(uVar17,plVar1);
    fVar13 = (float)FUN_10064e3cc(plVar1);
    FUN_10064e3cc(plVar1);
    fVar16 = fVar18 * 0.5;
    fVar15 = (float)FUN_100652e60(param_3 + 800);
    fVar18 = fVar16 / fVar18;
    if ((*(float *)(param_3 + 0x329) != fVar13 / fVar15) ||
       (*(float *)((long)param_3 + 0x194c) != fVar18)) {
      *(float *)(param_3 + 0x329) = fVar13 / fVar15;
      *(float *)((long)param_3 + 0x194c) = fVar18;
      FUN_1000200a0(param_3 + 800);
    }
    fVar15 = (float)FUN_100652e60(param_3 + 0x33e);
    fVar16 = fVar16 / fVar18;
    if ((*(float *)(param_3 + 0x347) != fVar13 / fVar15) ||
       (*(float *)((long)param_3 + 0x1a3c) != fVar16)) {
      *(float *)(param_3 + 0x347) = fVar13 / fVar15;
      *(float *)((long)param_3 + 0x1a3c) = fVar16;
      FUN_1000200a0(param_3 + 0x33e);
    }
    if (param_3[0x1d4] != 0) {
      FUN_10064e5ec(0x40c00000,0x40c00000,param_3[0x1d4],0,plVar2,0);
    }
  }
  return;
}




void FUN_10006aa78(long param_1)

{
  uint uVar1;
  long lVar2;
  
  *(undefined4 *)(param_1 + 0x1cd8) = 0xffffffff;
  uVar1 = *(uint3 *)(param_1 + 0x1ce0) & 0xf7ff00;
  *(char *)(param_1 + 0x1ce2) = (char)(uVar1 >> 0x10);
  *(ushort *)(param_1 + 0x1ce0) = (ushort)uVar1 | 0xff;
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffeb;
  param_1 = param_1 + 0x1108;
  lVar2 = 5;
  do {
    FUN_100652cdc(param_1,"hud_ability_level_dot_dim");
    *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffb;
    param_1 = param_1 + 0xf0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}




void FUN_10006ab1c(long param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = 2;
  if (param_2 == 0) {
    bVar1 = 0;
  }
  *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) & 0xfd | bVar1;
  if ((param_2 & 1) != 0) {
    return;
  }
  FUN_10006ab54();
  return;
}




void FUN_10006ab54(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  
  *(byte *)(param_3 + 0x1ce2) = *(byte *)(param_3 + 0x1ce2) & 0xfe;
  lVar1 = param_3 + 0x1848;
  FUN_100642324(lVar1);
  FUN_10064e3cc(lVar1);
  fVar3 = param_2;
  FUN_10064e3cc(param_3 + 0x16a8);
  fVar3 = (fVar3 + param_2) * 0.5;
  bVar2 = false;
  if ((*(float *)(param_3 + 0x1888) == 0.0) &&
     (bVar2 = false, !NAN(*(float *)(param_3 + 0x188c)) && !NAN(fVar3))) {
    bVar2 = *(float *)(param_3 + 0x188c) == fVar3;
  }
  if (!bVar2) {
    *(undefined4 *)(param_3 + 0x1888) = 0;
    *(float *)(param_3 + 0x188c) = fVar3;
    FUN_1000200a0(lVar1);
  }
  *(uint *)(param_3 + 0x18cc) = *(uint *)(param_3 + 0x18cc) & 0xfffffffb;
  return;
}




undefined8 FUN_10006abf8(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_1006415d4();
  if (((uVar1 & 1) == 0) && (uVar1 = FUN_1006415ec(param_1), (uVar1 & 1) == 0)) {
    uVar1 = FUN_1006415d4(param_1 + 0x1b8);
    if ((uVar1 & 1) == 0) {
      uVar2 = FUN_1006415ec(param_1 + 0x1b8);
      return uVar2;
    }
  }
  return 1;
}




void thunk_FUN_10006ac50(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1cd8) != -1) {
    FUN_10006b7c4(param_1 + 0xb8);
    FUN_10006b230(param_1);
    FUN_10006b2ac(param_1);
    FUN_10006b0d4(param_1);
    FUN_10006b314(param_1);
    iVar1 = FUN_1001311f4();
    if (iVar1 != 0) {
      FUN_10006b808(param_1);
      return;
    }
  }
  return;
}




void FUN_10006ac50(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x1cd8) != -1) {
    FUN_10006b7c4(param_1 + 0xb8);
    FUN_10006b230(param_1);
    FUN_10006b2ac(param_1);
    FUN_10006b0d4(param_1);
    FUN_10006b314(param_1);
    iVar1 = FUN_1001311f4();
    if (iVar1 != 0) {
      FUN_10006b808(param_1);
      return;
    }
  }
  return;
}




void FUN_10006acc4(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar3 = (float)FUN_10065317c(param_3 + 0x270);
  lVar1 = param_3 + 0x830;
  fVar5 = param_2;
  FUN_1006511d0(lVar1);
  if (0.0 < fVar5) {
    FUN_1006511d0(lVar1);
    fVar4 = param_2 / fVar5;
    fVar5 = *(float *)(param_3 + 0x878);
    bVar2 = false;
    if ((fVar5 == fVar4) && (bVar2 = false, !NAN(*(float *)(param_3 + 0x87c)) && !NAN(fVar4))) {
      bVar2 = *(float *)(param_3 + 0x87c) == fVar4;
    }
    if (!bVar2) {
      *(float *)(param_3 + 0x878) = fVar4;
      *(float *)(param_3 + 0x87c) = fVar4;
      FUN_1000200a0(lVar1);
    }
  }
  fVar4 = (float)FUN_10064259c(lVar1);
  if (fVar3 < fVar4) {
    fVar5 = (float)FUN_10064259c(lVar1);
    fVar3 = fVar3 / fVar5;
    fVar5 = *(float *)(param_3 + 0x878);
    bVar2 = false;
    if ((fVar5 == fVar3) && (bVar2 = false, !NAN(*(float *)(param_3 + 0x87c)) && !NAN(fVar3))) {
      bVar2 = *(float *)(param_3 + 0x87c) == fVar3;
    }
    if (!bVar2) {
      *(float *)(param_3 + 0x878) = fVar3;
      *(float *)(param_3 + 0x87c) = fVar3;
      FUN_1000200a0(lVar1);
    }
  }
  lVar1 = param_3 + 0xb80;
  FUN_1006511d0(lVar1);
  if (0.0 < fVar5) {
    FUN_1006511d0(lVar1);
    fVar3 = param_2 / fVar5;
    fVar5 = *(float *)(param_3 + 0xbc8);
    bVar2 = false;
    if ((fVar5 == fVar3) && (bVar2 = false, !NAN(*(float *)(param_3 + 0xbcc)) && !NAN(fVar3))) {
      bVar2 = *(float *)(param_3 + 0xbcc) == fVar3;
    }
    if (!bVar2) {
      *(float *)(param_3 + 0xbc8) = fVar3;
      *(float *)(param_3 + 0xbcc) = fVar3;
      FUN_1000200a0(lVar1);
    }
  }
  lVar1 = param_3 + 0xa50;
  FUN_1006511d0(lVar1);
  if (0.0 < fVar5) {
    fVar3 = *(float *)(&DAT_10114ba78 + (ulong)((*(byte *)(param_3 + 0x1ce2) & 0x20) == 0) * 4);
    FUN_1006511d0(lVar1);
    fVar5 = (fVar3 * param_2) / fVar5;
    bVar2 = false;
    if ((*(float *)(param_3 + 0xa98) == fVar5) &&
       (bVar2 = false, !NAN(*(float *)(param_3 + 0xa9c)) && !NAN(fVar5))) {
      bVar2 = *(float *)(param_3 + 0xa9c) == fVar5;
    }
    if (!bVar2) {
      *(float *)(param_3 + 0xa98) = fVar5;
      *(float *)(param_3 + 0xa9c) = fVar5;
      FUN_1000200a0(lVar1);
      return;
    }
  }
  return;
}




void FUN_10006ae38(long param_1)

{
  undefined8 uVar1;
  
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  uVar1 = FUN_1003a75f8();
  FUN_1004618b8(uVar1,*(undefined4 *)(param_1 + 0x1cd8));
  return;
}




void FUN_10006ae6c(long param_1)

{
  long lVar1;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  FUN_1003a4970(lVar1,*(undefined4 *)(param_1 + 0x1cd8));
  return;
}




void FUN_10006aec4(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  lVar1 = param_1 + 0x360;
  FUN_100642324(lVar1);
  FUN_100642324(param_1 + 0x460);
  uVar2 = FUN_100047714();
  if (param_2 == 0) {
    FUN_10063f0e8(0x3eb33333,uVar2);
    FUN_10063fce0(0,uVar2);
    FUN_100642b14(lVar1,uVar2);
    uVar2 = FUN_100047714();
    FUN_10063f0e8(0x3eb33333);
    uVar3 = 0;
  }
  else {
    FUN_10063f0e8(0x3dcccccd,uVar2);
    FUN_10063fce0(0x3f666666,uVar2);
    FUN_100642b14(lVar1,uVar2);
    uVar2 = FUN_100047714();
    FUN_10063f0e8(0x3dcccccd);
    uVar3 = 0x3f19999a;
  }
  FUN_10063fce0(uVar3,uVar2);
  FUN_100642b14(param_1 + 0x460,uVar2);
  return;
}




void FUN_10006afb4(long param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    uVar1 = FUN_100047714();
    FUN_10063fce0(0);
    FUN_10063f0e8(0x3dcccccd,uVar1);
    FUN_100047300();
  }
  else {
    uVar1 = FUN_10004767c();
    uVar2 = FUN_100047714();
    FUN_10063fce0(0x3e99999a);
    FUN_10063f0e8(0x3dcccccd,uVar2);
  }
  FUN_100642324(param_1 + 0x640);
  FUN_100642b7c(param_1 + 0x640,uVar1);
  return;
}




void FUN_10006b058(long param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100047714();
  if (param_2 == 0) {
    FUN_10063f0e8(0x3eb33333,uVar1);
    FUN_10063fce0(0,uVar1);
  }
  else {
    FUN_10063fce0(0x3ecccccd,uVar1);
    FUN_10063f0e8(0x3ba3d70a,uVar1);
  }
  FUN_100642b14(param_1 + 0x730,uVar1);
  return;
}




void FUN_10006b0d4(long param_1)

{
  byte bVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  
  plVar3 = *(long **)(param_1 + 0x1a8);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1b0) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if ((lVar4 != 0) && (uVar5 = FUN_10034cb58(), (uVar5 & 1) == 0)) {
        plVar3 = (long *)(lVar4 + 0x18);
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x20);
        } while (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184da98);
        for (lVar4 = *(long *)(lVar4 + 0x18); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x20)) {
          if (*(int *)(*(long *)(lVar4 + 8) + 0xa4) == DAT_10184db30) {
            FUN_100055a80(lVar4);
            iVar2 = FUN_1001018d0();
            if (iVar2 == 0) {
              FUN_100055a80(lVar4);
              iVar2 = FUN_1001018d8();
              if (iVar2 == *(int *)(param_1 + 0x1cd8)) {
                bVar7 = 0x10;
                if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x14 & 1) != 0)
                goto LAB_10006b200;
                uVar6 = 1;
                bVar1 = 0x10;
                goto LAB_10006b1f8;
              }
            }
            break;
          }
        }
        uVar6 = 0;
        bVar7 = 0;
        bVar1 = 0;
        if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x14 & 1) != 0) {
LAB_10006b1f8:
          bVar7 = bVar1;
          FUN_10006afb4(param_1,uVar6);
        }
LAB_10006b200:
        *(undefined2 *)(param_1 + 0x1ce0) = *(undefined2 *)(param_1 + 0x1ce0);
        *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) & 0xef | bVar7;
      }
    }
    else {
      *(undefined8 *)(param_1 + 0x1a8) = 0;
      *(undefined4 *)(param_1 + 0x1b0) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10006b230(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  uVar2 = FUN_1003a7540();
  uVar1 = FUN_1003b2aa0(uVar2,*(undefined4 *)(param_1 + 0x1cd8));
  uVar3 = *(uint *)(param_1 + 0x9e4);
  if (uVar1 < 2) {
    if ((uVar3 >> 2 & 1) != 0) {
      *(uint *)(param_1 + 0x9e4) = uVar3 & 0xfffffffb;
    }
    if ((*(uint *)(param_1 + 0xad4) >> 2 & 1) == 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0xad4) & 0xfffffffb;
  }
  else {
    if ((uVar3 >> 2 & 1) == 0) {
      *(uint *)(param_1 + 0x9e4) = uVar3 | 4;
    }
    if ((*(uint *)(param_1 + 0xad4) >> 2 & 1) != 0) {
      return;
    }
    uVar3 = *(uint *)(param_1 + 0xad4) | 4;
  }
  *(uint *)(param_1 + 0xad4) = uVar3;
  return;
}




void FUN_10006b2ac(long param_1)

{
  int iVar1;
  long lVar2;
  
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = FUN_1003a7540();
  if (lVar2 != 0) {
    iVar1 = FUN_100461330(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
    if (*(char *)(param_1 + 0x1ce0) != iVar1) {
      FUN_10006a190(param_1,(int)(char)iVar1);
      FUN_10006a234(param_1);
      return;
    }
  }
  return;
}




void FUN_10006b314(long param_1)

{
  uint uVar1;
  
  uVar1 = FUN_10006ae6c();
  if (uVar1 == *(byte *)(param_1 + 0x1ce1)) {
    return;
  }
  FUN_10006a234(param_1);
  return;
}




float FUN_10006b354(long param_1)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar1 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  fVar3 = (float)FUN_1003e118c(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
  if (fVar3 <= 0.0) {
    fVar3 = (float)FUN_1003e11c0(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
    if (fVar3 <= 0.0) {
      return 0.0;
    }
    fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0x314);
    fVar3 = (float)FUN_1003e11c0(0,lVar2,*(undefined4 *)(param_1 + 0x1cd8));
  }
  else {
    fVar4 = *(float *)(*(long *)(lVar1 + 0x40) + 0x310);
    fVar3 = (float)FUN_1003e118c(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
  }
  return 1.0 - fVar4 / fVar3;
}




undefined4 FUN_10006b424(long param_1)

{
  return *(undefined4 *)(param_1 + 0x1cd8);
}




bool FUN_10006b42c(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  uVar3 = FUN_1003a75f8();
  iVar2 = FUN_100461350(uVar3,*(undefined4 *)(param_1 + 0x1cd8));
  if ((iVar2 == 0) && (uVar4 = (ulong)*(ushort *)(param_1 + 0xb8) & 0x1f, (int)uVar4 != 0x1f)) {
    bVar1 = *(ushort *)(param_1 + uVar4 * 0x38 + 0xc0) - 1 < 2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}




void FUN_10006b498(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_REQUEST_ABILITY_ACTIVATION");
  FUN_100644aec(auStack_40,uVar1,*(undefined4 *)(param_1 + 0x1cdc));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10006b4e8(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_15c [4];
  float local_158 [2];
  void *local_150;
  void *local_148 [2];
  char local_131;
  undefined4 local_130;
  undefined8 local_12c;
  undefined **local_120;
  undefined1 auStack_118 [40];
  long *local_f0;
  undefined8 local_d0;
  void *local_c8;
  void *local_c0;
  char local_a9;
  undefined4 local_a0;
  float local_9c;
  float local_8c;
  undefined4 local_78;
  undefined1 auStack_70 [8];
  void *local_68;
  undefined1 auStack_60 [8];
  void *local_58;
  
  iVar1 = FUN_1001311f4();
  if (iVar1 != 0) {
    plVar2 = (long *)param_1[0x35];
    if (plVar2 == (long *)0x0) {
      uVar3 = 0;
    }
    else if ((int)param_1[0x36] == (int)plVar2[1]) {
      uVar3 = (**(code **)(*plVar2 + 0x10))();
    }
    else {
      uVar3 = 0;
      param_1[0x35] = 0;
      *(undefined4 *)(param_1 + 0x36) = DAT_101dc0b88;
    }
    uVar4 = FUN_1003a7540(uVar3);
    puVar5 = (undefined8 *)FUN_1003c1b18(uVar4,(int)param_1[0x39b]);
    uVar4 = FUN_1004e0150(*puVar5,0);
    thunk_FUN_1004e439c(auStack_60,uVar4);
    uVar4 = FUN_1004e0150(puVar5[5],0);
    thunk_FUN_1004e439c(auStack_70,uVar4);
    FUN_1000ed57c(auStack_70,puVar5,uVar3);
    iVar1 = FUN_100126c88();
    fVar6 = (float)(**(code **)(*param_1 + 0x48))(param_1);
    fVar7 = 0.3;
    if (iVar1 == 0) {
      fVar7 = 0.1;
    }
    thunk_FUN_1001cd434(&local_120);
    local_a0 = 0;
    local_78 = 0;
    local_f0 = param_1;
    local_9c = fVar6 * fVar7;
    thunk_FUN_1004e439c(local_158,auStack_60);
    FUN_10003330c(local_148,&DAT_101d91198);
    local_130 = 0;
    local_12c = 0x41a00000;
    FUN_10003c048(auStack_118,local_158);
    if (local_131 < '\0') {
      operator_delete(local_148[0]);
    }
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
    }
    thunk_FUN_1004e439c(local_158,auStack_70);
    FUN_10003330c(local_148,&DAT_101d91198);
    local_130 = 1;
    local_12c = 0x41a00000;
    FUN_10003c048(auStack_118,local_158);
    if (local_131 < '\0') {
      operator_delete(local_148[0]);
    }
    if (local_150 != (void *)0x0) {
      operator_delete__(local_150);
    }
    if (iVar1 != 0) {
      FUN_100641464(local_158,auStack_15c);
      local_8c = local_158[0] * 0.55;
    }
    uVar3 = FUN_100644a94("EVENT_REQUEST_ABILITY_TOOLTIP");
    FUN_100644aec(local_158,uVar3,&local_120);
    FUN_100644c34(param_1,local_158,1);
    local_120 = &PTR_FUN_1014666e0;
    if (local_a9 < '\0') {
      operator_delete(local_c0);
    }
    if (local_c8 != (void *)0x0) {
      operator_delete__(local_c8);
      local_d0 = 0;
      local_c8 = (void *)0x0;
    }
    FUN_10003c1ec(auStack_118,1);
    if (local_68 != (void *)0x0) {
      operator_delete__(local_68);
    }
    if (local_58 != (void *)0x0) {
      operator_delete__(local_58);
    }
  }
  return;
}




void FUN_10006b774(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [32];
  
  uVar1 = FUN_100644a94("EVENT_REQUEST_ABILITY_TOOLTIP_CANCEL");
  FUN_100644aec(auStack_40,uVar1,*(undefined4 *)(param_1 + 0x1cd8));
  FUN_100644c34(param_1,auStack_40,1);
  return;
}




void FUN_10006b7c4(ushort *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)*param_1 & 0x1f;
  if ((int)uVar1 != 0x1f) {
    UNRECOVERED_JUMPTABLE = *(code **)(param_1 + uVar1 * 0x1c + 8);
    uVar2 = *(ulong *)(param_1 + uVar1 * 0x1c + 0xc) & 1;
    if (uVar2 != 0 || UNRECOVERED_JUMPTABLE != (code *)0x0) {
      if (uVar2 != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(*(long *)(*(long *)(param_1 + 0x74) +
                                 ((long)*(ulong *)(param_1 + uVar1 * 0x1c + 0xc) >> 1)) +
                       ((ulong)UNRECOVERED_JUMPTABLE & 0xffffffff));
      }
                    /* WARNING: Could not recover jumptable at 0x00010006b800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}




void FUN_10006b808(long param_1)

{
  uint3 uVar1;
  int iVar2;
  uint64_t uVar3;
  undefined8 local_30;
  undefined4 local_28;
  
  uVar1 = *(uint3 *)(param_1 + 0x1ce0);
  if ((*(byte *)(param_1 + 0x1ce2) & 2) == 0) {
    iVar2 = FUN_10006abf8(param_1);
    uVar1 = *(uint3 *)(param_1 + 0x1ce0);
    if (iVar2 != 0) {
      if ((*(byte *)(param_1 + 0x1ce2) & 1) == 0) {
        return;
      }
      uVar3 = _mach_absolute_time();
      if ((double)((uVar3 - *(long *)(param_1 + 0x1cc8)) * DAT_101d91638) * 1e-09 <=
          0.4000000059604645) {
        return;
      }
      local_30 = *(undefined8 *)(param_1 + 0x1a8);
      local_28 = *(undefined4 *)(param_1 + 0x1b0);
      FUN_100067dc8(&local_30,*(undefined4 *)(param_1 + 0x1cd8));
      FUN_10006b4e8(param_1);
      return;
    }
  }
  if ((uVar1 >> 0x10 & 1) == 0) {
    return;
  }
  FUN_10006ab54(param_1);
  return;
}




void FUN_10006b8e8(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar2 = (**(code **)(*param_2 + 0x10))(param_2,DAT_101dbd4d8);
  if ((((uVar2 & 1) != 0) || (DAT_101dbd4d8 == DAT_101dbd450)) &&
     ((iVar1 = FUN_100644ecc(param_2), iVar1 == 0 ||
      (uVar2 = FUN_10006ba28(param_1), (uVar2 & 1) == 0)))) {
    if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x11 & 1) == 0) {
      local_40 = *(undefined8 *)(param_1 + 0x1a8);
      local_38 = *(undefined4 *)(param_1 + 0x1b0);
      uVar2 = FUN_100067dc8(&local_40,*(undefined4 *)(param_1 + 0x1cd8));
      iVar1 = FUN_10006b42c(param_1);
      if ((uVar2 & 1) == 0) {
        if (iVar1 != 0) {
          FUN_10006bc20(param_1);
          FUN_10006b498(param_1);
        }
      }
      else if (iVar1 != 0) {
        FUN_10006bc20(param_1);
        *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) | 8;
      }
      FUN_1004e3004(param_1 + 0x1cc8);
      *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) | 1;
      FUN_10006bfd0(param_1);
      return;
    }
    FUN_10006b4e8(param_1);
    return;
  }
  return;
}




undefined8 FUN_10006ba28(long param_1)

{
  bool bVar1;
  bool bVar2;
  uint64_t uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  float fVar12;
  undefined1 auStack_80 [48];
  
  uVar3 = _mach_absolute_time();
  if (2.0 <= (double)((uVar3 - *(long *)(param_1 + 0x1cc0)) * DAT_101d91638) * 1e-09) {
    lVar4 = FUN_100057f34();
    if (lVar4 != 0) {
      FUN_10005fe04();
      fVar12 = (float)FUN_100060518();
      if (0.0 < fVar12) {
        return 0;
      }
    }
    uVar5 = FUN_100491adc();
    uVar5 = FUN_100491f2c(uVar5,3);
    lVar4 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
    lVar4 = *(long *)(lVar4 + 0x18);
    while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
      lVar4 = *(long *)(lVar4 + 0x20);
    }
    uVar6 = FUN_1003a4970(lVar4,*(undefined4 *)(param_1 + 0x1cd8));
    if ((int)uVar6 == 0) {
      return uVar6;
    }
    uVar6 = FUN_1003bf0ac(lVar4,*(undefined4 *)(param_1 + 0x1cd8));
    fVar12 = (float)FUN_1003a4990(lVar4,*(undefined4 *)(param_1 + 0x1cd8));
    bVar1 = true;
    bVar2 = false;
    if (10.0 <= fVar12) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN((float)uVar6)) {
        bVar1 = (float)uVar6 < 5.0;
        bVar2 = false;
      }
    }
    if (bVar1 == bVar2) {
      uVar7 = FUN_10034ee90();
      FUN_1000106d8(uVar6,auStack_80,uVar7,uVar5,0xffffffff,*(undefined4 *)(param_1 + 0x1cd8));
      FUN_100345498(auStack_80);
      lVar4 = FUN_1000bdb98();
      plVar8 = (long *)(lVar4 + 0x10);
      plVar9 = (long *)*plVar8;
      plVar10 = plVar8;
      if (plVar9 != (long *)0x0) {
        do {
          if (*(uint *)(plVar9 + 4) >= 0x2e4f13dd) {
            plVar10 = plVar9;
          }
          plVar9 = (long *)plVar9[*(uint *)(plVar9 + 4) < 0x2e4f13dd];
        } while (plVar9 != (long *)0x0);
        if (((plVar10 != plVar8) && (*(uint *)(plVar10 + 4) < 0x2e4f13de)) && ((int)plVar10[5] != 0)
           ) {
          lVar4 = 0;
          uVar11 = 0;
          do {
            (*(code *)((undefined8 *)(plVar10[6] + lVar4))[1])(*(undefined8 *)(plVar10[6] + lVar4));
            uVar11 = uVar11 + 1;
            lVar4 = lVar4 + 0x10;
          } while (uVar11 < *(uint *)(plVar10 + 5));
        }
      }
      FUN_1004e3004(param_1 + 0x1cc0);
      return 1;
    }
  }
  return 0;
}




void FUN_10006bc20(long param_1)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_58;
  
  FUN_100642d18();
  uVar3 = FUN_10001f424();
  local_58 = NEON_fmov(0x3fe00000,4);
  FUN_10064025c(uVar3,&local_58);
  FUN_10063f0e8(0x3c23d70a,uVar3);
  uVar4 = FUN_10001f424();
  uVar5 = NEON_fmov(0x3f800000,4);
  local_58 = uVar5;
  FUN_10064025c(uVar4,&local_58);
  FUN_10063f0e8(0x3e800000,uVar4);
  FUN_10063f130(uVar4,FUN_10006bf9c);
  lVar1 = param_1 + 0x1b8;
  FUN_100642324(lVar1);
  bVar2 = false;
  if ((*(float *)(param_1 + 0x200) == 1.0) && (bVar2 = false, !NAN(*(float *)(param_1 + 0x204)))) {
    bVar2 = *(float *)(param_1 + 0x204) == 1.0;
  }
  if (!bVar2) {
    *(undefined8 *)(param_1 + 0x200) = uVar5;
    FUN_1000200a0(lVar1);
  }
  FUN_100642b7c(lVar1,uVar3);
  uVar3 = FUN_10004767c();
  uVar4 = FUN_100047714();
  FUN_10063fce0(0x3ecccccd);
  FUN_10063f0e8(0x3c23d70a,uVar4);
  FUN_10001f180();
  FUN_10063f0e8(0x3e19999a);
  FUN_100047300();
  lVar1 = param_1 + 0x550;
  FUN_100642324(lVar1);
  if ((*(uint *)(param_1 + 0x5d4) & 0x7f80) != 0) {
    *(uint *)(param_1 + 0x5d4) = *(uint *)(param_1 + 0x5d4) & 0xffff807f;
    FUN_1000200a0(lVar1);
  }
  FUN_100642b7c(lVar1,uVar3);
  FUN_1000699e4(param_1 + 0xb8,2,0,0);
  return;
}




void FUN_10006bd94(long param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_30;
  undefined4 local_28;
  
  if ((*(byte *)(param_1 + 0x1ce2) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x1ce2) & 8) != 0) {
      local_30 = *(undefined8 *)(param_1 + 0x1a8);
      local_28 = *(undefined4 *)(param_1 + 0x1b0);
      iVar1 = FUN_100067dc8(&local_30,*(undefined4 *)(param_1 + 0x1cd8));
      if ((iVar1 != 0) && (iVar1 = FUN_10006b42c(param_1), iVar1 != 0)) {
        *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) & 0xf7;
        FUN_10006b498(param_1);
      }
      uVar2 = FUN_10006abf8(param_1);
      if ((uVar2 & 1) == 0) {
        FUN_10006ab54(param_1);
        return;
      }
    }
  }
  else {
    uVar2 = FUN_10006abf8(param_1);
    if ((uVar2 & 1) == 0) {
      FUN_10006b774(param_1);
      return;
    }
  }
  return;
}




void FUN_10006be64(long param_1,undefined8 param_2)

{
  FUN_10006b774();
  FUN_10006ab54(param_1);
  *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) & 0xf7;
  FUN_100644b14(param_2);
  return;
}




void FUN_10006beb0(long param_1)

{
  if ((((uint)*(byte *)(param_1 + 0x1ce2) << 0x10) >> 0x11 & 1) == 0) {
    FUN_1004e3004(param_1 + 0x1cc8);
    *(byte *)(param_1 + 0x1ce2) = *(byte *)(param_1 + 0x1ce2) | 1;
    FUN_10006bfd0(param_1);
    return;
  }
  FUN_10006b4e8(param_1);
  return;
}




undefined8 FUN_10006bf14(void)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  
  lVar1 = DAT_101dbd2f8;
  uVar3 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar3 == 0xffff) {
    uVar2 = 0;
  }
  else {
    if (uVar3 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar3 = 0xffff;
    }
    else {
      uVar3 = *(ushort *)(DAT_101dbd2f8 + (ulong)uVar3 * 0x40 + 0x10);
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar3;
    *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
    uVar2 = FUN_10063f098();
    *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
  }
  return uVar2;
}




float FUN_10006bf9c(float param_1,float param_2,float param_3,float param_4)

{
  float fVar1;
  
  fVar1 = param_1 / param_4 + -1.0;
  return param_2 + param_3 * ((fVar1 * 2.70158 + 1.70158) * fVar1 * fVar1 + 1.0);
}




void FUN_10006bfd0(undefined1 param_1 [16],float param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  ushort *puVar5;
  float fVar6;
  float fVar7;
  undefined4 local_48;
  float local_44;
  
  uVar3 = FUN_10004767c();
  lVar1 = param_3 + 0x1848;
  local_48 = *(undefined4 *)(param_3 + 0x1888);
  fVar7 = *(float *)(param_3 + 0x188c);
  FUN_10064e3cc(lVar1);
  fVar6 = param_2;
  FUN_10064e3cc(param_3 + 0x16a8);
  lVar2 = DAT_101dbd2f8;
  local_44 = fVar7 - (param_2 + fVar6);
  uVar4 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
  if ((ulong)uVar4 == 0xffff) {
    puVar5 = (ushort *)0x0;
  }
  else {
    puVar5 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar4 * 0x40 + 0x10);
    if (uVar4 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
      uVar4 = 0xffff;
    }
    else {
      uVar4 = *puVar5;
    }
    *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar4;
    *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
    FUN_10063fb5c(puVar5);
    *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
  }
  FUN_10063f0e8(0x3ecccccd,puVar5);
  FUN_10063fb90(puVar5,&local_48);
  FUN_100642324(lVar1);
  FUN_100642b7c(lVar1,uVar3);
  return;
}




void FUN_10006c0ec(long param_1,int param_2)

{
  if (*(int *)(param_1 + 0x1cd8) == param_2) {
    FUN_10006c104(param_1,3);
    return;
  }
  return;
}




void FUN_10006c104(long param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_100642d18();
  uVar1 = FUN_1001aa720(param_1 + 0x1ae0);
  if ((*(byte *)(param_1 + 0x1ce2) & 0x60) != 0 || 4 < param_2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010006c17c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_10006c180 + (ulong)(byte)(&DAT_10114bab4)[param_2] * 4))
            (uVar1,"Effect_HUD_AbilityButton_Ready");
  return;
}




void FUN_10006c1c4(float param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((param_1 < 0.0) && (iVar1 = FUN_10006c204(), iVar1 != 0)) {
    FUN_10006c104(param_2,2);
    return;
  }
  return;
}




bool FUN_10006c204(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0x1a8) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while( true ) {
    if (lVar2 == 0) {
      return false;
    }
    if (*(int *)(*(long *)(lVar2 + 8) + 0xa4) == DAT_10184dab8) break;
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  piVar3 = (int *)FUN_100461368(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
  if (*(int *)(param_2 + 0x50) != *piVar3) {
    return false;
  }
  uVar1 = FUN_100461350(lVar2,*(undefined4 *)(param_1 + 0x1cd8));
  return (uVar1 & 0xc) == 4;
}




void FUN_10006c2a4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  
  iVar1 = FUN_10006c204();
  if (iVar1 != 0) {
    fVar2 = (float)FUN_10043eeb4(param_2);
    FUN_10006c104(param_1,0.0 < fVar2);
    return;
  }
  return;
}




void FUN_10006c2ec(long param_1)

{
  undefined1 auStack_40 [8];
  void *local_38;
  
  FUN_1004e313c(auStack_40);
  FUN_1004e38ac(auStack_40,"%.0f");
  FUN_1006513c0(param_1 + 0x830,auStack_40);
  if (local_38 != (void *)0x0) {
    operator_delete__(local_38);
  }
  return;
}




void FUN_10006c360(long param_1)

{
  undefined1 auStack_30 [8];
  void *local_28;
  
  FUN_1004e313c(auStack_30);
  FUN_1004e38ac(auStack_30,"%u");
  FUN_1006513c0(param_1 + 0xa50,auStack_30);
  if (local_28 != (void *)0x0) {
    operator_delete__(local_28);
  }
  return;
}




void FUN_10006c3bc(void)

{
  if ((DAT_10184daa0 & 1) == 0) {
    DAT_10184da98 = DAT_101872e38;
    DAT_10184daa0 = 1;
  }
  return;
}




void FUN_10006c3e8(void)

{
  if ((DAT_10184db38 & 1) == 0) {
    DAT_10184db30 = DAT_101872e38;
    DAT_10184db38 = 1;
  }
  return;
}




void FUN_10006c414(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




long * FUN_10006c440(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  code *local_90;
  long *plStack_88;
  long *local_80;
  code *local_78;
  long *local_70;
  undefined4 local_68;
  long *plVar8;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_10006cb70_10144dd38;
  puVar6[0x17] = 0;
  *(undefined4 *)(puVar6 + 0x18) = DAT_101dc0b88;
  thunk_FUN_1001ceb64(puVar6 + 0x19,1);
  plVar14 = param_1 + 0x36;
  FUN_100269de4();
  plVar1 = param_1 + 0x4f;
  thunk_FUN_100652c08(plVar1);
  FUN_10064e264();
  lVar10 = 0;
  do {
    thunk_FUN_100067e64((long)param_1 + lVar10 + 0x420);
    lVar10 = lVar10 + 0x1ce8;
  } while (lVar10 != 0x56b8);
  FUN_1006421a8(param_1 + 0xb5b);
  param_1[0xb5b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0xb6c;
  lVar10 = 0x23b8;
  do {
    lVar7 = thunk_FUN_10006f1e0(plVar8);
    plVar8 = (long *)(lVar7 + 0xbe8);
    lVar10 = lVar10 + -0xbe8;
  } while (lVar10 != 0);
  plVar8 = param_1 + 0xfe3;
  FUN_10064e264(plVar8);
  plVar17 = param_1 + 0xffa;
  FUN_10064e264(plVar17);
  plVar2 = param_1 + 0x1011;
  thunk_FUN_100652c08(plVar2);
  plVar15 = param_1 + 0x102f;
  thunk_FUN_100652c08(plVar15);
  plVar3 = param_1 + 0x104d;
  FUN_1006505b8(plVar3);
  plVar13 = param_1 + 0x106a;
  param_1[0x1069] = 0;
  param_1[0x1068] = 0;
  FUN_10064e264(plVar13);
  plVar12 = param_1 + 0x1081;
  thunk_FUN_100650e64(plVar12);
  param_1[0x10a7] = 0x3e4ccccd00000000;
  *(ushort *)(param_1 + 0x10a8) = *(ushort *)(param_1 + 0x10a8) & 0xc000 | 0x30ff;
  uVar9 = FUN_1003da398();
  FUN_1004e18bc(uVar9,param_1,0xb924e89d,FUN_10006ca6c,0);
  uVar9 = FUN_1000bdb98();
  FUN_1004e18bc(uVar9,param_1,0xf4269e13,FUN_10006cab0,0);
  uVar9 = FUN_1000bdb98();
  FUN_1004e18bc(uVar9,param_1,0xccc11f8e,FUN_10006cad8,0);
  uVar9 = FUN_1000bdb98();
  FUN_1004e18bc(uVar9,param_1,0x8a579c5c,FUN_10006cb0c,0);
  uVar9 = FUN_100316150();
  local_90 = (code *)0x0;
  local_78 = FUN_10006e9f0;
  plStack_88 = param_1;
  local_80 = param_1;
  FUN_10003c508(uVar9,&local_90);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  FUN_100642bd8(plVar14,plVar13,1);
  FUN_100642bd8(plVar13,plVar12,1);
  FUN_100642bd8(plVar14,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x6d,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar17,1);
  FUN_100642bd8(plVar17,plVar2,1);
  FUN_100642bd8(plVar17,plVar15,1);
  FUN_100642bd8(plVar1,puVar6 + 0x19,1);
  FUN_100642bd8(plVar1,plVar3,1);
  local_90 = (code *)0x3f8000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&local_90);
  *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) | 4;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0xc;
  *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) | 4;
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar2,"hud_xpbar_empty");
  uVar5 = *(uint *)((long)param_1 + 0x810c);
  if ((uVar5 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x810c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0xc80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar15,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar15,"hud_xpbar_fill");
  uVar5 = *(uint *)((long)param_1 + 0x81fc);
  if ((uVar5 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x81fc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x2600;
    FUN_1000200a0(plVar15);
  }
  *(uint *)((long)param_1 + 0x7f9c) = *(uint *)((long)param_1 + 0x7f9c) | 4;
  FUN_100651038(plVar12,PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0);
  FUN_100651460(plVar12,&DAT_101dc41ce);
  FUN_1006516bc(plVar12,&DAT_101d22fe8);
  FUN_10065165c(plVar12,1);
  *(uint *)((long)param_1 + 0x848c) = *(uint *)((long)param_1 + 0x848c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x108b) != 0.5) || (*(float *)((long)param_1 + 0x845c) != 0.0)) {
    param_1[0x108b] = 0x3f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100269e20(0x3dcccccd,plVar14,1,4,1);
  pcVar11 = "HUD_AbilityTray";
  uVar4 = FUN_1004d2524("HUD_AbilityTray");
  uVar5 = FUN_100015208("HUD_AbilityTray",uVar4,0x1234);
  uVar16 = 0;
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  plVar14 = param_1 + 0x85;
  do {
    local_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_UPGRADE");
    pcVar11 = (char *)((ulong)pcVar11 & 0xffffffff00000000 | uVar16);
    local_90 = FUN_10006cb3c;
    local_80 = (long *)0x0;
    local_78 = (code *)0x0;
    plStack_88 = param_1;
    local_70 = (long *)pcVar11;
    FUN_10001554c(plVar14,&local_90);
    local_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_ACTIVATION");
    plVar15 = (long *)((ulong)plVar15 & 0xffffffff00000000 | uVar16);
    local_90 = FUN_10006cb44;
    local_80 = (long *)0x0;
    local_78 = (code *)0x0;
    plStack_88 = param_1;
    local_70 = plVar15;
    FUN_10001554c(plVar14,&local_90);
    local_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_CAST");
    plVar13 = (long *)((ulong)plVar13 & 0xffffffff00000000 | uVar16);
    local_90 = FUN_10006cb4c;
    local_80 = (long *)0x0;
    local_78 = (code *)0x0;
    plStack_88 = param_1;
    local_70 = plVar13;
    FUN_10001554c(plVar14,&local_90);
    local_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_TOOLTIP");
    plVar17 = (long *)((ulong)plVar17 & 0xffffffff00000000 | uVar16);
    local_90 = FUN_10006cb54;
    local_80 = (long *)0x0;
    local_78 = (code *)0x0;
    plStack_88 = param_1;
    local_70 = plVar17;
    FUN_10001554c(plVar14,&local_90);
    local_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_TOOLTIP_CANCEL");
    plVar12 = (long *)((ulong)plVar12 & 0xffffffff00000000 | uVar16);
    local_90 = FUN_10006cb60;
    local_80 = (long *)0x0;
    local_78 = (code *)0x0;
    plStack_88 = param_1;
    local_70 = plVar12;
    FUN_10001554c(plVar14,&local_90);
    uVar16 = uVar16 + 1;
    plVar14 = plVar14 + 0x39d;
  } while (uVar16 != 3);
  FUN_100650608(plVar3,&DAT_10115a164);
  local_68 = DAT_101dbd4a4;
  local_90 = thunk_FUN_10006d784;
  local_78 = (code *)0x0;
  local_70 = (long *)0x0;
  local_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&local_90);
  return param_1;
}




void FUN_10006ca6c(undefined8 param_1)

{
  int iVar1;
  undefined4 in_stack_00000000;
  
  iVar1 = FUN_10034ea2c(in_stack_00000000);
  if (iVar1 != 0) {
    FUN_10006e76c(param_1);
  }
  return;
}




void FUN_10006cab0(void)

{
  FUN_10006e76c();
  return;
}




void FUN_10006cad8(undefined8 param_1)

{
  long in_stack_00000000;
  
  if (in_stack_00000000 != 0) {
    FUN_10006da0c(param_1,0);
  }
  return;
}




void FUN_10006cb0c(undefined8 param_1)

{
  undefined4 in_stack_00000000;
  
  FUN_10006e8cc(param_1,in_stack_00000000,*(undefined4 *)((ulong)&stack0x00000000 | 8));
  return;
}




void FUN_10006cb3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10006e544(param_1,param_2,param_5);
  return;
}




void FUN_10006cb44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10006e5b0(param_1,param_2,param_5);
  return;
}




void FUN_10006cb4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10006e620(param_1,param_2,param_5);
  return;
}




void FUN_10006cb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10006e674(param_1,param_4,param_5);
  return;
}




void FUN_10006cb60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_10006e6bc(param_1,param_2,param_5);
  return;
}




void thunk_FUN_10006d784(void)

{
  FUN_10006d784();
  return;
}




long * thunk_FUN_10006c440(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar9;
  long lVar10;
  char *pcVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long *plVar17;
  code *pcStack_90;
  long *plStack_88;
  long *plStack_80;
  code *pcStack_78;
  long *plStack_70;
  undefined4 uStack_68;
  long *plVar8;
  
  puVar6 = (undefined8 *)FUN_10064e20c();
  *puVar6 = &PTR_thunk_FUN_10006cb70_10144dd38;
  puVar6[0x17] = 0;
  *(undefined4 *)(puVar6 + 0x18) = DAT_101dc0b88;
  thunk_FUN_1001ceb64(puVar6 + 0x19,1);
  plVar14 = param_1 + 0x36;
  FUN_100269de4();
  plVar1 = param_1 + 0x4f;
  thunk_FUN_100652c08(plVar1);
  FUN_10064e264();
  lVar10 = 0;
  do {
    thunk_FUN_100067e64((long)param_1 + lVar10 + 0x420);
    lVar10 = lVar10 + 0x1ce8;
  } while (lVar10 != 0x56b8);
  FUN_1006421a8(param_1 + 0xb5b);
  param_1[0xb5b] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar8 = param_1 + 0xb6c;
  lVar10 = 0x23b8;
  do {
    lVar7 = thunk_FUN_10006f1e0(plVar8);
    plVar8 = (long *)(lVar7 + 0xbe8);
    lVar10 = lVar10 + -0xbe8;
  } while (lVar10 != 0);
  plVar8 = param_1 + 0xfe3;
  FUN_10064e264(plVar8);
  plVar17 = param_1 + 0xffa;
  FUN_10064e264(plVar17);
  plVar2 = param_1 + 0x1011;
  thunk_FUN_100652c08(plVar2);
  plVar15 = param_1 + 0x102f;
  thunk_FUN_100652c08(plVar15);
  plVar3 = param_1 + 0x104d;
  FUN_1006505b8(plVar3);
  plVar13 = param_1 + 0x106a;
  param_1[0x1069] = 0;
  param_1[0x1068] = 0;
  FUN_10064e264(plVar13);
  plVar12 = param_1 + 0x1081;
  thunk_FUN_100650e64(plVar12);
  param_1[0x10a7] = 0x3e4ccccd00000000;
  *(ushort *)(param_1 + 0x10a8) = *(ushort *)(param_1 + 0x10a8) & 0xc000 | 0x30ff;
  uVar9 = FUN_1003da398();
  FUN_1004e18bc(uVar9,param_1,0xb924e89d,FUN_10006ca6c,0);
  uVar9 = FUN_1000bdb98();
  FUN_1004e18bc(uVar9,param_1,0xf4269e13,FUN_10006cab0,0);
  uVar9 = FUN_1000bdb98();
  FUN_1004e18bc(uVar9,param_1,0xccc11f8e,FUN_10006cad8,0);
  uVar9 = FUN_1000bdb98();
  FUN_1004e18bc(uVar9,param_1,0x8a579c5c,FUN_10006cb0c,0);
  uVar9 = FUN_100316150();
  pcStack_90 = (code *)0x0;
  pcStack_78 = FUN_10006e9f0;
  plStack_88 = param_1;
  plStack_80 = param_1;
  FUN_10003c508(uVar9,&pcStack_90);
  (**(code **)(*param_1 + 0x78))(param_1,plVar14,1);
  FUN_100642bd8(plVar14,plVar13,1);
  FUN_100642bd8(plVar13,plVar12,1);
  FUN_100642bd8(plVar14,plVar1,1);
  FUN_100642bd8(plVar1,param_1 + 0x6d,1);
  FUN_100642bd8(plVar1,plVar8,1);
  FUN_100642bd8(plVar8,plVar17,1);
  FUN_100642bd8(plVar17,plVar2,1);
  FUN_100642bd8(plVar17,plVar15,1);
  FUN_100642bd8(plVar1,puVar6 + 0x19,1);
  FUN_100642bd8(plVar1,plVar3,1);
  pcStack_90 = (code *)0x3f8000003f000000;
  (**(code **)(*param_1 + 0x28))(param_1,&pcStack_90);
  *(uint *)((long)param_1 + 0x2fc) = *(uint *)((long)param_1 + 0x2fc) | 4;
  *(uint *)((long)param_1 + 0x14c) = *(uint *)((long)param_1 + 0x14c) | 0xc;
  *(uint *)((long)param_1 + 0x3ec) = *(uint *)((long)param_1 + 0x3ec) | 4;
  FUN_100652ca4(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar2,"hud_xpbar_empty");
  uVar5 = *(uint *)((long)param_1 + 0x810c);
  if ((uVar5 & 0x7f80) != 0xc80) {
    *(uint *)((long)param_1 + 0x810c) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0xc80;
    FUN_1000200a0(plVar2);
  }
  FUN_100652ca4(plVar15,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(plVar15,"hud_xpbar_fill");
  uVar5 = *(uint *)((long)param_1 + 0x81fc);
  if ((uVar5 & 0x7f80) != 0x2600) {
    *(uint *)((long)param_1 + 0x81fc) = uVar5 & 0xffff8000 | uVar5 & 0x7f | 0x2600;
    FUN_1000200a0(plVar15);
  }
  *(uint *)((long)param_1 + 0x7f9c) = *(uint *)((long)param_1 + 0x7f9c) | 4;
  FUN_100651038(plVar12,PTR_s_build___Fonts_Avenir_Heavy_30_fo_10184e2b0);
  FUN_100651460(plVar12,&DAT_101dc41ce);
  FUN_1006516bc(plVar12,&DAT_101d22fe8);
  FUN_10065165c(plVar12,1);
  *(uint *)((long)param_1 + 0x848c) = *(uint *)((long)param_1 + 0x848c) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x108b) != 0.5) || (*(float *)((long)param_1 + 0x845c) != 0.0)) {
    param_1[0x108b] = 0x3f000000;
    FUN_1000200a0(plVar12);
  }
  FUN_100269e20(0x3dcccccd,plVar14,1,4,1);
  pcVar11 = "HUD_AbilityTray";
  uVar4 = FUN_1004d2524("HUD_AbilityTray");
  uVar5 = FUN_100015208("HUD_AbilityTray",uVar4,0x1234);
  uVar16 = 0;
  *(uint *)((long)param_1 + 0x84) =
       *(uint *)((long)param_1 + 0x84) & 0x80000000 |
       *(uint *)((long)param_1 + 0x84) & 0x7fff | (uVar5 & 0xffff) << 0xf;
  plVar14 = param_1 + 0x85;
  do {
    uStack_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_UPGRADE");
    pcVar11 = (char *)((ulong)pcVar11 & 0xffffffff00000000 | uVar16);
    pcStack_90 = FUN_10006cb3c;
    plStack_80 = (long *)0x0;
    pcStack_78 = (code *)0x0;
    plStack_88 = param_1;
    plStack_70 = (long *)pcVar11;
    FUN_10001554c(plVar14,&pcStack_90);
    uStack_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_ACTIVATION");
    plVar15 = (long *)((ulong)plVar15 & 0xffffffff00000000 | uVar16);
    pcStack_90 = FUN_10006cb44;
    plStack_80 = (long *)0x0;
    pcStack_78 = (code *)0x0;
    plStack_88 = param_1;
    plStack_70 = plVar15;
    FUN_10001554c(plVar14,&pcStack_90);
    uStack_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_CAST");
    plVar13 = (long *)((ulong)plVar13 & 0xffffffff00000000 | uVar16);
    pcStack_90 = FUN_10006cb4c;
    plStack_80 = (long *)0x0;
    pcStack_78 = (code *)0x0;
    plStack_88 = param_1;
    plStack_70 = plVar13;
    FUN_10001554c(plVar14,&pcStack_90);
    uStack_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_TOOLTIP");
    plVar17 = (long *)((ulong)plVar17 & 0xffffffff00000000 | uVar16);
    pcStack_90 = FUN_10006cb54;
    plStack_80 = (long *)0x0;
    pcStack_78 = (code *)0x0;
    plStack_88 = param_1;
    plStack_70 = plVar17;
    FUN_10001554c(plVar14,&pcStack_90);
    uStack_68 = FUN_100644a94("EVENT_REQUEST_ABILITY_TOOLTIP_CANCEL");
    plVar12 = (long *)((ulong)plVar12 & 0xffffffff00000000 | uVar16);
    pcStack_90 = FUN_10006cb60;
    plStack_80 = (long *)0x0;
    pcStack_78 = (code *)0x0;
    plStack_88 = param_1;
    plStack_70 = plVar12;
    FUN_10001554c(plVar14,&pcStack_90);
    uVar16 = uVar16 + 1;
    plVar14 = plVar14 + 0x39d;
  } while (uVar16 != 3);
  FUN_100650608(plVar3,&DAT_10115a164);
  uStack_68 = DAT_101dbd4a4;
  pcStack_90 = thunk_FUN_10006d784;
  pcStack_78 = (code *)0x0;
  plStack_70 = (long *)0x0;
  plStack_80 = (long *)0x0;
  plStack_88 = param_1;
  FUN_10001554c(param_1 + 1,&pcStack_90);
  return param_1;
}




void FUN_10006cb70(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_thunk_FUN_10006cb70_10144dd38;
  uVar2 = FUN_1003da398();
  FUN_1004e1b58(uVar2,param_1);
  uVar2 = FUN_1000bdb98();
  FUN_1004e1b58(uVar2,param_1);
  iVar1 = FUN_10031613c();
  if (iVar1 != 0) {
    puVar3 = (uint *)FUN_100316150();
    if (*puVar3 != 0) {
      lVar5 = *(long *)(puVar3 + 2);
      lVar6 = (ulong)*puVar3 << 5;
      do {
        puVar4 = (undefined8 *)(lVar5 + 8);
        lVar5 = lVar5 + 0x20;
        if ((undefined8 *)*puVar4 == param_1) {
          FUN_10003c608();
          break;
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
  }
  if ((long *)param_1[0x1068] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1068] + 8))();
    param_1[0x1068] = 0;
  }
  if ((long *)param_1[0x1069] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1069] + 8))();
    param_1[0x1069] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x1081);
  thunk_FUN_10064e2bc(param_1 + 0x106a);
  FUN_10064e2bc(param_1 + 0x104d);
  param_1[0x102f] = &PTR_FUN_1014a7108;
  param_1[0x1046] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1049);
  FUN_10064e2bc(param_1 + 0x102f);
  param_1[0x1011] = &PTR_FUN_1014a7108;
  param_1[0x1028] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x102b);
  FUN_10064e2bc(param_1 + 0x1011);
  thunk_FUN_10064e2bc(param_1 + 0xffa);
  thunk_FUN_10064e2bc(param_1 + 0xfe3);
  puVar4 = param_1 + 0xe66;
  lVar5 = -0x23b8;
  do {
    lVar6 = FUN_100065974(puVar4);
    puVar4 = (undefined8 *)(lVar6 + -0xbe8);
    lVar5 = lVar5 + 0xbe8;
  } while (lVar5 != 0);
  FUN_10064221c(param_1 + 0xb5b);
  puVar4 = param_1 + 0x7be;
  lVar5 = -0x56b8;
  do {
    lVar6 = thunk_FUN_100069b04(puVar4);
    puVar4 = (undefined8 *)(lVar6 + -0x1ce8);
    lVar5 = lVar5 + 0x1ce8;
  } while (lVar5 != 0);
  thunk_FUN_10064e2bc(param_1 + 0x6d);
  param_1[0x4f] = &PTR_FUN_1014a7108;
  param_1[0x66] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x69);
  FUN_10064e2bc(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x36);
  thunk_FUN_1001cec4c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void thunk_FUN_10006cb70(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint *puVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_thunk_FUN_10006cb70_10144dd38;
  uVar2 = FUN_1003da398();
  FUN_1004e1b58(uVar2,param_1);
  uVar2 = FUN_1000bdb98();
  FUN_1004e1b58(uVar2,param_1);
  iVar1 = FUN_10031613c();
  if (iVar1 != 0) {
    puVar3 = (uint *)FUN_100316150();
    if (*puVar3 != 0) {
      lVar5 = *(long *)(puVar3 + 2);
      lVar6 = (ulong)*puVar3 << 5;
      do {
        puVar4 = (undefined8 *)(lVar5 + 8);
        lVar5 = lVar5 + 0x20;
        if ((undefined8 *)*puVar4 == param_1) {
          FUN_10003c608();
          break;
        }
        lVar6 = lVar6 + -0x20;
      } while (lVar6 != 0);
    }
  }
  if ((long *)param_1[0x1068] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1068] + 8))();
    param_1[0x1068] = 0;
  }
  if ((long *)param_1[0x1069] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1069] + 8))();
    param_1[0x1069] = 0;
  }
  thunk_FUN_100651068(param_1 + 0x1081);
  thunk_FUN_10064e2bc(param_1 + 0x106a);
  FUN_10064e2bc(param_1 + 0x104d);
  param_1[0x102f] = &PTR_FUN_1014a7108;
  param_1[0x1046] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x1049);
  FUN_10064e2bc(param_1 + 0x102f);
  param_1[0x1011] = &PTR_FUN_1014a7108;
  param_1[0x1028] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x102b);
  FUN_10064e2bc(param_1 + 0x1011);
  thunk_FUN_10064e2bc(param_1 + 0xffa);
  thunk_FUN_10064e2bc(param_1 + 0xfe3);
  puVar4 = param_1 + 0xe66;
  lVar5 = -0x23b8;
  do {
    lVar6 = FUN_100065974(puVar4);
    puVar4 = (undefined8 *)(lVar6 + -0xbe8);
    lVar5 = lVar5 + 0xbe8;
  } while (lVar5 != 0);
  FUN_10064221c(param_1 + 0xb5b);
  puVar4 = param_1 + 0x7be;
  lVar5 = -0x56b8;
  do {
    lVar6 = thunk_FUN_100069b04(puVar4);
    puVar4 = (undefined8 *)(lVar6 + -0x1ce8);
    lVar5 = lVar5 + 0x1ce8;
  } while (lVar5 != 0);
  thunk_FUN_10064e2bc(param_1 + 0x6d);
  param_1[0x4f] = &PTR_FUN_1014a7108;
  param_1[0x66] = &PTR_FUN_1014a7268;
  thunk_FUN_100657580(param_1 + 0x69);
  FUN_10064e2bc(param_1 + 0x4f);
  FUN_10064e2bc(param_1 + 0x36);
  thunk_FUN_1001cec4c(param_1 + 0x19);
  FUN_10064e2bc(param_1);
  return;
}




void FUN_10006cd50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_10006cb70();
  operator_delete(pvVar1);
  return;
}




void FUN_10006cd64(long param_1,long param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ushort uVar10;
  ushort uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  uVar5 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0xb8) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xc0) = uVar5;
  uVar10 = 0x200;
  if (param_3 == 0) {
    uVar10 = 0;
  }
  uVar11 = 0x400;
  if ((param_3 & param_4) == 0) {
    uVar11 = 0;
  }
  *(ushort *)(param_1 + 0x8540) = uVar11 | uVar10 | *(ushort *)(param_1 + 0x8540) & 63999;
  fVar16 = *(float *)(param_1 + 0x50);
  fVar15 = *(float *)(param_1 + 0x54);
  bVar4 = false;
  if ((*(float *)(param_1 + 0x200) == fVar16) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x204)) && !NAN(fVar15))) {
    bVar4 = *(float *)(param_1 + 0x204) == fVar15;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x200) = fVar16;
    *(float *)(param_1 + 0x204) = fVar15;
    FUN_1000200a0(param_1 + 0x1b0);
    fVar16 = *(float *)(param_1 + 0x50);
    fVar15 = *(float *)(param_1 + 0x54);
  }
  lVar9 = param_1 + 0x278;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x2c8) == fVar16) &&
     (bVar4 = false, !NAN(*(float *)(param_1 + 0x2cc)) && !NAN(fVar15))) {
    bVar4 = *(float *)(param_1 + 0x2cc) == fVar15;
  }
  if (!bVar4) {
    *(float *)(param_1 + 0x2c8) = fVar16;
    *(float *)(param_1 + 0x2cc) = fVar15;
    FUN_1000200a0(lVar9);
  }
  FUN_100652ca4(lVar9,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652cdc(lVar9,"white_background");
  FUN_100652dd4(lVar9,&DAT_10115a164,2);
  fVar16 = *(float *)(param_1 + 0x50);
  fVar15 = *(float *)(param_1 + 0x54);
  if ((*(float *)(param_1 + 0x3b8) != fVar16) || (*(float *)(param_1 + 0x3bc) != fVar15)) {
    *(float *)(param_1 + 0x3b8) = fVar16;
    *(float *)(param_1 + 0x3bc) = fVar15;
    FUN_1000200a0(param_1 + 0x368);
    fVar16 = *(float *)(param_1 + 0x50);
    fVar15 = *(float *)(param_1 + 0x54);
  }
  if ((*(float *)(param_1 + 0x7f68) != fVar16) || (*(float *)(param_1 + 0x7f6c) != fVar15)) {
    *(float *)(param_1 + 0x7f68) = fVar16;
    *(float *)(param_1 + 0x7f6c) = fVar15;
    FUN_1000200a0(param_1 + 0x7f18);
    fVar16 = *(float *)(param_1 + 0x50);
    fVar15 = *(float *)(param_1 + 0x54);
  }
  if ((*(float *)(param_1 + 0x8020) != fVar16) || (*(float *)(param_1 + 0x8024) != fVar15)) {
    *(float *)(param_1 + 0x8020) = fVar16;
    *(float *)(param_1 + 0x8024) = fVar15;
    FUN_1000200a0(param_1 + 0x7fd0);
    fVar16 = *(float *)(param_1 + 0x50);
    fVar15 = *(float *)(param_1 + 0x54);
  }
  if ((*(float *)(param_1 + 0x80d8) != fVar16) || (*(float *)(param_1 + 0x80dc) != fVar15)) {
    *(float *)(param_1 + 0x80d8) = fVar16;
    *(float *)(param_1 + 0x80dc) = fVar15;
    FUN_1000200a0(param_1 + 0x8088);
  }
  uVar8 = FUN_1003a75f8(param_2);
  lVar9 = FUN_100460e78();
  FUN_10006d234(param_1,param_1 + 0x420,0,param_2,*(undefined4 *)(lVar9 + 0x48),
                *(ushort *)(param_1 + 0x8540) >> 9 & 1,*(ushort *)(param_1 + 0x8540) >> 10 & 1,
                "ability_icon_A");
  lVar9 = FUN_100460e78(uVar8);
  FUN_10006d234(param_1,param_1 + 0x2108,1,param_2,*(undefined4 *)(lVar9 + 0x4c),
                *(ushort *)(param_1 + 0x8540) >> 9 & 1,*(ushort *)(param_1 + 0x8540) >> 10 & 1,
                "ability_icon_B");
  lVar9 = FUN_100460e78(uVar8);
  FUN_10006d234(param_1,param_1 + 0x3df0,2,param_2,*(undefined4 *)(lVar9 + 0x50),
                *(ushort *)(param_1 + 0x8540) >> 9 & 1,*(ushort *)(param_1 + 0x8540) >> 10 & 1,
                "ability_icon_C");
  lVar14 = 0;
  lVar9 = 0;
  lVar2 = param_1 + 0x5ad8;
  lVar13 = 0x5b60;
  lVar12 = 0x5be4;
  do {
    lVar3 = param_1 + lVar14;
    *(uint *)(lVar3 + 0x4a4) = *(uint *)(lVar3 + 0x4a4) | 4;
    if ((*(byte *)(param_1 + 0x8541) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) | 0x10;
      *(uint *)(param_1 + lVar12) = *(uint *)(param_1 + lVar12) | 4;
      FUN_100642bd8(lVar2,param_1 + lVar13,1);
      FUN_10006d330(auStack_f0,"ability_upgrade_badge_%s");
      uVar5 = FUN_1004d2524(auStack_f0);
      uVar6 = FUN_100015208(auStack_f0,uVar5,0x1234);
      *(uint *)(param_1 + lVar12) =
           *(uint *)(param_1 + lVar12) & 0x80000000 |
           *(uint *)(param_1 + lVar12) & 0x7fff | (uVar6 & 0xffff) << 0xf;
      uVar8 = FUN_10006b424(lVar3 + 0x420);
      FUN_10006f6fc(param_1 + lVar13,param_2,uVar8,lVar9);
      (**(code **)(*(long *)(lVar3 + 0x420) + 0x40))(0,lVar3 + 0x420);
      *(uint *)(lVar3 + 0x4a4) = *(uint *)(lVar3 + 0x4a4) | 0x10;
    }
    lVar9 = lVar9 + 1;
    lVar14 = lVar14 + 0x1ce8;
    lVar13 = lVar13 + 0xbe8;
    lVar12 = lVar12 + 0xbe8;
  } while (lVar9 != 3);
  uVar10 = *(ushort *)(param_1 + 0x8540);
  if ((uVar10 >> 9 & 1) == 0) {
    FUN_100642bd8(param_1 + 0x1b0,lVar2,1);
    lVar9 = param_1 + 200;
    iVar7 = FUN_100642d08(lVar9);
    if (iVar7 != 0) {
      FUN_1006423ec(lVar9,1);
    }
    FUN_100642bd8(lVar2,lVar9,1);
    uVar10 = *(ushort *)(param_1 + 0x8540);
  }
  lVar9 = 0;
  do {
    while( true ) {
      lVar13 = param_1 + lVar9 * 0x1ce8;
      puVar1 = (uint *)(lVar13 + 0x4a4);
      uVar6 = *(uint *)(lVar13 + 0x4a4);
      if ((uVar10 >> 9 & 1) != 0) break;
      *puVar1 = uVar6 | 0x10;
      lVar9 = lVar9 + 1;
      if (lVar9 == 3) {
        if ((*(float *)(param_1 + 0x83a0) != 0.5) || (*(float *)(param_1 + 0x83a4) != 0.0)) {
          *(undefined8 *)(param_1 + 0x83a0) = 0x3f000000;
          FUN_1000200a0(param_1 + 0x8350);
        }
LAB_10006d1f8:
        if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
    }
    *puVar1 = uVar6 & 0xffffffef;
    lVar9 = lVar9 + 1;
  } while (lVar9 != 3);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xffffffef;
  iVar7 = FUN_100642d08(param_1 + 0x8350);
  if (iVar7 != 0) {
    FUN_1006423ec(param_1 + 0x8350,1);
  }
  goto LAB_10006d1f8;
}




void FUN_10006d234(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 *local_58;
  
  if ((int)param_5 != -1) {
    local_58 = &DAT_3f0000003f000000;
    (**(code **)(*param_2 + 0x28))(param_2,&local_58);
    uVar4 = FUN_1003a75f8(param_4);
    cVar1 = FUN_100461330(uVar4,param_5);
    FUN_100069da8(param_2,param_3,param_4,param_5,(int)cVar1,param_6,param_7);
    *(uint *)((long)param_2 + 0x84) = *(uint *)((long)param_2 + 0x84) & 0xfffffffb;
    if (param_8 != 0) {
      uVar2 = FUN_1004d2524(param_8);
      uVar3 = FUN_100015208(param_8,uVar2,0x1234);
      *(uint *)((long)param_2 + 0x84) =
           *(uint *)((long)param_2 + 0x84) & 0x80000000 |
           *(uint *)((long)param_2 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
    }
    FUN_100642bd8(param_1 + 0x368,param_2,1);
  }
  return;
}




void FUN_10006d330(undefined8 param_1,undefined8 param_2)

{
  FUN_1004d26e8(param_1,0x80,param_2,&stack0x00000000);
  return;
}




void FUN_10006d360(long param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = FUN_1001269b8();
  uVar4 = 4;
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  *(uint *)(param_1 + 0x83d4) = *(uint *)(param_1 + 0x83d4) & 0xfffffffb | uVar4;
  FUN_10006d4ac(param_1);
  plVar2 = *(long **)(param_1 + 0xb8);
  if (plVar2 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) != (int)plVar2[1]) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    return;
  }
  lVar3 = (**(code **)(*plVar2 + 0x10))();
  if (lVar3 == 0) {
    return;
  }
  lVar3 = *(long *)(lVar3 + 0x40);
  fVar6 = *(float *)(lVar3 + 0xd4) + *(float *)(lVar3 + 0x188) * (*(float *)(lVar3 + 0x2f0) + 1.0);
  NEON_fminnm(fVar6 + fVar6 * *(float *)(lVar3 + 0x23c),DAT_101dc449c);
  fVar6 = (float)NEON_fminnm(*(float *)(lVar3 + 0x328) / DAT_101dc43dc,0x3f800000);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  if (fVar6 <= *(float *)(param_1 + 0x8538)) {
    fVar5 = 0.0;
    if (*(float *)(param_1 + 0x8538) <= fVar6) goto LAB_10006d498;
  }
  else {
    fVar5 = (float)FUN_1010a1cd4();
    fVar7 = fVar6 - *(float *)(param_1 + 0x8538);
    fVar8 = (float)NEON_fminnm(fVar7 * 10.0,0x3f800000);
    if (fVar8 <= 0.1) {
      fVar8 = 0.1;
    }
    fVar8 = fVar5 * 0.4 * fVar8;
    fVar5 = fVar8 + *(float *)(param_1 + 0x8538);
    if (fVar7 <= fVar8) {
      fVar5 = fVar6;
    }
  }
  *(float *)(param_1 + 0x8538) = fVar5;
LAB_10006d498:
  FUN_10006d5d0(param_1);
  return;
}




void FUN_10006d4ac(long param_1)

{
  float *pfVar1;
  long lVar2;
  undefined8 uVar3;
  ushort uVar4;
  float fVar5;
  
  pfVar1 = (float *)(param_1 + 0x853c);
  if (*pfVar1 <= 0.0) {
    lVar2 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
    lVar2 = *(long *)(lVar2 + 0x40);
    fVar5 = *(float *)(lVar2 + 0xac) + *(float *)(lVar2 + 0x160) * (*(float *)(lVar2 + 0x2c8) + 1.0)
    ;
    NEON_fminnm(fVar5 + fVar5 * *(float *)(lVar2 + 0x214),DAT_101dc4474);
    if ((uint)(int)DAT_101dc43b4 < 2) {
      fVar5 = 0.2;
      if (((int)DAT_101dc43b4 != 0) || ((*(byte *)(param_1 + 0x8541) & 1) == 0)) goto LAB_10006d5b8;
      FUN_10006da0c(DAT_101dc43b4,DAT_101dc43b4,DAT_101dc4474,0x3f800000,param_1,0);
      uVar4 = *(ushort *)(param_1 + 0x8540) & 0xfeff;
    }
    else {
      fVar5 = 0.2;
      if ((*(byte *)(param_1 + 0x8541) & 1) != 0) goto LAB_10006d5b8;
      uVar3 = FUN_1004e0150("HUD_NOTICE_UNSPENT_ABILITY_POINTS",0);
      FUN_1006513c0(param_1 + 0x8408,uVar3);
      FUN_10006da0c(param_1,1);
      uVar4 = *(ushort *)(param_1 + 0x8540) | 0x100;
    }
    fVar5 = 0.2;
    *(ushort *)(param_1 + 0x8540) = uVar4;
  }
  else {
    fVar5 = (float)FUN_1010a1cd4();
    fVar5 = *pfVar1 - fVar5;
  }
LAB_10006d5b8:
  *pfVar1 = fVar5;
  return;
}




void FUN_10006d5d0(long param_1)

{
  float *pfVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_48;
  float fStack_44;
  
  pfVar1 = (float *)(param_1 + 0x8010);
  lVar2 = param_1 + 0x7fd0;
  fVar5 = (float)FUN_10064e3cc(param_1 + 0x7f18);
  fVar7 = 0.9;
  FUN_10064e3cc(param_1 + 0x7f18);
  fVar7 = fVar7 * 0.5;
  FUN_10064e47c(fVar5 * 0.9,lVar2);
  FUN_10064e3cc(lVar2);
  fVar7 = -fVar7;
  fVar5 = *pfVar1;
  bVar4 = false;
  if ((fVar5 == 0.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x8014)) && !NAN(fVar7))) {
    bVar4 = *(float *)(param_1 + 0x8014) == fVar7;
  }
  if (!bVar4) {
    *pfVar1 = 0.0;
    *(float *)(param_1 + 0x8014) = fVar7;
    FUN_1000200a0(lVar2);
  }
  uVar6 = FUN_10064e3cc(lVar2);
  FUN_10064e3cc(lVar2);
  local_48 = uVar6;
  fStack_44 = fVar5;
  FUN_10064e48c(param_1 + 0x8088,&local_48);
  lVar3 = param_1 + 0x8178;
  bVar4 = false;
  if ((*(float *)(param_1 + 0x81c8) == 0.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x81cc))))
  {
    bVar4 = *(float *)(param_1 + 0x81cc) == 1.0;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x81c8) = 0x3f80000000000000;
    FUN_1000200a0(lVar3);
  }
  fVar7 = *pfVar1;
  fVar5 = (float)FUN_10064e3cc(lVar2);
  fVar7 = fVar7 + fVar5 * -0.5;
  if ((*(float *)(param_1 + 0x81b8) != fVar7) || (*(float *)(param_1 + 0x81bc) != 0.0)) {
    *(float *)(param_1 + 0x81b8) = fVar7;
    *(undefined4 *)(param_1 + 0x81bc) = 0;
    FUN_1000200a0(lVar3);
  }
  fVar7 = *(float *)(param_1 + 0x8538);
  fVar5 = (float)FUN_10064e3cc(lVar2);
  FUN_10064e3cc(lVar2);
  FUN_10064e47c(fVar5 * fVar7,lVar3);
  return;
}




void FUN_10006d738(long param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 8;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(uint *)(param_1 + 0x234) = *(uint *)(param_1 + 0x234) & 0xfffffff7 | uVar1;
  return;
}




void FUN_10006d758(long param_1)

{
  FUN_100269e20(param_1 + 0x1b0);
  return;
}




void FUN_10006d760(long param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = 0x800;
  if (param_2 == 0) {
    uVar1 = 0;
  }
  *(ushort *)(param_1 + 0x8540) = *(ushort *)(param_1 + 0x8540) & 0xf7ff | uVar1;
  return;
}




void FUN_10006d784(long param_1)

{
  long lVar1;
  
  FUN_1001cedd0(param_1 + 200);
  param_1 = param_1 + 0x420;
  lVar1 = 3;
  do {
    FUN_10006ab1c(param_1,0);
    param_1 = param_1 + 0x1ce8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}




void FUN_10006d7d4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x420;
  lVar1 = 3;
  do {
    FUN_10006c0ec(param_1,param_2);
    param_1 = param_1 + 0x1ce8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}




void FUN_10006d81c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  param_2 = param_2 + 0x420;
  lVar1 = 3;
  do {
    FUN_10006c1c4(param_1,param_2,param_3);
    param_2 = param_2 + 0x1ce8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}




void FUN_10006d874(long param_1,undefined8 param_2)

{
  long lVar1;
  
  param_1 = param_1 + 0x420;
  lVar1 = 3;
  do {
    FUN_10006c2a4(param_1,param_2);
    param_1 = param_1 + 0x1ce8;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}




void FUN_10006d8bc(long param_1,ulong param_2,undefined8 param_3)

{
  FUN_10006c104(param_1 + (param_2 & 0xffffffff) * 0x1ce8 + 0x420,param_3);
  return;
}




void FUN_10006d8d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  lVar4 = *(long *)(lVar4 + 0x18);
  while ((lVar4 != 0 && (*(int *)(*(long *)(lVar4 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar4 = *(long *)(lVar4 + 0x20);
  }
  iVar2 = FUN_1003be070(lVar4,param_2);
  uVar5 = FUN_1003be070(lVar4,param_3);
  lVar6 = 0;
  param_1 = param_1 + 0x420;
  do {
    iVar3 = FUN_10006b424(param_1);
    if (iVar3 == iVar2) {
      if (2 < (uint)lVar6) {
        return;
      }
      FUN_10006aa78(param_1);
      cVar1 = FUN_100461330(lVar4,uVar5);
      FUN_10006a140(param_1,uVar5,(int)cVar1);
      return;
    }
    lVar6 = lVar6 + 1;
    param_1 = param_1 + 0x1ce8;
  } while (lVar6 != 3);
  return;
}




void FUN_10006d9c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1004e0150(param_2,0);
  FUN_1006513c0(param_1 + 0x8408,uVar1);
  FUN_10006da0c(param_1,1);
  return;
}




void FUN_10006da0c(long param_1,int param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(param_1 + 0x848c);
  if (param_2 != 0) {
    param_1 = param_1 + 0x8408;
    uVar3 = *puVar1;
    if ((uVar3 & 0x7f80) != 0) {
      *puVar1 = uVar3 & 0xffff807f;
      FUN_1000200a0(param_1);
      uVar3 = *puVar1;
    }
    *puVar1 = uVar3 | 4;
    uVar2 = FUN_100047714();
    FUN_10063f0e8(0x3e4ccccd);
    FUN_10063fce0(0x3f800000,uVar2);
    FUN_100642324(param_1);
    FUN_100642b14(param_1,uVar2);
    return;
  }
  uVar2 = FUN_100047714();
  FUN_10063f0e8(0x3e4ccccd);
  FUN_10063fce0(0,uVar2);
  FUN_100047300();
  FUN_100642324(param_1 + 0x8408);
  FUN_100642b7c(param_1 + 0x8408,uVar2);
  *(ushort *)(param_1 + 0x8540) = *(ushort *)(param_1 + 0x8540) & 0xfeff;
  *(undefined4 *)(param_1 + 0x853c) = 0x3f800000;
  return;
}




void FUN_10006db14(undefined1 param_1 [16],float param_2,long *param_3)

{
  long *plVar1;
  float fVar2;
  ulong uVar3;
  int local_54;
  
  uVar3 = (**(code **)(*param_3 + 0x48))();
  plVar1 = param_3 + 0x4f;
  FUN_10064e47c(plVar1);
  FUN_10064e47c(uVar3,param_2 * 0.92,param_3 + 0x6d);
  param_2 = param_2 * 0.07999998;
  FUN_10064e47c(uVar3,param_3 + 0xfe3);
  FUN_10064e3cc(param_3 + 0xfe3);
  if (*(float *)((long)param_3 + 0x3ac) != -param_2) {
    *(float *)((long)param_3 + 0x3ac) = -param_2;
    FUN_1000200a0(param_3 + 0x6d);
  }
  *(uint *)((long)param_3 + 0x83d4) = *(uint *)((long)param_3 + 0x83d4) & 0xffffffbf;
  *(uint *)((long)param_3 + 0x14c) = *(uint *)((long)param_3 + 0x14c) & 0xffffffbf;
  *(uint *)((long)param_3 + 0x5b5c) = *(uint *)((long)param_3 + 0x5b5c) & 0xffffffbf;
  FUN_10006dcdc(param_3);
  FUN_10006d5d0(param_3);
  FUN_10006def8(param_3);
  FUN_10006dfa4(param_3);
  if ((*(byte *)((long)param_3 + 0x8541) >> 1 & 1) == 0) {
    FUN_10016ae00(0,0,0,&local_54);
  }
  else {
    local_54 = 0;
  }
  if ((long *)param_3[0x1068] != (long *)0x0) {
    fVar2 = (float)(**(code **)(*(long *)param_3[0x1068] + 0x48))();
    uVar3 = (ulong)(uint)((float)uVar3 + -2.0 + fVar2);
  }
  if ((long *)param_3[0x1069] != (long *)0x0) {
    fVar2 = (float)(**(code **)(*(long *)param_3[0x1069] + 0x48))();
    uVar3 = (ulong)(uint)((float)uVar3 + -2.0 + fVar2);
  }
  param_3 = param_3 + 0x104d;
  FUN_10064e47c(uVar3,(float)local_54 + 2.0,param_3);
  FUN_10064e72c(0,param_3,0,plVar1,2);
  FUN_10064e72c(0,param_3,4,plVar1,4);
  return;
}




void FUN_10006dcdc(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_98;
  float fStack_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  lVar4 = param_1 + 0x368;
  fVar7 = (float)FUN_10064e3cc(lVar4);
  fVar8 = (float)FUN_10064e3cc(lVar4);
  fVar10 = 0.33333334;
  fVar11 = (fVar8 + fVar7 * -0.07) * 0.33333334;
  FUN_10064e3cc(lVar4);
  uVar2 = DAT_101dc1cb8;
  fVar8 = fVar10 + fVar7 * -0.035;
  fVar7 = fVar7 * 0.0175;
  local_90 = DAT_101dc1cb8;
  local_88 = DAT_101dc1cb8;
  local_80 = DAT_101dc1cb8;
  local_98 = fVar11;
  fStack_94 = fVar8;
  fVar9 = (float)FUN_10064e3cc(lVar4);
  FUN_10064e3cc(lVar4);
  lVar4 = 0;
  fVar10 = (fVar7 - fVar10) + fVar8 * 0.5;
  fVar8 = (float)((ulong)uVar2 >> 0x20);
  uVar5 = 0xffffffff;
  do {
    if (lVar4 == 0) {
      local_90 = CONCAT44(fVar10,fVar7 + (fVar11 - fVar9) * 0.5);
      fVar8 = fVar10;
    }
    else {
      uVar1 = *(undefined4 *)((long)&local_90 + (uVar5 & 0xffffffff) * 8 + 4);
      *(float *)((long)&local_90 + lVar4) =
           *(float *)(&local_90 + (uVar5 & 0xffffffff)) + fVar7 + fVar11;
      *(undefined4 *)((long)&local_90 + lVar4 + 4) = uVar1;
    }
    uVar5 = uVar5 + 1;
    lVar4 = lVar4 + 8;
  } while (lVar4 != 0x18);
  lVar4 = param_1 + 0x420;
  lVar6 = 3;
  do {
    FUN_10064e48c(lVar4,&local_98);
    FUN_10006a234(lVar4);
    lVar4 = lVar4 + 0x1ce8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  lVar4 = param_1 + 0x420;
  param_1 = param_1 + 0x5b60;
  lVar6 = 0;
  while( true ) {
    bVar3 = false;
    if ((*(float *)(lVar4 + 0x40) == *(float *)((long)&local_90 + lVar6)) &&
       (bVar3 = false, !NAN(*(float *)(lVar4 + 0x44)) && !NAN(fVar8))) {
      bVar3 = *(float *)(lVar4 + 0x44) == fVar8;
    }
    if (!bVar3) {
      *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)((long)&local_90 + lVar6);
      FUN_1000200a0(lVar4);
    }
    FUN_10064e47c(local_98 + 2.0,0x427a0000,param_1);
    FUN_10064e5ec(0,0xc1100000,param_1,6,lVar4,4);
    if (lVar6 == 0x10) break;
    fVar8 = *(float *)((long)&local_88 + lVar6 + 4);
    lVar6 = lVar6 + 8;
    lVar4 = lVar4 + 0x1ce8;
    param_1 = param_1 + 0xbe8;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10006def8(undefined1 param_1 [16],float param_2,long *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  float fVar3;
  
  (**(code **)(*param_3 + 0x48))();
  param_2 = param_2 * -1.6;
  fVar3 = *(float *)(param_3 + 0x1072);
  bVar1 = false;
  if ((fVar3 == 0.0) && (bVar1 = false, !NAN(*(float *)((long)param_3 + 0x8394)) && !NAN(param_2)))
  {
    bVar1 = *(float *)((long)param_3 + 0x8394) == param_2;
  }
  if (!bVar1) {
    *(float *)(param_3 + 0x1072) = 0.0;
    *(float *)((long)param_3 + 0x8394) = param_2;
    FUN_1000200a0(param_3 + 0x106a);
  }
  uVar2 = (**(code **)(*param_3 + 0x48))(param_3);
  (**(code **)(*param_3 + 0x48))(param_3);
  FUN_10064e47c(uVar2,fVar3 * 0.4,param_3 + 0x106a);
  return;
}




void FUN_10006dfa4(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  plVar1 = *(long **)(param_1 + 0x8340);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x138))();
    lVar2 = *(long *)(param_1 + 0x8340);
    FUN_10064e72c(0x80000000,lVar2,1,param_1 + 0x278,3);
    FUN_10064e72c(0,lVar2,2,param_1 + 0x278,2);
  }
  if (*(long **)(param_1 + 0x8348) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x8348) + 0x138))();
    uVar3 = *(undefined8 *)(param_1 + 0x8348);
    FUN_10064e72c(0,uVar3,3,param_1 + 0x278,1);
    FUN_10064e72c(0,uVar3,2,param_1 + 0x278,2);
    return;
  }
  return;
}




void FUN_10006e078(long param_1,uint param_2)

{
  FUN_10006fec0(param_1 + (ulong)param_2 * 0xbe8 + 0x5b60);
  return;
}




void FUN_10006e08c(long param_1,uint param_2)

{
  FUN_10006fed0(param_1 + (ulong)param_2 * 0xbe8 + 0x5b60);
  return;
}




void FUN_10006e0a0(long param_1,int param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = 0x1000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(ushort *)(param_1 + 0x8540) = *(ushort *)(param_1 + 0x8540) & 0xefff | uVar2;
  lVar1 = *(long *)(param_1 + 0x8340);
  if (lVar1 != 0) {
    uVar3 = 4;
    if (param_2 == 0) {
      uVar3 = 0;
    }
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb | uVar3;
  }
  return;
}




void FUN_10006e0ec(long param_1,int param_2)

{
  long lVar1;
  ushort uVar2;
  uint uVar3;
  
  uVar2 = 0x2000;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  *(ushort *)(param_1 + 0x8540) = *(ushort *)(param_1 + 0x8540) & 0xdfff | uVar2;
  lVar1 = *(long *)(param_1 + 0x8348);
  if (lVar1 != 0) {
    uVar3 = 4;
    if (param_2 == 0) {
      uVar3 = 0;
    }
    *(uint *)(lVar1 + 0x84) = *(uint *)(lVar1 + 0x84) & 0xfffffffb | uVar3;
  }
  return;
}




void FUN_10006e138(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x8340);
  if (*plVar1 == 0) {
    pvVar4 = operator_new(0x778);
    uVar5 = thunk_FUN_100093c58(pvVar4,param_2,param_3,0);
    FUN_100094684(uVar5,4);
    uVar2 = FUN_1004d2524("flask_button");
    uVar3 = FUN_100015208("flask_button",uVar2,0x1234);
    *(uint *)((long)pvVar4 + 0x84) =
         *(uint *)((long)pvVar4 + 0x84) & 0x80000000 |
         *(uint *)((long)pvVar4 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
    *plVar1 = (long)pvVar4;
    FUN_100642bd8(param_1 + 0x1b0,pvVar4,1);
    uVar3 = *(uint *)(*plVar1 + 0x84);
    *(uint *)(*plVar1 + 0x84) =
         uVar3 & 0xfffffff8 | uVar3 & 3 | (*(ushort *)(param_1 + 0x8540) >> 0xc & 1) << 2;
  }
  return;
}




void FUN_10006e1fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined4 uVar2;
  uint uVar3;
  void *pvVar4;
  undefined8 uVar5;
  
  plVar1 = (long *)(param_1 + 0x8348);
  if (*plVar1 == 0) {
    pvVar4 = operator_new(0x778);
    uVar5 = thunk_FUN_100093c58(pvVar4,param_2,param_3,1);
    FUN_100094684(uVar5,5);
    uVar2 = FUN_1004d2524("scout_cam_button");
    uVar3 = FUN_100015208("scout_cam_button",uVar2,0x1234);
    *(uint *)((long)pvVar4 + 0x84) =
         *(uint *)((long)pvVar4 + 0x84) & 0x80000000 |
         *(uint *)((long)pvVar4 + 0x84) & 0x7fff | (uVar3 & 0xffff) << 0xf;
    *plVar1 = (long)pvVar4;
    FUN_100642bd8(param_1 + 0x1b0,pvVar4,1);
    uVar3 = *(uint *)(*plVar1 + 0x84);
    *(uint *)(*plVar1 + 0x84) =
         uVar3 & 0xfffffff8 | uVar3 & 3 | (*(ushort *)(param_1 + 0x8540) >> 0xd & 1) << 2;
  }
  return;
}




undefined8 FUN_10006e2c0(long param_1)

{
  undefined8 uVar1;
  void *local_38 [2];
  char local_21;
  
  FUN_10001549c(local_38,"hudAbilityTooltip");
  uVar1 = FUN_1001cee20(param_1 + 200,local_38);
  if (local_21 < '\0') {
    operator_delete(local_38[0]);
  }
  return uVar1;
}




void FUN_10006e318(long param_1,uint param_2,long param_3)

{
  long *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  void *local_58 [2];
  char local_41;
  
  iVar4 = FUN_10006e2c0();
  plVar1 = (long *)(param_1 + (ulong)param_2 * 0x1ce8 + 0x420);
  if ((iVar4 != 0) &&
     (cVar2 = *(char *)(param_1 + 0x8540), iVar5 = FUN_10006b424(plVar1), cVar2 == iVar5)) {
    return;
  }
  plVar6 = *(long **)(param_1 + 0xb8);
  if (plVar6 == (long *)0x0) {
    return;
  }
  if (*(int *)(param_1 + 0xc0) != (int)plVar6[1]) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    return;
  }
  lVar7 = (**(code **)(*plVar6 + 0x10))();
  if (lVar7 == 0) {
    return;
  }
  FUN_1004459cc();
  uVar3 = FUN_10006b424(plVar1);
  *(undefined1 *)(param_1 + 0x8540) = uVar3;
  if (iVar4 != 0) {
    FUN_10001549c(local_58,"hudAbilityTooltip");
    FUN_1001ceeb0(param_1 + 200,local_58);
    if (local_41 < '\0') {
      operator_delete(local_58[0]);
    }
  }
  iVar4 = FUN_100126c88();
  if (param_2 == 0) {
    fVar8 = 0.0;
    if (iVar4 != 0) {
      fVar8 = (float)(**(code **)(*plVar1 + 0x48))(plVar1);
      fVar9 = 0.21;
LAB_10006e448:
      fVar8 = fVar8 * fVar9;
    }
  }
  else {
    if (param_2 != 2) {
      fVar8 = *(float *)(param_3 + 0x80);
      goto LAB_10006e458;
    }
    fVar8 = 0.0;
    if (iVar4 != 0) {
      fVar8 = (float)(**(code **)(*plVar1 + 0x48))(plVar1);
      fVar9 = -0.21;
      goto LAB_10006e448;
    }
  }
  *(float *)(param_3 + 0x80) = fVar8;
LAB_10006e458:
  *(ulong *)(param_3 + 0x80) =
       CONCAT44(*(float *)(param_3 + 0x84) * (float)((ulong)*(undefined8 *)(param_1 + 0x48) >> 0x20)
                ,fVar8 * (float)*(undefined8 *)(param_1 + 0x48));
  FUN_10001549c(local_58,"hudAbilityTooltip");
  FUN_1001cefb8(param_1 + 200,local_58,param_3);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  param_1 = param_1 + 0x420;
  lVar7 = 3;
  do {
    FUN_10006ab1c(param_1,1);
    param_1 = param_1 + 0x1ce8;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  return;
}




ulong FUN_10006e4dc(long param_1)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  
  uVar2 = FUN_1006415d4();
  if (((uVar2 & 1) == 0) && (uVar2 = FUN_1006415d4(param_1 + 0x278), (uVar2 & 1) == 0)) {
    param_1 = param_1 + 0x420;
    lVar3 = 2;
    do {
      uVar2 = FUN_10006abf8(param_1);
      if ((uVar2 & 1) != 0) {
        return uVar2;
      }
      param_1 = param_1 + 0x1ce8;
      bVar1 = lVar3 != 0;
      lVar3 = lVar3 + -1;
    } while (bVar1);
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}




void FUN_10006e544(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [16];
  
  uVar2 = FUN_100061db0();
  FUN_10005ef64(auStack_40,param_3);
  iVar1 = FUN_10005f394(uVar2,auStack_40);
  if (iVar1 != 0) {
    FUN_10006fe2c(param_1 + (param_3 & 0xffffffff) * 0xbe8 + 0x5b60);
  }
  return;
}




void FUN_10006e5b0(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined **local_38 [2];
  undefined1 local_24;
  
  iVar1 = FUN_10006b42c(param_1 + (param_3 & 0xffffffff) * 0x1ce8 + 0x420);
  if (iVar1 != 0) {
    uVar2 = FUN_100061db0();
    FUN_10005edd4(local_38,param_3);
    local_38[0] = &PTR_FUN_10144d690;
    local_24 = 0;
    FUN_10005f394(uVar2,local_38);
  }
  return;
}




void FUN_10006e620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **local_38 [3];
  
  uVar1 = FUN_100061db0();
  FUN_10005edd4(local_38,param_3);
  local_38[0] = &PTR_FUN_10144d6a8;
  FUN_10005f394(uVar1,local_38);
  return;
}




void FUN_10006e674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((-1 < (int)param_3) && (lVar1 = FUN_100644b2c(param_2), lVar1 != 0)) {
    FUN_10006e318(param_1,param_3,lVar1);
    return;
  }
  return;
}




void FUN_10006e6bc(long param_1,undefined8 param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = FUN_10006e4dc();
  if ((uVar3 & 1) == 0) {
    FUN_10006d784(param_1);
    return;
  }
  if ((-1 < (int)param_3) &&
     (cVar1 = *(char *)(param_1 + 0x8540),
     iVar2 = FUN_10006b424(param_1 + (long)(int)param_3 * 0x1ce8 + 0x420), cVar1 == iVar2)) {
    uVar3 = 0;
    param_1 = param_1 + 0x420;
    do {
      if ((param_3 != uVar3) && (iVar2 = FUN_10006abf8(param_1), iVar2 != 0)) {
        FUN_10006b4e8(param_1);
        return;
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 0x1ce8;
    } while (uVar3 != 3);
  }
  return;
}




void FUN_10006e76c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined4 local_64 [3];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  iVar2 = FUN_10031615c(0x1b);
  if ((iVar2 != 0) && (plVar3 = *(long **)(param_1 + 0xb8), plVar3 != (long *)0x0)) {
    if (*(int *)(param_1 + 0xc0) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        lVar5 = FUN_1003a75f8();
        lVar4 = FUN_10049028c(lVar4);
        if ((lVar5 != 0 && lVar4 != 0) && (*(int *)(lVar4 + 0x28) != 0xfe)) {
          lVar6 = FUN_100460e78(lVar5);
          uVar1 = *(undefined4 *)(lVar6 + 0x48);
          local_64[0] = uVar1;
          lVar6 = FUN_100460e78(lVar5);
          local_64[1] = *(undefined4 *)(lVar6 + 0x4c);
          lVar6 = FUN_100460e78(lVar5);
          lVar5 = 0;
          local_64[2] = *(undefined4 *)(lVar6 + 0x50);
          while( true ) {
            iVar2 = FUN_100470950(lVar4,uVar1);
            if (iVar2 != 0) {
              do {
                FUN_10006fe2c(param_1 + lVar5 * 0xbe8 + 0x5b60);
                iVar2 = iVar2 + -1;
              } while (iVar2 != 0);
            }
            lVar5 = lVar5 + 1;
            if (lVar5 == 3) break;
            uVar1 = local_64[lVar5];
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xb8) = 0;
      *(undefined4 *)(param_1 + 0xc0) = DAT_101dc0b88;
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10006e8cc(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  
  lVar1 = (**(code **)(**(long **)(param_1 + 0xb8) + 0x10))();
  lVar1 = *(long *)(lVar1 + 0x18);
  while ((lVar1 != 0 && (*(int *)(*(long *)(lVar1 + 8) + 0xa4) != DAT_10184e000))) {
    lVar1 = *(long *)(lVar1 + 0x20);
  }
  if (param_2 == 1) {
    if (*(long *)(param_1 + 0x8348) != 0) {
      return;
    }
    FUN_10006e1fc(param_1,lVar1,param_3);
  }
  else {
    if (param_2 != 0) {
      return;
    }
    if (*(long *)(param_1 + 0x8340) != 0) {
      return;
    }
    FUN_10006e138(param_1,lVar1,param_3);
  }
  FUN_10006dfa4(param_1);
  lVar1 = FUN_1000bdb98();
  plVar2 = (long *)(lVar1 + 0x10);
  plVar3 = (long *)*plVar2;
  plVar4 = plVar2;
  if (plVar3 != (long *)0x0) {
    do {
      if (*(uint *)(plVar3 + 4) >= 0xf1ccade8) {
        plVar4 = plVar3;
      }
      plVar3 = (long *)plVar3[*(uint *)(plVar3 + 4) < 0xf1ccade8];
    } while (plVar3 != (long *)0x0);
    if (((plVar4 != plVar2) && (*(uint *)(plVar4 + 4) < 0xf1ccade9)) && ((int)plVar4[5] != 0)) {
      lVar1 = 0;
      uVar5 = 0;
      do {
        (*(code *)((undefined8 *)(plVar4[6] + lVar1))[1])(*(undefined8 *)(plVar4[6] + lVar1));
        uVar5 = uVar5 + 1;
        lVar1 = lVar1 + 0x10;
      } while (uVar5 < *(uint *)(plVar4 + 5));
    }
  }
  return;
}




void FUN_10006e9f0(undefined8 param_1,int *param_2)

{
  if (*param_2 == 0x22 || *param_2 == 0x1b) {
    FUN_10006e76c();
    return;
  }
  return;
}




void FUN_10006ea08(void)

{
  if ((DAT_10184dac0 & 1) == 0) {
    DAT_10184dab8 = DAT_101872e38;
    DAT_10184dac0 = 1;
  }
  return;
}




void FUN_10006ea34(void)

{
  if ((DAT_10184e008 & 1) == 0) {
    DAT_10184e000 = DAT_101872e38;
    DAT_10184e008 = 1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10006ea60(void)

{
  DAT_101dc41c0 = 0xff;
  DAT_101dc41c2 = 0xffff;
  DAT_101dc41c4 = 0xffff;
  DAT_101dc41c6 = 0xffbc9c44;
  DAT_101dc41ca = 0xff1166f2;
  DAT_101dc41ce = 0xffe0e0e0;
  DAT_101dc41d2 = 0xffa0a0a0;
  DAT_101dc41d6 = 0xff8c8c8c;
  DAT_101dc41da = 0xff322213;
  DAT_101dc41de = 0xff091911;
  DAT_101dc41e2 = 0xff170c19;
  DAT_101dc41e6 = 0xff241a14;
  DAT_101dc41ea = 0xff14171c;
  DAT_101dc41ee = 0xff221911;
  DAT_101dc41f2 = 0xff1a1416;
  DAT_101dc41f6 = 0xff121414;
  DAT_101dc41fa = 0xff1a1809;
  DAT_101dc41fe = 0xff141414;
  DAT_101dc4202 = 0xff141414;
  DAT_101dc4206 = 0xff2929c0;
  DAT_101dc420a = 0xff283082;
  DAT_101dc420e = 0xff5262cc;
  DAT_101dc4212 = 0xff283082;
  DAT_101dc4216 = 0xff5262cc;
  DAT_101dc421a = 0xff745c42;
  DAT_101dc421e = 0xff184155;
  DAT_101dc4222 = 0xff92665e;
  DAT_101dc4226 = 0xffbc9c44;
  DAT_101dc422a = 0xffbbae56;
  DAT_101dc422e = 0xff8b7b01;
  DAT_101dc4232 = 0xff90b3ef;
  DAT_101dc4236 = 0xff728ebe;
  DAT_101dc423a = 0xff19459d;
  DAT_101dc423e = 0xff9d877b;
  DAT_101dc4242 = 0xffcbb1a3;
  DAT_101dc4246 = 0xff3f6fb5;
  DAT_101dc424a = 0xffc5c5c5;
  DAT_101dc424e = 0xff4fc1f1;
  DAT_101dc4252 = 0xff606060;
  DAT_101dc4256 = 0xffc5ff7b;
  DAT_101dc425a = 0xff5271eb;
  DAT_101dc425e = 0xfffae076;
  DAT_101dc4262 = 0xff3ac8f6;
  DAT_101dc4266 = 0xffaaaaaa;
  DAT_101dc426a = 0xffe19400;
  DAT_101dc426e = 0xffe19400;
  DAT_101dc4272 = 0xffe550b2;
  DAT_101dc4276 = 0xfff22ae8;
  DAT_101dc427a = 0xff005ae1;
  DAT_101dc427e = 0xff1addfa;
  DAT_101dc4282 = 0xff2424b3;
  DAT_101dc4286 = 0xff2424b3;
  DAT_101dc428a = 0xff646464;
  DAT_101dc428e = 0xff92665e;
  DAT_101dc4292 = 0xff646037;
  DAT_101dc4298 = 0xffffffff;
  DAT_101dc429c = 0xff1111a1;
  DAT_101dc42a0 = 0xff321ee1;
  DAT_101dc42a4 = 0xffc8c8c8;
  DAT_101dc42a8 = 0xff321ee1;
  DAT_101dc42ac = 0xff7fe801;
  DAT_101dc42b0 = 0xffffffff;
  DAT_101dc42b4 = 0xff6259b3;
  DAT_101dc42b8 = 0xff506e73;
  DAT_101dc42bc = 0xff9dbf86;
  DAT_101dc42c0 = 0xffa35244;
  DAT_101dc42c4 = 0xffca828e;
  DAT_101dc42c8 = 0xffa6a6a6;
  DAT_101dc42cc = 0xffa6a6a6;
  DAT_101dc42d0 = 0xffffffff;
  DAT_101dc42d4 = 0xff88ea2f;
  DAT_101dc42d8 = 0xff8c8c8c;
  DAT_101dc42dc = 0xffffb400;
  DAT_101dc42e0 = 0xffff00ff;
  DAT_101dc42e4 = 0xff00aded;
  DAT_101dc42e8 = 0xff33d3ff;
  DAT_101dc42ec = 0xff7fe801;
  DAT_101dc42f0 = 0xff282828;
  DAT_101dc42f4 = 0xfff0f0f0;
  DAT_101dc42f8 = 0xffa4781e;
  DAT_101dc42fc = 0xffa6654b;
  DAT_101dc4300 = 0xff93435b;
  DAT_101dc4304 = 0xff387f9c;
  DAT_101dc4308 = 0xffa3781e;
  DAT_101dc430c = 0xffffd18a;
  DAT_101dc4310 = 0xffff61f7;
  DAT_101dc4314 = 0xff5de1f2;
  DAT_101dc4318 = 0xff80eaff;
  DAT_101dc431c = 0xff32e00e;
  DAT_101dc4320 = 0xff5a3c10;
  DAT_101dc4324 = 0xff330b03;
  DAT_101dc4328 = 0xff33031d;
  DAT_101dc432c = 0xff032433;
  DAT_101dc4330 = 0xff9e8e8d;
  uRam0000000101dc4408 = 0x7f7fffff7f7fffff;
  _DAT_101dc4400 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4418 = 0x7f7fffff7f7fffff;
  _DAT_101dc4410 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4428 = 0x7f7fffff7f7fffff;
  _DAT_101dc4420 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4438 = 0x7f7fffff7f7fffff;
  _DAT_101dc4430 = 0x7f7fffff7f7fffff;
  DAT_101dc4440 = 0x7f7fffff;
  DAT_101dc4444 = 0x7f7fffff;
  DAT_101dc4448 = 0x7f7fffff;
  DAT_101dc444c = 0x3f800000;
  uRam0000000101dc4458 = 0x7f7fffff7f7fffff;
  _DAT_101dc4450 = 0x7f7fffff7f7fffff;
  DAT_101dc4460 = 0x7f7fffff;
  DAT_101dc4464 = 0x3eb33333;
  uRam0000000101dc4470 = 0x7f7fffff7f7fffff;
  _DAT_101dc4468 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4480 = 0x7f7fffff7f7fffff;
  _DAT_101dc4478 = 0x7f7fffff7f7fffff;
  uRam0000000101dc4490 = 0x7f7fffff7f7fffff;
  _DAT_101dc4488 = 0x7f7fffff7f7fffff;
  uRam0000000101dc44a0 = 0x7f7fffff7f7fffff;
  _DAT_101dc4498 = 0x7f7fffff7f7fffff;
  DAT_101dc44a8 = 0x7f7fffff;
  DAT_101dc44ac = 0x7f7fffff;
  DAT_101dc44b0 = 0x7f7fffff;
  uRam0000000101dc4348 = 0xff7fffffff7fffff;
  _DAT_101dc4340 = 0xff7fffffff7fffff;
  DAT_101dc4350 = 0;
  DAT_101dc4358 = 0;
  uRam0000000101dc4364 = 0xff7fffffff7fffff;
  _DAT_101dc435c = 0xff7fffffff7fffff;
  DAT_101dc436c = 0xff7fffff;
  DAT_101dc4370 = 0xff7fffff;
  DAT_101dc4374 = NEON_fmov(0xbf800000,4);
  DAT_101dc437c = 0x3f000000;
  DAT_101dc4380 = 0;
  DAT_101dc4388 = 0;
  uRam0000000101dc4398 = 0xff7fffffff7fffff;
  _DAT_101dc4390 = 0xff7fffffff7fffff;
  uRam0000000101dc43a8 = 0xff7fffffff7fffff;
  _DAT_101dc43a0 = 0xff7fffffff7fffff;
  uRam0000000101dc43b8 = 0xff7fffffff7fffff;
  _DAT_101dc43b0 = 0xff7fffffff7fffff;
  uRam0000000101dc43c8 = 0xbf800000bf800000;
  _DAT_101dc43c0 = 0xbf80000000000000;
  DAT_101dc43d0 = 0xbf800000;
  DAT_101dc43d4 = 0xff7fffff;
  DAT_101dc43d8 = 0xff7fffff;
  DAT_101dc43dc = 0xff7fffff;
  DAT_101dc43e0 = 0;
  DAT_101dc43e4 = 0xff7fffff;
  DAT_101dc43e8 = 0;
  DAT_101dc43f0 = 0;
  return;
}




long * FUN_10006f1e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *local_98;
  long *plStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_100065974_10144de80;
  FUN_10064e264();
  plVar1 = param_1 + 0x2e;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x59;
  thunk_FUN_100651ebc(plVar2);
  plVar3 = param_1 + 0x83;
  thunk_FUN_100651ebc(plVar3);
  plVar4 = param_1 + 0xad;
  FUN_1006421a8(plVar4);
  param_1[0xad] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0xbe;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xdc;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0xfa;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x118;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x13e;
  FUN_1001aa1d4(plVar9);
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = DAT_101dc0b88;
  *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) & 0xfc000000 | 0x2000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100651f8c(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  if ((*(uint *)((long)param_1 + 0x49c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x49c) = *(uint *)((long)param_1 + 0x49c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100652590(plVar3,&DAT_10115a164,2);
  FUN_100651f94(plVar3,"square_button_fill_top_left",0,0,0,"square_button_fill_top_middle",0,0,0,
                "square_button_fill_top_left",1,"square_button_fill_middle_left",0,
                "white_background",0,"square_button_fill_middle_left",1,0,0,0,0,0,0);
  FUN_100651f8c(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652590(plVar2,&DAT_101dc4634,2);
  FUN_100651f94(plVar2,"square_button_top_left",0,0,0,"square_button_top_middle",0,0,0,
                "square_button_top_left",1,"square_button_middle_left",0,0,0,
                "square_button_middle_left",1,0,0,0,0,0,1);
  local_98 = (code *)0x3f8000003f000000;
  FUN_1006556c8(plVar1,&local_98);
  *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) & 0xfffffffb;
  local_70 = DAT_101dbd458;
  local_98 = thunk_FUN_10006fe2c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_98);
  local_70 = DAT_101dbd484;
  local_98 = thunk_FUN_10006fe2c;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x18,&local_98);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffffffef;
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar5,&DAT_101dc4634,2);
  FUN_100652dd4(plVar6,&DAT_101dc4634,2);
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"ability_upgrade_badge_glow");
  *(uint *)((long)param_1 + 0x854) = *(uint *)((long)param_1 + 0x854) & 0xffffffbf;
  FUN_100651038(plVar8,PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8);
  uVar11 = FUN_1004e0150("HUD_ABILITY_UPGRADED",0);
  FUN_1006513c0(plVar8,uVar11);
  if ((*(float *)(param_1 + 0x122) != 0.5) || (*(float *)((long)param_1 + 0x914) != 0.5)) {
    param_1[0x122] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar8);
  }
  *(uint *)((long)param_1 + 0x944) = *(uint *)((long)param_1 + 0x944) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x148) != 0.5) || (*(float *)((long)param_1 + 0xa44) != 0.5)) {
    param_1[0x148] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar9);
  }
  uVar11 = FUN_100345b94();
  uVar11 = FUN_10034c450(uVar11,"*KindredHUDEffects*");
  FUN_10016a5c8();
  FUN_1001aa350(plVar9,uVar11);
  *(uint *)((long)param_1 + 0xa74) = *(uint *)((long)param_1 + 0xa74) & 0xffffffbf;
  return param_1;
}




void thunk_FUN_10006fe2c(void)

{
  FUN_10006fe2c();
  return;
}




long * thunk_FUN_10006f1e0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  code *pcStack_98;
  long *plStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  
  puVar10 = (undefined8 *)FUN_10064e20c();
  *puVar10 = &PTR_thunk_FUN_100065974_10144de80;
  FUN_10064e264();
  plVar1 = param_1 + 0x2e;
  thunk_FUN_100655644(plVar1);
  plVar2 = param_1 + 0x59;
  thunk_FUN_100651ebc(plVar2);
  plVar3 = param_1 + 0x83;
  thunk_FUN_100651ebc(plVar3);
  plVar4 = param_1 + 0xad;
  FUN_1006421a8(plVar4);
  param_1[0xad] = (long)&PTR_thunk_FUN_10064221c_10144b7e8;
  plVar5 = param_1 + 0xbe;
  thunk_FUN_100652c08(plVar5);
  plVar6 = param_1 + 0xdc;
  thunk_FUN_100652c08(plVar6);
  plVar7 = param_1 + 0xfa;
  thunk_FUN_100652c08(plVar7);
  plVar8 = param_1 + 0x118;
  thunk_FUN_100650e64(plVar8);
  plVar9 = param_1 + 0x13e;
  FUN_1001aa1d4(plVar9);
  param_1[0x17a] = 0;
  *(undefined4 *)(param_1 + 0x17b) = DAT_101dc0b88;
  *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) & 0xfc000000 | 0x2000000;
  (**(code **)(*param_1 + 0x78))(param_1,puVar10 + 0x17,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar1,1);
  FUN_100655930(plVar1,plVar2,1);
  FUN_100655930(plVar1,plVar3,1);
  FUN_100655930(plVar1,plVar4,1);
  FUN_100642bd8(plVar4,plVar5,1);
  FUN_100642bd8(plVar4,plVar6,1);
  FUN_100642bd8(plVar4,plVar7,1);
  FUN_100642bd8(plVar4,plVar9,1);
  (**(code **)(*param_1 + 0x78))(param_1,plVar8,1);
  FUN_100651f8c(plVar3,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  if ((*(uint *)((long)param_1 + 0x49c) & 0x7f80) != 0x3f80) {
    *(uint *)((long)param_1 + 0x49c) = *(uint *)((long)param_1 + 0x49c) & 0xffff807f | 0x3f80;
    FUN_1000200a0(plVar3);
  }
  FUN_100652590(plVar3,&DAT_10115a164,2);
  FUN_100651f94(plVar3,"square_button_fill_top_left",0,0,0,"square_button_fill_top_middle",0,0,0,
                "square_button_fill_top_left",1,"square_button_fill_middle_left",0,
                "white_background",0,"square_button_fill_middle_left",1,0,0,0,0,0,0);
  FUN_100651f8c(plVar2,PTR_s_build___HUDPartsCommon_atlas_10184e098);
  FUN_100652590(plVar2,&DAT_101dc4634,2);
  FUN_100651f94(plVar2,"square_button_top_left",0,0,0,"square_button_top_middle",0,0,0,
                "square_button_top_left",1,"square_button_middle_left",0,0,0,
                "square_button_middle_left",1,0,0,0,0,0,1);
  pcStack_98 = (code *)0x3f8000003f000000;
  FUN_1006556c8(plVar1,&pcStack_98);
  *(uint *)((long)param_1 + 500) = *(uint *)((long)param_1 + 500) & 0xfffffffb;
  uStack_70 = DAT_101dbd458;
  pcStack_98 = thunk_FUN_10006fe2c;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x18,&pcStack_98);
  uStack_70 = DAT_101dbd484;
  pcStack_98 = thunk_FUN_10006fe2c;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_88 = 0;
  plStack_90 = param_1;
  FUN_10001554c(param_1 + 0x18,&pcStack_98);
  *(uint *)((long)param_1 + 0x13c) = *(uint *)((long)param_1 + 0x13c) & 0xffffffef;
  FUN_100652cac(plVar5,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652cac(plVar6,PTR_s_build___HUDPartsCommon_atlas_10184e098,"white_background");
  FUN_100652dd4(plVar5,&DAT_101dc4634,2);
  FUN_100652dd4(plVar6,&DAT_101dc4634,2);
  FUN_100652cac(plVar7,PTR_s_build___HUDPartsCommon_atlas_10184e098,"ability_upgrade_badge_glow");
  *(uint *)((long)param_1 + 0x854) = *(uint *)((long)param_1 + 0x854) & 0xffffffbf;
  FUN_100651038(plVar8,PTR_s_build___Fonts_Futura_Medium_30_S_10184e2b8);
  uVar11 = FUN_1004e0150("HUD_ABILITY_UPGRADED",0);
  FUN_1006513c0(plVar8,uVar11);
  if ((*(float *)(param_1 + 0x122) != 0.5) || (*(float *)((long)param_1 + 0x914) != 0.5)) {
    param_1[0x122] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar8);
  }
  *(uint *)((long)param_1 + 0x944) = *(uint *)((long)param_1 + 0x944) & 0xfffffffb;
  if ((*(float *)(param_1 + 0x148) != 0.5) || (*(float *)((long)param_1 + 0xa44) != 0.5)) {
    param_1[0x148] = (long)&DAT_3f0000003f000000;
    FUN_1000200a0(plVar9);
  }
  uVar11 = FUN_100345b94();
  uVar11 = FUN_10034c450(uVar11,"*KindredHUDEffects*");
  FUN_10016a5c8();
  FUN_1001aa350(plVar9,uVar11);
  *(uint *)((long)param_1 + 0xa74) = *(uint *)((long)param_1 + 0xa74) & 0xffffffbf;
  return param_1;
}




void FUN_10006f6fc(long param_1,long param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_2 + 0x30);
  *(long *)(param_1 + 0xbd0) = param_2 + 0x28;
  *(undefined4 *)(param_1 + 0xbd8) = uVar1;
  *(uint *)(param_1 + 0xbe0) =
       param_3 & 0xffff | (param_4 & 0xff) << 0x10 | (uint)*(byte *)(param_1 + 0xbe3) << 0x18;
  return;
}




void FUN_10006f724(long param_1)

{
  long lVar1;
  float fVar2;
  undefined4 local_48;
  float fStack_44;
  
  FUN_10064e47c(0x42200000,0x41200000,param_1 + 0x5f0);
  FUN_10064e47c(0x41200000,0x42200000,param_1 + 0x6e0);
  lVar1 = param_1 + 0x568;
  FUN_10064e5ec(0,0,param_1 + 0x5f0,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 0x6e0,8,lVar1,8);
  FUN_10064e5ec(0,0,param_1 + 2000,8,lVar1,8);
  FUN_10064e5ec(0,0x40a00000,lVar1,8,param_1 + 0x418,8);
  lVar1 = param_1 + 0x170;
  FUN_1006557ec(lVar1);
  fVar2 = 0.0;
  FUN_10064e5ec(0,lVar1,6,param_1,6);
  *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffffffbf;
  local_48 = FUN_10064e3cc(lVar1);
  fStack_44 = fVar2 + 60.0;
  FUN_10064e48c(param_1 + 0xb8,&local_48);
  FUN_10064e5ec(0,0x420c0000,param_1 + 0xb8,6,lVar1,6);
  return;
}




void thunk_FUN_10006f87c(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  plVar3 = *(long **)(param_1 + 0xbd0);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0xbd8) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        for (lVar7 = *(long *)(lVar4 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
          if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_10184dab8) {
            iVar1 = FUN_1003e11f8(lVar7,*(undefined2 *)(param_1 + 0xbe0));
            if (iVar1 == 0) {
              return;
            }
            lVar6 = *(long *)(lVar4 + 0x40);
            fVar9 = *(float *)(lVar6 + 0xac) +
                    *(float *)(lVar6 + 0x160) * (*(float *)(lVar6 + 0x2c8) + 1.0);
            NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar6 + 0x214),DAT_101dc4774);
            if (0.0 < DAT_101dc46b4) {
              fVar9 = *(float *)(lVar6 + 0xd8) +
                      *(float *)(lVar6 + 0x18c) * (*(float *)(lVar6 + 0x2f4) + 1.0);
              fVar8 = (float)NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar6 + 0x240),DAT_101dc47a0);
              fVar9 = DAT_101dc46e0;
              if (DAT_101dc46e0 <= fVar8) {
                fVar9 = fVar8;
              }
              uVar2 = FUN_1003d9e44(lVar7,*(undefined2 *)(param_1 + 0xbe0));
              if (((float)uVar2 <= fVar9) && ((*(byte *)(param_1 + 0xbe3) >> 1 & 1) != 0)) {
                uVar5 = FUN_10006fdb4(param_1);
                FUN_1000701d0(param_1,uVar5);
                if ((*(byte *)(param_1 + 0xbe3) & 1) != 0) {
                  return;
                }
                FUN_1001aae30(param_1 + 0x9f0,"Effect_HUD_AbilityTab_PointReady");
                lVar4 = FUN_1003de46c(lVar4);
                if (((lVar4 == 0) || (*(int *)(lVar4 + 0x28) == 0xfe)) ||
                   (uVar2 = FUN_10031615c(0x1b), (uVar2 ^ 1 | (uint)uVar5) == 1)) {
                  FUN_10006fee0(param_1,1);
                }
                *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) | 0x1000000;
                return;
              }
            }
            if ((*(byte *)(param_1 + 0xbe3) & 1) == 0) {
              return;
            }
            FUN_10006fee0(param_1,0);
            *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) & 0xfeffffff;
            FUN_1001aafc0(param_1 + 0x9f0,"Effect_HUD_AbilityTab_PointReady");
            return;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xbd0) = 0;
      *(undefined4 *)(param_1 + 0xbd8) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10006f87c(long param_1)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  
  plVar3 = *(long **)(param_1 + 0xbd0);
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0xbd8) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      if (lVar4 != 0) {
        for (lVar7 = *(long *)(lVar4 + 0x18); lVar7 != 0; lVar7 = *(long *)(lVar7 + 0x20)) {
          if (*(int *)(*(long *)(lVar7 + 8) + 0xa4) == DAT_10184dab8) {
            iVar1 = FUN_1003e11f8(lVar7,*(undefined2 *)(param_1 + 0xbe0));
            if (iVar1 == 0) {
              return;
            }
            lVar6 = *(long *)(lVar4 + 0x40);
            fVar9 = *(float *)(lVar6 + 0xac) +
                    *(float *)(lVar6 + 0x160) * (*(float *)(lVar6 + 0x2c8) + 1.0);
            NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar6 + 0x214),DAT_101dc4774);
            if (0.0 < DAT_101dc46b4) {
              fVar9 = *(float *)(lVar6 + 0xd8) +
                      *(float *)(lVar6 + 0x18c) * (*(float *)(lVar6 + 0x2f4) + 1.0);
              fVar8 = (float)NEON_fminnm(fVar9 + fVar9 * *(float *)(lVar6 + 0x240),DAT_101dc47a0);
              fVar9 = DAT_101dc46e0;
              if (DAT_101dc46e0 <= fVar8) {
                fVar9 = fVar8;
              }
              uVar2 = FUN_1003d9e44(lVar7,*(undefined2 *)(param_1 + 0xbe0));
              if (((float)uVar2 <= fVar9) && ((*(byte *)(param_1 + 0xbe3) >> 1 & 1) != 0)) {
                uVar5 = FUN_10006fdb4(param_1);
                FUN_1000701d0(param_1,uVar5);
                if ((*(byte *)(param_1 + 0xbe3) & 1) != 0) {
                  return;
                }
                FUN_1001aae30(param_1 + 0x9f0,"Effect_HUD_AbilityTab_PointReady");
                lVar4 = FUN_1003de46c(lVar4);
                if (((lVar4 == 0) || (*(int *)(lVar4 + 0x28) == 0xfe)) ||
                   (uVar2 = FUN_10031615c(0x1b), (uVar2 ^ 1 | (uint)uVar5) == 1)) {
                  FUN_10006fee0(param_1,1);
                }
                *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) | 0x1000000;
                return;
              }
            }
            if ((*(byte *)(param_1 + 0xbe3) & 1) == 0) {
              return;
            }
            FUN_10006fee0(param_1,0);
            *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) & 0xfeffffff;
            FUN_1001aafc0(param_1 + 0x9f0,"Effect_HUD_AbilityTab_PointReady");
            return;
          }
        }
      }
    }
    else {
      *(undefined8 *)(param_1 + 0xbd0) = 0;
      *(undefined4 *)(param_1 + 0xbd8) = DAT_101dc0b88;
    }
  }
  return;
}




void FUN_10006fa78(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10064e47c(param_3 + 0x418);
  FUN_10064e47c(param_1,param_2,param_3 + 0x2c8);
  FUN_10006f724(param_3);
  return;
}




void FUN_10006fac0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ushort uVar9;
  ushort *puVar10;
  void *pvVar11;
  void *local_68 [2];
  char local_51;
  
  iVar5 = FUN_10031615c(0x1b);
  if (((iVar5 != 0) && (uVar6 = FUN_10006fdb4(param_1), (uVar6 & 1) != 0)) ||
     ((*(byte *)(param_1 + 0xbe3) & 1) != 0)) {
    lVar1 = param_1 + 0x170;
    bVar4 = false;
    if ((*(float *)(param_1 + 0x1b8) == 1.0) && (bVar4 = false, !NAN(*(float *)(param_1 + 0x1bc))))
    {
      bVar4 = *(float *)(param_1 + 0x1bc) == 1.0;
    }
    pvVar11 = (void *)NEON_fmov(0x3f800000,4);
    if (!bVar4) {
      *(void **)(param_1 + 0x1b8) = pvVar11;
      FUN_1000200a0(lVar1);
    }
    FUN_1000bda2c(*(undefined1 *)(param_1 + 0xbe2),4);
    FUN_1001aafc0(param_1 + 0x9f0,"Effect_HUD_AbilityTab_LevelUp");
    lVar2 = DAT_101dbd2f8;
    uVar9 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar10;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar9;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_1001e1d58(puVar10);
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    FUN_10001549c(local_68,"Effect_HUD_AbilityTab_LevelUp");
    FUN_1001e1dcc(puVar10,param_1 + 0x9f0,local_68);
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    uVar7 = FUN_10001f424();
    local_68[0] = (void *)NEON_fmov(0x3fe00000,4);
    FUN_10064025c(uVar7,local_68);
    FUN_10063f0e8(0x3c23d70a,uVar7);
    uVar7 = FUN_10001f424();
    local_68[0] = pvVar11;
    FUN_10064025c(uVar7,local_68);
    FUN_10063f0e8(0x3e800000,uVar7);
    FUN_10063f130(uVar7,FUN_10006bf9c);
    FUN_100642324(lVar1);
    FUN_100642b7c(lVar1,puVar10);
    lVar2 = param_1 + 0x8c0;
    FUN_10064e5ec(0,0,lVar2,6,lVar1,4);
    uVar3 = *(uint *)(param_1 + 0x944);
    *(uint *)(param_1 + 0x944) = uVar3 | 4;
    if ((~uVar3 & 0x7f80) != 0) {
      *(uint *)(param_1 + 0x944) = uVar3 | 0x7f84;
      FUN_1000200a0(lVar2);
    }
    uVar7 = FUN_100047714();
    FUN_10063fce0(0);
    FUN_10063f0e8(0x3f666666,uVar7);
    lVar1 = DAT_101dbd2f8;
    uVar9 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar9 == 0xffff) {
      puVar10 = (ushort *)0x0;
    }
    else {
      puVar10 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar9 * 0x40 + 0x10);
      if (uVar9 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar9 = 0xffff;
      }
      else {
        uVar9 = *puVar10;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar9;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063f950(puVar10);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    local_68[0] = (void *)0xc220000000000000;
    FUN_10063f984(puVar10,local_68);
    FUN_10063f0e8(0x3f666666,puVar10);
    uVar8 = FUN_10001f4d4();
    FUN_10063f2a4(uVar8,uVar7);
    FUN_100047300();
    FUN_100642324(lVar2);
    FUN_100642b7c(lVar2,uVar8);
  }
  return;
}




bool FUN_10006fdb4(long param_1)

{
  bool bVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = *(long **)(param_1 + 0xbd0);
  bVar1 = false;
  if (plVar3 != (long *)0x0) {
    if (*(int *)(param_1 + 0xbd8) == (int)plVar3[1]) {
      lVar4 = (**(code **)(*plVar3 + 0x10))();
      bVar1 = false;
      if ((lVar4 != 0) && (lVar4 = FUN_10049028c(), bVar1 = false, lVar4 != 0)) {
        uVar2 = FUN_1004708c8();
        bVar1 = uVar2 == *(ushort *)(param_1 + 0xbe0);
      }
    }
    else {
      bVar1 = false;
      *(undefined8 *)(param_1 + 0xbd0) = 0;
      *(undefined4 *)(param_1 + 0xbd8) = DAT_101dc0b88;
    }
  }
  return bVar1;
}




void FUN_10006fe2c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [16];
  
  lVar2 = (**(code **)(**(long **)(param_1 + 0xbd0) + 0x10))();
  lVar2 = *(long *)(lVar2 + 0x18);
  while ((lVar2 != 0 && (*(int *)(*(long *)(lVar2 + 8) + 0xa4) != DAT_10184dab8))) {
    lVar2 = *(long *)(lVar2 + 0x20);
  }
  iVar1 = FUN_1003e11f8(lVar2,*(undefined2 *)(param_1 + 0xbe0));
  if (iVar1 != 0) {
    uVar3 = FUN_100061db0();
    FUN_10005ef64(auStack_30,*(undefined1 *)(param_1 + 0xbe2));
    iVar1 = FUN_10005f394(uVar3,auStack_30);
    if (iVar1 != 0) {
      FUN_10006fac0(param_1);
    }
  }
  return;
}




void FUN_10006fec0(long param_1)

{
  *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) | 0x2000000;
  return;
}




void FUN_10006fed0(long param_1)

{
  *(uint *)(param_1 + 0xbe0) = *(uint *)(param_1 + 0xbe0) & 0xfdffffff;
  return;
}




void FUN_10006fee0(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort *puVar6;
  undefined8 uVar7;
  undefined8 local_58;
  
  lVar1 = param_1 + 0x170;
  if (param_2 == 0) {
    bVar3 = false;
    if ((*(float *)(param_1 + 0x1b8) == 1.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x1bc))))
    {
      bVar3 = *(float *)(param_1 + 0x1bc) == 1.0;
    }
    if (!bVar3) {
      uVar7 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(param_1 + 0x1b8) = uVar7;
      FUN_1000200a0(lVar1);
    }
    uVar7 = FUN_100047714();
    FUN_10063fce0(0);
    FUN_10063f0e8(0x3dcccccd,uVar7);
    uVar4 = FUN_10001f424();
    local_58 = NEON_fmov(0x40800000,4);
    FUN_10064025c(uVar4,&local_58);
    FUN_10063f0e8(0x3e800000,uVar4);
    FUN_10063f130(uVar4,FUN_10001f4c4);
    uVar4 = FUN_10001f4d4();
    FUN_10063f2a4(uVar4,uVar7);
    FUN_100047300();
    FUN_100642324(lVar1);
    FUN_100642b7c(lVar1,uVar4);
    *(uint *)(param_1 + 0x13c) = *(uint *)(param_1 + 0x13c) & 0xffffffef;
  }
  else {
    bVar3 = false;
    if ((*(float *)(param_1 + 0x1b8) == 4.0) && (bVar3 = false, !NAN(*(float *)(param_1 + 0x1bc))))
    {
      bVar3 = *(float *)(param_1 + 0x1bc) == 4.0;
    }
    if (!bVar3) {
      uVar7 = NEON_fmov(0x40800000,4);
      *(undefined8 *)(param_1 + 0x1b8) = uVar7;
      FUN_1000200a0(lVar1);
    }
    if ((*(uint *)(param_1 + 500) & 0x7f80) != 0) {
      *(uint *)(param_1 + 500) = *(uint *)(param_1 + 500) & 0xffff807f;
      FUN_1000200a0(lVar1);
    }
    lVar2 = DAT_101dbd2f8;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar2 + 0x20014) = *(int *)(lVar2 + 0x20014) + 1;
      FUN_10063ee9c(puVar6);
      *(undefined ***)puVar6 = &PTR_thunk_FUN_10063eeb4_1014a52f0;
      *(int *)(lVar2 + 0x20020) = *(int *)(lVar2 + 0x20020) + 1;
    }
    uVar7 = FUN_100047714();
    FUN_10063fce0(0x3f800000);
    FUN_10063f0e8(0x3c23d70a,uVar7);
    uVar4 = FUN_10001f424();
    local_58 = NEON_fmov(0x3f800000,4);
    FUN_10064025c(uVar4,&local_58);
    FUN_10063f0e8(0x3e800000,uVar4);
    FUN_10063f130(uVar4,FUN_10001f4ac);
    uVar4 = FUN_10001f4d4();
    FUN_10063f2a4(uVar4,uVar7);
    FUN_100642324(lVar1);
    FUN_100642b7c(lVar1,puVar6);
    uVar7 = FUN_10064081c(0x3e800000);
    lVar1 = DAT_101dbd2f8;
    uVar5 = *(ushort *)(DAT_101dbd2f8 + 0x20010);
    if ((ulong)uVar5 == 0xffff) {
      puVar6 = (ushort *)0x0;
    }
    else {
      puVar6 = (ushort *)(DAT_101dbd2f8 + (ulong)uVar5 * 0x40 + 0x10);
      if (uVar5 == *(ushort *)(DAT_101dbd2f8 + 0x20012)) {
        uVar5 = 0xffff;
      }
      else {
        uVar5 = *puVar6;
      }
      *(ushort *)(DAT_101dbd2f8 + 0x20010) = uVar5;
      *(int *)(lVar1 + 0x20014) = *(int *)(lVar1 + 0x20014) + 1;
      FUN_10063f098(puVar6);
      *(int *)(lVar1 + 0x20020) = *(int *)(lVar1 + 0x20020) + 1;
    }
    FUN_10063f0d8(puVar6,1);
    FUN_100642324(param_1 + 0xb8);
    FUN_100642b7c(param_1 + 0xb8,uVar7);
  }
  FUN_10006f724(param_1);
  return;
}




void thunk_FUN_100065974(void)

{
  FUN_100065974();
  return;
}

