#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ScientificCalculator::MainForm form;
	//RandomNumberGenerator::MyForm form;
	Application::Run(%form);
}

