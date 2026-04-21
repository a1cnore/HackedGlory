// functions/01953 — 82 functions
#include "libGameKindred.h"




undefined8 FUN_01953008(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_0195301c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x40a000003ecccccd;
  return 1;
}




undefined8 FUN_01953030(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_0195303c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




void FUN_0195304c(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42dfeb85;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_01953070(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x41200000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




uint FUN_01953090(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_019530cc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01953108(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




void FUN_01953134(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (-0.0 < fVar6)) {
        fVar5 = 0.0;
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar5 = (fVar6 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01e18228 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01e18228 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e18228 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_019531ec(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_019531fc(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01953208(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01953214(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01953224(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01953234(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01953244(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01953254(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01953264(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3dcccccd;
  return 1;
}




undefined8 FUN_01953278(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x4200000042000000;
  return 1;
}




undefined8 FUN_01953288(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xc2480000;
  return 1;
}




undefined8 FUN_01953298(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40000000;
  return 1;
}




void FUN_019532a8(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x42dfeb85;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}



undefined DAT_01e0ec28;
undefined DAT_01e0ee28;
undefined DAT_01e0ef28;
undefined DAT_01e0f028;
undefined DAT_01e0f328;
undefined DAT_01e0f528;
undefined DAT_01e0f928;
undefined DAT_01e0fc28;
undefined DAT_01e10028;
undefined DAT_01e0fd28;
undefined DAT_01e0fe28;
undefined DAT_01e0ff28;
undefined DAT_01e14628;
undefined DAT_01e10128;
undefined DAT_01e10628;
undefined DAT_01e10c28;
undefined DAT_01e10d28;
undefined DAT_01e10e28;
undefined DAT_01e10f28;
undefined DAT_01e11228;
undefined DAT_01e11328;
undefined DAT_01e11528;
undefined DAT_01e11a28;
undefined DAT_01e11c28;
undefined DAT_01e11d28;
undefined DAT_01e11e28;
undefined DAT_01e11f28;
undefined DAT_01e12028;
undefined DAT_01e12128;
undefined DAT_01e12228;
undefined DAT_01e12328;
undefined DAT_01e18928;
undefined DAT_01e12528;
undefined DAT_01e12928;
undefined DAT_01e12a28;
undefined DAT_01e12b28;
undefined DAT_01e12d28;
undefined DAT_01e19c28;
undefined DAT_01e12e28;
undefined DAT_01e13028;
undefined DAT_01e13128;
undefined DAT_01e13228;
undefined DAT_01e13428;
undefined DAT_01e13528;
undefined DAT_01e13828;
undefined DAT_01e13928;
undefined DAT_01e13a28;
undefined DAT_01e13b28;
undefined DAT_01e13c28;
undefined DAT_01dfcb20;
undefined DAT_01e13d28;
undefined DAT_01e13e28;
undefined DAT_01e13f28;
undefined DAT_01e14028;
undefined DAT_01e14128;
undefined DAT_01e14228;
undefined DAT_01e14328;
undefined DAT_01e14428;
undefined DAT_01e14528;
undefined DAT_01e14728;
undefined DAT_01e14828;
undefined DAT_01e14f28;
undefined DAT_01e14a28;
undefined DAT_01e14b28;
undefined DAT_01e14c28;
undefined DAT_01e14e28;
undefined DAT_01e16728;
undefined DAT_01e15028;
undefined DAT_01e15128;
undefined DAT_01e15228;
undefined DAT_01e16428;
undefined DAT_01e15328;
undefined DAT_01e15428;
undefined DAT_01e15528;
undefined DAT_01e15628;
undefined DAT_01e15828;
undefined DAT_01e15928;
undefined DAT_01e15d28;
undefined DAT_01e16328;
undefined DAT_01e16828;
undefined DAT_01e16928;
undefined DAT_01e17428;
undefined DAT_01e17528;
undefined DAT_01e17728;
undefined DAT_01e17828;
undefined DAT_01e17a28;
undefined DAT_01e17b28;
undefined DAT_01e17c28;
undefined DAT_01e17e28;
undefined DAT_01e17f28;
undefined DAT_01e18028;
undefined DAT_01e18128;
undefined DAT_01e19028;
undefined DAT_01e19228;
undefined DAT_01e19528;
undefined DAT_01e19d28;
undefined DAT_01e19f28;
undefined DAT_01e1a028;
undefined DAT_01e1a128;
undefined DAT_01e1a228;
undefined DAT_01e1a328;
void *DAT_032142e0;
void *DAT_032142e8;
void *DAT_032142f0;
undefined8 DAT_032142e8;
undefined8 DAT_032142f0;
undefined8 DAT_032142e0;
undefined1 DAT_03214308;
undefined1 DAT_03214320;
undefined1 DAT_03214338;
undefined1 DAT_03214350;
undefined1 DAT_03214368;
undefined1 DAT_03214380;
undefined1 DAT_03214398;
undefined1 DAT_032143b0;
undefined DAT_032142f8;
float DAT_03214300;
undefined DAT_03214310;
float DAT_03214318;
undefined DAT_03214328;
float DAT_03214330;
undefined DAT_03214340;
float DAT_03214348;
undefined DAT_03214358;
float DAT_03214360;
undefined DAT_03214370;
float DAT_03214378;
undefined DAT_03214388;
float DAT_03214390;
undefined DAT_032143a0;
float DAT_032143a8;
undefined *PTR_FUN_02bae6a8;
undefined *PTR_FUN_02bae6d0;
void *DAT_032143f8;
long *DAT_032143b8;
long *DAT_032143d8;
long *DAT_032143d0;
long *DAT_032143c8;
long *DAT_032143c0;
long *DAT_032143f0;
void *DAT_032143c0;
void *DAT_032143c8;
void *DAT_032143d0;
void *DAT_032143d8;
undefined8 *DAT_032143f8;
void *DAT_032143e8;
void *DAT_032143b8;
long DAT_032143c0;
long DAT_032143b8;
long *DAT_032143e0;
long DAT_032143d8;
long DAT_032143c8;
long DAT_032143f8;
undefined8 DAT_032143d8;
undefined8 DAT_032143f8;
undefined *PTR_FUN_02bae720;
pointer PTR_DAT_02bae740;
undefined *PTR_s_Left_Mouse_Button_02baea88;
undefined *PTR_FUN_02baeab0;
pointer PTR_FUN_02baeae8;
undefined1 DAT_03214400;
undefined1 DAT_0321440c;
undefined DAT_03214404;
float DAT_03214404;
float DAT_03214408;
float DAT_03214410;
char DAT_0321440c;
undefined DAT_03214418;
undefined8 DAT_03214420;
float DAT_03214414;
undefined4 DAT_03214404;
undefined4 DAT_03214408;
char DAT_03214400;
undefined4 DAT_03214410;
undefined4 DAT_03214414;
undefined4 DAT_03214418;
undefined4 DAT_0321441c;
undefined *PTR_FUN_02baeb08;
undefined FUN_01982a84;
undefined8 *DAT_03214428;
undefined *PTR_FUN_02baeb60;
long DAT_03214428;
undefined8 DAT_03214428;
undefined8 DAT_02c08f48;
undefined1 DAT_032144b0;
undefined8 DAT_03214498;
pointer PTR_FUN_02baeeb0;
undefined1 DAT_032144d0;
undefined8 DAT_032144b8;
pointer PTR_FUN_02baeed0;
undefined1 DAT_032144f0;
undefined8 DAT_032144d8;
pointer PTR_FUN_02baeef0;
undefined1 DAT_03214510;
undefined8 DAT_032144f8;
pointer PTR_FUN_02baef10;
undefined1 DAT_03214530;
undefined8 DAT_03214518;
pointer PTR_FUN_02baef30;
undefined8 *DAT_03214430;
undefined *PTR_FUN_02baebf0;
undefined FUN_01982ca4;
undefined FUN_01982cb4;
undefined FUN_01982cc4;
undefined8 DAT_03214430;
undefined8 DAT_02c08f78;
undefined8 DAT_02c08f80;
undefined8 DAT_02c08f88;
undefined8 *DAT_03214438;
undefined *PTR_FUN_02baec18;
undefined FUN_01982ff0;
long DAT_03214438;
undefined8 DAT_03214438;
undefined8 DAT_02c08f40;
undefined8 *DAT_03214440;
undefined *PTR_FUN_02baec40;
undefined FUN_019831dc;
undefined FUN_019831f8;
undefined FUN_01983214;
long DAT_03214440;
undefined8 DAT_03214440;
undefined8 DAT_02c08f58;
undefined8 DAT_02c08f60;
undefined8 *DAT_03214448;
undefined FUN_019843c8;
pointer PTR_FUN_02baec70;
long DAT_03214448;
undefined8 DAT_03214448;
undefined8 DAT_02c08f30;
undefined8 *DAT_03214450;
undefined *PTR_FUN_02baec90;
undefined FUN_01984610;
undefined FUN_01984624;
long DAT_03214450;
undefined8 DAT_03214450;
undefined8 DAT_02c08f70;
long DAT_03214470;
long DAT_03214468;
pointer PTR_FUN_02baecc8;
float DAT_02be3008;
pointer PTR_FUN_02baece8;
pointer PTR_FUN_02baed08;
pointer PTR_FUN_02baed28;
undefined8 *DAT_03214468;
void *DAT_03214470;
undefined *PTR_FUN_02baed48;
undefined8 DAT_03214468;
undefined1 DAT_03214490;
undefined FUN_019851dc;
byte DAT_0321448c;
undefined4 DAT_03214488;
undefined DAT_03214478;
undefined *PTR_FUN_02baedb0;
undefined *PTR_FUN_02baee40;
undefined *PTR_FUN_02baee68;
undefined *PTR_s_Home_02baee80;
undefined1 DAT_03214550;
undefined8 DAT_03214538;
pointer PTR_FUN_02baef50;
pointer PTR_FUN_02baefa8;
pointer PTR_FUN_02baefd0;
pointer PTR_FUN_02baf040;
void *DAT_03214958;
void *DAT_03214968;
undefined4 DAT_03214950;
void *DAT_03214970;
void *DAT_03214978;
void *DAT_03214980;
void *DAT_03214988;
undefined8 DAT_032149a8;
undefined8 DAT_032149b0;
undefined8 DAT_03214998;
undefined8 DAT_032149a0;
undefined8 DAT_03214990;
undefined1 DAT_03214954;
undefined8 DAT_03214960;
long *DAT_03214970;
void *DAT_03214960;
byte DAT_03214954;
undefined8 DAT_03214968;
long DAT_032149c0;
long DAT_032149c8;
int DAT_02bf2784;
int DAT_02bf2788;
undefined4 DAT_02bf2784;
undefined8 DAT_03214988;
char DAT_03214954;
undefined *DAT_03214990;
undefined4 DAT_03214948;
undefined4 DAT_0321494c;
undefined *DAT_03214998;
undefined *DAT_032149a0;
undefined *DAT_032149a8;
undefined *DAT_032149b0;
undefined8 DAT_03214980;
void *DAT_032149d0;
undefined FUN_01988d6c;
undefined8 DAT_03214cc0;
undefined8 DAT_03214cc8;
undefined8 DAT_03214cd0;
int DAT_03214cd8;
int DAT_03214cdc;
undefined4 DAT_03214ce0;
undefined FUN_01988edc;
int DAT_02bf278c;
undefined *PTR_FUN_02baf0c0;
undefined DAT_02bf27e8;
undefined1 DAT_03214e08;
uint DAT_03214e00;
uint *DAT_03214e18;
undefined8 DAT_03214e10;
long DAT_03214e10;
void *DAT_03214e20;
void *DAT_03214e28;
void *DAT_03214e30;
long *DAT_03214e30;
long *DAT_03214e28;
undefined8 DAT_03214e20;
pointer PTR_thunk_FUN_00e7a3d4_02baf128;
undefined thunk_FUN_0198befc;
undefined thunk_FUN_0198bfc0;
undefined FUN_0198c05c;
pointer PTR_FUN_02baf148;
uint *DAT_03215638;
undefined DAT_01e1bb2c;
undefined DAT_01e1bb38;
undefined DAT_01e1bb44;
undefined *PTR_FUN_02baf168;
long *DAT_03214fe0;
undefined *PTR_FUN_02baf1b0;
undefined *PTR_FUN_02baf1e0;
char DAT_03214f30;
undefined1 DAT_03214f30;
undefined FUN_0198ca04;
undefined DAT_01e1bb94;
undefined DAT_01e1bba0;
undefined DAT_01e1bbac;
undefined *PTR_FUN_02baf210;
undefined *PTR_FUN_02baf258;
undefined *PTR_FUN_02baf288;
undefined DAT_01e1bbe0;
void *DAT_03214f38;
undefined8 DAT_03214f38;
undefined thunk_FUN_01991574;
undefined FUN_00f0d040;
undefined FUN_01994d88;
undefined FUN_0199158c;
undefined FUN_01992390;
undefined FUN_0199324c;
undefined FUN_01994444;
undefined FUN_01992728;
undefined FUN_019935e4;
undefined FUN_019947dc;
undefined FUN_019949b4;
undefined FUN_01991ee0;
undefined FUN_01992e24;
undefined FUN_01993e70;
pointer PTR_thunk_FUN_00e7a3d4_02baf308;
undefined thunk_FUN_019976e4;
undefined thunk_FUN_019977d4;
undefined FUN_01997848;
pointer PTR_FUN_02baf328;
void *DAT_03214f70;
void *DAT_03214f78;
void *DAT_03214f80;
void *DAT_03214f88;
void *DAT_03214f90;
pointer PTR_PTR_02bf2828;
undefined8 DAT_03214f70;
undefined8 DAT_03214f80;
undefined8 DAT_03214f90;
uint DAT_03214fdc;
undefined4 DAT_03214f9c;
undefined4 DAT_03214fdc;
undefined *PTR_FUN_02baf370;
pointer PTR_FUN_02baf398;
undefined thunk_FUN_01999398;
pointer PTR_thunk_FUN_00e7a3d4_02baf3b8;
pointer PTR_FUN_02baf3d8;
undefined thunk_FUN_01999638;
undefined thunk_FUN_019996cc;
pointer PTR_FUN_02baf3f8;
undefined thunk_FUN_01999794;
pointer PTR_FUN_02baf418;
undefined *PTR_FUN_02baf438;
undefined *PTR_FUN_02baf478;
undefined *PTR_FUN_02baf4a0;
undefined *PTR_s_forward_low_02baf4d0;
undefined *PTR_FUN_02baf4f8;
undefined DAT_02bf2860;
undefined DAT_01e1be18;
undefined *PTR_FUN_02baf520;
undefined4 *DAT_03214fe0;
void *DAT_03214fe0;
undefined8 *DAT_03214fe8;
undefined *PTR_FUN_02baf548;
undefined8 DAT_03214fe8;
undefined *PTR_FUN_02baf590;
undefined *PTR_FUN_02baf6e0;
pointer PTR_FUN_02baf630;
void *DAT_03214ff0;
void *DAT_032150f0;
long DAT_032150f0;
undefined thunk_FUN_0199c63c;
undefined8 DAT_032151f8;
undefined8 DAT_03215200;
undefined8 DAT_03215208;
undefined FUN_0199c1fc;
int *DAT_03214fe0;
undefined *PTR_FUN_02baf650;
undefined *PTR_FUN_02baf6b8;
void *DAT_03215388;
undefined8 DAT_03215638;
undefined DAT_01e1bea0;
undefined8 DAT_03215390;
undefined8 DAT_03215398;
undefined8 DAT_032153a0;
undefined8 DAT_032153a8;
undefined8 DAT_032153b0;
undefined8 DAT_032153b8;
undefined8 DAT_032153c0;
undefined8 DAT_032153c8;
undefined8 DAT_032153d0;
undefined8 DAT_032153d8;
undefined8 DAT_032153e0;
undefined8 DAT_032153e8;
undefined8 DAT_032153f0;
undefined8 DAT_032153f8;
undefined8 DAT_03215400;
undefined8 DAT_03215408;
undefined8 DAT_03215410;
undefined8 DAT_03215418;
undefined8 DAT_03215420;
undefined8 DAT_03215428;
string s_attribute_highp_vec4__Vertex;_at_02bf2a80;
string s_varying_mediump_vec4_var0;_void_m_02bf2b69;
string s_attribute_highp_vec4__Vertex;_at_02bf2bae;
string s_uniform_sampler2D_tex;_varying_m_02bf2c99;
string s_attribute_highp_vec4__Vertex;_at_02bf2d57;
string s_uniform_sampler2D_tex;_varying_m_02bf2ee3;
string s_attribute_highp_vec4__Vertex;_at_02bf2fc5;
string s_uniform_sampler2D_tex;_varying_m_02bf30f1;
string s_attribute_highp_vec4__Vertex;_at_02bf323b;
string s_uniform_sampler2D_tex;_varying_m_02bf3367;
string s_attribute_highp_vec4__Vertex;_at_02bf351f;
string s_uniform_sampler2D_tex;_varying_m_02bf3651;
string s_attribute_highp_vec4__Vertex;_at_02bf38b5;
string s_uniform_sampler2D_tex;_varying_m_02bf39e7;
string s_attribute_highp_vec4__Vertex;_at_02bf3b33;
string s_varying_mediump_vec2_fragPos;_va_02bf3e11;
string s_attribute_highp_vec4__Vertex;_at_02bf4053;
string s_uniform_sampler2D__Tex0;_uniform_02bf4368;
string s_attribute_highp_vec4__Vertex;_at_02bf45b2;
string s_uniform_sampler2D_tex;_varying_m_02bf46f4;
string s_attribute_vec2__Vertex;_attribut_02bf47db;
string s_varying_mediump_vec2_vTexcoord;_u_02bf48c1;
string s_attribute_highp_vec4__Vertex;_at_02bf4997;
string s_uniform_sampler2D__Tex0;_uniform_02bf4b91;
string s_attribute_highp_vec4__Vertex;_at_02bf4d21;
string s_uniform_sampler2D_tex;_varying_m_02bf4f67;
string s_attribute_highp_vec4__Vertex;_at_02bf5101;
string s_precision_mediump_float;_varying_02bf5221;
string s_attribute_highp_vec4__Vertex;_at_02bf53f8;
string s_precision_mediump_float;_uniform_02bf58f5;
string s_attribute_highp_vec4__Vertex;_at_02bf5b1c;
string s_precision_mediump_float;_uniform_02bf6019;
string s_attribute_highp_vec4__Vertex;_at_02bf6240;
string s_precision_mediump_float;_uniform_02bf6360;
string s_attribute_highp_vec4__Vertex;_at_02bf648e;
string s_precision_mediump_float;_uniform_02bf6afd;
string s_attribute_highp_vec4__Vertex;_at_02bf6c58;
string s_precision_mediump_float;_uniform_02bf6d78;
string s_attribute_highp_vec4__Vertex;_at_02bf6ef4;
string s_precision_mediump_float;_uniform_02bf7014;
undefined1 DAT_03215438;
undefined DAT_03215430;
undefined DAT_01e1bf08;
undefined DAT_01e1bf1c;
void *DAT_03215440;
long DAT_03215440;
pointer PTR_s__Vertex_02baf738;
pointer PTR_DAT_02baf7e0;
undefined DAT_01e1c0c0;
undefined UNK_01e1c0c8;
float DAT_03215588;
float DAT_0321558c;
float DAT_03215590;
float DAT_03215598;
float DAT_032155a0;
float DAT_0321559c;
float DAT_0321557c;
float DAT_03215580;
float DAT_032155f8;
float DAT_032155fc;
float DAT_03215600;
float DAT_03215604;
float DAT_03215608;
float DAT_0321560c;
float DAT_03215610;
float DAT_03215614;
float DAT_03215618;
undefined DAT_01e1c108;
undefined DAT_01e1c10c;
undefined DAT_01e1c110;
undefined DAT_01e1c288;
undefined8 DAT_03215640;
undefined DAT_01e1c298;
undefined8 DAT_032157d8;
undefined DAT_01e1c310;
undefined DAT_01e1c30c;
undefined DAT_01e1c314;
undefined DAT_02bf7408;
undefined DAT_01e1c48c;
undefined DAT_01e1c4e0;
undefined8 DAT_0321a7d0;
undefined *DAT_0321a780;
undefined4 DAT_01e1c514;
undefined *PTR_FUN_02baf840;
undefined *PTR_FUN_02baf890;
undefined *PTR_FUN_02baf8c8;
undefined8 DAT_0321a788;
undefined8 DAT_0321a7a0;
undefined8 DAT_0321a7b8;
undefined *DAT_0321a7c0;
undefined *DAT_0321a760;
undefined *DAT_0321a770;
undefined *DAT_0321a7d8;
undefined *DAT_0321a7a8;
undefined *DAT_0321a7e0;
undefined *DAT_0321a778;
undefined *DAT_0321a768;
undefined *DAT_0321a7c8;
undefined *DAT_0321a7b0;
undefined *DAT_0321a758;
undefined *DAT_0321a798;
undefined DAT_01e1c510;
undefined FUN_019a3558;
undefined FUN_019a42bc;
undefined FUN_019a4338;
undefined FUN_019a4810;
undefined FUN_019a4838;
undefined FUN_019a51c4;
undefined FUN_019a48a4;
undefined FUN_019a52e4;
undefined FUN_019a4abc;
undefined FUN_019a5424;
undefined FUN_019a4c1c;
undefined FUN_019a5500;
undefined FUN_019a4d4c;
undefined FUN_019a4ea0;
undefined FUN_019a4f50;
undefined FUN_019a512c;
undefined DAT_0321a950;
undefined DAT_0321a8e8;
undefined *DAT_0321a740;
undefined *DAT_0321a748;
undefined *PTR_FUN_02baf9a0;
undefined *DAT_0321a790;
undefined DAT_01e1c5d0;
undefined UNK_01e1c778;
undefined DAT_01e1e4d8;
undefined DAT_01e1e558;
undefined *PTR_DAT_02baf820;
undefined UNK_01e1c7b8;
undefined UNK_01e1c7c4;
undefined2 DAT_01e1c7d8;
undefined1 DAT_01e1c7e2;
undefined DAT_01e1c810;
undefined FUN_019a8b94;
undefined FUN_019a8e60;
undefined *DAT_0321a730;
undefined *DAT_0321a738;
undefined *PTR_LOOP_02bf7448;
undefined FUN_019a9760;
undefined *DAT_0321a750;
undefined *PTR_FUN_02bf7450;
undefined FUN_019a97f0;
undefined FUN_019a9858;
undefined FUN_019a9900;
undefined FUN_019a9998;
undefined DAT_01e1d261;
undefined FUN_019aad30;
undefined *PTR_LOOP_02bf7458;
undefined FUN_019aadf4;
undefined FUN_019aaeb0;
undefined *DAT_0321a788;
undefined *DAT_0321a7d0;
undefined FUN_019aaf10;
undefined *DAT_0321a7a0;
undefined *DAT_0321a7b8;
undefined FUN_019aab50;
undefined FUN_019aabd0;
undefined FUN_019aac40;
undefined FUN_019aacbc;
undefined FUN_019aa530;
undefined FUN_019aa628;
undefined FUN_019aaa38;
undefined FUN_019aaa50;
undefined FUN_019aaa6c;
undefined FUN_019aaae0;
undefined FUN_019aa674;
undefined FUN_019aa6bc;
undefined FUN_019aa710;
undefined FUN_019aa7a8;
undefined DAT_01e1cc84;
undefined DAT_01e1d0f1;
undefined DAT_01e1d560;
undefined FUN_019ab674;
undefined FUN_019ab880;
undefined FUN_019ab940;
undefined FUN_019ac12c;
undefined FUN_019ac548;
undefined FUN_019ac72c;
undefined FUN_019ac8ec;
undefined FUN_019ab98c;
undefined FUN_019aba98;
undefined FUN_019abbd4;
undefined FUN_019abd48;
undefined FUN_019ad0fc;
undefined FUN_019acb8c;
undefined FUN_019acdf0;
undefined FUN_019ace88;
undefined FUN_019ad044;
undefined8 DAT_0321a7f0;
undefined *DAT_0321a8b8;
undefined *DAT_0321a8c8;
undefined *DAT_0321a8d0;
undefined *DAT_0321a8d8;
undefined *DAT_0321a888;
undefined *DAT_0321a870;
undefined *DAT_0321a8b0;
undefined *DAT_0321a7e8;
undefined *PTR_LOOP_02bf7460;
undefined *DAT_0321a898;
undefined FUN_019ae808;
undefined FUN_019ad8d0;
undefined FUN_019ad910;
undefined *DAT_0321a890;
undefined FUN_019ad96c;
undefined *DAT_0321a880;
undefined *DAT_0321a8a0;
undefined *DAT_0321a8c0;
undefined *DAT_0321a878;
undefined *DAT_0321a8e0;
undefined *DAT_0321a8a8;
undefined *PTR_FUN_02baf920;
undefined FUN_019aecb4;
undefined FUN_019ae83c;
undefined FUN_019ae878;
undefined FUN_019ae8ac;
undefined FUN_019ae8e4;
undefined FUN_019aef50;
undefined FUN_019af01c;
undefined FUN_019aed50;
undefined FUN_019aede8;
undefined FUN_019aee30;
undefined FUN_019aee84;
undefined FUN_019ad894;
undefined DAT_01e1d6c4;
undefined DAT_01e1dac4;
undefined DAT_0321a818;
undefined DAT_0321a828;
undefined DAT_0321a838;
undefined *DAT_0321a858;
undefined DAT_0321a848;
undefined FUN_019afa14;
undefined *UNK_0321a820;
undefined *UNK_0321a830;
undefined FUN_019afa30;
undefined *UNK_0321a840;
undefined *UNK_0321a850;
undefined FUN_019afa4c;
undefined FUN_019afa64;
undefined FUN_019af8ac;
undefined FUN_019af91c;
undefined FUN_019af980;
undefined FUN_019af9f0;
undefined FUN_019afb4c;
undefined FUN_019afbc8;
undefined FUN_019afa7c;
undefined FUN_019afaac;
undefined FUN_019afae8;
undefined FUN_019afb14;
undefined FUN_019b26d4;
undefined *PTR_LOOP_02bf7468;
undefined FUN_019b2dcc;
undefined *DAT_0321a900;
undefined DAT_0321a8f8;
undefined DAT_0321a928;
undefined DAT_0321a920;
undefined DAT_0321a918;
undefined FUN_019b0ad0;
undefined *DAT_0321a908;
undefined *DAT_0321a938;
undefined FUN_019b11d8;
undefined *UNK_0321a8f0;
undefined FUN_019b189c;
undefined *UNK_0321a910;
undefined *UNK_0321a930;
undefined FUN_019b1fa4;
undefined FUN_019b040c;
undefined FUN_019b3550;
undefined FUN_019b3d78;
undefined FUN_019b45d0;
undefined FUN_019b4df8;
undefined FUN_019b6610;
undefined *PTR_LOOP_02bf7470;
undefined DAT_0321a960;
undefined DAT_0321a990;
undefined DAT_0321a980;
undefined *DAT_0321a9a0;
undefined DAT_0321a970;
undefined FUN_019b5c54;
undefined *UNK_0321a958;
undefined FUN_019b5e74;
undefined *UNK_0321a968;
undefined *UNK_0321a978;
undefined FUN_019b60fc;
undefined *UNK_0321a988;
undefined *UNK_0321a998;
undefined FUN_019b6384;
undefined FUN_019b57ac;
undefined FUN_019b59cc;
undefined DAT_01e1e758;
undefined DAT_01e1e7c8;
undefined *DAT_032157f8;
undefined FUN_019b77c4;
undefined *PTR_FUN_02bf74a0;
undefined *PTR_FUN_02bf7498;
undefined *PTR_FUN_02bf7490;
undefined *PTR_FUN_02bf7488;
undefined *PTR_FUN_02bf7480;
undefined *PTR_FUN_02bf7478;
pointer PTR_FUN_02bf7478;
undefined FUN_019b7c50;
undefined DAT_02bafa28;
undefined DAT_01e1e8a4;
undefined DAT_01e1e924;
undefined UNK_01e1f264;
undefined1 DAT_01e1f5e8;
undefined1 DAT_01e1ea24;
undefined DAT_01e1ee44;
undefined *PTR_FUN_02bafa58;
undefined DAT_01e1f610;
undefined DAT_01e20610;
int DAT_03215800;
undefined *PTR_malloc_02bf74a8;
undefined *PTR_free_02bf74b0;
undefined realloc;
undefined *PTR_realloc_02bf74b8;
undefined *PTR_strdup_02bf74c0;
undefined *PTR_calloc_02bf74c8;
ulong DAT_03215808;
undefined4 DAT_03215810;
undefined calloc;
undefined malloc;
undefined strdup;
undefined LAB_019bde80;
undefined DAT_019be0f0;
undefined LAB_019c0d88;
undefined LAB_019c0d9c;
undefined LAB_019c0db0;
undefined LAB_019be260;
undefined *PTR_s_No_error_02bafaa0;
int DAT_03215810;
undefined LAB_019c1f3c;
undefined LAB_019dac34;
undefined LAB_019dac6c;
undefined LAB_019c25c8;
undefined LAB_019c2750;
char DAT_03215818;
uint DAT_03215814;
byte DAT_03215819;
char DAT_03215819;
undefined LAB_019ca4c4;
undefined FUN_019ca3d8;
undefined DAT_01e21a26;
byte DAT_03215820;
undefined LAB_019c34c8;
undefined DAT_03215828;
char DAT_03215820;
undefined DAT_019c3d0c;
undefined LAB_019c3ec0;
undefined DAT_01e21a5b;
undefined DAT_0321a9b8;
undefined FUN_019c3c40;
undefined __sF;
undefined DAT_01e2199e;
undefined LAB_019c5b48;
undefined DAT_01e221f6;
undefined *PTR_s_POST_02bafef0;
undefined DAT_01e21fbd;
undefined LAB_019c870c;
undefined LAB_019f2ad4;
undefined DAT_01e1ba24;
undefined DAT_01e222f5;
undefined DAT_01e21e68;
pointer PTR_DAT_02bb0388;
pointer PTR_DAT_02bb03c0;
undefined UNK_01e226f0;
undefined fwrite;
undefined fread;
undefined DAT_01e22eee;
undefined DAT_01e3087a;
undefined DAT_01e23116;
undefined DAT_01e23121;
undefined DAT_01e2312c;
undefined DAT_01e23137;
undefined DAT_01e2b2be;
undefined DAT_01e23142;
pointer PTR_DAT_02bafdf0;
pointer PTR_free_02bf74b0;
undefined DAT_01e2314d;
pointer PTR_s_<no_protocol>_02baff10;
undefined UNK_02baff90;
undefined DAT_019d2f44;
undefined DAT_01b96a79;
undefined FUN_019d2f48;
undefined DAT_01e2332e;
undefined LAB_019d5b8c;
undefined DAT_01e23840;
undefined LAB_019d5d2c;
undefined LAB_019d5f48;
undefined fputc;
undefined DAT_01e23904;
undefined DAT_01e23ae5;
undefined DAT_01e2398f;
undefined DAT_01e23994;
undefined DAT_01e23999;
undefined DAT_01e2399c;
undefined DAT_02bb0128;
undefined *PTR_s_BINARY_02bb01c8;
undefined DAT_01e23b5d;
undefined DAT_01e23def;
undefined FUN_019f73ac;
undefined *PTR_s_Too_long_hexadecimal_number_02bb0310;
undefined FUN_019da764;
undefined LAB_019dade8;
undefined LAB_019dae00;
undefined DAT_01b92fab;
undefined DAT_01e244ed;
undefined DAT_01e2dbe9;
undefined DAT_01e2451c;
int DAT_02bf74d0;
undefined DAT_01e24730;
undefined DAT_01e24a60;
undefined *PTR_s_Monday_02bb0420;
undefined DAT_01e24bb5;
undefined DAT_01e66523;
undefined LAB_019e1ad8;
undefined UNK_019e1f10;
undefined DAT_01e25b2d;
undefined DAT_01e25b51;
undefined DAT_01e25bf8;
undefined DAT_01e25c79;
undefined DAT_01e25810;
undefined DAT_01e261d4;
undefined *PTR_s_No_such_file_or_directory_02bb05e0;
pointer PTR_DAT_02bb0680;
pointer PTR_DAT_02bb0780;
pointer PTR_s_IMAPS_02bb0800;
undefined LAB_019e4444;
undefined FUN_019e3738;
undefined DAT_01e26968;
pointer PTR_s_IMAPS_02bb0700;
undefined DAT_01e26819;
pointer PTR_DAT_02bb0880;
pointer PTR_DAT_02bb0980;
pointer PTR_s_POP3S_02bb0a00;
undefined DAT_01e26b23;
undefined DAT_01e26a99;
undefined DAT_01e26ac2;
undefined DAT_01e26b14;
pointer PTR_s_POP3S_02bb0900;
undefined *PTR_MD5_Init_02bb0368;
undefined LAB_019e829c;
undefined FUN_019e76b4;
pointer PTR_s_SMTPS_02bb0b00;
undefined DAT_01e273c7;
undefined DAT_01e27615;
undefined DAT_01e2767d;
undefined *PTR_MD5_Init_02bb0340;
undefined1 DAT_01e277f3;
undefined DAT_01e277da;
undefined LAB_019ecbfc;
undefined FUN_019ee76c;
undefined LAB_019ee96c;
undefined FUN_019ee858;
undefined LAB_019eeb7c;
undefined FUN_019eec54;
undefined LAB_019eecbc;
undefined FUN_019eed4c;
undefined X509_free;
char DAT_03215858;
undefined DAT_01e28231;
undefined DAT_01e2839a;
undefined DAT_01e2839e;
undefined DAT_01e286ba;
undefined DAT_01bc2529;
undefined DAT_01e2453b;
undefined DAT_01e24bb9;
undefined DAT_01e58689;
undefined DAT_01e63197;
undefined DAT_01e664df;
undefined DAT_01e287f2;
undefined DAT_01e287f7;
undefined DAT_01e28835;
undefined DAT_01e28cc4;
undefined DAT_01e277f9;
pointer PTR_DAT_02bb0ec8;
pointer PTR_DAT_02bb0fc8;
pointer PTR_DAT_02bb1048;
undefined FUN_019f72e8;
undefined FUN_019f7454;
undefined DAT_01e28eb0;
undefined DAT_01e29100;
undefined DAT_01e28f8d;
undefined DAT_01e28fbb;
undefined UNK_01e28e58;
undefined DAT_01e28e8c;
undefined DAT_01e28e98;
undefined DAT_01e28e82;
undefined DAT_01e28e60;
undefined DAT_01e28e65;
undefined DAT_01e2952d;
undefined FUN_019f8dd8;
undefined DAT_01e29af2;
undefined DAT_01e29af3;
undefined DAT_01e29af4;
undefined DAT_01e29afc;
undefined DAT_01e29b09;
undefined DAT_01e29b5f;
undefined DAT_01e29b65;
undefined DAT_01e29b68;
undefined DAT_01e29b6b;
undefined DAT_01e29b6e;
undefined DAT_01e29b62;
pointer PTR_PTR_02bf74d8;
undefined DAT_01e2a3c3;
undefined DAT_01e2a3ce;
undefined DAT_01e2a3ec;
undefined DAT_01e2aa02;
undefined DAT_01e2ab42;
undefined UNK_019ffda8;
undefined UNK_019ffdac;
undefined _libssh2_recv;
undefined _libssh2_send;
undefined libssh2_sftp_dtor;
undefined DAT_01e2b2bd;
undefined DAT_01e2bc40;
undefined DAT_01e2bc43;
undefined DAT_01e2bc47;
undefined FUN_01a07c80;
undefined DAT_01e2bc4a;
undefined DAT_01e2c769;
undefined *PTR_DAT_02bb1148;
undefined *agent_ops_unix;
undefined FUN_01a0a300;
undefined8 DAT_03215864;
undefined4 DAT_0321586c;
undefined *DAT_03215878;
undefined *DAT_03215880;
undefined FUN_01a0b62c;
undefined1 *DAT_03215888;
undefined FUN_01a0b710;
undefined LAB_01a0b8b0;
undefined DAT_03215860;
undefined8 DAT_032158bc;
undefined4 DAT_032158c4;
undefined *DAT_032158d0;
undefined *DAT_032158d8;
undefined1 *DAT_032158e0;
undefined DAT_032158b8;
undefined8 DAT_03215914;
undefined4 DAT_0321591c;
undefined *DAT_03215928;
undefined *DAT_03215930;
undefined1 *DAT_03215938;
undefined DAT_03215910;
undefined FUN_01a0b8f4;
int DAT_03215968;
uint DAT_0321596c;
pointer PTR_PTR_02bb1168;
pointer PTR_PTR_02bb1170;
pointer PTR_PTR_02bb1178;
pointer PTR_s_diffie-hellman-group14-sha1_02bb1188;
pointer PTR_s_diffie-hellman-group-exchange-sh_02bb11a0;
pointer PTR_s_diffie-hellman-group1-sha1_02bb11b8;
undefined DAT_01e2cd10;
undefined *PTR_PTR_02bf7508;
undefined *PTR_PTR_02bf7540;
pointer PTR_PTR_02bf7560;
undefined LAB_01a0f33c;
undefined LAB_01a0f350;
undefined *PTR_PTR_02bf7570;
undefined DAT_02bb1650;
undefined ssl3_connect;
undefined LAB_01a145e4;
undefined X509_NAME_free;
undefined1[11000] ssl3_ciphers;
undefined LAB_01a15adc;
undefined DAT_02bfa160;
undefined DAT_02bfa190;
undefined DAT_01e2e5b1;
undefined DAT_01e2e630;
undefined DAT_01e2e704;
undefined SHA512_Transform;
undefined LAB_01a1bc40;
undefined LAB_01a1bcd4;
undefined LAB_01a1beb0;
undefined SHA1_Transform;
undefined MD5_Transform;
undefined FUN_01a1bd8c;
undefined SHA256_Transform;
undefined DAT_02bb1738;
undefined DAT_02bb1820;
undefined UNK_01e2e7a0;
undefined DAT_02bb1908;
undefined ssl3_put_cipher_by_char;
undefined DAT_02bb19f0;
undefined DAT_02bb1ad8;
undefined DAT_02bb1bc0;
undefined DAT_02bb1cd0;
undefined DAT_02bb1db8;
undefined DAT_02bb1ea0;
undefined DAT_02bb1fb0;
undefined DAT_02bb2098;
undefined DAT_02bb2180;
undefined1 DAT_01e2ee24;
undefined1 DAT_01e2eec8;
undefined1 DAT_01e2eeca;
undefined1 DAT_01e2eecc;
undefined DAT_01e2edb4;
undefined LAB_01a1e470;
undefined1 DAT_02bfa360;
undefined1 DAT_02bfa362;
undefined1 DAT_02bfa364;
undefined4 DAT_01e2eeb4;
undefined UNK_01e2eee6;
undefined DAT_01e2eee9;
undefined DAT_01e2eefb;
undefined X509_EXTENSION_free;
undefined DAT_01e2ee80;
undefined DAT_01e2eeb0;
undefined DAT_01e2ef0c;
undefined4 DAT_01e2ee84;
undefined FUN_01a22948;
undefined DAT_01e2ef20;
undefined DAT_01e2ef40;
undefined DAT_01e2f16c;
undefined DAT_02bb2288;
undefined dtls1_connect;
undefined DAT_02bb2370;
undefined DAT_02bb2458;
undefined DAT_01e2f918;
undefined DAT_01e2f920;
pointer PTR_s_SRTP_AES128_CM_SHA1_80_02bfa498;
undefined ssl_undefined_function;
undefined OCSP_RESPID_free;
undefined DAT_02bfa560;
undefined DAT_02bfa5b8;
undefined LAB_01a2de64;
undefined LAB_01a2de88;
undefined LAB_01a2f5d8;
int DAT_02bfa610;
undefined LAB_01a30b54;
undefined DAT_01e2fd75;
undefined UNK_01a31bfc;
undefined FUN_01a328e8;
undefined d2i_SSL_SESSION;
undefined i2d_SSL_SESSION;
EVP_CIPHER *DAT_032159c0;
EVP_CIPHER *DAT_032159c8;
EVP_CIPHER *DAT_032159d0;
EVP_CIPHER *DAT_032159d8;
EVP_CIPHER *DAT_032159e0;
EVP_CIPHER *DAT_032159f0;
EVP_CIPHER *DAT_032159f8;
EVP_CIPHER *DAT_03215a00;
EVP_CIPHER *DAT_03215a08;
EVP_CIPHER *DAT_03215a10;
EVP_CIPHER *DAT_03215a18;
EVP_CIPHER *DAT_03215a20;
EVP_CIPHER *DAT_03215a28;
EVP_MD *DAT_03215990;
int DAT_03215978;
EVP_MD *DAT_03215998;
int DAT_0321597c;
EVP_MD *DAT_032159a0;
int DAT_03215980;
EVP_MD *DAT_032159a8;
int DAT_02bfa620;
undefined4 DAT_03215984;
EVP_MD *DAT_032159b0;
int DAT_03215988;
EVP_MD *DAT_032159b8;
int DAT_0321598c;
_STACK *DAT_03215970;
uint switchdataD_01e2febc;
undefined4 DAT_02bfa614;
undefined4 DAT_03215978;
undefined8 DAT_03215990;
undefined8 DAT_032159c0;
undefined LAB_01a3535c;
undefined DAT_01e30440;
undefined UNK_02bb2540;
long DAT_032159c0;
long DAT_032159c8;
long DAT_032159d0;
long DAT_032159d8;
long DAT_032159e0;
long DAT_032159f0;
long DAT_032159f8;
long DAT_03215a20;
long DAT_03215a28;
long DAT_03215a00;
long DAT_03215a08;
long DAT_03215a10;
long DAT_03215a18;
long DAT_03215990;
long DAT_03215998;
long DAT_032159b0;
long DAT_032159b8;
long DAT_032159a0;
long DAT_032159a8;
undefined ssl_cipher_ptr_id_cmp;
undefined DAT_01e30340;
stack_st_SSL_COMP *DAT_03215970;
undefined8 DAT_03215970;
undefined LAB_01a35144;
undefined LAB_01a36de8;
undefined FUN_01a36d14;
undefined8 DAT_02bfa630;
undefined DAT_02bfb4e0;
undefined DAT_02bb4220;
undefined DAT_02bb4308;
undefined ssl3_accept;
undefined DAT_02bb43f0;
undefined DAT_02bb44d8;
undefined DAT_02bb45c0;
undefined DAT_02bb46a8;
undefined dtls1_accept;
undefined DAT_02bb4790;
undefined DAT_02bb4878;
_STACK *DAT_03215a30;
undefined *DAT_03215a50;
undefined *DAT_03215a70;
_STACK *DAT_03215a58;
undefined *DAT_03215a60;
undefined *DAT_03215a68;
CRYPTO_dynlock_value *DAT_03215a50;
undefined8 DAT_03215a68;
undefined8 DAT_03215a60;
dyn_create_function *DAT_03215a50;
dyn_lock_function *DAT_03215a68;
dyn_destroy_function *DAT_03215a60;
undefined8 DAT_03215a70;
undefined8 DAT_03215a38;
func *DAT_03215a70;
func *DAT_03215a38;
threadid_func *DAT_03215a78;
undefined8 DAT_03215a78;
undefined *DAT_03215a78;
undefined *DAT_03215a80;
ulong DAT_03215a80;
func *DAT_03215a80;
undefined *DAT_03215a38;
undefined *PTR_s_<<ERROR>>_02bb4960;
byte DAT_03215a90;
undefined *PTR_malloc_02bfc940;
undefined *PTR_malloc_02bfc948;
undefined *PTR_realloc_02bfc950;
undefined *PTR_realloc_02bfc958;
undefined *PTR_free_02bfc960;
undefined *PTR_malloc_02bfc968;
undefined *PTR_malloc_02bfc970;
undefined *PTR_free_02bfc978;
byte DAT_03215a94;
m *DAT_03215aa0;
r *DAT_03215aa8;
f *DAT_03215ab0;
so *DAT_03215ab8;
go *DAT_03215ac0;
undefined *DAT_03215aa0;
undefined1 cleanse_ctr;
undefined *DAT_03215ab0;
undefined *DAT_03215aa8;
undefined *DAT_03215ab8;
undefined *DAT_03215ac0;
int DAT_03215ad0;
int DAT_03215ad4;
undefined DAT_03215af8;
undefined DAT_03215ad0;
long DAT_03215ad8;
uint DAT_03215ad0;
_LHASH *DAT_03215ae0;
undefined FUN_01a40e14;
undefined LAB_01a40e48;
_LHASH *DAT_03215ae8;
undefined DAT_03215ad8;
long DAT_03215af0;
undefined LAB_01a41464;
undefined LAB_01a4148c;
undefined FUN_01a4193c;
long DAT_03215ae8;
undefined LAB_01a41cf0;
undefined *PTR_s_OpenSSL_1.0.2h_3_May_2016_02bb4ab0;
undefined * *DAT_03215b08;
pointer PTR_FUN_02bfc980;
CRYPTO_EX_DATA_IMPL *DAT_03215b08;
int DAT_02bfc9b0;
_LHASH *DAT_03215b10;
undefined8 DAT_03215b08;
undefined LAB_01a42a10;
undefined LAB_01a42a40;
undefined LAB_01a42a48;
byte DAT_03215b18;
_LHASH *DAT_03215b28;
undefined LAB_01a42ec4;
undefined FUN_01a42e5c;
_STACK *DAT_03215b30;
undefined strcmp;
int DAT_02bfc9b4;
undefined lh_strhash;
undefined LAB_01a43390;
undefined LAB_01a43494;
undefined LAB_01a434bc;
int DAT_03215b20;
undefined LAB_01a43554;
undefined LAB_01a43604;
undefined4 obj_cleanup_defer;
_LHASH *DAT_03215b40;
undefined LAB_01a436a8;
undefined LAB_01a436c4;
undefined LAB_01a436d8;
int DAT_02bfc9b8;
undefined LAB_01a44bdc;
undefined LAB_01a44d2c;
pointer PTR_s_UNDEF_02bb4ae0;
undefined DAT_02bb4af0;
pointer PTR_s_undefined_02bb4ae8;
undefined DAT_01e34764;
undefined DAT_02bb4af4;
undefined DAT_02bb4af8;
undefined DAT_01e3554c;
undefined DAT_01e36428;
undefined LAB_01a4527c;
undefined DAT_01e3da48;
undefined8 sig_app;
undefined LAB_01a4528c;
undefined *PTR_DAT_02bbe090;
undefined8 sigx_app;
undefined LAB_01a451ec;
undefined LAB_01a45204;
undefined LAB_01a45278;
undefined4 DAT_01e3dd98;
undefined8 DAT_01e3dfe8;
undefined DAT_01e3e194;
undefined4 _shadow_DES_check_key;
undefined DAT_01e3e314;
undefined DAT_01e3e414;
undefined DAT_01e3e514;
undefined DAT_01e3e614;
undefined DAT_01e3e714;
undefined DAT_01e3e814;
undefined DAT_01e3e914;
undefined DAT_01e3ea14;
byte DAT_03215c38;
undefined DAT_01e3eb65;
undefined DAT_01e3eb69;
undefined DAT_03215c39;
undefined1[2048] DES_SPtrans;
int DAT_03215c60;
int DAT_03215c64;
int DAT_03215c68;
int DAT_03215c6c;
pointer PTR_DAT_02bbe1b8;
undefined DAT_01e3f470;
undefined BN_add;
undefined BN_sub;
byte DAT_03215c70;
undefined DAT_03215c71;
undefined BN_rand;
undefined BN_pseudo_rand;
undefined LAB_01a5a540;
undefined FUN_01a5a5fc;
undefined FUN_01a5a57c;
undefined UNK_02bbe1d8;
pointer PTR_s_SECG/WTLS_curve_over_a_112_bit_p_02bbe1e8;
undefined4 DAT_02bbe1f0;
pointer PTR_s_B-163_02bbebf0;
undefined4 DAT_02bbebf8;
RSA_METHOD *DAT_03215c88;
undefined1[56] RSA_PSS_PARAMS_it;
undefined1[56] RSA_OAEP_PARAMS_it;
undefined1[56] RSAPrivateKey_it;
undefined1[56] RSAPublicKey_it;
DSA_METHOD *DAT_03215c90;
undefined1[56] DSA_SIG_it;
undefined1[56] DSAPrivateKey_it;
undefined1[56] DSAparams_it;
undefined1[56] DSAPublicKey_it;
undefined *PTR_s_OpenSSL_DSA_method_02bfc9c0;
undefined *PTR_s_OpenSSL_DH_Method_02bfca20;
DH_METHOD *DAT_03215c98;
undefined1[208] dhx_asn1_meth;
_STACK *DAT_03215ca0;
undefined LAB_01a61284;
undefined DAT_03215ca8;
ENGINE *DAT_03215cb0;
ENGINE *DAT_03215cb8;
undefined LAB_01a61bdc;
undefined8 DAT_03215cb0;
undefined DAT_01e43eba;
undefined LAB_01a62b8c;
undefined DAT_01e43f08;
undefined DAT_03215cc0;
undefined LAB_01a62ef0;
undefined DAT_01e43f34;
undefined DAT_03215cc8;
undefined LAB_01a63020;
undefined DAT_01e43f38;
undefined DAT_03215cd0;
undefined LAB_01a63150;
undefined DAT_01e43f3c;
undefined DAT_03215cd8;
undefined LAB_01a63280;
undefined DAT_01e43f40;
undefined DAT_03215ce0;
undefined LAB_01a633b0;
undefined DAT_01e43f44;
undefined DAT_03215ce8;
undefined LAB_01a634e0;
undefined DAT_01e43f48;
undefined DAT_03215cf0;
undefined LAB_01a63658;
undefined DAT_03215cf8;
undefined LAB_01a63894;
undefined DAT_03215d00;
undefined LAB_01a63ad0;
undefined8 DAT_03215d08;
undefined LAB_01a63d94;
undefined LAB_01a6413c;
undefined LAB_01a642dc;
undefined LAB_01a642e4;
undefined DAT_02bbf6e0;
undefined FUN_01a642ec;
int DAT_02bfca68;
undefined LAB_01a649a0;
undefined DAT_01e44180;
undefined DAT_02bfca70;
undefined DAT_01e442ab;
undefined DAT_02bfcac0;
undefined DAT_02bfcb10;
undefined DAT_02bfcb60;
ENGINE *DAT_03215d10;
RAND_METHOD *DAT_03215d18;
undefined * *DAT_03215e38;
pointer PTR_FUN_02bbf7e0;
ERR_FNS *DAT_03215e38;
undefined8 DAT_02bfcc70;
undefined8 DAT_02bfce40;
undefined8 DAT_02bfcbc0;
byte DAT_03215e28;
undefined8 DAT_032160a0;
undefined8 DAT_032160a8;
undefined DAT_032168a0;
long DAT_03215e38;
undefined DAT_03215e48;
undefined DAT_03215d20;
_LHASH *DAT_03215e20;
undefined LAB_01a6e948;
undefined LAB_01a6e98c;
_LHASH *DAT_03215e40;
int DAT_03215e30;
undefined LAB_01a6e9b8;
undefined FUN_01a6e99c;
undefined4 DAT_03215e30;
int DAT_02bfcbb0;
undefined DAT_02bbf838;
undefined DAT_02bbf890;
undefined DAT_02bbf8e8;
undefined DAT_02bbf940;
undefined DAT_02bbf998;
undefined DAT_02bbf9f0;
undefined DAT_02bbfa48;
undefined DAT_02bbfaa0;
undefined DAT_02bbfaf8;
undefined DAT_02bbfb50;
undefined DAT_02bbfba8;
undefined DAT_02bbfc00;
undefined DAT_02bbfc58;
undefined DAT_02bbfcb0;
undefined DAT_02bbfd08;
undefined DAT_02bbfd60;
undefined DAT_02bbfdb8;
undefined DAT_02bbfe10;
undefined DAT_02bbfe68;
undefined DAT_02bbfec0;
undefined DAT_02bbff18;
undefined DAT_02bbff70;
undefined DAT_02bbffc8;
undefined DAT_02bc0020;
undefined DAT_02bc0078;
undefined DAT_02bc00d0;
undefined DAT_02bc0128;
undefined DAT_02bc0180;
undefined DAT_02bc01d8;
undefined DAT_02bc0230;
undefined DAT_02bc0288;
undefined DAT_02bc02e0;
undefined DAT_02bc0338;
undefined DAT_02bc0390;
undefined DAT_02bc03e8;
undefined DAT_02bc0440;
undefined DAT_02bc0498;
undefined DAT_02bc04f0;
undefined DAT_02bc0548;
undefined DAT_02bc05a0;
undefined DAT_02bc05f8;
undefined DAT_02bc0650;
undefined DAT_02bc06a8;
undefined DAT_02bc0700;
undefined DAT_02bc0758;
undefined DAT_02bc07b0;
undefined DAT_02bc0808;
undefined DAT_02bc0860;
undefined DAT_02bc08b8;
undefined DAT_02bc0910;
undefined DAT_02bc0968;
undefined DAT_02bc09c0;
undefined DAT_02bc0a18;
undefined DAT_02bc0a70;
undefined DAT_02bc0ac8;
undefined DAT_02bc0b20;
undefined DAT_02bc0b78;
undefined DAT_02bc0bd0;
undefined DAT_02bc0c28;
undefined DAT_02bc0c80;
undefined DAT_02bc0cd8;
undefined DAT_02bc0d30;
undefined DAT_02bc0d88;
undefined DAT_02bc0de0;
undefined DAT_02bc0e38;
undefined DAT_02bc0e90;
undefined DAT_02bc0ee8;
undefined DAT_02bc0f40;
undefined DAT_02bc0f98;
undefined DAT_02bc0ff0;
undefined DAT_02bc1048;
undefined DAT_02bc10a0;
undefined DAT_02bc10f8;
undefined DAT_02bc1150;
undefined DAT_02bc11a8;
undefined DAT_02bc1200;
undefined DAT_02bc1258;
undefined AES_encrypt;
undefined AES_decrypt;
undefined AES_cbc_encrypt;
undefined LAB_01a73754;
undefined LAB_01a737e8;
undefined DAT_02bc12b0;
undefined DAT_02bc1308;
undefined DAT_02bc1360;
undefined DAT_02bc13b8;
undefined DAT_02bc1410;
undefined DAT_02bc1468;
undefined DAT_02bc14c0;
undefined DAT_02bc1518;
undefined DAT_02bc1570;
undefined DAT_02bc15c8;
undefined DAT_02bc1620;
undefined DAT_02bc1678;
undefined DAT_02bc16d0;
undefined DAT_02bc1728;
undefined DAT_02bc1780;
undefined DAT_02bc17f8;
undefined DAT_02bc1870;
undefined DAT_02bc18e8;
undefined DAT_02bc1960;
undefined DAT_02bc19d8;
undefined DAT_02bc1a50;
undefined DAT_02bc1ac8;
undefined DAT_02bc1b40;
undefined X509_ATTRIBUTE_free;
undefined8 DAT_02bfd510;
undefined DAT_02bfd090;
undefined DAT_02bc1bb8;
_STACK *DAT_03217880;
undefined LAB_01a765dc;
undefined DAT_02bc1c10;
undefined LAB_01a76494;
undefined LAB_01a765d8;
undefined LAB_01a77948;
undefined *PTR_rsa_pkey_meth_02bfda10;
undefined8 app_pkey_methods;
undefined LAB_01a7767c;
undefined LAB_01a78898;
undefined DAT_02bfda48;
undefined LAB_01a7aed8;
undefined DAT_01e45aa7;
undefined LAB_01a7afa4;
undefined DAT_01e45a08;
undefined DAT_01e45a27;
undefined1[56] X509_ALGOR_it;
undefined1[56] X509_ALGORS_it;
undefined1[56] X509_PUBKEY_it;
undefined1[56] X509_SIG_it;
undefined1[56] X509_ATTRIBUTE_it;
undefined1[56] X509_NAME_ENTRY_it;
undefined X509_NAME_ENTRY_free;
undefined1[56] X509_NAME_INTERNAL_it;
undefined1[56] X509_NAME_it;
undefined LAB_01a7d194;
undefined LAB_01a7d188;
undefined1[56] X509_NAME_ENTRIES_it;
undefined1[56] X509_CINF_it;
undefined1[56] X509_it;
undefined1[56] X509_CERT_AUX_it;
undefined ASN1_OBJECT_free;
undefined1[56] X509_CERT_PAIR_it;
undefined ASN1_TYPE_free;
undefined *PTR_DAT_02bc27f8;
uint switchdataD_01e45f5c;
undefined LAB_01a80fe0;
undefined DAT_01e45f78;
undefined DAT_01e46048;
undefined DAT_01e45fcc;
undefined1[56] ASN1_INTEGER_it;
undefined1[56] ASN1_ENUMERATED_it;
undefined1[56] ASN1_BIT_STRING_it;
undefined1[56] ASN1_OCTET_STRING_it;
undefined1[56] ASN1_NULL_it;
undefined1[56] ASN1_UTF8STRING_it;
undefined1[56] ASN1_PRINTABLESTRING_it;
undefined1[56] ASN1_T61STRING_it;
undefined1[56] ASN1_IA5STRING_it;
undefined1[56] ASN1_GENERALSTRING_it;
undefined1[56] ASN1_UTCTIME_it;
undefined1[56] ASN1_GENERALIZEDTIME_it;
undefined1[56] ASN1_VISIBLESTRING_it;
undefined1[56] ASN1_UNIVERSALSTRING_it;
undefined1[56] ASN1_BMPSTRING_it;
undefined1[56] ASN1_ANY_it;
undefined1[56] ASN1_PRINTABLE_it;
undefined1[56] DISPLAYTEXT_it;
undefined1[56] DIRECTORYSTRING_it;
undefined1[56] ASN1_SEQUENCE_ANY_it;
undefined1[56] ASN1_SET_ANY_it;
_STACK *DAT_03217890;
pointer PTR_rsa_asn1_meths_02bfdb20;
undefined LAB_01a83ad8;
undefined LAB_01a8377c;
undefined1[56] X509_EXTENSION_it;
undefined1[56] X509_EXTENSIONS_it;
undefined DAT_01bbbc05;
undefined *PTR_DAT_02bc2fa0;
undefined8 DAT_02bfe310;
undefined DAT_02bfdb80;
undefined1[56] PBEPARAM_it;
undefined1[56] PBE2PARAM_it;
undefined1[56] PBKDF2PARAM_it;
undefined1[56] PKCS8_PRIV_KEY_INFO_it;
undefined d2i_X509_REQ;
undefined i2d_X509_REQ;
undefined d2i_X509_CRL;
undefined i2d_X509_CRL;
undefined d2i_PKCS7;
undefined i2d_PKCS7;
undefined d2i_NETSCAPE_CERT_SEQUENCE;
undefined i2d_NETSCAPE_CERT_SEQUENCE;
undefined i2d_RSAPrivateKey;
undefined d2i_RSAPublicKey;
undefined i2d_RSAPublicKey;
undefined d2i_RSA_PUBKEY;
undefined i2d_RSA_PUBKEY;
undefined i2d_DSAPrivateKey;
undefined d2i_DSA_PUBKEY;
undefined i2d_DSA_PUBKEY;
undefined d2i_DSAparams;
undefined i2d_DSAparams;
undefined d2i_ECPKParameters;
undefined i2d_ECPKParameters;
undefined i2d_ECPrivateKey;
undefined d2i_EC_PUBKEY;
undefined i2d_EC_PUBKEY;
undefined i2d_DHparams;
undefined i2d_DHxparams;
undefined d2i_PUBKEY;
undefined i2d_PUBKEY;
undefined8 DAT_02bfec80;
undefined DAT_02bfeab0;
undefined d2i_X509;
undefined i2d_X509;
undefined d2i_X509_AUX;
undefined i2d_X509_AUX;
undefined d2i_X509_CERT_PAIR;
undefined i2d_X509_CERT_PAIR;
undefined i2d_PrivateKey;
undefined X509_STORE_get1_certs;
undefined X509_STORE_CTX_get1_issuer;
undefined LAB_01a8c944;
undefined DAT_01a8c9b8;
undefined X509_STORE_get1_crls;
undefined LAB_01a8cc6c;
undefined LAB_01a8d070;
undefined FUN_01a8c9bc;
undefined LAB_01a8d124;
undefined FUN_01a8b5dc;
undefined X509_CRL_free;
undefined FUN_01a8d27c;
undefined8 DAT_02bff160;
undefined DAT_02bfef30;
undefined FUN_01a8f474;
undefined LAB_01a8f5c8;
undefined1[56] X509_REQ_INFO_it;
undefined1[56] NETSCAPE_SPKAC_it;
undefined1[56] X509_CRL_INFO_it;
undefined1[56] X509_CRL_it;
undefined1[56] PKCS7_it;
undefined1[56] X509_REQ_it;
undefined RSA_new;
undefined d2i_DSAPrivateKey;
undefined DSA_new;
undefined EC_KEY_new;
undefined d2i_ECPrivateKey;
undefined1[56] PKCS7_ISSUER_AND_SERIAL_it;
undefined d2i_X509_SIG;
undefined X509_SIG_new;
undefined i2d_X509_SIG;
undefined PKCS8_PRIV_KEY_INFO_new;
undefined d2i_PKCS8_PRIV_KEY_INFO;
undefined i2d_PKCS8_PRIV_KEY_INFO;
undefined d2i_AutoPrivateKey;
undefined EVP_PKEY_new;
undefined DAT_03217898;
undefined *PTR_FUN_02bff450;
_STACK *DAT_03217900;
undefined DAT_02bff458;
undefined LAB_01a91c24;
undefined4 DAT_02bff45c;
byte UNK_00000004;
uint DAT_02bff45c;
uint DAT_02bff484;
uint DAT_02bff4ac;
uint DAT_02bff4d4;
uint DAT_02bff4fc;
uint DAT_02bff524;
uint DAT_02bff54c;
uint DAT_02bff574;
undefined *PTR_s_TSA_server_02bff580;
undefined *PTR_s_compatible_02bff468;
undefined *PTR_s_SSL_Client_02bff490;
undefined *PTR_s_SSL_Server_02bff4b8;
undefined *PTR_s_S/MIME_email_02bff4e0;
undefined *PTR_s_Object_Signer_02bff508;
undefined *PTR_s_OCSP_responder_02bff530;
undefined *PTR_s_OCSP_request_02bff558;
undefined LAB_01a91d90;
undefined DAT_02bff480;
undefined DAT_02bff4a8;
undefined DAT_02bff4d0;
undefined DAT_02bff4f8;
undefined DAT_02bff520;
undefined DAT_02bff548;
undefined DAT_02bff570;
undefined1[80] x509_file_lookup;
undefined X509_INFO_free;
undefined1[80] x509_dir_lookup;
undefined LAB_01a92c5c;
undefined LAB_01a92cbc;
undefined LAB_01a931c8;
undefined LAB_01a931cc;
_STACK *DAT_03217908;
undefined LAB_01a93754;
pointer PTR_s_default_02bc3380;
undefined LAB_01a93888;
undefined X509_VERIFY_PARAM_free;
_STACK *DAT_03217948;
undefined LAB_01a93930;
undefined LAB_01a94264;
undefined *PTR_v3_nscert_02bff638;
undefined LAB_01a93e5c;
undefined X509V3_conf_free;
undefined GENERAL_NAME_free;
undefined LAB_01a95a98;
undefined LAB_01a964d0;
undefined UNK_01a964dc;
undefined UNK_01a96b9c;
undefined FUN_01a965dc;
undefined FUN_01a966c0;
undefined FUN_01a96c4c;
undefined8 DAT_02bff790;
undefined DAT_02bffbc0;
undefined1[56] OTHERNAME_it;
undefined1[56] EDIPARTYNAME_it;
undefined1[56] GENERAL_NAME_it;
undefined1[56] GENERAL_NAMES_it;
undefined d2i_GENERAL_NAME;
undefined i2d_GENERAL_NAME;
undefined1[56] PKEY_USAGE_PERIOD_it;
undefined1[56] SXNETID_it;
undefined1[56] SXNET_it;
undefined1[56] NOTICEREF_it;
undefined1[56] POLICYINFO_it;
undefined1[56] USERNOTICE_it;
undefined ASN1_STRING_free;
undefined POLICYINFO_free;
undefined1[56] POLICYQUALINFO_it;
undefined1[56] CERTIFICATEPOLICIES_it;
undefined1[56] DIST_POINT_it;
undefined DIST_POINT_free;
undefined1[56] DIST_POINT_NAME_it;
undefined1[56] CRL_DIST_POINTS_it;
undefined1[56] ISSUING_DIST_POINT_it;
undefined4 DAT_02bc45a8;
undefined *PTR_s_Unused_02bc45b0;
undefined4 DAT_02bc45c0;
undefined *PTR_s_Key_Compromise_02bc45c8;
undefined4 DAT_02bc45d8;
undefined *PTR_s_CA_Compromise_02bc45e0;
undefined4 DAT_02bc45f0;
undefined *PTR_s_Affiliation_Changed_02bc45f8;
undefined4 DAT_02bc4608;
undefined *PTR_s_Superseded_02bc4610;
undefined4 DAT_02bc4620;
undefined *PTR_s_Cessation_Of_Operation_02bc4628;
undefined4 DAT_02bc4638;
undefined *PTR_s_Certificate_Hold_02bc4640;
undefined4 DAT_02bc4650;
undefined *PTR_s_Privilege_Withdrawn_02bc4658;
undefined4 DAT_02bc4668;
pointer PTR_s_AA_Compromise_02bc4670;
_STACK *DAT_03217950;
undefined DAT_02c00128;
undefined LAB_01a9c824;
undefined DAT_01e49f58;
undefined LAB_01a9bc9c;
undefined4 DAT_02c00130;
byte UNK_00000008;
uint DAT_02c00130;
uint DAT_02c00160;
uint DAT_02c00190;
uint DAT_02c001c0;
uint DAT_02c001f0;
uint DAT_02c00220;
uint DAT_02c00250;
uint DAT_02c00280;
uint DAT_02c002b0;
undefined *PTR_s_SSL_client_02c00140;
undefined *PTR_s_sslclient_02c00148;
undefined *PTR_s_SSL_server_02c00170;
undefined *PTR_s_sslserver_02c00178;
undefined *PTR_s_Netscape_SSL_server_02c001a0;
undefined *PTR_s_nssslserver_02c001a8;
undefined *PTR_s_S/MIME_signing_02c001d0;
undefined *PTR_s_smimesign_02c001d8;
undefined *PTR_s_S/MIME_encryption_02c00200;
undefined *PTR_s_smimeencrypt_02c00208;
undefined *PTR_s_CRL_signing_02c00230;
undefined *PTR_s_crlsign_02c00238;
undefined *PTR_s_Any_Purpose_02c00260;
undefined *PTR_s_any_02c00268;
undefined *PTR_s_OCSP_helper_02c00290;
undefined *PTR_s_ocsphelper_02c00298;
undefined *PTR_s_Time_Stamp_signing_02c002c0;
undefined *PTR_s_timestampsign_02c002c8;
undefined LAB_01a9be84;
undefined DAT_02c00158;
undefined DAT_02c00188;
undefined DAT_02c001b8;
undefined DAT_02c001e8;
undefined DAT_02c00218;
undefined DAT_02c00248;
undefined DAT_02c00278;
undefined DAT_02c002a8;
undefined ACCESS_DESCRIPTION_free;
undefined1[56] ACCESS_DESCRIPTION_it;
undefined1[56] AUTHORITY_INFO_ACCESS_it;
undefined1[56] AUTHORITY_KEYID_it;
undefined1[56] POLICY_MAPPING_it;
undefined1[56] POLICY_CONSTRAINTS_it;
undefined1[56] GENERAL_SUBTREE_it;
undefined1[56] NAME_CONSTRAINTS_it;
undefined1[56] PROXY_POLICY_it;
undefined1[56] PROXY_CERT_INFO_EXTENSION_it;
undefined policy_data_free;
undefined LAB_01a9ee34;
undefined POLICYQUALINFO_free;
undefined POLICY_MAPPING_free;
undefined LAB_01a9f194;
undefined policy_node_free;
undefined UNK_01e4a2d8;
undefined8 DAT_02c003f0;
undefined DAT_02c002e0;
_STACK *DAT_03217958;
_STACK *DAT_03217960;
undefined1[56] PKCS7_SIGNED_it;
undefined1[56] PKCS7_SIGNER_INFO_it;
undefined1[56] PKCS7_ENVELOPE_it;
undefined1[56] PKCS7_RECIP_INFO_it;
undefined1[56] PKCS7_ENC_CONTENT_it;
undefined1[56] PKCS7_SIGN_ENVELOPE_it;
undefined1[56] PKCS7_ENCRYPT_it;
undefined1[56] PKCS7_DIGEST_it;
undefined8 DAT_02c00560;
undefined DAT_02c007f0;
undefined1[56] PKCS7_ATTR_SIGN_it;
undefined1[56] PKCS7_ATTR_VERIFY_it;
undefined1[56] PKCS12_it;
undefined1[56] PKCS12_MAC_DATA_it;
undefined1[56] PKCS12_BAGS_it;
undefined1[56] PKCS12_SAFEBAG_it;
undefined PKCS12_SAFEBAG_free;
undefined PKCS7_free;
undefined8 DAT_02c00ce0;
undefined DAT_02c00b70;
undefined8 DAT_02c00f00;
undefined DAT_02c00ec0;
undefined DAT_02c00f50;
undefined1[56] OCSP_SIGNATURE_it;
undefined1[56] OCSP_CERTID_it;
undefined1[56] OCSP_ONEREQ_it;
undefined1[56] OCSP_REQINFO_it;
undefined1[56] OCSP_REQUEST_it;
undefined1[56] OCSP_RESPBYTES_it;
undefined1[56] OCSP_RESPONSE_it;
undefined1[56] OCSP_RESPID_it;
undefined1[56] OCSP_REVOKEDINFO_it;
undefined1[56] OCSP_CERTSTATUS_it;
undefined1[56] OCSP_SINGLERESP_it;
undefined1[56] OCSP_RESPDATA_it;
undefined1[56] OCSP_BASICRESP_it;
undefined1[56] OCSP_CRLID_it;
undefined1[56] OCSP_SERVICELOC_it;
undefined8 DAT_02c00f90;
undefined DAT_02c010d0;
undefined8 DAT_02c01340;
undefined DAT_02c012c0;
UI_METHOD *DAT_03217968;
undefined LAB_01aa6f5c;
undefined FUN_01aa8040;
undefined *PTR_s_OpenSSL_default_user_interface_02c01410;
FILE *DAT_03217990;
FILE *DAT_03217988;
int DAT_03217984;
int DAT_03217980;
undefined DAT_03217998;
undefined4 DAT_032179b8;
char DAT_03217970;
undefined DAT_032179bc;
undefined DAT_032179a8;
undefined4 DAT_032179dc;
undefined DAT_032179cc;
undefined LAB_01aa8f10;
undefined DAT_03217a00;
undefined DAT_03217a20;
undefined DAT_03217a40;
undefined DAT_03217a60;
undefined DAT_03217a80;
undefined DAT_03217aa0;
undefined DAT_03217ac0;
undefined DAT_03217ae0;
undefined DAT_03217b00;
undefined DAT_03217b40;
undefined DAT_03217b80;
undefined DAT_03217ba0;
undefined DAT_03217bc0;
undefined DAT_03217be0;
undefined DAT_03217c00;
undefined DAT_03217c20;
undefined DAT_03217c40;
undefined DAT_03217c60;
undefined DAT_03217c80;
undefined DAT_03217ca0;
undefined DAT_03217cc0;
undefined DAT_03217ce0;
undefined DAT_03217d00;
undefined DAT_03217d20;
undefined DAT_03217d40;
undefined DAT_03217d60;
undefined DAT_03217d80;
undefined DAT_03217da0;
undefined DAT_03217dc0;
ulong UNK_032179a0;
undefined8 UNK_032179b0;
ulong UNK_032179c4;
undefined8 UNK_032179d4;
undefined8 DAT_02c01450;
undefined DAT_02c01960;
undefined1[56] CMS_EnvelopedData_it;
undefined1[56] CMS_KeyTransRecipientInfo_it;
undefined1[56] CMS_RecipientInfo_it;
undefined1[56] CMS_OtherKeyAttribute_it;
undefined1[56] CMS_KEKRecipientInfo_it;
undefined1[56] CMS_EncryptedData_it;
undefined1[56] CMS_PasswordRecipientInfo_it;
undefined1[56] CMS_KeyAgreeRecipientInfo_it;
undefined1[56] CMS_RecipientKeyIdentifier_it;
undefined1[56] CMS_RecipientEncryptedKey_it;
undefined1[56] CMS_OriginatorPublicKey_it;
undefined8 DAT_02c020e0;
undefined DAT_02c01ea0;
undefined *PTR_PTR_02c02428;
undefined *PTR_PTR_02c02430;
undefined *PTR_PTR_02c02440;
undefined *PTR_PTR_02c02448;
undefined *PTR_PTR_02c02458;
undefined *PTR_PTR_02c02460;
undefined *PTR_PTR_02c02470;
undefined *PTR_PTR_02c02478;
undefined *PTR_PTR_02c02488;
undefined *PTR_PTR_02c02490;
undefined *PTR_PTR_02c024a0;
undefined *PTR_PTR_02c024a8;
undefined *PTR_PTR_02c024b8;
undefined *PTR_PTR_02c024c0;
pointer PTR_DAT_02c02420;
undefined *PTR_DAT_02c02438;
undefined *PTR_DAT_02c02450;
undefined *PTR_DAT_02c02468;
undefined *PTR_DAT_02c02480;
undefined *PTR_DAT_02c02498;
undefined *PTR_s_1024_02c024b0;
undefined SRP_user_pwd_free;
string s_0123456789ABCDEFGHIJKLMNOPQRSTUV_02c03290;
int DAT_03217df0;
byte DAT_03217de0;
undefined LAB_01aae150;
undefined LAB_01aae3b8;
undefined DAT_02bc6ee0;
undefined DAT_02c032f0;
pointer PTR_s_IBM_4758_CCA_RSA_method_02c03320;
undefined DAT_02c03390;
undefined DAT_02c03410;
undefined FUN_01aae858;
undefined FUN_01aae1c4;
undefined FUN_01aae47c;
undefined FUN_01aae56c;
DSO *DAT_03217e28;
DSO_FUNC_TYPE DAT_03217e38;
DSO_FUNC_TYPE DAT_03217e30;
DSO_FUNC_TYPE DAT_03217e10;
DSO_FUNC_TYPE DAT_03217e08;
DSO_FUNC_TYPE DAT_03217e00;
DSO_FUNC_TYPE DAT_03217df8;
DSO_FUNC_TYPE DAT_03217e18;
char *DAT_03217e20;
int DAT_02c032e0;
undefined LAB_01aaf458;
long DAT_03217e28;
undefined *DAT_03217e30;
undefined *DAT_03217e38;
undefined *DAT_03217e00;
undefined *DAT_03217e08;
undefined DAT_02c03570;
undefined DAT_02c03580;
undefined DAT_02c03510;
_func_1735 *DAT_02c03520;
undefined *PTR_FUN_02c03528;
undefined *PTR_LAB_02c03530;
undefined DAT_02c034c8;
int DAT_03217e50;
undefined *PTR_LAB_02c034d8;
byte DAT_03217e40;
undefined LAB_01aaf634;
undefined LAB_01aaf824;
undefined LAB_01aafc00;
undefined DAT_02bc6f20;
pointer PTR_s_Aep_DH_method_02c034c0;
pointer PTR_s_Aep_DSA_method_02c03508;
pointer PTR_s_Aep_RSA_method_02c03568;
undefined DAT_02c035d8;
undefined DAT_02c03668;
_func_1702 *UNK_02c034d0;
_func_1734 *UNK_02c03518;
_func_1619 *UNK_02c03578;
_func_1621 *UNK_02c03588;
undefined FUN_01aaf898;
undefined FUN_01aafb38;
undefined FUN_01aafa48;
DSO *DAT_03217e58;
undefined *DAT_03217e88;
undefined *DAT_03217e68;
undefined8 DAT_03217e60;
undefined8 DAT_03217e90;
undefined8 DAT_03217e70;
undefined8 DAT_03217e80;
undefined8 DAT_03217e78;
undefined8 DAT_03217ea0;
long DAT_03217e58;
char *DAT_03217e98;
undefined *DAT_03217e90;
undefined FUN_01ab031c;
__pid_t DAT_03217e54;
undefined *DAT_03217e70;
undefined *DAT_03217e78;
undefined *DAT_03217e80;
undefined LAB_01ab0308;
undefined LAB_01ab0348;
undefined DAT_02c038c0;
undefined DAT_02c038d0;
undefined DAT_02c03800;
_func_1735 *DAT_02c03810;
int DAT_032186b0;
undefined DAT_02c037b8;
byte DAT_032186a0;
undefined8 DAT_02c03790;
undefined LAB_01ab05a4;
undefined LAB_01ab07d0;
undefined DAT_02bc6f60;
pointer PTR_s_Atalla_DH_method_02c037b0;
pointer PTR_s_Atalla_DSA_method_02c037f8;
undefined DAT_02c03858;
pointer PTR_s_Atalla_RSA_method_02c038b8;
undefined FUN_01ab0624;
undefined DAT_02c03928;
undefined FUN_01ab0880;
_func_1702 *UNK_02c037c0;
_func_1734 *UNK_02c03808;
_func_1619 *UNK_02c038c8;
_func_1621 *UNK_02c038d8;
DSO *DAT_032186b8;
DSO_FUNC_TYPE DAT_032186c0;
char *DAT_032186c8;
DSO_FUNC_TYPE DAT_032186d0;
DSO_FUNC_TYPE DAT_032186d8;
long DAT_032186b8;
undefined *DAT_032186c0;
undefined DAT_02c03ac0;
undefined DAT_02c03ad0;
int DAT_03218710;
undefined DAT_02c03a18;
byte DAT_03218700;
undefined8 DAT_02c039c0;
undefined LAB_01ab0fe8;
undefined LAB_01ab1068;
undefined LAB_01ab126c;
undefined DAT_02bc6fa0;
undefined DAT_02c039e0;
pointer PTR_s_CryptoSwift_DH_method_02c03a10;
pointer PTR_s_CryptoSwift_DSA_method_02c03a58;
pointer PTR_s_CryptoSwift_RSA_method_02c03ab8;
undefined DAT_02c03b28;
undefined DAT_02c03bc8;
_func_1702 *UNK_02c03a20;
undefined FUN_01ab133c;
_func_1619 *UNK_02c03ac8;
_func_1621 *UNK_02c03ad8;
long DAT_03218720;
char *DAT_03218718;
undefined8 p_CSwift_ReleaseAccContext;
undefined8 p_CSwift_AttachKeyParam;
undefined8 p_CSwift_AcquireAccContext;
undefined8 p_CSwift_SimpleRequest;
undefined DAT_02c03d18;
undefined DAT_02c03d28;
int DAT_03218740;
undefined DAT_02c03cd0;
byte DAT_03218730;
undefined8 DAT_02c03c78;
undefined LAB_01ab2c78;
undefined LAB_01ab310c;
undefined LAB_01ab3868;
undefined FUN_01ab301c;
undefined DAT_02bc6fe0;
undefined DAT_02c03c98;
pointer PTR_s_CHIL_DH_method_02c03cc8;
pointer PTR_s_CHIL_RSA_method_02c03d10;
undefined DAT_02c03e18;
undefined DAT_02c03ec8;
_func_1702 *UNK_02c03cd8;
_func_1619 *UNK_02c03d20;
_func_1621 *UNK_02c03d30;
undefined FUN_01ab2cf8;
undefined FUN_01ab3484;
DSO *DAT_03218780;
DSO_FUNC_TYPE DAT_032187a0;
DSO_FUNC_TYPE DAT_03218788;
DSO_FUNC_TYPE DAT_03218798;
DSO_FUNC_TYPE DAT_03218790;
DSO_FUNC_TYPE DAT_03218758;
DSO_FUNC_TYPE DAT_03218750;
DSO_FUNC_TYPE DAT_03218768;
DSO_FUNC_TYPE DAT_03218760;
DSO_FUNC_TYPE DAT_03218770;
char *DAT_03218778;
int DAT_03218744;
long DAT_03218748;
int DAT_02c03c70;
undefined1 *DAT_02c03db0;
undefined *DAT_02c03db8;
undefined DAT_02c03dc0;
undefined LAB_01ab400c;
undefined UNK_01ab4068;
undefined UNK_01ab4080;
undefined8 DAT_02c03d80;
undefined8 DAT_032187b0;
undefined *UNK_02c03dc8;
undefined FUN_01ab403c;
void *DAT_03218778;
undefined8 DAT_03218748;
undefined *DAT_03218790;
BIO *DAT_032187a8;
undefined8 DAT_032187a0;
undefined8 DAT_03218788;
undefined8 DAT_03218798;
undefined8 DAT_03218758;
undefined8 DAT_03218750;
undefined8 DAT_03218768;
undefined8 DAT_03218760;
undefined8 DAT_03218770;
undefined *DAT_03218798;
undefined *DAT_032187a0;
undefined *DAT_03218750;
undefined *DAT_03218758;
undefined *DAT_03218760;
undefined *DAT_03218770;
undefined DAT_02c040e0;
undefined DAT_02c040f0;
undefined DAT_02c04080;
_func_1735 *DAT_02c04090;
int DAT_032187e0;
undefined DAT_02c03fe8;
byte DAT_032187d0;
undefined8 DAT_02c03fc0;
undefined LAB_01ab45bc;
undefined LAB_01ab463c;
undefined LAB_01ab473c;
undefined FUN_01ab47ec;
undefined DAT_02bc70a0;
pointer PTR_s_Nuron_DH_method_02c03fe0;
undefined DAT_02c04028;
pointer PTR_s_Nuron_DSA_method_02c04078;
pointer PTR_s_Nuron_RSA_method_02c040d8;
undefined DAT_02c04148;
_func_1702 *UNK_02c03ff0;
_func_1734 *UNK_02c04088;
_func_1619 *UNK_02c040e8;
_func_1621 *UNK_02c040f8;
long DAT_032187e8;
char *DAT_032187f8;
undefined *DAT_032187f0;
undefined DAT_02c042c8;
_func_1735 *DAT_02c04278;
undefined DAT_02c04220;
int DAT_03218810;
byte DAT_03218800;
undefined8 DAT_02c041c8;
undefined LAB_01ab4d5c;
undefined FUN_01ab51bc;
pointer PTR_LAB_02c041e8;
pointer PTR_s_SureWare_DH_method_02c04218;
undefined FUN_01ab52a8;
pointer PTR_s_SureWare_DSA_method_02c04260;
undefined FUN_01ab4dc4;
pointer PTR_s_SureWare_RSA_method_02c042c0;
undefined FUN_01ab5408;
undefined FUN_01ab551c;
undefined DAT_02c04330;
undefined DAT_02c043c0;
_func_1702 *UNK_02c04228;
_func_1619 *UNK_02c042d0;
DSO *DAT_03218850;
DSO_FUNC_TYPE DAT_03218818;
DSO_FUNC_TYPE DAT_03218860;
DSO_FUNC_TYPE DAT_03218858;
DSO_FUNC_TYPE DAT_03218848;
DSO_FUNC_TYPE DAT_03218870;
DSO_FUNC_TYPE DAT_03218868;
DSO_FUNC_TYPE DAT_03218880;
DSO_FUNC_TYPE DAT_03218878;
DSO_FUNC_TYPE DAT_03218830;
DSO_FUNC_TYPE DAT_03218828;
DSO_FUNC_TYPE DAT_03218840;
DSO_FUNC_TYPE DAT_03218838;
DSO_FUNC_TYPE DAT_03218888;
byte DAT_03218804;
int DAT_02c041c0;
int DAT_02c041c4;
undefined LAB_01ab61b0;
undefined *DAT_03218860;
BIO *DAT_03218820;
undefined8 DAT_03218818;
undefined8 DAT_03218858;
undefined8 DAT_03218848;
undefined8 DAT_03218870;
undefined8 DAT_03218868;
undefined8 DAT_03218880;
undefined8 DAT_03218878;
undefined8 DAT_03218830;
undefined8 DAT_03218828;
undefined8 DAT_03218840;
undefined8 DAT_03218838;
undefined8 DAT_03218888;
undefined1 DAT_03218804;
undefined *DAT_03218868;
undefined *DAT_03218880;
undefined *DAT_03218818;
undefined *DAT_03218828;
undefined *DAT_03218830;
undefined *DAT_03218838;
undefined *DAT_03218848;
undefined *DAT_03218840;
undefined *DAT_03218870;
undefined *DAT_03218888;
undefined DAT_02c04590;
undefined DAT_02c045a0;
int DAT_032188a0;
undefined *PTR_FUN_02c044f0;
undefined FUN_01ab68f8;
undefined *PTR_FUN_02c044e8;
undefined FUN_01ab6ce4;
byte DAT_03218890;
undefined8 DAT_02c044c0;
undefined LAB_01ab6878;
undefined LAB_01ab6c18;
undefined DAT_02bc70e0;
pointer PTR_s_UBSEC_DH_method_02c044e0;
pointer PTR_s_UBSEC_DSA_method_02c04528;
pointer PTR_s_UBSEC_RSA_method_02c04588;
undefined DAT_02c045f8;
undefined DAT_02c04698;
_func_1619 *UNK_02c04598;
_func_1621 *UNK_02c045a8;
undefined4 DAT_02c044b0;
DSO *DAT_032188c0;
DSO_FUNC_TYPE DAT_032188f8;
DSO_FUNC_TYPE DAT_032188b0;
DSO_FUNC_TYPE DAT_032188a8;
DSO_FUNC_TYPE DAT_032188b8;
DSO_FUNC_TYPE DAT_032188f0;
DSO_FUNC_TYPE DAT_032188e8;
DSO_FUNC_TYPE DAT_032188d0;
DSO_FUNC_TYPE DAT_032188c8;
DSO_FUNC_TYPE DAT_032188e0;
DSO_FUNC_TYPE DAT_032188d8;
DSO_FUNC_TYPE DAT_03218918;
char *DAT_03218900;
DSO_FUNC_TYPE DAT_03218908;
DSO_FUNC_TYPE DAT_03218910;
long DAT_032188c0;
int DAT_02c044b0;
undefined *DAT_032188a8;
undefined *DAT_032188b0;
undefined *DAT_032188b8;
undefined *DAT_032188c8;
undefined *DAT_032188e8;
undefined *DAT_032188f0;
undefined *DAT_032188f8;
undefined8 DAT_03218920;
undefined8 DAT_03218930;
undefined8 DAT_03218928;
undefined8 DAT_03218938;
undefined8 DAT_03218940;
undefined8 DAT_03218948;
undefined LAB_01ab80c8;
undefined LAB_01ab8124;
undefined gost_control_func;
undefined LAB_01ab8180;
undefined1[120] digest_gost;
undefined LAB_01ab8200;
undefined LAB_01ab82b0;
undefined LAB_01ab82b8;
undefined1[88] cipher_gost_cpacnt;
undefined1[120] imit_gost_cpa;
undefined FUN_01ab8284;
undefined1[88] cipher_gost;
undefined1[64] gost_cmds;
undefined1[128] GostR3411_94_CryptoProParamSet;
undefined LAB_01ab89c0;
undefined LAB_01ab8a54;
undefined LAB_01ab8a5c;
undefined LAB_01ab8a64;
undefined LAB_01ab8ce8;
undefined LAB_01ab9050;
undefined LAB_01ab9170;
undefined FUN_01ab941c;
undefined LAB_01ab9178;
undefined FUN_01ab92bc;
undefined LAB_01ab9258;
undefined pkey_GOST94cp_encrypt;
undefined LAB_01ab93ec;
undefined pkey_gost94_derive;
undefined pkey_GOST01cp_encrypt;
undefined pkey_gost2001_derive;
undefined FUN_01ab8b00;
undefined pkey_GOST01cp_decrypt;
undefined pkey_GOST94cp_decrypt;
undefined FUN_01ab8c58;
undefined FUN_01ab8d7c;
undefined FUN_01ab8e1c;
undefined FUN_01ab8eb0;
undefined FUN_01ab91cc;
undefined FUN_01ab92a8;
undefined FUN_01ab85e0;
undefined FUN_01ab933c;
undefined FUN_01ab8770;
undefined FUN_01ab8890;
undefined FUN_01ab8930;
undefined FUN_01ab8a6c;
undefined4 R3410_paramset;
undefined4 R3410_2001_paramset;
undefined8 DAT_02c04840;
undefined DAT_02c04810;
undefined8 DAT_02c04920;
undefined DAT_02c048f0;
undefined DAT_01e4e964;
undefined DAT_01e4ed64;
undefined DAT_01e4f164;
undefined DAT_01e4f564;
undefined4 DAT_01e4f964;
undefined DAT_01e4f98c;
undefined DAT_01e4fd8c;
undefined DAT_01e5018c;
undefined DAT_01e5058c;
undefined DAT_01e5098c;
undefined DAT_01e50ab3;
undefined1 UNK_00000000;
undefined1 UNK_00000001;
undefined1 UNK_00000002;
undefined1 UNK_00000003;
undefined1 UNK_00000004;
undefined1 UNK_00000005;
undefined1 UNK_00000006;
undefined1 UNK_00000007;
undefined DAT_01e50c74;
undefined1[1024] CAST_S_table4;
undefined4 CAST_S_table6;
undefined4 CAST_S_table5;
undefined1[1024] CAST_S_table7;
undefined1[1024] CAST_S_table2;
undefined1[1024] CAST_S_table3;
undefined1[1024] CAST_S_table0;
undefined1[1024] CAST_S_table1;
undefined DAT_01e53dbc;
undefined DAT_01e541bc;
undefined DAT_01e545bc;
undefined DAT_01e549bc;
undefined DAT_01e54dc8;
undefined8 DAT_01e54e48;
undefined UNK_01e54e76;
undefined8 DAT_02c04ae0;
undefined DAT_02c049a0;
undefined8 DAT_02c050d0;
undefined DAT_02c04d90;
undefined1[56] X9_62_PENTANOMIAL_it;
undefined1[56] X9_62_CHARACTERISTIC_TWO_it;
undefined1[56] ECPARAMETERS_it;
undefined1[56] ECPKPARAMETERS_it;
undefined1[56] EC_PRIVATEKEY_it;
undefined DAT_02bc79b8;
undefined *PTR_s_Eric_Young's_PKCS#1_RSA_02c059e0;
undefined8 DAT_02c05a50;
undefined DAT_02c05e50;
undefined8 DAT_02c06380;
undefined DAT_02c06290;
ECDSA_METHOD *DAT_03218968;
undefined LAB_01add9c0;
undefined LAB_01add9cc;
undefined1[56] ECDSA_SIG_it;
undefined *PTR_s_OpenSSL_ECDSA_method_02c06530;
undefined8 DAT_02c06560;
undefined DAT_02c065d0;
undefined1[56] DHparams_it;
undefined1[56] DHxparams_it;
undefined8 DAT_02c06760;
undefined DAT_02c06660;
pointer PTR_DAT_02bc8860;
pointer PTR_DAT_02bc8878;
pointer PTR_DAT_02bc8890;
pointer PTR_DAT_02bc88a8;
pointer PTR_DAT_02bc88c0;
pointer PTR_DAT_02bc88d8;
pointer PTR_DAT_02bc88f0;
pointer PTR_DAT_02bc8908;
pointer PTR_DAT_02bc8920;
undefined DAT_02c068b0;
ECDH_METHOD *DAT_03218970;
undefined LAB_01adfde0;
undefined LAB_01adfdec;
pointer PTR_s_OpenSSL_ECDH_method_02c068b8;
undefined8 DAT_02c068e0;
undefined DAT_02c06920;
undefined8 DAT_02c06a90;
undefined DAT_02c06970;
DSO_METHOD *DAT_03218978;
long DAT_03218978;
undefined8 DAT_02c06db0;
undefined DAT_02c07030;
undefined DAT_03218980;
undefined LAB_01ae15ac;
undefined LAB_01ae15b4;
undefined FUN_01ae12fc;
undefined LAB_01ae13dc;
byte DAT_03218980;
undefined LAB_01ae1594;
undefined8 DAT_02c072d0;
undefined DAT_03218988;
undefined8 DAT_02c07520;
undefined DAT_02c07340;
undefined DAT_02c07750;
undefined FUN_01ae1ae8;
undefined LAB_01ae1b44;
char DAT_032189a0;
uint DAT_032189d4;
undefined8 DAT_032189e8;
long DAT_032189f0;
undefined DAT_032189b0;
undefined DAT_032189c0;
uint DAT_032189d8;
double DAT_032189e0;
undefined DAT_032189f8;
undefined1 DAT_03218a08;
undefined8 UNK_032189b8;
undefined1[48] rand_ssleay_meth;
byte DAT_032189a4;
undefined1 DAT_032189a0;
int DAT_032189d0;
int DAT_032189d4;
int DAT_032189d8;
long DAT_032189e8;
undefined8 DAT_032189f0;
undefined4 DAT_032189c0;
undefined8 DAT_02c077d0;
undefined DAT_02c07810;
pointer PTR_s_/dev/urandom_02bc8938;
undefined *PTR_s_/var/run/egd-pool_02bc8950;
undefined LAB_01ae2e28;
undefined DAT_01e59e7b;
undefined1 DAT_03218e6f;
undefined1 DAT_03218e20;
undefined DAT_02bc8978;
undefined DAT_02bc89d0;
undefined DAT_02bc8a48;
undefined DAT_02bc8ac0;
undefined DAT_02bc8b38;
undefined DAT_02bc8bb0;
undefined DAT_02c07870;
undefined DAT_02c078c0;
undefined1[56] ASN1_TIME_it;
undefined DAT_01e5a0d8;
undefined1[56] X509_VAL_it;
undefined1[56] X509_REVOKED_it;
undefined LAB_01ae94b0;
undefined *PTR_DAT_02c07910;
undefined DAT_02c07918;
undefined1[56] NETSCAPE_SPKI_it;
undefined1[56] NETSCAPE_CERT_SEQUENCE_it;
undefined1[40] default_pctx;
string s__02c07968;
undefined DAT_01e5a336;
undefined LAB_01aec1f4;
undefined LAB_01aec7b8;
ulong DAT_02c07980;
_STACK *DAT_03218e78;
undefined LAB_01aed278;
undefined DAT_01e5a578;
undefined LAB_01aed230;
undefined LAB_01aed268;
undefined d2i_RSAPrivateKey;

uint FUN_019532cc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01953308(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01953344(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01953380(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0x3f80000000000000;
      *(undefined4 *)(param_2 + 1) = 0;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




void FUN_019533ac(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 1.5;
      fVar5 = 0.3;
      if (fVar6 < 1.0) {
        fVar4 = 1.0;
        fVar5 = 0.0;
        if (0.0 < fVar6) {
          uVar3 = (uint)(fVar6 * 64.0);
          uVar1 = uVar3 + 1;
          fVar6 = fVar6 * 64.0;
          fVar4 = 1.5;
          fVar5 = 0.3;
          if (uVar1 < 0x40) {
            fVar4 = *(float *)(&DAT_01e0ec28 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01e0ec28 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01e0ec28 + (ulong)uVar3 * 4));
            fVar5 = *(float *)(&DAT_01e0ed28 + (ulong)uVar3 * 4) +
                    (fVar6 - (float)(int)fVar6) *
                    (*(float *)(&DAT_01e0ed28 + (ulong)uVar1 * 4) -
                    *(float *)(&DAT_01e0ed28 + (ulong)uVar3 * 4));
          }
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.029697, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        fVar4 = 0.0;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01e0ee28 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01e0ee28 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e0ee28 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_0195350c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




void FUN_0195351c(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar3 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 3.6;
      if ((fVar3 < 1.0) && (fVar4 = 1.3, 0.0 < fVar3)) {
        uVar1 = (int)(fVar3 * 64.0) + 1;
        fVar4 = 3.6;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01e0ef28 + (ulong)(uint)(int)(fVar3 * 64.0) * 4) +
                  (fVar3 * 64.0 - (float)(int)(fVar3 * 64.0)) *
                  (*(float *)(&DAT_01e0ef28 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e0ef28 + (ulong)(uint)(int)(fVar3 * 64.0) * 4));
        }
      }
      *param_3 = fVar4;
      uVar2 = uVar2 - 1;
      param_4 = param_4 + 1;
      param_3 = param_3 + 1;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_019535c8(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_019535d4(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0x40400000;
  *param_2 = 0xc000000000000000;
  return 1;
}




undefined8 FUN_019535f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_01953600(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40800000;
  return 1;
}




undefined8 FUN_01953610(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42480000;
  return 1;
}




undefined8 FUN_01953620(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01953630(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 3.0 + 2.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_019536a8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0x3e19999a3e19999a;
  return 1;
}




int FUN_019536c0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_0195373c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.65 + 0.85;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_019537bc(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x408000003e4ccccd;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




void FUN_019537e0(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      *param_2 = 0xbdcccccd00000000;
      *(undefined4 *)(param_2 + 1) = 0x3f800000;
      param_1 = param_1 + -1;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (param_1 != 0);
  }
  return;
}




void FUN_01953810(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      *param_3 = 0x3f800000;
      *(undefined4 *)(param_3 + 1) = 0;
      fVar4 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = -0.0;
      if ((fVar4 < 1.0) && (fVar5 = 0.0, -0.0 < fVar4)) {
        uVar3 = (uint)((fVar4 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar5 = -0.0;
        if (uVar1 < 0x40) {
          fVar5 = (fVar4 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01e0f028 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01e0f028 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e0f028 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_019538d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_019538e0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbe800000;
  return 1;
}




undefined8 FUN_019538f0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x437a0000;
  return 1;
}




undefined8 FUN_01953900(undefined8 param_1,undefined8 *param_2)

{
  *(undefined4 *)(param_2 + 1) = 0;
  *param_2 = 0x4000000000000000;
  return 1;
}




undefined8 FUN_01953918(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3fc00000;
  return 1;
}




undefined8 FUN_01953928(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01953934(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x41a00000;
  return 1;
}




undefined8 FUN_01953944(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01953954(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 3.0 + 0.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_019539cc(int param_1,undefined8 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x3e3851ec3e3851ec;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




int FUN_019539f4(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 360.0 + -180.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




int FUN_01953a74(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 2.5 + 0.5;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01953aec(int param_1,undefined4 *param_2)

{
  if (0 < param_1) {
    do {
      param_1 = param_1 + -1;
      *param_2 = 0x43b40000;
      param_2 = param_2 + 1;
    } while (param_1 != 0);
  }
  return;
}




int FUN_01953b0c(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 * 0.5 + -0.25;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}




void FUN_01953b84(float param_1,uint param_2,float *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    do {
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 1.0;
      fVar5 = 0.5;
      if ((fVar6 < 1.0) && (fVar4 = 0.1, fVar5 = 0.1, -0.0 < fVar6)) {
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        fVar4 = (fVar6 + 0.0) * 64.0;
        if (uVar1 < 0x40) {
          fVar5 = *(float *)(&DAT_01e16628 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01e16628 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e16628 + (ulong)uVar3 * 4));
          fVar4 = *(float *)(&DAT_01e16528 + (ulong)uVar3 * 4) +
                  (fVar4 - (float)(int)fVar4) *
                  (*(float *)(&DAT_01e16528 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e16528 + (ulong)uVar3 * 4));
        }
        else {
          fVar5 = 0.5;
          fVar4 = 1.0;
        }
      }
      *param_3 = fVar4;
      param_3[1] = fVar5;
      param_3[2] = 0.0;
      fVar5 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar4 = 0.0;
      if ((fVar5 < 1.0) && (fVar4 = 0.0, 0.0 < fVar5)) {
        uVar1 = (int)(fVar5 * 64.0) + 1;
        if (uVar1 < 0x40) {
          fVar4 = *(float *)(&DAT_01e0f128 + (ulong)(uint)(int)(fVar5 * 64.0) * 4) +
                  (fVar5 * 64.0 - (float)(int)(fVar5 * 64.0)) *
                  (*(float *)(&DAT_01e0f128 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e0f128 + (ulong)(uint)(int)(fVar5 * 64.0) * 4));
        }
      }
      param_3[3] = fVar4;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 4;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01953ce4(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01953cf4(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01953d00(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01953d0c(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01953d1c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01953d28(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01953d38(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01953d44(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




undefined8 FUN_01953d54(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01953d60(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x3fa00000,4);
  *param_2 = uVar1;
  return 1;
}




undefined8 FUN_01953d70(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0;
  return 1;
}




undefined8 FUN_01953d7c(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3ee66666;
  return 1;
}




uint FUN_01953d90(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




uint FUN_01953dcc(uint param_1,void *param_2)

{
  if (0 < (int)param_1) {
    memset(param_2,0,(ulong)param_1 << 2);
  }
  return param_1;
}




void FUN_01953e08(float param_1,uint param_2,undefined8 *param_3,ushort *param_4,long param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  
  if (0 < (int)param_2) {
    uVar2 = (ulong)param_2;
    uVar4 = NEON_fmov(0x3f800000,4);
    do {
      *param_3 = uVar4;
      *(undefined4 *)(param_3 + 1) = 0x3f800000;
      fVar6 = (param_1 - *(float *)(param_5 + 0x48000 + (ulong)*param_4 * 4)) /
              *(float *)(param_5 + 0x50000 + (ulong)*param_4 * 4);
      fVar5 = 0.0;
      if ((fVar6 < 1.0) && (-0.0 < fVar6)) {
        fVar5 = 0.0;
        uVar3 = (uint)((fVar6 + 0.0) * 64.0);
        uVar1 = uVar3 + 1;
        if (uVar1 < 0x40) {
          fVar5 = (fVar6 + 0.0) * 64.0;
          fVar5 = *(float *)(&DAT_01e0f228 + (ulong)uVar3 * 4) +
                  (fVar5 - (float)(int)fVar5) *
                  (*(float *)(&DAT_01e0f228 + (ulong)uVar1 * 4) -
                  *(float *)(&DAT_01e0f228 + (ulong)uVar3 * 4));
        }
      }
      *(float *)((long)param_3 + 0xc) = fVar5;
      param_4 = param_4 + 1;
      uVar2 = uVar2 - 1;
      param_3 = param_3 + 2;
    } while (uVar2 != 0);
  }
  return;
}




undefined8 FUN_01953ec0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  *(undefined4 *)(param_2 + 1) = 0;
  return 1;
}




undefined8 FUN_01953ed0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0xbf000000;
  return 1;
}




undefined8 FUN_01953ee0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x42c80000;
  return 1;
}




int FUN_01953ef0(int param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (0 < param_1) {
    uVar5 = NEON_fmov(0x41200000,4);
    uVar6 = NEON_fmov(0xc0a00000,4);
    iVar1 = param_1;
    do {
      iVar2 = rand();
      iVar3 = rand();
      uVar4 = NEON_scvtf(CONCAT44(iVar3,iVar2),4);
      iVar2 = rand();
      *param_2 = CONCAT44((float)((ulong)uVar4 >> 0x20) * 4.656613e-10 *
                          (float)((ulong)uVar5 >> 0x20) + (float)((ulong)uVar6 >> 0x20),
                          (float)uVar4 * 4.656613e-10 * (float)uVar5 + (float)uVar6);
      iVar1 = iVar1 + -1;
      *(float *)(param_2 + 1) = (float)iVar2 * 4.656613e-10 * 10.0 + -5.0;
      param_2 = (undefined8 *)((long)param_2 + 0xc);
    } while (iVar1 != 0);
  }
  return param_1;
}




undefined8 FUN_01953fb0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x3f800000;
  return 1;
}




undefined8 FUN_01953fc0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40a00000;
  return 1;
}




undefined8 FUN_01953fd0(undefined8 param_1,undefined4 *param_2)

{
  *param_2 = 0x40e00000;
  return 1;
}




undefined8 FUN_01953fe0(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = NEON_fmov(0x3f800000,4);
  param_2[1] = auVar1._8_8_;
  *param_2 = auVar1._0_8_;
  return 1;
}




int FUN_01953ff0(int param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  if (0 < param_1) {
    do {
      iVar2 = rand();
      iVar1 = iVar1 + -1;
      *param_2 = (float)iVar2 * 4.656613e-10 + (float)iVar2 * 4.656613e-10 + 1.0;
      param_2 = param_2 + 1;
    } while (iVar1 != 0);
  }
  return param_1;
}

