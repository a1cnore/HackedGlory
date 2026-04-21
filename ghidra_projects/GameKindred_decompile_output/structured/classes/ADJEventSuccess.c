// classes/ADJEventSuccess — 15 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID ADJEventSuccess::init(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJEventSuccess;
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

ID ADJEventSuccess::eventSuccessResponseData(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_msgSend(&objc::class_t::ADJEventSuccess,"alloc");
  _objc_msgSend(uVar1,"init");
  IVar2 = _objc_autoreleaseReturnValue();
  return IVar2;
}




/* Function Stack Size: 0x18 bytes */

ID ADJEventSuccess::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  
  uVar1 = _objc_msgSend(param_1,"class");
  IVar2 = _objc_msgSend(uVar1,"allocWithZone:",param_3);
  IVar2 = init(IVar2,(SEL)"init");
  if (IVar2 != 0) {
    message(param_1,(SEL)"message");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setMessage_(IVar2,(SEL)"setMessage:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    timeStamp(param_1,(SEL)"timeStamp");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setTimeStamp_(IVar2,(SEL)"setTimeStamp:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    adid(param_1,(SEL)"adid");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setAdid_(IVar2,(SEL)"setAdid:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    eventToken(param_1,(SEL)"eventToken");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setEventToken_(IVar2,(SEL)"setEventToken:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    jsonResponse(param_1,(SEL)"jsonResponse");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setJsonResponse_(IVar2,(SEL)"setJsonResponse:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
  }
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventSuccess::description(ID param_1,SEL param_2)

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
  eventToken(param_1,(SEL)"eventToken");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  jsonResponse(param_1,(SEL)"jsonResponse");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                &cf_EventSuccessmsg___time___adid___event___json___);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  IVar7 = _objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventSuccess::message(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_message,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJEventSuccess::setMessage_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventSuccess::timeStamp(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_timeStamp,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJEventSuccess::setTimeStamp_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventSuccess::adid(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_adid,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJEventSuccess::setAdid_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventSuccess::eventToken(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_eventToken,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJEventSuccess::setEventToken_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEventSuccess::jsonResponse(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_jsonResponse);
}




/* Function Stack Size: 0x18 bytes */

void ADJEventSuccess::setJsonResponse_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_jsonResponse,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJEventSuccess::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_jsonResponse,0);
  _objc_storeStrong(param_1 + (long)_eventToken,0);
  _objc_storeStrong(param_1 + (long)_adid,0);
  _objc_storeStrong(param_1 + (long)_timeStamp,0);
  _objc_storeStrong(param_1 + (long)_message,0);
  return;
}

