//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "NewCategoryDialog.h"
#include "RootUnit.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TNewCategoryForm *NewCategoryForm;
__fastcall TNewCategoryForm::TNewCategoryForm(TComponent* Owner)
	: TForm(Owner)
{
}


void __fastcall TNewCategoryForm::CreateCategory(TObject *Sender)
{
	RootForm->AddNewCategory(this->InputNewCategoryName->Text);
}

void TNewCategoryForm::CloseAndClearForm()
{
	this->InputNewCategoryName->Text = "";
	this->Hide();
}

void __fastcall TNewCategoryForm::OnClose(TObject *Sender, TCloseAction &Action)
{
	this->CloseAndClearForm();
}
//---------------------------------------------------------------------------

