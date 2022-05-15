#include "Messages.h"
#include "Status.h"
#include <iostream>

using namespace std;

static int noOfMessages = 0;
Messages::Messages(int user_id)
{

	MessageId = noOfMessages++;
	UserID = user_id;
	Text = " ";
	status = new Status();


}
Messages::Messages(int user_id, string text)
{
	MessageId = noOfMessages++;
	UserID = user_id;
	Text = text;
	status = new Status();


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



