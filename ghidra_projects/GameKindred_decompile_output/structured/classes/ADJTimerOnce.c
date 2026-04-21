// classes/ADJTimerOnce — 19 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

double ADJTimerOnce::fireIn(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  double dVar3;
  
  fireDate(param_1,(SEL)"fireDate");
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    dVar3 = 0.0;
  }
  else {
    fireDate(param_1,(SEL)"fireDate");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    dVar3 = (double)_objc_msgSend(uVar2,"timeIntervalSinceNow");
    _objc_release(uVar2);
  }
  return dVar3;
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerOnce::startIn_(ID param_1,SEL param_2,double param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  dispatch_queue_t queue;
  dispatch_source_t pdVar5;
  dispatch_time_t start;
  dispatch_object_t object;
  
  cancel_(param_1,(SEL)"cancel:",0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSDate,"alloc");
  IVar2 = _objc_msgSend(param_3,uVar1,"initWithTimeIntervalSinceNow:");
  setFireDate_(param_1,(SEL)"setFireDate:",IVar2);
  _objc_release(IVar2);
  fireIn(param_1,(SEL)"fireIn");
  _objc_msgSend(&objc::class_t::ADJUtil,"secondsNumberFormat:");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  logger(param_1,(SEL)"logger");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  name(param_1,(SEL)"name");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"verbose:",&cf___starting_Launchingin__seconds);
  _objc_release(uVar4);
  _objc_release(uVar3);
  internalQueue(param_1,(SEL)"internalQueue");
  queue = (dispatch_queue_t)_objc_retainAutoreleasedReturnValue();
  pdVar5 = _dispatch_source_create
                     ((dispatch_source_type_t)PTR___dispatch_source_type_timer_101444240,0,0,queue);
  setSource_(param_1,(SEL)"setSource:",(ID)pdVar5);
  _objc_release(pdVar5);
  _objc_release(queue);
  source(param_1,(SEL)"source");
  pdVar5 = (dispatch_source_t)_objc_retainAutoreleasedReturnValue();
  start = _dispatch_walltime((timespec *)0x0,(long)(param_3 * 1000000000.0));
  _dispatch_source_set_timer(pdVar5,start,0xffffffffffffffff,1000000000);
  _objc_release(pdVar5);
  source(param_1,(SEL)"source");
  object._os_obj = (_os_object_s *)_objc_retainAutoreleasedReturnValue();
  _dispatch_resume(object);
  _objc_release(object._os_obj);
  source(param_1,(SEL)"source");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  block(param_1,(SEL)"block");
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _dispatch_source_set_event_handler(uVar3,uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x14 bytes */

void ADJTimerOnce::cancel_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  dispatch_source_t source;
  undefined8 uVar2;
  undefined8 uVar3;
  
  ADJTimerOnce::source(param_1,(SEL)"source");
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    ADJTimerOnce::source(param_1,(SEL)"source");
    source = (dispatch_source_t)_objc_retainAutoreleasedReturnValue();
    _dispatch_source_cancel(source);
    _objc_release(source);
  }
  setSource_(param_1,(SEL)"setSource:",0);
  if (param_3 != 0) {
    logger(param_1,(SEL)"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    name(param_1,(SEL)"name");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"verbose:",&cf___canceled);
    _objc_release(uVar3);
    _objc_release(uVar2);
    return;
  }
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJTimerOnce::cancel(ID param_1,SEL param_2)

{
  cancel_(param_1,(SEL)"cancel:",1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJTimerOnce::dealloc(ID param_1,SEL param_2)

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
  local_38 = &objc::class_t::ADJTimerOnce;
  local_40 = param_1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJTimerOnce::internalQueue(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_internalQueue);
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerOnce::setInternalQueue_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_internalQueue,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJTimerOnce::source(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_source);
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerOnce::setSource_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_source,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJTimerOnce::block(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_block,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerOnce::setBlock_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

unsigned_long_long ADJTimerOnce::start(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_start);
}




/* Function Stack Size: 0x10 bytes */

ID ADJTimerOnce::fireDate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_fireDate);
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerOnce::setFireDate_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_fireDate,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJTimerOnce::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerOnce::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJTimerOnce::name(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_name,0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJTimerOnce::setName_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJTimerOnce::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_name,0);
  _objc_destroyWeak(param_1 + (long)_logger);
  _objc_storeStrong(param_1 + (long)_fireDate,0);
  _objc_storeStrong(param_1 + (long)_block,0);
  _objc_storeStrong(param_1 + (long)_source,0);
  _objc_storeStrong(param_1 + (long)_internalQueue,0);
  return;
}

