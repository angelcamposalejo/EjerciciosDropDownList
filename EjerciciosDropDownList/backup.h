#pragma once  //______________________________________ EjerciciosDropDownList.h  
#include "Resource.h"
class EjerciciosDropDownList : public Win::Dialog
{
public:
	EjerciciosDropDownList()
	{
	}
	~EjerciciosDropDownList()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::DropDownList ddDia;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(270);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(53);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjerciciosDropDownList";
		ddDia.Create(NULL, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | WS_VSCROLL | CBS_DROPDOWNLIST | CBS_WINNORMALCASE, 32, 21, 231, 25, hWnd, 1000);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		ddDia.Font = fontArial014A;
	}
	//_________________________________________________
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		return false;
	}
};
