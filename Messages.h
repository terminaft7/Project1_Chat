#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Messages
{

public : 

	void showlastMessage(string nickname, vector <Messages> messageArray, string receiver);
	void setFrom(string nickname);
	void setTo_whom(string nickname);
	void writeMessage(string message);
	string getFrom();
	string getTo_whom();
	string getMessage();
	

protected :

	string from;
	string to_whom;
	string message;
};

