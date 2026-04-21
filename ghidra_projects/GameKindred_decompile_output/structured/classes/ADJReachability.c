// classes/ADJReachability — 10 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID ADJReachability::reachabilityWithHostName_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retainAutorelease(param_3);
  uVar2 = _objc_msgSend(uVar2,"UTF8String");
  _objc_release(uVar1);
  lVar3 = _SCNetworkReachabilityCreateWithName(0,uVar2);
  lVar5 = 0;
  if (lVar3 != 0) {
    uVar1 = _objc_msgSend(param_1,"alloc");
    lVar5 = _objc_msgSend(uVar1,"init");
    if (lVar5 == 0) {
      _CFRelease(lVar3);
    }
    else {
      *(long *)(lVar5 + _reachabilityRef) = lVar3;
    }
  }
  IVar4 = _objc_autoreleaseReturnValue(lVar5);
  return IVar4;
}




/* Function Stack Size: 0x18 bytes */

ID ADJReachability::reachabilityWithAddress_(ID param_1,SEL param_2,const_sockaddr__ param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  
  lVar1 = _SCNetworkReachabilityCreateWithAddress
                    (*(undefined8 *)PTR__kCFAllocatorDefault_101444278,param_3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = _objc_msgSend(param_1,"alloc");
    lVar3 = _objc_msgSend(uVar2,"init");
    if (lVar3 == 0) {
      _CFRelease(lVar1);
    }
    else {
      *(long *)(lVar3 + _reachabilityRef) = lVar1;
    }
  }
  IVar4 = _objc_autoreleaseReturnValue(lVar3);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID ADJReachability::reachabilityForInternetConnection(ID param_1,SEL param_2)

{
  ID IVar1;
  sockaddr local_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_101444218;
  local_28.field2_0x2[6] = '\0';
  local_28.field2_0x2[7] = '\0';
  local_28.field2_0x2[8] = '\0';
  local_28.field2_0x2[9] = '\0';
  local_28.field2_0x2[10] = '\0';
  local_28.field2_0x2[0xb] = '\0';
  local_28.field2_0x2[0xc] = '\0';
  local_28.field2_0x2[0xd] = '\0';
  local_28.field0_0x0 = '\x10';
  local_28.field1_0x1 = '\x02';
  local_28.field2_0x2[0] = '\0';
  local_28.field2_0x2[1] = '\0';
  local_28.field2_0x2[2] = '\0';
  local_28.field2_0x2[3] = '\0';
  local_28.field2_0x2[4] = '\0';
  local_28.field2_0x2[5] = '\0';
  IVar1 = reachabilityWithAddress_(param_1,(SEL)"reachabilityWithAddress:",&local_28);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_18) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* Function Stack Size: 0x10 bytes */

bool ADJReachability::startNotifier(ID param_1,SEL param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_48;
  ID IStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_48 = 0;
  local_30 = 0;
  uStack_28 = 0;
  local_38 = 0;
  lVar5 = (long)_reachabilityRef;
  IStack_40 = param_1;
  iVar1 = _SCNetworkReachabilitySetCallback
                    (*(undefined8 *)(param_1 + lVar5),FUN_10111e9fc,&local_48);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    uVar3 = _CFRunLoopGetCurrent();
    iVar1 = _SCNetworkReachabilityScheduleWithRunLoop
                      (uVar4,uVar3,*(undefined8 *)PTR__kCFRunLoopDefaultMode_1014442a8);
    uVar2 = (uint)(iVar1 != 0);
  }
  return uVar2;
}




/* Function Stack Size: 0x10 bytes */

void ADJReachability::stopNotifier(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + (long)_reachabilityRef);
  if (lVar2 != 0) {
    uVar1 = _CFRunLoopGetCurrent();
    _SCNetworkReachabilityUnscheduleFromRunLoop
              (lVar2,uVar1,*(undefined8 *)PTR__kCFRunLoopDefaultMode_1014442a8);
    return;
  }
  return;
}




/* Function Stack Size: 0x10 bytes */

void ADJReachability::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  stopNotifier(param_1,(SEL)"stopNotifier");
  if (*(long *)(param_1 + (long)_reachabilityRef) != 0) {
    _CFRelease();
  }
  local_28 = &objc::class_t::ADJReachability;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x14 bytes */

long_long ADJReachability::networkStatusForFlags_(ID param_1,SEL param_2,unsigned_int param_3)

{
  long_long lVar1;
  
  _NSLog(&cf_ReachabilityFlagStatus__c_c_c_c_c_c_c_c_c_s);
  if ((param_3 >> 1 & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = 1;
    if ((param_3 & 0x10) != 0 || (param_3 & 0x28) == 0) {
      lVar1 = (ulong)((param_3 >> 2 ^ 0xffffffff) & 1);
    }
    if ((param_3 & 0x40000) != 0) {
      lVar1 = 2;
    }
  }
  return lVar1;
}




/* Function Stack Size: 0x10 bytes */

bool ADJReachability::connectionRequired(ID param_1,SEL param_2)

{
  int iVar1;
  uint uVar2;
  byte local_14 [4];
  
  iVar1 = _SCNetworkReachabilityGetFlags(*(undefined8 *)(param_1 + (long)_reachabilityRef),local_14)
  ;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_14[0] >> 2 & 1;
  }
  return uVar2;
}




/* Function Stack Size: 0x10 bytes */

long_long ADJReachability::currentReachabilityStatus(ID param_1,SEL param_2)

{
  int iVar1;
  long_long lVar2;
  unsigned_int local_24;
  
  iVar1 = _SCNetworkReachabilityGetFlags
                    (*(undefined8 *)(param_1 + (long)_reachabilityRef),&local_24);
  if (iVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = networkStatusForFlags_(param_1,(SEL)"networkStatusForFlags:",local_24);
  }
  return lVar2;
}




/* Function Stack Size: 0x10 bytes */

ID ADJReachability::currentReachabilityFlags(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined1 auVar4 [16];
  undefined4 local_24;
  
  uVar2 = 0;
  if (*(long *)(param_1 + (long)_reachabilityRef) != 0) {
    iVar1 = _SCNetworkReachabilityGetFlags(*(long *)(param_1 + (long)_reachabilityRef),&local_24);
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSNumber,"alloc");
    if (iVar1 == 0) {
      local_24 = 0;
    }
    auVar4 = _objc_msgSend(uVar2,"initWithUnsignedInt:",local_24);
    param_2 = auVar4._8_8_;
    uVar2 = auVar4._0_8_;
  }
  IVar3 = _objc_autoreleaseReturnValue(uVar2,param_2);
  return IVar3;
}

