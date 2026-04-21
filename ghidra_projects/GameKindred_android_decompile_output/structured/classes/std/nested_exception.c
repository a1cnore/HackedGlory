// classes/std/nested_exception — 3 functions
#include "libGameKindred.h"




/* std::nested_exception::nested_exception() */

void __thiscall std::nested_exception::nested_exception(nested_exception *this)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__nested_exception_02bcc188;
  uVar1 = __cxa_current_primary_exception();
  *(undefined8 *)(this + 8) = uVar1;
  return;
}




/* std::nested_exception::~nested_exception() */

void __thiscall std::nested_exception::~nested_exception(nested_exception *this)

{
  *(undefined ***)this = &PTR__nested_exception_02bcc188;
  __cxa_decrement_exception_refcount(*(undefined8 *)(this + 8));
  return;
}




/* std::nested_exception::~nested_exception() */

void __thiscall std::nested_exception::~nested_exception(nested_exception *this)

{
  *(undefined ***)this = &PTR__nested_exception_02bcc188;
  __cxa_decrement_exception_refcount(*(undefined8 *)(this + 8));
  operator_delete(this);
  return;
}

