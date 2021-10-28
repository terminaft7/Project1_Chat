#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "User.h"
using namespace std;

class Userpool {
public:
	void addUser(User username);
	vector<User> Userpool_vect;
	bool checkUser(string& nickname, string& password);
	void showUsers();

protected:
	
};