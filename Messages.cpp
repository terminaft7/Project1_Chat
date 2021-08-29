#include "Messages.h"
#include <string>
#include <iostream>
using namespace std;

//надо создать массив для стрингов и проинициализировать его (наверное), чтобы там не было мусора
void Messages::createArray() 
{

	string message_array[100];

	for (int i = 0; i < 100; i++) {
		message_array[i] = "0";
	}
}

void Messages::writetoArray(string message, string* message_array) 
{
	counter++;
	message_array[counter] = {message};

}
   