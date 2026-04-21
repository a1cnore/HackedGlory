// functions/0199f — 25 functions
#include "libGameKindred.h"




void FUN_0199f070(uint param_1,undefined4 param_2,int param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar1 = &DAT_03215448;
  if (param_3 != 0x8b31) {
    puVar1 = &DAT_03215460;
  }
  puVar3 = puVar1 + 1;
  puVar4 = (undefined8 *)*puVar3;
  puVar5 = puVar3;
  if (puVar4 != (undefined8 *)0x0) {
    do {
      bVar2 = *(uint *)((long)puVar4 + 0x1c) < param_1;
      if (!bVar2) {
        puVar5 = puVar4;
      }
      puVar4 = (undefined8 *)puVar4[bVar2];
    } while (puVar4 != (undefined8 *)0x0);
    if ((puVar5 != puVar3) && (*(uint *)((long)puVar5 + 0x1c) <= param_1)) {
      *(int *)((long)puVar5 + 0x24) = *(int *)((long)puVar5 + 0x24) + -1;
      glDetachShader(param_2,*(undefined4 *)(puVar5 + 4));
      if (*(int *)((long)puVar5 + 0x24) == 0) {
        glDeleteShader(*(undefined4 *)(puVar5 + 4));
        FUN_0199f79c(puVar1,puVar5);
        return;
      }
    }
  }
  return;
}




void FUN_0199f11c(long param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_0199f12c(undefined8 param_1,undefined8 *param_2)

{
  FUN_0199f138(param_1,*param_2,param_2[1]);
  return;
}




void FUN_0199f138(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined **ppuVar22;
  uint local_70;
  undefined4 local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = glCreateProgram();
  uVar12 = FUN_0199ecc4(param_2,param_3,&local_6c);
  if ((uVar12 & 1) == 0) {
    uVar3 = FUN_0199ef40(param_2,0x8b31,param_1 + 4);
    uVar4 = FUN_0199ef40(param_3,0x8b30,param_1 + 5);
    glAttachShader(local_6c,uVar3);
    glAttachShader(local_6c,uVar4);
    local_70 = 0;
    glGetIntegerv(0x8869,&local_70);
    if (local_70 != 0) {
      ppuVar22 = &PTR_s__Vertex_02baf738;
      uVar12 = 1;
      do {
        glBindAttribLocation(local_6c,*(undefined4 *)(ppuVar22 + -1),*ppuVar22);
        if (uVar12 == 10) break;
        ppuVar22 = ppuVar22 + 2;
        bVar2 = uVar12 < local_70;
        uVar12 = uVar12 + 1;
      } while (bVar2);
    }
    glLinkProgram();
    FUN_0199ec30(param_2,param_3,local_6c);
  }
  uVar5 = glGetUniformLocation(local_6c,"_World2EyeMatrix");
  uVar6 = glGetUniformLocation(local_6c,"_ModelViewMatrix");
  uVar7 = glGetUniformLocation(local_6c,"_ModelViewProjectionMatrix");
  iVar8 = glGetUniformLocation(local_6c,"_ProjectionMatrix");
  uVar9 = glGetUniformLocation(local_6c,"_NormalMatrix");
  uVar10 = glGetUniformLocation(local_6c,"_Bones");
  uVar11 = glGetUniformLocation(local_6c,"_Eye2WorldMatrix");
  lVar13 = glGetUniformLocation(local_6c,"_Object2WorldMatrix");
  if (uVar5 == 0xffffffff) {
    uVar12 = 0xff;
  }
  else {
    param_1[1] = param_1[1] | 2;
    uVar12 = (ulong)(uVar5 & 0xff);
  }
  uVar15 = *(ulong *)(param_1 + 2);
  *(ulong *)(param_1 + 2) = uVar15 & 0xffffffffffffff00 | uVar12;
  if (uVar6 == 0xffffffff) {
    uVar16 = 0xff00;
  }
  else {
    param_1[1] = param_1[1] | 8;
    uVar16 = (ulong)((uVar6 & 0xff) << 8);
  }
  *(ulong *)(param_1 + 2) = uVar16 | uVar15 & 0xffffffffffff0000 | uVar12;
  if (uVar7 == 0xffffffff) {
    uVar17 = 0xff0000;
  }
  else {
    param_1[1] = param_1[1] | 0x10;
    uVar17 = (ulong)((uVar7 & 0xff) << 0x10);
  }
  *(ulong *)(param_1 + 2) = uVar17 | uVar16 | uVar15 & 0xffffffffff000000 | uVar12;
  if (iVar8 == -1) {
    uVar18 = 0xff000000;
  }
  else {
    param_1[1] = param_1[1] | 4;
    uVar18 = (ulong)(uint)(iVar8 << 0x18);
  }
  *(ulong *)(param_1 + 2) = uVar18 | uVar17 | uVar16 | uVar15 & 0xffffffff00000000 | uVar12;
  if (uVar9 == 0xffffffff) {
    uVar19 = 0xff00000000;
  }
  else {
    param_1[1] = param_1[1] | 0x20;
    uVar19 = (ulong)(uVar9 & 0xff) << 0x20;
  }
  *(ulong *)(param_1 + 2) = uVar19 | uVar18 | uVar17 | uVar16 | uVar15 & 0xffffff0000000000 | uVar12
  ;
  if (uVar10 == 0xffffffff) {
    uVar20 = 0xff0000000000;
  }
  else {
    param_1[1] = param_1[1] | 0x40;
    uVar20 = (ulong)(uVar10 & 0xff) << 0x28;
  }
  *(ulong *)(param_1 + 2) =
       uVar20 | uVar19 | uVar18 | uVar17 | uVar16 | uVar15 & 0xffff000000000000 | uVar12;
  if (uVar11 == 0xffffffff) {
    uVar21 = 0xff000000000000;
  }
  else {
    param_1[1] = param_1[1] | 0x80;
    uVar21 = (ulong)(uVar11 & 0xff) << 0x30;
  }
  *(ulong *)(param_1 + 2) =
       uVar21 | uVar20 | uVar19 | uVar18 | uVar17 | uVar16 | uVar15 & 0xff00000000000000 | uVar12;
  if ((int)lVar13 == -1) {
    uVar15 = 0xff00000000000000;
  }
  else {
    param_1[1] = param_1[1] | 1;
    uVar15 = lVar13 << 0x38;
  }
  *(ulong *)(param_1 + 2) = uVar15 | uVar21 | uVar20 | uVar19 | uVar18 | uVar17 | uVar16 | uVar12;
  glUseProgram(local_6c);
  uVar12 = 0;
  do {
    uVar14 = glGetUniformLocation(local_6c,(&PTR_DAT_02baf7e0)[uVar12]);
    if ((int)uVar14 != -1) {
      glUniform1i(uVar14,uVar12 & 0xffffffff);
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 != 8);
  DAT_032157d0 = 0;
  *param_1 = local_6c;
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void thunk_FUN_0199f4e8(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  void *__dest;
  byte *__src;
  ulong __n;
  uint uVar5;
  
  bVar2 = param_2[1];
  bVar3 = *param_2;
  uVar5 = (uint)bVar3;
  __src = param_2 + 6;
  FUN_0199f138(param_1,__src + *(ushort *)(param_2 + 2),__src + *(ushort *)(param_2 + 4));
  if (bVar3 != 0) {
    do {
      bVar1 = *__src;
      uVar4 = glGetUniformLocation(*param_1,__src + 1);
      glUniform1i(uVar4,bVar1);
      uVar5 = uVar5 - 1;
      __src = __src + 0x11;
    } while (uVar5 != 0);
    __src = param_2 + (ulong)(bVar3 - 1) * 0x11 + 0x17;
  }
  __n = (ulong)bVar2 << 4;
  __dest = operator_new__(__n);
  *(void **)(param_1 + 6) = __dest;
  param_1[8] = (uint)bVar2;
  memcpy(__dest,__src,__n);
  return;
}




void FUN_0199f4e8(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  void *__dest;
  byte *__src;
  ulong __n;
  uint uVar5;
  
  bVar2 = param_2[1];
  bVar3 = *param_2;
  uVar5 = (uint)bVar3;
  __src = param_2 + 6;
  FUN_0199f138(param_1,__src + *(ushort *)(param_2 + 2),__src + *(ushort *)(param_2 + 4));
  if (bVar3 != 0) {
    do {
      bVar1 = *__src;
      uVar4 = glGetUniformLocation(*param_1,__src + 1);
      glUniform1i(uVar4,bVar1);
      uVar5 = uVar5 - 1;
      __src = __src + 0x11;
    } while (uVar5 != 0);
    __src = param_2 + (ulong)(bVar3 - 1) * 0x11 + 0x17;
  }
  __n = (ulong)bVar2 << 4;
  __dest = operator_new__(__n);
  *(void **)(param_1 + 6) = __dest;
  param_1[8] = (uint)bVar2;
  memcpy(__dest,__src,__n);
  return;
}




void FUN_0199f590(undefined4 *param_1)

{
  if (param_1[4] != 0) {
    FUN_0199f070(param_1[4],*param_1,0x8b31);
  }
  if (param_1[5] != 0) {
    FUN_0199f070(param_1[5],*param_1,0x8b30);
  }
  glDeleteProgram(*param_1);
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    operator_delete__(*(void **)(param_1 + 6));
    return;
  }
  return;
}




void FUN_0199f5f0(undefined4 *param_1)

{
  glGetUniformLocation(*param_1);
  return;
}




int FUN_0199f5f8(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = glGetUniformLocation(*param_1,*(long *)(param_1 + 6) + (ulong)(uint)(param_2 << 4));
  iVar1 = 0xffff;
  if (iVar2 != -1) {
    iVar1 = iVar2;
  }
  return iVar1;
}




void FUN_0199f628(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_0199f628(param_1,*param_2);
    FUN_0199f628(param_1,param_2[1]);
    operator_delete(param_2);
    return;
  }
  return;
}




undefined1  [16] FUN_0199f674(long param_1,uint *param_2,undefined8 *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar3 = (undefined8 *)(param_1 + 8);
  puVar4 = puVar3;
  if ((undefined8 *)*puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar3;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      while (puVar3 = puVar2, *param_2 < *(uint *)((long)puVar3 + 0x1c)) {
        puVar2 = (undefined8 *)*puVar3;
        puVar4 = puVar3;
        if ((undefined8 *)*puVar3 == (undefined8 *)0x0) goto LAB_0199f6ec;
      }
      if (*param_2 <= *(uint *)((long)puVar3 + 0x1c)) break;
      puVar4 = puVar3 + 1;
      puVar2 = (undefined8 *)*puVar4;
    } while ((undefined8 *)*puVar4 != (undefined8 *)0x0);
  }
LAB_0199f6ec:
  pvVar5 = (void *)*puVar4;
  bVar1 = pvVar5 == (void *)0x0;
  if (bVar1) {
    pvVar5 = operator_new(0x28);
    *(undefined8 *)((long)pvVar5 + 0x1c) = *param_3;
    *(undefined4 *)((long)pvVar5 + 0x24) = *(undefined4 *)(param_3 + 1);
    FUN_0199f748(param_1,puVar3,puVar4,pvVar5);
  }
  auVar6[8] = bVar1;
  auVar6._0_8_ = pvVar5;
  auVar6._9_7_ = 0;
  return auVar6;
}




void FUN_0199f748(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

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




long * FUN_0199f79c(undefined8 *param_1,void *param_2)

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




void FUN_0199f830(undefined8 *param_1)

{
  *param_1 = 0xffff0000ffff;
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}




void FUN_0199f840(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0x1d8;
  do {
    puVar1 = (undefined8 *)(param_1 + lVar2);
    lVar2 = lVar2 + 0x30;
    puVar1[3] = 0xffff0000ffff;
    puVar1[2] = 0xffff;
    puVar1[5] = 0xffff;
    puVar1[4] = 0xffff00000000;
    puVar1[1] = 0xffff00000000;
    *puVar1 = 0xffff0000ffff;
  } while (lVar2 != 0x358);
  FUN_0199f878();
  return;
}




void FUN_0199f878(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  *(undefined8 *)(param_1 + 0x1bc) = 0;
  lVar2 = 0;
  *(undefined8 *)(param_1 + 0x1cc) = 0;
  *(undefined8 *)(param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x1d4) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x358) = 0;
  do {
    uVar3 = *(undefined8 *)(&DAT_01e1c0c0 + lVar2);
    ((undefined8 *)(param_1 + lVar2))[1] = *(undefined8 *)(&UNK_01e1c0c8 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar3;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  lVar2 = 0;
  do {
    uVar3 = *(undefined8 *)(&DAT_01e1c0c0 + lVar2);
    puVar1 = (undefined8 *)(param_1 + 0x40 + lVar2);
    puVar1[1] = *(undefined8 *)(&UNK_01e1c0c8 + lVar2);
    *puVar1 = uVar3;
    lVar2 = lVar2 + 0x10;
  } while (lVar2 != 0x40);
  lVar2 = 0;
  uVar3 = NEON_fmov(0xbf800000,4);
  *(undefined8 *)(param_1 + 0x1a8) = 0x701010000;
  *(undefined1 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x1b4) = uVar3;
  do {
    puVar1 = (undefined8 *)(param_1 + 0x1d8 + lVar2);
    lVar2 = lVar2 + 0x30;
    puVar1[3] = 0xffff0000ffff;
    puVar1[2] = 0xffff;
    puVar1[5] = 0xffff;
    puVar1[4] = 0xffff00000000;
    puVar1[1] = 0xffff00000000;
    *puVar1 = 0xffff0000ffff;
  } while (lVar2 != 0x180);
  return;
}




void FUN_0199f938(long param_1,int param_2)

{
  undefined4 *puVar1;
  long lVar2;
  
  lVar2 = 0x1e0;
  do {
    puVar1 = (undefined4 *)(param_1 + lVar2);
    if (puVar1[-2] == param_2) {
      *(undefined8 *)(puVar1 + -2) = 0xffff0000ffff;
      *puVar1 = 0;
    }
    lVar2 = lVar2 + 0xc;
  } while (lVar2 != 0x360);
  return;
}




void FUN_0199f968(uint param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((param_1 & 0x38) != 0) && ((DAT_0321561c >> 3 & 1) != 0)) {
    FUN_009b3960(&DAT_03215578,&DAT_03215478,&DAT_032154b8);
    DAT_0321561c = DAT_0321561c & 0xfffffff7;
  }
  if (((param_1 & DAT_0321561c) >> 4 & 1) != 0) {
    FUN_009b3960(&DAT_032155b8,&DAT_03215578,&DAT_03215538);
    DAT_0321561c = DAT_0321561c & 0xffffffef;
  }
  if (((param_1 & DAT_0321561c) >> 5 & 1) != 0) {
    fVar3 = DAT_0321558c * DAT_032155a0 - DAT_03215590 * DAT_0321559c;
    fVar2 = DAT_03215588 * DAT_032155a0 - DAT_03215590 * DAT_03215598;
    fVar4 = DAT_03215588 * DAT_0321559c - DAT_0321558c * DAT_03215598;
    fVar5 = DAT_03215580 * fVar4 + (DAT_03215578 * fVar3 - DAT_0321557c * fVar2);
    DAT_03215608 = 0.0;
    DAT_032155fc = 0.0;
    DAT_03215610 = 0.0;
    DAT_03215604 = 0.0;
    DAT_032155f8 = 0.0;
    DAT_03215614 = 0.0;
    DAT_03215600 = 0.0;
    DAT_0321560c = 0.0;
    DAT_03215618 = 0.0;
    if (1.1920929e-07 <= ABS(fVar5)) {
      fVar5 = 1.0 / fVar5;
      fVar1 = -fVar5;
      DAT_032155f8 = fVar3 * fVar5;
      DAT_03215600 = fVar4 * fVar5;
      DAT_03215608 = (DAT_03215578 * DAT_032155a0 - DAT_03215580 * DAT_03215598) * fVar5;
      DAT_03215610 = (DAT_0321557c * DAT_03215590 - DAT_03215580 * DAT_0321558c) * fVar5;
      DAT_032155fc = fVar2 * fVar1;
      DAT_03215604 = (DAT_0321557c * DAT_032155a0 - DAT_03215580 * DAT_0321559c) * fVar1;
      DAT_0321560c = (DAT_03215578 * DAT_0321559c - DAT_0321557c * DAT_03215598) * fVar1;
      DAT_03215614 = (DAT_03215578 * DAT_03215590 - DAT_03215580 * DAT_03215588) * fVar1;
      DAT_03215618 = (DAT_03215578 * DAT_0321558c - DAT_0321557c * DAT_03215588) * fVar5;
    }
    DAT_0321561c = DAT_0321561c & 0xffffffdf;
  }
  if (((param_1 & DAT_0321561c) >> 7 & 1) != 0) {
    FUN_00967cc0(&DAT_032154f8,&DAT_032154b8);
    DAT_0321561c = DAT_0321561c & 0xffffff7f;
  }
  return;
}




void FUN_0199fb64(undefined4 *param_1)

{
  *param_1 = 0;
  *(ulong *)(param_1 + 3) = *(ulong *)(param_1 + 3) & 0xfffffc0000000000 | 0x21500000000;
  *(ulong *)(param_1 + 1) = *(ulong *)(param_1 + 1) & 0xf0000000ffe00000;
  param_1[5] = 0;
  return;
}




void FUN_0199fb94(int *param_1)

{
  long lVar1;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*param_1 != 0) {
    FUN_0199f938(&DAT_03215478);
    local_2c = *param_1;
    glDeleteTextures(1,&local_2c);
    *param_1 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199fc04(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  FUN_0199f938(&DAT_03215478,*param_1);
  local_2c = *param_1;
  glDeleteTextures(1,&local_2c);
  *param_1 = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199fc70(undefined4 *param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 0;
  glGenTextures(1,&local_2c);
  *param_1 = local_2c;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199fccc(undefined8 param_1,long param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_1d8 [384];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    iVar2 = 0;
    puVar3 = (undefined1 *)0x0;
  }
  else {
    iVar2 = FUN_019a0cc8(param_2,param_6,param_5,param_3,param_4,auStack_1d8);
    if (iVar2 - 1U <= param_7) {
      param_7 = iVar2 - 1U;
    }
    puVar3 = auStack_1d8 + (ulong)param_7 * 0x18;
    iVar2 = iVar2 - param_7;
  }
  FUN_0199fd94(param_1,puVar3,iVar2,param_6,param_3,param_4);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199fd94(int *param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  ulong uVar1;
  
  *(undefined2 *)(param_1 + 1) = 0xde1;
  uVar1 = (ulong)DAT_0321564c;
  if (0x1f < DAT_0321564c) {
    glActiveTexture(0x84c0);
    uVar1 = 0;
    DAT_0321564c = 0;
  }
  if ((&DAT_03215650)[uVar1 * 3] != *param_1) {
    glBindTexture((long)(short)param_1[1]);
    (&DAT_03215650)[uVar1 * 3] = *param_1;
  }
  if ((param_2 != 0) && (0 < param_3)) {
    FUN_0199fe80(param_1,param_2,param_3,param_4,param_5,param_6);
    return;
  }
  FUN_019a01cc(param_1,param_4,param_5,param_6);
  return;
}




void FUN_0199fe80(long param_1,undefined8 *param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  short sVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong uVar16;
  void *local_70;
  long local_68;
  
  lVar11 = tpidr_el0;
  local_68 = *(long *)(lVar11 + 0x28);
  uVar5 = *(uint *)(param_1 + 8);
  uVar12 = *(ulong *)(param_1 + 0xc) & 0xfffffffff0000000 |
           (ulong)(param_5 & 0x3fff | (param_6 & 0x3fff) << 0xe);
  *(ulong *)(param_1 + 0xc) = uVar12;
  uVar6 = *(uint *)(param_2 + 2);
  uVar15 = uVar6 & 0x3fff;
  *(uint *)(param_1 + 8) = uVar5 & 0xffffc000 | uVar15;
  uVar7 = *(uint *)((long)param_2 + 0x14);
  *(uint *)(param_1 + 8) = uVar5 & 0xf0000000 | uVar15 | (uVar7 & 0x3fff) << 0xe;
  if (param_4 - 0x11 < 4) {
    uVar15 = *(uint *)(&DAT_01e1c288 + (long)(int)(param_4 - 0x11) * 4);
    local_70 = (void *)0x0;
    if (uVar15 != param_4) {
      uVar12 = FUN_019a09bc(uVar15,uVar6 & 0x3fff,uVar7 & 0x3fff);
      local_70 = operator_new__(uVar12 & 0xffffffff);
      uVar12 = *(ulong *)(param_1 + 0xc);
      param_4 = uVar15;
    }
  }
  else {
    local_70 = (void *)0x0;
  }
  uVar12 = uVar12 & 0xffffffff0fffffff;
  *(ulong *)(param_1 + 0xc) = uVar12;
  *(uint *)(param_1 + 4) =
       *(uint *)(param_1 + 4) & 0xffe00000 |
       *(uint *)(param_1 + 4) & 0xffff | (param_4 & 0x1f) << 0x10;
  if (param_3 != 0) {
    lVar1 = (ulong)(param_4 & 0x1f) * 0x10;
    uVar3 = *(undefined4 *)(&DAT_01e1c108 + lVar1);
    uVar4 = *(undefined4 *)(&DAT_01e1c10c + lVar1);
    uVar8 = *(undefined4 *)(&DAT_01e1c110 + lVar1);
    uVar16 = 0;
    puVar14 = param_2;
    do {
      uVar15 = param_5 >> (ulong)(*(uint *)((long)puVar14 + 0xc) & 0x1f);
      uVar5 = param_6 >> (ulong)(*(uint *)((long)puVar14 + 0xc) & 0x1f);
      if (uVar15 < 2) {
        uVar15 = 1;
      }
      if (uVar5 < 2) {
        uVar5 = 1;
      }
      *(ulong *)(param_1 + 0xc) =
           uVar12 & 0xffffffff00000000 |
           uVar12 & 0xfffffff | (ulong)((int)uVar12 + 0x10000000U >> 0x1c) << 0x1c;
      if (param_4 < 0x15) {
        uVar6 = 1 << (ulong)(param_4 & 0x1f);
        if ((uVar6 & 0x179c) == 0) {
          if ((uVar6 & 0x1e0000) == 0) goto LAB_019a006c;
          FUN_019a0a5c(*puVar14,*(undefined4 *)(puVar14 + 1),param_4,&local_70,0,0);
          sVar9 = *(short *)(param_1 + 4);
          pvVar13 = local_70;
          goto LAB_019a0034;
        }
        glCompressedTexImage2D
                  ((long)*(short *)(param_1 + 4),uVar16 & 0xffffffff,uVar3,uVar15,uVar5,0,
                   *(undefined4 *)(puVar14 + 1),*puVar14);
      }
      else {
LAB_019a006c:
        sVar9 = *(short *)(param_1 + 4);
        pvVar13 = (void *)*puVar14;
LAB_019a0034:
        glTexImage2D((long)sVar9,uVar16 & 0xffffffff,uVar3,uVar15,uVar5,0,uVar4,uVar8,pvVar13);
      }
      if ((ulong)param_3 - 1 == uVar16) goto LAB_019a0078;
      uVar12 = *(ulong *)(param_1 + 0xc);
      uVar16 = uVar16 + 1;
      puVar14 = puVar14 + 3;
    } while( true );
  }
  goto LAB_019a0184;
LAB_019a0078:
  if (1 < (int)param_3) {
    uVar15 = 1 << (ulong)((uint)((long)(int)param_3 + -1) & 0x1f);
    if ((uVar15 < (*(uint *)(param_1 + 8) & 0x3fff)) ||
       (uVar15 < (*(uint *)(param_1 + 8) >> 0xe & 0x3fff))) {
      param_2 = param_2 + ((long)(int)param_3 + -1) * 3;
      uVar15 = *(uint *)((long)param_2 + 0xc);
      do {
        uVar15 = uVar15 + 1;
        uVar6 = param_5 >> (ulong)(uVar15 & 0x1f);
        uVar7 = param_6 >> (ulong)(uVar15 & 0x1f);
        uVar12 = *(ulong *)(param_1 + 0xc);
        uVar5 = uVar6;
        if (uVar6 < 2) {
          uVar5 = 1;
        }
        uVar2 = uVar7;
        if (uVar7 < 2) {
          uVar2 = 1;
        }
        *(ulong *)(param_1 + 0xc) =
             uVar12 & 0xffffffff00000000 |
             uVar12 & 0xfffffff | (ulong)((int)uVar12 + 0x10000000U >> 0x1c) << 0x1c;
        if (param_4 < 0x15) {
          uVar10 = 1 << (ulong)(param_4 & 0x1f);
          if ((uVar10 & 0x179c) == 0) {
            if ((uVar10 & 0x1e0000) == 0) goto LAB_019a00cc;
            sVar9 = *(short *)(param_1 + 4);
            pvVar13 = local_70;
            goto LAB_019a0158;
          }
          glCompressedTexImage2D
                    ((long)*(short *)(param_1 + 4),param_3,uVar3,uVar5,uVar2,0,
                     *(undefined4 *)(param_2 + 1),*param_2);
        }
        else {
LAB_019a00cc:
          sVar9 = *(short *)(param_1 + 4);
          pvVar13 = (void *)*param_2;
LAB_019a0158:
          glTexImage2D((long)sVar9,param_3,uVar3,uVar5,uVar2,0,uVar4,uVar8,pvVar13);
        }
        param_3 = param_3 + 1;
      } while (1 < (uVar6 | uVar7));
    }
  }
LAB_019a0184:
  if (local_70 != (void *)0x0) {
    operator_delete__(local_70);
    local_70 = (void *)0x0;
  }
  if (*(long *)(lVar11 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

