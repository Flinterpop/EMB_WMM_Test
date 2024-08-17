// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'IdReply.pas' rev: 35.00 (Windows)

#ifndef IdreplyHPP
#define IdreplyHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <IdException.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Idreply
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TIdReply;
class DELPHICLASS TIdReplies;
class DELPHICLASS EIdReplyError;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIdReply : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
protected:
	System::UnicodeString FCode;
	System::Classes::TStrings* FFormattedReply;
	TIdReplies* FReplyTexts;
	System::Classes::TStrings* FText;
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	void __fastcall CommonInit();
	virtual System::Classes::TStrings* __fastcall GetFormattedReplyStrings();
	virtual bool __fastcall CheckIfCodeIsValid(const System::UnicodeString ACode);
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual System::Classes::TStrings* __fastcall GetFormattedReply();
	int __fastcall GetNumericCode();
	void __fastcall SetCode(const System::UnicodeString AValue);
	virtual void __fastcall SetFormattedReply(System::Classes::TStrings* const AValue) = 0 ;
	void __fastcall SetText(System::Classes::TStrings* const AValue);
	void __fastcall SetNumericCode(const int AValue);
	
public:
	virtual void __fastcall Clear();
	__fastcall virtual TIdReply(System::Classes::TCollection* ACollection);
	__fastcall virtual TIdReply(System::Classes::TCollection* ACollection, TIdReplies* AReplyTexts);
	__fastcall virtual ~TIdReply();
	__classmethod virtual bool __fastcall IsEndMarker(const System::UnicodeString ALine);
	virtual void __fastcall RaiseReplyError() = 0 ;
	virtual bool __fastcall ReplyExists();
	virtual void __fastcall SetReply(const int ACode, const System::UnicodeString AText)/* overload */;
	virtual void __fastcall SetReply(const System::UnicodeString ACode, const System::UnicodeString AText)/* overload */;
	void __fastcall UpdateText();
	__property System::Classes::TStrings* FormattedReply = {read=GetFormattedReply, write=SetFormattedReply};
	__property int NumericCode = {read=GetNumericCode, write=SetNumericCode, nodefault};
	
__published:
	__property System::UnicodeString Code = {read=FCode, write=SetCode};
	__property System::Classes::TStrings* Text = {read=FText, write=SetText};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TIdReplyClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TIdReplyClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIdReplies : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
public:
	TIdReply* operator[](int Index) { return this->Items[Index]; }
	
protected:
	HIDESBASE TIdReply* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TIdReply* const Value);
	
public:
	HIDESBASE TIdReply* __fastcall Add()/* overload */;
	HIDESBASE TIdReply* __fastcall Add(const int ACode, const System::UnicodeString AText)/* overload */;
	HIDESBASE TIdReply* __fastcall Add(const System::UnicodeString ACode, const System::UnicodeString AText)/* overload */;
	__fastcall virtual TIdReplies(System::Classes::TPersistent* AOwner, const TIdReplyClass AReplyClass);
	virtual TIdReply* __fastcall Find(const System::UnicodeString ACode, TIdReply* AIgnore = (TIdReply*)(0x0));
	virtual void __fastcall UpdateText(TIdReply* AReply);
	__property TIdReply* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TIdReplies() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TIdRepliesClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TIdRepliesClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIdReplyError : public Idexception::EIdException
{
	typedef Idexception::EIdException inherited;
	
public:
	/* EIdException.Create */ inline __fastcall virtual EIdReplyError(const System::UnicodeString AMsg)/* overload */ : Idexception::EIdException(AMsg) { }
	
public:
	/* Exception.CreateFmt */ inline __fastcall EIdReplyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : Idexception::EIdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIdReplyError(NativeUInt Ident)/* overload */ : Idexception::EIdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIdReplyError(System::PResStringRec ResStringRec)/* overload */ : Idexception::EIdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdReplyError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIdReplyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIdReplyError(const System::UnicodeString Msg, int AHelpContext) : Idexception::EIdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIdReplyError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : Idexception::EIdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdReplyError(NativeUInt Ident, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIdReplyError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdReplyError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIdReplyError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : Idexception::EIdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIdReplyError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Idreply */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IDREPLY)
using namespace Idreply;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// IdreplyHPP
