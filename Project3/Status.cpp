#define _CRT_SECURE_NO_WARNINGS
#include "Status.h"
//#include<ctime>

Status::Status()
{
	
	time_t now = time(0);
	 dateAndTime = ctime(&now);

	Date_of_message_sent  = dateAndTime.substr(8, 2) + '-' + dateAndTime.substr(4, 3) + '-' + dateAndTime.substr(20, 4);
	time_of_message_sent = dateAndTime.substr(11, 8);
	status_type = 0;

}

 string Status::status_of_message()
{
	if (status_type == 0) {
		return "unSeen";

	}
	return "Seen";
}

void Status::change_status()
{
	status_type = !status_type;
}

void Status::view_status()
{
	cout << "date of sent message is : " << Date_of_message_sent<< endl;
	cout << "time of sent message is : " << time_of_message_sent<< endl;
	cout << "status type of this message : " << status_type<< endl;
}


string Status::getDateAndTimeOfMessage()
{
	return dateAndTime;
}


