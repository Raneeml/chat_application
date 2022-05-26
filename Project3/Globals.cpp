//#include "pch.h"
//#include "Globals.h"
//#include "SqlRepo.h"
//#include <msclr/gcroot.h>
//
//using namespace msclr;
//using namespace DBRepository;
//
//namespace Globals {
//
//	extern int theUserID=2;
//	extern int theChatID = 1;
//
//	extern gcroot<SqlRepo<UserData^>^> usersRepo = gcnew SqlRepo<UserData^>("UserData",true);
//	extern gcroot<SqlRepo<ChatRoomData^>^> chatRoomsRepo = gcnew SqlRepo<ChatRoomData^>("ChatRoomData", true);
//	extern gcroot<SqlRepo<UserDescData^>^> descRepo = gcnew SqlRepo<UserDescData^>("UserDescData");
//	extern gcroot<SqlRepo<statusData^>^> statusRepo= gcnew SqlRepo<statusData^>("statusData");
//	extern gcroot<SqlRepo<messageData^>^> messageRepo = gcnew SqlRepo<messageData^>("messageData",true);
//	extern gcroot<SqlRepo<chatMessageData^>^> chatMessageRepo = gcnew SqlRepo<chatMessageData^>("chatMessageData");
//	extern gcroot<SqlRepo<userContactsData^>^> userContactsRepo = gcnew SqlRepo<userContactsData^>("userContactsData");
//	extern gcroot<SqlRepo<chatUsersData^>^> chatUsersRepo= gcnew SqlRepo<chatUsersData^>("chatUsersData");
//	extern gcroot<SqlRepo<storyData^>^> storyRepo = gcnew SqlRepo<storyData^>("storyData");
//
//	string cliToSTD(String^ cliString) {
//		char cStr[450] = { 0 };
//		if (cliString->Length < sizeof(cStr))
//			sprintf(cStr, "%s", cliString);
//		string stdString(cStr);
//		//string stdString(cStr);
//		return stdString;
//	}
//
//	String^ stdToCLI(string stdString) {
//		return gcnew String(stdString.c_str());
//	}
//}