#include <iostream>
using namespace std;

int delenie(int a, int b)
{
    while (b != 0) {
        return (a / b);
    }
    throw "Delenie na 0!";
}

int main()
{
    int a = 1;
    int b = 0;
    try {
        int z = delenie(a, b);
       
    }
    catch (const char* m) {
        cout << m << endl;
    }
    return 0;
}
