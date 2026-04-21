// classes/ADJTimerCycle — 13 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

void ADJTimerCycle::resume(ID param_1,SEL param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dispatch_object_t object;
  
  source(param_1,(SEL)"source");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    return;
  }
  bVar1 = suspended(param_1,(SEL)"suspended");
  logger(param_1,(SEL)"logger");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  name(param_1,(SEL)"name");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  if ((bVar1 & 1) != 0) {
    _objc_msgSend(uVar3,"verbose:",&cf___starting);
    _objc_release(uVar4);
    _objc_release(uVar3);
    source(param_1,(SEL)"source");
    object._os_obj = (_os_object_s *)_objc_retainAutoreleasedReturnValue();
    _dispatch_resume(object);
    _objc_release(object._os_obj);
    setSuspended_(param_1,(SEL)"setSuspended:",0);
    return;
  }
  _objc_msgSend(uVar3,"verbose:",&cf___isalreadystarted);
  _objc_release(uVar4);
  _objc_release(uVar3);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJTimerCycle::suspend(ID param_1,SEL param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dispatch_object_t object;
  
  source(param_1,(SEL)"source");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    return;
  }
  bVar1 = suspended(param_1,(SEL)"suspended");
  logger(param_1,(SEL)"logger");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  name(param_1,(SEL)"name");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  if (bVar1 != 0) {
    _objc_msgSend(uVar3,"verbose:",&cf___isalreadysuspended);
    _objc_release(uVar4);
    _objc_release(uVar3);
    return;
  }
  _objc_msgSend(uVar3,"verbose:",&cf___suspended);
  _objc_release(uVar4);
  _objc_release(uVar3);
  source(param_1,(SEL)"source");
  object._os_obj = (_os_object_s *)_objc_retainAutoreleasedReturnValue();
  _dispatch_suspend(object);
  _objc_release(object._os_obj);
  setSuspended_(param_1,(SEL)"setSuspended:",1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJTimerCycle::cancel(ID param_1,SEL param_2)

{
  long lVar1;
  dispatch_source_t source;
  
  ADJTimerCycle::source(param_1,(SEL)"source");
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    resume(param_1,(SEL)"resume");
    ADJTimerCycle::source(param_1,(SEL)"source");
    source = (dispatch_source_t)_objc_retainAutoreleasedReturnValue();
    _dispatch_source_cancel(source);
    _objc_release(source);
  }
  setSource_(param_1,(SEL)"setSource:",0);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJTimerCycle::dealloc(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID local_40;
  class_t *local_38;
  
  logger(param_1,(SEL)"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  name(param_1,(SEL)"name");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"verbose:",&cf___dealloc);
  _objc_release(uVar2);
  _objc_release(uVar1);
  local_38 = &objc::class_t::ADJTimerCycle;
  local_40 = param_1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJTimerCycle::source(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_source);
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerCycle::setSource_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_source,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJTimerCycle::suspended(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_suspended);
}




/* Function Stack Size: 0x14 bytes */

void ADJTimerCycle::setSuspended_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_suspended) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJTimerCycle::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerCycle::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJTimerCycle::name(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_name,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerCycle::setName_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJTimerCycle::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_name,0);
  _objc_destroyWeak(param_1 + (long)_logger);
  _objc_storeStrong(param_1 + (long)_source,0);
  return;
}

