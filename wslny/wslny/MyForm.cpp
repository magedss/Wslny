#include "MyForm.h"
#include "graph.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	wslny::MyForm form;
	Application::Run(% form);
	
}


