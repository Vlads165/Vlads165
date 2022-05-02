#include <iostream>
#include <string>
using namespace std;

string login;
string pas;

int password( string login)
{
    int counter = 0;
    if (login == "REU") {
        while (counter != 3) {
            cout << "Password: ";
            cin >> pas;
            if (pas == "A1") {
                return 0;
            }
            else {
                cout << "Try again" << endl;
            }
            counter++;
        }
        throw "Wrong Password";
    }
    else {
        throw "Wrong Login";
    }
}

int main()
{
    cout << "Login: ";
    cin >> login;
    try
    {
        password(login);     // непонятно конечно зачем нам передовать login, если у нас теперь это глабальная пременная, ну раз в задании написано так....
        system("cls");
        cout << "Correct password ";

    }
    catch (const char* m)
    {
        cout << m << endl;
    }
    return 0;
}
