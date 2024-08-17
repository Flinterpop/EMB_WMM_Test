// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.NumberBox.pas' rev: 35.00 (Windows)

#ifndef Fmx_NumberboxHPP
#define Fmx_NumberboxHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.UITypes.hpp>
#include <FMX.Types.hpp>
#include <FMX.EditBox.hpp>
#include <FMX.Presentation.Messages.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Controls.Model.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Controls.hpp>
#include <System.Classes.hpp>
#include <FMX.Graphics.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Numberbox
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TNumberBoxModel;
class DELPHICLASS TNumberBox;
//-- type declarations -------------------------------------------------------
class PASCALIMPLEMENTATION TNumberBoxModel : public Fmx::Editbox::TEditBoxModel
{
	typedef Fmx::Editbox::TEditBoxModel inherited;
	
public:
	static const System::Int8 DefaultVertIncrement = System::Int8(0x5);
	
	
private:
	float FVertIncrement;
	
public:
	__fastcall virtual TNumberBoxModel()/* overload */;
	__property float VertIncrement = {read=FVertIncrement, write=FVertIncrement};
public:
	/* TEditBoxModel.Destroy */ inline __fastcall virtual ~TNumberBoxModel() { }
	
public:
	/* TDataModel.Create */ inline __fastcall virtual TNumberBoxModel(System::Classes::TComponent* const AOwner)/* overload */ : Fmx::Editbox::TEditBoxModel(AOwner) { }
	
};


class PASCALIMPLEMENTATION TNumberBox : public Fmx::Editbox::TCustomEditBox
{
	typedef Fmx::Editbox::TCustomEditBox inherited;
	
private:
	float __fastcall GetVertIncrement();
	void __fastcall SetVertIncrement(const float Value);
	bool __fastcall VertIncrementStored();
	HIDESBASE TNumberBoxModel* __fastcall GetModel()/* overload */;
	
protected:
	virtual Fmx::Controls::Model::TDataModelClass __fastcall DefineModelClass();
	virtual System::UnicodeString __fastcall DefinePresentationName();
	
public:
	__property TNumberBoxModel* Model = {read=GetModel};
	__property TextAlign = {default=1};
	
__published:
	__property Action;
	__property CanFocus = {default=1};
	__property CanParentFocus = {default=0};
	__property Cursor = {default=0};
	__property DisableFocusEffect = {default=0};
	__property ReadOnly = {default=0};
	__property KeyboardType = {default=2};
	__property TextSettings;
	__property Position;
	__property Width;
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HorzIncrement;
	__property float VertIncrement = {read=GetVertIncrement, write=SetVertIncrement, stored=VertIncrementStored};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Locked = {default=0};
	__property Hint = {default=0};
	__property HitTest = {default=1};
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
	/* TCustomEditBox.Create */ inline __fastcall virtual TNumberBox(System::Classes::TComponent* AOwner)/* overload */ : Fmx::Editbox::TCustomEditBox(AOwner) { }
	
public:
	/* TCustomEdit.Destroy */ inline __fastcall virtual ~TNumberBox() { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Numberbox */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_NUMBERBOX)
using namespace Fmx::Numberbox;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_NumberboxHPP
