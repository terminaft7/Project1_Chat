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
