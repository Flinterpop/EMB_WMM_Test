//---------------------------------------------------------------------------

#ifndef DebugFormH
#define DebugFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Memo.hpp>
#include <FMX.Memo.Types.hpp>
#include <FMX.ScrollBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TDebugF : public TForm
{
__published:	// IDE-managed Components
	TMemo *MemoDebug;
	TButton *BN_DebugClear;
	TCheckBox *CB_Pause;
	void __fastcall BN_DebugClearClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TDebugF(TComponent* Owner);
    void  pme(const char* fmt, ...);
};
//---------------------------------------------------------------------------
extern PACKAGE TDebugF *DebugF;
//---------------------------------------------------------------------------
#endif
