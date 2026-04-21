// classes/SSKeychain — 6 functions
#include "GameKindred.h"




/* Function Stack Size: 0x20 bytes */

ID SSKeychain::passwordForService_account_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = passwordForService_account_error_
                    (param_1,(SEL)"passwordForService:account:error:",param_3,param_4,(ID *)0x0);
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

bool SSKeychain::deletePasswordForService_account_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"deletePasswordForService:account:error:",param_3,param_4,0);
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

ID SSKeychain::allAccounts(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = accountsForService_(param_1,(SEL)"accountsForService:",0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

ID SSKeychain::accountsForService_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_alloc(&objc::class_t::SSKeychainQuery);
  uVar1 = _objc_msgSend(uVar1,"init");
  _objc_msgSend(uVar1,"setService:",param_3);
  IVar2 = _objc_msgSend(uVar1,"fetchAll:",0);
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

void * SSKeychain::accessibilityType(ID param_1,SEL param_2)

{
  return DAT_101ea60e8;
}




/* Function Stack Size: 0x18 bytes */

void SSKeychain::setAccessibilityType_(ID param_1,SEL param_2,void *param_3)

{
  _CFRetain(param_3);
  if (DAT_101ea60e8 != (void *)0x0) {
    _CFRelease();
  }
  DAT_101ea60e8 = param_3;
  return;
}

