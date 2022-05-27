#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include"Globals.h"
//using namespace Globals;

#include "global.h"
using namespace std;
class userStory
{
	int userID;
	string dateAndTime;
	string  timeOfStory;
	string storyPhoto;
	string storyText;
	bool storyType;

	time_t timeOfaddingStory;

public:
	userStory(string storyAdded, bool type);


};

