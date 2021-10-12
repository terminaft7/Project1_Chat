﻿#include <iostream> 
#include "Messages.h"
#include "User.h"
#include <vector>
using namespace std;


int main()
{
    char action('a');
    User userArray[10];
    Messages messageArray;

    int userCount(0);

    while (action != 'q')
    {

        cout << "Press 1 to login with your nickname and password " << endl;
        cout << "Press 2 to create new user " << endl;
        cout << "Press q to quit" << endl;
        cin >> action;

        if (action == 'q')
            break;
        string nickname;
        string password;
        string name;
        char message[100];
        int ind(0);
        


        switch (action)
        {
        case '1':

            cout << "Enter your nickname" << endl;
            cin >> nickname;
            cout << "Enter your password" << endl;
            cin >> password;
            //1.здесь отправляем никнейм и пароль на проверку в класс user(nickname, password);
            //2. если всё ок, подключаем метод отправки сообщений array(messages); как-то так

            ind = userArray[0].checkUser(nickname, password, userArray, userCount);
            if (ind == 1) {

                messageArray.showlastMessage(nickname);
              //  cout << "Write @ and user name, then write your message. E.g. @Luke I am your father." << endl;
                cin.ignore();
                std::cin.getline(message, 100);
                messageArray.sendMessage(message, nickname);
                break;
            }
            else break;

           // if (ind == 0) break;
        case '2':
      
            cout << "Enter your name" << endl;
            cin >> name;
            cout << "Enter your nickname" << endl;
            cin >> nickname;
            cout << "Enter your password" << endl;
            cin >> password;
            User name;
            name.setnickname(nickname);
            name.setpassword(password);
            name.addtoUserArray(name, userArray, userCount);
            userCount++;

            cout << "Write @ and user name, then write your message. E.g. @Luke I am your father." << endl;
            cin.ignore();
            std::cin.getline(message, 100);
            
            messageArray.sendMessage(message, nickname);
       

            //в данном случае мы снова приняли nickname и password, но они будут использованы для запуска конструктора для нового User'a
                // просьбу ввести пароль второй раз для надёжности реализуем потом
            break;


            return 0;
        }
    }
}