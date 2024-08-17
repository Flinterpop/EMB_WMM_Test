// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Data.SqlTimSt.pas' rev: 35.00 (Windows)

#ifndef Data_SqltimstHPP
#define Data_SqltimstHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Data
{
namespace Sqltimst
{
//-- forward type declarations -----------------------------------------------
struct TSQLTimeStamp;
struct TSQLTimeStampOffset;
//-- type declarations -------------------------------------------------------
typedef TSQLTimeStamp *PSQLTimeStamp;

struct DECLSPEC_DRECORD TSQLTimeStamp
{
public:
	System::Word Year;
	System::Word Month;
	System::Word Day;
	System::Word Hour;
	System::Word Minute;
	System::Word Second;
	unsigned Fractions;
};


typedef TSQLTimeStampOffset *PSQLTimeStampOffset;

struct DECLSPEC_DRECORD TSQLTimeStampOffset
{
public:
	System::Word Year;
	System::Word Month;
	System::Word Day;
	System::Word Hour;
	System::Word Minute;
	System::Word Second;
	unsigned Fractions;
	short TimeZoneHour;
	short TimeZoneMinute;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TSQLTimeStamp NullSQLTimeStamp;
extern DELPHI_PACKAGE TSQLTimeStampOffset NullSQLTimeStampOffset;
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampCreate(const System::UnicodeString AValue)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampCreate(const System::UnicodeString AValue, const System::Sysutils::TFormatSettings &FormatSettings)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampCreate(const System::TDateTime AValue)/* overload */;
extern DELPHI_PACKAGE void __fastcall VarSQLTimeStampCreate(System::Variant &aDest, const TSQLTimeStamp &ASQLTimeStamp)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampCreate(void)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampCreate(const TSQLTimeStamp &ASQLTimeStamp)/* overload */;
extern DELPHI_PACKAGE System::Word __fastcall VarSQLTimeStamp(void);
extern DELPHI_PACKAGE bool __fastcall VarIsSQLTimeStamp(const System::Variant &aValue)/* overload */;
extern DELPHI_PACKAGE TSQLTimeStamp __fastcall VarToSQLTimeStamp(const System::Variant &aValue);
extern DELPHI_PACKAGE TSQLTimeStampOffset __fastcall VarToSQLTimeStampOffset(const System::Variant &aValue);
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampOffsetCreate(const System::UnicodeString AValue)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampOffsetCreate(const System::UnicodeString AValue, const System::Sysutils::TFormatSettings &FormatSettings)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampOffsetCreate(const System::TDateTime AValue)/* overload */;
extern DELPHI_PACKAGE void __fastcall VarSQLTimeStampOffsetCreate(System::Variant &aDest, const TSQLTimeStampOffset &ASQLTimeStampOffset)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampOffsetCreate(void)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarSQLTimeStampOffsetCreate(const TSQLTimeStampOffset &ASQLTimeStampOffset)/* overload */;
extern DELPHI_PACKAGE System::Word __fastcall VarSQLTimeStampOffset(void);
extern DELPHI_PACKAGE bool __fastcall VarIsSQLTimeStampOffset(const System::Variant &aValue)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SQLTimeStampToStr(const System::UnicodeString Format, const TSQLTimeStamp &DateTime)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SQLTimeStampToStr(const System::UnicodeString Format, const TSQLTimeStamp &DateTime, const System::Sysutils::TFormatSettings &FormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToSQLTimeStamp(const System::UnicodeString S, TSQLTimeStamp &TimeStamp)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToSQLTimeStamp(const System::UnicodeString S, TSQLTimeStamp &TimeStamp, const System::Sysutils::TFormatSettings &FormatSettings)/* overload */;
extern DELPHI_PACKAGE TSQLTimeStamp __fastcall StrToSQLTimeStamp(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE TSQLTimeStamp __fastcall StrToSQLTimeStamp(const System::UnicodeString S, const System::Sysutils::TFormatSettings &FormatSettings)/* overload */;
extern DELPHI_PACKAGE TSQLTimeStamp __fastcall DateTimeToSQLTimeStamp(const System::TDateTime DateTime);
extern DELPHI_PACKAGE System::TDateTime __fastcall SQLTimeStampToDateTime(const TSQLTimeStamp &DateTime);
extern DELPHI_PACKAGE int __fastcall SQLDayOfWeek(const TSQLTimeStamp &DateTime);
extern DELPHI_PACKAGE TSQLTimeStampOffset __fastcall DateTimeToSQLTimeStampOffset(const System::TDateTime DateTime)/* overload */;
extern DELPHI_PACKAGE TSQLTimeStampOffset __fastcall DateTimeToSQLTimeStampOffset(const System::TDateTime DateTime, const int TZOffsetHour, const int TZOffsetMinute = 0x0)/* overload */;
extern DELPHI_PACKAGE System::TDateTime __fastcall SQLTimeStampOffsetToDateTime(const TSQLTimeStampOffset &DateTimeOffset);
extern DELPHI_PACKAGE System::UnicodeString __fastcall SQLTimeStampOffsetToStr(const System::UnicodeString Format, const TSQLTimeStampOffset &DateTime)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall SQLTimeStampOffsetToStr(const System::UnicodeString Format, const TSQLTimeStampOffset &DateTime, const System::Sysutils::TFormatSettings &FormatSettings)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToSQLTimeStampOffset(const System::UnicodeString S, TSQLTimeStampOffset &TimeStampOffset)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToSQLTimeStampOffset(const System::UnicodeString S, TSQLTimeStampOffset &TimeStampOffset, const System::Sysutils::TFormatSettings &FormatSettings)/* overload */;
extern DELPHI_PACKAGE TSQLTimeStampOffset __fastcall StrToSQLTimeStampOffset(const System::UnicodeString S)/* overload */;
extern DELPHI_PACKAGE TSQLTimeStampOffset __fastcall StrToSQLTimeStampOffset(const System::UnicodeString S, const System::Sysutils::TFormatSettings &FormatSettings)/* overload */;
extern DELPHI_PACKAGE void __fastcall CheckSqlTimeStamp(const TSQLTimeStamp &ASQLTimeStamp);
extern DELPHI_PACKAGE void __fastcall CheckSqlTimeStampOffset(const TSQLTimeStampOffset &ASQLTimeStampOffset);
extern DELPHI_PACKAGE TSQLTimeStamp __fastcall LocalToUTC(TSQLTimeStamp &Value);
extern DELPHI_PACKAGE TSQLTimeStamp __fastcall UTCToLocal(TSQLTimeStamp &Value);
}	/* namespace Sqltimst */
}	/* namespace Data */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA_SQLTIMST)
using namespace Data::Sqltimst;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA)
using namespace Data;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Data_SqltimstHPP
