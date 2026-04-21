// classes/AMPDeviceInfo — 18 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_20;
  class_t *local_18;
  
  local_18 = &objc::class_t::AMPDeviceInfo;
  local_20 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void AMPDeviceInfo::dealloc(ID param_1,SEL param_2)

{
  ID local_20;
  class_t *local_18;
  
  local_18 = &objc::class_t::AMPDeviceInfo;
  local_20 = param_1;
  _objc_msgSendSuper2(&local_20,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::appVersion(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  SEL extraout_x1;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = (long)_appVersion;
  lVar1 = *(long *)(param_1 + lVar7);
  if (lVar1 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"infoDictionary");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"valueForKey:",&cf_CFBundleShortVersionString);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    *(undefined8 *)(param_1 + lVar7) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + (long)_appVersion);
    param_2 = extraout_x1;
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar1,param_2);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::osName(ID param_1,SEL param_2)

{
  _objc_retainAutorelease(&cf_ios);
  return 0x101834b18;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::osVersion(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  SEL extraout_x1;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_osVersion;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 == 0) {
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"systemVersion");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + (long)_osVersion);
    param_2 = extraout_x1;
  }
  IVar4 = _objc_retainAutoreleaseReturnValue(lVar1,param_2);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::manufacturer(ID param_1,SEL param_2)

{
  _objc_retainAutorelease(&cf_Apple);
  return 0x101837058;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::model(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  SEL extraout_x1;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_model;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    _objc_msgSend(&objc::class_t::AMPDeviceInfo,"getPhoneModel");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar2;
    _objc_release(uVar4);
    lVar1 = *(long *)(param_1 + (long)_model);
    param_2 = extraout_x1;
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(lVar1,param_2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::carrier(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  SEL extraout_x1;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar10 = (long)_carrier;
  lVar1 = *(long *)(param_1 + lVar10);
  if (lVar1 == 0) {
    lVar1 = _NSClassFromString(&cf_CTTelephonyNetworkInfo);
    lVar2 = _NSSelectorFromString(&cf_subscriberCellularProvider);
    lVar3 = _NSSelectorFromString(&cf_carrierName);
    if (((lVar1 == 0) || (lVar2 == 0)) || (lVar3 == 0)) {
      pcVar6 = &cf_Unknown;
      _objc_retain(&cf_Unknown);
      goto LAB_10113b6e8;
    }
    uVar4 = _NSClassFromString(&cf_CTTelephonyNetworkInfo);
    uVar4 = _objc_msgSend(uVar4,"alloc");
    uVar4 = _objc_msgSend(uVar4,"init");
    lVar1 = (long)networkInfo;
    uVar8 = *(undefined8 *)(param_1 + lVar1);
    *(undefined8 *)(param_1 + lVar1) = uVar4;
    _objc_release(uVar8);
    pcVar5 = (code *)_objc_msgSend(*(undefined8 *)(param_1 + lVar1),"methodForSelector:",lVar2);
    if (pcVar5 == (code *)0x0) {
      uVar4 = 0;
    }
    else {
      (*pcVar5)(*(undefined8 *)(param_1 + lVar1),lVar2);
      uVar4 = _objc_retainAutoreleasedReturnValue();
    }
    pcVar5 = (code *)_objc_msgSend(uVar4,"methodForSelector:",lVar3);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(uVar4,lVar3);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + lVar10);
      *(undefined8 *)(param_1 + lVar10) = uVar8;
      _objc_release(uVar9);
    }
    _objc_release(uVar4);
    lVar1 = *(long *)(param_1 + (long)_carrier);
    param_2 = extraout_x1;
  }
  pcVar6 = (cfstringStruct *)_objc_retain(lVar1,param_2);
LAB_10113b6e8:
  IVar7 = _objc_autoreleaseReturnValue(pcVar6);
  return IVar7;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::country(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  SEL extraout_x1;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_country;
  lVar1 = *(long *)(param_1 + lVar8);
  if (lVar1 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSLocale,"localeWithLocaleIdentifier:",&cf_en_US);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)PTR__NSLocaleCountryCode_1014440a0;
    _objc_msgSend(&_OBJC_CLASS___NSLocale,"currentLocale");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"objectForKey:",uVar7);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"displayNameForKey:value:",uVar7,uVar4);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + (long)_country);
    param_2 = extraout_x1;
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar1,param_2);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::language(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  SEL extraout_x1;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = (long)_language;
  lVar1 = *(long *)(param_1 + lVar8);
  if (lVar1 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSLocale,"localeWithLocaleIdentifier:",&cf_en_US);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)PTR__NSLocaleLanguageCode_1014440a8;
    _objc_msgSend(&_OBJC_CLASS___NSLocale,"preferredLanguages");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"objectAtIndex:",0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"displayNameForKey:value:",uVar7,uVar4);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + lVar8);
    *(undefined8 *)(param_1 + lVar8) = uVar7;
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + (long)_language);
    param_2 = extraout_x1;
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar1,param_2);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::advertiserID(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ID IVar5;
  SEL extraout_x1;
  SEL extraout_x1_00;
  long lVar6;
  float fVar7;
  
  lVar6 = (long)_advertiserID;
  if (*(long *)(param_1 + lVar6) == 0) {
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"systemVersion");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    fVar7 = (float)_objc_msgSend(uVar2,"floatValue");
    _objc_release(uVar2);
    _objc_release(uVar1);
    param_2 = extraout_x1;
    if (6.0 <= fVar7) {
      _objc_msgSend(&objc::class_t::AMPDeviceInfo,"getAdvertiserID:",5);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      if ((lVar3 != 0) &&
         (uVar4 = _objc_msgSend(lVar3,"isEqualToString:",&cf_00000000_0000_0000_0000_000000000000),
         (uVar4 & 1) == 0)) {
        uVar1 = _objc_retain(lVar3);
        uVar2 = *(undefined8 *)(param_1 + lVar6);
        *(undefined8 *)(param_1 + lVar6) = uVar1;
        _objc_release(uVar2);
      }
      _objc_release(lVar3);
      param_2 = extraout_x1_00;
    }
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar6),param_2);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::vendorID(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ID IVar5;
  SEL extraout_x1;
  SEL extraout_x1_00;
  long lVar6;
  float fVar7;
  
  lVar6 = (long)_vendorID;
  if (*(long *)(param_1 + lVar6) == 0) {
    _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"systemVersion");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    fVar7 = (float)_objc_msgSend(uVar2,"floatValue");
    _objc_release(uVar2);
    _objc_release(uVar1);
    param_2 = extraout_x1;
    if (6.0 <= fVar7) {
      _objc_msgSend(&objc::class_t::AMPDeviceInfo,"getVendorID:",5);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      if ((lVar3 != 0) &&
         (uVar4 = _objc_msgSend(lVar3,"isEqualToString:",&cf_00000000_0000_0000_0000_000000000000),
         (uVar4 & 1) == 0)) {
        uVar1 = _objc_retain(lVar3);
        uVar2 = *(undefined8 *)(param_1 + lVar6);
        *(undefined8 *)(param_1 + lVar6) = uVar1;
        _objc_release(uVar2);
      }
      _objc_release(lVar3);
      param_2 = extraout_x1_00;
    }
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar6),param_2);
  return IVar5;
}




/* Function Stack Size: 0x14 bytes */

ID AMPDeviceInfo::getAdvertiserID_(ID param_1,SEL param_2,int param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  
  lVar1 = _NSClassFromString(&cf_ASIdentifierManager);
  lVar2 = _NSSelectorFromString(&cf_sharedManager);
  lVar3 = _NSSelectorFromString(&cf_advertisingIdentifier);
  lVar7 = 0;
  if (((lVar1 == 0) || (lVar2 == 0)) || (lVar3 == 0)) goto LAB_10113bcb4;
  pcVar4 = (code *)_objc_msgSend(lVar1,"methodForSelector:",lVar2);
  if (pcVar4 == (code *)0x0) {
    uVar5 = 0;
  }
  else {
    (*pcVar4)(lVar1,lVar2);
    uVar5 = _objc_retainAutoreleasedReturnValue();
  }
  pcVar4 = (code *)_objc_msgSend(uVar5,"methodForSelector:",lVar3);
  if (pcVar4 == (code *)0x0) {
LAB_10113bc58:
    lVar7 = 0;
  }
  else {
    (*pcVar4)(uVar5,lVar3);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) goto LAB_10113bc58;
    _objc_msgSend(lVar1,"UUIDString");
    lVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  if ((lVar7 == 0) && (0 < (int)param_3)) {
    _objc_msgSend(0x4014000000000000,&_OBJC_CLASS___NSThread,"sleepForTimeInterval:");
    _objc_msgSend(&objc::class_t::AMPDeviceInfo,"getAdvertiserID:",param_3 - 1);
    lVar7 = _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar5);
LAB_10113bcb4:
  IVar6 = _objc_autoreleaseReturnValue(lVar7);
  return IVar6;
}




/* Function Stack Size: 0x14 bytes */

ID AMPDeviceInfo::getVendorID_(ID param_1,SEL param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"identifierForVendor");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"UUIDString");
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (lVar3 == 0 && 0 < (int)param_3) {
    _objc_msgSend(0x4014000000000000,&_OBJC_CLASS___NSThread,"sleepForTimeInterval:");
    _objc_msgSend(&objc::class_t::AMPDeviceInfo,"getVendorID:",param_3 - 1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar1 = _objc_retain(lVar3);
  }
  _objc_release(lVar3);
  IVar4 = _objc_autoreleaseReturnValue(uVar1);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::generateUUID(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::AMPUtils,"generateUUID");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"stringByAppendingString:",&cf_R);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::getPlatformString(ID param_1,SEL param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  ID IVar3;
  size_t local_38;
  
  _sysctlbyname("hw.machine",(void *)0x0,&local_38,(void *)0x0,0);
  pvVar1 = _malloc(local_38);
  _sysctlbyname("hw.machine",pvVar1,&local_38,(void *)0x0,0);
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pvVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _free(pvVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDeviceInfo::getPhoneModel(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  
  getPlatformString(param_1,(SEL)"getPlatformString");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone1_1);
  if (iVar1 == 0) {
    iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone1_2);
    if (iVar1 == 0) {
      iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone2_1);
      if (iVar1 == 0) {
        iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone3_1);
        if ((iVar1 == 0) &&
           (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone3_3), iVar1 == 0)) {
          iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone4_1);
          if (iVar1 == 0) {
            iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone5_1);
            if ((iVar1 == 0) &&
               (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone5_2), iVar1 == 0)) {
              iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone6_1);
              if ((iVar1 == 0) &&
                 (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone6_2), iVar1 == 0)) {
                iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone7_1);
                if (iVar1 == 0) {
                  iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPhone7_2);
                  if (iVar1 == 0) {
                    iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPod1_1);
                    if (iVar1 == 0) {
                      iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPod2_1);
                      if (iVar1 == 0) {
                        iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPod3_1);
                        if (iVar1 == 0) {
                          iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPod4_1);
                          if (iVar1 == 0) {
                            iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPod5_1);
                            if (iVar1 == 0) {
                              iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad1_1);
                              if (iVar1 == 0) {
                                iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad2_1);
                                if ((((iVar1 == 0) &&
                                     (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad2_2),
                                     iVar1 == 0)) &&
                                    (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad2_3),
                                    iVar1 == 0)) &&
                                   (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad2_4),
                                   iVar1 == 0)) {
                                  iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad2_5);
                                  if (((iVar1 == 0) &&
                                      (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad2_6),
                                      iVar1 == 0)) &&
                                     (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad2_7),
                                     iVar1 == 0)) {
                                    iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad4_4);
                                    if (((iVar1 == 0) &&
                                        (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad4_5)
                                        , iVar1 == 0)) &&
                                       (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad4_6),
                                       iVar1 == 0)) {
                                      iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad4_7);
                                      if (((iVar1 == 0) &&
                                          (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                 &cf_iPad4_8), iVar1 == 0)) &&
                                         (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad4_9
                                                               ), iVar1 == 0)) {
                                        iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad3_1);
                                        if (((iVar1 == 0) &&
                                            (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                   &cf_iPad3_2), iVar1 == 0)) &&
                                           (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                  &cf_iPad3_3), iVar1 == 0)) {
                                          iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_iPad3_4
                                                               );
                                          if (((iVar1 == 0) &&
                                              (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                     &cf_iPad3_5), iVar1 == 0)) &&
                                             (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                    &cf_iPad3_6), iVar1 == 0)) {
                                            iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                  &cf_iPad4_1);
                                            if (((iVar1 == 0) &&
                                                (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                       &cf_iPad4_2), iVar1 == 0)) &&
                                               (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                      &cf_iPad4_3), iVar1 == 0)) {
                                              iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                    &cf_iPad5_3);
                                              if ((iVar1 == 0) &&
                                                 (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                        &cf_iPad5_4), iVar1 == 0)) {
                                                iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                      &cf_i386);
                                                if ((iVar1 == 0) &&
                                                   (iVar1 = _objc_msgSend(uVar2,"isEqualToString:",
                                                                          &cf_x86_64), iVar1 == 0))
                                                {
                                                  pcVar4 = (cfstringStruct *)_objc_retain(uVar2);
                                                  goto LAB_10113bfb0;
                                                }
                                                pcVar4 = &cf_Simulator;
                                              }
                                              else {
                                                pcVar4 = &cf_iPadAir2;
                                              }
                                            }
                                            else {
                                              pcVar4 = &cf_iPadAir;
                                            }
                                          }
                                          else {
                                            pcVar4 = &cf_iPad4;
                                          }
                                        }
                                        else {
                                          pcVar4 = &cf_iPad3;
                                        }
                                      }
                                      else {
                                        pcVar4 = &cf_iPadMini3;
                                      }
                                    }
                                    else {
                                      pcVar4 = &cf_iPadMini2;
                                    }
                                  }
                                  else {
                                    pcVar4 = &cf_iPadMini;
                                  }
                                }
                                else {
                                  pcVar4 = &cf_iPad2;
                                }
                              }
                              else {
                                pcVar4 = &cf_iPad1;
                              }
                            }
                            else {
                              pcVar4 = &cf_iPodTouch5G;
                            }
                          }
                          else {
                            pcVar4 = &cf_iPodTouch4G;
                          }
                        }
                        else {
                          pcVar4 = &cf_iPodTouch3G;
                        }
                      }
                      else {
                        pcVar4 = &cf_iPodTouch2G;
                      }
                    }
                    else {
                      pcVar4 = &cf_iPodTouch1G;
                    }
                  }
                  else {
                    pcVar4 = &cf_iPhone6;
                  }
                }
                else {
                  pcVar4 = &cf_iPhone6Plus;
                }
              }
              else {
                pcVar4 = &cf_iPhone5s;
              }
            }
            else {
              pcVar4 = &cf_iPhone5;
            }
          }
          else {
            pcVar4 = &cf_iPhone4S;
          }
        }
        else {
          pcVar4 = &cf_iPhone4;
        }
      }
      else {
        pcVar4 = &cf_iPhone3GS;
      }
    }
    else {
      pcVar4 = &cf_iPhone3G;
    }
  }
  else {
    pcVar4 = &cf_iPhone1;
  }
  _objc_retain(pcVar4);
LAB_10113bfb0:
  _objc_release(uVar2);
  IVar3 = _objc_autoreleaseReturnValue(pcVar4);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

void AMPDeviceInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_vendorID,0);
  _objc_storeStrong(param_1 + (long)_advertiserID,0);
  _objc_storeStrong(param_1 + (long)_language,0);
  _objc_storeStrong(param_1 + (long)_country,0);
  _objc_storeStrong(param_1 + (long)_carrier,0);
  _objc_storeStrong(param_1 + (long)_model,0);
  _objc_storeStrong(param_1 + (long)_osVersion,0);
  _objc_storeStrong(param_1 + (long)_appVersion,0);
  _objc_storeStrong(param_1 + (long)networkInfo,0);
  return;
}

