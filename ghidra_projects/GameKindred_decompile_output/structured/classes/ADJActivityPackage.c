// classes/ADJActivityPackage — 25 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::extendedString(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ID IVar9;
  long lVar10;
  cfstringStruct *local_70;
  cfstringStruct *pcStack_68;
  
  _objc_msgSend(&_OBJC_CLASS___NSMutableString,"string");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  pcStack_68 = &cf_app_secret;
  local_70 = &cf_secret_id;
  _objc_msgSend(&_OBJC_CLASS___NSArray,"arrayWithObjects:count:",&local_70,2);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  path(param_1,(SEL)"path");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"appendFormat:",&cf_Path___);
  _objc_release(uVar3);
  clientSdk(param_1,(SEL)"clientSdk");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"appendFormat:",&cf_ClientSdk___);
  _objc_release(uVar3);
  parameters(param_1,(SEL)"parameters");
  lVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    parameters(param_1,(SEL)"parameters");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"allKeys");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"sortedArrayUsingSelector:","localizedStandardCompare:");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(uVar3);
    lVar4 = _objc_msgSend(uVar6,"count");
    _objc_msgSend(uVar1,"appendFormat:",&cf_Parameters_);
    if (lVar4 != 0) {
      lVar10 = 0;
      do {
        _objc_msgSend(uVar6,"objectAtIndex:",lVar10);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_msgSend(uVar2,"containsObject:",uVar3);
        if ((uVar7 & 1) == 0) {
          parameters(param_1,(SEL)"parameters");
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,"objectForKey:",uVar3);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          uVar5 = _objc_retainAutorelease(uVar3);
          _objc_msgSend(uVar5,"UTF8String");
          _objc_msgSend(uVar1,"appendFormat:",&cf___22s__);
          _objc_release(uVar8);
        }
        _objc_release(uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
    }
    _objc_release(uVar6);
  }
  _objc_release(uVar2);
  IVar9 = _objc_autoreleaseReturnValue(uVar1);
  return IVar9;
}




/* Function Stack Size: 0x10 bytes */

long_long ADJActivityPackage::getRetries(ID param_1,SEL param_2)

{
  long_long lVar1;
  
  lVar1 = retries(param_1,(SEL)"retries");
  return lVar1;
}




/* Function Stack Size: 0x10 bytes */

long_long ADJActivityPackage::increaseRetries(ID param_1,SEL param_2)

{
  long_long lVar1;
  
  lVar1 = retries(param_1,(SEL)"retries");
  setRetries_(param_1,(SEL)"setRetries:",lVar1 + 1);
  lVar1 = retries(param_1,(SEL)"retries");
  return lVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::description(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  iVar1 = activityKind(param_1,(SEL)"activityKind");
  _objc_msgSend(&objc::class_t::ADJActivityKindUtil,"activityKindToString:",iVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  suffix(param_1,(SEL)"suffix");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_____);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::successMessage(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  iVar1 = activityKind(param_1,(SEL)"activityKind");
  _objc_msgSend(&objc::class_t::ADJActivityKindUtil,"activityKindToString:",iVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  suffix(param_1,(SEL)"suffix");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_Tracked____);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::failureMessage(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  iVar1 = activityKind(param_1,(SEL)"activityKind");
  _objc_msgSend(&objc::class_t::ADJActivityKindUtil,"activityKindToString:",iVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  suffix(param_1,(SEL)"suffix");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_Failedtotrack____);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}




/* Function Stack Size: 0x18 bytes */

ID ADJActivityPackage::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID local_40;
  class_t *local_38;
  
  uVar1 = _objc_retain(param_3);
  local_38 = &objc::class_t::ADJActivityPackage;
  local_40 = param_1;
  IVar2 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar2 != 0) {
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_path);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(IVar2,"setPath:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_suffix);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(IVar2,"setSuffix:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_clientSdk);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(IVar2,"setClientSdk:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_parameters);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(IVar2,"setParameters:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_partnerParameters);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(IVar2,"setPartnerParameters:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_callbackParameters);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(IVar2,"setCallbackParameters:",uVar3);
    _objc_release(uVar3);
    _objc_msgSend(uVar1,"decodeObjectForKey:",&cf_kind);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend(&objc::class_t::ADJActivityKindUtil,"activityKindFromString:",uVar3);
    _objc_msgSend(IVar2,"setActivityKind:",uVar4);
    _objc_retain(IVar2);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_release(IVar2);
  return IVar2;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityPackage::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = activityKind(param_1,(SEL)"activityKind");
  _objc_msgSend(&objc::class_t::ADJActivityKindUtil,"activityKindToString:",iVar1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  path(param_1,(SEL)"path");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_path);
  _objc_release(uVar4);
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar3,&cf_kind);
  suffix(param_1,(SEL)"suffix");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_suffix);
  _objc_release(uVar4);
  clientSdk(param_1,(SEL)"clientSdk");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_clientSdk);
  _objc_release(uVar4);
  parameters(param_1,(SEL)"parameters");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_parameters);
  _objc_release(uVar4);
  callbackParameters(param_1,(SEL)"callbackParameters");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_callbackParameters);
  _objc_release(uVar4);
  partnerParameters(param_1,(SEL)"partnerParameters");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_3,"encodeObject:forKey:",uVar4,&cf_partnerParameters);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::path(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_path,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityPackage::setPath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::clientSdk(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_clientSdk,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityPackage::setClientSdk_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

long_long ADJActivityPackage::retries(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_retries);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityPackage::setRetries_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + (long)_retries) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::parameters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_parameters);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityPackage::setParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_parameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::partnerParameters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_partnerParameters);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityPackage::setPartnerParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_partnerParameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::callbackParameters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_callbackParameters);
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityPackage::setCallbackParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_callbackParameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJActivityPackage::suffix(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_suffix,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJActivityPackage::setSuffix_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

int ADJActivityPackage::activityKind(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_activityKind);
}




/* Function Stack Size: 0x14 bytes */

void ADJActivityPackage::setActivityKind_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_activityKind) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJActivityPackage::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_suffix,0);
  _objc_storeStrong(param_1 + (long)_callbackParameters,0);
  _objc_storeStrong(param_1 + (long)_partnerParameters,0);
  _objc_storeStrong(param_1 + (long)_parameters,0);
  _objc_storeStrong(param_1 + (long)_clientSdk,0);
  _objc_storeStrong(param_1 + (long)_path,0);
  return;
}

