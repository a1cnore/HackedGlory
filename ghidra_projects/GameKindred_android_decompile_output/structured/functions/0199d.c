// functions/0199d — 34 functions
#include "libGameKindred.h"




void FUN_0199d070(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_03215388;
  if (DAT_03215388 != (void *)0x0) {
    FUN_019a0368(DAT_03215388);
    operator_delete(pvVar1);
  }
  DAT_03215388 = (void *)0x0;
  return;
}




void FUN_0199d0a8(uint *param_1)

{
  *param_1 = *param_1 & 0xc0000000;
  return;
}




void FUN_0199d0b8(ushort *param_1)

{
  if ((*param_1 & 0x3fff) != 0) {
    FUN_0199d0cc();
    return;
  }
  return;
}




void FUN_0199d0cc(uint *param_1)

{
  long lVar1;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *param_1 & 0x3fff;
  glDeleteBuffers(1,&local_2c);
  *param_1 = *param_1 & 0xffffc000;
  if (DAT_03215638 == param_1) {
    DAT_03215638 = (uint *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199d14c(uint *param_1)

{
  long lVar1;
  uint local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  glGenBuffers(1,&local_2c);
  *param_1 = *param_1 & 0xffffc000 | local_2c & 0x3fff;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199d1ac(uint *param_1,undefined8 param_2,int param_3,uint param_4)

{
  uint uVar1;
  
  if (param_4 == 2) {
    param_3 = param_3 << 2;
  }
  else if (param_4 == 1) {
    param_3 = param_3 << 1;
  }
  uVar1 = *param_1;
  *param_1 = uVar1 & 0x3fff | (param_4 & 0xffff) << 0xe |
             *(int *)(&DAT_01e1bea0 + (ulong)param_4 * 4) << 0x1e;
  glBindBuffer(0x8893,uVar1 & 0x3fff);
  glBufferData(0x8893,param_3,param_2,0x88e4);
  DAT_03215638 = 0;
  return;
}




void FUN_0199d230(undefined8 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
  }
  return;
}




uint FUN_0199d23c(uint *param_1)

{
  return *param_1 >> 0xe & 0xffff;
}




void FUN_0199d248(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0199d254(int *param_1)

{
  long lVar1;
  int local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (*param_1 != 0) {
    local_2c = *param_1;
    glDeleteFramebuffers(1,&local_2c);
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199d2b8(undefined8 *param_1)

{
  long lVar1;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = *(undefined4 *)param_1;
  glDeleteFramebuffers(1,&local_2c);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199d318(undefined4 *param_1,uint param_2,int param_3)

{
  long lVar1;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  glGenFramebuffers(1,&local_3c);
  *param_1 = local_3c;
  param_1[1] = param_2 & 0xffff | param_3 << 0x10;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199d384(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  float fVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_2;
  }
  glBindFramebuffer(0x8d40,uVar1);
  fVar3 = (float)param_1;
  if (((param_3 == (undefined4 *)0x0) && (fVar3 == -1.0)) && (param_4 == -1)) {
    return;
  }
  if ((param_3 != (undefined4 *)0x0) && ((~(uint)DAT_03215620 & 0x3c) != 0)) {
    glColorMask(1,1,1,1);
    DAT_03215620 = DAT_03215620 | 0x3c;
  }
  if ((0.0 <= fVar3) && (((byte)DAT_03215620 >> 6 & 1) == 0)) {
    glDepthMask(1);
    DAT_03215620 = DAT_03215620 | 0x40;
  }
  glDisable(0xc11);
  uVar2 = 0;
  if (param_3 != (undefined4 *)0x0) {
    glClearColor(*param_3,param_3[1],param_3[2],param_3[3]);
    uVar2 = 0x4000;
  }
  if (0.0 <= fVar3) {
    uVar2 = uVar2 | 0x100;
    glClearDepthf(param_1);
  }
  if (param_4 < 0) {
    if (uVar2 == 0) {
      return;
    }
  }
  else {
    uVar2 = uVar2 | 0x400;
    glClearStencil(param_4);
  }
  glClear(uVar2);
  return;
}




void FUN_0199d4b0(void)

{
  return;
}




void FUN_0199d4b4(undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  *(undefined4 **)(param_1 + (ulong)param_2 * 2 + 2) = param_3;
  glBindFramebuffer(0x8d40,*param_1);
  glFramebufferTexture2D(0x8d40,param_2 + 0x8ce0,(long)*(short *)(param_3 + 1),*param_3,0);
  glBindFramebuffer(0x8d40,0);
  return;
}




void FUN_0199d50c(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined4 **)(param_1 + 4) = param_2;
  glBindFramebuffer(0x8d40,*param_1);
  glFramebufferTexture2D(0x8d40,0x8d00,(long)*(short *)(param_2 + 1),*param_2,0);
  glBindFramebuffer(0x8d40,0);
  return;
}




void FUN_0199d55c(undefined4 *param_1,undefined4 *param_2)

{
  *(undefined4 **)(param_1 + 6) = param_2;
  glBindFramebuffer(0x8d40,*param_1);
  glFramebufferTexture2D(0x8d40,0x8d20,(long)*(short *)(param_2 + 1),*param_2,0);
  glBindFramebuffer(0x8d40,0);
  return;
}




void FUN_0199d5ac(void)

{
  DAT_03215390 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf2a80,
                              s_varying_mediump_vec4_var0__void_m_02bf2b69);
  DAT_03215398 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf2bae,
                              s_uniform_sampler2D_tex__varying_m_02bf2c99);
  DAT_032153a0 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf2d57,
                              s_uniform_sampler2D_tex__varying_m_02bf2ee3);
  DAT_032153a8 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf2fc5,
                              s_uniform_sampler2D_tex__varying_m_02bf30f1);
  DAT_032153b0 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf323b,
                              s_uniform_sampler2D_tex__varying_m_02bf3367);
  DAT_032153b8 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf351f,
                              s_uniform_sampler2D_tex__varying_m_02bf3651);
  DAT_032153c0 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf38b5,
                              s_uniform_sampler2D_tex__varying_m_02bf39e7);
  DAT_032153c8 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf3b33,
                              s_varying_mediump_vec2_fragPos__va_02bf3e11);
  DAT_032153d0 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf4053,
                              s_uniform_sampler2D__Tex0__uniform_02bf4368);
  DAT_032153d8 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf45b2,
                              s_uniform_sampler2D_tex__varying_m_02bf46f4);
  DAT_032153e0 = FUN_0199d7ac(s_attribute_vec2__Vertex__attribut_02bf47db,
                              s_varying_mediump_vec2_vTexcoord__u_02bf48c1);
  DAT_032153e8 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf4997,
                              s_uniform_sampler2D__Tex0__uniform_02bf4b91);
  DAT_032153f0 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf4d21,
                              s_uniform_sampler2D_tex__varying_m_02bf4f67);
  DAT_032153f8 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf5101,
                              s_precision_mediump_float__varying_02bf5221);
  DAT_03215400 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf53f8,
                              s_precision_mediump_float__uniform_02bf58f5);
  DAT_03215408 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf5b1c,
                              s_precision_mediump_float__uniform_02bf6019);
  DAT_03215410 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf6240,
                              s_precision_mediump_float__uniform_02bf6360);
  DAT_03215418 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf648e,
                              s_precision_mediump_float__uniform_02bf6afd);
  DAT_03215420 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf6c58,
                              s_precision_mediump_float__uniform_02bf6d78);
  DAT_03215428 = FUN_0199d7ac(s_attribute_highp_vec4__Vertex__at_02bf6ef4,
                              s_precision_mediump_float__uniform_02bf7014);
  FUN_019a0940();
  return;
}




void * FUN_0199d7ac(char *param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  void *pvVar3;
  void *local_88;
  void *pvStack_80;
  byte local_78 [16];
  void *local_68;
  byte local_60 [16];
  void *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  FUN_008fa54c(local_60,&DAT_01e277f2);
  sVar2 = strlen(param_1);
  FUN_0090de84(local_60,param_1,sVar2);
  FUN_008fa54c(local_78,&DAT_01e277f2);
  sVar2 = strlen(param_2);
  FUN_0090de84(local_78,param_2,sVar2);
  local_88 = (void *)((ulong)local_60 | 1);
  if ((local_60[0] & 1) != 0) {
    local_88 = local_50;
  }
  pvStack_80 = (void *)((ulong)local_78 | 1);
  if ((local_78[0] & 1) != 0) {
    pvStack_80 = local_68;
  }
  pvVar3 = operator_new(0x28);
  FUN_0199f11c();
  FUN_0199f12c(pvVar3,&local_88);
  if ((local_78[0] & 1) != 0) {
    operator_delete(local_68);
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199d8c8(void)

{
  void *pvVar1;
  long lVar2;
  
  FUN_019a0944();
  lVar2 = 0;
  do {
    pvVar1 = *(void **)((long)&DAT_03215390 + lVar2);
    if (pvVar1 != (void *)0x0) {
      FUN_0199f590(pvVar1);
      operator_delete(pvVar1);
      *(undefined8 *)((long)&DAT_03215390 + lVar2) = 0;
    }
    lVar2 = lVar2 + 8;
  } while (lVar2 != 0xa0);
  return;
}




undefined * FUN_0199d920(void)

{
  int iVar1;
  
  if (((DAT_03215438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_03215438), iVar1 != 0)) {
    FUN_0199d9cc(&DAT_03215430);
    __cxa_guard_release(&DAT_03215438);
  }
  return &DAT_03215430;
}




void FUN_0199d974(ulong param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(&DAT_03215390)[param_1 & 0xffffffff];
  if (DAT_032157d0 != puVar1) {
    DAT_032157d0 = puVar1;
    glUseProgram(*puVar1);
    return;
  }
  return;
}




undefined8 FUN_0199d9a4(ulong param_1)

{
  return (&DAT_03215390)[param_1 & 0xffffffff];
}




void FUN_0199d9b4(void)

{
  FUN_019a0998();
  return;
}




undefined8 thunk_FUN_0199da44(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte *__haystack;
  ulong uVar4;
  byte *pbVar5;
  
  pcVar2 = strchr(param_1,0x20);
  uVar3 = 0;
  if (pcVar2 == (char *)0x0) {
    if (*param_1 == '\0') {
      uVar3 = 0;
    }
    else {
      __haystack = (byte *)glGetString(0x1f03);
      do {
        pbVar5 = (byte *)strstr((char *)__haystack,param_1);
        if (pbVar5 == (byte *)0x0) {
          return 0;
        }
        uVar4 = FUN_00e6a474(param_1);
        bVar1 = pbVar5 != __haystack;
        __haystack = pbVar5 + (uVar4 & 0xffffffff);
      } while (((bVar1) && (pbVar5[-1] != 0x20)) || ((*__haystack | 0x20) != 0x20));
      uVar3 = 1;
    }
  }
  return uVar3;
}




void FUN_0199d9cc(byte *param_1)

{
  byte bVar1;
  ulong uVar2;
  
  bVar1 = FUN_0199da44("GL_OES_mapbuffer");
  *param_1 = bVar1 & 1;
  uVar2 = FUN_0199da44("GL_ARB_get_program_binary");
  if ((uVar2 & 1) == 0) {
    bVar1 = FUN_0199da44("GL_OES_get_program_binary");
    bVar1 = bVar1 & 1;
  }
  else {
    bVar1 = 1;
  }
  param_1[1] = bVar1;
  param_1[2] = 1;
  param_1[3] = 1;
  bVar1 = FUN_0199da44("GL_OES_depth_texture");
  param_1[4] = bVar1 & 1;
  return;
}




undefined8 FUN_0199da44(char *param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined8 uVar3;
  byte *__haystack;
  ulong uVar4;
  byte *pbVar5;
  
  pcVar2 = strchr(param_1,0x20);
  uVar3 = 0;
  if (pcVar2 == (char *)0x0) {
    if (*param_1 == '\0') {
      uVar3 = 0;
    }
    else {
      __haystack = (byte *)glGetString(0x1f03);
      do {
        pbVar5 = (byte *)strstr((char *)__haystack,param_1);
        if (pbVar5 == (byte *)0x0) {
          return 0;
        }
        uVar4 = FUN_00e6a474(param_1);
        bVar1 = pbVar5 != __haystack;
        __haystack = pbVar5 + (uVar4 & 0xffffffff);
      } while (((bVar1) && (pbVar5[-1] != 0x20)) || ((*__haystack | 0x20) != 0x20));
      uVar3 = 1;
    }
  }
  return uVar3;
}




void FUN_0199dae8(void)

{
  return;
}




void FUN_0199daec(void)

{
  return;
}




void FUN_0199daf4(void)

{
  long lVar1;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  glGetIntegerv(0x8869,auStack_2c);
  glGetIntegerv(0x8dfb,auStack_30);
  glGetIntegerv(0x8dfd,auStack_34);
  glGetIntegerv(0x8dfc,auStack_38);
  glGetIntegerv(0xd33,auStack_3c);
  glGetIntegerv(0x8872,auStack_40);
  glPixelStorei(0xd05,1);
  glPixelStorei(0xcf5,1);
  FUN_0199f878(&DAT_03215478);
  FUN_0199d5ac();
  glDisable(0xb44);
  if (((uint)DAT_03215620 & 3) != 0) {
    glCullFace(*(undefined4 *)(&DAT_01bf3f08 + (ulong)((uint)DAT_03215620 & 3) * 4));
  }
  glEnable(0xb71);
  glDepthFunc(*(undefined4 *)(&DAT_01bf3f28 + (((ulong)(uint)DAT_03215620 & 0x380) >> 7) * 4));
  glDisable(0xbe2);
  glBlendEquationSeparate
            (*(undefined4 *)(&DAT_01e1bf08 + (((ulong)(uint)DAT_03215620 & 0x1c00) >> 10) * 4),
             *(undefined4 *)(&DAT_01e1bf08 + (((ulong)(uint)DAT_03215620 & 0xe000) >> 0xd) * 4));
  glBlendFuncSeparate(*(undefined4 *)
                       (&DAT_01e1bf1c + (((ulong)(uint)DAT_03215620 & 0xf0000) >> 0x10) * 4),
                      *(undefined4 *)
                       (&DAT_01e1bf1c + (((ulong)(uint)DAT_03215620 & 0xf00000) >> 0x14) * 4),
                      *(undefined4 *)
                       (&DAT_01e1bf1c + (((ulong)(uint)DAT_03215620 & 0xf000000) >> 0x18) * 4),
                      *(undefined4 *)(&DAT_01e1bf1c + (ulong)((uint)DAT_03215620 >> 0x1c) * 4));
  glColorMask(0,0,0,0);
  glDepthMask(0);
  glBindFramebuffer(0x8d40,0);
  DAT_032157d0 = 0;
  glUseProgram(0);
  FUN_0199ea88();
  FUN_0199cf68();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199dc80(void)

{
  FUN_0199d070();
  FUN_0199eb88();
  FUN_0199d8c8();
  FUN_0199eee0();
  return;
}




void FUN_0199dca4(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  byte local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_008fa54c(local_40);
  FUN_008fce60(param_1,local_40);
  if ((local_40[0] & 1) != 0) {
    operator_delete(local_30);
  }
  uVar2 = FUN_0199dd40(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_0199df78(param_1,1);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_0199dd40(byte *param_1)

{
  long lVar1;
  int iVar2;
  byte *__filename;
  FILE *__stream;
  char *__s2;
  char *__s2_00;
  char *__s2_01;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined4 local_104;
  undefined8 local_100;
  void *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  uint local_dc;
  char acStack_d8 [136];
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  FUN_0199df78(param_1,0);
  if ((*param_1 & 1) == 0) {
    __filename = param_1 + 1;
  }
  else {
    __filename = *(byte **)(param_1 + 0x10);
  }
  __stream = fopen((char *)__filename,"rb");
  if (__stream == (FILE *)0x0) {
LAB_0199df44:
    uVar3 = 1;
  }
  else {
    __s2 = (char *)glGetString(0x1f00);
    __s2_00 = (char *)glGetString(0x1f01);
    __s2_01 = (char *)glGetString(0x1f02);
    memset(acStack_d8,0,0x80);
    FUN_00e6aef0(acStack_d8,0x80,1,__stream);
    iVar2 = strcmp(acStack_d8,__s2);
    if (iVar2 == 0) {
      memset(acStack_d8,0,0x80);
      FUN_00e6aef0(acStack_d8,0x80,1,__stream);
      iVar2 = strcmp(acStack_d8,__s2_00);
      if (iVar2 == 0) {
        memset(acStack_d8,0,0x80);
        FUN_00e6aef0(acStack_d8,0x80,1,__stream);
        iVar2 = strcmp(acStack_d8,__s2_01);
        if (iVar2 == 0) {
          local_dc = 0;
          FUN_00e6aef0(&local_dc,4,1,__stream);
          if (local_dc != 0) {
            uVar6 = 0;
            do {
              local_100 = 0;
              local_104 = 0;
              FUN_00e6aef0((long)&local_100 + 4,4,1,__stream);
              FUN_00e6aef0(&local_100,4,1,__stream);
              FUN_00e6aef0(&local_104,4,1,__stream);
              uVar4 = local_100;
              local_f0 = local_100._4_4_;
              uStack_ec = (undefined4)local_100;
              local_e8 = local_104;
              local_f8 = operator_new__(local_100 & 0xffffffff);
              FUN_00e6aef0(local_f8,uVar4 & 0xffffffff,1,__stream);
              FUN_0199e524(param_1 + 0x18,(long)&local_100 + 4,&local_f8);
              uVar4 = FUN_0199e840(param_1 + 0x18,(long)&local_100 + 4,&local_f8);
              if ((uVar4 & 1) == 0) goto LAB_0199de68;
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_dc);
          }
          fclose(__stream);
          goto LAB_0199df44;
        }
      }
    }
    fclose(__stream);
LAB_0199de68:
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




ulong FUN_0199df78(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  
  puVar8 = (uint *)(param_1 + 0x18);
  uVar2 = *puVar8;
  uVar1 = 0;
  do {
    uVar7 = uVar1;
    uVar6 = (ulong)uVar7;
    uVar5 = uVar2;
    if (uVar2 <= uVar7) break;
    uVar1 = uVar7 + 1;
  } while (*(int *)(*(long *)(param_1 + 0x20) + uVar6 * 8 + 4) == -1);
  do {
    if (uVar2 == uVar7) {
      uVar6 = FUN_0199e3f4(puVar8);
      if ((param_2 & 1) != 0) {
        if ((*param_1 & 1) == 0) {
          pbVar4 = param_1 + 1;
        }
        else {
          pbVar4 = *(byte **)(param_1 + 0x10);
        }
        uVar6 = FUN_00e6af2c(pbVar4);
        if ((uVar6 & 1) != 0) {
          if ((*param_1 & 1) == 0) {
            param_1 = param_1 + 1;
          }
          else {
            param_1 = *(byte **)(param_1 + 0x10);
          }
          uVar2 = unlink((char *)param_1);
          return (ulong)uVar2;
        }
      }
      return uVar6;
    }
    puVar9 = (undefined8 *)
             (*(long *)(param_1 + 0x38) +
             (ulong)*(uint *)(*(long *)(param_1 + 0x20) + uVar6 * 8 + 4) * 0x18);
    pvVar3 = (void *)*puVar9;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
      uVar5 = *puVar8;
    }
    uVar7 = (uint)uVar6;
    *puVar9 = 0;
    do {
      uVar7 = uVar7 + 1;
      uVar6 = (ulong)uVar7;
      if (uVar5 <= uVar7) break;
    } while (*(int *)(*(long *)(param_1 + 0x20) + uVar6 * 8 + 4) == -1);
  } while( true );
}

