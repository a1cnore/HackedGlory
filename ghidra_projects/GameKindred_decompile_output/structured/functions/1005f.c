// functions/1005f — 236 functions
#include "GameKindred.h"




undefined8 FUN_1005f0120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f75bc(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100563124(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::registerOutput",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f0248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f7628(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::init",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f0394(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_148;
  undefined8 local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_148 = 0;
  local_38 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_140,&local_148);
  if ((int)uVar2 == 0) {
    if ((local_148 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
      local_148 = 0;
    }
    uVar2 = FUN_1005f63dc(local_140);
    if ((int)uVar2 == 0) {
      uVar2 = 0;
      goto LAB_1005f0434;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar2,1,param_1,"System::close",local_138);
  }
LAB_1005f0434:
  if ((local_148 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_148 = 0;
  }
  if (lVar3 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f0470(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_148;
  undefined8 local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_148 = 0;
  local_38 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_140,&local_148);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f8894(local_140), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar2,1,param_1,"System::update",local_138);
  }
  if ((local_148 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_148 = 0;
  }
  if (lVar3 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f0538(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_188;
  undefined8 local_180;
  undefined1 auStack_178 [256];
  long local_78;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_188 = 0;
  local_78 = lVar4;
  uVar3 = FUN_1005f45d8(param_3,&local_180,&local_188);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f889c(param_1,param_2,local_180,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_178,0x100,param_4);
    iVar2 = FUN_100562eec(auStack_178 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562dfc(param_1,auStack_178 + iVar2,0x100 - iVar2);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_178 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562dfc(param_2,auStack_178 + iVar2,0x100 - iVar2);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_178 + iVar2,0x100 - iVar2,", ");
    FUN_100562e5c(auStack_178 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,1,param_3,"System::setSpeakerPosition",auStack_178);
  }
  if ((local_188 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_188 = 0;
  }
  if (lVar4 == local_78) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f06d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f8a18(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056322c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,1,param_1,"System::getSpeakerPosition",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f0868(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f8b10(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562d60(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::setStreamBufferSize",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f0990(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f8b64(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563124(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100563124(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getStreamBufferSize",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f0ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_188;
  undefined8 local_180;
  undefined1 auStack_178 [256];
  long local_78;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_188 = 0;
  local_78 = lVar4;
  uVar3 = FUN_1005f45d8(param_4,&local_180,&local_188);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f8b94(param_1,param_2,param_3,local_180), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562dfc(param_1,auStack_178,0x100);
    iVar2 = FUN_100562eec(auStack_178 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562dfc(param_2,auStack_178 + iVar2,0x100 - iVar2);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_178 + iVar2,0x100 - iVar2,", ");
    FUN_100562dfc(param_3,auStack_178 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1));
    FUN_1005acff8(uVar3,1,param_4,"System::set3DSettings",auStack_178);
  }
  if ((local_188 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_188 = 0;
  }
  if (lVar4 == local_78) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f0c24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f92f8(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005631e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::get3DSettings",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f0d88(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f8c3c(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d14(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::set3DNumListeners",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f0e6c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f91ec(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::get3DNumListeners",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f0f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f8c6c(local_170,param_2,param_3,param_4,param_5,param_6), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563284(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563284(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563284(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    lVar4 = *(long *)PTR____stack_chk_guard_101444218;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100563284(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_6);
    FUN_1005acff8(uVar3,1,param_1,"System::set3DListenerAttributes",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f1120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f9218(local_170,param_2,param_3,param_4,param_5,param_6), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563284(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563284(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563284(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    lVar4 = *(long *)PTR____stack_chk_guard_101444218;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100563284(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_6);
    FUN_1005acff8(uVar3,1,param_1,"System::get3DListenerAttributes",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f12f0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f91d8(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562e5c(auStack_148,0x100,param_2 != 0);
    FUN_1005acff8(uVar2,1,param_1,"System::set3DRolloffCallback",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f13d8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_148;
  undefined8 local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_148 = 0;
  local_38 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_140,&local_148);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f933c(local_140), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar2,1,param_1,"System::mixerSuspend",local_138);
  }
  if ((local_148 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_148 = 0;
  }
  if (lVar3 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f14a0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_148;
  undefined8 local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_148 = 0;
  local_38 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_140,&local_148);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f93a4(local_140), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar2,1,param_1,"System::mixerSuspend",local_138);
  }
  if ((local_148 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_148 = 0;
  }
  if (lVar3 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f1568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 local_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_100570618(local_150,param_2,param_3), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_148[0] = 0;
    FUN_1005acff8(uVar2,1,param_1,"System::getSpeakerModeChannels",local_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f1648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_168;
  undefined8 local_160;
  undefined1 local_158 [256];
  long local_58;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar2 == 0) &&
     (uVar2 = FUN_100570870(local_160,param_2,param_3,param_4,param_5), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_158[0] = 0;
    FUN_1005acff8(uVar2,1,param_1,"System::getDefaultMixMatrix",local_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar3 == local_58) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f1740(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f9408(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100563124(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getVersion",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f1824(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f9428(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getOutputHandle",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f1908(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,0);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f945c(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005630e4(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getChannelsPlaying",auStack_158);
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f1a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f9494(local_170,param_2,param_3,param_4,param_5,param_6), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005631e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_5);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005631e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_6);
    FUN_1005acff8(uVar3,1,param_1,"System::getCPUUsage",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f1bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f95c8(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563164(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563164(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100563164(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::getFileUsage",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f1d14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f9618(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005630e4(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005630e4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005630e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::getSoundRAM",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f1e78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f9688(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562eec(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,1,param_1,"System::createSound",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f1ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,0);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f9af8(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562eec(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d60(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,1,param_1,"System::createStream",auStack_168);
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f2170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f9b00(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::createDSP",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f2298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f9b78(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::createDSPByType",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f23c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f8778(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562eec(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::createChannelGroup",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f24e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f878c(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562eec(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::createSoundGroup",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f2610(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005fa264(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::createReverb3D",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f26f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f9c54(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562e5c(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,1,param_1,"System::playSound",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f2888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005f9ec4(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562e5c(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,1,param_1,"System::playDSP",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f2a1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005f9fc4(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getChannel",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f2b44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005f45d8(param_1,&local_150,0);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005fa010(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,1,param_1,"System::getMasterChannelGroup",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f2c10(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005fa044(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getMasterSoundGroup",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f2cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005fa078(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d60(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562dd4(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::attachChannelGroupToPort",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f2e60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005fa1fc(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::detachChannelGroupFromPort",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f2f44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005fa344(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::setReverbProperties",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f306c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005fa608(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056335c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getReverbProperties",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f3194(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = lVar2;
  uVar1 = FUN_1005f45d8(param_1,&local_140,0);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005fa8d4(local_140), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar1,1,param_1,"System::lockDSP",local_138);
  }
  if (lVar2 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f3244(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_140;
  undefined1 local_138 [256];
  long local_38;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_38 = lVar2;
  uVar1 = FUN_1005f45d8(param_1,&local_140,0);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005fa8f0(local_140), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    local_138[0] = 0;
    FUN_1005acff8(uVar1,1,param_1,"System::unlockDSP",local_138);
  }
  if (lVar2 == local_38) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f32f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005fae50(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_1005630e4(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_1005630e4(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getRecordNumDrivers",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f341c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  int iVar1;
  undefined8 uVar2;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  uVar2 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if ((int)uVar2 == 0) {
    uVar2 = FUN_1005faea8(local_170,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
    ;
    if ((int)uVar2 == 0) {
      uVar2 = 0;
      goto LAB_1005f3518;
    }
  }
  if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10063ce44(auStack_168,0x100,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9)
    ;
    FUN_1005acff8(uVar2,1,param_1,"System::getRecordDriverInfo",auStack_168);
  }
LAB_1005f3518:
  if ((local_178 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_178 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f356c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005fb14c(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100563124(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getRecordPosition",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f3694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005faff4(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_10056335c(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_100562e5c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::recordStart",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f37f8(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005f5574(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d14(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::recordStop",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f38dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005fb1f0(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_10056322c(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::isRecording",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f3a04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005fb290(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562d14(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::createGeometry",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f3b68(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_2,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005fb370(param_1,local_150), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562dfc(param_1,auStack_148,0x100);
    FUN_1005acff8(uVar2,1,param_2,"System::setGeometrySettings",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f3c4c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005fb434(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005631e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getGeometrySettings",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f3d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005fb460(local_170,param_2,param_3,param_4), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_10056335c(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562d14(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_10056335c(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_4);
    FUN_1005acff8(uVar3,1,param_1,"System::loadGeometry",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8
FUN_1005f3e94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_178;
  undefined8 local_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_178 = 0;
  local_68 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_170,&local_178);
  if (((int)uVar3 == 0) &&
     (uVar3 = FUN_1005fb534(local_170,param_2,param_3,param_4,param_5), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100563284(auStack_168,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_168 + iVar1,0x100 - iVar1,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100563284(auStack_168 + iVar2,0x100 - iVar2,param_3);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_1005631e4(auStack_168 + iVar2,0x100 - iVar2,param_4);
    iVar2 = iVar2 + iVar1;
    iVar1 = FUN_100562eec(auStack_168 + iVar2,0x100 - iVar2,", ");
    FUN_1005631e4(auStack_168 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_5);
    FUN_1005acff8(uVar3,1,param_1,"System::getGeometryOcclusion",auStack_168);
  }
  if ((local_178 == 0) || (iVar2 = FUN_100570c30(), iVar2 == 0)) {
    local_178 = 0;
  }
  if (lVar4 == local_68) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f4028(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005fb5b0(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562eec(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::setNetworkProxy",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f410c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long local_168;
  undefined8 local_160;
  undefined1 auStack_158 [256];
  long local_58;
  
  lVar4 = *(long *)PTR____stack_chk_guard_101444218;
  local_168 = 0;
  local_58 = lVar4;
  uVar3 = FUN_1005f45d8(param_1,&local_160,&local_168);
  if (((int)uVar3 == 0) && (uVar3 = FUN_1005fb5b8(local_160,param_2,param_3), (int)uVar3 == 0)) {
    uVar3 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    iVar1 = FUN_100562eec(auStack_158,0x100,param_2);
    iVar2 = FUN_100562eec(auStack_158 + iVar1,0x100 - iVar1,", ");
    FUN_100562d14(auStack_158 + (iVar2 + iVar1),0x100 - (iVar2 + iVar1),param_3);
    FUN_1005acff8(uVar3,1,param_1,"System::getNetworkProxy",auStack_158);
  }
  if ((local_168 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_168 = 0;
  }
  if (lVar4 == local_58) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f4234(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005fb5c4(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_100562d14(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::setNetworkTimeout",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f4318(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long local_158;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar3 = *(long *)PTR____stack_chk_guard_101444218;
  local_158 = 0;
  local_48 = lVar3;
  uVar2 = FUN_1005f45d8(param_1,&local_150,&local_158);
  if (((int)uVar2 == 0) && (uVar2 = FUN_1005fb5cc(local_150,param_2), (int)uVar2 == 0)) {
    uVar2 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_1005630e4(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar2,1,param_1,"System::getNetworkTimeout",auStack_148);
  }
  if ((local_158 == 0) || (iVar1 = FUN_100570c30(), iVar1 == 0)) {
    local_158 = 0;
  }
  if (lVar3 == local_48) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f43fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005f45d8(param_1,&local_150,0);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005fb5d4(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,1,param_1,"System::setUserData",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005f44c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_150;
  undefined1 auStack_148 [256];
  long local_48;
  
  lVar2 = *(long *)PTR____stack_chk_guard_101444218;
  local_48 = lVar2;
  uVar1 = FUN_1005f45d8(param_1,&local_150,0);
  if (((int)uVar1 == 0) && (uVar1 = FUN_1005fb5f8(local_150,param_2), (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  else if ((char)PTR_DAT_10186d408[0x10] < '\0') {
    FUN_10056335c(auStack_148,0x100,param_2);
    FUN_1005acff8(uVar1,1,param_1,"System::getUserData",auStack_148);
  }
  if (lVar2 == local_48) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined4 FUN_1005f4594(uint param_1,long *param_2)

{
  undefined4 uVar1;
  long lVar2;
  
  if (param_2 == (long *)0x0) {
    return 0x1f;
  }
  *param_2 = 0;
  uVar1 = 0x1f;
  if (param_1 < 8) {
    lVar2 = *(long *)(PTR_DAT_10186d408 + (ulong)param_1 * 8 + 0x98);
    *param_2 = lVar2;
    uVar1 = 0x1f;
    if (lVar2 != 0) {
      uVar1 = 0;
    }
  }
  return uVar1;
}




undefined8 FUN_1005f45d8(long param_1,long *param_2,long *param_3)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  if (((((param_1 == *(long *)(PTR_DAT_10186d408 + 0x98)) ||
        (param_1 == *(long *)(PTR_DAT_10186d408 + 0xa0))) ||
       (param_1 == *(long *)(PTR_DAT_10186d408 + 0xa8))) ||
      ((param_1 == *(long *)(PTR_DAT_10186d408 + 0xb0) ||
       (param_1 == *(long *)(PTR_DAT_10186d408 + 0xb8))))) ||
     ((param_1 == *(long *)(PTR_DAT_10186d408 + 0xc0) ||
      ((param_1 == *(long *)(PTR_DAT_10186d408 + 200) ||
       (param_1 == *(long *)(PTR_DAT_10186d408 + 0xd0))))))) {
    *param_2 = param_1;
    if (param_1 == 0) {
      uVar1 = 0x1e;
    }
    else if (param_3 == (long *)0x0) {
      uVar1 = 0;
    }
    else if (*param_3 == 0) {
      uVar1 = FUN_100570b94(param_1);
      if ((int)uVar1 == 0) {
        uVar1 = 0;
        *param_3 = param_1;
      }
    }
    else {
      uVar1 = 0x1c;
    }
  }
  else {
    uVar1 = 0x1e;
  }
  return uVar1;
}




undefined8 FUN_1005f46b0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x4d0,
                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                ,0x124,0,0);
  lVar2 = FUN_1005e11c8();
  plVar1 = (long *)(param_1 + 0x15a58);
  *plVar1 = lVar2;
  if (lVar2 == 0) {
    uVar3 = 0x26;
  }
  else {
    uVar3 = FUN_1005e1628(lVar2,param_1);
    if ((int)uVar3 == 0) {
      FUN_1005e1644(*plVar1,param_1 + 0x15a60);
      uVar3 = FUN_1005dc0a0(*plVar1);
      if ((int)uVar3 == 0) {
        lVar2 = *plVar1;
        uVar3 = FUN_1005df264();
        uVar3 = FUN_1005e1e68(lVar2,uVar3,0,0);
        if ((int)uVar3 == 0) {
          lVar2 = *plVar1;
          uVar3 = FUN_1005e0ad0();
          uVar3 = FUN_1005e1e68(lVar2,uVar3,0,0);
          if ((int)uVar3 == 0) {
            lVar2 = *plVar1;
            uVar3 = FUN_1005de5cc();
            uVar3 = FUN_1005e1e68(lVar2,uVar3,0,0);
            if ((int)uVar3 == 0) {
              lVar2 = *plVar1;
              uVar3 = FUN_1005dea68();
              uVar3 = FUN_1005e1e68(lVar2,uVar3,0,0);
              if ((int)uVar3 == 0) {
                lVar2 = *plVar1;
                uVar3 = FUN_10061cb54();
                uVar3 = FUN_1005e1768(lVar2,uVar3,0,0xfa,0);
                if ((int)uVar3 == 0) {
                  lVar2 = *plVar1;
                  uVar3 = FUN_1005a6e2c();
                  uVar3 = FUN_1005e1768(lVar2,uVar3,param_1 + 0x15b64,600,0);
                  if ((int)uVar3 == 0) {
                    lVar2 = *plVar1;
                    uVar3 = FUN_1005a0598();
                    uVar3 = FUN_1005e1768(lVar2,uVar3,0,800,0);
                    if ((int)uVar3 == 0) {
                      lVar2 = *plVar1;
                      uVar3 = FUN_100586764();
                      uVar3 = FUN_1005e1768(lVar2,uVar3,0,1000,0);
                      if ((int)uVar3 == 0) {
                        lVar2 = *plVar1;
                        uVar3 = FUN_10058831c();
                        uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x44c,0);
                        if ((int)uVar3 == 0) {
                          lVar2 = *plVar1;
                          uVar3 = FUN_1005945f0();
                          uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x4b0,0);
                          if ((int)uVar3 == 0) {
                            lVar2 = *plVar1;
                            uVar3 = FUN_1005a2fe0();
                            uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x514,0);
                            if ((int)uVar3 == 0) {
                              lVar2 = *plVar1;
                              uVar3 = FUN_1005a9128();
                              uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x578,0);
                              if ((int)uVar3 == 0) {
                                lVar2 = *plVar1;
                                uVar3 = FUN_100588d8c();
                                uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x5dc,0);
                                if ((int)uVar3 == 0) {
                                  lVar2 = *plVar1;
                                  uVar3 = FUN_100590054();
                                  uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x640,0);
                                  if ((int)uVar3 == 0) {
                                    lVar2 = *plVar1;
                                    uVar3 = FUN_100587250();
                                    uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x6a4,0);
                                    if ((int)uVar3 == 0) {
                                      lVar2 = *plVar1;
                                      uVar3 = FUN_10061ab74();
                                      uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x898,0);
                                      if ((int)uVar3 == 0) {
                                        lVar2 = *plVar1;
                                        uVar3 = FUN_100596b8c();
                                        uVar3 = FUN_1005e1768(lVar2,uVar3,param_1 + 0x15b68,0x960,0)
                                        ;
                                        if ((int)uVar3 == 0) {
                                          lVar2 = *plVar1;
                                          uVar3 = FUN_1005a0ec4();
                                          uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x992,0);
                                          if ((int)uVar3 == 0) {
                                            lVar2 = *plVar1;
                                            uVar3 = FUN_1005a2a08();
                                            uVar3 = FUN_1005e1768(lVar2,uVar3,0,0x9c4,0);
                                            if ((int)uVar3 == 0) {
                                              lVar2 = *plVar1;
                                              uVar3 = FUN_1005a6b98();
                                              uVar3 = FUN_1005e1768(lVar2,uVar3,0,0xa28,0);
                                              if ((int)uVar3 == 0) {
                                                lVar2 = *plVar1;
                                                uVar3 = FUN_1005bc668();
                                                uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                if ((int)uVar3 == 0) {
                                                  lVar2 = *plVar1;
                                                  uVar3 = FUN_100632e70();
                                                  uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                  if ((int)uVar3 == 0) {
                                                    lVar2 = *plVar1;
                                                    uVar3 = FUN_1005b93a4();
                                                    uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                    if ((int)uVar3 == 0) {
                                                      lVar2 = *plVar1;
                                                      uVar3 = FUN_1005baa30();
                                                      uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                      if ((int)uVar3 == 0) {
                                                        lVar2 = *plVar1;
                                                        uVar3 = FUN_1005bb684();
                                                        uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                        if ((int)uVar3 == 0) {
                                                          lVar2 = *plVar1;
                                                          uVar3 = FUN_1005b73bc();
                                                          uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                          if ((int)uVar3 == 0) {
                                                            lVar2 = *plVar1;
                                                            uVar3 = FUN_10061ba0c();
                                                            uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0)
                                                            ;
                                                            if ((int)uVar3 == 0) {
                                                              lVar2 = *plVar1;
                                                              uVar3 = FUN_1005b36dc();
                                                              uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,
                                                                                    0);
                                                              if ((int)uVar3 == 0) {
                                                                lVar2 = *plVar1;
                                                                uVar3 = FUN_100617fa0();
                                                                uVar3 = FUN_1005e1b00(lVar2,uVar3,0,
                                                                                      0,0);
                                                                if ((int)uVar3 == 0) {
                                                                  lVar2 = *plVar1;
                                                                  uVar3 = FUN_1005b66cc();
                                                                  uVar3 = FUN_1005e1b00(lVar2,uVar3,
                                                                                        0,0,0);
                                                                  if ((int)uVar3 == 0) {
                                                                    lVar2 = *plVar1;
                                                                    uVar3 = FUN_1006194fc();
                                                                    uVar3 = FUN_1005e1b00(lVar2,
                                                  uVar3,0,0,0);
                                                  if ((int)uVar3 == 0) {
                                                    lVar2 = *plVar1;
                                                    uVar3 = FUN_100574a40();
                                                    uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                    if ((int)uVar3 == 0) {
                                                      lVar2 = *plVar1;
                                                      uVar3 = FUN_1005b3214();
                                                      uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                      if ((int)uVar3 == 0) {
                                                        lVar2 = *plVar1;
                                                        uVar3 = FUN_1005bc0e0();
                                                        uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                        if ((int)uVar3 == 0) {
                                                          lVar2 = *plVar1;
                                                          uVar3 = FUN_10062e650();
                                                          uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                          if ((int)uVar3 == 0) {
                                                            lVar2 = *plVar1;
                                                            uVar3 = FUN_1005bcd9c();
                                                            uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0)
                                                            ;
                                                            if ((int)uVar3 == 0) {
                                                              lVar2 = *plVar1;
                                                              uVar3 = FUN_1005bdf98();
                                                              uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,
                                                                                    0);
                                                              if ((int)uVar3 == 0) {
                                                                lVar2 = *plVar1;
                                                                uVar3 = FUN_1005afdd0();
                                                                uVar3 = FUN_1005e1b00(lVar2,uVar3,0,
                                                                                      0,0);
                                                                if ((int)uVar3 == 0) {
                                                                  lVar2 = *plVar1;
                                                                  uVar3 = FUN_1005b87a8();
                                                                  uVar3 = FUN_1005e1b00(lVar2,uVar3,
                                                                                        0,0,0);
                                                                  if ((int)uVar3 == 0) {
                                                                    lVar2 = *plVar1;
                                                                    uVar3 = FUN_1005b1a64();
                                                                    uVar3 = FUN_1005e1b00(lVar2,
                                                  uVar3,0,0,0);
                                                  if ((int)uVar3 == 0) {
                                                    lVar2 = *plVar1;
                                                    uVar3 = FUN_1005c5da8();
                                                    uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                    if ((int)uVar3 == 0) {
                                                      lVar2 = *plVar1;
                                                      uVar3 = FUN_100564794();
                                                      uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                      if ((int)uVar3 == 0) {
                                                        lVar2 = *plVar1;
                                                        uVar3 = FUN_100632448();
                                                        uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                        if ((int)uVar3 == 0) {
                                                          lVar2 = *plVar1;
                                                          uVar3 = FUN_100631a14();
                                                          uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                          if ((int)uVar3 == 0) {
                                                            lVar2 = *plVar1;
                                                            uVar3 = FUN_10062ce7c();
                                                            uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0)
                                                            ;
                                                            if ((int)uVar3 == 0) {
                                                              lVar2 = *plVar1;
                                                              uVar3 = FUN_10062f284();
                                                              uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,
                                                                                    0);
                                                              if ((int)uVar3 == 0) {
                                                                lVar2 = *plVar1;
                                                                uVar3 = FUN_1005b5108();
                                                                uVar3 = FUN_1005e1b00(lVar2,uVar3,0,
                                                                                      0,0);
                                                                if ((int)uVar3 == 0) {
                                                                  lVar2 = *plVar1;
                                                                  uVar3 = FUN_10055ebb0();
                                                                  uVar3 = FUN_1005e1b00(lVar2,uVar3,
                                                                                        0,0,0);
                                                                  if ((int)uVar3 == 0) {
                                                                    lVar2 = *plVar1;
                                                                    uVar3 = FUN_10056254c();
                                                                    uVar3 = FUN_1005e1b00(lVar2,
                                                  uVar3,0,0,0);
                                                  if ((int)uVar3 == 0) {
                                                    lVar2 = *plVar1;
                                                    uVar3 = FUN_1005740dc();
                                                    uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                    if ((int)uVar3 == 0) {
                                                      lVar2 = *plVar1;
                                                      uVar3 = FUN_100575e84();
                                                      uVar3 = FUN_1005e1b00(lVar2,uVar3,0,0,0);
                                                      if ((int)uVar3 == 0) {
                                                        *(undefined1 *)(param_1 + 9) = 1;
                                                        return 0;
                                                      }
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (*plVar1 != 0) {
      FUN_1005e1258(*plVar1,0);
      *plVar1 = 0;
    }
  }
  return uVar3;
}




undefined8 FUN_1005f4f74(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  FUN_100570b94();
  FUN_100570cdc(param_1,0);
  FUN_100570c30(param_1);
  lVar4 = *(long *)(param_1 + 0x6e8);
  if (0 < *(int *)(param_1 + 0x6dc)) {
    lVar7 = 0;
    lVar5 = 0;
    do {
      if (*(long *)(lVar4 + lVar7 + 0x30) != 0) {
        uVar1 = FUN_1005f5574(param_1,lVar5);
        if ((int)uVar1 != 0) {
          return uVar1;
        }
        lVar4 = *(long *)(param_1 + 0x6e8);
      }
      if (*(long *)(lVar4 + lVar7) != 0) {
        FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(lVar4 + lVar7),
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                      ,0x219);
        lVar4 = *(long *)(param_1 + 0x6e8);
        *(undefined8 *)(lVar4 + lVar7) = 0;
      }
      lVar5 = lVar5 + 1;
      lVar7 = lVar7 + 0x38;
    } while (lVar5 < *(int *)(param_1 + 0x6dc));
  }
  *(undefined4 *)(param_1 + 0x6dc) = 0;
  *(undefined4 *)(param_1 + 0x6e4) = 0;
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  *(undefined1 *)(param_1 + 0x6f0) = 0;
  *(undefined4 *)(param_1 + 0x6f4) = 0;
  if (lVar4 != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar4,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                  ,0x221);
    *(undefined8 *)(param_1 + 0x6e8) = 0;
  }
  FUN_100570b94(param_1);
  if (0 < *(int *)(param_1 + 0x1a8)) {
    lVar5 = 0;
    lVar4 = 0;
    do {
      FUN_100582560(*(long *)(param_1 + 0x1b0) + lVar5,0x53);
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + 0x270;
    } while (lVar4 < *(int *)(param_1 + 0x1a8));
  }
  FUN_100570c30(param_1);
  FUN_100570cdc(param_1,0);
  if (*(char *)(param_1 + 0x16408) != '\0') {
    FUN_1005fb958(param_1 + 0x162a8);
    *(char *)(param_1 + 0x16408) = '\0';
    FUN_1005dbe84(*(undefined8 *)(param_1 + 89000),0);
    *(undefined8 *)(param_1 + 89000) = 0;
    FUN_1005dbe84(*(undefined8 *)(param_1 + 0x15bb0),0);
    *(undefined8 *)(param_1 + 0x15bb0) = 0;
    FUN_1005dbe84(*(undefined8 *)(param_1 + 0x15bb8),0);
    *(undefined8 *)(param_1 + 0x15bb8) = 0;
  }
  if (*(long *)(param_1 + 0x6b8) != 0) {
    FUN_1005de0c8();
  }
  lVar4 = *(long *)(param_1 + 0x15d08);
  if (lVar4 != 0) {
    uVar1 = FUN_10057fe6c(lVar4,1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(long *)(param_1 + 0x15d08) = 0;
  }
  if (*(long *)(param_1 + 0x15d48) != 0) {
    uVar1 = FUN_1005e96b4();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(long *)(param_1 + 0x15d48) = 0;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x16798);
  while (puVar2 != (undefined8 *)(param_1 + 0x16798)) {
    puVar6 = (undefined8 *)*puVar2;
    uVar1 = FUN_1005e3650(puVar2[2],1);
    puVar2 = puVar6;
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_1005e3398(param_1 + 0x16658);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_1005e3398(param_1 + 0x16678);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_1005e3398(param_1 + 0x16698);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_1005e3398(param_1 + 0x166b8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  puVar2 = *(undefined8 **)(param_1 + 0x6b8);
  if (puVar2 != (undefined8 *)0x0) {
    if (param_2 == 0) {
      (**(code **)*puVar2)();
      *(undefined8 *)(param_1 + 0x6b8) = 0;
    }
    else if ((code *)puVar2[0x4d] != (code *)0x0) {
      (*(code *)puVar2[0x4d])(puVar2 + 1);
    }
  }
  if (*(undefined8 **)(param_1 + 0x700) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x700))();
    *(undefined8 *)(param_1 + 0x700) = 0;
  }
  if (*(undefined8 **)(param_1 + 0x6f8) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(param_1 + 0x6f8))();
    *(undefined8 *)(param_1 + 0x6f8) = 0;
  }
  uVar1 = FUN_10056bfcc(param_1,0);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_10056bfcc(param_1,1);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_10056bfcc(param_1,2);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_10056bfcc(param_1,3);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_10056bfcc(param_1,4);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_10056bfcc(param_1,5);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_10056bfcc(param_1,6);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_10056bfcc(param_1,7);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (*(long *)(param_1 + 0x1b0) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x1b0),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                  ,0x2af);
    *(undefined8 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0x1a8) = 0;
  }
  *(long *)(param_1 + 0x560) = param_1 + 0x558;
  *(long *)(param_1 + 0x558) = param_1 + 0x558;
  *(undefined8 *)(param_1 + 0x568) = 0;
  FUN_100637578(param_1 + 0x15630,0);
  if ((param_2 & 1) == 0) {
    uVar1 = FUN_10056ba8c(param_1,1,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    plVar3 = *(long **)(param_1 + 0x15670);
    if (plVar3 != (long *)0x0) {
      uVar1 = (**(code **)(*plVar3 + 8))();
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(long *)(param_1 + 0x15670) = 0;
    }
    plVar3 = (long *)(param_1 + 0x15678);
    if (*plVar3 != 0) {
      uVar1 = FUN_1005cdc44(*plVar3 + 8,0,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*plVar3,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                    ,0x2ce);
      *plVar3 = 0;
    }
    uVar1 = FUN_10057050c(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    lVar4 = *(long *)(param_1 + 0x15a58);
    if (lVar4 != 0) {
      uVar1 = FUN_1005e1258(lVar4,1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(long *)(param_1 + 0x15a58) = 0;
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  lVar4 = *(long *)(param_1 + 0x14828);
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x18), lVar4 != 0)) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),lVar4,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                  ,0x2e1);
    *(undefined8 *)(*(long *)(param_1 + 0x14828) + 0x18) = 0;
  }
  uVar1 = FUN_10056b7a0(param_1);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  FMOD::ExpandingPool<FMOD::DSPConnectionI>::getNumAlloced((int *)(param_1 + 0x790));
  uVar1 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::close();
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_1005d8100(param_1 + 0x148b8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_1005d8100(param_1 + 0x14f68);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  uVar1 = FUN_10056b990(param_1);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  FUN_10063cfd4(param_1 + 0x16800);
  uVar1 = FUN_100631b5c(param_1 + 0x167b8);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  lVar4 = 0;
  do {
    lVar5 = *(long *)(param_1 + 0x15b70 + lVar4 * 8);
    if (lVar5 != 0) {
      uVar1 = FUN_1005dbe84(lVar5,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(undefined8 *)(param_1 + 0x15b70 + lVar4 * 8) = 0;
    }
    lVar4 = lVar4 + 1;
  } while (lVar4 < 0x13);
  while (*(long **)(param_1 + 0x15d90) != (long *)(param_1 + 0x15d90)) {
    uVar1 = FUN_1005636b8();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if (*(long *)(param_1 + 0x167b0) != 0) {
    uVar1 = FUN_100555e04();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(long *)(param_1 + 0x167b0) = 0;
  }
  if ((*(char *)(param_1 + 8) != '\0') &&
     (uVar1 = FUN_1005d75e0(PTR_DAT_10186d408), (int)uVar1 != 0)) {
    return uVar1;
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return 0;
}




undefined8 FUN_1005f5574(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = FUN_1005fa9b0();
  if ((int)uVar1 == 0) {
    if (param_2 < 0) {
      uVar1 = 0x1f;
    }
    else if (param_2 < *(int *)(param_1 + 0x6dc)) {
      lVar2 = (long)param_2;
      if (*(long *)(*(long *)(param_1 + 0x6e8) + lVar2 * 0x38 + 0x30) == 0) {
        uVar1 = 0;
      }
      else {
        FUN_10057097c(param_1,0xf);
        uVar1 = FUN_1005dcbbc(*(undefined8 *)(param_1 + 0x6b8),
                              *(undefined8 *)(*(long *)(param_1 + 0x6e8) + lVar2 * 0x38 + 0x30));
        if ((int)uVar1 == 0) {
          FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                        *(undefined8 *)(*(long *)(param_1 + 0x6e8) + lVar2 * 0x38 + 0x30),
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                        ,0x144a);
          *(undefined8 *)(*(long *)(param_1 + 0x6e8) + lVar2 * 0x38 + 0x30) = 0;
          FUN_100570990(param_1,0xf);
          uVar1 = 0;
        }
        else {
          FUN_100570990(param_1,0xf);
        }
      }
    }
    else {
      uVar1 = 0x1f;
    }
  }
  return uVar1;
}




undefined8 FUN_1005f5680(long param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ulong *puVar5;
  long lVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  
  puVar5 = (ulong *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x40,
                                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                                  ,0x34e,0);
  if (puVar5 == (ulong *)0x0) {
    return 0x26;
  }
  lVar6 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                        *(int *)(param_1 + 0x710) * 4 + 0x18,
                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                        ,0x354,0,1);
  if (lVar6 == 0) {
    *puVar5 = 0;
    return 0x26;
  }
  uVar9 = lVar6 + 0x17U & 0xfffffffffffffff0;
  *(long *)(uVar9 - 8) = lVar6;
  *puVar5 = uVar9;
  if (uVar9 == 0) {
    return 0x26;
  }
  uVar7 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::alloc
                    ((DSPConnectionI **)(param_1 + 0x790),SUB81(puVar5 + 5,0));
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uVar7 = FUN_100612958(puVar5[5],1);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  FUN_10057097c(param_1,0x10);
  *(undefined4 *)(puVar5 + 1) = *(undefined4 *)(param_1 + 0x710);
  piVar1 = (int *)(param_1 + 0x16808);
  iVar8 = *piVar1;
  *(int *)(puVar5 + 7) = iVar8;
  iVar4 = iVar8 + 1;
  iVar3 = *(int *)(param_1 + 0x1680c);
  iVar2 = -iVar3;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  if (iVar2 < iVar4) {
    if (iVar4 <= (int)((float)iVar2 * 1.5)) {
      iVar4 = (int)((float)iVar2 * 1.5);
    }
    iVar2 = 8;
    if (7 < iVar4) {
      iVar2 = iVar4;
    }
    iVar4 = FUN_10063d134((long *)(param_1 + 0x16800),iVar2);
    if (iVar4 != 0) goto LAB_1005f57d4;
    iVar8 = *piVar1;
  }
  *(ulong **)(*(long *)(param_1 + 0x16800) + (long)iVar8 * 8) = puVar5;
  *piVar1 = *piVar1 + 1;
LAB_1005f57d4:
  FUN_100570990(param_1,0x10);
  *param_2 = puVar5;
  return 0;
}




undefined8 FUN_1005f5818(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (param_1 != 0) {
    FUN_10057097c(param_1,0x10);
  }
  iVar1 = *(int *)(param_1 + 0x16808);
  iVar2 = iVar1 + -1;
  lVar3 = param_2[7];
  lVar5 = (long)(int)lVar3 * 8;
  *(undefined8 *)(*(long *)(param_1 + 0x16800) + lVar5) =
       *(undefined8 *)(*(long *)(param_1 + 0x16800) + (long)iVar2 * 8);
  *(int *)(*(long *)(*(long *)(param_1 + 0x16800) + lVar5) + 0x38) = (int)lVar3;
  if (0 < iVar1) {
    *(int *)(param_1 + 0x16808) = iVar2;
  }
  if (param_1 != 0) {
    FUN_100570990(param_1,0x10);
  }
  if (param_2[6] != 0) {
    lVar5 = *(long *)(param_1 + 0x6b8);
    lVar3 = 0;
    if (lVar5 != 0) {
      lVar3 = lVar5 + 8;
    }
    (**(code **)(lVar5 + 0x2b0))(lVar3);
  }
  if ((param_2[5] == 0) ||
     (uVar4 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::free
                        ((DSPConnectionI *)(param_1 + 0x790),SUB81(param_2[5],0)), (int)uVar4 == 0))
  {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(undefined8 *)(*param_2 + -8),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                  ,0x397);
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_2,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                  ,0x398);
    uVar4 = 0;
  }
  return uVar4;
}




undefined8 FUN_1005f5930(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  
  if (param_3 == 0) goto LAB_1005f59e8;
  iVar1 = *(int *)(param_1 + 0x160b0);
  if (iVar1 < 1000) {
    iVar3 = 1;
    switch(iVar1) {
    case 2:
      break;
    case 3:
      iVar3 = 2;
      break;
    case 4:
    case 5:
    case 6:
      iVar3 = iVar1;
      break;
    case 7:
      iVar3 = 8;
      break;
    default:
switchD_1005f5990_default:
      iVar3 = 0;
    }
  }
  else {
    if (iVar1 != 1000) goto switchD_1005f5990_default;
    iVar3 = 2;
  }
  uVar2 = FUN_100614548(*(long *)(param_2 + 0x28),param_3,iVar3,1,8,
                        (ulong)(*(long *)(*(long *)(param_2 + 0x28) + 0x40) != 0) << 6,0);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  uVar2 = FUN_1006149c8(*(undefined4 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x28),0x40,0,0);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
LAB_1005f59e8:
  *(undefined1 *)(param_2 + 0x3c) = 1;
  return 0;
}




long * FUN_1005f5a28(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  
  *param_1 = (long)(PTR_DAT_1014441d8 + 0x10);
  FUN_1005e9cd0(param_1 + 10);
  FUN_100583c48(param_1 + 0x37);
  FUN_100583c48(param_1 + 0x85);
  *(undefined4 *)(param_1 + 0xd6) = 0xffffffff;
  param_1[0xd3] = (long)(param_1 + 0xd3);
  param_1[0xd4] = (long)(param_1 + 0xd3);
  param_1[0xd5] = 0;
  FUN_1005fbba8(param_1 + 0xe3);
  FUN_1005fbba8((long)param_1 + 0x754);
  param_1[0xfa] = 0;
  param_1[0xf9] = (long)(param_1 + 0xf8);
  param_1[0xf8] = (long)(param_1 + 0xf8);
  param_1[0xfc] = (long)(param_1 + 0xfb);
  param_1[0xfb] = (long)(param_1 + 0xfb);
  param_1[0xfd] = 0;
  param_1[0x2900] = (long)(param_1 + 0x28ff);
  param_1[0x28ff] = (long)(param_1 + 0x28ff);
  plVar1 = param_1 + 0x2910;
  param_1[0x2902] = 0;
  param_1[0x2901] = 0;
  param_1[0x2913] = -1;
  *plVar1 = (long)plVar1;
  param_1[0x2911] = (long)plVar1;
  param_1[0x2912] = 0;
  param_1[0x2915] = (long)(param_1 + 0x2914);
  param_1[0x2914] = (long)(param_1 + 0x2914);
  param_1[0x2916] = 0;
  FUN_1005d8098(param_1 + 0x2917);
  FUN_1005d8098(param_1 + 0x29ed);
  param_1[0x2ac4] = (long)(param_1 + 0x2ac3);
  param_1[0x2ac3] = (long)(param_1 + 0x2ac3);
  param_1[0x2ac5] = 0;
  FUN_1006373e4(param_1 + 0x2ac6);
  FUN_1005d76ac(param_1 + 0x2ad8);
  FUN_1005d76ac(param_1 + 0x2ae6);
  FUN_1005d76ac(param_1 + 0x2af4);
  FUN_1005d76ac(param_1 + 0x2b02);
  FUN_1005d76ac(param_1 + 0x2b10);
  FUN_1005d76ac(param_1 + 0x2b1e);
  FUN_1005d76ac(param_1 + 0x2b2c);
  FUN_1005d76ac(param_1 + 0x2b3a);
  FUN_1005fbba8(param_1 + 0x2b94);
  param_1[0x2ba4] = (long)(param_1 + 0x2ba3);
  param_1[0x2ba3] = (long)(param_1 + 0x2ba3);
  param_1[0x2ba5] = 0;
  param_1[0x2ba7] = (long)(param_1 + 0x2ba6);
  param_1[0x2ba6] = (long)(param_1 + 0x2ba6);
  param_1[0x2ba8] = 0;
  param_1[0x2bab] = (long)(param_1 + 0x2baa);
  param_1[0x2baa] = (long)(param_1 + 0x2baa);
  param_1[0x2bac] = 0;
  param_1[0x2bae] = (long)(param_1 + 0x2bad);
  param_1[0x2bad] = (long)(param_1 + 0x2bad);
  param_1[0x2baf] = 0;
  param_1[0x2bb3] = (long)(param_1 + 0x2bb2);
  param_1[0x2bb2] = (long)(param_1 + 0x2bb2);
  param_1[0x2bb4] = 0;
  *(undefined4 *)(param_1 + 0x2bbd) = 0xdef5eed1;
  *(undefined4 *)((long)param_1 + 0x15dec) = 0x210a112e;
  *(undefined4 *)(param_1 + 0x2bbe) = 0xb00d7817;
  *(undefined4 *)((long)param_1 + 0x15df4) = 0xa24611e;
  param_1[0x2c4e] = (long)(param_1 + 0x2c4d);
  param_1[0x2c4d] = (long)(param_1 + 0x2c4d);
  param_1[0x2c4f] = 0;
  param_1[0x2c53] = (long)(param_1 + 0x2c52);
  param_1[0x2c52] = (long)(param_1 + 0x2c52);
  param_1[0x2c54] = 0;
  FUN_1005fb738(param_1 + 0x2c55);
  FUN_1005fbba8((long)param_1 + 0x1640c);
  FUN_1005d4c60(param_1 + 0x2c8a);
  FUN_1005fbba8(param_1 + 0x2cc3);
  *(undefined4 *)(param_1 + 0x2cce) = 0;
  param_1[0x2ccd] = 0;
  param_1[0x2ccc] = 0;
  param_1[0x2ccb] = 0;
  *(undefined4 *)(param_1 + 0x2cd2) = 0;
  param_1[0x2cd1] = 0;
  param_1[0x2cd0] = 0;
  param_1[0x2ccf] = 0;
  *(undefined4 *)(param_1 + 0x2cd6) = 0;
  param_1[0x2cd5] = 0;
  param_1[0x2cd4] = 0;
  param_1[0x2cd3] = 0;
  *(undefined4 *)(param_1 + 0x2cda) = 0;
  param_1[0x2cd9] = 0;
  param_1[0x2cd8] = 0;
  param_1[0x2cd7] = 0;
  param_1[0x2cf4] = (long)(param_1 + 0x2cf3);
  param_1[0x2cf3] = (long)(param_1 + 0x2cf3);
  param_1[0x2cf5] = 0;
  param_1[0x2cf7] = 0;
  *(undefined4 *)(param_1 + 0x2cf8) = 0;
  param_1[0x2cfc] = 0;
  param_1[0x2cfb] = 0;
  param_1[0x2cfa] = 0;
  param_1[0x2cf9] = 0;
  *(undefined4 *)(param_1 + 0x2cfd) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x167ec) = 0;
  plVar1 = param_1 + 0x2cfe;
  *plVar1 = (long)plVar1;
  param_1[0x2cff] = (long)plVar1;
  param_1[0x2d01] = 0;
  param_1[0x2d00] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xd7] = 0;
  param_1[0xdf] = 0;
  param_1[0x36] = 0;
  param_1[0x2b4b] = 0;
  *(undefined4 *)((long)param_1 + 0x15cdc) = 0;
  *(undefined4 *)((long)param_1 + 0x15efc) = 0x4000;
  *(undefined4 *)(param_1 + 0x2be0) = 8;
  *(undefined4 *)(param_1 + 0x2b9d) = 0;
  *(undefined1 *)((long)param_1 + 0x15cec) = 0;
  param_1[0x2b93] = 0;
  *(undefined4 *)((long)param_1 + 0x15ce4) = 0x40;
  *(undefined4 *)((long)param_1 + 0x15d84) = 0x800;
  *(undefined1 *)(param_1 + 0x2bb0) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0x200;
  *(undefined4 *)((long)param_1 + 0x714) = 0x800;
  param_1[0xe0] = 0;
  *(undefined4 *)((long)param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0x2ba2) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0;
  *(undefined1 *)((long)param_1 + 0x15f04) = 0;
  *(undefined4 *)(param_1 + 0xe1) = 24000;
  *(undefined8 *)((long)param_1 + 0x6c4) = 0;
  param_1[0x2b9e] = 0;
  param_1[0x2ba0] = -1;
  param_1[0x2b9f] = -1;
  *(undefined8 *)((long)param_1 + 0x6d4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6cc) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2b48) = 1;
  *(undefined4 *)((long)param_1 + 0x15a44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b49) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x15a4c) = 0x3f800000;
  param_1[0x2c89] = 0;
  param_1[0x2c8a] = (long)param_1;
  _memset(param_1 + 0x2b4c,0,0x100);
  _memset(param_1 + 0x2b84,0,0x78);
  puVar2 = PTR_memoryAlloc_101444148;
  *(undefined4 *)(param_1 + 0x2b8b) = 0x43340000;
  *(undefined4 *)((long)param_1 + 0x15c5c) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x2b8c) = 0x457a0000;
  *(undefined4 *)((long)param_1 + 0x15c74) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x2b8d) = 400;
  *(undefined4 *)((long)param_1 + 0x15c7c) = 8;
  *(undefined4 *)(param_1 + 0x2b90) = 0x10000;
  *(undefined4 *)(param_1 + 0x2b91) = 0xc000;
  *(undefined4 *)((long)param_1 + 0x15c84) = 0x10000;
  *(undefined4 *)((long)param_1 + 0x15c8c) = 2;
  *(undefined4 *)(param_1 + 0x2b6d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b6c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x15b64) = 0xffffffff;
  param_1[0x2ace] = 0;
  param_1[0x2bcd] = (long)puVar2;
  param_1[0x2bce] = (long)PTR_memoryRealloc_101444150;
  param_1[0x2bcf] = (long)PTR_memoryFree_101444140;
  param_1[0x2bd0] = (long)FUN_1005d02e0;
  param_1[0x2bd1] = (long)FUN_1005d0348;
  param_1[0x2bd4] = (long)FUN_1005d03b0;
  param_1[0x2bd5] = (long)FUN_1005d0298;
  param_1[0x2bd2] = (long)(param_1 + 0x2bd6);
  param_1[0x2bd3] = (long)(param_1 + 0x2bd8);
  param_1[0x2bd6] = (long)FUN_10056c2d0;
  param_1[0x2bd7] = (long)FUN_10056c3c0;
  param_1[0x2bd8] = (long)FUN_100570698;
  param_1[0x2bd9] = (long)FUN_1005706ec;
  param_1[0x2bda] = (long)FUN_100570744;
  param_1[0x2bdb] = (long)FUN_1005707c0;
  param_1[0x2bdc] = (long)FUN_100570818;
  param_1[0x2bdd] = (long)FUN_100570950;
  return param_1;
}




long * thunk_FUN_1005f5a28(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  
  *param_1 = (long)(PTR_DAT_1014441d8 + 0x10);
  FUN_1005e9cd0(param_1 + 10);
  FUN_100583c48(param_1 + 0x37);
  FUN_100583c48(param_1 + 0x85);
  *(undefined4 *)(param_1 + 0xd6) = 0xffffffff;
  param_1[0xd3] = (long)(param_1 + 0xd3);
  param_1[0xd4] = (long)(param_1 + 0xd3);
  param_1[0xd5] = 0;
  FUN_1005fbba8(param_1 + 0xe3);
  FUN_1005fbba8((long)param_1 + 0x754);
  param_1[0xfa] = 0;
  param_1[0xf9] = (long)(param_1 + 0xf8);
  param_1[0xf8] = (long)(param_1 + 0xf8);
  param_1[0xfc] = (long)(param_1 + 0xfb);
  param_1[0xfb] = (long)(param_1 + 0xfb);
  param_1[0xfd] = 0;
  param_1[0x2900] = (long)(param_1 + 0x28ff);
  param_1[0x28ff] = (long)(param_1 + 0x28ff);
  plVar1 = param_1 + 0x2910;
  param_1[0x2902] = 0;
  param_1[0x2901] = 0;
  param_1[0x2913] = -1;
  *plVar1 = (long)plVar1;
  param_1[0x2911] = (long)plVar1;
  param_1[0x2912] = 0;
  param_1[0x2915] = (long)(param_1 + 0x2914);
  param_1[0x2914] = (long)(param_1 + 0x2914);
  param_1[0x2916] = 0;
  FUN_1005d8098(param_1 + 0x2917);
  FUN_1005d8098(param_1 + 0x29ed);
  param_1[0x2ac4] = (long)(param_1 + 0x2ac3);
  param_1[0x2ac3] = (long)(param_1 + 0x2ac3);
  param_1[0x2ac5] = 0;
  FUN_1006373e4(param_1 + 0x2ac6);
  FUN_1005d76ac(param_1 + 0x2ad8);
  FUN_1005d76ac(param_1 + 0x2ae6);
  FUN_1005d76ac(param_1 + 0x2af4);
  FUN_1005d76ac(param_1 + 0x2b02);
  FUN_1005d76ac(param_1 + 0x2b10);
  FUN_1005d76ac(param_1 + 0x2b1e);
  FUN_1005d76ac(param_1 + 0x2b2c);
  FUN_1005d76ac(param_1 + 0x2b3a);
  FUN_1005fbba8(param_1 + 0x2b94);
  param_1[0x2ba4] = (long)(param_1 + 0x2ba3);
  param_1[0x2ba3] = (long)(param_1 + 0x2ba3);
  param_1[0x2ba5] = 0;
  param_1[0x2ba7] = (long)(param_1 + 0x2ba6);
  param_1[0x2ba6] = (long)(param_1 + 0x2ba6);
  param_1[0x2ba8] = 0;
  param_1[0x2bab] = (long)(param_1 + 0x2baa);
  param_1[0x2baa] = (long)(param_1 + 0x2baa);
  param_1[0x2bac] = 0;
  param_1[0x2bae] = (long)(param_1 + 0x2bad);
  param_1[0x2bad] = (long)(param_1 + 0x2bad);
  param_1[0x2baf] = 0;
  param_1[0x2bb3] = (long)(param_1 + 0x2bb2);
  param_1[0x2bb2] = (long)(param_1 + 0x2bb2);
  param_1[0x2bb4] = 0;
  *(undefined4 *)(param_1 + 0x2bbd) = 0xdef5eed1;
  *(undefined4 *)((long)param_1 + 0x15dec) = 0x210a112e;
  *(undefined4 *)(param_1 + 0x2bbe) = 0xb00d7817;
  *(undefined4 *)((long)param_1 + 0x15df4) = 0xa24611e;
  param_1[0x2c4e] = (long)(param_1 + 0x2c4d);
  param_1[0x2c4d] = (long)(param_1 + 0x2c4d);
  param_1[0x2c4f] = 0;
  param_1[0x2c53] = (long)(param_1 + 0x2c52);
  param_1[0x2c52] = (long)(param_1 + 0x2c52);
  param_1[0x2c54] = 0;
  FUN_1005fb738(param_1 + 0x2c55);
  FUN_1005fbba8((long)param_1 + 0x1640c);
  FUN_1005d4c60(param_1 + 0x2c8a);
  FUN_1005fbba8(param_1 + 0x2cc3);
  *(undefined4 *)(param_1 + 0x2cce) = 0;
  param_1[0x2ccd] = 0;
  param_1[0x2ccc] = 0;
  param_1[0x2ccb] = 0;
  *(undefined4 *)(param_1 + 0x2cd2) = 0;
  param_1[0x2cd1] = 0;
  param_1[0x2cd0] = 0;
  param_1[0x2ccf] = 0;
  *(undefined4 *)(param_1 + 0x2cd6) = 0;
  param_1[0x2cd5] = 0;
  param_1[0x2cd4] = 0;
  param_1[0x2cd3] = 0;
  *(undefined4 *)(param_1 + 0x2cda) = 0;
  param_1[0x2cd9] = 0;
  param_1[0x2cd8] = 0;
  param_1[0x2cd7] = 0;
  param_1[0x2cf4] = (long)(param_1 + 0x2cf3);
  param_1[0x2cf3] = (long)(param_1 + 0x2cf3);
  param_1[0x2cf5] = 0;
  param_1[0x2cf7] = 0;
  *(undefined4 *)(param_1 + 0x2cf8) = 0;
  param_1[0x2cfc] = 0;
  param_1[0x2cfb] = 0;
  param_1[0x2cfa] = 0;
  param_1[0x2cf9] = 0;
  *(undefined4 *)(param_1 + 0x2cfd) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x167ec) = 0;
  plVar1 = param_1 + 0x2cfe;
  *plVar1 = (long)plVar1;
  param_1[0x2cff] = (long)plVar1;
  param_1[0x2d01] = 0;
  param_1[0x2d00] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  param_1[0xd7] = 0;
  param_1[0xdf] = 0;
  param_1[0x36] = 0;
  param_1[0x2b4b] = 0;
  *(undefined4 *)((long)param_1 + 0x15cdc) = 0;
  *(undefined4 *)((long)param_1 + 0x15efc) = 0x4000;
  *(undefined4 *)(param_1 + 0x2be0) = 8;
  *(undefined4 *)(param_1 + 0x2b9d) = 0;
  *(undefined1 *)((long)param_1 + 0x15cec) = 0;
  param_1[0x2b93] = 0;
  *(undefined4 *)((long)param_1 + 0x15ce4) = 0x40;
  *(undefined4 *)((long)param_1 + 0x15d84) = 0x800;
  *(undefined1 *)(param_1 + 0x2bb0) = 0;
  *(undefined4 *)(param_1 + 0xe2) = 0x200;
  *(undefined4 *)((long)param_1 + 0x714) = 0x800;
  param_1[0xe0] = 0;
  *(undefined4 *)((long)param_1 + 0x70c) = 0;
  *(undefined4 *)(param_1 + 0x2ba2) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  *(undefined4 *)((long)param_1 + 0x1ac) = 0;
  *(undefined1 *)((long)param_1 + 0x15f04) = 0;
  *(undefined4 *)(param_1 + 0xe1) = 24000;
  *(undefined8 *)((long)param_1 + 0x6c4) = 0;
  param_1[0x2b9e] = 0;
  param_1[0x2ba0] = -1;
  param_1[0x2b9f] = -1;
  *(undefined8 *)((long)param_1 + 0x6d4) = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x6cc) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2b48) = 1;
  *(undefined4 *)((long)param_1 + 0x15a44) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2b49) = 0x3f800000;
  *(undefined4 *)((long)param_1 + 0x15a4c) = 0x3f800000;
  param_1[0x2c89] = 0;
  param_1[0x2c8a] = (long)param_1;
  _memset(param_1 + 0x2b4c,0,0x100);
  _memset(param_1 + 0x2b84,0,0x78);
  puVar2 = PTR_memoryAlloc_101444148;
  *(undefined4 *)(param_1 + 0x2b8b) = 0x43340000;
  *(undefined4 *)((long)param_1 + 0x15c5c) = 0x43b40000;
  *(undefined4 *)(param_1 + 0x2b8c) = 0x457a0000;
  *(undefined4 *)((long)param_1 + 0x15c74) = 0x44bb8000;
  *(undefined4 *)(param_1 + 0x2b8d) = 400;
  *(undefined4 *)((long)param_1 + 0x15c7c) = 8;
  *(undefined4 *)(param_1 + 0x2b90) = 0x10000;
  *(undefined4 *)(param_1 + 0x2b91) = 0xc000;
  *(undefined4 *)((long)param_1 + 0x15c84) = 0x10000;
  *(undefined4 *)((long)param_1 + 0x15c8c) = 2;
  *(undefined4 *)(param_1 + 0x2b6d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b6c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x15b64) = 0xffffffff;
  param_1[0x2ace] = 0;
  param_1[0x2bcd] = (long)puVar2;
  param_1[0x2bce] = (long)PTR_memoryRealloc_101444150;
  param_1[0x2bcf] = (long)PTR_memoryFree_101444140;
  param_1[0x2bd0] = (long)FUN_1005d02e0;
  param_1[0x2bd1] = (long)FUN_1005d0348;
  param_1[0x2bd4] = (long)FUN_1005d03b0;
  param_1[0x2bd5] = (long)FUN_1005d0298;
  param_1[0x2bd2] = (long)(param_1 + 0x2bd6);
  param_1[0x2bd3] = (long)(param_1 + 0x2bd8);
  param_1[0x2bd6] = (long)FUN_10056c2d0;
  param_1[0x2bd7] = (long)FUN_10056c3c0;
  param_1[0x2bd8] = (long)FUN_100570698;
  param_1[0x2bd9] = (long)FUN_1005706ec;
  param_1[0x2bda] = (long)FUN_100570744;
  param_1[0x2bdb] = (long)FUN_1005707c0;
  param_1[0x2bdc] = (long)FUN_100570818;
  param_1[0x2bdd] = (long)FUN_100570950;
  return param_1;
}




undefined8 FUN_1005f6318(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 8) == '\0') || (uVar1 = FUN_1005f4f74(param_1,0), (int)uVar1 == 0)) {
    if (*(undefined8 **)(param_1 + 0x6b8) != (undefined8 *)0x0) {
      (**(code **)**(undefined8 **)(param_1 + 0x6b8))();
      *(undefined8 *)(param_1 + 0x6b8) = 0;
    }
    lVar2 = *(long *)(param_1 + 0x15a58);
    if (lVar2 != 0) {
      uVar1 = FUN_1005e1258(lVar2,1);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
      *(long *)(param_1 + 0x15a58) = 0;
      *(undefined1 *)(param_1 + 9) = 0;
    }
    FUN_1005d4e34(param_1 + 0x16450);
    *(undefined8 *)(PTR_DAT_10186d408 + (ulong)*(uint *)(param_1 + 0x15ce0) * 8 + 0x98) = 0;
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),param_1,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                  ,0x47d);
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_1005f63dc(undefined8 param_1)

{
  FUN_1005f4f74(param_1,0);
  return;
}




undefined8 FUN_1005f63e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = FUN_10056b320(param_1,param_2,0xffffffff);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x15cf0) = *(undefined4 *)(param_1 + 0x6c0);
    }
  }
  else {
    uVar1 = 0x1b;
  }
  return uVar1;
}




undefined8 FUN_1005f6434(long param_1,int *param_2)

{
  if (param_2 == (int *)0x0) {
    return 0x1f;
  }
  if (*(int *)(param_1 + 0x6c0) != 0) {
    *param_2 = *(int *)(param_1 + 0x6c0);
    return 0;
  }
  FUN_1005dc0d0(param_2);
  return 0;
}




undefined8 FUN_1005f6478(long param_1,int param_2,int param_3,int param_4)

{
  if (*(char *)(param_1 + 8) != '\0') {
    return 0x1b;
  }
  if (7 < param_3) {
    return 0x1f;
  }
  if (param_2 != 0 && 0x2cec0 < param_2 - 8000U) {
    return 0x1f;
  }
  if ((param_3 == 1) && (param_4 == 0)) {
    return 0x1f;
  }
  if (0x20 < param_4) {
    return 0x40;
  }
  if (param_2 != 0) {
    *(int *)(param_1 + 0x708) = param_2;
  }
  *(int *)(param_1 + 0x160b0) = param_3;
  if (param_3 == 1) goto switchD_1005f6530_caseD_2;
  if (param_3 < 1000) {
    param_4 = 1;
    switch(param_3) {
    case 2:
      break;
    case 3:
      param_4 = 2;
      break;
    case 4:
    case 5:
    case 6:
      param_4 = param_3;
      break;
    case 7:
      param_4 = 8;
      break;
    default:
      goto switchD_1005f6530_default;
    }
  }
  else {
    if (param_3 == 1000) {
      param_4 = 2;
      goto switchD_1005f6530_caseD_2;
    }
switchD_1005f6530_default:
    param_4 = 0;
  }
switchD_1005f6530_caseD_2:
  *(int *)(param_1 + 0x70c) = param_4;
  return 0;
}




undefined8 FUN_1005f6588(long param_1,undefined4 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    if ((*(char *)(param_1 + 8) != '\0') ||
       (uVar2 = FUN_10056b320(param_1,*(undefined4 *)(param_1 + 0x6c0),
                              *(undefined4 *)(param_1 + 0x6c4)), (int)uVar2 == 0)) {
      uVar2 = FUN_10056abdc(param_1,0);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      lVar3 = *(long *)(param_1 + 0x6b8);
      if (*(code **)(lVar3 + 0x240) != (code *)0x0) {
        lVar1 = 0;
        if (lVar3 != 0) {
          lVar1 = lVar3 + 8;
        }
                    /* WARNING: Could not recover jumptable at 0x0001005f65f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(lVar3 + 0x240))(lVar1,param_2);
        return uVar2;
      }
      uVar2 = 0;
    }
    *param_2 = 0;
  }
  return uVar2;
}




undefined8
FUN_1005f6610(long param_1,undefined8 param_2,void *param_3,undefined8 param_4,undefined8 *param_5,
             int *param_6,int *param_7,int *param_8)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  
  if ((*(char *)(param_1 + 8) == '\0') &&
     (uVar1 = FUN_10056b320(param_1,*(undefined4 *)(param_1 + 0x6c0),
                            *(undefined4 *)(param_1 + 0x6c4)), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = FUN_10056abdc(param_1,0);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  lVar3 = *(long *)(param_1 + 0x6b8);
  if (*(code **)(lVar3 + 0x240) == (code *)0x0) {
    local_54 = 0;
  }
  else {
    lVar2 = 0;
    if (lVar3 != 0) {
      lVar2 = lVar3 + 8;
    }
    uVar1 = (**(code **)(lVar3 + 0x240))(lVar2,&local_54);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  if ((int)param_2 < 0) {
    return 0x1f;
  }
  if (local_54 <= (int)param_2) {
    return 0x1f;
  }
  if ((*(char *)(param_1 + 8) == '\0') &&
     (uVar1 = FUN_10056b320(param_1,*(undefined4 *)(param_1 + 0x6c0),
                            *(undefined4 *)(param_1 + 0x6c4)), (int)uVar1 != 0)) {
    return uVar1;
  }
  if (*(long *)(*(long *)(param_1 + 0x6b8) + 0x248) == 0) {
    return 0;
  }
  local_5c = 0;
  local_58 = 0;
  local_60 = 0;
  if (param_3 != (void *)0x0) {
    _bzero(param_3,(long)(int)param_4);
  }
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = 0;
    param_5[1] = 0;
  }
  lVar2 = *(long *)(param_1 + 0x6b8);
  lVar3 = 0;
  if (lVar2 != 0) {
    lVar3 = lVar2 + 8;
  }
  uVar1 = (**(code **)(lVar2 + 0x248))
                    (lVar3,param_2,param_3,param_4,param_5,&local_58,&local_60,&local_5c);
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (local_5c != 0) {
    if (local_5c - 1U < 8) {
      local_60 = *(int *)(&DAT_10115f990 + (long)(int)(local_5c - 1U) * 4);
    }
    else {
      local_60 = 1;
    }
    goto LAB_1005f67d8;
  }
  if (local_60 < 1000) {
    local_5c = 1;
    switch(local_60) {
    case 0:
      local_60 = 3;
    case 3:
switchD_1005f67a0_caseD_3:
      local_5c = 2;
      break;
    default:
      goto switchD_1005f67a0_caseD_1;
    case 2:
      break;
    case 4:
    case 5:
    case 6:
      local_5c = local_60;
      break;
    case 7:
      local_5c = 8;
    }
  }
  else {
    if (local_60 == 1000) goto switchD_1005f67a0_caseD_3;
switchD_1005f67a0_caseD_1:
    local_5c = 0;
  }
LAB_1005f67d8:
  if (local_58 == 0) {
    local_58 = 48000;
  }
  if (param_7 != (int *)0x0) {
    *param_7 = local_60;
  }
  if (param_8 != (int *)0x0) {
    *param_8 = local_5c;
  }
  if (param_6 != (int *)0x0) {
    *param_6 = local_58;
  }
  return 0;
}




void FUN_1005f6850(long param_1)

{
  int iVar1;
  
  iVar1 = FUN_10056b20c();
  if (iVar1 != 0) {
    return;
  }
  FUN_1005f6610(param_1,*(undefined4 *)(param_1 + 0x6c8),0,0,param_1 + 0x15cf8,0,0,0);
  return;
}




undefined8 FUN_1005f68a8(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x6c8);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005f68cc(long param_1,int param_2)

{
  if (param_2 < 0) {
    return 0x1f;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    return 0x1b;
  }
  *(int *)(param_1 + 0x15ce4) = param_2;
  return 0;
}




undefined8 FUN_1005f6908(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x15ce4);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005f6934(long param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return 0x1b;
  }
  uVar1 = 0x1f;
  if ((param_2 != 0) && (1 < param_3)) {
    uVar1 = 0;
    *(int *)(param_1 + 0x710) = param_2;
    *(int *)(param_1 + 0x714) = param_3 * param_2;
  }
  return uVar1;
}




undefined8 FUN_1005f696c(long param_1,undefined4 *param_2,uint *param_3)

{
  uint uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x710);
  }
  if (param_3 != (uint *)0x0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x710) != 0) {
      uVar1 = *(uint *)(param_1 + 0x714) / *(uint *)(param_1 + 0x710);
    }
    *param_3 = uVar1;
  }
  return 0;
}




undefined8
FUN_1005f6994(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
             long param_7,int param_8)

{
  if (((param_2 == 0 || param_3 == 0) || param_6 == 0) || param_7 == 0) {
    if (((param_2 == 0 || param_3 == 0) || param_4 == 0) || param_5 == 0) {
      param_3 = 0;
      param_4 = 0;
      param_5 = 0;
      param_6 = 0;
      param_7 = 0;
      param_2 = 0;
      *(undefined1 *)(param_1 + 0x15d80) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x15d80) = 1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x15d80) = 1;
  }
  *(long *)(param_1 + 0x15df8) = param_2;
  *(long *)(param_1 + 0x15e00) = param_3;
  *(long *)(param_1 + 0x15e08) = param_4;
  *(long *)(param_1 + 0x15e10) = param_5;
  *(long *)(param_1 + 0x15e18) = param_6;
  *(long *)(param_1 + 0x15e20) = param_7;
  if (-1 < param_8) {
    *(int *)(param_1 + 0x15d84) = param_8;
  }
  return 0;
}




undefined8
FUN_1005f6a78(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  *(undefined8 *)(param_1 + 0x15e28) = param_2;
  *(undefined8 *)(param_1 + 0x15e30) = param_3;
  *(undefined8 *)(param_1 + 0x15e38) = param_4;
  *(undefined8 *)(param_1 + 0x15e40) = param_5;
  return 0;
}




undefined8 FUN_1005f6ab0(long param_1,uint *param_2)

{
  float fVar1;
  uint uVar2;
  undefined8 uVar3;
  float fVar4;
  
  if (param_2 == (uint *)0x0) {
    uVar3 = 0x1f;
  }
  else {
    uVar2 = *param_2;
    if (uVar2 - 0x6d < 0xc && (uVar2 & 3) == 0) {
      if (*(short *)((long)param_2 + 10) == 0) {
        if (*(short *)((long)param_2 + 6) == 0) {
          if (*(short *)((long)param_2 + 0xe) == 0) {
            if (*(short *)((long)param_2 + 0x1e) == 0) {
              if (*(short *)((long)param_2 + 0x12) == 0) {
                if (*(short *)((long)param_2 + 0x16) == 0) {
                  if (*(short *)((long)param_2 + 0x1a) == 0) {
                    fVar1 = (float)param_2[0x11];
                    if (((uint)fVar1 & 0x7f800000) == 0x7f800000) {
                      uVar3 = 0x1d;
                    }
                    else {
                      fVar4 = (float)param_2[0x15];
                      if (0.0001 <= fVar4) {
                        if (fVar4 < 10.0) {
                          return 0x1f;
                        }
                        if (22050.0 < fVar4) {
                          return 0x1f;
                        }
                      }
                      else {
                        param_2[0x15] = *(uint *)(param_1 + 0x15c74);
                      }
                      if ((fVar1 == -1.0) || ((uVar3 = 0x1f, 0.0 <= fVar1 && (fVar1 <= 1.0)))) {
                        if (param_2[8] < 0x21) {
                          if (param_2[0x17] >> 0x10 == 0) {
                            if (param_2[0x1b] < 5) {
                              if (param_2[0x16] < 4) {
                                if (0x752 < param_2[0x12] - 1 >> 4) {
                                  param_2[0x12] = *(uint *)(param_1 + 0x15c68);
                                }
                                if (param_2[0x18] == 0) {
                                  param_2[0x18] = *(uint *)(param_1 + 0x15c80);
                                }
                                if (param_2[0x19] == 0) {
                                  param_2[0x19] = *(uint *)(param_1 + 0x15c84);
                                }
                                if (param_2[0x1a] == 0) {
                                  param_2[0x1a] = *(uint *)(param_1 + 0x15c88);
                                }
                                if (param_2[0x17] == 0) {
                                  param_2[0x17] = *(uint *)(param_1 + 0x15c7c);
                                }
                                if (param_2[0x1b] == 0) {
                                  param_2[0x1b] = *(uint *)(param_1 + 0x15c8c);
                                }
                                _memcpy((void *)(param_1 + 0x15c20),param_2,(long)(int)uVar2);
                                uVar3 = 0;
                              }
                              else {
                                uVar3 = 0x1f;
                              }
                            }
                            else {
                              uVar3 = 0x1f;
                            }
                          }
                          else {
                            uVar3 = 0x1f;
                          }
                        }
                        else {
                          uVar3 = 0x1f;
                        }
                      }
                    }
                  }
                  else {
                    uVar3 = 0x1f;
                  }
                }
                else {
                  uVar3 = 0x1f;
                }
              }
              else {
                uVar3 = 0x1f;
              }
            }
            else {
              uVar3 = 0x1f;
            }
          }
          else {
            uVar3 = 0x1f;
          }
        }
        else {
          uVar3 = 0x1f;
        }
      }
      else {
        uVar3 = 0x1f;
      }
    }
    else {
      uVar3 = 0x1f;
    }
  }
  return uVar3;
}




undefined8 FUN_1005f6ce4(long param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_2 == (int *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    iVar1 = *param_2;
    if (iVar1 - 0x31U < 0x48) {
      if (((long)iVar1 & 3U) == 0) {
        if ((uint)param_2[8] < 0x21) {
          uVar3 = *(undefined8 *)(param_2 + 0xc);
          _memcpy(param_2,(void *)(param_1 + 0x15c20),(long)iVar1);
          uVar2 = 0;
          *param_2 = iVar1;
          *(undefined8 *)(param_2 + 0xc) = uVar3;
        }
        else {
          uVar2 = 0x1f;
        }
      }
      else {
        uVar2 = 0x1f;
      }
    }
    else {
      uVar2 = 0x1f;
    }
  }
  return uVar2;
}




undefined8 FUN_1005f6d78(long param_1,undefined8 param_2,undefined4 param_3)

{
  *(undefined8 *)(PTR_DAT_10186d408 + 8) = param_2;
  *(undefined4 *)(PTR_DAT_10186d408 + 0x10) = param_3;
  *(undefined8 *)(param_1 + 0x15e48) = param_2;
  *(undefined4 *)(param_1 + 0x15e50) = param_3;
  return 0;
}




undefined8 FUN_1005f6db0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_1005ecb6c(param_2);
  if (iVar1 < 0x100) {
    FUN_1005ecc98(param_1 + 0x15a60,param_2,0x100);
    if (*(long *)(param_1 + 0x15a58) != 0) {
      FUN_1005e1644(*(long *)(param_1 + 0x15a58),param_1 + 0x15a60);
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0x1f;
  }
  return uVar2;
}




undefined8 FUN_1005f6e28(void)

{
  return 0x44;
}




void FUN_1005f6e30(long param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 9) == '\0') && (iVar1 = FUN_1005f46b0(param_1), iVar1 != 0)) {
    return;
  }
  FUN_1005e136c(*(undefined8 *)(param_1 + 0x15a58),param_2,0);
  return;
}




undefined8 FUN_1005f6e84(long param_1,int param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0x1f;
  }
  else if ((*(char *)(param_1 + 9) != '\0') || (uVar1 = FUN_1005f46b0(param_1), (int)uVar1 == 0)) {
    if (param_2 == 2) {
      FUN_1005e20d4(*(undefined8 *)(param_1 + 0x15a58),param_3);
    }
    else if (param_2 == 1) {
      FUN_1005e20a0(*(undefined8 *)(param_1 + 0x15a58),param_3);
    }
    else {
      if (param_2 != 0) {
        return 0x1f;
      }
      FUN_1005e2108(*(undefined8 *)(param_1 + 0x15a58),param_3);
    }
    uVar1 = 0;
  }
  return uVar1;
}




void FUN_1005f6f34(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 9) == '\0') && (iVar1 = FUN_1005f46b0(param_1), iVar1 != 0)) {
    return;
  }
  FUN_1005e213c(*(undefined8 *)(param_1 + 0x15a58),param_2,param_3);
  return;
}




void FUN_1005f6f98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 9) == '\0') && (iVar1 = FUN_1005f46b0(param_1), iVar1 != 0)) {
    return;
  }
  FUN_1005e22bc(*(undefined8 *)(param_1 + 0x15a58),param_2,param_3,param_4);
  return;
}




undefined8 FUN_1005f7004(long param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = FUN_1005e2450(*(undefined8 *)(param_1 + 0x15a58),param_3,param_4);
    return uVar1;
  }
  if (param_2 == 2) {
    uVar1 = FUN_1005e2404(*(undefined8 *)(param_1 + 0x15a58),param_3,param_4);
    return uVar1;
  }
  if (param_2 == 1) {
    uVar1 = FUN_1005e238c(*(undefined8 *)(param_1 + 0x15a58),param_3,param_4);
    return uVar1;
  }
  return 0x1f;
}




undefined8
FUN_1005f7068(long param_1,undefined8 param_2,undefined4 *param_3,long param_4,undefined8 param_5,
             undefined4 *param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *local_58;
  long local_50;
  long local_48;
  
  if ((*(char *)(param_1 + 9) != '\0') || (uVar2 = FUN_1005f46b0(param_1), (int)uVar2 == 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x15a58);
    uVar2 = FUN_1005e1690(*puVar1,param_2,&local_48);
    if ((int)uVar2 == 0x36) {
      uVar2 = FUN_1005e16d8(*puVar1,param_2,&local_50);
      if ((int)uVar2 == 0x36) {
        uVar2 = FUN_1005e1720(*puVar1,param_2,&local_58);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (param_4 != 0) {
          FUN_1005ecc98(param_4,*local_58 + 4,param_5);
        }
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = *(undefined4 *)(*local_58 + 0x24);
        }
        if (param_3 == (undefined4 *)0x0) {
          return 0;
        }
        uVar3 = 2;
      }
      else {
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        if (param_4 != 0) {
          FUN_1005ecc98(param_4,*(undefined8 *)(local_50 + 0x20),param_5);
        }
        if (param_6 != (undefined4 *)0x0) {
          *param_6 = *(undefined4 *)(local_50 + 0x28);
        }
        if (param_3 == (undefined4 *)0x0) {
          return 0;
        }
        uVar3 = 1;
      }
      uVar2 = 0;
      *param_3 = uVar3;
    }
    else if ((int)uVar2 == 0) {
      if (param_4 != 0) {
        FUN_1005ecc98(param_4,*(undefined8 *)(local_48 + 0x20),param_5);
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = *(undefined4 *)(local_48 + 0x28);
      }
      if (param_3 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        *param_3 = 0;
      }
    }
  }
  return uVar2;
}




undefined8 FUN_1005f71e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = FUN_10056b320(param_1,0,param_2);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *(undefined4 *)(param_1 + 0x15cf4) = *(undefined4 *)(param_1 + 0x6c4);
    }
  }
  else {
    uVar1 = 0x1b;
  }
  return uVar1;
}




undefined8 FUN_1005f723c(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x6c4);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005f7260(long param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long local_28;
  
  local_28 = 0;
  plVar1 = (long *)(param_1 + 0x15a58);
  if (*plVar1 == 0) {
    uVar2 = 0x43;
  }
  else if (param_3 == (long *)0x0) {
    uVar2 = 0x1f;
  }
  else {
    *param_3 = 0;
    uVar2 = FUN_1005e1720(*plVar1,param_2,&local_28);
    if (((int)uVar2 == 0) && (uVar2 = FUN_1005e25cc(*plVar1,local_28,0,param_3), (int)uVar2 == 0)) {
      uVar2 = 0;
      *(ushort *)(*param_3 + 0x3c) = *(ushort *)(*param_3 + 0x3c) | 4;
      *(int *)(local_28 + 0x3c) = *(int *)(local_28 + 0x3c) + 1;
    }
  }
  return uVar2;
}




undefined8 FUN_1005f7300(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_28;
  
  if (param_3 == (undefined8 *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    uVar1 = FUN_1005e1720(*(undefined8 *)(param_1 + 0x15a58),param_2,&local_28);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
      *param_3 = *local_28;
    }
  }
  return uVar1;
}




ulong FUN_1005f7358(long param_1,undefined8 *param_2,undefined4 *param_3,undefined8 param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  
  if (param_2 == (undefined8 *)0x0) {
    uVar4 = 0x1f;
  }
  else if ((*(char *)(param_1 + 9) != '\0') || (uVar4 = FUN_1005f46b0(param_1), (int)uVar4 == 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    _memset(&local_118,0,0xd8);
    local_118 = *param_2;
    local_110 = *(undefined4 *)(param_2 + 1);
    local_108 = *(undefined4 *)(param_2 + 2);
    local_10c = *(undefined4 *)((long)param_2 + 0xc);
    local_100 = param_2[3];
    local_f8 = param_2[4];
    local_f0 = param_2[5];
    local_e8 = param_2[6];
    local_e0 = param_2[7];
    local_d8 = param_2[8];
    local_d0 = param_2[9];
    local_c8 = param_2[10];
    local_c0 = 0;
    uStack_bc = 0x198;
    uVar3 = FUN_1005e1768(*(undefined8 *)(param_1 + 0x15a58),&local_118,&local_11c,param_4,0);
    bVar2 = uVar3 == 0;
    if ((uVar3 == 0) && (param_3 != (undefined4 *)0x0)) {
      *param_3 = local_11c;
      bVar2 = true;
    }
    uVar1 = 0;
    if (!bVar2) {
      uVar1 = uVar3;
    }
    uVar4 = (ulong)uVar1;
  }
  return uVar4;
}




undefined8 FUN_1005f7484(long param_1,long param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 local_90;
  undefined4 local_8c;
  long *local_88;
  int local_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if (param_2 == 0) {
    uVar3 = 0x1f;
  }
  else if ((*(char *)(param_1 + 9) != '\0') || (uVar3 = FUN_1005f46b0(param_1), (int)uVar3 == 0)) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    puVar1 = (undefined8 *)(param_1 + 0x15a58);
    uVar3 = FUN_1005e20d4(*puVar1,&local_7c);
    if ((int)uVar3 == 0) {
      if (0 < local_7c) {
        iVar4 = 0;
        do {
          uVar3 = FUN_1005e2404(*puVar1,iVar4,&local_8c);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          uVar3 = FUN_1005e1720(*puVar1,local_8c,&local_88);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          iVar2 = FUN_1005ed0c8(*local_88 + 4,param_2 + 4);
          if (iVar2 == 0) {
            return 8;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < local_7c);
      }
      local_50 = 0;
      uStack_48 = 0;
      local_60 = 0;
      uStack_58 = 0;
      local_70 = 0;
      local_78 = 0;
      local_68 = 0x1c8;
      uVar3 = FUN_1005e1b00(*puVar1,&local_78,param_2,&local_90,0);
      if (((int)uVar3 == 0) && (param_3 != (undefined4 *)0x0)) {
        uVar3 = 0;
        *param_3 = local_90;
      }
    }
  }
  return uVar3;
}




void FUN_1005f75bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 9) == '\0') && (iVar1 = FUN_1005f46b0(param_1), iVar1 != 0)) {
    return;
  }
  FUN_1005e1f6c(*(undefined8 *)(param_1 + 0x15a58),param_2,param_3,0,1);
  return;
}




undefined8 FUN_1005f7628(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 in_stack_ffffffffffffff10;
  undefined4 uVar15;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined4 *puStack_a8;
  undefined8 local_a0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  long local_70;
  int local_68;
  undefined4 local_64;
  long local_60;
  char local_58;
  
  local_70 = 0;
  local_68 = 8;
  local_64 = 0;
  local_60 = 0;
  local_58 = '\x01';
  uVar12 = (uint)param_2;
  if (0xfff < uVar12) {
    uVar14 = 0x1f;
    goto LAB_1005f7bac;
  }
  if (*(char *)(param_1 + 8) == '\0') {
    uVar14 = FUN_1005f4f74(param_1,1);
    if (((int)uVar14 != 0) || (uVar14 = FUN_1005d7574(PTR_DAT_10186d408), (int)uVar14 != 0))
    goto LAB_1005f7ba4;
    piVar1 = (int *)(param_1 + 0x160b0);
    local_68 = *piVar1;
    local_64 = *(undefined4 *)(param_1 + 0x708);
    *(uint *)(param_1 + 0x48) = (uint)(param_3 >> 5) & 0x10000 | (uint)param_3;
    uVar2 = *(uint *)(param_1 + 0x15c94) ^ 0xf30d5eed;
    *(uint *)(param_1 + 0x15de8) = uVar2;
    uVar3 = *(uint *)(param_1 + 0x15c94) ^ 0xcf2a112;
    *(uint *)(param_1 + 0x15dec) = uVar3;
    *(uint *)(param_1 + 0x15df0) = uVar2 * 0x2220c267;
    *(uint *)(param_1 + 0x15df4) = uVar3 * -0x57dea137;
    *(undefined8 *)(param_1 + 0x15c08) = 0;
    *(undefined8 *)(param_1 + 0x15c10) = 0;
    *(undefined8 *)(param_1 + 0x15c18) = 0;
    local_70 = param_1;
    uVar14 = FUN_1005dbd48(param_1 + 0x15b70,0);
    if ((int)uVar14 != 0) goto LAB_1005f7ba4;
    uVar14 = FUN_1005dbd48((undefined8 *)(param_1 + 0x15b78),0);
    if ((((((((int)uVar14 != 0) || (uVar14 = FUN_1005dbd48(param_1 + 0x15b80,0), (int)uVar14 != 0))
           || (uVar14 = FUN_1005dbd48(param_1 + 0x15b88,0), (int)uVar14 != 0)) ||
          (((uVar14 = FUN_1005dbd48(param_1 + 0x15b90,0), (int)uVar14 != 0 ||
            (uVar14 = FUN_1005dbd48(param_1 + 0x15b98,0), (int)uVar14 != 0)) ||
           ((uVar14 = FUN_1005dbd48(param_1 + 0x15ba0,0), (int)uVar14 != 0 ||
            ((uVar14 = FUN_1005dbd48(param_1 + 89000,0), (int)uVar14 != 0 ||
             (uVar14 = FUN_1005dbd48(param_1 + 0x15bb0,0), (int)uVar14 != 0)))))))) ||
         (uVar14 = FUN_1005dbd48(param_1 + 0x15bb8,0), (int)uVar14 != 0)) ||
        ((((uVar14 = FUN_1005dbd48(param_1 + 0x15bc0,0), (int)uVar14 != 0 ||
           (uVar14 = FUN_1005dbd48(param_1 + 0x15bc8,0), (int)uVar14 != 0)) ||
          (uVar14 = FUN_1005dbd48(param_1 + 0x15bd0,0), (int)uVar14 != 0)) ||
         (((uVar14 = FUN_1005dbd48(param_1 + 0x15bd8,0), (int)uVar14 != 0 ||
           (uVar14 = FUN_1005dbd48(param_1 + 0x15be0,0), (int)uVar14 != 0)) ||
          (((uVar14 = FUN_1005dbd48(param_1 + 0x15be8,0), (int)uVar14 != 0 ||
            ((uVar14 = FUN_1005dbd48(param_1 + 0x15bf0,0), (int)uVar14 != 0 ||
             (uVar14 = FUN_1005dbd48(param_1 + 0x15bf8,0), (int)uVar14 != 0)))) ||
           (uVar14 = FUN_1005dbd48(param_1 + 0x15c00,0), (int)uVar14 != 0)))))))) ||
       (uVar14 = FUN_10056b320(param_1,*(undefined4 *)(param_1 + 0x6c0),
                               *(undefined4 *)(param_1 + 0x6c4)), (int)uVar14 != 0))
    goto LAB_1005f7ba4;
    FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x338,
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                  ,0xa32,0,0);
    lVar6 = FUN_1005dee1c();
    *(long *)(param_1 + 0x700) = lVar6;
    if (lVar6 == 0) {
      uVar14 = 0x26;
      goto LAB_1005f7ba4;
    }
    *(long *)(lVar6 + 0x40) = param_1;
    *(undefined4 *)(param_1 + 0x147f0) = 0;
    plVar9 = (long *)(param_1 + 0x1483fU & 0xfffffffffffffff0);
    plVar9[3] = 0;
    plVar9[4] = 0;
    plVar9[6] = 0;
    plVar9[7] = 0;
    *(long **)(param_1 + 0x14828) = plVar9;
    *plVar9 = param_1;
    *(undefined4 *)(plVar9 + 6) = 1;
    *(undefined4 *)(plVar9 + 1) = 0x400;
    *(undefined4 *)((long)plVar9 + 0xc) = 0;
    *(undefined4 *)(plVar9 + 2) = 0x400;
    lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x2010,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                          ,0xa41,0);
    lVar10 = *(long *)(param_1 + 0x14828);
    *(long *)(lVar10 + 0x18) = lVar6;
    if (lVar6 == 0) {
      uVar14 = 0x26;
      goto LAB_1005f7ba4;
    }
    *(ulong *)(lVar10 + 0x20) = lVar6 + 0xfU & 0xfffffffffffffff0;
    uVar14 = FMOD::ExpandingPool<FMOD::DSPConnectionI>::init
                       ((SystemI *)(param_1 + 0x790),(int)param_1,0x400,0x200,1,true);
    if (((((int)uVar14 != 0) ||
         (uVar14 = FUN_1005d82c0(param_1 + 0x14f68,0,0x40000,1,0), (int)uVar14 != 0)) ||
        (uVar14 = FUN_1005d82c0(param_1 + 0x148b8,0,0x2000,1,0), (int)uVar14 != 0)) ||
       (uVar14 = FUN_10057004c(param_1), (int)uVar14 != 0)) goto LAB_1005f7ba4;
    *(undefined4 *)(param_1 + 0x15cf0) = *(undefined4 *)(param_1 + 0x6c0);
    *(undefined4 *)(param_1 + 0x15cf4) = *(undefined4 *)(param_1 + 0x6c4);
    *(undefined8 *)(param_1 + 0x6d4) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x6cc) = 0xffffffffffffffff;
    FUN_1005f6610(param_1,*(undefined4 *)(param_1 + 0x6c8),0,0,(undefined8 *)(param_1 + 0x6cc),0,0,0
                 );
    lVar6 = *(long *)(param_1 + 0x6b8);
    if (*(code **)(lVar6 + 0x250) != (code *)0x0) {
      local_74 = *(int *)(param_1 + 0x708);
      local_78 = *piVar1;
      local_7c = 2;
      if (local_78 < 1000) {
        local_80 = 1;
        switch(local_78) {
        case 1:
          local_80 = *(int *)(param_1 + 0x70c);
          break;
        case 2:
          break;
        case 3:
          local_80 = 2;
          break;
        case 4:
        case 5:
        case 6:
          local_80 = local_78;
          break;
        case 7:
          local_80 = 8;
          break;
        default:
switchD_1005f7b8c_default:
          local_80 = 0;
        }
      }
      else {
        if (local_78 != 1000) goto switchD_1005f7b8c_default;
        local_80 = 2;
      }
      lVar10 = 0;
      if (lVar6 != 0) {
        lVar10 = lVar6 + 8;
      }
      uVar2 = *(uint *)(param_1 + 0x710);
      uVar3 = 0;
      if (uVar2 != 0) {
        uVar3 = *(uint *)(param_1 + 0x714) / uVar2;
      }
      in_stack_ffffffffffffff10 = CONCAT44((int)((ulong)in_stack_ffffffffffffff10 >> 0x20),uVar3);
      uVar14 = (**(code **)(lVar6 + 0x250))
                         (lVar10,*(undefined4 *)(param_1 + 0x6c8),param_3,&local_74,&local_78,
                          &local_80,&local_7c,uVar2,in_stack_ffffffffffffff10,param_4);
      if ((int)uVar14 == 0x34) {
        lVar10 = *(long *)(param_1 + 0x6b8);
        lVar6 = 0;
        if (lVar10 != 0) {
          lVar6 = lVar10 + 8;
        }
        uVar14 = (**(code **)(lVar10 + 0x268))(lVar6);
        uVar15 = (undefined4)((ulong)in_stack_ffffffffffffff10 >> 0x20);
        if (((int)uVar14 != 0) || (uVar14 = FUN_10056b320(param_1,2,0), (int)uVar14 != 0))
        goto LAB_1005f7ba4;
        local_74 = *(int *)(param_1 + 0x708);
        local_78 = *piVar1;
        local_7c = 2;
        if (local_78 < 1000) {
          local_80 = 1;
          switch(local_78) {
          case 1:
            local_80 = *(int *)(param_1 + 0x70c);
            break;
          case 2:
            break;
          case 3:
            local_80 = 2;
            break;
          case 4:
          case 5:
          case 6:
            local_80 = local_78;
            break;
          case 7:
            local_80 = 8;
            break;
          default:
switchD_1005f7cac_default:
            local_80 = 0;
          }
        }
        else {
          if (local_78 != 1000) goto switchD_1005f7cac_default;
          local_80 = 2;
        }
        lVar10 = *(long *)(param_1 + 0x6b8);
        lVar6 = 0;
        if (lVar10 != 0) {
          lVar6 = lVar10 + 8;
        }
        uVar2 = *(uint *)(param_1 + 0x710);
        uVar3 = 0;
        if (uVar2 != 0) {
          uVar3 = *(uint *)(param_1 + 0x714) / uVar2;
        }
        in_stack_ffffffffffffff10 = CONCAT44(uVar15,uVar3);
        uVar14 = (**(code **)(lVar10 + 0x250))
                           (lVar6,*(undefined4 *)(param_1 + 0x6c8),param_3,&local_74,&local_78,
                            &local_80,&local_7c,uVar2,in_stack_ffffffffffffff10,0);
      }
      if ((int)uVar14 != 0) goto LAB_1005f7ba4;
      if (0x2cec0 < local_74 - 8000U) {
        uVar14 = 0x1c;
        goto LAB_1005f7ba4;
      }
      if (6 < local_78 - 1U) {
        uVar14 = 0x1c;
        goto LAB_1005f7ba4;
      }
      if (4 < local_7c - 1U) {
        uVar14 = 0x1c;
        goto LAB_1005f7ba4;
      }
      if (0x1f < local_80 - 1U) {
        uVar14 = 0x1c;
        goto LAB_1005f7ba4;
      }
      iVar5 = 1;
      switch(local_78 - 1U) {
      case 0:
        goto switchD_1005f7dc4_caseD_0;
      case 1:
        break;
      case 2:
        iVar5 = 2;
        break;
      case 3:
      case 4:
      case 5:
        iVar5 = local_78;
        break;
      case 6:
        iVar5 = 8;
        break;
      default:
        iVar5 = 0;
      }
      if (local_80 != iVar5) {
        uVar14 = 0x1c;
        goto LAB_1005f7ba4;
      }
switchD_1005f7dc4_caseD_0:
      lVar6 = *(long *)(param_1 + 0x6b8);
      *(int *)(lVar6 + 0x5c) = local_74;
      *(int *)(lVar6 + 0x48) = local_7c;
      *(int *)(lVar6 + 0x4c) = local_78;
      *(int *)(lVar6 + 0x50) = local_80;
    }
    uVar14 = FUN_10056f548(param_1,*piVar1,*(undefined4 *)(param_1 + 0x70c));
    if ((int)uVar14 == 0) {
      if (*(int *)(*(long *)(param_1 + 0x6b8) + 0x5c) == *(int *)(param_1 + 0x708)) {
LAB_1005f7f8c:
        uVar14 = FUN_10056a95c(param_1,"FMOD master",(undefined8 *)(param_1 + 0x15d08),1);
        if (((int)uVar14 == 0) &&
           (uVar14 = FUN_1005f878c(param_1,"FMOD master",param_1 + 0x15d48), (int)uVar14 == 0)) {
          uVar14 = FUN_1006373fc(param_1 + 0x15630,*(undefined8 *)(param_1 + 0x15d08),
                                 *(undefined8 *)(param_1 + 0x15b78));
          if (((int)uVar14 == 0) &&
             (local_60 = param_1 + 0x15630,
             uVar14 = (**(code **)(**(long **)(param_1 + 0x700) + 0x10))
                                (*(long **)(param_1 + 0x700),*(undefined4 *)(param_1 + 0x15ce4)),
             (int)uVar14 == 0)) {
            iVar5 = 2;
            if (1 < *(int *)(param_1 + 0x70c)) {
              iVar5 = *(int *)(param_1 + 0x70c);
            }
            *(int *)(param_1 + 84000) = iVar5;
            *(long *)(param_1 + 0x14800) = param_1 + 0x147f8;
            *(long *)(param_1 + 0x147f8) = param_1 + 0x147f8;
            *(undefined8 *)(param_1 + 0x14808) = 0;
            uVar14 = FUN_10056b5f8(param_1);
            if ((int)uVar14 == 0) {
              plVar9 = (long *)(param_1 + 0x15670);
              puVar7 = (undefined8 *)*plVar9;
              if (puVar7 != (undefined8 *)0x0) {
                in_stack_ffffffffffffff10 = 0;
                iVar5 = (**(code **)*puVar7)
                                  (puVar7,param_1,*(undefined4 *)(param_1 + 0x710),
                                   *(undefined4 *)(param_1 + 0x708),*piVar1,
                                   *(undefined4 *)(param_1 + 0x70c),
                                   *(undefined4 *)(*(long *)(param_1 + 0x6b8) + 0x4c),
                                   *(undefined4 *)(*(long *)(param_1 + 0x6b8) + 0x50),0);
                if (iVar5 != 0) {
                  uVar14 = (**(code **)(*(long *)*plVar9 + 8))();
                  if ((int)uVar14 == 0) {
                    puVar7 = (undefined8 *)
                             FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0xd0,
                                           "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                                           ,0xafb,0);
                    puVar7[5] = puVar7 + 4;
                    puVar7[6] = 0;
                    puVar7[4] = puVar7 + 4;
                    puVar7[9] = 0;
                    puVar7[0xb] = 0;
                    *(undefined2 *)(puVar7 + 10) = 0;
                    *(undefined2 *)((long)puVar7 + 0x52) = 0;
                    *(undefined2 *)(puVar7 + 0xc) = 0;
                    *(undefined2 *)((long)puVar7 + 0x62) = 0;
                    puVar7[0x18] = 0;
                    puVar7[7] = puVar7 + 7;
                    puVar7[8] = puVar7 + 7;
                    *puVar7 = &PTR_FUN_1014a1878;
                    *(undefined2 *)(puVar7 + 0x17) = 0;
                    *(undefined2 *)((long)puVar7 + 0xba) = 0;
                    puVar7[3] = 0;
                    puVar7[0xe] = 0;
                    puVar7[0xf] = 0;
                    puVar7[0xd] = 0;
                    *plVar9 = (long)puVar7;
                    if (puVar7 == (undefined8 *)0x0) {
                      uVar14 = 0x26;
                    }
                    else {
                      in_stack_ffffffffffffff10 = 0;
                      uVar14 = FUN_10055ea0c(puVar7,param_1,*(undefined4 *)(param_1 + 0x710),
                                             *(undefined4 *)(param_1 + 0x708),*piVar1,
                                             *(undefined4 *)(param_1 + 0x70c),
                                             *(undefined4 *)(*(long *)(param_1 + 0x6b8) + 0x4c),
                                             *(undefined4 *)(*(long *)(param_1 + 0x6b8) + 0x50),0);
                      if ((int)uVar14 == 0) goto LAB_1005f8184;
                    }
                  }
                  goto LAB_1005f7ba4;
                }
              }
LAB_1005f8184:
              FUN_1005ddf50(*(undefined8 *)(param_1 + 0x6b8));
              uVar15 = (undefined4)in_stack_ffffffffffffff10;
              if ((int)uVar12 < 1) {
                if (uVar12 != 0) {
LAB_1005f81f0:
                  lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),uVar12 * 0x270,
                                        "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                                        ,0xb28,0);
                  uVar15 = (undefined4)in_stack_ffffffffffffff10;
                  *(long *)(param_1 + 0x1b0) = lVar6;
                  if (lVar6 == 0) {
                    uVar14 = 0x26;
                    goto LAB_1005f7ba4;
                  }
                  *(uint *)(param_1 + 0x1a8) = uVar12;
                  if (0 < (int)uVar12) {
                    lVar10 = 0;
                    lVar13 = 0;
                    while( true ) {
                      FUN_100583c48(lVar6 + lVar10);
                      FUN_100583cd0(*(long *)(param_1 + 0x1b0) + lVar10,lVar13,param_1);
                      lVar11 = *(long *)(param_1 + 0x558);
                      lVar6 = *(long *)(param_1 + 0x1b0) + lVar10;
                      *(long *)(lVar6 + 0x130) = lVar11;
                      *(long *)(lVar6 + 0x138) = param_1 + 0x558;
                      *(long *)(lVar11 + 8) = lVar6 + 0x130;
                      **(long **)(lVar6 + 0x138) = lVar6 + 0x130;
                      FUN_100583d28(lVar6,0,0,0);
                      uVar15 = (undefined4)in_stack_ffffffffffffff10;
                      lVar13 = lVar13 + 1;
                      if (*(int *)(param_1 + 0x1a8) <= lVar13) break;
                      lVar6 = *(long *)(param_1 + 0x1b0);
                      lVar10 = lVar10 + 0x270;
                    }
                  }
                }
                if ((*(char *)(param_1 + 0x16408) == '\0') && ((*(byte *)(param_1 + 0x48) & 1) == 0)
                   ) {
                  uVar14 = FUN_1005fb770(param_1 + 0x162a8,"FMOD stream thread",thunk_FUN_100571c38,
                                         param_1,2,2,0,*(undefined4 *)(param_1 + 0x15c80),
                                         CONCAT44(10,uVar15) & 0xffffffffffffff00,param_1,1);
                  if ((int)uVar14 != 0) goto LAB_1005f7ba4;
                  *(char *)(param_1 + 0x16408) = '\x01';
                }
                if (*(int *)(param_1 + 0x15c28) != 0) {
                  uVar14 = FUN_1005a6e2c();
                  uVar14 = FUN_10056bf00(param_1,2,uVar14,*(int *)(param_1 + 0x15c28),2);
                  if ((int)uVar14 != 0) goto LAB_1005f7ba4;
                }
                if (*(int *)(param_1 + 0x15c24) != 0) {
                  uVar14 = FUN_100596b8c();
                  uVar14 = FUN_10056bf00(param_1,3,uVar14,*(int *)(param_1 + 0x15c24),2);
                  if ((int)uVar14 != 0) goto LAB_1005f7ba4;
                }
                if (*(int *)(param_1 + 0x15c30) != 0) {
                  uVar14 = FUN_100623c30();
                  uVar14 = FUN_10056bf00(param_1,5,uVar14,*(int *)(param_1 + 0x15c30),2);
                  if ((int)uVar14 != 0) goto LAB_1005f7ba4;
                }
                if (*(int *)(param_1 + 0x15c38) != 0) {
                  uVar14 = FUN_10057323c();
                  FUN_10056bf00(param_1,7,uVar14,*(int *)(param_1 + 0x15c38),2);
                }
                *(undefined4 *)(param_1 + 0x166d8) = 0x447a0000;
                *(undefined4 *)(param_1 + 0x166dc) = 0x40e00000;
                *(undefined4 *)(param_1 + 0x166e0) = 0x41300000;
                *(undefined4 *)(param_1 + 0x166e4) = 0x459c4000;
                *(undefined4 *)(param_1 + 0x166e8) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x166ec) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x166f0) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x166f4) = 0x437a0000;
                *(undefined4 *)(param_1 + 0x166f8) = 0;
                *(undefined4 *)(param_1 + 0x166fc) = 0x41a00000;
                *(undefined4 *)(param_1 + 0x16700) = 0x42c00000;
                *(undefined4 *)(param_1 + 0x16704) = 0xc2a00000;
                *(undefined4 *)(param_1 + 0x16708) = 0x447a0000;
                *(undefined4 *)(param_1 + 0x1670c) = 0x40e00000;
                *(undefined4 *)(param_1 + 0x16710) = 0x41300000;
                *(undefined4 *)(param_1 + 0x16714) = 0x459c4000;
                *(undefined4 *)(param_1 + 0x16718) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x1671c) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x16720) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x16724) = 0x437a0000;
                *(undefined4 *)(param_1 + 0x16728) = 0;
                *(undefined4 *)(param_1 + 0x1672c) = 0x41a00000;
                *(undefined4 *)(param_1 + 0x16730) = 0x42c00000;
                *(undefined4 *)(param_1 + 0x16734) = 0xc2a00000;
                *(undefined4 *)(param_1 + 0x16738) = 0x447a0000;
                *(undefined4 *)(param_1 + 0x1673c) = 0x40e00000;
                *(undefined4 *)(param_1 + 0x16740) = 0x41300000;
                *(undefined4 *)(param_1 + 0x16744) = 0x459c4000;
                *(undefined4 *)(param_1 + 0x16748) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x1674c) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x16750) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x16754) = 0x437a0000;
                *(undefined4 *)(param_1 + 0x16758) = 0;
                *(undefined4 *)(param_1 + 0x1675c) = 0x41a00000;
                *(undefined4 *)(param_1 + 92000) = 0x42c00000;
                *(undefined4 *)(param_1 + 0x16764) = 0xc2a00000;
                *(undefined4 *)(param_1 + 0x16768) = 0x447a0000;
                *(undefined4 *)(param_1 + 0x1676c) = 0x40e00000;
                *(undefined4 *)(param_1 + 0x16770) = 0x41300000;
                *(undefined4 *)(param_1 + 0x16774) = 0x459c4000;
                *(undefined4 *)(param_1 + 0x16778) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x1677c) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x16780) = 0x42c80000;
                *(undefined4 *)(param_1 + 0x16784) = 0x437a0000;
                *(undefined4 *)(param_1 + 0x16788) = 0;
                *(undefined4 *)(param_1 + 0x1678c) = 0x41a00000;
                *(undefined4 *)(param_1 + 0x16790) = 0x42c00000;
                *(undefined4 *)(param_1 + 0x16794) = 0xc2a00000;
                if ((*(byte *)(param_1 + 0x4a) & 1) != 0) {
                  puVar7 = (undefined8 *)(param_1 + 0x167b0);
                  uVar14 = FUN_100555c6c(puVar7,1,*(undefined2 *)(param_1 + 0x15c6c));
                  if ((((int)uVar14 != 0) ||
                      (uVar14 = FUN_100554e7c(*puVar7,param_1), (int)uVar14 != 0)) ||
                     (uVar14 = FUN_100573588(*puVar7,param_1), (int)uVar14 != 0))
                  goto LAB_1005f7ba4;
                }
                uVar14 = FUN_100631b38(param_1 + 0x167b8,param_1);
                if ((int)uVar14 == 0) {
                  *(long *)(param_1 + 0x15d98) = param_1 + 0x15d90;
                  *(long *)(param_1 + 0x15d90) = param_1 + 0x15d90;
                  *(undefined8 *)(param_1 + 0x15da0) = 0;
                  *(undefined1 *)(param_1 + 8) = 1;
                  return 0;
                }
              }
              else {
                FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x338,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                              ,0xb14,0,0);
                lVar6 = FUN_1005de3ec();
                *(long *)(param_1 + 0x6f8) = lVar6;
                if (lVar6 == 0) {
                  uVar14 = 0x26;
                }
                else {
                  *(long *)(lVar6 + 0x40) = param_1;
                  uVar14 = FUN_1005de42c(lVar6,param_2);
                  if ((int)uVar14 == 0) goto LAB_1005f81f0;
                }
              }
            }
          }
        }
      }
      else {
        local_84 = 1;
        local_90 = *(undefined4 *)(param_1 + 0x710);
        local_8c = *(undefined4 *)(*(long *)(param_1 + 0x6b8) + 0x50);
        local_88 = 5;
        puVar7 = (undefined8 *)FUN_1005c1484();
        local_a0 = puVar7[6];
        local_b0 = puVar7[4];
        uStack_b8 = puVar7[3];
        local_c0 = puVar7[2];
        uStack_c8 = puVar7[1];
        local_d0 = *puVar7;
        puStack_a8 = &local_90;
        FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x288,
                      "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                      ,0xa9c,0);
        plVar8 = (long *)FUN_1005c14ac();
        puVar4 = PTR_DAT_1014441c0;
        plVar8[0x50] = 0;
        plVar8[0x4f] = 0;
        plVar8[0x4e] = 0;
        plVar8[0x4a] = (long)(plVar8 + 0x4b);
        *plVar8 = (long)(puVar4 + 0x10);
        plVar8[0x4d] = 0;
        plVar8[0x4c] = 0;
        plVar8[0x4b] = 0;
        plVar9 = (long *)(param_1 + 0x15678);
        *plVar9 = (long)plVar8;
        if (plVar8 == (long *)0x0) {
          uVar14 = 0x26;
        }
        else {
          plVar8[0x13] = param_1;
          uVar14 = FUN_1005c934c(plVar8 + 1,&local_d0);
          if ((int)uVar14 == 0) {
            lVar10 = *(long *)(param_1 + 0x6b8);
            lVar6 = *plVar9;
            *(float *)(lVar6 + 0x1d8) = (float)*(int *)(lVar10 + 0x5c);
            *(undefined4 *)(lVar6 + 0x240) = 0xffffffff;
            *(undefined4 *)(lVar6 + 0x244) = 0;
            *(code **)(lVar6 + 0x218) = FUN_1005dccd8;
            *(long *)(lVar6 + 0x1b0) = lVar10;
            uVar14 = FUN_1005c2094((float)*(int *)(param_1 + 0x708));
            if ((((int)uVar14 == 0) &&
                (uVar14 = (**(code **)(*(long *)*plVar9 + 8))((long *)*plVar9,0,0,0),
                (int)uVar14 == 0)) && (uVar14 = FUN_1005c986c(*plVar9 + 8,1,1), (int)uVar14 == 0))
            goto LAB_1005f7f8c;
          }
        }
      }
    }
  }
  else {
    uVar14 = 0x1b;
  }
LAB_1005f7ba4:
  if (local_58 == '\0') {
    return uVar14;
  }
LAB_1005f7bac:
  FUN_10063d228(&local_70,1);
  return uVar14;
}




undefined8 FUN_1005f8778(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    uVar1 = FUN_10056a95c();
    return uVar1;
  }
  return 0x1f;
}




undefined8 FUN_1005f878c(long param_1,long param_2,long *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if (param_3 == (long *)0x0) {
    return 0x1f;
  }
  lVar4 = *(long *)(PTR_DAT_10186d408 + 0x50);
  plVar1 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x80,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                                 ,0x1094,0);
  FUN_1005e94c0();
  if (plVar1 == (long *)0x0) {
LAB_1005f887c:
    uVar2 = 0x26;
  }
  else {
    FUN_1005dbee4(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
    lVar3 = *(long *)(param_1 + 0x15d68);
    *plVar1 = lVar3;
    plVar1[1] = param_1 + 0x15d68;
    *(long **)(lVar3 + 8) = plVar1;
    *(long **)plVar1[1] = plVar1;
    plVar1[3] = param_1;
    FUN_1005dbf14(*(undefined8 *)(PTR_DAT_10186d408 + 0x50));
    if (param_2 == 0) {
      plVar1[0xc] = 0;
    }
    else {
      lVar3 = FUN_1005ed2f4(param_2);
      plVar1[0xc] = lVar3;
      if (lVar3 == 0) {
        if (plVar1 != (long *)0x0) {
          if (lVar4 == 0) {
            FUN_1005e94fc(plVar1);
          }
          else {
            FUN_1005dbee4(lVar4);
            FUN_1005e94fc(plVar1);
            FUN_1005dbf14(lVar4);
          }
        }
        goto LAB_1005f887c;
      }
    }
    uVar2 = 0;
    *param_3 = (long)plVar1;
  }
  return uVar2;
}




void FUN_1005f8894(undefined8 param_1)

{
  FUN_100570cdc(param_1,1);
  return;
}




undefined8 FUN_1005f889c(float param_1,float param_2,long param_3,uint param_4,undefined1 param_5)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  
  if ((((uint)param_1 & 0x7f800000) == 0x7f800000) || (((uint)param_2 & 0x7f800000) == 0x7f800000))
  {
    return 0x1d;
  }
  if (*(int *)(param_3 + 0x160b0) == 5) {
    if (param_4 == 3) {
      return 0x1f;
    }
    uVar2 = param_4 - ((param_4 & 0xfffffffe) == 4);
  }
  else {
    uVar2 = param_4;
    if (*(int *)(param_3 + 0x160b0) == 4) {
      if ((param_4 & 0xfffffffe) == 2) {
        return 0x1f;
      }
      uVar2 = param_4 - 2;
      if ((param_4 & 0xfffffffe) != 4) {
        uVar2 = param_4;
      }
    }
  }
  if (*(int *)(param_3 + 0x70c) <= (int)uVar2) {
    return 0x1f;
  }
  lVar3 = param_3 + (long)(int)uVar2 * 0x2c;
  *(uint *)(lVar3 + 0x160b4) = param_4;
  *(float *)(lVar3 + 0x160b8) = param_1;
  *(undefined4 *)(lVar3 + 0x160bc) = 0;
  *(float *)(lVar3 + 0x160c0) = param_2;
  *(undefined1 *)(lVar3 + 0x160d8) = param_5;
  if ((param_1 == 0.0) && (param_2 == 0.0)) {
    fVar4 = 0.0;
  }
  else {
    fVar4 = param_2;
    if (param_2 < 0.0) {
      fVar4 = -param_2;
    }
    fVar5 = param_1;
    if (param_1 < 0.0) {
      fVar5 = -param_1;
    }
    if (fVar5 <= fVar4) {
      fVar4 = param_1 / fVar4 + 1.0;
      if (0.0 <= param_2) goto LAB_1005f8a00;
      fVar5 = 6.0;
    }
    else {
      fVar4 = 3.0 - param_2 / fVar5;
      if (0.0 <= param_1) goto LAB_1005f8a00;
      fVar5 = 10.0;
    }
    fVar4 = fVar5 - fVar4;
  }
LAB_1005f8a00:
  *(float *)(param_3 + (long)(int)uVar2 * 0x2c + 0x160d0) = fVar4;
  uVar1 = FUN_10056fa34();
  return uVar1;
}




undefined8
FUN_1005f8a18(long param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,undefined1 *param_5)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x160b0) == 5) {
    if (param_2 == 3) {
      return 0x1f;
    }
    uVar1 = param_2 - ((param_2 & 0xfffffffe) == 4);
  }
  else {
    uVar1 = param_2;
    if (*(int *)(param_1 + 0x160b0) == 4) {
      if ((param_2 & 0xfffffffe) == 2) {
        return 0x1f;
      }
      uVar1 = param_2 - 2;
      if ((param_2 & 0xfffffffe) != 4) {
        uVar1 = param_2;
      }
    }
  }
  if (*(int *)(param_1 + 0x70c) <= (int)uVar1) {
    return 0x1f;
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + (long)(int)uVar1 * 0x2c + 0x160b8);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + (long)(int)uVar1 * 0x2c + 0x160c0);
  }
  if (param_5 == (undefined1 *)0x0) {
    return 0;
  }
  *param_5 = *(undefined1 *)(param_1 + (long)(int)uVar1 * 0x2c + 0x160d8);
  return 0;
}




undefined8 FUN_1005f8b10(long param_1,int param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    uVar1 = 0x1f;
    if ((param_3 < 9) && ((1 << (ulong)(param_3 & 0x1f) & 0x116U) != 0)) {
      uVar1 = 0;
      *(int *)(param_1 + 0x15efc) = param_2;
      *(uint *)(param_1 + 0x15f00) = param_3;
    }
    return uVar1;
  }
  return 0x1f;
}




undefined8 FUN_1005f8b64(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x15efc);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x15f00);
  }
  return 0;
}




undefined8 FUN_1005f8b94(float param_1,float param_2,float param_3,long param_4)

{
  undefined8 uVar1;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  if (((uint)param_2 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  if (((uint)param_3 & 0x7f800000) == 0x7f800000) {
    return 0x1d;
  }
  uVar1 = 0x1f;
  if (((0.0 <= param_1) && (0.0 < param_2)) && (0.0 <= param_3)) {
    uVar1 = 0;
    *(float *)(param_4 + 0x15a4c) = param_1;
    *(float *)(param_4 + 0x15a44) = param_2;
    *(float *)(param_4 + 0x15a48) = param_3;
  }
  return uVar1;
}




undefined8 FUN_1005f8c3c(long param_1,int param_2)

{
  if (7 < param_2 - 1U) {
    return 0x1f;
  }
  *(int *)(param_1 + 0x15a40) = param_2;
  return 0;
}




uint FUN_1005f8c6c(long param_1,uint param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (7 < param_2) {
    return 0x1f;
  }
  if (param_5 != (float *)0x0) {
    fVar2 = *param_5;
    fVar13 = param_5[1];
    uVar3 = 0x1d;
    uVar5 = uVar3;
    if (((uint)fVar2 & 0x7f800000) != 0x7f800000) {
      uVar5 = 0;
    }
    if (((uint)fVar13 & 0x7f800000) != 0x7f800000) {
      uVar3 = 0;
    }
    fVar9 = param_5[2];
    uVar4 = 0x1d;
    if (((uint)fVar9 & 0x7f800000) != 0x7f800000) {
      uVar4 = 0;
    }
    uVar4 = uVar3 | uVar5 | uVar4;
    if (uVar4 != 0) {
      return uVar4;
    }
    fVar11 = fVar2 * fVar2 + fVar13 * fVar13 + fVar9 * fVar9;
    if (fVar11 < 0.9) {
      return 0x24;
    }
    if (1.1 < fVar11) {
      return 0x24;
    }
    lVar8 = (long)(int)param_2;
    lVar6 = param_1 + lVar8 * 0x70;
    pfVar1 = (float *)(lVar6 + 0x15714);
    if (((*pfVar1 != fVar2) || (*(float *)(param_1 + lVar8 * 0x70 + 0x15718) != fVar13)) ||
       (*(float *)(param_1 + lVar8 * 0x70 + 0x1571c) != fVar9)) {
      *(undefined1 *)(param_1 + lVar8 * 0x70 + 0x1572d) = 1;
    }
    lVar8 = param_1 + lVar8 * 0x70;
    *(undefined4 *)(lVar6 + 0x1571c) = *(undefined4 *)(lVar8 + 0x15710);
    *(undefined8 *)pfVar1 = *(undefined8 *)(lVar8 + 0x15708);
    *(float *)(lVar8 + 0x15710) = param_5[2];
    *(undefined8 *)(lVar8 + 0x15708) = *(undefined8 *)param_5;
  }
  if (param_6 != (float *)0x0) {
    fVar2 = *param_6;
    fVar13 = param_6[1];
    uVar3 = 0x1d;
    uVar5 = uVar3;
    if (((uint)fVar2 & 0x7f800000) != 0x7f800000) {
      uVar5 = 0;
    }
    if (((uint)fVar13 & 0x7f800000) != 0x7f800000) {
      uVar3 = 0;
    }
    fVar9 = param_6[2];
    uVar4 = 0x1d;
    if (((uint)fVar9 & 0x7f800000) != 0x7f800000) {
      uVar4 = 0;
    }
    uVar4 = uVar3 | uVar5 | uVar4;
    if (uVar4 != 0) {
      return uVar4;
    }
    fVar11 = fVar2 * fVar2 + fVar13 * fVar13 + fVar9 * fVar9;
    if (fVar11 < 0.9) {
      return 0x24;
    }
    if (1.1 < fVar11) {
      return 0x24;
    }
    lVar8 = (long)(int)param_2;
    lVar6 = param_1 + lVar8 * 0x70;
    pfVar1 = (float *)(lVar6 + 0x156fc);
    if (((*pfVar1 != fVar2) || (*(float *)(param_1 + lVar8 * 0x70 + 0x15700) != fVar13)) ||
       (*(float *)(param_1 + lVar8 * 0x70 + 0x15704) != fVar9)) {
      *(undefined1 *)(param_1 + lVar8 * 0x70 + 0x1572d) = 1;
    }
    lVar8 = param_1 + lVar8 * 0x70;
    *(undefined4 *)(lVar6 + 0x15704) = *(undefined4 *)(lVar8 + 0x156f8);
    *(undefined8 *)pfVar1 = *(undefined8 *)(lVar8 + 0x156f0);
    *(float *)(lVar8 + 0x156f8) = param_6[2];
    *(undefined8 *)(lVar8 + 0x156f0) = *(undefined8 *)param_6;
  }
  if (param_3 != (float *)0x0) {
    uVar3 = 0x1d;
    uVar5 = uVar3;
    if (((uint)*param_3 & 0x7f800000) != 0x7f800000) {
      uVar5 = 0;
    }
    if (((uint)param_3[1] & 0x7f800000) != 0x7f800000) {
      uVar3 = 0;
    }
    uVar4 = 0x1d;
    if (((uint)param_3[2] & 0x7f800000) != 0x7f800000) {
      uVar4 = 0;
    }
    uVar4 = uVar3 | uVar5 | uVar4;
    if (uVar4 != 0) {
      return uVar4;
    }
    lVar8 = (long)(int)param_2;
    lVar6 = param_1 + lVar8 * 0x70;
    if (((*(float *)(lVar6 + 0x156cc) != *param_3) ||
        (*(float *)(param_1 + lVar8 * 0x70 + 0x156d0) != param_3[1])) ||
       (*(float *)(param_1 + lVar8 * 0x70 + 0x156d4) != param_3[2])) {
      *(undefined1 *)(param_1 + lVar8 * 0x70 + 0x1572c) = 1;
    }
    *(float *)(lVar6 + 0x156c8) = param_3[2];
    *(undefined8 *)(lVar6 + 0x156c0) = *(undefined8 *)param_3;
    uVar7 = *(undefined8 *)param_3;
    *(float *)(lVar6 + 0x156d4) = param_3[2];
    *(undefined8 *)(lVar6 + 0x156cc) = uVar7;
  }
  if (param_4 != (float *)0x0) {
    uVar3 = 0x1d;
    uVar5 = uVar3;
    if (((uint)*param_4 & 0x7f800000) != 0x7f800000) {
      uVar5 = 0;
    }
    if (((uint)param_4[1] & 0x7f800000) != 0x7f800000) {
      uVar3 = 0;
    }
    uVar4 = 0x1d;
    if (((uint)param_4[2] & 0x7f800000) != 0x7f800000) {
      uVar4 = 0;
    }
    uVar4 = uVar3 | uVar5 | uVar4;
    if (uVar4 != 0) {
      return uVar4;
    }
    lVar8 = (long)(int)param_2;
    lVar6 = param_1 + lVar8 * 0x70;
    pfVar1 = (float *)(lVar6 + 0x156e4);
    if (((*pfVar1 != *param_4) || (*(float *)(param_1 + lVar8 * 0x70 + 0x156e8) != param_4[1])) ||
       (*(float *)(param_1 + lVar8 * 0x70 + 0x156ec) != param_4[2])) {
      *(undefined1 *)(param_1 + lVar8 * 0x70 + 0x1572c) = 1;
    }
    lVar8 = param_1 + lVar8 * 0x70;
    *(undefined4 *)(lVar6 + 0x156ec) = *(undefined4 *)(lVar8 + 0x156e0);
    *(undefined8 *)pfVar1 = *(undefined8 *)(lVar8 + 0x156d8);
    *(float *)(lVar8 + 0x156e0) = param_4[2];
    *(undefined8 *)(lVar8 + 0x156d8) = *(undefined8 *)param_4;
  }
  lVar6 = param_1 + (long)(int)param_2 * 0x70;
  fVar9 = *(float *)(lVar6 + 0x156f0);
  fVar11 = *(float *)(lVar6 + 0x156f4);
  fVar10 = *(float *)(lVar6 + 0x15708);
  fVar12 = *(float *)(lVar6 + 0x1570c);
  fVar13 = *(float *)(lVar6 + 0x15710);
  fVar2 = *(float *)(lVar6 + 0x156f8);
  if ((*(byte *)(param_1 + 0x48) & 4) != 0) {
    fVar13 = -*(float *)(lVar6 + 0x15710);
    fVar2 = -*(float *)(lVar6 + 0x156f8);
  }
  fVar14 = fVar9 * fVar10 + fVar11 * fVar12 + fVar2 * fVar13;
  uVar5 = 0x24;
  if ((-0.01 <= fVar14) && (fVar14 <= 0.01)) {
    uVar5 = 0;
    param_1 = param_1 + (long)(int)param_2 * 0x70;
    *(float *)(param_1 + 0x15720) = fVar11 * fVar13 - fVar12 * fVar2;
    *(float *)(param_1 + 0x15724) = fVar10 * fVar2 - fVar9 * fVar13;
    *(float *)(param_1 + 0x15728) = fVar9 * fVar12 - fVar11 * fVar10;
  }
  return uVar5;
}




undefined8 FUN_1005f91d8(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x15a50) = param_2;
  return 0;
}




undefined8 FUN_1005f91ec(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x15a40);
    return 0;
  }
  return 0x1f;
}




undefined8
FUN_1005f9218(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,undefined8 *param_5,
             undefined8 *param_6)

{
  long lVar1;
  
  if (7 < param_2) {
    return 0x1f;
  }
  if (param_3 != (undefined8 *)0x0) {
    lVar1 = param_1 + (long)(int)param_2 * 0x70;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(lVar1 + 0x156c8);
    *param_3 = *(undefined8 *)(lVar1 + 0x156c0);
  }
  if (param_4 != (undefined8 *)0x0) {
    lVar1 = param_1 + (long)(int)param_2 * 0x70;
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(lVar1 + 0x156e0);
    *param_4 = *(undefined8 *)(lVar1 + 0x156d8);
  }
  if (param_5 != (undefined8 *)0x0) {
    lVar1 = param_1 + (long)(int)param_2 * 0x70;
    *(undefined4 *)(param_5 + 1) = *(undefined4 *)(lVar1 + 0x15710);
    *param_5 = *(undefined8 *)(lVar1 + 0x15708);
  }
  if (param_6 != (undefined8 *)0x0) {
    param_1 = param_1 + (long)(int)param_2 * 0x70;
    *(undefined4 *)(param_6 + 1) = *(undefined4 *)(param_1 + 0x156f8);
    *param_6 = *(undefined8 *)(param_1 + 0x156f0);
    return 0;
  }
  return 0;
}




undefined8 FUN_1005f92f8(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x15a4c);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x15a44);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0x15a48);
  }
  return 0;
}




undefined8 FUN_1005f933c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x6b8);
  if (lVar2 == 0) {
    uVar1 = 0x43;
  }
  else if (*(char *)(param_1 + 0x15d88) == '\0') {
    if ((*(code **)(lVar2 + 0x2f0) == (code *)0x0) ||
       (uVar1 = (**(code **)(lVar2 + 0x2f0))(lVar2 + 8,1), (int)uVar1 == 0)) {
      uVar1 = 0;
      *(char *)(param_1 + 0x15d88) = '\x01';
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}




undefined8 FUN_1005f93a4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x6b8);
  if (lVar2 == 0) {
    uVar1 = 0x43;
  }
  else if (*(char *)(param_1 + 0x15d88) == '\0') {
    uVar1 = 0;
  }
  else if ((*(code **)(lVar2 + 0x2f0) == (code *)0x0) ||
          (uVar1 = (**(code **)(lVar2 + 0x2f0))(lVar2 + 8,0), (int)uVar1 == 0)) {
    uVar1 = 0;
    *(char *)(param_1 + 0x15d88) = '\0';
  }
  return uVar1;
}




undefined8 FUN_1005f9408(undefined8 param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0x10812;
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005f9428(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 == 0) {
    return 0x1f;
  }
  lVar2 = *(long *)(param_1 + 0x6b8);
  if (lVar2 != 0) {
    if (*(code **)(lVar2 + 0x278) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001005f9440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(lVar2 + 0x278))(lVar2 + 8);
      return uVar1;
    }
    return 0;
  }
  return 0x43;
}




undefined8 FUN_1005f945c(long param_1,undefined4 *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x1ac);
  }
  if ((param_3 == 0) ||
     (uVar1 = FUN_100585c9c(*(undefined8 *)(*(long *)(param_1 + 0x700) + 0x38),param_3),
     (int)uVar1 == 0)) {
    uVar1 = 0;
  }
  return uVar1;
}




undefined8
FUN_1005f9494(long param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float *param_6)

{
  int iVar1;
  float fVar2;
  float local_44;
  
  iVar1 = FUN_1005fbcb8(param_1 + 0x718,&local_44);
  if (iVar1 == 0) {
    fVar2 = local_44 + 0.0;
    if (param_2 != (float *)0x0) {
      *param_2 = local_44;
    }
  }
  else {
    fVar2 = 0.0;
  }
  iVar1 = FUN_1005fbcb8(param_1 + 0x1640c,&local_44);
  if ((iVar1 == 0) && (fVar2 = fVar2 + local_44, param_3 != (float *)0x0)) {
    *param_3 = local_44;
  }
  iVar1 = FUN_1005fbcb8(param_1 + 0x16618,&local_44);
  if ((iVar1 == 0) && (fVar2 = fVar2 + local_44, param_4 != (float *)0x0)) {
    *param_4 = local_44;
  }
  iVar1 = FUN_1005fbcb8(param_1 + 0x15ca0,&local_44);
  if ((iVar1 == 0) && (fVar2 = fVar2 + local_44, param_5 != (float *)0x0)) {
    *param_5 = local_44;
  }
  if (param_6 != (float *)0x0) {
    *param_6 = fVar2;
  }
  return 0;
}




undefined8 FUN_1005f95c8(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x15c08);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x15c10);
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *(undefined8 *)(param_1 + 0x15c18);
  }
  return 0;
}




undefined8 FUN_1005f9618(long param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x6b8);
  if ((lVar1 == 0) || (*(code **)(lVar1 + 0x2e8) == (code *)0x0)) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = 0;
    }
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 0;
    }
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = 0;
    }
  }
  else {
    (**(code **)(lVar1 + 0x2e8))(lVar1 + 8,0,0,0,0,param_2,param_3,param_4);
  }
  return 0;
}




undefined8 FUN_1005f9688(long param_1,void *param_2,ulong param_3,uint *param_4,long *param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  long lVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 auStack_238 [232];
  long *local_150;
  undefined1 auStack_148 [232];
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar12 = 0x43;
  }
  else if (param_5 == (long *)0x0) {
    uVar12 = 0x1f;
  }
  else {
    uVar11 = (uint)param_3;
    if (((uVar11 >> 10 & 1) == 0) && (param_2 == (void *)0x0)) {
      uVar12 = 0x1f;
    }
    else {
      if (param_4 == (uint *)0x0) {
        puVar10 = (undefined1 *)0x0;
      }
      else {
        uVar1 = *param_4;
        if (0xe4 < uVar1 - 4 || (uVar1 & 3) != 0) {
          return 0x1f;
        }
        puVar10 = auStack_148;
        _memset(auStack_148,0,0xe8);
        _memcpy(auStack_148,param_4,(long)(int)uVar1);
      }
      *param_5 = 0;
      if ((uVar11 >> 0x10 & 1) == 0) {
        if (puVar10 == (undefined1 *)0x0) {
          uVar12 = FUN_10056d1cc(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0x15efc),
                                 *(undefined4 *)(param_1 + 0x15f00),0,1,param_5);
        }
        else {
          _memcpy(auStack_238,puVar10,0xe8);
          uVar12 = FUN_10056d1cc(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0x15efc),
                                 *(undefined4 *)(param_1 + 0x15f00),auStack_238,1,param_5);
          if (((long *)*param_5 != (long *)0x0) && (*(long *)(puVar10 + 0xc0) != 0)) {
            (**(code **)(*(long *)*param_5 + 0xd0))();
          }
        }
      }
      else {
        if ((uVar11 >> 7 & 1) == 0) {
          local_150 = (long *)0x0;
          uVar12 = FUN_1005df034(*(undefined8 *)(param_1 + 0x700),0,0,&local_150);
          plVar5 = local_150;
          if ((int)uVar12 != 0) {
            return uVar12;
          }
        }
        else {
          plVar5 = (long *)FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),400,
                                         "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                                         ,0xf47,0);
          FUN_1005e7cdc();
          if (plVar5 == (long *)0x0) {
            return 0x26;
          }
        }
        *param_5 = (long)plVar5;
        if (puVar10 == (undefined1 *)0x0) {
          iVar2 = 0;
          iVar3 = 0;
          iVar4 = 0x130;
        }
        else {
          iVar4 = *(int *)(puVar10 + 0x30) * 4 + 0x130;
          if (*(long *)(puVar10 + 0x50) == 0) {
            iVar2 = 0;
          }
          else {
            iVar2 = FUN_1005ecb6c();
            iVar2 = iVar2 + 1;
            iVar4 = iVar2 + iVar4;
          }
          if (*(long *)(puVar10 + 0x58) == 0) {
            iVar3 = 0;
          }
          else {
            iVar3 = FUN_1005ecb6c();
            iVar3 = iVar3 + 1;
            iVar4 = iVar3 + iVar4;
          }
        }
        lVar6 = FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar4,
                              "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                              ,0xf77,0);
        plVar5[0x20] = lVar6;
        if (lVar6 == 0) {
          uVar12 = 0x26;
        }
        else {
          if ((param_3 & 0x10000800) == 0) {
            if (param_2 != (void *)0x0) {
              iVar4 = FUN_1005ecb6c(param_2);
              pvVar7 = (void *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),iVar4 + 1,
                                             "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                                             ,0xf85,0,0);
              *(void **)plVar5[0x20] = pvVar7;
              _memcpy(pvVar7,param_2,(long)(iVar4 + 1));
              lVar6 = plVar5[0x20];
            }
          }
          else {
            *(void **)(lVar6 + 0x30) = param_2;
          }
          *(undefined4 *)(lVar6 + 8) = *(undefined4 *)(param_1 + 0x15efc);
          *(undefined4 *)(lVar6 + 0xc) = *(undefined4 *)(param_1 + 0x15f00);
          *(uint *)((long)plVar5 + 0x2c) = uVar11;
          plVar5[0x1a] = param_1;
          *(undefined4 *)(plVar5 + 0x21) = 1;
          if (puVar10 == (undefined1 *)0x0) {
            uVar9 = 0;
            plVar5[0x18] = 0;
            *(undefined1 *)(lVar6 + 0x120) = 0;
          }
          else {
            plVar5[0x18] = *(long *)(puVar10 + 0x68);
            _memcpy((void *)(lVar6 + 0x38),puVar10,0xe8);
            lVar6 = plVar5[0x20];
            *(undefined1 *)(lVar6 + 0x120) = 1;
            if (*(long *)(puVar10 + 0xc0) != 0) {
              (**(code **)(*plVar5 + 0xd0))(plVar5);
              lVar6 = plVar5[0x20];
            }
            uVar9 = *(undefined4 *)(puVar10 + 0xdc);
            pvVar7 = (void *)(lVar6 + 0x130);
            if (*(int *)(lVar6 + 0x68) != 0) {
              _memcpy(pvVar7,*(void **)(lVar6 + 0x60),(long)*(int *)(lVar6 + 0x68) << 2);
              lVar6 = plVar5[0x20];
              *(void **)(lVar6 + 0x60) = pvVar7;
              pvVar7 = (void *)((long)pvVar7 + (long)*(int *)(lVar6 + 0x68) * 4);
            }
            if (*(long *)(lVar6 + 0x88) != 0) {
              FUN_1005ecc98(pvVar7,*(long *)(lVar6 + 0x88),iVar2);
              lVar6 = plVar5[0x20];
              *(void **)(lVar6 + 0x88) = pvVar7;
              pvVar7 = (void *)((long)pvVar7 + (long)iVar2);
            }
            if (*(long *)(lVar6 + 0x90) != 0) {
              FUN_1005ecc98(pvVar7,*(long *)(lVar6 + 0x90),iVar3);
              lVar6 = plVar5[0x20];
              *(void **)(lVar6 + 0x90) = pvVar7;
            }
          }
          uVar12 = FUN_100579f94(param_1,uVar9,lVar6 + 0x10);
          if ((int)uVar12 == 0) {
            FUN_1005dbee4(*(undefined8 *)(*(long *)(plVar5[0x20] + 0x10) + 0x178));
            lVar6 = plVar5[0x20];
            *(long **)(lVar6 + 0x28) = plVar5;
            lVar8 = *(long *)(lVar6 + 0x10);
            uVar12 = *(undefined8 *)(lVar8 + 0x168);
            *(long *)(lVar6 + 0x18) = lVar8 + 0x160;
            *(undefined8 *)(lVar6 + 0x20) = uVar12;
            *(long *)(lVar8 + 0x168) = lVar6 + 0x18;
            **(long **)(lVar6 + 0x20) = lVar6 + 0x18;
            FUN_1005dbf14(*(undefined8 *)(lVar8 + 0x178));
            FUN_1005fba94(*(undefined8 *)(plVar5[0x20] + 0x10),0);
            uVar12 = 0;
          }
          else {
            *(undefined4 *)(plVar5 + 0x21) = 2;
            (**(code **)(*plVar5 + 0x18))(plVar5,1);
            *param_5 = 0;
          }
        }
      }
    }
  }
  return uVar12;
}




void FUN_1005f9af8(undefined8 param_1,undefined8 param_2,uint param_3)

{
  FUN_1005f9688(param_1,param_2,param_3 | 0x80);
  return;
}




undefined8 FUN_1005f9b00(long param_1,long param_2,long *param_3)

{
  undefined8 uVar1;
  
  if (param_3 == (long *)0x0) {
    uVar1 = 0x1f;
  }
  else {
    *param_3 = 0;
    if (param_2 == 0) {
      uVar1 = 0x1f;
    }
    else if (*(long *)(param_1 + 0x15a58) == 0) {
      uVar1 = 0x43;
    }
    else {
      uVar1 = FUN_1005e25cc(*(long *)(param_1 + 0x15a58),0,param_2,param_3);
      if ((int)uVar1 == 0) {
        uVar1 = 0;
        *(long *)(*param_3 + 0x90) = param_1;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1005f9b78(long param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 local_58;
  char *local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  plVar1 = (long *)(param_1 + 0x15a58);
  if (*plVar1 == 0) {
    uVar3 = 0x43;
  }
  else if (param_3 == (undefined8 *)0x0) {
    uVar3 = 0x1f;
  }
  else {
    *param_3 = 0;
    uVar3 = 0x1f;
    iVar2 = (int)param_2;
    if ((iVar2 != 0) && (iVar2 < 0x24)) {
      if (iVar2 == 1) {
        local_30 = 0;
        uStack_28 = 0;
        uStack_38 = 0;
        uStack_48 = 0;
        local_58 = 0;
        local_50 = "FMOD Mixer unit";
        local_40 = 1;
        uVar3 = FUN_10056b4fc(param_1,&local_58,0,param_3,1);
      }
      else {
        local_60 = 0;
        uVar3 = FUN_1005e24c8(*plVar1,param_2,&local_60);
        if ((int)uVar3 != 0) {
          return uVar3;
        }
        uVar3 = FUN_1005e25cc(*plVar1,local_60,0,param_3);
      }
      if ((int)uVar3 == 0) {
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}




undefined8
FUN_1005f9c54(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long *param_5)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long *plVar8;
  float fVar9;
  float local_80;
  int local_7c;
  long *local_78;
  
  local_78 = (long *)0x0;
  if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  if (param_2 == 0) {
    return 0x1f;
  }
  if (*(int *)(param_2 + 0x108) != 0) {
    return 0x2e;
  }
  if (*(int *)(param_2 + 0x24) == 0xb) {
    return 0x13;
  }
  lVar4 = *(long *)(param_2 + 0x110);
  if ((lVar4 != 0) && (-1 < *(int *)(lVar4 + 0x68))) {
    uVar5 = FUN_1005e9adc(lVar4,&local_7c);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*(int *)(*(long *)(param_2 + 0x110) + 0x68) <= local_7c) {
      iVar3 = *(int *)(*(long *)(param_2 + 0x110) + 0x6c);
      if (iVar3 == 0) {
        return 0x25;
      }
      if (iVar3 == 2) {
        plVar1 = (long *)(param_1 + 0x2e8);
        plVar8 = *(long **)(param_1 + 0x2e8);
        uVar7 = 0xffffffff;
        if (plVar8 == plVar1) {
          uVar5 = 0;
        }
        else {
          fVar9 = 9999.0;
          do {
            while( true ) {
              plVar2 = (long *)0x0;
              if (plVar8 != (long *)0x0) {
                plVar2 = plVar8 + -0x26;
              }
              if ((((plVar2[0x32] != 0) && (lVar4 = *(long *)(plVar2[0x32] + 0x28), lVar4 != 0)) &&
                  (*(long *)(lVar4 + 0x110) == *(long *)(param_2 + 0x110))) &&
                 ((**(code **)(*plVar2 + 0x40))(plVar2,&local_80), local_80 < fVar9)) break;
              plVar8 = (long *)*plVar8;
              if (plVar8 == plVar1) {
                uVar5 = 0;
                goto LAB_1005f9dd0;
              }
            }
            uVar5 = 0;
            uVar7 = (undefined4)plVar2[0x31];
            plVar8 = (long *)*plVar8;
            fVar9 = local_80;
            local_78 = plVar2;
          } while (plVar8 != plVar1);
        }
        goto LAB_1005f9dd0;
      }
      if (iVar3 == 1) {
        uVar5 = 1;
        uVar7 = 0xffffffff;
        goto LAB_1005f9dd0;
      }
    }
  }
  uVar5 = 0;
  uVar7 = 0xffffffff;
LAB_1005f9dd0:
  uVar6 = FUN_10056a560(param_1,uVar7,param_2,&local_78);
  if ((int)uVar6 == 0) {
    uVar6 = FUN_1005828e0(local_78,param_2,param_3,param_4,1,uVar5);
    if ((int)uVar6 == 0) {
      uVar6 = FUN_100581db0(local_78);
      if ((int)uVar6 == 0) {
        uVar6 = FUN_100581d64(local_78,1);
        if ((int)uVar6 == 0) {
          if (param_5 == (long *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            *param_5 = local_78[10];
          }
        }
        else if (param_5 != (long *)0x0) {
          *param_5 = 0;
        }
      }
      else if (param_5 != (long *)0x0) {
        *param_5 = 0;
      }
    }
    else {
      if (param_5 != (long *)0x0) {
        *param_5 = 0;
      }
      FUN_100582560(local_78,0x52);
    }
  }
  else if (param_5 != (long *)0x0) {
    *param_5 = 0;
  }
  return uVar6;
}




undefined8
FUN_1005f9ec4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined8 uVar1;
  long local_48;
  
  local_48 = 0;
  if (param_2 == 0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
    }
    uVar1 = FUN_10056a7bc(param_1,0xffffffff,param_2,&local_48);
    if (((int)uVar1 == 0) && (uVar1 = FUN_10056b560(param_1,param_2), (int)uVar1 == 0)) {
      uVar1 = FUN_100583198(local_48,param_2,param_3,param_4,1,0);
      if ((int)uVar1 == 0) {
        uVar1 = FUN_100581db0(local_48);
        if ((int)uVar1 == 0) {
          uVar1 = FUN_100581d64(local_48,1);
          if (((int)uVar1 == 0) && (param_5 != (undefined8 *)0x0)) {
            uVar1 = 0;
            *param_5 = *(undefined8 *)(local_48 + 0x50);
          }
        }
      }
      else {
        FUN_100582560(local_48,0x52);
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1005f9fc4(long param_1,uint param_2,ulong *param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x1f;
  if ((-1 < (int)param_2) && (param_3 != (ulong *)0x0)) {
    if (*(int *)(param_1 + 0x1a8) <= (int)param_2) {
      return 0x1f;
    }
    uVar1 = 0;
    *param_3 = (ulong)(*(int *)(param_1 + 0x15ce0) << 0x1d | (param_2 & 0xfff) << 0x11 | 0x1ffff);
  }
  return uVar1;
}




undefined8 FUN_1005fa010(long param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 0x15d08) != 0) {
    *param_2 = *(long *)(param_1 + 0x15d08);
    return 0;
  }
  *param_2 = 0;
  return 0x43;
}




undefined8 FUN_1005fa044(long param_1,long *param_2)

{
  if (param_2 == (long *)0x0) {
    return 0x1f;
  }
  if (*(long *)(param_1 + 0x15d48) != 0) {
    *param_2 = *(long *)(param_1 + 0x15d48);
    return 0;
  }
  *param_2 = 0;
  return 0x43;
}




undefined8
FUN_1005fa078(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,byte param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 local_70;
  long local_68;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  undefined8 local_40;
  uint local_34;
  
  if (param_4 == (long *)0x0) {
    uVar1 = 0x1f;
  }
  else if (*(short *)((long)param_4 + 0x1b4) == -1) {
    if (param_4[4] == 0) {
      uVar1 = 0x1f;
    }
    else if (*(long *)(*(long *)(param_1 + 0x6b8) + 0x2c0) == 0) {
      uVar1 = 0x44;
    }
    else {
      local_40 = 0;
      uVar1 = FUN_1005dd854();
      if ((int)uVar1 == 0) {
        local_48 = 0;
        uVar1 = (**(code **)(*(long *)param_4[4] + 0x118))((long *)param_4[4],0xfffffffc,&local_48);
        if ((int)uVar1 == 0) {
          local_50 = 0;
          uVar1 = (**(code **)(*param_4 + 0x118))(param_4,0xffffffff,&local_50);
          if ((int)uVar1 == 0) {
            FUN_1005ce188(local_40,local_50,&local_58,0,1,0);
            FUN_100614c04(local_58,local_34 | 0xfeed0000);
            if ((param_5 & 1) == 0) {
              FUN_1005cea38(local_50,&local_5c,0,1);
              if (0 < local_5c) {
                iVar2 = 0;
                do {
                  FUN_1005c96c0(local_50,iVar2,&local_68,&local_70,0,1);
                  if (local_68 == local_48) {
                    FUN_1006149c8(0,local_70,0,1,0);
                  }
                  iVar2 = iVar2 + 1;
                } while (iVar2 < local_5c);
              }
            }
            uVar1 = 0;
            *(byte *)((long)param_4 + 0x1b6) = param_5;
            *(undefined2 *)((long)param_4 + 0x1b4) = (undefined2)local_34;
          }
        }
      }
    }
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}




undefined8 FUN_1005fa1fc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x1f;
  }
  else if (*(short *)(param_2 + 0x1b4) == -1) {
    uVar1 = 0x1f;
  }
  else if (*(long *)(*(long *)(param_1 + 0x6b8) + 0x2c8) == 0) {
    uVar1 = 0x44;
  }
  else {
    FUN_1005801c8(param_2);
    uVar1 = 0;
    *(undefined2 *)(param_2 + 0x1b4) = 0xffff;
    *(undefined1 *)(param_2 + 0x1b6) = 0;
  }
  return uVar1;
}




undefined8 FUN_1005fa264(long param_1,undefined8 *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  plVar1 = (long *)FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x78,
                                 "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                                 ,0x125d,0,0);
  FUN_1005e3588();
  if (plVar1 == (long *)0x0) {
    uVar2 = 0x26;
  }
  else {
    uVar2 = FUN_1005e35d4(plVar1,param_1);
    if ((int)uVar2 == 0) {
      lVar3 = *(long *)(param_1 + 0x167a0);
      *plVar1 = param_1 + 0x16798;
      plVar1[1] = lVar3;
      *(long **)(param_1 + 0x167a0) = plVar1;
      *(long **)plVar1[1] = plVar1;
      plVar1[2] = (long)plVar1;
      uVar2 = 0;
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = plVar1;
      }
    }
    else {
      FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),plVar1,
                    "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                    ,0x1269);
    }
  }
  return uVar2;
}




undefined8 FUN_1005fa344(long param_1,uint param_2,float *param_3)

{
  undefined8 uVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  
  if (3 < param_2) {
    return 0x3b;
  }
  if (param_3 != (float *)0x0) {
    fVar3 = *param_3;
    fVar4 = 100.0;
    if ((100.0 <= fVar3) && (fVar4 = 20000.0, fVar3 <= 20000.0)) {
      fVar4 = fVar3;
    }
    lVar2 = (long)(int)param_2;
    *(float *)(param_1 + lVar2 * 0x30 + 0x166d8) = fVar4;
    fVar4 = param_3[1];
    if (0.0 <= fVar4) {
      fVar3 = 300.0;
      if (fVar4 <= 300.0) {
        fVar3 = fVar4;
      }
    }
    else {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x166dc) = fVar3;
    fVar4 = param_3[2];
    if (0.0 <= fVar4) {
      fVar3 = 100.0;
      if (fVar4 <= 100.0) {
        fVar3 = fVar4;
      }
    }
    else {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x166e0) = fVar3;
    fVar3 = param_3[3];
    fVar4 = 20.0;
    if ((20.0 <= fVar3) && (fVar4 = 20000.0, fVar3 <= 20000.0)) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x166e4) = fVar4;
    fVar3 = param_3[4];
    fVar4 = 10.0;
    if ((10.0 <= fVar3) && (fVar4 = 100.0, fVar3 <= 100.0)) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x166e8) = fVar4;
    fVar4 = param_3[5];
    if (0.0 <= fVar4) {
      fVar3 = 100.0;
      if (fVar4 <= 100.0) {
        fVar3 = fVar4;
      }
    }
    else {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x166ec) = fVar3;
    fVar4 = param_3[6];
    if (0.0 <= fVar4) {
      fVar3 = 100.0;
      if (fVar4 <= 100.0) {
        fVar3 = fVar4;
      }
    }
    else {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x166f0) = fVar3;
    fVar3 = param_3[7];
    fVar4 = 20.0;
    if ((20.0 <= fVar3) && (fVar4 = 1000.0, fVar3 <= 1000.0)) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x166f4) = fVar4;
    fVar3 = param_3[8];
    fVar4 = -36.0;
    if ((-36.0 <= fVar3) && (fVar4 = 12.0, fVar3 <= 12.0)) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x166f8) = fVar4;
    fVar3 = param_3[9];
    fVar4 = 20.0;
    if ((20.0 <= fVar3) && (fVar4 = 20000.0, fVar3 <= 20000.0)) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x166fc) = fVar4;
    fVar4 = param_3[10];
    if (0.0 <= fVar4) {
      fVar3 = 100.0;
      if (fVar4 <= 100.0) {
        fVar3 = fVar4;
      }
    }
    else {
      fVar3 = 0.0;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x16700) = fVar3;
    fVar3 = param_3[0xb];
    fVar4 = -80.0;
    if ((-80.0 <= fVar3) && (fVar4 = 20.0, fVar3 <= 20.0)) {
      fVar4 = fVar3;
    }
    *(float *)(param_1 + lVar2 * 0x30 + 0x16704) = fVar4;
  }
  uVar1 = FUN_10056c074();
  return uVar1;
}




undefined8 FUN_1005fa608(long param_1,uint param_2,float *param_3)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (param_3 == (float *)0x0) {
    return 0x1f;
  }
  if (3 < param_2) {
    return 0x3b;
  }
  lVar1 = (long)(int)param_2;
  fVar2 = *(float *)(param_1 + lVar1 * 0x30 + 0x166d8);
  fVar3 = 100.0;
  if ((100.0 <= fVar2) && (fVar3 = 20000.0, fVar2 <= 20000.0)) {
    fVar3 = fVar2;
  }
  *param_3 = fVar3;
  fVar3 = *(float *)(param_1 + lVar1 * 0x30 + 0x166dc);
  if (0.0 <= fVar3) {
    fVar2 = 300.0;
    if (fVar3 <= 300.0) {
      fVar2 = fVar3;
    }
  }
  else {
    fVar2 = 0.0;
  }
  param_3[1] = fVar2;
  fVar3 = *(float *)(param_1 + lVar1 * 0x30 + 0x166e0);
  if (0.0 <= fVar3) {
    fVar2 = 100.0;
    if (fVar3 <= 100.0) {
      fVar2 = fVar3;
    }
  }
  else {
    fVar2 = 0.0;
  }
  param_3[2] = fVar2;
  fVar2 = *(float *)(param_1 + lVar1 * 0x30 + 0x166e4);
  fVar3 = 20.0;
  if ((20.0 <= fVar2) && (fVar3 = 20000.0, fVar2 <= 20000.0)) {
    fVar3 = fVar2;
  }
  param_3[3] = fVar3;
  fVar2 = *(float *)(param_1 + lVar1 * 0x30 + 0x166e8);
  fVar3 = 10.0;
  if ((10.0 <= fVar2) && (fVar3 = 100.0, fVar2 <= 100.0)) {
    fVar3 = fVar2;
  }
  param_3[4] = fVar3;
  fVar3 = *(float *)(param_1 + lVar1 * 0x30 + 0x166ec);
  if (0.0 <= fVar3) {
    fVar2 = 100.0;
    if (fVar3 <= 100.0) {
      fVar2 = fVar3;
    }
  }
  else {
    fVar2 = 0.0;
  }
  param_3[5] = fVar2;
  fVar3 = *(float *)(param_1 + lVar1 * 0x30 + 0x166f0);
  if (0.0 <= fVar3) {
    fVar2 = 100.0;
    if (fVar3 <= 100.0) {
      fVar2 = fVar3;
    }
  }
  else {
    fVar2 = 0.0;
  }
  param_3[6] = fVar2;
  fVar2 = *(float *)(param_1 + lVar1 * 0x30 + 0x166f4);
  fVar3 = 20.0;
  if ((20.0 <= fVar2) && (fVar3 = 1000.0, fVar2 <= 1000.0)) {
    fVar3 = fVar2;
  }
  param_3[7] = fVar3;
  fVar2 = *(float *)(param_1 + lVar1 * 0x30 + 0x166f8);
  fVar3 = -36.0;
  if ((-36.0 <= fVar2) && (fVar3 = 12.0, fVar2 <= 12.0)) {
    fVar3 = fVar2;
  }
  param_3[8] = fVar3;
  fVar2 = *(float *)(param_1 + lVar1 * 0x30 + 0x166fc);
  fVar3 = 20.0;
  if ((20.0 <= fVar2) && (fVar3 = 20000.0, fVar2 <= 20000.0)) {
    fVar3 = fVar2;
  }
  param_3[9] = fVar3;
  fVar3 = *(float *)(param_1 + lVar1 * 0x30 + 0x16700);
  if (0.0 <= fVar3) {
    fVar2 = 100.0;
    if (fVar3 <= 100.0) {
      fVar2 = fVar3;
    }
  }
  else {
    fVar2 = 0.0;
  }
  param_3[10] = fVar2;
  fVar2 = *(float *)(param_1 + lVar1 * 0x30 + 0x16704);
  fVar3 = -80.0;
  if ((-80.0 <= fVar2) && (fVar3 = 20.0, fVar2 <= 20.0)) {
    fVar3 = fVar2;
  }
  param_3[0xb] = fVar3;
  return 0;
}




undefined8 FUN_1005fa8d4(undefined8 param_1)

{
  FUN_10057097c(param_1,0);
  return 0;
}




undefined8 FUN_1005fa8f0(undefined8 param_1)

{
  FUN_100570990(param_1,0);
  return 0;
}




undefined8 FUN_1005fa90c(long param_1)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (param_1 != 0) {
    FUN_10057097c(param_1,0xf);
  }
  iVar2 = *(int *)(param_1 + 0x6dc);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0x30;
    do {
      if (*(long *)(*(long *)(param_1 + 0x6e8) + lVar4) != 0) {
        uVar1 = FUN_1005dc7e8(*(undefined8 *)(param_1 + 0x6b8));
        if ((int)uVar1 != 0) goto LAB_1005fa988;
        iVar2 = *(int *)(param_1 + 0x6dc);
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + 0x38;
    } while (lVar3 < iVar2);
  }
  uVar1 = 0;
LAB_1005fa988:
  if (param_1 != 0) {
    FUN_100570990(param_1,0xf);
  }
  return uVar1;
}




void FUN_1005fa9b0(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  void *pvVar12;
  long *plVar13;
  long lVar14;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 auStack_168 [256];
  long local_68;
  
  lVar14 = *(long *)PTR____stack_chk_guard_101444218;
  local_68 = lVar14;
  if (*(char *)(param_1 + 8) == '\0') {
    uVar3 = 0x43;
    goto LAB_1005faddc;
  }
  local_18c = *(int *)(param_1 + 0x6e0);
  local_190 = 0;
  if (*(long *)(*(long *)(param_1 + 0x6b8) + 0x2f8) != 0) {
    local_194 = 0;
    FUN_1005dba24(&local_194);
    if ((*(int *)(param_1 + 0x6f4) == 0) || (999 < (uint)(local_194 - *(int *)(param_1 + 0x6f4)))) {
      *(int *)(param_1 + 0x6f4) = local_194;
      lVar5 = *(long *)(param_1 + 0x6b8);
      lVar8 = 0;
      if (lVar5 != 0) {
        lVar8 = lVar5 + 8;
      }
      uVar3 = (**(code **)(lVar5 + 0x2f8))(lVar8,&local_18c,&local_190);
      if ((int)uVar3 != 0) goto LAB_1005faddc;
    }
  }
  if ((local_190 == 0) && (local_18c == *(int *)(param_1 + 0x6e0))) {
    uVar3 = 0;
    goto LAB_1005faddc;
  }
  iVar11 = *(int *)(param_1 + 0x6dc);
  uVar6 = (ulong)iVar11;
  if (0 < iVar11) {
    lVar8 = *(long *)(param_1 + 0x6e8);
    if (iVar11 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = uVar6 & 0xfffffffffffffffe;
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        puVar9 = (uint *)(lVar8 + 0x50);
        uVar10 = uVar7;
        do {
          puVar9[-0xe] = puVar9[-0xe] & 0xfffffffe;
          *puVar9 = *puVar9 & 0xfffffffe;
          uVar10 = uVar10 - 2;
          puVar9 = puVar9 + 0x1c;
        } while (uVar10 != 0);
      }
      if (uVar6 == uVar7) goto LAB_1005faaf4;
    }
    puVar9 = (uint *)(lVar8 + uVar7 * 0x38 + 0x18);
    do {
      *puVar9 = *puVar9 & 0xfffffffe;
      uVar7 = uVar7 + 1;
      puVar9 = puVar9 + 0xe;
    } while ((long)uVar7 < (long)uVar6);
  }
LAB_1005faaf4:
  *(undefined4 *)(param_1 + 0x6e0) = 0;
  if (0 < local_18c) {
    iVar11 = 0;
    do {
      _memset(auStack_168,0,0x100);
      local_178 = 0;
      uStack_170 = 0;
      local_19c = 0;
      local_198 = 0;
      local_1a0 = 0;
      lVar8 = *(long *)(param_1 + 0x6b8);
      if (*(code **)(lVar8 + 0x300) == (code *)0x0) {
        uVar3 = 0x42;
        goto LAB_1005faddc;
      }
      lVar5 = 0;
      if (lVar8 != 0) {
        lVar5 = lVar8 + 8;
      }
      iVar1 = (**(code **)(lVar8 + 0x300))
                        (lVar5,iVar11,auStack_168,0x100,&local_178,&local_198,&local_19c,&local_1a0)
      ;
      if (iVar1 == 0) {
        local_188 = 0;
        uStack_180 = 0;
        iVar1 = _memcmp(&local_178,&local_188,0x10);
        if (iVar1 == 0) {
          uVar3 = 0x1c;
          goto LAB_1005faddc;
        }
        if (local_1a0 == 0) {
          if (local_19c < 1000) {
            local_1a0 = 1;
            switch(local_19c) {
            case 0:
              local_19c = 2;
              local_1a0 = 1;
              break;
            default:
switchD_1005fabb0_caseD_1:
              local_1a0 = 0;
              break;
            case 2:
              break;
            case 3:
              local_1a0 = 2;
              break;
            case 4:
            case 5:
            case 6:
              local_1a0 = local_19c;
              break;
            case 7:
              local_1a0 = 8;
            }
          }
          else {
            if (local_19c != 1000) goto switchD_1005fabb0_caseD_1;
            local_1a0 = 2;
          }
        }
        else if (local_1a0 - 1U < 8) {
          local_19c = *(int *)(&DAT_10115f990 + (long)(int)(local_1a0 - 1U) * 4);
        }
        else {
          local_19c = 1;
        }
        if (local_198 == 0) {
          local_198 = 48000;
        }
        iVar1 = *(int *)(param_1 + 0x6dc);
        if (0 < iVar1) {
          lVar8 = 0;
          lVar5 = *(long *)(param_1 + 0x6e8);
          pvVar12 = (void *)(lVar5 + 0x1c);
          do {
            iVar2 = _memcmp(pvVar12,&local_178,0x10);
            if (iVar2 == 0) {
              plVar13 = (long *)(lVar5 + lVar8 * 0x38);
              if (plVar13 != (long *)0x0) goto LAB_1005facd4;
              break;
            }
            lVar8 = lVar8 + 1;
            pvVar12 = (void *)((long)pvVar12 + 0x38);
          } while (lVar8 < iVar1);
        }
        if (iVar1 == *(int *)(param_1 + 0x6e4)) {
          FUN_10057097c(param_1,0xf);
          iVar1 = *(int *)(param_1 + 0x6e4) + 8;
          *(int *)(param_1 + 0x6e4) = iVar1;
          lVar8 = FUN_1005d7a98(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),
                                *(undefined8 *)(param_1 + 0x6e8),iVar1 * 0x38,
                                "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                                ,0x1364,0);
          *(long *)(param_1 + 0x6e8) = lVar8;
          if (lVar8 == 0) {
            FUN_100570990(param_1,0xf);
            uVar3 = 0x26;
            goto LAB_1005faddc;
          }
          _bzero((void *)((long)*(int *)(param_1 + 0x6e4) * 0x38 + lVar8 + -0x1c0),0x1c0);
          FUN_100570990(param_1,0xf);
          iVar1 = *(int *)(param_1 + 0x6dc);
        }
        *(int *)(param_1 + 0x6dc) = iVar1 + 1;
        plVar13 = (long *)(*(long *)(param_1 + 0x6e8) + (long)iVar1 * 0x38);
LAB_1005facd4:
        if (*plVar13 == 0) {
LAB_1005fad1c:
          lVar8 = FUN_1005ed2f4(auStack_168);
          *plVar13 = lVar8;
          if (lVar8 == 0) {
            uVar3 = 0x26;
            goto LAB_1005faddc;
          }
        }
        else {
          iVar1 = FUN_1005ed0c8(*plVar13,auStack_168);
          if (iVar1 != 0) {
            FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*plVar13,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                          ,0x1373);
            *plVar13 = 0;
            goto LAB_1005fad1c;
          }
          if (*plVar13 == 0) goto LAB_1005fad1c;
        }
        *(undefined8 *)((long)plVar13 + 0x24) = uStack_170;
        *(undefined8 *)((long)plVar13 + 0x1c) = local_178;
        *(int *)(plVar13 + 1) = iVar11;
        *(int *)((long)plVar13 + 0xc) = local_198;
        *(int *)((long)plVar13 + 0x14) = local_19c;
        *(int *)(plVar13 + 2) = local_1a0;
        uVar4 = 3;
        if (iVar11 != 0) {
          uVar4 = 1;
        }
        *(undefined4 *)(plVar13 + 3) = uVar4;
        *(int *)(param_1 + 0x6e0) = *(int *)(param_1 + 0x6e0) + 1;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < local_18c);
  }
  uVar3 = 0;
  *(undefined1 *)(param_1 + 0x6f0) = 1;
LAB_1005faddc:
  if (lVar14 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}




undefined8 FUN_1005fae50(long param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1005fa9b0();
  if ((int)uVar1 == 0) {
    if (param_2 != (undefined4 *)0x0) {
      *param_2 = *(undefined4 *)(param_1 + 0x6dc);
    }
    if (param_3 == (undefined4 *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      *param_3 = *(undefined4 *)(param_1 + 0x6e0);
    }
  }
  return uVar1;
}




undefined8
FUN_1005faea8(long param_1,int param_2,long param_3,undefined8 param_4,undefined8 *param_5,
             undefined4 *param_6,undefined4 *param_7,undefined4 *param_8,undefined4 *param_9)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1005fa9b0();
  if ((int)uVar2 == 0) {
    if (param_2 < 0) {
      uVar2 = 0x1f;
    }
    else if (param_2 < *(int *)(param_1 + 0x6dc)) {
      if (param_3 != 0) {
        FUN_1005ecc98(param_3,*(undefined8 *)(*(long *)(param_1 + 0x6e8) + (long)param_2 * 0x38),
                      param_4);
      }
      if (param_5 != (undefined8 *)0x0) {
        lVar1 = *(long *)(param_1 + 0x6e8) + (long)param_2 * 0x38;
        uVar2 = *(undefined8 *)(lVar1 + 0x1c);
        param_5[1] = *(undefined8 *)(lVar1 + 0x24);
        *param_5 = uVar2;
      }
      if (param_6 != (undefined4 *)0x0) {
        *param_6 = *(undefined4 *)(*(long *)(param_1 + 0x6e8) + (long)param_2 * 0x38 + 0xc);
      }
      if (param_7 != (undefined4 *)0x0) {
        *param_7 = *(undefined4 *)(*(long *)(param_1 + 0x6e8) + (long)param_2 * 0x38 + 0x14);
      }
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = *(undefined4 *)(*(long *)(param_1 + 0x6e8) + (long)param_2 * 0x38 + 0x10);
      }
      if (param_9 == (undefined4 *)0x0) {
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        *param_9 = *(undefined4 *)(*(long *)(param_1 + 0x6e8) + (long)param_2 * 0x38 + 0x18);
      }
    }
    else {
      uVar2 = 0x1f;
    }
  }
  return uVar2;
}




undefined8 FUN_1005faff4(long param_1,undefined8 param_2,long param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  uVar1 = FUN_1005fa9b0();
  if ((int)uVar1 == 0) {
    iVar4 = (int)param_2;
    if (iVar4 < 0) {
      uVar1 = 0x1f;
    }
    else {
      uVar1 = 0x1f;
      if ((param_3 != 0) && (iVar4 < *(int *)(param_1 + 0x6dc))) {
        if (*(char *)(param_3 + 0x2c) < '\0') {
          uVar1 = 0x1f;
        }
        else if (*(int *)(param_3 + 0x3c) == 0) {
          uVar1 = 0x1f;
        }
        else {
          lVar5 = (long)iVar4;
          if ((*(byte *)(*(long *)(param_1 + 0x6e8) + lVar5 * 0x38 + 0x18) & 1) == 0) {
            uVar1 = 0x50;
          }
          else {
            uVar1 = FUN_1005f5574(param_1,param_2);
            if ((int)uVar1 == 0) {
              puVar2 = (undefined4 *)
                       FUN_1005d7a5c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x60,
                                     "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                                     ,0x1413,0);
              if (puVar2 == (undefined4 *)0x0) {
                uVar1 = 0x26;
              }
              else {
                lVar3 = *(long *)(param_1 + 0x6e8) + lVar5 * 0x38;
                *puVar2 = *(undefined4 *)(lVar3 + 8);
                *(undefined1 *)(puVar2 + 0xc) = param_4;
                *(long *)(puVar2 + 0x10) = param_3;
                puVar2[7] = (int)*(float *)(param_3 + 100);
                puVar2[8] = *(undefined4 *)(param_3 + 0x60);
                puVar2[6] = *(undefined4 *)(param_3 + 0x28);
                puVar2[9] = *(undefined4 *)(param_3 + 0x3c);
                uVar1 = *(undefined8 *)(lVar3 + 0x1c);
                *(undefined8 *)(puVar2 + 3) = *(undefined8 *)(lVar3 + 0x24);
                *(undefined8 *)(puVar2 + 1) = uVar1;
                uVar1 = FUN_1005dc8e4(*(undefined8 *)(param_1 + 0x6b8),puVar2);
                if ((int)uVar1 == 0) {
                  uVar1 = 0;
                  *(undefined4 **)(*(long *)(param_1 + 0x6e8) + lVar5 * 0x38 + 0x30) = puVar2;
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar1;
}




ulong FUN_1005fb14c(long param_1,int param_2,undefined4 *param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = FUN_1005fa9b0();
  if ((int)uVar1 == 0) {
    if (param_2 < 0) {
      uVar1 = 0x1f;
    }
    else if (param_2 < *(int *)(param_1 + 0x6dc)) {
      if (param_3 == (undefined4 *)0x0) {
        lVar3 = *(long *)(param_1 + 0x6e8);
      }
      else {
        lVar3 = *(long *)(param_1 + 0x6e8);
        lVar4 = *(long *)(lVar3 + (long)param_2 * 0x38 + 0x30);
        if (lVar4 == 0) {
          *param_3 = 0;
        }
        else {
          *param_3 = *(undefined4 *)(lVar4 + 0x34);
        }
      }
      uVar2 = 0x50;
      if ((*(byte *)(lVar3 + (long)param_2 * 0x38 + 0x18) & 1) != 0) {
        uVar2 = 0;
      }
      uVar1 = (ulong)uVar2;
    }
    else {
      uVar1 = 0x1f;
    }
  }
  return uVar1;
}




ulong FUN_1005fb1f0(long param_1,int param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  
  uVar1 = FUN_1005fa9b0();
  if ((int)uVar1 == 0) {
    if (param_2 < 0) {
      uVar1 = 0x1f;
    }
    else if (param_2 < *(int *)(param_1 + 0x6dc)) {
      if (param_3 == 0) {
        lVar3 = *(long *)(param_1 + 0x6e8);
      }
      else {
        lVar3 = *(long *)(param_1 + 0x6e8);
        *(bool *)param_3 = *(long *)(lVar3 + (long)param_2 * 0x38 + 0x30) != 0;
      }
      uVar2 = 0x50;
      if ((*(byte *)(lVar3 + (long)param_2 * 0x38 + 0x18) & 1) != 0) {
        uVar2 = 0;
      }
      uVar1 = (ulong)uVar2;
    }
    else {
      uVar1 = 0x1f;
    }
  }
  return uVar1;
}




undefined8 FUN_1005fb290(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = 0x1f;
  if (((0 < (int)param_3) && (0 < (int)param_2)) && (param_4 != (long *)0x0)) {
    lVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x140,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                          ,0x14ce,0,0);
    *param_4 = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0x26;
    }
    else {
      FUN_1005d53a4(lVar2,param_1 + 0x16450);
      uVar1 = FUN_1005d560c(*param_4,param_2,param_3);
      if ((int)uVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x16448);
        if (lVar2 != 0) {
          plVar3 = (long *)*param_4;
          lVar4 = *(long *)(lVar2 + 8);
          *plVar3 = lVar2;
          plVar3[1] = lVar4;
          *(long **)(lVar2 + 8) = plVar3;
          *(long **)plVar3[1] = plVar3;
        }
        uVar1 = 0;
        *(long *)(param_1 + 0x16448) = *param_4;
      }
    }
  }
  return uVar1;
}




undefined8 FUN_1005fb370(undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long *plVar3;
  
  if (((uint)(float)param_1 & 0x7f800000) == 0x7f800000) {
    uVar2 = 0x1d;
  }
  else if ((float)param_1 <= 0.0) {
    uVar2 = 0x1f;
  }
  else {
    uVar2 = FUN_1005d4dc0(param_1,param_2 + 0x16450);
    if ((int)uVar2 == 0) {
      plVar1 = (long *)(param_2 + 0x16448);
      plVar3 = (long *)*plVar1;
      if (plVar3 == (long *)0x0) {
        uVar2 = 0;
      }
      else {
        do {
          FUN_1005d74a4(plVar3);
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)*plVar1);
        do {
          uVar2 = FUN_1005d73b4(param_1,plVar3);
          if ((int)uVar2 != 0) {
            return uVar2;
          }
          uVar2 = 0;
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)*plVar1);
      }
    }
  }
  return uVar2;
}




undefined8 FUN_1005fb434(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x16610);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005fb460(long param_1,long param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = 0x1f;
  if ((param_2 != 0) && (param_4 != (long *)0x0)) {
    lVar2 = FUN_1005d7708(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),0x140,
                          "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_systemi.cpp"
                          ,0x1551,0,0);
    *param_4 = lVar2;
    if (lVar2 == 0) {
      uVar1 = 0x26;
    }
    else {
      FUN_1005d53a4(lVar2,param_1 + 0x16450);
      uVar1 = FUN_1005d7134(*param_4,param_2,param_3);
      if ((int)uVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x16448);
        if (lVar2 != 0) {
          plVar3 = (long *)*param_4;
          lVar4 = *(long *)(lVar2 + 8);
          *plVar3 = lVar2;
          plVar3[1] = lVar4;
          *(long **)(lVar2 + 8) = plVar3;
          *(long **)plVar3[1] = plVar3;
        }
        uVar1 = 0;
        *(long *)(param_1 + 0x16448) = *param_4;
      }
    }
  }
  return uVar1;
}




undefined8
FUN_1005fb534(long param_1,long param_2,long param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined8 uVar1;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = 0x1f;
  if ((param_2 != 0) && (param_3 != 0)) {
    local_28 = 0;
    local_24 = 0;
    uVar1 = FUN_1005d48c4(param_1 + 0x16450,param_2,param_3,&local_24,&local_28);
    if ((int)uVar1 == 0) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = local_24;
      }
      if (param_5 == (undefined4 *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = 0;
        *param_5 = local_28;
      }
    }
  }
  return uVar1;
}




void FUN_1005fb5b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1005da0d4(param_2);
  return;
}




void FUN_1005fb5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1005da300(param_2,param_3);
  return;
}




void FUN_1005fb5c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1005da33c(param_2);
  return;
}




void FUN_1005fb5cc(undefined8 param_1,undefined8 param_2)

{
  FUN_1005da34c(param_2);
  return;
}




undefined8 FUN_1005fb5d4(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x15c98) = param_2;
  *(undefined8 *)(PTR_DAT_10186d408 + 0x18) = param_2;
  return 0;
}




undefined8 FUN_1005fb5f8(long param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x15c98);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005fb624(undefined8 *param_1)

{
  FUN_1005dbac8(param_1 + 0x22);
  if ((param_1[0x28] != 0) && (*(uint *)(param_1 + 0x29) != 0)) {
    *(undefined8 *)(param_1[0x28] + (ulong)*(uint *)(param_1 + 0x29) * 8 + 0x10) = param_1[0x22];
  }
  *(undefined1 *)(param_1 + 0x23) = 1;
  FUN_1005dc058(param_1[0x27],0);
  do {
    if (*(char *)(param_1 + 0x23) == '\0') break;
    if (param_1[0x26] != 0) {
      FUN_1005dc028();
    }
    if (*(char *)(param_1 + 0x23) != '\0') {
      if ((code *)param_1[0x2a] == (code *)0x0) {
        (**(code **)*param_1)(param_1);
      }
      else {
        (*(code *)param_1[0x2a])(param_1[0x24]);
      }
      if (*(int *)(param_1 + 0x2b) != 0) {
        FUN_1005dbaa8();
      }
    }
  } while (*(char *)((long)param_1 + 0x119) != '\0');
  if ((param_1[0x28] != 0) && (*(uint *)(param_1 + 0x29) != 0)) {
    *(undefined8 *)(param_1[0x28] + (ulong)*(uint *)(param_1 + 0x29) * 8 + 0x10) = 0;
  }
  FUN_1005dc058(param_1[0x27],0);
  return 0;
}




undefined8 FUN_1005fb6f8(void)

{
  return 0;
}




void FUN_1005fb700(undefined8 *param_1)

{
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_1014a32e0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)((long)param_1 + 0x119) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  return;
}




void FUN_1005fb738(undefined8 *param_1)

{
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *param_1 = &PTR_FUN_1014a32e0;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x2a] = 0;
  *(undefined1 *)((long)param_1 + 0x119) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x24] = 0;
  return;
}




undefined8
FUN_1005fb770(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined1 param_11)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  
  *(undefined8 *)(param_1 + 0x150) = param_3;
  *(undefined8 *)(param_1 + 0x120) = param_4;
  *(undefined4 *)(param_1 + 0x158) = param_9._4_4_;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined1 *)(param_1 + 0x119) = param_11;
  *(undefined4 *)(param_1 + 0x148) = param_5;
  *(undefined8 *)(param_1 + 0x140) = param_10;
  plVar1 = (long *)(param_1 + 0x138);
  uVar4 = FUN_1005dbf7c(plVar1);
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  lVar7 = *plVar1;
  if ((char)param_9 == '\0') {
    lVar8 = 0;
  }
  else {
    uVar4 = FUN_1005dbf7c((long *)(param_1 + 0x130));
    if ((int)uVar4 != 0) goto LAB_1005fb894;
    lVar8 = *(long *)(param_1 + 0x130);
  }
  if ((int)param_6 + 2U < 6) {
    lVar2 = param_1 + 8;
    if (param_2 == (char *)0x0) {
      param_2 = "?????";
    }
    FUN_1005ecc98(lVar2,param_2,0x100);
    puVar3 = (undefined8 *)(param_1 + 0x108);
    uVar4 = FUN_1005dbb54(lVar2,FUN_1005fb624,param_1,param_6,param_7,param_8,puVar3);
    if (((int)uVar4 == 0) && (uVar4 = FUN_1005dc028(*plVar1), (int)uVar4 == 0)) {
      lVar7 = *(long *)(param_1 + 0x140);
      if (lVar7 == 0) {
        pcVar6 = *(code **)(PTR_DAT_10186d408 + 8);
        if (pcVar6 == (code *)0x0) {
          return 0;
        }
        if (((byte)PTR_DAT_10186d408[0x10] >> 3 & 1) == 0) {
          return 0;
        }
        uVar4 = *puVar3;
        uVar5 = *(undefined8 *)(PTR_DAT_10186d408 + 0x18);
        lVar7 = 0;
      }
      else {
        pcVar6 = *(code **)(lVar7 + 0x15e48);
        if (pcVar6 == (code *)0x0) {
          return 0;
        }
        if ((*(byte *)(lVar7 + 0x15e50) >> 3 & 1) == 0) {
          return 0;
        }
        uVar4 = *puVar3;
        uVar5 = *(undefined8 *)(lVar7 + 0x15c98);
      }
      (*pcVar6)(lVar7,8,uVar4,lVar2,uVar5);
      return 0;
    }
  }
  else {
    uVar4 = 0x1f;
  }
  if (lVar8 != 0) {
    FUN_1005dbfe4(lVar8);
  }
LAB_1005fb894:
  if (lVar7 != 0) {
    FUN_1005dbfe4(lVar7);
  }
  return uVar4;
}




undefined8 FUN_1005fb958(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  code *pcVar4;
  
  if (*(char *)(param_1 + 0x118) == '\0') {
    return 0;
  }
  if (*(char *)(param_1 + 0x119) != '\0') {
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  if ((*(long *)(param_1 + 0x130) != 0) &&
     (uVar1 = FUN_1005dc058(*(long *)(param_1 + 0x130),0), (int)uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = FUN_1005dc028(*(undefined8 *)(param_1 + 0x138));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  if (*(long *)(param_1 + 0x130) != 0) {
    uVar1 = FUN_1005dbfe4();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *(undefined8 *)(param_1 + 0x130) = 0;
  }
  uVar1 = FUN_1005dbfe4(*(undefined8 *)(param_1 + 0x138));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  *(undefined8 *)(param_1 + 0x138) = 0;
  uVar1 = FUN_1005dbd40(*(undefined8 *)(param_1 + 0x108));
  if ((int)uVar1 != 0) {
    return uVar1;
  }
  lVar2 = *(long *)(param_1 + 0x140);
  if (lVar2 == 0) {
    pcVar4 = *(code **)(PTR_DAT_10186d408 + 8);
    if ((pcVar4 == (code *)0x0) || (((byte)PTR_DAT_10186d408[0x11] >> 1 & 1) == 0))
    goto LAB_1005fba54;
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    uVar3 = *(undefined8 *)(PTR_DAT_10186d408 + 0x18);
    lVar2 = 0;
  }
  else {
    pcVar4 = *(code **)(lVar2 + 0x15e48);
    if ((pcVar4 == (code *)0x0) || ((*(byte *)(lVar2 + 0x15e51) >> 1 & 1) == 0)) goto LAB_1005fba54;
    uVar1 = *(undefined8 *)(param_1 + 0x108);
    uVar3 = *(undefined8 *)(lVar2 + 0x15c98);
  }
  (*pcVar4)(lVar2,0x200,uVar1,param_1 + 8,uVar3);
LAB_1005fba54:
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  if (*(long *)(param_1 + 0x128) != 0) {
    FUN_1005d7f1c(*(undefined8 *)(PTR_DAT_10186d408 + 0xd8),*(long *)(param_1 + 0x128),
                  "/Users/fmod/jenkins/workspace/Build__1.8__API_iOS/lowlevel_api/src/fmod_thread.cpp"
                  ,0x166);
    *(undefined8 *)(param_1 + 0x128) = 0;
  }
  return 0;
}




undefined8 FUN_1005fba94(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x130) != 0) {
    uVar1 = FUN_1005dc058();
    return uVar1;
  }
  return 0;
}




undefined8 FUN_1005fbaa8(long param_1,undefined1 *param_2)

{
  long local_28;
  
  FUN_1005dbac8(&local_28);
  if (((((local_28 == *(long *)(param_1 + 8)) || (local_28 == *(long *)(param_1 + 0x10))) ||
       (local_28 == *(long *)(param_1 + 0x18))) ||
      ((((local_28 == *(long *)(param_1 + 0x20) || (local_28 == *(long *)(param_1 + 0x28))) ||
        ((local_28 == *(long *)(param_1 + 0x30) ||
         ((local_28 == *(long *)(PTR_DAT_10186d408 + 0x40) ||
          (local_28 == *(long *)(PTR_DAT_10186d408 + 0x60))))))) ||
       (local_28 == *(long *)(PTR_DAT_10186d408 + 0x68))))) ||
     (((local_28 == *(long *)(PTR_DAT_10186d408 + 0x70) ||
       (local_28 == *(long *)(PTR_DAT_10186d408 + 0x78))) ||
      (local_28 == *(long *)(PTR_DAT_10186d408 + 0x80))))) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
  }
  return 0;
}




void FUN_1005fbb8c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}




void FUN_1005fbba8(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined8 *)((long)param_1 + 0x25) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
}




undefined8 FUN_1005fbbc4(long param_1)

{
  FUN_1005db9a0();
  *(undefined1 *)(param_1 + 0x38) = 1;
  return 0;
}




undefined8 FUN_1005fbbf0(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint local_34;
  
  fVar5 = (float)param_2 / 100.0;
  FUN_1005db9a0(&local_34);
  fVar4 = 0.0;
  if (param_1[5] <= local_34) {
    fVar4 = (float)(local_34 - param_1[5]);
  }
  param_1[1] = local_34;
  param_1[6] = local_34;
  fVar4 = fVar4 + fVar5 * (float)param_1[8];
  fVar3 = fVar5 * (float)param_1[7];
  param_1[7] = (uint)fVar3;
  param_1[8] = (uint)fVar4;
  iVar2 = local_34 - *param_1;
  if (*param_1 <= local_34 && iVar2 != 0) {
    uVar1 = iVar2 - param_1[0xc];
    param_1[2] = uVar1;
    fVar3 = ((float)uVar1 * 100.0) / ((1.0 - fVar5) * fVar4) + fVar3;
    param_1[7] = (uint)fVar3;
  }
  param_1[10] = (uint)((1.0 - fVar5) * fVar3);
  param_1[5] = local_34;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  return 0;
}




undefined8 FUN_1005fbcb8(long param_1,undefined4 *param_2)

{
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x28);
    return 0;
  }
  return 0x1f;
}




undefined8 FUN_1005fbcdc(long param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x38) != '\0') {
    iVar1 = *(int *)(param_1 + 0x34);
    if (param_2 == 0) {
      *(int *)(param_1 + 0x34) = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        FUN_1005db9a0(param_1 + 0x10);
        iVar1 = *(uint *)(param_1 + 0x10) - *(uint *)(param_1 + 0xc);
        if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x10) && iVar1 != 0) {
          *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x30);
        }
      }
    }
    else {
      if (iVar1 == 0) {
        FUN_1005db9a0(param_1 + 0xc);
        iVar1 = *(int *)(param_1 + 0x34);
      }
      *(int *)(param_1 + 0x34) = iVar1 + 1;
    }
    *(char *)(param_1 + 0x2c) = (char)param_2;
  }
  return 0;
}




bool FUN_1005fbd5c(int param_1)

{
  return param_1 - 1U < 0x9fff6;
}




bool FUN_1005fbd74(uint param_1)

{
  if (param_1 - 1 < 0x9fff6) {
    return (param_1 < 0x10000 || param_1 % 1000 == 0) || param_1 % 10 == 0;
  }
  return false;
}




undefined8 FUN_1005fbde8(uint *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  bool bVar5;
  
  if (*param_1 != 0) {
    lVar1 = 0;
    uVar2 = 0;
    bVar5 = true;
    uVar3 = 0;
    do {
      if (bVar5) {
        uVar4 = *(ulong *)(*(long *)(param_1 + 2) + lVar1);
      }
      else {
        uVar4 = *(ulong *)(*(long *)(param_1 + 2) + lVar1);
        if (uVar4 != 0xffffffffffffffff && uVar4 <= uVar3) {
          return 0;
        }
      }
      bVar5 = false;
      uVar2 = uVar2 + 1;
      lVar1 = lVar1 + 0x18;
      uVar3 = uVar4;
    } while (uVar2 < *param_1);
  }
  return 1;
}




void FUN_1005fbe4c(uint *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined4 *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  
  _qsort(*(void **)(param_1 + 2),(ulong)*param_1,0x18,(int *)FUN_1005fbf44);
  uVar5 = *param_1;
  if (uVar5 != 0) {
    lVar6 = 0;
    bVar3 = true;
    uVar8 = 0;
    uVar4 = 0;
    do {
      lVar9 = *(long *)(param_1 + 2);
      if (((bVar3) || (*(long *)(lVar9 + lVar6) == -1)) ||
         (uVar10 = uVar4,
         *(long *)(lVar9 + lVar6) != *(long *)(lVar9 + (ulong)((int)uVar4 - 1) * 0x18))) {
        uVar10 = (ulong)((int)uVar4 + 1);
        puVar1 = (undefined8 *)(lVar9 + uVar4 * 0x18);
        puVar2 = (undefined8 *)(lVar9 + lVar6);
        puVar1[2] = puVar2[2];
        uVar11 = *puVar2;
        puVar1[1] = puVar2[1];
        *puVar1 = uVar11;
        uVar5 = *param_1;
      }
      bVar3 = false;
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x18;
      uVar4 = uVar10;
    } while (uVar8 < uVar5);
    if ((uint)uVar10 < uVar5) {
      puVar7 = (undefined4 *)(*(long *)(param_1 + 2) + uVar10 * 0x18 + 0x10);
      do {
        *(undefined8 *)(puVar7 + -4) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + -2) = 0;
        *puVar7 = 0;
        uVar8 = (int)uVar10 + 1;
        uVar10 = (ulong)uVar8;
        puVar7 = puVar7 + 6;
      } while (uVar8 < uVar5);
    }
  }
  return;
}




undefined4 FUN_1005fbf44(ulong *param_1,ulong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = 1;
  if (*param_1 < *param_2) {
    uVar1 = 0xffffffff;
  }
  uVar2 = 0;
  if (*param_1 != *param_2) {
    uVar2 = uVar1;
  }
  return uVar2;
}




undefined8 FUN_1005fbf60(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return 1;
  }
  do {
    param_1 = param_1 + 1;
    if (cVar1 < ' ') {
      return 0;
    }
    if ((byte)(cVar1 + 0x82U) < 2) {
      return 0;
    }
    if (cVar1 == '=') {
      return 0;
    }
    cVar1 = *param_1;
  } while (cVar1 != '\0');
  return 1;
}




undefined8 FUN_1005fbfb8(char *param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  
  if (param_2 == 0xffffffff) {
    for (; *param_1 != '\0'; param_1 = param_1 + uVar2) {
      uVar2 = FUN_1005fc038(param_1);
      if (uVar2 == 0) {
        return 0;
      }
    }
  }
  else {
    pcVar1 = param_1 + param_2;
    if (param_2 != 0) {
      do {
        uVar2 = FUN_1005fc038(param_1);
        if (uVar2 == 0) {
          return 0;
        }
        param_1 = param_1 + uVar2;
      } while (param_1 < pcVar1);
    }
    if (param_1 != pcVar1) {
      return 0;
    }
  }
  return 1;
}




undefined4 FUN_1005fc038(byte *param_1)

{
  undefined4 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  
  bVar2 = *param_1;
  if (-1 < (char)bVar2) {
    return 1;
  }
  if (((bVar2 & 0xe0) == 0xc0) && ((param_1[1] & 0xc0) == 0x80)) {
    uVar4 = 0;
    if ((bVar2 & 0xfe) != 0xc0) {
      uVar4 = 2;
    }
    return uVar4;
  }
  if ((bVar2 & 0xf0) == 0xe0) {
    bVar3 = param_1[1];
    if (((bVar3 & 0xc0) == 0x80) && ((param_1[2] & 0xc0) == 0x80)) {
      if ((bVar2 == 0xe0) && ((bVar3 & 0xe0) == 0x80)) {
        return 0;
      }
      if ((bVar2 == 0xed) && ((bVar3 & 0xe0) == 0xa0)) {
        return 0;
      }
      uVar4 = 0;
      if ((param_1[2] & 0xfe) != 0xbe) {
        uVar4 = 3;
      }
      if (bVar3 != 0xbf) {
        uVar4 = 3;
      }
      if (bVar2 != 0xef) {
        uVar4 = 3;
      }
      return uVar4;
    }
  }
  if (((bVar2 & 0xf8) == 0xf0) &&
     ((((param_1[1] & 0xc0) == 0x80 && ((param_1[2] & 0xc0) == 0x80)) &&
      ((param_1[3] & 0xc0) == 0x80)))) {
    uVar4 = 0;
    if ((param_1[1] & 0xf0) != 0x80) {
      uVar4 = 4;
    }
    if (bVar2 != 0xf0) {
      uVar4 = 4;
    }
    return uVar4;
  }
  if (((((bVar2 & 0xfc) == 0xf8) && ((param_1[1] & 0xc0) == 0x80)) && ((param_1[2] & 0xc0) == 0x80))
     && (((param_1[3] & 0xc0) == 0x80 && ((param_1[4] & 0xc0) == 0x80)))) {
    uVar4 = 0;
    if ((param_1[1] & 0xf8) != 0x80) {
      uVar4 = 5;
    }
    if (bVar2 != 0xf8) {
      uVar4 = 5;
    }
    return uVar4;
  }
  if ((bVar2 & 0xfe) != 0xfc) {
    return 0;
  }
  if ((param_1[1] & 0xc0) != 0x80) {
    return 0;
  }
  if ((param_1[2] & 0xc0) != 0x80) {
    return 0;
  }
  if ((param_1[3] & 0xc0) == 0x80) {
    if ((param_1[4] & 0xc0) == 0x80) {
      uVar4 = 0;
      if ((param_1[1] & 0xfc) != 0x80) {
        uVar4 = 6;
      }
      if (bVar2 != 0xfc) {
        uVar4 = 6;
      }
      uVar1 = 0;
      if ((param_1[5] & 0xc0) == 0x80) {
        uVar1 = uVar4;
      }
      return uVar1;
    }
    return 0;
  }
  return 0;
}




bool FUN_1005fc25c(byte *param_1,uint param_2)

{
  byte *pbVar1;
  bool bVar2;
  uint uVar3;
  
  pbVar1 = param_1 + param_2;
  if (param_2 != 0) {
    do {
      if (*param_1 == 0x3d) break;
      if (0x5d < *param_1 - 0x20) {
        return false;
      }
      param_1 = param_1 + 1;
    } while (param_1 < pbVar1);
  }
  if (param_1 == pbVar1) {
    bVar2 = false;
  }
  else {
    for (param_1 = param_1 + 1; param_1 < pbVar1; param_1 = param_1 + uVar3) {
      uVar3 = FUN_1005fc038(param_1);
      if (uVar3 == 0) {
        return false;
      }
    }
    bVar2 = param_1 == pbVar1;
  }
  return bVar2;
}




undefined8 FUN_1005fc2e8(long param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  
  if (param_2 != 0) {
    if (*(ulong *)(param_1 + 0x88) < 0x15888) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = "CD-DA cue sheet must have a lead-in length of at least 2 seconds";
        return 0;
      }
      return 0;
    }
    if (*(ulong *)(param_1 + 0x88) % 0x24c != 0) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = "CD-DA cue sheet lead-in length must be evenly divisible by 588 samples";
        return 0;
      }
      return 0;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x94);
  if (uVar1 == 0) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = "cue sheet must have at least one track (the lead-out)";
      return 0;
    }
    return 0;
  }
  if ((param_2 != 0) &&
     (*(char *)(*(long *)(param_1 + 0x98) + (ulong)(uVar1 - 1) * 0x20 + 8) != -0x56)) {
    if (param_3 != (undefined8 *)0x0) {
      *param_3 = "CD-DA cue sheet must have a lead-out track number 170 (0xAA)";
      return 0;
    }
    return 0;
  }
  uVar5 = 0;
  lVar3 = *(long *)(param_1 + 0x98);
  do {
    bVar2 = *(byte *)(lVar3 + uVar5 * 0x20 + 8);
    if (bVar2 == 0) {
      if (param_3 != (undefined8 *)0x0) {
        *param_3 = "cue sheet may not have a track number 0";
        return 0;
      }
      return 0;
    }
    uVar4 = (uint)uVar5;
    if (param_2 != 0) {
      if ((99 < bVar2) && (bVar2 != 0xaa)) {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = "CD-DA cue sheet track number must be 1-99 or 170";
          return 0;
        }
        return 0;
      }
      if (*(ulong *)(lVar3 + uVar5 * 0x20) % 0x24c != 0) {
        if (param_3 == (undefined8 *)0x0) {
          return 0;
        }
        if (uVar4 == uVar1 - 1) {
          *param_3 = "CD-DA cue sheet lead-out offset must be evenly divisible by 588 samples";
          return 0;
        }
        *param_3 = "CD-DA cue sheet track offset must be evenly divisible by 588 samples";
        return 0;
      }
    }
    uVar6 = (uint)*(byte *)(lVar3 + uVar5 * 0x20 + 0x17);
    if (uVar4 < uVar1 - 1) {
      if (uVar6 == 0) {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = "cue sheet track must have at least one index point";
          return 0;
        }
        return 0;
      }
      if (1 < *(byte *)(*(long *)(lVar3 + uVar5 * 0x20 + 0x18) + 8)) {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = "cue sheet track\'s first index number must be 0 or 1";
          return 0;
        }
        return 0;
      }
LAB_1005fc40c:
      lVar7 = 0;
      uVar9 = 0xffffffff;
      do {
        if ((param_2 != 0) &&
           (*(ulong *)(*(long *)(lVar3 + uVar5 * 0x20 + 0x18) + lVar7) % 0x24c != 0)) {
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = "CD-DA cue sheet track index offset must be evenly divisible by 588 samples";
            return 0;
          }
          return 0;
        }
        if (((int)lVar7 != 0) &&
           (lVar10 = *(long *)(lVar3 + uVar5 * 0x20 + 0x18),
           (uint)*(byte *)(lVar10 + lVar7 + 8) != *(byte *)(lVar10 + uVar9 * 0x10 + 8) + 1)) {
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = "cue sheet track index numbers must increase by 1";
            return 0;
          }
          return 0;
        }
        iVar8 = (int)uVar9;
        uVar9 = (ulong)(iVar8 + 1);
        lVar7 = lVar7 + 0x10;
      } while (iVar8 + 2U < uVar6);
    }
    else if (uVar6 != 0) goto LAB_1005fc40c;
    uVar5 = (ulong)(uVar4 + 1);
    if (uVar1 <= uVar4 + 1) {
      return 1;
    }
  } while( true );
}




undefined8 FUN_1005fc5d4(long param_1,undefined8 *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  pcVar3 = *(char **)(param_1 + 8);
  cVar1 = *pcVar3;
  while (cVar1 != '\0') {
    pcVar3 = pcVar3 + 1;
    if ((cVar1 < ' ') || (cVar1 == '\x7f')) {
      if (param_2 != (undefined8 *)0x0) {
        *param_2 = "MIME type string must contain only printable ASCII characters (0x20-0x7e)";
        return 0;
      }
      return 0;
    }
    cVar1 = *pcVar3;
  }
  pcVar3 = *(char **)(param_1 + 0x10);
  while( true ) {
    if (*pcVar3 == '\0') {
      return 1;
    }
    uVar2 = FUN_1005fc038(pcVar3);
    if (uVar2 == 0) break;
    pcVar3 = pcVar3 + uVar2;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = "description string must be valid UTF-8";
    return 0;
  }
  return 0;
}




uint FUN_1005fc684(ulong param_1,uint param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar3 = (uint)param_1;
  uVar1 = param_1;
  while ((uVar1 & 1) == 0) {
    uVar4 = uVar4 + 1;
    uVar1 = param_1 >> 1;
    param_1 = uVar1 & 0x7fffffff;
  }
  uVar2 = 0xf;
  if (uVar4 < 0x10) {
    uVar2 = uVar4;
  }
  do {
    uVar4 = uVar2;
    if (uVar4 == 0) {
      return 0;
    }
    uVar2 = uVar4 - 1;
  } while (uVar3 >> (ulong)(uVar4 & 0x1f) <= param_2);
  return uVar4;
}




void FUN_1005fc6c8(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  do {
    if (param_1 == 0) {
      return;
    }
    uVar1 = param_1 & 0x1f;
    param_1 = param_1 - 1;
  } while (param_2 >> (ulong)uVar1 <= param_3);
  return;
}




uint FUN_1005fc6e8(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar2 = param_1;
  while ((uVar2 & 1) == 0) {
    uVar3 = uVar3 + 1;
    uVar2 = param_1 >> 1;
    param_1 = uVar2 & 0x7fffffff;
  }
  uVar1 = 0xf;
  if (uVar3 < 0x10) {
    uVar1 = uVar3;
  }
  return uVar1;
}




void FUN_1005fc70c(undefined8 *param_1)

{
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_1005fc718(undefined8 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    _free((void *)*param_1);
  }
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
  }
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




undefined8 FUN_1005fc754(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  size_t sVar3;
  
  uVar1 = 1;
  if (*(uint *)(param_1 + 2) < param_2) {
    sVar3 = (ulong)(uint)(1 << (ulong)(param_2 & 0x1f)) << 2;
    pvVar2 = _realloc((void *)*param_1,sVar3);
    *param_1 = pvVar2;
    if (pvVar2 == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      pvVar2 = _realloc((void *)param_1[1],sVar3);
      param_1[1] = pvVar2;
      if (pvVar2 == (void *)0x0) {
        uVar1 = 0;
      }
      else {
        _bzero(pvVar2,sVar3);
        *(uint *)(param_1 + 2) = param_2;
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}




undefined1 FUN_1005fc7e0(long *param_1)

{
  return *(undefined1 *)(*param_1 + 4);
}




byte FUN_1005fc7ec(long *param_1)

{
  return *(byte *)(*param_1 + 5) & 1;
}




byte FUN_1005fc7fc(long *param_1)

{
  return *(byte *)(*param_1 + 5) & 2;
}




byte FUN_1005fc80c(long *param_1)

{
  return *(byte *)(*param_1 + 5) & 4;
}




undefined8 FUN_1005fc81c(long *param_1)

{
  return *(undefined8 *)(*param_1 + 6);
}




undefined4 FUN_1005fc860(long *param_1)

{
  return *(undefined4 *)(*param_1 + 0xe);
}




undefined4 FUN_1005fc884(long *param_1)

{
  return *(undefined4 *)(*param_1 + 0x12);
}




int FUN_1005fc8a8(long *param_1)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  char *pcVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  
  lVar3 = *param_1;
  bVar2 = *(byte *)(lVar3 + 0x1a);
  uVar5 = (ulong)bVar2;
  if (uVar5 != 0) {
    lVar1 = (uVar5 + 0xffffffff & 0xffffffff) + 1;
    lVar6 = lVar1 - ((ulong)~(uint)(uVar5 + 0xffffffff) & 1);
    if (lVar6 == 0) {
      lVar6 = 0;
      iVar7 = 0;
      iVar8 = 0;
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      lVar9 = ((ulong)(bVar2 - 1) + 1) - (uVar5 & 1);
      pcVar4 = (char *)(lVar3 + 0x1c);
      do {
        if (pcVar4[-1] != -1) {
          iVar7 = iVar7 + 1;
        }
        if (*pcVar4 != -1) {
          iVar8 = iVar8 + 1;
        }
        lVar9 = lVar9 + -2;
        pcVar4 = pcVar4 + 2;
      } while (lVar9 != 0);
    }
    iVar8 = iVar8 + iVar7;
    if (lVar1 != lVar6) {
      iVar7 = (uint)bVar2 - (int)lVar6;
      pcVar4 = (char *)(lVar6 + lVar3 + 0x1b);
      do {
        if (*pcVar4 != -1) {
          iVar8 = iVar8 + 1;
        }
        iVar7 = iVar7 + -1;
        pcVar4 = pcVar4 + 1;
      } while (iVar7 != 0);
    }
    return iVar8;
  }
  return 0;
}




undefined8 FUN_1005fc95c(undefined8 param_1,long *param_2,undefined4 param_3)

{
  long lVar1;
  
  if (param_2 != (long *)0x0) {
    _bzero(param_2,0x178);
    *(undefined4 *)(param_2 + 1) = 0x1200;
    *(undefined4 *)(param_2 + 5) = 0x40;
    lVar1 = FUN_1005a03d8(param_1,0x1200);
    *param_2 = lVar1;
    lVar1 = FUN_1005a03d8(param_1,(int)param_2[5] << 2);
    param_2[3] = lVar1;
    lVar1 = FUN_1005a03d8(param_1,(int)param_2[5] << 3);
    param_2[4] = lVar1;
    if (*param_2 != 0) {
      if (lVar1 != 0 && param_2[3] != 0) {
        *(undefined4 *)(param_2 + 0x2c) = param_3;
        return 0;
      }
      FUN_1005a04e8(param_1);
    }
    if (param_2[3] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[4] != 0) {
      FUN_1005a04e8(param_1);
    }
    _bzero(param_2,0x178);
  }
  return 0xffffffff;
}




undefined8 FUN_1005fca44(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    if (*param_2 != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[3] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[4] != 0) {
      FUN_1005a04e8(param_1);
    }
    _bzero(param_2,0x178);
  }
  return 0;
}




int FUN_1005fcaa8(long *param_1)

{
  if (param_1 != (long *)0x0) {
    return -(uint)(*param_1 == 0);
  }
  return -1;
}




undefined8 FUN_1005fcac4(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    if (*param_2 != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[3] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[4] != 0) {
      FUN_1005a04e8(param_1);
    }
    _bzero(param_2,0x178);
    FUN_1005a04e8(param_1,param_2);
  }
  return 0;
}




void FUN_1005fcb34(long *param_1)

{
  uint uVar1;
  long lVar2;
  
  if (param_1 != (long *)0x0) {
    uVar1 = 0;
    *(undefined1 *)(*param_1 + 0x16) = 0;
    *(undefined1 *)(*param_1 + 0x17) = 0;
    *(undefined1 *)(*param_1 + 0x18) = 0;
    *(undefined1 *)(*param_1 + 0x19) = 0;
    if (0 < (int)param_1[1]) {
      lVar2 = 0;
      uVar1 = 0;
      do {
        uVar1 = *(uint *)(&DAT_10115fad4 +
                         (ulong)((uint)*(byte *)(*param_1 + lVar2) ^ uVar1 >> 0x18) * 4) ^
                uVar1 << 8;
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)param_1[1]);
    }
    if (0 < (int)param_1[3]) {
      lVar2 = 0;
      do {
        uVar1 = *(uint *)(&DAT_10115fad4 +
                         (ulong)((uint)*(byte *)(param_1[2] + lVar2) ^ uVar1 >> 0x18) * 4) ^
                uVar1 << 8;
        lVar2 = lVar2 + 1;
      } while (lVar2 < (int)param_1[3]);
    }
    *(char *)(*param_1 + 0x16) = (char)uVar1;
    *(char *)(*param_1 + 0x17) = (char)(uVar1 >> 8);
    *(char *)(*param_1 + 0x18) = (char)(uVar1 >> 0x10);
    *(char *)(*param_1 + 0x19) = (char)(uVar1 >> 0x18);
  }
  return;
}




undefined4 FUN_1005fcc00(long *param_1)

{
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (*param_1 != 0) {
    return (int)param_1[0x2b];
  }
  return 1;
}




undefined8 FUN_1005fcc24(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
  }
  return 0;
}




undefined8 FUN_1005fcc44(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    if (*param_2 != 0) {
      FUN_1005a04e8();
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return 0;
}




undefined8 FUN_1005fcc7c(undefined8 param_1,long *param_2)

{
  if (param_2 != (long *)0x0) {
    if (*param_2 != 0) {
      FUN_1005a04e8(param_1);
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
    FUN_1005a04e8(param_1,param_2);
  }
  return 0;
}




int FUN_1005fccc8(long param_1)

{
  return *(int *)(param_1 + 8) >> 0x1f;
}




long FUN_1005fccd4(undefined8 param_1,long *param_2,int param_3)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)param_2[1];
  if (iVar4 < 0) {
    lVar1 = 0;
  }
  else {
    iVar5 = (int)param_2[2];
    if (iVar5 != 0) {
      sVar3 = (long)*(int *)((long)param_2 + 0xc) - (long)iVar5;
      iVar2 = (int)sVar3;
      *(int *)((long)param_2 + 0xc) = iVar2;
      if (0 < iVar2) {
        _memmove((void *)*param_2,(void *)(*param_2 + (long)iVar5),sVar3);
        iVar4 = (int)param_2[1];
      }
      *(undefined4 *)(param_2 + 2) = 0;
    }
    iVar5 = *(int *)((long)param_2 + 0xc);
    if (iVar4 - iVar5 < param_3) {
      iVar4 = param_3 + iVar5 + 0x1000;
      if (*param_2 == 0) {
        lVar1 = FUN_1005a03d8(param_1,iVar4);
      }
      else {
        lVar1 = FUN_1005a0490(param_1,*param_2,iVar4);
      }
      *param_2 = 0;
      if (lVar1 == 0) {
        param_2[2] = 0;
        param_2[3] = 0;
        *param_2 = 0;
        param_2[1] = 0;
        return 0;
      }
      *param_2 = lVar1;
      *(int *)(param_2 + 1) = iVar4;
      iVar5 = *(int *)((long)param_2 + 0xc);
    }
    else {
      lVar1 = *param_2;
    }
    lVar1 = lVar1 + iVar5;
  }
  return lVar1;
}




undefined8 FUN_1005fcdac(long param_1,int param_2)

{
  if (*(int *)(param_1 + 8) < 0) {
    return 0xffffffff;
  }
  param_2 = *(int *)(param_1 + 0xc) + param_2;
  if (*(int *)(param_1 + 8) < param_2) {
    return 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = param_2;
  return 0;
}




int FUN_1005fcdec(long *param_1,long *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int *piVar11;
  int *local_78;
  int local_70;
  long local_68;
  undefined4 local_60;
  int local_54;
  
  if ((int)param_1[1] < 0) {
    return 0;
  }
  lVar8 = *param_1;
  lVar6 = (long)(int)param_1[2];
  piVar1 = (int *)(lVar8 + lVar6);
  lVar10 = *(int *)((long)param_1 + 0xc) - lVar6;
  iVar3 = (int)param_1[3];
  iVar9 = (int)lVar10;
  if (iVar3 == 0) {
    if (iVar9 < 0x1b) {
      return 0;
    }
    if (*piVar1 != 0x5367674f) goto LAB_1005fcf14;
    uVar4 = (uint)*(byte *)(lVar8 + lVar6 + 0x1a);
    iVar3 = uVar4 + 0x1b;
    if (iVar9 < iVar3) {
      return 0;
    }
    if (uVar4 != 0) {
      lVar5 = 0;
      iVar7 = *(int *)((long)param_1 + 0x1c);
      do {
        iVar7 = iVar7 + (uint)*(byte *)(lVar6 + lVar8 + 0x1b + lVar5);
        *(int *)((long)param_1 + 0x1c) = iVar7;
        lVar5 = lVar5 + 1;
      } while (lVar5 < (long)(ulong)*(byte *)(lVar8 + lVar6 + 0x1a));
    }
    *(int *)(param_1 + 3) = iVar3;
  }
  if (iVar9 < iVar3 + *(int *)((long)param_1 + 0x1c)) {
    return 0;
  }
  piVar11 = (int *)(lVar6 + lVar8 + 0x16);
  local_54 = *piVar11;
  *piVar11 = 0;
  local_70 = (int)param_1[3];
  local_68 = lVar8 + local_70 + lVar6;
  local_60 = *(undefined4 *)((long)param_1 + 0x1c);
  local_78 = piVar1;
  FUN_1005fcb34(&local_78);
  if (local_54 == *piVar11) {
    iVar3 = (int)param_1[2];
    if (param_2 == (long *)0x0) {
      iVar9 = (int)param_1[3];
      iVar7 = *(int *)((long)param_1 + 0x1c);
    }
    else {
      lVar6 = *param_1;
      *param_2 = lVar6 + iVar3;
      iVar9 = (int)param_1[3];
      *(int *)(param_2 + 1) = iVar9;
      param_2[2] = lVar6 + (long)iVar9 + (long)iVar3;
      iVar7 = *(int *)((long)param_1 + 0x1c);
      *(int *)(param_2 + 3) = iVar7;
    }
    *(int *)(param_1 + 2) = iVar3 + iVar7 + iVar9;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined4 *)((long)param_1 + 0x1c) = 0;
    return iVar7 + iVar9;
  }
  *piVar11 = local_54;
LAB_1005fcf14:
  param_1[3] = 0;
  pvVar2 = _memchr((void *)(lVar6 + lVar8 + 1),0x4f,lVar10 - 1);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)(*param_1 + (long)*(int *)((long)param_1 + 0xc));
  }
  *(int *)(param_1 + 2) = (int)pvVar2 - (int)*param_1;
  return (int)piVar1 - (int)pvVar2;
}




undefined8 FUN_1005fcfb0(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 8) < 0) {
    uVar2 = 0;
  }
  else {
    do {
      iVar1 = FUN_1005fcdec(param_1,param_2);
      if (0 < iVar1) {
        return 1;
      }
      if (iVar1 == 0) {
        return 0;
      }
    } while (*(int *)(param_1 + 0x14) != 0);
    *(undefined4 *)(param_1 + 0x14) = 1;
    uVar2 = 0xffffffff;
  }
  return uVar2;
}




undefined8 FUN_1005fd01c(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  void *pvVar15;
  int iVar16;
  long lVar17;
  byte bVar18;
  uint uVar19;
  ulong uVar20;
  
  lVar17 = *param_3;
  uVar10 = *(undefined8 *)(lVar17 + 6);
  if (param_2 == (long *)0x0) {
    return 0xffffffff;
  }
  pvVar8 = (void *)*param_2;
  if (pvVar8 == (void *)0x0) {
    return 0xffffffff;
  }
  pvVar15 = (void *)param_3[2];
  iVar16 = (int)param_3[3];
  cVar2 = *(char *)(lVar17 + 4);
  bVar3 = *(byte *)(lVar17 + 5);
  iVar6 = *(int *)(lVar17 + 0xe);
  iVar7 = *(int *)(lVar17 + 0x12);
  bVar4 = *(byte *)(lVar17 + 0x1a);
  iVar12 = *(int *)((long)param_2 + 0x34);
  iVar11 = (int)param_2[2];
  if (iVar11 != 0) {
    iVar5 = *(int *)((long)param_2 + 0xc) - iVar11;
    *(int *)((long)param_2 + 0xc) = iVar5;
    if (iVar5 != 0) {
      _memmove(pvVar8,(void *)((long)pvVar8 + (long)iVar11),(long)iVar5);
    }
    *(undefined4 *)(param_2 + 2) = 0;
  }
  if (iVar12 != 0) {
    uVar19 = *(int *)((long)param_2 + 0x2c) - iVar12;
    iVar11 = iVar12;
    if (uVar19 != 0) {
      _memmove((void *)param_2[3],(void *)(param_2[3] + (long)iVar12 * 4),
               -(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2);
      uVar19 = *(int *)((long)param_2 + 0x2c) - iVar12;
      _memmove((void *)param_2[4],(void *)(param_2[4] + (long)iVar12 * 8),
               -(ulong)(uVar19 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar19 << 3);
      iVar11 = *(int *)((long)param_2 + 0x2c);
    }
    *(int *)((long)param_2 + 0x2c) = iVar11 - iVar12;
    *(int *)(param_2 + 6) = (int)param_2[6] - iVar12;
    *(undefined4 *)((long)param_2 + 0x34) = 0;
  }
  if (cVar2 != '\0') {
    return 0xffffffff;
  }
  if (iVar6 != (int)param_2[0x2c]) {
    return 0xffffffff;
  }
  uVar19 = (uint)bVar4;
  iVar12 = uVar19 + 1;
  if (*(int *)((long)param_2 + 0x2c) + iVar12 < (int)param_2[5]) {
LAB_1005fd234:
    bVar18 = bVar3 & 2;
    if (iVar7 != *(int *)((long)param_2 + 0x164)) {
      iVar12 = (int)param_2[6];
      if (iVar12 < *(int *)((long)param_2 + 0x2c)) {
        iVar11 = *(int *)((long)param_2 + 0xc);
        lVar9 = (long)iVar12;
        do {
          iVar11 = iVar11 - (uint)*(byte *)(param_2[3] + lVar9 * 4);
          *(int *)((long)param_2 + 0xc) = iVar11;
          lVar9 = lVar9 + 1;
        } while (lVar9 < *(int *)((long)param_2 + 0x2c));
      }
      *(int *)((long)param_2 + 0x2c) = iVar12;
      if (*(int *)((long)param_2 + 0x164) != -1) {
        *(int *)((long)param_2 + 0x2c) = iVar12 + 1;
        *(undefined4 *)(param_2[3] + (long)iVar12 * 4) = 0x400;
        *(int *)(param_2 + 6) = (int)param_2[6] + 1;
      }
    }
    if ((bVar3 & 1) == 0) {
      uVar20 = 0;
    }
    else if ((*(int *)((long)param_2 + 0x2c) < 1) ||
            (*(int *)(param_2[3] + (long)(*(int *)((long)param_2 + 0x2c) + -1) * 4) == 0x400)) {
      uVar20 = 0;
      do {
        if ((long)(ulong)bVar4 <= (long)uVar20) break;
        bVar18 = *(byte *)(lVar17 + 0x1b + uVar20);
        pvVar15 = (void *)((long)pvVar15 + (ulong)bVar18);
        iVar16 = iVar16 - (uint)bVar18;
        uVar20 = uVar20 + 1;
      } while ((ulong)bVar18 == 0xff);
      bVar18 = 0;
    }
    else {
      uVar20 = 0;
    }
    if (iVar16 != 0) {
      iVar12 = *(int *)((long)param_2 + 0xc);
      lVar9 = *param_2;
      if ((int)param_2[1] <= iVar12 + iVar16) {
        lVar9 = FUN_1005a0490(param_1,lVar9,(int)param_2[1] + iVar16 + 0x400);
        if (lVar9 == 0) goto LAB_1005fd470;
        iVar12 = *(int *)((long)param_2 + 0xc);
        *(int *)(param_2 + 1) = (int)param_2[1] + iVar16 + 0x400;
        *param_2 = lVar9;
      }
      _memcpy((void *)(lVar9 + iVar12),pvVar15,(long)iVar16);
      *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + iVar16;
    }
    if ((int)uVar20 < (int)uVar19) {
      iVar16 = *(int *)((long)param_2 + 0x2c);
      lVar9 = param_2[3];
      lVar1 = param_2[4];
      iVar12 = -1;
      do {
        lVar13 = (long)(int)uVar20;
        while( true ) {
          uVar14 = (uint)*(byte *)(lVar17 + lVar13 + 0x1b);
          *(uint *)(lVar9 + (long)iVar16 * 4) = uVar14;
          iVar11 = *(int *)((long)param_2 + 0x2c);
          *(undefined8 *)(lVar1 + (long)iVar11 * 8) = 0xffffffffffffffff;
          if (bVar18 != 0) {
            *(uint *)(lVar9 + (long)iVar11 * 4) = *(uint *)(lVar9 + (long)iVar11 * 4) | 0x100;
            iVar11 = *(int *)((long)param_2 + 0x2c);
          }
          if (uVar14 != 0xff) break;
          bVar18 = 0;
          iVar16 = iVar11 + 1;
          *(int *)((long)param_2 + 0x2c) = iVar16;
          lVar13 = lVar13 + 1;
          if ((int)uVar19 <= (int)lVar13) goto LAB_1005fd4b8;
        }
        bVar18 = 0;
        iVar16 = iVar11 + 1;
        *(int *)((long)param_2 + 0x2c) = iVar16;
        *(int *)(param_2 + 6) = iVar16;
        uVar14 = (int)lVar13 + 1;
        uVar20 = (ulong)uVar14;
        iVar12 = iVar11;
      } while ((int)uVar14 < (int)uVar19);
LAB_1005fd4b8:
      if (iVar12 != -1) {
        *(undefined8 *)(param_2[4] + (long)iVar12 * 8) = uVar10;
      }
    }
    if ((bVar3 & 4) != 0) {
      *(undefined4 *)(param_2 + 0x2b) = 1;
      uVar19 = *(int *)((long)param_2 + 0x2c) - 1;
      if (0 < *(int *)((long)param_2 + 0x2c)) {
        uVar20 = -(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2;
        *(uint *)(param_2[3] + uVar20) = *(uint *)(param_2[3] + uVar20) | 0x200;
      }
    }
    uVar10 = 0;
    *(int *)((long)param_2 + 0x164) = iVar7 + 1;
  }
  else {
    lVar9 = FUN_1005a0490(param_1,param_2[3],((int)param_2[5] + iVar12) * 4 + 0x80);
    if (lVar9 != 0) {
      param_2[3] = lVar9;
      lVar9 = FUN_1005a0490(param_1,param_2[4],((int)param_2[5] + iVar12) * 8 + 0x100);
      if (lVar9 != 0) {
        param_2[4] = lVar9;
        *(uint *)(param_2 + 5) = uVar19 + (int)param_2[5] + 0x21;
        goto LAB_1005fd234;
      }
    }
LAB_1005fd470:
    if (*param_2 != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[3] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[4] != 0) {
      FUN_1005a04e8(param_1);
    }
    _bzero(param_2,0x178);
    uVar10 = 0xffffffff;
  }
  return uVar10;
}




undefined8 FUN_1005fd524(long param_1)

{
  if (-1 < *(int *)(param_1 + 8)) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    return 0;
  }
  return 0xffffffff;
}




undefined8 FUN_1005fd54c(long *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
    uVar1 = 0xffffffff;
    if (*param_1 != 0) {
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      *(undefined8 *)((long)param_1 + 0x2c) = 0;
      *(undefined4 *)((long)param_1 + 0x34) = 0;
      *(undefined4 *)((long)param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x2b) = 0;
      *(undefined4 *)((long)param_1 + 0x15c) = 0;
      *(undefined4 *)((long)param_1 + 0x164) = 0xffffffff;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}




undefined8 FUN_1005fd590(long *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  if (param_1 != (long *)0x0) {
    uVar1 = 0xffffffff;
    if (*param_1 != 0) {
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      *(undefined8 *)((long)param_1 + 0x2c) = 0;
      *(undefined4 *)((long)param_1 + 0x34) = 0;
      *(undefined4 *)((long)param_1 + 0x154) = 0;
      *(undefined4 *)(param_1 + 0x2b) = 0;
      *(undefined4 *)((long)param_1 + 0x15c) = 0;
      *(undefined4 *)((long)param_1 + 0x164) = 0xffffffff;
      param_1[0x2d] = 0;
      param_1[0x2e] = 0;
      *(undefined4 *)(param_1 + 0x2c) = param_2;
      uVar1 = 0;
    }
    return uVar1;
  }
  return 0xffffffff;
}




undefined8 FUN_1005fd5dc(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_1005fd5f8(param_1,param_2,1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_1005fd5f8(long *param_1,long *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  
  uVar2 = *(uint *)((long)param_1 + 0x34);
  uVar7 = (ulong)uVar2;
  if ((int)param_1[6] <= (int)uVar2) {
    return 0;
  }
  uVar4 = *(uint *)(param_1[3] + (long)(int)uVar2 * 4);
  if ((uVar4 >> 10 & 1) != 0) {
    *(uint *)((long)param_1 + 0x34) = uVar2 + 1;
    param_1[0x2d] = param_1[0x2d] + 1;
    return 0xffffffff;
  }
  if ((param_2 != (long *)0x0) || (param_3 != 0)) {
    uVar5 = uVar4 & 0xff;
    uVar6 = uVar4 & 0x200;
    if (uVar5 == 0xff) {
      uVar5 = 0xff;
      uVar7 = (long)(int)uVar2;
      do {
        lVar1 = uVar7 * 4;
        uVar7 = uVar7 + 1;
        uVar3 = *(uint *)(param_1[3] + lVar1 + 4);
        uVar2 = uVar3 & 0xff;
        if ((uVar3 & 0x200) != 0) {
          uVar6 = 0x200;
        }
        uVar5 = uVar2 + uVar5;
      } while (uVar2 == 0xff);
    }
    if (param_2 != (long *)0x0) {
      *(uint *)((long)param_2 + 0xc) = uVar4 & 0x100;
      *(uint *)(param_2 + 2) = uVar6;
      *param_2 = *param_1 + (long)(int)param_1[2];
      param_2[4] = param_1[0x2d];
      param_2[3] = *(long *)(param_1[4] + (long)(int)uVar7 * 8);
      *(uint *)(param_2 + 1) = uVar5;
    }
    if (param_3 != 0) {
      *(uint *)(param_1 + 2) = (int)param_1[2] + uVar5;
      *(int *)((long)param_1 + 0x34) = (int)uVar7 + 1;
      param_1[0x2d] = param_1[0x2d] + 1;
    }
  }
  return 1;
}




undefined8 FUN_1005fd6e0(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    uVar1 = FUN_1005fd5f8(param_1,param_2,0);
    return uVar1;
  }
  return 0;
}




void FUN_1005fd6fc(undefined8 param_1,undefined8 *param_2)

{
  FUN_1005a04e8(param_1,*param_2);
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}




int FUN_1005fd72c(uint param_1)

{
  if (param_1 - 0x61 < 0x1a) {
    param_1 = (param_1 & 0xff) + 0xe0;
  }
  return (int)(char)param_1;
}




void FUN_1005fd748(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}




void FUN_1005fd754(undefined8 param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (param_2 != (long *)0x0) {
    lVar1 = *param_2;
    if (lVar1 != 0) {
      iVar2 = (int)param_2[2];
      if (0 < iVar2) {
        lVar3 = 0;
        while( true ) {
          if (*(long *)(lVar1 + lVar3 * 8) != 0) {
            FUN_1005a04e8(param_1);
            iVar2 = (int)param_2[2];
          }
          lVar3 = lVar3 + 1;
          if (iVar2 <= lVar3) break;
          lVar1 = *param_2;
        }
        lVar1 = *param_2;
      }
      FUN_1005a04e8(param_1,lVar1);
    }
    if (param_2[1] != 0) {
      FUN_1005a04e8(param_1);
    }
    if (param_2[3] != 0) {
      FUN_1005a04e8(param_1);
    }
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  return;
}




undefined4 FUN_1005fd7f4(long param_1,int param_2)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    return *(undefined4 *)(*(long *)(param_1 + 0x20) + (long)param_2 * 4);
  }
  return 0xffffffff;
}




undefined4 FUN_1005fd80c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  lVar1 = FUN_1005a0434(param_1,1,0x1330);
  param_2[4] = lVar1;
  uVar2 = 0xffffff75;
  if (lVar1 != 0) {
    uVar2 = 0;
  }
  return uVar2;
}




void FUN_1005fd850(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = param_2[4];
  if (lVar2 != 0) {
    iVar1 = *(int *)(lVar2 + 8);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        if (*(long *)(lVar2 + 0x20 + lVar3 * 8) != 0) {
          FUN_1005a04e8(param_1);
          iVar1 = *(int *)(lVar2 + 8);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
    iVar1 = *(int *)(lVar2 + 0xc);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        if (*(long *)(lVar2 + 0x220 + lVar3 * 8 + 0x100) != 0) {
          (**(code **)((&PTR_DAT_1014a3488)[*(int *)(lVar2 + 0x220 + lVar3 * 4)] + 0x10))(param_1);
          iVar1 = *(int *)(lVar2 + 0xc);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
    iVar1 = *(int *)(lVar2 + 0x10);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        if (*(long *)(lVar2 + 0x520 + lVar3 * 8 + 0x100) != 0) {
          (**(code **)(*(long *)(&DAT_1014a3460 + (long)*(int *)(lVar2 + 0x520 + lVar3 * 4) * 8) +
                      0x18))(param_1);
          iVar1 = *(int *)(lVar2 + 0x10);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
    iVar1 = *(int *)(lVar2 + 0x14);
    if (0 < iVar1) {
      lVar3 = 0;
      do {
        if (*(long *)(lVar2 + 0x820 + lVar3 * 8 + 0x100) != 0) {
          (**(code **)((&PTR_DAT_1014a3470)[*(int *)(lVar2 + 0x820 + lVar3 * 4)] + 0x18))(param_1);
          iVar1 = *(int *)(lVar2 + 0x14);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < iVar1);
    }
    if (0 < *(int *)(lVar2 + 0x18)) {
      lVar4 = 0;
      lVar3 = 0;
      do {
        if (*(long *)(lVar2 + 0xb20 + lVar3 * 8) != 0) {
          FUN_1006058b4(param_1);
        }
        if (*(long *)(lVar2 + 0x1320) != 0) {
          FUN_100605920(param_1,*(long *)(lVar2 + 0x1320) + lVar4);
        }
        lVar3 = lVar3 + 1;
        lVar4 = lVar4 + 0x48;
      } while (lVar3 < *(int *)(lVar2 + 0x18));
    }
    if (*(long *)(lVar2 + 0x1320) != 0) {
      FUN_1005a04e8(param_1);
    }
    FUN_1005a04e8(param_1,lVar2);
  }
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = 0;
  return;
}




bool FUN_1005fda18(undefined8 *param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 auStack_40 [32];
  
  if (param_1 == (undefined8 *)0x0) {
    bVar1 = false;
  }
  else {
    FUN_10055ac80(auStack_40,*param_1,*(undefined4 *)(param_1 + 1));
    if (*(int *)((long)param_1 + 0xc) == 0) {
      bVar1 = false;
    }
    else {
      iVar3 = FUN_10055afe0(auStack_40,8);
      if (iVar3 == 1) {
        local_44 = 0;
        local_48 = 0;
        uVar2 = FUN_10055afe0(auStack_40,8);
        local_48 = CONCAT31(local_48._1_3_,uVar2);
        uVar2 = FUN_10055afe0(auStack_40,8);
        local_48._0_2_ = CONCAT11(uVar2,(undefined1)local_48);
        uVar2 = FUN_10055afe0(auStack_40,8);
        local_48._0_3_ = CONCAT12(uVar2,(undefined2)local_48);
        uVar2 = FUN_10055afe0(auStack_40,8);
        local_48 = CONCAT13(uVar2,(undefined3)local_48);
        local_44 = FUN_10055afe0(auStack_40,8);
        local_43 = FUN_10055afe0(auStack_40,8);
        iVar3 = _memcmp(&local_48,"vorbis",6);
        bVar1 = iVar3 == 0;
      }
      else {
        bVar1 = false;
      }
    }
  }
  return bVar1;
}




undefined8 FUN_1005fdb08(undefined8 param_1,int *param_2,long *param_3,undefined8 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 auStack_60 [24];
  int local_48;
  
  if (param_4 == (undefined8 *)0x0) {
    return 0xffffff7b;
  }
  FUN_10055ac80(auStack_60,*param_4,*(undefined4 *)(param_4 + 1));
  iVar2 = FUN_10055afe0(auStack_60,8);
  local_64 = 0;
  local_68 = 0;
  uVar1 = FUN_10055afe0(auStack_60,8);
  local_68 = CONCAT31(local_68._1_3_,uVar1);
  uVar1 = FUN_10055afe0(auStack_60,8);
  local_68._0_2_ = CONCAT11(uVar1,(undefined1)local_68);
  uVar1 = FUN_10055afe0(auStack_60,8);
  local_68._0_3_ = CONCAT12(uVar1,(undefined2)local_68);
  uVar1 = FUN_10055afe0(auStack_60,8);
  local_68 = CONCAT13(uVar1,(undefined3)local_68);
  local_64 = FUN_10055afe0(auStack_60,8);
  local_63 = FUN_10055afe0(auStack_60,8);
  iVar3 = _memcmp(&local_68,"vorbis",6);
  if (iVar3 != 0) {
    return 0xffffff7c;
  }
  if (iVar2 == 5) {
    if (param_2[2] == 0) {
      return 0xffffff7b;
    }
    if (param_3[3] == 0) {
      return 0xffffff7b;
    }
    lVar8 = *(long *)(param_2 + 8);
    if (lVar8 == 0) {
      return 0xffffff7f;
    }
    iVar2 = FUN_10055afe0(auStack_60,8);
    *(int *)(lVar8 + 0x18) = iVar2 + 1;
    if (-1 < iVar2) {
      lVar12 = 0;
      do {
        lVar10 = FUN_1005a0434(param_1,1,0x38);
        *(long *)(lVar8 + 0xb20 + lVar12 * 8) = lVar10;
        if (lVar10 == 0) {
          uVar9 = 0xffffff75;
          goto LAB_1005fe10c;
        }
        uVar9 = FUN_10055c530(param_1,auStack_60,lVar10);
        if ((int)uVar9 != 0) goto LAB_1005fe10c;
        lVar12 = lVar12 + 1;
      } while (lVar12 < *(int *)(lVar8 + 0x18));
      iVar2 = FUN_10055afe0(auStack_60,6);
      if (-1 < iVar2) {
        iVar3 = -1;
        do {
          iVar4 = FUN_10055afe0(auStack_60,0x10);
          if (iVar4 != 0) goto LAB_1005fe0d4;
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
        iVar2 = FUN_10055afe0(auStack_60,6);
        *(int *)(lVar8 + 0x10) = iVar2 + 1;
        if (-1 < iVar2) {
          lVar12 = 0;
          do {
            uVar6 = FUN_10055afe0(auStack_60,0x10);
            *(uint *)(lVar8 + 0x520 + lVar12 * 4) = uVar6;
            if (uVar6 == 0) {
              uVar9 = 0xffffff7a;
              goto LAB_1005fe10c;
            }
            if (1 < uVar6) goto LAB_1005fe0d4;
            lVar10 = (**(code **)(*(long *)(&DAT_1014a3460 + (long)(int)uVar6 * 8) + 8))
                               (param_1,param_2,auStack_60);
            *(long *)(lVar8 + 0x520 + lVar12 * 8 + 0x100) = lVar10;
            if (lVar10 == 0) goto LAB_1005fe0d4;
            lVar12 = lVar12 + 1;
          } while (lVar12 < *(int *)(lVar8 + 0x10));
          iVar2 = FUN_10055afe0(auStack_60,6);
          *(int *)(lVar8 + 0x14) = iVar2 + 1;
          if (-1 < iVar2) {
            lVar12 = 0;
            do {
              uVar6 = FUN_10055afe0(auStack_60,0x10);
              *(uint *)(lVar8 + 0x820 + lVar12 * 4) = uVar6;
              if (2 < uVar6) goto LAB_1005fe0d4;
              lVar10 = (**(code **)((&PTR_DAT_1014a3470)[(int)uVar6] + 8))
                                 (param_1,param_2,auStack_60);
              *(long *)(lVar8 + 0x820 + lVar12 * 8 + 0x100) = lVar10;
              if (lVar10 == 0) goto LAB_1005fe0d4;
              lVar12 = lVar12 + 1;
            } while (lVar12 < *(int *)(lVar8 + 0x14));
            iVar2 = FUN_10055afe0(auStack_60,6);
            *(int *)(lVar8 + 0xc) = iVar2 + 1;
            if (-1 < iVar2) {
              lVar12 = 0;
              do {
                iVar2 = FUN_10055afe0(auStack_60,0x10);
                *(int *)(lVar8 + 0x220 + lVar12 * 4) = iVar2;
                if (iVar2 != 0) goto LAB_1005fe0d4;
                lVar10 = FUN_10060155c(param_1,param_2,auStack_60);
                *(long *)(lVar8 + 0x220 + lVar12 * 8 + 0x100) = lVar10;
                if (lVar10 == 0) goto LAB_1005fe0d4;
                lVar12 = lVar12 + 1;
              } while (lVar12 < *(int *)(lVar8 + 0xc));
              iVar2 = FUN_10055afe0(auStack_60,6);
              *(int *)(lVar8 + 8) = iVar2 + 1;
              if (-1 < iVar2) {
                lVar10 = 0;
                lVar12 = lVar8 + 0x20;
                do {
                  lVar11 = FUN_1005a0434(param_1,1,0x10);
                  *(long *)(lVar12 + lVar10 * 8) = lVar11;
                  if (lVar11 == 0) {
                    uVar9 = 0xffffff75;
                    goto LAB_1005fe10c;
                  }
                  uVar5 = FUN_10055afe0(auStack_60,1);
                  lVar11 = lVar10 * 8;
                  **(undefined4 **)(lVar12 + lVar11) = uVar5;
                  uVar5 = FUN_10055afe0(auStack_60,0x10);
                  *(undefined4 *)(*(long *)(lVar12 + lVar11) + 4) = uVar5;
                  uVar5 = FUN_10055afe0(auStack_60,0x10);
                  *(undefined4 *)(*(long *)(lVar12 + lVar11) + 8) = uVar5;
                  iVar2 = FUN_10055afe0(auStack_60,8);
                  lVar11 = *(long *)(lVar12 + lVar11);
                  *(int *)(lVar11 + 0xc) = iVar2;
                  if (0 < *(int *)(lVar11 + 4)) goto LAB_1005fe0d4;
                  uVar9 = 0xffffff7b;
                  if (((0 < *(int *)(lVar11 + 8)) || (iVar2 < 0)) ||
                     (*(int *)(lVar8 + 0xc) <= iVar2)) goto LAB_1005fe10c;
                  lVar10 = lVar10 + 1;
                } while (lVar10 < *(int *)(lVar8 + 8));
                iVar2 = FUN_10055afe0(auStack_60,1);
                if (iVar2 == 1) {
                  return 0;
                }
              }
            }
          }
        }
      }
    }
LAB_1005fe0d4:
    uVar9 = 0xffffff7b;
LAB_1005fe10c:
    FUN_1005fd850(param_1,param_2);
    return uVar9;
  }
  if (iVar2 != 3) {
    if (iVar2 != 1) {
      return 0xffffff7b;
    }
    if (*(int *)((long)param_4 + 0xc) == 0) {
      return 0xffffff7b;
    }
    if (param_2[2] != 0) {
      return 0xffffff7b;
    }
    piVar13 = *(int **)(param_2 + 8);
    if (piVar13 == (int *)0x0) {
      return 0xffffff7f;
    }
    iVar2 = FUN_10055afe0(auStack_60,0x20);
    *param_2 = iVar2;
    if (iVar2 != 0) {
      return 0xffffff7a;
    }
    iVar2 = FUN_10055afe0(auStack_60,8);
    param_2[1] = iVar2;
    iVar2 = FUN_10055afe0(auStack_60,0x20);
    param_2[2] = iVar2;
    iVar2 = FUN_10055afe0(auStack_60,0x20);
    param_2[3] = iVar2;
    iVar2 = FUN_10055afe0(auStack_60,0x20);
    param_2[4] = iVar2;
    iVar2 = FUN_10055afe0(auStack_60,0x20);
    param_2[5] = iVar2;
    uVar6 = FUN_10055afe0(auStack_60,4);
    *piVar13 = 1 << (ulong)(uVar6 & 0x1f);
    uVar6 = FUN_10055afe0(auStack_60,4);
    iVar2 = 1 << (ulong)(uVar6 & 0x1f);
    piVar13[1] = iVar2;
    if ((((0 < param_2[2]) && (0 < param_2[1])) &&
        ((iVar2 < 0x2001 && ((0x3f < *piVar13 && (*piVar13 <= iVar2)))))) &&
       (iVar2 = FUN_10055afe0(auStack_60,1), iVar2 == 1)) {
      return 0;
    }
    FUN_1005fd850(param_1,param_2);
    return 0xffffff7b;
  }
  if (param_2[2] == 0) {
    return 0xffffff7b;
  }
  iVar2 = FUN_10055afe0(auStack_60,0x20);
  if ((-1 < iVar2) && (iVar2 <= local_48 + -8)) {
    puVar7 = (undefined1 *)FUN_1005a0434(param_1,iVar2 + 1,1);
    param_3[3] = (long)puVar7;
    if (puVar7 == (undefined1 *)0x0) {
      uVar9 = 0xffffff75;
      goto LAB_1005fdd84;
    }
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      uVar1 = FUN_10055afe0(auStack_60,8);
      *puVar7 = uVar1;
      puVar7 = puVar7 + 1;
    }
    iVar3 = FUN_10055afe0(auStack_60,0x20);
    iVar2 = local_48;
    if ((-1 < iVar3) && (iVar4 = FUN_10055b2f4(auStack_60), iVar3 <= iVar2 - iVar4 >> 2)) {
      *(int *)(param_3 + 2) = iVar3;
      lVar8 = FUN_1005a0434(param_1,iVar3 + 1,8);
      *param_3 = lVar8;
      if (lVar8 == 0) {
        uVar9 = 0xffffff75;
        goto LAB_1005fdd84;
      }
      lVar8 = FUN_1005a0434(param_1,(int)param_3[2] + 1,4);
      param_3[1] = lVar8;
      if (lVar8 == 0) {
        uVar9 = 0xffffff75;
        goto LAB_1005fdd84;
      }
      if (0 < (int)param_3[2]) {
        lVar8 = 0;
        do {
          iVar2 = FUN_10055afe0(auStack_60,0x20);
          iVar3 = local_48;
          if ((iVar2 < 0) || (iVar4 = FUN_10055b2f4(auStack_60), iVar3 - iVar4 < iVar2))
          goto LAB_1005fdd80;
          *(int *)(param_3[1] + lVar8 * 4) = iVar2;
          uVar9 = FUN_1005a0434(param_1,iVar2 + 1,1);
          *(undefined8 *)(*param_3 + lVar8 * 8) = uVar9;
          puVar7 = *(undefined1 **)(*param_3 + lVar8 * 8);
          if (puVar7 == (undefined1 *)0x0) {
            uVar9 = 0xffffff75;
            goto LAB_1005fdd84;
          }
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            uVar1 = FUN_10055afe0(auStack_60,8);
            *puVar7 = uVar1;
            puVar7 = puVar7 + 1;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < (int)param_3[2]);
      }
      iVar2 = FUN_10055afe0(auStack_60,1);
      if (iVar2 == 1) {
        return 0;
      }
    }
  }
LAB_1005fdd80:
  uVar9 = 0xffffff7b;
LAB_1005fdd84:
  FUN_1005fd754(param_1,param_3);
  return uVar9;
}




void FUN_1005fe22c(long param_1,ulong param_2,ulong param_3,int param_4)

{
  ulong uVar1;
  float *pfVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  
  if (param_4 != 0) {
    uVar3 = (ulong)(param_4 - 1);
    uVar1 = uVar3 + 1 & 0x1fffffff8;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    else if (param_2 + uVar3 * 4 < param_3 || param_3 + uVar3 * 4 < param_2) {
      uVar4 = uVar3 + 1 & 0xfffffffffffffff8;
      puVar6 = (undefined8 *)(param_3 + 0x10);
      puVar9 = (undefined8 *)(param_2 + 0x10);
      pauVar10 = (undefined1 (*) [16])(param_1 + 0x10);
      do {
        auVar11 = NEON_scvtf(pauVar10[-1],4);
        auVar13 = NEON_scvtf(*pauVar10,4);
        auVar12._0_8_ =
             CONCAT44(auVar11._4_4_ * (float)((ulong)puVar9[-2] >> 0x20),
                      auVar11._0_4_ * (float)puVar9[-2]);
        auVar12._8_4_ = auVar11._8_4_ * (float)puVar9[-1];
        auVar12._12_4_ = auVar11._12_4_ * (float)((ulong)puVar9[-1] >> 0x20);
        auVar14._0_8_ =
             CONCAT44(auVar13._4_4_ * (float)((ulong)*puVar9 >> 0x20),auVar13._0_4_ * (float)*puVar9
                     );
        auVar14._8_4_ = auVar13._8_4_ * (float)puVar9[1];
        auVar14._12_4_ = auVar13._12_4_ * (float)((ulong)puVar9[1] >> 0x20);
        puVar6[-2] = auVar12._0_8_;
        auVar11 = NEON_ext(auVar12,auVar12,8,1);
        *puVar6 = auVar14._0_8_;
        puVar6[-1] = auVar11._0_8_;
        auVar11 = NEON_ext(auVar14,auVar14,8,1);
        puVar6[1] = auVar11._0_8_;
        uVar4 = uVar4 - 8;
        puVar6 = puVar6 + 4;
        puVar9 = puVar9 + 4;
        pauVar10 = pauVar10 + 2;
      } while (uVar4 != 0);
    }
    else {
      uVar1 = 0;
    }
    if (uVar3 + 1 != uVar1) {
      param_4 = param_4 - (int)uVar1;
      lVar7 = uVar1 * 4;
      pfVar2 = (float *)(param_3 + lVar7);
      pfVar5 = (float *)(param_2 + lVar7);
      piVar8 = (int *)(param_1 + lVar7);
      do {
        *pfVar2 = (float)*piVar8 * *pfVar5;
        param_4 = param_4 + -1;
        pfVar2 = pfVar2 + 1;
        pfVar5 = pfVar5 + 1;
        piVar8 = piVar8 + 1;
      } while (param_4 != 0);
    }
  }
  return;
}




void FUN_1005fe2fc(long param_1,uint param_2,int param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  
  if (param_3 == 0) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = param_3 - 1;
    _bzero(param_4,(ulong)uVar6 * 4 + 4);
  }
  uVar3 = 0;
  do {
    if (param_3 != 0) {
      iVar2 = 0;
      fVar7 = *(float *)(param_1 + uVar3 * 4);
      pfVar5 = param_4;
      do {
        *pfVar5 = *pfVar5 + fVar7 * *(float *)(param_1 + (ulong)(uint)((int)uVar3 + iVar2) * 4);
        iVar2 = iVar2 + 1;
        pfVar5 = pfVar5 + 1;
      } while (uVar6 + 1 != iVar2);
    }
    uVar1 = (int)uVar3 + 1;
    uVar3 = (ulong)uVar1;
  } while (uVar1 <= param_2 - param_3);
  if (uVar1 < param_2) {
    do {
      uVar4 = 0;
      fVar7 = *(float *)(param_1 + uVar3 * 4);
      iVar2 = (int)uVar3;
      do {
        param_4[uVar4] =
             param_4[uVar4] + fVar7 * *(float *)(param_1 + (ulong)(uint)(iVar2 + (int)uVar4) * 4);
        uVar4 = uVar4 + 1;
      } while (uVar4 < param_2 - iVar2);
      uVar3 = uVar3 + 1;
    } while (iVar2 != param_2 - 1);
  }
  return;
}




void FUN_1005fe3f0(float *param_1,uint *param_2,long param_3,long param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  double *pdVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double local_158 [32];
  long local_58;
  
  lVar10 = *(long *)PTR____stack_chk_guard_101444218;
  local_58 = lVar10;
  _memset(local_158,0,0x100);
  dVar11 = (double)*param_1;
  uVar2 = *param_2;
  uVar4 = 0xffffffff;
  uVar3 = 0;
  do {
    if (uVar2 <= uVar3) goto LAB_1005fe560;
    uVar5 = uVar3 >> 1 & 0x7fffffff;
    uVar1 = uVar3 + 1;
    dVar12 = (double)-param_1[uVar1 & 0xffffffff];
    if (uVar3 != 0) {
      pdVar6 = local_158;
      uVar7 = uVar3;
      do {
        dVar12 = dVar12 - *pdVar6 * (double)param_1[uVar7 & 0xffffffff];
        uVar7 = uVar7 - 1;
        pdVar6 = pdVar6 + 1;
      } while ((int)uVar7 != 0);
    }
    dVar12 = dVar12 / dVar11;
    local_158[uVar3] = dVar12;
    if ((int)uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      uVar7 = 0;
      uVar8 = uVar4;
      do {
        dVar13 = local_158[uVar7];
        uVar9 = uVar8 & 0xffffffff;
        local_158[uVar7] = dVar13 + dVar12 * local_158[uVar9];
        local_158[uVar9] = dVar12 * dVar13 + local_158[uVar9];
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 - 1;
      } while (uVar7 < uVar5);
    }
    if ((uVar3 & 1) != 0) {
      local_158[uVar5] = local_158[uVar5] + dVar12 * local_158[uVar5];
    }
    uVar5 = 0;
    do {
      *(float *)(param_3 + uVar3 * 0x80 + uVar5 * 4) = -(float)local_158[uVar5];
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 <= uVar3);
    dVar11 = dVar11 * (1.0 - dVar12 * dVar12);
    *(double *)(param_4 + uVar3 * 8) = dVar11;
    uVar4 = uVar4 + 1;
    uVar3 = uVar1;
  } while (dVar11 != 0.0);
  *param_2 = (uint)uVar1;
LAB_1005fe560:
  if (lVar10 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1005fe58c(float *param_1,int param_2,int param_3,int *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int local_64;
  
  if (param_2 == 0) {
    uVar5 = 2;
  }
  else {
    iVar1 = 1 << (ulong)(param_3 - 1U & 0x1f);
    iVar2 = -iVar1;
    iVar1 = iVar1 + -1;
    pfVar8 = param_1;
    iVar7 = param_2;
    fVar3 = 0.0;
    do {
      fVar4 = ABS(*pfVar8);
      if (ABS(*pfVar8) <= fVar3) {
        fVar4 = fVar3;
      }
      iVar7 = iVar7 + -1;
      pfVar8 = pfVar8 + 1;
      fVar3 = fVar4;
    } while (iVar7 != 0);
    if (fVar4 <= 0.0) {
      uVar5 = 2;
    }
    else {
      _frexp(&local_64);
      iVar7 = (param_3 - 1U) - (local_64 + -1);
      uVar6 = iVar7 - 1;
      *param_5 = uVar6;
      if ((int)uVar6 < 0x10) {
        if (iVar7 < -0xf) {
          return 1;
        }
      }
      else {
        *param_5 = 0xf;
        uVar6 = 0xf;
      }
      if ((int)uVar6 < 0) {
        if (param_2 != 0) {
          fVar3 = 0.0;
          do {
            fVar3 = fVar3 + *param_1 / (float)(1 << (ulong)(-uVar6 & 0x1f));
            fVar4 = fVar3 + -0.5;
            if (0.0 <= fVar3) {
              fVar4 = fVar3 + 0.5;
            }
            iVar9 = (int)fVar4;
            iVar7 = iVar1;
            if ((iVar9 <= iVar1) && (iVar7 = iVar2, iVar2 <= iVar9)) {
              iVar7 = iVar9;
            }
            fVar3 = fVar3 - (float)iVar7;
            *param_4 = iVar7;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            param_4 = param_4 + 1;
          } while (param_2 != 0);
        }
        uVar5 = 0;
        *param_5 = 0;
      }
      else if (param_2 == 0) {
        uVar5 = 0;
      }
      else {
        fVar3 = 0.0;
        while( true ) {
          param_2 = param_2 + -1;
          fVar3 = fVar3 + *param_1 * (float)(1 << (ulong)(uVar6 & 0x1f));
          fVar4 = fVar3 + -0.5;
          if (0.0 <= fVar3) {
            fVar4 = fVar3 + 0.5;
          }
          iVar9 = (int)fVar4;
          iVar7 = iVar1;
          if ((iVar9 <= iVar1) && (iVar7 = iVar2, iVar2 <= iVar9)) {
            iVar7 = iVar9;
          }
          *param_4 = iVar7;
          if (param_2 == 0) break;
          fVar3 = fVar3 - (float)iVar7;
          uVar6 = *param_5;
          param_4 = param_4 + 1;
          param_1 = param_1 + 1;
        }
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}




void FUN_1005fe7a0(int *param_1,int param_2,int *param_3,uint param_4,uint param_5,int *param_6)

{
  int *piVar1;
  int iVar2;
  
  if (param_4 < 0xd) {
    if (param_4 < 9) {
      if (param_4 < 5) {
        if (param_4 < 3) {
          if (param_4 == 2) {
            if (0 < param_2) {
              do {
                *param_6 = *param_1 -
                           (param_1[-1] * *param_3 + param_1[-2] * param_3[1] >> (param_5 & 0x1f));
                param_2 = param_2 + -1;
                param_1 = param_1 + 1;
                param_6 = param_6 + 1;
              } while (param_2 != 0);
            }
          }
          else if (0 < param_2) {
            do {
              *param_6 = *param_1 - (param_1[-1] * *param_3 >> (param_5 & 0x1f));
              param_2 = param_2 + -1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
            } while (param_2 != 0);
          }
        }
        else if (param_4 == 4) {
          if (0 < param_2) {
            piVar1 = param_1 + -2;
            do {
              *param_6 = piVar1[2] -
                         (piVar1[-1] * param_3[2] + piVar1[-2] * param_3[3] + *piVar1 * param_3[1] +
                          piVar1[1] * *param_3 >> (param_5 & 0x1f));
              param_2 = param_2 + -1;
              param_6 = param_6 + 1;
              piVar1 = piVar1 + 1;
            } while (param_2 != 0);
          }
        }
        else if (0 < param_2) {
          piVar1 = param_1 + -3;
          do {
            *param_6 = piVar1[3] -
                       (piVar1[1] * param_3[1] + *piVar1 * param_3[2] + piVar1[2] * *param_3 >>
                       (param_5 & 0x1f));
            param_2 = param_2 + -1;
            param_6 = param_6 + 1;
            piVar1 = piVar1 + 1;
          } while (param_2 != 0);
        }
      }
      else if (param_4 < 7) {
        if (param_4 == 6) {
          if (0 < param_2) {
            piVar1 = param_1 + -3;
            do {
              *param_6 = piVar1[3] -
                         (piVar1[-2] * param_3[4] + piVar1[-3] * param_3[5] +
                          piVar1[-1] * param_3[3] + *piVar1 * param_3[2] + piVar1[1] * param_3[1] +
                          piVar1[2] * *param_3 >> (param_5 & 0x1f));
              param_2 = param_2 + -1;
              param_6 = param_6 + 1;
              piVar1 = piVar1 + 1;
            } while (param_2 != 0);
          }
        }
        else if (0 < param_2) {
          piVar1 = param_1 + -2;
          do {
            *param_6 = piVar1[2] -
                       (piVar1[-2] * param_3[3] + piVar1[-3] * param_3[4] + piVar1[-1] * param_3[2]
                        + *piVar1 * param_3[1] + piVar1[1] * *param_3 >> (param_5 & 0x1f));
            param_2 = param_2 + -1;
            param_6 = param_6 + 1;
            piVar1 = piVar1 + 1;
          } while (param_2 != 0);
        }
      }
      else if (param_4 == 8) {
        if (0 < param_2) {
          piVar1 = param_1 + -4;
          do {
            *param_6 = piVar1[4] -
                       (piVar1[-3] * param_3[6] + piVar1[-4] * param_3[7] + piVar1[-2] * param_3[5]
                        + piVar1[-1] * param_3[4] + *piVar1 * param_3[3] + piVar1[1] * param_3[2] +
                        piVar1[2] * param_3[1] + piVar1[3] * *param_3 >> (param_5 & 0x1f));
            param_2 = param_2 + -1;
            param_6 = param_6 + 1;
            piVar1 = piVar1 + 1;
          } while (param_2 != 0);
        }
      }
      else if (0 < param_2) {
        piVar1 = param_1 + -3;
        do {
          *param_6 = piVar1[3] -
                     (piVar1[-3] * param_3[5] + piVar1[-4] * param_3[6] + piVar1[-2] * param_3[4] +
                      piVar1[-1] * param_3[3] + *piVar1 * param_3[2] + piVar1[1] * param_3[1] +
                      piVar1[2] * *param_3 >> (param_5 & 0x1f));
          param_2 = param_2 + -1;
          param_6 = param_6 + 1;
          piVar1 = piVar1 + 1;
        } while (param_2 != 0);
      }
    }
    else if (param_4 < 0xb) {
      if (param_4 == 10) {
        if (0 < param_2) {
          piVar1 = param_1 + -5;
          do {
            *param_6 = piVar1[5] -
                       (piVar1[-4] * param_3[8] + piVar1[-5] * param_3[9] + piVar1[-3] * param_3[7]
                        + piVar1[-2] * param_3[6] + piVar1[-1] * param_3[5] + *piVar1 * param_3[4] +
                        piVar1[1] * param_3[3] + piVar1[2] * param_3[2] + piVar1[3] * param_3[1] +
                        piVar1[4] * *param_3 >> (param_5 & 0x1f));
            param_2 = param_2 + -1;
            param_6 = param_6 + 1;
            piVar1 = piVar1 + 1;
          } while (param_2 != 0);
        }
      }
      else if (0 < param_2) {
        piVar1 = param_1 + -4;
        do {
          *param_6 = piVar1[4] -
                     (piVar1[-4] * param_3[7] + piVar1[-5] * param_3[8] + piVar1[-3] * param_3[6] +
                      piVar1[-2] * param_3[5] + piVar1[-1] * param_3[4] + *piVar1 * param_3[3] +
                      piVar1[1] * param_3[2] + piVar1[2] * param_3[1] + piVar1[3] * *param_3 >>
                     (param_5 & 0x1f));
          param_2 = param_2 + -1;
          param_6 = param_6 + 1;
          piVar1 = piVar1 + 1;
        } while (param_2 != 0);
      }
    }
    else if (param_4 == 0xc) {
      if (0 < param_2) {
        piVar1 = param_1 + -6;
        do {
          *param_6 = piVar1[6] -
                     (piVar1[-5] * param_3[10] + piVar1[-6] * param_3[0xb] + piVar1[-4] * param_3[9]
                      + piVar1[-3] * param_3[8] + piVar1[-2] * param_3[7] + piVar1[-1] * param_3[6]
                      + *piVar1 * param_3[5] + piVar1[1] * param_3[4] + piVar1[2] * param_3[3] +
                      piVar1[3] * param_3[2] + piVar1[4] * param_3[1] + piVar1[5] * *param_3 >>
                     (param_5 & 0x1f));
          param_2 = param_2 + -1;
          param_6 = param_6 + 1;
          piVar1 = piVar1 + 1;
        } while (param_2 != 0);
      }
    }
    else if (0 < param_2) {
      piVar1 = param_1 + -5;
      do {
        *param_6 = piVar1[5] -
                   (piVar1[-5] * param_3[9] + piVar1[-6] * param_3[10] + piVar1[-4] * param_3[8] +
                    piVar1[-3] * param_3[7] + piVar1[-2] * param_3[6] + piVar1[-1] * param_3[5] +
                    *piVar1 * param_3[4] + piVar1[1] * param_3[3] + piVar1[2] * param_3[2] +
                    piVar1[3] * param_3[1] + piVar1[4] * *param_3 >> (param_5 & 0x1f));
        param_2 = param_2 + -1;
        param_6 = param_6 + 1;
        piVar1 = piVar1 + 1;
      } while (param_2 != 0);
    }
  }
  else if (0 < param_2) {
    param_1 = param_1 + -0x10;
    do {
      iVar2 = 0;
      switch(param_4) {
      case 0x20:
        iVar2 = param_1[-0x10] * param_3[0x1f];
      case 0x1f:
        iVar2 = iVar2 + param_1[-0xf] * param_3[0x1e];
      case 0x1e:
        iVar2 = iVar2 + param_1[-0xe] * param_3[0x1d];
      case 0x1d:
        iVar2 = iVar2 + param_1[-0xd] * param_3[0x1c];
      case 0x1c:
        iVar2 = iVar2 + param_1[-0xc] * param_3[0x1b];
      case 0x1b:
        iVar2 = iVar2 + param_1[-0xb] * param_3[0x1a];
      case 0x1a:
        iVar2 = iVar2 + param_1[-10] * param_3[0x19];
      case 0x19:
        iVar2 = iVar2 + param_1[-9] * param_3[0x18];
      case 0x18:
        iVar2 = iVar2 + param_1[-8] * param_3[0x17];
      case 0x17:
        iVar2 = iVar2 + param_1[-7] * param_3[0x16];
      case 0x16:
        iVar2 = iVar2 + param_1[-6] * param_3[0x15];
      case 0x15:
        iVar2 = iVar2 + param_1[-5] * param_3[0x14];
      case 0x14:
        iVar2 = iVar2 + param_1[-4] * param_3[0x13];
      case 0x13:
        iVar2 = iVar2 + param_1[-3] * param_3[0x12];
      case 0x12:
        iVar2 = iVar2 + param_1[-2] * param_3[0x11];
      case 0x11:
        iVar2 = iVar2 + param_1[-1] * param_3[0x10];
      case 0x10:
        iVar2 = iVar2 + *param_1 * param_3[0xf];
      case 0xf:
        iVar2 = iVar2 + param_1[1] * param_3[0xe];
      case 0xe:
        iVar2 = iVar2 + param_1[2] * param_3[0xd];
      case 0xd:
        iVar2 = iVar2 + param_1[3] * param_3[0xc] + param_1[4] * param_3[0xb] +
                param_1[5] * param_3[10] + param_1[6] * param_3[9] + param_1[7] * param_3[8] +
                param_1[8] * param_3[7] + param_1[9] * param_3[6] + param_1[10] * param_3[5] +
                param_1[0xb] * param_3[4] + param_1[0xc] * param_3[3] + param_1[0xd] * param_3[2] +
                param_1[0xe] * param_3[1] + param_1[0xf] * *param_3;
      }
      *param_6 = param_1[0x10] - (iVar2 >> (param_5 & 0x1f));
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      param_6 = param_6 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_1005ff02c(int *param_1,int param_2,int *param_3,uint param_4,ulong param_5,int *param_6)

{
  int *piVar1;
  long lVar2;
  
  if (param_4 < 0xd) {
    if (param_4 < 9) {
      if (param_4 < 5) {
        if (param_4 < 3) {
          if (param_4 == 2) {
            if (0 < param_2) {
              do {
                *param_6 = *param_1 -
                           (int)((long)param_1[-1] * (long)*param_3 +
                                 (long)param_1[-2] * (long)param_3[1] >> (param_5 & 0x3f));
                param_2 = param_2 + -1;
                param_1 = param_1 + 1;
                param_6 = param_6 + 1;
              } while (param_2 != 0);
            }
          }
          else if (0 < param_2) {
            do {
              *param_6 = *param_1 - (int)((long)param_1[-1] * (long)*param_3 >> (param_5 & 0x3f));
              param_2 = param_2 + -1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
            } while (param_2 != 0);
          }
        }
        else if (param_4 == 4) {
          if (0 < param_2) {
            piVar1 = param_1 + -2;
            do {
              *param_6 = piVar1[2] -
                         (int)((long)piVar1[-1] * (long)param_3[2] +
                               (long)piVar1[-2] * (long)param_3[3] +
                               (long)*piVar1 * (long)param_3[1] + (long)piVar1[1] * (long)*param_3
                              >> (param_5 & 0x3f));
              param_2 = param_2 + -1;
              param_6 = param_6 + 1;
              piVar1 = piVar1 + 1;
            } while (param_2 != 0);
          }
        }
        else if (0 < param_2) {
          piVar1 = param_1 + -3;
          do {
            *param_6 = piVar1[3] -
                       (int)((long)piVar1[1] * (long)param_3[1] + (long)*piVar1 * (long)param_3[2] +
                             (long)piVar1[2] * (long)*param_3 >> (param_5 & 0x3f));
            param_2 = param_2 + -1;
            param_6 = param_6 + 1;
            piVar1 = piVar1 + 1;
          } while (param_2 != 0);
        }
      }
      else if (param_4 < 7) {
        if (param_4 == 6) {
          if (0 < param_2) {
            piVar1 = param_1 + -3;
            do {
              *param_6 = piVar1[3] -
                         (int)((long)piVar1[-2] * (long)param_3[4] +
                               (long)piVar1[-3] * (long)param_3[5] +
                               (long)piVar1[-1] * (long)param_3[3] +
                               (long)*piVar1 * (long)param_3[2] + (long)piVar1[1] * (long)param_3[1]
                               + (long)piVar1[2] * (long)*param_3 >> (param_5 & 0x3f));
              param_2 = param_2 + -1;
              param_6 = param_6 + 1;
              piVar1 = piVar1 + 1;
            } while (param_2 != 0);
          }
        }
        else if (0 < param_2) {
          piVar1 = param_1 + -2;
          do {
            *param_6 = piVar1[2] -
                       (int)((long)piVar1[-2] * (long)param_3[3] +
                             (long)piVar1[-3] * (long)param_3[4] +
                             (long)piVar1[-1] * (long)param_3[2] + (long)*piVar1 * (long)param_3[1]
                             + (long)piVar1[1] * (long)*param_3 >> (param_5 & 0x3f));
            param_2 = param_2 + -1;
            param_6 = param_6 + 1;
            piVar1 = piVar1 + 1;
          } while (param_2 != 0);
        }
      }
      else if (param_4 == 8) {
        if (0 < param_2) {
          piVar1 = param_1 + -4;
          do {
            *param_6 = piVar1[4] -
                       (int)((long)piVar1[-3] * (long)param_3[6] +
                             (long)piVar1[-4] * (long)param_3[7] +
                             (long)piVar1[-2] * (long)param_3[5] +
                             (long)piVar1[-1] * (long)param_3[4] + (long)*piVar1 * (long)param_3[3]
                             + (long)piVar1[1] * (long)param_3[2] +
                             (long)piVar1[2] * (long)param_3[1] + (long)piVar1[3] * (long)*param_3
                            >> (param_5 & 0x3f));
            param_2 = param_2 + -1;
            param_6 = param_6 + 1;
            piVar1 = piVar1 + 1;
          } while (param_2 != 0);
        }
      }
      else if (0 < param_2) {
        piVar1 = param_1 + -3;
        do {
          *param_6 = piVar1[3] -
                     (int)((long)piVar1[-3] * (long)param_3[5] + (long)piVar1[-4] * (long)param_3[6]
                           + (long)piVar1[-2] * (long)param_3[4] +
                           (long)piVar1[-1] * (long)param_3[3] + (long)*piVar1 * (long)param_3[2] +
                           (long)piVar1[1] * (long)param_3[1] + (long)piVar1[2] * (long)*param_3 >>
                          (param_5 & 0x3f));
          param_2 = param_2 + -1;
          param_6 = param_6 + 1;
          piVar1 = piVar1 + 1;
        } while (param_2 != 0);
      }
    }
    else if (param_4 < 0xb) {
      if (param_4 == 10) {
        if (0 < param_2) {
          piVar1 = param_1 + -5;
          do {
            *param_6 = piVar1[5] -
                       (int)((long)piVar1[-4] * (long)param_3[8] +
                             (long)piVar1[-5] * (long)param_3[9] +
                             (long)piVar1[-3] * (long)param_3[7] +
                             (long)piVar1[-2] * (long)param_3[6] +
                             (long)piVar1[-1] * (long)param_3[5] + (long)*piVar1 * (long)param_3[4]
                             + (long)piVar1[1] * (long)param_3[3] +
                             (long)piVar1[2] * (long)param_3[2] + (long)piVar1[3] * (long)param_3[1]
                             + (long)piVar1[4] * (long)*param_3 >> (param_5 & 0x3f));
            param_2 = param_2 + -1;
            param_6 = param_6 + 1;
            piVar1 = piVar1 + 1;
          } while (param_2 != 0);
        }
      }
      else if (0 < param_2) {
        piVar1 = param_1 + -4;
        do {
          *param_6 = piVar1[4] -
                     (int)((long)piVar1[-4] * (long)param_3[7] + (long)piVar1[-5] * (long)param_3[8]
                           + (long)piVar1[-3] * (long)param_3[6] +
                           (long)piVar1[-2] * (long)param_3[5] + (long)piVar1[-1] * (long)param_3[4]
                           + (long)*piVar1 * (long)param_3[3] + (long)piVar1[1] * (long)param_3[2] +
                           (long)piVar1[2] * (long)param_3[1] + (long)piVar1[3] * (long)*param_3 >>
                          (param_5 & 0x3f));
          param_2 = param_2 + -1;
          param_6 = param_6 + 1;
          piVar1 = piVar1 + 1;
        } while (param_2 != 0);
      }
    }
    else if (param_4 == 0xc) {
      if (0 < param_2) {
        piVar1 = param_1 + -6;
        do {
          *param_6 = piVar1[6] -
                     (int)((long)piVar1[-5] * (long)param_3[10] +
                           (long)piVar1[-6] * (long)param_3[0xb] +
                           (long)piVar1[-4] * (long)param_3[9] + (long)piVar1[-3] * (long)param_3[8]
                           + (long)piVar1[-2] * (long)param_3[7] +
                           (long)piVar1[-1] * (long)param_3[6] + (long)*piVar1 * (long)param_3[5] +
                           (long)piVar1[1] * (long)param_3[4] + (long)piVar1[2] * (long)param_3[3] +
                           (long)piVar1[3] * (long)param_3[2] + (long)piVar1[4] * (long)param_3[1] +
                           (long)piVar1[5] * (long)*param_3 >> (param_5 & 0x3f));
          param_2 = param_2 + -1;
          param_6 = param_6 + 1;
          piVar1 = piVar1 + 1;
        } while (param_2 != 0);
      }
    }
    else if (0 < param_2) {
      piVar1 = param_1 + -5;
      do {
        *param_6 = piVar1[5] -
                   (int)((long)piVar1[-5] * (long)param_3[9] + (long)piVar1[-6] * (long)param_3[10]
                         + (long)piVar1[-4] * (long)param_3[8] + (long)piVar1[-3] * (long)param_3[7]
                         + (long)piVar1[-2] * (long)param_3[6] + (long)piVar1[-1] * (long)param_3[5]
                         + (long)*piVar1 * (long)param_3[4] + (long)piVar1[1] * (long)param_3[3] +
                         (long)piVar1[2] * (long)param_3[2] + (long)piVar1[3] * (long)param_3[1] +
                         (long)piVar1[4] * (long)*param_3 >> (param_5 & 0x3f));
        param_2 = param_2 + -1;
        param_6 = param_6 + 1;
        piVar1 = piVar1 + 1;
      } while (param_2 != 0);
    }
  }
  else if (0 < param_2) {
    param_1 = param_1 + -0x10;
    do {
      lVar2 = 0;
      switch(param_4) {
      case 0x20:
        lVar2 = (long)param_1[-0x10] * (long)param_3[0x1f];
      case 0x1f:
        lVar2 = lVar2 + (long)param_1[-0xf] * (long)param_3[0x1e];
      case 0x1e:
        lVar2 = lVar2 + (long)param_1[-0xe] * (long)param_3[0x1d];
      case 0x1d:
        lVar2 = lVar2 + (long)param_1[-0xd] * (long)param_3[0x1c];
      case 0x1c:
        lVar2 = lVar2 + (long)param_1[-0xc] * (long)param_3[0x1b];
      case 0x1b:
        lVar2 = lVar2 + (long)param_1[-0xb] * (long)param_3[0x1a];
      case 0x1a:
        lVar2 = lVar2 + (long)param_1[-10] * (long)param_3[0x19];
      case 0x19:
        lVar2 = lVar2 + (long)param_1[-9] * (long)param_3[0x18];
      case 0x18:
        lVar2 = lVar2 + (long)param_1[-8] * (long)param_3[0x17];
      case 0x17:
        lVar2 = lVar2 + (long)param_1[-7] * (long)param_3[0x16];
      case 0x16:
        lVar2 = lVar2 + (long)param_1[-6] * (long)param_3[0x15];
      case 0x15:
        lVar2 = lVar2 + (long)param_1[-5] * (long)param_3[0x14];
      case 0x14:
        lVar2 = lVar2 + (long)param_1[-4] * (long)param_3[0x13];
      case 0x13:
        lVar2 = lVar2 + (long)param_1[-3] * (long)param_3[0x12];
      case 0x12:
        lVar2 = lVar2 + (long)param_1[-2] * (long)param_3[0x11];
      case 0x11:
        lVar2 = lVar2 + (long)param_1[-1] * (long)param_3[0x10];
      case 0x10:
        lVar2 = lVar2 + (long)*param_1 * (long)param_3[0xf];
      case 0xf:
        lVar2 = lVar2 + (long)param_1[1] * (long)param_3[0xe];
      case 0xe:
        lVar2 = lVar2 + (long)param_1[2] * (long)param_3[0xd];
      case 0xd:
        lVar2 = lVar2 + (long)param_1[3] * (long)param_3[0xc] +
                (long)param_1[4] * (long)param_3[0xb] + (long)param_1[5] * (long)param_3[10] +
                (long)param_1[6] * (long)param_3[9] + (long)param_1[7] * (long)param_3[8] +
                (long)param_1[8] * (long)param_3[7] + (long)param_1[9] * (long)param_3[6] +
                (long)param_1[10] * (long)param_3[5] + (long)param_1[0xb] * (long)param_3[4] +
                (long)param_1[0xc] * (long)param_3[3] + (long)param_1[0xd] * (long)param_3[2] +
                (long)param_1[0xe] * (long)param_3[1] + (long)param_1[0xf] * (long)*param_3;
      }
      *param_6 = param_1[0x10] - (int)(lVar2 >> (param_5 & 0x3f));
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
      param_6 = param_6 + 1;
    } while (param_2 != 0);
  }
  return;
}




void FUN_1005ff9c0(int *param_1,int param_2,int *param_3,uint param_4,uint param_5,int *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  if (param_4 < 0xd) {
    if (param_4 < 9) {
      if (param_4 < 5) {
        if (param_4 < 3) {
          if (param_4 == 2) {
            if (0 < param_2) {
              iVar4 = param_6[-2];
              iVar6 = param_6[-1];
              do {
                iVar5 = (iVar6 * *param_3 + iVar4 * param_3[1] >> (param_5 & 0x1f)) + *param_1;
                *param_6 = iVar5;
                param_2 = param_2 + -1;
                param_1 = param_1 + 1;
                param_6 = param_6 + 1;
                iVar4 = iVar6;
                iVar6 = iVar5;
              } while (param_2 != 0);
            }
          }
          else if (0 < param_2) {
            iVar4 = param_6[-1];
            do {
              iVar4 = (iVar4 * *param_3 >> (param_5 & 0x1f)) + *param_1;
              *param_6 = iVar4;
              param_2 = param_2 + -1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
            } while (param_2 != 0);
          }
        }
        else if (param_4 == 4) {
          if (0 < param_2) {
            iVar4 = param_6[-4];
            iVar6 = param_6[-3];
            iVar5 = param_6[-2];
            iVar7 = param_6[-1];
            do {
              iVar8 = (iVar6 * param_3[2] + iVar4 * param_3[3] + iVar5 * param_3[1] +
                       iVar7 * *param_3 >> (param_5 & 0x1f)) + *param_1;
              *param_6 = iVar8;
              param_2 = param_2 + -1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              iVar4 = iVar6;
              iVar6 = iVar5;
              iVar5 = iVar7;
              iVar7 = iVar8;
            } while (param_2 != 0);
          }
        }
        else if (0 < param_2) {
          iVar6 = param_6[-3];
          iVar5 = param_6[-2];
          iVar4 = param_6[-1];
          do {
            iVar7 = (iVar5 * param_3[1] + iVar6 * param_3[2] + iVar4 * *param_3 >> (param_5 & 0x1f))
                    + *param_1;
            *param_6 = iVar7;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            iVar6 = iVar5;
            iVar5 = iVar4;
            iVar4 = iVar7;
          } while (param_2 != 0);
        }
      }
      else if (param_4 < 7) {
        if (param_4 == 6) {
          if (0 < param_2) {
            iVar4 = param_6[-6];
            iVar6 = param_6[-5];
            iVar5 = param_6[-4];
            iVar7 = param_6[-3];
            iVar8 = param_6[-2];
            iVar9 = param_6[-1];
            do {
              iVar10 = (iVar6 * param_3[4] + iVar4 * param_3[5] + iVar5 * param_3[3] +
                        iVar7 * param_3[2] + iVar8 * param_3[1] + iVar9 * *param_3 >>
                       (param_5 & 0x1f)) + *param_1;
              *param_6 = iVar10;
              param_2 = param_2 + -1;
              param_1 = param_1 + 1;
              param_6 = param_6 + 1;
              iVar4 = iVar6;
              iVar6 = iVar5;
              iVar5 = iVar7;
              iVar7 = iVar8;
              iVar8 = iVar9;
              iVar9 = iVar10;
            } while (param_2 != 0);
          }
        }
        else if (0 < param_2) {
          iVar6 = param_6[-5];
          iVar5 = param_6[-4];
          iVar7 = param_6[-3];
          iVar8 = param_6[-2];
          iVar4 = param_6[-1];
          do {
            iVar9 = (iVar5 * param_3[3] + iVar6 * param_3[4] + iVar7 * param_3[2] +
                     iVar8 * param_3[1] + iVar4 * *param_3 >> (param_5 & 0x1f)) + *param_1;
            *param_6 = iVar9;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            iVar6 = iVar5;
            iVar5 = iVar7;
            iVar7 = iVar8;
            iVar8 = iVar4;
            iVar4 = iVar9;
          } while (param_2 != 0);
        }
      }
      else if (param_4 == 8) {
        if (0 < param_2) {
          iVar4 = param_6[-8];
          iVar6 = param_6[-7];
          iVar5 = param_6[-6];
          iVar7 = param_6[-5];
          iVar8 = param_6[-4];
          iVar9 = param_6[-3];
          iVar10 = param_6[-2];
          iVar11 = param_6[-1];
          do {
            iVar12 = (iVar6 * param_3[6] + iVar4 * param_3[7] + iVar5 * param_3[5] +
                      iVar7 * param_3[4] + iVar8 * param_3[3] + iVar9 * param_3[2] +
                      iVar10 * param_3[1] + iVar11 * *param_3 >> (param_5 & 0x1f)) + *param_1;
            *param_6 = iVar12;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            iVar4 = iVar6;
            iVar6 = iVar5;
            iVar5 = iVar7;
            iVar7 = iVar8;
            iVar8 = iVar9;
            iVar9 = iVar10;
            iVar10 = iVar11;
            iVar11 = iVar12;
          } while (param_2 != 0);
        }
      }
      else if (0 < param_2) {
        iVar6 = param_6[-7];
        iVar5 = param_6[-6];
        iVar7 = param_6[-5];
        iVar8 = param_6[-4];
        iVar9 = param_6[-3];
        iVar10 = param_6[-2];
        iVar4 = param_6[-1];
        do {
          iVar11 = (iVar5 * param_3[5] + iVar6 * param_3[6] + iVar7 * param_3[4] +
                    iVar8 * param_3[3] + iVar9 * param_3[2] + iVar10 * param_3[1] + iVar4 * *param_3
                   >> (param_5 & 0x1f)) + *param_1;
          *param_6 = iVar11;
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          param_6 = param_6 + 1;
          iVar6 = iVar5;
          iVar5 = iVar7;
          iVar7 = iVar8;
          iVar8 = iVar9;
          iVar9 = iVar10;
          iVar10 = iVar4;
          iVar4 = iVar11;
        } while (param_2 != 0);
      }
    }
    else if (param_4 < 0xb) {
      if (param_4 == 10) {
        if (0 < param_2) {
          iVar4 = param_6[-10];
          iVar6 = param_6[-9];
          iVar5 = param_6[-8];
          iVar7 = param_6[-7];
          iVar8 = param_6[-6];
          iVar9 = param_6[-5];
          iVar10 = param_6[-4];
          iVar11 = param_6[-3];
          iVar12 = param_6[-2];
          iVar13 = param_6[-1];
          do {
            iVar2 = (iVar6 * param_3[8] + iVar4 * param_3[9] + iVar5 * param_3[7] +
                     iVar7 * param_3[6] + iVar8 * param_3[5] + iVar9 * param_3[4] +
                     iVar10 * param_3[3] + iVar11 * param_3[2] + iVar12 * param_3[1] +
                     iVar13 * *param_3 >> (param_5 & 0x1f)) + *param_1;
            *param_6 = iVar2;
            param_2 = param_2 + -1;
            param_1 = param_1 + 1;
            param_6 = param_6 + 1;
            iVar4 = iVar6;
            iVar6 = iVar5;
            iVar5 = iVar7;
            iVar7 = iVar8;
            iVar8 = iVar9;
            iVar9 = iVar10;
            iVar10 = iVar11;
            iVar11 = iVar12;
            iVar12 = iVar13;
            iVar13 = iVar2;
          } while (param_2 != 0);
        }
      }
      else if (0 < param_2) {
        iVar6 = param_6[-9];
        iVar5 = param_6[-8];
        iVar7 = param_6[-7];
        iVar8 = param_6[-6];
        iVar9 = param_6[-5];
        iVar10 = param_6[-4];
        iVar11 = param_6[-3];
        iVar12 = param_6[-2];
        iVar4 = param_6[-1];
        do {
          iVar13 = (iVar5 * param_3[7] + iVar6 * param_3[8] + iVar7 * param_3[6] +
                    iVar8 * param_3[5] + iVar9 * param_3[4] + iVar10 * param_3[3] +
                    iVar11 * param_3[2] + iVar12 * param_3[1] + iVar4 * *param_3 >> (param_5 & 0x1f)
                   ) + *param_1;
          *param_6 = iVar13;
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          param_6 = param_6 + 1;
          iVar6 = iVar5;
          iVar5 = iVar7;
          iVar7 = iVar8;
          iVar8 = iVar9;
          iVar9 = iVar10;
          iVar10 = iVar11;
          iVar11 = iVar12;
          iVar12 = iVar4;
          iVar4 = iVar13;
        } while (param_2 != 0);
      }
    }
    else if (param_4 == 0xc) {
      if (0 < param_2) {
        iVar4 = param_6[-0xc];
        iVar6 = param_6[-0xb];
        iVar5 = param_6[-10];
        iVar7 = param_6[-9];
        iVar8 = param_6[-8];
        iVar9 = param_6[-7];
        iVar10 = param_6[-6];
        iVar11 = param_6[-5];
        iVar12 = param_6[-4];
        iVar13 = param_6[-3];
        iVar2 = param_6[-2];
        iVar3 = param_6[-1];
        do {
          iVar1 = (iVar6 * param_3[10] + iVar4 * param_3[0xb] + iVar5 * param_3[9] +
                   iVar7 * param_3[8] + iVar8 * param_3[7] + iVar9 * param_3[6] +
                   iVar10 * param_3[5] + iVar11 * param_3[4] + iVar12 * param_3[3] +
                   iVar13 * param_3[2] + iVar2 * param_3[1] + iVar3 * *param_3 >> (param_5 & 0x1f))
                  + *param_1;
          *param_6 = iVar1;
          param_2 = param_2 + -1;
          param_1 = param_1 + 1;
          param_6 = param_6 + 1;
          iVar4 = iVar6;
          iVar6 = iVar5;
          iVar5 = iVar7;
          iVar7 = iVar8;
          iVar8 = iVar9;
          iVar9 = iVar10;
          iVar10 = iVar11;
          iVar11 = iVar12;
          iVar12 = iVar13;
          iVar13 = iVar2;
          iVar2 = iVar3;
          iVar3 = iVar1;
        } while (param_2 != 0);
      }
    }
    else if (0 < param_2) {
      iVar6 = param_6[-0xb];
      iVar5 = param_6[-10];
      iVar7 = param_6[-9];
      iVar8 = param_6[-8];
      iVar9 = param_6[-7];
      iVar10 = param_6[-6];
      iVar11 = param_6[-5];
      iVar12 = param_6[-4];
      iVar13 = param_6[-3];
      iVar2 = param_6[-2];
      iVar4 = param_6[-1];
      do {
        iVar3 = (iVar5 * param_3[9] + iVar6 * param_3[10] + iVar7 * param_3[8] + iVar8 * param_3[7]
                 + iVar9 * param_3[6] + iVar10 * param_3[5] + iVar11 * param_3[4] +
                 iVar12 * param_3[3] + iVar13 * param_3[2] + iVar2 * param_3[1] + iVar4 * *param_3
                >> (param_5 & 0x1f)) + *param_1;
        *param_6 = iVar3;
        param_2 = param_2 + -1;
        param_1 = param_1 + 1;
        param_6 = param_6 + 1;
        iVar6 = iVar5;
        iVar5 = iVar7;
        iVar7 = iVar8;
        iVar8 = iVar9;
        iVar9 = iVar10;
        iVar10 = iVar11;
        iVar11 = iVar12;
        iVar12 = iVar13;
        iVar13 = iVar2;
        iVar2 = iVar4;
        iVar4 = iVar3;
      } while (param_2 != 0);
    }
  }
  else if (0 < param_2) {
    param_6 = param_6 + -0x10;
    do {
      iVar4 = 0;
      switch(param_4) {
      case 0x20:
        iVar4 = param_6[-0x10] * param_3[0x1f];
      case 0x1f:
        iVar4 = iVar4 + param_6[-0xf] * param_3[0x1e];
      case 0x1e:
        iVar4 = iVar4 + param_6[-0xe] * param_3[0x1d];
      case 0x1d:
        iVar4 = iVar4 + param_6[-0xd] * param_3[0x1c];
      case 0x1c:
        iVar4 = iVar4 + param_6[-0xc] * param_3[0x1b];
      case 0x1b:
        iVar4 = iVar4 + param_6[-0xb] * param_3[0x1a];
      case 0x1a:
        iVar4 = iVar4 + param_6[-10] * param_3[0x19];
      case 0x19:
        iVar4 = iVar4 + param_6[-9] * param_3[0x18];
      case 0x18:
        iVar4 = iVar4 + param_6[-8] * param_3[0x17];
      case 0x17:
        iVar4 = iVar4 + param_6[-7] * param_3[0x16];
      case 0x16:
        iVar4 = iVar4 + param_6[-6] * param_3[0x15];
      case 0x15:
        iVar4 = iVar4 + param_6[-5] * param_3[0x14];
      case 0x14:
        iVar4 = iVar4 + param_6[-4] * param_3[0x13];
      case 0x13:
        iVar4 = iVar4 + param_6[-3] * param_3[0x12];
      case 0x12:
        iVar4 = iVar4 + param_6[-2] * param_3[0x11];
      case 0x11:
        iVar4 = iVar4 + param_6[-1] * param_3[0x10];
      case 0x10:
        iVar4 = iVar4 + *param_6 * param_3[0xf];
      case 0xf:
        iVar4 = iVar4 + param_6[1] * param_3[0xe];
      case 0xe:
        iVar4 = iVar4 + param_6[2] * param_3[0xd];
      case 0xd:
        iVar4 = iVar4 + param_6[3] * param_3[0xc] + param_6[4] * param_3[0xb] +
                param_6[5] * param_3[10] + param_6[6] * param_3[9] + param_6[7] * param_3[8] +
                param_6[8] * param_3[7] + param_6[9] * param_3[6] + param_6[10] * param_3[5] +
                param_6[0xb] * param_3[4] + param_6[0xc] * param_3[3] + param_6[0xd] * param_3[2] +
                param_6[0xe] * param_3[1] + param_6[0xf] * *param_3;
      }
      param_6[0x10] = *param_1 + (iVar4 >> (param_5 & 0x1f));
      param_2 = param_2 + -1;
      param_6 = param_6 + 1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  return;
}

