//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "CategoryExistsDialog.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TCategoryExistsForm *CategoryExistsForm;
//---------------------------------------------------------------------------
__fastcall TCategoryExistsForm::TCategoryExistsForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TCategoryExistsForm::CloseForm(TObject *Sender)
{
    this->Hide();
}
//---------------------------------------------------------------------------
