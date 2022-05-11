#pragma once
#pragma once
#include <vector>
#include "userProfileDesc.h"
#include"ChatRoom.h"
//#include"Story.h"
#include<iostream>
#include"Message.h"
#include <stack>
#include<string>
#include "Status.h"
#include "main.cpp"
using namespace std;



class User {

	int UserId;
	string password;
	string MobileNum;
	string Fname;
	string Lname;
	vector<ChatRoom>chatRooms;
	//stack<Story>stories;
	vector <User> contacts;
	vector <int> contactsIDs;
	userProfileDesc* desc;

public:

	User(string pass, string num, string f, string l);
	// User(int id,string pass,int num,string f,string l);
	void AddContacts(int contactID);
	void AddContacts(User  u);
	//void AddStory(Story st);
	void AddContacts(int contactNo);
	void AddChatRoom(bool type);
	void displayContacts();
	void displayChatRooms();
	int displayID();
	//void AddStory(Story <T> st);






};
