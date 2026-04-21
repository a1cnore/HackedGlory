// classes/ADJAttributionResponseData — 6 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJAttributionResponseData::initWithActivityPackage_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJAttributionResponseData;
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




/* Function Stack Size: 0x18 bytes */

ID ADJAttributionResponseData::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  ID IVar1;
  ID local_20;
  class_t *local_18;
  
  local_18 = &objc::class_t::ADJAttributionResponseData;
  local_20 = param_1;
  IVar1 = ADJResponseData::copyWithZone_((ID)&local_20,(SEL)"copyWithZone:",param_3);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAttributionResponseData::description(ID param_1,SEL param_2)

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
  _objc_msgSend(param_1,"success");
  _objc_msgSend(param_1,"willRetry");
  _objc_msgSend(param_1,"attribution");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  deeplink(param_1,(SEL)"deeplink");
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(param_1,"jsonResponse");
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",
                &
                cf_message___timestamp___adid___success__dwillRetry__dattribution___deeplink___json___
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




/* Function Stack Size: 0x10 bytes */

ID ADJAttributionResponseData::deeplink(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_deeplink);
}




/* Function Stack Size: 0x18 bytes */

void ADJAttributionResponseData::setDeeplink_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_deeplink,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJAttributionResponseData::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_deeplink,0);
  return;
}

