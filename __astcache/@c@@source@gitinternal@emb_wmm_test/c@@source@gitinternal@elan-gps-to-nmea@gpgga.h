//---------------------------------------------------------------------------

#ifndef GPGGAH
#define GPGGAH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Objects.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TGPGGAForm : public TForm
{
__published:	// IDE-managed Components
	TImage *Image1;
	TImage *Image2;
private:	// User declarations
public:		// User declarations
	__fastcall TGPGGAForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TGPGGAForm *GPGGAForm;
//---------------------------------------------------------------------------
#endif
