#include"MyForm.h"
#include<cmath>
#include<stdio.h>
#include<Windows.h>
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
void main(array <String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Calculator::MyForm form;
	Application::Run(% form);

}


