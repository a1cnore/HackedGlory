// classes/AMPUtils — 2 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID AMPUtils::alloc(ID param_1,SEL param_2)

{
  return 0;
}




/* Function Stack Size: 0x10 bytes */

ID AMPUtils::generateUUID(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_101444278;
  uVar1 = _CFUUIDCreate(uVar3);
  uVar3 = _CFUUIDCreateString(uVar3,uVar1);
  _CFRelease(uVar1);
  IVar2 = _objc_autoreleaseReturnValue(uVar3);
  return IVar2;
}

