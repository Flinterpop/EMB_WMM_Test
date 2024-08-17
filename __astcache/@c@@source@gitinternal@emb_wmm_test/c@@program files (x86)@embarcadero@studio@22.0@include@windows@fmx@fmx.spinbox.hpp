// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.SpinBox.pas' rev: 35.00 (Windows)

#ifndef Fmx_SpinboxHPP
#define Fmx_SpinboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <FMX.EditBox.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Spinbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TSpinBoxModel;
class DELPHICLASS TSpinBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TSpinBoxModel : public Fmx::Editbox::TEditBoxModel
{
	typedef Fmx::Editbox::TEditBoxModel inherited;
	
public:
	static const Fmx::Types::TTextAlign DefaultHorzAlign = (Fmx::Types::TTextAlign)(0);
	
	static const bool DefaultRepeatClick = false;
	
	
private:
	bool FRepeatClick;
	void __fastcall SetRepeatClick(const bool Value);
	
protected:
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	
public:
	__fastcall virtual TSpinBoxModel()/* overload */;
	__property bool RepeatClick = {read=FRepeatClick, write=SetRepeatClick, nodefault};
public:
	/* TEditBoxModel.Destroy */ inline __fastcall virtual ~TSpinBoxModel() { }
	
public:
	/* TDataModel.Create */ inline __fastcall virtual TSpinBoxModel(System::Classes::TComponent* const AOwner)/* overload */ : Fmx::Editbox::TEditBoxModel(AOwner) { }
	
};


class PASCALIMPLEMENTATION TSpinBox : public Fmx::Editbox::TCustomEditBox
{
	typedef Fmx::Editbox::TCustomEditBox inherited;
	
private:
	float __fastcall GetIncrement();
	void __fastcall SetIncrement(const float Value);
	bool __fastcall GetRepeatClick();
	void __fastcall SetRepeatClick(const bool Value);
	HIDESBASE TSpinBoxModel* __fastcall GetModel()/* overload */;
	
protected:
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	virtual System::UnicodeString __fastcall DefinePresentationName();
	__property TSpinBoxModel* Model = {read=GetModel};
	
public:
	__property TextAlign = {default=0};
	
__published:
	__property Action;
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property float Increment = {read=GetIncrement, write=SetIncrement, stored=HorzIncrementStored};
	__property ReadOnly = {default=0};
	__property bool RepeatClick = {read=GetRepeatClick, write=SetRepeatClick, default=0};
	__property KeyboardType = {default=2};
	__property Position;
	__property Width;
	__property Height;
	__property TextSettings;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Hint = {default=0};
	__property HitTest = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property StyledSettings;
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Caret;
	__property KillFocusByReturn = {default=0};
	__property ParentShowHint = {default=1};
	__property ShowHint;
	__property OnChange;
	__property OnChangeTracking;
	__property OnTyping;
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnKeyDown;
	__property OnKeyUp;
	__property OnCanFocus;
	__property OnClick;
	__property OnDblClick;
	__property OnEnter;
	__property OnExit;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property OnMouseWheel;
	__property OnMouseEnter;
	__property OnMouseLeave;
	__property OnPainting;
	__property OnPaint;
	__property OnResize;
	__property OnResized;
	__property OnPresentationNameChoosing;
public:
	/* TCustomEditBox.Create */ inline __fastcall virtual TSpinBox(System::Classes::TComponent* AOwner)/* overload */ : Fmx::Editbox::TCustomEditBox(AOwner) { }
	
public:
	/* TCustomEdit.Destroy */ inline __fastcall virtual ~TSpinBox() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_SPINBOX_REPEATCLICK_CHANGED = System::Word(0x1720);
static const System::Word MM_SPINBOX_USER = System::Word(0x1721);
}	/* namespace Spinbox */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_SPINBOX)
using namespace Fmx::Spinbox;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_SpinboxHPP
