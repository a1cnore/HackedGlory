// classes/ADJResponseData — 22 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID ADJResponseData::init(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJResponseData;
  local_30 = param_1;
  lVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (lVar1 == 0) {
    IVar2 = 0;
  }
  else {
    IVar2 = _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

ID ADJResponseData::responseData(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_msgSend(&objc::class_t::ADJResponseData,"alloc");
  _objc_msgSend(uVar1,"init");
  IVar2 = _objc_autoreleaseReturnValue();
  return IVar2;
}




/* Function Stack Size: 0x18 bytes */

ID ADJResponseData::buildResponseData_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  lVar1 = _objc_retain(param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
switchD_10112b98c_caseD_3:
    uVar3 = _objc_msgSend(&objc::class_t::ADJResponseData,"alloc");
    uVar3 = _objc_msgSend(uVar3,"init");
  }
  else {
    uVar2 = _objc_msgSend(lVar1,"activityKind");
    switch((int)uVar2) {
    case 1:
      uVar2 = _objc_msgSend(&objc::class_t::ADJSessionResponseData,"alloc");
      uVar3 = _objc_msgSend(uVar2,"init");
      uVar2 = 1;
      break;
    case 2:
      uVar2 = _objc_msgSend(&objc::class_t::ADJEventResponseData,"alloc");
      uVar3 = _objc_msgSend(uVar2,"initWithActivityPackage:",lVar1);
      uVar2 = 2;
      break;
    default:
      goto switchD_10112b98c_caseD_3;
    case 4:
      uVar2 = _objc_msgSend(&objc::class_t::ADJSdkClickResponseData,"alloc");
      uVar3 = _objc_msgSend(uVar2,"init");
      uVar2 = 4;
      break;
    case 5:
      uVar2 = _objc_msgSend(&objc::class_t::ADJAttributionResponseData,"alloc");
      uVar3 = _objc_msgSend(uVar2,"init");
      uVar2 = 5;
    }
  }
  _objc_msgSend(uVar3,"setActivityKind:",uVar2);
  _objc_release(lVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID ADJResponseData::description(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  message(param_1,(SEL)"message");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  timeStamp(param_1,(SEL)"timeStamp");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  adid(param_1,(SEL)"adid");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  success(param_1,(SEL)"success");
  willRetry(param_1,(SEL)"willRetry");
  attribution(param_1,(SEL)"attribution");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  jsonResponse(param_1,(SEL)"jsonResponse");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                &cf_message___timestamp___adid___success__dwillRetry__dattribution___json___);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  IVar7 = _objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}




/* Function Stack Size: 0x18 bytes */

ID ADJResponseData::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  
  uVar2 = _objc_msgSend(param_1,"class");
  IVar3 = _objc_msgSend(uVar2,"allocWithZone:",param_3);
  IVar3 = init(IVar3,(SEL)"init");
  if (IVar3 != 0) {
    message(param_1,(SEL)"message");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    IVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    setMessage_(IVar3,(SEL)"setMessage:",IVar4);
    _objc_release(IVar4);
    _objc_release(uVar2);
    timeStamp(param_1,(SEL)"timeStamp");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    IVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    setTimeStamp_(IVar3,(SEL)"setTimeStamp:",IVar4);
    _objc_release(IVar4);
    _objc_release(uVar2);
    adid(param_1,(SEL)"adid");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    IVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    setAdid_(IVar3,(SEL)"setAdid:",IVar4);
    _objc_release(IVar4);
    _objc_release(uVar2);
    bVar1 = success(param_1,(SEL)"success");
    setSuccess_(IVar3,(SEL)"setSuccess:",bVar1);
    bVar1 = willRetry(param_1,(SEL)"willRetry");
    setWillRetry_(IVar3,(SEL)"setWillRetry:",bVar1);
    jsonResponse(param_1,(SEL)"jsonResponse");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    IVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    setJsonResponse_(IVar3,(SEL)"setJsonResponse:",IVar4);
    _objc_release(IVar4);
    _objc_release(uVar2);
    attribution(param_1,(SEL)"attribution");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    IVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    setAttribution_(IVar3,(SEL)"setAttribution:",IVar4);
    _objc_release(IVar4);
    _objc_release(uVar2);
  }
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

int ADJResponseData::activityKind(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_activityKind);
}




/* Function Stack Size: 0x14 bytes */

void ADJResponseData::setActivityKind_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_activityKind) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJResponseData::message(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_message,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJResponseData::setMessage_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJResponseData::timeStamp(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_timeStamp,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJResponseData::setTimeStamp_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJResponseData::adid(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_adid,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJResponseData::setAdid_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJResponseData::success(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_success);
}




/* Function Stack Size: 0x14 bytes */

void ADJResponseData::setSuccess_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_success) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJResponseData::willRetry(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_willRetry);
}




/* Function Stack Size: 0x14 bytes */

void ADJResponseData::setWillRetry_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_willRetry) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJResponseData::jsonResponse(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_jsonResponse);
}




/* Function Stack Size: 0x18 bytes */

void ADJResponseData::setJsonResponse_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_jsonResponse,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJResponseData::attribution(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_attribution,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJResponseData::setAttribution_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJResponseData::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_attribution,0);
  _objc_storeStrong(param_1 + (long)_jsonResponse,0);
  _objc_storeStrong(param_1 + (long)_adid,0);
  _objc_storeStrong(param_1 + (long)_timeStamp,0);
  _objc_storeStrong(param_1 + (long)_message,0);
  return;
}

