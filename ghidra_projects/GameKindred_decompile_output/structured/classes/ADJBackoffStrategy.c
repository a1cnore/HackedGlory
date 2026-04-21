// classes/ADJBackoffStrategy — 12 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJBackoffStrategy::initWithType_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJBackoffStrategy;
  local_30 = param_1;
  lVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (lVar1 == 0) {
    IVar2 = 0;
    goto LAB_10112f4b0;
  }
  switch(param_3) {
  case 0:
    uVar4 = 0x405e000000000000;
    uVar5 = 0x40f5180000000000;
    goto LAB_10112f41c;
  case 1:
    uVar4 = 0x3fc999999999999a;
    uVar5 = 0x40ac200000000000;
LAB_10112f41c:
    uVar3 = 1;
    break;
  case 2:
    uVar4 = 0x3fc999999999999a;
    uVar5 = 0x3ff0000000000000;
    uVar3 = 1;
    break;
  case 3:
    uVar4 = 0x3ff0000000000000;
    uVar3 = 100;
    uVar5 = 0x3ff0000000000000;
    break;
  case 4:
    uVar4 = 0x40f86a0000000000;
    uVar3 = 0;
    uVar5 = uVar4;
    break;
  default:
    goto switchD_10112f3dc_default;
  }
  _objc_msgSend(uVar4,uVar5,0x3fe0000000000000,0x3ff0000000000000,lVar1,
                "saveStrategy:secondMultiplier:maxWait:minRange:maxRange:",uVar3);
switchD_10112f3dc_default:
  IVar2 = _objc_retain(lVar1);
LAB_10112f4b0:
  _objc_release(lVar1);
  return IVar2;
}




/* Function Stack Size: 0x18 bytes */

ID ADJBackoffStrategy::backoffStrategyWithType_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_msgSend(&objc::class_t::ADJBackoffStrategy,"alloc");
  _objc_msgSend(uVar1,"initWithType:",param_3);
  IVar2 = _objc_autoreleaseReturnValue();
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

double ADJBackoffStrategy::minRange(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_minRange);
}




/* Function Stack Size: 0x18 bytes */

void ADJBackoffStrategy::setMinRange_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_minRange) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

double ADJBackoffStrategy::maxRange(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_maxRange);
}




/* Function Stack Size: 0x18 bytes */

void ADJBackoffStrategy::setMaxRange_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_maxRange) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

long_long ADJBackoffStrategy::minRetries(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_minRetries);
}




/* Function Stack Size: 0x18 bytes */

void ADJBackoffStrategy::setMinRetries_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + (long)_minRetries) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

double ADJBackoffStrategy::maxWait(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_maxWait);
}




/* Function Stack Size: 0x18 bytes */

void ADJBackoffStrategy::setMaxWait_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_maxWait) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

double ADJBackoffStrategy::secondMultiplier(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_secondMultiplier);
}




/* Function Stack Size: 0x18 bytes */

void ADJBackoffStrategy::setSecondMultiplier_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_secondMultiplier) = param_3;
  return;
}

