// functions/01b0c — 5 functions
#include "libGameKindred.h"




long FUN_01b0c6bc(long param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  _STACK *p_Var5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_put_error(0x25,0x65,0x43,"dso_dlfcn.c",0xeb);
    return 0;
  }
  iVar1 = sk_num(*(_STACK **)(param_1 + 8));
  if (iVar1 < 1) {
    ERR_put_error(0x25,0x65,0x69,"dso_dlfcn.c",0xef);
    return 0;
  }
  p_Var5 = *(_STACK **)(param_1 + 8);
  iVar1 = sk_num(p_Var5);
  pvVar2 = sk_value(p_Var5,iVar1 + -1);
  if (pvVar2 != (void *)0x0) {
    lVar3 = dlsym(pvVar2,param_2);
    if (lVar3 != 0) {
      return lVar3;
    }
    ERR_put_error(0x25,0x65,0x6a,"dso_dlfcn.c",0xf9);
    uVar4 = dlerror();
    ERR_add_error_data(4,"symname(",param_2,&DAT_01e6297b,uVar4);
    return 0;
  }
  ERR_put_error(0x25,0x65,0x68,"dso_dlfcn.c",0xf4);
  return 0;
}




long FUN_01b0c7f0(long param_1,long param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  undefined8 uVar4;
  _STACK *p_Var5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    ERR_put_error(0x25,100,0x43,"dso_dlfcn.c",0x109);
    return 0;
  }
  iVar1 = sk_num(*(_STACK **)(param_1 + 8));
  if (iVar1 < 1) {
    ERR_put_error(0x25,100,0x69,"dso_dlfcn.c",0x10d);
    return 0;
  }
  p_Var5 = *(_STACK **)(param_1 + 8);
  iVar1 = sk_num(p_Var5);
  pvVar2 = sk_value(p_Var5,iVar1 + -1);
  if (pvVar2 != (void *)0x0) {
    lVar3 = dlsym(pvVar2,param_2);
    if (lVar3 != 0) {
      return lVar3;
    }
    ERR_put_error(0x25,100,0x6a,"dso_dlfcn.c",0x117);
    uVar4 = dlerror();
    ERR_add_error_data(4,"symname(",param_2,&DAT_01e6297b,uVar4);
    return 0;
  }
  ERR_put_error(0x25,100,0x68,"dso_dlfcn.c",0x112);
  return 0;
}




char * FUN_01b0c924(DSO *param_1,char *param_2)

{
  uint uVar1;
  size_t sVar2;
  char *pcVar3;
  char *__s;
  int iVar4;
  
  sVar2 = strlen(param_2);
  pcVar3 = strchr(param_2,0x2f);
  if (pcVar3 == (char *)0x0) {
    uVar1 = DSO_flags(param_1);
    iVar4 = 7;
    if ((uVar1 & 2) != 0) {
      iVar4 = 4;
    }
    iVar4 = iVar4 + (int)sVar2;
  }
  else {
    iVar4 = (int)sVar2 + 1;
  }
  __s = CRYPTO_malloc(iVar4,"dso_dlfcn.c",0x170);
  if (__s == (char *)0x0) {
    ERR_put_error(0x25,0x7b,0x6d,"dso_dlfcn.c",0x172);
  }
  else if (pcVar3 == (char *)0x0) {
    uVar1 = DSO_flags(param_1);
    if ((uVar1 >> 1 & 1) == 0) {
      pcVar3 = "lib%s.so";
    }
    else {
      pcVar3 = "%s.so";
    }
    sprintf(__s,pcVar3,param_2);
  }
  else {
    sVar2 = strlen(param_2);
    memcpy(__s,param_2,sVar2 + 1);
  }
  return __s;
}




char * FUN_01b0ca18(undefined8 param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  char *__dest;
  size_t sVar2;
  char *__dest_00;
  int iVar3;
  int iVar4;
  
  if (param_2 == (char *)0x0 && param_3 == (char *)0x0) {
    ERR_put_error(0x25,0x82,0x43,"dso_dlfcn.c",0x124);
    return (char *)0x0;
  }
  if (param_3 != (char *)0x0) {
    if (param_2 == (char *)0x0) {
      sVar1 = strlen(param_3);
      __dest = CRYPTO_malloc((int)sVar1 + 1,"dso_dlfcn.c",0x137);
      param_2 = param_3;
      __dest_00 = __dest;
      if (__dest == (char *)0x0) {
        ERR_put_error(0x25,0x82,0x41,"dso_dlfcn.c",0x139);
        return (char *)0x0;
      }
      goto LAB_01b0cb60;
    }
    if (*param_2 != '/') {
      sVar1 = strlen(param_3);
      iVar4 = (int)sVar1;
      sVar2 = strlen(param_2);
      iVar3 = (int)sVar2 + iVar4;
      if ((iVar4 != 0) && (param_3[(long)((sVar1 << 0x20) + -0x100000000) >> 0x20] == '/')) {
        iVar4 = iVar4 + -1;
        iVar3 = iVar3 + -1;
      }
      __dest_00 = CRYPTO_malloc(iVar3 + 2,"dso_dlfcn.c",0x14e);
      if (__dest_00 == (char *)0x0) {
        ERR_put_error(0x25,0x82,0x41,"dso_dlfcn.c",0x150);
        return (char *)0x0;
      }
      strcpy(__dest_00,param_3);
      __dest = __dest_00 + iVar4 + 1;
      __dest_00[iVar4] = '/';
      goto LAB_01b0cb60;
    }
  }
  sVar1 = strlen(param_2);
  __dest = CRYPTO_malloc((int)sVar1 + 1,"dso_dlfcn.c",300);
  __dest_00 = __dest;
  if (__dest == (char *)0x0) {
    ERR_put_error(0x25,0x82,0x41,"dso_dlfcn.c",0x12e);
    return (char *)0x0;
  }
LAB_01b0cb60:
  strcpy(__dest,param_2);
  return __dest_00;
}




undefined8 FUN_01b0cbc0(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = dlopen(0,1);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = dlsym(lVar1,param_1);
    dlclose(lVar1);
  }
  return uVar2;
}

