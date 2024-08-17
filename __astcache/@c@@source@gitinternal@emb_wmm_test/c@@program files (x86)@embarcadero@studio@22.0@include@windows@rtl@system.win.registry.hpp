// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Win.Registry.pas' rev: 35.00 (Windows)

#ifndef System_Win_RegistryHPP
#define System_Win_RegistryHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.IniFiles.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Win
{
namespace Registry
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS ERegistryException;
struct TRegKeyInfo;
struct TRegDataInfo;
class DELPHICLASS TRegistry;
class DELPHICLASS TRegIniFile;
class DELPHICLASS TRegistryIniFile;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION ERegistryException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall ERegistryException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall ERegistryException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall ERegistryException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall ERegistryException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall ERegistryException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall ERegistryException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall ERegistryException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall ERegistryException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERegistryException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall ERegistryException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERegistryException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall ERegistryException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~ERegistryException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

struct DECLSPEC_DRECORD TRegKeyInfo
{
public:
	int NumSubKeys;
	int MaxSubKeyLen;
	int NumValues;
	int MaxValueLen;
	int MaxDataLen;
	_FILETIME FileTime;
};


enum DECLSPEC_DENUM TRegDataType : unsigned char { rdUnknown, rdString, rdExpandString, rdInteger, rdBinary };

struct DECLSPEC_DRECORD TRegDataInfo
{
public:
	TRegDataType RegData;
	int DataSize;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRegistry : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	HKEY FCurrentKey;
	HKEY FRootKey;
	bool FLazyWrite;
	System::UnicodeString FCurrentPath;
	bool FCloseRootKey;
	unsigned FAccess;
	int FLastError;
	static bool FUseRegDeleteKeyEx;
	
private:
	// __classmethod void __fastcall Create@();
	
private:
	void __fastcall SetRootKey(HKEY Value);
	System::UnicodeString __fastcall GetLastErrorMsg();
	
protected:
	void __fastcall ChangeKey(HKEY Value, const System::UnicodeString Path);
	bool __fastcall CheckResult(int RetVal);
	HKEY __fastcall GetBaseKey(bool Relative);
	int __fastcall GetData(const System::UnicodeString Name, void * Buffer, int BufSize, TRegDataType &RegData);
	HKEY __fastcall GetKey(const System::UnicodeString Key);
	System::UnicodeString __fastcall GetRootKeyName();
	void __fastcall PutData(const System::UnicodeString Name, void * Buffer, int BufSize, TRegDataType RegData);
	void __fastcall SetCurrentKey(HKEY Value);
	
public:
	__fastcall TRegistry()/* overload */;
	__fastcall TRegistry(unsigned AAccess)/* overload */;
	__fastcall virtual ~TRegistry();
	void __fastcall CloseKey();
	bool __fastcall CreateKey(const System::UnicodeString Key);
	bool __fastcall DeleteKey(const System::UnicodeString Key);
	bool __fastcall DeleteValue(const System::UnicodeString Name);
	System::UnicodeString __fastcall GetDataAsString(const System::UnicodeString ValueName, bool PrefixType = false);
	bool __fastcall GetDataInfo(const System::UnicodeString ValueName, TRegDataInfo &Value);
	int __fastcall GetDataSize(const System::UnicodeString ValueName);
	TRegDataType __fastcall GetDataType(const System::UnicodeString ValueName);
	bool __fastcall GetKeyInfo(TRegKeyInfo &Value);
	void __fastcall GetKeyNames(System::Classes::TStrings* Strings);
	void __fastcall GetValueNames(System::Classes::TStrings* Strings);
	bool __fastcall HasSubKeys();
	bool __fastcall KeyExists(const System::UnicodeString Key);
	bool __fastcall LoadKey(const System::UnicodeString Key, const System::UnicodeString FileName);
	void __fastcall MoveKey(const System::UnicodeString OldName, const System::UnicodeString NewName, bool Delete);
	bool __fastcall OpenKey(const System::UnicodeString Key, bool CanCreate);
	bool __fastcall OpenKeyReadOnly(const System::UnicodeString Key);
	System::Currency __fastcall ReadCurrency(const System::UnicodeString Name);
	int __fastcall ReadBinaryData(const System::UnicodeString Name, void *Buffer, int BufSize);
	bool __fastcall ReadBool(const System::UnicodeString Name);
	System::TDateTime __fastcall ReadDate(const System::UnicodeString Name);
	System::TDateTime __fastcall ReadDateTime(const System::UnicodeString Name);
	double __fastcall ReadFloat(const System::UnicodeString Name);
	int __fastcall ReadInteger(const System::UnicodeString Name);
	System::UnicodeString __fastcall ReadString(const System::UnicodeString Name);
	System::TDateTime __fastcall ReadTime(const System::UnicodeString Name);
	bool __fastcall RegistryConnect(const System::UnicodeString UNCName);
	void __fastcall RenameValue(const System::UnicodeString OldName, const System::UnicodeString NewName);
	bool __fastcall ReplaceKey(const System::UnicodeString Key, const System::UnicodeString FileName, const System::UnicodeString BackUpFileName);
	bool __fastcall RestoreKey(const System::UnicodeString Key, const System::UnicodeString FileName);
	bool __fastcall SaveKey(const System::UnicodeString Key, const System::UnicodeString FileName);
	bool __fastcall UnLoadKey(const System::UnicodeString Key);
	bool __fastcall ValueExists(const System::UnicodeString Name);
	void __fastcall WriteCurrency(const System::UnicodeString Name, System::Currency Value);
	void __fastcall WriteBinaryData(const System::UnicodeString Name, const void *Buffer, int BufSize);
	void __fastcall WriteBool(const System::UnicodeString Name, bool Value);
	void __fastcall WriteDate(const System::UnicodeString Name, System::TDateTime Value);
	void __fastcall WriteDateTime(const System::UnicodeString Name, System::TDateTime Value);
	void __fastcall WriteFloat(const System::UnicodeString Name, double Value);
	void __fastcall WriteInteger(const System::UnicodeString Name, int Value);
	void __fastcall WriteString(const System::UnicodeString Name, const System::UnicodeString Value);
	void __fastcall WriteExpandString(const System::UnicodeString Name, const System::UnicodeString Value);
	void __fastcall WriteTime(const System::UnicodeString Name, System::TDateTime Value);
#ifndef _WIN64
	__property HKEY CurrentKey = {read=FCurrentKey, nodefault};
#else /* _WIN64 */
	__property HKEY CurrentKey = {read=FCurrentKey};
#endif /* _WIN64 */
	__property System::UnicodeString CurrentPath = {read=FCurrentPath};
	__property bool LazyWrite = {read=FLazyWrite, write=FLazyWrite, nodefault};
	__property int LastError = {read=FLastError, nodefault};
	__property System::UnicodeString LastErrorMsg = {read=GetLastErrorMsg};
#ifndef _WIN64
	__property HKEY RootKey = {read=FRootKey, write=SetRootKey, nodefault};
#else /* _WIN64 */
	__property HKEY RootKey = {read=FRootKey, write=SetRootKey};
#endif /* _WIN64 */
	__property System::UnicodeString RootKeyName = {read=GetRootKeyName};
	__property unsigned Access = {read=FAccess, write=FAccess, nodefault};
	
private:
	// __classmethod void __fastcall Destroy@();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRegIniFile : public TRegistry
{
	typedef TRegistry inherited;
	
private:
	System::UnicodeString FFileName;
	
public:
	__fastcall TRegIniFile(const System::UnicodeString FileName)/* overload */;
	__fastcall TRegIniFile(const System::UnicodeString FileName, unsigned AAccess)/* overload */;
	HIDESBASE System::UnicodeString __fastcall ReadString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Default);
	HIDESBASE int __fastcall ReadInteger(const System::UnicodeString Section, const System::UnicodeString Ident, int Default);
	HIDESBASE void __fastcall WriteInteger(const System::UnicodeString Section, const System::UnicodeString Ident, int Value);
	HIDESBASE void __fastcall WriteString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Value);
	HIDESBASE bool __fastcall ReadBool(const System::UnicodeString Section, const System::UnicodeString Ident, bool Default);
	HIDESBASE void __fastcall WriteBool(const System::UnicodeString Section, const System::UnicodeString Ident, bool Value);
	void __fastcall ReadSection(const System::UnicodeString Section, System::Classes::TStrings* Strings);
	void __fastcall ReadSections(System::Classes::TStrings* Strings);
	void __fastcall ReadSectionValues(const System::UnicodeString Section, System::Classes::TStrings* Strings);
	void __fastcall EraseSection(const System::UnicodeString Section);
	HIDESBASE void __fastcall DeleteKey(const System::UnicodeString Section, const System::UnicodeString Ident);
	__property System::UnicodeString FileName = {read=FFileName};
public:
	/* TRegistry.Create */ inline __fastcall TRegIniFile()/* overload */ : TRegistry() { }
	/* TRegistry.Create */ inline __fastcall TRegIniFile(unsigned AAccess)/* overload */ : TRegistry(AAccess) { }
	/* TRegistry.Destroy */ inline __fastcall virtual ~TRegIniFile() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TRegistryIniFile : public System::Inifiles::TCustomIniFile
{
	typedef System::Inifiles::TCustomIniFile inherited;
	
private:
	TRegIniFile* FRegIniFile;
	
public:
	__fastcall TRegistryIniFile(const System::UnicodeString FileName)/* overload */;
	__fastcall TRegistryIniFile(const System::UnicodeString FileName, unsigned AAccess)/* overload */;
	__fastcall virtual ~TRegistryIniFile();
	virtual System::TDateTime __fastcall ReadDate(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Default);
	virtual System::TDateTime __fastcall ReadDateTime(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Default);
	virtual int __fastcall ReadInteger(const System::UnicodeString Section, const System::UnicodeString Ident, int Default);
	virtual double __fastcall ReadFloat(const System::UnicodeString Section, const System::UnicodeString Name, double Default);
	virtual System::UnicodeString __fastcall ReadString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Default);
	virtual System::TDateTime __fastcall ReadTime(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Default);
	virtual int __fastcall ReadBinaryStream(const System::UnicodeString Section, const System::UnicodeString Name, System::Classes::TStream* Value);
	virtual void __fastcall WriteDate(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Value);
	virtual void __fastcall WriteDateTime(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Value);
	virtual void __fastcall WriteFloat(const System::UnicodeString Section, const System::UnicodeString Name, double Value);
	virtual void __fastcall WriteInteger(const System::UnicodeString Section, const System::UnicodeString Ident, int Value);
	virtual void __fastcall WriteString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Value);
	virtual void __fastcall WriteTime(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Value);
	virtual void __fastcall WriteBinaryStream(const System::UnicodeString Section, const System::UnicodeString Name, System::Classes::TStream* Value);
	virtual void __fastcall ReadSection(const System::UnicodeString Section, System::Classes::TStrings* Strings);
	virtual void __fastcall ReadSections(System::Classes::TStrings* Strings)/* overload */;
	virtual void __fastcall ReadSections(const System::UnicodeString Section, System::Classes::TStrings* Strings)/* overload */;
	virtual void __fastcall ReadSubSections(const System::UnicodeString Section, System::Classes::TStrings* Strings, bool Recurse = false);
	virtual void __fastcall ReadSectionValues(const System::UnicodeString Section, System::Classes::TStrings* Strings);
	virtual void __fastcall EraseSection(const System::UnicodeString Section);
	virtual void __fastcall DeleteKey(const System::UnicodeString Section, const System::UnicodeString Ident);
	virtual void __fastcall UpdateFile();
	__property TRegIniFile* RegIniFile = {read=FRegIniFile};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Registry */
}	/* namespace Win */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_WIN_REGISTRY)
using namespace System::Win::Registry;
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
#endif	// System_Win_RegistryHPP
