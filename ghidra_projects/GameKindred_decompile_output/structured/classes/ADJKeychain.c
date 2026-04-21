// classes/ADJKeychain — 9 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID ADJKeychain::getInstance(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL extraout_x1;
  undefined *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_101444138;
  local_30 = 0xc2000000;
  uStack_2c = 0;
  local_28 = FUN_1011306e0;
  puStack_20 = &DAT_101830d70;
  local_18 = param_1;
  if (DAT_101ea6090 != -1) {
    _dispatch_once(&DAT_101ea6090,&local_38);
    param_2 = extraout_x1;
  }
  IVar1 = _objc_retainAutoreleaseReturnValue(DAT_101ea6088,param_2);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJKeychain::init(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJKeychain;
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




/* Function Stack Size: 0x20 bytes */

ID ADJKeychain::valueForKeychainKeyV1_service_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  lVar1 = _objc_retain(param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _objc_retain(param_4);
    _objc_msgSend(&objc::class_t::ADJKeychain,"getInstance");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend(uVar3,"valueForKeychainKeyV1:service:",lVar1,uVar2);
    _objc_release(uVar2);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  IVar5 = _objc_autoreleaseReturnValue(uVar2);
  return IVar5;
}




/* Function Stack Size: 0x20 bytes */

ID ADJKeychain::valueForKeychainKeyV2_service_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  lVar1 = _objc_retain(param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _objc_retain(param_4);
    _objc_msgSend(&objc::class_t::ADJKeychain,"getInstance");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend(uVar3,"valueForKeychainKeyV2:service:",lVar1,uVar2);
    _objc_release(uVar2);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  IVar5 = _objc_autoreleaseReturnValue(uVar2);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

const___CFString____ ADJKeychain::getSecAttrAccessGroupToken(ID param_1,SEL param_2)

{
  const___CFString____ pp_Var1;
  
  pp_Var1 = (const___CFString____)_dlsym(0xfffffffffffffffd,"kSecAttrAccessGroupToken");
  return pp_Var1;
}




/* Function Stack Size: 0x20 bytes */

ID ADJKeychain::valueForKeychainKeyV2_service_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  
  IVar1 = _objc_retain(param_3);
  IVar2 = _objc_retain(param_4);
  keychainItemForKeyV2_service_(param_1,(SEL)"keychainItemForKeyV2:service:",IVar1,IVar2);
  IVar3 = _objc_retainAutoreleasedReturnValue();
  IVar4 = valueForKeychainItem_key_service_
                    (param_1,(SEL)"valueForKeychainItem:key:service:",IVar3,IVar1,IVar2);
  _objc_release(IVar2);
  _objc_release(IVar1);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  _objc_release(IVar3);
  IVar1 = _objc_autoreleaseReturnValue(uVar5);
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

ID ADJKeychain::valueForKeychainKeyV1_service_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  
  IVar1 = _objc_retain(param_3);
  IVar2 = _objc_retain(param_4);
  keychainItemForKeyV1_service_(param_1,(SEL)"keychainItemForKeyV1:service:",IVar1,IVar2);
  IVar3 = _objc_retainAutoreleasedReturnValue();
  IVar4 = valueForKeychainItem_key_service_
                    (param_1,(SEL)"valueForKeychainItem:key:service:",IVar3,IVar1,IVar2);
  _objc_release(IVar2);
  _objc_release(IVar1);
  uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
  _objc_release(IVar3);
  IVar1 = _objc_autoreleaseReturnValue(uVar5);
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

ID ADJKeychain::keychainItemForKeyV2_service_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 *puVar5;
  
  IVar1 = _objc_retain(param_3);
  IVar2 = _objc_retain(param_4);
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"alloc");
  IVar4 = _objc_msgSend(uVar3,"init");
  puVar5 = (undefined8 *)_objc_msgSend(&objc::class_t::ADJKeychain,"getSecAttrAccessGroupToken");
  if (puVar5 == (undefined8 *)0x0) {
    uVar3 = 0;
  }
  else {
    _objc_msgSend(IVar4,"setObject:forKeyedSubscript:",*puVar5,
                  *(undefined8 *)PTR__kSecAttrAccessGroup_1014442c0);
    keychainItemForKey_key_service_
              (param_1,(SEL)"keychainItemForKey:key:service:",IVar4,IVar1,IVar2);
    uVar3 = _objc_retain(IVar4);
  }
  _objc_release(IVar4);
  _objc_release(IVar2);
  _objc_release(IVar1);
  IVar1 = _objc_autoreleaseReturnValue(uVar3);
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

ID ADJKeychain::keychainItemForKeyV1_service_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  
  IVar1 = _objc_retain(param_3);
  IVar2 = _objc_retain(param_4);
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"alloc");
  IVar4 = _objc_msgSend(uVar3,"init");
  _objc_msgSend(IVar4,"setObject:forKeyedSubscript:",
                *(undefined8 *)PTR__kSecAttrAccessibleAlways_1014442d0,
                *(undefined8 *)PTR__kSecAttrAccessible_1014442c8);
  keychainItemForKey_key_service_(param_1,(SEL)"keychainItemForKey:key:service:",IVar4,IVar1,IVar2);
  _objc_release(IVar2);
  _objc_release(IVar1);
  IVar1 = _objc_autoreleaseReturnValue(IVar4);
  return IVar1;
}

