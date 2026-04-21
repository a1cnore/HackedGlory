// classes/ADJAdjustFactory — 27 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJAdjustFactory::requestHandlerForPackageHandler_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  lVar1 = DAT_101ea5ff8;
  if (DAT_101ea5ff8 == 0) {
    uVar3 = _objc_retain(param_3);
    uVar2 = _objc_msgSend(&objc::class_t::ADJRequestHandler,"handlerWithPackageHandler:",uVar3);
    _objc_release(uVar3);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  }
  else {
    uVar2 = _objc_retain(param_3);
    uVar3 = _objc_retain(lVar1);
    uVar3 = _objc_msgSend(uVar3,"initWithPackageHandler:",uVar2);
    _objc_release(uVar2);
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAdjustFactory::logger(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  SEL extraout_x1;
  
  if (DAT_101ea6008 == 0) {
    uVar2 = _objc_msgSend(&objc::class_t::ADJLogger,"alloc");
    lVar3 = _objc_msgSend(uVar2,"init");
    lVar1 = DAT_101ea6008;
    DAT_101ea6008 = lVar3;
    _objc_release(lVar1);
    param_2 = extraout_x1;
  }
  IVar4 = _objc_retainAutoreleaseReturnValue(DAT_101ea6008,param_2);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

double ADJAdjustFactory::sessionInterval(ID param_1,SEL param_2)

{
  double dVar1;
  
  dVar1 = 1800.0;
  if (0.0 <= DAT_1018737d8) {
    dVar1 = DAT_1018737d8;
  }
  return dVar1;
}




/* Function Stack Size: 0x10 bytes */

double ADJAdjustFactory::subsessionInterval(ID param_1,SEL param_2)

{
  double dVar1;
  
  dVar1 = 1.0;
  if (DAT_1018737e0 != -1.0) {
    dVar1 = DAT_1018737e0;
  }
  return dVar1;
}




/* Function Stack Size: 0x10 bytes */

double ADJAdjustFactory::timerInterval(ID param_1,SEL param_2)

{
  double dVar1;
  
  dVar1 = 60.0;
  if (0.0 <= DAT_1018737e8) {
    dVar1 = DAT_1018737e8;
  }
  return dVar1;
}




/* Function Stack Size: 0x10 bytes */

double ADJAdjustFactory::timerStart(ID param_1,SEL param_2)

{
  double dVar1;
  
  dVar1 = 60.0;
  if (0.0 <= DAT_1018737f0) {
    dVar1 = DAT_1018737f0;
  }
  return dVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAdjustFactory::packageHandlerBackoffStrategy(ID param_1,SEL param_2)

{
  ID IVar1;
  
  if (DAT_101ea6020 == 0) {
    _objc_msgSend(&objc::class_t::ADJBackoffStrategy,"backoffStrategyWithType:",0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain();
  }
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAdjustFactory::sdkClickHandlerBackoffStrategy(ID param_1,SEL param_2)

{
  ID IVar1;
  
  if (DAT_101ea6028 == 0) {
    _objc_msgSend(&objc::class_t::ADJBackoffStrategy,"backoffStrategyWithType:",1);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain();
  }
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJAdjustFactory::testing(ID param_1,SEL param_2)

{
  return (bool)DAT_101ea6030;
}




/* Function Stack Size: 0x10 bytes */

double ADJAdjustFactory::maxDelayStart(ID param_1,SEL param_2)

{
  double dVar1;
  
  dVar1 = 10.0;
  if (0.0 <= DAT_1018737f8) {
    dVar1 = DAT_1018737f8;
  }
  return dVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJAdjustFactory::baseUrl(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_retainAutoreleaseReturnValue(PTR_cf_https___app_adjust_com_1018737d0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setPackageHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(&DAT_101ea5ff0,param_3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setRequestHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(&DAT_101ea5ff8,param_3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setActivityHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(&DAT_101ea6000,param_3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(&DAT_101ea6008,param_3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setSessionInterval_(ID param_1,SEL param_2,double param_3)

{
  DAT_1018737d8 = param_3;
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setSubsessionInterval_(ID param_1,SEL param_2,double param_3)

{
  DAT_1018737e0 = param_3;
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setTimerInterval_(ID param_1,SEL param_2,double param_3)

{
  DAT_1018737e8 = param_3;
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setTimerStart_(ID param_1,SEL param_2,double param_3)

{
  DAT_1018737f0 = param_3;
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setAttributionHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(&DAT_101ea6010,param_3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setSdkClickHandler_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(&DAT_101ea6018,param_3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setPackageHandlerBackoffStrategy_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(&DAT_101ea6020,param_3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setSdkClickHandlerBackoffStrategy_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(&DAT_101ea6028,param_3);
  return;
}




/* Function Stack Size: 0x14 bytes */

void ADJAdjustFactory::setTesting_(ID param_1,SEL param_2,bool param_3)

{
  DAT_101ea6030 = (char)param_3;
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setMaxDelayStart_(ID param_1,SEL param_2,double param_3)

{
  DAT_1018737f8 = param_3;
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJAdjustFactory::setBaseUrl_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(&PTR_cf_https___app_adjust_com_1018737d0,param_3);
  return;
}




/* Function Stack Size: 0x14 bytes */

void ADJAdjustFactory::teardown_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  SEL extraout_x1;
  
  if (param_3 != 0) {
    _objc_msgSend(&objc::class_t::ADJActivityHandler,"deleteState");
    _objc_msgSend(&objc::class_t::ADJPackageHandler,"deleteState");
    param_2 = extraout_x1;
  }
  uVar1 = DAT_101ea5ff0;
  DAT_101ea5ff0 = 0;
  _objc_release(uVar1,param_2);
  uVar1 = DAT_101ea5ff8;
  DAT_101ea5ff8 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6000;
  DAT_101ea6000 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6008;
  DAT_101ea6008 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6010;
  DAT_101ea6010 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6018;
  DAT_101ea6018 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6020;
  DAT_1018737d8 = 0xbff0000000000000;
  DAT_1018737e0 = 0xbff0000000000000;
  DAT_1018737e8 = 0xbff0000000000000;
  DAT_1018737f0 = 0xbff0000000000000;
  DAT_101ea6020 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_101ea6028;
  DAT_101ea6028 = 0;
  _objc_release(uVar1);
  DAT_101ea6030 = 0;
  DAT_1018737f8 = 0xbff0000000000000;
  _objc_storeStrong(&PTR_cf_https___app_adjust_com_1018737d0,&cf_https___app_adjust_com);
  return;
}

