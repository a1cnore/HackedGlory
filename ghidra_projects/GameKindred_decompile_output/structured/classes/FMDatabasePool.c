// classes/FMDatabasePool — 24 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID FMDatabasePool::databasePoolWithPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_retain(param_3);
  IVar2 = _objc_msgSend(param_1,"alloc");
  IVar2 = initWithPath_(IVar2,(SEL)"initWithPath:",IVar1);
  _objc_release(IVar1);
  IVar1 = _objc_autoreleaseReturnValue(IVar2);
  return IVar1;
}




/* Function Stack Size: 0x1c bytes */

ID FMDatabasePool::databasePoolWithPath_flags_(ID param_1,SEL param_2,ID param_3,int param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_retain(param_3);
  IVar2 = _objc_msgSend(param_1,"alloc");
  IVar2 = initWithPath_flags_(IVar2,(SEL)"initWithPath:flags:",IVar1,param_4);
  _objc_release(IVar1);
  IVar1 = _objc_autoreleaseReturnValue(IVar2);
  return IVar1;
}




/* Function Stack Size: 0x1c bytes */

ID FMDatabasePool::initWithPath_flags_(ID param_1,SEL param_2,ID param_3,int param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  char *label;
  dispatch_queue_t pdVar4;
  undefined8 uVar5;
  ID local_50;
  class_t *local_48;
  
  uVar1 = _objc_retain(param_3);
  local_48 = &objc::class_t::FMDatabasePool;
  local_50 = param_1;
  IVar2 = _objc_msgSendSuper2(&local_50,"init");
  if (IVar2 != 0) {
    uVar3 = _objc_msgSend(uVar1,"copy");
    uVar5 = *(undefined8 *)(IVar2 + (long)_path);
    *(undefined8 *)(IVar2 + (long)_path) = uVar3;
    _objc_release(uVar5);
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_fmdb___);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_retainAutorelease();
    label = (char *)_objc_msgSend(uVar3,"UTF8String");
    pdVar4 = _dispatch_queue_create(label,(dispatch_queue_attr_t)0x0);
    uVar5 = *(undefined8 *)(IVar2 + (long)_lockQueue);
    *(dispatch_queue_t *)(IVar2 + (long)_lockQueue) = pdVar4;
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"array");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(IVar2 + (long)_databaseInPool);
    *(undefined8 *)(IVar2 + (long)_databaseInPool) = uVar3;
    _objc_release(uVar5);
    _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"array");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(IVar2 + (long)_databaseOutPool);
    *(undefined8 *)(IVar2 + (long)_databaseOutPool) = uVar3;
    _objc_release(uVar5);
    *(int *)(IVar2 + (long)_openFlags) = param_4;
  }
  _objc_release(uVar1);
  return IVar2;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabasePool::initWithPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = initWithPath_flags_(param_1,(SEL)"initWithPath:flags:",param_3,6);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabasePool::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = initWithPath_(param_1,(SEL)"initWithPath:",0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void FMDatabasePool::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  *(undefined8 *)(param_1 + (long)_delegate) = 0;
  if (*(long *)(param_1 + (long)_lockQueue) != 0) {
    *(undefined8 *)(param_1 + (long)_lockQueue) = 0;
    _objc_release();
  }
  local_28 = &objc::class_t::FMDatabasePool;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabasePool::executeLocked_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  _dispatch_sync(*(undefined8 *)(param_1 + (long)_lockQueue),param_3,param_3,param_4);
  return;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabasePool::pushDatabaseBackInPool_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lVar1 = _objc_retain(param_3);
  if (lVar1 != 0) {
    local_50 = PTR___NSConcreteStackBlock_101444138;
    local_48 = 0xc2000000;
    uStack_44 = 0;
    local_40 = FUN_10113d56c;
    local_38 = &DAT_101831180;
    uVar2 = _objc_retain(param_1);
    local_30 = uVar2;
    local_28 = _objc_retain(lVar1);
    _objc_msgSend(uVar2,"executeLocked:",&local_50);
    _objc_release(local_28);
    _objc_release(local_30);
  }
  _objc_release(lVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabasePool::db(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  code *local_30;
  undefined8 local_28;
  
  local_58 = &local_50;
  local_50 = 0;
  local_40 = 0x32000000;
  local_3c = 0x30;
  local_38 = FUN_10113d778;
  local_30 = FUN_10113d788;
  local_80 = PTR___NSConcreteStackBlock_101444138;
  local_78 = 0xc2000000;
  local_28 = 0;
  local_74 = 0;
  local_70 = FUN_10113d790;
  local_68 = &DAT_1018311b0;
  local_48 = local_58;
  local_60 = _objc_retain();
  _objc_msgSend(local_60,"executeLocked:",&local_80);
  uVar1 = _objc_retain(local_48[5]);
  _objc_release(local_60);
  __Block_object_dispose(&local_50,8);
  _objc_release(local_28);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

unsigned_long_long FMDatabasePool::countOfCheckedInDatabases(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_40 = 0;
  local_48 = &local_40;
  local_30 = 0x20000000;
  local_2c = 0x20;
  local_70 = PTR___NSConcreteStackBlock_101444138;
  local_68 = 0xc2000000;
  uStack_64 = 0;
  local_60 = FUN_10113dba4;
  local_58 = &DAT_1018311e0;
  local_38 = local_48;
  local_50 = _objc_retain();
  _objc_msgSend(local_50,"executeLocked:",&local_70);
  uVar1 = local_38[3];
  _objc_release(local_50);
  __Block_object_dispose(&local_40,8);
  return uVar1;
}




/* Function Stack Size: 0x10 bytes */

unsigned_long_long FMDatabasePool::countOfCheckedOutDatabases(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_40 = 0;
  local_48 = &local_40;
  local_30 = 0x20000000;
  local_2c = 0x20;
  local_70 = PTR___NSConcreteStackBlock_101444138;
  local_68 = 0xc2000000;
  uStack_64 = 0;
  local_60 = FUN_10113dd0c;
  local_58 = &DAT_101831210;
  local_38 = local_48;
  local_50 = _objc_retain();
  _objc_msgSend(local_50,"executeLocked:",&local_70);
  uVar1 = local_38[3];
  _objc_release(local_50);
  __Block_object_dispose(&local_40,8);
  return uVar1;
}




/* Function Stack Size: 0x10 bytes */

unsigned_long_long FMDatabasePool::countOfOpenDatabases(ID param_1,SEL param_2)

{
  unsigned_long_long uVar1;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_40 = 0;
  local_48 = &local_40;
  local_30 = 0x20000000;
  local_2c = 0x20;
  local_70 = PTR___NSConcreteStackBlock_101444138;
  local_68 = 0xc2000000;
  uStack_64 = 0;
  local_60 = FUN_10113de74;
  local_58 = &DAT_101831240;
  local_38 = local_48;
  local_50 = _objc_retain();
  _objc_msgSend(local_50,"executeLocked:",&local_70);
  uVar1 = local_38[3];
  _objc_release(local_50);
  __Block_object_dispose(&local_40,8);
  return uVar1;
}




/* Function Stack Size: 0x10 bytes */

void FMDatabasePool::releaseAllDatabases(ID param_1,SEL param_2)

{
  undefined *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  code *local_28;
  undefined *local_20;
  undefined8 local_18;
  
  local_38 = PTR___NSConcreteStackBlock_101444138;
  local_30 = 0xc2000000;
  uStack_2c = 0;
  local_28 = FUN_10113dfac;
  local_20 = &DAT_101831270;
  local_18 = _objc_retain();
  _objc_msgSend(local_18,"executeLocked:",&local_38);
  _objc_release(local_18);
  return;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabasePool::inDatabase_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  long lVar1;
  ID IVar2;
  
  lVar1 = _objc_retain(param_3,param_2,param_3,param_4);
  db(param_1,(SEL)"db");
  IVar2 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(param_3,IVar2);
  _objc_release(lVar1);
  pushDatabaseBackInPool_(param_1,(SEL)"pushDatabaseBackInPool:",IVar2);
  _objc_release(IVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabasePool::inDeferredTransaction_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined4 in_w4;
  
  beginTransaction_withBlock_(param_1,(SEL)"beginTransaction:withBlock:",1,param_3,in_w4);
  return;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabasePool::inTransaction_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined4 in_w4;
  
  beginTransaction_withBlock_(param_1,(SEL)"beginTransaction:withBlock:",0,param_3,in_w4);
  return;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabasePool::inSavePoint_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char local_41;
  
  lVar1 = _objc_retain(param_3,param_2,param_3,param_4);
  DAT_101ea60d0 = DAT_101ea60d0 + 1;
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_savePoint_ld);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_41 = '\0';
  db(param_1,(SEL)"db");
  IVar3 = _objc_retainAutoreleasedReturnValue();
  local_50 = 0;
  uVar4 = _objc_msgSend(IVar3,"startSavePointWithName:error:",uVar2,&local_50);
  uVar5 = _objc_retain(local_50);
  if ((uVar4 & 1) == 0) {
    pushDatabaseBackInPool_(param_1,(SEL)"pushDatabaseBackInPool:",IVar3);
  }
  else {
    (**(code **)(lVar1 + 0x10))(lVar1,IVar3,&local_41);
    uVar6 = uVar5;
    if (local_41 != '\0') {
      local_58 = uVar5;
      _objc_msgSend(IVar3,"rollbackToSavePointWithName:error:",uVar2,&local_58);
      uVar6 = _objc_retain(local_58);
      _objc_release(uVar5);
    }
    local_60 = uVar6;
    _objc_msgSend(IVar3,"releaseSavePointWithName:error:",uVar2,&local_60);
    uVar5 = _objc_retain(local_60);
    _objc_release(uVar6);
    pushDatabaseBackInPool_(param_1,(SEL)"pushDatabaseBackInPool:",IVar3);
  }
  uVar5 = _objc_retain(uVar5);
  _objc_release();
  _objc_release(IVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar5);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabasePool::path(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_path,1);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabasePool::setPath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_atomic();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabasePool::delegate(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_delegate);
}




/* Function Stack Size: 0x18 bytes */

void FMDatabasePool::setDelegate_(ID param_1,SEL param_2,ID param_3)

{
  *(ID *)(param_1 + (long)_delegate) = param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

unsigned_long_long FMDatabasePool::maximumNumberOfDatabasesToCreate(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + (long)_maximumNumberOfDatabasesToCreate);
}




/* Function Stack Size: 0x10 bytes */

int FMDatabasePool::openFlags(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_openFlags);
}




/* Function Stack Size: 0x10 bytes */

void FMDatabasePool::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_databaseOutPool,0);
  _objc_storeStrong(param_1 + (long)_databaseInPool,0);
  _objc_storeStrong(param_1 + (long)_lockQueue,0);
  _objc_storeStrong(param_1 + (long)_path,0);
  return;
}

