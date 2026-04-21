// functions/00959 — 1 functions
#include "libGameKindred.h"




void FUN_009597cc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_027bbd48;
  DAT_02c7ed00 = 0;
  FUN_0099cedc(param_1 + 0xab2);
  FUN_0099cedc(param_1 + 0xaae);
  if ((*(byte *)(param_1 + 0xaa7) & 1) != 0) {
    operator_delete((void *)param_1[0xaa9]);
  }
  if ((*(byte *)(param_1 + 0xaa4) & 1) != 0) {
    operator_delete((void *)param_1[0xaa6]);
  }
  if ((*(byte *)(param_1 + 0xaa1) & 1) != 0) {
    operator_delete((void *)param_1[0xaa3]);
  }
  if ((*(byte *)(param_1 + 0xa9e) & 1) != 0) {
    operator_delete((void *)param_1[0xaa0]);
  }
  if ((*(byte *)(param_1 + 0xa9b) & 1) != 0) {
    operator_delete((void *)param_1[0xa9d]);
  }
  if ((*(byte *)(param_1 + 0xa98) & 1) != 0) {
    operator_delete((void *)param_1[0xa9a]);
  }
  if ((*(byte *)(param_1 + 0xa95) & 1) != 0) {
    operator_delete((void *)param_1[0xa97]);
  }
  if ((*(byte *)(param_1 + 0xa92) & 1) != 0) {
    operator_delete((void *)param_1[0xa94]);
  }
  if ((*(byte *)(param_1 + 0xa8f) & 1) != 0) {
    operator_delete((void *)param_1[0xa91]);
  }
  if ((void *)param_1[0xa8e] != (void *)0x0) {
    operator_delete__((void *)param_1[0xa8e]);
    param_1[0xa8e] = 0;
    param_1[0xa8d] = 0;
  }
  FUN_00951534(param_1 + 0xa88,1);
  FUN_0095f02c(param_1 + 0xa7d,1);
  FUN_0095efbc(param_1 + 0xa7b,1);
  FUN_0095f79c(param_1 + 0xa79,1);
  FUN_00951534(param_1 + 0xa77,1);
  FUN_00951534(param_1 + 0xa75,1);
  FUN_0094f104(param_1 + 0xa59);
  FUN_0094dae0(param_1 + 0xa11);
  param_1[0xa09] = &PTR_FUN_027bbb98;
  FUN_00956964(param_1 + 0xa0e,1);
  FUN_00e84dd8(param_1 + 0xa09);
  param_1[0xa02] = &PTR_FUN_027bbb68;
  FUN_00955c58(param_1 + 0xa07,1);
  FUN_00e84dd8(param_1 + 0xa02);
  param_1[0x9fa] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0x9ff) & 1) != 0) {
    operator_delete((void *)param_1[0xa01]);
  }
  FUN_00e84dd8(param_1 + 0x9fa);
  param_1[0x9f2] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0x9f7) & 1) != 0) {
    operator_delete((void *)param_1[0x9f9]);
  }
  FUN_00e84dd8(param_1 + 0x9f2);
  param_1[0x9ea] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0x9ef) & 1) != 0) {
    operator_delete((void *)param_1[0x9f1]);
  }
  FUN_00e84dd8(param_1 + 0x9ea);
  FUN_00e84dd8(param_1 + 0x9e4);
  FUN_00e84dd8(param_1 + 0x9de);
  param_1[0x9d2] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x9db) & 1) != 0) {
    operator_delete((void *)param_1[0x9dd]);
  }
  if ((*(byte *)(param_1 + 0x9d7) & 1) != 0) {
    operator_delete((void *)param_1[0x9d9]);
  }
  FUN_00e84dd8(param_1 + 0x9d2);
  param_1[0x9c6] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x9cf) & 1) != 0) {
    operator_delete((void *)param_1[0x9d1]);
  }
  if ((*(byte *)(param_1 + 0x9cb) & 1) != 0) {
    operator_delete((void *)param_1[0x9cd]);
  }
  FUN_00e84dd8(param_1 + 0x9c6);
  param_1[0x9ba] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x9c3) & 1) != 0) {
    operator_delete((void *)param_1[0x9c5]);
  }
  if ((*(byte *)(param_1 + 0x9bf) & 1) != 0) {
    operator_delete((void *)param_1[0x9c1]);
  }
  FUN_00e84dd8(param_1 + 0x9ba);
  param_1[0x9ae] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x9b7) & 1) != 0) {
    operator_delete((void *)param_1[0x9b9]);
  }
  if ((*(byte *)(param_1 + 0x9b3) & 1) != 0) {
    operator_delete((void *)param_1[0x9b5]);
  }
  FUN_00e84dd8(param_1 + 0x9ae);
  param_1[0x9a2] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x9ab) & 1) != 0) {
    operator_delete((void *)param_1[0x9ad]);
  }
  if ((*(byte *)(param_1 + 0x9a7) & 1) != 0) {
    operator_delete((void *)param_1[0x9a9]);
  }
  FUN_00e84dd8(param_1 + 0x9a2);
  param_1[0x996] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x99f) & 1) != 0) {
    operator_delete((void *)param_1[0x9a1]);
  }
  if ((*(byte *)(param_1 + 0x99b) & 1) != 0) {
    operator_delete((void *)param_1[0x99d]);
  }
  FUN_00e84dd8(param_1 + 0x996);
  param_1[0x98a] = &PTR_FUN_027bbb38;
  if ((*(byte *)(param_1 + 0x993) & 1) != 0) {
    operator_delete((void *)param_1[0x995]);
  }
  if ((*(byte *)(param_1 + 0x990) & 1) != 0) {
    operator_delete((void *)param_1[0x992]);
  }
  FUN_00e84dd8(param_1 + 0x98a);
  param_1[0x97e] = &PTR_FUN_027bc028;
  if ((*(byte *)(param_1 + 0x986) & 1) != 0) {
    operator_delete((void *)param_1[0x988]);
  }
  FUN_00964bdc(param_1 + 0x983,1);
  FUN_00e84dd8(param_1 + 0x97e);
  FUN_0094f104(param_1 + 0x962);
  param_1[0x95a] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0x95f) & 1) != 0) {
    operator_delete((void *)param_1[0x961]);
  }
  FUN_00e84dd8(param_1 + 0x95a);
  param_1[0x952] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0x957) & 1) != 0) {
    operator_delete((void *)param_1[0x959]);
  }
  FUN_00e84dd8(param_1 + 0x952);
  param_1[0x94a] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0x94f) & 1) != 0) {
    operator_delete((void *)param_1[0x951]);
  }
  FUN_00e84dd8(param_1 + 0x94a);
  param_1[0x942] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0x947) & 1) != 0) {
    operator_delete((void *)param_1[0x949]);
  }
  FUN_00e84dd8(param_1 + 0x942);
  param_1[0x936] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x93f) & 1) != 0) {
    operator_delete((void *)param_1[0x941]);
  }
  if ((*(byte *)(param_1 + 0x93b) & 1) != 0) {
    operator_delete((void *)param_1[0x93d]);
  }
  FUN_00e84dd8(param_1 + 0x936);
  param_1[0x92a] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x933) & 1) != 0) {
    operator_delete((void *)param_1[0x935]);
  }
  if ((*(byte *)(param_1 + 0x92f) & 1) != 0) {
    operator_delete((void *)param_1[0x931]);
  }
  FUN_00e84dd8(param_1 + 0x92a);
  param_1[0x91e] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x927) & 1) != 0) {
    operator_delete((void *)param_1[0x929]);
  }
  if ((*(byte *)(param_1 + 0x923) & 1) != 0) {
    operator_delete((void *)param_1[0x925]);
  }
  FUN_00e84dd8(param_1 + 0x91e);
  param_1[0x912] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x91b) & 1) != 0) {
    operator_delete((void *)param_1[0x91d]);
  }
  if ((*(byte *)(param_1 + 0x917) & 1) != 0) {
    operator_delete((void *)param_1[0x919]);
  }
  FUN_00e84dd8(param_1 + 0x912);
  param_1[0x906] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x90f) & 1) != 0) {
    operator_delete((void *)param_1[0x911]);
  }
  if ((*(byte *)(param_1 + 0x90b) & 1) != 0) {
    operator_delete((void *)param_1[0x90d]);
  }
  FUN_00e84dd8(param_1 + 0x906);
  param_1[0x8fa] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x903) & 1) != 0) {
    operator_delete((void *)param_1[0x905]);
  }
  if ((*(byte *)(param_1 + 0x8ff) & 1) != 0) {
    operator_delete((void *)param_1[0x901]);
  }
  FUN_00e84dd8(param_1 + 0x8fa);
  param_1[0x8ee] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x8f7) & 1) != 0) {
    operator_delete((void *)param_1[0x8f9]);
  }
  if ((*(byte *)(param_1 + 0x8f3) & 1) != 0) {
    operator_delete((void *)param_1[0x8f5]);
  }
  FUN_00e84dd8(param_1 + 0x8ee);
  param_1[0x8e2] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x8eb) & 1) != 0) {
    operator_delete((void *)param_1[0x8ed]);
  }
  if ((*(byte *)(param_1 + 0x8e7) & 1) != 0) {
    operator_delete((void *)param_1[0x8e9]);
  }
  FUN_00e84dd8(param_1 + 0x8e2);
  param_1[0x8d6] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x8df) & 1) != 0) {
    operator_delete((void *)param_1[0x8e1]);
  }
  if ((*(byte *)(param_1 + 0x8db) & 1) != 0) {
    operator_delete((void *)param_1[0x8dd]);
  }
  FUN_00e84dd8(param_1 + 0x8d6);
  param_1[0x8ca] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x8d3) & 1) != 0) {
    operator_delete((void *)param_1[0x8d5]);
  }
  if ((*(byte *)(param_1 + 0x8cf) & 1) != 0) {
    operator_delete((void *)param_1[0x8d1]);
  }
  FUN_00e84dd8(param_1 + 0x8ca);
  param_1[0x8be] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x8c7) & 1) != 0) {
    operator_delete((void *)param_1[0x8c9]);
  }
  if ((*(byte *)(param_1 + 0x8c3) & 1) != 0) {
    operator_delete((void *)param_1[0x8c5]);
  }
  FUN_00e84dd8(param_1 + 0x8be);
  param_1[0x8b2] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x8bb) & 1) != 0) {
    operator_delete((void *)param_1[0x8bd]);
  }
  if ((*(byte *)(param_1 + 0x8b7) & 1) != 0) {
    operator_delete((void *)param_1[0x8b9]);
  }
  FUN_00e84dd8(param_1 + 0x8b2);
  param_1[0x8a6] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x8af) & 1) != 0) {
    operator_delete((void *)param_1[0x8b1]);
  }
  if ((*(byte *)(param_1 + 0x8ab) & 1) != 0) {
    operator_delete((void *)param_1[0x8ad]);
  }
  FUN_00e84dd8(param_1 + 0x8a6);
  param_1[0x89a] = &PTR_FUN_027bbad8;
  if ((*(byte *)(param_1 + 0x8a3) & 1) != 0) {
    operator_delete((void *)param_1[0x8a5]);
  }
  if ((*(byte *)(param_1 + 0x8a0) & 1) != 0) {
    operator_delete((void *)param_1[0x8a2]);
  }
  FUN_00e84dd8(param_1 + 0x89a);
  param_1[0x88e] = &PTR_FUN_027bbff8;
  if ((*(byte *)(param_1 + 0x896) & 1) != 0) {
    operator_delete((void *)param_1[0x898]);
  }
  FUN_00964c98(param_1 + 0x893,1);
  FUN_00e84dd8(param_1 + 0x88e);
  FUN_0094dae0(param_1 + 0x846);
  FUN_00e84dd8(param_1 + 0x840);
  param_1[0x834] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x83d) & 1) != 0) {
    operator_delete((void *)param_1[0x83f]);
  }
  if ((*(byte *)(param_1 + 0x839) & 1) != 0) {
    operator_delete((void *)param_1[0x83b]);
  }
  FUN_00e84dd8(param_1 + 0x834);
  param_1[0x826] = &PTR_FUN_027bb988;
  FUN_00953ec8(param_1 + 0x830,1);
  if ((*(byte *)(param_1 + 0x82d) & 1) != 0) {
    operator_delete((void *)param_1[0x82f]);
  }
  FUN_00951cf4(param_1 + 0x82b,1);
  FUN_00e84dd8(param_1 + 0x826);
  param_1[0x81e] = &PTR_FUN_027bb958;
  FUN_00953988(param_1 + 0x823,1);
  FUN_00e84dd8(param_1 + 0x81e);
  param_1[0x816] = &PTR_FUN_027bb958;
  FUN_00953988(param_1 + 0x81b,1);
  FUN_00e84dd8(param_1 + 0x816);
  param_1[0x80e] = &PTR_FUN_027bb958;
  FUN_00953988(param_1 + 0x813,1);
  FUN_00e84dd8(param_1 + 0x80e);
  param_1[0x802] = &PTR_FUN_027bb928;
  if ((*(byte *)(param_1 + 0x80a) & 1) != 0) {
    operator_delete((void *)param_1[0x80c]);
  }
  if ((*(byte *)(param_1 + 0x807) & 1) != 0) {
    operator_delete((void *)param_1[0x809]);
  }
  FUN_00e84dd8(param_1 + 0x802);
  FUN_00e84dd8(param_1 + 0x7fd);
  param_1[0x7f5] = &PTR_FUN_027bb8c8;
  if ((*(byte *)(param_1 + 0x7fa) & 1) != 0) {
    operator_delete((void *)param_1[0x7fc]);
  }
  FUN_00e84dd8(param_1 + 0x7f5);
  param_1[0x7ed] = &PTR_FUN_027bb898;
  if ((*(byte *)(param_1 + 0x7f2) & 1) != 0) {
    operator_delete((void *)param_1[0x7f4]);
  }
  FUN_00e84dd8(param_1 + 0x7ed);
  param_1[0x7e5] = &PTR_FUN_027bb868;
  if ((*(byte *)(param_1 + 0x7ea) & 1) != 0) {
    operator_delete((void *)param_1[0x7ec]);
  }
  FUN_00e84dd8(param_1 + 0x7e5);
  param_1[0x7dd] = &PTR_FUN_027bb838;
  if ((*(byte *)(param_1 + 0x7e2) & 1) != 0) {
    operator_delete((void *)param_1[0x7e4]);
  }
  FUN_00e84dd8(param_1 + 0x7dd);
  param_1[0x7d5] = &PTR_FUN_027bb808;
  if ((*(byte *)(param_1 + 0x7da) & 1) != 0) {
    operator_delete((void *)param_1[0x7dc]);
  }
  FUN_00e84dd8(param_1 + 0x7d5);
  param_1[0x7ce] = &PTR_FUN_027bbd18;
  FUN_00958034(param_1 + 0x7d3,1);
  FUN_00e84dd8(param_1 + 0x7ce);
  param_1[0x7c5] = &PTR_FUN_027bbce8;
  if ((*(byte *)(param_1 + 0x7cb) & 1) != 0) {
    operator_delete((void *)param_1[0x7cd]);
  }
  FUN_00e84dd8(param_1 + 0x7c5);
  param_1[0x7bc] = &PTR_FUN_027bbcb8;
  if ((*(byte *)(param_1 + 0x7c2) & 1) != 0) {
    operator_delete((void *)param_1[0x7c4]);
  }
  FUN_00e84dd8(param_1 + 0x7bc);
  param_1[0x7b5] = &PTR_FUN_027bbc88;
  FUN_00957b9c(param_1 + 0x7ba,1);
  FUN_00e84dd8(param_1 + 0x7b5);
  param_1[0x7ac] = &PTR_FUN_027bbc58;
  if ((*(byte *)(param_1 + 0x7b2) & 1) != 0) {
    operator_delete((void *)param_1[0x7b4]);
  }
  FUN_00e84dd8(param_1 + 0x7ac);
  param_1[0x797] = &PTR_FUN_027bbc28;
  FUN_009577b8(param_1 + 0x7aa,1);
  FUN_0095783c(param_1 + 0x7a8,1);
  FUN_0095783c(param_1 + 0x7a6,1);
  FUN_0095783c(param_1 + 0x7a4,1);
  FUN_0095783c(param_1 + 0x7a2,1);
  FUN_0095783c(param_1 + 0x7a0,1);
  FUN_009578b4(param_1 + 0x79e,1);
  FUN_00957938(param_1 + 0x79c,1);
  FUN_00e84dd8(param_1 + 0x797);
  param_1[0x787] = &PTR_FUN_027bbbf8;
  FUN_00951534(param_1 + 0x795,1);
  FUN_00951534(param_1 + 0x793,1);
  FUN_00951cf4(param_1 + 0x791,1);
  if ((*(byte *)(param_1 + 0x78e) & 1) != 0) {
    operator_delete((void *)param_1[0x790]);
  }
  FUN_00956edc(param_1 + 0x78c,1);
  FUN_00e84dd8(param_1 + 0x787);
  param_1[0x780] = &PTR_FUN_027bbbc8;
  FUN_00956c00(param_1 + 0x785,1);
  FUN_00e84dd8(param_1 + 0x780);
  param_1[0x777] = &PTR_FUN_027bb7d8;
  if ((*(byte *)(param_1 + 0x77c) & 1) != 0) {
    operator_delete((void *)param_1[0x77e]);
  }
  FUN_00e84dd8(param_1 + 0x777);
  param_1[0x76f] = &PTR_FUN_027bbfc8;
  if ((void *)param_1[0x775] != (void *)0x0) {
    operator_delete__((void *)param_1[0x775]);
    param_1[0x775] = 0;
    param_1[0x774] = 0;
  }
  FUN_00e84dd8(param_1 + 0x76f);
  param_1[0x762] = &PTR_FUN_027bba78;
  if ((*(byte *)(param_1 + 0x76b) & 1) != 0) {
    operator_delete((void *)param_1[0x76d]);
  }
  FUN_00e84dd8(param_1 + 0x762);
  param_1[0x755] = &PTR_FUN_027bba48;
  if ((*(byte *)(param_1 + 0x75e) & 1) != 0) {
    operator_delete((void *)param_1[0x760]);
  }
  FUN_00e84dd8(param_1 + 0x755);
  param_1[0x74a] = &PTR_FUN_027bb748;
  FUN_00951534(param_1 + 0x753,1);
  if ((*(byte *)(param_1 + 0x750) & 1) != 0) {
    operator_delete((void *)param_1[0x752]);
  }
  FUN_00e84dd8(param_1 + 0x74a);
  param_1[0x741] = &PTR_FUN_027bbf98;
  if ((*(byte *)(param_1 + 0x746) & 1) != 0) {
    operator_delete((void *)param_1[0x748]);
  }
  FUN_00e84dd8(param_1 + 0x741);
  param_1[0x738] = &PTR_FUN_027bbf68;
  if ((*(byte *)(param_1 + 0x73d) & 1) != 0) {
    operator_delete((void *)param_1[0x73f]);
  }
  FUN_00e84dd8(param_1 + 0x738);
  param_1[0x730] = &PTR_FUN_027bba18;
  FUN_009544a8(param_1 + 0x735,1);
  FUN_00e84dd8(param_1 + 0x730);
  param_1[0x725] = &PTR_FUN_027bb9e8;
  if ((*(byte *)(param_1 + 0x72c) & 1) != 0) {
    operator_delete((void *)param_1[0x72e]);
  }
  FUN_00954178(param_1 + 0x72a,1);
  FUN_00e84dd8(param_1 + 0x725);
  FUN_00e84dd8(param_1 + 0x71e);
  param_1[0x712] = &PTR_FUN_027bb778;
  if ((*(byte *)(param_1 + 0x71a) & 1) != 0) {
    operator_delete((void *)param_1[0x71c]);
  }
  FUN_00e84dd8(param_1 + 0x712);
  param_1[0x709] = &PTR_FUN_027bbf38;
  if ((*(byte *)(param_1 + 0x70e) & 1) != 0) {
    operator_delete((void *)param_1[0x710]);
  }
  FUN_00e84dd8(param_1 + 0x709);
  param_1[0x700] = &PTR_FUN_027bbf08;
  FUN_00948ab4(param_1 + 0x705,param_1[0x706]);
  FUN_00e84dd8(param_1 + 0x700);
  param_1[0x6f7] = &PTR_FUN_027bbed8;
  if ((*(byte *)(param_1 + 0x6fc) & 1) != 0) {
    operator_delete((void *)param_1[0x6fe]);
  }
  FUN_00e84dd8(param_1 + 0x6f7);
  param_1[0x6ee] = &PTR_FUN_027bbea8;
  if ((*(byte *)(param_1 + 0x6f3) & 1) != 0) {
    operator_delete((void *)param_1[0x6f5]);
  }
  FUN_00e84dd8(param_1 + 0x6ee);
  param_1[0x6e2] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x6eb) & 1) != 0) {
    operator_delete((void *)param_1[0x6ed]);
  }
  if ((*(byte *)(param_1 + 0x6e7) & 1) != 0) {
    operator_delete((void *)param_1[0x6e9]);
  }
  FUN_00e84dd8(param_1 + 0x6e2);
  param_1[0x6d6] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x6df) & 1) != 0) {
    operator_delete((void *)param_1[0x6e1]);
  }
  if ((*(byte *)(param_1 + 0x6db) & 1) != 0) {
    operator_delete((void *)param_1[0x6dd]);
  }
  FUN_00e84dd8(param_1 + 0x6d6);
  param_1[0x6ca] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x6d3) & 1) != 0) {
    operator_delete((void *)param_1[0x6d5]);
  }
  if ((*(byte *)(param_1 + 0x6cf) & 1) != 0) {
    operator_delete((void *)param_1[0x6d1]);
  }
  FUN_00e84dd8(param_1 + 0x6ca);
  param_1[0x6bf] = &PTR_FUN_027b9fd8;
  if ((*(byte *)(param_1 + 0x6c6) & 1) != 0) {
    operator_delete((void *)param_1[0x6c8]);
  }
  FUN_00e84dd8(param_1 + 0x6bf);
  param_1[0x6b0] = &PTR_FUN_027bb6b8;
  if ((*(byte *)(param_1 + 0x6bc) & 1) != 0) {
    operator_delete((void *)param_1[0x6be]);
  }
  if ((*(byte *)(param_1 + 0x6b9) & 1) != 0) {
    operator_delete((void *)param_1[0x6bb]);
  }
  if ((*(byte *)(param_1 + 0x6b6) & 1) != 0) {
    operator_delete((void *)param_1[0x6b8]);
  }
  FUN_00e84dd8(param_1 + 0x6b0);
  param_1[0x6a8] = &PTR_FUN_027bb688;
  FUN_009528b8(param_1 + 0x6ad,1);
  FUN_00e84dd8(param_1 + 0x6a8);
  param_1[0x69c] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x6a5) & 1) != 0) {
    operator_delete((void *)param_1[0x6a7]);
  }
  if ((*(byte *)(param_1 + 0x6a1) & 1) != 0) {
    operator_delete((void *)param_1[0x6a3]);
  }
  FUN_00e84dd8(param_1 + 0x69c);
  param_1[0x690] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x699) & 1) != 0) {
    operator_delete((void *)param_1[0x69b]);
  }
  if ((*(byte *)(param_1 + 0x695) & 1) != 0) {
    operator_delete((void *)param_1[0x697]);
  }
  FUN_00e84dd8(param_1 + 0x690);
  param_1[0x684] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x68d) & 1) != 0) {
    operator_delete((void *)param_1[0x68f]);
  }
  if ((*(byte *)(param_1 + 0x689) & 1) != 0) {
    operator_delete((void *)param_1[0x68b]);
  }
  FUN_00e84dd8(param_1 + 0x684);
  param_1[0x678] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x681) & 1) != 0) {
    operator_delete((void *)param_1[0x683]);
  }
  if ((*(byte *)(param_1 + 0x67d) & 1) != 0) {
    operator_delete((void *)param_1[0x67f]);
  }
  FUN_00e84dd8(param_1 + 0x678);
  param_1[0x66c] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x675) & 1) != 0) {
    operator_delete((void *)param_1[0x677]);
  }
  if ((*(byte *)(param_1 + 0x671) & 1) != 0) {
    operator_delete((void *)param_1[0x673]);
  }
  FUN_00e84dd8(param_1 + 0x66c);
  param_1[0x660] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x669) & 1) != 0) {
    operator_delete((void *)param_1[0x66b]);
  }
  if ((*(byte *)(param_1 + 0x665) & 1) != 0) {
    operator_delete((void *)param_1[0x667]);
  }
  FUN_00e84dd8(param_1 + 0x660);
  FUN_0094a030(param_1 + 0x5c0);
  param_1[0x5b4] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x5bd) & 1) != 0) {
    operator_delete((void *)param_1[0x5bf]);
  }
  if ((*(byte *)(param_1 + 0x5b9) & 1) != 0) {
    operator_delete((void *)param_1[0x5bb]);
  }
  FUN_00e84dd8(param_1 + 0x5b4);
  param_1[0x5a8] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x5b1) & 1) != 0) {
    operator_delete((void *)param_1[0x5b3]);
  }
  if ((*(byte *)(param_1 + 0x5ad) & 1) != 0) {
    operator_delete((void *)param_1[0x5af]);
  }
  FUN_00e84dd8(param_1 + 0x5a8);
  param_1[0x59c] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x5a5) & 1) != 0) {
    operator_delete((void *)param_1[0x5a7]);
  }
  if ((*(byte *)(param_1 + 0x5a1) & 1) != 0) {
    operator_delete((void *)param_1[0x5a3]);
  }
  FUN_00e84dd8(param_1 + 0x59c);
  param_1[0x590] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x599) & 1) != 0) {
    operator_delete((void *)param_1[0x59b]);
  }
  if ((*(byte *)(param_1 + 0x595) & 1) != 0) {
    operator_delete((void *)param_1[0x597]);
  }
  FUN_00e84dd8(param_1 + 0x590);
  param_1[0x584] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x58d) & 1) != 0) {
    operator_delete((void *)param_1[0x58f]);
  }
  if ((*(byte *)(param_1 + 0x589) & 1) != 0) {
    operator_delete((void *)param_1[0x58b]);
  }
  FUN_00e84dd8(param_1 + 0x584);
  param_1[0x578] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x581) & 1) != 0) {
    operator_delete((void *)param_1[0x583]);
  }
  if ((*(byte *)(param_1 + 0x57d) & 1) != 0) {
    operator_delete((void *)param_1[0x57f]);
  }
  FUN_00e84dd8(param_1 + 0x578);
  param_1[0x4ef] = &PTR_FUN_027bb5c8;
  if ((*(byte *)(param_1 + 0x575) & 1) != 0) {
    operator_delete((void *)param_1[0x577]);
  }
  puVar1 = param_1 + 0x572;
  lVar2 = -0x400;
  do {
    if ((*(byte *)(puVar1 + -2) & 1) != 0) {
      operator_delete((void *)*puVar1);
    }
    if ((*(byte *)(puVar1 + -5) & 1) != 0) {
      operator_delete((void *)puVar1[-3]);
    }
    lVar2 = lVar2 + 0x40;
    puVar1 = puVar1 + -8;
  } while (lVar2 != 0);
  FUN_00e84dd8(param_1 + 0x4ef);
  param_1[0x464] = &PTR_FUN_027bbe48;
  if ((*(byte *)(param_1 + 0x4ec) & 1) != 0) {
    operator_delete((void *)param_1[0x4ee]);
  }
  puVar1 = param_1 + 0x4e8;
  lVar2 = -0x400;
  do {
    if ((*(byte *)(puVar1 + -2) & 1) != 0) {
      operator_delete((void *)*puVar1);
    }
    if ((*(byte *)(puVar1 + -5) & 1) != 0) {
      operator_delete((void *)puVar1[-3]);
    }
    lVar2 = lVar2 + 0x40;
    puVar1 = puVar1 + -8;
  } while (lVar2 != 0);
  FUN_00952050(param_1 + 0x469,1);
  FUN_00e84dd8(param_1 + 0x464);
  FUN_0094b310(param_1 + 0x3cc);
  param_1[0x3c0] = &PTR_FUN_027bbe78;
  if ((*(byte *)(param_1 + 0x3c9) & 1) != 0) {
    operator_delete((void *)param_1[0x3cb]);
  }
  if ((*(byte *)(param_1 + 0x3c5) & 1) != 0) {
    operator_delete((void *)param_1[0x3c7]);
  }
  FUN_00e84dd8(param_1 + 0x3c0);
  param_1[0x335] = &PTR_FUN_027bbe48;
  if ((*(byte *)(param_1 + 0x3bd) & 1) != 0) {
    operator_delete((void *)param_1[0x3bf]);
  }
  puVar1 = param_1 + 0x3b9;
  lVar2 = -0x400;
  do {
    if ((*(byte *)(puVar1 + -2) & 1) != 0) {
      operator_delete((void *)*puVar1);
    }
    if ((*(byte *)(puVar1 + -5) & 1) != 0) {
      operator_delete((void *)puVar1[-3]);
    }
    lVar2 = lVar2 + 0x40;
    puVar1 = puVar1 + -8;
  } while (lVar2 != 0);
  FUN_00952050(param_1 + 0x33a,1);
  FUN_00e84dd8(param_1 + 0x335);
  FUN_0094aa5c(param_1 + 0x29a);
  FUN_0094a804(param_1 + 0x208);
  param_1[0x1fc] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x205) & 1) != 0) {
    operator_delete((void *)param_1[0x207]);
  }
  if ((*(byte *)(param_1 + 0x201) & 1) != 0) {
    operator_delete((void *)param_1[0x203]);
  }
  FUN_00e84dd8(param_1 + 0x1fc);
  param_1[0x173] = &PTR_FUN_027bb598;
  if ((*(byte *)(param_1 + 0x1f9) & 1) != 0) {
    operator_delete((void *)param_1[0x1fb]);
  }
  lVar2 = 0;
  do {
    if ((*(byte *)((long)param_1 + lVar2 + 4000) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0xfb0));
    }
    if ((*(byte *)((long)param_1 + lVar2 + 0xf88) & 1) != 0) {
      operator_delete(*(void **)((long)param_1 + lVar2 + 0xf98));
    }
    lVar2 = lVar2 + -0x40;
  } while (lVar2 != -0x400);
  FUN_00e84dd8(param_1 + 0x173);
  FUN_00e84dd8(param_1 + 0x16d);
  FUN_0094a030(param_1 + 0xcd);
  param_1[0xc5] = &PTR_FUN_027bbde8;
  FUN_00964d9c(param_1 + 0xca,1);
  FUN_00e84dd8(param_1 + 0xc5);
  FUN_00e84dd8(param_1 + 0xbf);
  param_1[0xb7] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0xbc) & 1) != 0) {
    operator_delete((void *)param_1[0xbe]);
  }
  FUN_00e84dd8(param_1 + 0xb7);
  param_1[0xaf] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0xb4) & 1) != 0) {
    operator_delete((void *)param_1[0xb6]);
  }
  FUN_00e84dd8(param_1 + 0xaf);
  param_1[0xa7] = &PTR_FUN_027bb4d8;
  FUN_00951cf4(param_1 + 0xac,1);
  FUN_00e84dd8(param_1 + 0xa7);
  param_1[0x9f] = &PTR_FUN_027bb4d8;
  FUN_00951cf4(param_1 + 0xa4,1);
  FUN_00e84dd8(param_1 + 0x9f);
  param_1[0x97] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0x9c) & 1) != 0) {
    operator_delete((void *)param_1[0x9e]);
  }
  FUN_00e84dd8(param_1 + 0x97);
  param_1[0x8f] = &PTR_FUN_027bb4a8;
  if ((*(byte *)(param_1 + 0x94) & 1) != 0) {
    operator_delete((void *)param_1[0x96]);
  }
  FUN_00e84dd8(param_1 + 0x8f);
  param_1[0x87] = &PTR_FUN_027bb478;
  FUN_00951928(param_1 + 0x8d,1);
  FUN_00e84dd8(param_1 + 0x87);
  param_1[0x7b] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x84) & 1) != 0) {
    operator_delete((void *)param_1[0x86]);
  }
  if ((*(byte *)(param_1 + 0x80) & 1) != 0) {
    operator_delete((void *)param_1[0x82]);
  }
  FUN_00e84dd8(param_1 + 0x7b);
  param_1[0x6f] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x78) & 1) != 0) {
    operator_delete((void *)param_1[0x7a]);
  }
  if ((*(byte *)(param_1 + 0x74) & 1) != 0) {
    operator_delete((void *)param_1[0x76]);
  }
  FUN_00e84dd8(param_1 + 0x6f);
  param_1[99] = &PTR_FUN_027b99b0;
  if ((*(byte *)(param_1 + 0x6c) & 1) != 0) {
    operator_delete((void *)param_1[0x6e]);
  }
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    operator_delete((void *)param_1[0x6a]);
  }
  FUN_00e84dd8(param_1 + 99);
  param_1[0x4f] = &PTR_FUN_027bbdb0;
  param_1[0x52] = &PTR_FUN_027bb538;
  FUN_00952050(param_1 + 0x60,1);
  if ((*(byte *)(param_1 + 0x5d) & 1) != 0) {
    operator_delete((void *)param_1[0x5f]);
  }
  if ((*(byte *)(param_1 + 0x5a) & 1) != 0) {
    operator_delete((void *)param_1[0x5c]);
  }
  if ((*(byte *)(param_1 + 0x57) & 1) != 0) {
    operator_delete((void *)param_1[0x59]);
  }
  FUN_00e84dd8(param_1 + 0x52);
  param_1[6] = &PTR_FUN_027bb448;
  param_1[3] = &PTR_FUN_027bbd78;
  FUN_009515b0(param_1 + 0x16);
  FUN_00951478(param_1 + 0x11,1);
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete__((void *)param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  FUN_0095132c(param_1 + 0xd,1);
  FUN_009512b0(param_1 + 0xb,1);
  FUN_00e84dd8(param_1 + 6);
  FUN_00e835e0(param_1);
  return;
}

