// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.DApt.Column.pas' rev: 35.00 (Windows)

#ifndef Firedac_Dapt_ColumnHPP
#define Firedac_Dapt_ColumnHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.Classes.hpp>
#include <FireDAC.DatS.hpp>
#include <FireDAC.Phys.Intf.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Dapt
{
namespace Column
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TFDDAptColumnMapping;
class DELPHICLASS TFDDAptColumnMappings;
//-- type declarations -------------------------------------------------------
#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDAptColumnMapping : public System::Classes::TCollectionItem
{
	typedef System::Classes::TCollectionItem inherited;
	
private:
	System::UnicodeString FDatSColumnName;
	int FSourceColumnID;
	System::UnicodeString FSourceColumnName;
	System::UnicodeString FUpdateColumnName;
	void __fastcall SetSourceColumnName(const System::UnicodeString AValue);
	void __fastcall SetSourceColumnID(const int AValue);
	System::UnicodeString __fastcall GetUpdateColumnName();
	System::UnicodeString __fastcall GetDatSColumnName();
	Firedac::Dats::TFDDatSColumn* __fastcall GetDatSColumn();
	bool __fastcall MatchRecordSetColumn(const Firedac::Phys::Intf::TFDPhysMappingName &AColumn);
	
protected:
	virtual System::UnicodeString __fastcall GetDisplayName();
	
public:
	__fastcall virtual TFDDAptColumnMapping(System::Classes::TCollection* ACollection);
	__property Firedac::Dats::TFDDatSColumn* DatSColumn = {read=GetDatSColumn};
	
__published:
	__property System::UnicodeString SourceColumnName = {read=FSourceColumnName, write=SetSourceColumnName};
	__property int SourceColumnID = {read=FSourceColumnID, write=SetSourceColumnID, default=-1};
	__property System::UnicodeString UpdateColumnName = {read=GetUpdateColumnName, write=FUpdateColumnName};
	__property System::UnicodeString DatSColumnName = {read=GetDatSColumnName, write=FDatSColumnName};
public:
	/* TCollectionItem.Destroy */ inline __fastcall virtual ~TFDDAptColumnMapping() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TFDDAptColumnMappings : public System::Classes::TCollection
{
	typedef System::Classes::TCollection inherited;
	
public:
	TFDDAptColumnMapping* operator[](int AIndex) { return this->Items[AIndex]; }
	
private:
	Firedac::Dats::TFDDatSTable* FDatSTable;
	System::Classes::TPersistent* FOwner;
	int __fastcall Find(const Firedac::Phys::Intf::TFDPhysMappingName &AColumn);
	TFDDAptColumnMapping* __fastcall GetItems(int AIndex);
	void __fastcall SetItems(int AIndex, TFDDAptColumnMapping* const Value);
	
protected:
	DYNAMIC System::Classes::TPersistent* __fastcall GetOwner();
	
public:
	__fastcall TFDDAptColumnMappings(System::Classes::TPersistent* AOwner)/* overload */;
	__fastcall virtual ~TFDDAptColumnMappings();
	void __fastcall SetOwner(System::Classes::TPersistent* AOwner);
	TFDDAptColumnMapping* __fastcall Lookup(const Firedac::Phys::Intf::TFDPhysMappingName &AColumn);
	HIDESBASE TFDDAptColumnMapping* __fastcall Add(const System::UnicodeString ASourceColumnName = System::UnicodeString(), const System::UnicodeString ADatSColumnName = System::UnicodeString(), const System::UnicodeString AUpdateColumnName = System::UnicodeString());
	void __fastcall Remove(const Firedac::Phys::Intf::TFDPhysMappingName &AColumn);
	__property TFDDAptColumnMapping* Items[int AIndex] = {read=GetItems, write=SetItems/*, default*/};
	__property Firedac::Dats::TFDDatSTable* DatSTable = {read=FDatSTable, write=FDatSTable};
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE void __fastcall FDGetRecordSetColumnInfo(TFDDAptColumnMapping* AColMap, int &ASourceID, System::UnicodeString &ASourceName, System::UnicodeString &ADatSName, System::UnicodeString &AUpdateName, Firedac::Dats::TFDDatSColumn* &ADatSColumn);
}	/* namespace Column */
}	/* namespace Dapt */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_DAPT_COLUMN)
using namespace Firedac::Dapt::Column;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_DAPT)
using namespace Firedac::Dapt;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC)
using namespace Firedac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Firedac_Dapt_ColumnHPP
