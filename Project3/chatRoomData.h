#pragma once
using namespace System;
#include <stdio.h>
#include <time.h>
#include <stdint.h>

public ref class ChatRoomData {
public:
	int chatroomID;
	bool type;
	String^ lastSeen;
	time_t timeOfLastMsg;
};
