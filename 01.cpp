#include <iostream>
#include <cmath>
using namespace std;
float program() {
    float a,b,c,k;
    cout << "Vedite a,b,c" << endl;
    cin >> a >> b >> c;
    k = (c - b) / a;
    return k;
}
int main() {
    cout << program();
    return 0;
}
