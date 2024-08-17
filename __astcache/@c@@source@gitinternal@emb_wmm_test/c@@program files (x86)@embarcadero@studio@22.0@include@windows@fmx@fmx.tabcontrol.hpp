// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FMX.TabControl.pas' rev: 35.00 (Windows)

#ifndef Fmx_TabcontrolHPP
#define Fmx_TabcontrolHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <System.UITypes.hpp>
#include <System.Types.hpp>
#include <System.Actions.hpp>
#include <System.ImageList.hpp>
#include <System.Generics.Collections.hpp>
#include <System.SysUtils.hpp>
#include <FMX.ActnList.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.hpp>
#include <FMX.MultiResBitmap.hpp>
#include <FMX.ImgList.hpp>
#include <FMX.InertialMovement.hpp>
#include <FMX.BehaviorManager.hpp>
#include <FMX.Graphics.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Fmx
{
namespace Tabcontrol
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TTabControlAction;
class DELPHICLASS TChangeTabAction;
class DELPHICLASS TNextTabAction;
class DELPHICLASS TPreviousTabAction;
class DELPHICLASS TTabItem;
class DELPHICLASS TTabControl;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TTabItemClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TTabItemClass);
#endif /* _WIN64 */

enum class DECLSPEC_DENUM TTabTransition : unsigned char { None, Slide };

enum class DECLSPEC_DENUM TTabTransitionDirection : unsigned char { Normal, Reversed };

class PASCALIMPLEMENTATION TTabControlAction : public Fmx::Actnlist::TCustomAction
{
	typedef Fmx::Actnlist::TCustomAction inherited;
	
private:
	TTabControl* FTabControl;
	TTabTransition FTransition;
	TTabTransitionDirection FDirection;
	void __fastcall SetTabControl(TTabControl* const Value);
	
protected:
	int __fastcall FindVisibleTab(bool LeftToRight);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	__property TTabControl* TabControl = {read=FTabControl, write=SetTabControl};
	__property TTabTransition Transition = {read=FTransition, write=FTransition, default=1};
	__property TTabTransitionDirection Direction = {read=FDirection, write=FDirection, default=0};
	
public:
	__fastcall virtual TTabControlAction(System::Classes::TComponent* AOwner);
	virtual int __fastcall GetEnsuingTabIndex();
	virtual bool __fastcall HandlesTarget(System::TObject* Target);
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall Update();
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TTabControlAction() { }
	
};


class PASCALIMPLEMENTATION TChangeTabAction : public TTabControlAction
{
	typedef TTabControlAction inherited;
	
private:
	TTabItem* FTab;
	void __fastcall SetTab(TTabItem* const Value);
	void __fastcall UpdateTabControl();
	
protected:
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	
public:
	virtual int __fastcall GetEnsuingTabIndex();
	virtual void __fastcall CustomTextChanged();
	virtual void __fastcall ExecuteTarget(System::TObject* Target);
	virtual bool __fastcall Update();
	
__published:
	__property CustomText = {default=0};
	__property TTabItem* Tab = {read=FTab, write=SetTab};
	__property Direction = {default=0};
	__property Transition = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnUpdate;
public:
	/* TTabControlAction.Create */ inline __fastcall virtual TChangeTabAction(System::Classes::TComponent* AOwner) : TTabControlAction(AOwner) { }
	
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TChangeTabAction() { }
	
};


class PASCALIMPLEMENTATION TNextTabAction : public TTabControlAction
{
	typedef TTabControlAction inherited;
	
public:
	virtual int __fastcall GetEnsuingTabIndex();
	virtual void __fastcall CustomTextChanged();
	
__published:
	__property TabControl;
	__property CustomText = {default=0};
	__property Direction = {default=0};
	__property Transition = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnUpdate;
public:
	/* TTabControlAction.Create */ inline __fastcall virtual TNextTabAction(System::Classes::TComponent* AOwner) : TTabControlAction(AOwner) { }
	
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TNextTabAction() { }
	
};


class PASCALIMPLEMENTATION TPreviousTabAction : public TTabControlAction
{
	typedef TTabControlAction inherited;
	
public:
	virtual int __fastcall GetEnsuingTabIndex();
	virtual void __fastcall CustomTextChanged();
	
__published:
	__property TabControl;
	__property CustomText = {default=0};
	__property Direction = {default=0};
	__property Transition = {default=1};
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=0};
	__property Hint = {default=0};
	__property ShortCut = {default=0};
	__property SecondaryShortCuts;
	__property Visible = {default=1};
	__property OnUpdate;
public:
	/* TTabControlAction.Create */ inline __fastcall virtual TPreviousTabAction(System::Classes::TComponent* AOwner) : TTabControlAction(AOwner) { }
	
public:
	/* TContainedAction.Destroy */ inline __fastcall virtual ~TPreviousTabAction() { }
	
};


class PASCALIMPLEMENTATION TTabItem : public Fmx::Controls::TTextControl
{
	typedef Fmx::Controls::TTextControl inherited;
	
	
public:
	struct DECLSPEC_DRECORD TTabItemInfo
	{
	public:
		System::Types::TSizeF LayoutControlSize;
		System::Types::TSizeF Size;
		System::Types::TSizeF ExplicitSize;
	};
	
	
	enum class DECLSPEC_DENUM TPaintPart : unsigned char { All, ResourceControl, Children, Nothing };
	
	
private:
	enum class DECLSPEC_DENUM TSizeState : unsigned char { Invalid, Calculating, Calculated };
	
	
public:
	#define TTabItem_DotStyleName L"tabdotstyle"
	
	static const System::Int8 DotSize = System::Int8(0x8);
	
	
private:
	TSizeState FSizeState;
	TTabItemInfo FInfo;
	Fmx::Controls::TContent* FContent;
	
private:
	TTabControl* FTabControl;
	float FLeftOffset;
	float FRightOffset;
	bool FAutoSize;
	System::Types::TSizeF FOriginalGlyphSize;
	System::Types::TSizeF FOriginalIconSize;
	bool FIsSelected;
	Fmx::Multiresbitmap::TFixedMultiResBitmap* FCustomIcon;
	Fmx::Controls::TControl* FItemStyle;
	Fmx::Multiresbitmap::_di_IMultiResBitmapObject FIconObject;
	Fmx::Controls::TControl* FIconControl;
	Fmx::Controls::TControl* FLayoutControl;
	float FOldLayoutWidth;
	bool FOldIconControlVisible;
	bool FCanTouchClick;
	System::Types::TPointF FBeginPanPosition;
	Fmx::Imglist::TGlyph* FGlyph;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	bool FShowAsDot;
	System::UnicodeString FCustomStyleLookup;
	TPaintPart FPaintPart;
	TTabItemInfo __fastcall GetInfo();
	void __fastcall SetAutoSize(const bool Value);
	void __fastcall SetIsSelected(const bool Value);
	void __fastcall SetCustomIcon(Fmx::Multiresbitmap::TFixedMultiResBitmap* const Value);
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	void __fastcall UpdateIcon();
	void __fastcall SetSelectedInternal(const bool Value);
	void __fastcall UpdateLayoutControl();
	void __fastcall SetShowAsDot(const bool Value);
	System::UnicodeString __fastcall GetStyleLookup();
	HIDESBASE void __fastcall SetStyleLookup(const System::UnicodeString Value);
	void __fastcall ReadExplicitSizeCx(System::Classes::TReader* Reader);
	void __fastcall ReadExplicitSizeCy(System::Classes::TReader* Reader);
	void __fastcall WriteExplicitSizeCx(System::Classes::TWriter* Writer);
	void __fastcall WriteExplicitSizeCy(System::Classes::TWriter* Writer);
	bool __fastcall TouchEnabled();
	void __fastcall TouchClick();
	void __fastcall UpdatePaintPart();
	void __fastcall SetPaintPart(const TPaintPart Value);
	
protected:
	void __fastcall CalcSize();
	bool __fastcall InvalidateSize();
	bool __fastcall RealignTabs();
	virtual System::UnicodeString __fastcall GetDefaultStyleLookupName();
	virtual void __fastcall ChangeOrder();
	__property TTabItemInfo Info = {read=GetInfo};
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoChanged();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual Fmx::Types::TFmxObject* __fastcall FindTextObject();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall Loaded();
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall MouseClick(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall DblClick();
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, float X, float Y);
	virtual void __fastcall KeyDown(System::Word &Key, System::WideChar &KeyChar, System::Classes::TShiftState Shift);
	virtual void __fastcall ImagesChanged();
	virtual bool __fastcall ImageIndexStored();
	virtual void __fastcall ParentChanged();
	virtual void __fastcall Hide();
	virtual void __fastcall Show();
	virtual bool __fastcall DoSetSize(Fmx::Types::TControlSize* const ASize, const bool NewPlatformDefault, float ANewWidth, float ANewHeight, float &ALastWidth, float &ALastHeight);
	__property Align = {default=0};
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Position;
	virtual Fmx::Controls::TTextSettingsInfo::TCustomTextSettingsClass __fastcall GetTextSettingsClass();
	virtual void __fastcall CMGesture(Fmx::Types::TGestureEventInfo &EventInfo);
	virtual void __fastcall TriggerAcceleratorKey();
	virtual void __fastcall PaintChildren();
	virtual void __fastcall Painting();
	virtual void __fastcall Paint();
	virtual void __fastcall DoPaint();
	virtual void __fastcall AfterPaint();
	__property TPaintPart PaintPart = {read=FPaintPart, write=SetPaintPart, nodefault};
	__property Fmx::Controls::TContent* Content = {read=FContent};
	
public:
	__fastcall virtual TTabItem(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TTabItem();
	virtual Fmx::Types::_di_ITabList __fastcall GetTabList();
	__property TTabControl* TabControl = {read=FTabControl};
	__property WordWrap = {default=0};
	__property Font;
	__property VertTextAlign = {default=0};
	__property TextAlign = {default=0};
	__property Trimming = {default=0};
	__property bool ShowAsDot = {read=FShowAsDot, write=SetShowAsDot, nodefault};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages};
	
__published:
	__property AutoTranslate = {default=1};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property CanFocus = {default=1};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property Fmx::Multiresbitmap::TFixedMultiResBitmap* CustomIcon = {read=FCustomIcon, write=SetCustomIcon};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property TextSettings;
	__property StyledSettings;
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HitTest = {default=1};
	__property bool IsSelected = {read=FIsSelected, write=SetIsSelected, nodefault};
	__property Index = {stored=false};
	__property System::Uitypes::TImageIndex ImageIndex = {read=GetImageIndex, write=SetImageIndex, stored=ImageIndexStored, nodefault};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Scale;
	__property Size;
	__property System::UnicodeString StyleLookup = {read=GetStyleLookup, write=SetStyleLookup};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property Text = {default=0};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property ParentShowHint = {default=1};
	__property OnApplyStyleLookup;
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
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
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62BDCA4F-820A-4058-B57A-FE8931DB3CCC}
	operator Fmx::Actnlist::_di_IGlyph()
	{
		Fmx::Actnlist::_di_IGlyph intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGlyph*(void) { return (Fmx::Actnlist::IGlyph*)&__IGlyph; }
	#endif
	
};


enum class DECLSPEC_DENUM TTabPosition : unsigned char { Top, Bottom, None, Dots, PlatformDefault };

class PASCALIMPLEMENTATION TTabControl : public Fmx::Controls::TStyledControl
{
	typedef Fmx::Controls::TStyledControl inherited;
	
	
public:
	enum class DECLSPEC_DENUM TFindKind : unsigned char { Next, Back, First, Last, Current };
	
	enum class DECLSPEC_DENUM TTabBarButton : unsigned char { Left, Right };
	
	typedef System::Set<TTabBarButton, _DELPHI_SET_ENUMERATOR(TTabBarButton::Left), _DELPHI_SET_ENUMERATOR(TTabBarButton::Right)> TTabBarButtons;
	
	typedef System::StaticArray<Fmx::Controls::TControl*, 2> TArrayTabBarControls;
	
	
private:
	typedef System::StaticArray<System::UnicodeString, 2> _TTabControl__1;
	
	typedef System::DynamicArray<TTabItem*> _TTabControl__2;
	
	
public:
	#define TTabControl_DefaultButtons (System::Set<TTabBarButton, _DELPHI_SET_ENUMERATOR(TTabBarButton::Left), _DELPHI_SET_ENUMERATOR(TTabBarButton::Right)>() << TTabBarButton::Left << TTabBarButton::Right )
	
	static _TTabControl__1 ButtonStyleNames;
	#define TTabControl_DefaultSlidingDuration  (3.000000E-01)
	
	static const Fmx::Types::TAnimationType DefaultSlidingAnimationType = (Fmx::Types::TAnimationType)(0);
	
	static const Fmx::Types::TInterpolationType DefaultSlidingInterpoation = (Fmx::Types::TInterpolationType)(0);
	
	
private:
	Fmx::Controls::TContent* FContent;
	Fmx::Controls::TControl* FNoItemsContent;
	int FTabIndex;
	float FTabHeight;
	Fmx::Behaviormanager::TBehaviorBoolean FFullSize;
	bool FRealigningTabs;
	TTabPosition FTabPosition;
	Fmx::Controls::TControl* FBackground;
	Fmx::Graphics::TBrushObject* FScrollBackground;
	bool FDefaultFullSize;
	bool FFixedTabHeight;
	System::Classes::TNotifyEvent FOnChange;
	bool FTransitionRunning;
	_TTabControl__2 FTransitionTabs;
	System::Sysutils::_di_TProc FTransitionFinishedCallback;
	bool FTabPositionSet;
	Fmx::Imglist::TGlyphImageLink* FImageLink;
	Fmx::Imglist::TCustomImageList* FImages;
	System::Types::TRectF FTabBarRect;
	System::Types::TRectF FClientRect;
	System::Types::TSizeF FTabContentSize;
	bool FHasTouchScreen;
	Fmx::Controls::TControl* FTabBarControlPanel;
	TTabBarButtons FTabBarButtons;
	TArrayTabBarControls FTabBarControls;
	Fmx::Inertialmovement::TAniCalculations* FAniCalculations;
	float FInternalContentPosition;
	int FIndexOfTargetTab;
	System::Generics::Collections::TList__1<System::Types::TSizeF>* FStoredTabSize;
	void __fastcall SetTabIndex(const int Value);
	void __fastcall SetTabHeight(const float Value);
	void __fastcall SetFullSize(const Fmx::Behaviormanager::TBehaviorBoolean Value);
	TTabItem* __fastcall GetActiveTab();
	void __fastcall SetActiveTab(TTabItem* const Value);
	void __fastcall SetTabPosition(const TTabPosition Value);
	void __fastcall ApplyTabsStyleLookup();
	Fmx::Imglist::TCustomImageList* __fastcall GetImages();
	void __fastcall SetImages(Fmx::Imglist::TCustomImageList* const Value);
	System::Uitypes::TImageIndex __fastcall GetImageIndex();
	void __fastcall SetImageIndex(const System::Uitypes::TImageIndex Value);
	System::Imagelist::TBaseImageList* __fastcall GetImageList();
	void __fastcall SetImageList(System::Imagelist::TBaseImageList* const Value);
	int __fastcall GetItemsCount();
	Fmx::Types::TFmxObject* __fastcall GetItem(const int AIndex);
	void __fastcall WebBrowserRealign(System::TObject* Sender);
	void __fastcall AnimationFinished(System::TObject* Sender);
	void __fastcall SetTabBarButtons(const TTabBarButtons Value);
	void __fastcall TabButtonClick(System::TObject* Sender);
	void __fastcall SetTabContentPosition(const float Value);
	float __fastcall GetTabContentPosition();
	void __fastcall SetInternalContentPosition(const double Value);
	float __fastcall RoundByScale(const double Value);
	float __fastcall TabBarControlsWidth();
	void __fastcall UpdateAnimation(const bool DotItems, const float ActiveTabLeft, const float ActiveTabRight);
	void __fastcall ReadSizes(System::Classes::TReader* Reader);
	void __fastcall WriteSizes(System::Classes::TWriter* Writer);
	void __fastcall AddOrInsertObject(Fmx::Types::TFmxObject* const AObject, const int Index = 0x7fffffff);
	bool __fastcall IsSpecialObject(Fmx::Types::TFmxObject* const AObject);
	
protected:
	TTabItem* __fastcall GetTabItem(int AIndex);
	int __fastcall GetTabCount();
	virtual void __fastcall ApplyStyle();
	virtual void __fastcall FreeStyle();
	virtual void __fastcall Loaded();
	virtual void __fastcall PaintChildren();
	virtual void __fastcall RealignTabs();
	virtual void __fastcall DoRealign();
	void __fastcall ContentAddObject(Fmx::Types::TFmxObject* const AObject);
	void __fastcall ContentRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoAddObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoRemoveObject(Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoInsertObject(int Index, Fmx::Types::TFmxObject* const AObject);
	virtual void __fastcall DoChange();
	virtual void __fastcall DialogKey(System::Word &Key, System::Classes::TShiftState Shift);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual TTabPosition __fastcall GetEffectiveTabPosition();
	virtual bool __fastcall GetEffectiveFullSize();
	virtual Fmx::Types::_di_IControl __fastcall ObjectAtPoint(const System::Types::TPointF &P);
	virtual void __fastcall MouseWheel(System::Classes::TShiftState Shift, int WheelDelta, bool &Handled);
	virtual void __fastcall Resize();
	virtual void __fastcall ImagesChanged();
	virtual void __fastcall DoUpdateTabBarButtons(const TTabBarButtons TabBarButtons, const TTabPosition TabPosition, Fmx::Controls::TContent* const Content, TArrayTabBarControls &TabBarControls);
	virtual void __fastcall EnabledChanged();
	void __fastcall PreloadContent(Fmx::Controls::TControl* const Control);
	HIDESBASE void __fastcall DisableDisappear(Fmx::Controls::TControl* const AControl);
	
public:
	__fastcall virtual TTabControl(System::Classes::TComponent* AOwner)/* overload */;
	__fastcall virtual ~TTabControl();
	void __fastcall SetActiveTabWithTransition(TTabItem* const ATab, const TTabTransition ATransition, const TTabTransitionDirection ADirection = (TTabTransitionDirection)(0x0));
	void __fastcall SetActiveTabWithTransitionAsync(TTabItem* const ATab, const TTabTransition ATransition, const TTabTransitionDirection ADirection = (TTabTransitionDirection)(0x0), const System::Sysutils::_di_TProc AOnFinish = System::Sysutils::_di_TProc())/* overload */;
	void __fastcall SetActiveTabWithTransitionAsync(TTabItem* const ATab, const TTabTransition ATransition, const TTabTransitionDirection ADirection = (TTabTransitionDirection)(0x0), const System::Classes::TNotifyEvent AOnFinish = 0x0)/* overload */;
	void __fastcall FinishCurrentTabTransition();
	bool __fastcall FindVisibleTab(int &Index, const TFindKind FindKind)/* overload */;
	int __fastcall FindVisibleTab(const TFindKind FindKind)/* overload */;
	void __fastcall GoToActiveTab();
	bool __fastcall GotoVisibleTab(int Index, TTabTransition ATransition = (TTabTransition)(0x1), const TTabTransitionDirection ADirection = (TTabTransitionDirection)(0x0));
	bool __fastcall Next(TTabTransition ATransition = (TTabTransition)(0x1), const TTabTransitionDirection ADirection = (TTabTransitionDirection)(0x0));
	bool __fastcall Previous(TTabTransition ATransition = (TTabTransition)(0x1), const TTabTransitionDirection ADirection = (TTabTransitionDirection)(0x0));
	bool __fastcall First(TTabTransition ATransition = (TTabTransition)(0x1), const TTabTransitionDirection ADirection = (TTabTransitionDirection)(0x0));
	bool __fastcall Last(TTabTransition ATransition = (TTabTransition)(0x1), const TTabTransitionDirection ADirection = (TTabTransitionDirection)(0x0));
	bool __fastcall Delete(const int Index);
	TTabItem* __fastcall Add(const TTabItemClass TabClass = 0x0);
	HIDESBASE TTabItem* __fastcall Insert(const int Index, const TTabItemClass TabClass = 0x0);
	bool __fastcall HasActiveTab();
	virtual Fmx::Types::_di_ITabList __fastcall GetTabList();
	void __fastcall UpdateTabBarButtons();
	__property int TabCount = {read=GetTabCount, nodefault};
	__property TTabItem* Tabs[int AIndex] = {read=GetTabItem};
	__property Fmx::Inertialmovement::TAniCalculations* AniCalculations = {read=FAniCalculations};
	__property System::Types::TRectF TabBarRect = {read=FTabBarRect};
	__property System::Types::TSizeF TabContentSize = {read=FTabContentSize};
	__property float TabContentPosition = {read=GetTabContentPosition, write=SetTabContentPosition};
	__property bool TransitionRunning = {read=FTransitionRunning, nodefault};
	__property TTabPosition EffectiveTabPosition = {read=GetEffectiveTabPosition, nodefault};
	__property bool EffectiveFullSize = {read=GetEffectiveFullSize, nodefault};
	__property bool HasTouchScreen = {read=FHasTouchScreen, nodefault};
	__property TTabBarButtons TabBarButtons = {read=FTabBarButtons, write=SetTabBarButtons, default=3};
	
__published:
	__property Align = {default=0};
	__property Anchors;
	__property TTabItem* ActiveTab = {read=GetActiveTab, write=SetActiveTab, stored=false};
	__property ClipChildren = {default=0};
	__property ClipParent = {default=0};
	__property Cursor = {default=0};
	__property DragMode = {default=0};
	__property EnableDragHighlight = {default=1};
	__property Enabled = {default=1};
	__property Fmx::Behaviormanager::TBehaviorBoolean FullSize = {read=FFullSize, write=SetFullSize, default=2};
	__property Locked = {default=0};
	__property Height;
	__property HelpContext = {default=0};
	__property HelpKeyword = {default=0};
	__property HelpType = {default=1};
	__property HitTest = {default=1};
	__property Fmx::Imglist::TCustomImageList* Images = {read=GetImages, write=SetImages};
	__property Padding;
	__property Opacity;
	__property Margins;
	__property PopupMenu;
	__property Position;
	__property RotationAngle = {default=0};
	__property RotationCenter;
	__property Scale;
	__property Size;
	__property StyleLookup = {default=0};
	__property float TabHeight = {read=FTabHeight, write=SetTabHeight};
	__property int TabIndex = {read=FTabIndex, write=SetTabIndex, default=-1};
	__property TabOrder = {default=-1};
	__property TabStop = {default=1};
	__property TTabPosition TabPosition = {read=FTabPosition, write=SetTabPosition, stored=true, nodefault};
	__property TouchTargetExpansion;
	__property Visible = {default=1};
	__property Width;
	__property OnApplyStyleLookup;
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property OnDragEnter;
	__property OnDragLeave;
	__property OnDragOver;
	__property OnDragDrop;
	__property OnDragEnd;
	__property OnClick;
	__property OnDblClick;
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
private:
	void *__IGlyph;	// Fmx::Actnlist::IGlyph 
	void *__IItemsContainer;	// Fmx::Types::IItemsContainer 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {62BDCA4F-820A-4058-B57A-FE8931DB3CCC}
	operator Fmx::Actnlist::_di_IGlyph()
	{
		Fmx::Actnlist::_di_IGlyph intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Actnlist::IGlyph*(void) { return (Fmx::Actnlist::IGlyph*)&__IGlyph; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {100B2F87-5DCB-4699-B751-B4439588E82A}
	operator Fmx::Types::_di_IItemsContainer()
	{
		Fmx::Types::_di_IItemsContainer intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Fmx::Types::IItemsContainer*(void) { return (Fmx::Types::IItemsContainer*)&__IItemsContainer; }
	#endif
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Tabcontrol */
}	/* namespace Fmx */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX_TABCONTROL)
using namespace Fmx::Tabcontrol;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FMX)
using namespace Fmx;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Fmx_TabcontrolHPP
