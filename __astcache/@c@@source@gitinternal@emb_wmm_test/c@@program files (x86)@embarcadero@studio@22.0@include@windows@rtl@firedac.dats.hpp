// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.DatS.pas' rev: 35.00 (Windows)

#ifndef Firedac_DatsHPP
#define Firedac_DatsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Windows.hpp>
#include <System.Classes.hpp>
#include <FireDAC.Stan.Intf.hpp>
#include <FireDAC.Stan.Error.hpp>
#include <FireDAC.Stan.Util.hpp>
#include <FireDAC.Stan.Consts.hpp>
#include <FireDAC.Stan.Option.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Dats
{
//-- forward type declarations -----------------------------------------------
struct TFDDatSLoadState;
struct TFDDatSNotifyParam;
class DELPHICLASS TFDDatSObject;
class DELPHICLASS TFDDatSNamedObject;
class DELPHICLASS TFDDatSBindedObject;
class DELPHICLASS TFDDatSList;
class DELPHICLASS TFDDatSNamedList;
class DELPHICLASS TFDDatSBindedList;
class DELPHICLASS TFDDatSColumn;
class DELPHICLASS TFDDatSTableExpressionDS;
class DELPHICLASS TFDDatSColumnList;
class DELPHICLASS TFDDatSColumnSublist;
class DELPHICLASS TFDDatSConstraintBase;
class DELPHICLASS TFDDatSConstraintList;
class DELPHICLASS TFDDatSUniqueConstraint;
class DELPHICLASS TFDDatSForeignKeyConstraint;
class DELPHICLASS TFDDatSCheckConstraint;
class DELPHICLASS TFDDatSRelation;
class DELPHICLASS TFDDatSRelationList;
__interface DELPHIINTERFACE IFDDatSMechSort;
typedef System::DelphiInterface<IFDDatSMechSort> _di_IFDDatSMechSort;
class DELPHICLASS TFDDatSMechBase;
class DELPHICLASS TFDDatSViewMechList;
class DELPHICLASS TFDDatSMechSort;
class DELPHICLASS TFDDatSMechRowState;
class DELPHICLASS TFDDatSMechRange;
class DELPHICLASS TFDDatSMechDistinct;
class DELPHICLASS TFDDatSMechFilter;
class DELPHICLASS TFDDatSMechError;
class DELPHICLASS TFDDatSMechDetails;
class DELPHICLASS TFDDatSMechChilds;
class DELPHICLASS TFDDatSMechMaster;
class DELPHICLASS TFDDatSMechParent;
struct TFDDatSRowExtraInfo;
struct TFDDatSCompareRowsCacheItem;
class DELPHICLASS TFDDatSRow;
class DELPHICLASS TFDDatSRowListBase;
class DELPHICLASS TFDDatSNestedRowList;
class DELPHICLASS TFDDatSRowListWithAggregates;
class DELPHICLASS TFDDatSAggregateValue;
struct TFDDatSSubAggregate;
class DELPHICLASS TFDDatSAggregate;
class DELPHICLASS TFDDatSAggregateList;
class DELPHICLASS TFDDatSViewRowList;
class DELPHICLASS TFDDatSView;
class DELPHICLASS TFDDatSViewList;
class DELPHICLASS TFDDatSTableRowList;
__interface DELPHIINTERFACE IFDDatSTableMetadataCallback;
typedef System::DelphiInterface<IFDDatSTableMetadataCallback> _di_IFDDatSTableMetadataCallback;
__interface DELPHIINTERFACE IFDDatSTableDataCallback;
typedef System::DelphiInterface<IFDDatSTableDataCallback> _di_IFDDatSTableDataCallback;
class DELPHICLASS TFDDatSTable;
class DELPHICLASS TFDDatSTableList;
class DELPHICLASS TFDDatSUpdatesJournal;
class DELPHICLASS TFDDatSManager;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
typedef System::TMetaClass* TFDDatSObjectClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDDatSObjectClass);
#endif /* _WIN64 */

enum DECLSPEC_DENUM TFDDatSNotificationKind : unsigned int { snObjectInserting, snObjectInserted, snObjectRemoving, snObjectRemoved, snColumnDefChanged, snObjectNameChanged, snMechanismStateChanged, snViewUpdated, snRowStateChanged, snRowErrorStateChanged };

enum DECLSPEC_DENUM TFDDatSNotificationReason : unsigned int { srMetaChange, srDataChange };

enum DECLSPEC_DENUM Firedac_Dats__1 : unsigned int { ctCalcs, ctExps, ctDefs, ctInvars, ctComp, ctAutoIncs, ctSerializing, ctLateSer, ctParentRef };

typedef System::Set<Firedac_Dats__1, Firedac_Dats__1::ctCalcs, Firedac_Dats__1::ctParentRef> TFDDatSColumnThings;

typedef void __fastcall (__closure *TFDDatSColumnsCalculateEvent)(TFDDatSRow* ARow);

enum DECLSPEC_DENUM TFDDatSMechanismKind : unsigned int { mkFilter, mkSort, mkHasList, mkHasRow, mkPost };

typedef System::Set<TFDDatSMechanismKind, TFDDatSMechanismKind::mkFilter, TFDDatSMechanismKind::mkPost> TFDDatSMechanismKinds;

enum DECLSPEC_DENUM TFDDatSRowVersion : unsigned int { rvDefault, rvCurrent, rvOriginal, rvPrevious, rvProposed };

enum DECLSPEC_DENUM TFDDatSRowState : unsigned int { rsInitializing, rsDetached, rsInserted, rsDeleted, rsModified, rsUnchanged, rsEditing, rsCalculating, rsChecking, rsDestroying, rsForceWrite, rsImportingCurent, rsImportingOriginal, rsImportingProposed };

typedef System::Set<TFDDatSRowState, TFDDatSRowState::rsInitializing, TFDDatSRowState::rsImportingProposed> TFDDatSRowStates;

typedef void __fastcall (__closure *TFDDatSProcessNestedRowsMethod)(TFDDatSRow* ARow);

enum DECLSPEC_DENUM TFDDatSConstraintRule : unsigned int { crCascade, crRestrict, crNullify };

enum DECLSPEC_DENUM TFDDatSConstraintARRule : unsigned int { arNone, arCascade };

enum DECLSPEC_DENUM TFDDatSViewState : unsigned int { vsOutdated, vsProcessing };

typedef System::Set<TFDDatSViewState, TFDDatSViewState::vsOutdated, TFDDatSViewState::vsProcessing> TFDDatSViewStates;

enum DECLSPEC_DENUM TFDDatSViewCreator : unsigned int { vcUser, vcUniqueConstraint, vcForeignKeyConstraint, vcChildRelation, vcDefaultView, vcErrorView, vcChangesView, vcSelectView, vcDataSetIndex, vcDataSetTempIndex, vcDataSetFilter, vsDataSetDelta };

enum DECLSPEC_DENUM TFDDatSViewProcessRowStatus : unsigned int { psAccepted, psRejected, psUnchanged };

enum DECLSPEC_DENUM TFDDatSGroupPosition : unsigned int { gpFirst, gpMiddle, gpLast };

typedef System::Set<TFDDatSGroupPosition, TFDDatSGroupPosition::gpFirst, TFDDatSGroupPosition::gpLast> TFDDatSGroupPositions;

typedef int __fastcall (__closure *TFDCompareRowsProc)(TFDDatSRow* ARow1, TFDDatSRow* ARow2, int AColumnCount, Firedac::Stan::Intf::TFDCompareDataOptions AOptions);

typedef bool __fastcall (__closure *TFDFilterRowEvent)(TFDDatSMechFilter* AMech, TFDDatSRow* ARow, TFDDatSRowVersion AVersion);

enum DECLSPEC_DENUM TFDDatSHandleMode : unsigned int { lmStandard, lmMove, lmHavyMove, lmFetching, lmHavyFetching, lmDestroying, lmRefreshing, lmLoading, lmHavyLoading };

typedef TFDDatSLoadState *PFDDatSLoadState;

struct DECLSPEC_DRECORD TFDDatSLoadState
{
	
private:
	typedef System::DynamicArray<PFDDatSLoadState> _TFDDatSLoadState__1;
	
	
public:
	bool FRestoreState;
	TFDDatSHandleMode FPrevMode;
	bool FViewsActive;
	bool FConstraintsEnforce;
	_TFDDatSLoadState__1 FSubStates;
};


typedef System::DynamicArray<TFDDatSLoadState> TFDDatSLoadStates;

enum DECLSPEC_DENUM TFDDatSCheckTime : unsigned int { ctAtEditEnd, ctAtColumnChange };

struct DECLSPEC_DRECORD TFDDatSNotifyParam
{
public:
	TFDDatSNotificationKind FKind;
	TFDDatSNotificationReason FReason;
	NativeInt FParam1;
	NativeInt FParam2;
};


typedef TFDDatSNotifyParam *PFDDatSNotifyParam;

typedef TFDDatSObject* *PFDDataObject;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSObject : public Firedac::Stan::Intf::TFDStorableObject
{
	typedef Firedac::Stan::Intf::TFDStorableObject inherited;
	
private:
	TFDDatSObject* FOwner;
	System::Word FLockNotificationCount;
	TFDDatSRowState FRowPriorState;
	TFDDatSRowState FRowState;
	static int __fastcall MetaCompareText(const System::UnicodeString AStr1, const System::UnicodeString AStr2);
	
protected:
	virtual TFDDatSList* __fastcall GetList();
	TFDDatSObject* __fastcall GetOwnerByClass(TFDDatSObjectClass AClass);
	virtual TFDDatSManager* __fastcall GetManager();
	virtual TFDDatSTable* __fastcall GetTable();
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual void __fastcall Notify(PFDDatSNotifyParam AParam)/* overload */;
	void __fastcall Notify(TFDDatSNotificationKind AKind, TFDDatSNotificationReason AReason, NativeInt AParam1, NativeInt AParam2)/* overload */;
	void __fastcall LockNotification();
	void __fastcall UnlockNotification();
	virtual void __fastcall DoListInserted();
	virtual void __fastcall DoListInserting();
	virtual void __fastcall DoListRemoved(TFDDatSObject* ANewOwner);
	virtual void __fastcall DoListRemoving();
	virtual int __fastcall GetIndex();
	__classmethod virtual System::UnicodeString __fastcall GetClassPrefix();
	
public:
	__fastcall virtual ~TFDDatSObject();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	virtual int __fastcall IndexOf(TFDDatSObject* AObj)/* overload */;
	__property int Index = {read=GetIndex, nodefault};
	__property TFDDatSObject* Owner = {read=FOwner};
	__property TFDDatSList* List = {read=GetList};
	__property TFDDatSManager* Manager = {read=GetManager};
	__property TFDDatSTable* Table = {read=GetTable};
public:
	/* TFDStorableObject.Create */ inline __fastcall virtual TFDDatSObject()/* overload */ : Firedac::Stan::Intf::TFDStorableObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSNamedObject : public TFDDatSObject
{
	typedef TFDDatSObject inherited;
	
private:
	System::UnicodeString FName;
	System::UnicodeString FPrevName;
	TFDDatSNamedList* __fastcall GetNamedList();
	void __fastcall SetName(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetDefaultName();
	bool __fastcall GetIsDefaultName();
	
protected:
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	__property System::UnicodeString PrevName = {read=FPrevName};
	__property System::UnicodeString DefaultName = {read=GetDefaultName};
	__property bool IsDefaultName = {read=GetIsDefaultName, nodefault};
	
public:
	__fastcall virtual TFDDatSNamedObject()/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property System::UnicodeString Name = {read=FName, write=SetName};
	__property TFDDatSNamedList* NamedList = {read=GetNamedList};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSNamedObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSBindedObject : public TFDDatSNamedObject
{
	typedef TFDDatSNamedObject inherited;
	
private:
	System::UnicodeString FSourceName;
	int FSourceID;
	
protected:
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSBindedObject()/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	__property System::UnicodeString SourceName = {read=FSourceName, write=FSourceName};
	__property int SourceID = {read=FSourceID, write=FSourceID, nodefault};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSBindedObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSList : public TFDDatSObject
{
	typedef TFDDatSObject inherited;
	
	
private:
	typedef System::DynamicArray<TFDDatSObject*> _TFDDatSList__1;
	
	
public:
	TFDDatSObject* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	_TFDDatSList__1 FArray;
	int FCapacity;
	int FCount;
	bool FOwnObjects;
	int FMinimumCapacity;
	TFDDatSObject* __fastcall GetItemsI(int AIndex);
	void __fastcall SetCapacity(const int AValue);
	void __fastcall SetMinimumCapacity(const int AValue);
	
protected:
	TFDDatSNotificationReason FDefaultReason;
	void __fastcall AddEx(TFDDatSObject* AObj);
	int __fastcall AddObject(TFDDatSObject* AObj);
	virtual void __fastcall AddObjectAt(TFDDatSObject* AObj, int AIndex);
	virtual void __fastcall Notify(PFDDatSNotifyParam AParam)/* overload */;
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	void __fastcall Copy(TFDDatSList* ASource);
	__classmethod virtual Firedac::Stan::Intf::TFDStorageObjectStyle __fastcall GetObjectStyle();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	__property int Capacity = {read=FCapacity, write=SetCapacity, nodefault};
	
public:
	__fastcall virtual TFDDatSList()/* overload */;
	__fastcall virtual ~TFDDatSList();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual void __fastcall Clear();
	bool __fastcall ContainsObj(TFDDatSObject* AObj);
	virtual int __fastcall IndexOf(TFDDatSObject* AObj)/* overload */;
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	int __fastcall Remove(TFDDatSObject* AObj, bool ANotDestroy = false);
	virtual void __fastcall RemoveAt(int AIndex, bool ANotDestroy = false);
	virtual bool __fastcall MoveTo(int AFromIndex, int AToIndex);
	__property int Count = {read=FCount, nodefault};
	__property TFDDatSObject* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property bool OwnObjects = {read=FOwnObjects, write=FOwnObjects, default=0};
	__property int MinimumCapacity = {read=FMinimumCapacity, write=SetMinimumCapacity, default=0};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  Notify(TFDDatSNotificationKind AKind, TFDDatSNotificationReason AReason, NativeInt AParam1, NativeInt AParam2){ TFDDatSObject::Notify(AKind, AReason, AParam1, AParam2); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSNamedList : public TFDDatSList
{
	typedef TFDDatSList inherited;
	
public:
	TFDDatSNamedObject* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	Firedac::Stan::Intf::TFDStringList* FNamesIndex;
	HIDESBASE TFDDatSNamedObject* __fastcall GetItemsI(int AIndex);
	bool __fastcall Find(const System::UnicodeString AName, /* out */ int &AIndex);
	bool __fastcall FindRealIndex(const System::UnicodeString AName, /* out */ int &AIndex);
	void __fastcall ErrorNameNotFound(const System::UnicodeString AName);
	
protected:
	void __fastcall CheckUniqueName(const System::UnicodeString AName, TFDDatSNamedObject* ASelf);
	virtual void __fastcall Notify(PFDDatSNotifyParam AParam)/* overload */;
	virtual void __fastcall AddObjectAt(TFDDatSObject* AObj, int AIndex);
	__classmethod virtual Firedac::Stan::Intf::TFDStorageObjectStyle __fastcall GetObjectStyle();
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSNamedList()/* overload */;
	__fastcall virtual ~TFDDatSNamedList();
	bool __fastcall ContainsName(const System::UnicodeString AName);
	int __fastcall IndexOfName(const System::UnicodeString AName);
	TFDDatSNamedObject* __fastcall ItemByName(const System::UnicodeString AName);
	void __fastcall RemoveByName(const System::UnicodeString AName);
	System::UnicodeString __fastcall BuildUniqueName(const System::UnicodeString AName);
	__property TFDDatSNamedObject* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property TFDDatSNamedObject* ItemsS[const System::UnicodeString AName] = {read=ItemByName};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  Notify(TFDDatSNotificationKind AKind, TFDDatSNotificationReason AReason, NativeInt AParam1, NativeInt AParam2){ TFDDatSObject::Notify(AKind, AReason, AParam1, AParam2); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSBindedList : public TFDDatSNamedList
{
	typedef TFDDatSNamedList inherited;
	
public:
	TFDDatSBindedObject* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	HIDESBASE TFDDatSBindedObject* __fastcall GetItemsI(int AIndex);
	
public:
	HIDESBASE TFDDatSBindedObject* __fastcall ItemByName(const System::UnicodeString AName);
	int __fastcall IndexOfSourceID(int AID);
	int __fastcall IndexOfSourceName(const System::UnicodeString AName);
	bool __fastcall FindAnyName(const System::UnicodeString AName, const System::UnicodeString ASourceName, /* out */ int &AIndex);
	__property TFDDatSBindedObject* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property TFDDatSBindedObject* ItemsS[const System::UnicodeString AName] = {read=ItemByName};
public:
	/* TFDDatSNamedList.Create */ inline __fastcall virtual TFDDatSBindedList()/* overload */ : TFDDatSNamedList() { }
	/* TFDDatSNamedList.Destroy */ inline __fastcall virtual ~TFDDatSBindedList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSColumn : public TFDDatSBindedObject
{
	typedef TFDDatSBindedObject inherited;
	
private:
	int FIndex;
	Firedac::Stan::Intf::TFDDataAttributes FAttributes;
	bool FAutoIncrement;
	int FAutoIncrementSeed;
	int FAutoIncrementStep;
	System::UnicodeString FCaption;
	Firedac::Stan::Intf::TFDDataType FDataType;
	System::UnicodeString FExpression;
	Firedac::Stan::Intf::TFDDataOptions FOptions;
	int FPrecision;
	unsigned FSize;
	int FStorageSize;
	Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator FEvaluator;
	int FScale;
	Firedac::Stan::Intf::TFDDataType FSourceDataType;
	int FSourcePrecision;
	int FSourceScale;
	unsigned FSourceSize;
	System::UnicodeString FSourceDataTypeName;
	System::UnicodeString FOriginTabName;
	System::UnicodeString FOriginColName;
	System::UnicodeString FSourceGenerator;
	System::UnicodeString __fastcall GetCaption();
	TFDDatSColumnList* __fastcall GetColumnList();
	bool __fastcall GetReadOnly();
	void __fastcall SetAttributes(const Firedac::Stan::Intf::TFDDataAttributes AValue);
	void __fastcall SetAutoIncrement(const bool AValue);
	void __fastcall SetAutoIncrementSeed(const int AValue);
	void __fastcall SetAutoIncrementStep(const int AValue);
	void __fastcall SetCaption(const System::UnicodeString AValue);
	void __fastcall SetDataType(const Firedac::Stan::Intf::TFDDataType AValue);
	void __fastcall SetExpression(const System::UnicodeString AValue);
	void __fastcall SetEvaluator(const Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator AValue);
	void __fastcall SetOptions(const Firedac::Stan::Intf::TFDDataOptions AValue);
	void __fastcall SetPrecision(const int AValue);
	void __fastcall SetSize(const unsigned AValue);
	void __fastcall SetScale(const int AValue);
	TFDDatSTable* __fastcall GetNestedTable();
	TFDDatSColumn* __fastcall GetParentColumn();
	bool __fastcall GetAllowDBNull();
	void __fastcall SetAllowDBNull(const bool AValue);
	bool __fastcall GetUnique();
	void __fastcall SetUnique(const bool AValue);
	void __fastcall UpdateUniqueKey(bool AUnique);
	void __fastcall SetReadOnly(const bool AValue);
	void __fastcall DefinitionChanging(bool ALayoutChanging);
	void __fastcall SetServerAutoIncrement(const bool Value);
	int __fastcall GetDisplayWidth();
	void __fastcall UpdateStorageSize();
	int __fastcall GetStorageSize();
	bool __fastcall GetServerAutoIncrement();
	void __fastcall SetSourceGenerator(const System::UnicodeString AValue);
	System::UnicodeString __fastcall GetActualCaption();
	Firedac::Stan::Intf::TFDDataAttributes __fastcall GetActualAttributes();
	Firedac::Stan::Intf::TFDDataOptions __fastcall GetActualOptions();
	System::UnicodeString __fastcall GetActualOriginColName();
	System::UnicodeString __fastcall GetActualGenerator();
	
protected:
	void __fastcall DefinitionChanged(bool ALayoutChanged);
	virtual void __fastcall Notify(PFDDatSNotifyParam AParam)/* overload */;
	virtual void __fastcall DoListInserting();
	virtual void __fastcall DoListInserted();
	virtual void __fastcall DoListRemoving();
	virtual int __fastcall GetIndex();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSColumn()/* overload */;
	__fastcall TFDDatSColumn(const System::UnicodeString AName, Firedac::Stan::Intf::TFDDataType AType, const System::UnicodeString AExpression)/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	bool __fastcall IsAutoIncrementType(const Firedac::Stan::Intf::TFDDataType AValue);
	__property TFDDatSColumnList* ColumnList = {read=GetColumnList};
	__property int DisplayWidth = {read=GetDisplayWidth, nodefault};
	__property int Index = {read=GetIndex, nodefault};
	__property TFDDatSTable* NestedTable = {read=GetNestedTable};
	__property TFDDatSColumn* ParentColumn = {read=GetParentColumn};
	__property int StorageSize = {read=GetStorageSize, nodefault};
	__property System::UnicodeString ActualCaption = {read=GetActualCaption};
	__property Firedac::Stan::Intf::TFDDataOptions ActualOptions = {read=GetActualOptions, nodefault};
	__property Firedac::Stan::Intf::TFDDataAttributes ActualAttributes = {read=GetActualAttributes, nodefault};
	__property System::UnicodeString ActualOriginTabName = {read=FOriginTabName};
	__property System::UnicodeString ActualOriginColName = {read=GetActualOriginColName};
	__property System::UnicodeString ActualGenerator = {read=GetActualGenerator};
	__property bool AllowDBNull = {read=GetAllowDBNull, write=SetAllowDBNull, default=1};
	__property Firedac::Stan::Intf::TFDDataAttributes Attributes = {read=FAttributes, write=SetAttributes, default=2};
	__property bool AutoIncrement = {read=FAutoIncrement, write=SetAutoIncrement, default=0};
	__property bool ServerAutoIncrement = {read=GetServerAutoIncrement, write=SetServerAutoIncrement, default=0};
	__property int AutoIncrementSeed = {read=FAutoIncrementSeed, write=SetAutoIncrementSeed, default=1};
	__property int AutoIncrementStep = {read=FAutoIncrementStep, write=SetAutoIncrementStep, default=1};
	__property System::UnicodeString Caption = {read=GetCaption, write=SetCaption};
	__property Firedac::Stan::Intf::TFDDataType DataType = {read=FDataType, write=SetDataType, default=0};
	__property System::UnicodeString Expression = {read=FExpression, write=SetExpression};
	__property Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator Evaluator = {read=FEvaluator, write=SetEvaluator};
	__property Firedac::Stan::Intf::TFDDataOptions Options = {read=FOptions, write=SetOptions, default=25};
	__property int Precision = {read=FPrecision, write=SetPrecision, default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property int Scale = {read=FScale, write=SetScale, default=0};
	__property unsigned Size = {read=FSize, write=SetSize, default=50};
	__property Firedac::Stan::Intf::TFDDataType SourceDataType = {read=FSourceDataType, write=FSourceDataType, nodefault};
	__property int SourcePrecision = {read=FSourcePrecision, write=FSourcePrecision, nodefault};
	__property int SourceScale = {read=FSourceScale, write=FSourceScale, nodefault};
	__property unsigned SourceSize = {read=FSourceSize, write=FSourceSize, nodefault};
	__property System::UnicodeString SourceDataTypeName = {read=FSourceDataTypeName, write=FSourceDataTypeName};
	__property System::UnicodeString SourceDirectory = {read=FSourceDataTypeName, write=FSourceDataTypeName};
	__property System::UnicodeString SourceGenerator = {read=FSourceGenerator, write=SetSourceGenerator};
	__property System::UnicodeString OriginTabName = {read=FOriginTabName, write=FOriginTabName};
	__property System::UnicodeString OriginColName = {read=FOriginColName, write=FOriginColName};
	__property bool Unique = {read=GetUnique, write=SetUnique, default=0};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSColumn() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  Notify(TFDDatSNotificationKind AKind, TFDDatSNotificationReason AReason, NativeInt AParam1, NativeInt AParam2){ TFDDatSObject::Notify(AKind, AReason, AParam1, AParam2); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSTableExpressionDS : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
private:
	TFDDatSTable* FTable;
	TFDDatSRow* FRow;
	
protected:
	virtual int __fastcall GetVarIndex(const System::UnicodeString AName);
	virtual Firedac::Stan::Intf::TFDDataType __fastcall GetVarType(int AIndex);
	virtual Firedac::Stan::Intf::TFDExpressionScopeKind __fastcall GetVarScope(int AIndex);
	virtual System::Variant __fastcall GetVarData(int AIndex);
	virtual void __fastcall SetVarData(int AIndex, const System::Variant &AValue);
	virtual System::Variant __fastcall GetSubAggregateValue(int AIndex);
	virtual void * __fastcall GetPosition();
	virtual void __fastcall SetPosition(void * AValue);
	virtual int __fastcall GetRowNum();
	virtual System::UnicodeString __fastcall GetDatabase();
	virtual System::UnicodeString __fastcall GetUser();
	
public:
	__fastcall TFDDatSTableExpressionDS(TFDDatSTable* ATable);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDDatSTableExpressionDS() { }
	
private:
	void *__IFDStanExpressionDataSource;	// Firedac::Stan::Intf::IFDStanExpressionDataSource 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2008}
	operator Firedac::Stan::Intf::_di_IFDStanExpressionDataSource()
	{
		Firedac::Stan::Intf::_di_IFDStanExpressionDataSource intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Firedac::Stan::Intf::IFDStanExpressionDataSource*(void) { return (Firedac::Stan::Intf::IFDStanExpressionDataSource*)&__IFDStanExpressionDataSource; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::DynamicArray<int> TFDArrayOfInteger;

typedef System::DynamicArray<unsigned> TFDArrayOfLongWord;

typedef System::DynamicArray<System::Byte> TFDArrayOfByte;

class PASCALIMPLEMENTATION TFDDatSColumnList : public TFDDatSBindedList
{
	typedef TFDDatSBindedList inherited;
	
public:
	TFDDatSColumn* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	TFDArrayOfInteger FAutoIncs;
	TFDArrayOfLongWord FDataOffsets;
	TFDArrayOfLongWord FNullOffsets;
	TFDArrayOfByte FNullMasks;
	int FFetchedSize;
	TFDArrayOfInteger FInvariantMap;
	int FInvariantSize;
	int FInvariants;
	int FParentRowRefCol;
	int FParentCol;
	TFDDatSColumnThings FHasThings;
	TFDDatSColumnsCalculateEvent FOnCalcColumns;
	System::Word FInlineDataSize;
	int FInfoSize;
	System::Variant __fastcall GetCurrValues(int AIndex);
	HIDESBASE TFDDatSColumn* __fastcall GetItemsI(int AIndex);
	void __fastcall UpdateLayout();
	void __fastcall SetInlineDataSize(const System::Word AValue);
	unsigned __fastcall GetStorageSize();
	
protected:
	void __fastcall CheckUpdateLayout();
	void __fastcall TerminateLayout();
	virtual void __fastcall Notify(PFDDatSNotifyParam AParam)/* overload */;
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual void __fastcall AddObjectAt(TFDDatSObject* AObj, int AIndex);
	void __fastcall FixAutoIncs(TFDDatSRow* ARow);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall TFDDatSColumnList(TFDDatSTable* ATable);
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	int __fastcall Add(TFDDatSColumn* AObj)/* overload */;
	TFDDatSColumn* __fastcall Add(const System::UnicodeString AName, Firedac::Stan::Intf::TFDDataType AType = (Firedac::Stan::Intf::TFDDataType)(0x17), const System::UnicodeString AExpression = System::UnicodeString())/* overload */;
	virtual void __fastcall RemoveAt(int AIndex, bool ANotDestroy = false);
	TFDDatSColumn* __fastcall ColumnByName(const System::UnicodeString AName);
	__property System::Variant CurrValues[int AIndex] = {read=GetCurrValues};
	__property TFDDatSColumn* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property TFDDatSColumn* ItemsS[const System::UnicodeString AName] = {read=ColumnByName};
	__property TFDArrayOfLongWord DataOffsets = {read=FDataOffsets};
	__property TFDArrayOfLongWord NullOffsets = {read=FNullOffsets};
	__property TFDArrayOfByte NullMasks = {read=FNullMasks};
	__property int ParentRowRefCol = {read=FParentRowRefCol, nodefault};
	__property int ParentCol = {read=FParentCol, nodefault};
	__property unsigned StorageSize = {read=GetStorageSize, nodefault};
	__property TFDDatSColumnThings HasThings = {read=FHasThings, nodefault};
	__property TFDDatSColumnsCalculateEvent OnCalcColumns = {read=FOnCalcColumns, write=FOnCalcColumns};
	__property System::Word InlineDataSize = {read=FInlineDataSize, write=SetInlineDataSize, default=1000};
public:
	/* TFDDatSNamedList.Create */ inline __fastcall virtual TFDDatSColumnList()/* overload */ : TFDDatSBindedList() { }
	/* TFDDatSNamedList.Destroy */ inline __fastcall virtual ~TFDDatSColumnList() { }
	
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  Notify(TFDDatSNotificationKind AKind, TFDDatSNotificationReason AReason, NativeInt AParam1, NativeInt AParam2){ TFDDatSObject::Notify(AKind, AReason, AParam1, AParam2); }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSColumnSublist : public System::TObject
{
	typedef System::TObject inherited;
	
	
private:
	typedef System::DynamicArray<TFDDatSColumn*> _TFDDatSColumnSublist__1;
	
	
public:
	TFDDatSColumn* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	_TFDDatSColumnSublist__1 FArray;
	System::UnicodeString FNames;
	int __fastcall GetCount();
	TFDDatSColumn* __fastcall GetItemsI(int AIndex);
	void __fastcall Add(TFDDatSColumn* ACol);
	
public:
	bool __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	void __fastcall Clear();
	void __fastcall Fill(TFDDatSObject* AObject, const System::UnicodeString AFields, TFDDatSColumnSublist* ACaseInsensitiveColumnList = (TFDDatSColumnSublist*)(0x0), TFDDatSColumnSublist* ADescendingColumnList = (TFDDatSColumnSublist*)(0x0));
	int __fastcall IndexOf(TFDDatSColumn* AColumn);
	int __fastcall IndexOfName(const System::UnicodeString AName);
	TFDDatSColumn* __fastcall FindColumn(const System::UnicodeString AName);
	bool __fastcall Matches(TFDDatSColumnSublist* AList, int ACount = 0xffffffff);
	__property int Count = {read=GetCount, nodefault};
	__property TFDDatSColumn* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property TFDDatSColumn* ItemsS[const System::UnicodeString AName] = {read=FindColumn};
	__property System::UnicodeString Names = {read=FNames};
public:
	/* TObject.Create */ inline __fastcall TFDDatSColumnSublist() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TFDDatSColumnSublist() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSConstraintBase : public TFDDatSNamedObject
{
	typedef TFDDatSNamedObject inherited;
	
private:
	bool FEnforce;
	bool FLastActualEnforce;
	System::UnicodeString FMessage;
	TFDDatSCheckTime FCheckTime;
	bool FRely;
	bool __fastcall GetActualEnforce();
	TFDDatSConstraintList* __fastcall GetConstraintList();
	void __fastcall SetEnforce(const bool AValue);
	void __fastcall ResolveEnforce(const System::UnicodeString AName, const System::UnicodeString AValue);
	
protected:
	virtual void __fastcall DoCheck(TFDDatSRow* ARow, TFDDatSRowState AProposedState);
	virtual void __fastcall DoListInserted();
	virtual void __fastcall DoListRemoved(TFDDatSObject* ANewOwner);
	virtual void __fastcall DoEnforceUpdated();
	void __fastcall EnforceUpdated();
	virtual bool __fastcall CheckRow(TFDDatSRow* ARow);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSConstraintBase()/* overload */;
	__fastcall virtual ~TFDDatSConstraintBase();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	void __fastcall Check(TFDDatSRow* ARow, TFDDatSRowState AProposedState, TFDDatSCheckTime ATime);
	void __fastcall CheckAll();
	__property bool ActualEnforce = {read=GetActualEnforce, nodefault};
	__property TFDDatSConstraintList* ConstraintList = {read=GetConstraintList};
	__property bool Enforce = {read=FEnforce, write=SetEnforce, default=1};
	__property bool Rely = {read=FRely, write=FRely, default=1};
	__property TFDDatSCheckTime CheckTime = {read=FCheckTime, write=FCheckTime, default=0};
	__property System::UnicodeString Message = {read=FMessage, write=FMessage};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSConstraintList : public TFDDatSNamedList
{
	typedef TFDDatSNamedList inherited;
	
public:
	TFDDatSConstraintBase* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	bool FEnforce;
	HIDESBASE TFDDatSConstraintBase* __fastcall GetItemsI(int AIndex);
	void __fastcall SetEnforce(const bool AValue);
	void __fastcall ResolveEnforce(const System::UnicodeString AName, const System::UnicodeString AValue);
	
protected:
	void __fastcall EnforceUpdated();
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall TFDDatSConstraintList(TFDDatSTable* ATable);
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	int __fastcall Add(TFDDatSConstraintBase* AObj)/* overload */;
	TFDDatSUniqueConstraint* __fastcall AddUK(const System::UnicodeString AName, TFDDatSColumn* AColumn, bool APrimaryKey = true)/* overload */;
	TFDDatSUniqueConstraint* __fastcall AddUK(const System::UnicodeString AName, TFDDatSColumn* const *AColumns, const int AColumns_High, bool APrimaryKey = true)/* overload */;
	TFDDatSUniqueConstraint* __fastcall AddUK(const System::UnicodeString AName, const System::UnicodeString AColumnNames, bool APrimaryKey = true)/* overload */;
	TFDDatSForeignKeyConstraint* __fastcall AddFK(const System::UnicodeString AName, TFDDatSColumn* APrimaryKeyColumn, TFDDatSColumn* AForeignKeyColumn)/* overload */;
	TFDDatSForeignKeyConstraint* __fastcall AddFK(const System::UnicodeString AName, TFDDatSColumn* const *APrimaryKeyColumns, const int APrimaryKeyColumns_High, TFDDatSColumn* const *AForeignKeyColumns, const int AForeignKeyColumns_High)/* overload */;
	TFDDatSForeignKeyConstraint* __fastcall AddFK(const System::UnicodeString AName, const System::UnicodeString AParentTableName, const System::UnicodeString APrimaryKeyColumns, const System::UnicodeString AForeignKeyColumns)/* overload */;
	TFDDatSForeignKeyConstraint* __fastcall AddFK(const System::UnicodeString AName, TFDDatSTable* AParentTable, const System::UnicodeString APrimaryKeyColumns, const System::UnicodeString AForeignKeyColumns)/* overload */;
	TFDDatSCheckConstraint* __fastcall AddChk(const System::UnicodeString AName, const System::UnicodeString AExpression, const System::UnicodeString AMessage = System::UnicodeString(), TFDDatSCheckTime ACheckTime = (TFDDatSCheckTime)(0x0))/* overload */;
	void __fastcall Check(TFDDatSRow* ARow, TFDDatSRowState AProposedState, TFDDatSCheckTime ATime);
	TFDDatSConstraintBase* __fastcall ConstraintByName(const System::UnicodeString AName);
	TFDDatSUniqueConstraint* __fastcall FindUnique(const System::UnicodeString AFields);
	TFDDatSUniqueConstraint* __fastcall FindPrimaryKey();
	void __fastcall CheckAll();
	__property bool Enforce = {read=FEnforce, write=SetEnforce, default=1};
	__property TFDDatSConstraintBase* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property TFDDatSConstraintBase* ItemsS[const System::UnicodeString AName] = {read=ConstraintByName};
public:
	/* TFDDatSNamedList.Create */ inline __fastcall virtual TFDDatSConstraintList()/* overload */ : TFDDatSNamedList() { }
	/* TFDDatSNamedList.Destroy */ inline __fastcall virtual ~TFDDatSConstraintList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSUniqueConstraint : public TFDDatSConstraintBase
{
	typedef TFDDatSConstraintBase inherited;
	
private:
	System::UnicodeString FColumnNames;
	TFDDatSColumnSublist* FColumns;
	Firedac::Stan::Intf::TFDSortOptions FOptions;
	int __fastcall GetColumnCount();
	TFDDatSColumn* __fastcall GetColumns(int AIndex);
	void __fastcall SetColumnNames(const System::UnicodeString AValue);
	void __fastcall SetOptions(const Firedac::Stan::Intf::TFDSortOptions AValue);
	bool __fastcall GetIsPrimaryKey();
	void __fastcall SetIsPrimaryKey(const bool AValue);
	TFDDatSView* __fastcall GetUniqueSortedView();
	
protected:
	virtual void __fastcall DoCheck(TFDDatSRow* ARow, TFDDatSRowState AProposedState);
	virtual void __fastcall DoEnforceUpdated();
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSUniqueConstraint()/* overload */;
	__fastcall TFDDatSUniqueConstraint(TFDDatSColumn* AColumn, bool APrimaryKey)/* overload */;
	__fastcall TFDDatSUniqueConstraint(TFDDatSColumn* const *AColumns, const int AColumns_High, bool APrimaryKey)/* overload */;
	__fastcall TFDDatSUniqueConstraint(const System::UnicodeString AName, TFDDatSColumn* AColumn, bool APrimaryKey)/* overload */;
	__fastcall TFDDatSUniqueConstraint(const System::UnicodeString AName, TFDDatSColumn* const *AColumns, const int AColumns_High, bool APrimaryKey)/* overload */;
	__fastcall TFDDatSUniqueConstraint(const System::UnicodeString AName, const System::UnicodeString AColumnNames, bool APrimaryKey)/* overload */;
	__fastcall virtual ~TFDDatSUniqueConstraint();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property System::UnicodeString ColumnNames = {read=FColumnNames, write=SetColumnNames};
	__property int ColumnCount = {read=GetColumnCount, nodefault};
	__property TFDDatSColumn* Columns[int AIndex] = {read=GetColumns};
	__property Firedac::Stan::Intf::TFDSortOptions Options = {read=FOptions, write=SetOptions, default=16};
	__property bool IsPrimaryKey = {read=GetIsPrimaryKey, write=SetIsPrimaryKey, nodefault};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSForeignKeyConstraint : public TFDDatSConstraintBase
{
	typedef TFDDatSConstraintBase inherited;
	
private:
	System::UnicodeString FColumnNames;
	TFDDatSColumnSublist* FColumns;
	TFDDatSConstraintRule FDeleteRule;
	System::UnicodeString FRelatedColumnNames;
	TFDDatSColumnSublist* FRelatedColumns;
	TFDDatSTable* FRelatedTable;
	TFDDatSConstraintRule FUpdateRule;
	System::UnicodeString FParentMessage;
	System::UnicodeString FRelatedTableName;
	System::Classes::TList* FCascadingRows;
	TFDDatSConstraintARRule FAcceptRejectRule;
	bool FFieldValueRequired;
	TFDDatSConstraintRule FInsertRule;
	bool FCascadeOriginal;
	int __fastcall GetColumnCount();
	TFDDatSColumn* __fastcall GetColumns(int AIndex);
	int __fastcall GetRelatedColumnCount();
	TFDDatSColumn* __fastcall GetRelatedColumns(int AIndex);
	void __fastcall SetColumnNames(const System::UnicodeString AValue);
	void __fastcall SetRelatedColumnNames(const System::UnicodeString AValue);
	TFDDatSView* __fastcall GetChildSortedView();
	TFDDatSView* __fastcall GetMasterSortedView();
	void __fastcall SetRelatedTableName(const System::UnicodeString AValue);
	
protected:
	virtual bool __fastcall CheckRow(TFDDatSRow* ARow);
	virtual void __fastcall DoCheck(TFDDatSRow* ARow, TFDDatSRowState AProposedState);
	void __fastcall DoInsertAssignParentValues(TFDDatSRow* AParentRow, TFDDatSRow* AChildRow);
	virtual void __fastcall DoEnforceUpdated();
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSForeignKeyConstraint()/* overload */;
	__fastcall TFDDatSForeignKeyConstraint(TFDDatSColumn* AParentColumn, TFDDatSColumn* AChildColumn, TFDDatSConstraintRule ADeleteRule, TFDDatSConstraintRule AUpdateRule)/* overload */;
	__fastcall TFDDatSForeignKeyConstraint(TFDDatSColumn* const *AParentColumns, const int AParentColumns_High, TFDDatSColumn* const *AChildColumns, const int AChildColumns_High, TFDDatSConstraintRule ADeleteRule, TFDDatSConstraintRule AUpdateRule)/* overload */;
	__fastcall TFDDatSForeignKeyConstraint(const System::UnicodeString AName, TFDDatSColumn* AParentColumn, TFDDatSColumn* AChildColumn, TFDDatSConstraintRule ADeleteRule, TFDDatSConstraintRule AUpdateRule)/* overload */;
	__fastcall TFDDatSForeignKeyConstraint(const System::UnicodeString AName, TFDDatSColumn* const *AParentColumns, const int AParentColumns_High, TFDDatSColumn* const *AChildColumns, const int AChildColumns_High, TFDDatSConstraintRule ADeleteRule, TFDDatSConstraintRule AUpdateRule)/* overload */;
	__fastcall TFDDatSForeignKeyConstraint(const System::UnicodeString AName, const System::UnicodeString AParentTableName, const System::UnicodeString AParentColumnNames, const System::UnicodeString AChildColumnNames, TFDDatSConstraintRule ADeleteRule, TFDDatSConstraintRule AUpdateRule)/* overload */;
	__fastcall TFDDatSForeignKeyConstraint(const System::UnicodeString AName, TFDDatSTable* AParentTable, const System::UnicodeString AParentColumnNames, const System::UnicodeString AChildColumnNames, TFDDatSConstraintRule ADeleteRule, TFDDatSConstraintRule AUpdateRule)/* overload */;
	__fastcall virtual ~TFDDatSForeignKeyConstraint();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property int ColumnCount = {read=GetColumnCount, nodefault};
	__property TFDDatSColumn* Columns[int AIndex] = {read=GetColumns};
	__property int RelatedColumnCount = {read=GetRelatedColumnCount, nodefault};
	__property TFDDatSColumn* RelatedColumns[int AIndex] = {read=GetRelatedColumns};
	__property TFDDatSTable* RelatedTable = {read=FRelatedTable};
	__property System::UnicodeString ColumnNames = {read=FColumnNames, write=SetColumnNames};
	__property TFDDatSConstraintRule DeleteRule = {read=FDeleteRule, write=FDeleteRule, default=0};
	__property TFDDatSConstraintRule InsertRule = {read=FInsertRule, write=FInsertRule, default=0};
	__property System::UnicodeString ParentMessage = {read=FParentMessage, write=FParentMessage};
	__property System::UnicodeString RelatedTableName = {read=FRelatedTableName, write=SetRelatedTableName};
	__property System::UnicodeString RelatedColumnNames = {read=FRelatedColumnNames, write=SetRelatedColumnNames};
	__property TFDDatSConstraintRule UpdateRule = {read=FUpdateRule, write=FUpdateRule, default=0};
	__property TFDDatSConstraintARRule AcceptRejectRule = {read=FAcceptRejectRule, write=FAcceptRejectRule, default=1};
	__property bool FieldValueRequired = {read=FFieldValueRequired, write=FFieldValueRequired, default=0};
	__property bool CascadeOriginal = {read=FCascadeOriginal, write=FCascadeOriginal, default=0};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSCheckConstraint : public TFDDatSConstraintBase
{
	typedef TFDDatSConstraintBase inherited;
	
private:
	Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator FEvaluator;
	System::UnicodeString FExpression;
	void __fastcall SetExpression(const System::UnicodeString AValue);
	
protected:
	virtual void __fastcall DoCheck(TFDDatSRow* ARow, TFDDatSRowState AProposedState);
	virtual void __fastcall DoEnforceUpdated();
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall TFDDatSCheckConstraint(const System::UnicodeString AExpression)/* overload */;
	__fastcall TFDDatSCheckConstraint(const System::UnicodeString AName, const System::UnicodeString AExpression, const System::UnicodeString AMessage, TFDDatSCheckTime ACheckTime)/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property System::UnicodeString Expression = {read=FExpression, write=SetExpression};
public:
	/* TFDDatSConstraintBase.Create */ inline __fastcall virtual TFDDatSCheckConstraint()/* overload */ : TFDDatSConstraintBase() { }
	/* TFDDatSConstraintBase.Destroy */ inline __fastcall virtual ~TFDDatSCheckConstraint() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSRelation : public TFDDatSNamedObject
{
	typedef TFDDatSNamedObject inherited;
	
private:
	System::UnicodeString FChildColumnNames;
	TFDDatSColumnSublist* FChildColumns;
	TFDDatSForeignKeyConstraint* FChildKeyConstraint;
	TFDDatSTable* FChildTable;
	bool FNested;
	System::UnicodeString FParentColumnNames;
	TFDDatSColumnSublist* FParentColumns;
	TFDDatSUniqueConstraint* FParentKeyConstraint;
	TFDDatSTable* FParentTable;
	Firedac::Stan::Util::TFDRefCounter* FRefs;
	bool FOwnConstraints;
	int __fastcall GetChildColumnCount();
	TFDDatSColumn* __fastcall GetChildColumns(int AIndex);
	bool __fastcall GetIsDefined();
	int __fastcall GetParentColumnCount();
	TFDDatSColumn* __fastcall GetParentColumns(int AIndex);
	TFDDatSRelationList* __fastcall GetRelationList();
	void __fastcall FillChildColumns(bool ATable);
	void __fastcall SetChildColumnNames(const System::UnicodeString AValue);
	void __fastcall SetChildTable(TFDDatSTable* const AValue);
	void __fastcall SetChildKeyConstraint(TFDDatSForeignKeyConstraint* const AValue);
	void __fastcall SetNested(const bool AValue);
	void __fastcall FillParentColumns(bool ATable);
	void __fastcall SetParentColumnNames(const System::UnicodeString AValue);
	void __fastcall SetParentTable(TFDDatSTable* const AValue);
	void __fastcall SetParentKeyConstraint(TFDDatSUniqueConstraint* const AValue);
	void __fastcall Check();
	void __fastcall ResolveReferences(const System::UnicodeString AName, const System::UnicodeString AValue);
	bool __fastcall GetIsRefCounted();
	
protected:
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSRelation()/* overload */;
	__fastcall TFDDatSRelation(const System::UnicodeString ARelName, TFDDatSColumn* AParentColumn, TFDDatSColumn* AChildColumn, bool ANested, bool ACreateConstraints)/* overload */;
	__fastcall TFDDatSRelation(const System::UnicodeString ARelName, TFDDatSColumn* const *AParentColumns, const int AParentColumns_High, TFDDatSColumn* const *AChildColumns, const int AChildColumns_High, bool ANested, bool ACreateConstraints)/* overload */;
	__fastcall TFDDatSRelation(const System::UnicodeString ARelName, const System::UnicodeString AParentColumnNames, const System::UnicodeString AChildColumnNames, TFDDatSTable* AParentTable, TFDDatSTable* AChildTable, bool ANested, bool ACreateConstraints)/* overload */;
	__fastcall TFDDatSRelation(const System::UnicodeString ARelName, TFDDatSUniqueConstraint* APK, TFDDatSForeignKeyConstraint* AFK)/* overload */;
	__fastcall virtual ~TFDDatSRelation();
	TFDDatSForeignKeyConstraint* __fastcall BuildChildKeyConstraint();
	TFDDatSUniqueConstraint* __fastcall BuildParentKeyConstraint();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	void __fastcall CountRef(int AInit = 0x1);
	void __fastcall AddRef();
	void __fastcall RemRef();
	__property bool IsRefCounted = {read=GetIsRefCounted, nodefault};
	__property int ChildColumnCount = {read=GetChildColumnCount, nodefault};
	__property System::UnicodeString ChildColumnNames = {read=FChildColumnNames, write=SetChildColumnNames};
	__property TFDDatSColumn* ChildColumns[int AIndex] = {read=GetChildColumns};
	__property TFDDatSForeignKeyConstraint* ChildKeyConstraint = {read=FChildKeyConstraint, write=SetChildKeyConstraint};
	__property TFDDatSTable* ChildTable = {read=FChildTable, write=SetChildTable};
	__property bool IsDefined = {read=GetIsDefined, nodefault};
	__property bool Nested = {read=FNested, write=SetNested, default=0};
	__property int ParentColumnCount = {read=GetParentColumnCount, nodefault};
	__property System::UnicodeString ParentColumnNames = {read=FParentColumnNames, write=SetParentColumnNames};
	__property TFDDatSColumn* ParentColumns[int AIndex] = {read=GetParentColumns};
	__property TFDDatSUniqueConstraint* ParentKeyConstraint = {read=FParentKeyConstraint, write=SetParentKeyConstraint};
	__property TFDDatSTable* ParentTable = {read=FParentTable, write=SetParentTable};
	__property TFDDatSRelationList* RelationList = {read=GetRelationList};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::DynamicArray<TFDDatSRelation*> TFDDatSRelationArray;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSRelationList : public TFDDatSNamedList
{
	typedef TFDDatSNamedList inherited;
	
public:
	TFDDatSRelation* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	HIDESBASE TFDDatSRelation* __fastcall GetItemsI(int AIndex);
	
protected:
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	
public:
	__fastcall TFDDatSRelationList(TFDDatSManager* AManager);
	int __fastcall Add(TFDDatSRelation* AObj)/* overload */;
	TFDDatSRelation* __fastcall Add(const System::UnicodeString ARelName, TFDDatSColumn* AParentColumn, TFDDatSColumn* AChildColumn, bool ANested = false, bool ACreateConstraints = true)/* overload */;
	TFDDatSRelation* __fastcall Add(TFDDatSColumn* AParentColumn, TFDDatSColumn* AChildColumn, bool ANested = false, bool ACreateConstraints = true)/* overload */;
	TFDDatSRelation* __fastcall Add(const System::UnicodeString ARelName, TFDDatSColumn* const *AParentColumns, const int AParentColumns_High, TFDDatSColumn* const *AChildColumns, const int AChildColumns_High, bool ANested = false, bool ACreateConstraints = true)/* overload */;
	TFDDatSRelation* __fastcall Add(const System::UnicodeString ARelName, const System::UnicodeString AParentColumnNames, const System::UnicodeString AChildColumnNames, TFDDatSTable* AParentTable, TFDDatSTable* AChildTable, bool ANested = false, bool ACreateConstraints = true)/* overload */;
	TFDDatSRelation* __fastcall Add(TFDDatSColumn* const *AParentColumns, const int AParentColumns_High, TFDDatSColumn* const *AChildColumns, const int AChildColumns_High, bool ANested = false, bool ACreateConstraints = true)/* overload */;
	TFDDatSRelation* __fastcall Add(const System::UnicodeString ARelName, TFDDatSUniqueConstraint* APK, TFDDatSForeignKeyConstraint* AFK)/* overload */;
	TFDDatSRelation* __fastcall FindRelation(TFDDatSTable* AParentTable, TFDDatSTable* AChildTable, bool AMBNested)/* overload */;
	TFDDatSRelation* __fastcall FindRelation(TFDDatSTable* AParentTable, TFDDatSColumn* AObjColumn)/* overload */;
	TFDDatSRelation* __fastcall FindRelation(TFDDatSTable* ANestedTable)/* overload */;
	TFDDatSRelation* __fastcall RelationByName(const System::UnicodeString AName);
	TFDDatSRelationArray __fastcall GetRelationsForTable(bool AParentRelations, TFDDatSTable* ATable);
	__property TFDDatSRelation* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property TFDDatSRelation* ItemsS[const System::UnicodeString AName] = {read=RelationByName};
public:
	/* TFDDatSNamedList.Create */ inline __fastcall virtual TFDDatSRelationList()/* overload */ : TFDDatSNamedList() { }
	/* TFDDatSNamedList.Destroy */ inline __fastcall virtual ~TFDDatSRelationList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TFDDatSMechSortSource : unsigned int { ssColumns, ssExpression, ssRowId };

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2019}") IFDDatSMechSort  : public System::IInterface 
{
	virtual Firedac::Stan::Intf::TFDSortOptions __fastcall GetSortOptions() = 0 ;
	virtual TFDDatSColumnSublist* __fastcall GetSortColumnList() = 0 ;
	virtual TFDDatSColumnSublist* __fastcall GetSortDescendingColumnList() = 0 ;
	virtual TFDDatSColumnSublist* __fastcall GetSortCaseInsensitiveColumnList() = 0 ;
	virtual TFDDatSMechSortSource __fastcall GetSortSource() = 0 ;
	virtual TFDDatSRowListBase* __fastcall GetSortedRows() = 0 ;
	virtual Firedac::Stan::Intf::TFDCompareDataOptions __fastcall GetCompareDataOptions() = 0 ;
	virtual void __fastcall Sort(TFDDatSRowListBase* AList) = 0 ;
	virtual bool __fastcall SortingOn(const System::UnicodeString AColumnNames, Firedac::Stan::Intf::TFDSortOptions ARequiredOptions, Firedac::Stan::Intf::TFDSortOptions AProhibitedOptions) = 0 /* overload */;
	virtual bool __fastcall SortingOn(TFDDatSColumnSublist* AKeyColumnList, int AKeyColumnCount, Firedac::Stan::Intf::TFDSortOptions ARequiredOptions, Firedac::Stan::Intf::TFDSortOptions AProhibitedOptions) = 0 /* overload */;
	virtual int __fastcall CompareRows(TFDDatSRow* ARow1, TFDDatSRow* ARow2, int AColumnCount, Firedac::Stan::Intf::TFDCompareDataOptions AOptions) = 0 /* overload */;
	virtual int __fastcall CompareRows(TFDDatSRow* ARow1, TFDDatSRow* ARow2, int AColumnCount) = 0 /* overload */;
	virtual int __fastcall Search(TFDDatSRowListBase* ARowList, TFDDatSRow* AKeyRow, TFDDatSColumnSublist* AKeyColumnList, TFDDatSColumnSublist* AKeyColumnList2, int AKeyColumnCount, Firedac::Stan::Intf::TFDLocateOptions AOptions, /* out */ int &AIndex, /* out */ bool &AFound, TFDDatSRowVersion ARowVersion = (TFDDatSRowVersion)(0x0)) = 0 ;
	virtual void __fastcall RemoveDuplicates(TFDDatSRowListBase* AList, int AColumnCount) = 0 ;
	__property Firedac::Stan::Intf::TFDSortOptions SortOptions = {read=GetSortOptions};
	__property TFDDatSColumnSublist* SortColumnList = {read=GetSortColumnList};
	__property TFDDatSColumnSublist* SortDescendingColumnList = {read=GetSortDescendingColumnList};
	__property TFDDatSColumnSublist* SortCaseInsensitiveColumnList = {read=GetSortCaseInsensitiveColumnList};
	__property TFDDatSMechSortSource SortSource = {read=GetSortSource};
	__property TFDDatSRowListBase* SortedRows = {read=GetSortedRows};
	__property Firedac::Stan::Intf::TFDCompareDataOptions CompareDataOptions = {read=GetCompareDataOptions};
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechBase : public TFDDatSObject
{
	typedef TFDDatSObject inherited;
	
private:
	bool FPrevActualActive;
	bool FActive;
	bool FLocator;
	void __fastcall SetActive(const bool AValue);
	TFDDatSView* __fastcall GetView();
	TFDDatSViewList* __fastcall GetViewList();
	void __fastcall ResolveActive(const System::UnicodeString AName, const System::UnicodeString AValue);
	
protected:
	TFDDatSMechanismKinds FKinds;
	virtual bool __fastcall GetActualActive();
	virtual void __fastcall DoListInserted();
	virtual void __fastcall DoListRemoving();
	virtual void __fastcall DoListRemoved(TFDDatSObject* ANewOwner);
	virtual void __fastcall DoActiveChanged();
	void __fastcall CheckActiveChanged();
	virtual TFDDatSTable* __fastcall GetTable();
	virtual bool __fastcall GetRowsRange(TFDDatSRowListBase* &ARowList, /* out */ int &ABeginInd, /* out */ int &AEndInd);
	virtual bool __fastcall AcceptRow(TFDDatSRow* ARow, TFDDatSRowVersion AVersion);
	virtual void __fastcall PostProcess(TFDDatSRowListBase* AList);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	__property TFDDatSTable* Table = {read=GetTable};
	__property TFDDatSView* View = {read=GetView};
	__property TFDDatSViewList* ViewList = {read=GetViewList};
	__property bool ActualActive = {read=GetActualActive, nodefault};
	__property TFDDatSMechanismKinds Kinds = {read=FKinds, nodefault};
	__property bool Active = {read=FActive, write=SetActive, default=0};
	__property bool Locator = {read=FLocator, write=FLocator, default=0};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechBase() { }
	
public:
	/* TFDStorableObject.Create */ inline __fastcall virtual TFDDatSMechBase()/* overload */ : TFDDatSObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TFDDatSMechBaseClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TFDDatSMechBaseClass);
#endif /* _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSViewMechList : public TFDDatSList
{
	typedef TFDDatSList inherited;
	
public:
	TFDDatSMechBase* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	HIDESBASE TFDDatSMechBase* __fastcall GetItemsI(int AIndex);
	
protected:
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	
public:
	__fastcall TFDDatSViewMechList(TFDDatSView* AView);
	bool __fastcall AcceptRow(TFDDatSRow* ARow, TFDDatSRowVersion AVersion);
	int __fastcall Add(TFDDatSMechBase* AObj);
	TFDDatSMechSort* __fastcall AddSort(const System::UnicodeString AColumns, const System::UnicodeString ADescColumns = System::UnicodeString(), const System::UnicodeString ACaseInsColumns = System::UnicodeString(), Firedac::Stan::Intf::TFDSortOptions AOptions = Firedac::Stan::Intf::TFDSortOptions() )/* overload */;
	TFDDatSMechSort* __fastcall AddSort(const System::UnicodeString AExpression, Firedac::Stan::Intf::TFDSortOptions AOptions)/* overload */;
	TFDDatSMechDistinct* __fastcall AddDistinct(int AColumnCount);
	TFDDatSMechRowState* __fastcall AddStates(TFDDatSRowStates AStates = (TFDDatSRowStates() << TFDDatSRowState::rsInitializing << TFDDatSRowState::rsInserted << TFDDatSRowState::rsModified << TFDDatSRowState::rsUnchanged << TFDDatSRowState::rsEditing << TFDDatSRowState::rsCalculating << TFDDatSRowState::rsChecking ));
	TFDDatSMechFilter* __fastcall AddFilter(const System::UnicodeString AExpression, Firedac::Stan::Intf::TFDExpressionOptions AOptions = Firedac::Stan::Intf::TFDExpressionOptions() , TFDFilterRowEvent AEvent = 0x0);
	TFDDatSMechError* __fastcall AddError();
	TFDDatSMechDetails* __fastcall AddDetail(TFDDatSRelation* AParentRel, TFDDatSRow* AParentRow);
	virtual void __fastcall Clear();
	__property TFDDatSMechBase* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
public:
	/* TFDDatSList.Create */ inline __fastcall virtual TFDDatSViewMechList()/* overload */ : TFDDatSList() { }
	/* TFDDatSList.Destroy */ inline __fastcall virtual ~TFDDatSViewMechList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechSort : public TFDDatSMechBase
{
	typedef TFDDatSMechBase inherited;
	
private:
	TFDDatSColumnSublist* FCaseInsensitiveColumnList;
	System::UnicodeString FCaseInsensitiveColumns;
	TFDDatSColumnSublist* FColumnList;
	System::UnicodeString FColumns;
	TFDDatSColumnSublist* FDescendingColumnList;
	System::UnicodeString FDescendingColumns;
	Firedac::Stan::Intf::TFDSortOptions FSortOptions;
	System::UnicodeString FExpression;
	Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator FEvaluator;
	TFDDatSMechSortSource FSortSource;
	bool FSortOptionsChanged;
	TFDDatSUniqueConstraint* FUniqueKey;
	void __fastcall SetCaseInsensitiveColumns(const System::UnicodeString AValue);
	void __fastcall SetColumns(const System::UnicodeString AValue);
	void __fastcall SetDescendingColumns(const System::UnicodeString AValue);
	void __fastcall SetSortOptions(const Firedac::Stan::Intf::TFDSortOptions AValue);
	void __fastcall SetExpression(const System::UnicodeString AValue);
	TFDDatSUniqueConstraint* __fastcall CreateUniqueConstraint();
	bool __fastcall MatchOptions(Firedac::Stan::Intf::TFDSortOptions ARequiredOptions, Firedac::Stan::Intf::TFDSortOptions AProhibitedOptions);
	
protected:
	virtual void __fastcall DoActiveChanged();
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	HRESULT __stdcall QueryInterface(const GUID &IID, /* out */ void *Obj);
	int __stdcall _AddRef();
	int __stdcall _Release();
	Firedac::Stan::Intf::TFDSortOptions __fastcall GetSortOptions();
	TFDDatSColumnSublist* __fastcall GetSortColumnList();
	TFDDatSColumnSublist* __fastcall GetSortDescendingColumnList();
	TFDDatSColumnSublist* __fastcall GetSortCaseInsensitiveColumnList();
	TFDDatSMechSortSource __fastcall GetSortSource();
	TFDDatSRowListBase* __fastcall GetSortedRows();
	Firedac::Stan::Intf::TFDCompareDataOptions __fastcall GetCompareDataOptions();
	void __fastcall Sort(TFDDatSRowListBase* AList);
	bool __fastcall SortingOn(const System::UnicodeString AColumnNames, Firedac::Stan::Intf::TFDSortOptions ARequiredOptions, Firedac::Stan::Intf::TFDSortOptions AProhibitedOptions)/* overload */;
	bool __fastcall SortingOn(TFDDatSColumnSublist* AKeyColumnList, int AKeyColumnCount, Firedac::Stan::Intf::TFDSortOptions ARequiredOptions, Firedac::Stan::Intf::TFDSortOptions AProhibitedOptions)/* overload */;
	int __fastcall CompareRows(TFDDatSRow* ARow1, TFDDatSRow* ARow2, int AColumnCount, Firedac::Stan::Intf::TFDCompareDataOptions AOptions)/* overload */;
	int __fastcall CompareRows(TFDDatSRow* ARow1, TFDDatSRow* ARow2, int AColumnCount)/* overload */;
	int __fastcall Search(TFDDatSRowListBase* ARowList, TFDDatSRow* AKeyRow, TFDDatSColumnSublist* AKeyColumnList, TFDDatSColumnSublist* AKeyColumnList2, int AKeyColumnCount, Firedac::Stan::Intf::TFDLocateOptions AOptions, /* out */ int &AIndex, /* out */ bool &AFound, TFDDatSRowVersion ARowVersion = (TFDDatSRowVersion)(0x0));
	void __fastcall RemoveDuplicates(TFDDatSRowListBase* AList, int AColumnCount);
	
public:
	__fastcall virtual TFDDatSMechSort()/* overload */;
	__fastcall TFDDatSMechSort(const System::UnicodeString AColumns, const System::UnicodeString ADescColumns, const System::UnicodeString ACaseInsColumns, Firedac::Stan::Intf::TFDSortOptions AOptions)/* overload */;
	__fastcall TFDDatSMechSort(const System::UnicodeString AExpression, Firedac::Stan::Intf::TFDSortOptions AOptions)/* overload */;
	__fastcall virtual ~TFDDatSMechSort();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property System::UnicodeString Expression = {read=FExpression, write=SetExpression};
	__property System::UnicodeString Columns = {read=FColumns, write=SetColumns};
	__property System::UnicodeString DescendingColumns = {read=FDescendingColumns, write=SetDescendingColumns};
	__property System::UnicodeString CaseInsensitiveColumns = {read=FCaseInsensitiveColumns, write=SetCaseInsensitiveColumns};
	__property Firedac::Stan::Intf::TFDSortOptions SortOptions = {read=GetSortOptions, write=SetSortOptions, default=0};
	__property TFDDatSColumnSublist* SortColumnList = {read=GetSortColumnList};
	__property TFDDatSColumnSublist* SortDescendingColumnList = {read=GetSortDescendingColumnList};
	__property TFDDatSColumnSublist* SortCaseInsensitiveColumnList = {read=GetSortCaseInsensitiveColumnList};
	__property TFDDatSMechSortSource SortSource = {read=FSortSource, nodefault};
	__property TFDDatSUniqueConstraint* UniqueKey = {read=FUniqueKey};
private:
	void *__IFDDatSMechSort;	// IFDDatSMechSort 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {3E9B315B-F456-4175-A864-B2573C4A2019}
	operator _di_IFDDatSMechSort()
	{
		_di_IFDDatSMechSort intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator IFDDatSMechSort*(void) { return (IFDDatSMechSort*)&__IFDDatSMechSort; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {00000000-0000-0000-C000-000000000046}
	operator System::_di_IInterface()
	{
		System::_di_IInterface intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator System::IInterface*(void) { return (System::IInterface*)&__IFDDatSMechSort; }
	#endif
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechRowState : public TFDDatSMechBase
{
	typedef TFDDatSMechBase inherited;
	
private:
	TFDDatSRowStates FRowStates;
	void __fastcall SetRowStates(const TFDDatSRowStates AValue);
	
protected:
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual bool __fastcall AcceptRow(TFDDatSRow* ARow, TFDDatSRowVersion AVersion);
	
public:
	__fastcall virtual TFDDatSMechRowState()/* overload */;
	__fastcall TFDDatSMechRowState(TFDDatSRowStates AStates)/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property TFDDatSRowStates RowStates = {read=FRowStates, write=SetRowStates, nodefault};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechRowState() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechRange : public TFDDatSMechBase
{
	typedef TFDDatSMechBase inherited;
	
private:
	TFDDatSRow* FBottom;
	TFDDatSRow* FTop;
	bool FBottomExclusive;
	bool FTopExclusive;
	_di_IFDDatSMechSort FSortMech;
	int FBottomColumnCount;
	int FTopColumnCount;
	void __fastcall SetBottom(TFDDatSRow* const AValue);
	void __fastcall SetTop(TFDDatSRow* const AValue);
	void __fastcall SetBottomExclusive(const bool AValue);
	void __fastcall SetTopExclusive(const bool AValue);
	void __fastcall SetSortMech(const _di_IFDDatSMechSort AValue);
	void __fastcall SetBottomColumnCount(const int AValue);
	void __fastcall SetTopColumnCount(const int AValue);
	
protected:
	TFDDatSColumnSublist* FTopColumnList;
	TFDDatSColumnSublist* FBottomColumnList;
	virtual void __fastcall DoActiveChanged();
	virtual bool __fastcall NoRangeNoRecords();
	virtual bool __fastcall GetRowsRange(TFDDatSRowListBase* &ARowList, /* out */ int &ABeginInd, /* out */ int &AEndInd);
	virtual bool __fastcall AcceptRow(TFDDatSRow* ARow, TFDDatSRowVersion AVersion);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSMechRange()/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property TFDDatSRow* Bottom = {read=FBottom, write=SetBottom};
	__property TFDDatSRow* Top = {read=FTop, write=SetTop};
	__property bool BottomExclusive = {read=FBottomExclusive, write=SetBottomExclusive, default=0};
	__property bool TopExclusive = {read=FTopExclusive, write=SetTopExclusive, default=0};
	__property _di_IFDDatSMechSort SortMech = {read=FSortMech, write=SetSortMech};
	__property int BottomColumnCount = {read=FBottomColumnCount, write=SetBottomColumnCount, default=-1};
	__property int TopColumnCount = {read=FTopColumnCount, write=SetTopColumnCount, default=-1};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechRange() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechDistinct : public TFDDatSMechBase
{
	typedef TFDDatSMechBase inherited;
	
private:
	_di_IFDDatSMechSort FSortMech;
	int FColumnCount;
	void __fastcall SetSortMech(const _di_IFDDatSMechSort AValue);
	void __fastcall SetColumnCount(const int AValue);
	
protected:
	virtual void __fastcall DoActiveChanged();
	virtual bool __fastcall AcceptRow(TFDDatSRow* ARow, TFDDatSRowVersion AVersion);
	virtual void __fastcall PostProcess(TFDDatSRowListBase* AList);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSMechDistinct()/* overload */;
	__fastcall TFDDatSMechDistinct(int AColumnCount)/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property _di_IFDDatSMechSort SortMech = {read=FSortMech, write=SetSortMech};
	__property int ColumnCount = {read=FColumnCount, write=SetColumnCount, default=-1};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechDistinct() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDDatSMechFilter : public TFDDatSMechBase
{
	typedef TFDDatSMechBase inherited;
	
private:
	System::UnicodeString FExpression;
	Firedac::Stan::Intf::TFDExpressionOptions FOptions;
	Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator FEvaluator;
	TFDFilterRowEvent FOnFilterRow;
	void __fastcall SetExpression(const System::UnicodeString AValue);
	void __fastcall SetOptions(const Firedac::Stan::Intf::TFDExpressionOptions AValue);
	void __fastcall SetOnFilterRow(const TFDFilterRowEvent AValue);
	
protected:
	virtual void __fastcall DoActiveChanged();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual bool __fastcall AcceptRow(TFDDatSRow* ARow, TFDDatSRowVersion AVersion);
	
public:
	__fastcall virtual TFDDatSMechFilter()/* overload */;
	__fastcall TFDDatSMechFilter(const System::UnicodeString AExpression, Firedac::Stan::Intf::TFDExpressionOptions AOptions, TFDFilterRowEvent AEvent)/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property System::UnicodeString Expression = {read=FExpression, write=SetExpression};
	__property Firedac::Stan::Intf::TFDExpressionOptions Options = {read=FOptions, write=SetOptions, default=0};
	__property TFDFilterRowEvent OnFilterRow = {read=FOnFilterRow, write=SetOnFilterRow};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechFilter() { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechError : public TFDDatSMechBase
{
	typedef TFDDatSMechBase inherited;
	
protected:
	virtual bool __fastcall AcceptRow(TFDDatSRow* ARow, TFDDatSRowVersion AVersion);
	
public:
	__fastcall virtual TFDDatSMechError()/* overload */;
	__fastcall TFDDatSMechError(int ADummy);
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechError() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechDetails : public TFDDatSMechRange
{
	typedef TFDDatSMechRange inherited;
	
private:
	TFDDatSRelation* FParentRelation;
	TFDDatSRow* FParentRow;
	void __fastcall SetParentRelation(TFDDatSRelation* const AValue);
	void __fastcall SetParentRow(TFDDatSRow* const AValue);
	void __fastcall ResolveReferences(const System::UnicodeString AName, const System::UnicodeString AValue);
	
protected:
	virtual bool __fastcall GetActualActive();
	virtual void __fastcall DoActiveChanged();
	virtual bool __fastcall NoRangeNoRecords();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall TFDDatSMechDetails(TFDDatSRelation* AParentRel, TFDDatSRow* AParentRow)/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property TFDDatSRelation* ParentRelation = {read=FParentRelation, write=SetParentRelation};
	__property TFDDatSRow* ParentRow = {read=FParentRow, write=SetParentRow};
public:
	/* TFDDatSMechRange.Create */ inline __fastcall virtual TFDDatSMechDetails()/* overload */ : TFDDatSMechRange() { }
	
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechDetails() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechChilds : public TFDDatSMechBase
{
	typedef TFDDatSMechBase inherited;
	
private:
	TFDDatSRow* FParentRow;
	int FRefCol;
	Firedac::Stan::Intf::TFDDataType FRefColType;
	TFDDatSNestedRowList* FRefRow;
	void __fastcall SetParentRow(TFDDatSRow* const AValue);
	
protected:
	virtual void __fastcall DoActiveChanged();
	virtual bool __fastcall GetRowsRange(TFDDatSRowListBase* &ARowList, /* out */ int &ABeginInd, /* out */ int &AEndInd);
	virtual bool __fastcall AcceptRow(TFDDatSRow* ARow, TFDDatSRowVersion AVersion);
	
public:
	__fastcall virtual TFDDatSMechChilds()/* overload */;
	__fastcall TFDDatSMechChilds(TFDDatSRow* AParentRow)/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	void __fastcall RebuildForRow(TFDDatSRow* AParentRow);
	__property TFDDatSRow* ParentRow = {read=FParentRow, write=SetParentRow};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechChilds() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechMaster : public TFDDatSMechRange
{
	typedef TFDDatSMechRange inherited;
	
private:
	TFDDatSRelation* FChildRelation;
	TFDDatSRow* FChildRow;
	void __fastcall SetChildRelation(TFDDatSRelation* const AValue);
	void __fastcall SetChildRow(TFDDatSRow* const AValue);
	void __fastcall ResolveReferences(const System::UnicodeString AName, const System::UnicodeString AValue);
	
protected:
	virtual bool __fastcall GetActualActive();
	virtual void __fastcall DoActiveChanged();
	virtual bool __fastcall NoRangeNoRecords();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall TFDDatSMechMaster(TFDDatSRelation* AChildRel, TFDDatSRow* AChildRow)/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	__property TFDDatSRelation* ChildRelation = {read=FChildRelation, write=SetChildRelation};
	__property TFDDatSRow* ChildRow = {read=FChildRow, write=SetChildRow};
public:
	/* TFDDatSMechRange.Create */ inline __fastcall virtual TFDDatSMechMaster()/* overload */ : TFDDatSMechRange() { }
	
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechMaster() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSMechParent : public TFDDatSMechBase
{
	typedef TFDDatSMechBase inherited;
	
private:
	TFDDatSRow* FChildRow;
	TFDDatSRowListBase* FParentRow;
	void __fastcall SetChildRow(TFDDatSRow* const AValue);
	
protected:
	virtual void __fastcall DoActiveChanged();
	virtual bool __fastcall GetActualActive();
	virtual bool __fastcall GetRowsRange(TFDDatSRowListBase* &ARowList, /* out */ int &ABeginInd, /* out */ int &AEndInd);
	virtual bool __fastcall AcceptRow(TFDDatSRow* ARow, TFDDatSRowVersion AVersion);
	
public:
	__fastcall virtual TFDDatSMechParent()/* overload */;
	__fastcall TFDDatSMechParent(TFDDatSRow* AChildRow)/* overload */;
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	__property TFDDatSRow* ChildRow = {read=FChildRow, write=SetChildRow};
public:
	/* TFDDatSObject.Destroy */ inline __fastcall virtual ~TFDDatSMechParent() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TFDDatSRowExtraInfo *PFDDataRowExtraInfo;

#pragma pack(push,1)
struct DECLSPEC_DRECORD TFDDatSRowExtraInfo
{
public:
	int FCheckColumn;
	System::Byte *FCheckValue;
	unsigned FCheckLen;
	Firedac::Stan::Error::EFDException* FRowException;
	unsigned FLockID;
};
#pragma pack(pop)


typedef TFDDatSCompareRowsCacheItem *PFDDatSCompareRowsCacheItem;

struct DECLSPEC_DRECORD TFDDatSCompareRowsCacheItem
{
public:
	System::Byte *FpBuff;
	int FLen;
	Firedac::Stan::Intf::TFDCompareDataOptions FOpts;
	bool FIsNull;
	bool FInit;
};


typedef System::DynamicArray<TFDDatSCompareRowsCacheItem> TFDDatSCompareRowsCache;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSRow : public TFDDatSObject
{
	typedef TFDDatSObject inherited;
	
public:
	System::Variant operator[](const System::Variant AColumn) { return this->Value[AColumn]; }
	
private:
	TFDDatSTable* FTable;
	System::Byte *FpInfo;
	System::Byte *FpOriginal;
	System::Byte *FpCurrent;
	System::Byte *FpProposed;
	TFDDatSRow* FNextChange;
	TFDDatSRow* FPriorChange;
	unsigned FRowID;
	unsigned FChangeNumber;
	TFDDatSRowExtraInfo *FExtraInfo;
	bool __fastcall GetHasErrors();
	TFDDatSTableRowList* __fastcall GetRowList();
	void __fastcall CalculateColumns(bool ADefaults);
	System::PByte __fastcall CheckWrite(int AColumn, TFDDatSRowVersion AVersion);
	void __fastcall InternalSetData(int AColumn, TFDDatSRowVersion AVersion, void * ABuff, unsigned ADataLen);
	void __fastcall InternalInitComplexData(System::PByte ABuffer);
	void __fastcall AllocInvariants();
	void __fastcall FreeInvariants();
	NativeInt __fastcall InternalGetInvariantObject(int AColumn);
	TFDDatSObject* __fastcall GetInvariantObject(int AColumn);
	void __fastcall InternalSetInvariantObject(int AColumn, NativeInt AValue);
	void __fastcall SetInvariantObject(int AColumn, TFDDatSObject* AObj);
	TFDDatSRow* __fastcall GetParentRow();
	void __fastcall SetParentRow(TFDDatSRow* const ARow);
	TFDDatSRow* __fastcall GetNestedRow(const int AColumn);
	void __fastcall SetNestedRow(const int AColumn, TFDDatSRow* const ARow);
	TFDDatSNestedRowList* __fastcall GetNestedRows(const int AColumn);
	void __fastcall ConstrainChildRow(TFDDatSRowState AProposedState);
	void __fastcall ConstrainParentRow(TFDDatSRowState AProposedState);
	void __fastcall CancelNestedRows();
	void __fastcall ClearNestedRows();
	void __fastcall AcceptNestedChanges();
	void __fastcall ClearNestedErrors();
	void __fastcall ProcessNestedRows(TFDDatSProcessNestedRowsMethod AMethod);
	void __fastcall RejectNestedChanges();
	void __fastcall SetFetchedMarks(bool AOn);
	Firedac::Stan::Error::EFDException* __fastcall GetRowError();
	bool __fastcall SetRowError(Firedac::Stan::Error::EFDException* const AValue);
	void __fastcall SetRowErrorPrc(Firedac::Stan::Error::EFDException* const AValue);
	void __fastcall DoNRDelete(TFDDatSRow* ARow);
	void __fastcall DoNREndModify(TFDDatSRow* ARow);
	void __fastcall DoNRCancel(TFDDatSRow* ARow);
	void __fastcall DoNRFree(TFDDatSRow* ARow);
	void __fastcall DoNRAcceptChanges(TFDDatSRow* ARow);
	void __fastcall DoNRClearErrors(TFDDatSRow* ARow);
	void __fastcall DoNRRejectChanges(TFDDatSRow* ARow);
	void __fastcall DoNRDetache(TFDDatSRow* ARow);
	System::Variant __fastcall GetDataI(const int AColumn);
	System::Variant __fastcall GetDataO(TFDDatSColumn* AColumn);
	void __fastcall CheckNoInfo();
	void * __fastcall GetRowInfo(bool AForce);
	bool __fastcall GetCheckInfo(int ACheckColumn, /* out */ System::PByte &ACheckValue, /* out */ unsigned &ACheckLen);
	void __fastcall SetCheckInfo(int ACheckColumn, System::PByte ACheckValue, int ACheckLen);
	bool __fastcall SkipConstraintCheck();
	void __fastcall CascadeAcceptReject(bool AAccept);
	unsigned __fastcall GetDBLockID();
	void __fastcall InternalCalculateColumns(bool ADefaults, TFDDatSColumnList* ACols);
	void __fastcall InternalAssignDefaults(TFDDatSColumnList* ACols);
	void __fastcall SaveRowVersion(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage, const System::UnicodeString AName, System::PByte ABuff, TFDDatSRowState ABuffKind);
	void __fastcall LoadRowVersion(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage, const System::UnicodeString AName, System::PByte &ABuff, TFDDatSRowState ABuffKind);
	System::Variant __fastcall GetDataS(const System::UnicodeString AColumn);
	System::Variant __fastcall GetDataV(const System::Variant &AColumn);
	void __fastcall SetDataI(const int AColumn, const System::Variant &Value);
	void __fastcall SetDataO(TFDDatSColumn* AColumn, const System::Variant &Value);
	void __fastcall SetDataS(const System::UnicodeString AColumn, const System::Variant &Value);
	void __fastcall SetDataV(const System::Variant &AColumn, const System::Variant &Value);
	System::UnicodeString __fastcall GetAsString(const System::UnicodeString AColumn);
	void __fastcall SetAsString(const System::UnicodeString AColumn, const System::UnicodeString AValue);
	void __fastcall DoNREndEdit(TFDDatSRow* ARow);
	void __fastcall DoNREndEditNoVer(TFDDatSRow* ARow);
	int __fastcall CompareNulls(bool AIsNull1, bool AIsNull2, Firedac::Stan::Intf::TFDCompareDataOptions AOptions);
	void __fastcall DoPostListInserted();
	
protected:
	virtual void __fastcall DoListInserted();
	virtual void __fastcall DoListInserting();
	virtual void __fastcall DoListRemoved(TFDDatSObject* ANewOwner);
	virtual void __fastcall DoListRemoving();
	System::PByte __fastcall AllocBuffer();
	void __fastcall CleanupBuffer(System::PByte ABuffer);
	void __fastcall CopyBuffer(System::PByte ADestination, System::PByte ASource);
	void __fastcall FreeBuffer(System::PByte &ApBuffer);
	bool __fastcall GetBlobData(System::PByte ABuffer, int AColumn, System::PByte &ApData, int &ALen);
	System::PByte __fastcall GetBuffer(TFDDatSRowVersion AVersion);
	bool __fastcall GetIsNull(System::PByte ABuffer, int AColumn);
	virtual TFDDatSTable* __fastcall GetTable();
	virtual TFDDatSManager* __fastcall GetManager();
	System::PByte __fastcall SetBlobData(System::PByte ABuffer, int AColumn, System::PByte ApData, int ALength, bool AForceNotNull = false);
	void __fastcall SetIsNull(System::PByte ABuffer, int AColumn, bool AValue);
	void __fastcall SetFetched(const int AColumn, const bool AValue);
	bool __fastcall GetFetched(const int AColumn);
	void __fastcall RegisterChange();
	void __fastcall UnregisterChange();
	__classmethod virtual System::UnicodeString __fastcall GetStreamingName(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall TFDDatSRow(TFDDatSTable* ATable, bool ASetToDefaults);
	__fastcall virtual ~TFDDatSRow();
	void __fastcall AcceptChanges(bool AUseCascade = true);
	void __fastcall AssignDefaults();
	void __fastcall BeginEdit();
	void __fastcall CancelEdit();
	void __fastcall CheckRowConstraints(TFDDatSRowState AProposedState);
	void __fastcall CheckColumnConstraints();
	void __fastcall Clear(bool ASetColsToDefaults);
	void __fastcall ClearErrors();
	bool __fastcall CompareColumnVersions(int AColumn, TFDDatSRowVersion AVersion1, TFDDatSRowVersion AVersion2);
	bool __fastcall CompareColumnsVersions(TFDDatSColumnSublist* AColumns, TFDDatSRowVersion AVersion1, TFDDatSRowVersion AVersion2);
	int __fastcall CompareData(int AColumn, void * ABuff1, int ADataLen1, void * ABuff2, int ADataLen2, Firedac::Stan::Intf::TFDCompareDataOptions AOptions);
	int __fastcall CompareRows(TFDDatSColumnSublist* AColumns, TFDDatSColumnSublist* ADescendingColumns, TFDDatSColumnSublist* ACaseInsensitiveColumns, int AColumnCount, TFDDatSRow* ARow2, TFDDatSColumnSublist* AColumns2, TFDDatSRowVersion AVersion, Firedac::Stan::Intf::TFDCompareDataOptions AOptions, TFDDatSCompareRowsCache &ACache)/* overload */;
	int __fastcall CompareRows(TFDDatSRow* ARow2, TFDDatSRowVersion AVersion, Firedac::Stan::Intf::TFDCompareDataOptions AOptions)/* overload */;
	int __fastcall CompareRowsExp(const Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator AEvaluator, TFDDatSRow* ARow2, TFDDatSRowVersion AVersion, Firedac::Stan::Intf::TFDCompareDataOptions AOptions);
	void __fastcall Delete(bool ANotDestroy = false);
	void __fastcall EndEdit(bool ANoVersion = false);
	void __fastcall EndEditNested(bool ANoVersion = false);
	void __fastcall Erase();
	void __fastcall ForceChange(TFDDatSRowState ARowState);
	TFDDatSView* __fastcall GetChildRows(const System::UnicodeString AChildRelationName)/* overload */;
	TFDDatSView* __fastcall GetChildRows(TFDDatSTable* AChildTable)/* overload */;
	TFDDatSView* __fastcall GetChildRows(TFDDatSRelation* AChildRelation)/* overload */;
	TFDDatSView* __fastcall GetParentRows(const System::UnicodeString AParentRelationName)/* overload */;
	TFDDatSView* __fastcall GetParentRows(TFDDatSTable* AParentTable)/* overload */;
	TFDDatSView* __fastcall GetParentRows(TFDDatSRelation* AParentRelation)/* overload */;
	System::Variant __fastcall GetData(const System::UnicodeString AColumnName, TFDDatSRowVersion AVersion = (TFDDatSRowVersion)(0x0))/* overload */;
	System::Variant __fastcall GetData(const int AColumn, TFDDatSRowVersion AVersion = (TFDDatSRowVersion)(0x0))/* overload */;
	System::Variant __fastcall GetData(TFDDatSColumn* const AColumn, TFDDatSRowVersion AVersion = (TFDDatSRowVersion)(0x0))/* overload */;
	bool __fastcall GetData(const int AColumn, TFDDatSRowVersion AVersion, void * &ABuff, unsigned ABuffLen, unsigned &ADataLen, bool AByVal)/* overload */;
	System::Variant __fastcall GetValues(const System::UnicodeString ANames);
	bool __fastcall HasVersion(TFDDatSRowVersion AVersion);
	void __fastcall RejectChanges(bool AUseCascade = true);
	void __fastcall SetData(int AColumn, const System::Variant &AValue)/* overload */;
	void __fastcall SetData(TFDDatSColumn* AColumn, const System::Variant &AValue)/* overload */;
	void __fastcall SetData(int AColumn, void * ABuff, unsigned ADataLen)/* overload */;
	void __fastcall SetValues(const System::Variant *AValues, const int AValues_High)/* overload */;
	void __fastcall SetValues(const System::UnicodeString ANames, const System::Variant &AValue)/* overload */;
	System::PByte __fastcall BeginDirectWriteBlob(int AColumn, int ABlobLen);
	void __fastcall EndDirectWriteBlob(int AColumn, int AFinalBlobLen = 0xffffffff);
	void __fastcall BeginForceWrite();
	void __fastcall EndForceWrite();
	void __fastcall DBLock(unsigned ALockID = (unsigned)(0xffffffff));
	void __fastcall DBUnlock();
	System::UnicodeString __fastcall DumpCol(int AColumn, bool AWithColNames = false, TFDDatSRowVersion AVersion = (TFDDatSRowVersion)(0x0));
	virtual System::UnicodeString __fastcall DumpRow(bool AWithColNames = false, TFDDatSRowVersion AVersion = (TFDDatSRowVersion)(0x0));
	void __fastcall SaveActualToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	__property unsigned DBLockID = {read=GetDBLockID, nodefault};
	__property TFDDatSNestedRowList* NestedRows[const int AColumn] = {read=GetNestedRows};
	__property bool HasErrors = {read=GetHasErrors, nodefault};
	__property TFDDatSTableRowList* RowList = {read=GetRowList};
	__property TFDDatSRowState RowState = {read=FRowState, nodefault};
	__property TFDDatSRowState RowPriorState = {read=FRowPriorState, nodefault};
	__property unsigned RowID = {read=FRowID, nodefault};
	__property unsigned ChangeNumber = {read=FChangeNumber, nodefault};
	__property TFDDatSTable* Table = {read=FTable};
	__property TFDDatSRow* ParentRow = {read=GetParentRow, write=SetParentRow};
	__property TFDDatSRow* NestedRow[const int AColumn] = {read=GetNestedRow, write=SetNestedRow};
	__property bool Fetched[const int AColumn] = {read=GetFetched, write=SetFetched};
	__property Firedac::Stan::Error::EFDException* RowError = {read=GetRowError, write=SetRowErrorPrc};
	__property System::Variant ValueI[const int AColumn] = {read=GetDataI, write=SetDataI};
	__property System::Variant ValueO[TFDDatSColumn* AColumn] = {read=GetDataO, write=SetDataO};
	__property System::Variant ValueS[const System::UnicodeString AColumn] = {read=GetDataS, write=SetDataS};
	__property System::Variant Value[const System::Variant AColumn] = {read=GetDataV, write=SetDataV/*, default*/};
	__property System::UnicodeString AsString[const System::UnicodeString AColumn] = {read=GetAsString, write=SetAsString};
public:
	/* TFDStorableObject.Create */ inline __fastcall virtual TFDDatSRow()/* overload */ : TFDDatSObject() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef TFDDatSRow* *PFDDatSRow;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSRowListBase : public TFDDatSList
{
	typedef TFDDatSList inherited;
	
public:
	TFDDatSRow* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	HIDESBASE TFDDatSRow* __fastcall GetItemsI(int AIndex);
	TFDDatSRow* __fastcall GetLast();
	void __fastcall InternalSort1(int L, int R, TFDCompareRowsProc ACompareRowsProc, Firedac::Stan::Intf::TFDCompareDataOptions AOpts);
	void __fastcall InternalSort2(int L, int H, TFDCompareRowsProc ACompareRowsProc, Firedac::Stan::Intf::TFDCompareDataOptions AOpts);
	void __fastcall InternalSort(int L, int R, TFDCompareRowsProc ACompareRowsProc, Firedac::Stan::Intf::TFDCompareDataOptions AOpts);
	
protected:
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	__classmethod virtual System::UnicodeString __fastcall GetStreamingName(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSRowListBase()/* overload */;
	int __fastcall Add(TFDDatSRow* ARow);
	void __fastcall AddAt(TFDDatSRow* ARow, int AIndex);
	void __fastcall Sort(TFDCompareRowsProc ACompareRowsProc, Firedac::Stan::Intf::TFDCompareDataOptions AOpts);
	void __fastcall CheckDuplicates(TFDCompareRowsProc ACompareRowsProc, Firedac::Stan::Intf::TFDCompareDataOptions AOpts);
	void __fastcall RemoveDuplicates(TFDCompareRowsProc ACompareRowsProc, int AColumnCount, Firedac::Stan::Intf::TFDCompareDataOptions AOpts);
	System::UnicodeString __fastcall GetValuesList(const System::UnicodeString AColumnName, const System::UnicodeString ADelimiter, const System::UnicodeString ANullName);
	virtual System::UnicodeString __fastcall DumpCol(int ACol, bool AWithColNames = false);
	__property TFDDatSRow* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property TFDDatSRow* Last = {read=GetLast};
public:
	/* TFDDatSList.Destroy */ inline __fastcall virtual ~TFDDatSRowListBase() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSNestedRowList : public TFDDatSRowListBase
{
	typedef TFDDatSRowListBase inherited;
	
protected:
	virtual void __fastcall AddObjectAt(TFDDatSObject* AObj, int AIndex);
	
public:
	virtual void __fastcall RemoveAt(int AIndex, bool ANotDestroy = false);
	__fastcall TFDDatSNestedRowList(TFDDatSRow* ARow);
public:
	/* TFDDatSRowListBase.Create */ inline __fastcall virtual TFDDatSNestedRowList()/* overload */ : TFDDatSRowListBase() { }
	
public:
	/* TFDDatSList.Destroy */ inline __fastcall virtual ~TFDDatSNestedRowList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSRowListWithAggregates : public TFDDatSRowListBase
{
	typedef TFDDatSRowListBase inherited;
	
private:
	System::Classes::TList* FAggregateValues;
	System::Classes::TBits* FAggregateSlots;
	int FAggregateSlotAllocated;
	int FAggregateSlotUsed;
	
protected:
	void __fastcall RemoveAggregatesRow(int ARowIndex);
	void __fastcall AddAggregatesRow(int ARowIndex);
	void __fastcall DeleteAggregates();
	void __fastcall ClearAggregate(int AIndex);
	void __fastcall DeleteAggregate(int &AIndex);
	int __fastcall AllocateAggregate();
	void __fastcall AttachAggregate(int ARowIndex, int AValIndex, TFDDatSAggregateValue* AObj);
	TFDDatSAggregateValue* __fastcall FetchAggregate(int ARowIndex, int AValIndex);
	void __fastcall DetachAggregate(int ARowIndex, int AValIndex);
	virtual void __fastcall AddObjectAt(TFDDatSObject* AObj, int AIndex);
	
public:
	virtual void __fastcall Clear();
	virtual void __fastcall RemoveAt(int AIndex, bool ANotDestroy = false);
	__fastcall virtual TFDDatSRowListWithAggregates()/* overload */;
	__fastcall virtual ~TFDDatSRowListWithAggregates();
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TFDDatSAggregateValue : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	Firedac::Stan::Util::TFDRefCounter* FRefs;
	System::Variant FValue;
	Firedac::Stan::Intf::TFDVariantArray FSubValues;
	int __fastcall GetRefs();
	
protected:
	void __fastcall AddRef();
	void __fastcall RemRef();
	
public:
	__fastcall TFDDatSAggregateValue(int ASubAggregateCnt);
	__fastcall TFDDatSAggregateValue(TFDDatSAggregateValue* AValue);
	__fastcall virtual ~TFDDatSAggregateValue();
	void __fastcall Clear();
	__property System::Variant Value = {read=FValue};
	__property int Refs = {read=GetRefs, nodefault};
};


enum DECLSPEC_DENUM TFDDatSAggregateState : unsigned int { agActual, agMinMax, agPrepared };

typedef System::Set<TFDDatSAggregateState, TFDDatSAggregateState::agActual, TFDDatSAggregateState::agPrepared> TFDDatSAggregateStates;

typedef TFDDatSSubAggregate *PFDDatSSubAggregate;

struct DECLSPEC_DRECORD TFDDatSSubAggregate
{
public:
	Firedac::Stan::Intf::TFDAggregateKind FKind;
	int FValueIndex;
	int FCountIndex;
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSAggregate : public TFDDatSNamedObject
{
	typedef TFDDatSNamedObject inherited;
	
	
private:
	typedef System::DynamicArray<TFDDatSSubAggregate> _TFDDatSAggregate__1;
	
	
private:
	System::UnicodeString FExpression;
	Firedac::Stan::Intf::_di_IFDStanExpressionEvaluator FEvaluator;
	bool FActive;
	int FGroupingLevel;
	int FValueIndex;
	TFDDatSAggregateStates FState;
	_TFDDatSAggregate__1 FSubAggregates;
	int FSubAggregateValues;
	int FCurrentRow;
	Firedac::Stan::Util::TFDRefCounter* FRefs;
	bool FPrevActualActive;
	bool __fastcall GetActualActive();
	void __fastcall SetActive(const bool AValue);
	void __fastcall SetExpression(const System::UnicodeString AValue);
	void __fastcall SetGroupingLevel(const int AValue);
	void __fastcall IncAggVals(Firedac::Stan::Intf::TFDAggregateKind AKind, const System::Variant &AVal, System::Variant &AAggVal, System::Variant &AAggCnt);
	void __fastcall DecAggVals(Firedac::Stan::Intf::TFDAggregateKind AKind, const System::Variant &AVal, System::Variant &AAggVal, System::Variant &AAggCnt);
	System::Variant __fastcall GetSubAggregateValue(int ASubAggregateIndex);
	TFDDatSRowListWithAggregates* __fastcall GetRows();
	System::Variant __fastcall GetValue(int ARowIndex);
	void __fastcall SetEvaluatorToRow(TFDDatSRowListWithAggregates* ARows, int ARowIndex);
	void __fastcall ClearGroup(int ARowIndex, int &AGroupFrom, int &AGroupTo);
	void __fastcall CalcGroup(int AGroupFrom, int AGroupTo, int AExclude);
	void __fastcall CalcAll();
	_di_IFDDatSMechSort __fastcall GetSortMech();
	TFDDatSView* __fastcall GetView();
	void __fastcall CheckActiveChanged();
	void __fastcall IncRow(TFDDatSRowListWithAggregates* ARows, int ARowIndex, TFDDatSAggregateValue* AVal);
	void __fastcall DecRow(TFDDatSRowListWithAggregates* ARows, int ARowIndex, TFDDatSAggregateValue* AVal);
	bool __fastcall GetIsRefCounted();
	Firedac::Stan::Intf::TFDDataType __fastcall GetDataType();
	void __fastcall ResolveActive(const System::UnicodeString AName, const System::UnicodeString AValue);
	
protected:
	void __fastcall Prepare();
	void __fastcall Unprepare();
	void __fastcall RowInserted(int ARowIndex);
	void __fastcall RowDeleted(int ARowIndex);
	void __fastcall RowUpdated(int ARowIndex, int AOldRowIndex);
	virtual void __fastcall DoListInserted();
	virtual void __fastcall DoListRemoving();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSAggregate()/* overload */;
	__fastcall TFDDatSAggregate(const System::UnicodeString AName, const System::UnicodeString AExpression, int AGroupingLevel)/* overload */;
	__fastcall virtual ~TFDDatSAggregate();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	void __fastcall CountRef(int AInit = 0x1);
	void __fastcall AddRef();
	void __fastcall RemRef();
	void __fastcall Recalc();
	void __fastcall Update();
	__property bool ActualActive = {read=GetActualActive, nodefault};
	__property _di_IFDDatSMechSort SortMech = {read=GetSortMech};
	__property TFDDatSRowListWithAggregates* Rows = {read=GetRows};
	__property TFDDatSView* View = {read=GetView};
	__property TFDDatSAggregateStates State = {read=FState, nodefault};
	__property Firedac::Stan::Intf::TFDDataType DataType = {read=GetDataType, nodefault};
	__property System::Variant Value[int ARowIndex] = {read=GetValue};
	__property bool IsRefCounted = {read=GetIsRefCounted, nodefault};
	__property System::UnicodeString Expression = {read=FExpression, write=SetExpression};
	__property int GroupingLevel = {read=FGroupingLevel, write=SetGroupingLevel, default=0};
	__property bool Active = {read=FActive, write=SetActive, default=0};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSAggregateList : public TFDDatSNamedList
{
	typedef TFDDatSNamedList inherited;
	
private:
	HIDESBASE TFDDatSAggregate* __fastcall GetItemsI(int AIndex);
	
protected:
	void __fastcall RowInserted(int ARowIndex);
	void __fastcall RowDeleted(int ARowIndex);
	void __fastcall RowUpdated(int ARowIndex, int AOldRowIndex);
	
public:
	__fastcall TFDDatSAggregateList(TFDDatSView* AOwner);
	int __fastcall Add(TFDDatSAggregate* AObj)/* overload */;
	TFDDatSAggregate* __fastcall Add(const System::UnicodeString AName, const System::UnicodeString AExpression, int AGroupingLevel = 0x0)/* overload */;
	TFDDatSAggregate* __fastcall AggregateByName(const System::UnicodeString AName);
	void __fastcall Update();
	void __fastcall Recalc();
	__property TFDDatSAggregate* ItemsI[int AIndex] = {read=GetItemsI};
	__property TFDDatSAggregate* ItemsS[const System::UnicodeString AName] = {read=AggregateByName};
public:
	/* TFDDatSNamedList.Create */ inline __fastcall virtual TFDDatSAggregateList()/* overload */ : TFDDatSNamedList() { }
	/* TFDDatSNamedList.Destroy */ inline __fastcall virtual ~TFDDatSAggregateList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSViewRowList : public TFDDatSRowListWithAggregates
{
	typedef TFDDatSRowListWithAggregates inherited;
	
public:
	__fastcall TFDDatSViewRowList(TFDDatSView* AView);
public:
	/* TFDDatSRowListWithAggregates.Create */ inline __fastcall virtual TFDDatSViewRowList()/* overload */ : TFDDatSRowListWithAggregates() { }
	/* TFDDatSRowListWithAggregates.Destroy */ inline __fastcall virtual ~TFDDatSViewRowList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSView : public TFDDatSNamedObject
{
	typedef TFDDatSNamedObject inherited;
	
private:
	bool FActive;
	bool FPrevActualActive;
	TFDDatSViewMechList* FMechanisms;
	TFDDatSRowListBase* FRows;
	TFDDatSView* FSourceView;
	TFDDatSViewStates FState;
	TFDDatSViewCreator FCreator;
	Firedac::Stan::Util::TFDRefCounter* FRefs;
	TFDDatSAggregateList* FAggregates;
	_di_IFDDatSMechSort FSortingMechanism;
	int FProposedPosition;
	int FLastUpdatePosition;
	TFDDatSRow* FFindRow;
	void __fastcall CheckRebuild();
	void __fastcall InvalidateRebuild();
	bool __fastcall GetActual();
	TFDDatSViewList* __fastcall GetViewList();
	TFDDatSViewProcessRowStatus __fastcall ProcessRow(TFDDatSRow* ARow, int &ANewPos, int &AOldPos, bool AAdding);
	void __fastcall SetActive(const bool AValue);
	void __fastcall SetSourceView(TFDDatSView* const AValue);
	void __fastcall UpdateSortingMechanism(TFDDatSView* AExcludeView);
	int __fastcall GetGroupingLevel();
	System::UnicodeString __fastcall GetRowFilter();
	TFDDatSRowStates __fastcall GetRowStateFilter();
	System::UnicodeString __fastcall GetSort();
	void __fastcall SetRowFilter(const System::UnicodeString AValue);
	void __fastcall SetRowStateFilter(const TFDDatSRowStates AValue);
	void __fastcall SetSort(const System::UnicodeString AValue);
	void __fastcall CheckActiveChanged();
	bool __fastcall GetIsRefCounted();
	bool __fastcall GetActualActive();
	void __fastcall DoRowAdded(TFDDatSRow* ARow);
	void __fastcall DoRowChanged(TFDDatSRow* ARow);
	void __fastcall DoRowDeleted(TFDDatSRow* ARow);
	void __fastcall ResolveActive(const System::UnicodeString AName, const System::UnicodeString AValue);
	TFDDatSRow* __fastcall GetFindRow();
	
protected:
	virtual void __fastcall DoListInserted();
	virtual void __fastcall DoListRemoving();
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual TFDDatSTable* __fastcall GetTable();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSView()/* overload */;
	__fastcall TFDDatSView(TFDDatSTable* ATable, const System::UnicodeString AFilter, const System::UnicodeString ASort, TFDDatSRowStates AStates)/* overload */;
	__fastcall TFDDatSView(TFDDatSTable* ATable, const System::UnicodeString ABaseName, TFDDatSViewCreator ACreator, bool ACountRef)/* overload */;
	__fastcall virtual ~TFDDatSView();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	void __fastcall CountRef(int AInit = 0x1);
	void __fastcall AddRef();
	void __fastcall RemRef();
	void __fastcall Clear();
	void __fastcall Rebuild();
	int __fastcall Search(TFDDatSRow* AKeyRow, TFDDatSColumnSublist* AKeyColumnList, TFDDatSColumnSublist* AKeyColumnList2, int AKeyColumnCount, Firedac::Stan::Intf::TFDLocateOptions AOptions, int &AIndex, /* out */ bool &AFound, TFDDatSRowVersion ARowVersion = (TFDDatSRowVersion)(0x0));
	HIDESBASE int __fastcall IndexOf(TFDDatSRow* AKeyRow, TFDDatSRowVersion ARowVersion = (TFDDatSRowVersion)(0x0), int APossibleIndex = 0xffffffff)/* overload */;
	int __fastcall Find(const System::Variant *AValues, const int AValues_High, Firedac::Stan::Intf::TFDLocateOptions AOptions = Firedac::Stan::Intf::TFDLocateOptions() )/* overload */;
	int __fastcall Find(TFDDatSRow* ARow, Firedac::Stan::Intf::TFDLocateOptions AOptions = Firedac::Stan::Intf::TFDLocateOptions() )/* overload */;
	int __fastcall Find(const System::Variant *AValues, const int AValues_High, const System::UnicodeString AColumns, Firedac::Stan::Intf::TFDLocateOptions AOptions = Firedac::Stan::Intf::TFDLocateOptions() )/* overload */;
	int __fastcall Find(TFDDatSRow* ARow, const System::UnicodeString AColumns, Firedac::Stan::Intf::TFDLocateOptions AOptions = Firedac::Stan::Intf::TFDLocateOptions() )/* overload */;
	bool __fastcall Locate(int &ARowIndex, bool AGoForward = true, bool ARestart = false);
	TFDDatSGroupPositions __fastcall GetGroupState(int ARecordIndex, int AGroupingLevel);
	void __fastcall DeleteAll(bool AAcceptChanges = false);
	TFDDatSMechBase* __fastcall GetMechanismByClass(TFDDatSMechBaseClass AClass, TFDDatSMechanismKind AKind);
	__property bool ActualActive = {read=GetActualActive, nodefault};
	__property bool Actual = {read=GetActual, nodefault};
	__property _di_IFDDatSMechSort SortingMechanism = {read=FSortingMechanism};
	__property int GroupingLevel = {read=GetGroupingLevel, nodefault};
	__property TFDDatSViewMechList* Mechanisms = {read=FMechanisms};
	__property TFDDatSRowListBase* Rows = {read=FRows};
	__property TFDDatSViewList* ViewList = {read=GetViewList};
	__property TFDDatSAggregateList* Aggregates = {read=FAggregates};
	__property bool IsRefCounted = {read=GetIsRefCounted, nodefault};
	__property bool Active = {read=FActive, write=SetActive, nodefault};
	__property TFDDatSViewCreator Creator = {read=FCreator, write=FCreator, nodefault};
	__property TFDDatSView* SourceView = {read=FSourceView, write=SetSourceView};
	__property System::UnicodeString RowFilter = {read=GetRowFilter, write=SetRowFilter};
	__property TFDDatSRowStates RowStateFilter = {read=GetRowStateFilter, write=SetRowStateFilter, default=0};
	__property System::UnicodeString Sort = {read=GetSort, write=SetSort};
	__property int ProposedPosition = {read=FProposedPosition, write=FProposedPosition, nodefault};
	__property int LastUpdatePosition = {read=FLastUpdatePosition, write=FLastUpdatePosition, nodefault};
	/* Hoisted overloads: */
	
public:
	inline int __fastcall  IndexOf(TFDDatSObject* AObj){ return TFDDatSObject::IndexOf(AObj); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSViewList : public TFDDatSNamedList
{
	typedef TFDDatSNamedList inherited;
	
public:
	TFDDatSView* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	bool FActive;
	HIDESBASE TFDDatSView* __fastcall GetItemsI(int AIndex);
	void __fastcall SetActive(const bool AValue);
	
protected:
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall TFDDatSViewList(TFDDatSTable* ATable);
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	int __fastcall Add(TFDDatSView* AObj)/* overload */;
	TFDDatSView* __fastcall Add(const System::UnicodeString AName)/* overload */;
	virtual void __fastcall Clear();
	TFDDatSView* __fastcall ViewByName(const System::UnicodeString AName);
	TFDDatSView* __fastcall FindSortedView(const System::UnicodeString AColumns, Firedac::Stan::Intf::TFDSortOptions ARequiredOptions, Firedac::Stan::Intf::TFDSortOptions AProhibitedOptions);
	void __fastcall Rebuild();
	__property TFDDatSView* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property TFDDatSView* ItemsS[const System::UnicodeString AName] = {read=ViewByName};
	__property bool Active = {read=FActive, write=SetActive, nodefault};
public:
	/* TFDDatSNamedList.Create */ inline __fastcall virtual TFDDatSViewList()/* overload */ : TFDDatSNamedList() { }
	/* TFDDatSNamedList.Destroy */ inline __fastcall virtual ~TFDDatSViewList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSTableRowList : public TFDDatSRowListWithAggregates
{
	typedef TFDDatSRowListWithAggregates inherited;
	
private:
	unsigned FLastRowID;
	int FLastRowCount;
	bool FRowIDOrdered;
	int FResultSetNum;
	
protected:
	__classmethod virtual System::UnicodeString __fastcall GetStreamingName(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall AddObjectAt(TFDDatSObject* AObj, int AIndex);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall TFDDatSTableRowList(TFDDatSTable* ATable);
	HIDESBASE TFDDatSRow* __fastcall Add(const System::Variant *AValues, const int AValues_High)/* overload */;
	virtual void __fastcall RemoveAt(int AIndex, bool ANotDestroy = false);
	virtual int __fastcall IndexOf(TFDDatSObject* AObj)/* overload */;
	HIDESBASE int __fastcall IndexOf(unsigned ARowID)/* overload */;
	virtual void __fastcall Clear();
	virtual bool __fastcall MoveTo(int AFromIndex, int AToIndex);
	__property Capacity;
	__property int ResultSetNum = {read=FResultSetNum, nodefault};
public:
	/* TFDDatSRowListWithAggregates.Create */ inline __fastcall virtual TFDDatSTableRowList()/* overload */ : TFDDatSRowListWithAggregates() { }
	/* TFDDatSRowListWithAggregates.Destroy */ inline __fastcall virtual ~TFDDatSTableRowList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2020}") IFDDatSTableMetadataCallback  : public System::IInterface 
{
	virtual void __fastcall GetColumnOptions(TFDDatSColumn* AColumn, Firedac::Stan::Intf::TFDDataOptions &AOptions) = 0 ;
	virtual void __fastcall GetColumnAttributes(TFDDatSColumn* AColumn, Firedac::Stan::Intf::TFDDataAttributes &AAttributes) = 0 ;
	virtual void __fastcall GetColumnOrigin(TFDDatSColumn* AColumn, System::UnicodeString &AOrigin) = 0 ;
	virtual void __fastcall GetColumnGenerator(TFDDatSColumn* AColumn, System::UnicodeString &AGenerator) = 0 ;
	virtual void __fastcall GetColumnCaption(TFDDatSColumn* AColumn, System::UnicodeString &ACaption) = 0 ;
	virtual void __fastcall GetTableOrigin(System::UnicodeString &AOrigin) = 0 ;
	virtual System::TObject* __fastcall GetOwner() = 0 ;
};

__interface  INTERFACE_UUID("{3E9B315B-F456-4175-A864-B2573C4A2021}") IFDDatSTableDataCallback  : public System::IInterface 
{
	virtual void __fastcall TableDataChanged(TFDDatSRow* ARow, TFDDatSRowState AChangeKind) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSTable : public TFDDatSBindedObject
{
	typedef TFDDatSBindedObject inherited;
	
private:
	TFDDatSColumnList* FColumns;
	TFDDatSConstraintList* FConstraints;
	TFDDatSView* FDefaultView;
	TFDDatSView* FErrors;
	TFDDatSView* FChanges;
	TFDDatSTableRowList* FRows;
	TFDDatSViewList* FViews;
	TFDDatSUpdatesJournal* FUpdates;
	bool FUpdatesRegistry;
	TFDDatSHandleMode FDataHandleMode;
	Firedac::Stan::Util::TFDRefCounter* FRefs;
	TFDDatSManager* FManager;
	unsigned FLocale;
	bool FCaseSensitive;
	bool FNested;
	_di_IFDDatSTableMetadataCallback FMetadataCallback;
	System::Classes::TInterfaceList* FDataCallbacks;
	bool FRound2Scale;
	bool FCheckPrecision;
	bool FStrsTrim2Len;
	bool FCheckNotNull;
	bool FCheckReadOnly;
	TFDDatSView* __fastcall GetBaseView(TFDDatSRowStates AStates);
	TFDDatSView* __fastcall GetDefaultView();
	TFDDatSView* __fastcall GetFullView();
	bool __fastcall GetEnforceConstraints();
	bool __fastcall GetHasErrors();
	TFDDatSTableList* __fastcall GetTableList();
	void __fastcall SetEnforceConstraints(const bool AValue);
	void __fastcall SetMinimumCapacity(const int AValue);
	TFDDatSView* __fastcall GetChanges2();
	void __fastcall ImportBuffer(TFDDatSRow* ASrcRow, TFDDatSRow* ADestRow, TFDDatSRowState ASrcKind, TFDDatSRowState ADestKind, const TFDArrayOfInteger AColumnMap);
	TFDDatSRelationArray __fastcall GetChildRelations();
	TFDDatSRelationArray __fastcall GetParentRelations();
	void __fastcall SetLocale(const unsigned AValue);
	void __fastcall SetCaseSensitive(const bool AValue);
	System::UnicodeString __fastcall GetPrimaryKey();
	void __fastcall SetPrimaryKey(const System::UnicodeString AValue);
	int __fastcall GetMinimumCapacity();
	bool __fastcall GetIsRefCounted();
	void __fastcall NotifyDataChanged(TFDDatSRow* ARow, TFDDatSRowState AChangeKind);
	System::UnicodeString __fastcall GetActualOriginName();
	int __fastcall GetRefCount();
	void __fastcall ResolveEnforceConstraints(const System::UnicodeString AName, const System::UnicodeString AValue);
	void __fastcall ResolveInvars(const System::UnicodeString AName, const System::UnicodeString AValue);
	
protected:
	virtual void __fastcall Notify(PFDDatSNotifyParam AParam)/* overload */;
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual TFDDatSTable* __fastcall GetTable();
	virtual TFDDatSManager* __fastcall GetManager();
	virtual void __fastcall DoListInserted();
	virtual void __fastcall DoListRemoving();
	virtual void __fastcall DoListRemoved(TFDDatSObject* ANewOwner);
	int __fastcall FindRowByPK(TFDDatSRow* ARow);
	void __fastcall CheckLayoutChanging();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSTable()/* overload */;
	__fastcall TFDDatSTable(const System::UnicodeString AName)/* overload */;
	__fastcall virtual ~TFDDatSTable();
	void __fastcall AddRef();
	void __fastcall CountRef(int AInit = 0x1);
	void __fastcall RemRef();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	void __fastcall AcceptChanges();
	void __fastcall BeginLoadData(TFDDatSLoadState &AState, TFDDatSHandleMode ADataHandleMode = (TFDDatSHandleMode)(0x2));
	void __fastcall Clear();
	System::Variant __fastcall Compute(const System::UnicodeString AExpression, const System::UnicodeString AFilter);
	TFDDatSTable* __fastcall Copy();
	void __fastcall EndLoadData(TFDDatSLoadState &AState);
	TFDDatSView* __fastcall GetChangesView(TFDDatSRowStates ARowStates = (TFDDatSRowStates() << TFDDatSRowState::rsInserted << TFDDatSRowState::rsDeleted << TFDDatSRowState::rsModified ));
	TFDDatSTable* __fastcall GetChanges(TFDDatSRowStates ARowStates = (TFDDatSRowStates() << TFDDatSRowState::rsInserted << TFDDatSRowState::rsDeleted << TFDDatSRowState::rsModified ));
	TFDDatSView* __fastcall GetErrors();
	bool __fastcall HasChanges(TFDDatSRowStates ARowStates);
	void __fastcall MakeColumnMap(TFDDatSTable* ASrcTab, /* out */ TFDArrayOfInteger &AColumnMap);
	void __fastcall ImportRow(TFDDatSRow* ASrcRow);
	void __fastcall Import(TFDDatSRow* ASrcRow, TFDDatSRow* ADestRow, const TFDArrayOfInteger AColumnMap)/* overload */;
	void __fastcall Import(TFDDatSRow* ASrcRow, TFDDatSRow* ADestRow = (TFDDatSRow*)(0x0))/* overload */;
	void __fastcall Import(TFDDatSRowListBase* ARowList)/* overload */;
	void __fastcall Import(TFDDatSView* AView)/* overload */;
	void __fastcall Import(TFDDatSTable* ATable)/* overload */;
	void __fastcall Merge(TFDDatSTable* ATable, Firedac::Stan::Intf::TFDMergeDataMode AData = (Firedac::Stan::Intf::TFDMergeDataMode)(0x3), Firedac::Stan::Intf::TFDMergeMetaMode AMeta = (Firedac::Stan::Intf::TFDMergeMetaMode)(0x0), Firedac::Stan::Intf::TFDMergeOptions AOptions = Firedac::Stan::Intf::TFDMergeOptions() );
	TFDDatSRow* __fastcall LoadDataRow(const System::Variant *AValues, const int AValues_High, bool AAcceptChanges = false);
	TFDDatSRow* __fastcall NewRow(bool ASetToDefaults = true)/* overload */;
	TFDDatSRow* __fastcall NewRow(bool ASetToDefaults, TFDDatSRow* const *AParentRows, const int AParentRows_High)/* overload */;
	TFDDatSRow* __fastcall NewRow(const System::Variant *AValues, const int AValues_High, bool ASetToDefaults = true)/* overload */;
	void __fastcall RejectChanges();
	void __fastcall Reset();
	TFDDatSView* __fastcall Select(const System::UnicodeString AFilter = System::UnicodeString(), const System::UnicodeString ASort = System::UnicodeString(), TFDDatSRowStates AStates = TFDDatSRowStates() );
	void __fastcall AddDataCallback(const _di_IFDDatSTableDataCallback ACallback);
	void __fastcall RemoveDataCallback(const _di_IFDDatSTableDataCallback ACallback, bool ARemoveLastOne);
	void __fastcall UpdateLayout();
	void __fastcall Setup(const Firedac::Stan::Option::_di_IFDStanOptions AOptions);
	__property TFDDatSView* Changes = {read=GetChanges2};
	__property TFDDatSRelationArray ChildRelations = {read=GetChildRelations};
	__property TFDDatSColumnList* Columns = {read=FColumns};
	__property TFDDatSConstraintList* Constraints = {read=FConstraints};
	__property TFDDatSHandleMode DataHandleMode = {read=FDataHandleMode, nodefault};
	__property TFDDatSView* DefaultView = {read=GetDefaultView};
	__property TFDDatSView* FullView = {read=GetFullView};
	__property TFDDatSView* Errors = {read=GetErrors};
	__property bool HasErrors = {read=GetHasErrors, nodefault};
	__property TFDDatSRelationArray ParentRelations = {read=GetParentRelations};
	__property TFDDatSTableRowList* Rows = {read=FRows};
	__property TFDDatSManager* Manager = {read=FManager};
	__property TFDDatSTableList* TableList = {read=GetTableList};
	__property TFDDatSViewList* Views = {read=FViews};
	__property TFDDatSUpdatesJournal* Updates = {read=FUpdates};
	__property bool UpdatesRegistry = {read=FUpdatesRegistry, nodefault};
	__property bool IsRefCounted = {read=GetIsRefCounted, nodefault};
	__property int RefCount = {read=GetRefCount, nodefault};
	__property System::UnicodeString ActualOriginName = {read=GetActualOriginName};
	__property _di_IFDDatSTableMetadataCallback MetadataCallback = {read=FMetadataCallback, write=FMetadataCallback};
	__property bool CaseSensitive = {read=FCaseSensitive, write=SetCaseSensitive, default=1};
	__property bool EnforceConstraints = {read=GetEnforceConstraints, write=SetEnforceConstraints, default=1};
	__property unsigned Locale = {read=FLocale, write=SetLocale, default=1024};
	__property int MinimumCapacity = {read=GetMinimumCapacity, write=SetMinimumCapacity, default=0};
	__property bool Nested = {read=FNested, write=FNested, default=0};
	__property System::UnicodeString PrimaryKey = {read=GetPrimaryKey, write=SetPrimaryKey};
	__property bool Round2Scale = {read=FRound2Scale, write=FRound2Scale, default=0};
	__property bool CheckPrecision = {read=FCheckPrecision, write=FCheckPrecision, default=0};
	__property bool StrsTrim2Len = {read=FStrsTrim2Len, write=FStrsTrim2Len, default=0};
	__property bool CheckNotNull = {read=FCheckNotNull, write=FCheckNotNull, default=1};
	__property bool CheckReadOnly = {read=FCheckReadOnly, write=FCheckReadOnly, default=1};
	/* Hoisted overloads: */
	
protected:
	inline void __fastcall  Notify(TFDDatSNotificationKind AKind, TFDDatSNotificationReason AReason, NativeInt AParam1, NativeInt AParam2){ TFDDatSObject::Notify(AKind, AReason, AParam1, AParam2); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSTableList : public TFDDatSBindedList
{
	typedef TFDDatSBindedList inherited;
	
public:
	TFDDatSTable* operator[](int AIndex) { return this->ItemsI[AIndex]; }
	
private:
	HIDESBASE TFDDatSTable* __fastcall GetItemsI(int AIndex);
	
public:
	__fastcall TFDDatSTableList(TFDDatSManager* AManager);
	int __fastcall Add(TFDDatSTable* AObj)/* overload */;
	TFDDatSTable* __fastcall Add(const System::UnicodeString AName = System::UnicodeString())/* overload */;
	TFDDatSTable* __fastcall TableByName(const System::UnicodeString AName);
	__property TFDDatSTable* ItemsI[int AIndex] = {read=GetItemsI/*, default*/};
	__property TFDDatSTable* ItemsS[const System::UnicodeString AName] = {read=TableByName};
public:
	/* TFDDatSNamedList.Create */ inline __fastcall virtual TFDDatSTableList()/* overload */ : TFDDatSBindedList() { }
	/* TFDDatSNamedList.Destroy */ inline __fastcall virtual ~TFDDatSTableList() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSUpdatesJournal : public Firedac::Stan::Intf::TFDStorableObject
{
	typedef Firedac::Stan::Intf::TFDStorableObject inherited;
	
private:
	int FLocked;
	unsigned FChangeNumber;
	TFDDatSObject* FOwner;
	TFDDatSRow* FFirstChange;
	TFDDatSRow* FLastChange;
	TFDDatSRow* FTmpNextRow;
	void __fastcall SetSavePoint(const unsigned AValue);
	void __fastcall AppendRow(TFDDatSRow* ARow);
	bool __fastcall GetLocked();
	
protected:
	__classmethod virtual System::UnicodeString __fastcall GetClassPrefix();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall TFDDatSUpdatesJournal(TFDDatSObject* AOwner)/* overload */;
	void __fastcall Lock();
	void __fastcall Unlock();
	int __fastcall RegisterRow(TFDDatSRow* ARow);
	void __fastcall UnregisterRow(TFDDatSRow* ARow);
	void __fastcall AcceptChanges(TFDDatSObject* AOwner = (TFDDatSObject*)(0x0));
	void __fastcall RejectChanges(TFDDatSObject* AOwner = (TFDDatSObject*)(0x0));
	bool __fastcall HasChanges(TFDDatSObject* AOwner = (TFDDatSObject*)(0x0));
	TFDDatSRow* __fastcall FirstChange(TFDDatSObject* AOwner = (TFDDatSObject*)(0x0));
	TFDDatSRow* __fastcall NextChange(TFDDatSRow* ACurRow, TFDDatSObject* AOwner = (TFDDatSObject*)(0x0));
	TFDDatSRow* __fastcall LastChange(TFDDatSObject* AOwner = (TFDDatSObject*)(0x0));
	int __fastcall GetCount(TFDDatSObject* AOwner = (TFDDatSObject*)(0x0));
	void __fastcall Clear();
	__property unsigned SavePoint = {read=FChangeNumber, write=SetSavePoint, nodefault};
	__property bool IsLocked = {read=GetLocked, nodefault};
public:
	/* TFDStorableObject.Create */ inline __fastcall virtual TFDDatSUpdatesJournal()/* overload */ : Firedac::Stan::Intf::TFDStorableObject() { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TFDDatSUpdatesJournal() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

typedef System::DynamicArray<TFDDatSTable*> TFDDatSTableArray;

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDatSManager : public TFDDatSNamedObject
{
	typedef TFDDatSNamedObject inherited;
	
private:
	bool FEnforceConstraints;
	TFDDatSRelationList* FRelations;
	TFDDatSTableList* FTables;
	TFDDatSUpdatesJournal* FUpdates;
	bool FUpdatesRegistry;
	Firedac::Stan::Util::TFDRefCounter* FRefs;
	bool FCaseSensitive;
	unsigned FLocale;
	bool FRound2Scale;
	bool FStrsTrim2Len;
	bool FCheckNotNull;
	bool FCheckReadOnly;
	bool FCheckPrecision;
	int FResultSetNum;
	bool __fastcall GetHasErrors();
	void __fastcall SetEnforceConstraints(const bool AValue);
	TFDDatSTableArray __fastcall GetRootTables();
	void __fastcall SetUpdatesRegistry(const bool AValue);
	void __fastcall SetCaseSensitive(const bool AValue);
	void __fastcall SetLocale(const unsigned AValue);
	void __fastcall SetRound2Scale(const bool AValue);
	void __fastcall SetCheckPrecision(const bool AValue);
	void __fastcall SetStrsTrim2Len(const bool AValue);
	bool __fastcall GetIsRefCounted();
	int __fastcall GetRefs();
	void __fastcall SetCheckNotNull(const bool AValue);
	void __fastcall SetCheckReadOnly(const bool AValue);
	int __fastcall GetResultSetNum();
	
protected:
	virtual void __fastcall HandleNotification(PFDDatSNotifyParam AParam);
	virtual TFDDatSManager* __fastcall GetManager();
	virtual void __fastcall InternalSaveToStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	virtual void __fastcall InternalLoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage);
	
public:
	__fastcall virtual TFDDatSManager()/* overload */;
	__fastcall virtual ~TFDDatSManager();
	virtual void __fastcall Assign(TFDDatSObject* AObj);
	virtual bool __fastcall IsEqualTo(TFDDatSObject* AObj);
	void __fastcall CountRef(int AInit = 0x1);
	void __fastcall AddRef();
	void __fastcall RemRef();
	void __fastcall AcceptChanges();
	void __fastcall BeginLoadData(TFDDatSLoadStates &AStates, TFDDatSHandleMode ADataHandleMode = (TFDDatSHandleMode)(0x2));
	void __fastcall Clear();
	TFDDatSManager* __fastcall Copy();
	void __fastcall EndLoadData(const TFDDatSLoadStates AStates);
	bool __fastcall HasChanges(TFDDatSRowStates ARowStates);
	HIDESBASE void __fastcall LoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage, Firedac::Stan::Intf::TFDMergeDataMode AMergeData, Firedac::Stan::Intf::TFDMergeMetaMode AMergeMeta, Firedac::Stan::Intf::TFDMergeOptions AOptions)/* overload */;
	void __fastcall Merge(TFDDatSManager* AManager, Firedac::Stan::Intf::TFDMergeDataMode AData = (Firedac::Stan::Intf::TFDMergeDataMode)(0x3), Firedac::Stan::Intf::TFDMergeMetaMode AMeta = (Firedac::Stan::Intf::TFDMergeMetaMode)(0x0), Firedac::Stan::Intf::TFDMergeOptions AOptions = Firedac::Stan::Intf::TFDMergeOptions() );
	void __fastcall RejectChanges();
	void __fastcall Reset();
	void __fastcall Setup(const Firedac::Stan::Option::_di_IFDStanOptions AOptions);
	__property bool HasErrors = {read=GetHasErrors, nodefault};
	__property TFDDatSRelationList* Relations = {read=FRelations};
	__property TFDDatSTableList* Tables = {read=FTables};
	__property TFDDatSUpdatesJournal* Updates = {read=FUpdates};
	__property TFDDatSTableArray RootTables = {read=GetRootTables};
	__property bool IsRefCounted = {read=GetIsRefCounted, nodefault};
	__property int Refs = {read=GetRefs, nodefault};
	__property bool CaseSensitive = {read=FCaseSensitive, write=SetCaseSensitive, default=1};
	__property bool EnforceConstraints = {read=FEnforceConstraints, write=SetEnforceConstraints, default=1};
	__property unsigned Locale = {read=FLocale, write=SetLocale, default=1024};
	__property bool UpdatesRegistry = {read=FUpdatesRegistry, write=SetUpdatesRegistry, default=0};
	__property bool Round2Scale = {read=FRound2Scale, write=SetRound2Scale, default=0};
	__property bool CheckPrecision = {read=FCheckPrecision, write=SetCheckPrecision, default=0};
	__property bool StrsTrim2Len = {read=FStrsTrim2Len, write=SetStrsTrim2Len, default=0};
	__property bool CheckNotNull = {read=FCheckNotNull, write=SetCheckNotNull, default=1};
	__property bool CheckReadOnly = {read=FCheckReadOnly, write=SetCheckReadOnly, default=1};
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  LoadFromStorage(const Firedac::Stan::Intf::_di_IFDStanStorage AStorage){ Firedac::Stan::Intf::TFDStorableObject::LoadFromStorage(AStorage); }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE TFDDatSCompareRowsCache FDEmptyCC;
extern DELPHI_PACKAGE float FDSingleDelta;
extern DELPHI_PACKAGE double FDDoubleDelta;
extern DELPHI_PACKAGE System::Extended FDExtendedDelta;
}	/* namespace Dats */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_DATS)
using namespace Firedac::Dats;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC)
using namespace Firedac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Firedac_DatsHPP
