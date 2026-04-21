// classes/FMDatabaseQueue — 17 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID FMDatabaseQueue::databaseQueueWithPath_(ID param_1,SEL param_2,ID param_3)

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

ID FMDatabaseQueue::databaseQueueWithPath_flags_(ID param_1,SEL param_2,ID param_3,int param_4)

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




/* Function Stack Size: 0x10 bytes */

CLASS FMDatabaseQueue::databaseClass(ID param_1,SEL param_2)

{
  CLASS CVar1;
  
  CVar1 = _objc_msgSend(&objc::class_t::FMDatabase,"class");
  return CVar1;
}




/* Function Stack Size: 0x1c bytes */

ID FMDatabaseQueue::initWithPath_flags_(ID param_1,SEL param_2,ID param_3,int param_4)

{
  undefined8 uVar1;
  void *context;
  undefined8 uVar2;
  ulong uVar3;
  char *label;
  dispatch_queue_t pdVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  ID local_50;
  class_t *local_48;
  
  uVar1 = _objc_retain(param_3);
  local_48 = &objc::class_t::FMDatabaseQueue;
  local_50 = param_1;
  context = (void *)_objc_msgSendSuper2(&local_50,"init");
  if (context != (void *)0x0) {
    uVar2 = _objc_msgSend(context,"class");
    uVar2 = _objc_msgSend(uVar2,"databaseClass");
    _objc_msgSend(uVar2,"databaseWithPath:",uVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    lVar7 = (long)_db;
    uVar6 = *(undefined8 *)((long)context + lVar7);
    *(undefined8 *)((long)context + lVar7) = uVar2;
    _objc_release(uVar6);
    uVar3 = _objc_msgSend(*(undefined8 *)((long)context + lVar7),"openWithFlags:",param_4);
    if ((uVar3 & 1) == 0) {
      _NSLog(&cf_Couldnotcreatedatabasequeueforpath__);
      IVar5 = 0;
      goto LAB_101139138;
    }
    lVar7 = (long)_path;
    uVar2 = _objc_retain(uVar1);
    uVar6 = *(undefined8 *)((long)context + lVar7);
    *(undefined8 *)((long)context + lVar7) = uVar2;
    _objc_release(uVar6);
    _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_fmdb___);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_retainAutorelease();
    label = (char *)_objc_msgSend(uVar2,"UTF8String");
    pdVar4 = _dispatch_queue_create(label,(dispatch_queue_attr_t)0x0);
    lVar7 = (long)_queue;
    uVar6 = *(undefined8 *)((long)context + lVar7);
    *(dispatch_queue_t *)((long)context + lVar7) = pdVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _dispatch_queue_set_specific
              (*(dispatch_queue_t *)((long)context + lVar7),&PTR_LOOP_101831060,context,
               (dispatch_function_t)0x0);
    *(int *)((long)context + (long)_openFlags) = param_4;
  }
  IVar5 = _objc_retain(context);
LAB_101139138:
  _objc_release(uVar1);
  _objc_release(context);
  return IVar5;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabaseQueue::initWithPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = initWithPath_flags_(param_1,(SEL)"initWithPath:flags:",param_3,6);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabaseQueue::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = initWithPath_(param_1,(SEL)"initWithPath:",0);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void FMDatabaseQueue::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  if (*(long *)(param_1 + (long)_queue) != 0) {
    *(undefined8 *)(param_1 + (long)_queue) = 0;
    _objc_release();
  }
  local_28 = &objc::class_t::FMDatabaseQueue;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

int FMDatabaseQueue::close(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  
  uVar2 = *(undefined8 *)((ulong)(uint)param_1 + (long)_queue);
  local_48 = PTR___NSConcreteStackBlock_101444138;
  local_40 = 0xc2000000;
  uStack_3c = 0;
  local_38 = FUN_101139260;
  local_30 = &DAT_101831070;
  local_28 = _objc_retain();
  _dispatch_sync(uVar2,&local_48);
  iVar1 = _objc_release(local_28);
  return iVar1;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabaseQueue::database(ID param_1,SEL param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  ID IVar4;
  SEL extraout_x1;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = (long)_db;
  lVar2 = *(long *)(param_1 + lVar6);
  if (lVar2 == 0) {
    _objc_msgSend(&objc::class_t::FMDatabase,"databaseWithPath:",
                  *(undefined8 *)(param_1 + (long)_path));
    uVar3 = _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar3;
    _objc_release(uVar5);
    iVar1 = _objc_msgSend(*(undefined8 *)(param_1 + lVar6),"openWithFlags:",
                          *(undefined4 *)(param_1 + (long)_openFlags));
    if (iVar1 == 0) {
      _NSLog(&cf_FMDatabaseQueuecouldnotreopendatabaseforpath__);
      uVar3 = *(undefined8 *)(param_1 + lVar6);
      *(undefined8 *)(param_1 + lVar6) = 0;
      _objc_release(uVar3);
      uVar3 = 0;
      goto LAB_101139374;
    }
    lVar2 = *(long *)(param_1 + (long)_db);
    param_2 = extraout_x1;
  }
  uVar3 = _objc_retain(lVar2,param_2);
LAB_101139374:
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabaseQueue::inDatabase_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar1 = _objc_retain(param_3,param_2,param_3,param_4);
  _dispatch_get_specific(&PTR_LOOP_101831060);
  IVar2 = _objc_retainAutoreleasedReturnValue();
  if (IVar2 != param_1) {
    uVar3 = *(undefined8 *)(param_1 + (long)_queue);
    local_60 = PTR___NSConcreteStackBlock_101444138;
    local_58 = 0xc2000000;
    uStack_54 = 0;
    local_50 = FUN_101139488;
    local_48 = &DAT_1018310a0;
    local_40 = _objc_retain(param_1);
    local_38 = uVar1;
    uVar1 = _objc_retain(uVar1);
    _dispatch_sync(uVar3,&local_60);
    _objc_release(local_38);
    _objc_release(local_40);
    _objc_release(uVar1);
    _objc_release(IVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("-[FMDatabaseQueue inDatabase:]",
                "/Users/tommy/Downloads/Amplitude-iOS-master/lib/fmdb/FMDatabaseQueue.m",0x8f,
                "currentSyncQueue != self && \"inDatabase: was called reentrantly on the same queue, which would lead to a deadlock\""
               );
}




/* Function Stack Size: 0x18 bytes */

void FMDatabaseQueue::inDeferredTransaction_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined4 in_w4;
  
  beginTransaction_withBlock_(param_1,(SEL)"beginTransaction:withBlock:",1,param_3,in_w4);
  return;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabaseQueue::inTransaction_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined4 in_w4;
  
  beginTransaction_withBlock_(param_1,(SEL)"beginTransaction:withBlock:",0,param_3,in_w4);
  return;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabaseQueue::inSavePoint_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  code *pcStack_40;
  undefined8 local_38;
  
  uVar1 = _objc_retain(param_3,param_2,param_3,param_4);
  local_60 = 0;
  local_50 = 0x32000000;
  local_4c = 0x30;
  local_48 = FUN_1011398a8;
  pcStack_40 = FUN_1011398b8;
  local_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + (long)_queue);
  local_98 = PTR___NSConcreteStackBlock_101444138;
  local_90 = 0xc2000000;
  uStack_8c = 0;
  local_88 = FUN_1011398c0;
  local_80 = &DAT_101831100;
  local_58 = &local_60;
  local_78 = _objc_retain(param_1);
  local_70 = uVar1;
  puStack_68 = &local_60;
  uVar1 = _objc_retain(uVar1);
  _dispatch_sync(uVar3,&local_98);
  uVar3 = _objc_retain(local_58[5]);
  _objc_release(local_70);
  _objc_release(local_78);
  __Block_object_dispose(&local_60,8);
  _objc_release(local_38);
  _objc_release(uVar1);
  IVar2 = _objc_autoreleaseReturnValue(uVar3);
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabaseQueue::path(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_path,1);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabaseQueue::setPath_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_atomic();
  return;
}




/* Function Stack Size: 0x10 bytes */

int FMDatabaseQueue::openFlags(ID param_1,SEL param_2)

{
  return *(int *)(param_1 + (long)_openFlags);
}




/* Function Stack Size: 0x10 bytes */

void FMDatabaseQueue::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_db,0);
  _objc_storeStrong(param_1 + (long)_queue,0);
  _objc_storeStrong(param_1 + (long)_path,0);
  return;
}

