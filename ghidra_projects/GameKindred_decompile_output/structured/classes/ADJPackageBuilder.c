// classes/ADJPackageBuilder — 37 functions
#include "GameKindred.h"




/* Function Stack Size: 0x14 bytes */

ID ADJPackageBuilder::buildSessionPackage_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  attributableParameters_(param_1,(SEL)"attributableParameters:",param_3);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  defaultActivityPackage(param_1,(SEL)"defaultActivityPackage");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setPath:",&cf__session);
  _objc_msgSend(uVar2,"setActivityKind:",1);
  _objc_msgSend(uVar2,"setSuffix:",&cf___);
  _objc_msgSend(uVar2,"setParameters:",uVar1);
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x1c bytes */

ID ADJPackageBuilder::buildEventPackage_isInDelay_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  IVar2 = _objc_retain(param_3);
  defaultParameters(param_1,(SEL)"defaultParameters");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  activityState(param_1,(SEL)"activityState");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend(uVar4,"eventCount");
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setInt:forKey:",uVar3,uVar5,
                &cf_event_count);
  _objc_release(uVar4);
  _objc_msgSend(IVar2,"revenue");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setNumber:forKey:",uVar3,uVar4,
                &cf_revenue);
  _objc_release(uVar4);
  _objc_msgSend(IVar2,"currency");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar4,
                &cf_currency);
  _objc_release(uVar4);
  _objc_msgSend(IVar2,"eventToken");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar4,
                &cf_event_token);
  _objc_release(uVar4);
  if ((param_4 & 1) == 0) {
    sessionParameters(param_1,(SEL)"sessionParameters");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"callbackParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(IVar2,"callbackParameters");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJUtil,"mergeParameters:source:parameterName:",uVar5,uVar6,
                  &cf_Callback);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    sessionParameters(param_1,(SEL)"sessionParameters");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"partnerParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(IVar2,"partnerParameters");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJUtil,"mergeParameters:source:parameterName:",uVar5,uVar6,
                  &cf_Partner);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDictionary:forKey:",uVar3,uVar7,
                  &cf_callback_params);
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDictionary:forKey:",uVar3,uVar8,
                  &cf_partner_params);
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  iVar1 = _objc_msgSend(IVar2,"emptyReceipt");
  if (iVar1 == 0) {
    _objc_msgSend(IVar2,"receipt");
    lVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 == 0) goto LAB_10111c44c;
    _objc_msgSend(IVar2,"receipt");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"adjEncodeBase64");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar4,
                  &cf_receipt);
    _objc_msgSend(IVar2,"transactionId");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar5,
                  &cf_transaction_id);
    _objc_release(uVar5);
  }
  else {
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,&cf_empty,
                  &cf_receipt);
    _objc_msgSend(IVar2,"transactionId");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar4,
                  &cf_transaction_id);
  }
  _objc_release(uVar4);
LAB_10111c44c:
  defaultActivityPackage(param_1,(SEL)"defaultActivityPackage");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"setPath:",&cf__event);
  _objc_msgSend(uVar4,"setActivityKind:",2);
  eventSuffix_(param_1,(SEL)"eventSuffix:",IVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"setSuffix:",uVar5);
  _objc_release(uVar5);
  _objc_msgSend(uVar4,"setParameters:",uVar3);
  if (param_4 != 0) {
    _objc_msgSend(IVar2,"callbackParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"setCallbackParameters:",uVar5);
    _objc_release(uVar5);
    _objc_msgSend(IVar2,"partnerParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"setPartnerParameters:",uVar5);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  _objc_release(IVar2);
  IVar2 = _objc_autoreleaseReturnValue(uVar4);
  return IVar2;
}




/* Function Stack Size: 0x18 bytes */

ID ADJPackageBuilder::buildClickPackage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  
  uVar1 = _objc_retain(param_3);
  attributableParameters_(param_1,(SEL)"attributableParameters:",0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar2,uVar1,
                &cf_source);
  _objc_release(uVar1);
  deeplinkParameters(param_1,(SEL)"deeplinkParameters");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDictionary:forKey:",uVar2,uVar1,
                &cf_params);
  _objc_release(uVar1);
  clickTime(param_1,(SEL)"clickTime");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDate:forKey:",uVar2,uVar1,
                &cf_click_time);
  _objc_release(uVar1);
  purchaseTime(param_1,(SEL)"purchaseTime");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDate:forKey:",uVar2,uVar1,
                &cf_purchase_time);
  _objc_release(uVar1);
  attribution(param_1,(SEL)"attribution");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    attribution(param_1,(SEL)"attribution");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"trackerName");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar2,uVar4,
                  &cf_tracker);
    _objc_release(uVar4);
    _objc_release(uVar1);
    attribution(param_1,(SEL)"attribution");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"campaign");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar2,uVar4,
                  &cf_campaign);
    _objc_release(uVar4);
    _objc_release(uVar1);
    attribution(param_1,(SEL)"attribution");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"adgroup");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar2,uVar4,
                  &cf_adgroup);
    _objc_release(uVar4);
    _objc_release(uVar1);
    attribution(param_1,(SEL)"attribution");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"creative");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar2,uVar4,
                  &cf_creative);
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  attributionDetails(param_1,(SEL)"attributionDetails");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDictionary:forKey:",uVar2,uVar1,
                &cf_details);
  _objc_release(uVar1);
  deeplink(param_1,(SEL)"deeplink");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar2,uVar1,
                &cf_deeplink);
  _objc_release(uVar1);
  defaultActivityPackage(param_1,(SEL)"defaultActivityPackage");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setPath:",&cf__sdk_click);
  _objc_msgSend(uVar1,"setActivityKind:",4);
  _objc_msgSend(uVar1,"setSuffix:",&cf___);
  _objc_msgSend(uVar1,"setParameters:",uVar2);
  _objc_release(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar1);
  return IVar5;
}




/* Function Stack Size: 0x18 bytes */

ID ADJPackageBuilder::buildInfoPackage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  
  uVar1 = _objc_retain(param_3);
  idsParameters(param_1,(SEL)"idsParameters");
  IVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",IVar2,uVar1,
                &cf_source);
  _objc_release(uVar1);
  activityState(param_1,(SEL)"activityState");
  IVar3 = _objc_retainAutoreleasedReturnValue();
  injectPushToken_intoParamters_(param_1,(SEL)"injectPushToken:intoParamters:",IVar3,IVar2);
  _objc_release(IVar3);
  defaultActivityPackage(param_1,(SEL)"defaultActivityPackage");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setPath:",&cf__sdk_info);
  _objc_msgSend(uVar1,"setActivityKind:",6);
  _objc_msgSend(uVar1,"setSuffix:",&cf___);
  _objc_msgSend(uVar1,"setParameters:",IVar2);
  _objc_release(IVar2);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::buildAttributionPackage(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  idsParameters(param_1,(SEL)"idsParameters");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  defaultActivityPackage(param_1,(SEL)"defaultActivityPackage");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setPath:",&cf__attribution);
  _objc_msgSend(uVar2,"setActivityKind:",5);
  _objc_msgSend(uVar2,"setSuffix:",&cf___);
  _objc_msgSend(uVar2,"setParameters:",uVar1);
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::defaultActivityPackage(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar1 = _objc_msgSend(&objc::class_t::ADJActivityPackage,"alloc");
  uVar1 = _objc_msgSend(uVar1,"init");
  deviceInfo(param_1,(SEL)"deviceInfo");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"clientSdk");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setClientSdk:",uVar3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar1);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::idsParameters(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  IVar1 = _objc_retainAutoreleasedReturnValue();
  deviceInfo(param_1,(SEL)"deviceInfo");
  IVar2 = _objc_retainAutoreleasedReturnValue();
  injectDeviceInfoIds_intoParameters_
            (param_1,(SEL)"injectDeviceInfoIds:intoParameters:",IVar2,IVar1);
  _objc_release(IVar2);
  adjustConfig(param_1,(SEL)"adjustConfig");
  IVar2 = _objc_retainAutoreleasedReturnValue();
  injectConfig_intoParameters_(param_1,(SEL)"injectConfig:intoParameters:",IVar2,IVar1);
  _objc_release(IVar2);
  activityState(param_1,(SEL)"activityState");
  IVar2 = _objc_retainAutoreleasedReturnValue();
  injectIosUuid_intoParamters_(param_1,(SEL)"injectIosUuid:intoParamters:",IVar2,IVar1);
  _objc_release(IVar2);
  injectCommonParameters_(param_1,(SEL)"injectCommonParameters:",IVar1);
  IVar1 = _objc_autoreleaseReturnValue(IVar1);
  return IVar1;
}




/* Function Stack Size: 0x14 bytes */

ID ADJPackageBuilder::attributableParameters_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  defaultParameters(param_1,(SEL)"defaultParameters");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"getUpdateTime");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar1,uVar2,
                &cf_app_updated_at);
  _objc_release(uVar2);
  _objc_msgSend(&objc::class_t::ADJUtil,"getInstallTime");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar1,uVar2,
                &cf_installed_at);
  _objc_release(uVar2);
  activityState(param_1,(SEL)"activityState");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"lastInterval");
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDuration:forKey:",uVar1,
                &cf_last_interval);
  _objc_release(uVar2);
  adjustConfig(param_1,(SEL)"adjustConfig");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"defaultTracker");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar1,uVar3,
                &cf_default_tracker);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if ((param_3 & 1) == 0) {
    sessionParameters(param_1,(SEL)"sessionParameters");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"callbackParameters");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDictionary:forKey:",uVar1,uVar3,
                  &cf_callback_params);
    _objc_release(uVar3);
    _objc_release(uVar2);
    sessionParameters(param_1,(SEL)"sessionParameters");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"partnerParameters");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDictionary:forKey:",uVar1,uVar3,
                  &cf_partner_params);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar1);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::defaultParameters(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
  IVar1 = _objc_retainAutoreleasedReturnValue();
  deviceInfo(param_1,(SEL)"deviceInfo");
  IVar2 = _objc_retainAutoreleasedReturnValue();
  injectDeviceInfo_intoParameters_(param_1,(SEL)"injectDeviceInfo:intoParameters:",IVar2,IVar1);
  _objc_release(IVar2);
  adjustConfig(param_1,(SEL)"adjustConfig");
  IVar2 = _objc_retainAutoreleasedReturnValue();
  injectConfig_intoParameters_(param_1,(SEL)"injectConfig:intoParameters:",IVar2,IVar1);
  _objc_release(IVar2);
  activityState(param_1,(SEL)"activityState");
  IVar2 = _objc_retainAutoreleasedReturnValue();
  injectActivityState_intoParamters_(param_1,(SEL)"injectActivityState:intoParamters:",IVar2,IVar1);
  _objc_release(IVar2);
  injectCommonParameters_(param_1,(SEL)"injectCommonParameters:",IVar1);
  IVar1 = _objc_autoreleaseReturnValue(IVar1);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::injectCommonParameters_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = _objc_retain(param_3);
  createdAt(param_1,(SEL)"createdAt");
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setDate1970:forKey:",uVar1,
                &cf_created_at);
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setBool:forKey:",uVar1,1,
                &cf_attribution_deeplink);
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setBool:forKey:",uVar1,1,
                &cf_needs_response_details);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJPackageBuilder::injectConfig_intoParameters_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  _objc_msgSend(uVar2,"appToken");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar4,
                &cf_app_token);
  _objc_release(uVar4);
  _objc_msgSend(uVar2,"environment");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar4,
                &cf_environment);
  _objc_release(uVar4);
  uVar4 = _objc_msgSend(uVar2,"eventBufferingEnabled");
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setBool:forKey:",uVar3,uVar4,
                &cf_event_buffering_enabled);
  iVar1 = _objc_msgSend(uVar2,"isDeviceKnown");
  if (iVar1 != 0) {
    uVar4 = _objc_msgSend(uVar2,"isDeviceKnown");
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setBool:forKey:",uVar3,uVar4,
                  &cf_device_known);
  }
  _objc_msgSend(uVar2,"secretId");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar4,
                &cf_secret_id);
  _objc_release(uVar4);
  _objc_msgSend(uVar2,"appSecret");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar4,
                &cf_app_secret);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJPackageBuilder::injectIosUuid_intoParamters_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  
  lVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  if (lVar2 != 0) {
    iVar1 = _objc_msgSend(lVar2,"isPersisted");
    _objc_msgSend(lVar2,"uuid");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      pcVar5 = &cf_ios_uuid;
    }
    else {
      pcVar5 = &cf_persistent_ios_uuid;
    }
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar3,uVar4,
                  pcVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(lVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJPackageBuilder::injectPushToken_intoParamters_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = _objc_retain(param_3);
  if (lVar1 != 0) {
    uVar2 = _objc_retain(param_4);
    _objc_msgSend(lVar1,"deviceToken");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&objc::class_t::ADJPackageBuilder,"parameters:setString:forKey:",uVar2,uVar3,
                  &cf_push_token);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

ID ADJPackageBuilder::eventSuffix_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"revenue");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    _objc_msgSend(uVar1,"eventToken");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____);
    uVar6 = _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_msgSend(uVar1,"revenue");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"doubleValue");
    _objc_msgSend(uVar1,"currency");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"eventToken");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____5f________);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(uVar1);
  IVar7 = _objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::clickTime(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_clickTime,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setClickTime_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::purchaseTime(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_purchaseTime,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setPurchaseTime_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::deeplink(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_deeplink,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setDeeplink_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::attributionDetails(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_attributionDetails);
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setAttributionDetails_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_attributionDetails,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::deeplinkParameters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_deeplinkParameters);
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setDeeplinkParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_deeplinkParameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::attribution(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_attribution,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setAttribution_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

double ADJPackageBuilder::createdAt(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_createdAt);
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setCreatedAt_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_createdAt) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::adjustConfig(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_adjustConfig);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setAdjustConfig_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_adjustConfig,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::deviceInfo(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_deviceInfo);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setDeviceInfo_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_deviceInfo,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::activityState(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_activityState,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setActivityState_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJPackageBuilder::sessionParameters(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_sessionParameters);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJPackageBuilder::setSessionParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_sessionParameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJPackageBuilder::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + (long)_sessionParameters);
  _objc_storeStrong(param_1 + (long)_activityState,0);
  _objc_destroyWeak(param_1 + (long)_deviceInfo);
  _objc_destroyWeak(param_1 + (long)_adjustConfig);
  _objc_storeStrong(param_1 + (long)_attribution,0);
  _objc_storeStrong(param_1 + (long)_deeplinkParameters,0);
  _objc_storeStrong(param_1 + (long)_attributionDetails,0);
  _objc_storeStrong(param_1 + (long)_deeplink,0);
  _objc_storeStrong(param_1 + (long)_purchaseTime,0);
  _objc_storeStrong(param_1 + (long)_clickTime,0);
  return;
}

