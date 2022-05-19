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
	desc = new userProfileDesc();
}


void User::AddContacts(int contactID) {
	contactsIDs.push_back(contactID);

	//database will find the ID of that number
	userContactsData^ userContact = gcnew userContactsData();
	userContact->user_ID = theUserID;
	userContact->contact_ID = contactID;
	userContactsRepo->insert(userContact);
}

//
//void User::AddChatRoom(bool type) {
//	int newChatRoomID ;//add in database
//	chatRoomsIDs.push_back(newChatRoomID);
//}

//void User <T>::AddStory(Story <T> st) {
//	s.push(st);
//}

int User::displayID()
{
	return UserId;
}

List<UserData^>^ User::displayContacts() {
	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("user_ID")
		->isEqualTo(theUserID)
		->build();

	// return a List of contacts of the current user
	List<userContactsData^>^ filteredContacts = userContactsRepo->getFiltered(filter);

	List<UserData^>^ contacts = {};
	for (int i = 0; i < filteredContacts->Count; i++)
	{
		contacts[i] = usersRepo->getItem(filteredContacts[i]->contact_ID);

	}

	//sort the contacts by first name
	QueryFilter^ sort = gcnew QueryFilter();
	sort = sort->orderBy("Fname",false)
		->build();
	
	contacts = usersRepo->getFiltered(sort);

	return contacts;
}

bool sortbysec(const pair<int, int>& a,const pair<int, int>& b)
{
	return (a.second < b.second);
}

void User::displayChatRooms() {

	//vector<pair<int, int>>timeAndIDofChatRooms;

	//for (int i = 0; i < chatRoomsIDs.size(); i++)
	//{
	//	int id = chatRoomsIDs[i];
	//	//int time = chatRooms[i].getSecNow();
	//	//timeAndIDofChatRooms.push_back(make_pair(id, time));
	//}

	//sort(timeAndIDofChatRooms.begin(), timeAndIDofChatRooms.end(),sortbysec);

	//for (int i = 0; i < chatRoomsIDs.size(); i++)
	//{
	//	cout << chatRoomsIDs[i]<< endl;
	//	//cout << chatRooms[i].getDateAndTime() << endl;
	//}



}



