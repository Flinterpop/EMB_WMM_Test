// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Stan.Factory.pas' rev: 35.00 (Windows)

#ifndef Firedac_Stan_FactoryHPP
#define Firedac_Stan_FactoryHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <FireDAC.Stan.Intf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Stan
{
namespace Factory
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDObject;
class DELPHICLASS TFDFactory;
class DELPHICLASS TFDSingletonFactory;
class DELPHICLASS TFDMultyInstanceFactory;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TFDObjectClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDObjectClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDObject : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::Classes::_di_IInterfaceComponentReference FComponentReference;
	
protected:
	HIDESBASE HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	void __fastcall SetComponentReference(const System::Classes::_di_IInterfaceComponentReference AValue);
	__classmethod virtual bool __fastcall IsFactoryEnabled(const System::UnicodeString AMyProvider, const System::UnicodeString AReqProvider);
	virtual void __fastcall Finalize();
	
public:
	int __fastcall FDDecRef(const int AValue = 0x1);
	int __fastcall FDAddRef(const int AValue = 0x1);
	__fastcall virtual TFDObject();
	virtual void __fastcall Initialize();
	__fastcall virtual ~TFDObject();
private:
	void *__IFDStanComponentReference;	// Firedac::Stan::Intf::IFDStanComponentReference 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2029}
	operator Firedac::Stan::Intf::_di_IFDStanComponentReference()
	{
		Firedac::Stan::Intf::_di_IFDStanComponentReference intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanComponentReference*(void) { return (Firedac::Stan::Intf::IFDStanComponentReference*)&__IFDStanComponentReference; }
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
	operator System::IInterface*(void) { return (System::IInterface*)&__IFDStanComponentReference; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDFactory : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TFDObjectClass FClass;
	GUID FClassID;
	System::Classes::TStringList* FProviders;
	
protected:
	virtual System::TObject* __fastcall CreateObject(const System::UnicodeString AProvider) = 0 ;
	virtual bool __fastcall Match(const GUID &AIID, const System::UnicodeString AProvider, bool AValidate);
	
public:
	__fastcall TFDFactory(TFDObjectClass AClass, const GUID &AClassID, const System::UnicodeString AProviders);
	__fastcall virtual ~TFDFactory();
	void __fastcall GetProviders(System::Classes::TStrings* AList);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDSingletonFactory : public TFDFactory
{
	typedef TFDFactory inherited;
	
private:
	TFDObject* FSingleton;
	System::_di_IInterface FSingletonIntf;
	
protected:
	virtual System::TObject* __fastcall CreateObject(const System::UnicodeString AProvider);
	
public:
	__fastcall virtual ~TFDSingletonFactory();
public:
	/* TFDFactory.Create */ inline __fastcall TFDSingletonFactory(TFDObjectClass AClass, const GUID &AClassID, const System::UnicodeString AProviders) : TFDFactory(AClass, AClassID, AProviders) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDMultyInstanceFactory : public TFDFactory
{
	typedef TFDFactory inherited;
	
protected:
	virtual System::TObject* __fastcall CreateObject(const System::UnicodeString AProvider);
public:
	/* TFDFactory.Create */ inline __fastcall TFDMultyInstanceFactory(TFDObjectClass AClass, const GUID &AClassID, const System::UnicodeString AProviders) : TFDFactory(AClass, AClassID, AProviders) { }
	/* TFDFactory.Destroy */ inline __fastcall virtual ~TFDMultyInstanceFactory() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall FDCreateInterface(const GUID &AIID, /* out */ void *AIntf, const bool ARequired = true, const System::UnicodeString AProvider = System::UnicodeString());
extern DELPHI_PACKAGE void __fastcall FDGetProviders(const GUID &AIID, System::Classes::TStrings* AList);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDGetUnit(const GUID &AIID, const System::UnicodeString AProvider = System::UnicodeString());
extern DELPHI_PACKAGE void __fastcall FDReleaseFactory(TFDFactory* &AFactory);
extern DELPHI_PACKAGE void __fastcall FDTerminate(void);
}	/* namespace Factory */
}	/* namespace Stan */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN_FACTORY)
using namespace Firedac::Stan::Factory;
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
#endif	// Firedac_Stan_FactoryHPP
