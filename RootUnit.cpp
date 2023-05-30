//---------------------------------------------------------------------------

#include <fmx.h>
#include <iostream>
#pragma hdrstop

#include "RootUnit.h"
#include "NewCategoryDialog.h"
#include "CategoryExistsDialog.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TRootForm *RootForm;
//---------------------------------------------------------------------------
__fastcall TRootForm::TRootForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TRootForm::CreateNewCategory(TObject *Sender)
{
    NewCategoryForm->Show();
}

bool __fastcall TRootForm::CheckCategoryNameExists(const String& CategoryName)
{
	std::vector<String>::iterator it
		= std::find(this->CategoryNames.begin(), this->CategoryNames.end(), CategoryName);

	return it != this->CategoryNames.end();
}

void __fastcall TRootForm::AddNewCategory(const String& NewCategoryName)
{
	if (this->CheckCategoryNameExists(NewCategoryName))
	{
		// Don't hide the category input, just display error dialog so user
		// can re-type a new category name
		CategoryExistsForm->Show();
		return;
	}
		
	TTreeViewItem* NewCategoryItem = new TTreeViewItem(NULL);
	NewCategoryItem->Text = NewCategoryName;
	this->TreeCategories->AddObject(NewCategoryItem);
	this->CategoryNames.push_back(NewCategoryName);
	NewCategoryForm->CloseAndClearForm();
}
//---------------------------------------------------------------------------

