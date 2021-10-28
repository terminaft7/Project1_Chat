#include "Message.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;

/*
void Message::setFrom(string nickname) {
	from_ = nickname;
}
void Message::setTo_whom(string nickname) {
	to_whom_ = nickname;
}

void Message::writeMessage(string _message) {
	message_ = _message;
}
string Message::getFrom() {
	return from_;
}
string Message::getTo_whom() {
	return to_whom_;
}

string Message::getMessage() {
	return message_;
}
*/
void Message::showlastMessage(const string& nickname, const vector <Message>& messageArray, const string& receiver)
{
	int ind(0);
	for (int i(0); i < messageArray.size(); i++) {

		if ((messageArray[i].to_whom_ == nickname && messageArray[i].from_ == receiver) || messageArray[i].to_whom_ == "all") {
			cout << "from " << messageArray[i].from_ << " : " << messageArray[i].message_ << endl;
			ind++;
		}

		if (receiver != "all" && messageArray[i].to_whom_ == receiver && messageArray[i].from_ == nickname) {
			cout << "from " << messageArray[i].from_ << " : " << messageArray[i].message_ << endl;
			ind++;
		}
	}


	if (ind == 0) {
		cout << "No messages. Start a conversation!" << endl;
	}
}
