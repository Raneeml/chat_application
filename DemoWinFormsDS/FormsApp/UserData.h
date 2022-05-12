#pragma once

using namespace System;

ref class UserData {
public:

	//int id; //if this will be primary key and auto generated, it should be the first member (like this)
	//long long veryLong;
	//String^ name;
	//bool myBool;
	//float afloats;
	//double dooobl;

	int user_id ;
	String^ F_name;
	String^ L_name;
	int phone_number ;
	String^ password_;
	String^ description_;


	//void doTh();
};

