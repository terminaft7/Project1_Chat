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


/*void User::sendMessage(string message)
{
	if (message[0] == '@') {
		
		string receiver = "          ";
		int j = message.size();
		int i(1);
			while (message[i] != ' ') {
				receiver[i - 1] = message[i];
				i++;
				
			}
		
		cout << "here is the " << receiver << endl;
	}

	

}*/

void User::checkUser(string nickname, string password, User *userArray, int userCount)
{
	//int ind = getUsercount();
	int ind = 0;
	for (int i(0); i < userCount; i++) {
		
		if ((userArray[i].nickname == nickname) && (userArray[i].password == password)) {
			cout << "Login successful. Type your message: ";
			ind = 1;
		}
	}
	if (ind == 0) {
		cout << "Login failed. Try again." << endl;
	}
	
} 

void User::createUserArray() {
	//string userArray[10][3] = {};
	//std::vector<std::string> nicknameArray{};
	//std::vector<std::string> passwordArray{};
	//std::vector<std::string> messageArray{};
	User userArray[10];
}

void User::addtoUserArray(User name, User *userArray, int userCount) {
	
	//int ind = getUsercount();
	userArray[userCount] = name;
	

	for (int j(0); j <= userCount; j++) {
		cout << "see the users" << userArray[j].nickname << endl;
	}
		
	setUsercount();
}


void User::createUser(string nickname, string password)
{
	//User nickname;

	//nickname = nickname;
	//password = password;
	//userArray[0][0]= nickname;
	//userArray[0][1] = password;
	//cout << "hey" << userArray[0][0] << endl;
	//cout << "hey" << userArray[0][1] << endl;
	nicknameArray.push_back(nickname);
	passwordArray.push_back(password);
	//nicknameMessage.push_back(nickname);
	cout << "it works" << nicknameArray[0] << endl;

}

void User::setUsercount() {
	counter++;
}

int User::getUsercount() {
	return counter;
}