// classes/pcrecpp/Arg — 50 functions
#include "libGameKindred.h"




void pcrecpp::Arg::parse_long_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  parse_long_radix(param_1,param_2,param_3,param_4);
  return;
}




void pcrecpp::Arg::parse_double(char *param_1,int param_2,void *param_3)

{
  parse_double(param_1,param_2,param_3);
  return;
}




void pcrecpp::Arg::parse_ulong_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  parse_ulong_radix(param_1,param_2,param_3,param_4);
  return;
}




/* pcrecpp::Arg::parse_null(char const*, int, void*) */

bool pcrecpp::Arg::parse_null(char *param_1,int param_2,void *param_3)

{
  return param_3 == (void *)0x0;
}




/* pcrecpp::Arg::parse_string(char const*, int, void*) */

undefined8 pcrecpp::Arg::parse_string(char *param_1,int param_2,void *param_3)

{
  if (param_3 != (void *)0x0) {
    FUN_008fcea8(param_3,param_1,(long)param_2);
  }
  return 1;
}




/* pcrecpp::Arg::parse_stringpiece(char const*, int, void*) */

undefined8 pcrecpp::Arg::parse_stringpiece(char *param_1,int param_2,void *param_3)

{
  if (param_3 != (void *)0x0) {
    *(char **)param_3 = param_1;
    *(int *)((long)param_3 + 8) = param_2;
  }
  return 1;
}




/* pcrecpp::Arg::parse_char(char const*, int, void*) */

undefined8 pcrecpp::Arg::parse_char(char *param_1,int param_2,void *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 == 1) {
    if (param_3 != (void *)0x0) {
      *(char *)param_3 = *param_1;
    }
    uVar1 = 1;
  }
  return uVar1;
}




/* pcrecpp::Arg::parse_uchar(char const*, int, void*) */

undefined8 pcrecpp::Arg::parse_uchar(char *param_1,int param_2,void *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 == 1) {
    if (param_3 != (void *)0x0) {
      *(char *)param_3 = *param_1;
    }
    uVar1 = 1;
  }
  return uVar1;
}




/* pcrecpp::Arg::parse_long_radix(char const*, int, void*, int) */

void pcrecpp::Arg::parse_long_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  long lVar1;
  char *__nptr;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  char *local_78;
  undefined1 auStack_6c [36];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    __nptr = (char *)FUN_01b15f98(auStack_6c,param_1,param_2);
    piVar2 = (int *)__errno();
    *piVar2 = 0;
    lVar3 = strtol(__nptr,&local_78,param_4);
    uVar4 = 0;
    if ((local_78 == __nptr + param_2) && (uVar4 = 0, *piVar2 == 0)) {
      if (param_3 != (void *)0x0) {
        *(long *)param_3 = lVar3;
      }
      uVar4 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}




/* pcrecpp::Arg::parse_ulong_radix(char const*, int, void*, int) */

void pcrecpp::Arg::parse_ulong_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  long lVar1;
  char *__nptr;
  undefined8 uVar2;
  int *piVar3;
  ulong uVar4;
  char *local_78;
  undefined1 auStack_6c [36];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    __nptr = (char *)FUN_01b15f98(auStack_6c,param_1,param_2);
    uVar2 = 0;
    if (*__nptr != '-') {
      piVar3 = (int *)__errno(0);
      *piVar3 = 0;
      uVar4 = strtoul(__nptr,&local_78,param_4);
      uVar2 = 0;
      if ((local_78 == __nptr + param_2) && (uVar2 = 0, *piVar3 == 0)) {
        if (param_3 != (void *)0x0) {
          *(ulong *)param_3 = uVar4;
        }
        uVar2 = 1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




/* pcrecpp::Arg::parse_short_radix(char const*, int, void*, int) */

void pcrecpp::Arg::parse_short_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,param_4);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x8000U >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_ushort_radix(char const*, int, void*, int) */

void pcrecpp::Arg::parse_ushort_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,param_4);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_int_radix(char const*, int, void*, int) */

void pcrecpp::Arg::parse_int_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,param_4);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x80000000U >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_uint_radix(char const*, int, void*, int) */

void pcrecpp::Arg::parse_uint_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,param_4);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_longlong_radix(char const*, int, void*, int) */

undefined1  [16]
pcrecpp::Arg::parse_longlong_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  return ZEXT416((uint)param_2) << 0x40;
}




/* pcrecpp::Arg::parse_ulonglong_radix(char const*, int, void*, int) */

undefined1  [16]
pcrecpp::Arg::parse_ulonglong_radix(char *param_1,int param_2,void *param_3,int param_4)

{
  return ZEXT416((uint)param_2) << 0x40;
}




/* pcrecpp::Arg::parse_double(char const*, int, void*) */

void pcrecpp::Arg::parse_double(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  undefined8 uVar2;
  int *piVar3;
  double dVar4;
  char *local_118;
  char acStack_110 [200];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (param_2 < 200) {
      memcpy(acStack_110,param_1,(long)param_2);
      acStack_110[param_2] = '\0';
      piVar3 = (int *)__errno();
      *piVar3 = 0;
      dVar4 = strtod(acStack_110,&local_118);
      uVar2 = 0;
      if ((local_118 == acStack_110 + param_2) && (uVar2 = 0, *piVar3 == 0)) {
        if (param_3 != (void *)0x0) {
          *(double *)param_3 = dVar4;
        }
        uVar2 = 1;
      }
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}




/* pcrecpp::Arg::parse_float(char const*, int, void*) */

void pcrecpp::Arg::parse_float(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  double local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_double(param_1,param_2,&local_30);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    if (param_3 != (void *)0x0) {
      *(float *)param_3 = (float)local_30;
    }
    uVar3 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_short(char const*, int, void*) */

void pcrecpp::Arg::parse_short(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,10);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x8000U >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_short_hex(char const*, int, void*) */

void pcrecpp::Arg::parse_short_hex(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,0x10);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x8000U >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_short_octal(char const*, int, void*) */

void pcrecpp::Arg::parse_short_octal(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,8);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x8000U >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_short_cradix(char const*, int, void*) */

void pcrecpp::Arg::parse_short_cradix(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,0);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x8000U >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_ushort(char const*, int, void*) */

void pcrecpp::Arg::parse_ushort(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,10);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_ushort_hex(char const*, int, void*) */

void pcrecpp::Arg::parse_ushort_hex(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,0x10);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_ushort_octal(char const*, int, void*) */

void pcrecpp::Arg::parse_ushort_octal(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,8);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_ushort_cradix(char const*, int, void*) */

void pcrecpp::Arg::parse_ushort_cradix(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,0);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x10 == 0) {
      if (param_3 != (void *)0x0) {
        *(short *)param_3 = (short)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_int(char const*, int, void*) */

void pcrecpp::Arg::parse_int(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,10);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x80000000U >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_int_hex(char const*, int, void*) */

void pcrecpp::Arg::parse_int_hex(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,0x10);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x80000000U >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_int_octal(char const*, int, void*) */

void pcrecpp::Arg::parse_int_octal(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,8);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x80000000U >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_int_cradix(char const*, int, void*) */

void pcrecpp::Arg::parse_int_cradix(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_long_radix(param_1,param_2,&local_30,0);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 + 0x80000000U >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_uint(char const*, int, void*) */

void pcrecpp::Arg::parse_uint(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,10);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_uint_hex(char const*, int, void*) */

void pcrecpp::Arg::parse_uint_hex(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,0x10);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_uint_octal(char const*, int, void*) */

void pcrecpp::Arg::parse_uint_octal(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,8);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_uint_cradix(char const*, int, void*) */

void pcrecpp::Arg::parse_uint_cradix(char *param_1,int param_2,void *param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = parse_ulong_radix(param_1,param_2,&local_30,0);
  uVar3 = 0;
  if ((uVar2 & 1) != 0) {
    uVar3 = 0;
    if (local_30 >> 0x20 == 0) {
      if (param_3 != (void *)0x0) {
        *(int *)param_3 = (int)local_30;
      }
      uVar3 = 1;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}




/* pcrecpp::Arg::parse_long(char const*, int, void*) */

void pcrecpp::Arg::parse_long(char *param_1,int param_2,void *param_3)

{
  parse_long_radix(param_1,param_2,param_3,10);
  return;
}




/* pcrecpp::Arg::parse_long_hex(char const*, int, void*) */

void pcrecpp::Arg::parse_long_hex(char *param_1,int param_2,void *param_3)

{
  parse_long_radix(param_1,param_2,param_3,0x10);
  return;
}




/* pcrecpp::Arg::parse_long_octal(char const*, int, void*) */

void pcrecpp::Arg::parse_long_octal(char *param_1,int param_2,void *param_3)

{
  parse_long_radix(param_1,param_2,param_3,8);
  return;
}




/* pcrecpp::Arg::parse_long_cradix(char const*, int, void*) */

void pcrecpp::Arg::parse_long_cradix(char *param_1,int param_2,void *param_3)

{
  parse_long_radix(param_1,param_2,param_3,0);
  return;
}




/* pcrecpp::Arg::parse_ulong(char const*, int, void*) */

void pcrecpp::Arg::parse_ulong(char *param_1,int param_2,void *param_3)

{
  parse_ulong_radix(param_1,param_2,param_3,10);
  return;
}




/* pcrecpp::Arg::parse_ulong_hex(char const*, int, void*) */

void pcrecpp::Arg::parse_ulong_hex(char *param_1,int param_2,void *param_3)

{
  parse_ulong_radix(param_1,param_2,param_3,0x10);
  return;
}




/* pcrecpp::Arg::parse_ulong_octal(char const*, int, void*) */

void pcrecpp::Arg::parse_ulong_octal(char *param_1,int param_2,void *param_3)

{
  parse_ulong_radix(param_1,param_2,param_3,8);
  return;
}




/* pcrecpp::Arg::parse_ulong_cradix(char const*, int, void*) */

void pcrecpp::Arg::parse_ulong_cradix(char *param_1,int param_2,void *param_3)

{
  parse_ulong_radix(param_1,param_2,param_3,0);
  return;
}




/* pcrecpp::Arg::parse_longlong(char const*, int, void*) */

undefined1  [16] pcrecpp::Arg::parse_longlong(char *param_1,int param_2,void *param_3)

{
  return ZEXT416((uint)param_2) << 0x40;
}




/* pcrecpp::Arg::parse_longlong_hex(char const*, int, void*) */

undefined1  [16] pcrecpp::Arg::parse_longlong_hex(char *param_1,int param_2,void *param_3)

{
  return ZEXT416((uint)param_2) << 0x40;
}




/* pcrecpp::Arg::parse_longlong_octal(char const*, int, void*) */

undefined1  [16] pcrecpp::Arg::parse_longlong_octal(char *param_1,int param_2,void *param_3)

{
  return ZEXT416((uint)param_2) << 0x40;
}




/* pcrecpp::Arg::parse_longlong_cradix(char const*, int, void*) */

undefined1  [16] pcrecpp::Arg::parse_longlong_cradix(char *param_1,int param_2,void *param_3)

{
  return ZEXT416((uint)param_2) << 0x40;
}




/* pcrecpp::Arg::parse_ulonglong(char const*, int, void*) */

undefined1  [16] pcrecpp::Arg::parse_ulonglong(char *param_1,int param_2,void *param_3)

{
  return ZEXT416((uint)param_2) << 0x40;
}




/* pcrecpp::Arg::parse_ulonglong_hex(char const*, int, void*) */

undefined1  [16] pcrecpp::Arg::parse_ulonglong_hex(char *param_1,int param_2,void *param_3)

{
  return ZEXT416((uint)param_2) << 0x40;
}




/* pcrecpp::Arg::parse_ulonglong_octal(char const*, int, void*) */

undefined1  [16] pcrecpp::Arg::parse_ulonglong_octal(char *param_1,int param_2,void *param_3)

{
  return ZEXT416((uint)param_2) << 0x40;
}




/* pcrecpp::Arg::parse_ulonglong_cradix(char const*, int, void*) */

undefined1  [16] pcrecpp::Arg::parse_ulonglong_cradix(char *param_1,int param_2,void *param_3)

{
  return ZEXT416((uint)param_2) << 0x40;
}

