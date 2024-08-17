// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Stan.Option.pas' rev: 35.00 (Windows)

#ifndef Firedac_Stan_OptionHPP
#define Firedac_Stan_OptionHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <System.Variants.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Util.hpp>
#include <FireDAC.Stan.Consts.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Stan
{
namespace Option
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IFDStanOptions;
typedef System::DelphiInterface<IFDStanOptions> _di_IFDStanOptions;
class DELPHICLASS TFDOptionsContainer;
class DELPHICLASS TFDCustomOptions;
class DELPHICLASS TFDMapRule;
class DELPHICLASS TFDMapRules;
class DELPHICLASS TFDFormatOptions;
class DELPHICLASS TFDFetchOptions;
class DELPHICLASS TFDUpdateOptions;
class DELPHICLASS TFDBottomUpdateOptions;
class DELPHICLASS TFDResourceOptions;
class DELPHICLASS TFDTopResourceOptions;
class DELPHICLASS TFDBottomResourceOptions;
class DELPHICLASS TFDTxOptions;
class DELPHICLASS TFDEventAlerterOptions;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TFDFetchOptionsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDFetchOptionsClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TFDUpdateOptionsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDUpdateOptionsClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TFDResourceOptionsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDResourceOptionsClass);
#endif /* _WIN64 */

typedef void __fastcall (__closure *TFDOptionChangeEvent)(TFDCustomOptions* AOptions);

enum DECLSPEC_DENUM TFDFormatOptionValue : unsigned int { fvMapRules, fvSE2Null, fvStrsTrim, fvStrsDivLen2, fvMaxStringSize, fvMaxBcdPrecision, fvMaxBcdScale, fvInlineDataSize, fvDefaultParamDataType, fvRound2Scale, fvDataSnapCompatibility, fvFmtDisplayDateTime, fvFmtDisplayDate, fvFmtDisplayTime, fvFmtDisplayNumeric, fvFmtEditNumeric, fvQuoteIdentifiers, fvSortLocale, fvSortOptions, fvStrsTrim2Len, fvCheckPrecision, fvADOCompatibility };

typedef System::Set<TFDFormatOptionValue, TFDFormatOptionValue::fvMapRules, TFDFormatOptionValue::fvADOCompatibility> TFDFormatOptionValues;

enum DECLSPEC_DENUM TFDFetchOptionValue : unsigned int { evMode, evItems, evRecsSkip, evRecsMax, evRowsetSize, evCache, evAutoClose, evRecordCountMode, evUnidirectional, evCursorKind, evAutoFetchAll, evLiveWindowParanoic, evDetailDelay, evDetailOptimize, evDetailCascade, evLiveWindowFastFirst, evDetailServerCascade };

typedef System::Set<TFDFetchOptionValue, TFDFetchOptionValue::evMode, TFDFetchOptionValue::evDetailServerCascade> TFDFetchOptionValues;

enum DECLSPEC_DENUM TFDFetchMode : unsigned int { fmManual, fmOnDemand, fmAll, fmExactRecsMax };

enum DECLSPEC_DENUM TFDFetchItem : unsigned int { fiBlobs, fiDetails, fiMeta };

typedef System::Set<TFDFetchItem, TFDFetchItem::fiBlobs, TFDFetchItem::fiMeta> TFDFetchItems;

enum DECLSPEC_DENUM TFDCursorKind : unsigned int { ckAutomatic, ckDefault, ckDynamic, ckStatic, ckForwardOnly };

enum DECLSPEC_DENUM TFDAutoFetchAll : unsigned int { afAll, afTruncate, afDisable };

enum DECLSPEC_DENUM TFDRecordCountMode : unsigned int { cmVisible, cmFetched, cmTotal };

enum DECLSPEC_DENUM TFDUpdateOptionValue : unsigned int { uvEDelete, uvEInsert, uvEUpdate, uvUpdateChngFields, uvUpdateMode, uvLockMode, uvLockPoint, uvLockWait, uvRefreshMode, uvRefreshDelete, uvCountUpdatedRecords, uvFetchGeneratorsPoint, uvGeneratorName, uvCheckRequired, uvCheckReadOnly, uvCheckUpdatable, uvUpdateNonBaseFields, uvAutoCommitUpdates };

typedef System::Set<TFDUpdateOptionValue, TFDUpdateOptionValue::uvEDelete, TFDUpdateOptionValue::uvAutoCommitUpdates> TFDUpdateOptionValues;

enum DECLSPEC_DENUM TFDActionRequest : unsigned int { arNone, arFromRow, arSelect, arInsert, arUpdate, arDelete, arLock, arUnlock, arFetchRow, arUpdateHBlobs, arDeleteAll, arFetchGenerators };

typedef System::Set<TFDActionRequest, TFDActionRequest::arNone, TFDActionRequest::arFetchGenerators> TFDActionRequests;

typedef TFDActionRequest TFDUpdateRequest;

typedef System::Set<TFDUpdateRequest, TFDUpdateRequest::arInsert, TFDUpdateRequest::arFetchGenerators> TFDUpdateRequests;

enum DECLSPEC_DENUM TFDUpdateRowOption : unsigned int { uoCancelUnlock, uoImmediateUpd, uoDeferredLock, uoOneMomLock, uoNoSrvRecord, uoDeferredGenGet };

typedef System::Set<TFDUpdateRowOption, TFDUpdateRowOption::uoCancelUnlock, TFDUpdateRowOption::uoDeferredGenGet> TFDUpdateRowOptions;

enum DECLSPEC_DENUM TFDLockMode : unsigned int { lmNone, lmPessimistic, lmOptimistic };

enum DECLSPEC_DENUM TFDLockPoint : unsigned int { lpImmediate, lpDeferred };

enum DECLSPEC_DENUM TFDRefreshMode : unsigned int { rmManual, rmOnDemand, rmAll };

enum DECLSPEC_DENUM TFDFetchGeneratorsPoint : unsigned int { gpNone, gpImmediate, gpDeferred };

enum DECLSPEC_DENUM TFDResourceOptionValue : unsigned int { rvParamCreate, rvMacroCreate, rvMacroExpand, rvParamExpand, rvEscapeExpand, rvMaxCursors, rvCmdExecMode, rvCmdExecTimeout, rvDirectExecute, rvDefaultParamType, rvServerOutput, rvServerOutputSize, rvPersistent, rvBackup, rvDefaultStoreFolder, rvDefaultStoreFormat, rvStoreVersion, rvStoreItems, rvBackupFolder, rvDefaultStoreExt, rvBackupExt, rvAutoConnect, rvAutoReconnect, rvArrayDMLSize, rvSilentMode, rvUnifyParams, rvKeepConnection, rvStorePrettyPrint, rvStoreMergeData, rvStoreMergeMeta };

typedef System::Set<TFDResourceOptionValue, TFDResourceOptionValue::rvParamCreate, TFDResourceOptionValue::rvStoreMergeMeta> TFDResourceOptionValues;

enum DECLSPEC_DENUM TFDTxIsolation : unsigned int { xiUnspecified, xiDirtyRead, xiReadCommitted, xiRepeatableRead, xiSnapshot, xiSerializible };

enum DECLSPEC_DENUM TFDTxAction : unsigned int { xdNone, xdCommit, xdRollback };

enum DECLSPEC_DENUM TFDTxStopOption : unsigned int { xoIfCmdsInactive, xoIfAutoStarted, xoFinishRetaining };

typedef System::Set<TFDTxStopOption, TFDTxStopOption::xoIfCmdsInactive, TFDTxStopOption::xoFinishRetaining> TFDTxStopOptions;

enum DECLSPEC_DENUM TFDTxValue : unsigned int { xoIsolation, xoReadOnly, xoParams, xoAutoStart, xoAutoStop, xoStopOptions, xoAutoCommit };

typedef System::Set<TFDTxValue, TFDTxValue::xoIsolation, TFDTxValue::xoAutoCommit> TFDTxValues;

enum DECLSPEC_DENUM TFDAutoRefresh : unsigned int { afNone, afAlert, afTimeout };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2018}") IFDStanOptions  : public System::IInterface 
{
	virtual TFDFetchOptions* __fastcall GetFetchOptions() = 0 ;
	virtual TFDFormatOptions* __fastcall GetFormatOptions() = 0 ;
	virtual TFDUpdateOptions* __fastcall GetUpdateOptions() = 0 ;
	virtual TFDResourceOptions* __fastcall GetResourceOptions() = 0 ;
	virtual _di_IFDStanOptions __fastcall GetParentOptions() = 0 ;
	virtual void __fastcall SetParentOptions(const _di_IFDStanOptions AValue) = 0 ;
	virtual void __fastcall ObjectDestroyed(System::Classes::TPersistent* AObj) = 0 ;
	__property TFDFetchOptions* FetchOptions = {read=GetFetchOptions};
	__property TFDFormatOptions* FormatOptions = {read=GetFormatOptions};
	__property TFDUpdateOptions* UpdateOptions = {read=GetUpdateOptions};
	__property TFDResourceOptions* ResourceOptions = {read=GetResourceOptions};
	__property _di_IFDStanOptions ParentOptions = {read=GetParentOptions, write=SetParentOptions};
};

typedef void __fastcall (__closure *TFDOptionsParentCallback)(_di_IFDStanOptions &AOpts);

class PASCALIMPLEMENTATION TFDOptionsContainer : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::TPersistent* FOwnerObj;
	TFDFormatOptions* FFormatOptions;
	TFDFetchOptions* FFetchOptions;
	TFDUpdateOptions* FUpdateOptions;
	TFDResourceOptions* FResourceOptions;
	_di_IFDStanOptions FParentOptions;
	TFDOptionsParentCallback FParentOriginalCallback;
	TFDOptionsParentCallback FParentCallback;
	void __fastcall InternalParentOptionsCallback(_di_IFDStanOptions &AOpts);
	
protected:
	TFDFetchOptions* __fastcall GetFetchOptions();
	TFDFormatOptions* __fastcall GetFormatOptions();
	TFDUpdateOptions* __fastcall GetUpdateOptions();
	TFDResourceOptions* __fastcall GetResourceOptions();
	_di_IFDStanOptions __fastcall GetParentOptions();
	void __fastcall SetParentOptions(const _di_IFDStanOptions AValue);
	void __fastcall ObjectDestroyed(System::Classes::TPersistent* AObj);
	
public:
	__fastcall TFDOptionsContainer(System::Classes::TPersistent* AOwnerObj, TFDFetchOptionsClass AFetchClass, TFDUpdateOptionsClass AUpdateClass, TFDResourceOptionsClass AResourceClass, TFDOptionsParentCallback AParentCallback);
	__fastcall virtual ~TFDOptionsContainer();
private:
	void *__IFDStanOptions;	// IFDStanOptions 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2018}
	operator _di_IFDStanOptions()
	{
		_di_IFDStanOptions intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IFDStanOptions*(void) { return (IFDStanOptions*)&__IFDStanOptions; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDCustomOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TFDOptionsContainer* FContainer;
	unsigned FVersion;
	System::Classes::TPersistent* __fastcall GetOwnerObj();
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall virtual TFDCustomOptions(TFDOptionsContainer* AContainer);
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	virtual void __fastcall RestoreDefaults();
	__property TFDOptionsContainer* Container = {read=FContainer};
	__property unsigned Version = {read=FVersion, nodefault};
	__property System::Classes::TPersistent* OwnerObj = {read=GetOwnerObj};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFDCustomOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDMapRule : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FPrecMax;
	int FPrecMin;
	int FScaleMax;
	int FScaleMin;
	unsigned FSizeMax;
	unsigned FSizeMin;
	Firedac::Stan::Intf::TFDDataType FSourceDataType;
	Firedac::Stan::Intf::TFDDataType FTargetDataType;
	System::UnicodeString FNameMask;
	System::UnicodeString FTypeMask;
	void __fastcall SetSourceDataType(Firedac::Stan::Intf::TFDDataType AValue);
	void __fastcall SetTargetDataType(Firedac::Stan::Intf::TFDDataType AValue);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TFDMapRule(System::Classes::TCollection* Collection);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property int PrecMax = {read=FPrecMax, write=FPrecMax, default=-1};
	__property int PrecMin = {read=FPrecMin, write=FPrecMin, default=-1};
	__property int ScaleMax = {read=FScaleMax, write=FScaleMax, default=-1};
	__property int ScaleMin = {read=FScaleMin, write=FScaleMin, default=-1};
	__property unsigned SizeMax = {read=FSizeMax, write=FSizeMax, default=-1};
	__property unsigned SizeMin = {read=FSizeMin, write=FSizeMin, default=-1};
	__property System::UnicodeString NameMask = {read=FNameMask, write=FNameMask};
	__property System::UnicodeString TypeMask = {read=FTypeMask, write=FTypeMask};
	__property Firedac::Stan::Intf::TFDDataType SourceDataType = {read=FSourceDataType, write=SetSourceDataType, default=0};
	__property Firedac::Stan::Intf::TFDDataType TargetDataType = {read=FTargetDataType, write=SetTargetDataType, default=0};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TFDMapRule() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDMapRules : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFDMapRule* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	TFDFormatOptions* FFormatOptions;
	TFDMapRule* __fastcall GetItems(int AIndex);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TFDMapRules(TFDFormatOptions* AFormatOptions);
	HIDESBASE TFDMapRule* __fastcall Add()/* overload */;
	HIDESBASE void __fastcall Add(int APrecMin, int APrecMax, int AScaleMin, int AScaleMax, Firedac::Stan::Intf::TFDDataType ASourceDataType, Firedac::Stan::Intf::TFDDataType ATargetDataType)/* overload */;
	HIDESBASE void __fastcall Add(int ASizeMin, int ASizeMax, Firedac::Stan::Intf::TFDDataType ASourceDataType, Firedac::Stan::Intf::TFDDataType ATargetDataType)/* overload */;
	HIDESBASE void __fastcall Add(Firedac::Stan::Intf::TFDDataType ASourceDataType, Firedac::Stan::Intf::TFDDataType ATargetDataType)/* overload */;
	void __fastcall RemoveForSourceDataType(Firedac::Stan::Intf::TFDDataType ADataType);
	void __fastcall RemoveForTargetDataType(Firedac::Stan::Intf::TFDDataType ADataType);
	__property TFDMapRule* Items[int AIndex] = {read=GetItems/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFDMapRules() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDFormatOptions : public TFDCustomOptions
{
	typedef TFDCustomOptions inherited;
	
private:
	TFDMapRules* FMapRules;
	bool FStrsEmpty2Null;
	bool FStrsTrim;
	bool FStrsTrim2Len;
	bool FStrsDivLen2;
	TFDFormatOptionValues FAssignedValues;
	unsigned FMaxStringSize;
	int FMaxBcdPrecision;
	int FMaxBcdScale;
	int FInlineDataSize;
	Data::Db::TFieldType FDefaultParamDataType;
	bool FRound2Scale;
	bool FCheckPrecision;
	bool FDataSnapCompatibility;
	bool FADOCompatibility;
	System::UnicodeString FFmtDisplayDateTime;
	System::UnicodeString FFmtDisplayDate;
	System::UnicodeString FFmtDisplayTime;
	System::UnicodeString FFmtDisplayNumeric;
	System::UnicodeString FFmtEditNumeric;
	bool FQuoteIdentifiers;
	unsigned FSortLocale;
	Firedac::Stan::Intf::TFDSortOptions FSortOptions;
	bool __fastcall GetStrsEmpty2Null();
	bool __fastcall GetStrsTrim();
	void __fastcall SetStrsEmpty2Null(bool AValue);
	void __fastcall SetStrsTrim(bool AValue);
	TFDMapRules* __fastcall GetMapRules();
	bool __fastcall IsMRS();
	bool __fastcall IsSE2NS();
	bool __fastcall IsSTS();
	void __fastcall SetMapRules(TFDMapRules* const AValue);
	unsigned __fastcall GetMaxStringSize();
	bool __fastcall IsMSSS();
	void __fastcall SetMaxStringSize(const unsigned AValue);
	int __fastcall GetMaxBcdPrecision();
	int __fastcall GetMaxBcdScale();
	bool __fastcall IsMBPS();
	bool __fastcall IsMBSS();
	void __fastcall SetMaxBcdPrecision(const int AValue);
	void __fastcall SetMaxBcdScale(const int AValue);
	void __fastcall SetOwnMapRules(const bool AValue);
	bool __fastcall GetStrsDivLen2();
	bool __fastcall IsSDL2S();
	void __fastcall SetStrsDivLen2(const bool AValue);
	int __fastcall GetInlineDataSize();
	bool __fastcall IsIDSS();
	void __fastcall SetInlineDataSize(const int AValue);
	void __fastcall SetDefaultParamDataType(const Data::Db::TFieldType AValue);
	Data::Db::TFieldType __fastcall GetDefaultParamDataType();
	bool __fastcall IsDPDTS();
	bool __fastcall GetRound2Scale();
	bool __fastcall IsRSS();
	void __fastcall SetRound2Scale(const bool AValue);
	bool __fastcall GetDataSnapCompatibility();
	bool __fastcall IsDSCS();
	void __fastcall SetDataSnapCompatibility(const bool AValue);
	System::UnicodeString __fastcall GetFmtDisplayDate();
	System::UnicodeString __fastcall GetFmtDisplayDateTime();
	System::UnicodeString __fastcall GetFmtDisplayNumeric();
	System::UnicodeString __fastcall GetFmtDisplayTime();
	System::UnicodeString __fastcall GetFmtEditNumeric();
	bool __fastcall IsFDDS();
	bool __fastcall IsFDDTS();
	bool __fastcall IsFDNS();
	bool __fastcall IsFDTS();
	bool __fastcall IsFENS();
	void __fastcall SetFmtDisplayDate(const System::UnicodeString AValue);
	void __fastcall SetFmtDisplayDateTime(const System::UnicodeString AValue);
	void __fastcall SetFmtDisplayNumeric(const System::UnicodeString AValue);
	void __fastcall SetFmtDisplayTime(const System::UnicodeString AValue);
	void __fastcall SetFmtEditNumeric(const System::UnicodeString AValue);
	unsigned __fastcall GetSortLocale();
	bool __fastcall IsSLS();
	void __fastcall SetSortLocale(const unsigned AValue);
	Firedac::Stan::Intf::TFDSortOptions __fastcall GetSortOptions();
	bool __fastcall IsSOS();
	void __fastcall SetSortOptions(const Firedac::Stan::Intf::TFDSortOptions AValue);
	bool __fastcall GetStrsTrim2Len();
	bool __fastcall IsSTTLS();
	void __fastcall SetStrsTrim2Len(const bool AValue);
	bool __fastcall GetQuoteIdentifiers();
	bool __fastcall IsQIDS();
	void __fastcall SetQuoteIdentifiers(const bool AValue);
	bool __fastcall GetCheckPrecision();
	bool __fastcall IsCPS();
	void __fastcall SetCheckPrecision(const bool AValue);
	bool __fastcall GetADOCompatibility();
	bool __fastcall IsACS();
	void __fastcall SetADOCompatibility(const bool AValue);
	
public:
	__fastcall virtual TFDFormatOptions(TFDOptionsContainer* AContainer);
	__fastcall virtual ~TFDFormatOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	virtual void __fastcall RestoreDefaults();
	bool __fastcall IsValueOwned(TFDFormatOptionValue AValue, _di_IFDStanOptions &AParentOpts);
	void __fastcall ResolveDataType(const System::UnicodeString ASrcName, const System::UnicodeString ATypeName, Firedac::Stan::Intf::TFDDataType ASrcDataType, unsigned ASrcSize, int ASrcPrec, int ASrcScale, Firedac::Stan::Intf::TFDDataType &ADestDataType, unsigned &ADestSize, bool AForward);
	void __fastcall ResolveFieldType(const System::UnicodeString ASrcName, const System::UnicodeString ATypeName, Data::Db::TFieldType ASrcFieldType, Firedac::Stan::Intf::TFDDataType ASrcADFieldType, unsigned ASrcSize, int ASrcPrecision, int ASrcScale, Data::Db::TFieldType &ADestFieldType, unsigned &ADestSize, int &ADestPrecision, int &ADestScale, Firedac::Stan::Intf::TFDDataType &ASrcDataType, Firedac::Stan::Intf::TFDDataType &ADestDataType, bool AForward);
	void __fastcall ColumnDef2FieldDef(Firedac::Stan::Intf::TFDDataType ASrcDataType, unsigned ASrcSize, int ASrcPrec, int ASrcScale, Firedac::Stan::Intf::TFDDataAttributes ASrcAttrs, Data::Db::TFieldType &ADestFieldType, unsigned &ADestSize, int &ADestPrec, int &ADestScale);
	__classmethod void __fastcall FieldDef2ColumnDef(Data::Db::TFieldType ASrcFieldType, unsigned ASrcSize, int ASrcPrec, int ASrcScale, Firedac::Stan::Intf::TFDDataType &ADestDataType, unsigned &ADestSize, int &ADestPrec, int &ADestScale, Firedac::Stan::Intf::TFDDataAttributes &ADestAttrs)/* overload */;
	__classmethod void __fastcall FieldDef2ColumnDef(Data::Db::TField* AField, Firedac::Stan::Intf::TFDDataType &ADestDataType, unsigned &ADestSize, int &ADestPrec, int &ADestScale, Firedac::Stan::Intf::TFDDataAttributes &ADestAttrs)/* overload */;
	__classmethod void __fastcall FieldDef2ColumnDef(Data::Db::TFieldDef* AFieldDef, Firedac::Stan::Intf::TFDDataType &ADestDataType, unsigned &ADestSize, int &ADestPrec, int &ADestScale, Firedac::Stan::Intf::TFDDataAttributes &ADestAttrs)/* overload */;
	void __fastcall CheckConversion(Firedac::Stan::Intf::TFDDataType ASrc, Firedac::Stan::Intf::TFDDataType ADest);
	void __fastcall ConvertRawData(Firedac::Stan::Intf::TFDDataType ASrcType, Firedac::Stan::Intf::TFDDataType ADestType, void * ApSrc, unsigned ASrcSize, void * &ApDest, unsigned ADestMaxSize, unsigned &ADestSize, Firedac::Stan::Util::TFDEncoder* AEncoder);
	bool __fastcall IsFmtBcd(int APrec, int AScale);
	__property bool StrsDivLen2 = {read=GetStrsDivLen2, write=SetStrsDivLen2, stored=IsSDL2S, default=0};
	
__published:
	__property TFDFormatOptionValues AssignedValues = {read=FAssignedValues, write=FAssignedValues, default=0};
	__property bool OwnMapRules = {read=IsMRS, write=SetOwnMapRules, default=0};
	__property TFDMapRules* MapRules = {read=GetMapRules, write=SetMapRules, stored=IsMRS};
	__property bool StrsEmpty2Null = {read=GetStrsEmpty2Null, write=SetStrsEmpty2Null, stored=IsSE2NS, default=0};
	__property bool StrsTrim = {read=GetStrsTrim, write=SetStrsTrim, stored=IsSTS, default=1};
	__property bool StrsTrim2Len = {read=GetStrsTrim2Len, write=SetStrsTrim2Len, stored=IsSTTLS, default=0};
	__property unsigned MaxStringSize = {read=GetMaxStringSize, write=SetMaxStringSize, stored=IsMSSS, default=32767};
	__property int MaxBcdPrecision = {read=GetMaxBcdPrecision, write=SetMaxBcdPrecision, stored=IsMBPS, default=18};
	__property int MaxBcdScale = {read=GetMaxBcdScale, write=SetMaxBcdScale, stored=IsMBSS, default=4};
	__property int InlineDataSize = {read=GetInlineDataSize, write=SetInlineDataSize, stored=IsIDSS, default=1000};
	__property Data::Db::TFieldType DefaultParamDataType = {read=GetDefaultParamDataType, write=SetDefaultParamDataType, stored=IsDPDTS, default=0};
	__property bool Round2Scale = {read=GetRound2Scale, write=SetRound2Scale, stored=IsRSS, default=0};
	__property bool CheckPrecision = {read=GetCheckPrecision, write=SetCheckPrecision, stored=IsCPS, default=0};
	__property bool DataSnapCompatibility = {read=GetDataSnapCompatibility, write=SetDataSnapCompatibility, stored=IsDSCS, default=0};
	__property bool ADOCompatibility = {read=GetADOCompatibility, write=SetADOCompatibility, stored=IsACS, default=0};
	__property System::UnicodeString FmtDisplayDateTime = {read=GetFmtDisplayDateTime, write=SetFmtDisplayDateTime, stored=IsFDDTS};
	__property System::UnicodeString FmtDisplayDate = {read=GetFmtDisplayDate, write=SetFmtDisplayDate, stored=IsFDDS};
	__property System::UnicodeString FmtDisplayTime = {read=GetFmtDisplayTime, write=SetFmtDisplayTime, stored=IsFDTS};
	__property System::UnicodeString FmtDisplayNumeric = {read=GetFmtDisplayNumeric, write=SetFmtDisplayNumeric, stored=IsFDNS};
	__property System::UnicodeString FmtEditNumeric = {read=GetFmtEditNumeric, write=SetFmtEditNumeric, stored=IsFENS};
	__property bool QuoteIdentifiers = {read=GetQuoteIdentifiers, write=SetQuoteIdentifiers, stored=IsQIDS, default=0};
	__property unsigned SortLocale = {read=GetSortLocale, write=SetSortLocale, stored=IsSLS, default=1024};
	__property Firedac::Stan::Intf::TFDSortOptions SortOptions = {read=GetSortOptions, write=SetSortOptions, stored=IsSOS, default=0};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDFetchOptions : public TFDCustomOptions
{
	typedef TFDCustomOptions inherited;
	
private:
	int FRecsSkip;
	int FRecsMax;
	int FRowsetSize;
	TFDFetchMode FMode;
	TFDFetchItems FItems;
	TFDFetchOptionValues FAssignedValues;
	TFDFetchItems FCache;
	bool FAutoClose;
	TFDAutoFetchAll FAutoFetchAll;
	TFDRecordCountMode FRecordCountMode;
	bool FUnidirectional;
	TFDCursorKind FCursorKind;
	bool FLiveWindowParanoic;
	bool FLiveWindowFastFirst;
	int FDetailDelay;
	bool FDetailOptimize;
	bool FDetailCascade;
	bool FDetailServerCascade;
	int __fastcall GetRecsMax();
	int __fastcall GetRowsetSize();
	TFDFetchItems __fastcall GetItems();
	TFDFetchMode __fastcall GetMode();
	void __fastcall SetRecsMax(const int AValue);
	void __fastcall SetRowsetSize(const int AValue);
	void __fastcall SetItems(const TFDFetchItems AValue);
	void __fastcall SetMode(const TFDFetchMode AValue);
	bool __fastcall IsIS();
	bool __fastcall IsMS();
	bool __fastcall IsRMS();
	bool __fastcall IsRSS();
	TFDFetchItems __fastcall GetCache();
	bool __fastcall IsCS();
	void __fastcall SetCache(const TFDFetchItems AValue);
	int __fastcall GetActualRowsetSize();
	bool __fastcall GetAutoClose();
	bool __fastcall IsACS();
	void __fastcall SetAutoClose(const bool AValue);
	TFDRecordCountMode __fastcall GetRecordcountMode();
	bool __fastcall IsRCMS();
	void __fastcall SetRecordCountMode(const TFDRecordCountMode AValue);
	bool __fastcall GetUnidirectional();
	bool __fastcall IsUS();
	void __fastcall SetUnidirectional(const bool AValue);
	TFDCursorKind __fastcall GetCursor();
	void __fastcall SetCursor(const TFDCursorKind AValue);
	bool __fastcall IsCKS();
	int __fastcall GetRecsSkip();
	void __fastcall SetRecsSkip(const int AValue);
	bool __fastcall IsESS();
	TFDAutoFetchAll __fastcall GetAutoFetchAll();
	void __fastcall SetAutoFetchAll(const TFDAutoFetchAll AValue);
	bool __fastcall IsAFAS();
	bool __fastcall GetLiveWindowParanoic();
	void __fastcall SetLiveWindowParanoic(const bool AValue);
	bool __fastcall IsLWP();
	int __fastcall GetDetailDelay();
	bool __fastcall GetDetailOptimize();
	bool __fastcall IsDDS();
	bool __fastcall IsDOS();
	void __fastcall SetDetailDelay(const int AValue);
	void __fastcall SetDetailOptimize(const bool AValue);
	bool __fastcall GetDetailCascade();
	bool __fastcall IsDCS();
	void __fastcall SetDetailCascade(const bool AValue);
	bool __fastcall GetLiveWindowFastFirst();
	bool __fastcall IsLWFF();
	void __fastcall SetLiveWindowFastFirst(const bool AValue);
	bool __fastcall GetDetailServerCascade();
	bool __fastcall IsSDCS();
	void __fastcall SetDetailServerCascade(const bool AValue);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	virtual void __fastcall RestoreDefaults();
	bool __fastcall IsValueOwned(TFDFetchOptionValue AValue, _di_IFDStanOptions &AParentOpts);
	__property int ActualRowsetSize = {read=GetActualRowsetSize, nodefault};
	
__published:
	__property TFDFetchOptionValues AssignedValues = {read=FAssignedValues, write=FAssignedValues, default=0};
	__property TFDFetchMode Mode = {read=GetMode, write=SetMode, stored=IsMS, default=1};
	__property TFDCursorKind CursorKind = {read=GetCursor, write=SetCursor, stored=IsCKS, default=0};
	__property bool Unidirectional = {read=GetUnidirectional, write=SetUnidirectional, stored=IsUS, default=0};
	__property int RowsetSize = {read=GetRowsetSize, write=SetRowsetSize, stored=IsRSS, default=50};
	__property int RecsSkip = {read=GetRecsSkip, write=SetRecsSkip, stored=IsESS, default=-1};
	__property int RecsMax = {read=GetRecsMax, write=SetRecsMax, stored=IsRMS, default=-1};
	__property bool AutoClose = {read=GetAutoClose, write=SetAutoClose, stored=IsACS, default=1};
	__property TFDAutoFetchAll AutoFetchAll = {read=GetAutoFetchAll, write=SetAutoFetchAll, stored=IsAFAS, default=0};
	__property TFDRecordCountMode RecordCountMode = {read=GetRecordcountMode, write=SetRecordCountMode, stored=IsRCMS, default=0};
	__property TFDFetchItems Items = {read=GetItems, write=SetItems, stored=IsIS, default=7};
	__property TFDFetchItems Cache = {read=GetCache, write=SetCache, stored=IsCS, default=7};
	__property bool LiveWindowParanoic = {read=GetLiveWindowParanoic, write=SetLiveWindowParanoic, stored=IsLWP, default=1};
	__property bool LiveWindowFastFirst = {read=GetLiveWindowFastFirst, write=SetLiveWindowFastFirst, stored=IsLWFF, default=0};
	__property int DetailDelay = {read=GetDetailDelay, write=SetDetailDelay, stored=IsDDS, default=0};
	__property bool DetailOptimize = {read=GetDetailOptimize, write=SetDetailOptimize, stored=IsDOS, default=1};
	__property bool DetailCascade = {read=GetDetailCascade, write=SetDetailCascade, stored=IsDCS, default=0};
	__property bool DetailServerCascade = {read=GetDetailServerCascade, write=SetDetailServerCascade, stored=IsSDCS, default=0};
public:
	/* TFDCustomOptions.Create */ inline __fastcall virtual TFDFetchOptions(TFDOptionsContainer* AContainer) : TFDCustomOptions(AContainer) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFDFetchOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDUpdateOptions : public TFDCustomOptions
{
	typedef TFDCustomOptions inherited;
	
private:
	bool FEnableDelete;
	bool FEnableInsert;
	bool FEnableUpdate;
	bool FUpdateChangedFields;
	Data::Db::TUpdateMode FUpdateMode;
	TFDLockMode FLockMode;
	TFDLockPoint FLockPoint;
	bool FLockWait;
	TFDRefreshMode FRefreshMode;
	bool FrefreshDelete;
	bool FCountUpdatedRecords;
	TFDFetchGeneratorsPoint FFetchGeneratorsPoint;
	System::UnicodeString FGeneratorName;
	bool FCheckRequired;
	bool FCheckReadOnly;
	bool FCheckUpdatable;
	bool FUpdateNonBaseFields;
	bool FAutoCommitUpdates;
	TFDUpdateOptionValues FAssignedValues;
	bool __fastcall GetEnableDelete();
	bool __fastcall GetEnableInsert();
	bool __fastcall GetEnableUpdate();
	void __fastcall SetEnableDelete(bool AValue);
	void __fastcall SetEnableInsert(bool AValue);
	void __fastcall SetEnableUpdate(bool AValue);
	bool __fastcall GetReadOnly();
	void __fastcall SetReadOnly(const bool AValue);
	bool __fastcall IsEDS();
	bool __fastcall IsEIS();
	bool __fastcall IsEUS();
	bool __fastcall GetUpdateChangedFields();
	Data::Db::TUpdateMode __fastcall GetUpdateMode();
	bool __fastcall IsUCFS();
	bool __fastcall IsUMS();
	void __fastcall SetUpdateChangedFields(const bool AValue);
	void __fastcall SetUpdateMode(const Data::Db::TUpdateMode AValue);
	bool __fastcall IsLMS();
	bool __fastcall IsLPS();
	void __fastcall SetLockMode(const TFDLockMode AValue);
	void __fastcall SetLockPoint(const TFDLockPoint AValue);
	TFDLockMode __fastcall GetLockMode();
	TFDLockPoint __fastcall GetLockPoint();
	bool __fastcall GetLockWait();
	bool __fastcall IsLWS();
	void __fastcall SetLockWait(const bool AValue);
	TFDRefreshMode __fastcall GetRefreshMode();
	bool __fastcall IsRMS();
	void __fastcall SetRefreshMode(const TFDRefreshMode AValue);
	bool __fastcall GetCountUpdatedRecords();
	bool __fastcall IsCURS();
	void __fastcall SetCountUpdatedRecords(const bool AValue);
	bool __fastcall GetFastUpdates();
	void __fastcall SetFastUpdates(const bool AValue);
	bool __fastcall GetRequestLive();
	void __fastcall SetRequestLive(const bool AValue);
	TFDFetchGeneratorsPoint __fastcall GetFetchGeneratorsPoint();
	bool __fastcall IsGGPS();
	void __fastcall SetFetchGeneratorsPoint(const TFDFetchGeneratorsPoint AValue);
	System::UnicodeString __fastcall GetGeneratorName();
	bool __fastcall IsGNS();
	void __fastcall SetGeneratorName(const System::UnicodeString AValue);
	bool __fastcall GetRefreshDelete();
	bool __fastcall IsRDS();
	void __fastcall SetRefreshDelete(const bool AValue);
	bool __fastcall GetCheckRequired();
	bool __fastcall IsCRS();
	void __fastcall SetCheckRequired(const bool AValue);
	bool __fastcall GetCheckReadOnly();
	bool __fastcall IsCROS();
	void __fastcall SetCheckReadOnly(const bool AValue);
	bool __fastcall GetCheckUpdatable();
	bool __fastcall IsCUS();
	void __fastcall SetCheckUpdatable(const bool AValue);
	bool __fastcall GetUpdateNonBaseFields();
	bool __fastcall IsUNFS();
	void __fastcall SetUpdateNonBaseFields(const bool AValue);
	void __fastcall SetAutoCommitUpdates(const bool AValue);
	bool __fastcall GetAutoCommitUpdates();
	bool __fastcall IsACUS();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	virtual void __fastcall RestoreDefaults();
	bool __fastcall IsValueOwned(TFDUpdateOptionValue AValue, _di_IFDStanOptions &AParentOpts);
	bool __fastcall CheckRequest(TFDUpdateRequest ARequest, TFDUpdateRowOptions AOptions, bool ACachedUpdates);
	
__published:
	__property TFDUpdateOptionValues AssignedValues = {read=FAssignedValues, write=FAssignedValues, default=0};
	__property bool EnableDelete = {read=GetEnableDelete, write=SetEnableDelete, stored=IsEDS, default=1};
	__property bool EnableInsert = {read=GetEnableInsert, write=SetEnableInsert, stored=IsEIS, default=1};
	__property bool EnableUpdate = {read=GetEnableUpdate, write=SetEnableUpdate, stored=IsEUS, default=1};
	__property bool UpdateChangedFields = {read=GetUpdateChangedFields, write=SetUpdateChangedFields, stored=IsUCFS, default=1};
	__property bool UpdateNonBaseFields = {read=GetUpdateNonBaseFields, write=SetUpdateNonBaseFields, stored=IsUNFS, default=0};
	__property Data::Db::TUpdateMode UpdateMode = {read=GetUpdateMode, write=SetUpdateMode, stored=IsUMS, default=2};
	__property TFDLockMode LockMode = {read=GetLockMode, write=SetLockMode, stored=IsLMS, default=0};
	__property TFDLockPoint LockPoint = {read=GetLockPoint, write=SetLockPoint, stored=IsLPS, default=1};
	__property bool LockWait = {read=GetLockWait, write=SetLockWait, stored=IsLWS, default=0};
	__property TFDRefreshMode RefreshMode = {read=GetRefreshMode, write=SetRefreshMode, stored=IsRMS, default=1};
	__property bool RefreshDelete = {read=GetRefreshDelete, write=SetRefreshDelete, stored=IsRDS, default=1};
	__property bool CountUpdatedRecords = {read=GetCountUpdatedRecords, write=SetCountUpdatedRecords, stored=IsCURS, default=1};
	__property TFDFetchGeneratorsPoint FetchGeneratorsPoint = {read=GetFetchGeneratorsPoint, write=SetFetchGeneratorsPoint, stored=IsGGPS, default=2};
	__property System::UnicodeString GeneratorName = {read=GetGeneratorName, write=SetGeneratorName, stored=IsGNS};
	__property bool CheckRequired = {read=GetCheckRequired, write=SetCheckRequired, stored=IsCRS, default=1};
	__property bool CheckReadOnly = {read=GetCheckReadOnly, write=SetCheckReadOnly, stored=IsCROS, default=1};
	__property bool CheckUpdatable = {read=GetCheckUpdatable, write=SetCheckUpdatable, stored=IsCUS, default=1};
	__property bool AutoCommitUpdates = {read=GetAutoCommitUpdates, write=SetAutoCommitUpdates, stored=IsACUS, default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, stored=false, default=0};
	__property bool FastUpdates = {read=GetFastUpdates, write=SetFastUpdates, stored=false, default=0};
	__property bool RequestLive = {read=GetRequestLive, write=SetRequestLive, stored=false, default=0};
public:
	/* TFDCustomOptions.Create */ inline __fastcall virtual TFDUpdateOptions(TFDOptionsContainer* AContainer) : TFDCustomOptions(AContainer) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFDUpdateOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDBottomUpdateOptions : public TFDUpdateOptions
{
	typedef TFDUpdateOptions inherited;
	
private:
	System::UnicodeString FUpdateTableName;
	System::UnicodeString FKeyFields;
	System::UnicodeString FAutoIncFields;
	void __fastcall SetAutoIncFields(const System::UnicodeString AValue);
	void __fastcall SetKeyFields(const System::UnicodeString AValue);
	void __fastcall SetUpdateTableName(const System::UnicodeString AValue);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	virtual void __fastcall RestoreDefaults();
	
__published:
	__property System::UnicodeString UpdateTableName = {read=FUpdateTableName, write=SetUpdateTableName};
	__property System::UnicodeString KeyFields = {read=FKeyFields, write=SetKeyFields};
	__property System::UnicodeString AutoIncFields = {read=FAutoIncFields, write=SetAutoIncFields};
public:
	/* TFDCustomOptions.Create */ inline __fastcall virtual TFDBottomUpdateOptions(TFDOptionsContainer* AContainer) : TFDUpdateOptions(AContainer) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFDBottomUpdateOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDResourceOptions : public TFDCustomOptions
{
	typedef TFDCustomOptions inherited;
	
private:
	bool FParamCreate;
	bool FMacroCreate;
	bool FParamExpand;
	bool FMacroExpand;
	bool FEscapeExpand;
	Firedac::Stan::Intf::TFDStanAsyncMode FCmdExecMode;
	unsigned FCmdExecTimeout;
	bool FDirectExecute;
	Data::Db::TParamType FDefaultParamType;
	bool FPersistent;
	bool FBackup;
	int FStoreVersion;
	Firedac::Stan::Intf::TFDStoreItems FStoreItems;
	bool FStorePrettyPrint;
	Firedac::Stan::Intf::TFDMergeDataMode FStoreMergeData;
	Firedac::Stan::Intf::TFDMergeMetaMode FStoreMergeMeta;
	int FArrayDMLSize;
	bool FSilentMode;
	bool FUnifyParams;
	TFDResourceOptionValues FAssignedValues;
	bool __fastcall GetActualSilentMode();
	bool __fastcall GetMacroCreate();
	bool __fastcall GetParamCreate();
	bool __fastcall IsMCS();
	bool __fastcall IsPCS();
	void __fastcall SetMacroCreate(const bool AValue);
	void __fastcall SetParamCreate(const bool AValue);
	Firedac::Stan::Intf::TFDStanAsyncMode __fastcall GetCmdExecMode();
	unsigned __fastcall GetCmdExecTimeout();
	bool __fastcall IsCEMS();
	bool __fastcall IsCETS();
	void __fastcall SetCmdExecMode(const Firedac::Stan::Intf::TFDStanAsyncMode AValue);
	void __fastcall SetCmdExecTimeout(const unsigned AValue);
	bool __fastcall GetDirectExecute();
	bool __fastcall IsDES();
	void __fastcall SetDirectExecute(const bool AValue);
	bool __fastcall GetEscapeExpand();
	bool __fastcall GetMacroExpand();
	bool __fastcall GetParamExpand();
	bool __fastcall IsEPS();
	bool __fastcall IsMES();
	bool __fastcall IsPES();
	void __fastcall SetEscapeExpand(const bool AValue);
	void __fastcall SetMacroExpand(const bool AValue);
	void __fastcall SetParamExpand(const bool AValue);
	Data::Db::TParamType __fastcall GetDefaultParamType();
	bool __fastcall IsDPTS();
	void __fastcall SetDefaultParamType(const Data::Db::TParamType AValue);
	bool __fastcall GetBackup();
	bool __fastcall GetPersistent();
	bool __fastcall IsBS();
	bool __fastcall IsPS();
	void __fastcall SetBackup(const bool AValue);
	void __fastcall SetPersistent(const bool AValue);
	System::UnicodeString __fastcall GetBackupExt();
	System::UnicodeString __fastcall GetBackupFolder();
	System::UnicodeString __fastcall GetDefaultStoreExt();
	System::UnicodeString __fastcall GetDefaultStoreFolder();
	Firedac::Stan::Intf::TFDStorageFormat __fastcall GetDefaultStoreFormat();
	int __fastcall GetStoreVersion();
	void __fastcall SetStoreVersion(const int AValue);
	bool __fastcall IsSTV();
	bool __fastcall GetPreprocessCmdText();
	void __fastcall SetPreprocessCmdText(const bool AValue);
	int __fastcall GetArrayDMLSize();
	bool __fastcall IsADSS();
	void __fastcall SetArrayDMLSize(const int AValue);
	bool __fastcall GetSilentMode();
	bool __fastcall IsSMS();
	void __fastcall SetSilentMode(const bool AValue);
	bool __fastcall GetUnifyParams();
	void __fastcall SetUnifyParams(const bool AValue);
	bool __fastcall IsUPS();
	Firedac::Stan::Intf::TFDStoreItems __fastcall GetStoreItems();
	bool __fastcall IsSIS();
	void __fastcall SetStoreItems(const Firedac::Stan::Intf::TFDStoreItems AValue);
	bool __fastcall GetStorePrettyPrint();
	bool __fastcall IsSPPS();
	void __fastcall SetStorePrettyPrint(const bool AValue);
	Firedac::Stan::Intf::TFDMergeMetaMode __fastcall GetStoreMergeMeta();
	Firedac::Stan::Intf::TFDMergeDataMode __fastcall GetStoreMergeData();
	bool __fastcall IsSMMS();
	bool __fastcall IsSMOS();
	void __fastcall SetStoreMergeMeta(const Firedac::Stan::Intf::TFDMergeMetaMode AValue);
	void __fastcall SetStoreMergeData(const Firedac::Stan::Intf::TFDMergeDataMode AValue);
	bool __fastcall GetStoreMerge();
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	virtual void __fastcall RestoreDefaults();
	bool __fastcall IsValueOwned(TFDResourceOptionValue AValue, _di_IFDStanOptions &AParentOpts);
	__property System::UnicodeString DefaultStoreFolder = {read=GetDefaultStoreFolder};
	__property System::UnicodeString DefaultStoreExt = {read=GetDefaultStoreExt};
	__property Firedac::Stan::Intf::TFDStorageFormat DefaultStoreFormat = {read=GetDefaultStoreFormat, nodefault};
	__property System::UnicodeString BackupFolder = {read=GetBackupFolder};
	__property System::UnicodeString BackupExt = {read=GetBackupExt};
	__property bool PreprocessCmdText = {read=GetPreprocessCmdText, write=SetPreprocessCmdText, nodefault};
	__property bool ActualSilentMode = {read=GetActualSilentMode, nodefault};
	__property bool StoreMerge = {read=GetStoreMerge, nodefault};
	
__published:
	__property TFDResourceOptionValues AssignedValues = {read=FAssignedValues, write=FAssignedValues, default=0};
	__property bool ParamCreate = {read=GetParamCreate, write=SetParamCreate, stored=IsPCS, default=1};
	__property bool MacroCreate = {read=GetMacroCreate, write=SetMacroCreate, stored=IsMCS, default=1};
	__property bool ParamExpand = {read=GetParamExpand, write=SetParamExpand, stored=IsPES, default=1};
	__property bool MacroExpand = {read=GetMacroExpand, write=SetMacroExpand, stored=IsMES, default=1};
	__property bool EscapeExpand = {read=GetEscapeExpand, write=SetEscapeExpand, stored=IsEPS, default=1};
	__property Firedac::Stan::Intf::TFDStanAsyncMode CmdExecMode = {read=GetCmdExecMode, write=SetCmdExecMode, stored=IsCEMS, default=0};
	__property unsigned CmdExecTimeout = {read=GetCmdExecTimeout, write=SetCmdExecTimeout, stored=IsCETS, default=-1};
	__property bool DirectExecute = {read=GetDirectExecute, write=SetDirectExecute, stored=IsDES, default=0};
	__property Data::Db::TParamType DefaultParamType = {read=GetDefaultParamType, write=SetDefaultParamType, stored=IsDPTS, default=1};
	__property bool Persistent = {read=GetPersistent, write=SetPersistent, stored=IsPS, default=0};
	__property bool Backup = {read=GetBackup, write=SetBackup, stored=IsBS, default=0};
	__property int StoreVersion = {read=GetStoreVersion, write=SetStoreVersion, stored=IsSTV, default=-1};
	__property Firedac::Stan::Intf::TFDStoreItems StoreItems = {read=GetStoreItems, write=SetStoreItems, stored=IsSIS, default=7};
	__property bool StorePrettyPrint = {read=GetStorePrettyPrint, write=SetStorePrettyPrint, stored=IsSPPS, default=0};
	__property Firedac::Stan::Intf::TFDMergeDataMode StoreMergeData = {read=GetStoreMergeData, write=SetStoreMergeData, stored=IsSMOS, default=0};
	__property Firedac::Stan::Intf::TFDMergeMetaMode StoreMergeMeta = {read=GetStoreMergeMeta, write=SetStoreMergeMeta, stored=IsSMMS, default=0};
	__property int ArrayDMLSize = {read=GetArrayDMLSize, write=SetArrayDMLSize, stored=IsADSS, default=2147483647};
	__property bool SilentMode = {read=GetSilentMode, write=SetSilentMode, stored=IsSMS, default=0};
	__property bool UnifyParams = {read=GetUnifyParams, write=SetUnifyParams, stored=IsUPS, default=0};
public:
	/* TFDCustomOptions.Create */ inline __fastcall virtual TFDResourceOptions(TFDOptionsContainer* AContainer) : TFDCustomOptions(AContainer) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFDResourceOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDTopResourceOptions : public TFDResourceOptions
{
	typedef TFDResourceOptions inherited;
	
private:
	int FMaxCursors;
	bool FServerOutput;
	int FServerOutputSize;
	System::UnicodeString FDefaultStoreFolder;
	System::UnicodeString FBackupFolder;
	System::UnicodeString FDefaultStoreExt;
	Firedac::Stan::Intf::TFDStorageFormat FDefaultStoreFormat;
	System::UnicodeString FBackupExt;
	bool FAutoConnect;
	bool FAutoReconnect;
	bool FKeepConnection;
	int __fastcall GetMaxCursors();
	void __fastcall SetMaxCursors(const int AValue);
	HIDESBASE bool __fastcall IsMCS();
	bool __fastcall GetServerOutput();
	bool __fastcall IsSOS();
	void __fastcall SetServerOutput(const bool AValue);
	int __fastcall GetServerOutputSize();
	bool __fastcall IsSOSS();
	void __fastcall SetServerOutputSize(const int AValue);
	bool __fastcall IsBES();
	bool __fastcall IsBFS();
	bool __fastcall IsDSES();
	bool __fastcall IsDSFS();
	bool __fastcall IsDSTS();
	void __fastcall SetBackupExt(const System::UnicodeString AValue);
	void __fastcall SetBackupFolder(const System::UnicodeString AValue);
	void __fastcall SetDefaultStoreExt(const System::UnicodeString AValue);
	void __fastcall SetDefaultStoreFolder(const System::UnicodeString AValue);
	void __fastcall SetDefaultStoreFormat(const Firedac::Stan::Intf::TFDStorageFormat AValue);
	bool __fastcall GetAutoReconnect();
	bool __fastcall IsARS();
	void __fastcall SetAutoReconnect(const bool AValue);
	bool __fastcall GetKeepConnection();
	bool __fastcall IsKCS();
	void __fastcall SetKeepConnection(const bool AValue);
	bool __fastcall GetAutoConnect();
	bool __fastcall IsACS();
	void __fastcall SetAutoConnect(const bool AValue);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	virtual void __fastcall RestoreDefaults();
	
__published:
	__property int MaxCursors = {read=GetMaxCursors, write=SetMaxCursors, stored=IsMCS, default=-1};
	__property bool ServerOutput = {read=GetServerOutput, write=SetServerOutput, stored=IsSOS, default=0};
	__property int ServerOutputSize = {read=GetServerOutputSize, write=SetServerOutputSize, stored=IsSOSS, default=20000};
	__property DefaultStoreFolder = {write=SetDefaultStoreFolder, stored=IsDSFS, default=0};
	__property BackupFolder = {write=SetBackupFolder, stored=IsBFS, default=0};
	__property DefaultStoreExt = {write=SetDefaultStoreExt, stored=IsDSES, default=0};
	__property DefaultStoreFormat = {write=SetDefaultStoreFormat, stored=IsDSTS, default=0};
	__property BackupExt = {write=SetBackupExt, stored=IsBES, default=0};
	__property bool AutoConnect = {read=GetAutoConnect, write=SetAutoConnect, stored=IsACS, default=1};
	__property bool AutoReconnect = {read=GetAutoReconnect, write=SetAutoReconnect, stored=IsARS, default=0};
	__property bool KeepConnection = {read=GetKeepConnection, write=SetKeepConnection, stored=IsKCS, default=1};
public:
	/* TFDCustomOptions.Create */ inline __fastcall virtual TFDTopResourceOptions(TFDOptionsContainer* AContainer) : TFDResourceOptions(AContainer) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFDTopResourceOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDBottomResourceOptions : public TFDResourceOptions
{
	typedef TFDResourceOptions inherited;
	
private:
	System::UnicodeString FPersistentFileName;
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	virtual void __fastcall RestoreDefaults();
	System::UnicodeString __fastcall ResolveFileName(const System::UnicodeString AFileName = System::UnicodeString());
	Firedac::Stan::Intf::_di_IFDStanStorage __fastcall GetStorage(const System::UnicodeString AFileName, Firedac::Stan::Intf::TFDStorageFormat AFormat);
	
__published:
	__property System::UnicodeString PersistentFileName = {read=FPersistentFileName, write=FPersistentFileName};
public:
	/* TFDCustomOptions.Create */ inline __fastcall virtual TFDBottomResourceOptions(TFDOptionsContainer* AContainer) : TFDResourceOptions(AContainer) { }
	
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFDBottomResourceOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDTxOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TFDTxStopOptions FStopOptions;
	TFDTxIsolation FIsolation;
	bool FReadOnly;
	System::Classes::TStrings* FParams;
	bool FAutoStart;
	bool FAutoStop;
	TFDTxAction FDisconnectAction;
	bool FEnableNested;
	TFDTxValues FChanged;
	void __fastcall SetAutoCommit(const bool AValue);
	void __fastcall SetIsolation(const TFDTxIsolation AValue);
	void __fastcall SetReadOnly(const bool AValue);
	void __fastcall SetParams(System::Classes::TStrings* const AValue);
	void __fastcall DoParamsChanged(System::TObject* ASender);
	void __fastcall SetAutoStart(const bool AValue);
	void __fastcall SetAutoStop(const bool AValue);
	bool __fastcall GetAutoCommit();
	void __fastcall SetStopOptions(const TFDTxStopOptions AValue);
	
public:
	__fastcall TFDTxOptions();
	__fastcall virtual ~TFDTxOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	void __fastcall ClearChanged();
	void __fastcall ResetChanged();
	__property TFDTxValues Changed = {read=FChanged, write=FChanged, nodefault};
	
__published:
	__property TFDTxIsolation Isolation = {read=FIsolation, write=SetIsolation, default=0};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, default=0};
	__property System::Classes::TStrings* Params = {read=FParams, write=SetParams};
	__property bool AutoCommit = {read=GetAutoCommit, write=SetAutoCommit, stored=false, default=1};
	__property bool AutoStart = {read=FAutoStart, write=SetAutoStart, default=1};
	__property bool AutoStop = {read=FAutoStop, write=SetAutoStop, default=1};
	__property TFDTxStopOptions StopOptions = {read=FStopOptions, write=SetStopOptions, default=3};
	__property TFDTxAction DisconnectAction = {read=FDisconnectAction, write=FDisconnectAction, default=1};
	__property bool EnableNested = {read=FEnableNested, write=FEnableNested, default=1};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDEventAlerterOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::UnicodeString FKind;
	int FTimeout;
	bool FSynchronize;
	bool FAutoRegister;
	Firedac::Stan::Intf::TFDMergeDataMode FMergeData;
	TFDAutoRefresh FAutoRefresh;
	
public:
	__fastcall TFDEventAlerterOptions();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	
__published:
	__property System::UnicodeString Kind = {read=FKind, write=FKind};
	__property int Timeout = {read=FTimeout, write=FTimeout, default=-1};
	__property bool Synchronize = {read=FSynchronize, write=FSynchronize, default=1};
	__property bool AutoRegister = {read=FAutoRegister, write=FAutoRegister, default=0};
	__property Firedac::Stan::Intf::TFDMergeDataMode MergeData = {read=FMergeData, write=FMergeData, default=3};
	__property TFDAutoRefresh AutoRefresh = {read=FAutoRefresh, write=FAutoRefresh, default=1};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFDEventAlerterOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Option */
}	/* namespace Stan */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN_OPTION)
using namespace Firedac::Stan::Option;
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
#endif	// Firedac_Stan_OptionHPP
