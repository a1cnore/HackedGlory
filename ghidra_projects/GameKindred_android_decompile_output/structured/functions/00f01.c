// functions/00f01 — 28 functions
#include "libGameKindred.h"




void thunk_FUN_00f01980(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_00efc90c(plVar1);
    plVar1 = plVar2;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_00f01000(long param_1)

{
  *(undefined8 *)(param_1 + 0x180) = 0;
  FUN_019a0844(param_1 + (ulong)*(uint *)(param_1 + 0x188) * 0x70 + 0x18,0x31,
               *(int *)(param_1 + 0x168) * 0x18);
  return;
}




void FUN_00f0102c(void)

{
  return;
}




void FUN_00f01030(void)

{
  return;
}




void FUN_00f01038(void)

{
  return;
}




void FUN_00f0103c(void)

{
  return;
}




void FUN_00f01040(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  if (DAT_03215620 != param_1) {
    uVar4 = (uint)param_1;
    uVar5 = (ulong)(uVar4 & 3);
    if (((uint)DAT_03215620 & 3) != (uVar4 & 3)) {
      if ((param_1 & 3) == 0) {
        glDisable(0xb44);
        uVar5 = 0;
      }
      else {
        if ((DAT_03215620 & 3) == 0) {
          glEnable(0xb44);
        }
        glFrontFace(0x901);
        glCullFace(*(undefined4 *)(&DAT_01bf3f08 + uVar5 * 4));
      }
      DAT_03215620 = DAT_03215620 & 0xfffffffffffffffc | uVar5;
    }
    uVar1 = (uint)(param_1 >> 2) & 7;
    if ((((uint)DAT_03215620 >> 2 & 7) != uVar1) ||
       ((uint)((param_1 & 0x20) != 0) != ((uint)(DAT_03215620 >> 5) & 1))) {
      glColorMask(param_1 >> 2 & 1,(uVar4 & 0xff) >> 3 & 1,(uVar4 & 0xff) >> 4 & 1,param_1 >> 5 & 1)
      ;
      DAT_03215620 = param_1 & 0x20 | (ulong)(uVar1 << 2) | DAT_03215620 & 0xffffffffffffffc3;
    }
    if (((uint)(param_1 >> 6) & 1) != ((uint)(DAT_03215620 >> 6) & 1)) {
      glDepthMask((param_1 & 0x40) >> 6);
      DAT_03215620 = DAT_03215620 & 0xffffffffffffffbf | param_1 & 0x40;
    }
    uVar1 = uVar4 >> 7 & 7;
    uVar2 = (uint)DAT_03215620 >> 7 & 7;
    if (uVar2 != uVar1) {
      if (uVar1 == 7) {
        glDisable(0xb71);
      }
      else {
        if (uVar2 == 7) {
          glEnable(0xb71);
        }
        glDepthFunc(*(undefined4 *)(&DAT_01bf3f28 + (ulong)uVar1 * 4));
      }
      DAT_03215620 = DAT_03215620 & 0xfffffffffffffc7f | (ulong)(uVar1 << 7);
    }
    uVar1 = uVar4 >> 0x10 & 0xf;
    uVar3 = (uint)DAT_03215620;
    uVar2 = uVar4 >> 0x14 & 0xf;
    uVar4 = uVar4 >> 0x18 & 0xf;
    uVar5 = param_1 >> 0x1c & 0xf;
    uVar6 = (uint)uVar5;
    if (((((uVar3 >> 0x10 & 0xf) != uVar1) || ((uVar3 >> 0x14 & 0xf) != uVar2)) ||
        ((uVar3 >> 0x18 & 0xf) != uVar4)) || (((uint)(DAT_03215620 >> 0x1c) & 0xf) != uVar6)) {
      if (((uVar1 == 1) && (uVar4 == 1)) && (uVar6 == 0 && uVar2 == 0)) {
        glDisable(0xbe2);
      }
      else {
        if ((undefined *)(DAT_03215620 & 0xffff0000) == &UNK_01010000) {
          glEnable(0xbe2);
        }
        glBlendFuncSeparate(*(undefined4 *)(&DAT_01bf3f48 + (ulong)uVar1 * 4),
                            *(undefined4 *)(&DAT_01bf3f48 + (ulong)uVar2 * 4),
                            *(undefined4 *)(&DAT_01bf3f48 + (ulong)uVar4 * 4),
                            *(undefined4 *)(&DAT_01bf3f48 + uVar5 * 4));
      }
      DAT_03215620._0_4_ =
           CONCAT22((ushort)(param_1 >> 0x10) & 0xf000 | (ushort)uVar1 |
                    (ushort)((uVar2 << 0x14) >> 0x10) | (ushort)((uVar4 << 0x18) >> 0x10),
                    (undefined2)DAT_03215620);
    }
  }
  return;
}




void FUN_00f01264(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  
  iVar1 = *param_2;
  iVar2 = (&DAT_03215650)[(ulong)param_1 * 3];
  if ((DAT_0321564c != param_1) &&
     ((iVar1 != iVar2 || ((*(byte *)((long)param_2 + 0x11) >> 1 & 1) != 0)))) {
    glActiveTexture(param_1 + 0x84c0);
    DAT_0321564c = param_1;
  }
  if ((int)(short)param_2[1] != *(int *)(&DAT_03215654 + (ulong)param_1 * 0xc)) {
    *(int *)(&DAT_03215654 + (ulong)param_1 * 0xc) = (int)(short)param_2[1];
  }
  if (iVar1 != iVar2) {
    (&DAT_03215650)[(ulong)param_1 * 3] = *param_2;
    glBindTexture((long)(short)param_2[1]);
  }
  uVar3 = *(ulong *)(param_2 + 3);
  if ((uVar3 >> 0x29 & 1) != 0) {
    if ((short)param_2[1] == 0xde1) {
      glTexParameteri(0xde1,0x2802,*(undefined4 *)(&DAT_01bf3f60 + (uVar3 >> 0x20 & 3) * 4));
      glTexParameteri((long)(short)param_2[1],0x2803,
                      *(undefined4 *)(&DAT_01bf3f60 + (*(ulong *)(param_2 + 3) >> 0x22 & 3) * 4));
      uVar3 = *(ulong *)(param_2 + 3);
    }
    uVar5 = uVar3 >> 0x26 & 1;
    if ((uVar3 & 0xe0000000) == 0) {
      puVar4 = (undefined4 *)(&DAT_01bf3f88 + uVar5 * 4);
    }
    else {
      puVar4 = (undefined4 *)(&UNK_01bf3f18 + (uVar3 >> 0x28 & 1) * 4 + uVar5 * 8);
    }
    glTexParameteri((long)(short)param_2[1],0x2801,*puVar4);
    glTexParameteri((long)(short)param_2[1],0x2800,
                    *(undefined4 *)(&DAT_01bf3f88 + (*(ulong *)(param_2 + 3) >> 0x27 & 1) * 4));
    *(ulong *)(param_2 + 3) = *(ulong *)(param_2 + 3) & 0xfffffdffffffffff;
  }
  return;
}




void FUN_00f013dc(long param_1,uint param_2,uint param_3)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  uint uVar6;
  byte *pbVar7;
  long lVar8;
  int iVar9;
  
  uVar6 = param_2 & (param_3 ^ 0xffffffff) & (uint)*(ushort *)(param_1 + 100);
  if (0xf < *(byte *)(param_1 + 0x68)) {
    uVar4 = 0;
    puVar5 = (ulong *)(param_1 + 0x20);
    do {
      if ((*puVar5 >> 0x3e & 1) == 0) {
        uVar6 = ~(uint)(*puVar5 >> 0x20) & uVar6;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 3;
    } while (uVar4 < *(byte *)(param_1 + 0x68) >> 4);
  }
  if ((DAT_03215640 != param_1) || (DAT_03215648 != uVar6)) {
    uVar4 = 0;
    pbVar7 = (byte *)(param_1 + 1);
    iVar9 = -1;
    do {
      uVar3 = 1 << (ulong)((uint)uVar4 & 0x1f);
      if ((uVar3 & param_3 & 0xffff) == 0) {
        if ((uVar3 & uVar6) == 0) {
          if ((DAT_03215634 & uVar3) != 0) {
            DAT_03215634 = DAT_03215634 & (uVar3 ^ 0xffffffff);
            glDisableVertexAttribArray(uVar4 & 0xffffffff);
          }
        }
        else {
          if ((DAT_03215634 & uVar3) == 0) {
            DAT_03215634 = DAT_03215634 | uVar3;
            glEnableVertexAttribArray(uVar4 & 0xffffffff);
          }
          bVar1 = *pbVar7;
          lVar8 = param_1 + (ulong)(bVar1 >> 6) * 0x18;
          if (iVar9 == *(int *)(lVar8 + 0x20)) {
            uVar2 = *(undefined1 *)(lVar8 + 0x2b);
          }
          else {
            glBindBuffer(0x8892);
            iVar9 = *(int *)(lVar8 + 0x20);
            uVar2 = *(undefined1 *)(lVar8 + 0x2b);
            bVar1 = *pbVar7;
          }
          glVertexAttribPointer
                    (uVar4 & 0xffffffff,bVar1 >> 3 & 7,
                     *(undefined4 *)(&DAT_01bf3f6c + ((ulong)bVar1 & 7) * 4),4 < (bVar1 & 7),uVar2,
                     pbVar7[-1]);
        }
      }
      uVar4 = uVar4 + 1;
      pbVar7 = pbVar7 + 2;
    } while (uVar4 != 0xc);
    DAT_03215648 = DAT_03215648 & param_3 & 0xffff | uVar6;
    DAT_03215640 = param_1;
  }
  return;
}




/* WARNING: Type propagation algorithm not settling */

void FUN_00f01570(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 4);
  FUN_0199f968(uVar1);
  if ((uVar1 >> 1 & 1) != 0) {
    glUniformMatrix4fv(*(undefined1 *)(param_1 + 8),1,0,&DAT_032154b8);
  }
  if ((uVar1 >> 3 & 1) != 0) {
    glUniformMatrix4fv(*(uint *)(param_1 + 8) >> 8 & 0xff,1,0,&DAT_03215578);
  }
  if ((uVar1 >> 4 & 1) != 0) {
    glUniformMatrix4fv(*(undefined1 *)(param_1 + 10),1,0,&DAT_032155b8);
  }
  if ((uVar1 >> 2 & 1) != 0) {
    glUniformMatrix4fv(*(undefined1 *)(param_1 + 0xb),1,0,&DAT_03215538);
  }
  if ((uVar1 >> 5 & 1) != 0) {
    glUniformMatrix3fv(*(undefined1 *)(param_1 + 0xc),1,0,&DAT_032155f8);
  }
  if ((((uVar1 >> 6 & 1) != 0) && (0 < DAT_03215380)) && (DAT_03215378 != 0)) {
    glUniformMatrix4fv(*(ulong *)(param_1 + 8) >> 0x28 & 0xff,DAT_03215380,0);
  }
  if ((uVar1 >> 7 & 1) != 0) {
    glUniformMatrix4fv(*(undefined1 *)(param_1 + 0xe),1,0,&DAT_032154f8);
  }
  if ((uVar1 & 1) != 0) {
    glUniformMatrix4fv(*(undefined1 *)(param_1 + 0xf),1,0,&DAT_03215478);
  }
  DAT_03215378 = 0;
  DAT_03215380 = 0;
  return;
}




long FUN_00f016d4(undefined8 *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  void *pvVar3;
  undefined8 uVar4;
  void *pvVar5;
  
  pvVar5 = (void *)*param_1;
  if (pvVar5 != (void *)0x0) {
    puVar1 = (uint *)((long)pvVar5 + 0x20000);
    uVar2 = *puVar1;
    pvVar3 = pvVar5;
    if (param_2 <= uVar2) goto LAB_00f01760;
  }
  pvVar3 = (void *)param_1[1];
  if (pvVar3 == (void *)0x0) {
    pvVar3 = operator_new(0x20010);
    puVar1 = (uint *)((long)pvVar3 + 0x20000);
    uVar2 = 0x20000;
    *puVar1 = 0x20000;
    *(void **)((long)pvVar3 + 0x20008) = pvVar5;
    *param_1 = pvVar3;
  }
  else {
    uVar4 = *(undefined8 *)((long)pvVar3 + 0x20008);
    puVar1 = (uint *)((long)pvVar3 + 0x20000);
    uVar2 = 0x20000;
    *(void **)((long)pvVar3 + 0x20008) = pvVar5;
    *param_1 = pvVar3;
    param_1[1] = uVar4;
    *puVar1 = 0x20000;
  }
LAB_00f01760:
  *puVar1 = uVar2 - param_2;
  return (long)pvVar3 + (0x20000 - (ulong)uVar2);
}




void FUN_00f01780(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f017ac(undefined8 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = _DAT_03218ef8;
  param_1[1] = _DAT_03218ef8;
  uVar1 = DAT_03218f00;
  *(undefined4 *)(param_1 + 3) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x1c) = 0xffffffffffffffff;
  param_1[2] = uVar1;
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f017e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_00f0467c();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_028253d8;
  uVar2 = DAT_03218f00;
  uVar1 = _DAT_03218ef8;
  *(undefined4 *)(param_1 + 0xf) = 0x3f800000;
  *(undefined8 *)((long)param_1 + 0x7c) = 0xffffffffffffffff;
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar1;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  *(uint *)((long)param_1 + 0x84) = *(uint *)((long)param_1 + 0x84) & 0x80000000 | 0x7fcd;
  return;
}




void FUN_00f01868(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_028253d8;
  FUN_00f018bc(param_1,0);
  *param_1 = &PTR_FUN_02825520;
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}




void FUN_00f018bc(long *param_1,uint param_2)

{
  ulong uVar1;
  
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  FUN_00f04710(param_1);
  FUN_00f01980(param_1);
  FUN_00f033ac(param_1);
  FUN_00f019d4(param_1,param_2 & 1);
  if (param_1[4] != 0) {
    FUN_00f01a4c(param_1,param_2 & 1);
  }
  uVar1 = FUN_00f004ac(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_00f00478(param_1);
  }
  uVar1 = FUN_00f004ec(param_1);
  if ((uVar1 & 1) != 0) {
    FUN_00f0050c(param_1);
    return;
  }
  return;
}




void FUN_00f0195c(void *param_1)

{
  FUN_00f01868();
  operator_delete(param_1);
  return;
}




void FUN_00f01980(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = *(long **)(param_1 + 0x38);
  while (plVar1 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar1 + 0x28))(plVar1);
    FUN_00efc90c(plVar1);
    plVar1 = plVar2;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_00f019d4(long *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  
  if ((param_2 & 1) != 0) {
    (**(code **)(*param_1 + 0xa0))(param_1);
  }
  if ((long *)param_1[5] != (long *)0x0) {
    plVar1 = (long *)param_1[5];
    do {
      plVar2 = (long *)plVar1[6];
      FUN_00f018bc(plVar1,param_2 & 1);
      if ((*(byte *)((long)plVar1 + 0x84) >> 5 & 1) != 0) {
        (**(code **)(*plVar1 + 8))(plVar1);
      }
      plVar1 = plVar2;
    } while (plVar2 != (long *)0x0);
  }
  return;
}




void FUN_00f01a4c(long *param_1,ulong param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)param_1[4];
  if ((long *)plVar2[5] != (long *)0x0) {
    plVar1 = (long *)plVar2[5];
    plVar4 = (long *)0x0;
    do {
      plVar3 = plVar1;
      if (plVar3 == param_1) {
        if ((param_2 & 1) != 0) {
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0xc0))(plVar2,param_1);
          }
          (**(code **)(*param_1 + 0xb0))(param_1);
        }
        FUN_00f04824(param_1,0);
        if (*(long **)(param_1[4] + 0x28) == param_1) {
          *(long *)(param_1[4] + 0x28) = param_1[6];
        }
        if (plVar4 != (long *)0x0) {
          plVar4[6] = param_1[6];
        }
        param_1[6] = 0;
        param_1[4] = 0;
        return;
      }
      plVar1 = (long *)plVar3[6];
      plVar4 = plVar3;
    } while ((long *)plVar3[6] != (long *)0x0);
  }
  return;
}




void FUN_00f01af4(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffff7;
  FUN_00f018bc(param_1,0);
  *(uint *)(param_1 + 0x84) = *(uint *)(param_1 + 0x84) & 0xfffffffd;
  local_30 = param_1;
  FUN_00adcf84(&DAT_03210f38,&local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f01b6c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  while (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x30);
    FUN_00f01af4();
  }
  return;
}




void FUN_00f01b9c(void)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  
  if (DAT_03210f38 != 0) {
    uVar3 = 0;
    uVar2 = DAT_03210f38;
    do {
      plVar1 = *(long **)(DAT_03210f40 + uVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        uVar2 = DAT_03210f38;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar2);
  }
  if (DAT_03210f40 != 0) {
    DAT_03210f38 = 0;
  }
  return;
}




undefined4 FUN_00f01c10(void)

{
  return DAT_03218ef8;
}




float FUN_00f01c20(long *param_1)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x48))();
  return fVar1 * *(float *)(param_1 + 9);
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00f01c54(long *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  ulong uVar2;
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  ulong uStack_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_58 = _DAT_03218ef8;
  uStack_50 = local_58;
  uVar2 = FUN_00f01d54(param_1,&uStack_50,&local_58,param_2 & 1,param_3 & 1,param_4 & 1,param_5 & 1)
  ;
  if (((((uVar2 & 1) != 0) || ((param_3 & 1) != 0)) && ((param_3 & 1) != 0)) &&
     (((param_2 & 1) == 0 || ((~*(uint *)((long)param_1 + 0x84) & 0xc) == 0)))) {
    local_68 = 0;
    uStack_60 = 0;
    (**(code **)(*param_1 + 0x70))(param_1,&uStack_60,&local_68);
    uStack_50 = uStack_60 ^
                (uStack_60 ^ uStack_50) &
                CONCAT44(-(uint)((float)(uStack_50 >> 0x20) < (float)(uStack_60 >> 0x20)),
                         -(uint)((float)uStack_50 < (float)uStack_60));
    local_58 = local_68 ^
               (local_68 ^ local_58) &
               CONCAT44(-(uint)((float)(local_68 >> 0x20) < (float)(local_58 >> 0x20)),
                        -(uint)((float)local_68 < (float)local_58));
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00f01d54(long *param_1,float *param_2,float *param_3,byte param_4,uint param_5,uint param_6,
                ulong param_7)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  iVar3 = 0;
  *(ulong *)param_2 = _DAT_03218ef8;
  *(ulong *)param_3 = _DAT_03218ef8;
  for (plVar2 = (long *)param_1[5]; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[6]) {
    if ((((*(uint *)((long)plVar2 + 0x84) >> 6 & 1) != 0) || ((param_6 & 1) != 0)) &&
       ((((*(uint *)((long)plVar2 + 0x84) ^ 0xffffffff) & 0xc) != 0 & param_4) == 0)) {
      (**(code **)(*plVar2 + 0x70))(plVar2,&local_70,&local_78);
      local_70 = *(float *)(plVar2 + 9) * local_70 + *(float *)(plVar2 + 8);
      fStack_6c = *(float *)((long)plVar2 + 0x4c) * fStack_6c + *(float *)((long)plVar2 + 0x44);
      local_78 = *(float *)(plVar2 + 9) * local_78 + *(float *)(plVar2 + 8);
      fStack_74 = *(float *)((long)plVar2 + 0x4c) * fStack_74 + *(float *)((long)plVar2 + 0x44);
      if (iVar3 == 0) {
        *(ulong *)param_2 = CONCAT44(fStack_6c,local_70);
        *(ulong *)param_3 = CONCAT44(fStack_74,local_78);
      }
      else {
        fVar5 = *param_2;
        if (local_70 <= *param_2) {
          fVar5 = local_70;
        }
        fVar6 = param_2[1];
        if (fStack_6c <= param_2[1]) {
          fVar6 = fStack_6c;
        }
        *param_2 = fVar5;
        param_2[1] = fVar6;
        fVar5 = *param_3;
        if (*param_3 <= local_78) {
          fVar5 = local_78;
        }
        fVar6 = param_3[1];
        if (param_3[1] <= fStack_74) {
          fVar6 = fStack_74;
        }
        *param_3 = fVar5;
        param_3[1] = fVar6;
      }
      if (((param_7 & 1) != 0) &&
         (uVar4 = FUN_00f01d54(plVar2,&local_70,&local_78,param_4 & 1,0,param_6 & 1,1),
         (uVar4 & 1) != 0)) {
        local_70 = *(float *)(plVar2 + 9) * local_70 + *(float *)(plVar2 + 8);
        fStack_6c = *(float *)((long)plVar2 + 0x4c) * fStack_6c + *(float *)((long)plVar2 + 0x44);
        local_78 = *(float *)(plVar2 + 9) * local_78 + *(float *)(plVar2 + 8);
        fStack_74 = *(float *)((long)plVar2 + 0x4c) * fStack_74 + *(float *)((long)plVar2 + 0x44);
        fVar5 = *param_2;
        if (local_70 <= *param_2) {
          fVar5 = local_70;
        }
        fVar6 = param_2[1];
        if (fStack_6c <= param_2[1]) {
          fVar6 = fStack_6c;
        }
        *param_2 = fVar5;
        param_2[1] = fVar6;
        fVar5 = *param_3;
        if (*param_3 <= local_78) {
          fVar5 = local_78;
        }
        fVar6 = param_3[1];
        if (param_3[1] <= fStack_74) {
          fVar6 = fStack_74;
        }
        *param_3 = fVar5;
        param_3[1] = fVar6;
      }
      iVar3 = 1;
    }
  }
  if (((param_5 & 1) != 0) &&
     (((param_4 & 1) == 0 || ((*(byte *)((long)param_1 + 0x84) >> 2 & 1) != 0)))) {
    (**(code **)(*param_1 + 0x70))(param_1,&local_70,&local_78);
    if (iVar3 == 0) {
      *(ulong *)param_2 = CONCAT44(fStack_6c,local_70);
      *(ulong *)param_3 = CONCAT44(fStack_74,local_78);
    }
    else {
      uVar4 = *(ulong *)param_2;
      *(ulong *)param_2 =
           CONCAT44(fStack_6c,local_70) ^
           (CONCAT44(fStack_6c,local_70) ^ uVar4) &
           CONCAT44(-(uint)((float)(uVar4 >> 0x20) < fStack_6c),-(uint)((float)uVar4 < local_70));
      uVar4 = *(ulong *)param_3;
      *(ulong *)param_3 =
           CONCAT44(fStack_74,local_78) ^
           (CONCAT44(fStack_74,local_78) ^ uVar4) &
           CONCAT44(-(uint)(fStack_74 < (float)(uVar4 >> 0x20)),-(uint)(local_78 < (float)uVar4));
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




float FUN_00f01fcc(long *param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  float fVar1;
  
  fVar1 = (float)(**(code **)(*param_1 + 0x58))
                           (param_1,param_2 & 1,param_3 & 1,param_4 & 1,param_5 & 1);
  return fVar1 * *(float *)(param_1 + 9);
}

