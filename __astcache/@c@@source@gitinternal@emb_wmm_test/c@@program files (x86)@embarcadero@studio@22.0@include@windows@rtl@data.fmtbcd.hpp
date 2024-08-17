// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Data.FmtBcd.pas' rev: 35.00 (Windows)

#ifndef Data_FmtbcdHPP
#define Data_FmtbcdHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>

//-- user supplied -----------------------------------------------------------

namespace Data
{
namespace Fmtbcd
{
//-- forward type declarations -----------------------------------------------
struct TBcd;
class DELPHICLASS EBcdException;
class DELPHICLASS EBcdOverflowException;
//-- type declarations -------------------------------------------------------
typedef TBcd *PBcd;

struct DECLSPEC_DRECORD TBcd
{
public:
	System::Byte Precision;
	System::Byte SignSpecialPlaces;
	System::StaticArray<System::Byte, 32> Fraction;
	static TBcd __fastcall _op_Implicit(const System::UnicodeString str);
	static TBcd __fastcall _op_Implicit(const double d);
	static TBcd __fastcall _op_Implicit(const int I);
	// explicit __fastcall operator System::UnicodeString();
	// explicit __fastcall operator int();
	static TBcd __fastcall _op_Addition(const TBcd &A, const TBcd &B);
	static TBcd __fastcall _op_Subtraction(const TBcd &A, const TBcd &B);
	static TBcd __fastcall _op_Multiply(const TBcd &A, const TBcd &B);
	static TBcd __fastcall _op_Division(const TBcd &A, const TBcd &B);
	static TBcd __fastcall _op_UnaryNegation(const TBcd &A);
	static bool __fastcall _op_Equality(const TBcd &A, const TBcd &B);
	static bool __fastcall _op_Inequality(const TBcd &A, const TBcd &B);
	static bool __fastcall _op_GreaterThan(const TBcd &A, const TBcd &B);
	static bool __fastcall _op_LessThan(const TBcd &A, const TBcd &B);
	static bool __fastcall _op_GreaterThanOrEqual(const TBcd &A, const TBcd &B);
	static bool __fastcall _op_LessThanOrEqual(const TBcd &A, const TBcd &B);
	
	TBcd& operator =(const System::UnicodeString str) { *this = TBcd::_op_Implicit(str); return *this; }
	TBcd& operator =(const double d) { *this = TBcd::_op_Implicit(d); return *this; }
	TBcd& operator =(const int I) { *this = TBcd::_op_Implicit(I); return *this; }
	friend TBcd operator +(const TBcd &A, const TBcd &B) { return TBcd::_op_Addition(A, B); }
	friend TBcd operator -(const TBcd &A, const TBcd &B) { return TBcd::_op_Subtraction(A, B); }
	friend TBcd operator *(const TBcd &A, const TBcd &B) { return TBcd::_op_Multiply(A, B); }
	friend TBcd operator /(const TBcd &A, const TBcd &B) { return TBcd::_op_Division(A, B); }
	TBcd operator -() { return TBcd::_op_UnaryNegation(*this); }
	friend bool operator ==(const TBcd &A, const TBcd &B) { return TBcd::_op_Equality(A, B); }
	friend bool operator !=(const TBcd &A, const TBcd &B) { return TBcd::_op_Inequality(A, B); }
	friend bool operator >(const TBcd &A, const TBcd &B) { return TBcd::_op_GreaterThan(A, B); }
	friend bool operator <(const TBcd &A, const TBcd &B) { return TBcd::_op_LessThan(A, B); }
	friend bool operator >=(const TBcd &A, const TBcd &B) { return TBcd::_op_GreaterThanOrEqual(A, B); }
	friend bool operator <=(const TBcd &A, const TBcd &B) { return TBcd::_op_LessThanOrEqual(A, B); }
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EBcdException : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EBcdException(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EBcdException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EBcdException(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EBcdException(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EBcdException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EBcdException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EBcdException(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EBcdException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBcdException(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBcdException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBcdException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBcdException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EBcdException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EBcdOverflowException : public EBcdException
{
	typedef EBcdException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EBcdOverflowException(const System::UnicodeString Msg) : EBcdException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EBcdOverflowException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EBcdException(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EBcdOverflowException(NativeUInt Ident)/* overload */ : EBcdException(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EBcdOverflowException(System::PResStringRec ResStringRec)/* overload */ : EBcdException(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EBcdOverflowException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EBcdException(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EBcdOverflowException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EBcdException(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EBcdOverflowException(const System::UnicodeString Msg, int AHelpContext) : EBcdException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EBcdOverflowException(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EBcdException(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBcdOverflowException(NativeUInt Ident, int AHelpContext)/* overload */ : EBcdException(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EBcdOverflowException(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EBcdException(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBcdOverflowException(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EBcdException(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EBcdOverflowException(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EBcdException(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EBcdOverflowException() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
static const System::Int8 MaxStringDigits = System::Int8(0x64);
static const short _NoDecimal = short(-255);
static const System::Int8 _DefaultDecimals = System::Int8(0xa);
static const System::Int8 MaxFMTBcdFractionSize = System::Int8(0x40);
static const System::Int8 MaxFMTBcdDigits = System::Int8(0x20);
static const System::Int8 DefaultFMTBcdScale = System::Int8(0x6);
static const System::Int8 MaxBcdPrecision = System::Int8(0x12);
static const System::Int8 MaxBcdScale = System::Int8(0x4);
static const System::Int8 SizeOfFraction = System::Int8(0x20);
static const System::Int8 SizeOfTBCD = System::Int8(0x22);
extern DELPHI_PACKAGE TBcd NullBcd;
extern DELPHI_PACKAGE bool BcdOverflowChecks;
#ifndef _WIN64
extern DELPHI_PACKAGE TBcd __fastcall BcdFromBytes(const System::DynamicArray<System::Byte> AValue);
extern DELPHI_PACKAGE System::DynamicArray<System::Byte> __fastcall BcdToBytes(const TBcd &Value);
#else /* _WIN64 */
extern DELPHI_PACKAGE TBcd __fastcall BcdFromBytes(const System::TArray__1<System::Byte> AValue);
extern DELPHI_PACKAGE System::TArray__1<System::Byte> __fastcall BcdToBytes(const TBcd &Value);
#endif /* _WIN64 */
extern DELPHI_PACKAGE System::Word __fastcall BcdPrecision(const TBcd &Bcd);
extern DELPHI_PACKAGE System::Word __fastcall BcdScale(const TBcd &Bcd);
extern DELPHI_PACKAGE bool __fastcall IsBcdNegative(const TBcd &Bcd);
extern DELPHI_PACKAGE void __fastcall BcdAdd(const TBcd &bcdIn1, const TBcd &bcdIn2, TBcd &bcdOut);
extern DELPHI_PACKAGE void __fastcall BcdSubtract(const TBcd &bcdIn1, const TBcd &bcdIn2, TBcd &bcdOut);
extern DELPHI_PACKAGE void __fastcall BcdMultiply(const TBcd &bcdIn1, const TBcd &bcdIn2, TBcd &bcdOut)/* overload */;
extern DELPHI_PACKAGE void __fastcall BcdDivide(const TBcd &Dividend, const TBcd &Divisor, TBcd &bcdOut)/* overload */;
extern DELPHI_PACKAGE bool __fastcall NormalizeBcd(const TBcd &InBCD, TBcd &OutBcd, int Precision, int Places);
extern DELPHI_PACKAGE int __fastcall BcdCompare(const TBcd &bcd1, const TBcd &bcd2);
extern DELPHI_PACKAGE System::UnicodeString __fastcall BcdToStr(const TBcd &Bcd)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall BcdToStr(const TBcd &Bcd, const System::Sysutils::TFormatSettings &Format)/* overload */;
extern DELPHI_PACKAGE TBcd __fastcall StrToBcd(const System::UnicodeString AValue)/* overload */;
extern DELPHI_PACKAGE TBcd __fastcall StrToBcd(const System::UnicodeString AValue, const System::Sysutils::TFormatSettings &Format)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToBcd(const System::UnicodeString AValue, TBcd &Bcd)/* overload */;
extern DELPHI_PACKAGE bool __fastcall TryStrToBcd(const System::UnicodeString AValue, TBcd &Bcd, const System::Sysutils::TFormatSettings &Format)/* overload */;
extern DELPHI_PACKAGE void __fastcall DoubleToBcd(const double AValue, TBcd &bcd)/* overload */;
extern DELPHI_PACKAGE TBcd __fastcall DoubleToBcd(const double AValue)/* overload */;
extern DELPHI_PACKAGE TBcd __fastcall IntegerToBcd(const int AValue);
extern DELPHI_PACKAGE double __fastcall BcdToDouble(const TBcd &Bcd);
extern DELPHI_PACKAGE int __fastcall BcdToInteger(const TBcd &Bcd, bool Truncate = false);
extern DELPHI_PACKAGE __int64 __fastcall BcdToInt64(const TBcd &Bcd);
extern DELPHI_PACKAGE bool __fastcall CurrToBCD(const System::Currency Curr, TBcd &BCD, int Precision = 0x20, int Decimals = 0x4);
extern DELPHI_PACKAGE bool __fastcall BCDToCurr(const TBcd &BCD, System::Currency &Curr);
extern DELPHI_PACKAGE TBcd __fastcall CurrencyToBcd(const System::Currency Curr);
extern DELPHI_PACKAGE System::Currency __fastcall BCDToCurrency(const TBcd &BCD);
extern DELPHI_PACKAGE System::UnicodeString __fastcall BcdToStrF(const TBcd &Bcd, System::Sysutils::TFloatFormat Format, const int Precision, const int Digits)/* overload */;
extern DELPHI_PACKAGE TBcd __fastcall BCDRoundTo(const TBcd &bcdIn, int Digits);
extern DELPHI_PACKAGE System::UnicodeString __fastcall BcdToStrF(const TBcd &Bcd, System::Sysutils::TFloatFormat Format, const int Precision, const int Digits, const System::Sysutils::TFormatSettings &FS)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatBcd(const System::UnicodeString Format, const TBcd &Bcd)/* overload */;
extern DELPHI_PACKAGE System::UnicodeString __fastcall FormatBcd(const System::UnicodeString Format, const TBcd &Bcd, const System::Sysutils::TFormatSettings &FS)/* overload */;
extern DELPHI_PACKAGE void __fastcall BcdMultiply _DEPRECATED_ATTRIBUTE1("use BcdMultiply(TBcd, TBcd, TBcd)") (const TBcd &bcdIn, const double DoubleIn, TBcd &bcdOut)/* overload */;
extern DELPHI_PACKAGE void __fastcall BcdMultiply _DEPRECATED_ATTRIBUTE1("use BcdMultiply(TBcd, TBcd, TBcd)") (const TBcd &bcdIn, const System::UnicodeString StringIn, TBcd &bcdOut)/* overload */;
extern DELPHI_PACKAGE void __fastcall BcdMultiply _DEPRECATED_ATTRIBUTE1("use BcdMultiply(TBcd, TBcd, TBcd)") (System::UnicodeString StringIn1, System::UnicodeString StringIn2, TBcd &bcdOut)/* overload */;
extern DELPHI_PACKAGE void __fastcall BcdDivide _DEPRECATED_ATTRIBUTE1("use BcdDivide(TBcd, TBcd, TBcd)") (System::UnicodeString Dividend, System::UnicodeString Divisor, TBcd &bcdOut)/* overload */;
extern DELPHI_PACKAGE void __fastcall BcdDivide _DEPRECATED_ATTRIBUTE1("use BcdDivide(TBcd, TBcd, TBcd)") (const TBcd &Dividend, const double Divisor, TBcd &bcdOut)/* overload */;
extern DELPHI_PACKAGE void __fastcall BcdDivide _DEPRECATED_ATTRIBUTE1("use BcdDivide(TBcd, TBcd, TBcd)") (const TBcd &Dividend, const System::UnicodeString Divisor, TBcd &bcdOut)/* overload */;
extern DELPHI_PACKAGE void __fastcall VarFMTBcdCreate(System::Variant &ADest, const TBcd &ABcd)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarFMTBcdCreate(void)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarFMTBcdCreate(const System::UnicodeString AValue, System::Word Precision, System::Word Scale)/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarFMTBcdCreate(const double AValue, System::Word Precision = (System::Word)(0x12), System::Word Scale = (System::Word)(0x4))/* overload */;
extern DELPHI_PACKAGE System::Variant __fastcall VarFMTBcdCreate(const TBcd &ABcd)/* overload */;
extern DELPHI_PACKAGE bool __fastcall VarIsFMTBcd(const System::Variant &AValue)/* overload */;
extern DELPHI_PACKAGE System::Word __fastcall VarFMTBcd(void);
extern DELPHI_PACKAGE TBcd __fastcall VarToBcd(const System::Variant &AValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall RoundAt _DEPRECATED_ATTRIBUTE1("use BcdRoundTo") (const System::UnicodeString Value, short Position);
}	/* namespace Fmtbcd */
}	/* namespace Data */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA_FMTBCD)
using namespace Data::Fmtbcd;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA)
using namespace Data;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Data_FmtbcdHPP
