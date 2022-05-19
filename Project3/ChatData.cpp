#include "ChatData.h"
#include"Globals.h"



ChatData::ChatData(bool type) {
	ChatRoom_Type = type;
     lastSeen = getDateAndTime();

	ChatRoomData^ chat = gcnew ChatRoomData();
		ChatRoomID =chat->chatroomID ;
		chat->type = ChatRoom_Type;
		chat->lastSeen =stdToCLI(lastSeen);
		
		chatRoomsRepo->insert(chat);


		theChatID = ChatRoomID;

	
}

void ChatData::AddMember(int addedID) {
	UsersIDs.push_back(addedID);


	//theChatID change when you create or enter chatroom 
	chatUsersData^ newMember = gcnew chatUsersData();
	newMember->chatroom_ID = theChatID;
	newMember->member_ID = addedID;

}


void ChatData::AddMessage(string msg) {
	Messages* newMessage = new Messages(msg);
		allMessages.push_back(*newMessage);

}


List<messageData^>^ ChatData::DisplayMessages() {

	//get messages of that chatroom form chat/message table
	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("chat_ID")
		->isEqualTo(theChatID)
		->build();
 
	List<chatMessageData^>^ filteredMessages = chatMessageRepo->getFiltered(filter);

	//get list of messages of the current chatroom
	List<messageData^>^ msgs = {};
	for (int i = 0; i < filteredMessages->Count; i++)
	{
		msgs[i] = messageRepo->getItem(filteredMessages[i]->message_ID);

	}

	//sort the status by time descending
	QueryFilter^ sort = gcnew QueryFilter();
	sort = sort->orderBy("dateAndtime", true)
		->build();
   List<statusData^>^ sortedStatus = statusRepo->getFiltered(sort);

   //get messages sorted descending
   for (int i = 0; i < msgs->Count; i++)
   {
	   msgs[i] = messageRepo->getItem(sortedStatus[i]->messageID);

   }


	return msgs;
	
}



int ChatData::getSecNow() {

	return secNow;
}

string ChatData::getDateAndTime() {
	dateAndTime = allMessages[allMessages.size() - 1].getStatus().getDateAndTimeOfMessage();
	return dateAndTime;
}