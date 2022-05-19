#include "Messages.h"
#include "Status.h"
#include <iostream>

using namespace std;


Messages::Messages()
{
	UserID = theUserID;
	Text = " ";
	status = new Status();
	//add message to database and get the ID
	messageData^ message = gcnew messageData();

	MessageId = message->messageID;

	message->text = stdToCLI(Text);
	message->chatID = theChatID;
	message->userID = theUserID;
	messageRepo->insert(message);

	//connect message with chatroom
	chatMessageData^ chatMessage = gcnew chatMessageData();
	chatMessage->chat_ID = theChatID;
	chatMessage->message_ID = MessageId;
	chatMessageRepo->insert(chatMessage);

	
}
Messages::Messages( string text)
{
	UserID = theUserID;
	Text = text;
	status = new Status();
	//add message to database and get the ID
	messageData^ message = gcnew messageData();

	MessageId = message->messageID;

	message->text = stdToCLI(Text);
	message->chatID = theChatID;
	message->userID = theUserID;
	messageRepo->insert(message);

	//connect message with chatroom
	chatMessageData^ chatMessage = gcnew chatMessageData();
	chatMessage->chat_ID = theChatID;
	chatMessage->message_ID = MessageId;
	chatMessageRepo->insert(chatMessage);


}

int Messages::getUserID()
{
	return UserID;
}


Status Messages::getStatus() {
	return *status;
}

string Messages::getText() {
	return Text;
}



