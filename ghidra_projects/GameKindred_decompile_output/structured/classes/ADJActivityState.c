// classes/ADJActivityState — 45 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID ADJActivityState::init(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  ID local_50;
  class_t *local_48;
  
  local_48 = &objc::class_t::ADJActivityState;
  local_50 = param_1;
  lVar1 = _objc_msgSendSuper2(&local_50,"init");
  if (lVar1 == 0) {
    IVar4 = 0;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"adjCreateUuid");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar1,"assignUuid:",uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_msgSend(lVar1,"setEventCount:",0);
    _objc_msgSend(lVar1,"setSessionCount:",0);
    _objc_msgSend(lVar1,"setSubsessionCount:",0xffffffff);
    _objc_msgSend(0xbff0000000000000,lVar1,"setSessionLength:");
    _objc_msgSend(0xbff0000000000000,lVar1,"setTimeSpent:");
    _objc_msgSend(0xbff0000000000000,lVar1,"setLastActivity:");
    _objc_msgSend(0xbff0000000000000,lVar1,"setLastInterval:");
    _objc_msgSend(lVar1,"setEnabled:",1);
    _objc_msgSend(lVar1,"setAskingAttribution:",0);
    _objc_msgSend(lVar1,"setDeviceToken:",0);
    _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",10);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar1,"setTransactionIds:",uVar2);
    _objc_release(uVar2);
    _objc_msgSend(lVar1,"setUpdatePackages:",0);
    IVar4 = _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  return IVar4;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::saveAppToken_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_3);
  _objc_sync_enter(param_1);
  uVar3 = _objc_retain(param_1);
  uVar1 = DAT_101ea5fe8;
  DAT_101ea5fe8 = uVar2;
  _objc_release(uVar1);
  _objc_sync_exit(uVar3);
  _objc_release(uVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::resetSessionAttributes_(ID param_1,SEL param_2,double param_3)

{
  setSubsessionCount_(param_1,(SEL)"setSubsessionCount:",1);
  setSessionLength_(param_1,(SEL)"setSessionLength:",0.0);
  setTimeSpent_(param_1,(SEL)"setTimeSpent:",0.0);
  _objc_msgSend(0xbff0000000000000,param_1,"setLastInterval:");
  _objc_msgSend(param_3,param_1,"setLastActivity:");
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::addTransactionId_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  
  uVar1 = _objc_retain(param_3);
  transactionIds(param_1,(SEL)"transactionIds");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",10);
    IVar3 = _objc_retainAutoreleasedReturnValue();
    setTransactionIds_(param_1,(SEL)"setTransactionIds:",IVar3);
    _objc_release(IVar3);
  }
  transactionIds(param_1,(SEL)"transactionIds");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend(uVar4,"count");
  _objc_release(uVar4);
  if (lVar2 == 10) {
    transactionIds(param_1,(SEL)"transactionIds");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"removeObjectAtIndex:",0);
    _objc_release(uVar4);
  }
  transactionIds(param_1,(SEL)"transactionIds");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"addObject:",param_3);
  _objc_release(uVar1);
  _objc_release(uVar4);
  return;
}




/* Function Stack Size: 0x18 bytes */

bool ADJActivityState::findTransactionId_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_3);
  transactionIds(param_1,(SEL)"transactionIds");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  bVar1 = _objc_msgSend(uVar3,"containsObject:",param_3);
  _objc_release(uVar2);
  _objc_release(uVar3);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::assignUuid_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  
  IVar1 = _objc_retain(param_3);
  generateUniqueKey(param_1,(SEL)"generateUniqueKey");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJKeychain,"valueForKeychainKeyV2:service:",uVar2,&cf_deviceInfo);
  IVar3 = _objc_retainAutoreleasedReturnValue();
  if (IVar3 != 0) {
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSUUID,"alloc");
    lVar5 = _objc_msgSend(uVar4,"initWithUUIDString:",IVar3);
    _objc_release();
    if (lVar5 != 0) {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"verbose:",&cf_Valuefoundandreadfromthekeychainv2way);
      _objc_release(uVar4);
      assignUuidOldMethod_(param_1,(SEL)"assignUuidOldMethod:",IVar3);
    }
  }
  assignUuidOldMethod_(param_1,(SEL)"assignUuidOldMethod:",IVar1);
  _objc_release(IVar3);
  _objc_release(uVar2);
  _objc_release(IVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::assignUuidOldMethod_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  long lVar5;
  
  IVar2 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJKeychain,"valueForKeychainKeyV1:service:",
                &cf_adjust_persisted_uuid,&cf_deviceInfo);
  IVar3 = _objc_retainAutoreleasedReturnValue();
  if (IVar3 != 0) {
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSUUID,"alloc");
    lVar5 = _objc_msgSend(uVar4,"initWithUUIDString:",IVar3);
    _objc_release();
    if (lVar5 != 0) {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"verbose:",&cf_Valuefoundandreadfromthekeychainv1way);
      _objc_release(uVar4);
      setUuid_(param_1,(SEL)"setUuid:",IVar3);
      setIsPersisted_(param_1,(SEL)"setIsPersisted:",1);
      goto LAB_10111863c;
    }
  }
  setUuid_(param_1,(SEL)"setUuid:",IVar2);
  uuid(param_1,(SEL)"uuid");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  bVar1 = _objc_msgSend(&objc::class_t::ADJKeychain,"setValue:forKeychainKey:inService:",uVar4,
                        &cf_adjust_persisted_uuid,&cf_deviceInfo);
  setIsPersisted_(param_1,(SEL)"setIsPersisted:",bVar1);
  _objc_release(uVar4);
LAB_10111863c:
  _objc_release(IVar3);
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityState::generateUniqueKey(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  SEL extraout_x1;
  
  if (DAT_101ea5fe8 == 0) {
    uVar1 = 0;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"bundleIdentifier");
    lVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar3,"adjSha1");
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
    }
    _objc_release(lVar2);
    param_2 = extraout_x1;
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar1,param_2);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityState::description(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  eventCount(param_1,(SEL)"eventCount");
  sessionCount(param_1,(SEL)"sessionCount");
  subsessionCount(param_1,(SEL)"subsessionCount");
  askingAttribution(param_1,(SEL)"askingAttribution");
  sessionLength(param_1,(SEL)"sessionLength");
  timeSpent(param_1,(SEL)"timeSpent");
  lastActivity(param_1,(SEL)"lastActivity");
  deviceToken(param_1,(SEL)"deviceToken");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                &cf_ec__dsc__dssc__dask__dsl___1fts___1fla___1fdt___);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

ID ADJActivityState::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ID IVar7;
  ID local_50;
  class_t *local_48;
  
  uVar2 = _objc_retain(param_3);
  local_48 = &objc::class_t::ADJActivityState;
  local_50 = param_1;
  lVar3 = _objc_msgSendSuper2(&local_50,"init");
  if (lVar3 == 0) {
    IVar7 = 0;
  }
  else {
    uVar4 = _objc_msgSend(uVar2,"decodeIntForKey:",&cf_eventCount);
    _objc_msgSend(lVar3,"setEventCount:",uVar4);
    uVar4 = _objc_msgSend(uVar2,"decodeIntForKey:",&cf_sessionCount);
    _objc_msgSend(lVar3,"setSessionCount:",uVar4);
    uVar4 = _objc_msgSend(uVar2,"decodeIntForKey:",&cf_subsessionCount);
    _objc_msgSend(lVar3,"setSubsessionCount:",uVar4);
    _objc_msgSend(uVar2,"decodeDoubleForKey:",&cf_sessionLength);
    _objc_msgSend(lVar3,"setSessionLength:");
    _objc_msgSend(uVar2,"decodeDoubleForKey:",&cf_timeSpent);
    _objc_msgSend(lVar3,"setTimeSpent:");
    _objc_msgSend(uVar2,"decodeDoubleForKey:",&cf_lastActivity);
    _objc_msgSend(lVar3,"setLastActivity:");
    iVar1 = _objc_msgSend(uVar2,"containsValueForKey:",&cf_uuid);
    if (iVar1 != 0) {
      _objc_msgSend(uVar2,"decodeObjectForKey:",&cf_uuid);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar3,"assignUuid:",uVar4);
      _objc_release(uVar4);
    }
    _objc_msgSend(lVar3,"uuid");
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"adjCreateUuid");
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar3,"assignUuid:",uVar6);
      _objc_release(uVar6);
      _objc_release(uVar4);
    }
    iVar1 = _objc_msgSend(uVar2,"containsValueForKey:",&cf_transactionIds);
    if (iVar1 != 0) {
      _objc_msgSend(uVar2,"decodeObjectForKey:",&cf_transactionIds);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar3,"setTransactionIds:",uVar4);
      _objc_release(uVar4);
    }
    _objc_msgSend(lVar3,"transactionIds");
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 == 0) {
      _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"arrayWithCapacity:",10);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar3,"setTransactionIds:",uVar4);
      _objc_release(uVar4);
    }
    iVar1 = _objc_msgSend(uVar2,"containsValueForKey:",&cf_enabled);
    if (iVar1 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = _objc_msgSend(uVar2,"decodeBoolForKey:",&cf_enabled);
    }
    _objc_msgSend(lVar3,"setEnabled:",uVar4);
    iVar1 = _objc_msgSend(uVar2,"containsValueForKey:",&cf_askingAttribution);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = _objc_msgSend(uVar2,"decodeBoolForKey:",&cf_askingAttribution);
    }
    _objc_msgSend(lVar3,"setAskingAttribution:",uVar4);
    iVar1 = _objc_msgSend(uVar2,"containsValueForKey:",&cf_deviceToken);
    if (iVar1 != 0) {
      _objc_msgSend(uVar2,"decodeObjectForKey:",&cf_deviceToken);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar3,"setDeviceToken:",uVar4);
      _objc_release(uVar4);
    }
    iVar1 = _objc_msgSend(uVar2,"containsValueForKey:",&cf_updatePackages);
    if (iVar1 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = _objc_msgSend(uVar2,"decodeBoolForKey:",&cf_updatePackages);
    }
    _objc_msgSend(lVar3,"setUpdatePackages:",uVar4);
    iVar1 = _objc_msgSend(uVar2,"containsValueForKey:",&cf_adid);
    if (iVar1 != 0) {
      _objc_msgSend(uVar2,"decodeObjectForKey:",&cf_adid);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar3,"setAdid:",uVar4);
      _objc_release(uVar4);
    }
    iVar1 = _objc_msgSend(uVar2,"containsValueForKey:",&cf_attributionDetails);
    if (iVar1 != 0) {
      _objc_msgSend(uVar2,"decodeObjectForKey:",&cf_attributionDetails);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar3,"setAttributionDetails:",uVar4);
      _objc_release(uVar4);
    }
    _objc_msgSend(0xbff0000000000000,lVar3,"setLastInterval:");
    IVar7 = _objc_retain(lVar3);
  }
  _objc_release(uVar2);
  _objc_release(lVar3);
  return IVar7;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = _objc_retain(param_3);
  iVar1 = eventCount(param_1,(SEL)"eventCount");
  _objc_msgSend(param_3,"encodeInt:forKey:",iVar1,&cf_eventCount);
  iVar1 = sessionCount(param_1,(SEL)"sessionCount");
  _objc_msgSend(param_3,"encodeInt:forKey:",iVar1,&cf_sessionCount);
  iVar1 = subsessionCount(param_1,(SEL)"subsessionCount");
  _objc_msgSend(param_3,"encodeInt:forKey:",iVar1,&cf_subsessionCount);
  sessionLength(param_1,(SEL)"sessionLength");
  _objc_msgSend(param_3,"encodeDouble:forKey:",&cf_sessionLength);
  timeSpent(param_1,(SEL)"timeSpent");
  _objc_msgSend(param_3,"encodeDouble:forKey:",&cf_timeSpent);
  lastActivity(param_1,(SEL)"lastActivity");
  _objc_msgSend(param_3,"encodeDouble:forKey:",&cf_lastActivity);
  uuid(param_1,(SEL)"uuid");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_uuid);
  _objc_release(uVar4);
  transactionIds(param_1,(SEL)"transactionIds");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_transactionIds);
  _objc_release(uVar4);
  bVar2 = enabled(param_1,(SEL)"enabled");
  _objc_msgSend(param_3,"encodeBool:forKey:",bVar2,&cf_enabled);
  bVar2 = askingAttribution(param_1,(SEL)"askingAttribution");
  _objc_msgSend(param_3,"encodeBool:forKey:",bVar2,&cf_askingAttribution);
  deviceToken(param_1,(SEL)"deviceToken");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_deviceToken);
  _objc_release(uVar4);
  bVar2 = updatePackages(param_1,(SEL)"updatePackages");
  _objc_msgSend(param_3,"encodeBool:forKey:",bVar2,&cf_updatePackages);
  adid(param_1,(SEL)"adid");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_adid);
  _objc_release(uVar4);
  attributionDetails(param_1,(SEL)"attributionDetails");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_attributionDetails);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}




/* Function Stack Size: 0x18 bytes */

ID ADJActivityState::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  double dVar6;
  
  uVar3 = _objc_msgSend(param_1,"class");
  IVar4 = _objc_msgSend(uVar3,"allocWithZone:",param_3);
  IVar4 = init(IVar4,(SEL)"init");
  if (IVar4 != 0) {
    iVar1 = sessionCount(param_1,(SEL)"sessionCount");
    setSessionCount_(IVar4,(SEL)"setSessionCount:",iVar1);
    iVar1 = subsessionCount(param_1,(SEL)"subsessionCount");
    setSubsessionCount_(IVar4,(SEL)"setSubsessionCount:",iVar1);
    dVar6 = sessionLength(param_1,(SEL)"sessionLength");
    setSessionLength_(IVar4,(SEL)"setSessionLength:",dVar6);
    dVar6 = timeSpent(param_1,(SEL)"timeSpent");
    setTimeSpent_(IVar4,(SEL)"setTimeSpent:",dVar6);
    uuid(param_1,(SEL)"uuid");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    IVar5 = _objc_msgSend(uVar3,"copyWithZone:",param_3);
    setUuid_(IVar4,(SEL)"setUuid:",IVar5);
    _objc_release(IVar5);
    _objc_release(uVar3);
    dVar6 = lastInterval(param_1,(SEL)"lastInterval");
    setLastInterval_(IVar4,(SEL)"setLastInterval:",dVar6);
    iVar1 = eventCount(param_1,(SEL)"eventCount");
    setEventCount_(IVar4,(SEL)"setEventCount:",iVar1);
    bVar2 = enabled(param_1,(SEL)"enabled");
    setEnabled_(IVar4,(SEL)"setEnabled:",bVar2);
    dVar6 = lastActivity(param_1,(SEL)"lastActivity");
    setLastActivity_(IVar4,(SEL)"setLastActivity:",dVar6);
    bVar2 = askingAttribution(param_1,(SEL)"askingAttribution");
    setAskingAttribution_(IVar4,(SEL)"setAskingAttribution:",bVar2);
    deviceToken(param_1,(SEL)"deviceToken");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    IVar5 = _objc_msgSend(uVar3,"copyWithZone:",param_3);
    setDeviceToken_(IVar4,(SEL)"setDeviceToken:",IVar5);
    _objc_release(IVar5);
    _objc_release(uVar3);
    bVar2 = updatePackages(param_1,(SEL)"updatePackages");
    setUpdatePackages_(IVar4,(SEL)"setUpdatePackages:",bVar2);
  }
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

bool ADJActivityState::enabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_enabled);
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityState::setEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_enabled) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJActivityState::askingAttribution(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_askingAttribution);
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityState::setAskingAttribution_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_askingAttribution) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityState::uuid(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_uuid,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::setUuid_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityState::deviceToken(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_deviceToken,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::setDeviceToken_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJActivityState::updatePackages(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_updatePackages);
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityState::setUpdatePackages_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_updatePackages) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityState::adid(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_adid,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::setAdid_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityState::attributionDetails(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attributionDetails);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::setAttributionDetails_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_attributionDetails,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

int ADJActivityState::eventCount(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_eventCount);
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityState::setEventCount_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_eventCount) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

int ADJActivityState::sessionCount(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_sessionCount);
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityState::setSessionCount_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_sessionCount) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

int ADJActivityState::subsessionCount(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_subsessionCount);
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityState::setSubsessionCount_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_subsessionCount) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

double ADJActivityState::timeSpent(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_timeSpent);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::setTimeSpent_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_timeSpent) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

double ADJActivityState::lastActivity(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lastActivity);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::setLastActivity_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastActivity) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

double ADJActivityState::sessionLength(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_sessionLength);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::setSessionLength_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_sessionLength) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityState::transactionIds(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_transactionIds);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::setTransactionIds_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_transactionIds,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJActivityState::isPersisted(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_isPersisted);
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityState::setIsPersisted_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_isPersisted) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

double ADJActivityState::lastInterval(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lastInterval);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityState::setLastInterval_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lastInterval) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityState::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_transactionIds,0);
  _objc_storeStrong(param_1 + (long)_attributionDetails,0);
  _objc_storeStrong(param_1 + (long)_adid,0);
  _objc_storeStrong(param_1 + (long)_deviceToken,0);
  _objc_storeStrong(param_1 + (long)_uuid,0);
  return;
}

