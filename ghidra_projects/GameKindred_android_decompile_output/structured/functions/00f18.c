// functions/00f18 — 35 functions
#include "libGameKindred.h"




void FUN_00f18044(undefined8 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_1 = &PTR_FUN_02828778;
  if (((DAT_03211078 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03211078), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03211060,PTR_s_NuoWebViewManager_02bf25b8,"destroyWebView",&DAT_01beef11);
    DAT_03211060 = &PTR_FUN_02828838;
    __cxa_atexit(FUN_00e748b8,&DAT_03211060,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211078);
  }
  uVar1 = *(undefined4 *)(param_1 + 1);
  uVar3 = FUN_00e7368c(&DAT_03211060);
  FUN_00e73934(&DAT_03211060,uVar3,uVar1);
  return;
}




void FUN_00f18120(void *param_1)

{
  FUN_00f18044();
  operator_delete(param_1);
  return;
}




void FUN_00f18144(long param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (((DAT_03211098 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_03211098), iVar3 != 0)) {
    FUN_00e734e4(&DAT_03211080,PTR_s_NuoWebViewManager_02bf25b8,"setURL","(ILjava/lang/String;)V");
    DAT_03211080 = &PTR_FUN_02828858;
    __cxa_atexit(FUN_00e748b8,&DAT_03211080,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211098);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar4 = FUN_00e7368c(&DAT_03211080);
  FUN_00e73e94(auStack_58,uVar4,param_2);
  uVar5 = FUN_00e7410c(auStack_58);
  FUN_00e73934(&DAT_03211080,uVar4,uVar1,uVar5);
  FUN_00e740f0(auStack_58);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f18278(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  byte local_50 [16];
  void *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (((DAT_032110b8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_032110b8), iVar3 != 0)) {
    FUN_00e734e4(&DAT_032110a0,PTR_s_NuoWebViewManager_02bf25b8,"getTitle","(I)Ljava/lang/String;");
    DAT_032110a0 = &PTR_FUN_02828878;
    __cxa_atexit(FUN_00e748b8,&DAT_032110a0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032110b8);
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar4 = FUN_00e7368c(&DAT_032110a0);
  FUN_00e73bd8(local_50,&DAT_032110a0,uVar4,uVar1);
  FUN_00e70570(param_1,local_50);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00f1839c(undefined8 param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_032110d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_032110d8), iVar2 != 0)) {
    FUN_00e734e4(&DAT_032110c0,PTR_s_NuoWebViewManager_02bf25b8,"getURL","(I)Ljava/lang/String;");
    DAT_032110c0 = &PTR_FUN_02828898;
    __cxa_atexit(FUN_00e748b8,&DAT_032110c0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032110d8);
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar3 = FUN_00e7368c(&DAT_032110c0);
  FUN_00e73bd8(param_1,&DAT_032110c0,uVar3,uVar1);
  return;
}




undefined8 FUN_00f18478(void)

{
  return 0;
}




void FUN_00f18480(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_032110f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_032110f8), iVar2 != 0)) {
    FUN_00e734e4(&DAT_032110e0,PTR_s_NuoWebViewManager_02bf25b8,"isLoading",&DAT_01bf470f);
    DAT_032110e0 = &PTR_FUN_028288b8;
    __cxa_atexit(FUN_00e748b8,&DAT_032110e0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032110f8);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_00e7368c(&DAT_032110e0);
  FUN_00e739d8(&DAT_032110e0,uVar3,uVar1);
  return;
}




void FUN_00f1854c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_03211118 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03211118), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03211100,PTR_s_NuoWebViewManager_02bf25b8,"canBack",&DAT_01bf470f);
    DAT_03211100 = &PTR_FUN_028288d8;
    __cxa_atexit(FUN_00e748b8,&DAT_03211100,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211118);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_00e7368c(&DAT_03211100);
  FUN_00e739d8(&DAT_03211100,uVar3,uVar1);
  return;
}




void FUN_00f18618(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_03211138 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03211138), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03211120,PTR_s_NuoWebViewManager_02bf25b8,"canForward",&DAT_01bf470f);
    DAT_03211120 = &PTR_FUN_028288f8;
    __cxa_atexit(FUN_00e748b8,&DAT_03211120,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211138);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_00e7368c(&DAT_03211120);
  FUN_00e739d8(&DAT_03211120,uVar3,uVar1);
  return;
}




void FUN_00f186e4(void)

{
  return;
}




void FUN_00f186e8(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (((DAT_03211158 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_03211158), iVar4 != 0)) {
    FUN_00e734e4(&DAT_03211140,PTR_s_NuoWebViewManager_02bf25b8,"setSize","(III)V");
    DAT_03211140 = &PTR_FUN_02828918;
    __cxa_atexit(FUN_00e748b8,&DAT_03211140,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211158);
  }
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = FUN_00e7368c(&DAT_03211140);
  FUN_00e73934(&DAT_03211140,uVar5,uVar3,uVar1,uVar2);
  return;
}




void FUN_00f187d4(long param_1,float *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if (((DAT_03211178 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03211178), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03211160,PTR_s_NuoWebViewManager_02bf25b8,"setTranslation","(III)V");
    DAT_03211160 = &PTR_FUN_02828938;
    __cxa_atexit(FUN_00e748b8,&DAT_03211160,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211178);
  }
  fVar4 = *param_2;
  fVar5 = param_2[1];
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_00e7368c(&DAT_03211160);
  FUN_00e73934(&DAT_03211160,uVar3,uVar1,(int)fVar4,(int)fVar5);
  return;
}




void FUN_00f188c8(float param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_03211198 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03211198), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03211180,PTR_s_NuoWebViewManager_02bf25b8,"setAlpha","(IF)V");
    DAT_03211180 = &PTR_FUN_02828958;
    __cxa_atexit(FUN_00e748b8,&DAT_03211180,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211198);
  }
  uVar1 = *(undefined4 *)(param_2 + 8);
  uVar3 = FUN_00e7368c(&DAT_03211180);
  FUN_00e73934((double)param_1,&DAT_03211180,uVar3,uVar1);
  return;
}




void FUN_00f189a4(long param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_032111b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_032111b8), iVar2 != 0)) {
    FUN_00e734e4(&DAT_032111a0,PTR_s_NuoWebViewManager_02bf25b8,"setVisible","(IZ)V");
    DAT_032111a0 = &PTR_FUN_02828978;
    __cxa_atexit(FUN_00e748b8,&DAT_032111a0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032111b8);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_00e7368c(&DAT_032111a0);
  FUN_00e73934(&DAT_032111a0,uVar3,uVar1,param_2 & 1);
  return;
}




void FUN_00f18a80(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_032111d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_032111d8), iVar2 != 0)) {
    FUN_00e734e4(&DAT_032111c0,PTR_s_NuoWebViewManager_02bf25b8,"goBack",&DAT_01beef11);
    DAT_032111c0 = &PTR_FUN_02828998;
    __cxa_atexit(FUN_00e748b8,&DAT_032111c0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032111d8);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_00e7368c(&DAT_032111c0);
  FUN_00e73934(&DAT_032111c0,uVar3,uVar1);
  return;
}




void FUN_00f18b4c(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_032111f8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_032111f8), iVar2 != 0)) {
    FUN_00e734e4(&DAT_032111e0,PTR_s_NuoWebViewManager_02bf25b8,"goForward",&DAT_01beef11);
    DAT_032111e0 = &PTR_FUN_028289b8;
    __cxa_atexit(FUN_00e748b8,&DAT_032111e0,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_032111f8);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_00e7368c(&DAT_032111e0);
  FUN_00e73934(&DAT_032111e0,uVar3,uVar1);
  return;
}




void FUN_00f18c18(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_03211218 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03211218), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03211200,PTR_s_NuoWebViewManager_02bf25b8,"refresh",&DAT_01beef11);
    DAT_03211200 = &PTR_FUN_028289d8;
    __cxa_atexit(FUN_00e748b8,&DAT_03211200,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211218);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_00e7368c(&DAT_03211200);
  FUN_00e73934(&DAT_03211200,uVar3,uVar1);
  return;
}




void FUN_00f18ce4(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((DAT_03211238 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_03211238), iVar2 != 0)) {
    FUN_00e734e4(&DAT_03211220,PTR_s_NuoWebViewManager_02bf25b8,&DAT_01bf176b,&DAT_01beef11);
    DAT_03211220 = &PTR_FUN_028289f8;
    __cxa_atexit(FUN_00e748b8,&DAT_03211220,&PTR_LOOP_02be3000);
    __cxa_guard_release(&DAT_03211238);
  }
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar3 = FUN_00e7368c(&DAT_03211220);
  FUN_00e73934(&DAT_03211220,uVar3,uVar1);
  return;
}




void FUN_00f18db0(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18dd4(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18df8(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18e1c(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18e40(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18e64(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18e88(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18eac(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18ed0(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18ef4(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18f18(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18f3c(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18f60(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18f84(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18fa8(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




void FUN_00f18fcc(void *param_1)

{
  FUN_00e748b8();
  operator_delete(param_1);
  return;
}




bool FUN_00f18ff0(long param_1)

{
  if (param_1 != 0) {
    FUN_00f1c874();
  }
  return param_1 != 0;
}

