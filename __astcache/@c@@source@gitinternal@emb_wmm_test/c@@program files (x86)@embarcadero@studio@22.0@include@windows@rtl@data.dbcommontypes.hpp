// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Data.DBCommonTypes.pas' rev: 35.00 (Windows)

#ifndef Data_DbcommontypesHPP
#define Data_DbcommontypesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>

//-- user supplied -----------------------------------------------------------

namespace Data
{
namespace Dbcommontypes
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef void __fastcall (__closure *TLoginEvent)(System::TObject* Sender, System::UnicodeString Username, System::UnicodeString Password);

enum DECLSPEC_DENUM FLDVchk : unsigned int { fldvNOCHECKS, fldvHASCHECKS, fldvUNKNOWN };

enum DECLSPEC_DENUM FLDRights : unsigned int { fldrREADWRITE, fldrREADONLY, fldrNONE, fldrUNKNOWN };

enum DECLSPEC_DENUM CBType : unsigned int { cbGENERAL, cbRESERVED1, cbRESERVED2, cbINPUTREQ, cbRESERVED4, cbRESERVED5, cbBATCHRESULT, cbRESERVED7, cbRESTRUCTURE, cbRESERVED9, cbRESERVED10, cbRESERVED11, cbRESERVED12, cbRESERVED13, cbRESERVED14, cbRESERVED15, cbRESERVED16, cbRESERVED17, cbTABLECHANGED, cbRESERVED19, cbCANCELQRY, cbSERVERCALL, cbRESERVED22, cbGENPROGRESS, cbDBASELOGIN, cbDELAYEDUPD, cbFIELDRECALC, cbTRACE, cbDBLOGIN, cbDETACHNOTIFY, cbNBROFCBS };

typedef CBType *pCBType;

enum DECLSPEC_DENUM CBRType : unsigned int { cbrUSEDEF, cbrCONTINUE, cbrABORT, cbrCHKINPUT, cbrYES, cbrNO, cbrPARTIALASSIST, cbrSKIP, cbrRETRY };

enum DECLSPEC_DENUM TKeyIndex : unsigned int { kiLookup, kiRangeStart, kiRangeEnd, kiCurRangeStart, kiCurRangeEnd, kiSave };

//-- var, const, procedure ---------------------------------------------------
}	/* namespace Dbcommontypes */
}	/* namespace Data */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA_DBCOMMONTYPES)
using namespace Data::Dbcommontypes;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_DATA)
using namespace Data;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Data_DbcommontypesHPP
