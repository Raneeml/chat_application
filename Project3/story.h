#pragma once
#include <string>
#include <iostream>
#include <ctime>
#include"Globals.h"
//#include "main.cpp"
using namespace Globals;
using namespace std;
class story
{
	int userID;
	string dateAndTime;
	string  timeOfStory;
	string storyPhoto;
	string storyText;
	bool storyType;

	time_t timeOfaddingStory;

public:
	story(string storyAdded, bool type);


};

