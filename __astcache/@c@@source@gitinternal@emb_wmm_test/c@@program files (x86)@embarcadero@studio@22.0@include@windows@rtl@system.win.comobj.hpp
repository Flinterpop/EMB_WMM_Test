// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Win.ComObj.pas' rev: 35.00 (Windows)

#ifndef System_Win_ComobjHPP
#define System_Win_ComobjHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Win
{
namespace Comobj
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TComServerObject;
class DELPHICLASS TComClassManager;
__interface DELPHIINTERFACE IServerExceptionHandler;
typedef System::DelphiInterface<IServerExceptionHandler> _di_IServerExceptionHandler;
class DELPHICLASS TComObject;
class DELPHICLASS TComObjectFactory;
class DELPHICLASS TTypedComObject;
class DELPHICLASS TTypedComObjectFactory;
class DELPHICLASS TAutoObject;
class DELPHICLASS TAutoObjectFactory;
class DELPHICLASS TAutoIntfObject;
class DELPHICLASS TConnectionPoint;
class DELPHICLASS TConnectionPoints;
class DELPHICLASS TAutoObjectEvent;
class DELPHICLASS EOleError;
class DELPHICLASS EOleSysError;
class DELPHICLASS EOleException;
class DELPHICLASS EOleRegistrationError;
__interface DELPHIINTERFACE TEventDispatchInvoker;
typedef System::DelphiInterface<TEventDispatchInvoker> _di_TEventDispatchInvoker;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComServerObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	static bool FPerUserRegistration;
	
protected:
	virtual int __fastcall CountObject(bool Created) = 0 ;
	virtual int __fastcall CountFactory(bool Created) = 0 ;
	virtual System::UnicodeString __fastcall GetHelpFileName() = 0 ;
	virtual System::UnicodeString __fastcall GetServerFileName() = 0 ;
	virtual System::UnicodeString __fastcall GetServerKey() = 0 ;
	virtual System::UnicodeString __fastcall GetServerName() = 0 ;
	virtual bool __fastcall GetStartSuspended() = 0 ;
	virtual _di_ITypeLib __fastcall GetTypeLib() = 0 ;
	virtual void __fastcall SetHelpFileName(const System::UnicodeString Value) = 0 ;
	
private:
	// __classmethod void __fastcall Create@();
	
public:
	__classmethod void __fastcall GetRegRootAndPrefix(HKEY &RootKey, System::UnicodeString &RootPrefix);
	__property System::UnicodeString HelpFileName = {read=GetHelpFileName, write=SetHelpFileName};
	__property System::UnicodeString ServerFileName = {read=GetServerFileName};
	__property System::UnicodeString ServerKey = {read=GetServerKey};
	__property System::UnicodeString ServerName = {read=GetServerName};
	__property _di_ITypeLib TypeLib = {read=GetTypeLib};
	__property bool StartSuspended = {read=GetStartSuspended, nodefault};
	/* static */ __property bool PerUserRegistration = {read=FPerUserRegistration, write=FPerUserRegistration, nodefault};
	
private:
	// __classmethod void __fastcall Destroy@();
public:
	/* TObject.Create */ inline __fastcall TComServerObject() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TComServerObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TFactoryProc)(TComObjectFactory* Factory);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComClassManager : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TComObjectFactory* FFactoryList;
	System::Sysutils::TMultiReadExclusiveWriteSynchronizer* FLock;
	void __fastcall AddObjectFactory(TComObjectFactory* Factory);
	void __fastcall RemoveObjectFactory(TComObjectFactory* Factory);
	
public:
	__fastcall TComClassManager();
	__fastcall virtual ~TComClassManager();
	void __fastcall ForEachFactory(TComServerObject* ComServer, TFactoryProc FactoryProc);
	TComObjectFactory* __fastcall GetFactoryFromClass(System::TClass ComClass);
	TComObjectFactory* __fastcall GetFactoryFromClassID(const GUID &ClassID);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{6A8D432B-EB81-11D1-AAB1-00C04FB16FBC}") IServerExceptionHandler  : public System::IInterface 
{
	virtual void __fastcall OnException(const System::WideString ServerClass, const System::WideString ExceptionClass, const System::WideString ErrorMessage, NativeInt ExceptAddr, const System::WideString ErrorIID, const System::WideString ProgID, int &Handled, HRESULT &Result) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *FController;
	TComObjectFactory* FFactory;
	bool FNonCountedObject;
	int FRefCount;
	_di_IServerExceptionHandler FServerExceptionHandler;
	System::_di_IInterface __fastcall GetController();
	
protected:
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	HRESULT __stdcall InterfaceSupportsErrorInfo(const GUID &iid);
	
public:
	__fastcall TComObject();
	__fastcall TComObject(const System::_di_IInterface Controller);
	__fastcall TComObject(TComObjectFactory* Factory, const System::_di_IInterface Controller);
	__fastcall virtual ~TComObject();
	virtual void __fastcall Initialize();
	virtual int __stdcall ObjAddRef();
	virtual HRESULT __stdcall ObjQueryInterface(const GUID &IID, /* out */ void *Obj);
	virtual int __stdcall ObjRelease();
	virtual HRESULT __fastcall SafeCallException(System::TObject* ExceptObject, void * ExceptAddr);
	HRESULT __stdcall Error(const System::UnicodeString Msg)/* overload */;
	HRESULT __stdcall Error(const System::UnicodeString Msg, const GUID &IID, HRESULT hRes = (HRESULT)(0x80020009))/* overload */;
	static HRESULT __stdcall Error(const System::UnicodeString Msg, unsigned HelpID, const System::UnicodeString HelpFile, const GUID &IID, HRESULT hRes = (HRESULT)(0x80020009))/* overload */;
	__property System::_di_IInterface Controller = {read=GetController};
	__property TComObjectFactory* Factory = {read=FFactory};
	__property int RefCount = {read=FRefCount, nodefault};
	__property _di_IServerExceptionHandler ServerExceptionHandler = {read=FServerExceptionHandler, write=FServerExceptionHandler};
private:
	void *__ISupportErrorInfo;	// ISupportErrorInfo 
	void *__IInterface;	// System::IInterface 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DF0B3D60-548F-101B-8E65-08002B2BD119}
	operator _di_ISupportErrorInfo()
	{
		_di_ISupportErrorInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISupportErrorInfo*(void) { return (ISupportErrorInfo*)&__ISupportErrorInfo; }
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
	operator System::IInterface*(void) { return (System::IInterface*)&__IInterface; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TComClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TComClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TClassInstancing : unsigned char { ciInternal, ciSingleInstance, ciMultiInstance };

enum DECLSPEC_DENUM TThreadingModel : unsigned char { tmSingle, tmApartment, tmFree, tmBoth, tmNeutral };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TComObjectFactory : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TComObjectFactory* FNext;
	TComServerObject* FComServer;
	System::TClass FComClass;
	GUID FClassID;
	System::UnicodeString FClassName;
	System::UnicodeString FDescription;
	GUID FErrorIID;
	TClassInstancing FInstancing;
	System::WideString FLicString;
	int FRegister;
	bool FShowErrors;
	bool FSupportsLicensing;
	TThreadingModel FThreadingModel;
	
protected:
	virtual System::UnicodeString __fastcall GetProgID();
	virtual System::WideString __fastcall GetLicenseString();
	virtual bool __fastcall HasMachineLicense();
	virtual bool __fastcall ValidateUserLicense(const System::WideString LicStr);
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	HRESULT __stdcall CreateInstance(const System::_di_IInterface UnkOuter, const GUID &IID, /* out */ void *Obj);
	HRESULT __stdcall LockServer(System::LongBool fLock);
	HRESULT __stdcall GetLicInfo(tagLICINFO &licInfo);
	HRESULT __stdcall RequestLicKey(int dwResrved, /* out */ System::WideString &bstrKey);
	HRESULT __stdcall CreateInstanceLic(const System::_di_IInterface unkOuter, const System::_di_IInterface unkReserved, const GUID &iid, const System::WideString bstrKey, /* out */ void *vObject);
	
public:
	__fastcall TComObjectFactory(TComServerObject* ComServer, TComClass ComClass, const GUID &ClassID, const System::UnicodeString ClassName, const System::UnicodeString Description, TClassInstancing Instancing, TThreadingModel ThreadingModel);
	__fastcall virtual ~TComObjectFactory();
	virtual TComObject* __fastcall CreateComObject(const System::_di_IInterface Controller);
	void __fastcall RegisterClassObject();
	virtual void __fastcall UpdateRegistry(bool Register);
	__property GUID ClassID = {read=FClassID};
	__property System::UnicodeString ClassName = {read=FClassName};
	__property System::TClass ComClass = {read=FComClass};
	__property TComServerObject* ComServer = {read=FComServer};
	__property System::UnicodeString Description = {read=FDescription};
	__property GUID ErrorIID = {read=FErrorIID, write=FErrorIID};
	__property System::WideString LicString = {read=FLicString, write=FLicString};
	__property System::UnicodeString ProgID = {read=GetProgID};
	__property TClassInstancing Instancing = {read=FInstancing, nodefault};
	__property bool ShowErrors = {read=FShowErrors, write=FShowErrors, nodefault};
	__property bool SupportsLicensing = {read=FSupportsLicensing, write=FSupportsLicensing, nodefault};
	__property TThreadingModel ThreadingModel = {read=FThreadingModel, nodefault};
private:
	void *__IClassFactory2;	// IClassFactory2 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B196B28F-BAB4-101A-B69C-00AA00341D07}
	operator _di_IClassFactory2()
	{
		_di_IClassFactory2 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IClassFactory2*(void) { return (IClassFactory2*)&__IClassFactory2; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000001-0000-0000-C000-000000000046}
	operator _di_IClassFactory()
	{
		_di_IClassFactory intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IClassFactory*(void) { return (IClassFactory*)&__IClassFactory2; }
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
	operator System::IInterface*(void) { return (System::IInterface*)&__IClassFactory2; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTypedComObject : public TComObject
{
	typedef TComObject inherited;
	
protected:
	HRESULT __stdcall GetClassInfo(/* out */ _di_ITypeInfo &TypeInfo);
	
public:
	__fastcall TTypedComObject();
	__fastcall TTypedComObject(const System::_di_IInterface Controller);
	__fastcall TTypedComObject(TComObjectFactory* Factory, const System::_di_IInterface Controller);
public:
	/* TComObject.Destroy */ inline __fastcall virtual ~TTypedComObject() { }
	
private:
	void *__IProvideClassInfo;	// IProvideClassInfo 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B196B283-BAB4-101A-B69C-00AA00341D07}
	operator _di_IProvideClassInfo()
	{
		_di_IProvideClassInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IProvideClassInfo*(void) { return (IProvideClassInfo*)&__IProvideClassInfo; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TTypedComClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TTypedComClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TTypedComObjectFactory : public TComObjectFactory
{
	typedef TComObjectFactory inherited;
	
private:
	_di_ITypeInfo FClassInfo;
	
public:
	__fastcall TTypedComObjectFactory(TComServerObject* ComServer, TTypedComClass TypedComClass, const GUID &ClassID, TClassInstancing Instancing, TThreadingModel ThreadingModel);
	_di_ITypeInfo __fastcall GetInterfaceTypeInfo(int TypeFlags);
	virtual void __fastcall UpdateRegistry(bool Register);
	__property _di_ITypeInfo ClassInfo = {read=FClassInfo};
public:
	/* TComObjectFactory.Destroy */ inline __fastcall virtual ~TTypedComObjectFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TConnectEvent)(const System::_di_IInterface Sink, bool Connecting);

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAutoObject : public TTypedComObject
{
	typedef TTypedComObject inherited;
	
private:
	System::_di_IInterface FEventSink;
	TAutoObjectFactory* FAutoFactory;
	
protected:
	virtual HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	virtual HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	virtual HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	virtual HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	void __fastcall EventConnect(const System::_di_IInterface Sink, bool Connecting);
	virtual void __fastcall EventSinkChanged(const System::_di_IInterface EventSink);
	__property TAutoObjectFactory* AutoFactory = {read=FAutoFactory};
	__property System::_di_IInterface EventSink = {read=FEventSink, write=FEventSink};
	
public:
	__fastcall TAutoObject();
	__fastcall TAutoObject(const System::_di_IInterface Controller);
	__fastcall TAutoObject(TComObjectFactory* Factory, const System::_di_IInterface Controller);
	virtual void __fastcall Initialize();
public:
	/* TComObject.Destroy */ inline __fastcall virtual ~TAutoObject() { }
	
private:
	void *__IDispatch;	// IDispatch 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IDispatch; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TAutoClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TAutoClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAutoObjectFactory : public TTypedComObjectFactory
{
	typedef TTypedComObjectFactory inherited;
	
private:
	_di_ITypeInfo FDispTypeInfo;
	System::TInterfaceEntry *FDispIntfEntry;
	GUID FEventIID;
	_di_ITypeInfo FEventTypeInfo;
	
public:
	__fastcall TAutoObjectFactory(TComServerObject* ComServer, TAutoClass AutoClass, const GUID &ClassID, TClassInstancing Instancing, TThreadingModel ThreadingModel);
	virtual System::PInterfaceEntry __fastcall GetIntfEntry(const GUID &Guid);
	__property System::PInterfaceEntry DispIntfEntry = {read=FDispIntfEntry};
	__property _di_ITypeInfo DispTypeInfo = {read=FDispTypeInfo};
	__property GUID EventIID = {read=FEventIID};
	__property _di_ITypeInfo EventTypeInfo = {read=FEventTypeInfo};
public:
	/* TComObjectFactory.Destroy */ inline __fastcall virtual ~TAutoObjectFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAutoIntfObject : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	_di_ITypeInfo FDispTypeInfo;
	System::TInterfaceEntry *FDispIntfEntry;
	GUID FDispIID;
	
protected:
	HRESULT __stdcall GetIDsOfNames(const GUID &IID, void * Names, int NameCount, int LocaleID, void * DispIDs);
	HRESULT __stdcall GetTypeInfo(int Index, int LocaleID, /* out */ void *TypeInfo);
	HRESULT __stdcall GetTypeInfoCount(/* out */ int &Count);
	HRESULT __stdcall Invoke(int DispID, const GUID &IID, int LocaleID, System::Word Flags, void *Params, void * VarResult, void * ExcepInfo, void * ArgErr);
	HRESULT __stdcall InterfaceSupportsErrorInfo(const GUID &iid);
	
public:
	__fastcall TAutoIntfObject(const _di_ITypeLib TypeLib, const GUID &DispIntf);
	virtual HRESULT __fastcall SafeCallException(System::TObject* ExceptObject, void * ExceptAddr);
	__property System::PInterfaceEntry DispIntfEntry = {read=FDispIntfEntry};
	__property _di_ITypeInfo DispTypeInfo = {read=FDispTypeInfo};
	__property GUID DispIID = {read=FDispIID};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TAutoIntfObject() { }
	
private:
	void *__ISupportErrorInfo;	// ISupportErrorInfo 
	void *__IDispatch;	// IDispatch 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {DF0B3D60-548F-101B-8E65-08002B2BD119}
	operator _di_ISupportErrorInfo()
	{
		_di_ISupportErrorInfo intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ISupportErrorInfo*(void) { return (ISupportErrorInfo*)&__ISupportErrorInfo; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00020400-0000-0000-C000-000000000046}
	operator _di_IDispatch()
	{
		_di_IDispatch intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IDispatch*(void) { return (IDispatch*)&__IDispatch; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TConnectionKind : unsigned char { ckSingle, ckMulti };

class PASCALIMPLEMENTATION TConnectionPoint : public System::TContainedObject
{
	typedef System::TContainedObject inherited;
	
private:
	TConnectionPoints* FContainer;
	GUID FIID;
	System::Classes::TList* FSinkList;
	TConnectEvent FOnConnect;
	TConnectionKind FKind;
	int __fastcall AddSink(const System::_di_IInterface Sink);
	void __fastcall RemoveSink(int Cookie);
	
protected:
	HRESULT __stdcall GetConnectionInterface(/* out */ GUID &iid);
	HRESULT __stdcall GetConnectionPointContainer(/* out */ _di_IConnectionPointContainer &cpc);
	HRESULT __stdcall Advise(const System::_di_IInterface unkSink, /* out */ int &dwCookie);
	HRESULT __stdcall Unadvise(int dwCookie);
	
public:
	HRESULT __stdcall EnumConnections(/* out */ _di_IEnumConnections &enumconn);
	__fastcall TConnectionPoint(TConnectionPoints* Container, const GUID &IID, TConnectionKind Kind, TConnectEvent OnConnect);
	bool __fastcall GetSink(int Index, System::_di_IInterface &punk);
	int __fastcall GetCount();
	__property int Count = {read=GetCount, nodefault};
	__property System::Classes::TList* SinkList = {read=FSinkList};
	__fastcall virtual ~TConnectionPoint();
private:
	void *__IConnectionPoint;	// IConnectionPoint 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B196B286-BAB4-101A-B69C-00AA00341D07}
	operator _di_IConnectionPoint()
	{
		_di_IConnectionPoint intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IConnectionPoint*(void) { return (IConnectionPoint*)&__IConnectionPoint; }
	#endif
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TConnectionPoints : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *FController;
	System::Classes::TList* FConnectionPoints;
	System::_di_IInterface __fastcall GetController();
	
protected:
	HRESULT __stdcall EnumConnectionPoints(/* out */ _di_IEnumConnectionPoints &enumconn);
	HRESULT __stdcall FindConnectionPoint(const GUID &iid, /* out */ _di_IConnectionPoint &cp);
	
public:
	__fastcall TConnectionPoints(const System::_di_IInterface AController);
	__fastcall virtual ~TConnectionPoints();
	TConnectionPoint* __fastcall CreateConnectionPoint(const GUID &IID, TConnectionKind Kind, TConnectEvent OnConnect);
	__property System::_di_IInterface Controller = {read=GetController};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TAutoObjectEvent : public TAutoObject
{
	typedef TAutoObject inherited;
	
private:
	TConnectionPoints* FConnectionPoints;
	TConnectionPoint* FConnectionPoint;
	
protected:
	__property TConnectionPoints* ConnectionPoints = {read=FConnectionPoints};
	
public:
	__fastcall TAutoObjectEvent();
	__fastcall virtual ~TAutoObjectEvent();
	__fastcall TAutoObjectEvent(const System::_di_IInterface Controller);
	__fastcall TAutoObjectEvent(TComObjectFactory* Factory, const System::_di_IInterface Controller);
	virtual void __fastcall Initialize();
	__property TConnectionPoint* ConnectionPoint = {read=FConnectionPoint};
private:
	void *__IConnectionPointContainer;	// IConnectionPointContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {B196B284-BAB4-101A-B69C-00AA00341D07}
	operator _di_IConnectionPointContainer()
	{
		_di_IConnectionPointContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IConnectionPointContainer*(void) { return (IConnectionPointContainer*)&__IConnectionPointContainer; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOleError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EOleError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EOleError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOleError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOleError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOleError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOleError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOleError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOleSysError : public EOleError
{
	typedef EOleError inherited;
	
private:
	HRESULT FErrorCode;
	
public:
	__fastcall EOleSysError(const System::UnicodeString Message, HRESULT ErrorCode, int HelpContext);
	__property HRESULT ErrorCode = {read=FErrorCode, write=FErrorCode, nodefault};
public:
	/* Exception.CreateFmt */ inline __fastcall EOleSysError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EOleError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOleSysError(NativeUInt Ident)/* overload */ : EOleError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOleSysError(System::PResStringRec ResStringRec)/* overload */ : EOleError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleSysError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleSysError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOleSysError(const System::UnicodeString Msg, int AHelpContext) : EOleError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOleSysError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EOleError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleSysError(NativeUInt Ident, int AHelpContext)/* overload */ : EOleError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleSysError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOleError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleSysError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleSysError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOleSysError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOleException : public EOleSysError
{
	typedef EOleSysError inherited;
	
private:
	System::UnicodeString FSource;
	System::UnicodeString FHelpFile;
	
public:
	__fastcall EOleException(const System::UnicodeString Message, HRESULT ErrorCode, const System::UnicodeString Source, const System::UnicodeString HelpFile, int HelpContext);
	__property System::UnicodeString HelpFile = {read=FHelpFile, write=FHelpFile};
	__property System::UnicodeString Source = {read=FSource, write=FSource};
public:
	/* Exception.CreateFmt */ inline __fastcall EOleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EOleSysError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOleException(NativeUInt Ident)/* overload */ : EOleSysError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOleException(System::PResStringRec ResStringRec)/* overload */ : EOleSysError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleSysError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleSysError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOleException(const System::UnicodeString Msg, int AHelpContext) : EOleSysError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOleException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EOleSysError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleException(NativeUInt Ident, int AHelpContext)/* overload */ : EOleSysError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOleSysError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleSysError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleSysError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOleException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EOleRegistrationError : public EOleSysError
{
	typedef EOleSysError inherited;
	
public:
	/* EOleSysError.Create */ inline __fastcall EOleRegistrationError(const System::UnicodeString Message, HRESULT ErrorCode, int HelpContext) : EOleSysError(Message, ErrorCode, HelpContext) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EOleRegistrationError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EOleSysError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EOleRegistrationError(NativeUInt Ident)/* overload */ : EOleSysError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EOleRegistrationError(System::PResStringRec ResStringRec)/* overload */ : EOleSysError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleRegistrationError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleSysError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EOleRegistrationError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EOleSysError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EOleRegistrationError(const System::UnicodeString Msg, int AHelpContext) : EOleSysError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EOleRegistrationError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EOleSysError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleRegistrationError(NativeUInt Ident, int AHelpContext)/* overload */ : EOleSysError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EOleRegistrationError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EOleSysError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleRegistrationError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleSysError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EOleRegistrationError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EOleSysError(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EOleRegistrationError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::DynamicArray<System::OleVariant> TOleVariantArray;

__interface TEventDispatchInvoker  : public System::IInterface 
{
	virtual void __fastcall Invoke(int DispId, TOleVariantArray &Params) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int CoInitFlags;
extern DELPHI_PACKAGE HRESULT __fastcall HandleSafeCallException(System::TObject* ExceptObject, void * ExceptAddr, const GUID &ErrorIID, const System::WideString ProgID, const System::WideString HelpFileName);
extern DELPHI_PACKAGE void __fastcall OleError(HRESULT ErrorCode);
extern DELPHI_PACKAGE void __fastcall OleCheck(HRESULT Result);
extern DELPHI_PACKAGE GUID __fastcall StringToGUID(const System::UnicodeString S);
extern DELPHI_PACKAGE System::UnicodeString __fastcall GUIDToString(const GUID &ClassID);
extern DELPHI_PACKAGE GUID __fastcall ProgIDToClassID(const System::UnicodeString ProgID);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ClassIDToProgID(const GUID &ClassID);
#ifndef _WIN64
extern DELPHI_PACKAGE void __fastcall CreateRegKey(const System::UnicodeString Key, const System::UnicodeString ValueName, const System::UnicodeString Value, HKEY RootKey = (HKEY)(0x80000000));
extern DELPHI_PACKAGE void __fastcall DeleteRegKey(const System::UnicodeString Key, HKEY RootKey = (HKEY)(0x80000000));
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetRegStringValue(const System::UnicodeString Key, const System::UnicodeString ValueName, HKEY RootKey = (HKEY)(0x80000000));
#else /* _WIN64 */
extern DELPHI_PACKAGE void __fastcall CreateRegKey(const System::UnicodeString Key, const System::UnicodeString ValueName, const System::UnicodeString Value, HKEY RootKey = (HKEY)(0xffffffff80000000ULL));
extern DELPHI_PACKAGE void __fastcall DeleteRegKey(const System::UnicodeString Key, HKEY RootKey = (HKEY)(0xffffffff80000000ULL));
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetRegStringValue(const System::UnicodeString Key, const System::UnicodeString ValueName, HKEY RootKey = (HKEY)(0xffffffff80000000ULL));
#endif /* _WIN64 */
extern DELPHI_PACKAGE System::_di_IInterface __fastcall CreateComObject(const GUID &ClassID);
extern DELPHI_PACKAGE System::_di_IInterface __fastcall CreateRemoteComObject(const System::WideString MachineName, const GUID &ClassID);
extern DELPHI_PACKAGE _di_IDispatch __fastcall CreateOleObject(const System::UnicodeString ClassName);
extern DELPHI_PACKAGE _di_IDispatch __fastcall GetActiveOleObject(const System::UnicodeString ClassName);
extern DELPHI_PACKAGE System::WideChar * __fastcall StringToLPOLESTR(const System::UnicodeString Source);
extern DELPHI_PACKAGE System::UnicodeString __fastcall CreateClassID(void);
extern DELPHI_PACKAGE void __fastcall RegisterComServer(const System::UnicodeString DLLName);
extern DELPHI_PACKAGE void __fastcall RegisterAsService(const System::UnicodeString ClassID, const System::UnicodeString ServiceName);
extern DELPHI_PACKAGE void __fastcall InterfaceConnect(const System::_di_IInterface Source, const GUID &IID, const System::_di_IInterface Sink, int &Connection);
extern DELPHI_PACKAGE void __fastcall InterfaceDisconnect(const System::_di_IInterface Source, const GUID &IID, int &Connection);
extern DELPHI_PACKAGE void __fastcall DispatchInvoke(const _di_IDispatch Dispatch, System::PCallDesc CallDesc, Winapi::Activex::PDispIDList DispIDs, void * Params, System::PVariant Result);
extern DELPHI_PACKAGE void __fastcall DispatchInvokeError(int Status, const tagEXCEPINFO &ExcepInfo);
extern DELPHI_PACKAGE System::OleVariant __fastcall GetDispatchPropValue(const _di_IDispatch Disp, int DispID)/* overload */;
extern DELPHI_PACKAGE System::OleVariant __fastcall GetDispatchPropValue(const _di_IDispatch Disp, System::WideString Name)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetDispatchPropValue(const _di_IDispatch Disp, int DispID, const System::OleVariant &Value)/* overload */;
extern DELPHI_PACKAGE void __fastcall SetDispatchPropValue(const _di_IDispatch Disp, System::WideString Name, const System::OleVariant &Value)/* overload */;
extern DELPHI_PACKAGE HRESULT __fastcall EventDispatchInvoke(int DispId, tagDISPPARAMS &ADispParams, _di_TEventDispatchInvoker Invoker);
extern DELPHI_PACKAGE TComClassManager* __fastcall ComClassManager(void);
}	/* namespace Comobj */
}	/* namespace Win */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_WIN_COMOBJ)
using namespace System::Win::Comobj;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_WIN)
using namespace System::Win;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_Win_ComobjHPP
