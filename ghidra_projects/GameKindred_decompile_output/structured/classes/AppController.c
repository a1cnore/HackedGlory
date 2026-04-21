// classes/AppController — 21 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID AppController::init(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  long lVar3;
  ID local_20;
  class_t *pcStack_18;
  
  pcStack_18 = &objc::class_t::AppController;
  DAT_101d91768 = param_1;
  local_20 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  if (IVar1 == 0) {
    lVar3 = (long)mbIsAnimating;
    lVar2 = (long)mpDisplayLink;
  }
  else {
    *(undefined8 *)(IVar1 + (long)mpView) = 0;
    lVar2 = (long)mpDisplayLink;
    *(undefined8 *)(IVar1 + lVar2) = 0;
    lVar3 = (long)mbIsAnimating;
    *(undefined1 *)(IVar1 + lVar3) = 0;
    *(undefined8 *)(IVar1 + (long)mpAppImp) = 0;
    *(undefined4 *)(IVar1 + (long)mAppOrient) = 0xc;
  }
  *(undefined1 *)(IVar1 + lVar3) = 0;
  *(undefined8 *)(IVar1 + lVar2) = 0;
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void AppController::dealloc(ID param_1,SEL param_2)

{
  ID local_20;
  class_t *pcStack_18;
  
  DAT_101d91768 = 0;
  pcStack_18 = &objc::class_t::AppController;
  local_20 = param_1;
  _objc_msgSendSuper2(&local_20,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

void AppController::loadView(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar7;
  
  uVar2 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
  uVar6 = _objc_msgSend(uVar2,"bounds");
  uVar3 = FUN_1004e2fac(&DAT_101d911b0,8,0,0);
  uVar2 = in_d3;
  uVar7 = in_d2;
  if ((uVar3 & 1) == 0) {
    uVar2 = _objc_msgSend(&_OBJC_CLASS___UIApplication,"sharedApplication");
    lVar4 = _objc_msgSend(uVar2,"statusBarOrientation");
    uVar2 = in_d2;
    uVar7 = in_d3;
    if (1 < lVar4 - 3U) {
      uVar2 = in_d3;
      uVar7 = in_d2;
    }
  }
  uVar3 = FUN_1010ce9bc();
  if ((uVar3 & 1) == 0) {
    lVar4 = (long)mpView;
  }
  else {
    uVar5 = _objc_alloc(&objc::class_t::MetalView);
    uVar2 = _objc_msgSend(uVar6,in_d1,uVar7,uVar2,uVar5,"initWithFrame:");
    lVar4 = (long)mpView;
    *(undefined8 *)(param_1 + lVar4) = uVar2;
  }
  _objc_msgSend(param_1,"setView:",*(undefined8 *)(param_1 + lVar4));
  uVar2 = _objc_msgSend(param_1,"view");
  _objc_msgSend(uVar2,"setAutoresizesSubviews:",0);
  iVar1 = _objc_msgSend(param_1,"respondsToSelector:",
                        "setNeedsUpdateOfScreenEdgesDeferringSystemGestures");
  if (iVar1 != 0) {
    _objc_msgSend(param_1,"setNeedsUpdateOfScreenEdgesDeferringSystemGestures");
    return;
  }
  return;
}




/* Function Stack Size: 0x18 bytes */

void AppController::setApplicationPlatformImp_(ID param_1,SEL param_2,ApplicationImp *param_3)

{
  *(ApplicationImp **)(param_1 + (long)mpAppImp) = param_3;
  return;
}




/* Function Stack Size: 0x14 bytes */

void AppController::startTick_(ID param_1,SEL param_2,unsigned_int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = (long)mbIsAnimating;
  if (*(char *)(param_1 + lVar7) == '\0') {
    uVar4 = _objc_msgSend(&_OBJC_CLASS___CADisplayLink,"displayLinkWithTarget:selector:",param_1,
                          "onTick");
    uVar3 = _objc_msgSend(&_OBJC_CLASS___NSRunLoop,"currentRunLoop");
    _objc_msgSend(uVar4,"addToRunLoop:forMode:",uVar3,
                  *(undefined8 *)PTR__NSDefaultRunLoopMode_101444080);
    lVar8 = (long)mpDisplayLink;
    *(undefined8 *)(param_1 + lVar8) = uVar4;
    *(undefined1 *)(param_1 + lVar7) = 1;
  }
  else {
    lVar8 = (long)mpDisplayLink;
  }
  iVar2 = _objc_msgSend(*(undefined8 *)(param_1 + lVar8),"respondsToSelector:",
                        "preferredFramesPerSecond");
  if (iVar2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    if (param_3 == 0) {
      param_3 = 1;
    }
    uVar6 = (ulong)(int)param_3;
    pcVar5 = "setFrameInterval:";
  }
  else {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = 0x3c / param_3;
    }
    uVar4 = *(undefined8 *)(param_1 + lVar8);
    uVar6 = 0;
    if (param_3 != 0) {
      uVar6 = (ulong)uVar1;
    }
    pcVar5 = "setPreferredFramesPerSecond:";
  }
  _objc_msgSend(uVar4,pcVar5,uVar6);
  return;
}




/* Function Stack Size: 0x10 bytes */

void AppController::stopTick(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)mbIsAnimating;
  if (*(char *)(param_1 + lVar1) != '\0') {
    lVar2 = (long)mpDisplayLink;
    _objc_msgSend(*(undefined8 *)(param_1 + lVar2),"invalidate");
    *(undefined8 *)(param_1 + lVar2) = 0;
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}




/* Function Stack Size: 0x14 bytes */

void AppController::setContentScale_(ID param_1,SEL param_2,float param_3)

{
  _objc_msgSend(*(undefined8 *)(param_1 + (long)mpView),"setContentScale:");
  return;
}




/* Function Stack Size: 0x10 bytes */

float AppController::getFullContentScale(ID param_1,SEL param_2)

{
  double dVar1;
  
  dVar1 = (double)_objc_msgSend(*(undefined8 *)(param_1 + (long)mpView),"contentScaleFactor");
  return (float)dVar1;
}




/* Function Stack Size: 0x14 bytes */

void AppController::setAllowedOrientations_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)mAppOrient) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

void AppController::onTick(ID param_1,SEL param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001004e9cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + (long)mpAppImp) + 0x28))();
  return;
}




/* Function Stack Size: 0x10 bytes */

CGRect AppController::getSize(ID param_1,SEL param_2)

{
  double in_d1;
  double in_d2;
  double in_d3;
  CGRect CVar1;
  
  CVar1.field0_0x0.field0_0x0 =
       (double)_objc_msgSend(*(undefined8 *)(param_1 + (long)mpView),"getSize");
  CVar1.field0_0x0.field1_0x8 = in_d1;
  CVar1.field1_0x10.field1_0x8 = in_d3;
  CVar1.field1_0x10.field0_0x0 = in_d2;
  return CVar1;
}




/* Function Stack Size: 0x10 bytes */

ID AppController::getGameView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)mpView);
}




/* Function Stack Size: 0x10 bytes */

void AppController::swapBuffers(ID param_1,SEL param_2)

{
  _objc_msgSend(*(undefined8 *)(param_1 + (long)mpView),"presentFramebuffer");
  return;
}




/* Function Stack Size: 0x10 bytes */

void AppController::exitMainLoop(ID param_1,SEL param_2)

{
  return;
}




/* Function Stack Size: 0x10 bytes */

void AppController::didReceiveMemoryWarning(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ID local_20;
  class_t *pcStack_18;
  
  pcStack_18 = &objc::class_t::AppController;
  local_20 = param_1;
  _objc_msgSendSuper2(&local_20,"didReceiveMemoryWarning");
  iVar1 = DAT_101e94718 + 1;
  iVar2 = DAT_101e94718 * -0x69d0369d;
  uVar3 = DAT_101e94718 * -0x40000000;
  DAT_101e94718 = iVar1;
  if ((iVar2 + 0x1b4e818U >> 2 | uVar3) < 0xda740d) {
    _NSLog(&cf_Recievedlowmemorywarning);
  }
  FUN_1004e157c(0,0);
  return;
}




/* Function Stack Size: 0x10 bytes */

void AppController::grabGraphicsContext(ID param_1,SEL param_2)

{
  return;
}




/* Function Stack Size: 0x10 bytes */

bool AppController::shouldAutorotate(ID param_1,SEL param_2)

{
  return 1;
}




/* Function Stack Size: 0x10 bytes */

bool AppController::prefersStatusBarHidden(ID param_1,SEL param_2)

{
  return 1;
}




/* Function Stack Size: 0x10 bytes */

unsigned_long_long AppController::supportedInterfaceOrientations(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + (long)mAppOrient);
  return (ulong)(uVar1 << 1) & 2 | (ulong)uVar1 & 8 | (ulong)(uVar1 << 1) & 4 |
         (ulong)(uVar1 << 2) & 0x10;
}




/* Function Stack Size: 0x10 bytes */

void AppController::_keepAtLinkTime(ID param_1,SEL param_2)

{
  return;
}




/* Function Stack Size: 0x10 bytes */

unsigned_long_long
AppController::preferredScreenEdgesDeferringSystemGestures(ID param_1,SEL param_2)

{
  return 0xf;
}

