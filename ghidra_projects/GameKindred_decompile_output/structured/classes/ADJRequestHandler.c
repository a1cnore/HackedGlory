// classes/ADJRequestHandler — 12 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJRequestHandler::handlerWithPackageHandler_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(&objc::class_t::ADJRequestHandler,"alloc");
  uVar2 = _objc_msgSend(uVar2,"initWithPackageHandler:",uVar1);
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

ID ADJRequestHandler::initWithPackageHandler_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  dispatch_queue_t pdVar3;
  undefined8 uVar4;
  ID IVar5;
  ID local_40;
  class_t *local_38;
  
  uVar1 = _objc_retain(param_3);
  local_38 = &objc::class_t::ADJRequestHandler;
  local_40 = param_1;
  lVar2 = _objc_msgSendSuper2(&local_40,"init");
  if (lVar2 == 0) {
    IVar5 = 0;
  }
  else {
    pdVar3 = _dispatch_queue_create("io.adjust.RequestQueue",(dispatch_queue_attr_t)0x0);
    _objc_msgSend(lVar2,"setInternalQueue:",pdVar3);
    _objc_release(pdVar3);
    _objc_msgSend(lVar2,"setPackageHandler:",uVar1);
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setLogger:",uVar4);
    _objc_release(uVar4);
    _objc_msgSend(uVar1,"getBasePath");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setBasePath:",uVar4);
    _objc_release(uVar4);
    IVar5 = _objc_retain(lVar2);
  }
  _objc_release(uVar1);
  _objc_release(lVar2);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

void ADJRequestHandler::teardown(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"verbose:",&cf_ADJRequestHandlerteardown);
  _objc_release(uVar1);
  setLogger_(param_1,(SEL)"setLogger:",0);
  setInternalQueue_(param_1,(SEL)"setInternalQueue:",0);
  setPackageHandler_(param_1,(SEL)"setPackageHandler:",0);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJRequestHandler::internalQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_internalQueue);
}




/* Function Stack Size: 0x18 bytes */

void ADJRequestHandler::setInternalQueue_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_internalQueue,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJRequestHandler::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJRequestHandler::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJRequestHandler::packageHandler(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_packageHandler);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJRequestHandler::setPackageHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_packageHandler,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJRequestHandler::basePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_basePath,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJRequestHandler::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJRequestHandler::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_basePath,0);
  _objc_destroyWeak(param_1 + (long)_packageHandler);
  _objc_destroyWeak(param_1 + (long)_logger);
  _objc_storeStrong(param_1 + (long)_internalQueue,0);
  return;
}

