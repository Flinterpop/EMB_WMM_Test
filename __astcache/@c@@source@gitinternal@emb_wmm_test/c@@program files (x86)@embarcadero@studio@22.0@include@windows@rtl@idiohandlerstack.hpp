// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdIOHandlerStack.pas' rev: 35.00 (Windows)

#ifndef IdiohandlerstackHPP
#define IdiohandlerstackHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <IdGlobal.hpp>
#include <IdSocketHandle.hpp>
#include <IdIOHandlerSocket.hpp>
#include <IdExceptionCore.hpp>
#include <IdStack.hpp>
#include <System.SysUtils.hpp>
#include <IdIOHandler.hpp>
#include <IdComponent.hpp>
#include <IdBaseComponent.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idiohandlerstack
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdIOHandlerStack;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TIdIOHandlerStack : public Idiohandlersocket::TIdIOHandlerSocket
{
	typedef Idiohandlersocket::TIdIOHandlerSocket inherited;
	
protected:
	virtual void __fastcall ConnectClient();
	virtual int __fastcall ReadDataFromSource(Idglobal::TIdBytes &VBuffer);
	virtual int __fastcall WriteDataToTarget(const Idglobal::TIdBytes ABuffer, const int AOffset, const int ALength);
	
public:
	virtual void __fastcall CheckForDisconnect(bool ARaiseExceptionIfDisconnected = true, bool AIgnoreBuffer = false);
	virtual bool __fastcall Connected();
	virtual bool __fastcall Readable(int AMSec = 0xffffffff);
	
__published:
	__property ReadTimeout = {default=-1};
public:
	/* TIdIOHandlerSocket.Destroy */ inline __fastcall virtual ~TIdIOHandlerStack() { }
	
public:
	/* TIdBaseComponent.Create */ inline __fastcall TIdIOHandlerStack(System::Classes::TComponent* AOwner)/* overload */ : Idiohandlersocket::TIdIOHandlerSocket(AOwner) { }
	
public:
	/* TIdInitializerComponent.Create */ inline __fastcall TIdIOHandlerStack()/* overload */ : Idiohandlersocket::TIdIOHandlerSocket() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idiohandlerstack */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDIOHANDLERSTACK)
using namespace Idiohandlerstack;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdiohandlerstackHPP
