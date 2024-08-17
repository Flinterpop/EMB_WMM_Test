// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Comp.UI.pas' rev: 35.00 (Windows)

#ifndef Firedac_Comp_UiHPP
#define Firedac_Comp_UiHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Consts.hpp>
#include <FireDAC.UI.Intf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Comp
{
namespace Ui
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDGUIxComponent;
class DELPHICLASS TFDGUIxAsyncExecuteDialog;
class DELPHICLASS TFDGUIxErrorDialog;
class DELPHICLASS TFDGUIxLoginDialog;
class DELPHICLASS TFDGUIxScriptDialog;
class DELPHICLASS TFDGUIxWaitCursor;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TFDGUIxComponent : public Firedac::Stan::Intf::TFDComponent
{
	typedef Firedac::Stan::Intf::TFDComponent inherited;
	
private:
	System::UnicodeString FProvider;
	bool FProviderSpecified;
	
protected:
	System::UnicodeString __fastcall GetProvider();
	virtual void __fastcall SetProvider(const System::UnicodeString AValue);
	
public:
	__classmethod virtual GUID __fastcall GetGUID();
	__property bool ProviderSpecified = {read=FProviderSpecified, nodefault};
	
__published:
	__property System::UnicodeString Provider = {read=GetProvider, write=SetProvider, stored=FProviderSpecified};
public:
	/* TComponent.Create */ inline __fastcall virtual TFDGUIxComponent(System::Classes::TComponent* AOwner) : Firedac::Stan::Intf::TFDComponent(AOwner) { }
	/* TComponent.Destroy */ inline __fastcall virtual ~TFDGUIxComponent() { }
	
};


class PASCALIMPLEMENTATION TFDGUIxAsyncExecuteDialog : public TFDGUIxComponent
{
	typedef TFDGUIxComponent inherited;
	
private:
	Firedac::Ui::Intf::_di_IFDGUIxAsyncExecuteDialog FAsyncDialog;
	System::UnicodeString FCaption;
	System::UnicodeString FPrompt;
	int FShowDelay;
	int FHideDelay;
	System::Classes::TNotifyEvent FOnShow;
	System::Classes::TNotifyEvent FOnHide;
	Firedac::Ui::Intf::_di_IFDGUIxAsyncExecuteDialog __fastcall GetAsyncDialog();
	void __fastcall DoOnShow(System::TObject* ASender);
	void __fastcall DoOnHide(System::TObject* ASender);
	System::UnicodeString __fastcall GetCaption();
	void __fastcall SetCaption(const System::UnicodeString AValue);
	bool __fastcall IsCS();
	int __fastcall GetShowDelay();
	void __fastcall SetShowDelay(const int AValue);
	int __fastcall GetHideDelay();
	void __fastcall SetHideDelay(const int AValue);
	System::UnicodeString __fastcall GetPrompt();
	void __fastcall SetPrompt(const System::UnicodeString AValue);
	bool __fastcall IsPS();
	
protected:
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TFDGUIxAsyncExecuteDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDGUIxAsyncExecuteDialog();
	__classmethod virtual GUID __fastcall GetGUID();
	__property Firedac::Ui::Intf::_di_IFDGUIxAsyncExecuteDialog AsyncDialog = {read=FAsyncDialog};
	
__published:
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=IsCS};
	__property System::UnicodeString Prompt = {read=GetPrompt, write=SetPrompt, stored=IsPS};
	__property int ShowDelay = {read=GetShowDelay, write=SetShowDelay, default=200};
	__property int HideDelay = {read=GetHideDelay, write=SetHideDelay, default=200};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2202}
	operator Firedac::Ui::Intf::_di_IFDGUIxAsyncExecuteDialog() { return AsyncDialog; }
	#else
	operator Firedac::Ui::Intf::IFDGUIxAsyncExecuteDialog*(void) { return (Firedac::Ui::Intf::IFDGUIxAsyncExecuteDialog*)AsyncDialog; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDGUIxErrorDialog : public TFDGUIxComponent
{
	typedef TFDGUIxComponent inherited;
	
private:
	Firedac::Ui::Intf::_di_IFDGUIxErrorDialog FErrorDialog;
	System::UnicodeString FCaption;
	bool FEnabled;
	bool FStayOnTop;
	Firedac::Ui::Intf::TFDGUIxErrorDialogEvent FOnHide;
	Firedac::Ui::Intf::TFDGUIxErrorDialogEvent FOnShow;
	Firedac::Ui::Intf::_di_IFDGUIxErrorDialog __fastcall GetErrorDialog();
	System::UnicodeString __fastcall GetCaption();
	void __fastcall SetCaption(const System::UnicodeString AValue);
	bool __fastcall IsCS();
	void __fastcall DoOnHide(System::TObject* ASender, Firedac::Stan::Error::EFDDBEngineException* AException);
	void __fastcall DoOnShow(System::TObject* ASender, Firedac::Stan::Error::EFDDBEngineException* AException);
	bool __fastcall GetEnabled();
	void __fastcall SetEnabled(const bool AValue);
	bool __fastcall GetStayOnTop();
	void __fastcall SetStayOnTop(const bool AValue);
	
protected:
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TFDGUIxErrorDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDGUIxErrorDialog();
	__classmethod virtual GUID __fastcall GetGUID();
	void __fastcall Execute(Firedac::Stan::Error::EFDDBEngineException* E);
	__property Firedac::Ui::Intf::_di_IFDGUIxErrorDialog ErrorDialog = {read=FErrorDialog};
	
__published:
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=IsCS};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled, default=1};
	__property bool StayOnTop = {read=GetStayOnTop, write=SetStayOnTop, default=1};
	__property Firedac::Ui::Intf::TFDGUIxErrorDialogEvent OnShow = {read=FOnShow, write=FOnShow};
	__property Firedac::Ui::Intf::TFDGUIxErrorDialogEvent OnHide = {read=FOnHide, write=FOnHide};
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2203}
	operator Firedac::Ui::Intf::_di_IFDGUIxErrorDialog() { return ErrorDialog; }
	#else
	operator Firedac::Ui::Intf::IFDGUIxErrorDialog*(void) { return (Firedac::Ui::Intf::IFDGUIxErrorDialog*)ErrorDialog; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDGUIxLoginDialog : public TFDGUIxComponent
{
	typedef TFDGUIxComponent inherited;
	
private:
	Firedac::Ui::Intf::_di_IFDGUIxLoginDialog FLoginDialog;
	System::UnicodeString FCaption;
	bool FHistoryEnabled;
	System::UnicodeString FHistoryKey;
	Firedac::Ui::Intf::TFDGUIxLoginHistoryStorage FHistoryStorage;
	bool FHistoryWithPassword;
	int FLoginRetries;
	System::Classes::TStrings* FVisibleItems;
	bool FChangeExpiredPassword;
	Firedac::Stan::Intf::_di_IFDStanConnectionDef FConnectionDef;
	Firedac::Ui::Intf::TFDGUIxLoginDialogEvent FOnChangePassword;
	Firedac::Ui::Intf::TFDGUIxLoginDialogEvent FOnLogin;
	System::Classes::TNotifyEvent FOnHide;
	System::Classes::TNotifyEvent FOnShow;
	Firedac::Ui::Intf::_di_IFDGUIxLoginDialog __fastcall GetLoginDialog();
	System::UnicodeString __fastcall GetCaption();
	bool __fastcall GetChangeExpiredPassword();
	Firedac::Stan::Intf::_di_IFDStanConnectionDef __fastcall GetConnectionDef();
	bool __fastcall GetHistoryEnabled();
	System::UnicodeString __fastcall GetHistoryKey();
	Firedac::Ui::Intf::TFDGUIxLoginHistoryStorage __fastcall GetHistoryStorage();
	bool __fastcall GetHistoryWithPassword();
	int __fastcall GetLoginRetries();
	System::Classes::TStrings* __fastcall GetVisibleItems();
	void __fastcall SetCaption(const System::UnicodeString AValue);
	void __fastcall SetConnectionDef(const Firedac::Stan::Intf::_di_IFDStanConnectionDef AConnectionDef);
	void __fastcall SetChangeExpiredPassword(const bool AValue);
	void __fastcall SetHistoryEnabled(const bool AValue);
	void __fastcall SetHistoryKey(const System::UnicodeString AValue);
	void __fastcall SetHistoryStorage(const Firedac::Ui::Intf::TFDGUIxLoginHistoryStorage AValue);
	void __fastcall SetHistoryWithPassword(const bool AValue);
	void __fastcall SetLoginRetries(const int AValue);
	void __fastcall SetVisibleItems(System::Classes::TStrings* const AValue);
	void __fastcall DoOnHide(System::TObject* ASender);
	void __fastcall DoOnShow(System::TObject* ASender);
	void __fastcall DoChangePassword(System::TObject* ASender, bool &AResult);
	void __fastcall DoLogin(System::TObject* ASender, bool &AResult);
	void __fastcall SetOnChangePassword(const Firedac::Ui::Intf::TFDGUIxLoginDialogEvent AValue);
	void __fastcall SetOnLogin(const Firedac::Ui::Intf::TFDGUIxLoginDialogEvent AValue);
	bool __fastcall IsCS();
	bool __fastcall IsHKS();
	bool __fastcall IsVIS();
	
protected:
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TFDGUIxLoginDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDGUIxLoginDialog();
	__classmethod virtual GUID __fastcall GetGUID();
	bool __fastcall Execute(Firedac::Ui::Intf::TFDGUIxLoginAction ALoginAction);
	void __fastcall GetAllLoginParams();
	__property Firedac::Stan::Intf::_di_IFDStanConnectionDef ConnectionDef = {read=GetConnectionDef, write=SetConnectionDef};
	__property Firedac::Ui::Intf::_di_IFDGUIxLoginDialog LoginDialog = {read=FLoginDialog};
	
__published:
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=IsCS};
	__property bool HistoryEnabled = {read=GetHistoryEnabled, write=SetHistoryEnabled, default=0};
	__property bool HistoryWithPassword = {read=GetHistoryWithPassword, write=SetHistoryWithPassword, default=1};
	__property Firedac::Ui::Intf::TFDGUIxLoginHistoryStorage HistoryStorage = {read=GetHistoryStorage, write=SetHistoryStorage, default=0};
	__property System::UnicodeString HistoryKey = {read=GetHistoryKey, write=SetHistoryKey, stored=IsHKS};
	__property System::Classes::TStrings* VisibleItems = {read=GetVisibleItems, write=SetVisibleItems, stored=IsVIS};
	__property int LoginRetries = {read=GetLoginRetries, write=SetLoginRetries, default=3};
	__property bool ChangeExpiredPassword = {read=GetChangeExpiredPassword, write=SetChangeExpiredPassword, default=1};
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property Firedac::Ui::Intf::TFDGUIxLoginDialogEvent OnLogin = {read=FOnLogin, write=SetOnLogin};
	__property Firedac::Ui::Intf::TFDGUIxLoginDialogEvent OnChangePassword = {read=FOnChangePassword, write=SetOnChangePassword};
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2200}
	operator Firedac::Ui::Intf::_di_IFDGUIxLoginDialog() { return LoginDialog; }
	#else
	operator Firedac::Ui::Intf::IFDGUIxLoginDialog*(void) { return (Firedac::Ui::Intf::IFDGUIxLoginDialog*)LoginDialog; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDGUIxScriptDialog : public TFDGUIxComponent
{
	typedef TFDGUIxComponent inherited;
	
private:
	Firedac::Ui::Intf::_di_IFDGUIxScriptDialog FScriptDialog;
	System::UnicodeString FCaption;
	Firedac::Ui::Intf::TFDGUIxScriptOptions FOptions;
	Firedac::Ui::Intf::TFDGUIxScriptOutputEvent FOnOutput;
	Firedac::Ui::Intf::TFDGUIxScriptInputEvent FOnInput;
	Firedac::Ui::Intf::TFDGUIxScriptPauseEvent FOnPause;
	Firedac::Ui::Intf::TFDGUIxScriptProgressEvent FOnProgress;
	System::Classes::TNotifyEvent FOnShow;
	System::Classes::TNotifyEvent FOnHide;
	Firedac::Ui::Intf::_di_IFDGUIxScriptDialog __fastcall GetScriptDialog();
	System::UnicodeString __fastcall GetCaption();
	bool __fastcall IsCS();
	void __fastcall SetCaption(const System::UnicodeString AValue);
	void __fastcall DoOnHide(System::TObject* ASender);
	void __fastcall DoOnShow(System::TObject* ASender);
	void __fastcall DoOnProgress(System::TObject* ASender, System::TObject* AInfoProvider);
	void __fastcall DoOnOutput(System::TObject* ASender, const System::UnicodeString AStr);
	void __fastcall DoOnInput(System::TObject* ASender, const System::UnicodeString APrompt, System::UnicodeString &AResult);
	void __fastcall DoOnPause(System::TObject* ASender, const System::UnicodeString APrompt);
	Firedac::Ui::Intf::TFDGUIxScriptOptions __fastcall GetOptions();
	void __fastcall SetOptions(const Firedac::Ui::Intf::TFDGUIxScriptOptions AValue);
	
protected:
	virtual void __fastcall Loaded();
	
public:
	__fastcall virtual TFDGUIxScriptDialog(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDGUIxScriptDialog();
	__classmethod virtual GUID __fastcall GetGUID();
	__property Firedac::Ui::Intf::_di_IFDGUIxScriptDialog ScriptDialog = {read=FScriptDialog};
	
__published:
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption, stored=IsCS};
	__property Firedac::Ui::Intf::TFDGUIxScriptOptions Options = {read=GetOptions, write=SetOptions, default=7};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
	__property Firedac::Ui::Intf::TFDGUIxScriptProgressEvent OnProgress = {read=FOnProgress, write=FOnProgress};
	__property Firedac::Ui::Intf::TFDGUIxScriptOutputEvent OnOutput = {read=FOnOutput, write=FOnOutput};
	__property Firedac::Ui::Intf::TFDGUIxScriptInputEvent OnInput = {read=FOnInput, write=FOnInput};
	__property Firedac::Ui::Intf::TFDGUIxScriptPauseEvent OnPause = {read=FOnPause, write=FOnPause};
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2205}
	operator Firedac::Ui::Intf::_di_IFDGUIxScriptDialog() { return ScriptDialog; }
	#else
	operator Firedac::Ui::Intf::IFDGUIxScriptDialog*(void) { return (Firedac::Ui::Intf::IFDGUIxScriptDialog*)ScriptDialog; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDGUIxWaitCursor : public TFDGUIxComponent
{
	typedef TFDGUIxComponent inherited;
	
private:
	Firedac::Ui::Intf::_di_IFDGUIxWaitCursor FWaitCursor;
	Firedac::Ui::Intf::TFDGUIxScreenCursor FScreenCursor;
	System::Classes::TNotifyEvent FOnHide;
	System::Classes::TNotifyEvent FOnShow;
	Firedac::Ui::Intf::_di_IFDGUIxWaitCursor __fastcall GetGUIxWaitCursor();
	Firedac::Ui::Intf::TFDGUIxScreenCursor __fastcall GetScreenCursor();
	void __fastcall SetScreenCursor(const Firedac::Ui::Intf::TFDGUIxScreenCursor AValue);
	void __fastcall DoOnHide(System::TObject* ASender);
	void __fastcall DoOnShow(System::TObject* ASender);
	
protected:
	virtual void __fastcall Loaded();
	virtual void __fastcall SetProvider(const System::UnicodeString AValue);
	
public:
	__fastcall virtual TFDGUIxWaitCursor(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDGUIxWaitCursor();
	__classmethod virtual GUID __fastcall GetGUID();
	__property Firedac::Ui::Intf::_di_IFDGUIxWaitCursor WaitCursor = {read=FWaitCursor};
	
__published:
	__property Firedac::Ui::Intf::TFDGUIxScreenCursor ScreenCursor = {read=GetScreenCursor, write=SetScreenCursor, default=3};
	__property System::Classes::TNotifyEvent OnShow = {read=FOnShow, write=FOnShow};
	__property System::Classes::TNotifyEvent OnHide = {read=FOnHide, write=FOnHide};
private:
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2201}
	operator Firedac::Ui::Intf::_di_IFDGUIxWaitCursor() { return WaitCursor; }
	#else
	operator Firedac::Ui::Intf::IFDGUIxWaitCursor*(void) { return (Firedac::Ui::Intf::IFDGUIxWaitCursor*)WaitCursor; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Ui */
}	/* namespace Comp */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_COMP_UI)
using namespace Firedac::Comp::Ui;
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
#endif	// Firedac_Comp_UiHPP
