#pragma once
#include<iostream>
#include<string>
#include"Globals.h"
using namespace std;

class userProfileDesc
{
	int userID;
	long personalPhoto;
	string aboutDescription;
	bool visibility;


public:
	userProfileDesc(int ID);
	void changeProfilePhoto(long newPhoto);
	void changeVisibility();
	void editAboutDescription(string newAbout);
	
};
