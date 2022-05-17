#pragma once
#include "userProfileDesc.h"
#include"ChatData.h"
//#include"Story.h"
#include"Globals.h"
#include "SqlRepo.h"
#include"Messages.h"
#include "Status.h"
#include "ChatData.h"
#include <stack>
#include <vector>
#include<string>
#include<iostream>
using namespace std;

class User {

	int UserId;
	string password;
	string MobileNum;
	string Fname;
	string Lname;
	vector<int>chatRoomsIDs;
	//stack<Story>stories;
	//vector <User> contacts;
	vector <int> contactsIDs;
	userProfileDesc * desc;

public:

    User();
    void AddContacts(int contactID);
	//void AddContacts(User  u);
	//void AddStory(Story st);
   // void AddContacts(int contactNo);
	void AddChatRoom(bool type);
	void displayContacts();
	void displayChatRooms();
	int displayID();
	//void AddStory(Story <T> st);


	



};
