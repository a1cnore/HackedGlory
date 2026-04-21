// functions/10112 — 45 functions
#include "GameKindred.h"




void FUN_1011227e8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_2);
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(&objc::class_t::ADJUtil,
                        "completionHandler:response:error:prefixErrorMessage:suffixErrorMessage:activityPackage:"
                        ,uVar1,uVar2,param_4,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar3);
  (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),uVar1);
  _objc_release(uVar1);
  return;
}




void FUN_101122888(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  __Block_object_assign((void *)(param_1 + 0x38),*(void **)(param_2 + 0x38),7);
  return;
}




void FUN_1011228cc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  return;
}




void FUN_101123fb4(void)

{
  u_int32_t uVar1;
  
  uVar1 = _arc4random();
  _srand48((ulong)uVar1);
  return;
}




void FUN_101124444(long param_1)

{
  undefined8 local_40;
  undefined1 *local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  local_38 = (undefined1 *)&local_40;
  local_40 = 0;
  local_30 = 0x2020000000;
  local_28 = _objc_msgSend(&objc::class_t::ADJUtil,"isInactive");
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_38[0x18]);
  __Block_object_dispose(&local_40,8);
  return;
}




void FUN_1011244cc(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  return;
}




void FUN_1011244dc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10112474c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = _objc_retain(param_2);
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"objectForKey:",uVar1);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"warn:",&cf_Key__withvalue__from__parameterwasreplacedbyvalue__);
    _objc_release(uVar4);
  }
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"setObject:forKey:",uVar2,uVar1);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




void FUN_101124834(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_10112485c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_101124970(long param_1)

{
  long lVar1;
  
  lVar1 = _objc_loadWeakRetained(param_1 + 0x28);
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),lVar1);
  }
  _objc_release(lVar1);
  return;
}




void FUN_1011249b0(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  return;
}




void FUN_1011249e8(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101124e80(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  
  if ((param_2 & 1) != 0) {
    return;
  }
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"error:",&cf_Unabletoopendeeplink____);
  _objc_release(uVar1);
  return;
}




void FUN_101124ef8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101124f00(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101127130(long param_1)

{
  long lVar1;
  
  lVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_msgSend(lVar1,"requestAttributionI:",lVar1);
  }
  _objc_release(lVar1);
  return;
}




void FUN_101127170(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
  return;
}




void FUN_10112717c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  return;
}




void FUN_101127258(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"checkSessionResponseI:sessionResponseData:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101127274(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10112727c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101127358(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"checkSdkClickResponseI:sdkClickResponseData:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101127374(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10112737c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101127458(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"checkAttributionResponseI:attributionResponseData:",param_2,
                *(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101127474(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10112747c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_1011274ec(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"waitRequestAttributionWithDelayI:milliSecondsDelay:",param_2,0);
  return;
}




void FUN_101127c3c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_2);
  uVar3 = _objc_msgSend(&objc::class_t::ADJAttributionResponseData,"class");
  iVar1 = _objc_msgSend(uVar2,"isKindOfClass:",uVar3);
  if (iVar1 != 0) {
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"checkAttributionResponse:",uVar2);
  }
  _objc_release(uVar2);
  return;
}




void FUN_101127ca8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101127cb0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10112a828(long param_1)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"verbose:",&cf___fired);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010112a894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}




void FUN_10112a898(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),7);
  return;
}




void FUN_10112a8cc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10112b2e4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"name");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"verbose:",&cf___fired);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010112b378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}




void FUN_10112b37c(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  __Block_object_assign((void *)(param_1 + 0x28),*(void **)(param_2 + 0x28),7);
  return;
}




void FUN_10112b3b0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10112f88c(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"initI:activityHandler:startsSending:",param_2,
                *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}




void FUN_10112f8ac(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10112f8b4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10112f9d8(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"sendSdkClickI:sdkClickPackage:",param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10112f9f4(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10112f9fc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10112fa6c(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"sendNextSdkClickI:",param_2);
  return;
}

