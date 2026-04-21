// classes/ADJInternalState — 26 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID ADJInternalState::init(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJInternalState;
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

bool ADJInternalState::isEnabled(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"enabled");
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::isDisabled(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = enabled(param_1,(SEL)"enabled");
  return bVar1 ^ 1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::isOffline(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"offline");
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::isOnline(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = offline(param_1,(SEL)"offline");
  return bVar1 ^ 1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::isInBackground(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"background");
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::isInForeground(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = background(param_1,(SEL)"background");
  return bVar1 ^ 1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::isInDelayedStart(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"delayStart");
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::isNotInDelayedStart(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = delayStart(param_1,(SEL)"delayStart");
  return bVar1 ^ 1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::itHasToUpdatePackages(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"updatePackages");
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::isFirstLaunch(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"firstLaunch");
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::hasSessionResponseNotBeenProcessed(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = sessionResponseProcessed(param_1,(SEL)"sessionResponseProcessed");
  return bVar1 ^ 1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::enabled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_enabled);
}




/* Function Stack Size: 0x14 bytes */

void ADJInternalState::setEnabled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_enabled) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::offline(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_offline);
}




/* Function Stack Size: 0x14 bytes */

void ADJInternalState::setOffline_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_offline) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::background(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_background);
}




/* Function Stack Size: 0x14 bytes */

void ADJInternalState::setBackground_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_background) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::delayStart(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_delayStart);
}




/* Function Stack Size: 0x14 bytes */

void ADJInternalState::setDelayStart_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_delayStart) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::updatePackages(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_updatePackages);
}




/* Function Stack Size: 0x14 bytes */

void ADJInternalState::setUpdatePackages_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_updatePackages) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::firstLaunch(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_firstLaunch);
}




/* Function Stack Size: 0x14 bytes */

void ADJInternalState::setFirstLaunch_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_firstLaunch) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJInternalState::sessionResponseProcessed(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_sessionResponseProcessed);
}




/* Function Stack Size: 0x14 bytes */

void ADJInternalState::setSessionResponseProcessed_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_sessionResponseProcessed) = (char)param_3;
  return;
}

