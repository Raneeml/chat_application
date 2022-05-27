#include "ChatData.h"
#include"Globals.h"



ChatData::ChatData(bool type) {
	ChatRoom_Type = type;
    // lastSeen = getAndUpdateDateAndTime();

	ChatRoomData^ chat = gcnew ChatRoomData();
		ChatRoomID =chat->chatroomID ;
		chat->type = ChatRoom_Type;
		chat->lastSeen = global::stdToCLI(lastSeen);
		
		global::chatRoomsRepo->insert(chat);


		global::theChatID = ChatRoomID;

	
}

void ChatData::AddMember(int addedID) {
	UsersIDs.push_back(addedID);


	//theChatID change when you create or enter chatroom 
	chatsUsersData^ newMember = gcnew chatsUsersData();
	newMember->chatroom_ID = global::theChatID;
	newMember->member_ID = addedID;
	newMember->timeOfLastMsgINChat = getChatRoomTime();

	global::chatsUsersRepo->insert(newMember);

}


void ChatData::AddMessage(string msg) {
	Messages *newMessage = new Messages(msg);
	allMessagesIDs.push_back(newMessage->getMessageID());
	getAndUpdateDateAndTime();

}


List<messageData^>^ ChatData::DisplayMessages() {

	//get messages of that chatroom form chat/message table
	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("chat_ID")
		->isEqualTo(global::theChatID)
		->build();
 
	List<chatMessageData^>^ filteredMessages = global::chatMessageRepo->getFiltered(filter);

	//get list of messages of the current chatroom
	List<messageData^>^ msgs = {};
	for (int i = 0; i < filteredMessages->Count; i++)
	{
		msgs[i] = global::messageRepo->getItem(filteredMessages[i]->message_ID);

	}

	//sort the status by time descending
	QueryFilter^ sort = gcnew QueryFilter();
	sort = sort->orderBy("dateAndtime", true)
		->build();
   List<statusData^>^ sortedStatus = global::statusRepo->getFiltered(sort);

   //get messages sorted descending
   for (int i = 0; i < msgs->Count; i++)
   {
	   msgs[i] = global::messageRepo->getItem(sortedStatus[i]->messageID);

   }


	return msgs;
	
}



int ChatData::getSecNow() {

	return secNow;
}

int ChatData::getChatID() {
	return ChatRoomID;
}

string ChatData::getAndUpdateDateAndTime() {
	// get
		messageData ^ lastMsg = gcnew messageData();
		statusData^ lastMsgStatus = gcnew statusData();
	int lastMsgIndx = allMessagesIDs.size() - 1;
	lastMsg = global::messageRepo->getItem(lastMsgIndx);
	lastMsgStatus = global::statusRepo->getItem(lastMsg->messageID);
	dateAndTime = global::cliToSTD(lastMsgStatus->dateAndtime);

	//update
	ChatRoomData^ chatupdated = gcnew ChatRoomData();
	chatupdated->timeOfLastMsg = lastMsgStatus->timeOfMsg;
	bool updated = global::chatRoomsRepo->update(ChatRoomID, chatupdated);

	return dateAndTime;
}

time_t ChatData::getChatRoomTime() {
	ChatRoomData^ chat = global::chatRoomsRepo->getItem(getChatID());
		return chat->timeOfLastMsg ;
}
