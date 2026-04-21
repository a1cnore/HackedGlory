// classes/ADJSessionResponseData — 4 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJSessionResponseData::initWithActivityPackage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJSessionResponseData;
  local_30 = param_1;
  IVar1 = ADJResponseData::init((ID)&local_30,(SEL)"init");
  if (IVar1 == 0) {
    IVar2 = 0;
  }
  else {
    IVar2 = _objc_retain(IVar1);
  }
  _objc_release(IVar1);
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSessionResponseData::successResponseData(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::ADJSessionSuccess,"sessionSuccessResponseData");
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
  _objc_msgSend(param_1,"jsonResponse");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setJsonResponse:",uVar2);
  _objc_release(uVar2);
  IVar3 = _objc_autoreleaseReturnValue(uVar1);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSessionResponseData::failureResponseData(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&objc::class_t::ADJSessionFailure,"sessionFailureResponseData");
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
  uVar2 = _objc_msgSend(param_1,"willRetry");
  _objc_msgSend(uVar1,"setWillRetry:",uVar2);
  _objc_msgSend(param_1,"jsonResponse");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setJsonResponse:",uVar2);
  _objc_release(uVar2);
  IVar3 = _objc_autoreleaseReturnValue(uVar1);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

ID ADJSessionResponseData::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  ID local_20;
  class_t *local_18;
  
  local_18 = &objc::class_t::ADJSessionResponseData;
  local_20 = param_1;
  IVar1 = ADJResponseData::copyWithZone_((ID)&local_20,(SEL)"copyWithZone:",param_3);
  return IVar1;
}

