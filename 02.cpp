#include <iostream>
using namespace std;
int program() {
    float a;
    cout << "Vedite a"<< endl;
    cin >> a;
    if (a > 0) {
        cout << " Chislo pologitelnoe " << endl; 
        } 
    else {
        if (a == 0) {
          cout << "Chislo ravno 0" << endl;
          } 
        else {
        cout << "Chiclo otrizatelnoe"<< endl;}
    }
      return 0;
}
int main() {
    program();
}
