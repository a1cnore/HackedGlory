// functions/1004f — 286 functions
#include "GameKindred.h"




void thunk_FUN_1004f0a9c(void)

{
  FUN_1004f0a9c();
  return;
}




int thunk_FUN_1004f0bd8(void)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_1004f09c8();
  ppVar1 = DAT_101e94748;
  _pthread_mutex_lock(DAT_101e94748);
  for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




void thunk_FUN_1004f03a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004f03bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x4d8))(DAT_101e94738,param_1,param_2);
  return;
}




void thunk_FUN_1004f15a8(void)

{
  FUN_1004f15a8();
  return;
}




void thunk_FUN_1004f15a8(void)

{
  FUN_1004f15a8();
  return;
}




void thunk_FUN_1004f15a8(void)

{
  FUN_1004f15a8();
  return;
}




void thunk_FUN_1004f15a8(void)

{
  FUN_1004f15a8();
  return;
}




void thunk_FUN_1004f15a8(void)

{
  FUN_1004f15a8();
  return;
}




void thunk_FUN_1004f15a8(void)

{
  FUN_1004f15a8();
  return;
}




bool FUN_1004f0040(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x328))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f0070(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x330))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f00a0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x338))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004f00d4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x340))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004f0108(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x360))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f0138(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x348))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f0168(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x508))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f0198(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x510))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004f01d0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x518))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f0200(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x520))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




void FUN_1004f0230(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004f0244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x4a0))(DAT_101e94738,param_1);
  return;
}




void FUN_1004f0248(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001004f025c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x4a8))(DAT_101e94738,param_1);
  return;
}




void FUN_1004f0260(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004f0278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x4b0))(DAT_101e94738,param_1,param_2);
  return;
}




bool FUN_1004f027c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x368))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f02ac(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x370))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f02dc(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x4b8))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f030c(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x4c8))();
  return iVar1 == 1;
}




void FUN_1004f0338(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001004f0348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x4d0))();
  return;
}




bool FUN_1004f034c(void)

{
  long lVar1;
  
  lVar1 = (**(code **)(*DAT_101e94738 + 0x4d0))();
  return *(int *)(lVar1 + 0x98) - 6U < 3 || *(int *)(lVar1 + 0x98) - 2U < 4;
}




void FUN_1004f0390(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001004f03a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x4c0))();
  return;
}




void FUN_1004f03a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004f03bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x4d8))(DAT_101e94738,param_1,param_2);
  return;
}




void FUN_1004f03c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004f03d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_101e94738 + 0x4e0))(DAT_101e94738,param_1,param_2);
  return;
}




bool FUN_1004f03dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x390))(DAT_101e94738,param_1,param_2,param_3,param_4);
  return iVar1 != 0;
}




bool FUN_1004f0418(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x448))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f0448(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x430))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f0478(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x460))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f04a8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x468))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004f04dc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x470))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004f0510(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x478))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004f0544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x488))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 == 1;
}




bool FUN_1004f057c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x490))
                    (DAT_101e94738,param_1,param_2,param_3,param_4,param_5,param_6);
  return iVar1 == 1;
}




bool FUN_1004f05c0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x498))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f05f0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x3f8))(DAT_101e94738,param_1);
  return iVar1 != 0;
}




bool FUN_1004f0620(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x400))(DAT_101e94738,param_1);
  return iVar1 != 0;
}




bool FUN_1004f0650(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x3a0))(DAT_101e94738,param_1);
  return iVar1 != 0;
}




bool FUN_1004f0680(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x3a8))(DAT_101e94738,param_1);
  return iVar1 != 0;
}




bool FUN_1004f06b0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x3c0))(DAT_101e94738,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_1004f06e4(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x3c8))(DAT_101e94738,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_1004f0718(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x3f0))(DAT_101e94738,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_1004f074c(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x3e0))(DAT_101e94738,param_1);
  return iVar1 != 0;
}




bool FUN_1004f077c(undefined8 param_1)

{
  int iVar1;
  void *local_38;
  undefined8 uStack_30;
  long local_28;
  
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  (**(code **)(*DAT_101e94738 + 0x50))(DAT_101e94738,&local_38);
  iVar1 = (**(code **)(*DAT_101e94738 + 0x380))(DAT_101e94738,&local_38,param_1);
  if (local_28 < 0) {
    operator_delete(local_38);
  }
  return iVar1 == 1;
}




bool FUN_1004f07f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x388))
                    (DAT_101e94738,param_1,param_2,param_3,param_4,param_5);
  return iVar1 == 1;
}




void FUN_1004f0834(undefined4 param_1)

{
  DAT_1018675c8 = param_1;
  return;
}




void FUN_1004f0840(void)

{
  DAT_1018675c8 = 1;
  return;
}




undefined4 FUN_1004f0850(void)

{
  return DAT_1018675c8;
}




bool FUN_1004f085c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x88))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




bool FUN_1004f0890(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x410))(DAT_101e94738,param_1,param_2,param_3);
  return iVar1 != 0;
}




bool FUN_1004f08c8(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x90))(DAT_101e94738,param_1);
  return iVar1 == 1;
}




bool FUN_1004f08f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x418))(DAT_101e94738,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_1004f092c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x420))(DAT_101e94738,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_1004f0960(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0x428))(DAT_101e94738,param_1,param_2);
  return iVar1 != 0;
}




bool FUN_1004f0994(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_101e94738 + 0xa0))(DAT_101e94738,param_1,param_2);
  return iVar1 == 1;
}




undefined8 * FUN_1004f09c8(void)

{
  void *pvVar1;
  
  if (DAT_101e94740 == (undefined8 *)0x0) {
    DAT_101e94740 = operator_new(0x18);
    *DAT_101e94740 = 0;
    DAT_101e94740[1] = 0;
    *(undefined4 *)(DAT_101e94740 + 2) = 0;
    pvVar1 = operator_new(0x40);
    FUN_1004e4464(pvVar1,0);
    DAT_101e94748 = pvVar1;
  }
  return DAT_101e94740;
}




undefined8 * FUN_1004f0a20(undefined8 *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  pthread_mutex_t *ppVar4;
  long *plVar5;
  
  *param_1 = &PTR_thunk_FUN_1004f0a9c_10149e3a0;
  plVar5 = (long *)FUN_1004f09c8();
  ppVar4 = DAT_101e94748;
  _pthread_mutex_lock(DAT_101e94748);
  lVar2 = *plVar5;
  lVar3 = plVar5[1];
  param_1[1] = lVar3;
  param_1[2] = 0;
  plVar1 = plVar5;
  if (lVar2 != 0) {
    plVar1 = (long *)(lVar3 + 0x10);
  }
  *plVar1 = (long)param_1;
  plVar5[1] = (long)param_1;
  *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
  _pthread_mutex_unlock(ppVar4);
  return param_1;
}




undefined8 * FUN_1004f0a9c(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_thunk_FUN_1004f0a9c_10149e3a0;
  uVar2 = FUN_1004f09c8();
  ppVar1 = DAT_101e94748;
  _pthread_mutex_lock(DAT_101e94748);
  FUN_1004f0afc(uVar2,param_1);
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_1004f0afc(long *param_1,long param_2)

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




void thunk_FUN_1004f0a9c(void)

{
  FUN_1004f0a9c();
  return;
}




void FUN_1004f0b60(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f0a9c();
  operator_delete(pvVar1);
  return;
}




int FUN_1004f0b74(undefined8 param_1)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_1004f09c8();
  ppVar1 = DAT_101e94748;
  _pthread_mutex_lock(DAT_101e94748);
  for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
    (**(code **)(*plVar3 + 0x10))(plVar3,param_1);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




int FUN_1004f0bd8(void)

{
  pthread_mutex_t *ppVar1;
  int iVar2;
  long *plVar3;
  
  plVar3 = (long *)FUN_1004f09c8();
  ppVar1 = DAT_101e94748;
  _pthread_mutex_lock(DAT_101e94748);
  for (plVar3 = (long *)*plVar3; plVar3 != (long *)0x0; plVar3 = (long *)plVar3[2]) {
    (**(code **)(*plVar3 + 0x18))(plVar3);
  }
  iVar2 = _pthread_mutex_unlock(ppVar1);
  return iVar2;
}




void FUN_1004f0c2c(undefined8 param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,string *param_7)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  void *local_230 [2];
  char local_219;
  void *local_218;
  undefined8 uStack_210;
  long local_208;
  void *local_200;
  undefined8 uStack_1f8;
  long local_1f0;
  undefined *local_1e8;
  undefined *local_1e0 [8];
  void *local_1a0;
  undefined8 uStack_198;
  long local_190;
  undefined8 uStack_188;
  undefined4 local_180;
  undefined *local_178 [17];
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  void *pvStack_d0;
  void *local_c8;
  long lStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  void *pvStack_98;
  void *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  pvStack_98 = (void *)0x0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = (void *)0x0;
  local_80 = 0;
  uStack_78 = 0x100;
  pvStack_d0 = (void *)0x0;
  local_d8 = 0;
  lStack_c0 = 0;
  local_c8 = (void *)0x0;
  local_e0 = &local_a0;
  local_b8 = 0;
  uStack_b0 = 0x200;
  local_a8 = 0;
  FUN_100112618(&local_e0);
  local_1e8 = PTR_DAT_1014441a8 + 0x18;
  local_178[0] = PTR_DAT_1014441a8 + 0x40;
  std::ios_base::init((ios *)local_178);
  puVar1 = PTR_DAT_1014441f0;
  local_f0 = 0;
  local_e8 = 0xffffffff;
  local_1e8 = PTR_DAT_1014441f0 + 0x18;
  local_178[0] = PTR_DAT_1014441f0 + 0x40;
  std::streambuf::streambuf((streambuf *)local_1e0);
  local_1e0[0] = PTR_DAT_1014441e8 + 0x10;
  uStack_198 = 0;
  local_1a0 = (void *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  local_180 = 0x10;
  std::ostream::operator<<((ostream *)&local_1e8,param_3);
  local_200 = (void *)0x0;
  uStack_1f8 = 0;
  local_1f0 = 0;
  local_218 = (void *)0x0;
  uStack_210 = 0;
  local_208 = 0;
  FUN_1004e357c(param_5,&local_200);
  FUN_1004e357c(param_6,&local_218);
  FUN_1004f0f60(&local_e0,"steamid");
  FUN_1004f0fb4(&local_e0,param_1);
  FUN_1004f0f60(&local_e0,"type");
  FUN_1004f1038(&local_e0,"IAP");
  FUN_1004f0f60(&local_e0,"language");
  FUN_1004f108c(&local_e0,param_2);
  FUN_1004f0f60(&local_e0,"product_id");
  FUN_1004f108c(&local_e0,param_4);
  FUN_1004f0f60(&local_e0,"orderid");
  FUN_10052251c(local_230,(streambuf *)local_1e0);
  FUN_1004f108c(&local_e0,local_230);
  if (local_219 < '\0') {
    operator_delete(local_230[0]);
  }
  FUN_1004f0f60(&local_e0,"loc_title");
  FUN_1004f108c(&local_e0,&local_200);
  FUN_1004f0f60(&local_e0,"loc_desc");
  FUN_1004f108c(&local_e0,&local_218);
  puVar2 = local_e0;
  lStack_c0 = lStack_c0 + -0x10;
  puVar4 = (undefined1 *)local_e0[3];
  if ((undefined1 *)local_e0[4] <= puVar4 + 1) {
    FUN_1000f9034(local_e0,1);
    puVar4 = (undefined1 *)puVar2[3];
  }
  puVar2[3] = puVar4 + 1;
  *puVar4 = 0x7d;
  uVar3 = FUN_100110e38(&local_a0);
  FUN_1000ee4ec(local_230,uVar3);
  std::string::operator=(param_7,(string *)local_230);
  if (local_219 < '\0') {
    operator_delete(local_230[0]);
  }
  if (local_208 < 0) {
    operator_delete(local_218);
  }
  if (local_1f0 < 0) {
    operator_delete(local_200);
  }
  local_1e8 = puVar1 + 0x18;
  local_178[0] = puVar1 + 0x40;
  local_1e0[0] = PTR_DAT_1014441e8 + 0x10;
  if (local_190 < 0) {
    operator_delete(local_1a0);
  }
  std::streambuf::~streambuf((streambuf *)local_1e0);
  std::ostream::~ostream((ostream *)&local_1e8);
  std::ios::~ios((ios *)local_178);
  _free(local_c8);
  if (pvStack_d0 != (void *)0x0) {
    operator_delete(pvStack_d0);
  }
  _free(local_90);
  if (pvStack_98 != (void *)0x0) {
    operator_delete(pvStack_98);
  }
  return;
}




void FUN_1004f0f60(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    pcVar1 = (char *)(param_2 + lVar2);
    lVar2 = lVar2 + 1;
  } while (*pcVar1 != '\0');
  FUN_100112734(param_1,5);
  FUN_100112b14(param_1,param_2,(int)lVar2 + -1);
  return;
}




undefined8 FUN_1004f0fb4(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  FUN_100112734(param_1,6);
  lVar1 = *param_1;
  lVar2 = *(long *)(lVar1 + 0x18);
  if (*(ulong *)(lVar1 + 0x20) <= lVar2 + 0x14U) {
    FUN_1000f9034(lVar1,0x14);
    lVar2 = *(long *)(lVar1 + 0x18);
  }
  *(long *)(lVar1 + 0x18) = lVar2 + 0x14;
  lVar1 = FUN_100113028(param_2,lVar2);
  *(long *)(*param_1 + 0x18) = (lVar1 - lVar2) + *(long *)(*param_1 + 0x18) + -0x14;
  return 1;
}




void FUN_1004f1038(undefined8 param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  
  lVar2 = 0;
  do {
    pcVar1 = (char *)(param_2 + lVar2);
    lVar2 = lVar2 + 1;
  } while (*pcVar1 != '\0');
  FUN_100112734(param_1,5);
  FUN_100112b14(param_1,param_2,(int)lVar2 + -1);
  return;
}




void FUN_1004f108c(undefined8 param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 1);
  plVar1 = (long *)*param_2;
  if (-1 < (char)*(byte *)((long)param_2 + 0x17)) {
    uVar2 = (uint)*(byte *)((long)param_2 + 0x17);
    plVar1 = param_2;
  }
  FUN_100112734(param_1,5);
  FUN_100112b14(param_1,plVar1,uVar2);
  return;
}




undefined8 FUN_1004f10e0(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  
  param_1[4] = param_1[4] + -0x10;
  lVar2 = *param_1;
  puVar1 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar1 + 1) {
    FUN_1000f9034(lVar2,1);
    puVar1 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar1 + 1;
  *puVar1 = 0x7d;
  return 1;
}




ostream * FUN_1004f113c(ostream *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_DAT_1014441f0;
  *(undefined **)param_1 = PTR_DAT_1014441f0 + 0x18;
  puVar1 = PTR_DAT_1014441e8;
  *(undefined **)(param_1 + 0x70) = puVar2 + 0x40;
  *(undefined **)(param_1 + 8) = puVar1 + 0x10;
  if ((char)param_1[0x5f] < '\0') {
    operator_delete(*(void **)(param_1 + 0x48));
  }
  std::streambuf::~streambuf((streambuf *)(param_1 + 8));
  std::ostream::~ostream(param_1);
  std::ios::~ios((ios *)(param_1 + 0x70));
  return param_1;
}




void FUN_1004f11bc(long *param_1,string *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  lVar2 = FUN_1000e86c0(param_1,"orderid");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "orderid";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "orderid";
      uStack_40 = 7;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"steamid");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "steamid";
    uStack_40 = 7;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "steamid";
      uStack_40 = 7;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x18,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"language");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "language";
    uStack_40 = 8;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "language";
      uStack_40 = 8;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x30,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"currency");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "currency";
    uStack_40 = 8;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "currency";
      uStack_40 = 8;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x48,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"amount");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "amount";
    uStack_40 = 6;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "amount";
      uStack_40 = 6;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x60,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_1,"product_id");
  if (*param_1 + (ulong)*(uint *)(param_1 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "product_id";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_1,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "product_id";
      uStack_40 = 10;
      plVar3 = (long *)FUN_1000e87dc(param_1,&local_48);
      plVar1 = (long *)*plVar3;
      if ((*(uint *)(plVar3 + 2) & 0x400000) != 0) {
        plVar1 = plVar3;
      }
      FUN_1000ee4ec(&local_48,plVar1);
      std::string::operator=(param_2 + 0x78,(string *)&local_48);
      if (local_31 < '\0') {
        operator_delete(local_48);
      }
    }
  }
  return;
}




void FUN_1004f1580(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e3d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(byte *)((long)param_1 + 0x24) = *(byte *)((long)param_1 + 0x24) & 0xf8;
  return;
}




undefined8 * FUN_1004f15a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149e3d0;
  FUN_1004f15d8();
  return param_1;
}




void FUN_1004f15d8(long *param_1)

{
  if (param_1[3] != 0) {
    FUN_1004f1638(param_1[3],param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = DAT_1018675cc;
  *(byte *)((long)param_1 + 0x24) = *(byte *)((long)param_1 + 0x24) & 0xf8;
                    /* WARNING: Could not recover jumptable at 0x0001004f162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1);
  return;
}




void FUN_1004f1630(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004f1634);
  (*pcVar1)();
}




void FUN_1004f1634(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004f1638);
  (*pcVar1)();
}




int FUN_1004f1638(pthread_mutex_t *param_1,long param_2)

{
  int iVar1;
  
  _pthread_mutex_lock(param_1);
  FUN_1004f17d0(param_1 + 1,param_2);
  *(undefined8 *)(param_2 + 0x18) = 0;
  iVar1 = _pthread_mutex_unlock(param_1);
  return iVar1;
}




bool FUN_1004f1670(long param_1)

{
  return *(long *)(param_1 + 0x18) != 0;
}




byte FUN_1004f1680(long param_1)

{
  return *(byte *)(param_1 + 0x24) >> 1 & 1;
}




byte FUN_1004f168c(long param_1)

{
  return *(byte *)(param_1 + 0x24) & 1;
}




byte FUN_1004f1698(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x24);
  if ((bVar1 >> 2 & 1) != 0) {
    *(byte *)(param_1 + 0x24) = bVar1 & 0xfb;
  }
  return bVar1 >> 2 & 1;
}




void FUN_1004f16b0(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) | 7;
  return;
}




void FUN_1004f16c0(long param_1)

{
  *(byte *)(param_1 + 0x24) = *(byte *)(param_1 + 0x24) & 0xf8 | 5;
  return;
}




pthread_mutex_t * FUN_1004f16d8(pthread_mutex_t *param_1)

{
  long lVar1;
  pthread_mutex_t *ppVar2;
  
  _pthread_mutex_lock(param_1);
  ppVar2 = param_1 + 1;
  lVar1 = ppVar2->__sig;
  while (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x18) = 0;
    lVar1 = *(long *)(lVar1 + 0x10);
    FUN_1004f15d8();
  }
  ppVar2->__sig = 0;
  param_1[1].__opaque[0] = '\0';
  param_1[1].__opaque[1] = '\0';
  param_1[1].__opaque[2] = '\0';
  param_1[1].__opaque[3] = '\0';
  param_1[1].__opaque[4] = '\0';
  param_1[1].__opaque[5] = '\0';
  param_1[1].__opaque[6] = '\0';
  param_1[1].__opaque[7] = '\0';
  param_1[1].__opaque[8] = '\0';
  param_1[1].__opaque[9] = '\0';
  param_1[1].__opaque[10] = '\0';
  param_1[1].__opaque[0xb] = '\0';
  _pthread_mutex_unlock(param_1);
  ppVar2->__sig = 0;
  param_1[1].__opaque[0] = '\0';
  param_1[1].__opaque[1] = '\0';
  param_1[1].__opaque[2] = '\0';
  param_1[1].__opaque[3] = '\0';
  param_1[1].__opaque[4] = '\0';
  param_1[1].__opaque[5] = '\0';
  param_1[1].__opaque[6] = '\0';
  param_1[1].__opaque[7] = '\0';
  param_1[1].__opaque[8] = '\0';
  param_1[1].__opaque[9] = '\0';
  param_1[1].__opaque[10] = '\0';
  param_1[1].__opaque[0xb] = '\0';
  _pthread_mutex_destroy(param_1);
  return param_1;
}




undefined4 FUN_1004f1744(pthread_mutex_t *param_1,long param_2)

{
  pthread_mutex_t *ppVar1;
  undefined4 uVar2;
  long lVar3;
  
  uVar2 = *(undefined4 *)(param_1[1].__opaque + 0x10);
  FUN_1004f15d8(param_2);
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  *(pthread_mutex_t **)(param_2 + 0x18) = param_1;
  _pthread_mutex_lock(param_1);
  *(int *)(param_1[1].__opaque + 0x10) = *(int *)(param_1[1].__opaque + 0x10) + 1;
  lVar3 = *(long *)param_1[1].__opaque;
  *(long *)(param_2 + 8) = lVar3;
  *(undefined8 *)(param_2 + 0x10) = 0;
  ppVar1 = param_1 + 1;
  if (param_1[1].__sig != 0) {
    ppVar1 = (pthread_mutex_t *)(lVar3 + 0x10);
  }
  ppVar1->__sig = param_2;
  *(long *)param_1[1].__opaque = param_2;
  *(int *)(param_1[1].__opaque + 8) = *(int *)(param_1[1].__opaque + 8) + 1;
  _pthread_mutex_unlock(param_1);
  return *(undefined4 *)(param_2 + 0x20);
}




void FUN_1004f17d0(long *param_1,long param_2)

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




long FUN_1004f1830(pthread_mutex_t *param_1,int param_2)

{
  long lVar1;
  
  _pthread_mutex_lock(param_1);
  for (lVar1 = param_1[1].__sig; (lVar1 != 0 && (*(int *)(lVar1 + 0x20) != param_2));
      lVar1 = *(long *)(lVar1 + 0x10)) {
  }
  _pthread_mutex_unlock(param_1);
  return lVar1;
}




undefined4 * FUN_1004f1884(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_1004e3004(param_1 + 2);
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x24) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  FUN_1004e313c(param_1 + 0x34);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_1004e3004(param_1 + 2);
  FUN_1004f1904(param_1);
  return param_1;
}




void FUN_1004f1904(long param_1)

{
  void *local_48 [2];
  char local_31;
  
  FUN_1000ee4ec(local_48,"");
  std::string::operator=((string *)(param_1 + 0x10),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  *(undefined4 *)(param_1 + 0x28) = 0;
  FUN_1000ee4ec(local_48,"");
  std::string::operator=((string *)(param_1 + 0x30),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0xec) = 0;
  FUN_1000ee4ec(local_48,"");
  std::string::operator=((string *)(param_1 + 0xa0),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1000ee4ec(local_48,"");
  std::string::operator=((string *)(param_1 + 0x80),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  FUN_1000ee4ec(local_48,"");
  std::string::operator=((string *)(param_1 + 0x68),(string *)local_48);
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  *(undefined4 *)(param_1 + 0xf4) = 0xffffffff;
  std::string::operator=((string *)(param_1 + 0x100),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x118),(string *)&DAT_101d91198);
  *(undefined4 *)(param_1 + 0x130) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x13c) = 0;
  *(undefined8 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  return;
}




bool FUN_1004f1a5c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xf0);
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xf0) = 0;
  }
  return cVar1 != '\0';
}




void FUN_1004f1a74(double *param_1)

{
  long lVar1;
  
  if (DAT_1018675d0 == -1) {
    DAT_1018675d0 = FUN_1004d29d0();
    DAT_101d91810 = FUN_1004d2ae0();
  }
  lVar1 = FUN_1004d2ae0();
  if (param_1 != (double *)0x0) {
    *param_1 = (double)(long)((lVar1 - DAT_101d91810 &
                              (lVar1 - DAT_101d91810 >> 0x3f ^ 0xffffffffffffffffU)) + DAT_1018675d0
                             );
  }
  return;
}




void FUN_1004f1ae0(undefined8 param_1)

{
  DAT_1018675d0 = param_1;
  DAT_101d91810 = FUN_1004d2ae0();
  return;
}




long FUN_1004f1b04(long param_1)

{
  pthread_mutex_t *ppVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  puVar3 = (undefined8 *)FUN_1004e4884();
  *puVar3 = &PTR_thunk_FUN_1004f1c9c_10149e400;
  puVar3[6] = 0;
  puVar3[5] = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  FUN_1004e4464(puVar3 + 0x14,0);
  lVar5 = -0x31;
  lVar6 = 0xe0;
  do {
    *(int *)(param_1 + lVar6) = (int)lVar5 + 0x32;
    lVar6 = lVar6 + 0xd0;
    bVar2 = lVar5 != -1;
    lVar5 = lVar5 + 1;
  } while (bVar2);
  *(undefined8 *)(param_1 + 0x2980) = 0x3100000000;
  *(undefined4 *)(param_1 + 0x2988) = 0;
  FUN_1004e4464(param_1 + 0x2990,1);
  *(undefined4 *)(param_1 + 0x29e0) = 0;
  *(undefined8 *)(param_1 + 0x29d8) = 0;
  *(undefined8 *)(param_1 + 0x29d0) = 0;
  ppVar1 = (pthread_mutex_t *)(param_1 + 0x29e8);
  FUN_1004e4464(ppVar1,1);
  *(undefined8 *)(param_1 + 0x2a28) = 0;
  *(undefined4 *)(param_1 + 0x2a30) = 0;
  *(undefined8 *)(param_1 + 0x2a38) = 0;
  *(undefined4 *)(param_1 + 0x2a40) = 0x3d888889;
  *(undefined4 *)(param_1 + 0x2a50) = 0;
  *(undefined1 *)(param_1 + 0x2a54) = 1;
  _pthread_mutex_lock(ppVar1);
  FUN_1010eb520(3);
  uVar4 = FUN_1010efa64();
  *(undefined8 *)(param_1 + 0x2a28) = uVar4;
  _pthread_mutex_unlock(ppVar1);
  return param_1;
}




void FUN_1004f1c10(long param_1)

{
  void *local_c0 [2];
  char local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10006d330(auStack_a8,"%s:%d");
  FUN_1000ee4ec(local_c0,auStack_a8);
  std::string::operator=((string *)(param_1 + 0x28),(string *)local_c0);
  if (local_a9 < '\0') {
    operator_delete(local_c0[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004f1c9c(undefined8 *param_1)

{
  pthread_mutex_t *ppVar1;
  
  *param_1 = &PTR_thunk_FUN_1004f1c9c_10149e400;
  if ((long *)param_1[0x547] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x547] + 0x38))();
    if ((long *)param_1[0x547] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x547] + 8))();
    }
    param_1[0x547] = 0;
  }
  *(undefined1 *)(param_1 + 0x54a) = 1;
  FUN_1004e48d8(param_1);
  FUN_1004f1dac(param_1);
  ppVar1 = (pthread_mutex_t *)(param_1 + 0x53d);
  _pthread_mutex_lock(ppVar1);
  FUN_1010f19a0(param_1[0x545]);
  FUN_1010eb5dc();
  _pthread_mutex_unlock(ppVar1);
  _pthread_mutex_destroy(ppVar1);
  *(undefined4 *)(param_1 + 0x53c) = 0;
  param_1[0x53b] = 0;
  param_1[0x53a] = 0;
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x532));
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x14));
  if (*(char *)((long)param_1 + 0x9f) < '\0') {
    operator_delete((void *)param_1[0x11]);
  }
  if (*(char *)((long)param_1 + 0x87) < '\0') {
    operator_delete((void *)param_1[0xe]);
  }
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  FUN_1004e4898(param_1);
  return;
}




int FUN_1004f1dac(long param_1)

{
  int iVar1;
  long *plVar2;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x29e8));
  plVar2 = (long *)FUN_1004f2b38(param_1);
  while (plVar2 != (long *)0x0) {
    if (*plVar2 != 0) {
      FUN_1010efe70(*(undefined8 *)(param_1 + 0x2a28));
      FUN_1010eb86c(*plVar2);
    }
    FUN_1004f2660(param_1,plVar2);
    plVar2 = (long *)FUN_1004f2b38(param_1);
  }
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x29e8));
  return iVar1;
}




void thunk_FUN_1004f1c9c(void)

{
  FUN_1004f1c9c();
  return;
}




void FUN_1004f1e2c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f1c9c();
  operator_delete(pvVar1);
  return;
}




void FUN_1004f1e40(void)

{
  return;
}




void FUN_1004f1e44(void)

{
  return;
}




void FUN_1004f1e48(void)

{
  return;
}




void FUN_1004f1e4c(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x2a50);
  while (cVar1 == '\0') {
    FUN_1004f1ea8(param_1);
    FUN_1004d29c0((int)(*(float *)(param_1 + 0x2a40) * 1000.0));
    cVar1 = *(char *)(param_1 + 0x2a50);
  }
  return;
}




int FUN_1004f1ea8(long param_1)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_54 [4];
  
  lVar2 = FUN_1004f2a0c(param_1,0);
  while (lVar2 != 0) {
    iVar1 = FUN_1004f24a4(param_1,lVar2,0);
    if (iVar1 == 0) {
      FUN_1004f2660(param_1,lVar2);
    }
    else {
      FUN_1004f227c(param_1,lVar2);
    }
    lVar2 = FUN_1004f2a0c(param_1,0);
  }
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x29e8));
  do {
    iVar1 = FUN_1010f0880(*(undefined8 *)(param_1 + 0x2a28),auStack_54);
  } while (iVar1 == -1);
  piVar3 = (int *)FUN_1010f1ac0(*(undefined8 *)(param_1 + 0x2a28),param_1 + 0x2a30);
  while (piVar3 != (int *)0x0) {
    if (*piVar3 == 1) {
      uVar5 = *(undefined8 *)(piVar3 + 2);
      iVar1 = piVar3[4];
      uVar4 = FUN_1004f2a0c(param_1,uVar5);
      FUN_1010eb878(uVar5,0x200002);
      FUN_1010efe70(*(undefined8 *)(param_1 + 0x2a28),uVar5);
      FUN_1010eb86c(uVar5);
      FUN_1004f27a0(param_1,uVar4,iVar1,0);
      FUN_1004f2660(param_1,uVar4);
    }
    piVar3 = (int *)FUN_1010f1ac0(*(undefined8 *)(param_1 + 0x2a28),param_1 + 0x2a30);
  }
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x29e8));
  return iVar1;
}




undefined4
FUN_1004f2000(long *param_1,long param_2,long param_3,undefined4 *param_4,undefined4 param_5)

{
  ulong uVar1;
  undefined4 *puVar2;
  char cVar3;
  long lVar4;
  long *plVar5;
  
  DAT_1018675c8 = 1;
  lVar4 = FUN_1004f21a0();
  if (lVar4 == 0) {
    DAT_1018675c8 = 0xfffffff8;
    if (param_4 == (undefined4 *)0x0) {
      DAT_1018675c8 = 0xfffffff8;
      return 0xfffffff8;
    }
    (**(code **)(*param_1 + 0x20))(param_1,*param_4);
    return 0xfffffff8;
  }
  uVar1 = *(ulong *)(param_3 + 8);
  if (-1 < (char)*(byte *)(param_3 + 0x17)) {
    uVar1 = (ulong)*(byte *)(param_3 + 0x17);
  }
  if (uVar1 != 0) {
    uVar1 = *(ulong *)(param_2 + 8);
    if (-1 < (char)*(byte *)(param_2 + 0x17)) {
      uVar1 = (ulong)*(byte *)(param_2 + 0x17);
    }
    if (uVar1 != 0) {
      FUN_10006d330(lVar4 + 0xc,"%s?time=%s&tag=%s");
      goto LAB_1004f214c;
    }
  }
  if ((*(char *)((long)param_1 + 0x2a52) == '\0') || (*(char *)((long)param_1 + 0x2a53) == '\0')) {
    plVar5 = param_1 + 0xe;
    cVar3 = *(char *)((long)param_1 + 0x87);
  }
  else {
    plVar5 = param_1 + 0x11;
    cVar3 = *(char *)((long)param_1 + 0x9f);
  }
  if (cVar3 < '\0') {
    plVar5 = (long *)*plVar5;
  }
  FUN_1004d25b8(lVar4 + 0xc,0x80,plVar5);
LAB_1004f214c:
  if (*(long *)(lVar4 + 0xa0) != 0) {
    *(undefined4 *)(lVar4 + 0x98) = 0;
  }
  puVar2 = &DAT_1018675cc;
  if (param_4 != (undefined4 *)0x0) {
    puVar2 = param_4;
  }
  *(undefined4 *)(lVar4 + 8) = *puVar2;
  *(undefined4 *)(lVar4 + 0x8c) = param_5;
  *(undefined4 *)(lVar4 + 0x90) = 0;
  FUN_1004f227c(param_1,lVar4);
  return DAT_1018675c8;
}




undefined8 * FUN_1004f21a0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa0));
  uVar1 = *(uint *)(param_1 + 0x2980);
  if (uVar1 == 0xffffffff) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)(param_1 + 0xe0 + (ulong)uVar1 * 0xd0);
    if (uVar1 == *(uint *)(param_1 + 0x2984)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = *(undefined4 *)puVar4;
    }
    *(undefined4 *)(param_1 + 0x2980) = uVar3;
    *puVar4 = 0;
    lVar2 = param_1 + 0xe0 + (ulong)uVar1 * 0xd0;
    *(undefined4 *)(lVar2 + 8) = DAT_1018675cc;
    *(undefined8 *)(lVar2 + 0x8c) = 0x5a;
    *(undefined8 *)(lVar2 + 0x14) = 0;
    *(undefined8 *)(lVar2 + 0xc) = 0;
    *(undefined8 *)(lVar2 + 0x24) = 0;
    *(undefined8 *)(lVar2 + 0x1c) = 0;
    *(undefined8 *)(lVar2 + 0x34) = 0;
    *(undefined8 *)(lVar2 + 0x2c) = 0;
    *(undefined8 *)(lVar2 + 0x44) = 0;
    *(undefined8 *)(lVar2 + 0x3c) = 0;
    *(undefined8 *)(lVar2 + 0x54) = 0;
    *(undefined8 *)(lVar2 + 0x4c) = 0;
    *(undefined8 *)(lVar2 + 100) = 0;
    *(undefined8 *)(lVar2 + 0x5c) = 0;
    *(undefined8 *)(lVar2 + 0x74) = 0;
    *(undefined8 *)(lVar2 + 0x6c) = 0;
    *(undefined8 *)(lVar2 + 0x84) = 0;
    *(undefined8 *)(lVar2 + 0x7c) = 0;
    *(undefined8 *)(lVar2 + 0xa0) = 0;
    *(undefined8 *)(lVar2 + 0x98) = 0;
    *(undefined8 *)(lVar2 + 0xb0) = 0;
    *(undefined8 *)(lVar2 + 0xa8) = 0;
    *(undefined4 *)(lVar2 + 0xb8) = 0;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 200) = 0;
    *(int *)(param_1 + 0x2988) = *(int *)(param_1 + 0x2988) + 1;
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa0));
  return puVar4;
}




int FUN_1004f227c(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2990));
  lVar2 = *(long *)(param_1 + 0x29d0);
  *(undefined8 *)(param_2 + 0xc0) = 0;
  *(long *)(param_2 + 200) = lVar2;
  if (lVar2 == 0) {
    *(long *)(param_1 + 0x29d0) = param_2;
    plVar3 = (long *)(param_1 + 0x29d8);
  }
  else {
    plVar3 = (long *)(param_1 + 0x29d0);
    *(long *)(lVar2 + 0xc0) = param_2;
  }
  *plVar3 = param_2;
  *(int *)(param_1 + 0x29e0) = *(int *)(param_1 + 0x29e0) + 1;
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2990));
  return iVar1;
}




undefined4
FUN_1004f22f0(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined4 *param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  
  DAT_1018675c8 = 1;
  lVar3 = FUN_1004f21a0();
  if (lVar3 == 0) {
    if (param_6 != (undefined4 *)0x0) {
      (**(code **)(*param_1 + 0x20))(param_1,*param_6);
    }
    DAT_1018675c8 = 0xfffffff8;
  }
  else {
    iVar2 = std::string::compare(param_2,0,(char *)0x7);
    pcVar4 = "%s/JSONRpc/%s";
    if (iVar2 != 0) {
      iVar2 = std::string::compare(param_2,0,(char *)0x8);
      if (iVar2 != 0) {
        pcVar4 = "https://%s/JSONRpc/%s";
      }
    }
    FUN_10006d330(lVar3 + 0xc,pcVar4);
    FUN_100116af8(lVar3 + 0x98,0x2000,0);
    FUN_1004d26c0(*(undefined8 *)(lVar3 + 0xa0),*(undefined4 *)(lVar3 + 0x9c),
                  "{\"method\" : \"%s\", \"params\":%s}");
    puVar1 = &DAT_1018675cc;
    if (param_6 != (undefined4 *)0x0) {
      puVar1 = param_6;
    }
    *(undefined4 *)(lVar3 + 8) = *puVar1;
    *(undefined4 *)(lVar3 + 0x8c) = param_7;
    *(undefined4 *)(lVar3 + 0x90) = param_8;
    if (param_5 == 0) {
      FUN_1004f227c(param_1,lVar3);
    }
    else {
      FUN_1004f24a4(param_1,lVar3,1);
      FUN_1004f2660(param_1,lVar3);
    }
  }
  return DAT_1018675c8;
}




undefined8 FUN_1004f24a4(long param_1,long *param_2,int param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x29e8));
  lVar2 = FUN_1010eb624(iVar1);
  if (lVar2 != 0) {
    *param_2 = lVar2;
    FUN_1010eb66c(lVar2,0x2712);
    FUN_1010eb66c(lVar2,0x4e2b);
    FUN_1010eb66c(lVar2,0x2711);
    FUN_1010eb66c(lVar2,0x79);
    FUN_1010eb66c(lVar2,0xd);
    FUN_1010eb66c(lVar2,0x2776);
    if ((int)param_2[0x13] != 0) {
      FUN_1010eb66c(lVar2,0x2f);
      FUN_1010eb66c(lVar2,0x271f);
      FUN_1004d2524(param_2[0x14]);
      FUN_1010eb66c(lVar2,0x3c);
    }
    FUN_1010eb66c(lVar2,99);
    if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
      FUN_1010eb66c(lVar2,0x4a);
    }
    FUN_1010d05bc(lVar2);
    if (param_3 == 0) {
      FUN_1010efa70(*(undefined8 *)(param_1 + 0x2a28),lVar2);
      uVar3 = 1;
      goto LAB_1004f263c;
    }
    uVar3 = FUN_1010eb6a0(lVar2);
    FUN_1010eb878(lVar2,0x200002);
    FUN_1010eb86c(lVar2);
    FUN_1004f27a0(param_1,param_2,uVar3,0);
  }
  uVar3 = 0;
LAB_1004f263c:
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x29e8));
  return uVar3;
}




int FUN_1004f2660(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa0));
  if (*(void **)(param_2 + 0xb0) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0xb0));
    *(undefined8 *)(param_2 + 0xa8) = 0;
    *(undefined8 *)(param_2 + 0xb0) = 0;
  }
  if (*(void **)(param_2 + 0xa0) != (void *)0x0) {
    operator_delete__(*(void **)(param_2 + 0xa0));
    *(undefined8 *)(param_2 + 0x98) = 0;
    *(undefined8 *)(param_2 + 0xa0) = 0;
  }
  lVar1 = param_1 + 0xe0;
  if (*(int *)(param_1 + 0x2980) == -1) {
    iVar3 = (int)((ulong)(param_2 - lVar1) >> 4) * -0x3b13b13b;
    *(int *)(param_1 + 0x2984) = iVar3;
    *(int *)(param_1 + 0x2980) = iVar3;
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x2984);
    iVar3 = (int)((ulong)(param_2 - lVar1) >> 4) * -0x3b13b13b;
    *(int *)(param_1 + 0x2984) = iVar3;
    *(int *)(lVar1 + (ulong)uVar2 * 0xd0) = iVar3;
  }
  *(int *)(param_1 + 0x2988) = *(int *)(param_1 + 0x2988) + -1;
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa0));
  return iVar3;
}




uint FUN_1004f271c(void *param_1,int param_2,int param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = param_3 * param_2;
  if (uVar3 != 0) {
    uVar2 = *(uint *)(param_4 + 0xb8);
    uVar1 = uVar2 + uVar3;
    FUN_100116af8(param_4 + 0xa8,uVar1 + 1,0);
    lVar4 = *(long *)(param_4 + 0xb0);
    _memmove((void *)(lVar4 + (ulong)uVar2),param_1,(ulong)uVar3);
    *(undefined1 *)(lVar4 + (ulong)uVar1) = 0;
    *(uint *)(param_4 + 0xb8) = *(int *)(param_4 + 0xb8) + uVar3;
  }
  return uVar3;
}




void FUN_1004f27a0(long *param_1,long param_2,undefined8 param_3,long param_4)

{
  char cVar1;
  undefined8 *puVar2;
  void *pvVar3;
  int iVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  char *local_60;
  char *pcStack_58;
  undefined4 local_50;
  
  iVar4 = (int)param_3;
  if (iVar4 == 0) {
    if (param_4 == 200) {
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 0;
      pvStack_b0 = (void *)0x0;
      local_b8 = 0;
      uStack_a0 = 0;
      local_a8 = (void *)0x0;
      local_98 = 0;
      uStack_90 = 0x400;
      local_88 = 0;
      local_80 = 0;
      local_c8 = operator_new(0x28);
      *local_c8 = 0;
      local_c8[1] = 0x10000;
      local_c8[3] = 0;
      local_c8[4] = 0;
      local_c8[2] = 0;
      local_60 = *(char **)(param_2 + 0xb0);
      cVar1 = *local_60;
      pcStack_58 = local_60;
      local_c0 = local_c8;
      while (cVar1 != '\0') {
        FUN_100522630(&local_e0,&local_60);
        if (local_88 == 0) {
          (**(code **)(*param_1 + 0x18))(param_1,&local_e0,*(undefined4 *)(param_2 + 8));
        }
        else {
          DAT_1018675c8 = 0xfffffffa;
        }
        cVar1 = *local_60;
      }
LAB_1004f2980:
      (**(code **)(*param_1 + 0x28))(param_1,*(undefined4 *)(param_2 + 8));
      if (local_c0 != (undefined8 *)0x0) {
        pvVar3 = (void *)FUN_1000f7b54();
        operator_delete(pvVar3);
      }
      _free(local_a8);
      if (pvStack_b0 != (void *)0x0) {
        operator_delete(pvStack_b0);
      }
      return;
    }
    if (param_4 == 0x130) {
      uStack_a0 = 0;
      local_a8 = (void *)0x0;
      pvStack_b0 = (void *)0x0;
      local_b8 = 0;
      local_98 = 0;
      uStack_90 = 0x400;
      local_88 = 0;
      local_80 = 0;
      puVar2 = operator_new(0x28);
      *puVar2 = 0;
      puVar2[1] = 0x10000;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[2] = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_d0 = 3;
      local_68 = 0x100005;
      local_78 = "httpStatus";
      uStack_70 = 10;
      pcStack_58 = (char *)0x0;
      local_60 = (char *)0x130;
      local_50 = 0x3e06;
      local_c8 = puVar2;
      local_c0 = puVar2;
      FUN_10032b704(&local_e0,&local_78,&local_60,puVar2);
      local_68 = 0x100005;
      local_78 = "code";
      uStack_70 = 4;
      local_60 = (char *)0x0;
      pcStack_58 = (char *)0x0;
      local_50 = 0x3e06;
      FUN_10032b704(&local_e0,&local_78,&local_60,puVar2);
      (**(code **)(*param_1 + 0x18))(param_1,&local_e0,*(undefined4 *)(param_2 + 8));
      goto LAB_1004f2980;
    }
    FUN_1010f2cbc(0);
  }
  else {
    FUN_1010f2cbc(param_3);
    if (((iVar4 < 0x1c) && (iVar4 != 6)) && (iVar4 == 7)) {
      DAT_1018675c8 = 0xfffffffb;
      goto LAB_1004f29dc;
    }
  }
  DAT_1018675c8 = 0xfffffffc;
LAB_1004f29dc:
                    /* WARNING: Could not recover jumptable at 0x0001004f2a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1,*(undefined4 *)(param_2 + 8));
  return;
}




long * FUN_1004f2a0c(long param_1,long param_2)

{
  long *plVar1;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2990));
  plVar1 = *(long **)(param_1 + 0x29d0);
  if (plVar1 != (long *)0x0) {
    do {
      if (*plVar1 == param_2) {
        FUN_1004f2ad8(param_1 + 0x29d0,plVar1);
        break;
      }
      plVar1 = (long *)plVar1[0x19];
    } while (plVar1 != (long *)0x0);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2990));
  return plVar1;
}




void FUN_1004f2a80(undefined8 param_1,undefined8 param_2,uint param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 local_40;
  ulong local_38;
  undefined4 local_30;
  long local_28 [2];
  undefined4 local_18;
  
  local_30 = 0x100005;
  local_38 = (ulong)param_3;
  local_18 = 0x1606;
  local_28[0] = (long)param_4;
  local_28[1] = 0;
  if (-1 < param_4) {
    local_18 = 0x3e06;
  }
  local_40 = param_2;
  FUN_10032b704(param_1,&local_40,local_28,param_5);
  return;
}




void FUN_1004f2ad8(long *param_1,long param_2)

{
  long lVar1;
  
  if (*param_1 == param_2) {
    if (param_1[1] == param_2) {
      *param_1 = 0;
      param_1[1] = 0;
    }
    else {
      *param_1 = *(long *)(param_2 + 200);
    }
  }
  else if (param_1[1] == param_2) {
    lVar1 = *(long *)(param_2 + 0xc0);
    param_1[1] = lVar1;
    *(undefined8 *)(lVar1 + 200) = 0;
  }
  else {
    lVar1 = *(long *)(param_2 + 0xc0);
    *(undefined8 *)(lVar1 + 200) = *(undefined8 *)(param_2 + 200);
    *(long *)(*(long *)(param_2 + 200) + 0xc0) = lVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}




long FUN_1004f2b38(long param_1)

{
  long lVar1;
  
  _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x2990));
  lVar1 = *(long *)(param_1 + 0x29d0);
  if (lVar1 != 0) {
    FUN_1004f2ad8(param_1 + 0x29d0,lVar1);
  }
  _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x2990));
  return lVar1;
}




void FUN_1004f2b90(char *param_1,char *param_2,addrinfo *param_3,addrinfo **param_4)

{
  uint uVar1;
  int iVar2;
  addrinfo *paVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = _atoi(param_2);
  }
  iVar2 = _getaddrinfo(param_1,param_2,param_3,param_4);
  if (((iVar2 == 0) && (uVar1 != 0)) && (paVar3 = *param_4, paVar3 != (addrinfo *)0x0)) {
    do {
      if (((paVar3->ai_family == 0x1e) || (paVar3->ai_family == 2)) &&
         (pcVar4 = paVar3->ai_addr->sa_data, *(short *)pcVar4 == 0)) {
        *(ushort *)pcVar4 = (ushort)(uVar1 >> 8) & 0xff | (ushort)((uVar1 & 0xff00ff) << 8);
      }
      paVar3 = paVar3->ai_next;
    } while (paVar3 != (addrinfo *)0x0);
  }
  return;
}




void FUN_1004f2c38(char *param_1,undefined1 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  FILE *pFVar4;
  size_t sVar5;
  undefined8 *****pppppuVar6;
  undefined8 *puVar7;
  char *pcVar8;
  addrinfo *paVar9;
  ulong uVar10;
  undefined8 ****local_298;
  size_t local_290;
  undefined8 uStack_288;
  int local_27c;
  addrinfo *local_278;
  undefined8 local_270;
  undefined4 uStack_268;
  undefined1 uStack_264;
  undefined1 uStack_263;
  undefined2 uStack_262;
  undefined4 uStack_260;
  undefined1 uStack_25c;
  undefined1 uStack_25b;
  undefined2 uStack_25a;
  undefined4 uStack_258;
  undefined2 uStack_254;
  undefined2 uStack_252;
  undefined6 local_250;
  undefined2 uStack_24a;
  undefined6 uStack_248;
  undefined2 uStack_242;
  undefined1 local_168;
  char acStack_e8 [128];
  char acStack_68 [16];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  if ((param_1[0x17] < '\0') && (0x7f < *(ulong *)(param_1 + 8))) {
    pFVar4 = *(FILE **)PTR____stderrp_101444220;
    pcVar8 = "ERROR: url size limit exceeded: %s\n";
  }
  else if ((*(char *)(param_3 + 0x17) < '\0') && (199 < *(ulong *)(param_3 + 8))) {
    pFVar4 = *(FILE **)PTR____stderrp_101444220;
    pcVar8 = "ERROR: origin size limit exceeded: %s\n";
  }
  else {
    pcVar8 = *(char **)param_1;
    if (-1 < param_1[0x17]) {
      pcVar8 = param_1;
    }
    iVar2 = _sscanf(pcVar8,"ws://%[^:/]:%d/%s");
    if (iVar2 != 3) {
      pcVar8 = *(char **)param_1;
      if (-1 < param_1[0x17]) {
        pcVar8 = param_1;
      }
      iVar2 = _sscanf(pcVar8,"ws://%[^:/]/%s");
      if (iVar2 == 2) {
        local_27c = 0x50;
      }
      else {
        pcVar8 = *(char **)param_1;
        if (-1 < param_1[0x17]) {
          pcVar8 = param_1;
        }
        iVar2 = _sscanf(pcVar8,"ws://%[^:/]:%d");
        if (iVar2 != 2) {
          pcVar8 = *(char **)param_1;
          if (-1 < param_1[0x17]) {
            pcVar8 = param_1;
          }
          iVar2 = _sscanf(pcVar8,"ws://%[^:/]");
          if (iVar2 != 1) {
            pFVar4 = *(FILE **)PTR____stderrp_101444220;
            pcVar8 = "ERROR: Could not parse WebSocket url: %s\n";
            goto LAB_1004f2f88;
          }
          local_27c = 0x50;
        }
        local_168 = 0;
      }
    }
    puVar1 = PTR____stderrp_101444220;
    _fprintf(*(FILE **)PTR____stderrp_101444220,
             "easywsclient: connecting: host=%s port=%d path=/%s\n");
    sVar5 = _strlen(acStack_e8);
    if (0xffffffffffffffef < sVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_10051fb8c();
    }
    if (sVar5 < 0x17) {
      pppppuVar6 = &local_298;
      uStack_288 = CONCAT17((char)sVar5,(undefined7)uStack_288);
      if (sVar5 != 0) goto LAB_1004f2e14;
    }
    else {
      uVar10 = sVar5 + 0x10 & 0xfffffffffffffff0;
      pppppuVar6 = operator_new(uVar10);
      uStack_288 = uVar10 | 0x8000000000000000;
      local_298 = pppppuVar6;
      local_290 = sVar5;
LAB_1004f2e14:
      _memcpy(pppppuVar6,acStack_e8,sVar5);
    }
    *(undefined1 *)((long)pppppuVar6 + sVar5) = 0;
    uStack_264 = 0;
    uStack_263 = 0;
    uStack_262 = 0;
    local_270 = 0;
    uStack_258 = 0;
    uStack_254 = 0;
    uStack_252 = 0;
    uStack_260 = 0;
    uStack_25c = 0;
    uStack_25b = 0;
    uStack_25a = 0;
    uStack_248 = 0;
    uStack_242 = 0;
    local_250 = 0;
    uStack_24a = 0;
    uStack_268 = 1;
    _snprintf(acStack_68,0x10,"%d");
    pppppuVar6 = (undefined8 *****)local_298;
    if (-1 < (long)uStack_288) {
      pppppuVar6 = &local_298;
    }
    iVar2 = FUN_1004f2b90(pppppuVar6,acStack_68,&local_270,&local_278);
    if (iVar2 == 0) {
      paVar9 = local_278;
      if (local_278 == (addrinfo *)0x0) {
        local_278 = (addrinfo *)0x0;
        iVar2 = -1;
      }
      else {
        do {
          iVar2 = _socket(paVar9->ai_family,paVar9->ai_socktype,paVar9->ai_protocol);
          if (iVar2 != -1) {
            iVar3 = _connect(iVar2,paVar9->ai_addr,paVar9->ai_addrlen);
            if (iVar3 != -1) goto LAB_1004f2efc;
            _close(iVar2);
          }
          paVar9 = paVar9->ai_next;
        } while (paVar9 != (addrinfo *)0x0);
        iVar2 = -1;
      }
LAB_1004f2efc:
      _freeaddrinfo(local_278);
    }
    else {
      pFVar4 = *(FILE **)puVar1;
      _gai_strerror(iVar2);
      _fprintf(pFVar4,"getaddrinfo: %s\n");
      iVar2 = 1;
    }
    if ((long)uStack_288 < 0) {
      operator_delete(local_298);
    }
    if (iVar2 != -1) {
      _snprintf((char *)&local_270,0x100,"GET /%s HTTP/1.1\r\n");
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      if (local_27c == 0x50) {
        pcVar8 = "Host: %s\r\n";
      }
      else {
        pcVar8 = "Host: %s:%d\r\n";
      }
      _snprintf((char *)&local_270,0x100,pcVar8);
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      uStack_268 = 0x62657720;
      uStack_264 = 0x73;
      local_270._0_1_ = 'U';
      local_270._1_1_ = 'p';
      local_270._2_1_ = 'g';
      local_270._3_1_ = 'r';
      local_270._4_1_ = 'a';
      local_270._5_1_ = 'd';
      local_270._6_1_ = 'e';
      local_270._7_1_ = ':';
      uStack_263 = 0x6f;
      uStack_262 = 0x6b63;
      uStack_260 = 0xa0d7465;
      uStack_25c = 0;
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      uStack_268 = 0x203a6e6f;
      uStack_264 = 0x55;
      uStack_263 = 0x70;
      local_270._0_1_ = 'C';
      local_270._1_1_ = 'o';
      local_270._2_1_ = 'n';
      local_270._3_1_ = 'n';
      local_270._4_1_ = 'e';
      local_270._5_1_ = 'c';
      local_270._6_1_ = 't';
      local_270._7_1_ = 'i';
      uStack_262 = 0x7267;
      uStack_260 = 0xd656461;
      uStack_25c = 10;
      uStack_25b = 0;
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      if (*(char *)(param_3 + 0x17) < '\0') {
        if (*(long *)(param_3 + 8) != 0) goto LAB_1004f3050;
      }
      else if (*(char *)(param_3 + 0x17) != '\0') {
LAB_1004f3050:
        _snprintf((char *)&local_270,0x100,"Origin: %s\r\n");
        sVar5 = _strlen((char *)&local_270);
        _send(iVar2,&local_270,sVar5,0);
      }
      uStack_268 = 0x656b636f;
      uStack_264 = 0x74;
      uStack_263 = 0x2d;
      uStack_262 = 0x654b;
      local_270._0_1_ = 'S';
      local_270._1_1_ = 'e';
      local_270._2_1_ = 'c';
      local_270._3_1_ = '-';
      local_270._4_1_ = 'W';
      local_270._5_1_ = 'e';
      local_270._6_1_ = 'b';
      local_270._7_1_ = 'S';
      uStack_258 = 0x4c44624d;
      uStack_254 = 0x4531;
      uStack_260 = 0x78203a79;
      uStack_25c = 0x33;
      uStack_25b = 0x4a;
      uStack_25a = 0x484a;
      uStack_24a = 0x4458;
      uStack_248 = 0xa0d3d3d77;
      uStack_252 = 0x4c7a;
      local_250 = 0x68424739686b;
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      uStack_268 = 0x656b636f;
      local_270._0_1_ = 'S';
      local_270._1_1_ = 'e';
      local_270._2_1_ = 'c';
      local_270._3_1_ = '-';
      local_270._4_1_ = 'W';
      local_270._5_1_ = 'e';
      local_270._6_1_ = 'b';
      local_270._7_1_ = 'S';
      uStack_25c = 0x6e;
      uStack_25b = 0x3a;
      uStack_25a = 0x3120;
      uStack_258 = 0xa0d33;
      uStack_264 = 0x74;
      uStack_263 = 0x2d;
      uStack_262 = 0x6556;
      uStack_260 = 0x6f697372;
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      local_270 = CONCAT53(local_270._3_5_,0xa0d);
      sVar5 = _strlen((char *)&local_270);
      _send(iVar2,&local_270,sVar5,0);
      local_270 = CONCAT44(local_270._4_4_,1);
      _setsockopt(iVar2,6,1,&local_270,4);
      _fcntl(iVar2,4);
      _fprintf(*(FILE **)puVar1,"Connected to: %s\n");
      puVar7 = operator_new(0x60);
      *puVar7 = &PTR_FUN_10149eb30;
      puVar7[2] = 0;
      puVar7[1] = 0;
      puVar7[4] = 0;
      puVar7[3] = 0;
      puVar7[6] = 0;
      puVar7[5] = 0;
      puVar7[8] = 0;
      puVar7[7] = 0;
      puVar7[9] = 0;
      *(int *)(puVar7 + 10) = iVar2;
      *(undefined4 *)((long)puVar7 + 0x54) = 2;
      *(undefined1 *)(puVar7 + 0xb) = param_2;
      goto LAB_1004f31a4;
    }
    pFVar4 = *(FILE **)puVar1;
    pcVar8 = "Unable to connect to %s:%d\n";
  }
LAB_1004f2f88:
  _fprintf(pFVar4,pcVar8);
  puVar7 = (undefined8 *)0x0;
LAB_1004f31a4:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(puVar7);
}




undefined8 * FUN_1004f320c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10149ebb0;
  FUN_1004f1b04(param_1 + 2);
  *param_1 = &PTR_thunk_FUN_1004f3350_10149e440;
  param_1[2] = &PTR_FUN_10149e998;
  FUN_1004f1884(param_1 + 0x54e);
  param_1[0x54d] = &PTR_FUN_10149e9d8;
  param_1[0x578] = 0;
  param_1[0x577] = 0;
  param_1[0x57a] = 0;
  param_1[0x579] = 0;
  param_1[0x57c] = 0;
  param_1[0x57b] = 0;
  param_1[0x57e] = 0;
  param_1[0x57d] = 0;
  param_1[0x580] = 0;
  param_1[0x57f] = 0;
  param_1[0x582] = 0;
  param_1[0x581] = 0;
  *(undefined1 *)(param_1 + 0x583) = 0;
  *(undefined1 *)(param_1 + 0x58a) = 0;
  param_1[0x585] = 0;
  param_1[0x584] = 0;
  param_1[0x587] = 0;
  param_1[0x586] = 0;
  param_1[0x589] = 0;
  param_1[0x588] = 0;
  FUN_1004e4464(param_1 + 0x58b,0);
  FUN_1004e4464(param_1 + 0x593,0);
  param_1[0x59c] = 0;
  param_1[0x59b] = 0;
  *(undefined4 *)(param_1 + 0x59d) = 0;
  *(undefined4 *)(param_1 + 0x59e) = 0;
  FUN_1004e3004(param_1 + 0x59f);
  *(undefined2 *)(param_1 + 0x5a0) = 0;
  return param_1;
}




void FUN_1004f32dc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 0x2c18) = param_4;
  FUN_1004f1c10(param_1 + 0x10);
  if (*(char *)(param_1 + 0x2d01) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x2d01) = 1;
  *(undefined1 *)(param_1 + 0x2a60) = 0;
  FUN_1004e4910(param_1 + 0x10,"JSONRpc");
  return;
}




undefined1 FUN_1004f3344(long param_1)

{
  return *(undefined1 *)(param_1 + 0x2d01);
}




undefined8 * FUN_1004f3350(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_thunk_FUN_1004f3350_10149e440;
  puVar1 = param_1 + 2;
  *puVar1 = &PTR_FUN_10149e998;
  FUN_1004f1dac(puVar1);
  *(undefined1 *)(param_1 + 0x54c) = 1;
  FUN_1004e48d8(puVar1);
  FUN_1004f16d8(param_1 + 0x593);
  _pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 0x58b));
  if (*(char *)((long)param_1 + 0x2c4f) < '\0') {
    operator_delete((void *)param_1[0x587]);
  }
  if (*(char *)((long)param_1 + 0x2c37) < '\0') {
    operator_delete((void *)param_1[0x584]);
  }
  if (*(char *)((long)param_1 + 0x2c17) < '\0') {
    operator_delete((void *)param_1[0x580]);
  }
  if (*(char *)((long)param_1 + 0x2bff) < '\0') {
    operator_delete((void *)param_1[0x57d]);
  }
  if (*(char *)((long)param_1 + 0x2be7) < '\0') {
    operator_delete((void *)param_1[0x57a]);
  }
  if (*(char *)((long)param_1 + 0x2bcf) < '\0') {
    operator_delete((void *)param_1[0x577]);
  }
  FUN_100521e7c(param_1 + 0x54e);
  FUN_1004f1c9c(puVar1);
  return param_1;
}




void thunk_FUN_1004f3350(void)

{
  FUN_1004f3350();
  return;
}




void FUN_1004f347c(long param_1)

{
  FUN_1004f3350(param_1 + -0x10);
  return;
}




void FUN_1004f3484(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f3350();
  operator_delete(pvVar1);
  return;
}




void FUN_1004f3498(long param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f3350(param_1 + -0x10);
  operator_delete(pvVar1);
  return;
}




undefined8
FUN_1004f34b0(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_48;
  undefined1 local_41;
  
  local_41 = param_4;
  local_48 = FUN_1004f1744(param_1 + 0x2c98,param_5);
  FUN_1000ee4ec(local_60,"createAccountForPlayer");
  FUN_1004f3584(local_78,param_1 + 0x2bb8,param_2,param_3,&local_41);
  uVar1 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x38,local_60,local_78,0,&local_48,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar1;
}




void FUN_1004f3584(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  char *param_5)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_58 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_58 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_4 + 0x17);
  local_58 = (undefined8 *)*param_4;
  if (-1 < (char)bVar2) {
    local_58 = param_4;
  }
  uVar1 = (uint)param_4[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_48 = 0x101;
  if (*param_5 != '\0') {
    local_48 = 0x102;
  }
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_1004f3738(long param_1,string *param_2,long *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1ac;
  long local_1a8;
  undefined8 uStack_1a0;
  void *local_198 [2];
  char local_181;
  void *local_180 [2];
  char local_169;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  local_160 = param_4;
  std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x2bd0),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x2be8),param_2);
  local_168 = FUN_1004e2fdc(&DAT_101d911b0);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&DAT_101d91198);
  FUN_1004d2698(auStack_158,"%d");
  FUN_1000ee4ec(local_180,"createGuestPlayer");
  uStack_1a0 = FUN_1004e2f88(&DAT_101d911b0);
  local_1a8 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    local_1a8 = (long)param_3;
  }
  local_1ac = FUN_1004e2f38(&DAT_101d911b0);
  local_1b8 = FUN_1004e2f48(&DAT_101d911b0);
  local_1c0 = FUN_1004e2f70(&DAT_101d911b0);
  local_1c8 = FUN_1004e2f80(&DAT_101d911b0);
  FUN_1004f3924(local_198,param_2,"en",&local_168,"production",&local_160,&uStack_1a0,&local_1a8,"",
                auStack_158,&local_1ac,&local_1b8,&local_1c0,&local_1c8);
  uVar1 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x38,local_180,local_198,0,0,0x14,1);
  if (local_181 < '\0') {
    operator_delete(local_198[0]);
  }
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004f3924(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined4 *param_11,undefined8 *param_12
                  ,undefined8 *param_13,undefined8 *param_14)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  void *pvStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 *local_80;
  ulong local_78;
  undefined4 local_70;
  
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  pvStack_e8 = (void *)0x0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = (void *)0x0;
  local_d0 = 0;
  uStack_c8 = 0x400;
  local_c0 = 0;
  local_b8 = 0;
  local_100 = operator_new(0x28);
  *local_100 = 0;
  local_100[1] = 0x10000;
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[2] = 0;
  local_a0 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_80 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_80 = param_2;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_98 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_f8 = local_100;
  FUN_10034f3d4(&local_b0,&local_80,local_100);
  uVar2 = FUN_1004d2524(param_3);
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_80 = param_3;
  FUN_10034f3d4(&local_b0,&local_80,local_100);
  lVar3 = FUN_1005237c4(&local_118,*param_4);
  uVar2 = FUN_1004d2524(param_5);
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_80 = param_5;
  FUN_10034f3d4(lVar3 + 0x68,&local_80,*(undefined8 *)(lVar3 + 0x18));
  uVar4 = FUN_1005237c4(lVar3,*param_6);
  uVar4 = FUN_1005237c4(uVar4,*param_7);
  lVar3 = FUN_1005237c4(uVar4,*param_8);
  uVar2 = FUN_1004d2524(param_9);
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_80 = param_9;
  FUN_10034f3d4(lVar3 + 0x68,&local_80,*(undefined8 *)(lVar3 + 0x18));
  uVar2 = FUN_1004d2524(param_10);
  local_80 = param_10;
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  FUN_10034f3d4(lVar3 + 0x68,&local_80,*(undefined8 *)(lVar3 + 0x18));
  uVar4 = FUN_100523820(lVar3,*param_11);
  uVar4 = FUN_1005237c4(uVar4,*param_12);
  uVar4 = FUN_1005237c4(uVar4,*param_13);
  FUN_1005237c4(uVar4,*param_14);
  uVar4 = FUN_100523708();
  FUN_10003330c(param_1,uVar4);
  if (lStack_88 < 0) {
    operator_delete(local_98);
  }
  if (local_f8 != (undefined8 *)0x0) {
    pvVar5 = (void *)FUN_1000f7b54();
    operator_delete(pvVar5);
  }
  _free(local_e0);
  if (pvStack_e8 != (void *)0x0) {
    operator_delete(pvStack_e8);
  }
  return;
}




undefined8
FUN_1004f3b7c(long param_1,string *param_2,long *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_19c;
  long local_198;
  void *local_190 [2];
  char local_179;
  void *local_178 [2];
  char local_161;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_101444218;
  local_160 = param_5;
  std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x2bd0),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x2be8),param_2);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&DAT_101d91198);
  FUN_1004d2698(auStack_158,"%d");
  FUN_1004e2fdc(&DAT_101d911b0);
  FUN_1000ee4ec(local_178,"getPlayerForGuestAccount");
  local_198 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    local_198 = (long)param_3;
  }
  local_19c = FUN_1004e2f38(&DAT_101d911b0);
  local_1a8 = FUN_1004e2f88(&DAT_101d911b0);
  local_1b0 = FUN_1004e2f48(&DAT_101d911b0);
  local_1b8 = FUN_1004e2f70(&DAT_101d911b0);
  local_1c0 = FUN_1004e2f80(&DAT_101d911b0);
  FUN_1004f3d5c(local_190,param_4,param_2,&local_198,auStack_158,&local_19c,"production",&local_160,
                &local_1a8,&local_1b0,&local_1b8,&local_1c0);
  uVar1 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x38,local_178,local_190,0,0,0x14,1);
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_58) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004f3d5c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined4 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  )

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  void *pvStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 *local_80;
  ulong local_78;
  undefined4 local_70;
  
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  pvStack_e8 = (void *)0x0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = (void *)0x0;
  local_d0 = 0;
  uStack_c8 = 0x400;
  local_c0 = 0;
  local_b8 = 0;
  local_100 = operator_new(0x28);
  *local_100 = 0;
  local_100[1] = 0x10000;
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[2] = 0;
  local_a0 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_80 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_80 = param_2;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_98 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_f8 = local_100;
  FUN_10034f3d4(&local_b0,&local_80,local_100);
  bVar1 = *(byte *)((long)param_3 + 0x17);
  local_80 = (undefined8 *)*param_3;
  if (-1 < (char)bVar1) {
    local_80 = param_3;
  }
  uVar2 = (uint)param_3[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  FUN_10034f3d4(&local_b0,&local_80,local_100);
  lVar3 = FUN_1005237c4(&local_118,*param_4);
  uVar2 = FUN_1004d2524(param_5);
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_80 = param_5;
  FUN_10034f3d4(lVar3 + 0x68,&local_80,*(undefined8 *)(lVar3 + 0x18));
  lVar3 = FUN_100523820(lVar3,*param_6);
  uVar2 = FUN_1004d2524(param_7);
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_80 = param_7;
  FUN_10034f3d4(lVar3 + 0x68,&local_80,*(undefined8 *)(lVar3 + 0x18));
  uVar4 = FUN_1005237c4(lVar3,*param_8);
  uVar4 = FUN_1005237c4(uVar4,*param_9);
  uVar4 = FUN_1005237c4(uVar4,*param_10);
  uVar4 = FUN_1005237c4(uVar4,*param_11);
  FUN_1005237c4(uVar4,*param_12);
  uVar4 = FUN_100523708();
  FUN_10003330c(param_1,uVar4);
  if (lStack_88 < 0) {
    operator_delete(local_98);
  }
  if (local_f8 != (undefined8 *)0x0) {
    pvVar5 = (void *)FUN_1000f7b54();
    operator_delete(pvVar5);
  }
  _free(local_e0);
  if (pvStack_e8 != (void *)0x0) {
    operator_delete(pvStack_e8);
  }
  return;
}




undefined8
FUN_1004f3f7c(long param_1,string *param_2,long *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_19c;
  long local_198;
  void *local_190 [2];
  char local_179;
  void *local_178 [2];
  char local_161;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  void *local_148 [2];
  char local_131;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  local_160 = param_6;
  local_158 = param_5;
  uStack_150 = param_4;
  std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&DAT_101d91198);
  FUN_1000ee4ec(local_148,param_4);
  std::string::operator=((string *)(param_1 + 0x2bd0),(string *)local_148);
  if (local_131 < '\0') {
    operator_delete(local_148[0]);
  }
  std::string::operator=((string *)(param_1 + 0x2be8),param_2);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&DAT_101d91198);
  FUN_1004d2698(local_148,"%d");
  FUN_1004e2fdc(&DAT_101d911b0);
  FUN_1000ee4ec(local_178,"getPlayerFromPlatform");
  local_198 = *param_3;
  if (-1 < *(char *)((long)param_3 + 0x17)) {
    local_198 = (long)param_3;
  }
  local_19c = FUN_1004e2f38(&DAT_101d911b0);
  local_1a8 = FUN_1004e2f88(&DAT_101d911b0);
  local_1b0 = FUN_1004e2f48(&DAT_101d911b0);
  local_1b8 = FUN_1004e2f70(&DAT_101d911b0);
  local_1c0 = FUN_1004e2f80(&DAT_101d911b0);
  FUN_1004f4178(local_190,&uStack_150,&local_158,param_2,&local_198,local_148,&local_19c,
                "production",&local_160,&local_1a8,&local_1b0,&local_1b8,&local_1c0);
  uVar1 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x38,local_178,local_190,0,0,0x14,1);
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004f4178(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  ,undefined8 *param_13)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  void *pvStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 *local_80;
  ulong local_78;
  undefined4 local_70;
  
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  pvStack_e8 = (void *)0x0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = (void *)0x0;
  local_d0 = 0;
  uStack_c8 = 0x400;
  local_c0 = 0;
  local_b8 = 0;
  local_100 = operator_new(0x28);
  *local_100 = 0;
  local_100[1] = 0x10000;
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[2] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 4;
  local_90 = 0;
  lStack_88 = 0;
  local_98 = (void *)0x0;
  local_f8 = local_100;
  uVar3 = FUN_1005237c4(&local_118,*param_2);
  lVar4 = FUN_1005237c4(uVar3,*param_3);
  bVar1 = *(byte *)((long)param_4 + 0x17);
  local_80 = (undefined8 *)*param_4;
  if (-1 < (char)bVar1) {
    local_80 = param_4;
  }
  uVar2 = (uint)param_4[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  FUN_10034f3d4(lVar4 + 0x68,&local_80,*(undefined8 *)(lVar4 + 0x18));
  lVar4 = FUN_1005237c4(lVar4,*param_5);
  uVar2 = FUN_1004d2524(param_6);
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_80 = param_6;
  FUN_10034f3d4(lVar4 + 0x68,&local_80,*(undefined8 *)(lVar4 + 0x18));
  lVar4 = FUN_100523820(lVar4,*param_7);
  uVar2 = FUN_1004d2524(param_8);
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_80 = param_8;
  FUN_10034f3d4(lVar4 + 0x68,&local_80,*(undefined8 *)(lVar4 + 0x18));
  uVar3 = FUN_1005237c4(lVar4,*param_9);
  uVar3 = FUN_1005237c4(uVar3,*param_10);
  uVar3 = FUN_1005237c4(uVar3,*param_11);
  uVar3 = FUN_1005237c4(uVar3,*param_12);
  FUN_1005237c4(uVar3,*param_13);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_88 < 0) {
    operator_delete(local_98);
  }
  if (local_f8 != (undefined8 *)0x0) {
    pvVar5 = (void *)FUN_1000f7b54();
    operator_delete(pvVar5);
  }
  _free(local_e0);
  if (pvStack_e8 != (void *)0x0) {
    operator_delete(pvStack_e8);
  }
  return;
}




undefined8
FUN_1004f4374(long param_1,string *param_2,undefined8 param_3,string *param_4,long *param_5,
             undefined8 param_6)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 local_158;
  void *local_150 [2];
  char local_139;
  void *local_138 [2];
  char local_121;
  undefined8 local_120;
  void *pvStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  string *local_e0;
  string *psStack_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  void *pvStack_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  std::string::operator=((string *)(param_1 + 0x2bb8),(string *)&DAT_101d91198);
  std::string::operator=((string *)(param_1 + 0x2bd0),param_4);
  std::string::operator=((string *)(param_1 + 0x2be8),param_2);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&DAT_101d91198);
  pvStack_88 = (void *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = (void *)0x0;
  local_70 = 0;
  uStack_68 = 0x100;
  local_d0 = &local_90;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  lStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x200;
  local_98 = 0;
  FUN_100112618(&local_d0);
  FUN_1004f0f60(&local_d0,"gameId");
  FUN_1004f108c(&local_d0,param_2);
  FUN_1004f0f60(&local_d0,"marketplace");
  plVar1 = (long *)*param_5;
  if (-1 < *(char *)((long)param_5 + 0x17)) {
    plVar1 = param_5;
  }
  FUN_1004f1038(&local_d0,plVar1);
  FUN_1004f0f60(&local_d0,"version");
  FUN_1004f46f4(&local_d0,DAT_101867440);
  FUN_1004f0f60(&local_d0,"device");
  uVar3 = FUN_1004e2f38(&DAT_101d911b0);
  FUN_1004f46f4(&local_d0,uVar3);
  FUN_1004f0f60(&local_d0,"environment");
  FUN_1004f1038(&local_d0,"production");
  FUN_1004f0f60(&local_d0,"languages");
  FUN_1004f1038(&local_d0,param_6);
  FUN_1004f0f60(&local_d0,"os");
  uVar3 = FUN_1004e2f88(&DAT_101d911b0);
  FUN_1004f1038(&local_d0,uVar3);
  FUN_1004f0f60(&local_d0,"hardwareIdName");
  uVar3 = FUN_1004e2f48(&DAT_101d911b0);
  FUN_1004f1038(&local_d0,uVar3);
  FUN_1004f0f60(&local_d0,"hardwareName");
  uVar3 = FUN_1004e2f70(&DAT_101d911b0);
  FUN_1004f1038(&local_d0,uVar3);
  FUN_1004f0f60(&local_d0,"hardwareIDFA");
  uVar3 = FUN_1004e2f80(&DAT_101d911b0);
  FUN_1004f1038(&local_d0,uVar3);
  FUN_1004f0f60(&local_d0,"credentials");
  local_e0 = *(string **)param_4;
  if (-1 < (char)param_4[0x17]) {
    local_e0 = param_4;
  }
  pvStack_118 = (void *)0x0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  local_100 = 0;
  uStack_f8 = 0x100;
  local_f0 = 0;
  local_e8 = 0;
  psStack_d8 = local_e0;
  FUN_100523874(&local_120,&local_e0,&local_d0);
  puVar2 = local_d0;
  lStack_b0 = lStack_b0 + -0x10;
  puVar4 = (undefined1 *)local_d0[3];
  if ((undefined1 *)local_d0[4] <= puVar4 + 1) {
    FUN_1000f9034(local_d0,1);
    puVar4 = (undefined1 *)puVar2[3];
  }
  puVar2[3] = puVar4 + 1;
  *puVar4 = 0x7d;
  FUN_1000ee4ec(local_138,"executeCommand");
  local_158 = FUN_100110e38(&local_90);
  FUN_1004f4790(local_150,param_3,"authenticate",&local_158);
  uVar3 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x38,local_138,local_150,0,0,0x3c,1);
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (local_121 < '\0') {
    operator_delete(local_138[0]);
  }
  _free(local_110);
  if (pvStack_118 != (void *)0x0) {
    operator_delete(pvStack_118);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  _free(local_80);
  if (pvStack_88 != (void *)0x0) {
    operator_delete(pvStack_88);
  }
  return uVar3;
}




undefined8 FUN_1004f46f4(long *param_1,ulong param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  
  FUN_100112734(param_1,6);
  lVar2 = *param_1;
  puVar3 = *(undefined1 **)(lVar2 + 0x18);
  if (*(undefined1 **)(lVar2 + 0x20) <= puVar3 + 0xb) {
    FUN_1000f9034(lVar2,0xb);
    puVar3 = *(undefined1 **)(lVar2 + 0x18);
  }
  *(undefined1 **)(lVar2 + 0x18) = puVar3 + 0xb;
  puVar1 = puVar3;
  if ((int)param_2 < 0) {
    *puVar3 = 0x2d;
    param_2 = (ulong)(uint)-(int)param_2;
    puVar1 = puVar3 + 1;
  }
  lVar2 = FUN_100112d5c(param_2,puVar1);
  *(long *)(*param_1 + 0x18) = (lVar2 - (long)puVar3) + *(long *)(*param_1 + 0x18) + -0xb;
  return 1;
}




void FUN_1004f4790(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_3);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_3;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  FUN_1005237c4(&local_f0,*param_4);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8
FUN_1004f48dc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined8 local_160;
  void *local_158 [2];
  char local_141;
  void *local_140 [2];
  char local_129;
  undefined4 local_124;
  undefined8 local_120;
  void *pvStack_118;
  void *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  long local_e0;
  long lStack_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  void *pvStack_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pvStack_88 = (void *)0x0;
  local_90 = 0;
  local_78 = 0;
  local_80 = (void *)0x0;
  local_70 = 0;
  uStack_68 = 0x100;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  local_d0 = &local_90;
  lStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x200;
  local_98 = 0;
  FUN_100112618(&local_d0);
  FUN_1004f0f60(&local_d0,"gameId");
  FUN_1004f108c(&local_d0,param_2);
  FUN_1004f0f60(&local_d0,"username");
  FUN_1004f1038(&local_d0,param_5);
  FUN_1004f0f60(&local_d0,"password");
  FUN_1004f1038(&local_d0,param_6);
  FUN_1004f0f60(&local_d0,"credentials");
  local_e0 = *param_4;
  if (-1 < *(char *)((long)param_4 + 0x17)) {
    local_e0 = (long)param_4;
  }
  pvStack_118 = (void *)0x0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (void *)0x0;
  local_100 = 0;
  uStack_f8 = 0x100;
  local_f0 = 0;
  local_e8 = 0;
  lStack_d8 = local_e0;
  FUN_100523874(&local_120,&local_e0,&local_d0);
  puVar1 = local_d0;
  lStack_b0 = lStack_b0 + -0x10;
  puVar3 = (undefined1 *)local_d0[3];
  if ((undefined1 *)local_d0[4] <= puVar3 + 1) {
    FUN_1000f9034(local_d0,1);
    puVar3 = (undefined1 *)puVar1[3];
  }
  puVar1[3] = puVar3 + 1;
  *puVar3 = 0x7d;
  local_124 = FUN_1004f1744(param_1 + 0x2c98,param_7);
  FUN_1000ee4ec(local_140,"executeCommand");
  local_160 = FUN_100110e38(&local_90);
  FUN_1004f4790(local_158,param_3,"link_account",&local_160);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x38,local_140,local_158,0,&local_124,0x5a,0);
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  _free(local_110);
  if (pvStack_118 != (void *)0x0) {
    operator_delete(pvStack_118);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  _free(local_80);
  if (pvStack_88 != (void *)0x0) {
    operator_delete(pvStack_88);
  }
  return uVar2;
}




undefined8 FUN_1004f4b24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"estimatedWaitTime");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004f4c20(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 *local_48;
  ulong local_40;
  undefined4 local_38;
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_68 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_48 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_48 = param_2;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_60 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_38 = 0x100005;
  local_40 = (ulong)uVar1;
  local_c0 = local_c8;
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_48 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_48 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_38 = 0x100005;
  local_40 = (ulong)uVar1;
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  uVar3 = FUN_100523708(&local_e0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  if (local_c0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  return;
}




undefined8 FUN_1004f4d68(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getDailyPicker");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004f4e58(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  void *pvStack_a0;
  void *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  void *local_50;
  undefined8 local_48;
  long lStack_40;
  undefined8 *local_38;
  ulong local_30;
  undefined4 local_28;
  
  local_d0 = 0;
  uStack_c8 = 0;
  local_c0 = 0;
  pvStack_a0 = (void *)0x0;
  local_a8 = 0;
  uStack_90 = 0;
  local_98 = (void *)0x0;
  local_88 = 0;
  uStack_80 = 0x400;
  local_78 = 0;
  local_70 = 0;
  local_b8 = operator_new(0x28);
  *local_b8 = 0;
  local_b8[1] = 0x10000;
  local_b8[3] = 0;
  local_b8[4] = 0;
  local_b8[2] = 0;
  local_58 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_38 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_38 = param_2;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_48 = 0;
  lStack_40 = 0;
  local_50 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_28 = 0x100005;
  local_30 = (ulong)uVar1;
  local_b0 = local_b8;
  FUN_10034f3d4(&local_68,&local_38,local_b8);
  uVar3 = FUN_100523708(&local_d0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_40 < 0) {
    operator_delete(local_50);
  }
  if (local_b0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_98);
  if (pvStack_a0 != (void *)0x0) {
    operator_delete(pvStack_a0);
  }
  return;
}




undefined8 FUN_1004f4f5c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getTalentsData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004f5058(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getPlayerEsportsBadgeData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004f5154(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getPlayerSkinProgress");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004f5250(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"decraftSkinBlueprint");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004f5358(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"upgradeTalent");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004f5460(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_31 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_50,"purchaseDailyPick");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f5564(local_68,lVar1,param_2,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004f5564(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,char *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_58 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_58 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  local_58 = (undefined8 *)0x0;
  local_50 = 0;
  local_48 = 0x101;
  if (*param_4 != '\0') {
    local_48 = 0x102;
  }
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_1004f56e0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getHeroChestData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004f57dc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"collectHeroChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004f58d8(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_31 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"friendListAll");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f59d0(local_68,lVar1,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004f59d0(undefined8 param_1,undefined8 *param_2,char *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 *local_48;
  ulong local_40;
  undefined4 local_38;
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_68 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_48 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_48 = param_2;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_60 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_38 = 0x100005;
  local_40 = (ulong)uVar1;
  local_c0 = local_c8;
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_38 = 0x101;
  if (*param_3 != '\0') {
    local_38 = 0x102;
  }
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  uVar3 = FUN_100523708(&local_e0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  if (local_c0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  return;
}




undefined8 FUN_1004f5b0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  undefined4 local_4c;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  FUN_1004e357c(param_2,&local_48);
  local_4c = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_68,"friendRequestIssueByHandle");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_80,lVar1,&local_48);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_68,local_80,0,&local_4c,0x5a,0);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_38 < 0) {
    operator_delete(local_48);
  }
  return uVar2;
}




undefined8 FUN_1004f5c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"friendRequestConfirm");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f5d2c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"friendRequestReject");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f5e28(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"friendNotify");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f5f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"friendDelete");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f6020(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"friendAddFavorite");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f611c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"friendDeleteFavorite");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f6218(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_50,"friendReplyFromInGame");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f631c(local_68,lVar1,param_2,&local_34);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004f631c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_58 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_58 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  FUN_100523820(&local_f0,*param_4);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_1004f6478(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_2);
  uVar2 = FUN_1000ee4ec(local_50,"createQuintParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f6594(local_80,uVar2,param_2);
  FUN_1004f4c20(local_68,lVar1,local_80);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004f6594(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  void *pvVar11;
  char *local_120;
  undefined8 local_118;
  void *pvStack_110;
  void *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  char local_e0 [8];
  void *pvStack_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  void *local_b0 [2];
  char local_99;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  uStack_58 = 0;
  local_60 = (void *)0x0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  local_50 = 0;
  uStack_48 = 0x400;
  local_40 = 0;
  local_38 = 0;
  puVar6 = operator_new(0x28);
  *puVar6 = 0;
  puVar6[1] = 0x10000;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[2] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 3;
  bVar4 = *(byte *)(param_3 + 0x77);
  uVar8 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_3 + 0x68);
  if (-1 < (char)bVar4) {
    sVar1 = uVar8;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  local_80 = puVar6;
  local_78 = puVar6;
  if (sVar1 == sVar2) {
    pvVar11 = *(void **)(param_3 + 0x60);
    puVar3 = pvVar11;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_3 + 0x60);
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar10,sVar1), iVar5 == 0)) goto LAB_1004f66ac;
    }
    else {
      if (sVar1 == 0) goto LAB_1004f66ac;
      if ((uint)*pbVar10 == ((uint)pvVar11 & 0xff)) {
        pbVar9 = (byte *)(param_3 + 0x61);
        do {
          uVar8 = uVar8 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar8 == 0) goto LAB_1004f66ac;
          bVar4 = *pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  FUN_1004f84b4(&local_98,param_3 + 0x48,0x10);
LAB_1004f66ac:
  uVar8 = *(ulong *)(param_3 + 0x30);
  if (-1 < (char)*(byte *)(param_3 + 0x3f)) {
    uVar8 = (ulong)*(byte *)(param_3 + 0x3f);
  }
  if (uVar8 != 0) {
    std::string::string((string *)local_b0,(string *)(param_3 + 0x28));
    pvStack_110 = (void *)CONCAT44(pvStack_110._4_4_,0x100005);
    local_120 = "quintCode";
    local_118 = 9;
    FUN_10049aa58(&local_98,&local_120,local_b0,puVar6);
    if (local_99 < '\0') {
      operator_delete(local_b0[0]);
    }
  }
  pvStack_d8 = (void *)0x0;
  local_e0[0] = '\0';
  local_e0[1] = '\0';
  local_e0[2] = '\0';
  local_e0[3] = '\0';
  local_e0[4] = '\0';
  local_e0[5] = '\0';
  local_e0[6] = '\0';
  local_e0[7] = '\0';
  uStack_c8 = 0;
  local_d0 = (void *)0x0;
  local_c0 = 0;
  uStack_b8 = 0x100;
  local_120 = local_e0;
  pvStack_110 = (void *)0x0;
  local_118 = 0;
  uStack_100 = 0;
  local_108 = (void *)0x0;
  local_f8 = 0;
  uStack_f0 = 0x200;
  local_e8 = 0;
  FUN_100110914(&local_98,&local_120);
  uVar7 = FUN_100110e38(local_e0);
  FUN_1000ee4ec(param_1,uVar7);
  _free(local_108);
  if (pvStack_110 != (void *)0x0) {
    operator_delete(pvStack_110);
  }
  _free(local_d0);
  if (pvStack_d8 != (void *)0x0) {
    operator_delete(pvStack_d8);
  }
  if (local_78 != (undefined8 *)0x0) {
    pvVar11 = (void *)FUN_1000f7b54();
    operator_delete(pvVar11);
  }
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}




undefined8 FUN_1004f67bc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_2);
  uVar2 = FUN_1000ee4ec(local_50,"joinQuintParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f68d8(local_80,uVar2,param_2);
  FUN_1004f4c20(local_68,lVar1,local_80);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f6c5c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_2);
  uVar2 = FUN_1000ee4ec(local_50,"updateQuintPartyState");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f6d78(local_80,uVar2,param_2);
  FUN_1004f4c20(local_68,lVar1,local_80);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004f6d78(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  undefined8 *local_110;
  undefined8 local_108;
  void *pvStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  uStack_58 = 0;
  local_60 = (void *)0x0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  local_50 = 0;
  uStack_48 = 0x400;
  local_40 = 0;
  local_38 = 0;
  local_80 = operator_new(0x28);
  *local_80 = 0;
  local_80[1] = 0x10000;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[2] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 3;
  bVar4 = *(byte *)(param_3 + 0x67);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_3 + 0x58);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  local_78 = local_80;
  if (sVar1 == sVar2) {
    pvVar10 = *(void **)(param_3 + 0x50);
    puVar3 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_3 + 0x50);
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar9,sVar1), iVar5 == 0)) goto LAB_1004f6e8c;
    }
    else {
      if (sVar1 == 0) goto LAB_1004f6e8c;
      if ((uint)*pbVar9 == ((uint)pvVar10 & 0xff)) {
        pbVar8 = (byte *)(param_3 + 0x51);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_1004f6e8c;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar9);
      }
    }
  }
  FUN_1004f84b4(&local_98,param_3 + 0x38,0x10);
LAB_1004f6e8c:
  if (*(int *)(param_3 + 0x28) != 0) {
    FUN_1004f879c(&local_98,(int *)(param_3 + 0x28));
  }
  pvStack_c8 = (void *)0x0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  local_b0 = 0;
  uStack_a8 = 0x100;
  local_110 = &local_d0;
  pvStack_100 = (void *)0x0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = (void *)0x0;
  local_e8 = 0;
  uStack_e0 = 0x200;
  local_d8 = 0;
  FUN_100110914(&local_98,&local_110);
  uVar6 = FUN_100110e38(&local_d0);
  FUN_1000ee4ec(param_1,uVar6);
  _free(local_f8);
  if (pvStack_100 != (void *)0x0) {
    operator_delete(pvStack_100);
  }
  _free(local_c0);
  if (pvStack_c8 != (void *)0x0) {
    operator_delete(pvStack_c8);
  }
  if (local_78 != (undefined8 *)0x0) {
    pvVar10 = (void *)FUN_1000f7b54();
    operator_delete(pvVar10);
  }
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}




undefined8 FUN_1004f6f4c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_2);
  uVar2 = FUN_1000ee4ec(local_50,"createParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7068(local_80,uVar2,param_2);
  FUN_1004f4c20(local_68,lVar1,local_80);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004f7068(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  undefined8 *local_110;
  undefined8 local_108;
  void *pvStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  uStack_58 = 0;
  local_60 = (void *)0x0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  local_50 = 0;
  uStack_48 = 0x400;
  local_40 = 0;
  local_38 = 0;
  local_80 = operator_new(0x28);
  *local_80 = 0;
  local_80[1] = 0x10000;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[2] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 3;
  bVar4 = *(byte *)(param_3 + 0x5f);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_3 + 0x50);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  local_78 = local_80;
  if (sVar1 == sVar2) {
    pvVar10 = *(void **)(param_3 + 0x48);
    puVar3 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_3 + 0x48);
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar9,sVar1), iVar5 == 0)) goto LAB_1004f717c;
    }
    else {
      if (sVar1 == 0) goto LAB_1004f717c;
      if ((uint)*pbVar9 == ((uint)pvVar10 & 0xff)) {
        pbVar8 = (byte *)(param_3 + 0x49);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_1004f717c;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar9);
      }
    }
  }
  FUN_1004f84b4(&local_98,param_3 + 0x30,0x10);
LAB_1004f717c:
  pvStack_c8 = (void *)0x0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  local_b0 = 0;
  uStack_a8 = 0x100;
  local_110 = &local_d0;
  pvStack_100 = (void *)0x0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = (void *)0x0;
  local_e8 = 0;
  uStack_e0 = 0x200;
  local_d8 = 0;
  FUN_100110914(&local_98,&local_110);
  uVar6 = FUN_100110e38(&local_d0);
  FUN_1000ee4ec(param_1,uVar6);
  _free(local_f8);
  if (pvStack_100 != (void *)0x0) {
    operator_delete(pvStack_100);
  }
  _free(local_c0);
  if (pvStack_c8 != (void *)0x0) {
    operator_delete(pvStack_c8);
  }
  if (local_78 != (undefined8 *)0x0) {
    pvVar10 = (void *)FUN_1000f7b54();
    operator_delete(pvVar10);
  }
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}




undefined8 FUN_1004f7228(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"leaveParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f7318(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_90 [2];
  char local_79;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  uVar2 = FUN_1000ee4ec(local_60,"destroyQuintParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f6d78(local_90,uVar2,param_3);
  FUN_1004f7444(local_78,lVar1,param_2,local_90);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




void FUN_1004f7444(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_58 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_58 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_4 + 0x17);
  local_58 = (undefined8 *)*param_4;
  if (-1 < (char)bVar2) {
    local_58 = param_4;
  }
  uVar1 = (uint)param_4[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_1004f75cc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_2);
  FUN_1000ee4ec(local_50,"leaveQuintParty");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2 + 0x28);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f76cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_90 [2];
  char local_79;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  uVar2 = FUN_1000ee4ec(local_60,"partyInviteConfirm");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f77f8(local_90,uVar2,param_3);
  FUN_1004f7444(local_78,lVar1,param_2,local_90);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




void FUN_1004f77f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  size_t sVar1;
  size_t sVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  byte *pbVar8;
  byte *pbVar9;
  void *pvVar10;
  undefined8 *local_110;
  undefined8 local_108;
  void *pvStack_100;
  void *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 local_70;
  void *pvStack_68;
  void *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  uStack_58 = 0;
  local_60 = (void *)0x0;
  pvStack_68 = (void *)0x0;
  local_70 = 0;
  local_50 = 0;
  uStack_48 = 0x400;
  local_40 = 0;
  local_38 = 0;
  local_80 = operator_new(0x28);
  *local_80 = 0;
  local_80[1] = 0x10000;
  local_80[3] = 0;
  local_80[4] = 0;
  local_80[2] = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 3;
  bVar4 = *(byte *)(param_3 + 0x5f);
  uVar7 = (ulong)bVar4;
  sVar1 = *(size_t *)(param_3 + 0x50);
  if (-1 < (char)bVar4) {
    sVar1 = uVar7;
  }
  sVar2 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar2 = (ulong)DAT_101d911a8._7_1_;
  }
  local_78 = local_80;
  if (sVar1 == sVar2) {
    pvVar10 = *(void **)(param_3 + 0x48);
    puVar3 = pvVar10;
    if (-1 < (char)bVar4) {
      puVar3 = (undefined8 *)(param_3 + 0x48);
    }
    pbVar9 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar9 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar4 < '\0') {
      if ((sVar1 == 0) || (iVar5 = _memcmp(puVar3,pbVar9,sVar1), iVar5 == 0)) goto LAB_1004f790c;
    }
    else {
      if (sVar1 == 0) goto LAB_1004f790c;
      if ((uint)*pbVar9 == ((uint)pvVar10 & 0xff)) {
        pbVar8 = (byte *)(param_3 + 0x49);
        do {
          uVar7 = uVar7 - 1;
          pbVar9 = pbVar9 + 1;
          if (uVar7 == 0) goto LAB_1004f790c;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar9);
      }
    }
  }
  FUN_1004f84b4(&local_98,param_3 + 0x30,0x10);
LAB_1004f790c:
  pvStack_c8 = (void *)0x0;
  local_d0 = 0;
  uStack_b8 = 0;
  local_c0 = (void *)0x0;
  local_b0 = 0;
  uStack_a8 = 0x100;
  local_110 = &local_d0;
  pvStack_100 = (void *)0x0;
  local_108 = 0;
  uStack_f0 = 0;
  local_f8 = (void *)0x0;
  local_e8 = 0;
  uStack_e0 = 0x200;
  local_d8 = 0;
  FUN_100110914(&local_98,&local_110);
  uVar6 = FUN_100110e38(&local_d0);
  FUN_1000ee4ec(param_1,uVar6);
  _free(local_f8);
  if (pvStack_100 != (void *)0x0) {
    operator_delete(pvStack_100);
  }
  _free(local_c0);
  if (pvStack_c8 != (void *)0x0) {
    operator_delete(pvStack_c8);
  }
  if (local_78 != (undefined8 *)0x0) {
    pvVar10 = (void *)FUN_1000f7b54();
    operator_delete(pvVar10);
  }
  _free(local_60);
  if (pvStack_68 != (void *)0x0) {
    operator_delete(pvStack_68);
  }
  return;
}




undefined8 FUN_1004f79b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"partyInviteReject");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f7ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"partyInviteSend");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f7bb0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_60,"partyMemberKick");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_78,lVar1,param_2,param_3 + 0x28);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8
FUN_1004f7cbc(long param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_40 = param_5;
  uStack_3c = param_4;
  local_38 = param_3;
  uStack_34 = param_2;
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_6);
  FUN_1000ee4ec(local_60,"partyMemberMove");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7dc8(local_78,lVar1,&uStack_34,&local_38,&uStack_3c,&local_40);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




void FUN_1004f7dc8(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523820(&local_f0,*param_3);
  uVar3 = FUN_100523820(uVar3,*param_4);
  uVar3 = FUN_100523820(uVar3,*param_5);
  FUN_100523820(uVar3,*param_6);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8
FUN_1004f7f0c(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = param_2;
  local_48 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"partyChangeQueueMode");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f8020(local_78,lVar1,&local_44,param_5,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_48,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




void FUN_1004f8020(undefined8 param_1,undefined8 *param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  local_58 = (undefined8 *)(ulong)*param_3;
  local_48 = 0x3a06;
  local_50 = 0;
  if (-1 < (int)*param_3) {
    local_48 = 0x3e06;
  }
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_4 + 0x17);
  local_58 = (undefined8 *)*param_4;
  if (-1 < (char)bVar2) {
    local_58 = param_4;
  }
  uVar1 = (uint)param_4[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_5 + 0x17);
  local_58 = (undefined8 *)*param_5;
  if (-1 < (char)bVar2) {
    local_58 = param_5;
  }
  uVar1 = (uint)param_5[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_1004f81d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"partyBalanceTeams");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f82d4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"queryPartyInfo");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004f83c4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"queryPartyInvites");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004f84b4(long param_1,long param_2,uint param_3)

{
  string *psVar1;
  long lVar2;
  size_t sVar3;
  size_t sVar4;
  string *psVar5;
  byte bVar6;
  int iVar7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  void *local_f8 [2];
  char local_e1;
  void *local_e0 [2];
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  char *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char *local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 4;
  if (0 < (int)param_3) {
    uVar12 = 0;
    pbVar13 = (byte *)(param_2 + 0x19);
    do {
      lVar2 = param_2 + uVar12 * 0x40;
      psVar1 = (string *)(lVar2 + 0x18);
      bVar6 = *(byte *)(lVar2 + 0x2f);
      uVar8 = (ulong)bVar6;
      sVar3 = *(size_t *)(lVar2 + 0x20);
      if (-1 < (char)bVar6) {
        sVar3 = uVar8;
      }
      sVar4 = DAT_101d911a0;
      if (-1 < (char)DAT_101d911a8._7_1_) {
        sVar4 = (ulong)DAT_101d911a8._7_1_;
      }
      if (sVar3 == sVar4) {
        psVar5 = *(string **)psVar1;
        if (-1 < (char)bVar6) {
          psVar5 = psVar1;
        }
        pbVar9 = DAT_101d91198;
        if (-1 < (char)DAT_101d911a8._7_1_) {
          pbVar9 = (byte *)&DAT_101d91198;
        }
        if ((char)bVar6 < '\0') {
          if ((sVar3 == 0) || (iVar7 = _memcmp(psVar5,pbVar9,sVar3), iVar7 == 0)) break;
        }
        else {
          if (sVar3 == 0) break;
          pbVar10 = pbVar13;
          if ((uint)*pbVar9 == ((uint)*(string **)psVar1 & 0xff)) {
            do {
              uVar8 = uVar8 - 1;
              pbVar9 = pbVar9 + 1;
              if (uVar8 == 0) goto LAB_1004f8754;
              bVar6 = *pbVar10;
              pbVar10 = pbVar10 + 1;
            } while (bVar6 == *pbVar9);
          }
        }
      }
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 3;
      std::string::string((string *)local_e0,psVar1);
      local_70 = 0x100005;
      local_80 = "site";
      local_78 = 4;
      FUN_10049aa58(&local_c8,&local_80,local_e0,uVar11);
      if (local_c9 < '\0') {
        operator_delete(local_e0[0]);
      }
      psVar1 = (string *)(param_2 + uVar12 * 0x40);
      std::string::string((string *)local_f8,psVar1);
      local_70 = 0x100005;
      local_80 = "host";
      local_78 = 4;
      FUN_10049aa58(&local_c8,&local_80,local_f8,uVar11);
      if (local_e1 < '\0') {
        operator_delete(local_f8[0]);
      }
      local_88 = 0x100005;
      local_98 = "avg";
      uStack_90 = 3;
      local_80 = (char *)(double)*(float *)(psVar1 + 0x30);
      local_78 = 0;
      local_70 = 0x4206;
      FUN_10032b704(&local_c8,&local_98,&local_80,uVar11);
      local_88 = 0x100005;
      local_98 = "stdDev";
      uStack_90 = 6;
      local_80 = (char *)(double)*(float *)(psVar1 + 0x34);
      local_78 = 0;
      local_70 = 0x4206;
      FUN_10032b704(&local_c8,&local_98,&local_80,uVar11);
      local_88 = 0x100005;
      local_98 = "max";
      uStack_90 = 3;
      local_80 = (char *)(double)*(float *)(psVar1 + 0x38);
      local_78 = 0;
      local_70 = 0x4206;
      FUN_10032b704(&local_c8,&local_98,&local_80,uVar11);
      local_88 = 0x100005;
      local_98 = "current";
      uStack_90 = 7;
      local_80 = (char *)(double)*(float *)(psVar1 + 0x3c);
      local_78 = 0;
      local_70 = 0x4206;
      FUN_10032b704(&local_c8,&local_98,&local_80,uVar11);
      FUN_10034f3d4(&local_b0,&local_c8,uVar11);
      uVar12 = uVar12 + 1;
      pbVar13 = pbVar13 + 0x40;
    } while (uVar12 != param_3);
  }
LAB_1004f8754:
  local_70 = 0x100005;
  local_80 = "sites";
  local_78 = 5;
  FUN_10032b704(param_1,&local_80,&local_b0,uVar11);
  return;
}




void FUN_1004f879c(long param_1,uint *param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  void *local_f8 [2];
  char local_e1;
  void *local_e0 [2];
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  void *local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  char *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 4;
  local_b0 = (void *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  if (*param_2 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 3;
      FUN_1004e357c(*(long *)(param_2 + 2) + lVar2 + 0x18,&local_b0);
      std::string::string((string *)local_e0,(string *)(*(long *)(param_2 + 2) + lVar2));
      local_70 = 0x100005;
      local_80 = "playerId";
      uStack_78 = 8;
      FUN_10049aa58(&local_c8,&local_80,local_e0,uVar1);
      if (local_c9 < '\0') {
        operator_delete(local_e0[0]);
      }
      std::string::string((string *)local_f8,(string *)&local_b0);
      local_70 = 0x100005;
      local_80 = "handle";
      uStack_78 = 6;
      FUN_10049aa58(&local_c8,&local_80,local_f8,uVar1);
      if (local_e1 < '\0') {
        operator_delete(local_f8[0]);
      }
      FUN_1004f2a80(&local_c8,"userTeam",8,*(undefined4 *)(*(long *)(param_2 + 2) + lVar2 + 0x30),
                    uVar1);
      FUN_1004f2a80(&local_c8,"slot",4,*(undefined4 *)(*(long *)(param_2 + 2) + lVar2 + 0x34),uVar1)
      ;
      FUN_1004f2a80(&local_c8,"isCaptain",9,*(undefined1 *)(*(long *)(param_2 + 2) + lVar2 + 0x29),
                    uVar1);
      FUN_1004f89bc(&local_c8,"status",6,*(undefined4 *)(*(long *)(param_2 + 2) + lVar2 + 0x2c),
                    uVar1);
      FUN_10034f3d4(&local_98,&local_c8,uVar1);
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x88;
    } while (uVar3 < *param_2);
  }
  local_70 = 0x100005;
  local_80 = "partyMembers";
  uStack_78 = 0xc;
  FUN_10032b704(param_1,&local_80,&local_98,uVar1);
  if (local_a0 < 0) {
    operator_delete(local_b0);
  }
  return;
}




void FUN_1004f89bc(undefined8 param_1,undefined8 param_2,uint param_3,int param_4,undefined8 param_5
                  )

{
  undefined8 local_40;
  ulong local_38;
  undefined4 local_30;
  long local_28 [2];
  undefined4 local_18;
  
  local_30 = 0x100005;
  local_38 = (ulong)param_3;
  local_18 = 0x1606;
  local_28[0] = (long)param_4;
  local_28[1] = 0;
  if (-1 < param_4) {
    local_18 = 0x3e06;
  }
  local_40 = param_2;
  FUN_10032b704(param_1,&local_40,local_28,param_5);
  return;
}




void FUN_1004f92f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,string *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char **local_1a0;
  undefined8 local_198;
  void *pvStack_190;
  void *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  char *local_160;
  void *pvStack_158;
  void *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  void *local_128 [2];
  char local_111;
  void *local_110 [2];
  char local_f9;
  void *local_f8 [2];
  char local_e1;
  void *local_e0 [2];
  char local_c9;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  void *pvStack_98;
  void *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined8 local_68;
  
  uStack_88 = 0;
  local_90 = (void *)0x0;
  pvStack_98 = (void *)0x0;
  local_a0 = 0;
  local_80 = 0;
  uStack_78 = 0x400;
  local_70 = 0;
  local_68 = 0;
  puVar3 = operator_new(0x28);
  *puVar3 = 0;
  puVar3[1] = 0x10000;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[2] = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 3;
  uVar2 = *(uint *)(param_4 + 0x68);
  if (uVar2 < 3) {
    uVar6 = *(undefined4 *)(&DAT_10115c2b8 + (long)(int)uVar2 * 4);
    uVar7 = *(undefined4 *)(&DAT_10115c2c4 + (long)(int)uVar2 * 4);
  }
  else {
    uVar6 = 0;
    uVar7 = 200;
  }
  iVar1 = *(int *)(param_4 + 100) * 3;
  if (*(int *)(param_4 + 100) < 0) {
    iVar1 = -2;
  }
  local_b0 = puVar3;
  local_a8 = puVar3;
  if (*(int *)(param_4 + 0x60) != -1) {
    FUN_1004f2a80(&local_c8,"primeTimeUtcHour",0x10,*(int *)(param_4 + 0x60),puVar3);
  }
  FUN_1004f2a80(&local_c8,"minimumSkillTier",0x10,iVar1,puVar3);
  FUN_1004f2a80(&local_c8,"minNumMembers",0xd,uVar6,puVar3);
  FUN_1004f2a80(&local_c8,"maxNumMembers",0xd,uVar7,puVar3);
  std::string::string((string *)local_e0,param_4 + 0x48);
  pvStack_190 = (void *)CONCAT44(pvStack_190._4_4_,0x100005);
  local_1a0 = (char **)0x1013da3b2;
  local_198 = 9;
  FUN_10049aa58(&local_c8,&local_1a0,local_e0,puVar3);
  if (local_c9 < '\0') {
    operator_delete(local_e0[0]);
  }
  std::string::string((string *)local_f8,param_4 + 0x30);
  pvStack_190 = (void *)CONCAT44(pvStack_190._4_4_,0x100005);
  local_1a0 = (char **)0x10141b59a;
  local_198 = 0x11;
  FUN_10049aa58(&local_c8,&local_1a0,local_f8,puVar3);
  if (local_e1 < '\0') {
    operator_delete(local_f8[0]);
  }
  local_150 = (void *)CONCAT44(local_150._4_4_,0x100005);
  local_160 = "guildInviteOnly";
  pvStack_158 = (void *)0xf;
  local_1a0 = (char **)0x0;
  local_198 = 0;
  uVar6 = 0x101;
  if (param_4[0x6c] != (string)0x0) {
    uVar6 = 0x102;
  }
  pvStack_190._0_4_ = uVar6;
  FUN_10032b704(&local_c8,&local_160,&local_1a0,puVar3);
  std::string::string((string *)local_110,param_4);
  pvStack_190 = (void *)CONCAT44(pvStack_190._4_4_,0x100005);
  local_1a0 = (char **)0x1013f3ff0;
  local_198 = 4;
  FUN_10049aa58(&local_c8,&local_1a0,local_110,puVar3);
  if (local_f9 < '\0') {
    operator_delete(local_110[0]);
  }
  std::string::string((string *)local_128,param_4 + 0x18);
  pvStack_190 = (void *)CONCAT44(pvStack_190._4_4_,0x100005);
  local_1a0 = (char **)0x1013dd176;
  local_198 = 3;
  FUN_10049aa58(&local_c8,&local_1a0,local_128,puVar3);
  if (local_111 < '\0') {
    operator_delete(local_128[0]);
  }
  FUN_1004f2a80(&local_c8,"page",4,param_3,puVar3);
  pvStack_158 = (void *)0x0;
  local_160 = (char *)0x0;
  uStack_148 = 0;
  local_150 = (void *)0x0;
  local_140 = 0;
  uStack_138 = 0x100;
  local_1a0 = &local_160;
  pvStack_190 = (void *)0x0;
  local_198 = 0;
  uStack_180 = 0;
  local_188 = (void *)0x0;
  local_178 = 0;
  uStack_170 = 0x200;
  local_168 = 0;
  FUN_100110914(&local_c8,&local_1a0);
  uVar4 = FUN_100110e38(&local_160);
  FUN_1000ee4ec(param_1,uVar4);
  _free(local_188);
  if (pvStack_190 != (void *)0x0) {
    operator_delete(pvStack_190);
  }
  _free(local_150);
  if (pvStack_158 != (void *)0x0) {
    operator_delete(pvStack_158);
  }
  if (local_a8 != (undefined8 *)0x0) {
    pvVar5 = (void *)FUN_1000f7b54();
    operator_delete(pvVar5);
  }
  _free(local_90);
  if (pvStack_98 != (void *)0x0) {
    operator_delete(pvStack_98);
  }
  return;
}




undefined8 FUN_1004f9a98(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_198 [2];
  char local_181;
  void *local_180 [2];
  char local_169;
  void *local_168 [2];
  char local_151;
  undefined4 local_14c;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) != 0) goto LAB_1004f9ae4;
  }
  else if (*(char *)(param_1 + 0x7f) != '\0') {
LAB_1004f9ae4:
    if (*(int *)(param_1 + 0x2b08) != 0) {
      local_14c = FUN_1004f1744(param_1 + 0x2c98,param_2);
      uVar2 = (ulong)DAT_101867440;
      FUN_1004d2698(auStack_148,"%d");
      uVar3 = FUN_1000ee4ec(local_168,"partyLobbyEnter");
      lVar1 = param_1 + 0x2bb8;
      if (*(char *)(param_1 + 0x2c18) != '\0') {
        lVar1 = param_1 + 0x2c20;
      }
      FUN_1004f8a14(local_198,uVar3,param_2);
      FUN_1004f9c18(local_180,lVar1,auStack_148,local_198);
      uVar3 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_168,local_180,0,&local_14c,0x5a,0,
                            uVar2);
      if (local_169 < '\0') {
        operator_delete(local_180[0]);
      }
      if (local_181 < '\0') {
        operator_delete(local_198[0]);
      }
      if (local_151 < '\0') {
        operator_delete(local_168[0]);
      }
      goto LAB_1004f9be0;
    }
  }
  uVar3 = 0xfffffff9;
  DAT_1018675c8 = 0xfffffff9;
LAB_1004f9be0:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}




void FUN_1004f9c18(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_3);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_3;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar1 = *(byte *)((long)param_4 + 0x17);
  local_58 = (undefined8 *)*param_4;
  if (-1 < (char)bVar1) {
    local_58 = param_4;
  }
  uVar2 = (uint)param_4[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_1004f9d90(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_198 [2];
  char local_181;
  void *local_180 [2];
  char local_169;
  void *local_168 [2];
  char local_151;
  undefined4 local_14c;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) != 0) goto LAB_1004f9ddc;
  }
  else if (*(char *)(param_1 + 0x7f) != '\0') {
LAB_1004f9ddc:
    if (*(int *)(param_1 + 0x2b08) != 0) {
      local_14c = FUN_1004f1744(param_1 + 0x2c98,param_2);
      uVar2 = (ulong)DAT_101867440;
      FUN_1004d2698(auStack_148,"%d");
      uVar3 = FUN_1000ee4ec(local_168,"quintPartyLobbyEnter");
      lVar1 = param_1 + 0x2bb8;
      if (*(char *)(param_1 + 0x2c18) != '\0') {
        lVar1 = param_1 + 0x2c20;
      }
      FUN_1004f8dcc(local_198,uVar3,param_2);
      FUN_1004f9c18(local_180,lVar1,auStack_148,local_198);
      uVar3 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_168,local_180,0,&local_14c,0x5a,0,
                            uVar2);
      if (local_169 < '\0') {
        operator_delete(local_180[0]);
      }
      if (local_181 < '\0') {
        operator_delete(local_198[0]);
      }
      if (local_151 < '\0') {
        operator_delete(local_168[0]);
      }
      goto LAB_1004f9ed8;
    }
  }
  uVar3 = 0xfffffff9;
  DAT_1018675c8 = 0xfffffff9;
LAB_1004f9ed8:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}




undefined8 FUN_1004f9f10(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"partyLobbyExit");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8
FUN_1004fa000(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 local_8c;
  void *local_88 [2];
  char local_71;
  void *local_70 [2];
  char local_59;
  undefined4 local_54;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_54 = FUN_1004f1744(param_1 + 0x2c98,param_7);
  FUN_1000ee4ec(local_70,"createGuild");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  local_8c = param_6;
  FUN_1004fa130(local_88,lVar1,param_2,param_3,param_4,param_5,&local_8c);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_70,local_88,0,&local_54,0x5a,0);
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  return uVar2;
}




void FUN_1004fa130(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined4 *param_7)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  void *pvStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  void *local_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 *local_78;
  ulong local_70;
  undefined4 local_68;
  
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  pvStack_e0 = (void *)0x0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  local_c8 = 0;
  uStack_c0 = 0x400;
  local_b8 = 0;
  local_b0 = 0;
  local_f8 = operator_new(0x28);
  *local_f8 = 0;
  local_f8[1] = 0x10000;
  local_f8[3] = 0;
  local_f8[4] = 0;
  local_f8[2] = 0;
  local_98 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_78 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_78 = param_2;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_90 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  local_f0 = local_f8;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_78 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_78 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_4 + 0x17);
  local_78 = (undefined8 *)*param_4;
  if (-1 < (char)bVar2) {
    local_78 = param_4;
  }
  uVar1 = (uint)param_4[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_5 + 0x17);
  local_78 = (undefined8 *)*param_5;
  if (-1 < (char)bVar2) {
    local_78 = param_5;
  }
  uVar1 = (uint)param_5[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_6 + 0x17);
  local_78 = (undefined8 *)*param_6;
  if (-1 < (char)bVar2) {
    local_78 = param_6;
  }
  uVar1 = (uint)param_6[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  FUN_100523820(&local_110,*param_7);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_80 < 0) {
    operator_delete(local_90);
  }
  if (local_f0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_d8);
  if (pvStack_e0 != (void *)0x0) {
    operator_delete(pvStack_e0);
  }
  return;
}




undefined8 FUN_1004fa344(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"leaveGuild");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fa434(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"guildInviteConfirm");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fa530(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"guildInviteReject");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fa62c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"guildInviteSend");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fa728(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"guildMemberKick");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fa824(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"joinGuild");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fa920(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"changeGuildMotto");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_78,lVar1,param_2,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8
FUN_1004faa2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_5);
  FUN_1000ee4ec(local_60,"guildChangeName");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fab40(local_78,lVar1,param_2,param_3,param_4);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




void FUN_1004fab40(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_58 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_58 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_4 + 0x17);
  local_58 = (undefined8 *)*param_4;
  if (-1 < (char)bVar2) {
    local_58 = param_4;
  }
  uVar1 = (uint)param_4[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_5 + 0x17);
  local_58 = (undefined8 *)*param_5;
  if (-1 < (char)bVar2) {
    local_58 = param_5;
  }
  uVar1 = (uint)param_5[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8
FUN_1004fad00(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_5);
  FUN_1000ee4ec(local_60,"guildChangeTag");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fab40(local_78,lVar1,param_2,param_3,param_4);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fae14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"guildChangeOfficerStatus");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_78,lVar1,param_2,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8 FUN_1004faf20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"guildTransferCaptain");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_78,lVar1,param_2,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fb02c(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_50,"changeGuildMembership");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fb130(local_68,lVar1,param_2,&local_34);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004fb130(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_58 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_58 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar1;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  FUN_100523820(&local_f0,*param_4);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_1004fb28c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  void *local_90 [2];
  char local_79;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  auVar3 = FUN_1000ee4ec(local_60,"guildChangeSettings");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f9650(local_90,auVar3._0_8_,auVar3._8_8_,param_3,param_2);
  FUN_1004f4c20(local_78,lVar1,local_90);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fb3b8(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_31 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_50,"queryGuildInfo");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f5564(local_68,lVar1,param_2,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fb4bc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"queryGuildInvites");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fb5ac(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"guildGetData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fb69c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"guildRedeemChest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fb78c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"guildCollectJoinBonus");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fb87c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_90 [2];
  char local_79;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  uVar2 = FUN_1000ee4ec(local_60,"guildSearch");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f92f4(local_90,uVar2,param_2,param_3);
  FUN_1004f4c20(local_78,lVar1,local_90);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8
FUN_1004fb9a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_5);
  FUN_1000ee4ec(local_60,"createTeam");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fab40(local_78,lVar1,param_2,param_3,param_4);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fbabc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"leaveTeam");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fbbac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"teamInviteConfirm");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fbca8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"teamInviteReject");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fbda4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"teamInviteSend");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fbea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"teamMemberKick");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fbf9c(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_31 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_50,"queryTeamInfo");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f5564(local_68,lVar1,param_2,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fc0a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"queryTeamInvites");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fc190(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"storeRequestPurchaseSKU");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_78,lVar1,param_2,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8
FUN_1004fc29c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  long lVar1;
  undefined8 uVar2;
  void *local_b0 [2];
  char local_99;
  void *local_98 [2];
  char local_81;
  void *local_80;
  undefined8 uStack_78;
  long local_70;
  undefined4 local_64;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_64 = FUN_1004f1744(param_1 + 0x2c98,param_9);
  local_80 = (void *)0x0;
  uStack_78 = 0;
  local_70 = 0;
  FUN_1004f0c2c(param_3,param_4,param_5,param_6,param_7,param_8,&local_80);
  FUN_1000ee4ec(local_98,"storePrepareIAP");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_b0,lVar1,param_2,&local_80);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_98,local_b0,0,&local_64,0x5a,0);
  if (local_99 < '\0') {
    operator_delete(local_b0[0]);
  }
  if (local_81 < '\0') {
    operator_delete(local_98[0]);
  }
  if (local_70 < 0) {
    operator_delete(local_80);
  }
  return uVar2;
}




undefined8 FUN_1004fc404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"storeProcessIAP");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_78,lVar1,param_3,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fc510(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_90 [2];
  char local_79;
  void *local_78 [2];
  char local_61;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_1004e357c(param_2,&local_60);
  FUN_1000ee4ec(local_78,"storeRecordPendingGift");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_90,lVar1,param_3,&local_60);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_78,local_90,0,&local_44,0x5a,0);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  return uVar2;
}




undefined8 FUN_1004fc640(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_90 [2];
  char local_79;
  void *local_78 [2];
  char local_61;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_1004e357c(param_2,&local_60);
  FUN_1000ee4ec(local_78,"storeCancelPendingGift");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_90,lVar1,param_3,&local_60);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_78,local_90,0,&local_44,0x5a,0);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  return uVar2;
}




undefined8 FUN_1004fc770(long param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = param_3;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_50,"achievementStoreScore");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f631c(local_68,lVar1,param_2,&local_34);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fc874(long param_1,string *param_2,string *param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  undefined4 local_44;
  
  std::string::operator=((string *)(param_4 + 0x48),param_2);
  std::string::operator=((string *)(param_4 + 0x60),param_3);
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  FUN_1000ee4ec(local_60,"offersRedeemSku");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_78,lVar1,param_2,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,&local_44,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fc998(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"offersGetData");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fca88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"achievementGetScore");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fcb84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"updatePlatformPlayerConfig");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fcc80(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = param_2;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"presenceBroadcast");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fcd7c(local_68,lVar1,&local_34);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004fcd7c(undefined8 param_1,undefined8 *param_2,uint *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 *local_48;
  ulong local_40;
  undefined4 local_38;
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_68 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_48 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_48 = param_2;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_60 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_38 = 0x100005;
  local_40 = (ulong)uVar1;
  local_c0 = local_c8;
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  local_48 = (undefined8 *)(ulong)*param_3;
  local_38 = 0x3a06;
  local_40 = 0;
  if (-1 < (int)*param_3) {
    local_38 = 0x3e06;
  }
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  uVar3 = FUN_100523708(&local_e0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  if (local_c0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  return;
}




undefined8 FUN_1004fcebc(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_31 = param_2;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"presenceSetReceiveBroadcast");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f59d0(local_68,lVar1,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fcfb8(long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  long local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_194;
  void *local_190 [2];
  char local_179;
  void *local_178 [2];
  char local_161;
  undefined8 local_160;
  undefined4 local_154;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  local_150 = param_4;
  local_154 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1004f1904(param_1 + 0x2a70);
  FUN_1004d2698(auStack_148,"%d");
  local_160 = FUN_1004e2fdc(&DAT_101d911b0);
  if ((char)*(byte *)(param_1 + 0x67) < '\0') {
    uVar3 = *(ulong *)(param_1 + 0x58);
  }
  else {
    uVar3 = (ulong)*(byte *)(param_1 + 0x67);
  }
  lVar1 = param_1 + 0x38;
  if (uVar3 != 0) {
    lVar1 = param_1 + 0x50;
  }
  FUN_1000ee4ec(local_178,"startSessionForPlayer");
  local_194 = FUN_1004e2f38(&DAT_101d911b0);
  uStack_1a0 = FUN_1004e2f88(&DAT_101d911b0);
  local_1a8 = *param_2;
  if (-1 < *(char *)((long)param_2 + 0x17)) {
    local_1a8 = (long)param_2;
  }
  local_1b0 = FUN_1004e2f48(&DAT_101d911b0);
  local_1b8 = FUN_1004e2f70(&DAT_101d911b0);
  local_1c0 = FUN_1004e2f80(&DAT_101d911b0);
  FUN_1004fd190(local_190,param_1 + 0x2bb8,auStack_148,&local_194,&local_160,"production",&local_150
                ,&uStack_1a0,&local_1a8,&local_1b0,&local_1b8,&local_1c0);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,lVar1,local_178,local_190,0,&local_154,0x14,0);
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1004fd190(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined8 *param_9,undefined8 *param_10,undefined8 *param_11,undefined8 *param_12
                  )

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  void *pvStack_e8;
  void *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  void *local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 *local_80;
  ulong local_78;
  undefined4 local_70;
  
  local_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  pvStack_e8 = (void *)0x0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = (void *)0x0;
  local_d0 = 0;
  uStack_c8 = 0x400;
  local_c0 = 0;
  local_b8 = 0;
  local_100 = operator_new(0x28);
  *local_100 = 0;
  local_100[1] = 0x10000;
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[2] = 0;
  local_a0 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_80 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_80 = param_2;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_90 = 0;
  lStack_88 = 0;
  local_98 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_f8 = local_100;
  FUN_10034f3d4(&local_b0,&local_80,local_100);
  uVar2 = FUN_1004d2524(param_3);
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_80 = param_3;
  FUN_10034f3d4(&local_b0,&local_80,local_100);
  uVar3 = FUN_100523820(&local_118,*param_4);
  lVar4 = FUN_1005237c4(uVar3,*param_5);
  uVar2 = FUN_1004d2524(param_6);
  local_70 = 0x100005;
  local_78 = (ulong)uVar2;
  local_80 = param_6;
  FUN_10034f3d4(lVar4 + 0x68,&local_80,*(undefined8 *)(lVar4 + 0x18));
  uVar3 = FUN_1005237c4(lVar4,*param_7);
  uVar3 = FUN_1005237c4(uVar3,*param_8);
  uVar3 = FUN_1005237c4(uVar3,*param_9);
  uVar3 = FUN_1005237c4(uVar3,*param_10);
  uVar3 = FUN_1005237c4(uVar3,*param_11);
  FUN_1005237c4(uVar3,*param_12);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_88 < 0) {
    operator_delete(local_98);
  }
  if (local_f8 != (undefined8 *)0x0) {
    pvVar5 = (void *)FUN_1000f7b54();
    operator_delete(pvVar5);
  }
  _free(local_e0);
  if (pvStack_e8 != (void *)0x0) {
    operator_delete(pvStack_e8);
  }
  return;
}




undefined8 FUN_1004fd37c(long param_1)

{
  string *psVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if (*(long **)(param_1 + 0x2a48) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x2a48) + 0x38))();
    *(undefined1 *)(param_1 + 0x2a62) = 0;
    *(undefined4 *)(param_1 + 0x2a54) = 0;
    if (*(long **)(param_1 + 0x2a48) != (long *)0x0) {
      (**(code **)(**(long **)(param_1 + 0x2a48) + 8))();
    }
    *(undefined8 *)(param_1 + 0x2a48) = 0;
  }
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) != 0) goto LAB_1004fd3e0;
  }
  else if (*(char *)(param_1 + 0x7f) != '\0') {
LAB_1004fd3e0:
    if (*(int *)(param_1 + 0x2b08) != 0) {
      FUN_1004f1904(param_1 + 0x2a70);
      FUN_1000ee4ec(local_48,"endSession");
      psVar1 = (string *)(param_1 + 0x2bb8);
      if (*(char *)(param_1 + 0x2c18) != '\0') {
        psVar1 = (string *)(param_1 + 0x2c20);
      }
      FUN_1004f4e58(local_60,psVar1);
      uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,1,0,2,0);
      if (local_49 < '\0') {
        operator_delete(local_60[0]);
      }
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
      FUN_1004f1dac(param_1 + 0x10);
      FUN_1000ee4ec(local_48,"");
      std::string::operator=((string *)(param_1 + 0x2c20),(string *)local_48);
      if (local_31 < '\0') {
        operator_delete(local_48[0]);
      }
      *(undefined4 *)(param_1 + 0x2b08) = 0;
      return uVar2;
    }
    uVar2 = 1;
    goto LAB_1004fd4d0;
  }
  uVar2 = 0xfffffff9;
LAB_1004fd4d0:
  DAT_1018675c8 = (int)uVar2;
  return uVar2;
}




undefined8 FUN_1004fd4ec(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  void *local_198 [2];
  char local_181;
  void *local_180 [2];
  char local_169;
  void *local_168 [2];
  char local_151;
  undefined4 local_14c;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) != 0) goto LAB_1004fd538;
  }
  else if (*(char *)(param_1 + 0x7f) != '\0') {
LAB_1004fd538:
    if (*(int *)(param_1 + 0x2b08) != 0) {
      local_14c = FUN_1004f1744(param_1 + 0x2c98,param_2);
      uVar2 = (ulong)DAT_101867440;
      FUN_1004d2698(auStack_148,"%d");
      uVar3 = FUN_1000ee4ec(local_168,"joinLobby");
      lVar1 = param_1 + 0x2bb8;
      if (*(char *)(param_1 + 0x2c18) != '\0') {
        lVar1 = param_1 + 0x2c20;
      }
      FUN_1004f8a14(local_198,uVar3,param_2);
      FUN_1004fd66c(local_180,lVar1,local_198,auStack_148);
      uVar3 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_168,local_180,0,&local_14c,0x5a,0,
                            uVar2);
      if (local_169 < '\0') {
        operator_delete(local_180[0]);
      }
      if (local_181 < '\0') {
        operator_delete(local_198[0]);
      }
      if (local_151 < '\0') {
        operator_delete(local_168[0]);
      }
      goto LAB_1004fd634;
    }
  }
  uVar3 = 0xfffffff9;
  DAT_1018675c8 = 0xfffffff9;
LAB_1004fd634:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}




void FUN_1004fd66c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  void *pvStack_c0;
  void *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  void *local_70;
  undefined8 local_68;
  long lStack_60;
  undefined8 *local_58;
  ulong local_50;
  undefined4 local_48;
  
  local_f0 = 0;
  uStack_e8 = 0;
  local_e0 = 0;
  pvStack_c0 = (void *)0x0;
  local_c8 = 0;
  uStack_b0 = 0;
  local_b8 = (void *)0x0;
  local_a8 = 0;
  uStack_a0 = 0x400;
  local_98 = 0;
  local_90 = 0;
  local_d8 = operator_new(0x28);
  *local_d8 = 0;
  local_d8[1] = 0x10000;
  local_d8[3] = 0;
  local_d8[4] = 0;
  local_d8[2] = 0;
  local_78 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_58 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_58 = param_2;
  }
  local_88 = 0;
  uStack_80 = 0;
  local_68 = 0;
  lStack_60 = 0;
  local_70 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_d0 = local_d8;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  bVar1 = *(byte *)((long)param_3 + 0x17);
  local_58 = (undefined8 *)*param_3;
  if (-1 < (char)bVar1) {
    local_58 = param_3;
  }
  uVar2 = (uint)param_3[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar2 = FUN_1004d2524(param_4);
  local_48 = 0x100005;
  local_50 = (ulong)uVar2;
  local_58 = param_4;
  FUN_10034f3d4(&local_88,&local_58,local_d8);
  uVar3 = FUN_100523708(&local_f0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_60 < 0) {
    operator_delete(local_70);
  }
  if (local_d0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_b8);
  if (pvStack_c0 != (void *)0x0) {
    operator_delete(pvStack_c0);
  }
  return;
}




undefined8 FUN_1004fd7e4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"exitLobby");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004fd8e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"acceptMatch");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,2,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004fd9e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"rejectMatch");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,2,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004fdaf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"notifyExitPostMatch");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fdbe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *local_180 [2];
  char local_169;
  void *local_168 [2];
  char local_151;
  undefined4 local_14c;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_1004fdcf0;
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
LAB_1004fdcf0:
    uVar2 = 0xfffffff9;
    DAT_1018675c8 = 0xfffffff9;
    goto LAB_1004fdcfc;
  }
  local_14c = FUN_1004f1744(param_1 + 0x2c98,param_3);
  uVar3 = (ulong)DAT_101867440;
  FUN_1004d2698(auStack_148,"%d");
  FUN_1000ee4ec(local_168,"spectateFriend");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fd66c(local_180,lVar1,param_2,auStack_148);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_168,local_180,0,&local_14c,0x5a,0,uVar3)
  ;
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
LAB_1004fdcfc:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1004fdd34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  void *local_180 [2];
  char local_169;
  void *local_168 [2];
  char local_151;
  undefined4 local_14c;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) goto LAB_1004fde44;
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
LAB_1004fde44:
    uVar2 = 0xfffffff9;
    DAT_1018675c8 = 0xfffffff9;
    goto LAB_1004fde50;
  }
  local_14c = FUN_1004f1744(param_1 + 0x2c98,param_3);
  uVar3 = (ulong)DAT_101867440;
  FUN_1004d2698(auStack_148,"%d");
  FUN_1000ee4ec(local_168,"askInGameFriendToPlay");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fd66c(local_180,lVar1,param_2,auStack_148);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_168,local_180,0,&local_14c,0x5a,0,uVar3)
  ;
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
LAB_1004fde50:
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1004fde88(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  FUN_1000ee4ec(local_48,"dismissReliableMessage");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_60,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,0,0,0x5a,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fdf70(long param_1,undefined1 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined1 local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_31 = param_2;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"setPresenceInvisibility");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f59d0(local_68,lVar1,&local_31);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fe06c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"queryPendingMatch");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004fe168(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"queryPlayerInboxMessages");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_1004fe264(long param_1)

{
  undefined4 local_24;
  
  if (*(char *)(param_1 + 0x2a61) == '\0') {
    if (*(char *)(param_1 + 0x97) < '\0') {
      if (*(long *)(param_1 + 0x88) != 0) goto LAB_1004fe2bc;
    }
    else if (*(char *)(param_1 + 0x97) != '\0') {
LAB_1004fe2bc:
      if ((*(int *)(param_1 + 0x2b08) != 0) &&
         (local_24 = FUN_1004f1744(param_1 + 0x2c98), *(int *)(param_1 + 0x2b08) != 0)) {
        FUN_1004f2000(param_1 + 0x10,param_1 + 0x2af0,param_1 + 0x2ad8,&local_24,0x5a);
        return;
      }
      DAT_1018675c8 = 0xfffffff9;
      return;
    }
  }
  DAT_1018675c8 = 0xffffffe6;
  return;
}




bool FUN_1004fe30c(long param_1)

{
  if (*(char *)(param_1 + 0x2a62) != '\0') {
    return *(char *)(param_1 + 0x2a63) != '\0';
  }
  return false;
}




undefined4 FUN_1004fe334(long param_1)

{
  *(undefined1 *)(param_1 + 0x2d00) = 1;
  return DAT_1018675c8;
}




undefined8 FUN_1004fe34c(long param_1,string *param_2)

{
  string *psVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  string sVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  string *psVar9;
  byte *pbVar10;
  string *psVar11;
  ulong uVar12;
  
  psVar1 = (string *)(param_1 + 0x2bb8);
  bVar6 = *(byte *)(param_1 + 0x2bcf);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x2bc0);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    psVar9 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar9 = psVar1;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if ((sVar2 == 0) || (iVar7 = _memcmp(psVar9,pbVar10,sVar2), iVar7 == 0)) goto LAB_1004fe48c;
    }
    else {
      if (sVar2 == 0) {
LAB_1004fe48c:
        std::string::operator=(param_2,(string *)&DAT_101d91198);
        return 0;
      }
      if ((uint)*pbVar10 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x2bb9);
        do {
          uVar12 = uVar12 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar12 == 0) goto LAB_1004fe48c;
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  sVar5 = param_2[0x17];
  uVar12 = (ulong)(byte)sVar5;
  sVar3 = *(size_t *)(param_2 + 8);
  if (-1 < (char)sVar5) {
    sVar3 = uVar12;
  }
  if (sVar3 == sVar2) {
    psVar9 = *(string **)param_2;
    if (-1 < (char)sVar5) {
      psVar9 = param_2;
    }
    psVar11 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar11 = psVar1;
    }
    if ((char)sVar5 < '\0') {
      if (sVar2 == 0) {
        return 1;
      }
      iVar7 = _memcmp(psVar9,psVar11,sVar2);
      if (iVar7 == 0) {
        return 1;
      }
    }
    else {
      if (sVar2 == 0) {
        return 1;
      }
      psVar9 = param_2;
      if ((uint)(byte)*psVar11 == ((uint)*(string **)param_2 & 0xff)) {
        do {
          uVar12 = uVar12 - 1;
          psVar11 = psVar11 + 1;
          psVar9 = psVar9 + 1;
          if (uVar12 == 0) {
            return 1;
          }
        } while (*psVar9 == *psVar11);
      }
    }
  }
  std::string::operator=(param_2,psVar1);
  return 1;
}




bool FUN_1004fe4d4(long param_1,string *param_2)

{
  string *psVar1;
  size_t sVar2;
  size_t sVar3;
  string sVar4;
  byte bVar5;
  ulong uVar6;
  int iVar7;
  ulong uVar8;
  string *psVar9;
  string *psVar10;
  
  bVar5 = *(byte *)(param_1 + 0x2c37);
  uVar6 = (ulong)bVar5;
  if ((char)bVar5 < '\0') {
    uVar6 = *(ulong *)(param_1 + 0x2c28);
  }
  if (uVar6 == 0) {
    if ((char)param_2[0x17] < '\0') {
      **(undefined1 **)param_2 = 0;
      *(undefined8 *)(param_2 + 8) = 0;
    }
    else {
      *param_2 = (string)0x0;
      param_2[0x17] = (string)0x0;
    }
    goto LAB_1004fe5d4;
  }
  psVar1 = (string *)(param_1 + 0x2c20);
  sVar4 = param_2[0x17];
  uVar8 = (ulong)(byte)sVar4;
  sVar2 = *(size_t *)(param_2 + 8);
  if (-1 < (char)sVar4) {
    sVar2 = uVar8;
  }
  sVar3 = *(size_t *)(param_1 + 0x2c28);
  if (-1 < (char)bVar5) {
    sVar3 = (ulong)bVar5;
  }
  if (sVar2 == sVar3) {
    psVar9 = *(string **)param_2;
    if (-1 < (char)sVar4) {
      psVar9 = param_2;
    }
    psVar10 = *(string **)psVar1;
    if (-1 < (char)bVar5) {
      psVar10 = psVar1;
    }
    if ((char)sVar4 < '\0') {
      if ((sVar2 == 0) || (iVar7 = _memcmp(psVar9,psVar10,sVar2), iVar7 == 0)) goto LAB_1004fe5d4;
    }
    else {
      if (sVar2 == 0) goto LAB_1004fe5d4;
      psVar9 = param_2;
      if ((uint)(byte)*psVar10 == ((uint)*(string **)param_2 & 0xff)) {
        do {
          uVar8 = uVar8 - 1;
          psVar10 = psVar10 + 1;
          psVar9 = psVar9 + 1;
          if (uVar8 == 0) goto LAB_1004fe5d4;
        } while (*psVar9 == *psVar10);
      }
    }
  }
  std::string::operator=(param_2,psVar1);
LAB_1004fe5d4:
  return uVar6 != 0;
}




undefined4 FUN_1004fe5ec(long param_1,string *param_2)

{
  string *psVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  string sVar5;
  byte bVar6;
  int iVar7;
  byte *pbVar8;
  string *psVar9;
  byte *pbVar10;
  string *psVar11;
  ulong uVar12;
  
  psVar1 = (string *)(param_1 + 0x2bd0);
  bVar6 = *(byte *)(param_1 + 0x2be7);
  uVar12 = (ulong)bVar6;
  sVar2 = *(size_t *)(param_1 + 0x2bd8);
  if (-1 < (char)bVar6) {
    sVar2 = uVar12;
  }
  sVar3 = DAT_101d911a0;
  if (-1 < (char)DAT_101d911a8._7_1_) {
    sVar3 = (ulong)DAT_101d911a8._7_1_;
  }
  if (sVar2 == sVar3) {
    psVar9 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar9 = psVar1;
    }
    pbVar10 = DAT_101d91198;
    if (-1 < (char)DAT_101d911a8._7_1_) {
      pbVar10 = (byte *)&DAT_101d91198;
    }
    if ((char)bVar6 < '\0') {
      if (sVar2 == 0) {
        return 0;
      }
      iVar7 = _memcmp(psVar9,pbVar10,sVar2);
      if (iVar7 == 0) {
        return 0;
      }
    }
    else {
      if (sVar2 == 0) {
        return 0;
      }
      if ((uint)*pbVar10 == ((uint)*(string **)psVar1 & 0xff)) {
        pbVar8 = (byte *)(param_1 + 0x2bd1);
        do {
          uVar12 = uVar12 - 1;
          pbVar10 = pbVar10 + 1;
          if (uVar12 == 0) {
            return 0;
          }
          bVar4 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar4 == *pbVar10);
      }
    }
  }
  sVar5 = param_2[0x17];
  uVar12 = (ulong)(byte)sVar5;
  sVar3 = *(size_t *)(param_2 + 8);
  if (-1 < (char)sVar5) {
    sVar3 = uVar12;
  }
  if (sVar3 == sVar2) {
    psVar9 = *(string **)param_2;
    if (-1 < (char)sVar5) {
      psVar9 = param_2;
    }
    psVar11 = *(string **)psVar1;
    if (-1 < (char)bVar6) {
      psVar11 = psVar1;
    }
    if ((char)sVar5 < '\0') {
      if (sVar2 == 0) {
        return 1;
      }
      iVar7 = _memcmp(psVar9,psVar11,sVar2);
      if (iVar7 == 0) {
        return 1;
      }
    }
    else {
      if (sVar2 == 0) {
        return 1;
      }
      psVar9 = param_2;
      if ((uint)(byte)*psVar11 == ((uint)*(string **)param_2 & 0xff)) {
        do {
          uVar12 = uVar12 - 1;
          psVar11 = psVar11 + 1;
          psVar9 = psVar9 + 1;
          if (uVar12 == 0) {
            return 1;
          }
        } while (*psVar9 == *psVar11);
      }
    }
  }
  std::string::operator=(param_2,psVar1);
  return 1;
}




void FUN_1004fe764(long *param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004fe778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70))(param_1,param_1 + 0x577,param_2);
  return;
}




undefined8 FUN_1004fe77c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"getPlayerInfo");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004fe884(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"getPlayerInfos");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fe98c(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_1004fe98c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 *local_48;
  ulong local_40;
  undefined4 local_38;
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_68 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_48 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_48 = param_2;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_60 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_38 = 0x100005;
  local_40 = (ulong)uVar1;
  local_c0 = local_c8;
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  FUN_10052467c(&local_e0,param_3);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  if (local_c0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  return;
}




void FUN_1004feaa4(long param_1,string *param_2,string *param_3,string *param_4)

{
  string *psVar1;
  
  if (param_2 != (string *)0x0) {
    std::string::operator=(param_2,(string *)(param_1 + 0x38));
  }
  if (param_3 != (string *)0x0) {
    std::string::operator=(param_3,(string *)(param_1 + 0x68));
  }
  if (param_4 != (string *)0x0) {
    if ((*(char *)(param_1 + 0x2a62) == '\0') || (*(char *)(param_1 + 0x2a63) == '\0')) {
      psVar1 = (string *)(param_1 + 0x80);
    }
    else {
      psVar1 = (string *)(param_1 + 0x98);
    }
    std::string::operator=(param_4,psVar1);
    return;
  }
  return;
}




undefined8 FUN_1004feb30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getInventoryGroups");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fe98c(local_68,lVar1,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fec28(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getEquipmentSlotInfo");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fed20(local_68,lVar1,"player_global_loadout");
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




void FUN_1004fed20(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  void *pvStack_b0;
  void *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  void *local_60;
  undefined8 local_58;
  long lStack_50;
  undefined8 *local_48;
  ulong local_40;
  undefined4 local_38;
  
  local_e0 = 0;
  uStack_d8 = 0;
  local_d0 = 0;
  pvStack_b0 = (void *)0x0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = (void *)0x0;
  local_98 = 0;
  uStack_90 = 0x400;
  local_88 = 0;
  local_80 = 0;
  local_c8 = operator_new(0x28);
  *local_c8 = 0;
  local_c8[1] = 0x10000;
  local_c8[3] = 0;
  local_c8[4] = 0;
  local_c8[2] = 0;
  local_68 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_48 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_48 = param_2;
  }
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_60 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_38 = 0x100005;
  local_40 = (ulong)uVar2;
  local_c0 = local_c8;
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  uVar2 = FUN_1004d2524(param_3);
  local_38 = 0x100005;
  local_40 = (ulong)uVar2;
  local_48 = param_3;
  FUN_10034f3d4(&local_78,&local_48,local_c8);
  uVar3 = FUN_100523708(&local_e0);
  FUN_10003330c(param_1,uVar3);
  if (lStack_50 < 0) {
    operator_delete(local_60);
  }
  if (local_c0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_a8);
  if (pvStack_b0 != (void *)0x0) {
    operator_delete(pvStack_b0);
  }
  return;
}




undefined8 FUN_1004fee58(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getEquipmentSlotInfo");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fed20(local_68,lVar1,"player_global_loadout");
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004fef50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getHeroMastery");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fe98c(local_68,lVar1,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004ff048(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  void *local_50;
  undefined8 uStack_48;
  long local_40;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  local_50 = (void *)0x0;
  uStack_48 = 0;
  local_40 = 0;
  FUN_1004e357c(param_2,&local_50);
  FUN_1000ee4ec(local_68,"setPlayerHandle");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_80,lVar1,&local_50);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_68,local_80,0,&local_34,0x5a,0);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_40 < 0) {
    operator_delete(local_50);
  }
  return uVar2;
}




undefined8 FUN_1004ff168(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  void *local_a8 [2];
  char local_91;
  void *local_90 [2];
  char local_79;
  void *local_78;
  undefined8 uStack_70;
  long local_68;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_4);
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_1004e357c(param_2,&local_60);
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  FUN_1004e357c(param_3,&local_78);
  FUN_1000ee4ec(local_90,"renamePlayerHandle");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f7444(local_a8,lVar1,&local_60,&local_78);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_90,local_a8,0,&local_44,0x5a,0);
  if (local_91 < '\0') {
    operator_delete(local_a8[0]);
  }
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_68 < 0) {
    operator_delete(local_78);
  }
  if (local_50 < 0) {
    operator_delete(local_60);
  }
  return uVar2;
}




undefined8 FUN_1004ff2bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  FUN_1000ee4ec(local_48,"processMessage");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_60,lVar1,param_3);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_48,local_60,0,0,0x5a,0);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_31 < '\0') {
    operator_delete(local_48[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004ff3b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 local_80;
  void *local_78 [2];
  char local_61;
  void *local_60 [2];
  char local_49;
  void *local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_48 = (void *)0x0;
  uStack_40 = 0;
  local_38 = 0;
  iVar2 = FUN_1004e2f38(&DAT_101d911b0);
  if (iVar2 == 3) {
    pcVar4 = "desktop";
  }
  else if (iVar2 == 2) {
    pcVar4 = "tablet";
  }
  else if (iVar2 == 1) {
    pcVar4 = "phone";
  }
  else {
    pcVar4 = "unknown";
  }
  FUN_1000ee4ec(local_60,pcVar4);
  std::string::operator=((string *)&local_48,(string *)local_60);
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  FUN_1000ee4ec(local_60,"addDeviceToken");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  local_80 = FUN_1004e2f80(&DAT_101d911b0);
  FUN_1004ff554(local_78,lVar1,param_3,"iOS",&local_48,&local_80);
  uVar3 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_60,local_78,0,0,0x5a,0);
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  if (local_38 < 0) {
    operator_delete(local_48);
    return uVar3;
  }
  return uVar3;
}




void FUN_1004ff554(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined4 local_f0;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  void *pvStack_d0;
  void *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  void *local_80;
  undefined8 local_78;
  long lStack_70;
  undefined8 *local_68;
  ulong local_60;
  undefined4 local_58;
  
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 0;
  pvStack_d0 = (void *)0x0;
  local_d8 = 0;
  uStack_c0 = 0;
  local_c8 = (void *)0x0;
  local_b8 = 0;
  uStack_b0 = 0x400;
  local_a8 = 0;
  local_a0 = 0;
  local_e8 = operator_new(0x28);
  *local_e8 = 0;
  local_e8[1] = 0x10000;
  local_e8[3] = 0;
  local_e8[4] = 0;
  local_e8[2] = 0;
  local_88 = 4;
  bVar1 = *(byte *)((long)param_2 + 0x17);
  local_68 = (undefined8 *)*param_2;
  if (-1 < (char)bVar1) {
    local_68 = param_2;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_78 = 0;
  lStack_70 = 0;
  local_80 = (void *)0x0;
  uVar2 = (uint)param_2[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_58 = 0x100005;
  local_60 = (ulong)uVar2;
  local_e0 = local_e8;
  FUN_10034f3d4(&local_98,&local_68,local_e8);
  bVar1 = *(byte *)((long)param_3 + 0x17);
  local_68 = (undefined8 *)*param_3;
  if (-1 < (char)bVar1) {
    local_68 = param_3;
  }
  uVar2 = (uint)param_3[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_58 = 0x100005;
  local_60 = (ulong)uVar2;
  FUN_10034f3d4(&local_98,&local_68,local_e8);
  uVar2 = FUN_1004d2524(param_4);
  local_58 = 0x100005;
  local_60 = (ulong)uVar2;
  local_68 = param_4;
  FUN_10034f3d4(&local_98,&local_68,local_e8);
  bVar1 = *(byte *)((long)param_5 + 0x17);
  local_68 = (undefined8 *)*param_5;
  if (-1 < (char)bVar1) {
    local_68 = param_5;
  }
  uVar2 = (uint)param_5[1];
  if (-1 < (char)bVar1) {
    uVar2 = (uint)bVar1;
  }
  local_58 = 0x100005;
  local_60 = (ulong)uVar2;
  FUN_10034f3d4(&local_98,&local_68,local_e8);
  FUN_1005237c4(&local_100,*param_6);
  uVar3 = FUN_100523708();
  FUN_10003330c(param_1,uVar3);
  if (lStack_70 < 0) {
    operator_delete(local_80);
  }
  if (local_e0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_c8);
  if (pvStack_d0 != (void *)0x0) {
    operator_delete(pvStack_d0);
  }
  return;
}




undefined8
FUN_1004ff718(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4,
             undefined8 param_5,undefined8 param_6,undefined4 param_7)

{
  long lVar1;
  undefined8 uVar2;
  void *local_80 [2];
  char local_69;
  void *local_68 [2];
  char local_51;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*(char *)(param_2 + 0x7f) < '\0') {
    if (*(long *)(param_2 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_2 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_2 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_4c = param_7;
  local_48 = param_1;
  local_44 = param_4;
  FUN_1000ee4ec(local_68,"recordMatchExperienceMetrics");
  lVar1 = param_2 + 0x2bb8;
  if (*(char *)(param_2 + 0x2c18) != '\0') {
    lVar1 = param_2 + 0x2c20;
  }
  FUN_1004ff83c(local_80,lVar1,param_3,&local_44,param_5,param_6,&local_48,&local_4c);
  uVar2 = FUN_1004f22f0(param_2 + 0x10,param_2 + 0x68,local_68,local_80,0,0,0x5a,0);
  if (local_69 < '\0') {
    operator_delete(local_80[0]);
  }
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
    return uVar2;
  }
  return uVar2;
}




void FUN_1004ff83c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint *param_4,
                  undefined8 *param_5,undefined8 *param_6,float *param_7,uint *param_8)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  void *pvStack_e0;
  void *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  void *local_90;
  undefined8 local_88;
  long lStack_80;
  undefined8 *local_78;
  ulong local_70;
  undefined4 local_68;
  
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  pvStack_e0 = (void *)0x0;
  local_e8 = 0;
  uStack_d0 = 0;
  local_d8 = (void *)0x0;
  local_c8 = 0;
  uStack_c0 = 0x400;
  local_b8 = 0;
  local_b0 = 0;
  local_f8 = operator_new(0x28);
  *local_f8 = 0;
  local_f8[1] = 0x10000;
  local_f8[3] = 0;
  local_f8[4] = 0;
  local_f8[2] = 0;
  local_98 = 4;
  bVar2 = *(byte *)((long)param_2 + 0x17);
  local_78 = (undefined8 *)*param_2;
  if (-1 < (char)bVar2) {
    local_78 = param_2;
  }
  local_a8 = 0;
  uStack_a0 = 0;
  local_88 = 0;
  lStack_80 = 0;
  local_90 = (void *)0x0;
  uVar1 = (uint)param_2[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  local_f0 = local_f8;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_3 + 0x17);
  local_78 = (undefined8 *)*param_3;
  if (-1 < (char)bVar2) {
    local_78 = param_3;
  }
  uVar1 = (uint)param_3[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  local_78 = (undefined8 *)(ulong)*param_4;
  local_68 = 0x3a06;
  local_70 = 0;
  if (-1 < (int)*param_4) {
    local_68 = 0x3e06;
  }
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_5 + 0x17);
  local_78 = (undefined8 *)*param_5;
  if (-1 < (char)bVar2) {
    local_78 = param_5;
  }
  uVar1 = (uint)param_5[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  bVar2 = *(byte *)((long)param_6 + 0x17);
  local_78 = (undefined8 *)*param_6;
  if (-1 < (char)bVar2) {
    local_78 = param_6;
  }
  uVar1 = (uint)param_6[1];
  if (-1 < (char)bVar2) {
    uVar1 = (uint)bVar2;
  }
  local_68 = 0x100005;
  local_70 = (ulong)uVar1;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  local_78 = (undefined8 *)(double)*param_7;
  local_70 = 0;
  local_68 = 0x4206;
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  local_78 = (undefined8 *)(ulong)*param_8;
  local_68 = 0x3a06;
  local_70 = 0;
  if (-1 < (int)*param_8) {
    local_68 = 0x3e06;
  }
  FUN_10034f3d4(&local_a8,&local_78,local_f8);
  uVar3 = FUN_100523708(&local_110);
  FUN_10003330c(param_1,uVar3);
  if (lStack_80 < 0) {
    operator_delete(local_90);
  }
  if (local_f0 != (undefined8 *)0x0) {
    pvVar4 = (void *)FUN_1000f7b54();
    operator_delete(pvVar4);
  }
  _free(local_d8);
  if (pvStack_e0 != (void *)0x0) {
    operator_delete(pvStack_e0);
  }
  return;
}




undefined8
FUN_1004ffa94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  void *local_90 [2];
  char local_79;
  void *local_78 [2];
  char local_61;
  void *local_60;
  undefined8 uStack_58;
  long local_50;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_44 = FUN_1004f1744(param_1 + 0x2c98,param_5);
  local_60 = (void *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  FUN_1004e357c(param_3,&local_60);
  FUN_1000ee4ec(local_78,"reportHonorPlayer");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fab40(local_90,lVar1,param_2,&local_60,param_4);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_78,local_90,0,&local_44,0x5a,0);
  if (local_79 < '\0') {
    operator_delete(local_90[0]);
  }
  if (local_61 < '\0') {
    operator_delete(local_78[0]);
  }
  if (local_50 < 0) {
    operator_delete(local_60);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004ffbd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getPlayerCardInventory");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
  }
  return uVar2;
}




undefined8 FUN_1004ffcc8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getSkinManifest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,10,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004ffdc4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98);
  FUN_1000ee4ec(local_50,"getCardBoxManifest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4e58(local_68,lVar1);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,10,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004ffec0(long param_1,undefined4 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = param_2;
  local_38 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"refreshCardBoxManifest");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004fcd7c(local_68,lVar1,&local_34);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_38,10,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}




undefined8 FUN_1004fffc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  void *local_68 [2];
  char local_51;
  void *local_50 [2];
  char local_39;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x7f) < '\0') {
    if (*(long *)(param_1 + 0x70) == 0) {
      DAT_1018675c8 = 0xfffffff9;
      return 0xfffffff9;
    }
  }
  else if (*(char *)(param_1 + 0x7f) == '\0') {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  if (*(int *)(param_1 + 0x2b08) == 0) {
    DAT_1018675c8 = 0xfffffff9;
    return 0xfffffff9;
  }
  local_34 = FUN_1004f1744(param_1 + 0x2c98,param_3);
  FUN_1000ee4ec(local_50,"purchaseCardPack");
  lVar1 = param_1 + 0x2bb8;
  if (*(char *)(param_1 + 0x2c18) != '\0') {
    lVar1 = param_1 + 0x2c20;
  }
  FUN_1004f4c20(local_68,lVar1,param_2);
  uVar2 = FUN_1004f22f0(param_1 + 0x10,param_1 + 0x68,local_50,local_68,0,&local_34,0x5a,0);
  if (local_51 < '\0') {
    operator_delete(local_68[0]);
  }
  if (local_39 < '\0') {
    operator_delete(local_50[0]);
    return uVar2;
  }
  return uVar2;
}

