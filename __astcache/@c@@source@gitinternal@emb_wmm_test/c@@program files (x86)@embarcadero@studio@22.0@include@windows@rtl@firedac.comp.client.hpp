// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Comp.Client.pas' rev: 35.00 (Windows)

#ifndef Firedac_Comp_ClientHPP
#define Firedac_Comp_ClientHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <Data.DB.hpp>
#include <System.Generics.Collections.hpp>
#include <System.SyncObjs.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.Stan.Util.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.DApt.Column.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.Comp.DataSet.hpp>
#include <FireDAC.Comp.UI.hpp>
#include <FireDAC.Stan.Option.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Comp
{
namespace Client
{
//-- forward type declarations -----------------------------------------------
struct TFDTableBookmarkData;
class DELPHICLASS TFDCustomManager;
class DELPHICLASS TFDManager;
class DELPHICLASS TFDCustomConnection;
class DELPHICLASS TFDConnection;
class DELPHICLASS TFDCustomTransaction;
class DELPHICLASS TFDTransaction;
class DELPHICLASS TFDCustomEventAlerter;
class DELPHICLASS TFDEventAlerter;
class DELPHICLASS TFDCustomCommand;
class DELPHICLASS TFDCommand;
class DELPHICLASS TFDMetaInfoCommand;
class DELPHICLASS TFDCustomTableAdapter;
class DELPHICLASS TFDTableAdapter;
class DELPHICLASS TFDCustomSchemaAdapter;
class DELPHICLASS TFDSchemaAdapter;
class DELPHICLASS TFDCustomUpdateObject;
class DELPHICLASS TFDLocalSQLDataSet;
class DELPHICLASS TFDLocalSQLDataSets;
class DELPHICLASS TFDCustomLocalSQL;
class DELPHICLASS TFDAdaptedDataSet;
class DELPHICLASS TFDCustomMemTable;
class DELPHICLASS TFDMemTable;
class DELPHICLASS TFDRdbmsDataSet;
class DELPHICLASS TFDUpdateSQL;
class DELPHICLASS TFDCustomQuery;
class DELPHICLASS TFDQuery;
class DELPHICLASS TFDTable;
class DELPHICLASS TFDCustomStoredProc;
class DELPHICLASS TFDStoredProc;
class DELPHICLASS TFDMetaInfoQuery;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TFDCustomManagerClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDCustomManagerClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TFDCustomConnectionClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDCustomConnectionClass);
#endif /* _WIN64 */

typedef void __fastcall (__closure *TFDConnectionLoginEvent)(TFDCustomConnection* AConnection, Firedac::Stan::Intf::TFDConnectionDefParams* AParams);

typedef void __fastcall (__closure *TFDReconcileRowEvent)(System::TObject* ASender, Firedac::Dats::TFDDatSRow* ARow, Firedac::Dapt::Intf::TFDDAptReconcileAction &Action);

typedef void __fastcall (__closure *TFDUpdateRowEvent)(System::TObject* ASender, Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions, Firedac::Stan::Intf::TFDErrorAction &AAction);

typedef void __fastcall (__closure *TFDExecuteErrorEvent)(System::TObject* ASender, int ATimes, int AOffset, Firedac::Stan::Error::EFDDBEngineException* AError, Firedac::Stan::Intf::TFDErrorAction &AAction);

typedef void __fastcall (__closure *TFDConnectionRecoverEvent)(System::TObject* ASender, System::TObject* AInitiator, System::Sysutils::Exception* AException, Firedac::Phys::Intf::TFDPhysConnectionRecoverAction &AAction);

typedef void __fastcall (__closure *TFDEventAlerterEvent)(TFDCustomEventAlerter* ASender, const System::UnicodeString AEventName, const System::Variant &AArgument);

typedef void __fastcall (__closure *TFDOperationFinishedEvent)(System::TObject* ASander, Firedac::Stan::Intf::TFDStanAsyncState AState, System::Sysutils::Exception* AException);

typedef void __fastcall (__closure *TFDGetDatasetEvent)(System::TObject* ASender, const System::UnicodeString ASchemaName, const System::UnicodeString AName, Data::Db::TDataSet* &ADataSet, bool &AOwned);

typedef void __fastcall (__closure *TFDOpenDatasetEvent)(System::TObject* ASender, const System::UnicodeString ASchemaName, const System::UnicodeString AName, Data::Db::TDataSet* const ADataSet);

enum DECLSPEC_DENUM Firedac_Comp_Client__1 : unsigned int { ckMacros, ckLockParse, ckPrepare, ckCreateIntfDontPrepare };

typedef System::Set<Firedac_Comp_Client__1, Firedac_Comp_Client__1::ckMacros, Firedac_Comp_Client__1::ckCreateIntfDontPrepare> TFDCommandFlags;

enum DECLSPEC_DENUM TFDBindedBy : unsigned int { bbNone, bbName, bbObject };

enum DECLSPEC_DENUM TFDReleaseClientMode : unsigned int { rmFetchAll, rmClose, rmOffline, rmDisconnect };

enum DECLSPEC_DENUM Firedac_Comp_Client__2 : unsigned int { riConnDef, riFireDAC, riClientLog, riClient, riSessionHints, riSession, riTryConnect, riKeepConnected };

typedef System::Set<Firedac_Comp_Client__2, Firedac_Comp_Client__2::riConnDef, Firedac_Comp_Client__2::riKeepConnected> TFDInfoReportItems;

enum DECLSPEC_DENUM Firedac_Comp_Client__3 : unsigned int { rsClientError, rsSessionError, rsClientWarning, rsSessionWarning };

typedef System::Set<Firedac_Comp_Client__3, Firedac_Comp_Client__3::rsClientError, Firedac_Comp_Client__3::rsSessionWarning> TFDInfoReportStatus;

typedef TFDTableBookmarkData *PFDTableBookmarkData;

struct DECLSPEC_DRECORD TFDTableBookmarkData
{
	
private:
	typedef System::DynamicArray<System::Byte> _TFDTableBookmarkData__1;
	
	
public:
	Firedac::Comp::Dataset::TFDBookmarkData FDatasetData;
	_TFDTableBookmarkData__1 FValuesBuffer;
};


class PASCALIMPLEMENTATION TFDCustomManager : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
private:
	static System::Syncobjs::TCriticalSection* FSingletonLock;
	static TFDCustomManagerClass FSingletonClass;
	static TFDCustomManager* FSingleton;
	static Firedac::Stan::Option::_di_IFDStanOptions FSingletonOptsIntf;
	static TFDCustomConnectionClass FConnectionClass;
	
private:
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	
private:
	static TFDCustomManager* __fastcall GetSingleton();
	static Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetSingletonOptsIntf();
	bool FAutoCreated;
	bool FStreamedActive;
	System::Classes::TList* FConnections;
	System::Classes::TNotifyEvent FBeforeStartup;
	System::Classes::TNotifyEvent FAfterStartup;
	System::Classes::TNotifyEvent FBeforeShutdown;
	System::Classes::TNotifyEvent FAfterShutdown;
	System::Sysutils::TMultiReadExclusiveWriteSynchronizer* FLock;
	Firedac::Stan::Option::_di_IFDStanOptions FOptionsIntf;
	TFDCustomConnection* FCachedConnection;
	Firedac::Comp::Dataset::TFDStoredActivationUsage FActiveStoredUsage;
	bool __fastcall GetActive();
	System::UnicodeString __fastcall GetConnectionDefFileName();
	TFDCustomConnection* __fastcall GetConnection(int AIndex);
	int __fastcall GetConnectionCount();
	bool __fastcall GetSilentMode();
	Firedac::Ui::Intf::TFDGUIxScreenCursor __fastcall GetWaitCursor();
	void __fastcall SetActive(const bool AValue);
	void __fastcall SetConnectionDefFileName(const System::UnicodeString AValue);
	void __fastcall SetSilentMode(const bool AValue);
	void __fastcall SetWaitCursor(const Firedac::Ui::Intf::TFDGUIxScreenCursor AValue);
	void __fastcall AddConnection(TFDCustomConnection* AConn);
	void __fastcall RemoveConnection(TFDCustomConnection* AConn);
	void __fastcall SetOptionsIntf(const Firedac::Stan::Option::_di_IFDStanOptions AValue);
	Firedac::Stan::Option::TFDFetchOptions* __fastcall GetFetchOptions();
	Firedac::Stan::Option::TFDFormatOptions* __fastcall GetFormatOptions();
	Firedac::Stan::Option::TFDTopResourceOptions* __fastcall GetResourceOptions();
	Firedac::Stan::Option::TFDUpdateOptions* __fastcall GetUpdateOptions();
	void __fastcall SetFetchOptions(Firedac::Stan::Option::TFDFetchOptions* const AValue);
	void __fastcall SetFormatOptions(Firedac::Stan::Option::TFDFormatOptions* const AValue);
	void __fastcall SetUpdateOptions(Firedac::Stan::Option::TFDUpdateOptions* const AValue);
	void __fastcall SetResourceOptions(Firedac::Stan::Option::TFDTopResourceOptions* const AValue);
	Firedac::Stan::Intf::_di_IFDStanConnectionDefs __fastcall GetConnectionDefs();
	Firedac::Phys::Intf::TFDPhysManagerState __fastcall GetState();
	System::Classes::TNotifyEvent __fastcall GetAfterLoadConnectionDefFile();
	System::Classes::TNotifyEvent __fastcall GetBeforeLoadConnectionDefFile();
	bool __fastcall GetConnectionDefAutoLoad();
	bool __fastcall GetConnectionDefsLoaded();
	void __fastcall SetAfterLoadConnectionDefFile(const System::Classes::TNotifyEvent AValue);
	void __fastcall SetBeforeLoadConnectionDefFile(const System::Classes::TNotifyEvent AValue);
	void __fastcall SetConnectionDefAutoLoad(const bool AValue);
	bool __fastcall GetDriverDefAutoLoad();
	System::UnicodeString __fastcall GetDriverDefFileName();
	void __fastcall SetDriverDefAutoLoad(const bool AValue);
	void __fastcall SetDriverDefFileName(const System::UnicodeString AValue);
	Firedac::Stan::Intf::_di_IFDStanDefinitions __fastcall GetDriverDefs();
	System::UnicodeString __fastcall GetActualConnectionDefFileName();
	System::UnicodeString __fastcall GetActualDriverDefFileName();
	
protected:
	virtual void __fastcall InternalClose();
	virtual void __fastcall InternalOpen();
	virtual TFDCustomConnection* __fastcall InternalAcquireConnection(TFDCustomConnection* AConnection, const System::UnicodeString AConnectionName, const System::UnicodeString AObjName);
	virtual TFDCustomConnection* __fastcall InternalAcquireTemporaryConnection(const System::UnicodeString AConnectionName);
	virtual void __fastcall InternalReleaseConnection(TFDCustomConnection* &AConnection);
	virtual TFDCustomConnection* __fastcall InternalFindConnection(const System::UnicodeString AConnectionName);
	virtual void __fastcall DoBeforeStartup();
	virtual void __fastcall DoAfterStartup();
	virtual void __fastcall DoBeforeShutdown();
	virtual void __fastcall DoAfterShutdown();
	virtual void __fastcall Loaded();
	void __fastcall CheckActive();
	void __fastcall CheckInactive();
	System::Classes::TComponentName __fastcall GetName();
	Firedac::Stan::Intf::_di_IFDStanObject __fastcall GetParent();
	void __fastcall BeforeReuse();
	void __fastcall AfterReuse();
	void __fastcall SetOwner(System::TObject* const AOwner, const System::Classes::TComponentName ARole);
	__property Firedac::Stan::Option::_di_IFDStanOptions OptionsIntfImpl = {read=FOptionsIntf};
	
public:
	__fastcall virtual TFDCustomManager(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDCustomManager();
	void __fastcall Open();
	void __fastcall Close();
	TFDCustomConnection* __fastcall AcquireConnection(const System::UnicodeString AConnectionName, const System::UnicodeString AObjName)/* overload */;
	TFDCustomConnection* __fastcall AcquireConnection(TFDCustomConnection* AConnection, const System::UnicodeString AObjName)/* overload */;
	void __fastcall ReleaseConnection(TFDCustomConnection* &AConnection);
	void __fastcall DropConnections();
	TFDCustomConnection* __fastcall FindConnection(const System::UnicodeString AConnectionName);
	void __fastcall GetConnectionNames(System::Classes::TStrings* AList)/* overload */;
	void __fastcall GetConnectionNames(System::Classes::TStrings* AList, System::UnicodeString ADriverName)/* overload */;
	void __fastcall GetConnectionDefNames(System::Classes::TStrings* AList);
	void __fastcall GetDriverNames(System::Classes::TStrings* AList, bool AValidate = false, bool ABaseOnly = false);
	void __fastcall GetCatalogNames(const System::UnicodeString AConnectionName, const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetSchemaNames(const System::UnicodeString AConnectionName, const System::UnicodeString ACatalogName, const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetTableNames(const System::UnicodeString AConnectionName, const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString APattern, System::Classes::TStrings* AList, Firedac::Phys::Intf::TFDPhysObjectScopes AScopes = (Firedac::Phys::Intf::TFDPhysObjectScopes() << Firedac::Phys::Intf::TFDPhysObjectScope::osMy ), bool AFullName = true);
	void __fastcall GetFieldNames(const System::UnicodeString AConnectionName, const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString ATableName, const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetKeyFieldNames(const System::UnicodeString AConnectionName, const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString ATableName, const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetIndexNames(const System::UnicodeString AConnectionName, const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString ATableName, const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetPackageNames(const System::UnicodeString AConnectionName, const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString APattern, System::Classes::TStrings* AList, Firedac::Phys::Intf::TFDPhysObjectScopes AScopes = (Firedac::Phys::Intf::TFDPhysObjectScopes() << Firedac::Phys::Intf::TFDPhysObjectScope::osMy ), bool AFullName = true);
	void __fastcall GetStoredProcNames(const System::UnicodeString AConnectionName, const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString APackage, const System::UnicodeString APattern, System::Classes::TStrings* AList, Firedac::Phys::Intf::TFDPhysObjectScopes AScopes = (Firedac::Phys::Intf::TFDPhysObjectScopes() << Firedac::Phys::Intf::TFDPhysObjectScope::osMy ), bool AFullName = true);
	void __fastcall GetGeneratorNames(const System::UnicodeString AConnectionName, const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString APattern, System::Classes::TStrings* AList, Firedac::Phys::Intf::TFDPhysObjectScopes AScopes = (Firedac::Phys::Intf::TFDPhysObjectScopes() << Firedac::Phys::Intf::TFDPhysObjectScope::osMy ), bool AFullName = true);
	bool __fastcall IsConnectionDef(const System::UnicodeString AName);
	void __fastcall AddConnectionDef(const System::UnicodeString AName, const System::UnicodeString ADriver, System::Classes::TStrings* AList = (System::Classes::TStrings*)(0x0), bool APersistent = false);
	void __fastcall DeleteConnectionDef(const System::UnicodeString AName);
	void __fastcall ModifyConnectionDef(const System::UnicodeString AName, System::Classes::TStrings* AList);
	void __fastcall RenameConnectionDef(const System::UnicodeString AOldName, const System::UnicodeString ANewName);
	void __fastcall GetConnectionDefParams(const System::UnicodeString AName, System::Classes::TStrings* AList);
	void __fastcall CloseConnectionDef(const System::UnicodeString AName);
	void __fastcall SaveConnectionDefFile();
	void __fastcall LoadConnectionDefFile();
	void __fastcall RefreshMetadataCache();
	void __fastcall RefreshConnectionDefFile();
	System::UnicodeString __fastcall GetBaseDriverID(const System::UnicodeString ADriverID);
	System::UnicodeString __fastcall GetBaseDriverDesc(const System::UnicodeString ADriverID);
	Firedac::Stan::Intf::TFDRDBMSKind __fastcall GetRDBMSKind(const System::UnicodeString ADriverID);
	__property Firedac::Phys::Intf::TFDPhysManagerState State = {read=GetState, nodefault};
	__property bool AutoCreated = {read=FAutoCreated, nodefault};
	__property int ConnectionCount = {read=GetConnectionCount, nodefault};
	__property TFDCustomConnection* Connections[int Index] = {read=GetConnection};
	__property Firedac::Stan::Intf::_di_IFDStanConnectionDefs ConnectionDefs = {read=GetConnectionDefs};
	__property Firedac::Stan::Intf::_di_IFDStanDefinitions DriverDefs = {read=GetDriverDefs};
	__property bool ConnectionDefFileLoaded = {read=GetConnectionDefsLoaded, nodefault};
	__property System::UnicodeString ActualDriverDefFileName = {read=GetActualDriverDefFileName};
	__property System::UnicodeString ActualConnectionDefFileName = {read=GetActualConnectionDefFileName};
	__property bool DriverDefFileAutoLoad = {read=GetDriverDefAutoLoad, write=SetDriverDefAutoLoad, default=1};
	__property System::UnicodeString DriverDefFileName = {read=GetDriverDefFileName, write=SetDriverDefFileName};
	__property bool ConnectionDefFileAutoLoad = {read=GetConnectionDefAutoLoad, write=SetConnectionDefAutoLoad, default=1};
	__property System::UnicodeString ConnectionDefFileName = {read=GetConnectionDefFileName, write=SetConnectionDefFileName};
	__property Firedac::Ui::Intf::TFDGUIxScreenCursor WaitCursor = {read=GetWaitCursor, write=SetWaitCursor, default=3};
	__property bool SilentMode = {read=GetSilentMode, write=SetSilentMode, default=0};
	__property Firedac::Stan::Option::_di_IFDStanOptions OptionsIntf = {read=FOptionsIntf, write=SetOptionsIntf};
	__property Firedac::Stan::Option::TFDFetchOptions* FetchOptions = {read=GetFetchOptions, write=SetFetchOptions};
	__property Firedac::Stan::Option::TFDFormatOptions* FormatOptions = {read=GetFormatOptions, write=SetFormatOptions};
	__property Firedac::Stan::Option::TFDUpdateOptions* UpdateOptions = {read=GetUpdateOptions, write=SetUpdateOptions};
	__property Firedac::Stan::Option::TFDTopResourceOptions* ResourceOptions = {read=GetResourceOptions, write=SetResourceOptions};
	__property bool Active = {read=GetActive, write=SetActive, default=0};
	__property Firedac::Comp::Dataset::TFDStoredActivationUsage ActiveStoredUsage = {read=FActiveStoredUsage, write=FActiveStoredUsage, default=3};
	__property System::Classes::TNotifyEvent BeforeStartup = {read=FBeforeStartup, write=FBeforeStartup};
	__property System::Classes::TNotifyEvent AfterStartup = {read=FAfterStartup, write=FAfterStartup};
	__property System::Classes::TNotifyEvent BeforeShutdown = {read=FBeforeShutdown, write=FBeforeShutdown};
	__property System::Classes::TNotifyEvent AfterShutdown = {read=FAfterShutdown, write=FAfterShutdown};
	__property System::Classes::TNotifyEvent BeforeLoadConnectionDefFile = {read=GetBeforeLoadConnectionDefFile, write=SetBeforeLoadConnectionDefFile};
	__property System::Classes::TNotifyEvent AfterLoadConnectionDefFile = {read=GetAfterLoadConnectionDefFile, write=SetAfterLoadConnectionDefFile};
private:
	void *__IFDStanObject;	// Firedac::Stan::Intf::IFDStanObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2001}
	operator Firedac::Stan::Intf::_di_IFDStanObject()
	{
		Firedac::Stan::Intf::_di_IFDStanObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanObject*(void) { return (Firedac::Stan::Intf::IFDStanObject*)&__IFDStanObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2018}
	operator Firedac::Stan::Option::_di_IFDStanOptions() { return OptionsIntfImpl; }
	#else
	operator Firedac::Stan::Option::IFDStanOptions*(void) { return (Firedac::Stan::Option::IFDStanOptions*)OptionsIntfImpl; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDManager : public TFDCustomManager
{
	typedef TFDCustomManager inherited;
	
__published:
	__property DriverDefFileAutoLoad = {default=1};
	__property DriverDefFileName = {default=0};
	__property ConnectionDefFileAutoLoad = {default=1};
	__property ConnectionDefFileName = {default=0};
	__property WaitCursor = {default=3};
	__property SilentMode = {default=0};
	__property FetchOptions;
	__property FormatOptions;
	__property ResourceOptions;
	__property UpdateOptions;
	__property ActiveStoredUsage = {default=3};
	__property Active = {default=0};
	__property BeforeStartup;
	__property AfterStartup;
	__property BeforeShutdown;
	__property AfterShutdown;
	__property BeforeLoadConnectionDefFile;
	__property AfterLoadConnectionDefFile;
public:
	/* TFDCustomManager.Create */ inline __fastcall virtual TFDManager(System::Classes::TComponent* AOwner) : TFDCustomManager(AOwner) { }
	/* TFDCustomManager.Destroy */ inline __fastcall virtual ~TFDManager() { }
	
};


class PASCALIMPLEMENTATION TFDCustomConnection : public Data::Db::TCustomConnection
{
	typedef Data::Db::TCustomConnection inherited;
	
private:
	Firedac::Phys::Intf::_di_IFDPhysConnection FConnectionIntf;
	Firedac::Phys::Intf::_di_IFDPhysConnection FTmpConnectionIntf;
	System::UnicodeString FConnectionName;
	Firedac::Stan::Intf::_di_IFDStanConnectionDef FParams;
	int FRefCount;
	bool FTemporary;
	TFDConnectionLoginEvent FOnLogin;
	Firedac::Stan::Option::_di_IFDStanOptions FOptionsIntf;
	Firedac::Stan::Option::TFDTxOptions* FTxOptions;
	System::Classes::TList* FCommands;
	Firedac::Stan::Error::TFDErrorEvent FOnError;
	Firedac::Comp::Ui::TFDGUIxLoginDialog* FLoginDialog;
	void *FSharedCliHandle;
	bool FOfflined;
	System::Classes::TNotifyEvent FOnLost;
	System::Classes::TNotifyEvent FOnRestored;
	TFDConnectionRecoverEvent FOnRecover;
	TFDCustomTransaction* FUpdateTransaction;
	TFDCustomTransaction* FTransaction;
	System::TDateTime FLastUsed;
	Firedac::Comp::Dataset::TFDStoredActivationUsage FConnectedStoredUsage;
	Firedac::Phys::Intf::_di_IFDPhysCommand FExecSQLCommand;
	Firedac::Dats::TFDDatSTable* FExecSQLTab;
	bool FDisconnecting;
	System::Classes::TList* FDeferredUnregs;
	System::Classes::TNotifyEvent FBeforeStartTransaction;
	System::Classes::TNotifyEvent FAfterStartTransaction;
	System::Classes::TNotifyEvent FBeforeCommit;
	System::Classes::TNotifyEvent FAfterCommit;
	System::Classes::TNotifyEvent FBeforeRollback;
	System::Classes::TNotifyEvent FAfterRollback;
	Firedac::Stan::Intf::TFDConnectionDefParams* __fastcall GetParams();
	void __fastcall SetConnectionName(const System::UnicodeString AValue);
	void __fastcall SetParams(Firedac::Stan::Intf::TFDConnectionDefParams* const AValue);
	void __fastcall ParamsChanging(System::TObject* ASender);
	System::UnicodeString __fastcall GetConnectionDefName();
	void __fastcall SetConnectionDefName(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetDriverName();
	void __fastcall SetDriverName(const System::UnicodeString AValue);
	bool __fastcall GetInTransaction();
	bool __fastcall GetSQLBased();
	int __fastcall GetCommandCount();
	TFDCustomCommand* __fastcall GetCommands(int AIndex);
	void __fastcall GetParentOptions(Firedac::Stan::Option::_di_IFDStanOptions &AOpts);
	void __fastcall SetOptionsIntf(const Firedac::Stan::Option::_di_IFDStanOptions AValue);
	Firedac::Stan::Option::TFDFetchOptions* __fastcall GetFetchOptions();
	Firedac::Stan::Option::TFDFormatOptions* __fastcall GetFormatOptions();
	Firedac::Stan::Option::TFDUpdateOptions* __fastcall GetUpdateOptions();
	Firedac::Stan::Option::TFDTopResourceOptions* __fastcall GetResourceOptions();
	void __fastcall SetFetchOptions(Firedac::Stan::Option::TFDFetchOptions* const AValue);
	void __fastcall SetFormatOptions(Firedac::Stan::Option::TFDFormatOptions* const AValue);
	void __fastcall SetUpdateOptions(Firedac::Stan::Option::TFDUpdateOptions* const AValue);
	void __fastcall SetResourceOptions(Firedac::Stan::Option::TFDTopResourceOptions* const AValue);
	void __fastcall SetTxOptions(Firedac::Stan::Option::TFDTxOptions* const AValue);
	Firedac::Stan::Intf::TFDRDBMSKind __fastcall GetRDBMSKind();
	System::UnicodeString __fastcall CnvMetaValue(const System::Variant &AStr, const System::UnicodeString ADefault = System::UnicodeString());
	void __fastcall DoInternalLogin();
	Firedac::Phys::Intf::_di_IFDPhysConnectionMetadata __fastcall GetConnectionMetadata(bool AOpen = false);
	void __fastcall SetLoginDialog(Firedac::Comp::Ui::TFDGUIxLoginDialog* const AValue);
	void * __fastcall GetCliObj();
	void * __fastcall GetCliHandle();
	void __fastcall SetOfflined(bool AValue);
	void __fastcall AcquireDefaultTransaction(const Firedac::Phys::Intf::_di_IFDPhysConnection AConnIntf);
	void __fastcall AcquireConnectionIntf(/* out */ Firedac::Phys::Intf::_di_IFDPhysConnection &AConnIntf);
	void __fastcall ReleaseDefaultTransaction(const Firedac::Phys::Intf::_di_IFDPhysConnection AConnIntf);
	void __fastcall ReleaseConnectionIntf(Firedac::Phys::Intf::_di_IFDPhysConnection &AConnIntf);
	Firedac::Stan::Error::EFDDBEngineException* __fastcall GetMessages();
	Firedac::Phys::Intf::_di_IFDPhysCommand __fastcall BaseCreateSQL();
	bool __fastcall BasePrepareSQL(const Firedac::Phys::Intf::_di_IFDPhysCommand ACommand, const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High, Firedac::Stan::Param::TFDParamBindMode ABindMode);
	Firedac::Phys::Intf::_di_IFDPhysConnectionMetadata __fastcall GetConnectionMetadataIntf();
	System::UnicodeString __fastcall GetConnectionString();
	void __fastcall SetConnectionString(const System::UnicodeString AConnectionString);
	void __fastcall SetUserNamePassword(const System::UnicodeString AUserName, const System::UnicodeString APassword);
	System::UnicodeString __fastcall GetActualDriverID();
	void __fastcall PrepareConnectionDef(bool ACheckDef);
	void __fastcall SetSharedCliHandle(const void * AValue);
	System::UnicodeString __fastcall EncodeListName(const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString ABaseField, const System::UnicodeString AObjField, Firedac::Dats::TFDDatSRow* ARow, System::Classes::TStrings* AList, bool AFullName);
	System::UnicodeString __fastcall GetCurrentCatalog();
	System::UnicodeString __fastcall GetCurrentSchema();
	Firedac::Phys::Intf::TFDPhysConnectionState __fastcall GetState();
	
protected:
	System::Classes::TComponentName __fastcall GetName();
	Firedac::Stan::Intf::_di_IFDStanObject __fastcall GetParent();
	void __fastcall BeforeReuse();
	void __fastcall AfterReuse();
	void __fastcall SetOwner(System::TObject* const AOwner, const System::Classes::TComponentName ARole);
	virtual void __fastcall HandleException(const Firedac::Stan::Intf::_di_IFDStanObject AInitiator, System::Sysutils::Exception* &AException);
	void __fastcall HandleConnectionRecover(const Firedac::Stan::Intf::_di_IFDStanObject AInitiator, System::Sysutils::Exception* AException, Firedac::Phys::Intf::TFDPhysConnectionRecoverAction &AAction);
	void __fastcall HandleConnectionRestored();
	void __fastcall HandleConnectionLost();
	void __fastcall HandleDisconnectCommands(Firedac::Phys::Intf::TFDPhysDisconnectFilter AFilter, Firedac::Phys::Intf::TFDPhysDisconnectMode AMode);
	void __fastcall HandleTxOperation(Firedac::Phys::Intf::TFDPhysTransactionState AOperation, bool ABefore);
	void __fastcall AttachClient(System::TObject* AClient);
	void __fastcall DetachClient(System::TObject* AClient);
	virtual void __fastcall UnRegisterClient(System::TObject* AClient);
	virtual void __fastcall DoConnect();
	virtual void __fastcall DoDisconnect();
	virtual void __fastcall DoValidateName(const System::UnicodeString AName);
	virtual bool __fastcall GetConnected();
	virtual void __fastcall SetConnected(bool AValue);
	virtual void __fastcall DoLogin(const Firedac::Stan::Intf::_di_IFDStanConnectionDef AConnectionDef);
	virtual void __fastcall DoRecover(const Firedac::Stan::Intf::_di_IFDStanObject AInitiator, System::Sysutils::Exception* AException, Firedac::Phys::Intf::TFDPhysConnectionRecoverAction &AAction);
	virtual void __fastcall DoRestored();
	virtual void __fastcall DoLost();
	Firedac::Comp::Dataset::TFDDataSet* __fastcall GetADDataSet(int AIndex);
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall SetTransaction(TFDCustomTransaction* const AValue);
	virtual void __fastcall SetUpdateTransaction(TFDCustomTransaction* const AValue);
	__property Firedac::Stan::Option::_di_IFDStanOptions OptionsIntfImpl = {read=FOptionsIntf};
	
public:
	__fastcall virtual TFDCustomConnection(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDCustomConnection();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	TFDCustomConnection* __fastcall CloneConnection();
	void __fastcall Commit();
	void __fastcall CommitRetaining();
	void __fastcall Rollback();
	void __fastcall RollbackRetaining();
	void __fastcall StartTransaction();
	HIDESBASE void __fastcall Open(const System::UnicodeString AConnectionString)/* overload */;
	HIDESBASE void __fastcall Open(const System::UnicodeString AConnectionString, const System::UnicodeString AUserName, const System::UnicodeString APassword)/* overload */;
	HIDESBASE void __fastcall Open(const System::UnicodeString AUserName, const System::UnicodeString APassword)/* overload */;
	void __fastcall Offline();
	void __fastcall Online();
	void __fastcall CheckOnline();
	void __fastcall CheckActive();
	void __fastcall CheckInactive();
	bool __fastcall Ping();
	void __fastcall AbortJob(bool AWait = false);
	void __fastcall Trace(Firedac::Stan::Intf::TFDMoniEventStep AStep, System::TObject* ASender, const System::UnicodeString AMsg, const System::TVarRec *AArgs, const int AArgs_High);
	TFDInfoReportStatus __fastcall GetInfoReport(System::Classes::TStrings* AList, TFDInfoReportItems AItems = (TFDInfoReportItems() << Firedac_Comp_Client__2::riConnDef << Firedac_Comp_Client__2::riFireDAC << Firedac_Comp_Client__2::riClientLog << Firedac_Comp_Client__2::riClient << Firedac_Comp_Client__2::riSessionHints << Firedac_Comp_Client__2::riSession << Firedac_Comp_Client__2::riTryConnect << Firedac_Comp_Client__2::riKeepConnected ));
	void __fastcall GetCatalogNames(const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetSchemaNames(const System::UnicodeString ACatalogName, const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetTableNames(const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString APattern, System::Classes::TStrings* AList, Firedac::Phys::Intf::TFDPhysObjectScopes AScopes = (Firedac::Phys::Intf::TFDPhysObjectScopes() << Firedac::Phys::Intf::TFDPhysObjectScope::osMy ), Firedac::Phys::Intf::TFDPhysTableKinds AKinds = (Firedac::Phys::Intf::TFDPhysTableKinds() << Firedac::Phys::Intf::TFDPhysTableKind::tkSynonym << Firedac::Phys::Intf::TFDPhysTableKind::tkTable << Firedac::Phys::Intf::TFDPhysTableKind::tkView ), bool AFullName = true);
	void __fastcall GetFieldNames(const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString ATableName, const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetKeyFieldNames(const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString ATableName, const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetIndexNames(const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString ATableName, const System::UnicodeString APattern, System::Classes::TStrings* AList);
	void __fastcall GetPackageNames(const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString APattern, System::Classes::TStrings* AList, Firedac::Phys::Intf::TFDPhysObjectScopes AScopes = (Firedac::Phys::Intf::TFDPhysObjectScopes() << Firedac::Phys::Intf::TFDPhysObjectScope::osMy ), bool AFullName = true);
	void __fastcall GetStoredProcNames(const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString APackage, const System::UnicodeString APattern, System::Classes::TStrings* AList, Firedac::Phys::Intf::TFDPhysObjectScopes AScopes = (Firedac::Phys::Intf::TFDPhysObjectScopes() << Firedac::Phys::Intf::TFDPhysObjectScope::osMy ), bool AFullName = true);
	void __fastcall GetGeneratorNames(const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString APattern, System::Classes::TStrings* AList, Firedac::Phys::Intf::TFDPhysObjectScopes AScopes = (Firedac::Phys::Intf::TFDPhysObjectScopes() << Firedac::Phys::Intf::TFDPhysObjectScope::osMy ), bool AFullName = true);
	void __fastcall RefreshMetadataCache(const System::UnicodeString AObjName = System::UnicodeString());
	System::UnicodeString __fastcall EncodeObjectName(const System::UnicodeString ACatalogName, const System::UnicodeString ASchemaName, const System::UnicodeString ABaseObjectName, const System::UnicodeString AObjectName);
	void __fastcall DecodeObjectName(const System::UnicodeString AFullName, System::UnicodeString &ACatalogName, System::UnicodeString &ASchemaName, System::UnicodeString &ABaseObjectName, System::UnicodeString &AObjectName);
	virtual void __fastcall CheckConnectionDef();
	void __fastcall ApplyUpdates _DEPRECATED_ATTRIBUTE1("Use Centralized Cached Updates and TFDSchemaAdapter instead") (Firedac::Comp::Dataset::TFDDataSet* const *ADataSets, const int ADataSets_High);
	void __fastcall ReleaseClients(TFDReleaseClientMode AMode = (TFDReleaseClientMode)(0x3));
	System::Variant __fastcall GetLastAutoGenValue(const System::UnicodeString AName);
	int __fastcall ExecSQL(const System::UnicodeString ASQL, bool AIgnoreObjNotExists = false)/* overload */;
	int __fastcall ExecSQL(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High)/* overload */;
	int __fastcall ExecSQL(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High)/* overload */;
	int __fastcall ExecSQL(const System::UnicodeString ASQL, Firedac::Stan::Param::TFDParams* AParams)/* overload */;
	int __fastcall ExecSQL(const System::UnicodeString ASQL, Firedac::Stan::Param::TFDParams* AParams, Data::Db::TDataSet* &AResultSet)/* overload */;
	int __fastcall ExecSQL(const System::UnicodeString ASQL, Data::Db::TDataSet* &AResultSet)/* overload */;
	System::Variant __fastcall ExecSQLScalar(const System::UnicodeString ASQL)/* overload */;
	System::Variant __fastcall ExecSQLScalar(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High)/* overload */;
	System::Variant __fastcall ExecSQLScalar(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High)/* overload */;
	__property bool IsSQLBased = {read=GetSQLBased, nodefault};
	__property Firedac::Stan::Intf::TFDRDBMSKind RDBMSKind = {read=GetRDBMSKind, nodefault};
	__property System::UnicodeString ActualDriverID = {read=GetActualDriverID};
	__property bool InTransaction = {read=GetInTransaction, nodefault};
	__property Firedac::Comp::Dataset::TFDDataSet* DataSets[int AIndex] = {read=GetADDataSet};
	__property int CommandCount = {read=GetCommandCount, nodefault};
	__property TFDCustomCommand* Commands[int AIndex] = {read=GetCommands};
	__property System::TDateTime LastUsed = {read=FLastUsed};
	__property int RefCount = {read=FRefCount, nodefault};
	__property Firedac::Stan::Error::EFDDBEngineException* Messages = {read=GetMessages};
	__property System::UnicodeString CurrentCatalog = {read=GetCurrentCatalog};
	__property System::UnicodeString CurrentSchema = {read=GetCurrentSchema};
	__property Firedac::Phys::Intf::TFDPhysConnectionState State = {read=GetState, nodefault};
	__property Firedac::Phys::Intf::_di_IFDPhysConnection ConnectionIntf = {read=FConnectionIntf};
	__property Firedac::Phys::Intf::_di_IFDPhysConnectionMetadata ConnectionMetaDataIntf = {read=GetConnectionMetadataIntf};
	__property void * CliObj = {read=GetCliObj};
	__property void * CliHandle = {read=GetCliHandle};
	__property void * SharedCliHandle = {read=FSharedCliHandle, write=SetSharedCliHandle};
	__property System::UnicodeString ConnectionName = {read=FConnectionName, write=SetConnectionName};
	__property System::UnicodeString ConnectionDefName = {read=GetConnectionDefName, write=SetConnectionDefName, stored=false};
	__property System::UnicodeString ConnectionString = {read=GetConnectionString, write=SetConnectionString};
	__property System::UnicodeString DriverName = {read=GetDriverName, write=SetDriverName, stored=false};
	__property Firedac::Stan::Intf::TFDConnectionDefParams* Params = {read=GetParams, write=SetParams};
	__property Firedac::Stan::Intf::_di_IFDStanConnectionDef ResultConnectionDef = {read=FParams};
	__property Firedac::Stan::Option::_di_IFDStanOptions OptionsIntf = {read=FOptionsIntf, write=SetOptionsIntf};
	__property Firedac::Stan::Option::TFDFetchOptions* FetchOptions = {read=GetFetchOptions, write=SetFetchOptions};
	__property Firedac::Stan::Option::TFDFormatOptions* FormatOptions = {read=GetFormatOptions, write=SetFormatOptions};
	__property Firedac::Stan::Option::TFDUpdateOptions* UpdateOptions = {read=GetUpdateOptions, write=SetUpdateOptions};
	__property Firedac::Stan::Option::TFDTopResourceOptions* ResourceOptions = {read=GetResourceOptions, write=SetResourceOptions};
	__property Firedac::Stan::Option::TFDTxOptions* TxOptions = {read=FTxOptions, write=SetTxOptions};
	__property bool Temporary = {read=FTemporary, write=FTemporary, default=0};
	__property Connected = {default=0};
	__property Firedac::Comp::Dataset::TFDStoredActivationUsage ConnectedStoredUsage = {read=FConnectedStoredUsage, write=FConnectedStoredUsage, default=3};
	__property bool Offlined = {read=FOfflined, write=SetOfflined, default=0};
	__property LoginPrompt = {default=1};
	__property Firedac::Comp::Ui::TFDGUIxLoginDialog* LoginDialog = {read=FLoginDialog, write=SetLoginDialog};
	__property TFDCustomTransaction* Transaction = {read=FTransaction, write=SetTransaction};
	__property TFDCustomTransaction* UpdateTransaction = {read=FUpdateTransaction, write=SetUpdateTransaction};
	__property TFDConnectionLoginEvent OnLogin = {read=FOnLogin, write=FOnLogin};
	__property Firedac::Stan::Error::TFDErrorEvent OnError = {read=FOnError, write=FOnError};
	__property System::Classes::TNotifyEvent OnLost = {read=FOnLost, write=FOnLost};
	__property System::Classes::TNotifyEvent OnRestored = {read=FOnRestored, write=FOnRestored};
	__property TFDConnectionRecoverEvent OnRecover = {read=FOnRecover, write=FOnRecover};
	__property System::Classes::TNotifyEvent BeforeStartTransaction = {read=FBeforeStartTransaction, write=FBeforeStartTransaction};
	__property System::Classes::TNotifyEvent AfterStartTransaction = {read=FAfterStartTransaction, write=FAfterStartTransaction};
	__property System::Classes::TNotifyEvent BeforeCommit = {read=FBeforeCommit, write=FBeforeCommit};
	__property System::Classes::TNotifyEvent AfterCommit = {read=FAfterCommit, write=FAfterCommit};
	__property System::Classes::TNotifyEvent BeforeRollback = {read=FBeforeRollback, write=FBeforeRollback};
	__property System::Classes::TNotifyEvent AfterRollback = {read=FAfterRollback, write=FAfterRollback};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Open(){ Data::Db::TCustomConnection::Open(); }
	
private:
	void *__IFDPhysTransactionStateHandler;	// Firedac::Phys::Intf::IFDPhysTransactionStateHandler 
	void *__IFDPhysConnectionRecoveryHandler;	// Firedac::Phys::Intf::IFDPhysConnectionRecoveryHandler 
	void *__IFDStanObject;	// Firedac::Stan::Intf::IFDStanObject 
	void *__IFDStanErrorHandler;	// Firedac::Stan::Intf::IFDStanErrorHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2115}
	operator Firedac::Phys::Intf::_di_IFDPhysTransactionStateHandler()
	{
		Firedac::Phys::Intf::_di_IFDPhysTransactionStateHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Phys::Intf::IFDPhysTransactionStateHandler*(void) { return (Firedac::Phys::Intf::IFDPhysTransactionStateHandler*)&__IFDPhysTransactionStateHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2112}
	operator Firedac::Phys::Intf::_di_IFDPhysConnectionRecoveryHandler()
	{
		Firedac::Phys::Intf::_di_IFDPhysConnectionRecoveryHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Phys::Intf::IFDPhysConnectionRecoveryHandler*(void) { return (Firedac::Phys::Intf::IFDPhysConnectionRecoveryHandler*)&__IFDPhysConnectionRecoveryHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2001}
	operator Firedac::Stan::Intf::_di_IFDStanObject()
	{
		Firedac::Stan::Intf::_di_IFDStanObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanObject*(void) { return (Firedac::Stan::Intf::IFDStanObject*)&__IFDStanObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2007}
	operator Firedac::Stan::Intf::_di_IFDStanErrorHandler()
	{
		Firedac::Stan::Intf::_di_IFDStanErrorHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanErrorHandler*(void) { return (Firedac::Stan::Intf::IFDStanErrorHandler*)&__IFDStanErrorHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2018}
	operator Firedac::Stan::Option::_di_IFDStanOptions() { return OptionsIntfImpl; }
	#else
	operator Firedac::Stan::Option::IFDStanOptions*(void) { return (Firedac::Stan::Option::IFDStanOptions*)OptionsIntfImpl; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDConnection : public TFDCustomConnection
{
	typedef TFDCustomConnection inherited;
	
__published:
	__property ConnectionDefName = {default=0};
	__property DriverName = {default=0};
	__property ConnectionName = {default=0};
	__property Params;
	__property FetchOptions;
	__property FormatOptions;
	__property ResourceOptions;
	__property UpdateOptions;
	__property TxOptions;
	__property ConnectedStoredUsage = {default=3};
	__property Connected = {default=0};
	__property LoginDialog;
	__property LoginPrompt = {default=1};
	__property Transaction;
	__property UpdateTransaction;
	__property OnLogin;
	__property OnError;
	__property OnLost;
	__property OnRestored;
	__property OnRecover;
	__property AfterConnect;
	__property BeforeConnect;
	__property AfterDisconnect;
	__property BeforeDisconnect;
	__property BeforeStartTransaction;
	__property AfterStartTransaction;
	__property BeforeCommit;
	__property AfterCommit;
	__property BeforeRollback;
	__property AfterRollback;
public:
	/* TFDCustomConnection.Create */ inline __fastcall virtual TFDConnection(System::Classes::TComponent* AOwner) : TFDCustomConnection(AOwner) { }
	/* TFDCustomConnection.Destroy */ inline __fastcall virtual ~TFDConnection() { }
	
};


class PASCALIMPLEMENTATION TFDCustomTransaction : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
private:
	Firedac::Phys::Intf::_di_IFDPhysTransaction FTransactionIntf;
	TFDCustomConnection* FConnection;
	Firedac::Stan::Option::TFDTxOptions* FOptionsIntf;
	System::Classes::TList* FDataSets;
	unsigned FNestingLevel;
	unsigned FSerialID;
	System::Classes::TNotifyEvent FBeforeStartTransaction;
	System::Classes::TNotifyEvent FAfterStartTransaction;
	System::Classes::TNotifyEvent FBeforeCommit;
	System::Classes::TNotifyEvent FAfterCommit;
	System::Classes::TNotifyEvent FBeforeRollback;
	System::Classes::TNotifyEvent FAfterRollback;
	bool __fastcall GetActive();
	int __fastcall GetDataSetCount();
	Firedac::Comp::Dataset::TFDDataSet* __fastcall GetDataSets(int AIndex);
	void __fastcall SetConnection(TFDCustomConnection* const AValue);
	void __fastcall SetOptions(Firedac::Stan::Option::TFDTxOptions* const AValue);
	void __fastcall DoConnectChanged(System::TObject* Sender, bool Connecting);
	void __fastcall InternalCreateTxIntf();
	void __fastcall InternalDeleteTxIntf();
	void __fastcall CheckReleased(bool ARetaining, bool AMyTrans);
	
protected:
	void __fastcall CheckConnected();
	bool __fastcall CheckActive();
	void __fastcall HandleDisconnectCommands(Firedac::Phys::Intf::TFDPhysDisconnectFilter AFilter, Firedac::Phys::Intf::TFDPhysDisconnectMode AMode);
	void __fastcall HandleTxOperation(Firedac::Phys::Intf::TFDPhysTransactionState AOperation, bool ABefore);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	
public:
	__fastcall virtual TFDCustomTransaction(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDCustomTransaction();
	void __fastcall StartTransaction();
	void __fastcall Commit();
	void __fastcall CommitRetaining();
	void __fastcall Rollback();
	void __fastcall RollbackRetaining();
	__property bool Active = {read=GetActive, nodefault};
	__property Firedac::Phys::Intf::_di_IFDPhysTransaction TransactionIntf = {read=FTransactionIntf};
	__property int DataSetCount = {read=GetDataSetCount, nodefault};
	__property Firedac::Comp::Dataset::TFDDataSet* DataSets[int AIndex] = {read=GetDataSets};
	__property Firedac::Stan::Option::TFDTxOptions* Options = {read=FOptionsIntf, write=SetOptions};
	__property TFDCustomConnection* Connection = {read=FConnection, write=SetConnection};
	__property System::Classes::TNotifyEvent BeforeStartTransaction = {read=FBeforeStartTransaction, write=FBeforeStartTransaction};
	__property System::Classes::TNotifyEvent AfterStartTransaction = {read=FAfterStartTransaction, write=FAfterStartTransaction};
	__property System::Classes::TNotifyEvent BeforeCommit = {read=FBeforeCommit, write=FBeforeCommit};
	__property System::Classes::TNotifyEvent AfterCommit = {read=FAfterCommit, write=FAfterCommit};
	__property System::Classes::TNotifyEvent BeforeRollback = {read=FBeforeRollback, write=FBeforeRollback};
	__property System::Classes::TNotifyEvent AfterRollback = {read=FAfterRollback, write=FAfterRollback};
private:
	void *__IFDPhysTransactionStateHandler;	// Firedac::Phys::Intf::IFDPhysTransactionStateHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2115}
	operator Firedac::Phys::Intf::_di_IFDPhysTransactionStateHandler()
	{
		Firedac::Phys::Intf::_di_IFDPhysTransactionStateHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Phys::Intf::IFDPhysTransactionStateHandler*(void) { return (Firedac::Phys::Intf::IFDPhysTransactionStateHandler*)&__IFDPhysTransactionStateHandler; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDTransaction : public TFDCustomTransaction
{
	typedef TFDCustomTransaction inherited;
	
__published:
	__property Options;
	__property Connection;
	__property BeforeStartTransaction;
	__property AfterStartTransaction;
	__property BeforeCommit;
	__property AfterCommit;
	__property BeforeRollback;
	__property AfterRollback;
public:
	/* TFDCustomTransaction.Create */ inline __fastcall virtual TFDTransaction(System::Classes::TComponent* AOwner) : TFDCustomTransaction(AOwner) { }
	/* TFDCustomTransaction.Destroy */ inline __fastcall virtual ~TFDTransaction() { }
	
};


class PASCALIMPLEMENTATION TFDCustomEventAlerter : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
private:
	Firedac::Phys::Intf::_di_IFDPhysEventAlerter FEventAlerterIntf;
	TFDCustomConnection* FConnection;
	System::Classes::TStrings* FNames;
	Firedac::Stan::Option::TFDEventAlerterOptions* FOptionsIntf;
	TFDEventAlerterEvent FOnAlert;
	System::Classes::TNotifyEvent FOnTimeout;
	bool FStreamedActive;
	System::UnicodeString FSubscriptionName;
	System::Classes::TInterfaceList* FChangeHandlers;
	void __fastcall CheckAutoRegister();
	bool __fastcall GetActive();
	void __fastcall SetConnection(TFDCustomConnection* const AValue);
	void __fastcall SetNames(System::Classes::TStrings* const AValue);
	void __fastcall SetOptions(Firedac::Stan::Option::TFDEventAlerterOptions* const AValue);
	void __fastcall DoConnectChanged(System::TObject* Sender, bool Connecting);
	void __fastcall DoNamesChanged(System::TObject* ASender);
	void __fastcall SetActive(const bool AValue);
	void __fastcall SetSubscriptionName(const System::UnicodeString AValue);
	
protected:
	void __fastcall HandleEvent(const System::UnicodeString AEventName, const System::Variant &AArgument);
	void __fastcall HandleTimeout(bool &AContinue);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall Loaded();
	void __fastcall AddChangeHandler(const Firedac::Phys::Intf::_di_IFDPhysChangeHandler AHandler);
	void __fastcall RemoveChangeHandler(const Firedac::Phys::Intf::_di_IFDPhysChangeHandler AHandler);
	
public:
	__fastcall virtual TFDCustomEventAlerter(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDCustomEventAlerter();
	void __fastcall Register();
	void __fastcall Unregister();
	void __fastcall Signal(const System::UnicodeString AEvent, const System::Variant &AArgument);
	void __fastcall Refresh(const Firedac::Phys::Intf::_di_IFDPhysChangeHandler AHandler, bool AForce)/* overload */;
	__property Firedac::Phys::Intf::_di_IFDPhysEventAlerter EventAlerterIntf = {read=FEventAlerterIntf};
	__property bool Active = {read=GetActive, write=SetActive, default=0};
	__property TFDCustomConnection* Connection = {read=FConnection, write=SetConnection};
	__property System::Classes::TStrings* Names = {read=FNames, write=SetNames};
	__property System::UnicodeString SubscriptionName = {read=FSubscriptionName, write=SetSubscriptionName};
	__property Firedac::Stan::Option::TFDEventAlerterOptions* Options = {read=FOptionsIntf, write=SetOptions};
	__property TFDEventAlerterEvent OnAlert = {read=FOnAlert, write=FOnAlert};
	__property System::Classes::TNotifyEvent OnTimeout = {read=FOnTimeout, write=FOnTimeout};
private:
	void *__IFDPhysEventHandler;	// Firedac::Phys::Intf::IFDPhysEventHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2116}
	operator Firedac::Phys::Intf::_di_IFDPhysEventHandler()
	{
		Firedac::Phys::Intf::_di_IFDPhysEventHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Phys::Intf::IFDPhysEventHandler*(void) { return (Firedac::Phys::Intf::IFDPhysEventHandler*)&__IFDPhysEventHandler; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDEventAlerter : public TFDCustomEventAlerter
{
	typedef TFDCustomEventAlerter inherited;
	
__published:
	__property Active = {default=0};
	__property Connection;
	__property Names;
	__property SubscriptionName = {default=0};
	__property Options;
	__property OnAlert;
	__property OnTimeout;
public:
	/* TFDCustomEventAlerter.Create */ inline __fastcall virtual TFDEventAlerter(System::Classes::TComponent* AOwner) : TFDCustomEventAlerter(AOwner) { }
	/* TFDCustomEventAlerter.Destroy */ inline __fastcall virtual ~TFDEventAlerter() { }
	
};


class PASCALIMPLEMENTATION TFDCustomCommand : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
public:
	System::Variant operator[](const System::UnicodeString AParamNames) { return this->Values[AParamNames]; }
	
private:
	Firedac::Phys::Intf::_di_IFDPhysCommand FCommandIntf;
	System::Classes::TStrings* FCommandText;
	System::UnicodeString FConnectionName;
	TFDCustomConnection* FConnection;
	Firedac::Stan::Option::_di_IFDStanOptions FOptionsIntf;
	Firedac::Stan::Param::TFDParams* FParams;
	Firedac::Stan::Param::TFDMacros* FMacros;
	bool FStreamedActive;
	bool FStreamedPrepared;
	TFDCommandFlags FFlags;
	Firedac::Comp::Dataset::TFDDataSet* FOwner;
#ifndef _WIN64
	int FRowsAffected;
#else /* _WIN64 */
	__int64 FRowsAffected;
#endif /* _WIN64 */
	System::Word FOverload;
	System::Classes::TNotifyEvent FBeforePrepare;
	System::Classes::TNotifyEvent FAfterPrepare;
	System::Classes::TNotifyEvent FBeforeUnprepare;
	System::Classes::TNotifyEvent FAfterUnprepare;
	System::Classes::TNotifyEvent FBeforeOpen;
	System::Classes::TNotifyEvent FAfterOpen;
	System::Classes::TNotifyEvent FBeforeClose;
	System::Classes::TNotifyEvent FAfterClose;
	System::Classes::TNotifyEvent FBeforeExecute;
	System::Classes::TNotifyEvent FAfterExecute;
	System::Classes::TNotifyEvent FBeforeFetch;
	System::Classes::TNotifyEvent FAfterFetch;
	bool FFixedCommandKind;
	Firedac::Phys::Intf::TFDPhysCommandKind FCommandKind;
	System::UnicodeString FBaseObjectName;
	System::UnicodeString FSchemaName;
	System::UnicodeString FCatalogName;
	TFDBindedBy FBindedBy;
	Firedac::Stan::Error::TFDErrorEvent FOnError;
	System::Classes::TNotifyEvent FOnCommandChanged;
	TFDOperationFinishedEvent FOperationFinished;
	unsigned FThreadID;
	TFDCustomTableAdapter* FTableAdapter;
	TFDCustomTransaction* FTransaction;
	Firedac::Comp::Dataset::TFDStoredActivationUsage FActiveStoredUsage;
	Firedac::Phys::Intf::TFDPhysCommandKind __fastcall GetCommandKind();
	Firedac::Phys::Intf::TFDPhysCommandState __fastcall GetState();
	void __fastcall SetConnection(TFDCustomConnection* const AValue);
	void __fastcall SetConnectionName(const System::UnicodeString AValue);
	bool __fastcall GetActive();
	void __fastcall SetActiveBase(const bool AValue, const bool ABlocked);
	void __fastcall SetActive(const bool AValue);
	bool __fastcall IsPS();
	bool __fastcall GetPrepared();
	void __fastcall SetPrepared(const bool AValue);
	void __fastcall CheckInactive();
	void __fastcall CheckActive();
	void __fastcall GetParentOptions(Firedac::Stan::Option::_di_IFDStanOptions &AOpts);
	void __fastcall SetOptionsIntf(const Firedac::Stan::Option::_di_IFDStanOptions AValue);
	Firedac::Stan::Option::TFDFetchOptions* __fastcall GetFetchOptions();
	Firedac::Stan::Option::TFDFormatOptions* __fastcall GetFormatOptions();
	Firedac::Stan::Option::TFDBottomResourceOptions* __fastcall GetResourceOptions();
	Firedac::Stan::Option::TFDBottomUpdateOptions* __fastcall GetUpdateOptions();
	void __fastcall SetFetchOptions(Firedac::Stan::Option::TFDFetchOptions* const AValue);
	void __fastcall SetFormatOptions(Firedac::Stan::Option::TFDFormatOptions* const AValue);
	void __fastcall SetUpdateOptions(Firedac::Stan::Option::TFDBottomUpdateOptions* const AValue);
	void __fastcall SetResourceOptions(Firedac::Stan::Option::TFDBottomResourceOptions* const AValue);
	void __fastcall DoSQLChanging(System::TObject* ASender);
	void __fastcall DoSQLChange(System::TObject* ASender);
	void __fastcall PreprocessSQL(const System::UnicodeString ASQL, Firedac::Stan::Param::TFDParams* AParams, Firedac::Stan::Param::TFDMacros* AMacrosUpd, Firedac::Stan::Param::TFDMacros* AMacrosRead, bool ACreateParams, bool ACreateMacros, bool AExpandMacros, bool AExpandEscape, bool AParseSQL, Firedac::Phys::Intf::TFDPhysCommandKind &ACommandKind, System::UnicodeString &AFrom);
	void __fastcall SetCommandTextStrs(System::Classes::TStrings* const AValue)/* overload */;
	void __fastcall SetCommandText(const System::UnicodeString ASQL, bool AResetParams)/* overload */;
	void __fastcall SetMacros(Firedac::Stan::Param::TFDMacros* const AValue);
	void __fastcall SetParams(Firedac::Stan::Param::TFDParams* const AValue);
	bool __fastcall IsCNNS();
	bool __fastcall IsCNS();
	void __fastcall SetOverload(const System::Word AValue);
	void __fastcall CheckUnprepared();
	void __fastcall CheckAsyncProgress();
	void __fastcall CheckPrepared();
	void __fastcall SetCommandKind(const Firedac::Phys::Intf::TFDPhysCommandKind AValue);
	void __fastcall SetBaseObjectName(const System::UnicodeString AValue);
	void __fastcall SetSchemaName(const System::UnicodeString AValue);
	bool __fastcall CheckComponentState(System::Classes::TComponentState AState);
	void __fastcall SetCatalogName(const System::UnicodeString AValue);
	void __fastcall MacrosChanged(System::TObject* ASender);
	void __fastcall PropertyChange();
	void __fastcall SetParamBindMode(const Firedac::Stan::Param::TFDParamBindMode AValue);
	void __fastcall InternalCloseConnection();
	Firedac::Phys::Intf::_di_IFDPhysConnectionMetadata __fastcall GetConnectionMetadata();
	void __fastcall FetchFinished(System::TObject* ASender, Firedac::Stan::Intf::TFDStanAsyncState AState, System::Sysutils::Exception* AException);
	void __fastcall WriteCollection(System::Classes::TWriter* AWriter, System::Classes::TCollection* ACollection);
	void __fastcall ReadCollection(System::Classes::TReader* AReader, System::Classes::TCollection* ACollection);
	void __fastcall ReadMacros(System::Classes::TReader* Reader);
	void __fastcall ReadParams(System::Classes::TReader* Reader);
	void __fastcall WriteMacros(System::Classes::TWriter* Writer);
	void __fastcall WriteParams(System::Classes::TWriter* Writer);
	Firedac::Stan::Param::TFDParamBindMode __fastcall GetParamBindMode();
	bool __fastcall IsCKS();
	System::Classes::TPersistent* __fastcall GetParamsOwner();
	System::UnicodeString __fastcall GetDisplayName();
	System::UnicodeString __fastcall GetSQLText();
	System::Variant __fastcall GetValues(const System::UnicodeString AParamNames);
	void __fastcall SetValues(const System::UnicodeString AParamNames, const System::Variant &AValue);
	void __fastcall ReadPrepared(System::Classes::TReader* Reader);
	bool __fastcall DoStoredActivation();
	
protected:
	bool FEnableParamsStorage;
	System::Classes::TComponentName __fastcall GetName();
	Firedac::Stan::Intf::_di_IFDStanObject __fastcall GetParent();
	void __fastcall BeforeReuse();
	void __fastcall AfterReuse();
	void __fastcall SetOwner(System::TObject* const AOwner, const System::Classes::TComponentName ARole);
	virtual void __fastcall HandleException(const Firedac::Stan::Intf::_di_IFDStanObject AInitiator, System::Sysutils::Exception* &AException);
	virtual void __fastcall HandleFinished(const Firedac::Stan::Intf::_di_IFDStanObject AInitiator, Firedac::Stan::Intf::TFDStanAsyncState AState, System::Sysutils::Exception* AException);
	void __fastcall HandleUnprepare();
	virtual void __fastcall Loaded();
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* AFiler);
	virtual void __fastcall InternalCreateCommandIntf();
	virtual void __fastcall InternalPrepare();
	virtual void __fastcall InternalUnprepare();
	virtual void __fastcall InternalOpen(bool ABlocked);
	virtual void __fastcall InternalOpenFinished(System::TObject* ASender, Firedac::Stan::Intf::TFDStanAsyncState AState, System::Sysutils::Exception* AException);
	virtual void __fastcall InternalClose(bool AAll);
	virtual void __fastcall InternalExecute(int ATimes, int AOffset, bool ABlocked);
	virtual void __fastcall InternalExecuteFinished(System::TObject* ASender, Firedac::Stan::Intf::TFDStanAsyncState AState, System::Sysutils::Exception* AException);
	virtual void __fastcall DoBeforePrepare();
	virtual void __fastcall DoBeforeUnprepare();
	virtual void __fastcall DoAfterPrepare();
	virtual void __fastcall DoAfterUnprepare();
	virtual void __fastcall DoBeforeOpen();
	virtual void __fastcall DoBeforeClose();
	virtual void __fastcall DoAfterOpen();
	virtual void __fastcall DoAfterClose();
	virtual void __fastcall DoAfterExecute();
	virtual void __fastcall DoBeforeExecute();
	virtual void __fastcall DoAfterFetch();
	virtual void __fastcall DoBeforeFetch();
	virtual void __fastcall SetTransaction(TFDCustomTransaction* const AValue);
	__property Firedac::Stan::Option::_di_IFDStanOptions OptionsIntfImpl = {read=FOptionsIntf};
	
public:
	__fastcall virtual TFDCustomCommand(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDCustomCommand();
	TFDCustomConnection* __fastcall GetConnection(bool ACheck);
	TFDCustomConnection* __fastcall AcquireConnection();
	void __fastcall ReleaseConnection(TFDCustomConnection* &AConnection);
	void __fastcall FillParams(Firedac::Stan::Param::TFDParams* AParams, const System::UnicodeString ASQL = System::UnicodeString());
	Firedac::Stan::Param::TFDParam* __fastcall FindParam(const System::UnicodeString AValue);
	Firedac::Stan::Param::TFDParam* __fastcall ParamByName(const System::UnicodeString AValue);
	Firedac::Stan::Param::TFDMacro* __fastcall FindMacro(const System::UnicodeString AValue);
	Firedac::Stan::Param::TFDMacro* __fastcall MacroByName(const System::UnicodeString AValue);
	void __fastcall Trace(Firedac::Stan::Intf::TFDMoniEventStep AStep, const System::UnicodeString AMsg, const System::TVarRec *AArgs, const int AArgs_High);
	void __fastcall AbortJob(bool AWait = false);
	void __fastcall Disconnect(bool AAbortJob = false);
	void __fastcall Prepare(const System::UnicodeString ACommandText = System::UnicodeString());
	void __fastcall Unprepare();
	void __fastcall Open(bool ABlocked = false);
	bool __fastcall OpenOrExecute(bool ABlocked = false);
	void __fastcall Close();
	void __fastcall CloseAll();
	void __fastcall CloseStreams();
	void __fastcall NextRecordSet();
	void __fastcall Execute(int ATimes = 0x0, int AOffset = 0x0, bool ABlocked = false)/* overload */;
	int __fastcall Execute(const System::UnicodeString ASQL)/* overload */;
	int __fastcall Execute(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High)/* overload */;
	int __fastcall Execute(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High)/* overload */;
	Firedac::Dats::TFDDatSTable* __fastcall Define(Firedac::Dats::TFDDatSManager* ASchema, Firedac::Dats::TFDDatSTable* ATable = (Firedac::Dats::TFDDatSTable*)(0x0), Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode AMetaInfoMergeMode = (Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode)(0x0))/* overload */;
	Firedac::Dats::TFDDatSTable* __fastcall Define(Firedac::Dats::TFDDatSTable* ATable = (Firedac::Dats::TFDDatSTable*)(0x0), Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode AMetaInfoMergeMode = (Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode)(0x0))/* overload */;
	void __fastcall Fetch(Firedac::Dats::TFDDatSTable* ATable, bool AAll = true, bool ABlocked = false)/* overload */;
	__property TFDBindedBy BindedBy = {read=FBindedBy, nodefault};
	__property Firedac::Phys::Intf::_di_IFDPhysCommand CommandIntf = {read=FCommandIntf};
#ifndef _WIN64
	__property int RowsAffected = {read=FRowsAffected, nodefault};
#else /* _WIN64 */
	__property __int64 RowsAffected = {read=FRowsAffected};
#endif /* _WIN64 */
	__property Firedac::Phys::Intf::TFDPhysCommandState State = {read=GetState, nodefault};
	__property System::UnicodeString SQLText = {read=GetSQLText};
	__property Firedac::Comp::Dataset::TFDDataSet* DataSet = {read=FOwner};
	__property Firedac::Stan::Option::_di_IFDStanOptions OptionsIntf = {read=FOptionsIntf, write=SetOptionsIntf};
	__property Firedac::Stan::Option::TFDFormatOptions* FormatOptions = {read=GetFormatOptions, write=SetFormatOptions};
	__property Firedac::Stan::Option::TFDFetchOptions* FetchOptions = {read=GetFetchOptions, write=SetFetchOptions};
	__property Firedac::Stan::Option::TFDBottomResourceOptions* ResourceOptions = {read=GetResourceOptions, write=SetResourceOptions};
	__property Firedac::Stan::Option::TFDBottomUpdateOptions* UpdateOptions = {read=GetUpdateOptions, write=SetUpdateOptions};
	__property TFDCustomConnection* Connection = {read=FConnection, write=SetConnection, stored=IsCNS};
	__property System::UnicodeString ConnectionName = {read=FConnectionName, write=SetConnectionName, stored=IsCNNS};
	__property TFDCustomTransaction* Transaction = {read=FTransaction, write=SetTransaction};
	__property System::UnicodeString CatalogName = {read=FCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=FSchemaName, write=SetSchemaName};
	__property System::UnicodeString BaseObjectName = {read=FBaseObjectName, write=SetBaseObjectName};
	__property System::Word Overload = {read=FOverload, write=SetOverload, default=0};
	__property Firedac::Stan::Param::TFDMacros* Macros = {read=FMacros, write=SetMacros, stored=false};
	__property Firedac::Stan::Param::TFDParams* Params = {read=FParams, write=SetParams, stored=false};
	__property Firedac::Stan::Param::TFDParamBindMode ParamBindMode = {read=GetParamBindMode, write=SetParamBindMode, default=0};
	__property bool FixedCommandKind = {read=FFixedCommandKind, write=FFixedCommandKind, nodefault};
	__property Firedac::Phys::Intf::TFDPhysCommandKind CommandKind = {read=GetCommandKind, write=SetCommandKind, stored=IsCKS, default=0};
	__property System::Classes::TStrings* CommandText = {read=FCommandText, write=SetCommandTextStrs};
	__property System::Variant Values[const System::UnicodeString AParamNames] = {read=GetValues, write=SetValues/*, default*/};
	__property bool Prepared = {read=GetPrepared, write=SetPrepared, stored=IsPS, default=0};
	__property bool Active = {read=GetActive, write=SetActive, default=0};
	__property Firedac::Comp::Dataset::TFDStoredActivationUsage ActiveStoredUsage = {read=FActiveStoredUsage, write=FActiveStoredUsage, default=3};
	__property System::Classes::TNotifyEvent BeforePrepare = {read=FBeforePrepare, write=FBeforePrepare};
	__property System::Classes::TNotifyEvent AfterPrepare = {read=FAfterPrepare, write=FAfterPrepare};
	__property System::Classes::TNotifyEvent AfterUnprepare = {read=FAfterUnprepare, write=FAfterUnprepare};
	__property System::Classes::TNotifyEvent BeforeUnprepare = {read=FBeforeUnprepare, write=FBeforeUnprepare};
	__property System::Classes::TNotifyEvent BeforeExecute = {read=FBeforeExecute, write=FBeforeExecute};
	__property System::Classes::TNotifyEvent AfterExecute = {read=FAfterExecute, write=FAfterExecute};
	__property System::Classes::TNotifyEvent BeforeClose = {read=FBeforeClose, write=FBeforeClose};
	__property System::Classes::TNotifyEvent AfterClose = {read=FAfterClose, write=FAfterClose};
	__property System::Classes::TNotifyEvent BeforeOpen = {read=FBeforeOpen, write=FBeforeOpen};
	__property System::Classes::TNotifyEvent AfterOpen = {read=FAfterOpen, write=FAfterOpen};
	__property System::Classes::TNotifyEvent BeforeFetch = {read=FBeforeFetch, write=FBeforeFetch};
	__property System::Classes::TNotifyEvent AfterFetch = {read=FAfterFetch, write=FAfterFetch};
	__property Firedac::Stan::Error::TFDErrorEvent OnError = {read=FOnError, write=FOnError};
	__property System::Classes::TNotifyEvent OnCommandChanged = {read=FOnCommandChanged, write=FOnCommandChanged};
private:
	void *__IFDPhysCommandStateHandler;	// Firedac::Phys::Intf::IFDPhysCommandStateHandler 
	void *__IFDStanObject;	// Firedac::Stan::Intf::IFDStanObject 
	void *__IFDStanErrorHandler;	// Firedac::Stan::Intf::IFDStanErrorHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2114}
	operator Firedac::Phys::Intf::_di_IFDPhysCommandStateHandler()
	{
		Firedac::Phys::Intf::_di_IFDPhysCommandStateHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Phys::Intf::IFDPhysCommandStateHandler*(void) { return (Firedac::Phys::Intf::IFDPhysCommandStateHandler*)&__IFDPhysCommandStateHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2025}
	operator Firedac::Stan::Intf::_di_IFDStanAsyncHandler()
	{
		Firedac::Stan::Intf::_di_IFDStanAsyncHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanAsyncHandler*(void) { return (Firedac::Stan::Intf::IFDStanAsyncHandler*)&__IFDPhysCommandStateHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2001}
	operator Firedac::Stan::Intf::_di_IFDStanObject()
	{
		Firedac::Stan::Intf::_di_IFDStanObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanObject*(void) { return (Firedac::Stan::Intf::IFDStanObject*)&__IFDStanObject; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2007}
	operator Firedac::Stan::Intf::_di_IFDStanErrorHandler()
	{
		Firedac::Stan::Intf::_di_IFDStanErrorHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanErrorHandler*(void) { return (Firedac::Stan::Intf::IFDStanErrorHandler*)&__IFDStanErrorHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2018}
	operator Firedac::Stan::Option::_di_IFDStanOptions() { return OptionsIntfImpl; }
	#else
	operator Firedac::Stan::Option::IFDStanOptions*(void) { return (Firedac::Stan::Option::IFDStanOptions*)OptionsIntfImpl; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDCommand : public TFDCustomCommand
{
	typedef TFDCustomCommand inherited;
	
__published:
	__property ConnectionName = {default=0};
	__property Connection;
	__property Transaction;
	__property CatalogName = {default=0};
	__property SchemaName = {default=0};
	__property BaseObjectName = {default=0};
	__property Overload = {default=0};
	__property Params;
	__property Macros;
	__property FetchOptions;
	__property FormatOptions;
	__property ResourceOptions;
	__property UpdateOptions;
	__property CommandKind = {default=0};
	__property CommandText;
	__property ActiveStoredUsage = {default=3};
	__property Active = {default=0};
	__property BeforeClose;
	__property BeforeOpen;
	__property AfterClose;
	__property AfterOpen;
	__property BeforeUnprepare;
	__property BeforePrepare;
	__property AfterUnprepare;
	__property AfterPrepare;
	__property BeforeExecute;
	__property AfterExecute;
	__property OnError;
	__property OnCommandChanged;
public:
	/* TFDCustomCommand.Create */ inline __fastcall virtual TFDCommand(System::Classes::TComponent* AOwner) : TFDCustomCommand(AOwner) { }
	/* TFDCustomCommand.Destroy */ inline __fastcall virtual ~TFDCommand() { }
	
};


class PASCALIMPLEMENTATION TFDMetaInfoCommand : public TFDCustomCommand
{
	typedef TFDCustomCommand inherited;
	
private:
	System::UnicodeString FWildcard;
	Firedac::Phys::Intf::TFDPhysMetaInfoKind FMetaInfoKind;
	Firedac::Phys::Intf::TFDPhysTableKinds FTableKinds;
	Firedac::Phys::Intf::TFDPhysObjectScopes FObjectScopes;
	void __fastcall SetMetaInfoKind(const Firedac::Phys::Intf::TFDPhysMetaInfoKind AValue);
	void __fastcall SetTableKinds(const Firedac::Phys::Intf::TFDPhysTableKinds AValue);
	void __fastcall SetWildcard(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetObjectName();
	void __fastcall SetObjectName(const System::UnicodeString AValue);
	void __fastcall SetObjectScopes(const Firedac::Phys::Intf::TFDPhysObjectScopes AValue);
	
protected:
	virtual void __fastcall InternalCreateCommandIntf();
	virtual void __fastcall InternalPrepare();
	virtual void __fastcall DoAfterClose();
	
public:
	__fastcall virtual TFDMetaInfoCommand(System::Classes::TComponent* AOwner);
	
__published:
	__property Active = {default=0};
	__property ConnectionName = {default=0};
	__property Connection;
	__property FormatOptions;
	__property Overload = {default=0};
	__property System::UnicodeString ObjectName = {read=GetObjectName, write=SetObjectName};
	__property Firedac::Phys::Intf::TFDPhysMetaInfoKind MetaInfoKind = {read=FMetaInfoKind, write=SetMetaInfoKind, default=3};
	__property Firedac::Phys::Intf::TFDPhysTableKinds TableKinds = {read=FTableKinds, write=SetTableKinds, default=7};
	__property System::UnicodeString Wildcard = {read=FWildcard, write=SetWildcard};
	__property Firedac::Phys::Intf::TFDPhysObjectScopes ObjectScopes = {read=FObjectScopes, write=SetObjectScopes, default=1};
	__property CatalogName = {default=0};
	__property SchemaName = {default=0};
	__property BaseObjectName = {default=0};
	__property BeforeClose;
	__property BeforeOpen;
	__property AfterClose;
	__property AfterOpen;
	__property OnError;
	__property OnCommandChanged;
public:
	/* TFDCustomCommand.Destroy */ inline __fastcall virtual ~TFDMetaInfoCommand() { }
	
};


class PASCALIMPLEMENTATION TFDCustomTableAdapter : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
private:
	Firedac::Dapt::Intf::_di_IFDDAptTableAdapter FTableAdapterIntf;
	bool FTableAdapterOwned;
	TFDCustomCommand* FSelectCommand;
	TFDCustomCommand* FInsertCommand;
	TFDCustomCommand* FUpdateCommand;
	TFDCustomCommand* FDeleteCommand;
	TFDCustomCommand* FLockCommand;
	TFDCustomCommand* FUnLockCommand;
	TFDCustomCommand* FFetchRowCommand;
	Firedac::Stan::Error::TFDErrorEvent FOnError;
	TFDReconcileRowEvent FOnReconcileRow;
	TFDUpdateRowEvent FOnUpdateRow;
	TFDCustomSchemaAdapter* FSchemaAdapter;
	TFDAdaptedDataSet* FAdaptedDataSet;
	TFDCustomTransaction* FUpdateTransaction;
	void __fastcall SetUpdateTransaction(TFDCustomTransaction* const AValue);
	void __fastcall SetDeleteCommand(TFDCustomCommand* const AValue);
	void __fastcall SetFetchRowCommand(TFDCustomCommand* const AValue);
	void __fastcall SetInsertCommand(TFDCustomCommand* const AValue);
	void __fastcall SetLockCommand(TFDCustomCommand* const AValue);
	void __fastcall SetSelectCommand(TFDCustomCommand* const AValue);
	void __fastcall SetUnLockCommand(TFDCustomCommand* const AValue);
	void __fastcall SetUpdateCommand(TFDCustomCommand* const AValue);
	void __fastcall InternalUpdateTransaction();
	bool __fastcall InternalUpdateAdapterCmd(Firedac::Stan::Option::TFDActionRequest ACmd);
	void __fastcall UpdateAdapterCmd(Firedac::Stan::Option::TFDActionRequest ACmd);
	void __fastcall UpdateAdapterCmds(const Firedac::Stan::Option::TFDActionRequest *ACmds, const int ACmds_High);
	void __fastcall SetAdapterCmd(const Firedac::Phys::Intf::_di_IFDPhysCommand ACmd, Firedac::Stan::Option::TFDActionRequest ACmdKind);
	void __fastcall SetCommand(TFDCustomCommand* &AVar, TFDCustomCommand* const AValue, Firedac::Stan::Option::TFDActionRequest ACmdKind);
	Firedac::Dats::TFDDatSTable* __fastcall GetDatSTable();
	System::UnicodeString __fastcall GetDatSTableName();
	Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode __fastcall GetMetaInfoMergeMode();
	int __fastcall GetSourceRecordSetID();
	System::UnicodeString __fastcall GetSourceRecordSetName();
	System::UnicodeString __fastcall GetUpdateTableName();
	void __fastcall SetDatSTable(Firedac::Dats::TFDDatSTable* const AValue);
	void __fastcall SetDatSTableName(const System::UnicodeString AValue);
	void __fastcall SetMetaInfoMergeMode(const Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode AValue);
	void __fastcall SetSourceRecordSetID(const int AValue);
	void __fastcall SetSourceRecordSetName(const System::UnicodeString AValue);
	void __fastcall SetUpdateTableName(const System::UnicodeString AValue);
	Firedac::Dapt::Column::TFDDAptColumnMappings* __fastcall GetColumnMappings();
	void __fastcall SetSchemaAdapter(TFDCustomSchemaAdapter* const AValue);
	bool __fastcall IsSRSNS();
	TFDCustomCommand* __fastcall GetCommand(Firedac::Stan::Option::TFDActionRequest ACmdKind);
	void __fastcall SetTableAdapterIntf(const Firedac::Dapt::Intf::_di_IFDDAptTableAdapter AAdapter, bool AOwned);
	void __fastcall SetColumnMappings(Firedac::Dapt::Column::TFDDAptColumnMappings* const AValue);
	bool __fastcall IsDTNS();
	bool __fastcall IsUTNS();
	bool __fastcall IsCMS();
	Firedac::Dats::TFDDatSManager* __fastcall GetDatSManager();
	void __fastcall SetDatSManager(Firedac::Dats::TFDDatSManager* AValue);
	System::TObject* __fastcall GetSender();
	TFDCustomTransaction* __fastcall GetActualTransaction();
	TFDCustomTransaction* __fastcall GetActualUpdateTransaction();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall HandleException(const Firedac::Stan::Intf::_di_IFDStanObject AInitiator, System::Sysutils::Exception* &AException);
	virtual void __fastcall ReconcileRow(Firedac::Dats::TFDDatSRow* ARow, Firedac::Dapt::Intf::TFDDAptReconcileAction &AAction);
	virtual void __fastcall UpdateRow(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions, Firedac::Stan::Intf::TFDErrorAction &AAction);
	
public:
	__fastcall virtual TFDCustomTableAdapter(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDCustomTableAdapter();
	Firedac::Dats::TFDDatSTable* __fastcall Define();
	void __fastcall Fetch(bool AAll = false)/* overload */;
	int __fastcall ApplyUpdates(int AMaxErrors = 0xffffffff)/* overload */;
	bool __fastcall Reconcile();
	void __fastcall Reset();
	void __fastcall Fetch(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction &AAction, int AColumn, Firedac::Phys::Intf::TFDPhysFillRowOptions ARowOptions)/* overload */;
	void __fastcall Update(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions = Firedac::Stan::Option::TFDUpdateRowOptions() , Firedac::Stan::Option::TFDActionRequest AForceRequest = (Firedac::Stan::Option::TFDActionRequest)(0x1))/* overload */;
	void __fastcall Lock(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions = Firedac::Stan::Option::TFDUpdateRowOptions() );
	void __fastcall UnLock(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions = Firedac::Stan::Option::TFDUpdateRowOptions() );
	__property TFDCustomSchemaAdapter* SchemaAdapter = {read=FSchemaAdapter, write=SetSchemaAdapter};
	__property TFDAdaptedDataSet* DataSet = {read=FAdaptedDataSet};
	__property System::UnicodeString SourceRecordSetName = {read=GetSourceRecordSetName, write=SetSourceRecordSetName, stored=IsSRSNS};
	__property int SourceRecordSetID = {read=GetSourceRecordSetID, write=SetSourceRecordSetID, default=-1};
	__property System::UnicodeString UpdateTableName = {read=GetUpdateTableName, write=SetUpdateTableName, stored=IsUTNS};
	__property System::UnicodeString DatSTableName = {read=GetDatSTableName, write=SetDatSTableName, stored=IsDTNS};
	__property Firedac::Dats::TFDDatSTable* DatSTable = {read=GetDatSTable, write=SetDatSTable};
	__property Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode MetaInfoMergeMode = {read=GetMetaInfoMergeMode, write=SetMetaInfoMergeMode, default=0};
	__property Firedac::Dats::TFDDatSManager* DatSManager = {read=GetDatSManager, write=SetDatSManager};
	__property Firedac::Dapt::Intf::_di_IFDDAptTableAdapter TableAdapterIntf = {read=FTableAdapterIntf};
	__property Firedac::Dapt::Column::TFDDAptColumnMappings* ColumnMappings = {read=GetColumnMappings, write=SetColumnMappings, stored=IsCMS};
	__property TFDCustomTransaction* UpdateTransaction = {read=FUpdateTransaction, write=SetUpdateTransaction};
	__property TFDCustomCommand* SelectCommand = {read=FSelectCommand, write=SetSelectCommand};
	__property TFDCustomCommand* InsertCommand = {read=FInsertCommand, write=SetInsertCommand};
	__property TFDCustomCommand* UpdateCommand = {read=FUpdateCommand, write=SetUpdateCommand};
	__property TFDCustomCommand* DeleteCommand = {read=FDeleteCommand, write=SetDeleteCommand};
	__property TFDCustomCommand* LockCommand = {read=FLockCommand, write=SetLockCommand};
	__property TFDCustomCommand* UnLockCommand = {read=FUnLockCommand, write=SetUnLockCommand};
	__property TFDCustomCommand* FetchRowCommand = {read=FFetchRowCommand, write=SetFetchRowCommand};
	__property Firedac::Stan::Error::TFDErrorEvent OnError = {read=FOnError, write=FOnError};
	__property TFDReconcileRowEvent OnReconcileRow = {read=FOnReconcileRow, write=FOnReconcileRow};
	__property TFDUpdateRowEvent OnUpdateRow = {read=FOnUpdateRow, write=FOnUpdateRow};
private:
	void *__IFDDAptUpdateHandler;	// Firedac::Dapt::Intf::IFDDAptUpdateHandler 
	void *__IFDStanErrorHandler;	// Firedac::Stan::Intf::IFDStanErrorHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2301}
	operator Firedac::Dapt::Intf::_di_IFDDAptUpdateHandler()
	{
		Firedac::Dapt::Intf::_di_IFDDAptUpdateHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Dapt::Intf::IFDDAptUpdateHandler*(void) { return (Firedac::Dapt::Intf::IFDDAptUpdateHandler*)&__IFDDAptUpdateHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2007}
	operator Firedac::Stan::Intf::_di_IFDStanErrorHandler()
	{
		Firedac::Stan::Intf::_di_IFDStanErrorHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanErrorHandler*(void) { return (Firedac::Stan::Intf::IFDStanErrorHandler*)&__IFDStanErrorHandler; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDTableAdapter : public TFDCustomTableAdapter
{
	typedef TFDCustomTableAdapter inherited;
	
__published:
	__property SchemaAdapter;
	__property SourceRecordSetName = {default=0};
	__property SourceRecordSetID = {default=-1};
	__property UpdateTableName = {default=0};
	__property DatSTableName = {default=0};
	__property MetaInfoMergeMode = {default=0};
	__property UpdateTransaction;
	__property SelectCommand;
	__property InsertCommand;
	__property UpdateCommand;
	__property DeleteCommand;
	__property LockCommand;
	__property UnLockCommand;
	__property FetchRowCommand;
	__property ColumnMappings;
	__property OnError;
	__property OnReconcileRow;
	__property OnUpdateRow;
public:
	/* TFDCustomTableAdapter.Create */ inline __fastcall virtual TFDTableAdapter(System::Classes::TComponent* AOwner) : TFDCustomTableAdapter(AOwner) { }
	/* TFDCustomTableAdapter.Destroy */ inline __fastcall virtual ~TFDTableAdapter() { }
	
};


class PASCALIMPLEMENTATION TFDCustomSchemaAdapter : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
public:
	TFDCustomTableAdapter* operator[](int AIndex) { return this->TableAdapters[AIndex]; }
	
private:
	System::Classes::TList* FTableAdapters;
	Firedac::Dapt::Intf::_di_IFDDAptSchemaAdapter FDAptSchemaAdapter;
	Firedac::Stan::Util::TFDEncoder* FEncoder;
	System::Classes::TNotifyEvent FBeforeApplyUpdate;
	System::Classes::TNotifyEvent FAfterApplyUpdate;
	Firedac::Stan::Error::TFDErrorEvent FOnError;
	TFDReconcileRowEvent FOnReconcileRow;
	TFDUpdateRowEvent FOnUpdateRow;
	Firedac::Dapt::Intf::_di_IFDDAptTableAdapters __fastcall GetTableAdaptersIntf();
	Firedac::Dats::TFDDatSManager* __fastcall GetDatSManager();
	void __fastcall SetDatSManager(Firedac::Dats::TFDDatSManager* const AValue);
	int __fastcall GetCount();
	TFDCustomTableAdapter* __fastcall GetTableAdapters(int AIndex);
	TFDAdaptedDataSet* __fastcall GetDataSets(int AIndex);
	Firedac::Stan::Option::TFDBottomResourceOptions* __fastcall GetResourceOptions();
	void __fastcall SetResourceOptions(Firedac::Stan::Option::TFDBottomResourceOptions* const AValue);
	Firedac::Stan::Option::TFDUpdateOptions* __fastcall GetUpdateOptions();
	void __fastcall SetUpdateOptions(Firedac::Stan::Option::TFDUpdateOptions* const AValue);
	void __fastcall SaveToStorage(const System::UnicodeString AFileName, System::Classes::TStream* AStream, Firedac::Stan::Intf::TFDStorageFormat AFormat);
	void __fastcall LoadFromStorage(const System::UnicodeString AFileName, System::Classes::TStream* AStream, Firedac::Stan::Intf::TFDStorageFormat AFormat);
	void __fastcall StartWait();
	void __fastcall StopWait();
	int __fastcall GetChangeCount();
	__int64 __fastcall GetSavePoint();
	bool __fastcall GetUpdatesPending();
	void __fastcall SetSavePoint(const __int64 AValue);
	void __fastcall CheckDataSets(bool ACancel);
	void __fastcall ResyncDataSets();
	void __fastcall SetActive(bool AValue);
	
protected:
	virtual void __fastcall DoAfterApplyUpdate(int AErrors);
	virtual void __fastcall DoBeforeApplyUpdate();
	virtual void __fastcall HandleException(const Firedac::Stan::Intf::_di_IFDStanObject AInitiator, System::Sysutils::Exception* &AException);
	virtual void __fastcall ReconcileRow(Firedac::Dats::TFDDatSRow* ARow, Firedac::Dapt::Intf::TFDDAptReconcileAction &AAction);
	virtual void __fastcall UpdateRow(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions, Firedac::Stan::Intf::TFDErrorAction &AAction);
	
public:
	__fastcall virtual TFDCustomSchemaAdapter(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDCustomSchemaAdapter();
	void __fastcall Open();
	void __fastcall Close();
	int __fastcall ApplyUpdates(int AMaxErrors = 0xffffffff);
	bool __fastcall Reconcile();
	void __fastcall CommitUpdates();
	void __fastcall CancelUpdates();
	bool __fastcall UndoLastChange();
	void __fastcall LoadFromStream(System::Classes::TStream* AStream, Firedac::Stan::Intf::TFDStorageFormat AFormat = (Firedac::Stan::Intf::TFDStorageFormat)(0x0));
	void __fastcall LoadFromFile(const System::UnicodeString AFileName = System::UnicodeString(), Firedac::Stan::Intf::TFDStorageFormat AFormat = (Firedac::Stan::Intf::TFDStorageFormat)(0x0));
	void __fastcall SaveToStream(System::Classes::TStream* AStream, Firedac::Stan::Intf::TFDStorageFormat AFormat = (Firedac::Stan::Intf::TFDStorageFormat)(0x0));
	void __fastcall SaveToFile(const System::UnicodeString AFileName = System::UnicodeString(), Firedac::Stan::Intf::TFDStorageFormat AFormat = (Firedac::Stan::Intf::TFDStorageFormat)(0x0));
	__property Firedac::Dats::TFDDatSManager* DatSManager = {read=GetDatSManager, write=SetDatSManager};
	__property Firedac::Dapt::Intf::_di_IFDDAptTableAdapters TableAdaptersIntf = {read=GetTableAdaptersIntf};
	__property TFDCustomTableAdapter* TableAdapters[int AIndex] = {read=GetTableAdapters/*, default*/};
	__property TFDAdaptedDataSet* DataSets[int AIndex] = {read=GetDataSets};
	__property int Count = {read=GetCount, nodefault};
	__property Firedac::Stan::Option::TFDBottomResourceOptions* ResourceOptions = {read=GetResourceOptions, write=SetResourceOptions};
	__property Firedac::Stan::Option::TFDUpdateOptions* UpdateOptions = {read=GetUpdateOptions, write=SetUpdateOptions};
	__property __int64 SavePoint = {read=GetSavePoint, write=SetSavePoint};
	__property bool UpdatesPending = {read=GetUpdatesPending, nodefault};
	__property int ChangeCount = {read=GetChangeCount, nodefault};
	__property System::Classes::TNotifyEvent BeforeApplyUpdate = {read=FBeforeApplyUpdate, write=FBeforeApplyUpdate};
	__property System::Classes::TNotifyEvent AfterApplyUpdate = {read=FAfterApplyUpdate, write=FAfterApplyUpdate};
	__property Firedac::Stan::Error::TFDErrorEvent OnError = {read=FOnError, write=FOnError};
	__property TFDReconcileRowEvent OnReconcileRow = {read=FOnReconcileRow, write=FOnReconcileRow};
	__property TFDUpdateRowEvent OnUpdateRow = {read=FOnUpdateRow, write=FOnUpdateRow};
private:
	void *__IFDDAptUpdateHandler;	// Firedac::Dapt::Intf::IFDDAptUpdateHandler 
	void *__IFDStanErrorHandler;	// Firedac::Stan::Intf::IFDStanErrorHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2301}
	operator Firedac::Dapt::Intf::_di_IFDDAptUpdateHandler()
	{
		Firedac::Dapt::Intf::_di_IFDDAptUpdateHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Dapt::Intf::IFDDAptUpdateHandler*(void) { return (Firedac::Dapt::Intf::IFDDAptUpdateHandler*)&__IFDDAptUpdateHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2007}
	operator Firedac::Stan::Intf::_di_IFDStanErrorHandler()
	{
		Firedac::Stan::Intf::_di_IFDStanErrorHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanErrorHandler*(void) { return (Firedac::Stan::Intf::IFDStanErrorHandler*)&__IFDStanErrorHandler; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IFDDAptUpdateHandler; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDSchemaAdapter : public TFDCustomSchemaAdapter
{
	typedef TFDCustomSchemaAdapter inherited;
	
__published:
	__property ResourceOptions;
	__property UpdateOptions;
	__property BeforeApplyUpdate;
	__property AfterApplyUpdate;
	__property OnError;
	__property OnReconcileRow;
	__property OnUpdateRow;
public:
	/* TFDCustomSchemaAdapter.Create */ inline __fastcall virtual TFDSchemaAdapter(System::Classes::TComponent* AOwner) : TFDCustomSchemaAdapter(AOwner) { }
	/* TFDCustomSchemaAdapter.Destroy */ inline __fastcall virtual ~TFDSchemaAdapter() { }
	
};


class PASCALIMPLEMENTATION TFDCustomUpdateObject : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
private:
	TFDAdaptedDataSet* FDataSet;
	void __fastcall SetDataSet(TFDAdaptedDataSet* const AValue);
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall AttachToAdapter() = 0 ;
	virtual void __fastcall DetachFromAdapter() = 0 ;
	
public:
	virtual void __fastcall Apply(Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AOptions) = 0 ;
	__property TFDAdaptedDataSet* DataSet = {read=FDataSet, write=SetDataSet};
public:
	/* TComponent.Create */ inline __fastcall virtual TFDCustomUpdateObject(System::Classes::TComponent* AOwner) : Firedac::Stan::Intf::TFDComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TFDCustomUpdateObject() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDLocalSQLDataSet : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	Data::Db::TDataSet* FDataSet;
	System::UnicodeString FSchemaName;
	System::UnicodeString FName;
	Firedac::Phys::Intf::_di_IFDPhysLocalSQLAdapter FAdapter;
	bool FTemporary;
	bool FOwned;
	void __fastcall SetSchemaName(const System::UnicodeString AValue);
	void __fastcall SetName(const System::UnicodeString AValue);
	void __fastcall SetDataSet(Data::Db::TDataSet* const AValue);
	void __fastcall Changing();
	HIDESBASE void __fastcall Changed();
	void __fastcall UpdateAdapter();
	System::UnicodeString __fastcall GetActualName();
	bool __fastcall GetIsValid();
	void __fastcall Vacate();
	System::UnicodeString __fastcall GetActualSchemaName();
	System::UnicodeString __fastcall GetFullName();
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual ~TFDLocalSQLDataSet();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	__property System::UnicodeString ActualSchemaName = {read=GetActualSchemaName};
	__property System::UnicodeString ActualName = {read=GetActualName};
	__property System::UnicodeString FullName = {read=GetFullName};
	__property bool IsValid = {read=GetIsValid, nodefault};
	__property Firedac::Phys::Intf::_di_IFDPhysLocalSQLAdapter Adapter = {read=FAdapter};
	
__published:
	__property Data::Db::TDataSet* DataSet = {read=FDataSet, write=SetDataSet};
	__property System::UnicodeString SchemaName = {read=FSchemaName, write=SetSchemaName};
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property bool Temporary = {read=FTemporary, write=FTemporary, default=0};
	__property bool Owned = {read=FOwned, write=FOwned, default=0};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TFDLocalSQLDataSet(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDLocalSQLDataSets : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFDLocalSQLDataSet* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	TFDCustomLocalSQL* FOwner;
	TFDLocalSQLDataSet* __fastcall GetItems(int AIndex);
	void __fastcall SetItems(int AIndex, TFDLocalSQLDataSet* const AValue);
	void __fastcall CheckUnique(TFDLocalSQLDataSet* AItem);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TFDLocalSQLDataSets(TFDCustomLocalSQL* AOwner);
	HIDESBASE TFDLocalSQLDataSet* __fastcall Add()/* overload */;
	HIDESBASE TFDLocalSQLDataSet* __fastcall Add(Data::Db::TDataSet* ADataSet, const System::UnicodeString ASchemaName = System::UnicodeString(), const System::UnicodeString AName = System::UnicodeString())/* overload */;
	void __fastcall Remove(Data::Db::TDataSet* ADataSet);
	void __fastcall Vacate();
	TFDLocalSQLDataSet* __fastcall FindDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName);
	__property TFDLocalSQLDataSet* Items[int AIndex] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFDLocalSQLDataSets() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDCustomLocalSQL : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
private:
	System::UnicodeString FSchemaName;
	bool FActive;
	bool FStreamedActive;
	bool FActivated;
	TFDCustomConnection* FConnection;
	TFDLocalSQLDataSets* FDataSets;
	TFDGetDatasetEvent FOnGetDataSet;
	TFDOpenDatasetEvent FOnOpenDataSet;
	TFDOpenDatasetEvent FOnCloseDataSet;
	TFDGetDatasetEvent FOnReleaseDataSet;
	void __fastcall SetSchemaName(const System::UnicodeString AValue);
	void __fastcall SetConnection(TFDCustomConnection* const AValue);
	void __fastcall DoConnectChanged(System::TObject* Sender, bool Connecting);
	void __fastcall CheckDataSetAdded(TFDLocalSQLDataSet* const AItem);
	void __fastcall CheckDataSetRemoving(TFDLocalSQLDataSet* const AItem);
	void __fastcall SetActive(const bool AValue);
	void __fastcall SetDataSets(TFDLocalSQLDataSets* const AValue);
	void __fastcall ReadDataSets(System::Classes::TReader* Reader);
	void __fastcall WriteDataSets(System::Classes::TWriter* Writer);
	void __fastcall ReleaseDataSet(TFDLocalSQLDataSet* AItem);
	bool __fastcall MatchSchema(System::UnicodeString &ASchemaName);
	
protected:
	Firedac::Phys::Intf::_di_IFDPhysLocalSQLAdapter __fastcall FindAdapter(const System::UnicodeString ASchemaName, const System::UnicodeString AName);
	bool __fastcall GetDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName);
	void __fastcall OpenDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName, System::TObject* ADataSet);
	void __fastcall CloseDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName, System::TObject* ADataSet);
	virtual void __fastcall InternalAttachToSQL() = 0 ;
	virtual void __fastcall InternalDetachFromSQL() = 0 ;
	virtual void __fastcall InternalDataSetAdded(TFDLocalSQLDataSet* ADataSet) = 0 ;
	virtual void __fastcall InternalDataSetRemoving(TFDLocalSQLDataSet* ADataSet) = 0 ;
	virtual void __fastcall DoGetDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName, Data::Db::TDataSet* &ADataSet, bool &AOwned);
	virtual void __fastcall DoReleaseDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName, Data::Db::TDataSet* &ADataSet, bool &AOwned);
	virtual void __fastcall DoOpenDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName, Data::Db::TDataSet* const ADataSet);
	virtual void __fastcall DoCloseDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName, Data::Db::TDataSet* const ADataSet);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* AFiler);
	virtual void __fastcall Loaded();
	bool __fastcall GetActualActive();
	void __fastcall CheckActivate();
	void __fastcall CheckDeactivate();
	
public:
	__fastcall virtual TFDCustomLocalSQL(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDCustomLocalSQL();
	TFDLocalSQLDataSet* __fastcall FindDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName);
	void __fastcall RefreshDataSet(const System::UnicodeString ASchemaName, const System::UnicodeString AName);
	__property System::UnicodeString SchemaName = {read=FSchemaName, write=SetSchemaName};
	__property TFDLocalSQLDataSets* DataSets = {read=FDataSets, write=SetDataSets, stored=false};
	__property TFDCustomConnection* Connection = {read=FConnection, write=SetConnection};
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property TFDGetDatasetEvent OnGetDataSet = {read=FOnGetDataSet, write=FOnGetDataSet};
	__property TFDGetDatasetEvent OnReleaseDataSet = {read=FOnReleaseDataSet, write=FOnReleaseDataSet};
	__property TFDOpenDatasetEvent OnOpenDataSet = {read=FOnOpenDataSet, write=FOnOpenDataSet};
	__property TFDOpenDatasetEvent OnCloseDataSet = {read=FOnCloseDataSet, write=FOnCloseDataSet};
private:
	void *__IFDPhysSQLHandler;	// Firedac::Phys::Intf::IFDPhysSQLHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2119}
	operator Firedac::Phys::Intf::_di_IFDPhysSQLHandler()
	{
		Firedac::Phys::Intf::_di_IFDPhysSQLHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Phys::Intf::IFDPhysSQLHandler*(void) { return (Firedac::Phys::Intf::IFDPhysSQLHandler*)&__IFDPhysSQLHandler; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDAdaptedDataSet : public Firedac::Comp::Dataset::TFDDataSet
{
	typedef Firedac::Comp::Dataset::TFDDataSet inherited;
	
private:
	TFDCustomTableAdapter* FAdapter;
	Firedac::Dats::TFDDatSManager* FDatSManager;
	TFDCustomUpdateObject* FUpdateObject;
	Firedac::Dats::TFDDatSRow* FServerEditRow;
	Firedac::Stan::Option::TFDActionRequest FServerEditRequest;
	TFDExecuteErrorEvent FOnExecuteError;
	Firedac::Stan::Error::TFDErrorEvent FOnError;
	bool FUnpreparing;
	bool FForcePropertyChange;
	TFDCustomLocalSQL* FLocalSQL;
	TFDCustomEventAlerter* FChangeAlerter;
	System::UnicodeString FChangeAlertName;
	bool FContentModified;
	int FTxSupported;
	void __fastcall SetUpdateObject(TFDCustomUpdateObject* const AValue);
	void __fastcall InternalServerEdit(Firedac::Stan::Option::TFDUpdateRequest AServerEditRequest);
	TFDCustomConnection* __fastcall GetConnection(bool ACheck);
	TFDCustomConnection* __fastcall GetPointedConnection();
	void __fastcall InternalUpdateErrorHandler(System::TObject* ASender, const Firedac::Stan::Intf::_di_IFDStanObject AInitiator, System::Sysutils::Exception* &AException);
	void __fastcall InternalReconcileErrorHandler(System::TObject* ASender, Firedac::Dats::TFDDatSRow* ARow, Firedac::Dapt::Intf::TFDDAptReconcileAction &AAction);
	TFDCustomCommand* __fastcall GetCommand();
	void __fastcall InternalUpdateRecordHandler(System::TObject* ASender, Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Option::TFDUpdateRowOptions AOptions, Firedac::Stan::Intf::TFDErrorAction &AAction);
	void __fastcall SetDatSManager(Firedac::Dats::TFDDatSManager* AManager);
	void __fastcall SetLocalSQL(TFDCustomLocalSQL* const AValue);
	void __fastcall SetChangeAlerter(TFDCustomEventAlerter* const AValue);
	int __fastcall InternalPSExecuteStatement(const System::UnicodeString ASQL, Data::Db::TParams* AParams, int AMode, TFDQuery* &AResultSet);
	void __fastcall SetChangeAlertName(const System::UnicodeString AValue);
	
protected:
	Data::Db::TParams* FVclParams;
	void __fastcall SetAdapter(TFDCustomTableAdapter* AAdapter);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall InternalClose();
	virtual void __fastcall CheckOnline(bool APrepare = true);
	virtual void __fastcall ReleaseBase(bool AOffline);
	virtual void __fastcall DoDefineDatSManager();
	virtual void __fastcall DoOpenSource(bool ABlocked, bool AInfoQuery, bool AStructQuery);
	virtual bool __fastcall DoIsSourceOpen();
	virtual bool __fastcall DoIsSourceAsync();
	virtual bool __fastcall DoIsSourceOnline();
	virtual void __fastcall DoPrepareSource();
	virtual void __fastcall DoUnprepareSource();
	virtual int __fastcall DoApplyUpdates(Firedac::Dats::TFDDatSTable* ATable, int AMaxErrors);
	virtual int __fastcall DoFetch(Firedac::Dats::TFDDatSTable* ATable, bool AAll, Firedac::Comp::Dataset::TFDFetchDirection ADirection = (Firedac::Comp::Dataset::TFDFetchDirection)(0x1))/* overload */;
	virtual bool __fastcall DoFetch(Firedac::Dats::TFDDatSRow* ARow, int AColumn, Firedac::Phys::Intf::TFDPhysFillRowOptions ARowOptions)/* overload */;
	virtual void __fastcall DoMasterClearDetails(bool AAll);
	virtual void __fastcall DoMasterDefined();
	virtual void __fastcall DoMasterParamSetValues(System::Generics::Collections::TList__1<Data::Db::TField*>* AMasterFieldList);
	virtual bool __fastcall DoMasterParamDependent(System::Generics::Collections::TList__1<Data::Db::TField*>* AMasterFieldList);
	virtual void __fastcall DoCloseSource();
	virtual void __fastcall DoGetStorageMergeModes(Firedac::Stan::Intf::TFDMergeDataMode &AData, Firedac::Stan::Intf::TFDMergeMetaMode &AMeta);
	virtual void __fastcall DoResetDatSManager();
	virtual void __fastcall DoResetAtLoading();
	virtual Firedac::Dats::TFDDatSManager* __fastcall DoGetDatSManager();
	virtual System::UnicodeString __fastcall DoGetTableName();
	virtual void __fastcall DoProcessUpdateRequest(Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Option::TFDUpdateRowOptions AOptions);
	virtual void __fastcall DoExecuteSource(int ATimes, int AOffset);
	virtual void __fastcall DoCloneCursor(bool AReset, bool AKeepSettings);
	virtual Firedac::Stan::Param::TFDParams* __fastcall GetParams();
	virtual bool __fastcall DoStoredActivation();
	__property TFDCustomUpdateObject* UpdateObject = {read=FUpdateObject, write=SetUpdateObject};
	virtual Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetOptionsIntf();
	virtual void __fastcall SetOptionsIntf(const Firedac::Stan::Option::_di_IFDStanOptions AValue);
	virtual NativeUInt __fastcall GetConn();
	virtual Firedac::Phys::Intf::TFDPhysLocalSQLAdapterFeatures __fastcall GetFeatures();
	virtual bool __fastcall PSInTransaction();
	virtual void __fastcall PSStartTransaction();
	virtual void __fastcall PSEndTransaction(bool Commit);
	virtual bool __fastcall PSIsSQLBased();
	virtual bool __fastcall PSIsSQLSupported();
	virtual System::UnicodeString __fastcall PSGetQuoteChar();
	virtual Data::Db::TParams* __fastcall PSGetParams();
	virtual void __fastcall PSSetParams(Data::Db::TParams* AParams);
	virtual System::UnicodeString __fastcall PSGetCommandText();
	virtual Data::Db::TPSCommandType __fastcall PSGetCommandType();
	virtual void __fastcall PSSetCommandText(const System::UnicodeString CommandText);
	virtual int __fastcall PSExecuteStatement(const System::UnicodeString ASQL, Data::Db::TParams* AParams, void * AResultSet)/* overload */;
	virtual int __fastcall PSExecuteStatement(const System::UnicodeString ASQL, Data::Db::TParams* AParams, Data::Db::TDataSet* &AResultSet)/* overload */;
	virtual int __fastcall PSExecuteStatement(const System::UnicodeString ASQL, Data::Db::TParams* AParams)/* overload */;
	virtual void __fastcall PSGetAttributes(System::Classes::TList* AList);
	Firedac::Phys::Intf::_di_IFDPhysCommand __fastcall GetTrackCommand();
	System::UnicodeString __fastcall GetTrackEventName();
	Firedac::Dats::TFDDatSTable* __fastcall GetMergeTable();
	Firedac::Dats::TFDDatSManager* __fastcall GetMergeManager();
	bool __fastcall GetContentModified();
	void __fastcall SetContentModified(bool AValue);
	void __fastcall RefreshContent();
	void __fastcall ResyncContent();
	virtual Data::Db::TDataSetCommandStates __fastcall GetCommandStates(const System::UnicodeString ACommand);
	virtual void __fastcall ExecuteCommand(const System::UnicodeString ACommand, const System::TVarRec *AArgs, const int AArgs_High);
	
public:
	__fastcall virtual TFDAdaptedDataSet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDAdaptedDataSet();
	virtual void __fastcall AttachTable(Firedac::Dats::TFDDatSTable* ATable, Firedac::Dats::TFDDatSView* AView);
	void __fastcall NextRecordSet();
	void __fastcall GetResults();
	void __fastcall CloseStreams();
	void __fastcall AbortJob(bool AWait = false);
	virtual void __fastcall Disconnect(bool AAbortJob = false);
	void __fastcall ServerAppend();
	void __fastcall ServerEdit();
	void __fastcall ServerDelete();
	void __fastcall ServerPerform();
	void __fastcall ServerCancel();
	virtual void __fastcall ServerDeleteAll(bool ANoUndo = false);
	void __fastcall ServerSetKey();
	bool __fastcall ServerGotoKey();
	__property TFDCustomTableAdapter* Adapter = {read=FAdapter};
	__property DatSManager = {write=SetDatSManager};
	__property TFDCustomCommand* Command = {read=GetCommand};
	__property TFDCustomConnection* PointedConnection = {read=GetPointedConnection};
	__property Firedac::Stan::Option::TFDActionRequest ServerEditRequest = {read=FServerEditRequest, nodefault};
	__property TFDCustomLocalSQL* LocalSQL = {read=FLocalSQL, write=SetLocalSQL};
	__property TFDCustomEventAlerter* ChangeAlerter = {read=FChangeAlerter, write=SetChangeAlerter};
	__property System::UnicodeString ChangeAlertName = {read=FChangeAlertName, write=SetChangeAlertName};
	__property TFDExecuteErrorEvent OnExecuteError = {read=FOnExecuteError, write=FOnExecuteError};
	__property Firedac::Stan::Error::TFDErrorEvent OnError = {read=FOnError, write=FOnError};
	__property FetchOptions;
	__property FormatOptions;
	__property ResourceOptions;
	__property UpdateOptions;
private:
	void *__IFDPhysChangeHandler;	// Firedac::Phys::Intf::IFDPhysChangeHandler 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2121}
	operator Firedac::Phys::Intf::_di_IFDPhysChangeHandler()
	{
		Firedac::Phys::Intf::_di_IFDPhysChangeHandler intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Phys::Intf::IFDPhysChangeHandler*(void) { return (Firedac::Phys::Intf::IFDPhysChangeHandler*)&__IFDPhysChangeHandler; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDCustomMemTable : public TFDAdaptedDataSet
{
	typedef TFDAdaptedDataSet inherited;
	
private:
	Firedac::Stan::Option::_di_IFDStanOptions FOptionsIntf;
	void __fastcall ReadAutoCommitUpdates(System::Classes::TReader* AReader);
	bool __fastcall GetDisableStringTrim();
	bool __fastcall GetFetchOnDemand();
	bool __fastcall GetIsClone();
	bool __fastcall GetLogChanges();
	bool __fastcall GetProviderEOF();
	bool __fastcall GetReadOnly();
	Firedac::Comp::Dataset::TFDUpdateRecordTypes __fastcall GetStatusFilter();
	System::UnicodeString __fastcall GetXMLData();
	void __fastcall SetDisableStringTrim(const bool AValue);
	void __fastcall SetFetchOnDemand(const bool AValue);
	void __fastcall SetLogChanges(const bool AValue);
	void __fastcall SetProviderEOF(const bool AValue);
	void __fastcall SetReadOnly(const bool AValue);
	void __fastcall SetStatusFilter(const Firedac::Comp::Dataset::TFDUpdateRecordTypes AValue);
	void __fastcall SetXMLData(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetCommandText();
	void __fastcall SetCommandText(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetFileName();
	int __fastcall GetPacketRecords();
	void __fastcall SetFileName(const System::UnicodeString AValue);
	void __fastcall SetPacketRecords(const int AValue);
	Firedac::Dats::TFDDatSTable* __fastcall GetOptionalParamTab();
	
protected:
	bool FStoreDefs;
	virtual void __fastcall DefineProperties(System::Classes::TFiler* AFiler);
	virtual void __fastcall DefChanged(System::TObject* ASender);
	virtual bool __fastcall GetExists();
	virtual bool __fastcall SaveToDFM(Firedac::Comp::Dataset::TFDDataSet* const AAncestor);
	__property bool StoreDefs = {read=FStoreDefs, write=FStoreDefs, default=0};
	virtual Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetOptionsIntf();
	void __fastcall GetParentOptions(Firedac::Stan::Option::_di_IFDStanOptions &AOpts);
	
public:
	__fastcall virtual TFDCustomMemTable(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDCustomMemTable();
	__property Adapter = {write=SetAdapter};
	void __fastcall AppendData(const Firedac::Comp::Dataset::_di_IFDDataSetReference AData, bool AHitEOF = true);
	bool __fastcall ConstraintsDisabled();
	void __fastcall MergeChangeLog();
	System::Variant __fastcall GetOptionalParam(const System::UnicodeString AParamName);
	virtual void __fastcall SetOptionalParam(const System::UnicodeString AParamName, const System::Variant &AValue, bool AIncludeInDelta = false);
	__property bool IsClone = {read=GetIsClone, nodefault};
	__property System::UnicodeString CommandText = {read=GetCommandText, write=SetCommandText};
	__property bool DisableStringTrim = {read=GetDisableStringTrim, write=SetDisableStringTrim, nodefault};
	__property bool FetchOnDemand = {read=GetFetchOnDemand, write=SetFetchOnDemand, nodefault};
	__property System::UnicodeString FileName = {read=GetFileName, write=SetFileName};
	__property bool LogChanges = {read=GetLogChanges, write=SetLogChanges, nodefault};
	__property int PacketRecords = {read=GetPacketRecords, write=SetPacketRecords, nodefault};
	__property bool ProviderEOF = {read=GetProviderEOF, write=SetProviderEOF, nodefault};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, nodefault};
	__property Firedac::Comp::Dataset::TFDUpdateRecordTypes StatusFilter = {read=GetStatusFilter, write=SetStatusFilter, nodefault};
	__property System::UnicodeString XMLData = {read=GetXMLData, write=SetXMLData};
};


class PASCALIMPLEMENTATION TFDMemTable : public TFDCustomMemTable
{
	typedef TFDCustomMemTable inherited;
	
__published:
	__property ActiveStoredUsage = {default=3};
	__property Active = {default=0};
	__property AutoCalcFields = {default=1};
	__property BeforeOpen;
	__property AfterOpen;
	__property BeforeClose;
	__property AfterClose;
	__property BeforeInsert;
	__property AfterInsert;
	__property BeforeEdit;
	__property AfterEdit;
	__property BeforePost;
	__property AfterPost;
	__property BeforeCancel;
	__property AfterCancel;
	__property BeforeDelete;
	__property AfterDelete;
	__property BeforeScroll;
	__property AfterScroll;
	__property BeforeRefresh;
	__property AfterRefresh;
	__property OnCalcFields;
	__property OnDeleteError;
	__property OnEditError;
	__property OnNewRecord;
	__property OnPostError;
	__property FieldOptions;
	__property Filtered = {default=0};
	__property FilterOptions = {default=0};
	__property Filter = {default=0};
	__property OnFilterRecord;
	__property ObjectView = {default=1};
	__property Constraints;
	__property DataSetField;
	__property FieldDefs = {stored=FStoreDefs};
	__property CachedUpdates = {default=0};
	__property FilterChanges = {default=11};
	__property IndexDefs = {stored=FStoreDefs};
	__property Indexes;
	__property IndexesActive = {default=1};
	__property IndexName = {default=0};
	__property IndexFieldNames = {default=0};
	__property Aggregates;
	__property AggregatesActive = {default=0};
	__property ConstraintsEnabled = {default=0};
	__property MasterSource;
	__property MasterFields = {default=0};
	__property DetailFields = {default=0};
	__property OnUpdateRecord;
	__property OnUpdateError;
	__property OnReconcileError;
	__property BeforeApplyUpdates;
	__property AfterApplyUpdates;
	__property BeforeGetRecords;
	__property AfterGetRecords;
	__property AfterGetRecord;
	__property BeforeRowRequest;
	__property AfterRowRequest;
	__property BeforeExecute;
	__property AfterExecute;
	__property FetchOptions;
	__property FormatOptions;
	__property ResourceOptions;
	__property UpdateOptions;
	__property LocalSQL;
	__property ChangeAlerter;
	__property ChangeAlertName = {default=0};
	__property Adapter;
	__property StoreDefs = {default=0};
public:
	/* TFDCustomMemTable.Create */ inline __fastcall virtual TFDMemTable(System::Classes::TComponent* AOwner) : TFDCustomMemTable(AOwner) { }
	/* TFDCustomMemTable.Destroy */ inline __fastcall virtual ~TFDMemTable() { }
	
};


class PASCALIMPLEMENTATION TFDRdbmsDataSet : public TFDAdaptedDataSet
{
	typedef TFDAdaptedDataSet inherited;
	
private:
	bool FStreamedPrepared;
	HIDESBASE TFDCustomConnection* __fastcall GetConnection();
	System::UnicodeString __fastcall GetConnectionName();
	void __fastcall SetConnection(TFDCustomConnection* const AValue);
	void __fastcall SetConnectionName(const System::UnicodeString AValue);
	bool __fastcall GetPrepared();
	void __fastcall SetPrepared(const bool AValue);
	bool __fastcall IsCNNS();
	bool __fastcall IsCNS();
	Firedac::Stan::Error::TFDErrorEvent __fastcall GetOnError();
	void __fastcall SetOnError(const Firedac::Stan::Error::TFDErrorEvent AValue);
	Firedac::Stan::Param::TFDParamBindMode __fastcall GetParamBindMode();
	void __fastcall SetParamBindMode(const Firedac::Stan::Param::TFDParamBindMode AValue);
	System::Classes::TNotifyEvent __fastcall GetOnCommandChanged();
	void __fastcall SetOnCommandChanged(const System::Classes::TNotifyEvent AValue);
	int __fastcall GetMacrosCount();
	Firedac::Stan::Param::TFDMacros* __fastcall GetMacros();
	void __fastcall SetMacros(Firedac::Stan::Param::TFDMacros* const AValue);
	bool __fastcall IsPS();
#ifndef _WIN64
	int __fastcall GetRowsAffected();
#else /* _WIN64 */
	__int64 __fastcall GetRowsAffected();
#endif /* _WIN64 */
	TFDCustomTransaction* __fastcall GetTransaction();
	TFDCustomTransaction* __fastcall GetUpdateTransaction();
	TFDCustomSchemaAdapter* __fastcall GetSchemaAdapter();
	void __fastcall SetSchemaAdapter(TFDCustomSchemaAdapter* const AValue);
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* AFiler);
	virtual void __fastcall InternalClose();
	virtual void __fastcall OpenCursor(bool InfoQuery);
	virtual void __fastcall CheckCachedUpdatesMode();
	virtual void __fastcall ReleaseBase(bool AOffline);
	virtual void __fastcall DoAfterOpenOrExecute();
	virtual Data::Db::TPSCommandType __fastcall PSGetCommandType();
	virtual TFDCustomTableAdapter* __fastcall InternalCreateAdapter();
	virtual void __fastcall SetTransaction(TFDCustomTransaction* const AValue);
	virtual void __fastcall SetUpdateTransaction(TFDCustomTransaction* const AValue);
	__property Firedac::Stan::Param::TFDParamBindMode ParamBindMode = {read=GetParamBindMode, write=SetParamBindMode, default=0};
	__property Firedac::Stan::Param::TFDMacros* Macros = {read=GetMacros, write=SetMacros, stored=false};
	__property int MacroCount = {read=GetMacrosCount, nodefault};
#ifndef _WIN64
	__property int RowsAffected = {read=GetRowsAffected, nodefault};
#else /* _WIN64 */
	__property __int64 RowsAffected = {read=GetRowsAffected};
#endif /* _WIN64 */
	
public:
	__fastcall virtual TFDRdbmsDataSet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDRdbmsDataSet();
	virtual void __fastcall Disconnect(bool AAbortJob = false);
	void __fastcall Prepare();
	void __fastcall Unprepare();
	HIDESBASE void __fastcall Open(const System::UnicodeString ASQL)/* overload */;
	HIDESBASE void __fastcall Open(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High)/* overload */;
	HIDESBASE void __fastcall Open(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High)/* overload */;
	Firedac::Stan::Param::TFDMacro* __fastcall MacroByName(const System::UnicodeString AValue);
	Firedac::Stan::Param::TFDMacro* __fastcall FindMacro(const System::UnicodeString AValue);
	__property System::UnicodeString ConnectionName = {read=GetConnectionName, write=SetConnectionName, stored=IsCNNS};
	__property TFDCustomConnection* Connection = {read=GetConnection, write=SetConnection, stored=IsCNS};
	__property bool Prepared = {read=GetPrepared, write=SetPrepared, stored=IsPS, default=0};
	__property TFDCustomTransaction* Transaction = {read=GetTransaction, write=SetTransaction};
	__property TFDCustomTransaction* UpdateTransaction = {read=GetUpdateTransaction, write=SetUpdateTransaction};
	__property TFDCustomSchemaAdapter* SchemaAdapter = {read=GetSchemaAdapter, write=SetSchemaAdapter};
	__property Firedac::Stan::Error::TFDErrorEvent OnError = {read=GetOnError, write=SetOnError};
	__property System::Classes::TNotifyEvent OnCommandChanged = {read=GetOnCommandChanged, write=SetOnCommandChanged};
	__property Params;
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  Open(){ Data::Db::TDataSet::Open(); }
	
};


class PASCALIMPLEMENTATION TFDUpdateSQL : public TFDCustomUpdateObject
{
	typedef TFDCustomUpdateObject inherited;
	
private:
	System::StaticArray<TFDCustomCommand*, 6> FCommands;
	System::UnicodeString FConnectionName;
	TFDCustomConnection* FConnection;
	System::Classes::TStrings* __fastcall GetSQL(const int AIndex);
	void __fastcall SetSQL(const int AIndex, System::Classes::TStrings* const AValue);
	TFDCustomCommand* __fastcall GetCommand(Firedac::Stan::Option::TFDUpdateRequest ARequest);
	System::Classes::TStrings* __fastcall GetURSQL(Firedac::Stan::Option::TFDUpdateRequest ARequest);
	void __fastcall SetURSQL(Firedac::Stan::Option::TFDUpdateRequest ARequest, System::Classes::TStrings* const Value);
	void __fastcall SetConnection(TFDCustomConnection* const Value);
	void __fastcall SetConnectionName(const System::UnicodeString Value);
	void __fastcall UpdateAdapter();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation AOperation);
	virtual void __fastcall AttachToAdapter();
	virtual void __fastcall DetachFromAdapter();
	
public:
	__fastcall virtual TFDUpdateSQL(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDUpdateSQL();
	virtual void __fastcall Apply(Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AOptions);
	__property TFDCustomCommand* Commands[Firedac::Stan::Option::TFDUpdateRequest ARequest] = {read=GetCommand};
	__property System::Classes::TStrings* SQL[Firedac::Stan::Option::TFDUpdateRequest ARequest] = {read=GetURSQL, write=SetURSQL};
	
__published:
	__property TFDCustomConnection* Connection = {read=FConnection, write=SetConnection};
	__property System::UnicodeString ConnectionName = {read=FConnectionName, write=SetConnectionName};
	__property System::Classes::TStrings* InsertSQL = {read=GetSQL, write=SetSQL, index=0};
	__property System::Classes::TStrings* ModifySQL = {read=GetSQL, write=SetSQL, index=1};
	__property System::Classes::TStrings* DeleteSQL = {read=GetSQL, write=SetSQL, index=2};
	__property System::Classes::TStrings* LockSQL = {read=GetSQL, write=SetSQL, index=3};
	__property System::Classes::TStrings* UnlockSQL = {read=GetSQL, write=SetSQL, index=4};
	__property System::Classes::TStrings* FetchRowSQL = {read=GetSQL, write=SetSQL, index=5};
};


class PASCALIMPLEMENTATION TFDCustomQuery : public TFDRdbmsDataSet
{
	typedef TFDRdbmsDataSet inherited;
	
private:
	void __fastcall SetSQL(System::Classes::TStrings* const AValue);
	System::Classes::TStrings* __fastcall GetSQL();
	System::UnicodeString __fastcall GetText();
	Data::Db::TDataSource* __fastcall GetDS();
	void __fastcall SetDS(Data::Db::TDataSource* const AValue);
	HIDESBASE void __fastcall ReadDataSource(System::Classes::TReader* AReader);
	void __fastcall ReadCommandText(System::Classes::TReader* AReader);
	
protected:
	virtual void __fastcall UpdateRecordCount();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* AFiler);
	
public:
	__fastcall virtual TFDCustomQuery(System::Classes::TComponent* AOwner);
	void __fastcall ExecSQL()/* overload */;
	int __fastcall ExecSQL(bool AExecDirect)/* overload */;
	int __fastcall ExecSQL(const System::UnicodeString ASQL)/* overload */;
	int __fastcall ExecSQL(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High)/* overload */;
	int __fastcall ExecSQL(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High)/* overload */;
	__property System::Classes::TStrings* SQL = {read=GetSQL, write=SetSQL};
	__property System::UnicodeString Text = {read=GetText};
	__property ParamCount;
	__property Data::Db::TDataSource* DataSource = {read=GetDS, write=SetDS};
public:
	/* TFDRdbmsDataSet.Destroy */ inline __fastcall virtual ~TFDCustomQuery() { }
	
};


class PASCALIMPLEMENTATION TFDQuery : public TFDCustomQuery
{
	typedef TFDCustomQuery inherited;
	
public:
	__property RowsAffected;
	__property MacroCount;
	
__published:
	__property ActiveStoredUsage = {default=3};
	__property Active = {default=0};
	__property AutoCalcFields = {default=1};
	__property BeforeOpen;
	__property AfterOpen;
	__property BeforeClose;
	__property AfterClose;
	__property BeforeInsert;
	__property AfterInsert;
	__property BeforeEdit;
	__property AfterEdit;
	__property BeforePost;
	__property AfterPost;
	__property BeforeCancel;
	__property AfterCancel;
	__property BeforeDelete;
	__property AfterDelete;
	__property BeforeScroll;
	__property AfterScroll;
	__property BeforeRefresh;
	__property AfterRefresh;
	__property OnCalcFields;
	__property OnDeleteError;
	__property OnEditError;
	__property OnNewRecord;
	__property OnPostError;
	__property FieldOptions;
	__property Filtered = {default=0};
	__property FilterOptions = {default=0};
	__property Filter = {default=0};
	__property OnFilterRecord;
	__property ObjectView = {default=1};
	__property Constraints;
	__property CachedUpdates = {default=0};
	__property FilterChanges = {default=11};
	__property Indexes;
	__property IndexesActive = {default=1};
	__property IndexName = {default=0};
	__property IndexFieldNames = {default=0};
	__property Aggregates;
	__property AggregatesActive = {default=0};
	__property ConstraintsEnabled = {default=0};
	__property MasterSource;
	__property MasterFields = {default=0};
	__property DetailFields = {default=0};
	__property OnUpdateRecord;
	__property OnUpdateError;
	__property OnReconcileError;
	__property BeforeExecute;
	__property AfterExecute;
	__property BeforeApplyUpdates;
	__property AfterApplyUpdates;
	__property BeforeGetRecords;
	__property AfterGetRecords;
	__property AfterGetRecord;
	__property BeforeRowRequest;
	__property AfterRowRequest;
	__property OnMasterSetValues;
	__property LocalSQL;
	__property ChangeAlerter;
	__property ChangeAlertName = {default=0};
	__property ConnectionName = {default=0};
	__property Connection;
	__property Transaction;
	__property UpdateTransaction;
	__property SchemaAdapter;
	__property Params;
	__property FetchOptions;
	__property FormatOptions;
	__property ResourceOptions;
	__property UpdateOptions;
	__property UpdateObject;
	__property OnError;
	__property OnExecuteError;
	__property OnCommandChanged;
	__property SQL;
	__property Macros;
public:
	/* TFDCustomQuery.Create */ inline __fastcall virtual TFDQuery(System::Classes::TComponent* AOwner) : TFDCustomQuery(AOwner) { }
	
public:
	/* TFDRdbmsDataSet.Destroy */ inline __fastcall virtual ~TFDQuery() { }
	
};


class PASCALIMPLEMENTATION TFDTable : public TFDCustomQuery
{
	typedef TFDCustomQuery inherited;
	
private:
	int FWindowSize;
	bool FServerCursor;
	System::UnicodeString FTableName;
	bool FExclusive;
	System::UnicodeString FCatalogName;
	System::UnicodeString FSchemaName;
	Firedac::Phys::Intf::TFDPhysTableParams FTableParams;
	bool FWindowOperation;
	System::UnicodeString FPrimaryKeyFields;
	bool FResetIndexFieldNames;
	bool FIndexFieldChanged;
	void __fastcall MoveData(Firedac::Dats::TFDDatSTable* ATableSrc, Firedac::Dats::TFDDatSTable* ATableDst);
	void __fastcall TableChanged();
	void __fastcall SetTableName(const System::UnicodeString AValue);
	void __fastcall SetCatalogName(const System::UnicodeString AValue);
	void __fastcall SetSchemaName(const System::UnicodeString AValue);
	unsigned __fastcall GetColSize(Firedac::Dats::TFDDatSColumn* ACol);
	unsigned __fastcall GetBookmarkColSize(Firedac::Dats::TFDDatSColumn* ACol);
	System::UnicodeString __fastcall Bookmark2Fields(const void * ABookmark, void * &ADataPtr);
	System::Variant __fastcall Bookmark2Key(const void * ABookmark, bool APKOnly = false);
	bool __fastcall InternalBookmarkValid(void * ABookmark);
	void __fastcall ParseIndexFields(/* out */ System::UnicodeString &AOrderFields, /* out */ System::UnicodeString &ADescFields, /* out */ System::UnicodeString &ANoCaseFields, /* out */ System::UnicodeString &AExpression);
	System::UnicodeString __fastcall GetActualIndexFields();
	bool __fastcall AllIndexFieldNull(const int ARowIndex = 0x0);
	void __fastcall ClearTableButCurrent();
	void __fastcall UpdateLocalIndexName();
	void __fastcall SetupTable();
	Firedac::Dats::TFDDatSRowListBase* __fastcall GetWindowedRows();
	System::UnicodeString __fastcall GetFullTableName();
	
protected:
	bool FAdjustIndexes;
	virtual TFDCustomTableAdapter* __fastcall InternalCreateAdapter();
	virtual void __fastcall DoCachedUpdatesChanged();
	virtual bool __fastcall DoIsSourceOpen();
	virtual void __fastcall OpenCursor(bool AInfoQuery);
	virtual void __fastcall ReleaseBase(bool AOffline);
	virtual unsigned __fastcall CalcBookmarkSize();
#ifndef _WIN64
	virtual void __fastcall GetBookmarkData(NativeInt Buffer, System::DynamicArray<System::Byte> Data)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall GetBookmarkData(NativeInt Buffer, System::TArray__1<System::Byte> Data)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall InternalGotoBookmark(void * ABookmark)/* overload */;
#ifndef _WIN64
	virtual void __fastcall InternalGotoBookmark(System::DynamicArray<System::Byte> Bookmark)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall InternalGotoBookmark(System::TArray__1<System::Byte> Bookmark)/* overload */;
#endif /* _WIN64 */
	virtual System::UnicodeString __fastcall DoAdjustSortFields(const System::UnicodeString AFields, const System::UnicodeString AExpression, Firedac::Stan::Intf::TFDSortOptions &AIndexOptions);
	virtual void __fastcall DoSortOrderChanging();
	virtual void __fastcall DoSortOrderChanged();
	virtual void __fastcall UpdateIndexDefs();
	virtual void __fastcall DoFilteringUpdated(bool AResync);
	virtual int __fastcall DoPurge(Firedac::Dats::TFDDatSView* AView, Firedac::Comp::Dataset::TFDFetchDirection ADirection = (Firedac::Comp::Dataset::TFDFetchDirection)(0x1));
	virtual int __fastcall DoFetch(Firedac::Dats::TFDDatSTable* ATable, bool AAll, Firedac::Comp::Dataset::TFDFetchDirection ADirection = (Firedac::Comp::Dataset::TFDFetchDirection)(0x1))/* overload */;
	virtual void __fastcall InternalFirst();
	virtual void __fastcall InternalLast();
	virtual int __fastcall InternalDefaultKeyFieldCount(Firedac::Comp::Dataset::PFDKeyBuffer ABuffer, int ADefault);
	virtual bool __fastcall InternalGotoKey(bool ANearest);
	virtual bool __fastcall GetCanRefresh();
	virtual void __fastcall InternalRefresh();
	virtual void __fastcall InternalDelete();
#ifndef _WIN64
	virtual void __fastcall SetFieldData(Data::Db::TField* AField, System::DynamicArray<System::Byte> ABuffer)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall SetFieldData(Data::Db::TField* AField, System::TArray__1<System::Byte> ABuffer)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall InternalAddRecord(NativeInt Buffer, bool Append)/* overload */;
	virtual void __fastcall InternalPost();
	virtual void __fastcall InternalCancel();
	virtual void __fastcall InternalResetRange();
	virtual int __fastcall GetRecNo();
	virtual void __fastcall InternalSetRecNo(int AValue);
	virtual void __fastcall SetRecNo(int AValue);
	virtual int __fastcall GetRecordCount();
	virtual void __fastcall DoMasterDefined();
	virtual void __fastcall DoMasterReset();
	virtual void __fastcall MasterChanged(System::TObject* Sender);
	virtual void __fastcall CheckMasterRange();
	virtual bool __fastcall GetExists();
	virtual void __fastcall SaveToStorage(const System::UnicodeString AFileName, System::Classes::TStream* AStream, Firedac::Stan::Intf::TFDStorageFormat AFormat);
	bool __fastcall UpdateCursorKind();
	virtual System::UnicodeString __fastcall GetCustomWhere();
	void __fastcall FetchWindow(/* out */ int &AFetched, bool APrepOnly = false, bool AForceClear = false, Firedac::Dats::TFDDatSTable* ATable = (Firedac::Dats::TFDDatSTable*)(0x0));
	bool __fastcall InternalSearch(Firedac::Dats::TFDDatSTable* ATable, const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, const System::UnicodeString AExpression = System::UnicodeString(), const System::UnicodeString AResultFields = System::UnicodeString(), Firedac::Comp::Dataset::TFDDataSetLocateOptions AOptions = Firedac::Comp::Dataset::TFDDataSetLocateOptions() );
	bool __fastcall InternalLocateEx(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, const System::UnicodeString AExpression = System::UnicodeString(), Firedac::Comp::Dataset::TFDDataSetLocateOptions AOptions = Firedac::Comp::Dataset::TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0));
	System::Variant __fastcall InternalLookupEx(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, const System::UnicodeString AExpression, const System::UnicodeString AResultFields, Firedac::Comp::Dataset::TFDDataSetLocateOptions AOptions = Firedac::Comp::Dataset::TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0));
	virtual System::UnicodeString __fastcall PSGetTableName();
	virtual System::UnicodeString __fastcall PSGetCommandText();
	virtual Data::Db::TPSCommandType __fastcall PSGetCommandType();
	virtual void __fastcall PSSetCommandText(const System::UnicodeString ACommandText);
	
public:
	__fastcall virtual TFDTable(System::Classes::TComponent* AOwner);
	virtual bool __fastcall IsSequenced();
	HIDESBASE void __fastcall Open(const System::UnicodeString ATableName)/* overload */;
	virtual void __fastcall Disconnect(bool AAbortJob = false);
#ifndef _WIN64
	virtual bool __fastcall BookmarkValid(System::DynamicArray<System::Byte> ABookmark);
	virtual int __fastcall CompareBookmarks(System::DynamicArray<System::Byte> Bookmark1, System::DynamicArray<System::Byte> Bookmark2);
#else /* _WIN64 */
	virtual bool __fastcall BookmarkValid(System::TArray__1<System::Byte> ABookmark);
	virtual int __fastcall CompareBookmarks(System::TArray__1<System::Byte> Bookmark1, System::TArray__1<System::Byte> Bookmark2);
#endif /* _WIN64 */
	System::UnicodeString __fastcall GenerateSQL();
	void __fastcall RefireSQL();
	virtual System::Variant __fastcall LookupEx(const System::UnicodeString AExpression, const System::UnicodeString AResultFields, Firedac::Comp::Dataset::TFDDataSetLocateOptions AOptions = Firedac::Comp::Dataset::TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0))/* overload */;
	virtual System::Variant __fastcall LookupEx(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, const System::UnicodeString AResultFields, Firedac::Comp::Dataset::TFDDataSetLocateOptions AOptions = Firedac::Comp::Dataset::TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0))/* overload */;
	virtual bool __fastcall LocateEx(const System::UnicodeString AExpression, Firedac::Comp::Dataset::TFDDataSetLocateOptions AOptions = Firedac::Comp::Dataset::TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0))/* overload */;
	virtual bool __fastcall LocateEx(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, Firedac::Comp::Dataset::TFDDataSetLocateOptions AOptions = Firedac::Comp::Dataset::TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0))/* overload */;
	void __fastcall RefreshMetadata();
	void __fastcall CreateTable(bool ARecreate = true, Firedac::Phys::Intf::TFDPhysCreateTableParts AParts = (Firedac::Phys::Intf::TFDPhysCreateTableParts() << Firedac::Phys::Intf::Firedac_Phys_Intf__5::tpTable << Firedac::Phys::Intf::Firedac_Phys_Intf__5::tpGenerators << Firedac::Phys::Intf::Firedac_Phys_Intf__5::tpTriggers << Firedac::Phys::Intf::Firedac_Phys_Intf__5::tpPrimaryKey << Firedac::Phys::Intf::Firedac_Phys_Intf__5::tpIndexes ));
	virtual void __fastcall CreateDataSet();
	__property System::UnicodeString ActualIndexFieldNames = {read=GetActualIndexFields};
	__property System::UnicodeString FullTableName = {read=GetFullTableName};
	
__published:
	__property ActiveStoredUsage = {default=3};
	__property Active = {default=0};
	__property AutoCalcFields = {default=1};
	__property BeforeOpen;
	__property AfterOpen;
	__property BeforeClose;
	__property AfterClose;
	__property BeforeInsert;
	__property AfterInsert;
	__property BeforeEdit;
	__property AfterEdit;
	__property BeforePost;
	__property AfterPost;
	__property BeforeCancel;
	__property AfterCancel;
	__property BeforeDelete;
	__property AfterDelete;
	__property BeforeScroll;
	__property AfterScroll;
	__property BeforeRefresh;
	__property AfterRefresh;
	__property OnCalcFields;
	__property OnDeleteError;
	__property OnEditError;
	__property OnNewRecord;
	__property OnPostError;
	__property FieldOptions;
	__property Filtered = {default=0};
	__property FilterOptions = {default=0};
	__property Filter = {default=0};
	__property OnFilterRecord;
	__property ObjectView = {default=1};
	__property Constraints;
	__property CachedUpdates = {default=0};
	__property FilterChanges = {default=11};
	__property IndexName = {default=0};
	__property IndexFieldNames = {default=0};
	__property Aggregates;
	__property AggregatesActive = {default=0};
	__property ConstraintsEnabled = {default=0};
	__property MasterSource;
	__property MasterFields = {default=0};
	__property DetailFields = {default=0};
	__property OnUpdateRecord;
	__property OnUpdateError;
	__property OnReconcileError;
	__property BeforeApplyUpdates;
	__property AfterApplyUpdates;
	__property BeforeGetRecords;
	__property AfterGetRecords;
	__property AfterGetRecord;
	__property BeforeRowRequest;
	__property AfterRowRequest;
	__property LocalSQL;
	__property ChangeAlerter;
	__property ChangeAlertName = {default=0};
	__property ConnectionName = {default=0};
	__property Connection;
	__property Transaction;
	__property UpdateTransaction;
	__property SchemaAdapter;
	__property FetchOptions;
	__property FormatOptions;
	__property ResourceOptions;
	__property UpdateOptions;
	__property UpdateObject;
	__property OnError;
	__property OnExecuteError;
	__property OnCommandChanged;
	__property bool Exclusive = {read=FExclusive, write=FExclusive, default=0};
	__property System::UnicodeString CatalogName = {read=FCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=FSchemaName, write=SetSchemaName};
	__property System::UnicodeString TableName = {read=FTableName, write=SetTableName};
public:
	/* TFDRdbmsDataSet.Destroy */ inline __fastcall virtual ~TFDTable() { }
	
	/* Hoisted overloads: */
	
protected:
#ifndef _WIN64
	inline void __fastcall  GetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::DynamicArray<System::Byte> Data){ Data::Db::TDataSet::GetBookmarkData(Buffer, Data); }
#else /* _WIN64 */
	inline void __fastcall  GetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::TArray__1<System::Byte> Data){ Data::Db::TDataSet::GetBookmarkData(Buffer, Data); }
#endif /* _WIN64 */
	inline void __fastcall  GetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, void * Data){ Data::Db::TDataSet::GetBookmarkData(Buffer, Data); }
	inline bool __fastcall  DoFetch(Firedac::Dats::TFDDatSRow* ARow, int AColumn, Firedac::Phys::Intf::TFDPhysFillRowOptions ARowOptions){ return TFDAdaptedDataSet::DoFetch(ARow, AColumn, ARowOptions); }
#ifndef _WIN64
	inline void __fastcall  SetFieldData(Data::Db::TField* Field, System::DynamicArray<System::Byte> Buffer, bool NativeFormat){ Data::Db::TDataSet::SetFieldData(Field, Buffer, NativeFormat); }
#else /* _WIN64 */
	inline void __fastcall  SetFieldData(Data::Db::TField* Field, System::TArray__1<System::Byte> Buffer, bool NativeFormat){ Data::Db::TDataSet::SetFieldData(Field, Buffer, NativeFormat); }
#endif /* _WIN64 */
	inline void __fastcall  SetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (Data::Db::TField* Field, void * Buffer){ Data::Db::TDataSet::SetFieldData(Field, Buffer); }
	inline void __fastcall  SetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (Data::Db::TField* Field, void * Buffer, bool NativeFormat){ Data::Db::TDataSet::SetFieldData(Field, Buffer, NativeFormat); }
	inline void __fastcall  InternalAddRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, bool Append){ Data::Db::TDataSet::InternalAddRecord(Buffer, Append); }
	inline void __fastcall  InternalAddRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer, bool Append){ Data::Db::TDataSet::InternalAddRecord(Buffer, Append); }
	
public:
	inline void __fastcall  Open(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High){ TFDRdbmsDataSet::Open(ASQL, AParams, AParams_High); }
	inline void __fastcall  Open(const System::UnicodeString ASQL, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High){ TFDRdbmsDataSet::Open(ASQL, AParams, AParams_High, ATypes, ATypes_High); }
	inline void __fastcall  Open(){ Data::Db::TDataSet::Open(); }
	
};


class PASCALIMPLEMENTATION TFDCustomStoredProc : public TFDRdbmsDataSet
{
	typedef TFDRdbmsDataSet inherited;
	
private:
	void __fastcall SetOverload(const System::Word AValue);
	void __fastcall SetProcName(const System::UnicodeString AValue);
	System::Word __fastcall GetOverload();
	System::UnicodeString __fastcall GetProcName();
	System::UnicodeString __fastcall GetPackageName();
	System::UnicodeString __fastcall GetSchemaName();
	void __fastcall SetPackageName(const System::UnicodeString AValue);
	void __fastcall SetSchemaName(const System::UnicodeString AValue);
	void __fastcall ProcNameChanged();
	System::UnicodeString __fastcall GetCatalogName();
	void __fastcall SetCatalogName(const System::UnicodeString AValue);
	void __fastcall ExecProcBase(const System::UnicodeString AProcName, bool AFunction, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High);
	System::Variant __fastcall GetFuncResult();
	
protected:
	virtual TFDCustomTableAdapter* __fastcall InternalCreateAdapter();
	
public:
	bool __fastcall DescriptionsAvailable();
	void __fastcall ExecProc()/* overload */;
	int __fastcall ExecProc(const System::UnicodeString AProcName)/* overload */;
	int __fastcall ExecProc(const System::UnicodeString AProcName, const System::Variant *AParams, const int AParams_High)/* overload */;
	int __fastcall ExecProc(const System::UnicodeString AProcName, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High)/* overload */;
	System::Variant __fastcall ExecFunc()/* overload */;
	System::Variant __fastcall ExecFunc(const System::UnicodeString AProcName)/* overload */;
	System::Variant __fastcall ExecFunc(const System::UnicodeString AProcName, const System::Variant *AParams, const int AParams_High)/* overload */;
	System::Variant __fastcall ExecFunc(const System::UnicodeString AProcName, const System::Variant *AParams, const int AParams_High, const Data::Db::TFieldType *ATypes, const int ATypes_High)/* overload */;
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString PackageName = {read=GetPackageName, write=SetPackageName};
	__property System::UnicodeString StoredProcName = {read=GetProcName, write=SetProcName};
	__property System::Word Overload = {read=GetOverload, write=SetOverload, default=0};
	__property ParamCount;
	__property RowsAffected;
public:
	/* TFDRdbmsDataSet.Create */ inline __fastcall virtual TFDCustomStoredProc(System::Classes::TComponent* AOwner) : TFDRdbmsDataSet(AOwner) { }
	/* TFDRdbmsDataSet.Destroy */ inline __fastcall virtual ~TFDCustomStoredProc() { }
	
};


class PASCALIMPLEMENTATION TFDStoredProc : public TFDCustomStoredProc
{
	typedef TFDCustomStoredProc inherited;
	
__published:
	__property ActiveStoredUsage = {default=3};
	__property Active = {default=0};
	__property AutoCalcFields = {default=1};
	__property BeforeOpen;
	__property AfterOpen;
	__property BeforeClose;
	__property AfterClose;
	__property BeforeInsert;
	__property AfterInsert;
	__property BeforeEdit;
	__property AfterEdit;
	__property BeforePost;
	__property AfterPost;
	__property BeforeCancel;
	__property AfterCancel;
	__property BeforeDelete;
	__property AfterDelete;
	__property BeforeScroll;
	__property AfterScroll;
	__property BeforeRefresh;
	__property AfterRefresh;
	__property OnCalcFields;
	__property OnDeleteError;
	__property OnEditError;
	__property OnNewRecord;
	__property OnPostError;
	__property FieldOptions;
	__property Filtered = {default=0};
	__property FilterOptions = {default=0};
	__property Filter = {default=0};
	__property OnFilterRecord;
	__property ObjectView = {default=1};
	__property Constraints;
	__property CachedUpdates = {default=0};
	__property FilterChanges = {default=11};
	__property Indexes;
	__property IndexesActive = {default=1};
	__property IndexName = {default=0};
	__property IndexFieldNames = {default=0};
	__property Aggregates;
	__property AggregatesActive = {default=0};
	__property ConstraintsEnabled = {default=0};
	__property MasterSource;
	__property MasterFields = {default=0};
	__property DetailFields = {default=0};
	__property OnUpdateRecord;
	__property OnUpdateError;
	__property OnReconcileError;
	__property BeforeExecute;
	__property AfterExecute;
	__property BeforeApplyUpdates;
	__property AfterApplyUpdates;
	__property BeforeGetRecords;
	__property AfterGetRecords;
	__property AfterGetRecord;
	__property BeforeRowRequest;
	__property AfterRowRequest;
	__property LocalSQL;
	__property ChangeAlerter;
	__property ChangeAlertName = {default=0};
	__property ConnectionName = {default=0};
	__property Connection;
	__property Transaction;
	__property UpdateTransaction;
	__property SchemaAdapter;
	__property Params;
	__property FetchOptions;
	__property FormatOptions;
	__property ResourceOptions;
	__property UpdateOptions;
	__property UpdateObject;
	__property OnError;
	__property OnExecuteError;
	__property OnCommandChanged;
	__property ParamBindMode = {default=0};
	__property CatalogName = {default=0};
	__property SchemaName = {default=0};
	__property PackageName = {default=0};
	__property StoredProcName = {default=0};
	__property Overload = {default=0};
public:
	/* TFDRdbmsDataSet.Create */ inline __fastcall virtual TFDStoredProc(System::Classes::TComponent* AOwner) : TFDCustomStoredProc(AOwner) { }
	/* TFDRdbmsDataSet.Destroy */ inline __fastcall virtual ~TFDStoredProc() { }
	
};


class PASCALIMPLEMENTATION TFDMetaInfoQuery : public TFDRdbmsDataSet
{
	typedef TFDRdbmsDataSet inherited;
	
private:
	Firedac::Phys::Intf::TFDPhysMetaInfoKind __fastcall GetMetaInfoKind();
	System::UnicodeString __fastcall GetObjectName();
	Firedac::Phys::Intf::TFDPhysTableKinds __fastcall GetTableKinds();
	System::UnicodeString __fastcall GetWildcard();
	void __fastcall SetMetaInfoKind(const Firedac::Phys::Intf::TFDPhysMetaInfoKind AValue);
	void __fastcall SetObjectName(const System::UnicodeString AValue);
	void __fastcall SetTableKinds(const Firedac::Phys::Intf::TFDPhysTableKinds AValue);
	void __fastcall SetWildcard(const System::UnicodeString AValue);
	System::Word __fastcall GetOverload();
	void __fastcall SetOverload(const System::Word AValue);
	void __fastcall SetObjectScopes(const Firedac::Phys::Intf::TFDPhysObjectScopes AValue);
	Firedac::Phys::Intf::TFDPhysObjectScopes __fastcall GetObjectScopes();
	System::UnicodeString __fastcall GetBaseObjectName();
	System::UnicodeString __fastcall GetSchemaName();
	void __fastcall SetBaseObjectName(const System::UnicodeString AValue);
	void __fastcall SetSchemaName(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetCatalogName();
	void __fastcall SetCatalogName(const System::UnicodeString AValue);
	
protected:
	virtual TFDCustomTableAdapter* __fastcall InternalCreateAdapter();
	
__published:
	__property ActiveStoredUsage = {default=3};
	__property Active = {default=0};
	__property AutoCalcFields = {default=1};
	__property BeforeOpen;
	__property AfterOpen;
	__property BeforeClose;
	__property AfterClose;
	__property BeforeScroll;
	__property AfterScroll;
	__property BeforeRefresh;
	__property AfterRefresh;
	__property OnCalcFields;
	__property FieldOptions;
	__property Filtered = {default=0};
	__property FilterOptions = {default=0};
	__property Filter = {default=0};
	__property OnFilterRecord;
	__property Indexes;
	__property IndexesActive = {default=1};
	__property IndexName = {default=0};
	__property IndexFieldNames = {default=0};
	__property Aggregates;
	__property AggregatesActive = {default=0};
	__property BeforeGetRecords;
	__property AfterGetRecords;
	__property AfterGetRecord;
	__property BeforeRowRequest;
	__property AfterRowRequest;
	__property LocalSQL;
	__property ConnectionName = {default=0};
	__property Connection;
	__property Transaction;
	__property UpdateTransaction;
	__property SchemaAdapter;
	__property FetchOptions;
	__property FormatOptions;
	__property ResourceOptions;
	__property OnError;
	__property OnCommandChanged;
	__property Firedac::Phys::Intf::TFDPhysMetaInfoKind MetaInfoKind = {read=GetMetaInfoKind, write=SetMetaInfoKind, default=3};
	__property Firedac::Phys::Intf::TFDPhysTableKinds TableKinds = {read=GetTableKinds, write=SetTableKinds, default=7};
	__property System::UnicodeString Wildcard = {read=GetWildcard, write=SetWildcard};
	__property Firedac::Phys::Intf::TFDPhysObjectScopes ObjectScopes = {read=GetObjectScopes, write=SetObjectScopes, default=1};
	__property System::UnicodeString CatalogName = {read=GetCatalogName, write=SetCatalogName};
	__property System::UnicodeString SchemaName = {read=GetSchemaName, write=SetSchemaName};
	__property System::UnicodeString BaseObjectName = {read=GetBaseObjectName, write=SetBaseObjectName};
	__property System::Word Overload = {read=GetOverload, write=SetOverload, default=0};
	__property System::UnicodeString ObjectName = {read=GetObjectName, write=SetObjectName};
public:
	/* TFDRdbmsDataSet.Create */ inline __fastcall virtual TFDMetaInfoQuery(System::Classes::TComponent* AOwner) : TFDRdbmsDataSet(AOwner) { }
	/* TFDRdbmsDataSet.Destroy */ inline __fastcall virtual ~TFDMetaInfoQuery() { }
	
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TFDCustomManager* __fastcall FDManager(void);
extern DELPHI_PACKAGE void __fastcall FDSetManagerClass(TFDCustomManagerClass AClass);
extern DELPHI_PACKAGE void __fastcall FDSetConnectionClass(TFDCustomConnectionClass AClass);
extern DELPHI_PACKAGE TFDCustomConnection* __fastcall FDFindDefaultConnection(System::Classes::TComponent* AComp);
extern DELPHI_PACKAGE bool __fastcall FDIsDesigning(System::Classes::TComponent* AComp);
}	/* namespace Client */
}	/* namespace Comp */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_COMP_CLIENT)
using namespace Firedac::Comp::Client;
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
#endif	// Firedac_Comp_ClientHPP
