// classes/ADJDeviceInfo — 40 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJDeviceInfo::deviceInfoWithSdkPrefix_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(&objc::class_t::ADJDeviceInfo,"alloc");
  uVar2 = _objc_msgSend(uVar2,"initWithSdkPrefix:",uVar1);
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

ID ADJDeviceInfo::initWithSdkPrefix_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  ID local_70;
  class_t *local_68;
  
  lVar1 = _objc_retain(param_3);
  local_68 = &objc::class_t::ADJDeviceInfo;
  local_70 = param_1;
  lVar2 = _objc_msgSendSuper2(&local_70,"init");
  if (lVar2 == 0) {
    IVar9 = 0;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSLocale,"currentLocale");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"infoDictionary");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar8 = _objc_msgSend(uVar7,"adjTrackingEnabled");
    _objc_msgSend(lVar2,"setTrackingEnabled:",uVar8);
    _objc_release(uVar7);
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar7,"adjIdForAdvertisers");
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setIdForAdvertisers:",uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar7,"adjFbAttributionId");
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setFbAttributionId:",uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar7,"adjVendorId");
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setVendorId:",uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_msgSend(uVar6,"objectForKey:",*(undefined8 *)PTR__kCFBundleIdentifierKey_101444288);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setBundeIdentifier:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(uVar6,"objectForKey:",*(undefined8 *)PTR__kCFBundleVersionKey_101444290);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setBundleVersion:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(uVar5,"objectForInfoDictionaryKey:",&cf_CFBundleShortVersionString);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setBundleShortVersion:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(uVar4,"objectForKey:",*(undefined8 *)PTR__NSLocaleLanguageCode_1014440a8);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setLanguageCode:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(uVar4,"objectForKey:",*(undefined8 *)PTR__NSLocaleCountryCode_1014440a0);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setCountryCode:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(lVar2,"setOsName:",&cf_ios);
    _objc_msgSend(uVar3,"adjDeviceType");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setDeviceType:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(uVar3,"adjDeviceName");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setDeviceName:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(uVar3,"systemVersion");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setSystemVersion:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(&objc::class_t::ADJSystemProfile,"machineModel");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setMachineModel:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(&objc::class_t::ADJSystemProfile,"cpuSubtype");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setCpuSubtype:",uVar7);
    _objc_release(uVar7);
    _objc_msgSend(&objc::class_t::ADJSystemProfile,"osVersion");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setOsBuild:",uVar7);
    _objc_release(uVar7);
    if (lVar1 == 0) {
      _objc_msgSend(&objc::class_t::ADJUtil,"clientSdk");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar2,"setClientSdk:",uVar7);
    }
    else {
      _objc_msgSend(&objc::class_t::ADJUtil,"clientSdk");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar2,"setClientSdk:",uVar8);
      _objc_release(uVar8);
    }
    _objc_release(uVar7);
    _objc_msgSend(lVar2,"injectInstallReceipt:",uVar5);
    IVar9 = _objc_retain(lVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(lVar2);
  return IVar9;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::injectInstallReceipt_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ID IVar5;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(uVar1,"respondsToSelector:","appStoreReceiptURL");
  if ((uVar2 & 1) != 0) {
    _objc_msgSend(uVar1,"appStoreReceiptURL");
    lVar3 = _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      _objc_msgSend(&_OBJC_CLASS___NSData,"dataWithContentsOfURL:",lVar3);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        _objc_msgSend(lVar4,"adjEncodeBase64");
        IVar5 = _objc_retainAutoreleasedReturnValue();
        setInstallReceiptBase64_(param_1,(SEL)"setInstallReceiptBase64:",IVar5);
        _objc_release(IVar5);
      }
      _objc_release(lVar4);
    }
    _objc_release(lVar3);
  }
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::idForAdvertisers(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_idForAdvertisers,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setIdForAdvertisers_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::fbAttributionId(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_fbAttributionId,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setFbAttributionId_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJDeviceInfo::trackingEnabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_trackingEnabled);
}




/* Function Stack Size: 0x14 bytes */

void ADJDeviceInfo::setTrackingEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_trackingEnabled) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::vendorId(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_vendorId,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setVendorId_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::clientSdk(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_clientSdk,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setClientSdk_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::bundeIdentifier(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_bundeIdentifier,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setBundeIdentifier_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::bundleVersion(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_bundleVersion,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setBundleVersion_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::bundleShortVersion(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_bundleShortVersion,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setBundleShortVersion_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::deviceType(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_deviceType,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setDeviceType_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::deviceName(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_deviceName,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setDeviceName_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::osName(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_osName,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setOsName_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::systemVersion(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_systemVersion,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setSystemVersion_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::languageCode(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_languageCode,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setLanguageCode_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::countryCode(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_countryCode,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setCountryCode_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::machineModel(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_machineModel,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setMachineModel_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::cpuSubtype(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_cpuSubtype,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setCpuSubtype_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::installReceiptBase64(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_installReceiptBase64,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setInstallReceiptBase64_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJDeviceInfo::osBuild(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_osBuild,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJDeviceInfo::setOsBuild_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJDeviceInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_osBuild,0);
  _objc_storeStrong(param_1 + (long)_installReceiptBase64,0);
  _objc_storeStrong(param_1 + (long)_cpuSubtype,0);
  _objc_storeStrong(param_1 + (long)_machineModel,0);
  _objc_storeStrong(param_1 + (long)_countryCode,0);
  _objc_storeStrong(param_1 + (long)_languageCode,0);
  _objc_storeStrong(param_1 + (long)_systemVersion,0);
  _objc_storeStrong(param_1 + (long)_osName,0);
  _objc_storeStrong(param_1 + (long)_deviceName,0);
  _objc_storeStrong(param_1 + (long)_deviceType,0);
  _objc_storeStrong(param_1 + (long)_bundleShortVersion,0);
  _objc_storeStrong(param_1 + (long)_bundleVersion,0);
  _objc_storeStrong(param_1 + (long)_bundeIdentifier,0);
  _objc_storeStrong(param_1 + (long)_clientSdk,0);
  _objc_storeStrong(param_1 + (long)_vendorId,0);
  _objc_storeStrong(param_1 + (long)_fbAttributionId,0);
  _objc_storeStrong(param_1 + (long)_idForAdvertisers,0);
  return;
}

