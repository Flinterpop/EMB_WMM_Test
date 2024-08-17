// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Data.DB.pas' rev: 35.00 (Windows)

#ifndef Data_DbHPP
#define Data_DbHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Types.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <System.Variants.hpp>
#include <System.MaskUtils.hpp>
#include <System.Generics.Collections.hpp>
#include <Data.SqlTimSt.hpp>
#include <Data.FmtBcd.hpp>
#include <Data.DBCommonTypes.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------
namespace Data
{
namespace Db
{
    typedef ::System::TDateTimeBase TDateTimeAlias;
}	/* namespace Db */
}	/* namespace Data */

namespace Data
{
namespace Db
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS EDatabaseError;
class DELPHICLASS EUpdateError;
class DELPHICLASS TCustomConnection;
class DELPHICLASS TNamedItem;
class DELPHICLASS TDefCollection;
class DELPHICLASS TFieldDef;
class DELPHICLASS TFieldDefs;
class DELPHICLASS TIndexDef;
class DELPHICLASS TIndexDefs;
class DELPHICLASS TFlatList;
class DELPHICLASS TFieldDefList;
class DELPHICLASS TFieldList;
class DELPHICLASS TFieldsEnumerator;
class DELPHICLASS TFields;
class DELPHICLASS TLookupList;
struct TLookupListEntry;
class DELPHICLASS TDefaultLookupList;
__interface DELPHIINTERFACE ISubDataSet;
typedef System::DelphiInterface<ISubDataSet> _di_ISubDataSet;
class DELPHICLASS TPlatformValueBuffer;
class DELPHICLASS TDBBitConverter;
class DELPHICLASS TField;
class DELPHICLASS TStringField;
class DELPHICLASS TWideStringField;
class DELPHICLASS TNumericField;
class DELPHICLASS TIntegerField;
class DELPHICLASS TLongWordField;
class DELPHICLASS TSmallintField;
class DELPHICLASS TShortintField;
class DELPHICLASS TByteField;
class DELPHICLASS TLargeintField;
class DELPHICLASS TWordField;
class DELPHICLASS TAutoIncField;
class DELPHICLASS TUnsignedAutoIncField;
class DELPHICLASS TFloatField;
class DELPHICLASS TSingleField;
class DELPHICLASS TCurrencyField;
class DELPHICLASS TExtendedField;
class DELPHICLASS TBooleanField;
class DELPHICLASS TDateTimeField;
class DELPHICLASS TSQLTimeStampField;
class DELPHICLASS TSQLTimeStampOffsetField;
class DELPHICLASS TDateField;
class DELPHICLASS TTimeField;
class DELPHICLASS TBinaryField;
class DELPHICLASS TBytesField;
class DELPHICLASS TVarBytesField;
class DELPHICLASS TBCDField;
class DELPHICLASS TFMTBCDField;
class DELPHICLASS TBlobField;
class DELPHICLASS TMemoField;
class DELPHICLASS TWideMemoField;
class DELPHICLASS TGraphicField;
class DELPHICLASS TObjectField;
class DELPHICLASS TADTField;
class DELPHICLASS TArrayField;
class DELPHICLASS TDataSetField;
class DELPHICLASS TReferenceField;
class DELPHICLASS TVariantField;
class DELPHICLASS TInterfaceField;
class DELPHICLASS TIDispatchField;
class DELPHICLASS TGuidField;
class DELPHICLASS TAggregateField;
class DELPHICLASS TDataLink;
class DELPHICLASS TDetailDataLink;
class DELPHICLASS TMasterDataLink;
class DELPHICLASS TDataSource;
class DELPHICLASS TDataSetDesigner;
class DELPHICLASS TCheckConstraint;
class DELPHICLASS TCheckConstraints;
class DELPHICLASS TParam;
class DELPHICLASS TParams;
__interface DELPHIINTERFACE IParamObject;
typedef System::DelphiInterface<IParamObject> _di_IParamObject;
class DELPHICLASS TParamObject;
__interface DELPHIINTERFACE IParamStreamObject;
typedef System::DelphiInterface<IParamStreamObject> _di_IParamStreamObject;
class DELPHICLASS TParamStreamObject;
struct TPacketAttribute;
__interface DELPHIINTERFACE IProviderSupportNG;
typedef System::DelphiInterface<IProviderSupportNG> _di_IProviderSupportNG;
__interface DELPHIINTERFACE IProviderSupport;
typedef System::DelphiInterface<IProviderSupport> _di_IProviderSupport;
__interface DELPHIINTERFACE IDataSetCommandSupport;
typedef System::DelphiInterface<IDataSetCommandSupport> _di_IDataSetCommandSupport;
class DELPHICLASS TFieldOptions;
class DELPHICLASS TDataSet;
struct TDateTimeRec;
__interface DELPHIINTERFACE IDBScreen;
typedef System::DelphiInterface<IDBScreen> _di_IDBScreen;
__interface DELPHIINTERFACE IDBApplication;
typedef System::DelphiInterface<IDBApplication> _di_IDBApplication;
__interface DELPHIINTERFACE IDBSession;
typedef System::DelphiInterface<IDBSession> _di_IDBSession;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EDatabaseError : public System::Sysutils::Exception
{
	typedef System::Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EDatabaseError(const System::UnicodeString Msg) : System::Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EDatabaseError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : System::Sysutils::Exception(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EDatabaseError(NativeUInt Ident)/* overload */ : System::Sysutils::Exception(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EDatabaseError(System::PResStringRec ResStringRec)/* overload */ : System::Sysutils::Exception(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EDatabaseError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EDatabaseError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EDatabaseError(const System::UnicodeString Msg, int AHelpContext) : System::Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EDatabaseError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : System::Sysutils::Exception(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDatabaseError(NativeUInt Ident, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EDatabaseError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDatabaseError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EDatabaseError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : System::Sysutils::Exception(Ident, Args, Args_High, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EDatabaseError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION EUpdateError : public EDatabaseError
{
	typedef EDatabaseError inherited;
	
private:
	int FErrorCode;
	int FPreviousError;
	System::UnicodeString FContext;
	System::Sysutils::Exception* FOriginalException;
	
public:
	__fastcall EUpdateError(System::UnicodeString NativeError, System::UnicodeString Context, int ErrCode, int PrevError, System::Sysutils::Exception* E);
	__fastcall virtual ~EUpdateError();
	__property System::UnicodeString Context = {read=FContext};
	__property int ErrorCode = {read=FErrorCode, nodefault};
	__property int PreviousError = {read=FPreviousError, nodefault};
	__property System::Sysutils::Exception* OriginalException = {read=FOriginalException};
public:
	/* Exception.CreateFmt */ inline __fastcall EUpdateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High) : EDatabaseError(Msg, Args, Args_High) { }
	/* Exception.CreateRes */ inline __fastcall EUpdateError(NativeUInt Ident)/* overload */ : EDatabaseError(Ident) { }
	/* Exception.CreateRes */ inline __fastcall EUpdateError(System::PResStringRec ResStringRec)/* overload */ : EDatabaseError(ResStringRec) { }
	/* Exception.CreateResFmt */ inline __fastcall EUpdateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High)/* overload */ : EDatabaseError(Ident, Args, Args_High) { }
	/* Exception.CreateResFmt */ inline __fastcall EUpdateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High)/* overload */ : EDatabaseError(ResStringRec, Args, Args_High) { }
	/* Exception.CreateHelp */ inline __fastcall EUpdateError(const System::UnicodeString Msg, int AHelpContext) : EDatabaseError(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EUpdateError(const System::UnicodeString Msg, const System::TVarRec *Args, const int Args_High, int AHelpContext) : EDatabaseError(Msg, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUpdateError(NativeUInt Ident, int AHelpContext)/* overload */ : EDatabaseError(Ident, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EUpdateError(System::PResStringRec ResStringRec, int AHelpContext)/* overload */ : EDatabaseError(ResStringRec, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUpdateError(System::PResStringRec ResStringRec, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EDatabaseError(ResStringRec, Args, Args_High, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EUpdateError(NativeUInt Ident, const System::TVarRec *Args, const int Args_High, int AHelpContext)/* overload */ : EDatabaseError(Ident, Args, Args_High, AHelpContext) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFieldType : unsigned char { ftUnknown, ftString, ftSmallint, ftInteger, ftWord, ftBoolean, ftFloat, ftCurrency, ftBCD, ftDate, ftTime, ftDateTime, ftBytes, ftVarBytes, ftAutoInc, ftBlob, ftMemo, ftGraphic, ftFmtMemo, ftParadoxOle, ftDBaseOle, ftTypedBinary, ftCursor, ftFixedChar, ftWideString, ftLargeint, ftADT, ftArray, ftReference, ftDataSet, ftOraBlob, ftOraClob, ftVariant, ftInterface, ftIDispatch, ftGuid, ftTimeStamp, ftFMTBcd, ftFixedWideChar, ftWideMemo, ftOraTimeStamp, ftOraInterval, ftLongWord, ftShortint, ftByte, ftExtended, ftConnection, ftParams, ftStream, ftTimeStampOffset, ftObject, ftSingle };

typedef System::Set<TFieldType, TFieldType::ftUnknown, TFieldType::ftSingle> TFieldTypes;

enum DECLSPEC_DENUM TDataSetState : unsigned char { dsInactive, dsBrowse, dsEdit, dsInsert, dsSetKey, dsCalcFields, dsFilter, dsNewValue, dsOldValue, dsCurValue, dsBlockRead, dsInternalCalc, dsOpening };

enum DECLSPEC_DENUM TDataEvent : unsigned char { deFieldChange, deRecordChange, deDataSetChange, deDataSetScroll, deLayoutChange, deUpdateRecord, deUpdateState, deCheckBrowseMode, dePropertyChange, deFieldListChange, deFocusControl, deParentScroll, deConnectChange, deReconcileError, deDisabledStateChange };

enum DECLSPEC_DENUM TFieldsAutoCreationMode : unsigned char { acExclusive, acCombineComputed, acCombineAlways };

enum DECLSPEC_DENUM TFieldsPositionMode : unsigned char { poLast, poFirst, poFieldNo };

enum DECLSPEC_DENUM TFieldLifeCycle : unsigned char { lcAutomatic, lcPersistent };

typedef System::Set<TFieldLifeCycle, TFieldLifeCycle::lcAutomatic, TFieldLifeCycle::lcPersistent> TFieldLifeCycles;

enum DECLSPEC_DENUM TUpdateStatus : unsigned char { usUnmodified, usModified, usInserted, usDeleted };

typedef System::Set<TUpdateStatus, TUpdateStatus::usUnmodified, TUpdateStatus::usDeleted> TUpdateStatusSet;

enum DECLSPEC_DENUM TUpdateAction : unsigned char { uaFail, uaAbort, uaSkip, uaRetry, uaApplied };

enum DECLSPEC_DENUM Data_Db__3 : unsigned char { rtModified, rtInserted, rtDeleted, rtUnmodified };

typedef System::Set<Data_Db__3, Data_Db__3::rtModified, Data_Db__3::rtUnmodified> TUpdateRecordTypes;

enum DECLSPEC_DENUM TUpdateMode : unsigned char { upWhereAll, upWhereChanged, upWhereKeyOnly };

enum DECLSPEC_DENUM TUpdateKind : unsigned char { ukModify, ukInsert, ukDelete };

typedef void __fastcall (__closure *TUpdateErrorEvent)(TDataSet* DataSet, EDatabaseError* E, TUpdateKind UpdateKind, TUpdateAction &UpdateAction);

typedef void __fastcall (__closure *TUpdateRecordEvent)(TDataSet* DataSet, TUpdateKind UpdateKind, TUpdateAction &UpdateAction);

typedef void __fastcall (__closure *TConnectChangeEvent)(System::TObject* Sender, bool Connecting);

class PASCALIMPLEMENTATION TCustomConnection : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	System::Generics::Collections::TList__1<System::TObject*>* FClients;
	System::Generics::Collections::TList__1<TDataSet*>* FDataSets;
	System::Generics::Collections::TList__1<void *>* FConnectEvents;
	bool FLoginPrompt;
	bool FStreamedConnected;
	System::Classes::TNotifyEvent FAfterConnect;
	System::Classes::TNotifyEvent FAfterDisconnect;
	System::Classes::TNotifyEvent FBeforeConnect;
	System::Classes::TNotifyEvent FBeforeDisconnect;
	Data::Dbcommontypes::TLoginEvent FOnLogin;
	
protected:
	virtual void __fastcall DoConnect();
	virtual void __fastcall DoDisconnect();
	virtual bool __fastcall GetConnected();
	virtual TDataSet* __fastcall GetDataSet(int Index);
	virtual int __fastcall GetDataSetCount();
	virtual void __fastcall Loaded();
	virtual void __fastcall RegisterClient(System::TObject* Client, TConnectChangeEvent Event = 0x0);
	virtual void __fastcall SetConnected(bool Value);
	void __fastcall SendConnectEvent(bool Connecting);
	__property bool StreamedConnected = {read=FStreamedConnected, write=FStreamedConnected, nodefault};
	virtual void __fastcall UnRegisterClient(System::TObject* Client);
	
public:
	__fastcall virtual TCustomConnection(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TCustomConnection();
	void __fastcall Open()/* overload */;
	void __fastcall Close();
	__property bool Connected = {read=GetConnected, write=SetConnected, default=0};
	__property TDataSet* DataSets[int Index] = {read=GetDataSet};
	__property int DataSetCount = {read=GetDataSetCount, nodefault};
	__property bool LoginPrompt = {read=FLoginPrompt, write=FLoginPrompt, default=0};
	__property System::Classes::TNotifyEvent AfterConnect = {read=FAfterConnect, write=FAfterConnect};
	__property System::Classes::TNotifyEvent BeforeConnect = {read=FBeforeConnect, write=FBeforeConnect};
	__property System::Classes::TNotifyEvent AfterDisconnect = {read=FAfterDisconnect, write=FAfterDisconnect};
	__property System::Classes::TNotifyEvent BeforeDisconnect = {read=FBeforeDisconnect, write=FBeforeDisconnect};
	__property Data::Dbcommontypes::TLoginEvent OnLogin = {read=FOnLogin, write=FOnLogin};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TNamedItem : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FName;
	unsigned FNameHashValue;
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	HIDESBASE void __fastcall SetDisplayName(const System::UnicodeString Value);
	static unsigned __fastcall HashName(const System::UnicodeString Name);
	
__published:
	__property System::UnicodeString Name = {read=FName, write=SetDisplayName};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TNamedItem(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TNamedItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef void __fastcall (__closure *TDefUpdateMethod)(void);

class PASCALIMPLEMENTATION TDefCollection : public System::Classes::TOwnedCollection
{
	typedef System::Classes::TOwnedCollection inherited;
	
private:
	TDataSet* FDataSet;
	bool FUpdated;
	System::Classes::TNotifyEvent FOnUpdate;
	int FInternalUpdateCount;
	
protected:
	void __fastcall DoUpdate(System::TObject* Sender);
	virtual void __fastcall SetItemName(System::Classes::TCollectionItem* AItem);
	virtual void __fastcall Update(System::Classes::TCollectionItem* AItem);
	void __fastcall UpdateDefs(TDefUpdateMethod AMethod);
	__property System::Classes::TNotifyEvent OnUpdate = {read=FOnUpdate, write=FOnUpdate};
	
public:
	__fastcall TDefCollection(TDataSet* ADataSet, System::Classes::TPersistent* AOwner, System::Classes::TCollectionItemClass AClass);
	TNamedItem* __fastcall Find(const System::UnicodeString AName);
	void __fastcall GetItemNames(System::Classes::TStrings* List);
	int __fastcall IndexOf(const System::UnicodeString AName);
	__property TDataSet* DataSet = {read=FDataSet};
	__property bool Updated = {read=FUpdated, write=FUpdated, nodefault};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TDefCollection() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TFieldClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFieldClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TFieldAttribute : unsigned char { faHiddenCol, faReadonly, faRequired, faLink, faUnNamed, faFixed };

typedef System::Set<TFieldAttribute, TFieldAttribute::faHiddenCol, TFieldAttribute::faFixed> TFieldAttributes;

#ifndef _WIN64
typedef System::TMetaClass* TFieldDefsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFieldDefsClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFieldDef : public TNamedItem
{
	typedef TNamedItem inherited;
	
private:
	TFieldDefs* FChildDefs;
	int FPrecision;
	int FFieldNo;
	int FSize;
	bool FInternalCalcField;
	TFieldType FDataType;
	TFieldAttributes FAttributes;
	TField* __fastcall CreateFieldComponent(System::Classes::TComponent* Owner, TObjectField* ParentField = (TObjectField*)(0x0), System::UnicodeString FieldName = System::UnicodeString());
	TFieldDefs* __fastcall GetChildDefs();
	TFieldClass __fastcall GetFieldClass();
	int __fastcall GetFieldNo();
	TFieldDef* __fastcall GetParentDef();
	bool __fastcall GetRequired();
	int __fastcall GetSize();
	void __fastcall ReadRequired(System::Classes::TReader* Reader);
	void __fastcall SetAttributes(TFieldAttributes Value);
	void __fastcall SetChildDefs(TFieldDefs* Value);
	void __fastcall SetDataType(TFieldType Value);
	void __fastcall SetPrecision(int Value);
	void __fastcall SetRequired(bool Value);
	void __fastcall SetSize(int Value);
	TDataSet* __fastcall GetDataSet();
	
protected:
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual TFieldDefsClass __fastcall GetChildDefsClass();
	
public:
	__fastcall virtual TFieldDef(TFieldDefs* Owner, const System::UnicodeString Name, TFieldType DataType, int Size, bool Required, int FieldNo)/* overload */;
	__fastcall virtual ~TFieldDef();
	TFieldDef* __fastcall AddChild();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	TField* __fastcall CreateField(System::Classes::TComponent* Owner, TObjectField* ParentField = (TObjectField*)(0x0), const System::UnicodeString FieldName = System::UnicodeString(), bool CreateChildren = true);
	bool __fastcall HasChildDefs();
	__property TFieldClass FieldClass = {read=GetFieldClass};
	__property int FieldNo = {read=GetFieldNo, write=FFieldNo, stored=false, nodefault};
	__property bool InternalCalcField = {read=FInternalCalcField, write=FInternalCalcField, nodefault};
	__property TFieldDef* ParentDef = {read=GetParentDef};
	__property TDataSet* DataSet = {read=GetDataSet};
	__property bool Required = {read=GetRequired, write=SetRequired, nodefault};
	
__published:
	__property TFieldAttributes Attributes = {read=FAttributes, write=SetAttributes, default=0};
	__property TFieldDefs* ChildDefs = {read=GetChildDefs, write=SetChildDefs, stored=HasChildDefs};
	__property TFieldType DataType = {read=FDataType, write=SetDataType, default=0};
	__property int Precision = {read=FPrecision, write=SetPrecision, default=0};
	__property int Size = {read=GetSize, write=SetSize, default=0};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TFieldDefClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFieldDefClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TFieldDefs : public TDefCollection
{
	typedef TDefCollection inherited;
	
public:
	TFieldDef* operator[](int Index) { return this->Items[Index]; }
	
private:
	TFieldDef* FParentDef;
	bool FHiddenFields;
	TFieldDef* __fastcall GetFieldDef(int Index);
	void __fastcall SetFieldDef(int Index, TFieldDef* Value);
	void __fastcall SetHiddenFields(bool Value);
	
protected:
	void __fastcall FieldDefUpdate(System::TObject* Sender);
	void __fastcall ChildDefUpdate(System::TObject* Sender);
	virtual void __fastcall SetItemName(System::Classes::TCollectionItem* AItem);
	virtual TFieldDefClass __fastcall GetFieldDefClass();
	
public:
	__fastcall virtual TFieldDefs(System::Classes::TPersistent* AOwner);
	TFieldDef* __fastcall AddFieldDef();
	HIDESBASE TFieldDef* __fastcall Find(const System::UnicodeString Name);
	HIDESBASE void __fastcall Update();
	HIDESBASE void __fastcall Add(const System::UnicodeString Name, TFieldType DataType, int Size = 0x0, bool Required = false);
	__property bool HiddenFields = {read=FHiddenFields, write=SetHiddenFields, nodefault};
	__property TFieldDef* Items[int Index] = {read=GetFieldDef, write=SetFieldDef/*, default*/};
	__property TFieldDef* ParentDef = {read=FParentDef};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFieldDefs() { }
	
};


enum DECLSPEC_DENUM TIndexOption : unsigned char { ixPrimary, ixUnique, ixDescending, ixCaseInsensitive, ixExpression, ixNonMaintained };

typedef System::Set<TIndexOption, TIndexOption::ixPrimary, TIndexOption::ixNonMaintained> TIndexOptions;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIndexDef : public TNamedItem
{
	typedef TNamedItem inherited;
	
private:
	System::UnicodeString FSource;
	System::UnicodeString FFieldExpression;
	System::UnicodeString FDescFields;
	System::UnicodeString FCaseInsFields;
	TIndexOptions FOptions;
	int FGroupingLevel;
	System::UnicodeString __fastcall GetExpression();
	System::UnicodeString __fastcall GetFields();
	void __fastcall SetDescFields(const System::UnicodeString Value);
	void __fastcall SetCaseInsFields(const System::UnicodeString Value);
	void __fastcall SetExpression(const System::UnicodeString Value);
	void __fastcall SetFields(const System::UnicodeString Value);
	void __fastcall SetOptions(TIndexOptions Value);
	void __fastcall SetSource(const System::UnicodeString Value);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TIndexDef(TIndexDefs* Owner, const System::UnicodeString Name, const System::UnicodeString Fields, TIndexOptions Options)/* overload */;
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	__property System::UnicodeString FieldExpression = {read=FFieldExpression};
	
__published:
	__property System::UnicodeString CaseInsFields = {read=FCaseInsFields, write=SetCaseInsFields};
	__property System::UnicodeString DescFields = {read=FDescFields, write=SetDescFields};
	__property System::UnicodeString Expression = {read=GetExpression, write=SetExpression};
	__property System::UnicodeString Fields = {read=GetFields, write=SetFields};
	__property TIndexOptions Options = {read=FOptions, write=SetOptions, default=0};
	__property System::UnicodeString Source = {read=FSource, write=SetSource};
	__property int GroupingLevel = {read=FGroupingLevel, write=FGroupingLevel, default=0};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TIndexDef() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TIndexDefClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TIndexDefClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TIndexDefs : public TDefCollection
{
	typedef TDefCollection inherited;
	
public:
	TIndexDef* operator[](int Index) { return this->Items[Index]; }
	
private:
	TIndexDef* __fastcall GetIndexDef(int Index);
	void __fastcall SetIndexDef(int Index, TIndexDef* Value);
	
protected:
	virtual TIndexDefClass __fastcall GetIndexDefClass();
	
public:
	__fastcall virtual TIndexDefs(TDataSet* ADataSet);
	TIndexDef* __fastcall AddIndexDef();
	HIDESBASE TIndexDef* __fastcall Find(const System::UnicodeString Name);
	HIDESBASE void __fastcall Update();
	TIndexDef* __fastcall FindIndexForFields(const System::UnicodeString Fields);
	TIndexDef* __fastcall GetIndexForFields(const System::UnicodeString Fields, bool CaseInsensitive);
	HIDESBASE void __fastcall Add(const System::UnicodeString Name, const System::UnicodeString Fields, TIndexOptions Options);
	__property TIndexDef* Items[int Index] = {read=GetIndexDef, write=SetIndexDef/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TIndexDefs() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TIndexDefsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TIndexDefsClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TFlatList : public System::Classes::TStringList
{
	typedef System::Classes::TStringList inherited;
	
private:
	TDataSet* FDataSet;
	bool FLocked;
	bool FUpdated;
	
protected:
	void __fastcall ListChanging(System::TObject* Sender);
	virtual System::TObject* __fastcall FindItem(const System::UnicodeString Name, bool MustExist);
	virtual int __fastcall GetCount();
	virtual bool __fastcall GetUpdated();
	virtual void __fastcall UpdateList() = 0 ;
	__property bool Updated = {read=GetUpdated, write=FUpdated, nodefault};
	__property bool Locked = {read=FLocked, write=FLocked, nodefault};
	
public:
	__fastcall virtual TFlatList(TDataSet* ADataSet);
	void __fastcall Update();
	__property TDataSet* DataSet = {read=FDataSet};
public:
	/* TStringList.Destroy */ inline __fastcall virtual ~TFlatList() { }
	
};


class PASCALIMPLEMENTATION TFieldDefList : public TFlatList
{
	typedef TFlatList inherited;
	
public:
	TFieldDef* operator[](int Index) { return this->FieldDefs[Index]; }
	
private:
	TFieldDef* __fastcall GetFieldDef(int Index);
	
protected:
	virtual bool __fastcall GetUpdated();
	virtual void __fastcall UpdateList();
	
public:
	TFieldDef* __fastcall FieldByName(const System::UnicodeString Name);
	HIDESBASE TFieldDef* __fastcall Find(const System::UnicodeString Name);
	__property TFieldDef* FieldDefs[int Index] = {read=GetFieldDef/*, default*/};
public:
	/* TFlatList.Create */ inline __fastcall virtual TFieldDefList(TDataSet* ADataSet) : TFlatList(ADataSet) { }
	
public:
	/* TStringList.Destroy */ inline __fastcall virtual ~TFieldDefList() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TFieldDefListClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFieldDefListClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TFieldList : public TFlatList
{
	typedef TFlatList inherited;
	
public:
	TField* operator[](int Index) { return this->Fields[Index]; }
	
private:
	TField* __fastcall GetField(int Index);
	
protected:
	virtual void __fastcall UpdateList();
	
public:
	TField* __fastcall FieldByName(const System::UnicodeString Name);
	HIDESBASE TField* __fastcall Find(const System::UnicodeString Name);
	__property TField* Fields[int Index] = {read=GetField/*, default*/};
public:
	/* TFlatList.Create */ inline __fastcall virtual TFieldList(TDataSet* ADataSet) : TFlatList(ADataSet) { }
	
public:
	/* TStringList.Destroy */ inline __fastcall virtual ~TFieldList() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TFieldListClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFieldListClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFieldsEnumerator : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	int FIndex;
	TFields* FFields;
	
public:
	__fastcall TFieldsEnumerator(TFields* AFields);
	TField* __fastcall GetCurrent();
	bool __fastcall MoveNext();
	__property TField* Current = {read=GetCurrent};
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFieldsEnumerator() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFieldKind : unsigned char { fkData, fkCalculated, fkLookup, fkInternalCalc, fkAggregate };

typedef System::Set<TFieldKind, TFieldKind::fkData, TFieldKind::fkAggregate> TFieldKinds;

class PASCALIMPLEMENTATION TFields : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	TField* operator[](int Index) { return this->Fields[Index]; }
	
private:
	System::Generics::Collections::TList__1<TField*>* FList;
	System::Generics::Collections::TDictionary__2<System::UnicodeString,TField*>* FDict;
	TDataSet* FDataSet;
	int FSparseFields;
	System::Classes::TNotifyEvent FOnChange;
	TFieldKinds FValidFieldKinds;
	int FAutomaticFieldsCount;
	void __fastcall ClearBase(bool AAutomaticOnly);
	TFieldLifeCycles __fastcall GetLifeCycles();
	void __fastcall SetLifeCycles(const TFieldLifeCycles Value);
	
protected:
	void __fastcall Changed();
	void __fastcall CheckFieldKind(TFieldKind FieldKind, TField* Field);
	int __fastcall GetCount();
	TField* __fastcall GetField(int Index);
	void __fastcall SetField(int Index, TField* Value);
	void __fastcall SetFieldIndex(TField* Field, int Value);
	void __fastcall SortByFieldNo();
	__property int SparseFields = {read=FSparseFields, write=FSparseFields, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TFieldKinds ValidFieldKinds = {read=FValidFieldKinds, write=FValidFieldKinds, nodefault};
	
public:
	__fastcall virtual TFields(TDataSet* ADataSet);
	__fastcall virtual ~TFields();
	void __fastcall Add(TField* Field);
	void __fastcall CheckFieldName(const System::UnicodeString FieldName);
	void __fastcall CheckFieldNames(const System::UnicodeString FieldNames);
	void __fastcall Clear();
	void __fastcall ClearAutomatic();
	TField* __fastcall FindField(const System::UnicodeString FieldName);
	TField* __fastcall FieldByName(const System::UnicodeString FieldName);
	TField* __fastcall FieldByNumber(int FieldNo);
	TFieldsEnumerator* __fastcall GetEnumerator();
	void __fastcall GetFieldNames(System::Classes::TStrings* List);
	int __fastcall IndexOf(TField* Field);
	void __fastcall Remove(TField* Field);
	__property int Count = {read=GetCount, nodefault};
	__property TDataSet* DataSet = {read=FDataSet};
	__property TField* Fields[int Index] = {read=GetField, write=SetField/*, default*/};
	__property TFieldLifeCycles LifeCycles = {read=GetLifeCycles, write=SetLifeCycles, nodefault};
};


#ifndef _WIN64
typedef System::TMetaClass* TFieldsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFieldsClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TProviderFlag : unsigned char { pfInUpdate, pfInWhere, pfInKey, pfHidden };

typedef System::Set<TProviderFlag, TProviderFlag::pfInUpdate, TProviderFlag::pfHidden> TProviderFlags;

typedef void __fastcall (__closure *TFieldNotifyEvent)(TField* Sender);

typedef void __fastcall (__closure *TFieldGetTextEvent)(TField* Sender, System::UnicodeString &Text, bool DisplayText);

typedef void __fastcall (__closure *TFieldSetTextEvent)(TField* Sender, const System::UnicodeString Text);

typedef TField* *TFieldRef;

typedef System::Set<char, _DELPHI_SET_CHAR(0), _DELPHI_SET_CHAR(255)> TFieldChars;

enum DECLSPEC_DENUM TAutoRefreshFlag : unsigned char { arNone, arAutoInc, arDefault };

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TLookupList : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	__fastcall virtual TLookupList();
	virtual void __fastcall Add(const System::Variant &AKey, const System::Variant &AValue) = 0 ;
	virtual void __fastcall Clear() = 0 ;
	virtual System::Variant __fastcall ValueOfKey(const System::Variant &AKey) = 0 ;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TLookupList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TLookupListClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TLookupListClass);
#endif /* _WIN64 */

typedef TLookupListEntry *PLookupListEntry;

struct DECLSPEC_DRECORD TLookupListEntry
{
public:
	System::Variant Key;
	System::Variant Value;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDefaultLookupList : public TLookupList
{
	typedef TLookupList inherited;
	
private:
	System::Generics::Collections::TList__1<TLookupListEntry>* FList;
	
public:
	__fastcall virtual TDefaultLookupList();
	__fastcall virtual ~TDefaultLookupList();
	virtual void __fastcall Add(const System::Variant &AKey, const System::Variant &AValue);
	virtual void __fastcall Clear();
	virtual System::Variant __fastcall ValueOfKey(const System::Variant &AKey);
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef __int64 Largeint;

__interface  INTERFACE_UUID("{D5608EB1-DE94-4B00-9E62-9F3FE0937D98}") ISubDataSet  : public System::IInterface 
{
	virtual TDataSet* __fastcall GetSubDataSet() = 0 ;
	__property TDataSet* SubDataSet = {read=GetSubDataSet};
};

#ifndef _WIN64
typedef System::DynamicArray<System::Byte> TValueBuffer;
#else /* _WIN64 */
typedef System::TArray__1<System::Byte> TValueBuffer;
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TPlatformValueBuffer : public System::TObject
{
	typedef System::TObject inherited;
	
public:
#ifndef _WIN64
	static System::DynamicArray<System::Byte> __fastcall CreateValueBuffer(int Length);
	static void __fastcall Free(System::DynamicArray<System::Byte> &Buffer);
	static void __fastcall Copy(System::DynamicArray<System::Byte> Buffer, const System::DynamicArray<System::Byte> Dest, int Offset, int Count)/* overload */;
	static void __fastcall Copy(const System::DynamicArray<System::Byte> Source, int Offset, System::DynamicArray<System::Byte> Buffer, int Count)/* overload */;
	static void __fastcall Copy(const System::DynamicArray<System::Byte> Source, int Offset, void * Buffer, int Count)/* overload */;
#else /* _WIN64 */
	static System::TArray__1<System::Byte> __fastcall CreateValueBuffer(int Length);
	static void __fastcall Free(System::TArray__1<System::Byte> &Buffer);
	static void __fastcall Copy(System::TArray__1<System::Byte> Buffer, const System::TArray__1<System::Byte> Dest, int Offset, int Count)/* overload */;
	static void __fastcall Copy(const System::TArray__1<System::Byte> Source, int Offset, System::TArray__1<System::Byte> Buffer, int Count)/* overload */;
	static void __fastcall Copy(const System::TArray__1<System::Byte> Source, int Offset, void * Buffer, int Count)/* overload */;
#endif /* _WIN64 */
public:
	/* TObject.Create */ inline __fastcall TPlatformValueBuffer() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TPlatformValueBuffer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDBBitConverter : public System::Types::TBitConverter
{
	typedef System::Types::TBitConverter inherited;
	
	
private:
	typedef System::_di_IInterface *PIInterface;
	
	
public:
#ifndef _WIN64
	static void __fastcall UnsafeFromVariant(const System::Variant &Value, System::DynamicArray<System::Byte> &B, int Offset = 0x0);
	static void __fastcall UnsafeFromBAVariant(const System::Variant &Value, System::DynamicArray<System::Byte> &B, int Offset = 0x0);
	static void __fastcall UnsafeFromInterface(const System::_di_IInterface Value, System::DynamicArray<System::Byte> &B, int Offset = 0x0);
	static System::Variant __fastcall UnsafeInToVariant(const System::DynamicArray<System::Byte> B, int Offset = 0x0);
	static System::Variant __fastcall UnsafeInToBAVariant(const System::DynamicArray<System::Byte> B, int Offset = 0x0);
	static System::_di_IInterface __fastcall UnsafeInToInterface(const System::DynamicArray<System::Byte> B, int Offset = 0x0);
#else /* _WIN64 */
	static void __fastcall UnsafeFromVariant(const System::Variant &Value, System::TArray__1<System::Byte> &B, int Offset = 0x0);
	static void __fastcall UnsafeFromBAVariant(const System::Variant &Value, System::TArray__1<System::Byte> &B, int Offset = 0x0);
	static void __fastcall UnsafeFromInterface(const System::_di_IInterface Value, System::TArray__1<System::Byte> &B, int Offset = 0x0);
	static System::Variant __fastcall UnsafeInToVariant(const System::TArray__1<System::Byte> B, int Offset = 0x0);
	static System::Variant __fastcall UnsafeInToBAVariant(const System::TArray__1<System::Byte> B, int Offset = 0x0);
	static System::_di_IInterface __fastcall UnsafeInToInterface(const System::TArray__1<System::Byte> B, int Offset = 0x0);
#endif /* _WIN64 */
public:
	/* TObject.Create */ inline __fastcall TDBBitConverter() : System::Types::TBitConverter() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TDBBitConverter() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TField : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TAutoRefreshFlag FAutoGenerateValue;
	TDataSet* FDataSet;
	System::UnicodeString FFieldName;
	TFields* FFields;
	TFieldType FDataType;
	bool FReadOnly;
	TFieldKind FFieldKind;
	System::Classes::TAlignment FAlignment;
	bool FVisible;
	bool FRequired;
	bool FValidating;
	int FSize;
	int FOffset;
	int FFieldNo;
	int FDisplayWidth;
	System::UnicodeString FDisplayLabel;
	System::Maskutils::TEditMask FEditMask;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FValueBuffer;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FValueBuffer;
#endif /* _WIN64 */
	void *FValueBufferPtr;
	TDataSet* FLookupDataSet;
	System::UnicodeString FKeyFields;
	System::UnicodeString FLookupKeyFields;
	System::UnicodeString FLookupResultField;
	bool FLookupCache;
	TLookupList* FLookupList;
	System::UnicodeString FAttributeSet;
	System::UnicodeString FCustomConstraint;
	System::UnicodeString FImportedConstraint;
	System::UnicodeString FConstraintErrorMessage;
	System::UnicodeString FDefaultExpression;
	System::UnicodeString FOrigin;
	TProviderFlags FProviderFlags;
	TObjectField* FParentField;
	TFieldChars FValidChars;
	TFieldNotifyEvent FOnChange;
	TFieldNotifyEvent FOnValidate;
	TFieldGetTextEvent FOnGetText;
	TFieldSetTextEvent FOnSetText;
	TFieldLifeCycle FLifeCycle;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FIOBuffer;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FIOBuffer;
#endif /* _WIN64 */
	void __fastcall CalcLookupValue();
	bool __fastcall GetCalculated();
	System::UnicodeString __fastcall GetDisplayLabel();
	System::UnicodeString __fastcall GetDisplayName();
	System::UnicodeString __fastcall GetDisplayText();
	int __fastcall GetDisplayWidth();
	System::UnicodeString __fastcall GetEditText();
	System::UnicodeString __fastcall GetFullName();
	int __fastcall GetIndex();
	bool __fastcall GetIsIndexField();
	bool __fastcall GetLookup();
	TLookupList* __fastcall GetLookupList();
	System::Variant __fastcall GetCurValue();
	System::Variant __fastcall GetNewValue();
	System::Variant __fastcall GetOldValue();
	bool __fastcall IsDisplayLabelStored();
	bool __fastcall IsDisplayWidthStored();
	void __fastcall ReadAttributeSet(System::Classes::TReader* Reader);
	void __fastcall ReadCalculated(System::Classes::TReader* Reader);
	void __fastcall ReadLookup(System::Classes::TReader* Reader);
	void __fastcall SetAlignment(System::Classes::TAlignment Value);
	void __fastcall SetCalculated(bool Value);
	void __fastcall SetDisplayLabel(System::UnicodeString Value);
	void __fastcall SetDisplayWidth(int Value);
	void __fastcall SetEditMask(const System::Maskutils::TEditMask Value);
	void __fastcall SetEditText(const System::UnicodeString Value);
	void __fastcall SetFieldName(const System::UnicodeString Value);
	void __fastcall SetIndex(int Value);
	void __fastcall SetLookup(bool Value);
	void __fastcall SetLookupDataSet(TDataSet* Value);
	void __fastcall SetLookupKeyFields(const System::UnicodeString Value);
	void __fastcall SetLookupResultField(const System::UnicodeString Value);
	void __fastcall SetKeyFields(const System::UnicodeString Value);
	void __fastcall SetLookupCache(const bool Value);
	void __fastcall SetNewValue(const System::Variant &Value);
	void __fastcall SetReadOnly(const bool Value);
	void __fastcall SetVisible(bool Value);
	void __fastcall ValidateLookupInfo(bool All);
	void __fastcall WriteAttributeSet(System::Classes::TWriter* Writer);
	void __fastcall WriteCalculated(System::Classes::TWriter* Writer);
	void __fastcall WriteLookup(System::Classes::TWriter* Writer);
	
protected:
	DYNAMIC EDatabaseError* __fastcall AccessError(const System::UnicodeString TypeName);
	void __fastcall DataSetMissingError();
	void __fastcall FieldValueError();
	virtual void __fastcall Bind(bool Binding);
	void __fastcall CheckInactive();
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
	virtual void __fastcall Change();
	void __fastcall DataChanged();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall FreeBuffers();
	virtual Data::Fmtbcd::TBcd __fastcall GetAsBCD();
	virtual bool __fastcall GetAsBoolean();
	virtual System::Variant __fastcall GetAsByteArray();
	virtual System::Currency __fastcall GetAsCurrency();
	virtual System::TDateTime __fastcall GetAsDateTime();
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual System::Extended __fastcall GetAsExtended();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual Data::Sqltimst::TSQLTimeStamp __fastcall GetAsSQLTimeStamp();
	virtual Data::Sqltimst::TSQLTimeStampOffset __fastcall GetAsSQLTimeStampOffset();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::UnicodeString __fastcall GetAsWideString();
	virtual System::AnsiString __fastcall GetAsAnsiString();
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetAsBytes();
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetAsBytes();
#endif /* _WIN64 */
	virtual System::Variant __fastcall GetAsVariant();
	virtual GUID __fastcall GetAsGuid();
	virtual bool __fastcall GetCanModify();
	virtual System::UnicodeString __fastcall GetClassDesc();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetIOSize();
#ifndef _WIN64
	virtual void __fastcall CopyData(System::DynamicArray<System::Byte> Source, System::DynamicArray<System::Byte> Dest)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall CopyData(System::TArray__1<System::Byte> Source, System::TArray__1<System::Byte> Dest)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall CopyData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Source, void * Dest)/* overload */;
	virtual int __fastcall GetDefaultWidth();
	virtual int __fastcall GetFieldNo();
	virtual bool __fastcall GetHasConstraints();
	virtual bool __fastcall GetIsNull();
	virtual int __fastcall GetSize();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	virtual void __fastcall GetWideText(System::UnicodeString &Text, bool DisplayText);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation Operation);
	void __fastcall PropertyChanged(bool LayoutAffected);
	virtual void __fastcall ReadState(System::Classes::TReader* Reader);
	virtual void __fastcall SetAsBCD(const Data::Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsBoolean(bool Value);
	virtual void __fastcall SetAsByteArray(const System::Variant &Value);
	virtual void __fastcall SetAsCurrency(System::Currency Value);
	virtual void __fastcall SetAsDateTime(System::TDateTime Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsExtended(System::Extended Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsSQLTimeStamp(const Data::Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetAsSQLTimeStampOffset(const Data::Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsWideString(const System::UnicodeString Value);
	virtual void __fastcall SetAsAnsiString(const System::AnsiString Value);
#ifndef _WIN64
	virtual void __fastcall SetAsBytes(const System::DynamicArray<System::Byte> Value);
#else /* _WIN64 */
	virtual void __fastcall SetAsBytes(const System::TArray__1<System::Byte> Value);
#endif /* _WIN64 */
	virtual void __fastcall SetAsVariant(const System::Variant &Value);
	virtual void __fastcall SetDataSet(TDataSet* ADataSet);
	void __fastcall SetDataType(TFieldType Value);
	virtual void __fastcall SetFieldKind(TFieldKind Value);
	virtual void __fastcall SetParentField(TObjectField* AField);
	virtual void __fastcall SetSize(int Value);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall SetWideText(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	virtual void __fastcall SetAsGuid(const GUID &Value);
	virtual TLookupListClass __fastcall GetLookupListClass();
	
public:
	__fastcall virtual TField(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TField();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall AssignValue(const System::TVarRec &Value);
	virtual void __fastcall Clear();
	void __fastcall FocusControl();
#ifndef _WIN64
	bool __fastcall GetData(System::DynamicArray<System::Byte> &Buffer, bool NativeFormat = true)/* overload */;
#else /* _WIN64 */
	bool __fastcall GetData(System::TArray__1<System::Byte> &Buffer, bool NativeFormat = true)/* overload */;
#endif /* _WIN64 */
	bool __fastcall GetData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer, bool NativeFormat = true)/* overload */;
	DYNAMIC System::Classes::TComponent* __fastcall GetParentComponent();
	DYNAMIC bool __fastcall HasParent();
	__classmethod virtual bool __fastcall IsBlob();
	virtual bool __fastcall IsValidChar(System::WideChar InputChar);
	void __fastcall RefreshLookupList();
#ifndef _WIN64
	void __fastcall SetData(System::DynamicArray<System::Byte> Buffer, bool NativeFormat = true)/* overload */;
#else /* _WIN64 */
	void __fastcall SetData(System::TArray__1<System::Byte> Buffer, bool NativeFormat = true)/* overload */;
#endif /* _WIN64 */
	void __fastcall SetData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer, bool NativeFormat = true)/* overload */;
	virtual void __fastcall SetFieldType(TFieldType Value);
	virtual void __fastcall SetFieldProps(TFieldDef* FieldDef);
	virtual void __fastcall SetFieldDefProps(TFieldDef* FieldDef);
	DYNAMIC void __fastcall SetParentComponent(System::Classes::TComponent* AParent);
#ifndef _WIN64
	void __fastcall Validate(System::DynamicArray<System::Byte> Buffer)/* overload */;
#else /* _WIN64 */
	void __fastcall Validate(System::TArray__1<System::Byte> Buffer)/* overload */;
#endif /* _WIN64 */
	void __fastcall Validate _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer)/* overload */;
	__property Data::Fmtbcd::TBcd AsBCD = {read=GetAsBCD, write=SetAsBCD};
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property System::Currency AsCurrency = {read=GetAsCurrency, write=SetAsCurrency};
	__property System::TDateTime AsDateTime = {read=GetAsDateTime, write=SetAsDateTime};
	__property Data::Sqltimst::TSQLTimeStamp AsSQLTimeStamp = {read=GetAsSQLTimeStamp, write=SetAsSQLTimeStamp};
	__property Data::Sqltimst::TSQLTimeStampOffset AsSQLTimeStampOffset = {read=GetAsSQLTimeStampOffset, write=SetAsSQLTimeStampOffset};
	__property float AsSingle = {read=GetAsSingle, write=SetAsSingle};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property System::Extended AsExtended = {read=GetAsExtended, write=SetAsExtended};
	__property int AsInteger = {read=GetAsInteger, write=SetAsInteger, nodefault};
	__property __int64 AsLargeInt = {read=GetAsLargeInt, write=SetAsLargeInt};
	__property unsigned AsLongWord = {read=GetAsLongWord, write=SetAsLongWord, nodefault};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property System::UnicodeString AsWideString = {read=GetAsWideString, write=SetAsWideString};
	__property System::AnsiString AsAnsiString = {read=GetAsAnsiString, write=SetAsAnsiString};
#ifndef _WIN64
	__property System::DynamicArray<System::Byte> AsBytes = {read=GetAsBytes, write=SetAsBytes};
#else /* _WIN64 */
	__property System::TArray__1<System::Byte> AsBytes = {read=GetAsBytes, write=SetAsBytes};
#endif /* _WIN64 */
	__property System::Variant AsVariant = {read=GetAsVariant, write=SetAsVariant};
	__property GUID AsGuid = {read=GetAsGuid, write=SetAsGuid};
	__property System::UnicodeString AttributeSet = {read=FAttributeSet, write=FAttributeSet};
	__property bool Calculated = {read=GetCalculated, write=SetCalculated, default=0};
	__property bool CanModify = {read=GetCanModify, nodefault};
	__property TFieldLifeCycle LifeCycle = {read=FLifeCycle, write=FLifeCycle, nodefault};
	__property System::Variant CurValue = {read=GetCurValue};
	__property TDataSet* DataSet = {read=FDataSet, write=SetDataSet, stored=false};
	__property int DataSize = {read=GetDataSize, nodefault};
	__property TFieldType DataType = {read=FDataType, nodefault};
	__property System::UnicodeString DisplayName = {read=GetDisplayName};
	__property System::UnicodeString DisplayText = {read=GetDisplayText};
	__property System::Maskutils::TEditMask EditMask = {read=FEditMask, write=SetEditMask};
	__property System::Maskutils::TEditMask EditMaskPtr = {read=FEditMask};
	__property int FieldNo = {read=GetFieldNo, nodefault};
	__property System::UnicodeString FullName = {read=GetFullName};
	__property bool IsIndexField = {read=GetIsIndexField, nodefault};
	__property bool IsNull = {read=GetIsNull, nodefault};
	__property bool Lookup = {read=GetLookup, write=SetLookup, nodefault};
	__property TLookupList* LookupList = {read=GetLookupList};
	__property System::Variant NewValue = {read=GetNewValue, write=SetNewValue};
	__property int Offset = {read=FOffset, nodefault};
	__property System::Variant OldValue = {read=GetOldValue};
	__property TObjectField* ParentField = {read=FParentField, write=SetParentField};
	__property int Size = {read=GetSize, write=SetSize, nodefault};
	__property System::UnicodeString Text = {read=GetEditText, write=SetEditText};
	__property bool Validating = {read=FValidating, nodefault};
	__property TFieldChars ValidChars = {read=FValidChars, write=FValidChars};
	__property System::Variant Value = {read=GetAsVariant, write=SetAsVariant};
	
__published:
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property TAutoRefreshFlag AutoGenerateValue = {read=FAutoGenerateValue, write=FAutoGenerateValue, default=0};
	__property System::UnicodeString CustomConstraint = {read=FCustomConstraint, write=FCustomConstraint};
	__property System::UnicodeString ConstraintErrorMessage = {read=FConstraintErrorMessage, write=FConstraintErrorMessage};
	__property System::UnicodeString DefaultExpression = {read=FDefaultExpression, write=FDefaultExpression};
	__property System::UnicodeString DisplayLabel = {read=GetDisplayLabel, write=SetDisplayLabel, stored=IsDisplayLabelStored};
	__property int DisplayWidth = {read=GetDisplayWidth, write=SetDisplayWidth, stored=IsDisplayWidthStored, nodefault};
	__property TFieldKind FieldKind = {read=FFieldKind, write=SetFieldKind, default=0};
	__property System::UnicodeString FieldName = {read=FFieldName, write=SetFieldName};
	__property bool HasConstraints = {read=GetHasConstraints, default=0};
	__property int Index = {read=GetIndex, write=SetIndex, stored=false, nodefault};
	__property System::UnicodeString ImportedConstraint = {read=FImportedConstraint, write=FImportedConstraint};
	__property TDataSet* LookupDataSet = {read=FLookupDataSet, write=SetLookupDataSet};
	__property System::UnicodeString LookupKeyFields = {read=FLookupKeyFields, write=SetLookupKeyFields};
	__property System::UnicodeString LookupResultField = {read=FLookupResultField, write=SetLookupResultField};
	__property System::UnicodeString KeyFields = {read=FKeyFields, write=SetKeyFields};
	__property bool LookupCache = {read=FLookupCache, write=SetLookupCache, default=0};
	__property System::UnicodeString Origin = {read=FOrigin, write=FOrigin};
	__property TProviderFlags ProviderFlags = {read=FProviderFlags, write=FProviderFlags, default=3};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, default=0};
	__property bool Required = {read=FRequired, write=FRequired, default=0};
	__property bool Visible = {read=FVisible, write=SetVisible, default=1};
	__property TFieldNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property TFieldGetTextEvent OnGetText = {read=FOnGetText, write=FOnGetText};
	__property TFieldSetTextEvent OnSetText = {read=FOnSetText, write=FOnSetText};
	__property TFieldNotifyEvent OnValidate = {read=FOnValidate, write=FOnValidate};
};


class PASCALIMPLEMENTATION TStringField : public TField
{
	typedef TField inherited;
	
private:
	bool FFixedChar;
	bool FTransliterate;
	
protected:
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
	virtual Data::Fmtbcd::TBcd __fastcall GetAsBCD();
	virtual bool __fastcall GetAsBoolean();
	virtual System::TDateTime __fastcall GetAsDateTime();
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual System::Extended __fastcall GetAsExtended();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual Data::Sqltimst::TSQLTimeStamp __fastcall GetAsSQLTimeStamp();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::AnsiString __fastcall GetAsAnsiString();
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetAsBytes();
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetAsBytes();
#endif /* _WIN64 */
	virtual System::Variant __fastcall GetAsVariant();
	virtual GUID __fastcall GetAsGuid();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetIOSize();
	virtual int __fastcall GetDefaultWidth();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	bool __fastcall GetValue(System::AnsiString &Value);
	virtual void __fastcall SetAsBCD(const Data::Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsBoolean(bool Value);
	virtual void __fastcall SetAsDateTime(System::TDateTime Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsExtended(System::Extended Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsSQLTimeStamp(const Data::Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsAnsiString(const System::AnsiString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	virtual void __fastcall SetAsGuid(const GUID &Value);
	
public:
	__fastcall virtual TStringField(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall SetFieldProps(TFieldDef* FieldDef);
	virtual void __fastcall SetFieldDefProps(TFieldDef* FieldDef);
	__property System::AnsiString Value = {read=GetAsAnsiString, write=SetAsAnsiString};
	
__published:
	__property EditMask = {default=0};
	__property bool FixedChar = {read=FFixedChar, write=FFixedChar, default=0};
	__property Size = {default=20};
	__property bool Transliterate = {read=FTransliterate, write=FTransliterate, default=1};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TStringField() { }
	
};


class PASCALIMPLEMENTATION TWideStringField : public TStringField
{
	typedef TStringField inherited;
	
protected:
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
#ifndef _WIN64
	virtual void __fastcall CopyData(System::DynamicArray<System::Byte> Source, System::DynamicArray<System::Byte> Dest)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall CopyData(System::TArray__1<System::Byte> Source, System::TArray__1<System::Byte> Dest)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall CopyData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Source, void * Dest)/* overload */;
	virtual System::AnsiString __fastcall GetAsAnsiString();
	virtual System::UnicodeString __fastcall GetAsString();
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetAsBytes();
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetAsBytes();
#endif /* _WIN64 */
	virtual System::Variant __fastcall GetAsVariant();
	virtual System::UnicodeString __fastcall GetAsWideString();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetIOSize();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	HIDESBASE bool __fastcall GetValue(System::UnicodeString &Value);
	virtual void __fastcall SetAsAnsiString(const System::AnsiString Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TWideStringField(System::Classes::TComponent* AOwner);
	__property System::UnicodeString Value = {read=GetAsWideString, write=SetAsWideString};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TWideStringField() { }
	
};


class PASCALIMPLEMENTATION TNumericField : public TField
{
	typedef TField inherited;
	
private:
	System::UnicodeString FDisplayFormat;
	System::UnicodeString FEditFormat;
	
protected:
	void __fastcall RangeError(const System::Extended Value, const System::Extended Min, const System::Extended Max);
	void __fastcall InvalidIntegerError(const System::UnicodeString Value);
	void __fastcall InvalidFloatValue(const System::UnicodeString Value);
	void __fastcall SetDisplayFormat(const System::UnicodeString Value);
	void __fastcall SetEditFormat(const System::UnicodeString Value);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	
public:
	__fastcall virtual TNumericField(System::Classes::TComponent* AOwner);
	
__published:
	__property Alignment = {default=1};
	__property System::UnicodeString DisplayFormat = {read=FDisplayFormat, write=SetDisplayFormat};
	__property System::UnicodeString EditFormat = {read=FEditFormat, write=SetEditFormat};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TNumericField() { }
	
};


class PASCALIMPLEMENTATION TIntegerField : public TNumericField
{
	typedef TNumericField inherited;
	
private:
	int FMinRange;
	int FMaxRange;
	int FMinValue;
	int FMaxValue;
	void __fastcall CheckRange(int Value, int Min, int Max);
	void __fastcall SetMaxValue(int Value);
	void __fastcall SetMinValue(int Value);
	
protected:
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetIOSize();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	virtual bool __fastcall GetValue(int &Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TIntegerField(System::Classes::TComponent* AOwner);
	__property int Value = {read=GetAsInteger, write=SetAsInteger, nodefault};
	
__published:
	__property int MaxValue = {read=FMaxValue, write=SetMaxValue, default=0};
	__property int MinValue = {read=FMinValue, write=SetMinValue, default=0};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TIntegerField() { }
	
};


class PASCALIMPLEMENTATION TLongWordField : public TNumericField
{
	typedef TNumericField inherited;
	
private:
	unsigned FMinRange;
	unsigned FMaxRange;
	unsigned FMinValue;
	unsigned FMaxValue;
	void __fastcall CheckRange(unsigned Value, unsigned Min, unsigned Max);
	void __fastcall SetMaxValue(unsigned Value);
	void __fastcall SetMinValue(unsigned Value);
	
protected:
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	virtual bool __fastcall GetValue(unsigned &Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TLongWordField(System::Classes::TComponent* AOwner);
	virtual void __fastcall AssignValue(const System::TVarRec &Value);
	__property unsigned Value = {read=GetAsLongWord, write=SetAsLongWord, nodefault};
	
__published:
	__property unsigned MaxValue = {read=FMaxValue, write=SetMaxValue, default=0};
	__property unsigned MinValue = {read=FMinValue, write=SetMinValue, default=0};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TLongWordField() { }
	
};


class PASCALIMPLEMENTATION TSmallintField : public TIntegerField
{
	typedef TIntegerField inherited;
	
protected:
	virtual int __fastcall GetDataSize();
	
public:
	__fastcall virtual TSmallintField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TSmallintField() { }
	
};


class PASCALIMPLEMENTATION TShortintField : public TIntegerField
{
	typedef TIntegerField inherited;
	
protected:
	virtual int __fastcall GetDataSize();
	
public:
	__fastcall virtual TShortintField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TShortintField() { }
	
};


class PASCALIMPLEMENTATION TByteField : public TIntegerField
{
	typedef TIntegerField inherited;
	
protected:
	virtual int __fastcall GetDataSize();
	
public:
	__fastcall virtual TByteField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TByteField() { }
	
};


class PASCALIMPLEMENTATION TLargeintField : public TNumericField
{
	typedef TNumericField inherited;
	
private:
	__int64 FMinValue;
	__int64 FMaxValue;
	void __fastcall CheckRange(__int64 Value, __int64 Min, __int64 Max);
	
protected:
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual System::Extended __fastcall GetAsExtended();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetDefaultWidth();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	bool __fastcall GetValue(__int64 &Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsExtended(System::Extended Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TLargeintField(System::Classes::TComponent* AOwner);
	__property __int64 Value = {read=GetAsLargeInt, write=SetAsLargeInt};
	
__published:
	__property __int64 MaxValue = {read=FMaxValue, write=FMaxValue, default=0};
	__property __int64 MinValue = {read=FMinValue, write=FMinValue, default=0};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TLargeintField() { }
	
};


class PASCALIMPLEMENTATION TWordField : public TIntegerField
{
	typedef TIntegerField inherited;
	
protected:
	virtual int __fastcall GetDataSize();
	
public:
	__fastcall virtual TWordField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TWordField() { }
	
};


class PASCALIMPLEMENTATION TAutoIncField : public TIntegerField
{
	typedef TIntegerField inherited;
	
public:
	__fastcall virtual TAutoIncField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TAutoIncField() { }
	
};


class PASCALIMPLEMENTATION TUnsignedAutoIncField : public TLongWordField
{
	typedef TLongWordField inherited;
	
public:
	__fastcall virtual TUnsignedAutoIncField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TUnsignedAutoIncField() { }
	
};


class PASCALIMPLEMENTATION TFloatField : public TNumericField
{
	typedef TNumericField inherited;
	
private:
	bool FCurrency;
	bool FCheckRange;
	int FPrecision;
	double FMinValue;
	double FMaxValue;
	void __fastcall SetCurrency(bool Value);
	void __fastcall SetMaxValue(double Value);
	void __fastcall SetMinValue(double Value);
	void __fastcall SetPrecision(int Value);
	void __fastcall UpdateCheckRange();
	
protected:
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	bool __fastcall GetValue(double &Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TFloatField(System::Classes::TComponent* AOwner);
	__property double Value = {read=GetAsFloat, write=SetAsFloat};
	
__published:
	__property bool currency = {read=FCurrency, write=SetCurrency, default=0};
	__property double MaxValue = {read=FMaxValue, write=SetMaxValue};
	__property double MinValue = {read=FMinValue, write=SetMinValue};
	__property int Precision = {read=FPrecision, write=SetPrecision, default=15};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TFloatField() { }
	
};


class PASCALIMPLEMENTATION TSingleField : public TNumericField
{
	typedef TNumericField inherited;
	
private:
	bool FCurrency;
	bool FCheckRange;
	int FPrecision;
	float FMinValue;
	float FMaxValue;
	void __fastcall SetCurrency(bool Value);
	void __fastcall SetMaxValue(float Value);
	void __fastcall SetMinValue(float Value);
	void __fastcall SetPrecision(int Value);
	void __fastcall UpdateCheckRange();
	
protected:
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	bool __fastcall GetValue(float &Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TSingleField(System::Classes::TComponent* AOwner);
	__property float Value = {read=GetAsSingle, write=SetAsSingle};
	
__published:
	__property bool currency = {read=FCurrency, write=SetCurrency, default=0};
	__property float MaxValue = {read=FMaxValue, write=SetMaxValue};
	__property float MinValue = {read=FMinValue, write=SetMinValue};
	__property int Precision = {read=FPrecision, write=SetPrecision, default=7};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TSingleField() { }
	
};


class PASCALIMPLEMENTATION TCurrencyField : public TFloatField
{
	typedef TFloatField inherited;
	
public:
	__fastcall virtual TCurrencyField(System::Classes::TComponent* AOwner);
	
__published:
	__property currency = {default=1};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TCurrencyField() { }
	
};


class PASCALIMPLEMENTATION TExtendedField : public TNumericField
{
	typedef TNumericField inherited;
	
private:
	bool FCurrency;
	bool FCheckRange;
	int FPrecision;
	System::Extended FMinValue;
	System::Extended FMaxValue;
	void __fastcall SetCurrency(bool Value);
	void __fastcall SetMaxValue(System::Extended Value);
	void __fastcall SetMinValue(System::Extended Value);
	void __fastcall SetPrecision(int Value);
	void __fastcall UpdateCheckRange();
	
protected:
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual System::Extended __fastcall GetAsExtended();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	bool __fastcall GetValue(System::Extended &Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsExtended(System::Extended Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TExtendedField(System::Classes::TComponent* AOwner);
	__property System::Extended Value = {read=GetAsExtended, write=SetAsExtended};
	
__published:
	__property bool currency = {read=FCurrency, write=SetCurrency, default=0};
	__property System::Extended MaxValue = {read=FMaxValue, write=SetMaxValue};
	__property System::Extended MinValue = {read=FMinValue, write=SetMinValue};
	__property int Precision = {read=FPrecision, write=SetPrecision, default=15};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TExtendedField() { }
	
};


class PASCALIMPLEMENTATION TBooleanField : public TField
{
	typedef TField inherited;
	
	
private:
	typedef System::StaticArray<System::UnicodeString, 2> _TBooleanField__1;
	
	
private:
	System::UnicodeString FDisplayValues;
	_TBooleanField__1 FTextValues;
	void __fastcall LoadTextValues();
	void __fastcall SetDisplayValues(const System::UnicodeString Value);
	
protected:
	virtual bool __fastcall GetAsBoolean();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetDefaultWidth();
	bool __fastcall GetValue(bool &Value);
	virtual void __fastcall SetAsBoolean(bool Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TBooleanField(System::Classes::TComponent* AOwner);
	__property bool Value = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	
__published:
	__property System::UnicodeString DisplayValues = {read=FDisplayValues, write=SetDisplayValues};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TBooleanField() { }
	
};


class PASCALIMPLEMENTATION TDateTimeField : public TField
{
	typedef TField inherited;
	
private:
	System::UnicodeString FDisplayFormat;
	void __fastcall SetDisplayFormat(const System::UnicodeString Value);
	
protected:
	virtual System::TDateTime __fastcall GetAsDateTime();
	virtual double __fastcall GetAsFloat();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetIOSize();
	virtual int __fastcall GetDefaultWidth();
	virtual Data::Sqltimst::TSQLTimeStamp __fastcall GetAsSQLTimeStamp();
	bool __fastcall GetValue(System::TDateTime &Value);
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	virtual void __fastcall SetAsDateTime(System::TDateTime Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	virtual void __fastcall SetAsSQLTimeStamp(const Data::Sqltimst::TSQLTimeStamp &Value);
	
public:
	__fastcall virtual TDateTimeField(System::Classes::TComponent* AOwner);
	__property System::TDateTime Value = {read=GetAsDateTime, write=SetAsDateTime};
	
__published:
	__property System::UnicodeString DisplayFormat = {read=FDisplayFormat, write=SetDisplayFormat};
	__property EditMask = {default=0};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TDateTimeField() { }
	
};


class PASCALIMPLEMENTATION TSQLTimeStampField : public TField
{
	typedef TField inherited;
	
private:
	System::UnicodeString FDisplayFormat;
	void __fastcall SetDisplayFormat(const System::UnicodeString Value);
	
protected:
	virtual Data::Sqltimst::TSQLTimeStamp __fastcall GetAsSQLTimeStamp();
	virtual System::TDateTime __fastcall GetAsDateTime();
	virtual double __fastcall GetAsFloat();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetDefaultWidth();
	bool __fastcall GetValue(Data::Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	virtual void __fastcall SetAsSQLTimeStamp(const Data::Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetAsDateTime(System::TDateTime Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TSQLTimeStampField(System::Classes::TComponent* AOwner);
	__property Data::Sqltimst::TSQLTimeStamp Value = {read=GetAsSQLTimeStamp, write=SetAsSQLTimeStamp};
	
__published:
	__property System::UnicodeString DisplayFormat = {read=FDisplayFormat, write=SetDisplayFormat};
	__property EditMask = {default=0};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TSQLTimeStampField() { }
	
};


class PASCALIMPLEMENTATION TSQLTimeStampOffsetField : public TSQLTimeStampField
{
	typedef TSQLTimeStampField inherited;
	
protected:
	virtual System::TDateTime __fastcall GetAsDateTime();
	virtual System::Variant __fastcall GetAsVariant();
	virtual Data::Sqltimst::TSQLTimeStampOffset __fastcall GetAsSQLTimeStampOffset();
	virtual int __fastcall GetDataSize();
	HIDESBASE bool __fastcall GetValue(Data::Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	virtual void __fastcall SetAsDateTime(System::TDateTime Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsSQLTimeStampOffset(const Data::Sqltimst::TSQLTimeStampOffset &Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TSQLTimeStampOffsetField(System::Classes::TComponent* AOwner);
	__property Data::Sqltimst::TSQLTimeStampOffset Value = {read=GetAsSQLTimeStampOffset, write=SetAsSQLTimeStampOffset};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TSQLTimeStampOffsetField() { }
	
};


class PASCALIMPLEMENTATION TDateField : public TDateTimeField
{
	typedef TDateTimeField inherited;
	
protected:
	virtual int __fastcall GetDataSize();
	
public:
	__fastcall virtual TDateField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TDateField() { }
	
};


class PASCALIMPLEMENTATION TTimeField : public TDateTimeField
{
	typedef TDateTimeField inherited;
	
protected:
	virtual int __fastcall GetDataSize();
	
public:
	__fastcall virtual TTimeField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TTimeField() { }
	
};


class PASCALIMPLEMENTATION TBinaryField : public TField
{
	typedef TField inherited;
	
protected:
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
#ifndef _WIN64
	virtual void __fastcall CopyData(System::DynamicArray<System::Byte> Source, System::DynamicArray<System::Byte> Dest)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall CopyData(System::TArray__1<System::Byte> Source, System::TArray__1<System::Byte> Dest)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall CopyData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Source, void * Dest)/* overload */;
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::AnsiString __fastcall GetAsAnsiString();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	virtual System::Variant __fastcall GetAsVariant();
	virtual GUID __fastcall GetAsGuid();
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsAnsiString(const System::AnsiString Value);
	virtual void __fastcall SetText(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	virtual void __fastcall SetAsGuid(const GUID &Value);
	
__published:
	__property Size = {default=16};
public:
	/* TField.Create */ inline __fastcall virtual TBinaryField(System::Classes::TComponent* AOwner) : TField(AOwner) { }
	/* TField.Destroy */ inline __fastcall virtual ~TBinaryField() { }
	
};


class PASCALIMPLEMENTATION TBytesField : public TBinaryField
{
	typedef TBinaryField inherited;
	
protected:
	virtual int __fastcall GetDataSize();
	
public:
	__fastcall virtual TBytesField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TBytesField() { }
	
};


class PASCALIMPLEMENTATION TVarBytesField : public TBytesField
{
	typedef TBytesField inherited;
	
protected:
	virtual int __fastcall GetDataSize();
	virtual void __fastcall SetAsByteArray(const System::Variant &Value);
#ifndef _WIN64
	virtual void __fastcall SetAsBytes(const System::DynamicArray<System::Byte> Value);
#else /* _WIN64 */
	virtual void __fastcall SetAsBytes(const System::TArray__1<System::Byte> Value);
#endif /* _WIN64 */
	
public:
	__fastcall virtual TVarBytesField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TVarBytesField() { }
	
};


class PASCALIMPLEMENTATION TBCDField : public TNumericField
{
	typedef TNumericField inherited;
	
private:
	bool FCurrency;
	bool FCheckRange;
	System::Currency FMinValue;
	System::Currency FMaxValue;
	int FPrecision;
	void __fastcall SetCurrency(bool Value);
	void __fastcall SetMaxValue(System::Currency Value);
	void __fastcall SetMinValue(System::Currency Value);
	void __fastcall SetPrecision(int Value);
	void __fastcall UpdateCheckRange();
	
protected:
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
#ifndef _WIN64
	virtual void __fastcall CopyData(System::DynamicArray<System::Byte> Source, System::DynamicArray<System::Byte> Dest)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall CopyData(System::TArray__1<System::Byte> Source, System::TArray__1<System::Byte> Dest)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall CopyData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Source, void * Dest)/* overload */;
	virtual Data::Fmtbcd::TBcd __fastcall GetAsBCD();
	virtual System::Currency __fastcall GetAsCurrency();
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetDefaultWidth();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	bool __fastcall GetValue(System::Currency &Value);
	virtual void __fastcall SetAsBCD(const Data::Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsCurrency(System::Currency Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TBCDField(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetFieldProps(TFieldDef* FieldDef);
	virtual void __fastcall SetFieldDefProps(TFieldDef* FieldDef);
	__property System::Currency Value = {read=GetAsCurrency, write=SetAsCurrency};
	
__published:
	__property bool currency = {read=FCurrency, write=SetCurrency, default=0};
	__property System::Currency MaxValue = {read=FMaxValue, write=SetMaxValue};
	__property System::Currency MinValue = {read=FMinValue, write=SetMinValue};
	__property int Precision = {read=FPrecision, write=SetPrecision, default=0};
	__property Size = {default=4};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TBCDField() { }
	
};


class PASCALIMPLEMENTATION TFMTBCDField : public TNumericField
{
	typedef TNumericField inherited;
	
private:
	bool FCurrency;
	bool FCheckRange;
	System::UnicodeString FMinValue;
	System::UnicodeString FMaxValue;
	int FPrecision;
	void __fastcall BcdRangeError(const System::Variant &Value, System::UnicodeString Max, System::UnicodeString Min);
	void __fastcall SetCurrency(bool Value);
	void __fastcall SetMaxValue(System::UnicodeString Value);
	void __fastcall SetMinValue(System::UnicodeString Value);
	void __fastcall SetPrecision(int Value);
	void __fastcall UpdateCheckRange();
	
protected:
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
	virtual System::Currency __fastcall GetAsCurrency();
	virtual Data::Fmtbcd::TBcd __fastcall GetAsBCD();
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual int __fastcall GetDefaultWidth();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	bool __fastcall GetValue(Data::Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsCurrency(System::Currency Value);
	virtual void __fastcall SetAsBCD(const Data::Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TFMTBCDField(System::Classes::TComponent* AOwner);
	virtual void __fastcall SetFieldProps(TFieldDef* FieldDef);
	virtual void __fastcall SetFieldDefProps(TFieldDef* FieldDef);
	__property Data::Fmtbcd::TBcd Value = {read=GetAsBCD, write=SetAsBCD};
	
__published:
	__property bool currency = {read=FCurrency, write=SetCurrency, default=0};
	__property System::UnicodeString MaxValue = {read=FMaxValue, write=SetMaxValue};
	__property System::UnicodeString MinValue = {read=FMinValue, write=SetMinValue};
	__property int Precision = {read=FPrecision, write=SetPrecision, default=0};
	__property Size = {default=8};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TFMTBCDField() { }
	
};


typedef TFieldType TBlobType;

enum DECLSPEC_DENUM TBlobDisplayValue : unsigned char { dvClass, dvFull, dvClip, dvFit };

class PASCALIMPLEMENTATION TBlobField : public TField
{
	typedef TField inherited;
	
private:
	int FModifiedRecord;
	bool FModified;
	bool FGraphicHeader;
	bool FTransliterate;
	TBlobDisplayValue FDisplayValue;
	TBlobType __fastcall GetBlobType();
	bool __fastcall GetModified();
	void __fastcall LoadFromBlob(TBlobField* Blob);
	void __fastcall LoadFromStrings(System::Classes::TStrings* Strings);
	void __fastcall LoadFromStreamPersist(System::Classes::_di_IStreamPersist StreamPersist);
	void __fastcall SaveToStrings(System::Classes::TStrings* Strings);
	void __fastcall SaveToStreamPersist(System::Classes::_di_IStreamPersist StreamPersist);
	void __fastcall SetBlobType(TBlobType Value);
	void __fastcall SetModified(bool Value);
	bool __fastcall SupportsStreamPersist(System::Classes::TPersistent* const Persistent, System::Classes::_di_IStreamPersist &StreamPersist);
	void __fastcall SetDisplayValue(TBlobDisplayValue Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall FreeBuffers();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::UnicodeString __fastcall GetAsWideString();
	virtual System::AnsiString __fastcall GetAsAnsiString();
	virtual System::Variant __fastcall GetAsVariant();
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetAsBytes();
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetAsBytes();
#endif /* _WIN64 */
	virtual int __fastcall GetBlobSize();
	virtual System::UnicodeString __fastcall GetClassDesc();
	virtual bool __fastcall GetIsNull();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	virtual void __fastcall SetAsAnsiString(const System::AnsiString Value);
#ifndef _WIN64
	virtual void __fastcall SetAsBytes(const System::DynamicArray<System::Byte> Value);
#else /* _WIN64 */
	virtual void __fastcall SetAsBytes(const System::TArray__1<System::Byte> Value);
#endif /* _WIN64 */
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsWideString(const System::UnicodeString Value);
#ifndef _WIN64
	HIDESBASE void __fastcall SetData(System::DynamicArray<System::Byte> Buffer, int Len)/* overload */;
#else /* _WIN64 */
	HIDESBASE void __fastcall SetData(System::TArray__1<System::Byte> Buffer, int Len)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	virtual int __fastcall GetDataSize();
	
public:
	__fastcall virtual TBlobField(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual void __fastcall Clear();
	__classmethod virtual bool __fastcall IsBlob();
	void __fastcall LoadFromFile(const System::UnicodeString FileName);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream);
	void __fastcall SaveToFile(const System::UnicodeString FileName);
	void __fastcall SaveToStream(System::Classes::TStream* Stream);
	virtual void __fastcall SetFieldType(TFieldType Value);
	__property int BlobSize = {read=GetBlobSize, nodefault};
	__property bool Modified = {read=GetModified, write=SetModified, nodefault};
#ifndef _WIN64
	__property System::DynamicArray<System::Byte> Value = {read=GetAsBytes, write=SetAsBytes};
#else /* _WIN64 */
	__property System::TArray__1<System::Byte> Value = {read=GetAsBytes, write=SetAsBytes};
#endif /* _WIN64 */
	__property bool Transliterate = {read=FTransliterate, write=FTransliterate, nodefault};
	
__published:
	__property TBlobType BlobType = {read=GetBlobType, write=SetBlobType, default=15};
	__property bool GraphicHeader = {read=FGraphicHeader, write=FGraphicHeader, default=1};
	__property Size = {default=0};
	__property TBlobDisplayValue DisplayValue = {read=FDisplayValue, write=SetDisplayValue, default=0};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TBlobField() { }
	
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline void __fastcall  SetData(System::DynamicArray<System::Byte> Buffer, bool NativeFormat = true){ TField::SetData(Buffer, NativeFormat); }
#else /* _WIN64 */
	inline void __fastcall  SetData(System::TArray__1<System::Byte> Buffer, bool NativeFormat = true){ TField::SetData(Buffer, NativeFormat); }
#endif /* _WIN64 */
	inline void __fastcall  SetData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer, bool NativeFormat = true){ TField::SetData(Buffer, NativeFormat); }
	
};


class PASCALIMPLEMENTATION TMemoField : public TBlobField
{
	typedef TBlobField inherited;
	
public:
	__fastcall virtual TMemoField(System::Classes::TComponent* AOwner);
	virtual int __fastcall GetAsInteger();
	virtual System::UnicodeString __fastcall GetAsWideString();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetAsWideString(const System::UnicodeString Value);
	__property System::AnsiString Value = {read=GetAsAnsiString, write=SetAsAnsiString};
	
__published:
	__property Transliterate = {default=1};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TMemoField() { }
	
};


class PASCALIMPLEMENTATION TWideMemoField : public TBlobField
{
	typedef TBlobField inherited;
	
protected:
	virtual System::AnsiString __fastcall GetAsAnsiString();
	virtual int __fastcall GetAsInteger();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual void __fastcall SetAsAnsiString(const System::AnsiString Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TWideMemoField(System::Classes::TComponent* AOwner);
	__property System::UnicodeString Value = {read=GetAsWideString, write=SetAsWideString};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TWideMemoField() { }
	
};


class PASCALIMPLEMENTATION TGraphicField : public TBlobField
{
	typedef TBlobField inherited;
	
public:
	__fastcall virtual TGraphicField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TGraphicField() { }
	
};


class PASCALIMPLEMENTATION TObjectField : public TField
{
	typedef TField inherited;
	
public:
	System::Variant operator[](int Index) { return this->FieldValues[Index]; }
	
private:
	TFields* FFields;
	TFields* FOwnedFields;
	System::UnicodeString FObjectType;
	int FTotalSize;
	bool FUnNamed;
	void __fastcall DataSetChanged();
	void __fastcall ReadUnNamed(System::Classes::TReader* Reader);
	void __fastcall WriteUnNamed(System::Classes::TWriter* Writer);
	
protected:
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	virtual void __fastcall FreeBuffers();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDefaultWidth();
	int __fastcall GetFieldCount();
	virtual TFields* __fastcall GetFields();
	virtual System::Variant __fastcall GetFieldValue(int Index);
	virtual bool __fastcall GetHasConstraints();
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Component, int Order);
	virtual void __fastcall SetDataSet(TDataSet* ADataSet);
	virtual void __fastcall SetFieldKind(TFieldKind Value);
	virtual void __fastcall SetFieldValue(int Index, const System::Variant &Value);
	virtual void __fastcall SetParentField(TObjectField* AField);
	void __fastcall SetUnNamed(bool Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TObjectField(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TObjectField();
	virtual void __fastcall SetFieldProps(TFieldDef* FieldDef);
	virtual void __fastcall SetFieldDefProps(TFieldDef* FieldDef);
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	__property int FieldCount = {read=GetFieldCount, nodefault};
	__property TFields* Fields = {read=GetFields};
	__property System::Variant FieldValues[int Index] = {read=GetFieldValue, write=SetFieldValue/*, default*/};
	__property bool UnNamed = {read=FUnNamed, default=0};
	
__published:
	__property System::UnicodeString ObjectType = {read=FObjectType, write=FObjectType};
};


class PASCALIMPLEMENTATION TADTField : public TObjectField
{
	typedef TObjectField inherited;
	
private:
	void __fastcall FieldsChanged(System::TObject* Sender);
	
protected:
	virtual int __fastcall GetSize();
	
public:
	__fastcall virtual TADTField(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
public:
	/* TObjectField.Destroy */ inline __fastcall virtual ~TADTField() { }
	
};


class PASCALIMPLEMENTATION TArrayField : public TObjectField
{
	typedef TObjectField inherited;
	
protected:
	virtual void __fastcall Bind(bool Binding);
	virtual void __fastcall SetSize(int Value);
	
public:
	__fastcall virtual TArrayField(System::Classes::TComponent* AOwner);
	__property Size = {default=10};
public:
	/* TObjectField.Destroy */ inline __fastcall virtual ~TArrayField() { }
	
};


class PASCALIMPLEMENTATION TDataSetField : public TObjectField
{
	typedef TObjectField inherited;
	
private:
	TDataSet* FNestedDataSet;
	bool FIncludeObjectField;
	TDataSet* __fastcall GetNestedDataSet();
	void __fastcall AssignNestedDataSet(TDataSet* Value);
	void __fastcall SetIncludeObjectField(bool Value);
	
protected:
	virtual void __fastcall Bind(bool Binding);
	virtual bool __fastcall GetCanModify();
	virtual TFields* __fastcall GetFields();
	
public:
	__fastcall virtual TDataSetField(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDataSetField();
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	__property TDataSet* NestedDataSet = {read=GetNestedDataSet};
	
__published:
	__property bool IncludeObjectField = {read=FIncludeObjectField, write=SetIncludeObjectField, default=0};
};


class PASCALIMPLEMENTATION TReferenceField : public TDataSetField
{
	typedef TDataSetField inherited;
	
private:
	System::UnicodeString FReferenceTableName;
	
protected:
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDataSize();
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TReferenceField(System::Classes::TComponent* AOwner);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property System::UnicodeString ReferenceTableName = {read=FReferenceTableName, write=FReferenceTableName};
	__property Size = {default=0};
public:
	/* TDataSetField.Destroy */ inline __fastcall virtual ~TReferenceField() { }
	
};


class PASCALIMPLEMENTATION TVariantField : public TField
{
	typedef TField inherited;
	
protected:
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
	virtual int __fastcall GetIOSize();
	virtual Data::Fmtbcd::TBcd __fastcall GetAsBCD();
	virtual bool __fastcall GetAsBoolean();
	virtual System::TDateTime __fastcall GetAsDateTime();
	virtual Data::Sqltimst::TSQLTimeStamp __fastcall GetAsSQLTimeStamp();
	virtual float __fastcall GetAsSingle();
	virtual double __fastcall GetAsFloat();
	virtual int __fastcall GetAsInteger();
	virtual __int64 __fastcall GetAsLargeInt();
	virtual unsigned __fastcall GetAsLongWord();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual int __fastcall GetDefaultWidth();
	virtual void __fastcall SetAsBCD(const Data::Fmtbcd::TBcd &Value);
	virtual void __fastcall SetAsBoolean(bool Value);
	virtual void __fastcall SetAsSQLTimeStamp(const Data::Sqltimst::TSQLTimeStamp &Value);
	virtual void __fastcall SetAsDateTime(System::TDateTime Value);
	virtual void __fastcall SetAsSingle(float Value);
	virtual void __fastcall SetAsFloat(double Value);
	virtual void __fastcall SetAsInteger(int Value);
	virtual void __fastcall SetAsLargeInt(__int64 Value);
	virtual void __fastcall SetAsLongWord(unsigned Value);
	virtual void __fastcall SetAsString(const System::UnicodeString Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TVariantField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TVariantField() { }
	
};


class PASCALIMPLEMENTATION TInterfaceField : public TField
{
	typedef TField inherited;
	
protected:
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
	virtual int __fastcall GetIOSize();
	bool __fastcall GetValue(System::_di_IInterface &Value)/* overload */;
	System::_di_IInterface __fastcall GetValue()/* overload */;
	virtual System::Variant __fastcall GetAsVariant();
	void __fastcall SetValue(const System::_di_IInterface Value);
	virtual void __fastcall SetVarValue(const System::Variant &Value);
	
public:
	__fastcall virtual TInterfaceField(System::Classes::TComponent* AOwner);
	__property System::_di_IInterface Value = {read=GetValue, write=SetValue};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TInterfaceField() { }
	
};


class PASCALIMPLEMENTATION TIDispatchField : public TInterfaceField
{
	typedef TInterfaceField inherited;
	
protected:
	HIDESBASE _di_IDispatch __fastcall GetValue();
	HIDESBASE void __fastcall SetValue(const _di_IDispatch Value);
	
public:
	__fastcall virtual TIDispatchField(System::Classes::TComponent* AOwner);
	__property _di_IDispatch Value = {read=GetValue, write=SetValue};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TIDispatchField() { }
	
};


class PASCALIMPLEMENTATION TGuidField : public TStringField
{
	typedef TStringField inherited;
	
protected:
	__classmethod virtual void __fastcall CheckTypeSize(int Value);
	virtual int __fastcall GetDefaultWidth();
	
public:
	__fastcall virtual TGuidField(System::Classes::TComponent* AOwner);
public:
	/* TField.Destroy */ inline __fastcall virtual ~TGuidField() { }
	
};


typedef System::TObject TAggHandle;

class PASCALIMPLEMENTATION TAggregateField : public TField
{
	typedef TField inherited;
	
private:
	bool FActive;
	bool FCurrency;
	System::UnicodeString FDisplayName;
	System::UnicodeString FDisplayFormat;
	System::UnicodeString FExpression;
	int FGroupingLevel;
	System::UnicodeString FIndexName;
	System::TObject* FHandle;
	int FPrecision;
	TFieldType FResultType;
	void __fastcall SetActive(bool Value);
	void __fastcall SetGroupingLevel(int Value);
	void __fastcall SetIndexName(System::UnicodeString Value);
	void __fastcall SetExpression(System::UnicodeString Value);
	void __fastcall SetPrecision(int Value);
	void __fastcall SetCurrency(bool Value);
	
protected:
	virtual System::UnicodeString __fastcall GetAsString();
	virtual System::Variant __fastcall GetAsVariant();
	virtual void __fastcall GetText(System::UnicodeString &Text, bool DisplayText);
	void __fastcall Reset();
	void __fastcall SetDisplayFormat(const System::UnicodeString Value);
	virtual bool __fastcall GetIsNull();
	
public:
	__fastcall virtual TAggregateField(System::Classes::TComponent* AOwner);
	__property System::TObject* Handle = {read=FHandle, write=FHandle};
	__property TFieldType ResultType = {read=FResultType, write=FResultType, nodefault};
	
__published:
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property bool currency = {read=FCurrency, write=SetCurrency, default=0};
	__property System::UnicodeString DisplayName = {read=FDisplayName, write=FDisplayName};
	__property System::UnicodeString DisplayFormat = {read=FDisplayFormat, write=SetDisplayFormat};
	__property System::UnicodeString Expression = {read=FExpression, write=SetExpression};
	__property FieldKind = {default=4};
	__property int GroupingLevel = {read=FGroupingLevel, write=SetGroupingLevel, default=0};
	__property System::UnicodeString IndexName = {read=FIndexName, write=SetIndexName};
	__property int Precision = {read=FPrecision, write=SetPrecision, default=15};
	__property Visible = {default=0};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TAggregateField() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDataLink : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TDataSource* FDataSource;
	TDataLink* FNext;
	int FBufferCount;
	int FFirstRecord;
	bool FReadOnly;
	bool FActive;
	bool FVisualControl;
	bool FEditing;
	bool FUpdating;
	bool FDataSourceFixed;
	TDataSet* __fastcall GetDataSet();
	void __fastcall SetActive(bool Value);
	void __fastcall SetDataSource(TDataSource* ADataSource);
	void __fastcall SetEditing(bool Value);
	void __fastcall SetReadOnly(bool Value);
	void __fastcall UpdateRange();
	void __fastcall UpdateState();
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall CheckBrowseMode();
	virtual void __fastcall DataEvent(TDataEvent Event, NativeInt Info);
	virtual void __fastcall DataSetChanged();
	virtual void __fastcall DataSetScrolled(int Distance);
	virtual void __fastcall EditingChanged();
	virtual void __fastcall FocusControl(TFieldRef Field);
	virtual int __fastcall GetActiveRecord();
	virtual bool __fastcall GetBOF();
	virtual int __fastcall GetBufferCount();
	virtual bool __fastcall GetEOF();
	virtual int __fastcall GetRecordCount();
	virtual void __fastcall LayoutChanged();
	virtual int __fastcall MoveBy(int Distance);
	virtual void __fastcall RecordChanged(TField* Field);
	virtual void __fastcall SetActiveRecord(int Value);
	virtual void __fastcall SetBufferCount(int Value);
	virtual void __fastcall UpdateData();
	__property bool VisualControl = {read=FVisualControl, write=FVisualControl, nodefault};
	
public:
	__fastcall TDataLink();
	__fastcall virtual ~TDataLink();
	bool __fastcall Edit();
	DYNAMIC bool __fastcall ExecuteAction(System::Classes::TBasicAction* Action);
	DYNAMIC bool __fastcall UpdateAction(System::Classes::TBasicAction* Action);
	void __fastcall UpdateRecord();
	__property bool Active = {read=FActive, nodefault};
	__property int ActiveRecord = {read=GetActiveRecord, write=SetActiveRecord, nodefault};
	__property bool BOF = {read=GetBOF, nodefault};
	__property int BufferCount = {read=FBufferCount, write=SetBufferCount, nodefault};
	__property TDataSet* DataSet = {read=GetDataSet};
	__property TDataSource* DataSource = {read=FDataSource, write=SetDataSource};
	__property bool DataSourceFixed = {read=FDataSourceFixed, write=FDataSourceFixed, nodefault};
	__property bool Editing = {read=FEditing, nodefault};
	__property bool Eof = {read=GetEOF, nodefault};
	__property bool ReadOnly = {read=FReadOnly, write=SetReadOnly, nodefault};
	__property int RecordCount = {read=GetRecordCount, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDetailDataLink : public TDataLink
{
	typedef TDataLink inherited;
	
protected:
	virtual TDataSet* __fastcall GetDetailDataSet();
	
public:
	__property TDataSet* DetailDataSet = {read=GetDetailDataSet};
public:
	/* TDataLink.Create */ inline __fastcall TDetailDataLink() : TDataLink() { }
	/* TDataLink.Destroy */ inline __fastcall virtual ~TDetailDataLink() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TMasterDataLink : public TDetailDataLink
{
	typedef TDetailDataLink inherited;
	
private:
	TDataSet* FDataSet;
	System::UnicodeString FFieldNames;
	System::Generics::Collections::TList__1<TField*>* FFields;
	System::Classes::TNotifyEvent FOnMasterChange;
	System::Classes::TNotifyEvent FOnMasterDisable;
	void __fastcall SetFieldNames(const System::UnicodeString Value);
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall CheckBrowseMode();
	virtual TDataSet* __fastcall GetDetailDataSet();
	virtual void __fastcall LayoutChanged();
	virtual void __fastcall RecordChanged(TField* Field);
	
public:
	__fastcall TMasterDataLink(TDataSet* DataSet);
	__fastcall virtual ~TMasterDataLink();
	__property System::UnicodeString FieldNames = {read=FFieldNames, write=SetFieldNames};
	__property System::Generics::Collections::TList__1<TField*>* Fields = {read=FFields};
	__property System::Classes::TNotifyEvent OnMasterChange = {read=FOnMasterChange, write=FOnMasterChange};
	__property System::Classes::TNotifyEvent OnMasterDisable = {read=FOnMasterDisable, write=FOnMasterDisable};
};


typedef void __fastcall (__closure *TDataChangeEvent)(System::TObject* Sender, TField* Field);

class PASCALIMPLEMENTATION TDataSource : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
private:
	TDataSet* FDataSet;
	System::Generics::Collections::TList__1<TDataLink*>* FDataLinks;
	bool FEnabled;
	bool FAutoEdit;
	TDataSetState FState;
	System::Classes::TNotifyEvent FOnStateChange;
	TDataChangeEvent FOnDataChange;
	System::Classes::TNotifyEvent FOnUpdateData;
	void __fastcall AddDataLink(TDataLink* DataLink);
	void __fastcall DataEvent(TDataEvent Event, NativeInt Info);
	void __fastcall NotifyDataLinks(TDataEvent Event, NativeInt Info);
	void __fastcall NotifyLinkTypes(TDataEvent Event, NativeInt Info, bool LinkType);
	void __fastcall RemoveDataLink(TDataLink* DataLink);
	void __fastcall SetDataSet(TDataSet* ADataSet);
	void __fastcall SetEnabled(bool Value);
	void __fastcall SetState(TDataSetState Value);
	void __fastcall UpdateState();
	
protected:
	__property System::Generics::Collections::TList__1<TDataLink*>* DataLinks = {read=FDataLinks};
	
public:
	__fastcall virtual TDataSource(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDataSource();
	void __fastcall Edit();
	bool __fastcall IsLinkedTo(TDataSet* DataSet);
	__property TDataSetState State = {read=FState, nodefault};
	
__published:
	__property bool AutoEdit = {read=FAutoEdit, write=FAutoEdit, default=1};
	__property TDataSet* DataSet = {read=FDataSet, write=SetDataSet};
	__property bool Enabled = {read=FEnabled, write=SetEnabled, default=1};
	__property System::Classes::TNotifyEvent OnStateChange = {read=FOnStateChange, write=FOnStateChange};
	__property TDataChangeEvent OnDataChange = {read=FOnDataChange, write=FOnDataChange};
	__property System::Classes::TNotifyEvent OnUpdateData = {read=FOnUpdateData, write=FOnUpdateData};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TDataSetDesigner : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TDataSet* FDataSet;
	bool FSaveActive;
	
public:
	__fastcall virtual TDataSetDesigner(TDataSet* DataSet);
	__fastcall virtual ~TDataSetDesigner();
	void __fastcall BeginDesign();
	virtual void __fastcall DataEvent(TDataEvent Event, NativeInt Info);
	void __fastcall EndDesign();
	__property TDataSet* DataSet = {read=FDataSet};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCheckConstraint : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FImportedConstraint;
	System::UnicodeString FCustomConstraint;
	System::UnicodeString FErrorMessage;
	bool FFromDictionary;
	void __fastcall SetImportedConstraint(const System::UnicodeString Value);
	void __fastcall SetCustomConstraint(const System::UnicodeString Value);
	void __fastcall SetErrorMessage(const System::UnicodeString Value);
	
public:
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	virtual System::UnicodeString __fastcall GetDisplayName();
	
__published:
	__property System::UnicodeString CustomConstraint = {read=FCustomConstraint, write=SetCustomConstraint};
	__property System::UnicodeString ErrorMessage = {read=FErrorMessage, write=SetErrorMessage};
	__property bool FromDictionary = {read=FFromDictionary, write=FFromDictionary, nodefault};
	__property System::UnicodeString ImportedConstraint = {read=FImportedConstraint, write=SetImportedConstraint};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TCheckConstraint(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TCheckConstraint() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCheckConstraintClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCheckConstraintClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCheckConstraints : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TCheckConstraint* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FOwner;
	HIDESBASE TCheckConstraint* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TCheckConstraint* Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual TCheckConstraintClass __fastcall GetCheckConstraintClass();
	
public:
	__fastcall virtual TCheckConstraints(System::Classes::TPersistent* Owner);
	HIDESBASE TCheckConstraint* __fastcall Add();
	__property TCheckConstraint* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TCheckConstraints() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCheckConstraintsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCheckConstraintsClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::DynamicArray<System::Byte> TBlobData;
#else /* _WIN64 */
typedef System::TArray__1<System::Byte> TBlobData;
#endif /* _WIN64 */

enum DECLSPEC_DENUM TParamType : unsigned char { ptUnknown, ptInput, ptOutput, ptInputOutput, ptResult };

typedef System::Set<TParamType, TParamType::ptUnknown, TParamType::ptResult> TParamTypes;

#ifndef _WIN64
typedef System::TMetaClass* TParamObjectClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TParamObjectClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TParam : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	TParam* FParamRef;
	System::UnicodeString FNativeStr;
	System::Variant FData;
	int FPrecision;
	int FNumericScale;
	bool FNull;
	System::UnicodeString FName;
	TFieldType FDataType;
	bool FBound;
	TParamType FParamType;
	int FSize;
	TParamObjectClass FParamObjectClass;
	TParam* __fastcall ParamRef();
	TDataSet* __fastcall GetDataSet();
	bool __fastcall IsParamStored();
	TFieldType __fastcall GetDataType();
	TParamType __fastcall GetParamType();
	void __fastcall SetParamType(TParamType Value);
#ifndef _WIN64
	void __fastcall GetStreamData(System::DynamicArray<System::Byte> Buffer)/* overload */;
#else /* _WIN64 */
	void __fastcall GetStreamData(System::TArray__1<System::Byte> Buffer)/* overload */;
#endif /* _WIN64 */
	void __fastcall GetStreamData(void * Buffer)/* overload */;
	
protected:
	void __fastcall AssignParam(TParam* Param);
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	Data::Fmtbcd::TBcd __fastcall GetAsFMTBCD();
	System::Currency __fastcall GetAsBCD();
	bool __fastcall GetAsBoolean();
	System::TDateTime __fastcall GetAsDateTime();
	Data::Sqltimst::TSQLTimeStamp __fastcall GetAsSQLTimeStamp();
	Data::Sqltimst::TSQLTimeStampOffset __fastcall GetAsSQLTimeStampOffset();
	System::Currency __fastcall GetAsCurrency();
	float __fastcall GetAsSingle();
	double __fastcall GetAsFloat();
	int __fastcall GetAsInteger();
	unsigned __fastcall GetAsLongWord();
	__int64 __fastcall GetAsLargeInt();
	System::UnicodeString __fastcall GetAsMemo();
	System::UnicodeString __fastcall GetAsString();
	System::UnicodeString __fastcall GetAsWideString();
	System::AnsiString __fastcall GetAsAnsiString();
	System::Variant __fastcall GetAsVariant();
#ifndef _WIN64
	System::DynamicArray<System::Byte> __fastcall GetAsBytes();
#else /* _WIN64 */
	System::TArray__1<System::Byte> __fastcall GetAsBytes();
#endif /* _WIN64 */
	TDataSet* __fastcall GetAsDataset();
	TParams* __fastcall GetAsParams();
	System::Classes::TStream* __fastcall GetAsStream();
	System::TObject* __fastcall GetAsObject();
	GUID __fastcall GetAsGuid();
	bool __fastcall GetIsNull();
	_di_IParamObject __fastcall GetParamObject();
	bool __fastcall HasParamObject(const System::TClass ObjectType);
	bool __fastcall IsEqual(TParam* Value);
	void __fastcall SetAsBCD(const System::Currency Value);
	void __fastcall SetAsFMTBCD(const Data::Fmtbcd::TBcd &Value);
#ifndef _WIN64
	void __fastcall SetAsBlob(const System::DynamicArray<System::Byte> Value);
#else /* _WIN64 */
	void __fastcall SetAsBlob(const System::TArray__1<System::Byte> Value);
#endif /* _WIN64 */
	void __fastcall SetAsBoolean(const bool Value);
	void __fastcall SetAsCurrency(const System::Currency Value);
	void __fastcall SetAsDate(const System::TDateTime Value);
	void __fastcall SetAsDateTime(const System::TDateTime Value);
	void __fastcall SetAsSQLTimeStamp(const Data::Sqltimst::TSQLTimeStamp &Value);
	void __fastcall SetAsSQLTimeStampOffset(const Data::Sqltimst::TSQLTimeStampOffset &Value);
	void __fastcall SetAsSingle(const float Value);
	void __fastcall SetAsFloat(const double Value);
	void __fastcall SetAsLongWord(const unsigned Value);
	void __fastcall SetAsInteger(const int Value);
	void __fastcall SetAsLargeInt(const __int64 Value);
	void __fastcall SetAsMemo(const System::UnicodeString Value);
	void __fastcall SetAsString(const System::UnicodeString Value);
	void __fastcall SetAsWideString(const System::UnicodeString Value);
	void __fastcall SetAsAnsiString(const System::AnsiString Value);
#ifndef _WIN64
	void __fastcall SetAsBytes(const System::DynamicArray<System::Byte> Value);
#else /* _WIN64 */
	void __fastcall SetAsBytes(const System::TArray__1<System::Byte> Value);
#endif /* _WIN64 */
	void __fastcall SetAsSmallInt(const int Value);
	void __fastcall SetAsShortInt(const int Value);
	void __fastcall SetAsByte(const int Value);
	void __fastcall SetAsTime(const System::TDateTime Value);
	void __fastcall SetAsVariant(const System::Variant &Value);
	void __fastcall SetAsWord(const int Value);
	void __fastcall SetAsDataSet(TDataSet* const Value);
	void __fastcall SetAsParams(TParams* const Value);
	void __fastcall SetAsStream(System::Classes::TStream* const Value);
	void __fastcall SetAsGuid(const GUID &Value);
	void __fastcall SetDataType(TFieldType Value);
	void __fastcall SetText(const System::UnicodeString Value);
	virtual System::UnicodeString __fastcall GetDisplayName();
	__property TDataSet* DataSet = {read=GetDataSet};
	void __fastcall SetAsObject(System::TObject* const Value);
	
public:
	__fastcall virtual TParam(System::Classes::TCollection* Collection)/* overload */;
	__fastcall TParam(TParams* AParams, TParamType AParamType)/* overload */;
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	void __fastcall AssignField(TField* Field);
	void __fastcall AssignFieldValue(TField* Field, const System::Variant &Value);
	void __fastcall Clear();
#ifndef _WIN64
	void __fastcall GetData(System::DynamicArray<System::Byte> Buffer)/* overload */;
#else /* _WIN64 */
	void __fastcall GetData(System::TArray__1<System::Byte> Buffer)/* overload */;
#endif /* _WIN64 */
	void __fastcall GetData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer)/* overload */;
	int __fastcall GetDataSize();
	void __fastcall LoadFromFile(const System::UnicodeString FileName, TBlobType BlobType);
	void __fastcall LoadFromStream(System::Classes::TStream* Stream, TBlobType BlobType);
#ifndef _WIN64
	void __fastcall SetBlobData(System::DynamicArray<System::Byte> Buffer, int Size)/* overload */;
#else /* _WIN64 */
	void __fastcall SetBlobData(System::TArray__1<System::Byte> Buffer, int Size)/* overload */;
#endif /* _WIN64 */
	void __fastcall SetBlobData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer, int Size)/* overload */;
	void __fastcall SetDataSet(TDataSet* Dataset, bool AInstanceOwner);
	_di_IParamObject __fastcall SetObjectValue(System::TObject* const AInstance, const TFieldType ADataType, bool AInstanceOwner);
	void __fastcall SetParams(TParams* Params, bool AInstanceOwner);
	void __fastcall SetStream(System::Classes::TStream* Stream, bool AInstanceOwner, int KnownSize = 0x0);
#ifndef _WIN64
	void __fastcall SetData(System::DynamicArray<System::Byte> Buffer)/* overload */;
#else /* _WIN64 */
	void __fastcall SetData(System::TArray__1<System::Byte> Buffer)/* overload */;
#endif /* _WIN64 */
	void __fastcall SetData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer)/* overload */;
	__property System::Currency AsBCD = {read=GetAsBCD, write=SetAsBCD};
	__property Data::Fmtbcd::TBcd AsFMTBCD = {read=GetAsFMTBCD, write=SetAsFMTBCD};
#ifndef _WIN64
	__property System::DynamicArray<System::Byte> AsBlob = {read=GetAsBytes, write=SetAsBlob};
#else /* _WIN64 */
	__property System::TArray__1<System::Byte> AsBlob = {read=GetAsBytes, write=SetAsBlob};
#endif /* _WIN64 */
	__property bool AsBoolean = {read=GetAsBoolean, write=SetAsBoolean, nodefault};
	__property System::Currency AsCurrency = {read=GetAsCurrency, write=SetAsCurrency};
	__property System::TDateTime AsDate = {read=GetAsDateTime, write=SetAsDate};
	__property System::TDateTime AsDateTime = {read=GetAsDateTime, write=SetAsDateTime};
	__property float AsSingle = {read=GetAsSingle, write=SetAsSingle};
	__property double AsFloat = {read=GetAsFloat, write=SetAsFloat};
	__property int AsInteger = {read=GetAsInteger, write=SetAsInteger, nodefault};
	__property int AsSmallInt = {read=GetAsInteger, write=SetAsSmallInt, nodefault};
	__property int AsShortInt = {read=GetAsInteger, write=SetAsShortInt, nodefault};
	__property int AsByte = {read=GetAsInteger, write=SetAsByte, nodefault};
	__property unsigned AsLongWord = {read=GetAsLongWord, write=SetAsLongWord, nodefault};
	__property __int64 AsLargeInt = {read=GetAsLargeInt, write=SetAsLargeInt};
	__property Data::Sqltimst::TSQLTimeStamp AsSQLTimeStamp = {read=GetAsSQLTimeStamp, write=SetAsSQLTimeStamp};
	__property Data::Sqltimst::TSQLTimeStampOffset AsSQLTimeStampOffset = {read=GetAsSQLTimeStampOffset, write=SetAsSQLTimeStampOffset};
	__property System::UnicodeString AsMemo = {read=GetAsMemo, write=SetAsMemo};
	__property System::UnicodeString AsString = {read=GetAsString, write=SetAsString};
	__property System::UnicodeString AsWideString = {read=GetAsWideString, write=SetAsWideString};
	__property System::AnsiString AsAnsiString = {read=GetAsAnsiString, write=SetAsAnsiString};
#ifndef _WIN64
	__property System::DynamicArray<System::Byte> AsBytes = {read=GetAsBytes, write=SetAsBytes};
#else /* _WIN64 */
	__property System::TArray__1<System::Byte> AsBytes = {read=GetAsBytes, write=SetAsBytes};
#endif /* _WIN64 */
	__property System::TDateTime AsTime = {read=GetAsDateTime, write=SetAsTime};
	__property int AsWord = {read=GetAsInteger, write=SetAsWord, nodefault};
	__property TDataSet* AsDataSet = {read=GetAsDataset, write=SetAsDataSet};
	__property System::TObject* AsObject = {read=GetAsObject, write=SetAsObject};
	__property TParams* AsParams = {read=GetAsParams, write=SetAsParams};
	__property System::Classes::TStream* AsStream = {read=GetAsStream, write=SetAsStream};
	__property GUID AsGuid = {read=GetAsGuid, write=SetAsGuid};
	__property bool Bound = {read=FBound, write=FBound, nodefault};
	__property bool IsNull = {read=GetIsNull, nodefault};
	__property System::UnicodeString NativeStr = {read=FNativeStr, write=FNativeStr};
	__property System::UnicodeString Text = {read=GetAsString, write=SetText};
	
__published:
	__property TFieldType DataType = {read=GetDataType, write=SetDataType, nodefault};
	__property int Precision = {read=FPrecision, write=FPrecision, default=0};
	__property int NumericScale = {read=FNumericScale, write=FNumericScale, default=0};
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property TParamType ParamType = {read=GetParamType, write=SetParamType, nodefault};
	__property int Size = {read=FSize, write=FSize, default=0};
	__property System::Variant Value = {read=GetAsVariant, write=SetAsVariant, stored=IsParamStored};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TParam() { }
	
};


#ifndef _WIN64
typedef System::TMetaClass* TParamClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TParamClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TParams : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TParam* operator[](int Index) { return this->Items[Index]; }
	
private:
	System::Classes::TPersistent* FOwner;
	System::Variant __fastcall GetParamValue(const System::UnicodeString ParamName);
	void __fastcall ReadBinaryData(System::Classes::TStream* Stream);
	void __fastcall SetParamValue(const System::UnicodeString ParamName, const System::Variant &Value);
	HIDESBASE TParam* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TParam* Value);
	
protected:
	virtual void __fastcall AssignTo(System::Classes::TPersistent* Dest);
	virtual void __fastcall DefineProperties(System::Classes::TFiler* Filer);
	TDataSet* __fastcall GetDataSet();
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	virtual void __fastcall Update(System::Classes::TCollectionItem* Item);
	virtual TParamClass __fastcall GetParamClass();
	
public:
	__fastcall TParams(System::Classes::TPersistent* Owner)/* overload */;
	TParam* __fastcall AddParameter();
	void __fastcall AssignValues(TParams* Value);
	__fastcall TParams()/* overload */;
	void __fastcall AddParam(TParam* Value);
	void __fastcall RemoveParam(TParam* Value);
	TParam* __fastcall CreateParam(TFieldType FldType, const System::UnicodeString ParamName, TParamType ParamType);
	void __fastcall GetParamList(System::Generics::Collections::TList__1<TParam*>* List, const System::UnicodeString ParamNames)/* overload */;
	void __fastcall GetParamList _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::Classes::TList* List, const System::UnicodeString ParamNames)/* overload */;
	bool __fastcall IsEqual(TParams* Value);
	System::UnicodeString __fastcall ParseSQL(const System::UnicodeString SQL, bool DoCreate);
	TParam* __fastcall ParamByName(const System::UnicodeString Value);
	TParam* __fastcall FindParam(const System::UnicodeString Value);
	__property TParam* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property System::Variant ParamValues[const System::UnicodeString ParamName] = {read=GetParamValue, write=SetParamValue};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TParams() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TParamsClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TParamsClass);
#endif /* _WIN64 */

__interface  INTERFACE_UUID("{E4F74DF0-E318-4597-BEE3-9C391D0996A6}") IParamObject  : public System::IInterface 
{
	virtual TFieldType __fastcall GetDataType() = 0 ;
	virtual System::TObject* __fastcall GetInstance(bool ReleaseOwnership = true) = 0 ;
	virtual bool __fastcall InstanceIsType(const System::TClass ClassType) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TParamObject : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	System::TObject* FObject;
	TFieldType FDataType;
	bool FInstanceOwner;
	
protected:
	TFieldType __fastcall GetDataType();
	System::TObject* __fastcall GetInstance(bool ReleaseOwnership = true);
	bool __fastcall InstanceIsType(const System::TClass ClassType);
	
public:
	__fastcall virtual TParamObject(System::TObject* AObject, TFieldType ADataType, bool AInstanceOwner);
	__fastcall virtual ~TParamObject();
private:
	void *__IParamObject;	// IParamObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E4F74DF0-E318-4597-BEE3-9C391D0996A6}
	operator _di_IParamObject()
	{
		_di_IParamObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IParamObject*(void) { return (IParamObject*)&__IParamObject; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{7E69E6E7-E1DA-4DCC-8ED1-D91A7BC3E5CB}") IParamStreamObject  : public IParamObject 
{
	virtual System::Classes::TStream* __fastcall GetStream(bool ReleaseOwnership = true) = 0 ;
#ifndef _WIN64
	virtual System::DynamicArray<System::Byte> __fastcall GetBytes() = 0 ;
#else /* _WIN64 */
	virtual System::TArray__1<System::Byte> __fastcall GetBytes() = 0 ;
#endif /* _WIN64 */
	virtual void __fastcall SetKnownSize(int KnownSize) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TParamStreamObject : public TParamObject
{
	typedef TParamObject inherited;
	
private:
#ifndef _WIN64
	System::DynamicArray<System::Byte> FConvertedBytes;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FConvertedBytes;
#endif /* _WIN64 */
	int FKnownSize;
	
protected:
	System::Classes::TStream* __fastcall GetStream(bool ReleaseOwnership = true);
#ifndef _WIN64
	System::DynamicArray<System::Byte> __fastcall GetBytes();
#else /* _WIN64 */
	System::TArray__1<System::Byte> __fastcall GetBytes();
#endif /* _WIN64 */
	void __fastcall SetKnownSize(int KnownSize);
public:
	/* TParamObject.Create */ inline __fastcall virtual TParamStreamObject(System::TObject* AObject, TFieldType ADataType, bool AInstanceOwner) : TParamObject(AObject, ADataType, AInstanceOwner) { }
	/* TParamObject.Destroy */ inline __fastcall virtual ~TParamStreamObject() { }
	
private:
	void *__IParamStreamObject;	// IParamStreamObject 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7E69E6E7-E1DA-4DCC-8ED1-D91A7BC3E5CB}
	operator _di_IParamStreamObject()
	{
		_di_IParamStreamObject intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IParamStreamObject*(void) { return (IParamStreamObject*)&__IParamStreamObject; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TPSCommandType : unsigned char { ctUnknown, ctQuery, ctTable, ctStoredProc, ctServerMethod, ctSelect, ctInsert, ctUpdate, ctDelete, ctDDL };

typedef TPSCommandType TSQLCommandType;

typedef TPacketAttribute *PPacketAttribute;

struct DECLSPEC_DRECORD TPacketAttribute
{
public:
	System::UnicodeString Name;
	System::OleVariant Value;
	bool IncludeInDelta;
};


typedef System::Classes::TList TPacketAttributeList;

__interface  INTERFACE_UUID("{6C501EAF-4C52-4B7C-8040-5EE085009667}") IProviderSupportNG  : public System::IInterface 
{
	virtual void __fastcall PSEndTransaction(bool Commit) = 0 ;
	virtual void __fastcall PSExecute() = 0 ;
	virtual int __fastcall PSExecuteStatement(const System::UnicodeString ASQL, TParams* AParams) = 0 /* overload */;
	virtual int __fastcall PSExecuteStatement(const System::UnicodeString ASQL, TParams* AParams, TDataSet* &ResultSet) = 0 /* overload */;
	virtual void __fastcall PSGetAttributes(System::Classes::TList* List) = 0 ;
	virtual System::UnicodeString __fastcall PSGetCommandText() = 0 ;
	virtual TPSCommandType __fastcall PSGetCommandType() = 0 ;
	virtual TIndexDef* __fastcall PSGetDefaultOrder() = 0 ;
	virtual System::UnicodeString __fastcall PSGetKeyFields() = 0 ;
	virtual TParams* __fastcall PSGetParams() = 0 ;
	virtual System::UnicodeString __fastcall PSGetQuoteChar() = 0 ;
	virtual System::UnicodeString __fastcall PSGetTableName() = 0 ;
	virtual TIndexDefs* __fastcall PSGetIndexDefs(TIndexOptions IndexTypes = (TIndexOptions() << TIndexOption::ixPrimary << TIndexOption::ixUnique << TIndexOption::ixDescending << TIndexOption::ixCaseInsensitive << TIndexOption::ixExpression << TIndexOption::ixNonMaintained )) = 0 ;
	virtual EUpdateError* __fastcall PSGetUpdateException(System::Sysutils::Exception* E, EUpdateError* Prev) = 0 ;
	virtual bool __fastcall PSInTransaction() = 0 ;
	virtual bool __fastcall PSIsSQLBased() = 0 ;
	virtual bool __fastcall PSIsSQLSupported() = 0 ;
	virtual void __fastcall PSReset() = 0 ;
	virtual void __fastcall PSSetParams(TParams* AParams) = 0 ;
	virtual void __fastcall PSSetCommandText(const System::UnicodeString CommandText) = 0 ;
	virtual void __fastcall PSStartTransaction() = 0 ;
	virtual bool __fastcall PSUpdateRecord(TUpdateKind UpdateKind, TDataSet* Delta) = 0 ;
};

__interface  INTERFACE_UUID("{7AF8F684-0660-47B5-A1B3-E168D2ACB908}") IProviderSupport  _DEPRECATED_ATTRIBUTE1("Use IProviderSupportNG instead")  : public System::IInterface 
{
	virtual void __fastcall PSEndTransaction _DEPRECATED_ATTRIBUTE0 (bool Commit) = 0 ;
	virtual void __fastcall PSExecute _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual int __fastcall PSExecuteStatement _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString ASQL, TParams* AParams, void * ResultSet = (void *)(0x0)) = 0 ;
	virtual void __fastcall PSGetAttributes _DEPRECATED_ATTRIBUTE0 (System::Classes::TList* List) = 0 ;
	virtual System::UnicodeString __fastcall PSGetCommandText _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual TPSCommandType __fastcall PSGetCommandType _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual TIndexDef* __fastcall PSGetDefaultOrder _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual System::UnicodeString __fastcall PSGetKeyFields _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual TParams* __fastcall PSGetParams _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual System::UnicodeString __fastcall PSGetQuoteChar _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual System::UnicodeString __fastcall PSGetTableName _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual TIndexDefs* __fastcall PSGetIndexDefs _DEPRECATED_ATTRIBUTE0 (TIndexOptions IndexTypes = (TIndexOptions() << TIndexOption::ixPrimary << TIndexOption::ixUnique << TIndexOption::ixDescending << TIndexOption::ixCaseInsensitive << TIndexOption::ixExpression << TIndexOption::ixNonMaintained )) = 0 ;
	virtual EUpdateError* __fastcall PSGetUpdateException _DEPRECATED_ATTRIBUTE0 (System::Sysutils::Exception* E, EUpdateError* Prev) = 0 ;
	virtual bool __fastcall PSInTransaction _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual bool __fastcall PSIsSQLBased _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual bool __fastcall PSIsSQLSupported _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual void __fastcall PSReset _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual void __fastcall PSSetParams _DEPRECATED_ATTRIBUTE0 (TParams* AParams) = 0 ;
	virtual void __fastcall PSSetCommandText _DEPRECATED_ATTRIBUTE0 (const System::UnicodeString CommandText) = 0 ;
	virtual void __fastcall PSStartTransaction _DEPRECATED_ATTRIBUTE0 () = 0 ;
	virtual bool __fastcall PSUpdateRecord _DEPRECATED_ATTRIBUTE0 (TUpdateKind UpdateKind, TDataSet* Delta) = 0 ;
};

enum DECLSPEC_DENUM Data_Db__37 : unsigned char { dcSupported, dcEnabled };

typedef System::Set<Data_Db__37, Data_Db__37::dcSupported, Data_Db__37::dcEnabled> TDataSetCommandStates;

__interface  INTERFACE_UUID("{285C0B2D-C123-444A-9FD3-9C6D1DE3762B}") IDataSetCommandSupport  : public System::IInterface 
{
	virtual TDataSetCommandStates __fastcall GetCommandStates(const System::UnicodeString ACommand) = 0 ;
	virtual void __fastcall ExecuteCommand(const System::UnicodeString ACommand, const System::TVarRec *Args, const int Args_High) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFieldOptions : public System::Classes::TPersistent
{
	typedef System::Classes::TPersistent inherited;
	
private:
	TDataSet* FDataSet;
	TFieldsAutoCreationMode FAutoCreateMode;
	TFieldsPositionMode FPositionMode;
	bool FUpdatePersistent;
	void __fastcall SetAutoCreateMode(const TFieldsAutoCreationMode Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TFieldOptions(TDataSet* DataSet);
	virtual void __fastcall Assign(System::Classes::TPersistent* Source);
	
__published:
	__property TFieldsAutoCreationMode AutoCreateMode = {read=FAutoCreateMode, write=SetAutoCreateMode, default=0};
	__property TFieldsPositionMode PositionMode = {read=FPositionMode, write=FPositionMode, default=0};
	__property bool UpdatePersistent = {read=FUpdatePersistent, write=FUpdatePersistent, default=0};
public:
	/* TPersistent.Destroy */ inline __fastcall virtual ~TFieldOptions() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::DynamicArray<System::Byte> TBookmark;
#else /* _WIN64 */
typedef System::TArray__1<System::Byte> TBookmark;
#endif /* _WIN64 */

typedef System::AnsiString TBookmarkStr;

enum DECLSPEC_DENUM TBookmarkFlag : unsigned char { bfCurrent, bfBOF, bfEOF, bfInserted };

typedef TBookmarkFlag *PBookmarkFlag;

typedef System::PByte TRecordBuffer;

typedef System::DynamicArray<System::PByte> TBufferList;

typedef NativeInt TRecBuf;

#ifndef _WIN64
typedef System::DynamicArray<NativeInt> TBufList;
#else /* _WIN64 */
typedef System::TArray__1<NativeInt> TBufList;
#endif /* _WIN64 */

enum DECLSPEC_DENUM TGetMode : unsigned char { gmCurrent, gmNext, gmPrior };

enum DECLSPEC_DENUM TGetResult : unsigned char { grOK, grBOF, grEOF, grError };

enum DECLSPEC_DENUM Data_Db__57 : unsigned char { rmExact, rmCenter };

typedef System::Set<Data_Db__57, Data_Db__57::rmExact, Data_Db__57::rmCenter> TResyncMode;

enum DECLSPEC_DENUM TDataAction : unsigned char { daFail, daAbort, daRetry };

enum DECLSPEC_DENUM TBlobStreamMode : unsigned char { bmRead, bmWrite, bmReadWrite };

enum DECLSPEC_DENUM TLocateOption : unsigned char { loCaseInsensitive, loPartialKey };

typedef System::Set<TLocateOption, TLocateOption::loCaseInsensitive, TLocateOption::loPartialKey> TLocateOptions;

typedef void __fastcall (__closure *TDataOperation)(void);

typedef void __fastcall (__closure *TDataSetNotifyEvent)(TDataSet* DataSet);

typedef void __fastcall (__closure *TDataSetErrorEvent)(TDataSet* DataSet, EDatabaseError* E, TDataAction &Action);

enum DECLSPEC_DENUM TFilterOption : unsigned char { foCaseInsensitive, foNoPartialCompare };

typedef System::Set<TFilterOption, TFilterOption::foCaseInsensitive, TFilterOption::foNoPartialCompare> TFilterOptions;

typedef void __fastcall (__closure *TFilterRecordEvent)(TDataSet* DataSet, bool &Accept);

#ifndef _WIN64
typedef System::DynamicArray<System::Byte> TBlobByteData;
#else /* _WIN64 */
typedef System::TArray__1<System::Byte> TBlobByteData;
#endif /* _WIN64 */

enum DECLSPEC_DENUM TGroupPosInd : unsigned char { gbFirst, gbMiddle, gbLast };

typedef System::Set<TGroupPosInd, TGroupPosInd::gbFirst, TGroupPosInd::gbLast> TGroupPosInds;

#ifndef _WIN64
typedef System::TMetaClass* TDataSetClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TDataSetClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TDataSet : public System::Classes::TComponent
{
	typedef System::Classes::TComponent inherited;
	
public:
	System::Variant operator[](const System::UnicodeString FieldName) { return this->FieldValues[FieldName]; }
	
private:
	TFields* FFields;
	TFields* FAggFields;
	TFieldDefs* FFieldDefs;
	TFieldDefList* FFieldDefList;
	TFieldList* FFieldList;
	System::Generics::Collections::TList__1<TDataSource*>* FDataSources;
	TDataLink* FFirstDataLink;
	int FBufferCount;
	int FRecordCount;
	int FActiveRecord;
	int FCurrentRecord;
#ifndef _WIN64
	System::DynamicArray<NativeInt> FBuffers;
#else /* _WIN64 */
	System::TArray__1<NativeInt> FBuffers;
#endif /* _WIN64 */
	NativeInt FCalcBuffer;
	int FBookmarkSize;
	int FCalcFieldsSize;
	TDataSetDesigner* FDesigner;
	int FDisableCount;
	int FBlobFieldCount;
	System::UnicodeString FFilterText;
	int FBlockReadSize;
	TCheckConstraints* FConstraints;
	TDataSetField* FDataSetField;
	bool FIsUniDirectional;
	System::Generics::Collections::TList__1<TDataSet*>* FNestedDataSets;
	TDataSetClass FNestedDatasetClass;
	int FFieldNoOfs;
	TFilterOptions FFilterOptions;
	TDataSetState FState;
	TDataEvent FEnableEvent;
	TDataSetState FDisableState;
	bool FBOF;
	bool FEOF;
	bool FModified;
	bool FStreamedActive;
	bool FInternalCalcFields;
	bool FFound;
	bool FAutomaticFieldsScope;
	bool FAutoCalcFields;
	bool FFiltered;
	bool FObjectView;
	bool FSparseArrays;
	bool FInternalOpenComplete;
	TFieldOptions* FFieldOptions;
	int FIOBufferSize;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FIOSharedBuffer;
	System::DynamicArray<System::Byte> FIOTempBuffer;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FIOSharedBuffer;
	System::TArray__1<System::Byte> FIOTempBuffer;
#endif /* _WIN64 */
	TDataSetNotifyEvent FBeforeOpen;
	TDataSetNotifyEvent FAfterOpen;
	TDataSetNotifyEvent FBeforeClose;
	TDataSetNotifyEvent FAfterClose;
	TDataSetNotifyEvent FBeforeInsert;
	TDataSetNotifyEvent FAfterInsert;
	TDataSetNotifyEvent FBeforeEdit;
	TDataSetNotifyEvent FAfterEdit;
	TDataSetNotifyEvent FBeforePost;
	TDataSetNotifyEvent FAfterPost;
	TDataSetNotifyEvent FBeforeCancel;
	TDataSetNotifyEvent FAfterCancel;
	TDataSetNotifyEvent FBeforeDelete;
	TDataSetNotifyEvent FAfterDelete;
	TDataSetNotifyEvent FBeforeRefresh;
	TDataSetNotifyEvent FAfterRefresh;
	TDataSetNotifyEvent FBeforeScroll;
	TDataSetNotifyEvent FAfterScroll;
	TDataSetNotifyEvent FOnNewRecord;
	TDataSetNotifyEvent FOnCalcFields;
	TDataSetErrorEvent FOnEditError;
	TDataSetErrorEvent FOnPostError;
	TDataSetErrorEvent FOnDeleteError;
	TFilterRecordEvent FOnFilterRecord;
	void __fastcall AddDataSource(TDataSource* DataSource);
	void __fastcall AddRecord(const System::TVarRec *Values, const int Values_High, bool Append);
	void __fastcall BeginInsertAppend();
	void __fastcall CheckCanModify();
	void __fastcall CheckOperation(TDataOperation Operation, TDataSetErrorEvent ErrorEvent);
	void __fastcall CheckParentState();
	void __fastcall CheckRequiredFields();
	void __fastcall DoInternalOpen();
	void __fastcall EndInsertAppend();
	bool __fastcall GetActive();
	NativeInt __fastcall GetBuffer(int Index);
	int __fastcall GetFieldCount();
	System::Variant __fastcall GetFieldValue(const System::UnicodeString FieldName);
	bool __fastcall GetFound();
	System::Generics::Collections::TList__1<TDataSet*>* __fastcall GetNestedDataSets();
	void __fastcall MoveBuffer(int CurIndex, int NewIndex);
	void __fastcall RemoveDataSource(TDataSource* DataSource);
	void __fastcall SetBufferCount(int Value);
	void __fastcall SetConstraints(TCheckConstraints* Value);
	void __fastcall SetFieldDefs(TFieldDefs* Value);
	void __fastcall SetFieldValue(const System::UnicodeString FieldName, const System::Variant &Value);
	void __fastcall SetSparseArrays(bool Value);
	void __fastcall SetFieldOptions(TFieldOptions* const Value);
	
protected:
	virtual int __fastcall PSExecuteStatement(const System::UnicodeString ASQL, TParams* AParams)/* overload */;
	virtual int __fastcall PSExecuteStatement(const System::UnicodeString ASQL, TParams* AParams, TDataSet* &ResultSet)/* overload */;
	virtual int __fastcall PSExecuteStatement _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (const System::UnicodeString ASQL, TParams* AParams, void * ResultSet)/* overload */;
	virtual System::UnicodeString __fastcall PSGetCommandText();
	virtual System::UnicodeString __fastcall PSGetKeyFields();
	virtual System::UnicodeString __fastcall PSGetQuoteChar();
	virtual System::UnicodeString __fastcall PSGetTableName();
	virtual void __fastcall PSSetCommandText(const System::UnicodeString CommandText);
	virtual void __fastcall PSEndTransaction(bool Commit);
	virtual void __fastcall PSExecute();
	virtual void __fastcall PSGetAttributes(System::Classes::TList* List);
	virtual TPSCommandType __fastcall PSGetCommandType();
	virtual TIndexDef* __fastcall PSGetDefaultOrder();
	virtual TParams* __fastcall PSGetParams();
	virtual TIndexDefs* __fastcall PSGetIndexDefs(TIndexOptions IndexTypes);
	virtual EUpdateError* __fastcall PSGetUpdateException(System::Sysutils::Exception* E, EUpdateError* Prev);
	virtual bool __fastcall PSInTransaction();
	virtual bool __fastcall PSIsSQLBased();
	virtual bool __fastcall PSIsSQLSupported();
	virtual void __fastcall PSReset();
	virtual void __fastcall PSSetParams(TParams* AParams);
	virtual void __fastcall PSStartTransaction();
	virtual bool __fastcall PSUpdateRecord(TUpdateKind UpdateKind, TDataSet* Delta);
	virtual TLookupListClass __fastcall GetLookupListClass(TField* Field);
	virtual void __fastcall ResetAggField(TField* Field);
	virtual void __fastcall BindFields(bool Binding);
	bool __fastcall BookmarkAvailable();
	virtual void __fastcall CalculateFields(NativeInt Buffer)/* overload */;
	virtual void __fastcall CalculateFields _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
	virtual void __fastcall CheckActive();
	void __fastcall CheckBiDirectional();
	virtual void __fastcall CheckFieldCompatibility(TField* Field, TFieldDef* FieldDef);
	virtual void __fastcall CheckInactive();
	virtual void __fastcall ClearBuffers();
	virtual void __fastcall ClearCalcFields(NativeInt Buffer)/* overload */;
	virtual void __fastcall ClearCalcFields _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
	virtual void __fastcall CloseBlob(TField* Field);
	virtual void __fastcall CloseCursor();
	virtual void __fastcall CreateFields();
	virtual TDataSet* __fastcall CreateNestedDataSet(TDataSetField* DataSetField);
#ifndef _WIN64
	virtual void __fastcall DataConvert(TField* Field, System::DynamicArray<System::Byte> Source, System::DynamicArray<System::Byte> &Dest, bool ToNative)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall DataConvert(TField* Field, System::TArray__1<System::Byte> Source, System::TArray__1<System::Byte> &Dest, bool ToNative)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall DataConvert _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (TField* Field, void * Source, void * Dest, bool ToNative)/* overload */;
	virtual void __fastcall DataEvent(TDataEvent Event, NativeInt Info);
	virtual void __fastcall DefChanged(System::TObject* Sender);
	virtual void __fastcall DestroyFields();
	virtual void __fastcall DoAfterCancel();
	virtual void __fastcall DoAfterClose();
	virtual void __fastcall DoAfterDelete();
	virtual void __fastcall DoAfterEdit();
	virtual void __fastcall DoAfterInsert();
	virtual void __fastcall DoAfterOpen();
	virtual void __fastcall DoAfterPost();
	virtual void __fastcall DoAfterRefresh();
	virtual void __fastcall DoAfterScroll();
	virtual void __fastcall DoBeforeCancel();
	virtual void __fastcall DoBeforeClose();
	virtual void __fastcall DoBeforeDelete();
	virtual void __fastcall DoBeforeEdit();
	virtual void __fastcall DoBeforeInsert();
	virtual void __fastcall DoBeforeOpen();
	virtual void __fastcall DoBeforePost();
	virtual void __fastcall DoBeforeRefresh();
	virtual void __fastcall DoBeforeScroll();
	virtual void __fastcall DoOnCalcFields();
	virtual void __fastcall DoOnNewRecord();
	TField* __fastcall FieldByNumber(int FieldNo);
	virtual bool __fastcall FindRecord(bool Restart, bool GoForward);
	virtual void __fastcall FreeFieldBuffers();
	virtual System::Variant __fastcall GetAggregateValue(TField* Field);
	virtual int __fastcall GetAggRecordCount(TGroupPosInd Grp);
	virtual void __fastcall ActivateBuffers();
	virtual void __fastcall GetCalcFields(NativeInt Buffer)/* overload */;
	virtual System::AnsiString __fastcall GetBookmarkStr _DEPRECATED_ATTRIBUTE0 ();
	virtual void __fastcall GetCalcFields _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
	virtual TFieldTypes __fastcall GetCalcFieldTypes();
	virtual bool __fastcall GetCanModify();
	virtual bool __fastcall GetCanRefresh();
	DYNAMIC void __fastcall GetChildren(System::Classes::TGetChildProc Proc, System::Classes::TComponent* Root);
	virtual TDataSource* __fastcall GetDataSource();
	virtual TFieldClass __fastcall GetFieldClass(TFieldType FieldType)/* overload */;
	virtual TFieldClass __fastcall GetFieldClass(TFieldDef* FieldDef)/* overload */;
	virtual System::UnicodeString __fastcall GetFieldFullName(TField* Field);
	virtual System::Variant __fastcall GetStateFieldValue(TDataSetState State, TField* Field);
	virtual bool __fastcall GetIsIndexField(TField* Field);
	TIndexDefs* __fastcall GetIndexDefs(TIndexDefs* IndexDefs, TIndexOptions IndexTypes);
	virtual bool __fastcall GetModifiedBlobCached();
	virtual int __fastcall GetNextRecords();
	virtual bool __fastcall GetNextRecord();
	virtual int __fastcall GetPriorRecords();
	virtual bool __fastcall GetPriorRecord();
	virtual int __fastcall GetRecordCount();
	virtual int __fastcall GetRecNo();
	virtual void __fastcall InitFieldDefs();
	void __fastcall InitFieldDefsFromFields();
	virtual void __fastcall InitRecord(NativeInt Buffer)/* overload */;
	virtual void __fastcall InitRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
	virtual void __fastcall InternalCancel();
	virtual void __fastcall InternalEdit();
	virtual void __fastcall InternalInsert();
	virtual void __fastcall InternalRefresh();
	virtual void __fastcall Loaded();
	virtual void __fastcall OpenCursor(bool InfoQuery = false);
	void __fastcall OpenCursorComplete();
	void __fastcall OpenParentDataSet(TDataSet* ParentDataSet);
	virtual void __fastcall RefreshInternalCalcFields(NativeInt Buffer)/* overload */;
	virtual void __fastcall RefreshInternalCalcFields _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
	void __fastcall RestoreState(const TDataSetState Value);
	virtual void __fastcall BlockReadNext();
	virtual void __fastcall SetActive(bool Value);
	virtual void __fastcall SetBookmarkStr _DEPRECATED_ATTRIBUTE0 (const System::AnsiString Value);
	virtual void __fastcall SetBlockReadSize(int Value);
	virtual void __fastcall SetBufListSize(int Value);
	void __fastcall SetBof(bool Value);
	void __fastcall SetEof(bool Value);
	DYNAMIC void __fastcall SetChildOrder(System::Classes::TComponent* Component, int Order);
	virtual void __fastcall SetCurrentRecord(int Index);
	virtual void __fastcall SetDataSetField(TDataSetField* const Value);
	void __fastcall SetDefaultFields _DEPRECATED_ATTRIBUTE1("Use TField.LifeCycle or TFields.LifeCycles properties instead") (const bool Value);
	virtual void __fastcall SetFieldProps(TField* Field, TFieldDef* FieldDef);
	virtual void __fastcall SetFieldDefProps(TField* Field, TFieldDef* FieldDef);
	virtual void __fastcall SetFiltered(bool Value);
	virtual void __fastcall SetFilterOptions(TFilterOptions Value);
	virtual void __fastcall SetFilterText(const System::UnicodeString Value);
	void __fastcall SetFound(const bool Value);
	void __fastcall SetModified(bool Value);
	virtual void __fastcall SetName(const System::Classes::TComponentName Value);
	void __fastcall SetObjectView(const bool Value);
	virtual void __fastcall SetOnFilterRecord(const TFilterRecordEvent Value);
	virtual void __fastcall SetRecNo(int Value);
	void __fastcall SetState(TDataSetState Value);
	virtual void __fastcall SetStateFieldValue(TDataSetState State, TField* Field, const System::Variant &Value);
	bool __fastcall SetValidatingField(const bool Value, TField* Field);
	TDataSetState __fastcall SetTempState(const TDataSetState Value);
	void __fastcall SetUniDirectional(const bool Value);
	NativeInt __fastcall TempBuffer();
	void __fastcall UpdateBufferCount();
	virtual void __fastcall UpdateIndexDefs();
	__property int ActiveRecord = {read=FActiveRecord, nodefault};
	__property int CurrentRecord = {read=FCurrentRecord, nodefault};
	__property int BlobFieldCount = {read=FBlobFieldCount, nodefault};
	__property int BookmarkSize = {read=FBookmarkSize, write=FBookmarkSize, nodefault};
	__property NativeInt Buffers[int Index] = {read=GetBuffer};
	__property int BufferCount = {read=FBufferCount, nodefault};
#ifndef _WIN64
	__property NativeInt CalcBuffer = {read=FCalcBuffer, nodefault};
#else /* _WIN64 */
	__property NativeInt CalcBuffer = {read=FCalcBuffer};
#endif /* _WIN64 */
	__property int CalcFieldsSize = {read=FCalcFieldsSize, nodefault};
	__property TCheckConstraints* Constraints = {read=FConstraints, write=SetConstraints};
	__property int FieldNoOfs = {read=FFieldNoOfs, write=FFieldNoOfs, nodefault};
	__property TFieldOptions* FieldOptions = {read=FFieldOptions, write=SetFieldOptions};
	__property bool InternalCalcFields = {read=FInternalCalcFields, nodefault};
	__property System::Generics::Collections::TList__1<TDataSet*>* NestedDataSets = {read=GetNestedDataSets};
	__property TDataSetClass NestedDataSetClass = {read=FNestedDatasetClass, write=FNestedDatasetClass};
	__property int IOBufferSize = {read=FIOBufferSize, nodefault};
	virtual System::PByte __fastcall AllocRecordBuffer();
	virtual void __fastcall FreeRecordBuffer(System::PByte &Buffer);
#ifndef _WIN64
	virtual void __fastcall GetBookmarkData(NativeInt Buffer, System::DynamicArray<System::Byte> Data)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall GetBookmarkData(NativeInt Buffer, System::TArray__1<System::Byte> Data)/* overload */;
#endif /* _WIN64 */
	virtual TBookmarkFlag __fastcall GetBookmarkFlag(NativeInt Buffer)/* overload */;
	virtual System::Word __fastcall GetRecordSize();
	virtual void __fastcall InternalAddRecord(NativeInt Buffer, bool Append)/* overload */;
#ifndef _WIN64
	virtual void __fastcall GetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::DynamicArray<System::Byte> Data)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall GetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::TArray__1<System::Byte> Data)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall GetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, void * Data)/* overload */;
	virtual TBookmarkFlag __fastcall GetBookmarkFlag _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
	virtual void __fastcall InternalAddRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, bool Append)/* overload */;
	virtual void __fastcall InternalAddRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer, bool Append)/* overload */;
	virtual void __fastcall InternalDelete();
	virtual void __fastcall InternalFirst();
#ifndef _WIN64
	virtual void __fastcall InternalGotoBookmark(System::DynamicArray<System::Byte> Bookmark)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall InternalGotoBookmark(System::TArray__1<System::Byte> Bookmark)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall InternalInitRecord(NativeInt Buffer)/* overload */;
	virtual void __fastcall InternalGotoBookmark _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Bookmark)/* overload */;
	virtual void __fastcall InternalInitRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
	virtual void __fastcall InternalLast();
	virtual void __fastcall InternalPost();
	virtual void __fastcall InternalSetToRecord(NativeInt Buffer)/* overload */;
	virtual void __fastcall InternalSetToRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
#ifndef _WIN64
	virtual void __fastcall SetFieldData(TField* Field, System::DynamicArray<System::Byte> Buffer)/* overload */;
	virtual void __fastcall SetFieldData(TField* Field, System::DynamicArray<System::Byte> Buffer, bool NativeFormat)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall SetFieldData(TField* Field, System::TArray__1<System::Byte> Buffer)/* overload */;
	virtual void __fastcall SetFieldData(TField* Field, System::TArray__1<System::Byte> Buffer, bool NativeFormat)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall SetBookmarkFlag(NativeInt Buffer, TBookmarkFlag Value)/* overload */;
#ifndef _WIN64
	virtual void __fastcall SetBookmarkData(NativeInt Buffer, System::DynamicArray<System::Byte> Data)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall SetBookmarkData(NativeInt Buffer, System::TArray__1<System::Byte> Data)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall SetBookmarkFlag _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, TBookmarkFlag Value)/* overload */;
#ifndef _WIN64
	virtual void __fastcall SetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::DynamicArray<System::Byte> Data)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall SetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::TArray__1<System::Byte> Data)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall SetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, void * Data)/* overload */;
	virtual void __fastcall SetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (TField* Field, void * Buffer)/* overload */;
	virtual void __fastcall SetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (TField* Field, void * Buffer, bool NativeFormat)/* overload */;
	virtual TGetResult __fastcall GetRecord(NativeInt Buffer, TGetMode GetMode, bool DoCheck)/* overload */;
	virtual TGetResult __fastcall GetRecord(System::PByte Buffer, TGetMode GetMode, bool DoCheck) = 0 /* overload */;
	virtual void __fastcall InternalClose() = 0 ;
	virtual void __fastcall InternalHandleException() = 0 ;
	virtual void __fastcall InternalInitFieldDefs() = 0 ;
	virtual void __fastcall InternalOpen() = 0 ;
	virtual bool __fastcall IsCursorOpen() = 0 ;
	virtual TFieldDefsClass __fastcall GetFieldDefsClass();
	virtual TFieldDefListClass __fastcall GetFieldDefListClass();
	virtual TFieldsClass __fastcall GetFieldsClass();
	virtual TFieldListClass __fastcall GetFieldListClass();
	virtual TCheckConstraintsClass __fastcall GetCheckConstraintsClass();
	virtual TFieldsClass __fastcall GetAggFieldsClass();
	virtual TIndexDefsClass __fastcall GetIndexDefsClass();
	virtual TParamsClass __fastcall GetParamsClass();
	
public:
	__fastcall virtual TDataSet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TDataSet();
	NativeInt __fastcall ActiveBuffer();
	void __fastcall Append();
	void __fastcall AppendRecord(const System::TVarRec *Values, const int Values_High);
#ifndef _WIN64
	virtual bool __fastcall BookmarkValid(System::DynamicArray<System::Byte> Bookmark);
#else /* _WIN64 */
	virtual bool __fastcall BookmarkValid(System::TArray__1<System::Byte> Bookmark);
#endif /* _WIN64 */
	virtual void __fastcall Cancel();
	void __fastcall CheckBrowseMode();
	void __fastcall ClearFields();
	void __fastcall Close();
	bool __fastcall ControlsDisabled();
#ifndef _WIN64
	virtual int __fastcall CompareBookmarks(System::DynamicArray<System::Byte> Bookmark1, System::DynamicArray<System::Byte> Bookmark2);
#else /* _WIN64 */
	virtual int __fastcall CompareBookmarks(System::TArray__1<System::Byte> Bookmark1, System::TArray__1<System::Byte> Bookmark2);
#endif /* _WIN64 */
	virtual System::Classes::TStream* __fastcall CreateBlobStream(TField* Field, TBlobStreamMode Mode);
	void __fastcall CursorPosChanged();
	void __fastcall Delete();
	void __fastcall DisableControls();
	void __fastcall Edit();
	void __fastcall EnableControls();
	TField* __fastcall FieldByName(const System::UnicodeString FieldName);
	TField* __fastcall FindField(const System::UnicodeString FieldName);
	bool __fastcall FindFirst();
	bool __fastcall FindLast();
	bool __fastcall FindNext();
	bool __fastcall FindPrior();
	void __fastcall First();
#ifndef _WIN64
	virtual void __fastcall FreeBookmark(System::DynamicArray<System::Byte> Bookmark);
	virtual System::DynamicArray<System::Byte> __fastcall GetBookmark();
#else /* _WIN64 */
	virtual void __fastcall FreeBookmark(System::TArray__1<System::Byte> Bookmark);
	virtual System::TArray__1<System::Byte> __fastcall GetBookmark();
#endif /* _WIN64 */
	virtual TDataSet* __fastcall GetClonedDataSet(bool WithSettings);
	virtual bool __fastcall GetCurrentRecord(NativeInt Buffer)/* overload */;
	virtual bool __fastcall GetCurrentRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
	virtual void __fastcall GetDetailDataSets(System::Generics::Collections::TList__1<TDataSet*>* List)/* overload */;
	virtual void __fastcall GetDetailLinkFields(System::Generics::Collections::TList__1<TField*>* MasterFields, System::Generics::Collections::TList__1<TField*>* DetailFields)/* overload */;
#ifndef _WIN64
	virtual int __fastcall GetBlobFieldData(int FieldNo, System::DynamicArray<System::Byte> &Buffer);
	virtual bool __fastcall GetFieldData(TField* Field, System::DynamicArray<System::Byte> &Buffer)/* overload */;
	virtual bool __fastcall GetFieldData(int FieldNo, System::DynamicArray<System::Byte> &Buffer)/* overload */;
	virtual bool __fastcall GetFieldData(TField* Field, System::DynamicArray<System::Byte> &Buffer, bool NativeFormat)/* overload */;
#else /* _WIN64 */
	virtual int __fastcall GetBlobFieldData(int FieldNo, System::TArray__1<System::Byte> &Buffer);
	virtual bool __fastcall GetFieldData(TField* Field, System::TArray__1<System::Byte> &Buffer)/* overload */;
	virtual bool __fastcall GetFieldData(int FieldNo, System::TArray__1<System::Byte> &Buffer)/* overload */;
	virtual bool __fastcall GetFieldData(TField* Field, System::TArray__1<System::Byte> &Buffer, bool NativeFormat)/* overload */;
#endif /* _WIN64 */
	void __fastcall GetFieldList(System::Generics::Collections::TList__1<TField*>* List, const System::UnicodeString FieldNames)/* overload */;
	virtual void __fastcall GetDetailDataSets _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::Classes::TList* List)/* overload */;
	virtual void __fastcall GetDetailLinkFields _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::Classes::TList* MasterFields, System::Classes::TList* DetailFields)/* overload */;
	virtual bool __fastcall GetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (TField* Field, void * Buffer)/* overload */;
	virtual bool __fastcall GetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (int FieldNo, void * Buffer)/* overload */;
	virtual bool __fastcall GetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (TField* Field, void * Buffer, bool NativeFormat)/* overload */;
	void __fastcall GetFieldList _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::Classes::TList* List, const System::UnicodeString FieldNames)/* overload */;
	virtual void __fastcall GetFieldNames(System::Classes::TStrings* List);
#ifndef _WIN64
	void __fastcall GotoBookmark(System::DynamicArray<System::Byte> Bookmark);
#else /* _WIN64 */
	void __fastcall GotoBookmark(System::TArray__1<System::Byte> Bookmark);
#endif /* _WIN64 */
	HIDESBASE void __fastcall Insert();
	void __fastcall InsertRecord(const System::TVarRec *Values, const int Values_High);
	bool __fastcall IsEmpty();
	bool __fastcall IsLinkedTo(TDataSource* DataSource);
	virtual bool __fastcall IsSequenced();
	void __fastcall Last();
	virtual bool __fastcall Locate(const System::UnicodeString KeyFields, const System::Variant &KeyValues, TLocateOptions Options);
	virtual System::Variant __fastcall Lookup(const System::UnicodeString KeyFields, const System::Variant &KeyValues, const System::UnicodeString ResultFields);
	virtual int __fastcall MoveBy(int Distance);
	void __fastcall Next();
	void __fastcall Open()/* overload */;
	virtual void __fastcall Post();
	void __fastcall Prior();
	void __fastcall Refresh();
	virtual void __fastcall Resync(TResyncMode Mode);
	void __fastcall SetFields(const System::TVarRec *Values, const int Values_High);
	int __fastcall CopyFields(TDataSet* Source);
	virtual int __fastcall Translate(char * Src, char * Dest, bool ToOem);
	void __fastcall UpdateCursorPos();
	void __fastcall UpdateRecord();
	virtual TUpdateStatus __fastcall UpdateStatus();
	__property TFields* AggFields = {read=FAggFields};
	__property bool Bof = {read=FBOF, nodefault};
#ifndef _WIN64
	__property System::DynamicArray<System::Byte> Bookmark = {read=GetBookmark, write=GotoBookmark};
#else /* _WIN64 */
	__property System::TArray__1<System::Byte> Bookmark = {read=GetBookmark, write=GotoBookmark};
#endif /* _WIN64 */
	__property bool CanModify = {read=GetCanModify, nodefault};
	__property bool CanRefresh = {read=GetCanRefresh, nodefault};
	__property TDataSetField* DataSetField = {read=FDataSetField, write=SetDataSetField};
	__property TDataSource* DataSource = {read=GetDataSource};
	bool __fastcall DefaultFields _DEPRECATED_ATTRIBUTE1("Use TField.LifeCycle or TFields.LifeCycles properties instead") ();
	__property TDataSetDesigner* Designer = {read=FDesigner};
	__property bool Eof = {read=FEOF, nodefault};
	__property int BlockReadSize = {read=FBlockReadSize, write=SetBlockReadSize, nodefault};
	__property int FieldCount = {read=GetFieldCount, nodefault};
	__property TFieldDefs* FieldDefs = {read=FFieldDefs, write=SetFieldDefs};
	__property TFieldDefList* FieldDefList = {read=FFieldDefList};
	__property TFields* Fields = {read=FFields};
	__property TFieldList* FieldList = {read=FFieldList};
	__property System::Variant FieldValues[const System::UnicodeString FieldName] = {read=GetFieldValue, write=SetFieldValue/*, default*/};
	__property bool Found = {read=GetFound, nodefault};
	__property bool IsUniDirectional = {read=FIsUniDirectional, default=0};
	__property bool Modified = {read=FModified, nodefault};
	__property bool ObjectView = {read=FObjectView, write=SetObjectView, nodefault};
	__property int RecordCount = {read=GetRecordCount, nodefault};
	__property int RecNo = {read=GetRecNo, write=SetRecNo, nodefault};
	__property System::Word RecordSize = {read=GetRecordSize, nodefault};
	__property bool SparseArrays = {read=FSparseArrays, write=SetSparseArrays, nodefault};
	__property TDataSetState State = {read=FState, nodefault};
	__property System::UnicodeString Filter = {read=FFilterText, write=SetFilterText};
	__property bool Filtered = {read=FFiltered, write=SetFiltered, default=0};
	__property TFilterOptions FilterOptions = {read=FFilterOptions, write=SetFilterOptions, default=0};
	__property bool Active = {read=GetActive, write=SetActive, default=0};
	__property bool AutoCalcFields = {read=FAutoCalcFields, write=FAutoCalcFields, default=1};
	__property TDataSetNotifyEvent BeforeOpen = {read=FBeforeOpen, write=FBeforeOpen};
	__property TDataSetNotifyEvent AfterOpen = {read=FAfterOpen, write=FAfterOpen};
	__property TDataSetNotifyEvent BeforeClose = {read=FBeforeClose, write=FBeforeClose};
	__property TDataSetNotifyEvent AfterClose = {read=FAfterClose, write=FAfterClose};
	__property TDataSetNotifyEvent BeforeInsert = {read=FBeforeInsert, write=FBeforeInsert};
	__property TDataSetNotifyEvent AfterInsert = {read=FAfterInsert, write=FAfterInsert};
	__property TDataSetNotifyEvent BeforeEdit = {read=FBeforeEdit, write=FBeforeEdit};
	__property TDataSetNotifyEvent AfterEdit = {read=FAfterEdit, write=FAfterEdit};
	__property TDataSetNotifyEvent BeforePost = {read=FBeforePost, write=FBeforePost};
	__property TDataSetNotifyEvent AfterPost = {read=FAfterPost, write=FAfterPost};
	__property TDataSetNotifyEvent BeforeCancel = {read=FBeforeCancel, write=FBeforeCancel};
	__property TDataSetNotifyEvent AfterCancel = {read=FAfterCancel, write=FAfterCancel};
	__property TDataSetNotifyEvent BeforeDelete = {read=FBeforeDelete, write=FBeforeDelete};
	__property TDataSetNotifyEvent AfterDelete = {read=FAfterDelete, write=FAfterDelete};
	__property TDataSetNotifyEvent BeforeScroll = {read=FBeforeScroll, write=FBeforeScroll};
	__property TDataSetNotifyEvent AfterScroll = {read=FAfterScroll, write=FAfterScroll};
	__property TDataSetNotifyEvent BeforeRefresh = {read=FBeforeRefresh, write=FBeforeRefresh};
	__property TDataSetNotifyEvent AfterRefresh = {read=FAfterRefresh, write=FAfterRefresh};
	__property TDataSetNotifyEvent OnCalcFields = {read=FOnCalcFields, write=FOnCalcFields};
	__property TDataSetErrorEvent OnDeleteError = {read=FOnDeleteError, write=FOnDeleteError};
	__property TDataSetErrorEvent OnEditError = {read=FOnEditError, write=FOnEditError};
	__property TFilterRecordEvent OnFilterRecord = {read=FOnFilterRecord, write=SetOnFilterRecord};
	__property TDataSetNotifyEvent OnNewRecord = {read=FOnNewRecord, write=FOnNewRecord};
	__property TDataSetErrorEvent OnPostError = {read=FOnPostError, write=FOnPostError};
private:
	void *__IProviderSupportNG;	// IProviderSupportNG 
	void *__IProviderSupport;	// IProviderSupport 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {6C501EAF-4C52-4B7C-8040-5EE085009667}
	operator _di_IProviderSupportNG()
	{
		_di_IProviderSupportNG intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IProviderSupportNG*(void) { return (IProviderSupportNG*)&__IProviderSupportNG; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {7AF8F684-0660-47B5-A1B3-E168D2ACB908}
	operator _di_IProviderSupport()
	{
		_di_IProviderSupport intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IProviderSupport*(void) { return (IProviderSupport*)&__IProviderSupport; }
	#endif
	
};


typedef TDateTimeRec *PDateTimeRec;

struct DECLSPEC_DRECORD TDateTimeRec
{
	
public:
	union
	{
		struct 
		{
			TDateTimeAlias DateTime;
		};
		struct 
		{
			int Time;
		};
		struct 
		{
			int Date;
		};
		
	};
};


typedef System::StaticArray<System::UnicodeString, 52> Data_Db__77;

enum DECLSPEC_DENUM TDBScreenCursor : unsigned char { dcrDefault, dcrHourGlass, dcrSQLWait, dcrOther };

__interface  INTERFACE_UUID("{29A1C508-6ADC-44CD-88DE-4F51B25D5995}") IDBScreen  : public System::IInterface 
{
	virtual TDBScreenCursor __fastcall GetCursor() = 0 ;
	virtual void __fastcall SetCursor(TDBScreenCursor Cursor) = 0 ;
	__property TDBScreenCursor Cursor = {read=GetCursor, write=SetCursor};
};

__interface  INTERFACE_UUID("{FAA0DF76-EC6A-48AA-9754-2D36DF815C0D}") IDBApplication  : public System::IInterface 
{
	virtual System::UnicodeString __fastcall GetTitle() = 0 ;
	virtual void __fastcall ProcessMessages() = 0 ;
	virtual void __fastcall SetTitle(const System::UnicodeString Value) = 0 ;
	__property System::UnicodeString Title = {read=GetTitle, write=SetTitle};
};

__interface  INTERFACE_UUID("{CC2448FB-B672-4BA2-93F7-77CBEDA815FE}") IDBSession  : public System::IInterface 
{
	virtual void __fastcall AddPassword(const System::UnicodeString APassword) = 0 ;
	virtual void __fastcall RemovePassword(const System::UnicodeString APassword) = 0 ;
	virtual void __fastcall RemoveAllPasswords() = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
#define ftNonTextTypes (System::Set<TFieldType, TFieldType::ftUnknown, TFieldType::ftSingle>() << TFieldType::ftBytes << TFieldType::ftVarBytes << TFieldType::ftBlob << TFieldType::ftMemo << TFieldType::ftGraphic << TFieldType::ftFmtMemo << TFieldType::ftParadoxOle << TFieldType::ftDBaseOle << TFieldType::ftTypedBinary << TFieldType::ftCursor << TFieldType::ftADT << TFieldType::ftArray << TFieldType::ftReference << TFieldType::ftDataSet )
#define ftFixedSizeTypes (System::Set<TFieldType, TFieldType::ftUnknown, TFieldType::ftSingle>() << TFieldType::ftSmallint << TFieldType::ftInteger << TFieldType::ftWord << TFieldType::ftBoolean << TFieldType::ftFloat << TFieldType::ftCurrency << TFieldType::ftDate << TFieldType::ftTime << TFieldType::ftDateTime << TFieldType::ftAutoInc << TFieldType::ftLargeint << TFieldType::ftTimeStamp << TFieldType::ftLongWord << TFieldType::ftShortint << TFieldType::ftByte << TFieldType::ftExtended << TFieldType::ftTimeStampOffset << TFieldType::ftSingle )
#define ftCalcFieldTypes (System::Set<TFieldType, TFieldType::ftUnknown, TFieldType::ftSingle>() << TFieldType::ftString << TFieldType::ftSmallint << TFieldType::ftInteger << TFieldType::ftWord << TFieldType::ftBoolean << TFieldType::ftFloat << TFieldType::ftCurrency << TFieldType::ftBCD << TFieldType::ftDate << TFieldType::ftTime << TFieldType::ftDateTime << TFieldType::ftBytes << TFieldType::ftVarBytes << TFieldType::ftFixedChar << TFieldType::ftWideString << TFieldType::ftLargeint << TFieldType::ftGuid << TFieldType::ftTimeStamp << TFieldType::ftFMTBcd << TFieldType::ftFixedWideChar << TFieldType::ftOraTimeStamp << TFieldType::ftOraInterval << TFieldType::ftLongWord << TFieldType::ftShortint << TFieldType::ftByte << TFieldType::ftExtended << TFieldType::ftTimeStampOffset \
	<< TFieldType::ftSingle )
#define dsEditModes (System::Set<TDataSetState, TDataSetState::dsInactive, TDataSetState::dsOpening>() << TDataSetState::dsEdit << TDataSetState::dsInsert << TDataSetState::dsSetKey )
#define dsWriteModes (System::Set<TDataSetState, TDataSetState::dsInactive, TDataSetState::dsOpening>() << TDataSetState::dsEdit << TDataSetState::dsInsert << TDataSetState::dsSetKey << TDataSetState::dsCalcFields << TDataSetState::dsFilter << TDataSetState::dsNewValue << TDataSetState::dsInternalCalc )
#define sApplyUpdatesDataSetCommand L"ApplyUpdates"
#define sCancelUpdatesDataSetCommand L"CancelUpdates"
extern DELPHI_PACKAGE System::StaticArray<TFieldClass, 52> DefaultFieldClasses;
extern DELPHI_PACKAGE Data_Db__77 FieldTypeNames;
extern DELPHI_PACKAGE System::StaticArray<System::Word, 52> FieldTypeVarMap;
#define ObjectFieldTypes (System::Set<TFieldType, TFieldType::ftUnknown, TFieldType::ftSingle>() << TFieldType::ftADT << TFieldType::ftArray << TFieldType::ftReference << TFieldType::ftDataSet )
static const System::Word dsMaxStringSize = System::Word(0x2000);
static const System::Int8 dsGuidStringLength = System::Int8(0x26);
extern DELPHI_PACKAGE void __fastcall (*RegisterFieldsProc)(TFieldClass const *FieldClassess, const int FieldClassess_High);
extern DELPHI_PACKAGE bool __fastcall (*LoginDialogProc)(const System::UnicodeString ADatabaseName, System::UnicodeString &AUserName, System::UnicodeString &APassword);
extern DELPHI_PACKAGE bool __fastcall (*LoginDialogExProc)(const System::UnicodeString ADatabaseName, System::UnicodeString &AUserName, System::UnicodeString &APassword, bool NameReadOnly);
extern DELPHI_PACKAGE bool __fastcall (*RemoteLoginDialogProc)(System::UnicodeString &AUserName, System::UnicodeString &APassword);
extern DELPHI_PACKAGE void __fastcall (*ScreenCursorProc)(const int CurIndex);
extern DELPHI_PACKAGE bool __fastcall (*PasswordDialog)(const _di_IDBSession ASession);
extern DELPHI_PACKAGE _di_IDBScreen DBScreen;
extern DELPHI_PACKAGE _di_IDBApplication DBApplication;
extern DELPHI_PACKAGE TFieldDefsClass DefaultFieldDefsClass;
extern DELPHI_PACKAGE TFieldDefClass DefaultFieldDefClass;
extern DELPHI_PACKAGE TLookupListClass DefaultLookupListClass;
extern DELPHI_PACKAGE TIndexDefClass DefaultIndexDefClass;
extern DELPHI_PACKAGE TCheckConstraintClass DefaultCheckConstraintClass;
extern DELPHI_PACKAGE TParamClass DefaultParamClass;
extern DELPHI_PACKAGE TParamsClass DefaultParamsClass;
extern DELPHI_PACKAGE TFieldsClass DefaultFieldsClass;
extern DELPHI_PACKAGE TFieldListClass DefaultFieldListClass;
extern DELPHI_PACKAGE TIndexDefsClass DefaultIndexDefsClass;
extern DELPHI_PACKAGE TFieldDefListClass DefaultFieldDefListClass;
extern DELPHI_PACKAGE TCheckConstraintsClass DefaultCheckConstraintsClass;
extern DELPHI_PACKAGE void __fastcall DatabaseError(const System::UnicodeString Message, System::Classes::TComponent* Component = (System::Classes::TComponent*)(0x0));
extern DELPHI_PACKAGE void __fastcall DatabaseErrorFmt(const System::UnicodeString Message, const System::TVarRec *Args, const int Args_High, System::Classes::TComponent* Component = (System::Classes::TComponent*)(0x0));
extern DELPHI_PACKAGE TField* __fastcall GetFieldProperty(TDataSet* DataSet, System::Classes::TComponent* Control, const System::UnicodeString FieldName);
extern DELPHI_PACKAGE void __fastcall DisposeMem(void *Buffer, int Size);
extern DELPHI_PACKAGE bool __fastcall BuffersEqual(void * Buf1, void * Buf2, int Size);
extern DELPHI_PACKAGE System::UnicodeString __fastcall ExtractFieldName(const System::UnicodeString Fields, int &Pos)/* overload */;
extern DELPHI_PACKAGE void __fastcall RegisterFields(TFieldClass const *FieldClasses, const int FieldClasses_High);
extern DELPHI_PACKAGE TFieldType __fastcall VarTypeToDataType(int VarType);
}	/* namespace Db */
}	/* namespace Data */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA_DB)
using namespace Data::Db;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA)
using namespace Data;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Data_DbHPP
