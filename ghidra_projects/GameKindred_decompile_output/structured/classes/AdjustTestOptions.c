// classes/AdjustTestOptions — 17 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID AdjustTestOptions::baseUrl(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_baseUrl,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void AdjustTestOptions::setBaseUrl_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID AdjustTestOptions::basePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_basePath,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void AdjustTestOptions::setBasePath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID AdjustTestOptions::timerIntervalInMilliseconds(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_timerIntervalInMilliseconds,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void AdjustTestOptions::setTimerIntervalInMilliseconds_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID AdjustTestOptions::timerStartInMilliseconds(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_timerStartInMilliseconds,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void AdjustTestOptions::setTimerStartInMilliseconds_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID AdjustTestOptions::sessionIntervalInMilliseconds(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_sessionIntervalInMilliseconds,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void AdjustTestOptions::setSessionIntervalInMilliseconds_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID AdjustTestOptions::subsessionIntervalInMilliseconds(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_subsessionIntervalInMilliseconds,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void AdjustTestOptions::setSubsessionIntervalInMilliseconds_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

bool AdjustTestOptions::teardown(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_teardown);
}




/* Function Stack Size: 0x14 bytes */

void AdjustTestOptions::setTeardown_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_teardown) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool AdjustTestOptions::deleteState(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_deleteState);
}




/* Function Stack Size: 0x14 bytes */

void AdjustTestOptions::setDeleteState_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_deleteState) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

void AdjustTestOptions::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_subsessionIntervalInMilliseconds,0);
  _objc_storeStrong(param_1 + (long)_sessionIntervalInMilliseconds,0);
  _objc_storeStrong(param_1 + (long)_timerStartInMilliseconds,0);
  _objc_storeStrong(param_1 + (long)_timerIntervalInMilliseconds,0);
  _objc_storeStrong(param_1 + (long)_basePath,0);
  _objc_storeStrong(param_1 + (long)_baseUrl,0);
  return;
}

