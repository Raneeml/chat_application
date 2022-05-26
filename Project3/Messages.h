#pragma once
#pragma once
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Status.h"

using namespace std;
//using namespace Globals;

#include "global.h"

class Messages
{

	int MessageId;
	int UserID;
	string Text;
	//Status status ;

public:
	Messages();
	Messages( string Text);
	int getUserID();
	int getMessageID();
	//Status getStatus();
	string getText();




};
