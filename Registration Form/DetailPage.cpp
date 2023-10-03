#include "DetailPage.h"

using namespace System;
using namespace System::Windows::Forms;

int main(array<System::String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Create an instance of your main form (DetailPage in this case)
    RegistrationForm::DetailPage^ mainForm = gcnew RegistrationForm::DetailPage();

    // Run the application
    Application::Run(mainForm);

    return 0;
}
