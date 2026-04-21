// classes/ADJLogger — 16 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID ADJLogger::init(ID param_1,SEL param_2)

{
  long lVar1;
  ID IVar2;
  ID local_30;
  class_t *local_28;
  
  local_28 = &objc::class_t::ADJLogger;
  local_30 = param_1;
  lVar1 = _objc_msgSendSuper2(&local_30,"init");
  if (lVar1 == 0) {
    IVar2 = 0;
  }
  else {
    *(undefined4 *)(lVar1 + _loglevel) = 3;
    _objc_msgSend(lVar1,"setLogLevelLocked:",0);
    _objc_msgSend(lVar1,"setIsProductionEnvironment:",0);
    IVar2 = _objc_retain(lVar1);
  }
  _objc_release(lVar1);
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

void ADJLogger::lockLogLevel(ID param_1,SEL param_2)

{
  setLogLevelLocked_(param_1,(SEL)"setLogLevelLocked:",1);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJLogger::verbose_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  ID IVar3;
  
  IVar3 = _objc_retain(param_3);
  bVar1 = isProductionEnvironment(param_1,(SEL)"isProductionEnvironment");
  if (((bVar1 & 1) == 0) && (iVar2 = loglevel(param_1,(SEL)"loglevel"), iVar2 < 2)) {
    logLevel_format_parameters_
              (param_1,(SEL)"logLevel:format:parameters:",0x101833018,IVar3,&stack0x00000000);
  }
  _objc_release(IVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJLogger::debug_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  ID IVar3;
  
  IVar3 = _objc_retain(param_3);
  bVar1 = isProductionEnvironment(param_1,(SEL)"isProductionEnvironment");
  if (((bVar1 & 1) == 0) && (iVar2 = loglevel(param_1,(SEL)"loglevel"), iVar2 < 3)) {
    logLevel_format_parameters_
              (param_1,(SEL)"logLevel:format:parameters:",0x101833038,IVar3,&stack0x00000000);
  }
  _objc_release(IVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJLogger::info_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  ID IVar3;
  
  IVar3 = _objc_retain(param_3);
  bVar1 = isProductionEnvironment(param_1,(SEL)"isProductionEnvironment");
  if (((bVar1 & 1) == 0) && (iVar2 = loglevel(param_1,(SEL)"loglevel"), iVar2 < 4)) {
    logLevel_format_parameters_
              (param_1,(SEL)"logLevel:format:parameters:",0x101833058,IVar3,&stack0x00000000);
  }
  _objc_release(IVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJLogger::warn_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  ID IVar3;
  
  IVar3 = _objc_retain(param_3);
  bVar1 = isProductionEnvironment(param_1,(SEL)"isProductionEnvironment");
  if (((bVar1 & 1) == 0) && (iVar2 = loglevel(param_1,(SEL)"loglevel"), iVar2 < 5)) {
    logLevel_format_parameters_
              (param_1,(SEL)"logLevel:format:parameters:",0x101833078,IVar3,&stack0x00000000);
  }
  _objc_release(IVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJLogger::warnInProduction_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  IVar2 = _objc_retain(param_3);
  iVar1 = loglevel(param_1,(SEL)"loglevel");
  if (iVar1 < 5) {
    logLevel_format_parameters_
              (param_1,(SEL)"logLevel:format:parameters:",0x101833078,IVar2,&stack0x00000000);
  }
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJLogger::error_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  ID IVar3;
  
  IVar3 = _objc_retain(param_3);
  bVar1 = isProductionEnvironment(param_1,(SEL)"isProductionEnvironment");
  if (((bVar1 & 1) == 0) && (iVar2 = loglevel(param_1,(SEL)"loglevel"), iVar2 < 6)) {
    logLevel_format_parameters_
              (param_1,(SEL)"logLevel:format:parameters:",0x101833098,IVar3,&stack0x00000000);
  }
  _objc_release(IVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

void ADJLogger::assert_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  int iVar2;
  ID IVar3;
  
  IVar3 = _objc_retain(param_3);
  bVar1 = isProductionEnvironment(param_1,(SEL)"isProductionEnvironment");
  if (((bVar1 & 1) == 0) && (iVar2 = loglevel(param_1,(SEL)"loglevel"), iVar2 < 7)) {
    logLevel_format_parameters_
              (param_1,(SEL)"logLevel:format:parameters:",0x1018330b8,IVar3,&stack0x00000000);
  }
  _objc_release(IVar3);
  return;
}




/* Function Stack Size: 0x18 bytes */

int ADJLogger::logLevelFromString_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(uVar2,"isEqualToString:",&cf_verbose);
  if ((uVar3 & 1) == 0) {
    uVar3 = _objc_msgSend(uVar2,"isEqualToString:",&cf_debug);
    if ((uVar3 & 1) == 0) {
      uVar3 = _objc_msgSend(uVar2,"isEqualToString:",&cf_info);
      if ((uVar3 & 1) == 0) {
        uVar3 = _objc_msgSend(uVar2,"isEqualToString:",&cf_warn);
        if ((uVar3 & 1) == 0) {
          uVar3 = _objc_msgSend(uVar2,"isEqualToString:",&cf_error);
          if ((uVar3 & 1) == 0) {
            uVar3 = _objc_msgSend(uVar2,"isEqualToString:",&cf_assert);
            if ((uVar3 & 1) == 0) {
              iVar1 = _objc_msgSend(uVar2,"isEqualToString:",&cf_suppress);
              iVar4 = 7;
              if (iVar1 == 0) {
                iVar4 = 3;
              }
            }
            else {
              iVar4 = 6;
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
        iVar4 = 3;
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




/* Function Stack Size: 0x10 bytes */

int ADJLogger::loglevel(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_loglevel);
}




/* Function Stack Size: 0x14 bytes */

void ADJLogger::setLoglevel_(ID param_1,SEL param_2,int param_3)

{
  *(int *)(param_1 + (long)_loglevel) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJLogger::logLevelLocked(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_logLevelLocked);
}




/* Function Stack Size: 0x14 bytes */

void ADJLogger::setLogLevelLocked_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_logLevelLocked) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool ADJLogger::isProductionEnvironment(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_isProductionEnvironment);
}




/* Function Stack Size: 0x14 bytes */

void ADJLogger::setIsProductionEnvironment_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_isProductionEnvironment) = (char)param_3;
  return;
}

