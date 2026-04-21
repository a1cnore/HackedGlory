// classes/MovieViewController — 12 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID MovieViewController::init(ID param_1,SEL param_2)

{
  ID IVar1;
  ID local_20;
  class_t *pcStack_18;
  
  pcStack_18 = &objc::class_t::MovieViewController;
  local_20 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_20,"init");
  if (IVar1 != 0) {
    *(undefined8 *)(IVar1 + (long)mpPlayerController) = 0;
    *(undefined8 *)(IVar1 + (long)mpDelegate) = 0;
    *(undefined1 *)(IVar1 + (long)mbPlaying) = 0;
  }
  return IVar1;
}




/* Function Stack Size: 0x1c bytes */

void MovieViewController::prepareMovie_streaming_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (long)mpPlayerController;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    uVar2 = _objc_msgSend(&_OBJC_CLASS___AVPlayer,"playerWithURL:",param_3,param_4);
    uVar3 = _objc_alloc(&_OBJC_CLASS___AVPlayerViewController);
    uVar3 = _objc_msgSend(uVar3,"init");
    *(undefined8 *)(param_1 + lVar4) = uVar3;
    _objc_msgSend(uVar3,"setPlayer:",uVar2);
    lVar1 = *(long *)(param_1 + lVar4);
  }
  uVar2 = _objc_msgSend(lVar1,"player");
  _objc_msgSend(uVar2,"pause");
  return;
}




/* Function Stack Size: 0x10 bytes */

bool MovieViewController::isPlaying(ID param_1,SEL param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  float fVar5;
  
  if (*(char *)(param_1 + (long)mbPlaying) == '\0') {
    lVar4 = (long)mpPlayerController;
    lVar2 = *(long *)(param_1 + lVar4);
    if ((lVar2 != 0) && (lVar2 = _objc_msgSend(lVar2,"player"), lVar2 != 0)) {
      uVar3 = _objc_msgSend(*(undefined8 *)(param_1 + lVar4),"player");
      fVar5 = (float)_objc_msgSend(uVar3,"rate");
      if (fVar5 != 0.0) goto LAB_10052a750;
    }
    bVar1 = 0;
  }
  else {
LAB_10052a750:
    bVar1 = 1;
  }
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

void MovieViewController::unprepareMovie(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)mpPlayerController;
  if (*(long *)(param_1 + lVar2) != 0) {
    _objc_msgSend(*(long *)(param_1 + lVar2),"setShowsPlaybackControls:",0);
    uVar1 = _objc_msgSend(*(undefined8 *)(param_1 + lVar2),"player");
    _objc_msgSend(uVar1,"pause");
    _objc_release(*(undefined8 *)(param_1 + lVar2));
    *(undefined8 *)(param_1 + lVar2) = 0;
    FUN_1010ce9bc();
  }
  *(undefined1 *)(param_1 + (long)mbPlaying) = 0;
  return;
}




/* Function Stack Size: 0x18 bytes */

void MovieViewController::unsetDelegate_(ID param_1,SEL param_2,void *param_3)

{
  if ((param_3 != (void *)0x0) && (*(void **)(param_1 + (long)mpDelegate) != param_3)) {
    return;
  }
  *(undefined8 *)(param_1 + (long)mpDelegate) = 0;
  return;
}




/* Function Stack Size: 0x18 bytes */

void MovieViewController::movieAppEnterBackground_(ID param_1,SEL param_2,ID param_3)

{
  unprepareMovie(param_1,(SEL)"unprepareMovie");
  return;
}




/* Function Stack Size: 0x18 bytes */

void MovieViewController::movieAppTerminate_(ID param_1,SEL param_2,ID param_3)

{
  unprepareMovie(param_1,(SEL)"unprepareMovie");
  return;
}




/* Function Stack Size: 0x18 bytes */

void MovieViewController::movieFinishes_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = _objc_msgSend(DAT_101d91768,"presentedViewController");
  _objc_msgSend(uVar1,"dismissViewControllerAnimated:completion:",1,0);
  lVar2 = *(long *)(param_1 + (long)mpDelegate);
  if (lVar2 != 0) {
    uVar1 = FUN_1004e6820();
    FUN_1004e57e0(uVar1,FUN_10052a8d8,lVar2);
    return;
  }
  return;
}




/* Function Stack Size: 0x18 bytes */

void MovieViewController::movieError_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = _objc_msgSend(DAT_101d91768,"presentedViewController");
  _objc_msgSend(uVar1,"dismissViewControllerAnimated:completion:",1,0);
  lVar2 = *(long *)(param_1 + (long)mpDelegate);
  if (lVar2 != 0) {
    uVar1 = FUN_1004e6820();
    FUN_1004e57e0(uVar1,FUN_10052a958,lVar2);
    return;
  }
  return;
}




/* Function Stack Size: 0x10 bytes */

bool MovieViewController::mbPlaying(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)mbPlaying);
}




/* Function Stack Size: 0x10 bytes */

ID MovieViewController::mpPlayerController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_mpPlayerController);
}




/* Function Stack Size: 0x18 bytes */

void MovieViewController::setMpPlayerController_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic();
  return;
}

