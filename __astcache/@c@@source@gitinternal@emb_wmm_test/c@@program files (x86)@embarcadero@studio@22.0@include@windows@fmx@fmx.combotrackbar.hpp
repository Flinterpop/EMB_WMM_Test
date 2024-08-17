// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ComboTrackBar.pas' rev: 35.00 (Windows)

#ifndef Fmx_CombotrackbarHPP
#define Fmx_CombotrackbarHPP

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
#include <FMX.StdActns.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.Text.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.ComboEdit.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Types.hpp>
#include <FMX.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Combotrackbar
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TComboTrackBarModel;
class DELPHICLASS TComboTrackBar;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TComboTrackBarModel : public Fmx::Editbox::TEditBoxModel
{
	typedef Fmx::Editbox::TEditBoxModel inherited;
	
public:
	static const Fmx::Text::TNumValueType DefaultValueType = (Fmx::Text::TNumValueType)(0);
	
	static const System::Int8 DefaultDecimalDigits = System::Int8(0x3);
	
	
private:
	bool FDroppedDown;
	Fmx::Controls::TPlacement FPlacement;
	
protected:
	void __fastcall DoValueRangeChanged(System::TObject* Sender);
	
public:
	__fastcall virtual TComboTrackBarModel()/* overload */;
	__fastcall virtual ~TComboTrackBarModel();
	__property bool DroppedDown = {read=FDroppedDown, write=FDroppedDown, nodefault};
	__property Fmx::Controls::TPlacement Placement = {read=FPlacement, write=FPlacement, nodefault};
public:
	/* TDataModel.Create */ inline __fastcall virtual TComboTrackBarModel(System::Classes::TComponent* const AOwner)/* overload */ : Fmx::Editbox::TEditBoxModel(AOwner) { }
	
};


class PASCALIMPLEMENTATION TComboTrackBar : public Fmx::Editbox::TCustomEditBox
{
	typedef Fmx::Editbox::TCustomEditBox inherited;
	
private:
	float __fastcall GetFrequency();
	void __fastcall SetFrequency(const float Value);
	HIDESBASE bool __fastcall DefStored();
	HIDESBASE TComboTrackBarModel* __fastcall GetModel()/* overload */;
	bool __fastcall GetDroppedDown();
	HIDESBASE bool __fastcall ValueStored();
	
protected:
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual System::UnicodeString __fastcall DefinePresentationName();
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	__property TComboTrackBarModel* Model = {read=GetModel};
	
public:
	__fastcall virtual TComboTrackBar(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall DropDown();
	void __fastcall CloseDropDown();
	__property bool DroppedDown = {read=GetDroppedDown, nodefault};
	__property TextAlign = {default=1};
	__property Font;
	
__published:
	__property Action;
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property Cursor = {default=0};
	__property DecimalDigits = {default=3};
	__property DisableFocusEffect = {default=0};
	__property KeyboardType = {default=0};
	__property ReadOnly = {default=0};
	__property float Frequency = {read=GetFrequency, write=SetFrequency, stored=ValueStored};
	__property TextSettings;
	__property Position;
	__property Width;
	__property Height;
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property HitTest = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property StyledSettings;
	__property StyleLookup = {default=0};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
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
	/* TCustomEdit.Destroy */ inline __fastcall virtual ~TComboTrackBar() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_DECIMALDIGITS_CHANGED = System::Word(0x1720);
static const System::Word MM_VALUETYPE_CHANGED = System::Word(0x1721);
static const System::Word MM_VALUERANGE_CHANGED = System::Word(0x1722);
static const System::Word PM_DROPDOWN = System::Word(0x1004);
static const System::Word PM_CLOSE_DROPDOWN = System::Word(0x1005);
static const System::Word PM_COMBOTRACKBAR_USER = System::Word(0x1008);
}	/* namespace Combotrackbar */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_COMBOTRACKBAR)
using namespace Fmx::Combotrackbar;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_CombotrackbarHPP
