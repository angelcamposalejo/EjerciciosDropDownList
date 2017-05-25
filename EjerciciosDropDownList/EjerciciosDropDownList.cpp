#include "stdafx.h"  //________________________________________ EjerciciosDropDownList.cpp
#include "EjerciciosDropDownList.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	EjerciciosDropDownList app;
	return app.BeginDialog(IDI_EjerciciosDropDownList, hInstance);
}

void EjerciciosDropDownList::Window_Open(Win::Event& e)
{
	//________________________________________________________ ddDia
	ddDia.Items.Add(L"Viernes", 500);
	ddDia.Items.Add(L"Sabado", 700);
	ddDia.Items.Add(L"Domingo", 450);
	ddDia.Items.Add(L"Miercoles", 250);
	ddDia.SelectedIndex = 1;
}

void EjerciciosDropDownList::ddDia_SelChange(Win::Event& e)
{
	LPARAM cost;
	if (ddDia.GetSelectedData(cost) == false)return;
	wstring texto;
	Sys::Format(texto, L"Costo: $%d.00", cost);
	this->Text = texto;
}

