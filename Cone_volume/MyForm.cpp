#include "MyForm.h"

using namespace System;//пространство имен, системные элементы
using namespace System::Windows::Forms;//обращение к форме

void main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();//подключение визуальных стилей формы
	Conevolume::MyForm form;
	Application::Run(% form);
}