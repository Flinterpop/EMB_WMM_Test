// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.EditBox.pas' rev: 35.00 (Windows)

#ifndef Fmx_EditboxHPP
#define Fmx_EditboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.Rtti.hpp>
#include <System.UITypes.hpp>
#include <System.SysUtils.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdActns.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.Text.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Editbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TEditBoxModel;
class DELPHICLASS TCustomEditBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TEditBoxModel : public Fmx::Edit::TCustomEditModel
{
	typedef Fmx::Edit::TCustomEditModel inherited;
	
public:
	static const System::Int8 DefaultDecimalDigits = System::Int8(0x2);
	
	static const System::Int8 DefaultHorzIncrement = System::Int8(0x1);
	
	static const Fmx::Text::TNumValueType DefaultValueType = (Fmx::Text::TNumValueType)(0);
	
	static const Fmx::Types::TVirtualKeyboardType DefaultKeyboardType = (Fmx::Types::TVirtualKeyboardType)(2);
	
	
private:
	Fmx::Stdactns::TValueRange* FValueRange;
	Fmx::Text::TNumValueType FValueType;
	int FDecimalDigits;
	float FHorzIncrement;
	Fmx::Stdactns::TBaseValueRange* FDefaultValueRange;
	void __fastcall SetDecimalDigits(const int Value);
	void __fastcall SetValueType(const Fmx::Text::TNumValueType Value);
	double __fastcall GetValue();
	void __fastcall SetValue(const double Value);
	float __fastcall GetCurrentIncrement();
	void __fastcall SetHorzIncrement(const float Value);
	bool __fastcall HorzIncrementStored();
	
protected:
	virtual System::UnicodeString __fastcall DoFiltering(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall DoValidating(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall DoValidate(const System::UnicodeString Value);
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	System::UnicodeString __fastcall ConvertToText(const double AValue, const System::UnicodeString Source = System::UnicodeString());
	
public:
	__fastcall virtual TEditBoxModel()/* overload */;
	__fastcall virtual ~TEditBoxModel();
	System::UnicodeString __fastcall ConvertValueToText();
	double __fastcall ConvertTextToValue(const System::UnicodeString AText);
	__property float CurrentIncrement = {read=GetCurrentIncrement};
	__property Fmx::Stdactns::TBaseValueRange* DefaultValueRange = {read=FDefaultValueRange};
	__property int DecimalDigits = {read=FDecimalDigits, write=SetDecimalDigits, nodefault};
	__property float HorzIncrement = {read=FHorzIncrement, write=SetHorzIncrement, stored=HorzIncrementStored};
	__property double Value = {read=GetValue, write=SetValue};
	__property Fmx::Text::TNumValueType ValueType = {read=FValueType, write=SetValueType, nodefault};
	__property Fmx::Stdactns::TValueRange* ValueRange = {read=FValueRange};
public:
	/* TDataModel.Create */ inline __fastcall virtual TEditBoxModel(System::Classes::TComponent* const AOwner)/* overload */ : Fmx::Edit::TCustomEditModel(AOwner) { }
	
};


class PASCALIMPLEMENTATION TCustomEditBox : public Fmx::Edit::TCustomEdit
{
	typedef Fmx::Edit::TCustomEdit inherited;
	
private:
	void __fastcall SetMax(const double AValue);
	double __fastcall GetMax();
	bool __fastcall MaxStored();
	void __fastcall SetMin(const double AValue);
	double __fastcall GetMin();
	bool __fastcall MinStored();
	double __fastcall GetValue();
	void __fastcall SetDecimalDigits(const int ADecimalDigits);
	int __fastcall GetDecimalDigits();
	void __fastcall SetValueType(const Fmx::Text::TNumValueType AValueType);
	Fmx::Text::TNumValueType __fastcall GetValueType();
	void __fastcall SetValueRange(Fmx::Stdactns::TCustomValueRange* const AValue);
	Fmx::Stdactns::TCustomValueRange* __fastcall GetValueRange();
	void __fastcall SetValueRange_(Fmx::Stdactns::TValueRange* const Value);
	Fmx::Stdactns::TValueRange* __fastcall GetValueRange_();
	void __fastcall SetHorzIncrement(const float Value);
	float __fastcall GetHorzIncrement();
	bool __fastcall DefStored();
	Fmx::Stdactns::TBaseValueRange* __fastcall GetDefaultValueRange();
	HIDESBASE TEditBoxModel* __fastcall GetModel()/* overload */;
	
protected:
	bool __fastcall ValueStored();
	virtual bool __fastcall HorzIncrementStored();
	virtual void __fastcall Loaded();
	virtual void __fastcall SetValue(const double AValue);
	virtual System::Rtti::TValue __fastcall GetData();
	virtual void __fastcall SetData(const System::Rtti::TValue &Value);
	virtual Fmx::Actnlist::TActionLinkClass __fastcall GetActionLinkClass();
	virtual void __fastcall ActionChange(System::Classes::TBasicAction* Sender, bool CheckDefaults);
	__property Fmx::Stdactns::TBaseValueRange* DefaultValueRange = {read=GetDefaultValueRange};
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	virtual System::UnicodeString __fastcall DefinePresentationName();
	__property TEditBoxModel* Model = {read=GetModel};
	
public:
	__fastcall virtual TCustomEditBox(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall AfterConstruction();
	void __fastcall ValueInc();
	void __fastcall ValueDec();
	__property float HorzIncrement = {read=GetHorzIncrement, write=SetHorzIncrement, stored=HorzIncrementStored};
	__property Fmx::Stdactns::TValueRange* ValueRange = {read=GetValueRange_, write=SetValueRange_, stored=ValueStored};
	__property Font;
	__property FontColor = {default=-16777216};
	__property TextSettings;
	
__published:
	__property Cursor = {default=-4};
	__property int DecimalDigits = {read=GetDecimalDigits, write=SetDecimalDigits, default=2};
	__property double Min = {read=GetMin, write=SetMin, stored=MinStored};
	__property double Max = {read=GetMax, write=SetMax, stored=MaxStored};
	__property double Value = {read=GetValue, write=SetValue, stored=ValueStored};
	__property Fmx::Text::TNumValueType ValueType = {read=GetValueType, write=SetValueType, default=0};
	__property Text = {stored=false, default=0};
public:
	/* TCustomEdit.Destroy */ inline __fastcall virtual ~TCustomEditBox() { }
	
private:
	void *__IValueRange;	// Fmx::Stdactns::IValueRange 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6DFA65EF-A8BF-4D58-9655-664B50C30312}
	operator Fmx::Stdactns::_di_IValueRange()
	{
		Fmx::Stdactns::_di_IValueRange intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Stdactns::IValueRange*(void) { return (Fmx::Stdactns::IValueRange*)&__IValueRange; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_DECIMALDIGITS_CHANGED = System::Word(0x171b);
static const System::Word MM_VALUETYPE_CHANGED = System::Word(0x171c);
static const System::Word MM_VALUERANGE_CHANGED = System::Word(0x171d);
static const System::Word MM_HORZ_INCREMENT_CHANGED = System::Word(0x171e);
static const System::Word MM_EDITBOX_USER = System::Word(0x171f);
}	/* namespace Editbox */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_EDITBOX)
using namespace Fmx::Editbox;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_EditboxHPP
