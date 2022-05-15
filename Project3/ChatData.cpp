#include "ChatData.h"

ChatData::ChatData(bool type) {
	static int noOfChatRooms = 0;
	ChatRoomID = noOfChatRooms++;
	ChatRoom_Type = type;
	if (ChatRoom_Type == 0)
		one_to_one();
	else
		Group();
}

void ChatData::AddMember(User Member) {
	Users.push_back(Member);
}


void ChatData::AddMessage(string msg) {
	time_t now = time(0);
	Messages* newMessage = new Messages(theUserID,msg);
		allMessages.push_back(*newMessage);
	secNow = now;
}


void ChatData::DisplayMessages() {
	for (int i = 0; i< allMessages.size(); i++) {
		cout << allMessages[i - 1].getUserID() << endl;
		cout << allMessages[i].getText()<< endl;
	}
}

void ChatData::one_to_one() {
	//ChatRoomID = id++;
	//ChatRoom_Type = 0;
	//cout << "please enter your ID: ";
 //   int x;
	//cin >> x;
	//cout << "Please enter the ID of the person you want to add to the chatroom : ";
	//int y;
	//cin >> y;
	//one_to_one_ID.push_back(x);
	//one_to_one_ID.push_back(y);
	

	// choose number from contacts
	// find the user from database
	// call add user function

}


void ChatData::Group() {
	////ChatRoomID = id++;
	//ChatRoom_Type = 1;
	//int n;
	//cout << "Please enter the number of people you want to add to this group =  ";
	//cin >> n;
	//for (int i = 1; i <= n; i++) {
	//	cout << endl << "now enter the user's " << i << "ID" << endl;
	//	int x;
	//	cin >> x;
	//    groupID.push_back(x);
	//}

}

int ChatData::getID() {
	return ChatRoomID;
}

int ChatData::getSecNow() {
	return secNow;
}
string ChatData::getDateAndTime() {
	dateAndTime = allMessages[allMessages.size() - 1].getStatus().getDateAndTimeOfMessage();
	return dateAndTime;
}