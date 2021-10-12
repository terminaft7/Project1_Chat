#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class User 
{
public : 
    int checkUser(string nickname, string password, User* userArray, int userCount);
    
    void createUserArray();

    void setnickname(string nickname);
    void setpassword(string password);
    void setUsercount();
    int getUsercount();
    string getnickname();
    string getpassword();
    void addtoUserArray(User name, User *userArray, int userCount);
    int counter = 0;

protected : 
    string nickname;
    string password;


    
  

};

