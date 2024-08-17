// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Comp.BatchMove.Text.pas' rev: 35.00 (Windows)

#ifndef Firedac_Comp_Batchmove_TextHPP
#define Firedac_Comp_Batchmove_TextHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Util.hpp>
#include <FireDAC.Comp.BatchMove.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Comp
{
namespace Batchmove
{
namespace Text
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDTextField;
class DELPHICLASS TFDTextFields;
class DELPHICLASS TFDTextFormatSettings;
class DELPHICLASS TFDTextDataDef;
class DELPHICLASS TFDBatchMoveTextDriver;
class DELPHICLASS TFDBatchMoveTextReader;
class DELPHICLASS TFDBatchMoveTextWriter;
//-- type declarations -------------------------------------------------------
enum DECLSPEC_DENUM TFDTextDataType : unsigned int { atOther, atString, atFloat, atNumber, atBool, atLongInt, atDate, atTime, atDateTime, atBlob, atMemo };

enum DECLSPEC_DENUM TFDTextRecordFormat : unsigned int { rfFixedLength, rfFieldPerLine, rfCommaDoubleQuote, rfSemicolonDoubleQuote, rfTabDoubleQuote, rfCustom };

class PASCALIMPLEMENTATION TFDTextField : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TFDTextDataType FDataType;
	System::UnicodeString FFieldName;
	int FFieldSize;
	int FPrecision;
	System::Variant FValue;
	void __fastcall SetFieldName(const System::UnicodeString AValue);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	void __fastcall Define(const System::UnicodeString AName, Firedac::Stan::Intf::TFDDataType ADataType, int ASize, int APrecision, int AScale);
	
__published:
	__property System::UnicodeString FieldName = {read=FFieldName, write=SetFieldName};
	__property TFDTextDataType DataType = {read=FDataType, write=FDataType, default=0};
	__property int FieldSize = {read=FFieldSize, write=FFieldSize, default=0};
	__property int Precision = {read=FPrecision, write=FPrecision, default=0};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TFDTextField(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TFDTextField() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDTextFields : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFDTextField* operator[](int Index) { return this->Items[Index]; }
	
private:
	TFDTextDataDef* FDef;
	HIDESBASE TFDTextField* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, TFDTextField* const AValue);
	void __fastcall CheckFieldName(TFDTextField* AField, const System::UnicodeString ANewName);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TFDTextFields(TFDTextDataDef* ADef);
	HIDESBASE TFDTextField* __fastcall Add();
	void __fastcall AddAll();
	TFDTextField* __fastcall FindField(const System::UnicodeString AName);
	TFDTextField* __fastcall FieldByName(const System::UnicodeString AName);
	__property TFDTextField* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFDTextFields() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFDTextFormatSettingsValue : unsigned int { fsCurrencyFormat, fsNegCurrFormat, fsThousandSeparator, fsDecimalSeparator, fsCurrencyDecimals, fsDateSeparator, fsTimeSeparator, fsCurrencyString, fsShortDateFormat, fsTimeAMString, fsTimePMString, fsShortTimeFormat, fsTwoDigitYearCenturyWindow };

typedef System::Set<TFDTextFormatSettingsValue, TFDTextFormatSettingsValue::fsCurrencyFormat, TFDTextFormatSettingsValue::fsTwoDigitYearCenturyWindow> TFDTextFormatSettingsValueSet;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDTextFormatSettings : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	System::Sysutils::TFormatSettings FFS;
	TFDTextDataDef* FDataDef;
	TFDTextFormatSettingsValueSet FValues;
	System::Classes::TStrings* FBoolFalseVals;
	System::Classes::TStrings* FBoolTrueVals;
	System::Classes::TStrings* FNullVals;
	void __fastcall SetCurrencyDecimals(const System::Byte AValue);
	void __fastcall SetCurrencyFormat(const System::Byte AValue);
	void __fastcall SetCurrencyString(const System::UnicodeString AValue);
	void __fastcall SetDateSeparator(const System::WideChar AValue);
	void __fastcall SetDecimalSeparator(const System::WideChar AValue);
	void __fastcall SetNegCurrFormat(const System::Byte AValue);
	void __fastcall SetShortDateFormat(const System::UnicodeString AValue);
	void __fastcall SetShortTimeFormat(const System::UnicodeString AValue);
	void __fastcall SetThousandSeparator(const System::WideChar AValue);
	void __fastcall SetTimeAMString(const System::UnicodeString AValue);
	void __fastcall SetTimePMString(const System::UnicodeString AValue);
	void __fastcall SetTimeSeparator(const System::WideChar AValue);
	void __fastcall SetTwoDigitYearCenturyWindow(const System::Word AValue);
	bool __fastcall IsCDS();
	bool __fastcall IsCFS();
	bool __fastcall IsCSS();
	bool __fastcall IsDSS();
	bool __fastcall IsDTSS();
	bool __fastcall IsNCFS();
	bool __fastcall IsSDFS();
	bool __fastcall IsSTFS();
	bool __fastcall IsTAMSS();
	bool __fastcall IsTDYCWS();
	bool __fastcall IsTMSS();
	bool __fastcall IsTPMSS();
	bool __fastcall IsTSS();
	System::Byte __fastcall GetCurrencyDecimals();
	System::Byte __fastcall GetCurrencyFormat();
	System::UnicodeString __fastcall GetCurrencyString();
	System::WideChar __fastcall GetDateSeparator();
	System::WideChar __fastcall GetDecimalSeparator();
	System::Byte __fastcall GetNegCurrFormat();
	System::UnicodeString __fastcall GetShortDateFormat();
	System::UnicodeString __fastcall GetShortTimeFormat();
	System::WideChar __fastcall GetThousandSeparator();
	System::UnicodeString __fastcall GetTimeAMString();
	System::UnicodeString __fastcall GetTimePMString();
	System::WideChar __fastcall GetTimeSeparator();
	System::Word __fastcall GetTwoDigitYearCenturyWindow();
	void __fastcall SetBoolFalseVals(System::Classes::TStrings* const AValue);
	void __fastcall SetBoolTrueVals(System::Classes::TStrings* const AValue);
	void __fastcall SetNullVals(System::Classes::TStrings* const AValue);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TFDTextFormatSettings(TFDTextDataDef* ADef);
	__fastcall virtual ~TFDTextFormatSettings();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	__property TFDTextDataDef* DataDef = {read=FDataDef};
	__property System::Sysutils::TFormatSettings FS = {read=FFS};
	
__published:
	__property System::Byte CurrencyFormat = {read=GetCurrencyFormat, write=SetCurrencyFormat, stored=IsCFS, nodefault};
	__property System::Byte NegCurrFormat = {read=GetNegCurrFormat, write=SetNegCurrFormat, stored=IsNCFS, nodefault};
	__property System::WideChar ThousandSeparator = {read=GetThousandSeparator, write=SetThousandSeparator, stored=IsTSS, nodefault};
	__property System::WideChar DecimalSeparator = {read=GetDecimalSeparator, write=SetDecimalSeparator, stored=IsDSS, nodefault};
	__property System::Byte CurrencyDecimals = {read=GetCurrencyDecimals, write=SetCurrencyDecimals, stored=IsCDS, nodefault};
	__property System::WideChar DateSeparator = {read=GetDateSeparator, write=SetDateSeparator, stored=IsDTSS, nodefault};
	__property System::WideChar TimeSeparator = {read=GetTimeSeparator, write=SetTimeSeparator, stored=IsTMSS, nodefault};
	__property System::UnicodeString CurrencyString = {read=GetCurrencyString, write=SetCurrencyString, stored=IsCSS};
	__property System::UnicodeString ShortDateFormat = {read=GetShortDateFormat, write=SetShortDateFormat, stored=IsSDFS};
	__property System::UnicodeString TimeAMString = {read=GetTimeAMString, write=SetTimeAMString, stored=IsTAMSS};
	__property System::UnicodeString TimePMString = {read=GetTimePMString, write=SetTimePMString, stored=IsTPMSS};
	__property System::UnicodeString ShortTimeFormat = {read=GetShortTimeFormat, write=SetShortTimeFormat, stored=IsSTFS};
	__property System::Word TwoDigitYearCenturyWindow = {read=GetTwoDigitYearCenturyWindow, write=SetTwoDigitYearCenturyWindow, stored=IsTDYCWS, nodefault};
	__property System::Classes::TStrings* BoolTrueVals = {read=FBoolTrueVals, write=SetBoolTrueVals};
	__property System::Classes::TStrings* BoolFalseVals = {read=FBoolFalseVals, write=SetBoolFalseVals};
	__property System::Classes::TStrings* NullVals = {read=FNullVals, write=SetNullVals};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDTextDataDef : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TFDBatchMoveTextDriver* FDriver;
	TFDTextFields* FFields;
	System::WideChar FDelimiter;
	Firedac::Stan::Intf::TFDTextEndOfLine FRecordDelimiter;
	TFDTextRecordFormat FRecordFormat;
	System::WideChar FSeparator;
	bool FWithFieldNames;
	TFDTextFormatSettings* FFormatSettings;
	bool FStrsEmpty2Null;
	bool FTrimLeft;
	bool FTrimRight;
	void __fastcall SetFields(TFDTextFields* const AValue);
	void __fastcall SetDelimiter(System::WideChar AValue);
	void __fastcall SetRecordFormat(TFDTextRecordFormat AValue);
	void __fastcall SetSeparator(System::WideChar AValue);
	bool __fastcall IsADDS();
	void __fastcall SetWithFieldNames(const bool AValue);
	void __fastcall SetFormatSettings(TFDTextFormatSettings* const AValue);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TFDTextDataDef(TFDBatchMoveTextDriver* ADriver);
	__fastcall virtual ~TFDTextDataDef();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	__property TFDBatchMoveTextDriver* Driver = {read=FDriver};
	
__published:
	__property TFDTextFields* Fields = {read=FFields, write=SetFields};
	__property System::WideChar Delimiter = {read=FDelimiter, write=SetDelimiter, stored=IsADDS, nodefault};
	__property System::WideChar Separator = {read=FSeparator, write=SetSeparator, stored=IsADDS, nodefault};
	__property Firedac::Stan::Intf::TFDTextEndOfLine EndOfLine = {read=FRecordDelimiter, write=FRecordDelimiter, default=0};
	__property TFDTextRecordFormat RecordFormat = {read=FRecordFormat, write=SetRecordFormat, default=2};
	__property bool WithFieldNames = {read=FWithFieldNames, write=SetWithFieldNames, default=0};
	__property bool TrimLeft = {read=FTrimLeft, write=FTrimLeft, default=1};
	__property bool TrimRight = {read=FTrimRight, write=FTrimRight, default=1};
	__property bool StrsEmpty2Null = {read=FStrsEmpty2Null, write=FStrsEmpty2Null, default=1};
	__property TFDTextFormatSettings* FormatSettings = {read=FFormatSettings, write=SetFormatSettings};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDBatchMoveTextDriver : public Firedac::Comp::Batchmove::TFDBatchMoveDriver
{
	typedef Firedac::Comp::Batchmove::TFDBatchMoveDriver inherited;
	
private:
	System::Classes::TStream* FStream;
	System::UnicodeString FFileName;
	TFDTextDataDef* FDataDef;
	Firedac::Stan::Intf::TFDEncoding FEncoding;
	Firedac::Stan::Util::TFDTextFile* FText;
	void __fastcall SetDataDef(TFDTextDataDef* const AValue);
	System::UnicodeString __fastcall GetActualFileName();
	
protected:
	virtual bool __fastcall CheckDefined(bool ARaise);
	void __fastcall Close(bool AStopTxError);
	void __fastcall Refresh();
	void __fastcall AbortJob();
	bool __fastcall AddAutoFields();
	void __fastcall DeleteAutoFields();
	System::UnicodeString __fastcall GetCatalog();
	bool __fastcall GetIsUnicode();
	bool __fastcall GetIsOpen();
	int __fastcall GetFieldCount();
	System::UnicodeString __fastcall GetFieldName(int AIndex);
	int __fastcall GetFieldIndex(const System::UnicodeString AName, bool ACheck);
	System::TObject* __fastcall GetFieldInfo(int AIndex, Firedac::Stan::Intf::TFDDataType &AType, unsigned &ASize, int &APrec, int &AScale, bool &AInKey, bool &AIsIdentity);
	void __fastcall GetTableDefs(Data::Db::TFieldDefs* AFieldDefs, Data::Db::TIndexDefs* AIndexDefs);
	
public:
	__fastcall virtual TFDBatchMoveTextDriver(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDBatchMoveTextDriver();
	__property System::Classes::TStream* Stream = {read=FStream, write=FStream};
	__property System::UnicodeString ActualFileName = {read=GetActualFileName};
	
__published:
	__property System::UnicodeString FileName = {read=FFileName, write=FFileName};
	__property TFDTextDataDef* DataDef = {read=FDataDef, write=SetDataDef};
	__property Firedac::Stan::Intf::TFDEncoding Encoding = {read=FEncoding, write=FEncoding, default=0};
};


class PASCALIMPLEMENTATION TFDBatchMoveTextReader : public TFDBatchMoveTextDriver
{
	typedef TFDBatchMoveTextDriver inherited;
	
	
private:
	typedef System::DynamicArray<System::WideChar> _TFDBatchMoveTextReader__1;
	
	
private:
	bool FEof;
	_TFDBatchMoveTextReader__1 FBuff;
	System::UnicodeString __fastcall TrimText(const System::UnicodeString AStr, bool AHeader);
	void __fastcall GuessFormat(Firedac::Stan::Util::TFDTextFile* AText, Firedac::Comp::Batchmove::TFDBatchMoveAnalyze AAnalyze)/* overload */;
	
protected:
	virtual bool __fastcall CheckDefined(bool ARaise);
	System::UnicodeString __fastcall GetSourceTableName();
	void __fastcall Open(bool AStartTx);
	void __fastcall ReadHeader();
	bool __fastcall Eof();
	void __fastcall ReadRecord();
	System::Variant __fastcall GetFieldValue(System::TObject* AField);
	void __fastcall NextRecord();
	void __fastcall GuessFormat(Firedac::Comp::Batchmove::TFDBatchMoveAnalyze AAnalyze = (Firedac::Comp::Batchmove::TFDBatchMoveAnalyze() << Firedac::Comp::Batchmove::Firedac_Comp_Batchmove__1::taDelimSep << Firedac::Comp::Batchmove::Firedac_Comp_Batchmove__1::taHeader << Firedac::Comp::Batchmove::Firedac_Comp_Batchmove__1::taFields ))/* overload */;
public:
	/* TFDBatchMoveTextDriver.Create */ inline __fastcall virtual TFDBatchMoveTextReader(System::Classes::TComponent* AOwner) : TFDBatchMoveTextDriver(AOwner) { }
	/* TFDBatchMoveTextDriver.Destroy */ inline __fastcall virtual ~TFDBatchMoveTextReader() { }
	
private:
	void *__IFDBatchMoveReader;	// Firedac::Comp::Batchmove::IFDBatchMoveReader 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2051}
	operator Firedac::Comp::Batchmove::_di_IFDBatchMoveReader()
	{
		Firedac::Comp::Batchmove::_di_IFDBatchMoveReader intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Comp::Batchmove::IFDBatchMoveReader*(void) { return (Firedac::Comp::Batchmove::IFDBatchMoveReader*)&__IFDBatchMoveReader; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDBatchMoveTextWriter : public TFDBatchMoveTextDriver
{
	typedef TFDBatchMoveTextDriver inherited;
	
protected:
	void __fastcall Open(bool AStartTx);
	void __fastcall CreateTable();
	void __fastcall StartTransaction();
	void __fastcall CommitTransaction();
	void __fastcall RollbackTransaction();
	void __fastcall Erase(bool ANoUndo);
	void __fastcall WriteHeader();
	void __fastcall SetFieldValue(System::TObject* AField, const System::Variant &AValue);
	bool __fastcall FindRecord();
	int __fastcall InsertRecord();
	int __fastcall UpdateRecord();
	int __fastcall DeleteRecord();
	int __fastcall FlushRecords();
public:
	/* TFDBatchMoveTextDriver.Create */ inline __fastcall virtual TFDBatchMoveTextWriter(System::Classes::TComponent* AOwner) : TFDBatchMoveTextDriver(AOwner) { }
	/* TFDBatchMoveTextDriver.Destroy */ inline __fastcall virtual ~TFDBatchMoveTextWriter() { }
	
private:
	void *__IFDBatchMoveWriter;	// Firedac::Comp::Batchmove::IFDBatchMoveWriter 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2052}
	operator Firedac::Comp::Batchmove::_di_IFDBatchMoveWriter()
	{
		Firedac::Comp::Batchmove::_di_IFDBatchMoveWriter intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Comp::Batchmove::IFDBatchMoveWriter*(void) { return (Firedac::Comp::Batchmove::IFDBatchMoveWriter*)&__IFDBatchMoveWriter; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Text */
}	/* namespace Batchmove */
}	/* namespace Comp */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_COMP_BATCHMOVE_TEXT)
using namespace Firedac::Comp::Batchmove::Text;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_COMP_BATCHMOVE)
using namespace Firedac::Comp::Batchmove;
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
#endif	// Firedac_Comp_Batchmove_TextHPP
