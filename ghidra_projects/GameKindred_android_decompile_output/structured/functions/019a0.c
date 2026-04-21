// functions/019a0 — 31 functions
#include "libGameKindred.h"




void FUN_019a01cc(long param_1,uint param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  FUN_019a09bc(param_2,param_3,param_4);
  uVar3 = *(uint *)(param_1 + 4);
  uVar2 = param_3 & 0x3fff | (param_4 & 0x3fff) << 0xe;
  *(uint *)(param_1 + 4) = uVar3 & 0xffe00000 | uVar3 & 0xffff | (param_2 & 0x1f) << 0x10;
  *(uint *)(param_1 + 8) = uVar2 | *(uint *)(param_1 + 8) & 0xf0000000;
  uVar4 = *(undefined4 *)(&DAT_01e1c108 + (ulong)param_2 * 0x10);
  *(ulong *)(param_1 + 0xc) =
       *(ulong *)(param_1 + 0xc) & 0xffffffff00000000 | (ulong)uVar2 | 0x10000000;
  if ((param_2 < 0xd) && ((1 << (ulong)(param_2 & 0x1f) & 0x179cU) != 0)) {
    glCompressedTexImage2D((int)(short)uVar3,0,uVar4,param_3,param_4,0,0,0);
    return;
  }
  lVar1 = (ulong)param_2 * 0x10;
  glTexImage2D((int)(short)uVar3,0,uVar4,param_3,param_4,0,*(undefined4 *)(&DAT_01e1c10c + lVar1),
               *(undefined4 *)(&DAT_01e1c110 + lVar1),0);
  return;
}




void FUN_019a02cc(long param_1,uint param_2,uint param_3,uint param_4)

{
  *(ulong *)(param_1 + 0xc) =
       (ulong)(param_3 & 3) << 0x22 | (ulong)(param_2 & 3) << 0x20 | (ulong)(param_4 & 3) << 0x24 |
       *(ulong *)(param_1 + 0xc) & 0xffffffc0ffffffff | 0x20000000000;
  return;
}




void FUN_019a02fc(long param_1,uint param_2,uint param_3,uint param_4)

{
  *(ulong *)(param_1 + 0xc) =
       (ulong)(param_3 & 1) << 0x27 | (ulong)(param_2 & 1) << 0x26 | (ulong)(param_4 & 1) << 0x28 |
       *(ulong *)(param_1 + 0xc) & 0xfffffc3fffffffff | 0x20000000000;
  return;
}




void FUN_019a032c(void)

{
  return;
}




void FUN_019a0330(undefined8 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return;
}




void FUN_019a033c(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x18);
  do {
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar2 = puVar1 + 3;
    *puVar1 = 0;
    puVar1[1] = puVar1[1] & 0xfff000000000000;
    puVar1 = puVar2;
  } while (puVar2 != (undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  return;
}




void FUN_019a0368(long param_1)

{
  if (*(int *)(param_1 + 0x60) != 0) {
    FUN_019a0378();
    return;
  }
  return;
}




void FUN_019a0378(long param_1)

{
  long lVar1;
  ulong uVar2;
  ulong *puVar3;
  int local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (0xf < *(byte *)(param_1 + 0x68)) {
    uVar2 = 0;
    puVar3 = (ulong *)(param_1 + 0x20);
    do {
      if ((int)*puVar3 != 0) {
        local_3c = (int)*puVar3;
        glDeleteBuffers(1,&local_3c);
        *puVar3 = *puVar3 & 0xffffffff00000000;
      }
      if ((void *)puVar3[-1] != (void *)0x0) {
        operator_delete__((void *)puVar3[-1]);
        puVar3[-1] = 0;
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < *(byte *)(param_1 + 0x68) >> 4);
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (DAT_03215640 == param_1) {
    DAT_03215640 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019a0440(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x60) = param_2;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}




ulong FUN_019a044c(long param_1,void *param_2,uint param_3,ulong param_4,int param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  void *__dest;
  uint uVar4;
  ulong uVar5;
  ulong __n;
  long lVar6;
  ulong *puVar7;
  undefined4 local_5c;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  __n = (ulong)param_3;
  uVar2 = (ulong)(*(byte *)(param_1 + 0x68) >> 4);
  lVar6 = param_1 + uVar2 * 0x18;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) + 0x10;
  *(undefined8 *)(lVar6 + 0x18) = 0;
  puVar7 = (ulong *)(lVar6 + 0x20);
  uVar5 = *puVar7;
  uVar4 = param_3 & 0xffffff | param_5 << 0x18;
  uVar3 = (param_4 & 0xffffffff) << 0x3c;
  *(uint *)(lVar6 + 0x28) = uVar4;
  *puVar7 = uVar5 & 0xfff0000ffffffff | uVar3;
  local_5c = 0;
  if (((uint)param_4 >> 2 & 1) == 0) {
    *(uint *)(lVar6 + 0x28) = uVar4;
    *puVar7 = uVar5 & 0xfff000000000000 | uVar3;
    __dest = operator_new__(__n);
    *(undefined8 *)(lVar6 + 0x18) = __dest;
    if (param_2 != (void *)0x0) {
      memcpy(__dest,param_2,__n);
    }
  }
  else {
    glGenBuffers(1,&local_5c);
    *(undefined4 *)puVar7 = local_5c;
    FUN_019a056c(param_1,param_2,uVar2,__n,param_4 & 0xffffffff);
  }
  DAT_03215640 = 0;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019a056c(long param_1,void *param_2,ulong param_3,uint param_4,uint param_5)

{
  char *pcVar1;
  void *__dest;
  ulong __n;
  long lVar2;
  undefined8 *puVar3;
  
  __n = (ulong)param_4;
  pcVar1 = (char *)FUN_0199d920();
  if (*pcVar1 != '\0') goto LAB_019a0608;
  lVar2 = param_1 + (param_3 & 0xffffffff) * 0x18;
  puVar3 = (undefined8 *)(lVar2 + 0x18);
  __dest = (void *)*puVar3;
  if (__dest == (void *)0x0) {
LAB_019a05e0:
    __dest = operator_new__(__n);
    *puVar3 = __dest;
    *(uint *)(lVar2 + 0x28) = *(uint *)(lVar2 + 0x28) & 0xff000000 | param_4 & 0xffffff;
  }
  else if ((*(uint *)(lVar2 + 0x28) & 0xffffff) != param_4) {
    operator_delete__(__dest);
    *puVar3 = 0;
    goto LAB_019a05e0;
  }
  if (param_2 != (void *)0x0) {
    memmove(__dest,param_2,__n);
  }
LAB_019a0608:
  glBindBuffer(0x8892,*(undefined4 *)(param_1 + (param_3 & 0xffffffff) * 0x18 + 0x20));
  glBufferData(0x8892,__n,param_2,(param_5 & 2) << 1 ^ 0x88e4);
  return;
}




void FUN_019a0644(long param_1,void *param_2,uint param_3,uint param_4)

{
  void *__dest;
  
  __dest = operator_new__((ulong)param_4);
  *(void **)(param_1 + (ulong)param_3 * 0x18 + 0x18) = __dest;
  if (param_2 != (void *)0x0) {
    memcpy(__dest,param_2,(ulong)param_4);
    return;
  }
  return;
}




void FUN_019a06a4(long param_1,uint param_2,uint param_3,uint param_4,uint param_5,
                 undefined1 param_6,uint param_7)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  ulong uVar6;
  
  lVar4 = param_1 + (ulong)param_3 * 0x18;
  puVar5 = (ulong *)(lVar4 + 0x20);
  uVar6 = *puVar5;
  uVar3 = 1 << (ulong)(param_2 & 0x1f);
  uVar6 = uVar6 & 0xffff000000000000 |
          uVar6 & 0xffffffff | (ulong)((uVar3 | (uint)(uVar6 >> 0x20)) & 0xffff) << 0x20;
  *puVar5 = uVar6;
  if ((param_7 & 1) != 0) {
    iVar2 = *(int *)(&DAT_01e1c298 + (ulong)param_4 * 4);
    *puVar5 = uVar6;
    *(uint *)(lVar4 + 0x28) =
         *(uint *)(lVar4 + 0x28) & 0xffffff |
         (iVar2 * param_5 + (*(uint *)(lVar4 + 0x28) >> 0x18)) * 0x1000000;
  }
  puVar1 = (undefined1 *)(param_1 + (ulong)param_2 * 2);
  *puVar1 = param_6;
  puVar1[1] = (byte)(param_3 << 6) | (byte)((param_5 & 7) << 3);
  *(ushort *)(param_1 + 100) = *(ushort *)(param_1 + 100) | (ushort)uVar3;
  *(byte *)(param_1 + 0x68) = *(byte *)(param_1 + 0x68) & 0xf0 | *(byte *)(param_1 + 0x68) + 1 & 0xf
  ;
  return;
}




void FUN_019a072c(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  param_1 = param_1 + (ulong)param_2 * 0x18;
  uVar1 = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x28) = uVar1 & 0xffffff | (param_3 + (uVar1 >> 0x18)) * 0x1000000;
  return;
}




void FUN_019a0748(long param_1,ushort param_2,uint param_3)

{
  char *pcVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  param_2 = *(ushort *)(param_1 + 100) & param_2;
  *(ushort *)(param_1 + 0x66) = *(ushort *)(param_1 + 0x66) | param_2;
  if (0xf < *(byte *)(param_1 + 0x68)) {
    uVar2 = 0;
    puVar3 = (undefined8 *)(param_1 + 0x20);
    do {
      if ((((uint)((ulong)*puVar3 >> 0x20) & (uint)param_2) != 0) && ((int)*puVar3 != 0)) {
        glBindBuffer(0x8892);
        uVar4 = *puVar3;
        pcVar1 = (char *)FUN_0199d920();
        if (*pcVar1 != '\0') {
          if ((param_3 >> 2 & 1) != 0) {
            glBufferData(0x8892,*(uint *)(puVar3 + 1) & 0xffffff,0,
                         (uint)((ulong)uVar4 >> 0x3b) & 4 ^ 0x88e4);
          }
          uVar4 = glMapBufferOES(0x8892,0x88b9);
          puVar3[-1] = uVar4;
        }
      }
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 3;
    } while (uVar2 < *(byte *)(param_1 + 0x68) >> 4);
  }
  return;
}




uint FUN_019a0828(uint param_1)

{
  return (param_1 & 2) << 1 ^ 0x88e4;
}




undefined8 FUN_019a083c(void)

{
  return 0x88b9;
}




void FUN_019a0844(long param_1,uint param_2,uint param_3)

{
  char *pcVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  
  param_2 = *(ushort *)(param_1 + 100) & param_2;
  *(ushort *)(param_1 + 0x66) = *(ushort *)(param_1 + 0x66) & ((ushort)param_2 ^ 0xffff);
  if (0xf < *(byte *)(param_1 + 0x68)) {
    uVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 0x20);
    do {
      uVar2 = (uint)((ulong)*puVar4 >> 0x20);
      if ((((uVar2 & param_2) != 0) && ((*(ushort *)(param_1 + 0x66) & uVar2) == 0)) &&
         ((int)*puVar4 != 0)) {
        glBindBuffer(0x8892);
        pcVar1 = (char *)FUN_0199d920();
        if (*pcVar1 == '\0') {
          uVar2 = *(uint *)(puVar4 + 1) & 0xffffff;
          if (param_3 <= (*(uint *)(puVar4 + 1) & 0xffffff) && -1 < (int)param_3) {
            uVar2 = param_3;
          }
          glBufferData(0x8892,uVar2,puVar4[-1],(uint)((ulong)*puVar4 >> 0x3b) & 4 ^ 0x88e4);
        }
        else {
          glUnmapBufferOES(0x8892);
          puVar4[-1] = 0;
        }
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 3;
    } while (uVar3 < *(byte *)(param_1 + 0x68) >> 4);
  }
  return;
}




void FUN_019a0934(undefined8 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return;
}




void FUN_019a0940(void)

{
  return;
}




void FUN_019a0944(void)

{
  void *pvVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    pvVar1 = *(void **)((long)&DAT_032157d8 + lVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_0199fb94(pvVar1);
      operator_delete(pvVar1);
    }
    *(undefined8 *)((long)&DAT_032157d8 + lVar2) = 0;
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0x18);
  return;
}




undefined8 FUN_019a0998(ulong param_1)

{
  return (&DAT_032157d8)[param_1 & 0xffffffff];
}




undefined4 FUN_019a09a8(ulong param_1)

{
  return *(undefined4 *)(&DAT_01e1c310 + (param_1 & 0xffffffff) * 0x10);
}




uint FUN_019a09bc(ulong param_1,int param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  
  if ((param_1 & 0xffffffff) - 0x11 < 4) {
    return 0xffffffff;
  }
  lVar1 = (param_1 & 0xffffffff) * 0x10;
  uVar2 = (uint)(param_3 * param_2 * *(int *)(&DAT_01e1c30c + lVar1)) >> 3;
  if (uVar2 <= *(uint *)(&DAT_01e1c314 + lVar1)) {
    uVar2 = *(uint *)(&DAT_01e1c314 + lVar1);
  }
  return uVar2;
}




void FUN_019a0a00(long param_1,int param_2,int param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_3 * param_2 != 0) {
    uVar2 = (ulong)(uint)(param_3 * param_2);
    uVar3 = 3;
    uVar4 = 2;
    do {
      uVar2 = uVar2 - 1;
      *(undefined1 *)(param_4 + (ulong)(uVar3 - 3)) = *(undefined1 *)(param_1 + (ulong)(uVar4 - 2));
      *(undefined1 *)(param_4 + (ulong)(uVar3 - 2)) = *(undefined1 *)(param_1 + (ulong)(uVar4 - 1));
      uVar1 = (ulong)uVar4;
      uVar4 = uVar4 + 3;
      *(undefined1 *)(param_4 + (ulong)(uVar3 - 1)) = *(undefined1 *)(param_1 + uVar1);
      *(undefined1 *)(param_4 + (ulong)uVar3) = 0xff;
      uVar3 = uVar3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




void FUN_019a0a5c(undefined8 param_1,undefined4 param_2,int param_3,long *param_4,int *param_5,
                 int *param_6)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  ulong uVar8;
  undefined1 local_200 [8];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [164];
  undefined4 local_134;
  int local_110 [3];
  undefined4 local_104;
  void *local_100;
  uint local_f8;
  ulong local_f0;
  int local_98;
  int iStack_94;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  FUN_019a2a9c(param_1,param_2,&local_98,0x203);
  if (param_5 != (int *)0x0) {
    *param_5 = local_98;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = iStack_94;
  }
  iVar5 = 1;
  if (param_3 < 0xf) {
    if (param_3 == 0) {
      iVar6 = 0x18;
      iVar5 = param_3;
    }
    else {
      iVar6 = 0;
      if (param_3 == 1) {
        iVar6 = 0x20;
        iVar5 = param_3;
      }
    }
  }
  else if (param_3 == 0xf) {
    iVar6 = 0x10;
    iVar5 = 6;
  }
  else {
    iVar6 = 0;
    if (param_3 == 0x10) {
      iVar6 = 0x10;
      iVar5 = 5;
    }
  }
  pvVar7 = (void *)*param_4;
  uVar3 = (uint)(local_98 * iVar6) >> 3;
  uVar8 = (ulong)(uVar3 * iStack_94);
  bVar1 = pvVar7 == (void *)0x0;
  if (bVar1) {
    pvVar7 = operator_new__(uVar8);
  }
  *param_4 = (long)pvVar7;
  FUN_019a1cdc(local_110,0x203);
  local_104 = 1;
  local_110[0] = iVar5;
  local_100 = pvVar7;
  local_f8 = uVar3;
  local_f0 = uVar8;
  FUN_019a2a4c(local_200,0x203);
  uStack_1f8 = uStack_90;
  uStack_1e8 = uStack_80;
  uStack_1f0 = local_88;
  local_1e0 = local_78;
  memcpy(auStack_1d8,local_110,0x78);
  local_134 = 100;
  iVar5 = FUN_019a2ae0(param_1,param_2,local_200);
  bVar4 = iVar5 == 0;
  if ((bVar1) && (iVar5 != 0)) {
    operator_delete__(pvVar7);
    bVar4 = false;
    *param_4 = 0;
  }
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar4);
  }
  return;
}




void FUN_019a0c28(long param_1,void *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  undefined4 local_40;
  undefined1 auStack_3c [4];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_019a1834(param_1,auStack_3c,&local_40,auStack_44,&local_50,&local_48,&uStack_4c,0);
  memset(param_2,0,0x180);
  FUN_019a0cc8(param_1 + (uVar2 & 0xffffffff),local_50,local_40,local_48,uStack_4c,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_40);
}




uint FUN_019a0cc8(long param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 long *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  
  uVar4 = FUN_019a09a8(param_2);
  if (param_3 != 0) {
    uVar7 = 0;
    uVar8 = 0;
    do {
      *(int *)((long)param_6 + 0xc) = (int)uVar7;
      *(uint *)(param_6 + 2) = param_4;
      *param_6 = (long)(param_1 + (ulong)uVar8);
      *(uint *)((long)param_6 + 0x14) = param_5;
      iVar5 = FUN_019a09bc(param_2,param_4,param_5);
      iVar6 = iVar5;
      if (iVar5 < 0) {
        iVar6 = *(int *)(param_1 + (ulong)uVar8);
        *param_6 = *param_6 + 4;
        iVar5 = iVar6 + 4;
      }
      uVar8 = iVar5 + uVar8;
      uVar2 = param_4 >> 1;
      uVar1 = param_4 >> 1;
      uVar3 = param_5 >> 1;
      uVar7 = uVar7 + 1;
      param_4 = uVar4;
      if (uVar4 <= uVar1) {
        param_4 = uVar2;
      }
      uVar1 = param_5 >> 1;
      *(int *)(param_6 + 1) = iVar6;
      param_5 = uVar4;
      if (uVar4 <= uVar1) {
        param_5 = uVar3;
      }
      param_6 = param_6 + 3;
    } while (param_3 != uVar7);
  }
  return param_3;
}




void FUN_019a0db4(undefined4 *param_1,undefined8 param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_74 [4];
  undefined4 local_70 [2];
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = FUN_00e6b080(param_2);
  *param_1 = uVar2;
  local_68 = 0;
  local_70[0] = 0x30464643;
  local_44 = 0;
  local_4c = 0;
  local_54 = 0;
  local_5c = 0;
  local_64 = 0;
  FUN_00e6af10(local_70,0x34,1,param_2);
  iVar3 = 0xc;
  local_74[0] = 0;
  do {
    FUN_00e6b358(local_74,1,param_2);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_019a0e68(uint *param_1,FILE *param_2,undefined1 param_3)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_00e6b080(param_2);
  fseek(param_2,(ulong)*param_1,0);
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  FUN_00e6aef0(&local_90,0x34,1,param_2);
  *(undefined1 *)((long)&uStack_88 + (uStack_88 & 0xffffffff) + 4) = param_3;
  uVar1 = *param_1;
  *(uint *)((long)&local_80 + (uStack_88 & 0xffffffff) * 4 + 4) = iVar3 - uVar1;
  uStack_88 = CONCAT44(uStack_88._4_4_,(int)uStack_88 + 1);
  fseek(param_2,(ulong)uVar1,0);
  FUN_00e6af10(&local_90,0x34,1,param_2);
  iVar3 = fseek(param_2,(long)iVar3,0);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar3);
}




void FUN_019a0f68(uint *param_1,FILE *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = FUN_00e6b080(param_2);
  fseek(param_2,(ulong)*param_1,0);
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  FUN_00e6aef0(&local_80,0x34,1,param_2);
  local_80 = CONCAT44(iVar2,(undefined4)local_80);
  fseek(param_2,(ulong)*param_1,0);
  FUN_00e6af10(&local_80,0x34,1,param_2);
  iVar2 = fseek(param_2,(long)iVar2,0);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2);
}

