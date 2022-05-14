#pragma once
using namespace System;

public ref class messageData {
public:
	int message_id;
	int userr_id;
	int chat_id;
	String^ text_;
	String^ type;
	String^ time_sent;
	String^ date_sent;
	String^ desc;
};