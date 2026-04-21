// functions/00e83 — 38 functions
#include "libGameKindred.h"




int thunk_FUN_00e83724(void)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00e83508();
  __mutex = DAT_03210710;
  pthread_mutex_lock(DAT_03210710);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




bool FUN_00e8300c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3f0))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e83044(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3d0))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e8307c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3d8))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e830b4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x3e0))(DAT_03210700,param_1);
  return iVar1 != 0;
}




bool FUN_00e830e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x4e8))(DAT_03210700,param_1,param_2,param_3,param_4);
  return iVar1 == 1;
}




bool FUN_00e83128(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x4f0))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e83160(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x4f8))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




void FUN_00e83198(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  (**(code **)(*DAT_03210700 + 0x50))(DAT_03210700,local_50);
  iVar2 = (**(code **)(*DAT_03210700 + 0x378))(DAT_03210700,local_50,param_1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 1);
}




void FUN_00e8323c(undefined8 param_1)

{
  long lVar1;
  int iVar2;
  ulong local_50 [2];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_50[0] = 0;
  local_50[1] = 0;
  local_40 = (void *)0x0;
  (**(code **)(*DAT_03210700 + 0x50))(DAT_03210700,local_50);
  iVar2 = (**(code **)(*DAT_03210700 + 0x380))(DAT_03210700,local_50,param_1);
  if ((local_50[0] & 1) != 0) {
    operator_delete(local_40);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 1);
}




bool FUN_00e832e0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x388))(DAT_03210700,param_1,param_2,param_3,param_4,param_5)
  ;
  return iVar1 == 1;
}




void FUN_00e83324(undefined4 param_1)

{
  DAT_02bf2518 = param_1;
  return;
}




void FUN_00e83330(void)

{
  DAT_02bf2518 = 1;
  return;
}




undefined4 FUN_00e83340(void)

{
  return DAT_02bf2518;
}




bool FUN_00e8334c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x88))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_00e83384(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x410))(DAT_03210700,param_1,param_2,param_3);
  return iVar1 != 0;
}




bool FUN_00e833c0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x90))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e833f4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x418))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e8342c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x98))(DAT_03210700,param_1);
  return iVar1 == 1;
}




bool FUN_00e83460(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x420))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e83498(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0x428))(DAT_03210700,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_00e834d0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_03210700 + 0xa0))(DAT_03210700,param_1,param_2);
  return iVar1 == 1;
}




undefined8 * FUN_00e83508(void)

{
  void *pvVar1;
  
  if (DAT_03210708 == (undefined8 *)0x0) {
    DAT_03210708 = operator_new(0x18);
    *(undefined4 *)(DAT_03210708 + 2) = 0;
    *DAT_03210708 = 0;
    DAT_03210708[1] = 0;
    pvVar1 = operator_new(0x28);
    FUN_00e77acc(pvVar1,0);
    DAT_03210710 = pvVar1;
  }
  return DAT_03210708;
}




int FUN_00e83560(undefined8 *param_1)

{
  long *plVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  long *plVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_02820c10;
  plVar3 = (long *)FUN_00e83508();
  __mutex = DAT_03210710;
  pthread_mutex_lock(DAT_03210710);
  param_1[2] = 0;
  lVar4 = plVar3[1];
  param_1[1] = lVar4;
  plVar1 = plVar3;
  if (*plVar3 != 0) {
    plVar1 = (long *)(lVar4 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar3[1] = (long)param_1;
  *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
  iVar2 = pthread_mutex_unlock(__mutex);
  return iVar2;
}




int FUN_00e835e0(undefined8 *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_02820c10;
  uVar2 = FUN_00e83508();
  __mutex = DAT_03210710;
  pthread_mutex_lock(DAT_03210710);
  FUN_00e8363c(uVar2,param_1);
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00e8363c(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 0x10);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 8);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 8);
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    *(long *)(*(long *)(param_2 + 0x10) + 8) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




void FUN_00e8369c(void *param_1)

{
  FUN_00e835e0();
  operator_delete(param_1);
  return;
}




int FUN_00e836c0(undefined8 param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00e83508();
  __mutex = DAT_03210710;
  pthread_mutex_lock(DAT_03210710);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




int FUN_00e83724(void)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00e83508();
  __mutex = DAT_03210710;
  pthread_mutex_lock(DAT_03210710);
  for (plVar2 = (long *)*plVar2; plVar2 != (long *)0x0; plVar2 = (long *)plVar2[2]) {
    (**(code **)(*plVar2 + 0x18))(plVar2);
  }
  iVar1 = pthread_mutex_unlock(__mutex);
  return iVar1;
}




void FUN_00e83778(long param_1)

{
  FUN_008fce60(param_1,&DAT_0320ffa8);
  FUN_008fce60(param_1 + 0x18,&DAT_0320ffa8);
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  return;
}




void FUN_00e837b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  byte local_238 [16];
  void *local_228;
  ulong local_220 [2];
  void *local_210;
  ulong local_208 [2];
  void *local_1f8;
  undefined8 local_1f0;
  void *pvStack_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined **ppuStack_1b8;
  locale alStack_1b0 [8];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  ulong local_178;
  undefined8 uStack_170;
  void *local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150 [17];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  void *local_a8;
  void *pvStack_a0;
  long local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 local_80;
  
  lVar1 = tpidr_el0;
  lVar5 = *(long *)(lVar1 + 0x28);
  local_1d0 = 0;
  uStack_1c8 = 0x100;
  local_b8 = &local_1f0;
  uStack_b0 = 0;
  pvStack_1e8 = (void *)0x0;
  local_1f0 = 0;
  local_1d8 = 0;
  local_1e0 = (void *)0x0;
  uStack_90 = 0;
  local_98 = 0;
  pvStack_a0 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_88 = 0x200;
  local_80 = 0;
  FUN_00916df0(&local_b8);
  local_1c0 = 0x2820c98;
  local_150[0] = 0x2820cc0;
  std::__ndk1::ios_base::init((ios_base *)local_150,(void *)((ulong)&local_1c0 | 8));
  local_c8 = 0;
  local_c0 = 0xffffffff;
  local_150[0] = 0x2820c70;
  local_1c0 = 0x2820c48;
  ppuStack_1b8 = &PTR_FUN_02820d60;
  std::__ndk1::locale::locale(alStack_1b0);
  uStack_180 = 0;
  local_188 = 0;
  uStack_190 = 0;
  local_198 = 0;
  uStack_1a0 = 0;
  local_1a8 = 0;
  ppuStack_1b8 = &PTR_FUN_02820ce0;
  uStack_160 = 0;
  local_168 = (void *)0x0;
  uStack_170 = 0;
  local_178 = 0;
  local_158 = 0x10;
  FUN_00e83b88(&local_1c0,param_3);
  local_208[0] = 0;
  local_208[1] = 0;
  local_1f8 = (void *)0x0;
  local_220[0] = 0;
  local_220[1] = 0;
  local_210 = (void *)0x0;
  FUN_00e70a24(param_5,local_208);
  FUN_00e70a24(param_6,local_220);
  FUN_00e83cf0(&local_b8,"steamid");
  FUN_00916f0c(&local_b8,6);
  puVar2 = local_b8;
  lVar9 = local_b8[3];
  uVar6 = lVar9 + 0x14;
  if ((ulong)local_b8[4] <= uVar6) {
    FUN_008fe7c0(local_b8,0x14);
    lVar9 = puVar2[3];
    uVar6 = lVar9 + 0x14;
  }
  puVar2[3] = uVar6;
  lVar3 = FUN_00917824(param_1,lVar9);
  local_b8[3] = local_b8[3] + (-0x14 - lVar9) + lVar3;
  FUN_00e83cf0(&local_b8,"type");
  FUN_00e83d40(&local_b8,"IAP");
  FUN_00e83cf0(&local_b8,"language");
  FUN_00e83d90(&local_b8,param_2);
  FUN_00e83cf0(&local_b8,"product_id");
  FUN_00e83d90(&local_b8,param_4);
  FUN_00e83cf0(&local_b8,"orderid");
  FUN_00e84c6c(local_238,(void *)((ulong)&local_1c0 | 8));
  FUN_00e83d90(&local_b8,local_238);
  if ((local_238[0] & 1) != 0) {
    operator_delete(local_228);
  }
  FUN_00e83cf0(&local_b8,"loc_title");
  FUN_00e83d90(&local_b8,local_208);
  FUN_00e83cf0(&local_b8,"loc_desc");
  FUN_00e83d90(&local_b8,local_220);
  puVar2 = local_b8;
  local_98 = local_98 + -0x10;
  puVar7 = (undefined1 *)local_b8[3];
  puVar8 = puVar7 + 1;
  if ((undefined1 *)local_b8[4] <= puVar8) {
    FUN_008fe7c0(local_b8,1);
    puVar7 = (undefined1 *)puVar2[3];
    puVar8 = puVar7 + 1;
  }
  puVar2[3] = puVar8;
  *puVar7 = 0x7d;
  uVar4 = FUN_009155f8(&local_1f0);
  FUN_008fa54c(local_238,uVar4);
  FUN_008fce60(param_7,local_238);
  if ((local_238[0] & 1) != 0) {
    operator_delete(local_228);
  }
  if ((local_220[0] & 1) != 0) {
    operator_delete(local_210);
  }
  if ((local_208[0] & 1) != 0) {
    operator_delete(local_1f8);
  }
  local_1c0 = 0x2820c48;
  ppuStack_1b8 = &PTR_FUN_02820ce0;
  local_150[0] = 0x2820c70;
  if ((local_178 & 1) != 0) {
    operator_delete(local_168);
  }
  ppuStack_1b8 = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale(alStack_1b0);
  std::__ndk1::ios_base::~ios_base((ios_base *)local_150);
  free(pvStack_a0);
  if (local_a8 != (void *)0x0) {
    operator_delete(local_a8);
  }
  free(local_1e0);
  if (pvStack_1e8 != (void *)0x0) {
    operator_delete(pvStack_1e8);
  }
  if (*(long *)(lVar1 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




long * FUN_00e83b88(long *param_1,undefined8 param_2)

{
  ios_base *this;
  long lVar1;
  uint uVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 local_70 [8];
  long *local_68;
  locale alStack_60 [8];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_70[0] = 0;
  local_68 = param_1;
  if (*(int *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x20) == 0) {
    if (*(long *)((long)param_1 + *(long *)(*param_1 + -0x18) + 0x88) != 0) {
      FUN_00e6dbf0();
    }
    local_70[0] = 1;
    std::__ndk1::ios_base::getloc();
    plVar3 = (long *)std::__ndk1::locale::use_facet
                               (alStack_60,
                                (id *)&std::__ndk1::
                                       num_put<char,std::__ndk1::ostreambuf_iterator<char,std::__ndk1::char_traits<char>>>
                                       ::id);
    std::__ndk1::locale::~locale(alStack_60);
    lVar5 = (long)param_1 + *(long *)(*param_1 + -0x18);
    uVar2 = *(uint *)(lVar5 + 0x90);
    uVar6 = *(undefined8 *)(lVar5 + 0x28);
    if (uVar2 == 0xffffffff) {
      std::__ndk1::ios_base::getloc();
      plVar4 = (long *)std::__ndk1::locale::use_facet
                                 (alStack_60,(id *)&std::__ndk1::ctype<char>::id);
      uVar2 = (**(code **)(*plVar4 + 0x38))(plVar4,0x20);
      std::__ndk1::locale::~locale(alStack_60);
      uVar2 = uVar2 & 0xff;
      *(uint *)(lVar5 + 0x90) = uVar2;
    }
    lVar5 = (**(code **)(*plVar3 + 0x38))(plVar3,uVar6,lVar5,uVar2,param_2);
    if (lVar5 == 0) {
      this = (ios_base *)((long)param_1 + *(long *)(*param_1 + -0x18));
      std::__ndk1::ios_base::clear(this,*(uint *)(this + 0x20) | 5);
    }
  }
  FUN_00e6dcf0(local_70);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00e83cf0(undefined8 param_1,long param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_2 + -1);
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  FUN_00916f0c(param_1,5);
  FUN_009172e8(param_1,param_2,(int)pcVar1 - (int)param_2);
  return;
}




void FUN_00e83d40(undefined8 param_1,long param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_2 + -1);
  do {
    pcVar1 = pcVar1 + 1;
  } while (*pcVar1 != '\0');
  FUN_00916f0c(param_1,5);
  FUN_009172e8(param_1,param_2,(int)pcVar1 - (int)param_2);
  return;
}




void FUN_00e83d90(undefined8 param_1,byte *param_2)

{
  uint uVar1;
  bool bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(param_2 + 0x10);
  bVar2 = (*param_2 & 1) == 0;
  if (bVar2) {
    pbVar3 = param_2 + 1;
  }
  uVar1 = (uint)(*param_2 >> 1);
  if (!bVar2) {
    uVar1 = *(uint *)(param_2 + 8);
  }
  FUN_00916f0c(param_1,5);
  FUN_009172e8(param_1,pbVar3,uVar1);
  return;
}




void FUN_00e83de4(undefined8 *param_1)

{
  param_1[0xe] = 0x2820c70;
  *param_1 = 0x2820c48;
  param_1[1] = &PTR_FUN_02820ce0;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    operator_delete((void *)param_1[0xb]);
  }
  param_1[1] = &PTR_FUN_02820d60;
  std::__ndk1::locale::~locale((locale *)(param_1 + 2));
  std::__ndk1::ios_base::~ios_base((ios_base *)(param_1 + 0xe));
  return;
}




void FUN_00e83e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  byte local_d0 [16];
  void *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  void *local_78;
  void *local_70;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_98 = 0;
  uStack_90 = 0x100;
  local_88 = &local_b8;
  uStack_80 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = (void *)0x0;
  local_70 = (void *)0x0;
  local_58 = 0x200;
  local_50 = 0;
  FUN_00916df0(&local_88);
  FUN_00e83cf0(&local_88,"steamid");
  FUN_00916f0c(&local_88,6);
  puVar2 = local_88;
  lVar8 = local_88[3];
  uVar5 = lVar8 + 0x14;
  if ((ulong)local_88[4] <= uVar5) {
    FUN_008fe7c0(local_88,0x14);
    lVar8 = puVar2[3];
    uVar5 = lVar8 + 0x14;
  }
  puVar2[3] = uVar5;
  lVar3 = FUN_00917824(param_1,lVar8);
  local_88[3] = local_88[3] + (-0x14 - lVar8) + lVar3;
  FUN_00e83cf0(&local_88,"type");
  FUN_00e83d40(&local_88,&DAT_01bef54c);
  FUN_00e83cf0(&local_88,"app_id");
  FUN_00e83d90(&local_88,param_2);
  puVar2 = local_88;
  local_68 = local_68 + -0x10;
  puVar6 = (undefined1 *)local_88[3];
  puVar7 = puVar6 + 1;
  if ((undefined1 *)local_88[4] <= puVar7) {
    FUN_008fe7c0(local_88,1);
    puVar6 = (undefined1 *)puVar2[3];
    puVar7 = puVar6 + 1;
  }
  puVar2[3] = puVar7;
  *puVar6 = 0x7d;
  uVar4 = FUN_009155f8(&local_b8);
  FUN_008fa54c(local_d0,uVar4);
  FUN_008fce60(param_3,local_d0);
  if ((local_d0[0] & 1) != 0) {
    operator_delete(local_c0);
  }
  free(local_70);
  if (local_78 != (void *)0x0) {
    operator_delete(local_78);
  }
  free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined4 thunk_FUN_00e83340(void)

{
  return DAT_02bf2518;
}

