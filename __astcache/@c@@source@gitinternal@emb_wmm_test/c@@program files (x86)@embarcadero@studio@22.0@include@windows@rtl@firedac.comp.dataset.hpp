// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Comp.DataSet.pas' rev: 35.00 (Windows)

#ifndef Firedac_Comp_DatasetHPP
#define Firedac_Comp_DatasetHPP

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
#include <System.Generics.Collections.hpp>
#include <FireDAC.Stan.Util.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.SQLTimeInt.hpp>
#include <FireDAC.Stan.Option.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Param.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.DApt.Intf.hpp>
#include <FireDAC.Phys.Intf.hpp>
#include <FireDAC.UI.Intf.hpp>
#include <System.Generics.Defaults.hpp>
#include <System.Types.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Comp
{
namespace Dataset
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDColMapItem;
struct TFDRecInfo;
struct TFDBookmarkData;
struct TFDKeyBuffer;
__interface DELPHIINTERFACE IFDDataSetReference;
typedef System::DelphiInterface<IFDDataSetReference> _di_IFDDataSetReference;
__interface DELPHIINTERFACE IFDDataSetListener;
typedef System::DelphiInterface<IFDDataSetListener> _di_IFDDataSetListener;
class DELPHICLASS TFDMasterDataLink;
class DELPHICLASS TFDIndex;
class DELPHICLASS TFDIndexes;
class DELPHICLASS TFDAggregate;
class DELPHICLASS TFDAggregates;
class DELPHICLASS TFDDataSet;
class DELPHICLASS TFDXMLField;
class DELPHICLASS TFDAutoIncField;
class DELPHICLASS TFDSQLTimeIntervalField;
class DELPHICLASS TFDBlobStream;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDColMapItem : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<int> _TFDColMapItem__1;
	
	
public:
	Firedac::Dats::TFDDatSColumn* FColumn;
	int FColumnIndex;
	_TFDColMapItem__1 FPath;
public:
	/* TObject.Create */ inline __fastcall TFDColMapItem() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFDColMapItem() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFDKeyIndex : unsigned int { kiLookup, kiRangeStart, kiRangeEnd, kiCurRangeStart, kiCurRangeEnd, kiSave };

typedef TFDRecInfo *PFDRecInfo;

struct DECLSPEC_DRECORD TFDRecInfo
{
public:
	Firedac::Dats::TFDDatSRow* FRow;
	int FRowIndex;
	Data::Db::TBookmarkFlag FBookmarkFlag;
};


typedef TFDBookmarkData *PFDBookmarkData;

struct DECLSPEC_DRECORD TFDBookmarkData
{
public:
	Firedac::Dats::TFDDatSRow* FRow;
	int FRowIndex;
	int FResultSetNum;
};


typedef TFDKeyBuffer *PFDKeyBuffer;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFDKeyBuffer
{
public:
	bool FModified;
	bool FExclusive;
	int FFieldCount;
	int FAssignedFieldCount;
	NativeInt FRecBuff;
};
#pragma pack(pop)


__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2400}") IFDDataSetReference  : public System::IInterface 
{
	virtual Firedac::Dats::TFDDatSView* __fastcall GetDataView() = 0 ;
	__property Firedac::Dats::TFDDatSView* DataView = {read=GetDataView};
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2401}") IFDDataSetListener  : public System::IInterface 
{
	virtual void __fastcall ResultsetDefined(TFDDataSet* ADataSet) = 0 ;
	virtual void __fastcall ResultsetReleasing(TFDDataSet* ADataSet) = 0 ;
	virtual void __fastcall ResultsetActivated(TFDDataSet* ADataSet) = 0 ;
};

typedef void __fastcall (__closure *TFDUpdateRecordEvent)(Data::Db::TDataSet* ASender, Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Intf::TFDErrorAction &AAction, Firedac::Stan::Option::TFDUpdateRowOptions AOptions);

typedef void __fastcall (__closure *TFDUpdateErrorEvent)(Data::Db::TDataSet* ASender, Firedac::Stan::Error::EFDException* AException, Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Intf::TFDErrorAction &AAction);

typedef void __fastcall (__closure *TFDAfterApplyUpdatesEvent)(TFDDataSet* DataSet, int AErrors);

typedef void __fastcall (__closure *TFDReconcileErrorEvent)(TFDDataSet* DataSet, Firedac::Stan::Error::EFDException* E, Firedac::Dats::TFDDatSRowState UpdateKind, Firedac::Dapt::Intf::TFDDAptReconcileAction &Action);

typedef void __fastcall (__closure *TFDDataSetEvent)(TFDDataSet* DataSet);

enum DECLSPEC_DENUM Firedac_Comp_Dataset__2 : unsigned int { dfOpenBlob, dfOfflining, dfKeyBuffersAllocated, dfRangeFromExclusive, dfRangeToExclusive, dfLockNoBMK, dfClearIndexDefs, dfColumnAttributesUpdated, dfCalcFieldInIndex, dfStreamedActive, dfPreserveCurrentIndex, dfPostRow, dfDataSetOpened, dfNoRecNoCmp, dfDataSetOpening, dfDeleting };

typedef System::Set<Firedac_Comp_Dataset__2, Firedac_Comp_Dataset__2::dfOpenBlob, Firedac_Comp_Dataset__2::dfDeleting> TFDDataSetFlags;

enum DECLSPEC_DENUM TFDFetchDirection : unsigned int { fdUp, fdDown };

enum DECLSPEC_DENUM TFDDataSetLocateOption : unsigned int { lxoCaseInsensitive, lxoPartialKey, lxoFromCurrent, lxoBackward, lxoCheckOnly, lxoNoFetchAll };

typedef System::Set<TFDDataSetLocateOption, TFDDataSetLocateOption::lxoCaseInsensitive, TFDDataSetLocateOption::lxoNoFetchAll> TFDDataSetLocateOptions;

enum DECLSPEC_DENUM Firedac_Comp_Dataset__3 : unsigned int { coStructure, coCalcFields, coIndexesReset, coIndexesCopy, coConstraintsReset, coConstraintsCopy, coAggregatesReset, coAggregatesCopy, coRestart, coAppend, coEdit, coDelete, coRefresh };

typedef System::Set<Firedac_Comp_Dataset__3, Firedac_Comp_Dataset__3::coStructure, Firedac_Comp_Dataset__3::coRefresh> TFDCopyDataSetOptions;

enum DECLSPEC_DENUM Firedac_Comp_Dataset__4 : unsigned int { auDesignTime, auRunTime };

typedef System::Set<Firedac_Comp_Dataset__4, Firedac_Comp_Dataset__4::auDesignTime, Firedac_Comp_Dataset__4::auRunTime> TFDStoredActivationUsage;

enum DECLSPEC_DENUM Firedac_Comp_Dataset__5 : unsigned int { rtModified, rtInserted, rtDeleted, rtUnmodified, rtHasErrors };

typedef System::Set<Firedac_Comp_Dataset__5, Firedac_Comp_Dataset__5::rtModified, Firedac_Comp_Dataset__5::rtHasErrors> TFDUpdateRecordTypes;

typedef System::Generics::Collections::TList__1<Data::Db::TField*>* TFDFieldList;

typedef System::Generics::Collections::TList__1<Data::Db::TDataSet*>* TFDDataSetList;

class PASCALIMPLEMENTATION TFDMasterDataLink : public Data::Db::TMasterDataLink
{
	typedef Data::Db::TMasterDataLink inherited;
	
private:
	TFDDataSet* FDetailDataSet;
	System::Classes::TNotifyEvent FOnMasterChange;
	System::Classes::TNotifyEvent FOnMasterFieldsDefined;
	bool FFireActiveChanged;
	bool FActiveChangedLocked;
	Data::Db::TDataEvent FDelayedEvent;
	int FDelayedScrollDisabled;
	Firedac::Ui::Intf::_di_IFDGUIxTimer FTimer;
	int FScrollDisabled;
	void __fastcall StartDelayedScroll();
	void __fastcall DoDelayedScroll(System::TObject* ASender);
	bool __fastcall GetDelayedScrollEnabled();
	bool __fastcall GetActualDelayedScrollEnabled();
	void __fastcall DoMasterChanged(System::TObject* ASender);
	
protected:
	virtual void __fastcall ActiveChanged();
	virtual void __fastcall DataEvent(Data::Db::TDataEvent Event, NativeInt Info);
	virtual void __fastcall RecordChanged(Data::Db::TField* Field);
	
public:
	__fastcall TFDMasterDataLink(Data::Db::TDataSet* ADataSet);
	__fastcall virtual ~TFDMasterDataLink();
	void __fastcall Synchronize(bool AWithDetails = true);
	void __fastcall CancelSync(bool AWithDetails = true);
	void __fastcall DisableDelayedScroll();
	void __fastcall EnableDelayedScroll();
	void __fastcall DisableScroll();
	void __fastcall EnableScroll();
	__property bool DelayedScrollEnabled = {read=GetDelayedScrollEnabled, nodefault};
	__property bool ActualDelayedScrollEnabled = {read=GetActualDelayedScrollEnabled, nodefault};
	__property System::Classes::TNotifyEvent OnMasterChange = {read=FOnMasterChange, write=FOnMasterChange};
	__property System::Classes::TNotifyEvent OnMasterFieldsDefined = {read=FOnMasterFieldsDefined, write=FOnMasterFieldsDefined};
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDIndex : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FUpdateCount;
	bool FActive;
	System::UnicodeString FFilter;
	System::UnicodeString FFields;
	System::UnicodeString FCaseInsFields;
	System::UnicodeString FExpression;
	System::UnicodeString FDescFields;
	Firedac::Stan::Intf::TFDExpressionOptions FFilterOptions;
	Firedac::Stan::Intf::TFDSortOptions FOptions;
	Firedac::Dats::TFDDatSView* FView;
	System::UnicodeString FName;
	bool FDistinct;
	void __fastcall SetCaseInsFields(const System::UnicodeString AValue);
	void __fastcall SetDescFields(const System::UnicodeString AValue);
	void __fastcall SetExpression(const System::UnicodeString AValue);
	void __fastcall SetFields(const System::UnicodeString AValue);
	void __fastcall SetFilter(const System::UnicodeString AValue);
	void __fastcall SetFilterOptions(const Firedac::Stan::Intf::TFDExpressionOptions AValue);
	void __fastcall SetOptions(const Firedac::Stan::Intf::TFDSortOptions AValue);
	void __fastcall SetName(const System::UnicodeString AValue);
	void __fastcall IndexChanged();
	void __fastcall SetActive(const bool AValue);
	bool __fastcall GetActualActive();
	void __fastcall CreateView();
	void __fastcall DeleteView();
	TFDDataSet* __fastcall GetDataSet();
	bool __fastcall GetSelected();
	void __fastcall SetSelected(const bool AValue);
	void __fastcall SetDistinct(const bool AValue);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	virtual void __fastcall AssignTo(System::Classes::TPersistent* ADest);
	
public:
	__fastcall virtual TFDIndex(System::Classes::TCollection* Collection);
	__fastcall virtual ~TFDIndex();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property bool ActualActive = {read=GetActualActive, nodefault};
	__property TFDDataSet* DataSet = {read=GetDataSet};
	
__published:
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property bool Selected = {read=GetSelected, write=SetSelected, default=0};
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property System::UnicodeString Fields = {read=FFields, write=SetFields};
	__property System::UnicodeString CaseInsFields = {read=FCaseInsFields, write=SetCaseInsFields};
	__property System::UnicodeString DescFields = {read=FDescFields, write=SetDescFields};
	__property System::UnicodeString Expression = {read=FExpression, write=SetExpression};
	__property Firedac::Stan::Intf::TFDSortOptions Options = {read=FOptions, write=SetOptions, default=0};
	__property bool Distinct = {read=FDistinct, write=SetDistinct, default=0};
	__property System::UnicodeString Filter = {read=FFilter, write=SetFilter};
	__property Firedac::Stan::Intf::TFDExpressionOptions FilterOptions = {read=FFilterOptions, write=SetFilterOptions, default=0};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDIndexes : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFDIndex* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	TFDDataSet* FDataSet;
	TFDIndex* __fastcall GetItems(int AIndex);
	void __fastcall SetItems(int AIndex, TFDIndex* const AValue);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	void __fastcall Build();
	void __fastcall Release();
	
public:
	__fastcall TFDIndexes(TFDDataSet* ADataSet);
	HIDESBASE TFDIndex* __fastcall Add();
	TFDIndex* __fastcall FindIndex(const System::UnicodeString AName);
	TFDIndex* __fastcall IndexByName(const System::UnicodeString AName);
	TFDIndex* __fastcall FindIndexForFields(const System::UnicodeString AFields, Firedac::Stan::Intf::TFDSortOptions ARequiredOptions = Firedac::Stan::Intf::TFDSortOptions() , Firedac::Stan::Intf::TFDSortOptions AProhibitedOptions = Firedac::Stan::Intf::TFDSortOptions() );
	__property TFDIndex* Items[int AIndex] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFDIndexes() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDAggregate : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	int FUpdateCount;
	System::UnicodeString FExpression;
	int FGroupingLevel;
	System::UnicodeString FIndexName;
	bool FActive;
	Firedac::Dats::TFDDatSAggregate* FAggregate;
	System::UnicodeString FName;
	bool __fastcall GetActualActive();
	TFDDataSet* __fastcall GetDataSet();
	void __fastcall SetActive(const bool AValue);
	void __fastcall SetExpression(const System::UnicodeString AValue);
	void __fastcall SetGroupingLevel(const int AValue);
	void __fastcall SetIndexName(const System::UnicodeString AValue);
	void __fastcall AggregateChanged();
	void __fastcall CreateAggregate();
	void __fastcall DeleteAggregate();
	System::Variant __fastcall GetValue();
	bool __fastcall InternalUse(int &ARecordIndex);
	bool __fastcall GetInUse();
	Firedac::Stan::Intf::TFDDataType __fastcall GetDataType();
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual ~TFDAggregate();
	virtual void __fastcall Assign(System::Classes::TPersistent* ASource);
	void __fastcall BeginUpdate();
	void __fastcall EndUpdate();
	__property bool ActualActive = {read=GetActualActive, nodefault};
	__property TFDDataSet* DataSet = {read=GetDataSet};
	__property System::Variant Value = {read=GetValue};
	__property bool InUse = {read=GetInUse, nodefault};
	__property Firedac::Stan::Intf::TFDDataType DataType = {read=GetDataType, nodefault};
	
__published:
	__property System::UnicodeString Name = {read=FName, write=FName};
	__property System::UnicodeString Expression = {read=FExpression, write=SetExpression};
	__property int GroupingLevel = {read=FGroupingLevel, write=SetGroupingLevel, default=0};
	__property System::UnicodeString IndexName = {read=FIndexName, write=SetIndexName};
	__property bool Active = {read=FActive, write=SetActive, default=0};
public:
	/* TCollectionItem.Create */ inline __fastcall virtual TFDAggregate(System::Classes::TCollection* Collection) : System::Classes::TCollectionItem(Collection) { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDAggregates : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFDAggregate* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	TFDDataSet* FDataSet;
	int FGroupingLevel;
	TFDAggregate* __fastcall GetItems(int AIndex);
	void __fastcall SetItems(int AIndex, TFDAggregate* const AValue);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	__property int GroupingLevel = {read=FGroupingLevel, nodefault};
	void __fastcall Build();
	void __fastcall Release();
	
public:
	__fastcall TFDAggregates(TFDDataSet* ADataSet);
	HIDESBASE TFDAggregate* __fastcall Add();
	TFDAggregate* __fastcall FindAggregate(const System::UnicodeString AName);
	TFDAggregate* __fastcall AggregateByName(const System::UnicodeString AName);
	__property TFDAggregate* Items[int AIndex] = {read=GetItems, write=SetItems/*, default*/};
public:
	/* TCollection.Destroy */ inline __fastcall virtual ~TFDAggregates() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDDataSet : public Data::Db::TDataSet
{
	typedef Data::Db::TDataSet inherited;
	
	
private:
	typedef System::DynamicArray<TFDColMapItem*> _TFDDataSet__1;
	
	
private:
	Firedac::Dats::TFDDatSTable* FTable;
	Firedac::Dats::TFDDatSView* FView;
	unsigned FBufferSize;
	int FRecordIndexToInsert;
	int FPrevRecordIndex;
	_TFDDataSet__1 FColumns;
	Firedac::Dats::TFDDatSRow* FNewRow;
	NativeInt FForceRecBuffer;
	Data::Db::TIndexDefs* FIndexDefs;
	TFDIndexes* FIndexes;
	Firedac::Dats::TFDDatSView* FSortView;
	Firedac::Dats::TFDDatSView* FFilterView;
	Firedac::Dats::TFDDatSView* FSourceView;
	Firedac::Dats::TFDDatSMechFilter* FSourceViewLocator;
	System::StaticArray<PFDKeyBuffer, 6> FKeyBuffers;
	System::UnicodeString FIndexName;
	System::UnicodeString FIndexFieldNames;
	TFDUpdateRecordTypes FFilterChanges;
	TFDDataSet* FParentDataSet;
	int FConstDisableCount;
	TFDDataSet* FCloneSource;
	bool FCachedUpdates;
	TFDReconcileErrorEvent FOnReconcileError;
	TFDUpdateRecordEvent FOnUpdateRecord;
	TFDUpdateErrorEvent FOnUpdateError;
	int FUnidirRecsPurged;
	TFDMasterDataLink* FMasterLink;
	System::UnicodeString FDetailFields;
	Firedac::Dats::TFDDatSRow* FLastParentRow;
	TFDDataSetEvent FAfterRowRequest;
	TFDDataSetEvent FAfterExecute;
	TFDAfterApplyUpdatesEvent FAfterApplyUpdates;
	TFDDataSetEvent FAfterGetRecords;
	TFDDataSetEvent FAfterGetRecord;
	TFDDataSetEvent FBeforeRowRequest;
	TFDDataSetEvent FBeforeExecute;
	TFDDataSetEvent FBeforeApplyUpdates;
	TFDDataSetEvent FBeforeGetRecords;
	bool FAggregatesActive;
	bool FIndexesActive;
	TFDAggregates* FAggregates;
	TFDAggregates* FFieldAggregates;
	void *FDataLoadSave;
	System::Classes::TList* FCreatedConstraints;
	Firedac::Dats::TFDDatSRow* FLocateRow;
	Firedac::Dats::TFDDatSColumnSublist* FLocateColumns;
	System::Classes::TList* FTempIndexViews;
	unsigned FLastSavePoint;
	TFDStoredActivationUsage FActiveStoredUsage;
	Firedac::Dats::TFDDatSColumn* FLastColumn;
	Data::Db::TField* FLastField;
	System::Classes::TInterfaceList* FEventListeners;
	TFDDataSetEvent FOnMasterSetValues;
	int FWaitCounter;
	Firedac::Dats::TFDDatSRelation* FMasterRelation;
	Data::Db::TFieldDef* __fastcall AddFieldDesc(Firedac::Stan::Option::TFDFormatOptions* AFmtOpts, Data::Db::TFieldDefs* ADefs, Firedac::Dats::TFDDatSColumn* AColumn, int &AFieldId, System::Classes::TList* APath);
	void __fastcall AddTableDesc(Firedac::Stan::Option::TFDFormatOptions* AFmtOpts, Data::Db::TFieldDefs* ADefs, Firedac::Dats::TFDDatSTable* ATable, int &AFieldId, System::Classes::TList* APath);
	void __fastcall SetIndexName(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetIndexFieldNames();
	void __fastcall SetIndexFieldNames(const System::UnicodeString AValue);
	void __fastcall RelinkViews();
	Data::Db::TField* __fastcall GetIndexField(int AIndex);
	int __fastcall GetIndexFieldCount();
	void __fastcall AllocKeyBuffers();
	void __fastcall CheckSetKeyMode();
	void __fastcall CheckIndexed();
	void __fastcall FreeKeyBuffers();
	bool __fastcall GetKeyExclusive();
	int __fastcall GetKeyFieldCount();
	PFDKeyBuffer __fastcall InitKeyBuffer(PFDKeyBuffer ABuffer);
	PFDKeyBuffer __fastcall ClearKeyBuffer(PFDKeyBuffer ABuffer);
	void __fastcall SetKeyRow(PFDKeyBuffer ABuffer, Firedac::Dats::TFDDatSRow* ARow);
	void __fastcall PostKeyBuffer(bool ACommit);
	bool __fastcall ResetCursorRange();
	void __fastcall SetKeyExclusive(bool AValue);
	void __fastcall SetKeyFieldCount(int AValue);
	void __fastcall SetKeyFields(TFDKeyIndex AKeyIndex, const System::TVarRec *AValues, const int AValues_High, bool AExclusive = false);
	void __fastcall AssignKeyBuffer(PFDKeyBuffer ADest, PFDKeyBuffer ASrc);
	bool __fastcall CompareKeyBuffer(PFDKeyBuffer ABuff1, PFDKeyBuffer ABuff2);
	void __fastcall ResetViews();
	void __fastcall SetSortView(Firedac::Dats::TFDDatSView* AView);
	void __fastcall SwitchToIndex(const System::UnicodeString AFieldNames, const System::UnicodeString AIndexName);
	void __fastcall SetFilterChanges(const TFDUpdateRecordTypes AValue);
	void __fastcall SafeFilteringUpdated();
	bool __fastcall GetFieldColumn(NativeInt ARecBuff, int AFieldNo, Firedac::Dats::TFDDatSColumn* &AColumn, int &AColumnIndex, Firedac::Dats::TFDDatSRow* &ARow, bool AInitNested = false)/* overload */;
	void __fastcall SetFetchOptions(Firedac::Stan::Option::TFDFetchOptions* const AValue);
	void __fastcall SetFormatOptions(Firedac::Stan::Option::TFDFormatOptions* const AValue);
	void __fastcall SetUpdateOptions(Firedac::Stan::Option::TFDBottomUpdateOptions* const AValue);
	void __fastcall SetResourceOptions(Firedac::Stan::Option::TFDBottomResourceOptions* const AValue);
	Firedac::Stan::Option::TFDFetchOptions* __fastcall GetFetchOptions();
	Firedac::Stan::Option::TFDFormatOptions* __fastcall GetFormatOptions();
	Firedac::Stan::Option::TFDBottomUpdateOptions* __fastcall GetUpdateOptions();
	Firedac::Stan::Option::TFDBottomResourceOptions* __fastcall GetResourceOptions();
	_di_IFDDataSetReference __fastcall GetData();
	_di_IFDDataSetReference __fastcall GetDelta();
	void __fastcall SetData(const _di_IFDDataSetReference AValue);
	void __fastcall SetTableConstraints();
	void __fastcall ResetTableConstraints();
	void __fastcall SetInternalCalcs(Data::Db::TFieldLifeCycles ALifeCycles);
	void __fastcall SetUpdateFieldAttributes();
	bool __fastcall GetConstraintsEnabled();
	void __fastcall SetConstraintsEnabled(const bool AValue);
	bool __fastcall IsCS();
	bool __fastcall GetCachedUpdates();
	void __fastcall SetCachedUpdates(const bool AValue);
	__int64 __fastcall GetSavePoint();
	void __fastcall SetSavePoint(const __int64 AValue);
	Firedac::Dats::TFDDatSUpdatesJournal* __fastcall GetUpdates();
	bool __fastcall GetUpdatesPending();
	int __fastcall GetChangeCount();
	bool __fastcall InternalFetchRows(bool AAll, bool AOnDemand, TFDFetchDirection ADirection = (TFDFetchDirection)(0x1));
	bool __fastcall InternalFetchNested(Firedac::Dats::TFDDatSRow* ARow, Firedac::Dats::TFDDatSTable* ANestedTable, Firedac::Phys::Intf::TFDPhysFillRowOptions ARowOptions);
	bool __fastcall RefreshRecordBase(Firedac::Phys::Intf::TFDPhysFillRowOptions ARowOptions);
	System::UnicodeString __fastcall GetMasterFields();
	void __fastcall SetMasterFields(const System::UnicodeString AValue);
	void __fastcall SetMasterSource(Data::Db::TDataSource* const AValue);
	System::UnicodeString __fastcall GetActualDetailFields();
	void __fastcall CheckParentRow();
	void __fastcall ResetIndexes();
	void __fastcall SetAggregatesActive(const bool AValue);
	void __fastcall SetIndexesActive(const bool AValue);
	int __fastcall GetGroupingLevel();
	void __fastcall SetAggregates(TFDAggregates* const AValue);
	void __fastcall SetIndexes(TFDIndexes* const AValue);
	bool __fastcall GetActiveRecBufRecordIndex(int &AIndex);
	void __fastcall SetViewAggregates();
	void __fastcall ResetViewAggregates();
	bool __fastcall IsAS();
	bool __fastcall IsIS();
	_di_IFDDataSetReference __fastcall GetFilteredData();
	bool __fastcall RenewColumnMap();
	bool __fastcall RenewFieldDesc(Firedac::Dats::TFDDatSColumn* AColumn, int &AFieldId);
	bool __fastcall RenewTableDesc(Firedac::Dats::TFDDatSTable* ATable, int &AFieldId);
	Firedac::Dats::TFDDatSMechChilds* __fastcall CreateChildMech();
	Firedac::Dats::TFDDatSMechFilter* __fastcall CreateFilterMech(Firedac::Dats::TFDDatSMechFilter* AFilter);
	Firedac::Dats::TFDDatSMechRange* __fastcall CreateRangeMech();
	Firedac::Dats::TFDDatSMechRowState* __fastcall CreateStateMech();
	bool __fastcall IsIDS();
	void __fastcall SetIndexDefs(Data::Db::TIndexDefs* const AValue);
	void __fastcall UpdateRecordIndex();
	void __fastcall ClearRecordIndex();
	void __fastcall SetParams(Firedac::Stan::Param::TFDParams* const AValue);
	int __fastcall GetParamsCount();
	void __fastcall InternalLoadFromStorage();
	void __fastcall InternalSaveToStorage();
	bool __fastcall ResetAtLoading();
	Data::Db::TField* __fastcall InternalFieldByName(const System::UnicodeString AFieldName, const System::UnicodeString APlace);
	void __fastcall SetBookmarkSize(int AValue);
#ifndef _WIN64
	Firedac::Dats::TFDDatSRow* __fastcall GetRowFromBookmark(System::DynamicArray<System::Byte> ABookmark, /* out */ int &ARowIndex, /* out */ int &AResultSetNum);
#else /* _WIN64 */
	Firedac::Dats::TFDDatSRow* __fastcall GetRowFromBookmark(System::TArray__1<System::Byte> ABookmark, /* out */ int &ARowIndex, /* out */ int &AResultSetNum);
#endif /* _WIN64 */
	void __fastcall ReadContent(System::Classes::TStream* AReader);
	void __fastcall WriteContent(System::Classes::TStream* AWriter);
	void __fastcall ReadDataSource(System::Classes::TReader* AReader);
	void __fastcall ReadReadOnly(System::Classes::TReader* AReader);
	void __fastcall StoredActivate(System::Sysutils::_di_TProc AInherited);
	void __fastcall CopyRecordBase(Data::Db::TDataSet* ASource, bool AExcludeNewEmptyValues);
	bool __fastcall IsRowValid(Firedac::Dats::TFDDatSRow* ARow, int AResultSetNum);
	Firedac::Stan::Error::EFDException* __fastcall GetRowError();
	void __fastcall InternalClearNested(const Firedac::Stan::Intf::TFDDataTypes &ADataTypes, Firedac::Stan::Intf::TFDDataAttributes AAttributes);
	void __fastcall BuildMasterRelation();
	void __fastcall ResetMasterRelation();
	void __fastcall DoAfterGetRecords2();
	PFDRecInfo __fastcall GetRecInfo(NativeInt ABuffer)/* overload */;
	void __fastcall InternalDefineDatSManager();
	void __fastcall InitChildTable(Firedac::Dats::TFDDatSManager* ADatSManager, Firedac::Dats::TFDDatSTable* AParTable, Firedac::Dats::TFDDatSColumn* AParColumn, System::TObject* ADefs, int AArraySize);
	void __fastcall InitChildTables(Firedac::Dats::TFDDatSManager* ADatSManager, Firedac::Dats::TFDDatSTable* AParTable, Firedac::Dats::TFDDatSTable* ASrcTable);
	bool __fastcall CheckDetailsFetched();
	
protected:
	int FRecordIndex;
	bool FClientCursor;
	TFDKeyBuffer *FKeyBuffer;
	Firedac::Dats::TFDDatSRow* FRangeFrom;
	Firedac::Dats::TFDDatSRow* FRangeTo;
	int FRangeFromFieldCount;
	int FRangeToFieldCount;
#ifndef _WIN64
	System::DynamicArray<System::Byte> FSetToRecBmk;
#else /* _WIN64 */
	System::TArray__1<System::Byte> FSetToRecBmk;
#endif /* _WIN64 */
	System::UnicodeString FLocalIndexName;
	virtual void __fastcall PSExecute();
	virtual Data::Db::TIndexDef* __fastcall PSGetDefaultOrder();
	virtual System::UnicodeString __fastcall PSGetKeyFields();
	virtual System::UnicodeString __fastcall PSGetTableName();
	virtual Data::Db::TIndexDefs* __fastcall PSGetIndexDefs(Data::Db::TIndexOptions IndexTypes = (Data::Db::TIndexOptions() << Data::Db::TIndexOption::ixPrimary << Data::Db::TIndexOption::ixUnique << Data::Db::TIndexOption::ixDescending << Data::Db::TIndexOption::ixCaseInsensitive << Data::Db::TIndexOption::ixExpression << Data::Db::TIndexOption::ixNonMaintained ));
	virtual Data::Db::EUpdateError* __fastcall PSGetUpdateException(System::Sysutils::Exception* E, Data::Db::EUpdateError* Prev);
	virtual void __fastcall PSReset();
	virtual bool __fastcall PSUpdateRecord(Data::Db::TUpdateKind AUpdateKind, Data::Db::TDataSet* ADelta);
	virtual int __fastcall InternalDefaultKeyFieldCount(PFDKeyBuffer ABuffer, int ADefault);
	virtual bool __fastcall InternalGotoKey(bool ANearest);
	Firedac::Dats::TFDDatSRow* __fastcall GetKeyRow(PFDKeyBuffer ABuffer);
	Firedac::Dats::TFDDatSView* __fastcall GetDataView();
	virtual Firedac::Stan::Option::_di_IFDStanOptions __fastcall GetOptionsIntf() = 0 ;
	virtual void __fastcall SetOptionsIntf(const Firedac::Stan::Option::_di_IFDStanOptions AValue) = 0 ;
	System::TObject* __fastcall GetDataSet();
	void __fastcall SetDataSet(System::TObject* ADataSet);
	virtual NativeUInt __fastcall GetConn();
	bool __fastcall IsPKViolation(System::Sysutils::Exception* AExc);
	virtual Firedac::Phys::Intf::TFDPhysLocalSQLAdapterFeatures __fastcall GetFeatures();
	void __fastcall TableDataChanged(Firedac::Dats::TFDDatSRow* ARow, Firedac::Dats::TFDDatSRowState AChangeKind);
	virtual Data::Db::TDataSetCommandStates __fastcall GetCommandStates(const System::UnicodeString ACommand);
	virtual void __fastcall ExecuteCommand(const System::UnicodeString ACommand, const System::TVarRec *AArgs, const int AArgs_High);
	int FRecordCount;
	bool FSourceEOF;
	TFDDataSetFlags FFlags;
	Firedac::Stan::Intf::_di_IFDStanStorage FStorage;
	Firedac::Stan::Util::TFDEncoder* FEncoder;
	NativeInt __fastcall AllocRecBuf();
	void __fastcall FreeRecBuf(NativeInt &Buffer);
	virtual System::PByte __fastcall AllocRecordBuffer();
	virtual void __fastcall FreeRecordBuffer(System::PByte &Buffer);
	void __fastcall CheckDeleting();
	void __fastcall CheckEditing();
	void __fastcall CheckInserting();
	virtual void __fastcall CreateFilterView();
	virtual void __fastcall ClearCalcFields(NativeInt Buffer)/* overload */;
	virtual void __fastcall ClearCalcFields(System::PByte Buffer)/* overload */;
	virtual void __fastcall CloseBlob(Data::Db::TField* Field);
	virtual void __fastcall DataEvent(Data::Db::TDataEvent Event, NativeInt Info);
	virtual void __fastcall Loaded();
	DYNAMIC void __fastcall Updated();
	virtual void __fastcall DefineProperties(System::Classes::TFiler* AFiler);
	virtual void __fastcall DoAfterRefresh();
	virtual void __fastcall DoBeforeInsert();
	virtual void __fastcall DoBeforeEdit();
	virtual void __fastcall DoBeforeDelete();
	virtual void __fastcall DoBeforeScroll();
	bool __fastcall GetActiveRecBuf(NativeInt &RecBuf);
#ifndef _WIN64
	virtual void __fastcall GetBookmarkData(NativeInt Buffer, System::DynamicArray<System::Byte> Data)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall GetBookmarkData(NativeInt Buffer, System::TArray__1<System::Byte> Data)/* overload */;
#endif /* _WIN64 */
	virtual Data::Db::TBookmarkFlag __fastcall GetBookmarkFlag(NativeInt Buffer)/* overload */;
	virtual bool __fastcall GetCanModify();
	virtual bool __fastcall GetCanRefresh();
	virtual Data::Db::TDataSource* __fastcall GetDataSource();
	virtual bool __fastcall GetModifiedBlobCached();
#ifndef _WIN64
	int __fastcall GetRowIndex(NativeInt ABuffer = (NativeInt)(0x0));
#else /* _WIN64 */
	int __fastcall GetRowIndex(NativeInt ABuffer = (NativeInt)(0LL));
#endif /* _WIN64 */
	virtual int __fastcall GetRecNo();
	virtual Data::Db::TGetResult __fastcall GetRecord(NativeInt Buffer, Data::Db::TGetMode GetMode, bool DoCheck)/* overload */;
	virtual Data::Db::TGetResult __fastcall GetRecord(System::PByte Buffer, Data::Db::TGetMode GetMode, bool DoCheck)/* overload */;
	virtual int __fastcall GetRecordCount();
	virtual System::Word __fastcall GetRecordSize();
	PFDKeyBuffer __fastcall GetKeyBuffer(TFDKeyIndex AKeyIndex, bool ACheckCreateRow = true);
	bool __fastcall SetCursorRange();
	void __fastcall SetKeyBuffer(TFDKeyIndex AKeyIndex, bool AClear);
	virtual void __fastcall InitRecord(NativeInt Buffer)/* overload */;
	virtual void __fastcall InitBufferPointers();
	virtual void __fastcall InternalHandleException();
	void __fastcall ClearColumnMap();
	virtual void __fastcall InternalInitFieldDefs();
	virtual void __fastcall InternalOpen();
	virtual void __fastcall DoAfterOpen();
	virtual void __fastcall InternalClose();
	virtual void __fastcall InternalAddRecord(NativeInt Buffer, bool Append)/* overload */;
	virtual void __fastcall InternalCancel();
	virtual void __fastcall InternalDelete();
	virtual void __fastcall InternalEdit();
	virtual void __fastcall InternalFirst();
	virtual void __fastcall InternalGotoBookmark(void * Bookmark)/* overload */;
#ifndef _WIN64
	virtual void __fastcall InternalGotoBookmark(System::DynamicArray<System::Byte> Bookmark)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall InternalGotoBookmark(System::TArray__1<System::Byte> Bookmark)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall InternalInitRecord(NativeInt Buffer)/* overload */;
	virtual void __fastcall InternalInitRecord(System::PByte Buffer)/* overload */;
	virtual void __fastcall DoOnNewRecord();
	virtual void __fastcall InternalInsert();
	virtual void __fastcall InternalLast();
	virtual void __fastcall InternalPost();
	virtual void __fastcall InternalRefresh();
	void __fastcall ResyncViews();
	virtual void __fastcall InternalSetToRecord(NativeInt Buffer)/* overload */;
	virtual bool __fastcall IsCursorOpen();
	virtual void __fastcall OpenCursor(bool InfoQuery);
	virtual void __fastcall CloseCursor();
	void __fastcall OpenIndexes();
	virtual void __fastcall RefreshInternalCalcFields(NativeInt Buffer)/* overload */;
	virtual void __fastcall RefreshInternalCalcFields _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer)/* overload */;
	Data::Db::TUpdateStatus __fastcall RowState2UpdateStatus(Firedac::Dats::TFDDatSRowState ARowState);
	virtual void __fastcall SetActive(bool AValue);
#ifndef _WIN64
	virtual void __fastcall SetBookmarkData(NativeInt Buffer, System::DynamicArray<System::Byte> Data)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall SetBookmarkData(NativeInt Buffer, System::TArray__1<System::Byte> Data)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall SetBookmarkFlag(NativeInt Buffer, Data::Db::TBookmarkFlag AValue)/* overload */;
	virtual void __fastcall SetBookmarkFlag(System::PByte Buffer, Data::Db::TBookmarkFlag AValue)/* overload */;
#ifndef _WIN64
	virtual void __fastcall SetFieldData(Data::Db::TField* AField, System::DynamicArray<System::Byte> ABuffer)/* overload */;
#else /* _WIN64 */
	virtual void __fastcall SetFieldData(Data::Db::TField* AField, System::TArray__1<System::Byte> ABuffer)/* overload */;
#endif /* _WIN64 */
	virtual void __fastcall InternalSetRecNo(int AValue);
	virtual void __fastcall SetRecNo(int AValue);
	virtual void __fastcall SetFilterOptions(Data::Db::TFilterOptions AValue);
	virtual void __fastcall SetFilterText(const System::UnicodeString AValue);
	virtual void __fastcall SetFiltered(bool AValue);
	virtual void __fastcall SetOnFilterRecord(const Data::Db::TFilterRecordEvent AValue);
	void __fastcall InitLocateRow(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues);
	virtual bool __fastcall FindRecord(bool Restart, bool GoForward);
	bool __fastcall LocateRecord(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, TFDDataSetLocateOptions AOptions, int &AIndex)/* overload */;
	bool __fastcall LocateRecord(const System::UnicodeString AExpression, TFDDataSetLocateOptions AOptions, int &AIndex)/* overload */;
	virtual void __fastcall UpdateIndexDefs();
	virtual bool __fastcall GetIsIndexField(Data::Db::TField* AField);
	virtual void __fastcall ResetAggField(Data::Db::TField* AField);
	virtual System::Variant __fastcall GetAggregateValue(Data::Db::TField* AField);
	virtual Data::Db::TFieldClass __fastcall GetFieldClass(Data::Db::TFieldType FieldType)/* overload */;
	virtual unsigned __fastcall CalcBookmarkSize();
	HIDESBASE void __fastcall CheckBidirectional();
	void __fastcall CheckTable();
	void __fastcall CheckFetchedAll();
	void __fastcall CheckAsyncOpenComplete();
	void __fastcall CheckAsyncOpenFailed();
	void __fastcall CheckAsyncExecFinished();
	virtual void __fastcall DoAfterOpenOrExecute();
	virtual void __fastcall ReleaseBase(bool AOffline);
	virtual void __fastcall CheckOnline(bool APrepare = true);
	bool __fastcall MasterRangeChanged();
	virtual void __fastcall CheckMasterRange();
	void __fastcall CheckDetailRecords(bool AEnforce);
	virtual void __fastcall MasterDisabled(System::TObject* Sender);
	virtual void __fastcall MasterChanged(System::TObject* Sender);
	virtual void __fastcall MasterDefined(System::TObject* Sender);
	void __fastcall BeginForceRow(Firedac::Dats::TFDDatSRow* ARow, bool AReadWrite, bool AWithCalcFields);
	virtual void __fastcall CheckCachedUpdatesMode();
	virtual int __fastcall DoApplyUpdates(Firedac::Dats::TFDDatSTable* ATable, int AMaxErrors);
	virtual void __fastcall DoCachedUpdatesChanged();
	virtual int __fastcall DoFetch(Firedac::Dats::TFDDatSTable* ATable, bool AAll, TFDFetchDirection ADirection = (TFDFetchDirection)(0x1))/* overload */;
	virtual bool __fastcall DoFetch(Firedac::Dats::TFDDatSRow* ARow, int AColumn, Firedac::Phys::Intf::TFDPhysFillRowOptions ARowOptions)/* overload */;
	virtual int __fastcall DoPurge(Firedac::Dats::TFDDatSView* AView, TFDFetchDirection ADirection = (TFDFetchDirection)(0x1));
	virtual void __fastcall DoMasterClearDetails(bool AAll);
	virtual void __fastcall DoCreateFields();
	virtual void __fastcall DoFilteringUpdated(bool AResync);
	virtual bool __fastcall DoFilterRow(Firedac::Dats::TFDDatSMechFilter* AMech, Firedac::Dats::TFDDatSRow* ARow, Firedac::Dats::TFDDatSRowVersion AVersion);
	virtual System::UnicodeString __fastcall DoGetTableName();
	virtual void __fastcall DoGetStorageMergeModes(Firedac::Stan::Intf::TFDMergeDataMode &AData, Firedac::Stan::Intf::TFDMergeMetaMode &AMeta);
	virtual void __fastcall DoMasterDefined();
	virtual void __fastcall DoMasterReset();
	virtual bool __fastcall DoMasterParamChanged(System::Generics::Collections::TList__1<Data::Db::TField*>* AMasterFieldList);
	virtual void __fastcall DoMasterParamSetValues(System::Generics::Collections::TList__1<Data::Db::TField*>* AMasterFieldList);
	virtual bool __fastcall DoMasterParamDependent(System::Generics::Collections::TList__1<Data::Db::TField*>* AMasterFieldList);
	virtual System::UnicodeString __fastcall DoAdjustSortFields(const System::UnicodeString AFields, const System::UnicodeString AExpression, Firedac::Stan::Intf::TFDSortOptions &AIndexOptions);
	virtual void __fastcall DoSortOrderChanging();
	virtual void __fastcall DoSortOrderChanged();
	virtual void __fastcall DoDefineDatSManager();
	virtual void __fastcall DoResetDatSManager();
	virtual void __fastcall DoResetAtLoading();
	virtual void __fastcall DoPrepareSource();
	virtual void __fastcall DoUnprepareSource();
	virtual void __fastcall DoOpenSource(bool ABlocked, bool AInfoQuery, bool AStructQuery);
	virtual bool __fastcall DoIsSourceOpen();
	virtual bool __fastcall DoIsSourceAsync();
	virtual bool __fastcall DoIsSourceOnline();
	virtual void __fastcall DoCloseSource();
	virtual Firedac::Dats::TFDDatSManager* __fastcall DoGetDatSManager();
	virtual void __fastcall DoProcessUpdateRequest(Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Option::TFDUpdateRowOptions AOptions);
	virtual void __fastcall DoExecuteSource(int ATimes, int AOffset);
	virtual void __fastcall DoUpdateErrorHandler(Firedac::Dats::TFDDatSRow* ARow, System::Sysutils::Exception* AException, Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Intf::TFDErrorAction &AAction);
	virtual void __fastcall DoUpdateRecordHandler(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Option::TFDUpdateRequest ARequest, Firedac::Stan::Option::TFDUpdateRowOptions AOptions, Firedac::Stan::Intf::TFDErrorAction &AAction);
	virtual void __fastcall DoReconcileErrorHandler(Firedac::Dats::TFDDatSRow* ARow, Firedac::Stan::Error::EFDException* AException, Firedac::Dats::TFDDatSRowState AUpdateKind, Firedac::Dapt::Intf::TFDDAptReconcileAction &AAction);
	virtual void __fastcall DoCloneCursor(bool AReset, bool AKeepSettings);
	void __fastcall InitColumnsFromFieldDefs(Data::Db::TFieldDefs* ADefs, Firedac::Dats::TFDDatSTable* ATable, Firedac::Dats::TFDDatSManager* ADatSManager, int AArraySize);
	void __fastcall InitTable(Firedac::Dats::TFDDatSTable* ATable, bool AWithFields);
	virtual void __fastcall DoAfterApplyUpdate(int AErrors);
	void __fastcall ApplyUpdatesComplete(int AMaxErrors, int AErrors);
	bool __fastcall DoReconcile(bool AOnSuccess, bool ACommitApplied);
	virtual void __fastcall DoBeforeApplyUpdate();
	virtual void __fastcall DoBeforeGetRecords();
	virtual void __fastcall DoAfterGetRecords(int AFromRecord, int AToRecord);
	virtual void __fastcall DoBeforeRowRequest();
	virtual void __fastcall DoAfterRowRequest();
	virtual void __fastcall DoBeforeExecute();
	virtual void __fastcall DoAfterExecute();
	void __fastcall EndForceRow();
	Firedac::Dats::TFDDatSRowVersion __fastcall GetRowVersion();
	virtual bool __fastcall GetExists();
	bool __fastcall IsForceRowMode();
	Firedac::Dats::TFDDatSView* __fastcall BuildViewForIndex(TFDIndex* AIndex);
	void __fastcall CheckFetchedAllBeforeSorting();
	virtual Firedac::Stan::Param::TFDParams* __fastcall GetParams();
	void __fastcall SetColumnAttributes(Data::Db::TFieldLifeCycles ALifeCycles);
	virtual bool __fastcall SaveToDFM(TFDDataSet* const AAncestor);
	void __fastcall StartWait();
	void __fastcall StopWait();
	virtual void __fastcall UpdateRecordCount();
	System::UnicodeString __fastcall GetDisplayName();
	virtual bool __fastcall DoStoredActivation();
	virtual void __fastcall InternalResetRange();
	int __fastcall BeginLocate(TFDDataSetLocateOptions AOptions, System::PInteger ApRecordIndex);
	void __fastcall EndLocate(bool AResult, int APos, TFDDataSetLocateOptions AOptions, System::PInteger ApRecordIndex);
	int __fastcall BeginLookup(TFDDataSetLocateOptions AOptions, System::PInteger ApRecordIndex);
	System::Variant __fastcall EndLookup(bool AResult, int APos, const System::UnicodeString AResultFields, System::PInteger ApRecordIndex);
	virtual void __fastcall LoadFromStorage(System::Classes::TStream* AStream, const System::UnicodeString AFileName, Firedac::Stan::Intf::TFDStorageFormat AFormat);
	virtual void __fastcall SaveToStorage(const System::UnicodeString AFileName, System::Classes::TStream* AStream, Firedac::Stan::Intf::TFDStorageFormat AFormat);
	__property Firedac::Dats::TFDDatSUpdatesJournal* Updates = {read=GetUpdates};
	__property Firedac::Stan::Param::TFDParams* Params = {read=GetParams, write=SetParams, stored=false};
	__property int ParamCount = {read=GetParamsCount, nodefault};
	__property BookmarkSize = {write=SetBookmarkSize};
	__property Firedac::Dats::TFDDatSView* SortView = {read=FSortView};
	__property Firedac::Stan::Option::_di_IFDStanOptions OptionsIntfImpl = {read=GetOptionsIntf};
	__property Firedac::Stan::Option::TFDFormatOptions* FormatOptions = {read=GetFormatOptions, write=SetFormatOptions};
	__property Firedac::Stan::Option::TFDFetchOptions* FetchOptions = {read=GetFetchOptions, write=SetFetchOptions};
	__property Firedac::Stan::Option::TFDBottomUpdateOptions* UpdateOptions = {read=GetUpdateOptions, write=SetUpdateOptions};
	__property Firedac::Stan::Option::TFDBottomResourceOptions* ResourceOptions = {read=GetResourceOptions, write=SetResourceOptions};
	
public:
	__fastcall virtual TFDDataSet(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TFDDataSet();
	void __fastcall AddIndex(const System::UnicodeString AName, const System::UnicodeString AFields, const System::UnicodeString AExpression, Firedac::Stan::Intf::TFDSortOptions AOptions, const System::UnicodeString ADescFields = System::UnicodeString(), const System::UnicodeString ACaseInsFields = System::UnicodeString(), bool ADistinct = false);
	void __fastcall ApplyMaster();
	void __fastcall ApplyRange();
	int __fastcall ApplyUpdates(int AMaxErrors = 0xffffffff);
	virtual void __fastcall AttachTable(Firedac::Dats::TFDDatSTable* ATable, Firedac::Dats::TFDDatSView* AView);
	void __fastcall BeginBatch(bool ARegular = false);
	void __fastcall EndBatch();
#ifndef _WIN64
	virtual bool __fastcall BookmarkValid(System::DynamicArray<System::Byte> ABookmark);
#else /* _WIN64 */
	virtual bool __fastcall BookmarkValid(System::TArray__1<System::Byte> ABookmark);
#endif /* _WIN64 */
	bool __fastcall BookmarkStrValid(System::AnsiString ABookmarkStr);
	virtual void __fastcall Cancel();
	void __fastcall CancelRange();
	void __fastcall CancelUpdates();
	void __fastcall ClearBlobs();
	void __fastcall ClearDetails();
	virtual void __fastcall CloneCursor(TFDDataSet* ASource, bool AReset = false, bool AKeepSettings = false);
	virtual Data::Db::TDataSet* __fastcall GetClonedDataSet(bool AWithSettings);
	void __fastcall CommitUpdates();
#ifndef _WIN64
	virtual int __fastcall CompareBookmarks(System::DynamicArray<System::Byte> Bookmark1, System::DynamicArray<System::Byte> Bookmark2);
#else /* _WIN64 */
	virtual int __fastcall CompareBookmarks(System::TArray__1<System::Byte> Bookmark1, System::TArray__1<System::Byte> Bookmark2);
#endif /* _WIN64 */
	void __fastcall CopyRecord(Data::Db::TDataSet* ASource);
	void __fastcall CopyDataSet(Data::Db::TDataSet* ASource, TFDCopyDataSetOptions AOptions = (TFDCopyDataSetOptions() << Firedac_Comp_Dataset__3::coRestart << Firedac_Comp_Dataset__3::coAppend ));
	virtual void __fastcall CreateDataSet();
	virtual System::Classes::TStream* __fastcall CreateBlobStream(Data::Db::TField* Field, Data::Db::TBlobStreamMode Mode);
	Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator __fastcall CreateExpression(const System::UnicodeString AExpr, Firedac::Stan::Intf::TFDExpressionOptions AOptions = Firedac::Stan::Intf::TFDExpressionOptions() );
	System::Classes::TStream* __fastcall CreateXMLStream();
	void __fastcall DeleteIndex(const System::UnicodeString AName);
	void __fastcall DeleteIndexes();
	void __fastcall DisableConstraints();
	virtual void __fastcall Disconnect(bool AAbortJob = false);
	void __fastcall EditKey();
	void __fastcall EditRangeEnd();
	void __fastcall EditRangeStart();
	void __fastcall EmptyDataSet();
	void __fastcall EmptyView();
	void __fastcall EnableConstraints();
	virtual void __fastcall Execute(int ATimes = 0x0, int AOffset = 0x0);
	bool __fastcall OpenOrExecute();
	void __fastcall FetchAgain();
	void __fastcall FetchAll();
	void __fastcall FetchBlobs();
	void __fastcall FetchDetails(Data::Db::TDataSetField* ADataSetField = (Data::Db::TDataSetField*)(0x0));
	int __fastcall FetchNext();
	bool __fastcall FindKey(const System::TVarRec *AKeyValues, const int AKeyValues_High);
	void __fastcall FindNearest(const System::TVarRec *AKeyValues, const int AKeyValues_High);
	Firedac::Stan::Param::TFDParam* __fastcall FindParam(const System::UnicodeString AValue);
	virtual bool __fastcall GetCurrentRecord(NativeInt Buffer)/* overload */;
	virtual void __fastcall GetDetailLinkFields(System::Generics::Collections::TList__1<Data::Db::TField*>* AMasterFields, System::Generics::Collections::TList__1<Data::Db::TField*>* ADetailFields)/* overload */;
	Data::Db::TField* __fastcall GetColumnField(Firedac::Dats::TFDDatSColumn* AColumn);
	Firedac::Dats::TFDDatSColumn* __fastcall GetFieldColumn(Data::Db::TField* AField)/* overload */;
#ifndef _WIN64
	virtual bool __fastcall GetFieldData(int AFieldNo, System::DynamicArray<System::Byte> &ABuffer)/* overload */;
	virtual bool __fastcall GetFieldData(Data::Db::TField* AField, System::DynamicArray<System::Byte> &ABuffer)/* overload */;
#else /* _WIN64 */
	virtual bool __fastcall GetFieldData(int AFieldNo, System::TArray__1<System::Byte> &ABuffer)/* overload */;
	virtual bool __fastcall GetFieldData(Data::Db::TField* AField, System::TArray__1<System::Byte> &ABuffer)/* overload */;
#endif /* _WIN64 */
	virtual System::Variant __fastcall GetStateFieldValue(Data::Db::TDataSetState AState, Data::Db::TField* AField);
	Data::Db::TGroupPosInds __fastcall GetGroupState(int ALevel);
	void __fastcall GetIndexNames(System::Classes::TStrings* AList);
	int __fastcall GetNextPacket();
#ifndef _WIN64
	Firedac::Dats::TFDDatSRow* __fastcall GetRow(NativeInt ABuffer = (NativeInt)(0x0), bool AForceBufferRead = false);
#else /* _WIN64 */
	Firedac::Dats::TFDDatSRow* __fastcall GetRow(NativeInt ABuffer = (NativeInt)(0LL), bool AForceBufferRead = false);
#endif /* _WIN64 */
	Firedac::Dats::TFDDatSRow* __fastcall GetLocateRow();
	Firedac::Dats::TFDDatSRow* __fastcall GetParentRow();
	void __fastcall GotoCurrent(TFDDataSet* ADataSet);
	bool __fastcall GotoKey();
	void __fastcall GotoNearest();
	bool __fastcall IsLinkedNested();
	bool __fastcall IsLinkedDetail();
	bool __fastcall IsLinked();
	bool __fastcall IsRanged();
	virtual bool __fastcall IsSequenced();
	bool __fastcall IsIndexed();
	virtual bool __fastcall Locate(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, Data::Db::TLocateOptions AOptions = Data::Db::TLocateOptions() );
	virtual bool __fastcall LocateEx(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, TFDDataSetLocateOptions AOptions = TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0))/* overload */;
	virtual bool __fastcall LocateEx(const System::UnicodeString AExpression, TFDDataSetLocateOptions AOptions = TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0))/* overload */;
	virtual System::Variant __fastcall Lookup(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, const System::UnicodeString AResultFields);
	virtual System::Variant __fastcall LookupEx(const System::UnicodeString AKeyFields, const System::Variant &AKeyValues, const System::UnicodeString AResultFields, TFDDataSetLocateOptions AOptions = TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0))/* overload */;
	virtual System::Variant __fastcall LookupEx(const System::UnicodeString AExpression, const System::UnicodeString AResultFields, TFDDataSetLocateOptions AOptions = TFDDataSetLocateOptions() , System::PInteger ApRecordIndex = (System::PInteger)(0x0))/* overload */;
	void __fastcall MergeDataSet(TFDDataSet* ASource, Firedac::Stan::Intf::TFDMergeDataMode AData = (Firedac::Stan::Intf::TFDMergeDataMode)(0x3), Firedac::Stan::Intf::TFDMergeMetaMode AMeta = (Firedac::Stan::Intf::TFDMergeMetaMode)(0x0), Firedac::Stan::Intf::TFDMergeOptions AOptions = Firedac::Stan::Intf::TFDMergeOptions() );
	void __fastcall Offline();
	void __fastcall Online();
	void __fastcall Release();
	Firedac::Stan::Param::TFDParam* __fastcall ParamByName(const System::UnicodeString AValue);
	void __fastcall ParseIndexFieldNames(/* out */ System::UnicodeString &AOrderFields, /* out */ System::UnicodeString &ADescFields, /* out */ System::UnicodeString &ANoCaseFields);
	virtual void __fastcall Post();
	bool __fastcall Reconcile(bool ACommitApplied = false);
	bool __fastcall RefreshRecord(bool AClearRow = true);
	void __fastcall RefreshUnknownRecord(const System::Variant *AValues, const int AValues_High, bool AReread = true, bool ASetPos = true);
	void __fastcall RevertRecord();
	void __fastcall SetFieldAttributes(Data::Db::TField* AField, Firedac::Dats::TFDDatSColumn* AColumn)/* overload */;
	void __fastcall SetFieldAttributes(Data::Db::TFieldLifeCycles ALifeCycles, Data::Db::TFields* AFields)/* overload */;
	void __fastcall SetFieldAttributes(Data::Db::TFieldLifeCycles ALifeCycles)/* overload */;
	void __fastcall SetFieldsKeyIncAttributes();
	void __fastcall SetFieldAutoGenerateValue(Data::Db::TField* AField, Data::Db::TAutoRefreshFlag AValue);
	void __fastcall SetRangeEnd();
	void __fastcall SetRangeStart();
	void __fastcall SetRange(const System::TVarRec *AStartValues, const int AStartValues_High, const System::TVarRec *AEndValues, const int AEndValues_High, bool AStartExclusive = false, bool AEndExclusive = false);
	void __fastcall SetKey();
	bool __fastcall UndoLastChange(bool AFollowChange);
	virtual Data::Db::TUpdateStatus __fastcall UpdateStatus();
	void __fastcall UpdateConstraints();
	void __fastcall UpdateAttributes();
	void __fastcall LoadFromStream(System::Classes::TStream* AStream, Firedac::Stan::Intf::TFDStorageFormat AFormat = (Firedac::Stan::Intf::TFDStorageFormat)(0x0));
	void __fastcall LoadFromFile(const System::UnicodeString AFileName = System::UnicodeString(), Firedac::Stan::Intf::TFDStorageFormat AFormat = (Firedac::Stan::Intf::TFDStorageFormat)(0x0));
	void __fastcall SaveToStream(System::Classes::TStream* AStream, Firedac::Stan::Intf::TFDStorageFormat AFormat = (Firedac::Stan::Intf::TFDStorageFormat)(0x0));
	void __fastcall SaveToFile(const System::UnicodeString AFileName = System::UnicodeString(), Firedac::Stan::Intf::TFDStorageFormat AFormat = (Firedac::Stan::Intf::TFDStorageFormat)(0x0));
	bool __fastcall LoadFromFileAtOpen();
	bool __fastcall SaveToFileAtClose();
	void __fastcall AddListener(const _di_IFDDataSetListener AListener);
	void __fastcall RemoveListener(const _di_IFDDataSetListener AListener);
	__property TFDStoredActivationUsage ActiveStoredUsage = {read=FActiveStoredUsage, write=FActiveStoredUsage, default=3};
	__property System::UnicodeString ActualDetailFields = {read=GetActualDetailFields};
	__property TFDAggregates* Aggregates = {read=FAggregates, write=SetAggregates, stored=IsAS};
	__property bool AggregatesActive = {read=FAggregatesActive, write=SetAggregatesActive, default=0};
	__property bool CachedUpdates = {read=GetCachedUpdates, write=SetCachedUpdates, default=0};
	__property int ChangeCount = {read=GetChangeCount, nodefault};
	__property bool ClientCursor = {read=FClientCursor, nodefault};
	__property TFDDataSet* CloneSource = {read=FCloneSource};
	__property Constraints = {stored=IsCS};
	__property bool ConstraintsEnabled = {read=GetConstraintsEnabled, write=SetConstraintsEnabled, default=0};
	__property _di_IFDDataSetReference Data = {read=GetData, write=SetData};
	__property _di_IFDDataSetReference Delta = {read=GetDelta};
	__property bool Exists = {read=GetExists, nodefault};
	__property Firedac::Stan::Error::EFDException* RowError = {read=GetRowError};
	__property _di_IFDDataSetReference FilteredData = {read=GetFilteredData};
	__property Firedac::Dats::TFDDatSManager* DatSManager = {read=DoGetDatSManager};
	__property int GroupingLevel = {read=GetGroupingLevel, nodefault};
	__property bool UpdatesPending = {read=GetUpdatesPending, nodefault};
	__property Data::Db::TIndexDefs* IndexDefs = {read=FIndexDefs, write=SetIndexDefs, stored=IsIDS};
	__property TFDIndexes* Indexes = {read=FIndexes, write=SetIndexes, stored=IsIS};
	__property bool IndexesActive = {read=FIndexesActive, write=SetIndexesActive, default=1};
	__property System::UnicodeString IndexName = {read=FIndexName, write=SetIndexName};
	__property System::UnicodeString LocalIndexName = {read=FLocalIndexName};
	__property System::UnicodeString IndexFieldNames = {read=GetIndexFieldNames, write=SetIndexFieldNames};
	__property Data::Db::TField* IndexFields[int AIndex] = {read=GetIndexField};
	__property int IndexFieldCount = {read=GetIndexFieldCount, nodefault};
	__property bool KeyExclusive = {read=GetKeyExclusive, write=SetKeyExclusive, nodefault};
	__property int KeyFieldCount = {read=GetKeyFieldCount, write=SetKeyFieldCount, nodefault};
	__property TFDMasterDataLink* MasterLink = {read=FMasterLink};
	__property Data::Db::TDataSource* MasterSource = {read=GetDataSource, write=SetMasterSource};
	__property System::UnicodeString MasterFields = {read=GetMasterFields, write=SetMasterFields};
	__property System::UnicodeString DetailFields = {read=FDetailFields, write=FDetailFields};
	__property Firedac::Stan::Option::_di_IFDStanOptions OptionsIntf = {read=GetOptionsIntf, write=SetOptionsIntf};
	__property TFDDataSet* ParentDataSet = {read=FParentDataSet};
	__property __int64 SavePoint = {read=GetSavePoint, write=SetSavePoint};
	__property bool SourceEOF = {read=FSourceEOF, nodefault};
	__property Firedac::Dats::TFDDatSView* SourceView = {read=FSourceView};
	__property TFDUpdateRecordTypes FilterChanges = {read=FFilterChanges, write=SetFilterChanges, default=11};
	__property Firedac::Dats::TFDDatSTable* Table = {read=FTable};
	__property Firedac::Dats::TFDDatSView* BaseView = {read=FView};
	__property Firedac::Stan::Util::TFDEncoder* Encoder = {read=FEncoder};
	__property TFDAfterApplyUpdatesEvent AfterApplyUpdates = {read=FAfterApplyUpdates, write=FAfterApplyUpdates};
	__property TFDDataSetEvent AfterExecute = {read=FAfterExecute, write=FAfterExecute};
	__property TFDDataSetEvent AfterGetRecords = {read=FAfterGetRecords, write=FAfterGetRecords};
	__property TFDDataSetEvent AfterGetRecord = {read=FAfterGetRecord, write=FAfterGetRecord};
	__property TFDDataSetEvent AfterRowRequest = {read=FAfterRowRequest, write=FAfterRowRequest};
	__property TFDDataSetEvent BeforeApplyUpdates = {read=FBeforeApplyUpdates, write=FBeforeApplyUpdates};
	__property TFDDataSetEvent BeforeExecute = {read=FBeforeExecute, write=FBeforeExecute};
	__property TFDDataSetEvent BeforeGetRecords = {read=FBeforeGetRecords, write=FBeforeGetRecords};
	__property TFDDataSetEvent BeforeRowRequest = {read=FBeforeRowRequest, write=FBeforeRowRequest};
	__property TFDReconcileErrorEvent OnReconcileError = {read=FOnReconcileError, write=FOnReconcileError};
	__property TFDUpdateRecordEvent OnUpdateRecord = {read=FOnUpdateRecord, write=FOnUpdateRecord};
	__property TFDUpdateErrorEvent OnUpdateError = {read=FOnUpdateError, write=FOnUpdateError};
	__property TFDDataSetEvent OnMasterSetValues = {read=FOnMasterSetValues, write=FOnMasterSetValues};
	/* Hoisted overloads: */
	
protected:
#ifndef _WIN64
	inline void __fastcall  GetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::DynamicArray<System::Byte> Data){ Data::Db::TDataSet::GetBookmarkData(Buffer, Data); }
#else /* _WIN64 */
	inline void __fastcall  GetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::TArray__1<System::Byte> Data){ Data::Db::TDataSet::GetBookmarkData(Buffer, Data); }
#endif /* _WIN64 */
	inline void __fastcall  GetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, void * Data){ Data::Db::TDataSet::GetBookmarkData(Buffer, Data); }
	inline Data::Db::TBookmarkFlag __fastcall  GetBookmarkFlag _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer){ return Data::Db::TDataSet::GetBookmarkFlag(Buffer); }
	inline void __fastcall  InitRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer){ Data::Db::TDataSet::InitRecord(Buffer); }
	inline void __fastcall  InternalAddRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, bool Append){ Data::Db::TDataSet::InternalAddRecord(Buffer, Append); }
	inline void __fastcall  InternalAddRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (void * Buffer, bool Append){ Data::Db::TDataSet::InternalAddRecord(Buffer, Append); }
	inline void __fastcall  InternalSetToRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer){ Data::Db::TDataSet::InternalSetToRecord(Buffer); }
#ifndef _WIN64
	inline void __fastcall  SetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::DynamicArray<System::Byte> Data){ Data::Db::TDataSet::SetBookmarkData(Buffer, Data); }
#else /* _WIN64 */
	inline void __fastcall  SetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, System::TArray__1<System::Byte> Data){ Data::Db::TDataSet::SetBookmarkData(Buffer, Data); }
#endif /* _WIN64 */
	inline void __fastcall  SetBookmarkData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer, void * Data){ Data::Db::TDataSet::SetBookmarkData(Buffer, Data); }
#ifndef _WIN64
	inline void __fastcall  SetFieldData(Data::Db::TField* Field, System::DynamicArray<System::Byte> Buffer, bool NativeFormat){ Data::Db::TDataSet::SetFieldData(Field, Buffer, NativeFormat); }
#else /* _WIN64 */
	inline void __fastcall  SetFieldData(Data::Db::TField* Field, System::TArray__1<System::Byte> Buffer, bool NativeFormat){ Data::Db::TDataSet::SetFieldData(Field, Buffer, NativeFormat); }
#endif /* _WIN64 */
	inline void __fastcall  SetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (Data::Db::TField* Field, void * Buffer){ Data::Db::TDataSet::SetFieldData(Field, Buffer); }
	inline void __fastcall  SetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (Data::Db::TField* Field, void * Buffer, bool NativeFormat){ Data::Db::TDataSet::SetFieldData(Field, Buffer, NativeFormat); }
	inline Data::Db::TFieldClass __fastcall  GetFieldClass(Data::Db::TFieldDef* FieldDef){ return Data::Db::TDataSet::GetFieldClass(FieldDef); }
	
public:
	inline bool __fastcall  GetCurrentRecord _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::PByte Buffer){ return Data::Db::TDataSet::GetCurrentRecord(Buffer); }
	inline void __fastcall  GetDetailLinkFields _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (System::Classes::TList* MasterFields, System::Classes::TList* DetailFields){ Data::Db::TDataSet::GetDetailLinkFields(MasterFields, DetailFields); }
#ifndef _WIN64
	inline bool __fastcall  GetFieldData(Data::Db::TField* Field, System::DynamicArray<System::Byte> &Buffer, bool NativeFormat){ return Data::Db::TDataSet::GetFieldData(Field, Buffer, NativeFormat); }
#else /* _WIN64 */
	inline bool __fastcall  GetFieldData(Data::Db::TField* Field, System::TArray__1<System::Byte> &Buffer, bool NativeFormat){ return Data::Db::TDataSet::GetFieldData(Field, Buffer, NativeFormat); }
#endif /* _WIN64 */
	inline bool __fastcall  GetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (Data::Db::TField* Field, void * Buffer){ return Data::Db::TDataSet::GetFieldData(Field, Buffer); }
	inline bool __fastcall  GetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (int FieldNo, void * Buffer){ return Data::Db::TDataSet::GetFieldData(FieldNo, Buffer); }
	inline bool __fastcall  GetFieldData _DEPRECATED_ATTRIBUTE1("Use overloaded method instead") (Data::Db::TField* Field, void * Buffer, bool NativeFormat){ return Data::Db::TDataSet::GetFieldData(Field, Buffer, NativeFormat); }
	
private:
	void *__IDataSetCommandSupport;	// Data::Db::IDataSetCommandSupport 
	void *__IFDDatSTableDataCallback;	// Firedac::Dats::IFDDatSTableDataCallback 
	void *__IFDPhysLocalSQLAdapter;	// Firedac::Phys::Intf::IFDPhysLocalSQLAdapter 
	void *__IFDDataSetReference;	// IFDDataSetReference 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {285C0B2D-C123-444A-9FD3-9C6D1DE3762B}
	operator Data::Db::_di_IDataSetCommandSupport()
	{
		Data::Db::_di_IDataSetCommandSupport intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Data::Db::IDataSetCommandSupport*(void) { return (Data::Db::IDataSetCommandSupport*)&__IDataSetCommandSupport; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2021}
	operator Firedac::Dats::_di_IFDDatSTableDataCallback()
	{
		Firedac::Dats::_di_IFDDatSTableDataCallback intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Dats::IFDDatSTableDataCallback*(void) { return (Firedac::Dats::IFDDatSTableDataCallback*)&__IFDDatSTableDataCallback; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2118}
	operator Firedac::Phys::Intf::_di_IFDPhysLocalSQLAdapter()
	{
		Firedac::Phys::Intf::_di_IFDPhysLocalSQLAdapter intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Phys::Intf::IFDPhysLocalSQLAdapter*(void) { return (Firedac::Phys::Intf::IFDPhysLocalSQLAdapter*)&__IFDPhysLocalSQLAdapter; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2018}
	operator Firedac::Stan::Option::_di_IFDStanOptions() { return OptionsIntfImpl; }
	#else
	operator Firedac::Stan::Option::IFDStanOptions*(void) { return (Firedac::Stan::Option::IFDStanOptions*)OptionsIntfImpl; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2400}
	operator _di_IFDDataSetReference()
	{
		_di_IFDDataSetReference intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IFDDataSetReference*(void) { return (IFDDataSetReference*)&__IFDDataSetReference; }
	#endif
	
};


class PASCALIMPLEMENTATION TFDXMLField : public Data::Db::TWideMemoField
{
	typedef Data::Db::TWideMemoField inherited;
	
private:
	System::UnicodeString __fastcall GetSchemaName();
	
protected:
	virtual System::UnicodeString __fastcall GetClassDesc();
	
public:
	__fastcall virtual TFDXMLField(System::Classes::TComponent* AOwner);
	__property System::UnicodeString SchemaName = {read=GetSchemaName};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TFDXMLField() { }
	
};


class PASCALIMPLEMENTATION TFDAutoIncField : public Data::Db::TAutoIncField
{
	typedef Data::Db::TAutoIncField inherited;
	
private:
	int FAutoIncrementSeed;
	int FAutoIncrementStep;
	bool FClientAutoIncrement;
	bool FServerAutoIncrement;
	System::UnicodeString FGeneratorName;
	void __fastcall SetAutoIncrementSeed(const int AValue);
	void __fastcall SetAutoIncrementStep(const int AValue);
	void __fastcall SetClientAutoIncrement(const bool AValue);
	void __fastcall SetServerAutoIncrement(const bool AValue);
	bool __fastcall GetIdentityInsert();
	void __fastcall SetIdentityInsert(const bool AValue);
	
public:
	__fastcall virtual TFDAutoIncField(System::Classes::TComponent* AOwner);
	
__published:
	__property AutoGenerateValue = {default=1};
	__property ReadOnly = {default=1};
	__property ProviderFlags = {default=2};
	__property bool ClientAutoIncrement = {read=FClientAutoIncrement, write=SetClientAutoIncrement, default=1};
	__property bool ServerAutoIncrement = {read=FServerAutoIncrement, write=SetServerAutoIncrement, default=1};
	__property int AutoIncrementSeed = {read=FAutoIncrementSeed, write=SetAutoIncrementSeed, default=-1};
	__property int AutoIncrementStep = {read=FAutoIncrementStep, write=SetAutoIncrementStep, default=-1};
	__property bool IdentityInsert = {read=GetIdentityInsert, write=SetIdentityInsert, default=0};
	__property System::UnicodeString GeneratorName = {read=FGeneratorName, write=FGeneratorName};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TFDAutoIncField() { }
	
};


class PASCALIMPLEMENTATION TFDSQLTimeIntervalField : public Data::Db::TField
{
	typedef Data::Db::TField inherited;
	
private:
	Firedac::Stan::Sqltimeint::TFDSQLTimeInterval __fastcall GetAsInterval();
	void __fastcall SetAsInterval(const Firedac::Stan::Sqltimeint::TFDSQLTimeInterval &AValue);
	Firedac::Stan::Sqltimeint::TFDSQLTimeIntervalKind __fastcall GetIntervalKind();
	bool __fastcall GetIntRec(Firedac::Stan::Sqltimeint::TFDSQLTimeInterval &ARec);
	void __fastcall SetIntRec(Firedac::Stan::Sqltimeint::TFDSQLTimeInterval &ARec);
	
protected:
	virtual System::UnicodeString __fastcall GetClassDesc();
	virtual System::UnicodeString __fastcall GetAsString();
	virtual void __fastcall SetAsString(const System::UnicodeString AValue);
	virtual System::Variant __fastcall GetAsVariant();
	virtual void __fastcall SetVarValue(const System::Variant &AValue);
	
public:
	__fastcall virtual TFDSQLTimeIntervalField(System::Classes::TComponent* AOwner);
	__property Firedac::Stan::Sqltimeint::TFDSQLTimeIntervalKind IntervalKind = {read=GetIntervalKind, nodefault};
	__property Firedac::Stan::Sqltimeint::TFDSQLTimeInterval AsSQLTimeInterval = {read=GetAsInterval, write=SetAsInterval};
public:
	/* TField.Destroy */ inline __fastcall virtual ~TFDSQLTimeIntervalField() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDBlobStream : public System::Classes::TMemoryStream
{
	typedef System::Classes::TMemoryStream inherited;
	
private:
	Data::Db::TField* FField;
	TFDDataSet* FDataSet;
	NativeInt FBuffer;
	bool FModified;
	bool FWritten;
	Data::Db::TBlobStreamMode FMode;
	void __fastcall ReadBlobData();
	void __fastcall CheckWrite();
	
protected:
	virtual void * __fastcall Realloc(NativeInt &ANewCapacity);
	
public:
	__fastcall TFDBlobStream(Data::Db::TField* AField, Data::Db::TBlobStreamMode AMode);
	__fastcall virtual ~TFDBlobStream();
	void __fastcall Truncate();
	virtual int __fastcall Write(const void *ABuffer, int ACount)/* overload */;
#ifndef _WIN64
	virtual int __fastcall Write(const System::DynamicArray<System::Byte> ABuffer, int AOffset, int ACount)/* overload */;
#else /* _WIN64 */
	virtual int __fastcall Write(const System::TArray__1<System::Byte> ABuffer, int AOffset, int ACount)/* overload */;
#endif /* _WIN64 */
	/* Hoisted overloads: */
	
public:
#ifndef _WIN64
	inline int __fastcall  Write(const System::DynamicArray<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
#else /* _WIN64 */
	inline int __fastcall  Write(const System::TArray__1<System::Byte> Buffer, int Count){ return System::Classes::TStream::Write(Buffer, Count); }
#endif /* _WIN64 */
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
#ifndef _WIN64
static const NativeInt C_NIL = NativeInt(0);
#else /* _WIN64 */
static const NativeInt C_NIL = 0LL;
#endif /* _WIN64 */
extern DELPHI_PACKAGE bool __fastcall FDCheckStoredUsage(System::Classes::TComponentState AComponentState, TFDStoredActivationUsage AUsage);
}	/* namespace Dataset */
}	/* namespace Comp */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_COMP_DATASET)
using namespace Firedac::Comp::Dataset;
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
#endif	// Firedac_Comp_DatasetHPP
