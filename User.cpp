#include "User.h"
#include <string>
#include <iostream>
#include "Message.h"
#include <vector>
using namespace std;
/*
void User::setnickname(string _nickname) {
	nickname_ = _nickname;
}
*/
string User::getnickname() {
	return nickname_;
}
/*
void User::setpassword(string _password) {
	password_ = _password;
}
*/
string User::getpassword() {
	return password_;
}
