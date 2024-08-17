// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Stan.Intf.pas' rev: 35.00 (Windows)

#ifndef Firedac_Stan_IntfHPP
#define Firedac_Stan_IntfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.IniFiles.hpp>
#include <System.Variants.hpp>
#include <System.TypInfo.hpp>
#include <System.SyncObjs.hpp>
#include <System.Generics.Collections.hpp>
#include <Data.FmtBcd.hpp>
#include <Data.SqlTimSt.hpp>
#include <FireDAC.Stan.Consts.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Stan
{
namespace Intf
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDRDBMSKinds;
__interface DELPHIINTERFACE IFDDataStoredObject;
typedef System::DelphiInterface<IFDDataStoredObject> _di_IFDDataStoredObject;
struct TFDParseFmtSettings;
class DELPHICLASS TFDValWrapper;
class DELPHICLASS TFDStringList;
__interface DELPHIINTERFACE IFDStanComponentReference;
typedef System::DelphiInterface<IFDStanComponentReference> _di_IFDStanComponentReference;
class DELPHICLASS TFDComponent;
__interface DELPHIINTERFACE IFDStanObject;
typedef System::DelphiInterface<IFDStanObject> _di_IFDStanObject;
__interface DELPHIINTERFACE IFDStanObjectHost;
typedef System::DelphiInterface<IFDStanObjectHost> _di_IFDStanObjectHost;
__interface DELPHIINTERFACE IFDStanObjectFactory;
typedef System::DelphiInterface<IFDStanObjectFactory> _di_IFDStanObjectFactory;
__interface DELPHIINTERFACE IFDStanDefinitionStorage;
typedef System::DelphiInterface<IFDStanDefinitionStorage> _di_IFDStanDefinitionStorage;
__interface DELPHIINTERFACE IFDStanDefinition;
typedef System::DelphiInterface<IFDStanDefinition> _di_IFDStanDefinition;
__interface DELPHIINTERFACE IFDStanDefinitions;
typedef System::DelphiInterface<IFDStanDefinitions> _di_IFDStanDefinitions;
class DELPHICLASS TFDConnectionDefParams;
__interface DELPHIINTERFACE IFDStanConnectionDef;
typedef System::DelphiInterface<IFDStanConnectionDef> _di_IFDStanConnectionDef;
__interface DELPHIINTERFACE IFDStanConnectionDefs;
typedef System::DelphiInterface<IFDStanConnectionDefs> _di_IFDStanConnectionDefs;
__interface DELPHIINTERFACE IFDStanConnectionDefParams;
typedef System::DelphiInterface<IFDStanConnectionDefParams> _di_IFDStanConnectionDefParams;
__interface DELPHIINTERFACE IFDStanErrorHandler;
typedef System::DelphiInterface<IFDStanErrorHandler> _di_IFDStanErrorHandler;
__interface DELPHIINTERFACE IFDStanExpressionDataSource;
typedef System::DelphiInterface<IFDStanExpressionDataSource> _di_IFDStanExpressionDataSource;
__interface DELPHIINTERFACE IFDStanExpressionEvaluator;
typedef System::DelphiInterface<IFDStanExpressionEvaluator> _di_IFDStanExpressionEvaluator;
__interface DELPHIINTERFACE IFDStanExpressionParser;
typedef System::DelphiInterface<IFDStanExpressionParser> _di_IFDStanExpressionParser;
__interface DELPHIINTERFACE IFDStanAsyncHandler;
typedef System::DelphiInterface<IFDStanAsyncHandler> _di_IFDStanAsyncHandler;
__interface DELPHIINTERFACE IFDStanAsyncOperation;
typedef System::DelphiInterface<IFDStanAsyncOperation> _di_IFDStanAsyncOperation;
__interface DELPHIINTERFACE IFDStanAsyncExecutor;
typedef System::DelphiInterface<IFDStanAsyncExecutor> _di_IFDStanAsyncExecutor;
class DELPHICLASS TFDStorableObject;
__interface DELPHIINTERFACE IFDStanStorage;
typedef System::DelphiInterface<IFDStanStorage> _di_IFDStanStorage;
class DELPHICLASS TFDStorageManager;
__interface DELPHIINTERFACE IFDMoniClientOutputHandler;
typedef System::DelphiInterface<IFDMoniClientOutputHandler> _di_IFDMoniClientOutputHandler;
__interface DELPHIINTERFACE IFDMoniClient;
typedef System::DelphiInterface<IFDMoniClient> _di_IFDMoniClient;
__interface DELPHIINTERFACE IFDMoniRemoteClient;
typedef System::DelphiInterface<IFDMoniRemoteClient> _di_IFDMoniRemoteClient;
__interface DELPHIINTERFACE IFDMoniCustomClient;
typedef System::DelphiInterface<IFDMoniCustomClient> _di_IFDMoniCustomClient;
__interface DELPHIINTERFACE IFDMoniFlatFileClient;
typedef System::DelphiInterface<IFDMoniFlatFileClient> _di_IFDMoniFlatFileClient;
class DELPHICLASS TFDMoniAdapterHelper;
__interface DELPHIINTERFACE IFDMoniAdapter;
typedef System::DelphiInterface<IFDMoniAdapter> _di_IFDMoniAdapter;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TFDConnectionDefParamsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDConnectionDefParamsClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TFDStorableObjectClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDStorableObjectClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDRDBMSKinds : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	static const System::Int8 Unknown = System::Int8(0x0);
	
	static const System::Int8 Oracle = System::Int8(0x1);
	
	static const System::Int8 MSSQL = System::Int8(0x2);
	
	static const System::Int8 MSAccess = System::Int8(0x3);
	
	static const System::Int8 MySQL = System::Int8(0x4);
	
	static const System::Int8 DB2 = System::Int8(0x5);
	
	static const System::Int8 SQLAnywhere = System::Int8(0x6);
	
	static const System::Int8 Advantage = System::Int8(0x7);
	
	static const System::Int8 Interbase = System::Int8(0x8);
	
	static const System::Int8 Firebird = System::Int8(0x9);
	
	static const System::Int8 SQLite = System::Int8(0xa);
	
	static const System::Int8 PostgreSQL = System::Int8(0xb);
	
	static const System::Int8 NexusDB = System::Int8(0xc);
	
	static const System::Int8 DataSnap = System::Int8(0xd);
	
	static const System::Int8 Informix = System::Int8(0xe);
	
	static const System::Int8 Teradata = System::Int8(0xf);
	
	static const System::Int8 MongoDB = System::Int8(0x10);
	
	static const System::Int8 Other = System::Int8(0x11);
	
public:
	/* TObject.Create */ inline __fastcall TFDRDBMSKinds() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFDRDBMSKinds() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef int TFDRDBMSKind;

enum DECLSPEC_DENUM TFDDataType : unsigned int { dtUnknown, dtBoolean, dtSByte, dtInt16, dtInt32, dtInt64, dtByte, dtUInt16, dtUInt32, dtUInt64, dtSingle, dtDouble, dtExtended, dtCurrency, dtBCD, dtFmtBCD, dtDateTime, dtTime, dtDate, dtDateTimeStamp, dtTimeIntervalFull, dtTimeIntervalYM, dtTimeIntervalDS, dtAnsiString, dtWideString, dtByteString, dtBlob, dtMemo, dtWideMemo, dtXML, dtHBlob, dtHMemo, dtWideHMemo, dtHBFile, dtRowSetRef, dtCursorRef, dtRowRef, dtArrayRef, dtParentRowRef, dtGUID, dtObject };

typedef System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject> TFDDataTypes;

enum DECLSPEC_DENUM TFDDataAttribute : unsigned int { caSearchable, caAllowNull, caFixedLen, caBlobData, caReadOnly, caAutoInc, caROWID, caDefault, caRowVersion, caInternal, caCalculated, caVolatile, caUnnamed, caVirtual, caBase, caExpr };

typedef System::Set<TFDDataAttribute, TFDDataAttribute::caSearchable, TFDDataAttribute::caExpr> TFDDataAttributes;

enum DECLSPEC_DENUM TFDDataOption : unsigned int { coAllowNull, coUnique, coReadOnly, coInUpdate, coInWhere, coInKey, coAfterInsChanged, coAfterUpdChanged };

typedef System::Set<TFDDataOption, TFDDataOption::coAllowNull, TFDDataOption::coAfterUpdChanged> TFDDataOptions;

enum DECLSPEC_DENUM TFDStreamMode : unsigned int { smOpenRead, smOpenWrite, smOpenReadWrite };

enum DECLSPEC_DENUM TFDCompareDataOption : unsigned int { coNoCase, coPartial, coNullFirst, coDescNullLast, coDescending, coCache, coNullsNotEqual, coNoSymbols, coExactMatch, coDigitsAsNumbers };

typedef System::Set<TFDCompareDataOption, TFDCompareDataOption::coNoCase, TFDCompareDataOption::coDigitsAsNumbers> TFDCompareDataOptions;

enum DECLSPEC_DENUM TFDSortOption : unsigned int { soNoCase, soNullFirst, soDescNullLast, soDescending, soUnique, soPrimary, soNoSymbols, soDigitsAsNumbers };

typedef System::Set<TFDSortOption, TFDSortOption::soNoCase, TFDSortOption::soDigitsAsNumbers> TFDSortOptions;

enum DECLSPEC_DENUM TFDLocateOption : unsigned int { loPartial, loNearest, loNoCase, loLast, loExcludeKeyRow, loUseRowID, loFromCurrent, loBackward };

typedef System::Set<TFDLocateOption, TFDLocateOption::loPartial, TFDLocateOption::loBackward> TFDLocateOptions;

enum DECLSPEC_DENUM TFDMergeMetaMode : unsigned int { mmNone, mmMerge, mmAdd, mmUpdate, mmAddOrError, mmError };

enum DECLSPEC_DENUM TFDMergeDataMode : unsigned int { dmNone, dmDataSet, dmDataAppend, dmDataMerge, dmDeltaSet, dmDeltaAppend, dmDeltaMerge };

enum DECLSPEC_DENUM Firedac_Stan_Intf__2 : unsigned int { moPreserveState };

typedef System::Set<Firedac_Stan_Intf__2, Firedac_Stan_Intf__2::moPreserveState, Firedac_Stan_Intf__2::moPreserveState> TFDMergeOptions;

typedef _di_IFDDataStoredObject *PFDDataStoredObject;

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2000}") IFDDataStoredObject  : public System::IInterface 
{
	virtual int __fastcall Compare(const _di_IFDDataStoredObject AOtherObjInt, TFDCompareDataOptions AOptions) = 0 ;
};

typedef __int64 *PLargeInt;

typedef unsigned __int64 *PULargeInt;

typedef System::PByte *PPByte;

typedef System::RawByteString TFDByteString;

typedef System::AnsiString TFDAnsiString;

typedef char * PFDAnsiString;

typedef char TFDAnsiChar;

typedef System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)> TFDCharSet;

typedef System::Set<System::Byte, 0, 255> TFDByteSet;

typedef System::DynamicArray<System::UnicodeString> TFDStringArray;

typedef System::DynamicArray<System::Variant> TFDVariantArray;

typedef NativeUInt TFDsize_t;

typedef NativeInt TFDssize_t;

#ifndef _WIN64
typedef int TFDCounter;
#else /* _WIN64 */
typedef __int64 TFDCounter;
#endif /* _WIN64 */

typedef unsigned __int64 TFDVersion;

typedef NativeUInt *PFDsize_t;

struct DECLSPEC_DRECORD TFDParseFmtSettings
{
public:
	System::WideChar FDelimiter;
	System::WideChar FQuote;
	System::WideChar FQuote1;
	System::WideChar FQuote2;
};


typedef System::Sysutils::TFormatSettings *PFDFormatSettings;

enum DECLSPEC_DENUM TFDEncoding : unsigned int { ecDefault, ecUTF8, ecUTF16, ecANSI };

enum DECLSPEC_DENUM TFDTextEndOfLine : unsigned int { elDefault, elWindows, elPosix };

typedef unsigned TFDLocalID;

typedef System::Classes::TList TFDPtrList;

typedef System::Classes::TList TFDObjList;

typedef System::Classes::TList TFDClassList;

typedef System::Classes::TThreadList TFDThreadObjList;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDValWrapper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	NativeUInt FVal;
	int __fastcall GetInt();
	void * __fastcall GetPtr();
	
public:
	__fastcall TFDValWrapper(void * APtr)/* overload */;
	__fastcall TFDValWrapper(unsigned AVal)/* overload */;
	__property void * AsPtr = {read=GetPtr};
	__property int AsInt = {read=GetInt, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDValWrapper() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDStringList : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	void * __fastcall GetPtrs(int AIndex);
	void __fastcall SetPtrs(int AIndex, const void * AValue);
	unsigned __fastcall GetInts(int AIndex);
	void __fastcall SetInts(int AIndex, const unsigned AValue);
	
public:
	void __fastcall AddPtr(const System::UnicodeString AStr, void * APtr);
	void __fastcall AddInt(const System::UnicodeString AStr, unsigned AInt);
	__property void * Ptrs[int AIndex] = {read=GetPtrs, write=SetPtrs};
	__property unsigned Ints[int AIndex] = {read=GetInts, write=SetInts};
public:
	/* TStringList.Create */ inline __fastcall TFDStringList()/* overload */ : System::Classes::TStringList() { }
	/* TStringList.Create */ inline __fastcall TFDStringList(bool OwnsObjects)/* overload */ : System::Classes::TStringList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall TFDStringList(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall TFDStringList(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall TFDStringList(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Classes::TStringList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TFDStringList() { }
	
};


__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2029}") IFDStanComponentReference  : public System::IInterface 
{
	virtual void __fastcall SetComponentReference(const System::Classes::_di_IInterfaceComponentReference AValue) = 0 ;
};

class PASCALIMPLEMENTATION TFDComponent : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	/* TComponent.Create */ inline __fastcall virtual TFDComponent(System::Classes::TComponent* AOwner) : System::Classes::TComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TFDComponent() { }
	
};


__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2001}") IFDStanObject  : public System::IInterface 
{
	virtual System::Classes::TComponentName __fastcall GetName() = 0 ;
	virtual _di_IFDStanObject __fastcall GetParent() = 0 ;
	virtual void __fastcall BeforeReuse() = 0 ;
	virtual void __fastcall AfterReuse() = 0 ;
	virtual void __fastcall SetOwner(System::TObject* const AOwner, const System::Classes::TComponentName ARole) = 0 ;
	__property System::Classes::TComponentName Name = {read=GetName};
	__property _di_IFDStanObject Parent = {read=GetParent};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2002}") IFDStanObjectHost  : public System::IInterface 
{
	virtual System::Classes::TComponentName __fastcall GetObjectKindName() = 0 ;
	virtual void __fastcall CreateObject(/* out */ _di_IFDStanObject &AObject) = 0 ;
	__property System::Classes::TComponentName ObjectKindName = {read=GetObjectKindName};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2003}") IFDStanObjectFactory  : public System::IInterface 
{
	virtual void __fastcall Open(const _di_IFDStanObjectHost AHost, const _di_IFDStanDefinition ADef) = 0 ;
	virtual void __fastcall Close() = 0 ;
	virtual void __fastcall Acquire(/* out */ _di_IFDStanObject &AObject) = 0 ;
	virtual void __fastcall Release(const _di_IFDStanObject AObject) = 0 ;
};

enum DECLSPEC_DENUM TFDDefinitionState : unsigned int { asAdded, asModified, asDeleted, asLoading, asLoaded };

enum DECLSPEC_DENUM TFDDefinitionStyle : unsigned int { atPersistent, atPrivate, atTemporary };

enum DECLSPEC_DENUM TFDMonitorBy : unsigned int { mbNone, mbFlatFile, mbRemote, mbCustom };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2012}") IFDStanDefinitionStorage  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetFileName() = 0 ;
	virtual void __fastcall SetFileName(const System::UnicodeString AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetGlobalFileName() = 0 ;
	virtual void __fastcall SetGlobalFileName(const System::UnicodeString AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetDefaultFileName() = 0 ;
	virtual void __fastcall SetDefaultFileName(const System::UnicodeString AValue) = 0 ;
	virtual System::Inifiles::TCustomIniFile* __fastcall CreateIniFile() = 0 ;
	virtual System::UnicodeString __fastcall ActualFileName() = 0 ;
	__property System::UnicodeString FileName = {read=GetFileName, write=SetFileName};
	__property System::UnicodeString GlobalFileName = {read=GetGlobalFileName, write=SetGlobalFileName};
	__property System::UnicodeString DefaultFileName = {read=GetDefaultFileName, write=SetDefaultFileName};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2013}") IFDStanDefinition  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual TFDDefinitionState __fastcall GetState() = 0 ;
	virtual TFDDefinitionStyle __fastcall GetStyle() = 0 ;
	virtual System::LongBool __fastcall GetAsBoolean(const System::UnicodeString AName) = 0 ;
	virtual int __fastcall GetAsInteger(const System::UnicodeString AName) = 0 ;
	virtual System::UnicodeString __fastcall GetAsString(const System::UnicodeString AName) = 0 ;
	virtual System::UnicodeString __fastcall GetAsXString(const System::UnicodeString AName) = 0 ;
	virtual _di_IFDStanDefinition __fastcall GetParentDefinition() = 0 ;
	virtual System::Classes::TStrings* __fastcall GetParams() = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetOnChanging() = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetOnChanged() = 0 ;
	virtual bool __fastcall GetUpdatable() = 0 ;
	virtual void __fastcall SetName(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetParams(System::Classes::TStrings* const AValue) = 0 ;
	virtual void __fastcall SetAsBoolean(const System::UnicodeString AName, const System::LongBool AValue) = 0 ;
	virtual void __fastcall SetAsYesNo(const System::UnicodeString AName, const System::LongBool AValue) = 0 ;
	virtual void __fastcall SetAsInteger(const System::UnicodeString AName, const int AValue) = 0 ;
	virtual void __fastcall SetAsString(const System::UnicodeString AName, const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetParentDefinition(const _di_IFDStanDefinition AValue) = 0 ;
	virtual void __fastcall SetOnChanging(System::Classes::TNotifyEvent AValue) = 0 ;
	virtual void __fastcall SetOnChanged(System::Classes::TNotifyEvent AValue) = 0 ;
	virtual void __fastcall Apply() = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual void __fastcall Cancel() = 0 ;
	virtual void __fastcall Delete() = 0 ;
	virtual void __fastcall MarkPersistent() = 0 ;
	virtual void __fastcall MarkUnchanged() = 0 ;
	virtual void __fastcall OverrideBy(const _di_IFDStanDefinition ADefinition, bool AAll) = 0 ;
	virtual System::UnicodeString __fastcall ParseString(const System::UnicodeString AStr, System::Classes::TStrings* AKeywords = (System::Classes::TStrings*)(0x0)) = 0 /* overload */;
	virtual System::UnicodeString __fastcall ParseString(const System::UnicodeString AStr, System::Classes::TStrings* AKeywords, const TFDParseFmtSettings &AFmt) = 0 /* overload */;
	virtual System::UnicodeString __fastcall BuildString(System::Classes::TStrings* AKeywords = (System::Classes::TStrings*)(0x0)) = 0 /* overload */;
	virtual System::UnicodeString __fastcall BuildString(System::Classes::TStrings* AKeywords, const TFDParseFmtSettings &AFmt) = 0 /* overload */;
	virtual bool __fastcall HasValue(const System::UnicodeString AName) = 0 /* overload */;
	virtual bool __fastcall HasValue(const System::UnicodeString AName, int &ALevel) = 0 /* overload */;
	virtual bool __fastcall OwnValue(const System::UnicodeString AName) = 0 ;
	virtual bool __fastcall IsSpecified(const System::UnicodeString AName) = 0 ;
	virtual void __fastcall ToggleUpdates(unsigned APassCode, bool ADisableDelete, bool ADisableModify) = 0 ;
	virtual void __fastcall BaseTrace(const _di_IFDMoniClient AMonitor) = 0 ;
	virtual void __fastcall Trace(const _di_IFDMoniClient AMonitor) = 0 ;
	__property TFDDefinitionState State = {read=GetState};
	__property TFDDefinitionStyle Style = {read=GetStyle};
	__property bool Updatable = {read=GetUpdatable};
	__property System::UnicodeString AsXString[const System::UnicodeString AName] = {read=GetAsXString};
	__property System::UnicodeString AsString[const System::UnicodeString AName] = {read=GetAsString, write=SetAsString};
	__property System::LongBool AsBoolean[const System::UnicodeString AName] = {read=GetAsBoolean, write=SetAsBoolean};
	__property System::LongBool AsYesNo[const System::UnicodeString AName] = {read=GetAsBoolean, write=SetAsYesNo};
	__property int AsInteger[const System::UnicodeString AName] = {read=GetAsInteger, write=SetAsInteger};
	__property _di_IFDStanDefinition ParentDefinition = {read=GetParentDefinition, write=SetParentDefinition};
	__property System::Classes::TStrings* Params = {read=GetParams, write=SetParams};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property System::Classes::TNotifyEvent OnChanging = {read=GetOnChanging, write=SetOnChanging};
	__property System::Classes::TNotifyEvent OnChanged = {read=GetOnChanged, write=SetOnChanged};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2014}") IFDStanDefinitions  : public System::IInterface 
{
	
public:
	_di_IFDStanDefinition operator[](int AIndex) { return this->Items[AIndex]; }
	virtual int __fastcall GetCount() = 0 ;
	virtual _di_IFDStanDefinition __fastcall GetItems(int AIndex) = 0 ;
	virtual bool __fastcall GetAutoLoad() = 0 ;
	virtual _di_IFDStanDefinitionStorage __fastcall GetStorage() = 0 ;
	virtual bool __fastcall GetLoaded() = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetBeforeLoad() = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetAfterLoad() = 0 ;
	virtual bool __fastcall GetUpdatable() = 0 ;
	virtual System::UnicodeString __fastcall GetName() = 0 ;
	virtual void __fastcall SetAutoLoad(bool AValue) = 0 ;
	virtual void __fastcall SetBeforeLoad(System::Classes::TNotifyEvent AValue) = 0 ;
	virtual void __fastcall SetAfterLoad(System::Classes::TNotifyEvent AValue) = 0 ;
	virtual void __fastcall SetName(const System::UnicodeString AValue) = 0 ;
	virtual _di_IFDStanDefinition __fastcall Add() = 0 ;
	virtual _di_IFDStanDefinition __fastcall AddTemporary() = 0 ;
	virtual _di_IFDStanDefinition __fastcall FindDefinition(const System::UnicodeString AName) = 0 ;
	virtual _di_IFDStanDefinition __fastcall DefinitionByName(const System::UnicodeString AName) = 0 ;
	virtual void __fastcall Cancel() = 0 ;
	virtual void __fastcall Save(bool AIfModified = true) = 0 ;
	virtual bool __fastcall Load() = 0 ;
	virtual bool __fastcall Refresh() = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual void __fastcall BeginRead() = 0 ;
	virtual void __fastcall EndRead() = 0 ;
	virtual void __fastcall BeginWrite() = 0 ;
	virtual void __fastcall EndWrite() = 0 ;
	__property int Count = {read=GetCount};
	__property _di_IFDStanDefinition Items[int AIndex] = {read=GetItems/*, default*/};
	__property bool Loaded = {read=GetLoaded};
	__property bool Updatable = {read=GetUpdatable};
	__property System::UnicodeString Name = {read=GetName, write=SetName};
	__property bool AutoLoad = {read=GetAutoLoad, write=SetAutoLoad};
	__property _di_IFDStanDefinitionStorage Storage = {read=GetStorage};
	__property System::Classes::TNotifyEvent BeforeLoad = {read=GetBeforeLoad, write=SetBeforeLoad};
	__property System::Classes::TNotifyEvent AfterLoad = {read=GetAfterLoad, write=SetAfterLoad};
};

class PASCALIMPLEMENTATION TFDConnectionDefParams : public TFDStringList
{
	typedef TFDStringList inherited;
	
private:
	System::UnicodeString __fastcall GetDriverID();
	void __fastcall SetDriverID(const System::UnicodeString AValue);
	bool __fastcall GetPooled();
	void __fastcall SetPooled(const bool AValue);
	System::Sysutils::TFileName __fastcall GetDatabase();
	void __fastcall SetDatabase(const System::Sysutils::TFileName AValue);
	System::UnicodeString __fastcall GetUserName();
	void __fastcall SetUserName(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetPassword();
	void __fastcall SetPassword(const System::UnicodeString AValue);
	TFDMonitorBy __fastcall GetMonitorBy();
	void __fastcall SetMonitorBy(const TFDMonitorBy AValue);
	bool __fastcall GetMonitorByInitial();
	void __fastcall SetMonitorByInitial(const bool AValue);
	int __fastcall GetPoolCleanupTimeout();
	void __fastcall SetPoolCleanupTimeout(const int AValue);
	int __fastcall GetPoolExpireTimeout();
	void __fastcall SetPoolExpireTimeout(const int AValue);
	int __fastcall GetPoolMaximumItems();
	void __fastcall SetPoolMaximumItems(const int AValue);
	System::UnicodeString __fastcall GetNewPassword();
	void __fastcall SetNewPassword(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetExpandedDatabase();
	System::UnicodeString __fastcall GetConnectionDef();
	void __fastcall SetConnectionDef(const System::UnicodeString AValue);
	
protected:
	_di_IFDStanDefinition FDef;
	
public:
	__fastcall TFDConnectionDefParams(const _di_IFDStanDefinition ADef);
	__fastcall virtual ~TFDConnectionDefParams();
	__property System::UnicodeString ExpandedDatabase = {read=GetExpandedDatabase};
	__property System::UnicodeString NewPassword = {read=GetNewPassword, write=SetNewPassword};
	__property System::UnicodeString ConnectionDef = {read=GetConnectionDef, write=SetConnectionDef};
	
__published:
	__property System::UnicodeString DriverID = {read=GetDriverID, write=SetDriverID, stored=false};
	__property System::Sysutils::TFileName Database = {read=GetDatabase, write=SetDatabase, stored=false};
	__property System::UnicodeString UserName = {read=GetUserName, write=SetUserName, stored=false};
	__property System::UnicodeString Password = {read=GetPassword, write=SetPassword, stored=false};
	__property TFDMonitorBy MonitorBy = {read=GetMonitorBy, write=SetMonitorBy, stored=false, nodefault};
	__property bool MonitorByInitial = {read=GetMonitorByInitial, write=SetMonitorByInitial, stored=false, nodefault};
	__property bool Pooled = {read=GetPooled, write=SetPooled, stored=false, nodefault};
	__property int PoolCleanupTimeout = {read=GetPoolCleanupTimeout, write=SetPoolCleanupTimeout, stored=false, nodefault};
	__property int PoolExpireTimeout = {read=GetPoolExpireTimeout, write=SetPoolExpireTimeout, stored=false, nodefault};
	__property int PoolMaximumItems = {read=GetPoolMaximumItems, write=SetPoolMaximumItems, stored=false, nodefault};
};


__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2015}") IFDStanConnectionDef  : public IFDStanDefinition 
{
	virtual TFDConnectionDefParams* __fastcall GetConnectionDefParams() = 0 ;
	virtual void __fastcall SetConnectionDefParams(TFDConnectionDefParams* AValue) = 0 ;
	virtual void __fastcall WriteOptions(System::TObject* AFormatOptions, System::TObject* AUpdateOptions, System::TObject* AFetchOptions, System::TObject* AResourceOptions) = 0 ;
	virtual void __fastcall ReadOptions(System::TObject* AFormatOptions, System::TObject* AUpdateOptions, System::TObject* AFetchOptions, System::TObject* AResourceOptions) = 0 ;
	__property TFDConnectionDefParams* Params = {read=GetConnectionDefParams, write=SetConnectionDefParams};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2016}") IFDStanConnectionDefs  : public IFDStanDefinitions 
{
	
public:
	_di_IFDStanConnectionDef operator[](int AIndex) { return this->Items[AIndex]; }
	virtual _di_IFDStanConnectionDef __fastcall GetConnectionDefs(int AIndex) = 0 ;
	virtual _di_IFDStanConnectionDef __fastcall AddConnectionDef() = 0 ;
	virtual _di_IFDStanConnectionDef __fastcall FindConnectionDef(const System::UnicodeString AName) = 0 ;
	virtual _di_IFDStanConnectionDef __fastcall ConnectionDefByName(const System::UnicodeString AName) = 0 ;
	__property _di_IFDStanConnectionDef Items[int AIndex] = {read=GetConnectionDefs/*, default*/};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2032}") IFDStanConnectionDefParams  : public System::IInterface 
{
	virtual System::TObject* __fastcall CreateParams(const _di_IFDStanDefinition ADef) = 0 ;
};

enum DECLSPEC_DENUM TFDErrorAction : unsigned int { eaFail, eaSkip, eaRetry, eaApplied, eaDefault, eaExitSuccess, eaExitFailure };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2007}") IFDStanErrorHandler  : public System::IInterface 
{
	virtual void __fastcall HandleException(const _di_IFDStanObject AInitiator, System::Sysutils::Exception* &AException) = 0 ;
};

enum DECLSPEC_DENUM TFDParserOption : unsigned int { poAggregate, poDefaultExpr, poFieldNameGiven };

typedef System::Set<TFDParserOption, TFDParserOption::poAggregate, TFDParserOption::poFieldNameGiven> TFDParserOptions;

enum DECLSPEC_DENUM TFDExpressionOption : unsigned int { ekNoCase, ekPartial };

typedef System::Set<TFDExpressionOption, TFDExpressionOption::ekNoCase, TFDExpressionOption::ekPartial> TFDExpressionOptions;

enum DECLSPEC_DENUM TFDExpressionScopeKind : unsigned int { ckUnknown, ckField, ckAgg, ckConst };

enum DECLSPEC_DENUM TFDAggregateKind : unsigned int { akSum, akAvg, akCount, akMin, akMax, akFirst, akLast };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2008}") IFDStanExpressionDataSource  : public System::IInterface 
{
	virtual int __fastcall GetVarIndex(const System::UnicodeString AName) = 0 ;
	virtual TFDDataType __fastcall GetVarType(int AIndex) = 0 ;
	virtual TFDExpressionScopeKind __fastcall GetVarScope(int AIndex) = 0 ;
	virtual System::Variant __fastcall GetVarData(int AIndex) = 0 ;
	virtual void __fastcall SetVarData(int AIndex, const System::Variant &AValue) = 0 ;
	virtual System::Variant __fastcall GetSubAggregateValue(int AIndex) = 0 ;
	virtual void * __fastcall GetPosition() = 0 ;
	virtual void __fastcall SetPosition(void * AValue) = 0 ;
	virtual int __fastcall GetRowNum() = 0 ;
	virtual System::UnicodeString __fastcall GetDatabase() = 0 ;
	virtual System::UnicodeString __fastcall GetUser() = 0 ;
	__property int VarIndex[const System::UnicodeString AName] = {read=GetVarIndex};
	__property TFDDataType VarType[int AIndex] = {read=GetVarType};
	__property TFDExpressionScopeKind VarScope[int AIndex] = {read=GetVarScope};
	__property System::Variant VarData[int AIndex] = {read=GetVarData, write=SetVarData};
	__property System::Variant SubAggregateValue[int AIndex] = {read=GetSubAggregateValue};
	__property void * Position = {read=GetPosition, write=SetPosition};
	__property int RowNum = {read=GetRowNum};
	__property System::UnicodeString Database = {read=GetDatabase};
	__property System::UnicodeString User = {read=GetUser};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2010}") IFDStanExpressionEvaluator  : public System::IInterface 
{
	virtual int __fastcall GetSubAggregateCount() = 0 ;
	virtual TFDAggregateKind __fastcall GetSubAggregateKind(int AIndex) = 0 ;
	virtual _di_IFDStanExpressionDataSource __fastcall GetDataSource() = 0 ;
	virtual TFDDataType __fastcall GetDataType() = 0 ;
	virtual bool __fastcall HandleNotification(System::Word AKind, System::Word AReason, NativeInt AParam1, NativeInt AParam2) = 0 ;
	virtual System::Variant __fastcall Evaluate() = 0 ;
	virtual System::Variant __fastcall EvaluateSubAggregateArg(int AIndex) = 0 ;
	__property int SubAggregateCount = {read=GetSubAggregateCount};
	__property TFDAggregateKind SubAggregateKind[int AIndex] = {read=GetSubAggregateKind};
	__property _di_IFDStanExpressionDataSource DataSource = {read=GetDataSource};
	__property TFDDataType DataType = {read=GetDataType};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2009}") IFDStanExpressionParser  : public System::IInterface 
{
	virtual _di_IFDStanExpressionDataSource __fastcall GetDataSource() = 0 ;
	virtual _di_IFDStanExpressionEvaluator __fastcall Prepare(const _di_IFDStanExpressionDataSource ADataSource, const System::UnicodeString AExpression, TFDExpressionOptions AOptions, TFDParserOptions AParserOptions, const System::UnicodeString AFixedVarName) = 0 ;
	__property _di_IFDStanExpressionDataSource DataSource = {read=GetDataSource};
};

enum DECLSPEC_DENUM TFDStanAsyncMode : unsigned int { amBlocking, amNonBlocking, amCancelDialog, amAsync };

enum DECLSPEC_DENUM TFDStanAsyncState : unsigned int { asInactive, asExecuting, asFinished, asFailed, asAborted, asExpired };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2025}") IFDStanAsyncHandler  : public System::IInterface 
{
	virtual void __fastcall HandleFinished(const _di_IFDStanObject AInitiator, TFDStanAsyncState AState, System::Sysutils::Exception* AException) = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2022}") IFDStanAsyncOperation  : public System::IInterface 
{
	virtual void __fastcall Execute() = 0 ;
	virtual void __fastcall AbortJob() = 0 ;
	virtual bool __fastcall AbortSupported() = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2023}") IFDStanAsyncExecutor  : public System::IInterface 
{
	virtual TFDStanAsyncState __fastcall GetState() = 0 ;
	virtual TFDStanAsyncMode __fastcall GetMode() = 0 ;
	virtual unsigned __fastcall GetTimeout() = 0 ;
	virtual _di_IFDStanAsyncOperation __fastcall GetOperation() = 0 ;
	virtual _di_IFDStanAsyncHandler __fastcall GetHandler() = 0 ;
	virtual void __fastcall Setup(const _di_IFDStanAsyncOperation AOperation, const TFDStanAsyncMode AMode, const unsigned ATimeout, const _di_IFDStanAsyncHandler AHandler, bool ASilentMode) = 0 ;
	virtual void __fastcall Run() = 0 ;
	virtual void __fastcall AbortJob() = 0 ;
	virtual void __fastcall Launched() = 0 ;
	__property TFDStanAsyncState State = {read=GetState};
	__property TFDStanAsyncMode Mode = {read=GetMode};
	__property unsigned Timeout = {read=GetTimeout};
	__property _di_IFDStanAsyncOperation Operation = {read=GetOperation};
	__property _di_IFDStanAsyncHandler Handler = {read=GetHandler};
};

enum DECLSPEC_DENUM TFDStorageFormat : unsigned int { sfAuto, sfXML, sfBinary, sfJSON };

enum DECLSPEC_DENUM TFDStorageMode : unsigned int { smRead, smWrite };

enum DECLSPEC_DENUM TFDStoreItem : unsigned int { siMeta, siData, siDelta, siVisible };

typedef System::Set<TFDStoreItem, TFDStoreItem::siMeta, TFDStoreItem::siVisible> TFDStoreItems;

typedef void __fastcall (__closure *TFDStorageDeferredAction)(const System::UnicodeString APropName, const System::UnicodeString AValue);

typedef System::TObject* __fastcall (*TFDStorageLoaderProc)(const _di_IFDStanStorage AStorage);

typedef void __fastcall (*TFDStorageSaverProc)(System::TObject* AObject, const _di_IFDStanStorage AStorage);

enum DECLSPEC_DENUM TFDStorageObjectStyle : unsigned int { osObject, osFlatArray, osTypedArray };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDStorableObject : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	__classmethod virtual System::UnicodeString __fastcall GetClassPrefix();
	__classmethod virtual System::UnicodeString __fastcall GetStreamingName(const _di_IFDStanStorage AStorage);
	__classmethod virtual TFDStorageObjectStyle __fastcall GetObjectStyle();
	virtual void __fastcall InternalSaveToStorage(const _di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const _di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDStorableObject()/* overload */;
	void __fastcall SaveToStorage(const _di_IFDStanStorage AStorage);
	void __fastcall LoadFromStorage(const _di_IFDStanStorage AStorage)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDStorableObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2031}") IFDStanStorage  : public System::IInterface 
{
	virtual TFDStorageMode __fastcall GetMode() = 0 ;
	virtual int __fastcall GetStreamVersion() = 0 ;
	virtual bool __fastcall GetOwnStream() = 0 ;
	virtual void __fastcall SetOwnStream(bool AValue) = 0 ;
	virtual void __fastcall Open(System::TObject* AResOpts, System::TObject* AEncoder, const System::UnicodeString AFileName, System::Classes::TStream* AStream, TFDStorageMode AMode) = 0 ;
	virtual bool __fastcall IsOpen() = 0 ;
	virtual void __fastcall Close() = 0 ;
	virtual bool __fastcall IsObjectEnd(const System::UnicodeString AObjectName) = 0 ;
	virtual bool __fastcall ReadBoolean(const System::UnicodeString APropName, bool ADefValue) = 0 ;
	virtual System::TDateTime __fastcall ReadDate(const System::UnicodeString APropName, System::TDateTime ADefValue) = 0 ;
	virtual double __fastcall ReadFloat(const System::UnicodeString APropName, double ADefValue) = 0 ;
	virtual int __fastcall ReadInteger(const System::UnicodeString APropName, int ADefValue) = 0 ;
	virtual unsigned __fastcall ReadLongWord(const System::UnicodeString APropName, unsigned ADefValue) = 0 ;
	virtual __int64 __fastcall ReadInt64(const System::UnicodeString APropName, __int64 ADefValue) = 0 ;
	virtual System::UnicodeString __fastcall ReadObjectBegin(const System::UnicodeString AObjectName, TFDStorageObjectStyle AStyle) = 0 ;
	virtual void __fastcall ReadObjectEnd(const System::UnicodeString AObjectName, TFDStorageObjectStyle AStyle) = 0 ;
	virtual System::AnsiString __fastcall ReadAnsiString(const System::UnicodeString APropName, const System::AnsiString ADefValue) = 0 ;
	virtual System::UnicodeString __fastcall ReadString(const System::UnicodeString APropName, const System::UnicodeString ADefValue) = 0 ;
	virtual bool __fastcall ReadValue(const System::UnicodeString APropName, System::Word APropIndex, TFDDataType ADataType, /* out */ void * &ABuff, /* out */ unsigned &ALen) = 0 ;
	virtual int __fastcall ReadEnum(const System::UnicodeString APropName, System::Typinfo::PTypeInfo ATypeInfo, int ADefValue) = 0 ;
	virtual bool __fastcall TestObject(const System::UnicodeString AObjectName) = 0 ;
	virtual bool __fastcall TestAndReadObjectBegin(const System::UnicodeString AObjectName, TFDStorageObjectStyle AStyle) = 0 ;
	virtual bool __fastcall TestProperty(const System::UnicodeString APropName) = 0 ;
	virtual bool __fastcall TestAndReadProperty(const System::UnicodeString APropName) = 0 ;
	virtual void __fastcall WriteBoolean(const System::UnicodeString APropName, const bool AValue, const bool ADefValue) = 0 ;
	virtual void __fastcall WriteDate(const System::UnicodeString APropName, const System::TDateTime AValue, const System::TDateTime ADefValue) = 0 ;
	virtual void __fastcall WriteFloat(const System::UnicodeString APropName, const double AValue, const double ADefValue) = 0 ;
	virtual void __fastcall WriteInteger(const System::UnicodeString APropName, const int AValue, const int ADefValue) = 0 ;
	virtual void __fastcall WriteLongWord(const System::UnicodeString APropName, const unsigned AValue, const unsigned ADefValue) = 0 ;
	virtual void __fastcall WriteInt64(const System::UnicodeString APropName, const __int64 AValue, const __int64 ADefValue) = 0 ;
	virtual void __fastcall WriteObjectBegin(const System::UnicodeString AObjectName, TFDStorageObjectStyle AStyle) = 0 ;
	virtual void __fastcall WriteObjectEnd(const System::UnicodeString AObjectName, TFDStorageObjectStyle AStyle) = 0 ;
	virtual void __fastcall WriteAnsiString(const System::UnicodeString APropName, const System::AnsiString AValue, const System::AnsiString ADefValue) = 0 ;
	virtual void __fastcall WriteString(const System::UnicodeString APropName, const System::UnicodeString AValue, const System::UnicodeString ADefValue) = 0 ;
	virtual void __fastcall WriteValue(const System::UnicodeString APropName, System::Word APropIndex, TFDDataType ADataType, void * ABuff, unsigned ALen) = 0 ;
	virtual void __fastcall WriteEnum(const System::UnicodeString APropName, System::Typinfo::PTypeInfo ATypeInfo, const int AValue, const int ADefValue) = 0 ;
	virtual void __fastcall LockDeferring() = 0 ;
	virtual void __fastcall UnLockDeferring() = 0 ;
	virtual void __fastcall DeferAction(const System::UnicodeString APropName, const System::UnicodeString AValue, TFDStorageDeferredAction AAction) = 0 ;
	virtual System::TObject* __fastcall GetBookmark() = 0 ;
	virtual void __fastcall SetBookmark(System::TObject* const AValue) = 0 ;
	virtual bool __fastcall IsStored(TFDStoreItem AItem) = 0 ;
	virtual __int64 __fastcall BeginGrowthEstimation() = 0 ;
	virtual void __fastcall EndGrowthEstimation(__int64 ABase, unsigned ATimes) = 0 ;
	virtual System::TObject* __fastcall LoadObject() = 0 ;
	virtual void __fastcall SaveObject(System::TObject* AObject) = 0 ;
	virtual void __fastcall AddFilterObj(System::TObject* AKey, System::TObject* AFilter) = 0 ;
	virtual void __fastcall RemoveFilterObj(System::TObject* AKey) = 0 ;
	virtual System::TObject* __fastcall GetFilterObj(System::TObject* AKey) = 0 ;
	__property TFDStorageMode Mode = {read=GetMode};
	__property int StreamVersion = {read=GetStreamVersion};
	__property bool OwnStream = {read=GetOwnStream, write=SetOwnStream};
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDStorageManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TFDStringList* FClasses;
	System::UnicodeString FPrevName;
	int FPrevIndex;
	System::Syncobjs::TCriticalSection* FLock;
	void __fastcall LookupClass(const System::UnicodeString AName, System::TClass &AClass, TFDStorageLoaderProc &ALoader, TFDStorageSaverProc &ASaver);
	
public:
	__fastcall TFDStorageManager();
	__fastcall virtual ~TFDStorageManager();
	void __fastcall RegisterClass(TFDStorableObjectClass AClass)/* overload */;
	void __fastcall RegisterClassAlias(const System::UnicodeString AName, TFDStorableObjectClass AClass);
	void __fastcall RegisterClass(System::TClass AClass, const System::UnicodeString AStreamingName, TFDStorageLoaderProc ALoader, TFDStorageSaverProc ASaver)/* overload */;
	void __fastcall SaveObject(System::TObject* AObject, const _di_IFDStanStorage AStorage);
	System::TObject* __fastcall LoadObject(const _di_IFDStanStorage AStorage);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFDMoniEventKind : unsigned int { ekLiveCycle, ekError, ekConnConnect, ekConnTransact, ekConnService, ekCmdPrepare, ekCmdExecute, ekCmdDataIn, ekCmdDataOut, ekAdaptUpdate, ekVendor, ekComponent };

typedef System::Set<TFDMoniEventKind, TFDMoniEventKind::ekLiveCycle, TFDMoniEventKind::ekComponent> TFDMoniEventKinds;

typedef TFDMoniEventKinds *PFDMoniEventKinds;

enum DECLSPEC_DENUM TFDMoniEventStep : unsigned int { esStart, esProgress, esEnd };

enum DECLSPEC_DENUM TFDMoniTracing : unsigned int { eaAuto, eaTrue, eaFalse };

enum DECLSPEC_DENUM Firedac_Stan_Intf__9 : unsigned int { tiRefNo, tiTime, tiThreadID, tiClassName, tiObjID, tiMsgText };

typedef System::Set<Firedac_Stan_Intf__9, Firedac_Stan_Intf__9::tiRefNo, Firedac_Stan_Intf__9::tiMsgText> TFDTraceFileColumns;

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2028}") IFDMoniClientOutputHandler  : public System::IInterface 
{
	virtual void __fastcall HandleOutput(const System::UnicodeString AClassName, const System::UnicodeString AObjName, const System::UnicodeString AMessage) = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2005}") IFDMoniClient  : public System::IInterface 
{
	virtual bool __fastcall GetTracing() = 0 ;
	virtual void __fastcall SetTracing(const bool AValue) = 0 ;
	virtual System::Classes::TComponentName __fastcall GetName() = 0 ;
	virtual void __fastcall SetName(const System::Classes::TComponentName AValue) = 0 ;
	virtual TFDMoniEventKinds __fastcall GetEventKinds() = 0 ;
	virtual void __fastcall SetEventKinds(const TFDMoniEventKinds AValue) = 0 ;
	virtual _di_IFDMoniClientOutputHandler __fastcall GetOutputHandler() = 0 ;
	virtual void __fastcall SetOutputHandler(const _di_IFDMoniClientOutputHandler AValue) = 0 ;
	virtual void __fastcall Notify(TFDMoniEventKind AKind, TFDMoniEventStep AStep, System::TObject* ASender, const System::UnicodeString AMsg, const System::TVarRec *AArgs, const int AArgs_High) = 0 ;
	virtual unsigned __fastcall RegisterAdapter(const _di_IFDMoniAdapter AAdapter) = 0 ;
	virtual void __fastcall UnregisterAdapter(const _di_IFDMoniAdapter AAdapter) = 0 ;
	virtual void __fastcall AdapterChanged(const _di_IFDMoniAdapter AAdapter) = 0 ;
	virtual void __fastcall ResetFailure() = 0 ;
	__property bool Tracing = {read=GetTracing, write=SetTracing};
	__property System::Classes::TComponentName Name = {read=GetName, write=SetName};
	__property TFDMoniEventKinds EventKinds = {read=GetEventKinds, write=SetEventKinds};
	__property _di_IFDMoniClientOutputHandler OutputHandler = {read=GetOutputHandler, write=SetOutputHandler};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2026}") IFDMoniRemoteClient  : public IFDMoniClient 
{
	virtual System::UnicodeString __fastcall GetHost() = 0 ;
	virtual void __fastcall SetHost(const System::UnicodeString AValue) = 0 ;
	virtual int __fastcall GetPort() = 0 ;
	virtual void __fastcall SetPortI(const int AValue) = 0 ;
	virtual int __fastcall GetTimeout() = 0 ;
	virtual void __fastcall SetTimeout(const int AValue) = 0 ;
	__property System::UnicodeString Host = {read=GetHost, write=SetHost};
	__property int Port = {read=GetPort, write=SetPortI};
	__property int Timeout = {read=GetTimeout, write=SetTimeout};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2030}") IFDMoniCustomClient  : public IFDMoniClient 
{
	virtual bool __fastcall GetSynchronize() = 0 ;
	virtual void __fastcall SetSynchronize(bool AValue) = 0 ;
	__property bool Synchronize = {read=GetSynchronize, write=SetSynchronize};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2027}") IFDMoniFlatFileClient  : public IFDMoniCustomClient 
{
	virtual System::UnicodeString __fastcall GetFileName() = 0 ;
	virtual void __fastcall SetFileName(const System::UnicodeString Value) = 0 ;
	virtual bool __fastcall GetFileAppend() = 0 ;
	virtual void __fastcall SetFileAppend(const bool Value) = 0 ;
	virtual TFDTraceFileColumns __fastcall GetFileColumns() = 0 ;
	virtual void __fastcall SetFileColumns(const TFDTraceFileColumns Value) = 0 ;
	virtual TFDEncoding __fastcall GetFileEncoding() = 0 ;
	virtual void __fastcall SetFileEncoding(const TFDEncoding AValue) = 0 ;
	__property System::UnicodeString FileName = {read=GetFileName, write=SetFileName};
	__property bool FileAppend = {read=GetFileAppend, write=SetFileAppend};
	__property TFDTraceFileColumns FileColumns = {read=GetFileColumns, write=SetFileColumns};
	__property TFDEncoding FileEncoding = {read=GetFileEncoding, write=SetFileEncoding};
};

enum DECLSPEC_DENUM TFDMoniAdapterItemKind : unsigned int { ikSQL, ikParam, ikStat, ikClientInfo, ikSessionInfo, ikFireDACInfo };

typedef System::Set<TFDMoniAdapterItemKind, TFDMoniAdapterItemKind::ikSQL, TFDMoniAdapterItemKind::ikFireDACInfo> TFDMoniAdapterItemKinds;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDMoniAdapterHelper : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	_di_IFDStanObject FProxy;
	System::Classes::TComponentName FRole;
	unsigned FHandle;
	System::TObject* FAdaptedObj;
	System::TObject* FParentObj;
	_di_IFDMoniClient FMoniClient;
	bool __fastcall GetIsRegistered();
	System::Classes::TComponentName __fastcall GetName();
	_di_IFDStanObject __fastcall GetParent();
	
public:
	__fastcall TFDMoniAdapterHelper(System::TObject* const AAdapterObj, System::TObject* const AParentObj);
	__fastcall virtual ~TFDMoniAdapterHelper();
	void __fastcall SetOwner(System::TObject* const AOwner, const System::Classes::TComponentName ARole);
	void __fastcall RegisterClient(const _di_IFDMoniClient AMoniClient);
	void __fastcall UnRegisterClient();
	__property bool IsRegistered = {read=GetIsRegistered, nodefault};
	__property System::Classes::TComponentName Name = {read=GetName};
	__property _di_IFDStanObject Parent = {read=GetParent};
	__property unsigned Handle = {read=FHandle, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2006}") IFDMoniAdapter  : public System::IInterface 
{
	virtual unsigned __fastcall GetHandle() = 0 ;
	virtual int __fastcall GetItemCount() = 0 ;
	virtual TFDMoniAdapterItemKinds __fastcall GetSupportItems() = 0 ;
	virtual void __fastcall GetItem(int AIndex, /* out */ System::UnicodeString &AName, /* out */ System::Variant &AValue, /* out */ TFDMoniAdapterItemKind &AKind) = 0 ;
	__property unsigned Handle = {read=GetHandle};
	__property int ItemCount = {read=GetItemCount};
	__property TFDMoniAdapterItemKinds SupportItems = {read=GetSupportItems};
};

typedef System::StaticArray<System::UnicodeString, 41> Firedac_Stan_Intf__11;

//-- var, const, procedure ---------------------------------------------------
static const System::Word varFDAString = System::Word(0x100);
extern DELPHI_PACKAGE __int64 C_FD_MaxInt64;
extern DELPHI_PACKAGE __int64 C_FD_MinInt64;
static const System::Int8 C_FD_MaxUTF8Len = System::Int8(0x3);
static const System::Int8 C_FD_Alignment = System::Int8(0x2);
static const System::Word C_FD_MonitorPort = System::Word(0x1f72);
static const System::Word C_FD_MonitorTimeout = System::Word(0xbb8);
#define C_FD_MonitorFileName L"$(TEMP)\\trace$(NEXT).txt"
static const bool C_FD_MonitorAppend = false;
#define C_FD_MonitorColumns (System::Set<Firedac_Stan_Intf__9, Firedac_Stan_Intf__9::tiRefNo, Firedac_Stan_Intf__9::tiMsgText>() << Firedac_Stan_Intf__9::tiRefNo << Firedac_Stan_Intf__9::tiTime << Firedac_Stan_Intf__9::tiMsgText )
static const System::Int8 C_FD_MonitorEncoding = System::Int8(0x0);
#define C_FD_AllTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtBoolean << TFDDataType::dtSByte << TFDDataType::dtInt16 << TFDDataType::dtInt32 << TFDDataType::dtInt64 << TFDDataType::dtByte << TFDDataType::dtUInt16 << TFDDataType::dtUInt32 << TFDDataType::dtUInt64 << TFDDataType::dtSingle << TFDDataType::dtDouble << TFDDataType::dtExtended << TFDDataType::dtCurrency << TFDDataType::dtBCD << TFDDataType::dtFmtBCD << TFDDataType::dtDateTime << TFDDataType::dtTime << TFDDataType::dtDate << TFDDataType::dtDateTimeStamp << TFDDataType::dtTimeIntervalFull << TFDDataType::dtTimeIntervalYM << TFDDataType::dtTimeIntervalDS << TFDDataType::dtAnsiString << TFDDataType::dtWideString << TFDDataType::dtByteString \
	<< TFDDataType::dtBlob << TFDDataType::dtMemo << TFDDataType::dtWideMemo << TFDDataType::dtXML << TFDDataType::dtHBlob << TFDDataType::dtHMemo << TFDDataType::dtWideHMemo << TFDDataType::dtHBFile << TFDDataType::dtRowSetRef << TFDDataType::dtCursorRef << TFDDataType::dtRowRef << TFDDataType::dtArrayRef << TFDDataType::dtParentRowRef << TFDDataType::dtGUID << TFDDataType::dtObject )
#define C_FD_InvariantDataTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtRowSetRef << TFDDataType::dtCursorRef << TFDDataType::dtRowRef << TFDDataType::dtArrayRef << TFDDataType::dtParentRowRef )
#define C_FD_BlobTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtBlob << TFDDataType::dtMemo << TFDDataType::dtWideMemo << TFDDataType::dtXML << TFDDataType::dtHBlob << TFDDataType::dtHMemo << TFDDataType::dtWideHMemo << TFDDataType::dtHBFile )
#define C_FD_StrTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtAnsiString << TFDDataType::dtWideString << TFDDataType::dtByteString )
#define C_FD_VarLenTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtAnsiString << TFDDataType::dtWideString << TFDDataType::dtByteString << TFDDataType::dtBlob << TFDDataType::dtMemo << TFDDataType::dtWideMemo << TFDDataType::dtXML << TFDDataType::dtHBlob << TFDDataType::dtHMemo << TFDDataType::dtWideHMemo << TFDDataType::dtHBFile )
#define C_FD_WideTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtWideString << TFDDataType::dtWideMemo << TFDDataType::dtXML << TFDDataType::dtWideHMemo )
#define C_FD_AnsiTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtAnsiString << TFDDataType::dtMemo << TFDDataType::dtHMemo )
#define C_FD_CharTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtAnsiString << TFDDataType::dtWideString << TFDDataType::dtMemo << TFDDataType::dtWideMemo << TFDDataType::dtXML << TFDDataType::dtHMemo << TFDDataType::dtWideHMemo )
#define C_FD_NumTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtSByte << TFDDataType::dtInt16 << TFDDataType::dtInt32 << TFDDataType::dtInt64 << TFDDataType::dtByte << TFDDataType::dtUInt16 << TFDDataType::dtUInt32 << TFDDataType::dtUInt64 << TFDDataType::dtSingle << TFDDataType::dtDouble << TFDDataType::dtExtended << TFDDataType::dtCurrency << TFDDataType::dtBCD << TFDDataType::dtFmtBCD )
#define C_FD_LateSerTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtByteString << TFDDataType::dtBlob << TFDDataType::dtMemo << TFDDataType::dtWideMemo << TFDDataType::dtXML << TFDDataType::dtHBlob << TFDDataType::dtHMemo << TFDDataType::dtWideHMemo << TFDDataType::dtHBFile )
#define C_FD_NumUnsignedTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtByte << TFDDataType::dtUInt16 << TFDDataType::dtUInt32 << TFDDataType::dtUInt64 )
#define C_FD_NonSearchableDataTypes (System::Set<TFDDataType, TFDDataType::dtUnknown, TFDDataType::dtObject>() << TFDDataType::dtRowSetRef << TFDDataType::dtCursorRef << TFDDataType::dtRowRef << TFDDataType::dtArrayRef << TFDDataType::dtParentRowRef )
extern DELPHI_PACKAGE Firedac_Stan_Intf__11 C_FD_DataTypeNames;
extern DELPHI_PACKAGE TFDStoreItem siCurrent;
extern DELPHI_PACKAGE TFDMoniEventKind ekSQL;
extern DELPHI_PACKAGE TFDMoniEventKind ekSQLVarIn;
extern DELPHI_PACKAGE TFDMoniEventKind ekSQLVarOut;
extern DELPHI_PACKAGE TFDStorageManager* __fastcall FDStorageManager(void);
}	/* namespace Intf */
}	/* namespace Stan */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN_INTF)
using namespace Firedac::Stan::Intf;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN)
using namespace Firedac::Stan;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC)
using namespace Firedac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Firedac_Stan_IntfHPP
