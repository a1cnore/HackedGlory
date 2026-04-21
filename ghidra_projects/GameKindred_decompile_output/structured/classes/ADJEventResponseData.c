// classes/ADJEventResponseData — 9 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJEventResponseData::responseDataWithActivityPackage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(&objc::class_t::ADJEventResponseData,"alloc");
  uVar2 = _objc_msgSend(uVar2,"initWithActivityPackage:",uVar1);
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

ID ADJEventResponseData::initWithActivityPackage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  ID local_40;
  class_t *local_38;
  
  uVar1 = _objc_retain(param_3);
  local_38 = &objc::class_t::ADJEventResponseData;
  local_40 = param_1;
  IVar2 = ADJResponseData::init((ID)&local_40,(SEL)"init");
  if (IVar2 == 0) {
    IVar5 = 0;
  }
  else {
    _objc_msgSend(uVar1,"parameters");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"objectForKey:",&cf_event_token);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(IVar2,"setEventToken:",uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
    IVar5 = _objc_retain(IVar2);
  }
  _objc_release(uVar1);
  _objc_release(IVar2);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventResponseData::successResponseData(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::ADJEventSuccess,"eventSuccessResponseData");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_1,"message");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setMessage:",uVar2);
  _objc_release(uVar2);
  _objc_msgSend(param_1,"timeStamp");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setTimeStamp:",uVar2);
  _objc_release(uVar2);
  _objc_msgSend(param_1,"adid");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setAdid:",uVar2);
  _objc_release(uVar2);
  eventToken(param_1,(SEL)"eventToken");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setEventToken:",uVar2);
  _objc_release(uVar2);
  _objc_msgSend(param_1,"jsonResponse");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setJsonResponse:",uVar2);
  _objc_release(uVar2);
  IVar3 = _objc_autoreleaseReturnValue(uVar1);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventResponseData::failureResponseData(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::ADJEventFailure,"eventFailureResponseData");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_1,"message");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setMessage:",uVar2);
  _objc_release(uVar2);
  _objc_msgSend(param_1,"timeStamp");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setTimeStamp:",uVar2);
  _objc_release(uVar2);
  _objc_msgSend(param_1,"adid");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setAdid:",uVar2);
  _objc_release(uVar2);
  eventToken(param_1,(SEL)"eventToken");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setEventToken:",uVar2);
  _objc_release(uVar2);
  uVar2 = _objc_msgSend(param_1,"willRetry");
  _objc_msgSend(uVar1,"setWillRetry:",uVar2);
  _objc_msgSend(param_1,"jsonResponse");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setJsonResponse:",uVar2);
  _objc_release(uVar2);
  IVar3 = _objc_autoreleaseReturnValue(uVar1);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventResponseData::description(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  
  _objc_msgSend(param_1,"message");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_1,"timeStamp");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_1,"adid");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  eventToken(param_1,(SEL)"eventToken");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_1,"success");
  _objc_msgSend(param_1,"willRetry");
  _objc_msgSend(param_1,"attribution");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_1,"jsonResponse");
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                &
                cf_message___timestamp___adid___eventToken___success__dwillRetry__dattribution___json___
               );
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  IVar8 = _objc_autoreleaseReturnValue(uVar7);
  return IVar8;
}




/* Function Stack Size: 0x18 bytes */

ID ADJEventResponseData::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID local_40;
  class_t *local_38;
  
  local_38 = &objc::class_t::ADJEventResponseData;
  local_40 = param_1;
  IVar1 = ADJResponseData::copyWithZone_((ID)&local_40,(SEL)"copyWithZone:",param_3);
  if (IVar1 != 0) {
    eventToken(param_1,(SEL)"eventToken");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    _objc_msgSend(IVar1,"setEventToken:",uVar3);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventResponseData::eventToken(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_eventToken,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJEventResponseData::setEventToken_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJEventResponseData::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_eventToken,0);
  return;
}

