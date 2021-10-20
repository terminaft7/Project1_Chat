#include "User.h"
#include <string>
#include <iostream>
#include "Messages.h"
#include <vector>
using namespace std;
#include "Userpool.h"

void Userpool::addUser(User username) {
	Userpool_vect.push_back(username);
}

int Userpool::checkUser(string nickname, string password) {
	if (!Userpool_vect.empty()) {
		for (int i(0); i < Userpool_vect.size(); i++) {

			if ((Userpool_vect[i].getnickname() == nickname) && (Userpool_vect[i].getpassword() == password)) {
				cout << "Login successful. " << endl;
				return 1;
			}
		}
	}
	cout << "Login failed. Try again." << endl;
	return 0;
}

void Userpool::showUsers() {
	string usernickname;
	for (int i(0); i < Userpool_vect.size(); i++) {
		usernickname = Userpool_vect[i].getnickname();
		cout << usernickname << endl;
	}
}
