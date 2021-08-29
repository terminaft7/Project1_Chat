#pragma once
#include <string>
#include <iostream>
using namespace std;

class User 
{
public : 
    void checkUser(string nickname, string password);
    void createUser(string nickname, string password);
    void sendMessage(string message);

protected : 
    string nickname;
    string password;


    
  

};

