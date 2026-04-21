// classes/ADJSystemProfile — 14 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

bool ADJSystemProfile::is64bit(ID param_1,SEL param_2)

{
  int iVar1;
  uint uVar2;
  size_t local_20;
  int local_14;
  
  local_14 = 0;
  local_20 = 4;
  iVar1 = _sysctlbyname("hw.cpu64bit_capable",&local_14,&local_20,(void *)0x0,0);
  if ((iVar1 == 0) ||
     (iVar1 = _sysctlbyname("hw.optional.x86_64",&local_14,&local_20,(void *)0x0,0), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    iVar1 = _sysctlbyname("hw.optional.64bitops",&local_14,&local_20,(void *)0x0,0);
    uVar2 = (uint)(iVar1 == 0);
  }
  return uVar2 & local_14 == 1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::cpuFamily(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  size_t local_30;
  int local_24;
  
  local_24 = -1;
  local_30 = 4;
  iVar1 = _sysctlbyname("hw.cpufamily",&local_24,&local_30,(void *)0x0,0);
  if (iVar1 != 0) {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"error:",&cf_FailedtoobtainCPUfamily__d_);
    _objc_release(uVar2);
    pcVar4 = (cfstringStruct *)0x0;
    goto LAB_10112e2b4;
  }
  if (local_24 < 0x1e2d6381) {
    if (local_24 < -0x311beab7) {
      if (local_24 < -0x57aee436) {
        if (local_24 == -0x7009df28) {
          pcVar4 = &cf_CPUFAMILY_ARM_11;
        }
        else if (local_24 == -0x6d04c838) {
          pcVar4 = &cf_CPUFAMILY_ARM_TWISTER;
        }
        else {
          if (local_24 != -0x69f8810f) goto LAB_10112e2c8;
          pcVar4 = &cf_CPUFAMILY_ARM_14;
        }
      }
      else if (local_24 == -0x57aee436) {
        pcVar4 = &cf_CPUFAMILY_ARM_15;
      }
      else if (local_24 == -0x55ccc6d5) {
        pcVar4 = &cf_CPUFAMILY_INTEL_6_13;
      }
      else {
        if (local_24 != -0x42e4f517) goto LAB_10112e2c8;
        pcVar4 = &cf_CPUFAMILY_ARM_12;
      }
    }
    else if (local_24 < 0) {
      if (local_24 == -0x311beab7) {
        pcVar4 = &cf_CPUFAMILY_POWERPC_G3;
      }
      else if (local_24 == -0x18cd7c52) {
        pcVar4 = &cf_CPUFAMILY_ARM_9;
      }
      else {
        if (local_24 != -0x12892756) goto LAB_10112e2c8;
        pcVar4 = &cf_CPUFAMILY_POWERPC_G5;
      }
    }
    else if (local_24 == 0) {
      pcVar4 = &cf_CPUFAMILY_UNKNOWN;
    }
    else if (local_24 == 0xcc90e64) {
      pcVar4 = &cf_CPUFAMILY_ARM_13;
    }
    else {
      if (local_24 != 0x10b282dc) goto LAB_10112e2c8;
      pcVar4 = &cf_CPUFAMILY_INTEL_HASWELL;
    }
  }
  else if (local_24 < 0x5490b78c) {
    if (local_24 < 0x37a09642) {
      if (local_24 == 0x1e2d6381) {
        pcVar4 = &cf_CPUFAMILY_ARM_SWIFT;
      }
      else if (local_24 == 0x1f65e835) {
        pcVar4 = &cf_CPUFAMILY_INTEL_IVYBRIDGE;
      }
      else {
        if (local_24 != 0x2c91a47e) goto LAB_10112e2c8;
        pcVar4 = &cf_CPUFAMILY_ARM_TYPHOON;
      }
    }
    else if (local_24 == 0x37a09642) {
      pcVar4 = &cf_CPUFAMILY_ARM_CYCLONE;
    }
    else if (local_24 == 0x37fc219f) {
      pcVar4 = &cf_CPUFAMILY_INTEL_SKYLAKE;
    }
    else {
      if (local_24 != 0x53b005f5) goto LAB_10112e2c8;
      pcVar4 = &cf_CPUFAMILY_ARM_XSCALE;
    }
  }
  else if (local_24 < 0x67ceee93) {
    if (local_24 == 0x5490b78c) {
      pcVar4 = &cf_CPUFAMILY_INTEL_SANDYBRIDGE;
    }
    else if (local_24 == 0x573b5eec) {
      pcVar4 = &cf_CPUFAMILY_INTEL_WESTMERE;
    }
    else {
      if (local_24 != 0x582ed09c) goto LAB_10112e2c8;
      pcVar4 = &cf_CPUFAMILY_INTEL_BROADWELL;
    }
  }
  else if (local_24 < 0x77c184ae) {
    if (local_24 == 0x67ceee93) {
      pcVar4 = &cf_CPUFAMILY_ARM_HURRICANE;
    }
    else {
      if (local_24 != 0x6b5a4cd2) {
LAB_10112e2c8:
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_UnknownCPUfamily_d);
        pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
        _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar2,"warn:",&cf___);
        _objc_release(uVar2);
        goto LAB_10112e2b4;
      }
      pcVar4 = &cf_CPUFAMILY_INTEL_NEHALEM;
    }
  }
  else if (local_24 == 0x77c184ae) {
    pcVar4 = &cf_CPUFAMILY_POWERPC_G4;
  }
  else {
    if (local_24 != 0x78ea4fbc) goto LAB_10112e2c8;
    pcVar4 = &cf_CPUFAMILY_INTEL_PENRYN;
  }
  _objc_retain(pcVar4);
LAB_10112e2b4:
  IVar3 = _objc_autoreleaseReturnValue(pcVar4);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

int ADJSystemProfile::cpuCount(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  size_t local_30;
  int local_24;
  
  local_24 = 0;
  local_30 = 4;
  iVar1 = _sysctlbyname("hw.ncpu",&local_24,&local_30,(void *)0x0,0);
  if (iVar1 != 0) {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"error:",&cf_FailedtoobtainCPUcount__d_);
    _objc_release(uVar2);
    local_24 = 1;
  }
  return local_24;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::machineArch(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&objc::class_t::ADJSystemProfile,"readSysctlbByNameString:errorLog:",
                        "hw.machinearch",&cf_Failedtoobtainmachinearch);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::machineModel(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&objc::class_t::ADJSystemProfile,"readSysctlbByNameString:errorLog:",
                        "hw.model",&cf_Failedtoobtainmachinemodel);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::cpuBrand(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&objc::class_t::ADJSystemProfile,"readSysctlbByNameString:errorLog:",
                        "machdep.cpu.brand_string",&cf_FailedtoobtainCPUbrand);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::cpuFeatures(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&objc::class_t::ADJSystemProfile,"readSysctlbByNameString:errorLog:",
                        "machdep.cpu.features",&cf_FailedtoobtainCPUfeatures);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::cpuVendor(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&objc::class_t::ADJSystemProfile,"readSysctlbByNameString:errorLog:",
                        "machdep.cpu.vendor",&cf_FailedtoobtainCPUvendor);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::osVersion(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&objc::class_t::ADJSystemProfile,"readSysctlbByNameString:errorLog:",
                        "kern.osversion",&cf_FailedtoobtainOSversion);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::appleLanguage(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  
  _objc_msgSend(&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"objectForKey:",&cf_AppleLanguages);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _objc_msgSend(uVar2,"count");
  if (lVar3 == 0) {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar4,"error:",&cf_Failedtoobtainpreferredlanguage);
    _objc_release(uVar4);
    uVar4 = 0;
  }
  else {
    _objc_msgSend(uVar2,"objectAtIndex:",0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

long_long ADJSystemProfile::cpuSpeed(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  long_long lVar3;
  int local_38 [2];
  size_t local_30;
  long local_28;
  
  local_30 = 8;
  local_28 = 0;
  local_38[0] = 6;
  local_38[1] = 0xf;
  iVar1 = _sysctl(local_38,2,&local_28,&local_30,(void *)0x0,0);
  if (iVar1 == 0) {
    lVar3 = local_28 / 1000000;
  }
  else {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"error:",&cf_FailedtoobtainCPUspeed__d_);
    _objc_release(uVar2);
    lVar3 = 0xffffffffffffffff;
  }
  return lVar3;
}




/* Function Stack Size: 0x10 bytes */

long_long ADJSystemProfile::ramsize(ID param_1,SEL param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long_long lVar4;
  size_t local_30;
  long local_28;
  
  local_30 = 8;
  local_28 = 0;
  iVar2 = _sysctlbyname("hw.memsize",&local_28,&local_30,(void *)0x0,0);
  if (iVar2 == 0) {
    lVar1 = local_28 + 0xfffff;
    if (-1 < local_28) {
      lVar1 = local_28;
    }
    lVar4 = lVar1 >> 0x14;
  }
  else {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"error:",&cf_FailedtoobtainRAMsize__d_);
    _objc_release(uVar3);
    lVar4 = 0xffffffffffffffff;
  }
  return lVar4;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::cpuType(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ID IVar5;
  size_t local_40;
  undefined4 local_34;
  
  local_34 = 0xffffffff;
  local_40 = 4;
  iVar1 = _sysctlbyname("hw.cputype",&local_34,&local_40,(void *)0x0,0);
  if (iVar1 == 0) {
    _objc_msgSend(&objc::class_t::ADJSystemProfile,"readCpuTypeSubtype:readSubType:cpusubtype:",
                  local_34,0,0);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_UnknownCPUtype_d);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,"warn:",&cf___);
      _objc_release(uVar4);
    }
    else {
      uVar2 = _objc_retain(lVar3);
    }
    _objc_release(lVar3);
  }
  else {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"error:",&cf_FailedtoobtainCPUtype__d_);
    _objc_release(uVar2);
    uVar2 = 0;
  }
  IVar5 = _objc_autoreleaseReturnValue(uVar2);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID ADJSystemProfile::cpuSubtype(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined4 local_44;
  size_t local_40;
  undefined4 local_34;
  
  local_34 = 0xffffffff;
  local_40 = 4;
  iVar1 = _sysctlbyname("hw.cputype",&local_34,&local_40,(void *)0x0,0);
  if (iVar1 == 0) {
    local_44 = 0xffffffff;
    local_40 = 4;
    iVar1 = _sysctlbyname("hw.cpusubtype",&local_44,&local_40,(void *)0x0,0);
    if (iVar1 == 0) {
      _objc_msgSend(&objc::class_t::ADJSystemProfile,"readCpuTypeSubtype:readSubType:cpusubtype:",
                    local_34,1,local_44);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      if (lVar4 == 0) {
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_UnknownCPUsubtype_d);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,"warn:",&cf___);
        _objc_release(uVar5);
      }
      else {
        uVar2 = _objc_retain(lVar4);
      }
      _objc_release(lVar4);
      goto LAB_10112eab4;
    }
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    pcVar6 = &cf_FailedtoobtainCPUsubtype__d_;
  }
  else {
    _objc_msgSend(&objc::class_t::ADJAdjustFactory,"logger");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    pcVar6 = &cf_FailedtoobtainCPUtype__d_;
  }
  _objc_msgSend(uVar2,"error:",pcVar6);
  _objc_release(uVar2);
  uVar2 = 0;
LAB_10112eab4:
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}

