//---------------------------------------------------------------------------

#include <fmx.h>
#include <iostream>
#pragma hdrstop

#include "RootUnit.h"

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

