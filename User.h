#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class User 
{
public : 
    void checkUser(string nickname, string password, User* userArray, int userCount);
    void createUser(string nickname, string password);
  
    void createUserArray();
   // string userArray[10] = {};
    std::vector<std::string> nicknameArray{};
    std::vector<std::string> passwordArray{};
    //User userArray[10];
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

