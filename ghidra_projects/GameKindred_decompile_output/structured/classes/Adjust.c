// classes/Adjust — 56 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID Adjust::getInstance(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL extraout_x1;
  undefined *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_101444138;
  local_30 = 0xc2000000;
  uStack_2c = 0;
  local_28 = FUN_10110b15c;
  puStack_20 = &DAT_101830080;
  local_18 = param_1;
  if (DAT_101ea5fb8 != -1) {
    _dispatch_once(&DAT_101ea5fb8,&local_38);
    param_2 = extraout_x1;
  }
  IVar1 = _objc_retainAutoreleaseReturnValue(DAT_101ea5fb0,param_2);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::init(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  ID local_40;
  class_t *local_38;
  
  local_38 = &objc::class_t::Adjust;
  local_40 = param_1;
  lVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (lVar1 == 0) {
    IVar3 = 0;
  }
  else {
    _objc_msgSend(lVar1,"setActivityHandler:",0);
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar1,"setLogger:",uVar2);
    _objc_release(uVar2);
    uVar2 = _objc_msgSend(&objc::class_t::ADJSavedPreLaunch,"alloc");
    uVar2 = _objc_msgSend(uVar2,"init");
    _objc_msgSend(lVar1,"setSavedPreLaunch:",uVar2);
    _objc_release(uVar2);
    IVar3 = _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::appDidLaunch_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"appDidLaunch:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::trackEvent_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"trackEvent:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::trackSubsessionStart(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"trackSubsessionStart");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::trackSubsessionEnd(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"trackSubsessionEnd");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x14 bytes */

void Adjust::setEnabled_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance",param_3);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setEnabled:",param_3);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool Adjust::isEnabled(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  bVar1 = _objc_msgSend(uVar2,"isEnabled");
  _objc_release(uVar2);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::appWillOpenUrl_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"appWillOpenUrl:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::setDeviceToken_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setDeviceToken:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x14 bytes */

void Adjust::setOfflineMode_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance",param_3);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setOfflineMode:",param_3);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::sendAdWordsRequest(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"warn:",&cf_SendAdWordsRequestfunctionalityremoved);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::idfa(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"idfa");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x20 bytes */

ID Adjust::convertUniversalLink_scheme_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend(uVar3,"convertUniversalLink:scheme:",uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar4);
  _objc_release(uVar3);
  IVar5 = _objc_autoreleaseReturnValue(uVar1);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::sendFirstPackages(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"sendFirstPackages");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x20 bytes */

void Adjust::addSessionCallbackParameter_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"addSessionCallbackParameter:value:",uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}




/* Function Stack Size: 0x20 bytes */

void Adjust::addSessionPartnerParameter_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"addSessionPartnerParameter:value:",uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::removeSessionCallbackParameter_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"removeSessionCallbackParameter:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::removeSessionPartnerParameter_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"removeSessionPartnerParameter:",uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::resetSessionCallbackParameters(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"resetSessionCallbackParameters");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::resetSessionPartnerParameters(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"resetSessionPartnerParameters");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::attribution(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"attribution");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::adid(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"adid");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::setTestOptions_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(uVar2,"teardown");
  if (iVar1 != 0) {
    lVar3 = DAT_101ea5fb0;
    if (DAT_101ea5fb0 != 0) {
      _objc_msgSend(DAT_101ea5fb0,"teardown");
      lVar3 = DAT_101ea5fb0;
    }
    DAT_101ea5fb0 = 0;
    _objc_release(lVar3);
    DAT_101ea5fb8 = 0;
    uVar4 = _objc_msgSend(uVar2,"deleteState");
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"teardown:",uVar4);
  }
  _objc_msgSend(&objc::class_t::Adjust,"getInstance");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"setTestOptions:",uVar2);
  _objc_release(uVar4);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::appDidLaunch_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar1 = _objc_retain(param_3);
  activityHandler(param_1,(SEL)"activityHandler");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"activityHandlerWithConfig:savedPreLaunch:",uVar1
                  ,uVar3);
    IVar4 = _objc_retainAutoreleasedReturnValue();
    setActivityHandler_(param_1,(SEL)"setActivityHandler:",IVar4);
    _objc_release(IVar4);
  }
  else {
    logger(param_1,(SEL)"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"error:",&cf_Adjustalreadyinitialized);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::trackEvent_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_3);
  bVar1 = checkActivityHandler(param_1,(SEL)"checkActivityHandler");
  if (bVar1 != 0) {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"trackEvent:",uVar2);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::trackSubsessionStart(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = checkActivityHandler(param_1,(SEL)"checkActivityHandler");
  if (bVar1 != 0) {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"applicationDidBecomeActive");
    _objc_release(uVar2);
    return;
  }
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::trackSubsessionEnd(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = checkActivityHandler(param_1,(SEL)"checkActivityHandler");
  if (bVar1 != 0) {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"applicationWillResignActive");
    _objc_release(uVar2);
    return;
  }
  return;
}




/* Function Stack Size: 0x14 bytes */

void Adjust::setEnabled_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  savedPreLaunch(param_1,(SEL)"savedPreLaunch");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithBool:",param_3);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setEnabled:",uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  bVar1 = checkActivityHandler_trueMessage_falseMessage_
                    (param_1,(SEL)"checkActivityHandler:trueMessage:falseMessage:",param_3,
                     0x101831f58,0x101831f78);
  if (bVar1 != 0) {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"setEnabled:",param_3);
    _objc_release(uVar2);
    return;
  }
  return;
}




/* Function Stack Size: 0x10 bytes */

bool Adjust::isEnabled(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = checkActivityHandler(param_1,(SEL)"checkActivityHandler");
  if ((bVar1 & 1) == 0) {
    bVar1 = isInstanceEnabled(param_1,(SEL)"isInstanceEnabled");
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar2,"isEnabled");
    _objc_release(uVar2);
  }
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::appWillOpenUrl_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_3);
  bVar1 = checkActivityHandler(param_1,(SEL)"checkActivityHandler");
  if (bVar1 != 0) {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"appWillOpenUrl:",uVar2);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::setDeviceToken_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJUserDefaults,"savePushToken:",uVar3);
  bVar1 = checkActivityHandler_(param_1,(SEL)"checkActivityHandler:",0x101831f98);
  if (bVar1 != 0) {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    iVar2 = _objc_msgSend(uVar4,"isEnabled");
    _objc_release(uVar4);
    if (iVar2 != 0) {
      activityHandler(param_1,(SEL)"activityHandler");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"setDeviceToken:",uVar3);
      _objc_release(uVar4);
    }
  }
  _objc_release(uVar3);
  return;
}




/* Function Stack Size: 0x14 bytes */

void Adjust::setOfflineMode_(ID param_1,SEL param_2,bool param_3)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  bVar1 = checkActivityHandler_trueMessage_falseMessage_
                    (param_1,(SEL)"checkActivityHandler:trueMessage:falseMessage:",param_3,
                     0x101831fb8,0x101831fd8);
  if ((bVar1 & 1) == 0) {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    pcVar3 = "setOffline:";
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    pcVar3 = "setOfflineMode:";
  }
  _objc_msgSend(uVar2,pcVar3,param_3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::idfa(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"idfa");
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

ID Adjust::convertUniversalLink_scheme_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(&objc::class_t::ADJUtil,"convertUniversalLink:scheme:",uVar1,param_4);
  _objc_release(uVar1);
  _objc_retainAutoreleasedReturnValue(uVar2);
  IVar3 = _objc_autoreleaseReturnValue();
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::sendFirstPackages(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  bVar1 = checkActivityHandler(param_1,(SEL)"checkActivityHandler");
  if (bVar1 != 0) {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"sendFirstPackages");
    _objc_release(uVar2);
    return;
  }
  return;
}




/* Function Stack Size: 0x20 bytes */

void Adjust::addSessionCallbackParameter_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  bVar1 = checkActivityHandler_(param_1,(SEL)"checkActivityHandler:",0x101831ff8);
  if (bVar1 == 0) {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"preLaunchActionsArray");
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    if (lVar5 == 0) {
      savedPreLaunch(param_1,(SEL)"savedPreLaunch");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar6 = _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"alloc");
      uVar6 = _objc_msgSend(uVar6,"init");
      _objc_msgSend(uVar4,"setPreLaunchActionsArray:",uVar6);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"preLaunchActionsArray");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    local_80 = PTR___NSConcreteStackBlock_101444138;
    local_78 = 0xc2000000;
    uStack_74 = 0;
    local_70 = FUN_10110c418;
    local_68 = &DAT_1018300b0;
    local_60 = _objc_retain(uVar2);
    local_58 = _objc_retain(uVar3);
    uVar7 = _objc_retainBlock(&local_80);
    _objc_msgSend(uVar6,"addObject:",uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(local_58);
    uVar4 = local_60;
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"addSessionCallbackParameter:value:",uVar2,uVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void Adjust::addSessionPartnerParameter_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  bVar1 = checkActivityHandler_(param_1,(SEL)"checkActivityHandler:",0x101832018);
  if (bVar1 == 0) {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"preLaunchActionsArray");
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar4);
    if (lVar5 == 0) {
      savedPreLaunch(param_1,(SEL)"savedPreLaunch");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar6 = _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"alloc");
      uVar6 = _objc_msgSend(uVar6,"init");
      _objc_msgSend(uVar4,"setPreLaunchActionsArray:",uVar6);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"preLaunchActionsArray");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    local_80 = PTR___NSConcreteStackBlock_101444138;
    local_78 = 0xc2000000;
    uStack_74 = 0;
    local_70 = FUN_10110c6a4;
    local_68 = &DAT_1018300e0;
    local_60 = _objc_retain(uVar2);
    local_58 = _objc_retain(uVar3);
    uVar7 = _objc_retainBlock(&local_80);
    _objc_msgSend(uVar6,"addObject:",uVar7);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(local_58);
    uVar4 = local_60;
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"addSessionPartnerParameter:value:",uVar2,uVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::removeSessionCallbackParameter_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar2 = _objc_retain(param_3);
  bVar1 = checkActivityHandler_(param_1,(SEL)"checkActivityHandler:",0x101832038);
  if (bVar1 == 0) {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"preLaunchActionsArray");
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (lVar4 == 0) {
      savedPreLaunch(param_1,(SEL)"savedPreLaunch");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"alloc");
      uVar5 = _objc_msgSend(uVar5,"init");
      _objc_msgSend(uVar3,"setPreLaunchActionsArray:",uVar5);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"preLaunchActionsArray");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_101444138;
    local_60 = 0xc2000000;
    uStack_5c = 0;
    local_58 = FUN_10110c8f8;
    local_50 = &DAT_101830110;
    local_48 = _objc_retain(uVar2);
    uVar6 = _objc_retainBlock(&local_68);
    _objc_msgSend(uVar5,"addObject:",uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = local_48;
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"removeSessionCallbackParameter:",uVar2);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::removeSessionPartnerParameter_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  
  uVar2 = _objc_retain(param_3);
  bVar1 = checkActivityHandler_(param_1,(SEL)"checkActivityHandler:",0x101832058);
  if (bVar1 == 0) {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"preLaunchActionsArray");
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar3);
    if (lVar4 == 0) {
      savedPreLaunch(param_1,(SEL)"savedPreLaunch");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"alloc");
      uVar5 = _objc_msgSend(uVar5,"init");
      _objc_msgSend(uVar3,"setPreLaunchActionsArray:",uVar5);
      _objc_release(uVar5);
      _objc_release(uVar3);
    }
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"preLaunchActionsArray");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    local_68 = PTR___NSConcreteStackBlock_101444138;
    local_60 = 0xc2000000;
    uStack_5c = 0;
    local_58 = FUN_10110cb0c;
    local_50 = &DAT_101830140;
    local_48 = _objc_retain(uVar2);
    uVar6 = _objc_retainBlock(&local_68);
    _objc_msgSend(uVar5,"addObject:",uVar6);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    uVar3 = local_48;
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"removeSessionPartnerParameter:",uVar2);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::resetSessionCallbackParameters(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  bVar1 = checkActivityHandler_(param_1,(SEL)"checkActivityHandler:",0x101832078);
  if (bVar1 == 0) {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"preLaunchActionsArray");
    lVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      savedPreLaunch(param_1,(SEL)"savedPreLaunch");
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar4 = _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"alloc");
      uVar4 = _objc_msgSend(uVar4,"init");
      _objc_msgSend(uVar2,"setPreLaunchActionsArray:",uVar4);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"preLaunchActionsArray");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_retainBlock(&PTR___NSConcreteGlobalBlock_101830190);
    _objc_msgSend(uVar4,"addObject:",uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"resetSessionCallbackParameters");
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::resetSessionPartnerParameters(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  bVar1 = checkActivityHandler_(param_1,(SEL)"checkActivityHandler:",0x101832098);
  if (bVar1 == 0) {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"preLaunchActionsArray");
    lVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar2);
    if (lVar3 == 0) {
      savedPreLaunch(param_1,(SEL)"savedPreLaunch");
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar4 = _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"alloc");
      uVar4 = _objc_msgSend(uVar4,"init");
      _objc_msgSend(uVar2,"setPreLaunchActionsArray:",uVar4);
      _objc_release(uVar4);
      _objc_release(uVar2);
    }
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"preLaunchActionsArray");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_retainBlock(&PTR___NSConcreteGlobalBlock_1018301d0);
    _objc_msgSend(uVar4,"addObject:",uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"resetSessionPartnerParameters");
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::attribution(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  bVar1 = checkActivityHandler(param_1,(SEL)"checkActivityHandler");
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"attribution");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::adid(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  bVar1 = checkActivityHandler(param_1,(SEL)"checkActivityHandler");
  if (bVar1 == 0) {
    uVar3 = 0;
  }
  else {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"adid");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::teardown(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  activityHandler(param_1,(SEL)"activityHandler");
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    activityHandler(param_1,(SEL)"activityHandler");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"teardown");
    _objc_release(uVar2);
    setActivityHandler_(param_1,(SEL)"setActivityHandler:",0);
    return;
  }
  logger(param_1,(SEL)"logger");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"error:",&cf_Adjustalreadydownornotinitialized);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::setTestOptions_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(uVar2,"basePath");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"basePath");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"setBasePath:",uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_msgSend(uVar2,"baseUrl");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar2,"baseUrl");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"setBaseUrl:",uVar4);
    _objc_release(uVar4);
  }
  _objc_msgSend(uVar2,"timerIntervalInMilliseconds");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar2,"timerIntervalInMilliseconds");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar4,"intValue");
    _objc_release(uVar4);
    _objc_msgSend((double)iVar1 / 1000.0,&objc::class_t::ADJAdjustFactory,"setTimerInterval:");
  }
  _objc_msgSend(uVar2,"timerStartInMilliseconds");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar2,"timerStartInMilliseconds");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar4,"intValue");
    _objc_release(uVar4);
    _objc_msgSend((double)iVar1 / 1000.0,&objc::class_t::ADJAdjustFactory,"setTimerStart:");
  }
  _objc_msgSend(uVar2,"sessionIntervalInMilliseconds");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar2,"sessionIntervalInMilliseconds");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar4,"intValue");
    _objc_release(uVar4);
    _objc_msgSend((double)iVar1 / 1000.0,&objc::class_t::ADJAdjustFactory,"setSessionInterval:");
  }
  _objc_msgSend(uVar2,"subsessionIntervalInMilliseconds");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_msgSend(uVar2,"subsessionIntervalInMilliseconds");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar4,"intValue");
    _objc_release(uVar4);
    _objc_msgSend((double)iVar1 / 1000.0,&objc::class_t::ADJAdjustFactory,"setSubsessionInterval:");
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool Adjust::checkActivityHandler(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"checkActivityHandler:",0);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool Adjust::checkActivityHandler_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  cfstringStruct *pcVar5;
  bool bVar6;
  
  lVar1 = _objc_retain(param_3);
  activityHandler(param_1,(SEL)"activityHandler");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    logger(param_1,(SEL)"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      pcVar4 = "error:";
      pcVar5 = &cf_PleaseinitializeAdjustbycalling_appDidLaunch_before;
    }
    else {
      pcVar4 = "warn:";
      pcVar5 = &cf_Adjustnotinitialized_but__savedforlaunch;
    }
    _objc_msgSend(uVar3,pcVar4,pcVar5);
    _objc_release(uVar3);
    bVar6 = 0;
  }
  else {
    bVar6 = 1;
  }
  _objc_release(lVar1);
  return bVar6;
}




/* Function Stack Size: 0x10 bytes */

bool Adjust::isInstanceEnabled(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  bool bVar5;
  
  savedPreLaunch(param_1,(SEL)"savedPreLaunch");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"enabled");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    bVar5 = 1;
  }
  else {
    savedPreLaunch(param_1,(SEL)"savedPreLaunch");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"enabled");
    lVar4 = _objc_retainAutoreleasedReturnValue();
    bVar5 = (bool)(lVar4 != 0);
    _objc_release();
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  return bVar5;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void Adjust::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::activityHandler(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_activityHandler);
}




/* Function Stack Size: 0x18 bytes */

void Adjust::setActivityHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_activityHandler,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID Adjust::savedPreLaunch(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_savedPreLaunch);
}




/* Function Stack Size: 0x18 bytes */

void Adjust::setSavedPreLaunch_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_savedPreLaunch,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

void Adjust::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_savedPreLaunch,0);
  _objc_storeStrong(param_1 + (long)_activityHandler,0);
  _objc_destroyWeak(param_1 + (long)_logger);
  return;
}

