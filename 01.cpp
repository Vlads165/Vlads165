#include <iostream>
#include <cmath>
using namespace std;
int kvyrav() {
    float a,b,c;
    cout << "Vedite koef a,b,c" << endl;
    cin >> a >> b >> c;
    if (b * b - 4 * a * c > 0) {
        cout << "x1 = " << (-b + sqrt(b * b - 4 * a * c))/(2 * a)<< endl;
        cout << "x2 = " << (-b - sqrt(b * b - 4 * a * c))/(2 * a)<< endl;
    } 
    else {
        if (b * b - 4 * a * c == 0) {
          cout << "x=" << (-b / (2 * a)) << endl;
        } 
        else {
          cout << "Resheniy net" << endl;
        }
    }
    return 0;
}
int main() {
    kvyrav();
    return 0;
}    
