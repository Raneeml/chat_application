#pragma once
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Status.h"
#include "main.cpp"
using namespace std;

class Message
{

	int MessageId;
	int UserID;
	string Text;
	Status* status;

public:
	Message(int user_id);
	Message(int UserID, string Text);
	int getUserID();
	Status getStatus();
	string getText();




};
