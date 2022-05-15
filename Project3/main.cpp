#include "SignIn.h"
#include "SignUp.h"
#include "chatroom.h"
#include<string>
#include "Globals.h"
#include "SqlRepo.h"

using namespace Globals;
using namespace System;
using namespace System::ComponentModel;
using namespace System::Drawing;
using namespace System::Windows::Forms;
[STAThread]
//array<String^>^ args
void main() {

	SqlDbManager::startConnection("Data Source=DESKTOP-PS268NT;Initial Catalog=ChatApplication;Integrated Security=True");
	if (!usersRepo->tableExists()) {
		usersRepo->createTable("UserId");
	}

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	/*Application::Run(gcnew CppCLRWinformsProjekt::chatroom());*/

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//Project3::SignIn form;
	//Project3::SignUp form;
	Project3::chatroom form;
	form.ShowDialog();


}

	/*User^ user = nullptr;
	while (true) {
		Project3::MyForm form;
		form.ShowDialog();
		if (form.switchToSignup) {
			Project3::SignUp signup;
			signup.ShowDialog();
			if (signup.switchToLogin) {
				continue;
			}
			else {
				user = signup.user;
				break;
			}
		}
		else {
			user = form.user;
			break;
		}
	}

	}*/


