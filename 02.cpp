#include <iostream>
#include <string>
using namespace std;
int program() {
    string s;
    int a = 0;
    int counter1 = 0;
    int counter2 = 0;
    cin >> s;
    while (s != "" ) {
        a = stoi(s);
        if (a > 0) {
            counter1++;
            counter2++;
        }
        else {
            counter2++;
        }
        cin >> s;
    }
    if ( counter1 == counter2) {
        cout << "Vse pologutelnye" << endl;
    }
    else {
        cout << "Est otrucatelnye" << endl;    
    }
    return 0;
}
int main() {
    program();
    return 0;
}

                                              
