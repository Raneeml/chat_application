#include "Messages.h"
#include "Status.h"
#include <iostream>

using namespace std;


Messages::Messages()
{
	UserID = global::theUserID;
	Text = " ";
	status = new Status();
	
	//add message to database and get the ID
	messageData^ message = gcnew messageData();

	MessageId = message->messageID;

	message->text = global::stdToCLI(Text);
	message->chatID = global::theChatID;
	message->userID = global::theUserID;
	global::messageRepo->insert(message);

	//connect message with chatroom
	chatMessageData^ chatMessage = gcnew chatMessageData();
	chatMessage->chat_ID = global::theChatID;
	chatMessage->message_ID = MessageId;
	global::chatMessageRepo->insert(chatMessage);

	
}
Messages::Messages( string text)
{
	UserID = global::theUserID;
	Text = text;
	status = new Status();
	//add message to database and get the ID
	messageData^ message = gcnew messageData();

	MessageId = message->messageID;

	message->text = global::stdToCLI(Text);
	message->chatID = global::theChatID;
	message->userID = global::theUserID;
	global::messageRepo->insert(message);

	//connect message with chatroom
	chatMessageData^ chatMessage = gcnew chatMessageData();
	chatMessage->chat_ID = global::theChatID;
	chatMessage->message_ID = MessageId;
	global::chatMessageRepo->insert(chatMessage);


}

int Messages::getUserID()
{
	return UserID;
}

int Messages::getMessageID()
{
	return MessageId;
}

Status* Messages::getStatus() {
	return status;
}

string Messages::getText() {
	return Text;
}



