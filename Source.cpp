#include <iostream> 
#include "Messages.h"
#include "User.h"
#include "Userpool.h"
#include <vector>
using namespace std;


int main()
{
    char action('a');
    vector<Messages> messageArray;
    Userpool Userpool_vect;

    while (action != 'q')
    {

        cout << "Press 1 to login with your nickname and password " << endl;
        cout << "Press 2 to create new user and send message " << endl;
        cout << "Press 3 to see all users." << endl;
        cout << "Press q to quit" << endl;
        cin >> action;

        if (action == 'q')
            break;
        string nickname;
        string password;
        string name;
        string receiver;
        char message[100];
        int ind(0);
        
        switch (action)
        {
        case '1':
            if (messageArray.empty()) {
                cout << "There are no users or messages. Please create a new user." << endl;
                break;
            }
            cout << "Enter your nickname" << endl;
            cin >> nickname;
            cout << "Enter your password" << endl;
            cin >> password;
                   

            ind = Userpool_vect.checkUser(nickname, password);
            if (ind == 1) {
                cout << "Enter receiver" << endl;
                cin >> receiver;
                messageArray[0].showlastMessage(nickname, messageArray, receiver);
                cin.ignore();
                std::cin.getline(message, 100);
                Messages obj;
                obj.setFrom(nickname);
                obj.setTo_whom(receiver);
                obj.writeMessage(message);
                messageArray.push_back(obj);
           
                break;
            }
            else break;

           
        case '2': {

            cout << "Enter your name" << endl;
            cin >> name;
            cout << "Enter your nickname" << endl;
            cin >> nickname;
            if (nickname == "all") {
                cout << "This nickname is not allowed. Please try again." << endl;
                break;
            }
            cout << "Enter your password" << endl;
            cin >> password;
            User name;
            Messages obj;
            name.setnickname(nickname);
            name.setpassword(password);
            Userpool_vect.addUser(name);
                 

            cout << "Type receiver, type enter, then type your message." << endl;
            cout << "Write all as a receiver to send message to all users." << endl;
            cout << "Enter receiver" << endl;
            cin >> receiver;
            cin.ignore();
            std::cin.getline(message, 100);
            obj.setFrom(nickname);
            obj.setTo_whom(receiver);
            obj.writeMessage(message);
            messageArray.push_back(obj);
                      
            break; }

        case '3':

            if (Userpool_vect.Userpool_vect.empty())
            {
                cout << "No users" << endl;
                break;
            }
            else if (!Userpool_vect.Userpool_vect.empty())
            {
                Userpool_vect.showUsers();
                break;
            }  

            return 0;
        }
    }
}