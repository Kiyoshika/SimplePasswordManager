//---------------------------------------------------------------------------

#ifndef NewCategoryDialogH
#define NewCategoryDialogH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TNewCategoryForm : public TForm
{
__published:	// IDE-managed Components
	TEdit *InputNewCategoryName;
	TLabel *Label1;
	TLabel *Label2;
	void __fastcall CreateCategory(TObject *Sender);
	void __fastcall OnClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TNewCategoryForm(TComponent* Owner);
    void CloseAndClearForm();

};
//---------------------------------------------------------------------------
extern PACKAGE TNewCategoryForm *NewCategoryForm;
//---------------------------------------------------------------------------
#endif
