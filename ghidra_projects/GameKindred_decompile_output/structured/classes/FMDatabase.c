// classes/FMDatabase — 93 functions
#include "GameKindred.h"




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::databaseWithPath_(ID param_1,SEL param_2,ID param_3)

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




/* Function Stack Size: 0x10 bytes */

ID FMDatabase::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = initWithPath_(param_1,(SEL)"initWithPath:",0);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::initWithPath_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ID local_40;
  class_t *local_38;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _sqlite3_threadsafe();
  if (iVar1 != 0) {
    local_38 = &objc::class_t::FMDatabase;
    local_40 = param_1;
    IVar3 = _objc_msgSendSuper2(&local_40,"init");
    if (IVar3 != 0) {
      uVar4 = _objc_msgSend(uVar2,"copy");
      uVar5 = *(undefined8 *)(IVar3 + (long)_databasePath);
      *(undefined8 *)(IVar3 + (long)_databasePath) = uVar4;
      _objc_release(uVar5);
      uVar4 = _objc_msgSend(&_OBJC_CLASS___NSMutableSet,"alloc");
      uVar4 = _objc_msgSend(uVar4,"init");
      uVar5 = *(undefined8 *)(IVar3 + (long)_openResultSets);
      *(undefined8 *)(IVar3 + (long)_openResultSets) = uVar4;
      _objc_release(uVar5);
      lVar6 = (long)_logsErrors;
      *(undefined8 *)(IVar3 + (long)_db) = 0;
      *(undefined1 *)(IVar3 + lVar6) = 1;
      *(undefined1 *)(IVar3 + (long)_crashOnErrors) = 0;
      *(undefined8 *)(IVar3 + (long)_maxBusyRetryTimeInterval) = 0x4000000000000000;
    }
    _objc_release(uVar2);
    return IVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___assert_rtn("-[FMDatabase initWithPath:]",
                "/Users/tommy/Downloads/Amplitude-iOS-master/lib/fmdb/FMDatabase.m",0x1f,
                "sqlite3_threadsafe()");
}




/* Function Stack Size: 0x10 bytes */

void FMDatabase::finalize(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  close((int)param_1);
  local_28 = &objc::class_t::FMDatabase;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"finalize");
  return;
}




/* Function Stack Size: 0x10 bytes */

void FMDatabase::dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  close((int)param_1);
  local_28 = &objc::class_t::FMDatabase;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabase::databasePath(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + (long)_databasePath));
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabase::FMDBUserVersion(ID param_1,SEL param_2)

{
  _objc_retainAutorelease(&cf_2_5);
  return 0x101836958;
}




/* Function Stack Size: 0x10 bytes */

int FMDatabase::FMDBVersion(ID param_1,SEL param_2)

{
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  code *local_38;
  undefined *local_30;
  ID IStack_28;
  
  local_48 = PTR___NSConcreteStackBlock_101444138;
  local_40 = 0xc2000000;
  uStack_3c = 0;
  local_38 = FUN_101134bc8;
  local_30 = &DAT_101830ff0;
  if (DAT_101ea60b8 != -1) {
    IStack_28 = param_1;
    _dispatch_once(&DAT_101ea60b8,&local_48);
  }
  return DAT_101ea60b0;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabase::sqliteLibVersion(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _sqlite3_libversion();
  IVar1 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf__s);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::isSQLiteThreadSafe(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = _sqlite3_threadsafe();
  return (bool)(iVar1 != 0);
}




/* Function Stack Size: 0x10 bytes */

sqlite3 * FMDatabase::sqliteHandle(ID param_1,SEL param_2)

{
  return *(sqlite3 **)(param_1 + (long)_db);
}




/* Function Stack Size: 0x10 bytes */

const_char__ FMDatabase::sqlitePath(ID param_1,SEL param_2)

{
  long lVar1;
  const_char__ pcVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = (long)_databasePath;
  lVar1 = *(long *)(param_1 + lVar4);
  if (lVar1 == 0) {
    pcVar3 = ":memory:";
  }
  else {
    lVar1 = _objc_msgSend(lVar1,"length");
    if (lVar1 != 0) {
      pcVar2 = (const_char__)
               _objc_msgSend(*(undefined8 *)(param_1 + lVar4),"fileSystemRepresentation");
      return pcVar2;
    }
    pcVar3 = "";
  }
  return pcVar3;
}




/* Function Stack Size: 0x10 bytes */

int FMDatabase::open(char *param_1,int param_2,...)

{
  int iVar1;
  const_char__ filename;
  long lVar2;
  
  lVar2 = (long)_db;
  if (*(long *)(param_1 + lVar2) == 0) {
    filename = sqlitePath((ID)param_1,(SEL)"sqlitePath");
    iVar1 = _sqlite3_open(filename,(sqlite3 **)(param_1 + lVar2));
    if (iVar1 != 0) {
      _NSLog(&cf_erroropening___d);
      return 0;
    }
    if (0.0 < *(double *)(param_1 + _maxBusyRetryTimeInterval)) {
      setMaxBusyRetryTimeInterval_
                ((ID)param_1,(SEL)"setMaxBusyRetryTimeInterval:",
                 *(double *)(param_1 + _maxBusyRetryTimeInterval));
    }
  }
  return 1;
}




/* Function Stack Size: 0x14 bytes */

bool FMDatabase::openWithFlags_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  const_char__ filename;
  long lVar2;
  
  lVar2 = (long)_db;
  if (*(long *)(param_1 + lVar2) == 0) {
    filename = sqlitePath(param_1,(SEL)"sqlitePath");
    iVar1 = _sqlite3_open_v2(filename,(sqlite3 **)(param_1 + lVar2),param_3,(char *)0x0);
    if (iVar1 != 0) {
      _NSLog(&cf_erroropening___d);
      return 0;
    }
    if (0.0 < *(double *)(param_1 + (long)_maxBusyRetryTimeInterval)) {
      setMaxBusyRetryTimeInterval_
                (param_1,(SEL)"setMaxBusyRetryTimeInterval:",
                 *(double *)(param_1 + (long)_maxBusyRetryTimeInterval));
    }
  }
  return 1;
}




/* Function Stack Size: 0x10 bytes */

int FMDatabase::close(int param_1)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  sqlite3 *psVar4;
  sqlite3_stmt *pStmt;
  long lVar5;
  
  uVar3 = (ulong)(uint)param_1;
  clearCachedStatements(uVar3,(SEL)"clearCachedStatements");
  closeOpenResultSets(uVar3,(SEL)"closeOpenResultSets");
  lVar5 = (long)_db;
  psVar4 = *(sqlite3 **)(uVar3 + lVar5);
  if (psVar4 != (sqlite3 *)0x0) {
    bVar1 = false;
    while( true ) {
      iVar2 = _sqlite3_close(psVar4);
      if (1 < iVar2 - 5U) break;
      if ((bVar1) ||
         (pStmt = _sqlite3_next_stmt(*(sqlite3 **)(uVar3 + lVar5),(sqlite3_stmt *)0x0),
         pStmt == (sqlite3_stmt *)0x0)) goto LAB_101134ff8;
      do {
        _NSLog(&cf_Closingleakedstatement);
        _sqlite3_finalize(pStmt);
        pStmt = _sqlite3_next_stmt(*(sqlite3 **)(uVar3 + lVar5),(sqlite3_stmt *)0x0);
      } while (pStmt != (sqlite3_stmt *)0x0);
      psVar4 = *(sqlite3 **)(uVar3 + lVar5);
      bVar1 = true;
    }
    if (iVar2 != 0) {
      _NSLog(&cf_errorclosing___d);
    }
LAB_101134ff8:
    *(undefined8 *)(uVar3 + lVar5) = 0;
  }
  return 1;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabase::setMaxBusyRetryTimeInterval_(ID param_1,SEL param_2,double param_3)

{
  sqlite3 *psVar1;
  
  *(double *)(param_1 + (long)_maxBusyRetryTimeInterval) = param_3;
  psVar1 = *(sqlite3 **)(param_1 + (long)_db);
  if (psVar1 == (sqlite3 *)0x0) {
    return;
  }
  if (0.0 < param_3) {
    _sqlite3_busy_handler(psVar1,(int *)FUN_10113505c,(void *)param_1);
    return;
  }
  _sqlite3_busy_handler(psVar1,(int *)0x0,(void *)0x0);
  return;
}




/* Function Stack Size: 0x10 bytes */

double FMDatabase::maxBusyRetryTimeInterval(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_maxBusyRetryTimeInterval);
}




/* Function Stack Size: 0x10 bytes */

int FMDatabase::busyRetryTimeout(ID param_1,SEL param_2)

{
  _NSLog(&cf__s__d);
  _NSLog(&cf_FMDB_busyRetryTimeoutnolongerworks_pleaseusemaxBusyRetryTimeInterval);
  return 0xffffffff;
}




/* Function Stack Size: 0x14 bytes */

void FMDatabase::setBusyRetryTimeout_(ID param_1,SEL param_2,int param_3)

{
  _NSLog(&cf__s__d,param_2,param_3);
  _NSLog(&cf_FMDB_setBusyRetryTimeoutdoesnothing_pleaseusesetMaxBusyRetryTimeInterval_);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::hasOpenResultSets(ID param_1,SEL param_2)

{
  long lVar1;
  
  lVar1 = _objc_msgSend(*(undefined8 *)(param_1 + (long)_openResultSets),"count");
  return (bool)(lVar1 != 0);
}




/* Function Stack Size: 0x10 bytes */

void FMDatabase::closeOpenResultSets(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 local_128;
  long local_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  lVar4 = (long)_openResultSets;
  uVar1 = _objc_msgSend(*(undefined8 *)(param_1 + lVar4),"copy");
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (long *)0x0;
  uStack_110 = 0;
  local_128 = 0;
  local_120 = 0;
  uVar2 = _objc_msgSend(uVar1,"countByEnumeratingWithState:objects:count:",&local_128,auStack_e8,
                        0x10);
  if (uVar2 != 0) {
    lVar6 = *local_118;
    do {
      uVar5 = 0;
      do {
        if (*local_118 != lVar6) {
          _objc_enumerationMutation(uVar1);
        }
        uVar7 = *(undefined8 *)(local_120 + uVar5 * 8);
        _objc_msgSend(uVar7,"pointerValue");
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar3,"setParentDB:",0);
        _objc_msgSend(uVar3,"close");
        _objc_msgSend(*(undefined8 *)(param_1 + lVar4),"removeObject:",uVar7);
        _objc_release(uVar3);
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar2);
      uVar2 = _objc_msgSend(uVar1,"countByEnumeratingWithState:objects:count:",&local_128,auStack_e8
                            ,0x10);
    } while (uVar2 != 0);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* Function Stack Size: 0x18 bytes */

void FMDatabase::resultSetDidClose_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  
  _objc_msgSend(&_OBJC_CLASS___NSValue,"valueWithNonretainedObject:");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(*(undefined8 *)(param_1 + (long)_openResultSets),"removeObject:",uVar1);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x10 bytes */

void FMDatabase::clearCachedStatements(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_128;
  long local_120;
  long *local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_101444218;
  local_f8 = 0;
  uStack_f0 = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = (long *)0x0;
  uStack_110 = 0;
  local_128 = 0;
  local_120 = 0;
  lVar5 = (long)_cachedStatements;
  _objc_msgSend(*(undefined8 *)(param_1 + lVar5),"objectEnumerator");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_msgSend(uVar1,"countByEnumeratingWithState:objects:count:",&local_128,auStack_e8,
                        0x10);
  if (uVar2 != 0) {
    lVar4 = *local_118;
    do {
      uVar3 = 0;
      do {
        if (*local_118 != lVar4) {
          _objc_enumerationMutation(uVar1);
        }
        _objc_msgSend(*(undefined8 *)(local_120 + uVar3 * 8),"makeObjectsPerformSelector:","close");
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar2);
      uVar2 = _objc_msgSend(uVar1,"countByEnumeratingWithState:objects:count:",&local_128,auStack_e8
                            ,0x10);
    } while (uVar2 != 0);
  }
  _objc_release(uVar1);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar5),"removeAllObjects");
  if (*(long *)PTR____stack_chk_guard_101444218 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::cachedStatementForQuery_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  _objc_msgSend(*(undefined8 *)(param_1 + (long)_cachedStatements),"objectForKey:");
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar1,"objectsPassingTest:",&PTR___NSConcreteGlobalBlock_101831040);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"anyObject");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x20 bytes */

void FMDatabase::setCachedStatement_forQuery_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(param_4,"copy");
  _objc_msgSend(uVar1,"setQuery:",uVar2);
  lVar4 = (long)_cachedStatements;
  _objc_msgSend(*(undefined8 *)(param_1 + lVar4),"objectForKey:",uVar2);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSMutableSet,"set");
    lVar3 = _objc_retainAutoreleasedReturnValue();
  }
  _objc_msgSend(lVar3,"addObject:",uVar1);
  _objc_msgSend(*(undefined8 *)(param_1 + lVar4),"setObject:forKey:",lVar3,uVar2);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return;
}




/* Function Stack Size: 0x18 bytes */

bool FMDatabase::rekey_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t sVar6;
  ID IVar7;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retainAutorelease(param_3);
  uVar4 = _objc_msgSend(uVar3,"UTF8String");
  uVar3 = _objc_retainAutorelease(uVar3);
  pcVar5 = (char *)_objc_msgSend(uVar3,"UTF8String");
  _objc_release(uVar2);
  sVar6 = _strlen(pcVar5);
  _objc_msgSend(&_OBJC_CLASS___NSData,"dataWithBytes:length:",uVar4,sVar6);
  IVar7 = _objc_retainAutoreleasedReturnValue();
  bVar1 = rekeyWithData_(param_1,(SEL)"rekeyWithData:",IVar7);
  _objc_release(IVar7);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool FMDatabase::rekeyWithData_(ID param_1,SEL param_2,ID param_3)

{
  return 0;
}




/* Function Stack Size: 0x18 bytes */

bool FMDatabase::setKey_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *pcVar5;
  size_t sVar6;
  ID IVar7;
  
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_retainAutorelease(param_3);
  uVar4 = _objc_msgSend(uVar3,"UTF8String");
  uVar3 = _objc_retainAutorelease(uVar3);
  pcVar5 = (char *)_objc_msgSend(uVar3,"UTF8String");
  _objc_release(uVar2);
  sVar6 = _strlen(pcVar5);
  _objc_msgSend(&_OBJC_CLASS___NSData,"dataWithBytes:length:",uVar4,sVar6);
  IVar7 = _objc_retainAutoreleasedReturnValue();
  bVar1 = setKeyWithData_(param_1,(SEL)"setKeyWithData:",IVar7);
  _objc_release(IVar7);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool FMDatabase::setKeyWithData_(ID param_1,SEL param_2,ID param_3)

{
  return 0;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::storeableDateFormat_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(&_OBJC_CLASS___NSDateFormatter,"alloc");
  uVar2 = _objc_msgSend(uVar2,"init");
  _objc_msgSend(uVar2,"setDateFormat:",uVar1);
  _objc_release(uVar1);
  _objc_msgSend(&_OBJC_CLASS___NSTimeZone,"timeZoneForSecondsFromGMT:",0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"setTimeZone:",uVar1);
  _objc_release(uVar1);
  uVar1 = _objc_msgSend(&_OBJC_CLASS___NSLocale,"alloc");
  uVar1 = _objc_msgSend(uVar1,"initWithLocaleIdentifier:",&cf_en_US);
  _objc_msgSend(uVar2,"setLocale:",uVar1);
  _objc_release(uVar1);
  IVar3 = _objc_autoreleaseReturnValue(uVar2);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::hasDateFormatter(ID param_1,SEL param_2)

{
  return (bool)(*(long *)(param_1 + (long)_dateFormat) != 0);
}




/* Function Stack Size: 0x18 bytes */

void FMDatabase::setDateFormat_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + (long)_dateFormat);
  *(undefined8 *)(param_1 + (long)_dateFormat) = uVar1;
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::dateFromString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(undefined8 *)(param_1 + (long)_dateFormat),"dateFromString:");
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::stringFromDate_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(*(undefined8 *)(param_1 + (long)_dateFormat),"stringFromDate:");
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::goodConnection(ID param_1,SEL param_2)

{
  long lVar1;
  bool bVar2;
  
  if (*(long *)(param_1 + (long)_db) == 0) {
    bVar2 = 0;
  }
  else {
    executeQuery_(param_1,(SEL)"executeQuery:",0x101836a98);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_msgSend(lVar1,"close");
    }
    bVar2 = (bool)(lVar1 != 0);
    _objc_release(lVar1);
  }
  return bVar2;
}




/* Function Stack Size: 0x10 bytes */

void FMDatabase::warnInUse(ID param_1,SEL param_2)

{
  _NSLog(&cf_TheFMDatabase__iscurrentlyinuse_);
  return;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::databaseExists(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = *(long *)(param_1 + (long)_db) == 0;
  if (bVar1) {
    _NSLog(&cf_TheFMDatabase__isnotopen_);
  }
  return (bool)!bVar1;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabase::lastErrorMessage(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  
  pcVar1 = _sqlite3_errmsg(*(sqlite3 **)(param_1 + (long)_db));
  IVar2 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pcVar1);
  return IVar2;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::hadError(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = lastErrorCode(param_1,(SEL)"lastErrorCode");
  return (bool)(iVar1 - 1 < 99);
}




/* Function Stack Size: 0x10 bytes */

int FMDatabase::lastErrorCode(ID param_1,SEL param_2)

{
  int iVar1;
  
  iVar1 = _sqlite3_errcode(*(sqlite3 **)(param_1 + (long)_db));
  return iVar1;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::errorWithMessage_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObject:forKey:",param_3,
                *(undefined8 *)PTR__NSLocalizedDescriptionKey_1014440b0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _sqlite3_errcode(*(sqlite3 **)(param_1 + (long)_db));
  _objc_msgSend(&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",&cf_FMDatabase,(long)iVar1,
                uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabase::lastError(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  
  lastErrorMessage(param_1,(SEL)"lastErrorMessage");
  IVar1 = _objc_retainAutoreleasedReturnValue();
  errorWithMessage_(param_1,(SEL)"errorWithMessage:",IVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(IVar1);
  IVar1 = _objc_autoreleaseReturnValue(uVar2);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

long_long FMDatabase::lastInsertRowId(ID param_1,SEL param_2)

{
  long_long lVar1;
  long lVar2;
  
  lVar2 = (long)_isExecutingStatement;
  if (*(char *)(param_1 + lVar2) == '\0') {
    *(undefined1 *)(param_1 + lVar2) = 1;
    lVar1 = _sqlite3_last_insert_rowid(*(sqlite3 **)(param_1 + (long)_db));
    *(undefined1 *)(param_1 + lVar2) = 0;
  }
  else {
    warnInUse(param_1,(SEL)"warnInUse");
    lVar1 = 0;
  }
  return lVar1;
}




/* Function Stack Size: 0x10 bytes */

int FMDatabase::changes(ID param_1,SEL param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = (long)_isExecutingStatement;
  if (*(char *)(param_1 + lVar2) == '\0') {
    *(undefined1 *)(param_1 + lVar2) = 1;
    iVar1 = _sqlite3_changes(*(sqlite3 **)(param_1 + (long)_db));
    *(undefined1 *)(param_1 + lVar2) = 0;
  }
  else {
    warnInUse(param_1,(SEL)"warnInUse");
    iVar1 = 0;
  }
  return iVar1;
}




/* Function Stack Size: 0x20 bytes */

ID FMDatabase::executeQuery_withParameterDictionary_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_retain(param_3);
  IVar2 = executeQuery_withArgumentsInArray_orDictionary_orVAList_
                    (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",IVar1,0
                     ,param_4,(char *)0x0);
  _objc_release(IVar1);
  _objc_retainAutoreleasedReturnValue(IVar2);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::executeQuery_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = executeQuery_withArgumentsInArray_orDictionary_orVAList_
                    (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",param_3
                     ,0,0,&stack0x00000000);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::executeQueryWithFormat_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  
  IVar1 = _objc_retain(param_3);
  uVar2 = _objc_msgSend(param_3,"length");
  _objc_msgSend(&_OBJC_CLASS___NSMutableString,"stringWithCapacity:",uVar2);
  IVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"array");
  IVar4 = _objc_retainAutoreleasedReturnValue();
  extractSQL_argumentsList_intoString_arguments_
            (param_1,(SEL)"extractSQL:argumentsList:intoString:arguments:",IVar1,&stack0x00000000,
             IVar3,IVar4);
  _objc_release(IVar1);
  executeQuery_withArgumentsInArray_(param_1,(SEL)"executeQuery:withArgumentsInArray:",IVar3,IVar4);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(IVar4);
  _objc_release(IVar3);
  IVar1 = _objc_autoreleaseReturnValue(uVar2);
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

ID FMDatabase::executeQuery_withArgumentsInArray_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = _objc_retain(param_3);
  IVar2 = executeQuery_withArgumentsInArray_orDictionary_orVAList_
                    (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",IVar1,
                     param_4,0,(char *)0x0);
  _objc_release(IVar1);
  _objc_retainAutoreleasedReturnValue(IVar2);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

ID FMDatabase::executeQuery_withVAList_(ID param_1,SEL param_2,ID param_3,char *param_4)

{
  ID IVar1;
  
  IVar1 = executeQuery_withArgumentsInArray_orDictionary_orVAList_
                    (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",param_3
                     ,0,0,param_4);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

bool FMDatabase::executeUpdate_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,
                        "executeUpdate:error:withArgumentsInArray:orDictionary:orVAList:",param_3,0,
                        0,0);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::executeUpdate_withArgumentsInArray_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = _objc_retain(param_3);
  bVar1 = executeUpdate_error_withArgumentsInArray_orDictionary_orVAList_
                    (param_1,(SEL)"executeUpdate:error:withArgumentsInArray:orDictionary:orVAList:",
                     IVar2,(ID *)0x0,param_4,0,(char *)0x0);
  _objc_release(IVar2);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::executeUpdate_withVAList_(ID param_1,SEL param_2,ID param_3,char *param_4)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,
                        "executeUpdate:error:withArgumentsInArray:orDictionary:orVAList:",param_3,0,
                        0,0,param_4);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool FMDatabase::executeUpdateWithFormat_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  
  IVar2 = _objc_retain(param_3);
  uVar3 = _objc_msgSend(param_3,"length");
  _objc_msgSend(&_OBJC_CLASS___NSMutableString,"stringWithCapacity:",uVar3);
  IVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSMutableArray,"array");
  IVar5 = _objc_retainAutoreleasedReturnValue();
  extractSQL_argumentsList_intoString_arguments_
            (param_1,(SEL)"extractSQL:argumentsList:intoString:arguments:",IVar2,&stack0x00000000,
             IVar4,IVar5);
  _objc_release(IVar2);
  bVar1 = executeUpdate_withArgumentsInArray_
                    (param_1,(SEL)"executeUpdate:withArgumentsInArray:",IVar4,IVar5);
  _objc_release(IVar5);
  _objc_release(IVar4);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool FMDatabase::executeStatements_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"executeStatements:withResultBlock:",param_3,0);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::executeUpdate_withErrorAndBindings_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,
                        "executeUpdate:error:withArgumentsInArray:orDictionary:orVAList:",param_3,
                        param_4,0,0);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::update_withErrorAndBindings_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,
                        "executeUpdate:error:withArgumentsInArray:orDictionary:orVAList:",param_3,
                        param_4,0,0);
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::rollback(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"executeUpdate:",&cf_rollbacktransaction);
  if (bVar1 != 0) {
    *(undefined1 *)(param_1 + (long)_inTransaction) = 0;
  }
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::commit(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"executeUpdate:",&cf_committransaction);
  if (bVar1 != 0) {
    *(undefined1 *)(param_1 + (long)_inTransaction) = 0;
  }
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::beginDeferredTransaction(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"executeUpdate:",&cf_begindeferredtransaction);
  if (bVar1 != 0) {
    *(undefined1 *)(param_1 + (long)_inTransaction) = 1;
  }
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::beginTransaction(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"executeUpdate:",&cf_beginexclusivetransaction);
  if (bVar1 != 0) {
    *(undefined1 *)(param_1 + (long)_inTransaction) = 1;
  }
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::inTransaction(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_inTransaction);
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::startSavePointWithName_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  
  _objc_msgSend(param_3,"stringByReplacingOccurrencesOfString:withString:",&cf__,&cf___);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_savepoint_____);
  IVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  bVar1 = executeUpdate_(param_1,(SEL)"executeUpdate:",IVar3);
  if ((bVar1 & 1) == 0) {
    if (param_4 == (ID *)0x0) {
      bVar1 = 0;
    }
    else {
      lastError(param_1,(SEL)"lastError");
      _objc_retainAutoreleasedReturnValue();
      IVar4 = _objc_autorelease();
      bVar1 = 0;
      *param_4 = IVar4;
    }
  }
  else {
    bVar1 = 1;
  }
  _objc_release(IVar3);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::releaseSavePointWithName_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  
  _objc_msgSend(param_3,"stringByReplacingOccurrencesOfString:withString:",&cf__,&cf___);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_releasesavepoint_____);
  IVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  bVar1 = executeUpdate_(param_1,(SEL)"executeUpdate:",IVar3);
  if ((param_4 != (ID *)0x0) && (bVar1 != 1)) {
    lastError(param_1,(SEL)"lastError");
    _objc_retainAutoreleasedReturnValue();
    IVar4 = _objc_autorelease();
    *param_4 = IVar4;
  }
  _objc_release(IVar3);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::rollbackToSavePointWithName_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  bool bVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  
  _objc_msgSend(param_3,"stringByReplacingOccurrencesOfString:withString:",&cf__,&cf___);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_rollbacktransactiontosavepoint_____)
  ;
  IVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  bVar1 = executeUpdate_(param_1,(SEL)"executeUpdate:",IVar3);
  if ((param_4 != (ID *)0x0) && (bVar1 != 1)) {
    lastError(param_1,(SEL)"lastError");
    _objc_retainAutoreleasedReturnValue();
    IVar4 = _objc_autorelease();
    *param_4 = IVar4;
  }
  _objc_release(IVar3);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::inSavePoint_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  bool bVar1;
  long lVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined8 uVar6;
  ID local_60;
  ID local_58;
  ID local_50;
  char local_41;
  
  lVar2 = _objc_retain(param_3,param_2,param_3,param_4);
  DAT_101ea60c0 = DAT_101ea60c0 + 1;
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_dbSavePoint_ld);
  IVar3 = _objc_retainAutoreleasedReturnValue();
  local_41 = '\0';
  local_50 = 0;
  bVar1 = startSavePointWithName_error_
                    (param_1,(SEL)"startSavePointWithName:error:",IVar3,&local_50);
  IVar4 = _objc_retain(local_50);
  if ((bVar1 & 1) != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,&local_41);
    IVar5 = IVar4;
    if (local_41 != '\0') {
      local_58 = IVar4;
      rollbackToSavePointWithName_error_
                (param_1,(SEL)"rollbackToSavePointWithName:error:",IVar3,&local_58);
      IVar5 = _objc_retain(local_58);
      _objc_release(IVar4);
    }
    local_60 = IVar5;
    releaseSavePointWithName_error_(param_1,(SEL)"releaseSavePointWithName:error:",IVar3,&local_60);
    IVar4 = _objc_retain(local_60);
    _objc_release(IVar5);
  }
  uVar6 = _objc_retain(IVar4);
  _objc_release();
  _objc_release(IVar3);
  _objc_release(lVar2);
  IVar3 = _objc_autoreleaseReturnValue(uVar6);
  return IVar3;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::shouldCacheStatements(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_shouldCacheStatements);
}




/* Function Stack Size: 0x14 bytes */

void FMDatabase::setShouldCacheStatements_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  
  *(char *)(param_1 + (long)_shouldCacheStatements) = (char)param_3;
  if ((param_3 != 0) && (*(long *)(param_1 + (long)_cachedStatements) == 0)) {
    _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionary");
    IVar1 = _objc_retainAutoreleasedReturnValue();
    setCachedStatements_(param_1,(SEL)"setCachedStatements:",IVar1);
    _objc_release(IVar1);
  }
  if (*(char *)(param_1 + (long)_shouldCacheStatements) != '\0') {
    return;
  }
  setCachedStatements_(param_1,(SEL)"setCachedStatements:",0);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabase::cachedStatements(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_cachedStatements,1);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void FMDatabase::setCachedStatements_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_atomic();
  return;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::logsErrors(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_logsErrors) & 1;
}




/* Function Stack Size: 0x14 bytes */

void FMDatabase::setLogsErrors_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_logsErrors) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::crashOnErrors(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_crashOnErrors) & 1;
}




/* Function Stack Size: 0x14 bytes */

void FMDatabase::setCrashOnErrors_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_crashOnErrors) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::checkedOut(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_checkedOut) & 1;
}




/* Function Stack Size: 0x14 bytes */

void FMDatabase::setCheckedOut_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_checkedOut) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

bool FMDatabase::traceExecution(ID param_1,SEL param_2)

{
  return *(byte *)(param_1 + (long)_traceExecution) & 1;
}




/* Function Stack Size: 0x14 bytes */

void FMDatabase::setTraceExecution_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + (long)_traceExecution) = (char)param_3;
  return;
}




/* Function Stack Size: 0x10 bytes */

void FMDatabase::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_dateFormat,0);
  _objc_storeStrong(param_1 + (long)_openFunctions,0);
  _objc_storeStrong(param_1 + (long)_openResultSets,0);
  _objc_storeStrong(param_1 + (long)_cachedStatements,0);
  _objc_storeStrong(param_1 + (long)_databasePath,0);
  return;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::stringForQuery_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  
  executeQuery_withArgumentsInArray_orDictionary_orVAList_
            (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",param_3,0,0,
             &stack0x00000000);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar2,"next");
  uVar4 = 0;
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"stringForColumnIndex:",0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"close");
    _objc_msgSend(uVar2,"setParentDB:",0);
  }
  _objc_release(uVar2);
  IVar3 = _objc_autoreleaseReturnValue(uVar4);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

int FMDatabase::intForQuery_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  executeQuery_withArgumentsInArray_orDictionary_orVAList_
            (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",param_3,0,0,
             &stack0x00000000);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar3,"next");
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = _objc_msgSend(uVar3,"intForColumnIndex:",0);
    _objc_msgSend(uVar3,"close");
    _objc_msgSend(uVar3,"setParentDB:",0);
  }
  _objc_release(uVar3);
  return iVar2;
}




/* Function Stack Size: 0x18 bytes */

long_long FMDatabase::longForQuery_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  long_long lVar3;
  
  executeQuery_withArgumentsInArray_orDictionary_orVAList_
            (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",param_3,0,0,
             &stack0x00000000);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar2,"next");
  lVar3 = 0;
  if (iVar1 != 0) {
    lVar3 = _objc_msgSend(uVar2,"longForColumnIndex:",0);
    _objc_msgSend(uVar2,"close");
    _objc_msgSend(uVar2,"setParentDB:",0);
  }
  _objc_release(uVar2);
  return lVar3;
}




/* Function Stack Size: 0x18 bytes */

bool FMDatabase::boolForQuery_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  executeQuery_withArgumentsInArray_orDictionary_orVAList_
            (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",param_3,0,0,
             &stack0x00000000);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar3,"next");
  if (iVar1 == 0) {
    bVar2 = 0;
  }
  else {
    bVar2 = _objc_msgSend(uVar3,"boolForColumnIndex:",0);
    _objc_msgSend(uVar3,"close");
    _objc_msgSend(uVar3,"setParentDB:",0);
  }
  _objc_release(uVar3);
  return bVar2;
}




/* Function Stack Size: 0x18 bytes */

double FMDatabase::doubleForQuery_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  double local_40;
  
  executeQuery_withArgumentsInArray_orDictionary_orVAList_
            (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",param_3,0,0,
             &stack0x00000000);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar2,"next");
  if (iVar1 == 0) {
    local_40 = 0.0;
  }
  else {
    local_40 = (double)_objc_msgSend(uVar2,"doubleForColumnIndex:",0);
    _objc_msgSend(uVar2,"close");
    _objc_msgSend(uVar2,"setParentDB:",0);
  }
  _objc_release(uVar2);
  return local_40;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::dataForQuery_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  
  executeQuery_withArgumentsInArray_orDictionary_orVAList_
            (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",param_3,0,0,
             &stack0x00000000);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar2,"next");
  uVar4 = 0;
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"dataForColumnIndex:",0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"close");
    _objc_msgSend(uVar2,"setParentDB:",0);
  }
  _objc_release(uVar2);
  IVar3 = _objc_autoreleaseReturnValue(uVar4);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::dateForQuery_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  
  executeQuery_withArgumentsInArray_orDictionary_orVAList_
            (param_1,(SEL)"executeQuery:withArgumentsInArray:orDictionary:orVAList:",param_3,0,0,
             &stack0x00000000);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar2,"next");
  uVar4 = 0;
  if (iVar1 != 0) {
    _objc_msgSend(uVar2,"dateForColumnIndex:",0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar2,"close");
    _objc_msgSend(uVar2,"setParentDB:",0);
  }
  _objc_release(uVar2);
  IVar3 = _objc_autoreleaseReturnValue(uVar4);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

bool FMDatabase::tableExists_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_msgSend(param_3,"lowercaseString");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  executeQuery_(param_1,(SEL)"executeQuery:",0x101837a58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  bVar1 = _objc_msgSend(uVar3,"next");
  _objc_msgSend(uVar3,"close");
  _objc_release(uVar3);
  _objc_release(uVar2);
  return bVar1;
}




/* Function Stack Size: 0x10 bytes */

ID FMDatabase::getSchema(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = executeQuery_(param_1,(SEL)"executeQuery:",0x101837a78);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

ID FMDatabase::getTableSchema_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_pragmatable_info______);
  IVar1 = _objc_retainAutoreleasedReturnValue();
  executeQuery_(param_1,(SEL)"executeQuery:",IVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(IVar1);
  IVar1 = _objc_autoreleaseReturnValue(uVar2);
  return IVar1;
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::columnExists_inTableWithName_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  
  uVar2 = _objc_retain(param_3);
  _objc_msgSend(param_4,"lowercaseString");
  IVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_msgSend(param_3,"lowercaseString");
  _objc_release(uVar2);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar4);
  getTableSchema_(param_1,(SEL)"getTableSchema:",IVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  do {
    iVar1 = _objc_msgSend(uVar4,"next");
    if (iVar1 == 0) {
      bVar7 = 0;
      goto LAB_10113ce48;
    }
    _objc_msgSend(uVar4,"stringForColumn:",&cf_name);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar5,"lowercaseString");
    uVar6 = _objc_retainAutoreleasedReturnValue();
    iVar1 = _objc_msgSend(uVar6,"isEqualToString:",uVar2);
    _objc_release(uVar6);
    _objc_release(uVar5);
  } while (iVar1 == 0);
  bVar7 = 1;
LAB_10113ce48:
  _objc_msgSend(uVar4,"close");
  _objc_release(uVar4);
  _objc_release(IVar3);
  _objc_release(uVar2);
  return bVar7;
}




/* Function Stack Size: 0x10 bytes */

unsigned_int FMDatabase::userVersion(ID param_1,SEL param_2)

{
  int iVar1;
  unsigned_int uVar2;
  undefined8 uVar3;
  
  executeQuery_(param_1,(SEL)"executeQuery:",0x101837ab8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar1 = _objc_msgSend(uVar3,"next");
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _objc_msgSend(uVar3,"longLongIntForColumnIndex:",0);
  }
  _objc_msgSend(uVar3,"close");
  _objc_release(uVar3);
  return uVar2;
}




/* Function Stack Size: 0x14 bytes */

void FMDatabase::setUserVersion_(ID param_1,SEL param_2,unsigned_int param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithFormat:",&cf_pragmauser_version__d);
  IVar1 = _objc_retainAutoreleasedReturnValue();
  executeQuery_(param_1,(SEL)"executeQuery:",IVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar2,"next");
  _objc_msgSend(uVar2,"close");
  _objc_release(uVar2);
  _objc_release(IVar1);
  return;
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::columnExists_columnName_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = _objc_retain(param_3);
  bVar1 = columnExists_inTableWithName_(param_1,(SEL)"columnExists:inTableWithName:",param_4,IVar2);
  _objc_release(IVar2);
  return bVar1;
}




/* Function Stack Size: 0x20 bytes */

bool FMDatabase::validateSQL_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *zSql;
  ID IVar5;
  bool bVar6;
  sqlite3 *db;
  undefined8 uVar7;
  sqlite3_stmt *local_48;
  
  local_48 = (sqlite3_stmt *)0x0;
  db = *(sqlite3 **)(param_1 + (long)_db);
  uVar3 = _objc_retain(param_3);
  uVar4 = _objc_retainAutorelease(param_3);
  zSql = (char *)_objc_msgSend(uVar4,"UTF8String");
  _objc_release(uVar3);
  iVar1 = _sqlite3_prepare_v2(db,zSql,-1,&local_48,(char **)0x0);
  if (iVar1 == 0) {
    bVar6 = 1;
  }
  else {
    if (param_4 != (ID *)0x0) {
      uVar7 = *(undefined8 *)PTR__NSCocoaErrorDomain_101444078;
      iVar2 = lastErrorCode(param_1,(SEL)"lastErrorCode");
      lastErrorMessage(param_1,(SEL)"lastErrorMessage");
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObject:forKey:",uVar3,
                    *(undefined8 *)PTR__NSLocalizedDescriptionKey_1014440b0);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",uVar7,(long)(int)iVar2,
                    uVar4);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = _objc_autorelease();
      *param_4 = IVar5;
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    bVar6 = 0;
  }
  _sqlite3_finalize(local_48);
  return bVar6;
}

