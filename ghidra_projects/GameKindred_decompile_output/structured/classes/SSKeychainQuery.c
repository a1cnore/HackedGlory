// classes/SSKeychainQuery — 23 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

bool SSKeychainQuery::save_(ID param_1,SEL param_2,ID *param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  
  IVar2 = service(param_1,(SEL)"service");
  if (((IVar2 != 0) && (IVar2 = account(param_1,(SEL)"account"), IVar2 != 0)) &&
     (IVar2 = passwordData(param_1,(SEL)"passwordData"), IVar2 != 0)) {
    deleteItem_(param_1,(SEL)"deleteItem:",(ID *)0x0);
    IVar2 = query(param_1,(SEL)"query");
    IVar3 = passwordData(param_1,(SEL)"passwordData");
    _objc_msgSend(IVar2,"setObject:forKey:",IVar3,*(undefined8 *)PTR__kSecValueData_101444360);
    IVar3 = label(param_1,(SEL)"label");
    if (IVar3 != 0) {
      IVar3 = label(param_1,(SEL)"label");
      _objc_msgSend(IVar2,"setObject:forKey:",IVar3,*(undefined8 *)PTR__kSecAttrLabel_1014442e0);
    }
    lVar4 = _objc_msgSend(&objc::class_t::SSKeychain,"accessibilityType");
    if (lVar4 != 0) {
      _objc_msgSend(IVar2,"setObject:forKey:",lVar4,*(undefined8 *)PTR__kSecAttrAccessible_1014442c8
                   );
    }
    iVar1 = _SecItemAdd(IVar2,0);
    if ((iVar1 != 0) && (param_3 != (ID *)0x0)) {
      IVar2 = _objc_msgSend(param_1,"class");
      IVar2 = errorWithCode_(IVar2,(SEL)"errorWithCode:",iVar1);
      *param_3 = IVar2;
    }
    return (uint)(iVar1 == 0);
  }
  if (param_3 != (ID *)0x0) {
    IVar2 = _objc_msgSend(param_1,"class");
    IVar2 = errorWithCode_(IVar2,(SEL)"errorWithCode:",0xfffffc17);
    *param_3 = IVar2;
  }
  return 0;
}




/* Function Stack Size: 0x18 bytes */

bool SSKeychainQuery::deleteItem_(ID param_1,SEL param_2,ID *param_3)

{
  int iVar1;
  uint uVar2;
  ID IVar3;
  
  IVar3 = service(param_1,(SEL)"service");
  if ((IVar3 == 0) || (IVar3 = account(param_1,(SEL)"account"), IVar3 == 0)) {
    if (param_3 == (ID *)0x0) {
      uVar2 = 0;
    }
    else {
      IVar3 = _objc_msgSend(param_1,"class");
      IVar3 = errorWithCode_(IVar3,(SEL)"errorWithCode:",0xfffffc17);
      uVar2 = 0;
      *param_3 = IVar3;
    }
  }
  else {
    query(param_1,(SEL)"query");
    iVar1 = _SecItemDelete();
    if (iVar1 != 0 && param_3 != (ID *)0x0) {
      IVar3 = _objc_msgSend(param_1,"class");
      IVar3 = errorWithCode_(IVar3,(SEL)"errorWithCode:",iVar1);
      *param_3 = IVar3;
    }
    uVar2 = (uint)(iVar1 == 0);
  }
  return uVar2;
}




/* Function Stack Size: 0x18 bytes */

ID SSKeychainQuery::fetchAll_(ID param_1,SEL param_2,ID *param_3)

{
  int iVar1;
  ID IVar2;
  undefined8 uVar3;
  ID local_38;
  
  IVar2 = query(param_1,(SEL)"query");
  uVar3 = _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
  _objc_msgSend(IVar2,"setObject:forKey:",uVar3,*(undefined8 *)PTR__kSecReturnAttributes_101444348);
  _objc_msgSend(IVar2,"setObject:forKey:",*(undefined8 *)PTR__kSecMatchLimitAll_101444330,
                *(undefined8 *)PTR__kSecMatchLimit_101444328);
  local_38 = 0;
  iVar1 = _SecItemCopyMatching(IVar2,&local_38);
  if (iVar1 != 0 && param_3 != (ID *)0x0) {
    IVar2 = _objc_msgSend(param_1,"class");
    IVar2 = errorWithCode_(IVar2,(SEL)"errorWithCode:",iVar1);
    local_38 = 0;
    *param_3 = IVar2;
  }
  return local_38;
}




/* Function Stack Size: 0x18 bytes */

bool SSKeychainQuery::fetch_(ID param_1,SEL param_2,ID *param_3)

{
  int iVar1;
  uint uVar2;
  ID IVar3;
  undefined8 uVar4;
  ID local_38;
  
  IVar3 = service(param_1,(SEL)"service");
  if ((IVar3 == 0) || (IVar3 = account(param_1,(SEL)"account"), IVar3 == 0)) {
    if (param_3 == (ID *)0x0) {
      uVar2 = 0;
    }
    else {
      IVar3 = _objc_msgSend(param_1,"class");
      IVar3 = errorWithCode_(IVar3,(SEL)"errorWithCode:",0xfffffc17);
      uVar2 = 0;
      *param_3 = IVar3;
    }
  }
  else {
    local_38 = 0;
    IVar3 = query(param_1,(SEL)"query");
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithBool:",1);
    _objc_msgSend(IVar3,"setObject:forKey:",uVar4,*(undefined8 *)PTR__kSecReturnData_101444350);
    _objc_msgSend(IVar3,"setObject:forKey:",*(undefined8 *)PTR__kSecMatchLimitOne_101444338,
                  *(undefined8 *)PTR__kSecMatchLimit_101444328);
    iVar1 = _SecItemCopyMatching(IVar3,&local_38);
    uVar2 = (uint)(iVar1 != 0 && param_3 != (ID *)0x0);
    if (uVar2 == 1) {
      IVar3 = _objc_msgSend(param_1,"class");
      IVar3 = errorWithCode_(IVar3,(SEL)"errorWithCode:",iVar1);
      *param_3 = IVar3;
    }
    else {
      setPasswordData_(param_1,(SEL)"setPasswordData:",local_38);
    }
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}




/* Function Stack Size: 0x18 bytes */

void SSKeychainQuery::setPasswordObject_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(&_OBJC_CLASS___NSKeyedArchiver,"archivedDataWithRootObject:");
  setPasswordData_(param_1,(SEL)"setPasswordData:",IVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID SSKeychainQuery::passwordObject(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  
  IVar1 = passwordData(param_1,(SEL)"passwordData");
  lVar2 = _objc_msgSend(IVar1,"length");
  if (lVar2 != 0) {
    IVar1 = passwordData(param_1,(SEL)"passwordData");
    IVar1 = _objc_msgSend(&_OBJC_CLASS___NSKeyedUnarchiver,"unarchiveObjectWithData:",IVar1);
    return IVar1;
  }
  return 0;
}




/* Function Stack Size: 0x18 bytes */

void SSKeychainQuery::setPassword_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_3,"dataUsingEncoding:",4);
  setPasswordData_(param_1,(SEL)"setPasswordData:",IVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID SSKeychainQuery::password(ID param_1,SEL param_2)

{
  ID IVar1;
  long lVar2;
  undefined8 uVar3;
  
  IVar1 = passwordData(param_1,(SEL)"passwordData");
  lVar2 = _objc_msgSend(IVar1,"length");
  if (lVar2 != 0) {
    uVar3 = _objc_alloc(&_OBJC_CLASS___NSString);
    IVar1 = passwordData(param_1,(SEL)"passwordData");
    IVar1 = _objc_msgSend(uVar3,"initWithData:encoding:",IVar1,4);
    return IVar1;
  }
  return 0;
}




/* Function Stack Size: 0x10 bytes */

bool SSKeychainQuery::isSynchronizationAvailable(ID param_1,SEL param_2)

{
  return (bool)(993.0 < (double)(long)*(double *)PTR__NSFoundationVersionNumber_101444098);
}




/* Function Stack Size: 0x10 bytes */

ID SSKeychainQuery::query(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  unsigned_long_long uVar4;
  undefined8 uVar5;
  
  IVar2 = _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithCapacity:",3);
  _objc_msgSend(IVar2,"setObject:forKey:",*(undefined8 *)PTR__kSecClassGenericPassword_101444308,
                *(undefined8 *)PTR__kSecClass_101444300);
  IVar3 = service(param_1,(SEL)"service");
  if (IVar3 != 0) {
    IVar3 = service(param_1,(SEL)"service");
    _objc_msgSend(IVar2,"setObject:forKey:",IVar3,*(undefined8 *)PTR__kSecAttrService_1014442e8);
  }
  IVar3 = account(param_1,(SEL)"account");
  if (IVar3 != 0) {
    IVar3 = account(param_1,(SEL)"account");
    _objc_msgSend(IVar2,"setObject:forKey:",IVar3,*(undefined8 *)PTR__kSecAttrAccount_1014442d8);
  }
  IVar3 = accessGroup(param_1,(SEL)"accessGroup");
  if (IVar3 != 0) {
    IVar3 = accessGroup(param_1,(SEL)"accessGroup");
    _objc_msgSend(IVar2,"setObject:forKey:",IVar3,*(undefined8 *)PTR__kSecAttrAccessGroup_1014442c0)
    ;
  }
  IVar3 = _objc_msgSend(param_1,"class");
  bVar1 = isSynchronizationAvailable(IVar3,(SEL)"isSynchronizationAvailable");
  if (bVar1 == 0) {
    return IVar2;
  }
  uVar4 = synchronizationMode(param_1,(SEL)"synchronizationMode");
  if (uVar4 != 0) {
    if (uVar4 == 2) {
      uVar5 = 1;
    }
    else {
      if (uVar4 != 1) goto LAB_1011467d8;
      uVar5 = 0;
    }
    _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithBool:",uVar5);
  }
LAB_1011467d8:
  _objc_msgSend(IVar2,"setObject:forKey:");
  return IVar2;
}




/* Function Stack Size: 0x14 bytes */

ID SSKeychainQuery::errorWithCode_(ID param_1,SEL param_2,int param_3)

{
  ID IVar1;
  undefined8 uVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  undefined1 auVar5 [16];
  undefined8 local_38;
  long lStack_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_101444218;
  if ((int)param_3 < -0x3e9) {
    switch(param_3) {
    case 0xffff9d2c:
      pcVar4 = &cf_errSecItemNotFound;
      break;
    case 0xffff9d2d:
      pcVar4 = &cf_errSecDuplicateItem;
      break;
    case 0xffff9d2e:
    case 0xffff9d2f:
    case 0xffff9d30:
    case 0xffff9d31:
    case 0xffff9d32:
    case 0xffff9d34:
switchD_101146854_caseD_ffff9d2e:
      pcVar4 = &cf_errSecDefault;
      break;
    case 0xffff9d33:
      pcVar4 = &cf_errSecAuthFailed;
      break;
    case 0xffff9d35:
      pcVar4 = &cf_errSecNotAvailable;
      break;
    default:
      if (param_3 == 0xffff995d) {
        pcVar4 = &cf_errSecDecode;
      }
      else {
        if (param_3 != 0xffff9d24) goto switchD_101146854_caseD_ffff9d2e;
        pcVar4 = &cf_errSecInteractionNotAllowed;
      }
    }
  }
  else if ((int)param_3 < -0x32) {
    if (param_3 == 0xfffffc17) {
      pcVar4 = &cf_SSKeychainErrorBadArguments;
    }
    else {
      if (param_3 != 0xffffff94) goto switchD_101146854_caseD_ffff9d2e;
      pcVar4 = &cf_errSecAllocate;
    }
  }
  else if (param_3 == 0xffffffce) {
    pcVar4 = &cf_errSecParam;
  }
  else {
    if (param_3 == 0) {
      IVar1 = 0;
      goto LAB_1011469bc;
    }
    if (param_3 != 0xfffffffc) goto switchD_101146854_caseD_ffff9d2e;
    pcVar4 = &cf_errSecUnimplemented;
  }
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSBundle,"mainBundle");
  lVar3 = _objc_msgSend(uVar2,"localizedStringForKey:value:table:",pcVar4,&cf___,&cf_SSKeychain);
  if (lVar3 == 0) {
    uVar2 = 0;
  }
  else {
    local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_1014440b0;
    lStack_30 = lVar3;
    uVar2 = _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObjects:forKeys:count:",
                          &lStack_30,&local_38,1);
  }
  auVar5 = _objc_msgSend(&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",
                         &cf_com_samsoffes_sskeychain,(long)(int)param_3,uVar2);
  param_2 = auVar5._8_8_;
  IVar1 = auVar5._0_8_;
LAB_1011469bc:
  if (*(long *)PTR____stack_chk_guard_101444218 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(IVar1,param_2);
  }
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID SSKeychainQuery::account(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}




/* Function Stack Size: 0x18 bytes */

void SSKeychainQuery::setAccount_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID SSKeychainQuery::service(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}




/* Function Stack Size: 0x18 bytes */

void SSKeychainQuery::setService_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID SSKeychainQuery::label(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}




/* Function Stack Size: 0x18 bytes */

void SSKeychainQuery::setLabel_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID SSKeychainQuery::passwordData(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}




/* Function Stack Size: 0x18 bytes */

void SSKeychainQuery::setPasswordData_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID SSKeychainQuery::accessGroup(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}




/* Function Stack Size: 0x18 bytes */

void SSKeychainQuery::setAccessGroup_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}




/* Function Stack Size: 0x10 bytes */

unsigned_long_long SSKeychainQuery::synchronizationMode(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0x30);
}




/* Function Stack Size: 0x18 bytes */

void SSKeychainQuery::setSynchronizationMode_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0x30) = param_3;
  return;
}

