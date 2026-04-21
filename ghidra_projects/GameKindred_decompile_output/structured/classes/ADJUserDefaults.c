// classes/ADJUserDefaults — 6 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

void ADJUserDefaults::savePushToken_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setObject:forKey:",param_3,&cf_adj_push_token);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"synchronize");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID ADJUserDefaults::getPushToken(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"objectForKey:",&cf_adj_push_token);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

void ADJUserDefaults::removePushToken(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"removeObjectForKey:",&cf_adj_push_token);
  _objc_release(uVar1);
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"synchronize");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJUserDefaults::setInstallTracked(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"setBool:forKey:",1,&cf_adj_install_tracked);
  _objc_release(uVar1);
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"synchronize");
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJUserDefaults::getInstallTracked(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  bVar1 = _objc_msgSend(uVar2,"boolForKey:",&cf_adj_install_tracked);
  _objc_release(uVar2);
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

void ADJUserDefaults::clearAdjustStuff(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"removeObjectForKey:",&cf_adj_push_token);
  _objc_release(uVar1);
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"removeObjectForKey:",&cf_adj_install_tracked);
  _objc_release(uVar1);
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"synchronize");
  _objc_release(uVar1);
  return;
}

