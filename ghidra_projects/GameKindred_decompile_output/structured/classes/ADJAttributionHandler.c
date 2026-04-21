// classes/ADJAttributionHandler — 23 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::checkSessionResponse_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar1 = _objc_retain(param_3);
  internalQueue(param_1,(SEL)"internalQueue");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_101444138;
  local_60 = 0xc2000000;
  uStack_5c = 0;
  local_58 = FUN_101127258;
  local_50 = &DAT_101830b10;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::checkSdkClickResponse_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar1 = _objc_retain(param_3);
  internalQueue(param_1,(SEL)"internalQueue");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_101444138;
  local_60 = 0xc2000000;
  uStack_5c = 0;
  local_58 = FUN_101127358;
  local_50 = &DAT_101830b40;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::checkAttributionResponse_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar1 = _objc_retain(param_3);
  internalQueue(param_1,(SEL)"internalQueue");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_101444138;
  local_60 = 0xc2000000;
  uStack_5c = 0;
  local_58 = FUN_101127458;
  local_50 = &DAT_101830b70;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJAttributionHandler::getAttribution(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_101830bc0);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJAttributionHandler::pauseSending(ID param_1,SEL param_2)

{
  setPaused_(param_1,(SEL)"setPaused:",1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJAttributionHandler::resumeSending(ID param_1,SEL param_2)

{
  setPaused_(param_1,(SEL)"setPaused:",0);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::requestAttributionI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(uVar2,"paused");
  _objc_msgSend(uVar2,"logger");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  if (iVar1 == 0) {
    _objc_msgSend(uVar2,"attributionPackage");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"extendedString");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"verbose:",&cf___);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"baseUrl");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSURL,"URLWithString:",uVar4);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_msgSend(uVar2,"basePath");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"attributionPackage");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_101444138;
    local_60 = 0xc2000000;
    uStack_5c = 0;
    local_58 = FUN_101127c3c;
    local_50 = &DAT_101830be0;
    local_48 = _objc_retain(uVar2);
    _objc_msgSend(&objc::class_t::ADJUtil,
                  "sendGetRequest:basePath:prefixErrorMessage:activityPackage:responseDataHandler:",
                  uVar3,uVar4,&cf_Failedtogetattribution,uVar5,&local_68);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(local_48);
  }
  else {
    _objc_msgSend(uVar3,"debug:",&cf_Attributionhandlerispaused);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJAttributionHandler::teardown(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"verbose:",&cf_ADJAttributionHandlerteardown);
  _objc_release(uVar1);
  attributionTimer(param_1,(SEL)"attributionTimer");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    attributionTimer(param_1,(SEL)"attributionTimer");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"cancel");
    _objc_release(uVar1);
  }
  setInternalQueue_(param_1,(SEL)"setInternalQueue:",0);
  setActivityHandler_(param_1,(SEL)"setActivityHandler:",0);
  setLogger_(param_1,(SEL)"setLogger:",0);
  setAttributionTimer_(param_1,(SEL)"setAttributionTimer:",0);
  setAttributionPackage_(param_1,(SEL)"setAttributionPackage:",0);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttributionHandler::internalQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_internalQueue);
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::setInternalQueue_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_internalQueue,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttributionHandler::activityHandler(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_activityHandler);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::setActivityHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_activityHandler,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttributionHandler::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttributionHandler::attributionTimer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attributionTimer);
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::setAttributionTimer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_attributionTimer,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttributionHandler::attributionPackage(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attributionPackage);
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::setAttributionPackage_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_attributionPackage,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJAttributionHandler::paused(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_paused) & 1;
}




/* Function Stack Size: 0x14 bytes */

void ADJAttributionHandler::setPaused_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_paused) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttributionHandler::basePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_basePath,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionHandler::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJAttributionHandler::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_basePath,0);
  _objc_storeStrong(param_1 + (long)_attributionPackage,0);
  _objc_storeStrong(param_1 + (long)_attributionTimer,0);
  _objc_destroyWeak(param_1 + (long)_logger);
  _objc_destroyWeak(param_1 + (long)_activityHandler);
  _objc_storeStrong(param_1 + (long)_internalQueue,0);
  return;
}

