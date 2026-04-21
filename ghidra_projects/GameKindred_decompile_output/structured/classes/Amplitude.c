// classes/Amplitude — 102 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID Amplitude::instance(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL extraout_x1;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  code *local_38;
  undefined *local_30;
  ID IStack_28;
  
  local_48 = PTR___NSConcreteStackBlock_101444138;
  local_40 = 0xc2000000;
  uStack_3c = 0;
  local_38 = FUN_10113e4d4;
  local_30 = &DAT_1018312a0;
  IStack_28 = param_1;
  if (DAT_101ea60e0 != -1) {
    _dispatch_once(&DAT_101ea60e0,&local_48);
    param_2 = extraout_x1;
  }
  IVar1 = _objc_retainAutoreleaseReturnValue(DAT_101ea60d8,param_2);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::initializeApiKey_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"initializeApiKey:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void Amplitude::initializeApiKey_userId_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"initializeApiKey:userId:",uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::logEvent_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"logEvent:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void Amplitude::logEvent_withEventProperties_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"logEvent:withEventProperties:",uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::logRevenue_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"logRevenue:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::uploadEvents(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"uploadEvents");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setUserProperties_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setUserProperties:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setUserId_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setUserId:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::enableLocationListening(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"enableLocationListening");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::disableLocationListening(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"disableLocationListening");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::useAdvertisingIdForDeviceId(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"useAdvertisingIdForDeviceId");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::printEventsCount(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"printEventsCount");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::getDeviceId(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"getDeviceId");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::updateLocation(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Amplitude,"instance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"updateLocation");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  ID local_50;
  class_t *local_48;
  
  local_48 = &objc::class_t::Amplitude;
  local_50 = param_1;
  IVar3 = _objc_msgSendSuper2(&local_50,"init");
  if (IVar3 != 0) {
    *(undefined1 *)(IVar3 + (long)_sslPinningEnabled) = 0;
    *(undefined1 *)(IVar3 + (long)_initialized) = 0;
    *(undefined1 *)(IVar3 + (long)_locationListeningEnabled) = 1;
    *(undefined8 *)(IVar3 + (long)_sessionId) = 0xffffffffffffffff;
    *(undefined1 *)(IVar3 + (long)_updateScheduled) = 0;
    *(undefined1 *)(IVar3 + (long)_updatingCurrently) = 0;
    *(undefined1 *)(IVar3 + (long)_useAdvertisingIdForDeviceId) = 0;
    *(undefined1 *)(IVar3 + (long)_backoffUpload) = 0;
    *(undefined1 *)(IVar3 + (long)_offline) = 0;
    _objc_msgSend(IVar3,"setEventUploadThreshold:",0x1e);
    _objc_msgSend(IVar3,"setEventMaxCount:",1000);
    _objc_msgSend(IVar3,"setEventUploadMaxBatchSize:",100);
    _objc_msgSend(IVar3,"setEventUploadPeriodSeconds:",0x1e);
    _objc_msgSend(IVar3,"setMinTimeBetweenSessionsMillis:",300000);
    uVar2 = _objc_msgSend(IVar3,"eventUploadMaxBatchSize");
    *(undefined4 *)(IVar3 + (long)_backoffUploadBatchSize) = uVar2;
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSOperationQueue,"alloc");
    uVar4 = _objc_msgSend(uVar4,"init");
    lVar7 = (long)_initializerQueue;
    uVar5 = *(undefined8 *)(IVar3 + lVar7);
    *(undefined8 *)(IVar3 + lVar7) = uVar4;
    _objc_release(uVar5);
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSOperationQueue,"alloc");
    uVar4 = _objc_msgSend(uVar4,"init");
    lVar6 = (long)_backgroundQueue;
    uVar5 = *(undefined8 *)(IVar3 + lVar6);
    *(undefined8 *)(IVar3 + lVar6) = uVar4;
    _objc_release(uVar5);
    _objc_msgSend(*(undefined8 *)(IVar3 + lVar6),"setMaxConcurrentOperationCount:",1);
    _objc_msgSend(*(undefined8 *)(IVar3 + lVar6),"setSuspended:",1);
    _objc_msgSend(*(undefined8 *)(IVar3 + lVar6),"setName:",&cf_BACKGROUND);
    puVar1 = PTR___NSConcreteStackBlock_101444138;
    uVar5 = *(undefined8 *)(IVar3 + lVar7);
    local_78 = PTR___NSConcreteStackBlock_101444138;
    local_70 = 0xc2000000;
    uStack_6c = 0;
    local_68 = FUN_10113ef54;
    local_60 = &DAT_1018312d0;
    uVar4 = _objc_retain(IVar3);
    local_58 = uVar4;
    _objc_msgSend(uVar5,"addOperationWithBlock:",&local_78);
    local_a0 = puVar1;
    local_98 = 0xc2000000;
    uStack_94 = 0;
    local_90 = FUN_10113f41c;
    local_88 = &DAT_101831300;
    uVar5 = _objc_retain(uVar4);
    local_80 = uVar4;
    _dispatch_async(PTR___dispatch_main_q_101444238,&local_a0);
    _objc_msgSend(uVar5,"addObservers");
    _objc_release(local_80);
    _objc_release(local_58);
  }
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

bool Amplitude::migrateEventsDataToDB(ID param_1,SEL param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  undefined8 local_128;
  long local_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [128];
  long local_68;
  
  plVar13 = (long *)PTR____stack_chk_guard_101444218;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  unarchive_(param_1,(SEL)"unarchive:",*(ID *)(param_1 + (long)_eventsDataPath));
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar15 = 0;
  }
  else {
    _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"objectForKey:",&cf_events);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = (long *)0x0;
    uStack_110 = 0;
    local_128 = 0;
    local_120 = 0;
    uVar5 = _objc_msgSend(uVar4,"countByEnumeratingWithState:objects:count:",&local_128,auStack_e8,
                          0x10);
    if (uVar5 == 0) {
      uVar15 = 1;
    }
    else {
      lVar14 = *local_118;
      uVar15 = 1;
      do {
        uVar12 = 0;
        do {
          if (*local_118 != lVar14) {
            _objc_enumerationMutation(uVar4);
          }
          _objc_msgSend(&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                        *(undefined8 *)(local_120 + uVar12 * 8),0,0);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          uVar7 = _objc_msgSend(&_OBJC_CLASS___NSString,"alloc");
          uVar7 = _objc_msgSend(uVar7,"initWithData:encoding:",uVar6,4);
          uVar1 = _objc_msgSend(uVar3,"addEvent:",uVar7);
          uVar15 = uVar15 & uVar1;
          _objc_release(uVar7);
          _objc_release(uVar6);
          uVar12 = uVar12 + 1;
        } while (uVar12 < uVar5);
        uVar5 = _objc_msgSend(uVar4,"countByEnumeratingWithState:objects:count:",&local_128,
                              auStack_e8,0x10);
      } while (uVar5 != 0);
    }
    _objc_msgSend(lVar2,"objectForKey:",&cf_user_id);
    lVar14 = _objc_retainAutoreleasedReturnValue();
    if (lVar14 != 0) {
      uVar1 = _objc_msgSend(uVar3,"insertOrReplaceKeyValue:value:",&cf_user_id,lVar14);
      uVar15 = uVar15 & uVar1;
    }
    _objc_msgSend(lVar2,"objectForKey:",&cf_opt_out);
    lVar8 = _objc_retainAutoreleasedReturnValue();
    plVar13 = (long *)PTR____stack_chk_guard_101444218;
    if (lVar8 != 0) {
      uVar1 = _objc_msgSend(uVar3,"insertOrReplaceKeyLongValue:value:",&cf_opt_out,lVar8);
      uVar15 = uVar15 & uVar1;
    }
    _objc_msgSend(lVar2,"objectForKey:",&cf_device_id);
    lVar9 = _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      uVar1 = _objc_msgSend(uVar3,"insertOrReplaceKeyValue:value:",&cf_device_id,lVar9);
      uVar15 = uVar15 & uVar1;
    }
    _objc_msgSend(lVar2,"objectForKey:",&cf_previous_session_id);
    lVar10 = _objc_retainAutoreleasedReturnValue();
    if (lVar10 != 0) {
      uVar1 = _objc_msgSend(uVar3,"insertOrReplaceKeyLongValue:value:",&cf_previous_session_id,
                            lVar10);
      uVar15 = uVar15 & uVar1;
    }
    _objc_msgSend(lVar2,"objectForKey:",&cf_previous_session_time);
    lVar11 = _objc_retainAutoreleasedReturnValue();
    if (lVar11 != 0) {
      uVar1 = _objc_msgSend(uVar3,"insertOrReplaceKeyLongValue:value:",&cf_previous_session_time,
                            lVar11);
      uVar15 = uVar15 & uVar1;
    }
    _objc_release(lVar11);
    _objc_release(lVar10);
    _objc_release(lVar9);
    _objc_release(lVar8);
    _objc_release(lVar14);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  if (*plVar13 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar15;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::addObservers(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",param_1,"enterForeground",
                *(undefined8 *)PTR__UIApplicationWillEnterForegroundNotification_1014440e8,0);
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",param_1,"enterBackground",
                *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_1014440d0,0);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::removeObservers(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"removeObserver:name:object:",param_1,
                *(undefined8 *)PTR__UIApplicationWillEnterForegroundNotification_1014440e8,0);
  _objc_msgSend(uVar1,"removeObserver:name:object:",param_1,
                *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_1014440d0,0);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  removeObservers(param_1,(SEL)"removeObservers");
  local_28 = &objc::class_t::Amplitude;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::initializeApiKey_(ID param_1,SEL param_2,ID param_3)

{
  initializeApiKey_userId_setUserId_(param_1,(SEL)"initializeApiKey:userId:setUserId:",param_3,0,0);
  return;
}




/* Function Stack Size: 0x20 bytes */

void Amplitude::initializeApiKey_userId_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = _objc_retain(param_3);
  initializeApiKey_userId_setUserId_
            (param_1,(SEL)"initializeApiKey:userId:setUserId:",IVar1,param_4,1);
  _objc_release(IVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

bool Amplitude::runOnBackgroundQueue_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = _objc_retain(param_3,param_2,param_3,param_4);
  _objc_msgSend(&_OBJC_CLASS___NSOperationQueue,"currentQueue");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"name");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar4,"isEqualToString:",&cf_BACKGROUND);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (iVar1 == 0) {
    _objc_msgSend(*(undefined8 *)(param_1 + (long)_backgroundQueue),"addOperationWithBlock:",lVar2);
    _objc_release(lVar2);
  }
  else {
    (**(code **)(lVar2 + 0x10))(lVar2);
    _objc_release(lVar2);
  }
  return (bool)(iVar1 == 0);
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::logEvent_(ID param_1,SEL param_2,ID param_3)

{
  _objc_msgSend(param_1,"logEvent:withEventProperties:",param_3,0);
  return;
}




/* Function Stack Size: 0x20 bytes */

void Amplitude::logEvent_withEventProperties_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = _objc_retain(param_3);
  logEvent_withEventProperties_outOfSession_
            (param_1,(SEL)"logEvent:withEventProperties:outOfSession:",IVar1,param_4,0);
  _objc_release(IVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::truncateEventQueues(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  iVar2 = eventMaxCount(param_1,(SEL)"eventMaxCount");
  iVar1 = (int)iVar2 / 10;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  if (0x13 < iVar1) {
    iVar1 = 0x14;
  }
  iVar3 = _objc_msgSend(uVar4,"getEventCount");
  iVar2 = eventMaxCount(param_1,(SEL)"eventMaxCount");
  if ((int)iVar2 < iVar3) {
    uVar5 = _objc_msgSend(uVar4,"getNthEventId:",(long)iVar1);
    _objc_msgSend(uVar4,"removeEvents:",uVar5);
  }
  iVar3 = _objc_msgSend(uVar4,"getIdentifyCount");
  iVar2 = eventMaxCount(param_1,(SEL)"eventMaxCount");
  if ((int)iVar2 < iVar3) {
    uVar5 = _objc_msgSend(uVar4,"getNthIdentifyId:",(long)iVar1);
    _objc_msgSend(uVar4,"removeIdentifys:",uVar5);
  }
  _objc_release(uVar4);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::annotateEvent_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long_long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  cfstringStruct *pcStack_80;
  cfstringStruct *local_78;
  cfstringStruct *pcStack_70;
  long local_68;
  
  plVar12 = (long *)PTR____stack_chk_guard_101444218;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"setValue:forKey:",*(undefined8 *)(param_1 + (long)_userId),&cf_user_id);
  _objc_msgSend(uVar1,"setValue:forKey:",*(undefined8 *)(param_1 + (long)_deviceId),&cf_device_id);
  _objc_msgSend(uVar1,"setValue:forKey:",&cf_iOS,&cf_platform);
  lVar11 = (long)_deviceInfo;
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"appVersion");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_version_name);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"osName");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_os_name);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"osVersion");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_os_version);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"model");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_device_model);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"manufacturer");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_device_manufacturer);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"carrier");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_carrier);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"country");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_country);
  _objc_release(uVar2);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"language");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_language);
  _objc_release(uVar2);
  local_88 = &cf_name;
  pcStack_80 = &cf_version;
  local_78 = &cf_amplitude_ios;
  pcStack_70 = &cf_3_2_0;
  _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",&local_78,
                &local_88,2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar2,&cf_library);
  _objc_msgSend(&objc::class_t::AMPUtils,"generateUUID");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar3,&cf_uuid);
  _objc_release(uVar3);
  lVar4 = getNextSequenceNumber(param_1,(SEL)"getNextSequenceNumber");
  _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",lVar4);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setValue:forKey:",uVar3,&cf_sequence_number);
  _objc_release(uVar3);
  _objc_msgSend(uVar1,"valueForKey:",&cf_api_properties);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"advertiserID");
  lVar5 = _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    _objc_msgSend(uVar3,"setValue:forKey:",lVar5,&cf_ios_idfa);
  }
  _objc_msgSend(*(undefined8 *)(param_1 + lVar11),"vendorID");
  lVar11 = _objc_retainAutoreleasedReturnValue();
  if (lVar11 != 0) {
    _objc_msgSend(uVar3,"setValue:forKey:",lVar11,&cf_ios_idfv);
  }
  lVar13 = (long)_lastKnownLocation;
  if (*(long *)(param_1 + lVar13) != 0) {
    uVar6 = _objc_retain(*(undefined8 *)(param_1 + (long)_locationManager));
    _objc_sync_enter();
    _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar8 = _NSSelectorFromString(&cf_coordinate);
    _objc_msgSend(*(undefined8 *)(param_1 + lVar13),"methodSignatureForSelector:",uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSInvocation,"invocationWithMethodSignature:",uVar9);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar10,"setTarget:",*(undefined8 *)(param_1 + lVar13));
    _objc_msgSend(uVar10,"setSelector:",uVar8);
    _objc_msgSend(uVar10,"invoke");
    _objc_msgSend(uVar10,"getReturnValue:",&local_98);
    _objc_msgSend(local_98,&_OBJC_CLASS___NSNumber,"numberWithDouble:");
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar7,"setValue:forKey:",uVar8,&cf_lat);
    _objc_release(uVar8);
    _objc_msgSend(local_90,&_OBJC_CLASS___NSNumber,"numberWithDouble:");
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar7,"setValue:forKey:",uVar8,&cf_lng);
    _objc_release(uVar8);
    _objc_msgSend(uVar3,"setValue:forKey:",uVar7,&cf_location);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar7);
    _objc_sync_exit(uVar6);
    _objc_release(uVar6);
    plVar12 = (long *)PTR____stack_chk_guard_101444218;
  }
  _objc_release(lVar11);
  _objc_release(lVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*plVar12 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::logRevenue_(ID param_1,SEL param_2,ID param_3)

{
  _objc_msgSend(param_1,"logRevenue:quantity:price:",0,1,param_3);
  return;
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::uploadEventsWithDelay_(ID param_1,SEL param_2,int param_3)

{
  undefined *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  code *local_80;
  undefined *local_78;
  undefined8 *puStack_70;
  int local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  code *pcStack_40;
  undefined1 auStack_38 [8];
  
  if (*(char *)(param_1 + (long)_updateScheduled) == '\0') {
    *(undefined1 *)(param_1 + (long)_updateScheduled) = 1;
    local_60 = 0;
    local_50 = 0x42000000;
    local_4c = 0x30;
    local_48 = FUN_1011413cc;
    pcStack_40 = FUN_1011413d8;
    puStack_58 = &local_60;
    _objc_initWeak(auStack_38,param_1);
    local_90 = PTR___NSConcreteStackBlock_101444138;
    local_88 = 0xc2000000;
    uStack_84 = 0;
    local_80 = FUN_1011413e0;
    local_78 = &DAT_1018313c0;
    puStack_70 = &local_60;
    local_68 = param_3;
    _objc_msgSend(*(undefined8 *)(param_1 + (long)_backgroundQueue),"addOperationWithBlock:",
                  &local_90);
    __Block_object_dispose(&local_60,8);
    _objc_destroyWeak(auStack_38);
  }
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::uploadEventsInBackground(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + (long)_updateScheduled) = 0;
  _objc_msgSend(param_1,"uploadEvents");
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::uploadEvents(ID param_1,SEL param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + (long)_backoffUpload) == '\0') {
    iVar1 = eventUploadMaxBatchSize(param_1,(SEL)"eventUploadMaxBatchSize");
  }
  else {
    iVar1 = *(int *)(param_1 + (long)_backoffUploadBatchSize);
  }
  uploadEventsWithLimit_(param_1,(SEL)"uploadEventsWithLimit:",iVar1);
  return;
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::uploadEventsWithLimit_(ID param_1,SEL param_2,int param_3)

{
  undefined8 uVar1;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  int local_38;
  
  if (*(long *)(param_1 + (long)_apiKey) == 0) {
    _NSLog(&
           cf_ERROR_apiKeycannotbenilorempty_setapiKeywithinitializeApiKey_beforecallinguploadEvents_
          );
  }
  else {
    _objc_msgSend(&objc::class_t::Amplitude,"class");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    if (*(char *)(param_1 + (long)_updatingCurrently) == '\0') {
      *(undefined1 *)(param_1 + (long)_updatingCurrently) = 1;
      _objc_sync_exit(uVar1);
      _objc_release(uVar1);
      local_60 = PTR___NSConcreteStackBlock_101444138;
      local_58 = 0xc2000000;
      uStack_54 = 0;
      local_50 = FUN_10114165c;
      local_48 = &DAT_1018313f0;
      local_40 = _objc_retain(param_1);
      local_38 = param_3;
      _objc_msgSend(local_40,"runOnBackgroundQueue:",&local_60);
      uVar1 = local_40;
    }
    else {
      _objc_sync_exit(uVar1);
    }
    _objc_release(uVar1);
  }
  return;
}




/* Function Stack Size: 0x10 bytes */

long_long Amplitude::getNextSequenceNumber(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long_long lVar5;
  
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"getLongValue:",&cf_sequence_number);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar5 = 1;
  }
  else {
    lVar3 = _objc_msgSend(lVar2,"longLongValue");
    lVar5 = lVar3 + 1;
  }
  _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",lVar5);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"insertOrReplaceKeyLongValue:value:",&cf_sequence_number,uVar4);
  _objc_release(uVar4);
  _objc_release(lVar2);
  _objc_release(uVar1);
  return lVar5;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::enterForeground(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  _objc_msgSend(param_1,"updateLocation");
  currentTime(param_1,(SEL)"currentTime");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  dVar5 = (double)_objc_msgSend(uVar1,"timeIntervalSince1970");
  _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",(long)(dVar5 * 1000.0));
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = (long)_uploadTaskID;
  lVar4 = *(long *)PTR__UIBackgroundTaskInvalid_101444100;
  if (*(long *)(param_1 + lVar3) != lVar4) {
    _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"endBackgroundTask:",*(undefined8 *)(param_1 + lVar3));
    _objc_release(uVar1);
    *(long *)(param_1 + lVar3) = lVar4;
  }
  local_70 = PTR___NSConcreteStackBlock_101444138;
  local_68 = 0xc2000000;
  uStack_64 = 0;
  local_60 = FUN_101142d44;
  local_58 = &DAT_101831450;
  uVar1 = _objc_retain(param_1);
  local_50 = uVar1;
  local_48 = uVar2;
  uVar2 = _objc_retain(uVar2);
  _objc_msgSend(uVar1,"runOnBackgroundQueue:",&local_70);
  _objc_release(local_48);
  _objc_release(local_50);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::enterBackground(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  
  currentTime(param_1,(SEL)"currentTime");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar7 = (double)_objc_msgSend(uVar2,"timeIntervalSince1970");
  _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",(long)(dVar7 * 1000.0));
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar6 = (long)_uploadTaskID;
  if (*(long *)(param_1 + lVar6) != *(long *)PTR__UIBackgroundTaskInvalid_101444100) {
    _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"endBackgroundTask:",*(undefined8 *)(param_1 + lVar6));
    _objc_release(uVar2);
  }
  _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_101444138;
  local_68 = PTR___NSConcreteStackBlock_101444138;
  local_60 = 0xc2000000;
  uStack_5c = 0;
  local_58 = FUN_101142fe4;
  local_50 = &DAT_101831480;
  lVar4 = _objc_retain(param_1);
  local_48 = lVar4;
  uVar5 = _objc_msgSend(uVar2,"beginBackgroundTaskWithExpirationHandler:",&local_68);
  *(undefined8 *)(lVar4 + lVar6) = uVar5;
  _objc_release(uVar2);
  local_98 = puVar1;
  local_90 = 0xc2000000;
  uStack_8c = 0;
  local_88 = FUN_101143088;
  local_80 = &DAT_1018314b0;
  uVar2 = _objc_retain(lVar4);
  local_78 = uVar2;
  local_70 = uVar3;
  uVar3 = _objc_retain(uVar3);
  _objc_msgSend(uVar2,"runOnBackgroundQueue:",&local_98);
  _objc_release(local_70);
  _objc_release(local_78);
  _objc_release(local_48);
  _objc_release(uVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

bool Amplitude::startOrContinueSession_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  ID IVar3;
  long_long lVar4;
  
  IVar3 = _objc_retain(param_3);
  if (*(char *)(param_1 + (long)_inForeground) == '\0') {
    bVar1 = inSession(param_1,(SEL)"inSession");
    bVar2 = isWithinMinTimeBetweenSessions_(param_1,(SEL)"isWithinMinTimeBetweenSessions:",IVar3);
    if (bVar1 == 0) {
      if ((bVar2 != 0) &&
         (lVar4 = previousSessionId(param_1,(SEL)"previousSessionId"), lVar4 != 0xffffffffffffffff))
      {
        setSessionId_(param_1,(SEL)"setSessionId:",lVar4);
        goto LAB_1011431d4;
      }
    }
    else if (bVar2 != 0) goto LAB_1011431d4;
    startNewSession_(param_1,(SEL)"startNewSession:",IVar3);
    bVar1 = 1;
  }
  else {
LAB_1011431d4:
    refreshSessionTime_(param_1,(SEL)"refreshSessionTime:",IVar3);
    bVar1 = 0;
  }
  _objc_release(IVar3);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::startNewSession_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long_long lVar2;
  long lVar3;
  
  IVar1 = _objc_retain(param_3);
  lVar3 = (long)_trackingSessionEvents;
  if (*(char *)(param_1 + lVar3) != '\0') {
    sendSessionEvent_(param_1,(SEL)"sendSessionEvent:",0x101837cf8);
  }
  lVar2 = _objc_msgSend(IVar1,"longLongValue");
  setSessionId_(param_1,(SEL)"setSessionId:",lVar2);
  refreshSessionTime_(param_1,(SEL)"refreshSessionTime:",IVar1);
  if (*(char *)(param_1 + lVar3) != '\0') {
    sendSessionEvent_(param_1,(SEL)"sendSessionEvent:",0x101837cd8);
  }
  _objc_release(IVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::sendSessionEvent_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  IVar2 = _objc_retain(param_3);
  if (*(long *)(param_1 + (long)_apiKey) == 0) {
    _NSLog(&
           cf_ERROR_apiKeycannotbenilorempty_setapiKeywithinitializeApiKey_beforesendingsessionevent
          );
  }
  else {
    bVar1 = inSession(param_1,(SEL)"inSession");
    if (bVar1 != 0) {
      _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
      IVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(IVar3,"setValue:forKey:",IVar2,&cf_special);
      lastEventTime(param_1,(SEL)"lastEventTime");
      IVar4 = _objc_retainAutoreleasedReturnValue();
      logEvent_withEventProperties_withApiProperties_withUserProperties_withTimestamp_outOfSession_
                (param_1,(SEL)
                         "logEvent:withEventProperties:withApiProperties:withUserProperties:withTimestamp:outOfSession:"
                 ,IVar2,0,IVar3,0,IVar4,0);
      _objc_release(IVar4);
      _objc_release(IVar3);
    }
  }
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool Amplitude::inSession(ID param_1,SEL param_2)

{
  return (bool)(-1 < *(long *)(param_1 + (long)_sessionId));
}




/* Function Stack Size: 0x18 bytes */

bool Amplitude::isWithinMinTimeBetweenSessions_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long_long lVar5;
  
  uVar1 = _objc_retain(param_3);
  lastEventTime(param_1,(SEL)"lastEventTime");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend(param_3,"longLongValue");
  _objc_release(uVar1);
  lVar4 = _objc_msgSend(uVar2,"longLongValue");
  lVar5 = minTimeBetweenSessionsMillis(param_1,(SEL)"minTimeBetweenSessionsMillis");
  _objc_release(uVar2);
  return (bool)(lVar3 - lVar4 < (long)lVar5);
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setSessionId_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + (long)_sessionId) = param_3;
  setPreviousSessionId_(param_1,(SEL)"setPreviousSessionId:",param_3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::refreshSessionTime_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = _objc_retain(param_3);
  bVar1 = inSession(param_1,(SEL)"inSession");
  if (bVar1 != 0) {
    setLastEventTime_(param_1,(SEL)"setLastEventTime:",IVar2);
  }
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setPreviousSessionId_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithLongLong:");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"insertOrReplaceKeyLongValue:value:",&cf_previous_session_id,uVar1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

long_long Amplitude::previousSessionId(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  long_long lVar3;
  
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"getLongValue:",&cf_previous_session_id);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar2 == 0) {
    lVar3 = 0xffffffffffffffff;
  }
  else {
    lVar3 = _objc_msgSend(lVar2,"longLongValue");
  }
  _objc_release(lVar2);
  return lVar3;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setLastEventTime_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"insertOrReplaceKeyLongValue:value:",&cf_previous_session_time,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::lastEventTime(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"getLongValue:",&cf_previous_session_time);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::startSession(ID param_1,SEL param_2)

{
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::identify_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  lVar1 = _objc_retain(param_3);
  if (lVar1 != 0) {
    _objc_msgSend(lVar1,"userPropertyOperations");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    lVar3 = _objc_msgSend(uVar2,"count");
    _objc_release(uVar2);
    if (lVar3 != 0) {
      _objc_msgSend(lVar1,"userPropertyOperations");
      IVar4 = _objc_retainAutoreleasedReturnValue();
      logEvent_withEventProperties_withApiProperties_withUserProperties_withTimestamp_outOfSession_
                (param_1,(SEL)
                         "logEvent:withEventProperties:withApiProperties:withUserProperties:withTimestamp:outOfSession:"
                 ,(ID)&cf__identify,0,0,IVar4,0,0);
      _objc_release(IVar4);
    }
  }
  _objc_release(lVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setUserProperties_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  CLASS CVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  code *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  IVar2 = _objc_retain(param_3);
  if (IVar2 != 0) {
    CVar3 = _objc_msgSend(&_OBJC_CLASS___NSDictionary,"class");
    bVar1 = isArgument_validType_methodName_
                      (param_1,(SEL)"isArgument:validType:methodName:",IVar2,CVar3,0x101838598);
    if ((bVar1 != 0) && (lVar4 = _objc_msgSend(IVar2,"count"), lVar4 != 0)) {
      local_40 = _objc_msgSend(IVar2,"copy");
      local_60 = PTR___NSConcreteStackBlock_101444138;
      local_58 = 0xc2000000;
      uStack_54 = 0;
      local_50 = FUN_101143950;
      puStack_48 = &DAT_1018314e0;
      uVar5 = _objc_retain();
      local_38 = _objc_retain(param_1);
      _objc_msgSend(local_38,"runOnBackgroundQueue:",&local_60);
      _objc_release(local_38);
      _objc_release(local_40);
      _objc_release(uVar5);
    }
  }
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x1c bytes */

void Amplitude::setUserProperties_replace_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  _objc_msgSend(param_1,"setUserProperties:",param_3,param_4);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setUserId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  CLASS CVar3;
  undefined8 uVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  ID local_28;
  
  IVar2 = _objc_retain(param_3);
  if (IVar2 != 0) {
    CVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"class");
    bVar1 = isArgument_validType_methodName_
                      (param_1,(SEL)"isArgument:validType:methodName:",IVar2,CVar3,0x1018385b8);
    if (bVar1 == 0) goto LAB_101143c3c;
  }
  local_50 = PTR___NSConcreteStackBlock_101444138;
  local_48 = 0xc2000000;
  uStack_44 = 0;
  local_40 = FUN_101143c54;
  local_38 = &DAT_101831510;
  local_30 = _objc_retain(IVar2);
  uVar4 = _objc_retain(param_1);
  local_28 = param_1;
  _objc_msgSend(uVar4,"runOnBackgroundQueue:",&local_50);
  _objc_release(local_28);
  _objc_release(local_30);
LAB_101143c3c:
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::setOptOut_(ID param_1,SEL param_2,bool param_3)

{
  undefined4 in_w3;
  undefined *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  code *local_28;
  undefined *puStack_20;
  undefined1 local_18;
  
  local_38 = PTR___NSConcreteStackBlock_101444138;
  local_30 = 0xc0000000;
  uStack_2c = 0;
  local_28 = FUN_101143d88;
  puStack_20 = &DAT_101831540;
  local_18 = (undefined1)param_3;
  runOnBackgroundQueue_(param_1,(SEL)"runOnBackgroundQueue:",(ID)&local_38,in_w3);
  return;
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::setOffline_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_offline) = (char)param_3;
  if ((param_3 & 1) != 0) {
    return;
  }
  _objc_msgSend(param_1,"uploadEvents");
  return;
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::setEventUploadMaxBatchSize_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_eventUploadMaxBatchSize) = param_3;
  *(int *)(param_1 + (long)_backoffUploadBatchSize) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool Amplitude::optOut(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"getLongValue:",&cf_opt_out);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  bVar1 = _objc_msgSend(uVar3,"boolValue");
  _objc_release(uVar3);
  _objc_release(uVar2);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setDeviceId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  IVar2 = _objc_retain(param_3);
  bVar1 = isValidDeviceId_(param_1,(SEL)"isValidDeviceId:",IVar2);
  if (bVar1 != 0) {
    local_50 = PTR___NSConcreteStackBlock_101444138;
    local_48 = 0xc2000000;
    uStack_44 = 0;
    local_40 = FUN_101143fa4;
    local_38 = &DAT_101831560;
    local_30 = _objc_retain(IVar2);
    local_28 = _objc_retain(param_1);
    _objc_msgSend(local_28,"runOnBackgroundQueue:",&local_50);
    _objc_release(local_28);
    _objc_release(local_30);
  }
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::updateLocation(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + (long)_locationListeningEnabled) != '\0') {
    lVar5 = (long)_locationManager;
    _objc_msgSend(*(undefined8 *)(param_1 + lVar5),"location");
    lVar1 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_retain(*(undefined8 *)(param_1 + lVar5));
    _objc_sync_enter();
    if (lVar1 != 0) {
      lVar5 = (long)_lastKnownLocation;
      uVar3 = _objc_retain(lVar1);
      uVar4 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = uVar3;
      _objc_release(uVar4);
    }
    _objc_sync_exit(uVar2);
    _objc_release(uVar2);
    _objc_release(lVar1);
    return;
  }
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::enableLocationListening(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + (long)_locationListeningEnabled) = 1;
  _objc_msgSend(param_1,"updateLocation");
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::disableLocationListening(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + (long)_locationListeningEnabled) = 0;
  return;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::useAdvertisingIdForDeviceId(ID param_1,SEL param_2)

{
  *(undefined1 *)(param_1 + (long)_useAdvertisingIdForDeviceId) = 1;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::getDeviceId(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_deviceId));
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::initializeDeviceId(ID param_1,SEL param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  SEL extraout_x1;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_deviceId;
  lVar2 = *(long *)(param_1 + lVar7);
  if (lVar2 == 0) {
    _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"getValue:",&cf_device_id);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar4;
    _objc_release(uVar6);
    bVar1 = isValidDeviceId_(param_1,(SEL)"isValidDeviceId:",*(ID *)(param_1 + lVar7));
    if ((bVar1 & 1) == 0) {
      _getDeviceId(param_1,(SEL)"_getDeviceId");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      *(undefined8 *)(param_1 + lVar7) = uVar4;
      _objc_release(uVar6);
      _objc_msgSend(uVar3,"insertOrReplaceKeyValue:value:",&cf_device_id,uVar4);
    }
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + (long)_deviceId);
    param_2 = extraout_x1;
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar2,param_2);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::_getDeviceId(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  
  if (*(char *)(param_1 + (long)_useAdvertisingIdForDeviceId) != '\0') {
    _objc_msgSend(*(undefined8 *)(param_1 + (long)_deviceInfo),"advertiserID");
    lVar1 = _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) goto LAB_101144328;
  }
  lVar4 = (long)_deviceInfo;
  _objc_msgSend(*(undefined8 *)(param_1 + lVar4),"vendorID");
  lVar1 = _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    _objc_msgSend(*(undefined8 *)(param_1 + lVar4),"generateUUID");
    lVar1 = _objc_retainAutoreleasedReturnValue();
  }
LAB_101144328:
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"alloc");
  uVar2 = _objc_msgSend(uVar2,"initWithString:",lVar1);
  _objc_release(lVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

bool Amplitude::isValidDeviceId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  uint uVar2;
  ID IVar3;
  CLASS CVar4;
  ulong uVar5;
  
  IVar3 = _objc_retain(param_3);
  if (IVar3 != 0) {
    CVar4 = _objc_msgSend(&_OBJC_CLASS___NSString,"class");
    bVar1 = isArgument_validType_methodName_
                      (param_1,(SEL)"isArgument:validType:methodName:",IVar3,CVar4,0x1018385d8);
    if (bVar1 != 0) {
      uVar5 = _objc_msgSend(IVar3,"isEqualToString:",&cf_e3f5536a141811db40efd6400f1d0a4e);
      if ((uVar5 & 1) == 0) {
        uVar2 = _objc_msgSend(IVar3,"isEqualToString:",&cf_04bab7ee75b9a58d39b8dc54e8851084);
        uVar2 = uVar2 ^ 1;
        goto LAB_1011443fc;
      }
    }
  }
  uVar2 = 0;
LAB_1011443fc:
  _objc_release(IVar3);
  return uVar2;
}




/* Function Stack Size: 0x18 bytes */

ID Amplitude::replaceWithEmptyJSON_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  
  lVar1 = _objc_retain(param_3);
  if (lVar1 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
    IVar2 = _objc_retainAutoreleasedReturnValue();
  }
  else {
    IVar2 = _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  _objc_autorelease(IVar2);
  return IVar2;
}




/* Function Stack Size: 0x18 bytes */

ID Amplitude::truncate_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ID IVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 local_1e8;
  long local_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  long local_1a0;
  long *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long local_68;
  
  plVar11 = (long *)PTR____stack_chk_guard_101444218;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"class");
  iVar1 = _objc_msgSend(uVar2,"isKindOfClass:",uVar3);
  uVar3 = uVar2;
  if (iVar1 == 0) {
    uVar5 = _objc_msgSend(&_OBJC_CLASS___NSArray,"class");
    iVar1 = _objc_msgSend(uVar2,"isKindOfClass:",uVar5);
    if (iVar1 == 0) {
      uVar5 = _objc_msgSend(&_OBJC_CLASS___NSDictionary,"class");
      iVar1 = _objc_msgSend(uVar2,"isKindOfClass:",uVar5);
      if (iVar1 != 0) {
        _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar2,"copy");
        local_1b8 = 0;
        uStack_1b0 = 0;
        local_1c8 = 0;
        uStack_1c0 = 0;
        local_1d8 = (long *)0x0;
        uStack_1d0 = 0;
        local_1e8 = 0;
        local_1e0 = 0;
        uVar6 = _objc_retain();
        uVar4 = _objc_msgSend(uVar6,"countByEnumeratingWithState:objects:count:",&local_1e8,
                              auStack_168,0x10);
        if (uVar4 != 0) {
          lVar10 = *local_1d8;
          do {
            uVar12 = 0;
            do {
              if (*local_1d8 != lVar10) {
                _objc_enumerationMutation(uVar6);
              }
              uVar9 = *(undefined8 *)(local_1e0 + uVar12 * 8);
              uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"class");
              uVar7 = _objc_msgSend(uVar9,"isKindOfClass:",uVar3);
              if ((uVar7 & 1) == 0) {
                _objc_msgSend(uVar9,"description");
                uVar3 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar9,"class");
                _NSLog(&cf_WARNING_Non_stringpropertykey_received___coercingto__);
              }
              else {
                uVar3 = _objc_retain(uVar9);
              }
              _objc_msgSend(uVar6,"objectForKeyedSubscript:",uVar9);
              IVar8 = _objc_retainAutoreleasedReturnValue();
              truncate_(param_1,(SEL)"truncate:",IVar8);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar5,"setObject:forKeyedSubscript:",uVar9,uVar3);
              _objc_release(uVar9);
              _objc_release(IVar8);
              _objc_release(uVar3);
              uVar12 = uVar12 + 1;
            } while (uVar12 < uVar4);
            uVar4 = _objc_msgSend(uVar6,"countByEnumeratingWithState:objects:count:",&local_1e8,
                                  auStack_168,0x10);
          } while (uVar4 != 0);
        }
        _objc_release(uVar6);
        _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithDictionary:",uVar5);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar2);
        _objc_release(uVar6);
        _objc_release(uVar5);
        plVar11 = (long *)PTR____stack_chk_guard_101444218;
      }
    }
    else {
      _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"array");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"copy");
      local_178 = 0;
      uStack_170 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_198 = (long *)0x0;
      uStack_190 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      uVar6 = _objc_retain();
      uVar4 = _objc_msgSend(uVar6,"countByEnumeratingWithState:objects:count:",&local_1a8,auStack_e8
                            ,0x10);
      if (uVar4 != 0) {
        lVar10 = *local_198;
        do {
          uVar12 = 0;
          do {
            if (*local_198 != lVar10) {
              _objc_enumerationMutation(uVar6);
            }
            truncate_(param_1,(SEL)"truncate:",*(ID *)(local_1a0 + uVar12 * 8));
            uVar3 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar5,"addObject:",uVar3);
            _objc_release(uVar3);
            uVar12 = uVar12 + 1;
          } while (uVar12 < uVar4);
          uVar4 = _objc_msgSend(uVar6,"countByEnumeratingWithState:objects:count:",&local_1a8,
                                auStack_e8,0x10);
        } while (uVar4 != 0);
      }
      _objc_release(uVar6);
      _objc_msgSend(&_OBJC_CLASS___NSArray,"arrayWithArray:",uVar5);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar6);
      _objc_release(uVar5);
      plVar11 = (long *)PTR____stack_chk_guard_101444218;
    }
  }
  else {
    uVar4 = _objc_msgSend(uVar2,"length");
    if (0x400 < uVar4) {
      _objc_msgSend(uVar2,"substringToIndex:");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
    }
  }
  if (*plVar11 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar8 = _objc_autoreleaseReturnValue(uVar3);
  return IVar8;
}




/* Function Stack Size: 0x18 bytes */

ID Amplitude::makeJSONSerializable_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  float fVar13;
  undefined8 local_1e8;
  long local_1e0;
  long *local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  long local_1a0;
  long *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
  long local_68;
  
  plVar11 = (long *)PTR____stack_chk_guard_101444218;
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar2 = _objc_retain(param_3);
  if (lVar2 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSNull,"null");
    goto LAB_101144adc;
  }
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"class");
  uVar4 = _objc_msgSend(lVar2,"isKindOfClass:",uVar3);
  if ((uVar4 & 1) == 0) {
    uVar3 = _objc_msgSend(&_OBJC_CLASS___NSNull,"class");
    iVar1 = _objc_msgSend(lVar2,"isKindOfClass:",uVar3);
    if (iVar1 == 0) {
      uVar3 = _objc_msgSend(&_OBJC_CLASS___NSNumber,"class");
      iVar1 = _objc_msgSend(lVar2,"isKindOfClass:",uVar3);
      if (iVar1 == 0) {
        uVar3 = _objc_msgSend(&_OBJC_CLASS___NSDate,"class");
        iVar1 = _objc_msgSend(lVar2,"isKindOfClass:",uVar3);
        if (iVar1 == 0) {
          uVar3 = _objc_msgSend(&_OBJC_CLASS___NSArray,"class");
          iVar1 = _objc_msgSend(lVar2,"isKindOfClass:",uVar3);
          if (iVar1 == 0) {
            uVar3 = _objc_msgSend(&_OBJC_CLASS___NSDictionary,"class");
            iVar1 = _objc_msgSend(lVar2,"isKindOfClass:",uVar3);
            if (iVar1 == 0) {
              _objc_msgSend(lVar2,"description");
              uVar3 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(lVar2,"class");
              _NSLog(&cf_WARNING_Invalidpropertyvaluetype_received___coercingto__);
              goto LAB_101144ae4;
            }
            _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(lVar2,"copy");
            local_1b8 = 0;
            uStack_1b0 = 0;
            local_1c8 = 0;
            uStack_1c0 = 0;
            local_1d8 = (long *)0x0;
            uStack_1d0 = 0;
            local_1e8 = 0;
            local_1e0 = 0;
            uVar7 = _objc_retain();
            uVar4 = _objc_msgSend(uVar7,"countByEnumeratingWithState:objects:count:",&local_1e8,
                                  auStack_168,0x10);
            if (uVar4 != 0) {
              lVar10 = *local_1d8;
              do {
                uVar12 = 0;
                do {
                  if (*local_1d8 != lVar10) {
                    _objc_enumerationMutation(uVar7);
                  }
                  uVar9 = *(undefined8 *)(local_1e0 + uVar12 * 8);
                  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"class");
                  uVar8 = _objc_msgSend(uVar9,"isKindOfClass:",uVar3);
                  if ((uVar8 & 1) == 0) {
                    _objc_msgSend(uVar9,"description");
                    uVar3 = _objc_retainAutoreleasedReturnValue();
                    _objc_msgSend(uVar9,"class");
                    _NSLog(&cf_WARNING_Non_stringpropertykey_received___coercingto__);
                  }
                  else {
                    uVar3 = _objc_retain(uVar9);
                  }
                  _objc_msgSend(uVar7,"objectForKeyedSubscript:",uVar9);
                  IVar5 = _objc_retainAutoreleasedReturnValue();
                  makeJSONSerializable_(param_1,(SEL)"makeJSONSerializable:",IVar5);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar6,"setObject:forKeyedSubscript:",uVar9,uVar3);
                  _objc_release(uVar9);
                  _objc_release(IVar5);
                  _objc_release(uVar3);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar4);
                uVar4 = _objc_msgSend(uVar7,"countByEnumeratingWithState:objects:count:",&local_1e8,
                                      auStack_168,0x10);
              } while (uVar4 != 0);
            }
            _objc_release(uVar7);
            _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithDictionary:",uVar6);
            uVar3 = _objc_retainAutoreleasedReturnValue();
          }
          else {
            _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"array");
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(lVar2,"copy");
            local_178 = 0;
            uStack_170 = 0;
            local_188 = 0;
            uStack_180 = 0;
            local_198 = (long *)0x0;
            uStack_190 = 0;
            local_1a8 = 0;
            local_1a0 = 0;
            uVar7 = _objc_retain();
            uVar4 = _objc_msgSend(uVar7,"countByEnumeratingWithState:objects:count:",&local_1a8,
                                  auStack_e8,0x10);
            if (uVar4 != 0) {
              lVar10 = *local_198;
              do {
                uVar12 = 0;
                do {
                  if (*local_198 != lVar10) {
                    _objc_enumerationMutation(uVar7);
                  }
                  makeJSONSerializable_
                            (param_1,(SEL)"makeJSONSerializable:",*(ID *)(local_1a0 + uVar12 * 8));
                  uVar3 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar6,"addObject:",uVar3);
                  _objc_release(uVar3);
                  uVar12 = uVar12 + 1;
                } while (uVar12 < uVar4);
                uVar4 = _objc_msgSend(uVar7,"countByEnumeratingWithState:objects:count:",&local_1a8,
                                      auStack_e8,0x10);
              } while (uVar4 != 0);
            }
            _objc_release(uVar7);
            _objc_msgSend(&_OBJC_CLASS___NSArray,"arrayWithArray:",uVar6);
            uVar3 = _objc_retainAutoreleasedReturnValue();
          }
          _objc_release(uVar7);
          _objc_release(uVar6);
          plVar11 = (long *)PTR____stack_chk_guard_101444218;
          goto LAB_101144ae4;
        }
        _objc_msgSend(lVar2,"description");
      }
      else {
        fVar13 = (float)_objc_msgSend(lVar2,"floatValue");
        if ((!NAN(fVar13)) && (ABS(fVar13) != INFINITY)) goto LAB_101144ab0;
        _objc_msgSend(&_OBJC_CLASS___NSNull,"null");
      }
LAB_101144adc:
      uVar3 = _objc_retainAutoreleasedReturnValue();
      goto LAB_101144ae4;
    }
  }
LAB_101144ab0:
  uVar3 = _objc_retain(lVar2);
LAB_101144ae4:
  _objc_release(lVar2);
  if (*plVar11 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar5 = _objc_autoreleaseReturnValue(uVar3);
  return IVar5;
}




/* Function Stack Size: 0x18 bytes */

ID Amplitude::md5HexDigest_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *data;
  size_t sVar4;
  ID IVar5;
  long lVar6;
  uchar local_58 [16];
  long local_48;
  
  puVar1 = PTR____stack_chk_guard_101444218;
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retainAutorelease(param_3);
  data = (char *)_objc_msgSend(uVar3,"UTF8String");
  _objc_release(uVar2);
  sVar4 = _strlen(data);
  _CC_MD5(data,(CC_LONG)sVar4,local_58);
  _objc_msgSend(&_OBJC_CLASS___NSMutableString,"stringWithCapacity:",0x20);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar6 = 0;
  do {
    _objc_msgSend(uVar2,"appendFormat:",&cf__02x);
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x10);
  if (*(long *)puVar1 == local_48) {
    IVar5 = _objc_autoreleaseReturnValue(uVar2);
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* Function Stack Size: 0x18 bytes */

ID Amplitude::urlEncodeString_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)PTR__kCFAllocatorDefault_101444278;
  uVar1 = _objc_retain(param_3);
  uVar2 = _CFStringConvertNSStringEncodingToEncoding(4);
  pcVar3 = (cfstringStruct *)
           _CFURLCreateStringByAddingPercentEscapes
                     (uVar5,param_3,0,&cf____________________<>________,uVar2);
  _objc_release(uVar1);
  if (pcVar3 == (cfstringStruct *)0x0) {
    pcVar3 = &cf___;
    _objc_retain(&cf___);
  }
  IVar4 = _objc_autoreleaseReturnValue(pcVar3);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::currentTime(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::printEventsCount(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::AMPDatabaseHelper,"getDatabaseHelper");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"getEventCount");
  _NSLog(&cf_Eventscount__ld);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool Amplitude::upgradePrefs(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  
  _NSSearchPathForDirectoriesInDomains(0xd,1,1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"objectAtIndex:",0);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_msgSend(uVar4,"stringByAppendingPathComponent:",&cf_com_amplitude_plist);
  IVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"stringByAppendingPathComponent:",&cf_com_amplitude_archiveDict);
  IVar6 = _objc_retainAutoreleasedReturnValue();
  bVar1 = moveFileIfNotExists_to_
                    (param_1,(SEL)"moveFileIfNotExists:to:",IVar5,
                     *(ID *)(param_1 + (long)_propertyListPath));
  bVar2 = moveFileIfNotExists_to_
                    (param_1,(SEL)"moveFileIfNotExists:to:",IVar6,
                     *(ID *)(param_1 + (long)_eventsDataPath));
  _objc_release(IVar6);
  _objc_release(IVar5);
  _objc_release(uVar4);
  return bVar1 & bVar2;
}




/* Function Stack Size: 0x10 bytes */

bool Amplitude::savePropertyList(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_propertyList;
  uVar2 = _objc_retain(*(undefined8 *)(param_1 + lVar3));
  _objc_sync_enter();
  bVar1 = serializePList_toFile_
                    (param_1,(SEL)"serializePList:toFile:",*(ID *)(param_1 + lVar3),
                     *(ID *)(param_1 + (long)_propertyListPath));
  if ((bVar1 & 1) == 0) {
    _NSLog(&cf_Error_UnabletosavepropertyListtofile);
  }
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

ID Amplitude::deserializePList_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar3,"fileExistsAtPath:",uVar2);
  _objc_release(uVar3);
  if (iVar1 != 0) {
    _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"contentsAtPath:",uVar2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    if (lVar4 != 0) {
      local_48 = 0;
      _objc_msgSend(&_OBJC_CLASS___NSPropertyListSerialization,
                    "propertyListWithData:options:format:error:",lVar4,2,0,&local_48);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      lVar5 = _objc_retain(local_48);
      if (lVar5 == 0) {
        _objc_release(lVar4);
        goto LAB_1011455b8;
      }
      _NSLog(&cf_ERROR_propertyListdeserializationerror___);
      _objc_release(lVar5);
      _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      local_50 = 0;
      _objc_msgSend(uVar6,"removeItemAtPath:error:",uVar2,&local_50);
      lVar5 = _objc_retain(local_50);
      _objc_release(uVar6);
      if (lVar5 != 0) {
        _NSLog(&cf_ERROR_Can_tremovecorruptpropertyListfile___);
        _objc_release(lVar5);
      }
      _objc_release(uVar3);
    }
    _objc_release(lVar4);
  }
  uVar3 = 0;
LAB_1011455b8:
  _objc_release(uVar2);
  IVar7 = _objc_autoreleaseReturnValue(uVar3);
  return IVar7;
}




/* Function Stack Size: 0x20 bytes */

bool Amplitude::serializePList_toFile_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  cfstringStruct *pcVar7;
  bool bVar8;
  undefined8 local_38;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  local_38 = 0;
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSPropertyListSerialization,
                        "dataWithPropertyList:format:options:error:",uVar1,100,0,&local_38);
  _objc_release(uVar1);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  lVar5 = _objc_retain(local_38);
  if (lVar5 == 0) {
    if (lVar4 == 0) {
      pcVar7 = &cf_ERROR_propertyListDataisnil;
    }
    else {
      bVar8 = 1;
      uVar6 = _objc_msgSend(lVar4,"writeToFile:atomically:",uVar2,1);
      if ((uVar6 & 1) != 0) goto LAB_1011456c0;
      pcVar7 = &cf_ERROR_UnabletosavepropertyListtofile;
    }
  }
  else {
    pcVar7 = &cf_ERROR_UnabletoserializepropertyList___;
  }
  _NSLog(pcVar7);
  bVar8 = 0;
LAB_1011456c0:
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(uVar2);
  return bVar8;
}




/* Function Stack Size: 0x18 bytes */

ID Amplitude::unarchive_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar3,"fileExistsAtPath:",uVar2);
  _objc_release(uVar3);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSKeyedUnarchiver,"unarchiveObjectWithFile:",uVar2);
    uVar3 = _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x20 bytes */

bool Amplitude::archive_toFile_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_retain(param_3);
  bVar1 = _objc_msgSend(&_OBJC_CLASS___NSKeyedArchiver,"archiveRootObject:toFile:",uVar2,param_4);
  _objc_release(uVar2);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool Amplitude::moveFileIfNotExists_to_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  bool bVar7;
  undefined8 local_48;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend(uVar4,"fileExistsAtPath:",uVar3);
  if (((uVar5 & 1) == 0) && (iVar1 = _objc_msgSend(uVar4,"fileExistsAtPath:",uVar2), iVar1 != 0)) {
    local_48 = 0;
    iVar1 = _objc_msgSend(uVar4,"copyItemAtPath:toPath:error:",uVar2,uVar3,&local_48);
    uVar6 = _objc_retain(local_48);
    if (iVar1 == 0) {
      bVar7 = 0;
      goto LAB_101145a14;
    }
    _objc_msgSend(uVar4,"removeItemAtPath:error:",uVar2,0);
  }
  else {
    uVar6 = 0;
  }
  bVar7 = 1;
LAB_101145a14:
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return bVar7;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::apiKey(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_apiKey);
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::userId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_userId);
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::deviceId(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_deviceId);
}




/* Function Stack Size: 0x10 bytes */

int Amplitude::eventUploadThreshold(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_eventUploadThreshold);
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::setEventUploadThreshold_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_eventUploadThreshold) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

int Amplitude::eventUploadMaxBatchSize(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_eventUploadMaxBatchSize);
}




/* Function Stack Size: 0x10 bytes */

int Amplitude::eventMaxCount(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_eventMaxCount);
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::setEventMaxCount_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_eventMaxCount) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

int Amplitude::eventUploadPeriodSeconds(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_eventUploadPeriodSeconds);
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::setEventUploadPeriodSeconds_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_eventUploadPeriodSeconds) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

long_long Amplitude::minTimeBetweenSessionsMillis(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_minTimeBetweenSessionsMillis);
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setMinTimeBetweenSessionsMillis_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + (long)_minTimeBetweenSessionsMillis) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool Amplitude::trackingSessionEvents(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_trackingSessionEvents);
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::setTrackingSessionEvents_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_trackingSessionEvents) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::backgroundQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundQueue);
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setBackgroundQueue_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_backgroundQueue;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Amplitude::initializerQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_initializerQueue);
}




/* Function Stack Size: 0x18 bytes */

void Amplitude::setInitializerQueue_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_initializerQueue;
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar1;
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool Amplitude::initialized(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_initialized);
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::setInitialized_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_initialized) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool Amplitude::sslPinningEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_sslPinningEnabled);
}




/* Function Stack Size: 0x14 bytes */

void Amplitude::setSslPinningEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_sslPinningEnabled) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

long_long Amplitude::sessionId(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_sessionId);
}




/* Function Stack Size: 0x10 bytes */

void Amplitude::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_initializerQueue,0);
  _objc_storeStrong(param_1 + (long)_backgroundQueue,0);
  _objc_storeStrong(param_1 + (long)_deviceId,0);
  _objc_storeStrong(param_1 + (long)_userId,0);
  _objc_storeStrong(param_1 + (long)_apiKey,0);
  _objc_storeStrong(param_1 + (long)_locationManagerDelegate,0);
  _objc_storeStrong(param_1 + (long)_locationManager,0);
  _objc_storeStrong(param_1 + (long)_lastKnownLocation,0);
  _objc_storeStrong(param_1 + (long)_deviceInfo,0);
  _objc_storeStrong(param_1 + (long)_propertyListPath,0);
  _objc_storeStrong(param_1 + (long)_propertyList,0);
  _objc_storeStrong(param_1 + (long)_eventsDataPath,0);
  return;
}

