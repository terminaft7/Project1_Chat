#pragma once
#include <string>
#include <iostream>
using namespace std;

class User 
{
public : 
  
    User() = default;
    User(const string& nickname, const string& password) : nickname_(nickname), password_(password) {}
   // void setnickname(string nickname);
  //  void setpassword(string password);
    string& getnickname();
    string& getpassword();

protected : 
    string nickname_;
    string password_;


    
  

};

