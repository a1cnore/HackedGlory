// classes/ADJPackageHandler — 36 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::addPackage_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10111a7cc;
  local_50 = &DAT_101830840;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageHandler::sendFirstPackage(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_101830890);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::sendNextPackage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  internalQueue(param_1,(SEL)"internalQueue");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,
                &PTR___NSConcreteGlobalBlock_1018308d0);
  _objc_release(uVar2);
  activityHandler(param_1,(SEL)"activityHandler");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"finishedTracking:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageHandler::pauseSending(ID param_1,SEL param_2)

{
  setPaused_(param_1,(SEL)"setPaused:",1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageHandler::resumeSending(ID param_1,SEL param_2)

{
  setPaused_(param_1,(SEL)"setPaused:",0);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::updatePackages_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar1 = _objc_msgSend(param_3,"copy");
  internalQueue(param_1,(SEL)"internalQueue");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_101444138;
  local_60 = 0xc2000000;
  uStack_5c = 0;
  local_58 = FUN_10111ad14;
  local_50 = &DAT_101830920;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageHandler::getBasePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_basePath));
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageHandler::teardown(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  dispatch_semaphore_t dsema;
  
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"verbose:",&cf_ADJPackageHandlerteardown);
  _objc_release(uVar1);
  sendingSemaphore(param_1,(SEL)"sendingSemaphore");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    sendingSemaphore(param_1,(SEL)"sendingSemaphore");
    dsema = (dispatch_semaphore_t)_objc_retainAutoreleasedReturnValue();
    _dispatch_semaphore_signal(dsema);
    _objc_release(dsema);
  }
  requestHandler(param_1,(SEL)"requestHandler");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    requestHandler(param_1,(SEL)"requestHandler");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"teardown");
    _objc_release(uVar1);
  }
  teardownPackageQueueS(param_1,(SEL)"teardownPackageQueueS");
  setInternalQueue_(param_1,(SEL)"setInternalQueue:",0);
  setSendingSemaphore_(param_1,(SEL)"setSendingSemaphore:",0);
  setRequestHandler_(param_1,(SEL)"setRequestHandler:",0);
  setBackoffStrategy_(param_1,(SEL)"setBackoffStrategy:",0);
  setActivityHandler_(param_1,(SEL)"setActivityHandler:",0);
  setLogger_(param_1,(SEL)"setLogger:",0);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageHandler::deleteState(ID param_1,SEL param_2)

{
  _objc_msgSend(&objc::class_t::ADJPackageHandler,"deletePackageQueue");
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageHandler::deletePackageQueue(ID param_1,SEL param_2)

{
  _objc_msgSend(&objc::class_t::ADJUtil,"deleteFileWithName:",&cf_AdjustIoPackageQueue);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJPackageHandler::addI_package_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  _objc_msgSend(param_3,"packageQueue");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"addObject:",param_4);
  _objc_release(uVar3);
  _objc_msgSend(param_3,"logger");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"packageQueue");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"count");
  _objc_msgSend(uVar3,"debug:",&cf_Addedpackage_d____);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_msgSend(param_3,"logger");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend(param_4,"extendedString");
  _objc_release(uVar2);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar4);
  _objc_msgSend(uVar3,"verbose:",&cf___);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_msgSend(param_3,"writePackageQueueS:",uVar1);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::sendFirstI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  dispatch_semaphore_t dsema;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  char *pcVar8;
  cfstringStruct *pcVar9;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(uVar2,"packageQueue");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar4 = _objc_msgSend(uVar3,"count");
  _objc_release(uVar3);
  if (lVar4 == 0) goto LAB_10111b2ac;
  iVar1 = _objc_msgSend(uVar2,"paused");
  if (iVar1 == 0) {
    _objc_msgSend(uVar2,"sendingSemaphore");
    dsema = (dispatch_semaphore_t)_objc_retainAutoreleasedReturnValue();
    lVar5 = _dispatch_semaphore_wait(dsema,0);
    _objc_release(dsema);
    if (lVar5 != 0) {
      _objc_msgSend(uVar2,"logger");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      pcVar8 = "verbose:";
      pcVar9 = &cf_Packagehandlerisalreadysending;
      goto LAB_10111b29c;
    }
    _objc_msgSend(uVar2,"packageQueue");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar6,"objectAtIndex:",0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    uVar6 = _objc_msgSend(&objc::class_t::ADJActivityPackage,"class");
    uVar7 = _objc_msgSend(uVar3,"isKindOfClass:",uVar6);
    if ((uVar7 & 1) == 0) {
      _objc_msgSend(uVar2,"logger");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar6,"error:",&cf_Failedtoreadactivitypackage);
      _objc_release(uVar6);
      _objc_msgSend(uVar2,"sendNextI:",uVar2);
    }
    else {
      _objc_msgSend(uVar2,"requestHandler");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar6,"sendPackage:queueSize:",uVar3,lVar4 + -1);
      _objc_release(uVar6);
    }
  }
  else {
    _objc_msgSend(uVar2,"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    pcVar8 = "debug:";
    pcVar9 = &cf_Packagehandlerispaused;
LAB_10111b29c:
    _objc_msgSend(uVar3,pcVar8,pcVar9);
  }
  _objc_release(uVar3);
LAB_10111b2ac:
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::sendNextI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_semaphore_t dsema;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(param_3,"packageQueue");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"removeObjectAtIndex:",0);
  _objc_release(uVar2);
  _objc_msgSend(param_3,"writePackageQueueS:",uVar1);
  _objc_msgSend(param_3,"sendingSemaphore");
  dsema = (dispatch_semaphore_t)_objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_signal(dsema);
  _objc_release(dsema);
  _objc_msgSend(param_3,"sendFirstI:",uVar1);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::readPackageQueueI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(&objc::class_t::ADJActivityPackage,"class");
  _objc_msgSend(&_OBJC_CLASS___NSKeyedUnarchiver,"setClass:forClassName:",uVar2,
                &cf_AIActivityPackage);
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSArray,"class");
  _objc_msgSend(&objc::class_t::ADJUtil,"readObject:objectName:class:",&cf_AdjustIoPackageQueue,
                &cf_Packagequeue,uVar2);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"array");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"setPackageQueue:",uVar2);
    _objc_release(uVar2);
  }
  else {
    _objc_msgSend(uVar1,"setPackageQueue:",lVar3);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::writePackageQueueS_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJPackageHandler,"class");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  _objc_msgSend(uVar1,"packageQueue");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar1,"packageQueue");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJUtil,"writeObject:fileName:objectName:",uVar4,
                  &cf_AdjustIoPackageQueue,&cf_Packagequeue);
    _objc_release(uVar4);
  }
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageHandler::teardownPackageQueueS(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_msgSend(&objc::class_t::ADJPackageHandler,"class");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  packageQueue(param_1,(SEL)"packageQueue");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    packageQueue(param_1,(SEL)"packageQueue");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"removeAllObjects");
    _objc_release(uVar3);
    setPackageQueue_(param_1,(SEL)"setPackageQueue:",0);
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageHandler::dealloc(ID param_1,SEL param_2)

{
  long lVar1;
  dispatch_semaphore_t dsema;
  ID local_40;
  class_t *local_38;
  
  sendingSemaphore(param_1,(SEL)"sendingSemaphore");
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    sendingSemaphore(param_1,(SEL)"sendingSemaphore");
    dsema = (dispatch_semaphore_t)_objc_retainAutoreleasedReturnValue();
    _dispatch_semaphore_signal(dsema);
    _objc_release(dsema);
  }
  local_38 = &objc::class_t::ADJPackageHandler;
  local_40 = param_1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageHandler::internalQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_internalQueue);
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::setInternalQueue_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_internalQueue,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageHandler::sendingSemaphore(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_sendingSemaphore);
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::setSendingSemaphore_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_sendingSemaphore,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageHandler::requestHandler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_requestHandler);
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::setRequestHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_requestHandler,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageHandler::packageQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_packageQueue);
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::setPackageQueue_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_packageQueue,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageHandler::backoffStrategy(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backoffStrategy);
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::setBackoffStrategy_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_backoffStrategy,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJPackageHandler::paused(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_paused);
}




/* Function Stack Size: 0x14 bytes */

void ADJPackageHandler::setPaused_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_paused) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageHandler::activityHandler(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_activityHandler);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::setActivityHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_activityHandler,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageHandler::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageHandler::basePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_basePath,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageHandler::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageHandler::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_basePath,0);
  _objc_destroyWeak(param_1 + (long)_logger);
  _objc_destroyWeak(param_1 + (long)_activityHandler);
  _objc_storeStrong(param_1 + (long)_backoffStrategy,0);
  _objc_storeStrong(param_1 + (long)_packageQueue,0);
  _objc_storeStrong(param_1 + (long)_requestHandler,0);
  _objc_storeStrong(param_1 + (long)_sendingSemaphore,0);
  _objc_storeStrong(param_1 + (long)_internalQueue,0);
  return;
}

