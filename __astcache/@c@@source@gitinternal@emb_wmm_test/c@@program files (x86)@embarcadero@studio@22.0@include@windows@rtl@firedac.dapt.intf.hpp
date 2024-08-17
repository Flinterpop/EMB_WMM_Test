// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.DApt.Intf.pas' rev: 35.00 (Windows)

#ifndef Firedac_Dapt_IntfHPP
#define Firedac_Dapt_IntfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.DApt.Column.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Dapt
{
namespace Intf
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IFDDAptUpdateHandler;
typedef System::DelphiInterface<IFDDAptUpdateHandler> _di_IFDDAptUpdateHandler;
__interface DELPHIINTERFACE IFDDAptTableAdapter;
typedef System::DelphiInterface<IFDDAptTableAdapter> _di_IFDDAptTableAdapter;
__interface DELPHIINTERFACE IFDDAptTableAdapters;
typedef System::DelphiInterface<IFDDAptTableAdapters> _di_IFDDAptTableAdapters;
__interface DELPHIINTERFACE IFDDAptSchemaAdapter;
typedef System::DelphiInterface<IFDDAptSchemaAdapter> _di_IFDDAptSchemaAdapter;
class DELPHICLASS EFDDAptRowUpdateException;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TFDDAptReconcileAction : unsigned int { raSkip, raAbort, raMerge, raCorrect, raCancel, raRefresh };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2301}") IFDDAptUpdateHandler  : public System::IInterface 
{
	virtual void __fastcall ReconcileRow(Firedac::Dats::TFDDatSRow* ARow, TFDDAptReconcileAction &Action) = 0 ;
	virtual void __fastcall UpdateRow(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions, Firedac::Stan::Intf::TFDErrorAction &AAction) = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2304}") IFDDAptTableAdapter  : public System::IInterface 
{
	virtual int __fastcall GetSourceRecordSetID() = 0 ;
	virtual void __fastcall SetSourceRecordSetID(const int AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetSourceRecordSetName() = 0 ;
	virtual void __fastcall SetSourceRecordSetName(const System::UnicodeString AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetUpdateTableName() = 0 ;
	virtual void __fastcall SetUpdateTableName(const System::UnicodeString AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetDatSTableName() = 0 ;
	virtual void __fastcall SetDatSTableName(const System::UnicodeString AValue) = 0 ;
	virtual Firedac::Dats::TFDDatSTable* __fastcall GetDatSTable() = 0 ;
	virtual void __fastcall SetDatSTable(Firedac::Dats::TFDDatSTable* AValue) = 0 ;
	virtual Firedac::Dapt::Column::TFDDAptColumnMappings* __fastcall GetColumnMappings() = 0 ;
	virtual Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode __fastcall GetMetaInfoMergeMode() = 0 ;
	virtual void __fastcall SetMetaInfoMergeMode(const Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode AValue) = 0 ;
	virtual _di_IFDDAptTableAdapters __fastcall GetTableMappings() = 0 ;
	virtual Firedac::Dats::TFDDatSManager* __fastcall GetDatSManager() = 0 ;
	virtual void __fastcall SetDatSManager(Firedac::Dats::TFDDatSManager* AValue) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysCommand __fastcall GetSelectCommand() = 0 ;
	virtual void __fastcall SetSelectCommand(const Firedac::Phys::Intf::_di_IFDPhysCommand ACmd) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysCommand __fastcall GetInsertCommand() = 0 ;
	virtual void __fastcall SetInsertCommand(const Firedac::Phys::Intf::_di_IFDPhysCommand ACmd) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysCommand __fastcall GetUpdateCommand() = 0 ;
	virtual void __fastcall SetUpdateCommand(const Firedac::Phys::Intf::_di_IFDPhysCommand ACmd) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysCommand __fastcall GetDeleteCommand() = 0 ;
	virtual void __fastcall SetDeleteCommand(const Firedac::Phys::Intf::_di_IFDPhysCommand ACmd) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysCommand __fastcall GetLockCommand() = 0 ;
	virtual void __fastcall SetLockCommand(const Firedac::Phys::Intf::_di_IFDPhysCommand ACmd) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysCommand __fastcall GetUnLockCommand() = 0 ;
	virtual void __fastcall SetUnLockCommand(const Firedac::Phys::Intf::_di_IFDPhysCommand ACmd) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysCommand __fastcall GetFetchRowCommand() = 0 ;
	virtual void __fastcall SetFetchRowCommand(const Firedac::Phys::Intf::_di_IFDPhysCommand ACmd) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysTransaction __fastcall GetTransaction() = 0 ;
	virtual void __fastcall SetTransaction(const Firedac::Phys::Intf::_di_IFDPhysTransaction AValue) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysTransaction __fastcall GetUpdateTransaction() = 0 ;
	virtual void __fastcall SetUpdateTransaction(const Firedac::Phys::Intf::_di_IFDPhysTransaction AValue) = 0 ;
	virtual Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetOptions() = 0 ;
	virtual Firedac::Stan::Intf::_di_IFDStanErrorHandler __fastcall GetErrorHandler() = 0 ;
	virtual void __fastcall SetErrorHandler(const Firedac::Stan::Intf::_di_IFDStanErrorHandler AValue) = 0 ;
	virtual _di_IFDDAptUpdateHandler __fastcall GetUpdateHandler() = 0 ;
	virtual void __fastcall SetUpdateHandler(const _di_IFDDAptUpdateHandler AValue) = 0 ;
	virtual System::TObject* __fastcall GetObj() = 0 ;
	virtual Firedac::Dats::TFDDatSTable* __fastcall Define() = 0 ;
	virtual void __fastcall Fetch(bool AAll = false, bool ABlocked = false) = 0 /* overload */;
	virtual int __fastcall Update(int AMaxErrors = 0xffffffff) = 0 /* overload */;
	virtual bool __fastcall Reconcile() = 0 ;
	virtual void __fastcall Reset() = 0 ;
	virtual void __fastcall Fetch(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction &AAction, int AColumn, Firedac::Phys::Intf::TFDPhysFillRowOptions ARowOptions) = 0 /* overload */;
	virtual void __fastcall Update(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions = Firedac::Stan::Option::TFDUpdateRowOptions() , Firedac::Stan::Option::TFDActionRequest AForceRequest = (Firedac::Stan::Option::TFDActionRequest)(0x1)) = 0 /* overload */;
	virtual void __fastcall Lock(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions = Firedac::Stan::Option::TFDUpdateRowOptions() ) = 0 ;
	virtual void __fastcall UnLock(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions = Firedac::Stan::Option::TFDUpdateRowOptions() ) = 0 ;
	virtual void __fastcall FetchGenerators(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AUpdRowOptions = Firedac::Stan::Option::TFDUpdateRowOptions() ) = 0 ;
	__property int SourceRecordSetID = {read=GetSourceRecordSetID, write=SetSourceRecordSetID};
	__property System::UnicodeString SourceRecordSetName = {read=GetSourceRecordSetName, write=SetSourceRecordSetName};
	__property System::UnicodeString UpdateTableName = {read=GetUpdateTableName, write=SetUpdateTableName};
	__property System::UnicodeString DatSTableName = {read=GetDatSTableName, write=SetDatSTableName};
	__property Firedac::Dats::TFDDatSTable* DatSTable = {read=GetDatSTable, write=SetDatSTable};
	__property Firedac::Dapt::Column::TFDDAptColumnMappings* ColumnMappings = {read=GetColumnMappings};
	__property Firedac::Phys::Intf::TFDPhysMetaInfoMergeMode MetaInfoMergeMode = {read=GetMetaInfoMergeMode, write=SetMetaInfoMergeMode};
	__property _di_IFDDAptTableAdapters TableMappings = {read=GetTableMappings};
	__property Firedac::Dats::TFDDatSManager* DatSManager = {read=GetDatSManager, write=SetDatSManager};
	__property Firedac::Phys::Intf::_di_IFDPhysCommand SelectCommand = {read=GetSelectCommand, write=SetSelectCommand};
	__property Firedac::Phys::Intf::_di_IFDPhysCommand InsertCommand = {read=GetInsertCommand, write=SetInsertCommand};
	__property Firedac::Phys::Intf::_di_IFDPhysCommand UpdateCommand = {read=GetUpdateCommand, write=SetUpdateCommand};
	__property Firedac::Phys::Intf::_di_IFDPhysCommand DeleteCommand = {read=GetDeleteCommand, write=SetDeleteCommand};
	__property Firedac::Phys::Intf::_di_IFDPhysCommand LockCommand = {read=GetLockCommand, write=SetLockCommand};
	__property Firedac::Phys::Intf::_di_IFDPhysCommand UnLockCommand = {read=GetUnLockCommand, write=SetUnLockCommand};
	__property Firedac::Phys::Intf::_di_IFDPhysCommand FetchRowCommand = {read=GetFetchRowCommand, write=SetFetchRowCommand};
	__property Firedac::Stan::Option::_di_IFDStanOptions Options = {read=GetOptions};
	__property Firedac::Phys::Intf::_di_IFDPhysTransaction Transaction = {read=GetTransaction, write=SetTransaction};
	__property Firedac::Phys::Intf::_di_IFDPhysTransaction UpdateTransaction = {read=GetUpdateTransaction, write=SetUpdateTransaction};
	__property Firedac::Stan::Intf::_di_IFDStanErrorHandler ErrorHandler = {read=GetErrorHandler, write=SetErrorHandler};
	__property _di_IFDDAptUpdateHandler UpdateHandler = {read=GetUpdateHandler, write=SetUpdateHandler};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2305}") IFDDAptTableAdapters  : public System::IInterface 
{
	virtual _di_IFDDAptTableAdapter __fastcall GetItems(int AIndex) = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	virtual _di_IFDDAptTableAdapter __fastcall Lookup(const Firedac::Phys::Intf::TFDPhysMappingName &ATable) = 0 ;
	virtual _di_IFDDAptTableAdapter __fastcall Add(const System::UnicodeString ASourceRecordSetName = System::UnicodeString(), const System::UnicodeString ADatSTableName = System::UnicodeString(), const System::UnicodeString AUpdateTableName = System::UnicodeString()) = 0 /* overload */;
	virtual void __fastcall Add(const _di_IFDDAptTableAdapter AAdapter) = 0 /* overload */;
	virtual void __fastcall Remove(const Firedac::Phys::Intf::TFDPhysMappingName &ATable) = 0 /* overload */;
	virtual void __fastcall Remove(const _di_IFDDAptTableAdapter AAdapter) = 0 /* overload */;
	__property _di_IFDDAptTableAdapter Items[int AIndex] = {read=GetItems};
	__property int Count = {read=GetCount};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2306}") IFDDAptSchemaAdapter  : public System::IInterface 
{
	virtual Firedac::Stan::Intf::_di_IFDStanErrorHandler __fastcall GetErrorHandler() = 0 ;
	virtual void __fastcall SetErrorHandler(const Firedac::Stan::Intf::_di_IFDStanErrorHandler AValue) = 0 ;
	virtual Firedac::Dats::TFDDatSManager* __fastcall GetDatSManager() = 0 ;
	virtual void __fastcall SetDatSManager(Firedac::Dats::TFDDatSManager* AValue) = 0 ;
	virtual _di_IFDDAptTableAdapters __fastcall GetTableAdapters() = 0 ;
	virtual _di_IFDDAptUpdateHandler __fastcall GetUpdateHandler() = 0 ;
	virtual void __fastcall SetUpdateHandler(const _di_IFDDAptUpdateHandler AValue) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysTransaction __fastcall GetTransaction() = 0 ;
	virtual void __fastcall SetTransaction(const Firedac::Phys::Intf::_di_IFDPhysTransaction AValue) = 0 ;
	virtual Firedac::Phys::Intf::_di_IFDPhysTransaction __fastcall GetUpdateTransaction() = 0 ;
	virtual void __fastcall SetUpdateTransaction(const Firedac::Phys::Intf::_di_IFDPhysTransaction AValue) = 0 ;
	virtual Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetOptions() = 0 ;
	virtual int __fastcall Update(int AMaxErrors = 0xffffffff) = 0 ;
	virtual bool __fastcall Reconcile() = 0 ;
	__property Firedac::Dats::TFDDatSManager* DatSManager = {read=GetDatSManager, write=SetDatSManager};
	__property _di_IFDDAptTableAdapters TableAdapters = {read=GetTableAdapters};
	__property Firedac::Stan::Option::_di_IFDStanOptions Options = {read=GetOptions};
	__property Firedac::Phys::Intf::_di_IFDPhysTransaction Transaction = {read=GetTransaction, write=SetTransaction};
	__property Firedac::Phys::Intf::_di_IFDPhysTransaction UpdateTransaction = {read=GetUpdateTransaction, write=SetUpdateTransaction};
	__property Firedac::Stan::Intf::_di_IFDStanErrorHandler ErrorHandler = {read=GetErrorHandler, write=SetErrorHandler};
	__property _di_IFDDAptUpdateHandler UpdateHandler = {read=GetUpdateHandler, write=SetUpdateHandler};
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFDDAptRowUpdateException : public Firedac::Stan::Error::EFDException
{
	typedef Firedac::Stan::Error::EFDException inherited;
	
private:
	Firedac::Stan::Intf::TFDErrorAction FAction;
	Firedac::Stan::Option::TFDActionRequest FRequest;
	Firedac::Dats::TFDDatSRow* FRow;
	System::Sysutils::Exception* FException;
	
public:
	__fastcall EFDDAptRowUpdateException(Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Intf::TFDErrorAction AAction, System::Sysutils::Exception* AException)/* overload */;
	__property System::Sysutils::Exception* Exception = {read=FException};
	__property Firedac::Stan::Option::TFDUpdateRequest Request = {read=FRequest, nodefault};
	__property Firedac::Dats::TFDDatSRow* Row = {read=FRow};
	__property Firedac::Stan::Intf::TFDErrorAction Action = {read=FAction, write=FAction, nodefault};
public:
	/* EFDException.Create */ inline __fastcall virtual EFDDAptRowUpdateException()/* overload */ : Firedac::Stan::Error::EFDException() { }
	/* EFDException.Create */ inline __fastcall EFDDAptRowUpdateException(int AFDCode, const System::UnicodeString AMessage)/* overload */ : Firedac::Stan::Error::EFDException(AFDCode, AMessage) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EFDDAptRowUpdateException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Firedac::Stan::Error::EFDException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFDDAptRowUpdateException(NativeUInt Ident)/* overload */ : Firedac::Stan::Error::EFDException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFDDAptRowUpdateException(System::PResStringRec ResStringRec)/* overload */ : Firedac::Stan::Error::EFDException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFDDAptRowUpdateException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Firedac::Stan::Error::EFDException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFDDAptRowUpdateException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Firedac::Stan::Error::EFDException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFDDAptRowUpdateException(const System::UnicodeString Msg, int AHelpContext) : Firedac::Stan::Error::EFDException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFDDAptRowUpdateException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Firedac::Stan::Error::EFDException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFDDAptRowUpdateException(NativeUInt Ident, int AHelpContext)/* overload */ : Firedac::Stan::Error::EFDException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFDDAptRowUpdateException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Firedac::Stan::Error::EFDException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFDDAptRowUpdateException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Firedac::Stan::Error::EFDException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFDDAptRowUpdateException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Firedac::Stan::Error::EFDException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFDDAptRowUpdateException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Intf */
}	/* namespace Dapt */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_DAPT_INTF)
using namespace Firedac::Dapt::Intf;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_DAPT)
using namespace Firedac::Dapt;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC)
using namespace Firedac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Firedac_Dapt_IntfHPP
