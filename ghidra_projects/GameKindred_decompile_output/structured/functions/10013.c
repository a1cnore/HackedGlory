// functions/10013 — 242 functions
#include "GameKindred.h"




void * FUN_1001300f4(void)

{
  undefined8 ***pppuVar1;
  void *local_1b8 [2];
  char local_1a1;
  void *local_1a0 [2];
  char local_189;
  undefined8 **local_188 [2];
  char local_171;
  void *local_170 [2];
  char local_159;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_188);
  pppuVar1 = (undefined8 ***)local_188[0];
  if (-1 < local_171) {
    pppuVar1 = local_188;
  }
  FUN_10001549c(local_170,pppuVar1);
  FUN_10001549c(local_1a0,"lastManualPresenceBroadcast");
  FUN_10001549c(local_1b8,"0");
  FUN_1004d2e64(local_158,auStack_128,local_170,local_1a0,local_1b8);
  if (local_1a1 < '\0') {
    operator_delete(local_1b8[0]);
  }
  if (local_189 < '\0') {
    operator_delete(local_1a0[0]);
  }
  if (local_159 < '\0') {
    operator_delete(local_170[0]);
  }
  if (local_171 < '\0') {
    operator_delete(local_188[0]);
  }
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  FUN_1004d2864(pppuVar1,"%lld");
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return local_170[0];
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100130250(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"tooltipSeen_%s");
  FUN_10012c538(local_1a8);
  pppuVar1 = (undefined8 ***)local_1a8[0];
  if (-1 < local_191) {
    pppuVar1 = local_1a8;
  }
  FUN_1004d2d74(auStack_138,pppuVar1,auStack_178,param_2);
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined1 FUN_100130330(void)

{
  return DAT_101e3a240;
}




undefined8 FUN_10013033c(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"tooltipSeen_%s");
  FUN_10012c538(local_1a8);
  pppuVar1 = (undefined8 ***)local_1a8[0];
  if (-1 < local_191) {
    pppuVar1 = local_1a8;
  }
  uVar2 = FUN_1004d2cec(auStack_138,pppuVar1,auStack_178,0);
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100130420(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"dialogSeen_%s");
  FUN_10012c538(local_1a8);
  pppuVar1 = (undefined8 ***)local_1a8[0];
  if (-1 < local_191) {
    pppuVar1 = local_1a8;
  }
  FUN_1004d2d74(auStack_138,pppuVar1,auStack_178,param_2);
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100130500(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"dialogSeen_%s");
  FUN_10012c538(local_1a8);
  pppuVar1 = (undefined8 ***)local_1a8[0];
  if (-1 < local_191) {
    pppuVar1 = local_1a8;
  }
  uVar2 = FUN_1004d2cec(auStack_138,pppuVar1,auStack_178,0);
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001305e4(undefined8 param_1)

{
  undefined8 *****pppppuVar1;
  float fVar2;
  undefined8 ****local_168 [2];
  char local_151;
  undefined8 ****local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  fVar2 = (float)FUN_1001306bc();
  if (fVar2 < (float)param_1) {
    FUN_10012c414(local_150);
    pppppuVar1 = (undefined8 *****)local_150[0];
    if (-1 < local_139) {
      pppppuVar1 = local_150;
    }
    FUN_1004d2cc8(auStack_138,pppppuVar1);
    FUN_10012c538(local_168);
    pppppuVar1 = (undefined8 *****)local_168[0];
    if (-1 < local_151) {
      pppppuVar1 = local_168;
    }
    FUN_1004d2ddc(param_1,auStack_138,pppppuVar1,"highestBotDifficultyPlayed");
    if (local_151 < '\0') {
      operator_delete(local_168[0]);
    }
    if (local_139 < '\0') {
      operator_delete(local_150[0]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined1  [16] FUN_1001306bc(void)

{
  undefined8 ***pppuVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar1 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar1 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_10012c538(local_168);
  pppuVar1 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar1 = local_168;
  }
  auVar2 = FUN_1004d2d48(0xbf800000,auStack_138,pppuVar1,"highestBotDifficultyPlayed");
  uVar3 = auVar2._8_8_;
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    auVar2._8_8_ = uVar3;
    return auVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_10013078c(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"featureIntroduced_%s");
  FUN_10012c538(local_1a8);
  pppuVar1 = (undefined8 ***)local_1a8[0];
  if (-1 < local_191) {
    pppuVar1 = local_1a8;
  }
  FUN_1004d2d74(auStack_138,pppuVar1,auStack_178,param_2);
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_10013086c(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"featureIntroduced_%s");
  FUN_10012c538(local_1a8);
  pppuVar1 = (undefined8 ***)local_1a8[0];
  if (-1 < local_191) {
    pppuVar1 = local_1a8;
  }
  uVar2 = FUN_1004d2cec(auStack_138,pppuVar1,auStack_178,0);
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100130950(void)

{
  undefined8 ***pppuVar1;
  undefined8 uVar2;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_158);
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  uVar2 = FUN_1004d2cec(auStack_128,pppuVar1,"allowPushNotifications",0);
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100130a18(void)

{
  undefined8 ***pppuVar1;
  void *local_1f0 [2];
  char local_1d9;
  undefined8 **local_1d8 [2];
  char local_1c1;
  void *local_1c0 [2];
  char local_1a9;
  void *local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"%d");
  FUN_10001549c(local_1a8,auStack_178);
  FUN_10012c538(local_1d8);
  pppuVar1 = (undefined8 ***)local_1d8[0];
  if (-1 < local_1c1) {
    pppuVar1 = local_1d8;
  }
  FUN_10001549c(local_1c0,pppuVar1);
  FUN_10001549c(local_1f0,"rateAppResponse");
  FUN_1004d2f00(auStack_138,local_1c0,local_1f0,local_1a8);
  if (local_1d9 < '\0') {
    operator_delete(local_1f0[0]);
  }
  if (local_1a9 < '\0') {
    operator_delete(local_1c0[0]);
  }
  if (local_1c1 < '\0') {
    operator_delete(local_1d8[0]);
  }
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined4 FUN_100130b4c(void)

{
  undefined8 ***pppuVar1;
  void *local_1b8 [2];
  char local_1a1;
  void *local_1a0 [2];
  char local_189;
  undefined8 **local_188 [2];
  char local_171;
  undefined4 local_170;
  undefined4 uStack_16c;
  char local_159;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_188);
  pppuVar1 = (undefined8 ***)local_188[0];
  if (-1 < local_171) {
    pppuVar1 = local_188;
  }
  FUN_10001549c(&local_170,pppuVar1);
  FUN_10001549c(local_1a0,"rateAppResponse");
  FUN_10001549c(local_1b8,"0");
  FUN_1004d2e64(local_158,auStack_128,&local_170,local_1a0,local_1b8);
  if (local_1a1 < '\0') {
    operator_delete(local_1b8[0]);
  }
  if (local_189 < '\0') {
    operator_delete(local_1a0[0]);
  }
  if (local_159 < '\0') {
    operator_delete((void *)CONCAT44(uStack_16c,local_170));
  }
  if (local_171 < '\0') {
    operator_delete(local_188[0]);
  }
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  FUN_1004d2864(pppuVar1,"%d");
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return local_170;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_100130ca8(void)

{
  undefined8 ***pppuVar1;
  void *local_1e0 [2];
  char local_1c9;
  undefined8 **local_1c8 [2];
  char local_1b1;
  void *local_1b0 [2];
  char local_199;
  void *local_198 [2];
  char local_181;
  undefined8 **local_180 [2];
  char local_169;
  undefined1 auStack_168 [64];
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_180);
  pppuVar1 = (undefined8 ***)local_180[0];
  if (-1 < local_169) {
    pppuVar1 = local_180;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_1004d29d0();
  FUN_100102450(auStack_168,"%lld");
  FUN_10001549c(local_198,auStack_168);
  FUN_10012c538(local_1c8);
  pppuVar1 = (undefined8 ***)local_1c8[0];
  if (-1 < local_1b1) {
    pppuVar1 = local_1c8;
  }
  FUN_10001549c(local_1b0,pppuVar1);
  FUN_10001549c(local_1e0,"earlyOfferLastShownTime");
  FUN_1004d2f00(auStack_128,local_1b0,local_1e0,local_198);
  if (local_1c9 < '\0') {
    operator_delete(local_1e0[0]);
  }
  if (local_199 < '\0') {
    operator_delete(local_1b0[0]);
  }
  if (local_1b1 < '\0') {
    operator_delete(local_1c8[0]);
  }
  if (local_181 < '\0') {
    operator_delete(local_198[0]);
  }
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void * FUN_100130dd4(void)

{
  undefined8 ***pppuVar1;
  void *local_1b8 [2];
  char local_1a1;
  void *local_1a0 [2];
  char local_189;
  undefined8 **local_188 [2];
  char local_171;
  void *local_170 [2];
  char local_159;
  undefined8 **local_158 [2];
  char local_141;
  undefined8 **local_140 [2];
  char local_129;
  undefined1 auStack_128 [256];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_140);
  pppuVar1 = (undefined8 ***)local_140[0];
  if (-1 < local_129) {
    pppuVar1 = local_140;
  }
  FUN_1004d2cc8(auStack_128,pppuVar1);
  FUN_10012c538(local_188);
  pppuVar1 = (undefined8 ***)local_188[0];
  if (-1 < local_171) {
    pppuVar1 = local_188;
  }
  FUN_10001549c(local_170,pppuVar1);
  FUN_10001549c(local_1a0,"earlyOfferLastShownTime");
  FUN_10001549c(local_1b8,"0");
  FUN_1004d2e64(local_158,auStack_128,local_170,local_1a0,local_1b8);
  if (local_1a1 < '\0') {
    operator_delete(local_1b8[0]);
  }
  if (local_189 < '\0') {
    operator_delete(local_1a0[0]);
  }
  if (local_159 < '\0') {
    operator_delete(local_170[0]);
  }
  if (local_171 < '\0') {
    operator_delete(local_188[0]);
  }
  pppuVar1 = (undefined8 ***)local_158[0];
  if (-1 < local_141) {
    pppuVar1 = local_158;
  }
  FUN_1004d2864(pppuVar1,"%lld");
  if (local_141 < '\0') {
    operator_delete(local_158[0]);
  }
  if (local_129 < '\0') {
    operator_delete(local_140[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_28) {
    return local_170[0];
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100130f30(void)

{
  return 1;
}




undefined8 FUN_100130f38(void)

{
  return 1;
}




void FUN_100130f40(undefined8 param_1,undefined8 param_2)

{
  undefined1 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined1 *local_190 [2];
  char local_179;
  undefined8 **local_178 [2];
  char local_161;
  undefined8 **local_160 [2];
  char local_149;
  undefined1 auStack_148 [256];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_160);
  pppuVar2 = (undefined8 ***)local_160[0];
  if (-1 < local_149) {
    pppuVar2 = local_160;
  }
  FUN_1004d2cc8(auStack_148,pppuVar2);
  FUN_10001549c(local_178,"preferredBuildPath");
  std::string::append((char *)local_178);
  FUN_1003467f8();
  FUN_10034cd30();
  std::string::append((char *)local_178);
  std::string::append((char *)local_178);
  std::string::append((char *)local_178);
  FUN_10012c538(local_190);
  ppuVar1 = (undefined1 **)local_190[0];
  if (-1 < local_179) {
    ppuVar1 = local_190;
  }
  pppuVar2 = (undefined8 ***)local_178[0];
  if (-1 < local_161) {
    pppuVar2 = local_178;
  }
  FUN_1004d2da8(auStack_148,ppuVar1,pppuVar2,param_2);
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (local_161 < '\0') {
    operator_delete(local_178[0]);
  }
  if (local_149 < '\0') {
    operator_delete(local_160[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_100131084(void)

{
  undefined1 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined1 *local_180 [2];
  char local_169;
  undefined8 **local_168 [2];
  char local_151;
  undefined8 **local_150 [2];
  char local_139;
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_150);
  pppuVar2 = (undefined8 ***)local_150[0];
  if (-1 < local_139) {
    pppuVar2 = local_150;
  }
  FUN_1004d2cc8(auStack_138,pppuVar2);
  FUN_10001549c(local_168,"preferredBuildPath");
  std::string::append((char *)local_168);
  FUN_1003467f8();
  FUN_10034cd30();
  std::string::append((char *)local_168);
  std::string::append((char *)local_168);
  std::string::append((char *)local_168);
  FUN_10012c538(local_180);
  ppuVar1 = (undefined1 **)local_180[0];
  if (-1 < local_169) {
    ppuVar1 = local_180;
  }
  pppuVar2 = (undefined8 ***)local_168[0];
  if (-1 < local_151) {
    pppuVar2 = local_168;
  }
  uVar3 = FUN_1004d2d1c(auStack_138,ppuVar1,pppuVar2,0);
  if (local_169 < '\0') {
    operator_delete(local_180[0]);
  }
  if (local_151 < '\0') {
    operator_delete(local_168[0]);
  }
  if (local_139 < '\0') {
    operator_delete(local_150[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




undefined8 FUN_1001311c4(void)

{
  return 1;
}




undefined8 FUN_1001311cc(void)

{
  return 0;
}




undefined8 FUN_1001311d4(void)

{
  return 0;
}




undefined8 FUN_1001311dc(void)

{
  return 0;
}




undefined8 FUN_1001311e4(void)

{
  return 1;
}




undefined8 FUN_1001311ec(void)

{
  return 1;
}




undefined8 FUN_1001311f4(void)

{
  return 1;
}




undefined8 FUN_1001311fc(void)

{
  return 0;
}




undefined8 FUN_100131208(void)

{
  return 0;
}




undefined8 FUN_100131210(void)

{
  return 1;
}




undefined8 FUN_100131218(void)

{
  return 0;
}




undefined8 FUN_100131220(void)

{
  return 1;
}




undefined8 FUN_100131228(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10052c0ac(0x2000);
  if ((iVar1 == 0) || (uVar2 = FUN_10052bb54(), (uVar2 & 1) == 0)) {
    uVar3 = FUN_10052c0ac(0x2000);
    if ((int)uVar3 != 0) {
      uVar3 = FUN_10052bb5c();
      return uVar3;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}




void FUN_100131268(void)

{
  int iVar1;
  
  iVar1 = FUN_10052c0ac(0x2000);
  if (iVar1 != 0) {
    FUN_10052bb54();
    return;
  }
  return;
}




void FUN_10013128c(void)

{
  int iVar1;
  
  iVar1 = FUN_10052c0ac(0x2000);
  if (iVar1 != 0) {
    FUN_10052bb5c();
    return;
  }
  return;
}




undefined8 FUN_1001312b0(void)

{
  return 1;
}




undefined8 FUN_1001312b8(void)

{
  return 0;
}




bool FUN_1001312c0(void)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = FUN_1001340ec();
  uVar1 = *(uint *)(lVar2 + 8);
  lVar2 = FUN_10015d3ec();
  return uVar1 <= *(uint *)(lVar2 + 0x55d0);
}




undefined8 FUN_1001312f4(void)

{
  return 1;
}




void FUN_1001312fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 ***pppuVar1;
  undefined8 **local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"skin_preference_%s");
  FUN_10012c538(local_1a8);
  pppuVar1 = (undefined8 ***)local_1a8[0];
  if (-1 < local_191) {
    pppuVar1 = local_1a8;
  }
  FUN_1004d2e08(auStack_138,pppuVar1,auStack_178,param_2);
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




void FUN_1001313dc(undefined8 param_1)

{
  undefined8 ***pppuVar1;
  void *local_1d8 [2];
  char local_1c1;
  undefined8 **local_1c0 [2];
  char local_1a9;
  void *local_1a8 [2];
  char local_191;
  undefined8 **local_190 [2];
  char local_179;
  undefined1 auStack_178 [64];
  undefined1 auStack_138 [256];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_101444218;
  FUN_10012c414(local_190);
  pppuVar1 = (undefined8 ***)local_190[0];
  if (-1 < local_179) {
    pppuVar1 = local_190;
  }
  FUN_1004d2cc8(auStack_138,pppuVar1);
  FUN_100102450(auStack_178,"skin_preference_%s");
  FUN_10012c538(local_1c0);
  pppuVar1 = (undefined8 ***)local_1c0[0];
  if (-1 < local_1a9) {
    pppuVar1 = local_1c0;
  }
  FUN_10001549c(local_1a8,pppuVar1);
  FUN_10001549c(local_1d8,auStack_178);
  FUN_1004d2e64(param_1,auStack_138,local_1a8,local_1d8,&DAT_101d91198);
  if (local_1c1 < '\0') {
    operator_delete(local_1d8[0]);
  }
  if (local_191 < '\0') {
    operator_delete(local_1a8[0]);
  }
  if (local_1a9 < '\0') {
    operator_delete(local_1c0[0]);
  }
  if (local_179 < '\0') {
    operator_delete(local_190[0]);
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_1001314fc(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  
  uVar3 = *(ulong *)(param_1 + 8);
  pcVar2 = *(char **)param_1;
  if (-1 < param_1[0x17]) {
    uVar3 = (ulong)(byte)param_1[0x17];
    pcVar2 = param_1;
  }
  if (uVar3 == 0) {
    return false;
  }
  pcVar1 = pcVar2 + uVar3;
  pcVar4 = pcVar2;
  do {
    pcVar5 = pcVar4;
    if (*pcVar4 == '[') break;
    pcVar4 = pcVar4 + 1;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar1;
  } while (uVar3 != 0);
  return pcVar5 != pcVar1 && (long)pcVar5 - (long)pcVar2 != -1;
}




undefined8 FUN_100131560(void)

{
  return 1;
}




void FUN_100131568(void)

{
  FUN_10001549c(&DAT_101d23348,"Player.2.dat");
  ___cxa_atexit(FUN_1000e6204,&DAT_101d23348,0x100000000);
  return;
}




undefined8 * FUN_1001315ac(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined8 * FUN_1001315dc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a6a0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return param_1;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}




void FUN_100131690(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_1001316ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100131748(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_1001317a4(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




undefined8 * FUN_100131800(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a790;
  FUN_1001347f4(param_1 + 1,param_1[2]);
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return param_1;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}




void FUN_10013188c(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_1001318e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100131944(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_1001319a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_1001319fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




undefined8 * FUN_100131a58(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a910;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return param_1;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return param_1;
}




void FUN_100131aec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100131b48(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_10145a670;
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        *puVar1 = DAT_101d23368[DAT_101d23360 - 1];
        DAT_101d23360 = DAT_101d23360 - 1;
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return;
}




void FUN_100131ba4(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100131ba8);
  (*pcVar1)();
}




void FUN_100131ba8(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100131bac);
  (*pcVar1)();
}




void FUN_100131bac(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  lVar2 = FUN_1000e86c0(param_2,"dailyRewardRandomTimeOffset");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100131c54:
    uVar5 = 0;
  }
  else {
    local_58 = 0x100005;
    local_68 = "dailyRewardRandomTimeOffset";
    uStack_60 = 0x1b;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100131c54;
    local_58 = 0x100005;
    local_68 = "dailyRewardRandomTimeOffset";
    uStack_60 = 0x1b;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_2,&local_68);
    uVar5 = *puVar3;
  }
  *(undefined4 *)(param_1 + 0x38) = uVar5;
  lVar2 = FUN_1000e86c0(param_2,"dailyRewardEnabled");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100131cc8:
    bVar1 = false;
  }
  else {
    local_58 = 0x100005;
    local_68 = "dailyRewardEnabled";
    uStack_60 = 0x12;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100131cc8;
    local_58 = 0x100005;
    local_68 = "dailyRewardEnabled";
    uStack_60 = 0x12;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x3c) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tutorialEnabled");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100131d44:
    bVar1 = false;
  }
  else {
    local_58 = 0x100005;
    local_68 = "tutorialEnabled";
    uStack_60 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100131d44;
    local_58 = 0x100005;
    local_68 = "tutorialEnabled";
    uStack_60 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x3d) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"preEloDecayWarningEnabled");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100131dc0:
    bVar1 = false;
  }
  else {
    local_58 = 0x100005;
    local_68 = "preEloDecayWarningEnabled";
    uStack_60 = 0x19;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100131dc0;
    local_58 = 0x100005;
    local_68 = "preEloDecayWarningEnabled";
    uStack_60 = 0x19;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x3e) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"soundEnabled");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "soundEnabled";
    uStack_60 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "soundEnabled";
      uStack_60 = 0xc;
      lVar2 = FUN_1000e87dc(param_2,&local_68);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100131e68;
    }
  }
  bVar1 = false;
LAB_100131e68:
  *(bool *)(param_1 + 0x3f) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"dailyRewardSchedule");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "dailyRewardSchedule";
    uStack_60 = 0x13;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    if (*(int *)(lVar2 + 0x10) == 4) {
      local_58 = 0x100005;
      local_68 = "dailyRewardSchedule";
      uStack_60 = 0x13;
      plVar4 = (long *)FUN_1000e87dc(param_2,&local_68);
      uVar7 = (ulong)*(uint *)(plVar4 + 1);
      if (*(uint *)(plVar4 + 1) != 0) {
        lVar2 = 0;
        uVar8 = 0;
        do {
          if ((*(byte *)(*plVar4 + lVar2 + 0x11) >> 2 & 1) != 0) {
            local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(*plVar4 + lVar2));
            FUN_1000228fc((undefined4 *)(param_1 + 8),&local_68);
            uVar7 = (ulong)*(uint *)(plVar4 + 1);
          }
          uVar8 = uVar8 + 1;
          lVar2 = lVar2 + 0x18;
        } while (uVar8 < uVar7);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_2,"tutorialSchedule");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "tutorialSchedule";
    uStack_60 = 0x10;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    if (*(int *)(lVar2 + 0x10) == 4) {
      local_58 = 0x100005;
      local_68 = "tutorialSchedule";
      uStack_60 = 0x10;
      plVar4 = (long *)FUN_1000e87dc(param_2,&local_68);
      uVar7 = (ulong)*(uint *)(plVar4 + 1);
      if (*(uint *)(plVar4 + 1) != 0) {
        lVar2 = 0;
        uVar8 = 0;
        do {
          if ((*(byte *)(*plVar4 + lVar2 + 0x11) >> 2 & 1) != 0) {
            local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(*plVar4 + lVar2));
            FUN_1000228fc((undefined4 *)(param_1 + 0x18),&local_68);
            uVar7 = (ulong)*(uint *)(plVar4 + 1);
          }
          uVar8 = uVar8 + 1;
          lVar2 = lVar2 + 0x18;
        } while (uVar8 < uVar7);
      }
    }
  }
  lVar2 = FUN_1000e86c0(param_2,"preEloDecayWarningSchedule");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "preEloDecayWarningSchedule";
    uStack_60 = 0x1a;
    lVar2 = FUN_1000e87dc(param_2,&local_68);
    if (*(int *)(lVar2 + 0x10) == 4) {
      local_58 = 0x100005;
      local_68 = "preEloDecayWarningSchedule";
      uStack_60 = 0x1a;
      plVar4 = (long *)FUN_1000e87dc(param_2,&local_68);
      uVar6 = *(uint *)(plVar4 + 1);
      if (uVar6 != 0) {
        lVar2 = 0;
        uVar7 = 0;
        do {
          if ((*(byte *)(*plVar4 + lVar2 + 0x11) >> 2 & 1) != 0) {
            local_68 = (char *)CONCAT44(local_68._4_4_,*(undefined4 *)(*plVar4 + lVar2));
            FUN_1000e6a60((undefined4 *)(param_1 + 0x28),&local_68);
            uVar6 = *(uint *)(plVar4 + 1);
          }
          uVar7 = uVar7 + 1;
          lVar2 = lVar2 + 0x18;
        } while (uVar7 < uVar6);
      }
    }
  }
  return;
}




void FUN_1001320a4(long param_1,long *param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_2,"endSeasonEpoch");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar1) {
LAB_100132114:
    uVar5 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "endSeasonEpoch";
    uStack_40 = 0xe;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 4 & 1) == 0) goto LAB_100132114;
    local_38 = 0x100005;
    local_48 = "endSeasonEpoch";
    uStack_40 = 0xe;
    puVar2 = (undefined8 *)FUN_1000e87dc(param_2,&local_48);
    uVar5 = *puVar2;
  }
  *(undefined8 *)(param_1 + 8) = uVar5;
  lVar1 = FUN_1000e86c0(param_2,"seasonIndex");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "seasonIndex";
    uStack_40 = 0xb;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "seasonIndex";
      uStack_40 = 0xb;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
      uVar4 = *puVar3;
      goto LAB_1001321ac;
    }
  }
  uVar4 = 0;
LAB_1001321ac:
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return;
}




void FUN_1001321c4(long param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_2,"mysteryChestRareIndex");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar1) {
LAB_100132234:
    uVar3 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "mysteryChestRareIndex";
    uStack_40 = 0x15;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) == 0) goto LAB_100132234;
    local_38 = 0x100005;
    local_48 = "mysteryChestRareIndex";
    uStack_40 = 0x15;
    puVar2 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
    uVar3 = *puVar2;
  }
  *(undefined4 *)(param_1 + 8) = uVar3;
  lVar1 = FUN_1000e86c0(param_2,"mysteryChestEpicIndex");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "mysteryChestEpicIndex";
    uStack_40 = 0x15;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "mysteryChestEpicIndex";
      uStack_40 = 0x15;
      puVar2 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
      uVar3 = *puVar2;
      goto LAB_1001322cc;
    }
  }
  uVar3 = 0;
LAB_1001322cc:
  *(undefined4 *)(param_1 + 0xc) = uVar3;
  return;
}




void FUN_1001322e4(long param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_2,"chooseABuildLevelGate");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "chooseABuildLevelGate";
    uStack_40 = 0x15;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "chooseABuildLevelGate";
      uStack_40 = 0x15;
      puVar2 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
      uVar3 = *puVar2;
      goto LAB_100132378;
    }
  }
  uVar3 = 0;
LAB_100132378:
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}




void FUN_100132390(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"useLocalNotifications");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "useLocalNotifications";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "useLocalNotifications";
      uStack_40 = 0x15;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_10013242c;
    }
  }
  bVar1 = true;
LAB_10013242c:
  *(bool *)(param_1 + 8) = bVar1;
  return;
}




void FUN_100132444(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"showForThirdParty");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_1001324b4:
    bVar1 = true;
  }
  else {
    local_38 = 0x100005;
    local_48 = "showForThirdParty";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1001324b4;
    local_38 = 0x100005;
    local_48 = "showForThirdParty";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"showForNotThirdParty");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132530:
    bVar1 = true;
  }
  else {
    local_38 = 0x100005;
    local_48 = "showForNotThirdParty";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132530;
    local_38 = 0x100005;
    local_48 = "showForNotThirdParty";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"showForDesktop");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_1001325ac:
    bVar1 = true;
  }
  else {
    local_38 = 0x100005;
    local_48 = "showForDesktop";
    uStack_40 = 0xe;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1001325ac;
    local_38 = 0x100005;
    local_48 = "showForDesktop";
    uStack_40 = 0xe;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"showForNotDesktop");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132628:
    bVar1 = true;
  }
  else {
    local_38 = 0x100005;
    local_48 = "showForNotDesktop";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132628;
    local_38 = 0x100005;
    local_48 = "showForNotDesktop";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"showOfferwallButton");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "showOfferwallButton";
    uStack_40 = 0x13;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "showOfferwallButton";
      uStack_40 = 0x13;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_1001326d0;
    }
  }
  bVar1 = false;
LAB_1001326d0:
  *(bool *)(param_1 + 0xc) = bVar1;
  return;
}




void FUN_1001326e8(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"showPopup");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "showPopup";
    uStack_40 = 9;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "showPopup";
      uStack_40 = 9;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132784;
    }
  }
  bVar1 = true;
LAB_100132784:
  *(bool *)(param_1 + 8) = bVar1;
  return;
}




void FUN_10013279c(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"showPopup");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "showPopup";
    uStack_40 = 9;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "showPopup";
      uStack_40 = 9;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132838;
    }
  }
  bVar1 = true;
LAB_100132838:
  *(bool *)(param_1 + 8) = bVar1;
  return;
}




void FUN_100132850(long param_1,long *param_2)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar1 = FUN_1000e86c0(param_2,"talentsLevelGate");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar1) {
    local_38 = 0x100005;
    local_48 = "talentsLevelGate";
    uStack_40 = 0x10;
    lVar1 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "talentsLevelGate";
      uStack_40 = 0x10;
      puVar2 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
      uVar3 = *puVar2;
      goto LAB_1001328e4;
    }
  }
  uVar3 = 0;
LAB_1001328e4:
  *(undefined4 *)(param_1 + 8) = uVar3;
  return;
}




void FUN_1001328fc(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"throttleAmplitude");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "throttleAmplitude";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "throttleAmplitude";
      uStack_40 = 0x11;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132998;
    }
  }
  bVar1 = true;
LAB_100132998:
  *(bool *)(param_1 + 8) = bVar1;
  return;
}




void FUN_1001329b0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"leaderboards");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a20:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a20;
    local_38 = 0x100005;
    local_48 = "leaderboards";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 8) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"leaderboardsAlwaysQueryOfflineFriends");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132a9c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132a9c;
    local_38 = 0x100005;
    local_48 = "leaderboardsAlwaysQueryOfflineFriends";
    uStack_40 = 0x25;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 9) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"liveEvents");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b18:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b18;
    local_38 = 0x100005;
    local_48 = "liveEvents";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"hideBattlepassCallout");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132b94:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132b94;
    local_38 = 0x100005;
    local_48 = "hideBattlepassCallout";
    uStack_40 = 0x15;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xb) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"inGameChat");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "inGameChat";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "inGameChat";
      uStack_40 = 10;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_100132c3c;
    }
  }
  bVar1 = false;
LAB_100132c3c:
  *(bool *)(param_1 + 0xc) = bVar1;
  return;
}




void FUN_100132c54(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  char local_31;
  
  lVar2 = FUN_1000e86c0(param_2,"poofMinions");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132cc4:
    bVar1 = true;
  }
  else {
    local_38 = 0x100005;
    local_48 = "poofMinions";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132cc4;
    local_38 = 0x100005;
    local_48 = "poofMinions";
    uStack_40 = 0xb;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x28) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"areYouNew2");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132d40:
    uVar5 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "areYouNew2";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100132d40;
    local_38 = 0x100005;
    local_48 = "areYouNew2";
    uStack_40 = 10;
    puVar4 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
    uVar5 = *puVar4;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  lVar2 = FUN_1000e86c0(param_2,"abridgedTutorials");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132db4:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "abridgedTutorials";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132db4;
    local_38 = 0x100005;
    local_48 = "abridgedTutorials";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x29) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tutorial01LessDialog");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132e30:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "tutorial01LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132e30;
    local_38 = 0x100005;
    local_48 = "tutorial01LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x2a) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tutorial02LessDialog");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132eac:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "tutorial02LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132eac;
    local_38 = 0x100005;
    local_48 = "tutorial02LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x2b) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tutorial05LessDialog");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132f28:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "tutorial05LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100132f28;
    local_38 = 0x100005;
    local_48 = "tutorial05LessDialog";
    uStack_40 = 0x14;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x2c) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"skipTutorialSteps");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100132fa4:
    uVar5 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "skipTutorialSteps";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100132fa4;
    local_38 = 0x100005;
    local_48 = "skipTutorialSteps";
    uStack_40 = 0x11;
    puVar4 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
    uVar5 = *puVar4;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar5;
  lVar2 = FUN_1000e86c0(param_2,"showTutorialVideo");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100133018:
    pcVar3 = "";
  }
  else {
    local_38 = 0x100005;
    local_48 = "showTutorialVideo";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) == 0) goto LAB_100133018;
    local_38 = 0x100005;
    local_48 = "showTutorialVideo";
    uStack_40 = 0x11;
    pcVar3 = (char *)FUN_1000e87dc(param_2,&local_48);
    if (((byte)pcVar3[0x12] >> 6 & 1) == 0) {
      pcVar3 = *(char **)pcVar3;
    }
  }
  FUN_10001549c(&local_48,pcVar3);
  std::string::operator=((string *)(param_1 + 8),(string *)&local_48);
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  lVar2 = FUN_1000e86c0(param_2,"forcePlayerInto5v5CasualPostTutorial");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100133090:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "forcePlayerInto5v5CasualPostTutorial";
    uStack_40 = 0x24;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100133090;
    local_38 = 0x100005;
    local_48 = "forcePlayerInto5v5CasualPostTutorial";
    uStack_40 = 0x24;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x38) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"onboardingAssistant");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100133138:
    bVar1 = true;
  }
  else {
    local_38 = 0x100005;
    local_48 = "onboardingAssistant";
    uStack_40 = 0x13;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100133138;
    local_38 = 0x100005;
    local_48 = "onboardingAssistant";
    uStack_40 = 0x13;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x39) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"useGwenTutorialForJoystickUsers");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_1001331b4:
    bVar1 = true;
  }
  else {
    local_38 = 0x100005;
    local_48 = "useGwenTutorialForJoystickUsers";
    uStack_40 = 0x1f;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1001331b4;
    local_38 = 0x100005;
    local_48 = "useGwenTutorialForJoystickUsers";
    uStack_40 = 0x1f;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x3a) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"controlScheme");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100133230:
    uVar5 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "controlScheme";
    uStack_40 = 0xd;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_100133230;
    local_38 = 0x100005;
    local_48 = "controlScheme";
    uStack_40 = 0xd;
    puVar4 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
    uVar5 = *puVar4;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  lVar2 = FUN_10015d3ec();
  if ((0x5a9e31ee < *(int *)(lVar2 + 0x565c)) &&
     (lVar2 = FUN_1000e86c0(param_2,"playTileOrder"),
     *param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2)) {
    local_38 = 0x100005;
    local_48 = "playTileOrder";
    uStack_40 = 0xd;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "playTileOrder";
      uStack_40 = 0xd;
      puVar4 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
      uVar5 = *puVar4;
      goto LAB_1001332c4;
    }
  }
  uVar5 = 0;
LAB_1001332c4:
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  return;
}




void FUN_1001332fc(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  lVar2 = FUN_1000e86c0(param_2,"negativeResponseAskTime");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_10013336c:
    uVar4 = 0;
  }
  else {
    local_38 = 0x100005;
    local_48 = "negativeResponseAskTime";
    uStack_40 = 0x17;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) == 0) goto LAB_10013336c;
    local_38 = 0x100005;
    local_48 = "negativeResponseAskTime";
    uStack_40 = 0x17;
    puVar3 = (undefined4 *)FUN_1000e87dc(param_2,&local_48);
    uVar4 = *puVar3;
  }
  *(undefined4 *)(param_1 + 8) = uVar4;
  lVar2 = FUN_1000e86c0(param_2,"showOnChestOpen");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_1001333e0:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "showOnChestOpen";
    uStack_40 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1001333e0;
    local_38 = 0x100005;
    local_48 = "showOnChestOpen";
    uStack_40 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xc) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"showOnSpoils");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_10013345c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "showOnSpoils";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_10013345c;
    local_38 = 0x100005;
    local_48 = "showOnSpoils";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xd) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"hardFought");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_1001334d8:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "hardFought";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1001334d8;
    local_38 = 0x100005;
    local_48 = "hardFought";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xe) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"unlocked1stWin");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100133554:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "unlocked1stWin";
    uStack_40 = 0xe;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100133554;
    local_38 = 0x100005;
    local_48 = "unlocked1stWin";
    uStack_40 = 0xe;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0xf) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"unlocked3rdWin");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_1001335d0:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "unlocked3rdWin";
    uStack_40 = 0xe;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1001335d0;
    local_38 = 0x100005;
    local_48 = "unlocked3rdWin";
    uStack_40 = 0xe;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x10) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"unlocked7thDayWin");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_10013364c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "unlocked7thDayWin";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_10013364c;
    local_38 = 0x100005;
    local_48 = "unlocked7thDayWin";
    uStack_40 = 0x11;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x11) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tier1SkinUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_1001336c8:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "tier1SkinUnlock";
    uStack_40 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1001336c8;
    local_38 = 0x100005;
    local_48 = "tier1SkinUnlock";
    uStack_40 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x12) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tier2SkinUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_100133744:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "tier2SkinUnlock";
    uStack_40 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_100133744;
    local_38 = 0x100005;
    local_48 = "tier2SkinUnlock";
    uStack_40 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x13) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"tier3SkinUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_1001337c0:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "tier3SkinUnlock";
    uStack_40 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_1001337c0;
    local_38 = 0x100005;
    local_48 = "tier3SkinUnlock";
    uStack_40 = 0xf;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x14) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"SESkinUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 == lVar2) {
LAB_10013383c:
    bVar1 = false;
  }
  else {
    local_38 = 0x100005;
    local_48 = "SESkinUnlock";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) == 0) goto LAB_10013383c;
    local_38 = 0x100005;
    local_48 = "SESkinUnlock";
    uStack_40 = 0xc;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
  }
  *(bool *)(param_1 + 0x15) = bVar1;
  lVar2 = FUN_1000e86c0(param_2,"heroUnlock");
  if (*param_2 + (ulong)*(uint *)(param_2 + 1) * 0x30 != lVar2) {
    local_38 = 0x100005;
    local_48 = "heroUnlock";
    uStack_40 = 10;
    lVar2 = FUN_1000e87dc(param_2,&local_48);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_38 = 0x100005;
      local_48 = "heroUnlock";
      uStack_40 = 10;
      lVar2 = FUN_1000e87dc(param_2,&local_48);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
      goto LAB_1001338e4;
    }
  }
  bVar1 = false;
LAB_1001338e4:
  *(bool *)(param_1 + 0x16) = bVar1;
  return;
}




void FUN_1001338fc(long param_1,long *param_2)

{
  string *this;
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  void *local_60 [2];
  char local_49;
  void *local_48 [2];
  char local_31;
  
  FUN_1001347f4(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 **)(param_1 + 8) = (undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (((int)param_2[2] == 3) && (uVar2 = (ulong)*(uint *)(param_2 + 1), *(uint *)(param_2 + 1) != 0)
     ) {
    lVar3 = *param_2;
    puVar4 = (undefined8 *)(lVar3 + 0x18);
    do {
      if ((*(uint *)(puVar4 + 2) >> 0x14 & 1) != 0) {
        puVar1 = puVar4;
        if ((*(uint *)(puVar4 + 2) >> 0x16 & 1) == 0) {
          puVar1 = (undefined8 *)*puVar4;
        }
        FUN_10001549c(local_48,puVar1);
        if ((*(byte *)((long)puVar4 + -6) >> 6 & 1) == 0) {
          puVar1 = (undefined8 *)puVar4[-3];
        }
        else {
          puVar1 = puVar4 + -3;
        }
        FUN_10001549c(local_60,puVar1);
        this = (string *)FUN_1001339ec(param_1 + 8,local_60);
        std::string::operator=(this,(string *)local_48);
        if (local_49 < '\0') {
          operator_delete(local_60[0]);
        }
        if (local_31 < '\0') {
          operator_delete(local_48[0]);
        }
        lVar3 = *param_2;
        uVar2 = (ulong)*(uint *)(param_2 + 1);
      }
      puVar1 = puVar4 + 3;
      puVar4 = puVar4 + 6;
    } while (puVar1 != (undefined8 *)(lVar3 + uVar2 * 0x30));
  }
  return;
}




long FUN_1001339ec(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  long local_50 [3];
  undefined8 local_38;
  
  plVar1 = (long *)FUN_100134860(param_1,&local_38,param_2);
  lVar2 = *plVar1;
  if (*plVar1 == 0) {
    FUN_100134904(local_50,param_1,param_2);
    FUN_1001349d0(param_1,local_38,plVar1,local_50[0]);
    lVar2 = local_50[0];
  }
  return lVar2 + 0x38;
}




void FUN_100133a60(long param_1,long param_2)

{
  undefined8 *****pppppuVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 ****local_a8 [2];
  char local_91;
  undefined8 ****local_90 [2];
  char local_79;
  undefined8 ****local_78;
  ulong local_70;
  undefined4 local_68;
  char local_61;
  
  if (*(int *)(param_2 + 0x28) == 0) {
    lVar7 = param_2 + 0x30;
    lVar4 = FUN_1000e86c0(lVar7,PTR_s_constants_10184e3c8);
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar4) {
      lVar4 = 0;
      do {
        pcVar8 = PTR_s_constants_10184e3c8 + lVar4;
        lVar4 = lVar4 + 1;
      } while (*pcVar8 != '\0');
      local_78 = (undefined8 ****)PTR_s_constants_10184e3c8;
      local_68 = 0x100005;
      local_70 = (ulong)((int)lVar4 - 1);
      FUN_1000e87dc(lVar7,&local_78);
    }
    lVar4 = FUN_1000e86c0(lVar7,PTR_s_constants_10184e3c8);
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar4) {
      lVar4 = 0;
      do {
        pcVar8 = PTR_s_constants_10184e3c8 + lVar4;
        lVar4 = lVar4 + 1;
      } while (*pcVar8 != '\0');
      local_78 = (undefined8 ****)PTR_s_constants_10184e3c8;
      local_68 = 0x100005;
      local_70 = (ulong)((int)lVar4 - 1);
      lVar4 = FUN_1000e87dc(lVar7,&local_78);
      if (*(int *)(lVar4 + 0x10) == 3) {
        lVar4 = 0;
        do {
          pcVar8 = PTR_s_constants_10184e3c8 + lVar4;
          lVar4 = lVar4 + 1;
        } while (*pcVar8 != '\0');
        local_78 = (undefined8 ****)PTR_s_constants_10184e3c8;
        local_68 = 0x100005;
        local_70 = (ulong)((int)lVar4 - 1);
        plVar5 = (long *)FUN_1000e87dc(lVar7,&local_78);
        if (DAT_101d23360 != 0) {
          puVar11 = DAT_101d23368;
          do {
            plVar10 = (long *)*puVar11;
            (**(code **)*plVar10)(local_90,plVar10);
            pppppuVar1 = (undefined8 *****)local_90[0];
            if (-1 < local_79) {
              pppppuVar1 = local_90;
            }
            lVar4 = FUN_1000e86c0(plVar5,pppppuVar1);
            if (*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x30 == lVar4) {
              bVar3 = false;
            }
            else {
              (**(code **)*plVar10)(local_a8,plVar10);
              lVar4 = 0;
              local_78 = local_a8[0];
              if (-1 < local_91) {
                local_78 = local_a8;
              }
              do {
                pcVar8 = (char *)((long)local_78 + lVar4);
                lVar4 = lVar4 + 1;
              } while (*pcVar8 != '\0');
              local_68 = 0x100005;
              local_70 = (ulong)((int)lVar4 - 1);
              lVar4 = FUN_1000e87dc(plVar5,&local_78);
              bVar3 = *(int *)(lVar4 + 0x10) == 3;
              if (local_91 < '\0') {
                operator_delete(local_a8[0]);
              }
            }
            if (local_79 < '\0') {
              operator_delete(local_90[0]);
              if (!bVar3) goto LAB_100133cf4;
LAB_100133c74:
              (**(code **)*plVar10)(local_90,plVar10);
              lVar4 = 0;
              local_78 = local_90[0];
              if (-1 < local_79) {
                local_78 = local_90;
              }
              do {
                pcVar8 = (char *)((long)local_78 + lVar4);
                lVar4 = lVar4 + 1;
              } while (*pcVar8 != '\0');
              local_68 = 0x100005;
              local_70 = (ulong)((int)lVar4 - 1);
              uVar6 = FUN_1000e87dc(plVar5,&local_78);
              (**(code **)(*plVar10 + 8))(plVar10,uVar6);
              pppppuVar1 = (undefined8 *****)local_90[0];
              cVar2 = local_79;
            }
            else {
              if (bVar3) goto LAB_100133c74;
LAB_100133cf4:
              (**(code **)*plVar10)(&local_78,plVar10);
              pppppuVar1 = (undefined8 *****)local_78;
              cVar2 = local_61;
            }
            if (cVar2 < '\0') {
              operator_delete(pppppuVar1);
            }
            puVar11 = puVar11 + 1;
          } while (puVar11 != DAT_101d23368 + DAT_101d23360);
        }
      }
    }
    lVar4 = FUN_1000e86c0(lVar7,"experimentDetails");
    if (*(long *)(param_2 + 0x30) + (ulong)*(uint *)(param_2 + 0x38) * 0x30 != lVar4) {
      local_68 = 0x100005;
      local_78 = (undefined8 ****)0x1013dcb07;
      local_70 = 0x11;
      lVar4 = FUN_1000e87dc(lVar7,&local_78);
      if (*(int *)(lVar4 + 0x10) == 4) {
        local_68 = 0x100005;
        local_78 = (undefined8 ****)0x1013dcb07;
        local_70 = 0x11;
        plVar5 = (long *)FUN_1000e87dc(lVar7,&local_78);
        if ((int)plVar5[1] != 0) {
          plVar10 = (long *)*plVar5;
          do {
            lVar7 = FUN_1000e86c0(plVar10,"experimentId");
            if (*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x30 == lVar7) {
              pcVar8 = "";
            }
            else {
              local_68 = 0x100005;
              local_78 = (undefined8 ****)0x1013dcb19;
              local_70 = 0xc;
              lVar7 = FUN_1000e87dc(plVar10,&local_78);
              pcVar8 = "";
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = (undefined8 ****)0x1013dcb19;
                local_70 = 0xc;
                pcVar8 = (char *)FUN_1000e87dc(plVar10,&local_78);
                if (((byte)pcVar8[0x12] >> 6 & 1) == 0) {
                  pcVar8 = *(char **)pcVar8;
                }
              }
            }
            lVar7 = FUN_1000e86c0(plVar10,"variantString");
            if (*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x30 == lVar7) {
              pcVar9 = "";
            }
            else {
              local_68 = 0x100005;
              local_78 = (undefined8 ****)0x1013dcb26;
              local_70 = 0xd;
              lVar7 = FUN_1000e87dc(plVar10,&local_78);
              pcVar9 = "";
              if ((*(byte *)(lVar7 + 0x12) >> 4 & 1) != 0) {
                local_68 = 0x100005;
                local_78 = (undefined8 ****)0x1013dcb26;
                local_70 = 0xd;
                pcVar9 = (char *)FUN_1000e87dc(plVar10,&local_78);
                if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
                  pcVar9 = *(char **)pcVar9;
                }
              }
            }
            lVar7 = FUN_1000e86c0(plVar10,"isActive");
            if (*plVar10 + (ulong)*(uint *)(plVar10 + 1) * 0x30 == lVar7) {
LAB_100133f18:
              pcVar9 = "UNSET";
            }
            else {
              local_68 = 0x100005;
              local_78 = (undefined8 ****)0x1013dcb34;
              local_70 = 8;
              lVar7 = FUN_1000e87dc(plVar10,&local_78);
              if ((*(byte *)(lVar7 + 0x11) & 1) == 0) goto LAB_100133f18;
              local_68 = 0x100005;
              local_78 = (undefined8 ****)0x1013dcb34;
              local_70 = 8;
              lVar7 = FUN_1000e87dc(plVar10,&local_78);
              if (*(int *)(lVar7 + 0x10) != 0x102) goto LAB_100133f18;
            }
            FUN_100102198(pcVar8,pcVar9,1);
            plVar10 = plVar10 + 3;
          } while (plVar10 != (long *)(*plVar5 + (ulong)*(uint *)(plVar5 + 1) * 0x18));
        }
      }
    }
    FUN_100133fc8();
    lVar7 = DAT_101e3a3c8;
    if ((uint)DAT_101e3a3c0 != 0) {
      do {
        if (*(code **)(lVar7 + 8) == (code *)0x0) {
          (**(code **)(lVar7 + 0x18))(*(undefined8 *)(lVar7 + 0x10));
        }
        else {
          (**(code **)(lVar7 + 8))();
        }
        lVar7 = lVar7 + 0x20;
      } while (lVar7 != DAT_101e3a3c8 + (ulong)(uint)DAT_101e3a3c0 * 0x20);
    }
    *(undefined1 *)(param_1 + 0x18) = 1;
  }
  return;
}




undefined8 * FUN_100133fc8(void)

{
  int iVar1;
  
  if (((DAT_101e3a3d0 & 1) == 0) && (iVar1 = ___cxa_guard_acquire(&DAT_101e3a3d0), iVar1 != 0)) {
    DAT_101e3a3c0 = 0;
    DAT_101e3a3c8 = 0;
    ___cxa_atexit(FUN_10013419c,&DAT_101e3a3c0,0x100000000);
    ___cxa_guard_release(&DAT_101e3a3d0);
  }
  return &DAT_101e3a3c0;
}




void FUN_100134030(void)

{
  operator_new(0x20);
  DAT_101d234d0 = (undefined8 *)FUN_1004f0a20();
  *DAT_101d234d0 = &PTR_thunk_FUN_1004f0a9c_10145a940;
  *(undefined1 *)(DAT_101d234d0 + 3) = 0;
  return;
}




void FUN_100134064(void)

{
  if (DAT_101d234d0 != (long *)0x0) {
    (**(code **)(*DAT_101d234d0 + 8))();
  }
  DAT_101d234d0 = (long *)0x0;
  return;
}




undefined8 * FUN_100134098(void)

{
  return &DAT_101d23370;
}




undefined8 * FUN_1001340a4(void)

{
  return &DAT_101d233b0;
}




undefined8 * FUN_1001340b0(void)

{
  return &DAT_101d233c8;
}




undefined8 * FUN_1001340bc(void)

{
  return &DAT_101d233e8;
}




undefined8 * FUN_1001340c8(void)

{
  return &DAT_101d23400;
}




undefined8 * FUN_1001340d4(void)

{
  return &DAT_101d23420;
}




undefined8 * FUN_1001340e0(void)

{
  return &DAT_101d23450;
}




undefined8 * FUN_1001340ec(void)

{
  return &DAT_101d23460;
}




undefined8 * FUN_1001340f8(void)

{
  return &DAT_101d23470;
}




undefined8 * FUN_100134104(void)

{
  return &DAT_101d234b0;
}




undefined8 * FUN_100134110(void)

{
  return &DAT_101d234c0;
}




void FUN_10013411c(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_100134aa4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 8 + -8) = *param_2;
  return;
}




undefined8 * FUN_10013419c(undefined8 *param_1)

{
  if ((void *)param_1[1] != (void *)0x0) {
    operator_delete__((void *)param_1[1]);
    *param_1 = 0;
    param_1[1] = 0;
  }
  return param_1;
}




undefined1 FUN_1001341cc(void)

{
  return *(undefined1 *)(DAT_101d234d0 + 0x18);
}




void FUN_1001341dc(undefined8 param_1)

{
  FUN_10001549c(param_1,"localNotificationData");
  return;
}




void FUN_1001341ec(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a6a0;
  if ((void *)param_1[6] != (void *)0x0) {
    operator_delete__((void *)param_1[6]);
    param_1[5] = 0;
    param_1[6] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    operator_delete__((void *)param_1[4]);
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if ((void *)param_1[2] != (void *)0x0) {
    operator_delete__((void *)param_1[2]);
    param_1[1] = 0;
    param_1[2] = 0;
  }
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        break;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_100134294(undefined8 param_1)

{
  FUN_10001549c(param_1,"seasonalData");
  return;
}




void FUN_1001342a4(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_1001342f4(undefined8 param_1)

{
  FUN_10001549c(param_1,"presentationData");
  return;
}




void FUN_100134304(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_100134354(undefined8 param_1)

{
  FUN_10001549c(param_1,"hudDynamicData");
  return;
}




void FUN_100134364(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_1001343b4(undefined8 param_1)

{
  FUN_10001549c(param_1,"rateAppData");
  return;
}




void FUN_1001343c4(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_100134414(undefined8 param_1)

{
  FUN_10001549c(param_1,"marketFeedExperiment");
  return;
}




void FUN_100134424(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a790;
  FUN_1001347f4(param_1 + 1,param_1[2]);
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        break;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_1001344a4(undefined8 param_1)

{
  FUN_10001549c(param_1,"dailyLoginExperiment");
  return;
}




void FUN_1001344b4(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_100134504(undefined8 param_1)

{
  FUN_10001549c(param_1,"freeTabVisibilityExperiment");
  return;
}




void FUN_100134514(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_100134564(undefined8 param_1)

{
  FUN_10001549c(param_1,"tutorialCompletionPopupExperiment");
  return;
}




void FUN_100134574(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_1001345c4(undefined8 param_1)

{
  FUN_10001549c(param_1,"goldenArrowPromptExperiment");
  return;
}




void FUN_1001345d4(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_100134624(undefined8 param_1)

{
  FUN_10001549c(param_1,"talentsLevelGateExperiment");
  return;
}




void FUN_100134634(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_100134684(undefined8 param_1)

{
  FUN_10001549c(param_1,"telemetryThrottle");
  return;
}




void FUN_100134694(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_1001346e4(undefined8 param_1)

{
  FUN_10001549c(param_1,"featuresEnabled");
  return;
}




void FUN_1001346f4(void *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((void *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        operator_delete(param_1);
        return;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_100134744(undefined8 param_1)

{
  FUN_10001549c(param_1,"tutorialExperiments");
  return;
}




void FUN_100134754(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  *param_1 = &PTR_FUN_10145a910;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  if (DAT_101d23360 != 0) {
    lVar2 = (ulong)DAT_101d23360 << 3;
    puVar1 = DAT_101d23368;
    do {
      if ((undefined8 *)*puVar1 == param_1) {
        DAT_101d23360 = DAT_101d23360 - 1;
        *puVar1 = DAT_101d23368[DAT_101d23360];
        break;
      }
      puVar1 = puVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  operator_delete(param_1);
  return;
}




void FUN_1001347e0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1004f0a9c();
  operator_delete(pvVar1);
  return;
}




void FUN_1001347f4(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_1001347f4(param_1,*param_2);
    FUN_1001347f4(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x4f) < '\0') {
      operator_delete((void *)param_2[7]);
    }
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_100134854(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




long * FUN_100134860(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_100134a24(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_100134a24(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_100134904(long *param_1,long param_2,undefined8 *param_3)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  
  pvVar1 = operator_new(0x50);
  *param_1 = (long)pvVar1;
  param_1[1] = param_2 + 8;
  *(undefined2 *)(param_1 + 2) = 0;
  if ((char)*(byte *)((long)param_3 + 0x17) < '\0') {
    uVar4 = param_3[1];
    if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_100134854();
    }
    param_3 = (undefined8 *)*param_3;
  }
  else {
    uVar4 = (ulong)*(byte *)((long)param_3 + 0x17);
  }
  if (uVar4 < 0x17) {
    pvVar2 = (void *)((long)pvVar1 + 0x20);
    *(char *)((long)pvVar1 + 0x37) = (char)uVar4;
    if (uVar4 == 0) goto LAB_1001349a0;
  }
  else {
    uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
    pvVar2 = operator_new(uVar5);
    *(ulong *)((long)pvVar1 + 0x28) = uVar4;
    *(ulong *)((long)pvVar1 + 0x30) = uVar5 | 0x8000000000000000;
    *(void **)((long)pvVar1 + 0x20) = pvVar2;
  }
  _memcpy(pvVar2,param_3,uVar4);
LAB_1001349a0:
  *(undefined1 *)((long)pvVar2 + uVar4) = 0;
  *(undefined2 *)(param_1 + 2) = 0x101;
  lVar3 = *param_1;
  *(undefined8 *)(lVar3 + 0x40) = 0;
  *(undefined8 *)(lVar3 + 0x48) = 0;
  *(undefined8 *)(lVar3 + 0x38) = 0;
  return;
}




void FUN_1001349d0(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




uint FUN_100134a24(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_100134a94;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_100134a94:
  return uVar8 >> 0x1f;
}




void FUN_100134aa4(uint *param_1,uint param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1[1] < param_2) {
    puVar1 = operator_new__((ulong)param_2 << 3);
    puVar2 = *(undefined8 **)(param_1 + 2);
    if (*param_1 != 0) {
      lVar3 = (ulong)*param_1 << 3;
      puVar4 = puVar1;
      puVar5 = puVar2;
      do {
        *puVar4 = *puVar5;
        lVar3 = lVar3 + -8;
        puVar4 = puVar4 + 1;
        puVar5 = puVar5 + 1;
      } while (lVar3 != 0);
    }
    param_1[1] = param_2;
    if (puVar2 != (undefined8 *)0x0) {
      operator_delete__(puVar2);
    }
    *(undefined8 **)(param_1 + 2) = puVar1;
  }
  return;
}




/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100134b20(void)

{
  undefined8 *local_48;
  
  DAT_101e3a248 = 0xff;
  DAT_101e3a24a = 0xffff;
  DAT_101e3a24c = 0xffff;
  DAT_101e3a24e = 0xffbc9c44;
  DAT_101e3a252 = 0xff1166f2;
  DAT_101e3a256 = 0xffe0e0e0;
  DAT_101e3a25a = 0xffa0a0a0;
  DAT_101e3a25e = 0xff8c8c8c;
  DAT_101e3a262 = 0xff322213;
  DAT_101e3a266 = 0xff091911;
  DAT_101e3a26a = 0xff170c19;
  DAT_101e3a26e = 0xff241a14;
  DAT_101e3a272 = 0xff14171c;
  DAT_101e3a276 = 0xff221911;
  DAT_101e3a27a = 0xff1a1416;
  DAT_101e3a27e = 0xff121414;
  DAT_101e3a282 = 0xff1a1809;
  DAT_101e3a286 = 0xff141414;
  DAT_101e3a28a = 0xff141414;
  DAT_101e3a28e = 0xff2929c0;
  DAT_101e3a292 = 0xff283082;
  DAT_101e3a296 = 0xff5262cc;
  DAT_101e3a29a = 0xff283082;
  DAT_101e3a29e = 0xff5262cc;
  DAT_101e3a2a2 = 0xff745c42;
  DAT_101e3a2a6 = 0xff184155;
  DAT_101e3a2aa = 0xff92665e;
  DAT_101e3a2ae = 0xffbc9c44;
  DAT_101e3a2b2 = 0xffbbae56;
  DAT_101e3a2b6 = 0xff8b7b01;
  DAT_101e3a2ba = 0xff90b3ef;
  DAT_101e3a2be = 0xff728ebe;
  DAT_101e3a2c2 = 0xff19459d;
  DAT_101e3a2c6 = 0xff9d877b;
  DAT_101e3a2ca = 0xffcbb1a3;
  DAT_101e3a2ce = 0xff3f6fb5;
  DAT_101e3a2d2 = 0xffc5c5c5;
  DAT_101e3a2d6 = 0xff4fc1f1;
  DAT_101e3a2da = 0xff606060;
  DAT_101e3a2de = 0xffc5ff7b;
  DAT_101e3a2e2 = 0xff5271eb;
  DAT_101e3a2e6 = 0xfffae076;
  DAT_101e3a2ea = 0xff3ac8f6;
  DAT_101e3a2ee = 0xffaaaaaa;
  DAT_101e3a2f2 = 0xffe19400;
  DAT_101e3a2f6 = 0xffe19400;
  DAT_101e3a2fa = 0xffe550b2;
  DAT_101e3a2fe = 0xfff22ae8;
  DAT_101e3a302 = 0xff005ae1;
  DAT_101e3a306 = 0xff1addfa;
  DAT_101e3a30a = 0xff2424b3;
  DAT_101e3a30e = 0xff2424b3;
  DAT_101e3a312 = 0xff646464;
  DAT_101e3a316 = 0xff92665e;
  DAT_101e3a31a = 0xff646037;
  DAT_101e3a320 = 0xffffffff;
  DAT_101e3a324 = 0xff1111a1;
  DAT_101e3a328 = 0xff321ee1;
  DAT_101e3a32c = 0xffc8c8c8;
  DAT_101e3a330 = 0xff321ee1;
  DAT_101e3a334 = 0xff7fe801;
  DAT_101e3a338 = 0xffffffff;
  DAT_101e3a33c = 0xff6259b3;
  DAT_101e3a340 = 0xff506e73;
  DAT_101e3a344 = 0xff9dbf86;
  DAT_101e3a348 = 0xffa35244;
  DAT_101e3a34c = 0xffca828e;
  DAT_101e3a350 = 0xffa6a6a6;
  DAT_101e3a354 = 0xffa6a6a6;
  DAT_101e3a358 = 0xffffffff;
  DAT_101e3a35c = 0xff88ea2f;
  DAT_101e3a360 = 0xff8c8c8c;
  DAT_101e3a364 = 0xffffb400;
  DAT_101e3a368 = 0xffff00ff;
  DAT_101e3a36c = 0xff00aded;
  DAT_101e3a370 = 0xff33d3ff;
  DAT_101e3a374 = 0xff7fe801;
  DAT_101e3a378 = 0xff282828;
  DAT_101e3a37c = 0xfff0f0f0;
  DAT_101e3a380 = 0xffa4781e;
  DAT_101e3a384 = 0xffa6654b;
  DAT_101e3a388 = 0xff93435b;
  DAT_101e3a38c = 0xff387f9c;
  DAT_101e3a390 = 0xffa3781e;
  DAT_101e3a394 = 0xffffd18a;
  DAT_101e3a398 = 0xffff61f7;
  DAT_101e3a39c = 0xff5de1f2;
  DAT_101e3a3a0 = 0xff80eaff;
  DAT_101e3a3a4 = 0xff32e00e;
  DAT_101e3a3a8 = 0xff5a3c10;
  DAT_101e3a3ac = 0xff330b03;
  DAT_101e3a3b0 = 0xff33031d;
  DAT_101e3a3b4 = 0xff032433;
  DAT_101e3a3b8 = 0xff9e8e8d;
  _DAT_101d23360 = 0;
  DAT_101d23368 = 0;
  ___cxa_atexit(FUN_1001315ac,&DAT_101d23360,0x100000000);
  DAT_101d23370 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23370;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23370 = &PTR_FUN_10145a6a0;
  uRam0000000101d23380 = 0;
  _DAT_101d23378 = 0;
  uRam0000000101d23390 = 0;
  _DAT_101d23388 = 0;
  uRam0000000101d233a0 = 0;
  _DAT_101d23398 = 0;
  DAT_101d233a8 = 0;
  ___cxa_atexit(FUN_1001315dc,&DAT_101d23370,0x100000000);
  DAT_101d233b0 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233b0;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233b0 = &PTR_FUN_10145a6d0;
  DAT_101d233b8 = 0;
  DAT_101d233c0 = 1;
  ___cxa_atexit(FUN_100131690,&DAT_101d233b0,0x100000000);
  DAT_101d233c8 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233c8;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233c8 = &PTR_FUN_10145a700;
  DAT_101d233d0 = 0;
  ___cxa_atexit(FUN_1001316ec,&DAT_101d233c8,0x100000000);
  DAT_101d233d8 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233d8;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233d8 = &PTR_FUN_10145a730;
  DAT_101d233e0 = 0;
  ___cxa_atexit(FUN_100131748,&DAT_101d233d8,0x100000000);
  DAT_101d233e8 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d233e8;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d233e8 = &PTR_FUN_10145a760;
  DAT_101d233f0._0_7_ = 0;
  DAT_101d233f0._7_1_ = 0;
  uRam0000000101d233f8 = 0;
  ___cxa_atexit(FUN_1001317a4,&DAT_101d233e8,0x100000000);
  DAT_101d23400 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23400;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23418 = 0;
  DAT_101d23410 = 0;
  DAT_101d23400 = &PTR_FUN_10145a790;
  DAT_101d23408 = &DAT_101d23410;
  ___cxa_atexit(FUN_100131800,&DAT_101d23400,0x100000000);
  DAT_101d23420 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23420;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23420 = &PTR_FUN_10145a7c0;
  DAT_101d23428 = 1;
  ___cxa_atexit(FUN_10013188c,&DAT_101d23420,0x100000000);
  DAT_101d23430 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23430;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23430 = &PTR_FUN_10145a7f0;
  DAT_101d23438 = 0x1010101;
  DAT_101d2343c = 0;
  ___cxa_atexit(FUN_1001318e8,&DAT_101d23430,0x100000000);
  DAT_101d23440 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23440;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23440 = &PTR_FUN_10145a820;
  DAT_101d23448 = 1;
  ___cxa_atexit(FUN_100131944,&DAT_101d23440,0x100000000);
  DAT_101d23450 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23450;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23450 = &PTR_FUN_10145a850;
  DAT_101d23458 = 1;
  ___cxa_atexit(FUN_1001319a0,&DAT_101d23450,0x100000000);
  DAT_101d23460 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23460;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23460 = &PTR_FUN_10145a880;
  DAT_101d23468 = 0;
  ___cxa_atexit(FUN_1001319fc,&DAT_101d23460,0x100000000);
  DAT_101d23470 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d23470;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d23470 = &PTR_FUN_10145a910;
  uRam0000000101d23480 = 0;
  _DAT_101d23478 = 0;
  uRam0000000101d23490 = 0;
  _DAT_101d23488 = 0;
  DAT_101d23498 = 1;
  DAT_101d23499 = 0;
  DAT_101d234a0 = 0;
  DAT_101d234a8 = 0;
  DAT_101d234a9 = 1;
  ___cxa_atexit(FUN_100131a58,&DAT_101d23470,0x100000000);
  DAT_101d234b0 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d234b0;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d234b0 = &PTR_FUN_10145a8e0;
  DAT_101d234b8 = 0;
  DAT_101d234ba = 0;
  DAT_101d234bc = 0;
  ___cxa_atexit(FUN_100131aec,&DAT_101d234b0,0x100000000);
  DAT_101d234c0 = &PTR____cxa_pure_virtual_10145a670;
  local_48 = &DAT_101d234c0;
  FUN_10013411c(&DAT_101d23360,&local_48);
  DAT_101d234c0 = &PTR_FUN_10145a8b0;
  DAT_101d234c8 = 1;
  ___cxa_atexit(FUN_100131b48,&DAT_101d234c0,0x100000000);
  return;
}




void FUN_1001355f8(void)

{
  return;
}




void FUN_1001355fc(void)

{
  return;
}




void FUN_100135604(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145a970;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = param_1 + 4;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}




undefined8 * FUN_100135628(undefined8 *param_1)

{
  bool bVar1;
  void *pvVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  *param_1 = &PTR_FUN_10145a970;
  plVar5 = (long *)param_1[3];
  while (plVar5 != param_1 + 4) {
    if (plVar5[7] != 0) {
      pvVar2 = (void *)thunk_FUN_10001653c();
      operator_delete(pvVar2);
    }
    plVar5[7] = 0;
    plVar3 = (long *)plVar5[1];
    if ((long *)plVar5[1] == (long *)0x0) {
      plVar3 = plVar5 + 2;
      bVar1 = *(long **)*plVar3 != plVar5;
      plVar5 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar5 = (long *)*plVar3;
        } while (*plVar5 != lVar4);
      }
    }
    else {
      do {
        plVar5 = plVar3;
        plVar3 = (long *)*plVar5;
      } while ((long *)*plVar5 != (long *)0x0);
    }
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  FUN_100135cdc(param_1 + 3,param_1[4]);
  FUN_100135c64(param_1 + 1,1);
  return param_1;
}




void FUN_1001356fc(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100135700);
  (*pcVar1)();
}




void FUN_100135700(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100135704);
  (*pcVar1)();
}




undefined8 FUN_100135704(long *param_1)

{
  long *plVar1;
  size_t sVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 ***pppuVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 **local_a8;
  size_t local_a0;
  ulong local_98;
  void *local_90 [2];
  char local_79;
  undefined8 **local_78 [2];
  char local_61;
  
  uVar3 = (**(code **)(*param_1 + 0x18))();
  if ((int)uVar3 != 0) {
    if ((int)param_1[1] != 0) {
      uVar10 = 0;
      lVar8 = 0x18;
      do {
        lVar4 = FUN_100135d38(param_1 + 3,param_1[2] + lVar8);
        if (lVar4 == 0) {
          local_a8 = (undefined8 ***)0x0;
          local_a0 = 0;
          local_98 = 0;
          plVar1 = (long *)param_1[6];
          sVar2 = param_1[7];
          if (-1 < (char)*(byte *)((long)param_1 + 0x47)) {
            plVar1 = param_1 + 6;
            sVar2 = (ulong)*(byte *)((long)param_1 + 0x47);
          }
          if (0xffffffffffffffef < sVar2 + 1) {
                    /* WARNING: Subroutine does not return */
            FUN_100135d2c();
          }
          if (sVar2 + 1 < 0x17) {
            pppuVar5 = &local_a8;
            local_98 = sVar2 << 0x38;
            if (sVar2 != 0) goto LAB_1001357d4;
          }
          else {
            uVar9 = sVar2 + 0x11 & 0xfffffffffffffff0;
            pppuVar5 = operator_new(uVar9);
            local_98 = uVar9 | 0x8000000000000000;
            local_a8 = pppuVar5;
            local_a0 = sVar2;
LAB_1001357d4:
            _memcpy(pppuVar5,plVar1,sVar2);
          }
          *(undefined1 *)((long)pppuVar5 + sVar2) = 0;
          std::string::append((char *)&local_a8,0x1013dcc67);
          FUN_1000e8b18(local_90,&local_a8,param_1[2] + lVar8);
          std::string::string((string *)local_78,(string *)local_90);
          if (local_79 < '\0') {
            operator_delete(local_90[0]);
          }
          if ((long)local_98 < 0) {
            operator_delete(local_a8);
          }
          pvVar6 = operator_new(0x20);
          pppuVar5 = (undefined8 ***)local_78[0];
          if (-1 < local_61) {
            pppuVar5 = local_78;
          }
          thunk_FUN_100016500(pvVar6,pppuVar5,1);
          puVar7 = (undefined8 *)FUN_1001358ec(param_1 + 3,param_1[2] + lVar8);
          *puVar7 = pvVar6;
          if (local_61 < '\0') {
            operator_delete(local_78[0]);
          }
        }
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x78;
      } while (uVar10 < *(uint *)(param_1 + 1));
    }
    FUN_10001549c(local_78,"");
    FUN_100135968(param_1,local_78);
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
  }
  return uVar3;
}




long FUN_1001358ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 local_38;
  
  puVar1 = (undefined8 *)FUN_100135e20(param_1,&local_38,param_2);
  pvVar2 = (void *)*puVar1;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = operator_new(0x40);
    FUN_10003330c((long)pvVar2 + 0x20,param_2);
    *(undefined8 *)((long)pvVar2 + 0x38) = 0;
    FUN_100135ec4(param_1,local_38,puVar1,pvVar2);
  }
  return (long)pvVar2 + 0x38;
}




void FUN_100135968(long param_1,byte *param_2)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  undefined8 uVar12;
  long lVar13;
  byte *pbVar14;
  long lVar15;
  ulong uVar16;
  void *local_108 [2];
  char local_f1;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_101444218;
  if (*(int *)(param_1 + 8) != 0) {
    uVar16 = 0;
    do {
      lVar8 = *(long *)(param_1 + 0x10) + uVar16 * 0x78;
      pbVar1 = (byte *)(lVar8 + 0x18);
      bVar4 = param_2[0x17];
      uVar9 = (ulong)bVar4;
      sVar2 = *(size_t *)(param_2 + 8);
      if (-1 < (char)bVar4) {
        sVar2 = uVar9;
      }
      if (sVar2 == 0) {
LAB_100135a68:
        lVar8 = FUN_100135f18(param_1 + 0x18,pbVar1);
        if (param_1 + 0x20 != lVar8) {
          uVar12 = *(undefined8 *)(lVar8 + 0x38);
          FUN_10006d330(auStack_f0,"%s_%s");
          FUN_10001549c(local_108,auStack_f0);
          lVar8 = FUN_10012eb90(local_108);
          if (local_f1 < '\0') {
            operator_delete(local_108[0]);
          }
          lVar10 = *(long *)(param_1 + 0x10);
          if (*(int *)(lVar10 + uVar16 * 0x78 + 8) == 0) {
            iVar7 = 0;
          }
          else {
            uVar9 = 0;
            iVar7 = 0;
            lVar15 = 0x438;
            do {
              lVar13 = *(long *)(lVar10 + uVar16 * 0x78 + 0x10);
              local_108[0] = (void *)0xffffffffffffffff;
              cVar6 = *(char *)(lVar13 + lVar15 + 0x17);
              if (cVar6 < '\0') {
                if (*(long *)(lVar13 + lVar15 + 8) != 0) {
                  lVar13 = *(long *)(lVar13 + lVar15);
                  goto LAB_100135b30;
                }
              }
              else if (cVar6 != '\0') {
                lVar13 = lVar13 + lVar15;
LAB_100135b30:
                FUN_1004d2864(lVar13,"%lld");
                lVar10 = *(long *)(param_1 + 0x10);
              }
              if (lVar8 < (long)local_108[0]) {
                iVar7 = iVar7 + 1;
              }
              uVar9 = uVar9 + 1;
              lVar15 = lVar15 + 0x598;
            } while (uVar9 < *(uint *)(lVar10 + uVar16 * 0x78 + 8));
          }
          FUN_1000165f0(uVar12,iVar7);
        }
      }
      else {
        bVar5 = *(byte *)(lVar8 + 0x2f);
        sVar3 = *(size_t *)(*(long *)(param_1 + 0x10) + uVar16 * 0x78 + 0x20);
        if (-1 < (char)bVar5) {
          sVar3 = (ulong)bVar5;
        }
        if (sVar2 == sVar3) {
          pbVar11 = *(byte **)pbVar1;
          if (-1 < (char)bVar5) {
            pbVar11 = pbVar1;
          }
          if ((char)bVar4 < '\0') {
            iVar7 = _memcmp(*(void **)param_2,pbVar11,sVar2);
            if (iVar7 == 0) goto LAB_100135a68;
          }
          else {
            pbVar14 = param_2;
            if ((uint)*pbVar11 == ((uint)*(void **)param_2 & 0xff)) {
              do {
                pbVar14 = pbVar14 + 1;
                uVar9 = uVar9 - 1;
                pbVar11 = pbVar11 + 1;
                if (uVar9 == 0) goto LAB_100135a68;
              } while (*pbVar14 == *pbVar11);
            }
          }
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < *(uint *)(param_1 + 8));
  }
  if (*(long *)PTR____stack_chk_guard_101444218 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




bool FUN_100135bd0(long param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    FUN_100135f98(param_2,(int *)(param_1 + 8));
  }
  return iVar1 != 0;
}




void FUN_100135c08(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    if (*(uint *)(param_1 + 8) != 0) {
      lVar1 = (ulong)*(uint *)(param_1 + 8) * 0x78;
      puVar2 = *(undefined8 **)(param_1 + 0x10);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x78;
        puVar2 = puVar2 + 0xf;
      } while (lVar1 != 0);
    }
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}




void FUN_100135c64(uint *param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 2) != (undefined8 *)0x0) {
    if (*param_1 != 0) {
      lVar1 = (ulong)*param_1 * 0x78;
      puVar2 = *(undefined8 **)(param_1 + 2);
      do {
        (**(code **)*puVar2)(puVar2);
        lVar1 = lVar1 + -0x78;
        puVar2 = puVar2 + 0xf;
      } while (lVar1 != 0);
    }
    if (param_2 != 0) {
      if (*(void **)(param_1 + 2) != (void *)0x0) {
        operator_delete__(*(void **)(param_1 + 2));
      }
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[1] = 0;
    }
    *param_1 = 0;
  }
  return;
}




void FUN_100135cdc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_100135cdc(param_1,*param_2);
    FUN_100135cdc(param_1,param_2[1]);
    if (*(char *)((long)param_2 + 0x37) < '\0') {
      operator_delete((void *)param_2[4]);
    }
    operator_delete(param_2);
    return;
  }
  return;
}




void FUN_100135d2c(void)

{
                    /* WARNING: Subroutine does not return */
  _abort();
}




undefined8 FUN_100135d38(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 8);
  do {
    if (plVar2 == (long *)0x0) {
      return 0;
    }
    iVar1 = FUN_100135da0(param_2,plVar2 + 4);
    if (iVar1 == 0) {
      iVar1 = FUN_100135da0(plVar2 + 4,param_2);
      if (iVar1 == 0) {
        return 1;
      }
      plVar2 = plVar2 + 1;
    }
    plVar2 = (long *)*plVar2;
  } while( true );
}




uint FUN_100135da0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  byte bVar6;
  byte bVar7;
  uint uVar8;
  
  bVar6 = *(byte *)((long)param_2 + 0x17);
  uVar1 = param_2[1];
  if (-1 < (char)bVar6) {
    uVar1 = (ulong)bVar6;
  }
  bVar7 = *(byte *)((long)param_1 + 0x17);
  uVar2 = param_1[1];
  if (-1 < (char)bVar7) {
    uVar2 = (ulong)bVar7;
  }
  sVar3 = uVar1;
  if (uVar2 <= uVar1) {
    sVar3 = uVar2;
  }
  if (sVar3 != 0) {
    puVar4 = (void *)*param_1;
    if (-1 < (char)bVar7) {
      puVar4 = param_1;
    }
    puVar5 = (void *)*param_2;
    if (-1 < (char)bVar6) {
      puVar5 = param_2;
    }
    uVar8 = _memcmp(puVar4,puVar5,sVar3);
    if (uVar8 != 0) goto LAB_100135e10;
  }
  uVar8 = 0;
  if (uVar2 < uVar1) {
    uVar8 = 0xffffffff;
  }
LAB_100135e10:
  return uVar8 >> 0x1f;
}




long * FUN_100135e20(long param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  
  plVar2 = (long *)(param_1 + 8);
  plVar3 = (long *)*plVar2;
  if (plVar3 == (long *)0x0) {
    *param_2 = plVar2;
  }
  else {
    plVar2 = (long *)(param_1 + 8);
    do {
      while( true ) {
        plVar4 = plVar3;
        iVar1 = FUN_100135da0(param_3,plVar4 + 4);
        if (iVar1 == 0) break;
        plVar2 = plVar4;
        plVar3 = (long *)*plVar4;
        if ((long *)*plVar4 == (long *)0x0) {
          *param_2 = plVar4;
          return plVar4;
        }
      }
      iVar1 = FUN_100135da0(plVar4 + 4,param_3);
      if (iVar1 == 0) break;
      plVar2 = plVar4 + 1;
      plVar3 = (long *)*plVar2;
    } while ((long *)*plVar2 != (long *)0x0);
    *param_2 = plVar4;
  }
  return plVar2;
}




void FUN_100135ec4(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
    param_4 = (undefined8 *)*param_3;
  }
  FUN_10010a2c4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}




long * FUN_100135f18(long param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  
  plVar3 = (long *)(param_1 + 8);
  plVar5 = (long *)*plVar3;
  plVar4 = plVar3;
  if (plVar5 != (long *)0x0) {
    do {
      iVar2 = FUN_100135da0(plVar5 + 4,param_2);
      lVar1 = 8;
      if (iVar2 == 0) {
        lVar1 = 0;
        plVar4 = plVar5;
      }
      plVar5 = *(long **)((long)plVar5 + lVar1);
    } while (plVar5 != (long *)0x0);
    if ((plVar4 != plVar3) && (iVar2 = FUN_100135da0(param_2,plVar4 + 4), iVar2 == 0)) {
      return plVar4;
    }
  }
  return plVar3;
}




void FUN_100135f98(uint *param_1,uint *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 != param_2) {
    FUN_100135c64(param_1,1);
    FUN_1000fa934(param_1,*param_2);
    uVar3 = *param_2;
    uVar4 = 0;
    if (uVar3 != 0) {
      lVar5 = 0;
      lVar6 = *(long *)(param_2 + 2);
      lVar7 = *(long *)(param_1 + 2);
      do {
        puVar1 = (undefined8 *)(lVar7 + lVar5);
        *puVar1 = &PTR_FUN_10145abe0;
        lVar2 = lVar6 + lVar5;
        FUN_1000faa64(puVar1 + 1,lVar2 + 8);
        FUN_10003330c(puVar1 + 3,lVar2 + 0x18);
        FUN_10003330c(puVar1 + 6,lVar2 + 0x30);
        FUN_10003330c(puVar1 + 9,lVar2 + 0x48);
        FUN_10003330c(puVar1 + 0xc,lVar2 + 0x60);
        lVar5 = lVar5 + 0x78;
      } while ((ulong)uVar3 * 0x78 - lVar5 != 0);
      uVar4 = *param_2;
    }
    *param_1 = uVar4;
  }
  return;
}




void FUN_10013607c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_101e3a550 != 0) {
    FUN_100136098(DAT_101e3a550,param_2,param_3,*(undefined4 *)(param_1 + 0x9c));
    return;
  }
  return;
}




void FUN_100136098(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  
  if (param_4 == 0) {
    iVar2 = FUN_100135704(param_1 + 0x328);
    pbVar3 = (byte *)(param_1 + 0xd8);
  }
  else if (param_4 == 2) {
    iVar2 = FUN_100135704(param_1 + 0x430);
    pbVar3 = (byte *)(param_1 + 0x268);
  }
  else {
    if (param_4 != 1) {
      return;
    }
    iVar2 = FUN_100135704(param_1 + 0x270);
    pbVar3 = (byte *)(param_1 + 0x1a0);
  }
  bVar4 = 4;
  if (iVar2 == 0) {
    bVar4 = 0;
  }
  bVar1 = 2;
  if (iVar2 == 0) {
    bVar1 = *pbVar3 & 2;
  }
  *pbVar3 = *pbVar3 & 0xf9 | bVar4 | bVar1;
  return;
}




long FUN_100136120(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  puVar2 = (undefined8 *)FUN_1004f0a20();
  puVar5 = puVar2 + 0x17;
  *puVar2 = &PTR_thunk_FUN_1001361ec_10145a9a0;
  do {
    FUN_1001e210c(puVar5 + -0x14);
    puVar5[-0x14] = &PTR_thunk_FUN_1001e2180_10145a9d0;
    *(undefined4 *)((long)puVar5 + -4) = 0xffffffff;
    FUN_10003330c(puVar5,&DAT_101d91198);
    puVar5[3] = 0;
    *(byte *)(puVar5 + 4) = *(byte *)(puVar5 + 4) & 0xf8;
    puVar1 = puVar5 + 5;
    puVar5 = puVar5 + 0x19;
  } while (puVar1 != puVar2 + 0x4e);
  thunk_FUN_100144894(param_1 + 0x270);
  thunk_FUN_100149c58(param_1 + 0x328);
  thunk_FUN_1000fa1b8(param_1 + 0x430);
  lVar3 = 0;
  lVar4 = 0xb4;
  do {
    *(int *)(param_1 + lVar4) = (int)lVar3;
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + 200;
  } while (lVar3 != 3);
  return param_1;
}




void FUN_1001361ec(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  *param_1 = &PTR_thunk_FUN_1001361ec_10145a9a0;
  do {
    FUN_1001e2a7c((long)param_1 + lVar1 + 0x18);
    std::string::operator=((string *)((long)param_1 + lVar1 + 0xb8),(string *)&DAT_101d91198);
    *(undefined8 *)((long)param_1 + lVar1 + 0xd0) = 0;
    *(byte *)((long)param_1 + lVar1 + 0xd8) = *(byte *)((long)param_1 + lVar1 + 0xd8) & 0xf8;
    lVar1 = lVar1 + 200;
  } while (lVar1 != 600);
  FUN_1000fa224(param_1 + 0x86);
  thunk_FUN_100149ce0(param_1 + 0x65);
  thunk_FUN_100144930(param_1 + 0x4e);
  lVar1 = 0;
  do {
    if (*(char *)((long)param_1 + lVar1 + 0x25f) < '\0') {
      operator_delete(*(void **)((long)param_1 + lVar1 + 0x248));
    }
    FUN_1001e2180((long)param_1 + lVar1 + 0x1a8);
    lVar1 = lVar1 + -200;
  } while (lVar1 != -600);
  FUN_1004f0a9c(param_1);
  return;
}




void thunk_FUN_1001361ec(void)

{
  FUN_1001361ec();
  return;
}




void FUN_1001362a8(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001361ec();
  operator_delete(pvVar1);
  return;
}




void FUN_1001362bc(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  
  lVar3 = 0;
  do {
    lVar5 = param_1 + lVar3 * 200;
    (**(code **)(*(long *)(lVar5 + 0x18) + 0x18))();
    pbVar6 = (byte *)(lVar5 + 0xd8);
    if ((*pbVar6 >> 2 & 1) != 0) {
      iVar1 = *(int *)(param_1 + lVar3 * 200 + 0xb4);
      if (iVar1 == 0) {
        if (DAT_101d234e8 != (undefined8 *)0x0) {
          puVar7 = &DAT_101d234e8;
          puVar2 = DAT_101d234e8;
          do {
            if (*(uint *)(puVar2 + 4) >= 0x72bd94bf) {
              puVar7 = puVar2;
            }
            puVar2 = (undefined8 *)puVar2[*(uint *)(puVar2 + 4) < 0x72bd94bf];
          } while (puVar2 != (undefined8 *)0x0);
          if ((((undefined8 **)puVar7 != &DAT_101d234e8) && (*(uint *)(puVar7 + 4) < 0x72bd94c0)) &&
             (*(int *)(puVar7 + 5) != 0)) {
            lVar5 = 0;
            uVar4 = 0;
            do {
              (*(code *)((undefined8 *)(puVar7[6] + lVar5))[1])(*(undefined8 *)(puVar7[6] + lVar5));
              uVar4 = uVar4 + 1;
              lVar5 = lVar5 + 0x10;
            } while (uVar4 < *(uint *)(puVar7 + 5));
          }
        }
      }
      else if (iVar1 == 1) {
        if (DAT_101d234e8 != (undefined8 *)0x0) {
          puVar7 = &DAT_101d234e8;
          puVar2 = DAT_101d234e8;
          do {
            if (*(uint *)(puVar2 + 4) >= 0x9d2c9b16) {
              puVar7 = puVar2;
            }
            puVar2 = (undefined8 *)puVar2[*(uint *)(puVar2 + 4) < 0x9d2c9b16];
          } while (puVar2 != (undefined8 *)0x0);
          if ((((undefined8 **)puVar7 != &DAT_101d234e8) && (*(uint *)(puVar7 + 4) < 0x9d2c9b17)) &&
             (*(int *)(puVar7 + 5) != 0)) {
            lVar5 = 0;
            uVar4 = 0;
            do {
              (*(code *)((undefined8 *)(puVar7[6] + lVar5))[1])(*(undefined8 *)(puVar7[6] + lVar5));
              uVar4 = uVar4 + 1;
              lVar5 = lVar5 + 0x10;
            } while (uVar4 < *(uint *)(puVar7 + 5));
          }
        }
      }
      else if ((iVar1 == 2) && (DAT_101d234e8 != (undefined8 *)0x0)) {
        puVar7 = &DAT_101d234e8;
        puVar2 = DAT_101d234e8;
        do {
          if (*(uint *)(puVar2 + 4) >= 0xe51db192) {
            puVar7 = puVar2;
          }
          puVar2 = (undefined8 *)puVar2[*(uint *)(puVar2 + 4) < 0xe51db192];
        } while (puVar2 != (undefined8 *)0x0);
        if ((((undefined8 **)puVar7 != &DAT_101d234e8) && (*(uint *)(puVar7 + 4) < 0xe51db193)) &&
           (*(int *)(puVar7 + 5) != 0)) {
          lVar5 = 0;
          uVar4 = 0;
          do {
            (*(code *)((undefined8 *)(puVar7[6] + lVar5))[1])(*(undefined8 *)(puVar7[6] + lVar5));
            uVar4 = uVar4 + 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar4 < *(uint *)(puVar7 + 5));
        }
      }
      *pbVar6 = *pbVar6 & 0xfb;
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 3);
  return;
}




void FUN_1001364e4(long param_1,int param_2)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  byte *pbVar4;
  
  lVar3 = param_1 + (long)param_2 * 200;
  cVar1 = *(char *)(lVar3 + 0xcf);
  if (cVar1 < '\0') {
    if (*(long *)(param_1 + (long)param_2 * 200 + 0xc0) == 0) {
      return;
    }
  }
  else if (cVar1 == '\0') {
    return;
  }
  plVar2 = (long *)(lVar3 + 0xb8);
  param_1 = param_1 + (long)param_2 * 200;
  pbVar4 = (byte *)(param_1 + 0xd8);
  *(undefined8 *)(param_1 + 0xd0) = 0;
  if ((*pbVar4 & 1) == 0) {
    if (cVar1 < '\0') {
      plVar2 = (long *)*plVar2;
    }
    FUN_1001e22c4(lVar3 + 0x18,plVar2);
    *pbVar4 = *pbVar4 | 1;
    return;
  }
  if (cVar1 < '\0') {
    plVar2 = (long *)*plVar2;
  }
  FUN_1001e242c(lVar3 + 0x18,plVar2);
  return;
}




void FUN_10013657c(long param_1,int param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 ******ppppppuVar1;
  undefined8 *****local_58;
  long local_50;
  char local_41;
  
  FUN_10001549c(&local_58,"");
  FUN_100136638(param_1 + (long)param_2 * 200 + 0xb8,param_3,&local_58);
  if (local_41 < '\0') {
    ppppppuVar1 = (undefined8 ******)local_58;
    if (local_50 == 0) goto LAB_100136618;
  }
  else {
    if (local_41 == '\0') {
      return;
    }
    ppppppuVar1 = &local_58;
  }
  FUN_1001e2efc(param_1 + (long)param_2 * 200 + 0x18,ppppppuVar1,2,param_4,param_5);
  if (-1 < local_41) {
    return;
  }
LAB_100136618:
  operator_delete(local_58);
  return;
}




void FUN_100136638(string *param_1,string *param_2,string *param_3)

{
  string *psVar1;
  string *psVar2;
  int iVar3;
  string *psVar4;
  ulong uVar5;
  ulong uVar6;
  void *local_88 [2];
  char local_71;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  
  iVar3 = FUN_1001314fc(param_2);
  if (iVar3 != 0) {
    std::string::operator=(param_3,param_2);
    FUN_10012e6f0(param_3);
    return;
  }
  std::string::operator=(param_3,param_1);
  uVar6 = *(ulong *)(param_2 + 8);
  psVar2 = *(string **)param_2;
  if (-1 < (char)param_2[0x17]) {
    uVar6 = (ulong)(byte)param_2[0x17];
    psVar2 = param_2;
  }
  if (3 < (long)uVar6) {
    psVar1 = psVar2 + uVar6;
    psVar4 = psVar2;
    while (psVar4 = _memchr(psVar4,0x68,uVar6 - 3), psVar4 != (string *)0x0) {
      if (*(int *)psVar4 == 0x70747468) {
        if ((psVar4 != psVar1) && ((long)psVar4 - (long)psVar2 != -1)) {
          std::string::operator=(param_3,param_2);
          return;
        }
        break;
      }
      psVar4 = psVar4 + 1;
      uVar6 = (long)psVar1 - (long)psVar4;
      if ((long)uVar6 < 4) break;
    }
  }
  uVar6 = *(ulong *)(param_3 + 8);
  psVar2 = *(string **)param_3;
  if (-1 < (char)param_3[0x17]) {
    uVar6 = (ulong)(byte)param_3[0x17];
    psVar2 = param_3;
  }
  do {
    uVar5 = uVar6;
    if (uVar5 == 0) {
      uVar5 = 0;
      goto LAB_100136770;
    }
    uVar6 = uVar5 - 1;
  } while (psVar2[uVar5 - 1] != (string)0x2f);
  uVar5 = uVar5 & 0xffffffff;
LAB_100136770:
  std::string::string((string *)local_88,param_3,0,uVar5,(allocator *)param_3);
  FUN_1000e8b18(local_70,local_88,param_2);
  std::string::string((string *)local_58,(string *)local_70);
  std::string::operator=(param_3,(string *)local_58);
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  if (local_71 < '\0') {
    operator_delete(local_88[0]);
  }
  return;
}




void FUN_1001367f4(long param_1)

{
  string *this;
  size_t sVar1;
  size_t sVar2;
  string sVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  string *psVar9;
  string *psVar10;
  long lVar11;
  string *psVar12;
  string *psVar13;
  size_t local_b0 [2];
  undefined8 uStack_a0;
  byte bStack_99;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80 [2];
  undefined8 local_70;
  char cStack_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  local_b0[1] = 0;
  local_b0[0] = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  FUN_10012e118(0,local_b0,local_80,&uStack_98,0,0);
  lVar11 = 0;
  psVar13 = (string *)(param_1 + 0xb9);
  do {
    lVar8 = param_1 + lVar11 * 200;
    this = (string *)(lVar8 + 0xb8);
    psVar12 = (string *)(local_b0 + lVar11 * 3);
    bVar4 = *(byte *)(lVar8 + 0xcf);
    uVar7 = (ulong)bVar4;
    sVar1 = *(size_t *)(lVar8 + 0xc0);
    if (-1 < (char)bVar4) {
      sVar1 = uVar7;
    }
    bVar5 = (&bStack_99)[lVar11 * 0x18];
    sVar2 = local_b0[lVar11 * 3 + 1];
    if (-1 < (char)bVar5) {
      sVar2 = (ulong)bVar5;
    }
    if (sVar1 == sVar2) {
      psVar10 = *(string **)this;
      if (-1 < (char)bVar4) {
        psVar10 = this;
      }
      psVar9 = *(string **)psVar12;
      if (-1 < (char)bVar5) {
        psVar9 = psVar12;
      }
      if ((char)bVar4 < '\0') {
        if ((sVar1 == 0) || (iVar6 = _memcmp(psVar10,psVar9,sVar1), iVar6 == 0)) goto LAB_10013690c;
        goto LAB_10013691c;
      }
      if (sVar1 != 0) {
        psVar10 = psVar13;
        if ((uint)(byte)*psVar9 == ((uint)*(string **)this & 0xff)) {
          do {
            uVar7 = uVar7 - 1;
            psVar9 = psVar9 + 1;
            if (uVar7 == 0) goto LAB_10013690c;
            sVar3 = *psVar10;
            psVar10 = psVar10 + 1;
          } while (sVar3 == *psVar9);
        }
        goto LAB_10013691c;
      }
LAB_10013690c:
      if ((*(byte *)(DAT_101e3a550 + lVar11 * 200 + 0xd8) >> 1 & 1) == 0) goto LAB_10013691c;
    }
    else {
LAB_10013691c:
      std::string::operator=(this,psVar12);
      FUN_1001364e4(param_1,lVar11);
    }
    lVar11 = lVar11 + 1;
    psVar13 = psVar13 + 200;
    if (lVar11 == 3) {
      lVar11 = 0;
      do {
        if ((&cStack_69)[lVar11] < '\0') {
          operator_delete(*(void **)((long)local_80 + lVar11));
        }
        lVar11 = lVar11 + -0x18;
      } while (lVar11 != -0x48);
      if (*(long *)PTR____stack_chk_guard_101444218 != local_68) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
    }
  } while( true );
}




void FUN_1001369a8(undefined8 param_1,long param_2)

{
  int iVar1;
  
  iVar1 = FUN_1004eef24();
  if ((iVar1 != 0) && (*(int *)(param_2 + 0x28) == 0)) {
    FUN_1001367f4(param_1);
    return;
  }
  return;
}




void FUN_1001369e8(void)

{
  if (DAT_101e3a550 == 0) {
    operator_new(0x488);
    DAT_101e3a550 = FUN_100136120();
  }
  return;
}




void FUN_100136a1c(void)

{
  if (DAT_101e3a550 != (long *)0x0) {
    (**(code **)(*DAT_101e3a550 + 8))();
  }
  DAT_101e3a550 = (long *)0x0;
  return;
}




void FUN_100136a50(void)

{
  if (DAT_101e3a550 != 0) {
    FUN_1001362bc();
    return;
  }
  return;
}




void FUN_100136a64(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_10003330c(param_1,DAT_101e3a550 + 0x180);
    return;
  }
  FUN_10003330c(param_1,&DAT_101d91198);
  return;
}




void FUN_100136a88(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_10003330c(param_1,DAT_101e3a550 + 0xb8);
    return;
  }
  FUN_10003330c(param_1,&DAT_101d91198);
  return;
}




void FUN_100136aac(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_10003330c(param_1,DAT_101e3a550 + 0x248);
    return;
  }
  FUN_10003330c(param_1,&DAT_101d91198);
  return;
}




byte FUN_100136ad0(void)

{
  if (DAT_101e3a550 != 0) {
    return *(byte *)(DAT_101e3a550 + 0x1a0) >> 1 & 1;
  }
  return 0;
}




byte FUN_100136af0(void)

{
  if (DAT_101e3a550 != 0) {
    return *(byte *)(DAT_101e3a550 + 0xd8) >> 1 & 1;
  }
  return 0;
}




void FUN_100136b10(void)

{
  if (DAT_101e3a550 != 0) {
    FUN_1001367f4();
    return;
  }
  return;
}




void FUN_100136b24(void)

{
  if (DAT_101e3a550 != 0) {
    FUN_1001364e4(DAT_101e3a550,1);
    return;
  }
  return;
}




void FUN_100136b3c(void)

{
  if (DAT_101e3a550 != 0) {
    FUN_1001364e4(DAT_101e3a550,0);
    return;
  }
  return;
}




void FUN_100136b54(void)

{
  if (DAT_101e3a550 != 0) {
    FUN_1001364e4(DAT_101e3a550,2);
    return;
  }
  return;
}




void FUN_100136b6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_101e3a550 != 0) {
    FUN_10013657c(DAT_101e3a550,1,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_100136b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_101e3a550 != 0) {
    FUN_10013657c(DAT_101e3a550,0,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_100136bb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  if (DAT_101e3a550 != 0) {
    FUN_10013657c(DAT_101e3a550,2,param_1,param_2,param_3);
    return;
  }
  return;
}




void FUN_100136bd8(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_1001e2998(DAT_101e3a550 + 0xe0,param_1);
    FUN_1001e2998(DAT_101e3a550 + 0x18,param_1);
    FUN_1001e2998(DAT_101e3a550 + 0x1a8,param_1);
    return;
  }
  return;
}




void FUN_100136c34(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_100135968(DAT_101e3a550 + 0x430,param_1);
    FUN_100135968(DAT_101e3a550 + 0x270,param_1);
    FUN_100135968(DAT_101e3a550 + 0x328,param_1);
    return;
  }
  return;
}




void FUN_100136c90(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_100144b94(DAT_101e3a550 + 0x270,param_1);
    return;
  }
  return;
}




void FUN_100136cac(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_100144bec(DAT_101e3a550 + 0x270,param_1);
    return;
  }
  return;
}




void FUN_100136cc8(undefined8 param_1,undefined8 param_2)

{
  if (DAT_101e3a550 != 0) {
    FUN_100144c48(DAT_101e3a550 + 0x270,param_1,param_2);
    return;
  }
  return;
}




void FUN_100136ce8(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_100144c80(DAT_101e3a550 + 0x270,param_1);
    return;
  }
  return;
}




void FUN_100136d04(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_100144cdc(DAT_101e3a550 + 0x270,param_1);
    return;
  }
  return;
}




undefined8 FUN_100136d20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_101e3a550 != 0) {
    uVar1 = FUN_100144cec(DAT_101e3a550 + 0x270,param_1,param_2);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_100136d44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_101e3a550 != 0) {
    uVar1 = FUN_100144e68(DAT_101e3a550 + 0x270,param_1,param_2);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_100136d68(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (DAT_101e3a550 != 0) {
    uVar1 = FUN_100144ff0(DAT_101e3a550 + 0x270,param_1,param_2);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_100136d8c(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_101e3a550 != 0) {
    uVar1 = FUN_100135bd0(DAT_101e3a550 + 0x270,param_1);
    return uVar1;
  }
  return 0;
}




undefined8 FUN_100136dac(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_101e3a550 != 0) {
    uVar1 = FUN_100135bd0(DAT_101e3a550 + 0x328,param_1);
    return uVar1;
  }
  return 0;
}




bool FUN_100136dcc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = DAT_101e3a550;
  if (DAT_101e3a550 != 0) {
    FUN_10014a358(DAT_101e3a550 + 0x328,param_1);
  }
  return lVar1 != 0;
}




void FUN_100136e04(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_10014a334(DAT_101e3a550 + 0x328);
    return;
  }
  FUN_10003330c(param_1,&DAT_101d91198);
  return;
}




void FUN_100136e28(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_10014a340(DAT_101e3a550 + 0x328);
    return;
  }
  FUN_10003330c(param_1,&DAT_101d91198);
  return;
}




void FUN_100136e4c(undefined8 param_1)

{
  if (DAT_101e3a550 != 0) {
    FUN_10014a34c(DAT_101e3a550 + 0x328);
    return;
  }
  FUN_10003330c(param_1,&DAT_101d91198);
  return;
}




undefined8 FUN_100136e70(undefined8 param_1)

{
  undefined8 uVar1;
  
  if (DAT_101e3a550 != 0) {
    uVar1 = FUN_100135bd0(DAT_101e3a550 + 0x430,param_1);
    return uVar1;
  }
  return 0;
}




void FUN_100136e90(undefined8 param_1,char *param_2)

{
  long lVar1;
  size_t sVar2;
  int iVar3;
  size_t sVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  undefined8 local_60;
  long local_58;
  
  local_60 = 0;
  local_58 = 0;
  if (((DAT_101e3a550 == 0) || (iVar3 = FUN_1000fa884(DAT_101e3a550 + 0x430,&local_60), iVar3 == 0))
     || ((uint)local_60 == 0)) {
    puVar5 = &DAT_101d91198;
  }
  else {
    lVar6 = 0;
    uVar7 = 0;
    puVar5 = &DAT_101d91198;
    uVar8 = (uint)local_60;
    do {
      lVar1 = local_58 + lVar6;
      sVar4 = _strlen(param_2);
      sVar2 = *(size_t *)(lVar1 + 0x10);
      if (-1 < (char)*(byte *)(lVar1 + 0x1f)) {
        sVar2 = (ulong)*(byte *)(lVar1 + 0x1f);
      }
      if (sVar4 == sVar2) {
        iVar3 = std::string::compare(lVar1 + 8,0,(char *)0xffffffffffffffff,(ulong)param_2);
        if (iVar3 == 0) {
          puVar5 = (undefined8 *)(local_58 + lVar6 + 0x20);
          break;
        }
        uVar8 = (uint)local_60;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x38;
    } while (uVar7 < uVar8);
  }
  FUN_10003330c(param_1,puVar5);
  FUN_1000fa80c(&local_60,1);
  return;
}




void FUN_100136f9c(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_1001e2180();
  operator_delete(pvVar1);
  return;
}




void FUN_100136fb0(void)

{
  return;
}




void FUN_100136fb4(void)

{
  DAT_101e3a3d8 = 0xffbc9c44;
  DAT_101e3a3dc = 0xff1166f2;
  DAT_101e3a3e0 = 0xffe0e0e0;
  DAT_101e3a3e4 = 0xffa0a0a0;
  DAT_101e3a3e8 = 0xff8c8c8c;
  DAT_101e3a3ec = 0xff322213;
  DAT_101e3a3f0 = 0xff091911;
  DAT_101e3a3f4 = 0xff170c19;
  DAT_101e3a3f8 = 0xff241a14;
  DAT_101e3a3fc = 0xff14171c;
  DAT_101e3a400 = 0xff221911;
  DAT_101e3a404 = 0xff1a1416;
  DAT_101e3a408 = 0xff121414;
  DAT_101e3a40c = 0xff1a1809;
  DAT_101e3a410 = 0xff141414;
  DAT_101e3a414 = 0xff141414;
  DAT_101e3a418 = 0xff2929c0;
  DAT_101e3a41c = 0xff283082;
  DAT_101e3a420 = 0xff5262cc;
  DAT_101e3a424 = 0xff283082;
  DAT_101e3a428 = 0xff5262cc;
  DAT_101e3a42c = 0xff745c42;
  DAT_101e3a430 = 0xff184155;
  DAT_101e3a434 = 0xff92665e;
  DAT_101e3a438 = 0xffbc9c44;
  DAT_101e3a43c = 0xffbbae56;
  DAT_101e3a440 = 0xff8b7b01;
  DAT_101e3a444 = 0xff90b3ef;
  DAT_101e3a448 = 0xff728ebe;
  DAT_101e3a44c = 0xff19459d;
  DAT_101e3a450 = 0xff9d877b;
  DAT_101e3a454 = 0xffcbb1a3;
  DAT_101e3a458 = 0xff3f6fb5;
  DAT_101e3a45c = 0xffc5c5c5;
  DAT_101e3a460 = 0xff4fc1f1;
  DAT_101e3a464 = 0xff606060;
  DAT_101e3a468 = 0xffc5ff7b;
  DAT_101e3a46c = 0xff5271eb;
  DAT_101e3a470 = 0xfffae076;
  DAT_101e3a474 = 0xff3ac8f6;
  DAT_101e3a478 = 0xffaaaaaa;
  DAT_101e3a47c = 0xffe19400;
  DAT_101e3a480 = 0xffe19400;
  DAT_101e3a484 = 0xffe550b2;
  DAT_101e3a488 = 0xfff22ae8;
  DAT_101e3a48c = 0xff005ae1;
  DAT_101e3a490 = 0xff1addfa;
  DAT_101e3a494 = 0xff2424b3;
  DAT_101e3a498 = 0xff2424b3;
  DAT_101e3a49c = 0xff646464;
  DAT_101e3a4a0 = 0xff92665e;
  DAT_101e3a4a4 = 0xff646037;
  DAT_101e3a4ac = 0xff1111a1;
  DAT_101e3a4b4 = 0xffc8c8c8;
  DAT_101e3a4b0 = 0xff321ee1;
  DAT_101e3a4b8 = 0xff321ee1;
  DAT_101e3a4c4 = 0xff6259b3;
  DAT_101e3a4c8 = 0xff506e73;
  DAT_101e3a4a8 = 0xffffffff;
  DAT_101e3a4cc = 0xff9dbf86;
  DAT_101e3a4bc = 0xff7fe801;
  DAT_101e3a4d0 = 0xffa35244;
  DAT_101e3a4c0 = 0xffffffff;
  DAT_101e3a4d4 = 0xffca828e;
  DAT_101e3a4d8 = 0xffa6a6a6;
  DAT_101e3a4dc = 0xffa6a6a6;
  DAT_101e3a4e0 = 0xffffffff;
  DAT_101e3a4e4 = 0xff88ea2f;
  DAT_101e3a4e8 = 0xff8c8c8c;
  DAT_101e3a4ec = 0xffffb400;
  DAT_101e3a4f0 = 0xffff00ff;
  DAT_101e3a4f4 = 0xff00aded;
  DAT_101e3a4f8 = 0xff33d3ff;
  DAT_101e3a4fc = 0xff7fe801;
  DAT_101e3a500 = 0xff282828;
  DAT_101e3a504 = 0xfff0f0f0;
  DAT_101e3a508 = 0xffa4781e;
  DAT_101e3a50c = 0xffa6654b;
  DAT_101e3a510 = 0xff93435b;
  DAT_101e3a514 = 0xff387f9c;
  DAT_101e3a518 = 0xffa3781e;
  DAT_101e3a51c = 0xffffd18a;
  DAT_101e3a520 = 0xffff61f7;
  DAT_101e3a524 = 0xff5de1f2;
  DAT_101e3a528 = 0xff80eaff;
  DAT_101e3a52c = 0xff32e00e;
  DAT_101e3a530 = 0xff5a3c10;
  DAT_101e3a534 = 0xff330b03;
  DAT_101e3a538 = 0xff33031d;
  DAT_101e3a53c = 0xff032433;
  DAT_101e3a540 = 0xff9e8e8d;
  DAT_101e3a544 = 0xff;
  DAT_101e3a546 = 0xffff;
  DAT_101e3a548 = 0xffff;
  DAT_101d234f0 = 0;
  DAT_101d234e8 = 0;
  DAT_101d234d8 = &PTR_FUN_10149dda8;
  DAT_101d234e0 = &DAT_101d234e8;
  ___cxa_atexit(FUN_1004e1854,&DAT_101d234d8,0x100000000);
  return;
}




void FUN_1001376a0(long *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  undefined8 uVar3;
  
  plVar1 = (long *)*param_1;
  if (-1 < *(char *)((long)param_1 + 0x17)) {
    plVar1 = param_1;
  }
  uVar3 = FUN_1004e0150(plVar1,0);
  FUN_1004e3470(param_2,uVar3);
  iVar2 = FUN_1004e3624(param_2);
  if (iVar2 != 0) {
    plVar1 = (long *)*param_1;
    if (-1 < *(char *)((long)param_1 + 0x17)) {
      plVar1 = param_1;
    }
    FUN_1004e3148(param_2,plVar1);
    return;
  }
  return;
}




void FUN_100137710(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  char local_51;
  
  *param_1 = &PTR_FUN_10145aa28;
  FUN_10003330c((string *)(param_1 + 1),&DAT_101d91198);
  FUN_10003330c((string *)(param_1 + 4),&DAT_101d91198);
  plVar2 = (long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x1f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"type");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "type";
    uStack_60 = 4;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "type";
      uStack_60 = 4;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_68,plVar2);
  std::string::operator=((string *)(param_1 + 1),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  plVar2 = (long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x37) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"key");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "key";
    uStack_60 = 3;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "key";
      uStack_60 = 3;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_68,plVar2);
  std::string::operator=((string *)(param_1 + 4),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  return;
}




undefined8 * FUN_1001378e4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aa28;
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void FUN_100138490(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000fb5d8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x38;
  *(undefined ***)(lVar4 + -0x38) = &PTR_FUN_10145aa28;
  FUN_10003330c(lVar4 + -0x30,param_2 + 8);
  FUN_10003330c(lVar4 + -0x18,param_2 + 0x20);
  return;
}




void FUN_10013852c(undefined8 param_1,undefined8 param_2)

{
  undefined **local_78;
  void *local_70 [2];
  char local_59;
  void *local_58 [2];
  char local_41;
  
  local_78 = &PTR_FUN_10145aa28;
  FUN_10003330c(local_70,&DAT_101d91198);
  FUN_10003330c(local_58,&DAT_101d91198);
  FUN_100137710(param_1,&local_78,param_2);
  local_78 = &PTR_FUN_10145aa28;
  if (local_41 < '\0') {
    operator_delete(local_58[0]);
  }
  if (local_59 < '\0') {
    operator_delete(local_70[0]);
  }
  return;
}




void FUN_1001385cc(undefined8 *param_1,long param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_b0_01;
  undefined1 extraout_b0_02;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 extraout_var_13;
  undefined1 extraout_var_14;
  undefined1 extraout_var_15;
  undefined1 extraout_var_16;
  undefined1 extraout_var_17;
  undefined1 extraout_var_18;
  undefined1 extraout_var_19;
  undefined1 extraout_var_20;
  undefined1 extraout_var_21;
  undefined1 extraout_var_22;
  undefined1 extraout_var_23;
  undefined1 extraout_var_24;
  undefined1 extraout_var_25;
  undefined1 extraout_var_26;
  double dVar7;
  char *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  
  *param_1 = &PTR_FUN_10145aa78;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 1;
  dVar7 = (double)*(float *)(param_2 + 0x18);
  lVar2 = FUN_1000e86c0(param_3,"positionX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_120 = 0x100005;
    local_130 = "positionX";
    uStack_128 = 9;
    lVar2 = FUN_1000e87dc(param_3,&local_130);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_120 = 0x100005;
      local_130 = "positionX";
      uStack_128 = 9;
      FUN_1000e87dc(param_3,&local_130);
      FUN_1000fceec();
      dVar7 = (double)CONCAT17(extraout_var_23,
                               CONCAT16(extraout_var_19,
                                        CONCAT15(extraout_var_15,
                                                 CONCAT14(extraout_var_11,
                                                          CONCAT13(extraout_var_07,
                                                                   CONCAT12(extraout_var_03,
                                                                            CONCAT11(extraout_var,
                                                                                     extraout_b0))))
                                                )));
    }
  }
  *(float *)(param_1 + 3) = (float)dVar7;
  dVar7 = (double)*(float *)(param_2 + 0x1c);
  lVar2 = FUN_1000e86c0(param_3,"positionY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_120 = 0x100005;
    local_130 = "positionY";
    uStack_128 = 9;
    lVar2 = FUN_1000e87dc(param_3,&local_130);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_120 = 0x100005;
      local_130 = "positionY";
      uStack_128 = 9;
      FUN_1000e87dc(param_3,&local_130);
      FUN_1000fceec();
      dVar7 = (double)CONCAT17(extraout_var_24,
                               CONCAT16(extraout_var_20,
                                        CONCAT15(extraout_var_16,
                                                 CONCAT14(extraout_var_12,
                                                          CONCAT13(extraout_var_08,
                                                                   CONCAT12(extraout_var_04,
                                                                            CONCAT11(extraout_var_00
                                                                                     ,extraout_b0_00
                                                                                    )))))));
    }
  }
  *(float *)((long)param_1 + 0x1c) = (float)dVar7;
  dVar7 = (double)*(float *)(param_2 + 0x20);
  lVar2 = FUN_1000e86c0(param_3,"anchorX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_120 = 0x100005;
    local_130 = "anchorX";
    uStack_128 = 7;
    lVar2 = FUN_1000e87dc(param_3,&local_130);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_120 = 0x100005;
      local_130 = "anchorX";
      uStack_128 = 7;
      FUN_1000e87dc(param_3,&local_130);
      FUN_1000fceec();
      dVar7 = (double)CONCAT17(extraout_var_25,
                               CONCAT16(extraout_var_21,
                                        CONCAT15(extraout_var_17,
                                                 CONCAT14(extraout_var_13,
                                                          CONCAT13(extraout_var_09,
                                                                   CONCAT12(extraout_var_05,
                                                                            CONCAT11(extraout_var_01
                                                                                     ,extraout_b0_01
                                                                                    )))))));
    }
  }
  *(float *)(param_1 + 4) = (float)dVar7;
  dVar7 = (double)*(float *)(param_2 + 0x24);
  lVar2 = FUN_1000e86c0(param_3,"anchorY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_120 = 0x100005;
    local_130 = "anchorY";
    uStack_128 = 7;
    lVar2 = FUN_1000e87dc(param_3,&local_130);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_120 = 0x100005;
      local_130 = "anchorY";
      uStack_128 = 7;
      FUN_1000e87dc(param_3,&local_130);
      FUN_1000fceec();
      dVar7 = (double)CONCAT17(extraout_var_26,
                               CONCAT16(extraout_var_22,
                                        CONCAT15(extraout_var_18,
                                                 CONCAT14(extraout_var_14,
                                                          CONCAT13(extraout_var_10,
                                                                   CONCAT12(extraout_var_06,
                                                                            CONCAT11(extraout_var_02
                                                                                     ,extraout_b0_02
                                                                                    )))))));
    }
  }
  *(float *)((long)param_1 + 0x24) = (float)dVar7;
  uVar6 = *(undefined4 *)(param_2 + 0x28);
  lVar2 = FUN_1000e86c0(param_3,"separation");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_120 = 0x100005;
    local_130 = "separation";
    uStack_128 = 10;
    lVar2 = FUN_1000e87dc(param_3,&local_130);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_120 = 0x100005;
      local_130 = "separation";
      uStack_128 = 10;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_130);
      uVar6 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 5) = uVar6;
  bVar1 = *(char *)(param_2 + 0x2c) != '\0';
  lVar2 = FUN_1000e86c0(param_3,"horizontal");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_120 = 0x100005;
    local_130 = "horizontal";
    uStack_128 = 10;
    lVar2 = FUN_1000e87dc(param_3,&local_130);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_120 = 0x100005;
      local_130 = "horizontal";
      uStack_128 = 10;
      lVar2 = FUN_1000e87dc(param_3,&local_130);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
    }
  }
  *(bool *)((long)param_1 + 0x2c) = bVar1;
  lVar2 = FUN_1000e86c0(param_3,"buttons");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_120 = 0x100005;
    local_130 = "buttons";
    uStack_128 = 7;
    lVar2 = FUN_1000e87dc(param_3,&local_130);
    if (*(int *)(lVar2 + 0x10) == 4) {
      local_120 = 0x100005;
      local_130 = "buttons";
      uStack_128 = 7;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_130);
      if ((int)plVar4[1] != 0) {
        lVar2 = 0;
        uVar5 = 0;
        do {
          FUN_100138ad4(&local_130,*plVar4 + lVar2);
          FUN_1001389dc(param_1 + 1,&local_130);
          FUN_100141934(&local_130);
          uVar5 = uVar5 + 1;
          lVar2 = lVar2 + 0x18;
        } while (uVar5 < *(uint *)(plVar4 + 1));
      }
    }
  }
  return;
}




void FUN_1001389dc(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000fb1b8(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar5 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0xd0;
  *(undefined ***)(lVar5 + -0xd0) = &PTR_thunk_FUN_100141934_10145aa50;
  FUN_1000fb538(lVar5 + -200,param_2 + 8);
  FUN_10003330c(lVar5 + -0xb8,param_2 + 0x18);
  FUN_10003330c(lVar5 + -0xa0,param_2 + 0x30);
  FUN_10003330c(lVar5 + -0x88,param_2 + 0x48);
  FUN_10003330c(lVar5 + -0x70,param_2 + 0x60);
  FUN_10003330c(lVar5 + -0x58,param_2 + 0x78);
  FUN_10003330c(lVar5 + -0x40,param_2 + 0x90);
  FUN_10003330c(lVar5 + -0x28,param_2 + 0xa8);
  uVar4 = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(lVar5 + -9) = *(undefined8 *)(param_2 + 199);
  *(undefined8 *)(lVar5 + -0x10) = uVar4;
  return;
}




void FUN_100138ad4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_f0 [208];
  
  FUN_10014189c(auStack_f0);
  FUN_100137930(param_1,auStack_f0,param_2);
  FUN_100141934(auStack_f0);
  return;
}




undefined8 * FUN_100138b1c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aa78;
  FUN_100141a54(param_1 + 1,1);
  return param_1;
}




void FUN_100138b50(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  FUN_100141acc(param_1);
  plVar2 = (long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x1f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "title";
    uStack_50 = 5;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "title";
      uStack_50 = 5;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_58,plVar2);
  std::string::operator=((string *)(param_1 + 8),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar2 = (long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x37) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"imageUrl");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "imageUrl";
    uStack_50 = 8;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "imageUrl";
      uStack_50 = 8;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_58,plVar2);
  std::string::operator=((string *)(param_1 + 0x20),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar2 = (long *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x4f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"body");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "body";
    uStack_50 = 4;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "body";
      uStack_50 = 4;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_58,plVar2);
  std::string::operator=((string *)(param_1 + 0x38),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar2 = (long *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x67) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"accept");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "accept";
    uStack_50 = 6;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "accept";
      uStack_50 = 6;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_58,plVar2);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar2 = (long *)(param_2 + 0x68);
  if (*(char *)(param_2 + 0x7f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"onAccept");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "onAccept";
    uStack_50 = 8;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "onAccept";
      uStack_50 = 8;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_58,plVar2);
  std::string::operator=((string *)(param_1 + 0x68),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar2 = (long *)(param_2 + 0x80);
  if (*(char *)(param_2 + 0x97) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"reject");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "reject";
    uStack_50 = 6;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "reject";
      uStack_50 = 6;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_58,plVar2);
  std::string::operator=((string *)(param_1 + 0x80),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar2 = (long *)(param_2 + 0x98);
  if (*(char *)(param_2 + 0xaf) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"onReject");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "onReject";
    uStack_50 = 8;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "onReject";
      uStack_50 = 8;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_58,plVar2);
  std::string::operator=((string *)(param_1 + 0x98),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar2 = (long *)(param_2 + 0xb0);
  if (*(char *)(param_2 + 199) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"alt");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "alt";
    uStack_50 = 3;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "alt";
      uStack_50 = 3;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_58,plVar2);
  std::string::operator=((string *)(param_1 + 0xb0),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar2 = (long *)(param_2 + 200);
  if (*(char *)(param_2 + 0xdf) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"onAlt");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "onAlt";
    uStack_50 = 5;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "onAlt";
      uStack_50 = 5;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_58,plVar2);
  std::string::operator=((string *)(param_1 + 200),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  return;
}




void FUN_1001391ac(long param_1,long param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  int *piVar5;
  uint uVar6;
  long *plVar7;
  undefined4 uVar8;
  uint uVar9;
  double dVar10;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  char local_51;
  
  FUN_100141c34(param_1);
  plVar7 = (long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x1f) < '\0') {
    plVar7 = (long *)*plVar7;
  }
  lVar2 = FUN_1000e86c0(param_3,"id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "id";
    uStack_60 = 2;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "id";
      uStack_60 = 2;
      plVar7 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar7 + 0x12) >> 6 & 1) == 0) {
        plVar7 = (long *)*plVar7;
      }
    }
  }
  FUN_10001549c(&local_68,plVar7);
  std::string::operator=((string *)(param_1 + 8),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  plVar7 = (long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x37) < '\0') {
    plVar7 = (long *)*plVar7;
  }
  lVar2 = FUN_1000e86c0(param_3,"font");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "font";
    uStack_60 = 4;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "font";
      uStack_60 = 4;
      plVar7 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar7 + 0x12) >> 6 & 1) == 0) {
        plVar7 = (long *)*plVar7;
      }
    }
  }
  FUN_10001549c(&local_68,plVar7);
  std::string::operator=((string *)(param_1 + 0x20),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  plVar7 = (long *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x4f) < '\0') {
    plVar7 = (long *)*plVar7;
  }
  lVar2 = FUN_1000e86c0(param_3,"textureCurrentProgress");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "textureCurrentProgress";
    uStack_60 = 0x16;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "textureCurrentProgress";
      uStack_60 = 0x16;
      plVar7 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar7 + 0x12) >> 6 & 1) == 0) {
        plVar7 = (long *)*plVar7;
      }
    }
  }
  FUN_10001549c(&local_68,plVar7);
  std::string::operator=((string *)(param_1 + 0x38),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  plVar7 = (long *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x67) < '\0') {
    plVar7 = (long *)*plVar7;
  }
  lVar2 = FUN_1000e86c0(param_3,"textureNewProgress");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "textureNewProgress";
    uStack_60 = 0x12;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "textureNewProgress";
      uStack_60 = 0x12;
      plVar7 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar7 + 0x12) >> 6 & 1) == 0) {
        plVar7 = (long *)*plVar7;
      }
    }
  }
  FUN_10001549c(&local_68,plVar7);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  uVar8 = *(undefined4 *)(param_2 + 0x70);
  lVar2 = FUN_1000e86c0(param_3,"x");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "x";
    uStack_60 = 1;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "x";
      uStack_60 = 1;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar8 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x70) = uVar8;
  uVar8 = *(undefined4 *)(param_2 + 0x74);
  lVar2 = FUN_1000e86c0(param_3,"y");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "y";
    uStack_60 = 1;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "y";
      uStack_60 = 1;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar8 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x74) = uVar8;
  uVar8 = *(undefined4 *)(param_2 + 0x78);
  lVar2 = FUN_1000e86c0(param_3,"width");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "width";
    uStack_60 = 5;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "width";
      uStack_60 = 5;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar8 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x78) = uVar8;
  uVar8 = *(undefined4 *)(param_2 + 0x7c);
  lVar2 = FUN_1000e86c0(param_3,"height");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "height";
    uStack_60 = 6;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "height";
      uStack_60 = 6;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar8 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x7c) = uVar8;
  dVar10 = (double)*(float *)(param_2 + 0x80);
  lVar2 = FUN_1000e86c0(param_3,"fillValue");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "fillValue";
    uStack_60 = 9;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "fillValue";
      uStack_60 = 9;
      FUN_1000e87dc(param_3,&local_68);
      dVar10 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x80) = (float)dVar10;
  dVar10 = (double)*(float *)(param_2 + 0x84);
  lVar2 = FUN_1000e86c0(param_3,"minFillValue");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "minFillValue";
    uStack_60 = 0xc;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "minFillValue";
      uStack_60 = 0xc;
      FUN_1000e87dc(param_3,&local_68);
      dVar10 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x84) = (float)dVar10;
  dVar10 = (double)*(float *)(param_2 + 0x88);
  lVar2 = FUN_1000e86c0(param_3,"maxFillValue");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "maxFillValue";
    uStack_60 = 0xc;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "maxFillValue";
      uStack_60 = 0xc;
      FUN_1000e87dc(param_3,&local_68);
      dVar10 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x88) = (float)dVar10;
  dVar10 = (double)*(float *)(param_2 + 0x8c);
  lVar2 = FUN_1000e86c0(param_3,"newProgressHeightScale");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "newProgressHeightScale";
    uStack_60 = 0x16;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "newProgressHeightScale";
      uStack_60 = 0x16;
      FUN_1000e87dc(param_3,&local_68);
      dVar10 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x8c) = (float)dVar10;
  bVar1 = *(char *)(param_2 + 0x90) != '\0';
  lVar2 = FUN_1000e86c0(param_3,"bDrawLabels");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "bDrawLabels";
    uStack_60 = 0xb;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "bDrawLabels";
      uStack_60 = 0xb;
      lVar2 = FUN_1000e87dc(param_3,&local_68);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x90) = bVar1;
  bVar1 = *(char *)(param_2 + 0x91) != '\0';
  lVar2 = FUN_1000e86c0(param_3,"bIsRequired");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "bIsRequired";
    uStack_60 = 0xb;
    lVar2 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "bIsRequired";
      uStack_60 = 0xb;
      lVar2 = FUN_1000e87dc(param_3,&local_68);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x91) = bVar1;
  uVar9 = (*(uint *)(param_2 + 0x68) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x68) & 0xff00ff) << 8;
  uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
  lVar2 = FUN_1000e86c0(param_3,"tintCurrentProgress");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "tintCurrentProgress";
    uStack_60 = 0x13;
    puVar4 = (undefined8 *)FUN_1000e87dc(param_3,&local_68);
    if ((*(int *)(puVar4 + 2) == 4) && (*(int *)(puVar4 + 1) == 3)) {
      piVar5 = (int *)*puVar4;
      lVar2 = 0x10;
      do {
        if ((*(byte *)((long)piVar5 + lVar2 + 1) >> 3 & 1) == 0) goto LAB_1001399e4;
        lVar2 = lVar2 + 0x18;
      } while (lVar2 != 0x58);
      uVar9 = *piVar5 << 0x18 | piVar5[6] << 0x10 | piVar5[0xc] << 8 | 0xff;
    }
  }
LAB_1001399e4:
  uVar6 = (*(uint *)(param_2 + 0x6c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x6c) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  lVar2 = FUN_1000e86c0(param_3,"tintNewProgress");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_58 = 0x100005;
    local_68 = "tintNewProgress";
    uStack_60 = 0xf;
    puVar4 = (undefined8 *)FUN_1000e87dc(param_3,&local_68);
    if ((*(int *)(puVar4 + 2) == 4) && (*(int *)(puVar4 + 1) == 3)) {
      piVar5 = (int *)*puVar4;
      lVar2 = 0x10;
      do {
        if ((*(byte *)((long)piVar5 + lVar2 + 1) >> 3 & 1) == 0) goto LAB_100139a84;
        lVar2 = lVar2 + 0x18;
      } while (lVar2 != 0x58);
      uVar6 = *piVar5 << 0x18 | piVar5[6] << 0x10 | piVar5[0xc] << 8 | 0xff;
    }
  }
LAB_100139a84:
  uVar9 = (uVar9 & 0xff00ff00) >> 8 | (uVar9 & 0xff00ff) << 8;
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x68) = uVar9 >> 0x10 | uVar9 << 0x10;
  *(uint *)(param_1 + 0x6c) = uVar6 >> 0x10 | uVar6 << 0x10;
  return;
}




undefined8 * FUN_100139aac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ab40;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void FUN_100139b18(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  long *plVar8;
  char *local_68;
  ulong local_60;
  undefined4 local_58;
  byte local_51;
  
  *param_1 = &PTR_FUN_10145ab68;
  FUN_10003330c((string *)(param_1 + 1),&DAT_101d91198);
  param_1[4] = 0xffffffffffffffff;
  param_1[5] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 6) = 1;
  plVar8 = (long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x1f) < '\0') {
    plVar8 = (long *)*plVar8;
  }
  lVar3 = FUN_1000e86c0(param_3,"id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_58 = 0x100005;
    local_68 = "id";
    local_60 = 2;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "id";
      local_60 = 2;
      plVar8 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_10001549c(&local_68,plVar8);
  std::string::operator=((string *)(param_1 + 1),(string *)&local_68);
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  uVar7 = *(undefined4 *)(param_2 + 0x20);
  lVar3 = FUN_1000e86c0(param_3,"minWins");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_58 = 0x100005;
    local_68 = "minWins";
    local_60 = 7;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "minWins";
      local_60 = 7;
      puVar4 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 4) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0x24);
  lVar3 = FUN_1000e86c0(param_3,"maxWins");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_58 = 0x100005;
    local_68 = "maxWins";
    local_60 = 7;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "maxWins";
      local_60 = 7;
      puVar4 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)((long)param_1 + 0x24) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0x28);
  lVar3 = FUN_1000e86c0(param_3,"minLosses");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_58 = 0x100005;
    local_68 = "minLosses";
    local_60 = 9;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "minLosses";
      local_60 = 9;
      puVar4 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 5) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0x2c);
  lVar3 = FUN_1000e86c0(param_3,"maxLosses");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_58 = 0x100005;
    local_68 = "maxLosses";
    local_60 = 9;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "maxLosses";
      local_60 = 9;
      puVar4 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)((long)param_1 + 0x2c) = uVar7;
  lVar3 = FUN_1000e86c0(param_3,"filterMode");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_100139e34:
    pcVar5 = "filter_require_challenge";
  }
  else {
    local_58 = 0x100005;
    local_68 = "filterMode";
    local_60 = 10;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_100139e34;
    local_58 = 0x100005;
    local_68 = "filterMode";
    local_60 = 10;
    pcVar5 = (char *)FUN_1000e87dc(param_3,&local_68);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_10001549c(&local_68,pcVar5);
  uVar6 = (ulong)local_51;
  uVar1 = local_60;
  if (-1 < (char)local_51) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0xc) {
    iVar2 = std::string::compare((ulong)&local_68,0,(char *)0xffffffffffffffff,0x1013dce9d);
    if (iVar2 == 0) {
      uVar7 = 0;
      goto LAB_100139f00;
    }
    uVar6 = (ulong)local_51;
  }
  uVar1 = local_60;
  if (-1 < (char)local_51) {
    uVar1 = uVar6;
  }
  if ((uVar1 == 0x1b) &&
     (iVar2 = std::string::compare((ulong)&local_68,0,(char *)0xffffffffffffffff,0x1013dceaa),
     iVar2 == 0)) {
    uVar7 = 2;
  }
  else {
    uVar7 = 1;
  }
LAB_100139f00:
  *(undefined4 *)(param_1 + 6) = uVar7;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  return;
}




undefined8 * FUN_100139f30(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ab68;
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void FUN_100139f6c(undefined8 *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  ulong uVar6;
  undefined4 uVar7;
  char *local_68;
  ulong local_60;
  undefined4 local_58;
  byte local_51;
  
  *param_1 = &PTR_FUN_10145ab90;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar7 = *(undefined4 *)(param_2 + 8);
  lVar3 = FUN_1000e86c0(param_3,"major");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_58 = 0x100005;
    local_68 = "major";
    local_60 = 5;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "major";
      local_60 = 5;
      puVar4 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 1) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0xc);
  lVar3 = FUN_1000e86c0(param_3,"minor");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_58 = 0x100005;
    local_68 = "minor";
    local_60 = 5;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "minor";
      local_60 = 5;
      puVar4 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)((long)param_1 + 0xc) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0x10);
  lVar3 = FUN_1000e86c0(param_3,"micro");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_58 = 0x100005;
    local_68 = "micro";
    local_60 = 5;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "micro";
      local_60 = 5;
      puVar4 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar4;
    }
  }
  *(undefined4 *)(param_1 + 2) = uVar7;
  lVar3 = FUN_1000e86c0(param_3,"filterMode");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013a150:
    pcVar5 = "filter_never";
  }
  else {
    local_58 = 0x100005;
    local_68 = "filterMode";
    local_60 = 10;
    lVar3 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013a150;
    local_58 = 0x100005;
    local_68 = "filterMode";
    local_60 = 10;
    pcVar5 = (char *)FUN_1000e87dc(param_3,&local_68);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_10001549c(&local_68,pcVar5);
  uVar6 = (ulong)local_51;
  uVar1 = local_60;
  if (-1 < (char)local_51) {
    uVar1 = uVar6;
  }
  if (uVar1 == 0x13) {
    iVar2 = std::string::compare((ulong)&local_68,0,(char *)0xffffffffffffffff,0x1013dced8);
    if (iVar2 == 0) {
      uVar7 = 2;
      goto LAB_10013a21c;
    }
    uVar6 = (ulong)local_51;
  }
  uVar1 = local_60;
  if (-1 < (char)local_51) {
    uVar1 = uVar6;
  }
  if ((uVar1 == 0x17) &&
     (iVar2 = std::string::compare((ulong)&local_68,0,(char *)0xffffffffffffffff,0x1013dceec),
     iVar2 == 0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
LAB_10013a21c:
  *(undefined4 *)((long)param_1 + 0x14) = uVar7;
  if ((char)local_51 < '\0') {
    operator_delete(local_68);
  }
  return;
}




void FUN_10013a24c(void)

{
  return;
}




void FUN_10013a250(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  int *piVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  FUN_100141cc8(param_1);
  plVar5 = (long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x37) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar1 = FUN_1000e86c0(param_3,"type");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "type";
    uStack_50 = 4;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "type";
      uStack_50 = 4;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_58,plVar5);
  std::string::operator=((string *)(param_1 + 0x20),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x70);
  lVar1 = FUN_1000e86c0(param_3,"expires");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "expires";
    uStack_50 = 7;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x11) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "expires";
      uStack_50 = 7;
      puVar2 = (undefined8 *)FUN_1000e87dc(param_3,&local_58);
      uVar6 = *puVar2;
    }
  }
  *(undefined8 *)(param_1 + 0x70) = uVar6;
  plVar5 = (long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x1f) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar1 = FUN_1000e86c0(param_3,"string");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "string";
    uStack_50 = 6;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "string";
      uStack_50 = 6;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_58,plVar5);
  std::string::operator=((string *)(param_1 + 8),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar5 = (long *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x4f) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar1 = FUN_1000e86c0(param_3,"imageId");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "imageId";
    uStack_50 = 7;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "imageId";
      uStack_50 = 7;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_58,plVar5);
  std::string::operator=((string *)(param_1 + 0x38),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar5 = (long *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x67) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar1 = FUN_1000e86c0(param_3,"expireTimeLogic");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "expireTimeLogic";
    uStack_50 = 0xf;
    lVar1 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "expireTimeLogic";
      uStack_50 = 0xf;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_58,plVar5);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  uVar4 = (*(uint *)(param_2 + 0x68) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x68) & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  lVar1 = FUN_1000e86c0(param_3,"tint");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_48 = 0x100005;
    local_58 = "tint";
    uStack_50 = 4;
    puVar2 = (undefined8 *)FUN_1000e87dc(param_3,&local_58);
    if ((*(int *)(puVar2 + 2) == 4) && (*(int *)(puVar2 + 1) == 3)) {
      piVar3 = (int *)*puVar2;
      lVar1 = 0x10;
      do {
        if ((*(byte *)((long)piVar3 + lVar1 + 1) >> 3 & 1) == 0) goto LAB_10013a644;
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != 0x58);
      uVar4 = *piVar3 << 0x18 | piVar3[6] << 0x10 | piVar3[0xc] << 8 | 0xff;
    }
  }
LAB_10013a644:
  uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x68) = uVar4 >> 0x10 | uVar4 << 0x10;
  return;
}




undefined8 * FUN_10013a664(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aaa0;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void FUN_10013a6d0(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  float *pfVar2;
  double dVar3;
  undefined **local_c8;
  void *local_c0;
  undefined4 local_b8;
  char local_a9;
  void *local_a8 [2];
  char local_91;
  void *local_90 [2];
  char local_79;
  void *local_78 [2];
  char local_61;
  undefined8 local_60;
  undefined8 uStack_58;
  
  *param_1 = &PTR_FUN_10145aac8;
  FUN_100141cc8(param_1 + 1);
  pfVar2 = (float *)(param_1 + 0x10);
  pfVar2[0] = 0.0;
  pfVar2[1] = 0.0;
  param_1[0x11] = 0;
  dVar3 = (double)*(float *)(param_2 + 0x80);
  lVar1 = FUN_1000e86c0(param_3,"textPositionX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_b8 = 0x100005;
    local_c8 = (undefined **)0x1013dcf29;
    local_c0 = (void *)0xd;
    lVar1 = FUN_1000e87dc(param_3,&local_c8);
    if ((*(byte *)(lVar1 + 0x11) >> 1 & 1) != 0) {
      local_b8 = 0x100005;
      local_c8 = (undefined **)0x1013dcf29;
      local_c0 = (void *)0xd;
      FUN_1000e87dc(param_3,&local_c8);
      dVar3 = (double)FUN_1000fceec();
    }
  }
  *pfVar2 = (float)dVar3;
  dVar3 = (double)*(float *)(param_2 + 0x84);
  lVar1 = FUN_1000e86c0(param_3,"textPositionY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_b8 = 0x100005;
    local_c8 = (undefined **)0x1013dcf37;
    local_c0 = (void *)0xd;
    lVar1 = FUN_1000e87dc(param_3,&local_c8);
    if ((*(byte *)(lVar1 + 0x11) >> 1 & 1) != 0) {
      local_b8 = 0x100005;
      local_c8 = (undefined **)0x1013dcf37;
      local_c0 = (void *)0xd;
      FUN_1000e87dc(param_3,&local_c8);
      dVar3 = (double)FUN_1000fceec();
    }
  }
  *(float *)((long)param_1 + 0x84) = (float)dVar3;
  dVar3 = (double)*(float *)(param_2 + 0x88);
  lVar1 = FUN_1000e86c0(param_3,"textWidth");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_b8 = 0x100005;
    local_c8 = (undefined **)0x1013dcf45;
    local_c0 = (void *)0x9;
    lVar1 = FUN_1000e87dc(param_3,&local_c8);
    if ((*(byte *)(lVar1 + 0x11) >> 1 & 1) != 0) {
      local_b8 = 0x100005;
      local_c8 = (undefined **)0x1013dcf45;
      local_c0 = (void *)0x9;
      FUN_1000e87dc(param_3,&local_c8);
      dVar3 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x11) = (float)dVar3;
  dVar3 = (double)*(float *)(param_2 + 0x8c);
  lVar1 = FUN_1000e86c0(param_3,"positionY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_b8 = 0x100005;
    local_c8 = (undefined **)0x1013dcd2e;
    local_c0 = (void *)0x9;
    lVar1 = FUN_1000e87dc(param_3,&local_c8);
    if ((*(byte *)(lVar1 + 0x11) >> 1 & 1) != 0) {
      local_b8 = 0x100005;
      local_c8 = (undefined **)0x1013dcd2e;
      local_c0 = (void *)0x9;
      FUN_1000e87dc(param_3,&local_c8);
      dVar3 = (double)FUN_1000fceec();
    }
  }
  *(float *)((long)param_1 + 0x8c) = (float)dVar3;
  lVar1 = FUN_1000e86c0(param_3,"annotation");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_b8 = 0x100005;
    local_c8 = (undefined **)0x1013dcf4f;
    local_c0 = (void *)0xa;
    FUN_1000e87dc(param_3,&local_c8);
    FUN_10013a9fc(&local_c8);
    std::string::operator=((string *)(param_1 + 2),(string *)&local_c0);
    std::string::operator=((string *)(param_1 + 5),(string *)local_a8);
    std::string::operator=((string *)(param_1 + 8),(string *)local_90);
    std::string::operator=((string *)(param_1 + 0xb),(string *)local_78);
    param_1[0xf] = uStack_58;
    param_1[0xe] = local_60;
    local_c8 = &PTR_FUN_10145aaa0;
    if (local_61 < '\0') {
      operator_delete(local_78[0]);
    }
    if (local_79 < '\0') {
      operator_delete(local_90[0]);
    }
    if (local_91 < '\0') {
      operator_delete(local_a8[0]);
    }
    if (local_a9 < '\0') {
      operator_delete(local_c0);
    }
  }
  return;
}




void FUN_10013a9fc(undefined8 param_1,undefined8 param_2)

{
  undefined **local_98;
  void *local_90;
  char local_79;
  void *local_78;
  char local_61;
  void *local_60;
  char local_49;
  void *local_48;
  char local_31;
  
  FUN_100141cc8(&local_98);
  FUN_10013a250(param_1,&local_98,param_2);
  local_98 = &PTR_FUN_10145aaa0;
  if (local_31 < '\0') {
    operator_delete(local_48);
  }
  if (local_49 < '\0') {
    operator_delete(local_60);
  }
  if (local_61 < '\0') {
    operator_delete(local_78);
  }
  if (local_79 < '\0') {
    operator_delete(local_90);
  }
  return;
}




undefined8 * FUN_10013aa88(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aac8;
  param_1[1] = &PTR_FUN_10145aaa0;
  if (*(char *)((long)param_1 + 0x6f) < '\0') {
    operator_delete((void *)param_1[0xb]);
  }
  if (*(char *)((long)param_1 + 0x57) < '\0') {
    operator_delete((void *)param_1[8]);
  }
  if (*(char *)((long)param_1 + 0x3f) < '\0') {
    operator_delete((void *)param_1[5]);
  }
  if (*(char *)((long)param_1 + 0x27) < '\0') {
    operator_delete((void *)param_1[2]);
  }
  return param_1;
}




void FUN_10013aafc(long param_1,long param_2,long *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  long *plVar5;
  uint uVar6;
  undefined4 uVar7;
  double dVar8;
  char *local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  char local_51;
  
  FUN_100141d3c(param_1);
  dVar8 = (double)*(float *)(param_2 + 0x74);
  lVar1 = FUN_1000e86c0(param_3,"positionX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "positionX";
    uStack_60 = 9;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "positionX";
      uStack_60 = 9;
      FUN_1000e87dc(param_3,&local_68);
      dVar8 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x74) = (float)dVar8;
  dVar8 = (double)*(float *)(param_2 + 0x78);
  lVar1 = FUN_1000e86c0(param_3,"positionY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "positionY";
    uStack_60 = 9;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "positionY";
      uStack_60 = 9;
      FUN_1000e87dc(param_3,&local_68);
      dVar8 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x78) = (float)dVar8;
  dVar8 = (double)*(float *)(param_2 + 0x7c);
  lVar1 = FUN_1000e86c0(param_3,"anchorX");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "anchorX";
    uStack_60 = 7;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "anchorX";
      uStack_60 = 7;
      FUN_1000e87dc(param_3,&local_68);
      dVar8 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x7c) = (float)dVar8;
  dVar8 = (double)*(float *)(param_2 + 0x80);
  lVar1 = FUN_1000e86c0(param_3,"anchorY");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "anchorY";
    uStack_60 = 7;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x11) >> 1 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "anchorY";
      uStack_60 = 7;
      FUN_1000e87dc(param_3,&local_68);
      dVar8 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x80) = (float)dVar8;
  plVar5 = (long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x1f) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar1 = FUN_1000e86c0(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "title";
    uStack_60 = 5;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "title";
      uStack_60 = 5;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_68,plVar5);
  std::string::operator=((string *)(param_1 + 8),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  plVar5 = (long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x37) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar1 = FUN_1000e86c0(param_3,"subtitle");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "subtitle";
    uStack_60 = 8;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "subtitle";
      uStack_60 = 8;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_68,plVar5);
  std::string::operator=((string *)(param_1 + 0x20),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  uVar6 = (*(uint *)(param_2 + 0x68) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x68) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  lVar1 = FUN_1000e86c0(param_3,"titleColor");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "titleColor";
    uStack_60 = 10;
    puVar2 = (undefined8 *)FUN_1000e87dc(param_3,&local_68);
    if ((*(int *)(puVar2 + 2) == 4) && (*(int *)(puVar2 + 1) == 3)) {
      piVar4 = (int *)*puVar2;
      lVar1 = 0x10;
      do {
        if ((*(byte *)((long)piVar4 + lVar1 + 1) >> 3 & 1) == 0) goto LAB_10013af1c;
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != 0x58);
      uVar6 = *piVar4 << 0x18 | piVar4[6] << 0x10 | piVar4[0xc] << 8 | 0xff;
    }
  }
LAB_10013af1c:
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x68) = uVar6 >> 0x10 | uVar6 << 0x10;
  plVar5 = (long *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x4f) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar1 = FUN_1000e86c0(param_3,"heading");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "heading";
    uStack_60 = 7;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "heading";
      uStack_60 = 7;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_68,plVar5);
  std::string::operator=((string *)(param_1 + 0x38),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  uVar6 = (*(uint *)(param_2 + 0x6c) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x6c) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  lVar1 = FUN_1000e86c0(param_3,"headingColor");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "headingColor";
    uStack_60 = 0xc;
    puVar2 = (undefined8 *)FUN_1000e87dc(param_3,&local_68);
    if ((*(int *)(puVar2 + 2) == 4) && (*(int *)(puVar2 + 1) == 3)) {
      piVar4 = (int *)*puVar2;
      lVar1 = 0x10;
      do {
        if ((*(byte *)((long)piVar4 + lVar1 + 1) >> 3 & 1) == 0) goto LAB_10013b070;
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != 0x58);
      uVar6 = *piVar4 << 0x18 | piVar4[6] << 0x10 | piVar4[0xc] << 8 | 0xff;
    }
  }
LAB_10013b070:
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x6c) = uVar6 >> 0x10 | uVar6 << 0x10;
  plVar5 = (long *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x67) < '\0') {
    plVar5 = (long *)*plVar5;
  }
  lVar1 = FUN_1000e86c0(param_3,"caption");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "caption";
    uStack_60 = 7;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "caption";
      uStack_60 = 7;
      plVar5 = (long *)FUN_1000e87dc(param_3,&local_68);
      if ((*(byte *)((long)plVar5 + 0x12) >> 6 & 1) == 0) {
        plVar5 = (long *)*plVar5;
      }
    }
  }
  FUN_10001549c(&local_68,plVar5);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&local_68);
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  uVar6 = (*(uint *)(param_2 + 0x70) & 0xff00ff00) >> 8 |
          (*(uint *)(param_2 + 0x70) & 0xff00ff) << 8;
  uVar6 = uVar6 >> 0x10 | uVar6 << 0x10;
  lVar1 = FUN_1000e86c0(param_3,"captionColor");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "captionColor";
    uStack_60 = 0xc;
    puVar2 = (undefined8 *)FUN_1000e87dc(param_3,&local_68);
    if ((*(int *)(puVar2 + 2) == 4) && (*(int *)(puVar2 + 1) == 3)) {
      piVar4 = (int *)*puVar2;
      lVar1 = 0x10;
      do {
        if ((*(byte *)((long)piVar4 + lVar1 + 1) >> 3 & 1) == 0) goto LAB_10013b1c4;
        lVar1 = lVar1 + 0x18;
      } while (lVar1 != 0x58);
      uVar6 = *piVar4 << 0x18 | piVar4[6] << 0x10 | piVar4[0xc] << 8 | 0xff;
    }
  }
LAB_10013b1c4:
  uVar6 = (uVar6 & 0xff00ff00) >> 8 | (uVar6 & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x70) = uVar6 >> 0x10 | uVar6 << 0x10;
  uVar7 = *(undefined4 *)(param_2 + 0x84);
  lVar1 = FUN_1000e86c0(param_3,"x");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "x";
    uStack_60 = 1;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "x";
      uStack_60 = 1;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x84) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0x88);
  lVar1 = FUN_1000e86c0(param_3,"y");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "y";
    uStack_60 = 1;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "y";
      uStack_60 = 1;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x88) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0x8c);
  lVar1 = FUN_1000e86c0(param_3,"width");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "width";
    uStack_60 = 5;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "width";
      uStack_60 = 5;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x8c) = uVar7;
  uVar7 = *(undefined4 *)(param_2 + 0x90);
  lVar1 = FUN_1000e86c0(param_3,"height");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_58 = 0x100005;
    local_68 = "height";
    uStack_60 = 6;
    lVar1 = FUN_1000e87dc(param_3,&local_68);
    if ((*(byte *)(lVar1 + 0x11) >> 2 & 1) != 0) {
      local_58 = 0x100005;
      local_68 = "height";
      uStack_60 = 6;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_68);
      uVar7 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x90) = uVar7;
  return;
}




undefined8 * FUN_10013b3a8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145aaf0;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void FUN_10013b414(long param_1,long param_2,long *param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined **ppuVar10;
  long lVar11;
  byte bVar12;
  long *plVar13;
  undefined4 uVar14;
  ulong uVar15;
  ulong uVar16;
  double dVar17;
  undefined **local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined **local_158;
  undefined **local_150;
  undefined8 uStack_148;
  long lStack_140;
  void *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  char local_121;
  undefined7 local_120;
  char cStack_119;
  void *local_118;
  char local_109;
  undefined7 local_108;
  char cStack_101;
  void *local_100;
  char local_f1;
  undefined7 local_f0;
  char cStack_e9;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined2 uStack_d8;
  undefined2 uStack_d6;
  undefined4 uStack_d4;
  undefined2 uStack_d0;
  undefined2 uStack_ce;
  undefined6 uStack_cc;
  undefined2 uStack_c6;
  string asStack_c0 [24];
  string asStack_a8 [24];
  string asStack_90 [32];
  
  FUN_100141dbc(param_1);
  uVar14 = *(undefined4 *)(param_2 + 0x4fc);
  lVar5 = FUN_1000e86c0(param_3,"x");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdcd;
    local_150 = (undefined **)0x1;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdcd;
      local_150 = (undefined **)0x1;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x4fc) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x500);
  lVar5 = FUN_1000e86c0(param_3,"y");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdcf;
    local_150 = (undefined **)0x1;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdcf;
      local_150 = (undefined **)0x1;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x500) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x504);
  lVar5 = FUN_1000e86c0(param_3,"width");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdd1;
    local_150 = (undefined **)0x5;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdd1;
      local_150 = (undefined **)0x5;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x504) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x508);
  lVar5 = FUN_1000e86c0(param_3,"height");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcdd7;
    local_150 = (undefined **)0x6;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcdd7;
      local_150 = (undefined **)0x6;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x508) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x50c);
  lVar5 = FUN_1000e86c0(param_3,"minPlayerLevel");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcf98;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcf98;
      local_150 = (undefined **)0xe;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x50c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x510);
  lVar5 = FUN_1000e86c0(param_3,"maxPlayerLevel");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfa7;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfa7;
      local_150 = (undefined **)0xe;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x510) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x514);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeSpendUSDMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfb6;
    local_150 = (undefined **)0x13;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfb6;
      local_150 = (undefined **)0x13;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x514) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x518);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeSpendUSDMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfca;
    local_150 = (undefined **)0x13;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfca;
      local_150 = (undefined **)0x13;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x518) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x51c);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeVIPPointsMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcfde;
    local_150 = (undefined **)0x14;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcfde;
      local_150 = (undefined **)0x14;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x51c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x520);
  lVar5 = FUN_1000e86c0(param_3,"lifetimeVIPPointsMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcff3;
    local_150 = (undefined **)0x14;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcff3;
      local_150 = (undefined **)0x14;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x520) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x524);
  lVar5 = FUN_1000e86c0(param_3,"cohortMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd008;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd008;
      local_150 = (undefined **)0x9;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x524) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x528);
  lVar5 = FUN_1000e86c0(param_3,"cohortMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd012;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd012;
      local_150 = (undefined **)0x9;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x528) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x52c);
  lVar5 = FUN_1000e86c0(param_3,"lastLoginTimeMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd01c;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd01c;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x52c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x530);
  lVar5 = FUN_1000e86c0(param_3,"lastLoginTimeMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd02d;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd02d;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x530) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x534);
  lVar5 = FUN_1000e86c0(param_3,"spenderLevelMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd03e;
    local_150 = (undefined **)0xf;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd03e;
      local_150 = (undefined **)0xf;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x534) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x538);
  lVar5 = FUN_1000e86c0(param_3,"spenderLevelMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd04e;
    local_150 = (undefined **)0xf;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd04e;
      local_150 = (undefined **)0xf;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x538) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x53c);
  lVar5 = FUN_1000e86c0(param_3,"lastSpendDaysMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd05e;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd05e;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x53c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x540);
  lVar5 = FUN_1000e86c0(param_3,"lastSpendDaysMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd06f;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd06f;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x540) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x544);
  lVar5 = FUN_1000e86c0(param_3,"spendCountMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd080;
    local_150 = (undefined **)0xd;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd080;
      local_150 = (undefined **)0xd;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x544) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x548);
  lVar5 = FUN_1000e86c0(param_3,"spendCountMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd08e;
    local_150 = (undefined **)0xd;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd08e;
      local_150 = (undefined **)0xd;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x548) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x54c);
  lVar5 = FUN_1000e86c0(param_3,"heroesOwnedMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd09c;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd09c;
      local_150 = (undefined **)0xe;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x54c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x550);
  lVar5 = FUN_1000e86c0(param_3,"heroesOwnedMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd0ab;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd0ab;
      local_150 = (undefined **)0xe;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x550) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x554);
  lVar5 = FUN_1000e86c0(param_3,"nonLESkinsOwnedMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd0ba;
    local_150 = (undefined **)0x12;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd0ba;
      local_150 = (undefined **)0x12;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x554) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x558);
  lVar5 = FUN_1000e86c0(param_3,"nonLESkinsOwnedMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd0cd;
    local_150 = (undefined **)0x12;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd0cd;
      local_150 = (undefined **)0x12;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x558) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x55c);
  lVar5 = FUN_1000e86c0(param_3,"heroesUnownedMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd0e0;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd0e0;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x55c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x560);
  lVar5 = FUN_1000e86c0(param_3,"heroesUnownedMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd0f1;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd0f1;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x560) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x564);
  lVar5 = FUN_1000e86c0(param_3,"nonLESkinsUnownedMin");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd102;
    local_150 = (undefined **)0x14;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd102;
      local_150 = (undefined **)0x14;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x564) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x568);
  lVar5 = FUN_1000e86c0(param_3,"nonLESkinsUnownedMax");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd117;
    local_150 = (undefined **)0x14;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd117;
      local_150 = (undefined **)0x14;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x568) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x56c);
  lVar5 = FUN_1000e86c0(param_3,"minAscensionRank");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd12c;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd12c;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x56c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x570);
  lVar5 = FUN_1000e86c0(param_3,"maxAscensionRank");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd13d;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd13d;
      local_150 = (undefined **)0x10;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x570) = uVar14;
  bVar3 = *(char *)(param_2 + 0x58e) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"requireAAP");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd14e;
    local_150 = (undefined **)0xa;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd14e;
      local_150 = (undefined **)0xa;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x58e) = bVar3;
  plVar13 = (long *)(param_2 + 0x3a8);
  if (*(char *)(param_2 + 0x3bf) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"type");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013d4045;
    local_150 = (undefined **)0x4;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013d4045;
      local_150 = (undefined **)0x4;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x3a8),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x3c0);
  if (*(char *)(param_2 + 0x3d7) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"img");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd159;
    local_150 = (undefined **)0x3;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd159;
      local_150 = (undefined **)0x3;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x3c0),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x438);
  if (*(char *)(param_2 + 0x44f) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"timestamp");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd15d;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd15d;
      local_150 = (undefined **)0x9;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x438),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x420);
  if (*(char *)(param_2 + 0x437) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"particleEffect");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd167;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd167;
      local_150 = (undefined **)0xe;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x420),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x3d8);
  if (*(char *)(param_2 + 0x3ef) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"href");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dcc87;
    local_150 = (undefined **)0x4;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dcc87;
      local_150 = (undefined **)0x4;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x3d8),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x3f0);
  if (*(char *)(param_2 + 0x407) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"key");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013d6fb5;
    local_150 = (undefined **)0x3;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013d6fb5;
      local_150 = (undefined **)0x3;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x3f0),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x408);
  if (*(char *)(param_2 + 0x41f) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"tag");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd176;
    local_150 = (undefined **)0x3;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd176;
      local_150 = (undefined **)0x3;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x408),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  puVar7 = DAT_101d91198;
  if (-1 < DAT_101d911a8._7_1_) {
    puVar7 = &DAT_101d91198;
  }
  lVar5 = FUN_1000e86c0(param_3,"tab_title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd17a;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd17a;
      local_150 = (undefined **)0x9;
      puVar7 = (undefined8 *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)puVar7 + 0x12) >> 6 & 1) == 0) {
        puVar7 = (undefined8 *)*puVar7;
      }
    }
  }
  FUN_1004e3120(&local_158,puVar7);
  FUN_1000153b4(param_1 + 0x4c8,&local_158);
  if (local_150 != (undefined **)0x0) {
    operator_delete__(local_150);
  }
  bVar3 = *(char *)(param_2 + 0x58f) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"bMuteMusic");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd184;
    local_150 = (undefined **)0xa;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd184;
      local_150 = (undefined **)0xa;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x58f) = bVar3;
  bVar3 = *(char *)(param_2 + 0x590) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"hideTile");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd18f;
    local_150 = (undefined **)0x8;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd18f;
      local_150 = (undefined **)0x8;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x590) = bVar3;
  bVar3 = *(char *)(param_2 + 0x591) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"popupIfAvailable");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd198;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd198;
      local_150 = (undefined **)0x10;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x591) = bVar3;
  plVar13 = (long *)(param_2 + 0x450);
  if (*(char *)(param_2 + 0x467) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"tags");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dac2b;
    local_150 = (undefined **)0x4;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dac2b;
      local_150 = (undefined **)0x4;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x450),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x468);
  if (*(char *)(param_2 + 0x47f) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"tag");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd176;
    local_150 = (undefined **)0x3;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd176;
      local_150 = (undefined **)0x3;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x468),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x480);
  if (*(char *)(param_2 + 0x497) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"testName");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd1a9;
    local_150 = (undefined **)0x8;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd1a9;
      local_150 = (undefined **)0x8;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x480),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x498);
  if (*(char *)(param_2 + 0x4af) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"testGroup");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd1b2;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd1b2;
      local_150 = (undefined **)0x9;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x498),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x390);
  if (*(char *)(param_2 + 0x3a7) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"deeplinkTargetId");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd1bc;
    local_150 = (undefined **)0x10;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd1bc;
      local_150 = (undefined **)0x10;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x390),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  plVar13 = (long *)(param_2 + 0x378);
  if (*(char *)(param_2 + 0x38f) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"tile_id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013da208;
    local_150 = (undefined **)0x7;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013da208;
      local_150 = (undefined **)0x7;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x378),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  bVar3 = *(char *)(param_2 + 0x592) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"useRelativeCohortTime");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd1cd;
    local_150 = (undefined **)0x15;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd1cd;
      local_150 = (undefined **)0x15;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x592) = bVar3;
  bVar3 = *(char *)(param_2 + 0x593) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"useRelativeLastLoginTime");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd1e3;
    local_150 = (undefined **)0x18;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd1e3;
      local_150 = (undefined **)0x18;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x593) = bVar3;
  bVar3 = *(char *)(param_2 + 0x594) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"useRelativeLastSpendTime");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd1fc;
    local_150 = (undefined **)0x18;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd1fc;
      local_150 = (undefined **)0x18;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x594) = bVar3;
  bVar3 = *(char *)(param_2 + 0x595) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"openUrlInApp");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dccbd;
    local_150 = (undefined **)0xc;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dccbd;
      local_150 = (undefined **)0xc;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x595) = bVar3;
  plVar13 = (long *)(param_2 + 0x4b0);
  if (*(char *)(param_2 + 0x4c7) < '\0') {
    plVar13 = (long *)*plVar13;
  }
  lVar5 = FUN_1000e86c0(param_3,"filter_leaderboard_id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd215;
    local_150 = (undefined **)0x15;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd215;
      local_150 = (undefined **)0x15;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((*(byte *)((long)plVar13 + 0x12) >> 6 & 1) == 0) {
        plVar13 = (long *)*plVar13;
      }
    }
  }
  FUN_10001549c(&local_158,plVar13);
  std::string::operator=((string *)(param_1 + 0x4b0),(string *)&local_158);
  if ((long)uStack_148 < 0) {
    operator_delete(local_158);
  }
  uVar14 = *(undefined4 *)(param_2 + 0x574);
  lVar5 = FUN_1000e86c0(param_3,"filter_leaderboard_score_min");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd22b;
    local_150 = (undefined **)0x1c;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd22b;
      local_150 = (undefined **)0x1c;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x574) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x578);
  lVar5 = FUN_1000e86c0(param_3,"filter_leaderboard_score_max");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd248;
    local_150 = (undefined **)0x1c;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd248;
      local_150 = (undefined **)0x1c;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x578) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x57c);
  lVar5 = FUN_1000e86c0(param_3,"filter_leaderboard_rank_min");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd265;
    local_150 = (undefined **)&DAT_0000001b;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd265;
      local_150 = (undefined **)&DAT_0000001b;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x57c) = uVar14;
  uVar14 = *(undefined4 *)(param_2 + 0x580);
  lVar5 = FUN_1000e86c0(param_3,"filter_leaderboard_rank_max");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd281;
    local_150 = (undefined **)&DAT_0000001b;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 2 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd281;
      local_150 = (undefined **)&DAT_0000001b;
      puVar6 = (undefined4 *)FUN_1000e87dc(param_3,&local_158);
      uVar14 = *puVar6;
    }
  }
  *(undefined4 *)(param_1 + 0x580) = uVar14;
  dVar17 = (double)*(float *)(param_2 + 0x584);
  lVar5 = FUN_1000e86c0(param_3,"filter_leaderboard_percentile_min");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd29d;
    local_150 = (undefined **)0x21;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd29d;
      local_150 = (undefined **)0x21;
      FUN_1000e87dc(param_3,&local_158);
      dVar17 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x584) = (float)dVar17;
  dVar17 = (double)*(float *)(param_2 + 0x588);
  lVar5 = FUN_1000e86c0(param_3,"filter_leaderboard_percentile_max");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd2bf;
    local_150 = (undefined **)0x21;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) >> 1 & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd2bf;
      local_150 = (undefined **)0x21;
      FUN_1000e87dc(param_3,&local_158);
      dVar17 = (double)FUN_1000fceec();
    }
  }
  *(float *)(param_1 + 0x588) = (float)dVar17;
  bVar3 = *(char *)(param_2 + 0x58c) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"filter_leaderboard_no_score");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd2e1;
    local_150 = (undefined **)&DAT_0000001b;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd2e1;
      local_150 = (undefined **)&DAT_0000001b;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x58c) = bVar3;
  bVar3 = *(char *)(param_2 + 0x58d) != '\0';
  lVar5 = FUN_1000e86c0(param_3,"filter_leaderboard_unranked");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd2fd;
    local_150 = (undefined **)&DAT_0000001b;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x11) & 1) != 0) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd2fd;
      local_150 = (undefined **)&DAT_0000001b;
      lVar5 = FUN_1000e87dc(param_3,&local_158);
      bVar3 = *(int *)(lVar5 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x58d) = bVar3;
  lVar5 = FUN_1000e86c0(param_3,"text");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013d7037;
    local_150 = (undefined **)0x4;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 3) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013d7037;
      local_150 = (undefined **)0x4;
      FUN_1000e87dc(param_3,&local_158);
      FUN_10013e010(&local_158);
      std::string::operator=((string *)(param_1 + 0x30),(string *)&local_150);
      std::string::operator=((string *)(param_1 + 0x48),(string *)&local_138);
      std::string::operator=((string *)(param_1 + 0x60),(string *)&local_120);
      std::string::operator=((string *)(param_1 + 0x78),(string *)&local_108);
      *(undefined8 *)(param_1 + 0x98) = uStack_e8;
      *(ulong *)(param_1 + 0x90) = CONCAT17(cStack_e9,local_f0);
      *(ulong *)(param_1 + 0xa8) = CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
      *(undefined8 *)(param_1 + 0xa0) = local_e0;
      *(ulong *)(param_1 + 0xb4) = CONCAT26(uStack_c6,uStack_cc);
      *(ulong *)(param_1 + 0xac) = CONCAT26(uStack_ce,CONCAT24(uStack_d0,uStack_d4));
      local_158 = &PTR_FUN_10145aaf0;
      if (local_f1 < '\0') {
        operator_delete((void *)CONCAT17(cStack_101,local_108));
      }
      if (local_109 < '\0') {
        operator_delete((void *)CONCAT17(cStack_119,local_120));
      }
      if (local_121 < '\0') {
        operator_delete(local_138);
      }
      if (lStack_140 < 0) {
        operator_delete(local_150);
      }
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"topBanner");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd319;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 3) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd319;
      local_150 = (undefined **)0x9;
      FUN_1000e87dc(param_3,&local_158);
      FUN_10013a9fc(&local_158);
      std::string::operator=((string *)(param_1 + 200),(string *)&local_150);
      std::string::operator=((string *)(param_1 + 0xe0),(string *)&local_138);
      std::string::operator=((string *)(param_1 + 0xf8),(string *)&local_120);
      std::string::operator=((string *)(param_1 + 0x110),(string *)&local_108);
      *(undefined8 *)(param_1 + 0x130) = uStack_e8;
      *(ulong *)(param_1 + 0x128) = CONCAT17(cStack_e9,local_f0);
      local_158 = &PTR_FUN_10145aaa0;
      if (local_f1 < '\0') {
        operator_delete((void *)CONCAT17(cStack_101,local_108));
      }
      if (local_109 < '\0') {
        operator_delete((void *)CONCAT17(cStack_119,local_120));
      }
      if (local_121 < '\0') {
        operator_delete(local_138);
      }
      if (lStack_140 < 0) {
        operator_delete(local_150);
      }
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"bottomBanner");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd323;
    local_150 = (undefined **)0xc;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 3) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd323;
      local_150 = (undefined **)0xc;
      FUN_1000e87dc(param_3,&local_158);
      FUN_10013a9fc(&local_158);
      std::string::operator=((string *)(param_1 + 0x140),(string *)&local_150);
      std::string::operator=((string *)(param_1 + 0x158),(string *)&local_138);
      std::string::operator=((string *)(param_1 + 0x170),(string *)&local_120);
      std::string::operator=((string *)(param_1 + 0x188),(string *)&local_108);
      *(undefined8 *)(param_1 + 0x1a8) = uStack_e8;
      *(ulong *)(param_1 + 0x1a0) = CONCAT17(cStack_e9,local_f0);
      local_158 = &PTR_FUN_10145aaa0;
      if (local_f1 < '\0') {
        operator_delete((void *)CONCAT17(cStack_101,local_108));
      }
      if (local_109 < '\0') {
        operator_delete((void *)CONCAT17(cStack_119,local_120));
      }
      if (local_121 < '\0') {
        operator_delete(local_138);
      }
      if (lStack_140 < 0) {
        operator_delete(local_150);
      }
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"ribbons");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd330;
    local_150 = (undefined **)0x7;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 4) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd330;
      local_150 = (undefined **)0x7;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((int)plVar13[1] != 0) {
        lVar5 = 0;
        uVar16 = 0;
        do {
          FUN_10013e16c(&local_158,*plVar13 + lVar5);
          FUN_10013e09c(param_1 + 0x18,&local_158);
          local_158 = &PTR_FUN_10145aac8;
          local_150 = &PTR_FUN_10145aaa0;
          if (cStack_e9 < '\0') {
            operator_delete(local_100);
          }
          if (cStack_101 < '\0') {
            operator_delete(local_118);
          }
          if (cStack_119 < '\0') {
            operator_delete((void *)CONCAT44(uStack_12c,uStack_130));
          }
          if ((long)local_138 < 0) {
            operator_delete(uStack_148);
          }
          uVar16 = uVar16 + 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar16 < *(uint *)(plVar13 + 1));
      }
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"preview");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd338;
    local_150 = (undefined **)0x7;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 3) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd338;
      local_150 = (undefined **)0x7;
      FUN_1000e87dc(param_3,&local_158);
      FUN_10013e214(&local_158);
      std::string::operator=((string *)(param_1 + 0x1b8),(string *)&local_150);
      std::string::operator=((string *)(param_1 + 0x1d0),(string *)&local_138);
      std::string::operator=((string *)(param_1 + 0x1e8),(string *)&local_120);
      std::string::operator=((string *)(param_1 + 0x200),(string *)&local_108);
      std::string::operator=((string *)(param_1 + 0x218),(string *)&local_f0);
      std::string::operator=((string *)(param_1 + 0x230),(string *)&uStack_d8);
      std::string::operator=((string *)(param_1 + 0x248),asStack_c0);
      std::string::operator=((string *)(param_1 + 0x260),asStack_a8);
      std::string::operator=((string *)(param_1 + 0x278),asStack_90);
      FUN_100141b78(&local_158);
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"progressBar");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd340;
    local_150 = (undefined **)0xb;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 3) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd340;
      local_150 = (undefined **)0xb;
      FUN_1000e87dc(param_3,&local_158);
      FUN_10013e264(&local_158);
      std::string::operator=((string *)(param_1 + 0x298),(string *)&local_150);
      std::string::operator=((string *)(param_1 + 0x2b0),(string *)&local_138);
      std::string::operator=((string *)(param_1 + 0x2c8),(string *)&local_120);
      std::string::operator=((string *)(param_1 + 0x2e0),(string *)&local_108);
      *(undefined8 *)(param_1 + 0x300) = uStack_e8;
      *(ulong *)(param_1 + 0x2f8) = CONCAT17(cStack_e9,local_f0);
      *(ulong *)(param_1 + 0x310) = CONCAT44(uStack_d4,CONCAT22(uStack_d6,uStack_d8));
      *(undefined8 *)(param_1 + 0x308) = local_e0;
      *(ulong *)(param_1 + 0x31a) = CONCAT62(uStack_cc,uStack_ce);
      *(ulong *)(param_1 + 0x312) = CONCAT26(uStack_d0,CONCAT42(uStack_d4,uStack_d6));
      local_158 = &PTR_FUN_10145ab40;
      if (local_f1 < '\0') {
        operator_delete((void *)CONCAT17(cStack_101,local_108));
      }
      if (local_109 < '\0') {
        operator_delete((void *)CONCAT17(cStack_119,local_120));
      }
      if (local_121 < '\0') {
        operator_delete(local_138);
      }
      if (lStack_140 < 0) {
        operator_delete(local_150);
      }
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"arenaChallenge");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd34c;
    local_150 = (undefined **)0xe;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 3) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd34c;
      local_150 = (undefined **)0xe;
      FUN_1000e87dc(param_3,&local_158);
      FUN_10013e2f0(&local_158);
      std::string::operator=((string *)(param_1 + 0x330),(string *)&local_150);
      *(ulong *)(param_1 + 0x350) = CONCAT44(uStack_12c,uStack_130);
      *(void **)(param_1 + 0x348) = local_138;
      *(undefined4 *)(param_1 + 0x358) = local_128;
      local_158 = &PTR_FUN_10145ab68;
      if (lStack_140 < 0) {
        operator_delete(local_150);
      }
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"osVersionRequirement");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd35b;
    local_150 = (undefined **)0x14;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 3) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd35b;
      local_150 = (undefined **)0x14;
      uVar8 = FUN_1000e87dc(param_3,&local_158);
      local_150 = (undefined **)0x0;
      uStack_148 = (void *)0x0;
      local_158 = &PTR_FUN_10145ab90;
      FUN_100139f6c(&local_188,&local_158,uVar8);
      *(undefined8 *)(param_1 + 0x370) = uStack_178;
      *(undefined8 *)(param_1 + 0x368) = local_180;
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"ctaGroups");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd370;
    local_150 = (undefined **)0x9;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 4) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd370;
      local_150 = (undefined **)0x9;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((int)plVar13[1] != 0) {
        lVar5 = 0;
        uVar16 = 0;
        do {
          local_158 = &PTR_FUN_10145aa78;
          uStack_148 = (void *)0x0;
          local_150 = (undefined **)0x0;
          local_138 = (void *)0x0;
          lStack_140 = 0;
          uStack_130 = 0;
          uStack_12c = CONCAT31(uStack_12c._1_3_,1);
          FUN_1001385cc(&local_188,&local_158,*plVar13 + lVar5);
          local_158 = &PTR_FUN_10145aa78;
          FUN_100141a54(&local_150,1);
          FUN_10013e374(param_1 + 8,&local_188);
          local_188 = &PTR_FUN_10145aa78;
          FUN_100141a54(&local_180,1);
          uVar16 = uVar16 + 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar16 < *(uint *)(plVar13 + 1));
      }
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"entitlementFilterProducts");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd37a;
    local_150 = (undefined **)0x19;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 4) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd37a;
      local_150 = (undefined **)0x19;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      if ((int)plVar13[1] != 0) {
        lVar5 = 0;
        uVar16 = 0;
        do {
          FUN_10013852c(&local_158,*plVar13 + lVar5);
          FUN_100138490(param_1 + 0x4e8,&local_158);
          local_158 = &PTR_FUN_10145aa28;
          if (local_121 < '\0') {
            operator_delete(local_138);
          }
          if (lStack_140 < 0) {
            operator_delete(local_150);
          }
          uVar16 = uVar16 + 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar16 < *(uint *)(plVar13 + 1));
      }
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"targetCountries");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar5) {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd394;
    local_150 = (undefined **)0xf;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if (*(int *)(lVar5 + 0x10) == 4) {
      uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
      local_158 = (undefined **)0x1013dd394;
      local_150 = (undefined **)0xf;
      plVar13 = (long *)FUN_1000e87dc(param_3,&local_158);
      uVar16 = (ulong)*(uint *)(plVar13 + 1);
      if (*(uint *)(plVar13 + 1) != 0) {
        lVar5 = 0;
        uVar15 = 0;
        do {
          lVar11 = *plVar13;
          uVar2 = *(uint *)(lVar11 + lVar5 + 0x10);
          if ((uVar2 >> 0x14 & 1) != 0) {
            if ((uVar2 >> 0x16 & 1) == 0) {
              lVar11 = *(long *)(lVar11 + lVar5);
            }
            else {
              lVar11 = lVar11 + lVar5;
            }
            FUN_10001549c(&local_158,lVar11);
            FUN_10001617c(param_1 + 0x4d8,&local_158);
            if ((long)uStack_148 < 0) {
              operator_delete(local_158);
            }
            uVar16 = (ulong)*(uint *)(plVar13 + 1);
          }
          uVar15 = uVar15 + 1;
          lVar5 = lVar5 + 0x18;
        } while (uVar15 < uVar16);
      }
    }
  }
  lVar5 = FUN_1000e86c0(param_3,"entitlementFilterMode");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar5) {
LAB_10013dd98:
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    return;
  }
  uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
  local_158 = (undefined **)0x1013dd3a4;
  local_150 = (undefined **)0x15;
  lVar5 = FUN_1000e87dc(param_3,&local_158);
  if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10013dd98;
  lVar5 = FUN_1000e86c0(param_3,"entitlementFilterMode");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar5) {
LAB_10013ddec:
    pcVar9 = "";
  }
  else {
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd3a4;
    local_150 = (undefined **)0x15;
    lVar5 = FUN_1000e87dc(param_3,&local_158);
    if ((*(byte *)(lVar5 + 0x12) >> 4 & 1) == 0) goto LAB_10013ddec;
    uStack_148 = (void *)CONCAT44(uStack_148._4_4_,0x100005);
    local_158 = (undefined **)0x1013dd3a4;
    local_150 = (undefined **)0x15;
    pcVar9 = (char *)FUN_1000e87dc(param_3,&local_158);
    if (((byte)pcVar9[0x12] >> 6 & 1) == 0) {
      pcVar9 = *(char **)pcVar9;
    }
  }
  FUN_10001549c(&local_158,pcVar9);
  ppuVar10 = (undefined **)(ulong)uStack_148._7_1_;
  ppuVar1 = local_150;
  if (-1 < (long)uStack_148) {
    ppuVar1 = ppuVar10;
  }
  bVar12 = uStack_148._7_1_;
  if (ppuVar1 == (undefined **)0x9) {
    iVar4 = std::string::compare((ulong)&local_158,0,(char *)0xffffffffffffffff,0x1013dd3ba);
    if (iVar4 == 0) {
      uVar14 = 1;
      goto LAB_10013dfd8;
    }
    ppuVar10 = (undefined **)((ulong)uStack_148 >> 0x38);
    bVar12 = (byte)((ulong)uStack_148 >> 0x38);
  }
  ppuVar1 = local_150;
  if (-1 < (char)bVar12) {
    ppuVar1 = ppuVar10;
  }
  if (ppuVar1 == (undefined **)0x9) {
    iVar4 = std::string::compare((ulong)&local_158,0,(char *)0xffffffffffffffff,0x1013dd3c4);
    if (iVar4 == 0) {
      uVar14 = 2;
      goto LAB_10013dfd8;
    }
    ppuVar10 = (undefined **)(ulong)uStack_148._7_1_;
    bVar12 = uStack_148._7_1_;
  }
  ppuVar1 = local_150;
  if (-1 < (char)bVar12) {
    ppuVar1 = ppuVar10;
  }
  if (ppuVar1 == (undefined **)0x10) {
    iVar4 = std::string::compare((ulong)&local_158,0,(char *)0xffffffffffffffff,0x1013dd3ce);
    if (iVar4 == 0) {
      uVar14 = 3;
      goto LAB_10013dfd8;
    }
    ppuVar10 = (undefined **)(ulong)uStack_148._7_1_;
    bVar12 = uStack_148._7_1_;
  }
  ppuVar1 = local_150;
  if (-1 < (char)bVar12) {
    ppuVar1 = ppuVar10;
  }
  if (ppuVar1 == (undefined **)0x9) {
    iVar4 = std::string::compare((ulong)&local_158,0,(char *)0xffffffffffffffff,0x1013dd3df);
    if (iVar4 == 0) {
      uVar14 = 4;
      goto LAB_10013dfd8;
    }
    ppuVar10 = (undefined **)(ulong)uStack_148._7_1_;
    bVar12 = uStack_148._7_1_;
  }
  ppuVar1 = local_150;
  if (-1 < (char)bVar12) {
    ppuVar1 = ppuVar10;
  }
  if (ppuVar1 == (undefined **)0x9) {
    iVar4 = std::string::compare((ulong)&local_158,0,(char *)0xffffffffffffffff,0x1013dd3e9);
    if (iVar4 == 0) {
      uVar14 = 5;
      goto LAB_10013dfd8;
    }
    ppuVar10 = (undefined **)(ulong)uStack_148._7_1_;
    bVar12 = uStack_148._7_1_;
  }
  ppuVar1 = local_150;
  if (-1 < (char)bVar12) {
    ppuVar1 = ppuVar10;
  }
  if ((ppuVar1 == (undefined **)0x10) &&
     (iVar4 = std::string::compare((ulong)&local_158,0,(char *)0xffffffffffffffff,0x1013dd3f3),
     iVar4 == 0)) {
    uVar14 = 6;
  }
  else {
    uVar14 = 0;
  }
LAB_10013dfd8:
  *(undefined4 *)(param_1 + 0x4f8) = uVar14;
  if (-1 < (long)uStack_148) {
    return;
  }
  operator_delete(local_158);
  return;
}




void FUN_10013e010(undefined8 param_1,undefined8 param_2)

{
  undefined **local_b8;
  void *local_b0;
  char local_99;
  void *local_98;
  char local_81;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  
  FUN_100141d3c(&local_b8);
  FUN_10013aafc(param_1,&local_b8,param_2);
  local_b8 = &PTR_FUN_10145aaf0;
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_81 < '\0') {
    operator_delete(local_98);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  return;
}




void FUN_10013e09c(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000fb3fc(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x90;
  *(undefined ***)(lVar4 + -0x90) = &PTR_FUN_10145aac8;
  *(undefined ***)(lVar4 + -0x88) = &PTR_FUN_10145aaa0;
  FUN_10003330c(lVar4 + -0x80,param_2 + 0x10);
  FUN_10003330c(lVar4 + -0x68,param_2 + 0x28);
  FUN_10003330c(lVar4 + -0x50,param_2 + 0x40);
  FUN_10003330c(lVar4 + -0x38,param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar4 + -0x18) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar4 + -0x20) = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar4 + -8) = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar4 + -0x10) = uVar5;
  return;
}




void FUN_10013e16c(undefined8 param_1,undefined8 param_2)

{
  undefined **local_c0;
  undefined **ppuStack_b8;
  void *local_b0;
  char local_99;
  void *local_98;
  char local_81;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_c0 = &PTR_FUN_10145aac8;
  FUN_100141cc8(&ppuStack_b8);
  local_40 = 0;
  uStack_38 = 0;
  FUN_10013a6d0(param_1,&local_c0,param_2);
  local_c0 = &PTR_FUN_10145aac8;
  ppuStack_b8 = &PTR_FUN_10145aaa0;
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_81 < '\0') {
    operator_delete(local_98);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  return;
}




void FUN_10013e214(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_110 [224];
  
  FUN_100141acc(auStack_110);
  FUN_100138b50(param_1,auStack_110,param_2);
  FUN_100141b78(auStack_110);
  return;
}




void FUN_10013e264(undefined8 param_1,undefined8 param_2)

{
  undefined **local_b8;
  void *local_b0;
  char local_99;
  void *local_98;
  char local_81;
  void *local_80;
  char local_69;
  void *local_68;
  char local_51;
  
  FUN_100141c34(&local_b8);
  FUN_1001391ac(param_1,&local_b8,param_2);
  local_b8 = &PTR_FUN_10145ab40;
  if (local_51 < '\0') {
    operator_delete(local_68);
  }
  if (local_69 < '\0') {
    operator_delete(local_80);
  }
  if (local_81 < '\0') {
    operator_delete(local_98);
  }
  if (local_99 < '\0') {
    operator_delete(local_b0);
  }
  return;
}




void FUN_10013e2f0(undefined8 param_1,undefined8 param_2)

{
  undefined **local_68;
  void *local_60 [2];
  char local_49;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  
  local_68 = &PTR_FUN_10145ab68;
  FUN_10003330c(local_60,&DAT_101d91198);
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0xffffffffffffffff;
  local_38 = 1;
  FUN_100139b18(param_1,&local_68,param_2);
  local_68 = &PTR_FUN_10145ab68;
  if (local_49 < '\0') {
    operator_delete(local_60[0]);
  }
  return;
}




void FUN_10013e374(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000fafb4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  lVar4 = *(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x30;
  *(undefined ***)(lVar4 + -0x30) = &PTR_FUN_10145aa78;
  FUN_1000fb0b0(lVar4 + -0x28,param_2 + 8);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(lVar4 + -0xb) = *(undefined8 *)(param_2 + 0x25);
  *(undefined8 *)(lVar4 + -0x10) = uVar6;
  *(undefined8 *)(lVar4 + -0x18) = uVar5;
  return;
}




void FUN_10013e41c(long param_1,long param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  char *local_5e8;
  undefined8 uStack_5e0;
  undefined4 local_5d8;
  char local_5d1;
  
  FUN_1000fb6d0(param_1);
  plVar2 = (long *)(param_2 + 0x18);
  if (*(char *)(param_2 + 0x2f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_5d8 = 0x100005;
    local_5e8 = "title";
    uStack_5e0 = 5;
    lVar1 = FUN_1000e87dc(param_3,&local_5e8);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_5d8 = 0x100005;
      local_5e8 = "title";
      uStack_5e0 = 5;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_5e8);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_5e8,plVar2);
  std::string::operator=((string *)(param_1 + 0x18),(string *)&local_5e8);
  if (local_5d1 < '\0') {
    operator_delete(local_5e8);
  }
  plVar2 = (long *)(param_2 + 0x30);
  if (*(char *)(param_2 + 0x47) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"href");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_5d8 = 0x100005;
    local_5e8 = "href";
    uStack_5e0 = 4;
    lVar1 = FUN_1000e87dc(param_3,&local_5e8);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_5d8 = 0x100005;
      local_5e8 = "href";
      uStack_5e0 = 4;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_5e8);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_5e8,plVar2);
  std::string::operator=((string *)(param_1 + 0x30),(string *)&local_5e8);
  if (local_5d1 < '\0') {
    operator_delete(local_5e8);
  }
  plVar2 = (long *)(param_2 + 0x48);
  if (*(char *)(param_2 + 0x5f) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"label");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_5d8 = 0x100005;
    local_5e8 = "label";
    uStack_5e0 = 5;
    lVar1 = FUN_1000e87dc(param_3,&local_5e8);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_5d8 = 0x100005;
      local_5e8 = "label";
      uStack_5e0 = 5;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_5e8);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_5e8,plVar2);
  std::string::operator=((string *)(param_1 + 0x48),(string *)&local_5e8);
  if (local_5d1 < '\0') {
    operator_delete(local_5e8);
  }
  plVar2 = (long *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x77) < '\0') {
    plVar2 = (long *)*plVar2;
  }
  lVar1 = FUN_1000e86c0(param_3,"templateClass");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_5d8 = 0x100005;
    local_5e8 = "templateClass";
    uStack_5e0 = 0xd;
    lVar1 = FUN_1000e87dc(param_3,&local_5e8);
    if ((*(byte *)(lVar1 + 0x12) >> 4 & 1) != 0) {
      local_5d8 = 0x100005;
      local_5e8 = "templateClass";
      uStack_5e0 = 0xd;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_5e8);
      if ((*(byte *)((long)plVar2 + 0x12) >> 6 & 1) == 0) {
        plVar2 = (long *)*plVar2;
      }
    }
  }
  FUN_10001549c(&local_5e8,plVar2);
  std::string::operator=((string *)(param_1 + 0x60),(string *)&local_5e8);
  if (local_5d1 < '\0') {
    operator_delete(local_5e8);
  }
  lVar1 = FUN_1000e86c0(param_3,"items");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar1) {
    local_5d8 = 0x100005;
    local_5e8 = "items";
    uStack_5e0 = 5;
    lVar1 = FUN_1000e87dc(param_3,&local_5e8);
    if (*(int *)(lVar1 + 0x10) == 4) {
      local_5d8 = 0x100005;
      local_5e8 = "items";
      uStack_5e0 = 5;
      plVar2 = (long *)FUN_1000e87dc(param_3,&local_5e8);
      if ((int)plVar2[1] != 0) {
        lVar1 = 0;
        uVar3 = 0;
        do {
          FUN_10013e85c(&local_5e8,*plVar2 + lVar1);
          FUN_10013e7d8(param_1 + 8,&local_5e8);
          FUN_100141f74(&local_5e8);
          uVar3 = uVar3 + 1;
          lVar1 = lVar1 + 0x18;
        } while (uVar3 < *(uint *)(plVar2 + 1));
      }
    }
  }
  return;
}




void FUN_10013e7d8(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  if (uVar3 == param_1[1]) {
    uVar1 = 0;
    if (uVar3 != 0xffffffff) {
      uVar1 = uVar3 + (~uVar3 | 0xfffffff0) + 0x11;
    }
    if (uVar3 < 0x20) {
      uVar1 = uVar3 << 1;
    }
    uVar2 = uVar3 + 1;
    if (uVar3 + 1 <= uVar1) {
      uVar2 = uVar1;
    }
    FUN_1000faad4(param_1,uVar2);
    uVar3 = *param_1;
  }
  *param_1 = uVar3 + 1;
  FUN_1000faba4(*(long *)(param_1 + 2) + (ulong)(uVar3 + 1) * 0x598 + -0x598,param_2);
  return;
}




void FUN_10013e85c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_5c8 [1432];
  
  FUN_100141dbc(auStack_5c8);
  FUN_10013b414(param_1,auStack_5c8,param_2);
  FUN_100141f74(auStack_5c8);
  return;
}




undefined8 * FUN_10013e8ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145abe0;
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x5f) < '\0') {
    operator_delete((void *)param_1[9]);
  }
  if (*(char *)((long)param_1 + 0x47) < '\0') {
    operator_delete((void *)param_1[6]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_1000fa8bc(param_1 + 1,1);
  return param_1;
}




void FUN_10013e924(long param_1,long param_2,long *param_3)

{
  bool bVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  undefined4 uVar5;
  char *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  char local_41;
  
  FUN_100142314(param_1);
  plVar4 = (long *)(param_2 + 8);
  if (*(char *)(param_2 + 0x1f) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar2 = FUN_1000e86c0(param_3,"productID");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "productID";
    uStack_50 = 9;
    lVar2 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "productID";
      uStack_50 = 9;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_58,plVar4);
  std::string::operator=((string *)(param_1 + 8),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar4 = (long *)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x37) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar2 = FUN_1000e86c0(param_3,"key");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "key";
    uStack_50 = 3;
    lVar2 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "key";
      uStack_50 = 3;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_58,plVar4);
  std::string::operator=((string *)(param_1 + 0x20),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar4 = (long *)(param_2 + 0x38);
  if (*(char *)(param_2 + 0x4f) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar2 = FUN_1000e86c0(param_3,"type");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "type";
    uStack_50 = 4;
    lVar2 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "type";
      uStack_50 = 4;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_58,plVar4);
  std::string::operator=((string *)(param_1 + 0x38),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  plVar4 = (long *)(param_2 + 0x50);
  if (*(char *)(param_2 + 0x67) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar2 = FUN_1000e86c0(param_3,"bgImg");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "bgImg";
    uStack_50 = 5;
    lVar2 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar2 + 0x12) >> 4 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "bgImg";
      uStack_50 = 5;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_58);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_58,plVar4);
  std::string::operator=((string *)(param_1 + 0x50),(string *)&local_58);
  if (local_41 < '\0') {
    operator_delete(local_58);
  }
  uVar5 = *(undefined4 *)(param_2 + 0x68);
  lVar2 = FUN_1000e86c0(param_3,"bonus");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "bonus";
    uStack_50 = 5;
    lVar2 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar2 + 0x11) >> 2 & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "bonus";
      uStack_50 = 5;
      puVar3 = (undefined4 *)FUN_1000e87dc(param_3,&local_58);
      uVar5 = *puVar3;
    }
  }
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  bVar1 = *(char *)(param_2 + 0x6d) != '\0';
  lVar2 = FUN_1000e86c0(param_3,"enabled");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "enabled";
    uStack_50 = 7;
    lVar2 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "enabled";
      uStack_50 = 7;
      lVar2 = FUN_1000e87dc(param_3,&local_58);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x6d) = bVar1;
  bVar1 = *(char *)(param_2 + 0x6c) != '\0';
  lVar2 = FUN_1000e86c0(param_3,"hideTile");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar2) {
    local_48 = 0x100005;
    local_58 = "hideTile";
    uStack_50 = 8;
    lVar2 = FUN_1000e87dc(param_3,&local_58);
    if ((*(byte *)(lVar2 + 0x11) & 1) != 0) {
      local_48 = 0x100005;
      local_58 = "hideTile";
      uStack_50 = 8;
      lVar2 = FUN_1000e87dc(param_3,&local_58);
      bVar1 = *(int *)(lVar2 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0x6c) = bVar1;
  return;
}




undefined8 * FUN_10013ed90(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ac08;
  if (*(char *)((long)param_1 + 0x67) < '\0') {
    operator_delete((void *)param_1[10]);
  }
  if (*(char *)((long)param_1 + 0x4f) < '\0') {
    operator_delete((void *)param_1[7]);
  }
  if (*(char *)((long)param_1 + 0x37) < '\0') {
    operator_delete((void *)param_1[4]);
  }
  if (*(char *)((long)param_1 + 0x1f) < '\0') {
    operator_delete((void *)param_1[1]);
  }
  return param_1;
}




void FUN_10013edfc(long param_1,long param_2,long *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  char *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  byte local_61;
  undefined4 local_60;
  char *local_58;
  void *local_50;
  undefined4 local_48;
  char local_41;
  
  FUN_10014237c(param_1);
  plVar8 = (long *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x77) < '\0') {
    plVar8 = (long *)*plVar8;
  }
  lVar3 = FUN_1000e86c0(param_3,"id");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_68 = 0x100005;
    local_78 = "id";
    local_70 = (undefined1 *)0x2;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      local_68 = 0x100005;
      local_78 = "id";
      local_70 = (undefined1 *)0x2;
      plVar8 = (long *)FUN_1000e87dc(param_3,&local_78);
      if ((*(byte *)((long)plVar8 + 0x12) >> 6 & 1) == 0) {
        plVar8 = (long *)*plVar8;
      }
    }
  }
  FUN_10001549c(&local_78,plVar8);
  std::string::operator=((string *)(param_1 + 0x60),(string *)&local_78);
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  lVar3 = FUN_1000e86c0(param_3,"discount_label");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_68 = 0x100005;
    local_78 = "discount_label";
    local_70 = (undefined1 *)0xe;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      lVar3 = FUN_1000e86c0(param_3,"discount_label");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013ef74:
        pcVar5 = "";
      }
      else {
        local_68 = 0x100005;
        local_78 = "discount_label";
        local_70 = (undefined1 *)0xe;
        lVar3 = FUN_1000e87dc(param_3,&local_78);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013ef74;
        local_68 = 0x100005;
        local_78 = "discount_label";
        local_70 = (undefined1 *)0xe;
        pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
        if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
          pcVar5 = *(char **)pcVar5;
        }
      }
      FUN_10001549c(&local_78,pcVar5);
      FUN_1001376a0(&local_78,param_1 + 0x78);
      if ((char)local_61 < '\0') {
        operator_delete(local_78);
      }
      lVar3 = FUN_1000e86c0(param_3,"discount_label_interpolator");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
        local_68 = 0x100005;
        local_78 = "discount_label_interpolator";
        local_70 = &DAT_0000001b;
        lVar3 = FUN_1000e87dc(param_3,&local_78);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
          FUN_1004e3120(&local_58,"[DISCOUNT]");
          lVar3 = FUN_1000e86c0(param_3,"discount_label_interpolator");
          if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f04c:
            pcVar5 = "";
          }
          else {
            local_68 = 0x100005;
            local_78 = "discount_label_interpolator";
            local_70 = &DAT_0000001b;
            lVar3 = FUN_1000e87dc(param_3,&local_78);
            if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f04c;
            local_68 = 0x100005;
            local_78 = "discount_label_interpolator";
            local_70 = &DAT_0000001b;
            pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
            if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
              pcVar5 = *(char **)pcVar5;
            }
          }
          FUN_1004e3120(&local_78,pcVar5);
          FUN_1004e3bc4(param_1 + 0x78,0,&local_58,&local_78);
          if (local_70 != (undefined1 *)0x0) {
            operator_delete__(local_70);
          }
          if (local_50 != (void *)0x0) {
            operator_delete__(local_50);
          }
        }
      }
    }
  }
  lVar3 = FUN_1000e86c0(param_3,"label");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f0d4:
    pcVar5 = "";
  }
  else {
    local_68 = 0x100005;
    local_78 = "label";
    local_70 = (undefined1 *)0x5;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f0d4;
    local_68 = 0x100005;
    local_78 = "label";
    local_70 = (undefined1 *)0x5;
    pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_10001549c(&local_78,pcVar5);
  FUN_1001376a0(&local_78,param_1 + 0x88);
  if ((char)local_61 < '\0') {
    operator_delete(local_78);
  }
  lVar3 = FUN_1000e86c0(param_3,"label_interpolator");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar3) {
    local_68 = 0x100005;
    local_78 = "label_interpolator";
    local_70 = (undefined1 *)0x12;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) != 0) {
      FUN_1004e3120(&local_58,"[DURATION]");
      lVar3 = FUN_1000e86c0(param_3,"label_interpolator");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f1ac:
        pcVar5 = "";
      }
      else {
        local_68 = 0x100005;
        local_78 = "label_interpolator";
        local_70 = (undefined1 *)0x12;
        lVar3 = FUN_1000e87dc(param_3,&local_78);
        if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f1ac;
        local_68 = 0x100005;
        local_78 = "label_interpolator";
        local_70 = (undefined1 *)0x12;
        pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
        if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
          pcVar5 = *(char **)pcVar5;
        }
      }
      FUN_1004e3120(&local_78,pcVar5);
      FUN_1004e3bc4(param_1 + 0x88,0,&local_58,&local_78);
      if (local_70 != (undefined1 *)0x0) {
        operator_delete__(local_70);
      }
      if (local_50 != (void *)0x0) {
        operator_delete__(local_50);
      }
    }
  }
  FUN_1000e8538(param_3,param_1 + 0x18);
  local_68 = 0x100005;
  local_78 = "price";
  local_70 = (undefined1 *)0x5;
  plVar8 = (long *)FUN_1000e87dc(param_3,&local_78);
  lVar3 = FUN_1000e86c0(plVar8,"silver");
  if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar3) {
    FUN_10001549c(&local_78,"");
    local_60 = 0;
    FUN_10001549c(&local_58,"silver");
    std::string::operator=((string *)&local_78,(string *)&local_58);
    if (local_41 < '\0') {
      operator_delete(local_58);
    }
    lVar3 = FUN_1000e86c0(plVar8,"silver");
    if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar3) {
LAB_10013f2c8:
      local_60 = 0;
    }
    else {
      local_48 = 0x100005;
      local_58 = "silver";
      local_50 = (void *)0x6;
      lVar3 = FUN_1000e87dc(plVar8,&local_58);
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10013f2c8;
      local_48 = 0x100005;
      local_58 = "silver";
      local_50 = (void *)0x6;
      puVar4 = (undefined4 *)FUN_1000e87dc(plVar8,&local_58);
      local_60 = *puVar4;
    }
    FUN_10013f698(param_1 + 8,&local_78);
    if ((char)local_61 < '\0') {
      operator_delete(local_78);
    }
  }
  lVar3 = FUN_1000e86c0(plVar8,"gold");
  if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 != lVar3) {
    FUN_10001549c(&local_78,"");
    local_60 = 0;
    FUN_10001549c(&local_58,"gold");
    std::string::operator=((string *)&local_78,(string *)&local_58);
    if (local_41 < '\0') {
      operator_delete(local_58);
    }
    lVar3 = FUN_1000e86c0(plVar8,"gold");
    if (*plVar8 + (ulong)*(uint *)(plVar8 + 1) * 0x30 == lVar3) {
LAB_10013f3ec:
      local_60 = 0;
    }
    else {
      local_48 = 0x100005;
      local_58 = "gold";
      local_50 = (void *)0x4;
      lVar3 = FUN_1000e87dc(plVar8,&local_58);
      if ((*(byte *)(lVar3 + 0x11) >> 2 & 1) == 0) goto LAB_10013f3ec;
      local_48 = 0x100005;
      local_58 = "gold";
      local_50 = (void *)0x4;
      puVar4 = (undefined4 *)FUN_1000e87dc(plVar8,&local_58);
      local_60 = *puVar4;
    }
    FUN_10013f698(param_1 + 8,&local_78);
    if ((char)local_61 < '\0') {
      operator_delete(local_78);
    }
  }
  lVar3 = FUN_1000e86c0(param_3,"visibilityFlags");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f47c:
    *(undefined4 *)(param_1 + 0x98) = 3;
    return;
  }
  local_68 = 0x100005;
  local_78 = "visibilityFlags";
  local_70 = (undefined1 *)0xf;
  lVar3 = FUN_1000e87dc(param_3,&local_78);
  if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f47c;
  lVar3 = FUN_1000e86c0(param_3,"visibilityFlags");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar3) {
LAB_10013f4d4:
    pcVar5 = "";
  }
  else {
    local_68 = 0x100005;
    local_78 = "visibilityFlags";
    local_70 = (undefined1 *)0xf;
    lVar3 = FUN_1000e87dc(param_3,&local_78);
    if ((*(byte *)(lVar3 + 0x12) >> 4 & 1) == 0) goto LAB_10013f4d4;
    local_68 = 0x100005;
    local_78 = "visibilityFlags";
    local_70 = (undefined1 *)0xf;
    pcVar5 = (char *)FUN_1000e87dc(param_3,&local_78);
    if (((byte)pcVar5[0x12] >> 6 & 1) == 0) {
      pcVar5 = *(char **)pcVar5;
    }
  }
  FUN_10001549c(&local_78,pcVar5);
  uVar7 = (ulong)local_61;
  puVar1 = local_70;
  if (-1 < (char)local_61) {
    puVar1 = (undefined1 *)uVar7;
  }
  if (puVar1 == (undefined1 *)0x6) {
    iVar2 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013dd488);
    if (iVar2 == 0) {
      uVar6 = 1;
      goto LAB_10013f640;
    }
    uVar7 = (ulong)local_61;
  }
  puVar1 = local_70;
  if (-1 < (char)local_61) {
    puVar1 = (undefined1 *)uVar7;
  }
  if (puVar1 == (undefined1 *)0x8) {
    iVar2 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013dd48f);
    if (iVar2 == 0) {
      uVar6 = 0;
      goto LAB_10013f640;
    }
    uVar7 = (ulong)local_61;
  }
  puVar1 = local_70;
  if (-1 < (char)local_61) {
    puVar1 = (undefined1 *)uVar7;
  }
  if ((puVar1 == (undefined1 *)0x6) &&
     (iVar2 = std::string::compare((ulong)&local_78,0,(char *)0xffffffffffffffff,0x1013dd498),
     iVar2 == 0)) {
    uVar6 = 3;
  }
  else {
    uVar6 = 2;
  }
LAB_10013f640:
  *(undefined4 *)(param_1 + 0x98) = uVar6;
  if (-1 < (char)local_61) {
    return;
  }
  operator_delete(local_78);
  return;
}




void FUN_10013f698(uint *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_1;
  if (uVar4 == param_1[1]) {
    uVar2 = 0;
    if (uVar4 != 0xffffffff) {
      uVar2 = uVar4 + (~uVar4 | 0xfffffff0) + 0x11;
    }
    if (uVar4 < 0x20) {
      uVar2 = uVar4 << 1;
    }
    uVar3 = uVar4 + 1;
    if (uVar4 + 1 <= uVar2) {
      uVar3 = uVar2;
    }
    FUN_100142558(param_1,uVar3);
    uVar4 = *param_1;
  }
  *param_1 = uVar4 + 1;
  lVar1 = *(long *)(param_1 + 2) + (ulong)(uVar4 + 1) * 0x20;
  FUN_10003330c(lVar1 + -0x20,param_2);
  *(undefined4 *)(lVar1 + -8) = *(undefined4 *)(param_2 + 0x18);
  return;
}




undefined8 * FUN_10013f724(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_10145ac30;
  if ((void *)param_1[0x12] != (void *)0x0) {
    operator_delete__((void *)param_1[0x12]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
  }
  if ((void *)param_1[0x10] != (void *)0x0) {
    operator_delete__((void *)param_1[0x10]);
    param_1[0xf] = 0;
    param_1[0x10] = 0;
  }
  if (*(char *)((long)param_1 + 0x77) < '\0') {
    operator_delete((void *)param_1[0xc]);
  }
  if (*(char *)((long)param_1 + 0x2f) < '\0') {
    operator_delete((void *)param_1[3]);
  }
  FUN_1001423e4(param_1 + 1,1);
  return param_1;
}




void FUN_10013f79c(long param_1,long param_2,long *param_3)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  char *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined4 uVar9;
  void *pvVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  void *local_150;
  void *local_148;
  byte local_139;
  undefined1 auStack_138 [8];
  void *local_130;
  undefined1 auStack_128 [8];
  void *local_120;
  undefined **local_118;
  void *local_110;
  undefined4 local_108;
  char local_101;
  void *local_100;
  char local_e9;
  void *local_b8;
  char local_a1;
  undefined8 local_a0;
  void *local_98;
  undefined8 local_90;
  void *local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  
  FUN_1000eb06c(param_1);
  local_78 = 0;
  uStack_70 = 0;
  local_108 = 0x100005;
  local_118 = (undefined **)0x1013dd49f;
  local_110 = (void *)0x4;
  plVar4 = (long *)FUN_1000e87dc(param_3,&local_118);
  if ((int)plVar4[1] != 0) {
    lVar12 = 0;
    uVar13 = 0;
    do {
      FUN_100140640(&local_118,*plVar4 + lVar12);
      FUN_100140564(&local_78,&local_118);
      local_118 = &PTR_FUN_10145ac30;
      if (local_88 != (void *)0x0) {
        operator_delete__(local_88);
        local_90 = 0;
        local_88 = (void *)0x0;
      }
      if (local_98 != (void *)0x0) {
        operator_delete__(local_98);
        local_a0 = 0;
        local_98 = (void *)0x0;
      }
      if (local_a1 < '\0') {
        operator_delete(local_b8);
      }
      if (local_e9 < '\0') {
        operator_delete(local_100);
      }
      FUN_1001423e4(&local_110,1);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x18;
    } while (uVar13 < *(uint *)(plVar4 + 1));
  }
  lVar12 = FUN_1000e86c0(param_3,"title");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar12) {
    pcVar6 = "";
  }
  else {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013d6fc2;
    local_110 = (void *)0x5;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) == 0) {
      pcVar6 = "";
    }
    else {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013d6fc2;
      local_110 = (void *)0x5;
      pcVar6 = (char *)FUN_1000e87dc(param_3,&local_118);
      if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
        pcVar6 = *(char **)pcVar6;
      }
    }
  }
  FUN_10001549c(&local_118,pcVar6);
  FUN_1001376a0(&local_118,param_1 + 0x18);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  FUN_1004e313c(auStack_128);
  lVar12 = FUN_1000e86c0(param_3,"description");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013d6fc8;
    local_110 = (void *)0xb;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if (*(int *)(lVar12 + 0x10) == 4) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013d6fc8;
      local_110 = (void *)0xb;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_118);
      if ((int)plVar4[1] != 0) {
        lVar12 = 0;
        uVar13 = 0;
        do {
          FUN_1004e313c(&local_150);
          lVar8 = *plVar4 + lVar12;
          if ((*(byte *)(lVar8 + 0x12) >> 6 & 1) == 0) {
            lVar8 = *(long *)(*plVar4 + lVar12);
          }
          FUN_10001549c(&local_118,lVar8);
          FUN_1001376a0(&local_118,&local_150);
          if (local_101 < '\0') {
            operator_delete(local_118);
          }
          uVar5 = FUN_1004e3624(&local_150);
          if ((uVar5 & 1) == 0) {
            FUN_1004e372c(auStack_128,&local_150);
          }
          if (local_148 != (void *)0x0) {
            operator_delete__(local_148);
          }
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0x18;
        } while (uVar13 < *(uint *)(plVar4 + 1));
      }
      lVar12 = FUN_1000e86c0(param_3,"boost_amount");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
        local_108 = 0x100005;
        local_118 = (undefined **)0x1013dd4a4;
        local_110 = (void *)0xc;
        lVar12 = FUN_1000e87dc(param_3,&local_118);
        if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
          FUN_1004e3120(&local_150,"[BOOST_AMOUNT]");
          lVar12 = FUN_1000e86c0(param_3,"boost_amount");
          if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar12) {
LAB_10013fb0c:
            pcVar6 = "";
          }
          else {
            local_108 = 0x100005;
            local_118 = (undefined **)0x1013dd4a4;
            local_110 = (void *)0xc;
            lVar12 = FUN_1000e87dc(param_3,&local_118);
            if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) == 0) goto LAB_10013fb0c;
            local_108 = 0x100005;
            local_118 = (undefined **)0x1013dd4a4;
            local_110 = (void *)0xc;
            pcVar6 = (char *)FUN_1000e87dc(param_3,&local_118);
            if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
              pcVar6 = *(char **)pcVar6;
            }
          }
          FUN_1004e3120(&local_118,pcVar6);
          FUN_1004e3d50(auStack_128,0,&local_150,&local_118);
          if (local_110 != (void *)0x0) {
            operator_delete__(local_110);
          }
          if (local_148 != (void *)0x0) {
            operator_delete__(local_148);
          }
        }
      }
    }
  }
  FUN_1000153b4(param_1 + 0x28,auStack_128);
  FUN_1004e313c(auStack_138);
  lVar12 = FUN_1000e86c0(param_3,"tooltip");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd4c0;
    local_110 = (void *)0x7;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if (*(int *)(lVar12 + 0x10) == 4) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013dd4c0;
      local_110 = (void *)0x7;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_118);
      if ((int)plVar4[1] != 0) {
        lVar12 = 0;
        uVar13 = 0;
        do {
          FUN_1004e313c(&local_150);
          lVar8 = *plVar4 + lVar12;
          if ((*(byte *)(lVar8 + 0x12) >> 6 & 1) == 0) {
            lVar8 = *(long *)(*plVar4 + lVar12);
          }
          FUN_10001549c(&local_118,lVar8);
          FUN_1001376a0(&local_118,&local_150);
          if (local_101 < '\0') {
            operator_delete(local_118);
          }
          uVar5 = FUN_1004e3624(&local_150);
          if ((uVar5 & 1) == 0) {
            FUN_1004e372c(auStack_138,&local_150);
          }
          if (local_148 != (void *)0x0) {
            operator_delete__(local_148);
          }
          uVar13 = uVar13 + 1;
          lVar12 = lVar12 + 0x18;
        } while (uVar13 < *(uint *)(plVar4 + 1));
      }
      lVar12 = FUN_1000e86c0(param_3,"boost_amount");
      if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
        local_108 = 0x100005;
        local_118 = (undefined **)0x1013dd4a4;
        local_110 = (void *)0xc;
        lVar12 = FUN_1000e87dc(param_3,&local_118);
        if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
          FUN_1004e3120(&local_150,"[BOOST_AMOUNT]");
          lVar12 = FUN_1000e86c0(param_3,"boost_amount");
          if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar12) {
LAB_10013fcf8:
            pcVar6 = "";
          }
          else {
            local_108 = 0x100005;
            local_118 = (undefined **)0x1013dd4a4;
            local_110 = (void *)0xc;
            lVar12 = FUN_1000e87dc(param_3,&local_118);
            if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) == 0) goto LAB_10013fcf8;
            local_108 = 0x100005;
            local_118 = (undefined **)0x1013dd4a4;
            local_110 = (void *)0xc;
            pcVar6 = (char *)FUN_1000e87dc(param_3,&local_118);
            if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
              pcVar6 = *(char **)pcVar6;
            }
          }
          FUN_1004e3120(&local_118,pcVar6);
          FUN_1004e3d50(auStack_138,0,&local_150,&local_118);
          if (local_110 != (void *)0x0) {
            operator_delete__(local_110);
          }
          if (local_148 != (void *)0x0) {
            operator_delete__(local_148);
          }
        }
      }
    }
  }
  FUN_1000153b4(param_1 + 0x38,auStack_138);
  lVar12 = FUN_1000e86c0(param_3,"category");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 == lVar12) {
LAB_10013fd8c:
    pcVar6 = "";
  }
  else {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd4c8;
    local_110 = (void *)0x8;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) == 0) goto LAB_10013fd8c;
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd4c8;
    local_110 = (void *)0x8;
    pcVar6 = (char *)FUN_1000e87dc(param_3,&local_118);
    if (((byte)pcVar6[0x12] >> 6 & 1) == 0) {
      pcVar6 = *(char **)pcVar6;
    }
  }
  FUN_10001549c(&local_150,pcVar6);
  pvVar10 = (void *)(ulong)local_139;
  pvVar1 = local_148;
  if (-1 < (char)local_139) {
    pvVar1 = pvVar10;
  }
  if (pvVar1 == (void *)0x4) {
    iVar3 = std::string::compare((ulong)&local_150,0,(char *)0xffffffffffffffff,0x1013d25b2);
    if (iVar3 == 0) {
      uVar9 = 2;
      goto LAB_10013ff30;
    }
    pvVar10 = (void *)(ulong)local_139;
  }
  pvVar1 = local_148;
  if (-1 < (char)local_139) {
    pvVar1 = pvVar10;
  }
  if (pvVar1 == (void *)0x4) {
    iVar3 = std::string::compare((ulong)&local_150,0,(char *)0xffffffffffffffff,0x1013d25c4);
    if (iVar3 == 0) {
      uVar9 = 0;
      goto LAB_10013ff30;
    }
    pvVar10 = (void *)(ulong)local_139;
  }
  pvVar1 = local_148;
  if (-1 < (char)local_139) {
    pvVar1 = pvVar10;
  }
  if (pvVar1 == (void *)0x6) {
    iVar3 = std::string::compare((ulong)&local_150,0,(char *)0xffffffffffffffff,0x1013d9ffb);
    if (iVar3 == 0) {
      uVar9 = 3;
      goto LAB_10013ff30;
    }
    pvVar10 = (void *)(ulong)local_139;
  }
  pvVar1 = local_148;
  if (-1 < (char)local_139) {
    pvVar1 = pvVar10;
  }
  if (pvVar1 == (void *)0x5) {
    iVar3 = std::string::compare((ulong)&local_150,0,(char *)0xffffffffffffffff,0x1013dac84);
    if (iVar3 == 0) {
      uVar9 = 1;
      goto LAB_10013ff30;
    }
    pvVar10 = (void *)(ulong)local_139;
  }
  if (-1 < (char)local_139) {
    local_148 = pvVar10;
  }
  if ((local_148 == (void *)0xd) &&
     (iVar3 = std::string::compare((ulong)&local_150,0,(char *)0xffffffffffffffff,0x1013dd4d1),
     iVar3 == 0)) {
    uVar9 = 4;
  }
  else {
    uVar9 = 5;
  }
LAB_10013ff30:
  *(undefined4 *)(param_1 + 0xe0) = uVar9;
  FUN_1001427dc(param_1 + 8,&local_78);
  plVar4 = (long *)(param_2 + 0xa8);
  if (*(char *)(param_2 + 0xbf) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar12 = FUN_1000e86c0(param_3,"symbol");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd4df;
    local_110 = (void *)0x6;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013dd4df;
      local_110 = (void *)0x6;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_118);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_118,plVar4);
  std::string::operator=((string *)(param_1 + 0xa8),(string *)&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  plVar4 = (long *)(param_2 + 0x90);
  if (*(char *)(param_2 + 0xa7) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar12 = FUN_1000e86c0(param_3,"image");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd4e6;
    local_110 = (void *)0x5;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013dd4e6;
      local_110 = (void *)0x5;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_118);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_118,plVar4);
  std::string::operator=((string *)(param_1 + 0x90),(string *)&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  plVar4 = (long *)(param_2 + 0x48);
  if (*(char *)(param_2 + 0x5f) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar12 = FUN_1000e86c0(param_3,"VGF");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd4ec;
    local_110 = (void *)0x3;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013dd4ec;
      local_110 = (void *)0x3;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_118);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_118,plVar4);
  std::string::operator=((string *)(param_1 + 0x48),(string *)&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  plVar4 = (long *)(param_2 + 0x60);
  if (*(char *)(param_2 + 0x77) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar12 = FUN_1000e86c0(param_3,"video");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd4f0;
    local_110 = (void *)0x5;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013dd4f0;
      local_110 = (void *)0x5;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_118);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_118,plVar4);
  std::string::operator=((string *)(param_1 + 0x60),(string *)&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  plVar4 = (long *)(param_2 + 0x78);
  if (*(char *)(param_2 + 0x8f) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar12 = FUN_1000e86c0(param_3,"lore");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd4f6;
    local_110 = (void *)0x4;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013dd4f6;
      local_110 = (void *)0x4;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_118);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_118,plVar4);
  std::string::operator=((string *)(param_1 + 0x78),(string *)&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  plVar4 = (long *)(param_2 + 0xc0);
  if (*(char *)(param_2 + 0xd7) < '\0') {
    plVar4 = (long *)*plVar4;
  }
  lVar12 = FUN_1000e86c0(param_3,"action");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013daef9;
    local_110 = (void *)0x6;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x12) >> 4 & 1) != 0) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013daef9;
      local_110 = (void *)0x6;
      plVar4 = (long *)FUN_1000e87dc(param_3,&local_118);
      if ((*(byte *)((long)plVar4 + 0x12) >> 6 & 1) == 0) {
        plVar4 = (long *)*plVar4;
      }
    }
  }
  FUN_10001549c(&local_118,plVar4);
  std::string::operator=((string *)(param_1 + 0xc0),(string *)&local_118);
  if (local_101 < '\0') {
    operator_delete(local_118);
  }
  uVar11 = *(undefined8 *)(param_2 + 0xd8);
  lVar12 = FUN_1000e86c0(param_3,"newEpoch");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd4fb;
    local_110 = (void *)0x8;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x11) >> 4 & 1) != 0) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013dd4fb;
      local_110 = (void *)0x8;
      puVar7 = (undefined8 *)FUN_1000e87dc(param_3,&local_118);
      uVar11 = *puVar7;
    }
  }
  *(undefined8 *)(param_1 + 0xd8) = uVar11;
  bVar2 = *(char *)(param_2 + 0xe5) != '\0';
  lVar12 = FUN_1000e86c0(param_3,"onSale");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd504;
    local_110 = (void *)0x6;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x11) & 1) != 0) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013dd504;
      local_110 = (void *)0x6;
      lVar12 = FUN_1000e87dc(param_3,&local_118);
      bVar2 = *(int *)(lVar12 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xe5) = bVar2;
  bVar2 = *(char *)(param_2 + 0xe4) != '\0';
  lVar12 = FUN_1000e86c0(param_3,"giftable");
  if (*param_3 + (ulong)*(uint *)(param_3 + 1) * 0x30 != lVar12) {
    local_108 = 0x100005;
    local_118 = (undefined **)0x1013dd50b;
    local_110 = (void *)0x8;
    lVar12 = FUN_1000e87dc(param_3,&local_118);
    if ((*(byte *)(lVar12 + 0x11) & 1) != 0) {
      local_108 = 0x100005;
      local_118 = (undefined **)0x1013dd50b;
      local_110 = (void *)0x8;
      lVar12 = FUN_1000e87dc(param_3,&local_118);
      bVar2 = *(int *)(lVar12 + 0x10) == 0x102;
    }
  }
  *(bool *)(param_1 + 0xe4) = bVar2;
  if ((char)local_139 < '\0') {
    operator_delete(local_150);
  }
  if (local_130 != (void *)0x0) {
    operator_delete__(local_130);
  }
  if (local_120 != (void *)0x0) {
    operator_delete__(local_120);
  }
  FUN_1000eb1ec(&local_78,1);
  return;
}




void thunk_FUN_100136b54(void)

{
  FUN_100136b54();
  return;
}




void thunk_FUN_100136b24(void)

{
  FUN_100136b24();
  return;
}




void thunk_FUN_100136b3c(void)

{
  FUN_100136b3c();
  return;
}

