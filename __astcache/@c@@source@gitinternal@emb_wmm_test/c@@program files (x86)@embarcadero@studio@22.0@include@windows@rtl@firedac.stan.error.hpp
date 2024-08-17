// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Stan.Error.pas' rev: 35.00 (Windows)

#ifndef Firedac_Stan_ErrorHPP
#define Firedac_Stan_ErrorHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <System.SysUtils.hpp>
#include <FireDAC.Stan.Intf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Stan
{
namespace Error
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EFDException;
class DELPHICLASS TFDDBError;
class DELPHICLASS EFDDBEngineException;
class DELPHICLASS EFDDBArrayExecuteError;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* EFDExceptionClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, EFDExceptionClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TFDDBErrorClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDDBErrorClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* EFDDBEngineExceptionClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, EFDDBEngineExceptionClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFDException : public Data::Db::EDatabaseError
{
	typedef Data::Db::EDatabaseError inherited;
	
private:
	int FFDCode;
	System::UnicodeString FFDObjName;
	
protected:
	void __fastcall SetFDObjectName(const Firedac::Stan::Intf::_di_IFDStanObject AValue);
	virtual void __fastcall LoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall SaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual EFDException()/* overload */;
	__fastcall EFDException(int AFDCode, const System::UnicodeString AMessage)/* overload */;
	virtual void __fastcall Duplicate(EFDException* &AValue);
	__property int FDCode = {read=FFDCode, write=FFDCode, nodefault};
	__property System::UnicodeString FDObjName = {read=FFDObjName, write=FFDObjName};
public:
	/* Exception.CreateFmt */ inline __fastcall EFDException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Data::Db::EDatabaseError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFDException(NativeUInt Ident)/* overload */ : Data::Db::EDatabaseError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFDException(System::PResStringRec ResStringRec)/* overload */ : Data::Db::EDatabaseError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFDException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Data::Db::EDatabaseError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFDException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Data::Db::EDatabaseError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFDException(const System::UnicodeString Msg, int AHelpContext) : Data::Db::EDatabaseError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFDException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Data::Db::EDatabaseError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFDException(NativeUInt Ident, int AHelpContext)/* overload */ : Data::Db::EDatabaseError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFDException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Data::Db::EDatabaseError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFDException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Data::Db::EDatabaseError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFDException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Data::Db::EDatabaseError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFDException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFDCommandExceptionKind : unsigned int { ekOther, ekNoDataFound, ekTooManyRows, ekRecordLocked, ekUKViolated, ekFKViolated, ekObjNotExists, ekUserPwdInvalid, ekUserPwdExpired, ekUserPwdWillExpire, ekCmdAborted, ekServerGone, ekServerOutput, ekArrExecMalfunc, ekInvalidParams };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDBError : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FMessage;
	int FErrorCode;
	int FLevel;
	System::UnicodeString FObjName;
	TFDCommandExceptionKind FKind;
	int FCommandTextOffset;
	int FRowIndex;
	
protected:
	virtual void __fastcall Assign(TFDDBError* ASrc);
	virtual void __fastcall LoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall SaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDBError()/* overload */;
	__fastcall virtual TFDDBError(int ALevel, int AErrorCode, const System::UnicodeString AMessage, const System::UnicodeString AObjName, TFDCommandExceptionKind AKind, int ACmdOffset, int ARowIndex)/* overload */;
	__property int ErrorCode = {read=FErrorCode, write=FErrorCode, nodefault};
	__property TFDCommandExceptionKind Kind = {read=FKind, write=FKind, nodefault};
	__property int Level = {read=FLevel, write=FLevel, nodefault};
	__property System::UnicodeString Message = {read=FMessage, write=FMessage};
	__property System::UnicodeString ObjName = {read=FObjName, write=FObjName};
	__property int CommandTextOffset = {read=FCommandTextOffset, write=FCommandTextOffset, nodefault};
	__property int RowIndex = {read=FRowIndex, write=FRowIndex, nodefault};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDDBError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFDDBEngineException : public EFDException
{
	typedef EFDException inherited;
	
public:
	TFDDBError* operator[](int Index) { return this->Errors[Index]; }
	
private:
	System::Classes::TList* FItems;
	System::Classes::TStrings* FParams;
	System::UnicodeString FSQL;
	TFDDBError* __fastcall GetErrors(int AIndex);
	int __fastcall GetErrorCount();
	TFDCommandExceptionKind __fastcall GetKind();
	int __fastcall GetErrorCode();
	void __fastcall SetParams(System::Classes::TStrings* const AValue);
	
protected:
	void __fastcall SetSQLAndParams(const Firedac::Stan::Intf::_di_IFDMoniAdapter AValue);
	virtual void __fastcall LoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall SaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual TFDDBErrorClass __fastcall GetErrorClass();
	TFDDBError* __fastcall AppendError()/* overload */;
	
public:
	__fastcall virtual EFDDBEngineException()/* overload */;
	__fastcall EFDDBEngineException(int AADCode, const System::UnicodeString AMessage)/* overload */;
	__fastcall virtual ~EFDDBEngineException();
	TFDDBError* __fastcall AppendError(int ALevel, int AErrorCode, const System::UnicodeString AMessage, const System::UnicodeString AObjName, TFDCommandExceptionKind AKind, int ACmdOffset, int ARowIndex)/* overload */;
	virtual void __fastcall Duplicate(EFDException* &AValue);
	void __fastcall Append(TFDDBError* AItem);
	void __fastcall Remove(TFDDBError* AItem);
	void __fastcall Clear();
	void __fastcall Merge(EFDDBEngineException* AValue, int AIndex);
	__property int ErrorCount = {read=GetErrorCount, nodefault};
	__property TFDDBError* Errors[int Index] = {read=GetErrors/*, default*/};
	__property int ErrorCode = {read=GetErrorCode, nodefault};
	__property TFDCommandExceptionKind Kind = {read=GetKind, nodefault};
	__property System::Classes::TStrings* Params = {read=FParams, write=SetParams};
	__property System::UnicodeString SQL = {read=FSQL, write=FSQL};
public:
	/* Exception.CreateFmt */ inline __fastcall EFDDBEngineException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EFDException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFDDBEngineException(NativeUInt Ident)/* overload */ : EFDException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFDDBEngineException(System::PResStringRec ResStringRec)/* overload */ : EFDException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFDDBEngineException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EFDException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFDDBEngineException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EFDException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFDDBEngineException(const System::UnicodeString Msg, int AHelpContext) : EFDException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFDDBEngineException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EFDException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFDDBEngineException(NativeUInt Ident, int AHelpContext)/* overload */ : EFDException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFDDBEngineException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFDException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFDDBEngineException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFDException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFDDBEngineException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFDException(Ident, Args, Args_High, AHelpContext) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EFDDBArrayExecuteError : public EFDException
{
	typedef EFDException inherited;
	
private:
	int FTimes;
	int FOffset;
	Firedac::Stan::Intf::TFDErrorAction FAction;
	EFDDBEngineException* FException;
	int FRetryLevel;
	
public:
	__fastcall EFDDBArrayExecuteError(int ATimes, int AOffset, EFDDBEngineException* AException, int ARetryLevel)/* overload */;
	__property int Times = {read=FTimes, nodefault};
	__property int Offset = {read=FOffset, nodefault};
	__property EFDDBEngineException* Exception = {read=FException};
	__property int RetryLevel = {read=FRetryLevel, nodefault};
	__property Firedac::Stan::Intf::TFDErrorAction Action = {read=FAction, write=FAction, nodefault};
public:
	/* EFDException.Create */ inline __fastcall virtual EFDDBArrayExecuteError()/* overload */ : EFDException() { }
	/* EFDException.Create */ inline __fastcall EFDDBArrayExecuteError(int AFDCode, const System::UnicodeString AMessage)/* overload */ : EFDException(AFDCode, AMessage) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EFDDBArrayExecuteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EFDException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EFDDBArrayExecuteError(NativeUInt Ident)/* overload */ : EFDException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EFDDBArrayExecuteError(System::PResStringRec ResStringRec)/* overload */ : EFDException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EFDDBArrayExecuteError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EFDException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EFDDBArrayExecuteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EFDException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EFDDBArrayExecuteError(const System::UnicodeString Msg, int AHelpContext) : EFDException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EFDDBArrayExecuteError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EFDException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFDDBArrayExecuteError(NativeUInt Ident, int AHelpContext)/* overload */ : EFDException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EFDDBArrayExecuteError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EFDException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFDDBArrayExecuteError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFDException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EFDDBArrayExecuteError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EFDException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EFDDBArrayExecuteError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TFDErrorEvent)(System::TObject* ASender, System::TObject* AInitiator, System::Sysutils::Exception* &AException);

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall FDException(System::TObject* AObj, EFDException* AEx, bool ATracing)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDExceptionLayers(const System::UnicodeString *ALayers, const int ALayers_High);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDGetErrorMessage(int ACode, const System::TVarRec *AArgs, const int AArgs_High);
extern DELPHI_PACKAGE void __fastcall FDException(System::TObject* AObj, const System::UnicodeString *ALayers, const int ALayers_High, int ACode, const System::TVarRec *AArgs, const int AArgs_High)/* overload */;
extern DELPHI_PACKAGE void __fastcall FDCapabilityNotSupported(System::TObject* AObj, const System::UnicodeString *ALayers, const int ALayers_High);
extern DELPHI_PACKAGE EFDDBEngineException* __fastcall FDDBEngineExceptionCreate(EFDDBEngineExceptionClass AClass, int ACode, const System::TVarRec *AArgs, const int AArgs_High);
extern DELPHI_PACKAGE System::TObject* __fastcall FDExceptionLoad(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
extern DELPHI_PACKAGE void __fastcall FDExceptionSave(System::TObject* AObject, const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
extern DELPHI_PACKAGE System::TObject* __fastcall FDDBEngineExceptionLoad(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
}	/* namespace Error */
}	/* namespace Stan */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN_ERROR)
using namespace Firedac::Stan::Error;
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
#endif	// Firedac_Stan_ErrorHPP
