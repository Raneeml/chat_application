#pragma once
#include "SqlRepo.h"
#include "UserData.h"
#include "UserDescData.h"
#include "User.h"
//#include "MyDataStruct.h"

using namespace DBRepository;


#include <msclr/gcroot.h>
using namespace msclr;

#include<string>
using namespace std;

namespace Globals {
	 extern int theUserID; // global variable for the current account ID
	 extern gcroot<SqlRepo<UserData^>^> usersRepo;
	 extern gcroot<SqlRepo<UserDescData^>^> descRepo;
	//convert .NET String to c++ string
	extern string cliToSTD(String^ cliString);

	//convert c++ string to .NET String
	extern String^ stdToCLI(string stdString);
}