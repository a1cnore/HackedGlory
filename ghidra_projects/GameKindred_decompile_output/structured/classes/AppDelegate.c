// classes/AppDelegate — 10 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

void AppDelegate::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *pcStack_28;
  
  _objc_release(*(undefined8 *)(param_1 + 0x10));
  _objc_release(*(undefined8 *)(param_1 + 8));
  pcStack_28 = &objc::class_t::AppDelegate;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x18 bytes */

void AppDelegate::createApplication_(ID param_1,SEL param_2,const_char__ param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  void *pvVar3;
  
  FUN_1004e14b0();
  uVar1 = _objc_alloc(&_OBJC_CLASS___UIWindow);
  uVar2 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
  _objc_msgSend(uVar2,"bounds");
  uVar1 = _objc_msgSend(uVar1,"initWithFrame:");
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = _objc_alloc(&objc::class_t::AppController);
  uVar1 = _objc_msgSend(uVar1,"init");
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined1 *)(param_1 + 0x18) = 0;
  _objc_msgSend(*(undefined8 *)(param_1 + 8),"setRootViewController:",uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"view");
  _objc_msgSend(uVar1,"addSubview:",uVar2);
  pvVar3 = operator_new(0x20);
  FUN_1004eab70(pvVar3,*(undefined8 *)(param_1 + 0x10));
  _objc_msgSend(*(undefined8 *)(param_1 + 0x10),"setApplicationPlatformImp:",pvVar3);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"setStatusBarHidden:",1);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"setApplicationIconBadgeNumber:",1);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"setApplicationIconBadgeNumber:",0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"cancelAllLocalNotifications");
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  _objc_msgSend(uVar1,"setBatteryMonitoringEnabled:",1);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",param_1,"batteryStatus",
                *(undefined8 *)PTR__UIDeviceBatteryLevelDidChangeNotification_101444108,0);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"addObserver:selector:name:object:",param_1,"batteryStatus",
                *(undefined8 *)PTR__UIDeviceBatteryStateDidChangeNotification_101444110,0);
  FUN_1004e9708(pvVar3,param_3);
  _objc_msgSend(*(undefined8 *)(param_1 + 8),"makeKeyAndVisible");
  return;
}




/* Function Stack Size: 0x18 bytes */

void AppDelegate::applicationWillTerminate_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    auVar1 = FUN_1004e9744();
  }
  thunk_FUN_1004e14b8(auVar1._0_8_,auVar1._8_8_);
  return;
}




/* Function Stack Size: 0x18 bytes */

void AppDelegate::applicationWillResignActive_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"ignoreSnapshotOnNextApplicationLaunch");
  return;
}




/* Function Stack Size: 0x18 bytes */

void AppDelegate::applicationDidBecomeActive_(ID param_1,SEL param_2,ID param_3)

{
  return;
}




/* Function Stack Size: 0x18 bytes */

void AppDelegate::applicationDidEnterBackground_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  if (*(char *)(param_1 + 0x18) == '\0') {
    *(undefined1 *)(param_1 + 0x18) = 1;
    auVar2 = FUN_1004e97a4();
  }
  FUN_1004e14b8(auVar2._0_8_,auVar2._8_8_);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
  _objc_msgSend(uVar1,"ignoreSnapshotOnNextApplicationLaunch");
  return;
}




/* Function Stack Size: 0x18 bytes */

void AppDelegate::applicationWillEnterForeground_(ID param_1,SEL param_2,ID param_3)

{
  FUN_1004e14b8();
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined1 *)(param_1 + 0x18) = 0;
    FUN_1004e97b8();
    return;
  }
  return;
}




/* Function Stack Size: 0x10 bytes */

void AppDelegate::batteryStatus(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  uVar1 = _objc_msgSend(uVar1,"batteryState");
  switch(uVar1) {
  case 0:
    local_28 = 0;
    break;
  case 1:
    local_28 = 1;
    break;
  case 2:
    local_28 = 2;
    break;
  case 3:
    local_28 = 3;
  }
  uVar1 = _objc_msgSend(&_OBJC_CLASS___UIDevice,"currentDevice");
  local_24 = _objc_msgSend(uVar1,"batteryLevel");
  FUN_1004e97cc(0,&local_28);
  return;
}




/* Function Stack Size: 0x10 bytes */

void AppDelegate::_keepAtLinkTime(ID param_1,SEL param_2)

{
  return;
}




/* Function Stack Size: 0x10 bytes */

ID AppDelegate::window(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}

