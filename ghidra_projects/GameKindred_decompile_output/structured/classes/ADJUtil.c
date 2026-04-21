// classes/ADJUtil — 52 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

void ADJUtil::initialize(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"class");
  if (IVar1 != param_1) {
    return;
  }
  initializeUniversalLinkRegex(param_1,(SEL)"initializeUniversalLinkRegex");
  initializeSecondsNumberFormatter(param_1,(SEL)"initializeSecondsNumberFormatter");
  initializeShortUniversalLinkRegex(param_1,(SEL)"initializeShortUniversalLinkRegex");
  initializeOptionalRedirectRegex(param_1,(SEL)"initializeOptionalRedirectRegex");
  initializeUrlSessionConfiguration(param_1,(SEL)"initializeUrlSessionConfiguration");
  initializeReachability(param_1,(SEL)"initializeReachability");
  initializeNetworkInfoAndCarrier(param_1,(SEL)"initializeNetworkInfoAndCarrier");
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJUtil::teardown(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  uVar1 = DAT_101ea6038;
  DAT_101ea6038 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6040;
  DAT_101ea6040 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6048;
  DAT_101ea6048 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6050;
  DAT_101ea6050 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6058;
  DAT_101ea6058 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6060;
  DAT_101ea6060 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6068;
  DAT_101ea6068 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6070;
  DAT_101ea6070 = 0;
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJUtil::initializeUniversalLinkRegex(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  local_48 = 0;
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSRegularExpression,
                        "regularExpressionWithPattern:options:error:",
                        &cf_https__________ulink__adjust__com_ulink______,1,&local_48);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_retain(local_48);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNotNull:",uVar4);
  if (iVar1 == 0) {
    _objc_storeStrong(&DAT_101ea6038,uVar2);
  }
  else {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"description");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"error:",&cf_Universallinkregexruleerror____);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJUtil::initializeShortUniversalLinkRegex(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  local_48 = 0;
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSRegularExpression,
                        "regularExpressionWithPattern:options:error:",
                        &cf_http_s______a_z0_9__4___adj__st______,1,&local_48);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_retain(local_48);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNotNull:",uVar4);
  if (iVar1 == 0) {
    _objc_storeStrong(&DAT_101ea6050,uVar2);
  }
  else {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"description");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"error:",&cf_ShortUniversallinkregexruleerror____);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJUtil::initializeOptionalRedirectRegex(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  local_48 = 0;
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSRegularExpression,
                        "regularExpressionWithPattern:options:error:",&cf_adjust_redirect_______,1,
                        &local_48);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_retain(local_48);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNotNull:",uVar4);
  if (iVar1 == 0) {
    _objc_storeStrong(&DAT_101ea6048,uVar2);
  }
  else {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"description");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"error:",&cf_Optionalredirectregexruleerror____);
    _objc_release(uVar5);
    _objc_release(uVar2);
  }
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJUtil::initializeSecondsNumberFormatter(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNumberFormatter,"alloc");
  uVar2 = _objc_msgSend(uVar1,"init");
  uVar1 = DAT_101ea6040;
  DAT_101ea6040 = uVar2;
  _objc_release(uVar1);
  _objc_msgSend(DAT_101ea6040,"setPositiveFormat:",&cf_0_0);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::getUrlSessionConfiguration(ID param_1,SEL param_2)

{
  ID IVar1;
  
  if (DAT_101ea6058 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSURLSessionConfiguration,"defaultSessionConfiguration");
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain();
  }
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void ADJUtil::initializeUrlSessionConfiguration(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSURLSessionConfiguration,"defaultSessionConfiguration");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_101ea6058;
  DAT_101ea6058 = uVar2;
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJUtil::initializeNetworkInfoAndCarrier(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___CTTelephonyNetworkInfo,"alloc");
  uVar2 = _objc_msgSend(uVar1,"init");
  uVar1 = DAT_101ea6068;
  DAT_101ea6068 = uVar2;
  _objc_release(uVar1);
  _objc_msgSend(DAT_101ea6068,"subscriberCellularProvider");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_101ea6070;
  DAT_101ea6070 = uVar2;
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJUtil::initializeReachability(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&objc::class_t::ADJReachability,"reachabilityForInternetConnection");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_101ea6060;
  DAT_101ea6060 = uVar2;
  _objc_release(uVar1);
  _objc_msgSend(DAT_101ea6060,"startNotifier");
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJUtil::updateUrlSessionConfiguration_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_msgSend(param_3,"userAgent");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_101ea6078;
  DAT_101ea6078 = uVar2;
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::clientSdk(ID param_1,SEL param_2)

{
  _objc_retainAutorelease(&cf_ios4_12_3);
  return 0x101833b58;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::getDateFormatter(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSDateFormatter,"alloc");
  uVar2 = _objc_msgSend(uVar2,"init");
  iVar1 = _objc_msgSend(&_OBJC_CLASS___NSCalendar,"instancesRespondToSelector:",
                        "calendarWithIdentifier:");
  if (iVar1 != 0) {
    _objc_msgSend(&_OBJC_CLASS___NSCalendar,"calendarWithIdentifier:",
                  *(undefined8 *)PTR__NSCalendarIdentifierGregorian_101444070);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"setCalendar:",uVar3);
    _objc_release(uVar3);
  }
  _objc_msgSend(&_OBJC_CLASS___NSLocale,"systemLocale");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setLocale:",uVar3);
  _objc_release(uVar3);
  _objc_msgSend(uVar2,"setDateFormat:",&cf_yyyy_MM_dd_T_HH_mm_ss_SSS_Z_Z);
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}




/* Function Stack Size: 0x18 bytes */

void ADJUtil::excludeFromBackup_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *path;
  ssize_t sVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_48;
  
  _objc_msgSend(&_OBJC_CLASS___NSURL,"fileURLWithPath:");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"path");
  _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_retainAutorelease();
  path = (char *)_objc_msgSend(uVar3,"fileSystemRepresentation");
  _objc_release(uVar3);
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  sVar4 = _getxattr(path,"com.apple.MobileBackup",(void *)0x0,1,0,0);
  if ((sVar4 != -1) && (iVar1 = _removexattr(path,"com.apple.MobileBackup",0), iVar1 == 0)) {
    _objc_msgSend(uVar3,"debug:",&cf_Removedextendedattributeonfile____);
  }
  _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  local_48 = 0;
  iVar1 = _objc_msgSend(uVar2,"setResourceValue:forKey:error:",uVar5,
                        *(undefined8 *)PTR__NSURLIsExcludedFromBackupKey_1014440b8,&local_48);
  lVar6 = _objc_retain(local_48);
  _objc_release(uVar5);
  if ((lVar6 != 0) || (iVar1 != 1)) {
    _objc_msgSend(uVar2,"lastPathComponent");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar6,"localizedDescription");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"debug:",&cf_Failedtoexclude____frombackup____);
    _objc_release(uVar7);
    _objc_release(uVar5);
  }
  _objc_release(lVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::formatSeconds1970_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSince1970:");
  IVar1 = _objc_retainAutoreleasedReturnValue();
  formatDate_(param_1,(SEL)"formatDate:",IVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(IVar1);
  IVar1 = _objc_autoreleaseReturnValue(uVar2);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::formatDate_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJUtil,"getDateFormatter");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    _objc_msgSend(lVar2,"stringFromDate:",uVar1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x20 bytes */

void ADJUtil::saveJsonResponse_responseData_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  local_50 = 0;
  local_48 = 0;
  uVar3 = _objc_msgSend(&objc::class_t::ADJUtil,"buildJsonDict:exceptionPtr:errorPtr:",uVar1,
                        &local_48,&local_50);
  _objc_release(uVar1);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar3);
  lVar4 = _objc_retain(local_48);
  lVar5 = _objc_retain(local_50);
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      _objc_msgSend(uVar2,"setJsonResponse:",uVar1);
      goto LAB_1011200b8;
    }
    _objc_msgSend(lVar5,"localizedDescription");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_Failedtoparsejsonresponse_____);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  }
  else {
    _objc_msgSend(lVar4,"description");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_Failedtoparsejsonresponse_____);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar6);
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  }
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar6,"error:",uVar3);
  _objc_release(uVar6);
  _objc_msgSend(uVar2,"setMessage:",uVar3);
  _objc_release(uVar3);
LAB_1011200b8:
  _objc_release(uVar1);
  _objc_release(lVar4);
  _objc_release(lVar5);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x28 bytes */

ID ADJUtil::readObject_objectName_class_(ID param_1,SEL param_2,ID param_3,ID param_4,CLASS param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ID IVar8;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  _objc_msgSend(&objc::class_t::ADJUtil,"getFilePathInDocumentsDir:",uVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"getFilePathInAppSupportDir:",uVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSKeyedUnarchiver,"unarchiveObjectWithFile:",uVar5);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(lVar6,"isKindOfClass:",param_5);
  if (iVar1 == 0) {
    if (lVar6 == 0) {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar7,"verbose:",&cf___filenotfoundin_ApplicationSupport_Adjust_folder);
    }
    else {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar7,"error:",&cf_Failedtoread__filefrom_ApplicationSupport_Adjust_folder);
    }
    _objc_release(uVar7);
    _objc_release(lVar6);
    _objc_msgSend(&_OBJC_CLASS___NSKeyedUnarchiver,"unarchiveObjectWithFile:",uVar4);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar7,"verbose:",&cf___filenotfoundinDocumentsfolder);
      _objc_release(uVar7);
      lVar6 = 0;
    }
    else {
      uVar7 = _objc_msgSend(&_OBJC_CLASS___NSArray,"class");
      iVar1 = _objc_msgSend(lVar6,"isKindOfClass:",uVar7);
      if (iVar1 == 0) {
        _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar7,"debug:",&cf_Read_____);
      }
      else {
        _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(lVar6,"count");
        _objc_msgSend(uVar7,"debug:",&cf_Packagehandlerread_dpackages);
      }
      _objc_release(uVar7);
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar7,"verbose:",
                    &cf_Migrating__filefromDocumentsto_ApplicationSupport_Adjust_folder);
      _objc_release(uVar7);
      _objc_msgSend(&objc::class_t::ADJUtil,"migrateFileFromPath:toPath:",uVar4,uVar5);
    }
  }
  else {
    uVar7 = _objc_msgSend(&_OBJC_CLASS___NSArray,"class");
    iVar1 = _objc_msgSend(lVar6,"isKindOfClass:",uVar7);
    if (iVar1 == 0) {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar7,"debug:",&cf_Read_____);
    }
    else {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(lVar6,"count");
      _objc_msgSend(uVar7,"debug:",&cf_Packagehandlerread_dpackages);
    }
    _objc_release(uVar7);
    _objc_msgSend(&objc::class_t::ADJUtil,"deleteFileInPath:",uVar4);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  IVar8 = _objc_autoreleaseReturnValue(lVar6);
  return IVar8;
}




/* Function Stack Size: 0x20 bytes */

bool ADJUtil::migrateFileFromPath_toPath_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_58;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_58 = 0;
  _objc_msgSend(uVar3,"copyItemAtPath:toPath:error:",uVar1,uVar2,&local_58);
  lVar4 = _objc_retain(local_58);
  _objc_release(uVar3);
  if (lVar4 != 0) {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"error:",&cf_Errorwhilecopyingfrom__to__);
    _objc_release(uVar3);
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar4,"description");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"error:",uVar5);
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return (bool)(lVar4 == 0);
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::getFilePathInDocumentsDir_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  uVar1 = _objc_retain(param_3);
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"objectAtIndex:",0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend(uVar3,"stringByAppendingPathComponent:",uVar1);
  _objc_release(uVar1);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar1);
  return IVar5;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::getFilePathInAppSupportDir_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  uVar2 = _objc_retain(param_3);
  _NSSearchPathForDirectoriesInDomains(0xe,1,1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"firstObject");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"lastPathComponent");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"checkForDirectoryPresenceInPath:forFolder:",uVar4,
                        uVar5);
  _objc_release(uVar5);
  if (iVar1 == 0) {
    uVar5 = 0;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf____);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"stringByAppendingPathComponent:",uVar5);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"checkForDirectoryPresenceInPath:forFolder:",uVar6
                          ,&cf_Adjust);
    if (iVar1 == 0) {
      uVar5 = 0;
    }
    else {
      _objc_msgSend(uVar6,"stringByAppendingPathComponent:",uVar2);
      uVar5 = _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  IVar7 = _objc_autoreleaseReturnValue(uVar5);
  return IVar7;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::queryString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"queryString:queueSize:",param_3,0);
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

ID ADJUtil::queryString_queueSize_(ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 local_138;
  long local_130;
  long *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [128];
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_101444218;
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"array");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = (long *)0x0;
  uStack_120 = 0;
  local_138 = 0;
  local_130 = 0;
  uVar1 = _objc_retain(uVar1);
  uVar3 = _objc_msgSend(uVar1,"countByEnumeratingWithState:objects:count:",&local_138,auStack_f8,
                        0x10);
  if (uVar3 != 0) {
    lVar10 = *local_128;
    do {
      uVar11 = 0;
      do {
        if (*local_128 != lVar10) {
          _objc_enumerationMutation(uVar1);
        }
        uVar12 = *(undefined8 *)(local_130 + uVar11 * 8);
        _objc_msgSend(uVar1,"objectForKey:",uVar12);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar4,"adjUrlEncode");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar12,"adjUrlEncode");
        uVar12 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar2,"addObject:",uVar6);
        _objc_release(uVar6);
        _objc_release(uVar12);
        _objc_release(uVar5);
        _objc_release(uVar4);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar3);
      uVar3 = _objc_msgSend(uVar1,"countByEnumeratingWithState:objects:count:",&local_138,auStack_f8
                            ,0x10);
    } while (uVar3 != 0);
  }
  _objc_release(uVar1);
  _objc_msgSend(&_OBJC_CLASS___NSDate,"date");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend(uVar4,"timeIntervalSince1970");
  _objc_release(uVar4);
  _objc_msgSend(uVar5,&objc::class_t::ADJUtil,"formatSeconds1970:");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"adjUrlEncode");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______);
  uVar12 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"addObject:",uVar12);
  if (param_4 != 0) {
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__lu);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar6,"adjUrlEncode");
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf______);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"addObject:",uVar8);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  _objc_msgSend(uVar2,"componentsJoinedByString:",&cf__);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_78) {
    IVar9 = _objc_autoreleaseReturnValue(uVar6);
    return IVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* Function Stack Size: 0x18 bytes */

bool ADJUtil::isNull_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    bVar3 = 1;
  }
  else {
    lVar1 = _objc_retain(param_3);
    _objc_msgSend(&_OBJC_CLASS___NSNull,"null");
    lVar2 = _objc_retainAutoreleasedReturnValue();
    bVar3 = (bool)(lVar2 == lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  return bVar3;
}




/* Function Stack Size: 0x18 bytes */

bool ADJUtil::isNotNull_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  if (param_3 == 0) {
    bVar3 = 0;
  }
  else {
    lVar1 = _objc_retain(param_3);
    _objc_msgSend(&_OBJC_CLASS___NSNull,"null");
    lVar2 = _objc_retainAutoreleasedReturnValue();
    bVar3 = (bool)(lVar2 != lVar1);
    _objc_release(lVar1);
    _objc_release(lVar2);
  }
  return bVar3;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::extractAppSecret_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"parameters");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"objectForKey:",&cf_app_secret);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_msgSend(uVar1,"parameters");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"removeObjectForKey:",&cf_app_secret);
    _objc_release(uVar2);
    uVar2 = _objc_retain(lVar3);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::extractSecretId_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(uVar1,"parameters");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"objectForKey:",&cf_secret_id);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    _objc_msgSend(uVar1,"parameters");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"removeObjectForKey:",&cf_secret_id);
    _objc_release(uVar2);
    uVar2 = _objc_retain(lVar3);
  }
  _objc_release(lVar3);
  _objc_release(uVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}




/* Function Stack Size: 0x28 bytes */

void ADJUtil::checkAndAddEntry_key_value_(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = _objc_retain(param_3);
  lVar2 = _objc_retain(param_4);
  if ((lVar2 != 0) && (param_5 != 0)) {
    _objc_msgSend(uVar1,"setObject:forKey:",param_5,lVar2);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::getValidIdentifier_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  
  uVar1 = _objc_retain(param_3);
  _objc_retain(&cf_idfa);
  _objc_retain(&cf_persistent_ios_uuid);
  _objc_retain(&cf_ios_uuid);
  _objc_msgSend(uVar1,"objectForKey:",&cf_idfa);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    _objc_msgSend(uVar1,"objectForKey:",&cf_persistent_ios_uuid);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      _objc_msgSend(uVar1,"objectForKey:",&cf_ios_uuid);
      lVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      pcVar4 = (cfstringStruct *)0x0;
      if (lVar2 == 0) goto LAB_1011225cc;
      pcVar4 = &cf_ios_uuid;
    }
    else {
      pcVar4 = &cf_persistent_ios_uuid;
    }
  }
  else {
    pcVar4 = &cf_idfa;
  }
  _objc_retain(pcVar4);
LAB_1011225cc:
  _objc_release(&cf_ios_uuid);
  _objc_release(&cf_persistent_ios_uuid);
  _objc_release(&cf_idfa);
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(pcVar4);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::convertDictionaryValues_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ID IVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
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
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"alloc");
  uVar4 = _objc_msgSend(uVar2,"count");
  uVar3 = _objc_msgSend(uVar3,"initWithCapacity:",uVar4);
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (long *)0x0;
  uStack_110 = 0;
  local_128 = 0;
  local_120 = 0;
  uVar2 = _objc_retain(uVar2);
  uVar5 = _objc_msgSend(uVar2,"countByEnumeratingWithState:objects:count:",&local_128,auStack_e8,
                        0x10);
  if (uVar5 != 0) {
    lVar9 = *local_118;
    do {
      uVar10 = 0;
      do {
        if (*local_118 != lVar9) {
          _objc_enumerationMutation(uVar2);
        }
        uVar11 = *(undefined8 *)(local_120 + uVar10 * 8);
        _objc_msgSend(uVar2,"objectForKey:",uVar11);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar6 = _objc_msgSend(&_OBJC_CLASS___NSDictionary,"class");
        iVar1 = _objc_msgSend(uVar4,"isKindOfClass:",uVar6);
        if (iVar1 == 0) {
          uVar6 = _objc_msgSend(&_OBJC_CLASS___NSDate,"class");
          iVar1 = _objc_msgSend(uVar4,"isKindOfClass:",uVar6);
          if (iVar1 == 0) {
            _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf___);
            goto LAB_101123150;
          }
          _objc_msgSend(&objc::class_t::ADJUtil,"formatDate:",uVar4);
          lVar7 = _objc_retainAutoreleasedReturnValue();
          if (lVar7 != 0) goto LAB_101123158;
        }
        else {
          _objc_msgSend(&objc::class_t::ADJUtil,"convertDictionaryValues:",uVar4);
LAB_101123150:
          lVar7 = _objc_retainAutoreleasedReturnValue();
LAB_101123158:
          _objc_msgSend(uVar3,"setObject:forKey:",lVar7,uVar11);
        }
        _objc_release(lVar7);
        _objc_release(uVar4);
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar5);
      uVar5 = _objc_msgSend(uVar2,"countByEnumeratingWithState:objects:count:",&local_128,auStack_e8
                            ,0x10);
    } while (uVar5 != 0);
  }
  _objc_release(uVar2);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  IVar8 = _objc_autoreleaseReturnValue(uVar3);
  return IVar8;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::idfa(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"adjIdForAdvertisers");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::getUpdateTime(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 local_48;
  
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_48 = 0;
  _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"pathForResource:ofType:",&cf_Info,&cf_plist);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"attributesOfItemAtPath:error:",uVar3,&local_48);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar4,"objectForKey:",*(undefined8 *)PTR__NSFileModificationDate_101444090);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(uVar3);
  _objc_msgSend(&objc::class_t::ADJUtil,"formatDate:",uVar5);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar5);
  IVar6 = _objc_autoreleaseReturnValue(uVar2);
  return IVar6;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::getInstallTime(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend(uVar2,"count");
  if (lVar3 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"bundlePath");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
  }
  else {
    _objc_msgSend(uVar2,"objectAtIndex:",0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
  }
  _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar5,"attributesOfItemAtPath:error:",uVar4,0);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar6,"objectForKeyedSubscript:",*(undefined8 *)PTR__NSFileCreationDate_101444088);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar2);
  _objc_msgSend(&objc::class_t::ADJUtil,"formatDate:",uVar7);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar7);
  _objc_release(uVar1);
  IVar8 = _objc_autoreleaseReturnValue(uVar2);
  return IVar8;
}




/* Function Stack Size: 0x20 bytes */

ID ADJUtil::convertUniversalLink_scheme_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ID IVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  cfstringStruct *pcVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  
  uVar2 = _objc_retain(param_3);
  pcVar3 = (cfstringStruct *)_objc_retain(param_4);
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar2);
  pcVar16 = pcVar3;
  if (iVar1 != 0) {
    _objc_msgSend(uVar4,"error:",&cf_Receiveduniversallinkisnil);
    uVar17 = 0;
    goto LAB_10112389c;
  }
  uVar5 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",pcVar3);
  if (((uVar5 & 1) != 0) || (lVar6 = _objc_msgSend(pcVar3,"length"), lVar6 == 0)) {
    _objc_msgSend(uVar4,"warn:",&cf_Non_emptyschemerequired_usingthescheme_AdjustUniversalScheme_);
    pcVar16 = &cf_AdjustUniversalScheme;
    _objc_retain(&cf_AdjustUniversalScheme);
    _objc_release(pcVar3);
  }
  _objc_msgSend(uVar2,"absoluteString");
  uVar7 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar7);
  lVar6 = DAT_101ea6038;
  if (iVar1 == 0) {
    if (DAT_101ea6038 == 0) {
      pcVar3 = &cf_Universallinkregexnotcorrectlyconfigured;
      goto LAB_101123888;
    }
    if (DAT_101ea6050 == 0) {
      pcVar3 = &cf_ShortUniversallinkregexnotcorrectlyconfigured;
      goto LAB_101123888;
    }
    uVar8 = _objc_msgSend(uVar7,"length");
    _objc_msgSend(lVar6,"matchesInString:options:range:",uVar7,0,0,uVar8);
    uVar17 = _objc_retainAutoreleasedReturnValue();
    lVar9 = _objc_msgSend(uVar17,"count");
    lVar6 = DAT_101ea6050;
    uVar8 = uVar17;
    if (lVar9 == 0) {
      uVar8 = _objc_msgSend(uVar7,"length");
      _objc_msgSend(lVar6,"matchesInString:options:range:",uVar7,0,0,uVar8);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      lVar6 = _objc_msgSend(uVar8,"count");
      if (lVar6 != 0) goto LAB_101123830;
      _objc_msgSend(uVar4,"error:",&cf_Urldoesn_tmatchasuniversallinkorshortversion);
      uVar17 = 0;
    }
    else {
LAB_101123830:
      uVar5 = _objc_msgSend(uVar8,"count");
      if (uVar5 < 2) {
        _objc_msgSend(uVar8,"objectAtIndexedSubscript:",0);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        lVar6 = _objc_msgSend(uVar11,"numberOfRanges");
        if (lVar6 == 2) {
          auVar18 = _objc_msgSend(uVar11,"rangeAtIndex:",1);
          _objc_msgSend(uVar7,"substringWithRange:",auVar18._0_8_,auVar18._8_8_);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(&objc::class_t::ADJUtil,"removeOptionalRedirect:",uVar12);
          uVar13 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf________);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,"info:",&cf_Converteddeeplinkfromuniversallink__);
          _objc_msgSend(&_OBJC_CLASS___NSURL,"URLWithString:",uVar14);
          uVar15 = _objc_retainAutoreleasedReturnValue();
          iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar15);
          if (iVar1 == 0) {
            uVar17 = _objc_retain(uVar15);
          }
          else {
            _objc_msgSend(uVar4,"error:",&cf_Unabletoparseconverteddeeplinkfromuniversallink__);
            uVar17 = 0;
          }
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar12);
        }
        else {
          _objc_msgSend(uVar4,"error:",&cf_Wrongnumberofrangesmatched);
          uVar17 = 0;
        }
        _objc_release(uVar11);
      }
      else {
        _objc_msgSend(uVar4,"error:",&cf_Urlmatchasuniversallinkmultipletimes);
        uVar17 = 0;
      }
    }
    _objc_release(uVar8);
  }
  else {
    pcVar3 = &cf_Parseduniversallinkisnil;
LAB_101123888:
    _objc_msgSend(uVar4,"error:",pcVar3);
    uVar17 = 0;
  }
  _objc_release(uVar7);
LAB_10112389c:
  _objc_release(uVar4);
  _objc_release(pcVar16);
  _objc_release(uVar2);
  IVar10 = _objc_autoreleaseReturnValue(uVar17);
  return IVar10;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::removeOptionalRedirect_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ID IVar15;
  char *pcVar16;
  cfstringStruct *pcVar17;
  undefined1 auVar18 [16];
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar6 = DAT_101ea6048;
  if (DAT_101ea6048 == 0) {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"error:",&cf_RemoveOptionalRedirectregexnotcorrectlyconfigured);
    _objc_release(uVar4);
    uVar4 = _objc_retain(uVar2);
    goto LAB_101123eac;
  }
  uVar4 = _objc_msgSend(uVar2,"length");
  _objc_msgSend(lVar6,"matchesInString:options:range:",uVar2,0,0,uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  lVar6 = _objc_msgSend(uVar5,"count");
  if (lVar6 == 0) {
    pcVar16 = "debug:";
    pcVar17 = &cf_Universallinkdoesnotcontainoptionadjust_redirectparameter;
LAB_101123bc0:
    _objc_msgSend(uVar3,pcVar16,pcVar17);
    uVar4 = _objc_retain(uVar2);
  }
  else {
    uVar7 = _objc_msgSend(uVar5,"count");
    if (1 < uVar7) {
      pcVar16 = "error:";
      pcVar17 = &cf_Universallinkcontainsmultipleoptionadjust_redirectparameters;
      goto LAB_101123bc0;
    }
    _objc_msgSend(uVar5,"objectAtIndexedSubscript:",0);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    auVar18 = _objc_msgSend(uVar8,"rangeAtIndex:",0);
    _objc_msgSend(uVar2,"substringToIndex:",auVar18._0_8_);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"substringFromIndex:",auVar18._0_8_ + auVar18._8_8_);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    lVar6 = _objc_msgSend(uVar9,"length");
    uVar14 = uVar4;
    if ((lVar6 != 0) && (lVar6 = _objc_msgSend(uVar4,"length"), lVar6 != 0)) {
      lVar6 = _objc_msgSend(uVar9,"length");
      _objc_msgSend(uVar9,"substringFromIndex:",lVar6 + -1);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"substringToIndex:",1);
      uVar11 = _objc_retainAutoreleasedReturnValue();
      iVar1 = _objc_msgSend(&cf__,"isEqualToString:",uVar10);
      uVar12 = uVar9;
      if ((iVar1 != 0) && (iVar1 = _objc_msgSend(&cf__,"isEqualToString:",uVar11), iVar1 != 0)) {
        lVar6 = _objc_msgSend(uVar9,"length");
        _objc_msgSend(uVar9,"substringToIndex:",lVar6 + -1);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar9);
      }
      iVar1 = _objc_msgSend(&cf__,"isEqualToString:",uVar10);
      uVar13 = uVar12;
      if ((iVar1 != 0) && (iVar1 = _objc_msgSend(&cf__,"isEqualToString:",uVar11), iVar1 != 0)) {
        lVar6 = _objc_msgSend(uVar12,"length");
        _objc_msgSend(uVar12,"substringToIndex:",lVar6 + -1);
        uVar13 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
      }
      iVar1 = _objc_msgSend(&cf__,"isEqualToString:",uVar10);
      uVar9 = uVar13;
      if ((iVar1 != 0) && (iVar1 = _objc_msgSend(&cf__,"isEqualToString:",uVar11), iVar1 != 0)) {
        lVar6 = _objc_msgSend(uVar13,"length");
        _objc_msgSend(uVar13,"substringToIndex:",lVar6 + -1);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar13);
      }
      iVar1 = _objc_msgSend(&cf__,"isEqualToString:",uVar10);
      if ((iVar1 != 0) && (iVar1 = _objc_msgSend(&cf__,"isEqualToString:",uVar11), iVar1 != 0)) {
        _objc_msgSend(uVar4,"substringFromIndex:",1);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar4);
      }
      _objc_release(uVar11);
      _objc_release(uVar10);
    }
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar9);
    _objc_release(uVar8);
  }
  _objc_release(uVar5);
LAB_101123eac:
  _objc_release(uVar3);
  _objc_release(uVar2);
  IVar15 = _objc_autoreleaseReturnValue(uVar4);
  return IVar15;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::secondsNumberFormat_(ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  SEL extraout_x1;
  double dVar5;
  
  lVar1 = DAT_101ea6040;
  uVar3 = 0;
  if (DAT_101ea6040 != 0) {
    dVar5 = -param_3;
    if (0.0 <= param_3) {
      dVar5 = param_3;
    }
    _objc_msgSend(dVar5,&_OBJC_CLASS___NSNumber,"numberWithDouble:");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar1,"stringFromNumber:",uVar2);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    param_2 = extraout_x1;
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar3,param_2);
  return IVar4;
}




/* Function Stack Size: 0x20 bytes */

double ADJUtil::randomInRange_maxRange_(ID param_1,SEL param_2,double param_3,double param_4)

{
  double dVar1;
  
  if (DAT_101ea6080 != -1) {
    _dispatch_once(&DAT_101ea6080,&PTR___NSConcreteGlobalBlock_101830a00);
  }
  dVar1 = _drand48();
  return (param_4 - param_3) * dVar1 + param_3;
}




/* Function Stack Size: 0x20 bytes */

double ADJUtil::waitingTime_backoffStrategy_(ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  uVar1 = _objc_retain(param_4);
  lVar2 = _objc_msgSend(uVar1,"minRetries");
  dVar8 = 0.0;
  if (lVar2 <= (long)param_3) {
    lVar2 = _objc_msgSend(uVar1,"minRetries");
    dVar3 = (double)_exp2((double)(long)(param_3 - lVar2));
    dVar4 = (double)_objc_msgSend(uVar1,"secondMultiplier");
    dVar5 = (double)_objc_msgSend(uVar1,"maxWait");
    dVar8 = dVar3 * dVar4;
    if (dVar5 <= dVar3 * dVar4) {
      dVar8 = dVar5;
    }
    uVar6 = _objc_msgSend(uVar1,"minRange");
    uVar7 = _objc_msgSend(uVar1,"maxRange");
    dVar3 = (double)_objc_msgSend(uVar6,uVar7,&objc::class_t::ADJUtil,"randomInRange:maxRange:");
    dVar8 = dVar8 * dVar3;
  }
  _objc_release(uVar1);
  return dVar8;
}




/* Function Stack Size: 0x18 bytes */

void ADJUtil::launchInMainThread_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_3,param_2,param_3,param_4);
  iVar1 = _objc_msgSend(&objc::class_t::ADJAdjustFactory,"testing");
  if (iVar1 == 0) {
    _dispatch_async(PTR___dispatch_main_q_101444238,uVar2);
  }
  else {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"debug:",&cf_Launchinginthebackgroundfortesting);
    _objc_release(uVar3);
    _dispatch_get_global_queue(-0x8000,0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _dispatch_async(uVar3,uVar2);
    _objc_release(uVar2);
    uVar2 = uVar3;
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJUtil::isMainThread(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSThread,"currentThread");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  bVar1 = _objc_msgSend(uVar2,"isMainThread");
  _objc_release(uVar2);
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJUtil::isInactive(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  lVar2 = _objc_msgSend(uVar1,"applicationState");
  _objc_release(uVar1);
  return (bool)(lVar2 != 0);
}




/* Function Stack Size: 0x18 bytes */

void ADJUtil::launchInMainThreadWithInactive_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  
  _objc_retain(param_3,param_2,param_3,param_4);
  local_58 = PTR___NSConcreteStackBlock_101444138;
  local_50 = 0xc2000000;
  uStack_4c = 0;
  local_48 = FUN_101124444;
  local_40 = &DAT_101830a20;
  uVar2 = _objc_retain();
  local_38 = uVar2;
  lVar3 = _objc_retainBlock(&local_58);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isMainThread");
  if (iVar1 == 0) {
    iVar1 = _objc_msgSend(&objc::class_t::ADJAdjustFactory,"testing");
    if (iVar1 == 0) {
      _dispatch_async(PTR___dispatch_main_q_101444238,lVar3);
    }
    else {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"debug:",&cf_Launchinginthebackgroundfortesting);
      _objc_release(uVar4);
      _dispatch_get_global_queue(-0x8000,0);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _dispatch_async(uVar4,lVar3);
      _objc_release(uVar4);
    }
  }
  else {
    (**(code **)(lVar3 + 0x10))(lVar3);
  }
  _objc_release(lVar3);
  _objc_release(local_38);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

bool ADJUtil::deleteFileWithName_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = _objc_retain(param_3);
  _objc_msgSend(&objc::class_t::ADJUtil,"getFilePathInDocumentsDir:",uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar5 = _objc_msgSend(&objc::class_t::ADJUtil,"getFilePathInAppSupportDir:",uVar3);
  _objc_release(uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"deleteFileInPath:",uVar4);
  uVar2 = _objc_msgSend(&objc::class_t::ADJUtil,"deleteFileInPath:",uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return uVar1 | uVar2;
}




/* Function Stack Size: 0x18 bytes */

bool ADJUtil::deleteFileInPath_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_48;
  
  uVar3 = _objc_retain(param_3);
  _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar4,"fileExistsAtPath:",uVar3);
  _objc_release(uVar4);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    local_48 = 0;
    uVar2 = _objc_msgSend(uVar4,"removeItemAtPath:error:",uVar3,&local_48);
    lVar5 = _objc_retain(local_48);
    _objc_release(uVar4);
    if ((uVar2 & 1) == 0) {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"verbose:",&cf_Unabletodeletefileatpath__);
      _objc_release(uVar4);
    }
    if (lVar5 != 0) {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"error:",&cf_Errorwhiledeletingfileatpath__);
      _objc_release(uVar4);
      _objc_release(lVar5);
    }
  }
  _objc_release(uVar3);
  return uVar2;
}




/* Function Stack Size: 0x18 bytes */

void ADJUtil::launchDeepLinkMain_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  
  uVar2 = _objc_retain(param_3);
  local_50 = uVar2;
  _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar3,"respondsToSelector:","openURL:options:completionHandler:");
  if (iVar1 == 0) {
    uVar6 = _objc_msgSend(uVar3,"openURL:",uVar2);
    if ((uVar6 & 1) != 0) goto LAB_101124e58;
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"error:",&cf_Unabletoopendeeplink____);
  }
  else {
    _objc_msgSend(uVar3,"methodSignatureForSelector:","openURL:options:completionHandler:");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSInvocation,"invocationWithMethodSignature:",uVar4);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"setSelector:","openURL:options:completionHandler:");
    _objc_msgSend(uVar5,"setTarget:",uVar3);
    _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",auStack_48,
                  auStack_48,0);
    local_58 = _objc_retainAutoreleasedReturnValue();
    local_88 = PTR___NSConcreteStackBlock_101444138;
    local_80 = 0xc2000000;
    uStack_7c = 0;
    local_78 = FUN_101124e80;
    local_70 = &DAT_101830ab0;
    local_68 = _objc_retain(uVar2);
    local_60 = _objc_retainBlock(&local_88);
    _objc_msgSend(uVar5,"setArgument:atIndex:",&local_50,2);
    _objc_msgSend(uVar5,"setArgument:atIndex:",&local_58,3);
    _objc_msgSend(uVar5,"setArgument:atIndex:",&local_60,4);
    _objc_msgSend(uVar5,"invoke");
    _objc_release(local_60);
    _objc_release(local_68);
    _objc_release(local_58);
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
LAB_101124e58:
  _objc_release(uVar3);
  _objc_release(local_50);
  return;
}




/* Function Stack Size: 0x18 bytes */

ID ADJUtil::convertDeviceToken_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  
  if (param_3 != 0) {
    _objc_msgSend(param_3,"description");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(&_OBJC_CLASS___NSCharacterSet,"characterSetWithCharactersInString:",&cf_<>);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar1,"stringByTrimmingCharactersInSet:",uVar2);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_release(uVar1);
    param_2 = extraout_x1;
    if (lVar3 != 0) {
      _objc_msgSend(lVar3,"stringByReplacingOccurrencesOfString:withString:",&cf_space_s_,&cf___);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar3);
      param_2 = extraout_x1_00;
      goto LAB_101124fd0;
    }
  }
  uVar1 = 0;
LAB_101124fd0:
  IVar4 = _objc_autoreleaseReturnValue(uVar1,param_2);
  return IVar4;
}




/* Function Stack Size: 0x18 bytes */

bool ADJUtil::checkAttributionDetails_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  bool bVar7;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar2);
  if ((uVar3 & 1) != 0) {
    bVar7 = 0;
    goto LAB_101125204;
  }
  _objc_msgSend(uVar2,"objectForKey:",&cf_Version3_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar4);
  if ((uVar3 & 1) == 0) {
    iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,&cf_iad_org_name,
                          &cf_OrgName);
    if ((((iVar1 == 0) ||
         (iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,
                                &cf_iad_campaign_id,&cf_1234567890), iVar1 == 0)) ||
        (iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,
                               &cf_iad_campaign_name,&cf_CampaignName), iVar1 == 0)) ||
       ((iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,
                               &cf_iad_lineitem_id,&cf_1234567890), iVar1 == 0 ||
        (uVar3 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,
                               &cf_iad_lineitem_name,&cf_LineName), (uVar3 & 1) == 0)))) {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,"debug:",
                    &cf_iAdattributiondetailshasdummycommonfieldsforbothiAd3andAppleSearchAds);
      _objc_release(uVar5);
      goto LAB_1011251f8;
    }
    iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,&cf_iad_adgroup_id,
                          &cf_1234567890);
    if (((iVar1 == 0) ||
        (iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,
                               &cf_iad_adgroup_name,&cf_AdgroupName), iVar1 == 0)) ||
       (iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,&cf_iad_keyword,
                              &cf_Keyword), iVar1 == 0)) {
      iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,&cf_iad_adgroup_id,
                            &cf_1234567890);
      if ((iVar1 == 0) ||
         (iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"contains:key:value:",uVar4,
                                &cf_iad_creative_name,&cf_CreativeName), iVar1 == 0))
      goto LAB_1011251f8;
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      pcVar6 = &cf_iAdattributiondetailshasdummyiAd3fields;
    }
    else {
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      pcVar6 = &cf_iAdattributiondetailshasdummyAppleSearchAdsfields;
    }
    _objc_msgSend(uVar5,"debug:",pcVar6);
    _objc_release(uVar5);
    bVar7 = 0;
  }
  else {
LAB_1011251f8:
    bVar7 = 1;
  }
  _objc_release(uVar4);
LAB_101125204:
  _objc_release(uVar2);
  return bVar7;
}




/* Function Stack Size: 0x28 bytes */

bool ADJUtil::contains_key_value_(ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  uVar4 = _objc_retain(param_5);
  uVar5 = _objc_msgSend(param_3,"objectForKey:",param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar2);
  if ((uVar6 & 1) == 0) {
    _objc_msgSend(uVar2,"description");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    bVar1 = _objc_msgSend(uVar4,"isEqualToString:",uVar3);
    _objc_release(uVar3);
  }
  else {
    bVar1 = 0;
  }
  _objc_release(uVar2);
  _objc_release(uVar4);
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::readReachabilityFlags(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined1 auVar3 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  if (DAT_101ea6060 != 0) {
    _objc_msgSend(DAT_101ea6060,"currentReachabilityFlags");
    auVar3 = _objc_retainAutoreleasedReturnValue();
    param_2 = auVar3._8_8_;
    uVar2 = auVar3._0_8_;
  }
  IVar1 = _objc_autoreleaseReturnValue(uVar2,param_2);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::readMCC(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined1 auVar3 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  if (DAT_101ea6070 != 0) {
    _objc_msgSend(DAT_101ea6070,"mobileCountryCode");
    auVar3 = _objc_retainAutoreleasedReturnValue();
    param_2 = auVar3._8_8_;
    uVar2 = auVar3._0_8_;
  }
  IVar1 = _objc_autoreleaseReturnValue(uVar2,param_2);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::readMNC(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined1 auVar3 [16];
  undefined8 uVar2;
  
  uVar2 = 0;
  if (DAT_101ea6070 != 0) {
    _objc_msgSend(DAT_101ea6070,"mobileNetworkCode");
    auVar3 = _objc_retainAutoreleasedReturnValue();
    param_2 = auVar3._8_8_;
    uVar2 = auVar3._0_8_;
  }
  IVar1 = _objc_autoreleaseReturnValue(uVar2,param_2);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUtil::readCurrentRadioAccessTechnology(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  ulong extraout_x1;
  undefined1 auVar4 [16];
  
  if (DAT_101ea6068 != 0) {
    uVar2 = _NSSelectorFromString(&cf_currentRadioAccessTechnology);
    iVar1 = _objc_msgSend(DAT_101ea6068,"respondsToSelector:",uVar2);
    param_2 = extraout_x1;
    if (iVar1 != 0) {
      _objc_msgSend(DAT_101ea6068,"performSelector:",uVar2);
      auVar4 = _objc_retainAutoreleasedReturnValue();
      goto LAB_1011254a4;
    }
  }
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_2;
  auVar4 = auVar4 << 0x40;
LAB_1011254a4:
  IVar3 = _objc_autoreleaseReturnValue(auVar4._0_8_,auVar4._8_8_);
  return IVar3;
}

