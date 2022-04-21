#include <iostream>

using namespace std;
struct drob
{
    int chis;
    int znam;
};
void socr(drob* a)         //функция сокращения дробей
{
    for (int i = a->chis; i > 0; i--) {    
      if ((a->chis % i == 0) and (a->znam % i == 0)){
        a->chis = a->chis/i; 
        a->znam = a->znam/i; 
      }
    }
}
void sort(int f, int u[]){     //функция для сортировки
    int c;
    for ( int i = 0; i < f; i++){
      for (int j = 0; j < f; j++){
          if (u[j]>u[j+1]){
              c = u[j];
              u[j] = u[j+1];
              u[j+1] = c;
          }
      }
    }
    for ( int i = 0; i < f; i++)
      cout << u[i] << " ";
}
int main()
{   
    drob l;
    l.chis = 2;
    l.znam = 4;
    socr(&l);
    cout << l.chis << "/" << l.znam << endl;
    int n;
    cout << "Vedite razmernost" << endl;
    cin >> n;
    int a[n];
    for ( int i = 0; i < n; i++){
      cout << "Vedite massiv" << " ";
      cin >> a[i];
    }
    sort(n,a);
    return 0;
}
