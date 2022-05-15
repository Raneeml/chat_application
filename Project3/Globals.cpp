#include "pch.h"
#include "Globals.h"
#include "SqlRepo.h"
#include <msclr/gcroot.h>

using namespace msclr;
using namespace DBRepository;

namespace Globals {
	//MyDataStruct* myGlobalDS;
	extern int theUserID=0;
	gcroot<SqlRepo<UserData^>^> usersRepo = gcnew SqlRepo<UserData^>("UserData",true);

	string cliToSTD(String^ cliString) {
		char cStr[450] = { 0 };
		if (cliString->Length < sizeof(cStr))
			sprintf(cStr, "%s", cliString);
		string stdString(cStr);
		return stdString;
	}

	String^ stdToCLI(string stdString) {
		return gcnew String(stdString.c_str());
	}
}