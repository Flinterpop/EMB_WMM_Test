// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Stan.Util.pas' rev: 35.00 (Windows)

#ifndef Firedac_Stan_UtilHPP
#define Firedac_Stan_UtilHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Win.Registry.hpp>
#include <Winapi.ShellAPI.hpp>
#include <Winapi.ShlObj.hpp>
#include <System.Win.ComObj.hpp>
#include <Winapi.ActiveX.hpp>
#include <System.IniFiles.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.SyncObjs.hpp>
#include <System.Variants.hpp>
#include <Data.FmtBcd.hpp>
#include <Data.SqlTimSt.hpp>
#include <FireDAC.Stan.Intf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Stan
{
namespace Util
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDReadSharedMemoryStream;
class DELPHICLASS TFDThreadMsgBase;
class DELPHICLASS TFDThreadStartMsg;
class DELPHICLASS TFDThreadStopMsg;
class DELPHICLASS TFDThreadTerminateMsg;
class DELPHICLASS TFDThread;
class DELPHICLASS TFDMethodThunk;
class DELPHICLASS TFDRefCounter;
class DELPHICLASS TFDBuffer;
class DELPHICLASS TFDEncoder;
class DELPHICLASS TFDTextFile;
class DELPHICLASS TFDLog;
class DELPHICLASS TFDLibrary;
class DELPHICLASS TFDConfigFile;
//-- type declarations -------------------------------------------------------
typedef char * MarshaledAString;

enum DECLSPEC_DENUM TFDMachineType : unsigned int { mtUnknown, mt32Bit, mt64Bit, mtOther };

typedef System::StaticArray<System::UnicodeString, 4> Firedac_Stan_Util__1;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDReadSharedMemoryStream : public System::Classes::TMemoryStream
{
	typedef System::Classes::TMemoryStream inherited;
	
private:
	bool FShared;
	
protected:
	virtual void * __fastcall Realloc(NativeInt &NewCapacity);
	
public:
	void __fastcall SetData(void * APtr, int ASize);
public:
	/* TMemoryStream.Destroy */ inline __fastcall virtual ~TFDReadSharedMemoryStream() { }
	
public:
	/* TObject.Create */ inline __fastcall TFDReadSharedMemoryStream() : System::Classes::TMemoryStream() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TFDThreadMsgClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDThreadMsgClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDThreadMsgBase : public System::TObject
{
	typedef System::TObject inherited;
	
protected:
	__classmethod virtual bool __fastcall ThreadOwned();
	
public:
	__fastcall virtual TFDThreadMsgBase()/* overload */;
	virtual bool __fastcall Perform(TFDThread* AThread);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDThreadMsgBase() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDThreadStartMsg : public TFDThreadMsgBase
{
	typedef TFDThreadMsgBase inherited;
	
public:
	virtual bool __fastcall Perform(TFDThread* AThread);
public:
	/* TFDThreadMsgBase.Create */ inline __fastcall virtual TFDThreadStartMsg()/* overload */ : TFDThreadMsgBase() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDThreadStartMsg() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDThreadStopMsg : public TFDThreadStartMsg
{
	typedef TFDThreadStartMsg inherited;
	
public:
	/* TFDThreadMsgBase.Create */ inline __fastcall virtual TFDThreadStopMsg()/* overload */ : TFDThreadStartMsg() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDThreadStopMsg() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDThreadTerminateMsg : public TFDThreadMsgBase
{
	typedef TFDThreadMsgBase inherited;
	
public:
	virtual bool __fastcall Perform(TFDThread* AThread);
public:
	/* TFDThreadMsgBase.Create */ inline __fastcall virtual TFDThreadTerminateMsg()/* overload */ : TFDThreadMsgBase() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDThreadTerminateMsg() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDThread : public System::Classes::TThread
{
	typedef System::Classes::TThread inherited;
	
private:
	bool FActive;
	unsigned FStartupTimeout;
	unsigned FIdleTimeout;
	System::Classes::TThreadList* FMessages;
	System::Syncobjs::TEvent* FControlEvent;
	System::Syncobjs::TEvent* FMessageEvent;
	void __fastcall SetActive(bool AValue);
	void __fastcall EnqueueControlMsg(TFDThreadMsgBase* AMsg);
	
protected:
	virtual void __fastcall Execute();
	virtual bool __fastcall DoAllowTerminate();
	virtual void __fastcall DoIdle();
	virtual void __fastcall DoTimeout();
	virtual void __fastcall DoActiveChanged();
	__classmethod virtual TFDThreadMsgClass __fastcall GetStartMsgClass();
	__classmethod virtual TFDThreadMsgClass __fastcall GetStopMsgClass();
	__classmethod virtual TFDThreadMsgClass __fastcall GetTerminateMsgClass();
	__property System::Classes::TThreadList* Messages = {read=FMessages};
	
public:
	__fastcall TFDThread();
	__fastcall virtual ~TFDThread();
	void __fastcall Shutdown(bool AWait = true);
	void __fastcall Ping();
	void __fastcall EnqueueMsg(TFDThreadMsgBase* AMsg);
	__classmethod void __fastcall Synchronize(System::Classes::TThreadMethod AMethod)/* overload */;
	__property unsigned StartupTimeout = {read=FStartupTimeout, write=FStartupTimeout, nodefault};
	__property unsigned IdleTimeout = {read=FIdleTimeout, write=FIdleTimeout, nodefault};
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  Synchronize(System::Classes::_di_TThreadProcedure AThreadProc){ System::Classes::TThread::Synchronize(AThreadProc); }
	
public:
	inline void __fastcall  Synchronize(System::Classes::TThread* const AThread, System::Classes::TThreadMethod AMethod){ System::Classes::TThread::Synchronize(AThread, AMethod); }
	inline void __fastcall  Synchronize(System::Classes::TThread* const AThread, System::Classes::_di_TThreadProcedure AThreadProc){ System::Classes::TThread::Synchronize(AThread, AThreadProc); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDMethodThunk : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	void *FCallAddress;
	void *FProcPtr;
	unsigned FSavedFlag;
	void *FSelfPtr;
	void * __fastcall GetCallAddress();
	
public:
	__fastcall TFDMethodThunk(void * ApSelf, void * ApProc);
	__fastcall virtual ~TFDMethodThunk();
	void __fastcall Clear();
	__property void * CallAddress = {read=GetCallAddress};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDRefCounter : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FRefs;
	System::TObject* FOwner;
	
public:
	__fastcall TFDRefCounter(System::TObject* AOwner);
	__fastcall virtual ~TFDRefCounter();
	void __fastcall CountRef(int AInit = 0x1);
	void __fastcall AddRef();
	void __fastcall RemRef();
	__property int Refs = {read=FRefs, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDBuffer : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	void *FBuffer;
	void *FOrigBuffer;
	unsigned FBufferSize;
	__fastcall TFDBuffer();
	__fastcall virtual ~TFDBuffer();
	void * __fastcall Extend(unsigned ASrcDataLen, unsigned &ADestDataLen, Firedac::Stan::Intf::TFDDataType ASrcType, Firedac::Stan::Intf::TFDDataType ADestType);
	void * __fastcall Check(unsigned ALen = (unsigned)(0x0));
	void __fastcall Release();
	__property void * Ptr = {read=FBuffer};
	__property unsigned Size = {read=FBufferSize, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDEncoder : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TFDBuffer* FBuffer;
	bool FOwnBuffer;
	Firedac::Stan::Intf::TFDEncoding FEncoding;
	unsigned FCodePage;
	System::RawByteString __fastcall GetPreamble();
	void * __fastcall Alloc(unsigned ALen);
	void __fastcall Release(void * APtr);
	__classmethod void __fastcall SetBytes(System::RawByteString &AStr, void * AValue, int ALen, int ATrailerLen);
	__classmethod void __fastcall SetTrailerBytes(System::RawByteString &AStr, bool AAppend, int ATrailerLen);
	
public:
	__fastcall TFDEncoder(TFDBuffer* ABuffer);
	__fastcall virtual ~TFDEncoder();
	System::RawByteString __fastcall Encode(const System::UnicodeString AStr, Firedac::Stan::Intf::TFDEncoding ADestEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0))/* overload */;
	int __fastcall Encode(const void * ASrc, int ASrcLen, void * &ADest, Firedac::Stan::Intf::TFDEncoding ASrcEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0), Firedac::Stan::Intf::TFDEncoding ADestEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0))/* overload */;
	System::RawByteString __fastcall Encode(const void * ASrc, int ASrcLen, Firedac::Stan::Intf::TFDEncoding ASrcEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0), Firedac::Stan::Intf::TFDEncoding ADestEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0))/* overload */;
	int __fastcall Decode(const void * ASrc, int ASrcLen, void * &ADest, Firedac::Stan::Intf::TFDEncoding ADestEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0), Firedac::Stan::Intf::TFDEncoding ASrcEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0))/* overload */;
	System::UnicodeString __fastcall Decode(const System::RawByteString AStr, Firedac::Stan::Intf::TFDEncoding ASrcEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0))/* overload */;
	System::UnicodeString __fastcall Decode(const void * ASrc, int ASrcLen = 0xffffffff, Firedac::Stan::Intf::TFDEncoding ASrcEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0))/* overload */;
	int __fastcall EncodedLength(const System::RawByteString AStr, Firedac::Stan::Intf::TFDEncoding ADestEncoding = (Firedac::Stan::Intf::TFDEncoding)(0x0));
	__classmethod System::UnicodeString __fastcall Deco(const void * ASrc, int ASrcLen, Firedac::Stan::Intf::TFDEncoding ASrcEncoding)/* overload */;
	__classmethod System::UnicodeString __fastcall Deco(const System::RawByteString ASrc, Firedac::Stan::Intf::TFDEncoding ASrcEncoding)/* overload */;
	__classmethod System::RawByteString __fastcall Enco(const System::UnicodeString AStr, Firedac::Stan::Intf::TFDEncoding ADestEncoding)/* overload */;
	__classmethod int __fastcall EncoLength(const System::RawByteString AStr, Firedac::Stan::Intf::TFDEncoding ADestEncoding);
	__property Firedac::Stan::Intf::TFDEncoding Encoding = {read=FEncoding, write=FEncoding, nodefault};
	__property System::RawByteString Preamble = {read=GetPreamble};
	__property TFDBuffer* Buffer = {read=FBuffer};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDTextFile : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::Classes::TStream* FStream;
	bool FStreamOwned;
	TFDBuffer* FBuffer;
	TFDEncoder* FEncoder;
	int FANSIBytesPerChar;
	Firedac::Stan::Intf::TFDTextEndOfLine FEndOfLine;
	__int64 __fastcall GetPosition();
	void __fastcall SetPosition(__int64 AValue);
	
public:
	__fastcall TFDTextFile(const System::UnicodeString AFileName, bool ARead, bool AAppend, Firedac::Stan::Intf::TFDEncoding AEncoding, Firedac::Stan::Intf::TFDTextEndOfLine AEndOfLine)/* overload */;
	__fastcall TFDTextFile(System::Classes::TStream* AStream, bool AOwned, bool ARead, bool AAppend, Firedac::Stan::Intf::TFDEncoding AEncoding, Firedac::Stan::Intf::TFDTextEndOfLine AEndOfLine)/* overload */;
	__fastcall virtual ~TFDTextFile();
	static System::UnicodeString __fastcall GetEOLStr(Firedac::Stan::Intf::TFDTextEndOfLine AEndOfLine);
	void __fastcall WriteChar(const System::WideChar AChar);
	void __fastcall WriteText(const System::UnicodeString AText);
	void __fastcall WriteLine(const System::UnicodeString AText);
	bool __fastcall ReadChar(/* out */ System::WideChar &AChar);
	int __fastcall ReadChars(/* out */ System::WideChar &AChar, int ACount);
	System::UnicodeString __fastcall ReadLine();
	System::UnicodeString __fastcall ExtractString(int AFromPosition, int AToPosition);
	__property System::Classes::TStream* Stream = {read=FStream};
	__property TFDEncoder* Encoder = {read=FEncoder};
	__property Firedac::Stan::Intf::TFDTextEndOfLine EndOfLine = {read=FEndOfLine, nodefault};
	__property __int64 Position = {read=GetPosition, write=SetPosition};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDLog : public Firedac::Stan::Intf::TFDStringList
{
	typedef Firedac::Stan::Intf::TFDStringList inherited;
	
private:
	int FLogLevel;
	
public:
	void __fastcall Value(const System::UnicodeString AName, const System::UnicodeString AValue);
	void __fastcall Msg(const System::UnicodeString AMsg);
	void __fastcall Start(const System::UnicodeString AMsg);
	void __fastcall Stop();
public:
	/* TStringList.Create */ inline __fastcall TFDLog()/* overload */ : Firedac::Stan::Intf::TFDStringList() { }
	/* TStringList.Create */ inline __fastcall TFDLog(bool OwnsObjects)/* overload */ : Firedac::Stan::Intf::TFDStringList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall TFDLog(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : Firedac::Stan::Intf::TFDStringList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall TFDLog(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : Firedac::Stan::Intf::TFDStringList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall TFDLog(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : Firedac::Stan::Intf::TFDStringList(Duplicates, Sorted, CaseSensitive) { }
	/* TStringList.Destroy */ inline __fastcall virtual ~TFDLog() { }
	
};


class PASCALIMPLEMENTATION TFDLibrary : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FDriverID;
	System::TObject* FOwningObj;
	System::UnicodeString FProduct;
	System::UnicodeString FVersionName;
	System::UnicodeString FCopyright;
	System::UnicodeString FInfo;
	System::Classes::TStrings* FFailedProcs;
	
protected:
	unsigned __int64 FVersion;
	System::UnicodeString FVersionStr;
	NativeUInt FhDLL;
	System::UnicodeString FDLLName;
	virtual void __fastcall GetLibraryInfo();
	virtual void __fastcall LoadLibrary(const System::UnicodeString *ADLLNames, const int ADLLNames_High, bool ARequired);
	virtual void * __fastcall GetProc(const System::UnicodeString AProcName, bool ARequired = true);
	virtual void __fastcall LoadEntries() = 0 ;
	
public:
	__fastcall TFDLibrary(const System::UnicodeString ADriverID, System::TObject* AOwningObj);
	__fastcall virtual ~TFDLibrary();
	void __fastcall Load(const System::UnicodeString *ADLLNames, const int ADLLNames_High, bool ARequired);
	virtual void __fastcall Unload();
	__property System::UnicodeString DriverID = {read=FDriverID};
	__property System::TObject* OwningObj = {read=FOwningObj};
#ifndef _WIN64
	__property NativeUInt hDLL = {read=FhDLL, nodefault};
#else /* _WIN64 */
	__property NativeUInt hDLL = {read=FhDLL};
#endif /* _WIN64 */
	__property System::UnicodeString DLLName = {read=FDLLName};
	__property unsigned __int64 Version = {read=FVersion};
	__property System::UnicodeString Product = {read=FProduct};
	__property System::UnicodeString VersionStr = {read=FVersionStr};
	__property System::UnicodeString VersionName = {read=FVersionName};
	__property System::UnicodeString Copyright = {read=FCopyright};
	__property System::UnicodeString Info = {read=FInfo};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDConfigFile : public System::Win::Registry::TRegistryIniFile
{
	typedef System::Win::Registry::TRegistryIniFile inherited;
	
public:
	__fastcall TFDConfigFile(bool AReadOnly);
public:
	/* TRegistryIniFile.Destroy */ inline __fastcall virtual ~TFDConfigFile() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef bool __fastcall (*TFDCheckGuiRunningFunc)(void);

//-- var, const, procedure ---------------------------------------------------
#ifndef _WIN64
static const TFDMachineType mtNative = (TFDMachineType)(1);
#else /* _WIN64 */
static const TFDMachineType mtNative = (TFDMachineType)(2);
#endif /* _WIN64 */
extern DELPHI_PACKAGE Firedac_Stan_Util__1 C_FD_MachineTypes;
extern DELPHI_PACKAGE Firedac::Stan::Intf::TFDParseFmtSettings GParseFmtSettings;
extern DELPHI_PACKAGE Firedac::Stan::Intf::TFDParseFmtSettings GSemicolonFmtSettings;
extern DELPHI_PACKAGE Firedac::Stan::Intf::TFDParseFmtSettings GSpaceFmtSettings;
extern DELPHI_PACKAGE TFDCheckGuiRunningFunc GCheckGuiRunning;
extern DELPHI_PACKAGE bool GIsDesignTime;
extern DELPHI_PACKAGE System::StaticArray<__int64, 15> C_FD_ScaleFactor;
extern DELPHI_PACKAGE bool __fastcall FDInSet(System::WideChar AChar, const Firedac::Stan::Intf::TFDCharSet &ASet);
extern DELPHI_PACKAGE void __fastcall FDFree(System::TObject* AObj);
extern DELPHI_PACKAGE void __fastcall FDFreeAndNil(void *AObj);
extern DELPHI_PACKAGE bool __fastcall FDStrLike(const System::UnicodeString AStr, const System::UnicodeString AMask, bool ANoCase = false, System::WideChar AManyCharsMask = (System::WideChar)(0x25), System::WideChar AOneCharMask = (System::WideChar)(0x5f), System::WideChar AEscapeChar = (System::WideChar)(0x5c));
extern DELPHI_PACKAGE System::WideChar * __fastcall FDStrRPos(System::WideChar * Str1, System::WideChar * Str2);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDPadR(const System::UnicodeString AStr, int ALength);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDPadL(const System::UnicodeString AStr, int ALength);
extern DELPHI_PACKAGE void __fastcall FDBin2HexBS(void * APtr, int ALen, System::PByte ADest);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDBin2Hex(void * APtr, int ALen);
extern DELPHI_PACKAGE System::RawByteString __fastcall FDHex2Bin(System::UnicodeString AStr);
extern DELPHI_PACKAGE bool __fastcall FDStartsWithKW(const System::UnicodeString ASQL, const System::UnicodeString AKw, int &AAfterKw);
extern DELPHI_PACKAGE bool __fastcall FDHasKW(const System::UnicodeString ASQL, const System::UnicodeString AKW);
extern DELPHI_PACKAGE int __fastcall FDAnsiStrLen(char * AStr);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDValToStr(const System::Variant &AValue, bool AQuotes);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDIdentToStr(const System::Variant &AValue, bool &AQuotes);
extern DELPHI_PACKAGE bool __fastcall FDVarToBool(const System::Variant &AValue);
extern DELPHI_PACKAGE bool __fastcall FDSameVariants(const System::Variant &A, const System::Variant &B);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDExtractFieldName(const System::UnicodeString AStr, int &APos)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDExtractFieldName(const System::UnicodeString AStr, int &APos, const Firedac::Stan::Intf::TFDParseFmtSettings &AFmt)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDMergeFieldNames(const System::UnicodeString AFieldNames1, const System::UnicodeString AFieldNames2, bool AIgnoreModifiers = false);
extern DELPHI_PACKAGE int __fastcall FDCountFieldNames(const System::UnicodeString AStr);
extern DELPHI_PACKAGE bool __fastcall FDFieldInFieldNames(const System::UnicodeString AStr, const System::UnicodeString AName);
extern DELPHI_PACKAGE void __fastcall FDFieldNamesToArray(const System::UnicodeString AFieldNames, Firedac::Stan::Intf::TFDStringArray &AFieldNamesArray);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDUnquote(const System::UnicodeString AString, System::WideChar AQuoteChar = (System::WideChar)(0x22));
extern DELPHI_PACKAGE int __fastcall FDCompareAnsiStr(const char * AStr1, const char * AStr2, int ALen1, int ALen2, unsigned ALocale, Firedac::Stan::Intf::TFDCompareDataOptions AOptions);
extern DELPHI_PACKAGE int __fastcall FDCompareWideStr(const System::WideChar * AStr1, const System::WideChar * AStr2, int ALen1, int ALen2, unsigned ALocale, Firedac::Stan::Intf::TFDCompareDataOptions AOptions);
extern DELPHI_PACKAGE int __fastcall FDCompareByteStr(const System::PByte AStr1, const System::PByte AStr2, int ALen1, int ALen2);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDStrReplace(const System::UnicodeString AStr, System::WideChar ASrch, System::WideChar ARepl);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDRemoveChar(const System::UnicodeString AStr, System::WideChar AChar);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDLastSystemErrorMsg(void);
extern DELPHI_PACKAGE int __fastcall FDSQLTimeStamp2Time(const Data::Sqltimst::TSQLTimeStamp &AValue);
extern DELPHI_PACKAGE Data::Sqltimst::TSQLTimeStamp __fastcall FDTime2SQLTimeStamp(const int AValue);
extern DELPHI_PACKAGE int __fastcall FDSQLTimeStamp2Date(const Data::Sqltimst::TSQLTimeStamp &AValue);
extern DELPHI_PACKAGE Data::Sqltimst::TSQLTimeStamp __fastcall FDDate2SQLTimeStamp(const int AValue);
extern DELPHI_PACKAGE System::TDateTime __fastcall FDTime2DateTime(const int AValue);
extern DELPHI_PACKAGE int __fastcall FDDateTime2Time(const System::TDateTime AValue);
extern DELPHI_PACKAGE System::TDateTime __fastcall FDDate2DateTime(const int AValue);
extern DELPHI_PACKAGE int __fastcall FDDateTime2Date(const System::TDateTime AValue);
extern DELPHI_PACKAGE System::TDateTime __fastcall FDMSecs2DateTime(const double AValue);
extern DELPHI_PACKAGE System::Comp __fastcall FDDateTime2MSecs(const System::TDateTime AValue);
extern DELPHI_PACKAGE int __fastcall FDISOStr2Date(System::WideChar * AValue, int ALen);
extern DELPHI_PACKAGE int __fastcall FDISOStr2Time(System::WideChar * AValue, int ALen);
extern DELPHI_PACKAGE bool __fastcall FDISOStr2TimeStamp(System::WideChar * AValue, int ALen, Data::Sqltimst::TSQLTimeStamp &ATimestamp);
extern DELPHI_PACKAGE bool __fastcall FDISOStr2DateTime(System::WideChar * AValue, int ALen, System::Comp &ADatetime);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDGetSystemCfgPath(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDGetAppPath(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDGetAppCfgPath(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDGetAppDocPath(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDGetTempPath(void);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDGetBestPath(const System::UnicodeString ASpecifiedFileName, const System::UnicodeString AGlobalFileName, const System::UnicodeString ADefFileName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDNormPath(const System::UnicodeString APath);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDExtractFileNameNoPath(const System::UnicodeString AFileName);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDBrowseForFolder(NativeUInt AHandle, System::UnicodeString ATitle);
extern DELPHI_PACKAGE unsigned __int64 __fastcall FDVerStr2Int(const System::UnicodeString AVersion);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDVerInt2Str(unsigned __int64 AVersion);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDReadRegValue(const System::UnicodeString AName);
extern DELPHI_PACKAGE void __fastcall FDWriteRegValue(const System::UnicodeString AName, const System::UnicodeString AValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDExpandStr(const System::UnicodeString AStr, System::Classes::TStrings* AVars = (System::Classes::TStrings*)(0x0));
extern DELPHI_PACKAGE void __fastcall FDExpandStrs(System::Classes::TStrings* const AStrs, System::Classes::TStrings* AVars = (System::Classes::TStrings*)(0x0));
extern DELPHI_PACKAGE bool __fastcall FDIsDesignTime(void);
extern DELPHI_PACKAGE int __fastcall FDIndexOf(void * AList, int ALen, void * AItem);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDGetCmdParam(const System::UnicodeString AParName, const System::UnicodeString ADefValue)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FDGetCmdParam(const System::UnicodeString AParName, bool ATrigger, System::UnicodeString &AValue)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FDTimeout(unsigned AStartTicks, unsigned ATimeout);
extern DELPHI_PACKAGE void __fastcall FDStr2BCD(System::WideChar * pIn, int ASize, /* out */ Data::Fmtbcd::TBcd &ABcd, System::WideChar ADot);
extern DELPHI_PACKAGE void __fastcall FDFloatRec2BCD(const System::Sysutils::TFloatRec &ARec, /* out */ Data::Fmtbcd::TBcd &ABcd);
extern DELPHI_PACKAGE void __fastcall FDBCD2Str(System::WideChar * pOut, /* out */ int &ASize, const Data::Fmtbcd::TBcd &ABcd, System::WideChar ADot);
extern DELPHI_PACKAGE void __fastcall FDBcdGetMetrics(const Data::Fmtbcd::TBcd &ABcd, /* out */ short &APrecision, /* out */ short &AScale);
extern DELPHI_PACKAGE void __fastcall FDBCD2Double(const Data::Fmtbcd::TBcd &ABcd, /* out */ System::Extended &AVal);
extern DELPHI_PACKAGE void __fastcall FDDouble2BCD(const System::Extended AExt, /* out */ Data::Fmtbcd::TBcd &AVal);
extern DELPHI_PACKAGE void __fastcall FDInt2Str(void * ASrcData, int ASrcLen, System::WideChar * &ADestData, int &ADestLen, bool ANoSign, int AScale);
extern DELPHI_PACKAGE void __fastcall FDStr2Int(System::WideChar * ASrcData, int ASrcLen, void * ADestData, int ADestLen, bool ANoSign = false, int AScale = 0x0);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDFloat2Str(const System::Extended AValue, System::WideChar ADot = (System::WideChar)(0x2e), int APrec = 0x12);
extern DELPHI_PACKAGE System::Extended __fastcall FDStr2Float(const System::UnicodeString AValue, System::WideChar ADot = (System::WideChar)(0x2e))/* overload */;
extern DELPHI_PACKAGE void __fastcall FDStr2Float(System::WideChar * pIn, int ASize, void * ADestData, int ADestLen, System::WideChar ADot = (System::WideChar)(0x2e))/* overload */;
extern DELPHI_PACKAGE void __fastcall FDCurr2Str(System::WideChar * pOut, /* out */ int &ASize, const System::Currency AValue, System::WideChar ADot = (System::WideChar)(0x2e))/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDCurr2Str(const System::Currency AValue, System::WideChar ADot = (System::WideChar)(0x2e))/* overload */;
extern DELPHI_PACKAGE System::Currency __fastcall FDStr2Curr(const System::UnicodeString AValue, System::WideChar ADot = (System::WideChar)(0x2e))/* overload */;
extern DELPHI_PACKAGE void __fastcall FDStr2Curr(System::WideChar * pIn, int ASize, /* out */ System::Currency &ACurr, System::WideChar ADot = (System::WideChar)(0x2e))/* overload */;
extern DELPHI_PACKAGE bool __fastcall FDBcdIsDecimalPartEmpty(const Data::Fmtbcd::TBcd &ABCD);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDRandomNumber(int AMaxPrec, int AMaxScale, int ASign);
extern DELPHI_PACKAGE NativeUInt __fastcall FDDisableFPExc(void);
extern DELPHI_PACKAGE void __fastcall FDResetFPExc(NativeUInt AValue);
extern DELPHI_PACKAGE bool __fastcall FDGetVersionInfo(const System::UnicodeString AFileName, /* out */ System::UnicodeString &AProduct, /* out */ System::UnicodeString &AVersion, /* out */ System::UnicodeString &AVersionName, /* out */ System::UnicodeString &ACopyright, /* out */ System::UnicodeString &AInfo);
extern DELPHI_PACKAGE TFDMachineType __fastcall FDGetLibMachineType(const System::UnicodeString AFileName);
extern DELPHI_PACKAGE void __fastcall FDHandleException(void);
extern DELPHI_PACKAGE void __fastcall FDShell(const System::UnicodeString ACommand, const System::UnicodeString ALayer);
extern DELPHI_PACKAGE void __fastcall FDFileMove(const System::UnicodeString ASrcName, const System::UnicodeString ADestName);
extern DELPHI_PACKAGE void __fastcall FDSystemMessage(const System::UnicodeString ACaption, const System::UnicodeString AMessage, bool AWarning);
extern DELPHI_PACKAGE void __fastcall FDSetEnv(const System::UnicodeString AName, const System::UnicodeString AValue);
extern DELPHI_PACKAGE void __fastcall FDHighRefCounter(int &ACounter);
extern DELPHI_PACKAGE int __fastcall FDAlign(int AValue);
}	/* namespace Util */
}	/* namespace Stan */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN_UTIL)
using namespace Firedac::Stan::Util;
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
#endif	// Firedac_Stan_UtilHPP
