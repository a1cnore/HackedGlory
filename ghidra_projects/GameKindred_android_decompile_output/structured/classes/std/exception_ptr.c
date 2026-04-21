// classes/std/exception_ptr — 5 functions
#include "libGameKindred.h"




void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
  ~exception_ptr(this);
  return;
}




void __thiscall std::exception_ptr::exception_ptr(exception_ptr *this,exception_ptr *param_1)

{
  exception_ptr(this,param_1);
  return;
}




/* std::exception_ptr::~exception_ptr() */

void __thiscall std::exception_ptr::~exception_ptr(exception_ptr *this)

{
  __cxa_decrement_exception_refcount(*(undefined8 *)this);
  return;
}




/* std::exception_ptr::exception_ptr(std::exception_ptr const&) */

void __thiscall std::exception_ptr::exception_ptr(exception_ptr *this,exception_ptr *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1;
  *(undefined8 *)this = uVar1;
  __cxa_increment_exception_refcount(uVar1);
  return;
}




/* std::exception_ptr::TEMPNAMEPLACEHOLDERVALUE(std::exception_ptr const&) */

exception_ptr * __thiscall std::exception_ptr::operator=(exception_ptr *this,exception_ptr *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    __cxa_increment_exception_refcount();
    __cxa_decrement_exception_refcount(*(undefined8 *)this);
    *(undefined8 *)this = *(undefined8 *)param_1;
  }
  return this;
}

