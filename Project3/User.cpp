#include "User.h"
#include "ChatData.h"
#include "userProfileDesc.h"
#include"Globals.h"
#include<bits/stdc++.h>
using namespace std;
using namespace Globals;
User::User() {
	UserData^ user = gcnew UserData();
	user = usersRepo->getItem(theUserID);
	UserId = user->UserId;
	password = cliToSTD(user->password);
	MobileNum = cliToSTD(user->MobileNum);
	Fname = cliToSTD(user->Fname);
	Lname = cliToSTD(user->Lname);
	desc = new userProfileDesc(user);
}


void User::AddContacts(int contactID) {
	contactsIDs.push_back(contactID);

	//database will find the ID of that number

}


void User::AddChatRoom(bool type) {
	int newChatRoomID ;//add in database
	chatRoomsIDs.push_back(newChatRoomID);
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

	for (int i = 0; i < chatRoomsIDs.size(); i++)
	{
		int id = chatRoomsIDs[i];
		//int time = chatRooms[i].getSecNow();
		//timeAndIDofChatRooms.push_back(make_pair(id, time));
	}

	sort(timeAndIDofChatRooms.begin(), timeAndIDofChatRooms.end(),sortbysec);

	for (int i = 0; i < chatRoomsIDs.size(); i++)
	{
		cout << chatRoomsIDs[i]<< endl;
		//cout << chatRooms[i].getDateAndTime() << endl;
	}



}



