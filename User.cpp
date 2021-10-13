#include "User.h"
#include <string>
#include <iostream>
#include "Messages.h"
#include <vector>
using namespace std;

void User::setnickname(string _nickname) {
	nickname = _nickname;
}

string User::getnickname() {
	return nickname;
}

void User::setpassword(string _password) {
	password = _password;
}

string User::getpassword() {
	return password;
}



int User::checkUser(string nickname, string password, User *userArray, int userCount)
{
	

	for (int i(0); i < userCount; i++) {
		
		if ((userArray[i].nickname == nickname) && (userArray[i].password == password)) {
			cout << "Login successful. " << endl;
			return 1;
		}
	}
	cout << "Login failed. Try again." << endl;
	return 0;
	}


void User::showUsers(int userCount, User* userArray) {
	/*if (userCount == 0)
		cout << "No users" << endl;
	if (userCount > 0) { */
		string usernickname;
		for (int i(0); i < userCount; i++) {
			usernickname = userArray[i].getnickname();
			cout << usernickname << endl;
		}
	}
//}
	

//void User::createUserArray() {

	//User userArray[10];
//}

void User::addtoUserArray(User name, User *userArray, int userCount) {
	

	userArray[userCount] = name;
	

//	for (int j(0); j <= userCount; j++) {
	//	cout << "see the users" << userArray[j].nickname << endl;
	//}
		
	setUsercount();
}



void User::setUsercount() {
	counter++;
}

int User::getUsercount() {
	return counter;
}