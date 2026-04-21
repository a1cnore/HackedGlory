// classes/MetalView — 7 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID MetalView::metalLayer(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_1,"layer");
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

CLASS MetalView::layerClass(ID param_1,SEL param_2)

{
  CLASS CVar1;
  
  CVar1 = _objc_msgSend(&_OBJC_CLASS___CAMetalLayer,"class");
  return CVar1;
}




/* Function Stack Size: 0x30 bytes */

ID MetalView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::MetalView;
  local_30 = param_1;
  IVar1 = _objc_msgSendSuper2(param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
                              param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8,
                              &local_30,"initWithFrame:");
  if (IVar1 != 0) {
    _objc_msgSend(0x3f800000,IVar1,"setContentScale:");
    _objc_msgSend(IVar1,"setMultipleTouchEnabled:",1);
    uVar2 = _objc_msgSend(IVar1,"metalLayer");
    _objc_msgSend((double)DAT_101867558,IVar1,"setContentScaleFactor:");
    _objc_msgSend(IVar1,"setOpaque:",1);
    _objc_msgSend(IVar1,"setBackgroundColor:",0);
    _objc_msgSend(uVar2,"setPresentsWithTransaction:",0);
    _objc_msgSend(uVar2,"setDrawsAsynchronously:",1);
    _objc_msgSend(uVar2,"setPixelFormat:",0x50);
    _objc_msgSend(uVar2,"setFramebufferOnly:",1);
    FUN_1010ceb10(uVar2);
  }
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

bool MetalView::presentFramebuffer(ID param_1,SEL param_2)

{
  SEL in_x2;
  long lVar1;
  CGRect CVar2;
  
  FUN_1010cebdc();
  lVar1 = (long)GameView::mbInitialized;
  if (*(char *)(param_1 + lVar1) == '\0') {
    DAT_101dc1c70 = 1;
    CVar2 = getSize((MetalView *)param_1,(ID)"getSize",in_x2);
    (**(code **)(*DAT_101d91760 + 0x38))
              ((float)CVar2.field1_0x10.field0_0x0,(float)CVar2.field1_0x10.field1_0x8);
    *(undefined1 *)(param_1 + lVar1) = 1;
  }
  return 1;
}




/* Function Stack Size: 0x10 bytes */

CGRect __thiscall MetalView::getSize(MetalView *this,ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double in_d1;
  double dVar5;
  double in_d3;
  CGRect CVar6;
  
  uVar2 = _objc_msgSend(this,"metalLayer");
  dVar3 = (double)_objc_msgSend(uVar2,"drawableSize");
  dVar4 = 0.0;
  bVar1 = false;
  if ((in_d1 == 0.0) && (bVar1 = false, !NAN(dVar3))) {
    bVar1 = dVar3 == 0.0;
  }
  if (bVar1) {
    uVar2 = _objc_msgSend(this,"metalLayer");
    dVar4 = (double)_objc_msgSend(uVar2,"bounds");
    dVar5 = in_d1;
    in_d1 = in_d3;
  }
  else {
    dVar5 = 0.0;
  }
  CVar6.field0_0x0.field1_0x8 = dVar5;
  CVar6.field0_0x0.field0_0x0 = dVar4;
  CVar6.field1_0x10.field1_0x8 = in_d1;
  CVar6.field1_0x10.field0_0x0 = dVar3;
  return CVar6;
}




/* Function Stack Size: 0x10 bytes */

bool MetalView::isFlipped(ID param_1,SEL param_2)

{
  return 0;
}




/* Function Stack Size: 0x10 bytes */

void MetalView::_keepAtLinkTime(ID param_1,SEL param_2)

{
  return;
}

