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
	sort = sort->orderBy("Fname", false)
		->build();

	contacts = usersRepo->getFiltered(sort);

	return contacts;
}


void User::AddStory(string storyAdded, bool type) {
	story *addedStory = new story(storyAdded, type);
}

void User::autoDeleteStory(int accountID)
	{
	storyData^ storyToDelete = gcnew storyData();
		storyToDelete = storyRepo->getItem(accountID);

	calcTime(accountID,storyToDelete->published_time_t);

}
void User::calcTime(int storyUserID,time_t timeOfStory)
{
	time_t now = time(0);
	double diff = difftime(now, timeOfStory);

	if (diff >= 86400) // 24h passed the delete story
	{
		storyRepo->remove(storyUserID);
	}


}

List<storyData^>^ User::displayContactsStories() {
	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("user_ID")
		->isEqualTo(theUserID)
		->build();

	// return a List of contacts of the current user
	List<userContactsData^>^ filteredContacts = userContactsRepo->getFiltered(filter);

	List<storyData^>^ contactsStories = {};
	for (int i = 0; i < filteredContacts->Count; i++)
	{
		autoDeleteStory(filteredContacts[i]->contact_ID);
		contactsStories[i] = storyRepo->getItem(filteredContacts[i]->contact_ID);

	}
	return contactsStories;
}

storyData^ User::displayMystory() {
	storyData^ myStory = gcnew storyData();
	myStory = storyRepo->getItem(theUserID);

	return myStory;
}

void User::deleteMyStory()
{
	storyRepo->remove(theUserID);
}




int User::displayID()
{
	return UserId;
}



bool sortbysec(const pair<int, int>& a,const pair<int, int>& b)
{
	return (a.second < b.second);
}



void User::addChatRoom(bool type) {
	ChatData newChat = new ChatData(type);
	newChat.AddMember(theUserID);

	chatRoomsIDs.push_back(newChat.getChatID());
    
}

List<ChatRoomData^>^ User::displayChatRooms() {
	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("member_ID")
		->isEqualTo(theUserID)
		->build();

	// return a List of contacts of the current user
	List<chatUsersData^>^ filteredChatRooms = chatUsersRepo->getFiltered(filter);

	List<ChatRoomData^>^ chatRooms = {};
	for (int i = 0; i < filteredChatRooms->Count; i++)
	{
		chatRooms[i] = chatRoomsRepo->getItem(filteredChatRooms[i]->member_ID);

	}

	//sort the contacts by first name
	QueryFilter^ sort = gcnew QueryFilter();
	sort = sort->orderBy("timeOfLastMsg", true)
		->build();

	chatRooms = chatRoomsRepo->getFiltered(sort);

	return chatRooms;

}


