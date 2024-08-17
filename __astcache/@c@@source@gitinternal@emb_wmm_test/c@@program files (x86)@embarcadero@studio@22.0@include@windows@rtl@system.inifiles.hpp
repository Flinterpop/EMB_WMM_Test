// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.IniFiles.pas' rev: 35.00 (Windows)

#ifndef System_InifilesHPP
#define System_InifilesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace System
{
namespace Inifiles
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EIniFileException;
class DELPHICLASS TCustomIniFile;
class DELPHICLASS TStringHash;
class DELPHICLASS THashedStringList;
class DELPHICLASS TMemIniFile;
class DELPHICLASS TIniFile;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EIniFileException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EIniFileException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EIniFileException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EIniFileException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EIniFileException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EIniFileException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EIniFileException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EIniFileException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EIniFileException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIniFileException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EIniFileException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIniFileException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EIniFileException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EIniFileException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomIniFile : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	System::UnicodeString FFileName;
	
protected:
	static System::UnicodeString SectionNameSeparator;
	virtual void __fastcall InternalReadSections(const System::UnicodeString Section, System::Classes::TStrings* Strings, bool SubSectionNamesOnly, bool Recurse);
	
public:
	__fastcall TCustomIniFile(const System::UnicodeString FileName);
	virtual bool __fastcall SectionExists(const System::UnicodeString Section);
	virtual System::UnicodeString __fastcall ReadString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Default) = 0 ;
	virtual void __fastcall WriteString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Value) = 0 ;
	virtual int __fastcall ReadInteger(const System::UnicodeString Section, const System::UnicodeString Ident, int Default);
	virtual void __fastcall WriteInteger(const System::UnicodeString Section, const System::UnicodeString Ident, int Value);
	virtual __int64 __fastcall ReadInt64(const System::UnicodeString Section, const System::UnicodeString Ident, __int64 Default);
	virtual void __fastcall WriteInt64(const System::UnicodeString Section, const System::UnicodeString Ident, __int64 Value);
	virtual bool __fastcall ReadBool(const System::UnicodeString Section, const System::UnicodeString Ident, bool Default);
	virtual void __fastcall WriteBool(const System::UnicodeString Section, const System::UnicodeString Ident, bool Value);
	virtual int __fastcall ReadBinaryStream(const System::UnicodeString Section, const System::UnicodeString Name, System::Classes::TStream* Value);
	virtual System::TDateTime __fastcall ReadDate(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Default);
	virtual System::TDateTime __fastcall ReadDateTime(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Default);
	virtual double __fastcall ReadFloat(const System::UnicodeString Section, const System::UnicodeString Name, double Default);
	virtual System::TDateTime __fastcall ReadTime(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Default);
	virtual void __fastcall WriteBinaryStream(const System::UnicodeString Section, const System::UnicodeString Name, System::Classes::TStream* Value);
	virtual void __fastcall WriteDate(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Value);
	virtual void __fastcall WriteDateTime(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Value);
	virtual void __fastcall WriteFloat(const System::UnicodeString Section, const System::UnicodeString Name, double Value);
	virtual void __fastcall WriteTime(const System::UnicodeString Section, const System::UnicodeString Name, System::TDateTime Value);
	virtual void __fastcall ReadSection(const System::UnicodeString Section, System::Classes::TStrings* Strings) = 0 ;
	virtual void __fastcall ReadSections(System::Classes::TStrings* Strings) = 0 /* overload */;
	virtual void __fastcall ReadSections(const System::UnicodeString Section, System::Classes::TStrings* Strings)/* overload */;
	virtual void __fastcall ReadSubSections(const System::UnicodeString Section, System::Classes::TStrings* Strings, bool Recurse = false);
	virtual void __fastcall ReadSectionValues(const System::UnicodeString Section, System::Classes::TStrings* Strings) = 0 ;
	virtual void __fastcall EraseSection(const System::UnicodeString Section) = 0 ;
	virtual void __fastcall DeleteKey(const System::UnicodeString Section, const System::UnicodeString Ident) = 0 ;
	virtual void __fastcall UpdateFile() = 0 ;
	virtual bool __fastcall ValueExists(const System::UnicodeString Section, const System::UnicodeString Ident);
	__property System::UnicodeString FileName = {read=FFileName};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomIniFile() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringHash : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
#ifndef _WIN64
	#pragma pack(push,8)
#endif /* not _WIN64 */
	struct DECLSPEC_DRECORD THashItem
	{
	public:
		System::UnicodeString Key;
		int Value;
	};
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
	typedef System::DynamicArray<System::Generics::Collections::TList__1<THashItem>*> _TStringHash__1;
	
	
private:
	_TStringHash__1 Buckets;
	
protected:
	int __fastcall Find(const System::UnicodeString Key, THashItem &AItem);
	virtual unsigned __fastcall HashOf(const System::UnicodeString Key);
	
public:
	__fastcall TStringHash(unsigned Size);
	__fastcall virtual ~TStringHash();
	void __fastcall Add(const System::UnicodeString Key, int Value);
	void __fastcall Clear();
	void __fastcall Remove(const System::UnicodeString Key);
	bool __fastcall Modify(const System::UnicodeString Key, int Value);
	int __fastcall ValueOf(const System::UnicodeString Key);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION THashedStringList : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	TStringHash* FValueHash;
	TStringHash* FNameHash;
	bool FValueHashValid;
	bool FNameHashValid;
	void __fastcall UpdateValueHash();
	void __fastcall UpdateNameHash();
	System::UnicodeString __fastcall PrepareString(const System::UnicodeString S);
	
protected:
	virtual void __fastcall Changed();
	
public:
	__fastcall virtual ~THashedStringList();
	virtual int __fastcall IndexOf(const System::UnicodeString S);
	virtual int __fastcall IndexOfName(const System::UnicodeString Name);
public:
	/* TStringList.Create */ inline __fastcall THashedStringList()/* overload */ : System::Classes::TStringList() { }
	/* TStringList.Create */ inline __fastcall THashedStringList(bool OwnsObjects)/* overload */ : System::Classes::TStringList(OwnsObjects) { }
	/* TStringList.Create */ inline __fastcall THashedStringList(System::WideChar QuoteChar, System::WideChar Delimiter)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter) { }
	/* TStringList.Create */ inline __fastcall THashedStringList(System::WideChar QuoteChar, System::WideChar Delimiter, System::Classes::TStringsOptions Options)/* overload */ : System::Classes::TStringList(QuoteChar, Delimiter, Options) { }
	/* TStringList.Create */ inline __fastcall THashedStringList(System::Types::TDuplicates Duplicates, bool Sorted, bool CaseSensitive)/* overload */ : System::Classes::TStringList(Duplicates, Sorted, CaseSensitive) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TMemIniFile : public TCustomIniFile
{
	typedef TCustomIniFile inherited;
	
	
private:
	class DELPHICLASS TDictionaryList;
	class PASCALIMPLEMENTATION TDictionaryList : public System::TObject
	{
		typedef System::TObject inherited;
		
	private:
		System::Classes::TStringList* FItems;
		System::Generics::Collections::TDictionary__2<System::UnicodeString,int>* FItemsDict;
		int __fastcall GetCount();
		bool __fastcall GetCaseSensitive();
		void __fastcall SetCaseSensitive(const bool Value);
		bool __fastcall GetUseLocale();
		void __fastcall SetUseLocale(const bool Value);
		void __fastcall SettingsChanged(const bool CaseSensitive, const bool UseLocale);
		
	protected:
		System::UnicodeString __fastcall PrepareString(const System::UnicodeString Value);
		void __fastcall AllocDictionary();
		
	public:
		__fastcall TDictionaryList(bool CaseSensitive, bool UseLocale);
		__fastcall virtual ~TDictionaryList();
		void __fastcall Clear();
		bool __fastcall Remove(const System::UnicodeString Key);
		__property int Count = {read=GetCount, nodefault};
		__property bool CaseSensitive = {read=GetCaseSensitive, write=SetCaseSensitive, nodefault};
		__property bool UseLocale = {read=GetUseLocale, write=SetUseLocale, nodefault};
	};
	
	
	class DELPHICLASS TSection;
	class PASCALIMPLEMENTATION TSection : public TMemIniFile::TDictionaryList
	{
		typedef TMemIniFile::TDictionaryList inherited;
		
	private:
		System::UnicodeString __fastcall GetPairs(int Index);
		System::UnicodeString __fastcall GetNames(int Index);
		System::UnicodeString __fastcall GetValues(int Index);
		void __fastcall SetValues(int Index, const System::UnicodeString Value);
		bool __fastcall GetIsNulls(int Index);
		
	public:
		int __fastcall Find(const System::UnicodeString Key);
		void __fastcall Add(const System::UnicodeString Key, const System::UnicodeString Value);
		void __fastcall AddNoValue(const System::UnicodeString Key);
		HIDESBASE bool __fastcall Remove(const System::UnicodeString Key);
		__property System::UnicodeString Pairs[int Index] = {read=GetPairs};
		__property System::UnicodeString Names[int Index] = {read=GetNames};
		__property bool IsNulls[int Index] = {read=GetIsNulls};
		__property System::UnicodeString Values[int Index] = {read=GetValues, write=SetValues};
	public:
		/* TDictionaryList.Create */ inline __fastcall TSection(bool CaseSensitive, bool UseLocale) : TMemIniFile::TDictionaryList(CaseSensitive, UseLocale) { }
		/* TDictionaryList.Destroy */ inline __fastcall virtual ~TSection() { }
		
	};
	
	
	class DELPHICLASS TSections;
	class PASCALIMPLEMENTATION TSections : public TMemIniFile::TDictionaryList
	{
		typedef TMemIniFile::TDictionaryList inherited;
		
	private:
		System::UnicodeString __fastcall GetNames(int Index);
		TMemIniFile::TSection* __fastcall GetSections(int Index);
		
	public:
		__fastcall TSections(bool CaseSensitive, bool UseLocale);
		TMemIniFile::TSection* __fastcall Find(const System::UnicodeString Section);
		TMemIniFile::TSection* __fastcall Add(const System::UnicodeString Section);
		__property System::UnicodeString Names[int Index] = {read=GetNames};
		__property TMemIniFile::TSection* Sections[int Index] = {read=GetSections};
	public:
		/* TDictionaryList.Destroy */ inline __fastcall virtual ~TSections() { }
		
	};
	
	
	
private:
	System::Classes::TStream* FStream;
	TSections* FSections;
	System::Sysutils::TEncoding* FEncoding;
	bool FModified;
	bool FAutoSave;
	bool __fastcall GetCaseSensitive();
	void __fastcall LoadValues();
	void __fastcall SetCaseSensitive(bool Value);
	bool __fastcall GetUseLocale();
	void __fastcall SetUseLocale(const bool Value);
	
public:
	__fastcall TMemIniFile(const System::UnicodeString FileName)/* overload */;
	__fastcall TMemIniFile(const System::UnicodeString FileName, System::Sysutils::TEncoding* const Encoding)/* overload */;
	__fastcall TMemIniFile(const System::UnicodeString FileName, System::Sysutils::TEncoding* const Encoding, bool CaseSensitive)/* overload */;
	__fastcall virtual TMemIniFile(const System::UnicodeString FileName, System::Sysutils::TEncoding* const Encoding, bool CaseSensitive, bool UseLocale)/* overload */;
	__fastcall virtual TMemIniFile(System::Classes::TStream* Stream, System::Sysutils::TEncoding* const Encoding, bool CaseSensitive, bool UseLocale)/* overload */;
	__fastcall virtual ~TMemIniFile();
	void __fastcall Clear();
	virtual void __fastcall DeleteKey(const System::UnicodeString Section, const System::UnicodeString Ident);
	virtual void __fastcall EraseSection(const System::UnicodeString Section);
	void __fastcall GetStrings(System::Classes::TStrings* const List);
	virtual void __fastcall ReadSection(const System::UnicodeString Section, System::Classes::TStrings* Strings);
	virtual void __fastcall ReadSections(System::Classes::TStrings* Strings)/* overload */;
	virtual void __fastcall ReadSectionValues(const System::UnicodeString Section, System::Classes::TStrings* Strings);
	virtual System::UnicodeString __fastcall ReadString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Default);
	void __fastcall Rename(const System::UnicodeString FileName, bool Reload);
	void __fastcall SetStrings(System::Classes::TStrings* const List);
	virtual void __fastcall UpdateFile();
	virtual void __fastcall WriteString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Value);
	virtual bool __fastcall ValueExists(const System::UnicodeString Section, const System::UnicodeString Ident);
	virtual bool __fastcall SectionExists(const System::UnicodeString Section);
	__property bool CaseSensitive = {read=GetCaseSensitive, write=SetCaseSensitive, nodefault};
	__property bool UseLocale = {read=GetUseLocale, write=SetUseLocale, nodefault};
	__property System::Sysutils::TEncoding* Encoding = {read=FEncoding, write=FEncoding};
	__property bool Modified = {read=FModified, write=FModified, nodefault};
	__property bool AutoSave = {read=FAutoSave, write=FAutoSave, nodefault};
	__property System::Classes::TStream* Stream = {read=FStream, write=FStream};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  ReadSections(const System::UnicodeString Section, System::Classes::TStrings* Strings){ TCustomIniFile::ReadSections(Section, Strings); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIniFile : public TCustomIniFile
{
	typedef TCustomIniFile inherited;
	
public:
	__fastcall virtual ~TIniFile();
	virtual System::UnicodeString __fastcall ReadString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Default);
	virtual void __fastcall WriteString(const System::UnicodeString Section, const System::UnicodeString Ident, const System::UnicodeString Value);
	virtual void __fastcall ReadSection(const System::UnicodeString Section, System::Classes::TStrings* Strings);
	virtual void __fastcall ReadSections(System::Classes::TStrings* Strings)/* overload */;
	virtual void __fastcall ReadSectionValues(const System::UnicodeString Section, System::Classes::TStrings* Strings);
	virtual void __fastcall EraseSection(const System::UnicodeString Section);
	virtual void __fastcall DeleteKey(const System::UnicodeString Section, const System::UnicodeString Ident);
	virtual void __fastcall UpdateFile();
public:
	/* TCustomIniFile.Create */ inline __fastcall TIniFile(const System::UnicodeString FileName) : TCustomIniFile(FileName) { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  ReadSections(const System::UnicodeString Section, System::Classes::TStrings* Strings){ TCustomIniFile::ReadSections(Section, Strings); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Inifiles */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_INIFILES)
using namespace System::Inifiles;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_InifilesHPP
