#pragma once
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class User 
{
public : 
  
    void setnickname(string nickname);
    void setpassword(string password);
    string getnickname();
    string getpassword();

protected : 
    string nickname;
    string password;


    
  

};

