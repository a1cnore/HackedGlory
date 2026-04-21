// classes/ADJActivityHandler — 110 functions
#include "GameKindred.h"




/* Function Stack Size: 0x20 bytes */

ID ADJActivityHandler::initWithConfig_savedPreLaunch_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  dispatch_queue_t pdVar10;
  ID IVar11;
  cfstringStruct *pcVar12;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  code *local_78;
  undefined *local_70;
  undefined1 local_68;
  ID local_60;
  class_t *local_58;
  
  lVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  local_58 = &objc::class_t::ADJActivityHandler;
  local_60 = param_1;
  lVar4 = _objc_msgSendSuper2(&local_60,"init");
  if (lVar4 != 0) {
    if (lVar2 == 0) {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      pcVar12 = &cf_AdjustConfigmissing;
    }
    else {
      uVar5 = _objc_msgSend(lVar2,"isValid");
      if ((uVar5 & 1) != 0) {
        _objc_msgSend(lVar4,"setAdjustConfig:",lVar2);
        _objc_msgSend(lVar2,"delegate");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(lVar4,"setAdjustDelegate:",uVar6);
        _objc_release(uVar6);
        _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(lVar4,"setLogger:",uVar6);
        _objc_release(uVar6);
        _objc_msgSend(lVar4,"logger");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar6,"lockLogLevel");
        _objc_release(uVar6);
        _objc_msgSend(lVar2,"appToken");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(&objc::class_t::ADJActivityState,"saveAppToken:",uVar6);
        _objc_release(uVar6);
        _objc_msgSend(lVar4,"readAttribution");
        _objc_msgSend(lVar4,"readActivityState");
        uVar6 = _objc_msgSend(&objc::class_t::ADJInternalState,"alloc");
        uVar6 = _objc_msgSend(uVar6,"init");
        _objc_msgSend(lVar4,"setInternalState:",uVar6);
        _objc_release(uVar6);
        _objc_msgSend(uVar3,"enabled");
        lVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          _objc_msgSend(uVar3,"preLaunchActionsArray");
          lVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar7 == 0) {
            uVar6 = _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"alloc");
            uVar6 = _objc_msgSend(uVar6,"init");
            _objc_msgSend(uVar3,"setPreLaunchActionsArray:",uVar6);
            _objc_release(uVar6);
          }
          _objc_msgSend(uVar3,"enabled");
          uVar6 = _objc_retainAutoreleasedReturnValue();
          uVar1 = _objc_msgSend(uVar6,"boolValue");
          _objc_release(uVar6);
          _objc_msgSend(uVar3,"preLaunchActionsArray");
          uVar6 = _objc_retainAutoreleasedReturnValue();
          local_88 = PTR___NSConcreteStackBlock_101444138;
          local_80 = 0xc0000000;
          uStack_7c = 0;
          local_78 = FUN_10110e1e4;
          local_70 = &DAT_1018301f0;
          local_68 = uVar1;
          uVar8 = _objc_retainBlock(&local_88);
          _objc_msgSend(uVar6,"addObject:",uVar8);
          _objc_release(uVar8);
          _objc_release(uVar6);
        }
        _objc_msgSend(lVar4,"internalState");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar3,"enabled");
        lVar7 = _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          _objc_msgSend(uVar6,"setEnabled:",1);
        }
        else {
          _objc_msgSend(uVar3,"enabled");
          uVar8 = _objc_retainAutoreleasedReturnValue();
          uVar9 = _objc_msgSend(uVar8,"boolValue");
          _objc_msgSend(uVar6,"setEnabled:",uVar9);
          _objc_release(uVar8);
        }
        _objc_release(lVar7);
        _objc_release(uVar6);
        _objc_msgSend(lVar4,"internalState");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        uVar8 = _objc_msgSend(uVar3,"offline");
        _objc_msgSend(uVar6,"setOffline:",uVar8);
        _objc_release(uVar6);
        _objc_msgSend(lVar4,"internalState");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar6,"setBackground:",1);
        _objc_release(uVar6);
        _objc_msgSend(lVar4,"internalState");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar6,"setDelayStart:",0);
        _objc_release(uVar6);
        _objc_msgSend(lVar4,"activityState");
        lVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_msgSend(lVar4,"internalState");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        if (lVar7 == 0) {
          _objc_msgSend(uVar6,"setUpdatePackages:",0);
        }
        else {
          _objc_msgSend(lVar4,"activityState");
          uVar8 = _objc_retainAutoreleasedReturnValue();
          uVar9 = _objc_msgSend(uVar8,"updatePackages");
          _objc_msgSend(uVar6,"setUpdatePackages:",uVar9);
          _objc_release(uVar8);
        }
        _objc_release(uVar6);
        _objc_msgSend(lVar4,"activityState");
        lVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_msgSend(lVar4,"internalState");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar6,"setFirstLaunch:",lVar7 == 0);
        _objc_release(uVar6);
        _objc_msgSend(lVar4,"internalState");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar6,"setSessionResponseProcessed:",0);
        _objc_release(uVar6);
        _objc_msgSend(uVar3,"basePath");
        lVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          _objc_msgSend(uVar3,"basePath");
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(lVar4,"setBasePath:",uVar6);
          _objc_release(uVar6);
        }
        pdVar10 = _dispatch_queue_create("io.adjust.ActivityQueue",(dispatch_queue_attr_t)0x0);
        _objc_msgSend(lVar4,"setInternalQueue:",pdVar10);
        _objc_release(pdVar10);
        _objc_msgSend(lVar4,"internalQueue");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        local_b0 = PTR___NSConcreteStackBlock_101444138;
        local_a8 = 0xc2000000;
        uStack_a4 = 0;
        local_a0 = FUN_10110e200;
        local_98 = &DAT_101830210;
        local_90 = _objc_retain(uVar3);
        _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar6,lVar4,
                      &local_b0);
        _objc_release(uVar6);
        _objc_msgSend(lVar4,"activityState");
        lVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar7 != 0) {
          _objc_msgSend(&objc::class_t::ADJUserDefaults,"getPushToken");
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(lVar4,"setDeviceToken:",uVar6);
          _objc_release(uVar6);
        }
        _objc_msgSend(lVar4,"addNotificationObserver");
        IVar11 = _objc_retain(lVar4);
        _objc_release(local_90);
        goto LAB_10110de24;
      }
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      pcVar12 = &cf_AdjustConfignotinitializedcorrectly;
    }
    _objc_msgSend(uVar6,"error:",pcVar12);
    _objc_release(uVar6);
  }
  IVar11 = 0;
LAB_10110de24:
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  return IVar11;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::applicationDidBecomeActive(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalState(param_1,(SEL)"internalState");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setBackground:",0);
  _objc_release(uVar1);
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_101830260);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::applicationWillResignActive(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalState(param_1,(SEL)"internalState");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setBackground:",1);
  _objc_release(uVar1);
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_1018302a0);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::trackEvent_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10110e600;
  local_50 = &DAT_1018302c0;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::finishedTracking_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  IVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(&objc::class_t::ADJSessionResponseData,"class");
  iVar1 = _objc_msgSend(IVar2,"isKindOfClass:",uVar3);
  if (iVar1 == 0) {
    uVar3 = _objc_msgSend(&objc::class_t::ADJSdkClickResponseData,"class");
    iVar1 = _objc_msgSend(IVar2,"isKindOfClass:",uVar3);
    if (iVar1 == 0) {
      uVar3 = _objc_msgSend(&objc::class_t::ADJEventResponseData,"class");
      iVar1 = _objc_msgSend(IVar2,"isKindOfClass:",uVar3);
      if (iVar1 != 0) {
        launchEventResponseTasks_(param_1,(SEL)"launchEventResponseTasks:",IVar2);
      }
      goto LAB_10110e768;
    }
    attributionHandler(param_1,(SEL)"attributionHandler");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    pcVar4 = "checkSdkClickResponse:";
  }
  else {
    attributionHandler(param_1,(SEL)"attributionHandler");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    pcVar4 = "checkSessionResponse:";
  }
  _objc_msgSend(uVar3,pcVar4,IVar2);
  _objc_release(uVar3);
LAB_10110e768:
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::launchEventResponseTasks_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10110e88c;
  local_50 = &DAT_1018302f0;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::launchSessionResponseTasks_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10110e98c;
  local_50 = &DAT_101830320;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::launchSdkClickResponseTasks_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10110ea8c;
  local_50 = &DAT_101830350;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::launchAttributionResponseTasks_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10110eb8c;
  local_50 = &DAT_101830380;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityHandler::setEnabled_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  code *local_48;
  undefined *local_40;
  undefined1 local_38;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_101444138;
  local_50 = 0xc0000000;
  uStack_4c = 0;
  local_48 = FUN_10110ec5c;
  local_40 = &DAT_1018303b0;
  local_38 = (undefined1)param_3;
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,&local_58);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityHandler::setOfflineMode_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  code *local_48;
  undefined *local_40;
  undefined1 local_38;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_101444138;
  local_50 = 0xc0000000;
  uStack_4c = 0;
  local_48 = FUN_10110ed1c;
  local_40 = &DAT_1018303d0;
  local_38 = (undefined1)param_3;
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,&local_58);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJActivityHandler::isEnabled(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"isEnabledI:",param_1);
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::adid(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  activityState(param_1,(SEL)"activityState");
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    activityState(param_1,(SEL)"activityState");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"adid");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::appWillOpenUrl_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10110eea8;
  local_50 = &DAT_1018303f0;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setDeviceToken_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10110efa8;
  local_50 = &DAT_101830420;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityHandler::setAskingAttribution_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  code *local_48;
  undefined *local_40;
  undefined1 local_38;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_101444138;
  local_50 = 0xc0000000;
  uStack_4c = 0;
  local_48 = FUN_10110f838;
  local_40 = &DAT_1018304e0;
  local_38 = (undefined1)param_3;
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,&local_58);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::foregroundTimerFired(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_101830520);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::backgroundTimerFired(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_101830560);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::sendFirstPackages(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_1018305a0);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::removeSessionCallbackParameter_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10110fd88;
  local_50 = &DAT_101830620;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::removeSessionPartnerParameter_(ID param_1,SEL param_2,ID param_3)

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
  local_58 = FUN_10110fe88;
  local_50 = &DAT_101830650;
  local_48 = uVar1;
  uVar1 = _objc_retain(uVar1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar2,param_1,&local_68);
  _objc_release(uVar2);
  _objc_release(local_48);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::resetSessionCallbackParameters(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_1018306a0);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::resetSessionPartnerParameters(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  internalQueue(param_1,(SEL)"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,param_1,
                &PTR___NSConcreteGlobalBlock_1018306e0);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::getBasePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_basePath));
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::teardown(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"verbose:",&cf_ADJActivityHandlerteardown);
  _objc_release(uVar1);
  removeNotificationObserver(param_1,(SEL)"removeNotificationObserver");
  backgroundTimer(param_1,(SEL)"backgroundTimer");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    backgroundTimer(param_1,(SEL)"backgroundTimer");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"cancel");
    _objc_release(uVar1);
  }
  foregroundTimer(param_1,(SEL)"foregroundTimer");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    foregroundTimer(param_1,(SEL)"foregroundTimer");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"cancel");
    _objc_release(uVar1);
  }
  delayStartTimer(param_1,(SEL)"delayStartTimer");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    delayStartTimer(param_1,(SEL)"delayStartTimer");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"cancel");
    _objc_release(uVar1);
  }
  attributionHandler(param_1,(SEL)"attributionHandler");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    attributionHandler(param_1,(SEL)"attributionHandler");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"teardown");
    _objc_release(uVar1);
  }
  packageHandler(param_1,(SEL)"packageHandler");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    packageHandler(param_1,(SEL)"packageHandler");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"teardown");
    _objc_release(uVar1);
  }
  sdkClickHandler(param_1,(SEL)"sdkClickHandler");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    sdkClickHandler(param_1,(SEL)"sdkClickHandler");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"teardown");
    _objc_release(uVar1);
  }
  teardownActivityStateS(param_1,(SEL)"teardownActivityStateS");
  teardownAttributionS(param_1,(SEL)"teardownAttributionS");
  teardownAllSessionParametersS(param_1,(SEL)"teardownAllSessionParametersS");
  _objc_msgSend(&objc::class_t::ADJUtil,"teardown");
  setInternalQueue_(param_1,(SEL)"setInternalQueue:",0);
  setPackageHandler_(param_1,(SEL)"setPackageHandler:",0);
  setAttributionHandler_(param_1,(SEL)"setAttributionHandler:",0);
  setSdkClickHandler_(param_1,(SEL)"setSdkClickHandler:",0);
  setForegroundTimer_(param_1,(SEL)"setForegroundTimer:",0);
  setBackgroundTimer_(param_1,(SEL)"setBackgroundTimer:",0);
  setAdjustDelegate_(param_1,(SEL)"setAdjustDelegate:",0);
  setAdjustConfig_(param_1,(SEL)"setAdjustConfig:",0);
  setInternalState_(param_1,(SEL)"setInternalState:",0);
  setDeviceInfo_(param_1,(SEL)"setDeviceInfo:",0);
  setDelayStartTimer_(param_1,(SEL)"setDelayStartTimer:",0);
  setLogger_(param_1,(SEL)"setLogger:",0);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::deleteState(ID param_1,SEL param_2)

{
  _objc_msgSend(&objc::class_t::ADJActivityHandler,"deleteActivityState");
  _objc_msgSend(&objc::class_t::ADJActivityHandler,"deleteAttribution");
  _objc_msgSend(&objc::class_t::ADJActivityHandler,"deleteSessionCallbackParameter");
  _objc_msgSend(&objc::class_t::ADJActivityHandler,"deleteSessionPartnerParameter");
  _objc_msgSend(&objc::class_t::ADJUserDefaults,"clearAdjustStuff");
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::deleteActivityState(ID param_1,SEL param_2)

{
  _objc_msgSend(&objc::class_t::ADJUtil,"deleteFileWithName:",&cf_AdjustIoActivityState);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::deleteAttribution(ID param_1,SEL param_2)

{
  _objc_msgSend(&objc::class_t::ADJUtil,"deleteFileWithName:",&cf_AdjustIoAttribution);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::deleteSessionCallbackParameter(ID param_1,SEL param_2)

{
  _objc_msgSend(&objc::class_t::ADJUtil,"deleteFileWithName:",&cf_AdjustSessionCallbackParameters);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::deleteSessionPartnerParameter(ID param_1,SEL param_2)

{
  _objc_msgSend(&objc::class_t::ADJUtil,"deleteFileWithName:",&cf_AdjustSessionPartnerParameters);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJActivityHandler::initI_preLaunchActionsArray_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  undefined *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  code *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 uStack_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  DAT_101ea5fc0 = _objc_msgSend(&objc::class_t::ADJAdjustFactory,"sessionInterval");
  DAT_101ea5fc8 = _objc_msgSend(&objc::class_t::ADJAdjustFactory,"subsessionInterval");
  DAT_101ea5fd0 = _objc_msgSend(&objc::class_t::ADJAdjustFactory,"timerStart");
  DAT_101ea5fd8 = _objc_msgSend(&objc::class_t::ADJAdjustFactory,"timerInterval");
  DAT_101ea5fe0 = _objc_msgSend(&objc::class_t::ADJAdjustFactory,"timerInterval");
  _objc_msgSend(uVar2,"adjustConfig");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"sdkPrefix");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJDeviceInfo,"deviceInfoWithSdkPrefix:",uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setDeviceInfo:",uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  uVar4 = _objc_msgSend(&objc::class_t::ADJSessionParameters,"alloc");
  uVar4 = _objc_msgSend(uVar4,"init");
  _objc_msgSend(uVar2,"setSessionParameters:",uVar4);
  _objc_release(uVar4);
  _objc_msgSend(uVar2,"readSessionCallbackParametersI:",uVar2);
  _objc_msgSend(uVar2,"readSessionPartnerParametersI:",uVar2);
  _objc_msgSend(uVar2,"adjustConfig");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar4,"eventBufferingEnabled");
  _objc_release(uVar4);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"info:",&cf_Eventbufferingisenabled);
    _objc_release(uVar4);
  }
  _objc_msgSend(uVar2,"adjustConfig");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"defaultTracker");
  lVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  if (lVar7 != 0) {
    _objc_msgSend(uVar2,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"adjustConfig");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"defaultTracker");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"info:",&cf_Defaulttracker_____);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_msgSend(uVar2,"deviceTokenData");
  lVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 == 0) {
    _objc_msgSend(uVar2,"activityState");
    lVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      _objc_msgSend(&objc::class_t::ADJUserDefaults,"getPushToken");
      goto LAB_101110838;
    }
  }
  else {
    _objc_msgSend(uVar2,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"deviceTokenData");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"info:",&cf_Pushtoken_____);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_msgSend(uVar2,"activityState");
    lVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar7 != 0) {
      _objc_msgSend(uVar2,"deviceTokenData");
LAB_101110838:
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"setDeviceToken:",uVar4);
      _objc_release(uVar4);
    }
  }
  local_98 = PTR___NSConcreteStackBlock_101444138;
  local_90 = 0xc2000000;
  uStack_8c = 0;
  local_88 = FUN_101110f3c;
  local_80 = &DAT_101830700;
  uVar2 = _objc_retain(uVar2);
  local_78 = uVar2;
  _objc_msgSend(uVar2,"internalQueue");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(DAT_101ea5fd0,DAT_101ea5fd8,&objc::class_t::ADJTimerCycle,
                "timerWithBlock:queue:startTime:intervalTime:name:",&local_98,uVar4,
                &cf_Foregroundtimer);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setForegroundTimer:",uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_msgSend(uVar2,"adjustConfig");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar4,"sendInBackground");
  _objc_release(uVar4);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"info:",&cf_Sendinbackgroundconfigured);
    _objc_release(uVar4);
    local_c0 = PTR___NSConcreteStackBlock_101444138;
    local_b8 = 0xc2000000;
    uStack_b4 = 0;
    local_b0 = FUN_101110f5c;
    local_a8 = &DAT_101830730;
    uVar4 = _objc_retain(uVar2);
    local_a0 = uVar4;
    _objc_msgSend(uVar4,"internalQueue");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJTimerOnce,"timerWithBlock:queue:name:",&local_c0,uVar5,
                  &cf_Backgroundtimer);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"setBackgroundTimer:",uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(local_a0);
  }
  _objc_msgSend(uVar2,"activityState");
  lVar7 = _objc_retainAutoreleasedReturnValue();
  if (lVar7 == 0) {
    _objc_msgSend(uVar2,"adjustConfig");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    dVar10 = (double)_objc_msgSend(uVar4,"delayStart");
    _objc_release(uVar4);
    _objc_release(0);
    if (dVar10 <= 0.0) goto LAB_101110bac;
    _objc_msgSend(uVar2,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"info:",&cf_Delaystartconfigured);
    _objc_release(uVar4);
    _objc_msgSend(uVar2,"internalState");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"setDelayStart:",1);
    _objc_release(uVar4);
    local_e8 = PTR___NSConcreteStackBlock_101444138;
    local_e0 = 0xc2000000;
    uStack_dc = 0;
    local_d8 = FUN_101110f7c;
    local_d0 = &DAT_101830760;
    lVar7 = _objc_retain(uVar2);
    local_c8 = lVar7;
    _objc_msgSend(lVar7,"internalQueue");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJTimerOnce,"timerWithBlock:queue:name:",&local_e8,uVar4,
                  &cf_DelayStarttimer);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar7,"setDelayStartTimer:",uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
    lVar7 = local_c8;
  }
  _objc_release(lVar7);
LAB_101110bac:
  _objc_msgSend(uVar2,"adjustConfig");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"updateUrlSessionConfiguration:",uVar4);
  _objc_release(uVar4);
  uVar4 = _objc_msgSend(uVar2,"toSendI:sdkClickHandlerOnly:",uVar2,0);
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"packageHandlerForActivityHandler:startsSending:",
                uVar2,uVar4);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setPackageHandler:",uVar4);
  _objc_release(uVar4);
  iVar1 = _objc_msgSend(uVar2,"itHasToUpdatePackagesI:",uVar2);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"updatePackagesI:",uVar2);
  }
  _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar11 = _objc_msgSend(uVar4,"timeIntervalSince1970");
  _objc_release(uVar4);
  uVar4 = _objc_msgSend(&objc::class_t::ADJPackageBuilder,"alloc");
  _objc_msgSend(uVar2,"deviceInfo");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"activityState");
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"adjustConfig");
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"sessionParameters");
  uVar9 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend(uVar11,uVar4,
                        "initWithDeviceInfo:activityState:config:sessionParameters:createdAt:",uVar5
                        ,uVar6,uVar8,uVar9);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_msgSend(uVar4,"buildAttributionPackage");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar6 = _objc_msgSend(uVar2,"toSendI:sdkClickHandlerOnly:",uVar2,0);
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,
                "attributionHandlerForActivityHandler:withAttributionPackage:startsSending:",uVar2,
                uVar5,uVar6);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setAttributionHandler:",uVar6);
  _objc_release(uVar6);
  uVar6 = _objc_msgSend(uVar2,"toSendI:sdkClickHandlerOnly:",uVar2,1);
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"sdkClickHandlerForActivityHandler:startsSending:",
                uVar2,uVar6);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setSdkClickHandler:",uVar6);
  _objc_release(uVar6);
  _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar6,"adjSetIad:triesV3Left:",uVar2,2);
  _objc_release(uVar6);
  _objc_msgSend(uVar2,"preLaunchActionsI:preLaunchActionsArray:",uVar2,uVar3);
  _objc_release(uVar3);
  local_110 = PTR___NSConcreteStackBlock_101444138;
  local_108 = 0xc2000000;
  uStack_104 = 0;
  local_100 = FUN_101110f9c;
  local_f8 = &DAT_1018307b0;
  local_f0 = _objc_retain(param_1);
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInMainThreadWithInactive:",&local_110);
  _objc_release(local_f0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(local_78);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::startI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(uVar2,"activityState");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_release(0);
  }
  else {
    _objc_msgSend(uVar2,"activityState");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar4,"enabled");
    _objc_release(uVar4);
    _objc_release(lVar3);
    if (iVar1 == 0) goto LAB_1011111ec;
  }
  _objc_msgSend(uVar2,"updateHandlersStatusAndSendI:",uVar2);
  _objc_msgSend(uVar2,"processSessionI:",uVar2);
  _objc_msgSend(uVar2,"checkAttributionStateI:",uVar2);
LAB_1011111ec:
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::processSessionI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  dVar7 = (double)_objc_msgSend(uVar3,"timeIntervalSince1970");
  _objc_release(uVar3);
  _objc_msgSend(uVar2,"activityState");
  lVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) {
    uVar3 = _objc_msgSend(&objc::class_t::ADJActivityState,"alloc");
    uVar3 = _objc_msgSend(uVar3,"init");
    _objc_msgSend(uVar2,"setActivityState:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJUserDefaults,"getPushToken");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJUtil,"convertDeviceToken:",uVar6);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"setDeviceToken:",uVar5);
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"internalState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar3,"isEnabled");
    _objc_release(uVar3);
    if (iVar1 != 0) {
      _objc_msgSend(uVar2,"activityState");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar3,"setSessionCount:",1);
      _objc_release(uVar3);
      _objc_msgSend(dVar7,uVar2,"transferSessionPackageI:now:",uVar2);
    }
    _objc_msgSend(uVar2,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(dVar7,uVar3,"resetSessionAttributes:");
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"internalState");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend(uVar6,"isEnabled");
    _objc_msgSend(uVar3,"setEnabled:",uVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"internalState");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend(uVar6,"itHasToUpdatePackages");
    _objc_msgSend(uVar3,"setUpdatePackages:",uVar5);
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"writeActivityStateI:",uVar2);
    _objc_msgSend(&objc::class_t::ADJUserDefaults,"removePushToken");
    goto LAB_101111734;
  }
  _objc_msgSend(uVar2,"activityState");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  dVar8 = (double)_objc_msgSend(uVar3,"lastActivity");
  dVar8 = dVar7 - dVar8;
  _objc_release(uVar3);
  if (0.0 <= dVar8) {
    if (DAT_101ea5fc0 < dVar8) {
      _objc_msgSend(dVar7,param_1,"trackNewSessionI:withActivityHandler:",uVar2);
      goto LAB_101111734;
    }
    if (dVar8 <= DAT_101ea5fc8) {
      _objc_msgSend(uVar2,"logger");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar3,"verbose:",&cf_Timespansincelastactivitytooshortforanewsubsession);
      _objc_release(uVar3);
      goto LAB_101111734;
    }
    _objc_msgSend(uVar2,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar3,"subsessionCount");
    _objc_msgSend(uVar3,"setSubsessionCount:",iVar1 + 1);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    dVar9 = (double)_objc_msgSend(uVar3,"sessionLength");
    _objc_msgSend(dVar8 + dVar9,uVar3,"setSessionLength:");
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(dVar7,uVar3,"setLastActivity:");
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"logger");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"subsessionCount");
    _objc_msgSend(uVar2,"activityState");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar6,"sessionCount");
    _objc_msgSend(uVar5,"verbose:",&cf_Startedsubsession_dofsession_d);
    _objc_release(uVar6);
    _objc_release(uVar3);
  }
  else {
    _objc_msgSend(uVar2,"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"error:",&cf_Timetravel_);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"activityState");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(dVar7,uVar5,"setLastActivity:");
  }
  _objc_release(uVar5);
  _objc_msgSend(uVar2,"writeActivityStateI:",uVar2);
LAB_101111734:
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::checkAttributionStateI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(uVar2,"checkActivityStateI:",uVar2);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"internalState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar3,"isFirstLaunch");
    _objc_release(uVar3);
    if (iVar1 != 0) {
      _objc_msgSend(uVar2,"internalState");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar4 = _objc_msgSend(uVar3,"hasSessionResponseNotBeenProcessed");
      _objc_release(uVar3);
      if ((uVar4 & 1) != 0) goto LAB_101111c04;
    }
    _objc_msgSend(uVar2,"attribution");
    lVar5 = _objc_retainAutoreleasedReturnValue();
    if (lVar5 == 0) {
      _objc_release(0);
    }
    else {
      _objc_msgSend(uVar2,"activityState");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      iVar1 = _objc_msgSend(uVar3,"askingAttribution");
      _objc_release(uVar3);
      _objc_release(lVar5);
      if (iVar1 == 0) goto LAB_101111c04;
    }
    _objc_msgSend(uVar2,"attributionHandler");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"getAttribution");
    _objc_release(uVar3);
  }
LAB_101111c04:
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::endI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(uVar2,"toSendI:",uVar2);
  if ((uVar3 & 1) == 0) {
    _objc_msgSend(uVar2,"pauseSendingI:",uVar2);
  }
  _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend(uVar4,"timeIntervalSince1970");
  _objc_release(uVar4);
  iVar1 = _objc_msgSend(uVar5,uVar2,"updateActivityStateI:now:",uVar2);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"writeActivityStateI:",uVar2);
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJActivityHandler::eventI_event_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  iVar1 = _objc_msgSend(uVar2,"isEnabledI:",uVar2);
  if ((iVar1 != 0) && (iVar1 = _objc_msgSend(uVar2,"checkEventI:event:",uVar2,uVar3), iVar1 != 0)) {
    _objc_msgSend(uVar3,"transactionId");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar2,"checkTransactionIdI:transactionId:",uVar2,uVar4);
    _objc_release(uVar4);
    if (iVar1 != 0) {
      _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar10 = _objc_msgSend(uVar4,"timeIntervalSince1970");
      _objc_release(uVar4);
      _objc_msgSend(uVar2,"activityState");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      iVar1 = _objc_msgSend(uVar4,"eventCount");
      _objc_msgSend(uVar4,"setEventCount:",iVar1 + 1);
      _objc_release(uVar4);
      _objc_msgSend(uVar10,uVar2,"updateActivityStateI:now:",uVar2);
      uVar4 = _objc_msgSend(&objc::class_t::ADJPackageBuilder,"alloc");
      _objc_msgSend(uVar2,"deviceInfo");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"activityState");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"adjustConfig");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"sessionParameters");
      uVar8 = _objc_retainAutoreleasedReturnValue();
      uVar4 = _objc_msgSend(uVar10,uVar4,
                            "initWithDeviceInfo:activityState:config:sessionParameters:createdAt:",
                            uVar5,uVar6,uVar7,uVar8);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_msgSend(uVar2,"internalState");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar6 = _objc_msgSend(uVar5,"isInDelayedStart");
      _objc_msgSend(uVar4,"buildEventPackage:isInDelay:",uVar3,uVar6);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      _objc_msgSend(uVar2,"packageHandler");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,"addPackage:",uVar6);
      _objc_release(uVar5);
      _objc_msgSend(uVar2,"adjustConfig");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      iVar1 = _objc_msgSend(uVar5,"eventBufferingEnabled");
      _objc_release(uVar5);
      if (iVar1 == 0) {
        _objc_msgSend(uVar2,"packageHandler");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,"sendFirstPackage");
      }
      else {
        _objc_msgSend(uVar2,"logger");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar6,"suffix");
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,"info:",&cf_Bufferedevent__);
        _objc_release(uVar7);
      }
      _objc_release(uVar5);
      _objc_msgSend(uVar2,"adjustConfig");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar9 = _objc_msgSend(uVar5,"sendInBackground");
      if ((uVar9 & 1) == 0) {
        _objc_release(uVar5);
      }
      else {
        _objc_msgSend(uVar2,"internalState");
        uVar7 = _objc_retainAutoreleasedReturnValue();
        iVar1 = _objc_msgSend(uVar7,"isInBackground");
        _objc_release(uVar7);
        _objc_release(uVar5);
        if (iVar1 != 0) {
          _objc_msgSend(uVar2,"startBackgroundTimerI:",uVar2);
        }
      }
      _objc_msgSend(uVar2,"writeActivityStateI:",uVar2);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJActivityHandler::updateAdidI_adid_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = _objc_retain(param_3);
  lVar2 = _objc_retain(param_4);
  if (lVar2 != 0) {
    _objc_msgSend(uVar1,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"adid");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend(lVar2,"isEqualToString:",uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((uVar5 & 1) == 0) {
      _objc_msgSend(uVar1,"activityState");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar3,"setAdid:",lVar2);
      _objc_release(uVar3);
      _objc_msgSend(uVar1,"writeActivityStateI:",uVar1);
    }
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x1c bytes */

void ADJActivityHandler::setEnabledI_enabled_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *pcVar9;
  cfstringStruct *pcVar10;
  undefined8 uVar11;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(uVar2,"isEnabled");
  iVar1 = _objc_msgSend(uVar2,"hasChangedStateI:previousState:nextState:trueMessage:falseMessage:",
                        uVar2,uVar3,param_4,&cf_Adjustalreadyenabled,&cf_Adjustalreadydisabled);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"internalState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"setEnabled:",param_4);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"activityState");
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      pcVar8 = &cf_HandlerswillstartaspausedduetotheSDKbeingdisabled;
      pcVar9 = &cf_Handlerswillstillstartaspaused;
      pcVar10 = &cf_HandlerswillstartasactiveduetotheSDKbeingenabled;
    }
    else {
      if (param_4 != 0) {
        uVar5 = _objc_msgSend(&objc::class_t::ADJUserDefaults,"getInstallTracked");
        if ((uVar5 & 1) == 0) {
          _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
          uVar3 = _objc_retainAutoreleasedReturnValue();
          uVar11 = _objc_msgSend(uVar3,"timeIntervalSince1970");
          _objc_release(uVar3);
          _objc_msgSend(uVar11,param_1,"trackNewSessionI:withActivityHandler:",uVar2);
        }
        _objc_msgSend(&objc::class_t::ADJUserDefaults,"getPushToken");
        IVar6 = _objc_retainAutoreleasedReturnValue();
        if (IVar6 != 0) {
          _objc_msgSend(uVar2,"activityState");
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar3,"deviceToken");
          uVar11 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(&objc::class_t::ADJUtil,"convertDeviceToken:",IVar6);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          uVar5 = _objc_msgSend(uVar11,"isEqualToString:",uVar7);
          _objc_release(uVar7);
          _objc_release(uVar11);
          _objc_release(uVar3);
          if ((uVar5 & 1) == 0) {
            setDeviceToken_(param_1,(SEL)"setDeviceToken:",IVar6);
          }
        }
        _objc_release(IVar6);
      }
      _objc_msgSend(uVar2,"activityState");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar3,"setEnabled:",param_4);
      _objc_release(uVar3);
      _objc_msgSend(uVar2,"writeActivityStateI:",uVar2);
      pcVar8 = &cf_PausinghandlersduetoSDKbeingdisabled;
      pcVar9 = &cf_Handlersremainpaused;
      pcVar10 = &cf_ResuminghandlersduetoSDKbeingenabled;
    }
    _objc_msgSend(uVar2,
                  "checkStatusI:pausingState:pausingMessage:remainsPausedMessage:unPausingMessage:",
                  uVar2,param_4 ^ 1,pcVar8,pcVar9,pcVar10);
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x1c bytes */

void ADJActivityHandler::setOfflineModeI_offline_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(uVar2,"internalState");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend(uVar3,"isOffline");
  iVar1 = _objc_msgSend(uVar2,"hasChangedStateI:previousState:nextState:trueMessage:falseMessage:",
                        uVar2,uVar4,param_4,&cf_Adjustalreadyinofflinemode,
                        &cf_Adjustalreadyinonlinemode);
  _objc_release(uVar3);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"internalState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"setOffline:",param_4);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"activityState");
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      pcVar6 = &cf_HandlerswillstartpausedduetoSDKbeingoffline;
      pcVar7 = &cf_Handlerswillstillstartaspaused;
      pcVar8 = &cf_HandlerswillstartasactiveduetoSDKbeingonline;
    }
    else {
      pcVar6 = &cf_PausinghandlerstoputSDKofflinemode;
      pcVar7 = &cf_Handlersremainpaused;
      pcVar8 = &cf_ResuminghandlerstoputSDKinonlinemode;
    }
    _objc_msgSend(uVar2,
                  "checkStatusI:pausingState:pausingMessage:remainsPausedMessage:unPausingMessage:",
                  uVar2,param_4,pcVar6,pcVar7,pcVar8);
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJActivityHandler::appWillOpenUrlI_url_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  double dVar15;
  double dVar16;
  undefined8 local_140;
  long local_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [8];
  undefined1 auStack_f8 [128];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  uVar4 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar3);
  if (((uVar4 & 1) == 0) && (iVar1 = _objc_msgSend(uVar2,"isEnabledI:",uVar2), iVar1 != 0)) {
    _objc_msgSend(uVar3,"absoluteString");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    lVar6 = _objc_msgSend(uVar5,"length");
    _objc_release(uVar5);
    if (lVar6 != 0) {
      _objc_msgSend(uVar3,"query");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,"componentsSeparatedByString:",&cf__);
      lVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      if (lVar6 == 0) {
        _objc_msgSend(&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",auStack_100,0);
        lVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_release(0);
      }
      _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar7 = _objc_msgSend(&objc::class_t::ADJAttribution);
      uVar7 = _objc_msgSend(uVar7,"init");
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_130 = (long *)0x0;
      uStack_128 = 0;
      local_140 = 0;
      local_138 = 0;
      uVar8 = _objc_retain(lVar6);
      uVar4 = _objc_msgSend(uVar8,"countByEnumeratingWithState:objects:count:",&local_140,auStack_f8
                            ,0x10);
      if (uVar4 != 0) {
        lVar6 = *local_130;
        do {
          uVar14 = 0;
          do {
            if (*local_130 != lVar6) {
              _objc_enumerationMutation(uVar8);
            }
            _objc_msgSend(uVar2,"readDeeplinkQueryStringI:queryString:adjustDeepLinks:attribution:",
                          uVar2,*(undefined8 *)(local_138 + uVar14 * 8),uVar5,uVar7);
            uVar14 = uVar14 + 1;
          } while (uVar14 < uVar4);
          uVar4 = _objc_msgSend(uVar8,"countByEnumeratingWithState:objects:count:",&local_140,
                                auStack_f8,0x10);
        } while (uVar4 != 0);
      }
      _objc_release(uVar8);
      _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
      uVar9 = _objc_retainAutoreleasedReturnValue();
      dVar15 = (double)_objc_msgSend(uVar9,"timeIntervalSince1970");
      _objc_release(uVar9);
      _objc_msgSend(uVar2,"activityState");
      uVar9 = _objc_retainAutoreleasedReturnValue();
      dVar16 = (double)_objc_msgSend(uVar9,"lastActivity");
      _objc_release(uVar9);
      _objc_msgSend(uVar2,"activityState");
      uVar9 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(dVar15 - dVar16,uVar9,"setLastInterval:");
      _objc_release(uVar9);
      uVar9 = _objc_msgSend(&objc::class_t::ADJPackageBuilder,"alloc");
      _objc_msgSend(uVar2,"deviceInfo");
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"activityState");
      uVar11 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"adjustConfig");
      uVar12 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"sessionParameters");
      uVar13 = _objc_retainAutoreleasedReturnValue();
      uVar9 = _objc_msgSend(dVar15,uVar9,
                            "initWithDeviceInfo:activityState:config:sessionParameters:createdAt:",
                            uVar10,uVar11,uVar12,uVar13);
      _objc_release(uVar13);
      _objc_release(uVar12);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_msgSend(uVar9,"setDeeplinkParameters:",uVar5);
      _objc_msgSend(uVar9,"setAttribution:",uVar7);
      _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar9,"setClickTime:",uVar10);
      _objc_release(uVar10);
      _objc_msgSend(uVar3,"absoluteString");
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar9,"setDeeplink:",uVar10);
      _objc_release(uVar10);
      _objc_msgSend(uVar9,"buildClickPackage:",&cf_deeplink);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"sdkClickHandler");
      uVar11 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar11,"sendSdkClick:",uVar10);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar7);
      _objc_release(uVar5);
      _objc_release(uVar8);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* Function Stack Size: 0x20 bytes */

void ADJActivityHandler::setDeviceTokenI_deviceToken_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  iVar1 = _objc_msgSend(uVar2,"isEnabledI:",uVar2);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"activityState");
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      _objc_msgSend(&objc::class_t::ADJUtil,"convertDeviceToken:",uVar3);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        _objc_msgSend(uVar2,"activityState");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,"deviceToken");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_msgSend(lVar4,"isEqualToString:",uVar6);
        _objc_release(uVar6);
        _objc_release(uVar5);
        if ((uVar7 & 1) == 0) {
          _objc_msgSend(uVar2,"activityState");
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,"setDeviceToken:",lVar4);
          _objc_release(uVar5);
          _objc_msgSend(uVar2,"writeActivityStateI:",uVar2);
          _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
          uVar5 = _objc_retainAutoreleasedReturnValue();
          uVar11 = _objc_msgSend(uVar5,"timeIntervalSince1970");
          _objc_release(uVar5);
          uVar5 = _objc_msgSend(&objc::class_t::ADJPackageBuilder,"alloc");
          _objc_msgSend(uVar2,"deviceInfo");
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar2,"activityState");
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar2,"adjustConfig");
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar2,"sessionParameters");
          uVar10 = _objc_retainAutoreleasedReturnValue();
          uVar5 = _objc_msgSend(uVar11,uVar5,
                                "initWithDeviceInfo:activityState:config:sessionParameters:createdAt:"
                                ,uVar6,uVar8,uVar9,uVar10);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar6);
          _objc_msgSend(uVar5,"buildInfoPackage:",&cf_push);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar2,"packageHandler");
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,"addPackage:",uVar6);
          _objc_release(uVar8);
          _objc_msgSend(&objc::class_t::ADJUserDefaults,"removePushToken");
          _objc_msgSend(uVar2,"adjustConfig");
          uVar8 = _objc_retainAutoreleasedReturnValue();
          iVar1 = _objc_msgSend(uVar8,"eventBufferingEnabled");
          _objc_release(uVar8);
          if (iVar1 == 0) {
            _objc_msgSend(uVar2,"packageHandler");
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar8,"sendFirstPackage");
          }
          else {
            _objc_msgSend(uVar2,"logger");
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar6,"suffix");
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar8,"info:",&cf_Bufferedinfo__);
            _objc_release(uVar9);
          }
          _objc_release(uVar8);
          _objc_release(uVar6);
          _objc_release(uVar5);
        }
      }
      _objc_release(lVar4);
    }
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

bool ADJActivityHandler::isEnabledI_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(param_3,"activityState");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    uVar4 = _objc_msgSend(param_3,"internalState");
    _objc_release(uVar2);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar4);
    pcVar5 = "isEnabled";
  }
  else {
    uVar4 = _objc_msgSend(param_3,"activityState");
    _objc_release(uVar2);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar4);
    pcVar5 = "enabled";
  }
  bVar1 = _objc_msgSend(uVar2,pcVar5);
  _objc_release(uVar2);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool ADJActivityHandler::itHasToUpdatePackagesI_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(param_3,"activityState");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 == 0) {
    uVar4 = _objc_msgSend(param_3,"internalState");
    _objc_release(uVar2);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar4);
    pcVar5 = "itHasToUpdatePackages";
  }
  else {
    uVar4 = _objc_msgSend(param_3,"activityState");
    _objc_release(uVar2);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar4);
    pcVar5 = "updatePackages";
  }
  bVar1 = _objc_msgSend(uVar2,pcVar5);
  _objc_release(uVar2);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool ADJActivityHandler::updateActivityStateI_now_(ID param_1,SEL param_2,ID param_3,double param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  double dVar5;
  double dVar6;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(uVar2,"checkActivityStateI:",uVar2);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"activityState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)_objc_msgSend(uVar3,"lastActivity");
    dVar5 = param_4 - dVar5;
    _objc_release(uVar3);
    if (dVar5 <= DAT_101ea5fc0) {
      _objc_msgSend(uVar2,"activityState");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(param_4,uVar3,"setLastActivity:");
      _objc_release(uVar3);
      if (0.0 <= dVar5) {
        _objc_msgSend(uVar2,"activityState");
        uVar3 = _objc_retainAutoreleasedReturnValue();
        dVar6 = (double)_objc_msgSend(uVar3,"sessionLength");
        _objc_msgSend(dVar5 + dVar6,uVar3,"setSessionLength:");
        _objc_release(uVar3);
        _objc_msgSend(uVar2,"activityState");
        uVar3 = _objc_retainAutoreleasedReturnValue();
        dVar6 = (double)_objc_msgSend(uVar3,"timeSpent");
        _objc_msgSend(dVar5 + dVar6,uVar3,"setTimeSpent:");
      }
      else {
        _objc_msgSend(uVar2,"logger");
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar3,"error:",&cf_Timetravel_);
      }
      _objc_release(uVar3);
      bVar4 = 1;
      goto LAB_10111453c;
    }
  }
  bVar4 = 0;
LAB_10111453c:
  _objc_release(uVar2);
  return bVar4;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::writeActivityStateI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJActivityState,"class");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  _objc_msgSend(uVar1,"activityState");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar1,"activityState");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJUtil,"writeObject:fileName:objectName:",uVar4,
                  &cf_AdjustIoActivityState,&cf_Activitystate);
    _objc_release(uVar4);
  }
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::teardownActivityStateS(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_msgSend(&objc::class_t::ADJActivityState,"class");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  activityState(param_1,(SEL)"activityState");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    setActivityState_(param_1,(SEL)"setActivityState:",0);
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::writeAttributionI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJAttribution,"class");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  _objc_msgSend(uVar1,"attribution");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar1,"attribution");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJUtil,"writeObject:fileName:objectName:",uVar4,
                  &cf_AdjustIoAttribution,&cf_Attribution);
    _objc_release(uVar4);
  }
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::teardownAttributionS(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_msgSend(&objc::class_t::ADJAttribution,"class");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  attribution(param_1,(SEL)"attribution");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    setAttribution_(param_1,(SEL)"setAttribution:",0);
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::readActivityState(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_msgSend(&objc::class_t::ADJActivityState,"class");
  _objc_msgSend(&_OBJC_CLASS___NSKeyedUnarchiver,"setClass:forClassName:",uVar1,&cf_AIActivityState)
  ;
  uVar1 = _objc_msgSend(&objc::class_t::ADJActivityState,"class");
  _objc_msgSend(&objc::class_t::ADJUtil,"readObject:objectName:class:",&cf_AdjustIoActivityState,
                &cf_Activitystate,uVar1);
  IVar2 = _objc_retainAutoreleasedReturnValue();
  setActivityState_(param_1,(SEL)"setActivityState:",IVar2);
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::readAttribution(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_msgSend(&objc::class_t::ADJAttribution,"class");
  _objc_msgSend(&objc::class_t::ADJUtil,"readObject:objectName:class:",&cf_AdjustIoAttribution,
                &cf_Attribution,uVar1);
  IVar2 = _objc_retainAutoreleasedReturnValue();
  setAttribution_(param_1,(SEL)"setAttribution:",IVar2);
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::writeSessionCallbackParametersI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJSessionParameters,"class");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  _objc_msgSend(uVar1,"sessionParameters");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar1,"sessionParameters");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"callbackParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJUtil,"writeObject:fileName:objectName:",uVar5,
                  &cf_AdjustSessionCallbackParameters,&cf_SessionCallbackparameters);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::writeSessionPartnerParametersI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJSessionParameters,"class");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  _objc_msgSend(uVar1,"sessionParameters");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar1,"sessionParameters");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"partnerParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJUtil,"writeObject:fileName:objectName:",uVar5,
                  &cf_AdjustSessionPartnerParameters,&cf_SessionPartnerparameters);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::teardownAllSessionParametersS(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_msgSend(&objc::class_t::ADJSessionParameters,"class");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  sessionParameters(param_1,(SEL)"sessionParameters");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    sessionParameters(param_1,(SEL)"sessionParameters");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"callbackParameters");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"removeAllObjects");
    _objc_release(uVar4);
    _objc_release(uVar3);
    sessionParameters(param_1,(SEL)"sessionParameters");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"partnerParameters");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"removeAllObjects");
    _objc_release(uVar4);
    _objc_release(uVar3);
    setSessionParameters_(param_1,(SEL)"setSessionParameters:",0);
  }
  _objc_sync_exit(uVar1);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::readSessionCallbackParametersI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(param_3,"sessionParameters");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSDictionary,"class");
  _objc_msgSend(&objc::class_t::ADJUtil,"readObject:objectName:class:",
                &cf_AdjustSessionCallbackParameters,&cf_SessionCallbackparameters,uVar2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setCallbackParameters:",uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::readSessionPartnerParametersI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(param_3,"sessionParameters");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSDictionary,"class");
  _objc_msgSend(&objc::class_t::ADJUtil,"readObject:objectName:class:",
                &cf_AdjustSessionPartnerParameters,&cf_SessionPartnerparameters,uVar2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setPartnerParameters:",uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::updateHandlersStatusAndSendI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(uVar2,"toSendI:",uVar2);
  if ((uVar3 & 1) == 0) {
    _objc_msgSend(uVar2,"pauseSendingI:",uVar2);
    goto LAB_101114fbc;
  }
  _objc_msgSend(uVar2,"resumeSendingI:",uVar2);
  _objc_msgSend(uVar2,"internalState");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend(uVar4,"isFirstLaunch");
  if ((uVar3 & 1) == 0) {
LAB_101114f34:
    _objc_release(uVar4);
  }
  else {
    _objc_msgSend(uVar2,"internalState");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar5,"hasSessionResponseNotBeenProcessed");
    _objc_release(uVar5);
    _objc_release(uVar4);
    if (iVar1 != 0) {
      _objc_msgSend(uVar2,"packageHandler");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"sendFirstPackage");
      goto LAB_101114f34;
    }
  }
  _objc_msgSend(uVar2,"adjustConfig");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend(uVar4,"eventBufferingEnabled");
  _objc_release(uVar4);
  if ((uVar3 & 1) == 0) {
    _objc_msgSend(uVar2,"packageHandler");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"sendFirstPackage");
    _objc_release(uVar4);
  }
LAB_101114fbc:
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::pauseSendingI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(param_3,"attributionHandler");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  pcVar4 = "pauseSending";
  _objc_msgSend(uVar2,"pauseSending");
  _objc_release(uVar2);
  _objc_msgSend(param_3,"packageHandler");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"pauseSending");
  _objc_release(uVar2);
  uVar3 = _objc_msgSend(param_3,"toSendI:sdkClickHandlerOnly:",uVar1,1);
  uVar2 = _objc_msgSend(param_3,"sdkClickHandler");
  _objc_release(uVar1);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar2);
  if ((uVar3 & 1) != 0) {
    pcVar4 = "resumeSending";
  }
  _objc_msgSend(uVar1,pcVar4);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::resumeSendingI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(param_3,"attributionHandler");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"resumeSending");
  _objc_release(uVar2);
  _objc_msgSend(param_3,"packageHandler");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"resumeSending");
  _objc_release(uVar2);
  uVar2 = _objc_msgSend(param_3,"sdkClickHandler");
  _objc_release(uVar1);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar2);
  _objc_msgSend(uVar1,"resumeSending");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

bool ADJActivityHandler::pausedI_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend(param_3,"pausedI:sdkClickHandlerOnly:",param_3,0);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool ADJActivityHandler::toSendI_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend(param_3,"toSendI:sdkClickHandlerOnly:",param_3,0);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::startForegroundTimerI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(uVar2,"isEnabledI:",uVar2);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"foregroundTimer");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"resume");
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::stopForegroundTimerI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  _objc_msgSend(param_3,"foregroundTimer");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"suspend");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::foregroundTimerFiredI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(uVar2,"isEnabledI:",uVar2);
  if ((uVar3 & 1) == 0) {
    pcVar5 = "stopForegroundTimerI:";
  }
  else {
    iVar1 = _objc_msgSend(uVar2,"toSendI:",uVar2);
    if (iVar1 != 0) {
      _objc_msgSend(uVar2,"packageHandler");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"sendFirstPackage");
      _objc_release(uVar4);
    }
    _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar6 = _objc_msgSend(uVar4,"timeIntervalSince1970");
    _objc_release(uVar4);
    iVar1 = _objc_msgSend(uVar6,uVar2,"updateActivityStateI:now:",uVar2);
    if (iVar1 == 0) goto LAB_101115590;
    pcVar5 = "writeActivityStateI:";
  }
  _objc_msgSend(uVar2,pcVar5,uVar2);
LAB_101115590:
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::startBackgroundTimerI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(uVar2,"backgroundTimer");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((lVar3 != 0) && (iVar1 = _objc_msgSend(uVar2,"toSendI:",uVar2), iVar1 != 0)) {
    _objc_msgSend(uVar2,"backgroundTimer");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)_objc_msgSend(uVar4,"fireIn");
    _objc_release(uVar4);
    if (dVar5 <= 0.0) {
      _objc_msgSend(uVar2,"backgroundTimer");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(DAT_101ea5fe0,uVar4,"startIn:");
      _objc_release(uVar4);
    }
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::stopBackgroundTimerI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"backgroundTimer");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    _objc_msgSend(uVar1,"backgroundTimer");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"cancel");
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::backgroundTimerFiredI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(uVar2,"toSendI:",uVar2);
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"packageHandler");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"sendFirstPackage");
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::delayStartI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"internalState");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend(uVar2,"isNotInDelayedStart");
  _objc_release(uVar2);
  if (((uVar3 & 1) == 0) &&
     (uVar3 = _objc_msgSend(uVar1,"itHasToUpdatePackagesI:",uVar1), (uVar3 & 1) == 0)) {
    _objc_msgSend(uVar1,"adjustConfig");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    dVar7 = (double)_objc_msgSend(uVar2,"delayStart");
    _objc_release(uVar2);
    dVar8 = (double)_objc_msgSend(&objc::class_t::ADJAdjustFactory,"maxDelayStart");
    if (dVar8 < dVar7) {
      _objc_msgSend(dVar7,&objc::class_t::ADJUtil,"secondsNumberFormat:");
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(dVar8,&objc::class_t::ADJUtil,"secondsNumberFormat:");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar1,"logger");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,"warn:",&cf_Delaystartof__secondsbiggerthanmaxallowedvalueof__seconds);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar2);
      dVar7 = dVar8;
    }
    _objc_msgSend(dVar7,&objc::class_t::ADJUtil,"secondsNumberFormat:");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"info:",&cf_Waiting__secondsbeforestartingfirstsession);
    _objc_release(uVar4);
    _objc_msgSend(uVar1,"delayStartTimer");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(dVar7,uVar4,"startIn:");
    _objc_release(uVar4);
    _objc_msgSend(uVar1,"internalState");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"setUpdatePackages:",1);
    _objc_release(uVar4);
    _objc_msgSend(uVar1,"activityState");
    lVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar6 != 0) {
      _objc_msgSend(uVar1,"activityState");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"setUpdatePackages:",1);
      _objc_release(uVar4);
      _objc_msgSend(uVar1,"writeActivityStateI:",uVar1);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::sendFirstPackagesI_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(uVar2,"internalState");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar3,"isNotInDelayedStart");
  _objc_release(uVar3);
  if (iVar1 == 0) {
    _objc_msgSend(uVar2,"updatePackagesI:",uVar2);
    _objc_msgSend(uVar2,"internalState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"setDelayStart:",0);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"delayStartTimer");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"cancel");
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"setDelayStartTimer:",0);
    _objc_msgSend(uVar2,"updateHandlersStatusAndSendI:",uVar2);
  }
  else {
    _objc_msgSend(uVar2,"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"info:",&cf_Startdelayexpiredorneverconfigured);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::updatePackagesI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"packageHandler");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"sessionParameters");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"updatePackages:",uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_msgSend(uVar1,"internalState");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setUpdatePackages:",0);
  _objc_release(uVar2);
  _objc_msgSend(uVar1,"activityState");
  lVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    _objc_msgSend(uVar1,"activityState");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"setUpdatePackages:",0);
    _objc_release(uVar2);
    _objc_msgSend(uVar1,"writeActivityStateI:",uVar1);
  }
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::resetSessionCallbackParametersI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"sessionParameters");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"callbackParameters");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    _objc_msgSend(uVar1,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"warn:",&cf_SessionCallbackparametersarenotset);
    _objc_release(uVar2);
  }
  else {
    _objc_msgSend(uVar1,"sessionParameters");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"setCallbackParameters:",0);
    _objc_release(uVar2);
    _objc_msgSend(uVar1,"writeSessionCallbackParametersI:",uVar1);
  }
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::resetSessionPartnerParametersI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"sessionParameters");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"partnerParameters");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    _objc_msgSend(uVar1,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"warn:",&cf_SessionPartnerparametersarenotset);
    _objc_release(uVar2);
  }
  else {
    _objc_msgSend(uVar1,"sessionParameters");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"setPartnerParameters:",0);
    _objc_release(uVar2);
    _objc_msgSend(uVar1,"writeSessionPartnerParametersI:",uVar1);
  }
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::addNotificationObserver(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"removeObserver:",param_1);
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",param_1,"applicationDidBecomeActive",
                *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_1014440c8,0);
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",param_1,"applicationWillResignActive",
                *(undefined8 *)PTR__UIApplicationWillResignActiveNotification_1014440f0,0);
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",param_1,"removeNotificationObserver",
                *(undefined8 *)PTR__UIApplicationWillTerminateNotification_1014440f8,0);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::removeNotificationObserver(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"removeObserver:",param_1);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x20 bytes */

bool ADJActivityHandler::checkEventI_event_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  bool bVar6;
  
  uVar1 = _objc_retain(param_3);
  lVar2 = _objc_retain(param_4);
  if (lVar2 == 0) {
    _objc_msgSend(uVar1,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_Eventmissing;
  }
  else {
    uVar3 = _objc_msgSend(lVar2,"isValid");
    if ((uVar3 & 1) != 0) {
      bVar6 = 1;
      goto LAB_101116dcc;
    }
    _objc_msgSend(uVar1,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_Eventnotinitializedcorrectly;
  }
  _objc_msgSend(uVar4,"error:",pcVar5);
  _objc_release(uVar4);
  bVar6 = 0;
LAB_101116dcc:
  _objc_release(lVar2);
  _objc_release(uVar1);
  return bVar6;
}




/* Function Stack Size: 0x18 bytes */

bool ADJActivityHandler::checkActivityStateI_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"activityState");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    _objc_msgSend(uVar1,"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"error:",&cf_Missingactivitystate);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  return (bool)(lVar2 != 0);
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::attribution(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_attribution,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setAttribution_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::internalQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_internalQueue);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setInternalQueue_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_internalQueue,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::packageHandler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_packageHandler);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setPackageHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_packageHandler,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::attributionHandler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attributionHandler);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setAttributionHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_attributionHandler,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::sdkClickHandler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_sdkClickHandler);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setSdkClickHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_sdkClickHandler,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::activityState(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_activityState);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setActivityState_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_activityState,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::foregroundTimer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_foregroundTimer);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setForegroundTimer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_foregroundTimer,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::backgroundTimer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_backgroundTimer);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setBackgroundTimer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_backgroundTimer,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::internalState(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_internalState);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setInternalState_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_internalState,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::deviceInfo(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_deviceInfo);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setDeviceInfo_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_deviceInfo,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::delayStartTimer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_delayStartTimer);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setDelayStartTimer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_delayStartTimer,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::sessionParameters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_sessionParameters);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setSessionParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_sessionParameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::adjustDelegate(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_adjustDelegate);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setAdjustDelegate_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_adjustDelegate,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::adjustConfig(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_adjustConfig,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setAdjustConfig_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::deviceTokenData(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_deviceTokenData,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setDeviceTokenData_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityHandler::basePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_basePath,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityHandler::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityHandler::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_basePath,0);
  _objc_storeStrong(param_1 + (long)_deviceTokenData,0);
  _objc_storeStrong(param_1 + (long)_adjustConfig,0);
  _objc_destroyWeak(param_1 + (long)_adjustDelegate);
  _objc_destroyWeak(param_1 + (long)_logger);
  _objc_storeStrong(param_1 + (long)_sessionParameters,0);
  _objc_storeStrong(param_1 + (long)_delayStartTimer,0);
  _objc_storeStrong(param_1 + (long)_deviceInfo,0);
  _objc_storeStrong(param_1 + (long)_internalState,0);
  _objc_storeStrong(param_1 + (long)_backgroundTimer,0);
  _objc_storeStrong(param_1 + (long)_foregroundTimer,0);
  _objc_storeStrong(param_1 + (long)_activityState,0);
  _objc_storeStrong(param_1 + (long)_sdkClickHandler,0);
  _objc_storeStrong(param_1 + (long)_attributionHandler,0);
  _objc_storeStrong(param_1 + (long)_packageHandler,0);
  _objc_storeStrong(param_1 + (long)_internalQueue,0);
  _objc_storeStrong(param_1 + (long)_attribution,0);
  return;
}

