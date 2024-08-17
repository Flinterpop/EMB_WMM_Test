// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Stan.SQLTimeInt.pas' rev: 35.00 (Windows)

#ifndef Firedac_Stan_SqltimeintHPP
#define Firedac_Stan_SqltimeintHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Variants.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Stan
{
namespace Sqltimeint
{
//-- forward type declarations -----------------------------------------------
struct TFDSQLTimeInterval;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TFDSQLTimeIntervalKind : unsigned int { itUnknown, itYear, itMonth, itDay, itHour, itMinute, itSecond, itYear2Month, itDay2Hour, itDay2Minute, itDay2Second, itHour2Minute, itHour2Second, itMinute2Second };

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFDSQLTimeInterval
{
public:
	System::Int8 Sign;
	
public:
	TFDSQLTimeIntervalKind Kind;
	union
	{
		struct 
		{
			unsigned Days;
			unsigned Hours;
			unsigned Minutes;
			unsigned Seconds;
			unsigned Fractions;
		};
		struct 
		{
			unsigned Years;
			unsigned Months;
		};
		
	};
};
#pragma pack(pop)


typedef TFDSQLTimeInterval *PFDSQLTimeInterval;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TFDSQLTimeInterval C_NullSQLTimeInterval;
extern DELPHI_PACKAGE System::Variant __fastcall FDVarSQLTimeIntervalCreate(void)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall FDVarSQLTimeIntervalCreate(const System::UnicodeString AValue)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall FDVarSQLTimeIntervalCreate(const TFDSQLTimeInterval &AValue)/* overload */;
extern DELPHI_PACKAGE System::Word __fastcall FDVarSQLTimeInterval(void);
extern DELPHI_PACKAGE bool __fastcall FDVarIsSQLTimeInterval(const System::Variant &AValue)/* overload */;
extern DELPHI_PACKAGE TFDSQLTimeInterval __fastcall FDVar2SQLTimeInterval(const System::Variant &AValue);
extern DELPHI_PACKAGE TFDSQLTimeInterval __fastcall FDStr2SQLTimeInterval(const System::UnicodeString AValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDSQLTimeInterval2Str(const TFDSQLTimeInterval &AValue);
extern DELPHI_PACKAGE int __fastcall FDSQLTimeIntervalCompare(const TFDSQLTimeInterval &AValue1, const TFDSQLTimeInterval &AValue2);
extern DELPHI_PACKAGE TFDSQLTimeInterval __fastcall FDSQLTimeIntervalCast(const TFDSQLTimeInterval &AValue, TFDSQLTimeIntervalKind AKind);
}	/* namespace Sqltimeint */
}	/* namespace Stan */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN_SQLTIMEINT)
using namespace Firedac::Stan::Sqltimeint;
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
#endif	// Firedac_Stan_SqltimeintHPP
