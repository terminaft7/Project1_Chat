#include "Messages.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std;


void Messages::setFrom(string nickname) {
	from = nickname;
}
void Messages::setTo_whom(string nickname) {
	to_whom = nickname;
}

void Messages::writeMessage(string _message) {
	message = _message;
}
string Messages::getFrom() {
	return from;
}
string Messages::getTo_whom() {
	return to_whom;
}

string Messages::getMessage() {
	return message;
}

void Messages::showlastMessage(string nickname, vector <Messages> messageArray, string receiver)
{
	int ind(0);
	for (int i(0); i < messageArray.size(); i++) {

		if ((messageArray[i].to_whom == nickname && messageArray[i].from == receiver) || messageArray[i].to_whom == "all") {
			cout << "from " << messageArray[i].from << " : " << messageArray[i].message << endl;
			ind++;
		}

		if (receiver != "all" && messageArray[i].to_whom == receiver && messageArray[i].from == nickname) {
			cout << "from " << messageArray[i].from << " : " << messageArray[i].message << endl;
			ind++;
		}
	}


	if (ind == 0) {
		cout << "No messages. Start a conversation!" << endl;
	}
}
