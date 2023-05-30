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
#include <FMX.Menus.hpp>

#include <vector>
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
	TMenuBar *MenuBar1;
	TMenuItem *MenuBtnFile;
	TMenuItem *MenuBtnHelp;
	TMenuItem *MenuBtnExport;
	TMenuItem *MenuButtonImport;
	TButton *BtnRemoveCategory;
	void __fastcall CreateNewCategory(TObject *Sender);
private:	// User declarations
	std::vector<String> CategoryNames;
    bool CheckCategoryNameExists(const String& CategoryName);
public:		// User declarations
	__fastcall TRootForm(TComponent* Owner);
    void __fastcall AddNewCategory(const String& NewCategoryName);
};
//---------------------------------------------------------------------------
extern PACKAGE TRootForm *RootForm;
//---------------------------------------------------------------------------
#endif
