//---------------------------------------------------------------------------

#include <fmx.h>
#ifdef _WIN32
#include <tchar.h>
#endif
#pragma hdrstop
#include <System.StartUpCopy.hpp>
//---------------------------------------------------------------------------
USEFORM("RootUnit.cpp", RootForm);
USEFORM("NewCategoryDialog.cpp", NewCategoryForm);
USEFORM("CategoryExistsDialog.cpp", CategoryExistsForm);
//---------------------------------------------------------------------------
extern "C" int FMXmain()
{
	try
	{
		Application->Initialize();
		Application->CreateForm(__classid(TRootForm), &RootForm);
		Application->CreateForm(__classid(TNewCategoryForm), &NewCategoryForm);
		Application->CreateForm(__classid(TCategoryExistsForm), &CategoryExistsForm);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
