// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Phys.Intf.pas' rev: 35.00 (Windows)

#ifndef Firedac_Phys_IntfHPP
#define Firedac_Phys_IntfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Consts.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.UI.Intf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Phys
{
namespace Intf
{
//-- forward type declarations -----------------------------------------------
struct TFDPhysEscapeData;
struct TFDPhysParsedName;
struct TFDPhysTableParams;
__interface DELPHIINTERFACE IFDPhysManagerMetadata;
typedef System::DelphiInterface<IFDPhysManagerMetadata> _di_IFDPhysManagerMetadata;
__interface DELPHIINTERFACE IFDPhysManager;
typedef System::DelphiInterface<IFDPhysManager> _di_IFDPhysManager;
__interface DELPHIINTERFACE IFDPhysDriverMetadata;
typedef System::DelphiInterface<IFDPhysDriverMetadata> _di_IFDPhysDriverMetadata;
__interface DELPHIINTERFACE IFDPhysDriverConnectionWizard;
typedef System::DelphiInterface<IFDPhysDriverConnectionWizard> _di_IFDPhysDriverConnectionWizard;
__interface DELPHIINTERFACE IFDPhysDriver;
typedef System::DelphiInterface<IFDPhysDriver> _di_IFDPhysDriver;
__interface DELPHIINTERFACE IFDPhysConnectionMetadata;
typedef System::DelphiInterface<IFDPhysConnectionMetadata> _di_IFDPhysConnectionMetadata;
__interface DELPHIINTERFACE IFDPhysConnectionRecoveryHandler;
typedef System::DelphiInterface<IFDPhysConnectionRecoveryHandler> _di_IFDPhysConnectionRecoveryHandler;
__interface DELPHIINTERFACE IFDPhysLocalSQLAdapter;
typedef System::DelphiInterface<IFDPhysLocalSQLAdapter> _di_IFDPhysLocalSQLAdapter;
__interface DELPHIINTERFACE IFDPhysSQLHandler;
typedef System::DelphiInterface<IFDPhysSQLHandler> _di_IFDPhysSQLHandler;
__interface DELPHIINTERFACE IFDPhysConnection;
typedef System::DelphiInterface<IFDPhysConnection> _di_IFDPhysConnection;
__interface DELPHIINTERFACE IFDPhysTransactionStateHandler;
typedef System::DelphiInterface<IFDPhysTransactionStateHandler> _di_IFDPhysTransactionStateHandler;
__interface DELPHIINTERFACE IFDPhysTransaction;
typedef System::DelphiInterface<IFDPhysTransaction> _di_IFDPhysTransaction;
struct TFDPhysMappingName;
__interface DELPHIINTERFACE IFDPhysMappingHandler;
typedef System::DelphiInterface<IFDPhysMappingHandler> _di_IFDPhysMappingHandler;
__interface DELPHIINTERFACE IFDPhysCommandStateHandler;
typedef System::DelphiInterface<IFDPhysCommandStateHandler> _di_IFDPhysCommandStateHandler;
__interface DELPHIINTERFACE IFDPhysCommandGenerator;
typedef System::DelphiInterface<IFDPhysCommandGenerator> _di_IFDPhysCommandGenerator;
__interface DELPHIINTERFACE IFDPhysCommand;
typedef System::DelphiInterface<IFDPhysCommand> _di_IFDPhysCommand;
__interface DELPHIINTERFACE IFDPhysMetaInfoCommand;
typedef System::DelphiInterface<IFDPhysMetaInfoCommand> _di_IFDPhysMetaInfoCommand;
__interface DELPHIINTERFACE IFDPhysEventHandler;
typedef System::DelphiInterface<IFDPhysEventHandler> _di_IFDPhysEventHandler;
__interface DELPHIINTERFACE IFDPhysChangeHandler;
typedef System::DelphiInterface<IFDPhysChangeHandler> _di_IFDPhysChangeHandler;
__interface DELPHIINTERFACE IFDPhysEventAlerter;
typedef System::DelphiInterface<IFDPhysEventAlerter> _di_IFDPhysEventAlerter;
__interface DELPHIINTERFACE IFDPhysDataSetParamReader;
typedef System::DelphiInterface<IFDPhysDataSetParamReader> _di_IFDPhysDataSetParamReader;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TFDPhysCommandKind : unsigned int { skUnknown, skSelect, skSelectForLock, skSelectForUnLock, skDelete, skInsert, skMerge, skUpdate, skCreate, skAlter, skDrop, skStoredProc, skStoredProcWithCrs, skStoredProcNoCrs, skExecute, skStartTransaction, skCommit, skRollback, skSet, skSetSchema, skOther, skNotResolved };

enum DECLSPEC_DENUM TFDPhysEscapeKind : unsigned int { eskText, eskString, eskFloat, eskDate, eskTime, eskDateTime, eskIdentifier, eskBoolean, eskFunction, eskIF, eskFI, eskElse, eskIIF, eskEscape, eskInto };

enum DECLSPEC_DENUM TFDPhysEscapeFunction : unsigned int { efASCII, efLTRIM, efREPLACE, efRTRIM, efABS, efCOS, efEXP, efFLOOR, efMOD, efPOWER, efROUND, efSIGN, efSIN, efSQRT, efTAN, efDECODE, efBIT_LENGTH, efCHAR, efCHAR_LENGTH, efCONCAT, efINSERT, efLCASE, efLEFT, efLENGTH, efLOCATE, efOCTET_LENGTH, efPOSITION, efREPEAT, efRIGHT, efSPACE, efSUBSTRING, efUCASE, efACOS, efASIN, efATAN, efATAN2, efCOT, efCEILING, efDEGREES, efLOG, efLOG10, efPI, efRADIANS, efRANDOM, efTRUNCATE, efCURDATE, efCURTIME, efNOW, efDAYNAME, efDAYOFMONTH, efDAYOFWEEK, efDAYOFYEAR, efEXTRACT, efHOUR, efMINUTE, efMONTH, efMONTHNAME, efQUARTER, efSECOND, efTIMESTAMPADD, efTIMESTAMPDIFF, efWEEK, efYEAR, efCATALOG, efSCHEMA, efIFNULL, efIF, efCONVERT, efLIMIT, efNONE };

struct DECLSPEC_DRECORD TFDPhysEscapeData
{
	
private:
	typedef System::DynamicArray<System::UnicodeString> _TFDPhysEscapeData__1;
	
	
public:
	TFDPhysEscapeKind FKind;
	TFDPhysEscapeFunction FFunc;
	System::UnicodeString FName;
	_TFDPhysEscapeData__1 FArgs;
};


enum DECLSPEC_DENUM TFDPhysNamePart : unsigned int { npCatalog, npSchema, npDBLink, npBaseObject, npObject };

typedef System::Set<TFDPhysNamePart, TFDPhysNamePart::npCatalog, TFDPhysNamePart::npObject> TFDPhysNameParts;

struct DECLSPEC_DRECORD TFDPhysParsedName
{
private:
	int __fastcall GetOverInd();
	void __fastcall SetOverInd(const int Value);
	
public:
	System::UnicodeString FCatalog;
	System::UnicodeString FSchema;
	System::UnicodeString FBaseObject;
	System::UnicodeString FObject;
	System::UnicodeString FLink;
	System::UnicodeString FOverload;
	__property int OverInd = {read=GetOverInd, write=SetOverInd};
};


enum DECLSPEC_DENUM TFDPhysNameQuoteLevel : unsigned int { ncDefault, ncSecond, ncThird };

typedef System::Set<TFDPhysNameQuoteLevel, TFDPhysNameQuoteLevel::ncDefault, TFDPhysNameQuoteLevel::ncThird> TFDPhysNameQuoteLevels;

enum DECLSPEC_DENUM TFDPhysNameQuoteSide : unsigned int { nsLeft, nsRight };

enum DECLSPEC_DENUM TFDPhysDecodeOption : unsigned int { doUnquote, doNormalize, doSubObj, doNotRaise, doMetaParams };

typedef System::Set<TFDPhysDecodeOption, TFDPhysDecodeOption::doUnquote, TFDPhysDecodeOption::doMetaParams> TFDPhysDecodeOptions;

enum DECLSPEC_DENUM TFDPhysEncodeOption : unsigned int { eoQuote, eoNormalize, eoBeautify };

typedef System::Set<TFDPhysEncodeOption, TFDPhysEncodeOption::eoQuote, TFDPhysEncodeOption::eoBeautify> TFDPhysEncodeOptions;

enum DECLSPEC_DENUM TFDPhysParamMark : unsigned int { prQMark, prName, prNumber, prDollar, prQNumber };

enum DECLSPEC_DENUM TFDPhysDefaultValues : unsigned int { dvNone, dvDefVals, dvDef };

enum DECLSPEC_DENUM Firedac_Phys_Intf__1 : unsigned int { loSkip, loRows };

typedef System::Set<Firedac_Phys_Intf__1, Firedac_Phys_Intf__1::loSkip, Firedac_Phys_Intf__1::loRows> TFDPhysLimitOptions;

enum DECLSPEC_DENUM Firedac_Phys_Intf__2 : unsigned int { soWithoutFrom, soInlineView };

typedef System::Set<Firedac_Phys_Intf__2, Firedac_Phys_Intf__2::soWithoutFrom, Firedac_Phys_Intf__2::soInlineView> TFDPhysSelectOptions;

enum DECLSPEC_DENUM TFDPhysMergeAction : unsigned int { maInsertUpdate, maInsertIgnore };

enum DECLSPEC_DENUM TFDPhysNullLocation : unsigned int { nlAscFirst, nlAscLast, nlDescFirst, nlDescLast };

typedef System::Set<TFDPhysNullLocation, TFDPhysNullLocation::nlAscFirst, TFDPhysNullLocation::nlDescLast> TFDPhysNullLocations;

enum DECLSPEC_DENUM TFDPhysConnectionState : unsigned int { csDisconnecting, csDisconnected, csConnecting, csConnected, csRecovering };

enum DECLSPEC_DENUM TFDPhysFillRowOption : unsigned int { foBlobs, foDetails, foData, foAfterIns, foAfterUpd, foUpdatable, foClear, foUnkRec, foNoIdentity };

typedef System::Set<TFDPhysFillRowOption, TFDPhysFillRowOption::foBlobs, TFDPhysFillRowOption::foNoIdentity> TFDPhysFillRowOptions;

enum DECLSPEC_DENUM Firedac_Phys_Intf__3 : unsigned int { goForceQuoteTab, goForceNoQuoteTab, goForceQuoteCol, goForceNoQuoteCol, goBeautify, goNoVersion, goSkipUnsupTypes };

typedef System::Set<Firedac_Phys_Intf__3, Firedac_Phys_Intf__3::goForceQuoteTab, Firedac_Phys_Intf__3::goSkipUnsupTypes> TFDPhysCommandGeneratorOptions;

enum DECLSPEC_DENUM TFDPhysMetaInfoKind : unsigned int { mkNone, mkCatalogs, mkSchemas, mkTables, mkTableFields, mkIndexes, mkIndexFields, mkPrimaryKey, mkPrimaryKeyFields, mkForeignKeys, mkForeignKeyFields, mkPackages, mkProcs, mkProcArgs, mkGenerators, mkResultSetFields, mkTableTypeFields };

enum DECLSPEC_DENUM TFDPhysObjectScope : unsigned int { osMy, osOther, osSystem };

typedef System::Set<TFDPhysObjectScope, TFDPhysObjectScope::osMy, TFDPhysObjectScope::osSystem> TFDPhysObjectScopes;

enum DECLSPEC_DENUM TFDPhysTableKind : unsigned int { tkSynonym, tkTable, tkView, tkTempTable, tkLocalTable };

typedef System::Set<TFDPhysTableKind, TFDPhysTableKind::tkSynonym, TFDPhysTableKind::tkLocalTable> TFDPhysTableKinds;

enum DECLSPEC_DENUM TFDPhysProcedureKind : unsigned int { pkProcedure, pkFunction };

enum DECLSPEC_DENUM TFDPhysIndexKind : unsigned int { ikNonUnique, ikUnique, ikPrimaryKey };

enum DECLSPEC_DENUM TFDPhysCascadeRuleKind : unsigned int { ckNone, ckCascade, ckRestrict, ckSetNull, ckSetDefault };

enum DECLSPEC_DENUM TFDPhysManagerState : unsigned int { dmsInactive, dmsActive, dmsStoping, dmsTerminating };

enum DECLSPEC_DENUM TFDPhysDriverState : unsigned int { drsUnknown, drsRegistered, drsLoading, drsLoaded, drsActive, drsStoping };

enum DECLSPEC_DENUM TFDPhysCommandState : unsigned int { csInactive, csPrepared, csExecuting, csOpen, csFetching, csAborting };

typedef System::Set<TFDPhysCommandState, TFDPhysCommandState::csInactive, TFDPhysCommandState::csAborting> TFDPhysCommandStates;

enum DECLSPEC_DENUM TFDPhysMetaInfoMergeMode : unsigned int { mmReset, mmOverride, mmRely };

enum DECLSPEC_DENUM TFDPhysMissingMetaInfoAction : unsigned int { maAdd, maIgore, maError };

enum DECLSPEC_DENUM Firedac_Phys_Intf__4 : unsigned int { ctDefaultFirst, ctNoAlterTableConstraint };

typedef System::Set<Firedac_Phys_Intf__4, Firedac_Phys_Intf__4::ctDefaultFirst, Firedac_Phys_Intf__4::ctNoAlterTableConstraint> TFDPhysCreateTableOptions;

enum DECLSPEC_DENUM Firedac_Phys_Intf__5 : unsigned int { tpTable, tpGenerators, tpTriggers, tpPrimaryKey, tpIndexes };

typedef System::Set<Firedac_Phys_Intf__5, Firedac_Phys_Intf__5::tpTable, Firedac_Phys_Intf__5::tpIndexes> TFDPhysCreateTableParts;

enum DECLSPEC_DENUM TFDPhysConnectionRecoverAction : unsigned int { faDefault, faFail, faRetry, faCloseAbort, faOfflineAbort };

enum DECLSPEC_DENUM TFDPhysArrayExecMode : unsigned int { aeNotSupported, aeOnErrorUndoAll, aeUpToFirstError, aeCollectAllErrors };

enum DECLSPEC_DENUM TFDPhysInsertHBlobMode : unsigned int { hmInInsert, hmUpdateAfterInsert, hmSetAfterReturning };

enum DECLSPEC_DENUM TFDPhysTableCommand : unsigned int { tcUnknown, tcPageUp, tcPageDown, tcBof, tcEof, tcLocate, tcFindKey, tcFindNearest, tcSetRecNo, tcGetRowCount, tcCurrentRecord, tcGetRecNo };

struct DECLSPEC_DRECORD TFDPhysTableParams
{
public:
	TFDPhysTableCommand FTableCommand;
	TFDPhysTableCommand FLastTableCommand;
	System::UnicodeString FCatalog;
	System::UnicodeString FSchema;
	System::UnicodeString FTable;
	System::UnicodeString FSelectFields;
	System::UnicodeString FPrimaryKeyFields;
	System::UnicodeString FIndexFields;
	System::UnicodeString FDescFields;
	System::UnicodeString FNoCaseFields;
	System::UnicodeString FIndexExpression;
	System::UnicodeString FMasterFields;
	System::UnicodeString FMasterNullFields;
	System::UnicodeString FFilter;
	bool FFilterNoCase;
	bool FFilterPartial;
	bool FRanged;
	Firedac::Dats::TFDDatSRow* FRangeStartRow;
	int FRangeStartFieldCount;
	bool FRangeStartExclusive;
	Firedac::Dats::TFDDatSRow* FRangeEndRow;
	int FRangeEndFieldCount;
	bool FRangeEndExclusive;
	bool FExclusive;
	bool FFiltered;
	bool FReadOnly;
	System::UnicodeString FLocateFields;
	System::UnicodeString FLocateExpression;
	bool FLocateIgnoreCase;
	bool FLocatePartial;
	bool FLocateBackward;
	bool FLocateFromCurrent;
	Firedac::Dats::TFDDatSRow* FLocateRow;
	int FKeyFieldCount;
	int FRecordCount;
	int FRecordNumber;
	TFDPhysNullLocations FNullLocation;
	System::UnicodeString FCustomWhere;
};


__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2100}") IFDPhysManagerMetadata  : public System::IInterface 
{
	virtual int __fastcall GetDriverCount() = 0 ;
	virtual System::UnicodeString __fastcall GetDriverID(int AIndex) = 0 ;
	virtual System::UnicodeString __fastcall GetBaseDriverID(int AIndex) = 0 /* overload */;
	virtual void __fastcall CreateDriverMetadata(const System::UnicodeString ADriverID, /* out */ _di_IFDPhysDriverMetadata &ADrvMeta) = 0 ;
	__property int DriverCount = {read=GetDriverCount};
	__property System::UnicodeString DriverID[int AIndex] = {read=GetDriverID};
	__property System::UnicodeString BaseDriverID[int AIndex] = {read=GetBaseDriverID};
	virtual System::UnicodeString __fastcall GetBaseDriverID(const System::UnicodeString ADriverID) = 0 /* overload */;
	virtual System::TClass __fastcall GetBaseDriverClass(const System::UnicodeString ADriverID) = 0 ;
	virtual Firedac::Stan::Intf::TFDRDBMSKind __fastcall GetRDBMSKind(const System::UnicodeString AName) = 0 ;
	virtual System::UnicodeString __fastcall GetRDBMSName(Firedac::Stan::Intf::TFDRDBMSKind AKind) = 0 ;
	virtual void __fastcall GetRDBMSNames(System::Classes::TStrings* ANames) = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2101}") IFDPhysManager  : public System::IInterface 
{
	virtual Firedac::Stan::Intf::_di_IFDStanDefinitions __fastcall GetDriverDefs() = 0 ;
	virtual Firedac::Stan::Intf::_di_IFDStanConnectionDefs __fastcall GetConnectionDefs() = 0 ;
	virtual Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetOptions() = 0 ;
	virtual TFDPhysManagerState __fastcall GetState() = 0 ;
	virtual void __fastcall CreateDriver(const System::UnicodeString ADriverID, /* out */ _di_IFDPhysDriver &ADrv, bool AIntfRequired = true) = 0 ;
	virtual void __fastcall CreateConnection(const Firedac::Stan::Intf::_di_IFDStanConnectionDef AConDef, /* out */ _di_IFDPhysConnection &AConn, bool AIntfRequired = true) = 0 /* overload */;
	virtual void __fastcall CreateConnection(const System::UnicodeString AConDefName, /* out */ _di_IFDPhysConnection &AConn, bool AIntfRequired = true) = 0 /* overload */;
	virtual void __fastcall CreateMetadata(/* out */ _di_IFDPhysManagerMetadata &AMeta) = 0 ;
	virtual void __fastcall CreateDefaultConnectionMetadata(/* out */ _di_IFDPhysConnectionMetadata &AConn) = 0 ;
	virtual void __fastcall Open() = 0 ;
	virtual void __fastcall Close(bool AWait = false) = 0 ;
	virtual void __fastcall CloseConnectionDef(const Firedac::Stan::Intf::_di_IFDStanConnectionDef AConnectionDef) = 0 ;
	virtual void __fastcall RefreshMetadataCache() = 0 ;
	virtual System::UnicodeString __fastcall DriverIDFromSharedCliHandle(void * ASharedCliHandle) = 0 ;
	virtual void __fastcall RegisterRDBMSKind(Firedac::Stan::Intf::TFDRDBMSKind AKind, const System::UnicodeString AName) = 0 ;
	virtual void __fastcall RegisterDriverClass(System::TClass ADriverClass) = 0 ;
	virtual void __fastcall UnregisterDriverClass(System::TClass ADriverClass) = 0 ;
	__property Firedac::Stan::Intf::_di_IFDStanDefinitions DriverDefs = {read=GetDriverDefs};
	__property Firedac::Stan::Intf::_di_IFDStanConnectionDefs ConnectionDefs = {read=GetConnectionDefs};
	__property Firedac::Stan::Option::_di_IFDStanOptions Options = {read=GetOptions};
	__property TFDPhysManagerState State = {read=GetState};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2102}") IFDPhysDriverMetadata  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetDriverID() = 0 ;
	virtual System::UnicodeString __fastcall GetBaseDrvID() = 0 ;
	virtual System::UnicodeString __fastcall GetBaseDrvDesc() = 0 ;
	virtual Firedac::Stan::Intf::TFDRDBMSKind __fastcall GetDbKind() = 0 ;
	virtual Firedac::Dats::TFDDatSTable* __fastcall GetConnParams(System::Classes::TStrings* AKeys, Firedac::Dats::TFDDatSTable* AParams = (Firedac::Dats::TFDDatSTable*)(0x0)) = 0 ;
	__property System::UnicodeString DriverID = {read=GetDriverID};
	__property System::UnicodeString BaseDriverID = {read=GetBaseDrvID};
	__property System::UnicodeString BaseDriverDesc = {read=GetBaseDrvDesc};
	__property Firedac::Stan::Intf::TFDRDBMSKind RDBMSKind = {read=GetDbKind};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2111}") IFDPhysDriverConnectionWizard  : public System::IInterface 
{
	virtual bool __fastcall Run(const Firedac::Stan::Intf::_di_IFDStanConnectionDef AConnDef, NativeUInt AParentWnd) = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2103}") IFDPhysDriver  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetDriverID() = 0 ;
	virtual System::UnicodeString __fastcall GetBaseDrvID() = 0 ;
	virtual int __fastcall GetConnectionCount() = 0 ;
	virtual _di_IFDPhysConnection __fastcall GetConnections(int AIndex) = 0 ;
	virtual TFDPhysDriverState __fastcall GetState() = 0 ;
	virtual void * __fastcall GetCliObj() = 0 ;
	virtual System::Classes::TStrings* __fastcall GetMessages() = 0 ;
	virtual void __fastcall Load() = 0 ;
	virtual void __fastcall Unload() = 0 ;
	virtual void __fastcall Employ() = 0 ;
	virtual void __fastcall Vacate() = 0 ;
	virtual void __fastcall CreateConnection(const Firedac::Stan::Intf::_di_IFDStanConnectionDef AConnectionDef, /* out */ _di_IFDPhysConnection &AConn) = 0 ;
	virtual void __fastcall CloseConnectionDef(const Firedac::Stan::Intf::_di_IFDStanConnectionDef AConnectionDef) = 0 ;
	virtual void __fastcall CreateMetadata(/* out */ _di_IFDPhysDriverMetadata &AMeta) = 0 ;
	virtual void __fastcall CreateConnectionWizard(/* out */ _di_IFDPhysDriverConnectionWizard &AWizard) = 0 ;
	__property System::UnicodeString DriverID = {read=GetDriverID};
	__property System::UnicodeString BaseDriverID = {read=GetBaseDrvID};
	__property TFDPhysDriverState State = {read=GetState};
	__property void * CliObj = {read=GetCliObj};
	__property int ConnectionCount = {read=GetConnectionCount};
	__property _di_IFDPhysConnection Connections[int AIndex] = {read=GetConnections};
	__property System::Classes::TStrings* Messages = {read=GetMessages};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2104}") IFDPhysConnectionMetadata  : public System::IInterface 
{
	virtual Firedac::Stan::Intf::TFDRDBMSKind __fastcall GetKind() = 0 ;
	virtual unsigned __int64 __fastcall GetClientVersion() = 0 ;
	virtual unsigned __int64 __fastcall GetServerVersion() = 0 ;
	virtual bool __fastcall GetIsUnicode() = 0 ;
	virtual bool __fastcall GetIsFileBased() = 0 ;
	virtual bool __fastcall GetTxSupported() = 0 ;
	virtual bool __fastcall GetTxNested() = 0 ;
	virtual bool __fastcall GetTxMultiple() = 0 ;
	virtual bool __fastcall GetTxSavepoints() = 0 ;
	virtual bool __fastcall GetTxAutoCommit() = 0 ;
	virtual bool __fastcall GetTxAtomic() = 0 ;
	virtual bool __fastcall GetEventSupported() = 0 ;
	virtual System::UnicodeString __fastcall GetEventKinds() = 0 ;
	virtual bool __fastcall GetGeneratorSupported() = 0 ;
	virtual int __fastcall GetParamNameMaxLength() = 0 ;
	virtual TFDPhysNameParts __fastcall GetNameParts() = 0 ;
	virtual TFDPhysNameParts __fastcall GetNameQuotedSupportedParts() = 0 ;
	virtual TFDPhysNameParts __fastcall GetNameQuotedCaseSensParts() = 0 ;
	virtual TFDPhysNameParts __fastcall GetNameCaseSensParts() = 0 ;
	virtual TFDPhysNameParts __fastcall GetNameDefLowCaseParts() = 0 ;
	virtual System::WideChar __fastcall GetNameQuoteChar(TFDPhysNameQuoteLevel AQuote, TFDPhysNameQuoteSide ASide) = 0 ;
	virtual System::WideChar __fastcall GetCatalogSeparator() = 0 ;
	virtual System::WideChar __fastcall GetSchemaSeparator() = 0 ;
	virtual TFDPhysInsertHBlobMode __fastcall GetInsertHBlobMode() = 0 ;
	virtual bool __fastcall GetIdentitySupported() = 0 ;
	virtual bool __fastcall GetIdentityInsertSupported() = 0 ;
	virtual bool __fastcall GetIdentityInWhere() = 0 ;
	virtual TFDPhysParamMark __fastcall GetNamedParamMark() = 0 ;
	virtual TFDPhysParamMark __fastcall GetPositionedParamMark() = 0 ;
	virtual bool __fastcall GetTruncateSupported() = 0 ;
	virtual TFDPhysDefaultValues __fastcall GetDefValuesSupported() = 0 ;
	virtual bool __fastcall GetInlineRefresh() = 0 ;
	virtual TFDPhysSelectOptions __fastcall GetSelectOptions() = 0 ;
	virtual bool __fastcall GetLockNoWait() = 0 ;
	virtual bool __fastcall GetAsyncAbortSupported() = 0 ;
	virtual bool __fastcall GetAsyncNativeTimeout() = 0 ;
	virtual System::UnicodeString __fastcall GetCommandSeparator() = 0 ;
	virtual Firedac::Stan::Intf::TFDTextEndOfLine __fastcall GetLineSeparator() = 0 ;
	virtual TFDPhysArrayExecMode __fastcall GetArrayExecMode() = 0 ;
	virtual TFDPhysLimitOptions __fastcall GetLimitOptions() = 0 ;
	virtual TFDPhysNullLocations __fastcall GetNullLocations() = 0 ;
	virtual bool __fastcall GetServerCursorSupported() = 0 ;
	virtual bool __fastcall GetColumnOriginProvided() = 0 ;
	virtual TFDPhysCreateTableOptions __fastcall GetCreateTableOptions() = 0 ;
	virtual bool __fastcall GetBackslashEscSupported() = 0 ;
	virtual bool __fastcall DecodeObjName(const System::UnicodeString AName, /* out */ TFDPhysParsedName &AParsedName, const _di_IFDPhysCommand ACommand, TFDPhysDecodeOptions AOpts) = 0 ;
	virtual System::UnicodeString __fastcall EncodeObjName(const TFDPhysParsedName &AParsedName, const _di_IFDPhysCommand ACommand, TFDPhysEncodeOptions AOpts) = 0 ;
	virtual System::UnicodeString __fastcall QuoteObjName(const System::UnicodeString AName, TFDPhysNamePart APart) = 0 ;
	virtual System::UnicodeString __fastcall UnQuoteObjName(const System::UnicodeString AName) = 0 ;
	virtual bool __fastcall IsKeyword(const System::UnicodeString AName) = 0 ;
	virtual bool __fastcall GetNameQuotedCaseSens(const System::UnicodeString AName, TFDPhysNamePart APart) = 0 ;
	virtual System::UnicodeString __fastcall TranslateEscapeSequence(TFDPhysEscapeData &ASeq) = 0 ;
	virtual TFDPhysCommandKind __fastcall GetSQLCommandKind(System::Classes::TStrings* const ATokens) = 0 ;
	virtual System::UnicodeString __fastcall DefineMetadataTableName(TFDPhysMetaInfoKind AKind) = 0 ;
	virtual void __fastcall DefineMetadataStructure(Firedac::Dats::TFDDatSTable* ATable, TFDPhysMetaInfoKind AKind) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetCatalogs(const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetSchemas(const System::UnicodeString ACatalog, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetTables(TFDPhysObjectScopes AScope, TFDPhysTableKinds AKinds, const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetTableFields(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString ATable, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetTableIndexes(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString ATable, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetTableIndexFields(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString ATable, const System::UnicodeString AIndex, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetTablePrimaryKey(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString ATable) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetTablePrimaryKeyFields(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString ATable, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetPackages(TFDPhysObjectScopes AScope, const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetPackageProcs(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString APackage, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetProcs(TFDPhysObjectScopes AScope, const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetProcArgs(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString APackage, const System::UnicodeString AProc, const System::UnicodeString AWildCard, System::Word AOverload) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetGenerators(TFDPhysObjectScopes AScope, const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString AWildCard) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetResultSetFields(const System::UnicodeString ASQLKey) = 0 ;
	virtual Firedac::Dats::TFDDatSView* __fastcall GetTableTypeFields(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString ATable, const System::UnicodeString AWildCard) = 0 ;
	virtual void __fastcall RefreshMetadataCache(const System::UnicodeString AObjName = System::UnicodeString()) = 0 ;
	__property Firedac::Stan::Intf::TFDRDBMSKind Kind = {read=GetKind};
	__property unsigned __int64 ClientVersion = {read=GetClientVersion};
	__property unsigned __int64 ServerVersion = {read=GetServerVersion};
	__property bool IsUnicode = {read=GetIsUnicode};
	__property bool IsFileBased = {read=GetIsFileBased};
	__property bool TxSupported = {read=GetTxSupported};
	__property bool TxNested = {read=GetTxNested};
	__property bool TxMultiple = {read=GetTxMultiple};
	__property bool TxSavepoints = {read=GetTxSavepoints};
	__property bool TxAutoCommit = {read=GetTxAutoCommit};
	__property bool TxAtomic = {read=GetTxAtomic};
	__property bool EventSupported = {read=GetEventSupported};
	__property System::UnicodeString EventKinds = {read=GetEventKinds};
	__property bool GeneratorSupported = {read=GetGeneratorSupported};
	__property int ParamNameMaxLength = {read=GetParamNameMaxLength};
	__property TFDPhysNameParts NameParts = {read=GetNameParts};
	__property TFDPhysNameParts NameQuotedSupportedParts = {read=GetNameQuotedSupportedParts};
	__property TFDPhysNameParts NameQuotedCaseSensParts = {read=GetNameQuotedCaseSensParts};
	__property TFDPhysNameParts NameCaseSensParts = {read=GetNameCaseSensParts};
	__property TFDPhysNameParts NameDefLowCaseParts = {read=GetNameDefLowCaseParts};
	__property System::WideChar NameQuoteChar[TFDPhysNameQuoteLevel AQuote][TFDPhysNameQuoteSide ASide] = {read=GetNameQuoteChar};
	__property System::WideChar CatalogSeparator = {read=GetCatalogSeparator};
	__property System::WideChar SchemaSeparator = {read=GetSchemaSeparator};
	__property TFDPhysInsertHBlobMode InsertHBlobMode = {read=GetInsertHBlobMode};
	__property bool IdentitySupported = {read=GetIdentitySupported};
	__property bool IdentityInsertSupported = {read=GetIdentityInsertSupported};
	__property bool IdentityInWhere = {read=GetIdentityInWhere};
	__property TFDPhysParamMark NamedParamMark = {read=GetNamedParamMark};
	__property TFDPhysParamMark PositionedParamMark = {read=GetPositionedParamMark};
	__property bool TruncateSupported = {read=GetTruncateSupported};
	__property TFDPhysDefaultValues DefValuesSupported = {read=GetDefValuesSupported};
	__property bool InlineRefresh = {read=GetInlineRefresh};
	__property TFDPhysSelectOptions SelectOptions = {read=GetSelectOptions};
	__property bool LockNoWait = {read=GetLockNoWait};
	__property bool AsyncAbortSupported = {read=GetAsyncAbortSupported};
	__property bool AsyncNativeTimeout = {read=GetAsyncNativeTimeout};
	__property System::UnicodeString CommandSeparator = {read=GetCommandSeparator};
	__property Firedac::Stan::Intf::TFDTextEndOfLine LineSeparator = {read=GetLineSeparator};
	__property TFDPhysArrayExecMode ArrayExecMode = {read=GetArrayExecMode};
	__property TFDPhysLimitOptions LimitOptions = {read=GetLimitOptions};
	__property TFDPhysNullLocations NullLocations = {read=GetNullLocations};
	__property bool ServerCursorSupported = {read=GetServerCursorSupported};
	__property bool ColumnOriginProvided = {read=GetColumnOriginProvided};
	__property TFDPhysCreateTableOptions CreateTableOptions = {read=GetCreateTableOptions};
	__property bool BackslashEscSupported = {read=GetBackslashEscSupported};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2112}") IFDPhysConnectionRecoveryHandler  : public System::IInterface 
{
	virtual void __fastcall HandleConnectionRecover(const Firedac::Stan::Intf::_di_IFDStanObject AInitiator, System::Sysutils::Exception* AException, TFDPhysConnectionRecoverAction &AAction) = 0 ;
	virtual void __fastcall HandleConnectionRestored() = 0 ;
	virtual void __fastcall HandleConnectionLost() = 0 ;
};

enum DECLSPEC_DENUM Firedac_Phys_Intf__6 : unsigned int { afCachedUpdates, afSavePoints, afIndexFieldNames, afRanges, afFilters, afPrimaryKey, afTransactions };

typedef System::Set<Firedac_Phys_Intf__6, Firedac_Phys_Intf__6::afCachedUpdates, Firedac_Phys_Intf__6::afTransactions> TFDPhysLocalSQLAdapterFeatures;

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2118}") IFDPhysLocalSQLAdapter  : public System::IInterface 
{
	virtual TFDPhysLocalSQLAdapterFeatures __fastcall GetFeatures() = 0 ;
	virtual bool __fastcall GetCachedUpdates() = 0 ;
	virtual void __fastcall SetCachedUpdates(const bool AValue) = 0 ;
	virtual __int64 __fastcall GetSavePoint() = 0 ;
	virtual void __fastcall SetSavePoint(const __int64 AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetIndexFieldNames() = 0 ;
	virtual void __fastcall SetIndexFieldNames(const System::UnicodeString AValue) = 0 ;
	virtual System::TObject* __fastcall GetDataSet() = 0 ;
	virtual void __fastcall SetDataSet(System::TObject* ADataSet) = 0 ;
	virtual NativeUInt __fastcall GetConn() = 0 ;
	virtual int __fastcall ApplyUpdates(int AMaxErrors = 0xffffffff) = 0 ;
	virtual void __fastcall CommitUpdates() = 0 ;
	virtual void __fastcall CancelUpdates() = 0 ;
	virtual void __fastcall SetRange(const System::TVarRec *AStartValues, const int AStartValues_High, const System::TVarRec *AEndValues, const int AEndValues_High, bool AStartExclusive = false, bool AEndExclusive = false) = 0 ;
	virtual void __fastcall CancelRange() = 0 ;
	virtual bool __fastcall IsPKViolation(System::Sysutils::Exception* AExc) = 0 ;
	__property TFDPhysLocalSQLAdapterFeatures Features = {read=GetFeatures};
	__property bool CachedUpdates = {read=GetCachedUpdates, write=SetCachedUpdates};
	__property __int64 SavePoint = {read=GetSavePoint, write=SetSavePoint};
	__property System::UnicodeString IndexFieldNames = {read=GetIndexFieldNames, write=SetIndexFieldNames};
	__property System::TObject* DataSet = {read=GetDataSet, write=SetDataSet};
	__property NativeUInt Conn = {read=GetConn};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2119}") IFDPhysSQLHandler  : public System::IInterface 
{
	virtual _di_IFDPhysLocalSQLAdapter __fastcall FindAdapter(const System::UnicodeString ASchema, const System::UnicodeString AName) = 0 ;
	virtual bool __fastcall GetDataSet(const System::UnicodeString ASchema, const System::UnicodeString AName) = 0 ;
	virtual void __fastcall OpenDataSet(const System::UnicodeString ASchema, const System::UnicodeString AName, System::TObject* ADataSet) = 0 ;
	virtual void __fastcall CloseDataSet(const System::UnicodeString ASchema, const System::UnicodeString AName, System::TObject* ADataSet) = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2105}") IFDPhysConnection  : public System::IInterface 
{
	virtual _di_IFDPhysDriver __fastcall GetDriver() = 0 ;
	virtual TFDPhysConnectionState __fastcall GetState() = 0 ;
	virtual Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetOptions() = 0 ;
	virtual int __fastcall GetCommandCount() = 0 ;
	virtual _di_IFDPhysCommand __fastcall GetCommands(int AIndex) = 0 ;
	virtual Firedac::Stan::Intf::_di_IFDStanErrorHandler __fastcall GetErrorHandler() = 0 ;
	virtual _di_IFDPhysConnectionRecoveryHandler __fastcall GetRecoveryHandler() = 0 ;
	virtual Firedac::Ui::Intf::_di_IFDGUIxLoginDialog __fastcall GetLogin() = 0 ;
	virtual Firedac::Stan::Intf::_di_IFDStanConnectionDef __fastcall GetConnectionDef() = 0 ;
	virtual bool __fastcall GetLoginPrompt() = 0 ;
	virtual Firedac::Stan::Error::EFDDBEngineException* __fastcall GetMessages() = 0 ;
	virtual void * __fastcall GetCliObj() = 0 ;
	virtual void * __fastcall GetSharedCliHandle() = 0 ;
	virtual void * __fastcall GetCliHandle() = 0 ;
	virtual _di_IFDPhysTransaction __fastcall GetTransaction() = 0 ;
	virtual int __fastcall GetTransactionCount() = 0 ;
	virtual _di_IFDPhysTransaction __fastcall GetTransactions(int AIndex) = 0 ;
	virtual System::UnicodeString __fastcall GetCurrentCatalog() = 0 ;
	virtual System::UnicodeString __fastcall GetCurrentSchema() = 0 ;
	virtual int __fastcall GetEventCount() = 0 ;
	virtual _di_IFDPhysEventAlerter __fastcall GetEvents(int AIndex) = 0 ;
	virtual void __fastcall SetOptions(const Firedac::Stan::Option::_di_IFDStanOptions AValue) = 0 ;
	virtual void __fastcall SetErrorHandler(const Firedac::Stan::Intf::_di_IFDStanErrorHandler AValue) = 0 ;
	virtual void __fastcall SetRecoveryHandler(const _di_IFDPhysConnectionRecoveryHandler AValue) = 0 ;
	virtual void __fastcall SetLogin(const Firedac::Ui::Intf::_di_IFDGUIxLoginDialog AValue) = 0 ;
	virtual void __fastcall SetLoginPrompt(const bool AValue) = 0 ;
	virtual void __fastcall SetCurrentCatalog(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetCurrentSchema(const System::UnicodeString AValue) = 0 ;
	virtual Firedac::Stan::Intf::_di_IFDMoniClient __fastcall GetMonitor() = 0 ;
	virtual bool __fastcall GetTracing() = 0 ;
	virtual void __fastcall SetTracing(bool AValue) = 0 ;
	virtual void __fastcall SetSharedCliHandle(void * AValue) = 0 ;
	virtual void __fastcall SetTransaction(const _di_IFDPhysTransaction AValue) = 0 ;
	virtual void __fastcall CreateMetadata(/* out */ _di_IFDPhysConnectionMetadata &AConnMeta) = 0 ;
	virtual void __fastcall CreateCommandGenerator(/* out */ _di_IFDPhysCommandGenerator &AGen, const _di_IFDPhysCommand ACommand) = 0 ;
	virtual void __fastcall CreateCommand(/* out */ _di_IFDPhysCommand &ACmd) = 0 ;
	virtual void __fastcall CreateMetaInfoCommand(/* out */ _di_IFDPhysMetaInfoCommand &AMetaCmd) = 0 ;
	virtual void __fastcall CreateTransaction(/* out */ _di_IFDPhysTransaction &ATx) = 0 ;
	virtual void __fastcall CreateEvent(const System::UnicodeString AEventKind, /* out */ _di_IFDPhysEventAlerter &AEvent) = 0 ;
	virtual void __fastcall Open() = 0 ;
	virtual void __fastcall Close() = 0 ;
	virtual void __fastcall ForceDisconnect() = 0 ;
	virtual bool __fastcall Ping() = 0 ;
	virtual void __fastcall ChangePassword(const System::UnicodeString ANewPassword) = 0 ;
	virtual System::Variant __fastcall GetLastAutoGenValue(const System::UnicodeString AName) = 0 ;
	virtual void __fastcall SaveLastAutoGenValue(const System::Variant &AValue) = 0 ;
	virtual _di_IFDPhysConnection __fastcall Clone() = 0 ;
	virtual void __fastcall AnalyzeSession(System::Classes::TStrings* AMessages) = 0 ;
	__property _di_IFDPhysDriver Driver = {read=GetDriver};
	__property TFDPhysConnectionState State = {read=GetState};
	__property Firedac::Stan::Intf::_di_IFDStanConnectionDef ConnectionDef = {read=GetConnectionDef};
	__property int CommandCount = {read=GetCommandCount};
	__property _di_IFDPhysCommand Commands[int AIndex] = {read=GetCommands};
	__property int TransactionCount = {read=GetTransactionCount};
	__property _di_IFDPhysTransaction Transactions[int AIndex] = {read=GetTransactions};
	__property int EventCount = {read=GetEventCount};
	__property _di_IFDPhysEventAlerter Events[int AIndex] = {read=GetEvents};
	__property Firedac::Stan::Error::EFDDBEngineException* Messages = {read=GetMessages};
	__property void * CliObj = {read=GetCliObj};
	__property void * CliHandle = {read=GetCliHandle};
	__property Firedac::Stan::Option::_di_IFDStanOptions Options = {read=GetOptions, write=SetOptions};
	__property Firedac::Stan::Intf::_di_IFDStanErrorHandler ErrorHandler = {read=GetErrorHandler, write=SetErrorHandler};
	__property _di_IFDPhysConnectionRecoveryHandler RecoveryHandler = {read=GetRecoveryHandler, write=SetRecoveryHandler};
	__property Firedac::Ui::Intf::_di_IFDGUIxLoginDialog Login = {read=GetLogin, write=SetLogin};
	__property bool LoginPrompt = {read=GetLoginPrompt, write=SetLoginPrompt};
	__property void * SharedCliHandle = {read=GetSharedCliHandle, write=SetSharedCliHandle};
	__property _di_IFDPhysTransaction Transaction = {read=GetTransaction, write=SetTransaction};
	__property System::UnicodeString CurrentCatalog = {read=GetCurrentCatalog, write=SetCurrentCatalog};
	__property System::UnicodeString CurrentSchema = {read=GetCurrentSchema, write=SetCurrentSchema};
	__property bool Tracing = {read=GetTracing, write=SetTracing};
	__property Firedac::Stan::Intf::_di_IFDMoniClient Monitor = {read=GetMonitor};
};

enum DECLSPEC_DENUM TFDPhysTransactionState : unsigned int { tsInactive, tsActive, tsStarting, tsCommiting, tsRollingback };

typedef bool __fastcall (*TFDPhysDisconnectFilter)(System::TObject* ACmdObj);

enum DECLSPEC_DENUM TFDPhysDisconnectMode : unsigned int { dmOffline, dmRelease };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2115}") IFDPhysTransactionStateHandler  : public System::IInterface 
{
	virtual void __fastcall HandleDisconnectCommands(TFDPhysDisconnectFilter AFilter, TFDPhysDisconnectMode AMode) = 0 ;
	virtual void __fastcall HandleTxOperation(TFDPhysTransactionState AOperation, bool ABefore) = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2113}") IFDPhysTransaction  : public System::IInterface 
{
	virtual Firedac::Stan::Option::TFDTxOptions* __fastcall GetOptions() = 0 ;
	virtual bool __fastcall GetActive() = 0 ;
	virtual unsigned __fastcall GetSerialID() = 0 ;
	virtual unsigned __fastcall GetTopSerialID() = 0 ;
	virtual unsigned __fastcall GetNestingLevel() = 0 ;
	virtual void * __fastcall GetCliObj() = 0 ;
	virtual _di_IFDPhysConnection __fastcall GetConnection() = 0 ;
	virtual TFDPhysTransactionState __fastcall GetState() = 0 ;
	virtual void __fastcall SetOptions(Firedac::Stan::Option::TFDTxOptions* const AValue) = 0 ;
	virtual unsigned __fastcall StartTransaction() = 0 ;
	virtual void __fastcall Commit() = 0 ;
	virtual void __fastcall CommitRetaining() = 0 ;
	virtual void __fastcall Rollback() = 0 ;
	virtual void __fastcall RollbackRetaining() = 0 ;
	virtual void __fastcall LockAutoStop() = 0 ;
	virtual void __fastcall UnlockAutoStop(bool ASuccess, bool AAllowStop) = 0 ;
	virtual void __fastcall AddStateHandler(const _di_IFDPhysTransactionStateHandler AHandler) = 0 ;
	virtual void __fastcall RemoveStateHandler(const _di_IFDPhysTransactionStateHandler AHandler) = 0 ;
	virtual void __fastcall Disconnect() = 0 ;
	__property _di_IFDPhysConnection Connection = {read=GetConnection};
	__property bool Active = {read=GetActive};
	__property TFDPhysTransactionState State = {read=GetState};
	__property unsigned TopSerialID = {read=GetTopSerialID};
	__property unsigned SerialID = {read=GetSerialID};
	__property unsigned NestingLevel = {read=GetNestingLevel};
	__property void * CliObj = {read=GetCliObj};
	__property Firedac::Stan::Option::TFDTxOptions* Options = {read=GetOptions, write=SetOptions};
};

enum DECLSPEC_DENUM TFDPhysMappingResult : unsigned int { mrDefault, mrMapped, mrNotMapped };

enum DECLSPEC_DENUM TFDPhysMappingKind : unsigned int { nkDefault, nkID, nkSource, nkDatS, nkObj };

struct DECLSPEC_DRECORD TFDPhysMappingName
{
public:
	TFDPhysMappingKind FKind;
	int FID;
	System::UnicodeString FName;
	Firedac::Dats::TFDDatSObject* FObj;
	__fastcall TFDPhysMappingName(const int AID, TFDPhysMappingKind AKind)/* overload */;
	__fastcall TFDPhysMappingName(const System::UnicodeString AName, TFDPhysMappingKind AKind)/* overload */;
	__fastcall TFDPhysMappingName(Firedac::Dats::TFDDatSObject* const AObj, TFDPhysMappingKind AKind)/* overload */;
	TFDPhysMappingName() {}
};


__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2108}") IFDPhysMappingHandler  : public System::IInterface 
{
	virtual TFDPhysMappingResult __fastcall MapRecordSet(const TFDPhysMappingName &ATable, int &ASourceID, System::UnicodeString &ASourceName, System::UnicodeString &ADatSName, System::UnicodeString &AUpdateName, Firedac::Dats::TFDDatSTable* &ADatSTable) = 0 ;
	virtual TFDPhysMappingResult __fastcall MapRecordSetColumn(const TFDPhysMappingName &ATable, const TFDPhysMappingName &AColumn, int &ASourceID, System::UnicodeString &ASourceName, System::UnicodeString &ADatSName, System::UnicodeString &AUpdateName, Firedac::Dats::TFDDatSColumn* &ADatSColumn) = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2114}") IFDPhysCommandStateHandler  : public Firedac::Stan::Intf::IFDStanAsyncHandler 
{
	virtual void __fastcall HandleUnprepare() = 0 ;
};

enum DECLSPEC_DENUM Firedac_Phys_Intf__7 : unsigned int { gfHasHBlob, gfFetchGenerator, gfIdentityInsert, gfInlineView, gfCreateIdentityTrigger, gfCreateIdentityGenerator };

typedef System::Set<Firedac_Phys_Intf__7, Firedac_Phys_Intf__7::gfHasHBlob, Firedac_Phys_Intf__7::gfCreateIdentityGenerator> TFDPhysCommandGeneratorFlags;

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2107}") IFDPhysCommandGenerator  : public System::IInterface 
{
	virtual TFDPhysFillRowOptions __fastcall GetFillRowOptions() = 0 ;
	virtual TFDPhysCommandGeneratorOptions __fastcall GetGenOptions() = 0 ;
	virtual TFDPhysCommandGeneratorFlags __fastcall GetFlags() = 0 ;
	virtual Firedac::Stan::Param::TFDParams* __fastcall GetParams() = 0 ;
	virtual Firedac::Dats::TFDDatSRow* __fastcall GetRow() = 0 ;
	virtual Firedac::Dats::TFDDatSTable* __fastcall GetTable() = 0 ;
	virtual Firedac::Stan::Option::TFDUpdateRowOptions __fastcall GetUpdateRowOptions() = 0 ;
	virtual void __fastcall SetParams(Firedac::Stan::Param::TFDParams* const AValue) = 0 ;
	virtual void __fastcall SetRow(Firedac::Dats::TFDDatSRow* const AValue) = 0 ;
	virtual void __fastcall SetTable(Firedac::Dats::TFDDatSTable* const AValue) = 0 ;
	virtual void __fastcall SetUpdateRowOptions(const Firedac::Stan::Option::TFDUpdateRowOptions AValue) = 0 ;
	virtual Firedac::Dats::TFDDatSColumn* __fastcall GetCol() = 0 ;
	virtual void __fastcall SetCol(Firedac::Dats::TFDDatSColumn* const AValue) = 0 ;
	virtual void __fastcall SetFillRowOptions(const TFDPhysFillRowOptions AValue) = 0 ;
	virtual void __fastcall SetGenOptions(const TFDPhysCommandGeneratorOptions AValue) = 0 ;
	virtual TFDPhysCommandKind __fastcall GetCommandKind() = 0 ;
	virtual int __fastcall GetSQLOrderByPos() = 0 ;
	virtual Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetOptions() = 0 ;
	virtual void __fastcall SetOptions(const Firedac::Stan::Option::_di_IFDStanOptions AValue) = 0 ;
	virtual _di_IFDPhysMappingHandler __fastcall GetMappingHandler() = 0 ;
	virtual void __fastcall SetMappingHandler(const _di_IFDPhysMappingHandler AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetSingleRowTable() = 0 ;
	virtual System::UnicodeString __fastcall GenerateDelete() = 0 ;
	virtual System::UnicodeString __fastcall GenerateDeleteAll(bool ANoUndo) = 0 ;
	virtual System::UnicodeString __fastcall GenerateInsert() = 0 ;
	virtual System::UnicodeString __fastcall GenerateMerge(TFDPhysMergeAction AAction) = 0 ;
	virtual System::UnicodeString __fastcall GenerateLock() = 0 ;
	virtual System::UnicodeString __fastcall GenerateSavepoint(const System::UnicodeString AName) = 0 ;
	virtual System::UnicodeString __fastcall GenerateRollbackToSavepoint(const System::UnicodeString AName) = 0 ;
	virtual System::UnicodeString __fastcall GenerateCommitSavepoint(const System::UnicodeString AName) = 0 ;
	virtual System::UnicodeString __fastcall GenerateSelect(bool ARequired) = 0 ;
	virtual System::UnicodeString __fastcall GenerateUnLock() = 0 ;
	virtual System::UnicodeString __fastcall GenerateUpdate() = 0 ;
	virtual System::UnicodeString __fastcall GenerateUpdateHBlobs() = 0 ;
	virtual System::UnicodeString __fastcall GenerateFetchGenerators() = 0 ;
	virtual System::UnicodeString __fastcall GenerateReadGenerator(const System::UnicodeString AName, const System::UnicodeString AAlias, bool ANextValue, bool AFullSelect) = 0 ;
	virtual System::UnicodeString __fastcall GenerateCall(const System::UnicodeString AName) = 0 ;
	virtual System::UnicodeString __fastcall GenerateEval(const System::UnicodeString AExpr) = 0 ;
	virtual System::UnicodeString __fastcall GeneratePing() = 0 ;
	virtual System::UnicodeString __fastcall GenerateSelectTable(const TFDPhysTableParams &ATableParams) = 0 ;
	virtual System::UnicodeString __fastcall GenerateStoredProcParams(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString APackage, const System::UnicodeString AProc, System::Word AOverload) = 0 ;
	virtual System::UnicodeString __fastcall GenerateStoredProcCall(const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString APackage, const System::UnicodeString AProc, System::Word AOverload, TFDPhysCommandKind ASPUsage) = 0 ;
	virtual System::UnicodeString __fastcall GenerateSelectMetaInfo(TFDPhysMetaInfoKind AKind, const System::UnicodeString ACatalog, const System::UnicodeString ASchema, const System::UnicodeString ABaseObj, const System::UnicodeString AObj, const System::UnicodeString AWildcard, TFDPhysObjectScopes AScopes, TFDPhysTableKinds ATableKinds, System::Word AOverload) = 0 ;
	virtual System::UnicodeString __fastcall GenerateLimitSelect(int ASkip, int ARows, bool AOneMore, TFDPhysLimitOptions &AOptions) = 0 ;
	virtual System::UnicodeString __fastcall GenerateCountSelect() = 0 ;
	virtual System::UnicodeString __fastcall GenerateRowId(/* out */ System::UnicodeString &AAlias) = 0 ;
	virtual System::Classes::TStrings* __fastcall GenerateCreateTable(TFDPhysCreateTableParts AParts) = 0 ;
	virtual System::Classes::TStrings* __fastcall GenerateDropTable(TFDPhysCreateTableParts AParts) = 0 ;
	__property TFDPhysCommandGeneratorFlags Flags = {read=GetFlags};
	__property TFDPhysCommandKind CommandKind = {read=GetCommandKind};
	__property int SQLOrderByPos = {read=GetSQLOrderByPos};
	__property System::UnicodeString SingleRowTable = {read=GetSingleRowTable};
	__property TFDPhysFillRowOptions FillRowOptions = {read=GetFillRowOptions, write=SetFillRowOptions};
	__property Firedac::Stan::Option::TFDUpdateRowOptions UpdateRowOptions = {read=GetUpdateRowOptions, write=SetUpdateRowOptions};
	__property TFDPhysCommandGeneratorOptions GenOptions = {read=GetGenOptions, write=SetGenOptions};
	__property Firedac::Stan::Option::_di_IFDStanOptions Options = {read=GetOptions, write=SetOptions};
	__property Firedac::Stan::Param::TFDParams* Params = {read=GetParams, write=SetParams};
	__property Firedac::Dats::TFDDatSColumn* Column = {read=GetCol, write=SetCol};
	__property Firedac::Dats::TFDDatSRow* Row = {read=GetRow, write=SetRow};
	__property Firedac::Dats::TFDDatSTable* Table = {read=GetTable, write=SetTable};
	__property _di_IFDPhysMappingHandler MappingHandler = {read=GetMappingHandler, write=SetMappingHandler};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2109}") IFDPhysCommand  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetSchemaName() = 0 ;
	virtual System::UnicodeString __fastcall GetCatalogName() = 0 ;
	virtual System::UnicodeString __fastcall GetBaseObjectName() = 0 ;
	virtual _di_IFDPhysConnection __fastcall GetConnection() = 0 ;
	virtual Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetOptions() = 0 ;
	virtual TFDPhysCommandState __fastcall GetState() = 0 ;
	virtual System::UnicodeString __fastcall GetCommandText() = 0 ;
	virtual TFDPhysCommandKind __fastcall GetCommandKind() = 0 ;
	virtual Firedac::Stan::Param::TFDParams* __fastcall GetParams() = 0 ;
	virtual Firedac::Stan::Param::TFDMacros* __fastcall GetMacros() = 0 ;
	virtual System::Word __fastcall GetOverload() = 0 ;
	virtual bool __fastcall GetNextRecordSet() = 0 ;
	virtual Firedac::Stan::Intf::_di_IFDStanErrorHandler __fastcall GetErrorHandler() = 0 ;
	virtual System::UnicodeString __fastcall GetSourceObjectName() = 0 ;
	virtual System::UnicodeString __fastcall GetSourceRecordSetName() = 0 ;
#ifndef _WIN64
	virtual int __fastcall GetRowsAffected() = 0 ;
#else /* _WIN64 */
	virtual __int64 __fastcall GetRowsAffected() = 0 ;
#endif /* _WIN64 */
	virtual bool __fastcall GetRowsAffectedReal() = 0 ;
	virtual Firedac::Stan::Intf::TFDErrorAction __fastcall GetErrorAction() = 0 ;
	virtual _di_IFDPhysMappingHandler __fastcall GetMappingHandler() = 0 ;
	virtual int __fastcall GetSQLOrderByPos() = 0 ;
	virtual void * __fastcall GetCliObj() = 0 ;
	virtual _di_IFDPhysTransaction __fastcall GetTransaction() = 0 ;
	virtual System::UnicodeString __fastcall GetSQLText() = 0 ;
	virtual _di_IFDPhysCommandStateHandler __fastcall GetStateHandler() = 0 ;
	virtual void __fastcall SetSchemaName(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetCatalogName(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetBaseObjectName(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetOptions(const Firedac::Stan::Option::_di_IFDStanOptions AValue) = 0 ;
	virtual void __fastcall SetCommandText(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetCommandKind(const TFDPhysCommandKind AValue) = 0 ;
	virtual void __fastcall SetSourceObjectName(const System::UnicodeString AValues) = 0 ;
	virtual void __fastcall SetSourceRecordSetName(const System::UnicodeString AValues) = 0 ;
	virtual void __fastcall SetNextRecordSet(const bool AValue) = 0 ;
	virtual void __fastcall SetErrorHandler(const Firedac::Stan::Intf::_di_IFDStanErrorHandler AValue) = 0 ;
	virtual void __fastcall SetOverload(const System::Word AValue) = 0 ;
	virtual void __fastcall SetMappingHandler(const _di_IFDPhysMappingHandler AValue) = 0 ;
	virtual void __fastcall SetTransaction(const _di_IFDPhysTransaction AValue) = 0 ;
	virtual void __fastcall SetStateHandler(const _di_IFDPhysCommandStateHandler AValue) = 0 ;
	virtual void __fastcall SetMacros(Firedac::Stan::Param::TFDMacros* AValue) = 0 ;
	virtual void __fastcall SetParams(Firedac::Stan::Param::TFDParams* AValue) = 0 ;
	virtual void __fastcall AbortJob(const bool AWait = false) = 0 ;
	virtual void __fastcall Close() = 0 ;
	virtual void __fastcall CloseAll() = 0 ;
	virtual void __fastcall CheckAsyncProgress() = 0 ;
	virtual void __fastcall Disconnect() = 0 ;
	virtual Firedac::Dats::TFDDatSTable* __fastcall Define(Firedac::Dats::TFDDatSManager* ADatSManager, Firedac::Dats::TFDDatSTable* ATable = (Firedac::Dats::TFDDatSTable*)(0x0), TFDPhysMetaInfoMergeMode AMetaInfoMergeMode = (TFDPhysMetaInfoMergeMode)(0x0)) = 0 /* overload */;
	virtual Firedac::Dats::TFDDatSTable* __fastcall Define(Firedac::Dats::TFDDatSTable* ATable = (Firedac::Dats::TFDDatSTable*)(0x0), TFDPhysMetaInfoMergeMode AMetaInfoMergeMode = (TFDPhysMetaInfoMergeMode)(0x0)) = 0 /* overload */;
	virtual void __fastcall Execute(int ATimes = 0x0, int AOffset = 0x0, bool ABlocked = false) = 0 ;
	virtual void __fastcall Fetch(Firedac::Dats::TFDDatSTable* ATable, bool AAll = true, bool ABlocked = false) = 0 /* overload */;
	virtual void __fastcall Fetch(Firedac::Dats::TFDDatSManager* ADatSManager, TFDPhysMetaInfoMergeMode AMetaInfoMergeMode = (TFDPhysMetaInfoMergeMode)(0x0)) = 0 /* overload */;
	virtual void __fastcall CloseStreams() = 0 ;
	virtual void __fastcall Open(bool ABlocked = false) = 0 ;
	virtual void __fastcall Preprocess() = 0 ;
	virtual void __fastcall Prepare(const System::UnicodeString ACommandText = System::UnicodeString(), bool ACreateParams = true) = 0 ;
	virtual void __fastcall Unprepare() = 0 ;
	__property _di_IFDPhysConnection Connection = {read=GetConnection};
	__property TFDPhysCommandState State = {read=GetState};
#ifndef _WIN64
	__property int RowsAffected = {read=GetRowsAffected};
#else /* _WIN64 */
	__property __int64 RowsAffected = {read=GetRowsAffected};
#endif /* _WIN64 */
	__property bool RowsAffectedReal = {read=GetRowsAffectedReal};
	__property Firedac::Stan::Intf::TFDErrorAction ErrorAction = {read=GetErrorAction};
	__property int SQLOrderByPos = {read=GetSQLOrderByPos};
	__property System::UnicodeString SQLText = {read=GetSQLText};
	__property void * CliObj = {read=GetCliObj};
	__property _di_IFDPhysTransaction Transaction = {read=GetTransaction, write=SetTransaction};
	__property Firedac::Stan::Option::_di_IFDStanOptions Options = {read=GetOptions, write=SetOptions};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString BaseObjectName = {read=GetBaseObjectName, write=SetBaseObjectName};
	__property TFDPhysCommandKind CommandKind = {read=GetCommandKind, write=SetCommandKind};
	__property System::UnicodeString CommandText = {read=GetCommandText, write=SetCommandText};
	__property Firedac::Stan::Param::TFDParams* Params = {read=GetParams, write=SetParams};
	__property Firedac::Stan::Param::TFDMacros* Macros = {read=GetMacros, write=SetMacros};
	__property System::Word Overload = {read=GetOverload, write=SetOverload};
	__property bool NextRecordSet = {read=GetNextRecordSet, write=SetNextRecordSet};
	__property System::UnicodeString SourceObjectName = {read=GetSourceObjectName, write=SetSourceObjectName};
	__property System::UnicodeString SourceRecordSetName = {read=GetSourceRecordSetName, write=SetSourceRecordSetName};
	__property Firedac::Stan::Intf::_di_IFDStanErrorHandler ErrorHandler = {read=GetErrorHandler, write=SetErrorHandler};
	__property _di_IFDPhysMappingHandler MappingHandler = {read=GetMappingHandler, write=SetMappingHandler};
	__property _di_IFDPhysCommandStateHandler StateHandler = {read=GetStateHandler, write=SetStateHandler};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2110}") IFDPhysMetaInfoCommand  : public IFDPhysCommand 
{
	virtual TFDPhysMetaInfoKind __fastcall GetMetaInfoKind() = 0 ;
	virtual void __fastcall SetMetaInfoKind(TFDPhysMetaInfoKind AValue) = 0 ;
	virtual TFDPhysTableKinds __fastcall GetTableKinds() = 0 ;
	virtual void __fastcall SetTableKinds(TFDPhysTableKinds AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetWildcard() = 0 ;
	virtual void __fastcall SetWildcard(const System::UnicodeString AValue) = 0 ;
	virtual TFDPhysObjectScopes __fastcall GetObjectScopes() = 0 ;
	virtual void __fastcall SetObjectScopes(TFDPhysObjectScopes AValue) = 0 ;
	__property TFDPhysMetaInfoKind MetaInfoKind = {read=GetMetaInfoKind, write=SetMetaInfoKind};
	__property TFDPhysTableKinds TableKinds = {read=GetTableKinds, write=SetTableKinds};
	__property System::UnicodeString Wildcard = {read=GetWildcard, write=SetWildcard};
	__property TFDPhysObjectScopes ObjectScopes = {read=GetObjectScopes, write=SetObjectScopes};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2116}") IFDPhysEventHandler  : public System::IInterface 
{
	virtual void __fastcall HandleEvent(const System::UnicodeString AEventName, const System::Variant &AArgument) = 0 ;
	virtual void __fastcall HandleTimeout(bool &AContinue) = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2121}") IFDPhysChangeHandler  : public System::IInterface 
{
	virtual _di_IFDPhysCommand __fastcall GetTrackCommand() = 0 ;
	virtual System::UnicodeString __fastcall GetTrackEventName() = 0 ;
	virtual Firedac::Dats::TFDDatSTable* __fastcall GetMergeTable() = 0 ;
	virtual Firedac::Dats::TFDDatSManager* __fastcall GetMergeManager() = 0 ;
	virtual bool __fastcall GetContentModified() = 0 ;
	virtual void __fastcall SetContentModified(bool AValue) = 0 ;
	virtual void __fastcall RefreshContent() = 0 ;
	virtual void __fastcall ResyncContent() = 0 ;
	__property _di_IFDPhysCommand TrackCommand = {read=GetTrackCommand};
	__property System::UnicodeString TrackEventName = {read=GetTrackEventName};
	__property Firedac::Dats::TFDDatSTable* MergeTable = {read=GetMergeTable};
	__property Firedac::Dats::TFDDatSManager* MergeManager = {read=GetMergeManager};
	__property bool ContentModified = {read=GetContentModified, write=SetContentModified};
};

enum DECLSPEC_DENUM TFDPhysEventAlerterState : unsigned int { esInactive, esRegistering, esRegistered, esUnregistering, esFiring };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2117}") IFDPhysEventAlerter  : public System::IInterface 
{
	virtual _di_IFDPhysConnection __fastcall GetConnection() = 0 ;
	virtual TFDPhysEventAlerterState __fastcall GetState() = 0 ;
	virtual System::UnicodeString __fastcall GetKind() = 0 ;
	virtual Firedac::Stan::Option::TFDEventAlerterOptions* __fastcall GetOptions() = 0 ;
	virtual System::Classes::TStrings* __fastcall GetNames() = 0 ;
	virtual System::UnicodeString __fastcall GetSubscriptionName() = 0 ;
	virtual _di_IFDPhysEventHandler __fastcall GetHandler() = 0 ;
	virtual void __fastcall SetOptions(Firedac::Stan::Option::TFDEventAlerterOptions* const AValue) = 0 ;
	virtual void __fastcall SetNames(System::Classes::TStrings* const AValue) = 0 ;
	virtual void __fastcall SetSubscriptionName(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetHandler(const _di_IFDPhysEventHandler AValue) = 0 ;
	virtual void __fastcall Register() = 0 ;
	virtual void __fastcall Unregister() = 0 ;
	virtual void __fastcall Signal(const System::UnicodeString AEvent, const System::Variant &AArgument) = 0 ;
	virtual void __fastcall Refresh(const _di_IFDPhysChangeHandler AHandler, bool AForce) = 0 ;
	virtual void __fastcall AddChangeHandler(const _di_IFDPhysChangeHandler AHandler) = 0 ;
	virtual void __fastcall RemoveChangeHandler(const _di_IFDPhysChangeHandler AHandler) = 0 ;
	virtual void __fastcall AbortJob() = 0 ;
	__property _di_IFDPhysConnection Connection = {read=GetConnection};
	__property TFDPhysEventAlerterState State = {read=GetState};
	__property System::UnicodeString Kind = {read=GetKind};
	__property Firedac::Stan::Option::TFDEventAlerterOptions* Options = {read=GetOptions, write=SetOptions};
	__property System::Classes::TStrings* Names = {read=GetNames, write=SetNames};
	__property System::UnicodeString SubscriptionName = {read=GetSubscriptionName, write=SetSubscriptionName};
	__property _di_IFDPhysEventHandler Handler = {read=GetHandler, write=SetHandler};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2120}") IFDPhysDataSetParamReader  : public System::IInterface 
{
	virtual bool __fastcall Reset() = 0 ;
	virtual bool __fastcall Next() = 0 ;
	virtual bool __fastcall GetData(const int AColumn, void * &ABuff, unsigned ABuffLen, unsigned &ADataLen, bool AByVal) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE _di_IFDPhysManager __fastcall FDPhysManager(void);
extern DELPHI_PACKAGE TFDPhysFillRowOptions __fastcall FDGetFillRowOptions(Firedac::Stan::Option::TFDFetchOptions* AFetchOptions);
extern DELPHI_PACKAGE void __fastcall FDClearMetaView(Firedac::Dats::TFDDatSView* &AView, Firedac::Stan::Option::TFDFetchOptions* AOptions);
extern DELPHI_PACKAGE void __fastcall FDRegisterDriverClass(System::TClass ADriverClass);
extern DELPHI_PACKAGE void __fastcall FDUnregisterDriverClass(System::TClass ADriverClass);
}	/* namespace Intf */
}	/* namespace Phys */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_PHYS_INTF)
using namespace Firedac::Phys::Intf;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_PHYS)
using namespace Firedac::Phys;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC)
using namespace Firedac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Firedac_Phys_IntfHPP
