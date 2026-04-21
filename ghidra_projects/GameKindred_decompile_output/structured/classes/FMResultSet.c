// classes/FMResultSet — 47 functions
#include "GameKindred.h"




/* Function Stack Size: 0x10 bytes */

void FMResultSet::finalize(ID param_1,SEL param_2)

{
  ID local_30;
  class_t *local_28;
  
  close((int)param_1);
  local_28 = &objc::class_t::FMResultSet;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"finalize");
  return;
}




/* Function Stack Size: 0x10 bytes */

void FMResultSet::dealloc(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID local_30;
  class_t *local_28;
  
  close((int)param_1);
  uVar1 = *(undefined8 *)(param_1 + (long)_query);
  *(undefined8 *)(param_1 + (long)_query) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + (long)_columnNameToIndexMap);
  *(undefined8 *)(param_1 + (long)_columnNameToIndexMap) = 0;
  _objc_release(uVar1);
  local_28 = &objc::class_t::FMResultSet;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}




/* Function Stack Size: 0x10 bytes */

int FMResultSet::close(int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = (ulong)(uint)param_1;
  lVar4 = (long)_statement;
  _objc_msgSend(*(undefined8 *)(uVar2 + lVar4),"reset");
  uVar3 = *(undefined8 *)(uVar2 + lVar4);
  *(undefined8 *)(uVar2 + lVar4) = 0;
  _objc_release(uVar3);
  lVar4 = (long)_parentDB;
  _objc_msgSend(*(undefined8 *)(uVar2 + lVar4),"resultSetDidClose:",uVar2);
  uVar3 = *(undefined8 *)(uVar2 + lVar4);
  *(undefined8 *)(uVar2 + lVar4) = 0;
  iVar1 = _objc_release(uVar3);
  return iVar1;
}




/* Function Stack Size: 0x10 bytes */

int FMResultSet::columnCount(ID param_1,SEL param_2)

{
  int iVar1;
  sqlite3_stmt *pStmt;
  
  pStmt = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  iVar1 = _sqlite3_column_count(pStmt);
  return iVar1;
}




/* Function Stack Size: 0x10 bytes */

ID FMResultSet::columnNameToIndexMap(ID param_1,SEL param_2)

{
  int iVar1;
  long lVar2;
  sqlite3_stmt *psVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ID IVar7;
  SEL extraout_x1;
  SEL extraout_x1_00;
  undefined8 uVar8;
  long lVar9;
  int N;
  undefined8 uVar10;
  
  lVar9 = (long)_columnNameToIndexMap;
  lVar2 = *(long *)(param_1 + lVar9);
  if (lVar2 == 0) {
    lVar2 = (long)_statement;
    psVar3 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar2),"statement");
    iVar1 = _sqlite3_column_count(psVar3);
    uVar4 = _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"alloc");
    uVar4 = _objc_msgSend(uVar4,"initWithCapacity:",(long)iVar1);
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined8 *)(param_1 + lVar9) = uVar4;
    _objc_release(uVar8);
    param_2 = extraout_x1;
    if (0 < iVar1) {
      N = 0;
      do {
        uVar10 = *(undefined8 *)(param_1 + lVar9);
        _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithInt:",N);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        psVar3 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar2),"statement");
        pcVar5 = _sqlite3_column_name(psVar3,N);
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pcVar5);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar8,"lowercaseString");
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar10,"setObject:forKey:",uVar4,uVar6);
        _objc_release(uVar6);
        _objc_release(uVar8);
        _objc_release(uVar4);
        N = N + 1;
        param_2 = extraout_x1_00;
      } while (iVar1 != N);
    }
    lVar2 = *(long *)(param_1 + (long)_columnNameToIndexMap);
  }
  IVar7 = _objc_retainAutoreleaseReturnValue(lVar2,param_2);
  return IVar7;
}




/* Function Stack Size: 0x18 bytes */

void FMResultSet::kvcMagic_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  sqlite3_stmt *psVar3;
  uchar *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  int iCol;
  long lVar8;
  
  uVar2 = _objc_retain(param_3);
  lVar8 = (long)_statement;
  psVar3 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar8),"statement");
  iVar1 = _sqlite3_column_count(psVar3);
  if (0 < iVar1) {
    iCol = 0;
    do {
      psVar3 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar8),"statement");
      puVar4 = _sqlite3_column_text(psVar3,iCol);
      if (puVar4 != (uchar *)0x0) {
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",puVar4);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        psVar3 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar8),"statement");
        pcVar6 = _sqlite3_column_name(psVar3,iCol);
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pcVar6);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar2,"setValue:forKey:",uVar5,uVar7);
        _objc_release(uVar7);
        _objc_release(uVar5);
      }
      iCol = iCol + 1;
    } while (iVar1 != iCol);
  }
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x10 bytes */

ID FMResultSet::resultDict(ID param_1,SEL param_2)

{
  int iVar1;
  sqlite3_stmt *pStmt;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  ID IVar6;
  
  pStmt = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  iVar1 = _sqlite3_data_count(pStmt);
  if (iVar1 == 0) {
    _NSLog(&cf_Warning_Thereseemtobenocolumnsinthisset_);
    uVar3 = 0;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithCapacity:",(long)iVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    columnNameToIndexMap(param_1,(SEL)"columnNameToIndexMap");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar3,"keyEnumerator");
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_msgSend(uVar4,"nextObject");
    IVar5 = _objc_retainAutoreleasedReturnValue();
    while (IVar5 != 0) {
      objectForColumnName_(param_1,(SEL)"objectForColumnName:",IVar5);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar2,"setObject:forKey:",uVar3,IVar5);
      _objc_release(uVar3);
      _objc_msgSend(uVar4,"nextObject");
      IVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_release(IVar5);
      IVar5 = IVar6;
    }
    uVar3 = _objc_msgSend(uVar2,"copy");
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  IVar5 = _objc_autoreleaseReturnValue(uVar3);
  return IVar5;
}




/* Function Stack Size: 0x10 bytes */

ID FMResultSet::resultDictionary(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  sqlite3_stmt *psVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  int N;
  long lVar9;
  
  lVar9 = (long)_statement;
  psVar3 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar9),"statement");
  iVar1 = _sqlite3_data_count(psVar3);
  if (iVar1 == 0) {
    _NSLog(&cf_Warning_Thereseemtobenocolumnsinthisset_);
    uVar4 = 0;
  }
  else {
    _objc_msgSend(&_OBJC_CLASS___NSMutableDictionary,"dictionaryWithCapacity:",(long)iVar1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    psVar3 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar9),"statement");
    iVar2 = _sqlite3_column_count(psVar3);
    if (0 < (int)iVar2) {
      N = 0;
      do {
        psVar3 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar9),"statement");
        pcVar5 = _sqlite3_column_name(psVar3,N);
        _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pcVar5);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        objectForColumnIndex_(param_1,(SEL)"objectForColumnIndex:",N);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar4,"setObject:forKey:",uVar7,uVar6);
        _objc_release(uVar7);
        _objc_release(uVar6);
        N = N + 1;
      } while (iVar2 != N);
    }
  }
  IVar8 = _objc_autoreleaseReturnValue(uVar4);
  return IVar8;
}




/* Function Stack Size: 0x10 bytes */

bool FMResultSet::next(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = _objc_msgSend((int)param_1,"nextWithError:",0);
  return bVar1;
}




/* Function Stack Size: 0x18 bytes */

bool FMResultSet::nextWithError_(ID param_1,SEL param_2,ID *param_3)

{
  uint uVar1;
  sqlite3_stmt *psVar2;
  undefined8 uVar3;
  sqlite3 *psVar4;
  ID IVar5;
  long lVar6;
  
  psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  uVar1 = _sqlite3_step(psVar2);
  if (uVar1 - 5 < 2) {
    lVar6 = (long)_parentDB;
    _objc_msgSend(*(undefined8 *)(param_1 + lVar6),"databasePath");
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _NSLog(&cf__s__dDatabasebusy____);
    _objc_release(uVar3);
    _NSLog(&cf_Databasebusy);
    if (param_3 == (ID *)0x0) goto LAB_10113a6a8;
    _objc_msgSend(*(undefined8 *)(param_1 + lVar6),"lastError");
LAB_10113a57c:
    _objc_retainAutoreleasedReturnValue();
    IVar5 = _objc_autorelease();
    *param_3 = IVar5;
  }
  else {
    if ((uVar1 & 0xfffffffe) != 100) {
      if (uVar1 == 1) {
        lVar6 = (long)_parentDB;
        psVar4 = (sqlite3 *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"sqliteHandle");
        _sqlite3_errmsg(psVar4);
        _NSLog(&cf_Errorcallingsqlite3_step__d__s_rs);
        if (param_3 == (ID *)0x0) goto LAB_10113a6a8;
        _objc_msgSend(*(undefined8 *)(param_1 + lVar6),"lastError");
        goto LAB_10113a57c;
      }
      lVar6 = (long)_parentDB;
      psVar4 = (sqlite3 *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"sqliteHandle");
      _sqlite3_errmsg(psVar4);
      if (uVar1 == 0x15) {
        _NSLog(&cf_Errorcallingsqlite3_step__d__s_rs);
        if (param_3 == (ID *)0x0) goto LAB_10113a6a8;
        if (*(long *)(param_1 + lVar6) == 0) {
          _objc_msgSend(&_OBJC_CLASS___NSDictionary,"dictionaryWithObject:forKey:",
                        &cf_parentDBdoesnotexist,
                        *(undefined8 *)PTR__NSLocalizedDescriptionKey_1014440b0);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(&_OBJC_CLASS___NSError,"errorWithDomain:code:userInfo:",&cf_FMDatabase,0x15,
                        uVar3);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = _objc_autorelease();
          *param_3 = IVar5;
          _objc_release(uVar3);
          goto LAB_10113a6a8;
        }
        _objc_msgSend(*(long *)(param_1 + lVar6),"lastError");
      }
      else {
        _NSLog(&cf_Unknownerrorcallingsqlite3_step__d__s_rs);
        if (param_3 == (ID *)0x0) goto LAB_10113a620;
        _objc_msgSend(*(undefined8 *)(param_1 + lVar6),"lastError");
      }
      _objc_retainAutoreleasedReturnValue();
      IVar5 = _objc_autorelease();
      *param_3 = IVar5;
    }
LAB_10113a620:
    if (uVar1 == 100) {
      return 1;
    }
  }
LAB_10113a6a8:
  close((int)param_1);
  return 0;
}




/* Function Stack Size: 0x10 bytes */

bool FMResultSet::hasAnotherRow(ID param_1,SEL param_2)

{
  int iVar1;
  sqlite3 *db;
  
  db = (sqlite3 *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_parentDB),"sqliteHandle");
  iVar1 = _sqlite3_errcode(db);
  return (bool)(iVar1 == 100);
}




/* Function Stack Size: 0x18 bytes */

int FMResultSet::columnIndexForName_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  _objc_msgSend(param_3,"lowercaseString");
  uVar2 = _objc_retainAutoreleasedReturnValue();
  columnNameToIndexMap(param_1,(SEL)"columnNameToIndexMap");
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend(uVar3,"objectForKey:",uVar2);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar4 == 0) {
    _NSLog(&cf_Warning_Icouldnotfindthecolumnnamed_____);
    iVar1 = 0xffffffff;
  }
  else {
    iVar1 = _objc_msgSend(lVar4,"intValue");
  }
  _objc_release(lVar4);
  _objc_release(uVar2);
  return iVar1;
}




/* Function Stack Size: 0x18 bytes */

int FMResultSet::intForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  iVar1 = intForColumnIndex_(param_1,(SEL)"intForColumnIndex:",iVar1);
  return iVar1;
}




/* Function Stack Size: 0x14 bytes */

int FMResultSet::intForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  sqlite3_stmt *psVar2;
  
  psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  iVar1 = _sqlite3_column_int(psVar2,param_3);
  return iVar1;
}




/* Function Stack Size: 0x18 bytes */

long_long FMResultSet::longForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  long_long lVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  lVar2 = longForColumnIndex_(param_1,(SEL)"longForColumnIndex:",iVar1);
  return lVar2;
}




/* Function Stack Size: 0x14 bytes */

long_long FMResultSet::longForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  sqlite3_stmt *psVar1;
  long_long lVar2;
  
  psVar1 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  lVar2 = _sqlite3_column_int64(psVar1,param_3);
  return lVar2;
}




/* Function Stack Size: 0x18 bytes */

long_long FMResultSet::longLongIntForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  long_long lVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  lVar2 = longLongIntForColumnIndex_(param_1,(SEL)"longLongIntForColumnIndex:",iVar1);
  return lVar2;
}




/* Function Stack Size: 0x14 bytes */

long_long FMResultSet::longLongIntForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  sqlite3_stmt *psVar1;
  long_long lVar2;
  
  psVar1 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  lVar2 = _sqlite3_column_int64(psVar1,param_3);
  return lVar2;
}




/* Function Stack Size: 0x18 bytes */

unsigned_long_long FMResultSet::unsignedLongLongIntForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  unsigned_long_long uVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  uVar2 = unsignedLongLongIntForColumnIndex_
                    (param_1,(SEL)"unsignedLongLongIntForColumnIndex:",iVar1);
  return uVar2;
}




/* Function Stack Size: 0x14 bytes */

unsigned_long_long
FMResultSet::unsignedLongLongIntForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  long_long lVar1;
  
  lVar1 = longLongIntForColumnIndex_(param_1,(SEL)"longLongIntForColumnIndex:",param_3);
  return lVar1;
}




/* Function Stack Size: 0x18 bytes */

bool FMResultSet::boolForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  bVar2 = boolForColumnIndex_(param_1,(SEL)"boolForColumnIndex:",iVar1);
  return bVar2;
}




/* Function Stack Size: 0x14 bytes */

bool FMResultSet::boolForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  
  iVar1 = intForColumnIndex_(param_1,(SEL)"intForColumnIndex:",param_3);
  return (bool)(iVar1 != 0);
}




/* Function Stack Size: 0x18 bytes */

double FMResultSet::doubleForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  double dVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  dVar2 = doubleForColumnIndex_(param_1,(SEL)"doubleForColumnIndex:",iVar1);
  return dVar2;
}




/* Function Stack Size: 0x14 bytes */

double FMResultSet::doubleForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  sqlite3_stmt *psVar1;
  double dVar2;
  
  psVar1 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  dVar2 = _sqlite3_column_double(psVar1,param_3);
  return dVar2;
}




/* Function Stack Size: 0x14 bytes */

ID FMResultSet::stringForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  sqlite3_stmt *psVar2;
  uchar *puVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  
  lVar6 = (long)_statement;
  psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"statement");
  iVar1 = _sqlite3_column_type(psVar2,param_3);
  if (iVar1 != 5 && -1 < (int)param_3) {
    psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"statement");
    puVar3 = _sqlite3_column_text(psVar2,param_3);
    if (puVar3 != (uchar *)0x0) {
      _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",puVar3);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      goto LAB_10113ab24;
    }
  }
  uVar4 = 0;
LAB_10113ab24:
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}




/* Function Stack Size: 0x18 bytes */

ID FMResultSet::stringForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  IVar2 = stringForColumnIndex_(param_1,(SEL)"stringForColumnIndex:",iVar1);
  return IVar2;
}




/* Function Stack Size: 0x18 bytes */

ID FMResultSet::dateForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  IVar2 = dateForColumnIndex_(param_1,(SEL)"dateForColumnIndex:",iVar1);
  return IVar2;
}




/* Function Stack Size: 0x14 bytes */

ID FMResultSet::dateForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  sqlite3_stmt *psVar2;
  ulong uVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  undefined8 uVar7;
  
  psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  iVar1 = _sqlite3_column_type(psVar2,param_3);
  if (iVar1 == 5 || (int)param_3 < 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = (long)_parentDB;
    uVar3 = _objc_msgSend(*(undefined8 *)(param_1 + lVar6),"hasDateFormatter");
    if ((uVar3 & 1) == 0) {
      doubleForColumnIndex_(param_1,(SEL)"doubleForColumnIndex:",param_3);
      _objc_msgSend(&_OBJC_CLASS___NSDate,"dateWithTimeIntervalSince1970:");
      uVar7 = _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + lVar6);
      stringForColumnIndex_(param_1,(SEL)"stringForColumnIndex:",param_3);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar7,"dateFromString:",uVar4);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
  }
  IVar5 = _objc_autoreleaseReturnValue(uVar7);
  return IVar5;
}




/* Function Stack Size: 0x18 bytes */

ID FMResultSet::dataForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  IVar2 = dataForColumnIndex_(param_1,(SEL)"dataForColumnIndex:",iVar1);
  return IVar2;
}




/* Function Stack Size: 0x14 bytes */

ID FMResultSet::dataForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  sqlite3_stmt *psVar2;
  void *pvVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  
  lVar6 = (long)_statement;
  psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"statement");
  iVar1 = _sqlite3_column_type(psVar2,param_3);
  if (iVar1 != 5 && -1 < (int)param_3) {
    psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"statement");
    pvVar3 = _sqlite3_column_blob(psVar2,param_3);
    psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"statement");
    iVar1 = _sqlite3_column_bytes(psVar2,param_3);
    if (pvVar3 != (void *)0x0) {
      _objc_msgSend(&_OBJC_CLASS___NSData,"dataWithBytes:length:",pvVar3,(long)iVar1);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      goto LAB_10113adc4;
    }
  }
  uVar4 = 0;
LAB_10113adc4:
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}




/* Function Stack Size: 0x18 bytes */

ID FMResultSet::dataNoCopyForColumn_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  IVar2 = dataNoCopyForColumnIndex_(param_1,(SEL)"dataNoCopyForColumnIndex:",iVar1);
  return IVar2;
}




/* Function Stack Size: 0x14 bytes */

ID FMResultSet::dataNoCopyForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  sqlite3_stmt *psVar2;
  void *pvVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  
  lVar6 = (long)_statement;
  psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"statement");
  iVar1 = _sqlite3_column_type(psVar2,param_3);
  if (iVar1 == 5 || (int)param_3 < 0) {
    uVar4 = 0;
  }
  else {
    psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"statement");
    pvVar3 = _sqlite3_column_blob(psVar2,param_3);
    psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar6),"statement");
    iVar1 = _sqlite3_column_bytes(psVar2,param_3);
    _objc_msgSend(&_OBJC_CLASS___NSData,"dataWithBytesNoCopy:length:freeWhenDone:",pvVar3,
                  (long)iVar1,0);
    uVar4 = _objc_retainAutoreleasedReturnValue();
  }
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}




/* Function Stack Size: 0x14 bytes */

bool FMResultSet::columnIndexIsNull_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  sqlite3_stmt *psVar2;
  
  psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  iVar1 = _sqlite3_column_type(psVar2,param_3);
  return (bool)(iVar1 == 5);
}




/* Function Stack Size: 0x18 bytes */

bool FMResultSet::columnIsNull_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  bVar2 = columnIndexIsNull_(param_1,(SEL)"columnIndexIsNull:",iVar1);
  return bVar2;
}




/* Function Stack Size: 0x14 bytes */

const_char__ FMResultSet::UTF8StringForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  sqlite3_stmt *psVar2;
  uchar *puVar3;
  long lVar4;
  
  lVar4 = (long)_statement;
  psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar4),"statement");
  iVar1 = _sqlite3_column_type(psVar2,param_3);
  if (iVar1 != 5 && -1 < (int)param_3) {
    psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + lVar4),"statement");
    puVar3 = _sqlite3_column_text(psVar2,param_3);
    return (const_char__)puVar3;
  }
  return (const_char__)0x0;
}




/* Function Stack Size: 0x18 bytes */

const_char__ FMResultSet::UTF8StringForColumnName_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  const_char__ pcVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  pcVar2 = UTF8StringForColumnIndex_(param_1,(SEL)"UTF8StringForColumnIndex:",iVar1);
  return pcVar2;
}




/* Function Stack Size: 0x14 bytes */

ID FMResultSet::objectForColumnIndex_(ID param_1,SEL param_2,int param_3)

{
  int iVar1;
  sqlite3_stmt *psVar2;
  long_long lVar3;
  long lVar4;
  ID IVar5;
  
  psVar2 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  iVar1 = _sqlite3_column_type(psVar2,param_3);
  if (iVar1 == 4) {
    dataForColumnIndex_(param_1,(SEL)"dataForColumnIndex:",param_3);
  }
  else if (iVar1 == 2) {
    doubleForColumnIndex_(param_1,(SEL)"doubleForColumnIndex:",param_3);
    _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithDouble:");
  }
  else if (iVar1 == 1) {
    lVar3 = longLongIntForColumnIndex_(param_1,(SEL)"longLongIntForColumnIndex:",param_3);
    _objc_msgSend(&_OBJC_CLASS___NSNumber,"numberWithLongLong:",lVar3);
  }
  else {
    stringForColumnIndex_(param_1,(SEL)"stringForColumnIndex:",param_3);
  }
  lVar4 = _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    _objc_msgSend(&_OBJC_CLASS___NSNull,"null");
    _objc_retainAutoreleasedReturnValue();
  }
  IVar5 = _objc_autoreleaseReturnValue();
  return IVar5;
}




/* Function Stack Size: 0x18 bytes */

ID FMResultSet::objectForColumnName_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  
  iVar1 = columnIndexForName_(param_1,(SEL)"columnIndexForName:",param_3);
  IVar2 = objectForColumnIndex_(param_1,(SEL)"objectForColumnIndex:",iVar1);
  return IVar2;
}




/* Function Stack Size: 0x14 bytes */

ID FMResultSet::columnNameForIndex_(ID param_1,SEL param_2,int param_3)

{
  sqlite3_stmt *psVar1;
  char *pcVar2;
  ID IVar3;
  
  psVar1 = (sqlite3_stmt *)_objc_msgSend(*(undefined8 *)(param_1 + (long)_statement),"statement");
  pcVar2 = _sqlite3_column_name(psVar1,param_3);
  IVar3 = _objc_msgSend(&_OBJC_CLASS___NSString,"stringWithUTF8String:",pcVar2);
  return IVar3;
}




/* Function Stack Size: 0x18 bytes */

void FMResultSet::setParentDB_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + (long)_parentDB);
  *(undefined8 *)(param_1 + (long)_parentDB) = uVar1;
  _objc_release(uVar2);
  return;
}




/* Function Stack Size: 0x14 bytes */

ID FMResultSet::objectAtIndexedSubscript_(ID param_1,SEL param_2,int param_3)

{
  ID IVar1;
  
  IVar1 = objectForColumnIndex_(param_1,(SEL)"objectForColumnIndex:",param_3);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

ID FMResultSet::objectForKeyedSubscript_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objectForColumnName_(param_1,(SEL)"objectForColumnName:",param_3);
  return IVar1;
}




/* Function Stack Size: 0x10 bytes */

ID FMResultSet::query(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_query,1);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void FMResultSet::setQuery_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_atomic();
  return;
}




/* Function Stack Size: 0x10 bytes */

ID FMResultSet::statement(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getProperty(param_1,param_2,(long)_statement,1);
  return IVar1;
}




/* Function Stack Size: 0x18 bytes */

void FMResultSet::setStatement_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_atomic();
  return;
}




/* Function Stack Size: 0x10 bytes */

void FMResultSet::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_columnNameToIndexMap,0);
  _objc_storeStrong(param_1 + (long)_query,0);
  _objc_storeStrong(param_1 + (long)_statement,0);
  _objc_storeStrong(param_1 + (long)_parentDB,0);
  return;
}

