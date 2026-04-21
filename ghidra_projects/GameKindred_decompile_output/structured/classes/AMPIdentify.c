// classes/AMPIdentify — 9 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID AMPIdentify::init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID local_40;
  class_t *local_38;
  
  local_38 = &objc::class_t::AMPIdentify;
  local_40 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"alloc");
    uVar2 = _objc_msgSend(uVar2,"init");
    uVar3 = *(undefined8 *)(IVar1 + (long)_userPropertyOperations);
    *(undefined8 *)(IVar1 + (long)_userPropertyOperations) = uVar2;
    _objc_release(uVar3);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSMutableSet,"alloc");
    uVar2 = _objc_msgSend(uVar2,"init");
    uVar3 = *(undefined8 *)(IVar1 + (long)_userProperties);
    *(undefined8 *)(IVar1 + (long)_userProperties) = uVar2;
    _objc_release(uVar3);
  }
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID AMPIdentify::identify(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"alloc");
  init(IVar1,(SEL)"init");
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void AMPIdentify::dealloc(ID param_1,SEL param_2)

{
  ID local_20;
  class_t *local_18;
  
  local_18 = &objc::class_t::AMPIdentify;
  local_20 = param_1;
  _objc_msgSendSuper2(&local_20,"dealloc");
  return;
}




/* Function Stack Size: 0x20 bytes */

ID AMPIdentify::add_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  IVar2 = _objc_retain(param_3);
  IVar3 = _objc_retain(param_4);
  uVar4 = _objc_msgSend(&_OBJC_CLASS___NSNumber,"class");
  uVar5 = _objc_msgSend(IVar3,"isKindOfClass:",uVar4);
  if ((uVar5 & 1) == 0) {
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSString,"class");
    iVar1 = _objc_msgSend(IVar3,"isKindOfClass:",uVar4);
    if (iVar1 == 0) {
      _NSLog(&cf_UnsupportedvaluetypeforADDoperation_expectingNSNumberorNSString);
      goto LAB_1011345b0;
    }
  }
  addToUserProperties_property_value_
            (param_1,(SEL)"addToUserProperties:property:value:",(ID)&cf__add,IVar2,IVar3);
LAB_1011345b0:
  _objc_release(IVar3);
  _objc_release(IVar2);
  return param_1;
}




/* Function Stack Size: 0x20 bytes */

ID AMPIdentify::set_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = _objc_retain(param_3);
  addToUserProperties_property_value_
            (param_1,(SEL)"addToUserProperties:property:value:",(ID)&cf__set,IVar1,param_4);
  _objc_release(IVar1);
  return param_1;
}




/* Function Stack Size: 0x20 bytes */

ID AMPIdentify::setOnce_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = _objc_retain(param_3);
  addToUserProperties_property_value_
            (param_1,(SEL)"addToUserProperties:property:value:",(ID)&cf__setOnce,IVar1,param_4);
  _objc_release(IVar1);
  return param_1;
}




/* Function Stack Size: 0x18 bytes */

ID AMPIdentify::unset_(ID param_1,SEL param_2,ID param_3)

{
  addToUserProperties_property_value_
            (param_1,(SEL)"addToUserProperties:property:value:",(ID)&cf__unset,param_3,0x101836918);
  return param_1;
}




/* Function Stack Size: 0x10 bytes */

ID AMPIdentify::userPropertyOperations(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_userPropertyOperations);
}




/* Function Stack Size: 0x10 bytes */

void AMPIdentify::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_userPropertyOperations,0);
  _objc_storeStrong(param_1 + (long)_userProperties,0);
  return;
}

