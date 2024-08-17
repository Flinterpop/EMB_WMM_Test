// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.ComboEdit.pas' rev: 35.00 (Windows)

#ifndef Fmx_ComboeditHPP
#define Fmx_ComboeditHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.ListBox.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Pickers.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Comboedit
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TComboEditBase;
class DELPHICLASS TComboEditModel;
class DELPHICLASS TCustomComboEdit;
class DELPHICLASS TComboEdit;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TComboEditBase : public Fmx::Edit::TCustomEdit
{
	typedef Fmx::Edit::TCustomEdit inherited;
	
public:
	__fastcall virtual TComboEditBase(System::Classes::TComponent* AOwner)/* overload */;
	virtual void __fastcall DropDown();
	void __fastcall CloseDropDown();
public:
	/* TCustomEdit.Destroy */ inline __fastcall virtual ~TComboEditBase() { }
	
};


class PASCALIMPLEMENTATION TComboEditModel : public Fmx::Edit::TCustomEditModel
{
	typedef Fmx::Edit::TCustomEditModel inherited;
	
public:
	static const System::Int8 DefaultDropDownCount = System::Int8(0x8);
	
	static const System::Int8 DefaultItemHeight = System::Int8(0x13);
	
	static const Fmx::Pickers::TDropDownKind DefaultDropDownKind = (Fmx::Pickers::TDropDownKind)(1);
	
	
private:
	System::Classes::TStrings* FItems;
	bool FNeedSetFocusAfterButtonClick;
	int FDropDownCount;
	Fmx::Controls::TPlacement FPlacement;
	float FItemHeight;
	float FItemWidth;
	bool FDroppedDown;
	Fmx::Pickers::TDropDownKind FDropDownKind;
	int FItemIndex;
	System::UnicodeString FListBoxResource;
	System::Classes::TNotifyEvent FOnPopup;
	System::Classes::TNotifyEvent FOnClosePopup;
	void __fastcall DoItemsChanged(System::TObject* Sender);
	void __fastcall SetItemHeight(const float Value);
	void __fastcall SetItemWidth(const float Value);
	int __fastcall GetCount();
	void __fastcall SetItemIndex(const int Value);
	void __fastcall SetDropDownCount(const int Value);
	void __fastcall SetDropDownKind(const Fmx::Pickers::TDropDownKind Value);
	void __fastcall SetListBoxResource(const System::UnicodeString Value);
	
protected:
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	virtual System::UnicodeString __fastcall DoValidate(const System::UnicodeString Value);
	
public:
	__fastcall virtual TComboEditModel()/* overload */;
	__fastcall virtual ~TComboEditModel();
	__property int Count = {read=GetCount, nodefault};
	__property Fmx::Pickers::TDropDownKind DropDownKind = {read=FDropDownKind, write=SetDropDownKind, nodefault};
	__property bool DroppedDown = {read=FDroppedDown, write=FDroppedDown, nodefault};
	__property int DropDownCount = {read=FDropDownCount, write=SetDropDownCount, nodefault};
	__property System::Classes::TStrings* Items = {read=FItems};
	__property int ItemIndex = {read=FItemIndex, write=SetItemIndex, nodefault};
	__property float ItemHeight = {read=FItemHeight, write=SetItemHeight};
	__property float ItemWidth = {read=FItemWidth, write=SetItemWidth};
	__property System::UnicodeString ListBoxResource = {read=FListBoxResource, write=SetListBoxResource};
	__property bool NeedSetFocusAfterButtonClick = {read=FNeedSetFocusAfterButtonClick, write=FNeedSetFocusAfterButtonClick, nodefault};
	__property Fmx::Controls::TPlacement Placement = {read=FPlacement, nodefault};
	__property System::Classes::TNotifyEvent OnClosePopup = {read=FOnClosePopup, write=FOnClosePopup};
	__property System::Classes::TNotifyEvent OnPopup = {read=FOnPopup, write=FOnPopup};
public:
	/* TDataModel.Create */ inline __fastcall virtual TComboEditModel(System::Classes::TComponent* const AOwner)/* overload */ : Fmx::Edit::TCustomEditModel(AOwner) { }
	
};


class PASCALIMPLEMENTATION TCustomComboEdit : public TComboEditBase
{
	typedef TComboEditBase inherited;
	
private:
	int __fastcall GetCount();
	void __fastcall SetItemIndex(const int Value);
	int __fastcall GetItemIndex();
	bool __fastcall GetDroppedDown();
	void __fastcall SetDropDownCount(const int Value);
	int __fastcall GetDropDownCount();
	void __fastcall SetDropDownKind(const Fmx::Pickers::TDropDownKind Value);
	Fmx::Pickers::TDropDownKind __fastcall GetDropDownKind();
	void __fastcall SetListBoxResource(const System::UnicodeString Value);
	System::UnicodeString __fastcall GetListBoxResource();
	void __fastcall SetItemHeight(const float Value);
	float __fastcall GetItemHeight();
	void __fastcall SetItems(System::Classes::TStrings* const Value);
	System::Classes::TStrings* __fastcall GetItems();
	void __fastcall SetItemWidth(const float Value);
	float __fastcall GetItemWidth();
	void __fastcall SetOnClosePopup(const System::Classes::TNotifyEvent Value);
	System::Classes::TNotifyEvent __fastcall GetOnClosePopup();
	void __fastcall SetOnPopup(const System::Classes::TNotifyEvent Value);
	System::Classes::TNotifyEvent __fastcall GetOnPopup();
	HIDESBASE TComboEditModel* __fastcall GetModel()/* overload */;
	
protected:
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	virtual System::UnicodeString __fastcall DefinePresentationName();
	
public:
	__fastcall virtual TCustomComboEdit(System::Classes::TComponent* AOwner)/* overload */;
	void __fastcall Clear();
	__property Action;
	__property TComboEditModel* Model = {read=GetModel};
	__property bool DroppedDown = {read=GetDroppedDown, nodefault};
	__property int Count = {read=GetCount, nodefault};
	__property Font;
	__property TextAlign = {default=1};
	__property int DropDownCount = {read=GetDropDownCount, write=SetDropDownCount, nodefault};
	__property Fmx::Pickers::TDropDownKind DropDownKind = {read=GetDropDownKind, write=SetDropDownKind, nodefault};
	__property float ItemHeight = {read=GetItemHeight, write=SetItemHeight};
	__property float ItemWidth = {read=GetItemWidth, write=SetItemWidth};
	__property System::Classes::TStrings* Items = {read=GetItems, write=SetItems};
	__property int ItemIndex = {read=GetItemIndex, write=SetItemIndex, nodefault};
	__property System::UnicodeString ListBoxResource = {read=GetListBoxResource, write=SetListBoxResource};
	__property System::Classes::TNotifyEvent OnClosePopup = {read=GetOnClosePopup, write=SetOnClosePopup};
	__property System::Classes::TNotifyEvent OnPopup = {read=GetOnPopup, write=SetOnPopup};
public:
	/* TCustomEdit.Destroy */ inline __fastcall virtual ~TCustomComboEdit() { }
	
};


class PASCALIMPLEMENTATION TComboEdit : public TCustomComboEdit
{
	typedef TCustomComboEdit inherited;
	
__published:
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property Cursor = {default=-4};
	__property DisableFocusEffect = {default=0};
	__property DropDownCount = {default=8};
	__property DropDownKind = {default=1};
	__property KeyboardType = {default=0};
	__property ReadOnly = {default=0};
	__property ItemHeight = {default=0};
	__property ItemWidth = {default=0};
	__property Items;
	__property ItemIndex;
	__property ListBoxResource = {default=0};
	__property Text = {default=0};
	__property TextSettings;
	__property Position;
	__property Width;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property Hint = {default=0};
	__property StyledSettings;
	__property StyleLookup = {default=0};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property HitTest = {default=1};
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
	__property OnClosePopup;
	__property OnPopup;
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
	/* TCustomComboEdit.Create */ inline __fastcall virtual TComboEdit(System::Classes::TComponent* AOwner)/* overload */ : TCustomComboEdit(AOwner) { }
	
public:
	/* TCustomEdit.Destroy */ inline __fastcall virtual ~TComboEdit() { }
	
};


//-- var, const, procedure ---------------------------------------------------
static const System::Word MM_ITEMHEIGHT_CHANGED = System::Word(0x171b);
static const System::Word MM_ITEMWIDTH_CHANGED = System::Word(0x171c);
static const System::Word MM_ITEMS_CHANGED = System::Word(0x171d);
static const System::Word MM_ITEMINDEX_CHANGED = System::Word(0x171e);
static const System::Word MM_DROPDOWNCOUNT_CHANGED = System::Word(0x171f);
static const System::Word MM_DROPDOWNKIND_CHANGED = System::Word(0x1720);
static const System::Word MM_LISTBOXRESOURCE_CHANGED = System::Word(0x1721);
static const System::Word MM_COMBOEDIT_USER = System::Word(0x1722);
static const System::Word PM_DROPDOWN = System::Word(0x1004);
static const System::Word PM_CLOSE_DROPDOWN = System::Word(0x1005);
static const System::Word PM_COMBOEDIT_USER = System::Word(0x1008);
}	/* namespace Comboedit */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_COMBOEDIT)
using namespace Fmx::Comboedit;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_ComboeditHPP
