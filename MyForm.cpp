#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
int main(){
	Application::EnableVisualStyles();
	Application::Run(gcnew(juego_final::MyForm));
	return 0;
}