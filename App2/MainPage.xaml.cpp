#include "pch.h"
#include "MainPage.xaml.h"

using namespace App2;

MainPage::MainPage()
{
	InitializeComponent();
	
	HMODULE ret = LoadPackagedLibrary(L"hello_world.dll", 0);
	FARPROC r = GetProcAddress(ret, "hello");
	INT_PTR ptr = r();

	int number = ptr;

}