#include <iostream>
using namespace std;
int perevernut(int a) {
    int obr = 0;
    while (a > 0) {
        obr = a % 10 + obr * 10;
        a = a / 10;
    }
    return obr;
}
int main() {
    int s;
    cin >> s;
    cout << perevernut(s); 
    return 0;
}
