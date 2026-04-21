// classes/VirtualKeyboardDelegateObjC — 6 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID VirtualKeyboardDelegateObjC::init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::VirtualKeyboardDelegateObjC;
  local_30 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,"init");
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar2,"addObserver:selector:name:object:",param_1,"keyboardWillShow:",
                *(undefined8 *)PTR__UIKeyboardWillShowNotification_101444120,0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void VirtualKeyboardDelegateObjC::dealloc(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID local_30;
  class_t *pcStack_28;
  
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _objc_msgSend(uVar1,"removeObserver:name:object:",param_1,
                *(undefined8 *)PTR__UIKeyboardWillShowNotification_101444120,0);
  pcStack_28 = &objc::class_t::VirtualKeyboardDelegateObjC;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x18 bytes */

void VirtualKeyboardDelegateObjC::textFieldDidBeginEditing_(ID param_1,SEL param_2,ID param_3)

{
  pthread_mutex_t *ppVar1;
  
  if (DAT_101ea59f0 != 0) {
    ppVar1 = (pthread_mutex_t *)(DAT_101dc0780 + 0x18);
    _pthread_mutex_lock(ppVar1);
    *(byte *)(DAT_101dc0780 + 0x14) = *(byte *)(DAT_101dc0780 + 0x14) | 1;
    _pthread_mutex_unlock(ppVar1);
    return;
  }
  return;
}




/* Function Stack Size: 0x18 bytes */

void VirtualKeyboardDelegateObjC::textFieldDidEndEditing_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = _objc_autoreleasePoolPush();
  if (DAT_101ea59f0 != 0) {
    FUN_1004e313c(auStack_30);
    uVar2 = _objc_msgSend(DAT_101dc0770,"text");
    lVar3 = _objc_msgSend(uVar2,"UTF8String");
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = FUN_1004e3148(auStack_30);
    }
    FUN_10109e8f4(uVar2,auStack_30);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  _objc_autoreleasePoolPop(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

bool VirtualKeyboardDelegateObjC::textFieldShouldReturn_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_30 [8];
  void *local_28;
  
  uVar1 = _objc_autoreleasePoolPush();
  if (DAT_101ea59f0 != 0) {
    FUN_1004e313c(auStack_30);
    uVar2 = _objc_msgSend(DAT_101dc0770,"text");
    lVar3 = _objc_msgSend(uVar2,"UTF8String");
    uVar2 = 0;
    if (lVar3 != 0) {
      uVar2 = FUN_1004e3148(auStack_30);
    }
    FUN_10109ea04(uVar2,auStack_30);
    if (local_28 != (void *)0x0) {
      operator_delete__(local_28);
    }
  }
  _objc_autoreleasePoolPop(uVar1);
  return 0;
}




/* Function Stack Size: 0x18 bytes */

void VirtualKeyboardDelegateObjC::keyboardWillShow_(ID param_1,SEL param_2,ID param_3)

{
  pthread_mutex_t *ppVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 in_d1;
  double in_d2;
  double in_d3;
  double dVar9;
  
  uVar4 = _objc_autoreleasePoolPush();
  uVar5 = _objc_msgSend(param_3,"userInfo");
  uVar5 = _objc_msgSend(uVar5,"valueForKey:",
                        *(undefined8 *)PTR__UIKeyboardFrameEndUserInfoKey_101444118);
  uVar7 = _objc_msgSend(uVar5,"CGRectValue");
  dVar8 = in_d2;
  dVar9 = in_d3;
  uVar5 = _objc_msgSend(param_1,"view");
  iVar3 = _objc_msgSend(uVar5,"respondsToSelector:","convertRect:toCoordinateSpace:");
  if (iVar3 != 0) {
    uVar5 = _objc_msgSend(param_1,"view");
    uVar6 = _objc_msgSend(param_1,"view");
    uVar6 = _objc_msgSend(uVar6,"window");
    uVar6 = _objc_msgSend(uVar6,"screen");
    uVar6 = _objc_msgSend(uVar6,"fixedCoordinateSpace");
    _objc_msgSend(uVar7,in_d1,uVar5,"convertRect:toCoordinateSpace:",uVar6);
    dVar8 = in_d2;
    dVar9 = in_d3;
  }
  uVar5 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
  _objc_msgSend(uVar5,"bounds");
  uVar5 = _objc_msgSend(param_1,"view");
  iVar3 = _objc_msgSend(uVar5,"respondsToSelector:","convertRect:toCoordinateSpace:");
  dVar8 = in_d2 / dVar8;
  if (iVar3 != 0) {
    dVar8 = in_d3 / dVar9;
  }
  ppVar1 = (pthread_mutex_t *)(DAT_101dc0780 + 0x18);
  _pthread_mutex_lock(ppVar1);
  lVar2 = DAT_101dc0780;
  *(byte *)(DAT_101dc0780 + 0x14) = *(byte *)(DAT_101dc0780 + 0x14) | 8;
  *(float *)(lVar2 + 0x10) = (float)dVar8;
  _pthread_mutex_unlock(ppVar1);
  _objc_autoreleasePoolPop(uVar4);
  return;
}

