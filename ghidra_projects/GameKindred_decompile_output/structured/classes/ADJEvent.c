// classes/ADJEvent — 27 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJEvent::eventWithEventToken_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(&objc::class_t::ADJEvent,"alloc");
  uVar2 = _objc_msgSend(uVar2,"initWithEventToken:",uVar1);
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

ID ADJEvent::initWithEventToken_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ID IVar5;
  ID local_40;
  class_t *local_38;
  
  uVar1 = _objc_retain(param_3);
  local_38 = &objc::class_t::ADJEvent;
  local_40 = param_1;
  lVar2 = _objc_msgSendSuper2(&local_40,"init");
  if (lVar2 == 0) {
    IVar5 = 0;
  }
  else {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar2,"setLogger:",uVar3);
    _objc_release(uVar3);
    uVar4 = _objc_msgSend(lVar2,"checkEventToken:",uVar1);
    if ((uVar4 & 1) != 0) {
      _objc_storeStrong(lVar2 + _eventToken,param_3);
    }
    IVar5 = _objc_retain(lVar2);
  }
  _objc_release(uVar1);
  _objc_release(lVar2);
  return IVar5;
}




/* Function Stack Size: 0x20 bytes */

void ADJEvent::addCallbackParameter_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isValidParameter:attributeType:parameterName:",
                        uVar2,&cf_key,&cf_Callback);
  if ((iVar1 != 0) &&
     (iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isValidParameter:attributeType:parameterName:",
                            uVar3,&cf_value,&cf_Callback), iVar1 != 0)) {
    callbackMutableParameters(param_1,(SEL)"callbackMutableParameters");
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      uVar5 = _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"alloc");
      IVar6 = _objc_msgSend(uVar5,"init");
      setCallbackMutableParameters_(param_1,(SEL)"setCallbackMutableParameters:",IVar6);
      _objc_release(IVar6);
    }
    callbackMutableParameters(param_1,(SEL)"callbackMutableParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"objectForKey:",uVar2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    if (lVar4 != 0) {
      logger(param_1,(SEL)"logger");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,"warn:",&cf_key__wasoverwritten);
      _objc_release(uVar5);
    }
    callbackMutableParameters(param_1,(SEL)"callbackMutableParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"setObject:forKey:",uVar3,uVar2);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJEvent::addPartnerParameter_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isValidParameter:attributeType:parameterName:",
                        uVar2,&cf_key,&cf_Partner);
  if ((iVar1 != 0) &&
     (iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isValidParameter:attributeType:parameterName:",
                            uVar3,&cf_value,&cf_Partner), iVar1 != 0)) {
    partnerMutableParameters(param_1,(SEL)"partnerMutableParameters");
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      uVar5 = _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"alloc");
      IVar6 = _objc_msgSend(uVar5,"init");
      setPartnerMutableParameters_(param_1,(SEL)"setPartnerMutableParameters:",IVar6);
      _objc_release(IVar6);
    }
    partnerMutableParameters(param_1,(SEL)"partnerMutableParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"objectForKey:",uVar2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    if (lVar4 != 0) {
      logger(param_1,(SEL)"logger");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,"warn:",&cf_key__wasoverwritten);
      _objc_release(uVar5);
    }
    partnerMutableParameters(param_1,(SEL)"partnerMutableParameters");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"setObject:forKey:",uVar3,uVar2);
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

void ADJEvent::setRevenue_currency_(ID param_1,SEL param_2,double param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  
  IVar2 = _objc_retain(param_4);
  uVar3 = _objc_msgSend(param_3,&_OBJC_CLASS___NSNumber,"numberWithDouble:");
  IVar4 = _objc_retainAutoreleasedReturnValue();
  bVar1 = checkRevenue_currency_(param_1,(SEL)"checkRevenue:currency:",IVar4,IVar2);
  if (bVar1 != 0) {
    _objc_storeStrong(param_1 + (long)_revenue,uVar3);
    _objc_storeStrong(param_1 + (long)_currency,param_4);
  }
  _objc_release(IVar4);
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJEvent::setTransactionId_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_transactionId,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::callbackParameters(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = callbackMutableParameters(param_1,(SEL)"callbackMutableParameters");
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::partnerParameters(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = partnerMutableParameters(param_1,(SEL)"partnerMutableParameters");
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

bool ADJEvent::checkEventToken_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  bool bVar6;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar2);
  if (iVar1 == 0) {
    lVar4 = _objc_msgSend(uVar2,"length");
    if (lVar4 == 6) {
      bVar6 = 1;
      goto LAB_101125b60;
    }
    logger(param_1,(SEL)"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_MalformedEventToken____;
  }
  else {
    logger(param_1,(SEL)"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    pcVar5 = &cf_MissingEventToken;
  }
  _objc_msgSend(uVar3,"error:",pcVar5);
  _objc_release(uVar3);
  bVar6 = 0;
LAB_101125b60:
  _objc_release(uVar2);
  return bVar6;
}




/* Function Stack Size: 0x20 bytes */

bool ADJEvent::checkRevenue_currency_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  bool bVar7;
  double dVar8;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  uVar4 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar2);
  if ((uVar4 & 1) == 0) {
    dVar8 = (double)_objc_msgSend(uVar2,"doubleValue");
    if (0.0 <= dVar8) {
      iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar3);
      if (iVar1 == 0) {
        iVar1 = _objc_msgSend(uVar3,"isEqualToString:",&cf___);
        if (iVar1 == 0) goto LAB_101125d14;
        logger(param_1,(SEL)"logger");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        pcVar6 = &cf_Currencyisempty;
      }
      else {
        logger(param_1,(SEL)"logger");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        pcVar6 = &cf_Currencymustbesetwithrevenue;
      }
    }
    else {
      logger(param_1,(SEL)"logger");
      uVar5 = _objc_retainAutoreleasedReturnValue();
      pcVar6 = &cf_Invalidamount__5f;
    }
  }
  else {
    iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNotNull:",uVar3);
    if (iVar1 == 0) {
LAB_101125d14:
      bVar7 = 1;
      goto LAB_101125d18;
    }
    logger(param_1,(SEL)"logger");
    uVar5 = _objc_retainAutoreleasedReturnValue();
    pcVar6 = &cf_Revenuemustbesetwithcurrency;
  }
  _objc_msgSend(uVar5,"error:",pcVar6);
  _objc_release(uVar5);
  bVar7 = 0;
LAB_101125d18:
  _objc_release(uVar3);
  _objc_release(uVar2);
  return bVar7;
}




/* Function Stack Size: 0x10 bytes */

bool ADJEvent::isValid(ID param_1,SEL param_2)

{
  long lVar1;
  
  eventToken(param_1,(SEL)"eventToken");
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return (bool)(lVar1 != 0);
}




/* Function Stack Size: 0x20 bytes */

void ADJEvent::setReceipt_transactionId_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  long lVar5;
  
  IVar2 = _objc_retain(param_3);
  IVar3 = _objc_retain(param_4);
  bVar1 = checkReceipt_transactionId_(param_1,(SEL)"checkReceipt:transactionId:",IVar2,IVar3);
  if (bVar1 != 0) {
    uVar4 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",IVar2);
    if (((uVar4 & 1) != 0) || (lVar5 = _objc_msgSend(IVar2,"length"), lVar5 == 0)) {
      *(undefined1 *)(param_1 + (long)_emptyReceipt) = 1;
    }
    _objc_storeStrong(param_1 + (long)_receipt,param_3);
    _objc_storeStrong(param_1 + (long)_transactionId,param_4);
  }
  _objc_release(IVar3);
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x20 bytes */

bool ADJEvent::checkReceipt_transactionId_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNotNull:",param_3);
  _objc_release(uVar2);
  if ((iVar1 == 0) || (iVar1 = _objc_msgSend(&objc::class_t::ADJUtil,"isNull:",uVar3), iVar1 == 0))
  {
    bVar4 = 1;
  }
  else {
    logger(param_1,(SEL)"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"error:",&cf_MissingtransactionId);
    _objc_release(uVar2);
    bVar4 = 0;
  }
  _objc_release(uVar3);
  return bVar4;
}




/* Function Stack Size: 0x18 bytes */

ID ADJEvent::copyWithZone_(ID param_1,SEL param_2,_NSZone *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  
  uVar2 = _objc_msgSend(param_1,"class");
  uVar2 = _objc_msgSend(uVar2,"allocWithZone:",param_3);
  IVar3 = _objc_msgSend(uVar2,"init");
  if (IVar3 != 0) {
    eventToken(param_1,(SEL)"eventToken");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    uVar6 = *(undefined8 *)(IVar3 + (long)_eventToken);
    *(undefined8 *)(IVar3 + (long)_eventToken) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    revenue(param_1,(SEL)"revenue");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    uVar6 = *(undefined8 *)(IVar3 + (long)_revenue);
    *(undefined8 *)(IVar3 + (long)_revenue) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    currency(param_1,(SEL)"currency");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    uVar6 = *(undefined8 *)(IVar3 + (long)_currency);
    *(undefined8 *)(IVar3 + (long)_currency) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    callbackMutableParameters(param_1,(SEL)"callbackMutableParameters");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    IVar5 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    setCallbackMutableParameters_(IVar3,(SEL)"setCallbackMutableParameters:",IVar5);
    _objc_release(IVar5);
    _objc_release(uVar2);
    partnerMutableParameters(param_1,(SEL)"partnerMutableParameters");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    IVar5 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    setPartnerMutableParameters_(IVar3,(SEL)"setPartnerMutableParameters:",IVar5);
    _objc_release(IVar5);
    _objc_release(uVar2);
    transactionId(param_1,(SEL)"transactionId");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    uVar6 = *(undefined8 *)(IVar3 + (long)_transactionId);
    *(undefined8 *)(IVar3 + (long)_transactionId) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    receipt(param_1,(SEL)"receipt");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend(uVar2,"copyWithZone:",param_3);
    uVar6 = *(undefined8 *)(IVar3 + (long)_receipt);
    *(undefined8 *)(IVar3 + (long)_receipt) = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    bVar1 = emptyReceipt(param_1,(SEL)"emptyReceipt");
    *(char *)(IVar3 + (long)_emptyReceipt) = (char)bVar1;
  }
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::revenue(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_revenue,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::eventToken(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_eventToken,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::transactionId(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_transactionId,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::currency(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_currency,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::receipt(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_receipt,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJEvent::emptyReceipt(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_emptyReceipt);
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::logger(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + (long)_logger);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void ADJEvent::setLogger_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + (long)_logger,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::callbackMutableParameters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_callbackMutableParameters);
}




/* Function Stack Size: 0x18 bytes */

void ADJEvent::setCallbackMutableParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_callbackMutableParameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJEvent::partnerMutableParameters(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_partnerMutableParameters);
}




/* Function Stack Size: 0x18 bytes */

void ADJEvent::setPartnerMutableParameters_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_partnerMutableParameters,param_3);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJEvent::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_partnerMutableParameters,0);
  _objc_storeStrong(param_1 + (long)_callbackMutableParameters,0);
  _objc_destroyWeak(param_1 + (long)_logger);
  _objc_storeStrong(param_1 + (long)_receipt,0);
  _objc_storeStrong(param_1 + (long)_currency,0);
  _objc_storeStrong(param_1 + (long)_transactionId,0);
  _objc_storeStrong(param_1 + (long)_eventToken,0);
  _objc_storeStrong(param_1 + (long)_revenue,0);
  return;
}

