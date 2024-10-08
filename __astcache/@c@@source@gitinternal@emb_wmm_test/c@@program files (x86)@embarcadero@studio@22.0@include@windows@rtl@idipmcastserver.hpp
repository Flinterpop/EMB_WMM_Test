﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdIPMCastServer.pas' rev: 35.00 (Windows)

#ifndef IdipmcastserverHPP
#define IdipmcastserverHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <IdComponent.hpp>
#include <IdGlobal.hpp>
#include <IdIPMCastBase.hpp>
#include <IdSocketHandle.hpp>
#include <IdBaseComponent.hpp>
#include <System.Classes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idipmcastserver
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdIPMCastServer;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TIdIPMCastServer : public Idipmcastbase::TIdIPMCastBase
{
	typedef Idipmcastbase::TIdIPMCastBase inherited;
	
protected:
	Idsockethandle::TIdSocketHandle* FBinding;
	System::UnicodeString FBoundIP;
	System::Word FBoundPort;
	bool FLoopback;
	System::Byte FTimeToLive;
	void __fastcall ApplyLoopback();
	void __fastcall ApplyTimeToLive();
	virtual void __fastcall CloseBinding();
	virtual bool __fastcall GetActive();
	virtual Idsockethandle::TIdSocketHandle* __fastcall GetBinding();
	void __fastcall MulticastBuffer(const System::UnicodeString AHost, const int APort, const Idglobal::TIdBytes ABuffer);
	virtual void __fastcall SetLoopback(const bool AValue);
	virtual void __fastcall SetTTL(const System::Byte AValue);
	virtual void __fastcall InitComponent();
	
public:
	void __fastcall Send(const System::UnicodeString AData, Idglobal::_di_IIdTextEncoding AByteEncoding = Idglobal::_di_IIdTextEncoding())/* overload */;
	void __fastcall Send(const Idglobal::TIdBytes ABuffer)/* overload */;
	__fastcall virtual ~TIdIPMCastServer();
	__property Idsockethandle::TIdSocketHandle* Binding = {read=GetBinding};
	
__published:
	__property Active = {default=0};
	__property System::UnicodeString BoundIP = {read=FBoundIP, write=FBoundIP};
	__property System::Word BoundPort = {read=FBoundPort, write=FBoundPort, nodefault};
	__property bool Loopback = {read=FLoopback, write=SetLoopback, default=1};
	__property MulticastGroup = {default=0};
	__property IPVersion = {default=0};
	__property Port;
	__property ReuseSocket = {default=0};
	__property System::Byte TimeToLive = {read=FTimeToLive, write=SetTTL, default=1};
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdIPMCastServer(System::Classes::TComponent* AOwner)/* overload */ : Idipmcastbase::TIdIPMCastBase(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdIPMCastServer()/* overload */ : Idipmcastbase::TIdIPMCastBase() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const bool DEF_IMP_LOOPBACK = true;
static const System::Int8 DEF_IMP_TTL = System::Int8(0x1);
}	/* namespace Idipmcastserver */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDIPMCASTSERVER)
using namespace Idipmcastserver;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdipmcastserverHPP
