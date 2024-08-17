// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Comp.BatchMove.pas' rev: 35.00 (Windows)

#ifndef Firedac_Comp_BatchmoveHPP
#define Firedac_Comp_BatchmoveHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Util.hpp>
#include <FireDAC.Stan.Factory.hpp>
#include <FireDAC.Comp.Client.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Comp
{
namespace Batchmove
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IFDBatchMoveDriver;
typedef System::DelphiInterface<IFDBatchMoveDriver> _di_IFDBatchMoveDriver;
__interface DELPHIINTERFACE IFDBatchMoveReader;
typedef System::DelphiInterface<IFDBatchMoveReader> _di_IFDBatchMoveReader;
__interface DELPHIINTERFACE IFDBatchMoveWriter;
typedef System::DelphiInterface<IFDBatchMoveWriter> _di_IFDBatchMoveWriter;
class DELPHICLASS TFDBatchMoveDriver;
class DELPHICLASS TFDBatchMoveMappingItem;
class DELPHICLASS TFDBatchMoveMappings;
class DELPHICLASS TFDBatchMove;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TFDBatchMoveDriverClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDBatchMoveDriverClass);
#endif /* _WIN64 */

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2050}") IFDBatchMoveDriver  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetCatalog() = 0 ;
	virtual bool __fastcall GetIsUnicode() = 0 ;
	virtual bool __fastcall GetIsOpen() = 0 ;
	virtual bool __fastcall GetIsBatch() = 0 ;
	virtual int __fastcall GetFieldCount() = 0 ;
	virtual System::UnicodeString __fastcall GetFieldName(int AIndex) = 0 ;
	virtual TFDBatchMove* __fastcall GetBatchMove() = 0 ;
	virtual void __fastcall SetBatchMove(TFDBatchMove* AValue) = 0 ;
	virtual bool __fastcall CheckDefined(bool ARaise) = 0 ;
	virtual void __fastcall Open(bool AStartTx) = 0 ;
	virtual void __fastcall Close(bool AStopTxError) = 0 ;
	virtual void __fastcall Refresh() = 0 ;
	virtual void __fastcall AbortJob() = 0 ;
	virtual bool __fastcall AddAutoFields() = 0 ;
	virtual void __fastcall DeleteAutoFields() = 0 ;
	virtual int __fastcall GetFieldIndex(const System::UnicodeString AName, bool ACheck) = 0 ;
	virtual System::TObject* __fastcall GetFieldInfo(int AIndex, Firedac::Stan::Intf::TFDDataType &AType, unsigned &ASize, int &APrec, int &AScale, bool &AInKey, bool &AIsIdentity) = 0 ;
	__property System::UnicodeString Catalog = {read=GetCatalog};
	__property bool IsUnicode = {read=GetIsUnicode};
	__property bool IsOpen = {read=GetIsOpen};
	__property bool IsBatch = {read=GetIsBatch};
	__property int FieldCount = {read=GetFieldCount};
	__property System::UnicodeString FieldNames[int AIndex] = {read=GetFieldName};
};

enum DECLSPEC_DENUM Firedac_Comp_Batchmove__1 : unsigned int { taDelimSep, taFormatSet, taHeader, taFields };

typedef System::Set<Firedac_Comp_Batchmove__1, Firedac_Comp_Batchmove__1::taDelimSep, Firedac_Comp_Batchmove__1::taFields> TFDBatchMoveAnalyze;

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2051}") IFDBatchMoveReader  : public IFDBatchMoveDriver 
{
	virtual System::UnicodeString __fastcall GetSourceTableName() = 0 ;
	virtual void __fastcall ReadHeader() = 0 ;
	virtual bool __fastcall Eof() = 0 ;
	virtual void __fastcall ReadRecord() = 0 ;
	virtual System::Variant __fastcall GetFieldValue(System::TObject* AField) = 0 ;
	virtual void __fastcall NextRecord() = 0 ;
	virtual void __fastcall GuessFormat(TFDBatchMoveAnalyze AAnalyze = (TFDBatchMoveAnalyze() << Firedac_Comp_Batchmove__1::taDelimSep << Firedac_Comp_Batchmove__1::taHeader << Firedac_Comp_Batchmove__1::taFields )) = 0 ;
	virtual void __fastcall GetTableDefs(Data::Db::TFieldDefs* AFieldDefs, Data::Db::TIndexDefs* AIndexDefs) = 0 ;
	__property System::UnicodeString SourceTableName = {read=GetSourceTableName};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2052}") IFDBatchMoveWriter  : public IFDBatchMoveDriver 
{
	virtual void __fastcall CreateTable() = 0 ;
	virtual void __fastcall StartTransaction() = 0 ;
	virtual void __fastcall CommitTransaction() = 0 ;
	virtual void __fastcall RollbackTransaction() = 0 ;
	virtual void __fastcall Erase(bool ANoUndo) = 0 ;
	virtual void __fastcall WriteHeader() = 0 ;
	virtual void __fastcall SetFieldValue(System::TObject* AField, const System::Variant &AValue) = 0 ;
	virtual bool __fastcall FindRecord() = 0 ;
	virtual int __fastcall InsertRecord() = 0 ;
	virtual int __fastcall UpdateRecord() = 0 ;
	virtual int __fastcall DeleteRecord() = 0 ;
	virtual int __fastcall FlushRecords() = 0 ;
};

enum DECLSPEC_DENUM TFDBatchMoveMode : unsigned int { dmAlwaysInsert, dmAppend, dmUpdate, dmAppendUpdate, dmDelete };

enum DECLSPEC_DENUM TFDBatchMoveAction : unsigned int { paGuess, paSkip, paInsert, paUpdate, paDelete };

enum DECLSPEC_DENUM TFDLogFileAction : unsigned int { laNone, laCreate, laAppend };

enum DECLSPEC_DENUM TFDBatchMovePhase : unsigned int { psPreparing, psStarting, psProgress, psFinishing, psUnpreparing };

typedef void __fastcall (__closure *TFDBatchMoveProgressEvent)(System::TObject* ASender, TFDBatchMovePhase APhase);

typedef void __fastcall (__closure *TFDBatchMoveFindDestRecordEvent)(System::TObject* ASender, bool &AFound);

typedef void __fastcall (__closure *TFDBatchMoveWriteValueEvent)(System::TObject* ASender, TFDBatchMoveMappingItem* AItem, System::Variant &AValue);

typedef void __fastcall (__closure *TFDBatchMoveWriteRecordEvent)(System::TObject* ASender, TFDBatchMoveAction &AAction);

enum DECLSPEC_DENUM TFDBatchMoveOption : unsigned int { poClearDest, poClearDestNoUndo, poIdentityInsert, poCreateDest, poSkipUnmatchedDestFields, poUseTransactions };

typedef System::Set<TFDBatchMoveOption, TFDBatchMoveOption::poClearDest, TFDBatchMoveOption::poUseTransactions> TFDBatchMoveOptions;

typedef void __fastcall (__closure *TFDBatchMoveErrorEvent)(System::TObject* ASender, System::Sysutils::Exception* AException, Firedac::Stan::Intf::TFDErrorAction &AAction);

class PASCALIMPLEMENTATION TFDBatchMoveDriver : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
private:
	TFDBatchMove* FBatchMove;
	
protected:
	virtual bool __fastcall GetIsBatch();
	TFDBatchMove* __fastcall GetBatchMove();
	void __fastcall SetBatchMove(TFDBatchMove* AValue);
	
public:
	__property TFDBatchMove* BatchMove = {read=FBatchMove};
public:
	/* TComponent.Create */ inline __fastcall virtual TFDBatchMoveDriver(System::Classes::TComponent* AOwner) : Firedac::Stan::Intf::TFDComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TFDBatchMoveDriver() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDBatchMoveMappingItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FSourceExpression;
	System::UnicodeString FSourceFieldName;
	Data::Db::TField* FSourceField;
	System::TObject* FSourceFieldObj;
	Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator FSourceEvaluator;
	System::UnicodeString FDestinationFieldName;
	Data::Db::TField* FDestField;
	System::TObject* FDestFieldObj;
	bool FInKey;
	bool FIsIdentity;
	System::UnicodeString __fastcall GetAsText();
	void __fastcall SetAsText(const System::UnicodeString AValue);
	System::Variant __fastcall GetItemBaseValue();
	System::Variant __fastcall GetItemValue();
	TFDBatchMove* __fastcall GetBatchMove();
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	void __fastcall Prepare();
	void __fastcall Unprepare();
	__property TFDBatchMove* BatchMove = {read=GetBatchMove};
	
public:
	__fastcall virtual ~TFDBatchMoveMappingItem();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	void __fastcall Move();
	__property Data::Db::TField* DestField = {read=FDestField};
	__property System::TObject* DestFieldObj = {read=FDestFieldObj};
	__property Data::Db::TField* SourceField = {read=FSourceField};
	__property System::TObject* SourceFieldObj = {read=FSourceFieldObj};
	__property Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator SourceEvaluator = {read=FSourceEvaluator};
	__property System::Variant ItemValue = {read=GetItemValue};
	__property bool InKey = {read=FInKey, nodefault};
	__property bool IsIdentity = {read=FIsIdentity, nodefault};
	__property System::UnicodeString AsText = {read=GetAsText, write=SetAsText};
	
__published:
	__property System::UnicodeString SourceFieldName = {read=FSourceFieldName, write=FSourceFieldName};
	__property System::UnicodeString SourceExpression = {read=FSourceExpression, write=FSourceExpression};
	__property System::UnicodeString DestinationFieldName = {read=FDestinationFieldName, write=FDestinationFieldName};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TFDBatchMoveMappingItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDBatchMoveMappings : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFDBatchMoveMappingItem* operator[](int Index) { return this->Items[Index]; }
	
private:
	TFDBatchMove* FBatchMove;
	bool FMappingsAuto;
	bool FReaderAutoFields;
	bool FWriterAutoFields;
	System::UnicodeString FKeyFields;
	System::Variant FKeyValues;
	HIDESBASE TFDBatchMoveMappingItem* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, TFDBatchMoveMappingItem* const AValue);
	System::Variant __fastcall GetKeyValues();
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TFDBatchMoveMappings(TFDBatchMove* ABatchMove);
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	HIDESBASE TFDBatchMoveMappingItem* __fastcall Add()/* overload */;
	HIDESBASE void __fastcall Add(const System::UnicodeString AMapItem)/* overload */;
	void __fastcall AddAll();
	void __fastcall Prepare();
	void __fastcall Unprepare();
	void __fastcall Move(bool AKeysOnly);
	int __fastcall IndexOfName(const System::UnicodeString AName);
	__property TFDBatchMove* BatchMove = {read=FBatchMove};
	__property System::UnicodeString KeyFields = {read=FKeyFields};
	__property System::Variant KeyValues = {read=GetKeyValues};
	__property TFDBatchMoveMappingItem* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFDBatchMoveMappings() { }
	
};


class PASCALIMPLEMENTATION TFDBatchMove : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
private:
	_di_IFDBatchMoveReader FReader;
	_di_IFDBatchMoveWriter FWriter;
	TFDBatchMoveMode FMode;
	TFDBatchMoveOptions FOptions;
	TFDBatchMoveMappings* FMappings;
	TFDLogFileAction FLogFileAction;
	System::UnicodeString FLogFileName;
	Firedac::Stan::Intf::TFDEncoding FLogFileEncoding;
	int FCommitCount;
	int FStatisticsInterval;
	TFDBatchMoveAnalyze FAnalyze;
	int FAnalyzeSample;
	int FMaxErrors;
	TFDBatchMoveProgressEvent FOnProgress;
	TFDBatchMoveFindDestRecordEvent FOnFindDestRecord;
	TFDBatchMoveWriteValueEvent FOnWriteValue;
	TFDBatchMoveWriteRecordEvent FOnWriteRecord;
	TFDBatchMoveErrorEvent FOnError;
	int FDeleteCount;
	int FInsertCount;
	int FUpdateCount;
	int FReadCount;
	int FErrorCount;
	bool FAborting;
	System::Classes::TStream* FLogStream;
	bool __fastcall FindDestRecord();
	void __fastcall SetMappings(TFDBatchMoveMappings* const AValue);
	int __fastcall GetWriteCount();
	void __fastcall DoStatistic(TFDBatchMovePhase APhase);
	Firedac::Stan::Util::TFDTextFile* __fastcall InitLogFile();
	void __fastcall ProcessException(System::Sysutils::Exception* E, Firedac::Stan::Util::TFDTextFile* ALog, /* out */ Firedac::Stan::Intf::TFDErrorAction &AAction);
	void __fastcall DeleteExceptionFile(Firedac::Stan::Util::TFDTextFile* ALog);
	void __fastcall SetReader(const _di_IFDBatchMoveReader AValue);
	void __fastcall SetWriter(const _di_IFDBatchMoveWriter AValue);
	void __fastcall SetDriver(_di_IFDBatchMoveDriver &ADriver, const _di_IFDBatchMoveDriver AValue);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	__fastcall virtual TFDBatchMove(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDBatchMove();
	int __fastcall Execute();
	void __fastcall AbortJob();
	void __fastcall GuessFormat(TFDBatchMoveAnalyze AAnalyze = (TFDBatchMoveAnalyze() << Firedac_Comp_Batchmove__1::taDelimSep << Firedac_Comp_Batchmove__1::taHeader << Firedac_Comp_Batchmove__1::taFields ));
	void __fastcall CheckReader();
	void __fastcall CheckWriter();
	__property int ReadCount = {read=FReadCount, nodefault};
	__property int InsertCount = {read=FInsertCount, nodefault};
	__property int UpdateCount = {read=FUpdateCount, nodefault};
	__property int DeleteCount = {read=FDeleteCount, nodefault};
	__property int WriteCount = {read=GetWriteCount, nodefault};
	__property int ErrorCount = {read=FErrorCount, nodefault};
	__property System::Classes::TStream* LogStream = {read=FLogStream, write=FLogStream};
	
__published:
	__property _di_IFDBatchMoveReader Reader = {read=FReader, write=SetReader};
	__property _di_IFDBatchMoveWriter Writer = {read=FWriter, write=SetWriter};
	__property TFDBatchMoveMode Mode = {read=FMode, write=FMode, default=0};
	__property TFDBatchMoveOptions Options = {read=FOptions, write=FOptions, default=60};
	__property TFDBatchMoveMappings* Mappings = {read=FMappings, write=SetMappings};
	__property TFDLogFileAction LogFileAction = {read=FLogFileAction, write=FLogFileAction, default=0};
	__property System::UnicodeString LogFileName = {read=FLogFileName, write=FLogFileName};
	__property Firedac::Stan::Intf::TFDEncoding LogFileEncoding = {read=FLogFileEncoding, write=FLogFileEncoding, default=0};
	__property int CommitCount = {read=FCommitCount, write=FCommitCount, default=100};
	__property int StatisticsInterval = {read=FStatisticsInterval, write=FStatisticsInterval, default=100};
	__property TFDBatchMoveAnalyze Analyze = {read=FAnalyze, write=FAnalyze, default=0};
	__property int AnalyzeSample = {read=FAnalyzeSample, write=FAnalyzeSample, default=10};
	__property int MaxErrors = {read=FMaxErrors, write=FMaxErrors, default=0};
	__property TFDBatchMoveProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property TFDBatchMoveFindDestRecordEvent OnFindDestRecord = {read=FOnFindDestRecord, write=FOnFindDestRecord};
	__property TFDBatchMoveWriteValueEvent OnWriteValue = {read=FOnWriteValue, write=FOnWriteValue};
	__property TFDBatchMoveWriteRecordEvent OnWriteRecord = {read=FOnWriteRecord, write=FOnWriteRecord};
	__property TFDBatchMoveErrorEvent OnError = {read=FOnError, write=FOnError};
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Batchmove */
}	/* namespace Comp */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_COMP_BATCHMOVE)
using namespace Firedac::Comp::Batchmove;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_COMP)
using namespace Firedac::Comp;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC)
using namespace Firedac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Firedac_Comp_BatchmoveHPP
