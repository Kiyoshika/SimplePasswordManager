//---------------------------------------------------------------------------

#ifndef CategoryExistsDialogH
#define CategoryExistsDialogH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TCategoryExistsForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *Label1;
	TButton *BtnOK;
	void __fastcall CloseForm(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TCategoryExistsForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TCategoryExistsForm *CategoryExistsForm;
//---------------------------------------------------------------------------
#endif
