#include "pch.h"
#include "Form1.h"
#include "Globals.h"
#include "UserData.h"

using namespace Globals;

System::Void CppCLRWinformsProjekt::Form1::button1_Click(System::Object^ sender, System::EventArgs^ e)
{

	//UserData^ dbUser = usersRepo->getItem(1);

	//myGlobalDS = new MyDataStruct(dbUser);

	//this->textBox1->Text = stdToCLI(myGlobalDS->name);
	//MessageBox::Show("output: " + stdToCLI(myGlobalDS->name) + " num = " + myGlobalDS->numb + " doob = " + myGlobalDS->doob + " sBool = " + myGlobalDS->sBool + " node = " + myGlobalDS->nod->value);

	

	//Add a user to the Database
	UserData^ newUser = gcnew UserData();
	newUser->id = 4;
	newUser->veryLong = 999678;
	newUser->name = "Ahsw";
	newUser->myBool = true;
	newUser->dooobl = 2082.3532;
	newUser->afloats = 0.443231;
	//usersRepo->insert(newUser);

	//get All Users from Database
	List<UserData^>^ allUsers = usersRepo->getAll();


	//update user with id = 1
	//usersRepo->update(1, newUser);

	//delete a user whose id = 4
	//usersRepo->remove(4);

	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("name")
		->isEqualTo("Hany")
		->and()
		->whereColumn("afloats")
		->isGreaterThan(10)
		->or()
		->whereColumn("MyBool") //is not case sensitive
		->isNotNull()
		->build();

	List<UserData^>^ filteredUsers = usersRepo->getFiltered(filter);

	// get users from your custom query
	// may throw exceptions if used wrong
	List<UserData^>^ myUsers = usersRepo->getFromCustomQuery("SELECT * FROM UserDatas WHERE mybool = 1");


}

