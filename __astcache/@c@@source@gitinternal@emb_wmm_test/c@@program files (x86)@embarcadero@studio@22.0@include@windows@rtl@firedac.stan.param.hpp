// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Stan.Param.pas' rev: 35.00 (Windows)

#ifndef Firedac_Stan_ParamHPP
#define Firedac_Stan_ParamHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <Data.DB.hpp>
#include <System.Variants.hpp>
#include <Data.FmtBcd.hpp>
#include <Data.SqlTimSt.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.SQLTimeInt.hpp>
#include <FireDAC.Stan.Util.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Stan
{
namespace Param
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDMacro;
class DELPHICLASS TFDMacros;
class DELPHICLASS TFDParam;
class DELPHICLASS TFDParams;
//-- type declarations -------------------------------------------------------
typedef System::Classes::TPersistent* __fastcall (__closure *TFDGetOwner)(void);

enum DECLSPEC_DENUM TFDMacroDataType : unsigned int { mdUnknown, mdString, mdIdentifier, mdInteger, mdBoolean, mdFloat, mdDate, mdTime, mdDateTime, mdRaw };

class PASCALIMPLEMENTATION TFDMacro : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FName;
	System::Variant FValue;
	TFDMacroDataType FDataType;
	void __fastcall SetValue(const System::Variant &AValue);
	System::TDateTime __fastcall GetAsDateTime();
	int __fastcall GetAsInteger();
	System::UnicodeString __fastcall GetAsString();
	System::UnicodeString __fastcall GetSQL();
	void __fastcall SetAsDateTime(const System::TDateTime AValue);
	void __fastcall SetAsInteger(const int AValue);
	void __fastcall SetAsString(const System::UnicodeString AValue);
	bool __fastcall GetIsNull();
	double __fastcall GetAsFloat();
	void __fastcall SetAsFloat(const double AValue);
	System::TDateTime __fastcall GetAsDate();
	void __fastcall SetAsDate(const System::TDateTime AValue);
	void __fastcall SetDataType(const TFDMacroDataType AValue);
	void __fastcall SetData(const System::Variant &AValue, TFDMacroDataType AType);
	HIDESBASE void __fastcall Changed();
	void __fastcall SetAsIdentifier(const System::UnicodeString AValue);
	System::TDateTime __fastcall GetAsTime();
	void __fastcall SetAsTime(const System::TDateTime AValue);
	System::UnicodeString __fastcall GetAsRaw();
	void __fastcall SetAsRaw(const System::UnicodeString AValue);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	System::Classes::TPersistent* __fastcall GetCollectionOwner();
	
public:
	__fastcall virtual TFDMacro(System::Classes::TCollection* Collection);
	void __fastcall Clear();
	virtual void __fastcall Assign(System::Classes::TPersistent* AValue);
	bool __fastcall IsEqual(TFDMacro* AValue);
	__property System::Classes::TPersistent* CollectionOwner = {read=GetCollectionOwner};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property System::UnicodeString AsIdentifier = {read=GetAsString, write=SetAsIdentifier};
	__property int AsInteger = {read=GetAsInteger, write=SetAsInteger, nodefault};
	__property System::TDateTime AsDateTime = {read=GetAsDateTime, write=SetAsDateTime};
	__property System::TDateTime AsDate = {read=GetAsDate, write=SetAsDate};
	__property System::TDateTime AsTime = {read=GetAsTime, write=SetAsTime};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property System::UnicodeString AsRaw = {read=GetAsRaw, write=SetAsRaw};
	__property bool IsNull = {read=GetIsNull, nodefault};
	__property System::UnicodeString SQL = {read=GetSQL};
	
__published:
	__property System::Variant Value = {read=FValue, write=SetValue};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TFDMacroDataType DataType = {read=FDataType, write=SetDataType, default=9};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TFDMacro() { }
	
};


class PASCALIMPLEMENTATION TFDMacros : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFDMacro* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	TFDGetOwner FGetOwner;
	System::Classes::TNotifyEvent FOnChanged;
	Firedac::Stan::Util::TFDRefCounter* FRefs;
	bool FTempLockUpdate;
	Data::Db::TDataSet* __fastcall GetDataSet();
	HIDESBASE TFDMacro* __fastcall GetItem(int AIndex);
	HIDESBASE void __fastcall SetItem(int AIndex, TFDMacro* AValue);
	void __fastcall DoChanged();
	bool __fastcall GetIsRefCounted();
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	
public:
	__fastcall TFDMacros()/* overload */;
	__fastcall TFDMacros(TFDGetOwner AGetOwner);
	__fastcall virtual ~TFDMacros();
	void __fastcall AddRef();
	void __fastcall RemRef();
	virtual void __fastcall Assign(System::Classes::TPersistent* AValue);
	virtual void __fastcall EndUpdate();
	void __fastcall TempLockUpdate();
	void __fastcall AssignValues(TFDMacros* AValue);
	HIDESBASE TFDMacro* __fastcall Add();
	bool __fastcall IsEqual(TFDMacros* AValue);
	TFDMacro* __fastcall MacroByName(const System::UnicodeString AValue);
	TFDMacro* __fastcall FindMacro(const System::UnicodeString AValue);
	__property bool IsRefCounted = {read=GetIsRefCounted, nodefault};
	__property Data::Db::TDataSet* Command = {read=GetDataSet};
	__property TFDMacro* Items[int AIndex] = {read=GetItem, write=SetItem/*, default*/};
	__property UpdateCount;
	__property System::Classes::TNotifyEvent OnChanged = {read=FOnChanged, write=FOnChanged};
	__property TFDGetOwner OnGetOwner = {read=FGetOwner, write=FGetOwner};
};


enum DECLSPEC_DENUM TFDParamArrayType : unsigned int { atScalar, atArray, atTable };

enum DECLSPEC_DENUM TFDParamBindMode : unsigned int { pbByName, pbByNumber };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDParam : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FName;
	Data::Db::TFieldType FDataType;
	Firedac::Stan::Intf::TFDDataType FFDDataType;
	Data::Db::TParamType FParamType;
	int FSize;
	int FPrecision;
	int FNumericScale;
	bool FBound;
	int FPosition;
	bool FIsCaseSensitive;
	TFDParamArrayType FArrayType;
	Firedac::Stan::Intf::TFDVariantArray FValue;
	System::UnicodeString FDataTypeName;
	Firedac::Stan::Intf::TFDStreamMode FStreamMode;
	Data::Db::TDataSet* __fastcall GetDataSet();
	bool __fastcall IsParamStored();
	System::Currency __fastcall GetAsBCDs(int AIndex);
	bool __fastcall GetAsBooleans(int AIndex);
	System::RawByteString __fastcall GetAsByteStrs(int AIndex);
	System::Currency __fastcall GetAsCurrencys(int AIndex);
	System::TDateTime __fastcall GetAsDateTimes(int AIndex);
	double __fastcall GetAsFloats(int AIndex);
	Data::Fmtbcd::TBcd __fastcall GetAsFMTBCDs(int AIndex);
	int __fastcall GetAsIntegers(int AIndex);
	Data::Sqltimst::TSQLTimeStamp __fastcall GetAsSQLTimeStamps(int AIndex);
	System::UnicodeString __fastcall GetAsStrings(int AIndex);
	System::Variant __fastcall GetAsVariants(int AIndex);
	bool __fastcall GetIsNulls(int AIndex);
	System::UnicodeString __fastcall GetAsWideStrings(int AIndex);
	void __fastcall SetAsBCDs(int AIndex, const System::Currency AValue);
	void __fastcall SetAsBlobs(int AIndex, const System::RawByteString AValue);
	void __fastcall SetAsBooleans(int AIndex, const bool AValue);
	void __fastcall SetAsByteStrs(int AIndex, const System::RawByteString AValue);
	void __fastcall SetAsVarByteStrs(int AIndex, const System::RawByteString AValue);
	void __fastcall SetAsCurrencys(int AIndex, const System::Currency AValue);
	void __fastcall SetAsDates(int AIndex, const System::TDateTime AValue);
	void __fastcall SetAsDateTimes(int AIndex, const System::TDateTime AValue);
	void __fastcall SetAsFloats(int AIndex, const double AValue);
	void __fastcall SetAsFMTBCDs(int AIndex, const Data::Fmtbcd::TBcd &AValue);
	void __fastcall SetAsIntegers(int AIndex, const int AValue);
	void __fastcall SetAsMemos(int AIndex, const System::AnsiString AValue);
	void __fastcall SetAsSmallInts(int AIndex, const short AValue);
	void __fastcall SetAsSQLTimeStamps(int AIndex, const Data::Sqltimst::TSQLTimeStamp &AValue);
	void __fastcall SetAsStrings(int AIndex, const System::UnicodeString AValue);
	void __fastcall SetAsTimes(int AIndex, const System::TDateTime AValue);
	void __fastcall SetAsVariants(int AIndex, const System::Variant &AValue);
	void __fastcall SetAsWords(int AIndex, System::Word AValue);
	void __fastcall SetBytesValue(int AIndex, System::PByte ABuff, unsigned ASize);
	void __fastcall GetBytesValue(int AIndex, System::PByte ABuff);
	void __fastcall SetTexts(int AIndex, const System::UnicodeString AValue);
	void __fastcall SetAsWideStrings(int AIndex, const System::UnicodeString AValue);
	void __fastcall ErrIndex(int AIndex);
	void __fastcall CheckIndex(int &AIndex);
	int __fastcall GetArraySize();
	void __fastcall SetArraySize(int AValue);
	void __fastcall SetArrayType(TFDParamArrayType AValue);
	bool __fastcall GetIsUnicode();
	void __fastcall UpdateData(int ADim);
	__int64 __fastcall GetAsLargeInt();
	__int64 __fastcall GetAsLargeInts(int AIndex);
	void __fastcall SetAsLargeInt(const __int64 AValue);
	void __fastcall SetAsLargeInts(int AIndex, const __int64 AValue);
	void __fastcall GetVarData(/* out */ System::PVariant &AVar, int AIndex = 0xffffffff);
	void __fastcall ErrBadFieldType();
	void __fastcall ErrUnknownFieldType();
	void __fastcall ErrFieldOutOfRange();
	GUID __fastcall GetAsGUID();
	GUID __fastcall GetAsGUIDs(int AIndex);
	void __fastcall SetAsGUID(const GUID &AValue);
	void __fastcall SetAsGUIDs(int AIndex, const GUID &AValue);
	void __fastcall SetAsWideMemo(const System::UnicodeString AValue);
	void __fastcall SetAsWideMemos(int AIndex, const System::UnicodeString AValue);
	void __fastcall SetAsFixedChar(const System::UnicodeString AValue);
	void __fastcall SetAsFixedChars(int AIndex, const System::UnicodeString AValue);
	System::AnsiString __fastcall GetAsAnsiString();
	System::AnsiString __fastcall GetAsAnsiStrings(int AIndex);
	System::Extended __fastcall GetAsExtended();
	System::Extended __fastcall GetAsExtendeds(int AIndex);
	unsigned __fastcall GetAsLongWord();
	unsigned __fastcall GetAsLongWords(int AIndex);
	void __fastcall SetAsAnsiString(const System::AnsiString AValue);
	void __fastcall SetAsAnsiStrings(int AIndex, const System::AnsiString AValue);
	void __fastcall SetAsByte(const System::Byte AValue);
	void __fastcall SetAsBytes(int AIndex, const System::Byte AValue);
	void __fastcall SetAsExtended(const System::Extended AValue);
	void __fastcall SetAsExtendeds(int AIndex, const System::Extended AValue);
	void __fastcall SetAsLongWord(const unsigned AValue);
	void __fastcall SetAsLongWords(int AIndex, const unsigned AValue);
	void __fastcall SetAsShortInt(const System::Int8 AValue);
	void __fastcall SetAsShortInts(int AIndex, const System::Int8 AValue);
	Data::Fmtbcd::TBcd __fastcall GetAsFMTBCD();
	System::Currency __fastcall GetAsBCD();
	bool __fastcall GetAsBoolean();
	System::RawByteString __fastcall GetAsByteStr();
	System::TDateTime __fastcall GetAsDateTime();
	Data::Sqltimst::TSQLTimeStamp __fastcall GetAsSQLTimeStamp();
	System::Currency __fastcall GetAsCurrency();
	double __fastcall GetAsFloat();
	int __fastcall GetAsInteger();
	System::UnicodeString __fastcall GetAsString();
	System::UnicodeString __fastcall GetAsWideString();
	System::Variant __fastcall GetAsVariant();
	bool __fastcall GetIsNull();
	void __fastcall SetAsBCD(const System::Currency AValue);
	void __fastcall SetAsFMTBCD(const Data::Fmtbcd::TBcd &AValue);
	void __fastcall SetAsBlob(const System::RawByteString AValue);
	void __fastcall SetAsByteStr(const System::RawByteString AValue);
	void __fastcall SetAsVarByteStr(const System::RawByteString AValue);
	void __fastcall SetAsBoolean(const bool AValue);
	void __fastcall SetAsCurrency(const System::Currency AValue);
	void __fastcall SetAsDate(const System::TDateTime AValue);
	void __fastcall SetAsDateTime(const System::TDateTime AValue);
	void __fastcall SetAsSQLTimeStamp(const Data::Sqltimst::TSQLTimeStamp &AValue);
	void __fastcall SetAsFloat(const double AValue);
	void __fastcall SetAsInteger(const int AValue);
	void __fastcall SetAsMemo(const System::AnsiString AValue);
	void __fastcall SetAsString(const System::UnicodeString AValue);
	void __fastcall SetAsWideString(const System::UnicodeString AValue);
	void __fastcall SetAsSmallInt(const short AValue);
	void __fastcall SetAsTime(const System::TDateTime AValue);
	void __fastcall SetAsVariant(const System::Variant &AValue);
	void __fastcall SetAsWord(const System::Word AValue);
	void __fastcall SetDataType(Data::Db::TFieldType AValue);
	void __fastcall SetText(const System::UnicodeString AValue);
	Firedac::Stan::Sqltimeint::TFDSQLTimeInterval __fastcall GetAsSQLTimeInterval();
	Firedac::Stan::Sqltimeint::TFDSQLTimeInterval __fastcall GetAsSQLTimeIntervals(int AIndex);
	void __fastcall SetAsSQLTimeInterval(const Firedac::Stan::Sqltimeint::TFDSQLTimeInterval &AValue);
	void __fastcall SetAsSQLTimeIntervals(int AIndex, const Firedac::Stan::Sqltimeint::TFDSQLTimeInterval &AValue);
	void __fastcall SetAsXML(const System::UnicodeString AValue);
	void __fastcall SetAsXMLs(int AIndex, const System::UnicodeString AValue);
	float __fastcall GetAsSingle();
	float __fastcall GetAsSingles(int AIndex);
	void __fastcall SetAsSingle(const float AValue);
	void __fastcall SetAsSingles(int AIndex, const float AValue);
	System::UnicodeString __fastcall GetSQLName();
	void __fastcall BeginSetBlobRawData(int &AIndex);
	System::PByte __fastcall EndSetBlobRawData(unsigned ALen, System::PByte APtr, int AIndex);
	void __fastcall ReadADDataType(System::Classes::TReader* Reader);
	Data::Db::_di_IParamObject __fastcall GetParamObjectBase(const TVarData &AData);
	Data::Db::_di_IParamObject __fastcall GetParamObject(int AIndex);
	bool __fastcall HasParamObjectBase(const TVarData &AData, const System::TClass AObjectType);
	bool __fastcall HasParamObject(const System::TClass AObjectType, int AIndex);
	Data::Db::TDataSet* __fastcall GetAsDataSet();
	Data::Db::TDataSet* __fastcall GetAsDataSets(int AIndex);
	void __fastcall SetAsDataSet(Data::Db::TDataSet* const AValue);
	void __fastcall SetAsDataSets(int AIndex, Data::Db::TDataSet* const AValue);
	System::Classes::TStream* __fastcall GetAsStream();
	System::Classes::TStream* __fastcall GetAsStreams(int AIndex);
	void __fastcall SetAsStream(System::Classes::TStream* const AValue);
	void __fastcall SetAsStreams(int AIndex, System::Classes::TStream* const AValue);
	bool __fastcall GetIsDataSet();
	bool __fastcall GetIsDatasets(int AIndex);
	bool __fastcall GetIsStream();
	bool __fastcall GetIsStreams(int AIndex);
	bool __fastcall GetIsObject();
	bool __fastcall GetIsObjects(int AIndex);
	System::Byte __fastcall GetAsByte();
	System::Byte __fastcall GetAsBytes(int AIndex);
	System::Int8 __fastcall GetAsShortInt();
	System::Int8 __fastcall GetAsShortInts(int AIndex);
	short __fastcall GetAsSmallInt();
	short __fastcall GetAsSmallInts(int AIndex);
	System::Word __fastcall GetAsWord();
	System::Word __fastcall GetAsWords(int AIndex);
	
protected:
	void __fastcall AssignParam(TFDParam* AParam);
	void __fastcall AssignDlpParam(Data::Db::TParam* AParam);
	void __fastcall AssignToDlpParam(Data::Db::TParam* AParam);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* AFiler);
	bool __fastcall IsEqual(TFDParam* AValue);
	virtual System::UnicodeString __fastcall GetDisplayName();
	__property Data::Db::TDataSet* DataSet = {read=GetDataSet};
	
public:
	__fastcall virtual TFDParam(System::Classes::TCollection* Collection)/* overload */;
	__fastcall TFDParam(TFDParams* AParams, Data::Db::TParamType AParamType)/* overload */;
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	void __fastcall AssignField(Data::Db::TField* AField);
	void __fastcall AssignFieldValue(Data::Db::TField* AField, const System::Variant &AValue)/* overload */;
	void __fastcall AssignFieldValue(Data::Db::TField* AField)/* overload */;
	void __fastcall Clear(int AIndex = 0xffffffff);
	void __fastcall AssignVarRec(const System::TVarRec &AVarRec, int AIndex = 0xffffffff);
	bool __fastcall GetBlobRawData(unsigned &ALen, System::PByte &APtr, int AIndex = 0xffffffff);
	System::PByte __fastcall SetBlobRawData(unsigned ALen, System::PByte APtr, int AIndex = 0xffffffff);
	void __fastcall GetData(System::PByte ABuffer, int AIndex = 0xffffffff);
	void __fastcall SetData(System::PByte ABuffer, unsigned ALen = (unsigned)(0xffffffff), int AIndex = 0xffffffff);
	int __fastcall GetDataLength(int AIndex = 0xffffffff);
	int __fastcall GetDataSize(int AIndex = 0xffffffff);
	void __fastcall LoadFromFile(const System::UnicodeString AFileName, Data::Db::TFieldType ABlobType, int AIndex = 0xffffffff);
	void __fastcall LoadFromStream(System::Classes::TStream* AStream, Data::Db::TFieldType ABlobType, int AIndex = 0xffffffff);
	void __fastcall GetDataReader(System::PByte ABuffer, int AIndex = 0xffffffff);
	Data::Db::_di_IParamObject __fastcall SetObjectValue(System::TObject* const AInstance, const Data::Db::TFieldType ADataType, bool AOwner = true, int AIndex = 0xffffffff);
	void __fastcall SetDataSet(Data::Db::TDataSet* ADataset, bool AOwner = true, int AIndex = 0xffffffff);
	void __fastcall SetStream(System::Classes::TStream* AStream, Data::Db::TFieldType ABlobType, bool AOwner = true, int AIndex = 0xffffffff);
	__property float AsSingle = {read=GetAsSingle, write=SetAsSingle};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property System::Extended AsExtended = {read=GetAsExtended, write=SetAsExtended};
	__property System::Currency AsCurrency = {read=GetAsCurrency, write=SetAsCurrency};
	__property System::Currency AsBCD = {read=GetAsBCD, write=SetAsBCD};
	__property Data::Fmtbcd::TBcd AsFMTBCD = {read=GetAsFMTBCD, write=SetAsFMTBCD};
	__property System::Int8 AsShortInt = {read=GetAsShortInt, write=SetAsShortInt, nodefault};
	__property System::Byte AsByte = {read=GetAsByte, write=SetAsByte, nodefault};
	__property short AsSmallInt = {read=GetAsSmallInt, write=SetAsSmallInt, nodefault};
	__property System::Word AsWord = {read=GetAsWord, write=SetAsWord, nodefault};
	__property int AsInteger = {read=GetAsInteger, write=SetAsInteger, nodefault};
	__property unsigned AsLongword = {read=GetAsLongWord, write=SetAsLongWord, nodefault};
	__property __int64 AsLargeInt = {read=GetAsLargeInt, write=SetAsLargeInt};
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property System::RawByteString AsByteStr = {read=GetAsByteStr, write=SetAsByteStr};
	__property System::RawByteString AsVarByteStr = {read=GetAsByteStr, write=SetAsVarByteStr};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property System::UnicodeString AsFixedChar = {read=GetAsString, write=SetAsFixedChar};
	__property System::UnicodeString AsWideString = {read=GetAsWideString, write=SetAsWideString};
	__property System::AnsiString AsAnsiString = {read=GetAsAnsiString, write=SetAsAnsiString};
	__property System::RawByteString AsBlob = {read=GetAsByteStr, write=SetAsBlob};
	__property System::AnsiString AsMemo = {read=GetAsAnsiString, write=SetAsMemo};
	__property System::UnicodeString AsWideMemo = {read=GetAsWideString, write=SetAsWideMemo};
	__property System::UnicodeString AsXML = {read=GetAsWideString, write=SetAsXML};
	__property System::TDateTime AsDate = {read=GetAsDateTime, write=SetAsDate};
	__property System::TDateTime AsDateTime = {read=GetAsDateTime, write=SetAsDateTime};
	__property Data::Sqltimst::TSQLTimeStamp AsSQLTimeStamp = {read=GetAsSQLTimeStamp, write=SetAsSQLTimeStamp};
	__property System::TDateTime AsTime = {read=GetAsDateTime, write=SetAsTime};
	__property Firedac::Stan::Sqltimeint::TFDSQLTimeInterval AsSQLTimeInterval = {read=GetAsSQLTimeInterval, write=SetAsSQLTimeInterval};
	__property GUID AsGUID = {read=GetAsGUID, write=SetAsGUID};
	__property Data::Db::TDataSet* AsDataSet = {read=GetAsDataSet, write=SetAsDataSet};
	__property System::Classes::TStream* AsStream = {read=GetAsStream, write=SetAsStream};
	__property float AsSingles[int AIndex] = {read=GetAsSingles, write=SetAsSingles};
	__property double AsFloats[int AIndex] = {read=GetAsFloats, write=SetAsFloats};
	__property System::Extended AsExtendeds[int AIndex] = {read=GetAsExtendeds, write=SetAsExtendeds};
	__property System::Currency AsCurrencys[int AIndex] = {read=GetAsCurrencys, write=SetAsCurrencys};
	__property System::Currency AsBCDs[int AIndex] = {read=GetAsBCDs, write=SetAsBCDs};
	__property Data::Fmtbcd::TBcd AsFMTBCDs[int AIndex] = {read=GetAsFMTBCDs, write=SetAsFMTBCDs};
	__property System::Int8 AsShortInts[int AIndex] = {read=GetAsShortInts, write=SetAsShortInts};
	__property System::Byte AsBytes[int AIndex] = {read=GetAsBytes, write=SetAsBytes};
	__property short AsSmallInts[int AIndex] = {read=GetAsSmallInts, write=SetAsSmallInts};
	__property System::Word AsWords[int AIndex] = {read=GetAsWords, write=SetAsWords};
	__property int AsIntegers[int AIndex] = {read=GetAsIntegers, write=SetAsIntegers};
	__property unsigned AsLongwords[int AIndex] = {read=GetAsLongWords, write=SetAsLongWords};
	__property __int64 AsLargeInts[int AIndex] = {read=GetAsLargeInts, write=SetAsLargeInts};
	__property bool AsBooleans[int AIndex] = {read=GetAsBooleans, write=SetAsBooleans};
	__property System::RawByteString AsByteStrs[int AIndex] = {read=GetAsByteStrs, write=SetAsByteStrs};
	__property System::RawByteString AsVarByteStrs[int AIndex] = {read=GetAsByteStrs, write=SetAsVarByteStrs};
	__property System::UnicodeString AsStrings[int AIndex] = {read=GetAsStrings, write=SetAsStrings};
	__property System::UnicodeString AsFixedChars[int AIndex] = {read=GetAsStrings, write=SetAsFixedChars};
	__property System::UnicodeString AsWideStrings[int AIndex] = {read=GetAsWideStrings, write=SetAsWideStrings};
	__property System::AnsiString AsAnsiStrings[int AIndex] = {read=GetAsAnsiStrings, write=SetAsAnsiStrings};
	__property System::RawByteString AsBlobs[int AIndex] = {read=GetAsByteStrs, write=SetAsBlobs};
	__property System::AnsiString AsMemos[int AIndex] = {read=GetAsAnsiStrings, write=SetAsMemos};
	__property System::UnicodeString AsWideMemos[int AIndex] = {read=GetAsWideStrings, write=SetAsWideMemos};
	__property System::UnicodeString AsXMLs[int AIndex] = {read=GetAsWideStrings, write=SetAsXMLs};
	__property System::TDateTime AsDates[int AIndex] = {read=GetAsDateTimes, write=SetAsDates};
	__property System::TDateTime AsDateTimes[int AIndex] = {read=GetAsDateTimes, write=SetAsDateTimes};
	__property Data::Sqltimst::TSQLTimeStamp AsSQLTimeStamps[int AIndex] = {read=GetAsSQLTimeStamps, write=SetAsSQLTimeStamps};
	__property System::TDateTime AsTimes[int AIndex] = {read=GetAsDateTimes, write=SetAsTimes};
	__property Firedac::Stan::Sqltimeint::TFDSQLTimeInterval AsSQLTimeIntervals[int AIndex] = {read=GetAsSQLTimeIntervals, write=SetAsSQLTimeIntervals};
	__property GUID AsGUIDs[int AIndex] = {read=GetAsGUIDs, write=SetAsGUIDs};
	__property Data::Db::TDataSet* AsDataSets[int AIndex] = {read=GetAsDataSets, write=SetAsDataSets};
	__property System::Classes::TStream* AsStreams[int AIndex] = {read=GetAsStreams, write=SetAsStreams};
	__property System::Variant Values[int AIndex] = {read=GetAsVariants, write=SetAsVariants};
	__property bool IsNulls[int AIndex] = {read=GetIsNulls};
	__property bool IsObjects[int AIndex] = {read=GetIsObjects};
	__property bool IsStreams[int AIndex] = {read=GetIsStreams};
	__property bool IsDatasets[int AIndex] = {read=GetIsDatasets};
	__property System::UnicodeString SQLName = {read=GetSQLName};
	__property bool Bound = {read=FBound, write=FBound, nodefault};
	__property bool IsNull = {read=GetIsNull, nodefault};
	__property bool IsObject = {read=GetIsObject, nodefault};
	__property bool IsStream = {read=GetIsStream, nodefault};
	__property bool IsDataSet = {read=GetIsDataSet, nodefault};
	__property bool IsUnicode = {read=GetIsUnicode, nodefault};
	__property System::UnicodeString Text = {read=GetAsString, write=SetText};
	__property System::UnicodeString Texts[int AIndex] = {read=GetAsStrings, write=SetTexts};
	
__published:
	__property int Position = {read=FPosition, write=FPosition, default=0};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property bool IsCaseSensitive = {read=FIsCaseSensitive, write=FIsCaseSensitive, default=0};
	__property TFDParamArrayType ArrayType = {read=FArrayType, write=SetArrayType, default=0};
	__property int ArraySize = {read=GetArraySize, write=SetArraySize, default=1};
	__property Data::Db::TFieldType DataType = {read=FDataType, write=SetDataType, default=0};
	__property Firedac::Stan::Intf::TFDDataType FDDataType = {read=FFDDataType, write=FFDDataType, default=0};
	__property int Precision = {read=FPrecision, write=FPrecision, default=0};
	__property int NumericScale = {read=FNumericScale, write=FNumericScale, default=0};
	__property Data::Db::TParamType ParamType = {read=FParamType, write=FParamType, default=0};
	__property System::UnicodeString DataTypeName = {read=FDataTypeName, write=FDataTypeName};
	__property int Size = {read=FSize, write=FSize, default=0};
	__property Firedac::Stan::Intf::TFDStreamMode StreamMode = {read=FStreamMode, write=FStreamMode, default=0};
	__property System::Variant Value = {read=GetAsVariant, write=SetAsVariant, stored=IsParamStored};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TFDParam() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDParams : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFDParam* operator[](int Index) { return this->Items[Index]; }
	
private:
	TFDGetOwner FGetOwner;
	TFDParamBindMode FBindMode;
	Firedac::Stan::Util::TFDRefCounter* FRefs;
	System::Classes::TStrings* FMarkers;
	bool FHasObjects;
	HIDESBASE TFDParam* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TFDParam* const AValue);
	int __fastcall GetArraySize();
	void __fastcall SetArraySize(const int AValue);
	System::Variant __fastcall GetParamValues(const System::UnicodeString AParamNames);
	void __fastcall SetParamValues(const System::UnicodeString AParamNames, const System::Variant &AValue);
	bool __fastcall GetIsRefCounted();
	void __fastcall ReadBinaryData(System::Classes::TStream* Stream);
	void __fastcall SetMarkers(System::Classes::TStrings* const AValue);
	
protected:
	Data::Db::TDataSet* __fastcall GetDataSet();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* AFiler);
	__property Data::Db::TDataSet* DataSet = {read=GetDataSet};
	
public:
	void __fastcall Prepare(Data::Db::TFieldType ADefaultDataType, Data::Db::TParamType ADefaultParamType);
	void __fastcall Close();
	void __fastcall Unprepare();
	__fastcall TFDParams()/* overload */;
	__fastcall TFDParams(TFDGetOwner AGetOwner)/* overload */;
	__fastcall virtual ~TFDParams();
	void __fastcall AddRef();
	void __fastcall RemRef();
	void __fastcall AssignValues(TFDParams* AValue, Data::Db::TParamTypes AParamTypes = (Data::Db::TParamTypes() << Data::Db::TParamType::ptUnknown << Data::Db::TParamType::ptInput << Data::Db::TParamType::ptOutput << Data::Db::TParamType::ptInputOutput << Data::Db::TParamType::ptResult ));
	virtual void __fastcall Assign(System::Classes::TPersistent* AValue);
	HIDESBASE TFDParam* __fastcall Add()/* overload */;
	HIDESBASE TFDParam* __fastcall Add(const System::UnicodeString AName, const System::Variant &AValue, Data::Db::TParamType AParamType = (Data::Db::TParamType)(0x0))/* overload */;
	HIDESBASE TFDParam* __fastcall Add(const System::UnicodeString AName, Data::Db::TFieldType AType, int ASize = 0xffffffff, Data::Db::TParamType AParamType = (Data::Db::TParamType)(0x0))/* overload */;
	TFDParam* __fastcall CreateParam(Data::Db::TFieldType AFldType, const System::UnicodeString AParamName, Data::Db::TParamType AParamType);
	void __fastcall GetParamList(System::Classes::TList* AList, const System::UnicodeString AParamNames);
	bool __fastcall IsEqual(TFDParams* AValue);
	TFDParam* __fastcall ParamByName(const System::UnicodeString AValue);
	TFDParam* __fastcall FindParam(const System::UnicodeString AValue)/* overload */;
	TFDParam* __fastcall ParamByPosition(const int AValue);
	TFDParam* __fastcall FindParam(const int AValue)/* overload */;
	void __fastcall ClearValues(int AIndex = 0xffffffff);
	__property bool IsRefCounted = {read=GetIsRefCounted, nodefault};
	__property TFDParam* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property System::Variant ParamValues[const System::UnicodeString AParamNames] = {read=GetParamValues, write=SetParamValues};
	__property int ArraySize = {read=GetArraySize, write=SetArraySize, nodefault};
	__property TFDParamBindMode BindMode = {read=FBindMode, write=FBindMode, nodefault};
	__property System::Classes::TStrings* Markers = {read=FMarkers, write=SetMarkers};
	__property TFDGetOwner OnGetOwner = {read=FGetOwner, write=FGetOwner};
};


typedef System::StaticArray<System::UnicodeString, 5> Firedac_Stan_Param__5;

typedef System::StaticArray<System::UnicodeString, 16> Firedac_Stan_Param__6;

typedef System::StaticArray<System::UnicodeString, 8> Firedac_Stan_Param__7;

typedef System::StaticArray<System::UnicodeString, 3> Firedac_Stan_Param__8;

typedef System::StaticArray<System::UnicodeString, 10> Firedac_Stan_Param__9;

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE System::StaticArray<int, 52> C_FieldType2VarType;
extern DELPHI_PACKAGE System::StaticArray<int, 10> C_MacroDataType2VarType;
extern DELPHI_PACKAGE Firedac_Stan_Param__5 C_ParamTypeNames;
extern DELPHI_PACKAGE Firedac_Stan_Param__6 C_FDDataAttributeNames;
extern DELPHI_PACKAGE Firedac_Stan_Param__7 C_FDDataOptionNames;
extern DELPHI_PACKAGE Firedac_Stan_Param__8 C_FDParamArrayTypeNames;
extern DELPHI_PACKAGE Firedac_Stan_Param__9 C_MacroTypeNames;
extern DELPHI_PACKAGE void __fastcall FDRegisterParamObjectClass(Data::Db::TFieldType ADataType, Data::Db::TParamObjectClass AObjClass);
extern DELPHI_PACKAGE TFDMacroDataType __fastcall FDVarType2FieldType(const System::Variant &AValue);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDVar2SQLTyped(const System::Variant &AValue, TFDMacroDataType AFieldType);
extern DELPHI_PACKAGE System::UnicodeString __fastcall FDVar2SQL(const System::Variant &AValue);
}	/* namespace Param */
}	/* namespace Stan */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN_PARAM)
using namespace Firedac::Stan::Param;
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
#endif	// Firedac_Stan_ParamHPP
