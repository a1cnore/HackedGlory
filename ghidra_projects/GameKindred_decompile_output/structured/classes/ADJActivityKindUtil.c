// classes/ADJActivityKindUtil — 2 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

int ADJActivityKindUtil::activityKindFromString_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(&cf_session,"isEqualToString:",uVar2);
  if ((uVar3 & 1) == 0) {
    uVar3 = _objc_msgSend(&cf_event,"isEqualToString:",uVar2);
    if ((uVar3 & 1) == 0) {
      uVar3 = _objc_msgSend(&cf_click,"isEqualToString:",uVar2);
      if ((uVar3 & 1) == 0) {
        uVar3 = _objc_msgSend(&cf_attribution,"isEqualToString:",uVar2);
        if ((uVar3 & 1) == 0) {
          iVar1 = _objc_msgSend(&cf_info,"isEqualToString:",uVar2);
          iVar4 = 6;
          if (iVar1 == 0) {
            iVar4 = 0;
          }
        }
        else {
          iVar4 = 5;
        }
      }
      else {
        iVar4 = 4;
      }
    }
    else {
      iVar4 = 2;
    }
  }
  else {
    iVar4 = 1;
  }
  _objc_release(uVar2);
  return iVar4;
}




/* Function Stack Size: 0x14 bytes */

ID ADJActivityKindUtil::activityKindToString_(ID param_1,SEL param_2,int param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  
  switch(param_3) {
  case 1:
    pcVar2 = &cf_session;
    break;
  case 2:
    pcVar2 = &cf_event;
    break;
  default:
    pcVar2 = &cf_unknown;
    break;
  case 4:
    pcVar2 = &cf_click;
    break;
  case 5:
    pcVar2 = &cf_attribution;
    break;
  case 6:
    pcVar2 = &cf_info;
  }
  _objc_retain(pcVar2);
  IVar1 = _objc_autoreleaseReturnValue(pcVar2);
  return IVar1;
}

