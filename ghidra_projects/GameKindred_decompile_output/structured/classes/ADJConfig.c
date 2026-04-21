// classes/ADJConfig — 32 functions
#include "GameKindred.h"




/* Function Stack Size: 0x20 bytes */

ID ADJConfig::configWithAppToken_environment_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  uVar3 = _objc_msgSend(&objc::class_t::ADJConfig,"alloc");
  uVar3 = _objc_msgSend(uVar3,"initWithAppToken:environment:",uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x20 bytes */

ID ADJConfig::initWithAppToken_environment_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_retain(param_3);
  IVar2 = initWithAppToken_environment_allowSuppressLogLevel_
                    (param_1,(SEL)"initWithAppToken:environment:allowSuppressLogLevel:",IVar1,
                     param_4,0);
  _objc_release(IVar1);
  return IVar2;
}




/* Function Stack Size: 0x14 bytes */

void ADJConfig::setLogLevel_(ID param_1,SEL param_2,int param_3)

{
  ID IVar1;
  
  environment(param_1,(SEL)"environment");
  IVar1 = _objc_retainAutoreleasedReturnValue();
  setLogLevel_environment_(param_1,(SEL)"setLogLevel:environment:",param_3,IVar1);
  _objc_release(IVar1);
  return;
}




/* Function Stack Size: 0x1c bytes */

void ADJConfig::setLogLevel_environment_(ID param_1,SEL param_2,int param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_4);
  logger(param_1,(SEL)"logger");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend(&cf_production,"isEqualToString:",uVar1);
  _objc_release(uVar1);
  _objc_msgSend(uVar2,"setLogLevel:isProductionEnvironment:",param_3,uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJConfig::setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  cfstringStruct *pcVar11;
  
  uVar7 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar7);
  if (iVar1 == 0) {
    iVar1 = _objc_msgSend(uVar7,"respondsToSelector:","adjustAttributionChanged:");
    if (iVar1 != 0) {
      logger(param_1,(SEL)"logger");
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar8,"debug:",&cf_DelegateimplementsadjustAttributionChanged_);
      _objc_release(uVar8);
    }
    iVar2 = _objc_msgSend(uVar7,"respondsToSelector:","adjustEventTrackingSucceeded:");
    if (iVar2 != 0) {
      logger(param_1,(SEL)"logger");
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar8,"debug:",&cf_DelegateimplementsadjustEventTrackingSucceeded_);
      _objc_release(uVar8);
    }
    iVar3 = _objc_msgSend(uVar7,"respondsToSelector:","adjustEventTrackingFailed:");
    if (iVar3 != 0) {
      logger(param_1,(SEL)"logger");
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar8,"debug:",&cf_DelegateimplementsadjustEventTrackingFailed_);
      _objc_release(uVar8);
    }
    iVar4 = _objc_msgSend(uVar7,"respondsToSelector:","adjustSessionTrackingSucceeded:");
    if (iVar4 != 0) {
      logger(param_1,(SEL)"logger");
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar8,"debug:",&cf_DelegateimplementsadjustSessionTrackingSucceeded_);
      _objc_release(uVar8);
    }
    iVar5 = _objc_msgSend(uVar7,"respondsToSelector:","adjustSessionTrackingFailed:");
    if (iVar5 != 0) {
      logger(param_1,(SEL)"logger");
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar8,"debug:",&cf_DelegateimplementsadjustSessionTrackingFailed_);
      _objc_release(uVar8);
    }
    iVar6 = _objc_msgSend(uVar7,"respondsToSelector:","adjustDeeplinkResponse:");
    uVar8 = uVar7;
    if (iVar6 != 0) {
      logger(param_1,(SEL)"logger");
      uVar9 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar9,"debug:",&cf_DelegateimplementsadjustDeeplinkResponse_);
      _objc_release(uVar9);
      goto LAB_101129d14;
    }
    if (iVar5 != 0 || (iVar4 != 0 || (iVar3 != 0 || (iVar2 != 0 || iVar1 != 0))))
    goto LAB_101129d14;
    logger(param_1,(SEL)"logger");
    uVar8 = _objc_retainAutoreleasedReturnValue();
    pcVar10 = "error:";
    pcVar11 = &cf_Delegatedoesnotimplementanyoptionalmethod;
  }
  else {
    logger(param_1,(SEL)"logger");
    uVar8 = _objc_retainAutoreleasedReturnValue();
    pcVar10 = "warn:";
    pcVar11 = &cf_Delegateisnil;
  }
  _objc_msgSend(uVar8,pcVar10,pcVar11);
  _objc_release(uVar8);
  uVar8 = 0;
LAB_101129d14:
  _objc_storeWeak(param_1 + (long)_delegate,uVar8);
  _objc_release(uVar7);
  return;
}




/* Function Stack Size: 0x18 bytes */

bool ADJConfig::checkEnvironment_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  bool bVar5;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar2);
  if (iVar1 == 0) {
    iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_sandbox);
    if (iVar1 == 0) {
      iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_production);
      logger(param_1,(SEL)"logger");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      if (iVar1 == 0) {
        pcVar4 = &cf_Unknownenvironment____;
        goto LAB_101129e68;
      }
      pcVar4 = &
               cf_PRODUCTION_AdjustisrunninginProductionmode_Usethissettingonlyforthebuildthatyouwanttopublish_Settheenvironmentto_sandbox_ifyouwanttotestyourapp_
      ;
    }
    else {
      logger(param_1,(SEL)"logger");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      pcVar4 = &
               cf_SANDBOX_AdjustisrunninginSandboxmode_Usethissettingfortesting_Don_tforgettosettheenvironmentto_production_beforepublishing
      ;
    }
    _objc_msgSend(uVar3,"warnInProduction:",pcVar4);
    _objc_release(uVar3);
    bVar5 = 1;
  }
  else {
    logger(param_1,(SEL)"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_Missingenvironment;
LAB_101129e68:
    _objc_msgSend(uVar3,"error:",pcVar4);
    _objc_release(uVar3);
    bVar5 = 0;
  }
  _objc_release(uVar2);
  return bVar5;
}




/* Function Stack Size: 0x18 bytes */

bool ADJConfig::checkAppToken_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  bool bVar6;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar2);
  if (iVar1 == 0) {
    lVar4 = _objc_msgSend(uVar2,"length");
    if (lVar4 == 0xc) {
      bVar6 = 1;
      goto LAB_101129f6c;
    }
    logger(param_1,(SEL)"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_MalformedAppToken____;
  }
  else {
    logger(param_1,(SEL)"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_MissingAppToken;
  }
  _objc_msgSend(uVar3,"error:",pcVar5);
  _objc_release(uVar3);
  bVar6 = 0;
LAB_101129f6c:
  _objc_release(uVar2);
  return bVar6;
}




/* Function Stack Size: 0x10 bytes */

bool ADJConfig::isValid(ID param_1,SEL param_2)

{
  long lVar1;
  
  appToken(param_1,(SEL)"appToken");
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (bool)(lVar1 != 0);
}




/* Function Stack Size: 0x18 bytes */

ID ADJConfig::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  double dVar8;
  
  uVar3 = _objc_msgSend(param_1,"class");
  uVar3 = _objc_msgSend(uVar3,"allocWithZone:",param_3);
  IVar4 = _objc_msgSend(uVar3,"init");
  if (IVar4 != 0) {
    appToken(param_1,(SEL)"appToken");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend(uVar3,"copyWithZone:",param_3);
    uVar7 = *(undefined8 *)(IVar4 + (long)_appToken);
    *(undefined8 *)(IVar4 + (long)_appToken) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar3);
    environment(param_1,(SEL)"environment");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend(uVar3,"copyWithZone:",param_3);
    uVar7 = *(undefined8 *)(IVar4 + (long)_environment);
    *(undefined8 *)(IVar4 + (long)_environment) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar3);
    iVar1 = logLevel(param_1,(SEL)"logLevel");
    setLogLevel_(IVar4,(SEL)"setLogLevel:",iVar1);
    sdkPrefix(param_1,(SEL)"sdkPrefix");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    IVar6 = _objc_msgSend(uVar3,"copyWithZone:",param_3);
    setSdkPrefix_(IVar4,(SEL)"setSdkPrefix:",IVar6);
    _objc_release(IVar6);
    _objc_release(uVar3);
    defaultTracker(param_1,(SEL)"defaultTracker");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    IVar6 = _objc_msgSend(uVar3,"copyWithZone:",param_3);
    setDefaultTracker_(IVar4,(SEL)"setDefaultTracker:",IVar6);
    _objc_release(IVar6);
    _objc_release(uVar3);
    bVar2 = eventBufferingEnabled(param_1,(SEL)"eventBufferingEnabled");
    setEventBufferingEnabled_(IVar4,(SEL)"setEventBufferingEnabled:",bVar2);
    bVar2 = sendInBackground(param_1,(SEL)"sendInBackground");
    setSendInBackground_(IVar4,(SEL)"setSendInBackground:",bVar2);
    dVar8 = delayStart(param_1,(SEL)"delayStart");
    setDelayStart_(IVar4,(SEL)"setDelayStart:",dVar8);
    userAgent(param_1,(SEL)"userAgent");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    IVar6 = _objc_msgSend(uVar3,"copyWithZone:",param_3);
    setUserAgent_(IVar4,(SEL)"setUserAgent:",IVar6);
    _objc_release(IVar6);
    _objc_release(uVar3);
    bVar2 = isDeviceKnown(param_1,(SEL)"isDeviceKnown");
    setIsDeviceKnown_(IVar4,(SEL)"setIsDeviceKnown:",bVar2);
    secretId(param_1,(SEL)"secretId");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend(uVar3,"copyWithZone:",param_3);
    uVar7 = *(undefined8 *)(IVar4 + (long)_secretId);
    *(undefined8 *)(IVar4 + (long)_secretId) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar3);
    appSecret(param_1,(SEL)"appSecret");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_msgSend(uVar3,"copyWithZone:",param_3);
    uVar7 = *(undefined8 *)(IVar4 + (long)_appSecret);
    *(undefined8 *)(IVar4 + (long)_appSecret) = uVar5;
    _objc_release(uVar7);
    _objc_release(uVar3);
  }
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID ADJConfig::sdkPrefix(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_sdkPrefix,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJConfig::setSdkPrefix_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJConfig::defaultTracker(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_defaultTracker,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJConfig::setDefaultTracker_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJConfig::appToken(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_appToken,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJConfig::environment(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_environment,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

int ADJConfig::logLevel(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_logLevel);
}




/* Function Stack Size: 0x10 bytes */

bool ADJConfig::eventBufferingEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_eventBufferingEnabled);
}




/* Function Stack Size: 0x14 bytes */

void ADJConfig::setEventBufferingEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_eventBufferingEnabled) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJConfig::delegate(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_delegate);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJConfig::sendInBackground(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_sendInBackground);
}




/* Function Stack Size: 0x14 bytes */

void ADJConfig::setSendInBackground_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_sendInBackground) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

double ADJConfig::delayStart(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_delayStart);
}




/* Function Stack Size: 0x18 bytes */

void ADJConfig::setDelayStart_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_delayStart) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJConfig::userAgent(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_userAgent,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJConfig::setUserAgent_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJConfig::isDeviceKnown(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_isDeviceKnown);
}




/* Function Stack Size: 0x14 bytes */

void ADJConfig::setIsDeviceKnown_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_isDeviceKnown) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJConfig::secretId(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_secretId,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJConfig::appSecret(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_appSecret,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJConfig::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJConfig::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJConfig::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + (long)_logger);
  _objc_storeStrong(param_1 + (long)_appSecret,0);
  _objc_storeStrong(param_1 + (long)_secretId,0);
  _objc_storeStrong(param_1 + (long)_userAgent,0);
  _objc_destroyWeak(param_1 + (long)_delegate);
  _objc_storeStrong(param_1 + (long)_environment,0);
  _objc_storeStrong(param_1 + (long)_appToken,0);
  _objc_storeStrong(param_1 + (long)_defaultTracker,0);
  _objc_storeStrong(param_1 + (long)_sdkPrefix,0);
  return;
}

