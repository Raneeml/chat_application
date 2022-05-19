#pragma once
#include "User.h"
#include "Messages.h"
#include "Globals.h"
#include<iostream>
#include <vector>
#include <ctime>

using namespace std;
using namespace Globals;

class ChatData
{
	int ChatRoomID;
	vector<int> UsersIDs;
	vector<Messages> allMessages;
	bool ChatRoom_Type;
	string lastSeen;

	string dateAndTime;
	time_t now = time(0);
	int secNow;
public:
	ChatData(bool type);
	void AddMember(int addedID);
	void AddMessage(string msg);
	List<messageData^>^ DisplayMessages();
	//void changeLastSeen();
	int getSecNow();
	string getDateAndTime();

};


///////////// last seen isn't implemented ////////////////////