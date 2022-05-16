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
	string dateAndTime;
	vector<int> UsersIDs;
	vector<Messages> allMessages;
	/*vector<int>groupID;
	vector<int>one_to_one_ID;*/
	bool ChatRoom_Type;
	string lastSeen;
	time_t now = time(0);
	//vector<pair<int, int>>theTimeAndID;
	int secNow;
public:
	ChatData(bool type);
	void AddMember(int addedID);
	void AddMessage(string msg);
	void DisplayMessages();
	void one_to_one();
	void Group();
	//void displayChatRooms();
	//void changeLastSeen();
	int getID();
	int getSecNow();
	string getDateAndTime();

};
