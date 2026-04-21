// classes/AMPDatabaseHelper — 27 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

ID AMPDatabaseHelper::getDatabaseHelper(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL extraout_x1;
  
  if (DAT_101ea60a0 != -1) {
    _dispatch_once(&DAT_101ea60a0,&PTR___NSConcreteGlobalBlock_101830dc0);
    param_2 = extraout_x1;
  }
  IVar1 = _objc_retainAutoreleaseReturnValue(DAT_101ea6098,param_2);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID AMPDatabaseHelper::init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ID local_40;
  class_t *local_38;
  
  local_38 = &objc::class_t::AMPDatabaseHelper;
  local_40 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_40,"init");
  if (IVar1 != 0) {
    _NSSearchPathForDirectoriesInDomains(5,1,1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"objectAtIndex:",0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    _objc_msgSend(uVar3,"stringByAppendingPathComponent:",&cf_com_amplitude_database);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    lVar6 = (long)_databasePath;
    uVar5 = *(undefined8 *)(IVar1 + lVar6);
    *(undefined8 *)(IVar1 + lVar6) = uVar2;
    _objc_release(uVar5);
    _objc_msgSend(&objc::class_t::FMDatabaseQueue,"databaseQueueWithPath:flags:",
                  *(undefined8 *)(IVar1 + lVar6),6);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)(IVar1 + (long)_dbQueue);
    *(undefined8 *)(IVar1 + (long)_dbQueue) = uVar2;
    _objc_release(uVar5);
    _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_msgSend(uVar2,"fileExistsAtPath:",*(undefined8 *)(IVar1 + lVar6));
    _objc_release(uVar2);
    if ((uVar4 & 1) == 0) {
      _objc_msgSend(IVar1,"createTables");
    }
    _objc_release(uVar3);
  }
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

void AMPDatabaseHelper::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  _objc_msgSend(*(undefined8 *)(param_1 + (long)_dbQueue),"close");
  local_28 = &objc::class_t::AMPDatabaseHelper;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

bool AMPDatabaseHelper::createTables(ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *puStack_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  local_48 = &local_40;
  local_40 = 0;
  local_30 = 0x20000000;
  local_2c = 0x20;
  local_28 = 1;
  local_68 = PTR___NSConcreteStackBlock_101444138;
  local_60 = 0xc2000000;
  uStack_5c = 0;
  local_58 = FUN_101131a10;
  puStack_50 = &DAT_101830de0;
  local_38 = local_48;
  _objc_msgSend(*(undefined8 *)(param_1 + (long)_dbQueue),"inDatabase:",&local_68);
  bVar1 = *(byte *)(local_38 + 3);
  __Block_object_dispose(&local_40,8);
  return (bool)bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool AMPDatabaseHelper::upgrade_newVersion_(ID param_1,SEL param_2,int param_3,int param_4)

{
  bool bVar1;
  undefined *local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  code *local_60;
  undefined *local_58;
  undefined8 *puStack_50;
  int local_48;
  int iStack_44;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  puStack_50 = &local_40;
  local_40 = 0;
  local_30 = 0x20000000;
  local_2c = 0x20;
  local_28 = 1;
  local_70 = PTR___NSConcreteStackBlock_101444138;
  local_68 = 0xc2000000;
  uStack_64 = 0;
  local_60 = FUN_101131d74;
  local_58 = &DAT_101830e10;
  local_48 = param_3;
  iStack_44 = param_4;
  local_38 = puStack_50;
  _objc_msgSend(*(undefined8 *)(param_1 + (long)_dbQueue),"inDatabase:",&local_70);
  if (*(char *)(local_38 + 3) == '\0') {
    _NSLog(&cf_upgradewithunknownoldVersion_d);
    bVar1 = resetDB_(param_1,(SEL)"resetDB:",0);
  }
  else {
    bVar1 = 1;
  }
  __Block_object_dispose(&local_40,8);
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool AMPDatabaseHelper::dropTables(ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  code *local_58;
  undefined *puStack_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  local_48 = &local_40;
  local_40 = 0;
  local_30 = 0x20000000;
  local_2c = 0x20;
  local_28 = 1;
  local_68 = PTR___NSConcreteStackBlock_101444138;
  local_60 = 0xc2000000;
  uStack_5c = 0;
  local_58 = FUN_101132104;
  puStack_50 = &DAT_101830e40;
  local_38 = local_48;
  _objc_msgSend(*(undefined8 *)(param_1 + (long)_dbQueue),"inDatabase:",&local_68);
  bVar1 = *(byte *)(local_38 + 3);
  __Block_object_dispose(&local_40,8);
  return (bool)bVar1;
}




/* Function Stack Size: 0x14 bytes */

bool AMPDatabaseHelper::resetDB_(ID param_1,SEL param_2,bool param_3)

{
  uint uVar1;
  bool bVar2;
  undefined **ppuVar3;
  
  if (param_3 == 0) {
    ppuVar3 = &PTR_s_dropTables_10184ac28;
  }
  else {
    ppuVar3 = &PTR_s_deleteDB_10184ac20;
  }
  uVar1 = _objc_msgSend(param_1,*ppuVar3);
  bVar2 = createTables(param_1,(SEL)"createTables");
  return uVar1 & bVar2;
}




/* Function Stack Size: 0x10 bytes */

bool AMPDatabaseHelper::deleteDB(ID param_1,SEL param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lVar4 = (long)_databasePath;
  iVar1 = _objc_msgSend(uVar3,"fileExistsAtPath:",*(undefined8 *)(param_1 + lVar4));
  _objc_release(uVar3);
  if (iVar1 == 0) {
    bVar2 = 1;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSFileManager,"defaultManager");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    bVar2 = _objc_msgSend(uVar3,"removeItemAtPath:error:",*(undefined8 *)(param_1 + lVar4),0);
    _objc_release(uVar3);
  }
  return bVar2;
}




/* Function Stack Size: 0x18 bytes */

bool AMPDatabaseHelper::addEvent_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"addEventToTable:event:",&cf_events,param_3);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool AMPDatabaseHelper::addIdentify_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"addEventToTable:event:",&cf_identifys,param_3);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool AMPDatabaseHelper::addEventToTable_event_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retain(param_4);
  local_70 = 0;
  local_60 = 0x20000000;
  local_5c = 0x20;
  local_58 = 0;
  local_a0 = 0;
  local_90 = 0x32000000;
  local_8c = 0x30;
  local_88 = FUN_101132668;
  pcStack_80 = FUN_101132678;
  local_78 = 0;
  uVar4 = *(undefined8 *)(param_1 + (long)_dbQueue);
  local_e0 = PTR___NSConcreteStackBlock_101444138;
  local_d8 = 0xc2000000;
  uStack_d4 = 0;
  local_d0 = FUN_101132680;
  local_c8 = &DAT_101830e70;
  local_98 = &local_a0;
  local_68 = &local_70;
  uVar2 = _objc_retain(uVar2);
  local_c0 = uVar2;
  local_b0 = &local_70;
  uVar3 = _objc_retain(uVar3);
  local_b8 = uVar3;
  local_a8 = &local_a0;
  _objc_msgSend(uVar4,"inDatabase:",&local_e0);
  cVar1 = *(char *)(local_68 + 3);
  if (cVar1 == '\0') {
    _NSLog(&cf_addEventToTable__failed___);
    resetDB_(param_1,(SEL)"resetDB:",0);
    cVar1 = *(char *)(local_68 + 3);
  }
  _objc_release(local_b8);
  _objc_release(local_c0);
  __Block_object_dispose(&local_a0,8);
  _objc_release(local_78);
  __Block_object_dispose(&local_70,8);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return (bool)(cVar1 != '\0');
}




/* Function Stack Size: 0x20 bytes */

ID AMPDatabaseHelper::getEvents_limit_(ID param_1,SEL param_2,long_long param_3,long_long param_4)

{
  ID IVar1;
  
  IVar1 = getEventsFromTable_upToId_limit_
                    (param_1,(SEL)"getEventsFromTable:upToId:limit:",0x101836358,param_3,param_4);
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

bool AMPDatabaseHelper::insertOrReplaceKeyValue_value_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = _objc_retain(param_3);
  bVar1 = insertOrReplaceKeyValueToTable_key_value_
                    (param_1,(SEL)"insertOrReplaceKeyValueToTable:key:value:",0x1018363b8,IVar2,
                     param_4);
  _objc_release(IVar2);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

ID AMPDatabaseHelper::getValue_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = getValueFromTable_key_(param_1,(SEL)"getValueFromTable:key:",0x1018363b8,param_3);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

ID AMPDatabaseHelper::getLongValue_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = getValueFromTable_key_(param_1,(SEL)"getValueFromTable:key:",0x1018363d8,param_3);
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

ID AMPDatabaseHelper::getValueFromTable_key_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_retain(param_4);
  local_80 = 0;
  local_70 = 0x32000000;
  local_6c = 0x30;
  local_68 = FUN_101132668;
  local_60 = FUN_101132678;
  local_58 = 0;
  local_a0 = 0;
  local_90 = 0x20000000;
  local_8c = 0x20;
  local_88 = 0;
  uVar4 = *(undefined8 *)(param_1 + (long)_dbQueue);
  local_e0 = PTR___NSConcreteStackBlock_101444138;
  local_d8 = 0xc2000000;
  uStack_d4 = 0;
  local_d0 = FUN_101133524;
  local_c8 = &DAT_101830f00;
  local_98 = &local_a0;
  local_78 = &local_80;
  uVar1 = _objc_retain(uVar1);
  local_c0 = uVar1;
  uVar2 = _objc_retain(uVar2);
  local_b8 = uVar2;
  puStack_b0 = &local_a0;
  local_a8 = &local_80;
  _objc_msgSend(uVar4,"inDatabase:",&local_e0);
  if (*(char *)(local_98 + 3) == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = _objc_retain(local_78[5]);
  }
  _objc_release(local_b8);
  _objc_release(local_c0);
  __Block_object_dispose(&local_a0,8);
  __Block_object_dispose(&local_80,8);
  _objc_release(local_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar4);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

int AMPDatabaseHelper::getEventCount(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = _objc_msgSend((int)param_1,"getEventCountFromTable:",&cf_events);
  return iVar1;
}




/* Function Stack Size: 0x10 bytes */

int AMPDatabaseHelper::getIdentifyCount(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = _objc_msgSend((int)param_1,"getEventCountFromTable:",&cf_identifys);
  return iVar1;
}




/* Function Stack Size: 0x10 bytes */

int AMPDatabaseHelper::getTotalEventCount(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = getEventCount(param_1,(SEL)"getEventCount");
  iVar2 = getIdentifyCount(param_1,(SEL)"getIdentifyCount");
  return iVar2 + iVar1;
}




/* Function Stack Size: 0x18 bytes */

int AMPDatabaseHelper::getEventCountFromTable_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  
  _objc_retain(param_3);
  local_50 = 0;
  local_40 = 0x20000000;
  local_3c = 0x20;
  local_38 = 0;
  uVar3 = *(undefined8 *)(param_1 + (long)_dbQueue);
  local_80 = PTR___NSConcreteStackBlock_101444138;
  local_78 = 0xc2000000;
  uStack_74 = 0;
  local_70 = FUN_101133998;
  local_68 = &DAT_101830f30;
  local_48 = &local_50;
  uVar2 = _objc_retain();
  local_60 = uVar2;
  puStack_58 = &local_50;
  _objc_msgSend(uVar3,"inDatabase:",&local_80);
  iVar1 = *(int *)(local_48 + 3);
  _objc_release(local_60);
  __Block_object_dispose(&local_50,8);
  _objc_release(uVar2);
  return iVar1;
}




/* Function Stack Size: 0x18 bytes */

bool AMPDatabaseHelper::removeEvents_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"removeEventsFromTable:maxId:",&cf_events,param_3);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool AMPDatabaseHelper::removeIdentifys_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"removeEventsFromTable:maxId:",&cf_identifys,param_3);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool AMPDatabaseHelper::removeEvent_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"removeEventFromTable:eventId:",&cf_events,param_3);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool AMPDatabaseHelper::removeIdentify_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"removeEventFromTable:eventId:",&cf_identifys,param_3);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

long_long AMPDatabaseHelper::getNthEventId_(ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  
  lVar1 = getNthEventIdFromTable_n_(param_1,(SEL)"getNthEventIdFromTable:n:",0x101836358,param_3);
  return lVar1;
}




/* Function Stack Size: 0x18 bytes */

long_long AMPDatabaseHelper::getNthIdentifyId_(ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  
  lVar1 = getNthEventIdFromTable_n_(param_1,(SEL)"getNthEventIdFromTable:n:",0x101836378,param_3);
  return lVar1;
}




/* Function Stack Size: 0x10 bytes */

void AMPDatabaseHelper::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_dbQueue,0);
  _objc_storeStrong(param_1 + (long)_databasePath,0);
  return;
}

