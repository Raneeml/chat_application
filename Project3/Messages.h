#pragma once
#pragma once
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Status.h"

using namespace std;

class Messages
{

	int MessageId;
	int UserID;
	string Text;
	Status* status;

public:
	Messages();
	Messages( string Text);
	int getUserID();
	Status getStatus();
	string getText();




};
