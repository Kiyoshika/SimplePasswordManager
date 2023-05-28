//---------------------------------------------------------------------------

#ifndef RootUnitH
#define RootUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.TreeView.hpp>
#include <FMX.Types.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
//---------------------------------------------------------------------------
class TRootForm : public TForm
{
__published:	// IDE-managed Components
	TTreeView *TreeCategories;
	TLabel *FormTitle;
	TLabel *CategoryTitle;
	TButton *BtnCreatePassword;
	TButton *BtnGeneratePassword;
	TButton *BtnCreateNewCategory;
private:	// User declarations
public:		// User declarations
	__fastcall TRootForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TRootForm *RootForm;
//---------------------------------------------------------------------------
#endif
