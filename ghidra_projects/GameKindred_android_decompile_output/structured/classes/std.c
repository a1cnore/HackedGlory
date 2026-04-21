// classes/std — 11 functions
#include "libGameKindred.h"




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::terminate(void)

{
                    /* WARNING: Subroutine does not return */
  terminate();
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_terminate(void)

{
  get_terminate();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_new_handler(void)

{
  get_new_handler();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::current_exception(void)

{
  current_exception();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::get_unexpected(void)

{
  get_unexpected();
  return;
}




void std::rethrow_exception(void)

{
  rethrow_exception();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::uncaught_exception(void)

{
  uncaught_exception();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void std::__throw_bad_alloc(void)

{
  __throw_bad_alloc();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exception() */

bool std::uncaught_exception(void)

{
  int iVar1;
  
  iVar1 = __cxa_uncaught_exceptions();
  return 0 < iVar1;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::uncaught_exceptions() */

void std::uncaught_exceptions(void)

{
  __cxa_uncaught_exceptions();
  return;
}




/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::current_exception() */

void std::current_exception(void)

{
  undefined8 uVar1;
  undefined8 *in_x8;
  
  uVar1 = __cxa_current_primary_exception();
  *in_x8 = uVar1;
  return;
}

