#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include"Globals.h"
//#include "main.cpp"
using namespace Globals;
using namespace std;
class Status
{
	int messageID;
	string dateAndTime;
	string Date_of_message_sent;
	string  time_of_message_sent ;
	bool status_type;
	//0 for unseen & 1 for seen

public :
	Status();
	string status_of_message();
	string getDateAndTimeOfMessage();
	void change_status();
	statusData ^ getStatus();

};



