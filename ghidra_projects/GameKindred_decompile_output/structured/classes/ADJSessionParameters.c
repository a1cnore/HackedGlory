// classes/ADJSessionParameters — 7 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJSessionParameters::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJSessionParameters;
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




/* Function Stack Size: 0x18 bytes */

ID ADJSessionParameters::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  undefined8 uVar1;
  ID IVar2;
  ID IVar3;
  
  uVar1 = _objc_msgSend(param_1,"class");
  uVar1 = _objc_msgSend(uVar1,"allocWithZone:",param_3);
  IVar2 = _objc_msgSend(uVar1,"init");
  if (IVar2 != 0) {
    callbackParameters(param_1,(SEL)"callbackParameters");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setCallbackParameters_(IVar2,(SEL)"setCallbackParameters:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
    partnerParameters(param_1,(SEL)"partnerParameters");
    uVar1 = _objc_retainAutoreleasedReturnValue();
    IVar3 = _objc_msgSend(uVar1,"copyWithZone:",param_3);
    setPartnerParameters_(IVar2,(SEL)"setPartnerParameters:",IVar3);
    _objc_release(IVar3);
    _objc_release(uVar1);
  }
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSessionParameters::callbackParameters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_callbackParameters);
}




/* Function Stack Size: 0x18 bytes */

void ADJSessionParameters::setCallbackParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_callbackParameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSessionParameters::partnerParameters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_partnerParameters);
}




/* Function Stack Size: 0x18 bytes */

void ADJSessionParameters::setPartnerParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_partnerParameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJSessionParameters::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_partnerParameters,0);
  _objc_storeStrong(param_1 + (long)_callbackParameters,0);
  return;
}

