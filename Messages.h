#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class Messages
{

public : 
	void setCounter();
	int getCounter();
	void initializeArray();
	void writetoArray(string message, string* message_array);
	void sendMessage(string message, string nickname);
	void showlastMessage(string nickname);
	std::vector<std::string> messageArray{};
	string receiver{"          "};
	

protected :

	int counter = 0;

};

