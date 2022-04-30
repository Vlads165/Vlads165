#include <iostream>
#include <string>
using namespace std;
int password(string* login)
{
    string pas;
    int counter = 0;
    while (counter != 3) {
        cout << "Password: ";
        cin >> pas;
        if (pas == "A1") {
            system("cls");
            cout << "Correct password ";
            counter = 3;
            return 0;
        }
        else {
            cout << "Try again" << endl;
        }
        counter++;
    } 
    throw "Wrong Password";

}

int main()
{
    string login;
    cout << "Login: ";
    cin >> login;
    try {
        password(&login);
    }
    catch (const char* m) {
        cout << m << endl;
    }
    return 0;
}
