// functions/10111 — 37 functions
#include "GameKindred.h"




void FUN_101110f3c(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"foregroundTimerFired");
  return;
}




void FUN_101110f4c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101110f54(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101110f5c(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"backgroundTimerFired");
  return;
}




void FUN_101110f6c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101110f74(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101110f7c(long param_1)

{
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"sendFirstPackages");
  return;
}




void FUN_101110f8c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101110f94(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101110f9c(long param_1,undefined1 param_2)

{
  undefined8 uVar1;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  code *local_48;
  undefined *local_40;
  undefined1 local_38;
  
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"internalQueue");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_58 = PTR___NSConcreteStackBlock_101444138;
  local_50 = 0xc0000000;
  uStack_4c = 0;
  local_48 = FUN_101111044;
  local_40 = &DAT_101830790;
  local_38 = param_2;
  _objc_msgSend(&objc::class_t::ADJUtil,"launchInQueue:selfInject:block:",uVar1,
                *(undefined8 *)(param_1 + 0x20),&local_58);
  _objc_release(uVar1);
  return;
}




void FUN_101111044(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = _objc_retain(param_2);
  cVar1 = *(char *)(param_1 + 0x20);
  _objc_msgSend(uVar2,"logger");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  if (cVar1 == '\0') {
    _objc_msgSend(uVar3,"debug:",&cf_Startsdk_sincetheappisalreadyintheforeground);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"internalState");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"setBackground:",0);
    _objc_release(uVar3);
    _objc_msgSend(uVar2,"startI:",uVar2);
  }
  else {
    _objc_msgSend(uVar3,"debug:",&cf_Waitfortheapptogototheforegroundtostartthesdk);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}




void FUN_10111111c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_101111124(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_101112bd0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"adjustDelegate");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend(uVar2,"respondsToSelector:","adjustDeeplinkResponse:");
  _objc_release(uVar2);
  if ((uVar3 & 1) != 0) {
    _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"adjustDelegate");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(*(undefined8 *)(param_1 + 0x28),"deeplink");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar2,"adjustDeeplinkResponse:",uVar4);
    _objc_release(uVar4);
    _objc_release(uVar2);
    if (iVar1 == 0) {
      return;
    }
  }
  _objc_msgSend(*(undefined8 *)(param_1 + 0x28),"deeplink");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&objc::class_t::ADJUtil,"launchDeepLinkMain:",uVar2);
  _objc_release(uVar2);
  return;
}




void FUN_101112cfc(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_101112d24(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10111a6c8(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"initI:activityHandler:startsSending:",param_2,
                *(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}




void FUN_10111a6e8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10111a6f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10111a7cc(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"addI:package:",param_2,*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10111a7e8(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10111a7f0(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10111a860(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"sendFirstI:",param_2);
  return;
}




void FUN_10111a930(undefined8 param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"sendNextI:",param_2);
  return;
}




void FUN_10111ab80(long param_1)

{
  undefined8 uVar1;
  dispatch_semaphore_t dsema;
  
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"logger");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"verbose:",&cf_Packagehandlercansend);
  _objc_release(uVar1);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"sendingSemaphore");
  dsema = (dispatch_semaphore_t)_objc_retainAutoreleasedReturnValue();
  _dispatch_semaphore_signal(dsema);
  _objc_release(dsema);
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"sendFirstPackage");
  return;
}




void FUN_10111ac08(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10111ac10(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10111ad14(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"updatePackagesI:sessionParameters:",param_2,*(undefined8 *)(param_1 + 0x20)
               );
  return;
}




void FUN_10111ad30(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10111ad38(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10111e9fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"postNotificationName:object:",
                PTR_cf_kNetworkReachabilityChangedNotification_1018738c0,uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  return;
}




void FUN_10111efa0(long param_1,undefined8 param_2)

{
  _objc_msgSend(param_2,"sendI:activityPackage:queueSize:",param_2,*(undefined8 *)(param_1 + 0x20),
                *(undefined8 *)(param_1 + 0x28));
  return;
}




void FUN_10111efbc(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}




void FUN_10111efc4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}




void FUN_10111f274(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain(param_2);
  _objc_msgSend(param_2,"jsonResponse");
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_msgSend(*(undefined8 *)(param_1 + 0x20),"packageHandler");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_msgSend(uVar3,"closeFirstPackage:activityPackage:",uVar1,*(undefined8 *)(param_1 + 0x28));
  }
  else {
    _objc_msgSend(uVar3,"sendNextPackage:",uVar1);
  }
  _objc_release(uVar1);
  _objc_release(uVar3);
  return;
}




void FUN_10111f328(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}




void FUN_10111f350(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  return;
}

