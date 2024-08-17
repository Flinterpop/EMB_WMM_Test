// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'FireDAC.Stan.Consts.pas' rev: 35.00 (Windows)

#ifndef Firedac_Stan_ConstsHPP
#define Firedac_Stan_ConstsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>

//-- user supplied -----------------------------------------------------------

namespace Firedac
{
namespace Stan
{
namespace Consts
{
//-- forward type declarations -----------------------------------------------
//-- type declarations -------------------------------------------------------
typedef System::StaticArray<System::UnicodeString, 2> Firedac_Stan_Consts__1;

//-- var, const, procedure ---------------------------------------------------
#define C_FD_Version L"28.0.0 (Build 106147)"
#define C_FD_Copyright L"\u00a9 2021 Embarcadero Technologies, Inc."
#define C_FD_Product L"FireDAC"
#define C_FD_ProductFull L"Embarcadero\u00ae FireDAC"
#define C_FD_ToolName L"RAD Studio 11.0"
#define C_FD_WinEOL L"\r\n"
static const System::WideChar C_FD_PosixEOL = (System::WideChar)(0xa);
#define C_FD_EOL L"\r\n"
static const System::WideChar C_FD_PathDelim = (System::WideChar)(0x5c);
#define C_FD_DLLExt L".dll"
#define C_FD_DLLFolder L"bin"
static const System::Word C_FD_WM_Base = System::Word(0x7e8);
static const System::Int8 C_FD_GUIDStrLen = System::Int8(0x26);
static const System::Byte C_FD_MaxNameLen = System::Byte(0x80);
static const System::Int8 C_FD_StorageVer = System::Int8(0xf);
static const System::Int8 C_FD_StorageVer112 = System::Int8(0x10);
#define S_FD_LStan L"Stan"
#define S_FD_LStan_PEval L"Eval"
#define S_FD_LStan_PDef L"Def"
#define S_FD_LGUIx L"GUIx"
#define S_FD_LGUIx_PForms L"Forms"
#define S_FD_LGUIx_PSrvc L"Services"
#define S_FD_LMoni L"Moni"
#define S_FD_LMoni_PRemote L"Remote"
#define S_FD_LMoni_PFF L"FlatFile"
#define S_FD_LDatS L"DatS"
#define S_FD_LPhys L"Phys"
#define S_FD_LDApt L"DApt"
#define S_FD_LComp L"Comp"
#define S_FD_LComp_PClnt L"Clnt"
#define S_FD_LComp_PDS L"DS"
#define S_FD_LComp_PDM L"DM"
#define S_FD_LComp_PScr L"Script"
#define S_FD_LComp_Design L"Design"
#define S_FD_TDBXId L"TDBX"
#define S_FD_ODBCId L"ODBC"
#define S_FD_MSSQLId L"MSSQL"
#define S_FD_MSAccId L"MSAcc"
#define S_FD_DB2Id L"DB2"
#define S_FD_MySQLId L"MySQL"
#define S_FD_OraId L"Ora"
#define S_FD_ASAId L"ASA"
#define S_FD_ADSId L"ADS"
#define S_FD_IBId L"IB"
#define S_FD_IBLiteId L"IBLite"
#define S_FD_FBId L"FB"
#define S_FD_PGId L"PG"
#define S_FD_SQLiteId L"SQLite"
#define S_FD_NexusId L"Nexus"
#define S_FD_DSId L"DS"
#define S_FD_InfxId L"Infx"
#define S_FD_TDataId L"TData"
#define S_FD_MongoId L"Mongo"
#define S_FD_MSSQL_RDBMS L"MSSQL"
#define S_FD_MSAcc_RDBMS L"MSAccess"
#define S_FD_DB2_RDBMS L"DB2"
#define S_FD_MySQL_RDBMS L"MySQL"
#define S_FD_Ora_RDBMS L"Oracle"
#define S_FD_ASA_RDBMS L"SQLAnywhere"
#define S_FD_ADS_RDBMS L"Advantage"
#define S_FD_IB_RDBMS L"InterBase"
#define S_FD_FB_RDBMS L"Firebird"
#define S_FD_PG_RDBMS L"PostgreSQL"
#define S_FD_SQLite_RDBMS L"SQLite"
#define S_FD_Nexus_RDBMS L"NexusDB"
#define S_FD_DS_RDBMS L"DataSnap"
#define S_FD_Infx_RDBMS L"Informix"
#define S_FD_TData_RDBMS L"Teradata"
#define S_FD_Mongo_NoSQL L"MongoDB"
#define S_FD_Other_RDBMS L"Other"
#define S_FD_DefinitionParam_Common_Name L"Name"
#define S_FD_DefinitionParam_Common_Parent L"Parent"
#define S_FD_DefinitionParam_Common_ConnectionDef L"ConnectionDef"
#define C_FD_DrvBaseId L"BaseDriverID"
#define S_FD_DrvVendorLib L"VendorLib"
#define S_FD_DrvVendorHome L"VendorHome"
#define S_FD_Win32 L"Win32"
#define S_FD_Win64 L"Win64"
#define S_FD_OSX32 L"OSX32"
#define S_FD_OSX64 L"OSX64"
#define S_FD_UIX32 L"UIX32"
#define S_FD_UIX64 L"UIX64"
#define S_FD_ANDROID L"ANDROID"
#define S_FD_MoniFlatFile L"FlatFile"
#define S_FD_MoniRemote L"Remote"
#define S_FD_MoniCustom L"Custom"
#define S_FD_ConnParam_Common_DriverID L"DriverID"
#define S_FD_ConnParam_Common_Database L"Database"
#define S_FD_ConnParam_Common_Server L"Server"
#define S_FD_ConnParam_Common_Port L"Port"
#define S_FD_ConnParam_Common_UserName L"User_Name"
#define S_FD_ConnParam_Common_BDEStyleUserName L"User name"
#define S_FD_ConnParam_Common_Password L"Password"
#define S_FD_ConnParam_Common_NewPassword L"NewPassword"
#define S_FD_ConnParam_Common_OSAuthent L"OSAuthent"
#define S_FD_ConnParam_Common_Pooled L"Pooled"
#define S_FD_ConnParam_Common_Pool_CleanupTimeout L"POOL_CleanupTimeout"
#define S_FD_ConnParam_Common_Pool_ExpireTimeout L"POOL_ExpireTimeout"
#define S_FD_ConnParam_Common_Pool_MaximumItems L"POOL_MaximumItems"
#define S_FD_ConnParam_Common_MetaDefSchema L"MetaDefSchema"
#define S_FD_ConnParam_Common_MetaDefCatalog L"MetaDefCatalog"
#define S_FD_ConnParam_Common_MetaCurSchema L"MetaCurSchema"
#define S_FD_ConnParam_Common_MetaCurCatalog L"MetaCurCatalog"
#define S_FD_ConnParam_Common_MetaCaseIns L"MetaCaseIns"
#define S_FD_ConnParam_Common_RDBMS L"RDBMS"
#define S_FD_ConnParam_Common_MonitorBy L"MonitorBy"
#define S_FD_ConnParam_Common_LoginTimeout L"LoginTimeout"
#define S_FD_ConnParam_Common_CharacterSet L"CharacterSet"
#define S_FD_ConnParam_Common_GUIDEndian L"GUIDEndian"
#define S_FD_Little L"Little"
#define S_FD_Big L"Big"
#define S_FD_ConnParam_Common_ExtendedMetadata L"ExtendedMetadata"
#define S_FD_ConnParam_Common_ApplicationName L"ApplicationName"
#define S_FD_ConnParam_MySQL_Compress L"Compress"
#define S_FD_ConnParam_MySQL_UseSSL L"UseSSL"
#define S_FD_ConnParam_MySQL_SSL_key L"SSL_key"
#define S_FD_ConnParam_MySQL_SSL_cert L"SSL_cert"
#define S_FD_ConnParam_MySQL_SSL_ca L"SSL_ca"
#define S_FD_ConnParam_MySQL_SSL_capath L"SSL_capath"
#define S_FD_ConnParam_MySQL_SSL_cipher L"SSL_cipher"
#define S_FD_ConnParam_MySQL_ResultMode L"ResultMode"
#define S_FD_ConnParam_MySQL_TinyIntFormat L"TinyIntFormat"
#define S_FD_ConnParam_MySQL_EmbeddedArgs L"EmbeddedArgs"
#define S_FD_ConnParam_MySQL_EmbeddedGroups L"EmbeddedGroups"
#define S_FD_ConnParam_MySQL_ReadTimeout L"ReadTimeout"
#define S_FD_ConnParam_MySQL_WriteTimeout L"WriteTimeout"
#define S_FD_ConnParam_ODBC_ODBCAdvanced L"ODBCAdvanced"
#define S_FD_ConnParam_ODBC_ODBCDriver L"ODBCDriver"
#define S_FD_ConnParam_ODBC_DataSource L"DataSource"
#define S_FD_ConnParam_ODBC_DSN L"DSN"
#define S_FD_ConnParam_ODBC_NumericFormat L"NumericFormat"
#define S_FD_ConnParam_ODBC_ODBCVersion L"ODBCVersion"
#define S_FD_ConnParam_MSSQL_Network L"Network"
#define S_FD_ConnParam_MSSQL_Address L"Address"
#define S_FD_ConnParam_MSSQL_MARS L"MARS"
#define S_FD_ConnParam_MSSQL_Workstation L"Workstation"
#define S_FD_ConnParam_MSSQL_Language L"Language"
#define S_FD_ConnParam_MSSQL_Encrypt L"Encrypt"
#define S_FD_ConnParam_MSSQL_VariantFormat L"VariantFormat"
#define S_FD_ConnParam_MSSQL_MetaCaseInsCat L"MetaCaseInsCat"
#define S_FD_EventKind_MSSQL_Events L"QueryNotifies"
#define S_FD_ConnParam_MSAcc_SystemDB L"SystemDB"
#define S_FD_ConnParam_MSAcc_ReadOnly L"ReadOnly"
#define S_FD_ConnParam_MSAcc_StringFormat L"StringFormat"
#define S_FD_Choose L"Choose"
#define S_FD_Unicode L"Unicode"
#define S_FD_ANSI L"ANSI"
#define S_FD_ConnParam_MSSQL_StringFormat L"StringFormat"
#define S_FD_ConnParam_ASA_ToolHome L"ToolHome"
#define S_FD_ConnParam_ASA_ToolLib L"ToolLib"
#define S_FD_ConnParam_ASA_DatabaseFile L"DatabaseFile"
#define S_FD_ConnParam_ASA_Compress L"Compress"
#define S_FD_ConnParam_ASA_Encrypt L"Encrypt"
#define S_FD_EventKind_ASA_Events L"Message"
#define S_FD_ConnParam_ADS_DateFormat L"DateFormat"
#define S_FD_ConnParam_ADS_Decimals L"Decimals"
#define S_FD_ConnParam_ADS_DefaultPath L"DefaultPath"
#define S_FD_ConnParam_ADS_SearchPath L"SearchPath"
#define S_FD_ConnParam_ADS_ShowDeleted L"ShowDeleted"
#define S_FD_ConnParam_ADS_Epoch L"Epoch"
#define S_FD_ConnParam_ADS_Exact L"Exact"
#define S_FD_ConnParam_ADS_Alias L"Alias"
#define S_FD_ConnParam_ADS_Protocol L"Protocol"
#define S_FD_ConnParam_ADS_Compress L"Compress"
#define S_FD_ConnParam_ADS_ServerTypes L"ServerTypes"
#define S_FD_ConnParam_ADS_Locking L"Locking"
#define S_FD_ConnParam_ADS_TableType L"TableType"
#define S_FD_ConnParam_ADS_TablePassword L"TablePassword"
#define S_FD_ConnParam_ADS_ADSAdvanced L"ADSAdvanced"
#define S_FD_EventKind_ADS_Events L"Events"
#define S_FD_ConnParam_Oracle_AuthMode L"AuthMode"
#define S_FD_ConnParam_Oracle_BooleanFormat L"BooleanFormat"
#define S_FD_ConnParam_Oracle_NCharReplacement L"NCharReplacement"
#define S_FD_ConnParam_Oracle_OracleAdvanced L"OracleAdvanced"
#define S_FD_ConnParam_Oracle_NLS_LANG L"NLSLang"
#define S_FD_ConnParam_Oracle_TNS_ADMIN L"TNSAdmin"
#define S_FD_ConnParam_Oracle_Threaded L"Threaded"
#define S_FD_ConnParam_Oracle_ReadTimeout L"ReadTimeout"
#define S_FD_ConnParam_Oracle_WriteTimeout L"WriteTimeout"
#define S_FD_EventKind_Oracle_DBMS_ALERT L"DBMS_ALERT"
#define S_FD_EventKind_Oracle_DBMS_PIPE L"DBMS_PIPE"
#define S_FD_EventKind_Oracle_CQN L"QueryNotifies"
#define S_FD_ConnParam_IB_Protocol L"Protocol"
#define S_FD_ConnParam_IB_RoleName L"RoleName"
#define S_FD_ConnParam_IB_SQLDialect L"SQLDialect"
#define S_FD_ConnParam_IB_OpenMode L"OpenMode"
#define S_FD_ConnParam_IB_DropDatabase L"DropDatabase"
#define S_FD_ConnParam_IB_PageSize L"PageSize"
#define S_FD_ConnParam_IB_IBAdvanced L"IBAdvanced"
#define S_FD_ConnParam_IB_ThreadSafe L"ThreadSafe"
#define S_FD_ConnParam_IB_Lite L"Lite"
#define S_FD_ConnParam_IB_InstanceName L"InstanceName"
#define S_FD_ConnParam_IB_SEPassword L"SEPassword"
#define S_FD_ConnParam_FB_Embedded L"Embedded"
#define S_FD_ConnParam_FB_CharLenMode L"CharLenMode"
#define S_FD_EventKind_IB_Events L"Events"
#define S_FD_ConnParam_DB2_Alias L"Alias"
#define S_FD_ConnParam_DB2_Protocol L"Protocol"
#define S_FD_ConnParam_DB2_StringFormat L"StringFormat"
#define S_FD_ConnParam_DB2_TxSupported L"TxSupported"
#define S_FD_EventKind_DB2_DBMS_ALERT L"DBMS_ALERT"
#define S_FD_EventKind_DB2_DBMS_PIPE L"DBMS_PIPE"
#define S_FD_ConnParam_PG_OidAsBlob L"OidAsBlob"
#define S_FD_ConnParam_PG_UnknownFormat L"UnknownFormat"
#define S_FD_ConnParam_PG_ArrayScanSample L"ArrayScanSample"
#define S_FD_ConnParam_PG_FastFetchMode L"FastFetchMode"
#define S_FD_ConnParam_PG_PGAdvanced L"PGAdvanced"
#define S_FD_EventKind_PG_Events L"Notifies"
#define S_FD_ConnParam_SQLite_EngineLinkage L"EngineLinkage"
#define S_FD_ConnParam_SQLite_SEEKey L"SEEKey"
#define S_FD_ConnParam_SQLite_SharedCache L"SharedCache"
#define S_FD_ConnParam_SQLite_OpenMode L"OpenMode"
#define S_FD_ConnParam_SQLite_Encrypt L"Encrypt"
#define S_FD_ConnParam_SQLite_BusyTimeout L"BusyTimeout"
#define S_FD_ConnParam_SQLite_CacheSize L"CacheSize"
#define S_FD_ConnParam_SQLite_LockingMode L"LockingMode"
#define S_FD_ConnParam_SQLite_Synchronous L"Synchronous"
#define S_FD_ConnParam_SQLite_JournalMode L"JournalMode"
#define S_FD_ConnParam_SQLite_ForeignKeys L"ForeignKeys"
#define S_FD_ConnParam_SQLite_StringFormat L"StringFormat"
#define S_FD_ConnParam_SQLite_GUIDFormat L"GUIDFormat"
#define S_FD_ConnParam_SQLite_DateTimeFormat L"DateTimeFormat"
#define S_FD_ConnParam_SQLite_Extensions L"Extensions"
#define S_FD_ConnParam_SQLite_SQLiteAdvanced L"SQLiteAdvanced"
#define S_FD_EventKind_SQLite_Events L"Events"
#define S_FD_ConnParam_Nexus_Protocol L"Protocol"
#define S_FD_ConnParam_Nexus_OpenMode L"OpenMode"
#define S_FD_ConnParam_Nexus_ShareMode L"ShareMode"
#define S_FD_ConnParam_TDBX_DBXAdvanced L"DBXAdvanced"
#define S_FD_ConnParam_DS_Protocol L"Protocol"
#define S_FD_EventKind_DS_Events L"Callbacks"
#define S_FD_ConnParam_Infx_DBCharacterSet L"DBCharacterSet"
#define S_FD_ConnParam_Infx_StringFormat L"StringFormat"
#define S_FD_ConnParam_Infx_ReadTimeout L"ReadTimeout"
#define S_FD_ConnParam_Infx_WriteTimeout L"WriteTimeout"
#define S_FD_ConnParam_Infx_TxSupported L"TxSupported"
#define S_FD_ConnParam_Infx_TxRetainLocks L"TxRetainLocks"
#define S_FD_ConnParam_Infx_TxLastCommitted L"TxLastCommitted"
#define S_FD_EventKind_Infx_DBMS_ALERT L"DBMS_ALERT"
#define S_FD_ConnParam_TData_Encrypt L"Encrypt"
#define S_FD_ConnParam_TData_SessionMode L"SessionMode"
#define S_FD_ConnParam_Mongo_UseSSL L"UseSSL"
#define S_FD_ConnParam_Mongo_SSL_PEMFile L"SSL_PEMFile"
#define S_FD_ConnParam_Mongo_SSL_PEMPassword L"SSL_PEMPassword"
#define S_FD_ConnParam_Mongo_SSL_CAFile L"SSL_CAFile"
#define S_FD_ConnParam_Mongo_SSL_WeakValidation L"SSL_WeakValidation"
#define S_FD_ConnParam_Mongo_SSL_AllowInvHost L"SSL_AllowInvHost"
#define S_FD_ConnParam_Mongo_ReadTimeout L"ReadTimeout"
#define S_FD_ConnParam_Mongo_MoreHosts L"MoreHosts"
#define S_FD_ConnParam_Mongo_TimeZone L"TimeZone"
#define S_FD_ConnParam_Mongo_MongoAdvanced L"MongoAdvanced"
#define S_FD_EventKind_Mongo_Tail L"Tail"
static const System::Word C_FD_WM_ASYNC_DONE = System::Word(0x7e9);
static const System::Word C_FD_WM_MoniMainFrmRunning = System::Word(0x7f2);
static const System::Word C_FD_PoolCleanupTimeout = System::Word(0x7530);
static const int C_FD_PoolExpireTimeout = int(0x15f90);
static const System::Word C_FD_PoolCloseTimeout = System::Word(0x2710);
static const System::Int8 C_FD_PoolMaximumItems = System::Int8(0x32);
static const System::Int8 C_FD_HideCursorDelay = System::Int8(0x32);
static const System::Byte C_FD_DelayBeforeFWait = System::Byte(0xc8);
static const System::Word C_FD_ThreadStartupTimeout = System::Word(0x3e8);
static const System::Word C_FD_ThreadIdleTimeout = System::Word(0x3e8);
static const System::Word C_FD_PhysManagerShutdownTimeout = System::Word(0x2710);
static const System::Word C_FD_PhysConnRetryDelay = System::Word(0xbb8);
static const System::Int8 C_FD_PhysConnRetryCount = System::Int8(0x3);
#define S_FD_Main L""
#define S_FD_CfgKeyName L"\\Software\\Embarcadero\\FireDAC"
#define S_FD_DefCfgFileName L"FDConnectionDefs.ini"
#define S_FD_DefDrvFileName L"FDDrivers.ini"
#define S_FD_CfgValName L"ConnectionDefFile"
#define S_FD_DrvValName L"DriverFile"
#define S_FD_MoniValName L"MonitorPath"
#define S_FD_ExplValName L"ExplorerPath"
#define S_FD_ExecValName L"ExecutorPath"
#define S_FD_HelpValName L"HelpPath"
#define S_FD_Profiles L"Profiles"
#define S_FD_Drivers L"Drivers"
#define S_FD_DesignTime L"DesignTime"
#define S_FD_DTCatalog L"Catalog"
#define S_FD_DTSchema L"Schema"
#define S_FD_DTScope L"Scope"
#define S_FD_DTTableKinds L"TableKinds"
#define S_FD_DTFullName L"FullName"
#define S_FD_DTTracing L"Tracing"
#define S_FD_DTDCFieldsEditor L"DCFieldsEditor"
#define S_FD_DTMask L"Mask"
#define S_FD_True L"True"
#define S_FD_False L"False"
#define S_FD_Yes L"Yes"
#define S_FD_No L"No"
extern DELPHI_PACKAGE Firedac_Stan_Consts__1 S_FD_Bools;
#define S_FD_Local L"<LOCAL>"
#define S_FD_DisableSynEdit L"DisableSynEdit"
#define C_FD_GUIxFormsProvider L"Forms"
#define C_FD_GUIxConsoleProvider L"Console"
#define C_FD_GUIxFMXProvider L"FMX"
#define C_FD_SysNamePrefix L"_FD_"
#define C_FD_SysSavepointPrefix L"SP_"
#define C_FD_SysColumnPrefix L"FD__"
static const System::Int8 C_FD_MaxAggsPerView = System::Int8(0x40);
static const System::Int8 C_FD_CrsPctClose = System::Int8(0x50);
#define S_FD_Pi L"3.141592653589"
#ifndef _WIN64
static const System::Extended C_FD_Pi = 3.141593E+00;
#else /* _WIN64 */
static const double C_FD_Pi = 3.141593E+00;
#endif /* _WIN64 */
static const System::Int8 C_FD_CmdGenRight = System::Int8(0x3c);
static const System::WideChar C_FD_CmdGenAlias = (System::WideChar)(0x41);
#define C_FD_CmdGenWindow L"FD__WN_"
#define C_FD_CmdGenRangeStart L"FD__RS_"
#define C_FD_CmdGenRangeFinish L"FD__RF_"
#define C_FD_CmdGenLocate L"FD__LC_"
static const int cvOracle80000 = int(0x2faf0800);
static const int cvOracle80300 = int(0x2faf7d30);
static const int cvOracle80400 = int(0x2fafa440);
static const int cvOracle80500 = int(0x2fafcb50);
static const int cvOracle80501 = int(0x2fafcb51);
static const int cvOracle81000 = int(0x2fbe4a40);
static const int cvOracle81500 = int(0x2fbf0d90);
static const int cvOracle81600 = int(0x2fbf34a0);
static const int cvOracle90000 = int(0x35a51075);
static const int cvOracle92000 = int(0x35c36d80);
static const int cvOracle100000 = int(0x3b9aca00);
static const int cvOracle102000 = int(0x3bb94e80);
static const int cvOracle110000 = int(0x4190ab00);
static const int cvOracle111000 = int(0x419fed40);
static const int cvOracle112000 = int(0x41af2f80);
static const int cvOracle120000 = int(0x47868c00);
static const int cvOracle121000 = int(0x4795ce40);
static const int cvOracle122000 = int(0x47a51080);
static const int cvOracle180000 = int(0x6b49d200);
static const int cvOracle190000 = int(0x713fb300);
static const int mvMySQL032000 = int(0x1312d000);
static const int mvMySQL032300 = int(0x134096c0);
static const int mvMySQL032306 = int(0x13418120);
static const int mvMySQL032314 = int(0x1342b9a0);
static const int mvMySQL032321 = int(0x1343cb10);
static const int mvMySQL040000 = int(0x17d78400);
static const int mvMySQL040002 = int(0x17d7d220);
static const int mvMySQL040018 = int(0x17da4320);
static const int mvMySQL040100 = int(0x17e6c640);
static const int mvMySQL040101 = int(0x17e6ed50);
static const int mvMySQL041000 = int(0x18701a80);
static const int mvMySQL041100 = int(0x187f5cc0);
static const int mvMySQL050000 = int(0x1dcd6500);
static const int mvMySQL050002 = int(0x1dcdb320);
static const int mvMySQL050006 = int(0x1dce4f60);
static const int mvMySQL050007 = int(0x1dce7670);
static const int mvMySQL050010 = int(0x1dceeba0);
static const int mvMySQL050023 = int(0x1dd0e770);
static const int mvMySQL050060 = int(0x1dd68cc0);
static const int mvMySQL050100 = int(0x1ddca740);
static const int mvMySQL050134 = int(0x1de1d760);
static const int mvMySQL050200 = int(0x1debe980);
static const int mvMySQL050500 = int(0x1e19b040);
static const int mvMySQL050503 = int(0x1e1a2570);
static const int mvMySQL050600 = int(0x1e28f280);
static const int mvMySQL050700 = int(0x1e3834c0);
static const int mvMySQL060000 = int(0x23c34600);
static const int mvMySQL080000 = int(0x2faf0800);
static const int mvMariaDB100300 = int(0x3bc890c0);
static const int svMSSQL6 = int(0x23c34600);
static const int svMSSQL7 = int(0x29b92700);
static const int svMSSQL2000 = int(0x2faf0800);
static const int svMSSQL2005 = int(0x35a4e900);
static const int svMSSQL2008 = int(0x3b9aca00);
static const int svMSSQL2012 = int(0x4190ab00);
static const int svMSSQL2014 = int(0x47868c00);
static const int svMSSQL2016 = int(0x4d7c6d00);
static const int cvSybaseASA6 = int(0x23c34600);
static const int cvSybaseASA8 = int(0x2faf0800);
static const int cvSybaseASA9 = int(0x35a4e900);
static const int cvSybaseASA10 = int(0x3b9aca00);
static const int cvSybaseASA11 = int(0x4190ab00);
static const int cvSybaseASA12 = int(0x47868c00);
static const int cvSybaseASA16 = int(0x5f5e1000);
static const int svSQLite030000 = int(0x11e1a300);
static const int svSQLite030202 = int(0x120075a0);
static const int svSQLite030304 = int(0x12100600);
static const int svSQLite030313 = int(0x12116590);
static const int svSQLite030400 = int(0x121eac00);
static const int svSQLite030401 = int(0x121ed310);
static const int svSQLite030500 = int(0x122dee40);
static const int svSQLite030508 = int(0x122f26c0);
static const int svSQLite030600 = int(0x123d3080);
static const int svSQLite030601 = int(0x123d5790);
static const int svSQLite030604 = int(0x123dccc0);
static const int svSQLite030605 = int(0x123df3d0);
static const int svSQLite030608 = int(0x123e6900);
static const int svSQLite030611 = int(0x123ede30);
static const int svSQLite030619 = int(0x124016b0);
static const int svSQLite030623 = int(0x1240b2f0);
static const int svSQLite030700 = int(0x124c72c0);
static const int svSQLite030703 = int(0x124ce7f0);
static const int svSQLite030707 = int(0x124d8430);
static const int svSQLite030711 = int(0x124e2070);
static const int svSQLite030715 = int(0x124ebcb0);
static const int svSQLite030803 = int(0x125c2a30);
static const int svSQLite030807 = int(0x125cc670);
static const int svSQLite030809 = int(0x125d1490);
static const int svSQLite033200 = int(0x13c9eb00);
static const int svPGSQL070300 = int(0x29e6edc0);
static const int svPGSQL080100 = int(0x2fbe4a40);
static const int svPGSQL080200 = int(0x2fcd8c80);
static const int svPGSQL080300 = int(0x2fdccec0);
static const int svPGSQL080400 = int(0x2fec1100);
static const int svPGSQL090000 = int(0x35a4e900);
static const int svPGSQL090100 = int(0x35b42b40);
static const int svPGSQL090500 = int(0x35f13440);
static const int svPGSQL100000 = int(0x3b9aca00);
static const int svPGSQL110000 = int(0x4190ab00);
static const int ivFB010002 = int(0x5f62f20);
static const int ivFB010003 = int(0x5f65630);
static const int ivFB010500 = int(0x6422c40);
static const int ivFB020000 = int(0xbebc200);
static const int ivFB020100 = int(0xbfb0440);
static const int ivFB020500 = int(0xc380d40);
static const int ivFB030000 = int(0x11e1a300);
static const int ivFB040000 = int(0x17d78400);
static const int ivIB060500 = int(0x240f9140);
static const int ivIB070000 = int(0x29b92700);
static const int ivIB070100 = int(0x29c86940);
static const int ivIB070500 = int(0x2a057240);
static const int ivIB080000 = int(0x2faf0800);
static const int ivIB090000 = int(0x35a4e900);
static const int ivIB100000 = int(0x3b9aca00);
static const int ivIB110000 = int(0x4190ab00);
static const int ivIB120000 = int(0x47868c00);
static const int ivIB120100 = int(0x4795ce40);
static const int ivIB130000 = int(0x4d7c6d00);
static const int ivYF080607 = int(0x300ba6f0);
static const int ovODBC2 = int(0xbebc200);
static const int ovODBC3 = int(0x11e1a300);
static const int ovODBC38 = int(0x16a65700);
static const int caADS8 = int(0x2faf0800);
static const int caADS9 = int(0x35a4e900);
static const int caADS10 = int(0x3b9aca00);
static const int caADS12 = int(0x47868c00);
static const int ivInfx1110 = int(0x42294180);
static const int tvTData1300 = int(0x4d7c6d00);
static const int tvTData1400 = int(0x53724e00);
static const int tvTData1410 = int(0x540ae480);
static const int avDB2_400_7 = int(0x29b92700);
static const int mvMongo030600 = int(0x123d3080);
static const System::Int8 C_FD_DefLongSize = System::Int8(0x0);
static const System::Word C_FD_MaxPLSQLDataSize = System::Word(0x7fff);
static const System::Byte C_FD_DefStrSize = System::Byte(0xff);
static const System::Int8 C_FD_DefNumericSize = System::Int8(0x1e);
static const System::Byte C_FD_MaxFixedSize = System::Byte(0x86);
static const System::Word C_FD_DefInlineDataSize = System::Word(0x3e8);
static const int C_FD_DefPieceBuffLen = int(0x40000);
static const System::Int8 C_FD_DefRowSetSize = System::Int8(0x32);
static const System::Word C_FD_DefMaxStrSize = System::Word(0x7fff);
static const System::Int8 C_FD_DefMapPrec = System::Int8(-1);
static const System::Int8 C_FD_DefMapScale = System::Int8(-1);
static const unsigned C_FD_DefMapSize = unsigned(0xffffffff);
static const System::Int8 er_FD_DuplicatedName = System::Int8(0x1);
static const System::Int8 er_FD_NameNotFound = System::Int8(0x2);
static const System::Int8 er_FD_ColTypeUndefined = System::Int8(0x3);
static const System::Int8 er_FD_NoColsDefined = System::Int8(0x4);
static const System::Int8 er_FD_CheckViolated = System::Int8(0x5);
static const System::Int8 er_FD_CantBeginEdit = System::Int8(0x6);
static const System::Int8 er_FD_CantCreateChildView = System::Int8(0x7);
static const System::Int8 er_FD_RowCantBeDeleted = System::Int8(0x8);
static const System::Int8 er_FD_ColMBBlob = System::Int8(0x9);
static const System::Int8 er_FD_FixedLenDataMismatch = System::Int8(0xa);
static const System::Int8 er_FD_RowNotInEditableState = System::Int8(0xb);
static const System::Int8 er_FD_ColIsReadOnly = System::Int8(0xc);
static const System::Int8 er_FD_RowCantBeInserted = System::Int8(0xd);
static const System::Int8 er_FD_RowColMBNotNull = System::Int8(0xe);
static const System::Int8 er_FD_DuplicateRows = System::Int8(0xf);
static const System::Int8 er_FD_NoMasterRow = System::Int8(0x10);
static const System::Int8 er_FD_HasChildRows = System::Int8(0x11);
static const System::Int8 er_FD_CantCompareRows = System::Int8(0x12);
static const System::Int8 er_FD_ConvIsNotSupported = System::Int8(0x13);
static const System::Int8 er_FD_ColIsNotSearchable = System::Int8(0x14);
static const System::Int8 er_FD_RowMayHaveSingleParent = System::Int8(0x15);
static const System::Int8 er_FD_CantOperateInvObj = System::Int8(0x16);
static const System::Int8 er_FD_CantSetParentRow = System::Int8(0x17);
static const System::Int8 er_FD_RowIsNotNested = System::Int8(0x18);
static const System::Int8 er_FD_ColumnIsNotRef = System::Int8(0x19);
static const System::Int8 er_FD_ColumnIsNotSetRef = System::Int8(0x1a);
static const System::Int8 er_FD_OperCNBPerfInState = System::Int8(0x1c);
static const System::Int8 er_FD_CantSetUpdReg = System::Int8(0x1d);
static const System::Int8 er_FD_TooManyAggs = System::Int8(0x1e);
static const System::Int8 er_FD_GrpLvlExceeds = System::Int8(0x1f);
static const System::Int8 er_FD_VarLenDataMismatch = System::Int8(0x20);
static const System::Int8 er_FD_BadForeignKey = System::Int8(0x21);
static const System::Int8 er_FD_BadUniqueKey = System::Int8(0x22);
static const System::Int8 er_FD_CantChngColType = System::Int8(0x23);
static const System::Int8 er_FD_BadRelation = System::Int8(0x24);
static const System::Int8 er_FD_CantCreateParentView = System::Int8(0x25);
static const System::Int8 er_FD_CantChangeTableStruct = System::Int8(0x26);
static const System::Int8 er_FD_FoundCascadeLoop = System::Int8(0x27);
static const System::Int8 er_FD_RecLocked = System::Int8(0x28);
static const System::Int8 er_FD_RecNotLocked = System::Int8(0x29);
static const System::Int8 er_FD_TypeIncompat = System::Int8(0x2a);
static const System::Int8 er_FD_ValueOutOfRange = System::Int8(0x2b);
static const System::Int8 er_FD_CantMerge = System::Int8(0x2c);
static const System::Int8 er_FD_ColumnDoesnotFound = System::Int8(0x64);
static const System::Int8 er_FD_ExprTermination = System::Int8(0x65);
static const System::Int8 er_FD_ExprMBAgg = System::Int8(0x66);
static const System::Int8 er_FD_ExprCantAgg = System::Int8(0x67);
static const System::Int8 er_FD_ExprTypeMis = System::Int8(0x68);
static const System::Int8 er_FD_ExprIncorrect = System::Int8(0x69);
static const System::Int8 er_FD_InvalidKeywordUse = System::Int8(0x6a);
static const System::Int8 er_FD_ExprInvalidChar = System::Int8(0x6b);
static const System::Int8 er_FD_ExprNameError = System::Int8(0x6c);
static const System::Int8 er_FD_ExprStringError = System::Int8(0x6d);
static const System::Int8 er_FD_ExprNoLParen = System::Int8(0x6e);
static const System::Int8 er_FD_ExprNoRParenOrComma = System::Int8(0x6f);
static const System::Int8 er_FD_ExprNoRParen = System::Int8(0x70);
static const System::Int8 er_FD_ExprEmptyInList = System::Int8(0x71);
static const System::Int8 er_FD_ExprExpected = System::Int8(0x72);
static const System::Int8 er_FD_ExprNoArith = System::Int8(0x73);
static const System::Int8 er_FD_ExprBadScope = System::Int8(0x74);
static const System::Int8 er_FD_ExprEmpty = System::Int8(0x75);
static const System::Int8 er_FD_ExprEvalError = System::Int8(0x76);
static const System::Byte er_FD_DSNoBookmark = System::Byte(0xc8);
static const System::Byte er_FD_DSViewNotSorted = System::Byte(0xc9);
static const System::Byte er_FD_DSNoAdapter = System::Byte(0xca);
static const System::Byte er_FD_DSNoNestedMasterSource = System::Byte(0xcb);
static const System::Byte er_FD_DSCircularDataLink = System::Byte(0xcc);
static const System::Byte er_FD_DSRefreshError = System::Byte(0xcd);
static const System::Byte er_FD_DSNoDataTable = System::Byte(0xce);
static const System::Byte er_FD_DSIndNotFound = System::Byte(0xcf);
static const System::Byte er_FD_DSAggNotFound = System::Byte(0xd0);
static const System::Byte er_FD_DSIndNotComplete = System::Byte(0xd1);
static const System::Byte er_FD_DSAggNotComplete = System::Byte(0xd2);
static const System::Byte er_FD_DSCantUnidir = System::Byte(0xd3);
static const System::Byte er_FD_DSIncompatBmkFields = System::Byte(0xd4);
static const System::Byte er_FD_DSCantEdit = System::Byte(0xd5);
static const System::Byte er_FD_DSCantInsert = System::Byte(0xd6);
static const System::Byte er_FD_DSCantDelete = System::Byte(0xd7);
static const System::Byte er_FD_DSFieldNotFound = System::Byte(0xd8);
static const System::Byte er_FD_DSCantOffline = System::Byte(0xd9);
static const System::Byte er_FD_DSCantOffCachedUpdates = System::Byte(0xda);
static const System::Byte er_FD_DefCircular = System::Byte(0xfa);
static const System::Byte er_FD_DefRO = System::Byte(0xfb);
static const System::Byte er_FD_DefCantMakePers = System::Byte(0xfc);
static const System::Byte er_FD_DefAlreadyLoaded = System::Byte(0xfd);
static const System::Byte er_FD_DefNotExists = System::Byte(0xfe);
static const System::Byte er_FD_DefDupName = System::Byte(0xff);
static const System::Word er_FD_AccSrvNotFound = System::Word(0x12c);
static const System::Word er_FD_AccCannotReleaseDrv = System::Word(0x12d);
static const System::Word er_FD_AccSrvMBConnected = System::Word(0x12e);
static const System::Word er_FD_AccCapabilityNotSup = System::Word(0x12f);
static const System::Word er_FD_AccTxMBActive = System::Word(0x130);
static const System::Word er_FD_AccCantChngCommandState = System::Word(0x131);
static const System::Word er_FD_AccCommandMBFilled = System::Word(0x132);
static const System::Word er_FD_AccEscapeEmptyName = System::Word(0x133);
static const System::Word er_FD_AccCmdMHRowSet = System::Word(0x134);
static const System::Word er_FD_AccCmdMBPrepared = System::Word(0x135);
static const System::Word er_FD_AccCantExecCmdWithRowSet = System::Word(0x136);
static const System::Word er_FD_AccCmdMBOpen4Fetch = System::Word(0x137);
static const System::Word er_FD_AccExactMismatch = System::Word(0x138);
static const System::Word er_FD_AccMetaInfoMismatch = System::Word(0x139);
static const System::Word er_FD_AccCantLoadLibrary = System::Word(0x13a);
static const System::Word er_FD_AccCantGetLibraryEntry = System::Word(0x13b);
static const System::Word er_FD_AccSrvMBDisConnected = System::Word(0x13c);
static const System::Word er_FD_AccToManyLogins = System::Word(0x13d);
static const System::Word er_FD_AccTxMBInActive = System::Word(0x13e);
static const System::Word er_FD_AccDrvMngrMB = System::Word(0x140);
static const System::Word er_FD_AccPrepMissed = System::Word(0x141);
static const System::Word er_FD_AccPrepTooLongIdent = System::Word(0x143);
static const System::Word er_FD_AccParamArrayMismatch = System::Word(0x145);
static const System::Word er_FD_AccAsyncOperInProgress = System::Word(0x146);
static const System::Word er_FD_AccEscapeIsnotSupported = System::Word(0x147);
static const System::Word er_FD_AccMetaInfoReset = System::Word(0x148);
static const System::Word er_FD_AccWhereIsEmpty = System::Word(0x149);
static const System::Word er_FD_AccUpdateTabUndefined = System::Word(0x14a);
static const System::Word er_FD_AccNameHasErrors = System::Word(0x14b);
static const System::Word er_FD_AccEscapeBadSyntax = System::Word(0x14c);
static const System::Word er_FD_AccShutdownTO = System::Word(0x14e);
static const System::Word er_FD_AccParTypeUnknown = System::Word(0x14f);
static const System::Word er_FD_AccParDataMapNotSup = System::Word(0x150);
static const System::Word er_FD_AccParDefChanged = System::Word(0x152);
static const System::Word er_FD_AccMetaInfoNotDefined = System::Word(0x153);
static const System::Word er_FD_AccSrvNotDefined = System::Word(0x154);
static const System::Word er_FD_AccArrayExecError = System::Word(0x155);
static const System::Word er_FD_AccCantAssignTxIntf = System::Word(0x157);
static const System::Word er_FD_AccParSetChanged = System::Word(0x158);
static const System::Word er_FD_AccDataToLarge = System::Word(0x159);
static const System::Word er_FD_AccDbNotExists = System::Word(0x15a);
static const System::Word er_FD_AccClassNotRegistered = System::Word(0x15b);
static const System::Word er_FD_AccSysClassNotRegistered = System::Word(0x15c);
static const System::Word er_FD_AccUnrecognizedDbFormat = System::Word(0x15d);
static const System::Word er_FD_AccNotValidPassword = System::Word(0x15e);
static const System::Word er_FD_AccUnknownOleError = System::Word(0x15f);
static const System::Word er_FD_AccUnsupParamObjValue = System::Word(0x160);
static const System::Word er_FD_AccUnsupColumnType = System::Word(0x161);
static const System::Word er_FD_AccLongDataStream = System::Word(0x162);
static const System::Word er_FD_AccArrayDMLWithIntStr = System::Word(0x163);
static const System::Word er_FD_SvcLinkMBSet = System::Word(0x172);
static const System::Word er_FD_SvcMBActive = System::Word(0x173);
static const System::Word er_FD_SvcCannotUninstall = System::Word(0x174);
static const System::Word er_FD_DAptRecordIsDeleted = System::Word(0x190);
static const System::Word er_FD_DAptNoSelectCmd = System::Word(0x192);
static const System::Word er_FD_DAptRecordIsChanged = System::Word(0x193);
static const System::Word er_FD_DAptApplyUpdateFailed = System::Word(0x194);
static const System::Word er_FD_DAptCantEdit = System::Word(0x195);
static const System::Word er_FD_DAptCantInsert = System::Word(0x196);
static const System::Word er_FD_DAptCantDelete = System::Word(0x197);
static const System::Word er_FD_ClntSessMBSingle = System::Word(0x1f4);
static const System::Word er_FD_ClntSessMBInactive = System::Word(0x1f5);
static const System::Word er_FD_ClntSessMBActive = System::Word(0x1f6);
static const System::Word er_FD_ClntDbDupName = System::Word(0x1f7);
static const System::Word er_FD_ClntDbMBInactive = System::Word(0x1f8);
static const System::Word er_FD_ClntDbMBActive = System::Word(0x1f9);
static const System::Word er_FD_ClntDbLoginAborted = System::Word(0x1fa);
static const System::Word er_FD_ClntDbCantConnPooled = System::Word(0x1fb);
static const System::Word er_FD_ClntDBNotFound = System::Word(0x1fc);
static const System::Word er_FD_ClntAdaptMBActive = System::Word(0x1fd);
static const System::Word er_FD_ClntAdaptMBInactive = System::Word(0x1fe);
static const System::Word er_FD_ClntNotCachedUpdates = System::Word(0x1ff);
static const System::Word er_FD_ClntDbNotDefined = System::Word(0x200);
static const System::Word er_FD_ClntDbMBOnline = System::Word(0x201);
static const System::Word er_FD_ClntTxMBActive = System::Word(0x202);
static const System::Word er_FD_ClntCantShareAdapt = System::Word(0x203);
static const System::Word er_FD_ClntConnNotMatch = System::Word(0x204);
static const System::Word er_FD_ClntPKNotFound = System::Word(0x205);
static const System::Word er_FD_ClntLocalSQLMisuse = System::Word(0x206);
static const System::Word er_FD_ClntWrongIndex = System::Word(0x207);
static const System::Word er_FD_ClntDSNameEmpty = System::Word(0x208);
static const System::Word er_FD_ClntDSNameNotUnique = System::Word(0x209);
static const System::Word er_FD_ClntDataSetParamIncompat = System::Word(0x20a);
static const System::Word er_FD_DPNoTxtFld = System::Word(0x258);
static const System::Word er_FD_DPNoSrcDS = System::Word(0x259);
static const System::Word er_FD_DPNoDestDS = System::Word(0x25a);
static const System::Word er_FD_DPNoTxtDest = System::Word(0x25b);
static const System::Word er_FD_DPNoTxtSrc = System::Word(0x25c);
static const System::Word er_FD_DPBadFixedSize = System::Word(0x25d);
static const System::Word er_FD_DPTxtFldDup = System::Word(0x25e);
static const System::Word er_FD_DPBadTextFmt = System::Word(0x25f);
static const System::Word er_FD_DPSrcUndefined = System::Word(0x260);
static const System::Word er_FD_DPDestNoKeyFields = System::Word(0x261);
static const System::Word er_FD_DPNoSQLTab = System::Word(0x262);
static const System::Word er_FD_DPNoSQLBatch = System::Word(0x263);
static const System::Word er_FD_DPNoTxtFlds = System::Word(0x264);
static const System::Word er_FD_DPNoJsonDest = System::Word(0x265);
static const System::Word er_FD_DPNoJsonSrc = System::Word(0x266);
static const System::Word er_FD_DPNoJsonFld = System::Word(0x267);
static const System::Word er_FD_DPJsonFldDup = System::Word(0x268);
static const System::Word er_FD_DPMapUndefined = System::Word(0x269);
static const System::Word er_FD_StanTimeout = System::Word(0x2bc);
static const System::Word er_FD_StanCantGetBlob = System::Word(0x2bd);
static const System::Word er_FD_StanCantNonblocking = System::Word(0x2c1);
static const System::Word er_FD_StanMacroNotFound = System::Word(0x2c2);
static const System::Word er_FD_StanBadParRowIndex = System::Word(0x2c3);
static const System::Word er_FD_StanPoolTooManyItems = System::Word(0x2c4);
static const System::Word er_FD_StanStrgInvBinFmt = System::Word(0x2c6);
static const System::Word er_FD_StanStrgCantReadProp = System::Word(0x2c7);
static const System::Word er_FD_StanStrgCantReadObj = System::Word(0x2c8);
static const System::Word er_FD_StanStrgCantReadCDATA = System::Word(0x2c9);
static const System::Word er_FD_StanStrgDictOverflow = System::Word(0x2ca);
static const System::Word er_FD_StanStrgClassUnknown = System::Word(0x2cb);
static const System::Word er_FD_StanStrgUnknownFmt = System::Word(0x2cc);
static const System::Word er_FD_StanStrgFileError = System::Word(0x2cd);
static const System::Word er_FD_StanStrgInvDIntFmt = System::Word(0x2ce);
static const System::Word er_FD_StanStrgInvJSONFmt = System::Word(0x2cf);
static const System::Word er_FD_ScrCantExecHostCmd = System::Word(0x320);
static const System::Word er_FD_ScrStrSize1 = System::Word(0x321);
static const System::Word er_FD_ScrStrNotAlphaNum = System::Word(0x322);
static const System::Word er_FD_ScrSetArgInvalid = System::Word(0x323);
static const System::Word er_FD_ScrInvalidSyntax = System::Word(0x324);
static const System::Word er_FD_ScrAccMustSpecVar = System::Word(0x325);
static const System::Word er_FD_ScrDefReqValue = System::Word(0x326);
static const System::Word er_FD_ScrVarMissedCloseBrace = System::Word(0x327);
static const System::Word er_FD_ScrVarUnsupType = System::Word(0x328);
static const System::Word er_FD_ScrNotLogged = System::Word(0x329);
static const System::Word er_FD_ScrNoCmds = System::Word(0x32a);
static const System::Word er_FD_ScrNoScript = System::Word(0x32b);
static const System::Word er_FD_DBXGeneral = System::Word(0x3e8);
static const System::Word er_FD_DBXParMBNotEmpty = System::Word(0x3e9);
static const System::Word er_FD_DBXNoDriverCfg = System::Word(0x3ea);
static const System::Word er_FD_MySQLGeneral = System::Word(0x44c);
static const System::Word er_FD_MySQLBadVersion = System::Word(0x44d);
static const System::Word er_FD_MySQLCantSetPort = System::Word(0x44e);
static const System::Word er_FD_MySQLBadParams = System::Word(0x44f);
static const System::Word er_FD_MySQLCantInitEmbeddedServer = System::Word(0x450);
static const System::Word er_FD_MySQLFieldDataTypeUnsup = System::Word(0x451);
static const System::Word er_FD_OdbcGeneral = System::Word(0x4b0);
static const System::Word er_FD_OdbcVarDataTypeUnsup = System::Word(0x4b1);
static const System::Word er_FD_OraGeneral = System::Word(0x514);
static const System::Word er_FD_OraCantSetCharset = System::Word(0x515);
static const System::Word er_FD_OraNoCursor = System::Word(0x519);
static const System::Word er_FD_OraCantAssFILE = System::Word(0x51b);
static const System::Word er_FD_OraNoCursorParams = System::Word(0x51c);
static const System::Word er_FD_OraNotInstalled = System::Word(0x51d);
static const System::Word er_FD_OraBadVersion = System::Word(0x51e);
static const System::Word er_FD_OraBadValueType = System::Word(0x523);
static const System::Word er_FD_OraBadVarType = System::Word(0x527);
static const System::Word er_FD_OraTooLongGTRID = System::Word(0x52b);
static const System::Word er_FD_OraTooLongBQUAL = System::Word(0x52c);
static const System::Word er_FD_OraTooLongTXName = System::Word(0x52d);
static const System::Word er_FD_OraDBTNManyClBraces = System::Word(0x52e);
static const System::Word er_FD_OraNotPLSQLObj = System::Word(0x52f);
static const System::Word er_FD_OraNotPackageProc = System::Word(0x531);
static const System::Word er_FD_OraBadTableType = System::Word(0x532);
static const System::Word er_FD_OraUnNamedRecParam = System::Word(0x533);
static const System::Word er_FD_OraCantConvNum = System::Word(0x534);
static const System::Word er_FD_OraPipeAlertToMany = System::Word(0x535);
static const System::Word er_FD_IBGeneral = System::Word(0x578);
static const System::Word er_FD_IBTraceIsActive = System::Word(0x579);
static const System::Word er_FD_PgGeneral = System::Word(0x5dc);
static const System::Word er_FD_PgProcNotFound = System::Word(0x5dd);
static const System::Word er_FD_PgMultiDimArrNotSup = System::Word(0x5de);
static const System::Word er_FD_PgUnsupArrValueTypeNotSup = System::Word(0x5df);
static const System::Word er_FD_PgArrIndexOutOfBound = System::Word(0x5e0);
static const System::Word er_FD_PgCannotDescribeType = System::Word(0x5e1);
static const System::Word er_FD_PgIsNotArray = System::Word(0x5e2);
static const System::Word er_FD_PgUnsupTextType = System::Word(0x5e3);
static const System::Word er_FD_PgProcCantResult = System::Word(0x5e4);
static const System::Word er_FD_SQLiteGeneral = System::Word(0x640);
static const System::Word er_FD_SQLiteInitFailed = System::Word(0x641);
static const System::Word er_FD_SQLiteAlgFailure = System::Word(0x642);
static const System::Word er_FD_SQLitePwdInvalid = System::Word(0x643);
static const System::Word er_FD_SQLiteDBUnencrypted = System::Word(0x644);
static const System::Word er_FD_SQLiteDBNotFound = System::Word(0x645);
static const System::Word er_FD_SQLiteLinkageNotSupported = System::Word(0x646);
static const System::Word er_FD_SQLiteVTabInvalidArgs = System::Word(0x672);
static const System::Word er_FD_SQLiteVTabDSNotFoundOrEmpty = System::Word(0x673);
static const System::Word er_FD_SQLiteVTabDSNotSupported = System::Word(0x674);
static const System::Word er_FD_SQLiteVTabDSSPNotFound = System::Word(0x675);
static const System::Word er_FD_SQLiteVTabDSDataModFailed = System::Word(0x676);
static const System::Word er_FD_SQLiteVTabDSRowidInvalid = System::Word(0x677);
static const System::Word er_FD_SQLiteVTabDSChangedOrFreed = System::Word(0x678);
static const System::Word er_FD_SQLiteVTabDSNoRowExists = System::Word(0x679);
static const System::Word er_FD_SQLiteVTabDSCursorInvalid = System::Word(0x67a);
static const System::Word er_FD_SQLiteVTabCannotAttach = System::Word(0x67b);
static const System::Word er_FD_SQLiteVTabDataSetBusy = System::Word(0x67c);
static const System::Word er_FD_ASAGeneral = System::Word(0x6a4);
static const System::Word er_FD_ASADBToolNotFound = System::Word(0x6a5);
static const System::Word er_FD_ADSGeneral = System::Word(0x708);
static const System::Word er_FD_NexusGeneral = System::Word(0x76c);
static const System::Word er_FD_MSSQLGeneral = System::Word(0x7d0);
static const System::Word er_FD_MSSQLFSNoTx = System::Word(0x7d1);
static const System::Word er_FD_MSSQLFSNoPath = System::Word(0x7d2);
static const System::Word er_FD_MSSQLFSIOError = System::Word(0x7d3);
static const System::Word er_FD_MSSQLQNSubError = System::Word(0x7d4);
static const System::Word er_FD_MongoGeneral = System::Word(0x834);
static const System::Word er_FD_MongoError = System::Word(0x835);
static const System::Word er_FD_MongoBadURI = System::Word(0x836);
static const System::Word er_FD_MongoDocReadOnly = System::Word(0x837);
static const System::Word er_FD_MongoFailedInitBSON = System::Word(0x838);
static const System::Word er_FD_MongoBulkError = System::Word(0x839);
static const System::Word er_FD_MongoCursorError = System::Word(0x83a);
static const System::Word er_FD_MongoExecuteError = System::Word(0x83b);
static const System::Word er_FD_MongoDBRefInvalid = System::Word(0x83c);
static const System::Word er_FD_MongoDBRefNotFound = System::Word(0x83d);
static const System::Word er_FD_MongoCannotOpenDataSet = System::Word(0x83e);
static const System::Word er_FD_MongoFieldTypeMismatch = System::Word(0x83f);
static const System::Word er_FD_MongoFieldIsNotFound = System::Word(0x840);
static const System::Word er_FD_MongoAlertToMany = System::Word(0x841);
}	/* namespace Consts */
}	/* namespace Stan */
}	/* namespace Firedac */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN_CONSTS)
using namespace Firedac::Stan::Consts;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC_STAN)
using namespace Firedac::Stan;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_FIREDAC)
using namespace Firedac;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Firedac_Stan_ConstsHPP
