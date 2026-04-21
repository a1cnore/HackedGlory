// classes/GameView — 9 functions
#include "GameKindred.h"




/* Function Stack Size: 0x14 bytes */

void GameView::setContentScale_(ID param_1,SEL param_2,float param_3)

{
  DAT_101867558 = param_3;
  *(float *)(param_1 + (long)mScale) = param_3;
  layoutSubviews(param_1,(SEL)"layoutSubviews");
  return;
}




/* Function Stack Size: 0x10 bytes */

float GameView::contentScale(ID param_1,SEL param_2)

{
  return *(float *)(param_1 + (long)mScale);
}




/* Function Stack Size: 0x10 bytes */

float GameView::getFullContentScale(ID param_1,SEL param_2)

{
  double dVar1;
  
  dVar1 = (double)_objc_msgSend(param_1,"contentScaleFactor");
  return (float)dVar1;
}




/* Function Stack Size: 0x10 bytes */

void GameView::layoutSubviews(ID param_1,SEL param_2)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + (long)mScale);
  uVar3 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
  iVar2 = _objc_msgSend(uVar3,"respondsToSelector:","nativeScale");
  uVar3 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
  pcVar1 = "nativeScale";
  if (iVar2 == 0) {
    pcVar1 = "scale";
  }
  dVar4 = (double)_objc_msgSend(uVar3,pcVar1);
  _objc_msgSend((double)(float)(dVar4 * (double)fVar5),param_1,"setContentScaleFactor:");
  *(undefined1 *)(param_1 + (long)mbInitialized) = 0;
  return;
}




/* Function Stack Size: 0x18 bytes */

void GameView::handleTouches_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  double dVar4;
  float fVar5;
  
  fVar5 = *(float *)(param_1 + (long)mScale);
  uVar3 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
  iVar2 = _objc_msgSend(uVar3,"respondsToSelector:","nativeScale");
  uVar3 = _objc_msgSend(&_OBJC_CLASS___UIScreen,"mainScreen");
  pcVar1 = "nativeScale";
  if (iVar2 == 0) {
    pcVar1 = "scale";
  }
  dVar4 = (double)_objc_msgSend(uVar3,pcVar1);
  if (DAT_101d91780 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001004eb0e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_101d91780)((float)(dVar4 * (double)fVar5),param_3);
    return;
  }
  return;
}




/* Function Stack Size: 0x20 bytes */

void GameView::touchesBegan_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  handleTouches_(param_1,(SEL)"handleTouches:",param_3);
  return;
}




/* Function Stack Size: 0x20 bytes */

void GameView::touchesMoved_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  handleTouches_(param_1,(SEL)"handleTouches:",param_3);
  return;
}




/* Function Stack Size: 0x20 bytes */

void GameView::touchesEnded_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  handleTouches_(param_1,(SEL)"handleTouches:",param_3);
  return;
}




/* Function Stack Size: 0x20 bytes */

void GameView::touchesCancelled_withEvent_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  handleTouches_(param_1,(SEL)"handleTouches:",param_3);
  return;
}

