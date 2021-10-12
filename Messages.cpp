﻿#include "Messages.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

//надо создать массив для стрингов и проинициализировать его (наверное), чтобы там не было мусора
void Messages::initializeArray() 
{
	
	for (int i = 0; i < 100; i++) {
		messageArray[i] = "0";
	}
}

void Messages::writetoArray(string message, string* message_array) 
{
	
	setCounter();
	int counter = getCounter();
	message_array[counter] = {message};

}

void Messages::setCounter() {
	counter++;
}

int Messages::getCounter() {
	return counter;
}

void Messages::sendMessage(string message, string nickname)
{/*
	if (message[0] == '@') {

	
		int j = message.size();
		int i(1);
		while (message[i] != ' ') {
			receiver[i - 1] = message[i];
			i++;
			if (message[i] == ' ')
				break;

		}
} */

	string full_message = "from: " + nickname + " " + message;
	messageArray.push_back(full_message);
	setCounter();
	int ind = getCounter();

	//cout << "it works" << messageArray[ind-1] << endl;
}

void Messages::showlastMessage(string nickname) 
{
	int ind(0);
	for (int i(0); i < messageArray.size(); i++) {
		string at_nickname = " @" + nickname;
		if (messageArray[i].find(at_nickname) != string::npos){
			cout << messageArray[i] << endl;
			ind++;
		}
	}
	
	if (ind == 0) {
		cout << "No messages. Start a conversation!" << endl;
	}
	
}

