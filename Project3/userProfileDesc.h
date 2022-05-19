#pragma once
#include<iostream>
#include<string>
#include"Globals.h"
#include"SqlRepo.h"
using namespace std;
using namespace Globals;

class userProfileDesc
{
	int userID;
	string personalPhoto;
	string aboutDescription;
	bool visibility;


public:
	userProfileDesc();
	void changeProfilePhoto(string newPhoto);
	void changeVisibility();
	void editAboutDescription(string newAbout);
	
};
