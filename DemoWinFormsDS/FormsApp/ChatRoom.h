#pragma once
#pragma once
#include "User.cpp"
#include "User.h"
#include "Message.cpp"
#include "Message.h"
#include<iostream>
#include <vector>
#include <ctime>
#include "main.cpp"
using namespace std;


class ChatRoom
{

	int ChatRoomID;
	string dateAndTime;
	vector<User>Users;
	vector<Message>allMessages;
	/*vector<int>groupID;
	vector<int>one_to_one_ID;*/
	bool ChatRoom_Type;
	string lastSeen;
	time_t now = time(0);
	//vector<pair<int, int>>theTimeAndID;
	int secNow;
public:
	ChatRoom(bool type);
	void AddMember(User);
	void AddMessage(string msg);
	void DisplayMessages();
	void one_to_one();
	void Group();
	//void displayChatRooms();
	void changeLastSeen();
	int getID();
	int getSecNow();
	string getDateAndTime();

};
#pragma once
