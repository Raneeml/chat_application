#pragma once
using namespace System;


public ref class ChatRoomData {
public:
	int chatroomID;
	bool type;
	String^ lastSeen;
	time_t timeOfLastMsg;
};
