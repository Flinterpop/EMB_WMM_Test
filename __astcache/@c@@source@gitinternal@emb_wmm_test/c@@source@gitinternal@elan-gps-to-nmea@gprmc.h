//---------------------------------------------------------------------------

#ifndef GPRMCH
#define GPRMCH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TRMCForm : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
private:	// User declarations
public:		// User declarations
	__fastcall TRMCForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRMCForm *RMCForm;
//---------------------------------------------------------------------------
#endif
