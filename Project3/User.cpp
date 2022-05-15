#include "User.h"
#include "ChatData.h"
#include "userProfileDesc.h"
#include<bits/stdc++.h>
using namespace std;

User::User(string pass, string num, string f, string l) {
	static int noOfUsers = 0;
	UserId = noOfUsers++;
	password = pass;
	MobileNum = num;
	Fname = f;
	Lname = l;
	desc = new userProfileDesc(UserId);
}

void User::AddContacts(int contactID) {
	contactsIDs.push_back(contactID);
	//add contact from database
	//contacts.push_back(contact);
}




void User::AddContacts(int contactID) {
	contactsIDs.push_back(contactID);

}

void User::AddContacts(int contactID) {
	contactsIDs.push_back(contactID);

	//database will find the ID of that number

}


void User::AddChatRoom(bool type) {
	ChatData newChatRoom = new ChatData(type);
	chatRooms.push_back(newChatRoom);
}

//void User <T>::AddStory(Story <T> st) {
//	s.push(st);
//}

int User::displayID()
{
	return UserId;
}
void User::displayContacts() {
	
	sort(contactsIDs.begin(), contactsIDs.end());
	
	for (int i = 0; i < contactsIDs.size(); i++)
	{
		cout << contactsIDs[i] << endl;
	}
}

bool sortbysec(const pair<int, int>& a,const pair<int, int>& b)
{
	return (a.second < b.second);
}

void User::displayChatRooms() {

	vector<pair<int, int>>timeAndIDofChatRooms;

	for (int i = 0; i < chatRooms.size(); i++)
	{
		int id = chatRooms[i].getID();
		int time = chatRooms[i].getSecNow();
		timeAndIDofChatRooms.push_back(make_pair(id, time));
	}

	sort(timeAndIDofChatRooms.begin(), timeAndIDofChatRooms.end(),sortbysec);

	for (int i = 0; i < chatRooms.size(); i++)
	{
		cout << chatRooms[i].getID() << endl;
		cout << chatRooms[i].getDateAndTime() << endl;
	}



}


