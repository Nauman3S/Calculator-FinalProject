#include "MainForm.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(cli::array<String^>^args)/////becauase of having multiple header files and "using namespace std" in each cause error so use
//////////////////////////////////////   cli::array........
{
	

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ScientificCalculator::MainForm form;
	//RandomNumberGenerator::MyForm form;
	Application::Run(%form);


	


	
}

