// functions/0198f — 34 functions
#include "libGameKindred.h"




void FUN_0198f000(undefined4 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_0198f048(param_1,0);
  uVar1 = FUN_00e6a474(param_2);
  uVar1 = FUN_0091ed5c(param_2,uVar1,0x12345678);
  *param_1 = uVar1;
  return;
}




void FUN_0198f048(long param_1,int param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (*(int *)(param_1 + 8) != param_2) {
    *(int *)(param_1 + 8) = param_2;
    if (*(long *)(param_1 + 0x10) != 0) {
      plVar2 = (long *)(*(long *)(param_1 + 0x10) + -8);
      while (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x10))(plVar2,param_2);
        plVar1 = plVar2 + 1;
        plVar2 = (long *)0x0;
        if (*plVar1 != 0) {
          plVar2 = (long *)(*plVar1 + -8);
        }
      }
    }
  }
  return;
}




void FUN_0198f0ac(long param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  return;
}




void FUN_0198f0bc(long param_1)

{
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + -1;
  return;
}




void FUN_0198f0cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[2] = param_3;
  *param_1 = &PTR_FUN_02baf288;
  param_1[1] = param_2;
  lVar2 = 0x30;
  do {
    puVar1 = (undefined8 *)((long)param_1 + lVar2);
    lVar2 = lVar2 + 0x18;
    *puVar1 = 0;
    puVar1[1] = 0;
  } while (lVar2 != 0xf0);
  memset(param_1 + 6,0,0x360);
  return;
}




int FUN_0198f11c(long param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  puVar3 = param_2 + 1;
  uVar1 = *param_2;
  uVar4 = (ulong)uVar1;
  *(uint *)(param_1 + 0x308) = (uint)uVar1;
  if (uVar1 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x208);
    do {
      *puVar5 = puVar3;
      iVar2 = FUN_00e6a474(puVar3);
      uVar4 = uVar4 - 1;
      puVar3 = (ushort *)((long)puVar3 + (ulong)(iVar2 + 1));
      puVar5 = puVar5 + 1;
    } while (uVar4 != 0);
  }
  return (int)puVar3 - (int)param_2;
}




int FUN_0198f174(long param_1,ushort *param_2)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  ulong uVar8;
  ushort local_b0;
  undefined8 local_ae;
  undefined8 uStack_a6;
  undefined8 local_9e;
  undefined8 uStack_96;
  undefined1 local_8e;
  undefined8 local_8d;
  undefined8 uStack_85;
  undefined8 uStack_7d;
  undefined8 uStack_75;
  undefined4 local_6d;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar7 = param_2 + 1;
  uVar1 = *param_2;
  uVar8 = 0;
  puVar6 = (undefined4 *)0x0;
  do {
    puVar4 = (undefined4 *)FUN_0198e340(*(undefined8 *)(param_1 + 0x10));
    iVar3 = FUN_019a130c(puVar7,&local_b0);
    *puVar4 = 3;
    puVar7 = (ushort *)((long)puVar7 + (long)iVar3);
    *(uint *)(param_1 + 0x30c + uVar8 * 4) = (uint)local_b0;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined1 *)(puVar4 + 0xc) = local_8e;
    *(undefined8 *)(puVar4 + 6) = uStack_a6;
    *(undefined8 *)(puVar4 + 4) = local_ae;
    *(undefined8 *)(puVar4 + 10) = uStack_96;
    *(undefined8 *)(puVar4 + 8) = local_9e;
    *(undefined4 *)((long)puVar4 + 0x51) = local_6d;
    *(undefined8 *)((long)puVar4 + 0x49) = uStack_75;
    *(undefined8 *)((long)puVar4 + 0x41) = uStack_7d;
    *(undefined8 *)((long)puVar4 + 0x39) = uStack_85;
    *(undefined8 *)((long)puVar4 + 0x31) = local_8d;
    if (uVar8 == 0) {
      puVar5 = *(undefined8 **)(param_1 + 8);
    }
    else {
      puVar5 = (undefined8 *)(puVar6 + 0x16);
    }
    uVar8 = uVar8 + 1;
    *puVar5 = puVar4;
    puVar6 = puVar4;
  } while (uVar8 < uVar1);
  *(undefined8 *)(puVar4 + 0x16) = 0;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return (int)puVar7 - (int)param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_0198f280(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint local_5c;
  byte local_58 [4];
  byte local_54 [4];
  byte local_50 [4];
  undefined1 auStack_4c [4];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_019a1378(param_2,auStack_4c,local_50,param_1 + 0x18,param_1 + 0x1fc,param_1 + 0x1f0,
                       local_54);
  iVar3 = 0;
  lVar4 = param_2 + iVar2;
  *(uint *)(param_1 + 0x200) = (uint)local_50[0];
  *(uint *)(param_1 + 0x1f8) = (uint)local_54[0];
  if (local_50[0] < 3) {
    iVar3 = *(int *)(&DAT_01e1bbe0 + (long)(char)local_50[0] * 4);
  }
  *(ulong *)(param_1 + 0x1e8) = (ulong)(uint)(*(int *)(param_1 + 0x1f0) * iVar3);
  *(bool *)(*(long *)(param_1 + 8) + 0x98) = local_54[0] < 2;
  if (local_54[0] != 0) {
    uVar5 = 0;
    puVar6 = (uint *)(param_1 + 0x44);
    do {
      iVar3 = FUN_019a13cc(lVar4,local_58,&local_5c,puVar6 + -1);
      uVar5 = uVar5 + 1;
      lVar4 = lVar4 + iVar3;
      *(ulong *)(puVar6 + -3) = (ulong)local_5c;
      *puVar6 = (uint)local_58[0];
      puVar6 = puVar6 + 6;
    } while (uVar5 < *(uint *)(param_1 + 0x1f8));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return (int)lVar4 - (int)param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_0198f38c(long param_1,byte *param_2)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  ulong uVar6;
  byte local_58 [4];
  byte local_54 [4];
  byte local_50 [4];
  byte local_4c [4];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pbVar4 = param_2 + 1;
  bVar1 = *param_2;
  *(uint *)(param_1 + 500) = (uint)bVar1;
  if (bVar1 != 0) {
    uVar6 = 0;
    lVar5 = param_1 + 0x100;
    do {
      iVar3 = FUN_019a1334(pbVar4,local_4c,local_50,local_54,local_58,lVar5);
      uVar6 = uVar6 + 1;
      pbVar4 = pbVar4 + iVar3;
      *(uint *)(lVar5 + -0x10) = (uint)local_4c[0];
      *(uint *)(lVar5 + -0xc) = (uint)local_50[0];
      *(uint *)(lVar5 + -8) = (uint)local_54[0];
      *(uint *)(lVar5 + -4) = (uint)local_58[0];
      lVar5 = lVar5 + 0x14;
    } while (uVar6 < *(uint *)(param_1 + 500));
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return (int)pbVar4 - (int)param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




int FUN_0198f454(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  
  iVar2 = (int)param_2;
  lVar3 = *(long *)(param_1 + 8);
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(lVar3 + 0x88) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(lVar3 + 0x80) = uVar7;
  *(undefined8 *)(lVar3 + 0x90) = uVar4;
  uVar1 = *(uint *)(param_1 + 0x1f8);
  if (uVar1 != 0) {
    uVar5 = 0;
    plVar6 = (long *)(param_1 + 0x38);
    do {
      uVar5 = uVar5 + 1;
      plVar6[-1] = param_2;
      param_2 = param_2 + *plVar6;
      plVar6 = plVar6 + 3;
    } while (uVar5 < uVar1);
  }
  *(long *)(param_1 + 0x1e0) = param_2;
  return ((int)param_2 + *(int *)(param_1 + 0x1e8)) - iVar2;
}




long FUN_0198f4b4(long param_1)

{
  return param_1 + 0x30;
}




long FUN_0198f4bc(long param_1)

{
  return param_1 + 0x208;
}




void FUN_0198f4c4(void)

{
  return;
}




void FUN_0198f4cc(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  return;
}




void FUN_0198f4e4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(undefined2 *)(param_1 + 0xd) = 0;
  return;
}




void thunk_FUN_0198f500(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_0198ff3c();
      FUN_01990384(uVar1,*(undefined8 *)(param_1 + 8 + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x48));
  }
  return;
}




void FUN_0198f500(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  
  if (*(int *)(param_1 + 0x48) != 0) {
    uVar2 = 0;
    do {
      uVar1 = FUN_0198ff3c();
      FUN_01990384(uVar1,*(undefined8 *)(param_1 + 8 + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x48));
  }
  return;
}




void FUN_0198f550(float param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar1 = *(uint *)(param_2 + 0x48);
  if (uVar1 != 0) {
    uVar2 = 0;
    do {
      plVar3 = *(long **)(param_2 + 8 + uVar2 * 8);
      fVar7 = *(float *)(plVar3 + 3);
      fVar6 = *(float *)(plVar3 + 1);
      fVar5 = *(float *)(*plVar3 + 4);
      fVar4 = fVar6 + fVar7 * param_1;
      if (*(int *)((long)plVar3 + 0x14) == 1) {
        fVar10 = *(float *)((long)plVar3 + 0x1c);
        fVar5 = (fVar5 - fVar10) - *(float *)(plVar3 + 4);
        if (((fVar4 < fVar5) || (fVar7 <= 0.0)) || (fVar5 <= fVar6)) {
          if (((fVar7 < 0.0) && (fVar10 < fVar6)) && (fVar4 <= fVar10)) {
            *(int *)(plVar3 + 5) = (int)plVar3[5] + 1;
          }
        }
        else {
          *(int *)((long)plVar3 + 0x24) = *(int *)((long)plVar3 + 0x24) + 1;
        }
        fVar4 = fmodf(fVar4 - fVar10,fVar5);
        uVar1 = *(uint *)(param_2 + 0x48);
        fVar10 = fVar10 + fVar4;
      }
      else {
        fVar10 = *(float *)((long)plVar3 + 0x1c);
        if (*(char *)((long)plVar3 + 0x2c) == '\0') {
          fVar8 = *(float *)(plVar3 + 4);
          fVar9 = (fVar5 - fVar10) - fVar8;
          if ((((fVar9 <= fVar4) && (0.0 < fVar7)) && (fVar6 < fVar9)) ||
             (((fVar7 < 0.0 && (fVar10 < fVar6)) && (fVar4 <= fVar10)))) {
            *(undefined1 *)((long)plVar3 + 0x2c) = 1;
          }
        }
        else {
          fVar8 = *(float *)(plVar3 + 4);
        }
        if (fVar5 - fVar8 <= fVar4) {
          fVar4 = fVar5 - fVar8;
        }
        if (fVar10 <= fVar4) {
          fVar10 = fVar4;
        }
      }
      uVar2 = uVar2 + 1;
      *(float *)(plVar3 + 1) = fVar10;
    } while (uVar2 < uVar1);
  }
  return;
}




void FUN_0198f6ac(long *param_1,undefined8 *param_2)

{
  ushort uVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  ushort uVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  undefined1 auStack_60 [8];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  puVar4 = (undefined8 *)param_1[10];
  uVar7 = *(ushort *)(*param_1 + 2);
  if (puVar4 == (undefined8 *)0x0) {
    uVar5 = (ulong)*(uint *)(param_1 + 9);
    if (*(uint *)(param_1 + 9) != 0) {
      fVar11 = 0.0;
      plVar9 = param_1;
      do {
        plVar9 = plVar9 + 1;
        uVar5 = uVar5 - 1;
        fVar11 = fVar11 + *(float *)(*plVar9 + 0x10);
      } while (uVar5 != 0);
      plVar9 = (long *)param_1[1];
      (**(code **)(*plVar9 + 0x20))
                ((int)plVar9[1],*(undefined8 *)(*plVar9 + 0x10),*(int *)((long)plVar9 + 0x14) == 1,
                 param_2);
      FUN_01991284((1.0 / fVar11) * *(float *)(plVar9 + 2),param_2,*(undefined2 *)(*param_1 + 2));
      if (1 < *(uint *)(param_1 + 9)) {
        uVar5 = 2;
        do {
          plVar9 = (long *)param_1[uVar5];
          (**(code **)(*plVar9 + 0x20))
                    ((int)plVar9[1],*(undefined8 *)(*plVar9 + 0x10),
                     *(int *)((long)plVar9 + 0x14) == 1,auStack_60 + -(ulong)((uint)uVar7 * 0x30));
          if (*(int *)((long)plVar9 + 0xc) == 0) {
            FUN_019912f4((1.0 / fVar11) * *(float *)(plVar9 + 2),param_2,
                         auStack_60 + -(ulong)((uint)uVar7 * 0x30),*(undefined2 *)(*param_1 + 2));
          }
          bVar3 = uVar5 < *(uint *)(param_1 + 9);
          uVar5 = uVar5 + 1;
        } while (bVar3);
      }
      uVar7 = *(ushort *)(param_1 + 0xd);
      if (uVar7 != 0) {
        lVar6 = 0;
        uVar5 = 0;
        do {
          uVar1 = *(ushort *)(param_1[0xc] + uVar5 * 2);
          if (uVar1 < *(ushort *)(*param_1 + 2)) {
            puVar8 = param_2 + (ulong)uVar1 * 6;
            puVar4 = (undefined8 *)(param_1[0xb] + lVar6);
            uVar10 = puVar4[4];
            puVar8[5] = puVar4[5];
            puVar8[4] = uVar10;
            uVar10 = puVar4[2];
            puVar8[3] = puVar4[3];
            puVar8[2] = uVar10;
            uVar10 = *puVar4;
            puVar8[1] = puVar4[1];
            *puVar8 = uVar10;
            uVar7 = *(ushort *)(param_1 + 0xd);
          }
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 0x30;
        } while (uVar5 < uVar7);
      }
    }
  }
  else if (uVar7 != 0) {
    uVar10 = puVar4[4];
    param_2[5] = puVar4[5];
    param_2[4] = uVar10;
    uVar10 = puVar4[2];
    param_2[3] = puVar4[3];
    param_2[2] = uVar10;
    uVar10 = *puVar4;
    param_2[1] = puVar4[1];
    *param_2 = uVar10;
    if (1 < *(ushort *)(*param_1 + 2)) {
      uVar5 = 1;
      lVar6 = 0x30;
      do {
        puVar4 = (undefined8 *)((long)param_2 + lVar6);
        uVar5 = uVar5 + 1;
        puVar8 = (undefined8 *)(param_1[10] + lVar6);
        uVar10 = puVar8[4];
        lVar6 = lVar6 + 0x30;
        puVar4[5] = puVar8[5];
        puVar4[4] = uVar10;
        uVar10 = puVar8[2];
        puVar4[3] = puVar8[3];
        puVar4[2] = uVar10;
        uVar10 = *puVar8;
        puVar4[1] = puVar8[1];
        *puVar4 = uVar10;
      } while (uVar5 < *(ushort *)(*param_1 + 2));
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




float FUN_0198f8e4(long *param_1,uint param_2)

{
  ulong uVar1;
  float fVar2;
  
  if (param_2 == 0) {
    fVar2 = 0.0;
  }
  else {
    uVar1 = (ulong)param_2;
    fVar2 = 0.0;
    do {
      uVar1 = uVar1 - 1;
      fVar2 = fVar2 + *(float *)(*param_1 + 0x10);
      param_1 = param_1 + 1;
    } while (uVar1 != 0);
  }
  return 1.0 / fVar2;
}




void FUN_0198f918(float param_1,long *param_2,float *param_3)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined8 local_6c;
  undefined8 local_64;
  float local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar3 = (ulong)*(uint *)(param_2 + 9);
  if (*(uint *)(param_2 + 9) != 0) {
    fVar5 = 0.0;
    plVar4 = param_2;
    do {
      plVar4 = plVar4 + 1;
      uVar3 = uVar3 - 1;
      fVar5 = fVar5 + *(float *)(*plVar4 + 0x10);
    } while (uVar3 != 0);
    plVar4 = (long *)param_2[1];
    fVar5 = 1.0 / fVar5;
    (**(code **)(*plVar4 + 0x30))
              (*(float *)(plVar4 + 1),*(float *)(plVar4 + 1) + *(float *)(plVar4 + 3) * param_1,
               *(undefined8 *)(*plVar4 + 0x10),*(int *)((long)plVar4 + 0x14) == 1,param_3);
    param_3[7] = 0.0;
    param_3[0xb] = 0.0;
    *(ulong *)param_3 =
         CONCAT44((float)((ulong)*(undefined8 *)param_3 >> 0x20) * fVar5,
                  (float)*(undefined8 *)param_3 * fVar5);
    *(ulong *)(param_3 + 2) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 2) >> 0x20) * fVar5,
                  (float)*(undefined8 *)(param_3 + 2) * fVar5);
    *(ulong *)(param_3 + 4) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20) * fVar5,
                  (float)*(undefined8 *)(param_3 + 4) * fVar5);
    param_3[6] = fVar5 * param_3[6];
    *(ulong *)(param_3 + 8) =
         CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 8) >> 0x20) * fVar5,
                  (float)*(undefined8 *)(param_3 + 8) * fVar5);
    param_3[10] = fVar5 * param_3[10];
    if (1 < *(uint *)(param_2 + 9)) {
      uVar3 = 2;
      do {
        plVar4 = (long *)param_2[uVar3];
        (**(code **)(*plVar4 + 0x30))
                  (*(float *)(plVar4 + 1),*(float *)(plVar4 + 1) + *(float *)(plVar4 + 3) * param_1,
                   *(undefined8 *)(*plVar4 + 0x10),*(int *)((long)plVar4 + 0x14) == 1,&local_88);
        fVar6 = (float)*(undefined8 *)(param_3 + 3);
        fVar7 = -fVar5;
        if (0.0 <= *param_3 * local_88 + param_3[1] * fStack_84 + param_3[2] * local_80 +
                   fVar6 * (float)local_7c) {
          fVar7 = fVar5;
        }
        *param_3 = *param_3 + local_88 * fVar7;
        param_3[1] = param_3[1] + fStack_84 * fVar7;
        param_3[2] = param_3[2] + local_80 * fVar7;
        *(ulong *)(param_3 + 3) =
             CONCAT44((float)((ulong)*(undefined8 *)(param_3 + 3) >> 0x20) +
                      (float)((ulong)local_7c >> 0x20) * fVar5,fVar6 + (float)local_7c * fVar7);
        *(ulong *)(param_3 + 5) =
             CONCAT44(fVar5 * (float)((ulong)local_74 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_3 + 5) >> 0x20),
                      fVar5 * (float)local_74 + (float)*(undefined8 *)(param_3 + 5));
        *(ulong *)(param_3 + 7) =
             CONCAT44(fVar5 * (float)((ulong)local_6c >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_3 + 7) >> 0x20),
                      fVar5 * (float)local_6c + (float)*(undefined8 *)(param_3 + 7));
        *(ulong *)(param_3 + 9) =
             CONCAT44(fVar5 * (float)((ulong)local_64 >> 0x20) +
                      (float)((ulong)*(undefined8 *)(param_3 + 9) >> 0x20),
                      fVar5 * (float)local_64 + (float)*(undefined8 *)(param_3 + 9));
        param_3[0xb] = fVar5 * local_5c + param_3[0xb];
        bVar2 = uVar3 < *(uint *)(param_2 + 9);
        uVar3 = uVar3 + 1;
      } while (bVar2);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




uint FUN_0198fb50(long *param_1,undefined8 *param_2,uint param_3,undefined4 param_4,ulong param_5)

{
  undefined8 *puVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  short *psVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  float fVar17;
  short asStack_80 [4];
  long local_78;
  
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  uVar7 = (ulong)*(uint *)(param_1 + 9);
  if (*(uint *)(param_1 + 9) == 0) {
    fVar17 = 0.0;
  }
  else {
    fVar17 = 0.0;
    plVar8 = param_1;
    do {
      plVar8 = plVar8 + 1;
      uVar7 = uVar7 - 1;
      fVar17 = fVar17 + *(float *)(*plVar8 + 0x10);
    } while (uVar7 != 0);
  }
  lVar13 = (long)asStack_80 - ((ulong)((uint)*(ushort *)(*param_1 + 2) * 2 + 0xf) & 0x3fff0);
  uVar6 = FUN_01995258(*param_1,param_4,lVar13);
  uVar7 = (ulong)uVar6;
  lVar12 = uVar7 * 2 + (ulong)uVar6;
  lVar14 = lVar13 + lVar12 * -0x10;
  lVar12 = lVar14 + lVar12 * -0x10;
  if ((int)param_1[9] == 0) {
    if (uVar6 != 0) {
      puVar10 = (undefined8 *)(lVar12 + 0x10);
      uVar15 = uVar7;
      do {
        puVar10[-1] = 0x3f80000000000000;
        puVar10[-2] = 0;
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[3] = 0x3f800000;
        puVar10[2] = 0x3f8000003f800000;
        uVar15 = uVar15 - 1;
        puVar10 = puVar10 + 6;
      } while (uVar15 != 0);
    }
  }
  else {
    plVar8 = (long *)param_1[1];
    (**(code **)(*plVar8 + 0x28))
              ((int)plVar8[1],*(undefined8 *)(*plVar8 + 0x10),*(int *)((long)plVar8 + 0x14) == 1,
               lVar13,uVar7,lVar12);
    FUN_01991284((1.0 / fVar17) * *(float *)(param_1[1] + 0x10),lVar12,uVar7);
    if (1 < *(uint *)(param_1 + 9)) {
      uVar15 = 2;
      do {
        plVar8 = (long *)param_1[uVar15];
        (**(code **)(*plVar8 + 0x28))
                  ((int)plVar8[1],*(undefined8 *)(*plVar8 + 0x10),*(int *)((long)plVar8 + 0x14) == 1
                   ,lVar13,uVar7,lVar14);
        if (*(int *)(param_1[uVar15] + 0xc) == 0) {
          FUN_019912f4((1.0 / fVar17) * *(float *)(param_1[uVar15] + 0x10),lVar12,lVar14,uVar7);
        }
        bVar5 = uVar15 < *(uint *)(param_1 + 9);
        uVar15 = uVar15 + 1;
      } while (bVar5);
    }
    uVar2 = *(ushort *)(param_1 + 0xd);
    if (((ulong)uVar2 != 0) && (uVar6 != 0)) {
      uVar15 = 0;
      do {
        sVar3 = *(short *)(lVar13 + uVar15 * 2);
        psVar9 = (short *)param_1[0xc];
        lVar14 = 0;
        puVar10 = (undefined8 *)(lVar12 + uVar15 * 0x30);
        uVar11 = (ulong)uVar2;
        do {
          if (sVar3 == *psVar9) {
            puVar1 = (undefined8 *)(param_1[0xb] + lVar14);
            uVar16 = puVar1[4];
            puVar10[5] = puVar1[5];
            puVar10[4] = uVar16;
            uVar16 = puVar1[2];
            puVar10[3] = puVar1[3];
            puVar10[2] = uVar16;
            uVar16 = *puVar1;
            puVar10[1] = puVar1[1];
            *puVar10 = uVar16;
          }
          psVar9 = psVar9 + 1;
          uVar11 = uVar11 - 1;
          lVar14 = lVar14 + 0x30;
        } while (uVar11 != 0);
        uVar15 = uVar15 + 1;
      } while (uVar15 != uVar7);
    }
  }
  if (uVar6 <= param_3) {
    param_3 = uVar6;
  }
  if ((param_5 & 1) != 0) {
    FUN_01990ce8(lVar12,lVar12,uVar7);
  }
  if (param_3 != 0) {
    uVar7 = 0;
    do {
      uVar6 = uVar6 - 1;
      puVar10 = (undefined8 *)(lVar12 + (ulong)uVar6 * 0x30);
      uVar16 = puVar10[4];
      uVar7 = uVar7 + 1;
      param_2[5] = puVar10[5];
      param_2[4] = uVar16;
      uVar16 = puVar10[2];
      param_2[3] = puVar10[3];
      param_2[2] = uVar16;
      uVar16 = *puVar10;
      param_2[1] = puVar10[1];
      *param_2 = uVar16;
      param_2 = param_2 + 6;
    } while (uVar7 < param_3);
  }
  if (*(long *)(lVar4 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_3;
}




void FUN_0198fe18(long param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = uVar1 + 1;
  *(undefined8 *)(param_1 + (ulong)uVar1 * 8 + 8) = param_2;
  return;
}




void FUN_0198fe30(long *param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  long *plVar4;
  uint uVar5;
  
  if (*(uint *)(param_1 + 9) != 0) {
    uVar5 = 1;
    plVar4 = param_1;
    do {
      plVar4 = plVar4 + 1;
      if (*plVar4 == param_2) {
        uVar3 = FUN_0198ff3c();
        FUN_01990384(uVar3,*plVar4);
        uVar1 = *(uint *)(param_1 + 9) - 1;
        if (*(uint *)(param_1 + 9) != uVar5) {
          *plVar4 = param_1[(ulong)uVar1 + 1];
        }
        *(uint *)(param_1 + 9) = uVar1;
        return;
      }
      bVar2 = uVar5 < *(uint *)(param_1 + 9);
      uVar5 = uVar5 + 1;
    } while (bVar2);
  }
  return;
}




undefined4 FUN_0198feb0(long param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}




void FUN_0198feb8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x50) = param_2;
  return;
}




void FUN_0198fec0(long param_1,undefined8 param_2,undefined8 param_3,undefined2 param_4)

{
  *(undefined8 *)(param_1 + 0x58) = param_2;
  *(undefined8 *)(param_1 + 0x60) = param_3;
  *(undefined2 *)(param_1 + 0x68) = param_4;
  return;
}




void FUN_0198fecc(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0xf0d060);
  FUN_0198ff48();
  DAT_03214f38 = pvVar1;
  return;
}




void FUN_0198ff00(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03214f38;
  if (DAT_03214f38 != (void *)0x0) {
    FUN_0198fff0(DAT_03214f38);
    operator_delete(pvVar1);
  }
  DAT_03214f38 = (void *)0x0;
  return;
}




void FUN_0198ff38(void)

{
  return;
}




undefined8 FUN_0198ff3c(void)

{
  return DAT_03214f38;
}




void FUN_0198ff48(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = param_1 + 1;
  lVar2 = 1;
  puVar1 = param_1 + 4;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 6;
  } while (lVar2 != 0x200);
  param_1[0xc04] = 0x1ff0000;
  lVar2 = 1;
  puVar1 = param_1 + 0xc06;
  do {
    *(short *)puVar1 = (short)lVar2;
    lVar2 = lVar2 + 1;
    puVar1 = puVar1 + 7;
  } while (lVar2 != 0x200);
  param_1[0x1a06] = 0x1ff0000;
  param_1[0x1e1a09] = thunk_FUN_01991574;
  param_1[0x1e1a08] = param_1 + 0x1a08;
  param_1[0x1a09] = 0;
  param_1[0x1a08] = 0;
  *(undefined1 *)(param_1 + 0x1a0a) = 0;
  param_1[0x1e1a0a] = 0;
  return;
}




void FUN_0198fff0(long param_1)

{
  FUN_01990a7c(param_1,*(undefined8 *)(param_1 + 8));
  return;
}




void FUN_0198fff8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x18) = param_2;
  return;
}

