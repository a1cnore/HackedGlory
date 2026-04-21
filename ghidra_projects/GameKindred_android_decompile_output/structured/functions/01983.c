// functions/01983 — 16 functions
#include "libGameKindred.h"




void FUN_0198303c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baec18;
  DAT_02c08f40 = 0;
  DAT_03214438 = 0;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  FUN_01985604(param_1);
  return;
}




void FUN_01983084(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baec18;
  DAT_02c08f40 = 0;
  DAT_03214438 = 0;
  pthread_mutex_destroy((pthread_mutex_t *)(param_1 + 2));
  FUN_01985604(param_1);
  operator_delete(param_1);
  return;
}




int FUN_019830d4(long param_1)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  FUN_01985688(param_1 + 0x38,1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}




int FUN_0198310c(long param_1,undefined4 *param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x10));
  *param_2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x38) = 0;
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x10));
  return iVar1;
}




void FUN_01983150(undefined8 *param_1)

{
  FUN_01980c00();
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *param_1 = &PTR_FUN_02baec40;
  FUN_00e77acc((long)param_1 + 0x3c,0);
  DAT_02c08f58 = FUN_019831dc;
  DAT_02c08f60 = FUN_019831f8;
  DAT_02c08f68 = FUN_01983214;
  DAT_03214440 = param_1;
  *(undefined1 *)(param_1 + 7) = 0;
  return;
}




void FUN_019831dc(undefined4 param_1)

{
  if (DAT_03214440 != 0) {
    FUN_019832e0(DAT_03214440,param_1);
    return;
  }
  return;
}




void FUN_019831f8(undefined4 param_1)

{
  if (DAT_03214440 != 0) {
    FUN_01983afc(DAT_03214440,param_1);
    return;
  }
  return;
}




void FUN_01983214(uint param_1)

{
  if (DAT_03214440 != 0) {
    FUN_01983b44(DAT_03214440,param_1 & 1);
    return;
  }
  return;
}




void FUN_01983230(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baec40;
  DAT_02c08f58 = 0;
  DAT_02c08f60 = 0;
  DAT_03214440 = 0;
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x3c));
  FUN_01980c34(param_1);
  return;
}




void FUN_01983284(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_02baec40;
  DAT_02c08f58 = 0;
  DAT_02c08f60 = 0;
  DAT_03214440 = 0;
  pthread_mutex_destroy((pthread_mutex_t *)((long)param_1 + 0x3c));
  FUN_01980c34(param_1);
  operator_delete(param_1);
  return;
}




int FUN_019832e0(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3c));
  FUN_01983328(param_1,param_2,1);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3c));
  return iVar1;
}




void FUN_01983328(long param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 1:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x3d);
    return;
  case 2:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1a);
    return;
  case 3:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1b);
    return;
  case 4:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1c);
    return;
  case 5:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1d);
    return;
  case 6:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1e);
    return;
  case 7:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1f);
    return;
  case 8:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x20);
    return;
  case 9:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x21);
    return;
  case 10:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x22);
    return;
  case 0xb:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x23);
    return;
  case 0xc:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x41);
    return;
  case 0xd:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x42);
    return;
  case 0xe:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x43);
    return;
  case 0xf:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x3f);
    return;
  case 0x10:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x10);
    return;
  case 0x11:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x16);
    return;
  case 0x12:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,4);
    return;
  case 0x13:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x11);
    return;
  case 0x14:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x13);
    return;
  case 0x15:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x18);
    return;
  case 0x16:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x14);
    return;
  case 0x17:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,8);
    return;
  case 0x18:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xe);
    return;
  case 0x19:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xf);
    return;
  case 0x1a:
    uVar1 = 0x52;
    if ((param_3 & 1) == 0) {
      FUN_01980d34();
      return;
    }
    break;
  case 0x1b:
    uVar1 = 0x53;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x53);
      return;
    }
    break;
  case 0x1c:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x4a);
    return;
  case 0x1d:
    uVar1 = 0x4e;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x4e);
      return;
    }
    break;
  case 0x1e:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0);
    return;
  case 0x1f:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x12);
    return;
  case 0x20:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,3);
    return;
  case 0x21:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,5);
    return;
  case 0x22:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,6);
    return;
  case 0x23:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,7);
    return;
  case 0x24:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,9);
    return;
  case 0x25:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,10);
    return;
  case 0x26:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xb);
    return;
  case 0x27:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x46);
    return;
  case 0x28:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x45);
    return;
  case 0x29:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x3e);
    return;
  case 0x2a:
    uVar1 = 0x4c;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x4c);
      return;
    }
    break;
  case 0x2b:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x44);
    return;
  case 0x2c:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x19);
    return;
  case 0x2d:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x17);
    return;
  case 0x2e:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,2);
    return;
  case 0x2f:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x15);
    return;
  case 0x30:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,1);
    return;
  case 0x31:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xd);
    return;
  case 0x32:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xc);
    return;
  case 0x33:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x49);
    return;
  case 0x34:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x48);
    return;
  case 0x35:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x47);
    return;
  case 0x36:
    uVar1 = 0x4d;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x4d);
      return;
    }
    break;
  case 0x37:
    uVar1 = 0x60;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x60);
      return;
    }
    break;
  case 0x38:
    uVar1 = 0x50;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x50);
      return;
    }
    break;
  case 0x39:
    uVar1 = 0x4b;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x4b);
      return;
    }
    break;
  case 0x3a:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x40);
    return;
  case 0x3b:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2e);
    return;
  case 0x3c:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2f);
    return;
  case 0x3d:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x30);
    return;
  case 0x3e:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x31);
    return;
  case 0x3f:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x32);
    return;
  case 0x40:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x33);
    return;
  case 0x41:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x34);
    return;
  case 0x42:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x35);
    return;
  case 0x43:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x36);
    return;
  case 0x44:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x37);
    return;
  case 0x45:
    uVar1 = 0x5e;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5e);
      return;
    }
    break;
  case 0x46:
    uVar1 = 0x65;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x65);
      return;
    }
    break;
  case 0x47:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2a);
    return;
  case 0x48:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2b);
    return;
  case 0x49:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2c);
    return;
  case 0x4a:
    uVar1 = 0x61;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x61);
      return;
    }
    break;
  case 0x4b:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x27);
    return;
  case 0x4c:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x28);
    return;
  case 0x4d:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x29);
    return;
  case 0x4e:
    uVar1 = 0x62;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x62);
      return;
    }
    break;
  case 0x4f:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x24);
    return;
  case 0x50:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x25);
    return;
  case 0x51:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x26);
    return;
  case 0x52:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2d);
    return;
  case 0x53:
    uVar1 = 100;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,100);
      return;
    }
    break;
  default:
    return;
  case 0x57:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x38);
    return;
  case 0x58:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x39);
    return;
  case 0x60:
    uVar1 = 99;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,99);
      return;
    }
    break;
  case 0x61:
    uVar1 = 0x4f;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x4f);
      return;
    }
    break;
  case 0x62:
    uVar1 = 0x5f;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5f);
      return;
    }
    break;
  case 99:
    uVar1 = 0x66;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x66);
      return;
    }
    break;
  case 100:
    uVar1 = 0x51;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x51);
      return;
    }
    break;
  case 0x66:
    uVar1 = 0x56;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x56);
      return;
    }
    break;
  case 0x67:
    uVar1 = 0x5c;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5c);
      return;
    }
    break;
  case 0x68:
    uVar1 = 0x58;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x58);
      return;
    }
    break;
  case 0x69:
    uVar1 = 0x5a;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5a);
      return;
    }
    break;
  case 0x6a:
    uVar1 = 0x5b;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5b);
      return;
    }
    break;
  case 0x6b:
    uVar1 = 0x57;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x57);
      return;
    }
    break;
  case 0x6c:
    uVar1 = 0x5d;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5d);
      return;
    }
    break;
  case 0x6d:
    uVar1 = 0x59;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x59);
      return;
    }
    break;
  case 0x6e:
    uVar1 = 0x54;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x54);
      return;
    }
    break;
  case 0x6f:
    uVar1 = 0x55;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x55);
      return;
    }
    break;
  case 0x77:
    uVar1 = 0x67;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x67);
      return;
    }
    break;
  case 0xb7:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x3a);
    return;
  case 0xb8:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x3b);
    return;
  case 0xb9:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x3c);
    return;
  }
  FUN_01980d14(param_1 + 100,uVar1);
  return;
}




int FUN_01983afc(long param_1,undefined4 param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3c));
  FUN_01983328(param_1,param_2,0);
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3c));
  return iVar1;
}




int FUN_01983b44(long param_1,byte param_2)

{
  int iVar1;
  
  pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x3c));
  *(byte *)(param_1 + 0x38) = param_2 & 1;
  if ((param_2 & 1) == 0) {
    FUN_01980c20(param_1);
  }
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x3c));
  return iVar1;
}




undefined1 FUN_01983b90(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}




void FUN_01983b98(long param_1,undefined4 param_2,uint param_3)

{
  undefined8 uVar1;
  
  switch(param_2) {
  case 7:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x23);
    return;
  case 8:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1a);
    return;
  case 9:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1b);
    return;
  case 10:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1c);
    return;
  case 0xb:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1d);
    return;
  case 0xc:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1e);
    return;
  case 0xd:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x1f);
    return;
  case 0xe:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x20);
    return;
  case 0xf:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x21);
    return;
  case 0x10:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x22);
    return;
  default:
    return;
  case 0x13:
    uVar1 = 0x5c;
    if ((param_3 & 1) == 0) {
      FUN_01980d34();
      return;
    }
    break;
  case 0x14:
    uVar1 = 0x5d;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5d);
      return;
    }
    break;
  case 0x15:
    uVar1 = 0x5a;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5a);
      return;
    }
    break;
  case 0x16:
    uVar1 = 0x5b;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5b);
      return;
    }
    break;
  case 0x1d:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0);
    return;
  case 0x1e:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,1);
    return;
  case 0x1f:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,2);
    return;
  case 0x20:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,3);
    return;
  case 0x21:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,4);
    return;
  case 0x22:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,5);
    return;
  case 0x23:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,6);
    return;
  case 0x24:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,7);
    return;
  case 0x25:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,8);
    return;
  case 0x26:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,9);
    return;
  case 0x27:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,10);
    return;
  case 0x28:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xb);
    return;
  case 0x29:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xc);
    return;
  case 0x2a:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xd);
    return;
  case 0x2b:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xe);
    return;
  case 0x2c:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0xf);
    return;
  case 0x2d:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x10);
    return;
  case 0x2e:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x11);
    return;
  case 0x2f:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x12);
    return;
  case 0x30:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x13);
    return;
  case 0x31:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x14);
    return;
  case 0x32:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x15);
    return;
  case 0x33:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x16);
    return;
  case 0x34:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x17);
    return;
  case 0x35:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x18);
    return;
  case 0x36:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x19);
    return;
  case 0x37:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x49);
    return;
  case 0x38:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x48);
    return;
  case 0x39:
    uVar1 = 0x50;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x50);
      return;
    }
    break;
  case 0x3a:
    uVar1 = 0x51;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x51);
      return;
    }
    break;
  case 0x3b:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x4c);
    return;
  case 0x3c:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x4d);
    return;
  case 0x3d:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x3f);
    return;
  case 0x3e:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x4b);
    return;
  case 0x42:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x4a);
    return;
  case 0x43:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x43);
    return;
  case 0x44:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x3e);
    return;
  case 0x45:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x41);
    return;
  case 0x46:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x42);
    return;
  case 0x47:
    uVar1 = 0x52;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x52);
      return;
    }
    break;
  case 0x48:
    uVar1 = 0x53;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x53);
      return;
    }
    break;
  case 0x49:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x44);
    return;
  case 0x4a:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x46);
    return;
  case 0x4b:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x45);
    return;
  case 0x4c:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x47);
    return;
  case 0x5c:
    uVar1 = 0x58;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x58);
      return;
    }
    break;
  case 0x5d:
    uVar1 = 0x59;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x59);
      return;
    }
    break;
  case 0x6f:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x3d);
    return;
  case 0x70:
    uVar1 = 0x55;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x55);
      return;
    }
    break;
  case 0x71:
    uVar1 = 0x4e;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x4e);
      return;
    }
    break;
  case 0x72:
    uVar1 = 0x4f;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x4f);
      return;
    }
    break;
  case 0x73:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x40);
    return;
  case 0x74:
    uVar1 = 0x65;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x65);
      return;
    }
    break;
  case 0x78:
    uVar1 = 0x66;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x66);
      return;
    }
    break;
  case 0x79:
    uVar1 = 0x67;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x67);
      return;
    }
    break;
  case 0x7a:
    uVar1 = 0x56;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x56);
      return;
    }
    break;
  case 0x7b:
    uVar1 = 0x57;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x57);
      return;
    }
    break;
  case 0x7c:
    uVar1 = 0x54;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x54);
      return;
    }
    break;
  case 0x83:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2e);
    return;
  case 0x84:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2f);
    return;
  case 0x85:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x30);
    return;
  case 0x86:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x31);
    return;
  case 0x87:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x32);
    return;
  case 0x88:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x33);
    return;
  case 0x89:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x34);
    return;
  case 0x8a:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x35);
    return;
  case 0x8b:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x36);
    return;
  case 0x8c:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x37);
    return;
  case 0x8d:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x38);
    return;
  case 0x8e:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x39);
    return;
  case 0x8f:
    uVar1 = 0x5e;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5e);
      return;
    }
    break;
  case 0x90:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2d);
    return;
  case 0x91:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x24);
    return;
  case 0x92:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x25);
    return;
  case 0x93:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x26);
    return;
  case 0x94:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x27);
    return;
  case 0x95:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x28);
    return;
  case 0x96:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x29);
    return;
  case 0x97:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2a);
    return;
  case 0x98:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2b);
    return;
  case 0x99:
    if ((param_3 & 1) != 0) {
      FUN_01980d14();
      return;
    }
    FUN_01980d34(param_1 + 100,0x2c);
    return;
  case 0x9a:
    uVar1 = 0x5f;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x5f);
      return;
    }
    break;
  case 0x9b:
    uVar1 = 0x60;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x60);
      return;
    }
    break;
  case 0x9c:
    uVar1 = 0x61;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x61);
      return;
    }
    break;
  case 0x9d:
    uVar1 = 0x62;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,0x62);
      return;
    }
    break;
  case 0x9e:
    uVar1 = 100;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,100);
      return;
    }
    break;
  case 0xa0:
    uVar1 = 99;
    if ((param_3 & 1) == 0) {
      FUN_01980d34(param_1 + 100,99);
      return;
    }
  }
  FUN_01980d14(param_1 + 100,uVar1);
  return;
}

