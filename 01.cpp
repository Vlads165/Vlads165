
#include <iostream>
using namespace std;

int summa(int y, int z)  //функция суммы двух чисел
{
    return y+z;
}
int raznost(int y, int z)  //функция разности двух чисел
{
    return y-z;
} 
void summa_mass(int p,int l[],int h[])  //функция суммы двух одномерных массивов
{
    int d[p];
    for (int i=0; i < p; i++){
        d[i]=summa(l[i],h[i]);
        cout<<d[i]<< " ";
    }
}

void raznost_mass(int p, int l[],int h[])  //функция разности двух одномерных массивов
{
    int d[p];
    for (int i=0; i <p; i++){
        d[i]=raznost(l[i],h[i]);
        cout<<d[i]<< " "; 
    }
}

int main()
{
    int n,m;
    char k;
    cout << "Vedite kolvo strok " ;
    cin> > n; 
    cout << "Vedite kolvo kolonki " ;
    cin >> m; 
    int **a = new int* [n];
    int **b = new int* [n];
    for (int i=0; i < n; i++){
        a[i] = new int[m];
        b[i] = new int[m];
    }
    for (int i=0; i < n; i++){
        for (int j=0; j < m; j++){
            cout << "Vedite massiv 1 ";
            cin >> a[i][j]; 
        }
    }
    cout << "Vedite znak ";
    cin >> k;
    for (int i=0; i < n; i++){
        for (int j=0; j < m; j++){
            cout << "Vedite massiv 2 ";
            cin >> b[i][j]; 
        }
    }
    if (k == '+'){
        for (int i=0; i<n; i++){
          summa_mass(m,a[i],b[i]);
          cout << '\n';
        }
    }   
    else{
        for (int i=0; i<n; i++){    
          raznost_mass(m,a[i],b[i]);
          cout << '\n';
        }
    }
    for (int i=0; i < n; i++){
        delete[] a[i];
        delete[] b[i];
    }
    delete[] a;
    delete[] b;
}
