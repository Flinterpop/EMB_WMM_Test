// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.UI.Intf.pas' rev: 35.00 (Windows)

#ifndef Firedac_Ui_IntfHPP
#define Firedac_Ui_IntfHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Error.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Ui
{
namespace Intf
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE IFDGUIxLoginDialog;
typedef System::DelphiInterface<IFDGUIxLoginDialog> _di_IFDGUIxLoginDialog;
__interface DELPHIINTERFACE IFDGUIxTimer;
typedef System::DelphiInterface<IFDGUIxTimer> _di_IFDGUIxTimer;
__interface DELPHIINTERFACE IFDGUIxWaitCursor;
typedef System::DelphiInterface<IFDGUIxWaitCursor> _di_IFDGUIxWaitCursor;
__interface DELPHIINTERFACE IFDGUIxAsyncExecuteDialog;
typedef System::DelphiInterface<IFDGUIxAsyncExecuteDialog> _di_IFDGUIxAsyncExecuteDialog;
__interface DELPHIINTERFACE IFDGUIxErrorDialog;
typedef System::DelphiInterface<IFDGUIxErrorDialog> _di_IFDGUIxErrorDialog;
__interface DELPHIINTERFACE IFDGUIxScriptDialogInfoProvider;
typedef System::DelphiInterface<IFDGUIxScriptDialogInfoProvider> _di_IFDGUIxScriptDialogInfoProvider;
__interface DELPHIINTERFACE IFDGUIxScriptDialog;
typedef System::DelphiInterface<IFDGUIxScriptDialog> _di_IFDGUIxScriptDialog;
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TFDGUIxLoginAction)(void);

enum DECLSPEC_DENUM TFDGUIxLoginHistoryStorage : unsigned int { hsRegistry, hsFile };

typedef void __fastcall (__closure *TFDGUIxLoginDialogEvent)(System::TObject* ASender, bool &AResult);

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2200}") IFDGUIxLoginDialog  : public System::IInterface 
{
	virtual Firedac::Stan::Intf::_di_IFDStanConnectionDef __fastcall GetConnectionDef() = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetOnHide() = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetOnShow() = 0 ;
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual bool __fastcall GetChangeExpiredPassword() = 0 ;
	virtual bool __fastcall GetHistoryEnabled() = 0 ;
	virtual System::UnicodeString __fastcall GetHistoryKey() = 0 ;
	virtual TFDGUIxLoginHistoryStorage __fastcall GetHistoryStorage() = 0 ;
	virtual bool __fastcall GetHistoryWithPassword() = 0 ;
	virtual int __fastcall GetLoginRetries() = 0 ;
	virtual TFDGUIxLoginDialogEvent __fastcall GetOnChangePassword() = 0 ;
	virtual TFDGUIxLoginDialogEvent __fastcall GetOnLogin() = 0 ;
	virtual System::Classes::TStrings* __fastcall GetVisibleItems() = 0 ;
	virtual void __fastcall SetConnectionDef(const Firedac::Stan::Intf::_di_IFDStanConnectionDef AValue) = 0 ;
	virtual void __fastcall SetOnHide(const System::Classes::TNotifyEvent AValue) = 0 ;
	virtual void __fastcall SetOnShow(const System::Classes::TNotifyEvent AValue) = 0 ;
	virtual void __fastcall SetCaption(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetChangeExpiredPassword(const bool AValue) = 0 ;
	virtual void __fastcall SetHistoryEnabled(const bool AValue) = 0 ;
	virtual void __fastcall SetHistoryKey(const System::UnicodeString AValue) = 0 ;
	virtual void __fastcall SetHistoryStorage(const TFDGUIxLoginHistoryStorage AValue) = 0 ;
	virtual void __fastcall SetHistoryWithPassword(const bool AValue) = 0 ;
	virtual void __fastcall SetLoginRetries(const int AValue) = 0 ;
	virtual void __fastcall SetOnChangePassword(const TFDGUIxLoginDialogEvent AValue) = 0 ;
	virtual void __fastcall SetOnLogin(const TFDGUIxLoginDialogEvent AValue) = 0 ;
	virtual void __fastcall SetVisibleItems(System::Classes::TStrings* const AValue) = 0 ;
	virtual void __fastcall GetAllLoginParams() = 0 ;
	virtual bool __fastcall Execute(TFDGUIxLoginAction AAction = 0x0) = 0 ;
	__property Firedac::Stan::Intf::_di_IFDStanConnectionDef ConnectionDef = {read=GetConnectionDef, write=SetConnectionDef};
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property bool HistoryEnabled = {read=GetHistoryEnabled, write=SetHistoryEnabled};
	__property bool HistoryWithPassword = {read=GetHistoryWithPassword, write=SetHistoryWithPassword};
	__property TFDGUIxLoginHistoryStorage HistoryStorage = {read=GetHistoryStorage, write=SetHistoryStorage};
	__property System::UnicodeString HistoryKey = {read=GetHistoryKey, write=SetHistoryKey};
	__property System::Classes::TStrings* VisibleItems = {read=GetVisibleItems, write=SetVisibleItems};
	__property int LoginRetries = {read=GetLoginRetries, write=SetLoginRetries};
	__property bool ChangeExpiredPassword = {read=GetChangeExpiredPassword, write=SetChangeExpiredPassword};
	__property System::Classes::TNotifyEvent OnHide = {read=GetOnHide, write=SetOnHide};
	__property System::Classes::TNotifyEvent OnShow = {read=GetOnShow, write=SetOnShow};
	__property TFDGUIxLoginDialogEvent OnLogin = {read=GetOnLogin, write=SetOnLogin};
	__property TFDGUIxLoginDialogEvent OnChangePassword = {read=GetOnChangePassword, write=SetOnChangePassword};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2207}") IFDGUIxTimer  : public System::IInterface 
{
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual void __fastcall SetEnabled(bool AValue) = 0 ;
	virtual void __fastcall SetEvent(System::Classes::TNotifyEvent AProc, unsigned ATimeout) = 0 ;
	__property bool Enabled = {read=GetEnabled, write=SetEnabled};
};

enum DECLSPEC_DENUM TFDGUIxScreenCursor : unsigned int { gcrNone, gcrDefault, gcrHourGlass, gcrSQLWait, gcrAppWait };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2201}") IFDGUIxWaitCursor  : public System::IInterface 
{
	virtual TFDGUIxScreenCursor __fastcall GetWaitCursor() = 0 ;
	virtual void __fastcall SetWaitCursor(const TFDGUIxScreenCursor AValue) = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetOnShow() = 0 ;
	virtual void __fastcall SetOnShow(const System::Classes::TNotifyEvent AValue) = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetOnHide() = 0 ;
	virtual void __fastcall SetOnHide(const System::Classes::TNotifyEvent AValue) = 0 ;
	virtual void __fastcall StartWait() = 0 ;
	virtual void __fastcall StopWait() = 0 ;
	virtual void __fastcall PushWait() = 0 ;
	virtual void __fastcall PopWait() = 0 ;
	virtual void __fastcall ForceStopWait() = 0 ;
	__property TFDGUIxScreenCursor WaitCursor = {read=GetWaitCursor, write=SetWaitCursor};
	__property System::Classes::TNotifyEvent OnShow = {read=GetOnShow, write=SetOnShow};
	__property System::Classes::TNotifyEvent OnHide = {read=GetOnHide, write=SetOnHide};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2202}") IFDGUIxAsyncExecuteDialog  : public System::IInterface 
{
	virtual System::Classes::TNotifyEvent __fastcall GetOnShow() = 0 ;
	virtual void __fastcall SetOnShow(const System::Classes::TNotifyEvent AValue) = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetOnHide() = 0 ;
	virtual void __fastcall SetOnHide(const System::Classes::TNotifyEvent AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual void __fastcall SetCaption(const System::UnicodeString AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetPrompt() = 0 ;
	virtual void __fastcall SetPrompt(const System::UnicodeString AValue) = 0 ;
	virtual int __fastcall GetShowDelay() = 0 ;
	virtual void __fastcall SetShowDelay(int AValue) = 0 ;
	virtual int __fastcall GetHideDelay() = 0 ;
	virtual void __fastcall SetHideDelay(int AValue) = 0 ;
	virtual void __fastcall Show(const Firedac::Stan::Intf::_di_IFDStanAsyncExecutor AExecutor) = 0 ;
	virtual void __fastcall Hide() = 0 ;
	virtual bool __fastcall IsFormActive() = 0 ;
	virtual bool __fastcall IsFormMouseMessage(const tagMSG &AMsg) = 0 ;
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property System::UnicodeString Prompt = {read=GetPrompt, write=SetPrompt};
	__property int ShowDelay = {read=GetShowDelay, write=SetShowDelay};
	__property int HideDelay = {read=GetHideDelay, write=SetHideDelay};
	__property System::Classes::TNotifyEvent OnShow = {read=GetOnShow, write=SetOnShow};
	__property System::Classes::TNotifyEvent OnHide = {read=GetOnHide, write=SetOnHide};
};

typedef void __fastcall (__closure *TFDGUIxErrorDialogEvent)(System::TObject* ASender, Firedac::Stan::Error::EFDDBEngineException* AException);

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2203}") IFDGUIxErrorDialog  : public System::IInterface 
{
	virtual TFDGUIxErrorDialogEvent __fastcall GetOnShow() = 0 ;
	virtual void __fastcall SetOnShow(const TFDGUIxErrorDialogEvent AValue) = 0 ;
	virtual TFDGUIxErrorDialogEvent __fastcall GetOnHide() = 0 ;
	virtual void __fastcall SetOnHide(const TFDGUIxErrorDialogEvent AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual void __fastcall SetCaption(const System::UnicodeString AValue) = 0 ;
	virtual bool __fastcall GetEnabled() = 0 ;
	virtual void __fastcall SetEnabled(const bool AValue) = 0 ;
	virtual bool __fastcall GetStayOnTop() = 0 ;
	virtual void __fastcall SetStayOnTop(const bool AValue) = 0 ;
	virtual void __fastcall Execute(Firedac::Stan::Error::EFDDBEngineException* E) = 0 ;
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property bool Enabled = {read=GetEnabled, write=SetEnabled};
	__property bool StayOnTop = {read=GetStayOnTop, write=SetStayOnTop};
	__property TFDGUIxErrorDialogEvent OnShow = {read=GetOnShow, write=SetOnShow};
	__property TFDGUIxErrorDialogEvent OnHide = {read=GetOnHide, write=SetOnHide};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2206}") IFDGUIxScriptDialogInfoProvider  : public System::IInterface 
{
	virtual System::Classes::TStrings* __fastcall GetCallStack() = 0 ;
	virtual int __fastcall GetTotalJobSize() = 0 ;
	virtual int __fastcall GetTotalJobDone() = 0 ;
	virtual int __fastcall GetTotalPct10Done() = 0 ;
	virtual int __fastcall GetTotalErrors() = 0 ;
	virtual bool __fastcall GetIsRunning() = 0 ;
	virtual void __fastcall RequestStop() = 0 ;
	__property System::Classes::TStrings* CallStack = {read=GetCallStack};
	__property int TotalJobSize = {read=GetTotalJobSize};
	__property int TotalJobDone = {read=GetTotalJobDone};
	__property int TotalPct10Done = {read=GetTotalPct10Done};
	__property int TotalErrors = {read=GetTotalErrors};
	__property bool IsRunning = {read=GetIsRunning};
};

typedef void __fastcall (__closure *TFDGUIxScriptProgressEvent)(System::TObject* ASender, System::TObject* AInfoProvider);

typedef void __fastcall (__closure *TFDGUIxScriptOutputEvent)(System::TObject* ASender, const System::UnicodeString AStr);

typedef void __fastcall (__closure *TFDGUIxScriptInputEvent)(System::TObject* ASender, const System::UnicodeString APrompt, System::UnicodeString &AResult);

typedef void __fastcall (__closure *TFDGUIxScriptPauseEvent)(System::TObject* ASender, const System::UnicodeString APrompt);

enum DECLSPEC_DENUM Firedac_Ui_Intf__1 : unsigned int { ssCallstack, ssConsole, ssAutoHide };

typedef System::Set<Firedac_Ui_Intf__1, Firedac_Ui_Intf__1::ssCallstack, Firedac_Ui_Intf__1::ssAutoHide> TFDGUIxScriptOptions;

enum DECLSPEC_DENUM TFDScriptOutputKind : unsigned int { soSeparator, soEcho, soScript, soInfo, soError, soConnect, soServerOutput, soUserOutput, soCommand, soMacro, soData, soParam };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2205}") IFDGUIxScriptDialog  : public System::IInterface 
{
	virtual System::Classes::TNotifyEvent __fastcall GetOnShow() = 0 ;
	virtual void __fastcall SetOnShow(const System::Classes::TNotifyEvent AValue) = 0 ;
	virtual System::Classes::TNotifyEvent __fastcall GetOnHide() = 0 ;
	virtual void __fastcall SetOnHide(const System::Classes::TNotifyEvent AValue) = 0 ;
	virtual TFDGUIxScriptProgressEvent __fastcall GetOnProgress() = 0 ;
	virtual void __fastcall SetOnProgress(const TFDGUIxScriptProgressEvent AValue) = 0 ;
	virtual TFDGUIxScriptOutputEvent __fastcall GetOnOutput() = 0 ;
	virtual void __fastcall SetOnOutput(const TFDGUIxScriptOutputEvent AValue) = 0 ;
	virtual TFDGUIxScriptInputEvent __fastcall GetOnInput() = 0 ;
	virtual void __fastcall SetOnInput(const TFDGUIxScriptInputEvent AValue) = 0 ;
	virtual TFDGUIxScriptPauseEvent __fastcall GetOnPause() = 0 ;
	virtual void __fastcall SetOnPause(const TFDGUIxScriptPauseEvent AValue) = 0 ;
	virtual System::UnicodeString __fastcall GetCaption() = 0 ;
	virtual void __fastcall SetCaption(const System::UnicodeString AValue) = 0 ;
	virtual TFDGUIxScriptOptions __fastcall GetOptions() = 0 ;
	virtual void __fastcall SetOptions(TFDGUIxScriptOptions AValue) = 0 ;
	virtual void __fastcall Show() = 0 ;
	virtual void __fastcall Progress(const _di_IFDGUIxScriptDialogInfoProvider AInfoProvider) = 0 ;
	virtual void __fastcall Output(const System::UnicodeString AStr, TFDScriptOutputKind AKind) = 0 ;
	virtual void __fastcall Input(const System::UnicodeString APrompt, System::UnicodeString &AResult) = 0 ;
	virtual void __fastcall Pause(const System::UnicodeString APrompt) = 0 ;
	virtual void __fastcall Hide() = 0 ;
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property TFDGUIxScriptOptions Options = {read=GetOptions, write=SetOptions};
	__property System::Classes::TNotifyEvent OnShow = {read=GetOnShow, write=SetOnShow};
	__property System::Classes::TNotifyEvent OnHide = {read=GetOnHide, write=SetOnHide};
	__property TFDGUIxScriptProgressEvent OnProgress = {read=GetOnProgress, write=SetOnProgress};
	__property TFDGUIxScriptOutputEvent OnOutput = {read=GetOnOutput, write=SetOnOutput};
	__property TFDGUIxScriptInputEvent OnInput = {read=GetOnInput, write=SetOnInput};
	__property TFDGUIxScriptPauseEvent OnPause = {read=GetOnPause, write=SetOnPause};
};

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool FFDGUIxSilentMode;
extern DELPHI_PACKAGE System::UnicodeString FFDGUIxProvider;
extern DELPHI_PACKAGE bool __fastcall FDGUIxSilent(void);
}	/* namespace Intf */
}	/* namespace Ui */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_UI_INTF)
using namespace Firedac::Ui::Intf;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_UI)
using namespace Firedac::Ui;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC)
using namespace Firedac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Firedac_Ui_IntfHPP
