#include <iostream> 
#include "Messages.h"
#include "User.h"
using namespace std;


int main()
{
    char action('a');


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

        switch (action)
        {
        case '1':

            cout << "Enter your nickname" << endl;
            cin >> nickname;
            cout << "Enter your password" << endl;
            cin >> password;
            //1.здесь отправляем никнейм и пароль на проверку в класс user(nickname, password);
            //2. если всё ок, подключаем метод отправки сообщений array(messages); как-то так
            

            break;
        case '2':

            cout << "Enter your nickname" << endl;
            cin >> nickname;
            cout << "Enter your password" << endl;
            cin >> password;
            //в данном случае мы снова приняли nickname и password, но они будут использованы для запуска конструктора для нового User'a
                // просьбу ввести пароль второй раз для надёжности реализуем потом
            break;


            return 0;
        }
    }
}