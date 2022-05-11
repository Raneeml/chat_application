#include "ChatRoom.h"

ChatRoom::ChatRoom(bool type) {
	static int noOfChatRooms = 0;
	ChatRoomID = noOfChatRooms++;
	ChatRoom_Type = type;
	if (ChatRoom_Type == 0)
		one_to_one();
	else
		Group();
}

void ChatRoom::AddMember(User Member) {
	Users.push_back(Member);
}


void ChatRoom::AddMessage(string msg) {
	time_t now = time(0);
	Message* newMessage = new Message(theID, msg);
	allMessages.push_back(*newMessage);
	secNow = now;
}


void ChatRoom::DisplayMessages() {
	for (int i = 0; i < allMessages.size(); i++) {
		cout << allMessages[i - 1].getUserID() << endl;
		cout << allMessages[i].getText() << endl;
	}
}

void ChatRoom::one_to_one() {
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


void ChatRoom::Group() {
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

int ChatRoom::getID() {
	return ChatRoomID;
}

int ChatRoom::getSecNow() {
	return secNow;
}
string ChatRoom::getDateAndTime() {
	dateAndTime = allMessages[allMessages.size() - 1].getStatus().getDateAndTimeOfMessage();
	return dateAndTime;
}