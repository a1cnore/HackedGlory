// classes/ADJSavedPreLaunch — 12 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID ADJSavedPreLaunch::init(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJSavedPreLaunch;
  local_30 = param_1;
  lVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (lVar1 == 0) {
    IVar2 = 0;
  }
  else {
    _objc_msgSend(lVar1,"setOffline:",0);
    IVar2 = _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSavedPreLaunch::preLaunchActionsArray(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_preLaunchActionsArray);
}




/* Function Stack Size: 0x18 bytes */

void ADJSavedPreLaunch::setPreLaunchActionsArray_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_preLaunchActionsArray,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSavedPreLaunch::deviceTokenData(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_deviceTokenData,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJSavedPreLaunch::setDeviceTokenData_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSavedPreLaunch::enabled(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_enabled,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJSavedPreLaunch::setEnabled_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJSavedPreLaunch::offline(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_offline);
}




/* Function Stack Size: 0x14 bytes */

void ADJSavedPreLaunch::setOffline_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_offline) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSavedPreLaunch::basePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_basePath,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJSavedPreLaunch::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJSavedPreLaunch::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_basePath,0);
  _objc_storeStrong(param_1 + (long)_enabled,0);
  _objc_storeStrong(param_1 + (long)_deviceTokenData,0);
  _objc_storeStrong(param_1 + (long)_preLaunchActionsArray,0);
  return;
}

